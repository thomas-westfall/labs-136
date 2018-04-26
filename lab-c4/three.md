# Connect Four (Chris, Ibrahim, Josh)

- Board is a vector of vectors
  - Use different [non]assignments for empty space, player 1, and player 2
  - Vector representation of board will be clockwise 90 degrees
  - Vector of columns
- makeMove should accept an integer for the column
  - void makeMove (int column)
    - If move is invalid ask again within the function (overfilled columns and not on board)
  - Swap between assigning 0 and 1
- Input in parent function to makeMove
- bool checkWin (*) --> not neccesarily like this
  - Should be run after every move
- makeBoard (int row, column) --> run at beginning
