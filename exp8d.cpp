# include<iostream>
using namespace std;
int main()
{
    int i,j,k,r = 0,c=0;
    int a[r][c];
    int da = 0;
    
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


    for (int i = 0; i < r; i++) 
    {
        da = da + a[i][i];
    }

cout<<"Diagonal Sum: "<<da<<endl;


}