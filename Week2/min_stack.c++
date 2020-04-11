class MinStack {
public:
    /** initialize your data structure here. */
    stack <int> main_stack;
    stack<int> min_value_stack;
    MinStack() {
        
    }
    
    void push(int x) {
        if(main_stack.empty()){
            min_value_stack.push(x);
        }
        else{
            if(x>min_value_stack.top())
                min_value_stack.push(min_value_stack.top());
            else
                min_value_stack.push(x);
        }
        main_stack.push(x);
    }
    
    void pop() {
        main_stack.pop();
        min_value_stack.pop();
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_value_stack.top();
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