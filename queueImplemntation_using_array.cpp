#include <iostream>
using namespace std;

#define SIZE 5  // Maximum size of the queue

int queue[SIZE];  // Array to hold the queue elements
int front = -1;   // Points to the front of the queue
int rear = -1;    // Points to the rear of the queue

// Function to check if the queue is full
bool isFull() {
    return rear == SIZE - 1;
}

// Function to check if the queue is empty
bool isEmpty() {
    return front == -1;
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full! Cannot enqueue." << endl;
    } else {
        if (front == -1) {  // If the queue is empty
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout << "Enqueued " << value << "." << endl;
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty! Cannot dequeue." << endl;
    } else {
        int dequeuedValue = queue[front];
        if (front == rear) {  // If the queue becomes empty after dequeue
            front = rear = -1;
        } else {
            front++;
        }
        cout << "Dequeued " << dequeuedValue << "." << endl;
    }
}

// Function to view the front element of the queue
void peek() {
    if (isEmpty()) {
        cout << "Queue is empty! No front element." << endl;
    } else {
        cout << "Front element is " << queue[front] << "." << endl;
    }
}

// Function to display all the elements in the queue
void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    peek();
    display();

    enqueue(60);  // This will fail since the queue is full
    dequeue();
    enqueue(60);  // This will succeed after dequeueing an element

    display();

    return 0;
}
