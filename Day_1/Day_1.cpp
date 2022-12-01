#include <iostream>

#define INPUT_FILE "Input.txt"

using namespace std;

int main()
{
    char lineInput[15] = "";
    char findSymbol = '\n';
    int elfCounter = 0;
    int calories = 0;
    int highestCalories = 0;
    int highestElf = 0;

    FILE *inputFile = fopen(INPUT_FILE, "r");
    if(inputFile == NULL)
    {
        perror("File not opened!\n");
        exit(0);
    }

    while(fgets(lineInput, 15, inputFile) != 0)
    {
        if(lineInput[0] == findSymbol)
        {
            elfCounter++;
            std::cout << "Elf " << elfCounter << " Has " << calories << " Calories" << std::endl;
            
            if(calories > highestCalories)
            {
                highestCalories = calories;
                highestElf = elfCounter;
                calories = 0;
            }
            else
            {
                calories = 0;
            }
        }
        else
        {
            calories += atof(lineInput);
        }
    }

    std::cout << "Elf: " << highestElf << " has the most calories: " << highestCalories << std::endl;

    fclose(inputFile);
    return 0;
}