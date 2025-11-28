#include <iostream>
using namespace std;

int main()
{
	int x,n,y,nr,i;
	cin >> n >> x >> y;
	nr = 0;
	for(i=n; i>=1; i--)
	{
		if(i%x==0 && i%y!=0)
		{
			nr++;
		}
		else
		{
			if(i%x!=0 && i%y==0)
			{
				nr++;
			}
		}
	}
	cout << nr;
	return 0;
}
