//psudocode for checking whether a player has won
bool checkWin(vector<vector<int> > vect){ //given the board itself
  int tempcounter = 0;
  for(int i = 0; i < vect.size(); i++){
    for(int j = 0; j < vect[i].size(); j++){
      if (vect[i][j] == 0){
	continue;//empty space
      }
      if (vect[i][j] == 1){ //check if the current position is a player1 move
	while(true){
	  tempcounter = 0;
	  //check if surrounding moves are also 1
	  //if theres a 1 in the current direction, add 1 to tempcounter
	  //if the counter == 4, return true
	  //if theres a 0 or 2 in the current direction, continue
	}
      }
      if (vector[i][j] == 2){
	while(true){
	  tempcounter = 0;
	  //check surrounding moves for player 2, return true if four in a row
	}
      }
    }
  }
}
