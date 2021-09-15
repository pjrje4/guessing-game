#include <iostream>
/*
 *Justin Iness
 *Guessing Game
 *Jason Galbraith
 *C++ Programming
 * */

using namespace std;

int main() //main loop
{
	int input = 0; //initialize variables
	string painput;
	int attempts = 0;
	bool playagain = true;
	while (playagain) { //main game loop
		attempts = 0;
		srand(time(NULL));
		int randnum = rand() % 101;
		bool correct = false;
		cout << "A random number from 1-100 has been selected.  Please guess the number in as little guesses as possible!";
		cout << randnum << endl;
		while (not correct) { //guessing loop
			cout << "What is your guess:  ";
			cin >> input;
			attempts++;
			if (input > randnum) { //guess is higher then random num
				cout << "Lower" << endl;
			}
			else if (input < randnum) {//guess lower then random num
       		 	        cout << "Higher" << endl;
		        }
			else if (input == randnum) {//guessed the right number
				correct = true;
				cout << "Congrats! You guessed the number in "<< attempts << " tries!" << endl;
			}
		}
		//play again?
		cout << "Would you like to play again?" << endl;
		cin >> painput;
		if (painput == "n") {
			playagain = false;
		}
	}
	return 0;
}
