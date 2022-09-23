//A ideia principal deste algoritmo é propor problemas lógicos, utilizando matemática booleana, para o usuário poder prosseguir no jogo.


#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    string resposta01 = "c";
    string resposta01_usuario;

    string resposta02 = "3654";
    string resposta02_usuario;

    string resposta03 = "64";
    string resposta03_usuario; 
    while ( resposta01_usuario != resposta01 ){
    cout << "Synth, percebeste que o botao que apertas eh um numero!? \n\nJustamente.....\n\nMinha vida sao numeros, por isso, para abrires essa porta, teras que passar pelos desafios de matematica discreta aqui propostos. Qualquer coisa, chame um frnaces. O 2pir ;)\n\n";
    
    //primeira pergunta

    cout << "Qual combinação resulta como falso a preposição abaixo?\n Digite letra minuscula\n\n";

    cout << "A v B\n\n";

    cout << "dA)  A:V ; B:V";
    cout << "\n";
    cout << "B)  A:F ; B:V";
    cout << "\n";
    cout << "C)  A:F ; B:F";
    cout << "\n";
    cin >> resposta01_usuario;
    }
    
    //imprimir na tela numero binario
    cout << "Numero binario";


       while(resposta02_usuario != resposta02){
        int i;
        int num = 3456;
        cout << " Você recebeu um numero binario.\n Guarde-o pois ele sera importante para ti, Synth!\n";
        cout << "Agora, teras que reconhecer padroes:\n\n";
        cout << " Que numero completa a sequencia abaixo, Synth....\n\n";
        cout << "Inteligencia sempre foi um forte no reino de Tanenbaum\n\n";
    
        for (i = 0; i<=20; i++)
        {
            num  = num + 9;
            cout << num << endl;
        }
        //pedindo resposta do usuário e fazendo validação da resposta
        cin >> resposta02_usuario;
       }

        
        cout << "Parabens, Humano!\n\n Voce conseguiu passar pelo segundo desafio!";
            
            
            //apresentar numero binario de 8 digitos (1 Byte)
            
            
        cout << " Você recebeu um numero binario.\n Nao se esqueca de guarda-lo, Synth";
        cout << "Agora, quero saber quantas combinações de bits 0s e 1s sao possiveis com os 8 bits que voce guardou da ultima pergunta se o ultimo e o sexto bit sao, necessariamente, 1?";
            
            while(resposta03_usuario != resposta03){
           
            cin >> resposta03_usuario;
            }
            cout << "Respota correta!\n\n\n";
     

}
