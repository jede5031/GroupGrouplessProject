#include <iostream>
#include <cmath>

using namespace std;

class player
{
	public:
	string NAME;
	int STR, DEX, CON, INT, WIS, CHA;
	int STRMOD, DEXMOD, CONMOD, INTMOD, WISMOD, CHAMOD;
	int HPC, HPT;
	string WEAP;
	int ATK, DEF;
	int XP = 0;
};

void tutorial()
{
	cout << "~We need to learn a few things about you before we send you on your way!";
	cin.ignore();
	cin.ignore();
	cout << "~Specifically, let's learn about your STR, DEX, CON, INT, WIS, and CHA.";
	cin.ignore();
	cout << "~That means your Strength, Dexterity, Constitution, Intelligence, Wisdon and \n   Charisma.";
	cin.ignore();
	cout << "~I really like tomatoes, so let's use a \"fruity\" analogy to help you understand \n   these attributes and what they do for you.";
	cin.ignore();
	cout << "~... Get it? Because a tomato is a fruit? :3";
	cin.ignore();
	cout << "~... ... WELL THEN, HERE WE GO!";
	cin.ignore();
	cout << "~Strength is being able to crush a tomato." << endl;
	cout << "~Dexterity is being able to dodge a tomato."<< endl;
	cout << "~Constitution is being able to eat a bad tomato."<< endl;
	cout << "~Intelligence is knowing a tomato is a fruit. ;)"<< endl;
	cout << "~Wisdon is knowing not to put a tomato in a fruit salad."<< endl;
	cout << "~Charisma is being able to sell a tomato-based fruit salad.";
	cin.ignore();
	cout << "~Finally, every skill has a modifier, which calculates certain things.";
	cin.ignore();
	cout << "~For example, your CON modifier adds HP (hit points) to your total.";
	cin.ignore();
	cout << "~Certain modifiers can even give you bonuses (or deteriments!) on attacks, \n   depending on your modifier and the weapon you're using.";
	cin.ignore();
	cout << "~The modifier is calculated as skill - 10, then divided by 2 and rounded down.";
	cin.ignore();
	cout << "~Does all that make semse? Good! Then here we go! Lets determine your stats!";
}

int main ()
{
	srand (time (NULL) );
	player* your = new player;
	cout << "================================================================================" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ D&D TEST PROGRAM ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "================================================================================" << endl;
	cout << "Press \"Enter\" to Begin";
	cin.ignore();
	cout << "======================" << endl;
	cout << "~Hello, adventurer!" << endl;
	cout << "~My name is Jacob. What's your name? ";
	string name;
	getline(cin, name);
	while (name == "" || name == " ")
	{
		cout << "~Sorry friend, didn't catch that. What was your name? ";
		getline(cin, name);
	}
	your->NAME = name;
	cout << "~Greetings, " << your->NAME << "! Glad to have you here!" << endl;
	cout << "(Press \"Enter\" to Continue)";
	cin.ignore();
	cout << "~Do you need a tutorial before we begin? (Y/N) ";
	
	string tempvar;
	cin >> tempvar;
	while (tempvar != "y" && tempvar != "Y" && tempvar != "n" && tempvar != "N")
	{
		cout << "It doesnt look like you answered (y)es or (n)o properly. Try again!  ";
		cin >> tempvar;
	}
	if (tempvar == "y" || tempvar == "Y")
	{
		tutorial();
	}
	else if (tempvar == "n" || tempvar == "N")
	{
		cout << "~Sounds good. Here we go then!";
		cin.ignore();
	}		
		cin.ignore();
		cout << "~In this world, we roll dice to determine stats.";
		cin.ignore();
		
		cout << "~You roll 3 six-sided dice per stat. Let's roll for your STR!";
		cin.ignore();
		int d6n1, d6n2, d6n3;
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->STR = d6n1 + d6n2 + d6n3;
		your->STRMOD = floor((your->STR - 10)/2);
		cout << "~Looks like your STR is " << your->STR << " with a modifier of " << your->STRMOD << "!";
		cin.ignore();
		cout << "~Don't worry about remembering all of these, by the way. I'll keep track!";
		cin.ignore();
		cout << "~Let's roll for your DEX!";
		cin.ignore();
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->DEX = d6n1 + d6n2 + d6n3;
		your->DEXMOD = floor((your->DEX - 10)/2);
		cout << "~Looks like your DEX is " << your->DEX << " with a modifier of " << your->DEXMOD << "!" << endl;
		cout << "~Let's roll for your CON!";
		cin.ignore();
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->CON = d6n1 + d6n2 + d6n3;
		your->CONMOD = floor((your->CON - 10)/2);
		cout << "~Looks like your CON is " << your->CON << " with a modifier of " << your->CONMOD << "!" << endl;
		cout << "~Let's roll for your INT!";
		cin.ignore();
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->INT = d6n1 + d6n2 + d6n3;
		your->INTMOD = floor((your->INT - 10)/2);
		cout << "~Looks like your INT is " << your->INT << " with a modifier of " << your->INTMOD << "!" << endl;
		cout << "~Let's roll for your WIS!";
		cin.ignore();
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->WIS = d6n1 + d6n2 + d6n3;
		your->WISMOD = floor((your->WIS - 10)/2);
		cout << "~Looks like your WIS is " << your->WIS << " with a modifier of " << your->WISMOD << "!" << endl;
		cout << "~Let's roll for your CHA!";
		cin.ignore();
		d6n1 = rand() % 6 +1;
		d6n2 = rand() % 6 +1;
		d6n3 = rand() % 6 +1;
		cout << "Results: [" << d6n1 << "] [" << d6n2 << "] [" << d6n3 << "]" << endl;
		your->CHA = d6n1 + d6n2 + d6n3;
		your->CHAMOD = floor((your->CHA - 10)/2);
		cout << "~Looks like your CHA is " << your->CHA << " with a modifier of " << your->CHAMOD << "!" << endl;
		cout << "~Great, you have all of your stats! Here they are all at once:";
		cin.ignore();
		cout << "STR: " << your->STR << "    DEX: " << your->DEX << "    CON: " << your->CON << "    INT: " << your->INT << "    WIS: " << your->WIS << "    CHA: " << your->CHA;
		cin.ignore();
		cout << "~Hot damn, "<< your->NAME << ", you look SO ready for an adventure! Let's give you \n   some equipment!";
		cin.ignore();
		your->DEF = 1;
		cout << " - 'Light Armor' added and equipped. Your Defense score is now " << your->DEF << endl;
		cout << " - 'Healing Potion' x3 added" << endl;
		cout << " - 'Torch' x1 added";
		cin.ignore();
		cout << "~I guess you need a weapon too. Which one would you like?";
		cin.ignore();
		cout << "==================OPTIONS==================" << endl;
		cout << "(L)ongsword: best for people with high STR" << endl;
		cout << "(D)agger best for people with high DEX" << endl;
		cout << "(S)taff: best for people with high INT" << endl;
		cout << "(T)ome: best for people with high WIS" << endl;
		cout << "===========================================" << endl;
		cout << "Your selection: ";
		cin >> tempvar;
		string WEAP;
		while (tempvar != "l" && tempvar != "L" && tempvar != "d" && tempvar != "D" && tempvar != "s" && tempvar != "S" && tempvar != "t" && tempvar != "T")
		{
			cout << "Your selection was invalid. Pick L/D/S/T: ";
			cin >> tempvar;
		}
	if (tempvar == "l" || tempvar == "L"){
		your->WEAP = "Longsword";
		cout << " - 'Longsword' added";
	}
	else if (tempvar == "d" || tempvar == "D"){
		your->WEAP = "Dagger";
		cout << " - 'Dagger' added";
	}
	else if (tempvar == "s" || tempvar == "S"){
		your->WEAP = "Staff";
		cout << " - 'Staff' added";
	}
	else if (tempvar == "t" || tempvar == "T"){
		your->WEAP = "Tome";
		cout << " - 'Tome' added";
	}
	cin.ignore();
	cin.ignore();
	cout << "~Looks like you're all set. Now, let's have you practice combat.";
	cin.ignore();
	cout << "~Since I like tomatoes so much, I have a Red Rat problem in my basement.";
	cin.ignore();
	cout << "~I'd appreciate it if you could kill one for me. Head down there!";
	cin.ignore();
	cout << "~~~~~~~~~~IN THE BASEMENT~~~~~~~~~~";
	cin.ignore();
	cout << "! ! ! Enemy Spotted - Combat Initiated ! ! !";
	cin.ignore();
	int RHPT, RHPC;
	RHPT = 8;
	RHPC = RHPT;
	your->HPT = 20 + your->CONMOD;
	your->HPC = your->HPT;
	if (your->WEAP == "Longsword")
		your->ATK = 3 + your->STRMOD;
	else if (your->WEAP == "Dagger")
		your->ATK = 3 + your->DEXMOD;
	else if (your->WEAP == "Staff")
		your->ATK = 3 + your->INTMOD;
	else if (your->WEAP == "Tome")
		your->ATK = 3 + your->WISMOD;
	while (RHPC > 0)
	{
		cout << "================= ENEMIES =================" << endl;
		cout << "Red Rat    HP: " << RHPC << "/" << RHPT << endl;
		cout << "=================== YOU ===================" << endl;
		cout << your->NAME << "    HP: " << your->HPC << "/" << your->HPT << "    Weapon: " << your->WEAP << endl;
		cout << "================= ACTIONS =================" << endl;
		cout << "(A)ttack   (S)tats   (E)quipment   (R)un" << endl;
		cout << "What will you do? ";
		cin >> tempvar;
		while (tempvar != "a" && tempvar != "A" && tempvar != "s" && tempvar != "S" && tempvar != "e" && tempvar != "E" && tempvar != "r" && tempvar != "R")
		{
			cout << "Invalid selection. What will you do? ";
			cin >> tempvar;
		}
		if (tempvar == "a" || tempvar == "A"){
			cout << "\nYou hit the Red Rat for " << your->ATK << " damage!" << endl;
			cin.ignore();
			cin.ignore();
			RHPC -= your->ATK;
			if (RHPC > 0)
			{
				cout << "The Red Rat bit you and dealt 3 damage! (That's gross, dude)" << endl;
				cin.ignore();
				your->HPC -= 3;
			}
		}
		else if (tempvar == "s" || tempvar == "S"){
			cout << "\nYour Defense is " << your->DEF << ". Your Attack Power with your " << your->WEAP << " is " << your->ATK << "." << endl;
			cin.ignore();
			cin.ignore();
		}
		else if (tempvar == "e" || tempvar == "E"){
			cout << "\nYour Light Armor is equipped, giving you " << your->DEF << " Defense from attacks.\nYou have Healing Potion x3\nYou have Torch x1\n(You can't use these items in this combat.)" << endl;
			cin.ignore();
			cin.ignore();
		}
		else if (tempvar == "r" || tempvar == "R"){
			cout << "\n~I'm not unlocking this door until you kill that rat!" << endl;
			cin.ignore();
			cin.ignore();
		}
	}
	cout << "========== ALL ENEMIES BANISHED! =========" << endl;
	cin.ignore();
	cout << "~Holy crap, " << your->NAME << ", you actually killed it! Thanks a ton!";
	cin.ignore();
	cout << "~That bite looks bad though. Gotta watch out for those teeth.";
	cin.ignore();
	cout << "~You should use one of those Healing Potions I gave you.";
	cin.ignore();
	cout << "Use Healing Potion x1? (Y/N)";
	cin >> tempvar;
	while (tempvar != "y" && tempvar != "Y" && tempvar != "n" && tempvar != "N")
	{
		cout << "It doesnt look like you answered (y)es or (n)o properly. Try again!  ";
		cin >> tempvar;
	}
	if (tempvar == "y" || tempvar == "Y")
	{
		cout << "Healing Potion x1 consumed. You have Healing Potion x2 remaining.";
		cin.ignore();
		cin.ignore();
		int hpadded = your->HPT - your->HPC;
		your->HPC = your->HPT;
		cout << "You have restored " << hpadded << " HP.";
		cin.ignore();
	}
	else if (tempvar == "n" || tempvar == "N")
	{
		cout << "~Alright, if your leg falls off don't come crying to old Jacob here!";
		cin.ignore();
		cin.ignore();
	}
	cout << "~Well, I guess that's everything. Thanks for helping me out, and enjoy the gear.";
	cin.ignore();
	cout << "~Safe travels, " << your->NAME << "!";
	cin.ignore();
	
	cout << "================================================================================" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ END OF ADVENTURE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "================================================================================" << endl;
	return 0;
}
