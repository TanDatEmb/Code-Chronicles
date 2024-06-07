1. Chuỗi ký tự trong C++:
- Trong C++, chuỗi ký tự được biểu diễn bằng lớp std::string Lớp này cung cấp nhiều phương thức và toán tử để làm việc với chuỗi.
- Các phương thức phổ biến của std::string bao gồm length(), substr(), find(), replace(), c_str(), v.v.
- Chuỗi ký tự trong C++ được lưu trữ dưới dạng mảng các char với ký tự kết thúc bằng ký tự null '\0'.

2. Các hàm thao tác với chuỗi:
- Trong C++, có nhiều hàm thao tác với chuỗi được cung cấp bởi thư viện chuẩn, chẳng hạn như strlen(), strcmp(), strcat(), strcpy(), v.v.
- Tuy nhiên, việc sử dụng các hàm này có một số hạn chế, chẳng hạn như không an toàn và dễ dẫn đến lỗi buffer overflow.
- Vì vậy, việc sử dụng lớp std::string thường được khuyến khích thay vì sử dụng các hàm thao tác với chuỗi cấp thấp.

3. Thư viện chuẩn C++:
- Thư viện chuẩn C++ (còn được gọi là STL - Standard Template Library) là một bộ sưu tập các lớp, hàm, và mẫu được thiết kế để giải quyết các bài toán phổ biến trong lập trình.
- Thư viện này bao gồm các container (như std::vector, std::list, std::map, v.v.), các thuật toán (như std::sort(), std::find(), std::transform(), v.v.), và các tiện ích khác (như std::string, std::iostream, std::regex, v.v.).
- Việc sử dụng các thành phần trong thư viện chuẩn C++ giúp code trở nên ngắn gọn, dễ đọc, và ít dễ xảy ra lỗi.

