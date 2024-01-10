void enQueue(int element) {
    if (isFull()) {
        cout << "Queue is full";
    } else {
        if (front == -1)
            front = 0;

        rear++;
        items[rear] = element;

        cout << endl << "Inserted " << element << endl;
    }
}

int deQueue() {
    int element;
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return (-1);
    } else {
        element = items[front];
        if (front >= rear) {
            front = -1;
            rear = -1;
        } /* Q has only one element, so we reset the queue after deleting it. */
        else {
            front++;
        }

        cout << endl << "Deleted -> " << element << endl;

        return (element);
    }
}
