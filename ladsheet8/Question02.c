#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head = NULL;

void display() {
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}
void reverse() {

  if (head == NULL) {
    printf("Nothing to reverse, the list is empty\n");
  } else {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;
    while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
  }
}

void insertAtEnd(int num) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL) {
    printf("Memory is full\n");
  } else {
    newNode->data = num;
    newNode->next = NULL;
    if (head == NULL) {
      head = newNode;
    } else {
      struct node *temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
}

int main()

{
  int i, data;
  for (i = 0; i < 10; i = i + 2) {
    insertAtEnd(i + 1);
  }

  display();
  reverse();
  display();

 
}