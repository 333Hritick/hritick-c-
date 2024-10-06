#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// rand ();
// int random = offset+(rand()% range);cecvffbgnghmhggjhmjk,l

// int random= 1+(rand()%100);
int main()
{
    int choicesLeft;

    //  srand(time(0));
    //  int secretnumber= 1+(rand()%100);

    cout << "\n\t\t\t\tWelcome to guess number game!" << endl;
    cout << "You have to guesss a number between 1 and 100" << endl;
    cout << "You'll have limited choices based on the level you choose.Good Luck!" << endl;

    while (true)
    {
        cout << "\nenter the difficulty level: \n";
        cout << "1 for easy !\t";
        cout << "2 for medium !\t";
        cout << "3 for difficulty !\t";
        cout << "0 for ending the game !\t";

        int difficultychoice;
        cout << "\nenter the number:";
        cin >> difficultychoice;
        srand(time(0));
        int secretnumber = 1 + (rand() % 100);
        int playerchoice;

        if (difficultychoice == 1)
        {
            cout << "\n you have 10 choices for finding the secret number between 1 and 100.";

            int choice = 10, i;
            for (i = 1; i <= 10; i++)
            {
                cout << "\n\n Enter the number:";
                cin >> playerchoice;

                if (playerchoice == secretnumber)
                {
                    cout << " Well played!  you won," << playerchoice << "is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "play the game again with us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "nope," << playerchoice << "is not the right number\n";
                    if (playerchoice > secretnumber)
                    {
                        cout << "the secretnumber is smaller than the number you have choosen" << endl;
                    }
                    else
                    {
                        cout << "the secretnumber is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << "choicesLeft." << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "you could't find the secretnumber, it was secretnumber" << endl;
                        cout << "you loose!!\n\n";
                        cout << "play the game again to win!!!\n\n";
                    }
                }
            }
        }

        else if (difficultychoice == 2)
        {
            cout << "\n you have 7 choices for finding the secret number between 1 and 100.";

            int choice = 7, i;
            for (i = 1; i <= 7; i++)
            {
                cout << "\n\n Enter the number:";
                cin >> playerchoice;

                if (playerchoice == secretnumber)
                {
                    cout << " Well played!  you won," << playerchoice << "is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "play the game again with us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "nope," << playerchoice << "is not the right number\n";
                    if (playerchoice > secretnumber)
                    {
                        cout << "the secretnumber is smaller than the number you have choosen" << endl;
                    }
                    else
                    {
                        cout << "the secretnumber is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << "choicesLeft." << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "you could't find the secretnumber, it was secretnumber" << endl;
                        cout << "you loose!!\n\n";
                        cout << "play the game again to win!!!\n\n";
                    }
                }
            }
        }

        else if (difficultychoice == 3)
        {
            cout << "\n you have 5 choices for finding the secret number between 1 and 100.";

            int choices = 5, i;
            for (i = 1; i <= 5; i++)
            {
                cout << "\n\n Enter the number:";
                cin >> playerchoice;

                if (playerchoice == secretnumber)
                {
                    cout << " Well played!  you won," << playerchoice << "is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "play the game again with us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "nope," << playerchoice << "is not the right number\n";
                    if (playerchoice > secretnumber)
                    {
                        cout << "the secretnumber is smaller than the number you have choosen" << endl;
                    }
                    else
                    {
                        cout << "the secretnumber is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << "choicesLeft." << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "you could't find the secretnumber, it was secretnumber" << endl;
                        cout << "you loose!!\n\n";
                        cout << "play the game again to win!!!\n\n";
                    }
                }
            }
        }

        else if (difficultychoice == 0)
        {
            exit(0);
        }

        else
        {
            cout << "Wrong choice,Enter valid choice to play the game !(0,1,2,3)" << endl;
        }
    }

    return 0;
}
