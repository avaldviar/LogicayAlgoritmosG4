/*Mostrar los numeros impares desde x a y*/
#include <iostream>

using namespace std;
#define MAX 

void mostrarnumimp(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int x, y;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el valor de y: ";
    cin >> y;

    mostrarnumimp(x, y);

    return 0;
}
