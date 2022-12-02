// S110-Matos-FIFA-2022-App.cpp 
// Author: V. Matos
// Goal: Create, populate, and manage a collection of 
//       structured data items representing FIFA2022 players
// -----------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Global definitions ------------------------------------------
struct Player
{
    string  name;
    string  team;
    int     goals;
    int     assists;
    int     minutes;
};


//Prototypes --------------------------------------------------
void experiment01();
Player getPlayerData();
void showPlayer(Player p);


int main()
{
    experiment01();
}

//User-defined methods ------------------------------------------
void experiment01()
{
    Player p1 = getPlayerData();
    Player p2 = getPlayerData();
    Player p3 = getPlayerData();

    vector<Player> vMVP{ p1, p2, p3 };

    cout << "\nList of Most Valuable Players\n";
    for (int i = 0; i < vMVP.size(); i++)
    {
        showPlayer(vMVP[i]);
    }
}
//---------------------------------------------------------------
Player getPlayerData()
{
    Player p;
    cout << "\nEnter name:    ";
    getline(cin, p.name);
    cout << "Enter Team:    ";
    getline(cin, p.team);
    cout << "Enter goals:   ";
    cin >> p.goals;
    cout << "Enter assists: ";
    cin >> p.assists;
    cout << "Enter minutes: ";
    cin >> p.minutes;

    cin.ignore();   //make sure input buffer is clean
    return p;
}
//---------------------------------------------------------------
void showPlayer(Player p)
{
    cout << "\nName:    " << p.name << endl
        << "Team:    " << p.team << endl
        << "Goals:   " << p.goals << endl
        << "Assists: " << p.assists << endl
        << "Minutes: " << p.minutes << endl;
}




