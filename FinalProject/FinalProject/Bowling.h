#ifndef _BOWLING_
#define _BOWLING_

#include <string>
#include <iostream>
using namespace std;

class Bowling
{
private:
	//some private members
	int m_players;
	string m_playerName;
	int m_score;
	string m_welcomeMsg;

public:
	//some public functions
	Bowling();
	~Bowling();

	//MUTATOR's
	void setWelcomeMsg(string welcomeMsg);
	void setPlayers(Bowling *myArray, int iAmount);
	void displayScore();

	//ACCESSOR'S
	string getWelcomeMsg();
	int getPlayers();
	int playerBowl();

};


#endif