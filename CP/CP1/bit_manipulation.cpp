#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
	int num, n;
	cin >> num >> n;
	
	num = num | (1 << n); // set the bit at nth position
	cout << num << endl;
	
	num = num & (~(1 << n)); // unset/clear the bit at nth position
	cout << num << endl;
	
	num = num ^ (1 << n); // toglle the bit at nth position
	cout << num << endl;
	
	cout << (num & (1 << n)) << endl; // check if the bit at nth position is set/unset
	
	cout << (num << 1) << endl; // multiply by two
	
	cout << (num >> 1) << endl; // divide by two
	
	return 0; 
} 
