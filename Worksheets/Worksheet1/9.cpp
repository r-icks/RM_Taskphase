#include<iostream>
#include<string>
using namespace std;

void sortlen(string arr[], int n)
{
    if(n==1){
        return;
    }
    int high=n-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i].length()>arr[high].length())
        {
            high=i;
        }
    }
    string str;
    str=arr[high];
    arr[high]=arr[n-1];
    arr[n-1]=str;
    sortlen(arr, n-1);
}
void sort(string arr[100], int i, int len)
{
    if(len==1)
    {
        return;
    }
    for(int k=0; k<len-1; k++)
    {
        if(arr[i][k]>arr[i][k+1])
        {
            cout<<arr[i][k];
            char temp;
            temp=arr[i][k];
            arr[i][k]=arr[i][k+1];
            arr[i][k+1]=temp;
        }
    }
    sort(arr,i, len-1);
}


int main()
{
    int n;
    cout<<"Enter the number of words:";
    cin>>n;
    string arr[100];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter word "<<i+1<<":";
        cin>>arr[i];
    }
    sortlen(arr, n);


    for(int i=0; i<n; i++)
    {
        int len=arr[i].length();
        sort(arr, i, len);
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}