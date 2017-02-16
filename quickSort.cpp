// MergeSort
// Alec Mas

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> arr, int left, int right) {

	int pivot = arr[(left + right) / 2];

	while (left <= right) {

		while (arr[left] < pivot) {

			left++;

		}
 
		while (arr[right] > pivot) {

			right--;

		}

		if (left <= right) {

			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;

			left++;
			right--;

		}

	}

	return left;

}

vector<int> quickSort(vector<int> arr, int left, int right) {

	int index = partition(arr, left, right);

	if (left < index - 1) {

		quickSort(arr, left, index - 1);

	}

	if (index < right) {

		quickSort(arr, index, right);

	}

	return arr;

}

int main() {

	vector<int> a1 = {1, 5, 3, 2, 7};

	a1 = quickSort(a1, 0, a1.size() - 1);

	for (int i = 0; i < a1.size(); i++) {

		cout << a1[i] << " ";

	}

	cout << endl;

	

}



