#include <iostream>
using namespace std;

int main()
{   
    int escolha = 0;
    
    cout << "############################################" << endl;
    cout << "############################################"<< endl;
    cout << "##############  Nome_Jogo  #################"<< endl;
     cout <<"############################################"<< endl;
    cout << "##                MENU                    ##"<< endl;
    cout << "##              Bem-vindo                 ##"<< endl;
    cout << "##              Jogar[1]                  ##"<<endl;
    cout << "##             Tutorial[2]                ##"<<endl;
    cout << "##               Sair[3]                  ##"<<endl;
    cout << "############################################" << endl;
    cout << "############################################"<< endl;
    cout << "##############  Nome_Jogo  #################"<< endl;
     cout <<"############################################"<< endl;
    
    cin >> escolha;
    
    if(escolha == 1)
    {
        //Jogar
    }
    else if (escolha == 2)
    {
        //Tutorial
    }
    else if (escolha == 3)
    {
        //Sair
    }
    else
    {
        cout << "Comando invaido. Escolha [1],[2] ou [3]";
    }
        
    
    return 0;
    
}
