#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
		long long a,b;
		int time = 0,add = 0;
		cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		while(!(a == 0 && b == 0))
		{
			if(add + a % 10 + b % 10 >= 10)
			{
				time++;
				add = 1;
			}
			else
			{
				add = 0;
			}
			a /= 10;b /= 10;
		}
		if(time == 0)
			cout << "No carry operation." << endl;
		else if(time == 1)
			cout << 1 << " carry operation." << endl;
		else
			cout << time << " carry operations." << endl;
		
		
		
		
	}
	
	
	return 0;
}
