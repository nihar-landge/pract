abstract class Bike{
    abstract void run();
}
class Prac9 extends Bike {
    void run(){
        System.out.println("Bike Running ");
    }

    public static void main(String[] args) {
        Bike b=new Prac9();
        b.run();
    }


}