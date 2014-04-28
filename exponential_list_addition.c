#include <stdio.h>
#include <stdlib.h>

typedef struct eq {
	int e;
	int c;
	struct eq *next;
} eq;


eq *combine(eq *p1, eq *p2) {
	eq *p3 = NULL;
	eq *tail = NULL;
	eq *temp = NULL;

	// build out the list
	while(p1 != NULL || p2 != NULL) {
		temp = (eq*)malloc(sizeof(eq));
		if (p1 == NULL) {
			temp->e = p2->e;
			temp->c = p2->c;
			temp->next = p3;
			p2 = p2->next;
		}
		else if (p2 == NULL) {
			temp->e = p1->e;
			temp->c = p1->c;
			temp->next = p3;
			p1 = p1->next;
		}
		else if (p1->e < p2->e) {
			temp->e = p2->e;
			temp->c = p2->c;
			temp->next = p3;
			p2 = p2->next;
		}
		else if (p1->e > p2->e) {
			temp->e = p1->e;
			temp->c = p1->c;
			temp->next = p3;
			p1 = p1->next;
		}
		else {
			temp->e = p1->e;
			temp->c = p1->c + p2->c;
			temp->next = p3;
			p2 = p2->next;
			p1 = p1->next;
		}
		p3 = temp;
	}
	temp = p3;

	// rotate the list around
	while (p3) {
		eq * ptr = p3->next;
		p3->next = tail;
		tail = p3;
		p3 = ptr;
	}

	return (tail);
}
