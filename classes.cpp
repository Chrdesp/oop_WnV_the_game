#include "classes.h"
#include <iostream>

using namespace std;

//being
Being::Being(){}
Being::~Being(){}
int Being::get_posis() {
	cout << "\n x = " << x_coord <<"    "<<"y = " << y_coord << endl;
		return x_coord, y_coord;
}

//avatar
Avatar::Avatar(){}
Avatar::~Avatar(){}
int Avatar::get_filter() { return filter; }
void Avatar::use_filter() {
	if (filter > 0) {
		filter--;
		cout << "\nused filter,  new filter is " << filter << endl;
	}
	else
		cout << "\n dont have filter" << endl;
}
void Avatar::incr_filter() {
	filter++;
	cout << "\n new filter is " << filter << endl;
}

//creature
creature::creature():Being() {
	health = 5;
	power = rand() % 3 + 1;
	defence = rand() % 2 + 1;
	giatriko = rand() % 2;
	//cout << "\nhealth="<<health<<"\npower = " << power << "\ndefence = " <<defence << "\ngiatriko = " << giatriko << endl;
}
creature::~creature() { }

int creature::get_health()  {return health; }
int creature::get_power()   {return power; }
int creature::get_defence() {return defence; }
int creature::get_giatriko(){return giatriko; }

void creature::show(){
	cout << "\nhealth=" << get_health() << "\npower = " << get_power() <<
		"\ndefence = " << get_defence() << "\ngiatriko = " << get_giatriko() << endl;
}
void creature::battle_or_heal(creature* a) {
	if (a->is_vampire() == is_vampire()) {
		if (giatriko != 0) {
			a->health++;
			giatriko--;
			cout << "\n healed creature";
		}
		else cout << "\n not enough giatriko";
	}	
	else if (a->is_vampire() != is_vampire()){
		if (get_power() < a->get_power())
			cout << "\n cant attack is stronger";
		else if (get_power() >= a->get_power())
		{
			a->health = a->health - abs(a->get_defence() - get_power());
				cout << "\n attacked creature health is " << a->get_health();
		}
	}
}


//Vampire
Vampire::Vampire():creature(){
	cout << "\n Creating Vampire" << endl;	
}
bool Vampire::is_vampire(){ return true; }
bool Vampire::is_werewolf(){return false;}
Vampire::~Vampire() {}

//werewolf
Werewolf::Werewolf():creature() {
		cout << "\n Creating Werewolf " << endl;
}
Werewolf::~Werewolf(){}
bool Werewolf::is_vampire(){ return false;}
bool Werewolf::is_werewolf(){return true;}









