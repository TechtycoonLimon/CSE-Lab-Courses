package Polymorphism;

public class testPolymorphism {
     public static void main(String[] args) {
        Person p = new Person();
        p.display();
        
        Teacher p1 = new Teacher();
        p1.display();
        
        p = new Student();
        p.display();
    }
}
