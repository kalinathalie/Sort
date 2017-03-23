//
//  InsertionSort.cpp
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#include "Sort.h"

void sort(int v[], int size){
	int i, j, novo;
	for(i=1 ; i<=size ; i++){
		novo = v[i];
		for(j=i-1 ; j>=0 && novo < v[j]; j--){
			v[j+1] = v[j];
		}
		v[j+1] = novo;
	}

}
