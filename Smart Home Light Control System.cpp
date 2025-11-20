// Smart Home Light Control System.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    int choice;
    int light_on = 0 ; // 0 = Off, 1 = On

    do
    {
        cout << " Liana's Smart Home Light " << endl;
       
        cout << " Room: Bedroom " << endl;

        cout << " ------ Display Menu ------ " << endl;

        cout << "----- Light Switch Menu ----- " << endl;

        cout << " (1) Turn ON " << endl;
        cout << " (2) Turn OFF " << endl;
        cout << " (3) Status " << endl;
        cout << " (4) Exit App " << endl;

        cout << " Enter Your Choice ( 1-4)  " << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                if (light_on == 0)
                {
                    light_on = 1;
                    cout << " Light is now ON " << endl;
                }

                else
                {
                    cout << " Light is already On " << endl;
                }
            }
            break;

            case 2:
            {
                if (light_on == 1)
                {
                    light_on = 0;
                    cout << " Light is now OFF " << endl;
                }

                else
                {
                    cout << " It's already OFF " << endl;
                }
            }
            break;

            case 3:
            {
                if (light_on == 1)
                {
                    cout << " Light ON " << endl;
                }

                else
                {
                    cout << " Light OFF " << endl;
                }
            }
            break;

            case 4:
            {
                cout << " Closing App " << endl;
            }
            break;

            default:
            {
                cout << " Invalid Choice " << endl;
            }
            break;
        }


    } while (choice != 4);

    return 0;
}


