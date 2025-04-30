class Dog {
    String color;
    String eyeColor;
    double height;
    double lenght;
    double weight;

    Dog(String color, String eyeColor, double height, double lenght, double weight) {
        this.color = color;
        this.eyeColor = eyeColor;
        this.height = height;
        this.lenght = lenght;
        this.weight = weight;
    }

    void sit() {
        System.out.println("The dog is sitting down.");
    }

    void layDown() {
        System.out.println("The dog is laying down.");
    }

    void shake() {
        System.out.println("The dog is shaking hands.");
    }

    void come() {
        System.out.println("The dog is coming.");
    }

    void checkWeight() {
        if (weight > 20.0) {
            System.out.println("The dog is overweight.");
        } else {
            System.out.println("The dog is at a healthy weight.");
        }
    }

    void checkHeight() {
        if (height > 20) {
            System.out.println("The dog is tall.");
        } else {
            System.out.println("The dog is of average height.");
        }
    }

    public static void main(String[] args) {
        Dog bobby = new Dog("yellow", "brown", 17.0, 35.0, 24.0);
        bobby.sit();
        bobby.layDown();
        bobby.shake();
        bobby.come();
        bobby.checkWeight();
        bobby.checkHeight();
    }
}
