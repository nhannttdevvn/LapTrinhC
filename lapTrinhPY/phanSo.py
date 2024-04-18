class PhanSo:
    def __init__(self, tu_so, mau_so):
        self.tu_so = tu_so
        self.mau_so = mau_so

    def rutGon(self):
        ucln = self.tim_ucln(self.tu_so, self.mau_so)
        self.tu_so //= ucln
        self.mau_so //= ucln

    def UCLN(self, a, b):
        while b:
            a, b = b, a % b
        return a
    def psToiGian(self):
        ucln = self.UCLN(self.tu_so, self.mau_so)
        return ucln == 1