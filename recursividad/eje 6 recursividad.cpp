//Crear un programa que pida al usuario un número entero positivo "n". Luego
//implementar una función recursiva que cuente la cantidad de dígitos pares que
//ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
//el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0
#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

// Función para contar cantidad de dígitos
int contarDigitos(int n) {
    if (n == 0) return 0;
    return 1 + contarDigitos(n / 10);
}

// Función principal recursiva
int contar(int n, int posTotal) {
    if (n == 0) return 0;

    int dig = n % 10; // último dígito

    // calcular posición desde la izquierda
    int posicion = posTotal;

    int suma = 0;

    // verificar si es par y está en posición impar
    if (dig % 2 == 0 && posicion % 2 != 0) {
        suma = 1;
    }

    return suma + contar(n / 10, posTotal - 1);
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int total = contarDigitos(n);

    cout << "Resultado: " << contar(n, total);

    return 0;
}