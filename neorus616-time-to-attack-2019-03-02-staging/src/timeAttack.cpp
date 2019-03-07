#include <string>
#include <iostream>
#include <unistd.h>
#include <Windows.h>
#include <chrono>
using namespace std;

void sixteenth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==3){
	Sleep(750);
    cout << "Success!" << endl;
    }else
    cout << "Wrong" << endl;
}

void fifteenth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==0){
	Sleep(750);
    sixteenth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void fourteenth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==0){
	Sleep(750);
    fifteenth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void thirteenth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==7){
	Sleep(750);
    fourteenth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void twelfth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==1){
	Sleep(750);
    thirteenth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void eleventh(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==9){
	Sleep(750);
    twelfth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void tenth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==9){
	Sleep(750);
    eleventh(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void ninth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==2){
	Sleep(750);
    tenth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void eighth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==1){
	Sleep(750);
    ninth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void seventh(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==6){
	Sleep(750);
    eighth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void sixth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==1){
	Sleep(750);
    seventh(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void fifth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==2){
	Sleep(750);
    sixth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void fourth(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==1){
	Sleep(750);
    fifth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void third(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==9){
	Sleep(750);
    fourth(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void second(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==9){
	Sleep(750);
    third(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

void first(string guess){
    int x = (int) guess[guess.size()-1] - 48;
    if(x==3){
	Sleep(750);
    second(guess.substr(0, guess.size()-1));
    }else
    cout << "Wrong" << endl;
}

int main(){
    string guess;
    cout << "Guess the number I'm thinking about " << endl;
    cin >> guess; //the right answer is 3007199216121993
    
    auto begin = chrono::high_resolution_clock::now();    
    
    first(guess);
    
    auto end = chrono::high_resolution_clock::now();    
    auto dur = end - begin;
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
    
    cout << "It took " << ms << "ms to verify" << endl;
    return 0;
}