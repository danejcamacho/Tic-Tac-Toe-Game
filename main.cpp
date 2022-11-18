#include <iostream>
#include <array>
#include <utility>
#include <string>
#include <unordered_map>
#include <list>



int main(){
    //Create array to recognize win
    std::unordered_map<unsigned, char> gameMap = {
        {0, '0'},
        {1, '1'},
        {2, '2'},
        {3, '3'},
        {4, '4'},
        {5, '5'},
        {6, '6'},
        {7, '7'},
        {8, '8'}
    };

    std::cout << "TIC TAC TOE -- Player 1(X) & Player 2 (O) \n";

    bool finishedGame = false;
    int player = 1;

    while(!finishedGame){
        //player n's turn
        std::cout << "It is PLAYER "<< player <<"'s turn: \n \n";

        //draw the board
        /*std::cout << "    |      |    \n"
                    << "____|______|____\n"
                    << "    |      |    \n"
                    << "    |      |    \n"
                    << "____|______|____\n"
                    << "    |      |    \n"
                    << "    |      |    \n \n" */

        std::cout   << " " << gameMap[0] << "   |   "<< gameMap[1]<<"   |  "<< gameMap[2] << "  \n"
                    << "_____|_______|_____\n"
                    << "     |       |    \n"
                    << "  " << gameMap[3] << "  |   " << gameMap[4] << "   |  " << gameMap[5] <<"  \n"
                    << "_____|_______|_____\n"
                    << "  "<< gameMap[6] << "  |   " << gameMap[7] << "   |  " << gameMap[8] << "  \n"
                    << "     |       |    \n \n";
        if(//Horizontals
            (gameMap[0] == 'X' && gameMap[1] == 'X' && gameMap[2] == 'X') ||
            (gameMap[3] == 'X' && gameMap[4] == 'X' && gameMap[5] == 'X') ||
            (gameMap[6] == 'X' && gameMap[7] == 'X' && gameMap[8] == 'X') ||
            //Verticals
            (gameMap[0] == 'X' && gameMap[3] == 'X' && gameMap[6] == 'X') ||
            (gameMap[1] == 'X' && gameMap[4] == 'X' && gameMap[7] == 'X') ||
            (gameMap[2] == 'X' && gameMap[5] == 'X' && gameMap[8] == 'X')||
            //Diagonals
            (gameMap[0] == 'X' && gameMap[4] == 'X' && gameMap[8] == 'X') ||
            (gameMap[2] == 'X' && gameMap[4] == 'X' && gameMap[6] == 'X') ){
                finishedGame = true;
                std::cout << "Player 1 Wins!";
                break;
            }
        if(//Horizontals
            (gameMap[0] == 'O' && gameMap[1] == 'O' && gameMap[2] == 'O') ||
            (gameMap[3] == 'O' && gameMap[4] == 'O' && gameMap[5] == 'O') ||
            (gameMap[6] == 'O' && gameMap[7] == 'O' && gameMap[8] == 'O') ||
            //Verticals
            (gameMap[0] == 'O' && gameMap[3] == 'O' && gameMap[6] == 'O') ||
            (gameMap[1] == 'O' && gameMap[4] == 'O' && gameMap[7] == 'O') ||
            (gameMap[2] == 'O' && gameMap[5] == 'O' && gameMap[8] == 'O')||
            //Diagonals
            (gameMap[0] == 'O' && gameMap[4] == 'O' && gameMap[8] == 'O') ||
            (gameMap[2] == 'O' && gameMap[4] == 'O' && gameMap[6] == 'O') ){
                finishedGame = true;
                std::cout << "Player 2 Wins!";
                break;
            }
        //input a number
        int choice;
        do{
            std::cout << "Enter a choice, player " << player << ": ";
            std::cin >> choice;

            //check if number is within range and not already used
        }while((choice < 0 || choice > 8) 
                || (gameMap[choice] != '0'
                && gameMap[choice] != '1'
                && gameMap[choice] != '2'
                && gameMap[choice] != '3'
                && gameMap[choice] != '4'
                && gameMap[choice] != '5'
                && gameMap[choice] != '6'
                && gameMap[choice] != '7'
                && gameMap[choice] != '8'));

        player == 1 ? gameMap[choice] = 'X' : gameMap[choice] = 'O';
        player == 1 ? player = 2 : player = 1;

        
    }
    
}
