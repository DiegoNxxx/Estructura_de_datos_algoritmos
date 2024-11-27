#include "Inventrory.h"
#include <iostream>

void Inventory::addProduct(string &name, int quatity){
    products[name] += quatity;

}

int Inventory::getProduct(string &name) {
    auto id = products.find(name);
    if(id != products.end()) {
        return id->second;
    }
    return -1;
}

bool Inventory::removeProduct(string &name) {
    return products.erase(name) > 0;
}

void Inventory::searchProduct(string& name) {
    auto id = products.find(name);
    if (id != products.end()) {
        cout << "Producto: " << name << " | Cantidad: " << id->second << endl;
    } else {
        cout << "Producto no encontrado!" << endl;
    }
}

void Inventory::showHistory() {
    history.showHistory();  // Mostrar todas las acciones del historial
}