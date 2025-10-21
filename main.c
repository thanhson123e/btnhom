#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("3- Giai Phuong trinh bac 2\n");
    printf("4- Tinh trung binh mon\n");
    printf("5- phan men tinh tien dien\n");
    printf("6- In ban cuu chuong\n");
    printf("7- Ham tinh gai thua\n");
    printf("8- Hien thi ra mang hinh\n");
    printf("9- Nhap tuan tu\n");
    printf("10-In ra Fibinaci\n");
    printf("11-in dau *\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        xemthang();
        menu();
        break;
    case 2:
        namnhuan();
        menu();
        break;
    case 3:
        giaiPhuongTrinhBac2();
        menu();
        break;
    case 4:
        tinhDtb();
        menu();
        break;
    case 5:
        tinhTienDien();
        menu();
        break;
    case 6:
        bangCuuChuong();
        menu();
        break;
    case 7:
        giaiThua();
        menu();
        break;
    case 8:
        inTamGiacSo();
        menu();
        break;
    case 9:
        nhapDungDenN();
        menu();
        break;
    case 10:
        fibonacci();
        menu();
        break;
    case 11:
        inTamGiacSao();
        menu();
        break;
    
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
