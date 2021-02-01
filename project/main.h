#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#endif // MAIN_H_INCLUDED
typedef struct
{
    int j,m,a;
}date1;
typedef struct
{
    int j,m,a,h;
}date2;
/*VOITURE*/
typedef struct
{

    char mat[10];
    char marque[20];
    char couleur[20];
    int prix_1;
    date1 DA ;/*date d'achat*/
    char etat[1];/*prend en valeu D ou L*/
}voiture;
struct cellule1
{
    voiture info1;
    struct cellule1 * suiv1
};
typedef struct cellule1 * liste_voit;
/*CLIENT*/
typedef struct
{

    long int Cin;
    char nom[20];
    char prenom[20];
    int age;
    char adr[50];
    char tel[9];
}client;
struct cellule2
{
    client info2;
    struct cellule2 * suiv2
};
typedef struct cellule2 * liste_clt;
typedef struct
{
    long int num;
    long int Cin;
    char mat[9];
    date2 DL;
    int dureeL;
    int mt_p;
}location;
struct cellule3
{
    location info3;
    struct cellule3 * suiv3
};
typedef struct cellule3 * liste_loc;

int test()
{
       SetColor(9);
    int a,p;
    do{
                        for(p = 45; p < 110; p++)
        {
            gotoxy(p,24);printf(" ");
        }
    gotoxy(45,24);printf("affiche suiv?(0/1):");
    scanf("%d",&a);}while((a!=0)&&(a!=1));
    if(a==1){clearWindow();}
    SetColor(17);
             return a;
}

int retour()
{
    SetColor(9);
    int a,p;
    do{
                        for(p = 45; p < 110; p++)
        {
            gotoxy(p,24);printf(" ");
        }
    gotoxy(45,24);printf("voulez vous retour au menu precedent (0/1)");
    scanf("%d",&a);}while((a!=0)&&(a!=1));
    if(a==1){clearWindow();}
    SetColor(17);
             return a;
}
int retour1(liste_voit l)
{
        SetColor(9);
    int a,p;
    do{
                        for(p = 45; p < 110; p++)
        {
            gotoxy(p,24);printf(" ");
        }
    gotoxy(45,10+taille_s2(l)+2);printf("confirme (0/1)");
    scanf("%d",&a);}while((a!=0)&&(a!=1));

             return a;
}
int retour3(liste_clt l)
{
        SetColor(9);
    int a,p;
    do{
                        for(p = 45; p < 110; p++)
        {
            gotoxy(p,24);printf(" ");
        }
    gotoxy(45,10+taille_s1(l)+2);printf("confirme (0/1)");
    scanf("%d",&a);}while((a!=0)&&(a!=1));

             return a;
}
int retour4(liste_loc l)
{
        SetColor(9);
    int a,p;
    do{
                        for(p = 45; p < 110; p++)
        {
            gotoxy(p,24);printf(" ");
        }
    gotoxy(45,10+taille_s3(l)+2);printf("confirme (0/1)");
    scanf("%d",&a);}while((a!=0)&&(a!=1));

             return a;
}
void enregistrement_voiture(liste_voit l)
{
    SetColor(9);
    FILE *fp;

    fp = fopen("voiture.txt","a+");
    while(l)
    {

        fprintf(fp, "%s\t",l->info1.mat);
        fprintf(fp, "%s\t",l->info1.marque);
        fprintf(fp, "%s\t",l->info1.couleur);
        fprintf(fp, "%d\t",l->info1.prix_1);
        fprintf(fp, "%d\t",l->info1.DA.j);
        fprintf(fp, "%d\t",l->info1.DA.m);
        fprintf(fp, "%d\t",l->info1.DA.a);
        fprintf(fp, "%s\t\n",l->info1.etat);

        l=l->suiv1;


    }
    gotoxy(45,11);printf("enregistrement Termine!");
    fclose(fp);

}
liste_voit recupere_voiture(liste_voit l)
{
    SetColor(9);
    l=NULL;
    FILE *fp;
    liste_voit q,p;
    fp = fopen("voiture.txt","a+");
    while(!feof(fp))
    {
        p=(struct cellule1*)malloc(sizeof(struct cellule1));
        fscanf(fp, "%s\t",&p->info1.mat);
        fscanf(fp, "%s\t",p->info1.marque);
        fscanf(fp, "%s\t",p->info1.couleur);
        fscanf(fp, "%d\t",&p->info1.prix_1);
        fscanf(fp, "%d\t",&p->info1.DA.j);
        fscanf(fp, "%d\t",&p->info1.DA.m);
        fscanf(fp, "%d\t",&p->info1.DA.a);
        fscanf(fp, "%s\t\n",p->info1.etat);
    if(l==NULL)
    {
        p->suiv1=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv1!=NULL)
        {
            q=q->suiv1;
        }
        p->suiv1=q->suiv1;
        q->suiv1=p;
    }}



    fclose(fp);
    return(l);

}
void enregistrement_client(liste_clt l)
{
    SetColor(9);
    FILE *fp1;
    fp1 = fopen("client.txt","a+");
    while(l)
    {

        fprintf(fp1, "%d\t",l->info2.Cin);
        fprintf(fp1, "%s\t",l->info2.nom);
        fprintf(fp1, "%s\t",l->info2.prenom);
        fprintf(fp1, "%d\t",l->info2.age);
        fprintf(fp1, "%s\t",l->info2.adr);
        fprintf(fp1, "%s\t\n",l->info2.tel);
        l=l->suiv2;


    }
    gotoxy(45,11);printf("enregistrement Termine!");
    fclose(fp1);

}
liste_clt recupere_client(liste_clt l)
{
    SetColor(9);
    l=NULL;
    FILE *fp1;
    liste_clt q,p;
    fp1 = fopen("client.txt","a+");
    while(!feof(fp1))
    {
        p=(struct cellule2*)malloc(sizeof(struct cellule2));
        fscanf(fp1, "%d\t",&p->info2.Cin);
        fscanf(fp1, "%s\t",p->info2.nom);
        fscanf(fp1, "%s\t",p->info2.prenom);
        fscanf(fp1, "%d\t",&p->info2.age);
        fscanf(fp1, "%s\t",p->info2.adr);
        fscanf(fp1, "%s\t\n",p->info2.tel);
    if(l==NULL)
    {
        p->suiv2=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv2!=NULL)
        {
            q=q->suiv2;
        }
        p->suiv2=q->suiv2;
        q->suiv2=p;
    }}
    fclose(fp1);
    return(l);

}
void enregistrement_location(liste_loc l)
{
    SetColor(9);
    FILE *fp2;
    fp2 = fopen("location.txt","a+");
    while(l)
    {

        fprintf(fp2, "%d\t",l->info3.num);
        fprintf(fp2, "%d\t",l->info3.Cin);
        fprintf(fp2, "%s\t",l->info3.mat);
        fprintf(fp2, "%d\t",l->info3.DL.j);
        fprintf(fp2, "%d\t",l->info3.DL.m);
        fprintf(fp2, "%d\t",l->info3.DL.a);
        fprintf(fp2, "%d\t",l->info3.dureeL);
        fprintf(fp2, "%d\t\n",l->info3.mt_p);
        l=l->suiv3;


    }
    gotoxy(45,11);printf("enregistrement Termine!");
    fclose(fp2);

}
liste_loc recupere_location(liste_loc l)
{
    SetColor(9);
    l=NULL;
    FILE *fp2;
    liste_loc q,p;
    fp2 = fopen("location.txt","a+");
    while(!feof(fp2))
    {
        p=(struct cellule3*)malloc(sizeof(struct cellule3));
        fscanf(fp2, "%d\t",&p->info3.num);
        fscanf(fp2, "%d\t",&p->info3.Cin);
        fscanf(fp2, "%s\t",&p->info3.mat);
        fscanf(fp2, "%d\t",&p->info3.DL.j);
        fscanf(fp2, "%d\t",&p->info3.DL.m);
        fscanf(fp2, "%d\t",&p->info3.DL.a);
        fscanf(fp2, "%d\t",&p->info3.dureeL);
        fscanf(fp2, "%d\t\n",&p->info3.mt_p);

    if(l==NULL)
    {
        p->suiv3=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv3!=NULL)
        {
            q=q->suiv3;
        }
        p->suiv3=q->suiv3;
        q->suiv3=p;
    }}
    fclose(fp2);
    return(l);

}
