#include <stdio.h>

#include "linked-list.h";

int main()
{
  Node head = {"Mombasa", 0};
  Node lamu = {"Lamu", 0};
  Node vanga = {"Vanga", 0};

  add_node(&head, &lamu);
  print_nodes(&head);
  puts("=========================");
  add_node(&head, &vanga);
  print_nodes(&head);
}