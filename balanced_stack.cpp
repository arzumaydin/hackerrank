#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> my_stack;
    bool balanced = true;
    int i = 0;
    while(balanced && i < s.length())
    {
        char a = s[i];
        if(a == '(' || a == '[' || a == '{')
        {
            my_stack.push(a);
        }
        else{
            if(!my_stack.empty() && a == ')' && my_stack.top() == '(')
            {
                my_stack.pop();
            }
            else if(!my_stack.empty() && a == ']' && my_stack.top() == '[')
            {
                my_stack.pop();
            }
            else if(!my_stack.empty() && a == '}' && my_stack.top() == '{')
            {
                my_stack.pop();
            }
            else{
                balanced = false;
            }
        }
        i++;
    }
    
    
    if(my_stack.empty() && balanced)
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
