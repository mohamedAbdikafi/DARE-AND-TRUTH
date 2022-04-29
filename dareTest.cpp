#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

using namespace std;

class Play {
public:
	void menu();
	void truth();
	void dare();
};

void Play::menu()
{
	int choice;
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||            ***** G   A  M  E *****    ***** T  I  M  E *****         ||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||1]TRUTH                                                               ||\n";
	cout << "\t\t\t||2]DARE                                                                ||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\tchoose an option: ";
	cin >> choice;

	switch (choice) {
	case 1:
		system("CLS");
		truth();
		break;
	case 2:
		system("CLS");
		dare();
		break;
	}


}

void Play::truth()
{
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||                   ***** TRUTHY  ME *****                             ||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";

	string names[2];
	string truths[40] = { 
		"When was the last time you lied?",

		"When was the last time you cried?",

		"What's your biggest fear?",

		"What's your biggest fantasy?",

		"Do you have any fetishes?",

		"What's something you're glad your mum doesn't know about you?",

		"Have you ever cheated on someone?",

		"What's the worst thing you've ever done?",

		"What's a secret you've never told anyone?",

		"Do you have a hidden talent?",

		"Who was your first celebrity crush?",

		"What are your thoughts on polyamory?",

		"What's the worst intimate experience you've ever had?",

		"Have you ever cheated in an exam?",

		"What's the most drunk you've ever been?",

		"Have you ever broken the law?",

		"What's the most embarrassing thing you've ever done?",

		"What's your biggest insecurity?",

		"What's the biggest mistake you've ever made?",

		"What's the most disgusting thing you've ever done?",

		"Who would you like to kiss in this room?",

		"What's the worst thing anyone's ever done to you?",

		"Have you ever had a run in with the law?",

		"What's your worst habit?",

		"What's the worst thing you've ever said to anyone?",

		"Have you ever peed in the shower?",

		"What's the strangest dream you've had?",

		"Have you ever been caught doing something you shouldn't have?",

		"What's the worst date you've been on?",

		"What's your biggest regret?",

		"What's the biggest misconception about you?",

		"Where's the weirdest place you've had sex?",

		"Why did your last relationship break down?",

		"Have you ever lied to get out of a bad date?",

		"What's the most trouble you've been in?" 
		};
	srand(time(0));


	for (int i = 0; i < 2; i++) {
		cout << "Choose the Players!: ";
		cin >> names[i];
	}
	int proceed;
	for (int j = 0; j < 41; j++) {
		cout<<"\t\t\t" << names[rand() % 2] << " : " << "*" << truths[rand() % 39] << "*\n\n" << endl;
		cout << "\t\t\tpress 1 to continue... \n\n";
		cin >> proceed;
		if (proceed!=1) {
			break;
		}
	}


}

void Play::dare()
{
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||                     ***** DARE WITH ME *****                         ||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";
	cout << "\t\t\t||----------------------------------------------------------------------||\n";

	string names[2];
	string dares[40] = {
		"Show the most embarrassing photo on your phone",

		"Show the last five people you texted and what the messages said",

		"Let the rest of the group DM someone from your Instagram account",

		"Eat a raw piece of garlic",

		"Do 100 squats",

		"Keep three ice cubes in your mouth until they melt",

		"Say something dirty to the person on your left",

		"Give a foot massage to the person on your right",

		"Put 10 different available liquids into a cup and drink it",

		"Yell out the first word that comes to your mind",

		"Give a lap dance to someone of your choice",

		"Remove four items of clothing",

		"Like the first 15 posts on your Facebook newsfeed",

		"Eat a spoonful of mustard",

		"Keep your eyes closed until it's your go again",

		"Send a sext to the last person in your phonebook",

		"Show off your orgasm face",

		"Seductively eat a banana",

		"Empty out your wallet//purse and show everyone what's inside",

		"Do your best sexy crawl",

		"Pretend to be the person to your right for 10 minutes",

		"Eat a snack without using your hands",

		"Say two honest things about everyone else in the group",

		"Twerk for a minute",

		"Try and make the group laugh as quickly as possible",

		"Try to put your whole fist in your mouth",

		"Tell everyone an embarrassing story about yourself",

		"Try to lick your elbow",

		"Post the oldest selfie on your phone on Instagram Stories",

		"Tell the saddest story you know",

		"Howl like a wolf for two minutes",

		"Dance without music for two minutes",

		"Pole dance with an imaginary pole",

		"Let someone else tickle you and try not to laugh",

		"Put as many snacks into your mouth at once as you can",
	};
	srand(time(0));


	for (int i = 0; i < 2; i++) {
		cout << "Choose the Players!: ";
		cin >> names[i];
	}
	int proceed;
	for (int j = 0; j < 41; j++) {
		cout <<"\t\t\t" << names[rand() % 2] << " : " << "*" << dares[rand() % 35] << "*\n\n" << endl;
		cout << "\t\t\tpress 1 to continue... \n\n";
		cin >> proceed;
		if (proceed != 1) {
			break;
		}
	}

}


int main() {

	Play myPlay;
	myPlay.menu();

	system("pause");

}

