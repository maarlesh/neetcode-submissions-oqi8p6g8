#include<stack>
class Solution {
public:
    bool isValid(string s) {
        vector<char> closing = {')' , ']' , '}'};
        stack<char> st;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if((s[i] == ')' || s[i] == '}' || s[i] == ']') && st.empty()){
                return false;
            }else if(s[i] == ')' && st.top() == '('){
                st.pop();
            }else if(s[i] == '}' && st.top() == '{'){
                st.pop();
            }else if(s[i] == ']' && st.top() == '['){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
