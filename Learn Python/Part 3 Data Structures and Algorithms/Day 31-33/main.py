# Hàm đệ quy tính dãy Fibonacci
def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# Thuật toán sắp xếp nổi bọt
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                
# Thuật toán sắp xếp chọn
def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Thuật toán sắp xếp chèn
def insertion_sort(arr):
    n = len(arr)
    for i in range(1,n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -=1
        arr[j+1] = key
        
# Thuật toán quicksort
def quicksort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[len(arr) // 2]
        left = [x for x in arr if x < pivot]
        middle = [x for x in arr if x == pivot]
        right = [x for x in arr if x > pivot]
        return quicksort(left) + middle + quicksort(right)
    
# Thuật toán Mergesort
def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2  # Tìm điểm giữa để chia mảng thành hai nửa
        left_half = arr[:mid]  # Nửa bên trái
        right_half = arr[mid:]  # Nửa bên phải

        # Gọi đệ quy để sắp xếp từng nửa
        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        # Hợp nhất các mảng tạm thời vào arr ban đầu
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Kiểm tra nếu còn phần tử nào trong left_half
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        # Kiểm tra nếu còn phần tử nào trong right_half
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1
# Ví dụ sử dụng
print(fibonacci(10))  # 55
arr = [64, 34, 25, 12, 22, 11, 90]
merge_sort(arr)
print(arr)  
