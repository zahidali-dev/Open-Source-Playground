// Parent class
class Person {
    String name;
    int age;

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Child class (inherits Person)
class Student extends Person {
    String university;

    void showStudentInfo() {
        display();  // calling parent method
        System.out.println("University: " + university);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create Student object
        Student s1 = new Student();

        // Set values
        s1.name = "Mahnoor";
        s1.age = 20;
        s1.university = "MUET SZAB";

        // Call method
        s1.showStudentInfo();
    }
}


Explanation:
Person (Parent class) → Has name, age and method display().
Student (Child class) → Inherits Person, so it gets name, age, and display() automatically. It also adds its own variable university.
In main(), we made a Student object and gave values.
s1.showStudentInfo() prints student details using both parent & child class methods.
This shows Inheritance (reusing parent class features in child class).
