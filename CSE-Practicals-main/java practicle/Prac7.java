class Parent {
    void show(){
        System.out.println("Parent Class");
    }
}
public class Prac7 extends Parent {
    public static void main(String[] args) {
        System.out.println("Chield Class");

        Prac7 s=new Prac7();
        s.show();

    }
}
