#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j<=i)
			{
				cout << "2";
			}
			else
			{
				cout << "3";
			}
		}
	}
	return 0;
}
