**Khái niệm xử lý ngoại lệ**:
Xử lý ngoại lệ (Exception Handling) là một cơ chế cho phép chương trình xử lý các tình huống bất thường, 
ngoài dự đoán trong quá trình chạy. Khi một ngoại lệ xảy ra, chương trình sẽ không bị dừng đột ngột mà thay vào đó, 
chương trình sẽ chuyển quyền điều khiển đến một khối code đặc biệt để xử lý ngoại lệ đó.

**Các từ khóa try, catch, throw**:
- `try`: Khối lệnh này chứa các câu lệnh có khả năng xảy ra ngoại lệ.
- `catch`: Khối lệnh này chứa các câu lệnh xử lý ngoại lệ nếu xảy ra.
- `throw`: Từ khóa này dùng để tạo ra và ném ra một ngoại lệ.

Cấu trúc xử lý ngoại lệ thông thường:

try {
    // Các câu lệnh có khả năng xảy ra ngoại lệ
} catch (ExceptionType1 e1) {
    // Xử lý ngoại lệ ExceptionType1
} catch (ExceptionType2 e2) {
    // Xử lý ngoại lệ ExceptionType2
} ...

Ưu điểm:
- Có cách để "ném" lỗi lên cấp trên, giúp code trở nên gọn gàng hơn.
- Có thể định nghĩa các lớp ngoại lệ riêng để mô tả các loại lỗi khác nhau.
- Có thể xử lý các ngoại lệ một cách tập trung tại các điểm cần thiết.

Nhược điểm:
- Phức tạp hơn so với cách không sử dụng ngoại lệ.
- Cần định nghĩa các lớp ngoại lệ riêng.

