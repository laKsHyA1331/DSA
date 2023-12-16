//Question statement - Left rotate the array by D places 
#include<algorithm>
#include<iostream>
#include<vector>
// most optimal solution
void leftrotate(std::vector<int> &v, int n, int d) {
	std::reverse(v.begin(), v.end()-(n - d));
	std::reverse(v.begin()+d, v.end() );
	std::reverse(v.begin() , v.end()); 
}
