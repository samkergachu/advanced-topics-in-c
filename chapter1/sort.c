#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 

#define MaxNumbers 10

//program to implement the selection Sort algorithm.

//function to keep count of number of comparisons

/*int comparisonTimes() {
	int count = 0;

	count++; 

	return count;
}*/


void selectionSort(int Array[], int lowest, int highest) {
	//function prototype
	int getSmallest(int Array[], int low, int high);
	void swap(int Array[], int smallest, int small);
//	int comparisonTimes(); 

	for(int h = lowest; h < highest; h++) {
		int smallest = getSmallest(Array, h, highest); 
		swap(Array, smallest, h); 
//		comparisonTimes();
	}

}

/* insertion sort algo */

void insertionSort(int list[], int n) {


	for (int i = 1; i < n; i++) {

		int temp = list[i]; 
		int j = i -1; 

		while(j >= 0 && temp < list[j]){
			list[j+1] = list[j]; 

			--j;
		}

		list[j+1] = temp;
}//end of insertion sort. 



//find smallest no.

int getSmallest(int Array[], int low, int high) {
	void swap(int Array[], int smallest, int small); 

	int lowest = low; 

	for(int k = low+1; k <= high; k++){
		if (Array[k] < Array[lowest]) {
			lowest = k; 
		}
	}

	return lowest;
}

void swap(int Array[], int smallest, int small) {

	int holder = Array[small];
	Array[small] = Array[smallest];
	Array[smallest] = holder; 
}

//print array


void print(int Array[], int lowest, int highest) {

	for(int i = lowest; i < highest; i++){
		printf("%d ", Array[i]);
	}

	printf("\n");
}


int main(){
	//function prototype
	void selectionSort(int Array[], int lowest, int highest); 
	void print(int Array[], int lowest, int highest);

	int num[MaxNumbers];
	int n = 0, v;

	scanf("%i", &v); 

	while (v != 0 && n < MaxNumbers) {
		num[n++] = v; 
		scanf("%d", &v); 
	}

	if (v != 0) {
		printf("More than %d entered\n", MaxNumbers);
		printf("We'll use the first %d numbers\n", MaxNumbers); 
	}

	selectionSort(num, 0, n); 

	print(num, 0, n); 

	//int noOfComparisons = comparisonTimes();

	//	printf("No of comparisons made are %d \n", noOfComparisons);

	return 0; 
}
