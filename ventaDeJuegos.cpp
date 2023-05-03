#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion, cantidad = 0;
    float precio = 0;
    float total = 0;
    bool continuar = true;

    cout << "Bienvenido a la tienda de videojuegos de Rob&Eth" << endl;

    while (continuar) {

        system("cls");

        cout << "Categorias de juegos " << endl;
        cout << "1. Terror " << endl;
        cout << "2. Deportes " << endl;
        cout << "3. Ver el total gastado" << endl;
        cout << "4. Salir " << endl;
        cout << "Seleccione una categoria: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "Bienvenido a la seccion de terror" << endl;
            cout << "1. Project Zomboid - precio: Q120  " << endl;  
            cout << "2. Five Nights at Freddys - precio: Q200 " << endl;
            cout << "Seleccione un juego: ";
            cin >> opcion;
            switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad de Project Zomboid que desea comprar: ";
                cin >> cantidad;
                precio = 120;
                total += cantidad * precio;
                cout << "Compra exitosa :) " << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad de Five Nights at Freddys que desea comprar: ";
                cin >> cantidad;
                precio = 200;
                total += cantidad * precio;
                cout << "Compra exitosa :) " << endl;
                break;
            default:
                cout << "Eleccion incorrecta, intente de nuevo. " << endl;
                break;
            }
            break;
        case 2:
            system("cls");
            cout << "Bienvenido a la seccion de Deportes " << endl;
            cout << "1. FIFA 23 - precio: Q350 " << endl;
            cout << "2. NBA 2K23 - precio: Q365 " << endl;
            cout << "Seleccione un juego:  ";
            cin >> opcion;
            switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad de FIFA 23 que desea comprar: ";
                cin >> cantidad;
                precio = 350;
                total += cantidad * precio;
                cout << "Compra exitosa. :)" << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad de NBA 2K23 que desea comprar: ";
                cin >> cantidad;
                precio = 365;
                total += cantidad * precio;
                cout << "Compra exitosa. " << endl;
                break;
            default:
                cout << "Eleccion incorrecta, intente de nuevo. " << endl;
                break;
            }
            break;
        case 3:
            cout << "El total gastado es: Q" << total << " " << endl;
            break;
        case 4:
            continuar = false;
            break;
        default:
            cout << "Eleccion incorrecta, intente de nuevo. " << endl;
            break;  
        }
        system("pause");
    }


    cout << "Gracias por visitar la tienda de Rob&Eth " << endl;

    return 0;
}