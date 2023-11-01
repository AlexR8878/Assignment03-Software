#include <stdio.h>
#include <string.h>

//Function to determine winner of rock paper scissors
char* DiscoverWinner(const char Player1[], const char Player2[]) {
    if (strcmp(Player1, Player2) == 0) {    //Use strcmp to compare Player1 and Player1 if they input the same value resulting in a Draw
        if (strcmp(Player1, "Rock") == 0 || strcmp(Player1, "Paper") == 0 || strcmp(Player1, "Scissors") == 0) {
            return "Draw";
        }
        return "Invalid";
    }
    else if (
        (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) ||     //All the cases in which player1 can win rock, paper, sissors 
        (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0) ||
        (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)
        ) {
        return "Player1";   //Retrun player1 as the winner 
    }
    else if (
        (strcmp(Player2, "Rock") == 0 && strcmp(Player1, "Scissors") == 0) ||   //All the cases in which player2 can win rock, paper, sissors 
        (strcmp(Player2, "Scissors") == 0 && strcmp(Player1, "Paper") == 0) ||
        (strcmp(Player2, "Paper") == 0 && strcmp(Player1, "Rock") == 0)
        ) {
        return "Player2";   //Return player2 as the winner 
    }
    else {                 //If the input is not as stated return invalid
        return "Invalid";
    }
}

int main(void) {

    return 0;

}