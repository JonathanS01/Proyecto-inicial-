package jona;
import java.io.*;
import java.util.Scanner;
public class tres_numeros {
    public static void main (String[] args){
        int x1,x2,x3,z = 0;
        Scanner play=new Scanner(System.in);
        System.out.println("\t\t\tOrdenar numeros de mayor a menor \n");
        System.out.println("Ingrese primer numero");
        x1=play.nextInt();
        System.out.println("");
        System.out.println("Ingrese segundo numero");
        x2=play.nextInt();
        System.out.println("");
        System.out.println("Ingrese tercero numero");
        x3=play.nextInt();
        System.out.println("");
        System.out.println("\n");
          if(x1>=x2 && x2>=x3)
        {
            System.out.println("El numero mayor es: "+x1); 
            System.out.println("El numero medio es: "+x2);
            System.out.println("El numero menor es: "+x3);
        }
        else if (x1>=x3 && x3>=x2)
        {             
            System.out.println("El numero mayor es: "+x1);
            System.out.println("El numero medio es: "+x3);
            System.out.println("El numero menor es: "+x2);
        }        
        else if (x2>=x1 && x1>=x3)
        {
            System.out.println("El numero mayor es: "+x2);
            System.out.println("El numero medio es: "+x1);
            System.out.println("El numero menor es: "+x3);
        }        
        else if (x2>=x3 && x3>=x1)
        {             
            System.out.println("El numero mayor es: "+x2);
            System.out.println("El numero medio es: "+x3);
            System.out.println("El numero menor es: "+x1);           
        }
        else if (x3>=x1 && x1>=x2)
        {             
            System.out.println("El numero mayor es: "+x3);
            System.out.println("El numero medio es: "+x1);
            System.out.println("El numero menor es: "+x2);
        }
        else
        {
          System.out.println("El numero mayor es: "+x3);
          System.out.println("El numero medio es: "+x2);
          System.out.println("El numero menor es: "+x1);
        }
    }
    
}
