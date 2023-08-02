class MyQueue
{
    public:
        stack<int> s1, s2;
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (!s2.empty())
        {
            int x = s2.top();
            s2.pop();
            return x;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int x = s2.top();
            s2.pop();
            return x;
        }
    }

    int peek()
    {
        if (!s2.empty())
        {
            int x = s2.top();
            return x;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int x = s2.top();
            return x;
        }
    }

    bool empty()
    {
        return s1.empty() and s2.empty();
    }
};