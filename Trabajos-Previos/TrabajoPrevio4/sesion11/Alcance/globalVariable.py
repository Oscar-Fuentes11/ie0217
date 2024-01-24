#declare global variable
from email import message


message = 'Hello'

def greet():
    #declare local variable
    print('Local',message)

greet()
print('Global', message)