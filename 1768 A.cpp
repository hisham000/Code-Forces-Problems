#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t = 0;
    cin >> t;
    std::vector<long long> k(t);
 
    for (int i = 0; i < t; i++)
    {
        long long x = 0;
        cin >> x;
        k[i] = x;
    }
    for (int i = 0; i < t; i++)
    {
        cout << k[i] - 1 << endl;
    }
}