#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sneakers {
private:
    string brand, color, material;
    int size, price, quantity, numberOfSales;
public:
    Sneakers() { brand = ""; color = ""; material = ""; size = 0; price = 0; quantity = 0; numberOfSales = 0; }

    void setBrand(string brand) { this->brand = brand; }
    void setColor(string color) { this->color = color; }
    void setMaterial(string material) { this->material = material; }
    void setSize(int size) { this->size = size; }
    void setPrice(int price) { this->price = price; }
    void setQuantity(int quantity) { this->quantity = quantity; }
    void setNumberOfSales(int numberOfSales) { this->numberOfSales = numberOfSales; }

    string getBrand() { return brand; }
    string getColor() { return color; }
    string getMaterial() { return material; }
    int getSize() { return size; }
    int getPrice() { return price; }
    int getQuantity() { return quantity; }
    int getNumberOfSales() { return numberOfSales; }
};
class SportShoesStore {
private:
    // quantity of sneakers in the shop
    const int quan = 5;
    Sneakers sneakers[5];
public:
    SportShoesStore() {
        string brand, color, material;
        int size, price, quantity, numberOfSales;
        for (int i = 0; i < quan; i++) {
            cout << "Enter brand: ";
            cin >> brand;
            sneakers[i].setBrand(brand);
            cout << "Enter color: ";
            cin >> color;
            sneakers[i].setColor(color);
            cout << "Enter material: ";
            cin >> material;
            sneakers[i].setMaterial(material);
            cout << "Enter size: ";
            cin >> size;
            sneakers[i].setSize(size);
            cout << "Enter price: ";
            cin >> price;
            sneakers[i].setPrice(price);
            cout << "Enter quantity: ";
            cin >> quantity;
            sneakers[i].setQuantity(quantity);
            cout << "Enter number of sales: ";
            cin >> numberOfSales;
            sneakers[i].setNumberOfSales(numberOfSales);
            cout << endl;
        }
    }
