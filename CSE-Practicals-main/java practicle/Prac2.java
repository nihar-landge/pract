import java.util.Scanner;

public class Prac2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter 1st No. :");
        int a=sc.nextInt();

        System.out.println("Enter 2nd No. :");
        int b=sc.nextInt();

        int c=a+b;
        System.out.println("Addition is :"+c);

        int s=a-b;
        System.out.println("Subtraction is :"+s);

        int m=a*b;
        System.out.println("Multiplication is :"+m);

        int d=a/b;
        System.out.println("Division is :"+d);

    }
}
