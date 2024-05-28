
#include <iostream>
using namespace std;


void showMessage();

void showMessage(){
    printf("Universidad Americana \n");
    printf("UAM \n"); 
}

void suma(){
    int num1, num2, suma;
    cout << "Ingresa dos numeros enteros" << endl;
    cin >> num1;
    cin >> num2;

    suma = num1 + num2;
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma;

}