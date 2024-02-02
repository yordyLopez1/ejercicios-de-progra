#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Selecciona una opcion:\n";
    cout << "1. Verificar si un numero es par.\n";
    cout << "2. Determinar si un ano es bisiesto.\n";
    cout << "3. Verificar si dos numeros son iguales.\n";
    cout << "4. Verificar si una persona es mayor de edad.\n";
    cout << "5. Evaluar si un estudiante aprobo un examen.\n";
    
    cin >> opcion;

    switch(opcion) {
        case 1: {
            int numero;
            cout << "Ingrese un numero: ";
            cin >> numero;
            
            if (numero % 2 == 0) {
                cout << numero << " es un numero par.\n";
            } else {
                cout << numero << " no es un numero par.\n";
            }
            break;
        }
        case 2: {
            int year;
            cout << "Ingrese un ano: ";
            cin >> year;
            
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << year << " es un ano bisiesto.\n";
            } else {
                cout << year << " no es un ano bisiesto.\n";
            }
            break;
        }
        case 3: {
            int num1, num2;
            cout << "Ingrese dos numeros separados por espacio: ";
            cin >> num1 >> num2;
            
            if (num1 == num2) {
                cout << "Los numeros son iguales.\n";
            } else {
                cout << "Los numeros no son iguales.\n";
            }
            break;
        }
        case 4: {
            int edad;
            cout << "Ingrese su edad: ";
            cin >> edad;
            
            if (edad >= 18) {
                cout << "Eres mayor de edad.\n";
            } else {
                cout << "Eres menor de edad.\n";
            }
            break;
        }
        case 5: {
            int calificacion;
            cout << "Ingrese la calificacion del estudiante: ";
            cin >> calificacion;
            
            if (calificacion >= 60) {
                cout << "El estudiante aprobo el examen.\n";
            } else {
                cout << "El estudiante no aprobo el examen.\n";
            }
            break;
        }
        default:
            cout << "Opcion no valida.\n";
    }

    return 0;
}
