package abstractionPS01;
public class Circle extends Shape {
    double r;
    Circle(double r){
        super(r,r);
    }
 void area(){
 double result = 3.1416 * dim1 * dim2;
 System.out.println("The Circle area is: "+result);
  }
}
