import java.util.Scanner;

public class prac5 {
    prac5(int a,int b){


        int c = a+b;
        System.out.println("Addition is :"+c);
    }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        System.out.println("Enter 1st Number :");

        int d=sc.nextInt();

        System.out.println("Enter 2nd Number :");
        int e=sc.nextInt();

        prac5 c =new prac5(d,e);
    }
}
