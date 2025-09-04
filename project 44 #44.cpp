#include <iostream>

using namespace std;

int main()
{
    short int  day;
    cout << "please enter day :" << endl;
    cin >> day;


        switch (day) {

        case (day = 1):
            cout << "it is sunday" << endl;
            break;

        case (day = 2):
            cout <<  "it is monday" << endl;
            break;

        case  (day == 3):
            cout <<  "it is tuesday"  << endl;
            break;

        case (day = 4):
            cout << "it is wednesday"  << endl;
            break;

        case (day = 5):
            cout << "it is thursday" << endl;
            break;

        case (day = 6):
                cout << "it is friday" << endl;
                break;

        case (day = 7):
            cout << "it is saturday" << endl;
            break;

        default:
            cout << "wrong day" << endl;

        }
 
    return 0;
}
