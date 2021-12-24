#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
    int factorial=fact(n-1)*n;
    return factorial;
    }
}

int main()
{
    cout<<"Enter the number:";
    int n;
    cin>>n;
    cout<<fact(n);
}