class MyStack {
      queue<int>m1;
       int front;
     int rear;
public:
    MyStack() {
         front=0;
       rear=0;
    }
    
    void push(int x) {
        m1.push(x);

        rear++;
    }
    
int pop() {
    int size = m1.size();
    for (int i = 0; i < size - 1; i++) {
        m1.push(m1.front());
        m1.pop();
    }
    int ans = m1.front();
    m1.pop();  
    return ans;
}

int top() {
    int size = m1.size();
    for (int i = 0; i < size - 1; i++) {
        m1.push(m1.front());
        m1.pop();
    }
    int ans = m1.front();
    m1.push(ans);  
    m1.pop();
    return ans;
}

    
    bool empty() {
        if(m1.empty()){
            return true;
        }
        else{
            return false;
        }
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