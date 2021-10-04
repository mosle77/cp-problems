#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//href:https://codeforces.com/contest/16/problem/B

int main() {
	int bagCapacity, m, arr[20][20], count = 0, countMbox = 0, countm = 0;

	cin >> bagCapacity >> m;

	for (int i = 0;i < m;i++)
	{
		cin >> arr[i][0] >> arr[i][1];
		countMbox += arr[i][0];                              // inputs 
		countm += arr[i][0] * arr[i][1];
	}


	if (countMbox <= bagCapacity)
	{
		cout << countm;                                      //  Special case                        
		return 0;
	}



	while (bagCapacity)
	{
		int x = 0;
		for (int i = 0;i < m;i++)
			if (arr[x][1] < arr[i][1])                         // Determine matchboxes that contain the largest matches 
				x = i;



		if (bagCapacity <= arr[x][0])
		{
			count += bagCapacity*arr[x][1];
			cout << count;
			return 0;
		}
		else                                                    // count number of matches can steal 
		{
			count += arr[x][0] * arr[x][1];
			bagCapacity = bagCapacity - arr[x][0];
			arr[x][1] = 0;

		}

	}


	return 0;
}
