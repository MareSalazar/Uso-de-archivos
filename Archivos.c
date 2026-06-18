#include<stdio.h>
#include<string.h>

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
void guardarArchivo();


int main(){
    //p1 ahora se va a llamar clase, estoy creando un arreglo
    Alumno clase[2];
    strcpy(clase[0].nombre, "Juan");
    strcpy(clase[0].direccion.callePrincipal, "Av. 10 de Diciembre" );
    strcpy(clase[0].direccion.calleSecundaria, "Republica");
    clase[0].direccion.numCasa=123;
    clase[0].edad= 20;
    strcpy(clase[1].nombre, "Maria");
    strcpy(clase[1].direccion.callePrincipal, "Av.Galo Plaza" );
    strcpy(clase[1].direccion.calleSecundaria, "Albeniz");
    clase[1].direccion.numCasa=123;
    clase[1].edad= 25;
    
    mostrarAlumno(clase);
    
    
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

void guardarArchivo(){
    FILE *archivo = ("alumnos.txt","w");
    //(.txt) es para referirnos a archivos planos, es decir solo de texto
    //Modificador de acceso write (w)
};
