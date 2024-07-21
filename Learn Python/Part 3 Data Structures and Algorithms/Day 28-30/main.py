import numpy as np

# Tạo danh sách học sinh
students = ['Nguyen Van A', 'Tran Thi B', 'Le Cao C', 'Pham Van D', 'Hoang Thi E']

# Thêm điểm số cho từng học sinh
scores = np.array([85, 92, 78, 90, 88])

# Tính trung bình điểm
avg_score = np.mean(scores)
print(f"Điểm trung bình của lớp: {avg_score}")

# Tìm học sinh có điểm cao nhất
max_score_index = np.argmax(scores)
print(f"Học sinh có điểm cao nhất: {students[max_score_index]}")

# Tìm học sinh có điểm thấp nhất
min_score_index = np.argmin(scores)
print(f"Học sinh có điểm thấp nhất: {students[min_score_index]}")

# Sắp xếp danh sách học sinh theo điểm số
sorted_indices = np.argsort(scores)[::-1]
sorted_students = [students[i] for i in sorted_indices]
sorted_scores = scores[sorted_indices]
print("Danh sách học sinh theo thứ tự điểm số giảm dần:")
for student, score in zip(sorted_students, sorted_scores):
    print(f"{student}: {score}")
