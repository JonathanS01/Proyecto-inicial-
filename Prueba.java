package prueba;
import java.io.*;
import java.util.Scanner;

public class Prueba {

    public static void main(String[] args)
    {
        int cant,i,j,fila,columna,auxiliar;
        int vector[]= new int[50];
        Scanner x= new Scanner(System.in);
        System.out.print("Digite la cantidad de elementos a ingresar: ");
        cant= x.nextInt();
        for (i=0;i<cant;i++)
        {
           System.out.print("Ingrese el numero del vector: "+ i+"\t");
           vector[i]= x.nextInt();
        }
        for (fila=0;fila<=cant-1;fila++)
            {
                for (columna=0;columna<=cant-1;columna++ )
                {
                    if (vector[columna]>vector[columna+1])
                    {
                        auxiliar=vector[columna];
                        vector[columna]=vector[columna+1];
                        vector[columna+1]=auxiliar;
                    }
                 }
            }
        System.out.println("\nAscendente: ");
        for (i=1;i<=cant;i++)
            {
            System.out.println(" "+vector[i]);
            }
        
        System.out.println("\nDescendente: ");
        for (i=cant;i>=1;i--)
            {   
                System.out.println(" "+vector[i]);
            }
                System.out.println("\n");    
    }
}
    
    
