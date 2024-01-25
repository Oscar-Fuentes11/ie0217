from math import pi

# Base class for all shapes
class Shape:
    # Initialize with a name for the shape
    def __init__(self, name):
        self.name = name
    
    # Method to compute area, to be implemented by subclasses
    def area(self):
        pass

    # Fact about the shape, can be overridden by subclasses if needed
    def fact(self):
        return "I am a two-dimensional shape."
    
    # String representation of the shape
    def __str__(self):
        return self.name

# Square class inherits from Shape
class Square(Shape):
    # Initialize Square with side length, name is set to "Square"
    def __init__(self, length):
        super().__init__("Square")  # Call to the superclass constructor
        self.length = length  # Side length of the square
    
    # Calculate area of Square
    def area(self):
        return self.length**2
    
    # Fact specific to squares
    def fact(self):
        return "Squares have each angle equal to 90 degrees."

# Circle class inherits from Shape
class Circle(Shape):
    # Initialize Circle with radius, name is set to "Circle"
    def __init__(self, radius):
        super().__init__("Circle")  # Call to the superclass constructor
        self.radius = radius  # Radius of the circle
    
    # Calculate area of Circle
    def area(self):
        return pi * self.radius**2

# Create instances of Square and Circle
a = Square(4)  # Square with side length 4
b = Circle(7)  # Circle with radius 7

# Demonstrate the functionality
print(b)            # Prints "Circle"
print(b.fact())     # Prints Circle's fact
print(a.fact())     # Prints Square's fact
print(a.area())     # Prints area of the square
print(b.area())     # Prints area of the circle
