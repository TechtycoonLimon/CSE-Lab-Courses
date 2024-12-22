package Final_keyword;
public class University {
   final String UNIVERSITY_NAME =  "UITS" ;
   final int fees; //Blank final variable.
   
   University(){
       fees = 80000;
}
   void display(){
       System.out.println("University: "+UNIVERSITY_NAME);
       System.out.println("Fees: "+fees);
   }
}
