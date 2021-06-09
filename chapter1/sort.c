#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 

#define MaxNumbers 10

//implement selection sort

//get smallest value.

int getSmallest(int list[], int lo, int hi) {
	//return locatin of smallest value.
	
	int smallest = lo; 

	for(int i = lo + 1; i < hi; i++) 
		if(list[i] < list[smallest]) smallest = i; 

	return smallest;
}


//swap function
void swap(int list[], int i, int j) {

	//swap elements list[i] and list[j]
	int hold = list[i]; 
	list[i] = list[j]; 
	list[j] = hold; 

}



void selectionSort(int list[], int lo, int hi) {

	//TODO
	int getSmallest(int[], int, int); 
	void swap(int[], int, int);

	for(int h = lo; h < hi; h++) {

		int s = getSmallest(list, h, hi); 
		swap(list, h, s); 
	}

}

//insertion sort

void insertionSort(int list[], int n) {
	//TODO
	
	for(int h = 1; h < n; h++) {
		int key = list[h]; 
		int k = h-1; //start comparing with previous item;

		while( k >= 0 && key < list[k]) {

			list[k+1] = list[k]; 
			--k; 
		}

		list[k+1] = key; 
	} //end for

} //end insertion sort



int main() {

	int num[MaxNumbers]; 
	printf("Type up to %d numbers followed by 0\n", MaxNumbers); 

	int n = 0, v; 
	scanf("%d", &v);  //input

	while( v != 0 && n < MaxNumbers) {

		num[n++] = v; 
		scanf("%d", &v); 
	}

	if (v != 0) {
		printf("More than %d numbers entered\n", MaxNumbers); 
		printf("First %d used\n", MaxNumbers); 
	}
	/*
	selectionSort(num, 0, n); 
	printf("\nThe sorted numbers are\n"); 
	*/

	insertionSort(num, n); 
	printf("\nThe sorted numbers are\n"); 
	for(int h = 0; h < n; h++) printf("%d ", num[h]); 

	printf("\n"); 

} //end of main

