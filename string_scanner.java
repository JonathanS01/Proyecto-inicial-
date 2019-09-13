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
public class string_scanner {
    public static void main (String[] args){
        Scanner sc=new Scanner(System.in);
        String nombre,apellido;
        System.out.println("\t\t\tAplicativo para ingresar tus nombres y apellidos \n");
        System.out.println("Ingresa tu nombre");
        nombre=sc.nextLine();
        System.out.println("Ingresa tu apellido");
        apellido=sc.nextLine();
        System.out.println("\n");
        System.out.println("Tu nombre es: "+nombre+" y tu apellido es: "+apellido );
    }
}
