#include <stdio.h>
#define CAPACITY 4

static int arr[CAPACITY];
static int top = -1;

// Push function
int push(int element) {
    if (top == CAPACITY - 1) {
        printf("Stack overflow!\n");
        return 0;
    }
    top++;
    arr[top] = element;
    return 1;
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return 0;
    }
    top--;
    return 1;
}

// Show stack function (Top at the top, like LIFO)
void showStack() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements (Top ↓ Bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("|%d|\n", arr[i]);
    }
    printf("-----\n"); // separator (bottom of stack)
}

int main() {
    push(3);
    push(5);
    push(7);
    push(9);
    push(11); // This will cause overflow
    showStack();

    pop();
    pop();
    showStack();

    push(10);
    push(11);
    push(13); // overflow again
    showStack();

    return 0;
}


