#include <iostream>
using namespace std;

int main() 
{
    float n1, n2, n3, max;
    cout << "Qual è il primo numero?" << endl;
    cin >> n1;
    cout << "Qual è il secondo numero?" << endl;
    cin >> n2;
    cout << "Qual è il terzo numero?" << endl;
    cin >> n3;
if (n1>n2)
{
    if (n1>n3)
    {
        max = n1;
    }
    else
    {
        max = n3;
    }

}
else 
{
    if (n2 > n3)
    {
        max = n2;
    }
    else
    {
        max = n3;
    }
}
    cout << "Il numero massimo è " << max;



}


