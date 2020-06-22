#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Fill(int m[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = rand();
		}
	}
	return m[10][10];
}

int main()
{

	srand(time(0));
	int Matrix[10][10];
	Fill(Matrix);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrix[i][j] << " \t";
		}
		cout << endl;
	}
	return 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Matrix[i][j] % 2 == 0)
			{
				cout << 0 << endl;
			}
			else cout << Matrix[i][j] << endl;
		}
		return 0;
	}
}