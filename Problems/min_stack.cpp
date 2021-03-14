stack<int> current;
stack<int> minimum;
int mini;
MinStack::MinStack() {
    while(!current.empty())
        current.pop();
    while(!minimum.empty())
        minimum.pop();
    mini = INT_MAX;
}

void MinStack::push(int x) {
    current.push(x);
    mini = min(x, mini);
    minimum.push(mini);
    return;
    
}

void MinStack::pop() {
    if(current.empty())
        return;
    current.pop();
    minimum.pop();
    mini = current.empty()?INT_MAX:minimum.top();
    return;
}

int MinStack::top() {
    if(current.empty())
        return -1;
    return current.top();
}

int MinStack::getMin() {
    if(current.empty())
        return -1;
    return mini;
}

