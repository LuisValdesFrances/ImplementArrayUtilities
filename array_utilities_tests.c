#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "array_utilities.h"
#include "array_utilities_tests.h"


static void test_sum();
static void test_max();
static void test_min();
static void test_second_max();
static void test_second_min();
static void test_equal();
static void test_occurences();
static void test_countNegatives();
static void test_indexOf();
static void test_clearWith();
static void test_insertElement();
static void test_removeElement();
static void test_copy();

void test(){
	test_sum();
	test_max();
	test_min();
	test_second_max();
	test_second_min();
	test_equal();
	test_occurences();
	test_countNegatives();
	test_indexOf();
	test_clearWith();
	test_insertElement();
	test_removeElement();
	test_copy();
	printf("All passed!!!!");
}

static void test_sum(){
	printf("test_sum()\n");
	/*
	int input0[10];
	printf("Result: ");
	printf("%d\n", sum(input0, 10));
	assert(sum(input4, 2) == 0);
	*/
	int input[] = {1};
	assert(sum(input, 1) == 1);
	int input2[] = {1, 2};
	assert(sum(input2, 2) == 3);
	int input3[] = {0, 2, 3};
	assert(sum(input3, 3) == 5);

	int input4[] = {-1};
	assert(sum(input4, 1) == -1);
	int input5[] = {-1, -2};
	assert(sum(input5, 2) == -3);
	int input6[] = {0, -2, 3};
	assert(sum(input6, 3) == 1);
}

static void test_max(){
	printf("test_max()\n");
	
	int input[] = {1};
	assert(max(input, 1) == 1);
	int input2[] = {1, 2};
	assert(max(input2, 2) == 2);
	int input3[] = {2, 1};
	assert(max(input3, 2) == 2);

	int input4[] = {-1};
	assert(max(input4, 1) == -1);
	int input5[] = {-1, -2};
	assert(max(input5, 2) == -1);
	int input6[] = {1, -2};
	assert(max(input6, 2) == 1);
}

static void test_min(){
	printf("test_min()\n");
	
	int input[] = {1};
	assert(min(input, 1) == 1);
	int input2[] = {1, 2};
	assert(min(input2, 2) == 1);
	int input3[] = {2, 1};
	assert(min(input3, 2) == 1);

	int input4[] = {-1};
	assert(min(input4, 1) == -1);
	int input5[] = {-1, -2};
	assert(min(input5, 2) == -2);
	int input6[] = {1, -2};
	assert(min(input6, 2) == -2);
}

static void test_second_max(){
	printf("test_second_max()\n");
	
	
	int input1[] = {1, 2};
	assert(secondMax(input1, 2) == 1);
	int input2[] = {2, 1};
	assert(secondMax(input2, 2) == 1);
	int input3[] = {3, 2, 1};
	assert(secondMax(input3, 3) == 2);

	
	int input4[] = {-1, -2};
	assert(secondMax(input4, 2) == -2);
	int input5[] = {1, -2};
	assert(secondMax(input5, 2) == -2);
	int input6[] = {3, 1, -2};
	assert(secondMax(input6, 3) == 1);
}

static void test_second_min(){
	printf("test_second_min()\n");
	
	
	int input1[] = {1, 2};
	assert(secondMin(input1, 2) == 2);
	int input2[] = {2, 1};
	assert(secondMin(input2, 2) == 2);
	int input3[] = {3, 2, 1};
	assert(secondMin(input3, 3) == 2);

	
	int input4[] = {-1, -2};
	assert(secondMin(input4, 2) == -1);
	int input5[] = {1, -2};
	assert(secondMin(input5, 2) == 1);
	int input6[] = {3, 1, -2};
	assert(secondMin(input6, 3) == 1);
}

static void test_equal(){
	printf("test_is_equal()\n");

	int input1[] = {0};
	int input2[] = {0};
	assert(isEqual(input1, input2, 1) == TRUE);

	int input3[] = {0};
	int input4[] = {1};
	assert(isEqual(input3, input4, 1) == FALSE);

	int input5[] = {0, 1};
	int input6[] = {0, 1};
	assert(isEqual(input5, input6, 2) == TRUE);

	int input7[] = {0, 1};
	int input8[] = {1, 2};
	assert(isEqual(input7, input8, 2) == FALSE);

	int input9[] = {0, -1};
	int input10[] = {0, -1};
	assert(isEqual(input9, input10, 2) == TRUE);

	int input11[] = {0, -1};
	int input12[] = {0, -2};
	assert(isEqual(input11, input12, 2) == FALSE);

	assert(isEqual(input11, input11, 1) == TRUE);
}

static void test_occurences(){
	printf("test_occurences()\n");

	int input1[] = {1};
	assert(countOccurences(input1, 1, 0) == 0);
	assert(countOccurences(input1, 1, 1) == 1);
	int input2[] = {0, 1, 1};
	assert(countOccurences(input2, 3, 0) == 1);
	assert(countOccurences(input2, 3, 1) == 2);
	int input3[] = {0, -1, -1, 1};
	assert(countOccurences(input3, 4, 2) == 0);
	assert(countOccurences(input3, 4, 1) == 1);
	assert(countOccurences(input3, 4, -1) == 2);
}

static void test_countNegatives(){
	printf("test_countNegatives()\n");

	int input1[] = {1};
	assert(countNegatives(input1, 1) == 0);
	int input2[] = {-1};
	assert(countNegatives(input2, 1) == 1);
	int input3[] = {0, -1, -2};
	assert(countNegatives(input3, 3) == 2);
}

static void test_indexOf(){
	printf("test_indexOf()\n");
	int input1[] = {1};
	assert(indexOf(input1, 1, 0) == -1);
	assert(indexOf(input1, 1, 1) == 0);
	int input2[] = {-1};
	assert(indexOf(input2, 1, 0) == -1);
	assert(indexOf(input2, 1, -1) == 0);
	int input3[] = {1, -1, -1};
	assert(indexOf(input3, 3, -1) == 1);
	int input4[] = {0, 2, 3};
	assert(indexOf(input4, 3, 3) == 2);
}

static void test_clearWith(){
	printf("test_clearWith()\n");
	
	int input1[] = {1};
	int clear = 0;
	int index = 0;
	clearWith(input1, 1, clear);
	while(index < 1){
		assert(input1[index] == clear);
		index++;
	}

	int input2[] = {1,0};
	clear = 1;
	index = 0;
	clearWith(input2, 2, clear);
	while(index < 2){
		assert(input2[index] == clear);
		index++;
	}

	int input3[] = {1, -1, 2};
	clear = -1;
	index = 0;
	clearWith(input3, 3, clear);
	while(index < 3){
		assert(input3[index] == clear);
		index++;
	}
}

static void test_insertElement(){
	printf("test_insertElement()\n");
	
	int input1[] = {1};
	insertElement(input1, 1, 0, 0);
	assert(input1[0] == 0);

	int input2[] = {1,-1, 0};
	insertElement(input2, 3, 2, 1);
	assert(input2[0] == 1);
	assert(input2[1] == 2);
	assert(input2[2] == -1);

	insertElement(input2, 3, 3, 2);
	assert(input2[0] == 1);
	assert(input2[1] == 2);
	assert(input2[2] == 3);
}

static void test_removeElement(){
	printf("test_removeElement()\n");

	int input1[] = {1};
	removeElement(input1, 1, 0);
	assert(input1[0] == 0);

	int input2[] = {1,-1, 2};
	removeElement(input2, 3, 1);
	assert(input2[0] == 1);
	assert(input2[1] == 2);
	assert(input2[2] == 0);

	removeElement(input2, 3, 0);
	assert(input2[0] == 2);
	assert(input2[1] == 0);
	assert(input2[2] == 0);

	int input3[] = {1,-1, 2, 3};
	removeElement(input3, 4, 0);
	assert(input3[0] == -1);
	assert(input3[1] == 2);
	assert(input3[2] == 3);
	assert(input3[3] == 0);
}

static void test_copy(){
	printf("test_copy()\n");
	
	int input1[] = {1};
	int input2[] = {0};
	int index = 0;
	copy(input1, input2, 1);
	while(index < 1){
		assert(input1[index] == input2[index]);
		index++;
	}

	int input3[] = {1, 0, -1};
	int input4[] = {0, 0, 0};
	index = 0;
	copy(input3, input4, 3);
	while(index < 1){
		assert(input2[index] == input3[index]);
		index++;
	}
	copy(input4, input3, 3);
	while(index < 1){
		assert(input2[index] == input3[index]);
		index++;
	}
}