#include <iostream>
using namespace std;

int main() {
	auto a = 'a';
	cout << typeid(a).name();
	typedef unsigned long long my_long;//алиес или псевдоним
	my_long x = 10000;

	decltype(x)var;
	var = 30;
	
	cout << var;
	return 0;
}