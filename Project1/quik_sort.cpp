#include <iostream>
using namespace std;





//n до 1 сумма


//Все рекурсивные вызовы помещаются в стек программы. Если рекурсия не закончится до заполнения
//стека, то мы получим ошибку "Переполнение стека - Stack Overflow"

//Решения написанные с использованием рекурсии более кратки и читабельны
//Рекурсия чаще всего используется при обходе графов и деревьев
//Примеры: вычисление факториала, ряда Фибоначчи, реализация быстрой сортировки quick sort


//arr - массив для поиска, start - Левый Индекс, finish - Правый индекс
//void quickSort(int* arr, int start, int finish)
//{
//	if (start < finish)
//	{
//		int left = start;
//		int right = finish;
//		do {
//			int middle = arr[(left + right) / 2]; //находим серединный элемент
//			while (arr[left] < middle)
//			{
//				left++;
//			}
//			while (arr[right] > middle)
//			{
//				right--;
//			}
//			if (left <= right)
//			{
//				int temp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = temp;
//				left++;
//				right--;
//			}
//
//
//		} while (left <= right);
//		quickSort(arr, start, right);
//		quickSort(arr, left, finish);
//	}
//	return;
//}


void quickSort(int* arr, int size)
{
	long left = 0, right = size;
	int temp, middle;
	middle = arr[size / 2];
	do {
		while (arr[left] < middle)
		{
			left++;
		}
		while (arr[right] > middle)
		{
			right--;
		}
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (right > 0) quickSort(arr, right);
	if (size > left) quickSort(arr + left, size - left);
}

int main()
{

	////TODO: продебажить на данном наборе
	 int size = 10;
	int* arr=new int[size] { -1,0,4,7,-12,10,10,4,0,5}; //!!! error
	//int* arr = new int[size]{ -1,0,14,7,-12,10,11,4,1,5 }; //!!!error
	//quicksort(arr, 0, size);
	quickSort(arr, size - 1);
	for (int i = 0; i < size; i++)//iijij
	{
		cout << arr[i] << " ";
	}

	return 0;
}