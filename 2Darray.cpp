
#include<iostream>
using namespace std;
const int row = 3;
const int col=3;
void traverse(int arr1[row][col])
{
    cout << "Traversing : " << endl  ;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl ;
    }
}
void insertion(int arr1[row][col],int r,int c,int value)
{
    if(r>=0 && r <row && c>=0 && c<col)
    {
        arr1[r][c] = value ;
    }
    else
    {
        cout << "Invalid position" ;
    }
}
void delation(int arr1[row][col],int r,int c)
{
    if(r>=0 && r <row && c >=0 && c < col)
    {
        arr1[r][c] = 0;
    }
    else
        {
           cout << "Invalid position " ;
        }
}

void searchelement(int arr1[row][col],int value)
{
    bool found = false ;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(arr1[i][j]==value)
           {
               cout << " FOUND" << endl;
               found = true;
           }
        }
    }
    if(!found)
    {
        cout << "ITEM NOT FOUND";
    }

}
void modify(int arr1[row][col],int r,int c,int value)
{
    if(r>=0 && c >=0 && r<row && c < col)
    {
        arr1[r][c] = value ;
    }
    else
    {
        cout << "INvalid position" ;
    }
}
void mergeelement(int arr1[row][col],int arr2[row][col],int mergee[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            mergee[i][j] = arr1[i][j] + arr2[i][j];
        }

    }
}
int main()
{
    int arr1[row][col]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[row][col]={{11,12,13},{14,15,16},{17,18,19}};

    traverse(arr1);

    insertion(arr1,2,0,100);
    traverse(arr1);

    delation(arr1,2,0);
    traverse(arr1);

    searchelement(arr1,2);

    modify(arr1,2,0,77);
    traverse(arr1);

    int mergee[row][col];
    mergeelement(arr1,arr2,mergee);
    traverse(mergee);
}
