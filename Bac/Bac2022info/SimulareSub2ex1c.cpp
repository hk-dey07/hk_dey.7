#include <iostream>
using namespace std;

int main()
{
	int x,n,nr, i,y;
	cin >> n >> x;
	nr = 0;
	i = 1;
	while(i<=n)
	{
		cin >> y;
		while(y!=0 && y%2!=x%2)
		{
			y=y/10;
		}
		if(y==x)
		{
			nr++;
		}
		i++;
	}
	cout << nr;
	return 0;
}
