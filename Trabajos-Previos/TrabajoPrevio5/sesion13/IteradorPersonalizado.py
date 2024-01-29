class PowTwo:
    """Class to implement an iterator of powers of two"""

    def __init__(self, max=0):
        self.max = max

    def __iter__(self):
        self.n = 0
        return self  # Return the iterator object

    def __next__(self):
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result
        else:
            raise StopIteration

# Create an object
numbers = PowTwo(3)

# Create an iterable from the object
i = iter(numbers)

# Using next to get to the next iterator element
print(next(i))  # Output: 1
print(next(i))  # Output: 2
print(next(i))  # Output: 4
print(next(i))  # Output: 8

# The next call will raise StopIteration as the iterator is exhausted
print(next(i))  # This will raise StopIteration
