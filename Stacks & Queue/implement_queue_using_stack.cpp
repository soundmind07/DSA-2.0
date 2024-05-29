problem link:-
  https://leetcode.com/problems/implement-queue-using-stacks/description/
Code:-
  class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(!s1.empty())
        {
            int val=s1.top();
            s1.pop();
            return val;
        }
        else
        return -1;
    }
    
    int peek() {
        int val=s1.top();
        return val;
    }
    
    bool empty() {
        if(s1.empty())
        return true;
        else
        return false;
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
