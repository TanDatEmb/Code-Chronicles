## Lớp cha "Hình"
class Hinh:
    def tinh_dien_tich(self):
        pass

# Lớp con "HinhTron"
class HinhTron(Hinh):
    def __init__(self, ban_kinh):
        self.ban_kinh = ban_kinh
    
    def tinh_dien_tich(self):
        return 3.14 * self.ban_kinh ** 2

    def __add__(self, other):
        return HinhTron(self.ban_kinh + other.ban_kinh)
# Lớp con "HinhChuNhat"
class HinhChuNhat(Hinh):
    def __init__(self, dai, rong):
        self.dai = dai
        self.rong = rong
    
    def tinh_dien_tich(self):
        return self.dai * self.rong

# Nạp chồng toán tử + 
 
# Lớp cha "DongVat"
class DongVat:
    def phat_am(self):
        print("Tiếng động vật")

# Lớp con "Cho"
class Cho(DongVat):
    def phat_am(self):
        print("Gâu gâu")

# Lớp con "Meo"
class Meo(DongVat):
    def phat_am(self):
        print("Meow meow")

# Sử dụng các lớp
hinh_tron1 = HinhTron(5)
hinh_tron2 = HinhTron(3)
hinh_chu_nhat = HinhChuNhat(4, 6)

print(hinh_tron1.tinh_dien_tich())  # Output: 78.5
print(hinh_chu_nhat.tinh_dien_tich())  # Output: 24

hinh_tron3 = hinh_tron1 + hinh_tron2
print(hinh_tron3.ban_kinh)  # Output: 8

cho = Cho()
meo = Meo()
cho.phat_am()  # Output: Gâu gâu
meo.phat_am()  # Output: Meow meow
