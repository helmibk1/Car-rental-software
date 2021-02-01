#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED



#endif // DRAW_H_INCLUDED
void drawRectangle(){
    hidecursor();
    int i, j;
    SetColor(1);
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 112; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(112,0);
    printf("%c",187);
    for(i = 1; i < 25; i++){
        gotoxy(112, i);
        if(i == 6){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(112, 25);
    printf("%c",188);
    for(i = 111; i > 0; i--){
        gotoxy(i,25);
        if(i == 40){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > 0; i--){
        gotoxy(0,i);
        if(i == 6){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }

    for(i = 1; i < 112; i++){
        gotoxy(i,6);
        if(i == 40){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }

    for(i = 7; i < 25; i++){
        gotoxy(40,i);
        printf("%c",186);
    }
shwocursor();
}
void drawclone(int j,int k)
{
    hidecursor();
    int i;
    SetColor(1);
if(k==1){
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 107; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==106){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 107; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",193);
        }else if(i==106){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }
        if(k==2)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 107; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==106){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 107; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",197);
        }else if(i==106){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if(k==3)
        {
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 107; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==106){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 107; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",197);
        }else if(i==106){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if (k==4)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 107; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==106){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 107; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 85)||(i == 101)){
            printf("%c",193);
        }else if(i==106){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }


    shwocursor();

    return;
}
void draw_m_clone(int k,int l)
{
    int i,j=l+2;
    hidecursor();
    if(k>6){k=6;}
    if(k==0){return;}
    if (k==1)
    {
        drawclone(l,1);
    }
    else if (k==2)
    {
        drawclone(l,3);
        drawclone(l+2,4);
    }
    else
    {
        drawclone(l,3);
        for (i=2;i<k;i++)
        {
            drawclone(j,2);
            j=j+2;
        }
        drawclone(j,4);
    }
    shwocursor();
    return;
}
void drawclone1(int j,int k)
{
    hidecursor();
    int i;
    SetColor(1);
if(k==1){
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",193);
        }else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }
        if(k==2)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",197);
        }else if(i==103){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if(k==3)
        {
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",197);
        }else if(i==103){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if (k==4)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 80)||(i == 88)){
            printf("%c",193);
        }else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }


    shwocursor();

    return;
}
void draw_m_clone1(int k,int l)
{
    int i,j=l+2;
    hidecursor();
    if(k>6){k=6;}
    if(k==0){return;}
    if (k==1)
    {
        drawclone1(l,1);
    }
    else if (k==2)
    {
        drawclone1(l,3);
        drawclone1(l+2,4);
    }
    else
    {
        drawclone1(l,3);
        for (i=2;i<k;i++)
        {
            drawclone1(j,2);
            j=j+2;
        }
        drawclone1(j,4);
    }
    shwocursor();
    return;
}
void drawclone2(int j,int k)
{
    hidecursor();
    int i;
    SetColor(1);
if(k==1){
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",193);
        }else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }
        if(k==2)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",197);
        }else if(i==103){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if(k==3)
        {
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",195);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",197);
        }else if(i==103){printf("%c",180);}
        else{

            printf("%c",196);
        }
    }


        }
        if (k==4)
        {
  gotoxy(44,j);printf("%c",195);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",197);gotoxy(i,j+1);printf("%c",179);
        }else if(i==103){printf("%c",180);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
        if((i == 55)||(i == 65)||(i == 75)||(i == 92)||(i == 97)){
            printf("%c",193);
        }else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
    }


    shwocursor();

    return;
}
void draw_m_clone2(int k,int l)
{
    int i,j=l+2;
    hidecursor();
    if(k>6){k=6;}
    if(k==0){return;}
    if (k==1)
    {
        drawclone2(l,1);
    }
    else if (k==2)
    {
        drawclone2(l,3);
        drawclone2(l+2,4);
    }
    else
    {
        drawclone2(l,3);
        for (i=2;i<k;i++)
        {
            drawclone2(j,2);
            j=j+2;
        }
        drawclone2(j,4);
    }
    shwocursor();
    return;
}
void draw_cadre(int j)
{
    SetColor(13);
    int i;
hidecursor();
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
 if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
shwocursor();
}
void draw_cadre1(int j)
{
    SetColor(13);
    int i;
hidecursor();
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 60)||(i == 75)||(i == 90)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);}

 else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
            if((i == 60)||(i == 75)||(i == 90)){
            printf("%c",193);gotoxy(i,j+1);printf("%c",179);}

else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
shwocursor();
}
void draw_cadre2(int j)
{
    SetColor(13);
    int i;
hidecursor();
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 73)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);}

 else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
            if((i == 73)){
            printf("%c",193);gotoxy(i,j+1);printf("%c",179);}

else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
shwocursor();
}
void draw_cadre3(int j)
{
    SetColor(13);
    int i;
hidecursor();
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 60)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);}

 else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
            if((i == 60)){
            printf("%c",193);gotoxy(i,j+1);printf("%c",179);}

else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
shwocursor();
}
void draw_cadre4(int j)
{
    SetColor(13);
    int i;
hidecursor();
  gotoxy(44,j);printf("%c",218);
  gotoxy(44,j+1);printf("%c",179);
  gotoxy(44,j+2);printf("%c",192);
  for(i = 45; i < 104; i++){
        gotoxy(i,j);
        if((i == 65)||(i == 85)){
            printf("%c",194);gotoxy(i,j+1);printf("%c",179);}

 else if(i==103){printf("%c",191);gotoxy(i,j+1);printf("%c",179);}
        else{

            printf("%c",196);
        }
    }
    for(i = 45; i < 104; i++){
        gotoxy(i,j+2);
            if((i == 65)||(i == 85)){
            printf("%c",193);gotoxy(i,j+1);printf("%c",179);}

else if(i==103){printf("%c",217);}
        else{

            printf("%c",196);
        }
    }
shwocursor();
}
