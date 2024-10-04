#include <iostream>
int main(int argc, char** argv)
{

	char reserva[10][6]={
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '}
	};
	
//Variaveis: fil = fileira; pol = poltrona; cont = continuar; pass = passagem;
    int fil=-1,ac=-1;
    char pol=' ';
    char cont=' ';
    int pass= 0;
    
    while (true){
        printf("\nDigite a fileira (1-10): ");
        scanf("%d", &fil);
        printf("\nDigite a poltrona [A][B][C][D][E][F]: ");
        scanf(" %c", &pol);
        printf("\nQual o tipo de passagem?(1-Executivo, 2-Economico)");
        scanf("%d", &pass);

        if(pass==1){
            switch(pol){
            case 'A': case 'a': ac=0; break;
            case 'B': case 'b': ac=1; break;
            case 'C': case 'c': ac=2; break;
            case 'D': case 'd': ac=3; break;
            case 'E': case 'e': ac=4; break;
            case 'F': case 'f': ac=5; break;
            default:
                printf("\nPoltrona invalida");
                break;
            }


            if(reserva[fil-1][ac]=='x'){
                printf("\n Esse assento ja� esta� reservado. Por favor, escolha outro.");
            }else{
                reserva[fil-1][ac] = 'x';
            }
        }
        else
        {
            switch(pol){
            case 'B': case 'b': ac=1; break;
            case 'C': case 'c': ac=2; break;
            case 'D': case 'd': ac=3; break;
            case 'E': case 'e': ac=4; break;
            default:
                printf("\n N�o � permitido reservar assentos nas janelas para passagens economicas");
                fil=-1;
                ac=-1;
                break;

            }

            if(reserva[fil-1][ac]=='x'){
                printf("\n Esse assento ja� esta� reservado. Por favor, escolha outro.");
            }else{
                reserva[fil-1][ac] = 'x';
            }

        }



        printf("\n\t\t[A] [B] [C]\t[D] [E] [F]\n");
for (int x=0; x<10; x++){

            if (x<9)    printf("\n\t0%d\t", x+1);
            else        printf("\n\t%d\t", x+1);

            for (int y=0; y<6; y++){
                printf("[%c] ", reserva[x][y]);
                if (y==2){
                    printf("\t");
                }
            }
        }
        printf("\n");

     
        printf("\nDeseja reservar outra passagem? (s/n)");
        scanf(" %c", &cont);
        if(cont=='N'||cont=='n'){
            printf("\nObrigado por viajar com ArthurAirPlane");
            break;
        }

    }
    return 0;

}
