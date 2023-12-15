/*#include <stdio.h>
#include <stdlib.h>

struct position {
	int x;
	int y;
	struct position* ptr;
};
struct position* append(struct position* t, int x) {
	if (t == NULL) {
		t = (struct position*)malloc(sizeof(struct position));
	}
	else
		t = t->ptr = (struct position*)malloc(sizeof(struct position));
	t->x = x;
	t->ptr = NULL;
	return t;
};
void push_front(struct position** head, int num){
	struct position* n = (struct position*)malloc(sizeof(struct position));
	n->x = num;
	n->ptr = *head;
	*head = n;
}


int main() {
	struct position* tail = NULL;
	struct position* head = NULL;
	int num = 0;
	

	head = tail = append(tail, 10);
	tail = append(tail, 20);
	tail = append(tail, 30);
	tail = append(tail, 40);
	tail = append(tail, 50);

	struct position* p;
	
	push_front(&head,100);
	for (p = head;p != NULL;p = p->ptr)
		printf("%d ", p->x);
	
	return 0;


}*/