print("Vòng lặp for:")
# Vòng lặp for
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

print("\nVòng lặp while:")
# Vòng lặp while
count = 0
while count < 3:
    print(count)
    count += 1

print("\nCâu lệnh break:")
# Câu lệnh break
count = 0
while True:
    print(count)
    count += 1
    if count >= 5:
        break

print("\nCâu lệnh continue:")
# Câu lệnh continue
for i in range(10):
    if i % 2 == 0:
        continue
    print(i)

print("\nCâu lệnh pass:")
# Câu lệnh pass
def my_function():
    pass
print("Hàm rỗng nhưng cú pháp vẫn hợp lệ.")