#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main()
{
    int friends = 0;
    int n = 0;
    int m = 0;
    int k = 0;
    cin >> n >> m >> k;
    int a[m + 1];
    string a1[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
        a1[i] = bitset<20>(a[i]).to_string();
    }
 
    for (int i = 0; i < m; i++)
    {
        int diff = 0;
        for (int j = 0; j <= 20; j++)
        {
 
            if (a1[i][j] != a1[m][j])
            {
                diff = diff + 1;
            }
        }
        if (diff <= k)
        {
            friends = friends + 1;
        }
    }
    cout << friends;
}