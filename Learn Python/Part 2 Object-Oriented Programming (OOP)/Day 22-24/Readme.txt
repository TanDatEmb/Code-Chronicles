### Ngày 22-24: Decorators và Regular Expressions

#### Lý thuyết

**Decorators: Khái niệm và cách sử dụng**

**Khái niệm:**
Decorators trong Python là các hàm cho phép bạn sửa đổi hành vi của các hàm hoặc phương thức khác. 
Chúng thường được sử dụng để thêm chức năng vào một hàm hiện có mà không cần thay đổi mã nguồn của nó. 
Decorators rất hữu ích cho các tác vụ như logging, kiểm tra hiệu năng, kiểm tra bảo mật, và nhiều tác vụ khác.

**Cách sử dụng:**
- **Khai báo một Decorator:**
  Một decorator là một hàm nhận một hàm khác làm đối số và trả về một hàm mới.

  ```python
  def my_decorator(func):
      def wrapper():
          print("Something is happening before the function is called.")
          func()
          print("Something is happening after the function is called.")
      return wrapper
  ```

- **Sử dụng một Decorator:**
  Decorator có thể được áp dụng cho một hàm bằng cách sử dụng ký hiệu `@`.

  ```python
  @my_decorator
  def say_hello():
      print("Hello!")

  say_hello()
  ```

**Ưu điểm:**
- **Tái sử dụng mã:** Decorators cho phép bạn tái sử dụng logic mã cho nhiều hàm khác nhau.
- **Tách biệt các mối quan tâm:** Decorators giúp tách biệt các khía cạnh như logging và kiểm tra hiệu năng ra khỏi logic chính của hàm.
- **Cải thiện tính module hóa:** Decorators giúp tổ chức mã tốt hơn và cải thiện tính module hóa.

**Nhược điểm:**
- **Phức tạp hóa mã:** Việc sử dụng decorators có thể làm mã trở nên phức tạp hơn và khó đọc hơn, đặc biệt là với những người mới học Python.
- **Khó debug:** Debug một hàm đã được áp dụng decorator có thể khó khăn hơn vì hành vi của hàm có thể bị thay đổi bởi decorator.

**Regular Expressions (RegEx): Giới thiệu và cách sử dụng**

**Khái niệm:**
Regular Expressions (RegEx) là một công cụ mạnh mẽ để làm việc với chuỗi. Chúng cho phép bạn kiểm tra xem một chuỗi có khớp với một mẫu nào đó, hoặc thay thế các phần của một chuỗi dựa trên mẫu.

**Cách sử dụng:**
- **Khai báo một mẫu RegEx:**
  Bạn có thể sử dụng module `re` của Python để làm việc với RegEx.

  ```python
  import re

  pattern = r"\d+"  # Mẫu để tìm tất cả các số trong một chuỗi
  ```

- **Kiểm tra một chuỗi có khớp với mẫu:**
  ```python
  if re.match(pattern, "123abc"):
      print("Có chứa số!")
  ```

- **Tìm tất cả các khớp:**
  ```python
  matches = re.findall(pattern, "123abc456def")
  print(matches)  # Output: ['123', '456']
  ```

**Ưu điểm:**
- **Mạnh mẽ và linh hoạt:** RegEx cung cấp các công cụ mạnh mẽ để kiểm tra và thao tác các chuỗi phức tạp.
- **Ngắn gọn:** Với RegEx, bạn có thể biểu đạt các điều kiện kiểm tra chuỗi phức tạp một cách ngắn gọn và súc tích.

**Nhược điểm:**
- **Khó đọc:** Các mẫu RegEx phức tạp có thể khó đọc và hiểu, đặc biệt là đối với những người mới học.
- **Không thân thiện với người mới học:** RegEx có thể rất khó học và sử dụng hiệu quả nếu bạn không quen thuộc với cú pháp của nó.

#### Bài tập

1. **Viết decorators cho logging:**
   Decorator này sẽ log các thông tin trước và sau khi một hàm được gọi.

   ```python
   import logging

   def log_decorator(func):
       def wrapper(*args, **kwargs):
           logging.info(f"Calling function '{func.__name__}' with arguments {args} and {kwargs}")
           result = func(*args, **kwargs)
           logging.info(f"Function '{func.__name__}' returned {result}")
           return result
       return wrapper

   @log_decorator
   def say_hello(name):
       return f"Hello, {name}!"

   say_hello("Alice")
   ```

2. **Sử dụng RegEx để kiểm tra định dạng email:**
   Viết một hàm sử dụng RegEx để kiểm tra xem một chuỗi có phải là email hợp lệ hay không.

   ```python
   import re

   def is_valid_email(email):
       pattern = r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$'
       return re.match(pattern, email) is not None

   print(is_valid_email("test@example.com"))  # True
   print(is_valid_email("invalid-email"))     # False
   ```