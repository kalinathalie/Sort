//
//  SelectionSort.cpp
//  Aula-Ordenacao
//
//  Created by Eiji Adachi Medeiros Barbosa on 09/03/17.
//  Copyright © 2017 Eiji Adachi Medeiros Barbosa. All rights reserved.
//

#include "Sort.h"

void sort(int v[], int size){
	int i, j, menor;
	for(i = 0; i<=size ; i++){
		menor = v[i];
		for(j = i+1; j <=size ; j++){
			if (v[j] < menor){
				menor = v[j];
			}
		}
		if(v[i] != menor){
			swap(menor, v[i]);
		}
	}
}