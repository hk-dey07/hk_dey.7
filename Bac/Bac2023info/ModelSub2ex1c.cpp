#include <iostream>
using namespace std;

int main()
{
	int m,n,p,q,s,x;
	cin >> m >> n >> p >> q;
	s = 0;
	for(x=p; x<=q; x++)
	{
		if(x%m==0 || x%n==0)
		{
			s=s+x;
		}
		if(x%m==0 && x%n==0)
		{
			s=s-x;
		}
	}
	cout << s;
	return 0;
}
