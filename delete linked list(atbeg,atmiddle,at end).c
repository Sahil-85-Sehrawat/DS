 
#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
    
};
struct Node* head = NULL;
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
void deletefirst()
{
            head = head->next;
    
}
void deletelast()
{
struct Node* temp = head;
while(temp->next->next!=NULL){
  temp = temp->next;
}
temp->next = NULL;
   
}
void insertbeg()
{
struct Node *newNode;
newNode = malloc(sizeof(struct Node));
newNode->data = 4;
newNode->next = head;
head = newNode;
}

void insertend()
{
struct Node *newNode;
newNode = malloc(sizeof(struct Node));
newNode->data = 4;
newNode->next = NULL;

struct Node *temp = head;
while(temp->next != NULL){
  temp = temp->next;
}

temp->next = newNode;
}

void insertmid(int pos)
{
struct Node *newNode;
newNode = malloc(sizeof(struct Node));
newNode->data = 4;

struct Node *temp = head;

for(int i=2; i < pos; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
newNode->next = temp->next;
temp->next = newNode;
}

/*void deletemiddle(int pos)
{
struct Node* temp = head;

for(int i=2; i< pos; i++) 
{
  if(temp->next!=NULL)
 {
    temp = temp->next;
  }
}

temp->next = temp->next->next;
}*/

 
int main()
{
    int pos = 2;
    struct Node* second = NULL;
    struct Node* third = NULL;
 
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
 
    head->data = 1; 
    head->next = second;
 
    second->data = 2; 
    second->next = third;
 
    third->data = 3; 
    third->next = NULL;
 
    

    
  insertmid(3);
  printList(head);
    return 0;
}
