#include<iostream>
using namespace std;

void selection(int arr[], int size, int d){
    
    if(size>1)
    {
        int low=d-size;
        int temp;
        for(int i=d-1; i>=d-size; i--)
        {
            if(arr[i]<arr[low]){
            low=i;
            }
        }
        temp=arr[d-size];
        arr[d-size]=arr[low];
        arr[low]=temp;
        selection(arr, size-1, d);        
    }
}

void Bubble(int arr[], int size)
{
    if(size>1)
    {
        for(int i=0; i<size-1; i++)
        {
            if(arr[i]>arr[i+1]){
                
            int temp;
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            }
        }
        Bubble(arr, size-1);
    }
}

int main()
{
    int n;
    int d;
    cout<<"Number of elements in array:";
    cin>>n;
    d=n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Element number "<<i+1<<" is:";
        cin>>arr[i];
    }
    cout<<"What method of sorting b or s:";
    char choice;
    cin>>choice;
    if (choice=='s')
    {
        selection(arr, n, d);
    }
    else if(choice='b')
    {
        Bubble(arr, n);
    }
    else{cout<<"no sorting for u"<<endl;}
    selection(arr, n, d);
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}