#include <iostream>

#define INPUT_FILE "Input.txt"
#define ROCK_1 'A'
#define PAPER_1 'B'
#define SCISSORS_1 'C'
#define ROCK_2 'X'
#define PAPER_2 'Y'
#define SCISSORS_2 'Z'

using namespace std;

int main()
{
    char lineInput[5] = "";
    int score = 0;
    
    FILE *inputFile = fopen(INPUT_FILE, "r");
    if(inputFile == NULL)
    {
        perror("File not opened!\n");
        exit(0);
    }

    while(fgets(lineInput, 5, inputFile) != 0)
    {
        std::cout << lineInput[0] << lineInput[2] << std::endl;
        if(lineInput[0] == ROCK_1)
        {
            if(lineInput[2] == PAPER_2) // Win
            {
                std::cout << "Win rock vs paper" << std::endl;
                score += 8; // 2 for paper 6 for win
            }
            else if(lineInput[2] == ROCK_2) // Draw
            {
                std::cout << "Draw rock vs rock" << std::endl;
                score += 4; // 1 for rock 3 for draw
            }
            else // Lose
            {
                std::cout << "Loss rock vs scissors" << std::endl;
                score += 3; // 3 for scissors 0 for loss
            }
        }
        else if(lineInput[0] == PAPER_1)
        {
            if(lineInput[2] == PAPER_2) // Draw
            {
                std::cout << "Draw paper vs paper" << std::endl;
                score += 5; // 2 for paper 3 for draw
            }
            else if(lineInput[2] == ROCK_2) // Lose
            {
                std::cout << "lose paper vs rock" << std::endl;
                score += 1; // 1 for rock 0 for loss
            }
            else // Win
            {
                std::cout << "Win paper vs scissors" << std::endl;
                score += 9; // 3 for scissors 6 for win
            }
        }
        else
        {
            if(lineInput[2] == PAPER_2) // Lose
            {
                std::cout << "lose scissors vs paper" << std::endl;
                score += 2; // 2 for paper 0 for loss
            }
            else if(lineInput[2] == ROCK_2) // Win
            {
                std::cout << "Win scissors vs rock" << std::endl;
                score += 7; // 1 for rock 6 for win
            }
            else // draw
            {
                std::cout << "Draw scissors vs Scissors" << std::endl;
                score += 6; // 3 for scissors 3 for draw
            }
        }
    }

    std::cout << "Total score: " << score << std::endl;
    return 0;
}