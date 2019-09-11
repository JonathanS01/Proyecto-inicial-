/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jona;
import java.io.*;
import java.util.Scanner;

/**
 *
 * @author Aprendiz
 */
public class Jona {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println ("\t\t\tBuenas noches ");
        System.out.print ("\nAprendices \n");
        System.out.println ("Noche ");
        int a=10;
        int b=30;
        int n1,n2,n3,coco=18;
        System.out.println(coco);
        System.out.println("La suma de "+a+" mas "+coco+" y "+b+" es: ");
        n1=a+b+coco;
        System.out.println(n1);
        
        System.out.println("\t\t\tVamos a realizar una suma");
        Scanner tecla=new Scanner (System.in);                
        System.out.println("Ingrese primer numero");
        n1=tecla.nextInt();
        System.out.println("\nIngrese el segundo numero");
        n2=tecla.nextInt();
        n3=n1+n2;
        System.out.println("\nEl resultado de la suma es: "+n3);
    }
    
}
