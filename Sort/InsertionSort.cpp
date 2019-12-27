#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void insertionSort(int * array, int arrayLen)
{
	for(int i = 1; i < arrayLen; ++i)
	{
		for(int k = 1; i-k >= 0 && (array[i-k] > array[i-k+1]); ++k)
		{
			int temp = array[i-k];
			array[i-k] = array[i-k+1];
			array[i-k+1] = temp;
		}
	}
}

int main()
{
	srand(time(0));
	int arrayLen;
	
	// input array length & initialize array
	cout << "Insertion Sorting Program\nPlease type the length of array.\
	\nEach element of the array is random integer.\n";
	cin >> arrayLen;
	int * unsortedArray = new int[arrayLen];
	cout << "\nUnsorted Array\n";
	for(int i = 0; i < arrayLen; ++i)
	{
		unsortedArray[i] = rand();
		cout << unsortedArray[i] << " ";
	}
	cout << "\n";
	
	//////////////////////////////////////
	insertionSort(unsortedArray, arrayLen);
	//////////////////////////////////////
	
	cout << "Sorted Array\n";
	for(int i = 0; i < arrayLen; ++i)
	{
		cout << unsortedArray[i] << " ";
	}
	cout << "\n";
	
	delete[] unsortedArray;
	return 0;
}
