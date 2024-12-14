#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    
    // Ingresar array de 15 posiciones
    int arr[TAM];
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
    
    // Contar números positivos y negativos
    int positiveCount = 0;
    int negativeCount = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }
    
    // Mostrar resultados
    cout << "Numeros positivos: " << positiveCount << endl;
    cout << "Numeros negativos: " << negativeCount << endl;
    
    return 0;
}
