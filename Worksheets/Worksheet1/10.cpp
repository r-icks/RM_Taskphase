#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}

int main()
{
    auto start = high_resolution_clock::now();
    for (int i=0; i<=39; i++)
    {
        cout<<fibonacci(i)<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    //it takes like 2 seconds idk what to do RIP
}