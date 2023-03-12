#include <iostream>
#include <cmath>

using namespace std;

int* function(int* arr, int N) {
	int count = 0;
	for (int i=0; i < N; i++) {
		if (abs(arr[i]) > 10) {
			count++;
		}
	}
	int* arr2 = new int[count];
	int k = 0;
	for (int i = 0; i < N; i++) {
		if (abs(arr[i]) > 10) {
			arr2[k] = arr[i];
			k++;
		}
	}
	for (int i = 0; i < count; i++) {
			cout<<arr2[i]<<" ";
		
	}
	int a = 0;
	for (int i = 0; i < count; i++) {
		a += arr2[i];

	}
	cout << endl << a / count;
	return arr2;
	delete arr2;
}
int main() {
	int N = 9;
	int* arr = new int[N] {1, 2, -13, 4, -11, 6, 7, 28, 9};

	function(arr, N);
	delete arr;


	return(0);
}