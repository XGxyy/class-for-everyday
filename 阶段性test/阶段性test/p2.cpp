#include <iostream>
#include<vector>

using namespace std;

const int Result(vector<int> nums, int size){
	int result = nums[0];
	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		// 计算到num[i]的子数组的最大和 
		sum += nums[i];
		if (sum > result)
			result = sum;
		if (sum < 0)
			sum = 0;
	}
	return result;
}

int main1() {
	int size; 
	while (cin >> size){

		vector<int> nums(size);
		for (size_t i = 0; i < size; ++i){
			cin >> nums[i];
		}
		//int result = nums[0];
		//int  sum = 0;
		//for (int i = 0; i < nums.size(); i++) {
		//	// 计算到num[i]的子数组的最大和 
		//	sum += nums[i];
		//	if (sum > result)
		//		result = sum;
		//	if (sum < 0)
		//		sum = 0;
		//}
		cout << Result(nums, size) << endl;
	}
	return 0; 
}
