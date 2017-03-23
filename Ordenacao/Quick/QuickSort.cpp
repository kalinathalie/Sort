#include "Sort.h"

void sort(int v[], int size){
	sortTrue(v, 0, size-1);
}

vector<int> Particionar(int v[], int left, int right){
	int pivo = v[left];
	int i = left, j = right, k = left+1;
	vector<int> aux;
	while(k<=j){
		if(v[k] > pivo){
			swap(v[k], v[j]);
			j--;
		}else if(v[k] < pivo){
			swap(v[k], v[i]);
			i++;
			k++;
		}else{
			k++;
		}
	}
	aux = {i, j};
	return aux;
}

void sortTrue(int v[], int left, int right){
	if(left<right){
		int i,j;
		vector<int> par = Particionar(v, left, right);
		i = par[0];
		j = par[1];
		sortTrue(v, left, i-1);
		sortTrue(v, j+1, right);
	}
}