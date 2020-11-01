#include <stdio.h>

// struktūras deklarācija
struct Abstract {
  int width, height;
};

struct Car {
  int speed;
  char name[50];
  float weight;
};

// funkcijas deklarācija
void calc(struct Abstract obj);

int main() {
  struct Car bmw;
  bmw.speed = 250; //objekts 'speed'
  strcpy(bmw.name, "BMW M5"); //objekts 'name'
  bmw.weight = 2500.00f; //objekts 'weight'

  struct Car audi = {300, "Audi A8", 2700.00f};
  printf("%s tas ātrums ir: %d\n", audi.name, audi.speed);
  printf("%s tas ātrums ir: %d\n", bmw.name, bmw.speed);
  
  struct Abstract square = {5, 7};
  calc(square);  

  return 0;
}

// struktūras izsaukums
void calc(struct Abstract obj){
  int res = obj.width * obj.height;
  printf("Result: %d",res);
}
