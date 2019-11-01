#include <stdio.h>

#include "linked-list.h"

void add_node(Node *prev, Node *new_node) 
{
  if (prev->next == 0) {
    prev->next = new_node;
    return;
  }

  Node *temp = prev->next;
  prev->next = new_node;
  new_node->next = temp;
}

void print_nodes(Node *head) {
  Node *current_node = head;

  while(current_node != 0) {
    printf("%s\n", current_node->data);
    current_node = current_node->next;
  }
}
