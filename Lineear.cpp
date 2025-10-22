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
    int loc = -1, item;
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (item == arr[i])
        {
            loc = i;
            break;
        }
    }
    if (loc != -1)
    {
        cout << "Found and location is: " << loc << endl;
    }
    else
    {
        cout << "Can't Found." << endl;
    }
    return 0;
}
