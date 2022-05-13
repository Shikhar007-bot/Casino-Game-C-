#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

		
	void rules()
	{
		system("cls");
		cout<<"**********************************"<<endl;
		  cout<<"------Rules Of The Game------"<<endl;
		cout<<"**********************************"<<endl;
		cout<<endl;
		cout<<"1. Choose any no. between 1 to 5."<<endl;
		cout<<"2. If you win the Bet you will be rewarded with 2 times the money invested."<<endl;
		cout<<"3. If you lost the Bet your betting money will be deducted."<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"**************************************************************************************"<<endl;
		cout<<"Press any key to start......";
		getch();
	}
	
	void play()
	{
		system("cls");
		rules();
		system("cls");
		
		string playerName;
		int totalMoney;
		int betMoney;
		int guess;
		int dice;
		char choice;
		
		srand(time(0));
		
		
				cout << "_----------------------------------------------------" << endl;
    			cout << "|                  CASINO GAME                 |" << endl;
    			cout << "-----------------------------------------------------" << endl << endl;

		
		cout<<"Enter the Name: "<<endl;
		getline(cin,playerName);
		
		cout<<endl;
		cout<<"Enter the Total Amount to begin game: $";
		cin>>totalMoney;
	
	
		do
		{
			system("cls");	
			
				cout << "_----------------------------------------------------" << endl;
    			cout << "|                  CASINO GAME                 |" << endl;
    			cout << "-----------------------------------------------------" << endl << endl;
				
				cout<<"\nCurrent balance is $ "<<totalMoney<<endl;
				
				do{
					cout << playerName << " Please Enter amount to bet : $ ";
            		cin >> betMoney;
            		
            		if (betMoney > totalMoney)
                			cout << "Betting Amount is more than current balance" << endl << "Re-enter data" << endl;
        		
				} while (betMoney > totalMoney);
				
				do{	
					cout << "Enter Guess number to bet between 1 to 5 : ";
            		cin >> guess;
            		if (guess < 1 || guess > 5)
                			cout << "Number should be between 1 to 5" << endl << "Re-enter data " << endl;

        		} while (guess < 1 || guess > 5);
		
				dice = rand() % 5 + 1;
			
				if(dice!=guess)
				{
					cout<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"HARD LUCK!!! YOU LOST..."<<endl;
					totalMoney=totalMoney-betMoney;
					cout<<"Now the your current balance is $ "<<totalMoney<<endl;
				}
				else
				{
					totalMoney = totalMoney + betMoney*2;
					cout<<"CHEERS!!! YOU WON..... "<<endl;
					cout<<"Now the your current balance is $ "<<betMoney*20<<endl;
					
				}	
		
				cout<<"\nThe Winning Number was : "<<dice<<endl;
				cout<<"\n"<<playerName<<", You have $ "<<totalMoney<<endl;
		
				if(totalMoney==0)
				{
					cout<<"Sorry! YOU HAVE LOST ALL YOUR MONEY..."<<endl;
					break;
				}
			
				cout<<endl<<endl<<"Would you like to play again (y/n)?"<<endl;
				cin>>choice;
			
		}while(choice=='Y' || choice=='y');
		
		cout<<endl;
		cout<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"              Thank you for Playing...... "<<endl;
		cout<<"              CURRENT BALANCE :  $ "<<totalMoney<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		getch();
			
	}
	
	
		
			
int main()
{
    srand((unsigned) time(NULL));

    do {
        system("cls");
        cout << " -------------------------- " << endl;
        cout << " |    CASINO NO GUESS     | " << endl;
        cout << " ---------------------------" << endl << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Rules" << endl;
        cout << "3. Quit" << endl;
        cout << "Select option: ";
        char op = getche();

        if (op == '1') play();
        else if (op == '2') rules();
        else if (op == '3') exit(0);

    } while (1);

    return 0;
}

