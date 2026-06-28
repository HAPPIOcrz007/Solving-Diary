#include <bits/stdc++.h>
const long long MOD = 998244353;

namespace custom
{
    long long modpow(long long base, long long exp)
    {
        long long res = 1;
        while (exp > 0)
        {
            if (exp & 1)
                res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }
};
int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        long long n, m, r, c;
        std::cin >> n >> m >> r >> c;

        long long exp = n * (c - 1) + (r - 1) * (m - c + 1);
        std::cout << custom::modpow(2, exp) << "\n";
    }
    return 0;
}