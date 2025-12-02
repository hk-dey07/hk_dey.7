#include <iostream>
using namespace std;

int main()
{
	int n, i, k;
	cin >> n;
	i = 2;
	k = 0;
	while(n>=i)
	{
		while(n%i==0)
		{
			k++;
			n=n/i;
		}
		if(i==2)
		{
			i++;
		}
		else
		{
			i=i+2;
		}
	}
	cout << k;
	return 0;
}

