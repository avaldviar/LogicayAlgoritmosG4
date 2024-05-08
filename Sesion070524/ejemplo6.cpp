#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*Leer un numero y dar las tabla de multiplcar*/
    int num;
    cout << "Dime un numero: ";
    cin >> num;
    int i = 0;

    while (i <= 12){
        int resultado = i*num;
        cout << num << " * " << i << " = " << resultado << endl;
        i++;
    }


    return 0;
}
