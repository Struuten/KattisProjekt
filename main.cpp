#include <iostream>

using namespace std;

int main()
{
    int FitingCars = 0;
    int rows = 4;
    int N;
    int cl[200];
    int L;

    cin >> N;
    cin >> L;

    for (int i = 0; i <= N-1; i++)
    {
        cin >> cl[i];
    }

   int rowNumber = 0;

    int distanceLeft[4];
    distanceLeft[0] = L;
    distanceLeft[1] = L;
    distanceLeft[2] = L;
    distanceLeft[3] = L;


    for (int i = 0; i <= N-1 ; i++)
    {

        if (distanceLeft[rowNumber] - cl[i] >= 0)
        {
            FitingCars++;
            distanceLeft[rowNumber] -=(cl[i] + 1);
            rowNumber = 0;
        }
        else
        {
            rowNumber++;
            if (rowNumber < rows)
            {
                i--;
            }
            else {break;}
        }

    }
    cout << FitingCars;
}