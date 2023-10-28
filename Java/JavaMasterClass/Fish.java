public class Fish extends Animal{
     private int gills, fins;

    public Fish(String type, double weight, int gills, int fins) {
        super(type, "size", weight);
        this.gills = gills;
        this.fins = fins;
    }

    private void moveMuscles(){
        System.out.print("Muscles Moving...");
    }

    private void moveBackFin(){
        System.out.print("Back Fin Moving...");
    }

    @Override
    public void move(String speed) {
        super.move(speed);
        moveMuscles();
        if(speed == "fast"){
            moveBackFin();
        }
        System.out.println();
    }

    @Override
    public String toString() {
        return "Fish{" +
                "gills=" + gills +
                ", fins=" + fins +
                "} " + super.toString();
    }
}
