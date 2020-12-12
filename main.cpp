#include <iostream>
#include <string>
#include "classes.h"

int main() {
    SportShoesStore store;
    store.showAssortiment();
    store.sort();
    cout << "Sorted ASSortiment" << endl;
    store.showAssortiment();
    store.top();
}