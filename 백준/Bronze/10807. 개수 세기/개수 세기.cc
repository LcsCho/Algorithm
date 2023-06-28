#include <bits/stdc++.h>
using namespace std;

int main() {

	int size;
	int findNum;
	int count = 0;
	cin >> size;
	int arr[size];
	
	for (int i = 0; i < size; i++) 
		cin >> arr[i];
	
	cin >> findNum;
	
	for (int i = 0; i < size; i++)
		if (findNum == arr[i]) count++;
	
	cout << count << "\n";
	return 0;
}