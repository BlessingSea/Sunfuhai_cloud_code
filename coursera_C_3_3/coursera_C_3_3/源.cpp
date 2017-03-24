#include <iostream>
using namespace std;
int n = 0;
char c;
void team()
{
	c = getchar();
	if ( c == '(')
	{
		team();
	}
	
	if ( c == ')')
	{
		cout << "Yes! " << endl;
	}
	
}
int main()
{
	team();
	system("pause");
	return 0;
}