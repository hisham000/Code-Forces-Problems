#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
using namespace std;
 
 
 
int main()
{
    int t = 0;
    cin >> t;
    int n;
    vector<long long>a(n);
    
 
    for (int i = 0; i < t; i++)
    {
        a.clear();
        long long result = 0LL;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            long long l=0LL;
            //cin >> a[j];
            cin>>l;
            a.push_back(l);
        }
        
        for (int k = 1; k < n; k++)
        {
 
            a[0] = a[k] * a[0];
            a[k] = 1;
        }
        for (long long x : a)
        {
            result += x;
        }
        cout << result * 2022 << endl;
    }
 
    return 0;
}