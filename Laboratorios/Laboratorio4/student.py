from person import Person

class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)  # Llama al constructor de la clase padre (Person) para establecer name y age.
        self.student_id = student_id  
        self.courses = []            

    # Este metodo agrega por asi decirlo, un curso a la lista de cursos del estudiante.
    def enroll_course(self, course):
        self.courses.append(course)  # Agrega el curso a la lista 'courses' que tiramos anteriormente.

    # Sobreescribe el método display_info de la clase padre para incluir información específica del estudiante.
    def display_info(self):
        super().display_info() 
        print(f"Student ID: {self.student_id}\
              \n Courses: {', '.join(self.courses)}\n")


        
