public class MethodIntroduction {
    public static void greet() {
        System.out.println("Hello! Welcome to the introduction of methods in Java.");
    }
    public static int addNumbers(int a, int b) {
        return a + b;
    }
    public static void main(String[] args) {
        greet();

        int result = addNumbers(5, 10);
        System.out.println("The sum of 5 and 10 is: " + result);
    }
}