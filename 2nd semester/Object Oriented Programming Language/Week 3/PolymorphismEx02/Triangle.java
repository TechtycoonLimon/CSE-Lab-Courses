package PolymorphismEx02;
public class Triangle extends shape {
    double base,height;
    
    Triangle(double base, double height){
        this.base = base;
        this.height = height;
    }
    double displayArea(){
        System.out.print("Area of triangle: ");
        return 0.5*base*height;
    }
}
