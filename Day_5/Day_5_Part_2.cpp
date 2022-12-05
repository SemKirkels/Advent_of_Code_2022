#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void printList(void);

/*
    [V] [G]             [H]        
[Z] [H] [Z]         [T] [S]        
[P] [D] [F]         [B] [V] [Q]    
[B] [M] [V] [N]     [F] [D] [N]    
[Q] [Q] [D] [F]     [Z] [Z] [P] [M]
[M] [Z] [R] [D] [Q] [V] [T] [F] [R]
[D] [L] [H] [G] [F] [Q] [M] [G] [W]
[N] [C] [Q] [H] [N] [D] [Q] [M] [B]
 1   2   3   4   5   6   7   8   9 
*/

vector<string> crates
{
    "NDMQBPZ",
    "CLZQMDHV",
    "QHRDVFZG",
    "HGDFN",
    "NFQ",
    "DQVZFBT",
    "QMTZDVSH",
    "MGFPNQ",
    "BWRM"
};

int main()
{
    fstream inputFile("Input.txt");

    string x;
    int movement_1, movement_2, movement_3;

    // while(getline(inputFile, inputLine))
    while(inputFile >> x >> movement_1 >> x >> movement_2 >> x >> movement_3) // Iterate through the file for as long as there is input
    {
        //inputFile >> x_1 >> movement_1 >> x_2 >> movement_2 >> x_3 >> movement_3;
        std::cout << "Move " << movement_1 << " Crate(s) "<< "from stack " << movement_2 << " to stack " << movement_3 << std::endl;

        movement_2--; // -1 because the input data starts at 1 and goes to 9 but the vector starts from 0 and goes to 8
        movement_3--; // -1 because the input data starts at 1 and goes to 9 but the vector starts from 0 and goes to 8

        crates[movement_3] += crates[movement_2].substr(crates[movement_2].size() - movement_1); // Concat the crates to the given stack in current order
        crates[movement_2] = crates[movement_2].substr(0, crates[movement_2].size() - movement_1);  // Remove the crates from the old stack
        std::cout << "Crates moved" << std::endl << std::endl;
    }

    printList();

    return 0;
}

void printList(void)
{
    string output;

    std::cout << "Printing list" << std::endl;
    
    for(int i = 0; i < crates.size(); ++i)
    {
        if(!crates[i].empty()) // Move through crates and only add crates to output if there are any
        {
            output += crates[i].back(); // Finds the top crate of each stack and concats it in output
        }
    }
    
    std::cout << output << std::endl;
}