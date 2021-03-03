#include <iostream>
#include <string>

using namespace std;

// The Main Function
int main()
{
    double earn = 0.0, max = 0.0, min = 99999999999999.0, sum = 0.0;
    string Yord, Mord;

    // Year Loop
    int year;
    for (year = 1; year <= 10; year++) {

        /* 
        * Switch Case For The Ordinal
        * Skip This
        */
        switch (year)
        {
        case 1: Yord = "First";   break;    case 2:  Yord = "Second"; break;
        case 3: Yord = "Third";   break;    case 4:  Yord = "Fourth"; break;
        case 5: Yord = "Fifth";   break;    case 6:  Yord = "Sixth";  break;
        case 7: Yord = "Seventh"; break;    case 8:  Yord = "Eighth"; break;
        case 9: Yord = "Ninth";   break;    case 10: Yord = "Tenth";  break;

        default:
            break;
        }

        cout << "|------------------------------------------------" << endl
             << "|Enter The Monthly Earnings For The " << Yord << " year\n"
             << "|------------------------------------------------" << endl;

        // Month Loop
        for (size_t i = 1; i < 13; i++)
        {
            // The Ordinal Months
            if (i == 1)
                Mord = "st";
            else if (i == 2)
                Mord = "nd";
            else if (i == 3)
                Mord = "rd";
            else
                Mord = "th";

            cout << "\tThe " << i << Mord << " Month: ";
            cin >> earn;

            // Max & Min - Conditions
            if (earn > max)
            {
                max = earn;
            }
            if (earn < min)
            {
                min = earn;
            }

            // Get The Sum
            sum = sum + earn;
        }


        // The Output
        cout << endl;
        cout << "\aEarning Statics For The " << Yord << " Year"
             << "\n********************************" << endl;
        cout << "Max for year for the " << Yord << " year " << " is [ " << max << " ]" << endl;
        cout << "\tAvgerage for the " << Yord << " year " <<  "is [ " << sum / 12 << " ]" << endl;
        cout << "\t\tMin for for the " << Yord << " year " << " is [ " << min << " ]" << endl;
        cout << endl;
        
        /*
        * For Test
        cout << "Sumation for the year " << Yord << " is [ " << sum << " ]" << endl;
        */

        // Restore Values
        sum = 0.0;
        max = 0.0;
        min = 99999999999999.0;
    }
}