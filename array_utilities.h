#define TRUE 1
#define FALSE 0

// all methods assume array size >= 0

// returns the sum of all the ints in the array
int sum(int array[], int size);

// returns the biggest int of the array
// assume size > 0
int max(int array[], int size);

// returns the smallest int of the array
// assume size > 0
int min(int array[], int size);

// returns the second biggest int of the array
// assume size > 1
int secondMax(int array[], int size);

// returns the second smallest int of the array
// assume size > 1
int secondMin(int array[], int size);

// returns TRUE if the sequence of int from 0 to size
// is identical between first and two
int isEqual(int first[], int second[], int size);

// returns how many times value is present in array
int countOccurences(int array[], int size, int value);

// returns how many strictly negative number there is in array
int countNegatives(int array[], int size);

// returns the position of the first occurence of value in array
// if value isn't in array, returns -1
int indexOf(int array[], int size, int value);


// set all the element of array to value
void clearWith(int array[], int size, int value);

// insert value at position in array
// the other value get pushed by the insertion
// last value is lost
// assume position >= 0
// assume position < size
void insertElement(int array[], int size, int value, int position);


// remove value at position in array
// the other value get pushed by the insertion
// (Luis) ()=> last value set 0
// assume position >= 0
// assume position < size
void removeElement(int array[], int size, int position);

// copy the sequence of int from source to destination
void copy(int source[], int destination[], int size);

// copy the sequence of int of first and then of second into result
// tip: make sure the size of result is equal to firstSize + secondSize
void merge(int first[], int firstSize, int second[], int secondSize, int result[]);

// reverse the sequence of int in array
void reverse(int array[], int size);

// sort the sequence of int in array
// if asc is TRUE sort in ascending order
// otherwise in descending order
void sort(int array[], int size, int asc);



