#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	const int k = 25;
	int counter = 0;
	int sm;
	int array[k];

	cout << "Before changing: " << endl;
	for (int i = 0; i < k; i++) {
		array[i] = rand() % 100 + 100;
		cout << array[i] << " ";
	}
	cout << " " << endl;

	cout << "Enter 1 or 2 to see changing their height by 1 or 2 sm" << endl;
	cin >> sm;
	while (cin.fail() || (sm != 1 && sm != 2)) {
		cout << "Wrong Input" << endl;
		cin >> sm;
	}

	if (sm == 1) {

		for (int i = 1; i < k - 1; i++) {
			while ((array[i]) > array[i - 1] and (array[i]) > array[i + 1]) {
				array[i]--;
				counter++;
			}
		}

		cout << "In " << counter << " minutes they will stop"<< endl;
		for (int i = 0; i < k; i++) {
			cout << array[i] << " ";
		}
	}

	if(sm==2){
		for (int i = 1; i < k - 1; i++) {
			while ((array[i]) > array[i - 1] and (array[i]) > array[i + 1]) {
				array[i] -= 2;
				counter++;
			}
		}

		cout << "In " << counter << " minutes they will come back to the beginning and it will go on forever" << endl;
		for (int i = 0; i < k; i++) {
			cout << array[i] << " ";
		}
	}
}