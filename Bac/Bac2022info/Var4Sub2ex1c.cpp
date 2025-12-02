#include <iostream>
using namespace std;

int main()
{
	int n,x,p;
	cin >> n;
	do
	{
		x=n%100;
		if(x>1)
		{
			p=(x%2)*(x%3)*(x%5)*(x%7);
			if(p!=0)
			{
				cout << x << " ";
			}
		}
		n=n/10;
	}while(n>10);
	return 0;
}

