// global variable need 
// - x,y เส้นชัย
// - ระยะเดิน
const int w =50;

// red ==1 /  yellow ==2 / blue ==3 / green ==4

//prototype
void move_red(int &,int &,int);
void move_yellow(int &,int &,int);

void move_blue(int &,int &,int);
void move_green(int &,int &,int);



//function
void move_red (int &x,int &y,int d){
    for (int i=0; i<d; i++){
        if(x == 675 && y>=600 && y<=800) y-=w;
        if(x == 675 && y==550) {
            x=625;
            y=500;
        }
        if(y == 500 && x>=425 && x<=625) x-=w;
        if(x == 375 && y>=450 && y<=500) y-=w;
        if(y == 400 && x>=375 && x<=515) x+=w;
        if(x == 625 && y==400) {
            x=675;
            y=350;
        }
        if(x == 675 && y>=150 && y<=350) y-=w;
        if(y == 100 && x>=675 && x<=725) x+=w;
        if(x == 775 && y>=100 && y<=300) y+=w;
        if(x == 775 && y==350) {
            x=825;
            y=400;
        }
        if(y == 400 && x>=825 && x<=1025) x+=w;
        if(x == 1075 && y>=400 && y<=450) y+=w;
        if(y == 500 && y>=875 && y<=1075) x-=w;
        if(x == 825 && y==500) {
            x=775;
            y=550;
        }
        if(x == 775 && y>=550 && y<=750) y+=w;
        if(y == 800 && x == 775) x-=w;
        if(x == 725 && y >= 550 && y<= 800) {
            if(d != (y - 500)/w) break;
                else {
                    x = 725;
                    y = 500;
                }
        };
    }
}

void move_yellow (int &x,int &y,int d){
    for (int i=0; i<d; i++){
        if(x == 775 && y>=100 && y<=300) y+=w;
        if(x == 775 && y==350) {
            x=825;
            y=400;
        }
        if(y == 400 && x>=825 && y<=1025) x+=w;
        if(x == 1075 && y>=400 && y<=450) y+=w;
        if(y == 500 && y>=875 && y<=1075) x-=w;
        if(x == 825 && y==500) {
            x=775;
            y=550;
        }
        if(x == 775 && y>=550 && y<=750) y+=w;
        if(y == 800 && x>=725 && y<=775) x-=w;
        if(x == 675 && y>=600 && y<=800) y-=w;
        if(x == 675 && y==550) {
            x=625;
            y=500;
        }
        if(y == 500 && x>=425 && x<=625) x-=w;
        if(x == 375 && y>=450 && y<=500) y-=w;
        if(y == 400 && x>=375 && x<=515) x+=w;
        if(x == 625 && y==400) {
            x=675;
            y=350;
        }
        if(x == 675 && y>=150 && y<=350) y-=w;
        if(y == 100 && x==675 ) x+=w;
        if(x == 725 && y >= 100 && y<= 350)
        {
            if(d != (400 - y)/w) break;
                else {
                    x = 725;
                    y = 400;
                }
        } 

    }
}

void move_blue(int &x,int &y,int dice)
{
    for(int i = 0; i < dice ; i++)
    {
        if(x <= 1025 && x > 825 && y == 500) 
        {
            x = x - w;
        }
        if(x == 825 && y == 500) 
        {
            x = 775;
            y = 550;
        }
        if( y >= 550 && y < 800 && x== 775 )
        {
            y = y + w;
        }
        if(x <= 775 && x > 675 && y == 800) 
        {
            x = x - w;
        }
        if( y <= 800 && y > 550 && x== 675 )
        {
            y = y - w;
        }
        if(x == 675 && y == 550) 
        {
            x = 625;
            y = 500;
        }
        if(x <= 625 && x > 375 && y == 500) 
        {
            x = x - w;
        }
        if( y <= 500 && y > 400 && x== 375 )
        {
            y = y - w;
        }
        if(x >= 375 && x < 625 && y == 400) 
        {
            x = x + w;
        }
        if(x == 625 && y == 400) 
        {
            x = 675;
            y = 350;
        }
        if( y <= 350 && y > 100 && x== 675 )
        {
            y = y - w;
        }
        if( x >= 675 && x < 775 && y == 100)
        {
            x = x+ w;
        }
        if( y >= 100 && y < 350 && x== 775 )
        {
            y = y + w;
        }
        if(x == 775 && y == 350) 
        {
            x = 825;
            y = 400;
        }
        if(x >= 825 && x < 1075 && y == 400) 
        {
            x = x + w;
        }
        if( y >= 400 && y < 450 && x== 1075 )
        {
            y = y + w;
        }
        if(x <= 1075 && x > 775 && y == 450) 
        {
            if(dice != (x - 775)/w) break;
                else {
                    x = 775;
                    y = 450;
                }
        }
    }
}

void move_green(int &x,int &y,int dice){
    for(int i = 0; i < dice ; i++)
    {
        //formatทางตรงแกน x ทิศขวา --> if(x >= ต้น && x < ปลาย && y == คงที่)
        if(x >= 425 && x < 625 && y == 400) 
        {
            x = x + w;
        }
        //จุดกระโดด 1
        if(x == 625 && y == 400) 
        {
            x = 675;
            y = 350;
        }
        //formatทางตรงแกน y ทิศขึ้น --> if(y <= ต้น && y > ปลาย && x == คงที่)
        if( y <= 350 && y > 100 && x== 675 )
        {
            y = y - w;
        }
        if( x >= 675 && x < 775 && y == 100)
        {
            x = x+ w;
        }
        //formatทางตรงแกน y ทิศลง --> if(y >= ต้น && y < ปลาย && x == คงที่)
        if( y >= 100 && y < 350 && x== 775 )
        {
            y = y + w;
        }
        //จุดกระโดด 2
        if(x == 775 && y == 350) 
        {
            x = 825;
            y = 400;
        }
        if(x >= 825 && x < 1075 && y == 400) 
        {
            x = x + w;
        }
        if( y >= 400 && y < 500 && x== 1075 )
        {
            y = y + w;
        }
         //formatทางตรงแกน x ทิศซ้าย --> if(x <= ต้น && x > ปลาย && y == คงที่)
        if(x <= 1075 && x > 825 && y == 500) 
        {
            x = x - w;
        }
        //จุดกระโดด 3
        if(x == 825 && y == 500) 
        {
            x = 775;
            y = 550;
        }
        if( y >= 550 && y < 800 && x== 775 )
        {
            y = y + w;
        }
        if(x <= 775 && x > 675 && y == 800) 
        {
            x = x - w;
        }
        if( y <= 800 && y > 550 && x== 675 )
        {
            y = y - w;
        }
        //จุดกระโดด 4
        if(x == 675 && y == 550) 
        {
            x = 625;
            y = 500;
        }
        if(x <= 625 && x > 375 && y == 500) 
        {
            x = x - w;
        }
        if( y <= 500 && y > 450 && x== 375 )
        {
            y = y - w;
        }
            //เลนที่กำลังจะถึงเส้นชัย
            if(x >= 375 && x < 675 && y == 450) 
            {
                if(dice != (675 - x)/w) break;
                else {
                    x = 675;
                    y = 450;
                }
                
            }
        
    }
}

