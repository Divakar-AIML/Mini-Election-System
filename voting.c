#include<stdio.h>
#include<conio.h>

#define CANDIDATE_COUNT
#define CANDIDATE1 "TONY STARK [🛩️]"
#define CANDIDATE2 "STEVE ROGERS [🚁]"
#define CANDIDATE3 "BRUCE BANNER[🚙]"
#define CANDIDATE4 "NATASHA ROMANOFF[🏍️]"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledvotes=0;
int a[100]={1101,1102,1103,1104,1105,1106,1107,1108,1109,1110,1111,1112,1113,1114,1115,1116,1117,1118,1119,1120};

void castVote() {
    clrscr();
    int choice,studentid,count=0,pos=21,i;
    printf("\n Enter your Student ID : ");
    scanf("%d",&studentid);
    for(i=0;i<=100;i++)
    {
    if(a[i]==studentid)
    {
    count++;
    }
    }
    for(i=100;i>=pos-1;i--)
    {
    a[i+1]=a[i];
    a[pos-1]=studentid;
    }
    pos++;
    if(count==1)
    {
    printf("\n\n ### Please choose your Candidate ####\n\n");
   
 printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);
    printf("\n 5. %s", "None of These");
    printf("\n\n Input your choice (1 - 4) : ");
    scanf("%d",&choice);

    switch(choice) {
    case 1:
        votesCount1++;
        break;
    case 2:
        votesCount2++;
        break;
    case 3:
        votesCount3++;
        break;
    case 4:
        votesCount4++;
        break;
    case 5:
        spoiledvotes++;
        break;
    default:
        printf("\n Error: Wrong Choice !! Please retry");
        //hold the screen
        getchar();
    }
    printf("\n thanks for vote !!");
    clrscr();
    }
    else if(count>1)
    {
    printf("\n You Have Already Casted Your Vote\nCheck your Id");
    }
    else
    {
   
printf("\n Error: Wrong Student Id");
}
}
void votesCount() {
    clrscr();
    printf("\n\n ##### Voting Statics ####");
    printf("\n %s - %d ", CANDIDATE1, votesCount1);
    printf("\n %s - %d ", CANDIDATE2, votesCount2);
    printf("\n %s - %d ", CANDIDATE3, votesCount3);
    printf("\n %s - %d ", CANDIDATE4, votesCount4);
    printf("\n %s - %d\n ", "Spoiled Votes", spoiledvotes);
}

void getLeadingCandidate() {
    clrscr();
    printf("\n\n  #### Leading Candidate ####\n\n");
   
 if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
        printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
        printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
        printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
        printf("[%s]",CANDIDATE4);
    else
        printf("----- Warning !!! No-win situation----");

 }

void admin() {
    
    int admin=1,adminid,password,n;
    clrscr();
    printf("\n\n #### Admin Panel ####");
    while(admin!=0)
    {
        printf("\n Enter your user Id : ");
        scanf("\n%d",&adminid);
        printf("\n Enter password : ");
        scanf("\n%d",&password);
        if(adminid==992200&&password==2004)
        {
            printf("\n 1. Find Vote Count");
            printf("\n 2. Find leading Candidate");
            printf("\n 0. Exit");
            printf("\n\n Please enter your choice : ");
            scanf("%d",&n);
    
            switch (n)
            {
                case 1:
                votesCount();
                break;
                case 2:
                getLeadingCandidate();
                break;
                case 0:
                clrscr();
                break;
                default :
                printf("\nError: Invalid Choice");
            }
            admin=0;
        }
        else
        {
        printf("\nError: Enter correct Id and password");
        }

    }
}
void main(){
    int choice;
    clrscr();
    do {
        printf("\n\n ###### Welcome to Election/Voting 2022 #####");
        printf("\n\n 1. Cast the Vote");
        printf("\n 2. Admin Panel");
        printf("\n\n Please enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            castVote();
            break;
        case 2:
            admin();
            break;
        default:
            printf("\nError: Invalid Choice");
        }
      }
     while(choice!=0);
//hold the screen
    getchar();
    }