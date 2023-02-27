#include <iostream>
#include <cmath>
using namespace std;


//1
template <typename T>
void days_between(T day1, T month1, T year1, T day2,T month2,T year2) {
	const int SIZE = 12;
	int numbers[SIZE] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int numbers2[SIZE] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	T days2 = 0;
	T days = 0;
	T years = 0;
	T years2 = 0;
	for (int i = 0; i < month1 - 1; i++) {
		if (year1 % 4 == 0) {
			days += numbers2[i];
		}
		else {
			days += numbers[i];
		}
	}
	for (int i = 0; i < month2 - 1; i++) {
		if (year2 % 4 == 0) {
			days2 += numbers2[i];
		}
		else {
			days2 += numbers[i];
		}
	}
	for (int i = 2000; i < year1; i++) {
		if (i % 4 == 0) {
			years += 366;

		}
		else {
			years += 365;
		}
	}
	for (int i = 2000; i < year2; i++) {
		if (i % 4 == 0) {
			years2 += 366;

		}
		else {
			years2 += 365;
		}
	}
	cout << (days2 + day2 + years2) - (days + day1 + years);
}
//2
template <typename T>
void average(T arr[], T size) {
	T sum=0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	T res = sum / size;
	cout << res;
}

//3
template <typename T>
void count(T arr[], T size) {
	int zero_count = 0;
	int negative_count = 0;
	int positive_count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) {
			zero_count++;
		}
		if (arr[i] <0) {
			negative_count++;
		}
		if (arr[i] > 0) {
			positive_count++;
		}
	}
	cout << "zeros:" << zero_count << endl << "negative numbers:" << negative_count << endl << "positive numbers:" << positive_;
}
int main() {
	//1
	days_between(15,1,2023,15,1,2024);
	cout << endl;
	//2
	const int SIZE = 10;
	int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	average(arr, SIZE);

	//3
	int arr2[SIZE] = { 1,0,3,4,-5,6,-7,0,9,-10 };
	count(arr2, SIZE);
	return(0);
}