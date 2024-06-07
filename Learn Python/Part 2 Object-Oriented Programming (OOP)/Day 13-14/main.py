class Student:
    def __init__(self, name, age, student_id):
        self.name = name
        self.age = age
        self.student_id = student_id

    def display_info(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Student ID: {self.student_id}")

    def update_age(self, new_age):
        self.age = new_age

# Chương trình quản lý danh sách sinh viên
student_list = []

# Tạo 3 đối tượng Student
student1 = Student("John Doe", 20, "S001")
student2 = Student("Jane Smith", 21, "S002")
student3 = Student("Bob Johnson", 19, "S003")

# Thêm các đối tượng vào danh sách
student_list.append(student1)
student_list.append(student2)
student_list.append(student3)

# In thông tin của các sinh viên
for student in student_list:
    student.display_info()
    print()

# Cập nhật tuổi của sinh viên
student1.update_age(21)
student1.display_info()