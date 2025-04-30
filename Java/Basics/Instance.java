public class Instance {
    void showMessage() {
        System.out.println("This is the Instance Method.");
    }

    public static void main(String[] args) {
        Instance obj = new Instance();
        obj.showMessage();
    }
}