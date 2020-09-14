#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float arr[50];
    cout << "Enter total number of elements (1 to 50): ";
    cin >> n;
    cout << endl;
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number  " <<  ;
       cin >> arr[i];
    }
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << endl;
    cout << "Largest element is: " << arr[0];
    return 0;
}


