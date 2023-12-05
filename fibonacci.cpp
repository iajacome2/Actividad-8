#include <iostream>
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int position = 10;  // Cambia la posición según tus preferencias
    int result = fibonacci(position);
    
    printf("El número Fibonacci en la posición %d es: %d\n", position, result);
    
    return 0;
}