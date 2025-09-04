#include <iostream>

using namespace std;

enum en_day_week_menue { sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7 };

void show_week_day_menue()
{
    cout << "**************************************" << endl;
    cout << "               week day              " << endl;
    cout << "**************************************" << endl;
    cout << "1: sunday" << endl;
    cout << "2: monday" << endl;
    cout << "3: tuesday" << endl;
    cout << "4: wednsday" << endl;
    cout << "5: thursday" << endl;
    cout << "6: friday" << endl;
    cout << "7: saturday" << endl;
    cout << "**************************************" << endl;
    cout << "please enter the namber of day!" << endl;
}

en_day_week_menue read_day_week()
{
    en_day_week_menue day_week_menue;
    short int dwm;
    cin >> dwm;
    return (en_day_week_menue)dwm;
}

string  get_day_week(en_day_week_menue day_week_menue)
{
    switch (day_week_menue) {

    case en_day_week_menue::sun:
        return " sunday";
        break;

    case en_day_week_menue::mon:
        return " monday";
        break;

    case en_day_week_menue::tue:
        return" tuesday" ;
        break;

    case en_day_week_menue::wed:
        return "wednesday";
        break;

    case  en_day_week_menue::thu:
        return "thursday";
        break;

    case  en_day_week_menue::fri:
        return " friday" ;
        break;

    case en_day_week_menue::sat:
        return " saturday" ;
        break;

    default:
        cout << "wrong day" ;
    }
}
int main()
{
    show_week_day_menue();

    cout << "the day is" << get_day_week(read_day_week()) << endl;

    return 0;
}
