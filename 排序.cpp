
#include "pch.h"
#include <iostream>
#include <algorithm> 
#include <numeric> 
using namespace std;

int main()
{
	int n; 
	cin >> n;
	int arr[10];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	std::sort(arr, arr + n, std::greater<int>());
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	int min_val = *min_element(arr, arr + n);
	int max_val = *max_element(arr, arr + n);
	double sum = accumulate(arr, arr + n, 0); 
	double avg_val = sum / n;

	cout << "最小值：" << min_val << endl;
	cout << "最大值：" << max_val << endl;
	cout << "平均值：" << avg_val << endl;
	return 0;
}