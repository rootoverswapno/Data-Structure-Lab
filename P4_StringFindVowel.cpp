#include <bits/stdc++.h>
using namespace std;
int tofindsize(string &str)
{
    int ct = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        ct++;
    }
    return ct;
}
int findvowelfrequency(string &s, int n)
{
    int ct = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            ct++;
    }
    return ct++;
}
int main()
{

    string s;
    cin >> s;
    int l = tofindsize(s);
    int size_vowel = findvowelfrequency(s, l);
    cout << size_vowel << endl;

    return 0;
}