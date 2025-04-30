public class MethodIntroduction {
    public static void greet() {
        System.out.println("Hola!");
    }

    public static int addNumbers(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        greet();
        int sum = addNumbers(5, 6);
        System.out.println("The sum of the two numbers is: " + sum);
    }
}