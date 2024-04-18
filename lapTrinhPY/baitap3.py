class ThiSinh:
    def __init__(self,sbd,diaChi,mucUuTien):
        self.sbd=sbd
        self.diaChi=diaChi
        self.mucUuTien=mucUuTien
    def __str__(self):
        return f"So bao danh:{self.sbd} \n Dia chi: {self.diaChi} \n Muc uu tien:{self.mucUuTien}"
    def themMoiThiSinh(self):
        self.sbd = input("Nhap so bao danh:")
        self.diaChi = input("Nhap dia chi:")
        self.mucUuTien = input("Nhap muc uu tien:")

class thiSinhkhoiA(ThiSinh):
    def __init__(self,sbd,diaChi,mucUuTien, monThi)