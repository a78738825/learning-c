#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} linkedList;

void appendToLL(linkedList *list, Node *newNode);
void printLL(linkedList *list);
void insert_at_n(linkedList *list, int index, Node *newNode);

int main() {
    linkedList list = {0};
    Node node1 = {51, NULL};
    Node node2 = {61, NULL};
    Node node3 = {71, NULL};

    // Example usage:
    appendToLL(&list, &node1);
    appendToLL(&list, &node2);
    appendToLL(&list, &node3);
    printLL(&list);

    Node node4 = {69, NULL};
    insert_at_n(&list, 2, &node4);
    printLL(&list);

    return 0;
}

void appendToLL(linkedList *list, Node *newNode) {
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node *lastNode = list->head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void printLL(linkedList *list) {
    Node *current = list->head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf("\n");
}

void insert_at_n(linkedList *list, int index, Node *newNode) {
    if (index == 0) {
        newNode->next = list->head;
        list->head = newNode;
        return;
    }

    Node *current = list->head;

    for (int counter = 0; counter < (index - 1); counter++) {
        if (current == NULL) {
            printf("Index out of bounds!\n");
            return;
        }
        current = current->next;
    }

    if (current == NULL) {
        printf("Index out of bounds!\n");
        return;
    }

    Node *original = current->next;
    current->next = newNode;
    newNode->next = original;
}
