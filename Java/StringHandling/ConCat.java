public class ConCat {
    public static void main(String[] args) {
        int age = 9;
        String s1 = "He is " + age + " years old.";
        System.out.println(s1);

        String longStr = "This could have been " +
                "a very long line that would have " +
                "wrapped around. But string concatenation " +
                "prevents this.";
        System.out.println(longStr);
        String s2 = "Four : " + 2 + 2;
        System.out.println(s2);
        String s3 = "Four : " + (2 + 2);
        System.out.println(s3);
    }
}
