#include <iostream>

using namespace std;

bool lamps[2000005];

int main(void)
{
    int n = 0;
    cin >> n;
    double a_i = 0;
    int t_i = 0;
    long long number = 0;
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a_i >> t_i;
        a_i *= 1000000;
        long long A = a_i + 0.5;
        for (int j = 1; j <= t_i; j++)
        {
            number = j * A;
            ret = number / 1000000;
            lamps[ret] = !lamps[ret];
        }
    }
    for (int i = 1; i < 2000005; i++)
    {
        if (lamps[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}