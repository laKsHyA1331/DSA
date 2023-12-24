// question - Lognest sub array with sum K 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
int lognestsubarraywithsumk(std::vector<int> a, long long k) {
	std::map<long long, int> presummap;
	long long sum = 0;
	int maxlen = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a[i];
		if (sum == k)
		{
			maxlen = std::max(maxlen, i + 1);
		}
		long long int rem = sum - k;
		if (presummap.find(rem) != presummap.end()) {
			int len = i - presummap[rem];
			maxlen = std::max(maxlen, len);
		}
		if (presummap.find(sum) == presummap.end()) {
			presummap[sum] = i;

		}
	}
	return maxlen;
}

int main() {
	std::vector<int> a;
	a = { 1,2,3,4,5,2,5,2,2 };
	int k = 4;
	int m = lognestsubarraywithsumk(a, k); 
	std::cout << m; 
}
