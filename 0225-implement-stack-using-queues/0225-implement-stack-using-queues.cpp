class MyStack {
public:
queue<int>Qq;
    MyStack() {
    }
    
    void push(int x) {
        int n=Qq.size();
        Qq.push(x);
        for(int i=0;i<n;i++){
            Qq.push(Qq.front());
            Qq.pop();
        }
    }
    
    int pop() {
        int rett=Qq.front();
        Qq.pop();
        return rett;
    }
    
    int top() {
        return Qq.front();
    }
    
    bool empty() {
        return Qq.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */