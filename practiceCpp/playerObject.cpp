#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct Vector
{
    float x, y, z;
};

struct Player
{
    string name;
    int hp;
    Vector position;
};

int main()
{
    Vector v;
    v.x = 20, v.y = 20, v.z = 40;
    cout << "A 3-space vector at" << v.x << "," << v.y << "," << v.z << '\n';

    Player me;
    me.name = "German Smurov";
    me.hp = 100.0f;
    Player *ptrMe; // notice
    ptrMe = &me;   // bind
    me.position.x = me.position.z = 0;

    ptrMe->hp -= 33;        // reduced the player's hp by 33
    ptrMe->name = "NoName"; // changed this name to NoName

    // test
    printf("%g\n", v.x);  // output Vector.x
    cout << &v.x << '\n'; // output address to variable
    // if i want change v.x
    Vector *changeCoord;
    changeCoord = &v;
    v.x = 10;
    cout << v.x << '\n';          // output Vector.x
    cout << &v.x << '\n';         // output address to variable
    cout << &changeCoord << '\n'; // output address to changeCoord
    // test end
    int i;
    cin >> i;
    cout << i;

    std::system("pause");
    return 0;
}