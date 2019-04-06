#include <stdio.h>
#include <stdlib.h>

int dameEdad(int*edad,char*mensaje);
int dameEdadDos(int*edad,char*mensaje);
int dameEdadTres(int*edad,char*mensaje);

int main()
{
    int miEdad;
    int seCargo;
    int contador=0;
    do{

        seCargo=dameEdadTres(&miEdad,"\nQue edad tenes? : ");
        contador++;
    }while(seCargo==0 && contador<3);
    if(contador<3)
    {
    printf("La edad ingresada es: %d",miEdad);
    }else
    {
        printf("perdio");
    }



    /*int laEdad;

    if(dameEdadTres(&laEdad,"dame la edad\n")==1)
    {
        printf("\nLa edad es %d",laEdad);
    }else
    {
        printf("No se pudo");
    }


*/
    return 0;
}
/** \brief edad pide una edad y la muestra en pantalla
 *
 * \param  mensaje ingresada por el usuario.
 * \param mensaje de pedido de edad.
 * \return si se pudo lo muestra en pantalla.
 *
 */
int dameEdad(int*edad,char*mensaje)
{
    int sePudo=0;
    int aux;

    printf(mensaje);

    sePudo=scanf("%d",&aux);

    if(sePudo==1)
    {
        *edad=aux;

    }
    return sePudo;
}
int dameEdadDos(int*edad,char*mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;

    printf(mensaje);

    sePudo=scanf("%s",cadenaCargada);

    *edad=atoi(cadenaCargada);

    return sePudo;

}
int dameEdadTres(int*edad,char*mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;
    int i;

    printf(mensaje);

    sePudo=scanf("%s",cadenaCargada);
    for(i=0;i<strlen(cadenaCargada);i++)
    {
        if(cadenaCargada[i]<'0' || cadenaCargada[i]>'9')
        {
            sePudo=0;
        }
    }
    if(sePudo==1)
    {
        *edad=atoi(cadenaCargada);
    }

    return sePudo;


}










///strlen ---> lo largo de la cadena.
///atoi() ---> recibe cadenas de caracteres y devuelve enteros.
///* , [] ---> punteros de memoria.
