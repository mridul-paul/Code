#include<iostream>
#include<vector>
using namespace std;
void mergee(vector<int> &arr,int st , int mid , int en)
{
    vector<int> temp;
    int i = st,j=mid+1;
    while(i<=mid && j <=en)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=en)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idex=0;idex<temp.size();idex++)
    {
        arr[idex+st]=temp[idex];
    }
}
void mergesort(vector<int> &arr,int st,int en)
{
    if(st<en)
    {
        int mid = st + (en-st)/2;

        mergesort(arr,st,mid);
        mergesort(arr,mid+1,en);
        mergee(arr,st,mid,en);
    }
}
int main()
{
    vector<int> arr = {2, 4, 1, 6, 5, 7, 3} ;
    mergesort(arr,0,arr.size()-1);

    for(int value : arr)
    {
        cout << value << " ";
    }
    return 0;
}
