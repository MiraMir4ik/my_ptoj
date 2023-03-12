#include <iostream>
using namespace std;

//1
void init(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void show(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout<<arr[i];
	}
	cout << endl;
}
int main() {
	//1
	const int size = 5;
	int arr[size];
	init(arr, size);
	show(arr, size);
	//2
	int arr2[size];
	for (int i = 0; i<size; i++) {
		*(arr2+i) = *(arr+size - i-1);
	}
	show(arr2, size);
	//3
	const int size2 = size * 2;
	int arr3[size2];
	int k = 0;
	for (int i = 0; i < size2; i++) {
		if (i < size) {
			*(arr3 + i) = *(arr + i);
		}
		else {
			*(arr3 + i) = *(arr2 + size - 1 - k);
			k++;
		}
	}
	show(arr3, size2);
	return(0);
}