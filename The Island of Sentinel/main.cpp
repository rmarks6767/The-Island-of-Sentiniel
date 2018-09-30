//River Marks
//The Island of Sentinel (A very deadly island according to CNN)
#include<iostream>
#include<time.h>
#include<string>
#include<Windows.h>
using namespace std;
void splashscreen();
void infoscreen();
void instructions();
void leavegame();
void camponbeach();
void mainhut(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
void death(int day);
int forest(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int inventory(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int crafting(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int congratulations(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int sleep(int day);
int stonemineint(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int findatemple(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int exploretheforest(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int healthstation(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int attackedbyarandomanimal(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int farsideoftheisland(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int thepit(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int cave(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int stonemine(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked);
int main()
{
	 //system("color f0");
	//cout << "------------------20------------------40------------------60-----------------79\n";
	splashscreen();
	system("pause");
	return 0;
}
void death(int day)
{
	system("CLS");
	cout << "Death has consumed your soul.  Hope you had fun!\n";
	cout << "You survived " << day << "day(s)\n";
	Sleep(2000);
	leavegame();
}
int sleep(int day)
{
	return day=(day+1);
}
void splashscreen()
{
	char choice;
	system("CLS");
	cout << "+--------The Island of Sentinel----------+\n";
	cout << "|            By: River Marks             |\n";
	cout << "|                                        |\n";
	cout << "|           Press 'S' to Begin           |\n";
	cout << "|       Press 'I' for instructions       |\n";
	cout << "|           Press 'E' to Leave           |\n";
	cout << "|________________________________________|\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'S':
		infoscreen();
		break;
	case 'I':
		instructions();
		break;
	case 'E':
		leavegame();
		break;
	default:
		cout << "Enter one of the provided letters.\n";
		Sleep(2000);
		splashscreen();
	}
}
void instructions()
{
	char choice;
	system("CLS");
	cout << "Goback-'G'\n";
	cout << "---------------------INSTRUCTIONS:--------------------\n";
	cout << "Welcome to this game.  Your health will start at 100. \n";
	cout << "If at any time your health reaches 0 the game is over.\n";
	cout << "To escape you must gather materials and items.\n";    
	cout << "Good Luck and have fun!\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'G':
		splashscreen();
		break;
	default:
		cout << "Enter one of the provided letters.\n";
		Sleep(2000);
		instructions();
	}
}
int crafting(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	char choice;
	system("CLS");
	string item1="Unavailable",item2="Health station",item3="Unavailable",item4="Better Hut",item5="Unavailable",item6="Raft to escape";
	if(wood>4000 && pelts>4000 && usableitems==240 && stone>4500)
	{
		item5="E-Escape Raft";
		item6="Available";
	}
	if(stone>1500 && wood>750 && usableitems==240)
	{
		item1="H-Health Station";
		item2="Available";
	}
	if(wood>500 && stone>500 && pelts>500)
	{
		item3="U-House Upgrade";
		item4="Available";
	}
	cout << "Go Back-G\n\n";
	cout << "Wood amount: " << wood << endl;
	cout << "Stone amount: " << stone << endl;
	cout << "Pelts amount: " << pelts << endl << endl;
	cout << "Press letter if unlocked\n";
	cout << "Things you can make:         Things you can't make:  \n";
	cout << item1 << "                         " << item2 << endl;
	cout << item3 << "                         " << item4 << endl;
	cout << item5 << "                         " << item6 << endl;
	cout << "Things needed for upgrades: \n";
	cout << "House Upgrade:      Health Station:      Escape the Island: \n";
	cout << "-500 wood           -1500 stone          -4000 wood\n";
	cout << "-500 stone          -750 wood            -4000 pelts\n";
	cout << "-500 pelts          -All 5 items         -4500 stone\n";
	cout << "                                         -All 5 items\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'U':
		if(wood>500 && stone>500 && pelts>500)
		{
		itemunlocked=itemunlocked+3;
		wood=wood-500;
		stone=stone-500;
		pelts=pelts-500;
		cout << "Purchase successful!\n";
		Sleep(2000);
		crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		else
		{
			cout << "You don't have those materials!\n";
			Sleep(1000);
			crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		break;
	case 'H':
		if(stone>1500 && wood>750 && usableitems==240)
		{
		itemunlocked=itemunlocked+1;
		minefound=10;
		wood=wood-750;
		stone=stone-1500;
		cout << "Purchase successful!\n";
		Sleep(2000);
		crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		else
		{
			cout << "You don't have those materials!\n";
			Sleep(1000);
			crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}

		break;
	case 'E':
		if(wood>2000 && pelts>2000 && usableitems==240 && stone>4000)
		{
			congratulations(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		else
		{
			cout << "You don't have those materials!\n";
			crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		break;
	case 'G':
		inventory(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	default:
		cout << "Enter a valid response\n";
		Sleep(1000);
		crafting(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		
	}

	return 0;
}
int inventory(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	char choice;
	string item1="",item2="", item3="", item4="", item5="";
	if (usableitems==1)
	{
		item1="Sword";
		item2="";
		item3="";
		item4="";
		item5="";
	}
	if (usableitems==27)
	{
		item1="";
		item2="Pickaxe";
		item3="";
		item4="";
		item5="";
	}
	if (usableitems==48)
	{
		item1="";
		item2="";
		item3="Rope";
		item4="";
		item5="";
	}
	if (usableitems==63)
	{
		item1="";
		item2="";
		item3="";
		item4="Cloth";
		item5="";
	}
	if (usableitems==101)
	{
		item1="";
		item2="";
		item3="";
		item4="";
		item5="Horn";
	}
	if (usableitems==28)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="";
		item4="";
		item5="";
	}
	if (usableitems==49)
	{
		item1="Sword";
		item2="Rope";
		item3="";
		item4="";
		item5="";
	}
	if (usableitems==64)
	{
		item1="Sword";
		item2="";
		item3="";
		item4="Cloth";
		item5="";
	}
	if (usableitems==102)
	{
		item1="Sword";
		item2="";
		item3="";
		item4="";
		item5="Horn";
	}
	if (usableitems==75)
	{
		item1="";
		item2="Pickaxe";
		item3="Rope";
		item4="";
		item5="";
	}
	if (usableitems==90)
	{
		item1="";
		item2="Pickaxe";
		item3="";
		item4="Cloth";
		item5="";
	}
	if (usableitems==128)
	{
		item1="";
		item2="Pickaxe";
		item3="";
		item4="";
		item5="Horn";
	}
	if (usableitems==111)
	{
		item1="";
		item2="";
		item3="Rope";
		item4="Cloth";
		item5="";
	}
	if (usableitems==149)
	{
		item1="";
		item2="";
		item3="Rope";
		item4="";
		item5="Horn";
	}
	if (usableitems==164)
	{
		item1="";
		item2="";
		item3="";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==76)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="Rope";
		item4="";
		item5="";
	}
	if (usableitems==91)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="";
		item4="Cloth";
		item5="";
	}
	if (usableitems==129)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="";
		item4="";
		item5="Horn";
	}
	if (usableitems==112)
	{
		item1="Sword";
		item2="";
		item3="Rope";
		item4="Cloth";
		item5="";
	}
	if (usableitems==150)
	{
		item1="Sword";
		item2="";
		item3="Rope";
		item4="";
		item5="Horn";
	}
	if (usableitems==165)
	{
		item1="Sword";
		item2="";
		item3="";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==138)
	{
		item1="";
		item2="Pickaxe";
		item3="Rope";
		item4="Cloth";
		item5="";
	}
	if (usableitems==176)
	{
		item1="";
		item2="Pickaxe";
		item3="Rope";
		item4="";
		item5="Horn";
	}
	if (usableitems==191)
	{
		item1="";
		item2="Pickaxe";
		item3="";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==212)
	{
		item1="";
		item2="";
		item3="Rope";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==139)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="Rope";
		item4="Cloth";
		item5="";
	}
	if (usableitems==177)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="Rope";
		item4="";
		item5="Horn";
	}
	if (usableitems==213)
	{
		item1="Sword";
		item2="";
		item3="Rope";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==192)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==239)
	{
		item1="";
		item2="Pickaxe";
		item3="Rope";
		item4="Cloth";
		item5="Horn";
	}
	if (usableitems==240)
	{
		item1="Sword";
		item2="Pickaxe";
		item3="Rope";
		item4="Cloth";
		item5="Horn";
	}
	cout << "Go Back-G\n\n";
	cout << "Current Inventory:          Current Usable Items:\n\n";
	cout << "Wood--total: " << wood   << "           " << item1 << endl;
	cout << "Stone-total: " << stone  << "           " << item2 << endl;
	cout << "Pelts-total: " << pelts  << "           " << item3 << endl;
	cout << "                            " << item4 << endl;
	cout << "                            " << item5 << endl;
	cout << "M-Make something\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'G':
		mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		break;
	case 'M':
		crafting(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		break;
	default:
		cout << "Enter one of the letters above\n";
		Sleep(1000);
		inventory(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
	}
	return 0;
}
void leavegame()
{
	system("CLS");
	cout << "Thanks for playing!\n";
	Sleep(2000);
	exit(1);
}
void infoscreen()
{
	//system("color 0");
	system("CLS");
	cout << "\tYour ship has crashed off of the coast of a desert island.\n";
	Sleep(4000);
	cout << "All of your crew members died, you are alone.  The only things\n";
	Sleep(4000);
	cout << "you have are one match and an axe.  You must build shelter quickly\n";
	Sleep(4000);
	cout << "before you are killed by the elements.  Your current location is on\n";
	Sleep(4000);
	cout << "a beach on the far east side of the island.  Welcome to Sentinel Island.\n";
	Sleep(10000);
	camponbeach();
}
void camponbeach()
{
	int itemunlocked=0;
	int pelts=0;
	int minefound=0;
	int day=0;
	int health=100;
	int wood=0;
	int stone=0;
	int thingsfound=0;
	int usableitems=0;
	string name;
	char choice;
	system("CLS");
	cout << "What's your name?\n";
	cin >> name;
	system("CLS");
	cout << name << ", your first night is very successful. You have a fire\n";
	cout << "and a small shelter built. You should get to sleep...\n";
	cout << "Press 'S' to sleep.\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'S':
		system("CLS");
		cout << "Sleep overwhelms you...\n";
		Sleep(10000);
		mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		break;
	default:
		cout << "Enter one of the provided letters.\n";
		Sleep(2000);
		camponbeach();
	}
	
}
void mainhut(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	int morehealth=10;
	string housename="Hut";
	if (itemunlocked==3 || itemunlocked==4)
	{
		housename="Mansion";
		morehealth=20;
	}

	char choice;
	system("CLS");
	cout << name << "'s " << housename << " | Num. of Days been here: " << day << endl;
	cout << "Current health: " << health << ".\n\n"; 
	cout << "G--Go to the forest to get wood or explore\n";
	cout << "T--Go to Inventory/make something\n";
	cout << "S--Sleep for another day and gain back " << morehealth << " health\n";
	if(itemunlocked==1 || itemunlocked==4)
	{
		cout << "H--Health Station\n";
	}
	cout << "O--Start over\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'G':
		forest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	case 'T':
		inventory(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	case 'S':
		day=sleep(day);
		system("CLS");
		cout << "You Sleep\n";
		Sleep(4000);
		health=health+morehealth;
		mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		break;
	case 'O':
		wood=0, stone=0, thingsfound=0, usableitems=0;
		splashscreen();
		break;
	case 'H':
		if(thingsfound==1 || thingsfound==4)
		{
		healthstation(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		}
		else
		{
			cout << "You haven't unlocked this yet!\n";
			Sleep(2000);
			mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		}
	default:
		cout << "Enter one of the provided letters.\n";
		Sleep(2000);
		mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
	}
}
int forest(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	char choice;
	int woodamount;
	system("CLS");
	cout << "Go back to hut-'G'\n\n";
	cout << "Current wood count: " << wood << ".\n";
	cout << "C--To Chop Wood\n";
	if (minefound>=1)
	{
		cout << "Current stone count: " << stone << ".\n";
		cout << "S--To mine stone\n";
	}
	if (minefound>=2)
	{
		cout << "Current pelt count: " << pelts << ".\n";
		cout << "H--To Hunt animals\n";
	}
	
	cout << "E--To Explore the forest\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'C':
		cout << "You chop wood.\n";
		for (int i=0; i<3; i++)
		{
			cout << "Chop, ";
			Sleep(1000);
		}
		srand(time(NULL));
		woodamount = rand() % 501;
		if (woodamount != 0)
		{
			cout << "You got " << woodamount << " wood!\n";
			wood=wood+woodamount;
			Sleep(2000);
			forest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		if (woodamount==0)
		{
			cout << "You got 1 wood!\n";
			wood=wood+1;
			Sleep(2000);
			forest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		break;
	case 'E':
		exploretheforest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	case 'G':
		mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	case 'S':
		stonemine(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	case 'H':
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	default:
		cout << "Enter one of the given letters\n";
		Sleep(1000);
		forest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	return 0;
}
int exploretheforest(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	int stoneamount;
	char choice;
	thingsfound=thingsfound+1;
	if (thingsfound==1)
	{
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==2)  // You find a mine
	{
		minefound=1;
		usableitems=usableitems+27;
		cout << "You come across the mine. There is a pickaxe in the front. Would you like to\n";
		cout << "mine?  Press 'Y' to mine.  Press any other key to return to the forest.\n";
		cin >> choice;
		switch(toupper(choice))
		{
		case 'Y':
			srand(time(NULL));
			stoneamount = rand() % 101;
			cout << "You got " << stoneamount << " stone!\n";
			stone=stone+stoneamount;
			Sleep(2000);
			cout << "It gets late, you return home.\n";
			day=day+1;
			Sleep(2000);
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
			break;
		default:
			cout << "You will now be brought back to the forest.\n";
			Sleep(2000);
			forest(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
	}

	if (thingsfound==3) //Attacked by another animal
	{
		minefound=2;
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==4) //Wander for hours
	{
		cout << "You wander for hours, it gets dark and you return home.\n";
			day=day+1;
			Sleep(2000);
			mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==5) //Find a temple
	{
		findatemple(name, day, health, wood, stone, thingsfound, usableitems, minefound,pelts,itemunlocked);
	}
	if (thingsfound==6) //Attacked by another animal
	{
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==7) //Wander to the far side of the island 
	{
		farsideoftheisland(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==8) //Fall in a pit
	{
		thepit(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==9) //Attacked by another animal
	{
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound==10) //Find a cave
	{
		cave(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	if (thingsfound>10)
	{
		srand(time(NULL));
		int random=rand() % 2;
		if(random==1)
		{
		attackedbyarandomanimal(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		if(random==0)
		{
			cout << "You wander for hours, it gets dark and you return home.\n";
			day=day+1;
			Sleep(2000);
			mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
		}
	}

	return 0;

}
int attackedbyarandomanimal(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	char choice;
	int animalhealth=50, animalattack=0, yourhitpoints=8,peltsamount=0;
	if (usableitems==1 || usableitems==28 || usableitems==49 || usableitems==64 || usableitems==102 || usableitems==76 || 
		usableitems==91 || usableitems==129 || usableitems==112 || usableitems==150 || usableitems==165 || usableitems==139 || 
		usableitems==177 || usableitems==213 || usableitems==192 || usableitems==240)
	{
		animalhealth=75;
		yourhitpoints=30;
	}
	srand(time(NULL));
	int animalattacking=rand() % 5;
	string randomanimal;
	if (animalattacking==0) //Honey Badger
	{
		randomanimal="Honey Badger";
	}
	if (animalattacking==1) //Wild Boar
	{
		randomanimal="Wild Boar";
	}
	if (animalattacking==2) //Vulture
	{
		randomanimal="Vulture";
	}
	if (animalattacking==3) //Rabid Squirrel
	{
		randomanimal="Rabid Squirrel";
	}
	if (animalattacking==4) //Tasmanian Devil
	{
		randomanimal="Tasmanian Devil";
	}
	system("CLS");
	cout << "You are walking along when a " << randomanimal << " attacks you!\n";
	Sleep(1000);
	do
	{
		
		srand(time(NULL));
		animalattack=rand() % 5;
		system("CLS");
		cout << "Health: "<< health << "\n";
		cout << randomanimal <<  "'s health: " << animalhealth << "\n\n"; 
		cout << "A--Attack the " << randomanimal << "!\n";
		cin >> choice;
		switch(toupper(choice))
		{
		case 'A':
			animalhealth=animalhealth-yourhitpoints;
			health=health-animalattack;
			break;
		default: 
			cout << "You are being hurt.  Attack!!\n";
			health=health-animalattack;
			Sleep(1000);
			}
		if (health<=0)
		{break;}
	}
	while(animalhealth>=0);
	if (animalhealth<=0)
		{
			day=day+1;
			srand(time(NULL));
			peltsamount=rand() % 501;
			pelts=pelts+peltsamount;
			cout << "You have killed the " << randomanimal << "!\n";
			cout << "You got " << peltsamount << " pelts!\n";
			cout << "You return home with a health of " << health << ".\n";
			Sleep(2000);
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
		if(health<=0)
		{
			day=day+1;
			cout << "The animal killed you!\n";
			Sleep(2000);
			death(day);
		}

	return 0;
}
int findatemple(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	char choice;
	usableitems=usableitems+1;
	cout << "You find a massive temple that looks to be a Mayan temple. There is a giant\n";
	cout << "staircase leading up to the top.  You reach the top and find a sword stuck in\n";
	cout << "the top of the temple.  You take it out and put it on your back. A doorway by\n";
	cout << "the base of the temple starts to open.\n";
	cout << "E--Enter the temple\n";
	cout << "Press any other key to go back to the hut\n";
	cin >> choice;
	switch (toupper(choice))
	{
	case 'E':
			system("CLS");
			day=day+1;
			health=health+20;
			cout << "You enter the temple and find loads of health potions all over the\n";
			cout << "floor.  You drink all of the potions.  You health is now " << health << "!\n";
			cout << "You return home feeling very powerful...\n";
			Sleep(6000);
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	default:
			cout << "You return home\n";
			day=day+1;
			Sleep(2000);
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	return 0;	

}
int farsideoftheisland(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	day=day+1;
	usableitems=usableitems+63;
	cout << "You wander for a while when you reach the far side of the island.  Sitting on\n";
	cout << "the beach is a little raft that is well beyond destroyed.  You take the cloth\n";
	cout << "that was once the sail and put it in your inventory.  You go back to your hut.\n";
	Sleep(6000);
	mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	return 0;
}
int thepit(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	day=day+1;
	usableitems=usableitems+48;
	cout << "You are walking along when all of a sudden you are falling...\n";
	Sleep(2000);
	cout << "...Falling...\n";
	Sleep(2000);
	cout << "...Falling...\n";
	Sleep(2000);
	cout << "...Falling...\n";
	Sleep(2000);
	cout << "You are now stuck in a deep dark pit.  You find a rope and throw it up.\n";
	cout << "It hits a tree and gets lodged.  After getting  out of the hole, you take\n";
	cout << "the rope and head home.\n";
	Sleep(6000);
	mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	return 0;
}
int stonemine(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	char choice;
	int stoneamount;
	system("CLS");
	cout << "You arrive at the mine.  Press Y to mine.  Press any other key to return home.\n";
	cin >> choice;
		switch(toupper(choice))
		{
		case 'Y':
			for (int i=0; i<3; i++)
			{
				cout << "Bang, ";
				Sleep(1000);
			}
			srand(time(NULL));
			stoneamount = rand() % 551;
			cout << "You got " << stoneamount << " stone!\n";
			stone=stone+stoneamount;
			Sleep(2000);
			cout << "It gets late, you return home.\n";
			day=day+1;
			Sleep(2000);
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		default:
			mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		}
	return 0;
}
int cave(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	usableitems=usableitems+101;
	cout << "You are wandering though the forest when you stumble across a cave.  Inside \n";
	cout << "there is a skeleton holding a horn.  You go to take the horn when a man walks\n";
	cout << "out of the shadows and says, 'Who are you?''" << name << ", why?' you ask.\n";
	cout << "Before he says anything he collapses and dies.  You take the horn and run home.\n";
	Sleep(8000);
	mainhut(name,day,health,wood,stone,thingsfound,usableitems,minefound,pelts,itemunlocked);
	return 0;
}
int healthstation(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	char choice;
	system("CLS");
	cout << "Go Back-G\n\n";
	cout << "Health Station:\n";
	cout << "H-Give yourself 10 health\n";
	cin >> choice;
	switch(toupper(choice))
	{
	case 'H':
		for (int i=0; i<3; i++)
		{
			cout << "Glug, ";
			Sleep(1000);
		}
		health=health+10;
		cout << "New health amount: " << health << ".\n";
		Sleep(2000);
		mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	case 'G':
		mainhut(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
		break;
	default:
		cout << "Just Press H is it really that hard?\n";
		Sleep(1000);
		healthstation(name,day,health, wood, stone, thingsfound, usableitems,minefound,pelts,itemunlocked);
	}
	
	return 0;
}
int congratulations(string name, int day, int health, int wood, int stone, int thingsfound, int usableitems,int minefound, int pelts,int itemunlocked)
{
	system("CLS");
	cout << "You escaped the island and headed home...\n";
	cout << "Thanks for playing!\n";
	Sleep(2000);
	exit(1);
}