#include<iostream>
using namespace std;

void copyy(char *copy, char *paste)
{
    while(*copy!='\0')
    {
        *paste=*copy;
        copy++;
        paste++;
    }
    *paste='\0';
}


int main()
{
    int n;
    cout<<"Enter the number of letters in the string:";
    cin>>n;
    n+=1;
    char copy[n];
    char paste[n];
    cout<<"Enter the word here:";
    cin>>copy;
    copyy(copy, paste);
    cout<<paste;
    
}