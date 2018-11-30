/*Nithya Venugopal
  S3 D 39
  29_Implementation of queue using LL*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
}*HEADER;
int deleteAll() {
	struct node *ptr = HEADER, *prevPtr;
	while (ptr != NULL) {
		prevPtr = ptr;
		ptr = ptr->next;
		free(prevPtr);
	}
	HEADER->next = NULL;
	return (0);
}
struct node *newNode() {
	struct node *newptr = malloc(sizeof(struct node));
	if (newptr == NULL) {
		printf("Memory overflow");
		deleteAll();
		exit(0);
	}
	return (newptr);
}
void enqueue() {
  int data;
  printf("Enter data to be entered : ");
  scanf("%d", &data);
	struct node *newptr = newNode(), *currentNode = HEADER;
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}
	newptr->next = currentNode->next;
	newptr->data = data;
	currentNode->next = newptr;
}
void dequeue() {
	struct node *currentNode = HEADER->next;
	if (currentNode == NULL) {
		printf("Empty linked list.\nDeletion failed.\n");
	} else {
		HEADER->next = currentNode->next;
		free(currentNode);
	}
}
void printQueue() {
	struct node *currentNode = HEADER->next;
	printf("\nLinked List\nHEADER->");
	while (currentNode != NULL) {
		printf("%d->", currentNode->data);
		currentNode = currentNode->next;
	}
	printf("NULL\n");
}
int main() {
	char choice;
	HEADER = malloc(sizeof(struct node));
	HEADER->data = 0;
	HEADER->next = NULL;
	do {
		printf("\n\tQueue using linkedlist\n1.Enqueu\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice : ");
		scanf(" %c", &choice);
		switch(choice) {
			case '1':
				enqueue();
				break;
			case '2':
				dequeue();
				break;
			case '3':
				printQueue();
				break;
		}
	} while(choice != '4');
  deleteAll();
}
OUTPUT:


        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:1
        enter data :4

        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:1
        enter data :4

        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:1
        enter data :6

        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:3
          ->4  ->4  ->6
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:2

        enqueued elem is 4
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:3
          ->4  ->6
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:4
        no of elem in queue is 2
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:5

        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
        enter choice:3

        empty
        1.enqueue
        2.dequeue
        3.display
        4.count
        5.delete_all
        6.exit
enter choice:6
