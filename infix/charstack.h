#define MAX 128

typedef struct stack {
        char a[MAX];
        int curr;
}stack;
void chpush(stack *s, char character);
char chpop(stack *s);
void chinit(stack *s);
int chempty(stack *s);
int chfull(stack *s);
