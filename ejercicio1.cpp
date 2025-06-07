#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Ingrese la potencia máxima a la que desea elevar el 2: " << endl;
    cin >> limite;

    cout << "\nPotencias de 2 desde 1 hasta " << limite << ":\n";

    int resultado = 1; 

    for (int i = 1; i <= limite; i++) {
        resultado *= 2; 
        cout << "2^" << i << " = " << resultado << endl;
    }

    return 0;
}
