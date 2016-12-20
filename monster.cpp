#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
#include "monster.h"

// konstruerare
Monster::Monster()
{
	strcpy(user_name, "unknown");
	strcpy(user_password, "unknown");
}

Monster::Monster(int c,int m, int number, int fnumber)
{
	f=fnumber;
	n=number;
	money=m;
	coffein_level=c;
}

Monster::~Monster()
{
	cout << "Monster erased!\n";
}

void Monster::show()
{
	cout << "Enemy hacker is putting on a show for you" << endl;
}
void Monster::intro()
{
	int adam = rand()%6;
	switch(adam)
	{
	case 6: attack();
	case 5: defend();
	case 4: retreat();
	case 3: //view_account();
	case 2: //status();
	case 1: hack();
	case 0: show();
	}
}

void Monster::Time_And_Date(int init)
{
//   clock_t rawtime;
  //time_t rawtime;
//  struct tm * timeinfo;
//  time ( &rawtime );
  
//  timeinfo = localtime ( &rawtime );
  
//  printf ( " %s", asctime (timeinfo) );
};

double Monster::Cash_remove()
{
	return 0.1;
};

double Monster::Coffein_remove()
{
	coffein_level = coffein_level - 1;
	return 0.1;
};

time_t Monster::start_timer()
{
  time_t start;
  time(&start); // starts timer
  return time_t(start);
};

time_t Monster::stop_timer()
{
  time_t stop;
  time(&stop); // stops timer
  return time_t(stop);
};

void Monster::wait( double seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK ;
  while (clock() < endwait) {}
};

int Monster::Randomizer()
{
	int random_integer=0;
	random_integer=rand() % 100+1;
	return random_integer;
};

double Monster::show_time(time_t valueA, time_t valueB)
{
double diff;
diff=difftime(valueA, valueB);
cout << "time that has elapsed since start is: " << diff << " seconds" << endl;
return diff;
};

void Monster::view_account()
{
	cout << "money:" << money << endl;
	cout << "coffein_level" << coffein_level << endl;
}

double Monster::score_change(double change)
{
	score=score+change;
	return score;
}

void Monster::status()
{
	cout << "\n:: status[" << user_name << "] ::\n" << endl;
	cout << "Elapsed time: " << elapsed_time << endl;
	cout << "Score: " << score << endl;
	cout << "Targets hacked: " << targets_hacked << endl;
	cout << "Money: " << money << endl;
}

void Monster::hack()
{
	cout << "You have been hacked :D" << endl;
	Sleep(100);
}
