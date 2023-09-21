public class OOP1 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Jashan";
        s1.marks = 90;
        s1.rollno = 211557;
        Student s2 = new Student(s1);
        System.out.println(s2.name);
        System.out.println(s1.rollno);
        Student s3 = s2;
        s3.name = "hargun";
        System.out.println(s2.name);  //here s3 is pointing to the same object
        s1.greeting();
    }
    


  
}
  class Student
    {
        int rollno;
        String name;
        int marks;

        //Constuctors
    Student()   //unparametrised constructor
    {        //internally this is replaced by the class name
              this(13,"sehaj",100);
    }    
    Student(int rno,String name,int marks) //parameterised constructors
        {
            this.rollno = rno;
            this.name = name;
            this.marks = marks;
        }

    Student(Student obj)
    {
          this.rollno = obj.rollno;
        this.name = obj.name;
        this.marks = obj.marks;
    }
        void greeting()
        {
            System.out.println("Hello my name is " + name);
        }
    }