//Crear un programa que emplee recursividad para calcular el mayor de los
//elementos de un vector de “n” tamaño dado por pantalla por el usuario.
#include<iostream>
using namespace std;

// Función recursiva para encontrar el máximo
int encontrarMax(int vec[], int n) {
    // Caso base: si solo hay un elemento
    if (n == 1) {
        return vec[0];
    }

    // Llamada recursiva: máximo del resto del vector
    int maxRestante = encontrarMax(vec, n - 1);

    // Comparar el último elemento con el máximo anterior
    if (vec[n - 1] > maxRestante) {
        return vec[n - 1];
    } else {
        return maxRestante;
    }
}

int main() {
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int vec[n];

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int maximo = encontrarMax(vec, n);

    cout << "El elemento mayor es: " << maximo << endl;

    return 0;
}