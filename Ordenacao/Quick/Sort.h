//
//  Sort.h
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

#include <vector>
using namespace std;

void sort(int[], int);
vector<int> Particionar(int[], int, int);
void sortTrue(int[], int, int);

inline void swap(int& x, int& y){
    int aux = x;
    x = y;
    y = aux;
}

#endif /* Sort_h */
