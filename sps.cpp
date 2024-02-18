#include <iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
void play();
using namespace std;
int main()
{
    int choice;
    string name;
    
    cout<<"Enter the player name :"<<endl;
    cin>>name;
    cout<<endl;
    cout<<"Enter your choice :"<<endl;
    cout<<"\t1-> To Play"<<endl<<"\t2-> Quit"<<endl;
    cin>>choice;
    cout<<endl;
    if(choice==1)
    {
        cout<<"\t\t\t Welcome To The Game"<<"  "<<name<<endl;
        cout<<"\t\t\t 1)The rules of the games are : "<<endl;
        cout<<"\t\t\t 2)Stone wins over Scissor"<<endl;
        cout<<"\t\t\t 3)Scissor wins over Paper"<<endl;    
        cout<<"\t\t\t 4)Paper wins over Stone"<<endl;
        cout<<"\t\t\t 5)Player has to guess the opponents move and play their move"<<endl;
        cout<<"\t\t\t 6)If the match is draw then player can choose to replay"<<endl;
        cout<<"1->Stone \t2->Paper \t3->Scissor"<<endl;
        int ch;
        cout<<"Do you want to play ??"<<endl;
        cout<<"\t1-> To Play"<<endl<<"\t2-> Quit"<<endl;
        cin>>ch;
        if(ch==1)
        {
            play();
        }
        else
        {
            cout<<"Play Next Time !!!";
        }
    }
    
    else if(choice==2)
    {
        cout<<"Play Next Time !!!";
        //break;
    }
    return 0;
}
    void play()
    {
        int move,user,cho;
        bool draw=false;
        srand((unsigned int)time(NULL));
        do{
            move=(rand()%3)+1;
            cout<<"\tYour Opponent Played Its Choice"<<endl;
            cout<<"\tYour Turn";
            cout<<"\n1->Stone \t2->Paper \t3->Scissor"<<endl;
            //user=getdata();
            cin>>user;
            switch(user)
            {
                case 1:
                cout<<"\n\tSTONE";
                if(user==move)
                {
                    //bool=1;
                    cout<<"\nThe match is draw !"<<endl<<" Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
						play();
						//break;
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        //break;
                    }
                    
                }
                else if(user==1 && move==2)
                {
                    //draw=true;
                    cout<<"\nyou loose the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
						play();
						//break;
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break;    
                }
                else if(user==1 && move==3)
                {
                     //draw=true;
                    cout<<"\nyou win the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
                    	play();
				//		break;	
					}
                    
                    else  if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break; 
                }
                break;
            
                case 2:
                cout<<"\n\tPAPER"<<endl;
                if(user==move)
                {
                    cout<<"\nThe match is draw !"<<endl<<" Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
                    	play();
					//	break;	
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                break;    
                }
                else if(user==2 && move== 1)
                {
                    //draw=true;
                    cout<<"\nyou win the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
						play();
				//		break;
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break;
                }
                else if(user==2 && move==3)
                {
                    //draw=true;
                    cout<<"\nyou loose the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                   cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
						play();
				//		break;
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break;
                }
                break;
                
                case 3:
                cout<<"\n\tSCISSOR"<<endl;
                if(user==move)
                {
                    cout<<"\nThe match is draw!"<<endl<<" Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
                    	play();
				//		break;	
					}
                    
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                      	break;  
                    }
                break;    
                }
                else if(user==3 && move== 2)
                {
                    //draw=true;
                    cout<<"\nyou win the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
                   		 play();
				//			break; 	
					}
                   
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break;
                }
                else if(user==3 && move==1)
                {
                   // draw=true;
                    cout<<"\nyou loose the game !!!"<<endl;
                    cout<<"Do you want to play again ?? "<<endl<<"\t\t 1->Yes 2->No"<<endl;
                    cin>>cho;
                    cout<<"---------------------------------------------------------------------------------------"<<endl;
                    if(cho==1)
                    {
                   		 	play();
				//			break; 	
					}
                   
                    else if(cho==2)
                    {
                        //draw=true;
                        cout<<"Play Next Time !!!";
                        break;
                    }
                
                break;
                }
            break;
                default:
                cout<<"WRONG INPUT"<<endl;
                cout<<"---------------------------------------------------------------------------------------"<<endl;
                break;
            }
            
        }while(draw!=false);
    
        
        
    
    }