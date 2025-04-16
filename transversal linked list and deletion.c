#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    float j;
    struct Node* next;
};
 void printList(struct Node* n)
 {
     while (n!= NULL) {
             printf(" %d", n->data);
         printf(" %2f", n->j);
         n = n->next;
         
     }
 }

int main() {
  struct Node* head =NULL;
  struct Node* second = NULL;
  struct Node* third  = NULL;
  
 head = (struct Node*)malloc(sizeof(struct Node));
 second = (struct Node*)malloc(sizeof(struct Node));
 third = (struct Node*)malloc(sizeof(struct Node));
 
 
 head->data = 1;
 head->j = 7.4;
 head->next = second;
 
 head->data = 8;
 head->j = 5.3;
 head->next = third;
 
 third->data = 9;
 third->j = 2.8;
 third->next = NULL;
 
 printList(head);
 
 return 0;
}
