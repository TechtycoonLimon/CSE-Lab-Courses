package abstraction;
public class test {
    public static void main(String[] args) {
        MobileUser mu; // reference variable
        mu = new Limon();
        mu.sendMassage();
        
        mu = new Shajjad();
        mu.sendMassage();
    }
}
