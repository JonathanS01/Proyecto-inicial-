package prueba;
import java.io.*;
import java.util.Scanner;

public class Matriz {
    public static void main(String[] args){
    Scanner z= new Scanner(System.in);   
    int[][] cantidad = new int[4][4];
		for (int i = 0;i < 4;i++)
		{
				for (int j = 0;j < 4;j++)
				{
						System.out.print("Digite un numero [i][j] \n");						
						cantidad [i][j]=z.nextInt(); ;
				}
		}
		System.out.println("\t\t\tImprimiendo... \n");
		for (int i = 0;i < 4;i++)
		{
				System.out.print("*****************************************************************\n");
				System.out.print("*");
				for (int j = 0;j < 4;j++)
				{
						System.out.print("\t");
						System.out.print(cantidad [i][j]);
						System.out.print("\t*");
				}
				System.out.print("\n");
		}
		System.out.print("*****************************************************************");
		System.out.print("\n");
		System.out.print("\n");
		System.out.print("\t\t\t Matriz transpuesta");
		System.out.print("\n");
		System.out.print("\n");
		for (int i = 0;i < 4;i++)
		{
				System.out.print("*****************************************************************\n");
				System.out.print("*");
				for (int j = 0;j < 4;j++)
				{
						System.out.print("\t");
						System.out.print(cantidad [j][i]);
						System.out.print("\t*");
				}
				System.out.print("\n");
		}
		System.out.print("*****************************************************************");
	}

}

