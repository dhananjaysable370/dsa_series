#include <iostream>
using namespace std;

int decimalToBinary(int decimalNum)
{
    int ans = 0, pow = 1;
    while (decimalNum > 0)
    {
        int rem = decimalNum % 2;
        decimalNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    for (int i = 1; i < 11; i++)
    {
        cout << "Number " << i <<" : "<< decimalToBinary(i) << endl;
    }

    return 0;
}