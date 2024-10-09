#include <iostream>
#include <cstdlib>

void SetRandom(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 27 - 8;
	}
}

void PrintArr(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void FindMin(int arr[], const int size) {
	int min_value = arr[0];
	int min_index;

	for (int i = 0; i < size; i++) {
		if (min_value > arr[i]) {
			min_value = arr[i];
			min_index = i;
		}
	}
	std::cout << "Min number: " << min_value << "\nMin index: " << min_index << "\n";
}

void FindMax(int arr[], const int size) {
	int max_value = arr[0];
	int max_index;

	for (int i = 0; i < size; i++) {
		if (max_value < arr[i]) {
			max_value = arr[i];
			max_index = i;
		}
	}
	std::cout << "Max number: " << max_value << "\nMax index: " << max_index << "\n";
}

int main() {
	srand(time(NULL));

	const int size = 20;
	int arr[size];

	SetRandom(arr, size);
	PrintArr(arr, size);
	FindMin(arr, size);
	FindMax(arr, size);

}