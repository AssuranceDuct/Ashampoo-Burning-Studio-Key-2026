#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility{
public:
static int sum(const std::vector<int>& nums){
return std::accumulate(nums.begin(), nums.end(), 0);
}
static double average(const std::vector<int>& nums){
if(nums.empty()) return 0;
return static_cast<double>(sum(nums)) / nums.size();
}
static std::vector<int> sortAsc(std::vector<int> nums){
std::sort(nums.begin(), nums.end());
return nums;
}
static std::vector<int> sortDesc(std::vector<int> nums){
std::sort(nums.rbegin(), nums.rend());
return nums;
}
static int maxElement(const std::vector<int>& nums){
return *std::max_element(nums.begin(), nums.end());
}
static int minElement(const std::vector<int>& nums){
return *std::min_element(nums.begin(), nums.end());
}
static void printVector(const std::vector<int>& nums){
for(auto num : nums){
std::cout << num << ' ';
}
std::cout << std::endl;
}
};
int main(){
Utility util;
std::vector<int> numbers = {5, 3, 8, 1, 4};
util.printVector(numbers);
std::cout << "Sum: " << util.sum(numbers) << std::endl;
std::cout << "Average: " << util.average(numbers) << std::endl;
std::cout << "Max: " << util.maxElement(numbers) << std::endl;
std::cout << "Min: " << util.minElement(numbers) << std::endl;
std::vector<int> sortedAsc = util.sortAsc(numbers);
util.printVector(sortedAsc);
std::vector<int> sortedDesc = util.sortDesc(numbers);
util.printVector(sortedDesc);
return 0;
}
