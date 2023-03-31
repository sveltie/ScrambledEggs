#include <iostream>
#include <vector>
typedef unsigned long long ull;

using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ull UPPER_BOUND = 600851475143;
    int lastPrime = 2;

    for (int i = lastPrime; i < UPPER_BOUND; i++)
    {
        if (isPrime(i) && (UPPER_BOUND % i == 0))
        {
            lastPrime = i;
            UPPER_BOUND = UPPER_BOUND / i;
        }
    }

    cout << UPPER_BOUND << endl;

    return 0;
}