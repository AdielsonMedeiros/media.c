#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float nota1, nota2, nota3, nota4, media;
    

    printf ("============  MEDIA ESCOLAR ============="); // cabeçalho

    printf ("\n\tDigite sua primeira nota Bimestral: "); // escreve para o usuario inserir a nota

    scanf ("%f", &nota1); //a nota inserida vai ser armazenada na variavel &nota1 e o %f é o tipo da variavel que quer dizer float e ela aparece ali para marcar o lugar da variavel que foi escrita logo após. 

    printf ("\n\tDigite a sua segunda nota Bimestral: "); // vai escrever novamente pro usuario inserir a nota 

    scanf ("%f", &nota2); // vai armazenar a nota que o usuario digitou na nota2

    printf ("\n\tDigite a sua terceira nota Bimestral:"); // vai escrever pro usuario inserir a terceira notaw

    scanf ("%f", &nota3); // vai armazenar a nota que usuario escreveu na nota3

    printf ("\n\tDigite a sua quarta nota Bimestral:"); // vai pedir pro usuario digitar a quarta nota bimestral

    scanf ("%f", &nota4); // vai armazenar na nota4ww

    media = nota1 + nota2 + nota3 + nota4; // a media vai receber todas as notas somadas

    media = media / 4; // a media vai receber a media dividido por 4

    printf (" Sua Media foi de: %f", media); //  vai escrever a media do usuario

    // *agora vem o queridinho de todos*
    
    if (media >=6) // se a media for maior ou igual que 6
    {
        printf ("\n\n\tVoce foi APROVADO BB") ; // o programa vai escrever que voce foi aprovadow

    } else { // SeNao
        printf ("\n\n\n\t voce foi REPROVADO T.T"); // o programa vai escrever que voce foi reprovado T.T

    }
        


    return 0; // cabô

    


}
 
 
 
 
 
 
