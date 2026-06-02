#include <bits/stdc++.h
using namespace std;

bool isBalanced(string expr) {
    stack<char> st;
    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false; // closing without opening

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty(); // true if nothing is left unclosed
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
