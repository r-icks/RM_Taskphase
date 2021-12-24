#include<iostream>
using namespace std;

void Bsort(int arr[], int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Ssort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int binary(int arr[], int size, int num)
{
    int s=0;
    int e=size-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(arr[mid]>num)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    char sort;
    int bin;
    int binvalue;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int list[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array:";
        cin>>list[i];
    }
    cout<<"Enter what method to use for sorting the array:";
    cin>>sort;
    if(sort=='b')
    {
        Bsort(list, n);
    }
    else if(sort=='s'){
        Ssort(list, n);
    }

    cout<<"The sorted list is:";
    for(int i=0; i<n; i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element that u want to search for:";
    cin>>bin;
    binvalue=binary(list, n, bin);
    if(binvalue==-1)
    {
        cout<<"Your element was not found in the array";
    }
    else{
        cout<<"Your element holds the index value "<<binvalue;
    }
    
}