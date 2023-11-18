#include<iostream>
#include<vector>

void insertionsort(std::vector<int>& k) {
	for (int i = 0; i <= k.size() - 1; i++)
	{
		int j = i; 
		while (j>0 && k[j-1]>k[j])
		{
			std::swap(k[j], k[j-1]);
			j--; 

		}
	}
}



// Time complexity worse case = O(n^2) , av
