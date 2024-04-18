class TaiLieu:
    def __init__(self,maTaiLieu="",tenXuatBan="", soBanPhatHanh=""):
        self.maTaiLieu=maTaiLieu
        self.tenXuatBan=tenXuatBan
        self.soBanPhatHanh=soBanPhatHanh

    def __str__(self):
        return f"Ma tai lieu: {self.maTaiLieu}\n Ten xuat ban: {self.tenXuatBan}  \n So ban phat hanh: {self.soBanPhatHanh}"

    def themMoiTaiLieu(self):
        self.maTaiLieu=input("Nhap vao ma tai lieu:")
        self.tenXuatBan=input("Nhap ten xuat ban:")
        self.soBanPhatHanh=input("So ban phat hanh:")

class Sach(TaiLieu):
    def __init__(self,maTaiLieu="",tenXuatBan="",soBanPhatHanh="",tenTacGia="", soTrang=""):
        super().__init__(maTaiLieu,tenXuatBan, soBanPhatHanh)
        self.tenTacGia=tenTacGia
        self.soTrang=soTrang
    def __str__(self):
        return super().__str__() + f"\n Ten tac gia: {self.tenTacGia}" + f"\n So trang: {self.soTrang}"
    def themMoiTaiLieu(self):
        super().themMoiTaiLieu()
        self.tenTacGia=input("Nhap ten tac gia:")
        self.soTrang=input("Nhap so trang:")

class TapChi(TaiLieu):
    def __init__(self, maTaiLieu="", tenXuatBan="", soBanPhatHanh="",soPhatHanh="", thangPhatHanh=""):
        super().__init__(maTaiLieu, tenXuatBan, soBanPhatHanh)
        self.soPhatHanh=soPhatHanh
        self.thangPhatHanh=thangPhatHanh
    def __str__(self):
        return super().__str__() + f"\n So phat hanh: {self.soPhatHanh}" + f"\n Thang phat hanh: {self.thangPhatHanh}"
    def themMoiTaiLieu(self):
        super().themMoiTaiLieu()
        self.soPhatHanh=input("Nhap so phat hanh:")
        self.thangPhatHanh=input("Nhap thang phat hanh: ")

class Bao(TaiLieu):
    def __init__(self, maTaiLieu="",tenXuatBan="",soBanPhatHanh="",ngayPhatHanh=""):
        super().__init__(maTaiLieu,tenXuatBan,soBanPhatHanh)
        self.ngayPhatHanh=ngayPhatHanh
    def __str__(self):
        return super().__str__() + f"\n Ngay phat hanh: {self.ngayPhatHanh}" 
    def themMoiTaiLieu(self):
        super().themMoiTaiLieu()    
        self.ngayPhatHanh=input("Nhap ngay phat hanh:")

class QLTL:
    def addTL(self):
        n=int(input("Nhap so tai lieu muon them :"))
        ds=[]
        for i in range(n):
            choice=int(input("Nhap lua chon: \n 1.Sach \n 2.Tap chi \n 3.Tai lieu \n" ))
            if choice==1:
                tailieu = Sach()
                tailieu.themMoiTaiLieu()
            elif choice==2:
                tailieu= TapChi()
                tailieu.themMoiTaiLieu()
            elif choice==3:
                tailieu=Bao()
                tailieu.themMoiTaiLieu()
            else: print("Nhap sai")
            ds.append(tailieu)
        return ds

    def clearTL(self, ds, maTaiLieu):    
        found = False
        for tailieu in ds:
            if tailieu.maTaiLieu == maTaiLieu:
                ds.remove(tailieu)
                print(f"Da xoa tai lieu co ma {maTaiLieu}")
                found = True
                break
        if not found:
            print(f"Khong tim thay tai lieu co ma {maTaiLieu}")


    def hienThiTL(self, ds):
        print("*************************")
        print("Danh sach tai lieu:")
        for i in ds:
            print(i)

    def hienThiTLCanTim(self,ds,maTaiLieu):
        found = False
        for tailieu in ds:
          if tailieu.maTaiLieu == maTaiLieu:
            found = True 
            print("Thong tin ve tai lieu can tim:")
            print(tailieu)
            break
        if not found: 
            print(f"Khong tim thay ma tai lieu   {maTaiLieu}")

    def timKiemTLTheoLoai(self,ds):
        # n = int(input("Nhap loai tai lieu muon tim:"))
        # for i in range(n):
        choice = int(input("Nhap lua chon Tai lieu can tim: \n 1.Sach \n 2.Tap chi \n 3.Tai lieu \n"))
        if choice == 1:
            print("Tai lieu Sach:")
            for tailieu in ds:
                if isinstance(tailieu, Sach):
                    print(tailieu)
        elif choice == 2:
            print("Tai lieu Tap Chi:")
            for tailieu in ds:
                if isinstance(tailieu, TapChi):
                    print(tailieu)
        elif choice == 3:
            print("Tai Lieu Bao:")
            for tailieu in ds:
                if isinstance(tailieu, Bao):
                    print(tailieu)
        else:
            print("Lua chon khong hop le.")
ds=QLTL().addTL() 

QLTL().hienThiTL(ds)

print("***********************")

# maTailieuCanTim = input("Nhap ma tai lieu muon tim:")
# QLTL().hienThiTLCanTim(ds,maTailieuCanTim)

# print("***********************")

# maTaiLieuCanXoa = input("Nhap ma tai lieu can xoa: ")
# QLTL().clearTL(ds,maTaiLieuCanXoa )
# print("Ds sau xoa:")
# QLTL().hienThiTL(ds)
# if ds == []:
#     print("Khong con tai lieu nao ")

QLTL().timKiemTLTheoLoai(ds)


                    
        