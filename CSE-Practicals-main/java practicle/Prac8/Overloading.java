package Prac8;

public class Overloading {

    int add(int a,int b){

        int c=a+b;
        System.out.println("addition is :"+c);
        return 0;


    }

    void add(int a,int b,int c){
        int d=a+b+c;
        System.out.println("addition is :"+d);
    }

    public static void main(String[] args) {
        Overloading s=new Overloading();
        s.add(2,5);
        s.add(2,5,2);

    }
}