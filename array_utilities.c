#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <limits.h>

#include "array_utilities.h"

int sum(int array[], int size){
	int index = 0;
	int acum = 0;
	while(index < size){
		acum+= array[index];
		index++;
	}
	return acum;
}

int max(int array[], int size){
	int index = 0;
	int higher = INT_MIN;
	while(index < size){
		if(array[index] > higher){
			higher = array[index];
		}
		index++;
	}
	return higher;
}

int min(int array[], int size){
	int index = 0;
	int less = INT_MAX;
	while(index < size){
		if(array[index] < less){
			less = array[index];
		}
		index++;
	}
	return less;
}

int secondMax(int array[], int size){
	int higher = max(array, size);
	int index = 0;
	int secondHigher = INT_MIN;
	while(index < size){
		if(array[index] != higher && array[index] > secondHigher){
			secondHigher = array[index];
		}
		index++;
	}
	return secondHigher;
}

int secondMin(int array[], int size){
	int less = min(array, size);
	int index = 0;
	int secondLess = INT_MAX;
	while(index < size){
		if(array[index] != less && array[index] < secondLess){
			secondLess = array[index];
		}
		index++;
	}
	return secondLess;
}

int isEqual(int first[], int second[], int size){
	int index = 0;
	while(index < size){
		if(first[index] != second[index]){
			return FALSE;
		}
		index++;
	}
	return TRUE;
}

int countOccurences(int array[], int size, int value){
	int index = 0;
	int ocurrences = 0;
	while(index < size){
		if(array[index] == value){
			ocurrences++;
		}
		index++;
	}
	return ocurrences;
}

int countNegatives(int array[], int size){
	int index = 0;
	int acum = 0;
	while(index < size){
		if(array[index] < 0){
			acum++;
		}
		index++;
	}
	return acum;
}

int indexOf(int array[], int size, int value){
	int index = 0;
	while(index < size){
		if(array[index] == value){
			return index;
		}
		index++;
	}
	return -1;
}

void clearWith(int array[], int size, int value){
	int index = 0;
	while(index < size){
		array[index] = value;
		index++;
	}
}

void insertElement(int array[], int size, int value, int position){
	
	int next = array[position];
	array[position] = value;

	int index = position +1;
	
	while(index < size){
		array[index] = next;
		if(index < size -1){
			next = array[index + 1];
		}
		index++;
	}
}

void removeElement(int array[], int size, int position){
	int index = position;
	while(index < size){

		if(index < size -1){
			array[index] = array[index + 1];
		}else{
			array[index] = 0;
		}
		
		index++;
	}
}

void copy(int source[], int destination[], int size){
	int index = 0;
	while(index < size){
		destination[index] = source[index];
		index++;
	}
}

void merge(int first[], int firstSize, int second[], int secondSize, int result[]){
	
	int index = 0;
	while(index < firstSize){
		result[index] = first[index];
		index++;
	}
	while(index < firstSize + secondSize){
		result[index] = second[index - firstSize];
		index++;
	}
}

void reverse(int array[], int size){
	int index = 0;
	int aux;
	while(index < size -1){
		if(size > 1){
			aux = array[index];
			array[index] = array[size - (index + 1)];
			array[size - (index + 1)] = aux;
		}
		index++;
	}
}

void sort(int array[], int size, int asc){
	int index1 = 0;
	int index2 = 0;
	int aux;
	while(index1 < size-1){

		
		while(index2 < size-1){
			
			if(asc == TRUE){
				if(array[index2] > array[index2 +1]){
					aux = array[index2];
					array[index2] = array[index2 +1];
					array[index2 +1] = aux;
				}
			}else{
				if(array[index2] < array[index2 +1]){
					aux = array[index2];
					array[index2] = array[index2 +1];
					array[index2 +1] = aux;
				}
			}
			index2++;
		
		}
		index2 = 0;
		index1++;

	}
}

