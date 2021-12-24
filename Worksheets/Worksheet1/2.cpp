#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the no. of rows in first matrix:";
    cin>>r1;
    cout<<"Enter the no. of columns in first matrix:";
    cin>>c1;
    cout<<"Enter the no. of rows in second matrix:";
    cin>>r2;
    cout<<"Enter the no. of columns in second matrix:";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible";
    }
    else{
        int m1[r1][c1];
        int m2[r2][c2];
        cout<<"Enter the elements of first matrix:"<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<"Enter in row "<<i+1<<" column "<<j+1<<":";
                cin>>m1[i][j];
            }    
        }
        cout<<"Enter the elements of second matrix:"<<endl;
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<"Enter in row "<<i+1<<" column "<<j+1<<":";
                cin>>m2[i][j];
            }    
        }
        int multi[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                multi[i][j]=0;
                for (int k=0;k<c1;k++)
                {
                    multi[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        cout<<"The resultant matrix is:"<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<multi[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}