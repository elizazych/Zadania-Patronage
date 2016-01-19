// Zad1_CV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include "Person.h"
#include "Player.h"
#include <string>

using namespace std;


int main()
{
	//Gra - rzut dwoma kostkami
	
	string _player1, _player2;
	cout << "Player one. Write your name: ";
	cin >> _player1;
	cout << endl;
	cout << "Player two. Write your name: ";
	cin >> _player2;
	cout << endl << endl;
	Person *_player;
	_player = new Player(_player1, _player2);
	_player->game();
	_player->game1();


    return 0;
}

