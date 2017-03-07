#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D, i, j, m, n;
	for (i = 1; i<5; i++)
	{
		for (j = 1; j<5; j++)
		{
			for (m = 1; m<5; m++)
			{
				for (n = 1; n<5; n++)
				{
					A = B = C = D = 0;
					if (i != j&&i != m&&i != n&&j != m&&j != n&&m != n)
					{
						switch (i)
						{
						case 1:D = D + 1; break;
						case 2:B = B + 1; break;
						case 3:A = A + 1; break;
						}
						switch (j)
						{
						case 1:A = A + 1; break;
						case 3:C = C + 1; D = D + 1; break;
						case 4:B = B + 1; break;
						}
						switch (m)
						{
						case 3:B = B + 1; break;
						case 4:D = D + 1; break;
						}
						switch (n)
						{
						case 1:B = B + 1; break;
						case 2:D = D + 1; break;
						case 4:A = A + 1; C = C + 1; break;
						}
						if (A == B&&A == C&&A == D&A == 1)
							cout << i << endl << j << endl << m << endl << n << endl;
					}
				}
			}
		}
	}
	getchar();
	return 0;
}