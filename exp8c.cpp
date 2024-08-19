# include<iostream>
using namespace std;
int main()
{
    int i,j,k,r = 0,c=0,s = 0;
    int a[r][c];
    int b[r][c];
    int p[r][c];
    
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"Matrix 2: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>b[i][j];
        }
    }
    cout<<endl;

    
for (int i = 0; i < r; ++i) 
{
        for (int j = 0; j < r; ++j) 
        {
            p[i][j] = 0;
            for (int k = 0; k <c; ++k) 
            {
                p[i][j] += a[i][k] * b[k][j];
            }
        }
}

    cout<<"Product: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}