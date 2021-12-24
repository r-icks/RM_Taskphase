#include<iostream>
using namespace std;

void binary(int n)
{
    int i=0;
    int temp[100];
    while(n>0)
    {
        temp[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<temp[j];
    }
    cout<<endl;
}
void octal(int n)
{
    int i=0;
    int temp[100];
    while(n>0)
    {
        temp[i]=n%8;
        n/=8;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<temp[j];
    }
    cout<<endl;
}
void hexadeci(int n)
{
    int i=0;
    char temp[100];
    while(n>0)
    {
        if(n%16==10)
        {
            temp[i]='A';
        }
        else if(n%16==11)
        {
            temp[i]='B';
        }
        else if(n%16==12)
        {
            temp[i]='C';
        }
        else if(n%16==13)
        {
            temp[i]='D';
        }
        else if(n%16==14)
        {
            temp[i]='E';
        }
        else if(n%16==15)
        {
            temp[i]='F';
        }
        else{
            temp[i]='0'+n%16;
        }

        n/=16;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<temp[j];
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter a number here:";
    cin>>n;
    binary(n);
    octal(n);
    hexadeci(n);

}