#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int ed = st; ed < n; ed++)
        {
            currentSum += arr[ed];
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << maxSum << endl;
}