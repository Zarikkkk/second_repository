#include <iostream>
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

    void showSneakers(int i) {
        cout << "Brand: " << sneakers[i].getBrand() << endl;
        cout << "Color: " << sneakers[i].getColor() << endl;
        cout << "Material: " << sneakers[i].getMaterial() << endl;
        cout << "Size: " << sneakers[i].getSize() << endl;
        cout << "Price: " << sneakers[i].getPrice() << endl;
        cout << "Quantity: " << sneakers[i].getQuantity() << endl;
        cout << "Number of sales: " << sneakers[i].getNumberOfSales() << endl;
    }
    void showAssortiment() {
        cout << "-------------------" << endl;
        for (int i = 0; i < quan; i++) {
            showSneakers(i);
            cout << "-------------------" << endl;
        }
    }
    // swap sneakers with each other
    void swap(int j) {
        Sneakers buf;
        buf.setBrand(sneakers[j].getBrand());
        sneakers[j].setBrand(sneakers[j + 1].getBrand());
        sneakers[j + 1].setBrand(buf.getBrand());
        buf.setColor(sneakers[j].getColor());
        sneakers[j].setColor(sneakers[j + 1].getColor());
        sneakers[j + 1].setColor(buf.getColor());
        buf.setMaterial(sneakers[j].getMaterial());
        sneakers[j].setMaterial(sneakers[j + 1].getMaterial());
        sneakers[j + 1].setMaterial(buf.getMaterial());
        buf.setSize(sneakers[j].getSize());
        sneakers[j].setSize(sneakers[j + 1].getSize());
        sneakers[j + 1].setSize(buf.getSize());
        buf.setPrice(sneakers[j].getPrice());
        sneakers[j].setPrice(sneakers[j + 1].getPrice());
        sneakers[j + 1].setPrice(buf.getPrice());
        buf.setQuantity(sneakers[j].getQuantity());
        sneakers[j].setQuantity(sneakers[j + 1].getQuantity());
        sneakers[j + 1].setQuantity(buf.getQuantity());
        buf.setNumberOfSales(sneakers[j].getNumberOfSales());
        sneakers[j].setNumberOfSales(sneakers[j + 1].getNumberOfSales());
        sneakers[j + 1].setNumberOfSales(buf.getNumberOfSales());
    }
    // bubble sort
    void sort() {
        for (int i = 0; i < quan; i++) {
            for (int j = 0; j < quan - 1; j++) {
                if (sneakers[j].getPrice() > sneakers[j + 1].getPrice()
                    || (sneakers[j].getPrice() == sneakers[j + 1].getPrice() && sneakers[j].getQuantity() > sneakers[j + 1].getQuantity()))
                    swap(j);
            }
        }
    }
    // show top of the most popular sneakers
    void top() {
        cout << "Top of the most popular sneakers" << endl;
        for (int i = 0; i < quan; i++) {
            for (int j = 0; j < quan - 1; j++) {
                if (sneakers[j].getNumberOfSales() < sneakers[j + 1].getNumberOfSales())
                    swap(j);
            }
        }
        for (int i = 0; i < 3; i++) {
            cout << "Sneakers number " << i + 1 << ":" << endl;
            showSneakers(i);
            cout << "-------------------" << endl;
        }
    }
};

int main() {
    SportShoesStore store;
    store.showAssortiment();
    store.sort();
    cout << "Sorted ASSortiment" << endl;
    store.showAssortiment();
    store.top();
}

