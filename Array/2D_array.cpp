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
//Searching element in the array:
#include<iostream>
using namespace std;

int main()
{
    int row,col,ele;
    cout<<"Enter roes and col: ";
    cin>>row>>col;
    cout<<"enter the element want to search: ";
    cin>>ele;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"output array: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == ele)
            {
                cout<<"Elememnt found";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
//Spiral order matrix traversal 

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
//to solve the problem of watestage of memory we use dynamic memory allocation.
//fowing is the code.
#include <iostream>
using namespace std;

void spiral_traversal(int **arr, int r, int c)
{
    int row_st = 0;
    int row_ed = r - 1;
    int col_st = 0;
    int col_ed = c - 1;
    
    while (row_st <= row_ed && col_st <= col_ed)
    {
        for (int i = col_st; i <= col_ed; i++)
        {
            cout << arr[row_st][i] << " ";
        }
        row_st++;

        for (int i = row_st; i <= row_ed; i++)
        {
            cout << arr[i][col_ed] << " ";
        }
        col_ed--;

        if (row_st <= row_ed)
        {
            for (int i = col_ed; i >= col_st; i--)
            {
                cout << arr[row_ed][i] << " ";
            }
            row_ed--;
        }

        if (col_st <= col_ed)
        {
            for (int i = row_ed; i >= row_st; i--)
            {
                cout << arr[i][col_st] << " ";
            }
            col_st++;
        }
    }
}

int main()
{
    int r, c;
    cout << "Enter the row and column: ";
    cin >> r >> c;

    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiral_traversal(arr, r, c);

    // Deallocate memory
    for (int i = 0; i < r; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

/*Given a square matrix A and its number of rows (or columns) N
return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row ans column.
CONSTRAINTS:
1<=N<=1000*/

#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the row and colum number: ";
    cin>>r>>c;
    int arr[50][50];
    int arr_transpose[50][50];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
   /* cout<<"output of the array: \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr_transpose[i][j] = arr[j][i];
        }
    }
    cout<<"transpose matrix is: \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<arr_transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
//2approach
#include<iostream>
using namespace std;

int main()
{
    int r,c,temp;
    cout<<"Enter type number of row and column: ";
    cin>>r>>c;
    int arr[50][50];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<=c;j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
//matrix multipication 
Given rwo 2-Dimensiona; arrays os size n1*n2 and n2*n5 .your task is to mulyiply there matrices and output the multuplies matrix
Constraints
1<=n1, n2,n3 <=300;
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the order of matrix n1 n2 n3: ";
    cin>>n1 >> n2 >> n3;
    
    int mat_1[n1][n2];
    int mat_2[n2][n3];
    int mat_mul[n1][n3];
    cout<<"first matrix: \n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>mat_1[i][j];
        }
    }
    cout<<"second matrix;\n";
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>mat_2[i][j];
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            mat_mul[i][j]=0;
        }
    }
    cout<<"\nMatrix multiiplication: \n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0;k<n2;k++)
            {
                mat_mul[i][j] = mat_1[i][k] * mat_2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<mat_mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
//need to check.
/*Given a nxm matrix 
write an algorithm to find that the given value exits in the matrix or not.
Integers in each row are sorted in ascending from left to right.
integers in each column are sorted in ascending from top to bottom. */
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the row and column: \n";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(r < n && c <m)
    {
        if(arr[r][c] == target)
        {
            found=true;
        }
        if(arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
        if(found == true)
        {
            cout<<"Element found";
        }
        else
        {
            cout<<"Element not found;";
        }
    }
    
    return 0;
}
//time compexity: O(n+m);
