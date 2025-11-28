#include <iostream>
using namespace std;

int main()
{
	int n, x, cn, p, c;
	cin >> n;
	x = 5;
	do
	{
		cn = n;
		n = 0;
		p = 1;
		do
		{
			c=cn%10;
			if(c==x)
			{
				c=5-c;
			}
			n = c*p+n;
			cn = cn/10;
		        p=p*10;
		}while(cn!=0);
	        
		x--;

	}while(x!=0);
	cout << n;
	return 0;
}

