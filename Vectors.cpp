#include <iostream>
#include <vector>
using namespace std;
void reverseArray(int arr[])
{
    int start = 0;
    int size = 5;
    int end = 4;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int ans = 0;
    reverseArray(arr);

    // cout << ans << endl;
}
