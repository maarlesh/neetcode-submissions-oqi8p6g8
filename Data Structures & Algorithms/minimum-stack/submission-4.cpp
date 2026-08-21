#include<algorithm>

class MinStack {
public:
    long int n;
    vector<int> stac;
    vector<int> sortedArray;
    MinStack() {
        n = 0;     
    }
    
    void push(int val) {
       stac.push_back(val);
       sortedArray.push_back(val);
       sort(sortedArray.begin(), sortedArray.end());
    }
    
    void pop() {
        int topElement = top();
        stac.pop_back();
        auto it = std::find(sortedArray.begin(), sortedArray.end(), topElement);
        if (it != sortedArray.end()) {
            sortedArray.erase(it);
        }
    }
    
    int top() {
        return stac[stac.size()-1];
    }
    
    int getMin() {
        return sortedArray[0];
    }
};
