
package ThreadEx01;
public class ThreadExample1 extends Thread {
    public void run(){
        int a = 10;
        int b = 20;
        int result = a + b;
        System.out.println("Thread started running..");
        System.out.println("Sum of two numbers: "+result);
    }
    public static void main(String[] args) {
        ThreadExample1 t1 = new ThreadExample1();
        t1.start();
    }
}
