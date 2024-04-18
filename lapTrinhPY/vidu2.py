# class Hang:
    
#     def __init__(self, ma_hang, ten_hang, nha_sx, gia):
#         self.ma_hang = ma_hang
#         self.ten_hang = ten_hang
#         self.nha_sx = nha_sx
#         self.gia = gia

#     def __str__(self):
#         return f"Mã hàng: {self.ma_hang}, Tên hàng: {self.ten_hang}, Nhà sx: {self.nha_sx}, Giá: {self.gia} "

# class HangDienMay(Hang):

#     def __init__(self,ma_hang, ten_hang, nha_sx, gia, tgbh, dien_ap, cong_suat):
#         super().__init__(ma_hang, ten_hang, nha_sx, gia)
#         self.tgbh = tgbh
#         self.dien_ap = dien_ap
#         self.cong_suat = cong_suat

#     def __str__(self):
#         return super().__str__() + f"Thời gian bảo hành: {self.tgbh} Điện áp: {self.dien_ap}, Công suất: {self.cong_suat}"


# class HangSanhSu(Hang):

#     def __init__(self,ma_hang, ten_hang, nha_sx, gia, loai_nl):
#         super().__init__(ma_hang, ten_hang, nha_sx, gia)
#         self.loai_nl = loai_nl

#     def __str__(self):
#         return super().__str__() + f"Loại nguyên liệu: {self.loai_nl}"

# class HangThucPham(Hang):

#     def __init__(self,ma_hang, ten_hang, nha_sx, gia, ngay_sx, ngay_hh):
#         super().__init__(ma_hang, ten_hang, nha_sx, gia)
#         self.ngay_sx = ngay_sx
#         self.ngay_hh = ngay_hh

#     def __str__(self):
#         return super().__str__() + f"Ngày sx: {self.ngay_sx}, Ngày hh: {self.ngay_hh}"   


# h1 = HangSanhSu("1234","Lọ hoa", "Bát Tràng", 1000000, "Gốm")
# print(h1)

# h2 = HangThucPham("1234","Thịt", "Đức việt", 20000, "06/04/23", "08/04/23")
# print(h2)




class HangHoa:
    def __init__(self,maHang, tenHang, nhaSx, gia):
        self.maHang =maHang
        self.tenHang=tenHang
        self.nhaSx=nhaSx
        self.gia=gia
    
    def __str__(self):
        return f"Ma hang: {self.maHang}, Ten hang: {self.tenHang}, Nha sx: {self.nhaSx} , Gia: {self.gia}"

class HangDienMay(HangHoa):
    def __init__(self,maHang, tenHang, nhaSx, gia, tgbh,dienAp,congSuat):
        super().__init__(self,maHang, tenHang, nhaSx, gia)
        self.tgbh = tgbh
        self.dienAp =dienAp
        self.congSuat = congSuat
    
    def __str__(self):
        return super().__str__() + f"Thoi gian bao hanh: {self.tgbh}, Dien ap: {self.dienAp}, Cong suat: {self.congSuat}"

class HangSanhSu(HangHoa):
    def __init__(self, maHang, tenHang, nhaSx, gia, loaiNguyenLieu):
        super().__init__(maHang, tenHang, nhaSx, gia)
        self.loaiNguyenLieu =loaiNguyenLieu
    def __str__(self):
        return super().__str__() + f"Loai nguyen lieu: {self.loaiNguyenLieu}"
  
class HangThucPham(HangHoa):
    def __init__(self, maHang, tenHang, nhaSx, gia, ngaySx, ngayHetHan):
        super().__init__(maHang,tenHang,nhaSx,gia)
        self.ngaySx=ngaySx
        self.ngayHetHan=ngayHetHan
    def __str__(self):
        return super().__str__()+ f"Ngay sx: {self.ngaySx}, Ngay het han: {self.ngayHetHan}"


h1 = HangSanhSu("1234","Lọ hoa", "Bát Tràng", 1000000, "Gốm")
print(h1)
        