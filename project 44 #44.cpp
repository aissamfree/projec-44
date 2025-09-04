#include <iostream>

using namespace std;

int main()
{
    short int  day;
    cout << "please enter day :" << endl;
    cin >> day;


        switch (day) {

        case 1:
            cout << "it is sunday" << endl;
            break;

        case 2:
            cout <<  "it is monday" << endl;
            break;

        case  3:
            cout <<  "it is tuesday"  << endl;
            break;

        case 4:
            cout << "it is wednesday"  << endl;
            break;

        case  5:
            cout << "it is thursday" << endl;
            break;

        case  6:
                cout << "it is friday" << endl;
                break;

        case 7:
            cout << "it is saturday" << endl;
            break;

        default:
            cout << "wrong day" << endl;

        }
 
    return 0;
}
