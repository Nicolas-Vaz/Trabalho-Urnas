#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<Windows.h>
#define max 500
///SALVAR TESTES
int Presi=0,Dep_fed=0,Gov=0,Sena=0,teste=0,estad=0;
///SALVAR NUMERO MAIOR
int maior_urna,maior_Pres=8,maior_Sena,maior_Gov,maior_DepGov,maior_DepFed;
///SALVAR NUMEROS DA PESSOA
int maiorUnaSave=0,PreSave=0,SenaSave=0,GovSave=0,DepEstadSave=0,DepFedSave=0;
///N DEIXAR PESSOAS PASSAREM DO CODIGO
long i;
///contagens;
int p;
struct Urnas
{
    int Presidente[3];
    //NUMERO 0 === DANILO
    //NUMERO 1 === LULA
    //NUMERO 2 === BOLSO TAO KEY
    int Governador[3];
    //NUMERO 0 === MONARK
    //NUMERO 1 === PADRE KELMON
    //NUMERO 2 === Comunivia
    int Senador[3];
    //NUMERO 0 ===Nulão Amedo
    //NUMERO 1 ===Abestado
    //NUMERO 2 ===Rei do Humor
    int Dep_Federal[3];
    //NUMERO 0 ===Kim Kataguiri
    //NUMERO 1 ===Decimo Dedo
    //NUMERO 2 ===Nicolau Gado
    int Dep_Estadual[3];
    //NUMERO 0 ===Albertinho Eisnten
    //NUMERO 1 ===Elon Moscka
    //NUMERO 2 ===Nikolas Tesla
    int urna[20];
    int branco;
    int nulo;

    //Urnas estão dividas cada um pelo seu ou seja a 1 === 1
}  PP;
///PRESIDENTES--------------------------------------------------------------------------------------------------------------------------------------------------------------
int Presidente(int i)
{
    system("cls");
    printf("\nNossos Candidatos para Presidente são");
    printf("\n|----------------------|----------------------|\n|Nome do Candidato     |Numero do Candidato   |\n|----------------------|----------------------|");
    printf("\n|Danulo Gentullho      |\t  26\t      |\n|----------------------|----------------------|");
    printf("\n|Polvo\t\t       |\t  13\t      |\n|----------------------|----------------------|");
    printf("\n|Javolto Bozo<==|--    |\t  22\t      |\n|----------------------|----------------------|");
    printf("\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
    printf("\nFaça seu voto\n");
    scanf("%d", &Presi);
    if(Presi!=26 && Presi!=22 && Presi!=13 && Presi!=1)
    {
        printf("voto não identificado, considerado nulo");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.nulo++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Presidente(i);
            system("cls");
        }
    }
    if(Presi==1)
    {
        printf("\n|----------------------|----------------------|\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {

            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Presidente(i);
            system("cls");
        }

    }
    if(Presi==26)
    {
        printf("\n|----------------------|----------------------|\n|Danulo Gentullho      |\t  26\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Presidente[0]+=1;
            PP.urna[i]++;

            system("cls");
        }
        if(teste==2)
        {
            Presidente(i);
            system("cls");
        }

    }
    if(Presi==13)
    {
        printf("\n|----------------------|----------------------|\n|Polvo\t\t       |\t  13\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        fflush(stdin);
        if(teste==1)
        {
            PP.Presidente[1]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Presidente(i);
            system("cls");
        }
    }
    if(Presi==22)
    {
        printf("\n|----------------------|----------------------|\n|Javolto Bozo<==|--    |\t  22\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        fflush(stdin);
        if(teste==1)
        {
            PP.Presidente[2]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Presidente(i);
            system("cls");
        }
    }
}
///GOVERNADORES-------------------------------------------------------------------------------------------------------------------------------------------------------------
int Governador(int i)
{
    system("cls");
    printf("\nCandidatos para Governador temos");
    printf("\n|----------------------|----------------------|\n|Nome do Candidato     |Numero do Candidato   |\n|----------------------|----------------------|");
    printf("\n|Caloi\t\t       |\t  42\t      |\n|----------------------|----------------------|");
    printf("\n|Candidato Padre       |\t  14\t      |\n|----------------------|----------------------|");
    printf("\n|Comunivia             |\t  51\t      |\n|----------------------|----------------------|");
    printf("\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
    printf("\nFaça seu voto\n");
    scanf("%d", &Gov);
    if(Gov!=42 && Gov!=14 && Gov!=51 && Gov!=1)
    {
        printf("voto não identificado, considerado nulo");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &Gov);
        if(Gov==1)
        {
            PP.nulo++;
            PP.urna[i]++;
            system("cls");
        }
        if(Gov==2)
        {
            Governador(i);
            system("cls");
        }
    }
    if(Gov==1)
    {
        printf("\n|----------------------|----------------------|\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &Gov);
        if(Gov==1)
        {
            PP.branco++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Governador(i);
            system("cls");
        }

    }
    if(Gov==42)
    {
        printf("\n|----------------------|----------------------|\n|Caloi\t\t       |\t  42\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Governador[0]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Governador(i);
            system("cls");
        }

    }
    if(Gov==14)
    {
        printf("\n|----------------------|----------------------|\n|Candidato Padre       |\t  14\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Governador[1]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Governador(i);
            system("cls");
        }
    }
    if(Gov==51)
    {
        printf("\n|----------------------|----------------------|\n|Comunivia             |\t  51\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Governador[2]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Governador(i);
            system("cls");
        }
    }

}
///SENADORES-----------------------------------------------------------------------------------------------------------------------------------------------------------------
int Senador(int i)
{
    system("cls");
    printf("\nNossos Candidatos para Senadores são");
    printf("\n|----------------------|----------------------|\n|Nome do Candidato     |Numero do Candidato   |\n|----------------------|----------------------|");
    printf("\n|Nulão Amedo\t       |\t  300\t      |\n|----------------------|----------------------|");
    printf("\n|Abestado\t       |\t  242\t      |\n|----------------------|----------------------|");
    printf("\n|Rei do Humor\t       |\t  666\t      |\n|----------------------|----------------------|");
    printf("\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
    printf("\nFaça seu voto\n");
    scanf("%d", &Sena);
    if(Sena!=300 && Sena!=242 && Sena!=666 && Sena!=1)
    {
        printf("voto não identificado, considerado nulo");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.nulo++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Senador(i);
            system("cls");
        }
    }
    if(Sena==1)
    {
        printf("\n|----------------------|----------------------|\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.branco++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Senador(i);
            system("cls");
        }

    }
    if(Sena==300)
    {
        printf("\n|----------------------|----------------------|\n|Nulão Amedo\t       |\t  300\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Senador[0]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Senador(i);
            system("cls");
        }

    }
    if(Sena==242)
    {
        printf("\n|----------------------|----------------------|\n|Abestado\t       |\t  242\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Senador[1]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Senador(i);
            system("cls");
        }
    }
    if(Sena==666)
    {
        printf("\n|----------------------|----------------------|\n|Rei do Humor\t       |\t  666\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Senador[2]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Senador(i);
            system("cls");
        }
    }
}
///DEPUTADO FEDERAL--------------------------------------------------------------------------------------------------------------------------------------------------------
int Deputado_Fed(int i)
{
    system("cls");
    printf("\nNossos Candidatos para Deputados Federais são");
    printf("\n|----------------------|----------------------|\n|Nome do Candidato     |Numero do Candidato   |\n|----------------------|----------------------|");
    printf("\n|Kim Kataguiri\t       |\t  4433\t      |\n|----------------------|----------------------|");
    printf("\n|Decimo Dedo           |\t  1313\t      |\n|----------------------|----------------------|");
    printf("\n|Nicolau Gado\t       |\t  2222\t      |\n|----------------------|----------------------|");
    printf("\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
    printf("\nFaça seu voto\n");
    scanf("%d", &Dep_fed);
    if(Dep_fed!=4433 && Dep_fed!=1313 && Dep_fed!=2222 && Dep_fed!=1)
    {
        printf("voto não identificado, considerado nulo");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.nulo++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Fed(i);
            system("cls");
        }
    }
    if(Dep_fed==1)
    {
        printf("\n|----------------------|----------------------|\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.branco++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Fed(i);
            system("cls");
        }

    }
    if(Dep_fed==4433)
    {
        printf("\n|----------------------|----------------------|\n|Kim Kataguiri\t       |\t  4433\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Federal[0]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Fed(i);
            system("cls");
        }

    }
    if(Dep_fed==1313)
    {
        printf("\n|----------------------|----------------------|\n|Decimo Dedo           |\t  1313\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Federal[1]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Fed(i);
            system("cls");
        }
    }
    if(Dep_fed==2222)
    {
        printf("\n|----------------------|----------------------|\n|Nicolau Gado\t       |\t  2222\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Federal[2]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Fed(i);
            system("cls");
        }
    }
}
///DEPUTADO ESTADUAL--------------------------------------------------------------------------------------------------------------------------------------------------------
int Deputado_Esta(int i)
{
    system("cls");
    printf("\nNossos Candidatos para Deputados Estaduais são");
    printf("\n|----------------------|----------------------|\n|Nome do Candidato     |Numero do Candidato   |\n|----------------------|----------------------|");
    printf("\n|Albertinho Eisnten    |\t  14478\t      |\n|----------------------|----------------------|");
    printf("\n|Elon Moscka           |\t  21900\t      |\n|----------------------|----------------------|");
    printf("\n|Nikolas Tesla\t       |\t  11980\t      |\n|----------------------|----------------------|");
    printf("\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
    printf("\nFaça seu voto\n");
    scanf("%d", &estad);
    if(estad!=11980 && estad!=21900 && estad!=14478 && estad!=1)
    {
        printf("voto não identificado, considerado nulo");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.nulo++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Esta(i);
            system("cls");
        }
    }
    if(estad==1)
    {
        printf("\n|----------------------|----------------------|\n|Branco\t\t       |\t   1\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.branco++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Esta(i);
            system("cls");
        }

    }
    if(estad==21900)
    {
        printf("\n|----------------------|----------------------|\n|Elon Moscka           |\t  21900\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Estadual[1]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Esta(i);
            system("cls");
        }

    }
    if(estad==11980)
    {
        printf("\n|----------------------|----------------------|\n|Nikolas Tesla\t       |\t  11980\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Estadual[2]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Esta(i);
            system("cls");
        }
    }
    if(estad==14478)
    {
        printf("\n|----------------------|----------------------|\n|Albertinho Eisnten    |\t  14478\t      |\n|----------------------|----------------------|");
        printf("\n1 para Confirmar e 2 Para Negar\n");
        scanf("%d", &teste);
        if(teste==1)
        {
            PP.Dep_Estadual[0]++;
            PP.urna[i]++;
            system("cls");
        }
        if(teste==2)
        {
            Deputado_Esta(i);
            system("cls");
        }
    }
}
int Teste_Vic()
{
///CALCULO DA URNA
    for(i=0;i<3;i++)
    {
        maior_urna=PP.urna[1];
        if(maior_urna<PP.urna[i])
        {
            maior_urna=PP.urna[i];
            maiorUnaSave=i;
        }
    }
}
int PresiTeste()
{
    for(i=0;i<3;i++)
    {
        maior_Pres=PP.Presidente[0];
        if(PP.Presidente[i]>maior_Pres)
        {
            maior_Pres=PP.Presidente[i];
            PreSave=i;
        }
    }
}
int SenaTeste()
{
   for(i=0;i<3;i++)
    {
        maior_Sena=PP.Senador[0];
        if(PP.Senador[i]>maior_Sena)
        {
            maior_Sena=PP.Senador[i];
            SenaSave=i;
        }
    }
}
int GovTeste()
{
     for(i=0;i<3;i++)
     {
        maior_Gov=PP.Governador[0];
        if(PP.Governador[i]>maior_Gov)
        {
            maior_Gov=PP.Governador[i];
            GovSave=i;
        }
     }
}
int DepFedTeste()
{
     for(i=0;i<3;i++)
     {
        maior_DepFed=PP.Dep_Federal[0];
        if(maior_DepFed<PP.Dep_Federal[i])
        {
            maior_DepFed=PP.Dep_Federal[i];
            DepFedSave=i;
        }
     }
}
int DepEstadTeste()
{
    for(i=0;i<3;i++)
     {
        maior_DepGov=PP.Dep_Estadual[0];
        if(maior_DepGov<PP.Dep_Estadual[i]);
        {
            maior_DepGov=PP.Dep_Estadual[i];
            DepEstadSave=i;
        }
     }
}
int Victoria ()
{
    printf("onde mais votaram foi na urna [%d] com [%d] votos, ",maiorUnaSave,maior_urna);
    printf("tivemos [%d] votos brancos e [%d] votos nulos",PP.branco,PP.nulo);
    if(PreSave==0)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Presidente será");
        //sleep(2);
        printf("\nDanulo Gentulho com %d votos", PP.Presidente[0]);
    }
    if(PreSave==1)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Presidente será");
        //sleep(2);
        printf("\nPolvo com %d votos", PP.Presidente[1]);
    }
    if(PreSave==2)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Presidente será");
  //      sleep(2);
        printf("\nJavolto Bozo com %d votos", PP.Presidente[2]);
    }
    if(GovSave==0)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Governador será");
    //    sleep(2);
        printf("\nCaloi com %d votos", PP.Governador[0]);
    }
    if(GovSave==1)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Governador será");
      //  sleep(2);
        printf("\nCandidato Padre com %d votos", PP.Governador[1]);
    }
    if(GovSave==2)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Governador será");
        //sleep(2);
        printf("\nComunivia com %d votos", PP.Governador[2]);
    }
    if(SenaSave==0)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Senador será");
        //sleep(2);
        printf("\nNulão Amedo com %d votos", PP.Senador[0]);
    }
    if(SenaSave==1)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Senador será");
        //sleep(2);
        printf("\nAbestado com %d votos", PP.Senador[1]);
    }
    if(SenaSave==2)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Senador será");
        //sleep(2);
        printf("\nRei do Humor com %d votos", PP.Senador[2]);
    }
    if(DepEstadSave==0)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Estadual será");
        //sleep(2);
        printf("\nAlbertinho Eisnten com %d votos", PP.Dep_Estadual[0]);
    }
    if(DepEstadSave==1)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Estadual será");
        //sleep(2);
        printf("\nElon Moscka com %d votos", PP.Dep_Estadual[1]);
    }
    if(DepEstadSave==2)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Estadual será");
        //sleep(2);
        printf("\nNikolas Tesla com %d votos", PP.Dep_Estadual[2]);
    }
     if(DepFedSave==0)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Federal será");
        //sleep(2);
        printf("\nKim Kataguiri com %d votos", PP.Dep_Federal[0]);
    }
    if(DepFedSave==1)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Federal será");
        //sleep(2);
        printf("\nDecimo Dedo com %d votos", PP.Dep_Federal[1]);
    }
    if(DepFedSave==2)
    {
        printf("\nCom base na escolhe de seus votos nosso novo Deputado Federal será");
        //sleep(2);
        printf("\nNicolau Gado com %d votos", PP.Dep_Federal[2]);
    }
}
int main()
{
    struct Urnas c;
    ///COLOCANDO VALORES NAS VARIAVEIS
    for(p=0;p<20;p++)
    {
           c.urna[p]=0;
    }
    for(p=0;p<3;p++)
    {
            PP.Presidente[p]=0;
            PP.Governador[p]=0;
            PP.Senador[p]=0;
            PP.Dep_Estadual[p]=0;
            c.Dep_Federal[p]=0;
            c.branco=0;
            c.nulo=0;
    }
    ///COMEÇANDO
    setlocale(LC_ALL, "Portuguese");
    for(p=0;p<3;p++)
        {
        printf("\ndigite o numero da sua seção 1 até 20:\n");
        scanf("%ld",&i);
        if(i>20 || i<1)
        {
            printf("\nErro Urna Não Identificada");
            main();
        }
        printf("\nBem vindo ao Sistemas de Urnas VAR ");
        printf("\nNumero da Urna: [%ld]", i);
    ///VOTANDO
        Presidente(i);
        Governador(i);
        Senador(i);
        Deputado_Esta(i);
        Deputado_Fed(i);
        }
    ///TESTES DE VITORIAS
        PresiTeste();
        DepEstadTeste();
        DepFedTeste();
        GovTeste();
        SenaTeste();
        Teste_Vic();
    ///QUEM VENCEU
        Victoria();


}
