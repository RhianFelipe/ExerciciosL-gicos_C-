
#include <iostream>
#include <iomanip>//  Biblioteza que fornece uma hora em uma estrutura de horas e uma cadeia de caracteres de formato para ser usada
                 //Permite o ciclo conveniente de cadeias de caracteres, com operadores de inser��o e extra��o
using namespace std;
int main()
{
    int D,M,A;
cout << "Digite a Data de hoje no formato DD/MM/AA \n";
cout << "Dia:";
cin >> D ;
cout << "Mes:";
cin >> M ;
cout << "Ano:";
cin >> A;
//setw para usar a condi��o se tiver menos de 2 casas, e o setfill para colcoar o 0 caso a condi��o seja concebida.
cout << endl << "A data formatada: " << setw(2) << setfill('0')<<  D  << "/" << setw(2) << M << "/" << A;

}

