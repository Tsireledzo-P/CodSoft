#include <iostream>

using namespace std;

int main()

{

    double num1, num2, answer;

    char operation;



    cout << "Welcome to Simple Calculator\n";

    cout << "Please enter your first digit: ";

    cin >> num1;



    cout << "please enter your second digit: ";

    cin >> num2;



    cout << "Choose an operation (+, -, *, /): ";

    cin >> operation;



    switch (operation)

    {

    case '+':

        answer = num1 + num2;

        cout << "Answer: " << answer << endl;

        break;

    case '-':

        answer = num1 - num2;

        cout << "Answer: " << answer << endl;

        break;

    case '*':

        answer = num1 * num2;

        cout << "Answer: " << answer << endl;

        break;

    case '/':

        if (num2 != 0)

        {

            answer = num1 / num2;

            cout << "Answer: " << answer << endl;

        }

        else

        {

            cout << "Error: Division by zero is not allowed.\n";

        }

        break;

    default:

        cout << "Invalid operation. Please enter +, -, *, or /.\n";

        break;

    }

    return 0;

}
