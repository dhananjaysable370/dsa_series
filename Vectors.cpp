#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
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
    vector<int> arr = {1, 2, 3, 4, 5};
    int result = linearSearch(arr,7);
    cout<<result<<" "<<endl;
}
