class MyStack
{
    public:
        queue<int> *q1 = new queue<int> (), *q2 = new queue<int> ();

    void push(int x)
    {
        q2->push(x);
        while (!q1->empty())
        {
            q2->push(q1->front());
            q1->pop();
        }
        swap(q1, q2);
    }

    int pop()
    {
        int res = q1->front();
        q1->pop();
        return res;
    }

    int top()
    {
        return q1->front();
    }

    bool empty()
    {
        return q1->empty();
    }
};