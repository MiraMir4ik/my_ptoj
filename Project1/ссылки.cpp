#include <iostream>
#include <cmath>
using namespace std;

void show(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}
void generate(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		*(arr + i) =rand()%20-10;
	}
}
void show() {
	cout << "Hello";
}
int main() {

	/*int number = 100;
	int& refNumber = number;*/

	/*int N;
	cin >> N;
	int* adress = new int[N];
	generate(adress, N);
	show(adress, N);
	int size=N;
	int k = 0;
		for (int i = 0; i < N; i++) {
			if ((*(adress + k) == *(adress + i+1))) {
				size--;
				k++;
			}
			
		}
	
	cout << size;*/
	
	return(0);
}