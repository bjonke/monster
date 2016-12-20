#ifndef _MONSTER_H_
#define _MONSTER_H_

class Monster
{
private:
	// attributes of the character
	int bod;		// 1-6
	int evasion;	// 1-6
	int masking;	// 1-6
	int sensors;	// 1-6

	char user_name[256];
	char user_password[256];
	int money;
	int speed;
	int intelligence;
	int programming;
	int paranoia;
	int score;
	int elapsed_time;
	int targets_hacked;
	int coffein_level;

	char c;
	int n;
	int f;
	//Fighting functions

	
	void attack(){ cout << "attack" << endl;};
	void defend(){ cout << "defend" << endl;};
	void retreat(){ cout << "retreat" << endl;};

public:
	char ip[256];
	Monster();
	Monster(int c = 0, int m = 0, int number = 0, int fnumber = 0);
	~Monster();
	void show();
	void intro();
	void Time_And_Date(int init);
	double Cash_remove();
	double Coffein_remove();
	time_t start_timer();
	time_t stop_timer();
	void wait( double seconds);
	int Randomizer();
	double show_time(time_t valueA, time_t valueB);
	void view_account();
	double score_change(double change);
	void status();
	void hack();
};

#endif


  
