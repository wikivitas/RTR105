#include <stdio.h>

// struktūras deklarācija
struct Abstract {
  int width, height;
};

// funkcijas deklarācija
void calc(struct Abstract *obj);

int main() {
  struct Abstract square = {5, 7};
  calc(&square);
  
  return 0;
}

// struktūras izsaukums
void calc(struct Abstract *obj){
  int res = obj->width * obj->height;
  printf("Result: %d",res);
}
