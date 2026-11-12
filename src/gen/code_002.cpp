#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8002B860
void f_8002B860(Ctx* __restrict c) {
  trace_call(0x8002B860u);
  return; // 8002B860
}

// fn_8002B864
void f_8002B864(Ctx* __restrict c) {
  trace_call(0x8002B864u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B864
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 8002B868
  if (!crb(c,2)) { goto L_8002B880; } // 8002B86C
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B870
  c->r[0]=c->r[0]|0x10000000u; // 8002B874
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002B878
  goto L_8002B88C; // 8002B87C
L_8002B880:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B880
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8002B884
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002B888
L_8002B88C:;
  c->r[0]=0u+0x00000002u; // 8002B88C
  W32(c->r[3]+0x00002390u,c->r[0]); // 8002B890
  c->r[4]=0u+0x00000001u; // 8002B894
  c->r[5]=0u+0x00000075u; // 8002B898
  c->r[6]=0u+0x00000001u; // 8002B89C
  c->r[7]=0u+0x00000001u; // 8002B8A0
  c->r[3]=c->r[3]+0x00002414u; // 8002B8A4
  f_80034CAC(c); return; // 8002B8A8
}

// fn_8002B8AC
void f_8002B8AC(Ctx* __restrict c) {
  trace_call(0x8002B8ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002B8AC
  c->r[0]=c->lr; // 8002B8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002B8B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002B8B8
  c->r[31]=c->r[3]+0x00000190u; // 8002B8BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002B8C0
  c->r[30]=c->r[3]|c->r[3]; // 8002B8C4
  c->r[0]=R32(c->r[3]+0x00000198u); // 8002B8C8
  cmps(c,0,(int32_t)c->r[0],0); // 8002B8CC
  if (crb(c,2)) { goto L_8002B904; } // 8002B8D0
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002B8D4
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002B8D8
  fcmp(c,0,c->f[1],c->f[0]); // 8002B8DC
  c->r[0]=c->cr; // 8002B8E0
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8002B8E4
  if (!crb(c,2)) { goto L_8002B904; } // 8002B8E8
  c->r[3]=c->r[31]|c->r[31]; // 8002B8EC
  c->lr=0x8002B8F4u; f_8002E2BC(c); // 8002B8F0
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002B8F4
  fcmp(c,0,c->f[1],c->f[0]); // 8002B8F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002B8FC
  if (!crb(c,2)) { goto L_8002B910; } // 8002B900
L_8002B904:;
  c->r[3]=c->r[30]|c->r[30]; // 8002B904
  c->r[4]=0u+0x00000000u; // 8002B908
  c->lr=0x8002B910u; f_800256B0(c); // 8002B90C
L_8002B910:;
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002B910
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002B914
  fcmp(c,0,c->f[1],c->f[0]); // 8002B918
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002B91C
  c->r[4]=c->cr; // 8002B920
  c->r[3]=c->r[30]|c->r[30]; // 8002B924
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 8002B928
  c->lr=0x8002B930u; f_80025264(c); // 8002B92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002B930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002B934
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002B938
  c->lr=c->r[0]; // 8002B93C
  c->r[1]=c->r[1]+0x00000010u; // 8002B940
  return; // 8002B944
}

// fn_8002B948
void f_8002B948(Ctx* __restrict c) {
  trace_call(0x8002B948u);
  return; // 8002B948
}

// fn_8002B94C
void f_8002B94C(Ctx* __restrict c) {
  trace_call(0x8002B94Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002B94C
  c->r[0]=c->lr; // 8002B950
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002B954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002B958
  c->r[31]=c->r[3]|c->r[3]; // 8002B95C
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B960
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 8002B964
  if (!crb(c,2)) { goto L_8002B97C; } // 8002B968
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B96C
  c->r[0]=c->r[0]|0x10000000u; // 8002B970
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002B974
  goto L_8002B988; // 8002B978
L_8002B97C:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002B97C
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8002B980
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002B984
L_8002B988:;
  c->r[4]=0u+0x00000002u; // 8002B988
  c->r[0]=0u+0x00000000u; // 8002B98C
  W32(c->r[3]+0x00002390u,c->r[4]); // 8002B990
  c->r[4]=0u+0x00000014u; // 8002B994
  c->r[5]=0u+0x00000000u; // 8002B998
  c->r[6]=0u+0x00000001u; // 8002B99C
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002B9A0
  c->r[3]=c->r[3]+0x00002414u; // 8002B9A4
  c->lr=0x8002B9ACu; f_80034C24(c); // 8002B9A8
  c->r[12]=R32(c->r[31]+0x00000014u); // 8002B9AC
  c->r[3]=c->r[31]|c->r[31]; // 8002B9B0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8002B9B4
  c->ctr=c->r[12]; // 8002B9B8
  if (true) { c->lr=0x8002B9C0u; dispatch(c,c->ctr); } // 8002B9BC
  c->r[3]=c->r[31]|c->r[31]; // 8002B9C0
  c->r[4]=0u+0x00000001u; // 8002B9C4
  c->lr=0x8002B9CCu; f_80025264(c); // 8002B9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002B9CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002B9D0
  c->lr=c->r[0]; // 8002B9D4
  c->r[1]=c->r[1]+0x00000010u; // 8002B9D8
  return; // 8002B9DC
}

// fn_8002B9E0
void f_8002B9E0(Ctx* __restrict c) {
  trace_call(0x8002B9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002B9E0
  c->r[0]=c->lr; // 8002B9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002B9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002B9EC
  c->r[31]=c->r[3]|c->r[3]; // 8002B9F0
  c->r[3]=c->r[3]+0x00002414u; // 8002B9F4
  c->lr=0x8002B9FCu; f_80034EC8(c); // 8002B9F8
  cmps(c,0,(int32_t)c->r[3],0); // 8002B9FC
  if (crb(c,2)) { goto L_8002BA10; } // 8002BA00
  c->r[3]=c->r[31]|c->r[31]; // 8002BA04
  c->r[4]=0u+0x00000003u; // 8002BA08
  c->lr=0x8002BA10u; f_800256B0(c); // 8002BA0C
L_8002BA10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BA10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BA14
  c->lr=c->r[0]; // 8002BA18
  c->r[1]=c->r[1]+0x00000010u; // 8002BA1C
  return; // 8002BA20
}

// fn_8002BA24
void f_8002BA24(Ctx* __restrict c) {
  trace_call(0x8002BA24u);
  c->r[4]=0u+0x00000000u; // 8002BA24
  f_80025264(c); return; // 8002BA28
}

// fn_8002BA2C
void f_8002BA2C(Ctx* __restrict c) {
  trace_call(0x8002BA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BA2C
  c->r[0]=c->lr; // 8002BA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BA38
  c->r[31]=c->r[3]|c->r[3]; // 8002BA3C
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BA40
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 8002BA44
  if (!crb(c,2)) { goto L_8002BA5C; } // 8002BA48
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BA4C
  c->r[0]=c->r[0]|0x10000000u; // 8002BA50
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BA54
  goto L_8002BA68; // 8002BA58
L_8002BA5C:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BA5C
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8002BA60
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BA64
L_8002BA68:;
  c->r[0]=0u+0x00000002u; // 8002BA68
  W32(c->r[3]+0x00002390u,c->r[0]); // 8002BA6C
  c->r[4]=0u+0x00000015u; // 8002BA70
  c->r[5]=0u+0x00000001u; // 8002BA74
  c->r[6]=0u+0x00000001u; // 8002BA78
  c->r[3]=c->r[3]+0x00002414u; // 8002BA7C
  c->lr=0x8002BA84u; f_80034C24(c); // 8002BA80
  c->r[3]=c->r[31]|c->r[31]; // 8002BA84
  c->r[4]=0u+0x00000001u; // 8002BA88
  c->lr=0x8002BA90u; f_80025264(c); // 8002BA8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BA90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BA94
  c->lr=c->r[0]; // 8002BA98
  c->r[1]=c->r[1]+0x00000010u; // 8002BA9C
  return; // 8002BAA0
}

// fn_8002BAA4
void f_8002BAA4(Ctx* __restrict c) {
  trace_call(0x8002BAA4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002BAA4
  c->r[12]=c->r[1]|c->r[1]; // 8002BAA8
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 8002BAAC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BAB0
  c->r[0]=c->lr; // 8002BAB4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8002BAB8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8002BABC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8002BAC0
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 8002BAC4
  c->r[29]=c->r[3]|c->r[3]; // 8002BAC8
  c->r[0]=R32(c->r[3]+0x00000198u); // 8002BACC
  cmps(c,0,(int32_t)c->r[0],0); // 8002BAD0
  if (crb(c,2)) { goto L_8002BAFC; } // 8002BAD4
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 8002BAD8
  c->r[30]=0u+0x00000000u; // 8002BADC
  cmps(c,0,(int32_t)c->r[0],0); // 8002BAE0
  if (crb(c,2)) { goto L_8002BB00; } // 8002BAE4
  c->r[0]=R32(c->r[3]+0x000001ACu); // 8002BAE8
  cmps(c,0,(int32_t)c->r[0],0); // 8002BAEC
  if (!crb(c,2)) { goto L_8002BB00; } // 8002BAF0
  c->r[30]=0u+0x00000001u; // 8002BAF4
  goto L_8002BB00; // 8002BAF8
L_8002BAFC:;
  c->r[30]=0u+0x00000001u; // 8002BAFC
L_8002BB00:;
  c->r[0]=R32(c->r[3]+0x00000150u); // 8002BB00
  cmps(c,0,(int32_t)c->r[0],6); // 8002BB04
  if (crb(c,2)) { goto L_8002BB14; } // 8002BB08
  cmps(c,0,(int32_t)c->r[0],0); // 8002BB0C
  if (!crb(c,2)) { goto L_8002BB1C; } // 8002BB10
L_8002BB14:;
  c->r[30]=0u+0x00000000u; // 8002BB14
  goto L_8002BBB4; // 8002BB18
L_8002BB1C:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BB1C
  c->r[0]=rotl(c->r[0],15)&0x00000001u; cr0(c,c->r[0]); // 8002BB20
  if (crb(c,2)) { goto L_8002BBB4; } // 8002BB24
  c->r[3]=R32(c->r[3]+0x000025F8u); // 8002BB28
  c->r[4]=0u+0x00000002u; // 8002BB2C
  c->r[0]=0u+0x00000001u; // 8002BB30
  W32(c->r[1]+0x00000024u,c->r[4]); // 8002BB34
  c->r[31]=R32(c->r[3]+0x00000030u); // 8002BB38
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8002BB3C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8002BB40
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8002BB44
  c->r[5]=c->r[31]+0x0000001Cu; // 8002BB48
  W32(c->r[1]+0x00000020u,c->r[5]); // 8002BB4C
  c->r[0]=c->r[3]&c->r[0]; // 8002BB50
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002BB54
  W32(c->r[1]+0x00000018u,c->r[5]); // 8002BB58
  cmpu(c,0,c->r[0],0x00000001u); // 8002BB5C
  if (!crb(c,2)) { goto L_8002BB6C; } // 8002BB60
  c->r[3]=c->r[31]|c->r[31]; // 8002BB64
  c->lr=0x8002BB6Cu; f_8034007C(c); // 8002BB68
L_8002BB6C:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BB6C
  c->r[3]=0u+0x803C0000u; // 8002BB70
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8002BB74
  c->r[3]=c->r[3]+0x00002300u; // 8002BB78
  c->r[4]=c->r[1]+0x00000030u; // 8002BB7C
  c->r[5]=c->r[1]+0x00000010u; // 8002BB80
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BB84
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8002BB88
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BB8C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8002BB90
  c->lr=0x8002BB98u; f_8003E0DC(c); // 8002BB94
  cmps(c,0,(int32_t)c->r[3],0); // 8002BB98
  if (crb(c,2)) { goto L_8002BBB4; } // 8002BB9C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BBA0
  {uint32_t ea=c->r[2]+0xFFFF836Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BBA4
  fcmp(c,0,c->f[1],c->f[0]); // 8002BBA8
  if (!crb(c,1)) { goto L_8002BBB4; } // 8002BBAC
  c->r[30]=0u+0x00000001u; // 8002BBB0
L_8002BBB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8002BBB4
  if (crb(c,2)) { goto L_8002BBC8; } // 8002BBB8
  c->r[3]=c->r[29]|c->r[29]; // 8002BBBC
  c->r[4]=0u+0x00000004u; // 8002BBC0
  c->lr=0x8002BBC8u; f_800256B0(c); // 8002BBC4
L_8002BBC8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002BBC8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8002BBCC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8002BBD0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8002BBD4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8002BBD8
  c->lr=c->r[0]; // 8002BBDC
  c->r[1]=c->r[10]|c->r[10]; // 8002BBE0
  return; // 8002BBE4
}

// fn_8002BBE8
void f_8002BBE8(Ctx* __restrict c) {
  trace_call(0x8002BBE8u);
  c->r[4]=0u+0x00000000u; // 8002BBE8
  f_80025264(c); return; // 8002BBEC
}

// fn_8002BBF0
void f_8002BBF0(Ctx* __restrict c) {
  trace_call(0x8002BBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BBF0
  c->r[0]=c->lr; // 8002BBF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BBF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BBFC
  c->r[31]=c->r[3]|c->r[3]; // 8002BC00
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BC04
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 8002BC08
  if (!crb(c,2)) { goto L_8002BC20; } // 8002BC0C
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BC10
  c->r[0]=c->r[0]|0x10000000u; // 8002BC14
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BC18
  goto L_8002BC2C; // 8002BC1C
L_8002BC20:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BC20
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8002BC24
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BC28
L_8002BC2C:;
  c->r[0]=R32(c->r[3]+0x00000150u); // 8002BC2C
  c->r[4]=0u+0x00000004u; // 8002BC30
  W32(c->r[3]+0x00002390u,c->r[4]); // 8002BC34
  c->r[4]=0u+0x00000016u; // 8002BC38
  c->r[0]=cntlz(c->r[0]); // 8002BC3C
  c->r[6]=0u+0x00000001u; // 8002BC40
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8002BC44
  c->r[3]=c->r[3]+0x00002414u; // 8002BC48
  c->lr=0x8002BC50u; f_80034C24(c); // 8002BC4C
  c->r[0]=0u+0x00000001u; // 8002BC50
  W32(c->r[31]+0x00002380u,c->r[0]); // 8002BC54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BC5C
  c->lr=c->r[0]; // 8002BC60
  c->r[1]=c->r[1]+0x00000010u; // 8002BC64
  return; // 8002BC68
}

// fn_8002BC6C
void f_8002BC6C(Ctx* __restrict c) {
  trace_call(0x8002BC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BC6C
  c->r[0]=c->lr; // 8002BC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BC74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BC78
  c->r[31]=c->r[3]|c->r[3]; // 8002BC7C
  c->r[3]=c->r[3]+0x00002414u; // 8002BC80
  c->lr=0x8002BC88u; f_80034EC8(c); // 8002BC84
  cmps(c,0,(int32_t)c->r[3],0); // 8002BC88
  if (crb(c,2)) { goto L_8002BCAC; } // 8002BC8C
  c->r[3]=c->r[31]|c->r[31]; // 8002BC90
  c->lr=0x8002BC98u; f_80024134(c); // 8002BC94
  cmps(c,0,(int32_t)c->r[3],0); // 8002BC98
  if (!crb(c,2)) { goto L_8002BCAC; } // 8002BC9C
  c->r[3]=c->r[31]|c->r[31]; // 8002BCA0
  c->r[4]=0u+0xFFFFFFFEu; // 8002BCA4
  c->lr=0x8002BCACu; f_800256B0(c); // 8002BCA8
L_8002BCAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BCAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BCB0
  c->lr=c->r[0]; // 8002BCB4
  c->r[1]=c->r[1]+0x00000010u; // 8002BCB8
  return; // 8002BCBC
}

// fn_8002BCC0
void f_8002BCC0(Ctx* __restrict c) {
  trace_call(0x8002BCC0u);
  return; // 8002BCC0
}

// fn_8002BCC4
void f_8002BCC4(Ctx* __restrict c) {
  trace_call(0x8002BCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BCC4
  c->r[0]=c->lr; // 8002BCC8
  c->r[4]=0u+0x00000004u; // 8002BCCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BCD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BCD4
  c->r[31]=c->r[3]|c->r[3]; // 8002BCD8
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BCDC
  c->r[0]=c->r[0]|0x10000000u; // 8002BCE0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BCE4
  c->r[3]=R32(c->r[3]+0x00002410u); // 8002BCE8
  c->lr=0x8002BCF0u; f_80037BD0(c); // 8002BCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8002BCF0
  if (crb(c,2)) { goto L_8002BD30; } // 8002BCF4
  c->r[3]=c->r[13]+0xFFFF9470u; // 8002BCF8
  c->lr=0x8002BD00u; f_8028AA78(c); // 8002BCFC
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BD00
  fcmp(c,0,c->f[1],c->f[0]); // 8002BD04
  if (!crb(c,0)) { goto L_8002BD30; } // 8002BD08
  c->r[3]=c->r[31]+0x00002414u; // 8002BD0C
  c->r[4]=0u+0x00000004u; // 8002BD10
  c->r[5]=0u+0x00000044u; // 8002BD14
  c->r[6]=0u+0x00000001u; // 8002BD18
  c->r[7]=0u+0x00000001u; // 8002BD1C
  c->r[8]=0u+0x00000000u; // 8002BD20
  c->r[9]=0u+0x00000001u; // 8002BD24
  c->lr=0x8002BD2Cu; f_80035028(c); // 8002BD28
  goto L_8002BD50; // 8002BD2C
L_8002BD30:;
  c->r[3]=c->r[31]+0x00002414u; // 8002BD30
  c->r[4]=0u+0x00000003u; // 8002BD34
  c->r[5]=0u+0x00000043u; // 8002BD38
  c->r[6]=0u+0x00000001u; // 8002BD3C
  c->r[7]=0u+0x00000001u; // 8002BD40
  c->r[8]=0u+0x00000000u; // 8002BD44
  c->r[9]=0u+0x00000001u; // 8002BD48
  c->lr=0x8002BD50u; f_80035028(c); // 8002BD4C
L_8002BD50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BD50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BD54
  c->lr=c->r[0]; // 8002BD58
  c->r[1]=c->r[1]+0x00000010u; // 8002BD5C
  return; // 8002BD60
}

// fn_8002BD64
void f_8002BD64(Ctx* __restrict c) {
  trace_call(0x8002BD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BD64
  c->r[0]=c->lr; // 8002BD68
  c->r[4]=0u+0x00000004u; // 8002BD6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BD70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BD74
  c->r[31]=c->r[3]|c->r[3]; // 8002BD78
  c->r[3]=R32(c->r[3]+0x00002410u); // 8002BD7C
  c->lr=0x8002BD84u; f_80037BD0(c); // 8002BD80
  cmps(c,0,(int32_t)c->r[3],0); // 8002BD84
  if (crb(c,2)) { goto L_8002BDF4; } // 8002BD88
  c->r[3]=c->r[31]+0x00002414u; // 8002BD8C
  c->lr=0x8002BD94u; f_800352E4(c); // 8002BD90
  cmps(c,0,(int32_t)c->r[3],0); // 8002BD94
  if (crb(c,2)) { goto L_8002BDF4; } // 8002BD98
  c->r[3]=c->r[13]+0xFFFF9470u; // 8002BD9C
  c->lr=0x8002BDA4u; f_8028AA78(c); // 8002BDA0
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BDA4
  fcmp(c,0,c->f[1],c->f[0]); // 8002BDA8
  if (!crb(c,0)) { goto L_8002BDD4; } // 8002BDAC
  c->r[3]=c->r[31]+0x00002414u; // 8002BDB0
  c->r[4]=0u+0x00000004u; // 8002BDB4
  c->r[5]=0u+0x00000044u; // 8002BDB8
  c->r[6]=0u+0x00000001u; // 8002BDBC
  c->r[7]=0u+0x00000001u; // 8002BDC0
  c->r[8]=0u+0x00000000u; // 8002BDC4
  c->r[9]=0u+0x00000000u; // 8002BDC8
  c->lr=0x8002BDD0u; f_80035028(c); // 8002BDCC
  goto L_8002BDF4; // 8002BDD0
L_8002BDD4:;
  c->r[3]=c->r[31]+0x00002414u; // 8002BDD4
  c->r[4]=0u+0x00000003u; // 8002BDD8
  c->r[5]=0u+0x00000043u; // 8002BDDC
  c->r[6]=0u+0x00000001u; // 8002BDE0
  c->r[7]=0u+0x00000001u; // 8002BDE4
  c->r[8]=0u+0x00000000u; // 8002BDE8
  c->r[9]=0u+0x00000000u; // 8002BDEC
  c->lr=0x8002BDF4u; f_80035028(c); // 8002BDF0
L_8002BDF4:;
  {uint32_t ea=c->r[31]+0x00000228u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BDF4
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BDF8
  fcmp(c,0,c->f[1],c->f[0]); // 8002BDFC
  c->r[0]=c->cr; // 8002BE00
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8002BE04
  if (!crb(c,2)) { goto L_8002BE50; } // 8002BE08
  c->r[3]=R32(c->r[31]+0x00002410u); // 8002BE0C
  c->r[4]=0u+0x0000000Au; // 8002BE10
  c->lr=0x8002BE18u; f_80037BD0(c); // 8002BE14
  cmps(c,0,(int32_t)c->r[3],0); // 8002BE18
  if (crb(c,2)) { goto L_8002BE44; } // 8002BE1C
  {uint32_t ea=c->r[31]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BE20
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BE24
  fcmp(c,0,c->f[1],c->f[0]); // 8002BE28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002BE2C
  if (!crb(c,2)) { goto L_8002BE44; } // 8002BE30
  c->r[3]=c->r[31]|c->r[31]; // 8002BE34
  c->r[4]=0u+0x00000009u; // 8002BE38
  c->lr=0x8002BE40u; f_800256B0(c); // 8002BE3C
  goto L_8002BE50; // 8002BE40
L_8002BE44:;
  c->r[3]=c->r[31]|c->r[31]; // 8002BE44
  c->r[4]=0u+0x00000006u; // 8002BE48
  c->lr=0x8002BE50u; f_800256B0(c); // 8002BE4C
L_8002BE50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BE50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BE54
  c->lr=c->r[0]; // 8002BE58
  c->r[1]=c->r[1]+0x00000010u; // 8002BE5C
  return; // 8002BE60
}

// fn_8002BE64
void f_8002BE64(Ctx* __restrict c) {
  trace_call(0x8002BE64u);
  return; // 8002BE64
}

// fn_8002BE68
void f_8002BE68(Ctx* __restrict c) {
  trace_call(0x8002BE68u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BE68
  c->r[0]=c->r[0]|0x10000000u; // 8002BE6C
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BE70
  c->r[3]=c->r[3]+0x00002414u; // 8002BE74
  f_800351D4(c); return; // 8002BE78
}

// fn_8002BE7C
void f_8002BE7C(Ctx* __restrict c) {
  trace_call(0x8002BE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BE7C
  c->r[0]=c->lr; // 8002BE80
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BE84
  c->r[4]=c->r[3]+0x00002414u; // 8002BE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BE8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BE90
  c->r[31]=c->r[3]|c->r[3]; // 8002BE94
  {uint32_t ea=c->r[3]+0x00000228u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BE98
  fcmp(c,0,c->f[1],c->f[0]); // 8002BE9C
  c->r[0]=c->cr; // 8002BEA0
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8002BEA4
  if (crb(c,2)) { goto L_8002BEB8; } // 8002BEA8
  c->r[4]=0u+0x00000005u; // 8002BEAC
  c->lr=0x8002BEB4u; f_800256B0(c); // 8002BEB0
  goto L_8002BEE8; // 8002BEB4
L_8002BEB8:;
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BEB8
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BEBC
  fcmp(c,0,c->f[1],c->f[0]); // 8002BEC0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002BEC4
  if (!crb(c,2)) { goto L_8002BEE8; } // 8002BEC8
  c->r[3]=c->r[4]|c->r[4]; // 8002BECC
  c->lr=0x8002BED4u; f_800352E4(c); // 8002BED0
  cmps(c,0,(int32_t)c->r[3],0); // 8002BED4
  if (crb(c,2)) { goto L_8002BEE8; } // 8002BED8
  c->r[3]=c->r[31]|c->r[31]; // 8002BEDC
  c->r[4]=0u+0x00000007u; // 8002BEE0
  c->lr=0x8002BEE8u; f_800256B0(c); // 8002BEE4
L_8002BEE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BEE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BEEC
  c->lr=c->r[0]; // 8002BEF0
  c->r[1]=c->r[1]+0x00000010u; // 8002BEF4
  return; // 8002BEF8
}

// fn_8002BEFC
void f_8002BEFC(Ctx* __restrict c) {
  trace_call(0x8002BEFCu);
  return; // 8002BEFC
}

// fn_8002BF00
void f_8002BF00(Ctx* __restrict c) {
  trace_call(0x8002BF00u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002BF00
  c->r[0]=c->r[0]|0x10000000u; // 8002BF04
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BF08
  c->r[3]=c->r[3]+0x00002414u; // 8002BF0C
  f_8003525C(c); return; // 8002BF10
}

// fn_8002BF14
void f_8002BF14(Ctx* __restrict c) {
  trace_call(0x8002BF14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BF14
  c->r[0]=c->lr; // 8002BF18
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BF1C
  c->r[4]=c->r[3]+0x00002414u; // 8002BF20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BF24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BF28
  c->r[31]=c->r[3]|c->r[3]; // 8002BF2C
  {uint32_t ea=c->r[3]+0x00000228u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BF30
  fcmp(c,0,c->f[1],c->f[0]); // 8002BF34
  c->r[0]=c->cr; // 8002BF38
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8002BF3C
  if (crb(c,2)) { goto L_8002BF50; } // 8002BF40
  c->r[4]=0u+0x00000005u; // 8002BF44
  c->lr=0x8002BF4Cu; f_800256B0(c); // 8002BF48
  goto L_8002BFAC; // 8002BF4C
L_8002BF50:;
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002BF50
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BF54
  fcmp(c,0,c->f[1],c->f[0]); // 8002BF58
  if (!crb(c,0)) { goto L_8002BF80; } // 8002BF5C
  c->r[3]=c->r[4]|c->r[4]; // 8002BF60
  c->lr=0x8002BF68u; f_800352E4(c); // 8002BF64
  cmps(c,0,(int32_t)c->r[3],0); // 8002BF68
  if (crb(c,2)) { goto L_8002BFAC; } // 8002BF6C
  c->r[3]=c->r[31]|c->r[31]; // 8002BF70
  c->r[4]=0u+0x00000006u; // 8002BF74
  c->lr=0x8002BF7Cu; f_800256B0(c); // 8002BF78
  goto L_8002BFAC; // 8002BF7C
L_8002BF80:;
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002BF80
  fcmp(c,0,c->f[1],c->f[0]); // 8002BF84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002BF88
  if (!crb(c,2)) { goto L_8002BFAC; } // 8002BF8C
  c->r[3]=c->r[4]|c->r[4]; // 8002BF90
  c->lr=0x8002BF98u; f_800352E4(c); // 8002BF94
  cmps(c,0,(int32_t)c->r[3],0); // 8002BF98
  if (crb(c,2)) { goto L_8002BFAC; } // 8002BF9C
  c->r[3]=c->r[31]|c->r[31]; // 8002BFA0
  c->r[4]=0u+0x00000008u; // 8002BFA4
  c->lr=0x8002BFACu; f_800256B0(c); // 8002BFA8
L_8002BFAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002BFAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002BFB0
  c->lr=c->r[0]; // 8002BFB4
  c->r[1]=c->r[1]+0x00000010u; // 8002BFB8
  return; // 8002BFBC
}

// fn_8002BFC0
void f_8002BFC0(Ctx* __restrict c) {
  trace_call(0x8002BFC0u);
  return; // 8002BFC0
}

// fn_8002BFC4
void f_8002BFC4(Ctx* __restrict c) {
  trace_call(0x8002BFC4u);
  c->r[4]=R32(c->r[3]+0x0000014Cu); // 8002BFC4
  c->r[0]=0u+0x00000001u; // 8002BFC8
  W32(c->r[3]+0x000025C4u,c->r[0]); // 8002BFCC
  c->r[0]=c->r[4]|0x10000000u; // 8002BFD0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002BFD4
  return; // 8002BFD8
}

// fn_8002BFDC
void f_8002BFDC(Ctx* __restrict c) {
  trace_call(0x8002BFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002BFDC
  c->r[0]=c->lr; // 8002BFE0
  c->r[4]=0u+0x0000000Bu; // 8002BFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002BFE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002BFEC
  c->r[31]=c->r[3]+0x00002414u; // 8002BFF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002BFF4
  c->r[30]=c->r[3]|c->r[3]; // 8002BFF8
  c->r[3]=R32(c->r[3]+0x00002410u); // 8002BFFC
  c->lr=0x8002C004u; f_80037BD0(c); // 8002C000
  cmps(c,0,(int32_t)c->r[3],0); // 8002C004
  if (crb(c,2)) { goto L_8002C05C; } // 8002C008
  {uint32_t ea=c->r[30]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C00C
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C010
  fcmp(c,0,c->f[1],c->f[0]); // 8002C014
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002C018
  if (!crb(c,2)) { goto L_8002C05C; } // 8002C01C
  {uint32_t ea=c->r[30]+0x0000021Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C020
  {uint32_t ea=c->r[30]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C024
  {uint32_t ea=c->r[2]+0xFFFF84C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002C028
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8002C02C
  {uint32_t ea=c->r[30]+0x00000218u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002C030
  {uint32_t ea=c->r[2]+0xFFFF8374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C034
  {uint32_t ea=c->r[31]+0x000001CCu; WF32(ea,c->f[2]);} // 8002C038
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8002C03C
  fcmp(c,0,c->f[1],c->f[0]); // 8002C040
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002C044
  if (!crb(c,2)) { goto L_8002C0E4; } // 8002C048
  c->r[3]=c->r[30]|c->r[30]; // 8002C04C
  c->r[4]=0u+0x0000000Au; // 8002C050
  c->lr=0x8002C058u; f_800256B0(c); // 8002C054
  goto L_8002C0E4; // 8002C058
L_8002C05C:;
  {uint32_t ea=c->r[30]+0x00000228u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C05C
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C060
  fcmp(c,0,c->f[1],c->f[0]); // 8002C064
  c->r[0]=c->cr; // 8002C068
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8002C06C
  if (crb(c,2)) { goto L_8002C084; } // 8002C070
  c->r[3]=c->r[30]|c->r[30]; // 8002C074
  c->r[4]=0u+0x00000005u; // 8002C078
  c->lr=0x8002C080u; f_800256B0(c); // 8002C07C
  goto L_8002C0E4; // 8002C080
L_8002C084:;
  c->r[3]=R32(c->r[30]+0x00002410u); // 8002C084
  c->r[4]=0u+0x0000000Au; // 8002C088
  c->lr=0x8002C090u; f_80037BD0(c); // 8002C08C
  cmps(c,0,(int32_t)c->r[3],0); // 8002C090
  if (crb(c,2)) { goto L_8002C0B8; } // 8002C094
  {uint32_t ea=c->r[30]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C098
  {uint32_t ea=c->r[2]+0xFFFF84D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C09C
  fcmp(c,0,c->f[1],c->f[0]); // 8002C0A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C0A4
  if (!crb(c,2)) { goto L_8002C0B8; } // 8002C0A8
  {uint32_t ea=c->r[2]+0xFFFF84C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C0AC
  {uint32_t ea=c->r[31]+0x000001CCu; WF32(ea,c->f[0]);} // 8002C0B0
  goto L_8002C0E4; // 8002C0B4
L_8002C0B8:;
  {uint32_t ea=c->r[30]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C0B8
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C0BC
  fcmp(c,0,c->f[1],c->f[0]); // 8002C0C0
  if (!crb(c,0)) { goto L_8002C0E4; } // 8002C0C4
  c->r[3]=c->r[31]|c->r[31]; // 8002C0C8
  c->lr=0x8002C0D0u; f_800352E4(c); // 8002C0CC
  cmps(c,0,(int32_t)c->r[3],0); // 8002C0D0
  if (crb(c,2)) { goto L_8002C0E4; } // 8002C0D4
  c->r[3]=c->r[30]|c->r[30]; // 8002C0D8
  c->r[4]=0u+0x00000007u; // 8002C0DC
  c->lr=0x8002C0E4u; f_800256B0(c); // 8002C0E0
L_8002C0E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C0E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C0E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002C0EC
  c->lr=c->r[0]; // 8002C0F0
  c->r[1]=c->r[1]+0x00000010u; // 8002C0F4
  return; // 8002C0F8
}

// fn_8002C0FC
void f_8002C0FC(Ctx* __restrict c) {
  trace_call(0x8002C0FCu);
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C0FC
  c->r[0]=0u+0x00000000u; // 8002C100
  W32(c->r[3]+0x000025C4u,c->r[0]); // 8002C104
  {uint32_t ea=c->r[3]+0x000025E0u; WF32(ea,c->f[0]);} // 8002C108
  return; // 8002C10C
}

// fn_8002C110
void f_8002C110(Ctx* __restrict c) {
  trace_call(0x8002C110u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C110
  c->r[4]=0u+0x0000000Au; // 8002C114
  c->r[5]=0u+0x0000004Au; // 8002C118
  c->r[6]=0u+0x00000000u; // 8002C11C
  c->r[0]=c->r[0]|0x10000000u; // 8002C120
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C124
  c->r[7]=0u+0x00000001u; // 8002C128
  c->r[8]=0u+0x00000000u; // 8002C12C
  c->r[9]=0u+0x00000000u; // 8002C130
  c->r[3]=c->r[3]+0x00002414u; // 8002C134
  f_80035028(c); return; // 8002C138
}

// fn_8002C13C
void f_8002C13C(Ctx* __restrict c) {
  trace_call(0x8002C13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C13C
  c->r[0]=c->lr; // 8002C140
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C148
  c->r[31]=c->r[3]|c->r[3]; // 8002C14C
  c->r[3]=c->r[3]+0x00002414u; // 8002C150
  c->lr=0x8002C158u; f_80035350(c); // 8002C154
  cmps(c,0,(int32_t)c->r[3],0); // 8002C158
  if (crb(c,2)) { goto L_8002C16C; } // 8002C15C
  c->r[3]=c->r[31]|c->r[31]; // 8002C160
  c->r[4]=0u+0x00000008u; // 8002C164
  c->lr=0x8002C16Cu; f_800256B0(c); // 8002C168
L_8002C16C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C16C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C170
  c->lr=c->r[0]; // 8002C174
  c->r[1]=c->r[1]+0x00000010u; // 8002C178
  return; // 8002C17C
}

// fn_8002C180
void f_8002C180(Ctx* __restrict c) {
  trace_call(0x8002C180u);
  return; // 8002C180
}

// fn_8002C184
void f_8002C184(Ctx* __restrict c) {
  trace_call(0x8002C184u);
  c->r[5]=R32(c->r[3]+0x0000014Cu); // 8002C184
  c->r[0]=0u+0x00000001u; // 8002C188
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C18C
  c->r[4]=0u+0x0000000Bu; // 8002C190
  c->r[0]=c->r[5]|0x10000000u; // 8002C194
  c->r[5]=0u+0x0000004Bu; // 8002C198
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C19C
  c->r[6]=0u+0x00000000u; // 8002C1A0
  c->r[7]=0u+0x00000001u; // 8002C1A4
  c->r[8]=0u+0x00000000u; // 8002C1A8
  c->r[9]=0u+0x00000000u; // 8002C1AC
  c->r[3]=c->r[3]+0x00002414u; // 8002C1B0
  f_80035028(c); return; // 8002C1B4
}

// fn_8002C1B8
void f_8002C1B8(Ctx* __restrict c) {
  trace_call(0x8002C1B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C1B8
  c->r[0]=c->lr; // 8002C1BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C1C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C1C4
  c->r[31]=c->r[3]|c->r[3]; // 8002C1C8
  c->r[3]=c->r[3]+0x00002414u; // 8002C1CC
  c->lr=0x8002C1D4u; f_80035350(c); // 8002C1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8002C1D4
  if (crb(c,2)) { goto L_8002C1F0; } // 8002C1D8
  c->r[3]=c->r[31]+0x00000190u; // 8002C1DC
  c->lr=0x8002C1E4u; f_8002DF00(c); // 8002C1E0
  c->r[3]=c->r[31]|c->r[31]; // 8002C1E4
  c->r[4]=0u+0x00000005u; // 8002C1E8
  c->lr=0x8002C1F0u; f_800256B0(c); // 8002C1EC
L_8002C1F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C1F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C1F4
  c->lr=c->r[0]; // 8002C1F8
  c->r[1]=c->r[1]+0x00000010u; // 8002C1FC
  return; // 8002C200
}

// fn_8002C204
void f_8002C204(Ctx* __restrict c) {
  trace_call(0x8002C204u);
  c->r[0]=0u+0x00000000u; // 8002C204
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C208
  return; // 8002C20C
}

// fn_8002C210
void f_8002C210(Ctx* __restrict c) {
  trace_call(0x8002C210u);
  c->r[5]=R32(c->r[3]+0x0000014Cu); // 8002C210
  c->r[0]=0u+0x00000001u; // 8002C214
  {uint32_t ea=c->r[2]+0xFFFF8378u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C218
  c->r[4]=0u+0x0000000Eu; // 8002C21C
  c->r[5]=rotl(c->r[5],0)&0xEFFFFFFFu; // 8002C220
  W32(c->r[3]+0x0000014Cu,c->r[5]); // 8002C224
  c->r[5]=0u+0x0000004Eu; // 8002C228
  c->r[6]=0u+0x00000000u; // 8002C22C
  W32(c->r[3]+0x000001A8u,c->r[0]); // 8002C230
  c->r[7]=0u+0x00000001u; // 8002C234
  c->r[8]=0u+0x00000001u; // 8002C238
  c->r[9]=0u+0x00000000u; // 8002C23C
  {uint32_t ea=c->r[3]+0x00000214u; WF32(ea,c->f[0]);} // 8002C240
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C244
  c->r[3]=c->r[3]+0x00002414u; // 8002C248
  f_80035028(c); return; // 8002C24C
}

// fn_8002C250
void f_8002C250(Ctx* __restrict c) {
  trace_call(0x8002C250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C250
  c->r[0]=c->lr; // 8002C254
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C25C
  c->r[31]=c->r[3]|c->r[3]; // 8002C260
  c->r[3]=c->r[3]+0x00002414u; // 8002C264
  c->lr=0x8002C26Cu; f_80035350(c); // 8002C268
  cmps(c,0,(int32_t)c->r[3],0); // 8002C26C
  if (crb(c,2)) { goto L_8002C288; } // 8002C270
  c->r[3]=c->r[31]+0x00000190u; // 8002C274
  c->lr=0x8002C27Cu; f_8002DF00(c); // 8002C278
  c->r[3]=c->r[31]|c->r[31]; // 8002C27C
  c->r[4]=0u+0x00000008u; // 8002C280
  c->lr=0x8002C288u; f_800256B0(c); // 8002C284
L_8002C288:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C28C
  c->lr=c->r[0]; // 8002C290
  c->r[1]=c->r[1]+0x00000010u; // 8002C294
  return; // 8002C298
}

// fn_8002C29C
void f_8002C29C(Ctx* __restrict c) {
  trace_call(0x8002C29Cu);
  c->r[0]=0u+0x00000000u; // 8002C29C
  W32(c->r[3]+0x000001A8u,c->r[0]); // 8002C2A0
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C2A4
  return; // 8002C2A8
}

// fn_8002C2AC
void f_8002C2AC(Ctx* __restrict c) {
  trace_call(0x8002C2ACu);
  c->r[5]=R32(c->r[3]+0x0000014Cu); // 8002C2AC
  c->r[0]=0u+0x00000001u; // 8002C2B0
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C2B4
  c->r[4]=0u+0x0000000Fu; // 8002C2B8
  c->r[0]=rotl(c->r[5],0)&0xEFFFFFFFu; // 8002C2BC
  c->r[5]=0u+0x0000004Fu; // 8002C2C0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C2C4
  c->r[6]=0u+0x00000000u; // 8002C2C8
  c->r[7]=0u+0x00000001u; // 8002C2CC
  c->r[8]=0u+0x00000000u; // 8002C2D0
  c->r[9]=0u+0x00000000u; // 8002C2D4
  c->r[3]=c->r[3]+0x00002414u; // 8002C2D8
  f_80035028(c); return; // 8002C2DC
}

// fn_8002C2E0
void f_8002C2E0(Ctx* __restrict c) {
  trace_call(0x8002C2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C2E0
  c->r[0]=c->lr; // 8002C2E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C2E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C2EC
  c->r[31]=c->r[3]|c->r[3]; // 8002C2F0
  c->r[3]=c->r[3]+0x00002414u; // 8002C2F4
  c->lr=0x8002C2FCu; f_80035350(c); // 8002C2F8
  cmps(c,0,(int32_t)c->r[3],0); // 8002C2FC
  if (!crb(c,2)) { goto L_8002C310; } // 8002C300
  c->r[0]=R32(c->r[31]+0x0000019Cu); // 8002C304
  cmps(c,0,(int32_t)c->r[0],0); // 8002C308
  if (crb(c,2)) { goto L_8002C31C; } // 8002C30C
L_8002C310:;
  c->r[3]=c->r[31]|c->r[31]; // 8002C310
  c->r[4]=0u+0x0000000Du; // 8002C314
  c->lr=0x8002C31Cu; f_800256B0(c); // 8002C318
L_8002C31C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C31C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C320
  c->lr=c->r[0]; // 8002C324
  c->r[1]=c->r[1]+0x00000010u; // 8002C328
  return; // 8002C32C
}

// fn_8002C330
void f_8002C330(Ctx* __restrict c) {
  trace_call(0x8002C330u);
  c->r[0]=0u+0x00000000u; // 8002C330
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C334
  return; // 8002C338
}

// fn_8002C33C
void f_8002C33C(Ctx* __restrict c) {
  trace_call(0x8002C33Cu);
  c->r[5]=R32(c->r[3]+0x0000014Cu); // 8002C33C
  c->r[0]=0u+0x00000001u; // 8002C340
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C344
  c->r[4]=0u+0x00000010u; // 8002C348
  c->r[0]=c->r[5]|0x10000000u; // 8002C34C
  c->r[5]=0u+0x00000050u; // 8002C350
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C354
  c->r[6]=0u+0x00000000u; // 8002C358
  c->r[7]=0u+0x00000001u; // 8002C35C
  c->r[8]=0u+0x00000000u; // 8002C360
  c->r[9]=0u+0x00000000u; // 8002C364
  c->r[3]=c->r[3]+0x00002414u; // 8002C368
  f_80035028(c); return; // 8002C36C
}

// fn_8002C370
void f_8002C370(Ctx* __restrict c) {
  trace_call(0x8002C370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C370
  c->r[0]=c->lr; // 8002C374
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C37C
  c->r[31]=c->r[3]|c->r[3]; // 8002C380
  c->r[3]=c->r[3]+0x00002414u; // 8002C384
  c->lr=0x8002C38Cu; f_80035350(c); // 8002C388
  cmps(c,0,(int32_t)c->r[3],0); // 8002C38C
  if (crb(c,2)) { goto L_8002C3A8; } // 8002C390
  c->r[3]=c->r[31]+0x00000190u; // 8002C394
  c->lr=0x8002C39Cu; f_8002DF00(c); // 8002C398
  c->r[3]=c->r[31]|c->r[31]; // 8002C39C
  c->r[4]=0u+0x00000005u; // 8002C3A0
  c->lr=0x8002C3A8u; f_800256B0(c); // 8002C3A4
L_8002C3A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C3A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C3AC
  c->lr=c->r[0]; // 8002C3B0
  c->r[1]=c->r[1]+0x00000010u; // 8002C3B4
  return; // 8002C3B8
}

// fn_8002C3BC
void f_8002C3BC(Ctx* __restrict c) {
  trace_call(0x8002C3BCu);
  c->r[0]=0u+0x00000000u; // 8002C3BC
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8002C3C0
  return; // 8002C3C4
}

// fn_8002C3C8
void f_8002C3C8(Ctx* __restrict c) {
  trace_call(0x8002C3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C3C8
  c->r[0]=c->lr; // 8002C3CC
  c->r[4]=0u+0x00000004u; // 8002C3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C3D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C3D8
  c->r[31]=c->r[3]|c->r[3]; // 8002C3DC
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C3E0
  c->r[0]=c->r[0]|0x10000000u; // 8002C3E4
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C3E8
  c->r[3]=R32(c->r[3]+0x00002410u); // 8002C3EC
  c->lr=0x8002C3F4u; f_80037BD0(c); // 8002C3F0
  cmps(c,0,(int32_t)c->r[3],0); // 8002C3F4
  if (crb(c,2)) { goto L_8002C434; } // 8002C3F8
  c->r[3]=c->r[13]+0xFFFF9470u; // 8002C3FC
  c->lr=0x8002C404u; f_8028AA78(c); // 8002C400
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C404
  fcmp(c,0,c->f[1],c->f[0]); // 8002C408
  if (!crb(c,0)) { goto L_8002C434; } // 8002C40C
  c->r[3]=c->r[31]+0x00002414u; // 8002C410
  c->r[4]=0u+0x00000004u; // 8002C414
  c->r[5]=0u+0x00000044u; // 8002C418
  c->r[6]=0u+0x00000001u; // 8002C41C
  c->r[7]=0u+0x00000001u; // 8002C420
  c->r[8]=0u+0x00000000u; // 8002C424
  c->r[9]=0u+0x00000001u; // 8002C428
  c->lr=0x8002C430u; f_80035028(c); // 8002C42C
  goto L_8002C454; // 8002C430
L_8002C434:;
  c->r[3]=c->r[31]+0x00002414u; // 8002C434
  c->r[4]=0u+0x00000003u; // 8002C438
  c->r[5]=0u+0x00000043u; // 8002C43C
  c->r[6]=0u+0x00000001u; // 8002C440
  c->r[7]=0u+0x00000001u; // 8002C444
  c->r[8]=0u+0x00000000u; // 8002C448
  c->r[9]=0u+0x00000001u; // 8002C44C
  c->lr=0x8002C454u; f_80035028(c); // 8002C450
L_8002C454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C458
  c->lr=c->r[0]; // 8002C45C
  c->r[1]=c->r[1]+0x00000010u; // 8002C460
  return; // 8002C464
}

// fn_8002C468
void f_8002C468(Ctx* __restrict c) {
  trace_call(0x8002C468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C468
  c->r[0]=c->lr; // 8002C46C
  c->r[4]=0u+0x00000004u; // 8002C470
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C478
  c->r[31]=c->r[3]|c->r[3]; // 8002C47C
  c->r[3]=R32(c->r[3]+0x00002410u); // 8002C480
  c->lr=0x8002C488u; f_80037BD0(c); // 8002C484
  cmps(c,0,(int32_t)c->r[3],0); // 8002C488
  if (crb(c,2)) { goto L_8002C4F8; } // 8002C48C
  c->r[3]=c->r[31]+0x00002414u; // 8002C490
  c->lr=0x8002C498u; f_800352E4(c); // 8002C494
  cmps(c,0,(int32_t)c->r[3],0); // 8002C498
  if (crb(c,2)) { goto L_8002C4F8; } // 8002C49C
  c->r[3]=c->r[13]+0xFFFF9470u; // 8002C4A0
  c->lr=0x8002C4A8u; f_8028AA78(c); // 8002C4A4
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C4A8
  fcmp(c,0,c->f[1],c->f[0]); // 8002C4AC
  if (!crb(c,0)) { goto L_8002C4D8; } // 8002C4B0
  c->r[3]=c->r[31]+0x00002414u; // 8002C4B4
  c->r[4]=0u+0x00000004u; // 8002C4B8
  c->r[5]=0u+0x00000044u; // 8002C4BC
  c->r[6]=0u+0x00000001u; // 8002C4C0
  c->r[7]=0u+0x00000001u; // 8002C4C4
  c->r[8]=0u+0x00000000u; // 8002C4C8
  c->r[9]=0u+0x00000000u; // 8002C4CC
  c->lr=0x8002C4D4u; f_80035028(c); // 8002C4D0
  goto L_8002C4F8; // 8002C4D4
L_8002C4D8:;
  c->r[3]=c->r[31]+0x00002414u; // 8002C4D8
  c->r[4]=0u+0x00000003u; // 8002C4DC
  c->r[5]=0u+0x00000043u; // 8002C4E0
  c->r[6]=0u+0x00000001u; // 8002C4E4
  c->r[7]=0u+0x00000001u; // 8002C4E8
  c->r[8]=0u+0x00000000u; // 8002C4EC
  c->r[9]=0u+0x00000000u; // 8002C4F0
  c->lr=0x8002C4F8u; f_80035028(c); // 8002C4F4
L_8002C4F8:;
  {uint32_t ea=c->r[31]+0x00002388u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C4F8
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C4FC
  fcmp(c,0,c->f[1],c->f[0]); // 8002C500
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C504
  if (!crb(c,2)) { goto L_8002C51C; } // 8002C508
  c->r[3]=c->r[31]|c->r[31]; // 8002C50C
  c->r[4]=0u+0x00000011u; // 8002C510
  c->lr=0x8002C518u; f_800256B0(c); // 8002C514
  goto L_8002C554; // 8002C518
L_8002C51C:;
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C51C
  fcmp(c,0,c->f[1],c->f[0]); // 8002C520
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C524
  if (!crb(c,2)) { goto L_8002C53C; } // 8002C528
  c->r[3]=c->r[31]|c->r[31]; // 8002C52C
  c->r[4]=0u+0x00000010u; // 8002C530
  c->lr=0x8002C538u; f_800256B0(c); // 8002C534
  goto L_8002C554; // 8002C538
L_8002C53C:;
  {uint32_t ea=c->r[2]+0xFFFF837Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C53C
  fcmp(c,0,c->f[1],c->f[0]); // 8002C540
  if (!crb(c,1)) { goto L_8002C554; } // 8002C544
  c->r[3]=c->r[31]|c->r[31]; // 8002C548
  c->r[4]=0u+0x0000000Fu; // 8002C54C
  c->lr=0x8002C554u; f_800256B0(c); // 8002C550
L_8002C554:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C558
  c->lr=c->r[0]; // 8002C55C
  c->r[1]=c->r[1]+0x00000010u; // 8002C560
  return; // 8002C564
}

// fn_8002C568
void f_8002C568(Ctx* __restrict c) {
  trace_call(0x8002C568u);
  return; // 8002C568
}

// fn_8002C56C
void f_8002C56C(Ctx* __restrict c) {
  trace_call(0x8002C56Cu);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C56C
  c->r[0]=c->r[0]|0x10000000u; // 8002C570
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C574
  c->r[3]=c->r[3]+0x00002414u; // 8002C578
  f_800351D4(c); return; // 8002C57C
}

// fn_8002C580
void f_8002C580(Ctx* __restrict c) {
  trace_call(0x8002C580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C580
  c->r[0]=c->lr; // 8002C584
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C588
  W32(c->r[1]+0x00000024u,c->r[0]); // 8002C58C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8002C590
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8002C594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C598
  c->r[31]=c->r[3]|c->r[3]; // 8002C59C
  {uint32_t ea=c->r[3]+0x00002388u; c->f[31]=c->ps1[31]=RF32(ea);} // 8002C5A0
  fcmp(c,0,c->f[31],c->f[0]); // 8002C5A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C5A8
  if (!crb(c,2)) { goto L_8002C5F0; } // 8002C5AC
  c->r[3]=c->r[3]+0x00002414u; // 8002C5B0
  c->lr=0x8002C5B8u; f_800352E4(c); // 8002C5B4
  cmps(c,0,(int32_t)c->r[3],0); // 8002C5B8
  if (crb(c,2)) { goto L_8002C608; } // 8002C5BC
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C5C0
  fcmp(c,0,c->f[31],c->f[0]); // 8002C5C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C5C8
  if (!crb(c,2)) { goto L_8002C5E0; } // 8002C5CC
  c->r[3]=c->r[31]|c->r[31]; // 8002C5D0
  c->r[4]=0u+0x00000011u; // 8002C5D4
  c->lr=0x8002C5DCu; f_800256B0(c); // 8002C5D8
  goto L_8002C608; // 8002C5DC
L_8002C5E0:;
  c->r[3]=c->r[31]|c->r[31]; // 8002C5E0
  c->r[4]=0u+0x00000010u; // 8002C5E4
  c->lr=0x8002C5ECu; f_800256B0(c); // 8002C5E8
  goto L_8002C608; // 8002C5EC
L_8002C5F0:;
  {uint32_t ea=c->r[2]+0xFFFF837Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C5F0
  fcmp(c,0,c->f[31],c->f[0]); // 8002C5F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002C5F8
  if (!crb(c,2)) { goto L_8002C608; } // 8002C5FC
  c->r[4]=0u+0x0000000Eu; // 8002C600
  c->lr=0x8002C608u; f_800256B0(c); // 8002C604
L_8002C608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8002C608
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8002C60C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8002C610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C614
  c->lr=c->r[0]; // 8002C618
  c->r[1]=c->r[1]+0x00000020u; // 8002C61C
  return; // 8002C620
}

// fn_8002C624
void f_8002C624(Ctx* __restrict c) {
  trace_call(0x8002C624u);
  return; // 8002C624
}

// fn_8002C628
void f_8002C628(Ctx* __restrict c) {
  trace_call(0x8002C628u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C628
  c->r[0]=c->r[0]|0x10000000u; // 8002C62C
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C630
  c->r[3]=c->r[3]+0x00002414u; // 8002C634
  f_8003525C(c); return; // 8002C638
}

// fn_8002C63C
void f_8002C63C(Ctx* __restrict c) {
  trace_call(0x8002C63Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C63C
  c->r[0]=c->lr; // 8002C640
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C644
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C64C
  c->r[31]=c->r[3]|c->r[3]; // 8002C650
  {uint32_t ea=c->r[3]+0x00002388u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C654
  fcmp(c,0,c->f[1],c->f[0]); // 8002C658
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002C65C
  if (!crb(c,2)) { goto L_8002C684; } // 8002C660
  c->r[3]=c->r[3]+0x00002414u; // 8002C664
  c->lr=0x8002C66Cu; f_800352E4(c); // 8002C668
  cmps(c,0,(int32_t)c->r[3],0); // 8002C66C
  if (crb(c,2)) { goto L_8002C6C8; } // 8002C670
  c->r[3]=c->r[31]|c->r[31]; // 8002C674
  c->r[4]=0u+0x00000011u; // 8002C678
  c->lr=0x8002C680u; f_800256B0(c); // 8002C67C
  goto L_8002C6C8; // 8002C680
L_8002C684:;
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C684
  fcmp(c,0,c->f[1],c->f[0]); // 8002C688
  if (!crb(c,0)) { goto L_8002C6C8; } // 8002C68C
  {uint32_t ea=c->r[2]+0xFFFF837Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C690
  fcmp(c,0,c->f[1],c->f[0]); // 8002C694
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002C698
  if (!crb(c,2)) { goto L_8002C6AC; } // 8002C69C
  c->r[4]=0u+0x0000000Eu; // 8002C6A0
  c->lr=0x8002C6A8u; f_800256B0(c); // 8002C6A4
  goto L_8002C6C8; // 8002C6A8
L_8002C6AC:;
  c->r[3]=c->r[3]+0x00002414u; // 8002C6AC
  c->lr=0x8002C6B4u; f_800352E4(c); // 8002C6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8002C6B4
  if (crb(c,2)) { goto L_8002C6C8; } // 8002C6B8
  c->r[3]=c->r[31]|c->r[31]; // 8002C6BC
  c->r[4]=0u+0x0000000Fu; // 8002C6C0
  c->lr=0x8002C6C8u; f_800256B0(c); // 8002C6C4
L_8002C6C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C6C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C6CC
  c->lr=c->r[0]; // 8002C6D0
  c->r[1]=c->r[1]+0x00000010u; // 8002C6D4
  return; // 8002C6D8
}

// fn_8002C6DC
void f_8002C6DC(Ctx* __restrict c) {
  trace_call(0x8002C6DCu);
  return; // 8002C6DC
}

// fn_8002C6E0
void f_8002C6E0(Ctx* __restrict c) {
  trace_call(0x8002C6E0u);
  c->r[4]=R32(c->r[3]+0x0000014Cu); // 8002C6E0
  c->r[0]=0u+0x00000001u; // 8002C6E4
  W32(c->r[3]+0x000025C4u,c->r[0]); // 8002C6E8
  c->r[0]=c->r[4]|0x10000000u; // 8002C6EC
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C6F0
  return; // 8002C6F4
}

// fn_8002C6F8
void f_8002C6F8(Ctx* __restrict c) {
  trace_call(0x8002C6F8u);
  {uint32_t ea=c->r[3]+0x00002388u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C6F8
  {uint32_t ea=c->r[2]+0xFFFF837Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C6FC
  fcmp(c,0,c->f[1],c->f[0]); // 8002C700
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002C704
  if (!crb(c,2)) { goto L_8002C714; } // 8002C708
  c->r[4]=0u+0x0000000Eu; // 8002C70C
  f_800256B0(c); return; // 8002C710
L_8002C714:;
  {uint32_t ea=c->r[2]+0xFFFF84CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C714
  fcmp(c,0,c->f[1],c->f[0]); // 8002C718
  if (!crb(c,0)) { goto L_8002C728; } // 8002C71C
  c->r[4]=0u+0x0000000Fu; // 8002C720
  f_800256B0(c); return; // 8002C724
L_8002C728:;
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C728
  fcmp(c,0,c->f[1],c->f[0]); // 8002C72C
  if (!crb(c,0)) return; // 8002C730
  c->r[4]=0u+0x00000010u; // 8002C734
  f_800256B0(c); return; // 8002C738
}

// fn_8002C73C
void f_8002C73C(Ctx* __restrict c) {
  trace_call(0x8002C73Cu);
  return; // 8002C73C
}

// fn_8002C740
void f_8002C740(Ctx* __restrict c) {
  trace_call(0x8002C740u);
  c->r[0]=0u+0x00000000u; // 8002C740
  W32(c->r[3]+0x000025C4u,c->r[0]); // 8002C744
  return; // 8002C748
}

// fn_8002C74C
void f_8002C74C(Ctx* __restrict c) {
  trace_call(0x8002C74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C74C
  c->r[0]=c->lr; // 8002C750
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C754
  {uint32_t ea=c->r[2]+0xFFFF8384u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002C758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C75C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8002C760
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002C764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C768
  c->r[31]=c->r[3]|c->r[3]; // 8002C76C
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[3]; // 8002C770
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C774
  c->r[0]=c->r[0]|0x11080000u; // 8002C778
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C77C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8002C780
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 8002C784
  {uint32_t ea=c->r[3]+0x0000283Cu; WF32(ea,c->f[0]);} // 8002C788
  c->r[3]=c->r[13]+0xFFFF9470u; // 8002C78C
  c->lr=0x8002C794u; f_8028AA78(c); // 8002C790
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C794
  fcmp(c,0,c->f[1],c->f[0]); // 8002C798
  c->r[0]=c->cr; // 8002C79C
  c->r[3]=c->r[31]|c->r[31]; // 8002C7A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8002C7A4
  W32(c->r[31]+0x00002838u,c->r[0]); // 8002C7A8
  c->lr=0x8002C7B0u; f_8005A5D0(c); // 8002C7AC
  c->r[0]=0u+0x00000003u; // 8002C7B0
  W32(c->r[31]+0x00002390u,c->r[0]); // 8002C7B4
  c->r[3]=c->r[31]+0x00002414u; // 8002C7B8
  c->r[4]=0u+0x00000000u; // 8002C7BC
  c->r[5]=0u+0x00000001u; // 8002C7C0
  c->r[6]=0u+0x00000001u; // 8002C7C4
  c->lr=0x8002C7CCu; f_80034C24(c); // 8002C7C8
  c->r[0]=0u+0x00000000u; // 8002C7CC
  W32(c->r[31]+0x000027F8u,c->r[0]); // 8002C7D0
  W32(c->r[31]+0x00002800u,c->r[0]); // 8002C7D4
  W32(c->r[31]+0x000027FCu,c->r[0]); // 8002C7D8
  W32(c->r[31]+0x00002804u,c->r[0]); // 8002C7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C7E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002C7E4
  c->lr=c->r[0]; // 8002C7E8
  c->r[1]=c->r[1]+0x00000010u; // 8002C7EC
  return; // 8002C7F0
}

// fn_8002C7F4
void f_8002C7F4(Ctx* __restrict c) {
  trace_call(0x8002C7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C7F4
  c->r[0]=c->lr; // 8002C7F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8002C7FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8002C800
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8002C804
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8002C808
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8002C80C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C810
  c->r[31]=c->r[3]|c->r[3]; // 8002C814
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C818
  c->r[0]=rotl(c->r[0],8)&0x00000001u; cr0(c,c->r[0]); // 8002C81C
  if (crb(c,2)) { goto L_8002C840; } // 8002C820
  c->lr=0x8002C828u; f_80024134(c); // 8002C824
  cmps(c,0,(int32_t)c->r[3],0); // 8002C828
  if (crb(c,2)) { goto L_8002C840; } // 8002C82C
  c->r[0]=R32(c->r[31]+0x0000014Cu); // 8002C830
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 8002C834
  c->r[0]=rotl(c->r[0],0)&0xFEFFFFFFu; // 8002C838
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 8002C83C
L_8002C840:;
  c->r[0]=R32(c->r[31]+0x0000014Cu); // 8002C840
  c->r[3]=R32(c->r[31]+0x000027B0u); // 8002C844
  c->r[0]=c->r[0]|0x00040000u; // 8002C848
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 8002C84C
  c->r[4]=c->r[3]+0x00000360u; // 8002C850
  c->r[0]=R32(c->r[3]+0x000001C4u); // 8002C854
  cmps(c,0,(int32_t)c->r[0],30); // 8002C858
  if (crb(c,2)) { goto L_8002C870; } // 8002C85C
  c->r[3]=c->r[31]|c->r[31]; // 8002C860
  c->r[4]=0u+0x00000015u; // 8002C864
  c->lr=0x8002C86Cu; f_800256B0(c); // 8002C868
  goto L_8002C9A0; // 8002C86C
L_8002C870:;
  c->r[0]=R8(c->r[4]+0x00000094u); // 8002C870
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8002C874
  cmps(c,1,(int32_t)c->r[0],0); // 8002C878
  if (crb(c,6)) { goto L_8002C9A0; } // 8002C87C
  c->r[0]=R32(c->r[4]+0x00000084u); // 8002C880
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8002C884
  c->r[0]=R32(c->r[4]+c->r[0]); // 8002C888
  cmps(c,0,(int32_t)c->r[0],3); // 8002C88C
  if (!crb(c,2)) { goto L_8002C8B4; } // 8002C890
  c->r[0]=R32(c->r[31]+0x00002838u); // 8002C894
  c->r[3]=c->r[31]|c->r[31]; // 8002C898
  c->r[4]=0u+0x00000013u; // 8002C89C
  c->r[0]=cntlz(c->r[0]); // 8002C8A0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8002C8A4
  W32(c->r[31]+0x00002838u,c->r[0]); // 8002C8A8
  c->lr=0x8002C8B0u; f_800256B0(c); // 8002C8AC
  goto L_8002C9A0; // 8002C8B0
L_8002C8B4:;
  cmps(c,0,(int32_t)c->r[0],2); // 8002C8B4
  if (!crb(c,2)) { goto L_8002C9A0; } // 8002C8B8
  {uint32_t ea=c->r[31]+0x0000283Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8002C8BC
  if (crb(c,6)) { goto L_8002C8DC; } // 8002C8C0
  {uint32_t ea=c->r[4]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002C8C4
  {uint32_t ea=c->r[2]+0xFFFF8388u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C8C8
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C8CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8002C8D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8002C8D4
  goto L_8002C8E0; // 8002C8D8
L_8002C8DC:;
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C8DC
L_8002C8E0:;
  {uint32_t ea=c->r[2]+0xFFFF838Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C8E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8002C8E4
  c->lr=0x8002C8ECu; f_800D2864(c); // 8002C8E8
  c->r[0]=R32(c->r[31]+0x00002838u); // 8002C8EC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8002C8F0
  cmps(c,0,(int32_t)c->r[0],0); // 8002C8F4
  if (crb(c,2)) { goto L_8002C930; } // 8002C8F8
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002C8FC
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C900
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8002C904
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 8002C908
  fcmp(c,0,c->f[31],c->f[30]); // 8002C90C
  if (!crb(c,0)) { goto L_8002C960; } // 8002C910
  {uint32_t ea=c->r[2]+0xFFFF8384u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C914
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[1]); // 8002C918
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[1]; // 8002C91C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002C920
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8002C924
  {uint32_t ea=c->r[31]+0x0000283Cu; WF32(ea,c->f[1]);} // 8002C928
  goto L_8002C960; // 8002C92C
L_8002C930:;
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002C930
  {uint32_t ea=c->r[2]+0xFFFF8390u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002C934
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8002C938
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 8002C93C
  fcmp(c,0,c->f[31],c->f[30]); // 8002C940
  if (!crb(c,1)) { goto L_8002C960; } // 8002C944
  {uint32_t ea=c->r[2]+0xFFFF8384u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C948
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[1]); // 8002C94C
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[1]; // 8002C950
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002C954
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8002C958
  {uint32_t ea=c->r[31]+0x0000283Cu; WF32(ea,c->f[1]);} // 8002C95C
L_8002C960:;
  c->r[3]=c->r[31]|c->r[31]; // 8002C960
  c->lr=0x8002C968u; f_80059E88(c); // 8002C964
  fcmp(c,0,c->f[31],c->f[30]); // 8002C968
  if (crb(c,2)) { goto L_8002C978; } // 8002C96C
  c->r[4]=R32(c->r[13]+0xFFFF80FCu); // 8002C970
  goto L_8002C97C; // 8002C974
L_8002C978:;
  c->r[4]=0u+0x00000000u; // 8002C978
L_8002C97C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8002C97C
  c->r[3]=0u+0x00000000u; // 8002C980
  if (crb(c,2)) { goto L_8002C998; } // 8002C984
  c->r[0]=R32(c->r[31]+0x00002804u); // 8002C988
  cmpu(c,0,c->r[4],c->r[0]); // 8002C98C
  if (crb(c,2)) { goto L_8002C998; } // 8002C990
  c->r[3]=0u+0x00000001u; // 8002C994
L_8002C998:;
  W32(c->r[31]+0x000027FCu,c->r[3]); // 8002C998
  W32(c->r[31]+0x00002804u,c->r[4]); // 8002C99C
L_8002C9A0:;
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002C9A0
  c->r[3]=c->r[31]|c->r[31]; // 8002C9A4
  c->lr=0x8002C9ACu; f_80059EB4(c); // 8002C9A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8002C9AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8002C9B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8002C9B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 8002C9B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8002C9BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002C9C0
  c->lr=c->r[0]; // 8002C9C4
  c->r[1]=c->r[1]+0x00000030u; // 8002C9C8
  return; // 8002C9CC
}

// fn_8002C9D0
void f_8002C9D0(Ctx* __restrict c) {
  trace_call(0x8002C9D0u);
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C9D0
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 8002C9D4
  c->r[0]=rotl(c->r[0],0)&0xFEFFFFFFu; // 8002C9D8
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002C9DC
  return; // 8002C9E0
}

// fn_8002C9E4
void f_8002C9E4(Ctx* __restrict c) {
  trace_call(0x8002C9E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002C9E4
  c->r[0]=c->lr; // 8002C9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002C9EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002C9F0
  c->r[31]=c->r[3]|c->r[3]; // 8002C9F4
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002C9F8
  c->r[0]=c->r[0]|0x10000000u; // 8002C9FC
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002CA00
  c->lr=0x8002CA08u; f_8005A5D0(c); // 8002CA04
  c->r[3]=c->r[31]+0x00002414u; // 8002CA08
  c->r[4]=0u+0x00000002u; // 8002CA0C
  c->r[5]=0u+0x00000001u; // 8002CA10
  c->r[6]=0u+0x00000001u; // 8002CA14
  c->lr=0x8002CA1Cu; f_80034C24(c); // 8002CA18
  c->r[4]=R32(c->r[13]+0xFFFF80F8u); // 8002CA1C
  c->r[3]=0u+0x00000000u; // 8002CA20
  cmps(c,0,(int32_t)c->r[4],0); // 8002CA24
  if (crb(c,2)) { goto L_8002CA3C; } // 8002CA28
  c->r[0]=R32(c->r[31]+0x00002800u); // 8002CA2C
  cmpu(c,0,c->r[4],c->r[0]); // 8002CA30
  if (crb(c,2)) { goto L_8002CA3C; } // 8002CA34
  c->r[3]=0u+0x00000001u; // 8002CA38
L_8002CA3C:;
  W32(c->r[31]+0x000027F8u,c->r[3]); // 8002CA3C
  c->r[3]=0u+0x00000000u; // 8002CA40
  W32(c->r[31]+0x00002800u,c->r[4]); // 8002CA44
  c->r[4]=R32(c->r[13]+0xFFFF80FCu); // 8002CA48
  cmps(c,0,(int32_t)c->r[4],0); // 8002CA4C
  if (crb(c,2)) { goto L_8002CA64; } // 8002CA50
  c->r[0]=R32(c->r[31]+0x00002804u); // 8002CA54
  cmpu(c,0,c->r[4],c->r[0]); // 8002CA58
  if (crb(c,2)) { goto L_8002CA64; } // 8002CA5C
  c->r[3]=0u+0x00000001u; // 8002CA60
L_8002CA64:;
  W32(c->r[31]+0x000027FCu,c->r[3]); // 8002CA64
  W32(c->r[31]+0x00002804u,c->r[4]); // 8002CA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CA6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002CA70
  c->lr=c->r[0]; // 8002CA74
  c->r[1]=c->r[1]+0x00000010u; // 8002CA78
  return; // 8002CA7C
}

// fn_8002CA80
void f_8002CA80(Ctx* __restrict c) {
  trace_call(0x8002CA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CA80
  c->r[0]=c->lr; // 8002CA84
  W32(c->r[1]+0x00000044u,c->r[0]); // 8002CA88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8002CA8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8002CA90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8002CA94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8002CA98
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 8002CA9C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 8002CAA0
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[29]=c->ps1[29]=RF32(ea);} // 8002CAA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CAA8
  c->r[31]=c->r[3]|c->r[3]; // 8002CAAC
  c->r[4]=R32(c->r[3]+0x000027B0u); // 8002CAB0
  c->r[0]=R32(c->r[4]+0x000001C4u); // 8002CAB4
  c->r[4]=c->r[4]+0x00000360u; // 8002CAB8
  cmps(c,0,(int32_t)c->r[0],30); // 8002CABC
  if (crb(c,2)) { goto L_8002CAD0; } // 8002CAC0
  c->r[4]=0u+0x00000015u; // 8002CAC4
  c->lr=0x8002CACCu; f_800256B0(c); // 8002CAC8
  goto L_8002CBF4; // 8002CACC
L_8002CAD0:;
  c->r[0]=R8(c->r[4]+0x00000094u); // 8002CAD0
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 8002CAD4
  if (!crb(c,2)) { goto L_8002CAFC; } // 8002CAD8
  c->r[0]=R32(c->r[4]+0x00000084u); // 8002CADC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8002CAE0
  c->r[5]=R32(c->r[4]+c->r[0]); // 8002CAE4
  cmps(c,0,(int32_t)c->r[5],2); // 8002CAE8
  if (crb(c,2)) { goto L_8002CAFC; } // 8002CAEC
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002CAF0
  c->r[0]=rotl(c->r[0],6)&0x00000001u; cr0(c,c->r[0]); // 8002CAF4
  if (crb(c,2)) { goto L_8002CB0C; } // 8002CAF8
L_8002CAFC:;
  c->r[3]=c->r[31]|c->r[31]; // 8002CAFC
  c->r[4]=0u+0x00000014u; // 8002CB00
  c->lr=0x8002CB08u; f_800256B0(c); // 8002CB04
  goto L_8002CBF4; // 8002CB08
L_8002CB0C:;
  cmps(c,0,(int32_t)c->r[5],3); // 8002CB0C
  if (!crb(c,2)) { goto L_8002CBF4; } // 8002CB10
  {uint32_t ea=c->r[4]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002CB14
  {uint32_t ea=c->r[2]+0xFFFF8388u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CB18
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CB1C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8002CB20
  {uint32_t ea=c->r[2]+0xFFFF838Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CB24
  {uint32_t ea=c->r[3]+0x0000283Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8002CB28
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8002CB2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8002CB30
  c->lr=0x8002CB38u; f_800D2864(c); // 8002CB34
  c->r[0]=R32(c->r[31]+0x00002838u); // 8002CB38
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8002CB3C
  cmps(c,0,(int32_t)c->r[0],0); // 8002CB40
  if (crb(c,2)) { goto L_8002CB70; } // 8002CB44
  fcmp(c,0,c->f[31],c->f[30]); // 8002CB48
  if (!crb(c,0)) { goto L_8002CB98; } // 8002CB4C
  {uint32_t ea=c->r[2]+0xFFFF8384u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CB50
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002CB54
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[1]); // 8002CB58
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[1]; // 8002CB5C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002CB60
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8002CB64
  {uint32_t ea=c->r[31]+0x0000283Cu; WF32(ea,c->f[1]);} // 8002CB68
  goto L_8002CB98; // 8002CB6C
L_8002CB70:;
  c->f[30]=-c->f[30]; // 8002CB70
  fcmp(c,0,c->f[31],c->f[30]); // 8002CB74
  if (!crb(c,1)) { goto L_8002CB98; } // 8002CB78
  {uint32_t ea=c->r[2]+0xFFFF8384u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CB7C
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002CB80
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[1]); // 8002CB84
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[1]; // 8002CB88
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002CB8C
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8002CB90
  {uint32_t ea=c->r[31]+0x0000283Cu; WF32(ea,c->f[1]);} // 8002CB94
L_8002CB98:;
  c->r[3]=c->r[31]|c->r[31]; // 8002CB98
  c->lr=0x8002CBA0u; f_80059E88(c); // 8002CB9C
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[30]); // 8002CBA0
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CBA4
  {uint32_t ea=c->r[2]+0xFFFF8380u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CBA8
  c->r[3]=c->r[31]|c->r[31]; // 8002CBAC
  c->f[2]=std::fabs(c->f[2]); // 8002CBB0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8002CBB4
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8002CBB8
  c->lr=0x8002CBC0u; f_8005A5DC(c); // 8002CBBC
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CBC0
  fcmp(c,0,c->f[31],c->f[0]); // 8002CBC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002CBC8
  c->r[3]=c->cr; // 8002CBCC
  fcmp(c,0,c->f[30],c->f[0]); // 8002CBD0
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8002CBD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002CBD8
  c->r[0]=c->cr; // 8002CBDC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 8002CBE0
  c->r[0]=c->r[3]^c->r[0]; cr0(c,c->r[0]); // 8002CBE4
  if (crb(c,2)) { goto L_8002CBF4; } // 8002CBE8
  c->r[3]=c->r[31]|c->r[31]; // 8002CBEC
  c->lr=0x8002CBF4u; f_8005AF7C(c); // 8002CBF0
L_8002CBF4:;
  c->f[1]=c->f[29]; // 8002CBF4
  c->r[3]=c->r[31]|c->r[31]; // 8002CBF8
  c->lr=0x8002CC00u; f_80059EB4(c); // 8002CBFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8002CC00
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8002CC04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8002CC08
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8002CC0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8002CC10
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 8002CC14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 8002CC18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CC1C
  c->lr=c->r[0]; // 8002CC20
  c->r[1]=c->r[1]+0x00000040u; // 8002CC24
  return; // 8002CC28
}

// fn_8002CC2C
void f_8002CC2C(Ctx* __restrict c) {
  trace_call(0x8002CC2Cu);
  return; // 8002CC2C
}

// fn_8002CC30
void f_8002CC30(Ctx* __restrict c) {
  trace_call(0x8002CC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CC30
  c->r[0]=c->lr; // 8002CC34
  c->r[4]=0u+0x00000001u; // 8002CC38
  c->r[5]=0u+0x00000001u; // 8002CC3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002CC40
  c->r[6]=0u+0x00000001u; // 8002CC44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CC48
  c->r[31]=c->r[3]|c->r[3]; // 8002CC4C
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 8002CC50
  c->r[0]=c->r[0]|0x10000000u; // 8002CC54
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002CC58
  c->r[3]=c->r[3]+0x00002414u; // 8002CC5C
  c->lr=0x8002CC64u; f_80034C24(c); // 8002CC60
  c->r[0]=0u+0x00000000u; // 8002CC64
  W32(c->r[31]+0x000027F8u,c->r[0]); // 8002CC68
  W32(c->r[31]+0x00002800u,c->r[0]); // 8002CC6C
  W32(c->r[31]+0x000027FCu,c->r[0]); // 8002CC70
  W32(c->r[31]+0x00002804u,c->r[0]); // 8002CC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002CC7C
  c->lr=c->r[0]; // 8002CC80
  c->r[1]=c->r[1]+0x00000010u; // 8002CC84
  return; // 8002CC88
}

// fn_8002CC8C
void f_8002CC8C(Ctx* __restrict c) {
  trace_call(0x8002CC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CC8C
  c->r[0]=c->lr; // 8002CC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002CC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CC98
  c->r[31]=c->r[3]|c->r[3]; // 8002CC9C
  c->r[4]=R32(c->r[3]+0x000027B0u); // 8002CCA0
  c->r[0]=R32(c->r[4]+0x000001C4u); // 8002CCA4
  c->r[4]=c->r[4]+0x00000360u; // 8002CCA8
  cmps(c,0,(int32_t)c->r[0],30); // 8002CCAC
  if (crb(c,2)) { goto L_8002CCC0; } // 8002CCB0
  c->r[4]=0u+0x00000015u; // 8002CCB4
  c->lr=0x8002CCBCu; f_800256B0(c); // 8002CCB8
  goto L_8002CCF8; // 8002CCBC
L_8002CCC0:;
  c->r[0]=R8(c->r[4]+0x00000094u); // 8002CCC0
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8002CCC4
  if (crb(c,2)) { goto L_8002CCF8; } // 8002CCC8
  c->r[0]=R32(c->r[4]+0x00000084u); // 8002CCCC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8002CCD0
  c->r[0]=R32(c->r[4]+c->r[0]); // 8002CCD4
  cmps(c,0,(int32_t)c->r[0],3); // 8002CCD8
  if (!crb(c,2)) { goto L_8002CCF8; } // 8002CCDC
  c->r[0]=R32(c->r[3]+0x00002838u); // 8002CCE0
  c->r[4]=0u+0x00000013u; // 8002CCE4
  c->r[0]=cntlz(c->r[0]); // 8002CCE8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8002CCEC
  W32(c->r[3]+0x00002838u,c->r[0]); // 8002CCF0
  c->lr=0x8002CCF8u; f_800256B0(c); // 8002CCF4
L_8002CCF8:;
  {uint32_t ea=c->r[2]+0xFFFF8370u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CCF8
  c->r[3]=c->r[31]|c->r[31]; // 8002CCFC
  c->lr=0x8002CD04u; f_80059EB4(c); // 8002CD00
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002CD04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CD08
  c->lr=c->r[0]; // 8002CD0C
  c->r[1]=c->r[1]+0x00000010u; // 8002CD10
  return; // 8002CD14
}

// fn_8002CD18
void f_8002CD18(Ctx* __restrict c) {
  trace_call(0x8002CD18u);
  return; // 8002CD18
}

// fn_8002CD1C
void f_8002CD1C(Ctx* __restrict c) {
  trace_call(0x8002CD1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CD1C
  c->r[0]=c->lr; // 8002CD20
  c->r[5]=0u+0x00000000u; // 8002CD24
  c->r[6]=0u+0x00000001u; // 8002CD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002CD2C
  c->r[0]=0u+0x00000004u; // 8002CD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CD34
  c->r[31]=c->r[3]|c->r[3]; // 8002CD38
  c->r[4]=R32(c->r[3]+0x0000014Cu); // 8002CD3C
  W32(c->r[3]+0x00002390u,c->r[0]); // 8002CD40
  c->r[0]=c->r[4]|0x10000000u; // 8002CD44
  c->r[4]=0u+0x00000003u; // 8002CD48
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8002CD4C
  c->r[3]=c->r[3]+0x00002414u; // 8002CD50
  c->lr=0x8002CD58u; f_80034C24(c); // 8002CD54
  c->r[0]=0u+0x00000000u; // 8002CD58
  W32(c->r[31]+0x000027F8u,c->r[0]); // 8002CD5C
  W32(c->r[31]+0x00002800u,c->r[0]); // 8002CD60
  W32(c->r[31]+0x000027FCu,c->r[0]); // 8002CD64
  W32(c->r[31]+0x00002804u,c->r[0]); // 8002CD68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CD6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002CD70
  c->lr=c->r[0]; // 8002CD74
  c->r[1]=c->r[1]+0x00000010u; // 8002CD78
  return; // 8002CD7C
}

// fn_8002CD80
void f_8002CD80(Ctx* __restrict c) {
  trace_call(0x8002CD80u);
  {uint32_t ea=c->r[2]+0xFFFF8368u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CD80
  f_80059EB4(c); return; // 8002CD84
}

// fn_8002CD88
void f_8002CD88(Ctx* __restrict c) {
  trace_call(0x8002CD88u);
  return; // 8002CD88
}

// fn_8002CD8C
void f_8002CD8C(Ctx* __restrict c) {
  trace_call(0x8002CD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CD8C
  c->r[0]=c->lr; // 8002CD90
  c->r[5]=c->r[13]+0xFFFFA3B8u; // 8002CD94
  c->r[4]=0u+0x0000000Au; // 8002CD98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002CD9C
  c->r[0]=0u+0x00000000u; // 8002CDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CDA4
  c->r[31]=c->r[3]|c->r[3]; // 8002CDA8
  W32(c->r[3]+0x000000B0u,c->r[5]); // 8002CDAC
  W32(c->r[3]+0x000000ACu,c->r[4]); // 8002CDB0
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8002CDB4
  W32(c->r[3]+0x000000A4u,c->r[0]); // 8002CDB8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8002CDBC
  W32(c->r[3]+0x00000024u,c->r[0]); // 8002CDC0
  W32(c->r[3]+0x00000028u,c->r[0]); // 8002CDC4
  c->lr=0x8002CDCCu; f_8002D64C(c); // 8002CDC8
  c->r[3]=c->r[31]|c->r[31]; // 8002CDCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002CDD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002CDD4
  c->lr=c->r[0]; // 8002CDD8
  c->r[1]=c->r[1]+0x00000010u; // 8002CDDC
  return; // 8002CDE0
}

// fn_8002CDE4
void f_8002CDE4(Ctx* __restrict c) {
  trace_call(0x8002CDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002CDE4
  c->r[0]=c->lr; // 8002CDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002CDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002CDF0
  c->r[31]=c->r[3]|c->r[3]; // 8002CDF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002CDF8
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8002CDFC
  W32(c->r[3]+0x00000030u,c->r[5]); // 8002CE00
  c->lr=0x8002CE08u; f_8002DFF8(c); // 8002CE04
  W32(c->r[31]+0x00000034u,c->r[3]); // 8002CE08
  c->r[3]=c->r[31]|c->r[31]; // 8002CE0C
  c->r[4]=R32(c->r[31]+0x00000030u); // 8002CE10
  c->lr=0x8002CE18u; f_8002DFF8(c); // 8002CE14
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8002CE18
  W32(c->r[31]+0x00000038u,c->r[3]); // 8002CE1C
  cmps(c,0,(int32_t)c->r[0],0); // 8002CE20
  if (crb(c,2)) { goto L_8002CE48; } // 8002CE24
  c->r[3]=R32(c->r[31]+0x00000034u); // 8002CE28
  cmps(c,0,(int32_t)c->r[3],0); // 8002CE2C
  if (crb(c,2)) { goto L_8002CE38; } // 8002CE30
  goto L_8002CE3C; // 8002CE34
L_8002CE38:;
  c->r[3]=c->r[0]|c->r[0]; // 8002CE38
L_8002CE3C:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 8002CE3C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8002CE40
  goto L_8002CE50; // 8002CE44
L_8002CE48:;
  c->r[0]=0u+0x00000000u; // 8002CE48
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8002CE4C
L_8002CE50:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 8002CE50
  cmps(c,0,(int32_t)c->r[0],0); // 8002CE54
  if (crb(c,2)) { goto L_8002CE7C; } // 8002CE58
  c->r[3]=R32(c->r[31]+0x00000038u); // 8002CE5C
  cmps(c,0,(int32_t)c->r[3],0); // 8002CE60
  if (crb(c,2)) { goto L_8002CE6C; } // 8002CE64
  goto L_8002CE70; // 8002CE68
L_8002CE6C:;
  c->r[3]=c->r[0]|c->r[0]; // 8002CE6C
L_8002CE70:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 8002CE70
  W32(c->r[31]+0x00000040u,c->r[0]); // 8002CE74
  goto L_8002CE84; // 8002CE78
L_8002CE7C:;
  c->r[0]=0u+0x00000000u; // 8002CE7C
  W32(c->r[31]+0x00000040u,c->r[0]); // 8002CE80
L_8002CE84:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8002CE84
  cmps(c,0,(int32_t)c->r[3],0); // 8002CE88
  if (crb(c,2)) { goto L_8002D244; } // 8002CE8C
  c->r[30]=0u+0x803C0000u; // 8002CE90
  c->r[30]=c->r[30]+0x00002658u; // 8002CE94
  c->r[4]=c->r[30]+0x00000010u; // 8002CE98
  c->lr=0x8002CEA0u; f_8030BE60(c); // 8002CE9C
  c->r[6]=R32(c->r[3]+0x00000018u); // 8002CEA0
  c->r[8]=R32(c->r[30]+0x00000034u); // 8002CEA4
  c->r[5]=R32(c->r[6]+0x00000000u); // 8002CEA8
  c->r[9]=R32(c->r[6]+0x00000004u); // 8002CEAC
  c->r[4]=R32(c->r[5]+0x00000000u); // 8002CEB0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8002CEB4
  c->r[5]=c->r[9]|c->r[9]; // 8002CEB8
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8002CEBC
  c->r[0]=c->r[0]-c->r[4]; // 8002CEC0
  c->r[0]=sraw(c,c->r[0],2); // 8002CEC4
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8002CEC8
  c->r[0]=c->r[4]-c->r[9]; // 8002CECC
  c->ctr=c->r[0]; // 8002CED0
  cmpu(c,0,c->r[9],c->r[4]); // 8002CED4
  if (!crb(c,0)) { goto L_8002CF18; } // 8002CED8
L_8002CEDC:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002CEDC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002CEE0
  c->r[4]=R32(c->r[4]+c->r[7]); // 8002CEE4
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002CEE8
  cmpu(c,0,c->r[8],c->r[0]); // 8002CEEC
  if (!crb(c,2)) { goto L_8002CF0C; } // 8002CEF0
  W32(c->r[6]+0x00000004u,c->r[5]); // 8002CEF4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8002CEF8
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002CEFC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002CF00
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002CF04
  goto L_8002CF6C; // 8002CF08
L_8002CF0C:;
  c->r[7]=c->r[7]+0x00000004u; // 8002CF0C
  c->r[5]=c->r[5]+0x00000001u; // 8002CF10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002CEDC; } // 8002CF14
L_8002CF18:;
  c->r[7]=0u+0x00000000u; // 8002CF18
  c->r[5]=0u+0x00000000u; // 8002CF1C
  c->ctr=c->r[9]; // 8002CF20
  cmpu(c,0,c->r[9],0x00000000u); // 8002CF24
  if (!crb(c,1)) { goto L_8002CF68; } // 8002CF28
L_8002CF2C:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002CF2C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002CF30
  c->r[4]=R32(c->r[4]+c->r[5]); // 8002CF34
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002CF38
  cmpu(c,0,c->r[8],c->r[0]); // 8002CF3C
  if (!crb(c,2)) { goto L_8002CF5C; } // 8002CF40
  W32(c->r[6]+0x00000004u,c->r[7]); // 8002CF44
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8002CF48
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002CF4C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002CF50
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002CF54
  goto L_8002CF6C; // 8002CF58
L_8002CF5C:;
  c->r[5]=c->r[5]+0x00000004u; // 8002CF5C
  c->r[7]=c->r[7]+0x00000001u; // 8002CF60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002CF2C; } // 8002CF64
L_8002CF68:;
  c->r[4]=0u+0x00000000u; // 8002CF68
L_8002CF6C:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 8002CF6C
  cmps(c,0,(int32_t)c->r[5],37); // 8002CF70
  if (!crb(c,1)) { goto L_8002CF8C; } // 8002CF74
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002CF78
  cmpu(c,0,c->r[0],0x00000001u); // 8002CF7C
  if (!crb(c,2)) { goto L_8002CF8C; } // 8002CF80
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8002CF84
  goto L_8002CFB4; // 8002CF88
L_8002CF8C:;
  cmps(c,0,(int32_t)c->r[5],26); // 8002CF8C
  if (crb(c,0)) { goto L_8002CF9C; } // 8002CF90
  cmps(c,0,(int32_t)c->r[5],36); // 8002CF94
  if (!crb(c,2)) { goto L_8002CFB0; } // 8002CF98
L_8002CF9C:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002CF9C
  cmpu(c,0,c->r[0],0x00000001u); // 8002CFA0
  if (!crb(c,2)) { goto L_8002CFB0; } // 8002CFA4
  c->r[4]=c->r[4]+0x00000008u; // 8002CFA8
  goto L_8002CFB4; // 8002CFAC
L_8002CFB0:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8002CFB0
L_8002CFB4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002CFB4
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CFB8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 8002CFBC
  fcmp(c,0,c->f[1],c->f[0]); // 8002CFC0
  if (!crb(c,0)) { goto L_8002CFD0; } // 8002CFC4
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002CFC8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8002CFCC
L_8002CFD0:;
  c->r[7]=R32(c->r[3]+0x00000018u); // 8002CFD0
  c->r[5]=0u+0x803C0000u; // 8002CFD4
  c->r[5]=c->r[5]+0x00002658u; // 8002CFD8
  c->r[6]=R32(c->r[7]+0x00000000u); // 8002CFDC
  c->r[10]=R32(c->r[7]+0x00000004u); // 8002CFE0
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002CFE4
  c->r[0]=R32(c->r[6]+0x00000004u); // 8002CFE8
  c->r[6]=c->r[10]|c->r[10]; // 8002CFEC
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8002CFF0
  c->r[9]=R32(c->r[5]+0x00000038u); // 8002CFF4
  c->r[0]=c->r[0]-c->r[4]; // 8002CFF8
  c->r[0]=sraw(c,c->r[0],2); // 8002CFFC
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8002D000
  c->r[0]=c->r[4]-c->r[10]; // 8002D004
  c->ctr=c->r[0]; // 8002D008
  cmpu(c,0,c->r[10],c->r[4]); // 8002D00C
  if (!crb(c,0)) { goto L_8002D050; } // 8002D010
L_8002D014:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D014
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D018
  c->r[4]=R32(c->r[4]+c->r[8]); // 8002D01C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D020
  cmpu(c,0,c->r[9],c->r[0]); // 8002D024
  if (!crb(c,2)) { goto L_8002D044; } // 8002D028
  W32(c->r[7]+0x00000004u,c->r[6]); // 8002D02C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002D030
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D034
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D038
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D03C
  goto L_8002D0A4; // 8002D040
L_8002D044:;
  c->r[8]=c->r[8]+0x00000004u; // 8002D044
  c->r[6]=c->r[6]+0x00000001u; // 8002D048
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D014; } // 8002D04C
L_8002D050:;
  c->r[6]=0u+0x00000000u; // 8002D050
  c->r[5]=0u+0x00000000u; // 8002D054
  c->ctr=c->r[10]; // 8002D058
  cmpu(c,0,c->r[10],0x00000000u); // 8002D05C
  if (!crb(c,1)) { goto L_8002D0A0; } // 8002D060
L_8002D064:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D064
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D068
  c->r[4]=R32(c->r[4]+c->r[5]); // 8002D06C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D070
  cmpu(c,0,c->r[9],c->r[0]); // 8002D074
  if (!crb(c,2)) { goto L_8002D094; } // 8002D078
  W32(c->r[7]+0x00000004u,c->r[6]); // 8002D07C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002D080
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D084
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D088
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D08C
  goto L_8002D0A4; // 8002D090
L_8002D094:;
  c->r[5]=c->r[5]+0x00000004u; // 8002D094
  c->r[6]=c->r[6]+0x00000001u; // 8002D098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D064; } // 8002D09C
L_8002D0A0:;
  c->r[4]=0u+0x00000000u; // 8002D0A0
L_8002D0A4:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 8002D0A4
  cmps(c,0,(int32_t)c->r[5],37); // 8002D0A8
  if (!crb(c,1)) { goto L_8002D0C4; } // 8002D0AC
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D0B0
  cmpu(c,0,c->r[0],0x00000001u); // 8002D0B4
  if (!crb(c,2)) { goto L_8002D0C4; } // 8002D0B8
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8002D0BC
  goto L_8002D0EC; // 8002D0C0
L_8002D0C4:;
  cmps(c,0,(int32_t)c->r[5],26); // 8002D0C4
  if (crb(c,0)) { goto L_8002D0D4; } // 8002D0C8
  cmps(c,0,(int32_t)c->r[5],36); // 8002D0CC
  if (!crb(c,2)) { goto L_8002D0E8; } // 8002D0D0
L_8002D0D4:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D0D4
  cmpu(c,0,c->r[0],0x00000001u); // 8002D0D8
  if (!crb(c,2)) { goto L_8002D0E8; } // 8002D0DC
  c->r[4]=c->r[4]+0x00000008u; // 8002D0E0
  goto L_8002D0EC; // 8002D0E4
L_8002D0E8:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8002D0E8
L_8002D0EC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D0EC
  c->r[4]=0u+0x803C0000u; // 8002D0F0
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D0F4
  c->r[4]=c->r[4]+0x00002658u; // 8002D0F8
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D0FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8002D100
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002D104
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 8002D108
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[1]);} // 8002D10C
  c->r[5]=R32(c->r[3]+0x00000018u); // 8002D110
  c->r[7]=R32(c->r[4]+0x00000048u); // 8002D114
  c->r[4]=R32(c->r[5]+0x00000000u); // 8002D118
  c->r[8]=R32(c->r[5]+0x00000004u); // 8002D11C
  c->r[3]=R32(c->r[4]+0x00000000u); // 8002D120
  c->r[0]=R32(c->r[4]+0x00000004u); // 8002D124
  c->r[4]=c->r[8]|c->r[8]; // 8002D128
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8002D12C
  c->r[0]=c->r[0]-c->r[3]; // 8002D130
  c->r[0]=sraw(c,c->r[0],2); // 8002D134
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8002D138
  c->r[0]=c->r[3]-c->r[8]; // 8002D13C
  c->ctr=c->r[0]; // 8002D140
  cmpu(c,0,c->r[8],c->r[3]); // 8002D144
  if (!crb(c,0)) { goto L_8002D188; } // 8002D148
L_8002D14C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002D14C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D150
  c->r[3]=R32(c->r[3]+c->r[6]); // 8002D154
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002D158
  cmpu(c,0,c->r[7],c->r[0]); // 8002D15C
  if (!crb(c,2)) { goto L_8002D17C; } // 8002D160
  W32(c->r[5]+0x00000004u,c->r[4]); // 8002D164
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8002D168
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002D16C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D170
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002D174
  goto L_8002D1DC; // 8002D178
L_8002D17C:;
  c->r[6]=c->r[6]+0x00000004u; // 8002D17C
  c->r[4]=c->r[4]+0x00000001u; // 8002D180
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D14C; } // 8002D184
L_8002D188:;
  c->r[6]=0u+0x00000000u; // 8002D188
  c->r[4]=0u+0x00000000u; // 8002D18C
  c->ctr=c->r[8]; // 8002D190
  cmpu(c,0,c->r[8],0x00000000u); // 8002D194
  if (!crb(c,1)) { goto L_8002D1D8; } // 8002D198
L_8002D19C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002D19C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D1A0
  c->r[3]=R32(c->r[3]+c->r[4]); // 8002D1A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002D1A8
  cmpu(c,0,c->r[7],c->r[0]); // 8002D1AC
  if (!crb(c,2)) { goto L_8002D1CC; } // 8002D1B0
  W32(c->r[5]+0x00000004u,c->r[6]); // 8002D1B4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002D1B8
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002D1BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D1C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002D1C4
  goto L_8002D1DC; // 8002D1C8
L_8002D1CC:;
  c->r[4]=c->r[4]+0x00000004u; // 8002D1CC
  c->r[6]=c->r[6]+0x00000001u; // 8002D1D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D19C; } // 8002D1D4
L_8002D1D8:;
  c->r[3]=0u+0x00000000u; // 8002D1D8
L_8002D1DC:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8002D1DC
  cmps(c,0,(int32_t)c->r[4],37); // 8002D1E0
  if (!crb(c,1)) { goto L_8002D1FC; } // 8002D1E4
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002D1E8
  cmpu(c,0,c->r[0],0x00000001u); // 8002D1EC
  if (!crb(c,2)) { goto L_8002D1FC; } // 8002D1F0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8002D1F4
  goto L_8002D224; // 8002D1F8
L_8002D1FC:;
  cmps(c,0,(int32_t)c->r[4],26); // 8002D1FC
  if (crb(c,0)) { goto L_8002D20C; } // 8002D200
  cmps(c,0,(int32_t)c->r[4],36); // 8002D204
  if (!crb(c,2)) { goto L_8002D220; } // 8002D208
L_8002D20C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002D20C
  cmpu(c,0,c->r[0],0x00000001u); // 8002D210
  if (!crb(c,2)) { goto L_8002D220; } // 8002D214
  c->r[3]=c->r[3]+0x00000008u; // 8002D218
  goto L_8002D224; // 8002D21C
L_8002D220:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8002D220
L_8002D224:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D224
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D228
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D22C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 8002D230
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 8002D234
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[2]; // 8002D238
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[3]);} // 8002D23C
  goto L_8002D250; // 8002D240
L_8002D244:;
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D244
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8002D248
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 8002D24C
L_8002D250:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 8002D250
  cmps(c,0,(int32_t)c->r[3],0); // 8002D254
  if (crb(c,2)) { goto L_8002D60C; } // 8002D258
  c->r[30]=0u+0x803C0000u; // 8002D25C
  c->r[30]=c->r[30]+0x00002658u; // 8002D260
  c->r[4]=c->r[30]+0x00000010u; // 8002D264
  c->lr=0x8002D26Cu; f_8030BE60(c); // 8002D268
  c->r[6]=R32(c->r[3]+0x00000018u); // 8002D26C
  c->r[8]=R32(c->r[30]+0x00000048u); // 8002D270
  c->r[5]=R32(c->r[6]+0x00000000u); // 8002D274
  c->r[9]=R32(c->r[6]+0x00000004u); // 8002D278
  c->r[4]=R32(c->r[5]+0x00000000u); // 8002D27C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8002D280
  c->r[5]=c->r[9]|c->r[9]; // 8002D284
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8002D288
  c->r[0]=c->r[0]-c->r[4]; // 8002D28C
  c->r[0]=sraw(c,c->r[0],2); // 8002D290
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8002D294
  c->r[0]=c->r[4]-c->r[9]; // 8002D298
  c->ctr=c->r[0]; // 8002D29C
  cmpu(c,0,c->r[9],c->r[4]); // 8002D2A0
  if (!crb(c,0)) { goto L_8002D2E4; } // 8002D2A4
L_8002D2A8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002D2A8
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D2AC
  c->r[4]=R32(c->r[4]+c->r[7]); // 8002D2B0
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D2B4
  cmpu(c,0,c->r[8],c->r[0]); // 8002D2B8
  if (!crb(c,2)) { goto L_8002D2D8; } // 8002D2BC
  W32(c->r[6]+0x00000004u,c->r[5]); // 8002D2C0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8002D2C4
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002D2C8
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D2CC
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D2D0
  goto L_8002D338; // 8002D2D4
L_8002D2D8:;
  c->r[7]=c->r[7]+0x00000004u; // 8002D2D8
  c->r[5]=c->r[5]+0x00000001u; // 8002D2DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D2A8; } // 8002D2E0
L_8002D2E4:;
  c->r[7]=0u+0x00000000u; // 8002D2E4
  c->r[5]=0u+0x00000000u; // 8002D2E8
  c->ctr=c->r[9]; // 8002D2EC
  cmpu(c,0,c->r[9],0x00000000u); // 8002D2F0
  if (!crb(c,1)) { goto L_8002D334; } // 8002D2F4
L_8002D2F8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002D2F8
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D2FC
  c->r[4]=R32(c->r[4]+c->r[5]); // 8002D300
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D304
  cmpu(c,0,c->r[8],c->r[0]); // 8002D308
  if (!crb(c,2)) { goto L_8002D328; } // 8002D30C
  W32(c->r[6]+0x00000004u,c->r[7]); // 8002D310
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8002D314
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002D318
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D31C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D320
  goto L_8002D338; // 8002D324
L_8002D328:;
  c->r[5]=c->r[5]+0x00000004u; // 8002D328
  c->r[7]=c->r[7]+0x00000001u; // 8002D32C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D2F8; } // 8002D330
L_8002D334:;
  c->r[4]=0u+0x00000000u; // 8002D334
L_8002D338:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 8002D338
  cmps(c,0,(int32_t)c->r[5],37); // 8002D33C
  if (!crb(c,1)) { goto L_8002D358; } // 8002D340
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D344
  cmpu(c,0,c->r[0],0x00000001u); // 8002D348
  if (!crb(c,2)) { goto L_8002D358; } // 8002D34C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8002D350
  goto L_8002D380; // 8002D354
L_8002D358:;
  cmps(c,0,(int32_t)c->r[5],26); // 8002D358
  if (crb(c,0)) { goto L_8002D368; } // 8002D35C
  cmps(c,0,(int32_t)c->r[5],36); // 8002D360
  if (!crb(c,2)) { goto L_8002D37C; } // 8002D364
L_8002D368:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D368
  cmpu(c,0,c->r[0],0x00000001u); // 8002D36C
  if (!crb(c,2)) { goto L_8002D37C; } // 8002D370
  c->r[4]=c->r[4]+0x00000008u; // 8002D374
  goto L_8002D380; // 8002D378
L_8002D37C:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8002D37C
L_8002D380:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D380
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D384
  fcmp(c,0,c->f[1],c->f[0]); // 8002D388
  if (!crb(c,1)) { goto L_8002D398; } // 8002D38C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8002D390
  goto L_8002D618; // 8002D394
L_8002D398:;
  c->r[7]=R32(c->r[3]+0x00000018u); // 8002D398
  c->r[5]=0u+0x803C0000u; // 8002D39C
  c->r[5]=c->r[5]+0x00002658u; // 8002D3A0
  c->r[6]=R32(c->r[7]+0x00000000u); // 8002D3A4
  c->r[10]=R32(c->r[7]+0x00000004u); // 8002D3A8
  c->r[4]=R32(c->r[6]+0x00000000u); // 8002D3AC
  c->r[0]=R32(c->r[6]+0x00000004u); // 8002D3B0
  c->r[6]=c->r[10]|c->r[10]; // 8002D3B4
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8002D3B8
  c->r[9]=R32(c->r[5]+0x00000034u); // 8002D3BC
  c->r[0]=c->r[0]-c->r[4]; // 8002D3C0
  c->r[0]=sraw(c,c->r[0],2); // 8002D3C4
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8002D3C8
  c->r[0]=c->r[4]-c->r[10]; // 8002D3CC
  c->ctr=c->r[0]; // 8002D3D0
  cmpu(c,0,c->r[10],c->r[4]); // 8002D3D4
  if (!crb(c,0)) { goto L_8002D418; } // 8002D3D8
L_8002D3DC:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D3DC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D3E0
  c->r[4]=R32(c->r[4]+c->r[8]); // 8002D3E4
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D3E8
  cmpu(c,0,c->r[9],c->r[0]); // 8002D3EC
  if (!crb(c,2)) { goto L_8002D40C; } // 8002D3F0
  W32(c->r[7]+0x00000004u,c->r[6]); // 8002D3F4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002D3F8
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D3FC
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D400
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D404
  goto L_8002D46C; // 8002D408
L_8002D40C:;
  c->r[8]=c->r[8]+0x00000004u; // 8002D40C
  c->r[6]=c->r[6]+0x00000001u; // 8002D410
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D3DC; } // 8002D414
L_8002D418:;
  c->r[6]=0u+0x00000000u; // 8002D418
  c->r[5]=0u+0x00000000u; // 8002D41C
  c->ctr=c->r[10]; // 8002D420
  cmpu(c,0,c->r[10],0x00000000u); // 8002D424
  if (!crb(c,1)) { goto L_8002D468; } // 8002D428
L_8002D42C:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D42C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D430
  c->r[4]=R32(c->r[4]+c->r[5]); // 8002D434
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002D438
  cmpu(c,0,c->r[9],c->r[0]); // 8002D43C
  if (!crb(c,2)) { goto L_8002D45C; } // 8002D440
  W32(c->r[7]+0x00000004u,c->r[6]); // 8002D444
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002D448
  c->r[4]=R32(c->r[7]+0x00000000u); // 8002D44C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8002D450
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002D454
  goto L_8002D46C; // 8002D458
L_8002D45C:;
  c->r[5]=c->r[5]+0x00000004u; // 8002D45C
  c->r[6]=c->r[6]+0x00000001u; // 8002D460
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D42C; } // 8002D464
L_8002D468:;
  c->r[4]=0u+0x00000000u; // 8002D468
L_8002D46C:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 8002D46C
  cmps(c,0,(int32_t)c->r[5],37); // 8002D470
  if (!crb(c,1)) { goto L_8002D48C; } // 8002D474
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D478
  cmpu(c,0,c->r[0],0x00000001u); // 8002D47C
  if (!crb(c,2)) { goto L_8002D48C; } // 8002D480
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8002D484
  goto L_8002D4B4; // 8002D488
L_8002D48C:;
  cmps(c,0,(int32_t)c->r[5],26); // 8002D48C
  if (crb(c,0)) { goto L_8002D49C; } // 8002D490
  cmps(c,0,(int32_t)c->r[5],36); // 8002D494
  if (!crb(c,2)) { goto L_8002D4B0; } // 8002D498
L_8002D49C:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8002D49C
  cmpu(c,0,c->r[0],0x00000001u); // 8002D4A0
  if (!crb(c,2)) { goto L_8002D4B0; } // 8002D4A4
  c->r[4]=c->r[4]+0x00000008u; // 8002D4A8
  goto L_8002D4B4; // 8002D4AC
L_8002D4B0:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8002D4B0
L_8002D4B4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D4B4
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D4B8
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 8002D4BC
  fcmp(c,0,c->f[1],c->f[0]); // 8002D4C0
  if (!crb(c,0)) { goto L_8002D4D0; } // 8002D4C4
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D4C8
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8002D4CC
L_8002D4D0:;
  c->r[6]=R32(c->r[3]+0x00000018u); // 8002D4D0
  c->r[4]=0u+0x803C0000u; // 8002D4D4
  c->r[4]=c->r[4]+0x00002658u; // 8002D4D8
  c->r[5]=R32(c->r[6]+0x00000000u); // 8002D4DC
  c->r[9]=R32(c->r[6]+0x00000004u); // 8002D4E0
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002D4E4
  c->r[0]=R32(c->r[5]+0x00000004u); // 8002D4E8
  c->r[5]=c->r[9]|c->r[9]; // 8002D4EC
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8002D4F0
  c->r[8]=R32(c->r[4]+0x00000038u); // 8002D4F4
  c->r[0]=c->r[0]-c->r[3]; // 8002D4F8
  c->r[0]=sraw(c,c->r[0],2); // 8002D4FC
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8002D500
  c->r[0]=c->r[3]-c->r[9]; // 8002D504
  c->ctr=c->r[0]; // 8002D508
  cmpu(c,0,c->r[9],c->r[3]); // 8002D50C
  if (!crb(c,0)) { goto L_8002D550; } // 8002D510
L_8002D514:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 8002D514
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D518
  c->r[3]=R32(c->r[3]+c->r[7]); // 8002D51C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002D520
  cmpu(c,0,c->r[8],c->r[0]); // 8002D524
  if (!crb(c,2)) { goto L_8002D544; } // 8002D528
  W32(c->r[6]+0x00000004u,c->r[5]); // 8002D52C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8002D530
  c->r[3]=R32(c->r[6]+0x00000000u); // 8002D534
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D538
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002D53C
  goto L_8002D5A4; // 8002D540
L_8002D544:;
  c->r[7]=c->r[7]+0x00000004u; // 8002D544
  c->r[5]=c->r[5]+0x00000001u; // 8002D548
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D514; } // 8002D54C
L_8002D550:;
  c->r[5]=0u+0x00000000u; // 8002D550
  c->r[4]=0u+0x00000000u; // 8002D554
  c->ctr=c->r[9]; // 8002D558
  cmpu(c,0,c->r[9],0x00000000u); // 8002D55C
  if (!crb(c,1)) { goto L_8002D5A0; } // 8002D560
L_8002D564:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 8002D564
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D568
  c->r[3]=R32(c->r[3]+c->r[4]); // 8002D56C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002D570
  cmpu(c,0,c->r[8],c->r[0]); // 8002D574
  if (!crb(c,2)) { goto L_8002D594; } // 8002D578
  W32(c->r[6]+0x00000004u,c->r[5]); // 8002D57C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8002D580
  c->r[3]=R32(c->r[6]+0x00000000u); // 8002D584
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002D588
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002D58C
  goto L_8002D5A4; // 8002D590
L_8002D594:;
  c->r[4]=c->r[4]+0x00000004u; // 8002D594
  c->r[5]=c->r[5]+0x00000001u; // 8002D598
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002D564; } // 8002D59C
L_8002D5A0:;
  c->r[3]=0u+0x00000000u; // 8002D5A0
L_8002D5A4:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8002D5A4
  cmps(c,0,(int32_t)c->r[4],37); // 8002D5A8
  if (!crb(c,1)) { goto L_8002D5C4; } // 8002D5AC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002D5B0
  cmpu(c,0,c->r[0],0x00000001u); // 8002D5B4
  if (!crb(c,2)) { goto L_8002D5C4; } // 8002D5B8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8002D5BC
  goto L_8002D5EC; // 8002D5C0
L_8002D5C4:;
  cmps(c,0,(int32_t)c->r[4],26); // 8002D5C4
  if (crb(c,0)) { goto L_8002D5D4; } // 8002D5C8
  cmps(c,0,(int32_t)c->r[4],36); // 8002D5CC
  if (!crb(c,2)) { goto L_8002D5E8; } // 8002D5D0
L_8002D5D4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002D5D4
  cmpu(c,0,c->r[0],0x00000001u); // 8002D5D8
  if (!crb(c,2)) { goto L_8002D5E8; } // 8002D5DC
  c->r[3]=c->r[3]+0x00000008u; // 8002D5E0
  goto L_8002D5EC; // 8002D5E4
L_8002D5E8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8002D5E8
L_8002D5EC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D5EC
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D5F0
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D5F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8002D5F8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8002D5FC
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 8002D600
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 8002D604
  goto L_8002D618; // 8002D608
L_8002D60C:;
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D60C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8002D610
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8002D614
L_8002D618:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8002D618
  cmps(c,0,(int32_t)c->r[0],0); // 8002D61C
  if (crb(c,2)) { goto L_8002D634; } // 8002D620
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D624
  c->r[0]=0u+0x00000000u; // 8002D628
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 8002D62C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8002D630
L_8002D634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002D634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002D638
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002D63C
  c->lr=c->r[0]; // 8002D640
  c->r[1]=c->r[1]+0x00000010u; // 8002D644
  return; // 8002D648
}

// fn_8002D64C
void f_8002D64C(Ctx* __restrict c) {
  trace_call(0x8002D64Cu);
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D64C
  c->r[0]=0u+0x00000000u; // 8002D650
  c->r[4]=0u+0x00000001u; // 8002D654
  W32(c->r[3]+0x00000000u,c->r[4]); // 8002D658
  W32(c->r[3]+0x00000004u,c->r[4]); // 8002D65C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8002D660
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8002D664
  W32(c->r[3]+0x00000014u,c->r[0]); // 8002D668
  W32(c->r[3]+0x00000018u,c->r[0]); // 8002D66C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8002D670
  W32(c->r[3]+0x00000020u,c->r[0]); // 8002D674
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 8002D678
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8002D67C
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8002D680
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8002D684
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8002D688
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8002D68C
  W32(c->r[3]+0x00000030u,c->r[0]); // 8002D690
  W32(c->r[3]+0x00000034u,c->r[0]); // 8002D694
  W32(c->r[3]+0x00000038u,c->r[0]); // 8002D698
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8002D69C
  W32(c->r[3]+0x00000040u,c->r[0]); // 8002D6A0
  return; // 8002D6A4
}

// fn_8002D6A8
void f_8002D6A8(Ctx* __restrict c) {
  trace_call(0x8002D6A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002D6A8
  c->r[12]=c->r[1]|c->r[1]; // 8002D6AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFF50u,1); // 8002D6B0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002D6B4
  c->r[0]=c->lr; // 8002D6B8
  c->r[11]=c->r[12]|c->r[12]; // 8002D6BC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8002D6C0
  c->lr=0x8002D6C8u; f_800C2E48(c); // 8002D6C4
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8002D6C8
  c->r[28]=c->r[3]|c->r[3]; // 8002D6CC
  cmps(c,0,(int32_t)c->r[0],0); // 8002D6D0
  if (crb(c,2)) { goto L_8002DD10; } // 8002D6D4
  c->r[0]=R32(c->r[3]+0x00000020u); // 8002D6D8
  c->r[5]=0u+0x00000000u; // 8002D6DC
  c->r[26]=R32(c->r[3]+0x00000004u); // 8002D6E0
  c->r[4]=0u+0x00000001u; // 8002D6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8002D6E8
  W32(c->r[3]+0x00000008u,c->r[4]); // 8002D6EC
  W32(c->r[3]+0x00000004u,c->r[5]); // 8002D6F0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8002D6F4
  if (crb(c,2)) { goto L_8002D704; } // 8002D6F8
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D6FC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8002D700
L_8002D704:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 8002D704
  cmps(c,0,(int32_t)c->r[0],0); // 8002D708
  if (!crb(c,2)) { goto L_8002D9AC; } // 8002D70C
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D710
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D714
  fcmp(c,0,c->f[1],c->f[0]); // 8002D718
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002D71C
  if (!crb(c,2)) { goto L_8002D72C; } // 8002D720
  c->r[0]=0u+0x00000001u; // 8002D724
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8002D728
L_8002D72C:;
  c->r[29]=R32(c->r[3]+0x0000003Cu); // 8002D72C
  c->r[4]=0u+0x00000002u; // 8002D730
  c->r[3]=0u+0x00000001u; // 8002D734
  W32(c->r[1]+0x00000064u,c->r[4]); // 8002D738
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8002D73C
  c->r[5]=c->r[29]+0x0000001Cu; // 8002D740
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002D744
  W32(c->r[1]+0x00000060u,c->r[5]); // 8002D748
  c->r[0]=c->r[3]&c->r[0]; // 8002D74C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002D750
  W32(c->r[1]+0x00000028u,c->r[5]); // 8002D754
  cmpu(c,0,c->r[0],0x00000001u); // 8002D758
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8002D75C
  W32(c->r[1]+0x00000068u,c->r[5]); // 8002D760
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8002D764
  if (!crb(c,2)) { goto L_8002D774; } // 8002D768
  c->r[3]=c->r[29]|c->r[29]; // 8002D76C
  c->lr=0x8002D774u; f_8034007C(c); // 8002D770
L_8002D774:;
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D774
  cmps(c,0,(int32_t)c->r[26],0); // 8002D778
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 8002D77C
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D780
  {uint32_t ea=c->r[28]+0x00000054u; WF32(ea,c->f[0]);} // 8002D784
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D788
  {uint32_t ea=c->r[28]+0x00000058u; WF32(ea,c->f[0]);} // 8002D78C
  if (crb(c,2)) { goto L_8002DD10; } // 8002D790
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 8002D794
  c->r[3]=0u+0x00000003u; // 8002D798
  c->r[5]=0u+0x00000001u; // 8002D79C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8002D7A0
  c->r[29]=R32(c->r[4]+0x00000030u); // 8002D7A4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 8002D7A8
  W32(c->r[1]+0x00000024u,c->r[3]); // 8002D7AC
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 8002D7B0
  c->r[6]=c->r[29]+0x0000001Cu; // 8002D7B4
  W32(c->r[1]+0x00000048u,c->r[6]); // 8002D7B8
  c->r[0]=c->r[0]&c->r[4]; // 8002D7BC
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 8002D7C0
  W32(c->r[1]+0x00000020u,c->r[6]); // 8002D7C4
  cmpu(c,0,c->r[0],0x00000001u); // 8002D7C8
  W32(c->r[1]+0x00000030u,c->r[6]); // 8002D7CC
  W32(c->r[1]+0x00000034u,c->r[3]); // 8002D7D0
  if (!crb(c,2)) { goto L_8002D958; } // 8002D7D4
  c->r[3]=0u+0x00000002u; // 8002D7D8
  W32(c->r[1]+0x00000050u,c->r[6]); // 8002D7DC
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 8002D7E0
  c->r[0]=c->r[0]&c->r[4]; // 8002D7E4
  W32(c->r[1]+0x00000054u,c->r[3]); // 8002D7E8
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 8002D7EC
  cmpu(c,0,c->r[0],0x00000001u); // 8002D7F0
  W32(c->r[1]+0x00000018u,c->r[6]); // 8002D7F4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8002D7F8
  W32(c->r[1]+0x00000038u,c->r[6]); // 8002D7FC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8002D800
  if (!crb(c,2)) { goto L_8002D810; } // 8002D804
  c->r[3]=c->r[29]|c->r[29]; // 8002D808
  c->lr=0x8002D810u; f_8034007C(c); // 8002D80C
L_8002D810:;
  {uint32_t ea=c->r[2]+0xFFFF839Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D810
  c->r[3]=0u+0x00000003u; // 8002D814
  {uint32_t ea=c->r[29]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002D818
  c->r[4]=c->r[29]+0x0000001Cu; // 8002D81C
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D820
  c->r[0]=0u+0x00000001u; // 8002D824
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[5]); // 8002D828
  {uint32_t ea=c->r[29]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D82C
  c->f[12]=c->ps1[12]=S(c->f[2]*c->f[0]); // 8002D830
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8002D834
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[1]); // 8002D838
  {uint32_t ea=c->r[2]+0xFFFF83A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002D83C
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 8002D840
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8002D844
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[0]); // 8002D848
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 8002D84C
  c->f[9]=c->ps1[9]=S(c->f[13]*c->f[1]); // 8002D850
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[3]); // 8002D854
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[2]); // 8002D858
  W32(c->r[1]+0x00000014u,c->r[3]); // 8002D85C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[1]); // 8002D860
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[3]); // 8002D864
  W32(c->r[1]+0x00000044u,c->r[3]); // 8002D868
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[1]); // 8002D86C
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 8002D870
  W32(c->r[1]+0x00000058u,c->r[4]); // 8002D874
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[2]); // 8002D878
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[1]);} // 8002D87C
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[10]); // 8002D880
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[11]); // 8002D884
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[2]);} // 8002D888
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[10]); // 8002D88C
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[3]); // 8002D890
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 8002D894
  c->f[5]=c->ps1[5]=S(c->f[12]*c->f[5]); // 8002D898
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 8002D89C
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[2]);} // 8002D8A0
  c->f[2]=c->ps1[2]=S(c->f[7]-c->f[11]); // 8002D8A4
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[6]); // 8002D8A8
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 8002D8AC
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[8]); // 8002D8B0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[8]); // 8002D8B4
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[3]);} // 8002D8B8
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 8002D8BC
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[2]);} // 8002D8C0
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 8002D8C4
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[0]);} // 8002D8C8
  {uint32_t ea=c->r[29]+0x00000080u; psq_load(c,3,ea,0,0);} // 8002D8CC
  {uint32_t ea=c->r[29]+0x00000070u; psq_load(c,1,ea,0,0);} // 8002D8D0
  {uint32_t ea=c->r[29]+0x00000088u; psq_load(c,2,ea,1,0);} // 8002D8D4
  {uint32_t ea=c->r[29]+0x00000078u; psq_load(c,0,ea,1,0);} // 8002D8D8
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8002D8DC
  W32(c->r[1]+0x00000010u,c->r[4]); // 8002D8E0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002D8E4
  {uint32_t ea=c->r[29]+0x00000080u; psq_store(c,1,ea,0,0);} // 8002D8E8
  {uint32_t ea=c->r[29]+0x00000088u; psq_store(c,0,ea,1,0);} // 8002D8EC
  {uint32_t ea=c->r[29]+0x00000090u; psq_load(c,3,ea,0,0);} // 8002D8F0
  {uint32_t ea=c->r[29]+0x00000070u; psq_load(c,1,ea,0,0);} // 8002D8F4
  {uint32_t ea=c->r[29]+0x00000098u; psq_load(c,2,ea,1,0);} // 8002D8F8
  {uint32_t ea=c->r[29]+0x00000078u; psq_load(c,0,ea,1,0);} // 8002D8FC
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8002D900
  W32(c->r[1]+0x00000040u,c->r[4]); // 8002D904
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002D908
  {uint32_t ea=c->r[29]+0x00000090u; psq_store(c,1,ea,0,0);} // 8002D90C
  {uint32_t ea=c->r[29]+0x00000098u; psq_store(c,0,ea,1,0);} // 8002D910
  {uint32_t ea=c->r[29]+0x000000A0u; psq_load(c,3,ea,0,0);} // 8002D914
  {uint32_t ea=c->r[29]+0x00000070u; psq_load(c,0,ea,0,0);} // 8002D918
  {uint32_t ea=c->r[29]+0x000000A8u; psq_load(c,2,ea,1,0);} // 8002D91C
  {uint32_t ea=c->r[29]+0x00000078u; psq_load(c,1,ea,1,0);} // 8002D920
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002D924
  {uint32_t ea=c->r[29]+0x000000A0u; psq_store(c,0,ea,0,0);} // 8002D928
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8002D92C
  {uint32_t ea=c->r[29]+0x000000A8u; psq_store(c,0,ea,1,0);} // 8002D930
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D934
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 8002D938
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D93C
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 8002D940
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D944
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[0]);} // 8002D948
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8002D94C
  c->r[0]=c->r[3]&~c->r[0]; // 8002D950
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8002D954
L_8002D958:;
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D958
  c->r[4]=c->r[1]+0x00000070u; // 8002D95C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8002D960
  c->r[3]=c->r[1]+0x00000080u; // 8002D964
  {uint32_t ea=c->r[29]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D968
  {uint32_t ea=c->r[29]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D96C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8002D970
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8002D974
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 8002D978
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 8002D97C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002D980
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 8002D984
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 8002D988
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002D98C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 8002D990
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002D994
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002D998
  {uint32_t ea=c->r[28]+0x00000060u; WF32(ea,c->f[2]);} // 8002D99C
  {uint32_t ea=c->r[28]+0x00000064u; WF32(ea,c->f[1]);} // 8002D9A0
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[0]);} // 8002D9A4
  goto L_8002DD10; // 8002D9A8
L_8002D9AC:;
  c->r[0]=R32(c->r[3]+0x00000034u); // 8002D9AC
  c->r[4]=0u+0x00000001u; // 8002D9B0
  W32(c->r[3]+0x00000010u,c->r[4]); // 8002D9B4
  cmps(c,0,(int32_t)c->r[0],0); // 8002D9B8
  if (crb(c,2)) { goto L_8002DCF0; } // 8002D9BC
  c->r[0]=R32(c->r[3]+0x00000038u); // 8002D9C0
  cmps(c,0,(int32_t)c->r[0],0); // 8002D9C4
  if (crb(c,2)) { goto L_8002DCF0; } // 8002D9C8
  c->r[4]=R32(c->r[3]+0x000000A0u); // 8002D9CC
  c->r[31]=0u+0x00000000u; // 8002D9D0
  c->r[6]=R32(c->r[3]+0x000000A0u); // 8002D9D4
  W32(c->r[3]+0x000000A4u,c->r[4]); // 8002D9D8
  c->r[5]=c->r[4]-c->r[6]; // 8002D9DC
  c->r[0]=sraw(c,c->r[5],2); // 8002D9E0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8002D9E4
  cmpu(c,0,c->r[0],0x00000000u); // 8002D9E8
  if (!crb(c,0)) { goto L_8002DBB4; } // 8002D9EC
  c->r[0]=sraw(c,c->r[5],2); // 8002D9F0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8002D9F4
  c->r[29]=addc(c,~c->r[0],0x00000000u,1); // 8002D9F8
  cmps(c,0,(int32_t)c->r[29],0); // 8002D9FC
  if (crb(c,2)) { goto L_8002DC08; } // 8002DA00
  cmps(c,0,(int32_t)c->r[6],0); // 8002DA04
  c->r[0]=sraw(c,c->r[5],2); // 8002DA08
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8002DA0C
  if (!crb(c,2)) { goto L_8002DA1C; } // 8002DA10
  c->r[6]=0u+0x00000000u; // 8002DA14
  goto L_8002DA2C; // 8002DA18
L_8002DA1C:;
  c->r[0]=R32(c->r[3]+0x000000A8u); // 8002DA1C
  c->r[0]=c->r[0]-c->r[6]; // 8002DA20
  c->r[0]=sraw(c,c->r[0],2); // 8002DA24
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 8002DA28
L_8002DA2C:;
  c->r[0]=c->r[29]+c->r[5]; // 8002DA2C
  cmpu(c,0,c->r[6],c->r[0]); // 8002DA30
  if (!crb(c,0)) { goto L_8002DB00; } // 8002DA34
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8002DA38
  c->r[5]=R32(c->r[3]+0x000000A0u); // 8002DA3C
  c->r[4]=c->r[4]-c->r[0]; // 8002DA40
  c->r[0]=R32(c->r[3]+0x000000A4u); // 8002DA44
  c->r[6]=sraw(c,c->r[4],2); // 8002DA48
  c->r[4]=R32(c->r[3]+0x000000ACu); // 8002DA4C
  c->r[3]=R32(c->r[3]+0x000000B0u); // 8002DA50
  c->r[27]=addc(c,c->r[6],0,c->xer_ca); // 8002DA54
  c->r[0]=c->r[0]-c->r[5]; // 8002DA58
  c->r[0]=sraw(c,c->r[0],2); // 8002DA5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002DA60
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8002DA64
  c->r[0]=c->r[29]+c->r[0]; // 8002DA68
  c->r[12]=R32(c->r[12]+0x00000008u); // 8002DA6C
  c->r[26]=c->r[4]+c->r[0]; // 8002DA70
  c->r[4]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8002DA74
  c->ctr=c->r[12]; // 8002DA78
  if (true) { c->lr=0x8002DA80u; dispatch(c,c->ctr); } // 8002DA7C
  c->r[4]=R32(c->r[28]+0x000000A4u); // 8002DA80
  c->r[30]=c->r[3]|c->r[3]; // 8002DA84
  c->r[5]=R32(c->r[28]+0x000000A0u); // 8002DA88
  goto L_8002DAA0; // 8002DA8C
L_8002DA90:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8002DA90
  c->r[5]=c->r[5]+0x00000004u; // 8002DA94
  W32(c->r[3]+0x00000000u,c->r[0]); // 8002DA98
  c->r[3]=c->r[3]+0x00000004u; // 8002DA9C
L_8002DAA0:;
  cmpu(c,0,c->r[5],c->r[4]); // 8002DAA0
  if (!crb(c,2)) { IRQCHK(c); goto L_8002DA90; } // 8002DAA4
  c->r[4]=R32(c->r[28]+0x000000A0u); // 8002DAA8
  cmps(c,0,(int32_t)c->r[4],0); // 8002DAAC
  if (crb(c,2)) { goto L_8002DAC8; } // 8002DAB0
  c->r[3]=R32(c->r[28]+0x000000B0u); // 8002DAB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002DAB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002DABC
  c->ctr=c->r[12]; // 8002DAC0
  if (true) { c->lr=0x8002DAC8u; dispatch(c,c->ctr); } // 8002DAC4
L_8002DAC8:;
  c->r[4]=R32(c->r[28]+0x000000A0u); // 8002DAC8
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8002DACC
  c->r[3]=R32(c->r[28]+0x000000A4u); // 8002DAD0
  c->r[5]=c->r[30]+c->r[0]; // 8002DAD4
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8002DAD8
  W32(c->r[28]+0x000000A8u,c->r[5]); // 8002DADC
  c->r[3]=c->r[3]-c->r[4]; // 8002DAE0
  c->r[3]=sraw(c,c->r[3],2); // 8002DAE4
  c->r[4]=c->r[30]+c->r[0]; // 8002DAE8
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8002DAEC
  W32(c->r[28]+0x000000A0u,c->r[30]); // 8002DAF0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8002DAF4
  c->r[0]=c->r[30]+c->r[0]; // 8002DAF8
  W32(c->r[28]+0x000000A4u,c->r[0]); // 8002DAFC
L_8002DB00:;
  c->r[7]=R32(c->r[28]+0x000000A4u); // 8002DB00
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8002DB04
  c->r[5]=c->r[4]+c->r[0]; // 8002DB08
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 8002DB0C
  c->r[0]=c->r[7]-c->r[4]; // 8002DB10
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 8002DB14
  c->r[0]=sraw(c,c->r[0],2); // 8002DB18
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8002DB1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8002DB20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8002DB24
  c->r[3]=c->r[5]+c->r[0]; // 8002DB28
  goto L_8002DB40; // 8002DB2C
L_8002DB30:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 8002DB30
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 8002DB34
  W32(c->r[3]+0x00000000u,c->r[0]); // 8002DB38
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8002DB3C
L_8002DB40:;
  cmpu(c,0,c->r[6],c->r[7]); // 8002DB40
  if (!crb(c,2)) { IRQCHK(c); goto L_8002DB30; } // 8002DB44
  cmps(c,0,(int32_t)c->r[29],0); // 8002DB48
  c->r[3]=c->r[29]|c->r[29]; // 8002DB4C
  if (crb(c,2)) { goto L_8002DBA0; } // 8002DB50
  c->r[0]=rotl(c->r[29],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8002DB54
  c->ctr=c->r[0]; // 8002DB58
  if (crb(c,2)) { goto L_8002DB90; } // 8002DB5C
L_8002DB60:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 8002DB60
  W32(c->r[4]+0x00000004u,c->r[31]); // 8002DB64
  W32(c->r[4]+0x00000008u,c->r[31]); // 8002DB68
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 8002DB6C
  W32(c->r[4]+0x00000010u,c->r[31]); // 8002DB70
  W32(c->r[4]+0x00000014u,c->r[31]); // 8002DB74
  W32(c->r[4]+0x00000018u,c->r[31]); // 8002DB78
  W32(c->r[4]+0x0000001Cu,c->r[31]); // 8002DB7C
  c->r[4]=c->r[4]+0x00000020u; // 8002DB80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002DB60; } // 8002DB84
  c->r[3]=c->r[29]&0x00000007u; cr0(c,c->r[3]); // 8002DB88
  if (crb(c,2)) { goto L_8002DBA0; } // 8002DB8C
L_8002DB90:;
  c->ctr=c->r[3]; // 8002DB90
L_8002DB94:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 8002DB94
  c->r[4]=c->r[4]+0x00000004u; // 8002DB98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002DB94; } // 8002DB9C
L_8002DBA0:;
  c->r[3]=R32(c->r[28]+0x000000A4u); // 8002DBA0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8002DBA4
  c->r[0]=c->r[3]+c->r[0]; // 8002DBA8
  W32(c->r[28]+0x000000A4u,c->r[0]); // 8002DBAC
  goto L_8002DC08; // 8002DBB0
L_8002DBB4:;
  c->r[0]=sraw(c,c->r[5],2); // 8002DBB4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 8002DBB8
  if (crb(c,2)) { goto L_8002DC08; } // 8002DBBC
  cmpu(c,0,c->r[4],c->r[4]); // 8002DBC0
  if (!crb(c,0)) { goto L_8002DBEC; } // 8002DBC4
  c->r[6]=c->r[4]|c->r[4]; // 8002DBC8
  c->r[5]=c->r[4]|c->r[4]; // 8002DBCC
  goto L_8002DBE4; // 8002DBD0
L_8002DBD4:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8002DBD4
  c->r[5]=c->r[5]+0x00000004u; // 8002DBD8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8002DBDC
  c->r[6]=c->r[6]+0x00000004u; // 8002DBE0
L_8002DBE4:;
  cmpu(c,0,c->r[5],c->r[4]); // 8002DBE4
  if (!crb(c,2)) { IRQCHK(c); goto L_8002DBD4; } // 8002DBE8
L_8002DBEC:;
  c->r[4]=c->r[4]-c->r[4]; // 8002DBEC
  c->r[0]=R32(c->r[3]+0x000000A4u); // 8002DBF0
  c->r[4]=sraw(c,c->r[4],2); // 8002DBF4
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 8002DBF8
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8002DBFC
  c->r[0]=c->r[0]-c->r[4]; // 8002DC00
  W32(c->r[3]+0x000000A4u,c->r[0]); // 8002DC04
L_8002DC08:;
  c->r[4]=R32(c->r[28]+0x000000A0u); // 8002DC08
  c->r[0]=R32(c->r[28]+0x000000A4u); // 8002DC0C
  cmpu(c,0,c->r[4],c->r[0]); // 8002DC10
  if (!crb(c,2)) { goto L_8002DC44; } // 8002DC14
  cmps(c,0,(int32_t)c->r[4],0); // 8002DC18
  if (crb(c,2)) { goto L_8002DC34; } // 8002DC1C
  c->r[3]=R32(c->r[28]+0x000000B0u); // 8002DC20
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002DC24
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002DC28
  c->ctr=c->r[12]; // 8002DC2C
  if (true) { c->lr=0x8002DC34u; dispatch(c,c->ctr); } // 8002DC30
L_8002DC34:;
  c->r[0]=0u+0x00000000u; // 8002DC34
  W32(c->r[28]+0x000000A0u,c->r[0]); // 8002DC38
  W32(c->r[28]+0x000000A4u,c->r[0]); // 8002DC3C
  W32(c->r[28]+0x000000A8u,c->r[0]); // 8002DC40
L_8002DC44:;
  c->r[3]=R32(c->r[28]+0x000000A8u); // 8002DC44
  c->r[0]=R32(c->r[28]+0x000000A4u); // 8002DC48
  cmpu(c,0,c->r[3],c->r[0]); // 8002DC4C
  if (!crb(c,1)) { goto L_8002DCA4; } // 8002DC50
  c->r[4]=R32(c->r[28]+0x000000A0u); // 8002DC54
  c->r[3]=R32(c->r[28]+0x000000B0u); // 8002DC58
  c->r[6]=c->r[0]-c->r[4]; // 8002DC5C
  c->r[5]=R32(c->r[28]+0x000000A0u); // 8002DC60
  c->r[0]=R32(c->r[28]+0x000000A4u); // 8002DC64
  c->r[6]=sraw(c,c->r[6],2); // 8002DC68
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002DC6C
  c->r[26]=addc(c,c->r[6],0,c->xer_ca); // 8002DC70
  c->r[0]=c->r[0]-c->r[5]; // 8002DC74
  c->r[0]=sraw(c,c->r[0],2); // 8002DC78
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8002DC7C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8002DC80
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8002DC84
  c->ctr=c->r[12]; // 8002DC88
  if (true) { c->lr=0x8002DC90u; dispatch(c,c->ctr); } // 8002DC8C
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8002DC90
  W32(c->r[28]+0x000000A0u,c->r[3]); // 8002DC94
  c->r[0]=c->r[3]+c->r[0]; // 8002DC98
  W32(c->r[28]+0x000000A4u,c->r[0]); // 8002DC9C
  W32(c->r[28]+0x000000A8u,c->r[0]); // 8002DCA0
L_8002DCA4:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8002DCA4
  c->r[6]=c->r[28]+0x000000A0u; // 8002DCA8
  c->r[4]=R32(c->r[28]+0x00000034u); // 8002DCAC
  c->r[7]=0u+0x00000000u; // 8002DCB0
  c->r[5]=R32(c->r[28]+0x00000038u); // 8002DCB4
  c->r[8]=0u+0x00000000u; // 8002DCB8
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002DCBC
  c->lr=0x8002DCC4u; f_8033C020(c); // 8002DCC0
  c->r[3]=R32(c->r[28]+0x000000A0u); // 8002DCC4
  c->r[0]=R32(c->r[28]+0x000000A4u); // 8002DCC8
  {uint32_t ea=c->r[28]+0x00000088u; WF32(ea,c->f[1]);} // 8002DCCC
  c->r[0]=c->r[0]-c->r[3]; // 8002DCD0
  c->r[0]=sraw(c,c->r[0],2); // 8002DCD4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8002DCD8
  c->r[0]=cntlz(c->r[0]); // 8002DCDC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8002DCE0
  if (!crb(c,2)) { goto L_8002DCF0; } // 8002DCE4
  c->r[0]=0u+0x00000000u; // 8002DCE8
  W32(c->r[28]+0x00000010u,c->r[0]); // 8002DCEC
L_8002DCF0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8002DCF0
  cmps(c,0,(int32_t)c->r[0],0); // 8002DCF4
  if (crb(c,2)) { goto L_8002DD08; } // 8002DCF8
  c->r[3]=c->r[28]|c->r[28]; // 8002DCFC
  c->lr=0x8002DD04u; f_8002E36C(c); // 8002DD00
  goto L_8002DD10; // 8002DD04
L_8002DD08:;
  c->r[3]=c->r[28]|c->r[28]; // 8002DD08
  c->lr=0x8002DD10u; f_8002E71C(c); // 8002DD0C
L_8002DD10:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002DD10
  c->r[11]=c->r[10]|c->r[10]; // 8002DD14
  c->lr=0x8002DD1Cu; f_800C2E94(c); // 8002DD18
  c->r[0]=R32(c->r[10]+0x00000004u); // 8002DD1C
  c->lr=c->r[0]; // 8002DD20
  c->r[1]=c->r[10]|c->r[10]; // 8002DD24
  return; // 8002DD28
}

// fn_8002DD2C
void f_8002DD2C(Ctx* __restrict c) {
  trace_call(0x8002DD2Cu);
  c->r[4]=0u+0x00000000u; // 8002DD2C
  c->r[0]=0u+0x00000001u; // 8002DD30
  W32(c->r[3]+0x00000008u,c->r[4]); // 8002DD34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8002DD38
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8002DD3C
  return; // 8002DD40
}

// fn_8002DD44
void f_8002DD44(Ctx* __restrict c) {
  trace_call(0x8002DD44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002DD44
  c->r[0]=c->lr; // 8002DD48
  W32(c->r[1]+0x00000044u,c->r[0]); // 8002DD4C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8002DD50
  c->r[31]=c->r[3]|c->r[3]; // 8002DD54
  W32(c->r[1]+0x00000038u,c->r[30]); // 8002DD58
  c->r[0]=R32(c->r[3]+0x00000008u); // 8002DD5C
  cmps(c,0,(int32_t)c->r[0],0); // 8002DD60
  if (crb(c,2)) { goto L_8002DEE8; } // 8002DD64
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8002DD68
  cmps(c,0,(int32_t)c->r[0],0); // 8002DD6C
  if (crb(c,2)) { goto L_8002DE38; } // 8002DD70
  c->r[0]=R32(c->r[3]+0x00000030u); // 8002DD74
  cmps(c,0,(int32_t)c->r[0],0); // 8002DD78
  if (crb(c,2)) { goto L_8002DDDC; } // 8002DD7C
  c->r[30]=R32(c->r[3]+0x00000040u); // 8002DD80
  c->r[4]=0u+0x00000002u; // 8002DD84
  c->r[3]=0u+0x00000001u; // 8002DD88
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8002DD8C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002DD90
  c->r[5]=c->r[30]+0x0000001Cu; // 8002DD94
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002DD98
  W32(c->r[1]+0x00000028u,c->r[5]); // 8002DD9C
  c->r[0]=c->r[3]&c->r[0]; // 8002DDA0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002DDA4
  W32(c->r[1]+0x00000030u,c->r[5]); // 8002DDA8
  cmpu(c,0,c->r[0],0x00000001u); // 8002DDAC
  W32(c->r[1]+0x00000034u,c->r[4]); // 8002DDB0
  if (!crb(c,2)) { goto L_8002DDC0; } // 8002DDB4
  c->r[3]=c->r[30]|c->r[30]; // 8002DDB8
  c->lr=0x8002DDC0u; f_8034007C(c); // 8002DDBC
L_8002DDC0:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DDC0
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8002DDC4
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DDC8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8002DDCC
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DDD0
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8002DDD4
  goto L_8002DEE8; // 8002DDD8
L_8002DDDC:;
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 8002DDDC
  c->r[4]=0u+0x00000002u; // 8002DDE0
  c->r[3]=0u+0x00000001u; // 8002DDE4
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8002DDE8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002DDEC
  c->r[5]=c->r[30]+0x0000001Cu; // 8002DDF0
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002DDF4
  W32(c->r[1]+0x00000018u,c->r[5]); // 8002DDF8
  c->r[0]=c->r[3]&c->r[0]; // 8002DDFC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002DE00
  W32(c->r[1]+0x00000020u,c->r[5]); // 8002DE04
  cmpu(c,0,c->r[0],0x00000001u); // 8002DE08
  W32(c->r[1]+0x00000024u,c->r[4]); // 8002DE0C
  if (!crb(c,2)) { goto L_8002DE1C; } // 8002DE10
  c->r[3]=c->r[30]|c->r[30]; // 8002DE14
  c->lr=0x8002DE1Cu; f_8034007C(c); // 8002DE18
L_8002DE1C:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DE1C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8002DE20
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DE24
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8002DE28
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DE2C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8002DE30
  goto L_8002DEE8; // 8002DE34
L_8002DE38:;
  c->lr=0x8002DE3Cu; f_8002E214(c); // 8002DE38
  c->r[0]=R32(c->r[31]+0x00000030u); // 8002DE3C
  cmps(c,0,(int32_t)c->r[0],0); // 8002DE40
  if (!crb(c,2)) { goto L_8002DEC0; } // 8002DE44
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002DE48
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DE4C
  fcmp(c,0,c->f[1],c->f[0]); // 8002DE50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8002DE54
  if (!crb(c,2)) { goto L_8002DE64; } // 8002DE58
  c->r[0]=0u+0x00000001u; // 8002DE5C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8002DE60
L_8002DE64:;
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 8002DE64
  c->r[4]=0u+0x00000002u; // 8002DE68
  c->r[3]=0u+0x00000001u; // 8002DE6C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8002DE70
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002DE74
  c->r[5]=c->r[30]+0x0000001Cu; // 8002DE78
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002DE7C
  W32(c->r[1]+0x00000008u,c->r[5]); // 8002DE80
  c->r[0]=c->r[3]&c->r[0]; // 8002DE84
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002DE88
  W32(c->r[1]+0x00000010u,c->r[5]); // 8002DE8C
  cmpu(c,0,c->r[0],0x00000001u); // 8002DE90
  W32(c->r[1]+0x00000014u,c->r[4]); // 8002DE94
  if (!crb(c,2)) { goto L_8002DEA4; } // 8002DE98
  c->r[3]=c->r[30]|c->r[30]; // 8002DE9C
  c->lr=0x8002DEA4u; f_8034007C(c); // 8002DEA0
L_8002DEA4:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DEA4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8002DEA8
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DEAC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8002DEB0
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DEB4
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8002DEB8
  goto L_8002DEE8; // 8002DEBC
L_8002DEC0:;
  c->r[3]=c->r[31]|c->r[31]; // 8002DEC0
  c->lr=0x8002DEC8u; f_8002E254(c); // 8002DEC4
  c->r[0]=R32(c->r[31]+0x00000010u); // 8002DEC8
  cmps(c,0,(int32_t)c->r[0],0); // 8002DECC
  if (crb(c,2)) { goto L_8002DEE0; } // 8002DED0
  c->r[3]=c->r[31]|c->r[31]; // 8002DED4
  c->lr=0x8002DEDCu; f_8002E578(c); // 8002DED8
  goto L_8002DEE8; // 8002DEDC
L_8002DEE0:;
  c->r[3]=c->r[31]|c->r[31]; // 8002DEE0
  c->lr=0x8002DEE8u; f_8002E7A8(c); // 8002DEE4
L_8002DEE8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8002DEE8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8002DEEC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8002DEF0
  c->lr=c->r[0]; // 8002DEF4
  c->r[1]=c->r[1]+0x00000040u; // 8002DEF8
  return; // 8002DEFC
}

// fn_8002DF00
void f_8002DF00(Ctx* __restrict c) {
  trace_call(0x8002DF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002DF00
  c->r[0]=c->lr; // 8002DF04
  W32(c->r[1]+0x00000024u,c->r[0]); // 8002DF08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8002DF0C
  c->r[31]=c->r[3]|c->r[3]; // 8002DF10
  W32(c->r[1]+0x00000018u,c->r[30]); // 8002DF14
  c->r[0]=R32(c->r[3]+0x00000008u); // 8002DF18
  cmps(c,0,(int32_t)c->r[0],0); // 8002DF1C
  if (crb(c,2)) { goto L_8002DFE0; } // 8002DF20
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002DF24
  cmps(c,0,(int32_t)c->r[0],0); // 8002DF28
  if (!crb(c,2)) { goto L_8002DF74; } // 8002DF2C
  goto L_8002DF68; // 8002DF30
L_8002DF34:;
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002DF34
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DF38
  c->r[5]=R32(c->r[3]+0x000000B8u); // 8002DF3C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8002DF40
  c->r[4]=R32(c->r[3]+0x000000A0u); // 8002DF44
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8002DF48
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8002DF4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8002DF50
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 8002DF54
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002DF58
  W32(c->r[3]+0x000000B4u,c->r[4]); // 8002DF5C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DF60
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8002DF64
L_8002DF68:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 8002DF68
  cmps(c,0,(int32_t)c->r[0],0); // 8002DF6C
  if (!crb(c,2)) { IRQCHK(c); goto L_8002DF34; } // 8002DF70
L_8002DF74:;
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DF74
  c->r[5]=0u+0x00000002u; // 8002DF78
  c->r[4]=0u+0x00000001u; // 8002DF7C
  c->r[30]=R32(c->r[3]+0x00000040u); // 8002DF80
  c->r[0]=0u+0x00000000u; // 8002DF84
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8002DF88
  c->r[6]=c->r[30]+0x0000001Cu; // 8002DF8C
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8002DF90
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8002DF94
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8002DF98
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002DF9C
  W32(c->r[1]+0x00000008u,c->r[6]); // 8002DFA0
  c->r[0]=c->r[4]&c->r[0]; // 8002DFA4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8002DFA8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8002DFAC
  cmpu(c,0,c->r[0],0x00000001u); // 8002DFB0
  W32(c->r[1]+0x00000010u,c->r[6]); // 8002DFB4
  W32(c->r[1]+0x00000014u,c->r[5]); // 8002DFB8
  if (!crb(c,2)) { goto L_8002DFC8; } // 8002DFBC
  c->r[3]=c->r[30]|c->r[30]; // 8002DFC0
  c->lr=0x8002DFC8u; f_8034007C(c); // 8002DFC4
L_8002DFC8:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DFC8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8002DFCC
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DFD0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8002DFD4
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002DFD8
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8002DFDC
L_8002DFE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8002DFE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8002DFE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8002DFE8
  c->lr=c->r[0]; // 8002DFEC
  c->r[1]=c->r[1]+0x00000020u; // 8002DFF0
  return; // 8002DFF4
}

// fn_8002DFF8
void f_8002DFF8(Ctx* __restrict c) {
  trace_call(0x8002DFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002DFF8
  c->r[0]=c->lr; // 8002DFFC
  cmps(c,0,(int32_t)c->r[4],0); // 8002E000
  W32(c->r[1]+0x00000024u,c->r[0]); // 8002E004
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8002E008
  c->r[31]=0u+0x00000000u; // 8002E00C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8002E010
  c->r[30]=c->r[4]|c->r[4]; // 8002E014
  W32(c->r[1]+0x00000014u,c->r[29]); // 8002E018
  if (crb(c,2)) { goto L_8002E1F4; } // 8002E01C
  c->r[29]=0u+0x803C0000u; // 8002E020
  c->r[3]=c->r[30]|c->r[30]; // 8002E024
  c->r[29]=c->r[29]+0x00002658u; // 8002E028
  c->r[4]=c->r[29]+0x00000010u; // 8002E02C
  c->lr=0x8002E034u; f_8030BE60(c); // 8002E030
  c->r[5]=R32(c->r[3]+0x00000018u); // 8002E034
  c->r[7]=R32(c->r[29]+0x00000024u); // 8002E038
  c->r[4]=R32(c->r[5]+0x00000000u); // 8002E03C
  c->r[8]=R32(c->r[5]+0x00000004u); // 8002E040
  c->r[3]=R32(c->r[4]+0x00000000u); // 8002E044
  c->r[0]=R32(c->r[4]+0x00000004u); // 8002E048
  c->r[4]=c->r[8]|c->r[8]; // 8002E04C
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8002E050
  c->r[0]=c->r[0]-c->r[3]; // 8002E054
  c->r[0]=sraw(c,c->r[0],2); // 8002E058
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8002E05C
  c->r[0]=c->r[3]-c->r[8]; // 8002E060
  c->ctr=c->r[0]; // 8002E064
  cmpu(c,0,c->r[8],c->r[3]); // 8002E068
  if (!crb(c,0)) { goto L_8002E0AC; } // 8002E06C
L_8002E070:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002E070
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002E074
  c->r[3]=R32(c->r[3]+c->r[6]); // 8002E078
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002E07C
  cmpu(c,0,c->r[7],c->r[0]); // 8002E080
  if (!crb(c,2)) { goto L_8002E0A0; } // 8002E084
  W32(c->r[5]+0x00000004u,c->r[4]); // 8002E088
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8002E08C
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002E090
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002E094
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002E098
  goto L_8002E100; // 8002E09C
L_8002E0A0:;
  c->r[6]=c->r[6]+0x00000004u; // 8002E0A0
  c->r[4]=c->r[4]+0x00000001u; // 8002E0A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002E070; } // 8002E0A8
L_8002E0AC:;
  c->r[6]=0u+0x00000000u; // 8002E0AC
  c->r[4]=0u+0x00000000u; // 8002E0B0
  c->ctr=c->r[8]; // 8002E0B4
  cmpu(c,0,c->r[8],0x00000000u); // 8002E0B8
  if (!crb(c,1)) { goto L_8002E0FC; } // 8002E0BC
L_8002E0C0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002E0C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002E0C4
  c->r[3]=R32(c->r[3]+c->r[4]); // 8002E0C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002E0CC
  cmpu(c,0,c->r[7],c->r[0]); // 8002E0D0
  if (!crb(c,2)) { goto L_8002E0F0; } // 8002E0D4
  W32(c->r[5]+0x00000004u,c->r[6]); // 8002E0D8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8002E0DC
  c->r[3]=R32(c->r[5]+0x00000000u); // 8002E0E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002E0E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002E0E8
  goto L_8002E100; // 8002E0EC
L_8002E0F0:;
  c->r[4]=c->r[4]+0x00000004u; // 8002E0F0
  c->r[6]=c->r[6]+0x00000001u; // 8002E0F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8002E0C0; } // 8002E0F8
L_8002E0FC:;
  c->r[3]=0u+0x00000000u; // 8002E0FC
L_8002E100:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8002E100
  cmps(c,0,(int32_t)c->r[4],37); // 8002E104
  if (!crb(c,1)) { goto L_8002E120; } // 8002E108
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002E10C
  cmpu(c,0,c->r[0],0x00000001u); // 8002E110
  if (!crb(c,2)) { goto L_8002E120; } // 8002E114
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8002E118
  goto L_8002E148; // 8002E11C
L_8002E120:;
  cmps(c,0,(int32_t)c->r[4],26); // 8002E120
  if (crb(c,0)) { goto L_8002E130; } // 8002E124
  cmps(c,0,(int32_t)c->r[4],36); // 8002E128
  if (!crb(c,2)) { goto L_8002E144; } // 8002E12C
L_8002E130:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002E130
  cmpu(c,0,c->r[0],0x00000001u); // 8002E134
  if (!crb(c,2)) { goto L_8002E144; } // 8002E138
  c->r[3]=c->r[3]+0x00000008u; // 8002E13C
  goto L_8002E148; // 8002E140
L_8002E144:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8002E144
L_8002E148:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8002E148
  c->r[6]=R32(c->r[3]+0x00000004u); // 8002E14C
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 8002E150
  if (crb(c,2)) { goto L_8002E1F4; } // 8002E154
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8002E158
  c->r[8]=c->r[5]^c->r[6]; // 8002E15C
  c->r[7]=R32(c->r[3]+0x000000A8u); // 8002E160
  c->r[3]=R32(c->r[7]+0x00000000u); // 8002E164
  c->r[4]=R32(c->r[7]+0x00000004u); // 8002E168
  c->r[0]=divwu(c->r[8],c->r[3]); // 8002E16C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8002E170
  c->r[0]=c->r[8]-c->r[0]; // 8002E174
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8002E178
  c->r[0]=R32(c->r[4]+c->r[0]); // 8002E17C
  goto L_8002E1C0; // 8002E180
L_8002E184:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 8002E184
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8002E188
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002E18C
  c->r[4]=c->r[3]+c->r[0]; // 8002E190
  c->r[0]=R32(c->r[3]+c->r[0]); // 8002E194
  cmpu(c,0,c->r[0],c->r[8]); // 8002E198
  if (!crb(c,2)) { goto L_8002E1BC; } // 8002E19C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8002E1A0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8002E1A4
  c->r[0]=c->r[0]^c->r[5]; // 8002E1A8
  c->r[3]=c->r[3]^c->r[6]; // 8002E1AC
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 8002E1B0
  if (!crb(c,2)) { goto L_8002E1BC; } // 8002E1B4
  goto L_8002E1CC; // 8002E1B8
L_8002E1BC:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 8002E1BC
L_8002E1C0:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8002E1C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8002E184; } // 8002E1C4
  c->r[4]=0u+0x00000000u; // 8002E1C8
L_8002E1CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8002E1CC
  if (!crb(c,2)) { goto L_8002E1DC; } // 8002E1D0
  c->r[3]=0u+0x00000000u; // 8002E1D4
  goto L_8002E1E0; // 8002E1D8
L_8002E1DC:;
  c->r[3]=c->r[4]+0x00000010u; // 8002E1DC
L_8002E1E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8002E1E0
  if (!crb(c,2)) { goto L_8002E1F0; } // 8002E1E4
  c->r[31]=0u+0x00000000u; // 8002E1E8
  goto L_8002E1F4; // 8002E1EC
L_8002E1F0:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 8002E1F0
L_8002E1F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8002E1F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8002E1F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8002E1FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8002E200
  c->r[0]=R32(c->r[1]+0x00000024u); // 8002E204
  c->lr=c->r[0]; // 8002E208
  c->r[1]=c->r[1]+0x00000020u; // 8002E20C
  return; // 8002E210
}

// fn_8002E214
void f_8002E214(Ctx* __restrict c) {
  trace_call(0x8002E214u);
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E214
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E218
  fcmp(c,0,c->f[0],c->f[1]); // 8002E21C
  if (!crb(c,1)) return; // 8002E220
  c->r[0]=R32(c->r[3]+0x00000020u); // 8002E224
  cmps(c,0,(int32_t)c->r[0],0); // 8002E228
  if (crb(c,2)) { goto L_8002E238; } // 8002E22C
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 8002E230
  return; // 8002E234
L_8002E238:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 8002E238
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E23C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8002E240
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8002E244
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 8002E248
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 8002E24C
  return; // 8002E250
}

// fn_8002E254
void f_8002E254(Ctx* __restrict c) {
  trace_call(0x8002E254u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 8002E254
  cmps(c,0,(int32_t)c->r[0],0); // 8002E258
  if (crb(c,2)) { goto L_8002E270; } // 8002E25C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E260
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E264
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 8002E268
  goto L_8002E284; // 8002E26C
L_8002E270:;
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E270
  {uint32_t ea=c->r[3]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E274
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E278
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8002E27C
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 8002E280
L_8002E284:;
  {uint32_t ea=c->r[2]+0xFFFF83A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E284
  fcmp(c,0,c->f[2],c->f[0]); // 8002E288
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002E28C
  if (!crb(c,2)) { goto L_8002E2A0; } // 8002E290
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E294
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8002E298
  return; // 8002E29C
L_8002E2A0:;
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E2A0
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E2A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8002E2A8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8002E2AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8002E2B0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8002E2B4
  return; // 8002E2B8
}

// fn_8002E2BC
void f_8002E2BC(Ctx* __restrict c) {
  trace_call(0x8002E2BCu);
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E2BC
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E2C0
  fcmp(c,0,c->f[0],c->f[1]); // 8002E2C4
  if (crb(c,1)) return; // 8002E2C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 8002E2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8002E2D0
  if (crb(c,2)) { goto L_8002E2FC; } // 8002E2D4
  c->r[0]=R32(c->r[3]+0x00000018u); // 8002E2D8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E2DC
  cmps(c,0,(int32_t)c->r[0],0); // 8002E2E0
  if (crb(c,2)) return; // 8002E2E4
  {uint32_t ea=c->r[3]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E2E8
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E2EC
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 8002E2F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8002E2F4
  return; // 8002E2F8
L_8002E2FC:;
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E2FC
  {uint32_t ea=c->r[2]+0xFFFF83A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E300
  c->r[3]=R32(c->r[3]+0x00000028u); // 8002E304
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8002E308
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002E30C
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 8002E310
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[3]); // 8002E314
  return; // 8002E318
}

// fn_8002E31C
void f_8002E31C(Ctx* __restrict c) {
  trace_call(0x8002E31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E31C
  c->r[0]=c->lr; // 8002E320
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002E324
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002E328
  c->r[31]=c->r[3]|c->r[3]; // 8002E32C
  c->lr=0x8002E334u; f_8002E2BC(c); // 8002E330
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E334
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E338
  fcmp(c,0,c->f[2],c->f[0]); // 8002E33C
  if (!crb(c,1)) { goto L_8002E34C; } // 8002E340
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8002E344
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 8002E348
L_8002E34C:;
  {uint32_t ea=c->r[31]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E34C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8002E350
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 8002E354
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002E358
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002E35C
  c->lr=c->r[0]; // 8002E360
  c->r[1]=c->r[1]+0x00000010u; // 8002E364
  return; // 8002E368
}

// fn_8002E36C
void f_8002E36C(Ctx* __restrict c) {
  trace_call(0x8002E36Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002E36C
  c->r[12]=c->r[1]|c->r[1]; // 8002E370
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 8002E374
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E378
  c->r[0]=c->lr; // 8002E37C
  c->r[5]=0u+0x00000002u; // 8002E380
  c->r[4]=0u+0x00000001u; // 8002E384
  W32(c->r[12]+0x00000004u,c->r[0]); // 8002E388
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8002E38C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8002E390
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 8002E394
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 8002E398
  c->r[30]=c->r[3]|c->r[3]; // 8002E39C
  W32(c->r[12]+0xFFFFFFE4u,c->r[29]); // 8002E3A0
  W32(c->r[12]+0xFFFFFFE0u,c->r[28]); // 8002E3A4
  c->r[31]=R32(c->r[3]+0x00000040u); // 8002E3A8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8002E3AC
  W32(c->r[1]+0x00000034u,c->r[5]); // 8002E3B0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8002E3B4
  c->r[6]=c->r[31]+0x0000001Cu; // 8002E3B8
  W32(c->r[1]+0x00000030u,c->r[6]); // 8002E3BC
  c->r[0]=c->r[3]&c->r[0]; // 8002E3C0
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8002E3C4
  W32(c->r[1]+0x00000038u,c->r[6]); // 8002E3C8
  cmpu(c,1,c->r[0],0x00000001u); // 8002E3CC
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8002E3D0
  if (!crb(c,6)) { goto L_8002E3E0; } // 8002E3D4
  c->r[3]=c->r[31]|c->r[31]; // 8002E3D8
  c->lr=0x8002E3E0u; f_8034007C(c); // 8002E3DC
L_8002E3E0:;
  c->r[29]=R32(c->r[30]+0x0000003Cu); // 8002E3E0
  c->r[4]=0u+0x00000002u; // 8002E3E4
  c->r[3]=0u+0x00000001u; // 8002E3E8
  W32(c->r[1]+0x00000024u,c->r[4]); // 8002E3EC
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8002E3F0
  c->r[5]=c->r[29]+0x0000001Cu; // 8002E3F4
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002E3F8
  W32(c->r[1]+0x00000020u,c->r[5]); // 8002E3FC
  c->r[0]=c->r[3]&c->r[0]; // 8002E400
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002E404
  W32(c->r[1]+0x00000028u,c->r[5]); // 8002E408
  cmpu(c,1,c->r[0],0x00000001u); // 8002E40C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8002E410
  if (!crb(c,6)) { goto L_8002E420; } // 8002E414
  c->r[3]=c->r[29]|c->r[29]; // 8002E418
  c->lr=0x8002E420u; f_8034007C(c); // 8002E41C
L_8002E420:;
  c->r[28]=R32(c->r[30]+0x0000003Cu); // 8002E420
  c->r[4]=0u+0x00000002u; // 8002E424
  {uint32_t ea=c->r[31]+0x00000050u; psq_load(c,0,ea,0,0);} // 8002E428
  c->r[3]=0u+0x00000001u; // 8002E42C
  {uint32_t ea=c->r[29]+0x00000050u; psq_load(c,2,ea,0,0);} // 8002E430
  c->r[5]=c->r[28]+0x0000001Cu; // 8002E434
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8002E438
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002E43C
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002E440
  {uint32_t ea=c->r[31]+0x00000058u; psq_load(c,1,ea,1,0);} // 8002E444
  c->r[0]=c->r[3]&c->r[0]; // 8002E448
  {uint32_t ea=c->r[29]+0x00000058u; psq_load(c,0,ea,1,0);} // 8002E44C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002E450
  c->r[3]=c->r[1]+0x00000040u; // 8002E454
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002E458
  cmpu(c,1,c->r[0],0x00000001u); // 8002E45C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 8002E460
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8002E464
  W32(c->r[1]+0x00000010u,c->r[5]); // 8002E468
  W32(c->r[1]+0x00000014u,c->r[4]); // 8002E46C
  W32(c->r[1]+0x00000018u,c->r[5]); // 8002E470
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8002E474
  if (!crb(c,6)) { goto L_8002E484; } // 8002E478
  c->r[3]=c->r[28]|c->r[28]; // 8002E47C
  c->lr=0x8002E484u; f_8034007C(c); // 8002E480
L_8002E484:;
  c->r[3]=c->r[1]+0x00000040u; // 8002E484
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E488
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 8002E48C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[31]); // 8002E490
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8002E494
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8002E498
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E49C
  {uint32_t ea=c->r[28]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E4A0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 8002E4A4
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 8002E4A8
  {uint32_t ea=c->r[28]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E4AC
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 8002E4B0
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8002E4B4
  fcmp(c,0,c->f[3],c->f[1]); // 8002E4B8
  if (crb(c,2)) { goto L_8002E4DC; } // 8002E4BC
  c->f[1]=frsqrte(c->f[3]); // 8002E4C0
  {uint32_t ea=c->r[2]+0xFFFF83A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8002E4C4
  {uint32_t ea=c->r[2]+0xFFFF83A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E4C8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8002E4CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 8002E4D0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 8002E4D4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8002E4D8
L_8002E4DC:;
  c->r[4]=c->r[1]+0x00000040u; // 8002E4DC
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E4E0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 8002E4E4
  {uint32_t ea=c->r[2]+0xFFFF83A4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002E4E8
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8002E4EC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002E4F0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8002E4F4
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[6]); // 8002E4F8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002E4FC
  {double t0=S(std::fma(c->f[5],c->f[5],c->f[4])), t1=S(std::fma(c->ps1[5],c->ps1[5],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 8002E500
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8002E504
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 8002E508
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8002E50C
  {double t0=S(c->f[5]+c->ps1[4]), t1=S(c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 8002E510
  {uint32_t ea=c->r[30]+0x00000060u; psq_store(c,2,ea,0,0);} // 8002E514
  {uint32_t ea=c->r[30]+0x00000068u; psq_store(c,1,ea,1,0);} // 8002E518
  fcmp(c,0,c->f[5],c->f[7]); // 8002E51C
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[0]);} // 8002E520
  if (crb(c,2)) { goto L_8002E544; } // 8002E524
  c->f[0]=frsqrte(c->f[5]); // 8002E528
  {uint32_t ea=c->r[2]+0xFFFF83A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E52C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8002E530
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 8002E534
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[5],-c->f[2])); // 8002E538
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8002E53C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8002E540
L_8002E544:;
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[5]);} // 8002E544
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[5]);} // 8002E548
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002E54C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8002E550
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8002E554
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 8002E558
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 8002E55C
  c->r[29]=R32(c->r[10]+0xFFFFFFE4u); // 8002E560
  c->r[28]=R32(c->r[10]+0xFFFFFFE0u); // 8002E564
  c->r[0]=R32(c->r[10]+0x00000004u); // 8002E568
  c->lr=c->r[0]; // 8002E56C
  c->r[1]=c->r[10]|c->r[10]; // 8002E570
  return; // 8002E574
}

// fn_8002E578
void f_8002E578(Ctx* __restrict c) {
  trace_call(0x8002E578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E578
  c->r[0]=c->lr; // 8002E57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002E580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002E584
  c->r[31]=c->r[3]|c->r[3]; // 8002E588
  c->lr=0x8002E590u; f_8002E31C(c); // 8002E58C
  c->r[3]=c->r[31]|c->r[31]; // 8002E590
  c->lr=0x8002E598u; f_8002E5AC(c); // 8002E594
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002E598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002E59C
  c->lr=c->r[0]; // 8002E5A0
  c->r[1]=c->r[1]+0x00000010u; // 8002E5A4
  return; // 8002E5A8
}

// fn_8002E5AC
void f_8002E5AC(Ctx* __restrict c) {
  trace_call(0x8002E5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E5AC
  c->r[0]=c->lr; // 8002E5B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8002E5B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8002E5B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8002E5BC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8002E5C0
  c->r[31]=c->r[3]|c->r[3]; // 8002E5C4
  W32(c->r[1]+0x00000048u,c->r[30]); // 8002E5C8
  W32(c->r[1]+0x00000044u,c->r[29]); // 8002E5CC
  {uint32_t ea=c->r[3]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E5D0
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E5D4
  fcmp(c,0,c->f[1],c->f[0]); // 8002E5D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002E5DC
  if (!crb(c,2)) { goto L_8002E64C; } // 8002E5E0
  c->r[30]=R32(c->r[3]+0x00000040u); // 8002E5E4
  c->r[4]=0u+0x00000002u; // 8002E5E8
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8002E5EC
  c->r[3]=0u+0x00000001u; // 8002E5F0
  c->r[5]=c->r[30]+0x0000001Cu; // 8002E5F4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002E5F8
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002E5FC
  W32(c->r[1]+0x00000028u,c->r[5]); // 8002E600
  c->r[0]=c->r[3]&c->r[0]; // 8002E604
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002E608
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8002E60C
  cmpu(c,0,c->r[0],0x00000001u); // 8002E610
  W32(c->r[1]+0x00000030u,c->r[5]); // 8002E614
  W32(c->r[1]+0x00000034u,c->r[4]); // 8002E618
  if (!crb(c,2)) { goto L_8002E628; } // 8002E61C
  c->r[3]=c->r[30]|c->r[30]; // 8002E620
  c->lr=0x8002E628u; f_8034007C(c); // 8002E624
L_8002E628:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E628
  c->r[0]=0u+0x00000001u; // 8002E62C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8002E630
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E634
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8002E638
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E63C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8002E640
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8002E644
  goto L_8002E6F8; // 8002E648
L_8002E64C:;
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8002E64C
  c->r[4]=0u+0x00000002u; // 8002E650
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 8002E654
  c->r[0]=0u+0x00000001u; // 8002E658
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8002E65C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8002E660
  c->r[5]=c->r[30]+0x0000001Cu; // 8002E664
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8002E668
  W32(c->r[1]+0x00000018u,c->r[5]); // 8002E66C
  c->r[0]=c->r[3]&c->r[0]; // 8002E670
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002E674
  W32(c->r[1]+0x00000020u,c->r[5]); // 8002E678
  cmpu(c,0,c->r[0],0x00000001u); // 8002E67C
  W32(c->r[1]+0x00000024u,c->r[4]); // 8002E680
  if (!crb(c,2)) { goto L_8002E690; } // 8002E684
  c->r[3]=c->r[30]|c->r[30]; // 8002E688
  c->lr=0x8002E690u; f_8034007C(c); // 8002E68C
L_8002E690:;
  c->r[29]=R32(c->r[31]+0x00000040u); // 8002E690
  c->r[4]=0u+0x00000002u; // 8002E694
  c->r[3]=0u+0x00000001u; // 8002E698
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8002E69C
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8002E6A0
  c->r[5]=c->r[29]+0x0000001Cu; // 8002E6A4
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 8002E6A8
  W32(c->r[1]+0x00000008u,c->r[5]); // 8002E6AC
  c->r[0]=c->r[3]&c->r[0]; // 8002E6B0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8002E6B4
  W32(c->r[1]+0x00000010u,c->r[5]); // 8002E6B8
  cmpu(c,0,c->r[0],0x00000001u); // 8002E6BC
  W32(c->r[1]+0x00000014u,c->r[4]); // 8002E6C0
  if (!crb(c,2)) { goto L_8002E6D0; } // 8002E6C4
  c->r[3]=c->r[29]|c->r[29]; // 8002E6C8
  c->lr=0x8002E6D0u; f_8034007C(c); // 8002E6CC
L_8002E6D0:;
  {uint32_t ea=c->r[30]+0x00000050u; psq_load(c,0,ea,0,0);} // 8002E6D0
  {uint32_t ea=c->r[29]+0x00000050u; psq_load(c,2,ea,0,0);} // 8002E6D4
  {uint32_t ea=c->r[30]+0x00000058u; psq_load(c,1,ea,1,0);} // 8002E6D8
  {uint32_t ea=c->r[29]+0x00000058u; psq_load(c,3,ea,1,0);} // 8002E6DC
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8002E6E0
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 8002E6E4
  {double t0=S(std::fma(c->f[2],c->f[31],c->f[0])), t1=S(std::fma(c->ps1[2],c->f[31],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8002E6E8
  {double t0=S(std::fma(c->f[3],c->f[31],c->f[1])), t1=S(std::fma(c->ps1[3],c->f[31],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 8002E6EC
  {uint32_t ea=c->r[31]+0x00000050u; psq_store(c,2,ea,0,0);} // 8002E6F0
  {uint32_t ea=c->r[31]+0x00000058u; psq_store(c,3,ea,1,0);} // 8002E6F4
L_8002E6F8:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8002E6F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8002E6FC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8002E700
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8002E704
  c->r[30]=R32(c->r[1]+0x00000048u); // 8002E708
  c->r[29]=R32(c->r[1]+0x00000044u); // 8002E70C
  c->lr=c->r[0]; // 8002E710
  c->r[1]=c->r[1]+0x00000060u; // 8002E714
  return; // 8002E718
}

// fn_8002E71C
void f_8002E71C(Ctx* __restrict c) {
  trace_call(0x8002E71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E71C
  c->r[0]=c->lr; // 8002E720
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E724
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002E728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002E72C
  c->r[31]=c->r[3]|c->r[3]; // 8002E730
  c->r[4]=c->r[31]+0x00000050u; // 8002E734
  c->r[6]=R32(c->r[3]+0x000000A0u); // 8002E738
  c->r[0]=R32(c->r[3]+0x000000A4u); // 8002E73C
  c->r[5]=R32(c->r[3]+0x000000A0u); // 8002E740
  c->r[0]=c->r[0]-c->r[6]; // 8002E744
  c->r[0]=sraw(c,c->r[0],2); // 8002E748
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 8002E74C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8002E750
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8002E754
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8002E758
  c->r[0]=R32(c->r[5]+c->r[0]); // 8002E75C
  W32(c->r[3]+0x000000B4u,c->r[0]); // 8002E760
  c->r[3]=c->r[0]|c->r[0]; // 8002E764
  c->lr=0x8002E76Cu; f_80349BA8(c); // 8002E768
  c->r[3]=R32(c->r[31]+0x000000B4u); // 8002E76C
  c->r[4]=c->r[31]+0x00000060u; // 8002E770
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E774
  c->lr=0x8002E77Cu; f_80349FE0(c); // 8002E778
  {uint32_t ea=c->r[2]+0xFFFF8398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E77C
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 8002E780
  c->r[3]=R32(c->r[31]+0x000000B4u); // 8002E784
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 8002E788
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E78C
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 8002E790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002E794
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002E798
  c->lr=c->r[0]; // 8002E79C
  c->r[1]=c->r[1]+0x00000010u; // 8002E7A0
  return; // 8002E7A4
}

// fn_8002E7A8
void f_8002E7A8(Ctx* __restrict c) {
  trace_call(0x8002E7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E7A8
  c->r[0]=c->lr; // 8002E7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002E7B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002E7B4
  c->r[31]=c->r[3]|c->r[3]; // 8002E7B8
  c->lr=0x8002E7C0u; f_8002E31C(c); // 8002E7BC
  c->r[3]=0u+0x00000001u; // 8002E7C0
  goto L_8002E820; // 8002E7C4
L_8002E7C8:;
  c->r[4]=R32(c->r[31]+0x000000B8u); // 8002E7C8
  cmps(c,0,(int32_t)c->r[4],0); // 8002E7CC
  if (crb(c,2)) { goto L_8002E814; } // 8002E7D0
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E7D4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8002E7D8
  {uint32_t ea=c->r[31]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E7DC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8002E7E0
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E7E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8002E7E8
  W32(c->r[31]+0x000000B8u,c->r[4]); // 8002E7EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8002E7F0
  c->r[4]=R32(c->r[31]+0x000000A0u); // 8002E7F4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 8002E7F8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 8002E7FC
  c->r[4]=R32(c->r[4]+c->r[0]); // 8002E800
  W32(c->r[31]+0x000000B4u,c->r[4]); // 8002E804
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E808
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 8002E80C
  goto L_8002E820; // 8002E810
L_8002E814:;
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E814
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 8002E818
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8002E81C
L_8002E820:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8002E820
  cmps(c,0,(int32_t)c->r[0],0); // 8002E824
  if (!crb(c,2)) { goto L_8002E840; } // 8002E828
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E82C
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E830
  fcmp(c,0,c->f[1],c->f[0]); // 8002E834
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8002E838
  if (crb(c,2)) { IRQCHK(c); goto L_8002E7C8; } // 8002E83C
L_8002E840:;
  c->r[3]=c->r[31]|c->r[31]; // 8002E840
  c->lr=0x8002E848u; f_8002E85C(c); // 8002E844
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002E848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002E84C
  c->lr=c->r[0]; // 8002E850
  c->r[1]=c->r[1]+0x00000010u; // 8002E854
  return; // 8002E858
}

// fn_8002E85C
void f_8002E85C(Ctx* __restrict c) {
  trace_call(0x8002E85Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E85C
  c->r[0]=c->lr; // 8002E860
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002E864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002E868
  c->r[31]=c->r[3]|c->r[3]; // 8002E86C
  c->r[4]=c->r[31]+0x00000050u; // 8002E870
  c->r[3]=R32(c->r[3]+0x000000B4u); // 8002E874
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E878
  c->lr=0x8002E880u; f_80349F9C(c); // 8002E87C
  c->r[3]=R32(c->r[31]+0x000000B4u); // 8002E880
  c->r[4]=c->r[31]+0x00000060u; // 8002E884
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E888
  c->lr=0x8002E890u; f_8034A3EC(c); // 8002E88C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002E890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002E894
  c->lr=c->r[0]; // 8002E898
  c->r[1]=c->r[1]+0x00000010u; // 8002E89C
  return; // 8002E8A0
}

// fn_8002E8A4
void f_8002E8A4(Ctx* __restrict c) {
  trace_call(0x8002E8A4u);
  c->r[0]=0u+0x00000001u; // 8002E8A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8002E8A8
  f_80023D90(c); return; // 8002E8AC
}

// fn_8002E8B0
void f_8002E8B0(Ctx* __restrict c) {
  trace_call(0x8002E8B0u);
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002E8B0
  c->r[0]=0u+0x00000000u; // 8002E8B4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[3]);} // 8002E8B8
  c->r[9]=0u+0x804B0000u; // 8002E8BC
  c->r[7]=0u+0x804B0000u; // 8002E8C0
  c->r[5]=0u+0x804B0000u; // 8002E8C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8002E8C8
  c->r[8]=c->r[9]+0xFFFFC5A0u; // 8002E8CC
  {uint32_t ea=c->r[2]+0xFFFF83D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E8D0
  c->r[6]=c->r[7]+0xFFFFC5C0u; // 8002E8D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8002E8D8
  c->r[4]=c->r[5]+0xFFFFC5D0u; // 8002E8DC
  {uint32_t ea=c->r[9]+0xFFFFC5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E8E0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8002E8E4
  {uint32_t ea=c->r[2]+0xFFFF83D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E8E8
  {uint32_t ea=c->r[8]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002E8EC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 8002E8F0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 8002E8F4
  {uint32_t ea=c->r[2]+0xFFFF83CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002E8F8
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E8FC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8002E900
  {uint32_t ea=c->r[9]+0xFFFFC5A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E904
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8002E908
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E90C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8002E910
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E914
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8002E918
  {uint32_t ea=c->r[7]+0xFFFFC5C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E91C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8002E920
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E924
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8002E928
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E92C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8002E930
  {uint32_t ea=c->r[7]+0xFFFFC5C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E934
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8002E938
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E93C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8002E940
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E944
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8002E948
  {uint32_t ea=c->r[5]+0xFFFFC5D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E94C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 8002E950
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E954
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 8002E958
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002E95C
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 8002E960
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8002E964
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8002E968
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[3]);} // 8002E96C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 8002E970
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[3]);} // 8002E974
  W32(c->r[3]+0x00000078u,c->r[0]); // 8002E978
  return; // 8002E97C
}

// fn_8002E980
void f_8002E980(Ctx* __restrict c) {
  trace_call(0x8002E980u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002E980
  c->r[12]=c->r[1]|c->r[1]; // 8002E984
  c->r[11]=addc(c,~c->r[11],0xFFFFFE10u,1); // 8002E988
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002E98C
  c->r[0]=c->lr; // 8002E990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[0]); // 8002E994
  W32(c->r[12]+0x00000004u,c->r[0]); // 8002E998
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8002E99C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8002E9A0
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8002E9A4
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8002E9A8
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8002E9AC
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8002E9B0
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8002E9B4
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8002E9B8
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8002E9BC
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8002E9C0
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8002E9C4
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 8002E9C8
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 8002E9CC
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 8002E9D0
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 8002E9D4
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 8002E9D8
  W32(c->r[12]+0xFFFFFF7Cu,c->r[31]); // 8002E9DC
  c->r[31]=c->r[5]|c->r[5]; // 8002E9E0
  W32(c->r[12]+0xFFFFFF78u,c->r[30]); // 8002E9E4
  c->r[30]=c->r[4]|c->r[4]; // 8002E9E8
  W32(c->r[12]+0xFFFFFF74u,c->r[29]); // 8002E9EC
  c->r[29]=c->r[3]|c->r[3]; // 8002E9F0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8002E9F4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 8002E9F8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002E9FC
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[4]=t0; c->ps1[4]=t1;} // 8002EA00
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8002EA04
  fcmp(c,0,c->f[4],c->f[0]); // 8002EA08
  if (crb(c,2)) { goto L_8002EA2C; } // 8002EA0C
  c->f[3]=frsqrte(c->f[4]); // 8002EA10
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EA14
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EA18
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 8002EA1C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8002EA20
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[4],-c->f[1])); // 8002EA24
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 8002EA28
L_8002EA2C:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,9,ea,0,0);} // 8002EA2C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,8,ea,0,0);} // 8002EA30
  {double t0=S(c->f[9]*c->f[4]), t1=S(c->ps1[9]*c->f[4]); c->f[9]=t0; c->ps1[9]=t1;} // 8002EA34
  {double t0=S(c->f[8]*c->f[4]), t1=S(c->ps1[8]*c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 8002EA38
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,9,ea,0,0);} // 8002EA3C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,8,ea,0,0);} // 8002EA40
  {uint32_t ea=c->r[4]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EA44
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[8]);} // 8002EA48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EA4C
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[8]);} // 8002EA50
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EA54
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[8]);} // 8002EA58
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EA5C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[8]);} // 8002EA60
  c->r[0]=R32(c->r[3]+0x00000000u); // 8002EA64
  cmps(c,1,(int32_t)c->r[0],3); // 8002EA68
  if (crb(c,6)) { goto L_8002EAC8; } // 8002EA6C
  if (!crb(c,4)) { goto L_8002EA84; } // 8002EA70
  cmps(c,1,(int32_t)c->r[0],1); // 8002EA74
  if (crb(c,6)) { goto L_8002EA90; } // 8002EA78
  if (!crb(c,4)) { goto L_8002EAAC; } // 8002EA7C
  goto L_8002F1E4; // 8002EA80
L_8002EA84:;
  cmps(c,1,(int32_t)c->r[0],5); // 8002EA84
  if (!crb(c,4)) { goto L_8002F1E4; } // 8002EA88
  goto L_8002F1E4; // 8002EA8C
L_8002EA90:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002EA90
  {uint32_t ea=c->r[3]+0x00000034u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002EA94
  {uint32_t ea=c->r[3]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EA98
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[10]);} // 8002EA9C
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[9]);} // 8002EAA0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[8]);} // 8002EAA4
  goto L_8002EB14; // 8002EAA8
L_8002EAAC:;
  {uint32_t ea=c->r[3]+0x00000040u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002EAAC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002EAB0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EAB4
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[10]);} // 8002EAB8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[9]);} // 8002EABC
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[8]);} // 8002EAC0
  goto L_8002EB14; // 8002EAC4
L_8002EAC8:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 8002EAC8
  c->r[5]=c->r[1]+0x00000080u; // 8002EACC
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,10,ea,0,0);} // 8002EAD0
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,8,ea,0,0);} // 8002EAD4
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,9,ea,1,0);} // 8002EAD8
  {double t0=S(c->f[8]-c->f[10]), t1=S(c->ps1[8]-c->ps1[10]); c->f[8]=t0; c->ps1[8]=t1;} // 8002EADC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,11,ea,1,0);} // 8002EAE0
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,8,ea,0,0);} // 8002EAE4
  {double t0=S(c->f[9]-c->f[11]), t1=S(c->ps1[9]-c->ps1[11]); c->f[8]=t0; c->ps1[8]=t1;} // 8002EAE8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,8,ea,1,0);} // 8002EAEC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002EAF0
  {uint32_t ea=c->r[1]+0x00000084u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002EAF4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EAF8
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[10]);} // 8002EAFC
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[9]);} // 8002EB00
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[8]);} // 8002EB04
  goto L_8002EB14; // 8002EB08
  goto L_8002F1E4; // 8002EB0C
  goto L_8002F1E4; // 8002EB10
L_8002EB14:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8002EB14
  cmps(c,1,(int32_t)c->r[0],0); // 8002EB18
  if (crb(c,6)) { goto L_8002EB2C; } // 8002EB1C
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EB20
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8002EB24
  goto L_8002EB9C; // 8002EB28
L_8002EB2C:;
  c->r[5]=c->r[1]+0x000000E0u; // 8002EB2C
  {uint32_t ea=c->r[3]+0x00000050u; psq_load(c,8,ea,0,0);} // 8002EB30
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,9,ea,0,0);} // 8002EB34
  c->r[4]=c->r[1]+0x000000D0u; // 8002EB38
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EB3C
  {double t0=S(c->ps1[8]), t1=S(c->f[8]); c->f[12]=t0; c->ps1[12]=t1;} // 8002EB40
  {double t0=S(c->ps1[9]), t1=S(c->f[9]); c->f[10]=t0; c->ps1[10]=t1;} // 8002EB44
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EB48
  {double t0=S(c->f[9]*c->f[1]), t1=S(c->ps1[9]*c->ps1[1]); c->f[11]=t0; c->ps1[11]=t1;} // 8002EB4C
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 8002EB50
  {double t0=S(std::fma(c->f[8],c->f[0],-c->f[11])), t1=S(std::fma(c->ps1[8],c->ps1[0],-c->ps1[11])); c->f[0]=t0; c->ps1[0]=t1;} // 8002EB54
  {double t0=S(std::fma(c->f[8],c->f[10],-c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[10],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 8002EB58
  {double t0=S(c->ps1[0]), t1=S(c->ps1[0]); c->f[10]=t0; c->ps1[10]=t1;} // 8002EB5C
  {double t0=S(c->f[0]), t1=S(c->ps1[9]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EB60
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,10,ea,1,0);} // 8002EB64
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8002EB68
  {uint32_t ea=c->r[4]+0x00000004u; psq_store(c,0,ea,0,0);} // 8002EB6C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EB70
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EB74
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 8002EB78
  {double t0=S(c->f[8]*c->f[2]), t1=S(c->ps1[8]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002EB7C
  {double t0=S(std::fma(c->f[0],c->f[12],-c->f[9])), t1=S(std::fma(c->ps1[0],c->ps1[12],-c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 8002EB80
  {double t0=S(std::fma(c->f[0],c->f[1],-c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],-c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 8002EB84
  {double t0=S(c->f[0]), t1=S(c->ps1[8]); c->f[1]=t0; c->ps1[1]=t1;} // 8002EB88
  {double t0=S(c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EB8C
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 8002EB90
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,1,0);} // 8002EB94
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,1,ea,0,0);} // 8002EB98
L_8002EB9C:;
  c->r[3]=c->r[1]+0x00000130u; // 8002EB9C
  c->r[0]=c->r[1]+0x00000160u; // 8002EBA0
L_8002EBA4:;
  c->r[3]=c->r[3]+0x00000010u; // 8002EBA4
  cmpu(c,1,c->r[3],c->r[0]); // 8002EBA8
  if (crb(c,4)) { IRQCHK(c); goto L_8002EBA4; } // 8002EBAC
  c->r[3]=c->r[1]+0x000000E0u; // 8002EBB0
  c->r[4]=0u+0x804B0000u; // 8002EBB4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EBB8
  c->r[5]=c->r[1]+0x00000040u; // 8002EBBC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002EBC0
  c->r[3]=c->r[1]+0x00000070u; // 8002EBC4
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8002EBC8
  c->r[4]=c->r[4]+0xFFFFC5D0u; // 8002EBCC
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 8002EBD0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8002EBD4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[7]); // 8002EBD8
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 8002EBDC
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[0]=t0; c->ps1[0]=t1;} // 8002EBE0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 8002EBE4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8002EBE8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EBEC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EBF0
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 8002EBF4
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8002EBF8
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002EBFC
  fcmp(c,0,c->f[2],c->f[7]); // 8002EC00
  if (crb(c,2)) { goto L_8002EC24; } // 8002EC04
  c->f[0]=frsqrte(c->f[2]); // 8002EC08
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002EC0C
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EC10
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8002EC14
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 8002EC18
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[8])); // 8002EC1C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8002EC20
L_8002EC24:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EC24
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[5]); // 8002EC28
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002EC2C
  c->r[6]=c->r[1]+0x00000050u; // 8002EC30
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[9]=t0; c->ps1[9]=t1;} // 8002EC34
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,8,ea,0,0);} // 8002EC38
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EC3C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002EC40
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8002EC44
  {double t0=S(c->ps1[9]), t1=S(c->f[9]); c->f[2]=t0; c->ps1[2]=t1;} // 8002EC48
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EC4C
  {double t0=S(c->f[9]*c->f[5]), t1=S(c->ps1[9]*c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 8002EC50
  {uint32_t ea=c->r[1]+0x00000048u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002EC54
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,9,ea,0,0);} // 8002EC58
  {double t0=S(std::fma(c->f[8],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[8],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8002EC5C
  {double t0=S(std::fma(c->f[8],c->f[6],-c->f[1])), t1=S(std::fma(c->ps1[8],c->ps1[6],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 8002EC60
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EC64
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8002EC68
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8002EC6C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,1,0);} // 8002EC70
  {uint32_t ea=c->r[6]+0x00000004u; psq_store(c,0,ea,0,0);} // 8002EC74
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EC78
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EC7C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EC80
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8002EC84
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002EC88
  fcmp(c,0,c->f[2],c->f[7]); // 8002EC8C
  if (crb(c,2)) { goto L_8002ECB0; } // 8002EC90
  c->f[0]=frsqrte(c->f[2]); // 8002EC94
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002EC98
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[6]=c->ps1[6]=RF32(ea);} // 8002EC9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8002ECA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 8002ECA4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[6])); // 8002ECA8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8002ECAC
L_8002ECB0:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002ECB0
  c->r[3]=c->r[1]+0x00000040u; // 8002ECB4
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002ECB8
  c->r[5]=c->r[1]+0x00000060u; // 8002ECBC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 8002ECC0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 8002ECC4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8002ECC8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002ECCC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,6,ea,0,0);} // 8002ECD0
  c->r[3]=c->r[1]+0x000000F0u; // 8002ECD4
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 8002ECD8
  {double t0=S(c->f[6]*c->f[3]), t1=S(c->ps1[6]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8002ECDC
  {double t0=S(c->ps1[6]), t1=S(c->f[6]); c->f[2]=t0; c->ps1[2]=t1;} // 8002ECE0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002ECE4
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 8002ECE8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002ECEC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002ECF0
  {double t0=S(std::fma(c->f[5],c->f[4],-c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[4],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 8002ECF4
  {double t0=S(std::fma(c->f[5],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8002ECF8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002ECFC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002ED00
  c->r[4]=c->r[1]+0x00000130u; // 8002ED04
  {uint32_t ea=c->r[1]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002ED08
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002ED0C
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8002ED10
  {uint32_t ea=c->r[1]+0x00000048u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002ED14
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[7]);} // 8002ED18
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8002ED1C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,1,0);} // 8002ED20
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,0,ea,0,0);} // 8002ED24
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002ED28
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002ED2C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002ED30
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[3]);} // 8002ED34
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[2]);} // 8002ED38
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 8002ED3C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[1]);} // 8002ED40
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[4]);} // 8002ED44
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[5]);} // 8002ED48
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[6]);} // 8002ED4C
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[8]);} // 8002ED50
  c->lr=0x8002ED58u; f_8028A85C(c); // 8002ED54
  c->r[3]=c->r[1]+0x000000F0u; // 8002ED58
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[31]); // 8002ED5C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8002ED60
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 8002ED64
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8002ED68
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 8002ED6C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8002ED70
  fcmp(c,0,c->f[3],c->f[0]); // 8002ED74
  if (crb(c,2)) { goto L_8002ED98; } // 8002ED78
  c->f[1]=frsqrte(c->f[3]); // 8002ED7C
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8002ED80
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002ED84
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8002ED88
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 8002ED8C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 8002ED90
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8002ED94
L_8002ED98:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 8002ED98
  c->r[4]=c->r[1]+0x00000100u; // 8002ED9C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,0,0);} // 8002EDA0
  c->r[0]=c->r[1]+0x00000130u; // 8002EDA4
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8002EDA8
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8002EDAC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 8002EDB0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8002EDB4
L_8002EDB8:;
  c->r[4]=c->r[4]+0x00000010u; // 8002EDB8
  cmpu(c,1,c->r[4],c->r[0]); // 8002EDBC
  if (crb(c,4)) { IRQCHK(c); goto L_8002EDB8; } // 8002EDC0
  cmps(c,1,(int32_t)c->r[31],0); // 8002EDC4
  if (crb(c,6)) { goto L_8002EE6C; } // 8002EDC8
  {uint32_t ea=c->r[2]+0xFFFF83E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EDCC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002EDD0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EDD4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EDD8
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[7]); // 8002EDDC
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[1]); // 8002EDE0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8002EDE4
  c->f[10]=c->ps1[10]=S(c->f[2]*c->f[0]); // 8002EDE8
  {uint32_t ea=c->r[2]+0xFFFF83E4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002EDEC
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[7]); // 8002EDF0
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[1]); // 8002EDF4
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[0]); // 8002EDF8
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[6]); // 8002EDFC
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[1]); // 8002EE00
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[0]); // 8002EE04
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 8002EE08
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 8002EE0C
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[2]); // 8002EE10
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[1]); // 8002EE14
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 8002EE18
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[4]);} // 8002EE1C
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[9]); // 8002EE20
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[9]); // 8002EE24
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[3]);} // 8002EE28
  c->f[8]=c->ps1[8]=S(c->f[11]*c->f[6]); // 8002EE2C
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 8002EE30
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[2]);} // 8002EE34
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[6]); // 8002EE38
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 8002EE3C
  c->f[4]=c->ps1[4]=S(c->f[11]*c->f[7]); // 8002EE40
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[8]); // 8002EE44
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8002EE48
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 8002EE4C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 8002EE50
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[5]); // 8002EE54
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[2]);} // 8002EE58
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[3]);} // 8002EE5C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8002EE60
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 8002EE64
  goto L_8002EEB4; // 8002EE68
L_8002EE6C:;
  {uint32_t ea=c->r[1]+0x00000130u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002EE6C
  {uint32_t ea=c->r[1]+0x00000134u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002EE70
  {uint32_t ea=c->r[1]+0x00000138u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002EE74
  {uint32_t ea=c->r[1]+0x00000140u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002EE78
  {uint32_t ea=c->r[1]+0x00000144u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002EE7C
  {uint32_t ea=c->r[1]+0x00000148u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002EE80
  {uint32_t ea=c->r[1]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EE84
  {uint32_t ea=c->r[1]+0x00000154u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EE88
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EE8C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[8]);} // 8002EE90
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[7]);} // 8002EE94
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[6]);} // 8002EE98
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[5]);} // 8002EE9C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[4]);} // 8002EEA0
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[3]);} // 8002EEA4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 8002EEA8
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 8002EEAC
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 8002EEB0
L_8002EEB4:;
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EEB4
  c->r[4]=c->r[1]+0x000000A0u; // 8002EEB8
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EEBC
  c->r[3]=c->r[1]+0x000000C0u; // 8002EEC0
  {uint32_t ea=c->r[1]+0x00000148u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002EEC4
  c->r[5]=c->r[1]+0x00000030u; // 8002EEC8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002EECC
  {uint32_t ea=c->r[1]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EED0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8002EED4
  {uint32_t ea=c->r[1]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002EED8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8002EEDC
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002EEE0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 8002EEE4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EEE8
  c->f[6]=c->ps1[6]=S(c->f[5]-c->f[5]); // 8002EEEC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 8002EEF0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002EEF4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 8002EEF8
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[2]);} // 8002EEFC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8002EF00
  {uint32_t ea=c->r[1]+0x00000110u; c->f[11]=c->ps1[11]=RF32(ea);} // 8002EF04
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8002EF08
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[7]);} // 8002EF0C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 8002EF10
  {uint32_t ea=c->r[1]+0x00000100u; c->f[12]=c->ps1[12]=RF32(ea);} // 8002EF14
  {double t0=S(std::fma(c->f[0],c->f[7],-c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[7],-c->ps1[3])); c->f[8]=t0; c->ps1[8]=t1;} // 8002EF18
  {uint32_t ea=c->r[29]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002EF1C
  {double t0=S(std::fma(c->f[0],c->f[2],-c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[2],-c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 8002EF20
  {uint32_t ea=c->r[29]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EF24
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 8002EF28
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002EF2C
  {double t0=S(c->f[8]), t1=S(c->ps1[4]); c->f[9]=t0; c->ps1[9]=t1;} // 8002EF30
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,4,ea,1,0);} // 8002EF34
  {double t0=S(c->ps1[8]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 8002EF38
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EF3C
  {double t0=S(std::fma(c->f[1],c->f[4],c->f[7])), t1=S(std::fma(c->ps1[1],c->ps1[4],c->ps1[7])); c->f[1]=t0; c->ps1[1]=t1;} // 8002EF40
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[12]);} // 8002EF44
  {double t0=-c->f[9], t1=-c->ps1[9]; c->f[4]=t0; c->ps1[4]=t1;} // 8002EF48
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,8,ea,1,0);} // 8002EF4C
  {double t0=S(c->f[1]+c->ps1[7]), t1=S(c->ps1[30]); c->f[30]=t0; c->ps1[30]=t1;} // 8002EF50
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,4,ea,0,0);} // 8002EF54
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 8002EF58
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EF5C
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8002EF60
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[11]);} // 8002EF64
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[10]);} // 8002EF68
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 8002EF6C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[3]);} // 8002EF70
  {double t0=S(c->f[1]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 8002EF74
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 8002EF78
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8002EF7C
  fcmp(c,0,c->f[1],c->f[6]); // 8002EF80
  if (crb(c,2)) { goto L_8002EFA4; } // 8002EF84
  c->f[0]=frsqrte(c->f[1]); // 8002EF88
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8002EF8C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 8002EF90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 8002EF94
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[3])); // 8002EF98
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8002EF9C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8002EFA0
L_8002EFA4:;
  c->f[2]=c->f[30]; // 8002EFA4
  c->lr=0x8002EFACu; f_800D29B0(c); // 8002EFA8
  c->r[4]=c->r[1]+0x000000B0u; // 8002EFAC
  c->r[3]=c->r[1]+0x000000A0u; // 8002EFB0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002EFB4
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8002EFB8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8002EFBC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002EFC0
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8002EFC4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8002EFC8
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EFCC
  {double t0=S(std::fma(c->f[1],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[1],c->ps1[2],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 8002EFD0
  {double t0=S(c->f[1]+c->ps1[3]), t1=S(c->ps1[29]); c->f[29]=t0; c->ps1[29]=t1;} // 8002EFD4
  fcmp(c,1,c->f[29],c->f[0]); // 8002EFD8
  if (!crb(c,4)) { goto L_8002EFE4; } // 8002EFDC
  c->f[4]=-c->f[4]; // 8002EFE0
L_8002EFE4:;
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002EFE4
  c->r[0]=R32(c->r[29]+0x00000004u); // 8002EFE8
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[0]); // 8002EFEC
  {uint32_t ea=c->r[2]+0xFFFF83E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002EFF0
  {uint32_t ea=c->r[2]+0xFFFF83E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002EFF4
  cmps(c,1,(int32_t)c->r[0],0); // 8002EFF8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8002EFFC
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[1]; // 8002F000
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 8002F004
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[3]; // 8002F008
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 8002F00C
  if (crb(c,6)) { goto L_8002F0F4; } // 8002F010
  c->r[4]=0u+0x804B0000u; // 8002F014
  c->r[3]=c->r[1]+0x00000090u; // 8002F018
  c->r[4]=c->r[4]+0xFFFFC5D0u; // 8002F01C
  {uint32_t ea=c->r[2]+0xFFFF83D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002F020
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002F024
  c->r[5]=c->r[1]+0x00000020u; // 8002F028
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 8002F02C
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[4]); // 8002F030
  {uint32_t ea=c->r[1]+0x00000098u; c->f[27]=c->ps1[27]=RF32(ea);} // 8002F034
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 8002F038
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[7]=t0; c->ps1[7]=t1;} // 8002F03C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[28]=c->ps1[28]=RF32(ea);} // 8002F040
  {double t0=S(c->f[0]*c->f[27]), t1=S(c->ps1[0]*c->ps1[27]); c->f[6]=t0; c->ps1[6]=t1;} // 8002F044
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 8002F048
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 8002F04C
  {double t0=S(std::fma(c->f[1],c->f[5],-c->f[7])), t1=S(std::fma(c->ps1[1],c->ps1[5],-c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 8002F050
  {double t0=S(std::fma(c->f[1],c->f[28],-c->f[6])), t1=S(std::fma(c->ps1[1],c->ps1[28],-c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 8002F054
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002F058
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 8002F05C
  {double t0=S(c->f[5]), t1=S(c->ps1[7]); c->f[6]=t0; c->ps1[6]=t1;} // 8002F060
  {double t0=S(c->ps1[5]), t1=S(c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 8002F064
  {double t0=S(c->f[0]+c->ps1[3]), t1=S(c->ps1[26]); c->f[26]=t0; c->ps1[26]=t1;} // 8002F068
  {double t0=-c->f[6], t1=-c->ps1[6]; c->f[0]=t0; c->ps1[0]=t1;} // 8002F06C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,1,0);} // 8002F070
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,0,ea,0,0);} // 8002F074
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002F078
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F07C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002F080
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8002F084
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8002F088
  fcmp(c,0,c->f[1],c->f[2]); // 8002F08C
  if (crb(c,2)) { goto L_8002F0B0; } // 8002F090
  c->f[0]=frsqrte(c->f[1]); // 8002F094
  {uint32_t ea=c->r[2]+0xFFFF83DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8002F098
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 8002F09C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8002F0A0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[3])); // 8002F0A4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8002F0A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8002F0AC
L_8002F0B0:;
  c->f[2]=c->f[26]; // 8002F0B0
  c->lr=0x8002F0B8u; f_800D29B0(c); // 8002F0B4
  c->r[4]=c->r[1]+0x000000A0u; // 8002F0B8
  c->r[3]=c->r[1]+0x00000090u; // 8002F0BC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002F0C0
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8002F0C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8002F0C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8002F0CC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8002F0D0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8002F0D4
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F0D8
  {double t0=S(std::fma(c->f[1],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[1],c->ps1[2],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 8002F0DC
  {double t0=S(c->f[1]+c->ps1[3]), t1=S(c->ps1[25]); c->f[25]=t0; c->ps1[25]=t1;} // 8002F0E0
  fcmp(c,1,c->f[25],c->f[0]); // 8002F0E4
  if (!crb(c,4)) { goto L_8002F0F8; } // 8002F0E8
  c->f[4]=-c->f[4]; // 8002F0EC
  goto L_8002F0F8; // 8002F0F0
L_8002F0F4:;
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002F0F4
L_8002F0F8:;
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F0F8
  cmps(c,1,(int32_t)c->r[31],0); // 8002F0FC
  {uint32_t ea=c->r[2]+0xFFFF83E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F100
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[0]); // 8002F104
  {uint32_t ea=c->r[2]+0xFFFF83E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002F108
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8002F10C
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[1]; // 8002F110
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 8002F114
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[3]; // 8002F118
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[0]);} // 8002F11C
  if (crb(c,6)) { goto L_8002F1C4; } // 8002F120
  c->r[31]=c->r[1]+0x000000F0u; // 8002F124
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 8002F128
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002F12C
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,0,0);} // 8002F130
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8002F134
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 8002F138
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8002F13C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[24]); c->f[24]=t0; c->ps1[24]=t1;} // 8002F140
  c->f[1]=std::fabs(c->f[24]); // 8002F144
  c->lr=0x8002F14Cu; f_800D29A8(c); // 8002F148
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8002F14C
  {uint32_t ea=c->r[2]+0xFFFF83E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F150
  {uint32_t ea=c->r[2]+0xFFFF83D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F154
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8002F158
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8002F15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002F160
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8002F164
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F168
  fcmp(c,1,c->f[1],c->f[0]); // 8002F16C
  setcrb(c,6,crb(c,5)|crb(c,6)); // 8002F170
  if (!crb(c,6)) { goto L_8002F1C4; } // 8002F174
  c->r[5]=R32(c->r[29]+0x00000060u); // 8002F178
  c->r[3]=c->r[31]|c->r[31]; // 8002F17C
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002F180
  c->r[4]=c->r[30]|c->r[30]; // 8002F184
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F188
  c->r[5]=c->r[31]|c->r[31]; // 8002F18C
  {uint32_t ea=c->r[2]+0xFFFF83C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002F190
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8002F194
  {uint32_t ea=c->r[2]+0xFFFF83E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002F198
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8002F19C
  c->r[0]=R32(c->r[1]+0x00000010u); // 8002F1A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8002F1A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F1A8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 8002F1AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8002F1B0
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[2]; // 8002F1B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8002F1B8
  c->f[1]=(c->f[1]>=0.0)?c->f[3]:c->f[0]; // 8002F1BC
  c->lr=0x8002F1C4u; f_8028A69C(c); // 8002F1C0
L_8002F1C4:;
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F1C4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8002F1C8
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F1CC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8002F1D0
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F1D4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8002F1D8
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F1DC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 8002F1E0
L_8002F1E4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002F1E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8002F1E8
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8002F1EC
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8002F1F0
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8002F1F4
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8002F1F8
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8002F1FC
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8002F200
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8002F204
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8002F208
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8002F20C
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8002F210
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 8002F214
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 8002F218
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 8002F21C
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 8002F220
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 8002F224
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 8002F228
  c->r[31]=R32(c->r[10]+0xFFFFFF7Cu); // 8002F22C
  c->r[30]=R32(c->r[10]+0xFFFFFF78u); // 8002F230
  c->r[29]=R32(c->r[10]+0xFFFFFF74u); // 8002F234
  c->lr=c->r[0]; // 8002F238
  c->r[1]=c->r[10]|c->r[10]; // 8002F23C
  return; // 8002F240
}

// fn_8002F244
void f_8002F244(Ctx* __restrict c) {
  trace_call(0x8002F244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002F244
  c->r[0]=c->lr; // 8002F248
  c->r[4]=c->r[13]+0xFFFFA3B8u; // 8002F24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002F250
  c->r[0]=0u+0x0000000Au; // 8002F254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002F258
  c->r[31]=0u+0x00000000u; // 8002F25C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002F260
  c->r[30]=c->r[3]|c->r[3]; // 8002F264
  W32(c->r[3]+0x00000010u,c->r[4]); // 8002F268
  c->r[4]=0u+0x00000000u; // 8002F26C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8002F270
  W32(c->r[3]+0x00000000u,c->r[31]); // 8002F274
  W32(c->r[3]+0x00000004u,c->r[31]); // 8002F278
  W32(c->r[3]+0x00000008u,c->r[31]); // 8002F27C
  c->r[3]=c->r[3]+0x00000040u; // 8002F280
  c->lr=0x8002F288u; f_80032314(c); // 8002F284
  c->r[3]=c->r[30]+0x00000130u; // 8002F288
  c->r[4]=0u+0x00000000u; // 8002F28C
  c->lr=0x8002F294u; f_80032314(c); // 8002F290
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F294
  c->r[3]=c->r[30]+0x000002E0u; // 8002F298
  {uint32_t ea=c->r[30]+0x0000028Cu; WF32(ea,c->f[0]);} // 8002F29C
  {uint32_t ea=c->r[30]+0x00000290u; WF32(ea,c->f[0]);} // 8002F2A0
  c->lr=0x8002F2A8u; f_80031EF8(c); // 8002F2A4
  W32(c->r[30]+0x00000044u,c->r[31]); // 8002F2A8
  c->r[3]=c->r[30]+0x00000318u; // 8002F2AC
  c->r[4]=0u+0x00000000u; // 8002F2B0
  c->r[5]=0u+0x00000054u; // 8002F2B4
  W32(c->r[30]+0x00000134u,c->r[31]); // 8002F2B8
  c->lr=0x8002F2C0u; f_80004350(c); // 8002F2BC
  W32(c->r[30]+0x00000034u,c->r[31]); // 8002F2C0
  c->r[3]=c->r[30]|c->r[30]; // 8002F2C4
  W32(c->r[30]+0x00000220u,c->r[31]); // 8002F2C8
  W32(c->r[30]+0x00000224u,c->r[31]); // 8002F2CC
  W32(c->r[30]+0x00000030u,c->r[31]); // 8002F2D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002F2D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002F2D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002F2DC
  c->lr=c->r[0]; // 8002F2E0
  c->r[1]=c->r[1]+0x00000010u; // 8002F2E4
  return; // 8002F2E8
}

// fn_8002F2EC
void f_8002F2EC(Ctx* __restrict c) {
  trace_call(0x8002F2ECu);
  return; // 8002F2EC
}

// fn_8002F2F0
void f_8002F2F0(Ctx* __restrict c) {
  trace_call(0x8002F2F0u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8002F2F0
  return; // 8002F2F4
}

// fn_8002F2F8
void f_8002F2F8(Ctx* __restrict c) {
  trace_call(0x8002F2F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002F2F8
  c->r[0]=c->lr; // 8002F2FC
  cmps(c,0,(int32_t)c->r[3],0); // 8002F300
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002F304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002F308
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002F30C
  c->r[30]=c->r[3]|c->r[3]; // 8002F310
  if (crb(c,2)) { goto L_8002F3CC; } // 8002F314
  cmps(c,0,(int32_t)c->r[4],0); // 8002F318
  if (!crb(c,1)) { goto L_8002F3CC; } // 8002F31C
  c->lr=0x8002F324u; f_8028B53C(c); // 8002F320
  c->r[31]=0u+0x804B0000u; // 8002F324
  c->r[31]=c->r[31]+0xFFFFC800u; // 8002F328
  c->r[3]=c->r[31]|c->r[31]; // 8002F32C
  c->lr=0x8002F334u; f_8024B0E0(c); // 8002F330
  cmps(c,0,(int32_t)c->r[30],0); // 8002F334
  if (!crb(c,2)) { goto L_8002F348; } // 8002F338
  c->r[3]=c->r[31]|c->r[31]; // 8002F33C
  c->lr=0x8002F344u; f_8024B1C0(c); // 8002F340
  goto L_8002F3CC; // 8002F344
L_8002F348:;
  c->r[0]=0u+0x80000000u; // 8002F348
  cmpu(c,0,c->r[30],c->r[0]); // 8002F34C
  if (crb(c,0)) { goto L_8002F36C; } // 8002F350
  c->r[3]=0u+0x81800000u; // 8002F354
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8002F358
  cmpu(c,0,c->r[30],c->r[0]); // 8002F35C
  if (!crb(c,0)) { goto L_8002F36C; } // 8002F360
  c->r[4]=0u+0x00000000u; // 8002F364
  goto L_8002F3AC; // 8002F368
L_8002F36C:;
  c->r[0]=0u+0x90000000u; // 8002F36C
  cmpu(c,0,c->r[30],c->r[0]); // 8002F370
  if (crb(c,0)) { goto L_8002F38C; } // 8002F374
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8002F378
  cmpu(c,0,c->r[30],c->r[0]); // 8002F37C
  if (!crb(c,0)) { goto L_8002F38C; } // 8002F380
  c->r[4]=0u+0x00000001u; // 8002F384
  goto L_8002F3AC; // 8002F388
L_8002F38C:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8002F38C
  cmpu(c,0,c->r[30],c->r[0]); // 8002F390
  if (crb(c,0)) { goto L_8002F3AC; } // 8002F394
  c->r[3]=0u+0x98000000u; // 8002F398
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8002F39C
  cmpu(c,0,c->r[30],c->r[0]); // 8002F3A0
  if (!crb(c,0)) { goto L_8002F3AC; } // 8002F3A4
  c->r[4]=0u+0x00000002u; // 8002F3A8
L_8002F3AC:;
  c->r[3]=0u+0x804B0000u; // 8002F3AC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8002F3B0
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8002F3B4
  c->r[4]=c->r[30]|c->r[30]; // 8002F3B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002F3BC
  c->lr=0x8002F3C4u; f_8023B550(c); // 8002F3C0
  c->r[3]=c->r[31]|c->r[31]; // 8002F3C4
  c->lr=0x8002F3CCu; f_8024B1C0(c); // 8002F3C8
L_8002F3CC:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002F3D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002F3D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002F3D8
  c->lr=c->r[0]; // 8002F3DC
  c->r[1]=c->r[1]+0x00000010u; // 8002F3E0
  return; // 8002F3E4
}

// fn_8002F3E8
void f_8002F3E8(Ctx* __restrict c) {
  trace_call(0x8002F3E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002F3E8
  c->r[0]=c->lr; // 8002F3EC
  cmps(c,0,(int32_t)c->r[3],0); // 8002F3F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8002F3F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8002F3F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8002F3FC
  c->r[30]=c->r[4]|c->r[4]; // 8002F400
  W32(c->r[1]+0x00000014u,c->r[29]); // 8002F404
  c->r[29]=c->r[3]|c->r[3]; // 8002F408
  if (crb(c,2)) { goto L_8002F528; } // 8002F40C
  c->lr=0x8002F414u; f_80030D3C(c); // 8002F410
  c->r[3]=c->r[29]+0x000002E0u; // 8002F414
  c->r[4]=0u+0xFFFFFFFFu; // 8002F418
  c->lr=0x8002F420u; f_80031F4C(c); // 8002F41C
  c->r[3]=c->r[29]+0x00000130u; // 8002F420
  c->r[4]=0u+0xFFFFFFFFu; // 8002F424
  c->lr=0x8002F42Cu; f_80032440(c); // 8002F428
  c->r[3]=c->r[29]+0x00000040u; // 8002F42C
  c->r[4]=0u+0xFFFFFFFFu; // 8002F430
  c->lr=0x8002F438u; f_80032440(c); // 8002F434
  cmps(c,0,(int32_t)c->r[29],0); // 8002F438
  if (crb(c,2)) { goto L_8002F474; } // 8002F43C
  if (crb(c,2)) { goto L_8002F474; } // 8002F440
  c->r[4]=R32(c->r[29]+0x00000000u); // 8002F444
  cmps(c,0,(int32_t)c->r[4],0); // 8002F448
  if (crb(c,2)) { goto L_8002F464; } // 8002F44C
  c->r[3]=R32(c->r[29]+0x00000010u); // 8002F450
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002F454
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002F458
  c->ctr=c->r[12]; // 8002F45C
  if (true) { c->lr=0x8002F464u; dispatch(c,c->ctr); } // 8002F460
L_8002F464:;
  c->r[0]=0u+0x00000000u; // 8002F464
  W32(c->r[29]+0x00000000u,c->r[0]); // 8002F468
  W32(c->r[29]+0x00000004u,c->r[0]); // 8002F46C
  W32(c->r[29]+0x00000008u,c->r[0]); // 8002F470
L_8002F474:;
  cmps(c,0,(int32_t)c->r[30],0); // 8002F474
  if (!crb(c,1)) { goto L_8002F528; } // 8002F478
  c->lr=0x8002F480u; f_8028B53C(c); // 8002F47C
  c->r[31]=0u+0x804B0000u; // 8002F480
  c->r[31]=c->r[31]+0xFFFFC800u; // 8002F484
  c->r[3]=c->r[31]|c->r[31]; // 8002F488
  c->lr=0x8002F490u; f_8024B0E0(c); // 8002F48C
  cmps(c,0,(int32_t)c->r[29],0); // 8002F490
  if (!crb(c,2)) { goto L_8002F4A4; } // 8002F494
  c->r[3]=c->r[31]|c->r[31]; // 8002F498
  c->lr=0x8002F4A0u; f_8024B1C0(c); // 8002F49C
  goto L_8002F528; // 8002F4A0
L_8002F4A4:;
  c->r[0]=0u+0x80000000u; // 8002F4A4
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4A8
  if (crb(c,0)) { goto L_8002F4C8; } // 8002F4AC
  c->r[3]=0u+0x81800000u; // 8002F4B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8002F4B4
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4B8
  if (!crb(c,0)) { goto L_8002F4C8; } // 8002F4BC
  c->r[30]=0u+0x00000000u; // 8002F4C0
  goto L_8002F508; // 8002F4C4
L_8002F4C8:;
  c->r[0]=0u+0x90000000u; // 8002F4C8
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4CC
  if (crb(c,0)) { goto L_8002F4E8; } // 8002F4D0
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8002F4D4
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4D8
  if (!crb(c,0)) { goto L_8002F4E8; } // 8002F4DC
  c->r[30]=0u+0x00000001u; // 8002F4E0
  goto L_8002F508; // 8002F4E4
L_8002F4E8:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8002F4E8
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4EC
  if (crb(c,0)) { goto L_8002F508; } // 8002F4F0
  c->r[3]=0u+0x98000000u; // 8002F4F4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8002F4F8
  cmpu(c,0,c->r[29],c->r[0]); // 8002F4FC
  if (!crb(c,0)) { goto L_8002F508; } // 8002F500
  c->r[30]=0u+0x00000002u; // 8002F504
L_8002F508:;
  c->r[3]=0u+0x804B0000u; // 8002F508
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8002F50C
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8002F510
  c->r[4]=c->r[29]|c->r[29]; // 8002F514
  c->r[3]=R32(c->r[3]+c->r[0]); // 8002F518
  c->lr=0x8002F520u; f_8023B550(c); // 8002F51C
  c->r[3]=c->r[31]|c->r[31]; // 8002F520
  c->lr=0x8002F528u; f_8024B1C0(c); // 8002F524
L_8002F528:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8002F528
  c->r[3]=c->r[29]|c->r[29]; // 8002F52C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8002F530
  c->r[29]=R32(c->r[1]+0x00000014u); // 8002F534
  c->r[0]=R32(c->r[1]+0x00000024u); // 8002F538
  c->lr=c->r[0]; // 8002F53C
  c->r[1]=c->r[1]+0x00000020u; // 8002F540
  return; // 8002F544
}

// fn_8002F548
void f_8002F548(Ctx* __restrict c) {
  trace_call(0x8002F548u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002F548
  c->r[12]=c->r[1]|c->r[1]; // 8002F54C
  c->r[11]=addc(c,~c->r[11],0xFFFFFDE0u,1); // 8002F550
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002F554
  c->r[0]=c->lr; // 8002F558
  c->r[11]=c->r[12]+0xFFFFFFB0u; // 8002F55C
  W32(c->r[12]+0x00000004u,c->r[0]); // 8002F560
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8002F564
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8002F568
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8002F56C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8002F570
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8002F574
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8002F578
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8002F57C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8002F580
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8002F584
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8002F588
  c->lr=0x8002F590u; f_800C2E48(c); // 8002F58C
  c->r[30]=c->r[3]|c->r[3]; // 8002F590
  c->r[3]=c->r[1]+0x00000070u; // 8002F594
  c->lr=0x8002F59Cu; f_8002FB7C(c); // 8002F598
  c->r[31]=c->r[30]+0x00000040u; // 8002F59C
  c->r[26]=0u+0x00000000u; // 8002F5A0
  goto L_8002F5CC; // 8002F5A4
L_8002F5A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F5A8
  c->r[4]=c->r[26]|c->r[26]; // 8002F5AC
  c->lr=0x8002F5B4u; f_80030068(c); // 8002F5B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8002F5B4
  c->lr=0x8002F5BCu; f_80032530(c); // 8002F5B8
  cmps(c,0,(int32_t)c->r[3],0); // 8002F5BC
  if (!crb(c,2)) { goto L_8002F5C8; } // 8002F5C0
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 8002F5C4
L_8002F5C8:;
  c->r[26]=c->r[26]+0x00000001u; // 8002F5C8
L_8002F5CC:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F5CC
  c->lr=0x8002F5D4u; f_80030078(c); // 8002F5D0
  cmpu(c,0,c->r[26],c->r[3]); // 8002F5D4
  if (crb(c,0)) { IRQCHK(c); goto L_8002F5A8; } // 8002F5D8
  c->r[3]=c->r[30]|c->r[30]; // 8002F5DC
  c->lr=0x8002F5E4u; f_80030078(c); // 8002F5E0
  cmps(c,0,(int32_t)c->r[3],0); // 8002F5E4
  c->r[27]=c->r[3]|c->r[3]; // 8002F5E8
  if (crb(c,2)) { goto L_8002F840; } // 8002F5EC
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[27]=c->ps1[27]=RF32(ea);} // 8002F5F0
  c->r[26]=0u+0x00000000u; // 8002F5F4
  c->f[30]=c->f[27]; // 8002F5F8
  c->f[28]=c->f[27]; // 8002F5FC
  goto L_8002F63C; // 8002F600
L_8002F604:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F604
  c->r[4]=c->r[26]|c->r[26]; // 8002F608
  c->lr=0x8002F610u; f_80030068(c); // 8002F60C
  c->r[28]=R32(c->r[3]+0x00000000u); // 8002F610
  c->r[3]=c->r[28]|c->r[28]; // 8002F614
  c->lr=0x8002F61Cu; f_8002FB80(c); // 8002F618
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[1]); // 8002F61C
  c->r[3]=c->r[28]|c->r[28]; // 8002F620
  c->lr=0x8002F628u; f_8002FB88(c); // 8002F624
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 8002F628
  c->r[3]=c->r[28]|c->r[28]; // 8002F62C
  c->lr=0x8002F634u; f_8002FB90(c); // 8002F630
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[1]); // 8002F634
  c->r[26]=c->r[26]+0x00000001u; // 8002F638
L_8002F63C:;
  cmpu(c,0,c->r[26],c->r[27]); // 8002F63C
  if (crb(c,0)) { IRQCHK(c); goto L_8002F604; } // 8002F640
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8002F644
  fcmp(c,0,c->f[31],c->f[28]); // 8002F648
  if (!crb(c,2)) { goto L_8002F654; } // 8002F64C
  goto L_8002F65C; // 8002F650
L_8002F654:;
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F654
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[28]); // 8002F658
L_8002F65C:;
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[29]=c->ps1[29]=RF32(ea);} // 8002F65C
  fcmp(c,0,c->f[29],c->f[30]); // 8002F660
  if (!crb(c,2)) { goto L_8002F66C; } // 8002F664
  goto L_8002F674; // 8002F668
L_8002F66C:;
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F66C
  c->f[29]=c->ps1[29]=S(c->f[0]/c->f[30]); // 8002F670
L_8002F674:;
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[28]=c->ps1[28]=RF32(ea);} // 8002F674
  fcmp(c,0,c->f[28],c->f[27]); // 8002F678
  if (!crb(c,2)) { goto L_8002F684; } // 8002F67C
  goto L_8002F68C; // 8002F680
L_8002F684:;
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F684
  c->f[28]=c->ps1[28]=S(c->f[0]/c->f[27]); // 8002F688
L_8002F68C:;
  c->r[3]=c->r[30]+0x00000040u; // 8002F68C
  c->lr=0x8002F694u; f_8002FBBC(c); // 8002F690
  c->lr=0x8002F698u; f_80016DAC(c); // 8002F694
  c->lr=0x8002F69Cu; f_8002FB98(c); // 8002F698
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8002F69C
  c->r[3]=c->r[30]+0x00000040u; // 8002F6A0
  c->lr=0x8002F6A8u; f_8002FBC4(c); // 8002F6A4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[30]);} // 8002F6A8
  c->r[26]=0u+0x00000000u; // 8002F6AC
  goto L_8002F734; // 8002F6B0
L_8002F6B4:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F6B4
  c->r[4]=c->r[26]|c->r[26]; // 8002F6B8
  c->lr=0x8002F6C0u; f_80030068(c); // 8002F6BC
  c->r[28]=R32(c->r[3]+0x00000000u); // 8002F6C0
  c->r[3]=c->r[28]|c->r[28]; // 8002F6C4
  c->lr=0x8002F6CCu; f_8002FB80(c); // 8002F6C8
  c->f[27]=c->ps1[27]=S(c->f[31]*c->f[1]); // 8002F6CC
  c->r[3]=c->r[28]|c->r[28]; // 8002F6D0
  c->lr=0x8002F6D8u; f_8002FBBC(c); // 8002F6D4
  c->lr=0x8002F6DCu; f_80016DAC(c); // 8002F6D8
  c->f[1]=c->f[27]; // 8002F6DC
  c->r[4]=c->r[3]|c->r[3]; // 8002F6E0
  c->r[3]=c->r[1]+0x00000060u; // 8002F6E4
  c->lr=0x8002F6ECu; f_8001B5B0(c); // 8002F6E8
  c->r[3]=c->r[30]+0x00000040u; // 8002F6EC
  c->lr=0x8002F6F4u; f_8002FBBC(c); // 8002F6F0
  c->lr=0x8002F6F8u; f_80016DAC(c); // 8002F6F4
  c->r[4]=c->r[1]+0x00000060u; // 8002F6F8
  c->lr=0x8002F700u; f_8001A5B4(c); // 8002F6FC
  c->r[3]=c->r[28]|c->r[28]; // 8002F700
  c->lr=0x8002F708u; f_8002FB90(c); // 8002F704
  c->f[30]=c->ps1[30]=S(c->f[28]*c->f[1]); // 8002F708
  c->r[3]=c->r[28]|c->r[28]; // 8002F70C
  c->lr=0x8002F714u; f_8002FBC4(c); // 8002F710
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F714
  c->r[3]=c->r[30]+0x00000040u; // 8002F718
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8002F71C
  c->lr=0x8002F724u; f_8002FBC4(c); // 8002F720
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002F724
  c->r[26]=c->r[26]+0x00000001u; // 8002F728
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 8002F72C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8002F730
L_8002F734:;
  cmpu(c,0,c->r[26],c->r[27]); // 8002F734
  if (crb(c,0)) { IRQCHK(c); goto L_8002F6B4; } // 8002F738
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8002F73C
  c->r[26]=0u+0x00000000u; // 8002F740
  goto L_8002F798; // 8002F744
L_8002F748:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F748
  c->r[4]=c->r[26]|c->r[26]; // 8002F74C
  c->lr=0x8002F754u; f_80030068(c); // 8002F750
  c->r[28]=R32(c->r[3]+0x00000000u); // 8002F754
  c->r[3]=c->r[28]|c->r[28]; // 8002F758
  c->lr=0x8002F760u; f_8002FB88(c); // 8002F75C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 8002F760
  fcmp(c,0,c->f[0],c->f[30]); // 8002F764
  if (!crb(c,1)) { goto L_8002F794; } // 8002F768
  c->r[3]=c->r[28]|c->r[28]; // 8002F76C
  c->lr=0x8002F774u; f_8002FBF0(c); // 8002F770
  c->lr=0x8002F778u; f_8001D38C(c); // 8002F774
  c->r[28]=c->r[3]|c->r[3]; // 8002F778
  c->r[3]=c->r[30]+0x00000040u; // 8002F77C
  c->lr=0x8002F784u; f_8002FBBC(c); // 8002F780
  c->lr=0x8002F788u; f_80016D50(c); // 8002F784
  c->r[4]=c->r[28]|c->r[28]; // 8002F788
  c->lr=0x8002F790u; f_8002FBCC(c); // 8002F78C
  goto L_8002F7A0; // 8002F790
L_8002F794:;
  c->r[26]=c->r[26]+0x00000001u; // 8002F794
L_8002F798:;
  cmpu(c,0,c->r[26],c->r[27]); // 8002F798
  if (crb(c,0)) { IRQCHK(c); goto L_8002F748; } // 8002F79C
L_8002F7A0:;
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8002F7A0
  c->r[26]=c->r[26]+0x00000001u; // 8002F7A4
  goto L_8002F838; // 8002F7A8
L_8002F7AC:;
  c->r[3]=c->r[30]|c->r[30]; // 8002F7AC
  c->r[4]=c->r[26]|c->r[26]; // 8002F7B0
  c->lr=0x8002F7B8u; f_80030068(c); // 8002F7B4
  c->r[28]=R32(c->r[3]+0x00000000u); // 8002F7B8
  c->r[3]=c->r[28]|c->r[28]; // 8002F7BC
  c->lr=0x8002F7C4u; f_8002FB88(c); // 8002F7C0
  c->f[28]=c->ps1[28]=S(c->f[29]*c->f[1]); // 8002F7C4
  fcmp(c,0,c->f[28],c->f[30]); // 8002F7C8
  if (!crb(c,1)) { goto L_8002F834; } // 8002F7CC
  c->r[3]=c->r[28]|c->r[28]; // 8002F7D0
  c->lr=0x8002F7D8u; f_8002FBF8(c); // 8002F7D4
  c->r[29]=c->r[3]|c->r[3]; // 8002F7D8
  c->r[3]=c->r[28]|c->r[28]; // 8002F7DC
  c->lr=0x8002F7E4u; f_8002FBF0(c); // 8002F7E0
  c->lr=0x8002F7E8u; f_8001D38C(c); // 8002F7E4
  c->r[28]=c->r[3]|c->r[3]; // 8002F7E8
  c->r[3]=c->r[30]+0x00000040u; // 8002F7EC
  c->lr=0x8002F7F4u; f_8002FBF0(c); // 8002F7F0
  c->lr=0x8002F7F8u; f_8001D38C(c); // 8002F7F4
  c->f[1]=c->f[28]; // 8002F7F8
  c->r[5]=c->r[3]|c->r[3]; // 8002F7FC
  c->r[4]=c->r[30]|c->r[30]; // 8002F800
  c->r[6]=c->r[28]|c->r[28]; // 8002F804
  c->r[7]=c->r[29]|c->r[29]; // 8002F808
  c->r[3]=c->r[1]+0x00000050u; // 8002F80C
  c->lr=0x8002F814u; f_80031618(c); // 8002F810
  c->r[3]=c->r[1]+0x00000070u; // 8002F814
  c->r[4]=c->r[1]+0x00000050u; // 8002F818
  c->lr=0x8002F820u; f_8002FBCC(c); // 8002F81C
  c->r[3]=c->r[30]+0x00000040u; // 8002F820
  c->lr=0x8002F828u; f_8002FBBC(c); // 8002F824
  c->lr=0x8002F82Cu; f_80016D50(c); // 8002F828
  c->r[4]=c->r[1]+0x00000070u; // 8002F82C
  c->lr=0x8002F834u; f_8002FBCC(c); // 8002F830
L_8002F834:;
  c->r[26]=c->r[26]+0x00000001u; // 8002F834
L_8002F838:;
  cmpu(c,0,c->r[26],c->r[27]); // 8002F838
  if (crb(c,0)) { IRQCHK(c); goto L_8002F7AC; } // 8002F83C
L_8002F840:;
  c->r[0]=R32(c->r[30]+0x00000220u); // 8002F840
  cmps(c,0,(int32_t)c->r[0],0); // 8002F844
  if (crb(c,2)) { goto L_8002F8DC; } // 8002F848
  c->r[3]=c->r[1]+0x00000170u; // 8002F84C
  c->lr=0x8002F854u; f_8000F854(c); // 8002F850
  c->r[3]=c->r[1]+0x00000140u; // 8002F854
  c->lr=0x8002F85Cu; f_8002F2EC(c); // 8002F858
  c->r[3]=c->r[30]+0x00000040u; // 8002F85C
  c->lr=0x8002F864u; f_8002FBBC(c); // 8002F860
  c->r[4]=c->r[1]+0x00000170u; // 8002F864
  c->lr=0x8002F86Cu; f_800133F0(c); // 8002F868
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F86C
  c->r[3]=c->r[1]+0x00000028u; // 8002F870
  c->lr=0x8002F878u; f_8002FD60(c); // 8002F874
  c->lr=0x8002F87Cu; f_8002FD50(c); // 8002F878
  c->f[30]=c->f[1]; // 8002F87C
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F880
  c->r[3]=c->r[1]+0x0000002Cu; // 8002F884
  c->lr=0x8002F88Cu; f_8002FD60(c); // 8002F888
  c->lr=0x8002F890u; f_8002FD50(c); // 8002F88C
  c->f[31]=c->f[1]; // 8002F890
  {uint32_t ea=c->r[2]+0xFFFF83F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F894
  c->r[3]=c->r[1]+0x00000030u; // 8002F898
  c->lr=0x8002F8A0u; f_8002FD60(c); // 8002F89C
  c->lr=0x8002F8A4u; f_8002FD50(c); // 8002F8A0
  c->f[2]=c->f[31]; // 8002F8A4
  c->r[3]=c->r[1]+0x00000040u; // 8002F8A8
  c->f[3]=c->f[30]; // 8002F8AC
  c->lr=0x8002F8B4u; f_800133DC(c); // 8002F8B0
  c->r[4]=c->r[3]|c->r[3]; // 8002F8B4
  c->r[3]=c->r[1]+0x00000140u; // 8002F8B8
  c->lr=0x8002F8C0u; f_8002FC00(c); // 8002F8BC
  c->r[3]=c->r[1]+0x00000170u; // 8002F8C0
  c->lr=0x8002F8C8u; f_8000E8EC(c); // 8002F8C4
  c->r[4]=c->r[1]+0x00000140u; // 8002F8C8
  c->lr=0x8002F8D0u; f_8002FD68(c); // 8002F8CC
  c->r[3]=c->r[30]+0x00000130u; // 8002F8D0
  c->lr=0x8002F8D8u; f_80032530(c); // 8002F8D4
  c->r[31]=c->r[30]+0x00000130u; // 8002F8D8
L_8002F8DC:;
  c->r[3]=c->r[1]+0x00000100u; // 8002F8DC
  c->lr=0x8002F8E4u; f_8000F854(c); // 8002F8E0
  c->r[3]=c->r[31]|c->r[31]; // 8002F8E4
  c->lr=0x8002F8ECu; f_8002FBF0(c); // 8002F8E8
  c->r[4]=c->r[1]+0x00000100u; // 8002F8EC
  c->lr=0x8002F8F4u; f_800133F0(c); // 8002F8F0
  c->r[3]=c->r[1]+0x00000080u; // 8002F8F4
  c->r[4]=c->r[1]+0x00000100u; // 8002F8F8
  c->lr=0x8002F900u; f_8001CF9C(c); // 8002F8FC
  c->r[5]=c->r[3]|c->r[3]; // 8002F900
  c->r[3]=c->r[1]+0x000000C0u; // 8002F904
  c->r[4]=c->r[30]+0x000002E0u; // 8002F908
  c->lr=0x8002F910u; f_80032094(c); // 8002F90C
  c->r[3]=c->r[1]+0x00000100u; // 8002F910
  c->r[4]=c->r[1]+0x000000C0u; // 8002F914
  c->lr=0x8002F91Cu; f_8002FEB8(c); // 8002F918
  c->r[28]=0u+0x803D0000u; // 8002F91C
  c->r[3]=c->r[28]+0x0000407Cu; // 8002F920
  c->lr=0x8002F928u; f_8000C9B0(c); // 8002F924
  c->r[12]=R32(c->r[3]+0x00000000u); // 8002F928
  c->r[26]=c->r[3]|c->r[3]; // 8002F92C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8002F930
  c->ctr=c->r[12]; // 8002F934
  if (true) { c->lr=0x8002F93Cu; dispatch(c,c->ctr); } // 8002F938
  c->lr=0x8002F940u; f_80010DA0(c); // 8002F93C
  c->r[4]=c->r[3]|c->r[3]; // 8002F940
  c->r[3]=c->r[30]+0x00000020u; // 8002F944
  c->lr=0x8002F94Cu; f_8000E6F4(c); // 8002F948
  c->r[3]=c->r[26]|c->r[26]; // 8002F94C
  c->r[4]=c->r[1]+0x00000100u; // 8002F950
  c->lr=0x8002F958u; f_8002FF24(c); // 8002F954
  c->r[3]=c->r[31]|c->r[31]; // 8002F958
  c->lr=0x8002F960u; f_8002FBC4(c); // 8002F95C
  c->r[4]=c->r[3]|c->r[3]; // 8002F960
  c->r[3]=c->r[1]+0x00000020u; // 8002F964
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F968
  c->lr=0x8002F970u; f_8002FD60(c); // 8002F96C
  c->lr=0x8002F974u; f_8002FD50(c); // 8002F970
  c->r[3]=c->r[1]+0x00000024u; // 8002F974
  c->lr=0x8002F97Cu; f_8002F2F0(c); // 8002F978
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002F97C
  c->r[29]=c->r[3]|c->r[3]; // 8002F980
  c->r[3]=c->r[26]|c->r[26]; // 8002F984
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002F988
  c->ctr=c->r[12]; // 8002F98C
  if (true) { c->lr=0x8002F994u; dispatch(c,c->ctr); } // 8002F990
  c->r[4]=c->r[29]|c->r[29]; // 8002F994
  c->lr=0x8002F99Cu; f_8002FF90(c); // 8002F998
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002F99C
  c->r[3]=c->r[26]|c->r[26]; // 8002F9A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002F9A4
  c->ctr=c->r[12]; // 8002F9A8
  if (true) { c->lr=0x8002F9B0u; dispatch(c,c->ctr); } // 8002F9AC
  {uint32_t ea=c->r[2]+0xFFFF83FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F9B0
  c->lr=0x8002F9B8u; f_80030010(c); // 8002F9B4
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002F9B8
  c->r[3]=c->r[26]|c->r[26]; // 8002F9BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002F9C0
  c->ctr=c->r[12]; // 8002F9C4
  if (true) { c->lr=0x8002F9CCu; dispatch(c,c->ctr); } // 8002F9C8
  {uint32_t ea=c->r[2]+0xFFFF8400u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002F9CC
  c->lr=0x8002F9D4u; f_8003002C(c); // 8002F9D0
  c->r[3]=c->r[28]+0x0000407Cu; // 8002F9D4
  c->lr=0x8002F9DCu; f_8002FF1C(c); // 8002F9D8
  c->lr=0x8002F9E0u; f_80030048(c); // 8002F9DC
  cmps(c,0,(int32_t)c->r[3],0); // 8002F9E0
  c->r[26]=c->r[3]|c->r[3]; // 8002F9E4
  if (crb(c,2)) { goto L_8002FB28; } // 8002F9E8
  c->r[3]=c->r[28]+0x0000407Cu; // 8002F9EC
  c->lr=0x8002F9F4u; f_8002FF1C(c); // 8002F9F0
  c->lr=0x8002F9F8u; f_80030058(c); // 8002F9F4
  c->lr=0x8002F9FCu; f_80030050(c); // 8002F9F8
  cmps(c,0,(int32_t)c->r[3],0); // 8002F9FC
  c->r[27]=c->r[3]|c->r[3]; // 8002FA00
  if (crb(c,2)) { goto L_8002FAA0; } // 8002FA04
  c->r[3]=c->r[26]|c->r[26]; // 8002FA08
  c->r[4]=c->r[1]+0x00000100u; // 8002FA0C
  c->lr=0x8002FA14u; f_8002FF24(c); // 8002FA10
  c->r[3]=c->r[31]|c->r[31]; // 8002FA14
  c->lr=0x8002FA1Cu; f_8002FBC4(c); // 8002FA18
  c->r[4]=c->r[3]|c->r[3]; // 8002FA1C
  c->r[3]=c->r[1]+0x00000018u; // 8002FA20
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FA24
  c->lr=0x8002FA2Cu; f_8002FD60(c); // 8002FA28
  c->lr=0x8002FA30u; f_8002FD50(c); // 8002FA2C
  c->r[3]=c->r[1]+0x0000001Cu; // 8002FA30
  c->lr=0x8002FA38u; f_8002F2F0(c); // 8002FA34
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FA38
  c->r[31]=c->r[3]|c->r[3]; // 8002FA3C
  c->r[3]=c->r[26]|c->r[26]; // 8002FA40
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FA44
  c->ctr=c->r[12]; // 8002FA48
  if (true) { c->lr=0x8002FA50u; dispatch(c,c->ctr); } // 8002FA4C
  c->r[4]=c->r[31]|c->r[31]; // 8002FA50
  c->lr=0x8002FA58u; f_8002FF90(c); // 8002FA54
  c->r[3]=c->r[27]|c->r[27]; // 8002FA58
  c->lr=0x8002FA60u; f_80030060(c); // 8002FA5C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FA60
  c->f[31]=c->f[1]; // 8002FA64
  c->r[3]=c->r[26]|c->r[26]; // 8002FA68
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FA6C
  c->ctr=c->r[12]; // 8002FA70
  if (true) { c->lr=0x8002FA78u; dispatch(c,c->ctr); } // 8002FA74
  c->f[1]=c->f[31]; // 8002FA78
  c->lr=0x8002FA80u; f_80030010(c); // 8002FA7C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FA80
  c->r[3]=c->r[26]|c->r[26]; // 8002FA84
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FA88
  c->ctr=c->r[12]; // 8002FA8C
  if (true) { c->lr=0x8002FA94u; dispatch(c,c->ctr); } // 8002FA90
  {uint32_t ea=c->r[2]+0xFFFF8400u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FA94
  c->lr=0x8002FA9Cu; f_8003002C(c); // 8002FA98
  goto L_8002FB28; // 8002FA9C
L_8002FAA0:;
  c->r[3]=c->r[26]|c->r[26]; // 8002FAA0
  c->r[4]=c->r[1]+0x00000100u; // 8002FAA4
  c->lr=0x8002FAACu; f_8002FF24(c); // 8002FAA8
  c->r[3]=c->r[31]|c->r[31]; // 8002FAAC
  c->lr=0x8002FAB4u; f_8002FBC4(c); // 8002FAB0
  c->r[4]=c->r[3]|c->r[3]; // 8002FAB4
  c->r[3]=c->r[1]+0x00000010u; // 8002FAB8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FABC
  c->lr=0x8002FAC4u; f_8002FD60(c); // 8002FAC0
  c->lr=0x8002FAC8u; f_8002FD50(c); // 8002FAC4
  c->r[3]=c->r[1]+0x00000014u; // 8002FAC8
  c->lr=0x8002FAD0u; f_8002F2F0(c); // 8002FACC
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FAD0
  c->r[31]=c->r[3]|c->r[3]; // 8002FAD4
  c->r[3]=c->r[26]|c->r[26]; // 8002FAD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FADC
  c->ctr=c->r[12]; // 8002FAE0
  if (true) { c->lr=0x8002FAE8u; dispatch(c,c->ctr); } // 8002FAE4
  c->r[4]=c->r[31]|c->r[31]; // 8002FAE8
  c->lr=0x8002FAF0u; f_8002FF90(c); // 8002FAEC
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FAF0
  c->r[3]=c->r[26]|c->r[26]; // 8002FAF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FAF8
  c->ctr=c->r[12]; // 8002FAFC
  if (true) { c->lr=0x8002FB04u; dispatch(c,c->ctr); } // 8002FB00
  {uint32_t ea=c->r[2]+0xFFFF83FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FB04
  c->lr=0x8002FB0Cu; f_80030010(c); // 8002FB08
  c->r[12]=R32(c->r[26]+0x00000000u); // 8002FB0C
  c->r[3]=c->r[26]|c->r[26]; // 8002FB10
  c->r[12]=R32(c->r[12]+0x00000010u); // 8002FB14
  c->ctr=c->r[12]; // 8002FB18
  if (true) { c->lr=0x8002FB20u; dispatch(c,c->ctr); } // 8002FB1C
  {uint32_t ea=c->r[2]+0xFFFF8400u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FB20
  c->lr=0x8002FB28u; f_8003002C(c); // 8002FB24
L_8002FB28:;
  c->r[3]=c->r[30]|c->r[30]; // 8002FB28
  c->lr=0x8002FB30u; f_800302D8(c); // 8002FB2C
  c->r[3]=c->r[30]|c->r[30]; // 8002FB30
  c->lr=0x8002FB38u; f_80030710(c); // 8002FB34
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002FB38
  c->r[11]=c->r[10]+0xFFFFFFB0u; // 8002FB3C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8002FB40
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8002FB44
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8002FB48
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8002FB4C
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8002FB50
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8002FB54
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8002FB58
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8002FB5C
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8002FB60
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8002FB64
  c->lr=0x8002FB6Cu; f_800C2E94(c); // 8002FB68
  c->r[0]=R32(c->r[10]+0x00000004u); // 8002FB6C
  c->lr=c->r[0]; // 8002FB70
  c->r[1]=c->r[10]|c->r[10]; // 8002FB74
  return; // 8002FB78
}

// fn_8002FB7C
void f_8002FB7C(Ctx* __restrict c) {
  trace_call(0x8002FB7Cu);
  return; // 8002FB7C
}

// fn_8002FB80
void f_8002FB80(Ctx* __restrict c) {
  trace_call(0x8002FB80u);
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FB80
  return; // 8002FB84
}

// fn_8002FB88
void f_8002FB88(Ctx* __restrict c) {
  trace_call(0x8002FB88u);
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FB88
  return; // 8002FB8C
}

// fn_8002FB90
void f_8002FB90(Ctx* __restrict c) {
  trace_call(0x8002FB90u);
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FB90
  return; // 8002FB94
}

// fn_8002FB98
void f_8002FB98(Ctx* __restrict c) {
  trace_call(0x8002FB98u);
  c->r[4]=0u+0x804B0000u; // 8002FB98
  {uint32_t ea=c->r[4]+0xFFFFC5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FB9C
  c->r[4]=c->r[4]+0xFFFFC5A0u; // 8002FBA0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8002FBA4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FBA8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8002FBAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FBB0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8002FBB4
  return; // 8002FBB8
}

// fn_8002FBBC
void f_8002FBBC(Ctx* __restrict c) {
  trace_call(0x8002FBBCu);
  c->r[3]=c->r[3]+0x00000020u; // 8002FBBC
  return; // 8002FBC0
}

// fn_8002FBC4
void f_8002FBC4(Ctx* __restrict c) {
  trace_call(0x8002FBC4u);
  c->r[3]=c->r[3]+0x00000050u; // 8002FBC4
  return; // 8002FBC8
}

// fn_8002FBCC
void f_8002FBCC(Ctx* __restrict c) {
  trace_call(0x8002FBCCu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FBCC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002FBD0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FBD4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FBD8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8002FBDC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8002FBE0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8002FBE4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8002FBE8
  return; // 8002FBEC
}

// fn_8002FBF0
void f_8002FBF0(Ctx* __restrict c) {
  trace_call(0x8002FBF0u);
  c->r[3]=c->r[3]+0x00000020u; // 8002FBF0
  return; // 8002FBF4
}

// fn_8002FBF8
void f_8002FBF8(Ctx* __restrict c) {
  trace_call(0x8002FBF8u);
  c->r[3]=R32(c->r[3]+0x000000D8u); // 8002FBF8
  return; // 8002FBFC
}

// fn_8002FC00
void f_8002FC00(Ctx* __restrict c) {
  trace_call(0x8002FC00u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002FC00
  c->r[0]=c->lr; // 8002FC04
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FC08
  W32(c->r[1]+0x00000064u,c->r[0]); // 8002FC0C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8002FC10
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8002FC14
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8002FC18
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8002FC1C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8002FC20
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8002FC24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 8002FC28
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 8002FC2C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[27]);} // 8002FC30
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,27,ea,0,0);} // 8002FC34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002FC38
  c->r[31]=c->r[4]|c->r[4]; // 8002FC3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8002FC40
  c->r[30]=c->r[3]|c->r[3]; // 8002FC44
  c->lr=0x8002FC4Cu; f_800D22F0(c); // 8002FC48
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FC4C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8002FC50
  c->f[1]=c->f[0]; // 8002FC54
  c->lr=0x8002FC5Cu; f_800D22F0(c); // 8002FC58
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FC5C
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8002FC60
  c->f[1]=c->f[0]; // 8002FC64
  c->lr=0x8002FC6Cu; f_800D22F0(c); // 8002FC68
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FC6C
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8002FC70
  c->f[1]=c->f[0]; // 8002FC74
  c->lr=0x8002FC7Cu; f_800D2864(c); // 8002FC78
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FC7C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8002FC80
  c->f[1]=c->f[0]; // 8002FC84
  c->lr=0x8002FC8Cu; f_800D2864(c); // 8002FC88
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FC8C
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8002FC90
  c->f[1]=c->f[0]; // 8002FC94
  c->lr=0x8002FC9Cu; f_800D2864(c); // 8002FC98
  c->f[7]=c->ps1[7]=S(c->f[1]); // 8002FC9C
  c->f[8]=c->ps1[8]=S(c->f[28]*c->f[27]); // 8002FCA0
  c->f[9]=c->ps1[9]=S(c->f[31]*c->f[27]); // 8002FCA4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[7]); // 8002FCA8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[29]); // 8002FCAC
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[29]); // 8002FCB0
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[7]); // 8002FCB4
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[2]); // 8002FCB8
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[29]); // 8002FCBC
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 8002FCC0
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[5]);} // 8002FCC4
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[7]); // 8002FCC8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[6]);} // 8002FCCC
  c->f[2]=-c->f[27]; // 8002FCD0
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[30]); // 8002FCD4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 8002FCD8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[30]); // 8002FCDC
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 8002FCE0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 8002FCE4
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[29]); // 8002FCE8
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[7]); // 8002FCEC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[2]);} // 8002FCF0
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[29]); // 8002FCF4
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[5]); // 8002FCF8
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 8002FCFC
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 8002FD00
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 8002FD04
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8002FD08
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8002FD0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8002FD10
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8002FD14
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8002FD18
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8002FD1C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 8002FD20
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8002FD24
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 8002FD28
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 8002FD2C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,27,ea,0,0);} // 8002FD30
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=RF64(ea);} // 8002FD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8002FD38
  c->r[30]=R32(c->r[1]+0x00000008u); // 8002FD3C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8002FD40
  c->lr=c->r[0]; // 8002FD44
  c->r[1]=c->r[1]+0x00000060u; // 8002FD48
  return; // 8002FD4C
}

// fn_8002FD50
void f_8002FD50(Ctx* __restrict c) {
  trace_call(0x8002FD50u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FD50
  {uint32_t ea=c->r[2]+0xFFFF8408u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FD54
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8002FD58
  return; // 8002FD5C
}

// fn_8002FD60
void f_8002FD60(Ctx* __restrict c) {
  trace_call(0x8002FD60u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8002FD60
  return; // 8002FD64
}

// fn_8002FD68
void f_8002FD68(Ctx* __restrict c) {
  trace_call(0x8002FD68u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8002FD68
  c->r[12]=c->r[1]|c->r[1]; // 8002FD6C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 8002FD70
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8002FD74
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8002FD78
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8002FD7C
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8002FD80
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8002FD84
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FD88
  c->r[5]=c->r[1]+0x00000030u; // 8002FD8C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8002FD90
  c->r[6]=c->r[1]+0x00000020u; // 8002FD94
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8002FD98
  c->r[7]=c->r[1]+0x00000010u; // 8002FD9C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FDA0
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 8002FDA4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002FDA8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[7]=t0; c->ps1[7]=t1;} // 8002FDAC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FDB0
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[10]=t0; c->ps1[10]=t1;} // 8002FDB4
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[11]=t0; c->ps1[11]=t1;} // 8002FDB8
  {double t0=S(c->f[0]*c->f[9]), t1=S(c->ps1[0]*c->f[9]); c->f[31]=t0; c->ps1[31]=t1;} // 8002FDBC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 8002FDC0
  {double t0=S(c->f[2]*c->f[9]), t1=S(c->ps1[2]*c->f[9]); c->f[30]=t0; c->ps1[30]=t1;} // 8002FDC4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002FDC8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,5,ea,1,0);} // 8002FDCC
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[6])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[6])); c->f[2]=t0; c->ps1[2]=t1;} // 8002FDD0
  {double t0=S(std::fma(c->f[5],c->f[1],c->f[7])), t1=S(std::fma(c->ps1[5],c->f[1],c->ps1[7])); c->f[6]=t0; c->ps1[6]=t1;} // 8002FDD4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[13]=c->ps1[13]=RF32(ea);} // 8002FDD8
  {double t0=S(std::fma(c->f[4],c->f[8],c->f[10])), t1=S(std::fma(c->ps1[4],c->f[8],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 8002FDDC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FDE0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 8002FDE4
  {double t0=S(std::fma(c->f[5],c->f[8],c->f[11])), t1=S(std::fma(c->ps1[5],c->f[8],c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 8002FDE8
  {double t0=S(std::fma(c->f[0],c->f[3],c->f[2])), t1=S(std::fma(c->ps1[0],c->f[3],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 8002FDEC
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,1,ea,1,0);} // 8002FDF0
  {double t0=S(std::fma(c->f[4],c->f[13],c->f[31])), t1=S(std::fma(c->ps1[4],c->f[13],c->ps1[31])); c->f[4]=t0; c->ps1[4]=t1;} // 8002FDF4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002FDF8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 8002FDFC
  {double t0=S(std::fma(c->f[1],c->f[3],c->f[6])), t1=S(std::fma(c->ps1[1],c->f[3],c->ps1[6])); c->f[2]=t0; c->ps1[2]=t1;} // 8002FE00
  {double t0=S(std::fma(c->f[0],c->f[9],c->f[10])), t1=S(std::fma(c->ps1[0],c->f[9],c->ps1[10])); c->f[3]=t0; c->ps1[3]=t1;} // 8002FE04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002FE08
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002FE0C
  {double t0=S(std::fma(c->f[1],c->f[9],c->f[11])), t1=S(std::fma(c->ps1[1],c->f[9],c->ps1[11])); c->f[9]=t0; c->ps1[9]=t1;} // 8002FE10
  {uint32_t ea=c->r[3]+0x00000028u; c->f[12]=c->ps1[12]=RF32(ea);} // 8002FE14
  {double t0=S(std::fma(c->f[5],c->f[13],c->f[30])), t1=S(std::fma(c->ps1[5],c->f[13],c->ps1[30])); c->f[5]=t0; c->ps1[5]=t1;} // 8002FE18
  {double t0=S(std::fma(c->f[0],c->f[12],c->f[4])), t1=S(std::fma(c->ps1[0],c->f[12],c->ps1[4])); c->f[0]=t0; c->ps1[0]=t1;} // 8002FE1C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,1,0);} // 8002FE20
  {uint32_t ea=c->r[1]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002FE24
  {double t0=S(std::fma(c->f[1],c->f[12],c->f[5])), t1=S(std::fma(c->ps1[1],c->f[12],c->ps1[5])); c->f[10]=t0; c->ps1[10]=t1;} // 8002FE28
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,3,ea,0,0);} // 8002FE2C
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 8002FE30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002FE34
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002FE38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002FE3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FE40
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,9,ea,1,0);} // 8002FE44
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FE48
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,10,ea,1,0);} // 8002FE4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FE50
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 8002FE54
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 8002FE58
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 8002FE5C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8002FE60
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 8002FE64
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 8002FE68
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 8002FE6C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8002FE70
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8002FE74
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 8002FE78
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 8002FE7C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[6]);} // 8002FE80
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 8002FE84
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 8002FE88
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 8002FE8C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8002FE90
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8002FE94
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8002FE98
  c->r[10]=R32(c->r[1]+0x00000000u); // 8002FE9C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8002FEA0
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8002FEA4
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8002FEA8
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8002FEAC
  c->r[1]=c->r[10]|c->r[10]; // 8002FEB0
  return; // 8002FEB4
}

// fn_8002FEB8
void f_8002FEB8(Ctx* __restrict c) {
  trace_call(0x8002FEB8u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 8002FEB8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002FEBC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002FEC0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002FEC4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002FEC8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002FECC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002FED0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002FED4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FED8
  {uint32_t ea=c->r[4]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002FEDC
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FEE0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FEE4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[11]);} // 8002FEE8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[10]);} // 8002FEEC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[9]);} // 8002FEF0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[8]);} // 8002FEF4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[7]);} // 8002FEF8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[6]);} // 8002FEFC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 8002FF00
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 8002FF04
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 8002FF08
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 8002FF0C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8002FF10
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8002FF14
  return; // 8002FF18
}

// fn_8002FF1C
void f_8002FF1C(Ctx* __restrict c) {
  trace_call(0x8002FF1Cu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8002FF1C
  return; // 8002FF20
}

// fn_8002FF24
void f_8002FF24(Ctx* __restrict c) {
  trace_call(0x8002FF24u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 8002FF24
  c->r[0]=0u+0x00000000u; // 8002FF28
  {uint32_t ea=c->r[4]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 8002FF2C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 8002FF30
  {uint32_t ea=c->r[4]+0x00000010u; c->f[8]=c->ps1[8]=RF32(ea);} // 8002FF34
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8002FF38
  {uint32_t ea=c->r[4]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 8002FF3C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 8002FF40
  {uint32_t ea=c->r[4]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 8002FF44
  {uint32_t ea=c->r[4]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8002FF48
  {uint32_t ea=c->r[4]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8002FF4C
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FF50
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FF54
  W32(c->r[3]+0x00000094u,c->r[0]); // 8002FF58
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[11]);} // 8002FF5C
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[10]);} // 8002FF60
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[9]);} // 8002FF64
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[8]);} // 8002FF68
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[7]);} // 8002FF6C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 8002FF70
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[5]);} // 8002FF74
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[4]);} // 8002FF78
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[3]);} // 8002FF7C
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[2]);} // 8002FF80
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 8002FF84
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8002FF88
  return; // 8002FF8C
}

// fn_8002FF90
void f_8002FF90(Ctx* __restrict c) {
  trace_call(0x8002FF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8002FF90
  c->r[0]=c->lr; // 8002FF94
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8002FF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8002FFA0
  c->r[31]=c->r[3]|c->r[3]; // 8002FFA4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FFA8
  fcmp(c,0,c->f[0],c->f[1]); // 8002FFAC
  c->r[0]=c->cr; // 8002FFB0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 8002FFB4
  c->r[0]=c->r[0]^0x00000001u; // 8002FFB8
  cmps(c,0,(int32_t)c->r[0],0); // 8002FFBC
  if (crb(c,2)) { goto L_8002FFFC; } // 8002FFC0
  {uint32_t ea=c->r[2]+0xFFFF840Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FFC4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8002FFC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8002FFCC
  c->lr=0x8002FFD4u; f_800D2930(c); // 8002FFD0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8002FFD4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8002FFD8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8002FFDC
  c->lr=0x8002FFE4u; f_800D1F48(c); // 8002FFE0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8002FFE4
  {uint32_t ea=c->r[2]+0xFFFF8404u; c->f[0]=c->ps1[0]=RF32(ea);} // 8002FFE8
  c->r[0]=0u+0x00000001u; // 8002FFEC
  W32(c->r[31]+0x00000028u,c->r[0]); // 8002FFF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8002FFF4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 8002FFF8
L_8002FFFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8002FFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80030000
  c->lr=c->r[0]; // 80030004
  c->r[1]=c->r[1]+0x00000010u; // 80030008
  return; // 8003000C
}

// fn_80030010
void f_80030010(Ctx* __restrict c) {
  trace_call(0x80030010u);
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030010
  fcmp(c,0,c->f[0],c->f[1]); // 80030014
  if (crb(c,2)) return; // 80030018
  c->r[0]=0u+0x00000001u; // 8003001C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80030020
  W32(c->r[3]+0x00000028u,c->r[0]); // 80030024
  return; // 80030028
}

// fn_8003002C
void f_8003002C(Ctx* __restrict c) {
  trace_call(0x8003002Cu);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003002C
  fcmp(c,0,c->f[0],c->f[1]); // 80030030
  if (crb(c,2)) return; // 80030034
  c->r[0]=0u+0x00000001u; // 80030038
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8003003C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80030040
  return; // 80030044
}

// fn_80030048
void f_80030048(Ctx* __restrict c) {
  trace_call(0x80030048u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80030048
  return; // 8003004C
}

// fn_80030050
void f_80030050(Ctx* __restrict c) {
  trace_call(0x80030050u);
  c->r[3]=R32(c->r[3]+0x00000094u); // 80030050
  return; // 80030054
}

// fn_80030058
void f_80030058(Ctx* __restrict c) {
  trace_call(0x80030058u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80030058
  return; // 8003005C
}

// fn_80030060
void f_80030060(Ctx* __restrict c) {
  trace_call(0x80030060u);
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80030060
  return; // 80030064
}

// fn_80030068
void f_80030068(Ctx* __restrict c) {
  trace_call(0x80030068u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80030068
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003006C
  c->r[3]=c->r[3]+c->r[0]; // 80030070
  return; // 80030074
}

// fn_80030078
void f_80030078(Ctx* __restrict c) {
  trace_call(0x80030078u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80030078
  c->r[0]=R32(c->r[3]+0x00000004u); // 8003007C
  c->r[0]=c->r[0]-c->r[4]; // 80030080
  c->r[0]=sraw(c,c->r[0],2); // 80030084
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80030088
  return; // 8003008C
}

// fn_80030090
void f_80030090(Ctx* __restrict c) {
  trace_call(0x80030090u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80030090
  c->r[12]=c->r[1]|c->r[1]; // 80030094
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 80030098
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003009C
  c->r[0]=c->lr; // 800300A0
  W32(c->r[12]+0x00000004u,c->r[0]); // 800300A4
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800300A8
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800300AC
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800300B0
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800300B4
  W32(c->r[12]+0xFFFFFFDCu,c->r[31]); // 800300B8
  c->r[31]=0u+0x803D0000u; // 800300BC
  c->r[31]=c->r[31]+0x0000407Cu; // 800300C0
  W32(c->r[12]+0xFFFFFFD8u,c->r[30]); // 800300C4
  W32(c->r[12]+0xFFFFFFD4u,c->r[29]); // 800300C8
  c->r[29]=c->r[3]|c->r[3]; // 800300CC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800300D0
  c->r[3]=R32(c->r[3]+0x00000010u); // 800300D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800300D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800300DC
  c->ctr=c->r[12]; // 800300E0
  if (true) { c->lr=0x800300E8u; dispatch(c,c->ctr); } // 800300E4
  {uint32_t ea=c->r[2]+0xFFFF8404u; c->f[2]=c->ps1[2]=RF32(ea);} // 800300E8
  c->r[30]=c->r[1]+0x00000010u; // 800300EC
  {uint32_t ea=c->r[29]+0x00000070u; c->f[7]=c->ps1[7]=RF32(ea);} // 800300F0
  {uint32_t ea=c->r[29]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800300F4
  {uint32_t ea=c->r[29]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800300F8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 800300FC
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[1]); // 80030100
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80030104
  c->f[12]=c->ps1[12]=S(c->f[2]*c->f[0]); // 80030108
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003010C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 80030110
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[1]); // 80030114
  c->f[0]=c->ps1[0]=S(c->f[12]*c->f[0]); // 80030118
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,8,ea,0,0);} // 8003011C
  c->f[13]=c->ps1[13]=S(c->f[3]*c->f[6]); // 80030120
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,9,ea,1,0);} // 80030124
  c->f[30]=c->ps1[30]=S(c->f[12]*c->f[1]); // 80030128
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[0]); // 8003012C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80030130
  {uint32_t ea=c->r[29]+0x00000020u; psq_load(c,10,ea,0,0);} // 80030134
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[5]); // 80030138
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003013C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 80030140
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[1]); // 80030144
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 80030148
  {uint32_t ea=c->r[29]+0x00000230u; WF32(ea,c->f[3]);} // 8003014C
  c->f[31]=c->ps1[31]=S(c->f[12]*c->f[7]); // 80030150
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[13]); // 80030154
  {uint32_t ea=c->r[29]+0x00000258u; WF32(ea,c->f[0]);} // 80030158
  c->f[3]=c->ps1[3]=S(c->f[30]+c->f[13]); // 8003015C
  {uint32_t ea=c->r[29]+0x00000248u; WF32(ea,c->f[1]);} // 80030160
  c->f[4]=c->ps1[4]=S(c->f[11]*c->f[6]); // 80030164
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[6]); // 80030168
  c->f[30]=c->ps1[30]=S(c->f[11]*c->f[7]); // 8003016C
  {uint32_t ea=c->r[29]+0x00000028u; psq_load(c,11,ea,1,0);} // 80030170
  c->f[6]=c->ps1[6]=S(c->f[31]+c->f[4]); // 80030174
  {uint32_t ea=c->r[29]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80030178
  c->f[4]=c->ps1[4]=S(c->f[31]-c->f[4]); // 8003017C
  c->f[7]=c->ps1[7]=S(c->f[30]-c->f[12]); // 80030180
  {uint32_t ea=c->r[29]+0x00000238u; WF32(ea,c->f[6]);} // 80030184
  c->f[6]=c->ps1[6]=S(c->f[30]+c->f[12]); // 80030188
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003018C
  {uint32_t ea=c->r[29]+0x00000234u; WF32(ea,c->f[7]);} // 80030190
  {double t0=S(c->f[8]-c->f[10]), t1=S(c->ps1[8]-c->ps1[10]); c->f[7]=t0; c->ps1[7]=t1;} // 80030194
  {double t0=S(c->f[9]-c->f[11]), t1=S(c->ps1[9]-c->ps1[11]); c->f[8]=t0; c->ps1[8]=t1;} // 80030198
  {uint32_t ea=c->r[29]+0x00000080u; psq_load(c,13,ea,0,0);} // 8003019C
  {uint32_t ea=c->r[29]+0x00000230u; psq_load(c,10,ea,0,0);} // 800301A0
  {uint32_t ea=c->r[29]+0x00000240u; WF32(ea,c->f[6]);} // 800301A4
  {double t0=S(c->f[10]*c->f[13]), t1=S(c->ps1[10]*c->ps1[13]); c->f[10]=t0; c->ps1[10]=t1;} // 800301A8
  {uint32_t ea=c->r[29]+0x00000238u; psq_load(c,12,ea,1,0);} // 800301AC
  {uint32_t ea=c->r[29]+0x00000244u; WF32(ea,c->f[5]);} // 800301B0
  {uint32_t ea=c->r[29]+0x00000088u; psq_load(c,9,ea,1,0);} // 800301B4
  {uint32_t ea=c->r[29]+0x00000248u; psq_load(c,31,ea,1,0);} // 800301B8
  {double t0=S(c->f[12]*c->f[9]), t1=S(c->ps1[12]*c->ps1[9]); c->f[11]=t0; c->ps1[11]=t1;} // 800301BC
  {uint32_t ea=c->r[29]+0x00000250u; WF32(ea,c->f[4]);} // 800301C0
  {uint32_t ea=c->r[29]+0x00000240u; psq_load(c,5,ea,0,0);} // 800301C4
  {double t0=S(c->f[31]*c->f[9]), t1=S(c->ps1[31]*c->ps1[9]); c->f[6]=t0; c->ps1[6]=t1;} // 800301C8
  {uint32_t ea=c->r[29]+0x00000254u; WF32(ea,c->f[3]);} // 800301CC
  {uint32_t ea=c->r[29]+0x00000258u; psq_load(c,30,ea,1,0);} // 800301D0
  {uint32_t ea=c->r[29]+0x00000250u; psq_load(c,3,ea,0,0);} // 800301D4
  {double t0=S(c->f[5]*c->f[13]), t1=S(c->ps1[5]*c->ps1[13]); c->f[4]=t0; c->ps1[4]=t1;} // 800301D8
  {double t0=S(c->f[30]*c->f[9]), t1=S(c->ps1[30]*c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 800301DC
  {uint32_t ea=c->r[29]+0x00000230u; psq_store(c,10,ea,0,0);} // 800301E0
  {double t0=S(c->f[3]*c->f[13]), t1=S(c->ps1[3]*c->ps1[13]); c->f[3]=t0; c->ps1[3]=t1;} // 800301E4
  {uint32_t ea=c->r[29]+0x00000238u; psq_store(c,11,ea,1,0);} // 800301E8
  {uint32_t ea=c->r[29]+0x00000240u; psq_store(c,4,ea,0,0);} // 800301EC
  {uint32_t ea=c->r[29]+0x00000248u; psq_store(c,6,ea,1,0);} // 800301F0
  {uint32_t ea=c->r[29]+0x00000250u; psq_store(c,3,ea,0,0);} // 800301F4
  {uint32_t ea=c->r[29]+0x00000258u; psq_store(c,9,ea,1,0);} // 800301F8
  {uint32_t ea=c->r[29]+0x00000260u; WF32(ea,c->f[2]);} // 800301FC
  {uint32_t ea=c->r[29]+0x00000264u; WF32(ea,c->f[1]);} // 80030200
  {uint32_t ea=c->r[29]+0x00000268u; WF32(ea,c->f[0]);} // 80030204
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80030208
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,7,ea,0,0);} // 8003020C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80030210
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,8,ea,1,0);} // 80030214
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030218
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003021C
  c->ctr=c->r[12]; // 80030220
  if (true) { c->lr=0x80030228u; dispatch(c,c->ctr); } // 80030224
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030228
  {uint32_t ea=c->r[29]+0x00000230u; WF32(ea,c->f[0]);} // 8003022C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,0,0);} // 80030230
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030234
  {uint32_t ea=c->r[29]+0x00000234u; WF32(ea,c->f[0]);} // 80030238
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,3,ea,1,0);} // 8003023C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030240
  {uint32_t ea=c->r[29]+0x00000238u; WF32(ea,c->f[0]);} // 80030244
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030248
  {uint32_t ea=c->r[29]+0x00000240u; WF32(ea,c->f[0]);} // 8003024C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030250
  {uint32_t ea=c->r[29]+0x00000244u; WF32(ea,c->f[0]);} // 80030254
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030258
  {uint32_t ea=c->r[29]+0x00000248u; WF32(ea,c->f[0]);} // 8003025C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030260
  {uint32_t ea=c->r[29]+0x00000250u; WF32(ea,c->f[0]);} // 80030264
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030268
  {uint32_t ea=c->r[29]+0x00000254u; WF32(ea,c->f[0]);} // 8003026C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030270
  {uint32_t ea=c->r[29]+0x00000258u; WF32(ea,c->f[0]);} // 80030274
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030278
  {uint32_t ea=c->r[29]+0x00000260u; WF32(ea,c->f[0]);} // 8003027C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030280
  {uint32_t ea=c->r[29]+0x00000264u; WF32(ea,c->f[0]);} // 80030284
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030288
  {uint32_t ea=c->r[29]+0x00000268u; WF32(ea,c->f[0]);} // 8003028C
  {uint32_t ea=c->r[29]+0x00000260u; psq_load(c,0,ea,0,0);} // 80030290
  {uint32_t ea=c->r[29]+0x00000268u; psq_load(c,1,ea,1,0);} // 80030294
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80030298
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8003029C
  {uint32_t ea=c->r[29]+0x00000260u; psq_store(c,0,ea,0,0);} // 800302A0
  {uint32_t ea=c->r[29]+0x00000268u; psq_store(c,1,ea,1,0);} // 800302A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800302A8
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800302AC
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800302B0
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 800302B4
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 800302B8
  c->r[31]=R32(c->r[10]+0xFFFFFFDCu); // 800302BC
  c->r[30]=R32(c->r[10]+0xFFFFFFD8u); // 800302C0
  c->r[29]=R32(c->r[10]+0xFFFFFFD4u); // 800302C4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800302C8
  c->lr=c->r[0]; // 800302CC
  c->r[1]=c->r[10]|c->r[10]; // 800302D0
  return; // 800302D4
}

// fn_800302D8
void f_800302D8(Ctx* __restrict c) {
  trace_call(0x800302D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800302D8
  c->r[0]=c->lr; // 800302DC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800302E0
  c->r[11]=c->r[1]+0x00000090u; // 800302E4
  c->lr=0x800302ECu; f_800C2E4C(c); // 800302E8
  c->r[4]=0u+0x803D0000u; // 800302EC
  c->r[30]=c->r[3]|c->r[3]; // 800302F0
  c->r[4]=c->r[4]+0x0000407Cu; // 800302F4
  c->r[31]=R32(c->r[4]+0x00000118u); // 800302F8
  cmps(c,0,(int32_t)c->r[31],0); // 800302FC
  if (crb(c,2)) { goto L_800306F8; } // 80030300
  c->r[3]=R32(c->r[31]+0x00000478u); // 80030304
  c->r[5]=0u+0x00000009u; // 80030308
  cmps(c,0,(int32_t)c->r[3],0); // 8003030C
  if (crb(c,2)) { goto L_80030320; } // 80030310
  c->r[4]=0u+0x00000009u; // 80030314
  c->lr=0x8003031Cu; f_802AD614(c); // 80030318
  c->r[5]=c->r[3]|c->r[3]; // 8003031C
L_80030320:;
  c->r[3]=0u+0x00000001u; // 80030320
  c->r[0]=R32(c->r[31]+0x00000018u); // 80030324
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 80030328
  c->r[4]=c->r[31]+0x00000018u; // 8003032C
  c->r[0]=c->r[3]&c->r[0]; // 80030330
  W32(c->r[1]+0x00000070u,c->r[4]); // 80030334
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 80030338
  W32(c->r[1]+0x00000074u,c->r[5]); // 8003033C
  W32(c->r[1]+0x00000068u,c->r[4]); // 80030340
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 80030344
  if (crb(c,2)) { goto L_80030358; } // 80030348
  c->r[0]=R32(c->r[30]+0x00000220u); // 8003034C
  c->r[0]=c->r[0]^0x00000001u; // 80030350
  W32(c->r[30]+0x00000220u,c->r[0]); // 80030354
L_80030358:;
  c->r[0]=R32(c->r[30]+0x00000220u); // 80030358
  cmps(c,0,(int32_t)c->r[0],0); // 8003035C
  if (crb(c,2)) { goto L_800304A4; } // 80030360
  c->r[3]=0u+0x803D0000u; // 80030364
  c->r[3]=c->r[3]+0x0000407Cu; // 80030368
  c->lr=0x80030370u; f_800B7578(c); // 8003036C
  cmps(c,0,(int32_t)c->r[3],5); // 80030370
  if (!crb(c,2)) { goto L_80030384; } // 80030374
  c->lr=0x8003037Cu; f_8004267C(c); // 80030378
  c->lr=0x80030380u; f_80042790(c); // 8003037C
  goto L_800304A4; // 80030380
L_80030384:;
  c->r[3]=R32(c->r[31]+0x00000478u); // 80030384
  c->r[5]=0u+0x0000000Eu; // 80030388
  cmps(c,0,(int32_t)c->r[3],0); // 8003038C
  if (crb(c,2)) { goto L_800303A0; } // 80030390
  c->r[4]=0u+0x0000000Eu; // 80030394
  c->lr=0x8003039Cu; f_802AD614(c); // 80030398
  c->r[5]=c->r[3]|c->r[3]; // 8003039C
L_800303A0:;
  c->r[3]=0u+0x00000001u; // 800303A0
  c->r[0]=R32(c->r[31]+0x00000020u); // 800303A4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800303A8
  c->r[4]=c->r[31]+0x00000020u; // 800303AC
  c->r[0]=c->r[3]&c->r[0]; // 800303B0
  W32(c->r[1]+0x00000060u,c->r[4]); // 800303B4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800303B8
  W32(c->r[1]+0x00000064u,c->r[5]); // 800303BC
  W32(c->r[1]+0x00000058u,c->r[4]); // 800303C0
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 800303C4
  if (crb(c,2)) { goto L_8003041C; } // 800303C8
  c->r[27]=0u+0x803C0000u; // 800303CC
  c->r[3]=c->r[27]+0x00002300u; // 800303D0
  c->lr=0x800303D8u; f_8003E474(c); // 800303D4
  cmps(c,0,(int32_t)c->r[3],0); // 800303D8
  if (crb(c,2)) { goto L_8003041C; } // 800303DC
  c->r[3]=c->r[27]+0x00002300u; // 800303E0
  c->lr=0x800303E8u; f_8003E474(c); // 800303E4
  c->r[29]=c->r[3]|c->r[3]; // 800303E8
  c->r[3]=c->r[27]+0x00002300u; // 800303EC
  c->lr=0x800303F4u; f_8003E474(c); // 800303F0
  c->r[28]=c->r[3]|c->r[3]; // 800303F4
  c->r[3]=c->r[27]+0x00002300u; // 800303F8
  c->lr=0x80030400u; f_8003E410(c); // 800303FC
  c->r[4]=c->r[3]+c->r[28]; // 80030400
  c->r[3]=c->r[27]+0x00002300u; // 80030404
  c->r[4]=c->r[4]+0xFFFFFFE2u; // 80030408
  c->r[0]=divwu(c->r[4],c->r[29]); // 8003040C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 80030410
  c->r[4]=c->r[4]-c->r[0]; // 80030414
  c->lr=0x8003041Cu; f_8003E408(c); // 80030418
L_8003041C:;
  c->r[3]=R32(c->r[31]+0x00000478u); // 8003041C
  c->r[5]=0u+0x0000000Fu; // 80030420
  cmps(c,0,(int32_t)c->r[3],0); // 80030424
  if (crb(c,2)) { goto L_80030438; } // 80030428
  c->r[4]=0u+0x0000000Fu; // 8003042C
  c->lr=0x80030434u; f_802AD614(c); // 80030430
  c->r[5]=c->r[3]|c->r[3]; // 80030434
L_80030438:;
  c->r[3]=0u+0x00000001u; // 80030438
  c->r[0]=R32(c->r[31]+0x00000020u); // 8003043C
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 80030440
  c->r[4]=c->r[31]+0x00000020u; // 80030444
  c->r[0]=c->r[3]&c->r[0]; // 80030448
  W32(c->r[1]+0x00000050u,c->r[4]); // 8003044C
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 80030450
  W32(c->r[1]+0x00000054u,c->r[5]); // 80030454
  W32(c->r[1]+0x00000048u,c->r[4]); // 80030458
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 8003045C
  if (crb(c,2)) { goto L_800304A4; } // 80030460
  c->r[29]=0u+0x803C0000u; // 80030464
  c->r[3]=c->r[29]+0x00002300u; // 80030468
  c->lr=0x80030470u; f_8003E474(c); // 8003046C
  cmps(c,0,(int32_t)c->r[3],0); // 80030470
  if (crb(c,2)) { goto L_800304A4; } // 80030474
  c->r[3]=c->r[29]+0x00002300u; // 80030478
  c->lr=0x80030480u; f_8003E474(c); // 8003047C
  c->r[28]=c->r[3]|c->r[3]; // 80030480
  c->r[3]=c->r[29]+0x00002300u; // 80030484
  c->lr=0x8003048Cu; f_8003E410(c); // 80030488
  c->r[4]=c->r[3]+0x0000001Eu; // 8003048C
  c->r[3]=c->r[29]+0x00002300u; // 80030490
  c->r[0]=divwu(c->r[4],c->r[28]); // 80030494
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 80030498
  c->r[4]=c->r[4]-c->r[0]; // 8003049C
  c->lr=0x800304A4u; f_8003E408(c); // 800304A0
L_800304A4:;
  c->r[3]=0u+0x803C0000u; // 800304A4
  c->r[4]=R32(c->r[30]+0x00000220u); // 800304A8
  c->r[3]=c->r[3]+0x00002300u; // 800304AC
  c->lr=0x800304B4u; f_8003E404(c); // 800304B0
  c->r[3]=R32(c->r[31]+0x00000478u); // 800304B4
  c->r[5]=0u+0x0000000Bu; // 800304B8
  cmps(c,0,(int32_t)c->r[3],0); // 800304BC
  if (crb(c,2)) { goto L_800304D0; } // 800304C0
  c->r[4]=0u+0x0000000Bu; // 800304C4
  c->lr=0x800304CCu; f_802AD614(c); // 800304C8
  c->r[5]=c->r[3]|c->r[3]; // 800304CC
L_800304D0:;
  c->r[3]=0u+0x00000001u; // 800304D0
  c->r[0]=R32(c->r[31]+0x00000018u); // 800304D4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800304D8
  c->r[4]=c->r[31]+0x00000018u; // 800304DC
  c->r[0]=c->r[3]&c->r[0]; // 800304E0
  W32(c->r[1]+0x00000040u,c->r[4]); // 800304E4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800304E8
  W32(c->r[1]+0x00000044u,c->r[5]); // 800304EC
  W32(c->r[1]+0x00000038u,c->r[4]); // 800304F0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800304F4
  if (crb(c,2)) { goto L_80030588; } // 800304F8
  c->r[28]=0u+0x00000000u; // 800304FC
  c->r[29]=0u+0x803D0000u; // 80030500
  W32(c->r[13]+0xFFFF80A4u,c->r[28]); // 80030504
  c->r[3]=c->r[29]+0x0000407Cu; // 80030508
  c->lr=0x80030510u; f_800B7578(c); // 8003050C
  cmps(c,0,(int32_t)c->r[3],5); // 80030510
  if (!crb(c,2)) { goto L_8003054C; } // 80030514
  c->r[3]=c->r[29]+0x0000407Cu; // 80030518
  c->lr=0x80030520u; f_800B6C2C(c); // 8003051C
  c->r[4]=0u+0x803D0000u; // 80030520
  c->r[3]=0u+0x803C0000u; // 80030524
  c->r[4]=c->r[4]+0x00000280u; // 80030528
  c->r[5]=R32(c->r[4]+0x00000050u); // 8003052C
  c->r[3]=c->r[3]+0x00002300u; // 80030530
  c->r[6]=R32(c->r[4]+0x00000054u); // 80030534
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80030538
  c->lr=0x80030540u; f_8003E2D0(c); // 8003053C
  c->lr=0x80030544u; f_80042794(c); // 80030540
  W32(c->r[13]+0xFFFF80A0u,c->r[28]); // 80030544
  goto L_80030564; // 80030548
L_8003054C:;
  c->r[3]=0u+0x803C0000u; // 8003054C
  c->r[4]=c->r[30]+0x00000150u; // 80030550
  c->r[3]=c->r[3]+0x00002300u; // 80030554
  c->lr=0x8003055Cu; f_8003E22C(c); // 80030558
  c->r[3]=c->r[29]+0x0000407Cu; // 8003055C
  c->lr=0x80030564u; f_800B6C2C(c); // 80030560
L_80030564:;
  c->r[0]=R32(c->r[30]+0x00000220u); // 80030564
  cmps(c,0,(int32_t)c->r[0],0); // 80030568
  if (crb(c,2)) { goto L_80030578; } // 8003056C
  c->r[0]=0u+0x00000000u; // 80030570
  W32(c->r[30]+0x00000220u,c->r[0]); // 80030574
L_80030578:;
  c->lr=0x8003057Cu; f_800422BC(c); // 80030578
  c->lr=0x80030580u; f_8004236C(c); // 8003057C
  c->r[0]=0u+0x00000001u; // 80030580
  W32(c->r[13]+0xFFFF80A4u,c->r[0]); // 80030584
L_80030588:;
  c->r[3]=R32(c->r[31]+0x00000478u); // 80030588
  c->r[5]=0u+0x0000000Du; // 8003058C
  cmps(c,0,(int32_t)c->r[3],0); // 80030590
  if (crb(c,2)) { goto L_800305A4; } // 80030594
  c->r[4]=0u+0x0000000Du; // 80030598
  c->lr=0x800305A0u; f_802AD614(c); // 8003059C
  c->r[5]=c->r[3]|c->r[3]; // 800305A0
L_800305A4:;
  c->r[3]=0u+0x00000001u; // 800305A4
  c->r[0]=R32(c->r[31]+0x00000018u); // 800305A8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800305AC
  c->r[4]=c->r[31]+0x00000018u; // 800305B0
  c->r[0]=c->r[3]&c->r[0]; // 800305B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 800305B8
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800305BC
  W32(c->r[1]+0x00000034u,c->r[5]); // 800305C0
  W32(c->r[1]+0x00000028u,c->r[4]); // 800305C4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800305C8
  if (crb(c,2)) { goto L_800305FC; } // 800305CC
  c->r[3]=0u+0x803D0000u; // 800305D0
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800305D4
  c->r[3]=c->r[3]+0x0000407Cu; // 800305D8
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800305DC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800305E0
  fcmp(c,0,c->f[0],c->f[1]); // 800305E4
  if (!crb(c,2)) { goto L_800305F8; } // 800305E8
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800305EC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800305F0
  goto L_800305FC; // 800305F4
L_800305F8:;
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800305F8
L_800305FC:;
  c->r[3]=R32(c->r[31]+0x00000478u); // 800305FC
  c->r[5]=0u+0x0000000Cu; // 80030600
  cmps(c,0,(int32_t)c->r[3],0); // 80030604
  if (crb(c,2)) { goto L_80030618; } // 80030608
  c->r[4]=0u+0x0000000Cu; // 8003060C
  c->lr=0x80030614u; f_802AD614(c); // 80030610
  c->r[5]=c->r[3]|c->r[3]; // 80030614
L_80030618:;
  c->r[3]=0u+0x00000001u; // 80030618
  c->r[0]=R32(c->r[31]+0x00000018u); // 8003061C
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 80030620
  c->r[4]=c->r[31]+0x00000018u; // 80030624
  c->r[0]=c->r[3]&c->r[0]; // 80030628
  W32(c->r[1]+0x00000020u,c->r[4]); // 8003062C
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 80030630
  W32(c->r[1]+0x00000024u,c->r[5]); // 80030634
  W32(c->r[1]+0x00000018u,c->r[4]); // 80030638
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8003063C
  if (crb(c,2)) { goto L_8003068C; } // 80030640
  c->r[0]=R32(c->r[13]+0xFFFF9490u); // 80030644
  c->r[29]=0u+0x803D0000u; // 80030648
  c->r[3]=c->r[29]+0x0000407Cu; // 8003064C
  c->r[0]=c->r[0]^0x00000001u; // 80030650
  W32(c->r[13]+0xFFFF9490u,c->r[0]); // 80030654
  c->lr=0x8003065Cu; f_800B7570(c); // 80030658
  c->r[5]=c->r[3]|c->r[3]; // 8003065C
  c->r[4]=R32(c->r[13]+0xFFFF9490u); // 80030660
  c->r[3]=c->r[30]|c->r[30]; // 80030664
  c->r[5]=c->r[5]+0x00000028u; // 80030668
  c->lr=0x80030670u; f_800309FC(c); // 8003066C
  c->r[3]=c->r[29]+0x0000407Cu; // 80030670
  c->lr=0x80030678u; f_800B7570(c); // 80030674
  c->r[5]=c->r[3]|c->r[3]; // 80030678
  c->r[4]=R32(c->r[13]+0xFFFF9490u); // 8003067C
  c->r[3]=c->r[30]|c->r[30]; // 80030680
  c->r[5]=c->r[5]+0x00000100u; // 80030684
  c->lr=0x8003068Cu; f_800309FC(c); // 80030688
L_8003068C:;
  c->r[3]=R32(c->r[31]+0x00000478u); // 8003068C
  c->r[5]=0u+0x0000000Au; // 80030690
  cmps(c,0,(int32_t)c->r[3],0); // 80030694
  if (crb(c,2)) { goto L_800306A8; } // 80030698
  c->r[4]=0u+0x0000000Au; // 8003069C
  c->lr=0x800306A4u; f_802AD614(c); // 800306A0
  c->r[5]=c->r[3]|c->r[3]; // 800306A4
L_800306A8:;
  c->r[3]=0u+0x00000001u; // 800306A8
  c->r[0]=R32(c->r[31]+0x00000018u); // 800306AC
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800306B0
  c->r[4]=c->r[31]+0x00000018u; // 800306B4
  c->r[0]=c->r[3]&c->r[0]; // 800306B8
  W32(c->r[1]+0x00000010u,c->r[4]); // 800306BC
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800306C0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800306C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800306C8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800306CC
  if (crb(c,2)) { goto L_800306F8; } // 800306D0
  c->r[3]=0u+0x803C0000u; // 800306D4
  c->r[3]=c->r[3]+0x00002300u; // 800306D8
  c->lr=0x800306E0u; f_8003D398(c); // 800306DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800306E0
  {uint32_t ea=c->r[30]+0x00000150u; WF32(ea,c->f[0]);} // 800306E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800306E8
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[0]);} // 800306EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800306F0
  {uint32_t ea=c->r[30]+0x00000158u; WF32(ea,c->f[0]);} // 800306F4
L_800306F8:;
  c->r[11]=c->r[1]+0x00000090u; // 800306F8
  c->lr=0x80030700u; f_800C2E98(c); // 800306FC
  c->r[0]=R32(c->r[1]+0x00000094u); // 80030700
  c->lr=c->r[0]; // 80030704
  c->r[1]=c->r[1]+0x00000090u; // 80030708
  return; // 8003070C
}

// fn_80030710
void f_80030710(Ctx* __restrict c) {
  trace_call(0x80030710u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80030710
  c->r[12]=c->r[1]|c->r[1]; // 80030714
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 80030718
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003071C
  c->r[0]=c->lr; // 80030720
  W32(c->r[12]+0x00000004u,c->r[0]); // 80030724
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80030728
  c->r[31]=R32(c->r[3]+0x00000030u); // 8003072C
  cmps(c,1,(int32_t)c->r[31],0); // 80030730
  if (crb(c,6)) { goto L_800309E4; } // 80030734
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030738
  c->r[5]=0u+0x804B0000u; // 8003073C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80030740
  c->r[5]=c->r[5]+0xFFFFC570u; // 80030744
  {uint32_t ea=c->r[5]+0x00000010u; c->f[8]=c->ps1[8]=RF32(ea);} // 80030748
  c->r[6]=0u+0x00000000u; // 8003074C
  c->r[4]=R32(c->r[31]+0x00000050u); // 80030750
  c->r[7]=0u+0x00000000u; // 80030754
  c->r[0]=R32(c->r[1]+0x00000040u); // 80030758
  c->r[8]=0u+0x00000000u; // 8003075C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 80030760
  {uint32_t ea=c->r[5]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 80030764
  cmps(c,1,(int32_t)c->r[4],(int32_t)c->r[0]); // 80030768
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8003076C
  c->r[4]=0u+0x00000000u; // 80030770
  {uint32_t ea=c->r[5]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80030774
  {uint32_t ea=c->r[5]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80030778
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003077C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80030780
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030784
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[8]);} // 80030788
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[7]);} // 8003078C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[6]);} // 80030790
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 80030794
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 80030798
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 8003079C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 800307A0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 800307A4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800307A8
  if (!crb(c,6)) { goto L_800307C4; } // 800307AC
  c->r[3]=R32(c->r[31]+0x00000054u); // 800307B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800307B4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800307B8
  if (!crb(c,6)) { goto L_800307C4; } // 800307BC
  c->r[4]=0u+0x00000001u; // 800307C0
L_800307C4:;
  cmps(c,1,(int32_t)c->r[4],0); // 800307C4
  if (crb(c,6)) { goto L_800307E0; } // 800307C8
  c->r[3]=R32(c->r[31]+0x00000058u); // 800307CC
  c->r[0]=R32(c->r[1]+0x00000048u); // 800307D0
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800307D4
  if (!crb(c,6)) { goto L_800307E0; } // 800307D8
  c->r[8]=0u+0x00000001u; // 800307DC
L_800307E0:;
  cmps(c,1,(int32_t)c->r[8],0); // 800307E0
  if (crb(c,6)) { goto L_8003085C; } // 800307E4
  c->r[3]=R32(c->r[31]+0x00000060u); // 800307E8
  c->r[4]=0u+0x00000000u; // 800307EC
  c->r[0]=R32(c->r[1]+0x00000050u); // 800307F0
  c->r[5]=0u+0x00000000u; // 800307F4
  c->r[8]=0u+0x00000000u; // 800307F8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800307FC
  if (!crb(c,6)) { goto L_80030818; } // 80030800
  c->r[3]=R32(c->r[31]+0x00000064u); // 80030804
  c->r[0]=R32(c->r[1]+0x00000054u); // 80030808
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8003080C
  if (!crb(c,6)) { goto L_80030818; } // 80030810
  c->r[8]=0u+0x00000001u; // 80030814
L_80030818:;
  cmps(c,1,(int32_t)c->r[8],0); // 80030818
  if (crb(c,6)) { goto L_80030834; } // 8003081C
  c->r[3]=R32(c->r[31]+0x00000068u); // 80030820
  c->r[0]=R32(c->r[1]+0x00000058u); // 80030824
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80030828
  if (!crb(c,6)) { goto L_80030834; } // 8003082C
  c->r[5]=0u+0x00000001u; // 80030830
L_80030834:;
  cmps(c,1,(int32_t)c->r[5],0); // 80030834
  if (crb(c,6)) { goto L_80030850; } // 80030838
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8003083C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80030840
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80030844
  if (!crb(c,6)) { goto L_80030850; } // 80030848
  c->r[4]=0u+0x00000001u; // 8003084C
L_80030850:;
  cmps(c,1,(int32_t)c->r[4],0); // 80030850
  if (crb(c,6)) { goto L_8003085C; } // 80030854
  c->r[7]=0u+0x00000001u; // 80030858
L_8003085C:;
  cmps(c,1,(int32_t)c->r[7],0); // 8003085C
  if (crb(c,6)) { goto L_800308B8; } // 80030860
  c->r[3]=R32(c->r[31]+0x00000070u); // 80030864
  c->r[4]=0u+0x00000000u; // 80030868
  c->r[0]=R32(c->r[1]+0x00000060u); // 8003086C
  c->r[5]=0u+0x00000000u; // 80030870
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80030874
  if (!crb(c,6)) { goto L_80030890; } // 80030878
  c->r[3]=R32(c->r[31]+0x00000074u); // 8003087C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80030880
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80030884
  if (!crb(c,6)) { goto L_80030890; } // 80030888
  c->r[5]=0u+0x00000001u; // 8003088C
L_80030890:;
  cmps(c,1,(int32_t)c->r[5],0); // 80030890
  if (crb(c,6)) { goto L_800308AC; } // 80030894
  c->r[3]=R32(c->r[31]+0x00000078u); // 80030898
  c->r[0]=R32(c->r[1]+0x00000068u); // 8003089C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800308A0
  if (!crb(c,6)) { goto L_800308AC; } // 800308A4
  c->r[4]=0u+0x00000001u; // 800308A8
L_800308AC:;
  cmps(c,1,(int32_t)c->r[4],0); // 800308AC
  if (crb(c,6)) { goto L_800308B8; } // 800308B0
  c->r[6]=0u+0x00000001u; // 800308B4
L_800308B8:;
  cmps(c,1,(int32_t)c->r[6],0); // 800308B8
  if (!crb(c,6)) { goto L_800309E4; } // 800308BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308C0
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 800308C4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800308C8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308CC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800308D0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308D4
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800308D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308DC
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800308E0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308E4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800308E8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308EC
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800308F0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800308F4
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800308F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800308FC
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 80030900
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80030904
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80030908
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003090C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80030910
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 80030914
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 80030918
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003091C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80030920
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80030924
  fcmp(c,0,c->f[2],c->f[3]); // 80030928
  if (crb(c,2)) { goto L_8003094C; } // 8003092C
  c->f[0]=frsqrte(c->f[2]); // 80030930
  {uint32_t ea=c->r[2]+0xFFFF840Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80030934
  {uint32_t ea=c->r[2]+0xFFFF8410u; c->f[3]=c->ps1[3]=RF32(ea);} // 80030938
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8003093C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80030940
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80030944
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80030948
L_8003094C:;
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 8003094C
  c->r[7]=c->r[31]+0x0000001Cu; // 80030950
  c->r[6]=0u+0x00000001u; // 80030954
  c->r[3]=0u+0x00000003u; // 80030958
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 8003095C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80030960
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 80030964
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 80030968
  {uint32_t ea=c->r[31]+0x00000060u; psq_store(c,0,ea,0,0);} // 8003096C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80030970
  {uint32_t ea=c->r[31]+0x00000068u; psq_store(c,0,ea,0,0);} // 80030974
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80030978
  W32(c->r[1]+0x00000030u,c->r[7]); // 8003097C
  c->r[4]=c->r[5]|c->r[4]; // 80030980
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80030984
  c->r[0]=c->r[4]|c->r[0]; // 80030988
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8003098C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80030990
  W32(c->r[1]+0x00000034u,c->r[6]); // 80030994
  cmps(c,1,(int32_t)c->r[0],0); // 80030998
  W32(c->r[1]+0x00000018u,c->r[7]); // 8003099C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800309A0
  W32(c->r[1]+0x00000020u,c->r[7]); // 800309A4
  W32(c->r[1]+0x00000024u,c->r[6]); // 800309A8
  W32(c->r[1]+0x00000038u,c->r[7]); // 800309AC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800309B0
  W32(c->r[1]+0x00000010u,c->r[7]); // 800309B4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800309B8
  W32(c->r[1]+0x00000028u,c->r[7]); // 800309BC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800309C0
  if (crb(c,6)) { goto L_800309D0; } // 800309C4
  c->r[3]=c->r[31]|c->r[31]; // 800309C8
  c->lr=0x800309D0u; f_80340A20(c); // 800309CC
L_800309D0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800309D0
  cmps(c,1,(int32_t)c->r[0],0); // 800309D4
  if (crb(c,6)) { goto L_800309E4; } // 800309D8
  c->r[3]=c->r[31]|c->r[31]; // 800309DC
  c->lr=0x800309E4u; f_80340B8C(c); // 800309E0
L_800309E4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800309E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800309E8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800309EC
  c->lr=c->r[0]; // 800309F0
  c->r[1]=c->r[10]|c->r[10]; // 800309F4
  return; // 800309F8
}

// fn_800309FC
void f_800309FC(Ctx* __restrict c) {
  trace_call(0x800309FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800309FC
  c->r[0]=c->lr; // 80030A00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80030A04
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80030A08
  c->r[27]=c->r[4]|c->r[4]; // 80030A0C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80030A10
  cmps(c,0,(int32_t)c->r[0],2); // 80030A14
  if (!crb(c,2)) { goto L_80030A9C; } // 80030A18
  c->r[29]=R32(c->r[5]+0x0000001Cu); // 80030A1C
  c->r[28]=0u+0x00000000u; // 80030A20
  c->r[30]=0u+0x00000000u; // 80030A24
  goto L_80030A78; // 80030A28
L_80030A2C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80030A2C
  c->r[31]=R32(c->r[3]+c->r[30]); // 80030A30
  c->r[3]=c->r[31]|c->r[31]; // 80030A34
  c->lr=0x80030A3Cu; f_800420F8(c); // 80030A38
  cmps(c,0,(int32_t)c->r[3],0); // 80030A3C
  if (crb(c,2)) { goto L_80030A50; } // 80030A40
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80030A44
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80030A48
  if (crb(c,2)) { goto L_80030A60; } // 80030A4C
L_80030A50:;
  c->r[3]=c->r[31]|c->r[31]; // 80030A50
  c->lr=0x80030A58u; f_80042120(c); // 80030A54
  cmps(c,0,(int32_t)c->r[3],0); // 80030A58
  if (crb(c,2)) { goto L_80030A70; } // 80030A5C
L_80030A60:;
  c->r[3]=c->r[31]|c->r[31]; // 80030A60
  c->r[5]=c->r[27]|c->r[27]; // 80030A64
  c->r[4]=0u+0x00000007u; // 80030A68
  c->lr=0x80030A70u; f_8030FFA0(c); // 80030A6C
L_80030A70:;
  c->r[30]=c->r[30]+0x00000004u; // 80030A70
  c->r[28]=c->r[28]+0x00000001u; // 80030A74
L_80030A78:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80030A78
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80030A7C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80030A80
  c->r[0]=R32(c->r[4]+0x00000004u); // 80030A84
  c->r[0]=c->r[0]-c->r[3]; // 80030A88
  c->r[0]=sraw(c,c->r[0],2); // 80030A8C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030A90
  cmpu(c,0,c->r[28],c->r[0]); // 80030A94
  if (crb(c,0)) { IRQCHK(c); goto L_80030A2C; } // 80030A98
L_80030A9C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80030A9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80030AA0
  c->lr=c->r[0]; // 80030AA4
  c->r[1]=c->r[1]+0x00000020u; // 80030AA8
  return; // 80030AAC
}

// fn_80030AB0
void f_80030AB0(Ctx* __restrict c) {
  trace_call(0x80030AB0u);
  f_80030D3C(c); return; // 80030AB0
}

// fn_80030AB4
void f_80030AB4(Ctx* __restrict c) {
  trace_call(0x80030AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030AB4
  c->r[0]=c->lr; // 80030AB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80030ABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80030AC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80030AC4
  c->r[30]=c->r[3]|c->r[3]; // 80030AC8
  c->r[3]=0u+0x000000F0u; // 80030ACC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80030AD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80030AD4
  c->r[4]=R32(c->r[13]+0xFFFF9468u); // 80030AD8
  c->lr=0x80030AE0u; f_8036AB9C(c); // 80030ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80030AE0
  c->r[31]=c->r[3]|c->r[3]; // 80030AE4
  if (crb(c,2)) { goto L_80030AF8; } // 80030AE8
  c->r[4]=0u+0x00000000u; // 80030AEC
  c->lr=0x80030AF4u; f_80032314(c); // 80030AF0
  c->r[31]=c->r[3]|c->r[3]; // 80030AF4
L_80030AF8:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80030AF8
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030AFC
  cmpu(c,0,c->r[3],c->r[0]); // 80030B00
  if (crb(c,1)) { goto L_80030BB8; } // 80030B04
  c->r[4]=R32(c->r[30]+0x00000000u); // 80030B08
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030B0C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80030B10
  c->r[0]=c->r[0]-c->r[4]; // 80030B14
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80030B18
  c->r[0]=sraw(c,c->r[0],2); // 80030B1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030B20
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030B24
  c->r[0]=c->r[4]+c->r[0]; // 80030B28
  c->r[12]=R32(c->r[12]+0x00000008u); // 80030B2C
  c->r[28]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030B30
  c->r[4]=c->r[28]|c->r[28]; // 80030B34
  c->ctr=c->r[12]; // 80030B38
  if (true) { c->lr=0x80030B40u; dispatch(c,c->ctr); } // 80030B3C
  c->r[29]=c->r[3]|c->r[3]; // 80030B40
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030B44
  c->r[3]=R32(c->r[30]+0x00000000u); // 80030B48
  c->r[5]=c->r[29]|c->r[29]; // 80030B4C
  goto L_80030B64; // 80030B50
L_80030B54:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80030B54
  c->r[3]=c->r[3]+0x00000004u; // 80030B58
  W32(c->r[5]+0x00000000u,c->r[0]); // 80030B5C
  c->r[5]=c->r[5]+0x00000004u; // 80030B60
L_80030B64:;
  cmpu(c,0,c->r[3],c->r[4]); // 80030B64
  if (!crb(c,2)) { IRQCHK(c); goto L_80030B54; } // 80030B68
  c->r[4]=R32(c->r[30]+0x00000000u); // 80030B6C
  cmps(c,0,(int32_t)c->r[4],0); // 80030B70
  if (crb(c,2)) { goto L_80030B8C; } // 80030B74
  c->r[3]=R32(c->r[30]+0x00000010u); // 80030B78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030B7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80030B80
  c->ctr=c->r[12]; // 80030B84
  if (true) { c->lr=0x80030B8Cu; dispatch(c,c->ctr); } // 80030B88
L_80030B8C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80030B8C
  c->r[4]=c->r[29]+c->r[28]; // 80030B90
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030B94
  W32(c->r[30]+0x00000008u,c->r[4]); // 80030B98
  c->r[0]=c->r[0]-c->r[3]; // 80030B9C
  c->r[0]=sraw(c,c->r[0],2); // 80030BA0
  W32(c->r[30]+0x00000000u,c->r[29]); // 80030BA4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030BA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030BAC
  c->r[0]=c->r[29]+c->r[0]; // 80030BB0
  W32(c->r[30]+0x00000004u,c->r[0]); // 80030BB4
L_80030BB8:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030BB8
  c->r[3]=c->r[31]|c->r[31]; // 80030BBC
  W32(c->r[4]+0x00000000u,c->r[31]); // 80030BC0
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030BC4
  c->r[0]=c->r[4]+0x00000004u; // 80030BC8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80030BCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80030BD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80030BD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80030BD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80030BDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80030BE0
  c->lr=c->r[0]; // 80030BE4
  c->r[1]=c->r[1]+0x00000020u; // 80030BE8
  return; // 80030BEC
}

// fn_80030BF0
void f_80030BF0(Ctx* __restrict c) {
  trace_call(0x80030BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030BF0
  c->r[0]=c->lr; // 80030BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80030BF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80030BFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80030C00
  c->r[30]=c->r[3]|c->r[3]; // 80030C04
  c->r[3]=0u+0x000000F0u; // 80030C08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80030C0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80030C10
  c->r[28]=c->r[4]|c->r[4]; // 80030C14
  c->r[4]=R32(c->r[13]+0xFFFF9468u); // 80030C18
  c->lr=0x80030C20u; f_8036AB9C(c); // 80030C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80030C20
  c->r[31]=c->r[3]|c->r[3]; // 80030C24
  if (crb(c,2)) { goto L_80030C38; } // 80030C28
  c->r[4]=0u+0x00000000u; // 80030C2C
  c->lr=0x80030C34u; f_80032314(c); // 80030C30
  c->r[31]=c->r[3]|c->r[3]; // 80030C34
L_80030C38:;
  c->r[3]=c->r[31]|c->r[31]; // 80030C38
  c->r[4]=c->r[28]|c->r[28]; // 80030C3C
  c->lr=0x80030C44u; f_80033BD4(c); // 80030C40
  c->r[3]=R32(c->r[30]+0x00000008u); // 80030C44
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030C48
  cmpu(c,0,c->r[3],c->r[0]); // 80030C4C
  if (crb(c,1)) { goto L_80030D04; } // 80030C50
  c->r[4]=R32(c->r[30]+0x00000000u); // 80030C54
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030C58
  c->r[3]=R32(c->r[30]+0x00000010u); // 80030C5C
  c->r[0]=c->r[0]-c->r[4]; // 80030C60
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80030C64
  c->r[0]=sraw(c,c->r[0],2); // 80030C68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030C6C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030C70
  c->r[0]=c->r[4]+c->r[0]; // 80030C74
  c->r[12]=R32(c->r[12]+0x00000008u); // 80030C78
  c->r[28]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030C7C
  c->r[4]=c->r[28]|c->r[28]; // 80030C80
  c->ctr=c->r[12]; // 80030C84
  if (true) { c->lr=0x80030C8Cu; dispatch(c,c->ctr); } // 80030C88
  c->r[29]=c->r[3]|c->r[3]; // 80030C8C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030C90
  c->r[3]=R32(c->r[30]+0x00000000u); // 80030C94
  c->r[5]=c->r[29]|c->r[29]; // 80030C98
  goto L_80030CB0; // 80030C9C
L_80030CA0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80030CA0
  c->r[3]=c->r[3]+0x00000004u; // 80030CA4
  W32(c->r[5]+0x00000000u,c->r[0]); // 80030CA8
  c->r[5]=c->r[5]+0x00000004u; // 80030CAC
L_80030CB0:;
  cmpu(c,0,c->r[3],c->r[4]); // 80030CB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80030CA0; } // 80030CB4
  c->r[4]=R32(c->r[30]+0x00000000u); // 80030CB8
  cmps(c,0,(int32_t)c->r[4],0); // 80030CBC
  if (crb(c,2)) { goto L_80030CD8; } // 80030CC0
  c->r[3]=R32(c->r[30]+0x00000010u); // 80030CC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030CC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80030CCC
  c->ctr=c->r[12]; // 80030CD0
  if (true) { c->lr=0x80030CD8u; dispatch(c,c->ctr); } // 80030CD4
L_80030CD8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80030CD8
  c->r[4]=c->r[29]+c->r[28]; // 80030CDC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80030CE0
  W32(c->r[30]+0x00000008u,c->r[4]); // 80030CE4
  c->r[0]=c->r[0]-c->r[3]; // 80030CE8
  c->r[0]=sraw(c,c->r[0],2); // 80030CEC
  W32(c->r[30]+0x00000000u,c->r[29]); // 80030CF0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030CF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030CF8
  c->r[0]=c->r[29]+c->r[0]; // 80030CFC
  W32(c->r[30]+0x00000004u,c->r[0]); // 80030D00
L_80030D04:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030D04
  c->r[3]=c->r[31]|c->r[31]; // 80030D08
  W32(c->r[4]+0x00000000u,c->r[31]); // 80030D0C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80030D10
  c->r[0]=c->r[4]+0x00000004u; // 80030D14
  W32(c->r[30]+0x00000004u,c->r[0]); // 80030D18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80030D1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80030D20
  c->r[29]=R32(c->r[1]+0x00000014u); // 80030D24
  c->r[28]=R32(c->r[1]+0x00000010u); // 80030D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80030D2C
  c->lr=c->r[0]; // 80030D30
  c->r[1]=c->r[1]+0x00000020u; // 80030D34
  return; // 80030D38
}

// fn_80030D3C
void f_80030D3C(Ctx* __restrict c) {
  trace_call(0x80030D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030D3C
  c->r[0]=c->lr; // 80030D40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80030D44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80030D48
  c->r[31]=c->r[3]|c->r[3]; // 80030D4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80030D50
  c->r[30]=0u+0x00000000u; // 80030D54
  W32(c->r[1]+0x00000014u,c->r[29]); // 80030D58
  c->r[29]=0u+0x00000000u; // 80030D5C
  goto L_80030D78; // 80030D60
L_80030D64:;
  c->r[3]=R32(c->r[13]+0xFFFF9468u); // 80030D64
  c->r[4]=R32(c->r[4]+c->r[30]); // 80030D68
  c->lr=0x80030D70u; f_80030EA8(c); // 80030D6C
  c->r[30]=c->r[30]+0x00000004u; // 80030D70
  c->r[29]=c->r[29]+0x00000001u; // 80030D74
L_80030D78:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80030D78
  c->r[0]=R32(c->r[31]+0x00000004u); // 80030D7C
  c->r[0]=c->r[0]-c->r[4]; // 80030D80
  c->r[0]=sraw(c,c->r[0],2); // 80030D84
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030D88
  cmpu(c,0,c->r[29],c->r[0]); // 80030D8C
  if (crb(c,0)) { IRQCHK(c); goto L_80030D64; } // 80030D90
  c->r[3]=c->r[4]-c->r[4]; // 80030D94
  W32(c->r[31]+0x00000004u,c->r[4]); // 80030D98
  c->r[0]=sraw(c,c->r[3],2); // 80030D9C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 80030DA0
  if (crb(c,2)) { goto L_80030DBC; } // 80030DA4
  c->r[0]=sraw(c,c->r[3],2); // 80030DA8
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030DAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030DB0
  c->r[0]=c->r[4]-c->r[0]; // 80030DB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 80030DB8
L_80030DBC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80030DBC
  c->r[0]=R32(c->r[31]+0x00000004u); // 80030DC0
  cmpu(c,0,c->r[4],c->r[0]); // 80030DC4
  if (!crb(c,2)) { goto L_80030DF8; } // 80030DC8
  cmps(c,0,(int32_t)c->r[4],0); // 80030DCC
  if (crb(c,2)) { goto L_80030DE8; } // 80030DD0
  c->r[3]=R32(c->r[31]+0x00000010u); // 80030DD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030DD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80030DDC
  c->ctr=c->r[12]; // 80030DE0
  if (true) { c->lr=0x80030DE8u; dispatch(c,c->ctr); } // 80030DE4
L_80030DE8:;
  c->r[0]=0u+0x00000000u; // 80030DE8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80030DEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80030DF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80030DF4
L_80030DF8:;
  c->r[30]=R32(c->r[31]+0x00000004u); // 80030DF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 80030DFC
  cmpu(c,0,c->r[0],c->r[30]); // 80030E00
  if (!crb(c,1)) { goto L_80030E58; } // 80030E04
  c->r[3]=R32(c->r[31]+0x00000010u); // 80030E08
  c->r[29]=R32(c->r[31]+0x00000000u); // 80030E0C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80030E10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80030E14
  c->r[4]=c->r[29]|c->r[29]; // 80030E18
  c->r[0]=c->r[0]-c->r[29]; // 80030E1C
  c->r[0]=sraw(c,c->r[0],2); // 80030E20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80030E24
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030E28
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030E2C
  c->ctr=c->r[12]; // 80030E30
  if (true) { c->lr=0x80030E38u; dispatch(c,c->ctr); } // 80030E34
  c->r[0]=c->r[30]-c->r[29]; // 80030E38
  W32(c->r[31]+0x00000000u,c->r[3]); // 80030E3C
  c->r[0]=sraw(c,c->r[0],2); // 80030E40
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030E44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80030E48
  c->r[0]=c->r[3]+c->r[0]; // 80030E4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80030E50
  W32(c->r[31]+0x00000008u,c->r[0]); // 80030E54
L_80030E58:;
  c->r[3]=c->r[31]+0x00000318u; // 80030E58
  c->r[4]=0u+0x00000000u; // 80030E5C
  c->r[5]=0u+0x00000054u; // 80030E60
  c->lr=0x80030E68u; f_80004350(c); // 80030E64
  c->r[4]=R32(c->r[31]+0x00000030u); // 80030E68
  c->r[3]=0u+0x803D0000u; // 80030E6C
  c->r[3]=c->r[3]+0x0000407Cu; // 80030E70
  cmps(c,0,(int32_t)c->r[4],0); // 80030E74
  c->r[3]=R32(c->r[3]+0x00000004u); // 80030E78
  if (crb(c,2)) { goto L_80030E8C; } // 80030E7C
  c->lr=0x80030E84u; f_803374D4(c); // 80030E80
  c->r[0]=0u+0x00000000u; // 80030E84
  W32(c->r[31]+0x00000030u,c->r[0]); // 80030E88
L_80030E8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80030E8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80030E90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80030E94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80030E98
  c->lr=c->r[0]; // 80030E9C
  c->r[1]=c->r[1]+0x00000020u; // 80030EA0
  return; // 80030EA4
}

// fn_80030EA8
void f_80030EA8(Ctx* __restrict c) {
  trace_call(0x80030EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030EA8
  c->r[0]=c->lr; // 80030EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80030EB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80030EB4
  c->r[31]=c->r[4]|c->r[4]; // 80030EB8
  c->r[4]=0u+0xFFFFFFFFu; // 80030EBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80030EC0
  c->r[30]=c->r[3]|c->r[3]; // 80030EC4
  c->r[3]=c->r[31]|c->r[31]; // 80030EC8
  c->lr=0x80030ED0u; f_80032440(c); // 80030ECC
  c->r[3]=R32(c->r[30]+0x00000000u); // 80030ED0
  c->r[4]=c->r[31]|c->r[31]; // 80030ED4
  c->lr=0x80030EDCu; f_802A8B4C(c); // 80030ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80030EDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80030EE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80030EE4
  c->lr=c->r[0]; // 80030EE8
  c->r[1]=c->r[1]+0x00000010u; // 80030EEC
  return; // 80030EF0
}

// fn_80030EF4
void f_80030EF4(Ctx* __restrict c) {
  trace_call(0x80030EF4u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80030EF4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80030EF8
  c->r[0]=c->r[0]-c->r[5]; // 80030EFC
  c->r[0]=sraw(c,c->r[0],2); // 80030F00
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030F04
  c->ctr=c->r[0]; // 80030F08
  cmpu(c,0,c->r[0],0x00000000u); // 80030F0C
  if (!crb(c,1)) { goto L_80030F2C; } // 80030F10
L_80030F14:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80030F14
  c->r[0]=R32(c->r[3]+0x00000000u); // 80030F18
  cmpu(c,0,c->r[4],c->r[0]); // 80030F1C
  if (crb(c,2)) return; // 80030F20
  c->r[5]=c->r[5]+0x00000004u; // 80030F24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80030F14; } // 80030F28
L_80030F2C:;
  c->r[3]=0u+0x00000000u; // 80030F2C
  return; // 80030F30
}

// fn_80030F34
void f_80030F34(Ctx* __restrict c) {
  trace_call(0x80030F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030F34
  c->r[0]=c->lr; // 80030F38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80030F3C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80030F40
  c->r[4]=c->r[3]+c->r[0]; // 80030F44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80030F48
  W32(c->r[1]+0x00000018u,c->r[30]); // 80030F4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80030F50
  c->r[29]=c->r[3]|c->r[3]; // 80030F54
  c->r[4]=R32(c->r[4]+0x00000318u); // 80030F58
  c->lr=0x80030F60u; f_80030EF4(c); // 80030F5C
  c->r[31]=c->r[29]|c->r[29]; // 80030F60
  c->r[30]=0u+0x00000000u; // 80030F64
  goto L_80030F80; // 80030F68
L_80030F6C:;
  c->r[4]=R32(c->r[31]+0x00000318u); // 80030F6C
  c->r[3]=c->r[29]|c->r[29]; // 80030F70
  c->lr=0x80030F78u; f_80030EF4(c); // 80030F74
  c->r[31]=c->r[31]+0x00000004u; // 80030F78
  c->r[30]=c->r[30]+0x00000001u; // 80030F7C
L_80030F80:;
  cmps(c,0,(int32_t)c->r[30],21); // 80030F80
  if (!crb(c,0)) { goto L_80030F90; } // 80030F84
  cmps(c,0,(int32_t)c->r[3],0); // 80030F88
  if (crb(c,2)) { IRQCHK(c); goto L_80030F6C; } // 80030F8C
L_80030F90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80030F90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80030F94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80030F98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80030F9C
  c->lr=c->r[0]; // 80030FA0
  c->r[1]=c->r[1]+0x00000020u; // 80030FA4
  return; // 80030FA8
}

// fn_80030FAC
void f_80030FAC(Ctx* __restrict c) {
  trace_call(0x80030FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80030FAC
  c->r[0]=c->lr; // 80030FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80030FB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80030FB8
  c->r[31]=c->r[3]|c->r[3]; // 80030FBC
  c->lr=0x80030FC4u; f_80030EF4(c); // 80030FC0
  c->r[6]=R32(c->r[31]+0x00000000u); // 80030FC4
  c->r[5]=0u+0x00000000u; // 80030FC8
  c->r[7]=R32(c->r[31]+0x00000004u); // 80030FCC
  c->r[4]=c->r[6]|c->r[6]; // 80030FD0
  c->r[0]=c->r[7]-c->r[6]; // 80030FD4
  c->r[0]=sraw(c,c->r[0],2); // 80030FD8
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80030FDC
  c->ctr=c->r[0]; // 80030FE0
  cmpu(c,0,c->r[0],0x00000000u); // 80030FE4
  if (!crb(c,1)) { goto L_80031008; } // 80030FE8
L_80030FEC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80030FEC
  cmpu(c,0,c->r[3],c->r[0]); // 80030FF0
  if (!crb(c,2)) { goto L_80030FFC; } // 80030FF4
  goto L_8003100C; // 80030FF8
L_80030FFC:;
  c->r[4]=c->r[4]+0x00000004u; // 80030FFC
  c->r[5]=c->r[5]+0x00000001u; // 80031000
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80030FEC; } // 80031004
L_80031008:;
  c->r[5]=0u+0xFFFFFFFFu; // 80031008
L_8003100C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8003100C
  c->r[0]=c->r[0]-c->r[6]; // 80031010
  c->r[0]=sraw(c,c->r[0],2); // 80031014
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80031018
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8003101C
  cmpu(c,0,c->r[5],c->r[0]); // 80031020
  if (crb(c,2)) { goto L_80031034; } // 80031024
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80031028
  c->r[4]=R32(c->r[7]+0xFFFFFFFCu); // 8003102C
  W32(c->r[6]+c->r[0],c->r[4]); // 80031030
L_80031034:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 80031034
  c->r[4]=c->r[3]|c->r[3]; // 80031038
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8003103C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80031040
  c->r[3]=R32(c->r[13]+0xFFFF9468u); // 80031044
  c->lr=0x8003104Cu; f_80030EA8(c); // 80031048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003104C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80031050
  c->lr=c->r[0]; // 80031054
  c->r[1]=c->r[1]+0x00000010u; // 80031058
  return; // 8003105C
}

// fn_80031060
void f_80031060(Ctx* __restrict c) {
  trace_call(0x80031060u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80031060
  c->r[4]=R32(c->r[5]+0x00000000u); // 80031064
  c->r[3]=c->r[3]+c->r[0]; // 80031068
  W32(c->r[3]+0x00000318u,c->r[4]); // 8003106C
  return; // 80031070
}

// fn_80031074
void f_80031074(Ctx* __restrict c) {
  trace_call(0x80031074u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80031074
  c->r[0]=c->lr; // 80031078
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003107C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80031080
  W32(c->r[1]+0x00000018u,c->r[30]); // 80031084
  c->r[30]=c->r[4]|c->r[4]; // 80031088
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003108C
  c->r[29]=c->r[3]|c->r[3]; // 80031090
  c->lr=0x80031098u; f_80030AB4(c); // 80031094
  c->r[31]=c->r[3]|c->r[3]; // 80031098
  c->r[3]=c->r[29]|c->r[29]; // 8003109C
  c->r[4]=c->r[30]|c->r[30]; // 800310A0
  c->r[5]=c->r[31]|c->r[31]; // 800310A4
  c->lr=0x800310ACu; f_80031060(c); // 800310A8
  c->r[3]=c->r[31]|c->r[31]; // 800310AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800310B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800310B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800310B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800310BC
  c->lr=c->r[0]; // 800310C0
  c->r[1]=c->r[1]+0x00000020u; // 800310C4
  return; // 800310C8
}

// fn_800310CC
void f_800310CC(Ctx* __restrict c) {
  trace_call(0x800310CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800310CC
  c->r[0]=c->lr; // 800310D0
  c->r[5]=0u+0x00000000u; // 800310D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800310D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800310DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800310E0
  c->r[30]=0u+0x80370000u; // 800310E4
  c->r[4]=c->r[30]+0x00001CC8u; // 800310E8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800310EC
  c->lr=0x800310F4u; f_8031E640(c); // 800310F0
  c->r[31]=0u+0x803C0000u; // 800310F4
  c->r[30]=c->r[30]+0x00001CC8u; // 800310F8
  W32(c->r[31]+0x000025F4u,c->r[3]); // 800310FC
  c->r[4]=c->r[30]+0x00000011u; // 80031100
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031104
  c->r[5]=0u+0x00000000u; // 80031108
  c->lr=0x80031110u; f_8031E640(c); // 8003110C
  c->r[31]=c->r[31]+0x000025F4u; // 80031110
  c->r[4]=c->r[30]+0x00000026u; // 80031114
  W32(c->r[31]+0x00000004u,c->r[3]); // 80031118
  c->r[5]=0u+0x00000000u; // 8003111C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031120
  c->lr=0x80031128u; f_8031E640(c); // 80031124
  W32(c->r[31]+0x00000008u,c->r[3]); // 80031128
  c->r[4]=c->r[30]+0x0000003Bu; // 8003112C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031130
  c->r[5]=0u+0x00000000u; // 80031134
  c->lr=0x8003113Cu; f_8031E640(c); // 80031138
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8003113C
  c->r[4]=c->r[30]+0x00000051u; // 80031140
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031144
  c->r[5]=0u+0x00000000u; // 80031148
  c->lr=0x80031150u; f_8031E640(c); // 8003114C
  W32(c->r[31]+0x00000010u,c->r[3]); // 80031150
  c->r[4]=c->r[30]+0x00000062u; // 80031154
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031158
  c->r[5]=0u+0x00000000u; // 8003115C
  c->lr=0x80031164u; f_8031E640(c); // 80031160
  W32(c->r[31]+0x00000014u,c->r[3]); // 80031164
  c->r[4]=c->r[30]+0x00000072u; // 80031168
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003116C
  c->r[5]=0u+0x00000000u; // 80031170
  c->lr=0x80031178u; f_8031E640(c); // 80031174
  W32(c->r[31]+0x00000018u,c->r[3]); // 80031178
  c->r[4]=c->r[30]+0x00000086u; // 8003117C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031180
  c->r[5]=0u+0x00000000u; // 80031184
  c->lr=0x8003118Cu; f_8031E640(c); // 80031188
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 8003118C
  c->r[4]=c->r[30]+0x0000009Bu; // 80031190
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031194
  c->r[5]=0u+0x00000000u; // 80031198
  c->lr=0x800311A0u; f_8031E640(c); // 8003119C
  W32(c->r[31]+0x00000020u,c->r[3]); // 800311A0
  c->r[4]=c->r[30]+0x000000ACu; // 800311A4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800311A8
  c->r[5]=0u+0x00000000u; // 800311AC
  c->lr=0x800311B4u; f_8031E640(c); // 800311B0
  W32(c->r[31]+0x00000024u,c->r[3]); // 800311B4
  c->r[4]=c->r[30]+0x000000C1u; // 800311B8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800311BC
  c->r[5]=0u+0x00000000u; // 800311C0
  c->lr=0x800311C8u; f_8031E640(c); // 800311C4
  W32(c->r[31]+0x00000028u,c->r[3]); // 800311C8
  c->r[4]=c->r[30]+0x000000D6u; // 800311CC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800311D0
  c->r[5]=0u+0x00000000u; // 800311D4
  c->lr=0x800311DCu; f_8031E640(c); // 800311D8
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800311DC
  c->r[4]=c->r[30]+0x000000ECu; // 800311E0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800311E4
  c->r[5]=0u+0x00000000u; // 800311E8
  c->lr=0x800311F0u; f_8031E640(c); // 800311EC
  W32(c->r[31]+0x00000030u,c->r[3]); // 800311F0
  c->r[4]=c->r[30]+0x000000FDu; // 800311F4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800311F8
  c->r[5]=0u+0x00000000u; // 800311FC
  c->lr=0x80031204u; f_8031E640(c); // 80031200
  W32(c->r[31]+0x00000034u,c->r[3]); // 80031204
  c->r[4]=c->r[30]+0x0000010Du; // 80031208
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003120C
  c->r[5]=0u+0x00000000u; // 80031210
  c->lr=0x80031218u; f_8031E640(c); // 80031214
  W32(c->r[31]+0x00000038u,c->r[3]); // 80031218
  c->r[4]=c->r[30]+0x00000121u; // 8003121C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031220
  c->r[5]=0u+0x00000000u; // 80031224
  c->lr=0x8003122Cu; f_8031E640(c); // 80031228
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 8003122C
  c->r[4]=c->r[30]+0x00000136u; // 80031230
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031234
  c->r[5]=0u+0x00000000u; // 80031238
  c->lr=0x80031240u; f_8031E640(c); // 8003123C
  W32(c->r[31]+0x00000040u,c->r[3]); // 80031240
  c->r[4]=c->r[30]+0x00000147u; // 80031244
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031248
  c->r[5]=0u+0x00000000u; // 8003124C
  c->lr=0x80031254u; f_8031E640(c); // 80031250
  W32(c->r[31]+0x00000044u,c->r[3]); // 80031254
  c->r[4]=c->r[30]+0x00000158u; // 80031258
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003125C
  c->r[5]=0u+0x00000000u; // 80031260
  c->lr=0x80031268u; f_8031E640(c); // 80031264
  W32(c->r[31]+0x00000048u,c->r[3]); // 80031268
  c->r[4]=c->r[30]+0x00000168u; // 8003126C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031270
  c->r[5]=0u+0x00000000u; // 80031274
  c->lr=0x8003127Cu; f_8031E640(c); // 80031278
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8003127C
  c->r[4]=c->r[30]+0x00000179u; // 80031280
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80031284
  c->r[5]=0u+0x00000000u; // 80031288
  c->lr=0x80031290u; f_8031E640(c); // 8003128C
  W32(c->r[31]+0x00000050u,c->r[3]); // 80031290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80031294
  c->r[30]=R32(c->r[1]+0x00000008u); // 80031298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003129C
  c->lr=c->r[0]; // 800312A0
  c->r[1]=c->r[1]+0x00000010u; // 800312A4
  return; // 800312A8
}

// fn_800312AC
void f_800312AC(Ctx* __restrict c) {
  trace_call(0x800312ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800312AC
  c->r[0]=c->lr; // 800312B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800312B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800312B8
  c->r[31]=0u+0x803C0000u; // 800312BC
  c->r[31]=c->r[31]+0x000025F4u; // 800312C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800312C4
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 800312C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800312CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800312D0
  c->r[28]=0u+0x00000000u; // 800312D4
L_800312D8:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 800312D8
  c->r[3]=c->r[29]|c->r[29]; // 800312DC
  c->lr=0x800312E4u; f_8024B0E0(c); // 800312E0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800312E4
  cmpu(c,0,c->r[4],c->r[30]); // 800312E8
  if (!crb(c,2)) { goto L_800312FC; } // 800312EC
  c->r[3]=c->r[29]|c->r[29]; // 800312F0
  c->lr=0x800312F8u; f_8024B1C0(c); // 800312F4
  goto L_80031334; // 800312F8
L_800312FC:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800312FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80031300
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80031304
  cmpu(c,0,c->r[0],0x00000001u); // 80031308
  if (!crb(c,2)) { goto L_80031328; } // 8003130C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80031310
  cmpu(c,0,c->r[0],0x00000001u); // 80031314
  if (!crb(c,2)) { goto L_80031328; } // 80031318
  c->r[3]=c->r[29]|c->r[29]; // 8003131C
  c->r[4]=c->r[31]|c->r[31]; // 80031320
  c->lr=0x80031328u; f_8031EEDC(c); // 80031324
L_80031328:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 80031328
  c->r[3]=c->r[29]|c->r[29]; // 8003132C
  c->lr=0x80031334u; f_8024B1C0(c); // 80031330
L_80031334:;
  c->r[28]=c->r[28]+0x00000001u; // 80031334
  c->r[31]=c->r[31]+0x00000004u; // 80031338
  cmps(c,0,(int32_t)c->r[28],21); // 8003133C
  if (crb(c,0)) { IRQCHK(c); goto L_800312D8; } // 80031340
  c->r[0]=R32(c->r[1]+0x00000024u); // 80031344
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80031348
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003134C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80031350
  c->r[28]=R32(c->r[1]+0x00000010u); // 80031354
  c->lr=c->r[0]; // 80031358
  c->r[1]=c->r[1]+0x00000020u; // 8003135C
  return; // 80031360
}

// fn_80031364
void f_80031364(Ctx* __restrict c) {
  trace_call(0x80031364u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80031364
  c->r[12]=c->r[1]|c->r[1]; // 80031368
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8003136C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80031370
  c->r[0]=c->lr; // 80031374
  c->r[11]=c->r[12]+0xFFFFFFE0u; // 80031378
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003137C
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80031380
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80031384
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 80031388
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003138C
  c->lr=0x80031394u; f_800C2E3C(c); // 80031390
  c->r[4]=0u+0x803D0000u; // 80031394
  c->r[27]=0u+0x803C0000u; // 80031398
  c->r[4]=c->r[4]+0x0000407Cu; // 8003139C
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800313A0
  c->r[29]=R32(c->r[4]+0x00000004u); // 800313A4
  c->r[25]=c->r[3]|c->r[3]; // 800313A8
  {uint32_t ea=c->r[2]+0xFFFF8414u; c->f[31]=c->ps1[31]=RF32(ea);} // 800313AC
  c->r[27]=c->r[27]+0x000025F4u; // 800313B0
  c->r[26]=0u+0x00000000u; // 800313B4
  c->r[24]=0u+0x00000000u; // 800313B8
L_800313BC:;
  c->r[28]=R32(c->r[27]+0x00000000u); // 800313BC
  c->r[31]=0u+0x00000000u; // 800313C0
  c->r[30]=R32(c->r[29]+0x000000A4u); // 800313C4
  c->r[4]=c->r[28]|c->r[28]; // 800313C8
  goto L_800313E8; // 800313CC
L_800313D0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800313D0
  c->r[3]=rotl(c->r[31],5)&0xFFFFFFE0u; // 800313D4
  c->r[4]=c->r[4]+0x00000001u; // 800313D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800313DC
  c->r[0]=c->r[31]+c->r[0]; // 800313E0
  c->r[31]=c->r[3]+c->r[0]; // 800313E4
L_800313E8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800313E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800313EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800313D0; } // 800313F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 800313F4
  c->r[4]=R32(c->r[30]+0x00000004u); // 800313F8
  c->r[0]=divwu(c->r[31],c->r[3]); // 800313FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80031400
  c->r[0]=c->r[31]-c->r[0]; // 80031404
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80031408
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003140C
  goto L_8003144C; // 80031410
L_80031414:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80031414
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80031418
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003141C
  c->r[23]=c->r[3]+c->r[0]; // 80031420
  c->r[0]=R32(c->r[3]+c->r[0]); // 80031424
  cmpu(c,0,c->r[0],c->r[31]); // 80031428
  if (!crb(c,2)) { goto L_80031448; } // 8003142C
  c->r[3]=R32(c->r[23]+0x00000004u); // 80031430
  c->r[4]=c->r[28]|c->r[28]; // 80031434
  c->lr=0x8003143Cu; f_800CA380(c); // 80031438
  cmps(c,0,(int32_t)c->r[3],0); // 8003143C
  if (!crb(c,2)) { goto L_80031448; } // 80031440
  goto L_80031458; // 80031444
L_80031448:;
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 80031448
L_8003144C:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003144C
  if (!crb(c,2)) { IRQCHK(c); goto L_80031414; } // 80031450
  c->r[23]=0u+0x00000000u; // 80031454
L_80031458:;
  cmps(c,0,(int32_t)c->r[23],0); // 80031458
  if (!crb(c,2)) { goto L_80031468; } // 8003145C
  c->r[3]=0u+0x00000000u; // 80031460
  goto L_8003146C; // 80031464
L_80031468:;
  c->r[3]=c->r[23]+0x00000008u; // 80031468
L_8003146C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003146C
  if (!crb(c,2)) { goto L_8003147C; } // 80031470
  c->r[3]=0u+0x00000000u; // 80031474
  goto L_80031480; // 80031478
L_8003147C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003147C
L_80031480:;
  cmps(c,0,(int32_t)c->r[3],0); // 80031480
  if (crb(c,2)) { goto L_800314D0; } // 80031484
  c->r[28]=R32(c->r[3]+0x000000D4u); // 80031488
  c->r[3]=c->r[25]|c->r[25]; // 8003148C
  c->r[4]=c->r[26]|c->r[26]; // 80031490
  c->lr=0x80031498u; f_80031074(c); // 80031494
  c->r[23]=c->r[3]|c->r[3]; // 80031498
  c->r[4]=c->r[28]|c->r[28]; // 8003149C
  c->lr=0x800314A4u; f_80033BD4(c); // 800314A0
  {uint32_t ea=c->r[23]+0x000000C8u; WF32(ea,c->f[30]);} // 800314A4
  {uint32_t ea=c->r[23]+0x000000C4u; WF32(ea,c->f[30]);} // 800314A8
  {uint32_t ea=c->r[23]+0x000000C0u; WF32(ea,c->f[30]);} // 800314AC
  {uint32_t ea=c->r[23]+0x000000E4u; WF32(ea,c->f[30]);} // 800314B0
  {uint32_t ea=c->r[23]+0x000000E0u; WF32(ea,c->f[30]);} // 800314B4
  {uint32_t ea=c->r[23]+0x000000DCu; WF32(ea,c->f[30]);} // 800314B8
  W32(c->r[23]+0x00000054u,c->r[24]); // 800314BC
  c->r[3]=R32(c->r[28]+0x000000A4u); // 800314C0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800314C4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800314C8
  {uint32_t ea=c->r[23]+0x00000050u; WF32(ea,c->f[0]);} // 800314CC
L_800314D0:;
  c->r[26]=c->r[26]+0x00000001u; // 800314D0
  c->r[27]=c->r[27]+0x00000004u; // 800314D4
  cmps(c,0,(int32_t)c->r[26],21); // 800314D8
  if (crb(c,0)) { IRQCHK(c); goto L_800313BC; } // 800314DC
  c->r[3]=0u+0x804B0000u; // 800314E0
  c->r[4]=0u+0x80370000u; // 800314E4
  c->r[7]=c->r[3]+0xFFFFC570u; // 800314E8
  {uint32_t ea=c->r[3]+0xFFFFC570u; c->f[9]=c->ps1[9]=RF32(ea);} // 800314EC
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800314F0
  c->r[4]=c->r[4]+0x00001CC8u; // 800314F4
  {uint32_t ea=c->r[7]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 800314F8
  c->r[3]=c->r[29]|c->r[29]; // 800314FC
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80031500
  c->r[4]=c->r[4]+0x00000189u; // 80031504
  {uint32_t ea=c->r[7]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80031508
  c->r[5]=c->r[1]+0x00000070u; // 8003150C
  {uint32_t ea=c->r[7]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80031510
  c->r[6]=0u+0x00000080u; // 80031514
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80031518
  {uint32_t ea=c->r[7]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003151C
  {uint32_t ea=c->r[7]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031520
  {uint32_t ea=c->r[7]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031524
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 80031528
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8003152C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[7]);} // 80031530
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[6]);} // 80031534
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[5]);} // 80031538
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 8003153C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 80031540
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 80031544
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80031548
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8003154C
  c->lr=0x80031554u; f_8033A304(c); // 80031550
  c->r[3]=c->r[29]|c->r[29]; // 80031554
  c->r[4]=c->r[1]+0x00000070u; // 80031558
  c->r[5]=c->r[1]+0x00000040u; // 8003155C
  c->r[6]=0u+0x00000000u; // 80031560
  c->lr=0x80031568u; f_80337358(c); // 80031564
  W32(c->r[25]+0x00000030u,c->r[3]); // 80031568
  c->r[27]=0u+0x00000000u; // 8003156C
  c->r[5]=c->r[3]+0x0000001Cu; // 80031570
  c->r[26]=0u+0x00000001u; // 80031574
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80031578
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[26]<<((c->r[27])&31)); // 8003157C
  W32(c->r[1]+0x00000028u,c->r[5]); // 80031580
  c->r[28]=c->r[3]|c->r[3]; // 80031584
  c->r[0]=c->r[4]&c->r[0]; // 80031588
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[0]>>((c->r[27])&31)); cr0(c,c->r[0]); // 8003158C
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 80031590
  W32(c->r[1]+0x00000010u,c->r[5]); // 80031594
  W32(c->r[1]+0x00000014u,c->r[27]); // 80031598
  if (crb(c,2)) { goto L_800315E4; } // 8003159C
  c->lr=0x800315A4u; f_8034007C(c); // 800315A0
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800315A4
  c->r[5]=c->r[28]+0x0000001Cu; // 800315A8
  c->r[3]=((c->r[27])&0x20)?0u:(c->r[26]<<((c->r[27])&31)); // 800315AC
  c->r[0]=((c->r[26])&0x20)?0u:(c->r[26]<<((c->r[26])&31)); // 800315B0
  c->r[3]=c->r[4]&~c->r[3]; // 800315B4
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800315B8
  c->r[0]=c->r[3]|c->r[0]; // 800315BC
  W32(c->r[1]+0x00000030u,c->r[5]); // 800315C0
  W32(c->r[1]+0x00000034u,c->r[27]); // 800315C4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800315C8
  W32(c->r[1]+0x0000001Cu,c->r[27]); // 800315CC
  W32(c->r[1]+0x00000038u,c->r[5]); // 800315D0
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 800315D4
  W32(c->r[1]+0x00000020u,c->r[5]); // 800315D8
  W32(c->r[1]+0x00000024u,c->r[26]); // 800315DC
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800315E0
L_800315E4:;
  c->r[3]=R32(c->r[25]+0x00000030u); // 800315E4
  c->lr=0x800315ECu; f_8034007C(c); // 800315E8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800315EC
  c->r[11]=c->r[10]+0xFFFFFFE0u; // 800315F0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800315F4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800315F8
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 800315FC
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80031600
  c->lr=0x80031608u; f_800C2E88(c); // 80031604
  c->r[0]=R32(c->r[10]+0x00000004u); // 80031608
  c->lr=c->r[0]; // 8003160C
  c->r[1]=c->r[10]|c->r[10]; // 80031610
  return; // 80031614
}

// fn_80031618
void f_80031618(Ctx* __restrict c) {
  trace_call(0x80031618u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80031618
  c->r[12]=c->r[1]|c->r[1]; // 8003161C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF50u,1); // 80031620
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80031624
  c->r[0]=c->lr; // 80031628
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003162C
  cmps(c,0,(int32_t)c->r[7],0); // 80031630
  W32(c->r[12]+0x00000004u,c->r[0]); // 80031634
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 80031638
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003163C
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80031640
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,0,ea,0,0);} // 80031644
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80031648
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003164C
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 80031650
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80031654
  c->f[30]=c->f[1]; // 80031658
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 8003165C
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80031660
  {double t0=S(std::fma(c->f[1],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[1],c->ps1[0],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 80031664
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80031668
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003166C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80031670
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80031674
  W32(c->r[12]+0xFFFFFFBCu,c->r[31]); // 80031678
  c->r[31]=c->r[6]|c->r[6]; // 8003167C
  W32(c->r[12]+0xFFFFFFB8u,c->r[30]); // 80031680
  c->r[30]=c->r[5]|c->r[5]; // 80031684
  W32(c->r[12]+0xFFFFFFB4u,c->r[29]); // 80031688
  c->r[29]=c->r[3]|c->r[3]; // 8003168C
  if (crb(c,2)) { goto L_800316C4; } // 80031690
  c->f[1]=std::fabs(c->f[2]); // 80031694
  {uint32_t ea=c->r[2]+0xFFFF8418u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031698
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8003169C
  fcmp(c,0,c->f[1],c->f[0]); // 800316A0
  if (!crb(c,0)) { goto L_800316AC; } // 800316A4
  c->f[2]=c->f[1]; // 800316A8
L_800316AC:;
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800316AC
  fcmp(c,0,c->f[2],c->f[0]); // 800316B0
  if (!crb(c,1)) { goto L_800316F0; } // 800316B4
  c->f[2]=-c->f[2]; // 800316B8
  {uint32_t ea=c->r[2]+0xFFFF841Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800316BC
  goto L_800316F0; // 800316C0
L_800316C4:;
  c->f[1]=std::fabs(c->f[2]); // 800316C4
  {uint32_t ea=c->r[2]+0xFFFF8418u; c->f[0]=c->ps1[0]=RF32(ea);} // 800316C8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800316CC
  fcmp(c,0,c->f[1],c->f[0]); // 800316D0
  if (!crb(c,0)) { goto L_800316DC; } // 800316D4
  c->f[2]=c->f[1]; // 800316D8
L_800316DC:;
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800316DC
  fcmp(c,0,c->f[2],c->f[0]); // 800316E0
  if (!crb(c,0)) { goto L_800316F0; } // 800316E4
  c->f[2]=-c->f[2]; // 800316E8
  {uint32_t ea=c->r[2]+0xFFFF841Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800316EC
L_800316F0:;
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[2]); // 800316F0
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800316F4
  {uint32_t ea=c->r[2]+0xFFFF8420u; c->f[0]=c->ps1[0]=RF32(ea);} // 800316F8
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[3]); // 800316FC
  fcmp(c,0,c->f[6],c->f[0]); // 80031700
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80031704
  if (!crb(c,2)) { goto L_80031844; } // 80031708
  c->f[0]=-c->f[6]; // 8003170C
  {uint32_t ea=c->r[2]+0xFFFF8410u; c->f[3]=c->ps1[3]=RF32(ea);} // 80031710
  {uint32_t ea=c->r[2]+0xFFFF840Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80031714
  c->f[5]=(c->f[0]>=0.0)?c->f[1]:c->f[6]; // 80031718
  c->f[0]=frsqrte(c->f[5]); // 8003171C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80031720
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80031724
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[5],c->f[1],-c->f[3])); // 80031728
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8003172C
  c->f[29]=c->ps1[29]=S(c->f[6]*c->f[0]); // 80031730
  c->f[1]=c->f[29]; // 80031734
  c->lr=0x8003173Cu; f_800D29B0(c); // 80031738
  c->f[3]=c->ps1[3]=fres(c->f[29]); // 8003173C
  {uint32_t ea=c->r[2]+0xFFFF8404u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031740
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031744
  c->f[29]=c->ps1[29]=S(-std::fma(c->f[3],c->f[29],-c->f[2])); // 80031748
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8003174C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80031750
  c->f[29]=c->ps1[29]=S(c->f[3]*c->f[29]); // 80031754
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[0]); // 80031758
  c->lr=0x80031760u; f_800D2864(c); // 8003175C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80031760
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[30]); // 80031764
  c->f[28]=c->ps1[28]=S(c->f[29]*c->f[0]); // 80031768
  c->lr=0x80031770u; f_800D2864(c); // 8003176C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80031770
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 80031774
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,0,0);} // 80031778
  c->r[3]=c->r[1]+0x00000030u; // 8003177C
  {double t0=S(c->f[0]*c->f[28]), t1=S(c->ps1[0]*c->f[28]); c->f[0]=t0; c->ps1[0]=t1;} // 80031780
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,3,ea,0,0);} // 80031784
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 80031788
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003178C
  {double t0=S(c->f[2]*c->f[28]), t1=S(c->ps1[2]*c->f[28]); c->f[2]=t0; c->ps1[2]=t1;} // 80031790
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,7,ea,0,0);} // 80031794
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031798
  c->r[4]=c->r[1]+0x00000020u; // 8003179C
  c->f[8]=c->ps1[8]=S(c->f[31]*c->f[1]); // 800317A0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,0,0);} // 800317A4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 800317A8
  c->r[3]=c->r[1]+0x00000040u; // 800317AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 800317B0
  c->r[5]=c->r[1]+0x00000050u; // 800317B4
  {double t0=S(c->f[3]*c->f[8]), t1=S(c->ps1[3]*c->f[8]); c->f[1]=t0; c->ps1[1]=t1;} // 800317B8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800317BC
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->f[8]); c->f[2]=t0; c->ps1[2]=t1;} // 800317C0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800317C4
  c->r[6]=c->r[1]+0x00000010u; // 800317C8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800317CC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,2,ea,0,0);} // 800317D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800317D4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800317D8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800317DC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800317E0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[6]);} // 800317E4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 800317E8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,5,ea,0,0);} // 800317EC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 800317F0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 800317F4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 800317F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 800317FC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80031800
  {double t0=S(c->f[5]+c->f[2]), t1=S(c->ps1[5]+c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80031804
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 80031808
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8003180C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 80031810
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80031814
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031818
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003181C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031820
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80031824
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,1,ea,0,0);} // 80031828
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003182C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031830
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[2]);} // 80031834
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 80031838
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8003183C
  goto L_80031864; // 80031840
L_80031844:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80031844
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031848
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003184C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031850
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 80031854
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 80031858
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8003185C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80031860
L_80031864:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80031864
  c->r[0]=R32(c->r[10]+0x00000004u); // 80031868
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003186C
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80031870
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80031874
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80031878
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8003187C
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80031880
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80031884
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80031888
  c->r[31]=R32(c->r[10]+0xFFFFFFBCu); // 8003188C
  c->r[30]=R32(c->r[10]+0xFFFFFFB8u); // 80031890
  c->r[29]=R32(c->r[10]+0xFFFFFFB4u); // 80031894
  c->lr=c->r[0]; // 80031898
  c->r[1]=c->r[10]|c->r[10]; // 8003189C
  return; // 800318A0
}

// fn_800318A4
void f_800318A4(Ctx* __restrict c) {
  trace_call(0x800318A4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800318A4
  c->r[12]=c->r[1]|c->r[1]; // 800318A8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF00u,1); // 800318AC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800318B0
  c->r[0]=c->lr; // 800318B4
  c->r[11]=c->r[12]+0xFFFFFFA0u; // 800318B8
  W32(c->r[12]+0x00000004u,c->r[0]); // 800318BC
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800318C0
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800318C4
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800318C8
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800318CC
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 800318D0
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 800318D4
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 800318D8
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 800318DC
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 800318E0
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 800318E4
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 800318E8
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 800318EC
  c->lr=0x800318F4u; f_800C2E1C(c); // 800318F0
  c->r[6]=0u+0x803D0000u; // 800318F4
  c->r[0]=R32(c->r[3]+0x00000224u); // 800318F8
  c->r[6]=c->r[6]+0x0000407Cu; // 800318FC
  c->r[15]=c->r[3]|c->r[3]; // 80031900
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80031904
  cmpu(c,0,c->r[0],c->r[4]); // 80031908
  c->r[17]=c->r[4]|c->r[4]; // 8003190C
  c->r[16]=R32(c->r[5]+0x00000010u); // 80031910
  if (crb(c,2)) { goto L_80031E4C; } // 80031914
  W32(c->r[3]+0x00000224u,c->r[4]); // 80031918
  c->r[3]=c->r[6]|c->r[6]; // 8003191C
  c->lr=0x80031924u; f_800B7570(c); // 80031920
  c->r[0]=R32(c->r[3]+0x00000018u); // 80031924
  cmps(c,0,(int32_t)c->r[0],9); // 80031928
  if (crb(c,2)) { goto L_80031950; } // 8003192C
  c->r[0]=R32(c->r[15]+0x00000224u); // 80031930
  cmps(c,0,(int32_t)c->r[0],0); // 80031934
  if (crb(c,2)) { goto L_80031948; } // 80031938
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003193C
  c->lr=0x80031944u; f_80047154(c); // 80031940
  goto L_80031950; // 80031944
L_80031948:;
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 80031948
  c->lr=0x80031950u; f_800471A4(c); // 8003194C
L_80031950:;
  c->r[3]=0u+0x803C0000u; // 80031950
  c->r[4]=c->r[17]|c->r[17]; // 80031954
  c->r[3]=c->r[3]+0x00002300u; // 80031958
  c->lr=0x80031960u; f_8003E564(c); // 8003195C
  c->r[0]=R32(c->r[15]+0x00000224u); // 80031960
  cmps(c,0,(int32_t)c->r[0],0); // 80031964
  if (crb(c,2)) { goto L_80031A5C; } // 80031968
  c->r[12]=R32(c->r[16]+0x00000000u); // 8003196C
  c->r[3]=c->r[16]|c->r[16]; // 80031970
  c->r[12]=R32(c->r[12]+0x00000010u); // 80031974
  c->ctr=c->r[12]; // 80031978
  if (true) { c->lr=0x80031980u; dispatch(c,c->ctr); } // 8003197C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80031980
  W32(c->r[15]+0x00000270u,c->r[0]); // 80031984
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031988
  {uint32_t ea=c->r[15]+0x00000274u; WF32(ea,c->f[0]);} // 8003198C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031990
  {uint32_t ea=c->r[15]+0x00000278u; WF32(ea,c->f[0]);} // 80031994
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031998
  {uint32_t ea=c->r[15]+0x0000027Cu; WF32(ea,c->f[0]);} // 8003199C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319A0
  {uint32_t ea=c->r[15]+0x00000280u; WF32(ea,c->f[0]);} // 800319A4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319A8
  {uint32_t ea=c->r[15]+0x00000284u; WF32(ea,c->f[0]);} // 800319AC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319B0
  {uint32_t ea=c->r[15]+0x00000288u; WF32(ea,c->f[0]);} // 800319B4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800319B8
  {uint32_t ea=c->r[15]+0x0000028Cu; WF32(ea,c->f[0]);} // 800319BC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319C0
  {uint32_t ea=c->r[15]+0x00000290u; WF32(ea,c->f[0]);} // 800319C4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319C8
  {uint32_t ea=c->r[15]+0x00000294u; WF32(ea,c->f[0]);} // 800319CC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800319D0
  W32(c->r[15]+0x00000298u,c->r[0]); // 800319D4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319D8
  {uint32_t ea=c->r[15]+0x000002A0u; WF32(ea,c->f[0]);} // 800319DC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319E0
  {uint32_t ea=c->r[15]+0x000002A4u; WF32(ea,c->f[0]);} // 800319E4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319E8
  {uint32_t ea=c->r[15]+0x000002A8u; WF32(ea,c->f[0]);} // 800319EC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800319F0
  {uint32_t ea=c->r[15]+0x000002ACu; WF32(ea,c->f[0]);} // 800319F4
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800319F8
  {uint32_t ea=c->r[15]+0x000002B0u; WF32(ea,c->f[0]);} // 800319FC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A00
  {uint32_t ea=c->r[15]+0x000002B4u; WF32(ea,c->f[0]);} // 80031A04
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A08
  {uint32_t ea=c->r[15]+0x000002B8u; WF32(ea,c->f[0]);} // 80031A0C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A10
  {uint32_t ea=c->r[15]+0x000002BCu; WF32(ea,c->f[0]);} // 80031A14
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A18
  {uint32_t ea=c->r[15]+0x000002C0u; WF32(ea,c->f[0]);} // 80031A1C
  {uint32_t ea=c->r[3]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A20
  {uint32_t ea=c->r[15]+0x000002C4u; WF32(ea,c->f[0]);} // 80031A24
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A28
  {uint32_t ea=c->r[15]+0x000002C8u; WF32(ea,c->f[0]);} // 80031A2C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A30
  {uint32_t ea=c->r[15]+0x000002CCu; WF32(ea,c->f[0]);} // 80031A34
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A38
  {uint32_t ea=c->r[15]+0x000002D0u; WF32(ea,c->f[0]);} // 80031A3C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A40
  {uint32_t ea=c->r[15]+0x000002D4u; WF32(ea,c->f[0]);} // 80031A44
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A48
  {uint32_t ea=c->r[15]+0x000002D8u; WF32(ea,c->f[0]);} // 80031A4C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A50
  {uint32_t ea=c->r[15]+0x000002DCu; WF32(ea,c->f[0]);} // 80031A54
  goto L_80031E4C; // 80031A58
L_80031A5C:;
  {uint32_t ea=c->r[2]+0xFFFF8404u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031A5C
  c->r[4]=c->r[1]+0x00000010u; // 80031A60
  {uint32_t ea=c->r[15]+0x00000074u; c->f[9]=c->ps1[9]=RF32(ea);} // 80031A64
  c->r[31]=0u+0x00000000u; // 80031A68
  {uint32_t ea=c->r[15]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031A6C
  c->r[3]=c->r[16]|c->r[16]; // 80031A70
  {uint32_t ea=c->r[15]+0x00000070u; c->f[11]=c->ps1[11]=RF32(ea);} // 80031A74
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[9]); // 80031A78
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[0]); // 80031A7C
  {uint32_t ea=c->r[15]+0x0000007Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80031A80
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[11]); // 80031A84
  {uint32_t ea=c->r[15]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 80031A88
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[9]); // 80031A8C
  c->f[26]=c->ps1[26]=S(c->f[29]*c->f[0]); // 80031A90
  c->f[28]=c->ps1[28]=S(c->f[29]*c->f[8]); // 80031A94
  {uint32_t ea=c->r[15]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 80031A98
  c->f[27]=c->ps1[27]=S(c->f[30]*c->f[11]); // 80031A9C
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[10]=c->ps1[10]=RF32(ea);} // 80031AA0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[26]); // 80031AA4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[11]); // 80031AA8
  c->f[3]=c->ps1[3]=S(c->f[27]-c->f[28]); // 80031AAC
  {uint32_t ea=c->r[15]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 80031AB0
  c->f[7]=c->ps1[7]=S(c->f[10]-c->f[2]); // 80031AB4
  {uint32_t ea=c->r[15]+0x00000080u; psq_load(c,12,ea,0,0);} // 80031AB8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[26]); // 80031ABC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80031AC0
  c->f[3]=c->ps1[3]=S(c->f[27]+c->f[28]); // 80031AC4
  {uint32_t ea=c->r[15]+0x00000088u; psq_load(c,13,ea,1,0);} // 80031AC8
  c->f[28]=c->ps1[28]=S(c->f[30]*c->f[8]); // 80031ACC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 80031AD0
  c->f[27]=c->ps1[27]=S(c->f[29]*c->f[11]); // 80031AD4
  c->f[2]=c->ps1[2]=S(c->f[10]-c->f[2]); // 80031AD8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 80031ADC
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[8]); // 80031AE0
  c->f[3]=c->ps1[3]=S(c->f[27]+c->f[28]); // 80031AE4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,7,ea,0,0);} // 80031AE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80031AEC
  {double t0=S(c->f[7]*c->f[12]), t1=S(c->ps1[7]*c->ps1[12]); c->f[2]=t0; c->ps1[2]=t1;} // 80031AF0
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[9]); // 80031AF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80031AF8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,11,ea,0,0);} // 80031AFC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80031B00
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80031B04
  c->f[9]=c->ps1[9]=S(c->f[29]-c->f[30]); // 80031B08
  {double t0=S(c->f[11]*c->f[12]), t1=S(c->ps1[11]*c->ps1[12]); c->f[31]=t0; c->ps1[31]=t1;} // 80031B0C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 80031B10
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[9]);} // 80031B14
  c->f[8]=c->ps1[8]=S(c->f[27]-c->f[28]); // 80031B18
  {double t0=S(c->f[3]*c->f[13]), t1=S(c->ps1[3]*c->ps1[13]); c->f[11]=t0; c->ps1[11]=t1;} // 80031B1C
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,31,ea,0,0);} // 80031B20
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,1,0);} // 80031B24
  c->f[7]=c->ps1[7]=S(c->f[29]+c->f[30]); // 80031B28
  W32(c->r[16]+0x00000094u,c->r[31]); // 80031B2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031B30
  {double t0=S(c->f[9]*c->f[13]), t1=S(c->ps1[9]*c->ps1[13]); c->f[9]=t0; c->ps1[9]=t1;} // 80031B34
  {uint32_t ea=c->r[16]+0x000000A0u; WF32(ea,c->f[2]);} // 80031B38
  c->f[2]=c->ps1[2]=S(c->f[10]-c->f[0]); // 80031B3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80031B40
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,11,ea,1,0);} // 80031B44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031B48
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80031B4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031B50
  {uint32_t ea=c->r[16]+0x000000A4u; WF32(ea,c->f[3]);} // 80031B54
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,3,ea,1,0);} // 80031B58
  {uint32_t ea=c->r[16]+0x000000A8u; WF32(ea,c->f[2]);} // 80031B5C
  {double t0=S(c->f[3]*c->f[13]), t1=S(c->ps1[3]*c->ps1[13]); c->f[2]=t0; c->ps1[2]=t1;} // 80031B60
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031B64
  {uint32_t ea=c->r[16]+0x000000B0u; WF32(ea,c->f[1]);} // 80031B68
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,9,ea,1,0);} // 80031B6C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[8]);} // 80031B70
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031B74
  {uint32_t ea=c->r[16]+0x000000B4u; WF32(ea,c->f[0]);} // 80031B78
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,2,ea,1,0);} // 80031B7C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[7]);} // 80031B80
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031B84
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,2,ea,0,0);} // 80031B88
  {uint32_t ea=c->r[16]+0x000000B8u; WF32(ea,c->f[1]);} // 80031B8C
  {double t0=S(c->f[2]*c->f[12]), t1=S(c->ps1[2]*c->ps1[12]); c->f[1]=t0; c->ps1[1]=t1;} // 80031B90
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[6]);} // 80031B94
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,1,ea,0,0);} // 80031B98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031B9C
  {uint32_t ea=c->r[16]+0x000000C0u; WF32(ea,c->f[1]);} // 80031BA0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031BA4
  {uint32_t ea=c->r[16]+0x000000C4u; WF32(ea,c->f[1]);} // 80031BA8
  {uint32_t ea=c->r[16]+0x000000C8u; WF32(ea,c->f[0]);} // 80031BAC
  {uint32_t ea=c->r[16]+0x000000D0u; WF32(ea,c->f[6]);} // 80031BB0
  {uint32_t ea=c->r[16]+0x000000D4u; WF32(ea,c->f[5]);} // 80031BB4
  {uint32_t ea=c->r[16]+0x000000D8u; WF32(ea,c->f[4]);} // 80031BB8
  c->r[12]=R32(c->r[16]+0x00000000u); // 80031BBC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 80031BC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 80031BC4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 80031BC8
  c->ctr=c->r[12]; // 80031BCC
  if (true) { c->lr=0x80031BD4u; dispatch(c,c->ctr); } // 80031BD0
  c->r[0]=R32(c->r[15]+0x00000270u); // 80031BD4
  c->r[4]=0u+0x803D0000u; // 80031BD8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80031BDC
  c->r[4]=c->r[4]+0x0000407Cu; // 80031BE0
  c->r[30]=c->r[15]+0x000002A4u; // 80031BE4
  c->r[29]=c->r[15]+0x000002A8u; // 80031BE8
  {uint32_t ea=c->r[15]+0x00000274u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031BEC
  c->r[28]=c->r[15]+0x000002ACu; // 80031BF0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80031BF4
  c->r[27]=c->r[15]+0x000002B0u; // 80031BF8
  c->r[26]=c->r[15]+0x000002B4u; // 80031BFC
  c->r[25]=c->r[15]+0x000002B8u; // 80031C00
  {uint32_t ea=c->r[15]+0x00000278u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C04
  c->r[24]=c->r[15]+0x000002BCu; // 80031C08
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80031C0C
  c->r[23]=c->r[15]+0x000002C0u; // 80031C10
  c->r[22]=c->r[15]+0x000002C4u; // 80031C14
  c->r[21]=c->r[15]+0x000002C8u; // 80031C18
  {uint32_t ea=c->r[15]+0x0000027Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C1C
  c->r[20]=c->r[15]+0x000002CCu; // 80031C20
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80031C24
  c->r[19]=c->r[15]+0x000002D0u; // 80031C28
  c->r[18]=c->r[15]+0x000002D4u; // 80031C2C
  c->r[17]=c->r[15]+0x000002D8u; // 80031C30
  {uint32_t ea=c->r[15]+0x00000280u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C34
  c->r[16]=c->r[15]+0x000002DCu; // 80031C38
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80031C3C
  {uint32_t ea=c->r[15]+0x00000284u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C40
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80031C44
  {uint32_t ea=c->r[15]+0x00000288u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C48
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80031C4C
  {uint32_t ea=c->r[15]+0x0000028Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C50
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80031C54
  {uint32_t ea=c->r[15]+0x00000290u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C58
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80031C5C
  {uint32_t ea=c->r[15]+0x00000294u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C60
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80031C64
  c->r[0]=R32(c->r[15]+0x00000298u); // 80031C68
  W32(c->r[3]+0x00000028u,c->r[0]); // 80031C6C
  {uint32_t ea=c->r[15]+0x000002A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C70
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80031C74
  {uint32_t ea=c->r[15]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C78
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80031C7C
  {uint32_t ea=c->r[15]+0x000002A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C80
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80031C84
  {uint32_t ea=c->r[15]+0x000002ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C88
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80031C8C
  {uint32_t ea=c->r[15]+0x000002B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C90
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80031C94
  {uint32_t ea=c->r[15]+0x000002B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031C98
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80031C9C
  {uint32_t ea=c->r[15]+0x000002B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CA0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80031CA4
  {uint32_t ea=c->r[15]+0x000002BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CA8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80031CAC
  {uint32_t ea=c->r[15]+0x000002C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CB0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80031CB4
  {uint32_t ea=c->r[15]+0x000002C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CB8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 80031CBC
  {uint32_t ea=c->r[15]+0x000002C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CC0
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 80031CC4
  {uint32_t ea=c->r[15]+0x000002CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CC8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 80031CCC
  {uint32_t ea=c->r[15]+0x000002D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CD0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80031CD4
  {uint32_t ea=c->r[15]+0x000002D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CD8
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80031CDC
  {uint32_t ea=c->r[15]+0x000002D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CE0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80031CE4
  {uint32_t ea=c->r[15]+0x000002DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031CE8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 80031CEC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80031CF0
  c->r[3]=R32(c->r[3]+0x00000018u); // 80031CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80031CF8
  if (crb(c,2)) { goto L_80031E4C; } // 80031CFC
  W32(c->r[3]+0x00000094u,c->r[31]); // 80031D00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D04
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 80031D08
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D0C
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 80031D10
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D14
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 80031D18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D1C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 80031D20
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D24
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 80031D28
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D2C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 80031D30
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D34
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 80031D38
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D3C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 80031D40
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D44
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 80031D48
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D4C
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 80031D50
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D54
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 80031D58
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D5C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 80031D60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80031D64
  c->r[12]=R32(c->r[12]+0x00000010u); // 80031D68
  c->ctr=c->r[12]; // 80031D6C
  if (true) { c->lr=0x80031D74u; dispatch(c,c->ctr); } // 80031D70
  c->r[0]=R32(c->r[15]+0x00000270u); // 80031D74
  W32(c->r[3]+0x00000000u,c->r[0]); // 80031D78
  {uint32_t ea=c->r[15]+0x00000274u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D7C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80031D80
  {uint32_t ea=c->r[15]+0x00000278u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D84
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80031D88
  {uint32_t ea=c->r[15]+0x0000027Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80031D90
  {uint32_t ea=c->r[15]+0x00000280u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D94
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80031D98
  {uint32_t ea=c->r[15]+0x00000284u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031D9C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80031DA0
  {uint32_t ea=c->r[15]+0x00000288u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DA4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80031DA8
  {uint32_t ea=c->r[15]+0x0000028Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80031DB0
  {uint32_t ea=c->r[15]+0x00000290u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DB4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80031DB8
  {uint32_t ea=c->r[15]+0x00000294u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DBC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80031DC0
  c->r[0]=R32(c->r[15]+0x00000298u); // 80031DC4
  W32(c->r[3]+0x00000028u,c->r[0]); // 80031DC8
  {uint32_t ea=c->r[15]+0x000002A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DCC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80031DD0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DD4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80031DD8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DDC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80031DE0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DE4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80031DE8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DEC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80031DF0
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DF4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80031DF8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031DFC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80031E00
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E04
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80031E08
  {uint32_t ea=c->r[23]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E0C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80031E10
  {uint32_t ea=c->r[22]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E14
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 80031E18
  {uint32_t ea=c->r[21]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E1C
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 80031E20
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E24
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 80031E28
  {uint32_t ea=c->r[19]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E2C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80031E30
  {uint32_t ea=c->r[18]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E34
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80031E38
  {uint32_t ea=c->r[17]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E3C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80031E40
  {uint32_t ea=c->r[16]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80031E44
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 80031E48
L_80031E4C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80031E4C
  c->r[11]=c->r[10]+0xFFFFFFA0u; // 80031E50
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80031E54
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80031E58
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80031E5C
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80031E60
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80031E64
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80031E68
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80031E6C
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80031E70
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80031E74
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80031E78
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80031E7C
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80031E80
  c->lr=0x80031E88u; f_800C2E68(c); // 80031E84
  c->r[0]=R32(c->r[10]+0x00000004u); // 80031E88
  c->lr=c->r[0]; // 80031E8C
  c->r[1]=c->r[10]|c->r[10]; // 80031E90
  return; // 80031E94
}

// fn_80031E98
void f_80031E98(Ctx* __restrict c) {
  trace_call(0x80031E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80031E98
  c->r[0]=c->lr; // 80031E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80031EA0
  c->lr=0x80031EA8u; f_80030EF4(c); // 80031EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80031EA8
  if (crb(c,2)) { goto L_80031EB8; } // 80031EAC
  c->lr=0x80031EB4u; f_80033BF8(c); // 80031EB0
  goto L_80031EBC; // 80031EB4
L_80031EB8:;
  c->r[3]=0u+0x00000001u; // 80031EB8
L_80031EBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80031EBC
  c->lr=c->r[0]; // 80031EC0
  c->r[1]=c->r[1]+0x00000010u; // 80031EC4
  return; // 80031EC8
}

// fn_80031ECC
void f_80031ECC(Ctx* __restrict c) {
  trace_call(0x80031ECCu);
  c->r[0]=R32(c->r[3]+0x00000220u); // 80031ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80031ED0
  if (crb(c,2)) { goto L_80031EF0; } // 80031ED4
  c->r[4]=R32(c->r[13]+0xFFFF9488u); // 80031ED8
  c->r[0]=R32(c->r[4]+0x00000000u); // 80031EDC
  cmps(c,0,(int32_t)c->r[0],0); // 80031EE0
  if (!crb(c,2)) { goto L_80031EF0; } // 80031EE4
  c->r[3]=c->r[3]+0x00000130u; // 80031EE8
  return; // 80031EEC
L_80031EF0:;
  c->r[3]=c->r[3]+0x00000040u; // 80031EF0
  return; // 80031EF4
}

// fn_80031EF8
void f_80031EF8(Ctx* __restrict c) {
  trace_call(0x80031EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80031EF8
  c->r[0]=c->lr; // 80031EFC
  {uint32_t ea=c->r[2]+0xFFFF8424u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031F00
  c->r[4]=0u+0x00000001u; // 80031F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80031F08
  {uint32_t ea=c->r[2]+0xFFFF8428u; c->f[2]=c->ps1[2]=RF32(ea);} // 80031F0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80031F10
  c->r[31]=c->r[3]|c->r[3]; // 80031F14
  {uint32_t ea=c->r[2]+0xFFFF842Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80031F18
  c->lr=0x80031F20u; f_8003203C(c); // 80031F1C
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80031F20
  c->r[3]=c->r[31]|c->r[31]; // 80031F24
  c->lr=0x80031F2Cu; f_8003205C(c); // 80031F28
  c->r[0]=0u+0x00000000u; // 80031F2C
  W8(c->r[31]+0x00000034u,c->r[0]); // 80031F30
  c->r[3]=c->r[31]|c->r[31]; // 80031F34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80031F38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80031F3C
  c->lr=c->r[0]; // 80031F40
  c->r[1]=c->r[1]+0x00000010u; // 80031F44
  return; // 80031F48
}

// fn_80031F4C
void f_80031F4C(Ctx* __restrict c) {
  trace_call(0x80031F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80031F4C
  c->r[0]=c->lr; // 80031F50
  cmps(c,0,(int32_t)c->r[3],0); // 80031F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80031F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80031F5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80031F60
  c->r[30]=c->r[3]|c->r[3]; // 80031F64
  if (crb(c,2)) { goto L_80032020; } // 80031F68
  cmps(c,0,(int32_t)c->r[4],0); // 80031F6C
  if (!crb(c,1)) { goto L_80032020; } // 80031F70
  c->lr=0x80031F78u; f_8028B53C(c); // 80031F74
  c->r[31]=0u+0x804B0000u; // 80031F78
  c->r[31]=c->r[31]+0xFFFFC800u; // 80031F7C
  c->r[3]=c->r[31]|c->r[31]; // 80031F80
  c->lr=0x80031F88u; f_8024B0E0(c); // 80031F84
  cmps(c,0,(int32_t)c->r[30],0); // 80031F88
  if (!crb(c,2)) { goto L_80031F9C; } // 80031F8C
  c->r[3]=c->r[31]|c->r[31]; // 80031F90
  c->lr=0x80031F98u; f_8024B1C0(c); // 80031F94
  goto L_80032020; // 80031F98
L_80031F9C:;
  c->r[0]=0u+0x80000000u; // 80031F9C
  cmpu(c,0,c->r[30],c->r[0]); // 80031FA0
  if (crb(c,0)) { goto L_80031FC0; } // 80031FA4
  c->r[3]=0u+0x81800000u; // 80031FA8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80031FAC
  cmpu(c,0,c->r[30],c->r[0]); // 80031FB0
  if (!crb(c,0)) { goto L_80031FC0; } // 80031FB4
  c->r[4]=0u+0x00000000u; // 80031FB8
  goto L_80032000; // 80031FBC
L_80031FC0:;
  c->r[0]=0u+0x90000000u; // 80031FC0
  cmpu(c,0,c->r[30],c->r[0]); // 80031FC4
  if (crb(c,0)) { goto L_80031FE0; } // 80031FC8
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80031FCC
  cmpu(c,0,c->r[30],c->r[0]); // 80031FD0
  if (!crb(c,0)) { goto L_80031FE0; } // 80031FD4
  c->r[4]=0u+0x00000001u; // 80031FD8
  goto L_80032000; // 80031FDC
L_80031FE0:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80031FE0
  cmpu(c,0,c->r[30],c->r[0]); // 80031FE4
  if (crb(c,0)) { goto L_80032000; } // 80031FE8
  c->r[3]=0u+0x98000000u; // 80031FEC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80031FF0
  cmpu(c,0,c->r[30],c->r[0]); // 80031FF4
  if (!crb(c,0)) { goto L_80032000; } // 80031FF8
  c->r[4]=0u+0x00000002u; // 80031FFC
L_80032000:;
  c->r[3]=0u+0x804B0000u; // 80032000
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80032004
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80032008
  c->r[4]=c->r[30]|c->r[30]; // 8003200C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80032010
  c->lr=0x80032018u; f_8023B550(c); // 80032014
  c->r[3]=c->r[31]|c->r[31]; // 80032018
  c->lr=0x80032020u; f_8024B1C0(c); // 8003201C
L_80032020:;
  c->r[3]=c->r[30]|c->r[30]; // 80032020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80032024
  c->r[30]=R32(c->r[1]+0x00000008u); // 80032028
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003202C
  c->lr=c->r[0]; // 80032030
  c->r[1]=c->r[1]+0x00000010u; // 80032034
  return; // 80032038
}

// fn_8003203C
void f_8003203C(Ctx* __restrict c) {
  trace_call(0x8003203Cu);
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003203C
  W32(c->r[3]+0x00000014u,c->r[4]); // 80032040
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80032044
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 80032048
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 8003204C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80032050
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80032054
  return; // 80032058
}

// fn_8003205C
void f_8003205C(Ctx* __restrict c) {
  trace_call(0x8003205Cu);
  c->r[0]=R8(c->r[3]+0x00000034u); // 8003205C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80032060
  c->r[0]=c->r[0]|0x00000080u; // 80032064
  W8(c->r[3]+0x00000034u,c->r[0]); // 80032068
  return; // 8003206C
}

// fn_80032070
void f_80032070(Ctx* __restrict c) {
  trace_call(0x80032070u);
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032070
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80032074
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80032078
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 8003207C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 80032080
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80032084
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80032088
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8003208C
  return; // 80032090
}

// fn_80032094
void f_80032094(Ctx* __restrict c) {
  trace_call(0x80032094u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80032094
  c->r[12]=c->r[1]|c->r[1]; // 80032098
  c->r[11]=addc(c,~c->r[11],0xFFFFFFC0u,1); // 8003209C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800320A0
  c->r[0]=c->lr; // 800320A4
  W32(c->r[12]+0x00000004u,c->r[0]); // 800320A8
  c->r[0]=c->r[3]+0x00000030u; // 800320AC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800320B0
  c->r[31]=c->r[5]|c->r[5]; // 800320B4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800320B8
  c->r[30]=c->r[4]|c->r[4]; // 800320BC
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800320C0
  c->r[29]=c->r[3]|c->r[3]; // 800320C4
L_800320C8:;
  c->r[3]=c->r[3]+0x00000010u; // 800320C8
  cmpu(c,0,c->r[3],c->r[0]); // 800320CC
  if (crb(c,0)) { IRQCHK(c); goto L_800320C8; } // 800320D0
  c->r[0]=R8(c->r[4]+0x00000034u); // 800320D4
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800320D8
  if (crb(c,2)) { goto L_8003213C; } // 800320DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800320E0
  c->r[3]=0u+0x803C0000u; // 800320E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800320E8
  c->r[3]=c->r[3]+0x00002F9Cu; // 800320EC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800320F0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800320F4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800320F8
  c->r[0]=R32(c->r[4]+0x00000014u); // 800320FC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[4]);} // 80032100
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[3]);} // 80032104
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[2]);} // 80032108
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[1]);} // 8003210C
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 80032110
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 80032114
  c->lr=0x8003211Cu; f_8004F8F0(c); // 80032118
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003211C
  c->r[0]=R8(c->r[30]+0x00000034u); // 80032120
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80032124
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80032128
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 8003212C
  W8(c->r[30]+0x00000034u,c->r[0]); // 80032130
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80032134
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80032138
L_8003213C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 8003213C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 80032140
  {uint32_t ea=c->r[31]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 80032144
  {uint32_t ea=c->r[31]+0x00000010u; c->f[8]=c->ps1[8]=RF32(ea);} // 80032148
  {uint32_t ea=c->r[31]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8003214C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 80032150
  {uint32_t ea=c->r[31]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 80032154
  {uint32_t ea=c->r[31]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 80032158
  {uint32_t ea=c->r[31]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003215C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80032160
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032164
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032168
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[11]);} // 8003216C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[10]);} // 80032170
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[9]);} // 80032174
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[8]);} // 80032178
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[7]);} // 8003217C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[6]);} // 80032180
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[5]);} // 80032184
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[4]);} // 80032188
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 8003218C
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[2]);} // 80032190
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 80032194
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 80032198
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 8003219C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800321A0
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800321A4
  cmps(c,0,(int32_t)c->r[0],1); // 800321A8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800321AC
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800321B0
  if (crb(c,2)) { goto L_800321E0; } // 800321B4
  if (!crb(c,0)) { goto L_8003221C; } // 800321B8
  cmps(c,0,(int32_t)c->r[0],0); // 800321BC
  if (!crb(c,0)) { goto L_800321C8; } // 800321C0
  goto L_8003221C; // 800321C4
L_800321C8:;
  c->lr=0x800321CCu; f_800D2864(c); // 800321C8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800321CC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800321D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800321D4
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 800321D8
  goto L_8003221C; // 800321DC
L_800321E0:;
  {uint32_t ea=c->r[2]+0xFFFF83F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800321E0
  fcmp(c,0,c->f[1],c->f[0]); // 800321E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800321E8
  if (crb(c,2)) { goto L_80032200; } // 800321EC
  {uint32_t ea=c->r[2]+0xFFFF83F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800321F0
  fcmp(c,0,c->f[1],c->f[0]); // 800321F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800321F8
  if (!crb(c,2)) { goto L_8003220C; } // 800321FC
L_80032200:;
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032200
  c->f[0]=-c->f[0]; // 80032204
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 80032208
L_8003220C:;
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003220C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80032210
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80032214
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 80032218
L_8003221C:;
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003221C
  c->r[4]=c->r[1]+0x00000010u; // 80032220
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032224
  c->r[3]=c->r[1]+0x00000020u; // 80032228
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003222C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80032230
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80032234
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032238
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8003223C
  {uint32_t ea=c->r[29]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80032240
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032244
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 80032248
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8003224C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80032250
  {uint32_t ea=c->r[29]+0x00000038u; psq_load(c,4,ea,1,0);} // 80032254
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 80032258
  {uint32_t ea=c->r[29]+0x00000030u; psq_load(c,3,ea,0,0);} // 8003225C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80032260
  {double t0=S(c->f[4]+c->f[1]), t1=S(c->ps1[4]+c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 80032264
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80032268
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8003226C
  {uint32_t ea=c->r[29]+0x00000038u; psq_store(c,4,ea,1,0);} // 80032270
  {double t0=S(c->f[3]+c->f[0]), t1=S(c->ps1[3]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80032274
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80032278
  {uint32_t ea=c->r[29]+0x00000030u; psq_store(c,1,ea,0,0);} // 8003227C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80032280
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80032284
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80032288
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 8003228C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80032290
  c->lr=c->r[0]; // 80032294
  c->r[1]=c->r[10]|c->r[10]; // 80032298
  return; // 8003229C
}

// fn_800322A0
void f_800322A0(Ctx* __restrict c) {
  trace_call(0x800322A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800322A0
  c->r[0]=c->lr; // 800322A4
  c->r[3]=0u+0x803C0000u; // 800322A8
  c->r[4]=0u+0x80010000u; // 800322AC
  c->r[5]=0u+0x80010000u; // 800322B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800322B4
  c->r[6]=0u+0x00000004u; // 800322B8
  c->r[3]=c->r[3]+0x000025F4u; // 800322BC
  c->r[4]=c->r[4]+0xFFFF9804u; // 800322C0
  c->r[5]=c->r[5]+0xFFFF8BD8u; // 800322C4
  c->r[7]=0u+0x00000015u; // 800322C8
  c->lr=0x800322D0u; f_800C2B8C(c); // 800322CC
  c->r[4]=0u+0x80030000u; // 800322D0
  c->r[5]=0u+0x803C0000u; // 800322D4
  c->r[4]=c->r[4]+0x000022F8u; // 800322D8
  c->r[3]=0u+0x00000000u; // 800322DC
  c->r[5]=c->r[5]+0x000025E8u; // 800322E0
  c->lr=0x800322E8u; f_800C2A60(c); // 800322E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800322E8
  c->lr=c->r[0]; // 800322EC
  c->r[1]=c->r[1]+0x00000010u; // 800322F0
  return; // 800322F4
}

// fn_800322F8
void f_800322F8(Ctx* __restrict c) {
  trace_call(0x800322F8u);
  c->r[3]=0u+0x803C0000u; // 800322F8
  c->r[4]=0u+0x80010000u; // 800322FC
  c->r[3]=c->r[3]+0x000025F4u; // 80032300
  c->r[5]=0u+0x00000004u; // 80032304
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 80032308
  c->r[6]=0u+0x00000015u; // 8003230C
  f_800C2C84(c); return; // 80032310
}

// fn_80032314
void f_80032314(Ctx* __restrict c) {
  trace_call(0x80032314u);
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032314
  c->r[7]=0u+0x00000000u; // 80032318
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 8003231C
  c->r[6]=0u+0x804B0000u; // 80032320
  c->r[5]=c->r[6]+0xFFFFC570u; // 80032324
  {uint32_t ea=c->r[2]+0xFFFF8434u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032328
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 8003232C
  c->r[4]=0u+0x00000001u; // 80032330
  c->r[0]=0u+0x00000002u; // 80032334
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 80032338
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 8003233C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 80032340
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 80032344
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 80032348
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 8003234C
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 80032350
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 80032354
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 80032358
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 8003235C
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[1]);} // 80032360
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 80032364
  W32(c->r[3]+0x000000B0u,c->r[7]); // 80032368
  W32(c->r[3]+0x000000D8u,c->r[7]); // 8003236C
  W32(c->r[3]+0x00000060u,c->r[7]); // 80032370
  W32(c->r[3]+0x00000058u,c->r[7]); // 80032374
  {uint32_t ea=c->r[6]+0xFFFFC570u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032378
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8003237C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032380
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 80032384
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032388
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8003238C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032390
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80032394
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032398
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8003239C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800323A0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 800323A4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800323A8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 800323AC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800323B0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800323B4
  {uint32_t ea=c->r[5]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800323B8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 800323BC
  {uint32_t ea=c->r[5]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800323C0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800323C4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800323C8
  {uint32_t ea=c->r[6]+0xFFFFC570u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323CC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800323D0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323D4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800323D8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323DC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800323E0
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323E4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800323E8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323EC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800323F0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800323F4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800323F8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800323FC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80032400
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032404
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80032408
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003240C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80032410
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032414
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80032418
  W32(c->r[3]+0x00000004u,c->r[4]); // 8003241C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80032420
  c->r[0]=R32(c->r[13]+0xFFFF8058u); // 80032424
  W32(c->r[3]+0x00000000u,c->r[0]); // 80032428
  W32(c->r[3]+0x00000054u,c->r[4]); // 8003242C
  c->r[4]=R32(c->r[13]+0xFFFF8058u); // 80032430
  c->r[0]=c->r[4]+0x00000001u; // 80032434
  W32(c->r[13]+0xFFFF8058u,c->r[0]); // 80032438
  return; // 8003243C
}

// fn_80032440
void f_80032440(Ctx* __restrict c) {
  trace_call(0x80032440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80032440
  c->r[0]=c->lr; // 80032444
  cmps(c,0,(int32_t)c->r[3],0); // 80032448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003244C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80032450
  W32(c->r[1]+0x00000008u,c->r[30]); // 80032454
  c->r[30]=c->r[3]|c->r[3]; // 80032458
  if (crb(c,2)) { goto L_80032514; } // 8003245C
  cmps(c,0,(int32_t)c->r[4],0); // 80032460
  if (!crb(c,1)) { goto L_80032514; } // 80032464
  c->lr=0x8003246Cu; f_8028B53C(c); // 80032468
  c->r[31]=0u+0x804B0000u; // 8003246C
  c->r[31]=c->r[31]+0xFFFFC800u; // 80032470
  c->r[3]=c->r[31]|c->r[31]; // 80032474
  c->lr=0x8003247Cu; f_8024B0E0(c); // 80032478
  cmps(c,0,(int32_t)c->r[30],0); // 8003247C
  if (!crb(c,2)) { goto L_80032490; } // 80032480
  c->r[3]=c->r[31]|c->r[31]; // 80032484
  c->lr=0x8003248Cu; f_8024B1C0(c); // 80032488
  goto L_80032514; // 8003248C
L_80032490:;
  c->r[0]=0u+0x80000000u; // 80032490
  cmpu(c,0,c->r[30],c->r[0]); // 80032494
  if (crb(c,0)) { goto L_800324B4; } // 80032498
  c->r[3]=0u+0x81800000u; // 8003249C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800324A0
  cmpu(c,0,c->r[30],c->r[0]); // 800324A4
  if (!crb(c,0)) { goto L_800324B4; } // 800324A8
  c->r[4]=0u+0x00000000u; // 800324AC
  goto L_800324F4; // 800324B0
L_800324B4:;
  c->r[0]=0u+0x90000000u; // 800324B4
  cmpu(c,0,c->r[30],c->r[0]); // 800324B8
  if (crb(c,0)) { goto L_800324D4; } // 800324BC
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800324C0
  cmpu(c,0,c->r[30],c->r[0]); // 800324C4
  if (!crb(c,0)) { goto L_800324D4; } // 800324C8
  c->r[4]=0u+0x00000001u; // 800324CC
  goto L_800324F4; // 800324D0
L_800324D4:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800324D4
  cmpu(c,0,c->r[30],c->r[0]); // 800324D8
  if (crb(c,0)) { goto L_800324F4; } // 800324DC
  c->r[3]=0u+0x98000000u; // 800324E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800324E4
  cmpu(c,0,c->r[30],c->r[0]); // 800324E8
  if (!crb(c,0)) { goto L_800324F4; } // 800324EC
  c->r[4]=0u+0x00000002u; // 800324F0
L_800324F4:;
  c->r[3]=0u+0x804B0000u; // 800324F4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800324F8
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 800324FC
  c->r[4]=c->r[30]|c->r[30]; // 80032500
  c->r[3]=R32(c->r[3]+c->r[0]); // 80032504
  c->lr=0x8003250Cu; f_8023B550(c); // 80032508
  c->r[3]=c->r[31]|c->r[31]; // 8003250C
  c->lr=0x80032514u; f_8024B1C0(c); // 80032510
L_80032514:;
  c->r[3]=c->r[30]|c->r[30]; // 80032514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80032518
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003251C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80032520
  c->lr=c->r[0]; // 80032524
  c->r[1]=c->r[1]+0x00000010u; // 80032528
  return; // 8003252C
}

// fn_80032530
void f_80032530(Ctx* __restrict c) {
  trace_call(0x80032530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80032530
  c->r[0]=c->lr; // 80032534
  c->r[4]=0u+0x00000001u; // 80032538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003253C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80032540
  cmps(c,0,(int32_t)c->r[0],0); // 80032544
  if (crb(c,2)) { goto L_80032558; } // 80032548
  cmps(c,0,(int32_t)c->r[0],1); // 8003254C
  if (crb(c,2)) { goto L_80032564; } // 80032550
  goto L_8003256C; // 80032554
L_80032558:;
  c->lr=0x8003255Cu; f_80033728(c); // 80032558
  c->r[4]=c->r[3]|c->r[3]; // 8003255C
  goto L_8003256C; // 80032560
L_80032564:;
  c->lr=0x80032568u; f_80032614(c); // 80032564
  c->r[4]=c->r[3]|c->r[3]; // 80032568
L_8003256C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003256C
  c->r[3]=c->r[4]|c->r[4]; // 80032570
  c->lr=c->r[0]; // 80032574
  c->r[1]=c->r[1]+0x00000010u; // 80032578
  return; // 8003257C
}

// fn_80032580
void f_80032580(Ctx* __restrict c) {
  trace_call(0x80032580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80032580
  c->r[0]=c->lr; // 80032584
  W32(c->r[1]+0x00000014u,c->r[0]); // 80032588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003258C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80032590
  cmps(c,0,(int32_t)c->r[4],0); // 80032594
  if (crb(c,2)) { goto L_80032600; } // 80032598
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003259C
  {uint32_t ea=c->r[2]+0xFFFF8438u; c->f[0]=c->ps1[0]=RF32(ea);} // 800325A0
  c->r[31]=R32(c->r[4]+0x000000A4u); // 800325A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800325A8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800325AC
  fcmp(c,0,c->f[0],c->f[1]); // 800325B0
  c->r[0]=c->cr; // 800325B4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800325B8
  c->r[0]=c->r[0]^0x00000001u; // 800325BC
  cmps(c,0,(int32_t)c->r[0],0); // 800325C0
  if (crb(c,2)) { goto L_80032600; } // 800325C4
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800325C8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 800325CC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800325D0
  c->lr=0x800325D8u; f_800D2930(c); // 800325D4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800325D8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800325DC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800325E0
  c->lr=0x800325E8u; f_800D1F48(c); // 800325E4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800325E8
  {uint32_t ea=c->r[2]+0xFFFF8440u; c->f[0]=c->ps1[0]=RF32(ea);} // 800325EC
  c->r[0]=0u+0x00000001u; // 800325F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800325F4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800325F8
  W32(c->r[31]+0x00000028u,c->r[0]); // 800325FC
L_80032600:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80032600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80032604
  c->lr=c->r[0]; // 80032608
  c->r[1]=c->r[1]+0x00000010u; // 8003260C
  return; // 80032610
}

// fn_80032614
void f_80032614(Ctx* __restrict c) {
  trace_call(0x80032614u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80032614
  c->r[12]=c->r[1]|c->r[1]; // 80032618
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8003261C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80032620
  c->r[0]=c->lr; // 80032624
  W32(c->r[12]+0x00000004u,c->r[0]); // 80032628
  c->r[4]=c->r[1]+0x000000A0u; // 8003262C
  c->r[0]=c->r[1]+0x000000D0u; // 80032630
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80032634
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80032638
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003263C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80032640
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80032644
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80032648
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003264C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80032650
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 80032654
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 80032658
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003265C
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 80032660
  W32(c->r[12]+0xFFFFFF9Cu,c->r[31]); // 80032664
  c->r[31]=c->r[3]|c->r[3]; // 80032668
  W32(c->r[12]+0xFFFFFF98u,c->r[30]); // 8003266C
L_80032670:;
  c->r[4]=c->r[4]+0x00000010u; // 80032670
  cmpu(c,1,c->r[4],c->r[0]); // 80032674
  if (crb(c,4)) { IRQCHK(c); goto L_80032670; } // 80032678
  c->r[0]=R32(c->r[3]+0x00000054u); // 8003267C
  cmps(c,1,(int32_t)c->r[0],0); // 80032680
  if (crb(c,6)) { goto L_800326BC; } // 80032684
  c->r[3]=c->r[31]|c->r[31]; // 80032688
  c->lr=0x80032690u; f_80033BF8(c); // 8003268C
  cmps(c,1,(int32_t)c->r[3],0); // 80032690
  if (!crb(c,6)) { goto L_800326BC; } // 80032694
  c->r[3]=c->r[31]|c->r[31]; // 80032698
  c->lr=0x800326A0u; f_80033C3C(c); // 8003269C
  cmps(c,1,(int32_t)c->r[3],0); // 800326A0
  if (!crb(c,6)) { goto L_800326BC; } // 800326A4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800326A8
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 800326AC
  c->lr=0x800326B4u; f_80030FAC(c); // 800326B0
  c->r[3]=0u+0x00000000u; // 800326B4
  goto L_80032AD8; // 800326B8
L_800326BC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800326BC
  cmps(c,1,(int32_t)c->r[3],0); // 800326C0
  if (crb(c,6)) { goto L_800327CC; } // 800326C4
  c->r[0]=R32(c->r[31]+0x00000058u); // 800326C8
  cmps(c,1,(int32_t)c->r[0],0); // 800326CC
  if (crb(c,6)) { goto L_800326E8; } // 800326D0
  c->r[3]=R32(c->r[3]+0x000000A4u); // 800326D4
  {uint32_t ea=c->r[2]+0xFFFF8444u; c->f[0]=c->ps1[0]=RF32(ea);} // 800326D8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800326DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800326E0
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800326E4
L_800326E8:;
  c->r[30]=R32(c->r[31]+0x00000010u); // 800326E8
  c->r[4]=0u+0x00000002u; // 800326EC
  c->r[3]=0u+0x00000001u; // 800326F0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800326F4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800326F8
  c->r[5]=c->r[30]+0x0000001Cu; // 800326FC
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80032700
  W32(c->r[1]+0x00000020u,c->r[5]); // 80032704
  c->r[0]=c->r[3]&c->r[0]; // 80032708
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8003270C
  W32(c->r[1]+0x00000010u,c->r[5]); // 80032710
  cmpu(c,1,c->r[0],0x00000001u); // 80032714
  W32(c->r[1]+0x00000014u,c->r[4]); // 80032718
  W32(c->r[1]+0x00000018u,c->r[5]); // 8003271C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80032720
  if (!crb(c,6)) { goto L_80032730; } // 80032724
  c->r[3]=c->r[30]|c->r[30]; // 80032728
  c->lr=0x80032730u; f_8034007C(c); // 8003272C
L_80032730:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032730
  c->f[2]=c->ps1[2]=S(c->f[26]-c->f[26]); // 80032734
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80032738
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003273C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032740
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 80032744
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032748
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 8003274C
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032750
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[1]);} // 80032754
  {uint32_t ea=c->r[30]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032758
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 8003275C
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032760
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 80032764
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,4,ea,0,0);} // 80032768
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003276C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 80032770
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80032774
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,3,ea,0,0);} // 80032778
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8003277C
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 80032780
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80032784
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80032788
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8003278C
  fcmp(c,0,c->f[3],c->f[2]); // 80032790
  if (crb(c,2)) { goto L_800327B4; } // 80032794
  c->f[1]=frsqrte(c->f[3]); // 80032798
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 8003279C
  {uint32_t ea=c->r[2]+0xFFFF844Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800327A0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 800327A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[26]); // 800327A8
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 800327AC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800327B0
L_800327B4:;
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,1,ea,0,0);} // 800327B4
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,0,ea,0,0);} // 800327B8
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 800327BC
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800327C0
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,1,ea,0,0);} // 800327C4
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,0,ea,0,0);} // 800327C8
L_800327CC:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800327CC
  cmps(c,1,(int32_t)c->r[0],0); // 800327D0
  if (crb(c,6)) { goto L_80032A74; } // 800327D4
  c->r[0]=0u+0x00000000u; // 800327D8
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800327DC
  c->r[3]=c->r[31]|c->r[31]; // 800327E0
  c->lr=0x800327E8u; f_80032B2C(c); // 800327E4
  c->r[3]=c->r[31]|c->r[31]; // 800327E8
  c->lr=0x800327F0u; f_80032F88(c); // 800327EC
  c->r[3]=c->r[31]|c->r[31]; // 800327F0
  c->lr=0x800327F8u; f_8003343C(c); // 800327F4
  c->r[3]=c->r[31]|c->r[31]; // 800327F8
  c->lr=0x80032800u; f_800334E8(c); // 800327FC
  {uint32_t ea=c->r[31]+0x00000070u; psq_load(c,0,ea,0,0);} // 80032800
  c->r[4]=0u+0x804B0000u; // 80032804
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,2,ea,0,0);} // 80032808
  c->r[3]=c->r[1]+0x00000080u; // 8003280C
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,1,0);} // 80032810
  c->r[5]=c->r[1]+0x00000090u; // 80032814
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80032818
  {uint32_t ea=c->r[31]+0x00000028u; psq_load(c,3,ea,1,0);} // 8003281C
  c->r[7]=c->r[1]+0x00000030u; // 80032820
  c->f[4]=c->ps1[4]=S(c->f[27]-c->f[27]); // 80032824
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80032828
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003282C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80032830
  c->r[4]=c->r[4]+0xFFFFC5D0u; // 80032834
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 80032838
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003283C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 80032840
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032844
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 80032848
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[2]);} // 8003284C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80032850
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80032854
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 80032858
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003285C
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[0]=t0; c->ps1[0]=t1;} // 80032860
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80032864
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 80032868
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003286C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80032870
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80032874
  fcmp(c,0,c->f[2],c->f[4]); // 80032878
  if (crb(c,2)) { goto L_8003289C; } // 8003287C
  c->f[0]=frsqrte(c->f[2]); // 80032880
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 80032884
  {uint32_t ea=c->r[2]+0xFFFF844Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80032888
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8003288C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 80032890
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80032894
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80032898
L_8003289C:;
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003289C
  c->f[3]=c->ps1[3]=S(c->f[29]-c->f[29]); // 800328A0
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 800328A4
  c->r[6]=c->r[1]+0x00000040u; // 800328A8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[5]=t0; c->ps1[5]=t1;} // 800328AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 800328B0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800328B4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 800328B8
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,1,0);} // 800328BC
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 800328C0
  {double t0=S(c->f[5]*c->f[4]), t1=S(c->ps1[5]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 800328C4
  {double t0=S(c->f[5]*c->f[29]), t1=S(c->ps1[5]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 800328C8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[28]=c->ps1[28]=RF32(ea);} // 800328CC
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,5,ea,0,0);} // 800328D0
  {double t0=S(std::fma(c->f[4],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[4],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 800328D4
  {double t0=S(std::fma(c->f[4],c->f[28],-c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[28],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 800328D8
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800328DC
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800328E0
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 800328E4
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,1,0);} // 800328E8
  {uint32_t ea=c->r[6]+0x00000004u; psq_store(c,0,ea,0,0);} // 800328EC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 800328F0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800328F4
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800328F8
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 800328FC
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80032900
  fcmp(c,0,c->f[2],c->f[3]); // 80032904
  if (crb(c,2)) { goto L_80032928; } // 80032908
  c->f[0]=frsqrte(c->f[2]); // 8003290C
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80032910
  {uint32_t ea=c->r[2]+0xFFFF844Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80032914
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80032918
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 8003291C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80032920
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80032924
L_80032928:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 80032928
  c->r[3]=c->r[1]+0x00000030u; // 8003292C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,1,ea,1,0);} // 80032930
  c->r[5]=c->r[1]+0x00000050u; // 80032934
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 80032938
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003293C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80032940
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=c->ps1[31]=RF32(ea);} // 80032944
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,4,ea,0,0);} // 80032948
  c->r[3]=c->r[31]+0x00000030u; // 8003294C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 80032950
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80032954
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80032958
  {uint32_t ea=c->r[1]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003295C
  {double t0=S(c->f[4]*c->f[31]), t1=S(c->ps1[4]*c->ps1[31]); c->f[1]=t0; c->ps1[1]=t1;} // 80032960
  {uint32_t ea=c->r[1]+0x00000048u; c->f[30]=c->ps1[30]=RF32(ea);} // 80032964
  {uint32_t ea=c->r[1]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 80032968
  {double t0=S(std::fma(c->f[3],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8003296C
  {double t0=S(std::fma(c->f[3],c->f[30],-c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[30],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 80032970
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80032974
  {uint32_t ea=c->r[1]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 80032978
  c->r[4]=c->r[1]+0x000000A0u; // 8003297C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 80032980
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80032984
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80032988
  {uint32_t ea=c->r[1]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003298C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[5]);} // 80032990
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80032994
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,1,0);} // 80032998
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,0,ea,0,0);} // 8003299C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800329A0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800329A4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 800329A8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[4]);} // 800329AC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[2]);} // 800329B0
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800329B4
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 800329B8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[3]);} // 800329BC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[6]);} // 800329C0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[7]);} // 800329C4
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[8]);} // 800329C8
  c->lr=0x800329D0u; f_8028A85C(c); // 800329CC
  c->r[3]=c->r[1]+0x00000090u; // 800329D0
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800329D4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800329D8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800329DC
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 800329E0
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800329E4
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 800329E8
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800329EC
  fcmp(c,0,c->f[2],c->f[3]); // 800329F0
  if (crb(c,2)) { goto L_80032A14; } // 800329F4
  c->f[0]=frsqrte(c->f[2]); // 800329F8
  {uint32_t ea=c->r[2]+0xFFFF844Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800329FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80032A00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80032A04
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80032A08
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80032A0C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80032A10
L_80032A14:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80032A14
  c->r[4]=c->r[1]+0x00000060u; // 80032A18
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80032A1C
  c->r[3]=c->r[1]+0x00000070u; // 80032A20
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80032A24
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80032A28
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80032A2C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 80032A30
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80032A34
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 80032A38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80032A3C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 80032A40
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[5]);} // 80032A44
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80032A48
  {uint32_t ea=c->r[31]+0x00000028u; psq_load(c,4,ea,1,0);} // 80032A4C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80032A50
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,3,ea,0,0);} // 80032A54
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80032A58
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80032A5C
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 80032A60
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80032A64
  {double t0=S(c->f[3]-c->f[0]), t1=S(c->ps1[3]-c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80032A68
  {uint32_t ea=c->r[31]+0x00000028u; psq_store(c,4,ea,1,0);} // 80032A6C
  {uint32_t ea=c->r[31]+0x00000020u; psq_store(c,1,ea,0,0);} // 80032A70
L_80032A74:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80032A74
  c->r[3]=c->r[31]|c->r[31]; // 80032A78
  c->r[5]=c->r[31]+0x000000C0u; // 80032A7C
  c->r[6]=c->r[31]+0x000000CCu; // 80032A80
  c->r[7]=c->r[31]+0x000000DCu; // 80032A84
  c->lr=0x80032A8Cu; f_800335C0(c); // 80032A88
  c->r[4]=R32(c->r[31]+0x00000008u); // 80032A8C
  c->r[3]=c->r[31]|c->r[31]; // 80032A90
  c->r[5]=c->r[31]+0x000000C4u; // 80032A94
  c->r[6]=c->r[31]+0x000000D0u; // 80032A98
  c->r[7]=c->r[31]+0x000000E0u; // 80032A9C
  c->lr=0x80032AA4u; f_800335C0(c); // 80032AA0
  c->r[4]=R32(c->r[31]+0x00000008u); // 80032AA4
  c->r[3]=c->r[31]|c->r[31]; // 80032AA8
  c->r[5]=c->r[31]+0x000000C8u; // 80032AAC
  c->r[6]=c->r[31]+0x000000D4u; // 80032AB0
  c->r[7]=c->r[31]+0x000000E4u; // 80032AB4
  c->lr=0x80032ABCu; f_800335C0(c); // 80032AB8
  c->r[4]=R32(c->r[31]+0x00000008u); // 80032ABC
  c->r[3]=c->r[31]|c->r[31]; // 80032AC0
  c->r[5]=c->r[31]+0x000000A0u; // 80032AC4
  c->r[6]=c->r[31]+0x000000A8u; // 80032AC8
  c->r[7]=c->r[31]+0x000000A4u; // 80032ACC
  c->lr=0x80032AD4u; f_800335C0(c); // 80032AD0
  c->r[3]=0u+0x00000001u; // 80032AD4
L_80032AD8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80032AD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80032ADC
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80032AE0
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80032AE4
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80032AE8
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80032AEC
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80032AF0
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80032AF4
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80032AF8
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80032AFC
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80032B00
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80032B04
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80032B08
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80032B0C
  c->r[31]=R32(c->r[10]+0xFFFFFF9Cu); // 80032B10
  c->r[30]=R32(c->r[10]+0xFFFFFF98u); // 80032B14
  c->lr=c->r[0]; // 80032B18
  c->r[1]=c->r[10]|c->r[10]; // 80032B1C
  return; // 80032B20
}

// fn_80032B24
void f_80032B24(Ctx* __restrict c) {
  trace_call(0x80032B24u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 80032B24
  return; // 80032B28
}

// fn_80032B2C
void f_80032B2C(Ctx* __restrict c) {
  trace_call(0x80032B2Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80032B2C
  c->r[12]=c->r[1]|c->r[1]; // 80032B30
  c->r[11]=addc(c,~c->r[11],0xFFFFFF20u,1); // 80032B34
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80032B38
  c->r[0]=c->lr; // 80032B3C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80032B40
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80032B44
  c->r[31]=c->r[3]|c->r[3]; // 80032B48
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80032B4C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80032B50
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 80032B54
  c->r[0]=R32(c->r[3]+0x000000BCu); // 80032B58
  cmps(c,0,(int32_t)c->r[0],0); // 80032B5C
  if (!crb(c,2)) { goto L_80032E8C; } // 80032B60
  c->lr=0x80032B68u; f_80032B24(c); // 80032B64
  c->r[29]=c->r[3]|c->r[3]; // 80032B68
  c->lr=0x80032B70u; f_80032EB0(c); // 80032B6C
  c->lr=0x80032B74u; f_80023CA0(c); // 80032B70
  cmps(c,0,(int32_t)c->r[3],0); // 80032B74
  if (crb(c,2)) { goto L_80032E8C; } // 80032B78
  c->r[3]=c->r[29]|c->r[29]; // 80032B7C
  c->lr=0x80032B84u; f_80032EB0(c); // 80032B80
  c->r[28]=c->r[3]|c->r[3]; // 80032B84
  c->lr=0x80032B8Cu; f_80032EB8(c); // 80032B88
  cmps(c,0,(int32_t)c->r[3],0); // 80032B8C
  if (crb(c,2)) { goto L_80032E84; } // 80032B90
  c->r[3]=c->r[28]|c->r[28]; // 80032B94
  c->lr=0x80032B9Cu; f_80032EC0(c); // 80032B98
  cmps(c,0,(int32_t)c->r[3],22); // 80032B9C
  if (crb(c,2)) { goto L_80032BC0; } // 80032BA0
  cmps(c,0,(int32_t)c->r[3],23); // 80032BA4
  if (crb(c,2)) { goto L_80032C68; } // 80032BA8
  cmps(c,0,(int32_t)c->r[3],18); // 80032BAC
  if (crb(c,2)) { goto L_80032D10; } // 80032BB0
  cmps(c,0,(int32_t)c->r[3],20); // 80032BB4
  if (crb(c,2)) { goto L_80032DB8; } // 80032BB8
  goto L_80032E60; // 80032BBC
L_80032BC0:;
  c->r[3]=0u+0x00000000u; // 80032BC0
  c->lr=0x80032BC8u; f_80008BC4(c); // 80032BC4
  c->r[30]=c->r[3]|c->r[3]; // 80032BC8
  c->r[3]=c->r[28]|c->r[28]; // 80032BCC
  c->lr=0x80032BD4u; f_80032EB8(c); // 80032BD0
  c->lr=0x80032BD8u; f_80012B14(c); // 80032BD4
  c->lr=0x80032BDCu; f_80012B0C(c); // 80032BD8
  c->lr=0x80032BE0u; f_80012B04(c); // 80032BDC
  c->lr=0x80032BE4u; f_80032F6C(c); // 80032BE0
  c->r[4]=c->r[30]|c->r[30]; // 80032BE4
  c->lr=0x80032BECu; f_80032EC8(c); // 80032BE8
  c->r[29]=c->r[3]|c->r[3]; // 80032BEC
  c->r[3]=c->r[28]|c->r[28]; // 80032BF0
  c->lr=0x80032BF8u; f_80032EB8(c); // 80032BF4
  c->lr=0x80032BFCu; f_80012B14(c); // 80032BF8
  c->lr=0x80032C00u; f_80012B0C(c); // 80032BFC
  c->lr=0x80032C04u; f_80012B04(c); // 80032C00
  c->lr=0x80032C08u; f_80032F6C(c); // 80032C04
  c->r[4]=c->r[29]|c->r[29]; // 80032C08
  c->lr=0x80032C10u; f_80032F78(c); // 80032C0C
  c->r[30]=c->r[3]|c->r[3]; // 80032C10
  c->r[3]=c->r[28]|c->r[28]; // 80032C14
  c->lr=0x80032C1Cu; f_80032EB8(c); // 80032C18
  c->lr=0x80032C20u; f_80012B14(c); // 80032C1C
  c->lr=0x80032C24u; f_80012B0C(c); // 80032C20
  c->lr=0x80032C28u; f_80012B04(c); // 80032C24
  c->r[4]=c->r[29]|c->r[29]; // 80032C28
  c->r[5]=c->r[30]|c->r[30]; // 80032C2C
  c->r[6]=c->r[31]+0x00000070u; // 80032C30
  c->lr=0x80032C38u; f_8031D668(c); // 80032C34
  c->r[3]=c->r[28]|c->r[28]; // 80032C38
  c->lr=0x80032C40u; f_80032EB8(c); // 80032C3C
  c->lr=0x80032C44u; f_80012AFC(c); // 80032C40
  c->lr=0x80032C48u; f_80016A58(c); // 80032C44
  c->r[4]=c->r[3]|c->r[3]; // 80032C48
  c->r[3]=c->r[1]+0x000000A0u; // 80032C4C
  c->r[5]=c->r[31]+0x00000070u; // 80032C50
  c->lr=0x80032C58u; f_8001D0BC(c); // 80032C54
  c->r[3]=c->r[31]+0x00000070u; // 80032C58
  c->r[4]=c->r[1]+0x000000A0u; // 80032C5C
  c->lr=0x80032C64u; f_80016CFC(c); // 80032C60
  goto L_80032E7C; // 80032C64
L_80032C68:;
  c->r[3]=0u+0x00000002u; // 80032C68
  c->lr=0x80032C70u; f_80008BC4(c); // 80032C6C
  c->r[30]=c->r[3]|c->r[3]; // 80032C70
  c->r[3]=c->r[28]|c->r[28]; // 80032C74
  c->lr=0x80032C7Cu; f_80032EB8(c); // 80032C78
  c->lr=0x80032C80u; f_80012B14(c); // 80032C7C
  c->lr=0x80032C84u; f_80012B0C(c); // 80032C80
  c->lr=0x80032C88u; f_80012B04(c); // 80032C84
  c->lr=0x80032C8Cu; f_80032F6C(c); // 80032C88
  c->r[4]=c->r[30]|c->r[30]; // 80032C8C
  c->lr=0x80032C94u; f_80032EC8(c); // 80032C90
  c->r[29]=c->r[3]|c->r[3]; // 80032C94
  c->r[3]=c->r[28]|c->r[28]; // 80032C98
  c->lr=0x80032CA0u; f_80032EB8(c); // 80032C9C
  c->lr=0x80032CA4u; f_80012B14(c); // 80032CA0
  c->lr=0x80032CA8u; f_80012B0C(c); // 80032CA4
  c->lr=0x80032CACu; f_80012B04(c); // 80032CA8
  c->lr=0x80032CB0u; f_80032F6C(c); // 80032CAC
  c->r[4]=c->r[29]|c->r[29]; // 80032CB0
  c->lr=0x80032CB8u; f_80032F78(c); // 80032CB4
  c->r[30]=c->r[3]|c->r[3]; // 80032CB8
  c->r[3]=c->r[28]|c->r[28]; // 80032CBC
  c->lr=0x80032CC4u; f_80032EB8(c); // 80032CC0
  c->lr=0x80032CC8u; f_80012B14(c); // 80032CC4
  c->lr=0x80032CCCu; f_80012B0C(c); // 80032CC8
  c->lr=0x80032CD0u; f_80012B04(c); // 80032CCC
  c->r[4]=c->r[29]|c->r[29]; // 80032CD0
  c->r[5]=c->r[30]|c->r[30]; // 80032CD4
  c->r[6]=c->r[31]+0x00000070u; // 80032CD8
  c->lr=0x80032CE0u; f_8031D668(c); // 80032CDC
  c->r[3]=c->r[28]|c->r[28]; // 80032CE0
  c->lr=0x80032CE8u; f_80032EB8(c); // 80032CE4
  c->lr=0x80032CECu; f_80012AFC(c); // 80032CE8
  c->lr=0x80032CF0u; f_80016A58(c); // 80032CEC
  c->r[4]=c->r[3]|c->r[3]; // 80032CF0
  c->r[3]=c->r[1]+0x00000070u; // 80032CF4
  c->r[5]=c->r[31]+0x00000070u; // 80032CF8
  c->lr=0x80032D00u; f_8001D0BC(c); // 80032CFC
  c->r[3]=c->r[31]+0x00000070u; // 80032D00
  c->r[4]=c->r[1]+0x00000070u; // 80032D04
  c->lr=0x80032D0Cu; f_80016CFC(c); // 80032D08
  goto L_80032E7C; // 80032D0C
L_80032D10:;
  c->r[3]=0u+0x00000003u; // 80032D10
  c->lr=0x80032D18u; f_80008BC4(c); // 80032D14
  c->r[30]=c->r[3]|c->r[3]; // 80032D18
  c->r[3]=c->r[28]|c->r[28]; // 80032D1C
  c->lr=0x80032D24u; f_80032EB8(c); // 80032D20
  c->lr=0x80032D28u; f_80012B14(c); // 80032D24
  c->lr=0x80032D2Cu; f_80012B0C(c); // 80032D28
  c->lr=0x80032D30u; f_80012B04(c); // 80032D2C
  c->lr=0x80032D34u; f_80032F6C(c); // 80032D30
  c->r[4]=c->r[30]|c->r[30]; // 80032D34
  c->lr=0x80032D3Cu; f_80032EC8(c); // 80032D38
  c->r[29]=c->r[3]|c->r[3]; // 80032D3C
  c->r[3]=c->r[28]|c->r[28]; // 80032D40
  c->lr=0x80032D48u; f_80032EB8(c); // 80032D44
  c->lr=0x80032D4Cu; f_80012B14(c); // 80032D48
  c->lr=0x80032D50u; f_80012B0C(c); // 80032D4C
  c->lr=0x80032D54u; f_80012B04(c); // 80032D50
  c->lr=0x80032D58u; f_80032F6C(c); // 80032D54
  c->r[4]=c->r[29]|c->r[29]; // 80032D58
  c->lr=0x80032D60u; f_80032F78(c); // 80032D5C
  c->r[30]=c->r[3]|c->r[3]; // 80032D60
  c->r[3]=c->r[28]|c->r[28]; // 80032D64
  c->lr=0x80032D6Cu; f_80032EB8(c); // 80032D68
  c->lr=0x80032D70u; f_80012B14(c); // 80032D6C
  c->lr=0x80032D74u; f_80012B0C(c); // 80032D70
  c->lr=0x80032D78u; f_80012B04(c); // 80032D74
  c->r[4]=c->r[29]|c->r[29]; // 80032D78
  c->r[5]=c->r[30]|c->r[30]; // 80032D7C
  c->r[6]=c->r[31]+0x00000070u; // 80032D80
  c->lr=0x80032D88u; f_8031D668(c); // 80032D84
  c->r[3]=c->r[28]|c->r[28]; // 80032D88
  c->lr=0x80032D90u; f_80032EB8(c); // 80032D8C
  c->lr=0x80032D94u; f_80012AFC(c); // 80032D90
  c->lr=0x80032D98u; f_80016A58(c); // 80032D94
  c->r[4]=c->r[3]|c->r[3]; // 80032D98
  c->r[3]=c->r[1]+0x00000040u; // 80032D9C
  c->r[5]=c->r[31]+0x00000070u; // 80032DA0
  c->lr=0x80032DA8u; f_8001D0BC(c); // 80032DA4
  c->r[3]=c->r[31]+0x00000070u; // 80032DA8
  c->r[4]=c->r[1]+0x00000040u; // 80032DAC
  c->lr=0x80032DB4u; f_80016CFC(c); // 80032DB0
  goto L_80032E7C; // 80032DB4
L_80032DB8:;
  c->r[3]=0u+0x00000004u; // 80032DB8
  c->lr=0x80032DC0u; f_80008BC4(c); // 80032DBC
  c->r[30]=c->r[3]|c->r[3]; // 80032DC0
  c->r[3]=c->r[28]|c->r[28]; // 80032DC4
  c->lr=0x80032DCCu; f_80032EB8(c); // 80032DC8
  c->lr=0x80032DD0u; f_80012B14(c); // 80032DCC
  c->lr=0x80032DD4u; f_80012B0C(c); // 80032DD0
  c->lr=0x80032DD8u; f_80012B04(c); // 80032DD4
  c->lr=0x80032DDCu; f_80032F6C(c); // 80032DD8
  c->r[4]=c->r[30]|c->r[30]; // 80032DDC
  c->lr=0x80032DE4u; f_80032EC8(c); // 80032DE0
  c->r[29]=c->r[3]|c->r[3]; // 80032DE4
  c->r[3]=c->r[28]|c->r[28]; // 80032DE8
  c->lr=0x80032DF0u; f_80032EB8(c); // 80032DEC
  c->lr=0x80032DF4u; f_80012B14(c); // 80032DF0
  c->lr=0x80032DF8u; f_80012B0C(c); // 80032DF4
  c->lr=0x80032DFCu; f_80012B04(c); // 80032DF8
  c->lr=0x80032E00u; f_80032F6C(c); // 80032DFC
  c->r[4]=c->r[29]|c->r[29]; // 80032E00
  c->lr=0x80032E08u; f_80032F78(c); // 80032E04
  c->r[30]=c->r[3]|c->r[3]; // 80032E08
  c->r[3]=c->r[28]|c->r[28]; // 80032E0C
  c->lr=0x80032E14u; f_80032EB8(c); // 80032E10
  c->lr=0x80032E18u; f_80012B14(c); // 80032E14
  c->lr=0x80032E1Cu; f_80012B0C(c); // 80032E18
  c->lr=0x80032E20u; f_80012B04(c); // 80032E1C
  c->r[4]=c->r[29]|c->r[29]; // 80032E20
  c->r[5]=c->r[30]|c->r[30]; // 80032E24
  c->r[6]=c->r[31]+0x00000070u; // 80032E28
  c->lr=0x80032E30u; f_8031D668(c); // 80032E2C
  c->r[3]=c->r[28]|c->r[28]; // 80032E30
  c->lr=0x80032E38u; f_80032EB8(c); // 80032E34
  c->lr=0x80032E3Cu; f_80012AFC(c); // 80032E38
  c->lr=0x80032E40u; f_80016A58(c); // 80032E3C
  c->r[4]=c->r[3]|c->r[3]; // 80032E40
  c->r[3]=c->r[1]+0x00000010u; // 80032E44
  c->r[5]=c->r[31]+0x00000070u; // 80032E48
  c->lr=0x80032E50u; f_8001D0BC(c); // 80032E4C
  c->r[3]=c->r[31]+0x00000070u; // 80032E50
  c->r[4]=c->r[1]+0x00000010u; // 80032E54
  c->lr=0x80032E5Cu; f_80016CFC(c); // 80032E58
  goto L_80032E7C; // 80032E5C
L_80032E60:;
  c->r[3]=c->r[28]|c->r[28]; // 80032E60
  c->lr=0x80032E68u; f_80032EB8(c); // 80032E64
  c->lr=0x80032E6Cu; f_80012AFC(c); // 80032E68
  c->lr=0x80032E70u; f_80016A58(c); // 80032E6C
  c->r[4]=c->r[3]|c->r[3]; // 80032E70
  c->r[3]=c->r[31]+0x00000070u; // 80032E74
  c->lr=0x80032E7Cu; f_80016CFC(c); // 80032E78
L_80032E7C:;
  c->r[0]=0u+0x00000001u; // 80032E7C
  W32(c->r[31]+0x00000060u,c->r[0]); // 80032E80
L_80032E84:;
  c->r[0]=0u+0x00000001u; // 80032E84
  W32(c->r[31]+0x000000BCu,c->r[0]); // 80032E88
L_80032E8C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80032E8C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80032E90
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80032E94
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80032E98
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80032E9C
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 80032EA0
  c->lr=c->r[0]; // 80032EA4
  c->r[1]=c->r[10]|c->r[10]; // 80032EA8
  return; // 80032EAC
}

// fn_80032EB0
void f_80032EB0(Ctx* __restrict c) {
  trace_call(0x80032EB0u);
  c->r[3]=R32(c->r[3]+0x000000D4u); // 80032EB0
  return; // 80032EB4
}

// fn_80032EB8
void f_80032EB8(Ctx* __restrict c) {
  trace_call(0x80032EB8u);
  c->r[3]=R32(c->r[3]+0x000025F8u); // 80032EB8
  return; // 80032EBC
}

// fn_80032EC0
void f_80032EC0(Ctx* __restrict c) {
  trace_call(0x80032EC0u);
  c->r[3]=R32(c->r[3]+0x00000138u); // 80032EC0
  return; // 80032EC4
}

// fn_80032EC8
void f_80032EC8(Ctx* __restrict c) {
  trace_call(0x80032EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80032EC8
  c->r[0]=c->lr; // 80032ECC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80032ED0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80032ED4
  c->r[26]=c->r[3]|c->r[3]; // 80032ED8
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 80032EDC
  c->r[27]=c->r[4]|c->r[4]; // 80032EE0
  c->r[29]=R32(c->r[3]+0x00000004u); // 80032EE4
  c->r[28]=0u+0x00000000u; // 80032EE8
  c->r[31]=0u+0x00000000u; // 80032EEC
  goto L_80032F4C; // 80032EF0
L_80032EF4:;
  c->r[4]=R32(c->r[26]+0x00000008u); // 80032EF4
  c->r[3]=R32(c->r[27]+0x00000000u); // 80032EF8
  c->r[4]=R32(c->r[4]+c->r[31]); // 80032EFC
  cmpu(c,0,c->r[3],c->r[4]); // 80032F00
  if (!crb(c,2)) { goto L_80032F10; } // 80032F04
  c->r[0]=0u+0x00000001u; // 80032F08
  goto L_80032F34; // 80032F0C
L_80032F10:;
  cmps(c,0,(int32_t)c->r[4],0); // 80032F10
  if (crb(c,2)) { goto L_80032F20; } // 80032F14
  cmpu(c,0,c->r[3],c->r[30]); // 80032F18
  if (!crb(c,2)) { goto L_80032F28; } // 80032F1C
L_80032F20:;
  c->r[0]=0u+0x00000000u; // 80032F20
  goto L_80032F34; // 80032F24
L_80032F28:;
  c->lr=0x80032F2Cu; f_800CA380(c); // 80032F28
  c->r[0]=cntlz(c->r[3]); // 80032F2C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80032F30
L_80032F34:;
  cmps(c,0,(int32_t)c->r[0],0); // 80032F34
  if (crb(c,2)) { goto L_80032F44; } // 80032F38
  c->r[3]=c->r[28]|c->r[28]; // 80032F3C
  goto L_80032F58; // 80032F40
L_80032F44:;
  c->r[31]=c->r[31]+0x00000060u; // 80032F44
  c->r[28]=c->r[28]+0x00000001u; // 80032F48
L_80032F4C:;
  cmpu(c,0,c->r[28],c->r[29]); // 80032F4C
  if (crb(c,0)) { IRQCHK(c); goto L_80032EF4; } // 80032F50
  c->r[3]=0u+0xFFFFFFFFu; // 80032F54
L_80032F58:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80032F58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80032F5C
  c->lr=c->r[0]; // 80032F60
  c->r[1]=c->r[1]+0x00000020u; // 80032F64
  return; // 80032F68
}

// fn_80032F6C
void f_80032F6C(Ctx* __restrict c) {
  trace_call(0x80032F6Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80032F6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80032F70
  return; // 80032F74
}

// fn_80032F78
void f_80032F78(Ctx* __restrict c) {
  trace_call(0x80032F78u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80032F78
  c->r[3]=R32(c->r[3]+0x00000010u); // 80032F7C
  c->r[3]=c->r[3]+c->r[0]; // 80032F80
  return; // 80032F84
}

// fn_80032F88
void f_80032F88(Ctx* __restrict c) {
  trace_call(0x80032F88u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80032F88
  c->r[12]=c->r[1]|c->r[1]; // 80032F8C
  c->r[11]=addc(c,~c->r[11],0xFFFFFE40u,1); // 80032F90
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80032F94
  c->r[0]=c->lr; // 80032F98
  c->r[11]=c->r[12]+0xFFFFFFA0u; // 80032F9C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80032FA0
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80032FA4
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80032FA8
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 80032FAC
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80032FB0
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80032FB4
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80032FB8
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 80032FBC
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80032FC0
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 80032FC4
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 80032FC8
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 80032FCC
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 80032FD0
  c->lr=0x80032FD8u; f_800C2E3C(c); // 80032FD4
  c->r[0]=R32(c->r[3]+0x000000BCu); // 80032FD8
  c->r[30]=c->r[3]|c->r[3]; // 80032FDC
  cmps(c,0,(int32_t)c->r[0],0); // 80032FE0
  if (!crb(c,2)) { goto L_800333F0; } // 80032FE4
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 80032FE8
  c->r[3]=R32(c->r[28]+0x000000D4u); // 80032FEC
  c->lr=0x80032FF4u; f_800135E8(c); // 80032FF0
  cmps(c,0,(int32_t)c->r[3],0); // 80032FF4
  if (crb(c,2)) { goto L_800333F0; } // 80032FF8
  c->r[31]=R32(c->r[28]+0x000000D4u); // 80032FFC
  c->r[3]=R32(c->r[31]+0x000005FCu); // 80033000
  cmps(c,0,(int32_t)c->r[3],0); // 80033004
  if (crb(c,2)) { goto L_800333E8; } // 80033008
  c->r[0]=R32(c->r[3]+0x00000130u); // 8003300C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80033010
  if (crb(c,2)) { goto L_800333E8; } // 80033014
  c->r[3]=0u+0x00000001u; // 80033018
  c->lr=0x80033020u; f_80008BC4(c); // 8003301C
  c->r[23]=R32(c->r[31]+0x000005FCu); // 80033020
  c->r[29]=c->r[3]|c->r[3]; // 80033024
  c->r[25]=R32(c->r[2]+0xFFFFBF18u); // 80033028
  c->r[28]=0u+0x00000000u; // 8003302C
  c->r[3]=R32(c->r[23]+0x000000A8u); // 80033030
  c->r[26]=0u+0x00000000u; // 80033034
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80033038
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003303C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80033040
  c->r[27]=R32(c->r[3]+0x00000000u); // 80033044
  c->r[24]=R32(c->r[27]+0x00000004u); // 80033048
  goto L_800330A4; // 8003304C
L_80033050:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 80033050
  c->r[3]=R32(c->r[29]+0x00000000u); // 80033054
  c->r[4]=R32(c->r[4]+c->r[26]); // 80033058
  cmpu(c,0,c->r[3],c->r[4]); // 8003305C
  if (!crb(c,2)) { goto L_8003306C; } // 80033060
  c->r[0]=0u+0x00000001u; // 80033064
  goto L_80033090; // 80033068
L_8003306C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8003306C
  if (crb(c,2)) { goto L_8003307C; } // 80033070
  cmpu(c,0,c->r[3],c->r[25]); // 80033074
  if (!crb(c,2)) { goto L_80033084; } // 80033078
L_8003307C:;
  c->r[0]=0u+0x00000000u; // 8003307C
  goto L_80033090; // 80033080
L_80033084:;
  c->lr=0x80033088u; f_800CA380(c); // 80033084
  c->r[0]=cntlz(c->r[3]); // 80033088
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003308C
L_80033090:;
  cmps(c,0,(int32_t)c->r[0],0); // 80033090
  if (crb(c,2)) { goto L_8003309C; } // 80033094
  goto L_800330B0; // 80033098
L_8003309C:;
  c->r[26]=c->r[26]+0x00000060u; // 8003309C
  c->r[28]=c->r[28]+0x00000001u; // 800330A0
L_800330A4:;
  cmpu(c,0,c->r[28],c->r[24]); // 800330A4
  if (crb(c,0)) { IRQCHK(c); goto L_80033050; } // 800330A8
  c->r[28]=0u+0xFFFFFFFFu; // 800330AC
L_800330B0:;
  c->r[3]=R32(c->r[23]+0x000000A8u); // 800330B0
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 800330B4
  c->r[4]=c->r[28]|c->r[28]; // 800330B8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800330BC
  c->r[6]=c->r[30]+0x00000070u; // 800330C0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800330C4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800330C8
  c->r[5]=R32(c->r[5]+0x00000000u); // 800330CC
  c->r[5]=R32(c->r[5]+0x00000010u); // 800330D0
  c->r[5]=c->r[5]+c->r[0]; // 800330D4
  c->lr=0x800330DCu; f_8031D668(c); // 800330D8
  c->r[3]=R32(c->r[31]+0x000005FCu); // 800330DC
  c->r[4]=0u+0x00000002u; // 800330E0
  c->r[0]=0u+0x00000001u; // 800330E4
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800330E8
  c->r[31]=R32(c->r[3]+0x00000030u); // 800330EC
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800330F0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800330F4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800330F8
  c->r[5]=c->r[31]+0x0000001Cu; // 800330FC
  W32(c->r[1]+0x00000018u,c->r[5]); // 80033100
  c->r[0]=c->r[3]&c->r[0]; // 80033104
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 80033108
  W32(c->r[1]+0x00000010u,c->r[5]); // 8003310C
  cmpu(c,0,c->r[0],0x00000001u); // 80033110
  if (!crb(c,2)) { goto L_80033120; } // 80033114
  c->r[3]=c->r[31]|c->r[31]; // 80033118
  c->lr=0x80033120u; f_8034007C(c); // 8003311C
L_80033120:;
  {uint32_t ea=c->r[31]+0x00000070u; psq_load(c,4,ea,0,0);} // 80033120
  c->r[4]=c->r[1]+0x00000080u; // 80033124
  {uint32_t ea=c->r[30]+0x00000070u; psq_load(c,0,ea,0,0);} // 80033128
  c->r[3]=c->r[1]+0x000000D0u; // 8003312C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[6]=c->ps1[6]=RF32(ea);} // 80033130
  c->r[5]=c->r[1]+0x000000A0u; // 80033134
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80033138
  {uint32_t ea=c->r[31]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003313C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80033140
  c->r[6]=c->r[1]+0x00000090u; // 80033144
  {uint32_t ea=c->r[31]+0x00000068u; c->f[7]=c->ps1[7]=RF32(ea);} // 80033148
  c->r[7]=c->r[1]+0x00000070u; // 8003314C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[6]);} // 80033150
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[8]=t0; c->ps1[8]=t1;} // 80033154
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,5,ea,1,0);} // 80033158
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 8003315C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 80033160
  c->r[4]=c->r[1]+0x00000060u; // 80033164
  {uint32_t ea=c->r[30]+0x00000078u; psq_load(c,0,ea,1,0);} // 80033168
  {double t0=S(c->f[1]*c->f[6]), t1=S(c->ps1[1]*c->f[6]); c->f[10]=t0; c->ps1[10]=t1;} // 8003316C
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80033170
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80033174
  {uint32_t ea=c->r[2]+0xFFFF8440u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033178
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[7]);} // 8003317C
  c->r[9]=c->r[31]+0x00000060u; // 80033180
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,1,0);} // 80033184
  {double t0=S(std::fma(c->f[6],c->f[8],-c->f[10])), t1=S(std::fma(c->ps1[6],c->ps1[8],-c->ps1[10])); c->f[8]=t0; c->ps1[8]=t1;} // 80033188
  c->f[11]=c->ps1[11]=S(c->f[0]*c->f[2]); // 8003318C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[26]=c->ps1[26]=RF32(ea);} // 80033190
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 80033194
  {double t0=S(std::fma(c->f[6],c->f[26],-c->f[9])), t1=S(std::fma(c->ps1[6],c->ps1[26],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 80033198
  {double t0=S(c->f[9]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 8003319C
  {double t0=S(c->ps1[9]), t1=S(c->ps1[9]); c->f[10]=t0; c->ps1[10]=t1;} // 800331A0
  {double t0=-c->f[8], t1=-c->ps1[8]; c->f[8]=t0; c->ps1[8]=t1;} // 800331A4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,10,ea,1,0);} // 800331A8
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,8,ea,0,0);} // 800331AC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,8,ea,0,0);} // 800331B0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800331B4
  {double t0=S(c->f[8]*c->f[7]), t1=S(c->ps1[8]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 800331B8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,12,ea,1,0);} // 800331BC
  {double t0=S(c->f[8]*c->f[11]), t1=S(c->ps1[8]*c->f[11]); c->f[13]=t0; c->ps1[13]=t1;} // 800331C0
  {double t0=S(c->ps1[8]), t1=S(c->f[8]); c->f[7]=t0; c->ps1[7]=t1;} // 800331C4
  {double t0=S(c->f[8]*c->f[6]), t1=S(c->ps1[8]*c->f[6]); c->f[10]=t0; c->ps1[10]=t1;} // 800331C8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,13,ea,0,0);} // 800331CC
  {double t0=S(std::fma(c->f[6],c->f[31],-c->f[9])), t1=S(std::fma(c->ps1[6],c->ps1[31],-c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 800331D0
  {double t0=S(c->f[12]*c->f[11]), t1=S(c->ps1[12]*c->f[11]); c->f[9]=t0; c->ps1[9]=t1;} // 800331D4
  {double t0=S(std::fma(c->f[6],c->f[7],-c->f[10])), t1=S(std::fma(c->ps1[6],c->ps1[7],-c->ps1[10])); c->f[6]=t0; c->ps1[6]=t1;} // 800331D8
  {double t0=S(c->ps1[8]), t1=S(c->ps1[8]); c->f[7]=t0; c->ps1[7]=t1;} // 800331DC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,9,ea,1,0);} // 800331E0
  {double t0=S(c->f[3]+c->f[9]), t1=S(c->ps1[3]+c->ps1[9]); c->f[9]=t0; c->ps1[9]=t1;} // 800331E4
  {double t0=S(c->f[8]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 800331E8
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,7,ea,1,0);} // 800331EC
  {double t0=S(c->f[1]+c->f[13]), t1=S(c->ps1[1]+c->ps1[13]); c->f[8]=t0; c->ps1[8]=t1;} // 800331F0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,9,ea,1,0);} // 800331F4
  {double t0=-c->f[6], t1=-c->ps1[6]; c->f[1]=t0; c->ps1[1]=t1;} // 800331F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,8,ea,0,0);} // 800331FC
  {uint32_t ea=c->r[6]+0x00000004u; psq_store(c,1,ea,0,0);} // 80033200
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 80033204
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,3,ea,1,0);} // 80033208
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8003320C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80033210
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 80033214
  {double t0=S(c->f[8]+c->f[1]), t1=S(c->ps1[8]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80033218
  {double t0=S(c->f[9]+c->f[0]), t1=S(c->ps1[9]+c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 8003321C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 80033220
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,1,ea,0,0);} // 80033224
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033228
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003322C
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,3,ea,1,0);} // 80033230
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 80033234
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 80033238
  {uint32_t ea=c->r[30]+0x00000080u; psq_load(c,9,ea,0,0);} // 8003323C
  c->r[6]=c->r[1]+0x00000040u; // 80033240
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,7,ea,0,0);} // 80033244
  c->r[8]=c->r[1]+0x00000020u; // 80033248
  {uint32_t ea=c->r[9]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003324C
  {double t0=S(c->ps1[9]), t1=S(c->f[9]); c->f[3]=t0; c->ps1[3]=t1;} // 80033250
  {double t0=S(c->f[9]*c->f[7]), t1=S(c->ps1[9]*c->f[7]); c->f[0]=t0; c->ps1[0]=t1;} // 80033254
  {uint32_t ea=c->r[30]+0x00000088u; c->f[28]=c->ps1[28]=RF32(ea);} // 80033258
  {double t0=S(c->f[9]*c->f[30]), t1=S(c->ps1[9]*c->ps1[30]); c->f[1]=t0; c->ps1[1]=t1;} // 8003325C
  {uint32_t ea=c->r[9]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80033260
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80033264
  {double t0=S(std::fma(c->f[7],c->f[3],-c->f[0])), t1=S(std::fma(c->ps1[7],c->ps1[3],-c->ps1[0])); c->f[3]=t0; c->ps1[3]=t1;} // 80033268
  {double t0=S(std::fma(c->f[7],c->f[28],-c->f[1])), t1=S(std::fma(c->ps1[7],c->ps1[28],-c->ps1[1])); c->f[8]=t0; c->ps1[8]=t1;} // 8003326C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033270
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,11,ea,0,0);} // 80033274
  c->r[3]=c->r[1]+0x000000E0u; // 80033278
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8003327C
  {double t0=S(c->f[8]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80033280
  {double t0=S(c->ps1[8]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 80033284
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,1,ea,1,0);} // 80033288
  {double t0=S(c->f[11]*c->f[10]), t1=S(c->ps1[11]*c->f[10]); c->f[11]=t0; c->ps1[11]=t1;} // 8003328C
  c->r[7]=c->r[1]+0x00000030u; // 80033290
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 80033294
  {double t0=S(c->f[7]*c->f[10]), t1=S(c->ps1[7]*c->f[10]); c->f[10]=t0; c->ps1[10]=t1;} // 80033298
  {uint32_t ea=c->r[30]+0x00000088u; psq_load(c,12,ea,0,0);} // 8003329C
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[3]=t0; c->ps1[3]=t1;} // 800332A0
  {uint32_t ea=c->r[6]+0x00000004u; psq_store(c,0,ea,0,0);} // 800332A4
  {double t0=-c->f[7], t1=-c->ps1[7]; c->f[6]=t0; c->ps1[6]=t1;} // 800332A8
  {double t0=S(c->f[12]*c->f[2]), t1=S(c->ps1[12]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800332AC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,8,ea,1,0);} // 800332B0
  {double t0=S(c->f[9]*c->f[2]), t1=S(c->ps1[9]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800332B4
  c->r[5]=c->r[1]+0x00000050u; // 800332B8
  {uint32_t ea=c->r[9]+0x0000000Cu; psq_load(c,7,ea,1,0);} // 800332BC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 800332C0
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,0,0);} // 800332C4
  c->r[4]=c->r[1]+0x000000F0u; // 800332C8
  {double t0=S(c->f[1]+c->f[10]), t1=S(c->ps1[1]+c->ps1[10]); c->f[0]=t0; c->ps1[0]=t1;} // 800332CC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800332D0
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,3,ea,1,0);} // 800332D4
  {double t0=S(c->f[6]*c->f[9]), t1=S(c->ps1[6]*c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 800332D8
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,3,ea,1,0);} // 800332DC
  c->r[9]=c->r[1]+0x000000C0u; // 800332E0
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[13]=t0; c->ps1[13]=t1;} // 800332E4
  {uint32_t ea=c->r[31]+0x00000050u; psq_load(c,0,ea,0,0);} // 800332E8
  {uint32_t ea=c->r[5]+0x0000000Cu; psq_store(c,7,ea,1,0);} // 800332EC
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800332F0
  {uint32_t ea=c->r[31]+0x00000058u; psq_load(c,0,ea,1,0);} // 800332F4
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,11,ea,0,0);} // 800332F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800332FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 80033300
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[29]);} // 80033304
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80033308
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,0,0);} // 8003330C
  {uint32_t ea=c->r[6]+0x0000000Cu; psq_load(c,11,ea,1,0);} // 80033310
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80033314
  {double t0=S(std::fma(c->f[1],c->f[12],c->f[8])), t1=S(std::fma(c->ps1[1],c->ps1[12],c->ps1[8])); c->f[0]=t0; c->ps1[0]=t1;} // 80033318
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[9]=c->ps1[9]=RF32(ea);} // 8003331C
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[8]=c->ps1[8]=RF32(ea);} // 80033320
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[7]=c->ps1[7]=RF32(ea);} // 80033324
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[27]); c->f[27]=t0; c->ps1[27]=t1;} // 80033328
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003332C
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,12,ea,1,0);} // 80033330
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80033334
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[9]);} // 80033338
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[8]);} // 8003333C
  {double t0=S(c->f[0]+c->f[12]), t1=S(c->ps1[0]+c->ps1[12]); c->f[0]=t0; c->ps1[0]=t1;} // 80033340
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[7]);} // 80033344
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,0,0);} // 80033348
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,10,ea,0,0);} // 8003334C
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,2,ea,0,0);} // 80033350
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,13,ea,0,0);} // 80033354
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,0,ea,1,0);} // 80033358
  {uint32_t ea=c->r[9]+0x0000000Cu; psq_store(c,11,ea,1,0);} // 8003335C
  {uint32_t ea=c->r[30]+0x00000090u; psq_load(c,0,ea,0,0);} // 80033360
  c->f[3]=c->ps1[3]=S(c->f[27]); // 80033364
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[6]=c->ps1[6]=RF32(ea);} // 80033368
  c->r[0]=0u+0x00000001u; // 8003336C
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80033370
  {uint32_t ea=c->r[30]+0x00000098u; psq_load(c,1,ea,1,0);} // 80033374
  c->r[3]=c->r[1]+0x000000B0u; // 80033378
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003337C
  {double t0=S(c->f[5]*c->f[1]), t1=S(c->ps1[5]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80033380
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80033384
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80033388
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003338C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80033390
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033394
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033398
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[27]);} // 8003339C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[6]);} // 800333A0
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[5]);} // 800333A4
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[4]);} // 800333A8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 800333AC
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[2]);} // 800333B0
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 800333B4
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 800333B8
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[9]);} // 800333BC
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[8]);} // 800333C0
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[7]);} // 800333C4
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[6]);} // 800333C8
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[5]);} // 800333CC
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[4]);} // 800333D0
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[3]);} // 800333D4
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[2]);} // 800333D8
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 800333DC
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[0]);} // 800333E0
  W32(c->r[30]+0x00000060u,c->r[0]); // 800333E4
L_800333E8:;
  c->r[0]=0u+0x00000002u; // 800333E8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 800333EC
L_800333F0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800333F0
  c->r[11]=c->r[10]+0xFFFFFFA0u; // 800333F4
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 800333F8
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800333FC
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80033400
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80033404
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80033408
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8003340C
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80033410
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80033414
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80033418
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8003341C
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80033420
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80033424
  c->lr=0x8003342Cu; f_800C2E88(c); // 80033428
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003342C
  c->lr=c->r[0]; // 80033430
  c->r[1]=c->r[10]|c->r[10]; // 80033434
  return; // 80033438
}

// fn_8003343C
void f_8003343C(Ctx* __restrict c) {
  trace_call(0x8003343Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003343C
  c->r[0]=c->lr; // 80033440
  W32(c->r[1]+0x00000014u,c->r[0]); // 80033444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033448
  c->r[31]=c->r[3]|c->r[3]; // 8003344C
  c->r[0]=R32(c->r[3]+0x000000BCu); // 80033450
  cmps(c,0,(int32_t)c->r[0],0); // 80033454
  if (!crb(c,2)) { goto L_800334D4; } // 80033458
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 8003345C
  c->r[4]=R32(c->r[4]+0x000000D4u); // 80033460
  cmps(c,0,(int32_t)c->r[4],0); // 80033464
  if (crb(c,2)) { goto L_800334D4; } // 80033468
  c->r[0]=R32(c->r[4]+0x00000024u); // 8003346C
  cmps(c,0,(int32_t)c->r[0],5); // 80033470
  if (!crb(c,2)) { goto L_800334D4; } // 80033474
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80033478
  cmps(c,0,(int32_t)c->r[0],0); // 8003347C
  if (!crb(c,2)) { goto L_80033488; } // 80033480
  W32(c->r[3]+0x000000B0u,c->r[4]); // 80033484
L_80033488:;
  c->r[5]=0u+0x803D0000u; // 80033488
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003348C
  c->r[5]=c->r[5]+0x0000407Cu; // 80033490
  c->r[4]=c->r[3]+0x000000B4u; // 80033494
  c->r[6]=R32(c->r[5]+0x0000004Cu); // 80033498
  c->r[5]=0u+0x00000000u; // 8003349C
  c->r[3]=c->r[3]+0x000000B0u; // 800334A0
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800334A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800334A8
  c->lr=0x800334B0u; f_80056AA8(c); // 800334AC
  c->r[3]=R32(c->r[31]+0x000000B0u); // 800334B0
  c->r[4]=c->r[31]+0x00000070u; // 800334B4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800334B8
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800334BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800334C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800334C4
  c->lr=0x800334CCu; f_80349F9C(c); // 800334C8
  c->r[0]=0u+0x00000003u; // 800334CC
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800334D0
L_800334D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800334D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800334D8
  c->lr=c->r[0]; // 800334DC
  c->r[1]=c->r[1]+0x00000010u; // 800334E0
  return; // 800334E4
}

// fn_800334E8
void f_800334E8(Ctx* __restrict c) {
  trace_call(0x800334E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800334E8
  c->r[0]=c->lr; // 800334EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800334F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800334F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800334F8
  c->r[30]=c->r[3]|c->r[3]; // 800334FC
  c->r[0]=R32(c->r[3]+0x000000BCu); // 80033500
  cmps(c,0,(int32_t)c->r[0],3); // 80033504
  if (crb(c,2)) { goto L_800335A8; } // 80033508
  c->r[0]=R32(c->r[3]+0x00000060u); // 8003350C
  cmps(c,0,(int32_t)c->r[0],0); // 80033510
  if (!crb(c,2)) { goto L_800335A8; } // 80033514
  c->r[31]=R32(c->r[3]+0x0000005Cu); // 80033518
  c->r[4]=0u+0x00000002u; // 8003351C
  c->r[3]=0u+0x00000001u; // 80033520
  W32(c->r[1]+0x00000014u,c->r[4]); // 80033524
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80033528
  c->r[5]=c->r[31]+0x0000001Cu; // 8003352C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80033530
  W32(c->r[1]+0x00000010u,c->r[5]); // 80033534
  c->r[0]=c->r[3]&c->r[0]; // 80033538
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8003353C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80033540
  cmpu(c,0,c->r[0],0x00000001u); // 80033544
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80033548
  if (!crb(c,2)) { goto L_80033558; } // 8003354C
  c->r[3]=c->r[31]|c->r[31]; // 80033550
  c->lr=0x80033558u; f_8034007C(c); // 80033554
L_80033558:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033558
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[0]);} // 8003355C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033560
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 80033564
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033568
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 8003356C
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033570
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 80033574
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033578
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 8003357C
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033580
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[0]);} // 80033584
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80033588
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[0]);} // 8003358C
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033590
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 80033594
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033598
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 8003359C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800335A0
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[0]);} // 800335A4
L_800335A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800335A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800335AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800335B0
  c->lr=c->r[0]; // 800335B4
  c->r[1]=c->r[1]+0x00000020u; // 800335B8
  return; // 800335BC
}

// fn_800335C0
void f_800335C0(Ctx* __restrict c) {
  trace_call(0x800335C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800335C0
  c->r[0]=c->lr; // 800335C4
  c->r[3]=0u+0x803D0000u; // 800335C8
  {uint32_t ea=c->r[2]+0xFFFF8450u; c->f[1]=c->ps1[1]=RF32(ea);} // 800335CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800335D0
  c->r[3]=c->r[3]+0x0000407Cu; // 800335D4
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[2]=c->ps1[2]=RF32(ea);} // 800335D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800335DC
  c->r[31]=c->r[7]|c->r[7]; // 800335E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800335E4
  c->r[30]=c->r[6]|c->r[6]; // 800335E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800335EC
  c->r[29]=c->r[5]|c->r[5]; // 800335F0
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800335F4
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800335F8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800335FC
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 80033600
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80033604
  fcmp(c,0,c->f[2],c->f[1]); // 80033608
  if (crb(c,2)) { goto L_8003370C; } // 8003360C
  cmps(c,0,(int32_t)c->r[4],0); // 80033610
  if (crb(c,2)) { goto L_8003362C; } // 80033614
  cmps(c,0,(int32_t)c->r[4],1); // 80033618
  if (crb(c,2)) { goto L_8003363C; } // 8003361C
  cmps(c,0,(int32_t)c->r[4],2); // 80033620
  if (crb(c,2)) { goto L_80033678; } // 80033624
  goto L_800336C8; // 80033628
L_8003362C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003362C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80033630
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80033634
  goto L_800336C8; // 80033638
L_8003363C:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003363C
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[3]=c->ps1[3]=RF32(ea);} // 80033640
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80033644
  {uint32_t ea=c->r[2]+0xFFFF8454u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033648
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[2]); // 8003364C
  c->f[4]=(c->f[4]>=0.0)?c->f[0]:c->f[2]; // 80033650
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 80033654
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[4]; // 80033658
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 8003365C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80033660
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80033664
  c->lr=0x8003366Cu; f_800D2864(c); // 80033668
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8003366C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80033670
  goto L_800336C8; // 80033674
L_80033678:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033678
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003367C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 80033680
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80033684
  {uint32_t ea=c->r[2]+0xFFFF8458u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033688
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[2]); // 8003368C
  c->f[5]=(c->f[5]>=0.0)?c->f[3]:c->f[2]; // 80033690
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 80033694
  c->f[2]=(c->f[2]>=0.0)?c->f[4]:c->f[5]; // 80033698
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[2]);} // 8003369C
  c->f[2]=c->ps1[2]=S(c->f[2]); // 800336A0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800336A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800336A8
  c->lr=0x800336B0u; f_800D2864(c); // 800336AC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800336B0
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800336B4
  {uint32_t ea=c->r[2]+0xFFFF843Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800336B8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800336BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800336C0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800336C4
L_800336C8:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800336C8
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[1]=c->ps1[1]=RF32(ea);} // 800336CC
  fcmp(c,0,c->f[0],c->f[1]); // 800336D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800336D4
  if (!crb(c,2)) { goto L_800336EC; } // 800336D8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 800336DC
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800336E0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800336E4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800336E8
L_800336EC:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800336EC
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800336F0
  fcmp(c,0,c->f[1],c->f[0]); // 800336F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800336F8
  if (!crb(c,2)) { goto L_8003370C; } // 800336FC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80033700
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80033704
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 80033708
L_8003370C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003370C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80033710
  c->r[30]=R32(c->r[1]+0x00000018u); // 80033714
  c->r[29]=R32(c->r[1]+0x00000014u); // 80033718
  c->lr=c->r[0]; // 8003371C
  c->r[1]=c->r[1]+0x00000020u; // 80033720
  return; // 80033724
}

// fn_80033728
void f_80033728(Ctx* __restrict c) {
  trace_call(0x80033728u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80033728
  c->r[12]=c->r[1]|c->r[1]; // 8003372C
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 80033730
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80033734
  c->r[0]=c->lr; // 80033738
  c->r[4]=0u+0x803D0000u; // 8003373C
  {uint32_t ea=c->r[2]+0xFFFF8460u; c->f[2]=RF64(ea);} // 80033740
  W32(c->r[12]+0x00000004u,c->r[0]); // 80033744
  c->r[0]=0u+0x43300000u; // 80033748
  c->r[4]=c->r[4]+0x0000407Cu; // 8003374C
  {uint32_t ea=c->r[2]+0xFFFF845Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80033750
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80033754
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80033758
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003375C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80033760
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80033764
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80033768
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003376C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80033770
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 80033774
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 80033778
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003377C
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 80033780
  W32(c->r[12]+0xFFFFFF9Cu,c->r[31]); // 80033784
  c->r[31]=c->r[3]|c->r[3]; // 80033788
  W32(c->r[1]+0x00000120u,c->r[0]); // 8003378C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80033790
  W32(c->r[1]+0x00000124u,c->r[0]); // 80033794
  c->r[4]=R32(c->r[4]+0x00000118u); // 80033798
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 8003379C
  cmps(c,0,(int32_t)c->r[4],0); // 800337A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800337A4
  c->f[26]=c->ps1[26]=S(c->f[0]/c->f[1]); // 800337A8
  if (crb(c,2)) { goto L_80033B88; } // 800337AC
  c->r[3]=c->r[1]+0x000000F0u; // 800337B0
  c->r[0]=c->r[1]+0x00000120u; // 800337B4
L_800337B8:;
  c->r[3]=c->r[3]+0x00000010u; // 800337B8
  cmpu(c,0,c->r[3],c->r[0]); // 800337BC
  if (crb(c,0)) { IRQCHK(c); goto L_800337B8; } // 800337C0
  c->r[0]=R32(c->r[4]+0x00000368u); // 800337C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800337C8
  c->r[0]=R32(c->r[4]+0x00000364u); // 800337CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800337D0
  {uint32_t ea=c->r[13]+0xFFFF8060u; c->f[3]=c->ps1[3]=RF32(ea);} // 800337D4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800337D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800337DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 800337E0
  c->r[3]=R32(c->r[4]+0x0000035Cu); // 800337E4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800337E8
  c->r[0]=R32(c->r[4]+0x00000360u); // 800337EC
  {uint32_t ea=c->r[13]+0xFFFF94B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800337F0
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 800337F4
  c->f[5]=c->ps1[5]=S(c->f[26]*c->f[2]); // 800337F8
  {uint32_t ea=c->r[13]+0xFFFF94BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800337FC
  {uint32_t ea=c->r[2]+0xFFFF8438u; c->f[2]=c->ps1[2]=RF32(ea);} // 80033800
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 80033804
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033808
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 8003380C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80033810
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[3]); // 80033814
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80033818
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8003381C
  {uint32_t ea=c->r[13]+0xFFFF94BCu; WF32(ea,c->f[4]);} // 80033820
  {uint32_t ea=c->r[13]+0xFFFF94B8u; WF32(ea,c->f[3]);} // 80033824
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 80033828
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 8003382C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80033830
  c->lr=0x80033838u; f_800D22F0(c); // 80033834
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033838
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8003383C
  c->f[1]=c->f[0]; // 80033840
  c->lr=0x80033848u; f_800D22F0(c); // 80033844
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033848
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8003384C
  c->f[1]=c->f[0]; // 80033850
  c->lr=0x80033858u; f_800D22F0(c); // 80033854
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033858
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8003385C
  c->f[1]=c->f[0]; // 80033860
  c->lr=0x80033868u; f_800D2864(c); // 80033864
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033868
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8003386C
  c->f[1]=c->f[0]; // 80033870
  c->lr=0x80033878u; f_800D2864(c); // 80033874
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033878
  c->f[27]=c->ps1[27]=S(c->f[1]); // 8003387C
  c->f[1]=c->f[0]; // 80033880
  c->lr=0x80033888u; f_800D2864(c); // 80033884
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80033888
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003388C
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[27]); // 80033890
  c->r[3]=c->r[1]+0x00000060u; // 80033894
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[30]); // 80033898
  {uint32_t ea=c->r[13]+0xFFFF805Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003389C
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[29]); // 800338A0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 800338A4
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[2]); // 800338A8
  c->r[6]=c->r[1]+0x00000080u; // 800338AC
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[2]); // 800338B0
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 800338B4
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 800338B8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,9,ea,1,0);} // 800338BC
  c->f[8]=-c->f[3]; // 800338C0
  c->r[9]=c->r[1]+0x00000020u; // 800338C4
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[29]); // 800338C8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[6]);} // 800338CC
  c->f[7]=c->ps1[7]=S(c->f[28]*c->f[27]); // 800338D0
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[6]);} // 800338D4
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 800338D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800338DC
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[2]); // 800338E0
  c->r[8]=c->r[1]+0x00000030u; // 800338E4
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[29]); // 800338E8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 800338EC
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[10]=t0; c->ps1[10]=t1;} // 800338F0
  c->r[5]=c->r[1]+0x00000070u; // 800338F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,9,ea,0,0);} // 800338F8
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[29]); // 800338FC
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 80033900
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[3]);} // 80033904
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[8]=t0; c->ps1[8]=t1;} // 80033908
  c->r[7]=c->r[1]+0x00000090u; // 8003390C
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80033910
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[4]);} // 80033914
  c->f[4]=-c->f[27]; // 80033918
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[6]);} // 8003391C
  c->f[5]=c->ps1[5]=S(c->f[30]*c->f[2]); // 80033920
  c->r[10]=c->r[1]+0x00000040u; // 80033924
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[4]);} // 80033928
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[2]); // 8003392C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[29]); // 80033930
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[5]);} // 80033934
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80033938
  c->r[11]=c->r[1]+0x00000050u; // 8003393C
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[30]); // 80033940
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,8,ea,0,0);} // 80033944
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 80033948
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[3]);} // 8003394C
  {double t0=S(c->f[6]*c->f[26]), t1=S(c->ps1[6]*c->f[26]); c->f[5]=t0; c->ps1[5]=t1;} // 80033950
  c->r[3]=c->r[31]+0x00000030u; // 80033954
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80033958
  {double t0=S(c->f[9]*c->f[26]), t1=S(c->ps1[9]*c->f[26]); c->f[11]=t0; c->ps1[11]=t1;} // 8003395C
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,2,ea,0,0);} // 80033960
  c->r[4]=c->r[1]+0x000000F0u; // 80033964
  {uint32_t ea=c->r[31]+0x00000028u; psq_load(c,3,ea,1,0);} // 80033968
  {double t0=S(c->f[2]+c->f[5]), t1=S(c->ps1[2]+c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8003396C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,6,ea,0,0);} // 80033970
  {double t0=S(c->f[3]+c->f[11]), t1=S(c->ps1[3]+c->ps1[11]); c->f[3]=t0; c->ps1[3]=t1;} // 80033974
  {uint32_t ea=c->r[31]+0x00000020u; psq_store(c,2,ea,0,0);} // 80033978
  {uint32_t ea=c->r[31]+0x00000028u; psq_store(c,3,ea,1,0);} // 8003397C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[4]=c->ps1[4]=RF32(ea);} // 80033980
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 80033984
  {uint32_t ea=c->r[1]+0x00000100u; c->f[7]=c->ps1[7]=RF32(ea);} // 80033988
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003398C
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,4,ea,1,0);} // 80033990
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[6]);} // 80033994
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 80033998
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[7]);} // 8003399C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,4,ea,0,0);} // 800339A0
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 800339A4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,10,ea,1,0);} // 800339A8
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800339AC
  {double t0=S(c->f[7]*c->f[26]), t1=S(c->ps1[7]*c->f[26]); c->f[4]=t0; c->ps1[4]=t1;} // 800339B0
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,9,ea,1,0);} // 800339B4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800339B8
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,1,ea,0,0);} // 800339BC
  {double t0=S(c->f[3]+c->f[4]), t1=S(c->ps1[3]+c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 800339C0
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,5,ea,0,0);} // 800339C4
  {double t0=S(c->f[0]*c->f[26]), t1=S(c->ps1[0]*c->f[26]); c->f[1]=t0; c->ps1[1]=t1;} // 800339C8
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,11,ea,1,0);} // 800339CC
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800339D0
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,6,ea,1,0);} // 800339D4
  {uint32_t ea=c->r[10]+0x00000000u; psq_store(c,0,ea,0,0);} // 800339D8
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,7,ea,1,0);} // 800339DC
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,1,ea,0,0);} // 800339E0
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,4,ea,1,0);} // 800339E4
  {uint32_t ea=c->r[31]+0x00000020u; psq_store(c,2,ea,0,0);} // 800339E8
  {uint32_t ea=c->r[31]+0x00000028u; psq_store(c,3,ea,1,0);} // 800339EC
  c->lr=0x800339F4u; f_8028A85C(c); // 800339F0
  c->r[3]=c->r[1]+0x000000B0u; // 800339F4
  c->r[0]=c->r[1]+0x000000E0u; // 800339F8
L_800339FC:;
  c->r[3]=c->r[3]+0x00000010u; // 800339FC
  cmpu(c,0,c->r[3],c->r[0]); // 80033A00
  if (crb(c,0)) { IRQCHK(c); goto L_800339FC; } // 80033A04
  {uint32_t ea=c->r[2]+0xFFFF8440u; c->f[2]=c->ps1[2]=RF32(ea);} // 80033A08
  c->r[3]=0u+0x803D0000u; // 80033A0C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033A10
  c->r[3]=c->r[3]+0x0000407Cu; // 80033A14
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033A18
  c->r[4]=c->r[1]+0x000000B0u; // 80033A1C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80033A20
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[1]); // 80033A24
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[0]); // 80033A28
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80033A2C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 80033A30
  {uint32_t ea=c->r[2]+0xFFFF8448u; c->f[5]=c->ps1[5]=RF32(ea);} // 80033A34
  c->f[11]=c->ps1[11]=S(c->f[8]*c->f[1]); // 80033A38
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 80033A3C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[7]); // 80033A40
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80033A44
  c->f[12]=c->ps1[12]=S(c->f[9]*c->f[1]); // 80033A48
  c->r[0]=0u+0x00000000u; // 80033A4C
  c->f[2]=c->ps1[2]=S(c->f[11]+c->f[0]); // 80033A50
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80033A54
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[11]); // 80033A58
  c->f[10]=c->ps1[10]=S(c->f[3]*c->f[6]); // 80033A5C
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[2]); // 80033A60
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[1]); // 80033A64
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 80033A68
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[4]);} // 80033A6C
  c->f[2]=c->ps1[2]=S(c->f[12]-c->f[10]); // 80033A70
  c->f[1]=c->ps1[1]=S(c->f[12]+c->f[10]); // 80033A74
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80033A78
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[6]); // 80033A7C
  c->f[10]=c->ps1[10]=S(c->f[9]*c->f[7]); // 80033A80
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[2]);} // 80033A84
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[6]); // 80033A88
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 80033A8C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[3]);} // 80033A90
  c->f[2]=c->ps1[2]=S(c->f[10]+c->f[4]); // 80033A94
  c->f[0]=c->ps1[0]=S(c->f[10]-c->f[4]); // 80033A98
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80033A9C
  c->f[3]=c->ps1[3]=S(c->f[6]-c->f[5]); // 80033AA0
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[5]); // 80033AA4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 80033AA8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,5,ea,1,0);} // 80033AAC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80033AB0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 80033AB4
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 80033AB8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 80033ABC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80033AC0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 80033AC4
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,0,ea,0,0);} // 80033AC8
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,3,ea,1,0);} // 80033ACC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80033AD0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,6,ea,0,0);} // 80033AD4
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 80033AD8
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,7,ea,1,0);} // 80033ADC
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80033AE0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80033AE4
  {double t0=S(c->f[5]*c->f[3]), t1=S(c->ps1[5]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80033AE8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,2,ea,1,0);} // 80033AEC
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80033AF0
  {double t0=S(c->f[7]*c->f[3]), t1=S(c->ps1[7]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80033AF4
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,4,ea,0,0);} // 80033AF8
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,1,ea,1,0);} // 80033AFC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,0,ea,0,0);} // 80033B00
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,2,ea,1,0);} // 80033B04
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B08
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 80033B0C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B10
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 80033B14
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B18
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80033B1C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80033B20
  W32(c->r[3]+0x00000094u,c->r[0]); // 80033B24
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B28
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 80033B2C
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B30
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 80033B34
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B38
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 80033B3C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B40
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 80033B44
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B48
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 80033B4C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B50
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 80033B54
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B58
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 80033B5C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B60
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 80033B64
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B68
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 80033B6C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B70
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 80033B74
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B78
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 80033B7C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033B80
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 80033B84
L_80033B88:;
  c->r[3]=0u+0x00000001u; // 80033B88
  c->r[10]=R32(c->r[1]+0x00000000u); // 80033B8C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80033B90
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80033B94
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80033B98
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80033B9C
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80033BA0
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80033BA4
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80033BA8
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80033BAC
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80033BB0
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80033BB4
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80033BB8
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80033BBC
  c->r[31]=R32(c->r[10]+0xFFFFFF9Cu); // 80033BC0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80033BC4
  c->lr=c->r[0]; // 80033BC8
  c->r[1]=c->r[10]|c->r[10]; // 80033BCC
  return; // 80033BD0
}

// fn_80033BD4
void f_80033BD4(Ctx* __restrict c) {
  trace_call(0x80033BD4u);
  cmps(c,0,(int32_t)c->r[4],0); // 80033BD4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80033BD8
  if (crb(c,2)) { goto L_80033BEC; } // 80033BDC
  c->r[0]=R32(c->r[4]+0x00000030u); // 80033BE0
  W32(c->r[3]+0x00000010u,c->r[0]); // 80033BE4
  return; // 80033BE8
L_80033BEC:;
  c->r[0]=0u+0x00000000u; // 80033BEC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80033BF0
  return; // 80033BF4
}

// fn_80033BF8
void f_80033BF8(Ctx* __restrict c) {
  trace_call(0x80033BF8u);
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80033BF8
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033BFC
  fcmp(c,0,c->f[0],c->f[1]); // 80033C00
  if (!crb(c,2)) { goto L_80033C34; } // 80033C04
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C08
  fcmp(c,0,c->f[0],c->f[1]); // 80033C0C
  if (!crb(c,2)) { goto L_80033C34; } // 80033C10
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C14
  fcmp(c,0,c->f[0],c->f[1]); // 80033C18
  if (!crb(c,2)) { goto L_80033C34; } // 80033C1C
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C20
  fcmp(c,0,c->f[0],c->f[1]); // 80033C24
  if (!crb(c,2)) { goto L_80033C34; } // 80033C28
  c->r[3]=0u+0x00000000u; // 80033C2C
  return; // 80033C30
L_80033C34:;
  c->r[3]=0u+0x00000001u; // 80033C34
  return; // 80033C38
}

// fn_80033C3C
void f_80033C3C(Ctx* __restrict c) {
  trace_call(0x80033C3Cu);
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C3C
  {uint32_t ea=c->r[2]+0xFFFF8430u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033C40
  fcmp(c,0,c->f[0],c->f[1]); // 80033C44
  if (!crb(c,2)) { goto L_80033C78; } // 80033C48
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C4C
  fcmp(c,0,c->f[0],c->f[1]); // 80033C50
  if (!crb(c,2)) { goto L_80033C78; } // 80033C54
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C58
  fcmp(c,0,c->f[0],c->f[1]); // 80033C5C
  if (!crb(c,2)) { goto L_80033C78; } // 80033C60
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033C64
  fcmp(c,0,c->f[0],c->f[1]); // 80033C68
  if (!crb(c,2)) { goto L_80033C78; } // 80033C6C
  c->r[3]=0u+0x00000000u; // 80033C70
  return; // 80033C74
L_80033C78:;
  c->r[3]=0u+0x00000001u; // 80033C78
  return; // 80033C7C
}

// fn_80033C80
void f_80033C80(Ctx* __restrict c) {
  trace_call(0x80033C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033C80
  c->r[0]=c->lr; // 80033C84
  c->r[4]=0u+0x80030000u; // 80033C88
  c->r[5]=0u+0x80010000u; // 80033C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80033C90
  c->r[4]=c->r[4]+0x00007DE4u; // 80033C94
  c->r[5]=c->r[5]+0x000014F0u; // 80033C98
  c->r[6]=0u+0x0000003Cu; // 80033C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033CA0
  c->r[31]=c->r[3]|c->r[3]; // 80033CA4
  c->r[7]=0u+0x00000006u; // 80033CA8
  c->r[3]=c->r[3]+0x0000000Cu; // 80033CAC
  c->lr=0x80033CB4u; f_800C2B8C(c); // 80033CB0
  {uint32_t ea=c->r[2]+0xFFFF8470u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033CB4
  c->r[4]=0u+0x00000000u; // 80033CB8
  c->r[0]=0u+0xFFFFFFFFu; // 80033CBC
  {uint32_t ea=c->r[2]+0xFFFF8468u; c->f[2]=c->ps1[2]=RF32(ea);} // 80033CC0
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80033CC4
  c->r[3]=c->r[31]|c->r[31]; // 80033CC8
  W32(c->r[31]+0x00000000u,c->r[4]); // 80033CCC
  W32(c->r[31]+0x00000004u,c->r[4]); // 80033CD0
  W32(c->r[31]+0x00000008u,c->r[4]); // 80033CD4
  {uint32_t ea=c->r[31]+0x00000184u; WF32(ea,c->f[2]);} // 80033CD8
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[1]);} // 80033CDC
  W32(c->r[31]+0x00000198u,c->r[0]); // 80033CE0
  W32(c->r[31]+0x00000194u,c->r[0]); // 80033CE4
  {uint32_t ea=c->r[31]+0x0000018Cu; WF32(ea,c->f[0]);} // 80033CE8
  {uint32_t ea=c->r[31]+0x00000190u; WF32(ea,c->f[0]);} // 80033CEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80033CF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80033CF4
  c->lr=c->r[0]; // 80033CF8
  c->r[1]=c->r[1]+0x00000010u; // 80033CFC
  return; // 80033D00
}

// fn_80033D04
void f_80033D04(Ctx* __restrict c) {
  trace_call(0x80033D04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033D04
  c->r[0]=c->lr; // 80033D08
  c->r[5]=0u+0x803D0000u; // 80033D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80033D10
  c->r[5]=c->r[5]+0x0000407Cu; // 80033D14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033D18
  c->r[31]=c->r[3]|c->r[3]; // 80033D1C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80033D20
  c->r[3]=R32(c->r[4]+0x00000010u); // 80033D24
  c->r[4]=R32(c->r[5]+0x0000004Cu); // 80033D28
  c->lr=0x80033D30u; f_8000C334(c); // 80033D2C
  c->r[0]=0u+0x00000000u; // 80033D30
  c->r[3]=0u+0x00000001u; // 80033D34
  W32(c->r[31]+0x00000174u,c->r[3]); // 80033D38
  c->r[3]=c->r[31]|c->r[31]; // 80033D3C
  W32(c->r[31]+0x00000178u,c->r[0]); // 80033D40
  W32(c->r[31]+0x0000017Cu,c->r[0]); // 80033D44
  W32(c->r[31]+0x00000180u,c->r[0]); // 80033D48
  c->lr=0x80033D50u; f_8003435C(c); // 80033D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80033D50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80033D54
  c->lr=c->r[0]; // 80033D58
  c->r[1]=c->r[1]+0x00000010u; // 80033D5C
  return; // 80033D60
}

// fn_80033D64
void f_80033D64(Ctx* __restrict c) {
  trace_call(0x80033D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033D64
  c->r[0]=c->lr; // 80033D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80033D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033D70
  c->r[31]=c->r[3]|c->r[3]; // 80033D74
  c->r[0]=R32(c->r[3]+0x00000004u); // 80033D78
  cmps(c,0,(int32_t)c->r[0],0); // 80033D7C
  if (crb(c,2)) { goto L_80033D90; } // 80033D80
  c->lr=0x80033D88u; f_800346C0(c); // 80033D84
  c->r[0]=0u+0x00000000u; // 80033D88
  W32(c->r[31]+0x00000004u,c->r[0]); // 80033D8C
L_80033D90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80033D90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80033D94
  c->lr=c->r[0]; // 80033D98
  c->r[1]=c->r[1]+0x00000010u; // 80033D9C
  return; // 80033DA0
}

// fn_80033DA4
void f_80033DA4(Ctx* __restrict c) {
  trace_call(0x80033DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033DA4
  c->r[0]=c->lr; // 80033DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80033DAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80033DB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80033DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033DB8
  c->r[31]=c->r[3]|c->r[3]; // 80033DBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80033DC0
  cmps(c,0,(int32_t)c->r[0],0); // 80033DC4
  if (crb(c,2)) { goto L_80033E10; } // 80033DC8
  c->r[4]=R32(c->r[3]+0x00000000u); // 80033DCC
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[0]=c->ps1[0]=RF32(ea);} // 80033DD0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 80033DD4
  fcmp(c,0,c->f[31],c->f[0]); // 80033DD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80033DDC
  if (crb(c,2)) { goto L_80033E10; } // 80033DE0
  c->r[0]=R32(c->r[3]+0x00000174u); // 80033DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80033DE8
  if (crb(c,2)) { goto L_80033DF8; } // 80033DEC
  c->f[1]=c->f[31]; // 80033DF0
  c->lr=0x80033DF8u; f_800346F8(c); // 80033DF4
L_80033DF8:;
  c->f[1]=c->f[31]; // 80033DF8
  c->r[3]=c->r[31]|c->r[31]; // 80033DFC
  c->lr=0x80033E04u; f_800347D0(c); // 80033E00
  c->f[1]=c->f[31]; // 80033E04
  c->r[3]=c->r[31]|c->r[31]; // 80033E08
  c->lr=0x80033E10u; f_800349BC(c); // 80033E0C
L_80033E10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80033E10
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80033E14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80033E18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80033E1C
  c->lr=c->r[0]; // 80033E20
  c->r[1]=c->r[1]+0x00000020u; // 80033E24
  return; // 80033E28
}

// fn_80033E2C
void f_80033E2C(Ctx* __restrict c) {
  trace_call(0x80033E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033E2C
  c->r[0]=c->lr; // 80033E30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80033E34
  c->r[11]=c->r[1]+0x00000020u; // 80033E38
  c->lr=0x80033E40u; f_800C2E48(c); // 80033E3C
  cmps(c,0,(int32_t)c->r[8],0); // 80033E40
  c->r[29]=c->r[3]|c->r[3]; // 80033E44
  c->r[30]=c->r[4]|c->r[4]; // 80033E48
  c->r[31]=c->r[5]|c->r[5]; // 80033E4C
  c->r[26]=c->r[6]|c->r[6]; // 80033E50
  c->r[27]=c->r[7]|c->r[7]; // 80033E54
  c->r[28]=c->r[8]|c->r[8]; // 80033E58
  if (crb(c,2)) { goto L_80033E6C; } // 80033E5C
  c->r[3]=c->r[13]+0xFFFF9470u; // 80033E60
  c->lr=0x80033E68u; f_8028AA78(c); // 80033E64
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 80033E68
L_80033E6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80033E6C
  if (crb(c,2)) { goto L_80033E84; } // 80033E70
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033E74
  c->r[0]=c->r[0]|0x00000001u; // 80033E78
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033E7C
  goto L_80033E90; // 80033E80
L_80033E84:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033E84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80033E88
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033E8C
L_80033E90:;
  cmps(c,0,(int32_t)c->r[26],0); // 80033E90
  if (crb(c,2)) { goto L_80033EA8; } // 80033E94
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033E98
  c->r[0]=c->r[0]|0x00000002u; // 80033E9C
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033EA0
  goto L_80033EB4; // 80033EA4
L_80033EA8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033EA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80033EAC
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033EB0
L_80033EB4:;
  cmps(c,0,(int32_t)c->r[27],0); // 80033EB4
  if (crb(c,2)) { goto L_80033ECC; } // 80033EB8
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033EBC
  c->r[0]=c->r[0]|0x00000008u; // 80033EC0
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033EC4
  goto L_80033ED8; // 80033EC8
L_80033ECC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033ECC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80033ED0
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033ED4
L_80033ED8:;
  cmps(c,0,(int32_t)c->r[28],0); // 80033ED8
  if (crb(c,2)) { goto L_80033EF0; } // 80033EDC
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033EE0
  c->r[0]=c->r[0]|0x00000040u; // 80033EE4
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033EE8
  goto L_80033EFC; // 80033EEC
L_80033EF0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033EF0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80033EF4
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033EF8
L_80033EFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80033EFC
  if (!crb(c,2)) { goto L_80033F14; } // 80033F00
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033F04
  c->r[0]=c->r[0]|0x00000080u; // 80033F08
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033F0C
  goto L_80033F20; // 80033F10
L_80033F14:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80033F14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80033F18
  W32(c->r[29]+0x00000018u,c->r[0]); // 80033F1C
L_80033F20:;
  c->r[4]=c->r[30]|c->r[30]; // 80033F20
  c->r[3]=c->r[29]+0x0000000Cu; // 80033F24
  c->lr=0x80033F2Cu; f_80037EC8(c); // 80033F28
  {uint32_t ea=c->r[29]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 80033F2C
  c->r[11]=c->r[1]+0x00000020u; // 80033F30
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80033F34
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80033F38
  c->r[3]=R32(c->r[3]+0x00000010u); // 80033F3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80033F40
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80033F44
  c->lr=0x80033F4Cu; f_800C2E94(c); // 80033F48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80033F4C
  c->lr=c->r[0]; // 80033F50
  c->r[1]=c->r[1]+0x00000020u; // 80033F54
  return; // 80033F58
}

// fn_80033F5C
void f_80033F5C(Ctx* __restrict c) {
  trace_call(0x80033F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033F5C
  c->r[0]=c->lr; // 80033F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80033F64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80033F68
  c->r[31]=c->r[3]|c->r[3]; // 80033F6C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80033F70
  c->r[0]=c->r[0]|0x00000020u; // 80033F74
  W32(c->r[3]+0x00000018u,c->r[0]); // 80033F78
  c->lr=0x80033F80u; f_80033E2C(c); // 80033F7C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80033F80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80033F84
  W32(c->r[31]+0x00000018u,c->r[0]); // 80033F88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80033F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80033F90
  c->lr=c->r[0]; // 80033F94
  c->r[1]=c->r[1]+0x00000010u; // 80033F98
  return; // 80033F9C
}

// fn_80033FA0
void f_80033FA0(Ctx* __restrict c) {
  trace_call(0x80033FA0u);
  c->r[3]=c->r[3]+0x00000048u; // 80033FA0
  f_80037EC8(c); return; // 80033FA4
}

// fn_80033FA8
void f_80033FA8(Ctx* __restrict c) {
  trace_call(0x80033FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80033FA8
  c->r[0]=c->lr; // 80033FAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80033FB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80033FB4
  c->r[31]=c->r[6]|c->r[6]; // 80033FB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80033FBC
  c->r[30]=c->r[5]|c->r[5]; // 80033FC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80033FC4
  c->r[29]=c->r[4]|c->r[4]; // 80033FC8
  W32(c->r[1]+0x00000010u,c->r[28]); // 80033FCC
  c->r[28]=c->r[3]|c->r[3]; // 80033FD0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80033FD4
  c->lr=0x80033FDCu; f_80037BD0(c); // 80033FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80033FDC
  if (crb(c,2)) { goto L_80033FF0; } // 80033FE0
  c->r[4]=c->r[29]|c->r[29]; // 80033FE4
  c->r[3]=c->r[28]+0x00000084u; // 80033FE8
  c->lr=0x80033FF0u; f_80037EC8(c); // 80033FEC
L_80033FF0:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 80033FF0
  c->r[4]=c->r[30]|c->r[30]; // 80033FF4
  c->lr=0x80033FFCu; f_80037BD0(c); // 80033FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80033FFC
  if (crb(c,2)) { goto L_80034010; } // 80034000
  c->r[4]=c->r[30]|c->r[30]; // 80034004
  c->r[3]=c->r[28]+0x000000C0u; // 80034008
  c->lr=0x80034010u; f_80037EC8(c); // 8003400C
L_80034010:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 80034010
  c->r[4]=c->r[31]|c->r[31]; // 80034014
  c->lr=0x8003401Cu; f_80037BD0(c); // 80034018
  cmps(c,0,(int32_t)c->r[3],0); // 8003401C
  if (crb(c,2)) { goto L_80034030; } // 80034020
  c->r[4]=c->r[31]|c->r[31]; // 80034024
  c->r[3]=c->r[28]+0x000000FCu; // 80034028
  c->lr=0x80034030u; f_80037EC8(c); // 8003402C
L_80034030:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80034030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80034034
  c->r[30]=R32(c->r[1]+0x00000018u); // 80034038
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003403C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80034040
  c->lr=c->r[0]; // 80034044
  c->r[1]=c->r[1]+0x00000020u; // 80034048
  return; // 8003404C
}

// fn_80034050
void f_80034050(Ctx* __restrict c) {
  trace_call(0x80034050u);
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 80034050
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80034054
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[2]; // 80034058
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 8003405C
  return; // 80034060
}

// fn_80034064
void f_80034064(Ctx* __restrict c) {
  trace_call(0x80034064u);
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 80034064
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80034068
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[2]; // 8003406C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 80034070
  return; // 80034074
}

// fn_80034078
void f_80034078(Ctx* __restrict c) {
  trace_call(0x80034078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034078
  c->r[0]=c->lr; // 8003407C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80034080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034084
  c->r[31]=c->r[3]|c->r[3]; // 80034088
  c->r[3]=c->r[3]+0x000000FCu; // 8003408C
  c->lr=0x80034094u; f_800387B0(c); // 80034090
  c->r[0]=0u+0x00000001u; // 80034094
  W32(c->r[31]+0x00000180u,c->r[0]); // 80034098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003409C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800340A0
  c->lr=c->r[0]; // 800340A4
  c->r[1]=c->r[1]+0x00000010u; // 800340A8
  return; // 800340AC
}

// fn_800340B0
void f_800340B0(Ctx* __restrict c) {
  trace_call(0x800340B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800340B0
  c->r[0]=c->lr; // 800340B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800340B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800340BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800340C0
  c->r[30]=c->r[3]|c->r[3]; // 800340C4
  c->r[4]=R32(c->r[3]+0x00000194u); // 800340C8
  cmps(c,0,(int32_t)c->r[4],0); // 800340CC
  if (crb(c,0)) { goto L_80034128; } // 800340D0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800340D4
  c->lr=0x800340DCu; f_80037BD0(c); // 800340D8
  cmps(c,0,(int32_t)c->r[3],0); // 800340DC
  if (crb(c,2)) { goto L_80034128; } // 800340E0
  c->r[4]=R32(c->r[30]+0x00000198u); // 800340E4
  c->r[31]=R32(c->r[30]+0x00000194u); // 800340E8
  cmps(c,0,(int32_t)c->r[4],0); // 800340EC
  if (crb(c,0)) { goto L_8003411C; } // 800340F0
  c->r[3]=R32(c->r[30]+0x00000008u); // 800340F4
  c->lr=0x800340FCu; f_80037BD0(c); // 800340F8
  cmps(c,0,(int32_t)c->r[3],0); // 800340FC
  if (crb(c,2)) { goto L_8003411C; } // 80034100
  c->r[3]=c->r[13]+0xFFFF9470u; // 80034104
  c->lr=0x8003410Cu; f_8028AA78(c); // 80034108
  {uint32_t ea=c->r[2]+0xFFFF8470u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003410C
  fcmp(c,0,c->f[1],c->f[0]); // 80034110
  if (!crb(c,0)) { goto L_8003411C; } // 80034114
  c->r[31]=R32(c->r[30]+0x00000198u); // 80034118
L_8003411C:;
  c->r[4]=c->r[31]|c->r[31]; // 8003411C
  c->r[3]=c->r[30]+0x00000138u; // 80034120
  c->lr=0x80034128u; f_80037EC8(c); // 80034124
L_80034128:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80034128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003412C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80034130
  c->lr=c->r[0]; // 80034134
  c->r[1]=c->r[1]+0x00000010u; // 80034138
  return; // 8003413C
}

// fn_80034140
void f_80034140(Ctx* __restrict c) {
  trace_call(0x80034140u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 80034140
  c->r[3]=c->r[3]+c->r[0]; // 80034144
  c->r[3]=R32(c->r[3]+0x00000044u); // 80034148
  return; // 8003414C
}

// fn_80034150
void f_80034150(Ctx* __restrict c) {
  trace_call(0x80034150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034150
  c->r[0]=c->lr; // 80034154
  W32(c->r[1]+0x00000014u,c->r[0]); // 80034158
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 8003415C
  c->r[4]=0u+0x00000000u; // 80034160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034164
  c->r[3]=c->r[3]+c->r[0]; // 80034168
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003416C
  c->r[30]=c->r[5]|c->r[5]; // 80034170
  c->r[3]=c->r[3]+0x0000000Cu; // 80034174
  c->lr=0x8003417Cu; f_800382DC(c); // 80034178
  cmps(c,0,(int32_t)c->r[3],0); // 8003417C
  c->r[31]=c->r[3]|c->r[3]; // 80034180
  if (crb(c,2)) { goto L_800341D4; } // 80034184
  cmps(c,0,(int32_t)c->r[30],0); // 80034188
  if (crb(c,2)) { goto L_800341CC; } // 8003418C
  c->r[4]=R32(c->r[3]+0x00000010u); // 80034190
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80034194
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=RF64(ea);} // 80034198
  c->lr=0x800341A0u; f_800D29B8(c); // 8003419C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800341A0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800341A4
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[0]=c->ps1[0]=RF32(ea);} // 800341A8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800341AC
  fcmp(c,0,c->f[1],c->f[0]); // 800341B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800341B4
  if (!crb(c,2)) { goto L_800341C0; } // 800341B8
  goto L_800341D8; // 800341BC
L_800341C0:;
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800341C0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800341C4
  goto L_800341D8; // 800341C8
L_800341CC:;
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800341CC
  goto L_800341D8; // 800341D0
L_800341D4:;
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[1]=c->ps1[1]=RF32(ea);} // 800341D4
L_800341D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800341D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800341DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800341E0
  c->lr=c->r[0]; // 800341E4
  c->r[1]=c->r[1]+0x00000010u; // 800341E8
  return; // 800341EC
}

// fn_800341F0
void f_800341F0(Ctx* __restrict c) {
  trace_call(0x800341F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800341F0
  c->r[0]=c->lr; // 800341F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800341F8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 800341FC
  c->r[4]=0u+0x00000000u; // 80034200
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80034204
  c->r[3]=c->r[3]+c->r[0]; // 80034208
  c->r[31]=c->r[3]+0x0000000Cu; // 8003420C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80034210
  c->r[3]=c->r[31]|c->r[31]; // 80034214
  c->lr=0x8003421Cu; f_800382DC(c); // 80034218
  cmps(c,0,(int32_t)c->r[3],0); // 8003421C
  c->r[30]=c->r[3]|c->r[3]; // 80034220
  c->r[6]=0u+0x00000000u; // 80034224
  if (crb(c,2)) { goto L_8003425C; } // 80034228
  c->r[4]=0u+0x00000001u; // 8003422C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80034230
  c->r[5]=c->r[3]+0x00000014u; // 80034234
  W32(c->r[1]+0x00000020u,c->r[5]); // 80034238
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[4]<<((c->r[4])&31)); // 8003423C
  c->r[0]=c->r[3]&c->r[0]; // 80034240
  W32(c->r[1]+0x00000024u,c->r[4]); // 80034244
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80034248
  W32(c->r[1]+0x00000030u,c->r[5]); // 8003424C
  W32(c->r[1]+0x00000034u,c->r[4]); // 80034250
  if (crb(c,2)) { goto L_8003425C; } // 80034254
  c->r[6]=0u+0x00000001u; // 80034258
L_8003425C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8003425C
  if (crb(c,2)) { goto L_800342B8; } // 80034260
  c->r[3]=c->r[31]|c->r[31]; // 80034264
  c->r[4]=0u+0x00000001u; // 80034268
  c->lr=0x80034270u; f_800382DC(c); // 8003426C
  cmps(c,0,(int32_t)c->r[3],0); // 80034270
  c->r[7]=0u+0x00000000u; // 80034274
  if (crb(c,2)) { goto L_800342AC; } // 80034278
  c->r[5]=0u+0x00000001u; // 8003427C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80034280
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[5]<<((c->r[5])&31)); // 80034284
  c->r[6]=c->r[3]+0x00000014u; // 80034288
  c->r[0]=c->r[4]&c->r[0]; // 8003428C
  W32(c->r[1]+0x00000018u,c->r[6]); // 80034290
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 80034294
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80034298
  W32(c->r[1]+0x00000028u,c->r[6]); // 8003429C
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800342A0
  if (!crb(c,2)) { goto L_800342AC; } // 800342A4
  c->r[7]=0u+0x00000001u; // 800342A8
L_800342AC:;
  cmps(c,0,(int32_t)c->r[7],0); // 800342AC
  if (crb(c,2)) { goto L_800342B8; } // 800342B0
  c->r[30]=c->r[3]|c->r[3]; // 800342B4
L_800342B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800342B8
  c->r[3]=0u+0x00000001u; // 800342BC
  if (crb(c,2)) { goto L_800342F8; } // 800342C0
  c->r[5]=0u+0x00000004u; // 800342C4
  c->r[4]=0u+0x00000001u; // 800342C8
  c->r[0]=R32(c->r[30]+0x00000014u); // 800342CC
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 800342D0
  c->r[6]=c->r[30]+0x00000014u; // 800342D4
  W32(c->r[1]+0x00000010u,c->r[6]); // 800342D8
  c->r[0]=c->r[4]&c->r[0]; // 800342DC
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800342E0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800342E4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800342E8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800342EC
  if (!crb(c,2)) { goto L_800342F8; } // 800342F0
  c->r[3]=0u+0x00000000u; // 800342F4
L_800342F8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800342F8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800342FC
  c->r[30]=R32(c->r[1]+0x00000038u); // 80034300
  c->lr=c->r[0]; // 80034304
  c->r[1]=c->r[1]+0x00000040u; // 80034308
  return; // 8003430C
}

// fn_80034310
void f_80034310(Ctx* __restrict c) {
  trace_call(0x80034310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034310
  c->r[0]=c->lr; // 80034314
  W32(c->r[1]+0x00000014u,c->r[0]); // 80034318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003431C
  c->r[31]=c->r[3]+0x0000000Cu; // 80034320
  W32(c->r[1]+0x00000008u,c->r[30]); // 80034324
  c->r[30]=0u+0x00000000u; // 80034328
L_8003432C:;
  c->r[3]=c->r[31]|c->r[31]; // 8003432C
  c->lr=0x80034334u; f_80037EB0(c); // 80034330
  c->r[30]=c->r[30]+0x00000001u; // 80034334
  c->r[31]=c->r[31]+0x0000003Cu; // 80034338
  cmpu(c,0,c->r[30],0x00000006u); // 8003433C
  if (crb(c,0)) { IRQCHK(c); goto L_8003432C; } // 80034340
  c->r[0]=R32(c->r[1]+0x00000014u); // 80034344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80034348
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003434C
  c->lr=c->r[0]; // 80034350
  c->r[1]=c->r[1]+0x00000010u; // 80034354
  return; // 80034358
}

// fn_8003435C
void f_8003435C(Ctx* __restrict c) {
  trace_call(0x8003435Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003435C
  c->r[0]=c->lr; // 80034360
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80034364
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80034368
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8003436C
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80034370
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80034374
  c->r[28]=c->r[3]|c->r[3]; // 80034378
  c->lr=0x80034380u; f_80034310(c); // 8003437C
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80034380
  c->r[31]=0u+0x80370000u; // 80034384
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 80034388
  c->r[3]=c->r[28]+0x0000000Cu; // 8003438C
  c->r[5]=R32(c->r[28]+0x00000004u); // 80034390
  c->r[4]=c->r[31]+0x00001E60u; // 80034394
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80034398
  c->r[0]=R32(c->r[28]+0x00000008u); // 8003439C
  W32(c->r[28]+0x0000000Cu,c->r[5]); // 800343A0
  c->f[3]=c->f[1]; // 800343A4
  W32(c->r[28]+0x00000014u,c->r[0]); // 800343A8
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 800343AC
  W32(c->r[28]+0x00000048u,c->r[5]); // 800343B0
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 800343B4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800343B8
  W32(c->r[28]+0x00000050u,c->r[0]); // 800343BC
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 800343C0
  W32(c->r[28]+0x00000084u,c->r[5]); // 800343C4
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 800343C8
  W32(c->r[28]+0x0000008Cu,c->r[0]); // 800343CC
  c->f[4]=(c->f[4]>=0.0)?c->f[0]:c->f[3]; // 800343D0
  W32(c->r[28]+0x000000C0u,c->r[5]); // 800343D4
  W32(c->r[28]+0x000000C8u,c->r[0]); // 800343D8
  W32(c->r[28]+0x000000FCu,c->r[5]); // 800343DC
  W32(c->r[28]+0x00000104u,c->r[0]); // 800343E0
  W32(c->r[28]+0x00000138u,c->r[5]); // 800343E4
  W32(c->r[28]+0x00000140u,c->r[0]); // 800343E8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[2]);} // 800343EC
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[4]);} // 800343F0
  c->lr=0x800343F8u; f_80037E40(c); // 800343F4
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 800343F8
  c->r[29]=0u+0x00000002u; // 800343FC
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80034400
  c->r[30]=0u+0x00000001u; // 80034404
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[2]); // 80034408
  c->r[5]=R32(c->r[28]+0x00000010u); // 8003440C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80034410
  {uint32_t ea=c->r[5]+0x00000010u; c->r[3]=R32(ea); c->r[5]=ea;} // 80034414
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 80034418
  c->r[31]=c->r[31]+0x00001E60u; // 8003441C
  c->f[3]=(c->f[3]>=0.0)?c->f[2]:c->f[2]; // 80034420
  c->r[0]=c->r[3]|c->r[0]; // 80034424
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 80034428
  W32(c->r[5]+0x00000000u,c->r[0]); // 8003442C
  c->r[3]=c->r[28]+0x00000048u; // 80034430
  c->r[4]=c->r[31]+0x00000005u; // 80034434
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80034438
  W32(c->r[1]+0x00000048u,c->r[5]); // 8003443C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 80034440
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 80034444
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 80034448
  c->f[4]=(c->f[4]>=0.0)?c->f[0]:c->f[3]; // 8003444C
  W32(c->r[1]+0x00000090u,c->r[5]); // 80034450
  W32(c->r[1]+0x00000094u,c->r[29]); // 80034454
  {uint32_t ea=c->r[28]+0x00000064u; WF32(ea,c->f[2]);} // 80034458
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[4]);} // 8003445C
  c->lr=0x80034464u; f_80037E40(c); // 80034460
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034464
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 80034468
  c->r[4]=R32(c->r[28]+0x00000144u); // 8003446C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[0]); // 80034470
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80034474
  c->r[4]=c->r[4]|0x00000080u; // 80034478
  W32(c->r[28]+0x00000144u,c->r[4]); // 8003447C
  c->r[5]=R32(c->r[28]+0x0000004Cu); // 80034480
  c->r[4]=c->r[31]+0x0000000Cu; // 80034484
  c->f[3]=c->f[1]; // 80034488
  {uint32_t ea=c->r[5]+0x00000010u; c->r[3]=R32(ea); c->r[5]=ea;} // 8003448C
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[0]; // 80034490
  W32(c->r[1]+0x00000044u,c->r[29]); // 80034494
  c->r[0]=c->r[3]&~c->r[0]; // 80034498
  c->r[3]=c->r[28]+0x00000084u; // 8003449C
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[0]; // 800344A0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800344A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800344A8
  W32(c->r[1]+0x00000040u,c->r[5]); // 800344AC
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 800344B0
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 800344B4
  W32(c->r[1]+0x00000088u,c->r[5]); // 800344B8
  c->f[4]=(c->f[4]>=0.0)?c->f[2]:c->f[3]; // 800344BC
  W32(c->r[1]+0x0000008Cu,c->r[29]); // 800344C0
  {uint32_t ea=c->r[28]+0x000000A0u; WF32(ea,c->f[0]);} // 800344C4
  {uint32_t ea=c->r[28]+0x000000A4u; WF32(ea,c->f[4]);} // 800344C8
  c->lr=0x800344D0u; f_80037E40(c); // 800344CC
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[0]=c->ps1[0]=RF32(ea);} // 800344D0
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 800344D4
  c->r[5]=R32(c->r[28]+0x00000088u); // 800344D8
  c->r[4]=c->r[31]+0x00000012u; // 800344DC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[0]); // 800344E0
  {uint32_t ea=c->r[5]+0x00000010u; c->r[3]=R32(ea); c->r[5]=ea;} // 800344E4
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800344E8
  c->r[0]=c->r[3]&~c->r[0]; // 800344EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800344F0
  c->f[3]=c->f[1]; // 800344F4
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[0]; // 800344F8
  W32(c->r[1]+0x00000038u,c->r[5]); // 800344FC
  c->r[3]=c->r[28]+0x000000C0u; // 80034500
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[0]; // 80034504
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 80034508
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8003450C
  W32(c->r[1]+0x00000080u,c->r[5]); // 80034510
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 80034514
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80034518
  W32(c->r[1]+0x00000084u,c->r[29]); // 8003451C
  c->f[4]=(c->f[4]>=0.0)?c->f[2]:c->f[3]; // 80034520
  {uint32_t ea=c->r[28]+0x000000DCu; WF32(ea,c->f[0]);} // 80034524
  {uint32_t ea=c->r[28]+0x000000E0u; WF32(ea,c->f[4]);} // 80034528
  c->lr=0x80034530u; f_80037E40(c); // 8003452C
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 80034530
  c->r[3]=((c->r[30])&0x20)?0u:(c->r[30]<<((c->r[30])&31)); // 80034534
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80034538
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 8003453C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[2]); // 80034540
  c->r[6]=R32(c->r[28]+0x000000C4u); // 80034544
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80034548
  {uint32_t ea=c->r[6]+0x00000010u; c->r[4]=R32(ea); c->r[6]=ea;} // 8003454C
  W32(c->r[1]+0x00000034u,c->r[30]); // 80034550
  c->f[3]=(c->f[3]>=0.0)?c->f[2]:c->f[2]; // 80034554
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 80034558
  c->r[3]=c->r[4]|c->r[3]; // 8003455C
  W32(c->r[6]+0x00000000u,c->r[3]); // 80034560
  c->r[3]=c->r[28]+0x000000FCu; // 80034564
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 80034568
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8003456C
  c->r[5]=R32(c->r[28]+0x000000C4u); // 80034570
  {uint32_t ea=c->r[5]+0x00000010u; c->r[4]=R32(ea); c->r[5]=ea;} // 80034574
  c->f[4]=(c->f[4]>=0.0)?c->f[0]:c->f[3]; // 80034578
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 8003457C
  W32(c->r[1]+0x00000030u,c->r[6]); // 80034580
  c->r[0]=c->r[4]&~c->r[0]; // 80034584
  c->r[4]=c->r[31]+0x00000018u; // 80034588
  W32(c->r[5]+0x00000000u,c->r[0]); // 8003458C
  W32(c->r[1]+0x00000078u,c->r[6]); // 80034590
  W32(c->r[1]+0x0000007Cu,c->r[30]); // 80034594
  W32(c->r[1]+0x00000028u,c->r[5]); // 80034598
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 8003459C
  W32(c->r[1]+0x00000070u,c->r[5]); // 800345A0
  W32(c->r[1]+0x00000074u,c->r[29]); // 800345A4
  {uint32_t ea=c->r[28]+0x00000118u; WF32(ea,c->f[2]);} // 800345A8
  {uint32_t ea=c->r[28]+0x0000011Cu; WF32(ea,c->f[4]);} // 800345AC
  c->lr=0x800345B4u; f_80037E40(c); // 800345B0
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800345B4
  c->r[3]=((c->r[30])&0x20)?0u:(c->r[30]<<((c->r[30])&31)); // 800345B8
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[2]=c->ps1[2]=RF32(ea);} // 800345BC
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 800345C0
  c->r[5]=R32(c->r[28]+0x00000108u); // 800345C4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800345C8
  c->r[7]=R32(c->r[28]+0x00000100u); // 800345CC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFBu; // 800345D0
  W32(c->r[1]+0x00000024u,c->r[30]); // 800345D4
  c->r[5]=c->r[5]|0x00000010u; // 800345D8
  c->f[3]=c->f[1]; // 800345DC
  W32(c->r[28]+0x00000108u,c->r[5]); // 800345E0
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 800345E4
  {uint32_t ea=c->r[7]+0x00000010u; c->r[4]=R32(ea); c->r[7]=ea;} // 800345E8
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 800345EC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800345F0
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 800345F4
  c->r[3]=c->r[4]|c->r[3]; // 800345F8
  c->r[4]=c->r[31]+0x0000001Eu; // 800345FC
  W32(c->r[7]+0x00000000u,c->r[3]); // 80034600
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 80034604
  c->r[6]=R32(c->r[28]+0x00000100u); // 80034608
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 8003460C
  {uint32_t ea=c->r[6]+0x00000010u; c->r[5]=R32(ea); c->r[6]=ea;} // 80034610
  c->r[3]=c->r[28]+0x00000138u; // 80034614
  c->f[4]=(c->f[4]>=0.0)?c->f[0]:c->f[3]; // 80034618
  c->r[0]=c->r[5]&~c->r[0]; // 8003461C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80034620
  W32(c->r[1]+0x00000020u,c->r[7]); // 80034624
  W32(c->r[1]+0x00000068u,c->r[7]); // 80034628
  W32(c->r[1]+0x00000018u,c->r[6]); // 8003462C
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 80034630
  W32(c->r[1]+0x00000060u,c->r[6]); // 80034634
  W32(c->r[1]+0x00000064u,c->r[29]); // 80034638
  {uint32_t ea=c->r[28]+0x00000154u; WF32(ea,c->f[2]);} // 8003463C
  {uint32_t ea=c->r[28]+0x00000158u; WF32(ea,c->f[4]);} // 80034640
  c->lr=0x80034648u; f_80037E40(c); // 80034644
  c->r[5]=R32(c->r[28]+0x00000144u); // 80034648
  c->r[3]=((c->r[30])&0x20)?0u:(c->r[30]<<((c->r[30])&31)); // 8003464C
  c->r[4]=R32(c->r[28]+0x0000013Cu); // 80034650
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 80034654
  c->r[5]=c->r[5]|0x000000A0u; // 80034658
  W32(c->r[28]+0x00000144u,c->r[5]); // 8003465C
  c->r[5]=c->r[4]+0x00000010u; // 80034660
  c->r[4]=R32(c->r[4]+0x00000010u); // 80034664
  W32(c->r[1]+0x00000014u,c->r[30]); // 80034668
  c->r[3]=c->r[4]|c->r[3]; // 8003466C
  W32(c->r[5]+0x00000000u,c->r[3]); // 80034670
  c->r[4]=R32(c->r[28]+0x0000013Cu); // 80034674
  {uint32_t ea=c->r[4]+0x00000010u; c->r[3]=R32(ea); c->r[4]=ea;} // 80034678
  W32(c->r[1]+0x0000005Cu,c->r[30]); // 8003467C
  c->r[0]=c->r[3]&~c->r[0]; // 80034680
  W32(c->r[4]+0x00000000u,c->r[0]); // 80034684
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80034688
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8003468C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80034690
  W32(c->r[1]+0x00000054u,c->r[29]); // 80034694
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80034698
  c->r[28]=R32(c->r[1]+0x000000A0u); // 8003469C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800346A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800346A4
  W32(c->r[1]+0x00000058u,c->r[5]); // 800346A8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800346AC
  W32(c->r[1]+0x00000050u,c->r[4]); // 800346B0
  c->lr=c->r[0]; // 800346B4
  c->r[1]=c->r[1]+0x000000B0u; // 800346B8
  return; // 800346BC
}

// fn_800346C0
void f_800346C0(Ctx* __restrict c) {
  trace_call(0x800346C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800346C0
  c->r[0]=c->lr; // 800346C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800346C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800346CC
  c->r[31]=c->r[3]|c->r[3]; // 800346D0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800346D4
  c->lr=0x800346DCu; f_8031AE64(c); // 800346D8
  c->r[3]=c->r[31]|c->r[31]; // 800346DC
  c->lr=0x800346E4u; f_80034310(c); // 800346E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800346E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800346E8
  c->lr=c->r[0]; // 800346EC
  c->r[1]=c->r[1]+0x00000010u; // 800346F0
  return; // 800346F4
}

// fn_800346F8
void f_800346F8(Ctx* __restrict c) {
  trace_call(0x800346F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800346F8
  c->r[0]=c->lr; // 800346FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034700
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80034704
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80034708
  c->f[31]=c->f[1]; // 8003470C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034710
  c->r[31]=c->r[3]|c->r[3]; // 80034714
  c->r[3]=c->r[3]+0x0000000Cu; // 80034718
  c->lr=0x80034720u; f_80038310(c); // 8003471C
  c->f[1]=c->f[31]; // 80034720
  c->r[3]=c->r[31]+0x00000048u; // 80034724
  c->lr=0x8003472Cu; f_80038310(c); // 80034728
  c->r[0]=R32(c->r[31]+0x00000178u); // 8003472C
  cmps(c,0,(int32_t)c->r[0],0); // 80034730
  if (crb(c,2)) { goto L_80034740; } // 80034734
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80034738
  goto L_80034744; // 8003473C
L_80034740:;
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[4]=c->ps1[4]=RF32(ea);} // 80034740
L_80034744:;
  {uint32_t ea=c->r[31]+0x00000184u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034744
  c->r[3]=c->r[31]+0x00000048u; // 80034748
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003474C
  c->f[5]=c->ps1[5]=S(c->f[31]/c->f[0]); // 80034750
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80034754
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[1]); // 80034758
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[1]); // 8003475C
  c->f[0]=(c->f[0]>=0.0)?c->f[4]:c->f[1]; // 80034760
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[1]; // 80034764
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80034768
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[3]);} // 8003476C
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80034770
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 80034774
  c->lr=0x8003477Cu; f_800384A8(c); // 80034778
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 8003477C
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034780
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80034784
  fcmp(c,0,c->f[1],c->f[0]); // 80034788
  if (!crb(c,1)) { goto L_800347B0; } // 8003478C
  c->r[3]=c->r[31]|c->r[31]; // 80034790
  c->r[4]=0u+0x00000001u; // 80034794
  c->lr=0x8003479Cu; f_800341F0(c); // 80034798
  cmps(c,0,(int32_t)c->r[3],0); // 8003479C
  if (crb(c,2)) { goto L_800347B4; } // 800347A0
  c->r[0]=0u+0x00000000u; // 800347A4
  W32(c->r[31]+0x00000178u,c->r[0]); // 800347A8
  goto L_800347B4; // 800347AC
L_800347B0:;
  c->lr=0x800347B4u; f_80319494(c); // 800347B0
L_800347B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800347B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800347B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800347BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800347C0
  c->lr=c->r[0]; // 800347C4
  c->r[1]=c->r[1]+0x00000020u; // 800347C8
  return; // 800347CC
}

// fn_800347D0
void f_800347D0(Ctx* __restrict c) {
  trace_call(0x800347D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800347D0
  c->r[0]=c->lr; // 800347D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800347D8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800347DC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800347E0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800347E4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800347E8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 800347EC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 800347F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 800347F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 800347F8
  c->f[28]=c->f[1]; // 800347FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80034800
  W32(c->r[1]+0x00000018u,c->r[30]); // 80034804
  W32(c->r[1]+0x00000014u,c->r[29]); // 80034808
  W32(c->r[1]+0x00000010u,c->r[28]); // 8003480C
  c->r[28]=c->r[3]|c->r[3]; // 80034810
  c->r[3]=c->r[3]+0x00000084u; // 80034814
  c->lr=0x8003481Cu; f_80038310(c); // 80034818
  c->f[1]=c->f[28]; // 8003481C
  c->r[3]=c->r[28]+0x000000C0u; // 80034820
  c->lr=0x80034828u; f_80038310(c); // 80034824
  c->f[1]=c->f[28]; // 80034828
  c->r[3]=c->r[28]+0x000000FCu; // 8003482C
  c->lr=0x80034834u; f_80038310(c); // 80034830
  c->r[0]=R32(c->r[28]+0x00000180u); // 80034834
  cmps(c,0,(int32_t)c->r[0],0); // 80034838
  if (crb(c,2)) { goto L_80034858; } // 8003483C
  c->r[3]=c->r[28]|c->r[28]; // 80034840
  c->r[4]=0u+0x00000004u; // 80034844
  c->lr=0x8003484Cu; f_800341F0(c); // 80034848
  c->r[0]=cntlz(c->r[3]); // 8003484C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80034850
  W32(c->r[28]+0x00000180u,c->r[0]); // 80034854
L_80034858:;
  c->r[0]=R32(c->r[28]+0x0000017Cu); // 80034858
  c->r[3]=0u+0x00000000u; // 8003485C
  cmps(c,0,(int32_t)c->r[0],0); // 80034860
  if (!crb(c,2)) { goto L_80034874; } // 80034864
  c->r[0]=R32(c->r[28]+0x00000180u); // 80034868
  cmps(c,0,(int32_t)c->r[0],0); // 8003486C
  if (crb(c,2)) { goto L_80034878; } // 80034870
L_80034874:;
  c->r[3]=0u+0x00000001u; // 80034874
L_80034878:;
  cmps(c,0,(int32_t)c->r[3],0); // 80034878
  if (crb(c,2)) { goto L_80034888; } // 8003487C
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80034880
  goto L_8003488C; // 80034884
L_80034888:;
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[29]=c->ps1[29]=RF32(ea);} // 80034888
L_8003488C:;
  {uint32_t ea=c->r[28]+0x00000184u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003488C
  c->r[31]=c->r[28]+0x00000078u; // 80034890
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80034894
  c->r[30]=c->r[28]+0x00000084u; // 80034898
  c->f[28]=c->ps1[28]=S(c->f[28]/c->f[0]); // 8003489C
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[30]=c->ps1[30]=RF32(ea);} // 800348A0
  c->r[29]=0u+0x00000002u; // 800348A4
L_800348A8:;
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[30]); // 800348A8
  c->r[3]=c->r[30]|c->r[30]; // 800348AC
  c->f[2]=c->ps1[2]=S(c->f[28]-c->f[30]); // 800348B0
  c->f[0]=(c->f[0]>=0.0)?c->f[29]:c->f[30]; // 800348B4
  c->f[2]=(c->f[2]>=0.0)?c->f[28]:c->f[30]; // 800348B8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800348BC
  c->f[1]=(c->f[1]>=0.0)?c->f[31]:c->f[0]; // 800348C0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 800348C4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[2]);} // 800348C8
  c->lr=0x800348D0u; f_800384A8(c); // 800348CC
  c->r[29]=c->r[29]+0x00000001u; // 800348D0
  c->r[30]=c->r[30]+0x0000003Cu; // 800348D4
  cmpu(c,0,c->r[29],0x00000003u); // 800348D8
  c->r[31]=c->r[31]+0x0000003Cu; // 800348DC
  if (!crb(c,1)) { IRQCHK(c); goto L_800348A8; } // 800348E0
  c->r[0]=R32(c->r[28]+0x00000180u); // 800348E4
  cmps(c,0,(int32_t)c->r[0],0); // 800348E8
  if (crb(c,2)) { goto L_800348F8; } // 800348EC
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800348F0
  goto L_800348FC; // 800348F4
L_800348F8:;
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[3]=c->ps1[3]=RF32(ea);} // 800348F8
L_800348FC:;
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[1]=c->ps1[1]=RF32(ea);} // 800348FC
  c->r[3]=c->r[28]+0x000000FCu; // 80034900
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80034904
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 80034908
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[1]); // 8003490C
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[1]; // 80034910
  c->f[2]=(c->f[2]>=0.0)?c->f[4]:c->f[1]; // 80034914
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 80034918
  {uint32_t ea=c->r[28]+0x0000012Cu; WF32(ea,c->f[2]);} // 8003491C
  c->f[1]=(c->f[1]>=0.0)?c->f[4]:c->f[0]; // 80034920
  {uint32_t ea=c->r[28]+0x0000011Cu; WF32(ea,c->f[1]);} // 80034924
  c->lr=0x8003492Cu; f_800384A8(c); // 80034928
  {uint32_t ea=c->r[28]+0x0000018Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003492C
  c->r[3]=c->r[28]+0x00000084u; // 80034930
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[3]=c->ps1[3]=RF32(ea);} // 80034934
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80034938
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8003493C
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[3]; // 80034940
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80034944
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80034948
  {uint32_t ea=c->r[28]+0x000000A8u; WF32(ea,c->f[0]);} // 8003494C
  c->lr=0x80034954u; f_80038564(c); // 80034950
  {uint32_t ea=c->r[28]+0x00000190u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034954
  c->r[3]=c->r[28]+0x000000C0u; // 80034958
  {uint32_t ea=c->r[2]+0xFFFF8474u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003495C
  {uint32_t ea=c->r[2]+0xFFFF846Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80034960
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80034964
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[3]; // 80034968
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8003496C
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80034970
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80034974
  c->lr=0x8003497Cu; f_80038564(c); // 80034978
  c->r[0]=R32(c->r[1]+0x00000064u); // 8003497C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80034980
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80034984
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80034988
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8003498C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80034990
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80034994
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 80034998
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 8003499C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800349A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800349A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800349A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800349AC
  c->lr=c->r[0]; // 800349B0
  c->r[1]=c->r[1]+0x00000060u; // 800349B4
  return; // 800349B8
}

// fn_800349BC
void f_800349BC(Ctx* __restrict c) {
  trace_call(0x800349BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800349BC
  c->r[0]=c->lr; // 800349C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800349C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800349C8
  c->r[31]=c->r[3]|c->r[3]; // 800349CC
  c->r[3]=c->r[3]+0x00000138u; // 800349D0
  c->lr=0x800349D8u; f_80038310(c); // 800349D4
  c->r[3]=c->r[31]+0x00000138u; // 800349D8
  c->lr=0x800349E0u; f_80038718(c); // 800349DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800349E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800349E4
  c->lr=c->r[0]; // 800349E8
  c->r[1]=c->r[1]+0x00000010u; // 800349EC
  return; // 800349F0
}

// fn_800349F4
void f_800349F4(Ctx* __restrict c) {
  trace_call(0x800349F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800349F4
  c->r[0]=c->lr; // 800349F8
  c->r[6]=0u+0x0000003Cu; // 800349FC
  c->r[7]=0u+0x00000003u; // 80034A00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034A04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80034A08
  c->r[31]=0u+0x80010000u; // 80034A0C
  c->r[5]=c->r[31]+0x000014F0u; // 80034A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 80034A14
  c->r[30]=0u+0x80030000u; // 80034A18
  c->r[4]=c->r[30]+0x00007DE4u; // 80034A1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80034A20
  c->r[29]=c->r[3]|c->r[3]; // 80034A24
  c->r[3]=c->r[3]+0x00000010u; // 80034A28
  c->lr=0x80034A30u; f_800C2B8C(c); // 80034A2C
  c->r[3]=c->r[29]+0x000000C4u; // 80034A30
  c->r[4]=c->r[30]+0x00007DE4u; // 80034A34
  c->r[5]=c->r[31]+0x000014F0u; // 80034A38
  c->r[6]=0u+0x0000003Cu; // 80034A3C
  c->r[7]=0u+0x00000003u; // 80034A40
  c->lr=0x80034A48u; f_800C2B8C(c); // 80034A44
  {uint32_t ea=c->r[2]+0xFFFF84A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034A48
  c->r[0]=0u+0x00000000u; // 80034A4C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80034A50
  c->r[3]=c->r[29]|c->r[29]; // 80034A54
  W32(c->r[29]+0x00000004u,c->r[0]); // 80034A58
  W32(c->r[29]+0x00000008u,c->r[0]); // 80034A5C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80034A60
  {uint32_t ea=c->r[29]+0x000001BCu; WF32(ea,c->f[0]);} // 80034A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80034A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 80034A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80034A70
  c->r[0]=R32(c->r[1]+0x00000024u); // 80034A74
  c->lr=c->r[0]; // 80034A78
  c->r[1]=c->r[1]+0x00000020u; // 80034A7C
  return; // 80034A80
}

// fn_80034A84
void f_80034A84(Ctx* __restrict c) {
  trace_call(0x80034A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034A84
  c->r[0]=c->lr; // 80034A88
  c->r[6]=0u+0x803D0000u; // 80034A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80034A90
  c->r[6]=c->r[6]+0x0000407Cu; // 80034A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034A98
  c->r[31]=c->r[5]|c->r[5]; // 80034A9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80034AA0
  c->r[30]=c->r[3]|c->r[3]; // 80034AA4
  W32(c->r[3]+0x00000004u,c->r[4]); // 80034AA8
  c->r[3]=R32(c->r[4]+0x00000010u); // 80034AAC
  c->r[4]=R32(c->r[6]+0x0000004Cu); // 80034AB0
  c->lr=0x80034AB8u; f_8000C334(c); // 80034AB4
  cmps(c,0,(int32_t)c->r[31],3); // 80034AB8
  W32(c->r[30]+0x000001A8u,c->r[31]); // 80034ABC
  c->r[4]=0u+0x00000001u; // 80034AC0
  if (crb(c,2)) { goto L_80034AD4; } // 80034AC4
  cmps(c,0,(int32_t)c->r[31],4); // 80034AC8
  if (crb(c,2)) { goto L_80034AD4; } // 80034ACC
  c->r[4]=0u+0x00000000u; // 80034AD0
L_80034AD4:;
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034AD4
  c->r[0]=0u+0x00000000u; // 80034AD8
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80034ADC
  c->r[3]=c->r[30]|c->r[30]; // 80034AE0
  W32(c->r[30]+0x000001ACu,c->r[4]); // 80034AE4
  W32(c->r[30]+0x000001B0u,c->r[0]); // 80034AE8
  {uint32_t ea=c->r[30]+0x000001C4u; WF32(ea,c->f[1]);} // 80034AEC
  {uint32_t ea=c->r[30]+0x000001C8u; WF32(ea,c->f[0]);} // 80034AF0
  {uint32_t ea=c->r[30]+0x000001CCu; WF32(ea,c->f[0]);} // 80034AF4
  W32(c->r[30]+0x000001C0u,c->r[0]); // 80034AF8
  {uint32_t ea=c->r[30]+0x000001D0u; WF32(ea,c->f[0]);} // 80034AFC
  {uint32_t ea=c->r[30]+0x000001D4u; WF32(ea,c->f[0]);} // 80034B00
  {uint32_t ea=c->r[30]+0x000001D8u; WF32(ea,c->f[0]);} // 80034B04
  {uint32_t ea=c->r[30]+0x000001DCu; WF32(ea,c->f[0]);} // 80034B08
  {uint32_t ea=c->r[30]+0x000001B8u; WF32(ea,c->f[1]);} // 80034B0C
  c->lr=0x80034B14u; f_80035434(c); // 80034B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80034B14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80034B18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80034B1C
  c->lr=c->r[0]; // 80034B20
  c->r[1]=c->r[1]+0x00000010u; // 80034B24
  return; // 80034B28
}

// fn_80034B2C
void f_80034B2C(Ctx* __restrict c) {
  trace_call(0x80034B2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034B2C
  c->r[0]=c->lr; // 80034B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80034B34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034B38
  c->r[31]=c->r[3]|c->r[3]; // 80034B3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80034B40
  cmps(c,0,(int32_t)c->r[0],0); // 80034B44
  if (crb(c,2)) { goto L_80034B58; } // 80034B48
  c->lr=0x80034B50u; f_80035B00(c); // 80034B4C
  c->r[0]=0u+0x00000000u; // 80034B50
  W32(c->r[31]+0x00000004u,c->r[0]); // 80034B54
L_80034B58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80034B58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80034B5C
  c->lr=c->r[0]; // 80034B60
  c->r[1]=c->r[1]+0x00000010u; // 80034B64
  return; // 80034B68
}

// fn_80034B6C
void f_80034B6C(Ctx* __restrict c) {
  trace_call(0x80034B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034B6C
  c->r[0]=c->lr; // 80034B70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034B74
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80034B78
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80034B7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80034B80
  c->r[31]=c->r[3]|c->r[3]; // 80034B84
  c->r[0]=R32(c->r[3]+0x00000004u); // 80034B88
  cmps(c,0,(int32_t)c->r[0],0); // 80034B8C
  if (crb(c,2)) { goto L_80034C08; } // 80034B90
  c->r[4]=R32(c->r[3]+0x00000000u); // 80034B94
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034B98
  {uint32_t ea=c->r[4]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 80034B9C
  fcmp(c,0,c->f[31],c->f[0]); // 80034BA0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80034BA4
  if (crb(c,2)) { goto L_80034C08; } // 80034BA8
  c->r[0]=R32(c->r[3]+0x000001ACu); // 80034BAC
  cmps(c,0,(int32_t)c->r[0],0); // 80034BB0
  if (crb(c,2)) { goto L_80034BE8; } // 80034BB4
  c->f[1]=c->f[31]; // 80034BB8
  c->lr=0x80034BC0u; f_800360A0(c); // 80034BBC
  c->f[1]=c->f[31]; // 80034BC0
  c->r[3]=c->r[31]|c->r[31]; // 80034BC4
  c->lr=0x80034BCCu; f_80036240(c); // 80034BC8
  c->f[1]=c->f[31]; // 80034BCC
  c->r[3]=c->r[31]|c->r[31]; // 80034BD0
  c->lr=0x80034BD8u; f_80036468(c); // 80034BD4
  c->f[1]=c->f[31]; // 80034BD8
  c->r[3]=c->r[31]|c->r[31]; // 80034BDC
  c->lr=0x80034BE4u; f_800366B8(c); // 80034BE0
  goto L_80034C08; // 80034BE4
L_80034BE8:;
  c->f[1]=c->f[31]; // 80034BE8
  c->lr=0x80034BF0u; f_80035F88(c); // 80034BEC
  c->f[1]=c->f[31]; // 80034BF0
  c->r[3]=c->r[31]|c->r[31]; // 80034BF4
  c->lr=0x80034BFCu; f_80036064(c); // 80034BF8
  c->f[1]=c->f[31]; // 80034BFC
  c->r[3]=c->r[31]|c->r[31]; // 80034C00
  c->lr=0x80034C08u; f_800366B8(c); // 80034C04
L_80034C08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80034C08
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80034C0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80034C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80034C14
  c->lr=c->r[0]; // 80034C18
  c->r[1]=c->r[1]+0x00000020u; // 80034C1C
  return; // 80034C20
}

// fn_80034C24
void f_80034C24(Ctx* __restrict c) {
  trace_call(0x80034C24u);
  cmps(c,0,(int32_t)c->r[5],0); // 80034C24
  if (crb(c,2)) { goto L_80034C3C; } // 80034C28
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80034C2C
  c->r[0]=c->r[0]|0x00000001u; // 80034C30
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80034C34
  goto L_80034C48; // 80034C38
L_80034C3C:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80034C3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80034C40
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80034C44
L_80034C48:;
  cmps(c,0,(int32_t)c->r[6],0); // 80034C48
  if (crb(c,2)) { goto L_80034C60; } // 80034C4C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80034C50
  c->r[0]=c->r[0]|0x00000002u; // 80034C54
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80034C58
  goto L_80034C6C; // 80034C5C
L_80034C60:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80034C60
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80034C64
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80034C68
L_80034C6C:;
  c->r[3]=c->r[3]+0x00000010u; // 80034C6C
  f_80037EC8(c); return; // 80034C70
}

// fn_80034C74
void f_80034C74(Ctx* __restrict c) {
  trace_call(0x80034C74u);
  cmps(c,0,(int32_t)c->r[5],0); // 80034C74
  if (crb(c,2)) { goto L_80034C94; } // 80034C78
  c->r[0]=0u+0x00000001u; // 80034C7C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80034C80
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80034C84
  c->r[0]=c->r[5]|c->r[0]; // 80034C88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80034C8C
  return; // 80034C90
L_80034C94:;
  c->r[0]=0u+0x00000001u; // 80034C94
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80034C98
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80034C9C
  c->r[0]=c->r[5]&~c->r[0]; // 80034CA0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80034CA4
  return; // 80034CA8
}

// fn_80034CAC
void f_80034CAC(Ctx* __restrict c) {
  trace_call(0x80034CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034CAC
  c->r[0]=c->lr; // 80034CB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034CB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80034CB8
  c->r[31]=c->r[7]|c->r[7]; // 80034CBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80034CC0
  c->r[30]=c->r[6]|c->r[6]; // 80034CC4
  c->r[6]=c->r[31]|c->r[31]; // 80034CC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80034CCC
  c->r[29]=c->r[5]|c->r[5]; // 80034CD0
  c->r[5]=c->r[30]|c->r[30]; // 80034CD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80034CD8
  c->r[28]=c->r[3]|c->r[3]; // 80034CDC
  c->lr=0x80034CE4u; f_80034C24(c); // 80034CE0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80034CE4
  cmps(c,0,(int32_t)c->r[0],0); // 80034CE8
  if (crb(c,2)) { goto L_80034D58; } // 80034CEC
  c->r[0]=R32(c->r[28]+0x000001B4u); // 80034CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80034CF4
  if (crb(c,2)) { goto L_80034D58; } // 80034CF8
  cmps(c,0,(int32_t)c->r[30],0); // 80034CFC
  if (crb(c,2)) { goto L_80034D14; } // 80034D00
  c->r[0]=R32(c->r[28]+0x000000D0u); // 80034D04
  c->r[0]=c->r[0]|0x00000001u; // 80034D08
  W32(c->r[28]+0x000000D0u,c->r[0]); // 80034D0C
  goto L_80034D20; // 80034D10
L_80034D14:;
  c->r[0]=R32(c->r[28]+0x000000D0u); // 80034D14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80034D18
  W32(c->r[28]+0x000000D0u,c->r[0]); // 80034D1C
L_80034D20:;
  cmps(c,0,(int32_t)c->r[31],0); // 80034D20
  if (crb(c,2)) { goto L_80034D38; } // 80034D24
  c->r[0]=R32(c->r[28]+0x000000D0u); // 80034D28
  c->r[0]=c->r[0]|0x00000002u; // 80034D2C
  W32(c->r[28]+0x000000D0u,c->r[0]); // 80034D30
  goto L_80034D44; // 80034D34
L_80034D38:;
  c->r[0]=R32(c->r[28]+0x000000D0u); // 80034D38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80034D3C
  W32(c->r[28]+0x000000D0u,c->r[0]); // 80034D40
L_80034D44:;
  c->r[0]=R32(c->r[13]+0xFFFF8078u); // 80034D44
  c->r[4]=c->r[29]|c->r[29]; // 80034D48
  W32(c->r[28]+0x000000D4u,c->r[0]); // 80034D4C
  c->r[3]=c->r[28]+0x000000C4u; // 80034D50
  c->lr=0x80034D58u; f_80037EC8(c); // 80034D54
L_80034D58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80034D58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80034D5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80034D60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80034D64
  c->r[28]=R32(c->r[1]+0x00000010u); // 80034D68
  c->lr=c->r[0]; // 80034D6C
  c->r[1]=c->r[1]+0x00000020u; // 80034D70
  return; // 80034D74
}

// fn_80034D78
void f_80034D78(Ctx* __restrict c) {
  trace_call(0x80034D78u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034D78
  c->r[0]=c->lr; // 80034D7C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80034D80
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80034D84
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80034D88
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80034D8C
  c->r[31]=c->r[3]|c->r[3]; // 80034D90
  c->r[3]=c->r[3]+0x0000004Cu; // 80034D94
  c->lr=0x80034D9Cu; f_80037EC8(c); // 80034D98
  {uint32_t ea=c->r[31]+0x000001DCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80034D9C
  c->r[31]=c->r[3]|c->r[3]; // 80034DA0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034DA4
  c->r[3]=R32(c->r[3]+0x00000010u); // 80034DA8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 80034DAC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80034DB0
  fcmp(c,0,c->f[1],c->f[0]); // 80034DB4
  if (crb(c,2)) { goto L_80034E58; } // 80034DB8
  c->r[4]=0u+0x00000001u; // 80034DBC
  c->lr=0x80034DC4u; f_802AA2C0(c); // 80034DC0
  c->r[0]=0u+0x00000000u; // 80034DC4
  W32(c->r[31]+0x00000024u,c->r[0]); // 80034DC8
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034DCC
  c->r[5]=0u+0x00000004u; // 80034DD0
  c->r[0]=0u+0x00000001u; // 80034DD4
  c->r[4]=R32(c->r[31]+0x00000014u); // 80034DD8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80034DDC
  fcmp(c,0,c->f[0],c->f[31]); // 80034DE0
  c->r[6]=c->r[31]+0x00000014u; // 80034DE4
  W32(c->r[1]+0x00000020u,c->r[6]); // 80034DE8
  c->r[0]=c->r[4]&~c->r[3]; // 80034DEC
  W32(c->r[1]+0x00000024u,c->r[5]); // 80034DF0
  W32(c->r[1]+0x00000008u,c->r[6]); // 80034DF4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80034DF8
  W32(c->r[31]+0x00000014u,c->r[0]); // 80034DFC
  if (!crb(c,2)) { goto L_80034E28; } // 80034E00
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80034E04
  c->r[0]=R32(c->r[6]+0x00000000u); // 80034E08
  W32(c->r[1]+0x00000028u,c->r[6]); // 80034E0C
  c->r[0]=c->r[0]|c->r[3]; // 80034E10
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80034E14
  W32(c->r[1]+0x00000010u,c->r[6]); // 80034E18
  W32(c->r[1]+0x00000014u,c->r[5]); // 80034E1C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80034E20
  goto L_80034E58; // 80034E24
L_80034E28:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034E28
  fcmp(c,0,c->f[0],c->f[31]); // 80034E2C
  if (!crb(c,2)) { goto L_80034E58; } // 80034E30
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80034E34
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80034E38
  c->r[0]=R32(c->r[6]+0x00000000u); // 80034E3C
  W32(c->r[1]+0x00000030u,c->r[6]); // 80034E40
  c->r[0]=c->r[0]|c->r[3]; // 80034E44
  W32(c->r[1]+0x00000034u,c->r[5]); // 80034E48
  W32(c->r[1]+0x00000018u,c->r[6]); // 80034E4C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80034E50
  W32(c->r[6]+0x00000000u,c->r[0]); // 80034E54
L_80034E58:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80034E58
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80034E5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80034E60
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80034E64
  c->lr=c->r[0]; // 80034E68
  c->r[1]=c->r[1]+0x00000050u; // 80034E6C
  return; // 80034E70
}

// fn_80034E74
void f_80034E74(Ctx* __restrict c) {
  trace_call(0x80034E74u);
  cmps(c,0,(int32_t)c->r[4],0); // 80034E74
  c->r[6]=R32(c->r[3]+0x00000004u); // 80034E78
  c->r[5]=R32(c->r[3]+0x00000000u); // 80034E7C
  if (crb(c,2)) { goto L_80034E9C; } // 80034E80
  c->r[0]=0u+0x00000001u; // 80034E84
  c->r[4]=R32(c->r[5]+0x00000000u); // 80034E88
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80034E8C
  c->r[0]=c->r[4]|c->r[0]; // 80034E90
  W32(c->r[5]+0x00000000u,c->r[0]); // 80034E94
  return; // 80034E98
L_80034E9C:;
  c->r[0]=0u+0x00000001u; // 80034E9C
  c->r[4]=R32(c->r[5]+0x00000000u); // 80034EA0
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80034EA4
  c->r[0]=c->r[4]&~c->r[0]; // 80034EA8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80034EAC
  return; // 80034EB0
}

// fn_80034EB4
void f_80034EB4(Ctx* __restrict c) {
  trace_call(0x80034EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034EB4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80034EB8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80034EBC
  c->r[1]=c->r[1]+0x00000010u; // 80034EC0
  return; // 80034EC4
}

// fn_80034EC8
void f_80034EC8(Ctx* __restrict c) {
  trace_call(0x80034EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034EC8
  c->r[0]=c->lr; // 80034ECC
  c->r[4]=0u+0x00000000u; // 80034ED0
  c->r[3]=c->r[3]+0x00000010u; // 80034ED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034ED8
  c->lr=0x80034EE0u; f_800382DC(c); // 80034EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80034EE0
  c->r[6]=0u+0x00000001u; // 80034EE4
  if (crb(c,2)) { goto L_80034F20; } // 80034EE8
  c->r[5]=c->r[3]+0x00000014u; // 80034EEC
  c->r[4]=0u+0x00000004u; // 80034EF0
  c->r[3]=0u+0x00000001u; // 80034EF4
  c->r[0]=R32(c->r[5]+0x00000000u); // 80034EF8
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80034EFC
  W32(c->r[1]+0x00000010u,c->r[5]); // 80034F00
  c->r[0]=c->r[3]&c->r[0]; // 80034F04
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80034F08
  W32(c->r[1]+0x00000014u,c->r[4]); // 80034F0C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80034F10
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80034F14
  if (!crb(c,2)) { goto L_80034F20; } // 80034F18
  c->r[6]=0u+0x00000000u; // 80034F1C
L_80034F20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80034F20
  c->r[3]=c->r[6]|c->r[6]; // 80034F24
  c->lr=c->r[0]; // 80034F28
  c->r[1]=c->r[1]+0x00000020u; // 80034F2C
  return; // 80034F30
}

// fn_80034F34
void f_80034F34(Ctx* __restrict c) {
  trace_call(0x80034F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80034F34
  c->r[0]=c->lr; // 80034F38
  cmps(c,0,(int32_t)c->r[8],0); // 80034F3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80034F40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80034F44
  c->r[30]=c->r[3]|c->r[3]; // 80034F48
  c->r[31]=c->r[4]|c->r[4]; // 80034F4C
  c->r[26]=c->r[5]|c->r[5]; // 80034F50
  c->r[27]=c->r[6]|c->r[6]; // 80034F54
  c->r[28]=c->r[7]|c->r[7]; // 80034F58
  c->r[29]=c->r[8]|c->r[8]; // 80034F5C
  if (crb(c,2)) { goto L_80034F70; } // 80034F60
  c->r[3]=c->r[13]+0xFFFF9470u; // 80034F64
  c->lr=0x80034F6Cu; f_8028AA78(c); // 80034F68
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 80034F6C
L_80034F70:;
  cmps(c,0,(int32_t)c->r[26],0); // 80034F70
  if (crb(c,2)) { goto L_80034F88; } // 80034F74
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034F78
  c->r[0]=c->r[0]|0x00000001u; // 80034F7C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034F80
  goto L_80034F94; // 80034F84
L_80034F88:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034F88
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80034F8C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034F90
L_80034F94:;
  cmps(c,0,(int32_t)c->r[27],0); // 80034F94
  if (crb(c,2)) { goto L_80034FAC; } // 80034F98
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034F9C
  c->r[0]=c->r[0]|0x00000002u; // 80034FA0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FA4
  goto L_80034FB8; // 80034FA8
L_80034FAC:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034FAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80034FB0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FB4
L_80034FB8:;
  cmps(c,0,(int32_t)c->r[28],0); // 80034FB8
  if (crb(c,2)) { goto L_80034FD0; } // 80034FBC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034FC0
  c->r[0]=c->r[0]|0x00000008u; // 80034FC4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FC8
  goto L_80034FDC; // 80034FCC
L_80034FD0:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034FD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80034FD4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FD8
L_80034FDC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80034FDC
  if (crb(c,2)) { goto L_80034FF4; } // 80034FE0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034FE4
  c->r[0]=c->r[0]|0x00000040u; // 80034FE8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FEC
  goto L_80035000; // 80034FF0
L_80034FF4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80034FF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80034FF8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80034FFC
L_80035000:;
  c->r[0]=R32(c->r[13]+0xFFFF8088u); // 80035000
  c->r[4]=c->r[31]|c->r[31]; // 80035004
  W32(c->r[30]+0x00000020u,c->r[0]); // 80035008
  c->r[3]=c->r[30]+0x00000010u; // 8003500C
  c->lr=0x80035014u; f_80037EC8(c); // 80035010
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80035014
  c->r[0]=R32(c->r[1]+0x00000024u); // 80035018
  c->lr=c->r[0]; // 8003501C
  c->r[1]=c->r[1]+0x00000020u; // 80035020
  return; // 80035024
}

// fn_80035028
void f_80035028(Ctx* __restrict c) {
  trace_call(0x80035028u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035028
  c->r[0]=c->lr; // 8003502C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80035030
  c->r[11]=c->r[1]+0x00000020u; // 80035034
  c->lr=0x8003503Cu; f_800C2E48(c); // 80035038
  c->r[26]=c->r[6]|c->r[6]; // 8003503C
  c->r[27]=c->r[7]|c->r[7]; // 80035040
  c->r[28]=c->r[8]|c->r[8]; // 80035044
  c->r[29]=c->r[9]|c->r[9]; // 80035048
  c->r[31]=c->r[5]|c->r[5]; // 8003504C
  c->r[30]=c->r[3]|c->r[3]; // 80035050
  c->r[5]=c->r[26]|c->r[26]; // 80035054
  c->r[6]=c->r[27]|c->r[27]; // 80035058
  c->r[7]=c->r[28]|c->r[28]; // 8003505C
  c->r[8]=c->r[29]|c->r[29]; // 80035060
  c->lr=0x80035068u; f_80034F34(c); // 80035064
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80035068
  cmps(c,0,(int32_t)c->r[0],0); // 8003506C
  if (crb(c,2)) { goto L_80035134; } // 80035070
  c->r[0]=R32(c->r[30]+0x000001B4u); // 80035074
  cmps(c,0,(int32_t)c->r[0],0); // 80035078
  if (crb(c,2)) { goto L_80035134; } // 8003507C
  cmps(c,0,(int32_t)c->r[29],0); // 80035080
  if (crb(c,2)) { goto L_80035090; } // 80035084
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035088
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8003508C
L_80035090:;
  cmps(c,0,(int32_t)c->r[26],0); // 80035090
  if (crb(c,2)) { goto L_800350A8; } // 80035094
  c->r[0]=R32(c->r[30]+0x000000D0u); // 80035098
  c->r[0]=c->r[0]|0x00000001u; // 8003509C
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350A0
  goto L_800350B4; // 800350A4
L_800350A8:;
  c->r[0]=R32(c->r[30]+0x000000D0u); // 800350A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800350AC
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350B0
L_800350B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800350B4
  if (crb(c,2)) { goto L_800350CC; } // 800350B8
  c->r[0]=R32(c->r[30]+0x000000D0u); // 800350BC
  c->r[0]=c->r[0]|0x00000002u; // 800350C0
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350C4
  goto L_800350D8; // 800350C8
L_800350CC:;
  c->r[0]=R32(c->r[30]+0x000000D0u); // 800350CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800350D0
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350D4
L_800350D8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800350D8
  if (crb(c,2)) { goto L_800350F0; } // 800350DC
  c->r[0]=R32(c->r[30]+0x000000D0u); // 800350E0
  c->r[0]=c->r[0]|0x00000008u; // 800350E4
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350E8
  goto L_800350FC; // 800350EC
L_800350F0:;
  c->r[0]=R32(c->r[30]+0x000000D0u); // 800350F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800350F4
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800350F8
L_800350FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800350FC
  if (crb(c,2)) { goto L_80035114; } // 80035100
  c->r[0]=R32(c->r[30]+0x000000D0u); // 80035104
  c->r[0]=c->r[0]|0x00000040u; // 80035108
  W32(c->r[30]+0x000000D0u,c->r[0]); // 8003510C
  goto L_80035120; // 80035110
L_80035114:;
  c->r[0]=R32(c->r[30]+0x000000D0u); // 80035114
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80035118
  W32(c->r[30]+0x000000D0u,c->r[0]); // 8003511C
L_80035120:;
  c->r[0]=R32(c->r[13]+0xFFFF8068u); // 80035120
  c->r[4]=c->r[31]|c->r[31]; // 80035124
  W32(c->r[30]+0x000000D4u,c->r[0]); // 80035128
  c->r[3]=c->r[30]+0x000000C4u; // 8003512C
  c->lr=0x80035134u; f_80037EC8(c); // 80035130
L_80035134:;
  c->r[11]=c->r[1]+0x00000020u; // 80035134
  c->lr=0x8003513Cu; f_800C2E94(c); // 80035138
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003513C
  c->lr=c->r[0]; // 80035140
  c->r[1]=c->r[1]+0x00000020u; // 80035144
  return; // 80035148
}

// fn_8003514C
void f_8003514C(Ctx* __restrict c) {
  trace_call(0x8003514Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003514C
  c->r[0]=c->lr; // 80035150
  c->r[4]=0u+0x00000003u; // 80035154
  W32(c->r[1]+0x00000014u,c->r[0]); // 80035158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003515C
  c->r[31]=c->r[3]|c->r[3]; // 80035160
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80035164
  c->r[0]=c->r[0]|0x00000003u; // 80035168
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8003516C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80035170
  c->r[0]=R32(c->r[13]+0xFFFF806Cu); // 80035174
  W32(c->r[3]+0x00000020u,c->r[0]); // 80035178
  c->r[3]=c->r[3]+0x00000010u; // 8003517C
  c->lr=0x80035184u; f_80037EC8(c); // 80035180
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80035184
  cmps(c,0,(int32_t)c->r[0],0); // 80035188
  if (crb(c,2)) { goto L_800351C0; } // 8003518C
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80035190
  cmps(c,0,(int32_t)c->r[0],0); // 80035194
  if (crb(c,2)) { goto L_800351C0; } // 80035198
  c->r[0]=R32(c->r[31]+0x000000D0u); // 8003519C
  c->r[3]=c->r[31]+0x000000C4u; // 800351A0
  c->r[4]=0u+0x00000043u; // 800351A4
  c->r[0]=c->r[0]|0x00000003u; // 800351A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800351AC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 800351B0
  c->r[0]=R32(c->r[13]+0xFFFF806Cu); // 800351B4
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800351B8
  c->lr=0x800351C0u; f_80037EC8(c); // 800351BC
L_800351C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800351C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800351C4
  c->lr=c->r[0]; // 800351C8
  c->r[1]=c->r[1]+0x00000010u; // 800351CC
  return; // 800351D0
}

// fn_800351D4
void f_800351D4(Ctx* __restrict c) {
  trace_call(0x800351D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800351D4
  c->r[0]=c->lr; // 800351D8
  c->r[4]=0u+0x00000005u; // 800351DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800351E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800351E4
  c->r[31]=c->r[3]|c->r[3]; // 800351E8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800351EC
  c->r[0]=c->r[0]|0x00000003u; // 800351F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800351F4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800351F8
  c->r[0]=R32(c->r[13]+0xFFFF8070u); // 800351FC
  W32(c->r[3]+0x00000020u,c->r[0]); // 80035200
  c->r[3]=c->r[3]+0x00000010u; // 80035204
  c->lr=0x8003520Cu; f_80037EC8(c); // 80035208
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8003520C
  cmps(c,0,(int32_t)c->r[0],0); // 80035210
  if (crb(c,2)) { goto L_80035248; } // 80035214
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80035218
  cmps(c,0,(int32_t)c->r[0],0); // 8003521C
  if (crb(c,2)) { goto L_80035248; } // 80035220
  c->r[0]=R32(c->r[31]+0x000000D0u); // 80035224
  c->r[3]=c->r[31]+0x000000C4u; // 80035228
  c->r[4]=0u+0x00000045u; // 8003522C
  c->r[0]=c->r[0]|0x00000003u; // 80035230
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80035234
  W32(c->r[31]+0x000000D0u,c->r[0]); // 80035238
  c->r[0]=R32(c->r[13]+0xFFFF8070u); // 8003523C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 80035240
  c->lr=0x80035248u; f_80037EC8(c); // 80035244
L_80035248:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80035248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003524C
  c->lr=c->r[0]; // 80035250
  c->r[1]=c->r[1]+0x00000010u; // 80035254
  return; // 80035258
}

// fn_8003525C
void f_8003525C(Ctx* __restrict c) {
  trace_call(0x8003525Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003525C
  c->r[0]=c->lr; // 80035260
  c->r[4]=0u+0x00000006u; // 80035264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80035268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003526C
  c->r[31]=c->r[3]|c->r[3]; // 80035270
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80035274
  c->r[0]=c->r[0]|0x00000003u; // 80035278
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8003527C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80035280
  c->r[0]=R32(c->r[13]+0xFFFF8074u); // 80035284
  W32(c->r[3]+0x00000020u,c->r[0]); // 80035288
  c->r[3]=c->r[3]+0x00000010u; // 8003528C
  c->lr=0x80035294u; f_80037EC8(c); // 80035290
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80035294
  cmps(c,0,(int32_t)c->r[0],0); // 80035298
  if (crb(c,2)) { goto L_800352D0; } // 8003529C
  c->r[0]=R32(c->r[31]+0x000001B4u); // 800352A0
  cmps(c,0,(int32_t)c->r[0],0); // 800352A4
  if (crb(c,2)) { goto L_800352D0; } // 800352A8
  c->r[0]=R32(c->r[31]+0x000000D0u); // 800352AC
  c->r[3]=c->r[31]+0x000000C4u; // 800352B0
  c->r[4]=0u+0x00000046u; // 800352B4
  c->r[0]=c->r[0]|0x00000003u; // 800352B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800352BC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 800352C0
  c->r[0]=R32(c->r[13]+0xFFFF8074u); // 800352C4
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800352C8
  c->lr=0x800352D0u; f_80037EC8(c); // 800352CC
L_800352D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800352D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800352D4
  c->lr=c->r[0]; // 800352D8
  c->r[1]=c->r[1]+0x00000010u; // 800352DC
  return; // 800352E0
}

// fn_800352E4
void f_800352E4(Ctx* __restrict c) {
  trace_call(0x800352E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800352E4
  c->r[0]=c->lr; // 800352E8
  c->r[4]=0u+0x00000000u; // 800352EC
  c->r[3]=c->r[3]+0x00000010u; // 800352F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800352F4
  c->lr=0x800352FCu; f_800382DC(c); // 800352F8
  cmps(c,0,(int32_t)c->r[3],0); // 800352FC
  c->r[6]=0u+0x00000001u; // 80035300
  if (crb(c,2)) { goto L_8003533C; } // 80035304
  c->r[5]=c->r[3]+0x00000014u; // 80035308
  c->r[4]=0u+0x00000003u; // 8003530C
  c->r[3]=0u+0x00000001u; // 80035310
  c->r[0]=R32(c->r[5]+0x00000000u); // 80035314
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80035318
  W32(c->r[1]+0x00000008u,c->r[5]); // 8003531C
  c->r[0]=c->r[3]&c->r[0]; // 80035320
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80035324
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80035328
  W32(c->r[1]+0x00000010u,c->r[5]); // 8003532C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80035330
  if (!crb(c,2)) { goto L_8003533C; } // 80035334
  c->r[6]=0u+0x00000000u; // 80035338
L_8003533C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003533C
  c->r[3]=c->r[6]|c->r[6]; // 80035340
  c->lr=c->r[0]; // 80035344
  c->r[1]=c->r[1]+0x00000020u; // 80035348
  return; // 8003534C
}

// fn_80035350
void f_80035350(Ctx* __restrict c) {
  trace_call(0x80035350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035350
  c->r[0]=c->lr; // 80035354
  c->r[4]=0u+0x00000000u; // 80035358
  c->r[3]=c->r[3]+0x00000010u; // 8003535C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80035360
  c->lr=0x80035368u; f_800382DC(c); // 80035364
  cmps(c,0,(int32_t)c->r[3],0); // 80035368
  c->r[6]=0u+0x00000001u; // 8003536C
  if (crb(c,2)) { goto L_800353A8; } // 80035370
  c->r[5]=c->r[3]+0x00000014u; // 80035374
  c->r[4]=0u+0x00000004u; // 80035378
  c->r[3]=0u+0x00000001u; // 8003537C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80035380
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80035384
  W32(c->r[1]+0x00000010u,c->r[5]); // 80035388
  c->r[0]=c->r[3]&c->r[0]; // 8003538C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80035390
  W32(c->r[1]+0x00000014u,c->r[4]); // 80035394
  W32(c->r[1]+0x00000008u,c->r[5]); // 80035398
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8003539C
  if (!crb(c,2)) { goto L_800353A8; } // 800353A0
  c->r[6]=0u+0x00000000u; // 800353A4
L_800353A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800353A8
  c->r[3]=c->r[6]|c->r[6]; // 800353AC
  c->lr=c->r[0]; // 800353B0
  c->r[1]=c->r[1]+0x00000020u; // 800353B4
  return; // 800353B8
}

// fn_800353BC
void f_800353BC(Ctx* __restrict c) {
  trace_call(0x800353BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800353BC
  c->r[0]=c->lr; // 800353C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800353C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800353C8
  c->r[31]=c->r[3]+0x00000010u; // 800353CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800353D0
  c->r[30]=c->r[3]+0x000000C4u; // 800353D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800353D8
  c->r[29]=0u+0x00000000u; // 800353DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800353E0
  c->r[28]=c->r[3]|c->r[3]; // 800353E4
L_800353E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800353E8
  c->lr=0x800353F0u; f_80037EB0(c); // 800353EC
  c->r[3]=c->r[30]|c->r[30]; // 800353F0
  c->lr=0x800353F8u; f_80037EB0(c); // 800353F4
  c->r[29]=c->r[29]+0x00000001u; // 800353F8
  c->r[30]=c->r[30]+0x0000003Cu; // 800353FC
  cmpu(c,0,c->r[29],0x00000003u); // 80035400
  c->r[31]=c->r[31]+0x0000003Cu; // 80035404
  if (crb(c,0)) { IRQCHK(c); goto L_800353E8; } // 80035408
  c->r[3]=c->r[28]|c->r[28]; // 8003540C
  c->lr=0x80035414u; f_80035B38(c); // 80035410
  c->r[0]=R32(c->r[1]+0x00000024u); // 80035414
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80035418
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003541C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80035420
  c->r[28]=R32(c->r[1]+0x00000010u); // 80035424
  c->lr=c->r[0]; // 80035428
  c->r[1]=c->r[1]+0x00000020u; // 8003542C
  return; // 80035430
}

// fn_80035434
void f_80035434(Ctx* __restrict c) {
  trace_call(0x80035434u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035434
  c->r[0]=c->lr; // 80035438
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003543C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80035440
  W32(c->r[1]+0x00000098u,c->r[30]); // 80035444
  W32(c->r[1]+0x00000094u,c->r[29]); // 80035448
  W32(c->r[1]+0x00000090u,c->r[28]); // 8003544C
  c->r[28]=c->r[3]|c->r[3]; // 80035450
  c->lr=0x80035458u; f_800353BC(c); // 80035454
  c->r[31]=c->r[28]+0x00000010u; // 80035458
  c->r[30]=c->r[28]+0x000000C4u; // 8003545C
  c->r[29]=0u+0x00000000u; // 80035460
L_80035464:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 80035464
  c->r[3]=c->r[31]|c->r[31]; // 80035468
  c->lr=0x80035470u; f_80035A94(c); // 8003546C
  c->r[4]=R32(c->r[28]+0x00000008u); // 80035470
  c->r[3]=c->r[31]|c->r[31]; // 80035474
  c->lr=0x8003547Cu; f_80035A9C(c); // 80035478
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8003547C
  cmps(c,0,(int32_t)c->r[3],0); // 80035480
  if (crb(c,2)) { goto L_800354AC; } // 80035484
  c->lr=0x8003548Cu; f_80035AA4(c); // 80035488
  c->r[4]=c->r[3]|c->r[3]; // 8003548C
  c->r[3]=c->r[30]|c->r[30]; // 80035490
  c->lr=0x80035498u; f_80035A94(c); // 80035494
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80035498
  c->lr=0x800354A0u; f_80035AAC(c); // 8003549C
  c->r[4]=c->r[3]|c->r[3]; // 800354A0
  c->r[3]=c->r[30]|c->r[30]; // 800354A4
  c->lr=0x800354ACu; f_80035A9C(c); // 800354A8
L_800354AC:;
  c->r[29]=c->r[29]+0x00000001u; // 800354AC
  c->r[30]=c->r[30]+0x0000003Cu; // 800354B0
  cmpu(c,0,c->r[29],0x00000003u); // 800354B4
  c->r[31]=c->r[31]+0x0000003Cu; // 800354B8
  if (crb(c,0)) { IRQCHK(c); goto L_80035464; } // 800354BC
  c->r[0]=R32(c->r[28]+0x000001ACu); // 800354C0
  cmps(c,0,(int32_t)c->r[0],0); // 800354C4
  if (crb(c,2)) { goto L_800357D8; } // 800354C8
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800354CC
  c->r[3]=c->r[28]+0x00000010u; // 800354D0
  c->lr=0x800354D8u; f_80035AB4(c); // 800354D4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800354D8
  c->r[3]=c->r[28]+0x00000010u; // 800354DC
  c->lr=0x800354E4u; f_80011040(c); // 800354E0
  c->r[31]=0u+0x80370000u; // 800354E4
  c->r[3]=c->r[28]+0x00000010u; // 800354E8
  c->r[4]=c->r[31]+0x00001E88u; // 800354EC
  c->lr=0x800354F4u; f_80037E40(c); // 800354F0
  c->r[3]=c->r[28]+0x00000010u; // 800354F4
  c->lr=0x800354FCu; f_80013388(c); // 800354F8
  c->lr=0x80035500u; f_80035AD4(c); // 800354FC
  c->r[4]=0u+0x00000002u; // 80035500
  c->lr=0x80035508u; f_80034EB4(c); // 80035504
  W32(c->r[1]+0x00000084u,c->r[4]); // 80035508
  c->r[4]=0u+0x00000001u; // 8003550C
  W32(c->r[1]+0x00000080u,c->r[3]); // 80035510
  c->r[3]=c->r[1]+0x00000080u; // 80035514
  c->lr=0x8003551Cu; f_80034E74(c); // 80035518
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003551C
  c->r[3]=c->r[28]+0x0000004Cu; // 80035520
  c->lr=0x80035528u; f_80035AB4(c); // 80035524
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035528
  c->r[3]=c->r[28]+0x0000004Cu; // 8003552C
  c->lr=0x80035534u; f_80011040(c); // 80035530
  c->r[31]=c->r[31]+0x00001E88u; // 80035534
  c->r[3]=c->r[28]+0x0000004Cu; // 80035538
  c->r[4]=c->r[31]+0x00000005u; // 8003553C
  c->lr=0x80035544u; f_80037E40(c); // 80035540
  c->r[3]=c->r[28]+0x0000004Cu; // 80035544
  c->r[4]=0u+0x00000000u; // 80035548
  c->r[5]=0u+0x00000001u; // 8003554C
  c->lr=0x80035554u; f_80034C74(c); // 80035550
  c->r[3]=c->r[28]+0x0000004Cu; // 80035554
  c->r[4]=0u+0x00000001u; // 80035558
  c->r[5]=0u+0x00000000u; // 8003555C
  c->lr=0x80035564u; f_80034C74(c); // 80035560
  c->r[3]=c->r[28]+0x0000004Cu; // 80035564
  c->lr=0x8003556Cu; f_80013388(c); // 80035568
  c->lr=0x80035570u; f_80035AD4(c); // 8003556C
  c->r[4]=0u+0x00000002u; // 80035570
  c->lr=0x80035578u; f_80034EB4(c); // 80035574
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 80035578
  c->r[4]=0u+0x00000001u; // 8003557C
  W32(c->r[1]+0x00000078u,c->r[3]); // 80035580
  c->r[3]=c->r[1]+0x00000078u; // 80035584
  c->lr=0x8003558Cu; f_80034E74(c); // 80035588
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003558C
  c->r[3]=c->r[28]+0x00000088u; // 80035590
  c->lr=0x80035598u; f_80035AB4(c); // 80035594
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035598
  c->r[3]=c->r[28]+0x00000088u; // 8003559C
  c->lr=0x800355A4u; f_80011040(c); // 800355A0
  c->r[3]=c->r[28]+0x00000088u; // 800355A4
  c->r[4]=c->r[31]+0x0000000Cu; // 800355A8
  c->lr=0x800355B0u; f_80037E40(c); // 800355AC
  c->r[3]=c->r[28]+0x00000088u; // 800355B0
  c->r[4]=0u+0x00000001u; // 800355B4
  c->r[5]=0u+0x00000000u; // 800355B8
  c->lr=0x800355C0u; f_80034C74(c); // 800355BC
  c->r[3]=c->r[28]+0x00000088u; // 800355C0
  c->lr=0x800355C8u; f_80013388(c); // 800355C4
  c->lr=0x800355CCu; f_80035AD4(c); // 800355C8
  c->r[4]=0u+0x00000001u; // 800355CC
  c->lr=0x800355D4u; f_80034EB4(c); // 800355D0
  W32(c->r[1]+0x00000074u,c->r[4]); // 800355D4
  c->r[4]=0u+0x00000001u; // 800355D8
  W32(c->r[1]+0x00000070u,c->r[3]); // 800355DC
  c->r[3]=c->r[1]+0x00000070u; // 800355E0
  c->lr=0x800355E8u; f_80034E74(c); // 800355E4
  c->r[3]=c->r[28]+0x00000088u; // 800355E8
  c->lr=0x800355F0u; f_80013388(c); // 800355EC
  c->lr=0x800355F4u; f_80035AD4(c); // 800355F0
  c->r[4]=0u+0x00000002u; // 800355F4
  c->lr=0x800355FCu; f_80034EB4(c); // 800355F8
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800355FC
  c->r[4]=0u+0x00000000u; // 80035600
  W32(c->r[1]+0x00000068u,c->r[3]); // 80035604
  c->r[3]=c->r[1]+0x00000068u; // 80035608
  c->lr=0x80035610u; f_80034E74(c); // 8003560C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80035610
  cmps(c,0,(int32_t)c->r[3],0); // 80035614
  if (crb(c,2)) { goto L_80035A6C; } // 80035618
  c->lr=0x80035620u; f_80035AA4(c); // 8003561C
  c->r[29]=c->r[3]|c->r[3]; // 80035620
  c->r[4]=0u+0x00000000u; // 80035624
  c->lr=0x8003562Cu; f_80035AE4(c); // 80035628
  c->r[4]=c->r[3]|c->r[3]; // 8003562C
  c->r[3]=c->r[28]+0x000000C4u; // 80035630
  c->lr=0x80035638u; f_80035ADC(c); // 80035634
  c->r[3]=c->r[28]+0x000000C4u; // 80035638
  c->lr=0x80035640u; f_80013388(c); // 8003563C
  c->lr=0x80035644u; f_80035AD4(c); // 80035640
  c->r[4]=0u+0x00000002u; // 80035644
  c->lr=0x8003564Cu; f_80034EB4(c); // 80035648
  W32(c->r[1]+0x00000064u,c->r[4]); // 8003564C
  c->r[4]=0u+0x00000000u; // 80035650
  W32(c->r[1]+0x00000060u,c->r[3]); // 80035654
  c->r[3]=c->r[1]+0x00000060u; // 80035658
  c->lr=0x80035660u; f_80034E74(c); // 8003565C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80035660
  c->r[4]=0u+0x00000000u; // 80035664
  c->lr=0x8003566Cu; f_8001B638(c); // 80035668
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003566C
  c->r[3]=c->r[28]+0x00000100u; // 80035670
  c->lr=0x80035678u; f_80035AB4(c); // 80035674
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035678
  c->r[3]=c->r[28]+0x00000100u; // 8003567C
  c->lr=0x80035684u; f_80011040(c); // 80035680
  c->r[3]=c->r[28]+0x00000100u; // 80035684
  c->r[4]=c->r[31]+0x00000005u; // 80035688
  c->lr=0x80035690u; f_80037E40(c); // 8003568C
  c->r[3]=c->r[28]+0x00000100u; // 80035690
  c->r[4]=0u+0x00000000u; // 80035694
  c->r[5]=0u+0x00000001u; // 80035698
  c->lr=0x800356A0u; f_80034C74(c); // 8003569C
  c->r[3]=c->r[28]+0x00000100u; // 800356A0
  c->r[4]=0u+0x00000001u; // 800356A4
  c->r[5]=0u+0x00000000u; // 800356A8
  c->lr=0x800356B0u; f_80034C74(c); // 800356AC
  c->r[3]=c->r[28]+0x00000100u; // 800356B0
  c->lr=0x800356B8u; f_80013388(c); // 800356B4
  c->lr=0x800356BCu; f_80035AD4(c); // 800356B8
  c->r[4]=0u+0x00000002u; // 800356BC
  c->lr=0x800356C4u; f_80034EB4(c); // 800356C0
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800356C4
  c->r[4]=0u+0x00000000u; // 800356C8
  W32(c->r[1]+0x00000058u,c->r[3]); // 800356CC
  c->r[3]=c->r[1]+0x00000058u; // 800356D0
  c->lr=0x800356D8u; f_80034E74(c); // 800356D4
  c->r[3]=c->r[28]+0x00000100u; // 800356D8
  c->lr=0x800356E0u; f_80013388(c); // 800356DC
  c->lr=0x800356E4u; f_80035AF8(c); // 800356E0
  c->r[4]=c->r[3]|c->r[3]; // 800356E4
  c->r[3]=c->r[29]|c->r[29]; // 800356E8
  c->lr=0x800356F0u; f_8031B0B4(c); // 800356EC
  c->r[3]=c->r[28]+0x00000100u; // 800356F0
  c->lr=0x800356F8u; f_80013388(c); // 800356F4
  c->lr=0x800356FCu; f_80035AF8(c); // 800356F8
  c->r[4]=c->r[3]|c->r[3]; // 800356FC
  c->r[3]=c->r[29]|c->r[29]; // 80035700
  c->lr=0x80035708u; f_8031AF28(c); // 80035704
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035708
  c->r[3]=c->r[28]+0x0000013Cu; // 8003570C
  c->lr=0x80035714u; f_80035AB4(c); // 80035710
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035714
  c->r[3]=c->r[28]+0x0000013Cu; // 80035718
  c->lr=0x80035720u; f_80011040(c); // 8003571C
  c->r[3]=c->r[28]+0x0000013Cu; // 80035720
  c->r[4]=c->r[31]+0x0000000Cu; // 80035724
  c->lr=0x8003572Cu; f_80037E40(c); // 80035728
  c->r[3]=c->r[28]+0x0000013Cu; // 8003572C
  c->r[4]=0u+0x00000001u; // 80035730
  c->r[5]=0u+0x00000000u; // 80035734
  c->lr=0x8003573Cu; f_80034C74(c); // 80035738
  c->r[3]=c->r[28]+0x0000013Cu; // 8003573C
  c->lr=0x80035744u; f_80013388(c); // 80035740
  c->lr=0x80035748u; f_80035AD4(c); // 80035744
  c->r[4]=0u+0x00000001u; // 80035748
  c->lr=0x80035750u; f_80034EB4(c); // 8003574C
  W32(c->r[1]+0x00000054u,c->r[4]); // 80035750
  c->r[4]=0u+0x00000001u; // 80035754
  W32(c->r[1]+0x00000050u,c->r[3]); // 80035758
  c->r[3]=c->r[1]+0x00000050u; // 8003575C
  c->lr=0x80035764u; f_80034E74(c); // 80035760
  c->r[3]=c->r[28]+0x0000013Cu; // 80035764
  c->lr=0x8003576Cu; f_80013388(c); // 80035768
  c->lr=0x80035770u; f_80035AD4(c); // 8003576C
  c->r[4]=0u+0x00000002u; // 80035770
  c->lr=0x80035778u; f_80034EB4(c); // 80035774
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80035778
  c->r[4]=0u+0x00000000u; // 8003577C
  W32(c->r[1]+0x00000048u,c->r[3]); // 80035780
  c->r[3]=c->r[1]+0x00000048u; // 80035784
  c->lr=0x8003578Cu; f_80034E74(c); // 80035788
  c->r[3]=c->r[28]+0x0000013Cu; // 8003578C
  c->lr=0x80035794u; f_80013388(c); // 80035790
  c->lr=0x80035798u; f_80035AF8(c); // 80035794
  c->r[4]=c->r[3]|c->r[3]; // 80035798
  c->r[3]=c->r[29]|c->r[29]; // 8003579C
  c->lr=0x800357A4u; f_8031B0B4(c); // 800357A0
  c->r[3]=c->r[28]+0x0000013Cu; // 800357A4
  c->lr=0x800357ACu; f_80013388(c); // 800357A8
  c->lr=0x800357B0u; f_80035AF8(c); // 800357AC
  c->r[4]=c->r[3]|c->r[3]; // 800357B0
  c->r[3]=c->r[29]|c->r[29]; // 800357B4
  c->lr=0x800357BCu; f_8031AF28(c); // 800357B8
  c->r[3]=c->r[28]+0x0000013Cu; // 800357BC
  c->lr=0x800357C4u; f_80013388(c); // 800357C0
  c->lr=0x800357C8u; f_80035AF8(c); // 800357C4
  c->r[4]=c->r[3]|c->r[3]; // 800357C8
  c->r[3]=c->r[29]|c->r[29]; // 800357CC
  c->lr=0x800357D4u; f_8031AF28(c); // 800357D0
  goto L_80035A6C; // 800357D4
L_800357D8:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800357D8
  c->r[3]=c->r[28]+0x00000010u; // 800357DC
  c->lr=0x800357E4u; f_80035AB4(c); // 800357E0
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800357E4
  c->r[3]=c->r[28]+0x00000010u; // 800357E8
  c->lr=0x800357F0u; f_80011040(c); // 800357EC
  c->r[31]=0u+0x80370000u; // 800357F0
  c->r[3]=c->r[28]+0x00000010u; // 800357F4
  c->r[31]=c->r[31]+0x00001E88u; // 800357F8
  c->r[4]=c->r[31]+0x00000014u; // 800357FC
  c->lr=0x80035804u; f_80037E40(c); // 80035800
  c->r[3]=c->r[28]+0x00000010u; // 80035804
  c->lr=0x8003580Cu; f_80013388(c); // 80035808
  c->lr=0x80035810u; f_80035AD4(c); // 8003580C
  c->r[4]=0u+0x00000002u; // 80035810
  c->lr=0x80035818u; f_80034EB4(c); // 80035814
  W32(c->r[1]+0x00000044u,c->r[4]); // 80035818
  c->r[4]=0u+0x00000001u; // 8003581C
  W32(c->r[1]+0x00000040u,c->r[3]); // 80035820
  c->r[3]=c->r[1]+0x00000040u; // 80035824
  c->lr=0x8003582Cu; f_80034E74(c); // 80035828
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003582C
  c->r[3]=c->r[28]+0x0000004Cu; // 80035830
  c->lr=0x80035838u; f_80035AB4(c); // 80035834
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035838
  c->r[3]=c->r[28]+0x0000004Cu; // 8003583C
  c->lr=0x80035844u; f_80011040(c); // 80035840
  c->r[3]=c->r[28]+0x0000004Cu; // 80035844
  c->r[4]=c->r[31]+0x00000019u; // 80035848
  c->lr=0x80035850u; f_80037E40(c); // 8003584C
  c->r[3]=c->r[28]+0x0000004Cu; // 80035850
  c->r[4]=0u+0x00000001u; // 80035854
  c->r[5]=0u+0x00000000u; // 80035858
  c->lr=0x80035860u; f_80034C74(c); // 8003585C
  c->r[3]=c->r[28]+0x0000004Cu; // 80035860
  c->r[4]=0u+0x00000002u; // 80035864
  c->r[5]=0u+0x00000000u; // 80035868
  c->lr=0x80035870u; f_80034C74(c); // 8003586C
  c->r[3]=c->r[28]+0x0000004Cu; // 80035870
  c->lr=0x80035878u; f_80013388(c); // 80035874
  c->lr=0x8003587Cu; f_80035AD4(c); // 80035878
  c->r[4]=0u+0x00000001u; // 8003587C
  c->lr=0x80035884u; f_80034EB4(c); // 80035880
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80035884
  c->r[4]=0u+0x00000001u; // 80035888
  W32(c->r[1]+0x00000038u,c->r[3]); // 8003588C
  c->r[3]=c->r[1]+0x00000038u; // 80035890
  c->lr=0x80035898u; f_80034E74(c); // 80035894
  c->r[3]=c->r[28]+0x0000004Cu; // 80035898
  c->lr=0x800358A0u; f_80013388(c); // 8003589C
  c->lr=0x800358A4u; f_80035AD4(c); // 800358A0
  c->r[4]=0u+0x00000002u; // 800358A4
  c->lr=0x800358ACu; f_80034EB4(c); // 800358A8
  W32(c->r[1]+0x00000034u,c->r[4]); // 800358AC
  c->r[4]=0u+0x00000000u; // 800358B0
  W32(c->r[1]+0x00000030u,c->r[3]); // 800358B4
  c->r[3]=c->r[1]+0x00000030u; // 800358B8
  c->lr=0x800358C0u; f_80034E74(c); // 800358BC
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800358C0
  c->r[3]=c->r[28]+0x00000088u; // 800358C4
  c->lr=0x800358CCu; f_80035AB4(c); // 800358C8
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800358CC
  c->r[3]=c->r[28]+0x00000088u; // 800358D0
  c->lr=0x800358D8u; f_80011040(c); // 800358D4
  c->r[3]=c->r[28]+0x00000088u; // 800358D8
  c->r[4]=c->r[31]+0x0000000Cu; // 800358DC
  c->lr=0x800358E4u; f_80037E40(c); // 800358E0
  c->r[3]=c->r[28]+0x00000088u; // 800358E4
  c->r[4]=0u+0x00000001u; // 800358E8
  c->r[5]=0u+0x00000000u; // 800358EC
  c->lr=0x800358F4u; f_80034C74(c); // 800358F0
  c->r[3]=c->r[28]+0x00000088u; // 800358F4
  c->lr=0x800358FCu; f_80013388(c); // 800358F8
  c->lr=0x80035900u; f_80035AD4(c); // 800358FC
  c->r[4]=0u+0x00000001u; // 80035900
  c->lr=0x80035908u; f_80034EB4(c); // 80035904
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80035908
  c->r[4]=0u+0x00000001u; // 8003590C
  W32(c->r[1]+0x00000028u,c->r[3]); // 80035910
  c->r[3]=c->r[1]+0x00000028u; // 80035914
  c->lr=0x8003591Cu; f_80034E74(c); // 80035918
  c->r[3]=c->r[28]+0x00000088u; // 8003591C
  c->lr=0x80035924u; f_80013388(c); // 80035920
  c->lr=0x80035928u; f_80035AD4(c); // 80035924
  c->r[4]=0u+0x00000002u; // 80035928
  c->lr=0x80035930u; f_80034EB4(c); // 8003592C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80035930
  c->r[4]=0u+0x00000000u; // 80035934
  W32(c->r[1]+0x00000020u,c->r[3]); // 80035938
  c->r[3]=c->r[1]+0x00000020u; // 8003593C
  c->lr=0x80035944u; f_80034E74(c); // 80035940
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80035944
  cmps(c,0,(int32_t)c->r[3],0); // 80035948
  if (crb(c,2)) { goto L_80035A6C; } // 8003594C
  c->lr=0x80035954u; f_80035AA4(c); // 80035950
  c->r[29]=c->r[3]|c->r[3]; // 80035954
  c->r[4]=0u+0x00000000u; // 80035958
  c->lr=0x80035960u; f_80035AE4(c); // 8003595C
  c->r[4]=c->r[3]|c->r[3]; // 80035960
  c->r[3]=c->r[28]+0x000000C4u; // 80035964
  c->lr=0x8003596Cu; f_80035ADC(c); // 80035968
  c->r[3]=c->r[28]+0x000000C4u; // 8003596C
  c->lr=0x80035974u; f_80013388(c); // 80035970
  c->lr=0x80035978u; f_80035AD4(c); // 80035974
  c->r[4]=0u+0x00000002u; // 80035978
  c->lr=0x80035980u; f_80034EB4(c); // 8003597C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80035980
  c->r[4]=0u+0x00000000u; // 80035984
  W32(c->r[1]+0x00000018u,c->r[3]); // 80035988
  c->r[3]=c->r[1]+0x00000018u; // 8003598C
  c->lr=0x80035994u; f_80034E74(c); // 80035990
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80035994
  c->r[4]=0u+0x00000000u; // 80035998
  c->lr=0x800359A0u; f_8001B638(c); // 8003599C
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800359A0
  c->r[3]=c->r[28]+0x0000013Cu; // 800359A4
  c->lr=0x800359ACu; f_80035AB4(c); // 800359A8
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800359AC
  c->r[3]=c->r[28]+0x0000013Cu; // 800359B0
  c->lr=0x800359B8u; f_80011040(c); // 800359B4
  c->r[3]=c->r[28]+0x0000013Cu; // 800359B8
  c->r[4]=c->r[31]+0x0000000Cu; // 800359BC
  c->lr=0x800359C4u; f_80037E40(c); // 800359C0
  c->r[3]=c->r[28]+0x0000013Cu; // 800359C4
  c->r[4]=0u+0x00000001u; // 800359C8
  c->r[5]=0u+0x00000000u; // 800359CC
  c->lr=0x800359D4u; f_80034C74(c); // 800359D0
  c->r[3]=c->r[28]+0x0000013Cu; // 800359D4
  c->lr=0x800359DCu; f_80013388(c); // 800359D8
  c->lr=0x800359E0u; f_80035AD4(c); // 800359DC
  c->r[4]=0u+0x00000001u; // 800359E0
  c->lr=0x800359E8u; f_80034EB4(c); // 800359E4
  W32(c->r[1]+0x00000014u,c->r[4]); // 800359E8
  c->r[4]=0u+0x00000001u; // 800359EC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800359F0
  c->r[3]=c->r[1]+0x00000010u; // 800359F4
  c->lr=0x800359FCu; f_80034E74(c); // 800359F8
  c->r[3]=c->r[28]+0x0000013Cu; // 800359FC
  c->lr=0x80035A04u; f_80013388(c); // 80035A00
  c->lr=0x80035A08u; f_80035AD4(c); // 80035A04
  c->r[4]=0u+0x00000002u; // 80035A08
  c->lr=0x80035A10u; f_80034EB4(c); // 80035A0C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80035A10
  c->r[4]=0u+0x00000000u; // 80035A14
  W32(c->r[1]+0x00000008u,c->r[3]); // 80035A18
  c->r[3]=c->r[1]+0x00000008u; // 80035A1C
  c->lr=0x80035A24u; f_80034E74(c); // 80035A20
  c->r[3]=c->r[28]+0x0000013Cu; // 80035A24
  c->lr=0x80035A2Cu; f_80013388(c); // 80035A28
  c->lr=0x80035A30u; f_80035AF8(c); // 80035A2C
  c->r[4]=c->r[3]|c->r[3]; // 80035A30
  c->r[3]=c->r[29]|c->r[29]; // 80035A34
  c->lr=0x80035A3Cu; f_8031B0B4(c); // 80035A38
  c->r[3]=c->r[28]+0x0000013Cu; // 80035A3C
  c->lr=0x80035A44u; f_80013388(c); // 80035A40
  c->lr=0x80035A48u; f_80035AF8(c); // 80035A44
  c->r[4]=c->r[3]|c->r[3]; // 80035A48
  c->r[3]=c->r[29]|c->r[29]; // 80035A4C
  c->lr=0x80035A54u; f_8031AF28(c); // 80035A50
  c->r[3]=c->r[28]+0x0000013Cu; // 80035A54
  c->lr=0x80035A5Cu; f_80013388(c); // 80035A58
  c->lr=0x80035A60u; f_80035AF8(c); // 80035A5C
  c->r[4]=c->r[3]|c->r[3]; // 80035A60
  c->r[3]=c->r[29]|c->r[29]; // 80035A64
  c->lr=0x80035A6Cu; f_8031AF28(c); // 80035A68
L_80035A6C:;
  c->r[3]=c->r[28]|c->r[28]; // 80035A6C
  c->lr=0x80035A74u; f_80035B70(c); // 80035A70
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80035A74
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80035A78
  c->r[30]=R32(c->r[1]+0x00000098u); // 80035A7C
  c->r[29]=R32(c->r[1]+0x00000094u); // 80035A80
  c->r[28]=R32(c->r[1]+0x00000090u); // 80035A84
  c->lr=c->r[0]; // 80035A88
  c->r[1]=c->r[1]+0x000000A0u; // 80035A8C
  return; // 80035A90
}

// fn_80035A94
void f_80035A94(Ctx* __restrict c) {
  trace_call(0x80035A94u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 80035A94
  return; // 80035A98
}

// fn_80035A9C
void f_80035A9C(Ctx* __restrict c) {
  trace_call(0x80035A9Cu);
  W32(c->r[3]+0x00000008u,c->r[4]); // 80035A9C
  return; // 80035AA0
}

// fn_80035AA4
void f_80035AA4(Ctx* __restrict c) {
  trace_call(0x80035AA4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80035AA4
  return; // 80035AA8
}

// fn_80035AAC
void f_80035AAC(Ctx* __restrict c) {
  trace_call(0x80035AACu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80035AAC
  return; // 80035AB0
}

// fn_80035AB4
void f_80035AB4(Ctx* __restrict c) {
  trace_call(0x80035AB4u);
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035AB4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80035AB8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80035ABC
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[0]; // 80035AC0
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 80035AC4
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[3]; // 80035AC8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80035ACC
  return; // 80035AD0
}

// fn_80035AD4
void f_80035AD4(Ctx* __restrict c) {
  trace_call(0x80035AD4u);
  c->r[3]=c->r[3]+0x00000010u; // 80035AD4
  return; // 80035AD8
}

// fn_80035ADC
void f_80035ADC(Ctx* __restrict c) {
  trace_call(0x80035ADCu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 80035ADC
  return; // 80035AE0
}

// fn_80035AE4
void f_80035AE4(Ctx* __restrict c) {
  trace_call(0x80035AE4u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80035AE4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80035AE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80035AEC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80035AF0
  return; // 80035AF4
}

// fn_80035AF8
void f_80035AF8(Ctx* __restrict c) {
  trace_call(0x80035AF8u);
  c->r[3]=c->r[3]+0x00000008u; // 80035AF8
  return; // 80035AFC
}

// fn_80035B00
void f_80035B00(Ctx* __restrict c) {
  trace_call(0x80035B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035B00
  c->r[0]=c->lr; // 80035B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80035B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80035B0C
  c->r[31]=c->r[3]|c->r[3]; // 80035B10
  c->r[3]=R32(c->r[3]+0x00000004u); // 80035B14
  c->lr=0x80035B1Cu; f_8031AE64(c); // 80035B18
  c->r[3]=c->r[31]|c->r[31]; // 80035B1C
  c->lr=0x80035B24u; f_800353BC(c); // 80035B20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80035B24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80035B28
  c->lr=c->r[0]; // 80035B2C
  c->r[1]=c->r[1]+0x00000010u; // 80035B30
  return; // 80035B34
}

// fn_80035B38
void f_80035B38(Ctx* __restrict c) {
  trace_call(0x80035B38u);
  c->r[0]=0u+0x00000000u; // 80035B38
  W32(c->r[3]+0x00000178u,c->r[0]); // 80035B3C
  W32(c->r[3]+0x00000190u,c->r[0]); // 80035B40
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 80035B44
  W32(c->r[3]+0x00000194u,c->r[0]); // 80035B48
  W32(c->r[3]+0x00000180u,c->r[0]); // 80035B4C
  W32(c->r[3]+0x00000198u,c->r[0]); // 80035B50
  W32(c->r[3]+0x00000184u,c->r[0]); // 80035B54
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80035B58
  W32(c->r[3]+0x00000188u,c->r[0]); // 80035B5C
  W32(c->r[3]+0x000001A0u,c->r[0]); // 80035B60
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 80035B64
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80035B68
  return; // 80035B6C
}

// fn_80035B70
void f_80035B70(Ctx* __restrict c) {
  trace_call(0x80035B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035B70
  c->r[0]=c->lr; // 80035B74
  W32(c->r[1]+0x00000064u,c->r[0]); // 80035B78
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80035B7C
  c->r[31]=c->r[3]|c->r[3]; // 80035B80
  W32(c->r[1]+0x00000058u,c->r[30]); // 80035B84
  c->r[0]=R32(c->r[3]+0x000001A8u); // 80035B88
  cmps(c,0,(int32_t)c->r[0],2); // 80035B8C
  if (!crb(c,2)) { goto L_80035C88; } // 80035B90
  c->r[4]=0u+0x00000004u; // 80035B94
  c->r[3]=c->r[3]+0x00000088u; // 80035B98
  c->lr=0x80035BA0u; f_80037EC8(c); // 80035B9C
  W32(c->r[31]+0x00000184u,c->r[3]); // 80035BA0
  c->r[30]=c->r[3]|c->r[3]; // 80035BA4
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80035BA8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035BAC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80035BB0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80035BB4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80035BB8
  fcmp(c,0,c->f[1],c->f[0]); // 80035BBC
  if (crb(c,2)) { goto L_80035C00; } // 80035BC0
  c->r[4]=0u+0x00000001u; // 80035BC4
  c->lr=0x80035BCCu; f_802AA2C0(c); // 80035BC8
  c->r[0]=0u+0x00000000u; // 80035BCC
  W32(c->r[30]+0x00000024u,c->r[0]); // 80035BD0
  c->r[4]=0u+0x00000004u; // 80035BD4
  c->r[5]=c->r[30]+0x00000014u; // 80035BD8
  c->r[0]=0u+0x00000001u; // 80035BDC
  c->r[3]=R32(c->r[30]+0x00000014u); // 80035BE0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80035BE4
  W32(c->r[1]+0x00000050u,c->r[5]); // 80035BE8
  c->r[0]=c->r[3]&~c->r[0]; // 80035BEC
  W32(c->r[1]+0x00000054u,c->r[4]); // 80035BF0
  W32(c->r[1]+0x00000048u,c->r[5]); // 80035BF4
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80035BF8
  W32(c->r[30]+0x00000014u,c->r[0]); // 80035BFC
L_80035C00:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80035C00
  c->r[3]=c->r[31]+0x00000088u; // 80035C04
  c->r[4]=0u+0x00000005u; // 80035C08
  c->r[0]=c->r[0]|0x00000020u; // 80035C0C
  W32(c->r[31]+0x00000094u,c->r[0]); // 80035C10
  c->lr=0x80035C18u; f_80037EC8(c); // 80035C14
  W32(c->r[31]+0x00000188u,c->r[3]); // 80035C18
  c->r[30]=c->r[3]|c->r[3]; // 80035C1C
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80035C20
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035C24
  c->r[3]=R32(c->r[3]+0x00000010u); // 80035C28
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80035C2C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80035C30
  fcmp(c,0,c->f[1],c->f[0]); // 80035C34
  if (crb(c,2)) { goto L_80035C78; } // 80035C38
  c->r[4]=0u+0x00000001u; // 80035C3C
  c->lr=0x80035C44u; f_802AA2C0(c); // 80035C40
  c->r[0]=0u+0x00000000u; // 80035C44
  W32(c->r[30]+0x00000024u,c->r[0]); // 80035C48
  c->r[4]=0u+0x00000004u; // 80035C4C
  c->r[5]=c->r[30]+0x00000014u; // 80035C50
  c->r[0]=0u+0x00000001u; // 80035C54
  c->r[3]=R32(c->r[30]+0x00000014u); // 80035C58
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80035C5C
  W32(c->r[1]+0x00000040u,c->r[5]); // 80035C60
  c->r[0]=c->r[3]&~c->r[0]; // 80035C64
  W32(c->r[1]+0x00000044u,c->r[4]); // 80035C68
  W32(c->r[1]+0x00000038u,c->r[5]); // 80035C6C
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80035C70
  W32(c->r[30]+0x00000014u,c->r[0]); // 80035C74
L_80035C78:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80035C78
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80035C7C
  W32(c->r[31]+0x00000094u,c->r[0]); // 80035C80
  goto L_80035F70; // 80035C84
L_80035C88:;
  c->r[0]=R32(c->r[3]+0x000001ACu); // 80035C88
  cmps(c,0,(int32_t)c->r[0],0); // 80035C8C
  if (crb(c,2)) { goto L_80035D00; } // 80035C90
  c->r[4]=0u+0x00000007u; // 80035C94
  c->r[3]=c->r[3]+0x0000004Cu; // 80035C98
  c->lr=0x80035CA0u; f_80037EC8(c); // 80035C9C
  W32(c->r[31]+0x00000178u,c->r[3]); // 80035CA0
  c->r[3]=c->r[31]+0x0000004Cu; // 80035CA4
  c->r[4]=0u+0x00000008u; // 80035CA8
  c->lr=0x80035CB0u; f_80037EC8(c); // 80035CAC
  W32(c->r[31]+0x0000017Cu,c->r[3]); // 80035CB0
  c->r[3]=c->r[31]+0x0000004Cu; // 80035CB4
  c->r[4]=0u+0x00000009u; // 80035CB8
  c->lr=0x80035CC0u; f_80037EC8(c); // 80035CBC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80035CC0
  W32(c->r[31]+0x00000180u,c->r[3]); // 80035CC4
  cmps(c,0,(int32_t)c->r[0],0); // 80035CC8
  if (crb(c,2)) { goto L_80035D00; } // 80035CCC
  c->r[3]=c->r[31]+0x00000100u; // 80035CD0
  c->r[4]=0u+0x00000047u; // 80035CD4
  c->lr=0x80035CDCu; f_80037EC8(c); // 80035CD8
  W32(c->r[31]+0x00000190u,c->r[3]); // 80035CDC
  c->r[3]=c->r[31]+0x00000100u; // 80035CE0
  c->r[4]=0u+0x00000048u; // 80035CE4
  c->lr=0x80035CECu; f_80037EC8(c); // 80035CE8
  W32(c->r[31]+0x00000194u,c->r[3]); // 80035CEC
  c->r[3]=c->r[31]+0x00000100u; // 80035CF0
  c->r[4]=0u+0x00000049u; // 80035CF4
  c->lr=0x80035CFCu; f_80037EC8(c); // 80035CF8
  W32(c->r[31]+0x00000198u,c->r[3]); // 80035CFC
L_80035D00:;
  c->r[0]=R32(c->r[31]+0x000001A8u); // 80035D00
  c->r[30]=0u+0x00000011u; // 80035D04
  cmps(c,0,(int32_t)c->r[0],4); // 80035D08
  if (!crb(c,2)) { goto L_80035D14; } // 80035D0C
  c->r[30]=0u+0x00000013u; // 80035D10
L_80035D14:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80035D14
  c->r[4]=c->r[30]|c->r[30]; // 80035D18
  c->lr=0x80035D20u; f_80037BD0(c); // 80035D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80035D20
  if (crb(c,2)) { goto L_80035D94; } // 80035D24
  c->r[4]=c->r[30]|c->r[30]; // 80035D28
  c->r[3]=c->r[31]+0x00000088u; // 80035D2C
  c->lr=0x80035D34u; f_80037EC8(c); // 80035D30
  W32(c->r[31]+0x00000184u,c->r[3]); // 80035D34
  c->r[30]=c->r[3]|c->r[3]; // 80035D38
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80035D3C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035D40
  c->r[3]=R32(c->r[3]+0x00000010u); // 80035D44
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80035D48
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80035D4C
  fcmp(c,0,c->f[1],c->f[0]); // 80035D50
  if (crb(c,2)) { goto L_80035D94; } // 80035D54
  c->r[4]=0u+0x00000001u; // 80035D58
  c->lr=0x80035D60u; f_802AA2C0(c); // 80035D5C
  c->r[0]=0u+0x00000000u; // 80035D60
  W32(c->r[30]+0x00000024u,c->r[0]); // 80035D64
  c->r[4]=0u+0x00000004u; // 80035D68
  c->r[5]=c->r[30]+0x00000014u; // 80035D6C
  c->r[0]=0u+0x00000001u; // 80035D70
  c->r[3]=R32(c->r[30]+0x00000014u); // 80035D74
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80035D78
  W32(c->r[1]+0x00000030u,c->r[5]); // 80035D7C
  c->r[0]=c->r[3]&~c->r[0]; // 80035D80
  W32(c->r[1]+0x00000034u,c->r[4]); // 80035D84
  W32(c->r[1]+0x00000028u,c->r[5]); // 80035D88
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80035D8C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80035D90
L_80035D94:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80035D94
  c->r[4]=0u+0x00000012u; // 80035D98
  c->r[3]=R32(c->r[31]+0x00000008u); // 80035D9C
  c->r[0]=c->r[0]|0x00000020u; // 80035DA0
  W32(c->r[31]+0x00000094u,c->r[0]); // 80035DA4
  c->lr=0x80035DACu; f_80037BD0(c); // 80035DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80035DAC
  if (crb(c,2)) { goto L_80035E20; } // 80035DB0
  c->r[3]=c->r[31]+0x00000088u; // 80035DB4
  c->r[4]=0u+0x00000012u; // 80035DB8
  c->lr=0x80035DC0u; f_80037EC8(c); // 80035DBC
  W32(c->r[31]+0x00000188u,c->r[3]); // 80035DC0
  c->r[30]=c->r[3]|c->r[3]; // 80035DC4
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80035DC8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035DCC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80035DD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80035DD4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80035DD8
  fcmp(c,0,c->f[1],c->f[0]); // 80035DDC
  if (crb(c,2)) { goto L_80035E20; } // 80035DE0
  c->r[4]=0u+0x00000001u; // 80035DE4
  c->lr=0x80035DECu; f_802AA2C0(c); // 80035DE8
  c->r[0]=0u+0x00000000u; // 80035DEC
  W32(c->r[30]+0x00000024u,c->r[0]); // 80035DF0
  c->r[4]=0u+0x00000004u; // 80035DF4
  c->r[5]=c->r[30]+0x00000014u; // 80035DF8
  c->r[0]=0u+0x00000001u; // 80035DFC
  c->r[3]=R32(c->r[30]+0x00000014u); // 80035E00
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80035E04
  W32(c->r[1]+0x00000020u,c->r[5]); // 80035E08
  c->r[0]=c->r[3]&~c->r[0]; // 80035E0C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80035E10
  W32(c->r[1]+0x00000018u,c->r[5]); // 80035E14
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80035E18
  W32(c->r[30]+0x00000014u,c->r[0]); // 80035E1C
L_80035E20:;
  c->r[0]=R32(c->r[31]+0x000001A8u); // 80035E20
  cmps(c,0,(int32_t)c->r[0],0); // 80035E24
  if (!crb(c,2)) { goto L_80035ECC; } // 80035E28
  c->r[3]=R32(c->r[31]+0x00000008u); // 80035E2C
  c->r[4]=0u+0x00000013u; // 80035E30
  c->lr=0x80035E38u; f_80037BD0(c); // 80035E34
  cmps(c,0,(int32_t)c->r[3],0); // 80035E38
  if (crb(c,2)) { goto L_80035ECC; } // 80035E3C
  c->r[3]=c->r[31]+0x00000088u; // 80035E40
  c->r[4]=0u+0x00000013u; // 80035E44
  c->lr=0x80035E4Cu; f_80037EC8(c); // 80035E48
  {uint32_t ea=c->r[31]+0x000001D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035E4C
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80035E50
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80035E54
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 80035E58
  W32(c->r[31]+0x0000018Cu,c->r[3]); // 80035E5C
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80035E60
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[4]; // 80035E64
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80035E68
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[2]; // 80035E6C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80035E70
  c->r[30]=R32(c->r[31]+0x0000018Cu); // 80035E74
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80035E78
  c->r[3]=R32(c->r[30]+0x00000010u); // 80035E7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80035E80
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80035E84
  fcmp(c,0,c->f[1],c->f[0]); // 80035E88
  if (crb(c,2)) { goto L_80035ECC; } // 80035E8C
  c->r[4]=0u+0x00000001u; // 80035E90
  c->lr=0x80035E98u; f_802AA2C0(c); // 80035E94
  c->r[0]=0u+0x00000000u; // 80035E98
  W32(c->r[30]+0x00000024u,c->r[0]); // 80035E9C
  c->r[4]=0u+0x00000004u; // 80035EA0
  c->r[5]=c->r[30]+0x00000014u; // 80035EA4
  c->r[0]=0u+0x00000001u; // 80035EA8
  c->r[3]=R32(c->r[30]+0x00000014u); // 80035EAC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80035EB0
  W32(c->r[1]+0x00000010u,c->r[5]); // 80035EB4
  c->r[0]=c->r[3]&~c->r[0]; // 80035EB8
  W32(c->r[1]+0x00000014u,c->r[4]); // 80035EBC
  W32(c->r[1]+0x00000008u,c->r[5]); // 80035EC0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80035EC4
  W32(c->r[30]+0x00000014u,c->r[0]); // 80035EC8
L_80035ECC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80035ECC
  c->r[0]=R32(c->r[31]+0x00000094u); // 80035ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80035ED4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80035ED8
  W32(c->r[31]+0x00000094u,c->r[0]); // 80035EDC
  if (crb(c,2)) { goto L_80035F70; } // 80035EE0
  c->r[0]=R32(c->r[31]+0x000001A8u); // 80035EE4
  cmps(c,0,(int32_t)c->r[0],3); // 80035EE8
  if (crb(c,2)) { goto L_80035EFC; } // 80035EEC
  cmps(c,0,(int32_t)c->r[0],1); // 80035EF0
  if (crb(c,2)) { goto L_80035F4C; } // 80035EF4
  goto L_80035F70; // 80035EF8
L_80035EFC:;
  c->r[3]=c->r[31]+0x0000013Cu; // 80035EFC
  c->r[4]=0u+0x0000004Cu; // 80035F00
  c->lr=0x80035F08u; f_80037EC8(c); // 80035F04
  c->r[0]=R32(c->r[31]+0x00000148u); // 80035F08
  c->r[4]=0u+0x00000012u; // 80035F0C
  W32(c->r[31]+0x0000019Cu,c->r[3]); // 80035F10
  c->r[0]=c->r[0]|0x00000020u; // 80035F14
  c->r[3]=R32(c->r[31]+0x00000008u); // 80035F18
  W32(c->r[31]+0x00000148u,c->r[0]); // 80035F1C
  c->lr=0x80035F24u; f_80037BD0(c); // 80035F20
  cmps(c,0,(int32_t)c->r[3],0); // 80035F24
  if (crb(c,2)) { goto L_80035F3C; } // 80035F28
  c->r[3]=c->r[31]+0x0000013Cu; // 80035F2C
  c->r[4]=0u+0x0000004Du; // 80035F30
  c->lr=0x80035F38u; f_80037EC8(c); // 80035F34
  W32(c->r[31]+0x000001A0u,c->r[3]); // 80035F38
L_80035F3C:;
  c->r[0]=R32(c->r[31]+0x00000148u); // 80035F3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80035F40
  W32(c->r[31]+0x00000148u,c->r[0]); // 80035F44
  goto L_80035F70; // 80035F48
L_80035F4C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80035F4C
  c->r[4]=0u+0x00000076u; // 80035F50
  c->lr=0x80035F58u; f_80037BD0(c); // 80035F54
  cmps(c,0,(int32_t)c->r[3],0); // 80035F58
  if (crb(c,2)) { goto L_80035F70; } // 80035F5C
  c->r[3]=c->r[31]+0x0000013Cu; // 80035F60
  c->r[4]=0u+0x00000076u; // 80035F64
  c->lr=0x80035F6Cu; f_80037EC8(c); // 80035F68
  W32(c->r[31]+0x0000019Cu,c->r[3]); // 80035F6C
L_80035F70:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 80035F70
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80035F74
  c->r[30]=R32(c->r[1]+0x00000058u); // 80035F78
  c->lr=c->r[0]; // 80035F7C
  c->r[1]=c->r[1]+0x00000060u; // 80035F80
  return; // 80035F84
}

// fn_80035F88
void f_80035F88(Ctx* __restrict c) {
  trace_call(0x80035F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80035F88
  c->r[0]=c->lr; // 80035F8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80035F90
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80035F94
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80035F98
  c->f[31]=c->f[1]; // 80035F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80035FA0
  c->r[31]=c->r[3]|c->r[3]; // 80035FA4
  c->r[3]=c->r[3]+0x00000010u; // 80035FA8
  c->lr=0x80035FB0u; f_80038310(c); // 80035FAC
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80035FB0
  c->r[3]=c->r[31]+0x00000010u; // 80035FB4
  {uint32_t ea=c->r[31]+0x000001C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80035FB8
  c->f[4]=c->ps1[4]=S(c->f[31]/c->f[0]); // 80035FBC
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80035FC0
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80035FC4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 80035FC8
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[3]); // 80035FCC
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[3]; // 80035FD0
  c->f[5]=(c->f[5]>=0.0)?c->f[4]:c->f[3]; // 80035FD4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80035FD8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[5]);} // 80035FDC
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80035FE0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 80035FE4
  c->lr=0x80035FECu; f_80038508(c); // 80035FE8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80035FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80035FF0
  if (crb(c,2)) { goto L_80036048; } // 80035FF4
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80035FF8
  cmps(c,0,(int32_t)c->r[0],0); // 80035FFC
  if (crb(c,2)) { goto L_8003600C; } // 80036000
  {uint32_t ea=c->r[31]+0x000001C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80036004
  goto L_80036010; // 80036008
L_8003600C:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003600C
L_80036010:;
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036010
  c->r[3]=c->r[31]+0x000000C4u; // 80036014
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036018
  c->f[3]=c->ps1[3]=S(c->f[31]/c->f[0]); // 8003601C
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036020
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[1]); // 80036024
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[1]); // 80036028
  c->f[0]=(c->f[0]>=0.0)?c->f[5]:c->f[1]; // 8003602C
  c->f[4]=(c->f[4]>=0.0)?c->f[3]:c->f[1]; // 80036030
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80036034
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[4]);} // 80036038
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8003603C
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[1]);} // 80036040
  c->lr=0x80036048u; f_80038508(c); // 80036044
L_80036048:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80036048
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003604C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80036050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036054
  c->lr=c->r[0]; // 80036058
  c->r[1]=c->r[1]+0x00000020u; // 8003605C
  return; // 80036060
}

// fn_80036064
void f_80036064(Ctx* __restrict c) {
  trace_call(0x80036064u);
  {uint32_t ea=c->r[3]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036064
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80036068
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 8003606C
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036070
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80036074
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 80036078
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[1]); // 8003607C
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80036080
  c->f[5]=(c->f[5]>=0.0)?c->f[4]:c->f[1]; // 80036084
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80036088
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[5]);} // 8003608C
  c->f[1]=(c->f[1]>=0.0)?c->f[3]:c->f[0]; // 80036090
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 80036094
  c->r[3]=c->r[3]+0x0000004Cu; // 80036098
  f_80038564(c); return; // 8003609C
}

// fn_800360A0
void f_800360A0(Ctx* __restrict c) {
  trace_call(0x800360A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800360A0
  c->r[0]=c->lr; // 800360A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800360A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800360AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800360B0
  c->f[31]=c->f[1]; // 800360B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800360B8
  c->r[31]=c->r[3]|c->r[3]; // 800360BC
  c->r[0]=R32(c->r[3]+0x000001B0u); // 800360C0
  cmps(c,0,(int32_t)c->r[0],0); // 800360C4
  if (crb(c,2)) { goto L_80036108; } // 800360C8
  c->r[4]=R32(c->r[3]+0x00000050u); // 800360CC
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800360D0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800360D4
  fcmp(c,0,c->f[0],c->f[1]); // 800360D8
  if (!crb(c,2)) { goto L_80036108; } // 800360DC
  c->r[3]=c->r[3]+0x0000004Cu; // 800360E0
  c->lr=0x800360E8u; f_800387B0(c); // 800360E4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800360E8
  cmps(c,0,(int32_t)c->r[0],0); // 800360EC
  if (crb(c,2)) { goto L_80036108; } // 800360F0
  c->r[0]=R32(c->r[31]+0x000001B4u); // 800360F4
  cmps(c,0,(int32_t)c->r[0],0); // 800360F8
  if (crb(c,2)) { goto L_80036108; } // 800360FC
  c->r[3]=c->r[31]+0x00000100u; // 80036100
  c->lr=0x80036108u; f_800387B0(c); // 80036104
L_80036108:;
  c->r[0]=R32(c->r[31]+0x000001B0u); // 80036108
  cmps(c,0,(int32_t)c->r[0],0); // 8003610C
  if (crb(c,2)) { goto L_8003611C; } // 80036110
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80036114
  goto L_80036120; // 80036118
L_8003611C:;
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003611C
L_80036120:;
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036120
  c->r[3]=c->r[31]+0x0000004Cu; // 80036124
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036128
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[0]); // 8003612C
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036130
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[1]); // 80036134
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[1]); // 80036138
  c->f[0]=(c->f[0]>=0.0)?c->f[4]:c->f[1]; // 8003613C
  c->f[3]=(c->f[3]>=0.0)?c->f[31]:c->f[1]; // 80036140
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80036144
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[3]);} // 80036148
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8003614C
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[1]);} // 80036150
  c->lr=0x80036158u; f_800384A8(c); // 80036154
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036158
  cmps(c,0,(int32_t)c->r[0],0); // 8003615C
  if (crb(c,2)) { goto L_800361D4; } // 80036160
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036164
  cmps(c,0,(int32_t)c->r[0],0); // 80036168
  if (crb(c,2)) { goto L_800361A4; } // 8003616C
  c->r[3]=R32(c->r[31]+0x00000050u); // 80036170
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036174
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80036178
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003617C
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[1]); // 80036180
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 80036184
  c->f[0]=(c->f[0]>=0.0)?c->f[4]:c->f[1]; // 80036188
  c->f[3]=(c->f[3]>=0.0)?c->f[2]:c->f[1]; // 8003618C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80036190
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[3]);} // 80036194
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80036198
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[1]);} // 8003619C
  goto L_800361CC; // 800361A0
L_800361A4:;
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800361A4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800361A8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[0]); // 800361AC
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[0]); // 800361B0
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[0]; // 800361B4
  c->f[3]=(c->f[3]>=0.0)?c->f[31]:c->f[0]; // 800361B8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 800361BC
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[3]);} // 800361C0
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 800361C4
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[0]);} // 800361C8
L_800361CC:;
  c->r[3]=c->r[31]+0x00000100u; // 800361CC
  c->lr=0x800361D4u; f_800384A8(c); // 800361D0
L_800361D4:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800361D4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800361D8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800361DC
  fcmp(c,0,c->f[1],c->f[0]); // 800361E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800361E4
  if (!crb(c,2)) { goto L_80036224; } // 800361E8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800361EC
  c->r[4]=R32(c->r[3]+0x00000024u); // 800361F0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800361F4
  cmps(c,0,(int32_t)c->r[0],0); // 800361F8
  if (crb(c,2)) { goto L_80036224; } // 800361FC
  c->lr=0x80036204u; f_80319494(c); // 80036200
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036204
  cmps(c,0,(int32_t)c->r[0],0); // 80036208
  if (crb(c,2)) { goto L_80036224; } // 8003620C
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036210
  cmps(c,0,(int32_t)c->r[0],0); // 80036214
  if (crb(c,2)) { goto L_80036224; } // 80036218
  c->r[3]=R32(c->r[31]+0x000000C8u); // 8003621C
  c->lr=0x80036224u; f_80319494(c); // 80036220
L_80036224:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80036224
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80036228
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003622C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036230
  c->lr=c->r[0]; // 80036234
  c->r[1]=c->r[1]+0x00000020u; // 80036238
  return; // 8003623C
}

// fn_80036240
void f_80036240(Ctx* __restrict c) {
  trace_call(0x80036240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036240
  c->r[0]=c->lr; // 80036244
  W32(c->r[1]+0x00000024u,c->r[0]); // 80036248
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003624C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80036250
  c->f[31]=c->f[1]; // 80036254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80036258
  c->r[31]=c->r[3]|c->r[3]; // 8003625C
  c->r[3]=c->r[3]+0x00000010u; // 80036260
  c->lr=0x80036268u; f_80038310(c); // 80036264
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036268
  cmps(c,0,(int32_t)c->r[0],0); // 8003626C
  if (crb(c,2)) { goto L_8003628C; } // 80036270
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036274
  cmps(c,0,(int32_t)c->r[0],0); // 80036278
  if (crb(c,2)) { goto L_8003628C; } // 8003627C
  c->f[1]=c->f[31]; // 80036280
  c->r[3]=c->r[31]+0x000000C4u; // 80036284
  c->lr=0x8003628Cu; f_80038310(c); // 80036288
L_8003628C:;
  {uint32_t ea=c->r[31]+0x000001CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003628C
  c->r[5]=0u+0x00000000u; // 80036290
  {uint32_t ea=c->r[31]+0x000001C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036294
  c->r[6]=0u+0x00000000u; // 80036298
  c->r[3]=R32(c->r[31]+0x00000014u); // 8003629C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 800362A0
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800362A4
  {uint32_t ea=c->r[2]+0xFFFF84B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800362A8
  c->r[4]=R32(c->r[3]+0x00000024u); // 800362AC
  c->f[4]=(c->f[4]>=0.0)?c->f[1]:c->f[3]; // 800362B0
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800362B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800362B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800362BC
  c->r[4]=R32(c->r[31]+0x000000C8u); // 800362C0
  {uint32_t ea=c->r[2]+0xFFFF84BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800362C4
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[0]); // 800362C8
  c->f[5]=(c->f[5]>=0.0)?c->f[4]:c->f[0]; // 800362CC
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[3]); // 800362D0
  c->f[4]=(c->f[4]>=0.0)?c->f[3]:c->f[5]; // 800362D4
  c->ctr=c->r[0]; // 800362D8
  cmps(c,0,(int32_t)c->r[0],0); // 800362DC
  if (!crb(c,1)) { goto L_8003644C; } // 800362E0
L_800362E4:;
  c->r[7]=R32(c->r[3]+0x00000024u); // 800362E4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800362E8
  c->r[7]=R32(c->r[7]+0x00000000u); // 800362EC
  cmps(c,0,(int32_t)c->r[0],0); // 800362F0
  c->r[9]=R32(c->r[7]+c->r[6]); // 800362F4
  if (crb(c,2)) { goto L_80036314; } // 800362F8
  c->r[0]=R32(c->r[31]+0x000001B4u); // 800362FC
  cmps(c,0,(int32_t)c->r[0],0); // 80036300
  if (crb(c,2)) { goto L_80036314; } // 80036304
  c->r[5]=R32(c->r[4]+0x00000024u); // 80036308
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003630C
  c->r[5]=R32(c->r[5]+c->r[6]); // 80036310
L_80036314:;
  c->r[8]=R32(c->r[9]+0x00000008u); // 80036314
  c->r[7]=R32(c->r[13]+0xFFFF806Cu); // 80036318
  c->r[8]=R8(c->r[8]+0x00000000u); // 8003631C
  c->r[0]=R8(c->r[7]+0x00000000u); // 80036320
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 80036324
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80036328
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8003632C
  if (!crb(c,2)) { goto L_80036380; } // 80036330
  {uint32_t ea=c->r[31]+0x000001B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80036334
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[3]);} // 80036338
  {uint32_t ea=c->r[9]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003633C
  c->r[7]=R32(c->r[9]+0x00000010u); // 80036340
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80036344
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80036348
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8003634C
  cmps(c,0,(int32_t)c->r[0],0); // 80036350
  if (crb(c,2)) { goto L_80036444; } // 80036354
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036358
  cmps(c,0,(int32_t)c->r[0],0); // 8003635C
  if (crb(c,2)) { goto L_80036444; } // 80036360
  {uint32_t ea=c->r[31]+0x000001B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80036364
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[3]);} // 80036368
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003636C
  c->r[7]=R32(c->r[5]+0x00000010u); // 80036370
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80036374
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80036378
  goto L_80036444; // 8003637C
L_80036380:;
  c->r[7]=R32(c->r[13]+0xFFFF8070u); // 80036380
  c->r[0]=R8(c->r[7]+0x00000000u); // 80036384
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80036388
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8003638C
  if (!crb(c,2)) { goto L_800363E4; } // 80036390
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[2]); // 80036394
  {uint32_t ea=c->r[31]+0x000001B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036398
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8003639C
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[3]);} // 800363A0
  {uint32_t ea=c->r[9]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800363A4
  c->r[7]=R32(c->r[9]+0x00000010u); // 800363A8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800363AC
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 800363B0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800363B4
  cmps(c,0,(int32_t)c->r[0],0); // 800363B8
  if (crb(c,2)) { goto L_80036444; } // 800363BC
  c->r[0]=R32(c->r[31]+0x000001B4u); // 800363C0
  cmps(c,0,(int32_t)c->r[0],0); // 800363C4
  if (crb(c,2)) { goto L_80036444; } // 800363C8
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[3]);} // 800363CC
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800363D0
  c->r[7]=R32(c->r[5]+0x00000010u); // 800363D4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800363D8
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 800363DC
  goto L_80036444; // 800363E0
L_800363E4:;
  c->r[7]=R32(c->r[13]+0xFFFF8074u); // 800363E4
  c->r[0]=R8(c->r[7]+0x00000000u); // 800363E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800363EC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800363F0
  if (!crb(c,2)) { goto L_80036444; } // 800363F4
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[1]); // 800363F8
  {uint32_t ea=c->r[31]+0x000001B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800363FC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80036400
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[3]);} // 80036404
  {uint32_t ea=c->r[9]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036408
  c->r[7]=R32(c->r[9]+0x00000010u); // 8003640C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80036410
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80036414
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036418
  cmps(c,0,(int32_t)c->r[0],0); // 8003641C
  if (crb(c,2)) { goto L_80036444; } // 80036420
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036424
  cmps(c,0,(int32_t)c->r[0],0); // 80036428
  if (crb(c,2)) { goto L_80036444; } // 8003642C
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[3]);} // 80036430
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036434
  c->r[7]=R32(c->r[5]+0x00000010u); // 80036438
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8003643C
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80036440
L_80036444:;
  c->r[6]=c->r[6]+0x00000004u; // 80036444
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800362E4; } // 80036448
L_8003644C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003644C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80036450
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80036454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036458
  c->lr=c->r[0]; // 8003645C
  c->r[1]=c->r[1]+0x00000020u; // 80036460
  return; // 80036464
}

// fn_80036468
void f_80036468(Ctx* __restrict c) {
  trace_call(0x80036468u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036468
  c->r[0]=c->lr; // 8003646C
  {uint32_t ea=c->r[2]+0xFFFF84D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80036470
  W32(c->r[1]+0x00000024u,c->r[0]); // 80036474
  {uint32_t ea=c->r[2]+0xFFFF84D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036478
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003647C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80036480
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80036484
  c->r[31]=c->r[3]|c->r[3]; // 80036488
  {uint32_t ea=c->r[3]+0x000001CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003648C
  {uint32_t ea=c->r[3]+0x000001C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036490
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[3]); // 80036494
  c->f[4]=(c->f[4]>=0.0)?c->f[2]:c->f[3]; // 80036498
  c->f[6]=c->ps1[6]=S(c->f[5]-c->f[4]); // 8003649C
  c->f[6]=(c->f[6]>=0.0)?c->f[5]:c->f[4]; // 800364A0
  fcmp(c,0,c->f[6],c->f[0]); // 800364A4
  if (!crb(c,0)) { goto L_800364B4; } // 800364A8
  c->r[8]=0u+0x00000000u; // 800364AC
  goto L_800364CC; // 800364B0
L_800364B4:;
  {uint32_t ea=c->r[2]+0xFFFF84D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800364B4
  fcmp(c,0,c->f[6],c->f[0]); // 800364B8
  if (!crb(c,0)) { goto L_800364C8; } // 800364BC
  c->r[8]=0u+0x00000001u; // 800364C0
  goto L_800364CC; // 800364C4
L_800364C8:;
  c->r[8]=0u+0x00000002u; // 800364C8
L_800364CC:;
  {uint32_t ea=c->r[3]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800364CC
  c->r[0]=0u+0x00000003u; // 800364D0
  c->r[5]=c->r[31]|c->r[31]; // 800364D4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800364D8
  c->f[5]=c->ps1[5]=S(c->f[1]/c->f[0]); // 800364DC
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800364E0
  c->r[6]=0u+0x00000000u; // 800364E4
  c->ctr=c->r[0]; // 800364E8
L_800364EC:;
  c->r[4]=R32(c->r[5]+0x00000178u); // 800364EC
  cmpu(c,0,c->r[6],c->r[8]); // 800364F0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800364F4
  if (!crb(c,2)) { goto L_80036504; } // 800364F8
  c->f[3]=c->f[5]; // 800364FC
  goto L_80036508; // 80036500
L_80036504:;
  c->f[3]=-c->f[5]; // 80036504
L_80036508:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 80036508
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8003650C
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[0]; // 80036510
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 80036514
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[3]; // 80036518
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8003651C
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[0]; // 80036520
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 80036524
  c->f[4]=(c->f[4]>=0.0)?c->f[2]:c->f[3]; // 80036528
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[4]);} // 8003652C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80036530
  cmps(c,0,(int32_t)c->r[0],0); // 80036534
  if (crb(c,2)) { goto L_80036554; } // 80036538
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8003653C
  c->r[4]=R32(c->r[5]+0x00000190u); // 80036540
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[0]; // 80036544
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 80036548
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[3]; // 8003654C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[1]);} // 80036550
L_80036554:;
  c->r[5]=c->r[5]+0x00000004u; // 80036554
  c->r[6]=c->r[6]+0x00000001u; // 80036558
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800364EC; } // 8003655C
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80036560
  c->r[0]=0u+0x00000003u; // 80036564
  c->r[6]=c->r[31]|c->r[31]; // 80036568
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003656C
  c->r[7]=c->r[3]+c->r[4]; // 80036570
  c->r[9]=0u+0x00000000u; // 80036574
  c->ctr=c->r[0]; // 80036578
L_8003657C:;
  cmpu(c,0,c->r[9],c->r[8]); // 8003657C
  if (crb(c,2)) { goto L_800365D8; } // 80036580
  c->r[4]=R32(c->r[7]+0x00000178u); // 80036584
  c->r[5]=R32(c->r[6]+0x00000178u); // 80036588
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003658C
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036590
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 80036594
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[3]; // 80036598
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8003659C
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 800365A0
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 800365A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800365A8
  cmps(c,0,(int32_t)c->r[0],0); // 800365AC
  if (crb(c,2)) { goto L_800365D8; } // 800365B0
  c->r[4]=R32(c->r[7]+0x00000190u); // 800365B4
  c->r[5]=R32(c->r[6]+0x00000190u); // 800365B8
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800365BC
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800365C0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 800365C4
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[3]; // 800365C8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800365CC
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 800365D0
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 800365D4
L_800365D8:;
  c->r[6]=c->r[6]+0x00000004u; // 800365D8
  c->r[9]=c->r[9]+0x00000001u; // 800365DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003657C; } // 800365E0
  {uint32_t ea=c->r[2]+0xFFFF84C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800365E4
  {uint32_t ea=c->r[2]+0xFFFF84C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800365E8
  c->f[2]=c->ps1[2]=S(c->f[6]/c->f[1]); // 800365EC
  {uint32_t ea=c->r[2]+0xFFFF84C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800365F0
  c->r[6]=R32(c->r[3]+0x0000017Cu); // 800365F4
  c->r[5]=R32(c->r[3]+0x00000178u); // 800365F8
  c->r[4]=R32(c->r[3]+0x00000180u); // 800365FC
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80036600
  c->f[1]=c->ps1[1]=S(c->f[6]/c->f[0]); // 80036604
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80036608
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8003660C
  {uint32_t ea=c->r[3]+0x000001B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036610
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80036614
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80036618
  c->f[3]=c->ps1[3]=S(c->f[6]/c->f[3]); // 8003661C
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[5]); // 80036620
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[8]); // 80036624
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[7]); // 80036628
  c->f[6]=(c->f[6]>=0.0)?c->f[4]:c->f[5]; // 8003662C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[9]); // 80036630
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80036634
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[6]);} // 80036638
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[1]); // 8003663C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 80036640
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[5]); // 80036644
  c->f[0]=(c->f[0]>=0.0)?c->f[31]:c->f[5]; // 80036648
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 8003664C
  c->f[1]=(c->f[1]>=0.0)?c->f[4]:c->f[0]; // 80036650
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 80036654
  c->r[3]=c->r[3]+0x0000004Cu; // 80036658
  c->lr=0x80036660u; f_80038508(c); // 8003665C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036660
  cmps(c,0,(int32_t)c->r[0],0); // 80036664
  if (crb(c,2)) { goto L_8003669C; } // 80036668
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003666C
  c->r[3]=c->r[31]+0x00000100u; // 80036670
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036674
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 80036678
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 8003667C
  c->f[0]=(c->f[0]>=0.0)?c->f[31]:c->f[1]; // 80036680
  c->f[3]=(c->f[3]>=0.0)?c->f[2]:c->f[1]; // 80036684
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80036688
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[3]);} // 8003668C
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80036690
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[1]);} // 80036694
  c->lr=0x8003669Cu; f_80038508(c); // 80036698
L_8003669C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003669C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800366A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800366A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800366A8
  c->lr=c->r[0]; // 800366AC
  c->r[1]=c->r[1]+0x00000020u; // 800366B0
  return; // 800366B4
}

// fn_800366B8
void f_800366B8(Ctx* __restrict c) {
  trace_call(0x800366B8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800366B8
  c->r[0]=c->lr; // 800366BC
  W32(c->r[1]+0x00000144u,c->r[0]); // 800366C0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800366C4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800366C8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 800366CC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 800366D0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 800366D4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 800366D8
  c->f[29]=c->f[1]; // 800366DC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[28]);} // 800366E0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,28,ea,0,0);} // 800366E4
  W32(c->r[1]+0x000000FCu,c->r[31]); // 800366E8
  c->r[31]=c->r[3]|c->r[3]; // 800366EC
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800366F0
  c->r[30]=R32(c->r[3]+0x00000184u); // 800366F4
  cmps(c,0,(int32_t)c->r[30],0); // 800366F8
  if (crb(c,2)) { goto L_80036A54; } // 800366FC
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036700
  {uint32_t ea=c->r[2]+0xFFFF84B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036704
  c->r[3]=R32(c->r[30]+0x00000010u); // 80036708
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 8003670C
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036710
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036714
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=RF64(ea);} // 80036718
  c->f[28]=c->ps1[28]=S(c->f[0]+c->f[3]); // 8003671C
  c->lr=0x80036724u; f_800D29B8(c); // 80036720
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80036724
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036728
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003672C
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 80036730
  fcmp(c,0,c->f[31],c->f[0]); // 80036734
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80036738
  if (!crb(c,2)) { goto L_80036744; } // 8003673C
  goto L_8003674C; // 80036740
L_80036744:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036744
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[31]); // 80036748
L_8003674C:;
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003674C
  c->f[4]=c->ps1[4]=S(c->f[28]-c->f[31]); // 80036750
  c->r[30]=R32(c->r[31]+0x00000184u); // 80036754
  c->f[30]=c->ps1[30]=S(c->f[29]/c->f[0]); // 80036758
  c->r[3]=R32(c->r[30]+0x00000010u); // 8003675C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036760
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 80036764
  c->f[1]=-c->f[30]; // 80036768
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[1]); // 8003676C
  c->f[2]=(c->f[2]>=0.0)?c->f[4]:c->f[1]; // 80036770
  c->f[28]=c->ps1[28]=S(c->f[2]-c->f[30]); // 80036774
  c->f[28]=(c->f[28]>=0.0)?c->f[30]:c->f[2]; // 80036778
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 8003677C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80036780
  fcmp(c,0,c->f[1],c->f[3]); // 80036784
  if (crb(c,2)) { goto L_8003682C; } // 80036788
  c->r[4]=0u+0x00000001u; // 8003678C
  c->lr=0x80036794u; f_802AA2C0(c); // 80036790
  c->r[0]=0u+0x00000000u; // 80036794
  W32(c->r[30]+0x00000024u,c->r[0]); // 80036798
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 8003679C
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800367A0
  c->r[5]=0u+0x00000004u; // 800367A4
  c->r[0]=0u+0x00000001u; // 800367A8
  c->r[4]=R32(c->r[30]+0x00000014u); // 800367AC
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800367B0
  c->r[6]=c->r[30]+0x00000014u; // 800367B4
  c->r[0]=c->r[4]&~c->r[3]; // 800367B8
  fcmp(c,0,c->f[0],c->f[1]); // 800367BC
  W32(c->r[1]+0x000000E0u,c->r[6]); // 800367C0
  W32(c->r[1]+0x000000E4u,c->r[5]); // 800367C4
  W32(c->r[1]+0x000000C8u,c->r[6]); // 800367C8
  W32(c->r[1]+0x000000CCu,c->r[5]); // 800367CC
  W32(c->r[30]+0x00000014u,c->r[0]); // 800367D0
  if (!crb(c,2)) { goto L_800367FC; } // 800367D4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800367D8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800367DC
  W32(c->r[1]+0x000000E8u,c->r[6]); // 800367E0
  c->r[0]=c->r[0]|c->r[3]; // 800367E4
  W32(c->r[1]+0x000000ECu,c->r[5]); // 800367E8
  W32(c->r[1]+0x000000D0u,c->r[6]); // 800367EC
  W32(c->r[1]+0x000000D4u,c->r[5]); // 800367F0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800367F4
  goto L_8003682C; // 800367F8
L_800367FC:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800367FC
  fcmp(c,0,c->f[0],c->f[1]); // 80036800
  if (!crb(c,2)) { goto L_8003682C; } // 80036804
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036808
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8003680C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036810
  W32(c->r[1]+0x000000F0u,c->r[6]); // 80036814
  c->r[0]=c->r[0]|c->r[3]; // 80036818
  W32(c->r[1]+0x000000F4u,c->r[5]); // 8003681C
  W32(c->r[1]+0x000000D8u,c->r[6]); // 80036820
  W32(c->r[1]+0x000000DCu,c->r[5]); // 80036824
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036828
L_8003682C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8003682C
  cmps(c,0,(int32_t)c->r[0],0); // 80036830
  if (crb(c,2)) { goto L_80036900; } // 80036834
  c->r[30]=R32(c->r[31]+0x0000019Cu); // 80036838
  cmps(c,0,(int32_t)c->r[30],0); // 8003683C
  if (crb(c,2)) { goto L_80036900; } // 80036840
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 80036844
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036848
  c->r[3]=R32(c->r[30]+0x00000010u); // 8003684C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80036850
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80036854
  fcmp(c,0,c->f[1],c->f[0]); // 80036858
  if (crb(c,2)) { goto L_80036900; } // 8003685C
  c->r[4]=0u+0x00000001u; // 80036860
  c->lr=0x80036868u; f_802AA2C0(c); // 80036864
  c->r[0]=0u+0x00000000u; // 80036868
  W32(c->r[30]+0x00000024u,c->r[0]); // 8003686C
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 80036870
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036874
  c->r[5]=0u+0x00000004u; // 80036878
  c->r[0]=0u+0x00000001u; // 8003687C
  c->r[4]=R32(c->r[30]+0x00000014u); // 80036880
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80036884
  c->r[6]=c->r[30]+0x00000014u; // 80036888
  c->r[0]=c->r[4]&~c->r[3]; // 8003688C
  fcmp(c,0,c->f[0],c->f[1]); // 80036890
  W32(c->r[1]+0x000000B0u,c->r[6]); // 80036894
  W32(c->r[1]+0x000000B4u,c->r[5]); // 80036898
  W32(c->r[1]+0x00000098u,c->r[6]); // 8003689C
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 800368A0
  W32(c->r[30]+0x00000014u,c->r[0]); // 800368A4
  if (!crb(c,2)) { goto L_800368D0; } // 800368A8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800368AC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800368B0
  W32(c->r[1]+0x000000B8u,c->r[6]); // 800368B4
  c->r[0]=c->r[0]|c->r[3]; // 800368B8
  W32(c->r[1]+0x000000BCu,c->r[5]); // 800368BC
  W32(c->r[1]+0x000000A0u,c->r[6]); // 800368C0
  W32(c->r[1]+0x000000A4u,c->r[5]); // 800368C4
  W32(c->r[6]+0x00000000u,c->r[0]); // 800368C8
  goto L_80036900; // 800368CC
L_800368D0:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800368D0
  fcmp(c,0,c->f[0],c->f[1]); // 800368D4
  if (!crb(c,2)) { goto L_80036900; } // 800368D8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800368DC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800368E0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800368E4
  W32(c->r[1]+0x000000C0u,c->r[6]); // 800368E8
  c->r[0]=c->r[0]|c->r[3]; // 800368EC
  W32(c->r[1]+0x000000C4u,c->r[5]); // 800368F0
  W32(c->r[1]+0x000000A8u,c->r[6]); // 800368F4
  W32(c->r[1]+0x000000ACu,c->r[5]); // 800368F8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800368FC
L_80036900:;
  c->r[30]=R32(c->r[31]+0x0000018Cu); // 80036900
  cmps(c,0,(int32_t)c->r[30],0); // 80036904
  if (crb(c,2)) { goto L_80036A0C; } // 80036908
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 8003690C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036910
  c->r[3]=R32(c->r[30]+0x00000010u); // 80036914
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80036918
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 8003691C
  fcmp(c,0,c->f[1],c->f[0]); // 80036920
  if (crb(c,2)) { goto L_800369C8; } // 80036924
  c->r[4]=0u+0x00000001u; // 80036928
  c->lr=0x80036930u; f_802AA2C0(c); // 8003692C
  c->r[0]=0u+0x00000000u; // 80036930
  W32(c->r[30]+0x00000024u,c->r[0]); // 80036934
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[28]); // 80036938
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003693C
  c->r[5]=0u+0x00000004u; // 80036940
  c->r[0]=0u+0x00000001u; // 80036944
  c->r[4]=R32(c->r[30]+0x00000014u); // 80036948
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8003694C
  c->r[6]=c->r[30]+0x00000014u; // 80036950
  c->r[0]=c->r[4]&~c->r[3]; // 80036954
  fcmp(c,0,c->f[0],c->f[1]); // 80036958
  W32(c->r[1]+0x00000080u,c->r[6]); // 8003695C
  W32(c->r[1]+0x00000084u,c->r[5]); // 80036960
  W32(c->r[1]+0x00000068u,c->r[6]); // 80036964
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 80036968
  W32(c->r[30]+0x00000014u,c->r[0]); // 8003696C
  if (!crb(c,2)) { goto L_80036998; } // 80036970
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80036974
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036978
  W32(c->r[1]+0x00000088u,c->r[6]); // 8003697C
  c->r[0]=c->r[0]|c->r[3]; // 80036980
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 80036984
  W32(c->r[1]+0x00000070u,c->r[6]); // 80036988
  W32(c->r[1]+0x00000074u,c->r[5]); // 8003698C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036990
  goto L_800369C8; // 80036994
L_80036998:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036998
  fcmp(c,0,c->f[0],c->f[1]); // 8003699C
  if (!crb(c,2)) { goto L_800369C8; } // 800369A0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800369A4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 800369A8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800369AC
  W32(c->r[1]+0x00000090u,c->r[6]); // 800369B0
  c->r[0]=c->r[0]|c->r[3]; // 800369B4
  W32(c->r[1]+0x00000094u,c->r[5]); // 800369B8
  W32(c->r[1]+0x00000078u,c->r[6]); // 800369BC
  W32(c->r[1]+0x0000007Cu,c->r[5]); // 800369C0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800369C4
L_800369C8:;
  c->r[3]=R32(c->r[31]+0x0000018Cu); // 800369C8
  c->f[0]=-c->f[30]; // 800369CC
  {uint32_t ea=c->r[31]+0x000001D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800369D0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800369D4
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800369D8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[4]); // 800369DC
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800369E0
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[0]); // 800369E4
  c->f[1]=(c->f[1]>=0.0)?c->f[5]:c->f[0]; // 800369E8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[30]); // 800369EC
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[1]; // 800369F0
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800369F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 800369F8
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[3]; // 800369FC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80036A00
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80036A04
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80036A08
L_80036A0C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80036A10
  if (crb(c,2)) { goto L_80036A54; } // 80036A14
  c->r[0]=R32(c->r[31]+0x000001B4u); // 80036A18
  cmps(c,0,(int32_t)c->r[0],0); // 80036A1C
  if (!crb(c,2)) { goto L_80036A54; } // 80036A20
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036A24
  c->r[3]=c->r[31]+0x0000013Cu; // 80036A28
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036A2C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[0]); // 80036A30
  c->f[3]=c->ps1[3]=S(c->f[30]-c->f[0]); // 80036A34
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[0]; // 80036A38
  c->f[3]=(c->f[3]>=0.0)?c->f[30]:c->f[0]; // 80036A3C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80036A40
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[3]);} // 80036A44
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80036A48
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[0]);} // 80036A4C
  c->lr=0x80036A54u; f_800384A8(c); // 80036A50
L_80036A54:;
  c->r[30]=R32(c->r[31]+0x00000188u); // 80036A54
  cmps(c,0,(int32_t)c->r[30],0); // 80036A58
  if (crb(c,2)) { goto L_80036C58; } // 80036A5C
  {uint32_t ea=c->r[2]+0xFFFF84B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036A60
  {uint32_t ea=c->r[31]+0x000001D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036A64
  c->r[3]=R32(c->r[30]+0x00000010u); // 80036A68
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 80036A6C
  {uint32_t ea=c->r[2]+0xFFFF84ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036A70
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036A74
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=RF64(ea);} // 80036A78
  c->f[28]=c->ps1[28]=S(c->f[0]+c->f[3]); // 80036A7C
  c->lr=0x80036A84u; f_800D29B8(c); // 80036A80
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80036A84
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80036A88
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036A8C
  c->f[30]=c->ps1[30]=S(c->f[2]/c->f[1]); // 80036A90
  fcmp(c,0,c->f[30],c->f[0]); // 80036A94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80036A98
  if (!crb(c,2)) { goto L_80036AA4; } // 80036A9C
  goto L_80036AAC; // 80036AA0
L_80036AA4:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036AA4
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[30]); // 80036AA8
L_80036AAC:;
  {uint32_t ea=c->r[31]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80036AAC
  c->f[5]=c->ps1[5]=S(c->f[28]-c->f[30]); // 80036AB0
  c->r[30]=R32(c->r[31]+0x00000188u); // 80036AB4
  c->f[4]=c->ps1[4]=S(c->f[29]/c->f[0]); // 80036AB8
  c->r[3]=R32(c->r[30]+0x00000010u); // 80036ABC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036AC0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 80036AC4
  c->f[1]=-c->f[4]; // 80036AC8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[1]); // 80036ACC
  c->f[2]=(c->f[2]>=0.0)?c->f[5]:c->f[1]; // 80036AD0
  c->f[28]=c->ps1[28]=S(c->f[2]-c->f[4]); // 80036AD4
  c->f[28]=(c->f[28]>=0.0)?c->f[4]:c->f[2]; // 80036AD8
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[28]); // 80036ADC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80036AE0
  fcmp(c,0,c->f[1],c->f[3]); // 80036AE4
  if (crb(c,2)) { goto L_80036B8C; } // 80036AE8
  c->r[4]=0u+0x00000001u; // 80036AEC
  c->lr=0x80036AF4u; f_802AA2C0(c); // 80036AF0
  c->r[0]=0u+0x00000000u; // 80036AF4
  W32(c->r[30]+0x00000024u,c->r[0]); // 80036AF8
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[28]); // 80036AFC
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036B00
  c->r[5]=0u+0x00000004u; // 80036B04
  c->r[0]=0u+0x00000001u; // 80036B08
  c->r[4]=R32(c->r[30]+0x00000014u); // 80036B0C
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80036B10
  c->r[6]=c->r[30]+0x00000014u; // 80036B14
  c->r[0]=c->r[4]&~c->r[3]; // 80036B18
  fcmp(c,0,c->f[0],c->f[1]); // 80036B1C
  W32(c->r[1]+0x00000050u,c->r[6]); // 80036B20
  W32(c->r[1]+0x00000054u,c->r[5]); // 80036B24
  W32(c->r[1]+0x00000038u,c->r[6]); // 80036B28
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80036B2C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80036B30
  if (!crb(c,2)) { goto L_80036B5C; } // 80036B34
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80036B38
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036B3C
  W32(c->r[1]+0x00000058u,c->r[6]); // 80036B40
  c->r[0]=c->r[0]|c->r[3]; // 80036B44
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 80036B48
  W32(c->r[1]+0x00000040u,c->r[6]); // 80036B4C
  W32(c->r[1]+0x00000044u,c->r[5]); // 80036B50
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036B54
  goto L_80036B8C; // 80036B58
L_80036B5C:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036B5C
  fcmp(c,0,c->f[0],c->f[1]); // 80036B60
  if (!crb(c,2)) { goto L_80036B8C; } // 80036B64
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036B68
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80036B6C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036B70
  W32(c->r[1]+0x00000060u,c->r[6]); // 80036B74
  c->r[0]=c->r[0]|c->r[3]; // 80036B78
  W32(c->r[1]+0x00000064u,c->r[5]); // 80036B7C
  W32(c->r[1]+0x00000048u,c->r[6]); // 80036B80
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 80036B84
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036B88
L_80036B8C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80036B8C
  cmps(c,0,(int32_t)c->r[0],0); // 80036B90
  if (crb(c,2)) { goto L_80036C58; } // 80036B94
  c->r[30]=R32(c->r[31]+0x000001A0u); // 80036B98
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[28]); // 80036B9C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036BA0
  c->r[3]=R32(c->r[30]+0x00000010u); // 80036BA4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80036BA8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80036BAC
  fcmp(c,0,c->f[1],c->f[0]); // 80036BB0
  if (crb(c,2)) { goto L_80036C58; } // 80036BB4
  c->r[4]=0u+0x00000001u; // 80036BB8
  c->lr=0x80036BC0u; f_802AA2C0(c); // 80036BBC
  c->r[0]=0u+0x00000000u; // 80036BC0
  W32(c->r[30]+0x00000024u,c->r[0]); // 80036BC4
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[28]); // 80036BC8
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036BCC
  c->r[5]=0u+0x00000004u; // 80036BD0
  c->r[0]=0u+0x00000001u; // 80036BD4
  c->r[4]=R32(c->r[30]+0x00000014u); // 80036BD8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80036BDC
  c->r[6]=c->r[30]+0x00000014u; // 80036BE0
  c->r[0]=c->r[4]&~c->r[3]; // 80036BE4
  fcmp(c,0,c->f[0],c->f[1]); // 80036BE8
  W32(c->r[1]+0x00000020u,c->r[6]); // 80036BEC
  W32(c->r[1]+0x00000024u,c->r[5]); // 80036BF0
  W32(c->r[1]+0x00000008u,c->r[6]); // 80036BF4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80036BF8
  W32(c->r[30]+0x00000014u,c->r[0]); // 80036BFC
  if (!crb(c,2)) { goto L_80036C28; } // 80036C00
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80036C04
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036C08
  W32(c->r[1]+0x00000028u,c->r[6]); // 80036C0C
  c->r[0]=c->r[0]|c->r[3]; // 80036C10
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80036C14
  W32(c->r[1]+0x00000010u,c->r[6]); // 80036C18
  W32(c->r[1]+0x00000014u,c->r[5]); // 80036C1C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036C20
  goto L_80036C58; // 80036C24
L_80036C28:;
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036C28
  fcmp(c,0,c->f[0],c->f[1]); // 80036C2C
  if (!crb(c,2)) { goto L_80036C58; } // 80036C30
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80036C34
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 80036C38
  c->r[0]=R32(c->r[6]+0x00000000u); // 80036C3C
  W32(c->r[1]+0x00000030u,c->r[6]); // 80036C40
  c->r[0]=c->r[0]|c->r[3]; // 80036C44
  W32(c->r[1]+0x00000034u,c->r[5]); // 80036C48
  W32(c->r[1]+0x00000018u,c->r[6]); // 80036C4C
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80036C50
  W32(c->r[6]+0x00000000u,c->r[0]); // 80036C54
L_80036C58:;
  c->r[0]=R32(c->r[1]+0x00000144u); // 80036C58
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 80036C5C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 80036C60
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 80036C64
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 80036C68
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 80036C6C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 80036C70
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,28,ea,0,0);} // 80036C74
  {uint32_t ea=c->r[1]+0x00000100u; c->f[28]=RF64(ea);} // 80036C78
  c->r[31]=R32(c->r[1]+0x000000FCu); // 80036C7C
  c->r[30]=R32(c->r[1]+0x000000F8u); // 80036C80
  c->lr=c->r[0]; // 80036C84
  c->r[1]=c->r[1]+0x00000140u; // 80036C88
  return; // 80036C8C
}

// fn_80036C90
void f_80036C90(Ctx* __restrict c) {
  trace_call(0x80036C90u);
  c->r[0]=R32(c->r[3]+0x000001ACu); // 80036C90
  {uint32_t ea=c->r[3]+0x000001B8u; WF32(ea,c->f[1]);} // 80036C94
  cmps(c,0,(int32_t)c->r[0],0); // 80036C98
  if (crb(c,2)) { goto L_80036CF4; } // 80036C9C
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80036CA0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80036CA4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 80036CA8
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80036CAC
  cmps(c,0,(int32_t)c->r[0],0); // 80036CB0
  c->f[5]=c->f[0]; // 80036CB4
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[4]; // 80036CB8
  c->f[5]=(c->f[5]>=0.0)?c->f[1]:c->f[4]; // 80036CBC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80036CC0
  c->f[6]=c->ps1[6]=S(c->f[5]-c->f[3]); // 80036CC4
  c->f[2]=(c->f[2]>=0.0)?c->f[3]:c->f[0]; // 80036CC8
  c->f[6]=(c->f[6]>=0.0)?c->f[3]:c->f[5]; // 80036CCC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 80036CD0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[6]);} // 80036CD4
  if (crb(c,2)) return; // 80036CD8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 80036CDC
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[4]; // 80036CE0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80036CE4
  c->f[1]=(c->f[1]>=0.0)?c->f[3]:c->f[0]; // 80036CE8
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[1]);} // 80036CEC
  return; // 80036CF0
L_80036CF4:;
  {uint32_t ea=c->r[2]+0xFFFF84A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80036CF4
  {uint32_t ea=c->r[2]+0xFFFF84A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80036CF8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 80036CFC
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[3]; // 80036D00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80036D04
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 80036D08
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80036D0C
  return; // 80036D10
}

// fn_80036D14
void f_80036D14(Ctx* __restrict c) {
  trace_call(0x80036D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036D14
  c->r[0]=c->lr; // 80036D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80036D1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80036D20
  c->r[31]=c->r[3]|c->r[3]; // 80036D24
  c->lr=0x80036D2Cu; f_800120E4(c); // 80036D28
  c->r[3]=0u+0x80380000u; // 80036D2C
  c->r[0]=0u+0x00000007u; // 80036D30
  c->r[3]=c->r[3]+0x00003B28u; // 80036D34
  c->r[4]=0u+0x00000006u; // 80036D38
  W32(c->r[31]+0x00000014u,c->r[3]); // 80036D3C
  c->r[3]=c->r[31]|c->r[31]; // 80036D40
  W32(c->r[31]+0x00000138u,c->r[4]); // 80036D44
  W32(c->r[31]+0x00000078u,c->r[0]); // 80036D48
  W32(c->r[31]+0x0000015Cu,c->r[0]); // 80036D4C
  c->lr=0x80036D54u; f_80036D6C(c); // 80036D50
  c->r[3]=c->r[31]|c->r[31]; // 80036D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80036D5C
  c->lr=c->r[0]; // 80036D60
  c->r[1]=c->r[1]+0x00000010u; // 80036D64
  return; // 80036D68
}

// fn_80036D6C
void f_80036D6C(Ctx* __restrict c) {
  trace_call(0x80036D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036D6C
  c->r[5]=0u+0x803D0000u; // 80036D70
  c->r[4]=0u+0x803C0000u; // 80036D74
  c->r[12]=0u+0x00000021u; // 80036D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80036D7C
  c->r[5]=c->r[5]+0xFFFFF4F8u; // 80036D80
  c->r[4]=c->r[4]+0x00001FC8u; // 80036D84
  c->r[11]=0u+0x00000022u; // 80036D88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80036D8C
  c->r[10]=0u+0x00000000u; // 80036D90
  c->r[9]=0u+0x00000001u; // 80036D94
  c->r[8]=0u+0x00000027u; // 80036D98
  c->r[0]=R32(c->r[3]+0x00000150u); // 80036D9C
  c->r[7]=0u+0x00000060u; // 80036DA0
  c->r[30]=R32(c->r[5]+0x00000034u); // 80036DA4
  c->r[6]=0u+0x00000058u; // 80036DA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80036DAC
  c->r[5]=0u+0x00000050u; // 80036DB0
  c->r[31]=c->r[0]|0x00006EB0u; // 80036DB4
  W32(c->r[3]+0x0000016Cu,c->r[30]); // 80036DB8
  c->r[0]=c->r[4]+0x0000011Cu; // 80036DBC
  c->r[4]=0u+0x00000051u; // 80036DC0
  W32(c->r[3]+0x00000168u,c->r[30]); // 80036DC4
  W32(c->r[3]+0x00000150u,c->r[31]); // 80036DC8
  W32(c->r[3]+0x000006FCu,c->r[12]); // 80036DCC
  W32(c->r[3]+0x00000700u,c->r[11]); // 80036DD0
  W16(c->r[3]+0x00000164u,c->r[10]); // 80036DD4
  W32(c->r[3]+0x00000160u,c->r[9]); // 80036DD8
  W32(c->r[3]+0x000005E0u,c->r[8]); // 80036DDC
  W32(c->r[3]+0x000005E4u,c->r[7]); // 80036DE0
  W32(c->r[3]+0x000005E8u,c->r[6]); // 80036DE4
  W32(c->r[3]+0x000005F0u,c->r[5]); // 80036DE8
  W32(c->r[3]+0x000005F8u,c->r[4]); // 80036DEC
  W32(c->r[3]+0x00000440u,c->r[0]); // 80036DF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036DF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80036DF8
  c->r[1]=c->r[1]+0x00000010u; // 80036DFC
  return; // 80036E00
}

// fn_80036E04
void f_80036E04(Ctx* __restrict c) {
  trace_call(0x80036E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036E04
  c->r[0]=c->lr; // 80036E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80036E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80036E10
  c->r[31]=c->r[3]|c->r[3]; // 80036E14
  c->lr=0x80036E1Cu; f_800135AC(c); // 80036E18
  c->r[3]=c->r[31]|c->r[31]; // 80036E1C
  c->lr=0x80036E24u; f_80036D6C(c); // 80036E20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80036E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80036E28
  c->lr=c->r[0]; // 80036E2C
  c->r[1]=c->r[1]+0x00000010u; // 80036E30
  return; // 80036E34
}

// fn_80036E38
void f_80036E38(Ctx* __restrict c) {
  trace_call(0x80036E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036E38
  c->r[0]=c->lr; // 80036E3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80036E40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80036E44
  c->r[31]=c->r[5]|c->r[5]; // 80036E48
  W32(c->r[1]+0x00000018u,c->r[30]); // 80036E4C
  c->r[30]=c->r[4]|c->r[4]; // 80036E50
  W32(c->r[1]+0x00000014u,c->r[29]); // 80036E54
  c->r[29]=c->r[3]|c->r[3]; // 80036E58
  c->r[3]=0u+0x000007C0u; // 80036E5C
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 80036E60
  c->lr=0x80036E68u; f_8036AB9C(c); // 80036E64
  cmps(c,0,(int32_t)c->r[3],0); // 80036E68
  if (crb(c,2)) { goto L_80036E80; } // 80036E6C
  c->r[4]=c->r[29]|c->r[29]; // 80036E70
  c->r[5]=c->r[30]|c->r[30]; // 80036E74
  c->r[6]=c->r[31]|c->r[31]; // 80036E78
  c->lr=0x80036E80u; f_80036D14(c); // 80036E7C
L_80036E80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80036E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80036E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80036E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80036E8C
  c->lr=c->r[0]; // 80036E90
  c->r[1]=c->r[1]+0x00000020u; // 80036E94
  return; // 80036E98
}

// fn_80036E9C
void f_80036E9C(Ctx* __restrict c) {
  trace_call(0x80036E9Cu);
  c->r[5]=0u+0x80370000u; // 80036E9C
  c->r[6]=0u+0x80030000u; // 80036EA0
  c->r[5]=c->r[5]+0x00001ED8u; // 80036EA4
  c->r[4]=0u+0x00000004u; // 80036EA8
  c->r[6]=c->r[6]+0x00006E38u; // 80036EAC
  f_80337FC8(c); return; // 80036EB0
}

// fn_80036EB4
void f_80036EB4(Ctx* __restrict c) {
  trace_call(0x80036EB4u);
  c->r[5]=0u+0x80370000u; // 80036EB4
  c->r[4]=0u+0x00000004u; // 80036EB8
  c->r[5]=c->r[5]+0x00001ED8u; // 80036EBC
  f_803386E0(c); return; // 80036EC0
}

// fn_80036EC4
void f_80036EC4(Ctx* __restrict c) {
  trace_call(0x80036EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80036EC4
  c->r[0]=c->lr; // 80036EC8
  c->r[6]=0u+0x00000000u; // 80036ECC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80036ED0
  c->r[0]=c->r[6]|0x000000FFu; // 80036ED4
  c->r[5]=c->r[6]|0x00000FE7u; // 80036ED8
  c->r[4]=c->r[6]|0x38000000u; // 80036EDC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80036EE0
  c->r[28]=0u+0x80380000u; // 80036EE4
  c->r[31]=c->r[3]|c->r[3]; // 80036EE8
  c->r[29]=c->r[1]+0x00000008u; // 80036EEC
  c->r[28]=c->r[28]+0x00003658u; // 80036EF0
  c->r[27]=0u+0x00000000u; // 80036EF4
  c->r[30]=0u+0x00000001u; // 80036EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80036EFC
  c->r[0]=c->r[6]|0xFF000000u; // 80036F00
  W32(c->r[1]+0x00000008u,c->r[5]); // 80036F04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80036F08
  W32(c->r[1]+0x00000010u,c->r[0]); // 80036F0C
L_80036F10:;
  c->r[0]=rotl(c->r[27],29)&0x1FFFFFFCu; // 80036F10
  c->r[4]=rotl(c->r[27],0)&0x0000001Fu; // 80036F14
  c->r[0]=R32(c->r[29]+c->r[0]); // 80036F18
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80036F1C
  c->r[0]=c->r[3]&c->r[0]; // 80036F20
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80036F24
  if (crb(c,2)) { goto L_80036F44; } // 80036F28
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80036F2C
  c->r[3]=c->r[31]|c->r[31]; // 80036F30
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80036F34
  c->r[4]=c->r[27]|c->r[27]; // 80036F38
  c->r[7]=R32(c->r[28]+0x00000000u); // 80036F3C
  c->lr=0x80036F44u; f_800377BC(c); // 80036F40
L_80036F44:;
  c->r[27]=c->r[27]+0x00000001u; // 80036F44
  c->r[28]=c->r[28]+0x00000004u; // 80036F48
  cmps(c,0,(int32_t)c->r[27],88); // 80036F4C
  if (crb(c,0)) { IRQCHK(c); goto L_80036F10; } // 80036F50
  c->r[3]=0u+0x80380000u; // 80036F54
  c->r[29]=c->r[1]+0x00000008u; // 80036F58
  c->r[3]=c->r[3]+0x00003658u; // 80036F5C
  c->r[27]=0u+0x00000058u; // 80036F60
  c->r[28]=c->r[3]+0x00000160u; // 80036F64
  c->r[30]=0u+0x00000001u; // 80036F68
L_80036F6C:;
  c->r[0]=rotl(c->r[27],29)&0x1FFFFFFCu; // 80036F6C
  c->r[4]=rotl(c->r[27],0)&0x0000001Fu; // 80036F70
  c->r[0]=R32(c->r[29]+c->r[0]); // 80036F74
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80036F78
  c->r[0]=c->r[3]&c->r[0]; // 80036F7C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); cr0(c,c->r[0]); // 80036F80
  if (crb(c,2)) { goto L_80036FA0; } // 80036F84
  c->r[5]=R32(c->r[13]+0xFFFF8040u); // 80036F88
  c->r[3]=c->r[31]|c->r[31]; // 80036F8C
  c->r[6]=R32(c->r[13]+0xFFFF8044u); // 80036F90
  c->r[4]=c->r[27]|c->r[27]; // 80036F94
  c->r[7]=R32(c->r[28]+0x00000000u); // 80036F98
  c->lr=0x80036FA0u; f_800377BC(c); // 80036F9C
L_80036FA0:;
  c->r[27]=c->r[27]+0x00000001u; // 80036FA0
  c->r[28]=c->r[28]+0x00000004u; // 80036FA4
  cmps(c,0,(int32_t)c->r[27],116); // 80036FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80036F6C; } // 80036FAC
  c->r[29]=0u+0x80370000u; // 80036FB0
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80036FB4
  c->r[29]=c->r[29]+0x00001ED8u; // 80036FB8
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80036FBC
  c->r[3]=c->r[31]|c->r[31]; // 80036FC0
  c->r[4]=0u+0x0000000Eu; // 80036FC4
  c->r[7]=c->r[29]+0x0000001Eu; // 80036FC8
  c->lr=0x80036FD0u; f_800377BC(c); // 80036FCC
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80036FD0
  c->r[3]=c->r[31]|c->r[31]; // 80036FD4
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80036FD8
  c->r[7]=c->r[29]+0x00000024u; // 80036FDC
  c->r[4]=0u+0x0000000Fu; // 80036FE0
  c->lr=0x80036FE8u; f_800377BC(c); // 80036FE4
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80036FE8
  c->r[3]=c->r[31]|c->r[31]; // 80036FEC
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80036FF0
  c->r[7]=c->r[29]+0x0000002Cu; // 80036FF4
  c->r[4]=0u+0x00000010u; // 80036FF8
  c->lr=0x80037000u; f_800377BC(c); // 80036FFC
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037000
  c->r[3]=c->r[31]|c->r[31]; // 80037004
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037008
  c->r[7]=c->r[29]+0x0000003Au; // 8003700C
  c->r[4]=0u+0x00000011u; // 80037010
  c->lr=0x80037018u; f_800377BC(c); // 80037014
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037018
  c->r[3]=c->r[31]|c->r[31]; // 8003701C
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037020
  c->r[7]=c->r[29]+0x00000048u; // 80037024
  c->r[4]=0u+0x00000012u; // 80037028
  c->lr=0x80037030u; f_800377BC(c); // 8003702C
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037030
  c->r[3]=c->r[31]|c->r[31]; // 80037034
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037038
  c->r[7]=c->r[29]+0x00000050u; // 8003703C
  c->r[4]=0u+0x00000013u; // 80037040
  c->lr=0x80037048u; f_800377BC(c); // 80037044
  c->r[30]=0u+0x80380000u; // 80037048
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 8003704C
  c->r[30]=c->r[30]+0x00003658u; // 80037050
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037054
  c->r[7]=R32(c->r[30]+0x000001A0u); // 80037058
  c->r[3]=c->r[31]|c->r[31]; // 8003705C
  c->r[4]=0u+0x00000068u; // 80037060
  c->lr=0x80037068u; f_800377BC(c); // 80037064
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037068
  c->r[3]=c->r[31]|c->r[31]; // 8003706C
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037070
  c->r[4]=0u+0x00000069u; // 80037074
  c->r[7]=R32(c->r[30]+0x000001A4u); // 80037078
  c->lr=0x80037080u; f_800377BC(c); // 8003707C
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037080
  c->r[3]=c->r[31]|c->r[31]; // 80037084
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 80037088
  c->r[7]=c->r[29]+0x0000005Au; // 8003708C
  c->r[4]=0u+0x00000074u; // 80037090
  c->lr=0x80037098u; f_800377BC(c); // 80037094
  c->r[5]=R32(c->r[13]+0xFFFF8080u); // 80037098
  c->r[3]=c->r[31]|c->r[31]; // 8003709C
  c->r[6]=R32(c->r[13]+0xFFFF8084u); // 800370A0
  c->r[7]=c->r[29]+0x00000069u; // 800370A4
  c->r[4]=0u+0x00000075u; // 800370A8
  c->lr=0x800370B0u; f_800377BC(c); // 800370AC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800370B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800370B4
  c->lr=c->r[0]; // 800370B8
  c->r[1]=c->r[1]+0x00000030u; // 800370BC
  return; // 800370C0
}

// fn_800370C4
void f_800370C4(Ctx* __restrict c) {
  trace_call(0x800370C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800370C4
  c->r[0]=c->lr; // 800370C8
  cmps(c,0,(int32_t)c->r[3],0); // 800370CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800370D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800370D4
  c->r[31]=c->r[3]|c->r[3]; // 800370D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800370DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800370E0
  c->r[29]=c->r[4]|c->r[4]; // 800370E4
  if (crb(c,2)) { goto L_80037234; } // 800370E8
  if (crb(c,2)) { goto L_80037180; } // 800370EC
  c->r[4]=0u+0x80010000u; // 800370F0
  c->r[5]=0u+0x00000058u; // 800370F4
  c->r[4]=c->r[4]+0x00001400u; // 800370F8
  c->r[6]=0u+0x00000002u; // 800370FC
  c->r[3]=c->r[3]+0x00000620u; // 80037100
  c->lr=0x80037108u; f_800C2C84(c); // 80037104
  c->r[3]=addc(c,c->r[31],0x00000444u,0); cr0(c,c->r[3]); // 80037108
  if (crb(c,2)) { goto L_80037128; } // 8003710C
  c->r[4]=0u+0x80010000u; // 80037110
  c->r[3]=c->r[3]+0x0000000Cu; // 80037114
  c->r[4]=c->r[4]+0x000014F0u; // 80037118
  c->r[5]=0u+0x0000003Cu; // 8003711C
  c->r[6]=0u+0x00000006u; // 80037120
  c->lr=0x80037128u; f_800C2C84(c); // 80037124
L_80037128:;
  c->r[3]=addc(c,c->r[31],0x000001D0u,0); cr0(c,c->r[3]); // 80037128
  if (crb(c,2)) { goto L_8003716C; } // 8003712C
  c->r[30]=addc(c,c->r[3],0x00000078u,0); cr0(c,c->r[30]); // 80037130
  if (crb(c,2)) { goto L_8003716C; } // 80037134
  if (crb(c,2)) { goto L_8003716C; } // 80037138
  c->r[4]=R32(c->r[30]+0x00000000u); // 8003713C
  cmps(c,0,(int32_t)c->r[4],0); // 80037140
  if (crb(c,2)) { goto L_8003715C; } // 80037144
  c->r[3]=R32(c->r[30]+0x00000010u); // 80037148
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003714C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80037150
  c->ctr=c->r[12]; // 80037154
  if (true) { c->lr=0x8003715Cu; dispatch(c,c->ctr); } // 80037158
L_8003715C:;
  c->r[0]=0u+0x00000000u; // 8003715C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80037160
  W32(c->r[30]+0x00000004u,c->r[0]); // 80037164
  W32(c->r[30]+0x00000008u,c->r[0]); // 80037168
L_8003716C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003716C
  if (crb(c,2)) { goto L_80037180; } // 80037170
  c->r[3]=c->r[31]|c->r[31]; // 80037174
  c->r[4]=0u+0x00000000u; // 80037178
  c->lr=0x80037180u; f_8030BAE0(c); // 8003717C
L_80037180:;
  cmps(c,0,(int32_t)c->r[29],0); // 80037180
  if (!crb(c,1)) { goto L_80037234; } // 80037184
  c->lr=0x8003718Cu; f_8028B53C(c); // 80037188
  c->r[30]=0u+0x804B0000u; // 8003718C
  c->r[30]=c->r[30]+0xFFFFC800u; // 80037190
  c->r[3]=c->r[30]|c->r[30]; // 80037194
  c->lr=0x8003719Cu; f_8024B0E0(c); // 80037198
  cmps(c,0,(int32_t)c->r[31],0); // 8003719C
  if (!crb(c,2)) { goto L_800371B0; } // 800371A0
  c->r[3]=c->r[30]|c->r[30]; // 800371A4
  c->lr=0x800371ACu; f_8024B1C0(c); // 800371A8
  goto L_80037234; // 800371AC
L_800371B0:;
  c->r[0]=0u+0x80000000u; // 800371B0
  cmpu(c,0,c->r[31],c->r[0]); // 800371B4
  if (crb(c,0)) { goto L_800371D4; } // 800371B8
  c->r[3]=0u+0x81800000u; // 800371BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800371C0
  cmpu(c,0,c->r[31],c->r[0]); // 800371C4
  if (!crb(c,0)) { goto L_800371D4; } // 800371C8
  c->r[29]=0u+0x00000000u; // 800371CC
  goto L_80037214; // 800371D0
L_800371D4:;
  c->r[0]=0u+0x90000000u; // 800371D4
  cmpu(c,0,c->r[31],c->r[0]); // 800371D8
  if (crb(c,0)) { goto L_800371F4; } // 800371DC
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800371E0
  cmpu(c,0,c->r[31],c->r[0]); // 800371E4
  if (!crb(c,0)) { goto L_800371F4; } // 800371E8
  c->r[29]=0u+0x00000001u; // 800371EC
  goto L_80037214; // 800371F0
L_800371F4:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800371F4
  cmpu(c,0,c->r[31],c->r[0]); // 800371F8
  if (crb(c,0)) { goto L_80037214; } // 800371FC
  c->r[3]=0u+0x98000000u; // 80037200
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037204
  cmpu(c,0,c->r[31],c->r[0]); // 80037208
  if (!crb(c,0)) { goto L_80037214; } // 8003720C
  c->r[29]=0u+0x00000002u; // 80037210
L_80037214:;
  c->r[3]=0u+0x804B0000u; // 80037214
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80037218
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8003721C
  c->r[4]=c->r[31]|c->r[31]; // 80037220
  c->r[3]=R32(c->r[3]+c->r[0]); // 80037224
  c->lr=0x8003722Cu; f_8023B550(c); // 80037228
  c->r[3]=c->r[30]|c->r[30]; // 8003722C
  c->lr=0x80037234u; f_8024B1C0(c); // 80037230
L_80037234:;
  c->r[3]=c->r[31]|c->r[31]; // 80037234
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80037238
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003723C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80037240
  c->r[0]=R32(c->r[1]+0x00000024u); // 80037244
  c->lr=c->r[0]; // 80037248
  c->r[1]=c->r[1]+0x00000020u; // 8003724C
  return; // 80037250
}

// fn_80037254
void f_80037254(Ctx* __restrict c) {
  trace_call(0x80037254u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037254
  c->r[0]=c->lr; // 80037258
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003725C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80037260
  c->r[31]=0u+0x80380000u; // 80037264
  c->r[31]=c->r[31]+0x00003B90u; // 80037268
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003726C
  c->r[30]=0u+0x803C0000u; // 80037270
  c->r[30]=c->r[30]+0x00002658u; // 80037274
  W32(c->r[1]+0x00000014u,c->r[29]); // 80037278
  c->r[29]=0u+0x00000000u; // 8003727C
L_80037280:;
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80037280
  c->r[5]=0u+0x00000000u; // 80037284
  c->r[4]=R32(c->r[31]+0x00000000u); // 80037288
  c->lr=0x80037290u; f_8031E640(c); // 8003728C
  c->r[29]=c->r[29]+0x00000001u; // 80037290
  W32(c->r[30]+0x00000000u,c->r[3]); // 80037294
  cmpu(c,0,c->r[29],0x00000030u); // 80037298
  c->r[31]=c->r[31]+0x00000004u; // 8003729C
  c->r[30]=c->r[30]+0x00000004u; // 800372A0
  if (crb(c,0)) { IRQCHK(c); goto L_80037280; } // 800372A4
  c->r[0]=0u+0x00000001u; // 800372A8
  W32(c->r[13]+0xFFFF94C0u,c->r[0]); // 800372AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800372B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800372B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800372B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800372BC
  c->lr=c->r[0]; // 800372C0
  c->r[1]=c->r[1]+0x00000020u; // 800372C4
  return; // 800372C8
}

// fn_800372CC
void f_800372CC(Ctx* __restrict c) {
  trace_call(0x800372CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800372CC
  c->r[0]=c->lr; // 800372D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800372D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800372D8
  c->r[31]=0u+0x803C0000u; // 800372DC
  c->r[31]=c->r[31]+0x00002658u; // 800372E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800372E4
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 800372E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800372EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800372F0
  c->r[28]=0u+0x00000000u; // 800372F4
L_800372F8:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 800372F8
  c->r[3]=c->r[29]|c->r[29]; // 800372FC
  c->lr=0x80037304u; f_8024B0E0(c); // 80037300
  c->r[4]=R32(c->r[31]+0x00000000u); // 80037304
  cmpu(c,0,c->r[4],c->r[30]); // 80037308
  if (!crb(c,2)) { goto L_8003731C; } // 8003730C
  c->r[3]=c->r[29]|c->r[29]; // 80037310
  c->lr=0x80037318u; f_8024B1C0(c); // 80037314
  goto L_80037354; // 80037318
L_8003731C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003731C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037320
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80037324
  cmpu(c,0,c->r[0],0x00000001u); // 80037328
  if (!crb(c,2)) { goto L_80037348; } // 8003732C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80037330
  cmpu(c,0,c->r[0],0x00000001u); // 80037334
  if (!crb(c,2)) { goto L_80037348; } // 80037338
  c->r[3]=c->r[29]|c->r[29]; // 8003733C
  c->r[4]=c->r[31]|c->r[31]; // 80037340
  c->lr=0x80037348u; f_8031EEDC(c); // 80037344
L_80037348:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 80037348
  c->r[3]=c->r[29]|c->r[29]; // 8003734C
  c->lr=0x80037354u; f_8024B1C0(c); // 80037350
L_80037354:;
  c->r[28]=c->r[28]+0x00000001u; // 80037354
  c->r[31]=c->r[31]+0x00000004u; // 80037358
  cmpu(c,0,c->r[28],0x00000030u); // 8003735C
  if (crb(c,0)) { IRQCHK(c); goto L_800372F8; } // 80037360
  c->r[0]=0u+0x00000000u; // 80037364
  W32(c->r[13]+0xFFFF94C0u,c->r[0]); // 80037368
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003736C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80037370
  c->r[29]=R32(c->r[1]+0x00000014u); // 80037374
  c->r[28]=R32(c->r[1]+0x00000010u); // 80037378
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003737C
  c->lr=c->r[0]; // 80037380
  c->r[1]=c->r[1]+0x00000020u; // 80037384
  return; // 80037388
}

// fn_8003738C
void f_8003738C(Ctx* __restrict c) {
  trace_call(0x8003738Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003738C
  c->r[0]=c->lr; // 80037390
  c->r[3]=0u+0x803C0000u; // 80037394
  c->r[4]=0u+0x80010000u; // 80037398
  c->r[5]=0u+0x80010000u; // 8003739C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800373A0
  c->r[6]=0u+0x00000004u; // 800373A4
  c->r[3]=c->r[3]+0x00002658u; // 800373A8
  c->r[4]=c->r[4]+0xFFFF9804u; // 800373AC
  c->r[5]=c->r[5]+0xFFFF8BD8u; // 800373B0
  c->r[7]=0u+0x00000030u; // 800373B4
  c->lr=0x800373BCu; f_800C2B8C(c); // 800373B8
  c->r[4]=0u+0x80030000u; // 800373BC
  c->r[5]=0u+0x803C0000u; // 800373C0
  c->r[4]=c->r[4]+0x000073E4u; // 800373C4
  c->r[3]=0u+0x00000000u; // 800373C8
  c->r[5]=c->r[5]+0x00002648u; // 800373CC
  c->lr=0x800373D4u; f_800C2A60(c); // 800373D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800373D4
  c->lr=c->r[0]; // 800373D8
  c->r[1]=c->r[1]+0x00000010u; // 800373DC
  return; // 800373E0
}

// fn_800373E4
void f_800373E4(Ctx* __restrict c) {
  trace_call(0x800373E4u);
  c->r[3]=0u+0x803C0000u; // 800373E4
  c->r[4]=0u+0x80010000u; // 800373E8
  c->r[3]=c->r[3]+0x00002658u; // 800373EC
  c->r[5]=0u+0x00000004u; // 800373F0
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 800373F4
  c->r[6]=0u+0x00000030u; // 800373F8
  f_800C2C84(c); return; // 800373FC
}

// fn_80037400
void f_80037400(Ctx* __restrict c) {
  trace_call(0x80037400u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037400
  c->r[0]=c->lr; // 80037404
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80037408
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8003740C
  c->r[31]=0u+0x803C0000u; // 80037410
  c->r[31]=c->r[31]+0x00002724u; // 80037414
  W32(c->r[1]+0x00000098u,c->r[30]); // 80037418
  c->r[30]=0u+0x80380000u; // 8003741C
  c->r[30]=c->r[30]+0x00003C50u; // 80037420
  W32(c->r[1]+0x00000094u,c->r[29]); // 80037424
  c->r[29]=0u+0x00000000u; // 80037428
L_8003742C:;
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003742C
  c->r[5]=0u+0x00000000u; // 80037430
  c->r[4]=R32(c->r[30]+0x00000000u); // 80037434
  c->lr=0x8003743Cu; f_8031E640(c); // 80037438
  c->r[29]=c->r[29]+0x00000001u; // 8003743C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80037440
  cmpu(c,0,c->r[29],0x0000002Du); // 80037444
  c->r[30]=c->r[30]+0x00000004u; // 80037448
  c->r[31]=c->r[31]+0x00000004u; // 8003744C
  if (crb(c,0)) { IRQCHK(c); goto L_8003742C; } // 80037450
  c->r[30]=0u+0x803C0000u; // 80037454
  c->r[29]=0u+0x00000000u; // 80037458
  c->r[30]=c->r[30]+0x000027E8u; // 8003745C
  c->r[31]=0u+0x80370000u; // 80037460
L_80037464:;
  c->r[3]=c->r[1]+0x00000008u; // 80037464
  c->r[5]=c->r[31]+0x000024DCu; // 80037468
  c->r[6]=c->r[29]+0x00000001u; // 8003746C
  c->r[4]=0u+0x00000080u; // 80037470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80037474
  c->lr=0x8003747Cu; f_8000D29C(c); // 80037478
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003747C
  c->r[4]=c->r[1]+0x00000008u; // 80037480
  c->r[5]=0u+0x00000000u; // 80037484
  c->lr=0x8003748Cu; f_8031E640(c); // 80037488
  c->r[29]=c->r[29]+0x00000001u; // 8003748C
  W32(c->r[30]+0x00000000u,c->r[3]); // 80037490
  cmpu(c,0,c->r[29],0x00000004u); // 80037494
  c->r[30]=c->r[30]+0x00000004u; // 80037498
  if (crb(c,0)) { IRQCHK(c); goto L_80037464; } // 8003749C
  c->r[0]=0u+0x00000001u; // 800374A0
  W32(c->r[13]+0xFFFF94C8u,c->r[0]); // 800374A4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800374A8
  c->r[30]=R32(c->r[1]+0x00000098u); // 800374AC
  c->r[29]=R32(c->r[1]+0x00000094u); // 800374B0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800374B4
  c->lr=c->r[0]; // 800374B8
  c->r[1]=c->r[1]+0x000000A0u; // 800374BC
  return; // 800374C0
}

// fn_800374C4
void f_800374C4(Ctx* __restrict c) {
  trace_call(0x800374C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800374C4
  c->r[0]=c->lr; // 800374C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800374CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800374D0
  c->r[31]=0u+0x803C0000u; // 800374D4
  c->r[31]=c->r[31]+0x00002724u; // 800374D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800374DC
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 800374E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800374E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800374E8
  c->r[28]=0u+0x00000000u; // 800374EC
L_800374F0:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 800374F0
  c->r[3]=c->r[29]|c->r[29]; // 800374F4
  c->lr=0x800374FCu; f_8024B0E0(c); // 800374F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800374FC
  cmpu(c,0,c->r[4],c->r[30]); // 80037500
  if (!crb(c,2)) { goto L_80037514; } // 80037504
  c->r[3]=c->r[29]|c->r[29]; // 80037508
  c->lr=0x80037510u; f_8024B1C0(c); // 8003750C
  goto L_8003754C; // 80037510
L_80037514:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80037514
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037518
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003751C
  cmpu(c,0,c->r[0],0x00000001u); // 80037520
  if (!crb(c,2)) { goto L_80037540; } // 80037524
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80037528
  cmpu(c,0,c->r[0],0x00000001u); // 8003752C
  if (!crb(c,2)) { goto L_80037540; } // 80037530
  c->r[3]=c->r[29]|c->r[29]; // 80037534
  c->r[4]=c->r[31]|c->r[31]; // 80037538
  c->lr=0x80037540u; f_8031EEDC(c); // 8003753C
L_80037540:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 80037540
  c->r[3]=c->r[29]|c->r[29]; // 80037544
  c->lr=0x8003754Cu; f_8024B1C0(c); // 80037548
L_8003754C:;
  c->r[28]=c->r[28]+0x00000001u; // 8003754C
  c->r[31]=c->r[31]+0x00000004u; // 80037550
  cmpu(c,0,c->r[28],0x0000002Du); // 80037554
  if (crb(c,0)) { IRQCHK(c); goto L_800374F0; } // 80037558
  c->r[31]=0u+0x803C0000u; // 8003755C
  c->r[28]=0u+0x00000000u; // 80037560
  c->r[31]=c->r[31]+0x000027E8u; // 80037564
L_80037568:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 80037568
  c->r[3]=c->r[29]|c->r[29]; // 8003756C
  c->lr=0x80037574u; f_8024B0E0(c); // 80037570
  c->r[4]=R32(c->r[31]+0x00000000u); // 80037574
  cmpu(c,0,c->r[4],c->r[30]); // 80037578
  if (!crb(c,2)) { goto L_8003758C; } // 8003757C
  c->r[3]=c->r[29]|c->r[29]; // 80037580
  c->lr=0x80037588u; f_8024B1C0(c); // 80037584
  goto L_800375C4; // 80037588
L_8003758C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003758C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037590
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80037594
  cmpu(c,0,c->r[0],0x00000001u); // 80037598
  if (!crb(c,2)) { goto L_800375B8; } // 8003759C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800375A0
  cmpu(c,0,c->r[0],0x00000001u); // 800375A4
  if (!crb(c,2)) { goto L_800375B8; } // 800375A8
  c->r[3]=c->r[29]|c->r[29]; // 800375AC
  c->r[4]=c->r[31]|c->r[31]; // 800375B0
  c->lr=0x800375B8u; f_8031EEDC(c); // 800375B4
L_800375B8:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 800375B8
  c->r[3]=c->r[29]|c->r[29]; // 800375BC
  c->lr=0x800375C4u; f_8024B1C0(c); // 800375C0
L_800375C4:;
  c->r[28]=c->r[28]+0x00000001u; // 800375C4
  c->r[31]=c->r[31]+0x00000004u; // 800375C8
  cmpu(c,0,c->r[28],0x00000004u); // 800375CC
  if (crb(c,0)) { IRQCHK(c); goto L_80037568; } // 800375D0
  c->r[0]=0u+0x00000000u; // 800375D4
  W32(c->r[13]+0xFFFF94C8u,c->r[0]); // 800375D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800375DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800375E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800375E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800375E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800375EC
  c->lr=c->r[0]; // 800375F0
  c->r[1]=c->r[1]+0x00000020u; // 800375F4
  return; // 800375F8
}

// fn_800375FC
void f_800375FC(Ctx* __restrict c) {
  trace_call(0x800375FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800375FC
  c->r[0]=c->lr; // 80037600
  c->r[6]=0u+0x00000004u; // 80037604
  c->r[7]=0u+0x0000002Du; // 80037608
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003760C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80037610
  c->r[31]=0u+0x80010000u; // 80037614
  c->r[5]=c->r[31]+0xFFFF8BD8u; // 80037618
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003761C
  c->r[30]=0u+0x80010000u; // 80037620
  c->r[4]=c->r[30]+0xFFFF9804u; // 80037624
  W32(c->r[1]+0x00000014u,c->r[29]); // 80037628
  c->r[29]=0u+0x803C0000u; // 8003762C
  c->r[29]=c->r[29]+0x00002718u; // 80037630
  c->r[3]=c->r[29]+0x0000000Cu; // 80037634
  c->lr=0x8003763Cu; f_800C2B8C(c); // 80037638
  c->r[4]=0u+0x80030000u; // 8003763C
  c->r[5]=c->r[29]+0x00000000u; // 80037640
  c->r[4]=c->r[4]+0x00007698u; // 80037644
  c->r[3]=0u+0x00000000u; // 80037648
  c->lr=0x80037650u; f_800C2A60(c); // 8003764C
  c->r[3]=c->r[29]+0x000000D0u; // 80037650
  c->r[4]=c->r[30]+0xFFFF9804u; // 80037654
  c->r[5]=c->r[31]+0xFFFF8BD8u; // 80037658
  c->r[6]=0u+0x00000004u; // 8003765C
  c->r[7]=0u+0x00000004u; // 80037660
  c->lr=0x80037668u; f_800C2B8C(c); // 80037664
  c->r[4]=0u+0x80030000u; // 80037668
  c->r[5]=c->r[29]+0x000000C0u; // 8003766C
  c->r[4]=c->r[4]+0x000076B4u; // 80037670
  c->r[3]=0u+0x00000000u; // 80037674
  c->lr=0x8003767Cu; f_800C2A60(c); // 80037678
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003767C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80037680
  c->r[30]=R32(c->r[1]+0x00000018u); // 80037684
  c->r[29]=R32(c->r[1]+0x00000014u); // 80037688
  c->lr=c->r[0]; // 8003768C
  c->r[1]=c->r[1]+0x00000020u; // 80037690
  return; // 80037694
}

// fn_80037698
void f_80037698(Ctx* __restrict c) {
  trace_call(0x80037698u);
  c->r[3]=0u+0x803C0000u; // 80037698
  c->r[4]=0u+0x80010000u; // 8003769C
  c->r[3]=c->r[3]+0x00002724u; // 800376A0
  c->r[5]=0u+0x00000004u; // 800376A4
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 800376A8
  c->r[6]=0u+0x0000002Du; // 800376AC
  f_800C2C84(c); return; // 800376B0
}

// fn_800376B4
void f_800376B4(Ctx* __restrict c) {
  trace_call(0x800376B4u);
  c->r[3]=0u+0x803C0000u; // 800376B4
  c->r[4]=0u+0x80010000u; // 800376B8
  c->r[3]=c->r[3]+0x000027E8u; // 800376BC
  c->r[5]=0u+0x00000004u; // 800376C0
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 800376C4
  c->r[6]=0u+0x00000004u; // 800376C8
  f_800C2C84(c); return; // 800376CC
}

// fn_800376D0
void f_800376D0(Ctx* __restrict c) {
  trace_call(0x800376D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800376D0
  c->r[0]=c->lr; // 800376D4
  c->r[5]=0u+0x00000000u; // 800376D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800376DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800376E0
  c->r[31]=c->r[3]|c->r[3]; // 800376E4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800376E8
  c->lr=0x800376F0u; f_8031E640(c); // 800376EC
  c->r[0]=0u+0x00000001u; // 800376F0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800376F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800376F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800376FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80037700
  c->lr=c->r[0]; // 80037704
  c->r[1]=c->r[1]+0x00000010u; // 80037708
  return; // 8003770C
}

// fn_80037710
void f_80037710(Ctx* __restrict c) {
  trace_call(0x80037710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037710
  c->r[0]=c->lr; // 80037714
  W32(c->r[1]+0x00000024u,c->r[0]); // 80037718
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003771C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80037720
  W32(c->r[1]+0x00000014u,c->r[29]); // 80037724
  c->r[29]=c->r[3]|c->r[3]; // 80037728
  c->r[0]=R32(c->r[3]+0x00000004u); // 8003772C
  cmps(c,0,(int32_t)c->r[0],0); // 80037730
  if (crb(c,2)) { goto L_800377A0; } // 80037734
  c->r[31]=R32(c->r[13]+0xFFFFA510u); // 80037738
  c->r[3]=c->r[31]|c->r[31]; // 8003773C
  c->lr=0x80037744u; f_8024B0E0(c); // 80037740
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 80037744
  c->r[4]=R32(c->r[29]+0x00000000u); // 80037748
  cmpu(c,0,c->r[4],c->r[30]); // 8003774C
  if (!crb(c,2)) { goto L_80037760; } // 80037750
  c->r[3]=c->r[31]|c->r[31]; // 80037754
  c->lr=0x8003775Cu; f_8024B1C0(c); // 80037758
  goto L_80037798; // 8003775C
L_80037760:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80037760
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037764
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80037768
  cmpu(c,0,c->r[0],0x00000001u); // 8003776C
  if (!crb(c,2)) { goto L_8003778C; } // 80037770
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80037774
  cmpu(c,0,c->r[0],0x00000001u); // 80037778
  if (!crb(c,2)) { goto L_8003778C; } // 8003777C
  c->r[3]=c->r[31]|c->r[31]; // 80037780
  c->r[4]=c->r[29]|c->r[29]; // 80037784
  c->lr=0x8003778Cu; f_8031EEDC(c); // 80037788
L_8003778C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 8003778C
  c->r[3]=c->r[31]|c->r[31]; // 80037790
  c->lr=0x80037798u; f_8024B1C0(c); // 80037794
L_80037798:;
  c->r[0]=0u+0x00000000u; // 80037798
  W32(c->r[29]+0x00000004u,c->r[0]); // 8003779C
L_800377A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800377A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800377A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800377A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800377AC
  c->lr=c->r[0]; // 800377B0
  c->r[1]=c->r[1]+0x00000020u; // 800377B4
  return; // 800377B8
}

// fn_800377BC
void f_800377BC(Ctx* __restrict c) {
  trace_call(0x800377BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800377BC
  c->r[0]=c->lr; // 800377C0
  c->r[9]=c->r[5]|c->r[5]; // 800377C4
  c->r[5]=0u+0x80370000u; // 800377C8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800377CC
  c->r[0]=c->r[6]|c->r[6]; // 800377D0
  c->r[8]=c->r[7]|c->r[7]; // 800377D4
  c->r[6]=c->r[9]|c->r[9]; // 800377D8
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800377DC
  c->r[27]=c->r[3]|c->r[3]; // 800377E0
  c->r[28]=c->r[4]|c->r[4]; // 800377E4
  c->r[7]=c->r[0]|c->r[0]; // 800377E8
  c->r[3]=c->r[1]+0x00000008u; // 800377EC
  c->r[5]=c->r[5]+0x00002500u; // 800377F0
  c->r[4]=0u+0x00000080u; // 800377F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800377F8
  c->lr=0x80037800u; f_8000D29C(c); // 800377FC
  c->r[3]=0u+0x80390000u; // 80037800
  c->r[6]=c->r[1]+0x00000008u; // 80037804
  c->r[3]=c->r[3]+0xFFFFC268u; // 80037808
  c->r[4]=R32(c->r[3]+0x00000038u); // 8003780C
  goto L_80037844; // 80037810
L_80037814:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80037814
  c->r[0]=0u+0x00000001u; // 80037818
  cmpu(c,0,c->r[5],0x000000FFu); // 8003781C
  if (crb(c,1)) { goto L_80037828; } // 80037820
  c->r[0]=0u+0x00000000u; // 80037824
L_80037828:;
  cmps(c,0,(int32_t)c->r[0],0); // 80037828
  if (crb(c,2)) { goto L_80037834; } // 8003782C
  goto L_8003783C; // 80037830
L_80037834:;
  c->r[3]=R32(c->r[4]+0x00000010u); // 80037834
  c->r[5]=R8(c->r[3]+c->r[5]); // 80037838
L_8003783C:;
  W8(c->r[6]+0x00000000u,c->r[5]); // 8003783C
  c->r[6]=c->r[6]+0x00000001u; // 80037840
L_80037844:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 80037844
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80037848
  if (!crb(c,2)) { IRQCHK(c); goto L_80037814; } // 8003784C
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 80037850
  c->r[3]=0u+0x00000008u; // 80037854
  c->lr=0x8003785Cu; f_8036AB9C(c); // 80037858
  cmps(c,0,(int32_t)c->r[3],0); // 8003785C
  c->r[31]=c->r[3]|c->r[3]; // 80037860
  if (crb(c,2)) { goto L_80037878; } // 80037864
  c->r[4]=R32(c->r[2]+0xFFFFBF18u); // 80037868
  c->r[0]=0u+0x00000000u; // 8003786C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80037870
  W32(c->r[3]+0x00000004u,c->r[0]); // 80037874
L_80037878:;
  c->r[3]=c->r[31]|c->r[31]; // 80037878
  c->r[4]=c->r[1]+0x00000008u; // 8003787C
  c->lr=0x80037884u; f_800376D0(c); // 80037880
  c->r[3]=R32(c->r[27]+0x00000004u); // 80037884
  cmpu(c,0,c->r[28],c->r[3]); // 80037888
  if (crb(c,0)) { goto L_80037B20; } // 8003788C
  c->r[0]=R32(c->r[27]+0x00000010u); // 80037890
  c->r[29]=c->r[28]+c->r[0]; // 80037894
  cmpu(c,0,c->r[29],c->r[3]); // 80037898
  if (crb(c,2)) { goto L_80037B20; } // 8003789C
  c->r[0]=R32(c->r[27]+0x00000008u); // 800378A0
  cmpu(c,0,c->r[29],c->r[0]); // 800378A4
  if (!crb(c,0)) { goto L_800378F4; } // 800378A8
  c->r[5]=c->r[29]|c->r[29]; // 800378AC
  c->r[6]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800378B0
  c->r[4]=0u+0x00000000u; // 800378B4
  goto L_800378E4; // 800378B8
L_800378BC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800378BC
  c->r[0]=R32(c->r[3]+c->r[6]); // 800378C0
  cmps(c,0,(int32_t)c->r[0],0); // 800378C4
  if (crb(c,2)) { goto L_800378DC; } // 800378C8
  W32(c->r[3]+c->r[6],c->r[4]); // 800378CC
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800378D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800378D4
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800378D8
L_800378DC:;
  c->r[6]=c->r[6]+0x00000004u; // 800378DC
  c->r[5]=c->r[5]+0x00000001u; // 800378E0
L_800378E4:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800378E4
  cmpu(c,0,c->r[5],c->r[0]); // 800378E8
  if (crb(c,0)) { IRQCHK(c); goto L_800378BC; } // 800378EC
  W32(c->r[27]+0x00000008u,c->r[29]); // 800378F0
L_800378F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800378F4
  if (crb(c,2)) { goto L_80037AF4; } // 800378F8
  c->r[3]=R32(c->r[27]+0x00000018u); // 800378FC
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80037900
  c->r[12]=R32(c->r[3]+0x00000000u); // 80037904
  c->r[12]=R32(c->r[12]+0x00000008u); // 80037908
  c->ctr=c->r[12]; // 8003790C
  if (true) { c->lr=0x80037914u; dispatch(c,c->ctr); } // 80037910
  c->r[30]=c->r[3]|c->r[3]; // 80037914
  c->r[0]=0u+0x00000000u; // 80037918
  c->r[4]=c->r[30]|c->r[30]; // 8003791C
  c->ctr=c->r[29]; // 80037920
  cmps(c,0,(int32_t)c->r[29],0); // 80037924
  if (crb(c,2)) { goto L_80037940; } // 80037928
L_8003792C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8003792C
  if (crb(c,2)) { goto L_80037938; } // 80037930
  W32(c->r[4]+0x00000000u,c->r[0]); // 80037934
L_80037938:;
  c->r[4]=c->r[4]+0x00000004u; // 80037938
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003792C; } // 8003793C
L_80037940:;
  c->r[4]=R32(c->r[27]+0x00000008u); // 80037940
  c->r[5]=0u+0x00000000u; // 80037944
  cmps(c,0,(int32_t)c->r[4],0); // 80037948
  if (crb(c,2)) { goto L_80037A34; } // 8003794C
  cmpu(c,0,c->r[4],0x00000008u); // 80037950
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 80037954
  if (!crb(c,1)) { goto L_80037A04; } // 80037958
  c->r[0]=c->r[8]+0x00000007u; // 8003795C
  c->r[7]=c->r[30]|c->r[30]; // 80037960
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80037964
  c->r[6]=0u+0x00000000u; // 80037968
  c->ctr=c->r[0]; // 8003796C
  cmpu(c,0,c->r[8],0x00000000u); // 80037970
  if (!crb(c,1)) { goto L_80037A04; } // 80037974
L_80037978:;
  c->r[8]=R32(c->r[27]+0x00000000u); // 80037978
  c->r[5]=c->r[5]+0x00000008u; // 8003797C
  c->r[0]=R32(c->r[8]+c->r[6]); // 80037980
  W32(c->r[7]+0x00000000u,c->r[0]); // 80037984
  c->r[0]=R32(c->r[27]+0x00000000u); // 80037988
  c->r[8]=c->r[0]+c->r[6]; // 8003798C
  c->r[0]=R32(c->r[8]+0x00000004u); // 80037990
  W32(c->r[7]+0x00000004u,c->r[0]); // 80037994
  c->r[0]=R32(c->r[27]+0x00000000u); // 80037998
  c->r[8]=c->r[0]+c->r[6]; // 8003799C
  c->r[0]=R32(c->r[8]+0x00000008u); // 800379A0
  W32(c->r[7]+0x00000008u,c->r[0]); // 800379A4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800379A8
  c->r[8]=c->r[0]+c->r[6]; // 800379AC
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800379B0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800379B4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800379B8
  c->r[8]=c->r[0]+c->r[6]; // 800379BC
  c->r[0]=R32(c->r[8]+0x00000010u); // 800379C0
  W32(c->r[7]+0x00000010u,c->r[0]); // 800379C4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800379C8
  c->r[8]=c->r[0]+c->r[6]; // 800379CC
  c->r[0]=R32(c->r[8]+0x00000014u); // 800379D0
  W32(c->r[7]+0x00000014u,c->r[0]); // 800379D4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800379D8
  c->r[8]=c->r[0]+c->r[6]; // 800379DC
  c->r[0]=R32(c->r[8]+0x00000018u); // 800379E0
  W32(c->r[7]+0x00000018u,c->r[0]); // 800379E4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800379E8
  c->r[8]=c->r[0]+c->r[6]; // 800379EC
  c->r[6]=c->r[6]+0x00000020u; // 800379F0
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800379F4
  W32(c->r[7]+0x0000001Cu,c->r[0]); // 800379F8
  c->r[7]=c->r[7]+0x00000020u; // 800379FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80037978; } // 80037A00
L_80037A04:;
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80037A04
  c->r[0]=c->r[4]-c->r[5]; // 80037A08
  c->r[6]=c->r[3]+c->r[7]; // 80037A0C
  c->ctr=c->r[0]; // 80037A10
  cmpu(c,0,c->r[5],c->r[4]); // 80037A14
  if (!crb(c,0)) { goto L_80037A34; } // 80037A18
L_80037A1C:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 80037A1C
  c->r[0]=R32(c->r[4]+c->r[7]); // 80037A20
  c->r[7]=c->r[7]+0x00000004u; // 80037A24
  W32(c->r[6]+0x00000000u,c->r[0]); // 80037A28
  c->r[6]=c->r[6]+0x00000004u; // 80037A2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80037A1C; } // 80037A30
L_80037A34:;
  c->r[7]=R32(c->r[27]+0x00000008u); // 80037A34
  cmpu(c,1,c->r[7],c->r[29]); // 80037A38
  if (!crb(c,4)) { goto L_80037ACC; } // 80037A3C
  c->r[0]=c->r[29]-c->r[7]; // 80037A40
  c->r[6]=c->r[29]+0xFFFFFFF8u; // 80037A44
  cmpu(c,0,c->r[0],0x00000008u); // 80037A48
  if (!crb(c,1)) { goto L_80037AA4; } // 80037A4C
  if (crb(c,5)) { goto L_80037AA4; } // 80037A50
  c->r[0]=c->r[6]+0x00000007u; // 80037A54
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80037A58
  c->r[0]=c->r[0]-c->r[7]; // 80037A5C
  c->r[4]=0u+0x00000000u; // 80037A60
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80037A64
  c->r[5]=c->r[3]+c->r[5]; // 80037A68
  c->ctr=c->r[0]; // 80037A6C
  cmpu(c,0,c->r[7],c->r[6]); // 80037A70
  if (!crb(c,0)) { goto L_80037AA4; } // 80037A74
L_80037A78:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 80037A78
  c->r[7]=c->r[7]+0x00000008u; // 80037A7C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80037A80
  W32(c->r[5]+0x00000008u,c->r[4]); // 80037A84
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80037A88
  W32(c->r[5]+0x00000010u,c->r[4]); // 80037A8C
  W32(c->r[5]+0x00000014u,c->r[4]); // 80037A90
  W32(c->r[5]+0x00000018u,c->r[4]); // 80037A94
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80037A98
  c->r[5]=c->r[5]+0x00000020u; // 80037A9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80037A78; } // 80037AA0
L_80037AA4:;
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80037AA4
  c->r[0]=c->r[29]-c->r[7]; // 80037AA8
  c->r[4]=c->r[3]+c->r[4]; // 80037AAC
  c->r[3]=0u+0x00000000u; // 80037AB0
  c->ctr=c->r[0]; // 80037AB4
  cmpu(c,0,c->r[7],c->r[29]); // 80037AB8
  if (!crb(c,0)) { goto L_80037ACC; } // 80037ABC
L_80037AC0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80037AC0
  c->r[4]=c->r[4]+0x00000004u; // 80037AC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80037AC0; } // 80037AC8
L_80037ACC:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 80037ACC
  cmps(c,0,(int32_t)c->r[4],0); // 80037AD0
  if (crb(c,2)) { goto L_80037AEC; } // 80037AD4
  c->r[3]=R32(c->r[27]+0x00000018u); // 80037AD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80037ADC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80037AE0
  c->ctr=c->r[12]; // 80037AE4
  if (true) { c->lr=0x80037AECu; dispatch(c,c->ctr); } // 80037AE8
L_80037AEC:;
  W32(c->r[27]+0x00000000u,c->r[30]); // 80037AEC
  goto L_80037B1C; // 80037AF0
L_80037AF4:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 80037AF4
  cmps(c,0,(int32_t)c->r[4],0); // 80037AF8
  if (crb(c,2)) { goto L_80037B14; } // 80037AFC
  c->r[3]=R32(c->r[27]+0x00000018u); // 80037B00
  c->r[12]=R32(c->r[3]+0x00000000u); // 80037B04
  c->r[12]=R32(c->r[12]+0x00000010u); // 80037B08
  c->ctr=c->r[12]; // 80037B0C
  if (true) { c->lr=0x80037B14u; dispatch(c,c->ctr); } // 80037B10
L_80037B14:;
  c->r[0]=0u+0x00000000u; // 80037B14
  W32(c->r[27]+0x00000000u,c->r[0]); // 80037B18
L_80037B1C:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80037B1C
L_80037B20:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80037B20
  cmpu(c,0,c->r[28],c->r[0]); // 80037B24
  if (crb(c,0)) { goto L_80037B4C; } // 80037B28
  cmps(c,0,(int32_t)c->r[31],0); // 80037B2C
  c->r[0]=c->r[28]+0x00000001u; // 80037B30
  W32(c->r[27]+0x00000008u,c->r[0]); // 80037B34
  if (crb(c,2)) { goto L_80037B98; } // 80037B38
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80037B3C
  c->r[0]=c->r[3]+0x00000001u; // 80037B40
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80037B44
  goto L_80037B98; // 80037B48
L_80037B4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80037B4C
  if (crb(c,2)) { goto L_80037B78; } // 80037B50
  c->r[3]=R32(c->r[27]+0x00000000u); // 80037B54
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80037B58
  c->r[0]=R32(c->r[3]+c->r[0]); // 80037B5C
  cmps(c,0,(int32_t)c->r[0],0); // 80037B60
  if (!crb(c,2)) { goto L_80037B98; } // 80037B64
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80037B68
  c->r[0]=c->r[3]+0x00000001u; // 80037B6C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80037B70
  goto L_80037B98; // 80037B74
L_80037B78:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80037B78
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80037B7C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80037B80
  cmps(c,0,(int32_t)c->r[0],0); // 80037B84
  if (crb(c,2)) { goto L_80037B98; } // 80037B88
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80037B8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037B90
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80037B94
L_80037B98:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80037B98
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80037B9C
  W32(c->r[3]+c->r[0],c->r[31]); // 80037BA0
  c->r[0]=R32(c->r[27]+0x00000014u); // 80037BA4
  cmpu(c,0,c->r[0],c->r[28]); // 80037BA8
  if (!crb(c,1)) { goto L_80037BBC; } // 80037BAC
  cmps(c,0,(int32_t)c->r[31],0); // 80037BB0
  if (!crb(c,2)) { goto L_80037BBC; } // 80037BB4
  W32(c->r[27]+0x00000014u,c->r[28]); // 80037BB8
L_80037BBC:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80037BBC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80037BC0
  c->lr=c->r[0]; // 80037BC4
  c->r[1]=c->r[1]+0x000000A0u; // 80037BC8
  return; // 80037BCC
}

// fn_80037BD0
void f_80037BD0(Ctx* __restrict c) {
  trace_call(0x80037BD0u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 80037BD0
  cmpu(c,0,c->r[4],c->r[0]); // 80037BD4
  if (crb(c,0)) { goto L_80037BE4; } // 80037BD8
  c->r[3]=0u+0x00000000u; // 80037BDC
  return; // 80037BE0
L_80037BE4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80037BE4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80037BE8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80037BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80037BF0
  if (crb(c,2)) { goto L_80037C00; } // 80037BF4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80037BF8
  return; // 80037BFC
L_80037C00:;
  c->r[3]=0u+0x00000000u; // 80037C00
  return; // 80037C04
}

// fn_80037C08
void f_80037C08(Ctx* __restrict c) {
  trace_call(0x80037C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037C08
  c->r[0]=c->lr; // 80037C0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80037C10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80037C14
  c->r[31]=0u+0x00000000u; // 80037C18
  W32(c->r[1]+0x00000018u,c->r[30]); // 80037C1C
  c->r[30]=0u+0x00000000u; // 80037C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80037C24
  c->r[29]=c->r[3]|c->r[3]; // 80037C28
  goto L_80037C50; // 80037C2C
L_80037C30:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80037C30
  c->r[4]=R32(c->r[3]+c->r[31]); // 80037C34
  cmps(c,0,(int32_t)c->r[4],0); // 80037C38
  if (crb(c,2)) { goto L_80037C48; } // 80037C3C
  c->r[3]=R32(c->r[13]+0xFFFFA540u); // 80037C40
  c->lr=0x80037C48u; f_80037D04(c); // 80037C44
L_80037C48:;
  c->r[31]=c->r[31]+0x00000004u; // 80037C48
  c->r[30]=c->r[30]+0x00000001u; // 80037C4C
L_80037C50:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80037C50
  cmpu(c,0,c->r[30],c->r[3]); // 80037C54
  if (crb(c,0)) { IRQCHK(c); goto L_80037C30; } // 80037C58
  c->r[0]=R32(c->r[29]+0x00000004u); // 80037C5C
  cmps(c,0,(int32_t)c->r[0],0); // 80037C60
  if (crb(c,2)) { goto L_80037CE8; } // 80037C64
  cmps(c,0,(int32_t)c->r[3],0); // 80037C68
  if (crb(c,2)) { goto L_80037CBC; } // 80037C6C
  c->r[5]=0u+0x00000000u; // 80037C70
  c->r[6]=0u+0x00000000u; // 80037C74
  c->r[4]=0u+0x00000000u; // 80037C78
  goto L_80037CA8; // 80037C7C
L_80037C80:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80037C80
  c->r[0]=R32(c->r[3]+c->r[6]); // 80037C84
  cmps(c,0,(int32_t)c->r[0],0); // 80037C88
  if (crb(c,2)) { goto L_80037CA0; } // 80037C8C
  W32(c->r[3]+c->r[6],c->r[4]); // 80037C90
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80037C94
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037C98
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80037C9C
L_80037CA0:;
  c->r[6]=c->r[6]+0x00000004u; // 80037CA0
  c->r[5]=c->r[5]+0x00000001u; // 80037CA4
L_80037CA8:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80037CA8
  cmpu(c,0,c->r[5],c->r[0]); // 80037CAC
  if (crb(c,0)) { IRQCHK(c); goto L_80037C80; } // 80037CB0
  c->r[0]=0u+0x00000000u; // 80037CB4
  W32(c->r[29]+0x00000008u,c->r[0]); // 80037CB8
L_80037CBC:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80037CBC
  cmps(c,0,(int32_t)c->r[4],0); // 80037CC0
  if (crb(c,2)) { goto L_80037CDC; } // 80037CC4
  c->r[3]=R32(c->r[29]+0x00000018u); // 80037CC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80037CCC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80037CD0
  c->ctr=c->r[12]; // 80037CD4
  if (true) { c->lr=0x80037CDCu; dispatch(c,c->ctr); } // 80037CD8
L_80037CDC:;
  c->r[0]=0u+0x00000000u; // 80037CDC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80037CE0
  W32(c->r[29]+0x00000004u,c->r[0]); // 80037CE4
L_80037CE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80037CE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80037CEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80037CF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80037CF4
  c->lr=c->r[0]; // 80037CF8
  c->r[1]=c->r[1]+0x00000020u; // 80037CFC
  return; // 80037D00
}

// fn_80037D04
void f_80037D04(Ctx* __restrict c) {
  trace_call(0x80037D04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037D04
  c->r[0]=c->lr; // 80037D08
  cmps(c,0,(int32_t)c->r[4],0); // 80037D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80037D10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80037D14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80037D18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80037D1C
  c->r[29]=c->r[4]|c->r[4]; // 80037D20
  W32(c->r[1]+0x00000010u,c->r[28]); // 80037D24
  c->r[28]=c->r[3]|c->r[3]; // 80037D28
  if (crb(c,2)) { goto L_80037DB8; } // 80037D2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80037D30
  cmps(c,0,(int32_t)c->r[0],0); // 80037D34
  if (crb(c,2)) { goto L_80037D44; } // 80037D38
  c->r[3]=c->r[29]|c->r[29]; // 80037D3C
  c->lr=0x80037D44u; f_80037710(c); // 80037D40
L_80037D44:;
  cmps(c,0,(int32_t)c->r[29],0); // 80037D44
  if (crb(c,2)) { goto L_80037DB8; } // 80037D48
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80037D4C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80037D50
  cmpu(c,0,c->r[0],c->r[31]); // 80037D54
  if (crb(c,2)) { goto L_80037DB8; } // 80037D58
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80037D5C
  c->r[3]=c->r[30]|c->r[30]; // 80037D60
  c->lr=0x80037D68u; f_8024B0E0(c); // 80037D64
  c->r[4]=R32(c->r[29]+0x00000000u); // 80037D68
  cmpu(c,0,c->r[4],c->r[31]); // 80037D6C
  if (!crb(c,2)) { goto L_80037D80; } // 80037D70
  c->r[3]=c->r[30]|c->r[30]; // 80037D74
  c->lr=0x80037D7Cu; f_8024B1C0(c); // 80037D78
  goto L_80037DB8; // 80037D7C
L_80037D80:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80037D80
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80037D84
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80037D88
  cmpu(c,0,c->r[0],0x00000001u); // 80037D8C
  if (!crb(c,2)) { goto L_80037DAC; } // 80037D90
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80037D94
  cmpu(c,0,c->r[0],0x00000001u); // 80037D98
  if (!crb(c,2)) { goto L_80037DAC; } // 80037D9C
  c->r[3]=c->r[30]|c->r[30]; // 80037DA0
  c->r[4]=c->r[29]|c->r[29]; // 80037DA4
  c->lr=0x80037DACu; f_8031EEDC(c); // 80037DA8
L_80037DAC:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 80037DAC
  c->r[3]=c->r[30]|c->r[30]; // 80037DB0
  c->lr=0x80037DB8u; f_8024B1C0(c); // 80037DB4
L_80037DB8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80037DB8
  c->r[4]=c->r[29]|c->r[29]; // 80037DBC
  c->lr=0x80037DC4u; f_802A8B4C(c); // 80037DC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80037DC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80037DC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80037DCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80037DD0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80037DD4
  c->lr=c->r[0]; // 80037DD8
  c->r[1]=c->r[1]+0x00000020u; // 80037DDC
  return; // 80037DE0
}

// __ct__7LStringFv
void f_80037DE4(Ctx* __restrict c) {
  trace_call(0x80037DE4u);
  c->r[5]=0u+0x00000000u; // 80037DE4
  {uint32_t ea=c->r[2]+0xFFFF8558u; c->f[2]=c->ps1[2]=RF32(ea);} // 80037DE8
  c->r[0]=c->r[5]|0x00000006u; // 80037DEC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80037DF0
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80037DF4
  c->r[0]=0u+0xFFFFFFFFu; // 80037DF8
  W32(c->r[3]+0x00000000u,c->r[5]); // 80037DFC
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 80037E00
  W32(c->r[3]+0x00000004u,c->r[5]); // 80037E04
  W32(c->r[3]+0x00000008u,c->r[5]); // 80037E08
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 80037E0C
  c->r[4]=R32(c->r[13]+0xFFFF8088u); // 80037E10
  W32(c->r[3]+0x00000010u,c->r[4]); // 80037E14
  W32(c->r[3]+0x00000014u,c->r[5]); // 80037E18
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 80037E1C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80037E20
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80037E24
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80037E28
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 80037E2C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80037E30
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80037E34
  W32(c->r[3]+0x00000038u,c->r[0]); // 80037E38
  return; // 80037E3C
}

// fn_80037E40
void f_80037E40(Ctx* __restrict c) {
  trace_call(0x80037E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037E40
  c->r[0]=c->lr; // 80037E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80037E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80037E4C
  c->r[31]=c->r[3]|c->r[3]; // 80037E50
  c->r[3]=R32(c->r[3]+0x00000000u); // 80037E54
  c->lr=0x80037E5Cu; f_8031A7F4(c); // 80037E58
  W32(c->r[31]+0x00000004u,c->r[3]); // 80037E5C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80037E60
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80037E64
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[3]=c->ps1[3]=RF32(ea);} // 80037E68
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80037E6C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80037E70
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80037E74
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80037E78
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80037E7C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80037E80
  c->r[3]=R32(c->r[31]+0x00000004u); // 80037E84
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 80037E88
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[3]; // 80037E8C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 80037E90
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[1]; // 80037E94
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80037E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80037E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80037EA0
  c->lr=c->r[0]; // 80037EA4
  c->r[1]=c->r[1]+0x00000010u; // 80037EA8
  return; // 80037EAC
}

// __ct__7LStringFv_80037EB0
void f_80037EB0(Ctx* __restrict c) {
  trace_call(0x80037EB0u);
  c->r[4]=0u+0x00000000u; // 80037EB0
  c->r[0]=0u+0xFFFFFFFFu; // 80037EB4
  W32(c->r[3]+0x00000004u,c->r[4]); // 80037EB8
  W32(c->r[3]+0x00000014u,c->r[4]); // 80037EBC
  W32(c->r[3]+0x00000038u,c->r[0]); // 80037EC0
  return; // 80037EC4
}

// fn_80037EC8
void f_80037EC8(Ctx* __restrict c) {
  trace_call(0x80037EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80037EC8
  c->r[0]=c->lr; // 80037ECC
  W32(c->r[1]+0x00000144u,c->r[0]); // 80037ED0
  c->r[11]=c->r[1]+0x00000130u; // 80037ED4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 80037ED8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 80037EDC
  c->lr=0x80037EE4u; f_800C2E3C(c); // 80037EE0
  c->r[5]=R32(c->r[3]+0x00000008u); // 80037EE4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80037EE8
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80037EEC
  c->r[24]=c->r[4]|c->r[4]; // 80037EF0
  c->r[4]=R32(c->r[5]+0x00000000u); // 80037EF4
  c->r[23]=c->r[3]|c->r[3]; // 80037EF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80037EFC
  c->r[31]=rotl(c->r[6],0)&0x00000001u; // 80037F00
  c->r[4]=R32(c->r[4]+c->r[0]); // 80037F04
  c->r[28]=rotl(c->r[6],31)&0x00000001u; // 80037F08
  c->r[30]=rotl(c->r[6],30)&0x00000001u; // 80037F0C
  c->r[27]=rotl(c->r[6],29)&0x00000001u; // 80037F10
  c->r[26]=rotl(c->r[6],28)&0x00000001u; // 80037F14
  c->r[29]=rotl(c->r[6],26)&0x00000001u; // 80037F18
  c->lr=0x80037F20u; f_8031A754(c); // 80037F1C
  c->r[4]=R32(c->r[23]+0x00000004u); // 80037F20
  c->r[25]=c->r[3]|c->r[3]; // 80037F24
  c->r[5]=R32(c->r[4]+0x00000024u); // 80037F28
  c->r[4]=R32(c->r[5]+0x00000008u); // 80037F2C
  cmps(c,0,(int32_t)c->r[4],0); // 80037F30
  if (!crb(c,2)) { goto L_80037F48; } // 80037F34
  c->r[26]=0u+0x00000000u; // 80037F38
  c->r[27]=0u+0x00000000u; // 80037F3C
  c->r[28]=0u+0x00000000u; // 80037F40
  goto L_80037F7C; // 80037F44
L_80037F48:;
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 80037F48
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80037F4C
  if (!crb(c,2)) { goto L_80037F7C; } // 80037F50
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80037F54
  c->r[5]=R32(c->r[5]+0x00000000u); // 80037F58
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80037F5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80037F60
  c->r[3]=R32(c->r[5]+c->r[4]); // 80037F64
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80037F68
  c->r[4]=R32(c->r[4]+0x00000000u); // 80037F6C
  cmpu(c,0,c->r[4],c->r[0]); // 80037F70
  if (!crb(c,2)) { goto L_80037F7C; } // 80037F74
  goto L_800382BC; // 80037F78
L_80037F7C:;
  c->r[7]=R32(c->r[23]+0x00000014u); // 80037F7C
  c->r[5]=0u+0x80370000u; // 80037F80
  W32(c->r[23]+0x00000038u,c->r[24]); // 80037F84
  c->r[3]=c->r[1]+0x00000088u; // 80037F88
  c->r[0]=c->r[7]+0x00000001u; // 80037F8C
  c->r[6]=R32(c->r[23]+0x00000010u); // 80037F90
  W32(c->r[23]+0x00000014u,c->r[0]); // 80037F94
  c->r[5]=c->r[5]+0x00002508u; // 80037F98
  c->r[4]=0u+0x00000080u; // 80037F9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80037FA0
  c->lr=0x80037FA8u; f_8000D29C(c); // 80037FA4
  c->r[3]=R32(c->r[23]+0x00000004u); // 80037FA8
  c->r[5]=c->r[25]|c->r[25]; // 80037FAC
  c->r[4]=c->r[1]+0x00000088u; // 80037FB0
  c->lr=0x80037FB8u; f_80318F84(c); // 80037FB4
  c->r[0]=cntlz(c->r[31]); // 80037FB8
  c->r[5]=0u+0x00000004u; // 80037FBC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80037FC0
  W32(c->r[3]+0x00000020u,c->r[0]); // 80037FC4
  c->r[0]=0u+0x00000000u; // 80037FC8
  c->r[6]=c->r[3]+0x00000014u; // 80037FCC
  W32(c->r[3]+0x00000024u,c->r[0]); // 80037FD0
  c->r[0]=0u+0x00000001u; // 80037FD4
  cmps(c,0,(int32_t)c->r[30],0); // 80037FD8
  c->r[25]=c->r[3]|c->r[3]; // 80037FDC
  c->r[4]=R32(c->r[3]+0x00000014u); // 80037FE0
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80037FE4
  W32(c->r[1]+0x00000078u,c->r[6]); // 80037FE8
  c->r[0]=c->r[4]&~c->r[0]; // 80037FEC
  W32(c->r[1]+0x0000007Cu,c->r[5]); // 80037FF0
  W32(c->r[1]+0x00000070u,c->r[6]); // 80037FF4
  W32(c->r[1]+0x00000074u,c->r[5]); // 80037FF8
  W32(c->r[3]+0x00000014u,c->r[0]); // 80037FFC
  if (crb(c,2)) { goto L_8003800C; } // 80038000
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038004
  goto L_80038010; // 80038008
L_8003800C:;
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003800C
L_80038010:;
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80038010
  c->f[1]=c->ps1[1]=S(c->f[0]); // 80038014
  cmps(c,0,(int32_t)c->r[27],0); // 80038018
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003801C
  c->r[4]=R32(c->r[3]+0x00000010u); // 80038020
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80038024
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 80038028
  if (crb(c,2)) { goto L_80038038; } // 8003802C
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038030
  goto L_8003803C; // 80038034
L_80038038:;
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038038
L_8003803C:;
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8003803C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 80038040
  cmps(c,0,(int32_t)c->r[28],0); // 80038044
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80038048
  c->r[4]=R32(c->r[3]+0x00000010u); // 8003804C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80038050
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 80038054
  if (crb(c,2)) { goto L_80038064; } // 80038058
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003805C
  goto L_80038068; // 80038060
L_80038064:;
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80038064
L_80038068:;
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[1]=c->ps1[1]=RF32(ea);} // 80038068
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003806C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 80038070
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[1]; // 80038074
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80038078
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8003807C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80038080
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 80038084
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80038088
  if (crb(c,2)) { goto L_800380B8; } // 8003808C
  c->r[5]=0u+0x00000001u; // 80038090
  c->r[4]=R32(c->r[3]+0x00000014u); // 80038094
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[5]<<((c->r[5])&31)); // 80038098
  c->r[6]=c->r[3]+0x00000014u; // 8003809C
  c->r[0]=c->r[4]|c->r[0]; // 800380A0
  W32(c->r[1]+0x00000068u,c->r[6]); // 800380A4
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 800380A8
  W32(c->r[1]+0x00000080u,c->r[6]); // 800380AC
  W32(c->r[1]+0x00000084u,c->r[5]); // 800380B0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800380B4
L_800380B8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800380B8
  if (crb(c,2)) { goto L_800381F0; } // 800380BC
  c->r[3]=R32(c->r[23]+0x00000004u); // 800380C0
  c->r[3]=R32(c->r[3]+0x00000024u); // 800380C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800380C8
  c->r[23]=R32(c->r[3]+0x00000000u); // 800380CC
  c->r[3]=R32(c->r[23]+0x00000010u); // 800380D0
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800380D4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=RF64(ea);} // 800380D8
  c->lr=0x800380E0u; f_800D29B8(c); // 800380DC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800380E0
  {uint32_t ea=c->r[23]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800380E4
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 800380E8
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 800380EC
  fcmp(c,0,c->f[31],c->f[0]); // 800380F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800380F4
  if (!crb(c,2)) { goto L_80038100; } // 800380F8
  goto L_80038108; // 800380FC
L_80038100:;
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038100
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[31]); // 80038104
L_80038108:;
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038108
  c->r[3]=R32(c->r[25]+0x00000010u); // 8003810C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 80038110
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80038114
  fcmp(c,0,c->f[1],c->f[0]); // 80038118
  if (crb(c,2)) { goto L_800381BC; } // 8003811C
  c->r[4]=0u+0x00000001u; // 80038120
  c->lr=0x80038128u; f_802AA2C0(c); // 80038124
  c->r[0]=0u+0x00000000u; // 80038128
  W32(c->r[25]+0x00000024u,c->r[0]); // 8003812C
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038130
  c->r[5]=0u+0x00000004u; // 80038134
  c->r[0]=0u+0x00000001u; // 80038138
  c->r[4]=R32(c->r[25]+0x00000014u); // 8003813C
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80038140
  fcmp(c,0,c->f[0],c->f[31]); // 80038144
  c->r[6]=c->r[25]+0x00000014u; // 80038148
  W32(c->r[1]+0x00000050u,c->r[6]); // 8003814C
  c->r[0]=c->r[4]&~c->r[3]; // 80038150
  W32(c->r[1]+0x00000054u,c->r[5]); // 80038154
  W32(c->r[1]+0x00000038u,c->r[6]); // 80038158
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8003815C
  W32(c->r[25]+0x00000014u,c->r[0]); // 80038160
  if (!crb(c,2)) { goto L_8003818C; } // 80038164
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 80038168
  c->r[0]=R32(c->r[6]+0x00000000u); // 8003816C
  W32(c->r[1]+0x00000058u,c->r[6]); // 80038170
  c->r[0]=c->r[0]|c->r[3]; // 80038174
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 80038178
  W32(c->r[1]+0x00000040u,c->r[6]); // 8003817C
  W32(c->r[1]+0x00000044u,c->r[5]); // 80038180
  W32(c->r[6]+0x00000000u,c->r[0]); // 80038184
  goto L_800381BC; // 80038188
L_8003818C:;
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003818C
  fcmp(c,0,c->f[0],c->f[31]); // 80038190
  if (!crb(c,2)) { goto L_800381BC; } // 80038194
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038198
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 8003819C
  c->r[0]=R32(c->r[6]+0x00000000u); // 800381A0
  W32(c->r[1]+0x00000060u,c->r[6]); // 800381A4
  c->r[0]=c->r[0]|c->r[3]; // 800381A8
  W32(c->r[1]+0x00000064u,c->r[5]); // 800381AC
  W32(c->r[1]+0x00000048u,c->r[6]); // 800381B0
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800381B4
  W32(c->r[6]+0x00000000u,c->r[0]); // 800381B8
L_800381BC:;
  {uint32_t ea=c->r[23]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800381BC
  {uint32_t ea=c->r[25]+0x00000018u; WF32(ea,c->f[1]);} // 800381C0
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800381C4
  c->r[3]=R32(c->r[25]+0x00000010u); // 800381C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800381CC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800381D0
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800381D4
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[1]);} // 800381D8
  {uint32_t ea=c->r[25]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800381DC
  c->r[3]=R32(c->r[25]+0x00000010u); // 800381E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800381E4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800381E8
  goto L_800382B8; // 800381EC
L_800381F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800381F0
  if (crb(c,2)) { goto L_800382B8; } // 800381F4
  cmps(c,0,(int32_t)c->r[31],0); // 800381F8
  if (crb(c,2)) { goto L_800382B8; } // 800381FC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038200
  {uint32_t ea=c->r[23]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 80038204
  c->r[3]=R32(c->r[3]+0x00000010u); // 80038208
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8003820C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=RF64(ea);} // 80038210
  fcmp(c,0,c->f[1],c->f[0]); // 80038214
  if (crb(c,2)) { goto L_800382B8; } // 80038218
  c->r[4]=0u+0x00000001u; // 8003821C
  c->lr=0x80038224u; f_802AA2C0(c); // 80038220
  c->r[0]=0u+0x00000000u; // 80038224
  W32(c->r[25]+0x00000024u,c->r[0]); // 80038228
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003822C
  c->r[5]=0u+0x00000004u; // 80038230
  c->r[0]=0u+0x00000001u; // 80038234
  c->r[4]=R32(c->r[25]+0x00000014u); // 80038238
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8003823C
  fcmp(c,0,c->f[0],c->f[31]); // 80038240
  c->r[6]=c->r[25]+0x00000014u; // 80038244
  W32(c->r[1]+0x00000020u,c->r[6]); // 80038248
  c->r[0]=c->r[4]&~c->r[3]; // 8003824C
  W32(c->r[1]+0x00000024u,c->r[5]); // 80038250
  W32(c->r[1]+0x00000008u,c->r[6]); // 80038254
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80038258
  W32(c->r[25]+0x00000014u,c->r[0]); // 8003825C
  if (!crb(c,2)) { goto L_80038288; } // 80038260
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 80038264
  c->r[0]=R32(c->r[6]+0x00000000u); // 80038268
  W32(c->r[1]+0x00000028u,c->r[6]); // 8003826C
  c->r[0]=c->r[0]|c->r[3]; // 80038270
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80038274
  W32(c->r[1]+0x00000010u,c->r[6]); // 80038278
  W32(c->r[1]+0x00000014u,c->r[5]); // 8003827C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80038280
  goto L_800382B8; // 80038284
L_80038288:;
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038288
  fcmp(c,0,c->f[0],c->f[31]); // 8003828C
  if (!crb(c,2)) { goto L_800382B8; } // 80038290
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038294
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 80038298
  c->r[0]=R32(c->r[6]+0x00000000u); // 8003829C
  W32(c->r[1]+0x00000030u,c->r[6]); // 800382A0
  c->r[0]=c->r[0]|c->r[3]; // 800382A4
  W32(c->r[1]+0x00000034u,c->r[5]); // 800382A8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800382AC
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800382B0
  W32(c->r[6]+0x00000000u,c->r[0]); // 800382B4
L_800382B8:;
  c->r[3]=c->r[25]|c->r[25]; // 800382B8
L_800382BC:;
  c->r[11]=c->r[1]+0x00000130u; // 800382BC
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 800382C0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 800382C4
  c->lr=0x800382CCu; f_800C2E88(c); // 800382C8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800382CC
  c->lr=c->r[0]; // 800382D0
  c->r[1]=c->r[1]+0x00000140u; // 800382D4
  return; // 800382D8
}

// fn_800382DC
void f_800382DC(Ctx* __restrict c) {
  trace_call(0x800382DCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800382DC
  c->r[0]=c->r[4]+0x00000001u; // 800382E0
  c->r[4]=R32(c->r[3]+0x00000024u); // 800382E4
  c->r[3]=R32(c->r[4]+0x00000008u); // 800382E8
  cmpu(c,0,c->r[3],c->r[0]); // 800382EC
  if (!crb(c,0)) { goto L_800382FC; } // 800382F0
  c->r[3]=0u+0x00000000u; // 800382F4
  return; // 800382F8
L_800382FC:;
  c->r[0]=c->r[3]-c->r[0]; // 800382FC
  c->r[3]=R32(c->r[4]+0x00000000u); // 80038300
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80038304
  c->r[3]=R32(c->r[3]+c->r[0]); // 80038308
  return; // 8003830C
}

// fn_80038310
void f_80038310(Ctx* __restrict c) {
  trace_call(0x80038310u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038310
  c->r[0]=c->lr; // 80038314
  W32(c->r[1]+0x00000064u,c->r[0]); // 80038318
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8003831C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80038320
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80038324
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80038328
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8003832C
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[30]=c->ps1[30]=RF32(ea);} // 80038330
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80038334
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80038338
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8003833C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80038340
  c->r[30]=c->r[3]|c->r[3]; // 80038344
  W32(c->r[1]+0x00000024u,c->r[29]); // 80038348
  W32(c->r[1]+0x00000020u,c->r[28]); // 8003834C
  c->r[28]=0u+0x00000001u; // 80038350
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038354
  c->r[3]=R32(c->r[3]+0x00000004u); // 80038358
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 8003835C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80038360
  c->r[3]=R32(c->r[3]+0x00000008u); // 80038364
  c->r[31]=c->r[3]+0xFFFFFFFFu; // 80038368
  goto L_80038468; // 8003836C
L_80038370:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80038370
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80038374
  c->r[3]=R32(c->r[3]+0x00000024u); // 80038378
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003837C
  c->r[4]=R32(c->r[3]+c->r[0]); // 80038380
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80038384
  fcmp(c,0,c->f[2],c->f[31]); // 80038388
  if (!crb(c,0)) { goto L_800383D8; } // 8003838C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[29]); // 80038390
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 80038394
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[30]; // 80038398
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 8003839C
  c->f[2]=(c->f[2]>=0.0)?c->f[31]:c->f[0]; // 800383A0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 800383A4
  fcmp(c,0,c->f[2],c->f[31]); // 800383A8
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[30]; // 800383AC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800383B0
  c->f[1]=(c->f[1]>=0.0)?c->f[31]:c->f[0]; // 800383B4
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[1]);} // 800383B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800383BC
  if (!crb(c,2)) { goto L_800383D8; } // 800383C0
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[31]);} // 800383C4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800383C8
  c->r[3]=R32(c->r[4]+0x00000010u); // 800383CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800383D0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800383D4
L_800383D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800383D8
  c->r[5]=0u+0x00000000u; // 800383DC
  c->r[0]=0u+0x00000000u; // 800383E0
  if (!crb(c,1)) { goto L_800383F8; } // 800383E4
  fcmp(c,0,c->f[2],c->f[31]); // 800383E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800383EC
  if (!crb(c,2)) { goto L_800383F8; } // 800383F0
  c->r[0]=0u+0x00000001u; // 800383F4
L_800383F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800383F8
  if (crb(c,2)) { goto L_80038428; } // 800383FC
  {uint32_t ea=c->r[4]+0x00000014u; c->r[0]=R32(ea); c->r[4]=ea;} // 80038400
  c->r[3]=((c->r[28])&0x20)?0u:(c->r[28]<<((c->r[28])&31)); // 80038404
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 80038408
  c->r[0]=c->r[3]&c->r[0]; // 8003840C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); cr0(c,c->r[0]); // 80038410
  W32(c->r[1]+0x00000008u,c->r[4]); // 80038414
  W32(c->r[1]+0x00000010u,c->r[4]); // 80038418
  W32(c->r[1]+0x00000014u,c->r[28]); // 8003841C
  if (!crb(c,2)) { goto L_80038428; } // 80038420
  c->r[5]=0u+0x00000001u; // 80038424
L_80038428:;
  cmps(c,0,(int32_t)c->r[5],0); // 80038428
  if (crb(c,2)) { goto L_80038464; } // 8003842C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80038430
  c->r[29]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80038434
  goto L_8003845C; // 80038438
L_8003843C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8003843C
  c->r[4]=R32(c->r[3]+0x00000024u); // 80038440
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038444
  c->r[4]=R32(c->r[4]+c->r[29]); // 80038448
  c->r[4]=c->r[4]+0x00000008u; // 8003844C
  c->lr=0x80038454u; f_8031932C(c); // 80038450
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80038454
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 80038458
L_8003845C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003845C
  if (!crb(c,0)) { IRQCHK(c); goto L_8003843C; } // 80038460
L_80038464:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80038464
L_80038468:;
  cmps(c,0,(int32_t)c->r[31],0); // 80038468
  if (!crb(c,0)) { IRQCHK(c); goto L_80038370; } // 8003846C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80038470
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80038474
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80038478
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8003847C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80038480
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80038484
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80038488
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8003848C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80038490
  c->r[29]=R32(c->r[1]+0x00000024u); // 80038494
  c->r[28]=R32(c->r[1]+0x00000020u); // 80038498
  c->lr=c->r[0]; // 8003849C
  c->r[1]=c->r[1]+0x00000060u; // 800384A0
  return; // 800384A4
}

// fn_800384A8
void f_800384A8(Ctx* __restrict c) {
  trace_call(0x800384A8u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 800384A8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800384AC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800384B0
  fcmp(c,0,c->f[2],c->f[1]); // 800384B4
  if (crb(c,2)) return; // 800384B8
  fcmp(c,0,c->f[2],c->f[1]); // 800384BC
  if (!crb(c,0)) { goto L_800384D8; } // 800384C0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800384C4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800384C8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800384CC
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[0]; // 800384D0
  goto L_800384E8; // 800384D4
L_800384D8:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800384D8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800384DC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800384E0
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[1]; // 800384E4
L_800384E8:;
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[1]=c->ps1[1]=RF32(ea);} // 800384E8
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800384EC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 800384F0
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[1]; // 800384F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800384F8
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 800384FC
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 80038500
  return; // 80038504
}

// fn_80038508
void f_80038508(Ctx* __restrict c) {
  trace_call(0x80038508u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 80038508
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003850C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80038510
  fcmp(c,0,c->f[2],c->f[1]); // 80038514
  if (crb(c,2)) return; // 80038518
  fcmp(c,0,c->f[2],c->f[1]); // 8003851C
  if (!crb(c,0)) { goto L_80038538; } // 80038520
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038524
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80038528
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8003852C
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 80038530
  goto L_80038548; // 80038534
L_80038538:;
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038538
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8003853C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80038540
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 80038544
L_80038548:;
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 80038548
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8003854C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038550
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80038554
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80038558
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8003855C
  return; // 80038560
}

// fn_80038564
void f_80038564(Ctx* __restrict c) {
  trace_call(0x80038564u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038564
  c->r[0]=c->lr; // 80038568
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003856C
  c->r[11]=c->r[1]+0x00000060u; // 80038570
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80038574
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80038578
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8003857C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 80038580
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 80038584
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 80038588
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 8003858C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 80038590
  c->lr=0x80038598u; f_800C2E40(c); // 80038594
  c->r[4]=R32(c->r[3]+0x00000004u); // 80038598
  c->r[28]=c->r[3]|c->r[3]; // 8003859C
  {uint32_t ea=c->r[2]+0xFFFF8560u; c->f[30]=c->ps1[30]=RF32(ea);} // 800385A0
  c->r[29]=0u+0x00000000u; // 800385A4
  c->r[3]=R32(c->r[4]+0x00000024u); // 800385A8
  c->r[31]=0u+0x00000000u; // 800385AC
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800385B0
  c->r[25]=0u+0x00000000u; // 800385B4
  c->r[30]=R32(c->r[3]+0x00000008u); // 800385B8
  c->r[26]=0u+0x00000004u; // 800385BC
  c->r[27]=0u+0x00000001u; // 800385C0
  goto L_800386D8; // 800385C4
L_800385C8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800385C8
  c->r[3]=R32(c->r[3]+0x00000024u); // 800385CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800385D0
  c->r[24]=R32(c->r[3]+c->r[31]); // 800385D4
  c->r[3]=R32(c->r[24]+0x00000010u); // 800385D8
  {uint32_t ea=c->r[24]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800385DC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=RF64(ea);} // 800385E0
  c->lr=0x800385E8u; f_800D29B8(c); // 800385E4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800385E8
  {uint32_t ea=c->r[24]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800385EC
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 800385F0
  fcmp(c,0,c->f[28],c->f[30]); // 800385F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800385F8
  if (!crb(c,2)) { goto L_80038604; } // 800385FC
  goto L_80038608; // 80038600
L_80038604:;
  c->f[28]=c->ps1[28]=S(c->f[31]+c->f[28]); // 80038604
L_80038608:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80038608
  {uint32_t ea=c->r[28]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003860C
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[28]); // 80038610
  c->r[3]=R32(c->r[24]+0x00000010u); // 80038614
  c->f[1]=-c->f[2]; // 80038618
  {uint32_t ea=c->r[24]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003861C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=RF64(ea);} // 80038620
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[1]); // 80038624
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[1]; // 80038628
  c->f[29]=c->ps1[29]=S(c->f[3]-c->f[2]); // 8003862C
  c->f[29]=(c->f[29]>=0.0)?c->f[2]:c->f[3]; // 80038630
  c->f[1]=c->ps1[1]=S(c->f[28]+c->f[29]); // 80038634
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80038638
  fcmp(c,0,c->f[1],c->f[4]); // 8003863C
  if (crb(c,2)) { goto L_800386D0; } // 80038640
  c->r[4]=0u+0x00000001u; // 80038644
  c->lr=0x8003864Cu; f_802AA2C0(c); // 80038648
  c->f[0]=c->ps1[0]=S(c->f[28]+c->f[29]); // 8003864C
  W32(c->r[24]+0x00000024u,c->r[25]); // 80038650
  c->r[4]=c->r[24]+0x00000014u; // 80038654
  c->r[3]=((c->r[26])&0x20)?0u:(c->r[27]<<((c->r[26])&31)); // 80038658
  c->r[0]=R32(c->r[24]+0x00000014u); // 8003865C
  fcmp(c,0,c->f[30],c->f[0]); // 80038660
  c->r[0]=c->r[0]&~c->r[3]; // 80038664
  W32(c->r[1]+0x00000020u,c->r[4]); // 80038668
  W32(c->r[1]+0x00000024u,c->r[26]); // 8003866C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80038670
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 80038674
  W32(c->r[24]+0x00000014u,c->r[0]); // 80038678
  if (!crb(c,2)) { goto L_800386A4; } // 8003867C
  {uint32_t ea=c->r[24]+0x00000034u; WF32(ea,c->f[30]);} // 80038680
  c->r[0]=R32(c->r[4]+0x00000000u); // 80038684
  W32(c->r[1]+0x00000028u,c->r[4]); // 80038688
  c->r[0]=c->r[0]|c->r[3]; // 8003868C
  W32(c->r[1]+0x0000002Cu,c->r[26]); // 80038690
  W32(c->r[1]+0x00000010u,c->r[4]); // 80038694
  W32(c->r[1]+0x00000014u,c->r[26]); // 80038698
  W32(c->r[4]+0x00000000u,c->r[0]); // 8003869C
  goto L_800386D0; // 800386A0
L_800386A4:;
  fcmp(c,0,c->f[31],c->f[0]); // 800386A4
  if (!crb(c,2)) { goto L_800386D0; } // 800386A8
  {uint32_t ea=c->r[24]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800386AC
  {uint32_t ea=c->r[24]+0x00000034u; WF32(ea,c->f[0]);} // 800386B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800386B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 800386B8
  c->r[0]=c->r[0]|c->r[3]; // 800386BC
  W32(c->r[1]+0x00000034u,c->r[26]); // 800386C0
  W32(c->r[1]+0x00000018u,c->r[4]); // 800386C4
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 800386C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800386CC
L_800386D0:;
  c->r[31]=c->r[31]+0x00000004u; // 800386D0
  c->r[29]=c->r[29]+0x00000001u; // 800386D4
L_800386D8:;
  cmpu(c,0,c->r[29],c->r[30]); // 800386D8
  if (crb(c,0)) { IRQCHK(c); goto L_800385C8; } // 800386DC
  c->r[11]=c->r[1]+0x00000060u; // 800386E0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800386E4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800386E8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800386EC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800386F0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800386F4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800386F8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800386FC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 80038700
  c->lr=0x80038708u; f_800C2E8C(c); // 80038704
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80038708
  c->lr=c->r[0]; // 8003870C
  c->r[1]=c->r[1]+0x000000A0u; // 80038710
  return; // 80038714
}

// fn_80038718
void f_80038718(Ctx* __restrict c) {
  trace_call(0x80038718u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038718
  c->r[0]=c->lr; // 8003871C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80038720
  c->r[0]=0u+0x00000001u; // 80038724
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80038728
  c->r[29]=0u+0x00000004u; // 8003872C
  c->r[27]=c->r[3]|c->r[3]; // 80038730
  c->r[30]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 80038734
  c->r[4]=R32(c->r[3]+0x00000004u); // 80038738
  c->r[3]=R32(c->r[4]+0x00000024u); // 8003873C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80038740
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 80038744
  c->r[31]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80038748
  goto L_80038794; // 8003874C
L_80038750:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80038750
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80038754
  c->r[4]=R32(c->r[3]+0x00000024u); // 80038758
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003875C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038760
  c->r[5]=R32(c->r[4]+c->r[31]); // 80038764
  c->r[0]=R32(c->r[5]+0x00000014u); // 80038768
  c->r[4]=c->r[5]+0x00000014u; // 8003876C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80038770
  c->r[0]=c->r[30]&c->r[0]; // 80038774
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); cr0(c,c->r[0]); // 80038778
  W32(c->r[1]+0x00000010u,c->r[4]); // 8003877C
  if (crb(c,2)) { goto L_8003878C; } // 80038780
  c->r[4]=c->r[5]+0x00000008u; // 80038784
  c->lr=0x8003878Cu; f_8031932C(c); // 80038788
L_8003878C:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 8003878C
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80038790
L_80038794:;
  cmps(c,0,(int32_t)c->r[28],0); // 80038794
  if (!crb(c,0)) { IRQCHK(c); goto L_80038750; } // 80038798
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003879C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800387A0
  c->lr=c->r[0]; // 800387A4
  c->r[1]=c->r[1]+0x00000030u; // 800387A8
  return; // 800387AC
}

// fn_800387B0
void f_800387B0(Ctx* __restrict c) {
  trace_call(0x800387B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800387B0
  c->r[0]=c->lr; // 800387B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800387B8
  c->r[11]=c->r[1]+0x00000040u; // 800387BC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800387C0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800387C4
  c->lr=0x800387CCu; f_800C2E40(c); // 800387C8
  c->r[4]=R32(c->r[3]+0x00000004u); // 800387CC
  c->r[30]=0u+0x00000004u; // 800387D0
  c->r[0]=0u+0x00000001u; // 800387D4
  {uint32_t ea=c->r[2]+0xFFFF855Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800387D8
  c->r[4]=R32(c->r[4]+0x00000024u); // 800387DC
  c->r[24]=c->r[3]|c->r[3]; // 800387E0
  c->r[31]=((c->r[30])&0x20)?0u:(c->r[0]<<((c->r[30])&31)); // 800387E4
  c->r[25]=0u+0x00000000u; // 800387E8
  c->r[26]=R32(c->r[4]+0x00000008u); // 800387EC
  c->r[27]=0u+0x00000000u; // 800387F0
  c->r[29]=0u+0x00000000u; // 800387F4
  goto L_8003885C; // 800387F8
L_800387FC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800387FC
  c->r[4]=0u+0x00000001u; // 80038800
  {uint32_t ea=c->r[2]+0xFFFF8568u; c->f[1]=RF64(ea);} // 80038804
  c->r[3]=R32(c->r[3]+0x00000024u); // 80038808
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003880C
  c->r[28]=R32(c->r[3]+c->r[27]); // 80038810
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[31]);} // 80038814
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80038818
  c->r[3]=R32(c->r[28]+0x00000010u); // 8003881C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80038820
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80038824
  c->r[3]=R32(c->r[28]+0x00000010u); // 80038828
  c->lr=0x80038830u; f_802AA2C0(c); // 8003882C
  W32(c->r[28]+0x00000024u,c->r[29]); // 80038830
  c->r[3]=c->r[28]+0x00000014u; // 80038834
  c->r[27]=c->r[27]+0x00000004u; // 80038838
  c->r[25]=c->r[25]+0x00000001u; // 8003883C
  c->r[0]=R32(c->r[28]+0x00000014u); // 80038840
  W32(c->r[1]+0x00000010u,c->r[3]); // 80038844
  c->r[0]=c->r[0]&~c->r[31]; // 80038848
  W32(c->r[1]+0x00000014u,c->r[30]); // 8003884C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80038850
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80038854
  W32(c->r[28]+0x00000014u,c->r[0]); // 80038858
L_8003885C:;
  cmpu(c,0,c->r[25],c->r[26]); // 8003885C
  if (crb(c,0)) { IRQCHK(c); goto L_800387FC; } // 80038860
  c->r[11]=c->r[1]+0x00000040u; // 80038864
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80038868
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8003886C
  c->lr=0x80038874u; f_800C2E8C(c); // 80038870
  c->r[0]=R32(c->r[1]+0x00000054u); // 80038874
  c->lr=c->r[0]; // 80038878
  c->r[1]=c->r[1]+0x00000050u; // 8003887C
  return; // 80038880
}

// fn_80038884
void f_80038884(Ctx* __restrict c) {
  trace_call(0x80038884u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038884
  c->r[0]=c->lr; // 80038888
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003888C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80038890
  c->r[31]=0u+0x80380000u; // 80038894
  c->r[31]=c->r[31]+0x00003D08u; // 80038898
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003889C
  c->r[30]=0u+0x803C0000u; // 800388A0
  c->r[30]=c->r[30]+0x00002804u; // 800388A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800388A8
  c->r[29]=0u+0x00000000u; // 800388AC
L_800388B0:;
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800388B0
  c->r[5]=0u+0x00000000u; // 800388B4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800388B8
  c->lr=0x800388C0u; f_8031E640(c); // 800388BC
  c->r[29]=c->r[29]+0x00000001u; // 800388C0
  W32(c->r[30]+0x00000000u,c->r[3]); // 800388C4
  cmpu(c,0,c->r[29],0x00000145u); // 800388C8
  c->r[31]=c->r[31]+0x00000008u; // 800388CC
  c->r[30]=c->r[30]+0x00000004u; // 800388D0
  if (crb(c,0)) { IRQCHK(c); goto L_800388B0; } // 800388D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800388D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800388DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800388E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800388E4
  c->lr=c->r[0]; // 800388E8
  c->r[1]=c->r[1]+0x00000020u; // 800388EC
  return; // 800388F0
}

// fn_800388F4
void f_800388F4(Ctx* __restrict c) {
  trace_call(0x800388F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800388F4
  c->r[0]=c->lr; // 800388F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800388FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80038900
  c->r[31]=0u+0x803C0000u; // 80038904
  c->r[31]=c->r[31]+0x00002804u; // 80038908
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003890C
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 80038910
  W32(c->r[1]+0x00000014u,c->r[29]); // 80038914
  W32(c->r[1]+0x00000010u,c->r[28]); // 80038918
  c->r[28]=0u+0x00000000u; // 8003891C
L_80038920:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 80038920
  c->r[3]=c->r[29]|c->r[29]; // 80038924
  c->lr=0x8003892Cu; f_8024B0E0(c); // 80038928
  c->r[4]=R32(c->r[31]+0x00000000u); // 8003892C
  cmpu(c,0,c->r[4],c->r[30]); // 80038930
  if (!crb(c,2)) { goto L_80038944; } // 80038934
  c->r[3]=c->r[29]|c->r[29]; // 80038938
  c->lr=0x80038940u; f_8024B1C0(c); // 8003893C
  goto L_8003897C; // 80038940
L_80038944:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80038944
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80038948
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003894C
  cmpu(c,0,c->r[0],0x00000001u); // 80038950
  if (!crb(c,2)) { goto L_80038970; } // 80038954
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80038958
  cmpu(c,0,c->r[0],0x00000001u); // 8003895C
  if (!crb(c,2)) { goto L_80038970; } // 80038960
  c->r[3]=c->r[29]|c->r[29]; // 80038964
  c->r[4]=c->r[31]|c->r[31]; // 80038968
  c->lr=0x80038970u; f_8031EEDC(c); // 8003896C
L_80038970:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 80038970
  c->r[3]=c->r[29]|c->r[29]; // 80038974
  c->lr=0x8003897Cu; f_8024B1C0(c); // 80038978
L_8003897C:;
  c->r[28]=c->r[28]+0x00000001u; // 8003897C
  c->r[31]=c->r[31]+0x00000004u; // 80038980
  cmpu(c,0,c->r[28],0x00000145u); // 80038984
  if (crb(c,0)) { IRQCHK(c); goto L_80038920; } // 80038988
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003898C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80038990
  c->r[30]=R32(c->r[1]+0x00000018u); // 80038994
  c->r[29]=R32(c->r[1]+0x00000014u); // 80038998
  c->r[28]=R32(c->r[1]+0x00000010u); // 8003899C
  c->lr=c->r[0]; // 800389A0
  c->r[1]=c->r[1]+0x00000020u; // 800389A4
  return; // 800389A8
}

// fn_800389AC
void f_800389AC(Ctx* __restrict c) {
  trace_call(0x800389ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800389AC
  c->r[0]=c->lr; // 800389B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800389B4
  c->r[0]=0u+0x00000001u; // 800389B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800389BC
  c->r[31]=c->r[3]|c->r[3]; // 800389C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800389C4
  c->lr=0x800389CCu; f_80038FD0(c); // 800389C8
  c->r[3]=0u+0x803D0000u; // 800389CC
  c->r[3]=c->r[3]+0x0000407Cu; // 800389D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800389D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800389D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800389DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800389E0
  c->lr=c->r[0]; // 800389E4
  c->r[1]=c->r[1]+0x00000010u; // 800389E8
  return; // 800389EC
}

// fn_800389F0
void f_800389F0(Ctx* __restrict c) {
  trace_call(0x800389F0u);
  c->r[0]=0u+0x00000000u; // 800389F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800389F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800389F8
  return; // 800389FC
}

// fn_80038A00
void f_80038A00(Ctx* __restrict c) {
  trace_call(0x80038A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038A00
  c->r[0]=c->lr; // 80038A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80038A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80038A0C
  c->lr=0x80038A14u; f_80038A9C(c); // 80038A10
  c->r[31]=c->r[3]|c->r[3]; // 80038A14
  c->r[4]=0u+0x00000006u; // 80038A18
  c->r[5]=0u+0x00000000u; // 80038A1C
  c->lr=0x80038A24u; f_8030FFA0(c); // 80038A20
  c->r[3]=c->r[31]|c->r[31]; // 80038A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80038A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80038A2C
  c->lr=c->r[0]; // 80038A30
  c->r[1]=c->r[1]+0x00000010u; // 80038A34
  return; // 80038A38
}

// fn_80038A3C
void f_80038A3C(Ctx* __restrict c) {
  trace_call(0x80038A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038A3C
  c->r[0]=c->lr; // 80038A40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80038A44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80038A48
  W32(c->r[1]+0x00000018u,c->r[30]); // 80038A4C
  c->r[30]=c->r[4]|c->r[4]; // 80038A50
  W32(c->r[1]+0x00000014u,c->r[29]); // 80038A54
  c->r[29]=c->r[3]|c->r[3]; // 80038A58
  c->r[3]=c->r[30]|c->r[30]; // 80038A5C
  c->r[31]=R32(c->r[4]+0x00000030u); // 80038A60
  c->lr=0x80038A68u; f_8030FF04(c); // 80038A64
  c->r[3]=R32(c->r[29]+0x00000004u); // 80038A68
  c->r[4]=c->r[31]|c->r[31]; // 80038A6C
  c->lr=0x80038A74u; f_803374D4(c); // 80038A70
  c->r[3]=R32(c->r[29]+0x00000004u); // 80038A74
  c->r[4]=c->r[30]|c->r[30]; // 80038A78
  c->lr=0x80038A80u; f_80337D10(c); // 80038A7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80038A80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80038A84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80038A88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80038A8C
  c->lr=c->r[0]; // 80038A90
  c->r[1]=c->r[1]+0x00000020u; // 80038A94
  return; // 80038A98
}

// fn_80038A9C
void f_80038A9C(Ctx* __restrict c) {
  trace_call(0x80038A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038A9C
  c->r[0]=c->lr; // 80038AA0
  c->r[5]=0u+0x80370000u; // 80038AA4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80038AA8
  c->r[5]=c->r[5]+0x00003A8Cu; // 80038AAC
  {uint32_t ea=c->r[1]+0x000000CCu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80038AB0
  c->r[30]=0u+0x80380000u; // 80038AB4
  c->r[27]=c->r[3]|c->r[3]; // 80038AB8
  c->r[29]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80038ABC
  c->r[30]=c->r[30]+0x00003D08u; // 80038AC0
  c->r[28]=c->r[4]|c->r[4]; // 80038AC4
  c->r[3]=c->r[1]+0x00000008u; // 80038AC8
  c->r[4]=0u+0x00000040u; // 80038ACC
  c->r[6]=R32(c->r[30]+c->r[29]); // 80038AD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80038AD4
  c->lr=0x80038ADCu; f_8000D29C(c); // 80038AD8
  c->r[3]=R32(c->r[27]+0x00000004u); // 80038ADC
  c->r[4]=c->r[1]+0x00000008u; // 80038AE0
  c->r[5]=c->r[1]+0x00000048u; // 80038AE4
  c->r[6]=0u+0x00000080u; // 80038AE8
  c->lr=0x80038AF0u; f_8033A304(c); // 80038AEC
  c->r[3]=R32(c->r[27]+0x00000004u); // 80038AF0
  c->r[4]=c->r[1]+0x00000048u; // 80038AF4
  c->r[5]=0u+0x00000000u; // 80038AF8
  c->r[6]=0u+0x00000000u; // 80038AFC
  c->lr=0x80038B04u; f_80337358(c); // 80038B00
  c->r[3]=0u+0x803D0000u; // 80038B04
  c->r[3]=c->r[3]+0x0000407Cu; // 80038B08
  c->lr=0x80038B10u; f_800B7570(c); // 80038B0C
  c->r[31]=c->r[3]|c->r[3]; // 80038B10
  c->r[3]=c->r[27]|c->r[27]; // 80038B14
  c->r[4]=c->r[28]|c->r[28]; // 80038B18
  c->lr=0x80038B20u; f_80038B60(c); // 80038B1C
  c->r[5]=R32(c->r[31]+0x00000044u); // 80038B20
  c->r[4]=c->r[3]|c->r[3]; // 80038B24
  c->r[3]=R32(c->r[27]+0x00000004u); // 80038B28
  c->r[6]=c->r[1]+0x00000048u; // 80038B2C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80038B30
  c->lr=0x80038B38u; f_8033763C(c); // 80038B34
  c->r[4]=c->r[30]+c->r[29]; // 80038B38
  c->r[4]=R32(c->r[4]+0x00000004u); // 80038B3C
  W32(c->r[3]+0x00000138u,c->r[4]); // 80038B40
  c->r[0]=c->r[4]+0x00000001u; // 80038B44
  W32(c->r[3]+0x00000078u,c->r[0]); // 80038B48
  {uint32_t ea=c->r[1]+0x000000CCu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80038B4C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80038B50
  c->lr=c->r[0]; // 80038B54
  c->r[1]=c->r[1]+0x000000E0u; // 80038B58
  return; // 80038B5C
}

// fn_80038B60
void f_80038B60(Ctx* __restrict c) {
  trace_call(0x80038B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80038B60
  c->r[0]=c->lr; // 80038B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80038B68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80038B6C
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80038B70
  c->r[30]=c->r[3]+c->r[29]; // 80038B74
  c->r[26]=c->r[3]|c->r[3]; // 80038B78
  c->r[27]=c->r[4]|c->r[4]; // 80038B7C
  c->r[28]=0u+0x00000000u; // 80038B80
  c->r[0]=R32(c->r[30]+0x00000008u); // 80038B84
  cmps(c,0,(int32_t)c->r[0],0); // 80038B88
  if (crb(c,2)) { goto L_80038B98; } // 80038B8C
  c->r[28]=c->r[0]|c->r[0]; // 80038B90
  goto L_80038FB8; // 80038B94
L_80038B98:;
  c->r[3]=0u+0x803D0000u; // 80038B98
  c->r[31]=0u+0x803C0000u; // 80038B9C
  c->r[3]=c->r[3]+0x0000407Cu; // 80038BA0
  c->r[3]=R32(c->r[3]+0x000000D4u); // 80038BA4
  c->r[31]=c->r[31]+0x00002804u; // 80038BA8
  c->r[5]=R32(c->r[31]+c->r[29]); // 80038BAC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80038BB0
  c->r[7]=R32(c->r[3]+0x00000004u); // 80038BB4
  c->r[9]=R32(c->r[7]+0x00000000u); // 80038BB8
  c->r[10]=R32(c->r[7]+0x00000004u); // 80038BBC
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038BC0
  c->r[0]=R32(c->r[9]+0x00000004u); // 80038BC4
  c->r[6]=c->r[10]|c->r[10]; // 80038BC8
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80038BCC
  c->r[0]=c->r[0]-c->r[4]; // 80038BD0
  c->r[0]=sraw(c,c->r[0],2); // 80038BD4
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80038BD8
  c->r[0]=c->r[4]-c->r[10]; // 80038BDC
  c->ctr=c->r[0]; // 80038BE0
  cmpu(c,0,c->r[10],c->r[4]); // 80038BE4
  if (!crb(c,0)) { goto L_80038C24; } // 80038BE8
L_80038BEC:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038BEC
  c->r[4]=R32(c->r[4]+c->r[8]); // 80038BF0
  c->r[0]=R32(c->r[4]+0x00000014u); // 80038BF4
  cmpu(c,0,c->r[5],c->r[0]); // 80038BF8
  if (!crb(c,2)) { goto L_80038C18; } // 80038BFC
  W32(c->r[7]+0x00000004u,c->r[6]); // 80038C00
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80038C04
  c->r[4]=R32(c->r[7]+0x00000000u); // 80038C08
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038C0C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80038C10
  goto L_80038C78; // 80038C14
L_80038C18:;
  c->r[8]=c->r[8]+0x00000004u; // 80038C18
  c->r[6]=c->r[6]+0x00000001u; // 80038C1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038BEC; } // 80038C20
L_80038C24:;
  c->r[5]=R32(c->r[31]+c->r[29]); // 80038C24
  c->r[8]=0u+0x00000000u; // 80038C28
  c->r[6]=0u+0x00000000u; // 80038C2C
  c->ctr=c->r[10]; // 80038C30
  cmpu(c,0,c->r[10],0x00000000u); // 80038C34
  if (!crb(c,1)) { goto L_80038C74; } // 80038C38
L_80038C3C:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038C3C
  c->r[4]=R32(c->r[4]+c->r[6]); // 80038C40
  c->r[0]=R32(c->r[4]+0x00000014u); // 80038C44
  cmpu(c,0,c->r[5],c->r[0]); // 80038C48
  if (!crb(c,2)) { goto L_80038C68; } // 80038C4C
  W32(c->r[7]+0x00000004u,c->r[8]); // 80038C50
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80038C54
  c->r[4]=R32(c->r[7]+0x00000000u); // 80038C58
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038C5C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80038C60
  goto L_80038C78; // 80038C64
L_80038C68:;
  c->r[6]=c->r[6]+0x00000004u; // 80038C68
  c->r[8]=c->r[8]+0x00000001u; // 80038C6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038C3C; } // 80038C70
L_80038C74:;
  c->r[0]=0u+0x00000000u; // 80038C74
L_80038C78:;
  cmps(c,0,(int32_t)c->r[0],0); // 80038C78
  if (crb(c,2)) { goto L_80038D94; } // 80038C7C
  c->r[6]=R32(c->r[3]+0x00000004u); // 80038C80
  c->r[4]=R32(c->r[31]+c->r[29]); // 80038C84
  c->r[8]=R32(c->r[6]+0x00000000u); // 80038C88
  c->r[9]=R32(c->r[6]+0x00000004u); // 80038C8C
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038C90
  c->r[0]=R32(c->r[8]+0x00000004u); // 80038C94
  c->r[5]=c->r[9]|c->r[9]; // 80038C98
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80038C9C
  c->r[0]=c->r[0]-c->r[3]; // 80038CA0
  c->r[0]=sraw(c,c->r[0],2); // 80038CA4
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80038CA8
  c->r[0]=c->r[3]-c->r[9]; // 80038CAC
  c->ctr=c->r[0]; // 80038CB0
  cmpu(c,0,c->r[9],c->r[3]); // 80038CB4
  if (!crb(c,0)) { goto L_80038CF4; } // 80038CB8
L_80038CBC:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038CBC
  c->r[3]=R32(c->r[3]+c->r[7]); // 80038CC0
  c->r[0]=R32(c->r[3]+0x00000014u); // 80038CC4
  cmpu(c,0,c->r[4],c->r[0]); // 80038CC8
  if (!crb(c,2)) { goto L_80038CE8; } // 80038CCC
  W32(c->r[6]+0x00000004u,c->r[5]); // 80038CD0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80038CD4
  c->r[3]=R32(c->r[6]+0x00000000u); // 80038CD8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80038CDC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80038CE0
  goto L_80038D48; // 80038CE4
L_80038CE8:;
  c->r[7]=c->r[7]+0x00000004u; // 80038CE8
  c->r[5]=c->r[5]+0x00000001u; // 80038CEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038CBC; } // 80038CF0
L_80038CF4:;
  c->r[4]=R32(c->r[31]+c->r[29]); // 80038CF4
  c->r[7]=0u+0x00000000u; // 80038CF8
  c->r[5]=0u+0x00000000u; // 80038CFC
  c->ctr=c->r[9]; // 80038D00
  cmpu(c,0,c->r[9],0x00000000u); // 80038D04
  if (!crb(c,1)) { goto L_80038D44; } // 80038D08
L_80038D0C:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038D0C
  c->r[3]=R32(c->r[3]+c->r[5]); // 80038D10
  c->r[0]=R32(c->r[3]+0x00000014u); // 80038D14
  cmpu(c,0,c->r[4],c->r[0]); // 80038D18
  if (!crb(c,2)) { goto L_80038D38; } // 80038D1C
  W32(c->r[6]+0x00000004u,c->r[7]); // 80038D20
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80038D24
  c->r[3]=R32(c->r[6]+0x00000000u); // 80038D28
  c->r[3]=R32(c->r[3]+0x00000000u); // 80038D2C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80038D30
  goto L_80038D48; // 80038D34
L_80038D38:;
  c->r[5]=c->r[5]+0x00000004u; // 80038D38
  c->r[7]=c->r[7]+0x00000001u; // 80038D3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038D0C; } // 80038D40
L_80038D44:;
  c->r[3]=0u+0x00000000u; // 80038D44
L_80038D48:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80038D48
  cmps(c,0,(int32_t)c->r[4],37); // 80038D4C
  if (!crb(c,1)) { goto L_80038D68; } // 80038D50
  c->r[0]=R32(c->r[3]+0x00000010u); // 80038D54
  cmpu(c,0,c->r[0],0x00000001u); // 80038D58
  if (!crb(c,2)) { goto L_80038D68; } // 80038D5C
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80038D60
  goto L_80038F88; // 80038D64
L_80038D68:;
  cmps(c,0,(int32_t)c->r[4],26); // 80038D68
  if (crb(c,0)) { goto L_80038D78; } // 80038D6C
  cmps(c,0,(int32_t)c->r[4],36); // 80038D70
  if (!crb(c,2)) { goto L_80038D8C; } // 80038D74
L_80038D78:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80038D78
  cmpu(c,0,c->r[0],0x00000001u); // 80038D7C
  if (!crb(c,2)) { goto L_80038D8C; } // 80038D80
  c->r[28]=c->r[3]+0x00000008u; // 80038D84
  goto L_80038F88; // 80038D88
L_80038D8C:;
  c->r[28]=R32(c->r[3]+0x00000008u); // 80038D8C
  goto L_80038F88; // 80038D90
L_80038D94:;
  c->r[3]=0u+0x803D0000u; // 80038D94
  c->r[3]=c->r[3]+0x0000407Cu; // 80038D98
  c->lr=0x80038DA0u; f_800B7570(c); // 80038D9C
  c->r[3]=R32(c->r[3]+0x00000068u); // 80038DA0
  c->r[5]=R32(c->r[31]+c->r[29]); // 80038DA4
  c->r[3]=R32(c->r[3]+0x00000010u); // 80038DA8
  c->r[7]=R32(c->r[3]+0x00000004u); // 80038DAC
  c->r[9]=R32(c->r[7]+0x00000000u); // 80038DB0
  c->r[10]=R32(c->r[7]+0x00000004u); // 80038DB4
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038DB8
  c->r[0]=R32(c->r[9]+0x00000004u); // 80038DBC
  c->r[6]=c->r[10]|c->r[10]; // 80038DC0
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80038DC4
  c->r[0]=c->r[0]-c->r[4]; // 80038DC8
  c->r[0]=sraw(c,c->r[0],2); // 80038DCC
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80038DD0
  c->r[0]=c->r[4]-c->r[10]; // 80038DD4
  c->ctr=c->r[0]; // 80038DD8
  cmpu(c,0,c->r[10],c->r[4]); // 80038DDC
  if (!crb(c,0)) { goto L_80038E1C; } // 80038DE0
L_80038DE4:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038DE4
  c->r[4]=R32(c->r[4]+c->r[8]); // 80038DE8
  c->r[0]=R32(c->r[4]+0x00000014u); // 80038DEC
  cmpu(c,0,c->r[5],c->r[0]); // 80038DF0
  if (!crb(c,2)) { goto L_80038E10; } // 80038DF4
  W32(c->r[7]+0x00000004u,c->r[6]); // 80038DF8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80038DFC
  c->r[4]=R32(c->r[7]+0x00000000u); // 80038E00
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038E04
  c->r[0]=R32(c->r[4]+c->r[0]); // 80038E08
  goto L_80038E70; // 80038E0C
L_80038E10:;
  c->r[8]=c->r[8]+0x00000004u; // 80038E10
  c->r[6]=c->r[6]+0x00000001u; // 80038E14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038DE4; } // 80038E18
L_80038E1C:;
  c->r[5]=R32(c->r[31]+c->r[29]); // 80038E1C
  c->r[8]=0u+0x00000000u; // 80038E20
  c->r[6]=0u+0x00000000u; // 80038E24
  c->ctr=c->r[10]; // 80038E28
  cmpu(c,0,c->r[10],0x00000000u); // 80038E2C
  if (!crb(c,1)) { goto L_80038E6C; } // 80038E30
L_80038E34:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 80038E34
  c->r[4]=R32(c->r[4]+c->r[6]); // 80038E38
  c->r[0]=R32(c->r[4]+0x00000014u); // 80038E3C
  cmpu(c,0,c->r[5],c->r[0]); // 80038E40
  if (!crb(c,2)) { goto L_80038E60; } // 80038E44
  W32(c->r[7]+0x00000004u,c->r[8]); // 80038E48
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80038E4C
  c->r[4]=R32(c->r[7]+0x00000000u); // 80038E50
  c->r[4]=R32(c->r[4]+0x00000000u); // 80038E54
  c->r[0]=R32(c->r[4]+c->r[0]); // 80038E58
  goto L_80038E70; // 80038E5C
L_80038E60:;
  c->r[6]=c->r[6]+0x00000004u; // 80038E60
  c->r[8]=c->r[8]+0x00000001u; // 80038E64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038E34; } // 80038E68
L_80038E6C:;
  c->r[0]=0u+0x00000000u; // 80038E6C
L_80038E70:;
  cmps(c,0,(int32_t)c->r[0],0); // 80038E70
  if (crb(c,2)) { goto L_80038F88; } // 80038E74
  c->r[6]=R32(c->r[3]+0x00000004u); // 80038E78
  c->r[4]=R32(c->r[31]+c->r[29]); // 80038E7C
  c->r[8]=R32(c->r[6]+0x00000000u); // 80038E80
  c->r[9]=R32(c->r[6]+0x00000004u); // 80038E84
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038E88
  c->r[0]=R32(c->r[8]+0x00000004u); // 80038E8C
  c->r[5]=c->r[9]|c->r[9]; // 80038E90
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80038E94
  c->r[0]=c->r[0]-c->r[3]; // 80038E98
  c->r[0]=sraw(c,c->r[0],2); // 80038E9C
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80038EA0
  c->r[0]=c->r[3]-c->r[9]; // 80038EA4
  c->ctr=c->r[0]; // 80038EA8
  cmpu(c,0,c->r[9],c->r[3]); // 80038EAC
  if (!crb(c,0)) { goto L_80038EEC; } // 80038EB0
L_80038EB4:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038EB4
  c->r[3]=R32(c->r[3]+c->r[7]); // 80038EB8
  c->r[0]=R32(c->r[3]+0x00000014u); // 80038EBC
  cmpu(c,0,c->r[4],c->r[0]); // 80038EC0
  if (!crb(c,2)) { goto L_80038EE0; } // 80038EC4
  W32(c->r[6]+0x00000004u,c->r[5]); // 80038EC8
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80038ECC
  c->r[3]=R32(c->r[6]+0x00000000u); // 80038ED0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80038ED4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80038ED8
  goto L_80038F40; // 80038EDC
L_80038EE0:;
  c->r[7]=c->r[7]+0x00000004u; // 80038EE0
  c->r[5]=c->r[5]+0x00000001u; // 80038EE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038EB4; } // 80038EE8
L_80038EEC:;
  c->r[4]=R32(c->r[31]+c->r[29]); // 80038EEC
  c->r[7]=0u+0x00000000u; // 80038EF0
  c->r[5]=0u+0x00000000u; // 80038EF4
  c->ctr=c->r[9]; // 80038EF8
  cmpu(c,0,c->r[9],0x00000000u); // 80038EFC
  if (!crb(c,1)) { goto L_80038F3C; } // 80038F00
L_80038F04:;
  c->r[3]=R32(c->r[8]+0x00000000u); // 80038F04
  c->r[3]=R32(c->r[3]+c->r[5]); // 80038F08
  c->r[0]=R32(c->r[3]+0x00000014u); // 80038F0C
  cmpu(c,0,c->r[4],c->r[0]); // 80038F10
  if (!crb(c,2)) { goto L_80038F30; } // 80038F14
  W32(c->r[6]+0x00000004u,c->r[7]); // 80038F18
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80038F1C
  c->r[3]=R32(c->r[6]+0x00000000u); // 80038F20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80038F24
  c->r[3]=R32(c->r[3]+c->r[0]); // 80038F28
  goto L_80038F40; // 80038F2C
L_80038F30:;
  c->r[5]=c->r[5]+0x00000004u; // 80038F30
  c->r[7]=c->r[7]+0x00000001u; // 80038F34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038F04; } // 80038F38
L_80038F3C:;
  c->r[3]=0u+0x00000000u; // 80038F3C
L_80038F40:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80038F40
  cmps(c,0,(int32_t)c->r[4],37); // 80038F44
  if (!crb(c,1)) { goto L_80038F60; } // 80038F48
  c->r[0]=R32(c->r[3]+0x00000010u); // 80038F4C
  cmpu(c,0,c->r[0],0x00000001u); // 80038F50
  if (!crb(c,2)) { goto L_80038F60; } // 80038F54
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80038F58
  goto L_80038F88; // 80038F5C
L_80038F60:;
  cmps(c,0,(int32_t)c->r[4],26); // 80038F60
  if (crb(c,0)) { goto L_80038F70; } // 80038F64
  cmps(c,0,(int32_t)c->r[4],36); // 80038F68
  if (!crb(c,2)) { goto L_80038F84; } // 80038F6C
L_80038F70:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80038F70
  cmpu(c,0,c->r[0],0x00000001u); // 80038F74
  if (!crb(c,2)) { goto L_80038F84; } // 80038F78
  c->r[28]=c->r[3]+0x00000008u; // 80038F7C
  goto L_80038F88; // 80038F80
L_80038F84:;
  c->r[28]=R32(c->r[3]+0x00000008u); // 80038F84
L_80038F88:;
  cmps(c,0,(int32_t)c->r[28],0); // 80038F88
  if (!crb(c,2)) { goto L_80038FAC; } // 80038F8C
  c->r[0]=c->r[27]+0xFFFFFFEEu; // 80038F90
  cmpu(c,0,c->r[0],0x00000005u); // 80038F94
  if (crb(c,1)) { goto L_80038FAC; } // 80038F98
  c->r[3]=c->r[26]|c->r[26]; // 80038F9C
  c->r[4]=c->r[27]+0xFFFFFFFAu; // 80038FA0
  c->lr=0x80038FA8u; f_80038B60(c); // 80038FA4
  c->r[28]=c->r[3]|c->r[3]; // 80038FA8
L_80038FAC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80038FAC
  if (crb(c,2)) { goto L_80038FB8; } // 80038FB0
  W32(c->r[30]+0x00000008u,c->r[28]); // 80038FB4
L_80038FB8:;
  c->r[3]=c->r[28]|c->r[28]; // 80038FB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80038FBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80038FC0
  c->lr=c->r[0]; // 80038FC4
  c->r[1]=c->r[1]+0x00000020u; // 80038FC8
  return; // 80038FCC
}

// fn_80038FD0
void f_80038FD0(Ctx* __restrict c) {
  trace_call(0x80038FD0u);
  c->r[0]=0u+0x00000008u; // 80038FD0
  c->r[5]=c->r[3]|c->r[3]; // 80038FD4
  c->r[6]=0u+0x00000000u; // 80038FD8
  c->r[4]=0u+0x00000000u; // 80038FDC
  c->ctr=c->r[0]; // 80038FE0
L_80038FE4:;
  W32(c->r[5]+0x00000008u,c->r[4]); // 80038FE4
  c->r[6]=c->r[6]+0x00000028u; // 80038FE8
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80038FEC
  W32(c->r[5]+0x00000010u,c->r[4]); // 80038FF0
  W32(c->r[5]+0x00000014u,c->r[4]); // 80038FF4
  W32(c->r[5]+0x00000018u,c->r[4]); // 80038FF8
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80038FFC
  W32(c->r[5]+0x00000020u,c->r[4]); // 80039000
  W32(c->r[5]+0x00000024u,c->r[4]); // 80039004
  W32(c->r[5]+0x00000028u,c->r[4]); // 80039008
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 8003900C
  W32(c->r[5]+0x00000030u,c->r[4]); // 80039010
  W32(c->r[5]+0x00000034u,c->r[4]); // 80039014
  W32(c->r[5]+0x00000038u,c->r[4]); // 80039018
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 8003901C
  W32(c->r[5]+0x00000040u,c->r[4]); // 80039020
  W32(c->r[5]+0x00000044u,c->r[4]); // 80039024
  W32(c->r[5]+0x00000048u,c->r[4]); // 80039028
  W32(c->r[5]+0x0000004Cu,c->r[4]); // 8003902C
  W32(c->r[5]+0x00000050u,c->r[4]); // 80039030
  W32(c->r[5]+0x00000054u,c->r[4]); // 80039034
  W32(c->r[5]+0x00000058u,c->r[4]); // 80039038
  W32(c->r[5]+0x0000005Cu,c->r[4]); // 8003903C
  W32(c->r[5]+0x00000060u,c->r[4]); // 80039040
  W32(c->r[5]+0x00000064u,c->r[4]); // 80039044
  W32(c->r[5]+0x00000068u,c->r[4]); // 80039048
  W32(c->r[5]+0x0000006Cu,c->r[4]); // 8003904C
  W32(c->r[5]+0x00000070u,c->r[4]); // 80039050
  W32(c->r[5]+0x00000074u,c->r[4]); // 80039054
  W32(c->r[5]+0x00000078u,c->r[4]); // 80039058
  W32(c->r[5]+0x0000007Cu,c->r[4]); // 8003905C
  W32(c->r[5]+0x00000080u,c->r[4]); // 80039060
  W32(c->r[5]+0x00000084u,c->r[4]); // 80039064
  W32(c->r[5]+0x00000088u,c->r[4]); // 80039068
  W32(c->r[5]+0x0000008Cu,c->r[4]); // 8003906C
  W32(c->r[5]+0x00000090u,c->r[4]); // 80039070
  W32(c->r[5]+0x00000094u,c->r[4]); // 80039074
  W32(c->r[5]+0x00000098u,c->r[4]); // 80039078
  W32(c->r[5]+0x0000009Cu,c->r[4]); // 8003907C
  W32(c->r[5]+0x000000A0u,c->r[4]); // 80039080
  W32(c->r[5]+0x000000A4u,c->r[4]); // 80039084
  c->r[5]=c->r[5]+0x000000A0u; // 80039088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80038FE4; } // 8003908C
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80039090
  c->r[0]=0u+0x00000000u; // 80039094
  c->r[3]=c->r[3]+c->r[4]; // 80039098
  W32(c->r[3]+0x00000008u,c->r[0]); // 8003909C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800390A0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800390A4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800390A8
  W32(c->r[3]+0x00000018u,c->r[0]); // 800390AC
  return; // 800390B0
}

// fn_800390B4
void f_800390B4(Ctx* __restrict c) {
  trace_call(0x800390B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800390B4
  c->r[0]=c->lr; // 800390B8
  c->r[3]=0u+0x803C0000u; // 800390BC
  c->r[4]=0u+0x80010000u; // 800390C0
  c->r[5]=0u+0x80010000u; // 800390C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800390C8
  c->r[6]=0u+0x00000004u; // 800390CC
  c->r[3]=c->r[3]+0x00002804u; // 800390D0
  c->r[4]=c->r[4]+0xFFFF9804u; // 800390D4
  c->r[5]=c->r[5]+0xFFFF8BD8u; // 800390D8
  c->r[7]=0u+0x00000145u; // 800390DC
  c->lr=0x800390E4u; f_800C2B8C(c); // 800390E0
  c->r[4]=0u+0x80040000u; // 800390E4
  c->r[5]=0u+0x803C0000u; // 800390E8
  c->r[4]=c->r[4]+0xFFFF910Cu; // 800390EC
  c->r[3]=0u+0x00000000u; // 800390F0
  c->r[5]=c->r[5]+0x000027F8u; // 800390F4
  c->lr=0x800390FCu; f_800C2A60(c); // 800390F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800390FC
  c->lr=c->r[0]; // 80039100
  c->r[1]=c->r[1]+0x00000010u; // 80039104
  return; // 80039108
}

// fn_8003910C
void f_8003910C(Ctx* __restrict c) {
  trace_call(0x8003910Cu);
  c->r[3]=0u+0x803C0000u; // 8003910C
  c->r[4]=0u+0x80010000u; // 80039110
  c->r[3]=c->r[3]+0x00002804u; // 80039114
  c->r[5]=0u+0x00000004u; // 80039118
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 8003911C
  c->r[6]=0u+0x00000145u; // 80039120
  f_800C2C84(c); return; // 80039124
}

// fn_80039128
void f_80039128(Ctx* __restrict c) {
  trace_call(0x80039128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80039128
  c->r[0]=c->lr; // 8003912C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80039130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80039134
  c->r[31]=c->r[3]|c->r[3]; // 80039138
  c->lr=0x80039140u; f_80040B7C(c); // 8003913C
  c->r[4]=0u+0x80380000u; // 80039140
  c->r[3]=c->r[31]|c->r[31]; // 80039144
  c->r[4]=c->r[4]+0x00004730u; // 80039148
  W32(c->r[31]+0x00000014u,c->r[4]); // 8003914C
  c->r[4]=c->r[13]+0xFFFF950Cu; // 80039150
  c->lr=0x80039158u; f_8030BE60(c); // 80039154
  c->r[5]=0u+0x00000000u; // 80039158
  W32(c->r[31]+0x00000144u,c->r[3]); // 8003915C
  c->r[0]=0u+0x00000001u; // 80039160
  c->r[3]=c->r[31]|c->r[31]; // 80039164
  W32(c->r[31]+0x00000148u,c->r[5]); // 80039168
  c->r[4]=0u+0x00000007u; // 8003916C
  W32(c->r[31]+0x00000150u,c->r[5]); // 80039170
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80039174
  c->r[5]=R32(c->r[13]+0xFFFF9490u); // 80039178
  c->lr=0x80039180u; f_8030FFA0(c); // 8003917C
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80039180
  c->r[3]=0u+0x0000005Au; // 80039184
  c->r[4]=0u+0x0000005Bu; // 80039188
  W32(c->r[31]+0x00000138u,c->r[3]); // 8003918C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80039190
  c->r[3]=c->r[31]|c->r[31]; // 80039194
  W32(c->r[31]+0x00000078u,c->r[4]); // 80039198
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 8003919C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800391A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800391A4
  c->lr=c->r[0]; // 800391A8
  c->r[1]=c->r[1]+0x00000010u; // 800391AC
  return; // 800391B0
}

// fn_800391B4
void f_800391B4(Ctx* __restrict c) {
  trace_call(0x800391B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800391B4
  c->r[0]=c->lr; // 800391B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800391BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800391C0
  c->r[31]=c->r[5]|c->r[5]; // 800391C4
  c->r[5]=0u+0x00000010u; // 800391C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800391CC
  c->r[30]=c->r[4]|c->r[4]; // 800391D0
  c->r[4]=0u+0x00000190u; // 800391D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800391D8
  c->r[29]=c->r[3]|c->r[3]; // 800391DC
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 800391E0
  c->r[3]=R32(c->r[6]+0x00000000u); // 800391E4
  c->lr=0x800391ECu; f_802A89E4(c); // 800391E8
  cmps(c,0,(int32_t)c->r[3],0); // 800391EC
  if (crb(c,2)) { goto L_80039204; } // 800391F0
  c->r[4]=c->r[29]|c->r[29]; // 800391F4
  c->r[5]=c->r[30]|c->r[30]; // 800391F8
  c->r[6]=c->r[31]|c->r[31]; // 800391FC
  c->lr=0x80039204u; f_80039128(c); // 80039200
L_80039204:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80039204
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80039208
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003920C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80039210
  c->lr=c->r[0]; // 80039214
  c->r[1]=c->r[1]+0x00000020u; // 80039218
  return; // 8003921C
}

// fn_80039220
void f_80039220(Ctx* __restrict c) {
  trace_call(0x80039220u);
  f_80041060(c); return; // 80039220
}

// fn_80039224
void f_80039224(Ctx* __restrict c) {
  trace_call(0x80039224u);
  f_8030C6C0(c); return; // 80039224
}

// fn_80039228
void f_80039228(Ctx* __restrict c) {
  trace_call(0x80039228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80039228
  c->r[0]=c->lr; // 8003922C
  c->r[5]=0u+0x00000000u; // 80039230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80039234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80039238
  c->r[31]=0u+0x80370000u; // 8003923C
  c->r[4]=c->r[31]+0x00003A98u; // 80039240
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039244
  c->lr=0x8003924Cu; f_8031E640(c); // 80039248
  W32(c->r[13]+0xFFFF94D0u,c->r[3]); // 8003924C
  c->r[31]=c->r[31]+0x00003A98u; // 80039250
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039254
  c->r[4]=c->r[31]+0x0000000Eu; // 80039258
  c->r[5]=0u+0x00000000u; // 8003925C
  c->lr=0x80039264u; f_8031E640(c); // 80039260
  W32(c->r[13]+0xFFFF94D4u,c->r[3]); // 80039264
  c->r[4]=c->r[31]+0x0000001Au; // 80039268
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003926C
  c->r[5]=0u+0x00000000u; // 80039270
  c->lr=0x80039278u; f_8031E640(c); // 80039274
  W32(c->r[13]+0xFFFF94D8u,c->r[3]); // 80039278
  c->r[4]=c->r[31]+0x00000021u; // 8003927C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039280
  c->r[5]=0u+0x00000000u; // 80039284
  c->lr=0x8003928Cu; f_8031E640(c); // 80039288
  W32(c->r[13]+0xFFFF94DCu,c->r[3]); // 8003928C
  c->r[4]=c->r[31]+0x0000002Cu; // 80039290
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039294
  c->r[5]=0u+0x00000000u; // 80039298
  c->lr=0x800392A0u; f_8031E640(c); // 8003929C
  W32(c->r[13]+0xFFFF94E0u,c->r[3]); // 800392A0
  c->r[4]=c->r[31]+0x00000037u; // 800392A4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800392A8
  c->r[5]=0u+0x00000000u; // 800392AC
  c->lr=0x800392B4u; f_8031E640(c); // 800392B0
  W32(c->r[13]+0xFFFF94E4u,c->r[3]); // 800392B4
  c->r[4]=c->r[31]+0x00000042u; // 800392B8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800392BC
  c->r[5]=0u+0x00000000u; // 800392C0
  c->lr=0x800392C8u; f_8031E640(c); // 800392C4
  W32(c->r[13]+0xFFFF94E8u,c->r[3]); // 800392C8
  c->r[4]=c->r[31]+0x0000004Cu; // 800392CC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800392D0
  c->r[5]=0u+0x00000000u; // 800392D4
  c->lr=0x800392DCu; f_8031E640(c); // 800392D8
  W32(c->r[13]+0xFFFF94ECu,c->r[3]); // 800392DC
  c->r[4]=c->r[31]+0x00000056u; // 800392E0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800392E4
  c->r[5]=0u+0x00000000u; // 800392E8
  c->lr=0x800392F0u; f_8031E640(c); // 800392EC
  W32(c->r[13]+0xFFFF94F0u,c->r[3]); // 800392F0
  c->r[4]=c->r[31]+0x00000060u; // 800392F4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800392F8
  c->r[5]=0u+0x00000000u; // 800392FC
  c->lr=0x80039304u; f_8031E640(c); // 80039300
  W32(c->r[13]+0xFFFF94F4u,c->r[3]); // 80039304
  c->r[4]=c->r[31]+0x00000069u; // 80039308
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003930C
  c->r[5]=0u+0x00000000u; // 80039310
  c->lr=0x80039318u; f_8031E640(c); // 80039314
  W32(c->r[13]+0xFFFF94F8u,c->r[3]); // 80039318
  c->r[4]=c->r[31]+0x00000071u; // 8003931C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039320
  c->r[5]=0u+0x00000000u; // 80039324
  c->lr=0x8003932Cu; f_8031E640(c); // 80039328
  W32(c->r[13]+0xFFFF94FCu,c->r[3]); // 8003932C
  c->r[4]=c->r[31]+0x0000007Bu; // 80039330
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039334
  c->r[5]=0u+0x00000000u; // 80039338
  c->lr=0x80039340u; f_8031E640(c); // 8003933C
  W32(c->r[13]+0xFFFF9500u,c->r[3]); // 80039340
  c->r[4]=c->r[31]+0x0000008Bu; // 80039344
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039348
  c->r[5]=0u+0x00000000u; // 8003934C
  c->lr=0x80039354u; f_8031E640(c); // 80039350
  W32(c->r[13]+0xFFFF9504u,c->r[3]); // 80039354
  c->r[4]=c->r[31]+0x00000097u; // 80039358
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003935C
  c->r[5]=0u+0x00000000u; // 80039360
  c->lr=0x80039368u; f_8031E640(c); // 80039364
  W32(c->r[13]+0xFFFF9508u,c->r[3]); // 80039368
  c->r[4]=c->r[31]+0x000000ABu; // 8003936C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80039370
  c->r[5]=0u+0x00000000u; // 80039374
  c->lr=0x8003937Cu; f_8031E640(c); // 80039378
  W32(c->r[13]+0xFFFF950Cu,c->r[3]); // 8003937C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80039380
  c->r[0]=R32(c->r[1]+0x00000014u); // 80039384
  c->lr=c->r[0]; // 80039388
  c->r[1]=c->r[1]+0x00000010u; // 8003938C
  return; // 80039390
}

// fn_80039394
void f_80039394(Ctx* __restrict c) {
  trace_call(0x80039394u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80039394
  c->r[0]=c->lr; // 80039398
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003939C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800393A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800393A4
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800393A8
  c->r[3]=c->r[30]|c->r[30]; // 800393AC
  c->lr=0x800393B4u; f_8024B0E0(c); // 800393B0
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 800393B4
  c->r[4]=R32(c->r[13]+0xFFFF94D0u); // 800393B8
  cmpu(c,0,c->r[4],c->r[31]); // 800393BC
  if (!crb(c,2)) { goto L_800393D0; } // 800393C0
  c->r[3]=c->r[30]|c->r[30]; // 800393C4
  c->lr=0x800393CCu; f_8024B1C0(c); // 800393C8
  goto L_80039408; // 800393CC
L_800393D0:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800393D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800393D4
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800393D8
  cmpu(c,0,c->r[0],0x00000001u); // 800393DC
  if (!crb(c,2)) { goto L_800393FC; } // 800393E0
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800393E4
  cmpu(c,0,c->r[0],0x00000001u); // 800393E8
  if (!crb(c,2)) { goto L_800393FC; } // 800393EC
  c->r[3]=c->r[30]|c->r[30]; // 800393F0
  c->r[4]=c->r[13]+0xFFFF94D0u; // 800393F4
  c->lr=0x800393FCu; f_8031EEDC(c); // 800393F8
L_800393FC:;
  W32(c->r[13]+0xFFFF94D0u,c->r[31]); // 800393FC
  c->r[3]=c->r[30]|c->r[30]; // 80039400
  c->lr=0x80039408u; f_8024B1C0(c); // 80039404
L_80039408:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039408
  c->r[3]=c->r[30]|c->r[30]; // 8003940C
  c->lr=0x80039414u; f_8024B0E0(c); // 80039410
  c->r[4]=R32(c->r[13]+0xFFFF94D4u); // 80039414
  cmpu(c,0,c->r[4],c->r[31]); // 80039418
  if (!crb(c,2)) { goto L_8003942C; } // 8003941C
  c->r[3]=c->r[30]|c->r[30]; // 80039420
  c->lr=0x80039428u; f_8024B1C0(c); // 80039424
  goto L_80039464; // 80039428
L_8003942C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003942C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039430
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039434
  cmpu(c,0,c->r[0],0x00000001u); // 80039438
  if (!crb(c,2)) { goto L_80039458; } // 8003943C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039440
  cmpu(c,0,c->r[0],0x00000001u); // 80039444
  if (!crb(c,2)) { goto L_80039458; } // 80039448
  c->r[3]=c->r[30]|c->r[30]; // 8003944C
  c->r[4]=c->r[13]+0xFFFF94D4u; // 80039450
  c->lr=0x80039458u; f_8031EEDC(c); // 80039454
L_80039458:;
  W32(c->r[13]+0xFFFF94D4u,c->r[31]); // 80039458
  c->r[3]=c->r[30]|c->r[30]; // 8003945C
  c->lr=0x80039464u; f_8024B1C0(c); // 80039460
L_80039464:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039464
  c->r[3]=c->r[30]|c->r[30]; // 80039468
  c->lr=0x80039470u; f_8024B0E0(c); // 8003946C
  c->r[4]=R32(c->r[13]+0xFFFF94D8u); // 80039470
  cmpu(c,0,c->r[4],c->r[31]); // 80039474
  if (!crb(c,2)) { goto L_80039488; } // 80039478
  c->r[3]=c->r[30]|c->r[30]; // 8003947C
  c->lr=0x80039484u; f_8024B1C0(c); // 80039480
  goto L_800394C0; // 80039484
L_80039488:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039488
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003948C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039490
  cmpu(c,0,c->r[0],0x00000001u); // 80039494
  if (!crb(c,2)) { goto L_800394B4; } // 80039498
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003949C
  cmpu(c,0,c->r[0],0x00000001u); // 800394A0
  if (!crb(c,2)) { goto L_800394B4; } // 800394A4
  c->r[3]=c->r[30]|c->r[30]; // 800394A8
  c->r[4]=c->r[13]+0xFFFF94D8u; // 800394AC
  c->lr=0x800394B4u; f_8031EEDC(c); // 800394B0
L_800394B4:;
  W32(c->r[13]+0xFFFF94D8u,c->r[31]); // 800394B4
  c->r[3]=c->r[30]|c->r[30]; // 800394B8
  c->lr=0x800394C0u; f_8024B1C0(c); // 800394BC
L_800394C0:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800394C0
  c->r[3]=c->r[30]|c->r[30]; // 800394C4
  c->lr=0x800394CCu; f_8024B0E0(c); // 800394C8
  c->r[4]=R32(c->r[13]+0xFFFF94DCu); // 800394CC
  cmpu(c,0,c->r[4],c->r[31]); // 800394D0
  if (!crb(c,2)) { goto L_800394E4; } // 800394D4
  c->r[3]=c->r[30]|c->r[30]; // 800394D8
  c->lr=0x800394E0u; f_8024B1C0(c); // 800394DC
  goto L_8003951C; // 800394E0
L_800394E4:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800394E4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800394E8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800394EC
  cmpu(c,0,c->r[0],0x00000001u); // 800394F0
  if (!crb(c,2)) { goto L_80039510; } // 800394F4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800394F8
  cmpu(c,0,c->r[0],0x00000001u); // 800394FC
  if (!crb(c,2)) { goto L_80039510; } // 80039500
  c->r[3]=c->r[30]|c->r[30]; // 80039504
  c->r[4]=c->r[13]+0xFFFF94DCu; // 80039508
  c->lr=0x80039510u; f_8031EEDC(c); // 8003950C
L_80039510:;
  W32(c->r[13]+0xFFFF94DCu,c->r[31]); // 80039510
  c->r[3]=c->r[30]|c->r[30]; // 80039514
  c->lr=0x8003951Cu; f_8024B1C0(c); // 80039518
L_8003951C:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 8003951C
  c->r[3]=c->r[30]|c->r[30]; // 80039520
  c->lr=0x80039528u; f_8024B0E0(c); // 80039524
  c->r[4]=R32(c->r[13]+0xFFFF94E0u); // 80039528
  cmpu(c,0,c->r[4],c->r[31]); // 8003952C
  if (!crb(c,2)) { goto L_80039540; } // 80039530
  c->r[3]=c->r[30]|c->r[30]; // 80039534
  c->lr=0x8003953Cu; f_8024B1C0(c); // 80039538
  goto L_80039578; // 8003953C
L_80039540:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039540
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039544
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039548
  cmpu(c,0,c->r[0],0x00000001u); // 8003954C
  if (!crb(c,2)) { goto L_8003956C; } // 80039550
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039554
  cmpu(c,0,c->r[0],0x00000001u); // 80039558
  if (!crb(c,2)) { goto L_8003956C; } // 8003955C
  c->r[3]=c->r[30]|c->r[30]; // 80039560
  c->r[4]=c->r[13]+0xFFFF94E0u; // 80039564
  c->lr=0x8003956Cu; f_8031EEDC(c); // 80039568
L_8003956C:;
  W32(c->r[13]+0xFFFF94E0u,c->r[31]); // 8003956C
  c->r[3]=c->r[30]|c->r[30]; // 80039570
  c->lr=0x80039578u; f_8024B1C0(c); // 80039574
L_80039578:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039578
  c->r[3]=c->r[30]|c->r[30]; // 8003957C
  c->lr=0x80039584u; f_8024B0E0(c); // 80039580
  c->r[4]=R32(c->r[13]+0xFFFF94E4u); // 80039584
  cmpu(c,0,c->r[4],c->r[31]); // 80039588
  if (!crb(c,2)) { goto L_8003959C; } // 8003958C
  c->r[3]=c->r[30]|c->r[30]; // 80039590
  c->lr=0x80039598u; f_8024B1C0(c); // 80039594
  goto L_800395D4; // 80039598
L_8003959C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003959C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800395A0
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800395A4
  cmpu(c,0,c->r[0],0x00000001u); // 800395A8
  if (!crb(c,2)) { goto L_800395C8; } // 800395AC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800395B0
  cmpu(c,0,c->r[0],0x00000001u); // 800395B4
  if (!crb(c,2)) { goto L_800395C8; } // 800395B8
  c->r[3]=c->r[30]|c->r[30]; // 800395BC
  c->r[4]=c->r[13]+0xFFFF94E4u; // 800395C0
  c->lr=0x800395C8u; f_8031EEDC(c); // 800395C4
L_800395C8:;
  W32(c->r[13]+0xFFFF94E4u,c->r[31]); // 800395C8
  c->r[3]=c->r[30]|c->r[30]; // 800395CC
  c->lr=0x800395D4u; f_8024B1C0(c); // 800395D0
L_800395D4:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800395D4
  c->r[3]=c->r[30]|c->r[30]; // 800395D8
  c->lr=0x800395E0u; f_8024B0E0(c); // 800395DC
  c->r[4]=R32(c->r[13]+0xFFFF94E8u); // 800395E0
  cmpu(c,0,c->r[4],c->r[31]); // 800395E4
  if (!crb(c,2)) { goto L_800395F8; } // 800395E8
  c->r[3]=c->r[30]|c->r[30]; // 800395EC
  c->lr=0x800395F4u; f_8024B1C0(c); // 800395F0
  goto L_80039630; // 800395F4
L_800395F8:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800395F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800395FC
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039600
  cmpu(c,0,c->r[0],0x00000001u); // 80039604
  if (!crb(c,2)) { goto L_80039624; } // 80039608
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003960C
  cmpu(c,0,c->r[0],0x00000001u); // 80039610
  if (!crb(c,2)) { goto L_80039624; } // 80039614
  c->r[3]=c->r[30]|c->r[30]; // 80039618
  c->r[4]=c->r[13]+0xFFFF94E8u; // 8003961C
  c->lr=0x80039624u; f_8031EEDC(c); // 80039620
L_80039624:;
  W32(c->r[13]+0xFFFF94E8u,c->r[31]); // 80039624
  c->r[3]=c->r[30]|c->r[30]; // 80039628
  c->lr=0x80039630u; f_8024B1C0(c); // 8003962C
L_80039630:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039630
  c->r[3]=c->r[30]|c->r[30]; // 80039634
  c->lr=0x8003963Cu; f_8024B0E0(c); // 80039638
  c->r[4]=R32(c->r[13]+0xFFFF94ECu); // 8003963C
  cmpu(c,0,c->r[4],c->r[31]); // 80039640
  if (!crb(c,2)) { goto L_80039654; } // 80039644
  c->r[3]=c->r[30]|c->r[30]; // 80039648
  c->lr=0x80039650u; f_8024B1C0(c); // 8003964C
  goto L_8003968C; // 80039650
L_80039654:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039654
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039658
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003965C
  cmpu(c,0,c->r[0],0x00000001u); // 80039660
  if (!crb(c,2)) { goto L_80039680; } // 80039664
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039668
  cmpu(c,0,c->r[0],0x00000001u); // 8003966C
  if (!crb(c,2)) { goto L_80039680; } // 80039670
  c->r[3]=c->r[30]|c->r[30]; // 80039674
  c->r[4]=c->r[13]+0xFFFF94ECu; // 80039678
  c->lr=0x80039680u; f_8031EEDC(c); // 8003967C
L_80039680:;
  W32(c->r[13]+0xFFFF94ECu,c->r[31]); // 80039680
  c->r[3]=c->r[30]|c->r[30]; // 80039684
  c->lr=0x8003968Cu; f_8024B1C0(c); // 80039688
L_8003968C:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 8003968C
  c->r[3]=c->r[30]|c->r[30]; // 80039690
  c->lr=0x80039698u; f_8024B0E0(c); // 80039694
  c->r[4]=R32(c->r[13]+0xFFFF94F0u); // 80039698
  cmpu(c,0,c->r[4],c->r[31]); // 8003969C
  if (!crb(c,2)) { goto L_800396B0; } // 800396A0
  c->r[3]=c->r[30]|c->r[30]; // 800396A4
  c->lr=0x800396ACu; f_8024B1C0(c); // 800396A8
  goto L_800396E8; // 800396AC
L_800396B0:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800396B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800396B4
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800396B8
  cmpu(c,0,c->r[0],0x00000001u); // 800396BC
  if (!crb(c,2)) { goto L_800396DC; } // 800396C0
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800396C4
  cmpu(c,0,c->r[0],0x00000001u); // 800396C8
  if (!crb(c,2)) { goto L_800396DC; } // 800396CC
  c->r[3]=c->r[30]|c->r[30]; // 800396D0
  c->r[4]=c->r[13]+0xFFFF94F0u; // 800396D4
  c->lr=0x800396DCu; f_8031EEDC(c); // 800396D8
L_800396DC:;
  W32(c->r[13]+0xFFFF94F0u,c->r[31]); // 800396DC
  c->r[3]=c->r[30]|c->r[30]; // 800396E0
  c->lr=0x800396E8u; f_8024B1C0(c); // 800396E4
L_800396E8:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800396E8
  c->r[3]=c->r[30]|c->r[30]; // 800396EC
  c->lr=0x800396F4u; f_8024B0E0(c); // 800396F0
  c->r[4]=R32(c->r[13]+0xFFFF94F4u); // 800396F4
  cmpu(c,0,c->r[4],c->r[31]); // 800396F8
  if (!crb(c,2)) { goto L_8003970C; } // 800396FC
  c->r[3]=c->r[30]|c->r[30]; // 80039700
  c->lr=0x80039708u; f_8024B1C0(c); // 80039704
  goto L_80039744; // 80039708
L_8003970C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003970C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039710
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039714
  cmpu(c,0,c->r[0],0x00000001u); // 80039718
  if (!crb(c,2)) { goto L_80039738; } // 8003971C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039720
  cmpu(c,0,c->r[0],0x00000001u); // 80039724
  if (!crb(c,2)) { goto L_80039738; } // 80039728
  c->r[3]=c->r[30]|c->r[30]; // 8003972C
  c->r[4]=c->r[13]+0xFFFF94F4u; // 80039730
  c->lr=0x80039738u; f_8031EEDC(c); // 80039734
L_80039738:;
  W32(c->r[13]+0xFFFF94F4u,c->r[31]); // 80039738
  c->r[3]=c->r[30]|c->r[30]; // 8003973C
  c->lr=0x80039744u; f_8024B1C0(c); // 80039740
L_80039744:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039744
  c->r[3]=c->r[30]|c->r[30]; // 80039748
  c->lr=0x80039750u; f_8024B0E0(c); // 8003974C
  c->r[4]=R32(c->r[13]+0xFFFF94F8u); // 80039750
  cmpu(c,0,c->r[4],c->r[31]); // 80039754
  if (!crb(c,2)) { goto L_80039768; } // 80039758
  c->r[3]=c->r[30]|c->r[30]; // 8003975C
  c->lr=0x80039764u; f_8024B1C0(c); // 80039760
  goto L_800397A0; // 80039764
L_80039768:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039768
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003976C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039770
  cmpu(c,0,c->r[0],0x00000001u); // 80039774
  if (!crb(c,2)) { goto L_80039794; } // 80039778
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003977C
  cmpu(c,0,c->r[0],0x00000001u); // 80039780
  if (!crb(c,2)) { goto L_80039794; } // 80039784
  c->r[3]=c->r[30]|c->r[30]; // 80039788
  c->r[4]=c->r[13]+0xFFFF94F8u; // 8003978C
  c->lr=0x80039794u; f_8031EEDC(c); // 80039790
L_80039794:;
  W32(c->r[13]+0xFFFF94F8u,c->r[31]); // 80039794
  c->r[3]=c->r[30]|c->r[30]; // 80039798
  c->lr=0x800397A0u; f_8024B1C0(c); // 8003979C
L_800397A0:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800397A0
  c->r[3]=c->r[30]|c->r[30]; // 800397A4
  c->lr=0x800397ACu; f_8024B0E0(c); // 800397A8
  c->r[4]=R32(c->r[13]+0xFFFF94FCu); // 800397AC
  cmpu(c,0,c->r[4],c->r[31]); // 800397B0
  if (!crb(c,2)) { goto L_800397C4; } // 800397B4
  c->r[3]=c->r[30]|c->r[30]; // 800397B8
  c->lr=0x800397C0u; f_8024B1C0(c); // 800397BC
  goto L_800397FC; // 800397C0
L_800397C4:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800397C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800397C8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800397CC
  cmpu(c,0,c->r[0],0x00000001u); // 800397D0
  if (!crb(c,2)) { goto L_800397F0; } // 800397D4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800397D8
  cmpu(c,0,c->r[0],0x00000001u); // 800397DC
  if (!crb(c,2)) { goto L_800397F0; } // 800397E0
  c->r[3]=c->r[30]|c->r[30]; // 800397E4
  c->r[4]=c->r[13]+0xFFFF94FCu; // 800397E8
  c->lr=0x800397F0u; f_8031EEDC(c); // 800397EC
L_800397F0:;
  W32(c->r[13]+0xFFFF94FCu,c->r[31]); // 800397F0
  c->r[3]=c->r[30]|c->r[30]; // 800397F4
  c->lr=0x800397FCu; f_8024B1C0(c); // 800397F8
L_800397FC:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800397FC
  c->r[3]=c->r[30]|c->r[30]; // 80039800
  c->lr=0x80039808u; f_8024B0E0(c); // 80039804
  c->r[4]=R32(c->r[13]+0xFFFF9500u); // 80039808
  cmpu(c,0,c->r[4],c->r[31]); // 8003980C
  if (!crb(c,2)) { goto L_80039820; } // 80039810
  c->r[3]=c->r[30]|c->r[30]; // 80039814
  c->lr=0x8003981Cu; f_8024B1C0(c); // 80039818
  goto L_80039858; // 8003981C
L_80039820:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039820
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039824
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039828
  cmpu(c,0,c->r[0],0x00000001u); // 8003982C
  if (!crb(c,2)) { goto L_8003984C; } // 80039830
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039834
  cmpu(c,0,c->r[0],0x00000001u); // 80039838
  if (!crb(c,2)) { goto L_8003984C; } // 8003983C
  c->r[3]=c->r[30]|c->r[30]; // 80039840
  c->r[4]=c->r[13]+0xFFFF9500u; // 80039844
  c->lr=0x8003984Cu; f_8031EEDC(c); // 80039848
L_8003984C:;
  W32(c->r[13]+0xFFFF9500u,c->r[31]); // 8003984C
  c->r[3]=c->r[30]|c->r[30]; // 80039850
  c->lr=0x80039858u; f_8024B1C0(c); // 80039854
L_80039858:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039858
  c->r[3]=c->r[30]|c->r[30]; // 8003985C
  c->lr=0x80039864u; f_8024B0E0(c); // 80039860
  c->r[4]=R32(c->r[13]+0xFFFF9504u); // 80039864
  cmpu(c,0,c->r[4],c->r[31]); // 80039868
  if (!crb(c,2)) { goto L_8003987C; } // 8003986C
  c->r[3]=c->r[30]|c->r[30]; // 80039870
  c->lr=0x80039878u; f_8024B1C0(c); // 80039874
  goto L_800398B4; // 80039878
L_8003987C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003987C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039880
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80039884
  cmpu(c,0,c->r[0],0x00000001u); // 80039888
  if (!crb(c,2)) { goto L_800398A8; } // 8003988C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039890
  cmpu(c,0,c->r[0],0x00000001u); // 80039894
  if (!crb(c,2)) { goto L_800398A8; } // 80039898
  c->r[3]=c->r[30]|c->r[30]; // 8003989C
  c->r[4]=c->r[13]+0xFFFF9504u; // 800398A0
  c->lr=0x800398A8u; f_8031EEDC(c); // 800398A4
L_800398A8:;
  W32(c->r[13]+0xFFFF9504u,c->r[31]); // 800398A8
  c->r[3]=c->r[30]|c->r[30]; // 800398AC
  c->lr=0x800398B4u; f_8024B1C0(c); // 800398B0
L_800398B4:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800398B4
  c->r[3]=c->r[30]|c->r[30]; // 800398B8
  c->lr=0x800398C0u; f_8024B0E0(c); // 800398BC
  c->r[4]=R32(c->r[13]+0xFFFF9508u); // 800398C0
  cmpu(c,0,c->r[4],c->r[31]); // 800398C4
  if (!crb(c,2)) { goto L_800398D8; } // 800398C8
  c->r[3]=c->r[30]|c->r[30]; // 800398CC
  c->lr=0x800398D4u; f_8024B1C0(c); // 800398D0
  goto L_80039910; // 800398D4
L_800398D8:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800398D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800398DC
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800398E0
  cmpu(c,0,c->r[0],0x00000001u); // 800398E4
  if (!crb(c,2)) { goto L_80039904; } // 800398E8
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800398EC
  cmpu(c,0,c->r[0],0x00000001u); // 800398F0
  if (!crb(c,2)) { goto L_80039904; } // 800398F4
  c->r[3]=c->r[30]|c->r[30]; // 800398F8
  c->r[4]=c->r[13]+0xFFFF9508u; // 800398FC
  c->lr=0x80039904u; f_8031EEDC(c); // 80039900
L_80039904:;
  W32(c->r[13]+0xFFFF9508u,c->r[31]); // 80039904
  c->r[3]=c->r[30]|c->r[30]; // 80039908
  c->lr=0x80039910u; f_8024B1C0(c); // 8003990C
L_80039910:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80039910
  c->r[3]=c->r[30]|c->r[30]; // 80039914
  c->lr=0x8003991Cu; f_8024B0E0(c); // 80039918
  c->r[4]=R32(c->r[13]+0xFFFF950Cu); // 8003991C
  cmpu(c,0,c->r[4],c->r[31]); // 80039920
  if (!crb(c,2)) { goto L_80039934; } // 80039924
  c->r[3]=c->r[30]|c->r[30]; // 80039928
  c->lr=0x80039930u; f_8024B1C0(c); // 8003992C
  goto L_8003996C; // 80039930
L_80039934:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80039934
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80039938
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003993C
  cmpu(c,0,c->r[0],0x00000001u); // 80039940
  if (!crb(c,2)) { goto L_80039960; } // 80039944
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80039948
  cmpu(c,0,c->r[0],0x00000001u); // 8003994C
  if (!crb(c,2)) { goto L_80039960; } // 80039950
  c->r[3]=c->r[30]|c->r[30]; // 80039954
  c->r[4]=c->r[13]+0xFFFF950Cu; // 80039958
  c->lr=0x80039960u; f_8031EEDC(c); // 8003995C
L_80039960:;
  W32(c->r[13]+0xFFFF950Cu,c->r[31]); // 80039960
  c->r[3]=c->r[30]|c->r[30]; // 80039964
  c->lr=0x8003996Cu; f_8024B1C0(c); // 80039968
L_8003996C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003996C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80039970
  c->r[30]=R32(c->r[1]+0x00000008u); // 80039974
  c->lr=c->r[0]; // 80039978
  c->r[1]=c->r[1]+0x00000010u; // 8003997C
  return; // 80039980
}

// fn_80039984
void f_80039984(Ctx* __restrict c) {
  trace_call(0x80039984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80039984
  c->r[0]=c->lr; // 80039988
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003998C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80039990
  c->r[31]=c->r[3]|c->r[3]; // 80039994
  c->lr=0x8003999Cu; f_80039228(c); // 80039998
  c->r[4]=0u+0x80370000u; // 8003999C
  c->r[6]=0u+0x80040000u; // 800399A0
  c->r[4]=c->r[4]+0x00003A98u; // 800399A4
  c->r[3]=c->r[31]|c->r[31]; // 800399A8
  c->r[5]=c->r[4]+0x000000BFu; // 800399AC
  c->r[6]=c->r[6]+0xFFFF91B4u; // 800399B0
  c->r[4]=0u+0x00000004u; // 800399B4
  c->lr=0x800399BCu; f_80337FC8(c); // 800399B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800399BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800399C0
  c->lr=c->r[0]; // 800399C4
  c->r[1]=c->r[1]+0x00000010u; // 800399C8
  return; // 800399CC
}

// fn_800399D0
void f_800399D0(Ctx* __restrict c) {
  trace_call(0x800399D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800399D0
  c->r[0]=c->lr; // 800399D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800399D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800399DC
  c->r[31]=c->r[3]|c->r[3]; // 800399E0
  c->lr=0x800399E8u; f_80039394(c); // 800399E4
  c->r[5]=0u+0x80370000u; // 800399E8
  c->r[3]=c->r[31]|c->r[31]; // 800399EC
  c->r[5]=c->r[5]+0x00003A98u; // 800399F0
  c->r[4]=0u+0x00000004u; // 800399F4
  c->r[5]=c->r[5]+0x000000BFu; // 800399F8
  c->lr=0x80039A00u; f_803386E0(c); // 800399FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80039A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80039A04
  c->lr=c->r[0]; // 80039A08
  c->r[1]=c->r[1]+0x00000010u; // 80039A0C
  return; // 80039A10
}

// fn_80039A14
void f_80039A14(Ctx* __restrict c) {
  trace_call(0x80039A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80039A14
  c->r[0]=c->lr; // 80039A18
  W32(c->r[1]+0x00000054u,c->r[0]); // 80039A1C
  c->r[11]=c->r[1]+0x00000030u; // 80039A20
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80039A24
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80039A28
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80039A2C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80039A30
  c->lr=0x80039A38u; f_800C2E4C(c); // 80039A34
  {uint32_t ea=c->r[2]+0xFFFF85F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80039A38
  c->r[4]=0u+0x803D0000u; // 80039A3C
  c->r[27]=c->r[3]|c->r[3]; // 80039A40
  c->r[29]=0u+0x00000000u; // 80039A44
  c->r[3]=c->r[4]+0x00000280u; // 80039A48
  c->r[28]=0u+0x00000000u; // 80039A4C
  c->lr=0x80039A54u; f_80039DF8(c); // 80039A50
  c->lr=0x80039A58u; f_8009EAC0(c); // 80039A54
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039A58
  c->lr=0x80039A60u; f_80039F18(c); // 80039A5C
  c->r[4]=c->r[13]+0xFFFF94D8u; // 80039A60
  c->lr=0x80039A68u; f_80039E00(c); // 80039A64
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 80039A68
  c->r[31]=c->r[4]|c->r[4]; // 80039A6C
  c->r[30]=c->r[3]|c->r[3]; // 80039A70
  if (crb(c,2)) { goto L_80039AA4; } // 80039A74
  c->r[3]=c->r[27]|c->r[27]; // 80039A78
  c->lr=0x80039A80u; f_80039FBC(c); // 80039A7C
  c->r[6]=c->r[31]|c->r[31]; // 80039A80
  c->r[5]=c->r[30]|c->r[30]; // 80039A84
  c->lr=0x80039A8Cu; f_80039F20(c); // 80039A88
  cmps(c,0,(int32_t)c->r[3],0); // 80039A8C
  if (crb(c,2)) { goto L_80039A9C; } // 80039A90
  c->lr=0x80039A98u; f_80012AFC(c); // 80039A94
  goto L_80039AA0; // 80039A98
L_80039A9C:;
  c->r[3]=0u+0x00000000u; // 80039A9C
L_80039AA0:;
  c->r[29]=c->r[3]|c->r[3]; // 80039AA0
L_80039AA4:;
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039AA4
  c->lr=0x80039AACu; f_80039F18(c); // 80039AA8
  c->r[4]=c->r[13]+0xFFFF94D0u; // 80039AAC
  c->lr=0x80039AB4u; f_80039E00(c); // 80039AB0
  W32(c->r[27]+0x00000158u,c->r[3]); // 80039AB4
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039AB8
  W32(c->r[27]+0x0000015Cu,c->r[4]); // 80039ABC
  c->lr=0x80039AC4u; f_80039F18(c); // 80039AC0
  c->r[4]=c->r[13]+0xFFFF94F4u; // 80039AC4
  c->lr=0x80039ACCu; f_80039FC4(c); // 80039AC8
  {uint32_t ea=c->r[2]+0xFFFF85FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80039ACC
  {uint32_t ea=c->r[27]+0x00000160u; WF32(ea,c->f[1]);} // 80039AD0
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039AD4
  {uint32_t ea=c->r[27]+0x00000164u; WF32(ea,c->f[0]);} // 80039AD8
  c->lr=0x80039AE0u; f_80039F18(c); // 80039ADC
  c->r[4]=c->r[13]+0xFFFF94ECu; // 80039AE0
  c->lr=0x80039AE8u; f_80039FC4(c); // 80039AE4
  {uint32_t ea=c->r[27]+0x00000168u; WF32(ea,c->f[1]);} // 80039AE8
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039AEC
  c->lr=0x80039AF4u; f_80039F18(c); // 80039AF0
  c->r[4]=c->r[13]+0xFFFF94F0u; // 80039AF4
  c->lr=0x80039AFCu; f_80039FC4(c); // 80039AF8
  {uint32_t ea=c->r[27]+0x0000016Cu; WF32(ea,c->f[1]);} // 80039AFC
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B00
  c->lr=0x80039B08u; f_80039F18(c); // 80039B04
  c->r[4]=c->r[13]+0xFFFF94E8u; // 80039B08
  c->lr=0x80039B10u; f_80039FC4(c); // 80039B0C
  {uint32_t ea=c->r[27]+0x00000170u; WF32(ea,c->f[1]);} // 80039B10
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B14
  c->lr=0x80039B1Cu; f_80039F18(c); // 80039B18
  c->r[4]=c->r[13]+0xFFFF94F8u; // 80039B1C
  c->lr=0x80039B24u; f_8003A0D8(c); // 80039B20
  W32(c->r[27]+0x00000180u,c->r[3]); // 80039B24
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B28
  c->lr=0x80039B30u; f_80039F18(c); // 80039B2C
  c->r[4]=c->r[13]+0xFFFF94FCu; // 80039B30
  c->lr=0x80039B38u; f_80039FC4(c); // 80039B34
  {uint32_t ea=c->r[27]+0x00000174u; WF32(ea,c->f[1]);} // 80039B38
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B3C
  c->lr=0x80039B44u; f_80039F18(c); // 80039B40
  c->r[4]=c->r[13]+0xFFFF9500u; // 80039B44
  c->lr=0x80039B4Cu; f_80039FC4(c); // 80039B48
  {uint32_t ea=c->r[27]+0x00000178u; WF32(ea,c->f[1]);} // 80039B4C
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B50
  c->lr=0x80039B58u; f_80039F18(c); // 80039B54
  c->r[4]=c->r[13]+0xFFFF9504u; // 80039B58
  c->lr=0x80039B60u; f_80039FC4(c); // 80039B5C
  {uint32_t ea=c->r[27]+0x0000017Cu; WF32(ea,c->f[1]);} // 80039B60
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B64
  c->lr=0x80039B6Cu; f_80039F18(c); // 80039B68
  c->r[4]=c->r[13]+0xFFFF9508u; // 80039B6C
  c->lr=0x80039B74u; f_8003A1EC(c); // 80039B70
  cmps(c,0,(int32_t)c->r[3],0); // 80039B74
  if (crb(c,2)) { goto L_80039B90; } // 80039B78
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039B7C
  c->lr=0x80039B84u; f_80039F18(c); // 80039B80
  c->r[4]=c->r[13]+0xFFFF9508u; // 80039B84
  c->lr=0x80039B8Cu; f_80039FC4(c); // 80039B88
  c->f[30]=c->f[1]; // 80039B8C
L_80039B90:;
  {uint32_t ea=c->r[2]+0xFFFF8600u; c->f[1]=c->ps1[1]=RF32(ea);} // 80039B90
  {uint32_t ea=c->r[27]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039B94
  fcmp(c,0,c->f[1],c->f[0]); // 80039B98
  if (!crb(c,2)) { goto L_80039BA8; } // 80039B9C
  {uint32_t ea=c->r[13]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039BA0
  {uint32_t ea=c->r[27]+0x00000178u; WF32(ea,c->f[0]);} // 80039BA4
L_80039BA8:;
  c->r[31]=R32(c->r[27]+0x00000158u); // 80039BA8
  c->r[30]=R32(c->r[27]+0x0000015Cu); // 80039BAC
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 80039BB0
  if (!crb(c,2)) { goto L_80039BE0; } // 80039BB4
  c->r[3]=R32(c->r[27]+0x00000144u); // 80039BB8
  c->lr=0x80039BC0u; f_80039F18(c); // 80039BBC
  c->r[4]=c->r[13]+0xFFFF94D4u; // 80039BC0
  c->lr=0x80039BC8u; f_8003A0D8(c); // 80039BC4
  W32(c->r[27]+0x0000014Cu,c->r[3]); // 80039BC8
  c->lr=0x80039BD0u; f_8003A2C0(c); // 80039BCC
  c->r[4]=R32(c->r[27]+0x0000014Cu); // 80039BD0
  c->lr=0x80039BD8u; f_80030F34(c); // 80039BD4
  W32(c->r[27]+0x00000148u,c->r[3]); // 80039BD8
  goto L_80039C08; // 80039BDC
L_80039BE0:;
  c->r[3]=c->r[27]|c->r[27]; // 80039BE0
  c->lr=0x80039BE8u; f_80039FBC(c); // 80039BE4
  c->r[6]=c->r[30]|c->r[30]; // 80039BE8
  c->r[5]=c->r[31]|c->r[31]; // 80039BEC
  c->lr=0x80039BF4u; f_80039F20(c); // 80039BF0
  c->r[28]=c->r[3]|c->r[3]; // 80039BF4
  c->lr=0x80039BFCu; f_8003A2C0(c); // 80039BF8
  c->r[4]=c->r[28]|c->r[28]; // 80039BFC
  c->lr=0x80039C04u; f_80030BF0(c); // 80039C00
  W32(c->r[27]+0x00000148u,c->r[3]); // 80039C04
L_80039C08:;
  c->lr=0x80039C0Cu; f_8003A2C0(c); // 80039C08
  c->lr=0x80039C10u; f_8003A2D0(c); // 80039C0C
  c->lr=0x80039C14u; f_8003A2C8(c); // 80039C10
  c->r[31]=c->r[3]|c->r[3]; // 80039C14
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039C18
  c->lr=0x80039C20u; f_8003A2C8(c); // 80039C1C
  cmpu(c,0,c->r[3],c->r[31]); // 80039C20
  if (!crb(c,2)) { goto L_80039C58; } // 80039C24
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039C28
  c->lr=0x80039C30u; f_8003A2D8(c); // 80039C2C
  c->r[31]=c->r[3]|c->r[3]; // 80039C30
  c->lr=0x80039C38u; f_8003A2C0(c); // 80039C34
  c->r[4]=c->r[31]|c->r[31]; // 80039C38
  c->lr=0x80039C40u; f_80030BF0(c); // 80039C3C
  c->r[30]=c->r[3]|c->r[3]; // 80039C40
  c->r[4]=0u+0x00000001u; // 80039C44
  c->lr=0x80039C4Cu; f_8003A2E0(c); // 80039C48
  {uint32_t ea=c->r[2]+0xFFFF85F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039C4C
  W32(c->r[27]+0x00000148u,c->r[30]); // 80039C50
  {uint32_t ea=c->r[27]+0x00000168u; WF32(ea,c->f[0]);} // 80039C54
L_80039C58:;
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039C58
  {uint32_t ea=c->r[27]+0x0000017Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80039C5C
  fcmp(c,0,c->f[0],c->f[31]); // 80039C60
  if (crb(c,2)) { goto L_80039C78; } // 80039C64
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039C68
  c->lr=0x80039C70u; f_8002FBC4(c); // 80039C6C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039C70
  goto L_80039CCC; // 80039C74
L_80039C78:;
  cmps(c,0,(int32_t)c->r[28],0); // 80039C78
  if (crb(c,2)) { goto L_80039CB0; } // 80039C7C
  c->r[3]=c->r[28]|c->r[28]; // 80039C80
  c->lr=0x80039C88u; f_8003A300(c); // 80039C84
  c->lr=0x80039C8Cu; f_8003A2F8(c); // 80039C88
  c->r[4]=c->r[3]|c->r[3]; // 80039C8C
  c->r[3]=c->r[1]+0x00000008u; // 80039C90
  c->lr=0x80039C98u; f_8003A374(c); // 80039C94
  c->lr=0x80039C9Cu; f_8003A2E8(c); // 80039C98
  c->f[31]=c->f[1]; // 80039C9C
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CA0
  c->lr=0x80039CA8u; f_8002FBC4(c); // 80039CA4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039CA8
  goto L_80039CCC; // 80039CAC
L_80039CB0:;
  c->lr=0x80039CB4u; f_8003A2C0(c); // 80039CB0
  c->lr=0x80039CB8u; f_8003A2D0(c); // 80039CB4
  c->lr=0x80039CBCu; f_8002FBC4(c); // 80039CB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80039CBC
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CC0
  c->lr=0x80039CC8u; f_8002FBC4(c); // 80039CC4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039CC8
L_80039CCC:;
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CCC
  c->lr=0x80039CD4u; f_8003A308(c); // 80039CD0
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CD4
  {uint32_t ea=c->r[27]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 80039CD8
  c->lr=0x80039CE0u; f_8003A320(c); // 80039CDC
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CE0
  c->r[4]=c->r[29]|c->r[29]; // 80039CE4
  c->lr=0x80039CECu; f_8003A328(c); // 80039CE8
  c->f[1]=c->f[30]; // 80039CEC
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CF0
  c->lr=0x80039CF8u; f_8003A33C(c); // 80039CF4
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039CF8
  c->r[4]=R32(c->r[27]+0x00000180u); // 80039CFC
  c->lr=0x80039D04u; f_8003A344(c); // 80039D00
  {uint32_t ea=c->r[27]+0x00000168u; c->f[31]=c->ps1[31]=RF32(ea);} // 80039D04
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039D08
  c->lr=0x80039D10u; f_8003A34C(c); // 80039D0C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D10
  {uint32_t ea=c->r[27]+0x0000016Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80039D14
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039D18
  c->lr=0x80039D20u; f_8003A354(c); // 80039D1C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D20
  {uint32_t ea=c->r[27]+0x00000170u; c->f[31]=c->ps1[31]=RF32(ea);} // 80039D24
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039D28
  c->lr=0x80039D30u; f_8003A35C(c); // 80039D2C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D30
  {uint32_t ea=c->r[27]+0x00000178u; c->f[31]=c->ps1[31]=RF32(ea);} // 80039D34
  c->r[3]=R32(c->r[27]+0x00000148u); // 80039D38
  c->lr=0x80039D40u; f_8003A364(c); // 80039D3C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D40
  {uint32_t ea=c->r[27]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039D44
  c->f[31]=-c->f[0]; // 80039D48
  c->lr=0x80039D50u; f_8003A2C0(c); // 80039D4C
  c->lr=0x80039D54u; f_8003A2D0(c); // 80039D50
  c->lr=0x80039D58u; f_8003A34C(c); // 80039D54
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D58
  {uint32_t ea=c->r[27]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80039D5C
  c->f[31]=-c->f[0]; // 80039D60
  c->lr=0x80039D68u; f_8003A2C0(c); // 80039D64
  c->lr=0x80039D6Cu; f_8003A2D0(c); // 80039D68
  c->lr=0x80039D70u; f_8003A354(c); // 80039D6C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D70
  {uint32_t ea=c->r[27]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039D74
  c->f[31]=-c->f[0]; // 80039D78
  c->lr=0x80039D80u; f_8003A2C0(c); // 80039D7C
  c->lr=0x80039D84u; f_8003A2D0(c); // 80039D80
  c->lr=0x80039D88u; f_8003A35C(c); // 80039D84
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039D88
  {uint32_t ea=c->r[27]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039D8C
  c->f[31]=-c->f[0]; // 80039D90
  c->lr=0x80039D98u; f_8003A2C0(c); // 80039D94
  c->lr=0x80039D9Cu; f_8003A2D0(c); // 80039D98
  c->lr=0x80039DA0u; f_8003A364(c); // 80039D9C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 80039DA0
  {uint32_t ea=c->r[2]+0xFFFF85FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80039DA4
  {uint32_t ea=c->r[27]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 80039DA8
  fcmp(c,0,c->f[1],c->f[0]); // 80039DAC
  if (!crb(c,2)) { goto L_80039DC0; } // 80039DB0
  c->lr=0x80039DB8u; f_8003A2C0(c); // 80039DB4
  c->r[4]=R32(c->r[27]+0x00000148u); // 80039DB8
  c->lr=0x80039DC0u; f_8003A36C(c); // 80039DBC
L_80039DC0:;
  c->r[0]=0u+0x00000001u; // 80039DC0
  W32(c->r[27]+0x00000150u,c->r[0]); // 80039DC4
  c->r[3]=c->r[27]|c->r[27]; // 80039DC8
  c->lr=0x80039DD0u; f_80041C5C(c); // 80039DCC
  c->r[11]=c->r[1]+0x00000030u; // 80039DD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80039DD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80039DD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80039DDC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80039DE0
  c->lr=0x80039DE8u; f_800C2E98(c); // 80039DE4
  c->r[0]=R32(c->r[1]+0x00000054u); // 80039DE8
  c->lr=c->r[0]; // 80039DEC
  c->r[1]=c->r[1]+0x00000050u; // 80039DF0
  return; // 80039DF4
}

// fn_80039DF8
void f_80039DF8(Ctx* __restrict c) {
  trace_call(0x80039DF8u);
  c->r[3]=c->r[3]+0x00001B2Cu; // 80039DF8
  return; // 80039DFC
}

// fn_80039E00
void f_80039E00(Ctx* __restrict c) {
  trace_call(0x80039E00u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 80039E00
  c->r[10]=R32(c->r[3]+0x00000004u); // 80039E04
  c->r[5]=R32(c->r[9]+0x00000000u); // 80039E08
  c->r[0]=R32(c->r[9]+0x00000004u); // 80039E0C
  c->r[7]=c->r[10]|c->r[10]; // 80039E10
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80039E14
  c->r[0]=c->r[0]-c->r[5]; // 80039E18
  c->r[0]=sraw(c,c->r[0],2); // 80039E1C
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80039E20
  c->r[0]=c->r[5]-c->r[10]; // 80039E24
  c->ctr=c->r[0]; // 80039E28
  cmpu(c,0,c->r[10],c->r[5]); // 80039E2C
  if (!crb(c,0)) { goto L_80039E70; } // 80039E30
L_80039E34:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 80039E34
  c->r[6]=R32(c->r[4]+0x00000000u); // 80039E38
  c->r[5]=R32(c->r[5]+c->r[8]); // 80039E3C
  c->r[0]=R32(c->r[5]+0x00000014u); // 80039E40
  cmpu(c,0,c->r[6],c->r[0]); // 80039E44
  if (!crb(c,2)) { goto L_80039E64; } // 80039E48
  W32(c->r[3]+0x00000004u,c->r[7]); // 80039E4C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80039E50
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039E54
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039E58
  c->r[3]=R32(c->r[3]+c->r[0]); // 80039E5C
  goto L_80039EC4; // 80039E60
L_80039E64:;
  c->r[8]=c->r[8]+0x00000004u; // 80039E64
  c->r[7]=c->r[7]+0x00000001u; // 80039E68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80039E34; } // 80039E6C
L_80039E70:;
  c->r[8]=0u+0x00000000u; // 80039E70
  c->r[7]=0u+0x00000000u; // 80039E74
  c->ctr=c->r[10]; // 80039E78
  cmpu(c,0,c->r[10],0x00000000u); // 80039E7C
  if (!crb(c,1)) { goto L_80039EC0; } // 80039E80
L_80039E84:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 80039E84
  c->r[6]=R32(c->r[4]+0x00000000u); // 80039E88
  c->r[5]=R32(c->r[5]+c->r[7]); // 80039E8C
  c->r[0]=R32(c->r[5]+0x00000014u); // 80039E90
  cmpu(c,0,c->r[6],c->r[0]); // 80039E94
  if (!crb(c,2)) { goto L_80039EB4; } // 80039E98
  W32(c->r[3]+0x00000004u,c->r[8]); // 80039E9C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80039EA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039EA4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039EA8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80039EAC
  goto L_80039EC4; // 80039EB0
L_80039EB4:;
  c->r[7]=c->r[7]+0x00000004u; // 80039EB4
  c->r[8]=c->r[8]+0x00000001u; // 80039EB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80039E84; } // 80039EBC
L_80039EC0:;
  c->r[3]=0u+0x00000000u; // 80039EC0
L_80039EC4:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80039EC4
  cmps(c,0,(int32_t)c->r[4],37); // 80039EC8
  if (!crb(c,1)) { goto L_80039EE4; } // 80039ECC
  c->r[0]=R32(c->r[3]+0x00000010u); // 80039ED0
  cmpu(c,0,c->r[0],0x00000001u); // 80039ED4
  if (!crb(c,2)) { goto L_80039EE4; } // 80039ED8
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80039EDC
  goto L_80039F0C; // 80039EE0
L_80039EE4:;
  cmps(c,0,(int32_t)c->r[4],26); // 80039EE4
  if (crb(c,0)) { goto L_80039EF4; } // 80039EE8
  cmps(c,0,(int32_t)c->r[4],36); // 80039EEC
  if (!crb(c,2)) { goto L_80039F08; } // 80039EF0
L_80039EF4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80039EF4
  cmpu(c,0,c->r[0],0x00000001u); // 80039EF8
  if (!crb(c,2)) { goto L_80039F08; } // 80039EFC
  c->r[4]=c->r[3]+0x00000008u; // 80039F00
  goto L_80039F0C; // 80039F04
L_80039F08:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 80039F08
L_80039F0C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80039F0C
  c->r[4]=R32(c->r[4]+0x00000004u); // 80039F10
  return; // 80039F14
}

// fn_80039F18
void f_80039F18(Ctx* __restrict c) {
  trace_call(0x80039F18u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80039F18
  return; // 80039F1C
}

// fn_80039F20
void f_80039F20(Ctx* __restrict c) {
  trace_call(0x80039F20u);
  c->r[7]=R32(c->r[3]+0x000000A8u); // 80039F20
  c->r[8]=c->r[5]^c->r[6]; // 80039F24
  c->r[3]=R32(c->r[7]+0x00000000u); // 80039F28
  c->r[4]=R32(c->r[7]+0x00000004u); // 80039F2C
  c->r[0]=divwu(c->r[8],c->r[3]); // 80039F30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80039F34
  c->r[0]=c->r[8]-c->r[0]; // 80039F38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80039F3C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80039F40
  goto L_80039F84; // 80039F44
L_80039F48:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 80039F48
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80039F4C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039F50
  c->r[4]=c->r[3]+c->r[0]; // 80039F54
  c->r[0]=R32(c->r[3]+c->r[0]); // 80039F58
  cmpu(c,0,c->r[0],c->r[8]); // 80039F5C
  if (!crb(c,2)) { goto L_80039F80; } // 80039F60
  c->r[0]=R32(c->r[4]+0x00000008u); // 80039F64
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80039F68
  c->r[0]=c->r[0]^c->r[5]; // 80039F6C
  c->r[3]=c->r[3]^c->r[6]; // 80039F70
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80039F74
  if (!crb(c,2)) { goto L_80039F80; } // 80039F78
  goto L_80039F90; // 80039F7C
L_80039F80:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 80039F80
L_80039F84:;
  cmps(c,0,(int32_t)c->r[0],-1); // 80039F84
  if (!crb(c,2)) { IRQCHK(c); goto L_80039F48; } // 80039F88
  c->r[4]=0u+0x00000000u; // 80039F8C
L_80039F90:;
  cmps(c,0,(int32_t)c->r[4],0); // 80039F90
  if (!crb(c,2)) { goto L_80039FA0; } // 80039F94
  c->r[3]=0u+0x00000000u; // 80039F98
  goto L_80039FA4; // 80039F9C
L_80039FA0:;
  c->r[3]=c->r[4]+0x00000010u; // 80039FA0
L_80039FA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80039FA4
  if (!crb(c,2)) { goto L_80039FB4; } // 80039FA8
  c->r[3]=0u+0x00000000u; // 80039FAC
  return; // 80039FB0
L_80039FB4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80039FB4
  return; // 80039FB8
}

// fn_80039FBC
void f_80039FBC(Ctx* __restrict c) {
  trace_call(0x80039FBCu);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80039FBC
  return; // 80039FC0
}

// fn_80039FC4
void f_80039FC4(Ctx* __restrict c) {
  trace_call(0x80039FC4u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 80039FC4
  c->r[10]=R32(c->r[3]+0x00000004u); // 80039FC8
  c->r[5]=R32(c->r[9]+0x00000000u); // 80039FCC
  c->r[0]=R32(c->r[9]+0x00000004u); // 80039FD0
  c->r[7]=c->r[10]|c->r[10]; // 80039FD4
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80039FD8
  c->r[0]=c->r[0]-c->r[5]; // 80039FDC
  c->r[0]=sraw(c,c->r[0],2); // 80039FE0
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80039FE4
  c->r[0]=c->r[5]-c->r[10]; // 80039FE8
  c->ctr=c->r[0]; // 80039FEC
  cmpu(c,0,c->r[10],c->r[5]); // 80039FF0
  if (!crb(c,0)) { goto L_8003A034; } // 80039FF4
L_80039FF8:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 80039FF8
  c->r[6]=R32(c->r[4]+0x00000000u); // 80039FFC
  c->r[5]=R32(c->r[5]+c->r[8]); // 8003A000
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A004
  cmpu(c,0,c->r[6],c->r[0]); // 8003A008
  if (!crb(c,2)) { goto L_8003A028; } // 8003A00C
  W32(c->r[3]+0x00000004u,c->r[7]); // 8003A010
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003A014
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A018
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A01C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A020
  goto L_8003A088; // 8003A024
L_8003A028:;
  c->r[8]=c->r[8]+0x00000004u; // 8003A028
  c->r[7]=c->r[7]+0x00000001u; // 8003A02C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80039FF8; } // 8003A030
L_8003A034:;
  c->r[8]=0u+0x00000000u; // 8003A034
  c->r[7]=0u+0x00000000u; // 8003A038
  c->ctr=c->r[10]; // 8003A03C
  cmpu(c,0,c->r[10],0x00000000u); // 8003A040
  if (!crb(c,1)) { goto L_8003A084; } // 8003A044
L_8003A048:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A048
  c->r[6]=R32(c->r[4]+0x00000000u); // 8003A04C
  c->r[5]=R32(c->r[5]+c->r[7]); // 8003A050
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A054
  cmpu(c,0,c->r[6],c->r[0]); // 8003A058
  if (!crb(c,2)) { goto L_8003A078; } // 8003A05C
  W32(c->r[3]+0x00000004u,c->r[8]); // 8003A060
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003A064
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A068
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A06C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A070
  goto L_8003A088; // 8003A074
L_8003A078:;
  c->r[7]=c->r[7]+0x00000004u; // 8003A078
  c->r[8]=c->r[8]+0x00000001u; // 8003A07C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003A048; } // 8003A080
L_8003A084:;
  c->r[3]=0u+0x00000000u; // 8003A084
L_8003A088:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8003A088
  cmps(c,0,(int32_t)c->r[4],37); // 8003A08C
  if (!crb(c,1)) { goto L_8003A0A8; } // 8003A090
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003A094
  cmpu(c,0,c->r[0],0x00000001u); // 8003A098
  if (!crb(c,2)) { goto L_8003A0A8; } // 8003A09C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003A0A0
  goto L_8003A0D0; // 8003A0A4
L_8003A0A8:;
  cmps(c,0,(int32_t)c->r[4],26); // 8003A0A8
  if (crb(c,0)) { goto L_8003A0B8; } // 8003A0AC
  cmps(c,0,(int32_t)c->r[4],36); // 8003A0B0
  if (!crb(c,2)) { goto L_8003A0CC; } // 8003A0B4
L_8003A0B8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003A0B8
  cmpu(c,0,c->r[0],0x00000001u); // 8003A0BC
  if (!crb(c,2)) { goto L_8003A0CC; } // 8003A0C0
  c->r[3]=c->r[3]+0x00000008u; // 8003A0C4
  goto L_8003A0D0; // 8003A0C8
L_8003A0CC:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003A0CC
L_8003A0D0:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A0D0
  return; // 8003A0D4
}

// fn_8003A0D8
void f_8003A0D8(Ctx* __restrict c) {
  trace_call(0x8003A0D8u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 8003A0D8
  c->r[10]=R32(c->r[3]+0x00000004u); // 8003A0DC
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A0E0
  c->r[0]=R32(c->r[9]+0x00000004u); // 8003A0E4
  c->r[7]=c->r[10]|c->r[10]; // 8003A0E8
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8003A0EC
  c->r[0]=c->r[0]-c->r[5]; // 8003A0F0
  c->r[0]=sraw(c,c->r[0],2); // 8003A0F4
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8003A0F8
  c->r[0]=c->r[5]-c->r[10]; // 8003A0FC
  c->ctr=c->r[0]; // 8003A100
  cmpu(c,0,c->r[10],c->r[5]); // 8003A104
  if (!crb(c,0)) { goto L_8003A148; } // 8003A108
L_8003A10C:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A10C
  c->r[6]=R32(c->r[4]+0x00000000u); // 8003A110
  c->r[5]=R32(c->r[5]+c->r[8]); // 8003A114
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A118
  cmpu(c,0,c->r[6],c->r[0]); // 8003A11C
  if (!crb(c,2)) { goto L_8003A13C; } // 8003A120
  W32(c->r[3]+0x00000004u,c->r[7]); // 8003A124
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003A128
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A12C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A130
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A134
  goto L_8003A19C; // 8003A138
L_8003A13C:;
  c->r[8]=c->r[8]+0x00000004u; // 8003A13C
  c->r[7]=c->r[7]+0x00000001u; // 8003A140
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003A10C; } // 8003A144
L_8003A148:;
  c->r[8]=0u+0x00000000u; // 8003A148
  c->r[7]=0u+0x00000000u; // 8003A14C
  c->ctr=c->r[10]; // 8003A150
  cmpu(c,0,c->r[10],0x00000000u); // 8003A154
  if (!crb(c,1)) { goto L_8003A198; } // 8003A158
L_8003A15C:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A15C
  c->r[6]=R32(c->r[4]+0x00000000u); // 8003A160
  c->r[5]=R32(c->r[5]+c->r[7]); // 8003A164
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A168
  cmpu(c,0,c->r[6],c->r[0]); // 8003A16C
  if (!crb(c,2)) { goto L_8003A18C; } // 8003A170
  W32(c->r[3]+0x00000004u,c->r[8]); // 8003A174
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003A178
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A17C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A180
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A184
  goto L_8003A19C; // 8003A188
L_8003A18C:;
  c->r[7]=c->r[7]+0x00000004u; // 8003A18C
  c->r[8]=c->r[8]+0x00000001u; // 8003A190
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003A15C; } // 8003A194
L_8003A198:;
  c->r[3]=0u+0x00000000u; // 8003A198
L_8003A19C:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8003A19C
  cmps(c,0,(int32_t)c->r[4],37); // 8003A1A0
  if (!crb(c,1)) { goto L_8003A1BC; } // 8003A1A4
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003A1A8
  cmpu(c,0,c->r[0],0x00000001u); // 8003A1AC
  if (!crb(c,2)) { goto L_8003A1BC; } // 8003A1B0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003A1B4
  goto L_8003A1E4; // 8003A1B8
L_8003A1BC:;
  cmps(c,0,(int32_t)c->r[4],26); // 8003A1BC
  if (crb(c,0)) { goto L_8003A1CC; } // 8003A1C0
  cmps(c,0,(int32_t)c->r[4],36); // 8003A1C4
  if (!crb(c,2)) { goto L_8003A1E0; } // 8003A1C8
L_8003A1CC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003A1CC
  cmpu(c,0,c->r[0],0x00000001u); // 8003A1D0
  if (!crb(c,2)) { goto L_8003A1E0; } // 8003A1D4
  c->r[3]=c->r[3]+0x00000008u; // 8003A1D8
  goto L_8003A1E4; // 8003A1DC
L_8003A1E0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003A1E0
L_8003A1E4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A1E4
  return; // 8003A1E8
}

// fn_8003A1EC
void f_8003A1EC(Ctx* __restrict c) {
  trace_call(0x8003A1ECu);
  c->r[9]=R32(c->r[3]+0x00000000u); // 8003A1EC
  c->r[10]=R32(c->r[3]+0x00000004u); // 8003A1F0
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A1F4
  c->r[0]=R32(c->r[9]+0x00000004u); // 8003A1F8
  c->r[7]=c->r[10]|c->r[10]; // 8003A1FC
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8003A200
  c->r[0]=c->r[0]-c->r[5]; // 8003A204
  c->r[0]=sraw(c,c->r[0],2); // 8003A208
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8003A20C
  c->r[0]=c->r[5]-c->r[10]; // 8003A210
  c->ctr=c->r[0]; // 8003A214
  cmpu(c,0,c->r[10],c->r[5]); // 8003A218
  if (!crb(c,0)) { goto L_8003A25C; } // 8003A21C
L_8003A220:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A220
  c->r[6]=R32(c->r[4]+0x00000000u); // 8003A224
  c->r[5]=R32(c->r[5]+c->r[8]); // 8003A228
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A22C
  cmpu(c,0,c->r[6],c->r[0]); // 8003A230
  if (!crb(c,2)) { goto L_8003A250; } // 8003A234
  W32(c->r[3]+0x00000004u,c->r[7]); // 8003A238
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003A23C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A240
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A244
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A248
  goto L_8003A2B0; // 8003A24C
L_8003A250:;
  c->r[8]=c->r[8]+0x00000004u; // 8003A250
  c->r[7]=c->r[7]+0x00000001u; // 8003A254
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003A220; } // 8003A258
L_8003A25C:;
  c->r[8]=0u+0x00000000u; // 8003A25C
  c->r[7]=0u+0x00000000u; // 8003A260
  c->ctr=c->r[10]; // 8003A264
  cmpu(c,0,c->r[10],0x00000000u); // 8003A268
  if (!crb(c,1)) { goto L_8003A2AC; } // 8003A26C
L_8003A270:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8003A270
  c->r[6]=R32(c->r[4]+0x00000000u); // 8003A274
  c->r[5]=R32(c->r[5]+c->r[7]); // 8003A278
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003A27C
  cmpu(c,0,c->r[6],c->r[0]); // 8003A280
  if (!crb(c,2)) { goto L_8003A2A0; } // 8003A284
  W32(c->r[3]+0x00000004u,c->r[8]); // 8003A288
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003A28C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A290
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A294
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A298
  goto L_8003A2B0; // 8003A29C
L_8003A2A0:;
  c->r[7]=c->r[7]+0x00000004u; // 8003A2A0
  c->r[8]=c->r[8]+0x00000001u; // 8003A2A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003A270; } // 8003A2A8
L_8003A2AC:;
  c->r[3]=0u+0x00000000u; // 8003A2AC
L_8003A2B0:;
  c->r[0]=0u-c->r[3]; // 8003A2B0
  c->r[0]=c->r[0]|c->r[3]; // 8003A2B4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8003A2B8
  return; // 8003A2BC
}

// fn_8003A2C0
void f_8003A2C0(Ctx* __restrict c) {
  trace_call(0x8003A2C0u);
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003A2C0
  return; // 8003A2C4
}

// fn_8003A2C8
void f_8003A2C8(Ctx* __restrict c) {
  trace_call(0x8003A2C8u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003A2C8
  return; // 8003A2CC
}

// fn_8003A2D0
void f_8003A2D0(Ctx* __restrict c) {
  trace_call(0x8003A2D0u);
  c->r[3]=R32(c->r[3]+0x00000034u); // 8003A2D0
  return; // 8003A2D4
}

// fn_8003A2D8
void f_8003A2D8(Ctx* __restrict c) {
  trace_call(0x8003A2D8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003A2D8
  return; // 8003A2DC
}

// fn_8003A2E0
void f_8003A2E0(Ctx* __restrict c) {
  trace_call(0x8003A2E0u);
  W32(c->r[3]+0x00000054u,c->r[4]); // 8003A2E0
  return; // 8003A2E4
}

// fn_8003A2E8
void f_8003A2E8(Ctx* __restrict c) {
  trace_call(0x8003A2E8u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A2E8
  {uint32_t ea=c->r[2]+0xFFFF8608u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A2EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8003A2F0
  return; // 8003A2F4
}

// fn_8003A2F8
void f_8003A2F8(Ctx* __restrict c) {
  trace_call(0x8003A2F8u);
  c->r[3]=c->r[3]+0x0000001Cu; // 8003A2F8
  return; // 8003A2FC
}

// fn_8003A300
void f_8003A300(Ctx* __restrict c) {
  trace_call(0x8003A300u);
  c->r[3]=R32(c->r[3]+0x000000A4u); // 8003A300
  return; // 8003A304
}

// fn_8003A308
void f_8003A308(Ctx* __restrict c) {
  trace_call(0x8003A308u);
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A308
  c->r[0]=0u+0x00000000u; // 8003A30C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 8003A310
  W32(c->r[3]+0x000000B0u,c->r[0]); // 8003A314
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 8003A318
  return; // 8003A31C
}

// fn_8003A320
void f_8003A320(Ctx* __restrict c) {
  trace_call(0x8003A320u);
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 8003A320
  return; // 8003A324
}

