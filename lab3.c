#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h> //Unncoment in Linux
#include <math.h>
#include <sys/types.h>
#include <getopt.h>
#define FALSE 0
#define TRUE 1

//////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
    printf("\n\n##### Inicio de la ejecucion #####\n\n");
    
    //Manejo de las banderas
    //Variables de entrada
    int bFlag = FALSE;                  //-b bandera que indica si se quieren ver los datos por pantalla
    char * traficoSubida = NULL;        //-u archivo de tráfico de subida 
    char * traficoBajada = NULL;        //-d archivo de tráfico de bajada
    char * traficoOrdinario = NULL;     //-o archivo de tráfico ordinario
    int pisos = 0;                      //-n número de pisos
    int ascensores = 0;                 //-e número de ascensores

    //Variables de procesamiento.
    FILE* fs;

    if (argc < 11) //Si hay menos de 9 argumentos, termina la ejecución del programa y entrega mensaje de error
    {
        printf("La cantidad de argumentos es menor a la requerida\n");
        return 0;
    }
    else
    {
        int c; //Auxiliar
        while ((c = getopt(argc,argv,"u:d:o:n:e:b")) != -1)
        {
            switch(c)
            {
                case 'u':
                    traficoSubida = optarg;
                    break;

                case 'd':
                    traficoBajada = optarg;
                    break;

                case 'o':
                    traficoOrdinario = optarg;
                    break;

                case 'n':
                    sscanf(optarg, "%i", &pisos);
                    break;

                case 'e':
                    sscanf(optarg, "%i", &ascensores);
                    break;

                case 'b':
                    bFlag = TRUE;
                    break;
            }
        }
    }


    printf("\r\n##### Fin de la ejecucion #####\r\n");
    return 0;
}
