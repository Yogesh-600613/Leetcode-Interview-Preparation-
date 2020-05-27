class MinStack {
public:
    /** initialize your data structure here. */
    
    /*
        vector ki jagah stack bhi use kar sakte the 
    
    
    */
    
    
    vector<int> v,minv;
    MinStack() {
        v.reserve(1000);
        minv.reserve(1000);
    }
    
    void push(int x) {
            v.push_back(x);
            if(minv.empty())
                minv.push_back(x);
            else
                minv.push_back(  min(minv.back(), x)   );
    }
    
    void pop() {
            v.pop_back();
            minv.pop_back();

    }
    
    int top() {
            return v.back();

    }
    
    int getMin() {
        return minv.back();
    }
};







/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */