#include <iostream>
 
int main()
{
    int value = 5;
    int *ptr = &value; // инициализируем ptr адресом значения переменной
 
    std::cout << &value << '\n'; // выводим адрес значения переменной value
    std::cout << ptr << '\n'; // выводим адрес, который хранит ptr
 
    return 0;
}
