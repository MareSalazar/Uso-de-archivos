#include<stdio.h>
#include<string.h>
#include<stdio.h>

typedef struct  {
    char callePrincipal[50];
    int numCasa;
    char calleSecundaria[50];
}Direccion;
typedef struct {
    char nombre[50];
    int edad;
    Direccion direccion;
} Alumno;

void mostrarAlumno(Alumno *a);
void guardarArchivo(Alumno *a);


int main(){
    //p1 ahora se va a llamar clase, estoy creando un arreglo
    Alumno clase[2];
    strcpy(clase[0].nombre, "Juan");
    strcpy(clase[0].direccion.callePrincipal, "Av. Prensa" );
    strcpy(clase[0].direccion.calleSecundaria, "Florida");
    clase[0].direccion.numCasa=123;
    clase[0].edad= 20;
    strcpy(clase[1].nombre, "Maria");
    strcpy(clase[1].direccion.callePrincipal, "Av.Galo Plaza" );
    strcpy(clase[1].direccion.calleSecundaria, "Inca");
    clase[1].direccion.numCasa=123;
    clase[1].edad= 25;
    
    mostrarAlumno(clase);
    guardarArchivo(clase);
    
    return 0; 
}

void mostrarAlumno(Alumno *a){
    for (int i=0; i<2; i++){
    printf ("Nombre:%s \n", a[i].nombre);
    printf ("Edad:%d \n", a[i].edad);
    printf ("Direccion: %s", a[i].direccion.callePrincipal);
    printf (" %d", a[i].direccion.numCasa);
    printf (" %s", a[i].direccion.calleSecundaria);
    printf ("\n");
    }
};

void guardarArchivo(Alumno *a){
    FILE *archivo = fopen ("alumnos.txt","w");
    //(.txt) es para referirnos a archivos planos, es decir solo de texto
    //Modificador de acceso write (w)
    for (int i; i<2; i++){
    fprintf(archivo, "Nombre:%s \n" , a[i].nombre);
    //fprintf necesita el paso de referencia, primero el nombre de el puntero y el dato
    fprintf(archivo, "Edad: %d \n " , a[i].edad);
    fprintf(archivo,"Direccion: %s %d %s", a[i].direccion.callePrincipal,a[i].direccion.numCasa, a[i].direccion.calleSecundaria );

    }
    fclose(archivo);
    
};
 