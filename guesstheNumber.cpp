#include<iostream>
#include<ctime>
using namespace std;

int main() {
    cout<< "\n\t\t----------Welcome to the Number Guessing Game----------\n"<< endl;
    cout<< "\n\t\t---->>You will hava to guess a number between 1 to 100.";
    cout<< "\n\t\t---->>Lets start playing and Best of Luck."<<endl;

    srand(time(0));
    int randNumber=(rand() %100) + 1;

    cout<< "\n **You will have total 5 chances to guess the corrent number.**\n";
    int chanceLeft = 5;
    int playerInput;

    for (int i =1; i <= 5;i++)
    {
        cout<<"\n--->Enter the Number:";
        cin >> playerInput;

        if(playerInput == randNumber)
        {
            cout<< "\nCongrats...!! you have successfully guessed the right number\n";
            cout<< "\nThanks for playing. Have a nice Day";
         break;
        }
        else
        {
            if(playerInput > randNumber)
            {
                cout<< "\n""insert a Smaller Number . Try Again"""<<endl; 
            }
            else
            {
                cout<< "\n""[Insert a Larger Number . Try Again]"""<<endl;
            }
        }
        chanceLeft--;
        cout<< "\n(Chances left to guess the Random Number:" << chanceLeft << ")"<<endl;

        if(chanceLeft ==0)
        {
            cout<< "\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<< "The random Number was : "<< randNumber <<endl;
            cout<< "Thanks for playing have a nice day.";
        }   
    }   
    cout<< "\n";
    return 0;
}
