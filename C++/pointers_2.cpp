#include <iostream>
 
int main()
{
    int a = 7;
    std::cout << a << '\n'; // выводим значение переменной a
    std::cout << &a << '\n'; // выводим адрес переменной a
    std::cout << *&a << '\n'; /// выводим значение ячейки памяти переменной a
 
    return 0;
}
