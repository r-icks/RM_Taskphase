#include<iostream>
using namespace std;

int GCD(int big, int small)
{
    if(small==0){
        return big;
    }
    if(big==small){
        return big;
    }
    else
    {
        return GCD(small, big%small);     
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<"greatest divisor is "<<GCD(n1,n2);
}