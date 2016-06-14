#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "array_utilities.h"
#include "array_utilities_tests.h"



static void test_sum();
void test(){
	test_sum();
	printf("All passed!!!!");
}

static void test_sum(){
	printf("test_sum()\n");
	int input[] = {0,1,5};
	assert(sum(input, 3) == 6);
}