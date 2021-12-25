#include<iostream>
using namespace std;
int sumfact(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n1,n2;
    cout<<"Enter 2 numbers:";
    cin>>n1>>n2;
    int s1=sumfact(n1);
    int s2=sumfact(n2);
    if(s2==n1&&s1==n2)
    {
        cout<<"The numbers are amicable numbers";
    }
    else{
        cout<<"The numbers are not amicable numbers";
    }
}
