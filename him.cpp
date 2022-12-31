#include<bits/stdc++.h> 
#include<windows.h> 
using namespace std; 
int n,gold,c,tu=0,mb,a,lk,xz,yz,zs,st,sn,gt,sz,qh;//物品 
int dierguan=0,disanguan=0,disiguan=0,diwuguan=0,diliuguan=0;
int xuanze1=0;//特殊选择 
int md,xd,uzi;//武器 
int xdlq,mdlq;//武器冷却
int mdzd,uzizd;//武器子弹 
char v; 
string wanjia;
struct wo 
{ 
    int hp; 
    int fy; 
    int hpxhang; 
}wo; 
struct sb 
{ 
    int hp; 
    int fy; 
    int gj; 
}sb; 
void GAMELV1() 
{
    wo.hp=25; 
    wo.fy=0; 
    wo.hpxhang=25; 
    getchar(); 
    cout<<"第一关 战争的开始";
    getchar();
    system("cls");  
    cout<<"时间：公元2045年 地点：S城";
    getchar();
    system("cls"); 
    cout<<"今天你正准备坐车去上班，突然间一个声音传出，"; 
    getchar(); 
    system("cls"); 
    cout<<"？？？：站住！"; 
    getchar(); 
    system("cls"); 
    cout<<"你与车上的人们被押到了一个高楼的门，"; 
    getchar(); 
    system("cls"); 
    cout<<"你一看，这不就是公司门口吗？"; 
    getchar(); 
    system("cls"); 
    cout<<"地点：公司顶楼 时间：17：00"; 
    getchar(); 
    system("cls"); 
    cout<<"你现在明白了，原来国家已经被一个叫帝国的国家所入侵，"; 
    getchar(); 
    system("cls"); 
    cout<<"此时外面冲进来了我国士兵，你一看有救就准备把后面的士兵打倒。"; 
    getchar(); 
    system("cls"); 
    sb.hp=10; 
    sb.fy=5; 
    sb.gj=5; 
    cout<<"帝国士兵 血量：10 防御：5 伤害：5"<<endl; 
    Sleep(3000); 
    while(1) 
    {
    cout<<"你的血量："; 
    cout<<wo.hp<<endl; 
    cout<<"敌人的血量："; 
    cout<<sb.hp<<endl; 
    cout<<"----------------"<<endl; 
    cout<<"1.普通攻击：伤害10，CD：1回合"<<endl; 
    cout<<"----------------"<<endl; 
    cin>>c; 
    if(c!=1) 
    { 
    getchar(); 
    cout<<"无效输入！"<<endl; 
    getchar(); 
    cout<<"帝国士兵造成5点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=5; 
    } 
    else if(c==1) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成5点伤害"; 
    getchar(); 
    sb.hp-=5; 
    cout<<"帝国士兵对你造成5点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=5; 
    }
    if(wo.hp<=0) 
    { 
    system("cls"); 
    cout<<"战败！"; 
    Sleep(4000); 
    system("cls"); 
    break;  
    }
    else if(sb.hp<=0) 
    { 
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得100金币！"<<endl;
    gold+=100; 
    Sleep(4000);
    system("cls"); 
    dierguan=1;
    break;  
    } 
    }       
} 
void GAMELV2() 
{
    wo.hp=15; 
    wo.fy=0; 
    wo.hpxhang=25; 
    getchar(); 
    cout<<"第二关  逃离计划"; 
    getchar();
    system("cls");  
    cout<<"你听见外面的枪声慢慢消失了，";
    getchar();
    system("cls"); 
    cout<<"“看来游击队撤退了”。你心里想，"; 
    getchar(); 
    system("cls"); 
    cout<<"“现在必须逃出这里，不然迟早会被发现”，"; 
    getchar(); 
    system("cls"); 
    cout<<"“这里的帝国士兵装备不怎么样，没几个拿枪，”"; 
    getchar(); 
    system("cls"); 
    cout<<"“我没记错的话，这里是15楼，”"; 
    getchar(); 
    system("cls"); 
    cout<<"“我先找些东西吧。”"; 
    getchar(); 
    system("cls");
    while(lk==0)
    {
    cout<<"1.倒下的帝国士兵"<<endl;  
    cout<<"2.储物间"<<endl;
    cout<<"3.离开"; 
    cin>>c;
    if(c==1)
    {
        getchar(); 
        system("cls"); 
        cout<<"获得了“小刀”" ; 
        xd=1;
        getchar(); 
        system("cls"); 
    } 
    else if(c==2)
    {
        getchar(); 
        system("cls"); 
        cout<<"这里被搜过了，只有2块木板和创可贴"<<endl ; 
        cout<<"获得了“木板*2”"<<endl; 
        mb=2;
        cout<<"获得了创可贴，血量上限+10，血量+20"<<endl;
        wo.hp=35;
        wo.hpxhang=35; 
        getchar(); 
        system("cls");   
    } 
    else if(c==3)break;
    getchar(); 
    system("cls"); 
    } 
    getchar(); 
    cout<<"正当你准备下楼，突然间，一颗子弹飞过，"; 
    getchar(); 
    system("cls");
    cout<<"士兵：“不许动！”"; 
    getchar(); 
    system("cls");
    cout<<"士兵2：“把他毙了！”"; 
    getchar(); 
    system("cls");
    cout<<"正当他们准备在天台灭了你时，子弹飞了过来，"; 
    getchar(); 
    system("cls");
    cout<<"你并没有受伤，反而那些士兵被打倒在地上，一动不动。"; 
    getchar(); 
    system("cls");
    cout<<"正在切换视角中"; 
    Sleep(5000); 
    system("cls");
    cout<<"已换到游击队视角"; 
    getchar(); 
    system("cls");
    cout<<"狙击手：“不好，楼上有人需要帮助！”"; 
    getchar(); 
    system("cls"); 
    cout<<"（提示：*是空地，#是敌人，+是准星，a和d控制准星，j发射）"; 
    getchar(); 
    system("cls");
    int ans=2;
    while(ans>0)
    {
        cout<<"剩余敌人"<<ans<<endl; 
        if(xz==0&&ans==2)cout<<"+***#*#***"<<endl;
        if(xz==1&&ans==2)cout<<"*+**#*#***"<<endl;
        if(xz==2&&ans==2)cout<<"**+*#*#***"<<endl;
        if(xz==3&&ans==2)cout<<"***+#*#***"<<endl;
        if(xz==4&&ans==2)cout<<"****+*#***"<<endl;
        if(xz==5&&ans==2)cout<<"****#+#***"<<endl;
        if(xz==6&&ans==2)cout<<"****#*+***"<<endl;
        if(xz==7&&ans==2)cout<<"****#*#+**"<<endl;
        if(xz==8&&ans==2)cout<<"****#*#*+*"<<endl;
        if(xz==9&&ans==2)cout<<"****#*#**+"<<endl;

        if(xz==0&&ans==1&&zs==2)cout<<"+*****#***"<<endl;
        if(xz==1&&ans==1&&zs==2)cout<<"*+****#***"<<endl;
        if(xz==2&&ans==1&&zs==2)cout<<"**+***#***"<<endl;
        if(xz==3&&ans==1&&zs==2)cout<<"***+**#***"<<endl;
        if(xz==4&&ans==1&&zs==2)cout<<"****+*#***"<<endl;
        if(xz==5&&ans==1&&zs==2)cout<<"*****+#***"<<endl;
        if(xz==6&&ans==1&&zs==2)cout<<"******+***"<<endl;
        if(xz==7&&ans==1&&zs==2)cout<<"******#+**"<<endl;
        if(xz==8&&ans==1&&zs==2)cout<<"******#*+*"<<endl;
        if(xz==9&&ans==1&&zs==2)cout<<"******#**+"<<endl;

        if(xz==0&&ans==1&&zs==1)cout<<"+***#*****"<<endl;
        if(xz==1&&ans==1&&zs==1)cout<<"*+**#*****"<<endl;
        if(xz==2&&ans==1&&zs==1)cout<<"**+*#*****"<<endl;
        if(xz==3&&ans==1&&zs==1)cout<<"***+#*****"<<endl;
        if(xz==4&&ans==1&&zs==1)cout<<"****+*****"<<endl;
        if(xz==5&&ans==1&&zs==1)cout<<"****#+****"<<endl;
        if(xz==6&&ans==1&&zs==1)cout<<"****#*+***"<<endl;
        if(xz==7&&ans==1&&zs==1)cout<<"****#**+**"<<endl;
        if(xz==8&&ans==1&&zs==1)cout<<"****#***+*"<<endl;
        if(xz==9&&ans==1&&zs==1)cout<<"****#****+"<<endl;

        cin>>v;
        if(ans==0)break;
        if(v=='d'&&xz<9)xz++;
        if(v=='a'&&xz>1)xz--;

        if(xz==4&&zs==2&&v=='j'||xz==6&&zs==1&&v=='j'||v=='j'&&xz!=4&&xz!=6) 
        {
            getchar();
            cout<<endl<<"没打着，再来一次吧"; 
            getchar();
        } 
        if(xz==4&&v=='j'&&zs!=2) 
        {
            ans--;
            zs=2; 
        } 
        if(xz==6&&v=='j'&&zs!=1) 
        {
            ans--;
            zs=1; 
        } 
        system("cls");
    } 
    getchar(); 
    cout<<"狙击手：“成功了！”"; 
    getchar(); 
    system("cls");
    cout<<"已换回主角视角"; 
    getchar(); 
    system("cls");
    cout<<"这时,那位受伤的帝国士兵走来，举起了枪，"; 
    getchar(); 
    system("cls");
    cout<<"一个踉跄，枪被他失手扔了下去，"; 
    getchar(); 
    system("cls");
    cout<<"他又拿起刀，向你冲来"; 
    getchar(); 
    system("cls");
    sb.hp=15; 
    sb.fy=5; 
    sb.gj=5; 
    cout<<"帝国士兵 血量：15 防御：0 伤害：10"<<endl; 
    Sleep(3000); 
    while(1) 
    {
    cout<<"你的血量："; 
    cout<<wo.hp<<endl; 
    cout<<"敌人的血量："; 
    cout<<sb.hp<<endl; 
    cout<<"----------------"<<endl; 
    cout<<"1.普通攻击：伤害5，CD：1回合"<<endl; 
    if(xd==1)cout<<"2.小刀：伤害15，CD：2回合"<<endl; 
    cout<<"----------------"<<endl; 
    cin>>c; 
    if(c!=1&&c!=2) 
    { 
    getchar(); 
    cout<<"无效输入！"<<endl; 
    getchar(); 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    } 
    else if(c==1) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成5点伤害"; 
    getchar(); 
    sb.hp-=10; 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    }
    else if(c==2&&xd==1) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成15点伤害"; 
    getchar(); 
    sb.hp-=15; 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    }
    if(wo.hp<=0) 
    { 
    system("cls"); 
    cout<<"战败！"; 
    Sleep(4000); 
    system("cls"); 
    break;  
    }
    else if(sb.hp<=0) 
    { 
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得200金币！"<<endl;
    gold+=200; 
    Sleep(4000);
    system("cls");
    disanguan=1; 
    break;  
    }
    }
}

void GAMELV3() 
{
    mb=2;
    xd=1;
    wo.hp=25; 
    wo.fy=0; 
    wo.hpxhang=35; 
    getchar(); 
    for(int i=1;i<=1;i++)
    {
        cout<<"第三关  连环轰炸"; 
    getchar();
    system("cls");  
    cout<<"“再不走就没机会了。”你心想";
    getchar();
    system("cls"); 
    cout<<"你快步跑下楼，"; 
    getchar(); 
    system("cls"); 
    cout<<"地点：公司10楼 时间：19：00"; 
    getchar(); 
    system("cls"); 
    cout<<"“不好，下面有人！”你轻声走进了10楼。"; 
    getchar(); 
    system("cls"); 
    cout<<"“我先找些东西吧。”"; 
    getchar(); 
    system("cls");
    while(lk==0)
    {
    cout<<"1.办公室"<<endl;  
    cout<<"2.医疗室"<<endl; 
    cout<<"3.离开"<<endl; 
    cin>>c;
    if(c==1)
    {
        getchar(); 
        system("cls"); 
        cout<<"获得了“水泥”"<<endl<<"获得了一些石头"; 
        sn=1;
        st=1;
        getchar(); 
        system("cls"); 
        cout<<"“看来这里成了储藏点”你说。"<<endl; 
        getchar(); 
        system("cls");
    } 
    else if(c==2)
    {
        getchar(); 
        system("cls"); 
        cout<<"获得了“骨头”"<<endl ; 
        gt=1;
        cout<<"获得了说明书：骨头+石头+水泥=石砖"<<endl;
        getchar(); 
        system("cls");
        cout<<"1石砖+2木板=建筑强化剂"; 
        getchar(); 
        system("cls"); 
    } 
    else if(c==3)break;
    getchar(); 
    system("cls"); 
    } 
    getchar(); 
    system("cls"); 
    cout<<"你在走廊发现了一个加工台，"; 
    cout<<"“应该可以按说明书上的指示做东西。”你说"; 
    getchar(); 
    system("cls"); 
    while(1)
    {
    cout<<"1.木板:"<<mb<<" "<<"2.骨头:"<<gt<<" "<<"3.水泥"<<sn<<"4.石砖"<<sz<<" "<<"5.石头"<<st<<" "<<"6.退出"; 
    cout<<endl<<"提示：输入6 6 6退出"; 
    int zzz[3];
    cin>>zzz[1]>>zzz[2]>>zzz[3];
    sort(zzz+1,zzz+3);
    if(zzz[1]==2&&zzz[2]==3&&zzz[3]==5)
    {
        getchar(); 
        if(gt==1&&sn==1&&st==1)
        {
            cout<<"做出了“石砖”";
            sz=1; 
            gt=0;
            sn=0;
            st=0;
        }
        else cout<<"材料不足";
        getchar(); 
        system("cls");
     } 
    else if(zzz[1]==1&&zzz[2]==1&&zzz[3]==4)
    {
        getchar(); 
        if(mb==2&&mb==2&&sz==1)
        {
            cout<<"做出了“建筑强化剂”";
            qh=1; 
            mb=0;
            sz=0;
        }
        else 
        {
            cout<<"材料不足";
        }
        getchar(); 
        system("cls");
     } 
    else if(zzz[1]==6&&zzz[2]==6&&zzz[3]==6)
    {
        break; 
     } 
     else 
     {
        getchar(); 
        cout<<"不要乱来！！！";
        getchar(); 
        system("cls");
     }
    }
    getchar(); 
    system("cls");
    cout<<"你看见有人来了，便躲入了办公室"; 
    getchar(); 
    system("cls");
    cout<<"士兵：听说要把15楼炸了！"; 
    getchar(); 
    system("cls");
    cout<<"士兵2：据说上面有人！"; 
    getchar(); 
    system("cls");
    if(qh==1)
    { 
    cout<<"你听见后立马使用了强化剂，";
    getchar(); 
    system("cls");
    cout<<"强化剂-1";
    getchar(); 
    system("cls");
    } 
    cout<<"忽然间，BOON的一声"; 
    getchar(); 
    system("cls"); 
    if(qh==1)
    { 
    cout<<"有强化剂的保护，你得以幸存。"; 
    getchar(); 
    system("cls");
    qh=0; 
    }
    else 
    {
    cout<<"你被轰炸所影响，死在办公室";
    break; 
    }
    getchar();
    system("cls"); 
    cout<<"你走了出来，开始了下一步的计划";
    getchar();
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得150金币！"<<endl;
    gold+=150; 
    Sleep(4000); 
    system("cls");
    disiguan=1;
    break; 
    }  
}
void GAMELV4() 
{
    wo.hp=35; 
    wo.fy=0; 
    wo.hpxhang=35; 
    getchar(); 
    for(int i=1;i<=1;i++)
    {
    cout<<"第四关  过河拆桥"; 
    getchar();
    system("cls");  
    cout<<"“现在最快的方法就是坐电梯了”你心想";
    getchar();
    system("cls"); 
    cout<<"你却发现这层没有电梯，"; 
    getchar(); 
    system("cls"); 
    cout<<"地点：公司9楼 时间：21：00"; 
    getchar(); 
    system("cls"); 
    cout<<"“不对啊？这里明明有电梯啊？”"; 
    getchar(); 
    system("cls"); 
    cout<<"难道被士兵掩藏起来了吗？"; 
    getchar(); 
    system("cls");
    cout<<"不行，我先去找找"; 
    getchar(); 
    system("cls");
    int shengt=0;
    int mt=0; 
    while(lk==0)
    {
    int z,kq,pd;
    cout<<"1.配电室"<<endl;  
    cout<<"2.大厅"<<endl; 
    cout<<"3.影厅"<<endl; 
    cout<<"4.离开"<<endl; 
    cin>>c;
    if(c==1)
    {
        getchar(); 
        system("cls"); 
        cout<<"你拉下了电闸，电梯停运了，引起了士兵的注意";
        kq=1;  
        getchar(); 
        system("cls");
    } 

    else if(c==2)
    {
        getchar(); 
        system("cls"); 
        if(kq==0)cout<<"里面也有士兵"<<endl;
        else 
        {
            cout<<"获得了生铁，发现了士兵正在修理电梯，你把他打晕了";
            shengt=1; 
        }
        getchar(); 
        system("cls"); 
    } 
    else if(c==3)
    {
        getchar(); 
        system("cls");
        cout<<"获得了木头和骨头"<<endl<<"话说哪来的骨头？"<<endl; 
        mt=1;
        gt=1; 
        getchar(); 
        system("cls"); 
    } 
    else if(c==4)break;
    getchar(); 
    system("cls"); 
    } 
    int ladou=0;
    while(lk==0)
    {
    cout<<"1.配电室"<<endl;  
    cout<<"2.大厅"<<endl;  
    cin>>c;

    if(c==1)
    {
        getchar(); 
        system("cls"); 
        cout<<"你立刻拉动了电闸。电梯回复运行。"; 
        ladou=1;
        getchar(); 
        system("cls");
    } 
    else if(c==2)
    {
        getchar(); 
        system("cls"); 
        if(ladou==1)
        {
        cout<<"你下到了一楼"<<endl;
        getchar(); 
        system("cls");
        break; 
        } 
        else cout<<"或许要打开电梯的电闸。"; 
        getchar(); 
        system("cls"); 
    } 
    getchar(); 
    system("cls"); 
    } 
    cout<<"地点：公司1楼 时间：23：00"; 
    getchar(); 
    system("cls");  
    cout<<"你在走廊发现了一个加工台，"<<endl; 
    cout<<"说明书：生铁+木头+骨头=蒙德拉贡步枪"; 
    getchar(); 
    system("cls"); 
    int md=0;
    while(1)
    {
    cout<<"1.生铁:"<<shengt<<" "<<"2.骨头:"<<gt<<" "<<"3.木头"<<mt<<" "<<"4.退出"; 
    cout<<endl<<"提示：输入4 4 4退出"; 
    int zzz[3];
    cin>>zzz[1]>>zzz[2]>>zzz[3];
    if(zzz[1]==1&&zzz[2]==2&&zzz[3]==3)
    {
        getchar(); 
        if(gt!=0&&mt>0&&shengt>0)
        {
            cout<<"做出了“蒙德拉贡步枪”";
            md=1;
            gt=0;
            mt=0;
            shengt=0;
        }
        else cout<<"材料不足";
        getchar(); 
        system("cls");
     } 
    else if(zzz[1]==4&&zzz[2]==4&&zzz[3]==4)
    {
        break; 
     } 
     else 
     {
        getchar(); 
        cout<<"不要乱来！！！";
        getchar(); 
        system("cls");
     }
    }
    getchar(); 
    system("cls");
    cout<<"“不好有人坐电梯来了！”"; 
    getchar(); 
    system("cls");
    if(md==1)
    {
    cout<<"或许我可以像古书那样，过河拆桥！"; 
    getchar(); 
    system("cls");
    cout<<"你用步枪打了几下电梯，只听BOON的一声，电梯坠毁了。"; 
    getchar(); 
    system("cls");
    } 
    else if(md==0)
    {
    cout<<"士兵追了下来，抓住了你。";
    Sleep(4000); 
    system("cls");
    break; 
    }
    system("cls"); 
    cout<<"你冲出重围，却发现后面和前面全是士兵......";
    getchar();
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得150金币！"<<endl;
    gold+=150; 
    Sleep(4000); 
    system("cls");
    diwuguan=1;
    break; 
    }  
}
void GAMELV5() 
{
    int md=1; 
    int xdlq=0;
    int xd=1;
    int mdlq=0; 
    int mdzd=31;
    for(int i=1;i<=1;i++)
    {
    wo.hp=35; 
    wo.fy=0; 
    wo.hpxhang=5; 
    getchar(); 
    cout<<"第五关 极限逃生"; 
    getchar();
    system("cls");  
    cout<<"“现在不做出选择是不行了！”你说";
    getchar();
    system("cls"); 
    cout<<"1.前"<<endl;  
    cout<<"2.后"<<endl;
    cout<<"3.左"<<endl; 
    cout<<"4.右"<<endl;
    cin>>c;
    if(c==1)
    { 
    cout<<"帝国士兵 血量：40 防御：5 伤害：10"<<endl; 
    Sleep(3000); 
    sb.hp=40; 
    sb.fy=5; 
    sb.gj=10; 
    while(1) 
    {
    cout<<"你的血量："; 
    cout<<wo.hp<<endl; 
    cout<<"敌人的血量："; 
    cout<<sb.hp<<endl; 
    cout<<"----------------"<<endl; 
    cout<<"1.普通攻击：伤害10，CD：1回合"<<endl; 
    if(xd==1)cout<<"2.小刀：伤害15，CD：2回合"<<endl; 
    if(md==1)cout<<"3.孟德拉贡步枪：伤害40，CD：2回合，子弹：6/25"<<endl; 
    cout<<"----------------"<<endl; 
    cin>>c; 
    if(c!=1&&c!=2&&c!=3) 
    { 
    getchar(); 
    cout<<"无效输入！"<<endl; 
    getchar(); 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    } 
    else if(c==1) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成5点伤害"; 
    getchar(); 
    sb.hp-=5; 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    }
    else if(c==2&&xd==1&&xdlq<=0) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成10点伤害"; 
    getchar(); 
    sb.hp-=10; 
    xdlq=2;
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    }
    else if(c==2&&xd==1&&xdlq>0) 
    { 
    getchar(); 
    cout<<"冷却中ing~"; 
    getchar(); 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10;
    }
    else if(c==3&&md==1&&mdlq<=0) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成40点伤害"; 
    getchar(); 
    sb.hp-=40; 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10; 
    }
    else if(c==3&&xd==1&&mdlq>0) 
    { 
    getchar(); 
    cout<<"冷却中ing~"; 
    getchar(); 
    cout<<"帝国士兵对你造成10点伤害"; 
    getchar(); 
    system("cls"); 
    wo.hp-=10;
    }
    if(wo.hp<=0) 
    { 
    system("cls"); 
    cout<<"战败！"; 
    Sleep(4000); 
    system("cls"); 
    break;  
    }
    else if(sb.hp<=0) 
    { 
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得200金币！"<<endl;
    gold+=200; 
    getchar(); 
    system("cls"); 
    break;
    }
    }
}
    else if(c==2)
    {
        getchar(); 
        system("cls"); 
        cout<<"你终被士兵打败，死在乱枪中" ; 
        getchar(); 
        system("cls"); 
        break;
    } 
    else if(c==3)
    {
        getchar(); 
        system("cls"); 
        cout<<"你终被士兵打败，死在乱枪中" ; 
        getchar(); 
        system("cls"); 
        break;
    }
    else if(c==4)
    {
        getchar(); 
        system("cls"); 
        cout<<"你终被士兵打败，死在乱枪中" ; 
        getchar(); 
        system("cls"); 
        break;
    }
    } 
    cout<<"此时，游击队冲了进来（那么多游击队？）"; 
    getchar(); 
    system("cls");
    cout<<"你在和游击队的配合下，成功击退了敌人（剧情那么短？）"; 
    getchar(); 
    system("cls");
    cout<<"（作者：你再看看后面）"; 
    getchar(); 
    system("cls");
    cout<<"而让你们没想到的是，士兵们又（双叒叕）追了上来"; 
    getchar(); 
    system("cls");
    cout<<"（为什么下面和第二关又差不多了？）（不是一样吗？）"; 
    getchar(); 
    system("cls");
    cout<<"（提示：*是空地，#是敌人，+是准星，A和D控制准星，j发射）"; 
    getchar(); 
    system("cls");
    int ans=2;
    while(ans>0)
    {
        cout<<"剩余敌人群"<<ans<<endl; 
        if(xz==0&&ans==2)cout<<"+***##****"<<endl;
        if(xz==1&&ans==2)cout<<"*+**##****"<<endl;
        if(xz==2&&ans==2)cout<<"**+*##****"<<endl;
        if(xz==3&&ans==2)cout<<"***+##****"<<endl;
        if(xz==4&&ans==2)cout<<"****+#****"<<endl;
        if(xz==5&&ans==2)cout<<"****#+****"<<endl;
        if(xz==6&&ans==2)cout<<"****##+***"<<endl;
        if(xz==7&&ans==2)cout<<"****##*+**"<<endl;
        if(xz==8&&ans==2)cout<<"****##**+*"<<endl;
        if(xz==9&&ans==2)cout<<"****##***+"<<endl;

        if(xz==0&&ans==1&&zs==2)cout<<"+****#****"<<endl;
        if(xz==1&&ans==1&&zs==2)cout<<"*+***#****"<<endl;
        if(xz==2&&ans==1&&zs==2)cout<<"**+**#****"<<endl;
        if(xz==3&&ans==1&&zs==2)cout<<"***+*#****"<<endl;
        if(xz==4&&ans==1&&zs==2)cout<<"****+#****"<<endl;
        if(xz==5&&ans==1&&zs==2)cout<<"*****+****"<<endl;
        if(xz==6&&ans==1&&zs==2)cout<<"*****#+***"<<endl;
        if(xz==7&&ans==1&&zs==2)cout<<"*****#*+**"<<endl;
        if(xz==8&&ans==1&&zs==2)cout<<"*****#**+*"<<endl;
        if(xz==9&&ans==1&&zs==2)cout<<"*****#***+"<<endl;

        if(xz==0&&ans==1&&zs==1)cout<<"+***#*****"<<endl;
        if(xz==1&&ans==1&&zs==1)cout<<"*+**#*****"<<endl;
        if(xz==2&&ans==1&&zs==1)cout<<"**+*#*****"<<endl;
        if(xz==3&&ans==1&&zs==1)cout<<"***+#*****"<<endl;
        if(xz==4&&ans==1&&zs==1)cout<<"****+*****"<<endl;
        if(xz==5&&ans==1&&zs==1)cout<<"****#+****"<<endl;
        if(xz==6&&ans==1&&zs==1)cout<<"****#*+***"<<endl;
        if(xz==7&&ans==1&&zs==1)cout<<"****#**+**"<<endl;
        if(xz==8&&ans==1&&zs==1)cout<<"****#***+*"<<endl;
        if(xz==9&&ans==1&&zs==1)cout<<"****#****+"<<endl;

        cin>>v;
        if(ans==0)break;
        if(v=='d'&&xz<9)xz++;
        if(v=='a'&&xz>1)xz--;
        if(xz==4&&zs==2&&v=='j'||xz==5&&zs==1&&v=='j'||v=='j'&&xz!=4&&xz!=5) 
        {
            getchar();
            cout<<endl<<"没打着，再来一次吧"; 
            getchar();
        } 
        if(xz==4&&v=='j'&&zs!=2) 
        {
            ans--;
            zs=2; 
        } 
        if(xz==5&&v=='j'&&zs!=1) 
        {
            ans--;
            zs=1; 
        } 
        system("cls");
    } 
    getchar(); 
    cout<<"刚解决了士兵，又来了手拿RPG（？）的士兵，"; 
    getchar(); 
    system("cls");
    cout<<"（又蹭字数）"; 
    getchar(); 
    system("cls");
    cout<<"突然间，一个上面写着快乐101（为什么这么多和明日之后重复？）的卡车来了"; 
    getchar(); 
    system("cls");
    cout<<"神秘人：快上车！"; 
    getchar(); 
    system("cls");
    cout<<"你马上上了车"; 
    getchar(); 
    system("cls");
    cout<<"（作者：下面绝对不蹭字数！）"; 
    getchar(); 
    system("cls"); 
    cout<<"（提示：*是空地，!是子弹，输入数字控制到哪里(0~9)"; 
    getchar(); 
    system("cls");
    ans=2;
    int xz=0;
    int ff=1; 
    while(ans>0)
    {
        if(xz==0&&ans==2)cout<<"@***!!****"<<endl;
        if(xz==1&&ans==2)cout<<"*@**!!****"<<endl;
        if(xz==2&&ans==2)cout<<"**@*!!****"<<endl;
        if(xz==3&&ans==2)cout<<"***@!!****"<<endl;
        if(xz==4&&ans==2)cout<<"****@!****"<<endl;
        if(xz==5&&ans==2)cout<<"****!@****"<<endl;
        if(xz==6&&ans==2)cout<<"****!!@***"<<endl;
        if(xz==7&&ans==2)cout<<"****!!*@**"<<endl;
        if(xz==8&&ans==2)cout<<"****!!**@*"<<endl;
        if(xz==9&&ans==2)cout<<"****!!***@"<<endl;

        if(xz==0&&ans==1)cout<<"@*!!***!**"<<endl;
        if(xz==1&&ans==1)cout<<"*@!!***!**"<<endl;
        if(xz==2&&ans==1)cout<<"**@!***!**"<<endl;
        if(xz==3&&ans==1)cout<<"**!@***!**"<<endl;
        if(xz==4&&ans==1)cout<<"**!!@**!**"<<endl;
        if(xz==5&&ans==1)cout<<"**!!*@*!**"<<endl;
        if(xz==6&&ans==1)cout<<"**!!**@!**"<<endl;
        if(xz==7&&ans==1)cout<<"**!!***@**"<<endl;
        if(xz==8&&ans==1)cout<<"**!!***!@*"<<endl;
        if(xz==9&&ans==1)cout<<"**!!***!*@"<<endl;
        cin>>xz;
        if(ans==0)break;
        if(xz==4&&ans==2||xz==5&&ans==2) 
        {
            cout<<"被打中！";
            ff=0;
            break;
        }
        else if(xz!=4&&ans==2&&xz!=5&&ans==2)
        {
            break;
        }

    }
    if(ff==0)
    {
        cout<<"战败！";
        Sleep(4000);
         system("cls");
    }
    else 
    {
    cout<<"你们逃出了帝国区域，但是后面还有更多的危险在等着你......"; 
    getchar(); 
    system("cls");
    cout<<"胜利！"; 
    getchar(); 
    system("cls");
    }
    diliuguan=1;
}
void GAMELV6()
{
    for(int i=1;i<=1;i++)
    {
    cout<<"第六关 身世之谜";
    getchar(); 
    system("cls");
    cout<<"“101？”"; 
    getchar(); 
    system("cls");
    cout<<"神秘人：“这里发生什么了？！”"; 
    getchar(); 
    system("cls");
    cout<<"你只见昔日的101沦为灰烬，"; 
    getchar(); 
    system("cls");
    cout<<"面前只有一块倒下的牌子："; 
    getchar(); 
    system("cls");
    cout<<"“致101的居民，”"; 
    getchar(); 
    system("cls");
    cout<<"“因为天灾原因，现请在5天内搬到101新基地"; 
    getchar(); 
    system("cls");
    cout<<"——管理员：约瑟夫.L"; 
    getchar(); 
    system("cls");
    cout<<"“约瑟夫.L?天灾？”你一脸疑问"; 
    getchar(); 
    system("cls");
    cout<<"“所以你已经....离开这里几天了？！"; 
    getchar(); 
    system("cls");
    cout<<"“......对”神秘人回答道"; 
    getchar(); 
    system("cls");
    cout<<"“约瑟夫.L是101最高管理人之一，”"; 
    getchar(); 
    system("cls");
    cout<<"但是.....他最近的行为非常奇怪。”他叹了口气说，"; 
    getchar(); 
    system("cls");
    cout<<"“神出鬼没，几天都没看见他的踪迹”"; 
    getchar();
    system("cls");
    cout<<"“后来，突然出现在会议上，”"; 
    getchar();
    system("cls");
    cout<<"“告诉我们十几天后会有一场大台风席卷这里”"; 
    getchar();
    system("cls");
    cout<<"“但是通过我们来到这里的位置与时间，没有台风对吧”你说到"; 
    getchar();
    system("cls");
    cout<<"“对，没错。而且101长期以来都没有被敌人发现的原因便是严密的审核措施与隐秘的位置”" ; 
    getchar();
    system("cls");
    cout<<"“你的意思是说......约瑟夫.L可能暴露了101的位置给敌人？”"; 
    getchar();
    system("cls");
    cout<<"“没错，并且在这之后可能有更大的阴谋”"; 
    getchar();
    system("cls");
    cout<<"“受害的只有这些无辜的居民，”"; 
    getchar();
    system("cls");
    cout<<"“所以......，加入我的队伍吧，”"; 
    getchar();
    system("cls");
    cout<<"“我叫特斯拉”"; 
    getchar();
    system("cls");
    cout<<"“这把uzi就给你了”特斯拉说"; 
    getchar();
    system("cls");
    cout<<""; 
    getchar();
    system("cls");
    cout<<"##你获得了一把uzi";
    uzi=1; 
    getchar();
    system("cls");
    cout<<"那我们现在的要......"; 
    getchar();
    system("cls");
    cout<<"（注意：该选择会影响后面剧情的发展和结局！）"; 
    getchar();
    system("cls");
    cout<<"1.停驻此处 2.前往西部 3.前往东部 4.前往北部 5.前往南部"; 
    system("cls");
    cout<<"那么就：（输入数字）";
    cin>>xuanze1;
    if(xuanze1==1)
    {
        cout<<"“停驻此处吧”你说";
        getchar();
        system("cls");
        cout<<"“这或许也是个好选择”特斯拉说";
        getchar();
        system("cls");
        cout<<"不......不许动.....";
        getchar();
        system("cls");
        cout<<"枪声响起，幸亏那士兵已经半残，没能打中你等";
        getchar();
        system("cls");
        sb.hp=60; 
        wo.hp=50;
        mdzd=5;
        uzizd=40;
    while(1) 
    {

    cout<<"你的血量："; 
    cout<<wo.hp<<endl; 
    cout<<"敌人的血量："; 
    cout<<sb.hp<<endl; 
    cout<<"----------------"<<endl; 
    cout<<"1.普通攻击：伤害10，CD：1回合"<<endl; 
    cout<<"2.小刀：伤害15，CD：2回合"<<endl; 
    cout<<"3.孟德拉贡步枪：伤害40，CD：2回合，子弹"<<mdzd<<"/25"<<endl; 
    cout<<"4.uzi：伤害30，CD：1回合，子弹："<<uzizd<<"/40"<<endl; 
    cout<<"----------------"<<endl; 
    if(xdlq!=0)xdlq--;
    if(mdlq!=0)mdlq--;
    cin>>c; 
    if(c!=1&&c!=2&&c!=3&&c!=4) 
    { 
    getchar(); 
    cout<<"无效输入！"<<endl; 
    getchar(); 
    cout<<"帝国士兵对你造成20点伤害"; 
    } 
    else if(c==1) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成5点伤害"; 
    getchar(); 
    sb.hp-=5; 
    cout<<"帝国士兵对你造成20点伤害"; 
    }
    else if(c==2) 
    { 
    if(xdlq!=0)
    {
        getchar(); 
    cout<<"冷却中ing~"; 
    getchar(); 
    cout<<"帝国士兵对你造成20点伤害"; 
    } 
    else 
    {
        getchar(); 
    cout<<"你对帝国士兵造成10点伤害"; 
    getchar(); 
    sb.hp-=10;
    xdlq=2;
    cout<<"帝国士兵对你造成20点伤害"; 
    }
    }
    else if(c==3) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成40点伤害"; 
    getchar(); 
    sb.hp-=40; 
    cout<<"帝国士兵对你造成20点伤害"; 
    }
    else if(c==3&&xd==1&&mdlq>0) 
    { 
    getchar(); 
    cout<<"冷却中ing~"; 
    getchar(); 
    cout<<"帝国士兵对你造成20点伤害";
    }
    else if(c==4) 
    { 
    getchar(); 
    cout<<"你对帝国士兵造成30点伤害"; 
    getchar(); 
    sb.hp-=30; 
    cout<<"帝国士兵对你造成20点伤害";
    }
    getchar(); 
    system("cls"); 
    wo.hp-=20; 
    if(wo.hp<=0) 
    { 
    system("cls"); 
    cout<<"战败！"; 
    Sleep(4000); 
    system("cls"); 
    break;  
    }
    else if(sb.hp<=0) 
    { 
    system("cls"); 
    cout<<"胜利！"<<endl; 
    cout<<"获得300金币！"<<endl;
    gold+=300; 
    getchar(); 
    system("cls"); 
    break;
    }
    }
    }
    else if(xuanze1==2)
        {
        cout<<"“去西部吧，或许会有他们的下落”"<<endl;
        getchar();
        system("cls");
        cout<<"“好主意，走吧。”你们坐上了车，踏上了路程" <<endl;
        getchar();
        system("cls");
        cout<<"过关！"<<endl;
        getchar();
        system("cls");
        cout<<"获得300金币！"<<endl;
        gold+=300;
        getchar();
        system("cls");break;
        }
    else if(xuanze1==3)
        {
        cout<<"“去东部吧，或许会有他们的下落”"<<endl;
        getchar();
        system("cls");
        cout<<"“好主意，走吧。”你们坐上了车，踏上了路程" <<endl;
        getchar();
        system("cls");
        cout<<"过关！"<<endl;
        getchar();
        system("cls");
        cout<<"获得300金币！"<<endl;
        gold+=300;
        getchar();
        system("cls");break;
        }
    else if(xuanze1==4)
        {
        cout<<"“去北部吧，或许会有他们的下落”"<<endl;
        getchar();
        system("cls");
        cout<<"“好主意，走吧。”你们坐上了车，踏上了路程" <<endl;
        getchar();
        system("cls");
        cout<<"过关！"<<endl;
        getchar();
        system("cls");
        cout<<"获得300金币！"<<endl;
        gold+=300;
        getchar();
        system("cls");break;
        }
    else if(xuanze1==5)
        {
        cout<<"“去南部吧，或许会有他们的下落”"<<endl;
        getchar();
        system("cls");
        cout<<"“好主意，走吧。”你们坐上了车，踏上了路程" <<endl;
        getchar();
        system("cls");
        cout<<"过关！"<<endl;
        getchar();
        system("cls");
        cout<<"获得300金币！"<<endl;
        gold+=300;
        getchar();
        system("cls");break;
        }

    getchar();
     } 
}

void shop()
{
    cout<<"1.Haggstorm 售价100金币"<<endl;
    cout<<"2.离开";
    cin>>c;
    if(c==1&&gold>=100)
    {
        getchar(); 
        cout<<"购买成功！";
        gold-=100;
        getchar(); 
        system("cls");
        cout<<"链接: https://pan.baidu.com/s/1i5dD3RZWsv8FEnyP99udUw  提取码: y6x3 "; 
        getchar(); 
        system("cls");
    } 
    if(c==1&&gold<100)
    {
        getchar(); 
        cout<<"钱不够！";
        getchar(); 
        system("cls"); 
    } 
    if(c==2)
    {
        system("cls");
    }

    } 

int main() 
{ 

    cout<<"世界大战"<<endl; 
    getchar();
    system("cls"); 
    cout<<"游戏作者：HIM大佬"<<endl; 
    getchar();
    system("cls"); 
    int kaishide;
    while(tu==0) 
    { 
    system("cls");
    cout<<"0.音乐商城"<<endl; 
    cout<<"1.第一章 公司逃脱"<<endl;
    cout<<"2.第二章 内部机密"<<endl;
    cout<<"3.离开"<<endl;
    cin>>kaishide;
    if (kaishide==0)
    {
    shop(); 
    } 
    if(kaishide==1)
    {
    cout<<"1.第一关 战争的开始"<<endl; 
    cout<<"2.第二关 逃离计划"<<endl;
    cout<<"3.第三关 连环轰炸"<<endl; 
    cout<<"4.第四关 过河拆桥"<<endl; 
    cout<<"5.第五关 极限逃生"<<endl;
    cout<<"6.退出"<<endl; 
    cin>>a; 
    if(a==1) 
    { 
    GAMELV1();
    } 
    if(a==2&&dierguan==1) 
    { 
    GAMELV2();
    }
    else if(a==2&&dierguan==0)
    {getchar();
        cout<<"先通第一关！";
        getchar();
    system("cls"); 
    }
    if(a==3&&disanguan==1) 
    { 
    GAMELV3();
    } 
    else if(a==3&&disanguan==0)
    {getchar();
        cout<<"先通第二关！";
        getchar();
    system("cls"); 
    }
    if(a==4&&disiguan==1) 
    { 
    GAMELV4();
    } 
    else if(a==4&&disiguan==0)
    {getchar();
        cout<<"先通第三关！";
        getchar();
    system("cls"); 
    }
    if(a==5&&diwuguan==1)
    {
    GAMELV5();
    }
    else if(a==5&&diwuguan==0)
    {getchar();
        cout<<"先通第四关！";
        getchar();
    system("cls"); 
    }
    if(a==6)
    {
        system("cls"); 
        continue;
     } 
    }
    if(kaishide==2)
    {
    cout<<"1.第六关 身世之谜"<<endl; 
    cout<<"2.退出"<<endl;
    cin>>a;
    if(a==1)
    {
    GAMELV6();
    }
    else if(a==1&&diliuguan==0)
    {getchar();
        cout<<"先通第五关！";
        getchar();
    system("cls"); 
    }
    if(a==2)
    {
        system("cls"); 
        continue;
    } 
    } 
    if (kaishide==3)
    {
    tu=1;
    system("cls"); 
    } 
    } 
    system("cls");
    getchar();
    cout<<"感谢游玩！"; 
    getchar(); 
    system("cls");
    cout<<"游戏灵感来源《明日之后》《我的世界》"; 
    getchar(); 
    system("cls"); 
    cout<<"程序制作人：HIM大佬"; 
    getchar(); 
    system("cls"); 
    cout<<"剧情制作人：HIM大佬"; 
    getchar(); 
    system("cls"); 
    cout<<"感谢实体303大佬指出的部分BUG!!!"; 
    getchar(); 
    system("cls"); 
    cout<<"感谢各位对本游戏的支持!!!"; 
    getchar(); 
    system("cls"); 
    cout<<"再见！"; 
    return 0; 
}