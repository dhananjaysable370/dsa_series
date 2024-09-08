#include <iostream>
using namespace std;

int decimalToBinary(int decimal)
{
    int ans = 0, pow = 1;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        decimal /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    for (int i = 1; i < 11; i++)
    {
        cout << decimalToBinary(i) << endl;
    }

    return 0;
}