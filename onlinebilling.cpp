    #include<stdio.h>
    #include<string.h>
    
    void glossery();
    void add();
    int main()
    {
        int chai,coffie,biskut,namkin,daliya;
        char user[10],employe[50],name[50];
        int id,yes,no,number,code,date,bill,gocode;
        int tatal,total1,total2,total3,total4,total5;
         int chai1,coffie1,biskut1,namkin1,daliya1;
    printf("------------WELCOM TO VISITOR MALL--------------\n");
    printf("-------------------------------------------------\n\n");
    printf("Do you have employe ID \n");
    printf("so click 8\n\n");
    printf("That condition you have not employe ID \n");
    printf("So first creat a employe id\n\n");
    printf("click 10 to creat\n\n");
    printf("Enter :");
    scanf("%d",&yes,&no);
    if(yes==8)
    {
   printf("Enter MALL NAME :");
    scanf("%s",user);
    printf("Enter Employe ID : ");
    scanf("%d",&id);
    printf("Enter What will be Buy :\n\n");
    void glossery();
    }
    if(id==12345 && strcmp(user,"visitor_mall")==0)
    {
        printf("WELCOME: Harsh shrivastava\n");
        printf("you are the part of the mall\n");
    }
    else if(yes==10)
    {
        printf("Enter yor name :\n");
        scanf("%s",name);
        printf("Enter your phone number :\n");
        scanf("%d",&number);
        printf("Date of join :");
        scanf("%d",&date);
        printf("Ether your code :\n");
        scanf("%d",&code);
    }
    if(code==19902){
        printf("you are resissterd\n");
    printf("---------------------------\n\n");
    printf("your mall name is : visitor_mall\n");
    printf("your employe ID is :12345\n ");
    printf("click 6 to go Billing page  ->");
    scanf("%d",& bill);
    }
    else
    {
        printf("the Companey code is Involide please try Again....\n");
        printf("--------------------------------------------------\n\n");
        printf("press 3 to go re-Enter our Code....\n\n");
        scanf("%d",&gocode);
     }
    if(gocode==3)
    {
         printf("Enter yor name :\n");
        scanf("%s",name);
        printf("Enter your phone number :\n");
        scanf("%d",&number);
        printf("Date of join :");
        scanf("%d",&date);
        printf("Ether your code :");
        scanf("%d",&code);
    }
    else
    {
        printf("you have exit the billing section Thank You!!\n");
    }
    
    if(bill==6)
    {
      printf("Enter MALL NAME :");
    scanf("%s",user);
    printf("Enter Employe ID : ");
    scanf("%d",&id);
    printf("Enter What will be Buy :\n\n");
    }
    glossery();
    add();
    printf("Thank you for visiting Mall..");
    return 0;
    }
    
       void glossery()
    {
    int chai,coffie,biskut,namkin,daliya;
    printf("--------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("GLOSSARY POINT\n\n");
    printf("chai($100) :");
    scanf("%d",chai);
    printf("coffie($150) :");
    scanf("%d",&coffie);
    printf("biskut($50) :");
    scanf("%d",&biskut);
    printf("namkit($70) :");
    scanf("%d",&namkin);
    printf("daliya($40) :");
    scanf("%d",&daliya);
   
 }
void add(){
    int chai1,coffie1,biskut1,namkin1,daliya1;
    int total,total1,total2,total3,total4,total5;
    int chai,coffie,biskut,namkin,daliya;
    total1=100*chai;
    total2=150*coffie;
    total3=50*biskut;
    total4=70*namkin;
    total5=40*daliya;
    total=total1+total2+total3+total4+total5;
    printf("The total Amount Is :%d",total);
}
 
 
