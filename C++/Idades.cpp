#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome, nome2;
    int idade, idade2;
    double media;

    cout << "Dados primeira pessoa:\nNome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;

    cout << "Dados segunda pessoa:\nNome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (double)(idade + idade2) / 2;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome << " e " << nome2 << " e de " << media << " anos" << endl;

    return 0;


}
