class StringReplace {
    public static void main(String[] args) {
        String org = "This is a test. This is, too.";
        String search = "is";
        String sub = "was";
        String result = "";
        int i;
        do {
            System.out.println(org);
            i = org.indexOf(search);
            if (i != -1) {
                result = org.substring(0, i);
                result = result + sub;
                result = result + org.substring(i + search.length());
                org = result;
            }
        } while (i != -1);

        String s1 = "one";
        System.out.println(s1);

        String s2 = s1.concat("two");
        System.out.println(s2);

        String s3 = s2 + "three";
        System.out.println(s3);

        String s4 = "Hello".replace('l', 'w');
        System.out.println(s4);

        String s5 = "Hello Everything".replace("thing", "one");
        System.out.println(s5);
    }
}
