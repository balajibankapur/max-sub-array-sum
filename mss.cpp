#include <iostream>

using namespace std;

int maxSubArraySum(int *inputArray, int nSize){

	int sum = 0;
	int ans = 0;

	for(int iSumIndex = 0; iSumIndex < nSize; iSumIndex++){

		sum += inputArray[iSumIndex];

		if(sum < 0){
			sum = 0;
		}

		if(sum > ans){
			ans = sum;	
		} 
	}

	return ans;
}

int main()
{
	int inputArray[] = { 0, 4 ,5 ,-9, 4, -8, 5, 6, -7, -9, 13, -1, 11 };
	
	cout << maxSubArraySum(inputArray, sizeof(inputArray)/sizeof(int)) << endl;

	return 0;
}