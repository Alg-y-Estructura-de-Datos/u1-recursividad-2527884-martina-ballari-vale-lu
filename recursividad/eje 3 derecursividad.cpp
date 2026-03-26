//Implementar una función recursiva que dado un número entero lo muestre de
//forma invertida ej: 10523 de mostrar 32501. (Dar aviso de error en caso de uso de
//números negativos) NOOOO  y mostrar primero el número a invertir y después el número
//invertido.
#include<iostream>
using namespace std;

void invertir(int n){

    if(n == 0){
        return; //no es necesario retornar nada . hizo un viaje y no volvio a hacerlo
    }

    cout << n % 10;
    invertir(n / 10);
}

int main(){

    int n = 10523;

   
    cout<<"El numero original es: "<<n<<endl;
    cout<<"El numero invertido es: ";
    invertir(n);
    cout<<endl;
    

    return 0;
}