#include<iostream>
#include<vector>

void bubblesort(std::vector<int> &k, int len) {
	for (int i = len-1; i >= 1;i--)
	{
		for (int j = 0; j< i; j++)
		{
			int temp;
			if (k[j]>k[j+1])
			{
				std::swap(k[j], k[j + 1]); 
			}

		}
	}
	
}

