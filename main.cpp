#include <iostream>
#include <vector>

using namespace std;

class SolutionTwentyFive{
public:
	int search(vector<int>& nums, int target){
		int c=-1;
		for(const auto& it: nums){
			c++;
			if(it==target) return c;
		}
		return -1;
	}
};

int main(){

	cout<<"i solved this exercise today!"<<endl;
	cout<<"just two exercise because i work, so"<<endl;
	cout<<"at least i try to remember solved just two"<<endl;

	return 0;
}