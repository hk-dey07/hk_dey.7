#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n;
	x =-1;
	y = -1;
	while(n>9)
	{
		if(x==-1)
		{
			x=n%100;
		}
		else
		{
			y=n%100;
		}
		n=n/10;
	}
	if(x<y)
	{
		n=(n*100+x)*100+y;
	}
	else
	{
		n=(n*100+y)*100+x;
	}
	cout << n;
	return 0;
}
