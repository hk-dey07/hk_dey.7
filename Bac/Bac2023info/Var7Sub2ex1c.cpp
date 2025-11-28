#include <iostream>
using namespace std;

int main()
{
	int n, x, a, b, c, p;
	cin >> n;
	x = 0;
	while(n>0)
	{
		cin >> a >> b;
		c = a; 
		p = 1;
	        while(a>9)
		{
			a=a/10;
			p=p*10;
		}
		a=a*p+b;
		if(a!=c)
		{
			x++;
		}
		n--;
	}
	cout << x;
	return 0;
}

