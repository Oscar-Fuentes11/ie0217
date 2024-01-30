# Defining a decorator named 'star'
def star(func):
    # The inner function is a wrapper around the original function
    def inner(*args, **kwargs):
        # Before calling the original function, print a line of asterisks
        print("*" * 15)
        # Call the original function with its arguments
        func(*args, **kwargs)
        # After calling the original function, print a line of asterisks
        print("*" * 15)

    # Return the wrapper function
    return inner


# Defining another decorator named 'percent'
def percent(func):
    # The inner function is a wrapper around the original function
    def inner(*args, **kwargs):
        # Before calling the original function, print a line of percent signs
        print("%" * 15)
        # Call the original function with its arguments
        func(*args, **kwargs)
        # After calling the original function, print a line of percent signs
        print("%" * 15)

    # Return the wrapper function
    return inner

# Applying the decorators 'star' and 'percent' to a function
@star
@percent
def printer(msg):
    # This is the original function that simply prints the message
    print(msg)

# Calling the decorated function
printer("Hello")
