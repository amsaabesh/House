#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    FILE *bill_save;
    bill_save=fopen("Vara.txt","a");
    double charge=8950,other,water,elect,total,ma,chachu,mama_fupa,w_ma,w_mama_fupa,w_chachi,wa_to;
    char month[11];
    int year,i=0;
    printf("Enter this month name: ");
    scanf("%s",month);
    strupr(month);
    printf("\n");
    printf("Enter year: ");
    scanf("%d",&year);
    printf("\n");
    printf("Enter water bill: ");
    scanf("%lf",&water);
    printf("\n");
    printf("Enter electricity bill: ");
    scanf("%lf",&elect);
    printf("\n");
    printf("Enter other charges: ");
    scanf("%lf",&other);
    printf("\n");
    total=charge+other;
    wa_to=water+elect;
    w_ma=wa_to/6.36;
    w_mama_fupa=wa_to/3.18;
    w_chachi=wa_to/4.66;
    ma=(total/6)+w_ma;
    mama_fupa=(total/3)+w_mama_fupa;
    chachu=(total/6)+w_chachi;
    fprintf(bill_save,"welcome to house no 172/2 north shyamoli dhaka,1207\nIn %s,%d the bill of \nboro mama is %.2lf taka only\nboro fupa is is: %.2lf taka only\nchachu is %.2lf taka only\nma %.2lf taka only\nThanks Every one\n\n\n",month, year, mama_fupa, mama_fupa, chachu, ma);
    getch();
    return 0;
}
