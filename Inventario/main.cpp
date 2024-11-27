#include <iostream>
#include "Inventrory.h"
#include "History.h"

using namespace std;

int main() {
    Inventory inventory;
    int choice;
    string nombre;
    int cantidad;

    do {
        cout << "Inventario Nozama 2024" << endl;
        cout << "1.- Agregar un producto" << endl;
        cout << "2.- Buscar un producto" << endl;
        cout << "3.- Eliminar un producto" << endl;
        cout << "4.- Mostrar historial" << endl;
        cout << "5.- Salir del inventario" << endl;
        cout << "Elige una opcion: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Nombre del producto: ";
            cin >> nombre;
            cout << "Cantidad: ";
            cin >> cantidad;
            inventory.addProduct(nombre, cantidad);  // Agregar producto
            break;
        case 2:
            cout << "Nombre del producto a buscar: ";
            cin >> nombre;
            inventory.searchProduct(nombre);  // Buscar producto
            break;
        case 3:
            cout << "Nombre del producto a eliminar: ";
            cin >> nombre;
            if (inventory.removeProduct(nombre)) {
                cout << "Producto eliminado." << endl;
            } else {
                cout << "No se pudo eliminar el producto." << endl;
            }
            break;
        case 4:
            inventory.showHistory();  // Mostrar historial de acciones
            break;
        case 5:
            cout << "Saliendo del inventario" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
