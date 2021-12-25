#include<iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout<<"Enter the number of rows in matrix:";
    cin>>r1;
    cout<<"Enter the number of columns in matrix:";
    cin>>c1;
    int m1[r1][c1];
    int m2[r1][c1];
    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            int temp;
            cout<<"Enter in row "<<i+1<<" column "<<j+1<<":";
            cin>>temp;
            m1[i][j]=temp;
            if(temp==0){
                for(int k=0;k<c1;k++)
                {
                    m2[i][k]=0;
                }
                for(int k=0;k<r1;k++)
                {
                    m2[k][j]=0;
                }
            }
        }
    }
    cout<<"The matrix is:"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<m1[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<r1; j++)
        {
            if(m2[i][j]!=0)
            {
                m2[i][j]=m1[i][j];
            }
        }
    }
cout<<"The resultant matrix is:"<<endl;
for(int i=0; i<r1; i++)
{
            for(int j=0; j<c1; j++)
    {
        cout<<m2[i][j];
    }
    cout<<endl;
}
}
