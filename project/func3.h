#ifndef FUNC3_H_INCLUDED
#define FUNC3_H_INCLUDED



#endif // FUNC3_H_INCLUDED
date2 saisie_date2()
{
    int p;
    date2 d;
    do
    {
         for(p = 45; p < 64; p++)
        {
            gotoxy(p,18);printf(" ");
        }

    gotoxy(53,18);scanf ("%d",&d.j);
    }
    while((d.j<1)||(d.j>31));
    do
    {
         for(p = 66; p < 84; p++)
        {
            gotoxy(p,18);printf(" ");
        }

    gotoxy(70,18);scanf ("%d",&d.m);
    }
    while((d.m<1)||(d.m>12));
    do
    {
         for(p = 86; p < 103; p++)
        {
            gotoxy(p,18);printf(" ");
        }

    gotoxy(88,18);scanf ("%d",&d.a);
    }
    while((d.a<1900)||(d.a>2020));
    return (d);
}
location saisie_location(liste_clt l,liste_voit lv)
{
    a:clearWindow_s();
    draw_cadre(8);
gotoxy(48,8);printf("Numero");
draw_cadre(11);
gotoxy(48,11);printf("Cin");
draw_cadre(14);
gotoxy(48,14);printf("Matricule");
draw_cadre4(17);
gotoxy(53,17); printf("Jour");
gotoxy(70,17);printf("Moi");
gotoxy(88,17);printf("Annee");
draw_cadre2(20);
gotoxy(48,20);printf("Dureel");
gotoxy(77,20);printf("Montont");

    int y,u,i,p;
    location v;

   SetColor(9);

   do
  {

            for(p = 45; p < 103; p++)
        {
            gotoxy(p,9);printf(" ");
        }

    gotoxy(45,9);scanf ("%d",&v.num);
    i=verif_cin(v.num);
    }
    while((i==0));


     do
  {

            for(p = 45; p < 103; p++)
        {
            gotoxy(p,12);printf(" ");
        }

    gotoxy(45,12);scanf ("%d",&v.Cin);
    i=verif_cin(v.Cin);
    }
    while((i==0));
        u=verif_cin2(v.Cin,l);
        if(u==1){gotoxy(65,12);printf("client nest pas existe ");Sleep(3000);goto a;
        }
        do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,15);printf(" ");
        }

    gotoxy(45,15);scanf ("%s",&v.mat);
    i=verif_mat(v.mat);

    }
    while((i==0));
 y=verif_mat2(v.mat,lv);
 if(y==1){gotoxy(65,15);printf("matricule nest pas existe!");Sleep(3000);goto a;}
 y=verif_mat3(v.mat,lv);
 if(y==0){gotoxy(65,15);printf("matricule nest pas disponible!");Sleep(3000);goto a;}


    v.DL=saisie_date2();
    while(i==0);

        do
    {
         for(p = 45; p < 72; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(45,21);scanf ("%d",&v.dureeL);
    }
    while(v.dureeL<0);
    do
    {
         for(p = 74; p < 103; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(77,21);scanf ("%d",&v.mt_p);
    }
    while(v.mt_p<0);
    SetColor(17);
    return(v);
}
void affiche4(liste_loc l)
{
    int t,k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    clearWindow();
    SetColor(9);
    int i=9;
    t=taille2(l);
        nx=t/6;
    n3=t%6;
    if(n3==0){n2=nx;}
    else{n2=nx+1;}

    if (l==NULL)
       {gotoxy(45,13); printf("______vide______");}
    else
    {draw_m_clone2(t,8);
print_heading1("LA liste location");
print_heading5(" Numero  ",44);
print_heading5("   Cin  ",55);
print_heading5("Matricul",65);
print_heading5(" Date Location  ",75);
print_heading5("Dur",92);
print_heading5("Mtp  ",97);
                while(l)

            {
    gotoxy(46,i);printf("%d",l->info3.num);
    gotoxy(56,i);printf("%d",l->info3.Cin);
    gotoxy(66,i);printf("%s",l->info3.mat);
    gotoxy(80,i);printf("%d/%d/%d",l->info3.DL.j,l->info3.DL.m,l->info3.DL.a);
    gotoxy(94,i);printf("%d",l->info3.dureeL);
    gotoxy(100,i);printf("%d",l->info3.mt_p);

               l=l->suiv3;
                i=i+2;
                n++;
                if((n%6==0)&&(n>=6)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            draw_m_clone2(t,8);
print_heading1("LA liste location");
print_heading5(" Numero  ",44);
print_heading5("   Cin  ",55);
print_heading5("Matricul",65);
print_heading5(" Date Location  ",75);
print_heading5("Dur",92);
print_heading5("Mtp  ",97);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            draw_m_clone2(n3,8);
print_heading1("LA liste location");
print_heading5(" Numero  ",44);
print_heading5("   Cin  ",55);
print_heading5("Matricul",65);
print_heading5(" Date Location  ",75);
print_heading5("Dur",92);
print_heading5("Mtp  ",97);


                }else if(n1==0){goto en;}
                }}
            }
    }en:
    SetColor(17);
}

liste_loc insere_tete_location(liste_loc l ,liste_clt lc,liste_voit lv)
{
    liste_loc p;
    p=(struct cellule3*)malloc(sizeof(struct cellule3));
    p->info3=saisie_location(lc,lv);
    p->suiv3=l;
    l=p;
    return l;
}
liste_loc insere_queue_location(liste_loc l ,liste_clt lc,liste_voit lv)
{
    liste_loc p,q;
    p=(struct cellule3*)malloc(sizeof(struct cellule3));
    p->info3=saisie_location(lc,lv);
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
    }
    return(l);
}
void insere_pos_location(liste_loc l,int pos ,liste_clt lc,liste_voit lv)
{
    int i=1;
    liste_loc p=l,q;
    while(i<pos-1)
    {
        i++;
        p=p->suiv3;
    }

    q=(struct cellule3*)malloc(sizeof(struct cellule3));
    q->info3=saisie_location(lc,lv);
    q->suiv3=p->suiv3;
    p->suiv3=q;

}
liste_loc remplir2(liste_loc l,liste_clt lc,liste_voit lv)
{
    int pos,t,p;
    t=taille2(l);
        do
        {
                        for(p = 45; p < 103; p++)
           {
            gotoxy(p,9);printf(" ");
           }
            gotoxy(45,9); printf("Donner la position entre 1 et %d :",t+1);
            scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t+1));
        if(pos==1)
            l=insere_tete_location(l,lc,lv);
        else
            if(pos==t+1)
                l=insere_queue_location(l,lc,lv);
            else
                insere_pos_location(l,pos,lc,lv);
    return l;

}
int taille2(liste_loc l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv3;
    }
    return cp;
}

liste_loc supprimer_tete_location(liste_loc l)
{
    liste_loc p=l;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
    {
        l=p->suiv3;
        free(p);
        gotoxy(45,24);printf("list supprime!\n");
    }
    return l;
}
liste_loc supprimer_queue_location(liste_loc l)
{
    liste_loc p1,p2;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
        if (l->suiv3==NULL)
    {
        p2=l;
        free(p2);
        l=NULL;
       gotoxy(45,23); printf("list supprime!\n");
    }
    else
    {
        p1=l;
        while ((p1->suiv3)->suiv3)
            p1=p1->suiv3;
        p2=p1->suiv3;
        p1->suiv3=NULL;
        free(p2);
    }
    return l;
}
void supprimer_pos_location(liste_loc l,int pos)
{
    int i=1;
    liste_loc p1=l,p2;
    while(i<pos-1)
    {
        i++;
        p1=p1->suiv3;
    }
    p2=p1->suiv3;
    p1->suiv3=p2->suiv3;
    free(p2);
}
liste_loc suppression2 (liste_loc l)
{
    int pos,t,p;

        t=taille2(l);
        if (l==NULL)
        {
            gotoxy(45,13);printf("LISTE VIDE\n");
            return(l);
        }
        do
        {
                                    for(p = 45; p < 103; p++)
        {
            gotoxy(p,9+taille_s3(l));printf(" ");
        }
            gotoxy(45,9+taille_s3(l));printf("Donner la position entre 1 et %d :",t);
            scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t));
        if (pos==1)
            l=supprimer_tete_location(l);
        else
            if (pos==t)
                l=supprimer_queue_location(l);
        else
            supprimer_pos_location(l,pos);

    return l;
}

liste_loc supprimer_donne_location(liste_loc l)
{
    int q,ok,j,t,i=2;
    long int x;
    liste_loc p=l;
    t=taille2(l);
       do
    {
                                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s3(l));printf(" ");
        }
     gotoxy(45,9+taille_s3(l));printf("\tnum_donner=");
    scanf ("%d",&x);
    j=verif_cin(x);
    }while(j==0);
    if(l==NULL)
    { gotoxy(45,11+(taille1(l))*2);printf("\tliste est vide");return(l);}
    else
    if(p->info3.num==x)
                   { l=supprimer_tete_location(l);}
    else{
        ok=0;
    while (p->suiv3 && !ok)
    {
    if(p->suiv3->info3.num==x)
                ok=1;
            else
        {i++;
        p=p->suiv3;}
    }
    if(ok==0){ gotoxy(45,4);printf("\tnest pas trouver\n");}
    else if(i==t){l=supprimer_queue_location(l);}
    else supprimer_pos_location(l,i);}
return l;
}

liste_loc modif_date_loc(liste_loc l)
{
    int j,ok,q;
   date2 d;
    long int ch1;
    liste_loc p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s3(l));printf(" ");
        }
      gotoxy(45,9+taille_s3(l));printf("\tnum_donner=");
    scanf ("%d",&ch1);
    j=verif_cin(ch1);
    }while(j==0);
    do
    {
         for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s3(l));printf(" ");
        }
    gotoxy(45,10+taille_s3(l)); printf("\tjour=");
    scanf ("%d",&d.j);
    }
    while((d.j<1)||(d.j>31));
    do
    {
         for(q = 45; q< 103; q++)
        {
            gotoxy(q,11+taille_s3(l));printf(" ");
        }
     gotoxy(45,11+taille_s3(l));printf("\tmois=");
    scanf ("%d",&d.m);
    }
    while((d.m<1)||(d.m>12));
    do
    {
         for(q = 45; q < 103; q++)
        {
            gotoxy(q,12+taille_s3(l));printf(" ");
        }
     gotoxy(45,12+taille_s3(l));printf("\tannee=");
    scanf ("%d",&d.a);
    }
    while((d.a<1900)||(d.a>2020));

    if(p->info3.num==ch1)
                   {p->info3.DL.j=d.j; p->info3.DL.m=d.m; p->info3.DL.a=d.a; return p; }
    else{
        ok=0;
    while (p->suiv3 && !ok)
    {
    if(p->info3.num==ch1)
                {ok=1;
                p=p->suiv3;}
            else
        {
        p=p->suiv3;}
    }
    if(ok==0){ gotoxy(45,15);printf("\tnest pas trouver\n");}
    else {p->info3.DL.j=d.j;p->info3.DL.m=d.m;p->info3.DL.a=d.a;
     gotoxy(45,16);printf("");}}
return l;
}
liste_loc modif_duree(liste_loc l)
{
    int j,ok,q;
    long int ch1;
    float ch2;
    liste_loc p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s3(l));printf(" ");
        }
      gotoxy(45,9+taille_s3(l));printf("\tnun_donner=");
    scanf ("%d",&ch1);
    j=verif_cin(ch1);
    }while(j==0);
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s3(l));printf(" ");
        }
     gotoxy(45,10+taille_s3(l)); printf( "\tduree_donner=");
    scanf ("%f",&ch2);
    }while(ch2<0);
    if(p->info3.num==ch1)
                   {p->info3.dureeL=ch2;gotoxy(45,12);printf("");}
    else{
        ok=0;
    while (p->suiv3 && !ok)
    {
    if(p->info3.num==ch1)
                {ok=1;
                p=p->suiv3;}
            else
        {
        p=p->suiv3;}
    }
    if(ok==0){ gotoxy(45,15);printf("\tnest pas trouver\n");}
    else {p->info3.dureeL=ch2;
     gotoxy(45,16);printf("");}}
return l;
}
liste_loc rechreche_location_cin(liste_loc l)
{
    int q,ok,j,t,i=11;
    long int x;
    liste_loc p=l;
    t=taille2(l);
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
       do
    {
        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9);printf(" ");
        }
      gotoxy(45,9);printf("\tcin_donner=");
    scanf ("%d",&x);
    }while(x<0);
    if(p->info3.Cin==x)
                   { drawclone2(10,1);
    gotoxy(46,i);printf("%d",l->info3.num);
    gotoxy(56,i);printf("%d",l->info3.Cin);
    gotoxy(66,i);printf("%s",l->info3.mat);
    gotoxy(80,i);printf("%d/%d/%d",l->info3.DL.j,l->info3.DL.m,l->info3.DL.a);
    gotoxy(94,i);printf("%d",l->info3.dureeL);
    gotoxy(100,i);printf("%d",l->info3.mt_p);
                    }
    else{p=p->suiv3;
        ok=0;
    while (p && !ok)
    {
    if(p->info3.Cin==x)
                ok=1;
            else
        {
        p=p->suiv3;}
    }
    if(ok==0){ gotoxy(45,14);printf("\tnest pas trouver\n");}
    else  {drawclone2(10,1);
    gotoxy(46,i);printf("%d",l->info3.num);
    gotoxy(56,i);printf("%d",l->info3.Cin);
    gotoxy(66,i);printf("%s",l->info3.mat);
    gotoxy(80,i);printf("%d/%d/%d",l->info3.DL.j,l->info3.DL.m,l->info3.DL.a);
    gotoxy(94,i);printf("%d",l->info3.dureeL);
    gotoxy(100,i);printf("%d",l->info3.mt_p);}}
return l;}
}
liste_loc rechreche_location_mat(liste_loc l)
{
    int q,ok,j,t,i=11;
    char x[10];
    liste_loc p=l;
    t=taille2(l);
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
       do
    {
        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9);printf(" ");
        }
      gotoxy(45,9);printf("\tmat_donner=");
    scanf ("%s",&x);
    }while(x<0);
    if(strcmp(p->info3.mat,x)==0)
                   { drawclone2(10,1);
    gotoxy(46,i);printf("%d",l->info3.num);
    gotoxy(56,i);printf("%d",l->info3.Cin);
    gotoxy(66,i);printf("%s",l->info3.mat);
    gotoxy(80,i);printf("%d/%d/%d",l->info3.DL.j,l->info3.DL.m,l->info3.DL.a);
    gotoxy(94,i);printf("%d",l->info3.dureeL);
    gotoxy(100,i);printf("%d",l->info3.mt_p);
                    }
    else{p=p->suiv3;
        ok=0;
    while (p && !ok)
    {
    if(strcmp(p->info3.mat,x)==0)
                ok=1;
            else
        {
        p=p->suiv3;}
    }
    if(ok==0){ gotoxy(45,14);printf("\tnest pas trouver\n");}
    else  {drawclone2(10,1);
    gotoxy(46,i);printf("%d",l->info3.num);
    gotoxy(56,i);printf("%d",l->info3.Cin);
    gotoxy(66,i);printf("%s",l->info3.mat);
    gotoxy(80,i);printf("%d/%d/%d",l->info3.DL.j,l->info3.DL.m,l->info3.DL.a);
    gotoxy(94,i);printf("%d",l->info3.dureeL);
    gotoxy(100,i);printf("%d",l->info3.mt_p);}}
return l;}
}
