//***********************/
/* Author: Caleb Jewell */
/* Date: 9/21/18	    */
/* COS 221 - Homework 1 */
/************************/

#include<string>
#include<iostream>
using namespace std;


bool isPalindrome(const string& s); // 
bool isPalindrome(const string& s)
{
	// created temp variable so I can modify the const varible s 
	string temp = s;
	for (int i = 0, j = (s.size() - 1); i < j; i++, j--)
	{
		// this if statement compares the two characters s[i] and s[j]
		if (tolower(temp[i]) != tolower(temp[j])) 
		{
			return false;
		}
	}
	return true;

}


int main(int argc, char *argv[])
{
	cout << "Caleb Jewell" << endl;
	cout << "Enter a palinedrome:" << endl;
	string str;
	
	// had to use getline because we had to get a whole line not just a single word, cin stops after a space ('  ')
	getline(cin, str); 
	
	// this while loop gives the user the ability to enter another string after entering one initially and able to quit pressing the 'q'
	while (str != "q")
	{																
		if (isPalindrome(str))		// evaluating what the user enter for the string and passing it into our function 
		{
			cout << "Is a palindrome" << endl;
		}

		else 
		{
			cout << "Is not a palinedrome" << endl;
		}
 
		//prompts user to enter another string or quit
		cout << "Press q to quit or enter another string:"<< endl;

		// this allows the user to enter another string unless the user presses "q" to quit  
		getline(cin, str);
	}
	return 0;
}
