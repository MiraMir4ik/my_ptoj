#include <iostream>
#include <cmath>
using namespace std;


void recursion() {
	recursion();//рекурсия
}

int sum(int number) {
	int sum = 0;
	for (int i = 0; i <= number; i++) {
		sum += i;
	}
	return sum;
}
int main() {
	
	cout<<sum(3);
	return(0); 
}