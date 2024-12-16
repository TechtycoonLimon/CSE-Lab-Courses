
package inheritance;

public class Test {
    public static void main(String[] args) {
        Teacher t1 = new Teacher();
        t1.name = "Limon";
        t1.age = 21;
        t1.qualification = "Msc in CSE";
        t1.displayInformation2();
        
        System.out.println("\n");
        
        Teacher t2 = new Teacher();
        t2.name = "Mahid";
        t2.age = 26;
        t2.qualification = "Bsc in Mathmatics";
        t2.displayInformation2();
    }
}
