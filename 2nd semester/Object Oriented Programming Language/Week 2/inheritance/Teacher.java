/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritance;

/**
 *
 * @author limon
 */
public class Teacher extends person {
    String qualification;
    
    void displayInformation2() {
        displayInformation1();
        System.out.println("Qualification: "+qualification);
    }
}
