#include <iostream>
#include <chrono>

using namespace std;
int main() {

	// Prime Numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
	//               43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
	// take an input value from user and print prime numbers from 1 to input value.

	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	// It can be measured runtime of the algorithm with chrono.
	//Be careful about efficiency of the code.
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	for (int i = 1;i <= number;i++)
	{
		int counter = 0;
		for (int j = 1;j <= i;j++)
		{
			if (i % j == 0)
				counter++;
			if (counter > 2)
				break;
		}

		if (counter == 2)
			cout << i << ", ";
	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << endl << "Time difference = "
		<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
		<< "[µs]" << std::endl;


	cout << endl;
	return 0;
}
