using namespace std;

#include <iostream>

using namespace std;

class TicTacToe
{
private:
    char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
    char mark[2] = {'X','O'};
    char CurrentMark;

public:
    void InitialBoard();

    int CheckResult();

    void FillToBoard(int PlayerChoice, int PlayerIndex);

};

class Player
{
private:
    int index, choice;

public:
    int getIndex()
    {
        return index;
    }

    void setIndex(int local_index)
    {
        index = local_index;
    }

    int getChoice()
    {
        return choice;
    }

    void move()
    {
        cout << "Player " << index << ", enter a number:  ";
        cin >> choice;
    }
};

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/
int TicTacToe::CheckResult()
{
    if (square[1] == square[2] && square[2] == square[3])
    return 1;
    else if (square[4] == square[5] && square[5] == square[6])
    return 1;
    else if (square[7] == square[8] && square[8] == square[9])
    	return 1;
    else if (square[1] == square[4] && square[4] == square[7])
    	return 1;
    else if (square[2] == square[5] && square[5] == square[8])
    	return 1;
    else if (square[3] == square[6] && square[6] == square[9])
    	return 1;
    else if (square[1] == square[5] && square[5] == square[9])
    	return 1;
    else if (square[3] == square[5] && square[5] == square[7])
    	return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    	return 0;
    else
        return -1;
}

void TicTacToe::InitialBoard()
{
    //clrscr();
    cout << "\n\n\tTic Tac Toe\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl << endl;
}

void TicTacToe::FillToBoard(int PlayerChoice, int PlayerIndex)
{
    CurrentMark = mark[PlayerIndex-1];

    if (PlayerChoice == 1 && square[1] == '1')
        square[1] = CurrentMark;
    else if (PlayerChoice == 2 && square[2] == '2')
        square[2] = CurrentMark;
    else if (PlayerChoice == 3 && square[3] == '3')
        square[3] = CurrentMark;
    else if (PlayerChoice == 4 && square[4] == '4')
        square[4] = CurrentMark;
    else if (PlayerChoice == 5 && square[5] == '5')
        square[5] = CurrentMark;
    else if (PlayerChoice == 6 && square[6] == '6')
        square[6] = CurrentMark;
    else if (PlayerChoice == 7 && square[7] == '7')
        square[7] = CurrentMark;
    else if (PlayerChoice == 8 && square[8] == '8')
        square[8] = CurrentMark;
    else if (PlayerChoice == 9 && square[9] == '9')
        square[9] = CurrentMark;
}

int main() {
    /* code */
    TicTacToe LocalBoard;
    Player LocalPlayer;
    int LocalIndex = 1;
    int Result = -1;

    do {
        /* code */
        LocalBoard.InitialBoard();
        LocalPlayer.setIndex(LocalIndex);
        LocalPlayer.move();
        if (LocalPlayer.getChoice() > 9 or LocalPlayer.getChoice() < 1)
        {
            cout<<"Invalid move ";
            cin.ignore();
            cin.get();
            continue;
        }
        LocalBoard.FillToBoard(LocalPlayer.getChoice(), LocalPlayer.getIndex());
        Result = LocalBoard.CheckResult();
        LocalIndex++ ;
        if (LocalIndex > 2)
        {
            LocalIndex = 1;
        }
    } while(Result == -1);

    LocalBoard.InitialBoard();
    if(Result == 1)
        cout<<"==>\aPlayer "<<LocalPlayer.getIndex()<<" win ";
    else
        cout<<"==>\aGame draw";
    cin.ignore();
    cin.get();
    return 0;
}
