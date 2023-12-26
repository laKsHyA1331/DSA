//maximumg subarray sum by kdanes algorithm 
#include<iostream>
#include<vector> 
#include<algorithm>	

long long kdanes(std::vector<int> v, int n) {
	long long max = LONG_MIN;
	long long sum = 0; 
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		if (sum > max) {
			max = sum; 
		}
		if (sum < 0) {
				sum = 0; 
		}
	}
	return max; 
}