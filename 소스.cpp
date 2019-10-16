#include <iostream> 
using namespace std;
//bubble sort

int main(void)
{
	int arr[5] = { 3, 2, 4, 1, 5 };

	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
}
