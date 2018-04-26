# Group 2: Leo, Thomas, Meraz

Pre-coding commentary:

The group's spec is detailed enough to be able to work with. They gave the board state specifications (vector of vectors) and the functions we should write to implement a functioning game. However, they assume the function names to explain what should be implemented, which leaves much of the implementation untouched. For example, they say to make a function bool checkWin(), but the only specification they have for the function is that it should be run after every move. Though the reason for this function is self explanatory, they leave out parts of the function that are important to the game as well, such as a tie condition.

Post-coding commentary:

We decided to split the work by function (makeboard, makemove, and checkwin), and I wrote checkwin. There were a few times when I was unsure of what to do while writing checkwin. For example, the example that I gave above (where theres a tie) could be done in either makemove or checkwin, but it wasnt specified. You could either check if there were no moves left to be made in makemove, or if all positions were either a 1 or a 2 (player1 or player2 move) in checkwin. 