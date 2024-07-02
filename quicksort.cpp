#include <iostream>
#include <utility>
#include <cstdlib>
#include <ctime>

using namespace std;

int partition(int array[], int low, int high) {
	int pivot_value = array[high];

	int i = low;

	for (int j = low; j < high; j++) {
		if (array[j] <= pivot_value) {
			swap(array[i], array[j]);
			i ++;
		}
	}

	swap(array[i], array[high]);

	return i; //index of pivot
	
}

void qsort_recursion(int array[], int low, int high) {
	if (low < high) { // otherwise only one elem in array
		int pivot_index = partition(array, low, high);
		qsort_recursion(array, low, pivot_index-1); //left side of pivot
		qsort_recursion(array, pivot_index+1, high); //right side

	}
}

void qsort(int array[], int length) {
	qsort_recursion(array, 0, length-1);
}

int main() {

	int a[] = {8, 1, 2, 7, 9, 4, 5};
	int len = 7;

	qsort(a, len);

	for (int i =0; i < len; i++) {
		cout << a[i] << " ";
	}

	cout << endl << endl;

	return 0;
}
