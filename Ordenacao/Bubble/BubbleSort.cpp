#include "Sort.h"

void sort(int v[], int size){
	int i, j;
	for(i=0; i<size ; i++){
		for(j=0 ; j<size-i-1 ; j++){
			if(v[j] > v[j+1]){
				swap(v[j], v[j+1]);
			}
		}
	}
}
