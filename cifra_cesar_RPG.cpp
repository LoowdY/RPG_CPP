//Código do puzzle 01 do RPG desenvolvido para o a matéria PROGRAMAÇÃO 2 do CESUPA - Engenharia da Computação

//O princípio de funcionamento está centrado na cifra de César, uma das formas de encriptação mais elementares existentes.

/* O funcionamento da cifra de césar consiste em se escolher um alfabeto. A partir disso, escolhe-se a letra "A", por exmeplo. A partir desse ponto devemos avançar N posições
no alfabeto em questão. Supondo que N seja 3, então a letra "A" se torna "D". N na frase será fixo neste puzzle.
*/

// muito jovem para morrer faz referencia ao jogo de FPS DOOM. Caso o usuário selecione esta opção, poderar ter acesso a mais dicas, ou seja, o jogo ficará mais fácil.

//OBS: foi incluída a biblioteca string para facilitar a comparação entre os dados, para o usuário poder passar para o próximo puzzle.

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
    int escolha_puzzle1 = 0;
    
    cout << "Huahuahuahua! Só vais passar se acertares o que eu quero dizer.\n Chamo-me Roowdy, Neto de Alan Turing.\n Desde que meu avo faleceu, mergulhei-me no mar dos numeros e da CRIPTOGRAFIA.\n Agora, sua vez de assumir meu lugar chegou. Decifre o codigo abaixo e siga o seu caminhi, isso sera necessario para o seu intelecto, Synth\n";
    
    //apenas para windows system("pause");

    cout << "############################################" << endl;
    cout << "############################################"<< endl;
    cout << "############## NEON PARADISE ###############"<< endl;
    cout << "############################################"<< endl;
    cout << "##             HELL ON EARTH              ##"<< endl;
    cout << "##    Começar desafio de criptgrafia[1]   ##"<<endl;
    cout << "##               Ajuda[2]                 ##"<<endl;
    cout << "##               Sair[3]                  ##"<< endl;
    cout << "##       Muito Jovem para Morrer[4]       ##"<<endl;
    cout << "############################################" << endl;
    cout << "############################################"<< endl;
    cout << "############## NEON PARADISE ###############"<< endl;
    cout << "############################################"<< endl;
    cout << "############################################"<< endl;
    
    //escolha do usuário a partir do menu do puzzle.
    cin >> escolha_puzzle1;

    //declaração da variável que irá armazenar a cifra
    //apenas para formalidade
     string cifra = "npyvaav";

    //estabelecendo condicionais a depender da escolha do usuário

    if(escolha_puzzle1 == 1)
    {   
        
        string resposta_puzzle1 = "girotto";
        
        // a criptografia resumiu-se a passar 7 casas a partir de cada letra apresentada na palavra 'girotto';
        
        string resposta_usuario_puzzle1;
        
        cout << "Bem-vindo ao desafio.";
        
        cout << "A palavra cifrada eh: 'npyvaav'.\n DECRIPTE a mensagem";
        
        getline(cin,resposta_puzzle1);
        
        if(resposta_puzzle1 == resposta_usuario_puzzle1)
        {
            //passar nível para o usuário e voltar a rotina do RPG.
        }
    }
    else if(escolha_puzzle1 == 2)
    {
        cout << "Entao voce arregou! Vou lhe dar uma pequena dica, humano. Espero que voce saiba alguma coisa de programacao...\n cesar -= 7 \n;) "
    }
    else if(escolha_puzzle1 == 3)
    {
        //sair ---> inserir variáveis e fechar o console do jogo.
    }
    else if(escolha_puzzle1 == 4)
    {
        cout << "Hmmmmm... ja imaginava que irias arregar, humano. \n A cifra de  Cifra de César, também conhecida como cifra de troca, código de César ou troca de César, é uma das mais simples e conhecidas técnicas de criptografia.\n Tente movimentar 7 unidades a partir das letras dadas. Por exemplo, se for N, escreva P. BOA SORTE!\n\n";
    }
    else
    {
        cout << "comando inválido. Por favor, escolha [1],[2],[3] ou [4]";
    }

    return 0;
}
