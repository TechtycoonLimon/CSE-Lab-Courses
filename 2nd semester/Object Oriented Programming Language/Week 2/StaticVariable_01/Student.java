
package StaticVariable_01;

public class Student {
    String name;
    int id;
    static String universityName = "UITS";
    
    Student (String n, int i) {
       name = n;
       id = i;
        
}
    
void displayInformation() {
    System.out.println("Name: "+name);
    System.out.println("ID: "+id);
    System.out.println("Univeristy Name: "+universityName);
}
}
