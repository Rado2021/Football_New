#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int NumOfTeams;
    int exitpgm = 0;
    char response;
    do
    {
        cout << "\nEnter the number of teams participating ";
        cin >> NumOfTeams;
        if (NumOfTeams == 0 || NumOfTeams == 1)
        {
            cout << "\nNumber of teams cannot be one or zero..\nPlease enter a valid number..";
            exitpgm = 1;
        }
        else if (NumOfTeams % 2 != 0)
        {
            cout << "\nTeam number should be even";
            exitpgm = 1;
        }
       
       if(!exitpgm)
       {
           int matchlist[NumOfTeams][NumOfTeams];
           for (int i=1; i <= NumOfTeams; i++)
           {
               for (int j=1; j <= NumOfTeams; j++)
               {
                   matchlist[i][j]=0;
               }
           }
           for (int i=1; i <= NumOfTeams; i++)
           {
               for (int j=1; j <= NumOfTeams; j++)
               {
                   if (i !=j)
                       matchlist[i][j] = 1;
               }
           }
           cout << "\nScheduled Matches are: \n\n";
           for (int i=1; i <= NumOfTeams; i++)
           {
               for (int j=1; j <= NumOfTeams; j++)
               {
                   if (matchlist[i][j] == 1)
                   {
                       cout<< "\n"<< i << "(Home) && " << j <<"(Away)";
                       cout<< "\n"<< i << "(Away) && " << j <<"(Home)";
                   }      
                }
            }
    }
    cout << "\nDo you want to continue?(Y/N)";
    cin >> response;
    if (response == 'Y' || response == 'y')
        exitpgm = 0;
    } while(exitpgm != 1);

    return 0;
}

