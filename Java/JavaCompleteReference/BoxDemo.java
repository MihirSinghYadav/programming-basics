class Box {
    double height;
    double width;
    double depth;
}

class BoxDemo {
    public static void main(String[] args) {
        Box myBox = new Box();
        double volume;
        myBox.height = 10;
        myBox.width = 20;
        myBox.depth = 15;
        volume = myBox.height * myBox.width * myBox.depth;
        System.out.println("Volume is " + volume);
    }
}
