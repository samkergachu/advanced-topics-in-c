#include <stdio.h> 
#include <stdlib.h> 

#define MaxNumbers 10

void swap(int list[], int i, int j) {

	//swap elements list[i] and list[j]
	
	int hold = list[i]; 
	
	list[i] = list[j]; 

	list[j] = hold; 
}

int getSmallest(int list[], int lo, int hi) {

	//return location of smallest from list[lo...hi]
	int small = lo; 

	for(int h = lo+1; h <= hi; h++) 
		if (list[h] < list[small]) small = h; 

	return small; 
}


//selection sort
void selectionSort(int list[], int lo, int hi) {
	// sort list[lo] to list[hi] in ascending order
	// call functions defined earlier
	
	for(int h = lo; h < hi; h++){
		int s = getSmallest(list, h, hi); 
		swap(list, h, s); 
	}

}
int main(void) 
{
	// function prototypes
	void selectionSort(int [], int, int); 
	
	// array declaration
	int num[MaxNumbers]; 
	printf("Type up to %d numbers followed by 0\n", MaxNumbers); 

	
	int n = 0, v; 	
	scanf("%d", &v); 

	while(v != 0 && n < MaxNumbers) {
		num[n++] = v; 
		scanf("%d", &v); 

	}
	
	//what does this do? 
	if (v != 0) {
		printf("More than %d numbers entered\n", MaxNumbers);
		printf("First %d used\n", MaxNumbers); 
	}

	//n numbers are stored from num[0] to num[n-1]
	selectionSort(num, 0, n-1); 
	printf("\nThe sorted numbers are\n"); 
	
	//print contents of sorted array
	for(int h = 0; h < n; h++)
		printf("%d ", num[h]); 

	printf("\n"); 


	return 0; 
}
