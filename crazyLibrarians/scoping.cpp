#include <iostream>
using namespace std;

void func();
int main()
{
    int var = 5; // local variable in the main function
    cout << "In main() var is: " << var << "\n\n";
    func();
    cout << "Back in main var is: " << var << "\n\n";
    {
        cout << "In main() in a new scope var is: " << var << "\n\n";
        cout << "Creating new var in new scope. \n";
        int var = 10; // variab;e in the new scope
        // hides another variable var
        cout << "In main() in a new scope var is: " << var << "\n\n";
    }
    cout << "At end of main() var created in new scope no longer exists. \n";
    cout << "At end of main() var is: " << var << "\n";

    system("pause");
    return 0;
}

void func()
{
    int var = -5; // local variable in the func()
    cout << "In func() var is: " << var << "\n\n";
}