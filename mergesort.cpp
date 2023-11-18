#include<iostream>
#include<vector>
void merge(std::vector<int>& k, int low, int mid, int high) {
	std::vector<int> temp;
	int left = low;
	int right = mid + 1;
	while (left <= mid && right <= high) {
		if (k[left] <= k[right])
		{
			temp.push_back(k[left]);
			left++;
		}
		if (k[right] <= k[left])
		{
			temp.push_back(k[right]);
			right++;
		}
		else
		{
			temp.push_back(k[right]);
			right++;
		}
	}
	while (left <= mid) {
		temp.push_back(k[left]);
		left++;
	}
	while (right <= high) {
		temp.push_back(k[right]);
		right++; 

	}
	for (int i = low; i <= high; i++)
	{
		k[i] = temp[i-low ]; 
	}
};
void mergesort(std::vector<int>& k, int  low , int high) {
	int mid = (low + high) / 2; 
	if (low >= high) { return;  }
	
	mergesort(k, low ,mid);
	mergesort(k,  mid+1 , high);
	merge(k, low, mid, high); 

	
}
// Time complexity best - O(log2n) , worst case = O(N*log2N)
// Space complexity -> worst case = O(N) 
 
