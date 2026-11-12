#include <iostream>
#include <vector>
#include <algorithm> // Necesaria para usar sort()

using namespace std;

int main() {
    vector<int> numeros;
    int num_ingresado;
    char continuar;

    cout << "--- ORDENADOR DINAMICO (MAYOR A MENOR) ---" << endl;

    // 1. Ciclo para ingresar números ilimitados
    do {
        cout << "Ingresa un numero: ";
        cin >> num_ingresado;
        numeros.push_back(num_ingresado); // Guarda el número en el vector

        cout << "¿Deseas ingresar otro numero? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    // 2. Ordenar de mayor a menor usando la librería estándar
    // greater<int>() le dice a sort() que ordene de forma descendente
    sort(numeros.begin(), numeros.end(), greater<int>());

    // 3. Mostrar el resultado
    cout << "\n--- NUMEROS ORDENADOS ---" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
