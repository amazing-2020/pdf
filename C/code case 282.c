#include <stdio.h>

#define MAX_HEIGHT 16

int main() {
    int n, nRow;
    int nIn, nOut;
    int nCount1, nCount2, nCount3;
//输入内外菱形高度
    for (;;) {
        printf("输入内外菱形高度(最大%d行):外菱形高度,内菱形高度:\n", MAX_HEIGHT-1);
        scanf("%d,%d", &nOut, &nIn);
        if (nIn < nOut && nOut < MAX_HEIGHT && nIn >= 0)
            break;
        /*if (scanf("%d,%d", &nOut, &nIn)!=2 ||(nIn<nOut && nOut<MAX_HEIGHT && nIn>=0)) {
                continue;
        } */
        /*
        if (scanf("%d,%d", &nOut, &nIn)==2 && (nIn<nOut && nOut<MAX_HEIGHT && nIn>=0)) {
            break;
        } else {
            continue;
        }*/
        
        
         

        printf("The input is invalid, please re-enter \n\n");
    }

    //循环输出菱形
    nIn = nOut - nIn;
    for (nRow= -nOut+1; nRow<nOut; nRow++) {
        //输出前导空格
        nCount1 = nRow>=0 ? nRow:-nRow;//取绝对值
        for (n=0; n<nCount1; n++) {
            printf(" ");
        }
        //输出左边星号
        nCount1 = nOut - nCount1;
        nCount2 = nCount1 - nIn; 
        if (nCount2<0) {
            nCount2 = 0;
        }
        nCount3 = nCount1 - nCount2; //内外之差为实际需要输出
        for (n=0; n<nCount3; n++) {
            printf("*");
        }

        //输出中间空格
        nCount3 = 2*nCount2-1;//由三角形拓展为菱形
        for (n=0; n<nCount3; n++) {
            printf(" ");
        }

        //输出右边星号
        nCount1--;//外三角部分，后续迭代使用
        nCount2 = nCount1 - nIn;//内三角部分，后续迭代使用
        if (nCount2<0) {
            nCount2 = 0;
        }
        nCount3 = nCount1 - nCount2;//内外之差为实际输出
        for (n=0; n<nCount3; n++) {
            printf("*");
        }

        //输出换行
        printf("\n");
    }
}