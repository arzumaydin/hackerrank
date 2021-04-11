#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int count = a.length() + b.length();
    bool init = false;
    for(int i = 0; i < a.length(); i++)
    {
        for(int j = 0; j < b.length(); j++)
        {
            if(a[i] == b[j])
            {
                count -= 2;
                a[i] = 0; // to avoid deleting the same element again
                b[j] = 1;
                break;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
