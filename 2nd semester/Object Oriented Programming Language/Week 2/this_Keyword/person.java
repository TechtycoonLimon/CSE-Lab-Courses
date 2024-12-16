package this_Keyword;

public class person { 
   String name;
   int age;
   String hairColor; // Consistent naming convention

  // Constructor with name and age
  public person(String name, int age) {
    this.name = name;
    this.age = age;
  }

  // Constructor with name, age, and hair color
  public person(String name, int age, String hairColor) {
    this(name, age); // Call the other constructor for common initialization
    this.hairColor = hairColor;
  }

  // Display method
  public void display() {
    System.out.println("Name: " + name);
    System.out.println("Age: " + age);
    System.out.println("Hair Color: " + hairColor);
    System.out.println("\n");
  }
}