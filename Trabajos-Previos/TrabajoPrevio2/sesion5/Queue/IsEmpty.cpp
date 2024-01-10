void display() {
    /* Función para mostrar los elementos de la cola */

    int i;

    if (isEmpty()) {
        cout << endl << "Empty Queue" << endl;
    } else {
        cout << endl << "Front index -> " << front;
        cout << endl << "Items -> ";
        for (i = front; i <= rear; i++)
            cout << items[i] << " ";
        cout << endl << "Rear index -> " << rear << endl;
    }
}
