//
// Created by rrivas on 5/04/2024.
//

#include "operadores_vector.h"
#include <vector>
using namespace std;

vector<int> negacion(vector<int> v) {
    for (auto& item: v) {
        item *= -1;
    }
    return v;
}

vector<int> operator-(vector<int> v) {
    for (auto& item: v) {
        item *= -1;
    }
    return v;
}