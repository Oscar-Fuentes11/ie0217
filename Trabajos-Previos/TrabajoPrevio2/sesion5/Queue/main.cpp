int main() {
    Queue q;

    // deQueue is not possible on an empty queue
    q.deQueue();

    // enQueue 5 elements
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // 6th element can't be added because the queue is full
    q.enQueue(6);

    q.display();

    // deQueue removes the element entered first, i.e., 1
    q.deQueue();

    // Now we have just 4 elements
    q.display();

    return 0;
}
