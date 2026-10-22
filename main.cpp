#include <iostream>
#include <ctime>

using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getuserchoice();
    cout << "your choice is: ";
    showchoice(player); 

    computer = getcomputerchoice();
    cout << "computers choise: ";
    showchoice(computer);

    choosewinner(player, computer);

    return 0;
}
char getuserchoice(){

    char player;
    cout << "rock paper scissors game\n";
    do{
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    }while(player != 'p' && player != 'r' && player != 's');

    return player;
}
char getcomputerchoice(){

    srand(time(0));
    int num = rand() % 3 + 1; 

    switch(num){
        case 1: 
            return 'r'; //we already break with the return so no break;
        case 2: 
            return 'p';
        case 3: 
            return 's';
    }
    return 0;
}
void showchoice(char choice){
   
    switch (choice){
        case 'r': 
            cout << "rock\n";
                    break;
        case 'p': 
            cout << "paper\n";
                    break;
        case 's': 
            cout << "scissors\n";
                    break;
    }
}
void choosewinner(char player, char computer){
    
    switch (player)
    {
    case 'r':
        if(computer == 'r'){
            cout << "tie!\n";
        }
        else if(computer == 'p'){
            cout << "you lost!\n";
        }
        else{
        cout << "you won!\n";
        }
        break;
}

    switch (player)
    {
    case 'p':
        if(computer == 'r'){
            cout << "you won!\n";
        }
        else if(computer == 'p'){
            cout << "tie!\n";
        }
        else{
        cout << "you lost!\n";
        }
        break;
}

    switch (player)
    {
    case 's':
        if(computer == 'r'){
            cout << "you lost!\n";
        }
        else if(computer == 'p'){
            cout << "you won!\n";
        }
        else{
        cout << "tie!\n";
        }
        break;
}
}
