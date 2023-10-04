#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

#define DIEM_THANG 100

int _doXucXac();
/* ham mo phong do 1 xuc xac */

void cong(int *, const int &);
/* ham cap nhap vi tri tren duong dua cua rua hoac tho
   truyen con tro rua hoac tho tuong ung de cap nhat */

int main()
{
    srand(time(NULL));
    int soLanNg1Thang = 0;
    int soLanNg2Thang = 0;
	char chon;
	do
	{
	    int * diemNg1 = new int(0);
	    int * diemNg2 = new int(0);
	    int luotChoi = rand() % 2;
	    while (*diemNg1 < DIEM_THANG && *diemNg2 < DIEM_THANG)
	    {
	        if (luotChoi == 1)
            {
                int xx = _doXucXac();
                cong(diemNg1, xx);
                cout << "Nguoi choi 1 do xuc xac: " << xx;
                cout << ". Tong diem Nguoi choi 1: " << *diemNg1 << endl;
                luotChoi = 2;
            }
            else
            {
                int xx = _doXucXac();
                cong(diemNg2, xx);
                cout << "Nguoi choi 2 do xuc xac: " << xx;
                cout << ". Tong diem Nguoi choi 2: " << *diemNg2 << endl;
                luotChoi = 1;
            }
	        Sleep(20);
	    }
	    if (*diemNg1 > *diemNg2) {
	        cout << "Nguoi choi 1 thang" << endl;
	        soLanNg1Thang++;
	    }
	    else {
	        cout << "Nguoi choi 2 thang" << endl;
	        soLanNg2Thang++;
	    }

	    cout << "Nguoi choi 1 da thang " << soLanNg1Thang << " lan" << endl;
	    cout << "Nguoi choi 2 da thang " << soLanNg2Thang << " lan" << endl;

	    delete diemNg1; diemNg1 = NULL;
	    delete diemNg2; diemNg2 = NULL;

	    cout << "Choi tiep ko? (C/K) ";
	    cin >> chon;
	}
	while (chon == 'C' || chon == 'c');
    system("pause");
    return 0;
}

int _doXucXac()
{
    return 0;
}

void cong(int * diem, const int & xucxac)
{

}
