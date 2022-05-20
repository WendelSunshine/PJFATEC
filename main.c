#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <Windows.h>


    FILE *exportar;
    int min[5] = {0,0,0,0,0};
    int seg[5] = {0,0,0,0,0};
    float cent[5] = {0,0,0,0,0};
    int minT1[4] = {0, 0, 0, 0};
    int minT2[4] = {0, 0, 0, 0};
    int minT3[4] = {0, 0, 0, 0};
    int minT4[4] = {0, 0, 0, 0};
    int minT5[4] = {0, 0, 0, 0};
    int segT1[4] = {0, 0, 0, 0};
    int segT2[4] = {0, 0, 0, 0};
    int segT3[4] = {0, 0, 0, 0};
    int segT4[4] = {0, 0, 0, 0};
    int segT5[4] = {0, 0, 0, 0};
    float centT1[4] = {0, 0, 0, 0};
    float centT2[4] = {0, 0, 0, 0};
    float centT3[4] = {0, 0, 0, 0};
    float centT4[4] = {0, 0, 0, 0};
    float centT5[4] = {0, 0, 0, 0};
    float T1[3], T2[3], T3[3], T4[3], T5[3];
    int winner[5]; //= {0, 0, 0, 0, 0};
    float rank[5]; //= {0, 0, 0, 0, 0};
    int l, c, j,i, h,v,t;/* variaveis do for*/
    float swap, swapT, ConvT, Conv;
    int menuprinc=0, menubat1=0 ,menubat2=0, menubat3=0;/*variaveis para navega��o em Menus*/
    int x,y,p,num;





char Classific(){ //function da Classificação e Imprimir
                        printf("**********CLASSIFICACAO GERAL DAS EQUIPES:**********\n\n");
                        printf("1° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[0], min[0], seg[0], cent[0]);
                        printf("2° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[1], min[1], seg[1], cent[1]);
                        printf("3° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[2], min[2], seg[2], cent[2]);
                        printf("4° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[3], min[3], seg[3], cent[3]);
                        printf("5° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[4], min[4], seg[4], cent[4]);
                        printf("pressione 1 para voltar ao menu\n");         
  }

char classificEXP(){
                        fprintf(exportar, "**********CLASSIFICACAO GERAL DAS EQUIPES:**********\n\n");
                        fprintf(exportar, "1° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[0], min[0], seg[0], cent[0]);
                        fprintf(exportar, "2° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[1], min[1], seg[1], cent[1]);
                        fprintf(exportar, "3° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[2], min[2], seg[2], cent[2]);
                        fprintf(exportar, "4° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f \n", winner[3], min[3], seg[3], cent[3]);
                        fprintf(exportar, "5° lugar - EQUIPE: %d - Tempo: %d: %d: %.0f\n", winner[4], min[4], seg[4], cent[4]);
                        printf("Digite 0 para encerrar o codigo\n");
                          scanf("%d", &num);
}




char Logo(){    //Function da Logo
        setlocale(LC_ALL, "Portuguese");

      printf("\t\t\t 8 8888888888       .8.            d888888o. 8888888 8888888888  \n");
      printf("\t\t\t 8 8888            .888.         .`8888:' `88.     8 8888 \n");
      printf("\t\t\t 8 8888           :88888.        8.`8888.   Y8     8 8888\n");
      printf("\t\t\t 8 8888          . `88888.       `8.`8888.         8 8888 \n");
      printf("\t\t\t 8 888888888888 .8. `88888.       `8.`8888.        8 8888  \n");
      printf("\t\t\t 8 8888        .8`8. `88888.       `8.`8888.       8 8888 \n");
      printf("\t\t\t 8 8888       .8' `8. `88888.       `8.`8888.      8 8888  \n");
      printf("\t\t\t 8 8888      .8'   `8. `88888.  8b   `8.`8888.     8 8888   \n");
      printf("\t\t\t 8 8888     .888888888. `88888. `8b.  ;8.`8888     8 8888    \n");
      printf("\t\t\t 8 8888    .8'       `8. `88888. `Y8888P ,88P'     8 8888   \n\n\n");

       printf("\t \t \t \t \t \t Loading");
    for(x = 0; x<=3; x++){
      for (y = 0; y < 500000000; y++){
        p = y;
      }
      printf(".");
}
      printf("\n Aperta Qualquer Coisa para Comecar!");
    getch();
}




int main()
{
   setlocale(LC_ALL, "Portuguese");

    //Aqui o logo vai aparecer antes do código...
    Logo();


    menup:
    menuprinc=0;
    system("cls");
    printf("**********MENU PRINCIPAL**********\nDIGITE A OPCAO DESEJADA APERTE ENTER\n\n");
    printf("1. Bateria 1 \n");
    printf("2. Bateria 2 \n");
    printf("3. Bateria 3 \n");
    printf("4. Obter classificacao geral na tela \n");
    printf("5. Exportar classificacao geral \n");
    printf("6. Sair do sistema \n\n");
    scanf("%d",&menuprinc);


      if(menuprinc>6)
                  {
                      i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto menup;
                  }
                    if(menuprinc<1)
                  {
                       i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto menup;
                  }
                    if(menuprinc==6){
                        exit(0);
                      } 

        if(menuprinc==1)
            {
            bat1:
            system("cls");
            printf("**********Bateria 1**********\nDIGITE O TEMPO DA BATERIA 1 DE CADA UMA DAS EQUIPES:\n\n");
            printf("1.Tempo da equipe 1 na bateria 1:\n");
            printf("2.Tempo da equipe 2 na bateria 1:\n");
            printf("3.Tempo da equipe 3 na bateria 1:\n");
            printf("4.Tempo da equipe 4 na bateria 1:\n");
            printf("5.Tempo da equipe 5 na bateria 1:\n");
            printf("6. Voltar ao menu principal  \n\n");
            scanf("%d",&menubat1);
                 if(menubat1>6)
                  {
                      i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat1;
                  }
                    if(menubat1<1)
                  {
                       i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat1;
                  }
                                 if(menubat1==1){
                                      printf("Digite os minutos Time 1- Bateria 1:\n");
                                      scanf("%d",&minT1[0]);
                                      printf("Digite os Segundos Time 1- Bateria:\n");
                                      scanf("%d",&segT1[0]);
                                      printf("Digite os Centesimo-segundos Time 1- Bateria:\n");
                                      scanf("%f",&centT1[0]);

                                      goto bat1;
                                        }
                                    if(menubat1==2){

                                         printf("Digite os minutos Time 2- Bateria 1:\n");
                                        scanf("%d",&minT2[0]);
                                        printf("Digite os Segundos Time 2- Bateria:\n");
                                        scanf("%d",&segT2[0]);
                                        printf("Digite os Centesimo-segundos Time 2- Bateria:\n");
                                        scanf("%f",&centT2[0]);
                                        goto bat1;
                                           }
                                    if(menubat1==3){

                                       printf("Digite os minutos Time 3- Bateria 1:\n");
                                        scanf("%d",&minT3[0]);
                                        printf("Digite os Segundos Time 3- Bateria1:\n");
                                        scanf("%d",&segT3[0]);
                                        printf("Digite os Centesimo-segundos Time 3- Bateria1:\n");
                                        scanf("%f",&centT3[0]);
                                        goto bat1;
                                           }
                                    if(menubat1==4){

                                         printf("Digite os minutos Time 4- Bateria 1:\n");
                                        scanf("%d",&minT4[0]);
                                        printf("Digite os Segundos Time 4- Bateria1:\n");
                                        scanf("%d",&segT4[0]);
                                        printf("Digite os Centesimo-segundos Time 4- Bateria1:\n");
                                        scanf("%f",&centT4[0]);
                                        goto bat1;
                                           }
                                    if(menubat1==5){

                                         printf("Digite os minutos Time 5- Bateria 1:\n");
                                        scanf("%d",&minT5[0]);
                                        printf("Digite os Segundos Time 5- Bateria1:\n");
                                        scanf("%d",&segT5[0]);
                                        printf("Digite os Centesimo-segundos Time 5- Bateria1:\n");
                                        scanf("%f",&centT5[0]);
                                        goto bat1;
                                           }
                                    if(menubat1==6){
                                        goto menup;}


            }

            if(menuprinc==2)
                {
                bat2:
                system("cls");
                printf("**********Bateria 2**********\nDIGITE O TEMPO DA BATERIA 2 DE CADA UMA DAS EQUIPES:\n\n");
                printf("1.Tempo da equipe 1 na bateria 2:\n");
                printf("2.Tempo da equipe 2 na bateria 2:\n");
                printf("3.Tempo da equipe 3 na bateria 2:\n");
                printf("4.Tempo da equipe 4 na bateria 2:\n");
                printf("5.Tempo da equipe 5 na bateria 2:\n");
                printf("6. Voltar ao menu principal  \n\n");
                scanf("%d",&menubat2);
                              if(menubat2>6)
                  {
                      i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat2;
                  }
                    if(menubat2<1)
                  {
                       i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat2;
                  }
                                    if(menubat2==1){
                                        printf("Digite os minutos Time 1- Bateria 2:\n");
                                        scanf("%d",&minT1[1]);
                                        printf("Digite os Segundos Time 1- Bateria 2:\n");
                                        scanf("%d",&segT1[1]);
                                        printf("Digite os Centesimo-segundos Time 1- Bateria 2:\n");
                                        scanf("%f",&centT1[1]);
                                        goto bat2;
                                           }
                                    if(menubat2==2){
                                        printf("Digite os minutos Time 2- Bateria 2:\n");
                                        scanf("%d",&minT2[1]);
                                        printf("Digite os Segundos Time 2- Bateria 2:\n");
                                        scanf("%d",&segT2[1]);
                                        printf("Digite os Centesimo-segundos Time 2- Bateria 2:\n");
                                        scanf("%f",&centT2[1]);
                                        goto bat2;
                                           }
                                    if(menubat2==3){
                                        printf("Digite os minutos Time 3- Bateria 2:\n");
                                        scanf("%d",&minT3[1]);
                                        printf("Digite os Segundos Time 3- Bateria 2:\n");
                                        scanf("%d",&segT3[1]);
                                        printf("Digite os Centesimo-segundos Time 3- Bateria 2:\n");
                                        scanf("%f",&centT3[1]);
                                        goto bat2;
                                           }
                                    if(menubat2==4){
                                        printf("Digite os minutos Time 4- Bateria 2:\n");
                                        scanf("%d",&minT4[1]);
                                        printf("Digite os Segundos Time 4- Bateria 2:\n");
                                        scanf("%d",&segT4[1]);
                                        printf("Digite os Centesimo-segundos Time 4- Bateria 2:\n");
                                        scanf("%f",&centT4[1]);
                                        goto bat2;
                                           }
                                    if(menubat2==5){
                                        printf("Digite os minutos Time 5- Bateria 2:\n");
                                        scanf("%d",&minT5[1]);
                                        printf("Digite os Segundos Time 5- Bateria 2:\n");
                                        scanf("%d",&segT5[1]);
                                        printf("Digite os Centesimo-segundos Time 5- Bateria 2:\n");
                                        scanf("%f",&centT5[1]);
                                        goto bat2;
                                           }
                                    if(menubat2==6){
                                        goto menup;}

                }

                if(menuprinc==3)
                    {
                    bat3:
                    system("cls");
                    printf("**********Bateria 3**********\nDIGITE O TEMPO DA BATERIA 3 DE CADA UMA DAS EQUIPES:\n\n");
                    printf("1.Tempo da equipe 1 na bateria 3:\n");
                    printf("2.Tempo da equipe 2 na bateria 3:\n");
                    printf("3.Tempo da equipe 3 na bateria 3:\n");
                    printf("4.Tempo da equipe 4 na bateria 3:\n");
                    printf("5.Tempo da equipe 5 na bateria 3:\n");
                    printf("6. Voltar ao menu principal  \n\n");
                    scanf("%d",&menubat3);
                        if(menubat3>6)
                  {
                      i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat3;
                  }
                    if(menubat3<1)
                  {
                       i=0;
                      printf("OPÇÃO INVALIDA-DIGITE NOVAMENTE. \n\n");
                        while ( i++ < 10)
                                {
                            Sleep(250);
                                }
                            goto bat3;
                  }
                      if(menubat3==1){
                                        printf("Digite os minutos Time 1- Bateria 3:\n");
                                        scanf("%d",&minT1[2]);
                                        printf("Digite os Segundos Time 1- Bateria 3:\n");
                                        scanf("%d",&segT1[2]);
                                        printf("Digite os Centesimo-segundos Time 1- Bateria 3:\n");
                                        scanf("%f",&centT1[2]);
                                        goto bat3;
                                           }
                        if(menubat3==2){
                                       printf("Digite os minutos Time 2- Bateria 3:\n");
                                        scanf("%d",&minT2[2]);
                                        printf("Digite os Segundos Time 2- Bateria 3:\n");
                                        scanf("%d",&segT2[2]);
                                        printf("Digite os Centesimo-segundos Time 2- Bateria 3:\n");
                                        scanf("%f",&centT2[2]);
                                        goto bat3;
                                           }
                        if(menubat3==3){
                                        printf("Digite os minutos Time 3- Bateria 3:\n");
                                        scanf("%d",&minT3[2]);
                                        printf("Digite os Segundos Time 3- Bateria 3:\n");
                                        scanf("%d",&segT3[2]);
                                        printf("Digite os Centesimo-segundos Time 3- Bateria 3:\n");
                                        scanf("%f",&centT3[2]);
                                        goto bat3;
                                           }
                        if(menubat3==4){
                                        printf("Digite os minutos Time 4- Bateria 3:\n");
                                        scanf("%d",&minT4[2]);
                                        printf("Digite os Segundos Time 4- Bateria 3:\n");
                                        scanf("%d",&segT4[2]);
                                        printf("Digite os Centesimo-segundos Time 4- Bateria 3:\n");
                                        scanf("%f",&centT4[2]);
                                        goto bat3;
                                           }
                        if(menubat3==5){
                                        printf("Digite os minutos Time 5- Bateria 3:\n");
                                        scanf("%d",&minT5[2]);
                                        printf("Digite os Segundos Time 5- Bateria 3:\n");
                                        scanf("%d",&segT5[2]);
                                        printf("Digite os Centesimo-segundos Time 5- Bateria 3:\n");
                                        scanf("%f",&centT5[2]);
                                        goto bat3;
                                           }
                        if(menubat3==6){goto menup;}
                    }
                    if(menuprinc==4)
                        {

                        system("cls");

                        /*Convers�o de tempo em Segundos*/

                            T1[0]=((minT1[0]*60)+ segT1[0]+(centT1[0]/100));
                            T1[1]=((minT1[1]*60)+ segT1[1]+(centT1[1]/100));
                            T1[2]=((minT1[2]*60)+ segT1[2]+(centT1[2]/100));

                            T2[0]=((minT2[0]*60)+ segT2[0]+(centT2[0]/100));
                            T2[1]=((minT2[1]*60)+ segT2[1]+(centT2[1]/100));
                            T2[2]=((minT2[2]*60)+ segT2[2]+(centT2[2]/100));

                            T3[0]=((minT3[0]*60)+ segT3[0]+(centT3[0]/100));
                            T3[1]=((minT3[1]*60)+ segT3[1]+(centT3[1]/100));
                            T3[2]=((minT3[2]*60)+ segT3[2]+(centT3[2]/100));

                            T4[0]=((minT4[0]*60)+ segT4[0]+(centT4[0]/100));
                            T4[1]=((minT4[1]*60)+ segT4[1]+(centT4[1]/100));
                            T4[2]=((minT4[2]*60)+ segT4[2]+(centT4[2]/100));

                            T5[0]=((minT5[0]*60)+ segT5[0]+(centT5[0]/100));
                            T5[1]=((minT5[1]*60)+ segT5[1]+(centT5[1]/100));
                            T5[2]=((minT5[2]*60)+ segT5[2]+(centT5[2]/100));

                                

        /*Ranqueamento dos melhores tempo de cada time*/

                        for (l = 0; l<=2; l++){
                            for (j = (l+1); j<= 2; j++) {

                            if(T1[l] > T1[j]) {
                              swap = T1[l];
                              T1[l] = T1[j];
                              T1[j] = swap;
                            }
                              if(T2[l] > T2[j]) {
                              swap = T2[l];
                              T2[l] = T2[j];
                              T2[j] = swap;
                              }
                            if(T3[l] > T3[j]) {
                              swap = T3[l];
                              T3[l] = T3[j];
                              T3[j] = swap;
                            }
                              if(T4[l] > T4[j]) {
                              swap = T4[l];
                              T4[l] = T4[j];
                              T4[j] = swap;
                              }
                             if(T5[l] > T5[j]) {
                              swap = T5[l];
                              T5[l] = T5[j];
                              T5[j] = swap;
                            }
                          }
                        }

                /*media das duas melhores pontua�oes dos times*/

                          rank[0]=(T1[0]+T1[1])/2;
                          rank[1]=(T2[0]+T2[1])/2;
                          rank[2]=(T3[0]+T3[1])/2;
                          rank[3]=(T4[0]+T4[1])/2;
                          rank[4]=(T5[0]+T5[1])/2;

                    /*Defini��o inicial da posi��o das equipes*/
                                winner[0]=1;
                                winner[1]=2;
                                winner[2]=3;
                                winner[3]=4;
                                winner[4]=5;

                     /*Ranqueamento das equipes e suas posi��es*/
                          for (l = 0; l<=4; l++)
                           {
                            for (j = (l+1); j<= 4; j++) {
                              if(rank[l] > rank[j]) {
                                swap = rank[l];
                              rank[l] = rank[j];
                              rank[j] = swap;

                              swapT= winner[l];
                              winner[l]=winner[j];
                              winner[j]=swapT;


                            }
                          }
                        }
                        // REALIZAR AQUI A DESCONVERSÃO
                          min[0] = trunc((rank[0]/60));
                          seg[0]= trunc(((rank[0]/60)-min[0])*60);
                          cent[0]=((((rank[0]/60)-min[0])*60)-seg[0])*100;

                          min[1] = trunc((rank[1]/60));
                          seg[1]= trunc(((rank[1]/60)-min[1])*60);
                          cent[1]=((((rank[1]/60)-min[1])*60)-seg[1])*100;

                          min[2] = trunc((rank[2]/60));
                          seg[2]=trunc(((rank[2]/60)-min[2])*60);
                          cent[2]=((((rank[2]/60)-min[2])*60)-seg[2])*100;

                          min[3] = trunc((rank[3]/60));
                          seg[3]=trunc(((rank[3]/60)-min[3])*60);
                          cent[3]=((((rank[3]/60)-min[3])*60)-seg[3])*100; 

                          min[4] =trunc((rank[4]/60));
                          seg[4]=trunc(((rank[4]/60)-min[4])*60);
                          cent[4]=((((rank[4]/60)-min[4])*60)-seg[4])*100; 
                          
                            

                      Classific();



                      scanf("%d",&menuprinc);

                        if(menuprinc==1){
                            goto menup;
                        }

    return 0;
}
                     if(menuprinc==5){
                      
                        exportar = fopen("Exportado.txt","w");
                          printf("digite 1 para Exportar\n");
                              scanf("%d", &num);
                              printf("O Arquivo TXT Foi exportado. \n");
                            while (num != 0){
                                fprintf(exportar, "%c", classificEXP());
                            }fclose(exportar);
}
                        goto menup;



  }
