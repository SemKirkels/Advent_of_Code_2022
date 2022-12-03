with open('Input.txt', 'r') as inputFile:                                           # Open the file Input.txt in read modus
    inputData = inputFile.read().strip()                                            # Read from the file

rucksacks = inputData.split('\n')                                                   # Split the data at each '\n'

idx = 0                                                                             # Define new variable idx (index)
priority_question_2 = 0                                                             # Define new variable priority_question_2

while idx < len(rucksacks):                                                         # While idx is smaller than the length of the line
    r_1 = rucksacks[idx]                                                            # Save line one in r_1
    r_2 = rucksacks[idx + 1]                                                        # Save line one in r_2
    r_3 = rucksacks[idx + 2]                                                        # Save line one in r_3

    for item in r_1:                                                                # Move through the line input while there are items in it
        if item in r_2 and item in r_3:                                             # Check if the character is in r_2 and in r_3
            if item.islower(): 
                value = ord(item) - 96                                              # Get the value of the letter (item) substract 96 when item is lowercase
            else:
                value = ord(item) - 64 + 26                                         # Get the value of the letter substract 64 and add 26 when item is uppercase
            priority_question_2 += value                                            # Save the value of item in priority_question_2
            idx += 3                                                                # Up the idx by 3 (Because there are 3 rucksacks)
            break                                                                   # Break from the loop

print('The priority for question 2 is: ' + str(priority_question_2))