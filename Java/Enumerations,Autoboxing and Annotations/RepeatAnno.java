import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@Repeatable(MyRepeatedAnnos.class)
@interface MyAnno1 {
    String str() default "Testing";

    int val() default 9000;
}

@Retention(RetentionPolicy.RUNTIME)
@interface MyRepeatedAnnos {
    MyAnno1[] value();
}

class RepeatAnno {
    @MyAnno1(str = "First annotation", val = -1)
    @MyAnno1(str = "Second annotation", val = 100)
    public static void myMeth(String str, int i) {
        RepeatAnno ob = new RepeatAnno();
        try {
            Class<?> c = ob.getClass();
            Method m = c.getMethod("myMeth", String.class, int.class);
            Annotation anno = m.getAnnotation(MyRepeatedAnnos.class);
            System.out.println(anno);
        } catch (NoSuchMethodException exc) {
            System.out.println("Method Not Found.");
        }
    }

    public static void main(String[] args) {
        myMeth("test", 10);
    }
}
