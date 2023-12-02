#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;

int findFirstNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (isdigit(c))
        {
            return int(c - '0');
        }
    }
    return 0;
}

int main()
{
    int sum = 0;
    string line;

    while (getline(cin, line))
    {
        sum += 10 * findFirstNumber(line);
        reverse(line.begin(), line.end());
        sum += findFirstNumber(line);
    }
    cout << sum << endl;
    return 0;
}
