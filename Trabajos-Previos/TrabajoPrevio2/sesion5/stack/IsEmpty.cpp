// Check if the stack is empty
int isEmpty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
    if (isFull(s)) {
        cout << "STACK FULL";
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    size++;
}

// Remove element from stack
void pop(st *s) {
    if (isEmpty(s)) {
        cout << "\n STACK EMPTY \n";
    } else {
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}
