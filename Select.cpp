#include <iostream> 
using namespace std;
// select

int main(void)
{
	int arr[5] = { 4, 2, 3, 1, 5};

	for (int i = 0; i < 5; i++) {
		int min = 10;
		int pivot;
		for (int j = i; j < 5; j++) {
			if ( min > arr[j]) {
				min = arr[j];
				pivot = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[pivot];
		arr[pivot] = tmp;
	}
	   
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
}

