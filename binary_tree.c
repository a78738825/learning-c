#include <stdio.h>

typedef struct Node {
    struct Node *previous;
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} BinaryTree;

void append(BinaryTree *tree, Node *newBranch);
void search(BinaryTree *tree, int number);
// void convertArrayToBT(BinaryTree *tree, int *arr[]);

int main() {
    BinaryTree tree = {0};

    Node newBranch1 = {NULL, 11, NULL};
    Node newBranch2 = {NULL, 21, NULL};
    Node newBranch3 = {NULL, 31, NULL};

    append(&tree, &newBranch1);
    append(&tree, &newBranch2);
    append(&tree, &newBranch3);
    return 0;
}

void append(BinaryTree *tree, Node *newBranch) {
    if (tree->head == NULL) {
        tree->head = newBranch;
        return;
    }

    Node *currentLevel = tree->head;

    for (int level = 0; currentLevel != NULL; level++) {
        if (newBranch->data < currentLevel->data) {
            currentLevel = currentLevel->previous;
        } else if (newBranch->data > currentLevel->data) {
            currentLevel = currentLevel->next;
        } else {
            printf("[ %d ] already exists in the given tree!\n",
                   newBranch->data);
        }
    }

    currentLevel->data = newBranch->data;
}

/*
void convertArrayToBT(BinaryTree *tree, int *arr[]) {
    size_t len = (sizeof(*arr) / sizeof(*arr[0]));
}
*/
