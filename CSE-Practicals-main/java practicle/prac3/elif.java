package prac3;

import java.util.Scanner;

public class elif {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Numbers");

        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();

        if(a > b && a>c){
            System.out.println("A is Greater");
        }
        else if(b>a && b>c){
            System.out.println("B is Greater");
        }
        else{
            System.out.println("C is Greater");
        }
    }
}
