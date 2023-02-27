#include <iostream>
#include <cmath>
using namespace std;



int main() {

	int rows = 3, cols = 4;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	
	for (int i = 0; i < rows; i++) {
		int max = arr[i][0];
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 200 - 100;
			cout << arr[i][j]<<" ";
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
		cout << "Maximum in row " << max;
		cout << endl;
	}
	
	for (int i = 0; i < rows; i++){
		
			delete[] arr[i];
		}


	
	return(0);
}