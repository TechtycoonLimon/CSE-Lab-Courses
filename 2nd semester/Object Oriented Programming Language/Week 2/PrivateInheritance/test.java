
package privateInheritance;

public class test {
    public static void main(String[] args) {
        Teacher t1 = new Teacher();
        t1.setName("Shahed Hossain Limon");
        t1.setAge(21);
        t1.setQualification("Msc in CSE");
        t1.displayInformation();
     
        Teacher t2 = new Teacher();
        t2.setName("Shajjad Hossain Shoyeb");
        t2.setAge(21);
        t2.setQualification("PhD in Management");
        t2.displayInformation();
    }
}
