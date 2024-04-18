class CanBo:
    def __init__(self, name="", age=0, gender="", address=""):
        self.name = name
        self.age = age
        self.gender = gender
        self.address = address

    def __str__(self):
        return f"Ho va ten: {self.name}\n Tuoi: {self.age} \n Gtinh: {self.gender} \n Dia chi: {self.address}"

    def themMoiCB(self):        
        self.name = input("Nhap vao ho ten: ")
        self.age = input("Nhap vao tuoi: ")
        self.gender = input("Nhao gt: ")
        self.address = input("Nhap dia chi: ")


class CongNhan(CanBo):
    def __init__(self, name="", age=0, gender="", address="", level=0):
        super().__init__(name, age, gender, address)
        self.level = level

    def __str__(self):
        return super().__str__() + f"\n Bac: {self.level}"

    def themMoiCb(self):
        super().themMoiCB()
        self.level = input("Nhap bac: ")


class KySu(CanBo):
    def __init__(self, name="", age=0, gender="", address="", major=""):
        super().__init__(name, age, gender, address)
        self.major = major

    def __str__(self):
        return super().__str__() + f"\n Chuyen nganh: {self.major}"

    def themMoiCB(self):
        super().themMoiCB()
        self.major = input("Nhap chuyen nganh: ")

class NhanVien(CanBo):
    def __init__(self, name="", age=0, gender="", task=""):
        super().__init__(name, age, gender, address)
        self.task = task
    def __str__(self):
        return super().__str__() + f"\n Cong viec: {self.task}"
    def themMoiCB(self):
        super().themMoiCB()
        self.task = input("Nhap cong viec: ")

class QLCB:
    def addCB(self):
        n=int(input("Nhap so nguoi: "))
        ds=[]
        for i in range(n):
            choice = int(input("Chon lua chon: 1.Cong nhan, 2.ky su, 3. Nhan vien \n "))
            if choice==1:
                person = CongNhan()
                person.themMoiCb()
            elif choice ==2:
                person = KySu()
                person.themMoiCB()
            elif choice ==3:
                person = NhanVien()
                person.themMoiCB()
            else: print("Nhap sai")
            ds.append(person)
        return ds
    def hienThiCB(self, ds):
        for i in ds:
            print(i)
    def timCB(self, ds):
        find = False
        findName = input("Nhap ten muon tim: ")
        for i in ds:
            if i.name == findName:
              print(i)
              find = True
            elif not find:
                print("Khong co dau")
    def tuanTuHoa(self, ds):
        import json
        jsonString = json.dumps([ob.__dict__ for ob in ds], indent=4)
        print(jsonString)
        with open("ds.json","w") as outfile:
            outfile.write(jsonString)

    def giaiTuanTu(self):
        import json
        with open("ds.json","r") as openfile:
            jsonObject = json.load(openfile)
            QLCB().hienThiCB(jsonObject)
            print(type(jsonObject))

ds=QLCB().addCB()
# QLCB().timCB(ds) 
QLCB().tuanTuHoa(ds)


        