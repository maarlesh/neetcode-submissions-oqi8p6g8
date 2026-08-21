class MinStack {
public:
    vector<int> st;
    vector<int> shortSt;
    long int min;
    MinStack() {
        min = LONG_MAX;
    }
    
    void push(int val) {
        st.push_back(val);
        if(shortSt.empty()){
            shortSt.push_back(val);
        }else{
            if(shortSt.back() > val){
                shortSt.push_back(val);
            }else{
                shortSt.push_back(shortSt.back());
            }
        }
    }
    
    void pop() {
        st.pop_back();
        shortSt.pop_back();
    }
    
    int top() {
        return st[st.size() - 1];
    }
    
    int getMin() {
        return shortSt[shortSt.size() - 1];
    }
};
