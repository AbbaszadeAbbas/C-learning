#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m = 0, p = 0;
    cin>>n;
    while(n != 0){
        int q = n%10;
        if(q%2 == 1){
            m = m + q*pow(10, p);
            p++;
        }
        n = n/10;
    }
    cout<<m<<endl;
}
