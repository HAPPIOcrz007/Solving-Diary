#include <bits/stdc++.h>

namespace custom
{
    long long gcd(long long a, long long b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long n, a, b;
        std::cin >> n >> a >> b;
        std::vector<long long> list(n, 0);
        for (int i = 0; i < n; i++)
            std::cin >> list[i];
        long long g = custom::gcd(a, b);
        for (int i = 0; i < n; i++)
            list[i] %= g;
        std::sort(list.begin(), list.end());

        long long answer = list.back() - list.front();
        for (int i = 1; i < n; i++)
        {
            answer = std::min(answer, g - (list[i] - list[i - 1]));
        }
        std::cout << answer << "\n";
    }
    return 0;
}
