class StringJoinDemo {
    public static void main(String[] args) {
        String result = String.join(" ", "Alpha", "Beta", "Gamma");
        System.out.println(result);
        result = String.join(", ", "MSY", "ID#: 137", "E-mail: MSY@Ultimate.com");
        System.out.println(result);
    }
}
