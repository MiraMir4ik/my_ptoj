#include <iostream>
using namespace std;


//template<typename T>
//T sum(T a, T b) {
//
//	return a;
//}
void generate( int* const arr,unsigned int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 20 - 10;
	}

}
void fill(int* const arr, unsigned int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter number #" << i << "-->";
		cin>>*(arr + i);
	}

}
void show(int* const arr, unsigned int size) {
	for (int i = 0; i < size; i++) {
		cout<<*(arr + i);
	}
	cout << endl;
}
void show() {

	cout << "Helo";
}
void show(int a) {

	cout << a;
}
void push(int* const arr1, int* const arr2, int* const arr3,unsigned int size1, unsigned int size2) {

	for (int i = 0; i < size1; i++) {
		*(arr3 + i) = *(arr1 + i);
	}
	int k = 0;
	for (int i = size1; i < size2; i++) {
		*(arr3 + i) = *(arr2 + k);
		k++;
	}
}
int sum(int a, int b) {
	return a + b;
}
int min(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}

double getPrice(int a)
{
	return a * 0.5;
}
void showPrice(int a, double b)
{
	cout << a + b;
}
int main() {
	//int n = 100;
	//int* const ptrN = &n;//константный указатель

	//int n2 = 200;
	/*unsigned int size;
	unsigned int size2;
	cout << "Enter size1-->";
	cin >> size;
	cout << "Enter size2-->";

	cin >> size2;
	unsigned int size3 = size + size2;
	int* arr = new int[size];
	int* arr2 = new int[size2];
	int* arr3 = new int[size3];

	generate(arr, size);
	fill(arr2, size2);
	show(arr, size);
	show(arr2, size2);
	push(arr, arr2, arr3, size, size3);
	show(arr3, size3);*/

	//указатель на функцыю
	/*void (*pointerFunction)();
	void (*pointerFunction)(int);

	pointerFunction = show;
	pointerFunction();
	const int countFunctions = 3;
	int(*pointerMath[countFunctions])(int, int) = { sum,min,mul };
	for (size_t i = 0; i < countFunctions; i++) {
		cout << pointerMath[i](10, 5) << endl;
	}*/

	double (*pointerFunction1)(int);
	pointerFunction1 = getPrice;
	cout<<pointerFunction1(2);
	void (*pointerFunction2)(int,double);
	pointerFunction2 = showPrice;
	pointerFunction2(2,2.5);
	const int countFunctions = 3;
	int(*pointerMath[countFunctions])(int, int) = { sum,min,mul };
	return(0);
}