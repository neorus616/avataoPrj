#include <string>
#include <iostream>
using namespace std;

void attack(int& dHp, int& wHp){
    cout << "For how long do you want to attack?" << endl;
    unsigned int time;
    cin >> time;
    if(time < 1){
        cout << "You can't attack for less then 1 minute" << endl;
        return;
    }
    dHp = dHp - (time*100);
    wHp = wHp - (time*10);
}

void heal(int& dHp, int& wHp){
    cout << "For how long do you want to heal?" << endl;
    int time;
    cin >> time;
    if(time < 1){
        cout << "You can't heal for less then 1 minute" << endl;
        return;
    }
    dHp = dHp + (time*100);
    wHp = wHp + (time*5);
}

int main(){
    bool fight = true;
    int drakeHp = 10000;
    int warriorHp = 500;

    cout << "Welcome warrior! we have been waiting for you." << endl;
    cout << "we need your help in defeating the mighty dragon, this way.." << endl;
    cout << "The dragon has destroyed half of our village with his fire breath" << endl;
    cout << "We arrived, he in this cave, i will give you this magic beans that will heal you when ever you choose to use them, but be careful, when ever you choose to heal yourself, the dragon will heal him self too" << endl;
    cout << "Good luck, and be careful!" << endl;

    while(fight){
        cout << "Dragon health: " << drakeHp << endl;
        cout << "Your's health: " << warriorHp << endl;
        cout << "Choose your move:" << endl;
        cout << "1) Attack" << endl;
        cout << "2) Heal" << endl;
        cout << "3) Run" << endl;
        int choose;
        cin >> choose;
        switch(choose){
            case 1:
                attack(drakeHp, warriorHp);
                break;
            case 2:
                heal(drakeHp, warriorHp);
                break;
            case 3:
                fight = false;
                break;
            default:
                cout << "wrong input, try again.." << endl;
                break;
        }
        if(drakeHp < 1 || warriorHp < 1)
            fight = false;
    }

    if(!fight){
        if(warriorHp < 1){
            cout << "you lose, too bad, we had hope in you" << endl;
        } else if(drakeHp < 1){
            cout << "You did it! you saved us all!" << endl;
            cout << "in reward i want to tell you this secret code: " << endl;
            cout << "{Y0u_$ucc3sfu11y_D3f3@t3d_7h3_Dr@g0n}" << endl;
        }
    }
}
