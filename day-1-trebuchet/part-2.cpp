#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;

string replaceLetters(string s)
{
    s = std::regex_replace(s, std::regex("one"), "one1one");
    s = std::regex_replace(s, std::regex("two"), "two2two");
    s = std::regex_replace(s, std::regex("three"), "three3three");
    s = std::regex_replace(s, std::regex("four"), "four4four");
    s = std::regex_replace(s, std::regex("five"), "five5five");
    s = std::regex_replace(s, std::regex("six"), "six6six");
    s = std::regex_replace(s, std::regex("seven"), "seven7seven");
    s = std::regex_replace(s, std::regex("eight"), "eight8eight");
    s = std::regex_replace(s, std::regex("nine"), "nine9nine");
    return s;
}

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
        line = replaceLetters(line);
        sum += 10 * findFirstNumber(line);
        reverse(line.begin(), line.end());
        sum += findFirstNumber(line);
    }
    cout << sum << endl;
    return 0;
}
