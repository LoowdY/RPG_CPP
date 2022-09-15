//A ideia principal deste algoritmo é propor problemas lógicos, utilizando matemática booleana, para o usuário poder prosseguir no jogo.


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string resposta01 = "c";
    string resposta01_usuario;

    string resposta02 = "b";
    string resposta02_usuario;

    string resposta03 = "a";
    string resposta03_usuario; 
    
    cout << "Synth, percebeste que o botao que apertas eh um numero!? \n\nJustamente.....\n\nMinha vida sao numeros, por isso, para abrires essa porta, teras que passar pelos desafios de matematica discreta aqui propostos. Qualquer coisa, chame um frnaces. O 2pir ;)\n\n";
    
    //primeira pergunta

    cout << "Qual combinação resulta como falso a preposição abaixo?\n Digite letra minuscula\n\n";

    cout << "A v B\n\n";

    cout << "A -  A:V ; B:V";
    cout << "B -  A:F ; B:V";
    cout << "C -  A:F ; B:F";

    cin >> resposta01_usuario;

    if(resposta01_usuario == resposta01)
    {
        //proxima pergunta
        cout << "Estudaste geometria plana! Agora, quero saber quanto vale o lado oposto ao angulo de 90°:\n\n";
        
      //defindo triangulo
        int m, i, j;
                m=5;
                for (i = 1; i <= m; i = i + 1)
                {
                    for (j = 1; j <= i; j = j + 1) cout << '*';
                cout << '\n';
            }


        
        cout << "A - raiz de 5";
        cout << "B -  raiz de 50";
        cout << "C - raiz de 25";
        cin >> resposta02_usuario;
    }
    else
    {
        cout << "resposta errada!";
        cout << "Resposta: C";
    }
    if(resposta02_usuario == resposta02)
    {
        //proxima pergunta
        cout << "A formula quimica da agua: H2O. Sabe-se que normalmente compostos que iniciam com a letra H, ou seja, hidrogenio, sao acidos\n"
        cout << "Entao faço-te uma pergunta filosofica: A agua eh um acido?:\n";
        cout << "A - nao";
        cout << "B - sim";
    }
    else
    {
        cout << "resposta errada";
        cout << "Resposta: B";
    }
    if(resposta03_usuario == resposta03)
    {
        cout << "Boa, Sythn! Parabens, voce completou o desafio intelectual";
    }
    else
    {
        cout << "resposta errada";
        cout << "Resposta: A";
    }
}
