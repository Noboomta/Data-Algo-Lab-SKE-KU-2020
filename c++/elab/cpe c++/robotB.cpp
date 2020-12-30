//
// Created by NoBoomTa on 12/30/2020.
//

#include <iostream>
using namespace std;

int main() {
    int h_white,h_black,b_white,b_black,x,y;
    int same_white=0,same_black=0,dif=0;
    int res=0;
    cin >> h_white >> h_black >> b_white >> b_black;
    cin >> x >> y;

    same_black = min(h_black, b_black);
    h_black -= same_black;
    b_black -= same_black;

    same_white = min(h_white, b_white);
    h_white -= same_white;
    b_white -= same_white;

    int diff1 = min(h_white, b_black);
    int diff2 = min(h_black, b_white);
    h_white -= diff1; b_black -= diff1;
    h_black -= diff2; b_white -= diff2;

    while(same_white + same_black > x){
        // มีตัวขาว หรือ!! หัวขาวเหลือ แล้วก็มีตัวดำเหลือ(ไม่ใช้ได้)
        if((h_white > 0 || b_white > 0) && same_black > 0){
            //แยกหัวกับตัวดำ ออกไปใส่เพิ่มให้ขาว
            same_black--;
            b_black++;
            h_black++;
        }
            // มีตัวหรือหัวดำเหลือ แล้วยังมีคู่ของสีขาวเหลือ แยกขาวมาใส่ดำ
        else if((h_black > 0 || b_black > 0) &&  same_white > 0){
            same_white--;
            b_white++;
            h_white++;
        }
            // มีทั้งคู่ขาวกับคู่ดำเหลือ ระเบิดมันทั้งคู่เลยย มันจะไม่เข้าข้างบนเพราะมันไม่มีตัวเหลือก่อนหน้า
        else if(same_black > 0 && same_white > 0){
            same_black--;
            h_black++;
            b_black++;
            same_white--;
            h_white++;
            b_white++;
        }
            //  หมดแล้ว
        else{
            break;
        }
        // จับคู่สีต่าง
        int c = min(h_white, b_black);
        h_white -= c;
        b_black -= c;
        int d = min(h_black, b_white);
        h_black -= d;
        b_white -= d;
        diff1 += c;
        diff2 += d;
        //printf("same_white : %d same_black : %d dif : %d\n",same_white,same_black,dif);
    }

    printf("%d", min(x, same_black+same_white) + min(y, diff1+diff2));

    //printf("same_white : %d same_black : %d dif : %d\n",same_white,same_black,dif);
    // printf("%d\n",same_white+same_black+dif);
}