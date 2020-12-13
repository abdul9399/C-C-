// C++ program to print largest contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max = a[0], curr_max = 0; 

	for (int i = 1; i < size; i++) 
	{ 
		curr_max = curr_max + a[i]; 
		if (max < curr_max) 
			max = curr_max; 

		if (curr_max < 0) 
			curr_max = 0; 
	} 
	return max; 
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int n = sizeof(a)/sizeof(a[0]); 
    printf("%d\n",n);
	int max_sum = maxSubArraySum(a, n); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 
