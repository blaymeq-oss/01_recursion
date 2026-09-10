#include<iostream>
using namespace std;

long PotenciaN(int a, int b);

int main (){
    int n1,n2;
    cout << "Ingrese la base: "; cin >> n1;
    cout << "Ingrese el exponente: "; cin >> n2;
    if (n1 = 0 && n2 = 0){
        cout << "Operacion INVALIDA.";
    }else{
        cout << endl << "El resultado de la operacion es: " << PotenciaN(n1, n2);
    }
    return 0;
}
 long PotenciaN(int a, int b){

 }