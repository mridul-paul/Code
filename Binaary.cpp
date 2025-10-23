#include <iostream>
using namespace std;
int main()
 {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start=0,End=n,mid,item,loc;
    cin>>item;
    while(start<=End)
    {
        mid=(start+End)/2;
        if(arr[mid]==item)
        {
            loc=mid;
            break;
        }
        else if(arr[mid]<item)
        {
            start=mid+1;
        }
        else
        {
            End=mid-1;
        }
    }
    if(loc!=-1)
    {
        cout<<"FOund and the location is : "<<loc<<endl;
    }
    else
    {
        cout<<"Can't found."<<endl;
    }
    return 0;
 }
