#include <iostream>
#include <iomanip>
using namespace std;

int getInput(int &, int &, int &);
int maxMin(int, int, int, int &, int &);

int getInput(int &n1, int &n2, int &n3)
{
    cin >> n1;
    cin >> n2;
    cin >> n3;
}

int maxMin(int n1, int n2, int n3, int &max, int &min)
{
    if ((n1 < n2 && n1 < n3))
        min = n1;
    else if ((n2 < n1 && n2 < n3))
        min = n2;
    else if ((n3 < n1 && n3 < n2))
        min = n3;

    if ((n1 > n2 && n1 > n3))
        max = n1;
    else if ((n2 > n1 && n2 > n3))
        max = n2;
    else if ((n3 > n2 && n3 > n1))
        max = n3;

    return min, max;
}