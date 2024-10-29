#include <stdio.h>
int main()
{
    int c,m,n,o,p;
    printf("\nFor buying something press 1: ");
    scanf("%d",&c);
    if (c==1)
    {
        int arr[5][5]={{0,0,0,0,0},
        {0,0,0,0,0,},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
         int arrr[5][6]={{0,0,0,0,0,0},{0,0,0,0,0,0,},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
        int s,i;
        label:
        printf("\nFrom which seller you want to buy(1-4): ");
        scanf("%d",&s);
        printf("\nwhat do you want to buy\n   for   milk   press 1\n   for  yougurt press 2\n   for   ghee   press 3\n   for  butter  press 4 : ");
        scanf("%d",&i);
        if (i==1)
        printf("\n MILK = ₹60/unit");
        else if(i==2)
        printf("\n YOUGURT = ₹90/unit");
        else if(i==3)
        printf("\n  GHEE = ₹700/unit");
        else if(1==4)
        printf("\n  BUTTER = ₹100/unit");
        printf("\nhow many quantity you want to buy: ");
        scanf("%d",&arr[i][s]);
    arrr[i][s]=arrr[i][s]+arr[i][s];
    int e;
       printf("do yo want to buy again if yes Press 1: ");
       scanf("%d",&e);
       if(e==1)
       {
           goto label;
       }
       else 
      { 
          for(m=1;m<5;++m)
       {
           for(n=1;n<5;++n)
           {
               arrr[m][5]=arrr[m][5]+arrr[m][n];
           }
       }
       arrr[5][1]=0;
       arrr[5][2]=0;
       arrr[5][3]=0;
       arrr[5][4]=0;
       arrr[5][5]=0;
       for(o=1;o<5;++o)
       {
           for(p=1;p<5;++p)
           {
               arrr[5][o]=arrr[5][o]+arrr[p][o];
           }
       }
       int u,v;
       u=arrr[5][1]+arrr[5][2]+arrr[5][3]+arrr[5][4];
       v=arrr[1][5]+arrr[2][5]+arrr[3][5]+arrr[4][5];
       arrr[1][6]=arrr[1][5]*60;
       arrr[2][6]=arrr[2][5]*90;
       arrr[3][6]=arrr[3][5]*700;
       arrr[4][6]=arrr[4][5]*100;
       arrr[5][6]=arrr[1][6]+arrr[2][6]+arrr[3][6]+arrr[4][6];
       
      adarsh:
       int ab;
       printf("\nwhat do you want to know\npress 11 for sales done by salesman 1\npress 12 for sales done by salesman 2\npress 13 for sales done by salesman 3\npress 14 for sales done by salesman 4\npress 15 for total units of milk sold\npress 16 for total units of yougurt sold\npress 17 for total units of ghee sold\npress 18 for total units of butter sold\npress 19 for total sell of milk\n press 20 for total sell of yougurt\npress 21 for total sell of ghee\npress 22 for total sell of butter \npress 23 for total sell of items : ");
       scanf("%d",&ab);
       switch(ab)
      {
        case 11:
        printf("\n%d",arrr[5][1]);
        break;
        case 12:
        printf("\n%d",arrr[5][2]);
        break;
        case 13:
        printf("\n%d",arrr[5][3]);
        break;
        case 14:
        printf("\n%d",arrr[5][4]);
        break;
        case 15:
        printf("\n%d",arrr[1][5]);
        break;
        case 16:
        printf("\n%d",arrr[2][5]);
        break;
        case 17:
        printf("\n%d",arrr[3][5]);
        break;
        case 18:
        printf("\n%d",arrr[4][5]);
        break;
        case 19:
        printf("\n%d",arrr[1][6]);
        break;
        case 20:
        printf("\n%d",arrr[2][6]);
        break;
        case 21:
        printf("\n%d",arrr[3][6]);
        break;
        case 22:
        printf("\n%d",arrr[4][6]);
        break;
        case 23:
        printf("\n%d",arrr[5][6]);
      }
        int ac;
        printf("\nanything else you want to know if YES press 1: ");
        scanf("%d",&ac);
        if (ac==1)
        {
            goto adarsh;
        }
        else 
        printf("\nHAVE A GREAT DAY");
      }
    }
    else
    printf("\nle lo na!!!!");
    return 0;
}
   
