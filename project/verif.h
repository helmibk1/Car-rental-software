#ifndef FUNC1_H_INCLUDED
#define FUNC1_H_INCLUDED



#endif // FUNC1_H_INCLUDED
int verif_mat(char x[10])

{
    int l,i;
    int test=1;
    char y[2];
    char *p,*h;
    long nb;
   l=strlen(x);
   if(l==9)
   {

               for(i=0;i<3;i++)
            {
                    if(!((x[i]>='0')&&(x[i]<='9'))){test=0;}
            }
                for(i=5;i<9;i++)
            {
                    if(!((x[i]>='0')&&(x[i]<='9'))){test=0;}
            }
                if((test)&&(x[3]=='T')&&(x[4]=='N'))
            {

                return 1;
            }



   }
   return 0;
}
int verif_1(char x[10])
{
    int l,i;
    int test=1;
    l=strlen(x);
    if((l>2)&&(l<10))

    {
        for(i=0;i<l;i++){
                if(!((x[i]>='a')&&(x[i]<='z'))&&!((x[i]>='A')&&(x[i]<='Z'))){test=0;}}
         if(test)
        {return 1;}
    }
    return 0;
}
int verif_2(char x[1])
{

    if((x[0]=='d')||(x[0]=='D')||(x[0]=='l')||(x[0]=='L')){return 1;}
    return 0;
}
void saisie_ch(char* y[20])
{ int i;
 char x[20];
            do
    {
     printf("mat_donner=");
    scanf ("%s",&x);
    i=verif_mat(x);

    }
    while(i==0);
    *y=x;
}

int verif_cin(long int x)

{
    if((x<10000000)||(x>99999999))
   return 0;
   else return 1;
}

int verif_3(char x[10])
{
    int l,i;
    int test=1;
    l=strlen(x);
    if(l==8)

    {
        for(i=0;i<l;i++){
                if(!((x[i]>='0')&&(x[i]<='9'))){test=0;}}
         if(test)
        {return 1;}
    }
    return 0;
}
int verif_mat2(char x[10],liste_voit l)
{
    int ok=0;
    liste_voit p=l;
if (p==NULL) {return 1;}
else{
while (p && !ok)
    {
    if(strcmp(p->info1.mat,x) == 0)
               {

               ok=1;}
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){ return 1;}
    else  return 0 ;
}}
int verif_mat3(char x[10],liste_voit l)
{
    int ok=0;
    liste_voit p=l;
if (p==NULL) {return 1;}
else{
while (p && !ok)
    {
    if(strcmp(p->info1.mat,x) == 0)
               {

               ok=1;}
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){ return 1;}
    else if ((p->info1.etat[0]=='l')||(p->info1.etat[0]=='L'))return 0 ;
}}
int verif_cin2(long int  x,liste_clt l)
{
    int ok=0;
    liste_clt p=l;
if (p==NULL) {return 1;}
else{
while (p && !ok)
    {
    if(p->info2.Cin==x)
               {

               ok=1;}
            else
        {
        p=p->suiv2;}
    }
    if(ok==0){ return 1;}
    else  return 0 ;
}}
liste_voit rechreche_voiture1(liste_voit l,char x[10])
{
    int q,ok,j,t,i=11;
    liste_voit p=l;
    t=taille(l);
        if(l==NULL)
    { return(l);}
    else{
    if(strcmp(p->info1.mat,x) == 0)
{
/******************/
}
    else
    {
    p=p->suiv1;
        ok=0;
    while (p && !ok)
    {
    if(strcmp(p->info1.mat,x) == 0)
                ok=1;
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){return l;}
    else
    {
    /*******************/
    }
 }
return l;}
}
int verif_location(char x[10])
{
    liste_voit p;
    p=recupere_voiture(NULL);

}
int taille_s1(liste_clt l)
{
    int t=taille1(l);
        if(t>6){
    return 12;}
    else return (taille1(l))*2;
}
int taille_s2(liste_voit l)
{
    int t=taille(l);
        if(t>6){
    return 12;}
    else return (taille(l))*2;
}
int taille_s3(liste_loc l)
{
    int t=taille2(l);
    if(t>6){
    return 12;}
    else return (taille2(l))*2;
}
























