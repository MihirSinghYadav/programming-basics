import java.util.*;

class GregorianCalendarDemo {
    public static void main(String[] args) {
        String months[] = {
                "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
        };
        int year;
        GregorianCalendar gCalendar = new GregorianCalendar();
        System.out.print("Date: ");
        System.out.print(months[gCalendar.get(Calendar.MONTH)]);
        System.out.print(" " + gCalendar.get(Calendar.DATE) + " ");
        System.out.println(year = gCalendar.get(Calendar.YEAR));

        System.out.print("Time: ");
        System.out.print(gCalendar.get(Calendar.HOUR) + ": ");
        System.out.print(gCalendar.get(Calendar.MINUTE) + ": ");
        System.out.println(gCalendar.get(Calendar.SECOND));

        if (gCalendar.isLeapYear(year)) {
            System.out.println("The current year is a leap year");
        } else {
            System.out.println("The current year is not a leap year");
        }
    }
}
