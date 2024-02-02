#include <iostream>
#include <cmath>

using namespace std;

int calcularPotencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else if (exponente < 0) {
        return 1 / pow(base, abs(exponente));
    } else {
        return pow(base, exponente);
    }
}

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

bool esBisiesto(int ano) {
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
}

int main() {
    while (true) {
        cout << "\nMenu de Opciones:" << endl;
        cout << "1. Realizar operaciones aritmeticas y comparaciones entre dos numeros." << endl;
        cout << "2. Calcular potencia de un numero." << endl;
        cout << "3. Determinar si un numero es primo." << endl;
        cout << "4. Determinar si un ano es bisiesto." << endl;
        cout << "5. Salir" << endl;

        int opcion;
        cout << "Seleccione una opcion (1-5): ";
        cin >> opcion;

        if (opcion == 1) {
            int num1, num2;
            cout << "Ingrese el primer numero entero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero entero: ";
            cin >> num2;

            int suma = num1 + num2;
            int resta = num1 - num2;
            int multiplicacion = num1 * num2;

            // Manejo de la división por cero
            float division = (num2 != 0) ? static_cast<float>(num1) / num2 : INFINITY;

            bool comparacion_mayor = num1 > num2;
            bool comparacion_menor = num1 < num2;
            bool comparacion_igual = num1 == num2;

            cout << "\nResultados:" << endl;
            cout << "Suma: " << suma << endl;
            cout << "Resta: " << resta << endl;
            cout << "Multiplicacion: " << multiplicacion << endl;
            cout << "Division: " << division << endl;
            cout << num1 << " es mayor  " << num2 << ": " << comparacion_mayor << endl;
            cout << num1 << " es menor  " << num2 << ": " << comparacion_menor << endl;
            cout << num1 << " es igual  " << num2 << ": " << comparacion_igual << endl;

        } else if (opcion == 2) {
            int base, exponente;
            cout << "Ingrese la base: ";
            cin >> base;
            cout << "Ingrese el exponente: ";
            cin >> exponente;

            int resultado_potencia = calcularPotencia(base, exponente);
            cout << "Resultado de " << base << "^" << exponente << ": " << resultado_potencia << endl;

        } else if (opcion == 3) {
            int numero_primo;
            cout << "Ingrese un numero para verificar si es primo: ";
            cin >> numero_primo;

            bool resultado_primo = esPrimo(numero_primo);
            if (resultado_primo) {
                cout << numero_primo << " es un numero primo." << endl;
            } else {
                cout << numero_primo << " no es un numero primo." << endl;
            }

        } else if (opcion == 4) {
            int ano;
            cout << "Ingrese un ano para verificar si es bisiesto: ";
            cin >> ano;

            bool resultado_bisiesto = esBisiesto(ano);
            if (resultado_bisiesto) {
                cout << ano << " es un ano bisiesto." << endl;
            } else {
                cout << ano << " no es un ano bisiesto." << endl;
            }

        } else if (opcion == 5) {
            cout << "¡Hasta luego!" << endl;
            break;

        } else {
            cout << "Opcion no valida. Por favor, seleccione una opción valida." << endl;
        }
    }

    return 0;
}
