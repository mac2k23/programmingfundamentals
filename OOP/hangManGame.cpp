#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Hangman 
{
	private:
	    int tries;
	    string message;
	    string month;
	    string hideMonth;
	
	public:
		
	    Hangman() : tries(3), message("You have 3 chances!") 
		{
	        srand(time(NULL));
	        string months[] =
			{
	            "january", "february", "march", "april", "may", "june",
	            "july", "august", "september", "october", "november", "december"
	        };
	        int monthNumber = rand() % 12;
	        month = months[monthNumber];
	        hideMonth = string(month.length(), 'X');
	    }
	
	    void hangMan(char state)
		{
	    }
	
	    int checkGuess(char guess)
		{
	        int matches = 0;
	        int len = month.length();
	
	        for(int i=0; i<len; i++)
			{
	            if(guess == hideMonth[i])
				{
	                return 0;
	            }
	            if(guess == month[i])
				{
	                hideMonth[i]=guess;
	                matches++;
	            }
	        }
	        return matches;
	    }
	
	    void playGame()
		{
	        char letter;
	        while (tries != 0)
			{
	            hangMan('n');
	            cout<<"\t\t\t\tLife: "<<tries<<endl;
	            cout<<hideMonth<<endl;
	            cout<<"\t\t\t\tGuess a letter: ";
	            cin>>letter;
	
	            if(checkGuess(letter)==0)
				{
	                message="Incorrect Letter!";
	                tries--;
	            }
				else
				{
	                message="Nice! Correct Guess";
	            }
	
	            if(hideMonth == month)
				{
	                message="You are free!";
	                hangMan('f');
	                cout<<"\t\t\t\tLife: "<<tries<<endl;
	                cout<<"\t\t\t\tThe month is: "<<month<<endl;
	                return;
	            }
	        }
	
	        message="You are Hanged!";
	        hangMan('h');
	        cout<<"\t\t\t\tLife: "<<tries<<endl;
	        cout<<"\t\t\t\tThe month is: "<<month<<endl;
	    }
};

int main()
{
    Hangman game;
    game.playGame();
    return 0;
}

