
#include<iostream>
using namespace std;
const int n = 6 ;
void traverse(int arr1[n])
{

    for(int i=0;i<n;i++)
    {
        cout << arr1[i] << " "<<endl;
    }
}
int main()
{
    int arr1[n]={1,2,3,4,5,6};
    int arr2[n]={2,3,4,5,6,7};

    traverse(arr1);
    traverse(arr2);
}
