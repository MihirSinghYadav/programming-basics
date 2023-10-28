public class BankAccount {

    private String accountNumber, customerName, customerEmail, customerPhone;
    private double accountBalance;

    public BankAccount(){
        this("0", "Default Name", "Default Email Address", "Default Phone", 0);
        System.out.println("Empty Constructor called.");
    }

    public BankAccount(String accountNumber, String customerName, String email, String phone, double accountBalance) {
        this.accountNumber = accountNumber;
        this.customerName = customerName;
        customerEmail = email;
        customerPhone = phone;
        this.accountBalance = accountBalance;
    }

    public void depositFunds(double depositAmount){
        accountBalance += depositAmount;
        System.out.println("Deposit of $" + depositAmount + " made. New account balance is : $" + accountBalance);
    }

    public void withdrawFunds(double withdrawAmount){
        if(accountBalance - withdrawAmount < 0)
            System.out.println("Insufficient Funds! You have only $"+accountBalance+" in your account.");
        else {
            accountBalance -= withdrawAmount;
            System.out.println("Withdrawal of $" + withdrawAmount + " processed. Remaining balance is : $" + accountBalance);
        }
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerEmail() {
        return customerEmail;
    }

    public void setCustomerEmail(String customerEmail) {
        this.customerEmail = customerEmail;
    }

    public String getCustomerPhone() {
        return customerPhone;
    }

    public void setCustomerPhone(String customerPhone) {
        this.customerPhone = customerPhone;
    }

    public double getAccountBalance() {
        return accountBalance;
    }

    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
    }

    public void getDetails(){
        System.out.println("\nAccount Details:\n" +
                "Account Number: " + accountNumber + "\n" +
                "Customer Name: " + customerName + "\n" +
                "Customer Email: " + customerEmail + "\n" +
                "Customer Phone: " + customerPhone + "\n" +
                "Account Balance: $" + accountBalance);
    }
}
