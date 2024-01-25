class Employee:
    def __init__(self):
        self.employee_id = 0

# Crear dos objetos de la clase Employee
employee1 = Employee()
employee2 = Employee()

# Acceder y modificar atributos usando employee1
employee1.employee_id = 1001
print(f"Employee ID: {employee1.employee_id}")

# Acceder y modificar atributos usando employee2
employee2.employee_id = 1002
print(f"Employee ID: {employee2.employee_id}")
