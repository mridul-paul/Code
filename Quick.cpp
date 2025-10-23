#include<iostream>
#include<vector>

using namespace std;
int parTition(vector<int>&arr,int st,int en)
{
    int index=st-1;
    int pv=arr[en];
    for(int j=st;j<=en-1;j++)
    {
        if(arr[j]<=pv)
        {
            index++;
            swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[index],arr[en]);
    return index;
}
void quicksort(vector<int>&arr,int st, int en)
{
    if(st<en)
    {
        int pv=parTition(arr,st,en);
        quicksort(arr,st,pv-1);
        quicksort(arr,pv+1,en);
    }
}
int main()
{

    vector<int>arr={5,9,3,1,7,3,8,6,0};
    quicksort(arr,0,arr.size()-1);
    for(int value : arr)
    {
        cout<<value<<" ";
    }
    return 0;
}

