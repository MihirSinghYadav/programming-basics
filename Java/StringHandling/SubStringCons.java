class SubStringCons {
    public static void main(String[] args) {
        byte ascii[] = { 65, 66, 67, 68, 69, 70 };
        String s1 = new String(ascii);
        System.out.println(s1);
        String s2 = new String(ascii, 2, 3);
        System.out.println(s2);
        System.out.println(s2.length());

        String s3 = "abc";
        System.out.println(s3);
        System.out.println("Hello world".length());
    }
}
