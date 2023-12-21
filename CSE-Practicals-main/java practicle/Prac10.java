public class Prac10 {
    public static void main(String[] args) {
        try {
            int a = 5;
            int b = 0;
            int c = a / b;
            System.out.println("Division is :" + c);

        } catch (ArithmeticException e) {
            System.out.println("Zero Division Error");
        }
    }
}
