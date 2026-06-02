#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st; 
    string s;
    int i = 0;
    cin >> s;

    while (i < s.size())
    {
        if (s[i] == '@') 
            break;

        else if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);

        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }
        else if (s[i] == '}')
        {
            if (st.empty() || st.top() != '{')
            {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }

        i++;
    }

    if (st.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
