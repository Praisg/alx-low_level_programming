import ctypes
import random

# Load the shared object file
lib = ctypes.CDLL('./operations.so')

# Define the argument and return types for each function
lib.add.argtypes = [ctypes.c_int, ctypes.c_int]
lib.add.restype = ctypes.c_int
lib.sub.argtypes = [ctypes.c_int, ctypes.c_int]
lib.sub.restype = ctypes.c_int
lib.mul.argtypes = [ctypes.c_int, ctypes.c_int]
lib.mul.restype = ctypes.c_int
lib.div.argtypes = [ctypes.c_int, ctypes.c_int]
lib.div.restype = ctypes.c_int
lib.mod.argtypes = [ctypes.c_int, ctypes.c_int]
lib.mod.restype = ctypes.c_int

# Generate two random numbers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call the C functions and print the results
print("{} + {} = {}".format(a, b, lib.add(a, b)))
print("{} - {} = {}".format(a, b, lib.sub(a, b)))
print("{} x {} = {}".format(a, b, lib.mul(a, b)))
print("{} / {} = {}".format(a, b, lib.div(a, b)))
print("{} % {} = {}".format(a, b, lib.mod(a, b)))
