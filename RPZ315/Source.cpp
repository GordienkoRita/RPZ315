#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void main()
{
	int grup, buffer = 0, classes = 0; srand(time(0));
	cout << "Enter grups: "; cin >> grup;
	int *arr = new int[7 * grup];
	for (int i = 0; i < 7 * grup; i++)
		arr[i] = rand() % rand() % 2;
	for (int i = 0; i < grup; i++)
	{
		cout << "Grup n " << setw(3) << i + 1 << ": ";
		for (int j = i * 7; j < i * 7 + 7; j++)	cout << arr[j];
		cout << ";\n";
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < grup; j++) buffer += arr[i + j * 7];
		if (buffer > classes) classes = buffer;
		buffer = 0;
	}
	cout << classes << " classroms \n"; // code
	system("pause");
}