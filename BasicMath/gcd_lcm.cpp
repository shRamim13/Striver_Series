#include <bits/stdc++.h>
using namespace std;

int __GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    int m, n;
    cin >> m >> n;

    cout << __GCD(m, n) << " ";
    cout << m * n / __GCD(m, n) << endl; // LCM calculation
}
