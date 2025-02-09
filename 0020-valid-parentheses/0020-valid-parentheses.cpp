#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);  // Push opening brackets
            } else {
                if (st.empty()) return false; // Closing bracket without an opening

                char top = st.top();
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')) {
                    st.pop();  // Pop matched opening bracket
                } else {
                    return false; // Mismatched closing bracket
                }
            }
        }

        return st.empty(); // If stack is empty, all brackets are matched
    }
};
