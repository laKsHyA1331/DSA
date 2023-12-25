#include<iostream> 
#include<map> 
#include<algorithm>
#include<vector>
//better solution using hasahing 
int majorityelem(std::vector<int> v) {
	std::map<int, int> mpp; 
	for (int i = 0; i < v.size(); i++)
	{
		mpp[v[i]]++; 
	}
	for(auto it: mpp)	
	{
		if ((it.second) > (v.size() / 3)) {
			return it.first; 
		}
	}
}

//most optimal solution 
int majorityelemoptimal(std::vector<int> v) {
	int cnt = 0; 
	int el; 
	for (int i = 0; i < v.size(); i++) {
		if (cnt == 0) {
			cnt = 1; 
			el = v[i];
		}
		else if (v[i] == el) {
			cnt++;		
		}
		else {
			cnt--; 
		}
		int cnt1 = 0; 
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == el) cnt1++; 
		}
		if (cnt > (v.size() / 2)) {
			return el; 
		}
		return -1; 
	}
}
