#define MAX 128

typedef struct stack {
        int a[MAX];
        int curr;
}stack;
void push(stack *s, int number);
int pop(stack *s);
void init(stack *s);
int empty(stack *s);
int full(stack *s);
