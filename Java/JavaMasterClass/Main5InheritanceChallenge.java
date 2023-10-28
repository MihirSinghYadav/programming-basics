public class Main5InheritanceChallenge {

    public static void main(String[] args) {
        Worker worker = new Worker("Rob Jobs", "01/01/2000");
        System.out.println(worker);

        Employee employee = new Employee("Rob Jobs","01/01/2000", "01/01/2024");
        System.out.println(employee);
        System.out.println("Age = " + employee.getAge());
        System.out.println("Pay = " + employee.collectPay());

        SalariedEmployee employee2 = new SalariedEmployee("Job Robs" , "11/11/2002","11/11/2020",35000);
        System.out.println(employee2);
        System.out.println("Age = " + employee2.getAge());
        System.out.println("Pay = " + employee2.collectPay());
        employee2.retire();
        System.out.println("Employee2 Pension check = $" + employee2.collectPay());

        HourlyEmployee mary = new HourlyEmployee("Mary","11/11/2002","11/11/2020",15);
        System.out.println(mary);
        System.out.println("Mary's Paycheck = $"+mary.collectPay());
        System.out.println("Mary's Holiday Pay = $"+mary.getDoublePay());
    }

}
