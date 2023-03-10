#include <iostream>
using namespace std;

int power(long long x, unsigned pow, int mod)
{
    int res = 1;
    while (pow > 0)
    {
        if (pow & 1)
        {
            // odd
            res = (res * (x) % mod) % mod;
        }
       
        x = ((x) % mod * (x) % mod) % mod;
         pow = (pow)%mod >> 1; // pow = pow/2
    }
    return res;
}

int main()
{
    int x, pow, mod;
    cout << "Enter x, pow, mod;";
    cin >> x >> pow >> mod;

    cout << power(x, pow, mod);
    // int res=1;
    // for(int i=0;i<pow;i++){
    //      res=res*x;
    // }
    // int modular=res%mod;
    // cout<<modular;
    return 0;
}