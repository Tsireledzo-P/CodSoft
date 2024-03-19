
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    srand((unsigned int)time(NULL));

    int Num = rand() % 100 + 1;
    int Guess;
    int Trys = 0;

    cout << "Guess The Number Game! \n";
    cout << "Try your best to guess the number between 1 and 100. \n";

    do

    {
        cout << "Enter your guess: ";
        cin >> Guess;



        Trys++;

        if (Guess == Num)

        {
            cout << "Congratulations! You guessed the correct number in " << Trys << " amount of trys.";
        }
        else if (Guess < Num)

        {
            cout << "Way too low! Try again.";
        }

        else

        {
            cout << "Way too high! Try again.";
        }

    } while (Guess != Num);

    return 0;
}
