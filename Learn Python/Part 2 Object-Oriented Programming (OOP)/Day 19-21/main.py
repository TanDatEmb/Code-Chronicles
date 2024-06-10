#map
numbers = [1, 2, 3, 4, 5]
squared_numbers = list(map(lambda x: x**2+1, numbers))
print(squared_numbers)  # Output: [1, 4, 9, 16, 25]

#filter
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
print(even_numbers)  # Output: [2, 4, 6, 8, 10]

#reduce
from functools import reduce

numbers = [1, 2, 3, 4, 5]
total = reduce(lambda x, y: x + y, numbers)
print(total)  # Output: 15

#Tao mang so chan
numbers = [num for num in range(1, 21) if num % 2 == 0]
print(numbers)  # Output: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
#Sap xep
sorted_numbers = sorted(numbers, key=lambda x: x)
print(sorted_numbers)  # Output: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]