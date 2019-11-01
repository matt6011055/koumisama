//add commit
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int number;
	while(cin >> number)
	{
		
		int *array = new int[number];
		int *diff = new int[number - 1];
		for(int i = 0;i < number;i++)
		{
			cin >> array[i];
		}
		for(int i = 0;i < number - 1;i++)
		{
			diff[abs(array[i] - array[i+1]) - 1]++;
		}
		bool yn = true;
		for(int i = 0;i < number - 1;i++)
		{
			if(diff[i] == 0)
				yn = false;	
		}	
		if(yn)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
		//delete []array;delete array;
		//delete []diff;delete diff;
	}
	
	return 0;
}
