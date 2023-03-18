#include<iostream>
using namespace std;

void func(const char* str) {
	cout << strlen(str);
}
void my_strcpy( char* str,const char* str2) {
	int size2 = strlen(str2);
	str[size2] = '/0';
	for (int i = 0; i < size2; i++) {
		str[i] = str2[i];
	}
}
int main() {
	//char line[11] = "Hello cat!";
	//for (int i = 0; i < 11; i++) {
	//	if (line[i] == ' ') {
	//		line[i] = '\t';
	//	}
	//	cout << line[i];
	//}

	//char word[7];
	//cout << "enter word-->";
	//cin.get(word, 7);
	//cout << word;


	//int size = strlen(word);//размер массива


	//const char* messege;
	//messege = "Hello";
	//cout << messege;
	//cout << messege[0];

	//const char* string[] = { "a","c","dg" };
	//for (int i = 0; i < 3; i++) {
	//	cout << string[i] << " ";
	//}
	//const  char* s = "Happy new ";
	//func(s);
	char s[] = "Happy";
	const  char* s2 = "Sad";
	my_strcpy(s, s2);
	cout << s<<" " << s2;


	return(0);
}