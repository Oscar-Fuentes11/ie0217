def greet():
    #variable defined outside the inner fuction
    name = " NEYMAR"

    #return a nested anonymous fuction 
    return lambda: "Hi" + name


#call the outer function
message = greet ()

#call the inner function
print (message())
