# List
print("List:")
my_list = [1, 2.5, "hello"]
print("- Khai báo:", my_list)
print("- Truy cập phần tử thứ 2:", my_list[1])
print("- Thêm phần tử vào cuối list:", my_list.append(True))
print("- Danh sách sau khi thêm:", my_list)
print("- Độ dài của list:", len(my_list))

# Tuple
print("\nTuple:")
my_tuple = (1, 2.5, "hello")
print("- Khai báo:", my_tuple)
print("- Truy cập phần tử thứ 3:", my_tuple[2])
# Không thể thay đổi các phần tử của tuple
# my_tuple[0] = 10  # Sẽ gây lỗi
print("- Độ dài của tuple:", len(my_tuple))

# Set
print("\nSet:")
my_set = {1, 2.5, "hello"}
print("- Khai báo:", my_set)
print("- Thêm phần tử vào set:", my_set.add(10))
print("- Set sau khi thêm:", my_set)
print("- Kiểm tra phần tử 2.5 có trong set không:", 2.5 in my_set)
print("- Độ dài của set:", len(my_set))

# Dictionary
print("\nDictionary:")
my_dict = {"name": "John", "age": 30}
print("- Khai báo:", my_dict)
print("- Truy cập giá trị theo key 'name':", my_dict["name"])
print("- Thêm key-value mới:", my_dict.update({"city": "New York"}))
print("- Dictionary sau khi thêm:", my_dict)
print("- Độ dài của dictionary:", len(my_dict))