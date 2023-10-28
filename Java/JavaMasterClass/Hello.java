public class Hello {
    public static void main(String[] args){
        System.out.println("Hello, Mihir");
        System.out.println("Hello world");

        boolean isAlien = false;
        if(!isAlien) {
            System.out.println("It is not a alien!");
        }
        {System.out.println("hello");}

        double a = 20.00;
        double b = 80.00;
        double c = (a + b) * 100.00;
        double d = c % 40.00;
        boolean rem = (d == 0.00);
        System.out.println("Rem = " + rem);
        if(!rem)
            System.out.println("Got some remainder");



        boolean isCar = false;
        if(isCar = true)
            System.out.println("This is not supposed to happen");

        String makeOfCar = "Audi";
        boolean isDomestic = makeOfCar == "Audi" ? false : true;
        if(isDomestic)
            System.out.println("This car is domestic to our country");
    }
}
