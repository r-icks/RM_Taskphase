#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of digits in the number:";
    cin>>n;
    char num[n+1];
    cout<<"Enter the number:";
    cin>>num;
    int ascend=0;
    int descend=0;
    int peak=0;
    int equal=0;
    while(peak<1)
    {
        for(int i=0; i<n-1; i++)
        {
            if(num[i]<num[i+1])
            {
                ascend+=1;
            }
            else if(num[i]==num[i+1])
            {
                equal+=1;
            }
            else{
                peak+=1;
                break;
            }
        }
    }
    for(int i=ascend; i<n-1; i++)
    {
        if(num[i]<num[i+1])
        {
            cout<<i;
            peak+=1;
            break;
        }
        else if(num[i]==num[i+1])
        {
            equal+=1;
        }
        else
        {
            descend+=1;
        }
    }
    if(descend>0 && ascend>0 && equal==0 && peak==1)
    {
        cout<<"The number is a hill number";
    }
    else{
        cout<<"The number is not a hill number";
    }
}
