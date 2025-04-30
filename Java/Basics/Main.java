public class Main {
    public static void main(String[] args) {
        int n = 19;
        boolean l = true;
        for (int i = 0; i < n; i++) {
            l = !(l);
        }
        if (l == true)
            System.out.println("Even");
        else
            System.out.println("Odd");
    }
}