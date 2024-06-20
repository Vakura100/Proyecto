#include <iostream>

int main() {
    int *p1 = new int(10);
    int *p2 = new int(20);
    int *p3 = p1;
    int *p4 = p2;
        *p1 = 10;
        *p2 = 30;
std::cout << *p1 << std::endl;
std::cout << *p2 << std::endl;

}
//malloc, calloc, realloc, free

//malloc, aparta un espacio en memoria
//int numbers = (int) malloc (sizeof(int));

//calloc aparta un espacio determinado separado para la memoria
//std::vector<int>{1,2,3,4,5};
//int numbers = (int) calloc (5, sizeof(int));

//realloc te permite cambiar el tamaño de un calloc
//int numbers = (int) realloc (numbers, 10, sizeof(int);

//free cambia el espacio a utilizable
//free(numbers);

//Los 2 puedes modificar y cambiar "a"
//int p1 = a;
//intp2 = a;

//Solo este puntero inteligente podra modificar el valor, se borra solo
//std::unique_ptr<int> up1 = std::make_unique<int>(10);
//std::unique_ptr<int> up2 = std::move(up1);

//Para punteros compartidos
//std::share_ptr<int> sp3 = std::make_share<int>(10);
//std::share_ptr<int> sp4 = sp3std::share_ptr<int> sp4 = sp3