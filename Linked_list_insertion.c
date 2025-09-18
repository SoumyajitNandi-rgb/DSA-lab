#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    // Traverse to (index-1)-th node
    while (i != index - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    if (p == NULL) {
        printf("Index out of bounds!\n");
        free(ptr);
        return head;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Initialize the list
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    // Insert 56 at index 1 (between head and second)
    head = insertAtIndex(head, 56, 1);

    printf("\nLinked list after insertion:\n");
    linkedListTraversal(head);

    return 0;
}
