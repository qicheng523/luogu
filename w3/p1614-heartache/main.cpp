#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    int arr[3005];
    int i = 0;
    for (; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = n * 100;
    for (int j = 0; j < n - m + 1; j++)
    {
        int count = 0;
        for (int k = 0; k < m; k++)
        {
            count += arr[j + k];
        }
        if (count < min)
        {
            min = count;
        }
    }
    cout << min << '\n';
    return 0;
}
