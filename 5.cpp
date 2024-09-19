#include <iostream>
using namespace std;
class QueueNode {
public:
    int data;
    QueueNode* next;
};
class QueueLinkedList {
    QueueNode* front;
    QueueNode* rear;
public:
    QueueLinkedList() {
        front = rear = nullptr;  }
    void insert(int value) {
        QueueNode* newNode = new QueueNode();
        newNode->data = value;
        newNode->next = nullptr;
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Inserted " << value << " into queue" << endl;}
    void deleteElement() {
        if (front == nullptr) {
            cout << "Queue Underflow!" << endl;
            return;}
        QueueNode* temp = front;
        front = front->next;
        cout << "Deleted " << temp->data << endl;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;}}
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
        } else {
            QueueNode* temp = front;
            cout << "Queue elements: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;}}};
int main() {
    cout<<"My name is Kamesh Singh"<<"\n";
    cout<<"Rollno. 50"<<"\n";
    int choice, value;
    QueueLinkedList queue;
    do {
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                queue.insert(value);
                break;
            case 2:
                queue.deleteElement();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;}} while (choice != 4);return 0;}
