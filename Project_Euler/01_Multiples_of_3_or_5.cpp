#include <iostream>
const int UPPER_CONSTRAINT = 1000;

using namespace std;

int main()
{
    int sum = 0;

    for (int i = 3; i < UPPER_CONSTRAINT; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}