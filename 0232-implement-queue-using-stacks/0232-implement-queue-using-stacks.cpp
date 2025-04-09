class MyQueue {
private:
    stack<int> entry;
    stack<int> exit;

public:
    MyQueue() {
    }
    
    void push(int x) {
        entry.push(x);
    }
    
    int pop() {
        int val;
        if(exit.empty()){
            while(!entry.empty()){
                val = entry.top();
                entry.pop();
                exit.push(val);
            }
        }

        val = exit.top();
        exit.pop();
        return val;
    }
    
    int peek() {
        int val;
        if(exit.empty()){
            while(!entry.empty()){
                val = entry.top();
                entry.pop();
                exit.push(val);
            }
        }
        return exit.top();
    }
    
    bool empty() {
        return exit.empty() && entry.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */