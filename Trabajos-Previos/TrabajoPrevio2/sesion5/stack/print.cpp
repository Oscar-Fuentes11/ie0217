// Print elements of stack
void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < size; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int ch;

    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";

    printStack(s);

    free(s); // Liberar la memoria asignada

    return 0;
}
