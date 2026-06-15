#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        if(s.empty() || s.length() == 1){
            return false;
        }
        bool result = false;
        char openChars[] = {'{', '[' , '('};
        char closedChars[] = {'}', ']' , ')'};
        stack<char> st;
        for(int i=0; i < s.length(); i++){
            if(isContains(openChars, s[i], 3)){
                st.push(s[i]);
            }else if(!st.empty()){
                if(equivalent(st.top(), s[i])){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }

    bool isContains(char chars[], char target, int size){
        for (int i = 0; i < size ; i++) {
            if (chars[i] == target) {
                return true;
            }
        }
        return false;
    }

    bool equivalent(char s, char c){
        if(s == '{'){
            return c == '}';
        }else if(s == '['){
            return c == ']';
        }else if(s == '('){
            return c == ')';
        }
        return false;
    }
};
