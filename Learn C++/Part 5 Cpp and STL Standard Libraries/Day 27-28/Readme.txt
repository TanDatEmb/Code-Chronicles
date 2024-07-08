
### 1. Vector
**Vector** là một container trong STL (Standard Template Library) của C++ cho phép lưu trữ một mảng động, tức là kích thước của nó có thể thay đổi trong quá trình thực thi chương trình.

- **Ưu điểm**:
  - Truy cập phần tử ngẫu nhiên nhanh (O(1)).
  - Hỗ trợ tự động thay đổi kích thước.

- **Nhược điểm**:
  - Chèn/xóa phần tử giữa mảng có thể chậm (O(n)).
  - Dễ bị phân mảnh vùng nhớ

### 2. List
**List** là một container danh sách liên kết đôi, cho phép chèn và xóa phần tử nhanh ở bất kỳ vị trí nào.


- **Ưu điểm**:
  - Chèn/xóa phần tử nhanh ở bất kỳ vị trí nào (O(1)).
  - Khó bị phân mảnh vùng nhớ

- **Nhược điểm**:
  - Truy cập phần tử ngẫu nhiên chậm (O(n)).

### 3. Map
**Map** là một container lưu trữ các cặp khóa-giá trị, trong đó mỗi khóa là duy nhất.


- **Ưu điểm**:
  - Truy cập, chèn/xóa phần tử nhanh (O(log n)).

- **Nhược điểm**:
  - Bộ nhớ sử dụng có thể lớn do lưu trữ các cặp khóa-giá trị.

### 4. Set
**Set** là một container lưu trữ các phần tử duy nhất, không trùng lặp.

- **Ưu điểm**:
  - Tự động loại bỏ các phần tử trùng lặp.
  - Truy cập, chèn/xóa phần tử nhanh (O(log n)).

- **Nhược điểm**:
  - Không cho phép các phần tử trùng lặp.
