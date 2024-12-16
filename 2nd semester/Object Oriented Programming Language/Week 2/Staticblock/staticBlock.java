/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package OOP;

/**
 *
 * @author limon
 */
public class staticBlock {
    static int id;
    static String name;
    
    
   static{
        id = 19;
        name = "Limon";
     }
   static void display(){
       System.out.println("ID: "+id);
       System.out.println("Name: "+name);
}
}
