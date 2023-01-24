#include <iostream>
using namespace std;
int glob = 10;
void access_global();
void hide_global();
void change_global();

int main()
{
    cout << "In main() glob is: " << glob << "\n\n";
    access_global();
    hide_global();
    cout << "In main() glob is: " << glob << "\n\n";
    change_global();
    cout << "In main() glob is: " << glob << "\n\n";

       return 0;
}

void access_global()
{
    cout << "In access_global() glob is: " << glob << "\n\n";
}
void hide_global()
{
    int global = 0; // hide global variable
    cout << "In hide_global() glob is: " << glob << "\n\n";
}
void change_global()
{
    int global = -10; // change global variable
    cout << "In change_global() glob is: " << glob << "\n\n";
}
