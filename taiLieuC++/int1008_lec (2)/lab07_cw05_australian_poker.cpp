#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

const string SO[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
const string CHAT = "\x06\x05\x04\x03";

const int SO_SO = 13;
const int SO_QUAN_BAI = SO_SO * CHAT.length();

const int SO_NGUOI_CHOI = 4;

string inQuanBai(int khoa);
bool uuTienHon(int khoa1, int khoa2);

void traoBai(int *boBai);
void chiaBai(int *boBai, int **boBaiNguoiChoi);
void inBoBaiNguoiChoi(int *boBaiNguoiChoi);

int aiCo2Bich(int **inBoBaiNguoiChoi);
void xacDinhLuotChoi(int *luotChoi, int nguoiChoiBatDau);

void inLuotChoi(int *luotChoi, int soNguoiChoiTrongLuot);
void loaiNguoiChoi(int *luotChoi, int &soNguoiChoiTrongLuot, int nguoiBiLoai);

int nguoiChoiTiepTheo(int *luotChoi, int soNguoiChoiTrongLuot, int nguoiVuaChoi);

int chonBai(int *boBaiNguoiChoi);
void choiBai(int *boBaiNguoiChoi, int quanBaiVuaChoi);

bool chuaAiHetBai(int **boBaiNguoiChoi);

int main()
{
	srand(10);

	int *boBai = new int[SO_QUAN_BAI];
	for (int khoa = 0; khoa < SO_QUAN_BAI; khoa++)
		boBai[khoa] = khoa;
	cout << "Khoi tao bo bai\n";
	for (int khoa = 0; khoa < SO_QUAN_BAI; khoa++)
		cout << inQuanBai(boBai[khoa]);
	cout << "\n\n\n";
	
	traoBai(boBai);
	cout << "Khoi tao bo bai sau khi trao\n";
	for (int khoa = 0; khoa < SO_QUAN_BAI; khoa++)
		cout << inQuanBai(boBai[khoa]);
	cout << "\n\n\n";
	
	int **boBaiNguoiChoi = new int*[SO_NGUOI_CHOI];
	for (int i = 0; i < SO_NGUOI_CHOI; i++)
	{
		boBaiNguoiChoi[i] = new int[SO_QUAN_BAI / SO_NGUOI_CHOI + 1];
	}
	chiaBai(boBai, boBaiNguoiChoi);
	cout << "Sau khi chia bai\n";
	cout << "nguoi choi 0: "; inBoBaiNguoiChoi(boBaiNguoiChoi[0]);
    cout << "nguoi choi 1: "; inBoBaiNguoiChoi(boBaiNguoiChoi[1]);
    cout << "nguoi choi 2: "; inBoBaiNguoiChoi(boBaiNguoiChoi[2]);
    cout << "nguoi choi 3: "; inBoBaiNguoiChoi(boBaiNguoiChoi[3]);
    cout << "\n";
	system("PAUSE");
	
	int soNguoiChoiTrongLuot = 4;
	int nguoiChoiBatDau = aiCo2Bich(boBaiNguoiChoi);
	int *luotChoi = new int[soNguoiChoiTrongLuot];
	xacDinhLuotChoi(luotChoi, nguoiChoiBatDau);

	int quanBaiVuaChoi = 0;
	int nguoiVuaChoi = nguoiChoiBatDau;
	choiBai(boBaiNguoiChoi[nguoiChoiBatDau], quanBaiVuaChoi);
		
	do
	{
        system("CLS");
        inLuotChoi(luotChoi, soNguoiChoiTrongLuot);
        cout << "nguoi choi 1: "; inBoBaiNguoiChoi(boBaiNguoiChoi[0]);
        cout << "nguoi choi 2: "; inBoBaiNguoiChoi(boBaiNguoiChoi[1]);
        cout << "nguoi choi 3: "; inBoBaiNguoiChoi(boBaiNguoiChoi[2]);
        cout << "nguoi choi 4: "; inBoBaiNguoiChoi(boBaiNguoiChoi[3]);

		int nguoiTiepTheo = nguoiChoiTiepTheo(luotChoi, soNguoiChoiTrongLuot, nguoiVuaChoi);
		int quanBaiSeChoi = chonBai(boBaiNguoiChoi[nguoiTiepTheo]);
		
		if (uuTienHon(quanBaiSeChoi, quanBaiVuaChoi))
		{
			choiBai(boBaiNguoiChoi[nguoiTiepTheo], quanBaiSeChoi);
			cout << "nguoi " << (nguoiVuaChoi+1);
            cout << " vua choi quan bai " << inQuanBai(quanBaiVuaChoi) << endl;
            cout << "nguoi " << (nguoiTiepTheo+1) << " choi quan bai " << inQuanBai(quanBaiSeChoi) << endl;
			nguoiVuaChoi = nguoiTiepTheo;
			quanBaiVuaChoi = quanBaiSeChoi;
		}
        else
        {
            cout << "nguoi " << (nguoiVuaChoi+1);
            cout << " vua choi quan bai " << inQuanBai(quanBaiVuaChoi) << endl;
            cout << "nguoi " << (nguoiTiepTheo+1) << " dinh choi quan bai " << inQuanBai(quanBaiSeChoi) << endl;
            cout << "nguoi " << (nguoiTiepTheo+1) << " mat luot" << endl;
            loaiNguoiChoi(luotChoi, soNguoiChoiTrongLuot, nguoiTiepTheo);

            if (soNguoiChoiTrongLuot == 1)
            {
                xacDinhLuotChoi(luotChoi, nguoiVuaChoi);
                soNguoiChoiTrongLuot = SO_NGUOI_CHOI;
                nguoiVuaChoi = luotChoi[soNguoiChoiTrongLuot - 1];
                quanBaiVuaChoi = 0;
            }
        }
        system("PAUSE");
	}
	while (chuaAiHetBai(boBaiNguoiChoi));
	
	cout << "Nguoi choi thang cuoc: " << (nguoiVuaChoi+1) << endl;

	system("PAUSE");
    return EXIT_SUCCESS;
}

string inQuanBai(int khoa)
{
	string temp = SO[khoa / CHAT.length()] + CHAT.at(khoa % CHAT.length()) + " ";
	if (temp.length() == 3) temp = " " + temp;
	return temp;
}

bool uuTienHon(int khoa1, int khoa2)
{
	return khoa1 > khoa2;
}

void traoBai(int *boBai)
{
	int soQBConLai = SO_QUAN_BAI;
	do
	{
		int viTri = rand() % soQBConLai;
		int khoa = boBai[soQBConLai-1];
		boBai[soQBConLai-1] = boBai[viTri];
		boBai[viTri] = khoa;
		soQBConLai--;		
	}
	while (soQBConLai > 0);
}

void chiaBai(int *boBai, int **boBaiNguoiChoi)
{
	boBaiNguoiChoi[0][0] = boBaiNguoiChoi[1][0] = boBaiNguoiChoi[2][0] = boBaiNguoiChoi[3][0] = SO_QUAN_BAI / SO_NGUOI_CHOI;
	for (int i = 1; i <= boBaiNguoiChoi[0][0]; i++)
	{
		boBaiNguoiChoi[0][i] = boBai[(i-1)*4+0];
		boBaiNguoiChoi[1][i] = boBai[(i-1)*4+1];
		boBaiNguoiChoi[2][i] = boBai[(i-1)*4+2];
		boBaiNguoiChoi[3][i] = boBai[(i-1)*4+3];
	}
}

void inBoBaiNguoiChoi(int *boBaiNguoiChoi)
{
	for (int i = 1; i <= boBaiNguoiChoi[0]; i++)
	{
		cout << inQuanBai(boBaiNguoiChoi[i]);
	}
	cout << endl;
}

int aiCo2Bich(int **inBoBaiNguoiChoi)
{
	for (int i = 0; i < SO_NGUOI_CHOI; i++)
	{
		for (int j = 1; j <= inBoBaiNguoiChoi[i][0]; j++)
		{
			if (inBoBaiNguoiChoi[i][j] == 0) return i;
		}
	}
}

void xacDinhLuotChoi(int *luotChoi, int nguoiChoiBatDau)
{
	for (int i = 0; i < SO_NGUOI_CHOI; i++)
	{
		luotChoi[i] = (nguoiChoiBatDau + i) % SO_NGUOI_CHOI;
	}
}

void inLuotChoi(int *luotChoi, int soNguoiChoiTrongLuot)
{
	for (int i = 0; i < soNguoiChoiTrongLuot; i++)
	{
		cout << (luotChoi[i]+1) << " ";
	}
	cout << endl;
}

void loaiNguoiChoi(int *luotChoi, int &soNguoiChoiTrongLuot, int nguoiBiLoai)
{
	int i;
	for (i = 0; i < soNguoiChoiTrongLuot && luotChoi[i] != nguoiBiLoai; i++)
	{
	}
	for (int j = i; j < soNguoiChoiTrongLuot-1; j++)
	{
		luotChoi[j] = luotChoi[j+1];
	}
	soNguoiChoiTrongLuot--;
}

int nguoiChoiTiepTheo(int *luotChoi, int soNguoiChoiTrongLuot, int nguoiVuaChoi)
{
	int i;
	for (i = 0; i < soNguoiChoiTrongLuot && luotChoi[i] != nguoiVuaChoi; i++)
	{
	}
	return luotChoi[(i+1) % soNguoiChoiTrongLuot];
}

int chonBai(int *boBaiNguoiChoi)
{
	int i = rand() % boBaiNguoiChoi[0] + 1;
	return boBaiNguoiChoi[i];
}

void choiBai(int *boBaiNguoiChoi, int quanBaiVuaChoi)
{
	int i;
	for (i = 1; i <= boBaiNguoiChoi[0] && boBaiNguoiChoi[i] != quanBaiVuaChoi; i++)
	{
	}
	for (int j = i; j < boBaiNguoiChoi[0]; j++)
	{
		boBaiNguoiChoi[j] = boBaiNguoiChoi[j+1];
	}
	boBaiNguoiChoi[0]--;
}

bool chuaAiHetBai(int **boBaiNguoiChoi)
{
    for (int i = 0; i < SO_NGUOI_CHOI; i++)
    {
        if (boBaiNguoiChoi[i][0] == 0) return false;
    }
    return true;
}
