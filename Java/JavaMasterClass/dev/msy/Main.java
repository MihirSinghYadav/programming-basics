package dev.msy;

import com.abc.first.*;

public class Main {
    public static void main(String[] args) {
        Item firstItem = new Item("Burger");
        System.out.println(firstItem);

        com.abc.first.Item secondItem = new com.abc.first.Item("Coffee");
        System.out.println(secondItem);
    }
}
