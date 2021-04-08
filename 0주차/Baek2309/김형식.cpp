{\rtf1\ansi\ansicpg949\cocoartf2578
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <algorithm>\
\
using namespace std;\
\
int main(void)\{\
  int arr[9];\
  int total = 0;\
  int fake_1, fake_2;\
\
  for(int i = 0; i < 9;i++)\{\
    scanf("%d", arr+i);\
    total += *(arr +i);\
  \}\
\
  sort(arr, arr+9);\
  int temp;\
  for(int i = 0; i < 9; i++)\{\
    for(int j = 0; j < 9; j++)\{\
      if(j != i)\{\
        temp = arr[i] + arr[j];\
        if(total - temp == 100)\{\
          fake_1 = i;\
          fake_2 = j;\
          break;\
        \}\
      \}\
    \}\
  \}}