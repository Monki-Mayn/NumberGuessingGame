#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Welcome to the number guessing game!\n"
        << "What range of numbers would you like to guess in?\n"
        << "1 to ____\n";

    int difficulty{};
    std::cin >> difficulty;

    std::cout << "Can you guess the number from 1 to " << difficulty << "?\n";

    srand((unsigned)time(NULL));
    int random{ 1 + rand() % difficulty };

    int guess{};
    std::cin >> guess;

    while (guess != random) {
        std::cout << "Try again!\n";
        std::cin >> guess;
        if (guess < 1 || guess > difficulty)
            std::cout << "Remember, the number is an integer between 1 and " << difficulty << ".\n";
    }

    std::cout << "THAT'S IT! YOU GUESSED CORRECTLY!" << std::endl;

    system("pause");

    return 0;

}