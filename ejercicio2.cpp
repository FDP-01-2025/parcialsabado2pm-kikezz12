#include <iostream>
using namespace std;

int main() {
    int numeros[12];

    
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el numero #" << i + 1 << ": ";
        cin >> numeros[i];
    }

 
    cout << "\nLos numeros en orden inverso son:\n";
    for (int i = 11; i >= 0; i--) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
