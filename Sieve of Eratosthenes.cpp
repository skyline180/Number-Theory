/*
    The Sieve of Eratosthenes is an ancient algorithm for finding prime numbers up to a given number,
    called the limit. It works by iteratively marking as composite (not prime) the multiples of each
    prime, starting with 2. The algorithm is simple, efficient, and has a time complexity of O(n log log n)
    where n is the limit. It is a fundamental tool in number theory and is widely used in various
    fields such as cryptography, coding theory, and computational complexity.
*/
#include <iostream>
#include <vector>
using namespace std;

bool sieve(int n)
{
    //int n;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    sieve(N);
}
