class MyQueue {
    stack<int> s1;

public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s1.empty()) return -1; 

        int x = s1.top();
        s1.pop();

        if (s1.empty()) {
            return x;
        }

        int res = pop();  
        s1.push(x);       
        return res;
    }

    int peek() {
        if (s1.empty()) return -1; 

        int x = s1.top();
        s1.pop();

        if (s1.empty()) {
            s1.push(x);   
            return x;
        }

        int res = peek();
        s1.push(x);
        return res;
    }

    bool empty() {
        return s1.empty();
    }
};
