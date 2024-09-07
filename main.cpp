#include <iostream>
using namespace std;
int sumN(int a, int b)
{
    return a + b;
}
int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int a = 34, b = 25;
    int *d = &a;
    int *c = &b;
    *d = 3;
    *c = 10;
    cout << sumN(*d, *c) << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // function call
    cout << sumOfDigits(9873) << endl;
    return 0;
}