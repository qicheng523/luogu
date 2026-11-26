#include <iostream>
#include <cstdlib>

using namespace std;

struct student
{
    int ma, cn, en, sum;
};

int main(void)
{
    int n = 0;
    cin >> n;
    student mates[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> mates[i].cn >> mates[i].ma >> mates[i].en;
        mates[i].sum = mates[i].cn + mates[i].ma + mates[i].en;
    }
    int pair = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int count = 0;
            if (abs(mates[i].cn - mates[j].cn) <= 5)
            {
                count++;
            }
            if (abs(mates[i].ma - mates[j].ma) <= 5)
            {
                count++;
            }
            if (abs(mates[i].en - mates[j].en) <= 5)
            {
                count++;
            }
            if (abs(mates[i].sum - mates[j].sum) <= 10)
            {
                count++;
            }
            if (count == 4)
            {
                pair++;
            }
        }
    }
    cout << pair << '\n';
    return 0;
}