package jona;
import java.io.*;
import java.util.Scanner;
public class do_while {
    public static void main (String[] args){
        Scanner pichona=new Scanner(System.in);
        int n1=pichona.nextInt();
        int n2=pichona.nextInt();
        do
        {
            System.out.println("Error el segundo numero tiene que ser mayor que el primero");
            n2=pichona.nextInt();
        }
        while(n2<=n1);
        
        do
        {
            System.out.println(n1);
            n1++;
        }
        while(n1<=n2);
    }
}
