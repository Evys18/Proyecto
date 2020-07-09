#include <iostream>
using namespace std;
void referencia(int numero1, int& numero2){
    cout << "numero 1: " << numero1<< endl;
    cout << "numero 2: " << numero2<< endl;
    numero1=1;
    numero2=100;
}
int main()
{
    int numero1,numero2;
    cout << "ingrese el numero 1:";
    cin >> numero1;
    cout << numero2;
    referencia(numero1,numero2);
    cout << "numero 1: "<< numero1 << endl;
    cout << "numero 2: "<< numero2 << endl;
    return 0;
}    
