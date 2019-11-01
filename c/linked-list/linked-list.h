typedef struct Node
{
  char *data;
  struct Node *next;
} Node;

void add_node(Node *prev, Node *new_node);

void print_node(Node *head);
