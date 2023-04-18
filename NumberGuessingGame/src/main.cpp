#include <iostream>
#include <random>

int main()
{
    std::cout << "Welcome to the number guessing game!\n"
        << "What range of numbers would you like to guess from?\n"
        << "1 to ____\n";

    int difficulty{};
    std::cin >> difficulty;

    std::cout << "Can you guess the number from 1 to " << difficulty << "?\n";

    std::mt19937 randomNumber{ std::random_device{}() };

    std::uniform_int_distribution <> die6{ 1, difficulty };

    int guess{};
    std::cin >> guess;

    while (guess != die6(randomNumber)) {
        std::cout << "Try again!\n";
        std::cin >> guess;
        if (guess < 1 || guess > difficulty)
            std::cout << "Remember, the number is an integer between 1 and " << difficulty << ".\n";
    }

    std::cout << "THAT'S IT! YOU GUESSED CORRECTLY!" << std::endl;

    system("pause");

    return 0;

}