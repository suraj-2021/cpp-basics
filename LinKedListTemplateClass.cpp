#include <iostream>
using namespace std;

// Node structure using templates
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

// Linked List class using templates
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to add a node at the end
    void insert(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        Node<T>* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        while (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList<int> intList;  // Linked list of integers
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.display();

    LinkedList<string> strList;  // Linked list of strings
    strList.insert("Hello");
    strList.insert("World");
    strList.display();

    return 0;
}
