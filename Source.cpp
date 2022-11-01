#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//int mas[10]; // от 0 до 9
	//mas[0] = 45; // присваивание
	//for (int i = 0; i < 10; i++) {
	//	cin >> mas[i];               //ввод
	//}

	// пример 2
	//int mas[5];
	////ввод
	//for (int i = 0; i < 5; i++) {
	//	cin >> mas[i];
	//}
	////вывод
	//for (int i = 0; i < 5; i++) {
	//	cout << mas[i] << " ";
	//}



	//дан массив чисел размерои 10. Ввести данные в массив вывести в 1 строку. найти кол-во положительных чисел

	//const int size = 10;
	////ввод
	//int arr[size];
	//for (int i = 0; i < size; i++) {
	//	cin >> arr[i];
	//}

	////вывод
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << ' ';
	//}
	//cout << endl;

	////подсчёт положительных
	//int k = 0;
	//for (int i = 0; i < size; i++) {
	//	if (arr[i] > 0) k++;
	//}
	//cout << ">0 " << k << endl;

	//задачи

	//1
	/*int mass[10];
	for (int i = 0; i < 10; i++) {
		cin >> mass[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << mass[i] << ' ';
	}*/

	//2
	/*int mass[8];
	for (int i = 0; i < 8; i++) {
		cin >> mass[i];
	}

	for (int i = 0; i < 8; i++) {
		cout << mass[i] << ' ';
	}

	int k = 0;
	for (int i = 0; i < 8; i++) {
		if (mass[i] > 0) {
			k++;
		}
	}
	cout << endl << k;*/

	//3
	/*int mass[5];
	for (int i = 0; i < 5; i++) {
		cin >> mass[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << mass[i] << ' ';
	}

	int k = 1;
	for (int i = 0; i < 5; i++) {
		if ((mass[i] % 2) == 0) {
			k = k * mass[i];
		}
	}
	cout << endl << k;*/

	//4
	/*int mass[7];
	for (int i = 0; i < 7; i++) {
		cin >> mass[i];
	}

	for (int i = 0; i < 7; i++) {
		cout << mass[i] << ' ';
	}

	int k = 0;
	for (int i = 0; i < 7; i++) {
		if ((mass[i]%3) != 0 && (mass[i] % 5) != 0 ) {
			k++;
		}
	}
	cout << endl << k;*/

//5
//int mass[9];
//for (int i = 0; i < 9; i++) {
//	cin >> mass[i];
//}
//
//for (int i = 0; i < 9; i++) {
//	cout << mass[i] << ' ';
//}
//
//int k = 0;
//int sum = 0;
//for (int i = 0; i < 9; i++) {
//	if ((mass[i] % 2) != 0)
//	{
//		sum = sum + mass[i];
//		k++;
//	}
//}
//double mid = (double)sum / (double)k;
//cout << endl << mid;

//абрамян






}