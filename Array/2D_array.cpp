#include<iostream>
using namespace std;

void  spiral_traversal(int arr[][100],int r,int c)
{
    int row_st=0;
    int row_ed=r-1;
    int col_st=0;
    int col_ed=c-1;
    for(int i=col_st;i<=col_ed;i++)
    {
        cout<<arr[row_st][i];
    }
    row_st++;
    for(int i=row_st;i<=row_ed;i++)
    {
        cout<<arr[i][col_ed];
    }
    col_ed--;
    for(int i=col_ed;i>=col_st;i--)
    {
        cout<<arr[row_ed][i];
    }
    row_ed--;
    for(int i=row_ed;i>=row_st;i--)
    {
        cout<<arr[i][col_st];
    }
    col_st++;
}
int main()
{
    int r,c;
    cout<<"Enter the row and colum: ";
    cin>>r>>c;
    int arr[100][100];
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
           cin>>arr[i][j];
       }
    }
    spiral_traversal(arr,r,c);
    return 0;
}
