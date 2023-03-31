#include <iostream>
typedef unsigned long long ull;
const ull UPPER_CONSTRAINT = 4000000;

using namespace std;

class Fibonacci
{
public:
    ull a = 1, b = 2, sum = 0, next = 0;

    void sum_even(ull bound)
    {
        while (b <= bound)
        {
            next = a + b;

            if (b % 2 == 0)
            {
                sum += b;
            }

            a = b;
            b = next;
        }

        cout << sum << endl;
    }
};

int main()
{
    Fibonacci fibonacci;

    fibonacci.sum_even(UPPER_CONSTRAINT);

    return 0;
}