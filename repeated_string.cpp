#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long in_total = 0;
    long in_substr = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a')
        {
            in_substr++;
        }
    }
    in_total += in_substr*(n/s.length());
    
    int index = n % s.length();
    if(index != 0)
    {
        in_substr = 0;
        for(int i = 0; i < index; i++)
        {
            if(s[i] == 'a')
            {
                in_substr++;
            }
        }
        in_total += in_substr;
    }
    
    return in_total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
