#include <stdio.h>

typedef struct {
  char *data;
} Item;

Item *items[5];
int queue_size = 0;

void insert(Item *item) { 
  int number_of_loops = queue_size;


  if (queue_size == 0) {
    items[0] = item;
    queue_size++;
    return;
  }

  while(number_of_loops > 0) {
    items[number_of_loops] = items[number_of_loops - 1];
    number_of_loops--;
  }

  items[0] = item;
  queue_size++;
}

void print_queue() {
  printf("The queue has size: %i\n", queue_size);
  for(int i = 0; i < queue_size; i++) {
    Item *item = items[i];
    printf("%s\n", item->data);
  }
}

int main() {
  Item subaru = {"Subaru"};
  Item mercedes = {"Mercedes"};
  Item bmw = {"BMW"};

  insert(&subaru);
  insert(&mercedes);
  insert(&bmw);

  print_queue();
}