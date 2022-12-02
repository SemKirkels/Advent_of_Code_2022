#include <iostream>

#define INPUT_FILE "Input.txt"
#define ROCK_1 'A'
#define PAPER_1 'B'
#define SCISSORS_1 'C'
#define LOSE 'X'
#define DRAW 'Y'
#define WIN 'Z'

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
            if(lineInput[2] == LOSE) // lose with scissors
            {
                score += 3; // 3 ptn for scisssors 0 for loss
            }
            else if(lineInput[2] == DRAW)
            {
                score += 4; // 1 pnt for rock 3 for draw
            }
            else
            {
                score += 8; // 2 pnt for paper 6 for win
            }
        }
        else if(lineInput[0] == PAPER_1)
        {
            if(lineInput[2] == LOSE)
            {
                score += 1; // 1 pnt for rock 0 for loss
            }
            else if(lineInput[2] == DRAW)
            {
                score += 5; // 2 pnt for paper 3 for draw
            }
            else
            {
                score += 9; // 3 pnt for scissors 6 for win
            }
        }
        else  // scissors
        {
            if(lineInput[2] == LOSE)
            {
                score += 2; // 2 pnt for paper
            }
            else if(lineInput[2] == DRAW)
            {
                score += 6; // 3 pnt for scissors for 3 draw
            }
            else
            {
                score += 7; // 1 pnt for rock 6 for win
            }
        }
    }

    std::cout << "Total score: " << score << std::endl;
    return 0;
}

// Win 6 pnt
// Draw 3 pnt
// Lose 0 pnt

// Rock 1 pnt
// Paper 2 pnt
// Scissor 3 pnt