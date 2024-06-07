**Khái niệm kế thừa**:
Kế thừa (inheritance) là một khái niệm cốt lõi trong lập trình hướng đối tượng. Nó cho phép một lớp (lớp con) kế thừa các thuộc tính và phương thức từ một lớp khác (lớp cha). 
Lớp con kế thừa tất cả các thành viên public và protected của lớp cha, đồng thời có thể thêm các thành viên mới hoặc ghi đè (overriding) các thành viên kế thừa.

**Các loại kế thừa**:
1. **Kế thừa đơn** (single inheritance): Lớp con kế thừa từ duy nhất một lớp cha.
2. **Kế thừa đa** (multiple inheritance): Lớp con kế thừa từ nhiều lớp cha khác nhau.
Tốt, dưới đây tôi sẽ cung cấp một ví dụ về kế thừa từ nhiều lớp (multiple inheritance) cùng với việc trình bày chi tiết hơn về các phương thức kế thừa như public, protected.

**Các phương thức kế thừa**:
- **Public**: 
- **Protected**: 
- **Private**: 

#### Kế thừa trong C++

Kế thừa (Inheritance) là một trong những tính năng quan trọng nhất của lập trình hướng đối tượng (OOP) trong C++. Nó cho phép một lớp (class) có thể nhận các thuộc tính và phương thức từ một lớp khác. Lớp nhận các thuộc tính và phương thức được gọi là lớp dẫn xuất (derived class) và lớp cung cấp các thuộc tính và phương thức được gọi là lớp cơ sở (base class).

Kế thừa giúp tái sử dụng mã nguồn, làm giảm sự lặp lại và tăng tính mô-đun của chương trình. Nó cũng hỗ trợ trong việc mở rộng và bảo trì phần mềm.

#### Các phương thức kế thừa trong C++

Có ba phương thức kế thừa chính trong C++:

1. **Kế thừa công khai (Public Inheritance)**:
   - Các thành viên công khai và được bảo vệ của lớp cơ sở sẽ trở thành thành viên công khai và được bảo vệ của lớp dẫn xuất.
   - Các thành viên riêng tư của lớp cơ sở không thể truy cập trực tiếp bởi lớp dẫn xuất nhưng có thể được truy cập thông qua các phương thức công khai hoặc được bảo vệ của lớp cơ sở.

2. **Kế thừa bảo vệ (Protected Inheritance)**:
   - Các thành viên công khai và được bảo vệ của lớp cơ sở sẽ trở thành thành viên được bảo vệ của lớp dẫn xuất.
   - Các thành viên riêng tư vẫn không thể truy cập trực tiếp.

3. **Kế thừa riêng tư (Private Inheritance)**:
   - Tất cả các thành viên công khai và được bảo vệ của lớp cơ sở sẽ trở thành thành viên riêng tư của lớp dẫn xuất.
   - Các thành viên riêng tư vẫn không thể truy cập trực tiếp.

