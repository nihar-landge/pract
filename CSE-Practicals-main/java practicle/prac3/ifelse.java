package prac3;

import java.util.Scanner;

public class ifelse {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter your age :");
        int age =sc.nextInt();
        if(age >= 18){
            System.out.println("You are elligible for voting ");
        }
        else{
            System.out.println("You not are elligible for voting ");
        }
    }
}
