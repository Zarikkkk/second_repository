#include <iostream>
#include <string>
#include "classes.h"

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

