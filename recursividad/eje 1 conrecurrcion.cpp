#include<iostream>
using namespace std;
//Implemente una función para potencias enteras con recursividad. Definición
//recursiva para elevar un número a una potencia: Un número elevado a la potencia
//cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
//sí mismo elevando a la potencia menos uno. Por ejemplo:
//32=3*(31)=3*[3*(30)]=3*(3*1)=9

//no usar una implementacion en la funcio de recursividad 

int potencia(int base, int exp){

    if(exp == 0){     // caso base, lo va a hacer hasta cumlir el caso base 
        return 1;
    }
    //a donde retorna?
    //potencia(3,0) → retorna 1
    //potencia(3,1) → retorna 3
    //potencia(3,2) → retorna 9

    return base * potencia(base, exp - 1); // llamada recursiva
    //ultimo return me muetra lo que se va mostrar en el main
}

int main(){

    int base, exp;

    cout<<"Ingrese la base: ";
    cin>>base;

    cout<<"Ingrese el exponente: ";
    cin>>exp;

    cout<<"Resultado: "<<potencia(base,exp)<<endl;

    return 0;
}
