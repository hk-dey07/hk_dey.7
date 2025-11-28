#include <iostream>
using namespace std;

int main()
{
	int x, p, m, c;
	cin >> x;
	p = 1;
	m = -1;
	while(p<=x)
	{
		c=(x/p)%10;
		if(c>m)
		{
			m = c;
			p = p*10;
		}
		else
		{
			x=(x/(p*10))*p+x%p;
		}
	}
	if(m>=0)
	{
		cout << x;
	}
	else
	{
		cout << "nul";
	}
	return 0;
}
