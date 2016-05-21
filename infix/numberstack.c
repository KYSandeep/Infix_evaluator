/*the definition of the numerical stack*/
#include"numberstack.h"

void push(stack *s, int number){
	s->a[s->curr] = number;
	s->curr++;
}
int pop(stack *s){
	int p = s->a[s->curr-1];
	s->curr--;
	return p;
}
void init(stack *s){
	s->curr = 0;
}
int empty(stack *s){
	if(s->curr == 0)
		return 1;
}
int full(stack *s)
	return (s->curr == 128);

