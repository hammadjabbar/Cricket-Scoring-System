#include<iostream>
#include<bits/stdc++.h>
#include <cstdlib> 
#include <ctime> 
#include<string>
#include<cstring>
#include<sstream>
#include<conio.h>
#include<limits>
#include<fstream>
using namespace std;

class PreMatch{
	private:
		int toss;
	public:
		 int overs;
		 string bl,bt;
		string team1,team2;
		
        match()
		{
        	int t;
        	toss=t;
        	overs=0;
        	team1=" ";
        	team2=" ";
		}
	void matchinfo()
		{
		cout<<"TOTAL TEAMS: \n1-Australia\n2-Pakistan\n3-India."<<endl;
		while(1)
		{	
		a:
		cout<<"\nEnter Name of the first team from the given teams: "; // change
        getline(cin,team1);
        if(team1=="Australia" || team1=="AUSTRALIA" || team1=="australia" || team1=="Pakistan" || team1=="PAKISTAN" || team1=="pakistan" || team1=="India" || team1=="INDIA" || team1=="india")
        {
        	break;
		}
		else
		{
			cout<<"Invalid Name! Try Again.";
        	goto a;
		}
	    }
	    while(1)
	    {
		b:
        cout<<"\nEnter Name of the second team from the given teams: ";
        getline(cin,team2);
        if(team2=="Australia" || team2=="AUSTRALIA" || team2=="australia" || team2=="Pakistan" || team2=="PAKISTAN" || team2=="pakistan" || team2=="India" || team2=="INDIA" || team2=="india")
        {
        	if(team2==team1)
		    {
			    cout<<"Error! Same as first team. "<<endl;
			    goto b;
		    }
		    break;
		}
		else
		{
			cout<<"Invalid Name! Try Again."<<endl;
        	goto b;
		}
	    }
        cout<<"Enter number of Overs: "; //overs
        while(!(cin >> overs)){      
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
        }   
        system("cls");
        cout<<"\t\t*********"<<team1<< " VS "<<team2<< "*********"<<endl;
        cout<<"\t\t*********"<<overs <<" Over Match*******\n"<<endl;
	}
	 void show(){}  
	 
	 
    
    int matchtoss(){
 	    srand(time(NULL));  // random function
		toss= rand()%4 ;
	if(toss==0){
		cout<<team1<<" won the toss and have elected to bat first!"<<endl;
		bt=team1;
		bl=team2;
	}
	if(toss==1){
	 	cout<<team2<<" won the toss and have elected to bat first!"<<endl;
		bt=team2;
		bl=team1;
	}
	if(toss==2){
		cout<<team1<<" won the toss and have elected to bowl first!"<<endl;
		bl=team1;
		bt=team2;
	}
	if(toss==3){
		cout<<team2<<" won the toss and have elected to bowl first!"<<endl;
		bl=team2;
		bt=team1;
		
    }
    return toss;
	 }
	 
	 int error(int scores,int *balls)
{
  if (scores >= -1 && scores <= 6)
    return scores;

	else{
	printf("ERROR!\n");
	printf("Avoid entering anything other then -1,1,2,3,4,5,6\n");
		*balls-=1;   
		return *balls;	
	}
}

};

string P1[11], P2[11];
PreMatch m;
	
void Getteam(int check){
	if(check==1){
		if(m.team1=="Australia" || m.team1=="AUSTRALIA" || m.team1=="australia")
		{
			ifstream is("Australia.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P1[i]);
				cout<<P1[i]<<endl;
			}
			getch();
		}
		if(m.team1=="Pakistan" || m.team1=="PAKISTAN" || m.team1=="pakistan")
		{
			ifstream is("Pakistan.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P1[i]);
				cout<<P1[i]<<endl;
			}
			getch();
		}
		if(m.team1=="India" || m.team1=="INDIA" || m.team1=="india")
		{
			ifstream is("India.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P1[i]);
				cout<<P1[i]<<endl;
			}
			getch();
		}
system("cls");
}
 else {
if(m.team2=="Australia" || m.team2=="AUSTRALIA" || m.team2=="australia")
		{
			ifstream is("Australia.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P2[i]);
				cout<<P2[i]<<endl;
			}
			getch();
		}
		if(m.team2=="Pakistan" || m.team2=="PAKISTAN" || m.team2=="pakistan")
		{
			ifstream is("Pakistan.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P2[i]);
				cout<<P2[i]<<endl;
			}
			getch();
		}
		if(m.team2=="India" || m.team2=="INDIA" || m.team2=="india")
		{
			ifstream is("India.txt");
			if(!is)
			{
				cout<<"The file couldn't open.";
				exit(1);		
			}
			for(int i=0; i<=10; i++)
			{
				getline(is,P2[i]);
				cout<<P2[i]<<endl;
			}
			getch();
	    }
system("cls");
}
}



class innings: public PreMatch {
	protected:
	int score1, bo;        
	int total;
    char nob;

    public:
    struct Team
	{
    int runs,wickets,b1runs,b1wickets;   
    string aname,b1name;    
    string method;
	}p[11];
	
    int w1;    
    innings()
	{
    score1=0;
    total=0;
  	nob=' ';
	w1=0;
    bo=0;
   	for(int i=0;i<11;i++)
   		{
   		p[i].aname=" ";
   		p[i].b1name=" ";
   		p[i].runs=0;
   		p[i].wickets=0;
   		p[i].b1runs=0;
   		p[i].b1wickets=0;
  		p[i].method=' ';
		}
	}

int liveinnings(int checking, int totalcheck,string nameofBowler){
    		
int temp1=0, temp2=1;
for(int i=0, k=0; i<m.overs; i++)
	{   
	if(checking==2)
	{
		for(int l=0; l<=10; l++)
		{
			cout<<P1[l]<<"||";
		}
    }
	else
	{
		for(int l=0; l<=10; l++)
		{
			cout<<P2[l]<<"||";
	    }
    }   
	cout<<"\n\nEnter Name Of Bowler from team " << nameofBowler << ": " << endl;
	fflush(stdin);
	getline(cin,p[bo].b1name);

	for(int j=0; j<=5; j++ ){
		cout<<i<<"."<<j+1<<": ";

        if(!(cin >> score1)){         
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                   
    }     
			m.error(score1,&j);	// calling function to check error
			
            if (score1 < -1 || score1 > 6 || score1 == -1) // no changes in total
              total = total;
            if (score1 > 0 && score1<=6)
              total += score1;
              
			if (score1==1 )
					{
						     
							p[k].runs+=score1;
							p[bo].b1runs+=score1;      
							if(k==temp1)      //this condition is for the batsman to change
						    {
						    	k=temp2;
							}
							else if(k==temp2)
						    {
						    	k=temp1;
							}
				}
				
					if(score1==2)
					{
			
							p[k].runs+=score1;
							p[bo].b1runs+=score1;
							
				}
					 if(score1==3){
							p[k].runs+=score1;
							p[bo].b1runs+=score1;
							
						    if(k==temp1)
						    {
						    	k=temp2;
							}
						    else if(k==temp2)
						    {
						    	k=temp1;
							}
						}
					
					 if(score1==4 ){
							p[k].runs+=score1;
							p[bo].b1runs+=score1;	
						}
						
					 if(score1==5 ){
							p[k].runs+=score1;
							p[bo].b1runs+=score1;	//wide+boundary
						}
						
					if(score1==6){
							p[k].runs+=score1;
							p[bo].b1runs+=score1;
							
						}
					if(totalcheck!=0 && total>totalcheck){
					break;
				}		
					if(score1==-1){
					cout<<"O- Out?\nN-No ball?\nW-Wide?\nD-Dead ball\n";
					cin>>nob;      //method of out
					if(nob=='O' || nob=='o'){ 
				    cout<<"Way Of Getting Out? (Caught, Bowled, Runout, Stumped)\n";
				    fflush(stdin);
				    cin>>p[k].method;
				    if(p[k].method=="Runout"||p[k].method=="runout")
				    {
				    	w1++;
					}
					else {
					w1++;
					p[bo].b1wickets+=1;	
					}
					if(w1==1 ){       
					 if(k==temp1){
					  temp1=2;
					  k=temp1;
				      }
				      else if(k==temp2){
					 temp2=2;
					 k=temp2;
				      }
					}
					else if(w1==2){
					if(k==temp1){
					 temp1=3;
				  
					 k=temp1;
				}
				      else if(k==temp2)
					  {
					 temp2=3;
					 k=temp2;
				      }
					}
					else if(w1==3){
					if(k==temp1){
					 temp1=4;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=4;
					 k=temp2;
				      }
					}
					else if(w1==4){
					if(k==temp1){
					 temp1=5;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=5;
					 k=temp2;
				      }
					}
					else if(w1==5){
					if(k==temp1){
					 temp1=6;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=6;
					 k=temp2;
				      }
					}
					else if(w1==6){
					if(k==temp1){
					 temp1=7;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=7;
					 k=temp2;
				      }
					}
					else if(w1==7){
					if(k==temp1){
					 temp1=8;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=8;
					 k=temp2;
				      }
					}
					else if(w1==8){
					if(k==temp1){
					 temp1=9;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=9;
					 k=temp2;
				      }
					}
					else if(w1==9){
					if(k==temp1){
					 temp1=10;
					 k=temp1;
				      }          
				     else if(k==temp2){
					 temp2=10;
					 k=temp2;
				      }
					}
					else if(w1==9){
					break;
					}
				}
				else if(nob=='N' || nob=='W' || nob=='w' || nob=='n'){
						j--;
						total=total+1;
	 	       }
	 	       else if(nob=='D'||nob=='d'){
                       j--;	 	       	
				}
	}
}
if(k==temp1){   
	k=temp2;
}
else if(k==temp2){
	k=temp1;
}
	cout<<endl;
    cout<<"\t\t\t ****End of "<<i+1<<" Over******"<<endl;
    if(checking==1){
   	cout<<"===================================================\n";		cout<<"\t\t\t"<<m.team1<<"||"<<total<< "/" <<w1<<endl<<endl;
	cout<<"Batsman: "<<P1[temp1]<< ": "<<p[temp1].runs<< " Not Out \t\t Bowler: "<<p[bo].b1name<< ": " <<p[bo].b1runs<<"/"<<p[bo].b1wickets<<endl;
	cout<<"         "<<P1[temp2]<< ": "<<p[temp2].runs<< " Not Out"<<endl;}
	else if(checking==2) {
	cout<<"===================================================\n";		cout<<"\t\t\t"<<m.team2<<"||"<<total<< "/" <<w1<<endl<<endl;
	cout<<"Batsman: "<<P2[temp1]<< ": "<<p[temp1].runs<< " Not Out \t\t Bowler: "<<p[bo].b1name<< ": " <<p[bo].b1runs<<"/"<<p[bo].b1wickets<<endl;
	cout<<"         "<<P2[temp2]<< ": "<<p[temp2].runs<< " Not Out"<<endl;
	}
		bo++;
	    cout<<"=====================================================\n";
	}
	    if(totalcheck==0){
	    cout<<endl<<"\t\t\t\t|||Target: "<<total+1<<"|||"<<endl;
	}
	return total;
}
 bool operator >(const innings& i) {
         if(total > i.total) 
            return true;
         
         return false;
  }    
};

class Scorecard:public innings{
	public:
  void show(int T1,int overs,int twickets, string *names,innings::Team p[]){
	
	ofstream file("score.txt",ios::app);
    cout<<"==================================================="<<endl;
    cout<<"PLAYER'S NAME        METHOD             RUNS"<<endl;
    cout<<"==================================================="<<endl;
    file<<"==================================================="<<endl;
    file<<"PLAYER'S NAME        METHOD             RUNS"<<endl;
    file<<"==================================================="<<endl;
    for (int i=0; i<=10; i++)
	{
    cout<<names[i]<<"\t\t\t"<<p[i].method<<"\t\t\t"<<p[i].runs<<endl;
    file<<names[i]<<"\t\t\t"<<p[i].method<<"\t\t\t"<<p[i].runs<<endl;
    
  	}
  	cout<<"==================================================="<<endl;
	cout<<"BOWLER'S NAME        WICKETS           RUNS CONCEDED"<<endl;
	cout<<"==================================================="<<endl;
	file<<"==================================================="<<endl;
	file<<"BOWLER'S NAME        WICKETS           RUNS CONCEDED"<<endl;
	file<<"==================================================="<<endl;
	for(int j=0;j<overs;j++)
	{
    cout<<p[j].b1name<<"\t\t\t"<<p[j].b1wickets<<"\t\t\t"<<p[j].b1runs<<endl;
    file<<p[j].b1name<<"\t\t\t"<<p[j].b1wickets<<"\t\t\t"<<p[j].b1runs<<endl;
	}
	cout<<"\n            ***TOTAL"<<"-"<<T1<<"/"<<twickets<< "***"<<endl;
	cout<<"---------------------------------------------"<<endl; 
	file.close();
}
};

//public functions
void printinstructions(){
	cout<<"\t\t\t\t**** CRICKET SCORING PROGRAM ****\n";
	cout<<"\t\t\t\t******** USER MANUAL ********\n";

  	cout<<"\n1. First enter the name of two playing teams\n";
 	cout<<"2. Enter the number of overs to be played in each innings\n";
  	cout<<"3. Donot enter no. of overs or score in character form\n";
  	cout<<"4. Enter the name of players according to correct batting order\n";
  	cout<<"5. Enter the player name in same case as declared.\n";
  	cout<<"6. Enter -1 in the runs, if the ball is dead, white or no ball or the batsman is out.\n";
  	cout<<"7. Enter the way batsman has been out, if the batsman has been out through runout, bowler won't get a wicket.\n";
  	cout<<"8. Be careful with the case 'Runout','Stumped','Bowled','Caught'\n";
  	cout<<"9. Avoid entering runs other else then '1,2,3,4,5,6,-1', or else error will be shown.\n";
  	cout<<"10. Enter the name of the new bowler after every over and start of the inning.\n\n";
  	cout<<"11. Avoid entering wrong names of players.";
	}
	
void front2() {
  system("cls");

  cout<< " -------------------------"<<endl;

  cout<<"|   ALL RIGHTS RESERVED   |"<<endl;

  cout<< " -------------------------"<<endl;

  cout<< "| Made By: Tuaha Ejaz        |"<<endl;

  cout<< "| \t   Ali Nayab Nathani |"<<endl;

  cout<<"| \t   Hammad Jabbar     |"<<endl;

  cout<<" -------------------------"<<endl;
}
	
	
int main()
{
	system("color E4");
	char press, any, any1;
	//1
	  while (1) {
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t    ";
    	for(int i=0; i<=30; i++)
	{
		for(int j=0; j<=10000000; j++);
		cout<< "\xB2";
	}
    cout<< "\n\n\t\t\t\t\t\tCricket Scoring System" <<endl; 
        cout<<"\n\t\t\t\t\t    ";
    	for(int i=0; i<=30; i++)
	{
		for(int j=0; j<=10000000; j++);
		cout<< "\xB2";
	}
    cout<< "\n\n\n\t\t\t\t\t\t Press \n\t\t\t\t\t\t 1. START THE MATCH \n\t\t\t\t\t\t 2. READ USER MANUAL \n\t\t\t\t\t\t 3. Credits \n\t\t\t\t\t\t 4. To Exit";
    cout<< "\n\n\t\t\t\t\t\t Enter Your Choice\t";
    press = getche();
    switch (press) {
    	case '1':
	{
	system("cls");
	innings i1;
	innings i2;
	Scorecard s1;
	Scorecard s2;
	int check1, check2, t;
	m.matchinfo();
	t=m.matchtoss();
	if(t==0||t==3){
		check1=1;
		check2=2;

	cout<<"\nThe Playing 11 of "<<m.team1<<" are:"<<endl; 
	Getteam(check1); 
	cout<<"\nThe Playing 11 of "<<m.team2<<" are:"<<endl;
	Getteam(check2);
	}
	else if(t==1||t==2){
		check1=2;
		check2=1;
	cout<<"\nThe Playing 11 of "<<m.team2<<" are:"<<endl; 
	Getteam(check1); 
	cout<<"\nThe Playing 11 of "<<m.team1<<" are:"<<endl;
	Getteam(check2);
	}

	cout<<"\n**************1st Innings*****************\n"<<endl;
	int T1=0, T2=0;
	T1=i1.liveinnings(check1,0,m.bl);
	cout<<"\n\nPress any key to proceed to 2nd Innings."<<endl;
    getch();
	system("cls");
	
	printf("\n\t\t\t**************2nd Innings*****************\n");
	T2= i2.liveinnings(check2,T1,m.bt);
		if(t==0 || t==3){
	if(i1>i2 ){
     	cout<<m.team1<<" have WON by "<<T1-T2<<" Runs!!"<<endl;
	}
	else if(i2>i1 ){
	    cout<<m.team2<<" have WON the game by "<< 10-i2.w1<<" Wickets!"<<endl;
	}
	else if(T2==T1){
	    cout<<"It's a TIE!!"<<endl;
	}
}
	else if( t==1 || t==2){
	 if(i1>i2 ){
		cout<<m.team2<<" have WON by "<<T1-T2 <<" Runs!!"<<endl;
	}
	else if(i2>i1){
	    cout<<m.team1<<" have WON the game by "<< 10-i1.w1 <<" Wickets!"<<endl;
	}
	else if(T2==T1){
	    cout<<"It's a TIE!!"<<endl;
	}
}
cout<<"==================================================="<<endl;
cout<<"\n\n\n\nPress any key to view 'SCORECARD'."<<endl;
   getch();
	system("cls");
ofstream file("score.txt",ios::app);
cout<<"==================================================="<<endl;
cout<<"\t\t\t\t******Match Summary*****"<<endl;
file<<"\t\t\t\t******Match Summary*****"<<endl;
if(t==0||t==3){
    cout<<"\t\t  ***1st Innings***"<<endl;
    file<<"\t\t  ***1st Innings***"<<endl;
    s1.show(T1,m.overs,i1.w1, P1,i1.p);

    cout<<"\t\t  ***2nd Innings***"<<endl;
    file<<"\t\t  ***2nd Innings***"<<endl;
    s2.show(T2,m.overs,i2.w1, P2,i2.p);
}
else if(t==1||t==2){
	cout<<"\t\t  ***1st Innings***"<<endl;
	file<<"\t\t  ***1st Innings***"<<endl;
    s1.show(T1,m.overs,i1.w1, P1,i1.p);

    cout<<"\t\t  ***2nd Innings***"<<endl;
    file<<"\t\t  ***2nd Innings***"<<endl;
    s2.show(T2,m.overs,i2.w1, P2,i2.p);
}
}
getch();
break;
    case '2':
      system("cls");
      printinstructions();
      any = getch();
      break;
    case '3':
    		system("cls");
    		front2();
    		any1 = getch();
    		break;
    case '4':
      exit(0);
    default:
      break;
  }
}
}
