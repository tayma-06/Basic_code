public class Rectangle {
    private int length;
    private int width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = length;
    }

    public int calculateArea() {
        return length * width;
    }

    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 3);
        int area = rectangle.calculateArea();
        System.out.println("The area of the rectangle is : " + area);
    }
}
