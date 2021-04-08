{\rtf1\ansi\ansicpg949\cocoartf2578
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string.h>\
using namespace std;\
\
int N, M;\
int max_card = 0;\
int card[101];\
\
int MAX(int x, int y)\{\
  return x > y ? x : y;\
\}\
\
int main() \{\
  \
  scanf("%d %d", &N, &M);\
  \
  for(int i = 0; i < N; i++)\{\
    scanf("%d", &card[i]);\
  \}\
  int temp;\
  int temp3;\
  for(int i = 0; i < N;i++)\{\
    for(int j = 0; j < N; j++)\{\
      temp = card[i] + card[j];\
      if(temp > M || j == i)\{\
        continue;\
      \}\
      for(int k =0; k < N; k++)\{\\\
        temp3 = temp + card[k];\
        if(k == i || k ==j ||temp3 > M)\{\
          continue;\
        \}\
        max_card = MAX(max_card, temp3);\
      \}\
    \}\
  \}\
  printf("%d", max_card);\
\
  return 0;\
\}}