#ifndef FUNC2_H_INCLUDED
#define FUNC2_H_INCLUDED



#endif // FUNC2_H_INCLUDED
client saisie_client(liste_clt l)
{
    draw_cadre(8);
    gotoxy(48,8);printf("Cin");
    draw_cadre2(11);
    gotoxy(48,11);printf("Nom");
     gotoxy(78,11);printf("Prenom");
     draw_cadre3(14);
     gotoxy(48,14);printf("Age");
     gotoxy(63,14);printf("Adresse");
     draw_cadre(17);
     gotoxy(48,17);printf("Telephone");
    SetColor(9);
    int u,i,p;
    client v;
        do
  {

            for(p = 45; p < 103; p++)
        {
            gotoxy(p,9);printf(" ");
        }

    gotoxy(48,9);scanf ("%d",&v.Cin);
    i=verif_cin(v.Cin);
    u=verif_cin2(v.Cin,l);
    }
    while((i==0)||(u==0));
         do
    {
            for(p = 49; p < 72; p++)
        {
            gotoxy(p,12);printf(" ");
        }

    gotoxy(51,12);scanf ("%s",v.nom);
     i=verif_1(v.nom);
    }
    while(i==0);
              do
    {
            for(p = 74; p < 103; p++)
        {
            gotoxy(p,12);printf(" ");
        }

    gotoxy(76,12);scanf ("%s",v.prenom);
    i=verif_1(v.prenom);
    }
    while(i==0);
        do
    {
         for(p = 45; p < 59; p++)
        {
            gotoxy(p,15);printf(" ");
        }

    gotoxy(48,15);scanf ("%d",&v.age);
    }
    while(v.age<0);
    do
    {
            for(p = 61; p < 103; p++)
        {
            gotoxy(p,15);printf(" ");
        }

    gotoxy(63,15);scanf ("%s",v.adr);
    i=verif_1(v.adr);
    }
    while(i==0);
   do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,18);printf(" ");
        }

    gotoxy(48,18);scanf ("%s",v.tel);
    i=verif_3(v.tel);
    }
    while(i==0);
    SetColor(17);
    return(v);
}
client saisie_client1(liste_clt l,long int x)
{
    SetColor(9);
    int u,i,p;
    client v;

     gotoxy(48,9);printf("cin=");
    gotoxy(52,9);printf("%d",x);
  v.Cin=x;
         do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,10);printf(" ");
        }
     gotoxy(45,10);printf("\tnom=");
    scanf ("%s",v.nom);
     i=verif_1(v.nom);
    }
    while(i==0);
              do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,11);printf(" ");
        }
     gotoxy(45,11);printf("\tprenom=");
    scanf ("%s",v.prenom);
    i=verif_1(v.prenom);
    }
    while(i==0);
        do
    {
         for(p = 45; p < 103; p++)
        {
            gotoxy(p,12);printf(" ");
        }
     gotoxy(45,12);printf("\tage=");
    scanf ("%d",&v.age);
    }
    while(v.age<0);
    do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,13);printf(" ");
        }
     gotoxy(45,13);printf("\tadr=");
    scanf ("%s",v.adr);
    i=verif_1(v.adr);
    }
    while(i==0);
   do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,18);printf(" ");
        }
     gotoxy(45,18);printf("\ttele=");
    scanf ("%s",v.tel);
    i=verif_3(v.tel);
    }
    while(i==0);
    SetColor(17);
    return(v);
}
liste_clt creation1()
{
    SetColor(9);
    int q,rep=0;
    liste_clt p,clt,l=NULL;
    clt=(struct cellule2*)malloc(sizeof(struct cellule2));
    clt->info2=saisie_client(l);
    clt->suiv2=NULL;
    l=clt;
    p=l;
    do{
                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,23);printf(" ");
        }
    gotoxy(45,23); printf("Voulez vous ajouter une autre client 0/1\t");
    scanf("%d",&rep);}while((rep!=0)&&(rep!=1));

    while(rep==1)
    {
        clearWindow();
        print_heading("creation client");
    clt=(struct cellule2*)malloc(sizeof(struct cellule2));
    clt->info2=saisie_client(l);
    clt->suiv2=NULL;
    p->suiv2=clt;
    p=clt;
   do{
                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,23);printf(" ");
        }
    gotoxy(45,23); printf("Voulez vous ajouter une autre client 0/1\t");
    scanf("%d",&rep);}while((rep!=0)&&(rep!=1));
    }
    return(l);
}
void affiche2(liste_clt l)
{
    clearWindow();
    int t,k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    SetColor(9);
    int i=9;
    t=taille1(l);
    nx=t/6;
    n3=t%6;
    if(n3==0){n2=nx;}
    else{n2=nx+1;}

    if (l==NULL)
       {gotoxy(45,13); printf("______vide______");}
    else
    {
        draw_m_clone1(t,8);
print_heading1("LA liste client");
print_heading5("   cin   ",44);
print_heading5("   nom   ",55);
print_heading5(" prenom ",66);
print_heading5("age ",75);
print_heading5("adress",81);
print_heading5("  telephone  ",89);
                while(l)

            {
    gotoxy(46,i);printf("%d",l->info2.Cin);
    gotoxy(56,i);printf("%s",l->info2.nom);
    gotoxy(66,i);printf("%s",l->info2.prenom);
    gotoxy(76,i);printf("%d",l->info2.age);
    gotoxy(82,i);printf("%s",l->info2.adr);
    gotoxy(91,i);printf("%s",l->info2.tel);

               l=l->suiv2;
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
            draw_m_clone1(t,8);
print_heading1("LA liste client");
print_heading5("   cin   ",44);
print_heading5("   nom   ",55);
print_heading5(" prenom ",66);
print_heading5("age ",75);
print_heading5("adress",81);
print_heading5("  telephone  ",89);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            draw_m_clone1(n3,8);
print_heading1("LA liste client");
print_heading5("   cin   ",44);
print_heading5("   nom   ",55);
print_heading5(" prenom ",66);
print_heading5("age ",75);
print_heading5("adress",81);
print_heading5("  telephone  ",89);


                }else if(n1==0){goto en;}
                }}
            }
    }en:
    SetColor(17);
}
liste_clt insere_tete_client(liste_clt l)
{
    liste_clt p;
    p=(struct cellule2*)malloc(sizeof(struct cellule2));
    p->info2=saisie_client(l);
    p->suiv2=l;
    l=p;
    return l;
}
liste_clt insere_queue_client(liste_clt l)
{
    liste_clt p,q;
    p=(struct cellule2*)malloc(sizeof(struct cellule2));
    p->info2=saisie_client(l);
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
    }
    return(l);
}


void insere_pos_client(liste_clt l,int pos)
{
    int i=1;
    liste_clt p=l,q;
    while(i<pos-1)
    {
        i++;
        p=p->suiv2;
    }

    q=(struct cellule2*)malloc(sizeof(struct cellule2));
    q->info2=saisie_client(l);
    q->suiv2=p->suiv2;
    p->suiv2=q;

}
liste_clt remplir1(liste_clt l)
{
    int pos,t,p;
    t=taille1(l);
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
            l=insere_tete_client(l);
        else
            if(pos==t+1)
                l=insere_queue_client(l);
            else
                insere_pos_client(l,pos);
    return l;

}
int taille1(liste_clt l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv2;
    }
    return cp;
}

liste_clt supprimer_tete_client(liste_clt l)
{
    liste_clt p=l;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
    {
        l=p->suiv2;
        free(p);
        gotoxy(45,24);printf("list supprime!\n");
    }
    return l;
}
liste_clt supprimer_queue_client(liste_clt l)
{
    liste_clt p1,p2;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
        if (l->suiv2==NULL)
    {
        p2=l;
        free(p2);
        l=NULL;
       gotoxy(45,23); printf("list supprime!\n");
    }
    else
    {
        p1=l;
        while ((p1->suiv2)->suiv2)
            p1=p1->suiv2;
        p2=p1->suiv2;
        p1->suiv2=NULL;
        free(p2);
    }
    return l;
}
void supprimer_pos_client(liste_clt l,int pos)
{
    int i=1;
    liste_clt p1=l,p2;
    while(i<pos-1)
    {
        i++;
        p1=p1->suiv2;
    }
    p2=p1->suiv2;
    p1->suiv2=p2->suiv2;
    free(p2);
}
liste_clt suppression1 (liste_clt l)
{
    int pos,t,p;

        t=taille1(l);
        if (l==NULL)
        {
            gotoxy(45,13);printf("LISTE VIDE\n");
            return(l);
        }
        do
        {
                                    for(p = 45; p < 103; p++)
        {
            gotoxy(p,9+taille_s1(l));printf(" ");
        }
            gotoxy(45,9+taille_s1(l));printf("Donner la position entre 1 et %d :",t);
            scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t));
        if (pos==1)
            l=supprimer_tete_client(l);
        else
            if (pos==t)
                l=supprimer_queue_client(l);
        else
            supprimer_pos_client(l,pos);

    return l;
}

liste_clt supprimer_donne_client(liste_clt l)
{
    int q,ok,j,t,i=2;
    long int x;
    liste_clt p=l;
    t=taille1(l);
       do
    {
                                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s1(l));printf(" ");
        }
     gotoxy(45,9+taille_s1(l));printf("\tCin_donner=");
    scanf ("%d",&x);
    j=verif_cin(x);
    }while(j==0);
    if(l==NULL)
    { gotoxy(45,11+taille_s1(l));printf("\tliste est vide");return(l);}
    else
    if(p->info2.Cin==x)
                   { l=supprimer_tete_client(l);}
    else{
        ok=0;
    while (p->suiv2 && !ok)
    {
    if(p->suiv2->info2.Cin==x)
                ok=1;
            else
        {i++;
        p=p->suiv2;}
    }
    if(ok==0){ gotoxy(45,4);printf("\tnest pas trouver\n");}
    else if(i==t){l=supprimer_queue_client(l);}
    else supprimer_pos_client(l,i);}
return l;
}

liste_clt modif_adresse(liste_clt l)
{
    int u,j,ok,q;
    long int ch1;
    char ch2[20];
    liste_clt p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s1(l));printf(" ");
        }
      gotoxy(45,9+taille_s1(l));printf("\tCin_donner=");
    scanf ("%d",&ch1);
    j=verif_cin(ch1);
    u=verif_cin2(ch1,l);
    }while((j==0)||(u==1));
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s1(l));printf(" ");
        }
     gotoxy(45,10+taille_s1(l)); printf( "\tadresse_donner=");
    scanf ("%s",&ch2);
    j=verif_1(ch2);
    }while(j==0);
     if(p==NULL){return p;}
    else
    if(p->info2.Cin==ch1)
                   {strcpy(p->info2.adr,ch2);gotoxy(45,11+taille_s1(l));printf("");}
    else{
        ok=0;
    while (p->suiv2 && !ok)
    {
    if(p->suiv2->info2.Cin==ch1)
                {ok=1;
                p=p->suiv2;}
            else
        {
        p=p->suiv2;}
    }
    if(ok==0){ gotoxy(45,15);printf("\tnest pas trouver\n");}
    else {strcpy(p->info2.adr,ch2);
     gotoxy(45,11+taille_s1(l));printf("");}}
return l;
}
liste_clt modif_tele(liste_clt l)
{
    int u,j,ok,q;
    long int ch1;
    char ch2[20];
    liste_clt p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s1(l));printf(" ");
        }
      gotoxy(45,9+taille_s1(l));printf("\tCin_donner=");
    scanf ("%d",&ch1);
    j=verif_cin(ch1);
    u=verif_cin2(ch1,l);
    }while((j==0)||(u==1));
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s1(l));printf(" ");
        }
     gotoxy(45,10+taille_s1(l)); printf( "\ttele_donner=");
    scanf ("%s",&ch2);
    j=verif_3(ch2);
    }while(j==0);
     if(p==NULL){return p;}
    else
    if(p->info2.Cin==ch1)
                   {strcpy(p->info2.tel,ch2);gotoxy(45,11+taille_s1(l));printf("");}
    else{
        ok=0;
    while (p->suiv2 && !ok)
    {
    if(p->suiv2->info2.Cin==ch1)
                {ok=1;
                p=p->suiv2;}
            else
        {
        p=p->suiv2;}
    }
    if(ok==0){ gotoxy(45,15);printf("\tnest pas trouver\n");}
    else {strcpy(p->info2.tel,ch2);
     gotoxy(45,11+taille_s1(l));printf("");}}
return l;
}
liste_clt rechreche_client(liste_clt l)
{
    SetColor(9);
    int q,ok,j,t,i=11;
    long int  x;
    liste_clt p=l;
    t=taille1(l);
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
    j=verif_cin(x);
    }while((j==0));
    if(p->info2.Cin==x)
{   drawclone1(10,1);
    gotoxy(46,i);printf("%d",l->info2.Cin);
    gotoxy(56,i);printf("%s",l->info2.nom);
    gotoxy(66,i);printf("%s",l->info2.prenom);
    gotoxy(76,i);printf("%d",l->info2.age);
    gotoxy(82,i);printf("%s",l->info2.adr);
    gotoxy(91,i);printf("%s",l->info2.tel);}

    else{p=p->suiv2;
        ok=0;
    while (p && !ok)
    {
    if(p->info2.Cin==x)
                ok=1;
            else
        {
        p=p->suiv2;}
    }
    if(ok==0){ gotoxy(45,14);printf("nest pas existe ");return l;}
    else  {
    drawclone1((10),1);
    gotoxy(46,i);printf("%d",p->info2.Cin);
    gotoxy(56,i);printf("%s",p->info2.nom);
    gotoxy(66,i);printf("%s",p->info2.prenom);
    gotoxy(76,i);printf("%d",p->info2.age);
    gotoxy(82,i);printf("%s",p->info2.adr);
    gotoxy(91,i);printf("%s",p->info2.tel);}}
return l;}
}
