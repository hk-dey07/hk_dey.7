#include <iostream>
using namespace std;

int main()
{
	int n,m,i,x;
	cin >> n;
	m = 0;
	i = n;
	while(i>=1)
	{
		cin >> x;
		while(x%10 <= (x/10)%10)
		{
			x=x/10;
		}
		m=m+x;
		i--;
	}
	if(m!=n)
	{
		cout << m;
	}
	else
	{
		cout <<"egal";
	}
	return 0;
}
