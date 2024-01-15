#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        vector<int> div;

        for (int i = 1; i * i <= n; i++)
        {
            if (n & i == 0)
            {
                div.push_back(i);
                if (n / i != i)
                    div.push_back(n / i);
            }
        }
        sort(div.begin(), div.end());

        for (auto x : div)
        {
            cout << x << " ";
        }
        cout << endl;
        /* code */
    }
}