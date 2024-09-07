#include <iostream>
using namespace std;
int sumN(int a, int b)
{
    return a + b;
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
    return 0;
}