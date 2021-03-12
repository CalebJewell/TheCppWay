#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

const int ARRAYSIZE = 8; 

//int find_min(int* values, int size);
int find_min(vector<int>values, int size) {
	
	int min = 0;
	
	for(int i=0;i<values.size();i++) {
		if(values[i] <= min) {
			min = values[i];
		}
	}

	return min;
}


int main() {
	int value;
	vector<int> num;// = { 1,2,4,5,-22,10,100,2};
//	vector<int> * pnum = num;

	cout << "Caleb Jewell" << endl;

	cout << "Enter your values and press the letter q to finish:" << endl;
	int i =0;	
	while (i < ARRAYSIZE) {
		cin >> value; // allows the user to input a value
		num.push_back(value);
		i++;
	}
	
	cout << "Your vector: ";
	for(int nums: num){
		printf("%d ", nums);
	}
	

	cout << "\nThe min value in your vector is " << find_min(num, num.size()) << endl; // passes the array and the array size into the function

	return 0;
}
