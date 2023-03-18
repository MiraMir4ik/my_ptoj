#include<iostream>
using namespace std;

void show(int* arr, int size) {//показывает все элементы динамического масива
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}
void Add(int* arr, int size,int* arr2,int count) {//добавляет в конец массива задонное количество рандомных элементов
	srand(time(0));
	for (int i = 0; i < size + count; i++) {
		if (i < size) {
			arr2[i] = arr[i];
		}
		else {
			arr2[i] = rand() % 20 - 10;
		}

	}

}
int main() {
	//1
	/*int size = 5;
	int* arr = new int[size] {1,2,3,4,5};
	unsigned int index;
	int element;
	cin >> index;
	cin >> element;
	int* arr2 = new int[size + 1];
	int k = 0;
	for (int i = 0; i < size +1; i++) {
		if (i == index) {
			arr2[i] = element;
		}
		else {
			arr2[i] = arr[k];
			k++;
		}
	}
	show(arr2, size +1);
	*/
	//2
	/*int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};
	int count;
	cin >> count;
	int* arr2 = new int[size + count];
	srand(time(0));
	for (int i = 0; i < size + count; i++) {
		if (i < size) {
			arr2[i] = arr[i];
		}
		else {
			arr2[i] = rand() % 20 - 10;
		}
		
	}
	show(arr2, size + count);*/

	//3
	int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};
	int count;
	cin >> count;
	int* arr2 = new int[size + count];
	Add(arr, size, arr2, count);
	show(arr2, size + count);


	delete[] arr;
	delete[] arr2;
	arr = nullptr;
	arr2 = nullptr;


	return(0);
}