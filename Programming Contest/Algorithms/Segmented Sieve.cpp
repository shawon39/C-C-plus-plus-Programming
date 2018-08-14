#include <bits/stdc++.h>
using namespace std;

using namespace std;

#define MAX 1000000000

typedef vector<bool> VB;
typedef vector<int> VI;

// This holds the primes from 3..sqrt(MAX)
VI primes;

// Finds the primes from 3..n and stores them in the global "primes".
static void findPrimes(int n)
{
    int i;
    int sqrtn = sqrt(n);
    VB  is_prime(n+1, true);

    for (i = 3; i <= sqrtn; i += 2) {
        if (is_prime[i]) {
            int increment = i+i;
            primes.push_back(i);
            for (int j = i * i; j <= n; j += increment) {
                is_prime[j] = false;
            }
        }
    }
    for (; i <= n; i += 2) {
        if (is_prime[i])
            primes.push_back(i);
    }
}

// Finds the primes in the range [m..n] and prints them.
void segmented_sieve(int m, int n)
{
    int range = n - m;
    VB is_prime(range + 1, true);

    for (int prime : primes) {
        int increment = prime + prime;
        // Start should be the first multiple of prime >= m, or prime^2,
        // whichever is larger.  Also make sure start is odd.
        int start = max(((m + prime - 1) / prime) * prime, prime * prime);
        if ((start & 1) == 0)
            start += prime;
        // Adjust to range so we don't have to subtract m in the loop.
        start -= m;
        for (int i = start; i <= range; i += increment) {
            is_prime[i] = false;
        }
    }

    if (m <= 2 && n >= 2)
        printf("2 ");
    for (int k = (m & 1) ? 0 : 1; k <= range; k += 2) {
        if (is_prime[k]) {
            printf("%d ", m + k);
        }
    }
    puts("");
}


int main()
{
    int t;
    scanf("%d", &t);

    findPrimes(sqrt(MAX));
    while (t--) {
        int m, n;
        scanf("%d%d", &m, &n);
        if (m == 1) m++;
        segmented_sieve(m, n);
    }
    return 0;
}
