class MyQueue {
public:
    stack<int> a;
    stack <int>b;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if(b.empty()){
            while(!a.empty()){
                int z=a.top();
                b.push(z);
                a.pop();
            }
        }
        int x=b.top();b.pop();
        return x;
    }
    
    int peek() {
        if(b.empty()){
            while(!a.empty()){
                int z=a.top();
                b.push(z);
                a.pop();
            }
        }
        return b.top();
    }
    
    bool empty() {
        return a.empty()&&b.empty();
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