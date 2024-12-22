package PolymorphismEx02;
public class Rectangle extends shape {
    double length,widht;
    
    Rectangle(double length, double widht){
        this.length = length;
        this.widht = widht;
    }
    @Override
    double displayArea(){
        System.out.print("Area of rectangle: ");
        return length*widht;
        
    }
}
