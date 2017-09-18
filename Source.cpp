#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	while (cin >> n)
	{
		int num[1000] = { 0 }, cnt = 0;
		for (int i = 0; i < n; i++)
			cin >> num[i];
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - i - 1; j++)
				if (num[j] > num[j + 1])
				{
					swap(num[j], num[j + 1]);
					cnt++;
				}
		cout << "Minimum exchange operations : " << cnt << endl;
	}
	return 0;
}