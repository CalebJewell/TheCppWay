#include<iostream>
#include<string>

using namespace std;

void displayPermutation(const string& s1, const string& s2) {
	int i;
	//the declaration of these two strings makes the s1 and s2 mutable
	string moveTo = s1;
	string move = s2;

	//once everything in s2 has been moved out it is finished
	if (move.size() == 0) {
		cout << moveTo << endl;
	}
	else {
		for(i = 0; i < move.size(); i++){
			displayPermutation(moveTo+move[i], move.substr(0,i) + move.substr(i+1)); // this adds the two appropriate strings together and moves them
		}
	}


}

void displayPermutation(const string& s) {
	return displayPermutation("", s);
}

 int main() {
	 string x;
	 cout << "Caleb Jewell" << endl; 
	 cout << "Enter a word: " << endl;
	 cin >> x; // allows the user to input a string 
	 displayPermutation(x);

	return 0;
}
