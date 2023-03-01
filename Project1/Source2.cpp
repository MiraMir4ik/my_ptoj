

#include <iostream>
using namespace std;
//1
int mult_sum(int(&arr)[4], int size) {//с помошью ссылки на масив нахожу суму и произведение его элементов
	int sum = 0;
	int mult = 1;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		mult *= arr[i];
	}
	cout << sum << " " << mult;
	return sum, mult;
}

//2

int count(int(&arr)[4], int size) {//с помошью ссылки на масив нахожу количество в нем положительных отрицательных и нулевых элементов
	int positive_count = 0;
	int negative_count = 0;
	int zero_count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			positive_count++;
		}
		else if (arr[i] < 0) {
			negative_count++;
		}
		else {
			zero_count++;
		}
	}
	cout << positive_count << " " << negative_count << " " << zero_count;
	return positive_count, negative_count, zero_count;
}

//3
float average(int** arr, int rows, int cols) {//с помошбю указателя на двухмерный масив нахожу 
										//	среднее арифметическое элементов и количество четных и нечетных чисел
	int even_count = 0;//четные числа
	int noteven_count = 0;//нечетные числа
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += arr[i][j];
			if (arr[i][j] % 2 == 0) {
				even_count++;
			}
			else {
				noteven_count++;
			}

		}

	}
	cout << sum / (rows + cols) << endl;
	cout << "Even numbers:" << even_count << endl;
	cout << "Not Even numbers:" << noteven_count << endl;

	return  sum / (rows + cols);

}
float average(int(&arr)[3][4], int rows, int cols) {//тоже самое что и предидущее но с ссылкой на двухмерный масив
	int even_count = 0;
	int noteven_count = 0;
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += arr[i][j];
			if (arr[i][j] % 2 == 0) {
				even_count++;
			}
			else {
				noteven_count++;
			}

		}

	}
	cout << sum / (rows + cols) << endl;
	cout << "Even numbers:" << even_count << endl;
	cout << "Not Even numbers:" << noteven_count << endl;

	return  sum / (rows + cols);

}
int main() {
	//1

	/*const int SIZE = 4;
	int arr[SIZE] = {1,2,3,4};
	int(&ref)[SIZE] = arr;//
	mult_sum(ref, SIZE);*/

	//2

	/*cout << endl;
	count(arr, SIZE);*/

	//3

	/*int rows = 3, cols = 4;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 20 - 10;
			cout << arr[i][j] << " ";

		}

		cout << endl;
	}
	average(arr, rows, cols);
	for (int i = 0; i < rows; i++) {

		delete[] arr[i];
	}*/

	const int rows = 3, cols = 4;
	int arr[rows][cols] = { {1,2,3,4} ,{12,-4,3,34}, {9,2,-8,10} };
	int(&ref)[rows][cols] = arr;//
	average(arr, rows, cols);
	for (int i = 0; i < rows; i++) {

		delete[] arr[i];
	return(0);
}
