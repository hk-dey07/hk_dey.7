#include <iostream>
using namespace std;

int main()
{
	int m, n, k, i;
	cin >> m >> n;
	if(m<n)
	{
		n=n+m;
		m=n-m;
		n=n-m;
	}
	k=m;
	for(i=m; i>=n; i--)
	{
		cout << k << " ";
		if(i%2==0)
		{
			k--;
			cout << '*' << " ";
		}
		k--;
	}

	return 0;
}
