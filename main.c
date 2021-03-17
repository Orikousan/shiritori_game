//
//  main.c
//  saisyuukadai.c
//
//  Created by k18070kk on 2018/07/19.
//  Copyright © 2018年 AIT. All rights reserved.
//

/* このプログラムは英文字でしりとりをするゲームです。ユーザーが英単語を入力するとその単語の最後の文字から始まる英単語をコンピュータが返してきます。ユーザーはコンピュータが返してきた英単語の最後の文字から始まる英単語を書かなくてはなりません。
 コンピュータはそれぞれ同じ文字を3つ用意してあります。　同じ文字を4回コンピュータに与えるとユーザーの勝ちになります。ちゃんとしりとりになっているかチェックするプログラムを作るのがとても大変でした。*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i, end=0, count=0, Asum=0, Bsum=0, Csum=0, Dsum=0, Esum=0, Fsum=0, Gsum=0, Hsum=0, Isum=0, Jsum=0, Ksum=0, Lsum=0, Msum=0, Nsum=0, Osum=0, Psum=0, Qsum=0, Rsum=0, Ssum=0, Tsum=0, Usum=0, Vsum=0, Wsum=0, Xsum=0, Ysum=0, Zsum=0;            // ?sumはそれぞれの文字が何回コンピュータに与えられたかをカウントする
    char array[16], last='1';      // lastを初期化する
    
    printf("英単語を入力せよ(15文字以内):");     // 初回のみここで入力する
    scanf("%s", array);      // 最大15文字の英単語を入力できる
    
    for(i=0;array[i]!='\0';i++){
        count++;         // ここで入力された文字数をカウントする
    }
    
    while(Asum<=3 && Bsum<=3 && Csum<=3 && Dsum<=3 && Esum<=3 && Fsum<=3 && Gsum<=3 && Hsum<=3 && Isum<=3 && Jsum<=3 && Ksum<=3 && Lsum<=3 && Msum<=3 && Nsum<=3 && Osum<=3 && Psum<=3 && Qsum<=3 && Rsum<=3 && Ssum<=3 && Tsum<=3 && Usum<=3 && Vsum<=3 && Wsum<=3 && Xsum<=3 && Ysum<=3 && Zsum<=3){          // それぞれ3個ずつしか用意してないので4回以上カウントしたらを抜けるようにした
        
        switch(array[count-1]){       // 入力した英単語の文字で場合分け
            case 'a':      // これはユーザーが入力した英単語の最後の文字がaのとき
                switch(Asum){      // それぞれ何回目にaが与えられたかで場合分けする
                    case 0:     // aが初めて与えられたとき
                        printf("apple\n");
                        last='e';     // このlastは単語の最後の文字が次にユーザーが入力する文字列の最初の文字と同じであるか判定するために用いる
                        break;
                    case 1:     // aが与えられるのが2回目のとき
                        printf("after\n");
                        last='r';
                        break;
                    case 2:     // aが与えられるのが3回目のとき
                        printf("ambition\n");
                        last='n';
                        break;
                    default:    // aが与えられるのが4回目のとき
                        printf("You win.\n");       // コンピュータはもうaから始まる英単語を出せないのでユーザーの勝ち
                        end++;
                        break;
                }
                Asum++;
                break;
            case 'b':
                switch(Bsum){
                    case 0:
                        printf("banana\n");
                        last='a';
                        break;
                    case 1:
                        printf("basketball\n");
                        last='l';
                        break;
                    case 2:
                        printf("balloon\n");
                        last='n';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Bsum++;
                break;
            case 'c':
                switch(Csum){
                    case 0:
                        printf("candy\n");
                        last='y';
                        break;
                    case 1:
                        printf("concrete\n");
                        last='e';
                        break;
                    case 2:
                        printf("computer\n");
                        last='r';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Csum++;
                break;
            case 'd':
                switch(Dsum){
                    case 0:
                        printf("doughnut\n");
                        last='t';
                        break;
                    case 1:
                        printf("docter\n");
                        last='r';
                        break;
                    case 2:
                        printf("dream\n");
                        last='m';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Dsum++;
                break;
            case 'e':
                switch(Esum){
                    case 0:
                        printf("egg\n");
                        last='g';
                        break;
                    case 1:
                        printf("end\n");
                        last='d';
                        break;
                    case 2:
                        printf("extreme\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Esum++;
                break;
            case 'f':
                switch(Fsum){
                    case 0:
                        printf("fish\n");
                        last='h';
                        break;
                    case 1:
                        printf("friend\n");
                        last='d';
                        break;
                    case 2:
                        printf("family\n");
                        last='y';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Fsum++;
                break;
            case 'g':
                switch(Gsum){
                    case 0:
                        printf("guitar\n");
                        last='r';
                        break;
                    case 1:
                        printf("galaxy\n");
                        last='y';
                        break;
                    case 2:
                        printf("glove\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Gsum++;
                break;
            case 'h':
                switch(Hsum){
                    case 0:
                        printf("hamburger\n");
                        last='r';
                        break;
                    case 1:
                        printf("habit\n");
                        last='t';
                        break;
                    case 2:
                        printf("hiding\n");
                        last='g';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Hsum++;
                break;
            case 'i':
                switch(Isum){
                    case 0:
                        printf("illusion\n");
                        last='n';
                        break;
                    case 1:
                        printf("improve\n");
                        last='e';
                        break;
                    case 2:
                        printf("index\n");
                        last='x';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Isum++;
                break;
            case 'j':
                switch(Jsum){
                    case 0:
                        printf("jail\n");
                        last='l';
                        break;
                    case 1:
                        printf("judgment\n");
                        last='t';
                        break;
                    case 2:
                        printf("jaguar\n");
                        last='r';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Jsum++;
                break;
            case 'k':
                switch(Ksum){
                    case 0:
                        printf("knight\n");
                        last='t';
                        break;
                    case 1:
                        printf("keen\n");
                        last='n';
                        break;
                    case 2:
                        printf("knowledge\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Ksum++;
                break;
            case 'l':
                switch(Lsum){
                    case 0:
                        printf("logic\n");
                        last='c';
                        break;
                    case 1:
                        printf("laboratory\n");
                        last='y';
                        break;
                    case 2:
                        printf("landmark\n");
                        last='k';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Lsum++;
                break;
            case 'm':
                switch(Msum){
                    case 0:
                        printf("method\n");
                        last='d';
                        break;
                    case 1:
                        printf("music\n");
                        last='c';
                        break;
                    case 2:
                        printf("manager\n");
                        last='r';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Msum++;
                break;
            case 'n':
                switch(Nsum){
                    case 0:
                        printf("neck\n");
                        last='k';
                        break;
                    case 1:
                        printf("nose\n");
                        last='e';
                        break;
                    case 2:
                        printf("neutral\n");
                        last='l';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Nsum++;
                break;
            case 'o':
                switch(Osum){
                    case 0:
                        printf("octopus\n");
                        last='s';
                        break;
                    case 1:
                        printf("ocean\n");
                        last='n';
                        break;
                    case 2:
                        printf("orange\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Osum++;
                break;
            case 'p':
                switch(Psum){
                    case 0:
                        printf("peach\n");
                        last='h';
                        break;
                    case 1:
                        printf("prefer\n");
                        last='r';
                        break;
                    case 2:
                        printf("pollution\n");
                        last='n';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Psum++;
                break;
            case 'q':
                switch(Qsum){
                    case 0:
                        printf("quiz\n");
                        last='z';
                        break;
                    case 1:
                        printf("quantity\n");
                        last='y';
                        break;
                    case 2:
                        printf("quest\n");
                        last='t';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Qsum++;
                break;
            case 'r':
                switch(Rsum){
                    case 0:
                        printf("rob\n");
                        last='b';
                        break;
                    case 1:
                        printf("road\n");
                        last='d';
                        break;
                    case 2:
                        printf("recall\n");
                        last='l';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Rsum++;
                break;
            case 's':
                switch(Ssum){
                    case 0:
                        printf("symptom\n");
                        last='m';
                        break;
                    case 1:
                        printf("shallow\n");
                        last='w';
                        break;
                    case 2:
                        printf("system\n");
                        last='m';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Ssum++;
                break;
            case 't':
                switch(Tsum){
                    case 0:
                        printf("thief\n");
                        last='f';
                        break;
                    case 1:
                        printf("truth\n");
                        last='h';
                        break;
                    case 2:
                        printf("tackle\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Tsum++;
                break;
            case 'u':
                switch(Usum){
                    case 0:
                        printf("undergo\n");
                        last='o';
                        break;
                    case 1:
                        printf("university\n");
                        last='y';
                        break;
                    case 2:
                        printf("useful\n");
                        last='l';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Usum++;
                break;
            case 'v':
                switch(Vsum){
                    case 0:
                        printf("varied\n");
                        last='d';
                        break;
                    case 1:
                        printf("victim\n");
                        last='m';
                        break;
                    case 2:
                        printf("vocabulary\n");
                        last='y';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Vsum++;
                break;
            case 'w':
                switch(Wsum){
                    case 0:
                        printf("weak\n");
                        last='k';
                        break;
                    case 1:
                        printf("wind\n");
                        last='d';
                        break;
                    case 2:
                        printf("wilderness\n");
                        last='s';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Wsum++;
                break;
            case 'x':
                switch(Xsum){
                    case 0:
                        printf("xenotransplant\n");
                        last='t';
                        break;
                    case 1:
                        printf("xenology\n");
                        last='y';
                        break;
                    case 2:
                        printf("xerophyte\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Xsum++;
                break;
            case 'y':
                switch(Ysum){
                    case 0:
                        printf("young\n");
                        last='g';
                        break;
                    case 1:
                        printf("yellow\n");
                        last='w';
                        break;
                    case 2:
                        printf("yield\n");
                        last='d';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Ysum++;
                break;
            case 'z':
                switch(Zsum){
                    case 0:
                        printf("zoo\n");
                        last='o';
                        break;
                    case 1:
                        printf("zeal\n");
                        last='l';
                        break;
                    case 2:
                        printf("zone\n");
                        last='e';
                        break;
                    default:
                        printf("You win.\n");
                        end++;
                        break;
                }
                Zsum++;
                break;
            default:
                printf("Error\n");      // 最後の文字が英文字以外のとき
                Asum=10;      // これはErrorを出した後、強制終了させるため。これが無ければErrorがたくさん出続ける。
                end++;
        }   // switchの}
        if(end==0){//end==1にするとゲームが終了したはずなのにまたまた続いてしまだ続いてしまう
            count = 0;//ここでcountの値を0に初期化しておかないと前の数値も含めてカウントしてしまう
            printf("英単語を入力せよ(15文字以内)"); //2回以降はここで入力する
            scanf("%s", array);
            for(i=0;array[i]!='\0';i++){//ここも初回のときと仕組みは同じである
                count++;
            }
            if(array[0]!=last){//ここでコンピュータが出した単語の最後の文字が次にユーザーが入力する文字列の最初の文字と同じであるか判定する
                printf("GAMEOVER\n");//違う場合はゲームオーバ＝になる
                break;
            }
        }    // ifの}
    }   // whileの}
    return 0; 
}
