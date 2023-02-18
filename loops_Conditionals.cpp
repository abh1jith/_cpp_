#include <iostream>
#include <cmath>
#include <array>
using namespace std;


int main()
{
    int secret = 7, limit = 3;
    int inp;
    do{
        limit--;
        cout << "Please enter your guess: ";
        cin >> inp;
        if(inp > secret){
            cout << "You have guessed higher. Try a lower value!" << endl;
            cout << "You have " << limit << " guess left." << endl;
            
        } else if(inp < secret){
            cout << "You have guessed higher. Try a lower value!" << endl;
            cout << "You have " << limit << " guess left." << endl;
        }

        cout << endl;
    } while(inp != secret && limit > 0);

    if(limit != 0 || inp == secret){
        cout << "Yay!\nYou Won!";
    } else{
        cout << "Sorry\nYou Lost :(";
    }
    return 0;
}
