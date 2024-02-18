#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<ctime>
using namespace std;
int rules(string name);
int play();
int main()
{
	string name;
	int choice,x;
	cout<<"WELCOME TO THE GAME"<<endl<<endl;
	cout<<"--------------------"<<endl;
	cout<<"\nEnter the name of the player :";
	cin>>name;
	cout<<"\n1->To Play \n\n2->Exit"<<endl;
	cout<<"Enter your choice :"<<endl<<endl;
	cin>>choice;
	cout<<"--------------------"<<endl;
	switch(choice)
	{
		case 1:
			cout<<name <<" do you want to play the game ? \nIf yes->1 \nIf no->0"<<endl;
			cin>>x;
			cout<<"--------------------"<<endl;
			cout<<endl;
			if(x==1)
			rules(name);
			else
			{
				cout<<"See you again"<<endl;
				break;
			}
		break;
		case 2:
			cout<<name<<" do you want to exit the game ? \nIf yes->1"<<endl ;
			cin>>x;
			cout<<"--------------------"<<endl;
			if(x==1)
			{
				cout<<"See you again"<<endl;
				break;
			}
			else
			{
				cout<<" you enter the wrong choice"<<endl;
			}
		break;
	}
	
	return 0;
}
	int rules( string name)
	{
		int r;
		do{
		
			cout<<"Hello"<<name<<"We welcome you to our number guessing game"<<endl<<endl<<endl;
			cout<<"Let me guide you through the rules of the game"<<endl;
			cout<<"\n\t\tRule 1 :- The number will randomly genreted and you have to guess that number"<<endl;
			cout<<"\n\t\tRule 2 :- According to your response we will give you the hint either LOW or HIGH,"<<endl;
			cout<<"\n\t\twhich means either your guess is low than target or high than the target"<<endl;
			cout<<"\n\t\tRule 3 :- The game will continue untill you get the answer the right"<<endl;
			cout<<"\n\t\tRule 4 :- The number is non negative and only gretaer than 0 "<<endl;
			cout<<"\nDo you understand the rules ? \n1->YES \t\t\t0->NO"<<endl;
			cin>>r;
			cout<<"--------------------"<<endl;
			if(r==1)
			{
				play();
			}
		}while(r==0);
		
		return 0;
	}
	int play()
	{
		int j=1,i,no,guess,choice;
		unsigned int seed;
		srand(time(NULL));
		no=rand()%(100+1);
		cout<<"\nYou may start the guessing "<<endl;
		cout<<"-----------------------------"<<endl;
			do{
				cout<<"\n\nyour guess :-- "<<endl;
				cin>>guess;
				if(no==guess)
				{
					cout<<"\n\n\t\tCONGRATULATIONS YOUR GUESS IS RIGHT, YOU WIN !!!"<<endl;
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"\nDo you want to replay ?"<<endl;
					cout<<"\n1->YES \t\t0->NO";
					cin>>choice;
					if(choice==1)
					play();
					else
					{
						cout<<"See you again"<<endl;
						break;	
					}

				}
				else if(no>guess)
				{
					cout<<"\n\n\tGUESS THE HIGH NO";
					
				}
				else if(no<guess)
				{
					cout<<"\n\n\tGUESS THE LOW NO";
				}
				else
				{
					cout<<"\n\n\tWrong Guess";
					break;
				}
				
			
			}while(guess!=no);
		

	}