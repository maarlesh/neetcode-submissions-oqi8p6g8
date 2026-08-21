#include<vector>
#include <string>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<string> st;
        for(string token : tokens){
            if(token == "+"){
                string num1 = st[st.size() - 1];
                st.pop_back();
                string num2 = st[st.size() - 1];
                st.pop_back();
                st.push_back(to_string(stoi(num1) + stoi(num2)));
            }else if(token == "-"){
                string num1 = st[st.size() - 1];
                st.pop_back();
                string num2 = st[st.size() - 1];
                st.pop_back();
                st.push_back(to_string(stoi(num2) - stoi(num1)));
            }else if(token == "*"){
                string num1 = st[st.size() - 1];
                st.pop_back();
                string num2 = st[st.size() - 1];
                st.pop_back();
                st.push_back(to_string(stoi(num1) * stoi(num2)));
            }else if(token == "/"){
                string num1 = st[st.size() - 1];
                st.pop_back();
                string num2 = st[st.size() - 1];
                st.pop_back();
                st.push_back(to_string(stoi(num2) / stoi(num1)));
            }
            else{
                st.push_back(token);
            }
            // printArray(st);

            cout<<endl;
        }
        return stoi(st[st.size() - 1]);
    }

    void printArray(vector<string>& arr){
        for(string s : arr){
            cout<< s <<" ,";
        }

    }
};
