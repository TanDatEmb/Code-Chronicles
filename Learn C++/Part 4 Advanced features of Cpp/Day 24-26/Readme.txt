**1. unique_ptr**
- `unique_ptr` là một smart pointer nắm giữ sở hữu độc quyền đối với một đối tượng động.
- Nó đảm bảo rằng đối tượng được quản lý chỉ có một bản sao duy nhất tại một thời điểm.
- Khi `unique_ptr` bị phá hủy (ví dụ: ra khỏi phạm vi hoặc được gán giá trị NULL), nó sẽ tự động giải phóng bộ nhớ được cấp phát cho đối tượng.
- `unique_ptr` không thể được sao chép, nhưng có thể được chuyển nhượng (moved) sang một `unique_ptr` khác.
- Ưu điểm của `unique_ptr` là nó đơn giản, hiệu quả và an toàn về bộ nhớ.

**2. shared_ptr**
- `shared_ptr` là một smart pointer chia sẻ sở hữu đối tượng động giữa nhiều bản sao.
- Mỗi bản sao của `shared_ptr` đều quản lý cùng một đối tượng.
- Mỗi khi một `shared_ptr` được tạo, nó sẽ tăng bộ đếm tham chiếu (reference count) của đối tượng.
- Khi tất cả các `shared_ptr` quản lý đối tượng đều bị phá hủy, bộ đếm tham chiếu sẽ về 0 và đối tượng sẽ được tự động giải phóng.
- `shared_ptr` cho phép chia sẻ quyền sở hữu đối tượng và đảm bảo rằng đối tượng sẽ được giải phóng khi không còn cần thiết nữa.

**3. weak_ptr**
- `weak_ptr` là một smart pointer không sở hữu đối tượng mà nó trỏ tới.
- Nó được sử dụng để tránh vòng lặp tham chiếu (reference cycle) khi sử dụng `shared_ptr`.
- `weak_ptr` không tăng bộ đếm tham chiếu của đối tượng, do đó không ngăn cản việc giải phóng bộ nhớ khi không còn `shared_ptr` nào trỏ đến đối tượng.
- Khi sử dụng `weak_ptr`, bạn cần phải "lock" nó để có được một `shared_ptr` tạm thời trước khi truy cập đối tượng.
- `weak_ptr` rất hữu ích để giải quyết các vấn đề về vòng lặp tham chiếu và quản lý bộ nhớ.

**Quản lý Bộ nhớ và Vòng đời Đối tượng**:
- Trong C++, bộ nhớ được cấp phát động (dynamic memory) cần phải được quản lý cẩn thận để tránh rò rỉ bộ nhớ (memory leak).
- Smart pointers giúp đơn giản hóa quá trình quản lý bộ nhớ bằng cách tự động giải phóng bộ nhớ khi không còn cần thiết.
- Vòng đời của đối tượng được quản lý bởi smart pointers, đảm bảo rằng đối tượng sẽ được giải phóng đúng lúc, không bị rò rỉ bộ nhớ.

