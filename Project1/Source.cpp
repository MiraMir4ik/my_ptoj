#include <iostream>
using namespace std;

void generate(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 20 - 10;
	}
}

void show(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout<<*(arr + i)<<" ";
	}
	cout << endl;
}
int main() {
	int M;
	cin >> M;
	int N;
	cin >> N;

	int* arr1 = new int[M];
	int* arr2 = new int[N];

	generate(arr1, M);
	generate(arr2, N);
	show(arr1, M);
	show(arr2, N);
	int size = M + N;
	int* arr3 = new int[size];

	for (int i = 0; i < M; i++) {
		*(arr3 + i) = *(arr1 + i);
	}
	int k = 0;
	for (int i = M; i < size; i++) {
		*(arr3 + i) = *(arr2 + k);
		k++;
	}
	show(arr3, size);
	int count = -1;
	int count2 = 0;
	for (int i = 0; i < size; i++) {
		int flag = *(arr3 + i);
		count = -1;
		for (int j = 0; j < size; j++) {

			if (flag == *(arr3 + j)) {
				count++;
						count2 += count;

			}
			
		}
		count2 += count;
	}
	cout << endl << count2;
	return(0);
}