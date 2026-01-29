#include<iostream>
using namespace std;
class Solution {
public:
    static const long long MOD = 1000000007;

    long long power(long long base, long long exp) {
        long long ans = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = (ans * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long evenPos = (n + 1) / 2;
        long long oddPos  = n / 2;

        long long ans = (power(5, evenPos) * power(4, oddPos)) % MOD;
        return ans;
    }
};
