#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//вариант 1
	//1. «адан массив A, содержащий 10 целых случайных чисел от 0 до 20.Ќайти произведение элементов этого массива
	const int n = 10;
	int mas[n];
	srand(time(nullptr));
	long long p;
	for (int i = 0; i < n; i++); {
		mas[0] = rand() % 61 - 30;
		cout << mas[0] << ' ';
	}
	cout << endl;
	

	


	}


}