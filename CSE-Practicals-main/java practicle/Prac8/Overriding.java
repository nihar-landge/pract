package Prac8;

class parent{
    void add(){
        System.out.println("Parent Class");
    }
}

class Overriding extends parent{
    void add(){
        System.out.println("Child Class");
    }
    public static void main(String[] args) {
        Overriding obj=new Overriding();
        obj.add();
        obj.add();
    }

}
