class DefaultMethodDemo {
    public static void main(String[] args) {
        MyIFImp obj = new MyIFImp();
        System.out.println(obj.getNumber());
        System.out.println(obj.getString());

        System.out.println();

        MyIFImp2 obj2 = new MyIFImp2();
        System.out.println(obj2.getNumber());
        System.out.println(obj2.getString());

        System.out.println();
        System.out.println(MyIF.getDefaultNumber());
    }
}
