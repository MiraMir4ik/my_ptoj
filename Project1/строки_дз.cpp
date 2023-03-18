#include<iostream>
using namespace std;


int main() {
	//1  Дана строка символов. Пользователь вводит искомый символ.
	//Посчитать, сколько раз он встречается в строке.

	/*const int SIZE = 12;
	char line[SIZE] = {"Hello World"};
	char symbol;
	cout << "Enter symbol-->";
	cin >> symbol;
	unsigned int count = 0;
	for (int i = 0; i < SIZE;i++) {
	if (line[i] == symbol) {
	count++;
	}
	}
	cout <<"Symbol \""<<symbol<<"\" repiets "<< count<<" times";*/

	//2 Дана строка символов. Определить количество букв, цифр и остальных символов,
	//присутствующих в строке.

	/*const int SIZE = 11;
	char line[SIZE] = { "H35fgjeh97" };
	unsigned int number_count = 0;
	unsigned int letter_count = 0;
	unsigned int other_count = 0;

	for (int i = 0; i < SIZE; i++) {
	if (((int)line[i] >= 48) && ((int)line[i] <= 57)) {
	number_count++;
	}
	else if ((  ( (int)line[i] >= 65 && (int)line[i] <= 90))  || ((int)line[i] >= 97 && (int)line[i] <= 122)) {
	letter_count++;
	}
	else {
	other_count++;
	}
	}
	cout << "Letter count: " << letter_count << "\nnumber count: " << number_count << "\nother count: " << other_count;*/

	//3 Дана строка символов. Необходимо проверить, является ли эта строка палиндромом.


	char line[] = { "lol" };
	bool palindrom = 1;
	for (int i = 0; i < strlen(line); i++) {
		if (line[i] == line[strlen(line) - i - 1]) {
			continue;
		}
		else {
			palindrom = 0;
		}
	}
	cout << palindrom;
	return(0);
}