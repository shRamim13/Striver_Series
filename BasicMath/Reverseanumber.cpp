#include <bits/stdc++.h>
using namespace std;

int Reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }

    return rev;
}

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        cout << Reverse(n) << endl;
    }
}