#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] ='\0';
}

bool doesCharAppear(char str[], int len, char c)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(str[i] == c)
			return true;
	}
	return false;
}

int firstPositionCharAppearInString(char str[], int len, char c)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if(str[i] == c)
			return i;
	}
}

void main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi da nhap la: ");
	puts(str);
	
	int len = strlen(str);
	
	char c;
	printf("Nhap 1 ky tu: ");
	scanf("%c",&c);

	if(doesCharAppear(str,len,c))
	{
	printf("Ky tu '%c' xuat hien lan dau tien o vi tri thu %d trong chuoi",c,firstPositionCharAppearInString(str,len,c));
	}
	else
		printf("Khong ton tai ky tu '%c' trong chuoi",c);
}
