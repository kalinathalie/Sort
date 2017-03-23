#include "Sort.h"

void sort(int v[], int size){
	sortTrue(v, 0, size-1);
}

void Intercalar(int v[], int inicio1, int fim1, int fim2){
	int size = fim2-inicio1 + 1;
	int tmp[size];
	int inicio2 = fim1 + 1;
	int k, x, i = inicio1;
	for(k = 0; inicio1 <= fim1 && inicio2 <= fim2; k++){
		if(v[inicio1] <= v[inicio2]){
			tmp[k] = v[inicio1];
			inicio1++;
		}else{
			tmp[k] = v[inicio2];
			inicio2++;
		}
	}
	
	while(inicio1<=fim1){
		tmp[k] = v[inicio1];
		k++;
		inicio1++;
	}
	while(inicio2<=fim2){
		tmp[k] = v[inicio2];	
		k++;
		inicio2++;
	}
	
	for(x = 0; i <= fim2; x++){
		v[i] = tmp[x];
		i++;
	}
}

void sortTrue(int v[], int left, int right){
	if(left<right){
		int mid = (left+right)/2;
		sortTrue(v, left, mid);
		sortTrue(v, mid+1, right);
		Intercalar(v, left, mid, right);
	}
}