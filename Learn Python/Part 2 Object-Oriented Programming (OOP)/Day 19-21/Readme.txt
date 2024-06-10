## 1. List Comprehensions

List comprehensions là một cách ngắn gọn và mạnh mẽ để tạo ra các danh sách mới từ các danh sách hiện có.
List comprehensions rất hữu ích khi bạn cần thực hiện một số thao tác đơn giản trên các phần tử của một danh sách.

## 2. Lambda Functions

Lambda functions, hay còn gọi là anonymous functions, là các hàm không có tên được định nghĩa tại chỗ.
Lambda functions thường được sử dụng như đối số cho các hàm khác như `map()`, `filter()`, và `reduce()`.

## 3. Hàm `map()`, `filter()`, và `reduce()`

- `map(function, iterable)`: Áp dụng một hàm lên từng phần tử của một đối tượng lặp và trả về một iterator với các kết quả.
 
- `filter(function, iterable)`: Lọc các phần tử từ một đối tượng lặp dựa trên một điều kiện.
 
- `reduce(function, iterable)`: Áp dụng một hàm hai đối số lên các phần tử của một đối tượng lặp để thu gọn nó thành một giá trị duy nhất.

Khi bạn truyền một hàm vào tham số `key` của hàm `sorted()`, nó hoạt động như sau:

1. Đối với mỗi phần tử trong danh sách cần sắp xếp, hàm `sorted()` sẽ gọi hàm `key` với phần tử đó làm tham số.
2. Hàm `key` sẽ trả về một giá trị, và hàm `sorted()` sẽ sử dụng giá trị này làm tiêu chí để sắp xếp các phần tử.
3. Các phần tử sẽ được sắp xếp dựa trên kết quả trả về từ hàm `key`, thay vì sử dụng trực tiếp giá trị của chúng.
