#include<iostream>
using namespace std;

void initial(int m[100][100], int r, int c)
{
    cout<<"Enter elements for the matrix:"<<endl;;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter for row "<<i+1<<" and col "<<j+2<<":";
            cin>>m[i][j];
        }
    }
}

void print(int m[100][100], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        cout<<endl;
        for(int j=0; j<c; j++)
        {
            cout<<m[i][j]<<" ";
        }
    }
}

void multiply(int m1[100][100], int m2[100][100], int m3[100][100], int r1, int c1, int r2, int c2)
{
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            m3[i][j]=0;
            for(int k=0; k<r2; k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}

int transpose(int m[100][100],int t[100][100], int r, int c)
{
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            t[j][i]=m[i][j];
        }
    }
}

int main()
{
    cout<<"Enter the rows and columns of 1st matrix:";
    int r1, c1;
    cin>>r1>>c1;

    cout<<"Enter the rows and columns of 2nd matrix:";
    int r2, c2;
    cin>>r2>>c2;
    int m1[100][100];
    int m2[100][100];

    cout<<"1st matrix:";
    initial(m1,r1,c1);
    cout<<endl<<"2nd Matrix:"<<endl;
    initial(m2,r2,c2);

    print(m1,r1,c1);
    cout<<endl;
    print(m2,r2,c2);
    cout<<endl;

    
    int m1m2[100][100];
    int tm1m2[100][100];
    
    multiply(m1,m2,m1m2,r1,c1,r2,c2);
    transpose(m1m2, tm1m2, r1, c2);

    cout<<endl<<endl<<endl<<"(AB)':";
    print(tm1m2, c2, r1);
    cout<<endl;

    int tm1[100][100];
    int tm2[100][100];
    int tm2tm1[100][100];

    transpose(m1, tm1, r1, c1);
    transpose(m2, tm2, r2, c2);
    multiply(tm2, tm1, tm2tm1, c2, r2, c1, r1);

    cout<<endl<<"(A'B'):";
    print(tm2tm1, c2, r1);
    cout<<endl;

    cout<<"Hence (AB)' is equal to (A'B')";
}