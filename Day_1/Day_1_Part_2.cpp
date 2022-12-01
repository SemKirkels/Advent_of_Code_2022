#include <iostream>

#define INPUT_FILE "Input.txt"

using namespace std;

int main()
{
    char lineInput[15] = "";
    char findSymbol = '\n';
    int elfCounter = 0;
    int calories = 0;
    int output_array[500];
    int highestValue_1 = 0;
    int highestValue_2 = 0;
    int highestValue_3 = 0;
    int total = 0;

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
            std::cout << "Elf " << elfCounter << " Has " << calories << " Calories" << std::endl;
            output_array[elfCounter] = calories;
            calories = 0;
            elfCounter++;
        }
        else
        {
            calories += atof(lineInput);
        }
    }

    for(int i = 0; i < elfCounter; i++)
    {
        if (output_array[i] > highestValue_1)
        {
            highestValue_3 = highestValue_2;
            highestValue_2 = highestValue_1;
            highestValue_1 = output_array[i];
        }
        else if (output_array[i] > highestValue_2 && output_array[i] != highestValue_1)
        {
            highestValue_3 = highestValue_2;
            highestValue_2 = output_array[i];
        }
        else if (output_array[i] > highestValue_3 && output_array[i] != highestValue_2)
        {   
            highestValue_3 = output_array[i];
        }
        else
        {
            
        }
    }

    std::cout << highestValue_1 << std::endl;
    std::cout << highestValue_2 << std::endl;
    std::cout << highestValue_3 << std::endl;

    total = highestValue_1 + highestValue_2 + highestValue_3;
    std::cout << "Total value of the top 3: " << total << std::endl;

    fclose(inputFile);
    return 0;
}