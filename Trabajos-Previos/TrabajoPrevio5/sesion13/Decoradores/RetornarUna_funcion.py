def greeting(name):
    def hello():
        return "hello, " + name + "!"
    return hello

greet = greeting ("Atlantis")
print (greet())