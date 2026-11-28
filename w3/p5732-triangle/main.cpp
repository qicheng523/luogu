#include <iostream>

using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;
    int arr[25][25];
    arr[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j != i)
            {
                cout << arr[i][j] << ' ';
            }
            else 
            {
                cout << arr[i][j];
            }
        }
        cout << '\n';
    }
    return 0;
}