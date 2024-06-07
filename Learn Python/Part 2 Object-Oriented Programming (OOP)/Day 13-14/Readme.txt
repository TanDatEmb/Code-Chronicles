- **Lớp và Đối tượng**:
  - **Lớp**: Là khuôn mẫu (template) để tạo ra các đối tượng.
  - **Đối tượng**: Là các thể hiện cụ thể của lớp.

- **Tính đóng gói**: Ẩn các chi tiết triển khai bên trong lớp, chỉ cung cấp giao diện (interface) để tương tác.

- **Tính trừu tượng**: Định nghĩa các hành vi chung, để các lớp con triển khai chi tiết.

- **Phương thức khởi tạo (constructor)**: Được gọi tự động khi tạo đối tượng.
- **Phương thức hủy (destructor)**: Được gọi tự động khi đối tượng bị hủy.

Trong Python, việc sử dụng phương thức phá hủy (destructor) là không bắt buộc và thường không cần thiết. Đây là một số lý do tại sao chúng ta không cần phải code phương thức phá hủy:

1. **Quản lý bộ nhớ tự động**:
   - Python sử dụng bộ dọn rác (Garbage Collector) để tự động quản lý bộ nhớ. Khi một đối tượng không còn được tham chiếu nữa, bộ dọn rác sẽ tự động phá hủy đối tượng và thu hồi bộ nhớ.
   - Vì vậy, chúng ta thường không cần phải viết phương thức phá hủy riêng.

2. **Dọn dẹp tài nguyên**:
   - Trong trường hợp đối tượng cần dọn dẹp tài nguyên như file, kết nối cơ sở dữ liệu, v.v. thì chúng ta có thể sử dụng phương thức `__del__()` 
   để thực hiện việc này.
   - Tuy nhiên, việc này thường được thực hiện trong phương thức `__exit__()` của contextmanager 
   hoặc sử dụng câu lệnh `with` thay vì trong phương thức `__del__()`.

3. **Tính linh hoạt và độ tin cậy**:
   - Việc phụ thuộc vào phương thức `__del__()` có thể gây ra một số vấn đề như:
     - Thứ tự phá hủy các đối tượng phụ thuộc không được đảm bảo.
     - Nếu đối tượng có tham chiếu chéo, bộ dọn rác có thể không thể phát hiện và phá hủy được.
     - Việc gọi `__del__()` không được đảm bảo khi chương trình kết thúc.

Vì những lý do trên, các nhà phát triển Python thường không khuyến khích sử dụng phương thức `__del__()` nếu không cần thiết. 
Thay vào đó, chúng ta có thể sử dụng các kỹ thuật khác như sử dụng contextmanager, quản lý tài nguyên trong phương thức `__exit__()` 
hoặc sử dụng các công cụ quản lý tài nguyên khác như `with` statement.