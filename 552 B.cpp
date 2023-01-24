#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long num = 0;
    cin >> num;
    if (num < 10)
    {
        cout << num;
    }
    else
    {
        long long digs = 0;
        long long mil = 1;
        std::string str = std::to_string(num);
        long long y = 0;
        while (y < str.length())
        {
            digs = digs + (9 * (pow(10, y)) * (y + 1));
            num = num - (9 * pow(10, y));
            y++;
        }
        digs = digs + (num * (str.length()));

        cout << digs;
    }
    return 0;
}
