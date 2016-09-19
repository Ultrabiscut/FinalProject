#include <iostream>
#include <iomanip>
#include <string>
#include "windows.h"
#include "time.h"
using namespace std;

// FinalProject
// Tyler Timmins
// ITSE 2331 2001
// This program allows the user to enter the amount of players
// and play a 5 round bowling game that determins the winner.

//make a struct called bowling
struct Bowling
{
	//some member variables
	string m_playerName;
	int m_score1 = 0;
	int m_score2 = 0;
	int m_score3 = 0;
	int m_score4 = 0;
	int m_score5 = 0;
	int m_Total = 0;
	int m_round = 1;
	string m_welcomeMsg;

};

//function prototypes
void welcomeMsg();
void playerNames(Bowling *pArray, int iAmount);
void bowlRound1(Bowling *pArray, int iAmount);
void bowlRound2(Bowling *pArray, int iAmount);
void bowlRound3(Bowling *pArray, int iAmount);
void bowlRound4(Bowling *pArray, int iAmount);
void bowlRound5(Bowling *pArray, int iAmount);
void displayScore(Bowling *pArray, int iAmount);
void winner(Bowling *pArray, int iAmount);

int main()
{
	//set up some variables
	int iNum;
	Bowling *playerArray; //pointer for players array
	
	//call on welcomeMsg function
	welcomeMsg();
	
	//get some input
	cout << "Enter how many players: ";
	cin >> iNum;
	cout << endl;

	//create a dynamic array of type bowling
	playerArray = new Bowling[iNum];

	//call on players function
	playerNames(playerArray, iNum);

	cout << "Start round 1" << endl;
		//Round 1
		bowlRound1(playerArray, iNum);
		displayScore(playerArray, iNum);
		cout << endl;

	cout << "Start round 2" << endl;
		//Round 2
		bowlRound2(playerArray, iNum);
		displayScore(playerArray, iNum);
		cout << endl;

		cout << "Start round 3" << endl;
		//Round 3
		bowlRound3(playerArray, iNum);
		displayScore(playerArray, iNum);
		cout << endl;

	cout << "Start round 4" << endl;
		//Round 4
		bowlRound4(playerArray, iNum);
		displayScore(playerArray, iNum);
		cout << endl;

	cout << "Start final round" << endl;
		//Round 5
		bowlRound5(playerArray, iNum);
		displayScore(playerArray, iNum);
		cout << endl;

	//call on winner function
	winner(playerArray, iNum);

	system("pause");

	//Free up memory
	delete [] playerArray;
	playerArray = NULL;

	return 0;
}

//welcomeMsg fucntion
void welcomeMsg()
{
	cout << " WELCOME TO FUN TIME BOWLING!!!" << endl;
	cout << "--------------------------------" << endl;
	cout << "By: Tyler Timmins" << endl << endl;
}


//name function
void playerNames(Bowling *pArray, int iAmount)
{
	//loop to set names for players
	for (int x = 0; x < iAmount; x++)
	{
		cout << "Enter player " << x + 1 << " name: ";
		cin >> pArray[x].m_playerName;
	}
}

//displayScore function
void displayScore(Bowling *pArray, int iAmount)
{
	//set up header
	cout << "	Round 1 \t"
		<< "Round 2 \t"
		<< "Round 3 \t"
		<< "Round 4 \t"
		<< "Round 5 \n";
	cout << "--------------------------------------------------------------------------------\n";

	// loop through array for round 1
	for (int x = 0; x < iAmount; x++)		
	{
		cout << left << pArray[x].m_playerName <<
		"\t" << right << setw(5) << pArray[x].m_score1 << 
		"\t" << setw(12) << pArray[x].m_score2 << 
		"\t" << setw(12) << pArray[x].m_score3 <<
		"\t" << setw(12) << pArray[x].m_score4 <<
		"\t" << setw(12) << pArray[x].m_score5 << "\n";
		
	}
}

//bowl function round 1
void bowlRound1(Bowling *pArray, int iAmount)
{
	//delcare variables
	bool bCheck = true;
	bool pTurn = true;

	//seed the random number generator
	srand(time(NULL));

	//loop through array to set random number as player score
	for (int x = 0; x < iAmount; x++)
	{
		do
		{
			if (pTurn == true)
			{
					cout << pArray[x].m_playerName << " Press any key to bowl!" << endl;
					system("pause");

					//round 1
					if (pArray[x].m_round == 1)
					{
						//bowl for round 1
						//store in score 1
						(pArray[x]).m_score1 = (rand() % 10 + 1);

						cout << endl;
						//display the number of pins hit
						cout << "You Hit " << pArray[x].m_score1 << " Pins!" << endl;

						//pause
						Sleep(5000);
						//clear system
						system("cls");

						//increment to the next round
						pArray[x].m_round++;

						bCheck = false;
					}

				}// end player 
			
		} while (bCheck);
	}
}

void bowlRound2(Bowling *pArray, int iAmount)
{
	//delcare variables
	bool bCheck = true;
	bool pTurn = true;

	//seed the random number generator
	srand(time(NULL));

	//loop through array to set random number as player score
	for (int x = 0; x < iAmount; x++)
	{
		do
		{
			if (pTurn == true)
			{
				cout << pArray[x].m_playerName << " Press any key to bowl!" << endl;
				system("pause");

				//round 1
				if (pArray[x].m_round == 2)
				{
					//bowl for round 2
					//store in score 2
					(pArray[x]).m_score2 = (rand() % 10 + 1);

					cout << endl;
					//display the number of pins hit
					cout << "You Hit " << pArray[x].m_score2 << " Pins!" << endl;

					//pause
					Sleep(5000);
					//clear system
					system("cls");

					//increment to the next round
					pArray[x].m_round++;

					bCheck = false;
				}

			}// end player 

		} while (bCheck);
	}
}

void bowlRound3(Bowling *pArray, int iAmount)
{
	//delcare variables
	bool bCheck = true;
	bool pTurn = true;

	//seed the random number generator
	srand(time(NULL));

	//loop through array to set random number as player score
	for (int x = 0; x < iAmount; x++)
	{
		do
		{
			if (pTurn == true)
			{
				cout << pArray[x].m_playerName << " Press any key to bowl!" << endl;
				system("pause");

				//round 3
				if (pArray[x].m_round == 3)
				{
					//bowl for round 3
					//store in score 3
					(pArray[x]).m_score3 = (rand() % 10 + 1);

					cout << endl;
					//display the number of pins hit
					cout << "You Hit " << pArray[x].m_score2 << " Pins!" << endl;

					//pause
					Sleep(5000);
					//clear system
					system("cls");

					//increment to the next round
					pArray[x].m_round++;

					bCheck = false;
				}

			}// end player 

		} while (bCheck);
	}
}

//bowl function round 4
void bowlRound4(Bowling *pArray, int iAmount)
{
	//delcare variables
	bool bCheck = true;
	bool pTurn = true;

	//seed the random number generator
	srand(time(NULL));

	//loop through array to set random number as player score
	for (int x = 0; x < iAmount; x++)
	{
		do
		{
			if (pTurn == true)
			{
				cout << pArray[x].m_playerName << " Press any key to bowl!" << endl;
				system("pause");

				//round 1
				if (pArray[x].m_round == 4)
				{
					//bowl for round 1
					//store in score 1
					(pArray[x]).m_score4 = (rand() % 10 + 1);

					cout << endl;
					//display the number of pins hit
					cout << "You Hit " << pArray[x].m_score4 << " Pins!" << endl;

					//pause
					Sleep(5000);
					//clear system
					system("cls");

					//increment to the next round
					pArray[x].m_round++;

					bCheck = false;
				}

			}// end player 

		} while (bCheck);
	}
}

//bowl function round 1
void bowlRound5(Bowling *pArray, int iAmount)
{
	//delcare variables
	bool bCheck = true;
	bool pTurn = true;

	//seed the random number generator
	srand(time(NULL));

	//loop through array to set random number as player score
	for (int x = 0; x < iAmount; x++)
	{
		do
		{
			if (pTurn == true)
			{
				cout << pArray[x].m_playerName << " Press any key to bowl!" << endl;
				system("pause");

				//round 1
				if (pArray[x].m_round == 5)
				{
					//bowl for round 1
					//store in score 1
					(pArray[x]).m_score5 = (rand() % 10 + 1);

					cout << endl;
					//display the number of pins hit
					cout << "You Hit " << pArray[x].m_score5 << " Pins!" << endl;

					//pause
					Sleep(5000);
					//clear system
					system("cls");

					//increment to the next round
					pArray[x].m_round++;

					bCheck = false;
				}

			}// end player 

		} while (bCheck);
	}
}

void winner(Bowling *pArray, int iAmount)
{
	//declare variables
	int iTemp;
	int iSum = 0;

	//loop through and add up scores and determine who won
	for (int x = 0; x < iAmount; x++)
	{
		iSum += pArray[x].m_score1 + pArray[x].m_score2 + pArray[x].m_score3 + pArray[x].m_score4 + pArray[x].m_score5;
		pArray[x].m_Total = iSum;

		//determine who is bigger
		if (pArray[x].m_Total < pArray[x + 1].m_Total);
		{
			iTemp = pArray[x].m_Total;
			pArray[x].m_Total = pArray[x + 1].m_Total;
			pArray[x + 1].m_Total = iTemp;

			cout << pArray[x].m_playerName << " Wins!" << endl;
		}
		
	}

}