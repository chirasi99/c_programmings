#include<stdio.h>
#include<string.h>

struct item
{
    char ItemCode[100];
    char Unit[10];
    float UnitPrice;
    float stock;
    char Title[50];
};


int main()
{
    struct item it0 ={"ITEM400", "1.0", 27.0, 200.0, "Sunlight soap"};
    struct item it1= {"ITEM401", "1.0", 170.0, 50.0, "Anchor Packet(400gr)"};
    struct item it4= {"ITEM404", "1.0", 550.0, 25.0,"Anchor Packet(1kg)"};
    struct item it12 ={"ITEM412", "1.0kg", 80.0, 300.0, "Rice"};
    struct item it20 ={"ITEM420", "500.0gr", 65.5, 200.0, "Dhal"};
    struct item it19= {"ITEM419", "250.0ml", 225.5, 10.0, "Cordial Bottle"};
    struct item it11= {"ITEM411", "1.0li", 160.0, 20.0, "Sun Flower Oil"};

    printf("\n\n---------------------------------------------------------------------------------------------\n\n");
    printf("   ItemCode        Unit        Price       Stock          Item         \n\n");
    printf("---------------------------------------------------------------------------------------------\n\n");
    printf("  %8s     %6s       %5.1f          %5.2f          %s                  \n",it0.ItemCode,it0.Unit,it0.UnitPrice,it0.stock,it0.Title);
    printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n",it1.ItemCode,it1.Unit,it1.UnitPrice,it1.stock,it1.Title);
    printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n",it4.ItemCode,it4.Unit,it4.UnitPrice,it4.stock,it4.Title);
    printf("  %8s     %6s       %5.1f          %5.2f          %s                  \n",it12.ItemCode,it12.Unit,it12.UnitPrice,it12.stock,it12.Title);
    printf("  %8s     %6s       %4.1f          %5.2f          %s                  \n",it20.ItemCode,it20.Unit,it20.UnitPrice,it20.stock,it20.Title);
    printf("  %8s     %6s      %5.1f          %5.2f           %s                  \n",it19.ItemCode,it19.Unit,it19.UnitPrice,it19.stock,it19.Title);
    printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n",it11.ItemCode,it11.Unit,it11.UnitPrice,it11.stock,it11.Title);

   struct item it2 = {"ITEM402", "1.0", 13.50, 100, "HP Pencil"};
   struct item it3 = {"ITEM403", "1.0", 38.00, 30, "Sun Silk Shampoo"};
   struct item it5 = {"ITEM405", "250.0gr", 65.00, 150, "Sugar"};

   printf("\n\nAfter adding other items.................");

   printf("\n\n---------------------------------------------------------------------------------------------\n\n");
   printf("   ItemCode        Unit        Price       Stock          Item         \n\n");
   printf("---------------------------------------------------------------------------------------------\n\n");
   printf("  %8s     %6s       %5.1f          %5.2f          %s                  \n", it0.ItemCode, it0.Unit, it0.UnitPrice, it0.stock, it0.Title);
   printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n", it1.ItemCode, it1.Unit, it1.UnitPrice, it1.stock, it1.Title);
   printf("  %8s     %6s       %5.1f          %5.2f          %s                  \n", it2.ItemCode, it2.Unit, it2.UnitPrice, it2.stock, it2.Title);
   printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n", it3.ItemCode, it3.Unit, it3.UnitPrice, it3.stock, it3.Title);
   printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n", it4.ItemCode, it4.Unit, it4.UnitPrice, it4.stock, it4.Title);
   printf("  %8s     %6s      %5.1f          %5.2f          %s                  \n", it5.ItemCode, it5.Unit, it5.UnitPrice, it5.stock, it5.Title);
   printf("  %8s     %6s       %5.1f          %5.2f          %s                  \n", it12.ItemCode, it12.Unit, it12.UnitPrice, it12.stock, it12.Title);
   printf("  %8s     %6s       %4.1f          %5.2f          %s                  \n", it20.ItemCode, it20.Unit, it20.UnitPrice, it20.stock, it20.Title);
   printf("  %8s     %6s      %5.1f          %5.2f           %s                  \n", it19.ItemCode, it19.Unit, it19.UnitPrice, it19.stock, it19.Title);
   printf("  %8s     %6s       %5.1f          %5.2f           %s                  \n", it11.ItemCode, it11.Unit, it11.UnitPrice, it11.stock, it11.Title);

   printf("\n\n***************BILL**************");
   printf("\n\n---------------------------------------------------------------------------------------------\n\n");
   printf("   ItemCode     Unit Price       Quatity          Total        \n\n");
   printf("-----------------------------------------------------------------------------------------------\n\n");
   printf("  %8s      %6.2f             2.0            %0.2f                \n", it2.ItemCode, it2.UnitPrice, it2.UnitPrice * 2.0);
   printf("  %8s      %6.2f             2.5            %0.2f                \n", it12.ItemCode, it12.UnitPrice, it12.UnitPrice * 2.5);
   printf("  %8s      %6.2f             2.0            %0.2f                \n", it4.ItemCode, it4.UnitPrice, it4.UnitPrice * 2.0);
   printf("  %8s      %6.2f          1500.0            %0.2f                \n", it19.ItemCode, it19.UnitPrice, it19.UnitPrice * 6.0);
   printf("\n------------------------------------------------------------------------------------------------\n");
   printf("                                  GRAND TOTAL :   %0.1f                                       ", it2.UnitPrice * 2.0 + it12.UnitPrice * 2.5 + it4.UnitPrice * 2.0 + it19.UnitPrice * 6.0);
   printf("\n------------------------------------------------------------------------------------------------\n");

}