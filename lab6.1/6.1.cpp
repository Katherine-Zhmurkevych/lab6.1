//ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		r[i] = Low + rand() % (High - Low + 1);
}
void print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}
int sum(int* r, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++) {
		if (r[i] % 2 == 1 && r[i] % 13 != 0) {
			S += r[i];
			r[i] = 0;
		}
	}
	return S;
	
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 23;
	int r[n];
	int Low = 4;
	int High = 68;
	create(r, n, Low, High);
	print(r, n);
	cout << "S = " << sum(r, n) << endl;
	print(r, n);
	return 0;
}