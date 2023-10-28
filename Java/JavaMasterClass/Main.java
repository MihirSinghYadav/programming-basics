public class Main {
    public static void main(String[] args) {
        Car car = new Car();
        car.setMake("Lamborghini");
        car.setModel("Taycan Turbo S");
        car.setColor("Red");
        car.setDoors(2);
        car.setConvertible(true);

        System.out.println("Car Details :");
        System.out.println("Make  : " + car.getMake());
        System.out.println("Model : " + car.getModel());
        System.out.println("Color : " + car.getColor());
        System.out.println("Doors : " + car.getDoors());

        car.describeCar();


        ///////////////////////////////////////////////////////////////
        System.out.println("\nBank Details:");
        BankAccount mihir = new BankAccount();
        mihir.setAccountNumber("461684");
        mihir.setAccountBalance(68468);
        mihir.setCustomerName("Mihir");
        mihir.setCustomerEmail("myemail@email.com");
        mihir.setCustomerPhone("+91 1234554321");


        mihir.depositFunds(200_000);
        mihir.withdrawFunds(50_000);

        BankAccount lucky = new BankAccount("654645","Lucky","email@email.com","9519519651",1654654.4156);
        lucky.getDetails();
    }
}
