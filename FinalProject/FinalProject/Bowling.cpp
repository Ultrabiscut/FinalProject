#include "Bowling.h"
#include <iostream>
#include "time.h"
using namespace std;

//define the default constructor
Bowling::Bowling()
{
	//intilize them to have nothing in
	//the member variables
	m_players = 0;
	m_playerName = " ";
	m_score = 0;
}

//define the destructor
Bowling::Bowling()
{

}

//define the setWelcomeMsg
void Bowling::setWelcomeMsg(string welcomeMsg)
{
	m_welcomeMsg = welcomeMsg;
}

//define the setPlayers
void Bowling::setPlayers(Bowling *vArray, int iAmount)
{

	//loop for player and player names
	for (int x = 0; x < iAmount; x++)
	{	//ask for input
		cout << "Enter Player " << x + 1 << " : ";
		cin >> vArray[x].m_playerName;
	}

}