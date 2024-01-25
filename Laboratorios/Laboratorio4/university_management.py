from student import Student
from teacher import teacher
from course import Course

student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 28, "B35159")

teacher1= teacher("Jorge Romero", 65, "123456")
teacher2= teacher("Luis Diego Marin", 61, "22222")

course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

student1.enroll_course(course1.course_code)
student2.enroll_course(course2.course_code)

teacher1.assign_courses(course1.course_code)
teacher2.assign_courses(course2.course_code)

student1.display_info()

teacher1.display_info()

course1.display_info()