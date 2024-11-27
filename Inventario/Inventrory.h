#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <unordered_map>
#include "History.h"  

using namespace std;

class Inventory {
private:
    unordered_map<string, int> products;  // Almacena productos por nombre y cantidad
    History history;  // Instancia de la clase History para registrar las acciones

public:
    void addProduct(string& name, int quantity);
    int getProduct(string& name);
    bool removeProduct(string& name);
    void searchProduct(string& name);  // Función para buscar un producto
    void showHistory();  // Mostrar historial de acciones
};

#endif
