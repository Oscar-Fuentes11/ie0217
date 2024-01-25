from person import Person

class teacher(Person):
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)  # Llama al constructor de la clase padre (Person).
        self.employee_id = employee_id  
        self.courses_taught = []         # Inicializa una lista vacia para almacenar los cursos que da el profesor.

    # Este metodo agrega un curso a la lista de cursos que da el profesor.
    def assign_courses(self, course):
        self.courses_taught.append(course) 

    # Sobreescribe el metodo display_info de la clase padre para incluir informacion especifica del profesor.
    def display_info(self):
        super().display_info()  
        print(f"Employee ID: {self.employee_id}\
              \nCourses taught: {', '.join(self.courses_taught)}\n")
