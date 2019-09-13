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
public class Char {
    public static void main (String[] args){
        char cuco;
        cuco=' ';
        System.out.println("Digite caracter \n");
        Scanner lulo=new Scanner(System.in);
        cuco=lulo.next().charAt(0);
        System.out.println("Su caracter es: "+cuco);
    }
    
}
