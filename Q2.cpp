/**
 * Allows the user to swap ints 
 */
#include <iostream>

/**
 * Changes the order of two ints using refrences
 */
void changeR(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
/**
 * Changes the order of two ints using pointers
 */
void changeP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 2;
    std::cout << "Original: " << a << "," << b << "\n";
    changeR(a,b);
    std::cout << "After swapping using refrences: " << a << "," << b << "\n";
    changeP(&a,&b);
    std::cout << "After swapping back using pointers: " << a << "," << b << "\n";
}


