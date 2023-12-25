// sort an array consisting N elements , each element in the array is either 0,1,2 
// using Dutch National Flag algo (most optimal solution ) 

#include <iostream> 
#include<vector> 
#include<algorithm>
void sortarray(std::vector<int>& v, int n) {
	int low = 0, mid = 0, high = n - 1; 
	while (mid <= high) {
		if (v[mid] == 0) {
			std::swap(v[low], v[mid]);
			low++; 
			mid++;
		}
		else if (v[mid] == 1) {
			mid++;
		}
		else {
			std::swap(v[mid], v[high]);
			high--;
		}
	}
}

int main() {
	std::vector<int> a;
	a = { 1,0,0,0,1,2,0,2,2 };
	int k = 9;
	sortarray(a, k);
	for (int i = 0; i < k; i++)
	{
		std::cout << a[i] << '\n'; 
	}
}
