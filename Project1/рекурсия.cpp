#include <iostream>
#include <cmath>
using namespace std;


int recursion(int number) {
	if (number == 1) {
		return 1;
	}
	else {
		return number + recursion(number-1);
	}
	
}

int sum(int number) {
	int sum = 0;
	for (int i = 0; i <= number; i++) {
		sum += i;
	}
	return sum;
}
int main() {

	cout << sum(3);
	cout << recursion(3);
	return(0);
}