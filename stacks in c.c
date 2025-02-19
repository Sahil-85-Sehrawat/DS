#include <stdio.h>

int MAXSIZE = 9;       
int stack[9];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE-1)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

void  push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

void main() {
   push(3);
   push(15);
   push(9);
   push(19);
   push(20);
   push(22);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
}
