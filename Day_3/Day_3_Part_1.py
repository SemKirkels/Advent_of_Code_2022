with open('Input.txt', 'r') as inputFile:                                       # Open the file Input.txt in read modus
    inputData = inputFile.read().strip()                                        # Read from the file

rucksacks = inputData.split('\n')                                               # Split the data at each '\n'

priority_question_1 = 0                                                         # Define new variable priority_question_1

for rucksack in rucksacks:
    length = len(rucksack)                                                      # Get the number of variables in each line and save them in variable lenght
    compartment_1 = rucksack[:length // 2]                                      # Get the first half of the input line and save it in compartment_1
    compartment_2 = rucksack[length // 2:]                                      # Get the second half of the input line and save it in compartment_2
    
    for item in compartment_1:                                                  # Go though the input line for as long as there are items in the list
        if item in compartment_2:                                               # If the item in compartment_1 is in compartment_2 execute the following code
            if item.islower():
                value = ord(item) - 96                                          # Get the value of the letter (item) substract 96 when item is lowercase 
            else:
                value = ord(item) - 64 + 26                                     # Get the value of the letter substract 64 and add 26 when item is uppercase
            priority_question_1 += value                                        # Save the value in priority_question_1
            break                                                               # Break from the loop

print('The priority for question 1 is: ' + str(priority_question_1))            # Print the answer