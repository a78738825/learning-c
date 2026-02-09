# Linked List in C: Annotated Explanation

This document explains a simple implementation of a singly linked list in C, including appending nodes and printing the list.

---

## 1. Node Structure

```c
typedef struct Node {
    int data;          // The data stored in the node
    struct Node *next; // Pointer to the next node in the list
} Node;
````

**Explanation:**

* Each `Node` stores an integer (`data`) and a pointer to the **next node**.
* The `next` pointer allows nodes to be linked together in memory.
* The `struct Node *` type indicates that `next` points to another node.

---

## 2. Linked List Structure

```c
typedef struct {
    Node *head; // Pointer to the first node of the list
} linkedList;
```

**Explanation:**

* The `linkedList` struct stores a single pointer: `head`.
* `head` points to the **first node** in the list.
* If the list is empty, `head` is `NULL`.

> Think of the `linkedList` struct as a container for the start of the list.

---

## 3. Appending a Node

```c
void appendToLL(linkedList *list, Node *newNode);
```

**Function purpose:**

* Add a new node to the **end** of a linked list.
* Parameters:

  * `list`: pointer to the linked list to modify.
  * `newNode`: pointer to the node to append.

**Implementation:**

```c
void appendToLL(linkedList *list, Node *newNode) {
    if (list->head == NULL) {
        list->head = newNode; // Empty list: new node becomes the head
    } else {
        Node *lastNode = list->head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next; // Traverse until last node
        }
        lastNode->next = newNode; // Attach new node at the end
    }
}
```

**Key points:**

* `list->head` uses the arrow `->` operator because `list` is a pointer to a struct.
* `lastNode->next` walks through the list until reaching the last node.
* The new node is attached by updating the `next` pointer of the last node.

---

## 4. Printing the List

```c
void printLL(linkedList *list) {
    Node *current = list->head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
}
```

**Explanation:**

* `current` traverses the linked list starting from `head`.
* Each node’s `data` is printed.
* `" -> "` is printed **between nodes**, but not after the last node.
* Loop continues until `current` becomes `NULL`.

---

## 5. Main Function

```c
int main() {
    linkedList list = {0}; // Initialize empty list (head = NULL)
    Node node1 = {51, NULL}; // Create a node with data=51

    // Example usage (if uncommented)
    // appendToLL(&list, &node1);
    // printLL(&list);

    return 0;
}
```

**Notes:**

* `linkedList list = {0};` initializes `head` to `NULL`.
* Nodes can be created on the stack (`Node node1`) or dynamically via `malloc`.
* `appendToLL(&list, &node1);` passes the **address of the list** so the function can modify it.

---

## 6. Memory & Pointers Recap

* `list` is a pointer to a `linkedList` → use `->` to access members.
* `newNode` is a pointer to a `Node`.
* Each node points to the **next node** via `next`.
* The list ends when a node’s `next` is `NULL`.

---

## 7. Example Output (if appended)

If you append multiple nodes:

```c
Node node2 = {42, NULL};
appendToLL(&list, &node1);
appendToLL(&list, &node2);
printLL(&list);
```

Output:

```
51 -> 42
```

---

## ✅ Summary

* `Node` structs store data and a pointer to the next node.
* `linkedList` struct stores the `head` pointer to the first node.
* `appendToLL` correctly adds a new node at the end.
* `printLL` traverses the list and prints all node values.
* Arrow operator `->` is used whenever accessing a struct **through a pointer**.
