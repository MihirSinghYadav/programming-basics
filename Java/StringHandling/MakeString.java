class MakeString {
    public static void main(String[] args) {
        char chars[] = { 'a', 'b', 'c' };
        String s1 = new String(chars);
        System.out.println(s1);

        char chars2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
        String s2 = new String(chars2, 2, 3);
        System.out.println(s2);

        char c[] = { 'J', 'a', 'v', 'a' };
        String s3 = new String(c);
        String s4 = new String(s3);

        System.out.println(s3);
        System.out.println(s4);
    }
}
