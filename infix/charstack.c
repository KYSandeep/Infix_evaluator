#include"charstack.h"

void chpush(stack *s, char character){
	s->a[s->curr] = character;
	s->curr++;
}
char chpop(stack *s){
	char p = s->a[s->curr-1];
	s->curr--;
	return p;
}
void chinit(stack *s){
	s->curr = 0;
}
int chempty(stack *s){
	if(s->curr == 0)
		return 1;
}
int chfull(stack *s)
	return (s->curr == 128);

