public class Main2 {
    public static void main(String[] args) {
        String[] students_list = {"Mary","Carol","Tim","Harry","Lisa","Anonymous"};

        for(int i=0;i<5;i++){
            LPAStudent s = new LPAStudent("S92300"+i, students_list[i],"05/11/1985","Java Masterclass");
            System.out.println(s);
        }

        Student pojoStudent = new Student("s923005","Ann","05/11/1985","Java Masterclass");
        LPAStudent recordStudent = new LPAStudent("s923006","Lauren","06/11/2004","Java Masterclass");

        System.out.println(pojoStudent);
        System.out.println(recordStudent);

        pojoStudent.setClassList(pojoStudent.getClassList() + ", JAVA 17");
        //recordStudent.setClassList(pojoStudent.getClassList() + ", JAVA 17");


        System.out.println(pojoStudent.getName()+ " is taking " + pojoStudent.getClassList());
        System.out.println(recordStudent.name()+ " is taking " + recordStudent.classList());

    }
}
