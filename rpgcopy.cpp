#include <iostream>
#include <string>
using namespace std;
class player{
    public:
    string name;
    int health;
    int melee_dmg;
    int bow_dmg;
    int shield;
    int dex;
    int magic;
    int resolve;
    int x , y;
    int speed;

    void move(int xa, int ya, int){
        x += xa * speed;
        y += ya * speed;
    }

    void display(){
    cout << "Name : " <<name << endl;
    cout << "Health : " << health << endl;
    cout << "Melee Damage : " << melee_dmg << endl;
    cout << "Bow Damage : " << bow_dmg << endl;
    cout << "Shiel : " <<shield << endl;
    cout << "Dexterity : " << dex << endl;
    cout << "Magic : " << magic << endl;
    cout << "Resolve : " << resolve << endl;
    cout <<  "Speed : " << speed << endl;

    }
};
class warrior : public player{
    public:
    warrior(){
    name = "ingydar";
    health = 60;
    melee_dmg = 11;
    bow_dmg = 2;
    shield = 9;
    dex = 0;
    magic = 0;
    resolve = 0;
    x = 0, y = 0;
    speed = 2;
    }
};
class ranger : public player{
    public:
    ranger(){
    name = "lenker";
    health = 45;
    melee_dmg = 2;
    bow_dmg = 8;
    shield = 4;
    dex = 7;
    magic = 2;
    resolve = 4;
    x = 0, y = 0;
    speed = 9;

    }
};
class wizard : public player{
    public:
    wizard(){
    name = "oso";
    health = 35;
    melee_dmg = 4;
    bow_dmg = 2;
    shield = 2;
    dex = 5;
    magic = 16;
    resolve = 9;
    x , y = 0;
    speed = 5;

    }
};
int main(){

    return 0;
}