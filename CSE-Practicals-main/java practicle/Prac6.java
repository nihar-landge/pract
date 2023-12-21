public class Prac6 {
    String name;
    int emp_id;

    Prac6(String s, int e) {
        name = s;
        emp_id = e;
    }

    public void show() {
        System.out.println("Employee Name :" + name);
        System.out.println("Emplyee emp_id :" + emp_id);
    }

    public static void main(String[] args) {
        Prac6[] obj = new Prac6[2];
        obj[0] = new Prac6("Sam", 104);
        obj[1] = new Prac6("joy", 105);
        obj[0].show();
        obj[1].show();
    }
}
