#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float V,S,T;
    printf ("Masukan Kecepatan Mobil =");
    scanf ("%f",&V);
    printf ("Masukan Waktu Tempuh    =");
    scanf ("%f",&T);
    S=V*T;
    printf ("Maka jarak yang tempuh adalah =%f",S);
    return 0;
}
