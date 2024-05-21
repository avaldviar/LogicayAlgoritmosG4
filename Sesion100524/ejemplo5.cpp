/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[10];
    int i = 0;
    int max = INT_MIN;

    cout << "ingresa 10 numeros enteros:" << endl;
    while (i < 10)
    {
        cout << "# " << i + 1 << ": ";
        cin >> num[i];
        if (num[i] > max)
        {
            max = num[i];
        }
        i++;
    }
    cout << "El numero mas grande es: " << max << endl;

    cout << "Los numeros ingresados son: ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
