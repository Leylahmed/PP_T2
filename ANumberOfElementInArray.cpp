#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	int n;

	cout << "Enter the number of elements:";
	cin >> n;

	int* arr = new int(n);
	int element;
	bool inTheArray = false;
	int count = 0;

	cout << "Enter the integer element that is in the array:";
	cin >> element;

	srand((int)time(0));

	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 10;
		cout << arr[i] << endl;

		if (element == arr[i]) {
			inTheArray = true;
			count++;
		}
	}

	cout << endl;

	if (inTheArray) {

		cout << "TRUE, "<<count;

	}
	else cout << "FALSE";
}