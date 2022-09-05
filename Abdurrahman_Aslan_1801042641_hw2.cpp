#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<string>
#include <sstream>
#define SIZE 7

using namespace std;

void fill_board1(vector<vector<char>> &board);
void fill_board2(vector<vector<char>> &board);
void fill_board3(vector<vector<char>> &board);
void fill_board4(vector<vector<char>> &board);
void fill_board5(vector<vector<char>> &board);
void fill_board6(vector<vector<char>> &board);
void print_board(vector<vector<char>> board);
void print_board1(vector<vector<char>> board);
void print_board2(vector<vector<char>> board);
void print_board3(vector<vector<char>> board);
void print_board4(vector<vector<char>> board);
void print_board5(vector<vector<char>> board);
void print_board6(vector<vector<char>> board);
bool is_possible(int line,char column,char direction,vector<vector<char> > &board,int board_number);
int menu(vector<vector<char>> &board);
void computer_player();
void human_player();
bool is_finish_game(vector<vector<char>> board,int board_number);
int score_game(vector<vector<char>> board,int score);
void save_game(const string file_name,int board_size,vector<vector<char>> &board,int selection,int board_number);
void split_file_name(string &fileName);
void load_file(const string file_name,int board_size,vector<vector<char>> &board,int selection,int board_number);

int main(){
    int option,selection;
    cout <<  "Do you want to play with a human player or a computer player?(1-human player 2-computer player) " << endl;
    cin >> option;
    if (option==1)
    {
        human_player();       
    }
    else if(option==2){
        computer_player();
    }
    else 
    cerr<< "please select a valid move";
return 0;
}

/*This function fills the board 1 with 'P'*/
void fill_board1(vector<vector<char>> &board)
{
    vector<char> temp;
    int i,j;
    for (i = 0; i < SIZE; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < SIZE; j++)
        {
            board[i].push_back('P');            
        }
    }
    for(i = 0; i <= 1; i++){
        for(j = 1 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 5; i <= 6; i++){
        for(j = 1 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 0; i <= 1; i++){
        for(j = 6 ; j >= 5; j--) board[i][j]= ' ';
    }
    for(i = 5; i <= 6; i++){
        for(j = 6 ; j >= 5; j--) board[i][j]= ' ';
    }
    board[2][3]= '.';
    board[1][1]= 'P';
    board[1][5]= 'P';
    board[5][1]= 'P';
    board[5][5]= 'P';
}
/*This function fills the board 2 with 'P'*/
void fill_board2(vector<vector<char>> &board)
{
    vector<char> temp;
    int i,j,size=9;
    for (i = 0; i < size; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < size; j++)
        {
            board[i].push_back('P');            
        }
    }
    for(i = 0; i <= 2; i++){
        for(j = 2 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 6; i <= 8; i++){
        for(j = 2 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 0; i <= 2; i++){
        for(j = 8 ; j >= 6; j--) board[i][j]= ' ';
    }
    for(i = 6; i <= 8; i++){
        for(j = 8 ; j >= 6; j--) board[i][j]= ' ';
    }
    board[4][4]= '.';
}
/*This function fills the board 3 with 'P'*/
void fill_board3(vector<vector<char>> &board){
    vector<char> temp;
    int i,j;
    decltype(i)size=8;
    for (i = 0; i < size; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < size; j++)
        {
            board[i].push_back('P');            
        }
    }
    for(i = 0; i <= 2; i++){
        for(j = 1 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 6; i <= 7; i++){
        for(j = 1 ; j >= 0; j--) board[i][j]= ' ';
    }
    for(i = 0; i <= 2; i++){
        for(j = 7 ; j >= 5; j--) board[i][j]= ' ';
    }
    for(i = 6; i <= 7; i++){
        for(j = 8 ; j >= 6; j--) board[i][j]= ' ';
    }
    board[4][4]= '.';
}
/*This function fills the board 4 with 'P'*/
void fill_board4(vector<vector<char>> &board)
{
    vector<char> temp;
    int i,j;
    for (i = 0; i < SIZE; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < SIZE; j++)
        {
            board[i].push_back('P');            
        }
    }
    for(i = 0; i <= 1; i++){
        for(j = 1 ; j >= 0; j--)    board[i][j]= ' ';
    }
    for(i = 5; i <= 6; i++){
        for(j = 1 ; j >= 0; j--)    board[i][j]= ' ';
    }
    for(i = 0; i <= 1; i++){
        for(j = 6 ; j >= 5; j--)    board[i][j]= ' ';           
        
    }
    for(i = 5; i <= 6; i++){
        for(j = 6 ; j >= 5; j--)    board[i][j]= ' ';
    }
    board[3][3]= '.';
}
/*This function fills the board 5 with 'P'*/
void fill_board5(vector<vector<char>> &board)
{
    vector<char> temp;
    int i,j,size=9;
    for (i = 0; i < size; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < size; j++)
        {
            board[i].push_back('P');            
        }
    }
    i = 0;
    for (j = 0; j < 4 ; j++) board[i][j]= ' '; 
    for (j = 5; j < size ; j++)    board[i][j]= ' ';      
    
    i = 1;
    for (j = 0; j < 3 ; j++)    board[i][j]= ' ';            
    for (j = 6; j < size ; j++)    board[i][j]= ' ';

    i = 2;
    for (j = 0; j < 2 ; j++)    board[i][j]= ' ';            
    for (j = 7; j < size ; j++)    board[i][j]= ' ';

    i = 3;
    for (j = 0; j < 1 ; j++)    board[i][j]= ' ';            
    for (j = 8; j < size ; j++)    board[i][j]= ' ';    

    i = 5;
    for (j = 0; j < 1 ; j++)    board[i][j]= ' ';
    for (j = 8; j < size ; j++)    board[i][j]= ' ';

    i = 6;
    for (j = 0; j < 2 ; j++)    board[i][j]= ' ';
    for (j = 7; j < size ; j++)    board[i][j]= ' ';
    i = 7;
    for (j = 0; j < 3 ; j++)    board[i][j]= ' ';
    for (j = 6; j < size ; j++)    board[i][j]= ' ';
    i = 8;
    for (j = 0; j < 4 ; j++)    board[i][j]= ' ';
    for (j = 5; j < size ; j++)    board[i][j]= ' ';    
    board[4][4]= '.';
}
/*This function fills the board 6 with 'P'*/
void fill_board6(vector<vector<char>> &board){
    vector<char> temp;
    int i,j,size=5;
    for (i = 0; i < size; i++)
    {   
        board.push_back(vector<char>());
        for (j = 0; j < size; j++) board[i].push_back('P');
    }
    i=0;
    for (j = 0; j < size-1 ; j++)    board[i][j]= ' ';
    i++;
    for (j = 0; j < size-2 ; j++)    board[i][j]= ' ';
    i++;
    for (j = 0; j < size-3 ; j++)    board[i][j]= ' ';
    i++;
    for (j = 0; j < size-4 ; j++)    board[i][j]= ' ';
    board[0][4] = '.';  
}
/*This function prints the game board 1 on the screen*/
void print_board(vector<vector<char>> board){
    int i,j;
    cout << " a" << " b" << " c" << " d" << " e" << " f" << " g" << endl ;
    
        for(i=0;i<SIZE;i++){
            cout << i+1 ;
            for(j=0;j<SIZE;j++){
                cout << board[i][j] << ' ' ;
            }
            cout << endl;
        }
}
/*This function prints the game board 2 on the screen*/
void print_board2(vector<vector<char>> board1){
    int i,j,size=9;
    cout << " a" << " b" << " c" << " d" << " e" << " f" << " g" << " h" << " i" << endl ;
        for(i=0;i<size;i++){
            cout << i+1 ;
            for(j=0;j<size;j++){
                cout << board1[i][j] << ' ' ;
            }
            cout << endl;
        }
}
/*This function prints the game board 3 on the screen*/
void print_board3(vector<vector<char>> board){
    int i,j,size=8;
    cout << " a" << " b" << " c" << " d" << " e" << " f" << " g" << " h" << endl ;
    
        for(i=0;i<size;i++){
            cout << i+1 ;
            for(j=0;j<size;j++){
                cout << board[i][j] << ' ' ;
            }
            cout << endl;
        }
}
/*This function prints the game board 4 on the screen*/
void print_board4(vector<vector<char>> board){
    int i,j;
    cout << " a" << " b" << " c" << " d" << " e" << " f" << " g" << endl ;
    
        for(i=0;i<SIZE;i++){
            cout << i+1 ;
            for(j=0;j<SIZE;j++){
                cout << board[i][j] << ' ' ;
            }
            cout << endl;
        }
}
/*This function prints the game board 5 on the screen*/
void print_board5(vector<vector<char>> board){
    int i,j,size=9;
    cout << " a" << " b" << " c" << " d" << " e" << " f" << " g" << " h" << " i" << endl ;
    
        for(i=0;i<size;i++){
            cout << i+1 ;
            for(j=0;j<size;j++){
                cout << board[i][j] << ' ' ;
            }
            cout << endl;
        }
}
/*This function prints the game board 6 on the screen*/
void print_board6(vector<vector<char>> board){
    int i,j,size=5;
    cout << "     a" << " b" << " c" << " d" << " e" << endl ;
    
        for(i=0;i<5;i++){
            if(i<5)  cout << i+1 ;
            for(j=0;j<i;j++) cout << " ";
            for(j=0;j<size;j++){
                cout << board[i][j] << ' ' ; 
            }
            cout << endl;
        }
}
/* this function calls the board the user wants to play  */
int menu(vector<vector<char>> &board,int choise){
    
    switch (choise)
    {
    case 1:
        fill_board1(board);
        print_board(board);
        return 1;
    case 2:
        fill_board2(board);  
        print_board2(board);
        return 2;
    case 3:     
        fill_board3(board);  
        print_board3(board);
        return 3;
    case 4:
        fill_board4(board);
        print_board4(board);
        return 4;
    case 5:
        fill_board5(board);  
        print_board5(board);
        return 5;
    case 6:
        fill_board6(board);  
        print_board6(board);
        return 6;
    }
    return -1;
}
/* human player plays the game in this function */
void human_player(){
    vector<vector<char>> board;
    char column,move,direction;
    int line,choise,score;
    int size;
    int selection;
    string file_name;
    string input;
    cout << "please select the type of board you want to play" << endl ;
    cin >> choise;
    if(choise==1 || choise == 4) size=7;
    else if(choise==2 || choise == 5) size=9;
    else if(choise==3) size=8;
    else if(choise==6) size=5;
    int board_number = menu(board,choise);
    while (1)
    {
		cout << "User should enter the move:(ex: A1-R)\n";
        cout<<"ex(LOAD FILE.TXT) to load the game or ex(SAVE FILE.TXT) to save the game:";
        cin >> input;
        if(input.size() == 4 && input[2] == '-'){
            line  = int(input[1]) -48;
            column = input[0];
            direction = input[3];

            
            if(is_possible(line,column,direction,board,board_number) == false){
                cerr<< "User entered wrong move.Try Again!\n";
            }              
        }
        else if(input[0] == 'S' && input[1] == 'A' && input[2] == 'V' && input[3] == 'E' ){
            
            split_file_name(input);
            save_game(input,size,board,1,board_number);
        }
        else if (input[0] == 'L' && input[1] == 'O' && input[2] == 'A' && input[3] == 'D' ){
            split_file_name(input);
            load_file(input,size,board,1,board_number);
        }        
        else 
            cerr<< "User entered wrong move.Try Again!\n";
        if (board_number == 1) print_board(board);
        else if(board_number == 2) print_board2(board);
        else if(board_number == 3) print_board3(board);
        else if(board_number == 4) print_board4(board);
        else if(board_number == 5) print_board5(board);
        else if(board_number == 6) print_board6(board);   
        if (is_finish_game(board,board_number)==true)
        {
            cout << "score: " << score_game(board,score);
            break;
        }             
    }
}
/* computer player plays the game in this function */
void computer_player(){
    vector<vector<char>> board;
    srand(time(0));
    int random_line,random_column,score,size;
    int rand_number = (rand() % 6 + 1) ;
    int board_number = menu(board,rand_number);
    string column =  "ABCDEFGHI";
    string direction = "RLUD";
    string input,temp;
    int i=0;
    while (1)
    {   
        if (board_number == 1 || board_number ==4)
        {
        size = 7;
        random_line =  (rand() % 7 + 1) ;
        random_column = (rand() % 7 );
        }
        else if (board_number == 2 || board_number == 5)
        {
        size = 9;
        random_line =  (rand() % 9 + 1) ;
        random_column = (rand() % 9 );
        }
        else if (board_number == 3)
        {
        size = 8;
        random_line =  (rand() % 8 + 1) ;
        random_column = (rand() % 8 );
        }      
        else if (board_number == 6)
        {
        size = 5;
        random_line =  (rand() % 5 + 1) ;
        random_column = (rand() % 5 );
        }       
        int random_direction = (rand() % 4 );
        if (is_possible(random_line,column[random_column],direction[random_direction],board,board_number) == true)
        {           
            cout << column[random_column] << random_line << direction[random_direction] <<  endl ;
            cout <<"ex(LOAD FILE.TXT) to load the game or ex(SAVE FILE.TXT) to save the game:" << endl ;
            cout << "enter any entry to continue" << endl;
            cin >> input ;

            if(input[0] == 'S' && input[1] == 'A' && input[2] == 'V' && input[3] == 'E' ){
                split_file_name(input);
                save_game(input,size,board,2,board_number); 
            }
            else if (input[0] == 'L' && input[1] == 'O' && input[2] == 'A' && input[3] == 'D' ){
                split_file_name(input);
                load_file(input,size,board,2,board_number);
            }
            

            if (board_number == 1) print_board(board); 
            else if(board_number == 2) print_board2(board);
            else if(board_number == 3) print_board3(board);
            else if(board_number == 4) print_board4(board);
            else if(board_number == 5) print_board5(board);
            else if(board_number == 6) print_board6(board);              
        }


        if (is_finish_game(board,board_number)==true)
        {
            cout << "score: " << score_game(board,score);
            break;
        }
    }
}
/* this function checks if the game is over */
bool is_finish_game(vector<vector<char>> board,int board_number){
    int i,j;
    for (i = 0; i < board.size() ; i++)
    {
        for (j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 'P')
            {
                if (is_possible(i+1,char(j+65),'R',board,board_number)==true)
                    return false;
                else if (is_possible(i+1,char(j+65),'D',board,board_number)==true)
                    return false;
                else if (is_possible(i+1,char(j+65),'U',board,board_number)==true)
                    return false;
                else if (is_possible(i+1,char(j+65),'L',board,board_number)==true)
                    return false;
            }         
        }      
    }
    return true;
}
/* this function finds the score */
int score_game(vector<vector<char>> board,int score){
    int i,j,count=0;
    for (i = 0; i < board.size() ; i++)
    {
        for (j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 'P')
            {
                count++;
            }      
        }
    }
    score = count;
    return score;
}
/* this function checks if the moves made are valid */ 
bool is_possible(int line,char column,char direction,vector<vector<char>> &board,int board_number){
	int temp = column - 65;
    line = line-1 ; 
    switch (board_number)
    {
    case 1:
        if (line < 0 || line > 7 || temp < 0 || temp > 7 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 7 && temp+1 > 0  && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp] = '.';
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';

                return true;
            } 
            else return false;  
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-2 > 0 && temp-1 < 7 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 7 && line -2 > 0 && board[line-1][temp] == 'P' && board[line-2][temp] == '.')
            {
                board[line-1][temp] = '.';
                board[line-2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+1 > 0 && line+2 < 7 && board[line+1][temp] == 'P' && board[line+2][temp] == '.' )
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;  
        }
        else return false;

        break;        
    case 2:
        if (line < 0 || line > 9 || temp < 0 || temp > 9 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 9 && temp+1 >0 && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-2 > 0 && temp-1 < 9 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;  
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 9 && line-2 > 0 && board[line-1][temp] == 'P' && board[line-2][temp] == '.')
            {
                board[line-1][temp] = '.';
                board[line-2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+1 > 0 && line+2 < 9 && board[line+1][temp] == 'P' && board[line+2][temp] == '.')
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else return false; 
        break;
    case 3:
        if (line < 0 || line > 8 || temp < 0 || temp > 8 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 8 && temp+1 > 0 && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-2 > 0 && temp-1 < 8 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 8 && line-2 > 0 && board[line-1][temp] == 'P' && board[line-2][temp] == '.')
            {
                board[line-1][temp] = '.';
                board[line-2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+1 > 0 && line+2 < 8 &&  board[line+1][temp] == 'P' && board[line+2][temp] == '.')
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else return false;
        break;
    case 4:
        if (line < 0 || line > 7 || temp < 0 || temp > 7 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 7 && temp+1 > 0 && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-1 < 7 && temp-2 > 0 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }  
            else return false; 
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 7 && line-2 >0 && board[line-1][temp] == 'P' && board[line-2][temp] == '.')
            {
                board[line-1][temp] = '.';
                board[line-2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }   
            else return false;
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+2 < 7 && line+1 > 0 && board[line+1][temp] == 'P' && board[line+2][temp] == '.')
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }  
            else return false; 
        }
        else return false;
        break;
    case 5:
        if (line < 0 || line > 9 || temp < 0 || temp > 9 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 9 && temp+1 > 0 && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';
                board[line][temp] = '.';
                return true;
            } 
            else return false;  
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-2 > 0 && temp-1 <9 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 9 && line-2 > 0 && board[line-1][temp] == 'P' && board[line-2][temp] == '.')
            {
                board[line-1][temp] = '.';
                board[line-2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+1 > 0  && line+2 < 9 &&  board[line+1][temp] == 'P' && board[line+2][temp] == '.')
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else return false;
        break;
    case 6:
        if (line < 0 || line > 5 || temp < 0 || temp > 5 || (direction != 'R' && direction != 'L' && direction != 'D' && direction != 'U'))
        {
            return false;
        }
        else if(board[line][temp] == 'P' && direction == 'R'){
            if (temp+2 < 5 && temp+1 > 0 && board[line][temp+1] == 'P' && board[line][temp+2] == '.')
            {
                board[line][temp+1] = '.';
                board[line][temp+2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }
        else if(board[line][temp] == 'P' && direction == 'L'){
            if (temp-1 < 5 && temp-2 > 0 && board[line][temp-1] == 'P' && board[line][temp-2] == '.')
            {
                board[line][temp-1] = '.';
                board[line][temp-2] = 'P';
                board[line][temp] = '.';
                return true;
            }
            else return false;   
        }     
        else if(board[line][temp] == 'P' && direction == 'U'){
            if (line-1 < 5 && line-2 > 0 && board[line-1][temp] == 'P' && (board[line-2][temp-1] == '.' || board[line-2][temp+1] == '.'))
            {
                board[line-1][temp] = '.';
                board[line-2][temp+1] = 'P';
                board[line][temp] = '.';
                return true;
            } 
            else return false;  
        }        
        else if(board[line][temp] == 'P' && direction == 'D'){
            if (line+2 < 5 && line+2 > 0 && board[line+1][temp] == 'P' && board[line+2][temp] == '.')
            {
                board[line+1][temp] = '.';
                board[line+2][temp] = 'P';
                board[line][temp] = '.';
                return true;
            } 
            else return false;  
        }
        else return false;
        break;    
    default:
        return false;
    }
}
/*this function saves the game to file */
void save_game(const string file_name,int board_size,vector<vector<char>> &board,int selection,int board_number){

	ofstream outStream;
	outStream.open(file_name);

	if(selection==1){ outStream<<"1"<<endl;}	//it is recording the selection
	else{outStream<<"2"<<endl;}

    outStream<<board_number<<endl;
	outStream<<board_size<<endl;				//it records board_size

	for(int i=0;i<board_size;i++){
		for(int j=0;j<board_size;j++)			
			outStream<<board[i][j];
        outStream<<endl;
    }
	outStream.close();
}
/*this function split the strings */
void split_file_name(string &fileName){
    
    string S; 
   
    getline(cin, S);
   
    stringstream X(S);   
    
    while (getline(X, fileName, ' ')) {  

    }  
    
}
/*this function makes load */ 
void load_file(const string file_name,int board_size,vector<vector<char>> &board,int selection,int board_number){
	
	int i,j;
	ifstream inStream;
	inStream.open(file_name);

    inStream>>board_number;
	inStream>>selection;			
	inStream>>board_size;

    
	for(i=0;i<board_size;i++)
		for(j=0;j<board_size;j++)
                if (board[i][j] == ' '){
                    continue;
                }
                else
                {
                    inStream>>board[i][j];  
                } 

	inStream.close( );
}
