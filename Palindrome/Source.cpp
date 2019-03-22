//Palindrome Game Coding
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int choice, score, totalscore;
	std::string ans1a("True");
	std::string ans1b("true");

	std::string ans2a("False");
	std::string ans2b("false");

	std::string ans3a("Null");
	std::string ans3b("null");

	string answer, word;
	char replay;

	score = 0;
	totalscore = 0;
	
	//These lines are the introduction of the game
	cout << "Welcome to Palindrome Game\n";
	cout << "You will be showed the list of 9 word.\n";
	cout << "You must choose one word from the list.\n";
	cout << "You need to enter True if the word is Palindrome.\n";
	cout << "Or you need to enter False if the word is not Palindrome.\n";
	cout << "If the word begins with a vowel, you have to enter Null. \n";
	cout << "Note: Please ignore all special characters when identify the Palindrome word. \n";
	cout << " \n";
	cout << " \n";
	
	//These lines below use to open file name: score.txt to load the previous point to total score
	//In order for these lines work, the  file score.txt had to pre-create and save in the same folder of source code.

	//Open the file to read and write into the same file
	fstream scoreFile("score.txt", ios::in | ios::out | ios::app);
	int number;
	
	//Testing if file open, then load the previous score to totalscore.
		if (scoreFile)
	{
		scoreFile >> number;
		totalscore = number;

		cout << "You previous score is: " << totalscore << endl;
	}
	else
		cout << "Error open the file";
	//Close the file
	scoreFile.close();
	//Start of the game
	do
	{	//List 9 words
		cout << "Please select a word below: " << endl;
		cout << "1 - kayak" << endl;
		cout << "2 - mom$" << endl;
		cout << "3 - outcome" << endl;
		cout << "4 - irori" << endl;
		cout << "5 - racecar$$ " << endl;
		cout << "6 - Fan" << endl;
		cout << "7- heh" << endl;
		cout << "8- ^dad^" << endl;
		cout << "9- fatal" << endl;
		cout << "Enter your choice from 1 to 9: ";
		cin >> choice;
		
		//Begin to selection True, False or Null
		switch (choice)
		{
		case 1:
			cout << "You choose the word: kayak." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans1a.compare(answer) == 0 || ans1b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{	
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
		break;

		case 2:
			cout << "You choose the word: mom." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans1a.compare(answer) == 0 || ans1b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 3:
			cout << "You choose the word: outcome." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans2a.compare(answer) == 0 || ans2b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 4:
			cout << "You choose the word: irori." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans3a.compare(answer) == 0 || ans3b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You you didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 5:
			cout << "You choose the word: racecar." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans1a.compare(answer) == 0 || ans1b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 6:
			cout << "You choose the word: Fan." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans2a.compare(answer) == 0 || ans2b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 7:
			cout << "You choose the word: heh." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans1a.compare(answer) == 0 || ans1b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 8:
			cout << "You choose the word: dad." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans1a.compare(answer) == 0 || ans1b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		case 9:
			cout << "You choose the word: fatal." << endl;
			cout << "Is this word a Palindrome?" << endl;
			cout << "True,False or Null: ";
			cin >> answer;
			if (ans2a.compare(answer) == 0 || ans2b.compare(answer) == 0)
			{
				cout << "Congratulation, You are correct. \n";
				cout << "You got 10 point." << endl;
				score = score + 10;
			}
			else
			{
				cout << "Sorry, You are incorrect. \n";
				cout << "You didn't get point." << endl;
				score = score + 0;
			}
			break;
		default:
			cout << "You only can choose from 1 to 9." << endl;
			break;
		}
		//Display the total score after each selection
		cout << "Your score for today is: " << score << endl;
		
		//This is the condition to replay the game without restart it
		cout << "Press Y to play again: ";
		cin >> replay;
		cout << " \n";
	} while (replay == 'Y' || replay == 'y');

	//Add score to totalscore, then the total score stores into a file "score.txt" 
	totalscore = totalscore + score;
	scoreFile.clear();
	scoreFile << totalscore;
	cout << "You total score is: " << totalscore << endl;

	//Close the file 
	scoreFile.close();

	system("PAUSE");
	return 0;
}
