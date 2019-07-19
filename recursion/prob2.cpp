

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text = "OF EKAHMGUKBHIA, B LWZLMOMWMOGF EOHITK OL B DTMIGR GY TFEKAHMOFU ZA CIOEI WFOML GY HSBOFMTVM BKT KTHSBETR COMI EOHITKMTVM, BEEGKROFU MG B YOVTR LALMTD; MIT WFOML DBA ZT LOFUST STMMTKL (MIT DGLM EGDDGF), HBOKL GY STMMTKL, MKOHSTML GY STMMTKL, DOVMWKTL GY MIT BZGXT, BFR LG YGKMI. MIT KTETOXTK RTEOHITKL MIT MTVM ZA HTKYGKDOFU MIT OFXTKLT LWZLMOMWMOGF.";
    string atoz = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int len, lenAZ, cnt, k = 0;
    double arr[126];

    //cin >> text;

    lenAZ = atoz.length();
    len = text.length();

    for (int i = 0; i < lenAZ; i++) {

        cnt = 0;

        for (int j = 0; j < len; j++) {

            if(atoz[i] == text[j]) {
                cnt++;
            }
        }

        arr[i] = (double) cnt/len * 100;
        cout << atoz[i] << " " << arr[i] << endl;
    }

    /*
    while(scanf("%d", &k) != EOF) {

    }

    */
}


