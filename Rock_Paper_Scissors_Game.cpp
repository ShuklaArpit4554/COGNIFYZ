#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string userChoice;
    string computerChoice;
    string options[3] = {"rock", "paper", "scissors"};

    cout << "Enter rock, paper, or scissors : ";
    cin >> userChoice;

    srand(time(0));
    int randomIndex = rand() % 3;
    computerChoice = options[randomIndex];

    cout << "Computer chose : " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if (
        (userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "rock") ||
        (userChoice == "scissors" && computerChoice == "paper")
    ) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
