#include <bits/stdc++.h>
using namespace std;
int countingDegit(int n)
{
    int cnt = 0;
    while (n>0)
    {
        n=n/10;
        cnt++;
    }
    
    return cnt;
}

int main()
{
   while (1)
   {
     int n;
    cin >> n;
    cout << countingDegit(n)<<endl;
   // cout<<int(log10(n)+1)<<endl;
    /* code */
   }
   
}