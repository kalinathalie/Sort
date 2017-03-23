//
//  Sort.h
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

void sort(int[], int);

inline void swap(int& x, int& y)
{
    int aux = x;
    x = y;
    y = aux;
}

#endif /* Sort_h */
