#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Emter the number of letters:";
    cin>>n;
    char string[n+1];
    cout<<"Enter a word:";
    cin>>string;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(string[j]>string[j+1])
            {
                char temp;
                temp=string[j];
                string[j]=string[j+1];
                string[j+1]=temp;
            }
        }
    }
    cout<<"The sorted string is "<<string;
    return 0;
}
