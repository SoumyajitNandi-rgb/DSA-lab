#include <stdio.h>
#define CAPACITY 4

static int arr[CAPACITY];
static int top = -1;

// Push function
void push(int element) {
    if (top == CAPACITY - 1) {
        printf("Stack overflow!\n");
        return;
    }
    top++;
    arr[top] = element;
    return 1;
}
void pop(){
if(top==-1){
  printf("Stack underflow!");
  return 0;
}
top--;
return 1;
}

// Show stack function
void showStack() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = 0; i <= top; i++) {
        printf("|%d|\n", arr[i]);
    }
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
    push(13);
    showStack();
    return 0;
}
