#include <iostream>
using namespace std;
int calc(int n)
{
	int m = 0;
	if (n != 1)
	{
		if (n % 2 == 1)
		{
			m = n * 3 + 1;
			cout << n << " " << "*" << " " << "3" << " " << "+" << " " << "1" << " " << "=" << " " << m << endl;
			calc(m);
		}
		else
		{
			m = n / 2;
			cout << n << " " << "/" << " " << "2" << " " << "=" << " " << m << endl;
			calc(m);
		}
	}
	else
	{
		cout << "End" << endl;
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	calc(n);
	system("pause");
	return 0;
}