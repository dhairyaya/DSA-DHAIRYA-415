#include<bits/stdc++.h>
using namespace std;

struct linked_list {
    int data;
    linked_list *next;
} *start = NULL;

struct linked_list* getnode() {
    struct linked_list* node = (struct linked_list*)malloc(sizeof(struct linked_list));
    node->next = NULL;
    return node;
}

void traverse(struct linked_list* start) {
    struct linked_list* temp = start;
    int count = 0;
    cout << "Linked list: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << "\nNo. of nodes: " << count << endl;
}

struct linked_list* insbeg(linked_list* start, int x) {
    linked_list* new_node = getnode();
    new_node->data = x;
    new_node->next = start;
    return new_node;
}

struct linked_list* insafter(linked_list* start, int key, int x) {
    if (start == NULL) {
        cout << "List empty, inserting as first node.\n";
        return insbeg(start, x);
    }

    linked_list* ptr = start;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        cout << "Key not found!\n";
        return start;
    }

    linked_list* new_node = getnode();
    new_node->data = x;
    new_node->next = ptr->next;
    ptr->next = new_node;

    return start;
}

struct linked_list* insend(linked_list* start, int x) {
    linked_list* new_node = getnode();
    new_node->data = x;
    new_node->next = NULL;

    if (start == NULL) {
        return new_node;
    }

    linked_list* ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return start;
}

struct linked_list* delbeg(linked_list* start) {
    if (start == NULL) {
        cout << "The linked list is empty\n";
        return NULL;
    }

    linked_list* temp = start;
    cout << "Deleted Value: " << temp->data << endl;
    start = start->next;
    delete temp;
    return start;
}

struct linked_list* delend(linked_list* start) {
    if (start == NULL) {
        cout << "The linked list is empty\n";
        return NULL;
    }
    if (start->next == NULL) {
        cout << "Deleted Value: " << start->data << endl;
        delete start;
        return NULL;
    }

    linked_list* ptr = start;
    linked_list* prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    cout << "Deleted Value: " << ptr->data << endl;
    prev->next = NULL;
    delete ptr;
    return start;
}

struct linked_list* delafter(linked_list* start, int key) {
    if (start == NULL) {
        cout << "The linked list is empty\n";
        return NULL;
    }

    linked_list* ptr = start;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->next;
    }

    if (ptr == NULL || ptr->next == NULL) {
        cout << "No node found after the given key!\n";
        return start;
    }

    linked_list* temp = ptr->next;
    cout << "Deleted Value: " << temp->data << endl;
    ptr->next = temp->next;
    delete temp;

    return start;
}

void searchNode(linked_list* start, int key) {
    int pos = 1;
    linked_list* ptr = start;
    while (ptr != NULL) {
        if (ptr->data == key) {
            cout << "Element " << key << " found at position " << pos << endl;
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    cout << "Element " << key << " not found!\n";
}

int main() {
    int choice, x, key;
    while (true) {
        cout << "\nEnter your choice:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert after a node\n";
        cout << "3. Insert at end\n";
        cout << "4. Delete from beginning\n";
        cout << "5. Delete after a node\n";
        cout << "6. Delete at end\n";
        cout << "7. Traverse\n";
        cout << "8. Search\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            start = insbeg(start, x);
            break;

        case 2:
            cout << "Enter key after which to insert: ";
            cin >> key;
            cout << "Enter value: ";
            cin >> x;
            start = insafter(start, key, x);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> x;
            start = insend(start, x);
            break;

        case 4:
            start = delbeg(start);
            break;

        case 5:
            cout << "Enter key after which to delete: ";
            cin >> key;
            start = delafter(start, key);
            break;

        case 6:
            start = delend(start);
            break;

        case 7:
            traverse(start);
            break;

        case 8:
            cout << "Enter value to search: ";
            cin >> key;
            searchNode(start, key);
            break;


        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
