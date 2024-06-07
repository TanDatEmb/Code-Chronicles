1. Khái niệm con trỏ:
   - Con trỏ là một biến lưu trữ địa chỉ của một ô nhớ trong bộ nhớ.
   - Khai báo con trỏ: <kiểu_dữ_liệu>* <tên_con_trỏ>;.

2. Các thao tác cơ bản với con trỏ:
   - Truy cập giá trị tại địa chỉ mà con trỏ đang trỏ đến: *<tên_con_trỏ>.
   - Lấy địa chỉ của một biến: &<tên_biến>.
   - Di chuyển con trỏ: <tên_con_trỏ>++ hoặc <tên_con_trỏ> += 1.

3. Mảng và con trỏ:
   - Mảng là một tập hợp các phần tử cùng kiểu dữ liệu.
   - Khi khai báo mảng, con trỏ sẽ trỏ đến phần tử đầu tiên của mảng.
   - Truy cập phần tử mảng bằng cách sử dụng con trỏ: *(arr + i)` hoặc `arr[i].
