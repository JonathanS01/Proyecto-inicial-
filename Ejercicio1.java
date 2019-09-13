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
public class Ejercicio1 {
    public static void main (String[] args){
        Scanner pichon=new Scanner(System.in);
        int numero1=pichon.nextInt();
        int numero2=pichon.nextInt();
        while(numero2<=numero1){
            System.out.println("Error el segundo numero tiene que ser mayor que el primero");
            numero2=pichon.nextInt();
        }
        while(numero1<=numero2){
            System.out.println(numero1);
            numero1++;
        } 
    }    
}
