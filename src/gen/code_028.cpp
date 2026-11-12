#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// __AIClockInit
void f_80244940(Ctx* __restrict c) {
  trace_call(0x80244940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244940
  c->r[0]=c->lr; // 80244944
  c->r[4]=0u+0xCD800000u; // 80244948
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024494C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 80244950
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80244954
  c->r[31]=c->r[3]|c->r[3]; // 80244958
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024495C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80244960
  W32(c->r[1]+0x00000010u,c->r[28]); // 80244964
  c->r[5]=R32(c->r[4]+0x00000180u); // 80244968
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 8024496C
  c->r[5]=c->r[5]|c->r[0]; // 80244970
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 80244974
  W32(c->r[4]+0x00000180u,c->r[0]); // 80244978
  c->r[0]=R32(c->r[4]+0x000001D0u); // 8024497C
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 80244980
  W32(c->r[4]+0x000001D0u,c->r[0]); // 80244984
  c->lr=0x8024498Cu; f_8024EAF0(c); // 80244988
  c->r[4]=0u+0x431C0000u; // 8024498C
  c->r[28]=c->r[3]|c->r[3]; // 80244990
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80244994
  c->r[29]=0u+0x80000000u; // 80244998
L_8024499C:;
  c->lr=0x802449A0u; f_8024EAF0(c); // 8024499C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 802449A0
  c->r[3]=c->r[3]-c->r[28]; // 802449A4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 802449A8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802449AC
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 802449B0
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 802449B4
  c->r[0]=divwu(c->r[3],c->r[0]); // 802449B8
  cmpu(c,0,c->r[0],0x00000064u); // 802449BC
  if (crb(c,0)) { IRQCHK(c); goto L_8024499C; } // 802449C0
  cmps(c,0,(int32_t)c->r[31],0); // 802449C4
  if (!crb(c,2)) { goto L_802449F4; } // 802449C8
  c->r[4]=0u+0xCD800000u; // 802449CC
  c->r[3]=0u+0xF8040000u; // 802449D0
  c->r[5]=R32(c->r[4]+0x000001CCu); // 802449D4
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 802449D8
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 802449DC
  c->r[3]=c->r[3]|0x00000FC0u; // 802449E0
  c->r[0]=c->r[3]&c->r[0]; // 802449E4
  c->r[0]=c->r[0]|0x04640000u; // 802449E8
  W32(c->r[4]+0x000001CCu,c->r[0]); // 802449EC
  goto L_80244A18; // 802449F0
L_802449F4:;
  c->r[3]=0u+0xCD800000u; // 802449F4
  c->r[0]=R32(c->r[3]+0x000001CCu); // 802449F8
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 802449FC
  c->r[0]=c->r[0]|0x0000FFC0u; // 80244A00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 80244A04
  c->r[0]=c->r[0]|0x0000000Eu; // 80244A08
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 80244A0C
  c->r[0]=c->r[0]|0x04B00000u; // 80244A10
  W32(c->r[3]+0x000001CCu,c->r[0]); // 80244A14
L_80244A18:;
  c->lr=0x80244A1Cu; f_8024EAF0(c); // 80244A18
  c->r[4]=0u+0x431C0000u; // 80244A1C
  c->r[31]=c->r[3]|c->r[3]; // 80244A20
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80244A24
  c->r[29]=0u+0x80000000u; // 80244A28
L_80244A2C:;
  c->lr=0x80244A30u; f_8024EAF0(c); // 80244A2C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80244A30
  c->r[3]=c->r[3]-c->r[31]; // 80244A34
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80244A38
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80244A3C
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80244A40
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80244A44
  c->r[0]=divwu(c->r[3],c->r[0]); // 80244A48
  cmpu(c,0,c->r[0],0x00000064u); // 80244A4C
  if (crb(c,0)) { IRQCHK(c); goto L_80244A2C; } // 80244A50
  c->r[3]=0u+0xCD800000u; // 80244A54
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80244A58
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80244A5C
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80244A60
  c->lr=0x80244A68u; f_8024EAF0(c); // 80244A64
  c->r[4]=0u+0x431C0000u; // 80244A68
  c->r[31]=c->r[3]|c->r[3]; // 80244A6C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80244A70
  c->r[29]=0u+0x80000000u; // 80244A74
L_80244A78:;
  c->lr=0x80244A7Cu; f_8024EAF0(c); // 80244A78
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80244A7C
  c->r[3]=c->r[3]-c->r[31]; // 80244A80
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80244A84
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80244A88
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80244A8C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80244A90
  c->r[0]=divwu(c->r[3],c->r[0]); // 80244A94
  cmpu(c,0,c->r[0],0x000003E8u); // 80244A98
  if (crb(c,0)) { IRQCHK(c); goto L_80244A78; } // 80244A9C
  c->r[3]=0u+0xCD800000u; // 80244AA0
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80244AA4
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80244AA8
  c->r[0]=c->r[0]|0x40000000u; // 80244AAC
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80244AB0
  c->lr=0x80244AB8u; f_8024EAF0(c); // 80244AB4
  c->r[4]=0u+0x431C0000u; // 80244AB8
  c->r[31]=c->r[3]|c->r[3]; // 80244ABC
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80244AC0
  c->r[29]=0u+0x80000000u; // 80244AC4
L_80244AC8:;
  c->lr=0x80244ACCu; f_8024EAF0(c); // 80244AC8
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80244ACC
  c->r[3]=c->r[3]-c->r[31]; // 80244AD0
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80244AD4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80244AD8
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80244ADC
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80244AE0
  c->r[0]=divwu(c->r[3],c->r[0]); // 80244AE4
  cmpu(c,0,c->r[0],0x000003E8u); // 80244AE8
  if (crb(c,0)) { IRQCHK(c); goto L_80244AC8; } // 80244AEC
  c->r[3]=0u+0xCD800000u; // 80244AF0
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80244AF4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80244AF8
  c->r[0]=c->r[0]|0x80000000u; // 80244AFC
  W32(c->r[3]+0x000001D0u,c->r[0]); // 80244B00
  c->lr=0x80244B08u; f_8024EAF0(c); // 80244B04
  c->r[4]=0u+0x431C0000u; // 80244B08
  c->r[29]=c->r[3]|c->r[3]; // 80244B0C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80244B10
  c->r[31]=0u+0x80000000u; // 80244B14
L_80244B18:;
  c->lr=0x80244B1Cu; f_8024EAF0(c); // 80244B18
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80244B1C
  c->r[3]=c->r[3]-c->r[29]; // 80244B20
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80244B24
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80244B28
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80244B2C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80244B30
  c->r[0]=divwu(c->r[3],c->r[0]); // 80244B34
  cmpu(c,0,c->r[0],0x000003E8u); // 80244B38
  if (crb(c,0)) { IRQCHK(c); goto L_80244B18; } // 80244B3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80244B40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80244B44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80244B48
  c->r[29]=R32(c->r[1]+0x00000014u); // 80244B4C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80244B50
  c->lr=c->r[0]; // 80244B54
  c->r[1]=c->r[1]+0x00000020u; // 80244B58
  return; // 80244B5C
}

// __OSInitAudioSystem
void f_80244B60(Ctx* __restrict c) {
  stub_log(0x80244B60u);  return;
}

// __OSStopAudioSystem
void f_80244D30(Ctx* __restrict c) {
  trace_call(0x80244D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80244D30
  c->r[0]=c->lr; // 80244D34
  c->r[3]=0u+0xCC000000u; // 80244D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80244D3C
  c->r[0]=0u+0x00000804u; // 80244D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80244D44
  W16(c->r[3]+0x0000500Au,c->r[0]); // 80244D48
  c->r[0]=R16(c->r[3]+0x00005036u); // 80244D4C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 80244D50
  W16(c->r[3]+0x00005036u,c->r[0]); // 80244D54
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244D58
  goto L_80244D64; // 80244D5C
L_80244D60:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244D60
L_80244D64:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80244D64
  if (!crb(c,2)) { IRQCHK(c); goto L_80244D60; } // 80244D68
  c->r[3]=0u+0xCC000000u; // 80244D6C
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244D70
  goto L_80244D7C; // 80244D74
L_80244D78:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244D78
L_80244D7C:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80244D7C
  if (!crb(c,2)) { IRQCHK(c); goto L_80244D78; } // 80244D80
  c->r[4]=0u+0xCC000000u; // 80244D84
  c->r[0]=0u+0x000008ACu; // 80244D88
  W16(c->r[4]+0x0000500Au,c->r[0]); // 80244D8C
  c->r[0]=0u+0x00000000u; // 80244D90
  W16(c->r[4]+0x00005000u,c->r[0]); // 80244D94
L_80244D98:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 80244D98
  c->r[0]=R16(c->r[4]+0x00005006u); // 80244D9C
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 80244DA0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 80244DA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80244D98; } // 80244DA8
  c->lr=0x80244DB0u; f_8024EAF0(c); // 80244DAC
  c->r[31]=c->r[3]|c->r[3]; // 80244DB0
L_80244DB4:;
  c->lr=0x80244DB8u; f_8024EAF0(c); // 80244DB4
  c->r[0]=c->r[3]-c->r[31]; // 80244DB8
  cmps(c,0,(int32_t)c->r[0],44); // 80244DBC
  if (crb(c,0)) { IRQCHK(c); goto L_80244DB4; } // 80244DC0
  c->r[3]=0u+0xCC000000u; // 80244DC4
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244DC8
  c->r[0]=c->r[0]|0x00000001u; // 80244DCC
  W16(c->r[3]+0x0000500Au,c->r[0]); // 80244DD0
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244DD4
  goto L_80244DE4; // 80244DD8
  c->r[0]=c->r[0]|0x00000000u; // 80244DDC
L_80244DE0:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 80244DE0
L_80244DE4:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80244DE4
  if (!crb(c,2)) { IRQCHK(c); goto L_80244DE0; } // 80244DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80244DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80244DF0
  c->lr=c->r[0]; // 80244DF4
  c->r[1]=c->r[1]+0x00000010u; // 80244DF8
  return; // 80244DFC
}

// DCEnable
void f_80244E00(Ctx* __restrict c) {
  trace_call(0x80244E00u);
  /* sync */ // 80244E00
  c->r[3]=mfspr(c,1008); // 80244E04
  c->r[3]=c->r[3]|0x00004000u; // 80244E08
  mtspr(c,1008,c->r[3]); // 80244E0C
  return; // 80244E10
}

// DCInvalidateRange
void f_80244E20(Ctx* __restrict c) {
  trace_call(0x80244E20u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244E20
  if (!crb(c,1)) return; // 80244E24
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244E28
  c->r[4]=c->r[4]+c->r[5]; // 80244E2C
  c->r[4]=c->r[4]+0x0000001Fu; // 80244E30
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244E34
  c->ctr=c->r[4]; // 80244E38
L_80244E3C:;
  /* dcbi */ // 80244E3C
  c->r[3]=c->r[3]+0x00000020u; // 80244E40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244E3C; } // 80244E44
  return; // 80244E48
}

// DCFlushRange
void f_80244E50(Ctx* __restrict c) {
  trace_call(0x80244E50u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244E50
  if (!crb(c,1)) return; // 80244E54
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244E58
  c->r[4]=c->r[4]+c->r[5]; // 80244E5C
  c->r[4]=c->r[4]+0x0000001Fu; // 80244E60
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244E64
  c->ctr=c->r[4]; // 80244E68
L_80244E6C:;
  /* dcbf */ // 80244E6C
  c->r[3]=c->r[3]+0x00000020u; // 80244E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244E6C; } // 80244E74
  sc(c,0x80244E78u); // 80244E78
  return; // 80244E7C
}

// DCStoreRange
void f_80244E80(Ctx* __restrict c) {
  trace_call(0x80244E80u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244E80
  if (!crb(c,1)) return; // 80244E84
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244E88
  c->r[4]=c->r[4]+c->r[5]; // 80244E8C
  c->r[4]=c->r[4]+0x0000001Fu; // 80244E90
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244E94
  c->ctr=c->r[4]; // 80244E98
L_80244E9C:;
  /* dcbst */ // 80244E9C
  c->r[3]=c->r[3]+0x00000020u; // 80244EA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244E9C; } // 80244EA4
  sc(c,0x80244EA8u); // 80244EA8
  return; // 80244EAC
}

// DCFlushRangeNoSync
void f_80244EB0(Ctx* __restrict c) {
  trace_call(0x80244EB0u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244EB0
  if (!crb(c,1)) return; // 80244EB4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244EB8
  c->r[4]=c->r[4]+c->r[5]; // 80244EBC
  c->r[4]=c->r[4]+0x0000001Fu; // 80244EC0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244EC4
  c->ctr=c->r[4]; // 80244EC8
L_80244ECC:;
  /* dcbf */ // 80244ECC
  c->r[3]=c->r[3]+0x00000020u; // 80244ED0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244ECC; } // 80244ED4
  return; // 80244ED8
}

// DCZeroRange
void f_80244EE0(Ctx* __restrict c) {
  trace_call(0x80244EE0u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244EE0
  if (!crb(c,1)) return; // 80244EE4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244EE8
  c->r[4]=c->r[4]+c->r[5]; // 80244EEC
  c->r[4]=c->r[4]+0x0000001Fu; // 80244EF0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244EF4
  c->ctr=c->r[4]; // 80244EF8
L_80244EFC:;
  dcbz(0u+c->r[3]); // 80244EFC
  c->r[3]=c->r[3]+0x00000020u; // 80244F00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244EFC; } // 80244F04
  return; // 80244F08
}

// ICInvalidateRange
void f_80244F10(Ctx* __restrict c) {
  trace_call(0x80244F10u);
  cmpu(c,0,c->r[4],0x00000000u); // 80244F10
  if (!crb(c,1)) return; // 80244F14
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 80244F18
  c->r[4]=c->r[4]+c->r[5]; // 80244F1C
  c->r[4]=c->r[4]+0x0000001Fu; // 80244F20
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80244F24
  c->ctr=c->r[4]; // 80244F28
L_80244F2C:;
  /* icbi */ // 80244F2C
  c->r[3]=c->r[3]+0x00000020u; // 80244F30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244F2C; } // 80244F34
  /* sync */ // 80244F38
  /* isync */ // 80244F3C
  return; // 80244F40
}

// ICFlashInvalidate
void f_80244F50(Ctx* __restrict c) {
  trace_call(0x80244F50u);
  c->r[3]=mfspr(c,1008); // 80244F50
  c->r[3]=c->r[3]|0x00000800u; // 80244F54
  mtspr(c,1008,c->r[3]); // 80244F58
  return; // 80244F5C
}

// ICEnable
void f_80244F60(Ctx* __restrict c) {
  trace_call(0x80244F60u);
  /* isync */ // 80244F60
  c->r[3]=mfspr(c,1008); // 80244F64
  c->r[3]=c->r[3]|0x00008000u; // 80244F68
  mtspr(c,1008,c->r[3]); // 80244F6C
  return; // 80244F70
}

// __LCEnable
void f_80244F80(Ctx* __restrict c) {
  trace_call(0x80244F80u);
  c->r[5]=c->msr; // 80244F80
  c->r[5]=c->r[5]|0x00001000u; // 80244F84
  c->msr=c->r[5]; // 80244F88
  c->r[3]=0u+0x80000000u; // 80244F8C
  c->r[4]=0u+0x00000400u; // 80244F90
  c->ctr=c->r[4]; // 80244F94
L_80244F98:;
  /* dcbt */ // 80244F98
  /* dcbst */ // 80244F9C
  c->r[3]=c->r[3]+0x00000020u; // 80244FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80244F98; } // 80244FA4
  c->r[4]=mfspr(c,920); // 80244FA8
  c->r[4]=c->r[4]|0x100F0000u; // 80244FAC
  mtspr(c,920,c->r[4]); // 80244FB0
  c->r[0]=c->r[0]|0x00000000u; // 80244FB4
  c->r[0]=c->r[0]|0x00000000u; // 80244FB8
  c->r[0]=c->r[0]|0x00000000u; // 80244FBC
  c->r[0]=c->r[0]|0x00000000u; // 80244FC0
  c->r[0]=c->r[0]|0x00000000u; // 80244FC4
  c->r[0]=c->r[0]|0x00000000u; // 80244FC8
  c->r[0]=c->r[0]|0x00000000u; // 80244FCC
  c->r[0]=c->r[0]|0x00000000u; // 80244FD0
  c->r[0]=c->r[0]|0x00000000u; // 80244FD4
  c->r[0]=c->r[0]|0x00000000u; // 80244FD8
  c->r[0]=c->r[0]|0x00000000u; // 80244FDC
  c->r[0]=c->r[0]|0x00000000u; // 80244FE0
  c->r[3]=0u+0xE0000000u; // 80244FE4
  c->r[3]=c->r[3]|0x00000002u; // 80244FE8
  mtspr(c,543,c->r[3]); // 80244FEC
  c->r[3]=c->r[3]|0x000001FEu; // 80244FF0
  mtspr(c,542,c->r[3]); // 80244FF4
  /* isync */ // 80244FF8
  c->r[3]=0u+0xE0000000u; // 80244FFC
  c->r[6]=0u+0x00000200u; // 80245000
  c->ctr=c->r[6]; // 80245004
  c->r[6]=0u+0x00000000u; // 80245008
L_8024500C:;
  dcbz(c->r[6]+c->r[3]); // 8024500C
  c->r[3]=c->r[3]+0x00000020u; // 80245010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024500C; } // 80245014
  c->r[0]=c->r[0]|0x00000000u; // 80245018
  c->r[0]=c->r[0]|0x00000000u; // 8024501C
  c->r[0]=c->r[0]|0x00000000u; // 80245020
  c->r[0]=c->r[0]|0x00000000u; // 80245024
  c->r[0]=c->r[0]|0x00000000u; // 80245028
  c->r[0]=c->r[0]|0x00000000u; // 8024502C
  c->r[0]=c->r[0]|0x00000000u; // 80245030
  c->r[0]=c->r[0]|0x00000000u; // 80245034
  c->r[0]=c->r[0]|0x00000000u; // 80245038
  c->r[0]=c->r[0]|0x00000000u; // 8024503C
  c->r[0]=c->r[0]|0x00000000u; // 80245040
  c->r[0]=c->r[0]|0x00000000u; // 80245044
  return; // 80245048
}

// LCEnable
void f_80245050(Ctx* __restrict c) {
  trace_call(0x80245050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245050
  c->r[0]=c->lr; // 80245054
  W32(c->r[1]+0x00000014u,c->r[0]); // 80245058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024505C
  c->lr=0x80245064u; f_802494C0(c); // 80245060
  c->r[31]=c->r[3]|c->r[3]; // 80245064
  c->lr=0x8024506Cu; f_80244F80(c); // 80245068
  c->r[3]=c->r[31]|c->r[31]; // 8024506C
  c->lr=0x80245074u; f_80249500(c); // 80245070
  c->r[0]=R32(c->r[1]+0x00000014u); // 80245074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80245078
  c->lr=c->r[0]; // 8024507C
  c->r[1]=c->r[1]+0x00000010u; // 80245080
  return; // 80245084
}

// LCDisable
void f_80245090(Ctx* __restrict c) {
  trace_call(0x80245090u);
  c->r[3]=0u+0xE0000000u; // 80245090
  c->r[4]=0u+0x00000200u; // 80245094
  c->ctr=c->r[4]; // 80245098
L_8024509C:;
  /* dcbi */ // 8024509C
  c->r[3]=c->r[3]+0x00000020u; // 802450A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024509C; } // 802450A4
  c->r[4]=mfspr(c,920); // 802450A8
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 802450AC
  mtspr(c,920,c->r[4]); // 802450B0
  return; // 802450B4
}

// LCStoreBlocks
void f_802450C0(Ctx* __restrict c) {
  trace_call(0x802450C0u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 802450C0
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 802450C4
  c->r[6]=c->r[6]|c->r[3]; // 802450C8
  mtspr(c,922,c->r[6]); // 802450CC
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 802450D0
  c->r[6]=c->r[6]|c->r[4]; // 802450D4
  c->r[6]=c->r[6]|0x00000002u; // 802450D8
  mtspr(c,923,c->r[6]); // 802450DC
  return; // 802450E0
}

// LCStoreData
void f_802450F0(Ctx* __restrict c) {
  trace_call(0x802450F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802450F0
  c->r[0]=c->lr; // 802450F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802450F8
  c->r[0]=c->r[5]+0x0000001Fu; // 802450FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245100
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80245104
  c->r[0]=c->r[31]+0x0000007Fu; // 80245108
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024510C
  c->r[30]=rotl(c->r[0],25)&0x01FFFFFFu; // 80245110
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245114
  c->r[29]=c->r[4]|c->r[4]; // 80245118
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024511C
  c->r[28]=c->r[3]|c->r[3]; // 80245120
  goto L_80245164; // 80245124
L_80245128:;
  cmpu(c,0,c->r[31],0x00000080u); // 80245128
  if (!crb(c,0)) { goto L_80245148; } // 8024512C
  c->r[3]=c->r[28]|c->r[28]; // 80245130
  c->r[4]=c->r[29]|c->r[29]; // 80245134
  c->r[5]=c->r[31]|c->r[31]; // 80245138
  c->lr=0x80245140u; f_802450C0(c); // 8024513C
  c->r[31]=0u+0x00000000u; // 80245140
  goto L_80245164; // 80245144
L_80245148:;
  c->r[3]=c->r[28]|c->r[28]; // 80245148
  c->r[4]=c->r[29]|c->r[29]; // 8024514C
  c->r[5]=0u+0x00000000u; // 80245150
  c->lr=0x80245158u; f_802450C0(c); // 80245154
  c->r[31]=c->r[31]+0xFFFFFF80u; // 80245158
  c->r[28]=c->r[28]+0x00001000u; // 8024515C
  c->r[29]=c->r[29]+0x00001000u; // 80245160
L_80245164:;
  cmps(c,0,(int32_t)c->r[31],0); // 80245164
  if (!crb(c,2)) { IRQCHK(c); goto L_80245128; } // 80245168
  c->r[3]=c->r[30]|c->r[30]; // 8024516C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80245170
  c->r[30]=R32(c->r[1]+0x00000018u); // 80245174
  c->r[29]=R32(c->r[1]+0x00000014u); // 80245178
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024517C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80245180
  c->lr=c->r[0]; // 80245184
  c->r[1]=c->r[1]+0x00000020u; // 80245188
  return; // 8024518C
}

// LCQueueWait
void f_80245190(Ctx* __restrict c) {
  trace_call(0x80245190u);
L_80245190:;
  c->r[4]=mfspr(c,920); // 80245190
  c->r[4]=rotl(c->r[4],8)&0x0000000Fu; // 80245194
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80245198
  if (crb(c,1)) { IRQCHK(c); goto L_80245190; } // 8024519C
  return; // 802451A0
}

// DMAErrorHandler
void f_802451B0(Ctx* __restrict c) {
  trace_call(0x802451B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802451B0
  c->r[0]=c->lr; // 802451B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 802451B8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802451BC
  W32(c->r[1]+0x00000078u,c->r[30]); // 802451C0
  W32(c->r[1]+0x00000074u,c->r[29]); // 802451C4
  c->r[29]=c->r[4]|c->r[4]; // 802451C8
  if (!crb(c,6)) { goto L_802451F0; } // 802451CC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802451D0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802451D4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802451D8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802451DC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802451E0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802451E4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802451E8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802451EC
L_802451F0:;
  c->r[31]=0u+0x803B0000u; // 802451F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802451F4
  c->r[31]=c->r[31]+0xFFFFD4F0u; // 802451F8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802451FC
  W32(c->r[1]+0x00000010u,c->r[5]); // 80245200
  W32(c->r[1]+0x00000014u,c->r[6]); // 80245204
  W32(c->r[1]+0x00000018u,c->r[7]); // 80245208
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8024520C
  W32(c->r[1]+0x00000020u,c->r[9]); // 80245210
  W32(c->r[1]+0x00000024u,c->r[10]); // 80245214
  c->lr=0x8024521Cu; f_801CA6C0(c); // 80245218
  c->r[30]=c->r[3]|c->r[3]; // 8024521C
  c->r[3]=c->r[31]+0x00000000u; // 80245220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245224
  c->lr=0x8024522Cu; f_80245CC0(c); // 80245228
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 8024522C
  c->r[4]=c->r[30]|c->r[30]; // 80245230
  c->r[3]=c->r[31]+0x00000018u; // 80245234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245238
  c->lr=0x80245240u; f_80245CC0(c); // 8024523C
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 80245240
  if (crb(c,2)) { goto L_80245254; } // 80245244
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 80245248
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 8024524C
  if (!crb(c,2)) { goto L_8024526C; } // 80245250
L_80245254:;
  c->r[3]=c->r[31]+0x00000038u; // 80245254
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245258
  c->lr=0x80245260u; f_80245CC0(c); // 8024525C
  c->r[3]=c->r[29]|c->r[29]; // 80245260
  c->lr=0x80245268u; f_80245990(c); // 80245264
  c->lr=0x8024526Cu; f_801CA5F0(c); // 80245268
L_8024526C:;
  c->r[3]=c->r[31]+0x00000068u; // 8024526C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245270
  c->lr=0x80245278u; f_80245CC0(c); // 80245274
  c->r[3]=c->r[31]+0x000000A4u; // 80245278
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024527C
  c->lr=0x80245284u; f_80245CC0(c); // 80245280
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 80245284
  if (crb(c,2)) { goto L_80245298; } // 80245288
  c->r[3]=c->r[31]+0x000000DCu; // 8024528C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245290
  c->lr=0x80245298u; f_80245CC0(c); // 80245294
L_80245298:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 80245298
  if (crb(c,2)) { goto L_802452AC; } // 8024529C
  c->r[3]=c->r[31]+0x0000011Cu; // 802452A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802452A4
  c->lr=0x802452ACu; f_80245CC0(c); // 802452A8
L_802452AC:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 802452AC
  if (crb(c,2)) { goto L_802452C0; } // 802452B0
  c->r[3]=c->r[31]+0x00000148u; // 802452B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802452B8
  c->lr=0x802452C0u; f_80245CC0(c); // 802452BC
L_802452C0:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 802452C0
  if (crb(c,2)) { goto L_802452D4; } // 802452C4
  c->r[3]=c->r[31]+0x00000168u; // 802452C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802452CC
  c->lr=0x802452D4u; f_80245CC0(c); // 802452D0
L_802452D4:;
  c->r[3]=c->r[30]|c->r[30]; // 802452D4
  c->lr=0x802452DCu; f_801CA6D0(c); // 802452D8
  c->r[0]=R32(c->r[1]+0x00000084u); // 802452DC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 802452E0
  c->r[30]=R32(c->r[1]+0x00000078u); // 802452E4
  c->r[29]=R32(c->r[1]+0x00000074u); // 802452E8
  c->lr=c->r[0]; // 802452EC
  c->r[1]=c->r[1]+0x00000080u; // 802452F0
  return; // 802452F4
}

// __OSCacheInit
void f_80245300(Ctx* __restrict c) {
  trace_call(0x80245300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245300
  c->r[0]=c->lr; // 80245304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80245308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024530C
  c->lr=0x80245314u; f_801CA590(c); // 80245310
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80245314
  if (!crb(c,2)) { goto L_80245320; } // 80245318
  c->lr=0x80245320u; f_80244F60(c); // 8024531C
L_80245320:;
  c->lr=0x80245324u; f_801CA590(c); // 80245320
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 80245324
  if (!crb(c,2)) { goto L_80245330; } // 80245328
  c->lr=0x80245330u; f_80244E00(c); // 8024532C
L_80245330:;
  c->lr=0x80245334u; f_801CA5B0(c); // 80245330
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 80245334
  if (!crb(c,2)) { goto L_802453C4; } // 80245338
  c->lr=0x80245340u; f_801CA570(c); // 8024533C
  c->r[31]=c->r[3]|c->r[3]; // 80245340
  /* sync */ // 80245344
  c->r[3]=0u+0x00000030u; // 80245348
  c->lr=0x80245350u; f_801CA580(c); // 8024534C
  /* sync */ // 80245350
  /* sync */ // 80245354
  c->lr=0x8024535Cu; f_801CA5B0(c); // 80245358
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8024535C
  c->lr=0x80245364u; f_801CA5C0(c); // 80245360
  /* sync */ // 80245364
  /* sync */ // 80245368
  c->lr=0x80245370u; f_801CA5B0(c); // 8024536C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80245370
  c->lr=0x80245378u; f_801CA5C0(c); // 80245374
  /* sync */ // 80245378
  c->lr=0x80245380u; f_801CA5B0(c); // 8024537C
  c->r[3]=c->r[3]|0x00200000u; // 80245380
  c->lr=0x80245388u; f_801CA5C0(c); // 80245384
L_80245388:;
  c->lr=0x8024538Cu; f_801CA5B0(c); // 80245388
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8024538C
  if (!crb(c,2)) { IRQCHK(c); goto L_80245388; } // 80245390
  c->lr=0x80245398u; f_801CA5B0(c); // 80245394
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 80245398
  c->lr=0x802453A0u; f_801CA5C0(c); // 8024539C
L_802453A0:;
  c->lr=0x802453A4u; f_801CA5B0(c); // 802453A0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802453A4
  if (!crb(c,2)) { IRQCHK(c); goto L_802453A0; } // 802453A8
  c->r[3]=c->r[31]|c->r[31]; // 802453AC
  c->lr=0x802453B4u; f_801CA580(c); // 802453B0
  c->lr=0x802453B8u; f_801CA5B0(c); // 802453B4
  c->r[0]=c->r[3]|0x80000000u; // 802453B8
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 802453BC
  c->lr=0x802453C4u; f_801CA5C0(c); // 802453C0
L_802453C4:;
  c->r[4]=0u+0x80240000u; // 802453C4
  c->r[3]=0u+0x00000001u; // 802453C8
  c->r[4]=c->r[4]+0x000051B0u; // 802453CC
  c->lr=0x802453D4u; f_80245E70(c); // 802453D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802453D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802453D8
  c->lr=c->r[0]; // 802453DC
  c->r[1]=c->r[1]+0x00000010u; // 802453E0
  return; // 802453E4
}

// __OSLoadFPUContext
void f_802453F0(Ctx* __restrict c) {
  trace_call(0x802453F0u);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 802453F0
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 802453F4
  if (crb(c,2)) { goto L_80245510; } // 802453F8
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 802453FC
  c->fpscr=(uint32_t)d2u(c->f[0]); // 80245400
  c->r[5]=mfspr(c,920); // 80245404
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 80245408
  if (crb(c,2)) { goto L_80245490; } // 8024540C
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 80245410
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 80245414
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 80245418
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 8024541C
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 80245420
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 80245424
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 80245428
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 8024542C
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 80245430
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 80245434
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 80245438
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 8024543C
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 80245440
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 80245444
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 80245448
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 8024544C
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 80245450
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 80245454
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 80245458
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 8024545C
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 80245460
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 80245464
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 80245468
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 8024546C
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 80245470
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 80245474
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 80245478
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 8024547C
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 80245480
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 80245484
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 80245488
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 8024548C
L_80245490:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 80245490
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 80245494
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 80245498
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 8024549C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 802454A0
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 802454A4
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 802454A8
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 802454AC
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 802454B0
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 802454B4
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 802454B8
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 802454BC
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 802454C0
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 802454C4
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 802454C8
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 802454CC
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 802454D0
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 802454D4
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 802454D8
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 802454DC
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 802454E0
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 802454E4
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 802454E8
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 802454EC
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 802454F0
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 802454F4
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 802454F8
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 802454FC
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 80245500
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 80245504
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 80245508
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 8024550C
L_80245510:;
  return; // 80245510
}

// __OSSaveFPUContext
void f_80245520(Ctx* __restrict c) {
  trace_call(0x80245520u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 80245520
  c->r[3]=c->r[3]|0x00000001u; // 80245524
  W16(c->r[5]+0x000001A2u,c->r[3]); // 80245528
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 8024552C
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 80245530
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 80245534
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 80245538
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 8024553C
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 80245540
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 80245544
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 80245548
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 8024554C
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 80245550
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 80245554
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 80245558
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 8024555C
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 80245560
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 80245564
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 80245568
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 8024556C
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 80245570
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 80245574
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 80245578
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 8024557C
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 80245580
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 80245584
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 80245588
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 8024558C
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 80245590
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 80245594
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 80245598
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 8024559C
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 802455A0
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 802455A4
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 802455A8
  c->f[0]=u2d((uint64_t)c->fpscr); // 802455AC
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 802455B0
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 802455B4
  c->r[3]=mfspr(c,920); // 802455B8
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 802455BC
  if (crb(c,2)) { goto L_80245644; } // 802455C0
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 802455C4
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 802455C8
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 802455CC
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 802455D0
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 802455D4
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 802455D8
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 802455DC
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 802455E0
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 802455E4
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 802455E8
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 802455EC
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 802455F0
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 802455F4
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 802455F8
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 802455FC
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 80245600
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 80245604
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 80245608
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 8024560C
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 80245610
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 80245614
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 80245618
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 8024561C
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 80245620
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 80245624
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 80245628
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 8024562C
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 80245630
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 80245634
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 80245638
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 8024563C
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 80245640
L_80245644:;
  return; // 80245644
}

// OSSaveFPUContext
void f_80245650(Ctx* __restrict c) {
  trace_call(0x80245650u);
  c->r[5]=c->r[3]+0x00000000u; // 80245650
  f_80245520(c); return; // 80245654
}

// OSSetCurrentContext
void f_80245660(Ctx* __restrict c) {
  trace_call(0x80245660u);
  c->r[4]=0u+0x80000000u; // 80245660
  W32(c->r[4]+0x000000D4u,c->r[3]); // 80245664
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 80245668
  W32(c->r[4]+0x000000C0u,c->r[5]); // 8024566C
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80245670
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 80245674
  if (!crb(c,2)) { goto L_80245698; } // 80245678
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 8024567C
  c->r[6]=c->r[6]|0x00002000u; // 80245680
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 80245684
  c->r[6]=c->msr; // 80245688
  c->r[6]=c->r[6]|0x00000002u; // 8024568C
  c->msr=c->r[6]; // 80245690
  return; // 80245694
L_80245698:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 80245698
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 8024569C
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 802456A0
  c->r[6]=c->msr; // 802456A4
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 802456A8
  c->r[6]=c->r[6]|0x00000002u; // 802456AC
  c->msr=c->r[6]; // 802456B0
  /* isync */ // 802456B4
  return; // 802456B8
}

// OSGetCurrentContext
void f_802456C0(Ctx* __restrict c) {
  trace_call(0x802456C0u);
  c->r[3]=0u+0x80000000u; // 802456C0
  c->r[3]=R32(c->r[3]+0x000000D4u); // 802456C4
  return; // 802456C8
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_802456D0(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_80245750(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_80245830(Ctx* __restrict c) {
  trace_call(0x80245830u);
  c->r[3]=c->r[1]|c->r[1]; // 80245830
  return; // 80245834
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_80245840(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_80245870(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_802458A0(Ctx* __restrict c) {
  trace_call(0x802458A0u);
  c->r[5]=0u+0x00000000u; // 802458A0
  W16(c->r[3]+0x000001A0u,c->r[5]); // 802458A4
  c->r[4]=0u+0x80000000u; // 802458A8
  W16(c->r[3]+0x000001A2u,c->r[5]); // 802458AC
  c->r[0]=R32(c->r[4]+0x000000D8u); // 802458B0
  cmpu(c,0,c->r[3],c->r[0]); // 802458B4
  if (!crb(c,2)) return; // 802458B8
  W32(c->r[4]+0x000000D8u,c->r[5]); // 802458BC
  return; // 802458C0
}

// OSInitContext
void f_802458D0(Ctx* __restrict c) {
  trace_call(0x802458D0u);
  W32(c->r[3]+0x00000198u,c->r[4]); // 802458D0
  W32(c->r[3]+0x00000004u,c->r[5]); // 802458D4
  c->r[11]=0u+0x00000000u; // 802458D8
  c->r[11]=c->r[11]|0x00009032u; // 802458DC
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 802458E0
  c->r[0]=0u+0x00000000u; // 802458E4
  W32(c->r[3]+0x00000080u,c->r[0]); // 802458E8
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 802458EC
  W32(c->r[3]+0x00000008u,c->r[2]); // 802458F0
  W32(c->r[3]+0x00000034u,c->r[13]); // 802458F4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802458F8
  W32(c->r[3]+0x00000010u,c->r[0]); // 802458FC
  W32(c->r[3]+0x00000014u,c->r[0]); // 80245900
  W32(c->r[3]+0x00000018u,c->r[0]); // 80245904
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80245908
  W32(c->r[3]+0x00000020u,c->r[0]); // 8024590C
  W32(c->r[3]+0x00000024u,c->r[0]); // 80245910
  W32(c->r[3]+0x00000028u,c->r[0]); // 80245914
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80245918
  W32(c->r[3]+0x00000030u,c->r[0]); // 8024591C
  W32(c->r[3]+0x00000038u,c->r[0]); // 80245920
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80245924
  W32(c->r[3]+0x00000040u,c->r[0]); // 80245928
  W32(c->r[3]+0x00000044u,c->r[0]); // 8024592C
  W32(c->r[3]+0x00000048u,c->r[0]); // 80245930
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80245934
  W32(c->r[3]+0x00000050u,c->r[0]); // 80245938
  W32(c->r[3]+0x00000054u,c->r[0]); // 8024593C
  W32(c->r[3]+0x00000058u,c->r[0]); // 80245940
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80245944
  W32(c->r[3]+0x00000060u,c->r[0]); // 80245948
  W32(c->r[3]+0x00000064u,c->r[0]); // 8024594C
  W32(c->r[3]+0x00000068u,c->r[0]); // 80245950
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 80245954
  W32(c->r[3]+0x00000070u,c->r[0]); // 80245958
  W32(c->r[3]+0x00000074u,c->r[0]); // 8024595C
  W32(c->r[3]+0x00000078u,c->r[0]); // 80245960
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 80245964
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80245968
  W32(c->r[3]+0x000001A8u,c->r[0]); // 8024596C
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80245970
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80245974
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80245978
  W32(c->r[3]+0x000001B8u,c->r[0]); // 8024597C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80245980
  W32(c->r[3]+0x000001C0u,c->r[0]); // 80245984
  f_802458A0(c); return; // 80245988
}

// OSDumpContext
void f_80245990(Ctx* __restrict c) {
  trace_call(0x80245990u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245990
  c->r[0]=c->lr; // 80245994
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80245998
  c->r[11]=c->r[1]+0x000002F0u; // 8024599C
  c->lr=0x802459A4u; f_800C2E44(c); // 802459A0
  c->r[28]=0u+0x803B0000u; // 802459A4
  c->r[30]=c->r[3]|c->r[3]; // 802459A8
  c->r[28]=c->r[28]+0xFFFFD678u; // 802459AC
  c->r[4]=c->r[30]|c->r[30]; // 802459B0
  c->r[3]=c->r[28]+0x00000000u; // 802459B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802459B8
  c->lr=0x802459C0u; f_80245CC0(c); // 802459BC
  c->r[26]=c->r[30]|c->r[30]; // 802459C0
  c->r[25]=0u+0x00000000u; // 802459C4
L_802459C8:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 802459C8
  c->r[4]=c->r[25]|c->r[25]; // 802459CC
  c->r[5]=R32(c->r[26]+0x00000000u); // 802459D0
  c->r[3]=c->r[28]+0x00000048u; // 802459D4
  c->r[9]=c->r[8]|c->r[8]; // 802459D8
  c->r[7]=c->r[25]+0x00000010u; // 802459DC
  c->r[6]=c->r[5]|c->r[5]; // 802459E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802459E4
  c->lr=0x802459ECu; f_80245CC0(c); // 802459E8
  c->r[25]=c->r[25]+0x00000001u; // 802459EC
  c->r[26]=c->r[26]+0x00000004u; // 802459F0
  cmpu(c,0,c->r[25],0x00000010u); // 802459F4
  if (crb(c,0)) { IRQCHK(c); goto L_802459C8; } // 802459F8
  c->r[4]=R32(c->r[30]+0x00000084u); // 802459FC
  c->r[3]=c->r[28]+0x00000078u; // 80245A00
  c->r[5]=R32(c->r[30]+0x00000080u); // 80245A04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245A08
  c->lr=0x80245A10u; f_80245CC0(c); // 80245A0C
  c->r[4]=R32(c->r[30]+0x00000198u); // 80245A10
  c->r[3]=c->r[28]+0x000000A8u; // 80245A14
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 80245A18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245A1C
  c->lr=0x80245A24u; f_80245CC0(c); // 80245A20
  c->r[3]=c->r[28]+0x000000D8u; // 80245A24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245A28
  c->lr=0x80245A30u; f_80245CC0(c); // 80245A2C
  c->r[26]=c->r[30]|c->r[30]; // 80245A30
  c->r[25]=0u+0x00000000u; // 80245A34
L_80245A38:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 80245A38
  c->r[4]=c->r[25]|c->r[25]; // 80245A3C
  c->r[7]=R32(c->r[26]+0x000001B4u); // 80245A40
  c->r[3]=c->r[28]+0x000000ECu; // 80245A44
  c->r[6]=c->r[25]+0x00000004u; // 80245A48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245A4C
  c->lr=0x80245A54u; f_80245CC0(c); // 80245A50
  c->r[25]=c->r[25]+0x00000001u; // 80245A54
  c->r[26]=c->r[26]+0x00000004u; // 80245A58
  cmpu(c,0,c->r[25],0x00000004u); // 80245A5C
  if (crb(c,0)) { IRQCHK(c); goto L_80245A38; } // 80245A60
  c->r[0]=R16(c->r[30]+0x000001A2u); // 80245A64
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80245A68
  if (crb(c,2)) { goto L_80245B84; } // 80245A6C
  c->lr=0x80245A74u; f_802494C0(c); // 80245A70
  c->r[6]=0u+0x80000000u; // 80245A74
  c->r[5]=0u+0x00000000u; // 80245A78
  c->r[27]=R32(c->r[6]+0x000000D4u); // 80245A7C
  c->r[4]=c->r[1]+0x00000008u; // 80245A80
  c->r[31]=c->r[3]|c->r[3]; // 80245A84
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80245A88
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80245A8C
  c->r[0]=R32(c->r[6]+0x000000D8u); // 80245A90
  cmpu(c,0,c->r[4],c->r[0]); // 80245A94
  if (!crb(c,2)) { goto L_80245AA0; } // 80245A98
  W32(c->r[6]+0x000000D8u,c->r[5]); // 80245A9C
L_80245AA0:;
  c->r[3]=c->r[1]+0x00000008u; // 80245AA0
  c->lr=0x80245AA8u; f_80245660(c); // 80245AA4
  c->r[3]=c->r[28]+0x00000110u; // 80245AA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245AAC
  c->lr=0x80245AB4u; f_80245CC0(c); // 80245AB0
  c->r[26]=c->r[30]|c->r[30]; // 80245AB4
  c->r[25]=0u+0x00000000u; // 80245AB8
L_80245ABC:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 80245ABC
  c->lr=0x80245AC4u; f_800C2D24(c); // 80245AC0
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 80245AC4
  c->r[29]=c->r[3]|c->r[3]; // 80245AC8
  c->lr=0x80245AD0u; f_800C2D24(c); // 80245ACC
  c->r[5]=c->r[3]|c->r[3]; // 80245AD0
  c->r[4]=c->r[25]|c->r[25]; // 80245AD4
  c->r[7]=c->r[29]|c->r[29]; // 80245AD8
  c->r[3]=c->r[28]+0x00000124u; // 80245ADC
  c->r[6]=c->r[25]+0x00000001u; // 80245AE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245AE4
  c->lr=0x80245AECu; f_80245CC0(c); // 80245AE8
  c->r[25]=c->r[25]+0x00000002u; // 80245AEC
  c->r[26]=c->r[26]+0x00000010u; // 80245AF0
  cmpu(c,0,c->r[25],0x00000020u); // 80245AF4
  if (crb(c,0)) { IRQCHK(c); goto L_80245ABC; } // 80245AF8
  c->r[3]=c->r[28]+0x00000140u; // 80245AFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245B00
  c->lr=0x80245B08u; f_80245CC0(c); // 80245B04
  c->r[26]=c->r[30]|c->r[30]; // 80245B08
  c->r[25]=0u+0x00000000u; // 80245B0C
L_80245B10:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 80245B10
  c->lr=0x80245B18u; f_800C2D24(c); // 80245B14
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 80245B18
  c->r[29]=c->r[3]|c->r[3]; // 80245B1C
  c->lr=0x80245B24u; f_800C2D24(c); // 80245B20
  c->r[5]=c->r[3]|c->r[3]; // 80245B24
  c->r[4]=c->r[25]|c->r[25]; // 80245B28
  c->r[7]=c->r[29]|c->r[29]; // 80245B2C
  c->r[3]=c->r[28]+0x00000154u; // 80245B30
  c->r[6]=c->r[25]+0x00000001u; // 80245B34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245B38
  c->lr=0x80245B40u; f_80245CC0(c); // 80245B3C
  c->r[25]=c->r[25]+0x00000002u; // 80245B40
  c->r[26]=c->r[26]+0x00000010u; // 80245B44
  cmpu(c,0,c->r[25],0x00000020u); // 80245B48
  if (crb(c,0)) { IRQCHK(c); goto L_80245B10; } // 80245B4C
  c->r[5]=0u+0x00000000u; // 80245B50
  W16(c->r[1]+0x000001A8u,c->r[5]); // 80245B54
  c->r[3]=0u+0x80000000u; // 80245B58
  c->r[4]=c->r[1]+0x00000008u; // 80245B5C
  W16(c->r[1]+0x000001AAu,c->r[5]); // 80245B60
  c->r[0]=R32(c->r[3]+0x000000D8u); // 80245B64
  cmpu(c,0,c->r[4],c->r[0]); // 80245B68
  if (!crb(c,2)) { goto L_80245B74; } // 80245B6C
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80245B70
L_80245B74:;
  c->r[3]=c->r[27]|c->r[27]; // 80245B74
  c->lr=0x80245B7Cu; f_80245660(c); // 80245B78
  c->r[3]=c->r[31]|c->r[31]; // 80245B7C
  c->lr=0x80245B84u; f_80249500(c); // 80245B80
L_80245B84:;
  c->r[3]=c->r[28]+0x00000174u; // 80245B84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245B88
  c->lr=0x80245B90u; f_80245CC0(c); // 80245B8C
  c->r[25]=R32(c->r[30]+0x00000004u); // 80245B90
  c->r[26]=0u+0x00000000u; // 80245B94
  goto L_80245BB8; // 80245B98
L_80245B9C:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 80245B9C
  c->r[4]=c->r[25]|c->r[25]; // 80245BA0
  c->r[6]=R32(c->r[25]+0x00000004u); // 80245BA4
  c->r[3]=c->r[28]+0x0000019Cu; // 80245BA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80245BAC
  c->lr=0x80245BB4u; f_80245CC0(c); // 80245BB0
  c->r[25]=R32(c->r[25]+0x00000000u); // 80245BB4
L_80245BB8:;
  cmps(c,0,(int32_t)c->r[25],0); // 80245BB8
  if (crb(c,2)) { goto L_80245BD8; } // 80245BBC
  c->r[0]=c->r[25]+0x00010000u; // 80245BC0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80245BC4
  if (crb(c,2)) { goto L_80245BD8; } // 80245BC8
  cmpu(c,0,c->r[26],0x00000010u); // 80245BCC
  c->r[26]=c->r[26]+0x00000001u; // 80245BD0
  if (crb(c,0)) { IRQCHK(c); goto L_80245B9C; } // 80245BD4
L_80245BD8:;
  c->r[11]=c->r[1]+0x000002F0u; // 80245BD8
  c->lr=0x80245BE0u; f_800C2E90(c); // 80245BDC
  c->r[0]=R32(c->r[1]+0x000002F4u); // 80245BE0
  c->lr=c->r[0]; // 80245BE4
  c->r[1]=c->r[1]+0x000002F0u; // 80245BE8
  return; // 80245BEC
}

// OSSwitchFPUContext
void f_80245BF0(Ctx* __restrict c) {
  trace_call(0x80245BF0u);
  c->r[5]=c->msr; // 80245BF0
  c->r[5]=c->r[5]|0x00002000u; // 80245BF4
  c->msr=c->r[5]; // 80245BF8
  /* isync */ // 80245BFC
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 80245C00
  c->r[5]=c->r[5]|0x00002000u; // 80245C04
  mtspr(c,27,c->r[5]); // 80245C08
  c->r[3]=0u+0x80000000u; // 80245C0C
  c->r[5]=R32(c->r[3]+0x000000D8u); // 80245C10
  W32(c->r[3]+0x000000D8u,c->r[4]); // 80245C14
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80245C18
  if (crb(c,2)) { goto L_80245C30; } // 80245C1C
  cmps(c,0,(int32_t)c->r[5],0); // 80245C20
  if (crb(c,2)) { goto L_80245C2C; } // 80245C24
  c->lr=0x80245C2Cu; f_80245520(c); // 80245C28
L_80245C2C:;
  c->lr=0x80245C30u; f_802453F0(c); // 80245C2C
L_80245C30:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 80245C30
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 80245C34
  c->r[3]=R32(c->r[4]+0x00000084u); // 80245C38
  c->lr=c->r[3]; // 80245C3C
  c->r[3]=R32(c->r[4]+0x00000198u); // 80245C40
  mtspr(c,26,c->r[3]); // 80245C44
  c->r[3]=R32(c->r[4]+0x00000088u); // 80245C48
  c->ctr=c->r[3]; // 80245C4C
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 80245C50
  mtspr(c,1,c->r[3]); // 80245C54
  c->r[3]=R16(c->r[4]+0x000001A2u); // 80245C58
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80245C5C
  W16(c->r[4]+0x000001A2u,c->r[3]); // 80245C60
  c->r[5]=R32(c->r[4]+0x00000014u); // 80245C64
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80245C68
  c->r[4]=R32(c->r[4]+0x00000010u); // 80245C6C
  return; /* rfi */ // 80245C70
}

// __OSContextInit
void f_80245C80(Ctx* __restrict c) {
  trace_call(0x80245C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245C80
  c->r[0]=c->lr; // 80245C84
  c->r[4]=0u+0x80240000u; // 80245C88
  c->r[3]=0u+0x00000007u; // 80245C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80245C90
  c->r[4]=c->r[4]+0x00005BF0u; // 80245C94
  c->lr=0x80245C9Cu; f_802439F0(c); // 80245C98
  c->r[3]=0u+0x80000000u; // 80245C9C
  c->r[0]=0u+0x00000000u; // 80245CA0
  W32(c->r[3]+0x000000D8u,c->r[0]); // 80245CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80245CA8
  c->lr=c->r[0]; // 80245CAC
  c->r[1]=c->r[1]+0x00000010u; // 80245CB0
  return; // 80245CB4
}

void hle_OSReport(Ctx*);
// OSReport
void f_80245CC0(Ctx* __restrict c) {
  hle_OSReport(c);
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_80245D40(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_80245E70(Ctx* __restrict c) {
  trace_call(0x80245E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80245E70
  c->r[0]=c->lr; // 80245E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80245E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80245E7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80245E80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80245E84
  c->r[29]=c->r[3]|c->r[3]; // 80245E88
  W32(c->r[1]+0x00000010u,c->r[28]); // 80245E8C
  c->r[28]=c->r[4]|c->r[4]; // 80245E90
  c->lr=0x80245E98u; f_802494C0(c); // 80245E94
  c->r[4]=0u+0x804A0000u; // 80245E98
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 80245E9C
  c->r[4]=c->r[4]+0xFFFFC4B0u; // 80245EA0
  cmpu(c,0,c->r[29],0x00000010u); // 80245EA4
  c->r[30]=R32(c->r[4]+c->r[0]); // 80245EA8
  c->r[29]=c->r[3]|c->r[3]; // 80245EAC
  W32(c->r[4]+c->r[0],c->r[28]); // 80245EB0
  if (!crb(c,2)) { goto L_802460D0; } // 80245EB4
  c->lr=0x80245EBCu; f_801CA570(c); // 80245EB8
  c->r[31]=c->r[3]|c->r[3]; // 80245EBC
  c->r[3]=c->r[3]|0x00002000u; // 80245EC0
  c->lr=0x80245EC8u; f_801CA580(c); // 80245EC4
  c->lr=0x80245ECCu; f_801CA670(c); // 80245EC8
  cmps(c,0,(int32_t)c->r[28],0); // 80245ECC
  if (crb(c,2)) { goto L_8024606C; } // 80245ED0
  c->r[5]=0u+0x80000000u; // 80245ED4
  c->r[4]=0u+0x60060000u; // 80245ED8
  c->r[9]=R32(c->r[5]+0x000000DCu); // 80245EDC
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 80245EE0
  c->r[8]=0u+0xFFFFFFFFu; // 80245EE4
  c->r[7]=0u+0x00000004u; // 80245EE8
  c->r[0]=0u+0x00000002u; // 80245EEC
  goto L_80246050; // 80245EF0
  c->r[0]=c->r[0]|0x00000000u; // 80245EF4
L_80245EF8:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 80245EF8
  c->r[4]=c->r[4]|0x00000900u; // 80245EFC
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 80245F00
  c->r[6]=R16(c->r[9]+0x000001A2u); // 80245F04
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 80245F08
  if (!crb(c,2)) { goto L_80246034; } // 80245F0C
  c->r[4]=c->r[6]|0x00000001u; // 80245F10
  W16(c->r[9]+0x000001A2u,c->r[4]); // 80245F14
  c->r[4]=c->r[9]+0x00000090u; // 80245F18
  c->r[6]=c->r[9]+0x000001C8u; // 80245F1C
  c->ctr=c->r[0]; // 80245F20
L_80245F24:;
  W32(c->r[4]+0x00000004u,c->r[8]); // 80245F24
  W32(c->r[4]+0x00000000u,c->r[8]); // 80245F28
  W32(c->r[6]+0x00000004u,c->r[8]); // 80245F2C
  W32(c->r[6]+0x00000000u,c->r[8]); // 80245F30
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80245F34
  W32(c->r[4]+0x00000008u,c->r[8]); // 80245F38
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 80245F3C
  W32(c->r[6]+0x00000008u,c->r[8]); // 80245F40
  W32(c->r[4]+0x00000014u,c->r[8]); // 80245F44
  W32(c->r[4]+0x00000010u,c->r[8]); // 80245F48
  W32(c->r[6]+0x00000014u,c->r[8]); // 80245F4C
  W32(c->r[6]+0x00000010u,c->r[8]); // 80245F50
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 80245F54
  W32(c->r[4]+0x00000018u,c->r[8]); // 80245F58
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 80245F5C
  W32(c->r[6]+0x00000018u,c->r[8]); // 80245F60
  W32(c->r[4]+0x00000024u,c->r[8]); // 80245F64
  W32(c->r[4]+0x00000020u,c->r[8]); // 80245F68
  W32(c->r[6]+0x00000024u,c->r[8]); // 80245F6C
  W32(c->r[6]+0x00000020u,c->r[8]); // 80245F70
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 80245F74
  W32(c->r[4]+0x00000028u,c->r[8]); // 80245F78
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 80245F7C
  W32(c->r[6]+0x00000028u,c->r[8]); // 80245F80
  W32(c->r[4]+0x00000034u,c->r[8]); // 80245F84
  W32(c->r[4]+0x00000030u,c->r[8]); // 80245F88
  W32(c->r[6]+0x00000034u,c->r[8]); // 80245F8C
  W32(c->r[6]+0x00000030u,c->r[8]); // 80245F90
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 80245F94
  W32(c->r[4]+0x00000038u,c->r[8]); // 80245F98
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 80245F9C
  W32(c->r[6]+0x00000038u,c->r[8]); // 80245FA0
  W32(c->r[4]+0x00000044u,c->r[8]); // 80245FA4
  W32(c->r[4]+0x00000040u,c->r[8]); // 80245FA8
  W32(c->r[6]+0x00000044u,c->r[8]); // 80245FAC
  W32(c->r[6]+0x00000040u,c->r[8]); // 80245FB0
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 80245FB4
  W32(c->r[4]+0x00000048u,c->r[8]); // 80245FB8
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 80245FBC
  W32(c->r[6]+0x00000048u,c->r[8]); // 80245FC0
  W32(c->r[4]+0x00000054u,c->r[8]); // 80245FC4
  W32(c->r[4]+0x00000050u,c->r[8]); // 80245FC8
  W32(c->r[6]+0x00000054u,c->r[8]); // 80245FCC
  W32(c->r[6]+0x00000050u,c->r[8]); // 80245FD0
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 80245FD4
  W32(c->r[4]+0x00000058u,c->r[8]); // 80245FD8
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 80245FDC
  W32(c->r[6]+0x00000058u,c->r[8]); // 80245FE0
  W32(c->r[4]+0x00000064u,c->r[8]); // 80245FE4
  W32(c->r[4]+0x00000060u,c->r[8]); // 80245FE8
  W32(c->r[6]+0x00000064u,c->r[8]); // 80245FEC
  W32(c->r[6]+0x00000060u,c->r[8]); // 80245FF0
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 80245FF4
  W32(c->r[4]+0x00000068u,c->r[8]); // 80245FF8
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 80245FFC
  W32(c->r[6]+0x00000068u,c->r[8]); // 80246000
  W32(c->r[4]+0x00000074u,c->r[8]); // 80246004
  W32(c->r[4]+0x00000070u,c->r[8]); // 80246008
  W32(c->r[6]+0x00000074u,c->r[8]); // 8024600C
  W32(c->r[6]+0x00000070u,c->r[8]); // 80246010
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 80246014
  W32(c->r[4]+0x00000078u,c->r[8]); // 80246018
  c->r[4]=c->r[4]+0x00000080u; // 8024601C
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 80246020
  W32(c->r[6]+0x00000078u,c->r[8]); // 80246024
  c->r[6]=c->r[6]+0x00000080u; // 80246028
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80245F24; } // 8024602C
  W32(c->r[9]+0x00000194u,c->r[7]); // 80246030
L_80246034:;
  c->r[4]=R32(c->r[13]+0xFFFF9130u); // 80246034
  c->r[6]=R32(c->r[9]+0x00000194u); // 80246038
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 8024603C
  c->r[4]=c->r[6]|c->r[4]; // 80246040
  c->r[4]=c->r[4]&c->r[5]; // 80246044
  W32(c->r[9]+0x00000194u,c->r[4]); // 80246048
  c->r[9]=R32(c->r[9]+0x000002FCu); // 8024604C
L_80246050:;
  cmps(c,0,(int32_t)c->r[9],0); // 80246050
  if (!crb(c,2)) { IRQCHK(c); goto L_80245EF8; } // 80246054
  c->r[0]=R32(c->r[13]+0xFFFF9130u); // 80246058
  c->r[31]=c->r[31]|0x00000900u; // 8024605C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80246060
  c->r[4]=c->r[3]|c->r[0]; // 80246064
  goto L_802460B8; // 80246068
L_8024606C:;
  c->r[5]=0u+0x80000000u; // 8024606C
  c->r[4]=0u+0x60060000u; // 80246070
  c->r[6]=R32(c->r[5]+0x000000DCu); // 80246074
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 80246078
  c->r[5]=0u+0xFFFFF6FFu; // 8024607C
  goto L_802460A4; // 80246080
L_80246084:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 80246084
  c->r[0]=c->r[0]&c->r[5]; // 80246088
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 8024608C
  c->r[0]=R32(c->r[6]+0x00000194u); // 80246090
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 80246094
  c->r[0]=c->r[0]&c->r[4]; // 80246098
  W32(c->r[6]+0x00000194u,c->r[0]); // 8024609C
  c->r[6]=R32(c->r[6]+0x000002FCu); // 802460A0
L_802460A4:;
  cmps(c,0,(int32_t)c->r[6],0); // 802460A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80246084; } // 802460A8
  c->r[0]=0u+0xFFFFF6FFu; // 802460AC
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 802460B0
  c->r[31]=c->r[31]&c->r[0]; // 802460B4
L_802460B8:;
  c->r[3]=0u+0x60060000u; // 802460B8
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 802460BC
  c->r[3]=c->r[4]&c->r[0]; // 802460C0
  c->lr=0x802460C8u; f_801CA690(c); // 802460C4
  c->r[3]=c->r[31]|c->r[31]; // 802460C8
  c->lr=0x802460D0u; f_801CA580(c); // 802460CC
L_802460D0:;
  c->r[3]=c->r[29]|c->r[29]; // 802460D0
  c->lr=0x802460D8u; f_80249500(c); // 802460D4
  c->r[3]=c->r[30]|c->r[30]; // 802460D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802460DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802460E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802460E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 802460E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802460EC
  c->lr=c->r[0]; // 802460F0
  c->r[1]=c->r[1]+0x00000020u; // 802460F4
  return; // 802460F8
}

// __OSUnhandledException
void f_80246100(Ctx* __restrict c) {
  trace_call(0x80246100u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246100
  c->r[0]=c->lr; // 80246104
  W32(c->r[1]+0x00000034u,c->r[0]); // 80246108
  c->r[11]=c->r[1]+0x00000030u; // 8024610C
  c->lr=0x80246114u; f_800C2E3C(c); // 80246110
  c->r[31]=0u+0x803B0000u; // 80246114
  c->r[25]=c->r[3]|c->r[3]; // 80246118
  c->r[26]=c->r[4]|c->r[4]; // 8024611C
  c->r[27]=c->r[5]|c->r[5]; // 80246120
  c->r[28]=c->r[6]|c->r[6]; // 80246124
  c->r[31]=c->r[31]+0xFFFFD830u; // 80246128
  c->lr=0x80246130u; f_8024EAD0(c); // 8024612C
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 80246130
  c->r[29]=c->r[4]|c->r[4]; // 80246134
  c->r[30]=c->r[3]|c->r[3]; // 80246138
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8024613C
  if (!crb(c,2)) { goto L_80246158; } // 80246140
  c->r[4]=c->r[25]|c->r[25]; // 80246144
  c->r[3]=c->r[31]+0x0000005Cu; // 80246148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024614C
  c->lr=0x80246154u; f_80245CC0(c); // 80246150
  goto L_802462B4; // 80246154
L_80246158:;
  cmpu(c,0,c->r[25],0x00000006u); // 80246158
  if (!crb(c,2)) { goto L_80246248; } // 8024615C
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 80246160
  if (crb(c,2)) { goto L_80246248; } // 80246164
  c->r[3]=0u+0x804A0000u; // 80246168
  c->r[3]=c->r[3]+0xFFFFC4B0u; // 8024616C
  c->r[0]=R32(c->r[3]+0x00000040u); // 80246170
  cmps(c,0,(int32_t)c->r[0],0); // 80246174
  if (crb(c,2)) { goto L_80246248; } // 80246178
  c->r[25]=0u+0x00000010u; // 8024617C
  c->lr=0x80246184u; f_801CA570(c); // 80246180
  c->r[23]=c->r[3]|c->r[3]; // 80246184
  c->r[3]=c->r[3]|0x00002000u; // 80246188
  c->lr=0x80246190u; f_801CA580(c); // 8024618C
  c->r[3]=0u+0x80000000u; // 80246190
  c->r[3]=R32(c->r[3]+0x000000D8u); // 80246194
  cmps(c,0,(int32_t)c->r[3],0); // 80246198
  if (crb(c,2)) { goto L_802461A4; } // 8024619C
  c->lr=0x802461A4u; f_80245650(c); // 802461A0
L_802461A4:;
  c->lr=0x802461A8u; f_801CA670(c); // 802461A4
  c->r[24]=0u+0x60060000u; // 802461A8
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 802461AC
  c->r[3]=c->r[3]&c->r[0]; // 802461B0
  c->lr=0x802461B8u; f_801CA690(c); // 802461B4
  c->r[3]=c->r[23]|c->r[23]; // 802461B8
  c->lr=0x802461C0u; f_801CA580(c); // 802461BC
  c->r[23]=0u+0x80000000u; // 802461C0
  c->r[0]=R32(c->r[23]+0x000000D8u); // 802461C4
  cmpu(c,0,c->r[0],c->r[26]); // 802461C8
  if (!crb(c,2)) { goto L_8024622C; } // 802461CC
  c->lr=0x802461D4u; f_8024CE40(c); // 802461D0
  c->r[4]=c->r[26]|c->r[26]; // 802461D4
  c->r[5]=c->r[27]|c->r[27]; // 802461D8
  c->r[6]=c->r[28]|c->r[28]; // 802461DC
  c->r[3]=0u+0x00000010u; // 802461E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802461E4
  c->r[7]=0u+0x804A0000u; // 802461E8
  c->r[7]=c->r[7]+0xFFFFC4B0u; // 802461EC
  c->r[12]=R32(c->r[7]+0x00000040u); // 802461F0
  c->ctr=c->r[12]; // 802461F4
  if (true) { c->lr=0x802461FCu; dispatch(c,c->ctr); } // 802461F8
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 802461FC
  c->r[3]=0u+0x00000000u; // 80246200
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 80246204
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 80246208
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 8024620C
  W32(c->r[23]+0x000000D8u,c->r[3]); // 80246210
  c->r[3]=R32(c->r[26]+0x00000194u); // 80246214
  c->r[0]=c->r[3]&c->r[0]; // 80246218
  W32(c->r[26]+0x00000194u,c->r[0]); // 8024621C
  c->lr=0x80246224u; f_8024CE80(c); // 80246220
  c->lr=0x80246228u; f_8024D3A0(c); // 80246224
  goto L_80246240; // 80246228
L_8024622C:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 8024622C
  c->r[0]=0u+0x00000000u; // 80246230
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 80246234
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 80246238
  W32(c->r[23]+0x000000D8u,c->r[0]); // 8024623C
L_80246240:;
  c->r[3]=c->r[26]|c->r[26]; // 80246240
  c->lr=0x80246248u; f_80245750(c); // 80246244
L_80246248:;
  c->r[24]=0u+0x804A0000u; // 80246248
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 8024624C
  c->r[24]=c->r[24]+0xFFFFC4B0u; // 80246250
  c->r[0]=R32(c->r[24]+c->r[23]); // 80246254
  cmps(c,0,(int32_t)c->r[0],0); // 80246258
  if (crb(c,2)) { goto L_80246294; } // 8024625C
  c->lr=0x80246264u; f_8024CE40(c); // 80246260
  c->r[3]=c->r[25]|c->r[25]; // 80246264
  c->r[4]=c->r[26]|c->r[26]; // 80246268
  c->r[5]=c->r[27]|c->r[27]; // 8024626C
  c->r[6]=c->r[28]|c->r[28]; // 80246270
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246274
  c->r[12]=R32(c->r[24]+c->r[23]); // 80246278
  c->ctr=c->r[12]; // 8024627C
  if (true) { c->lr=0x80246284u; dispatch(c,c->ctr); } // 80246280
  c->lr=0x80246288u; f_8024CE80(c); // 80246284
  c->lr=0x8024628Cu; f_8024D3A0(c); // 80246288
  c->r[3]=c->r[26]|c->r[26]; // 8024628C
  c->lr=0x80246294u; f_80245750(c); // 80246290
L_80246294:;
  cmpu(c,0,c->r[25],0x00000008u); // 80246294
  if (!crb(c,2)) { goto L_802462A4; } // 80246298
  c->r[3]=c->r[26]|c->r[26]; // 8024629C
  c->lr=0x802462A4u; f_80245750(c); // 802462A0
L_802462A4:;
  c->r[4]=c->r[25]|c->r[25]; // 802462A4
  c->r[3]=c->r[31]+0x0000007Cu; // 802462A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802462AC
  c->lr=0x802462B4u; f_80245CC0(c); // 802462B0
L_802462B4:;
  c->r[3]=c->r[13]+0xFFFF9134u; // 802462B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802462B8
  c->lr=0x802462C0u; f_80245CC0(c); // 802462BC
  c->r[3]=c->r[26]|c->r[26]; // 802462C0
  c->lr=0x802462C8u; f_80245990(c); // 802462C4
  c->r[4]=c->r[27]|c->r[27]; // 802462C8
  c->r[5]=c->r[28]|c->r[28]; // 802462CC
  c->r[3]=c->r[31]+0x00000094u; // 802462D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802462D4
  c->lr=0x802462DCu; f_80245CC0(c); // 802462D8
  c->r[6]=c->r[29]|c->r[29]; // 802462DC
  c->r[5]=c->r[30]|c->r[30]; // 802462E0
  c->r[3]=c->r[31]+0x000000C8u; // 802462E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802462E8
  c->lr=0x802462F0u; f_80245CC0(c); // 802462EC
  cmps(c,0,(int32_t)c->r[25],2); // 802462F0
  if (crb(c,2)) { goto L_8024631C; } // 802462F4
  cmps(c,0,(int32_t)c->r[25],3); // 802462F8
  if (crb(c,2)) { goto L_80246334; } // 802462FC
  cmps(c,0,(int32_t)c->r[25],5); // 80246300
  if (crb(c,2)) { goto L_80246348; } // 80246304
  cmps(c,0,(int32_t)c->r[25],6); // 80246308
  if (crb(c,2)) { goto L_80246360; } // 8024630C
  cmps(c,0,(int32_t)c->r[25],15); // 80246310
  if (crb(c,2)) { goto L_80246378; } // 80246314
  goto L_802463C4; // 80246318
L_8024631C:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 8024631C
  c->r[5]=c->r[28]|c->r[28]; // 80246320
  c->r[3]=c->r[31]+0x000000D8u; // 80246324
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246328
  c->lr=0x80246330u; f_80245CC0(c); // 8024632C
  goto L_802463C4; // 80246330
L_80246334:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80246334
  c->r[3]=c->r[31]+0x00000138u; // 80246338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024633C
  c->lr=0x80246344u; f_80245CC0(c); // 80246340
  goto L_802463C4; // 80246344
L_80246348:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80246348
  c->r[5]=c->r[28]|c->r[28]; // 8024634C
  c->r[3]=c->r[31]+0x00000184u; // 80246350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246354
  c->lr=0x8024635Cu; f_80245CC0(c); // 80246358
  goto L_802463C4; // 8024635C
L_80246360:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 80246360
  c->r[5]=c->r[28]|c->r[28]; // 80246364
  c->r[3]=c->r[31]+0x000001E8u; // 80246368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024636C
  c->lr=0x80246374u; f_80245CC0(c); // 80246370
  goto L_802463C4; // 80246374
L_80246378:;
  c->r[3]=c->r[13]+0xFFFF9134u; // 80246378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024637C
  c->lr=0x80246384u; f_80245CC0(c); // 80246380
  c->r[25]=0u+0xCC000000u; // 80246384
  c->r[3]=c->r[31]+0x00000248u; // 80246388
  c->r[4]=R16(c->r[25]+0x00005030u); // 8024638C
  c->r[5]=R16(c->r[25]+0x00005032u); // 80246390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246394
  c->lr=0x8024639Cu; f_80245CC0(c); // 80246398
  c->r[4]=R16(c->r[25]+0x00005020u); // 8024639C
  c->r[3]=c->r[31]+0x00000268u; // 802463A0
  c->r[5]=R16(c->r[25]+0x00005022u); // 802463A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802463A8
  c->lr=0x802463B0u; f_80245CC0(c); // 802463AC
  c->r[4]=0u+0xCD000000u; // 802463B0
  c->r[3]=c->r[31]+0x00000288u; // 802463B4
  c->r[4]=R32(c->r[4]+0x00006014u); // 802463B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802463BC
  c->lr=0x802463C4u; f_80245CC0(c); // 802463C0
L_802463C4:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E14u); // 802463C4
  c->r[3]=c->r[31]+0x000002A4u; // 802463C8
  c->r[5]=R32(c->r[13]+0xFFFF9E10u); // 802463CC
  c->r[7]=R32(c->r[13]+0xFFFF9E18u); // 802463D0
  c->r[8]=R32(c->r[13]+0xFFFF9E1Cu); // 802463D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802463D8
  c->lr=0x802463E0u; f_80245CC0(c); // 802463DC
  c->lr=0x802463E4u; f_801CA5F0(c); // 802463E0
  c->r[11]=c->r[1]+0x00000030u; // 802463E4
  c->lr=0x802463ECu; f_800C2E88(c); // 802463E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802463EC
  c->lr=c->r[0]; // 802463F0
  c->r[1]=c->r[1]+0x00000030u; // 802463F4
  return; // 802463F8
}

// PackArgs
void f_80246400(Ctx* __restrict c) {
  trace_call(0x80246400u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246400
  c->r[0]=c->lr; // 80246404
  W32(c->r[1]+0x00000034u,c->r[0]); // 80246408
  c->r[11]=c->r[1]+0x00000030u; // 8024640C
  c->lr=0x80246414u; f_800C2E44(c); // 80246410
  c->r[25]=c->r[4]|c->r[4]; // 80246414
  c->r[29]=c->r[5]|c->r[5]; // 80246418
  c->r[30]=c->r[3]|c->r[3]; // 8024641C
  c->r[4]=0u+0x00000000u; // 80246420
  c->r[5]=0u+0x00002000u; // 80246424
  c->lr=0x8024642Cu; f_80004350(c); // 80246428
  cmps(c,0,(int32_t)c->r[25],0); // 8024642C
  if (!crb(c,2)) { goto L_80246440; } // 80246430
  c->r[0]=0u+0x00000000u; // 80246434
  W32(c->r[30]+0x00000008u,c->r[0]); // 80246438
  goto L_80246564; // 8024643C
L_80246440:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80246440
  c->r[31]=c->r[25]|c->r[25]; // 80246444
  c->r[26]=c->r[30]+0x00002000u; // 80246448
  c->r[28]=c->r[29]+c->r[0]; // 8024644C
  goto L_8024647C; // 80246450
L_80246454:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 80246454
  c->r[3]=c->r[27]|c->r[27]; // 80246458
  c->lr=0x80246460u; f_800C297C(c); // 8024645C
  c->r[0]=c->r[3]+0x00000001u; // 80246460
  c->r[4]=c->r[27]|c->r[27]; // 80246464
  c->r[26]=c->r[26]-c->r[0]; // 80246468
  c->r[3]=c->r[26]|c->r[26]; // 8024646C
  c->lr=0x80246474u; f_800CA250(c); // 80246470
  c->r[0]=c->r[26]-c->r[30]; // 80246474
  W32(c->r[28]+0x00000000u,c->r[0]); // 80246478
L_8024647C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 8024647C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80246480
  if (!crb(c,0)) { IRQCHK(c); goto L_80246454; } // 80246484
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80246488
  c->r[0]=c->r[26]-c->r[30]; // 8024648C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80246490
  c->r[7]=0u+0x00000000u; // 80246494
  c->r[6]=c->r[30]+c->r[4]; // 80246498
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024649C
  c->r[6]=c->r[6]-c->r[0]; // 802464A0
  if (crb(c,2)) { goto L_80246554; } // 802464A4
  cmpu(c,0,c->r[3],0x00000008u); // 802464A8
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 802464AC
  if (!crb(c,1)) { goto L_80246520; } // 802464B0
  c->r[0]=c->r[3]+0x00000007u; // 802464B4
  c->r[4]=c->r[29]|c->r[29]; // 802464B8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802464BC
  c->r[5]=c->r[6]|c->r[6]; // 802464C0
  c->ctr=c->r[0]; // 802464C4
  cmpu(c,0,c->r[3],0x00000000u); // 802464C8
  if (!crb(c,1)) { goto L_80246520; } // 802464CC
L_802464D0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802464D0
  c->r[7]=c->r[7]+0x00000008u; // 802464D4
  W32(c->r[5]+0x00000000u,c->r[0]); // 802464D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802464DC
  W32(c->r[5]+0x00000004u,c->r[0]); // 802464E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 802464E4
  W32(c->r[5]+0x00000008u,c->r[0]); // 802464E8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802464EC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 802464F0
  c->r[0]=R32(c->r[4]+0x00000010u); // 802464F4
  W32(c->r[5]+0x00000010u,c->r[0]); // 802464F8
  c->r[0]=R32(c->r[4]+0x00000014u); // 802464FC
  W32(c->r[5]+0x00000014u,c->r[0]); // 80246500
  c->r[0]=R32(c->r[4]+0x00000018u); // 80246504
  W32(c->r[5]+0x00000018u,c->r[0]); // 80246508
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8024650C
  c->r[4]=c->r[4]+0x00000020u; // 80246510
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80246514
  c->r[5]=c->r[5]+0x00000020u; // 80246518
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802464D0; } // 8024651C
L_80246520:;
  c->r[3]=c->r[31]+0x00000001u; // 80246520
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80246524
  c->r[0]=c->r[3]-c->r[7]; // 80246528
  c->r[4]=c->r[29]+c->r[5]; // 8024652C
  c->r[5]=c->r[6]+c->r[5]; // 80246530
  c->ctr=c->r[0]; // 80246534
  cmpu(c,0,c->r[7],c->r[3]); // 80246538
  if (!crb(c,0)) { goto L_80246554; } // 8024653C
L_80246540:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80246540
  c->r[4]=c->r[4]+0x00000004u; // 80246544
  W32(c->r[5]+0x00000000u,c->r[0]); // 80246548
  c->r[5]=c->r[5]+0x00000004u; // 8024654C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80246540; } // 80246550
L_80246554:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80246554
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80246558
  c->r[0]=c->r[0]-c->r[30]; // 8024655C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80246560
L_80246564:;
  c->r[11]=c->r[1]+0x00000030u; // 80246564
  c->r[3]=0u+0x00000001u; // 80246568
  c->lr=0x80246570u; f_800C2E90(c); // 8024656C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80246570
  c->lr=c->r[0]; // 80246574
  c->r[1]=c->r[1]+0x00000030u; // 80246578
  return; // 8024657C
}

// Utf16ToArg
void f_80246580(Ctx* __restrict c) {
  trace_call(0x80246580u);
  cmps(c,0,(int32_t)c->r[4],0); // 80246580
  if (crb(c,2)) { goto L_802466D0; } // 80246584
  c->r[6]=0u+0x00000004u; // 80246588
  c->r[0]=0u+0x00000002u; // 8024658C
  goto L_802466A8; // 80246590
  c->r[0]=c->r[0]|0x00000000u; // 80246594
L_80246598:;
  c->r[10]=0u+0x00000000u; // 80246598
  c->ctr=c->r[0]; // 8024659C
L_802465A0:;
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 802465A0
  c->r[8]=0u+0x000000F0u; // 802465A4
  if (crb(c,2)) { goto L_802465B0; } // 802465A8
  c->r[8]=0u+0x0000000Fu; // 802465AC
L_802465B0:;
  c->r[5]=0u-c->r[9]; // 802465B0
  c->r[7]=R8(c->r[4]+0x00000000u); // 802465B4
  c->r[5]=c->r[5]|c->r[9]; // 802465B8
  c->r[5]=sraw(c,c->r[5],31); // 802465BC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 802465C0
  c->r[5]=c->r[6]&~c->r[5]; // 802465C4
  c->r[7]=c->r[7]&c->r[8]; // 802465C8
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 802465CC
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 802465D0
  if (crb(c,0)) { goto L_802465EC; } // 802465D4
  cmps(c,0,(int32_t)c->r[5],10); // 802465D8
  if (!crb(c,0)) { goto L_802465EC; } // 802465DC
  c->r[5]=c->r[5]+0x00000030u; // 802465E0
  W8(c->r[3]+0x00000000u,c->r[5]); // 802465E4
  goto L_80246610; // 802465E8
L_802465EC:;
  cmps(c,0,(int32_t)c->r[5],10); // 802465EC
  if (crb(c,0)) { goto L_80246608; } // 802465F0
  cmps(c,0,(int32_t)c->r[5],16); // 802465F4
  if (!crb(c,0)) { goto L_80246608; } // 802465F8
  c->r[5]=c->r[5]+0x00000057u; // 802465FC
  W8(c->r[3]+0x00000000u,c->r[5]); // 80246600
  goto L_80246610; // 80246604
L_80246608:;
  c->r[3]=0u+0x00000000u; // 80246608
  return; // 8024660C
L_80246610:;
  cmps(c,0,(int32_t)c->r[9],0); // 80246610
  if (crb(c,2)) { goto L_8024661C; } // 80246614
  c->r[4]=c->r[4]+0x00000001u; // 80246618
L_8024661C:;
  c->r[10]=c->r[10]+0x00000001u; // 8024661C
  c->r[8]=0u+0x000000F0u; // 80246620
  c->r[9]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[9]); // 80246624
  if (crb(c,2)) { goto L_80246630; } // 80246628
  c->r[8]=0u+0x0000000Fu; // 8024662C
L_80246630:;
  c->r[5]=0u-c->r[9]; // 80246630
  c->r[7]=R8(c->r[4]+0x00000000u); // 80246634
  c->r[5]=c->r[5]|c->r[9]; // 80246638
  c->r[5]=sraw(c,c->r[5],31); // 8024663C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80246640
  c->r[5]=c->r[6]&~c->r[5]; // 80246644
  c->r[7]=c->r[7]&c->r[8]; // 80246648
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 8024664C
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); cr0(c,c->r[5]); // 80246650
  if (crb(c,0)) { goto L_8024666C; } // 80246654
  cmps(c,0,(int32_t)c->r[5],10); // 80246658
  if (!crb(c,0)) { goto L_8024666C; } // 8024665C
  c->r[5]=c->r[5]+0x00000030u; // 80246660
  W8(c->r[3]+0x00000001u,c->r[5]); // 80246664
  goto L_80246690; // 80246668
L_8024666C:;
  cmps(c,0,(int32_t)c->r[5],10); // 8024666C
  if (crb(c,0)) { goto L_80246688; } // 80246670
  cmps(c,0,(int32_t)c->r[5],16); // 80246674
  if (!crb(c,0)) { goto L_80246688; } // 80246678
  c->r[5]=c->r[5]+0x00000057u; // 8024667C
  W8(c->r[3]+0x00000001u,c->r[5]); // 80246680
  goto L_80246690; // 80246684
L_80246688:;
  c->r[3]=0u+0x00000000u; // 80246688
  return; // 8024668C
L_80246690:;
  cmps(c,0,(int32_t)c->r[9],0); // 80246690
  c->r[3]=c->r[3]+0x00000002u; // 80246694
  if (crb(c,2)) { goto L_802466A0; } // 80246698
  c->r[4]=c->r[4]+0x00000001u; // 8024669C
L_802466A0:;
  c->r[10]=c->r[10]+0x00000001u; // 802466A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802465A0; } // 802466A4
L_802466A8:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 802466A8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 802466AC
  if (!crb(c,2)) { IRQCHK(c); goto L_80246598; } // 802466B0
  c->r[5]=R8(c->r[4]+0x00000001u); // 802466B4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 802466B8
  if (!crb(c,2)) { IRQCHK(c); goto L_80246598; } // 802466BC
  c->r[0]=0u+0x00000000u; // 802466C0
  W8(c->r[3]+0x00000000u,c->r[0]); // 802466C4
  c->r[3]=0u+0x00000001u; // 802466C8
  return; // 802466CC
L_802466D0:;
  c->r[3]=0u+0x00000000u; // 802466D0
  return; // 802466D4
}

// PackInstallerArgs
void f_802466E0(Ctx* __restrict c) {
  trace_call(0x802466E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802466E0
  c->r[0]=c->lr; // 802466E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802466E8
  c->r[11]=c->r[1]+0x00000030u; // 802466EC
  c->lr=0x802466F4u; f_800C2E44(c); // 802466F0
  c->r[27]=c->r[4]|c->r[4]; // 802466F4
  c->r[28]=c->r[5]|c->r[5]; // 802466F8
  c->r[30]=c->r[3]|c->r[3]; // 802466FC
  c->r[4]=0u+0x00000000u; // 80246700
  c->r[5]=0u+0x00002000u; // 80246704
  c->lr=0x8024670Cu; f_80004350(c); // 80246708
  cmps(c,0,(int32_t)c->r[27],0); // 8024670C
  if (!crb(c,2)) { goto L_80246720; } // 80246710
  c->r[0]=0u+0x00000000u; // 80246714
  W32(c->r[30]+0x00000008u,c->r[0]); // 80246718
  goto L_80246890; // 8024671C
L_80246720:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80246720
  c->r[31]=c->r[27]|c->r[27]; // 80246724
  c->r[29]=c->r[30]+0x00002000u; // 80246728
  c->r[26]=c->r[28]+c->r[0]; // 8024672C
  goto L_802467A8; // 80246730
L_80246734:;
  cmps(c,0,(int32_t)c->r[27],2); // 80246734
  if (crb(c,0)) { goto L_80246750; } // 80246738
  c->r[3]=rotl(c->r[27],1)&0x00000001u; // 8024673C
  c->r[0]=rotl(c->r[27],0)&0x00000001u; // 80246740
  c->r[0]=c->r[0]^c->r[3]; // 80246744
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 80246748
  if (crb(c,2)) { goto L_8024677C; } // 8024674C
L_80246750:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 80246750
  c->r[3]=c->r[25]|c->r[25]; // 80246754
  c->lr=0x8024675Cu; f_800C297C(c); // 80246758
  c->r[0]=c->r[3]+0x00000001u; // 8024675C
  c->r[4]=c->r[25]|c->r[25]; // 80246760
  c->r[29]=c->r[29]-c->r[0]; // 80246764
  c->r[3]=c->r[29]|c->r[29]; // 80246768
  c->lr=0x80246770u; f_800CA250(c); // 8024676C
  c->r[0]=c->r[29]-c->r[30]; // 80246770
  W32(c->r[26]+0x00000000u,c->r[0]); // 80246774
  goto L_802467A8; // 80246778
L_8024677C:;
  c->r[25]=R32(c->r[26]+0x00000000u); // 8024677C
  c->r[3]=c->r[25]|c->r[25]; // 80246780
  c->lr=0x80246788u; f_800CE4B4(c); // 80246784
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80246788
  c->r[4]=c->r[25]|c->r[25]; // 8024678C
  c->r[0]=c->r[3]+0x00000001u; // 80246790
  c->r[29]=c->r[29]-c->r[0]; // 80246794
  c->r[3]=c->r[29]|c->r[29]; // 80246798
  c->lr=0x802467A0u; f_80246580(c); // 8024679C
  c->r[0]=c->r[29]-c->r[30]; // 802467A0
  W32(c->r[26]+0x00000000u,c->r[0]); // 802467A4
L_802467A8:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 802467A8
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 802467AC
  if (!crb(c,0)) { IRQCHK(c); goto L_80246734; } // 802467B0
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 802467B4
  c->r[0]=c->r[29]-c->r[30]; // 802467B8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802467BC
  c->r[7]=0u+0x00000000u; // 802467C0
  c->r[6]=c->r[30]+c->r[4]; // 802467C4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802467C8
  c->r[6]=c->r[6]-c->r[0]; // 802467CC
  if (crb(c,2)) { goto L_80246880; } // 802467D0
  cmpu(c,0,c->r[3],0x00000008u); // 802467D4
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 802467D8
  if (!crb(c,1)) { goto L_8024684C; } // 802467DC
  c->r[0]=c->r[3]+0x00000007u; // 802467E0
  c->r[4]=c->r[28]|c->r[28]; // 802467E4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802467E8
  c->r[5]=c->r[6]|c->r[6]; // 802467EC
  c->ctr=c->r[0]; // 802467F0
  cmpu(c,0,c->r[3],0x00000000u); // 802467F4
  if (!crb(c,1)) { goto L_8024684C; } // 802467F8
L_802467FC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802467FC
  c->r[7]=c->r[7]+0x00000008u; // 80246800
  W32(c->r[5]+0x00000000u,c->r[0]); // 80246804
  c->r[0]=R32(c->r[4]+0x00000004u); // 80246808
  W32(c->r[5]+0x00000004u,c->r[0]); // 8024680C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80246810
  W32(c->r[5]+0x00000008u,c->r[0]); // 80246814
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80246818
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8024681C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80246820
  W32(c->r[5]+0x00000010u,c->r[0]); // 80246824
  c->r[0]=R32(c->r[4]+0x00000014u); // 80246828
  W32(c->r[5]+0x00000014u,c->r[0]); // 8024682C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80246830
  W32(c->r[5]+0x00000018u,c->r[0]); // 80246834
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80246838
  c->r[4]=c->r[4]+0x00000020u; // 8024683C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80246840
  c->r[5]=c->r[5]+0x00000020u; // 80246844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802467FC; } // 80246848
L_8024684C:;
  c->r[3]=c->r[31]+0x00000001u; // 8024684C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80246850
  c->r[0]=c->r[3]-c->r[7]; // 80246854
  c->r[4]=c->r[28]+c->r[5]; // 80246858
  c->r[5]=c->r[6]+c->r[5]; // 8024685C
  c->ctr=c->r[0]; // 80246860
  cmpu(c,0,c->r[7],c->r[3]); // 80246864
  if (!crb(c,0)) { goto L_80246880; } // 80246868
L_8024686C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8024686C
  c->r[4]=c->r[4]+0x00000004u; // 80246870
  W32(c->r[5]+0x00000000u,c->r[0]); // 80246874
  c->r[5]=c->r[5]+0x00000004u; // 80246878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024686C; } // 8024687C
L_80246880:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80246880
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80246884
  c->r[0]=c->r[0]-c->r[30]; // 80246888
  W32(c->r[30]+0x00000008u,c->r[0]); // 8024688C
L_80246890:;
  c->r[11]=c->r[1]+0x00000030u; // 80246890
  c->r[3]=0u+0x00000001u; // 80246894
  c->lr=0x8024689Cu; f_800C2E90(c); // 80246898
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024689C
  c->lr=c->r[0]; // 802468A0
  c->r[1]=c->r[1]+0x00000030u; // 802468A4
  return; // 802468A8
}

// fn_802468B0
void f_802468B0(Ctx* __restrict c) {
  trace_call(0x802468B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802468B0
  c->r[0]=c->lr; // 802468B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802468B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802468BC
  c->r[31]=c->r[3]|c->r[3]; // 802468C0
  c->lr=0x802468C8u; f_80244F50(c); // 802468C4
  /* sync */ // 802468C8
  /* isync */ // 802468CC
  c->ctr=c->r[31]; // 802468D0
  if (true) { dispatch(c,c->ctr); return; } // 802468D4
}

// fn_802468D8
void f_802468D8(Ctx* __restrict c) {
  trace_call(0x802468D8u);
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802468D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802468DC
  c->lr=c->r[0]; // 802468E0
  c->r[1]=c->r[1]+0x00000010u; // 802468E4
  return; // 802468E8
}

// fn_802468F0
void f_802468F0(Ctx* __restrict c) {
  trace_call(0x802468F0u);
  c->r[0]=0u+0x00000001u; // 802468F0
  W32(c->r[13]+0xFFFF9DF8u,c->r[0]); // 802468F4
  return; // 802468F8
}

// __OSGetExecParams
void f_80246900(Ctx* __restrict c) {
  trace_call(0x80246900u);
  c->r[5]=0u+0x80000000u; // 80246900
  c->r[4]=R32(c->r[5]+0x000030F0u); // 80246904
  cmpu(c,0,c->r[4],c->r[5]); // 80246908
  if (crb(c,0)) { goto L_80246918; } // 8024690C
  c->r[5]=0u+0x0000001Cu; // 80246910
  f_80004000(c); return; // 80246914
L_80246918:;
  c->r[0]=0u+0x00000000u; // 80246918
  W32(c->r[3]+0x00000000u,c->r[0]); // 8024691C
  return; // 80246920
}

// callback
void f_80246930(Ctx* __restrict c) {
  trace_call(0x80246930u);
  W32(c->r[13]+0xFFFF9DF0u,c->r[3]); // 80246930
  return; // 80246934
}

// fn_80246940
void f_80246940(Ctx* __restrict c) {
  trace_call(0x80246940u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80246940
  c->r[0]=c->lr; // 80246944
  W32(c->r[1]+0x00000044u,c->r[0]); // 80246948
  c->r[11]=c->r[1]+0x00000040u; // 8024694C
  c->lr=0x80246954u; f_800C2E38(c); // 80246950
  c->r[30]=0u+0x803B0000u; // 80246954
  c->r[3]=0u+0x00000001u; // 80246958
  c->r[0]=0u+0x00000000u; // 8024695C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80246960
  c->r[30]=c->r[30]+0xFFFFDB10u; // 80246964
  c->r[31]=0u+0xFFFFFFFFu; // 80246968
  W32(c->r[1]+0x00000010u,c->r[0]); // 8024696C
  c->r[3]=0u+0x00000020u; // 80246970
  c->r[4]=0u+0x00000020u; // 80246974
  c->lr=0x8024697Cu; f_80244900(c); // 80246978
  c->r[27]=c->r[3]|c->r[3]; // 8024697C
  c->r[3]=0u+0x00000800u; // 80246980
  c->r[4]=0u+0x00000020u; // 80246984
  c->lr=0x8024698Cu; f_80244900(c); // 80246988
  c->r[28]=c->r[3]|c->r[3]; // 8024698C
  c->r[3]=0u+0x00004A00u; // 80246990
  c->r[4]=0u+0x00000040u; // 80246994
  c->lr=0x8024699Cu; f_80244900(c); // 80246998
  c->r[25]=c->r[3]|c->r[3]; // 8024699C
  c->r[3]=0u+0x000000E0u; // 802469A0
  c->r[4]=0u+0x00000020u; // 802469A4
  c->lr=0x802469ACu; f_80244900(c); // 802469A8
  c->r[4]=0u+0x80000000u; // 802469AC
  c->r[5]=R32(c->r[13]+0xFFFF9DE8u); // 802469B0
  c->r[0]=R32(c->r[4]+0x00003194u); // 802469B4
  c->r[29]=c->r[3]|c->r[3]; // 802469B8
  cmpu(c,0,c->r[5],c->r[0]); // 802469BC
  if (!crb(c,2)) { goto L_80246A64; } // 802469C0
  c->r[0]=R32(c->r[4]+0x00003198u); // 802469C4
  cmps(c,0,(int32_t)c->r[0],0); // 802469C8
  if (crb(c,2)) { goto L_80246A64; } // 802469CC
  c->lr=0x802469D4u; f_80201900(c); // 802469D0
  cmps(c,0,(int32_t)c->r[3],0); // 802469D4
  c->r[31]=c->r[3]|c->r[3]; // 802469D8
  if (!crb(c,2)) { goto L_802469F0; } // 802469DC
  c->r[4]=c->r[29]|c->r[29]; // 802469E0
  c->r[3]=0u+0x00000000u; // 802469E4
  c->lr=0x802469ECu; f_80201B70(c); // 802469E8
  c->r[31]=c->r[3]|c->r[3]; // 802469EC
L_802469F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802469F0
  if (!crb(c,2)) { goto L_80246A08; } // 802469F4
  c->r[4]=c->r[1]+0x00000010u; // 802469F8
  c->r[3]=0u+0x00000000u; // 802469FC
  c->lr=0x80246A04u; f_80201C20(c); // 80246A00
  c->r[31]=c->r[3]|c->r[3]; // 80246A04
L_80246A08:;
  cmps(c,0,(int32_t)c->r[31],0); // 80246A08
  if (!crb(c,2)) { goto L_80246A20; } // 80246A0C
  c->r[3]=c->r[25]|c->r[25]; // 80246A10
  c->r[4]=c->r[1]+0x00000010u; // 80246A14
  c->lr=0x80246A1Cu; f_80201C20(c); // 80246A18
  c->r[31]=c->r[3]|c->r[3]; // 80246A1C
L_80246A20:;
  c->lr=0x80246A24u; f_80201960(c); // 80246A20
  c->lr=0x80246A28u; f_80250990(c); // 80246A24
  cmps(c,0,(int32_t)c->r[3],0); // 80246A28
  if (crb(c,2)) { goto L_80246A64; } // 80246A2C
  c->r[3]=0u+0x00000000u; // 80246A30
  c->r[0]=0u+0xFFFFFFFFu; // 80246A34
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80246A38
  c->r[3]=c->r[29]|c->r[29]; // 80246A3C
  c->r[4]=c->r[1]+0x0000000Cu; // 80246A40
  c->r[5]=c->r[1]+0x00000008u; // 80246A44
  W32(c->r[1]+0x00000008u,c->r[0]); // 80246A48
  c->lr=0x80246A50u; f_80250E40(c); // 80246A4C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80246A50
  cmps(c,0,(int32_t)c->r[0],0); // 80246A54
  if (!crb(c,2)) { goto L_80246A64; } // 80246A58
  c->lr=0x80246A60u; f_80250B70(c); // 80246A5C
  c->lr=0x80246A64u; f_8024BD90(c); // 80246A60
L_80246A64:;
  cmps(c,0,(int32_t)c->r[31],0); // 80246A64
  if (!crb(c,2)) { goto L_80246A88; } // 80246A68
  c->r[3]=0u+0x80000000u; // 80246A6C
  c->r[26]=c->r[28]|c->r[28]; // 80246A70
  c->r[0]=R32(c->r[3]+0x00003194u); // 80246A74
  W32(c->r[28]+0x00000004u,c->r[0]); // 80246A78
  c->r[0]=R32(c->r[3]+0x00003198u); // 80246A7C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80246A80
  goto L_80246E1C; // 80246A84
L_80246A88:;
  c->r[0]=0u+0x00000000u; // 80246A88
  c->r[3]=0u+0x80240000u; // 80246A8C
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246A90
  c->r[3]=c->r[3]+0x00006930u; // 80246A94
  c->lr=0x80246A9Cu; f_802001B0(c); // 80246A98
  c->r[0]=c->r[0]|0x00000000u; // 80246A9C
L_80246AA0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246AA0
  cmps(c,0,(int32_t)c->r[0],0); // 80246AA4
  if (crb(c,2)) { IRQCHK(c); goto L_80246AA0; } // 80246AA8
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246AAC
  cmps(c,0,(int32_t)c->r[0],2); // 80246AB0
  if (crb(c,2)) { goto L_80246AD4; } // 80246AB4
  if (!crb(c,0)) { goto L_80246AC8; } // 80246AB8
  cmps(c,0,(int32_t)c->r[0],1); // 80246ABC
  if (!crb(c,0)) { goto L_80246B0C; } // 80246AC0
  goto L_80246AFC; // 80246AC4
L_80246AC8:;
  cmps(c,0,(int32_t)c->r[0],16); // 80246AC8
  if (crb(c,2)) { goto L_80246AE8; } // 80246ACC
  goto L_80246AFC; // 80246AD0
L_80246AD4:;
  c->r[3]=c->r[30]+0x00000000u; // 80246AD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246AD8
  c->lr=0x80246AE0u; f_80245CC0(c); // 80246ADC
  c->lr=0x80246AE4u; f_8024BD90(c); // 80246AE0
  goto L_80246B0C; // 80246AE4
L_80246AE8:;
  c->r[3]=c->r[30]+0x00000018u; // 80246AE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246AEC
  c->lr=0x80246AF4u; f_80245CC0(c); // 80246AF0
  c->lr=0x80246AF8u; f_8024BD90(c); // 80246AF4
  goto L_80246B0C; // 80246AF8
L_80246AFC:;
  c->r[3]=c->r[30]+0x00000034u; // 80246AFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246B00
  c->lr=0x80246B08u; f_80245CC0(c); // 80246B04
  c->lr=0x80246B0Cu; f_8024BD90(c); // 80246B08
L_80246B0C:;
  c->r[0]=0u+0x00000000u; // 80246B0C
  c->r[6]=0u+0x80240000u; // 80246B10
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246B14
  c->r[3]=c->r[27]|c->r[27]; // 80246B18
  c->r[6]=c->r[6]+0x00006930u; // 80246B1C
  c->r[4]=0u+0x00000020u; // 80246B20
  c->r[5]=0u+0x00010000u; // 80246B24
  c->lr=0x80246B2Cu; f_80200320(c); // 80246B28
  c->r[0]=c->r[0]|0x00000000u; // 80246B2C
L_80246B30:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246B30
  cmps(c,0,(int32_t)c->r[0],0); // 80246B34
  if (crb(c,2)) { IRQCHK(c); goto L_80246B30; } // 80246B38
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246B3C
  cmps(c,0,(int32_t)c->r[0],2); // 80246B40
  if (crb(c,2)) { goto L_80246B64; } // 80246B44
  if (!crb(c,0)) { goto L_80246B58; } // 80246B48
  cmps(c,0,(int32_t)c->r[0],1); // 80246B4C
  if (!crb(c,0)) { goto L_80246B9C; } // 80246B50
  goto L_80246B8C; // 80246B54
L_80246B58:;
  cmps(c,0,(int32_t)c->r[0],16); // 80246B58
  if (crb(c,2)) { goto L_80246B78; } // 80246B5C
  goto L_80246B8C; // 80246B60
L_80246B64:;
  c->r[3]=c->r[30]+0x00000000u; // 80246B64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246B68
  c->lr=0x80246B70u; f_80245CC0(c); // 80246B6C
  c->lr=0x80246B74u; f_8024BD90(c); // 80246B70
  goto L_80246B9C; // 80246B74
L_80246B78:;
  c->r[3]=c->r[30]+0x00000018u; // 80246B78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246B7C
  c->lr=0x80246B84u; f_80245CC0(c); // 80246B80
  c->lr=0x80246B88u; f_8024BD90(c); // 80246B84
  goto L_80246B9C; // 80246B88
L_80246B8C:;
  c->r[3]=c->r[30]+0x00000034u; // 80246B8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246B90
  c->lr=0x80246B98u; f_80245CC0(c); // 80246B94
  c->lr=0x80246B9Cu; f_8024BD90(c); // 80246B98
L_80246B9C:;
  c->r[0]=0u+0x00000000u; // 80246B9C
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246BA0
  c->r[6]=0u+0x80240000u; // 80246BA4
  c->r[3]=c->r[28]|c->r[28]; // 80246BA8
  c->r[5]=R32(c->r[27]+0x00000004u); // 80246BAC
  c->r[6]=c->r[6]+0x00006930u; // 80246BB0
  c->r[4]=0u+0x00000800u; // 80246BB4
  c->lr=0x80246BBCu; f_80200320(c); // 80246BB8
  c->r[0]=c->r[0]|0x00000000u; // 80246BBC
L_80246BC0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246BC0
  cmps(c,0,(int32_t)c->r[0],0); // 80246BC4
  if (crb(c,2)) { IRQCHK(c); goto L_80246BC0; } // 80246BC8
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246BCC
  cmps(c,0,(int32_t)c->r[0],2); // 80246BD0
  if (crb(c,2)) { goto L_80246BF4; } // 80246BD4
  if (!crb(c,0)) { goto L_80246BE8; } // 80246BD8
  cmps(c,0,(int32_t)c->r[0],1); // 80246BDC
  if (!crb(c,0)) { goto L_80246C2C; } // 80246BE0
  goto L_80246C1C; // 80246BE4
L_80246BE8:;
  cmps(c,0,(int32_t)c->r[0],16); // 80246BE8
  if (crb(c,2)) { goto L_80246C08; } // 80246BEC
  goto L_80246C1C; // 80246BF0
L_80246BF4:;
  c->r[3]=c->r[30]+0x00000000u; // 80246BF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246BF8
  c->lr=0x80246C00u; f_80245CC0(c); // 80246BFC
  c->lr=0x80246C04u; f_8024BD90(c); // 80246C00
  goto L_80246C2C; // 80246C04
L_80246C08:;
  c->r[3]=c->r[30]+0x00000018u; // 80246C08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246C0C
  c->lr=0x80246C14u; f_80245CC0(c); // 80246C10
  c->lr=0x80246C18u; f_8024BD90(c); // 80246C14
  goto L_80246C2C; // 80246C18
L_80246C1C:;
  c->r[3]=c->r[30]+0x00000034u; // 80246C1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246C20
  c->lr=0x80246C28u; f_80245CC0(c); // 80246C24
  c->lr=0x80246C2Cu; f_8024BD90(c); // 80246C28
L_80246C2C:;
  c->r[4]=R32(c->r[13]+0xFFFF9DE8u); // 80246C2C
  c->r[6]=c->r[28]|c->r[28]; // 80246C30
  c->r[26]=0u+0x00000000u; // 80246C34
  c->r[5]=0u+0x00000000u; // 80246C38
  goto L_80246C58; // 80246C3C
L_80246C40:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80246C40
  cmpu(c,0,c->r[0],c->r[4]); // 80246C44
  if (!crb(c,2)) { goto L_80246C50; } // 80246C48
  c->r[26]=c->r[6]|c->r[6]; // 80246C4C
L_80246C50:;
  c->r[6]=c->r[6]+0x00000008u; // 80246C50
  c->r[5]=c->r[5]+0x00000001u; // 80246C54
L_80246C58:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80246C58
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80246C5C
  cmpu(c,0,c->r[3],c->r[0]); // 80246C60
  if (crb(c,0)) { IRQCHK(c); goto L_80246C40; } // 80246C64
  cmps(c,0,(int32_t)c->r[26],0); // 80246C68
  if (!crb(c,2)) { goto L_80246CA8; } // 80246C6C
  c->r[4]=R32(c->r[13]+0xFFFF9DE8u); // 80246C70
  c->r[6]=c->r[28]+0x00000020u; // 80246C74
  c->r[5]=0u+0x00000000u; // 80246C78
  goto L_80246C98; // 80246C7C
L_80246C80:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80246C80
  cmpu(c,0,c->r[0],c->r[4]); // 80246C84
  if (!crb(c,2)) { goto L_80246C90; } // 80246C88
  c->r[26]=c->r[6]|c->r[6]; // 80246C8C
L_80246C90:;
  c->r[6]=c->r[6]+0x00000008u; // 80246C90
  c->r[5]=c->r[5]+0x00000001u; // 80246C94
L_80246C98:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80246C98
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80246C9C
  cmpu(c,0,c->r[3],c->r[0]); // 80246CA0
  if (crb(c,0)) { IRQCHK(c); goto L_80246C80; } // 80246CA4
L_80246CA8:;
  cmps(c,0,(int32_t)c->r[26],0); // 80246CA8
  if (!crb(c,2)) { goto L_80246CC0; } // 80246CAC
  c->r[3]=c->r[30]+0x00000054u; // 80246CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246CB4
  c->lr=0x80246CBCu; f_80245CC0(c); // 80246CB8
  c->lr=0x80246CC0u; f_8024BD90(c); // 80246CBC
L_80246CC0:;
  c->r[4]=0u+0x80000000u; // 80246CC0
  c->r[0]=R32(c->r[26]+0x00000004u); // 80246CC4
  W32(c->r[4]+0x00003194u,c->r[0]); // 80246CC8
  c->r[0]=0u+0x00000000u; // 80246CCC
  c->r[3]=R32(c->r[26]+0x00000000u); // 80246CD0
  W32(c->r[4]+0x00003198u,c->r[3]); // 80246CD4
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246CD8
  c->r[0]=R8(c->r[4]+0x00003187u); // 80246CDC
  cmpu(c,0,c->r[0],0x00000080u); // 80246CE0
  if (!crb(c,2)) { goto L_80246D10; } // 80246CE4
  c->r[9]=0u+0x80240000u; // 80246CE8
  c->r[3]=R32(c->r[26]+0x00000000u); // 80246CEC
  c->r[5]=R32(c->r[1]+0x00000010u); // 80246CF0
  c->r[4]=c->r[29]|c->r[29]; // 80246CF4
  c->r[6]=c->r[25]|c->r[25]; // 80246CF8
  c->r[9]=c->r[9]+0x00006930u; // 80246CFC
  c->r[7]=0u+0x00000000u; // 80246D00
  c->r[8]=0u+0x00000000u; // 80246D04
  c->lr=0x80246D0Cu; f_801FFA90(c); // 80246D08
  goto L_80246D30; // 80246D0C
L_80246D10:;
  c->r[8]=0u+0x80240000u; // 80246D10
  c->r[3]=R32(c->r[26]+0x00000000u); // 80246D14
  c->r[7]=c->r[25]|c->r[25]; // 80246D18
  c->r[4]=0u+0x00000000u; // 80246D1C
  c->r[8]=c->r[8]+0x00006930u; // 80246D20
  c->r[5]=0u+0x00000000u; // 80246D24
  c->r[6]=0u+0x00000000u; // 80246D28
  c->lr=0x80246D30u; f_801FF820(c); // 80246D2C
L_80246D30:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246D30
  cmps(c,0,(int32_t)c->r[0],0); // 80246D34
  if (crb(c,2)) { IRQCHK(c); goto L_80246D30; } // 80246D38
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246D3C
  cmps(c,0,(int32_t)c->r[0],2); // 80246D40
  if (crb(c,2)) { goto L_80246D64; } // 80246D44
  if (!crb(c,0)) { goto L_80246D58; } // 80246D48
  cmps(c,0,(int32_t)c->r[0],1); // 80246D4C
  if (!crb(c,0)) { goto L_80246D9C; } // 80246D50
  goto L_80246D8C; // 80246D54
L_80246D58:;
  cmps(c,0,(int32_t)c->r[0],16); // 80246D58
  if (crb(c,2)) { goto L_80246D78; } // 80246D5C
  goto L_80246D8C; // 80246D60
L_80246D64:;
  c->r[3]=c->r[30]+0x00000000u; // 80246D64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246D68
  c->lr=0x80246D70u; f_80245CC0(c); // 80246D6C
  c->lr=0x80246D74u; f_8024BD90(c); // 80246D70
  goto L_80246D9C; // 80246D74
L_80246D78:;
  c->r[3]=c->r[30]+0x00000018u; // 80246D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246D7C
  c->lr=0x80246D84u; f_80245CC0(c); // 80246D80
  c->lr=0x80246D88u; f_8024BD90(c); // 80246D84
  goto L_80246D9C; // 80246D88
L_80246D8C:;
  c->r[3]=c->r[30]+0x00000034u; // 80246D8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246D90
  c->lr=0x80246D98u; f_80245CC0(c); // 80246D94
  c->lr=0x80246D9Cu; f_8024BD90(c); // 80246D98
L_80246D9C:;
  c->r[0]=0u+0x00000000u; // 80246D9C
  c->r[3]=0u+0x80240000u; // 80246DA0
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246DA4
  c->r[3]=c->r[3]+0x00006930u; // 80246DA8
  c->lr=0x80246DB0u; f_802001B0(c); // 80246DAC
L_80246DB0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246DB0
  cmps(c,0,(int32_t)c->r[0],0); // 80246DB4
  if (crb(c,2)) { IRQCHK(c); goto L_80246DB0; } // 80246DB8
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246DBC
  cmps(c,0,(int32_t)c->r[0],2); // 80246DC0
  if (crb(c,2)) { goto L_80246DE4; } // 80246DC4
  if (!crb(c,0)) { goto L_80246DD8; } // 80246DC8
  cmps(c,0,(int32_t)c->r[0],1); // 80246DCC
  if (!crb(c,0)) { goto L_80246E1C; } // 80246DD0
  goto L_80246E0C; // 80246DD4
L_80246DD8:;
  cmps(c,0,(int32_t)c->r[0],16); // 80246DD8
  if (crb(c,2)) { goto L_80246DF8; } // 80246DDC
  goto L_80246E0C; // 80246DE0
L_80246DE4:;
  c->r[3]=c->r[30]+0x00000000u; // 80246DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246DE8
  c->lr=0x80246DF0u; f_80245CC0(c); // 80246DEC
  c->lr=0x80246DF4u; f_8024BD90(c); // 80246DF0
  goto L_80246E1C; // 80246DF4
L_80246DF8:;
  c->r[3]=c->r[30]+0x00000018u; // 80246DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246DFC
  c->lr=0x80246E04u; f_80245CC0(c); // 80246E00
  c->lr=0x80246E08u; f_8024BD90(c); // 80246E04
  goto L_80246E1C; // 80246E08
L_80246E0C:;
  c->r[3]=c->r[30]+0x00000034u; // 80246E0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246E10
  c->lr=0x80246E18u; f_80245CC0(c); // 80246E14
  c->lr=0x80246E1Cu; f_8024BD90(c); // 80246E18
L_80246E1C:;
  c->r[23]=R32(c->r[25]+0x00000184u); // 80246E1C
  c->r[22]=R32(c->r[25]+0x00000188u); // 80246E20
  c->lr=0x80246E28u; f_80201900(c); // 80246E24
  cmps(c,0,(int32_t)c->r[3],0); // 80246E28
  c->r[31]=c->r[3]|c->r[3]; // 80246E2C
  if (crb(c,2)) { goto L_80246E4C; } // 80246E30
  c->r[4]=c->r[31]|c->r[31]; // 80246E34
  c->r[3]=c->r[30]+0x00000084u; // 80246E38
  c->r[5]=0u+0x0000040Du; // 80246E3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246E40
  c->lr=0x80246E48u; f_80245CC0(c); // 80246E44
  c->lr=0x80246E4Cu; f_8024BE40(c); // 80246E48
L_80246E4C:;
  c->r[4]=c->r[22]|c->r[22]; // 80246E4C
  c->r[3]=c->r[23]|c->r[23]; // 80246E50
  c->r[6]=c->r[1]+0x00000014u; // 80246E54
  c->r[5]=0u+0x00000000u; // 80246E58
  c->lr=0x80246E60u; f_80201A50(c); // 80246E5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80246E60
  c->r[31]=c->r[3]|c->r[3]; // 80246E64
  cmpu(c,0,c->r[0],0x00000001u); // 80246E68
  if (!crb(c,2)) { goto L_80246E78; } // 80246E6C
  cmps(c,0,(int32_t)c->r[3],0); // 80246E70
  if (crb(c,2)) { goto L_80246E90; } // 80246E74
L_80246E78:;
  c->r[4]=c->r[31]|c->r[31]; // 80246E78
  c->r[3]=c->r[30]+0x00000084u; // 80246E7C
  c->r[5]=0u+0x00000416u; // 80246E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246E84
  c->lr=0x80246E8Cu; f_80245CC0(c); // 80246E88
  c->lr=0x80246E90u; f_8024BE40(c); // 80246E8C
L_80246E90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80246E90
  c->r[4]=0u+0x00000020u; // 80246E94
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80246E98
  c->r[0]=c->r[3]+0x0000001Fu; // 80246E9C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80246EA0
  c->lr=0x80246EA8u; f_80244900(c); // 80246EA4
  c->r[24]=c->r[3]|c->r[3]; // 80246EA8
  c->r[4]=c->r[22]|c->r[22]; // 80246EAC
  c->r[3]=c->r[23]|c->r[23]; // 80246EB0
  c->r[6]=c->r[1]+0x00000014u; // 80246EB4
  c->r[5]=c->r[24]|c->r[24]; // 80246EB8
  c->lr=0x80246EC0u; f_80201A50(c); // 80246EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80246EC0
  c->r[31]=c->r[3]|c->r[3]; // 80246EC4
  if (crb(c,2)) { goto L_80246EE4; } // 80246EC8
  c->r[4]=c->r[31]|c->r[31]; // 80246ECC
  c->r[3]=c->r[30]+0x00000084u; // 80246ED0
  c->r[5]=0u+0x0000041Fu; // 80246ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246ED8
  c->lr=0x80246EE0u; f_80245CC0(c); // 80246EDC
  c->lr=0x80246EE4u; f_8024BE40(c); // 80246EE0
L_80246EE4:;
  c->lr=0x80246EE8u; f_801FF3D0(c); // 80246EE4
  c->r[5]=0u+0x80000000u; // 80246EE8
  c->r[4]=0u+0x00000100u; // 80246EEC
  c->r[28]=R32(c->r[5]+0x0000311Cu); // 80246EF0
  c->r[3]=c->r[5]+0x00003100u; // 80246EF4
  c->r[27]=R32(c->r[5]+0x00003120u); // 80246EF8
  c->lr=0x80246F00u; f_80244E80(c); // 80246EFC
  c->r[4]=c->r[22]|c->r[22]; // 80246F00
  c->r[3]=c->r[23]|c->r[23]; // 80246F04
  c->r[5]=c->r[24]|c->r[24]; // 80246F08
  c->lr=0x80246F10u; f_802019B0(c); // 80246F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80246F10
  c->r[31]=c->r[3]|c->r[3]; // 80246F14
  if (crb(c,2)) { goto L_80246F34; } // 80246F18
  c->r[4]=c->r[31]|c->r[31]; // 80246F1C
  c->r[3]=c->r[30]+0x00000084u; // 80246F20
  c->r[5]=0u+0x0000042Fu; // 80246F24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80246F28
  c->lr=0x80246F30u; f_80245CC0(c); // 80246F2C
  c->lr=0x80246F34u; f_8024BE40(c); // 80246F30
L_80246F34:;
  c->lr=0x80246F38u; f_80201960(c); // 80246F34
  c->r[31]=0u+0x80000000u; // 80246F38
  c->r[4]=0u+0x00000100u; // 80246F3C
  c->r[3]=c->r[31]+0x00003100u; // 80246F40
  c->lr=0x80246F48u; f_80244E20(c); // 80246F44
  c->r[3]=R32(c->r[31]+0x0000311Cu); // 80246F48
  cmpu(c,0,c->r[28],c->r[3]); // 80246F4C
  if (!crb(c,0)) { goto L_80246FA4; } // 80246F50
  c->r[0]=R32(c->r[31]+0x00003120u); // 80246F54
  c->r[0]=c->r[3]-c->r[0]; // 80246F58
  c->r[0]=c->r[28]-c->r[0]; // 80246F5C
  W32(c->r[31]+0x00003120u,c->r[0]); // 80246F60
  c->r[3]=R32(c->r[31]+0x00003128u); // 80246F64
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80246F68
  c->r[0]=c->r[0]-c->r[3]; // 80246F6C
  c->r[0]=c->r[28]-c->r[0]; // 80246F70
  W32(c->r[31]+0x00003128u,c->r[0]); // 80246F74
  c->r[3]=R32(c->r[31]+0x00003130u); // 80246F78
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80246F7C
  c->r[0]=c->r[0]-c->r[3]; // 80246F80
  c->r[0]=c->r[28]-c->r[0]; // 80246F84
  W32(c->r[31]+0x00003130u,c->r[0]); // 80246F88
  c->r[3]=R32(c->r[31]+0x00003134u); // 80246F8C
  c->r[0]=R32(c->r[31]+0x0000311Cu); // 80246F90
  c->r[0]=c->r[0]-c->r[3]; // 80246F94
  c->r[0]=c->r[28]-c->r[0]; // 80246F98
  W32(c->r[31]+0x00003134u,c->r[0]); // 80246F9C
  W32(c->r[31]+0x0000311Cu,c->r[28]); // 80246FA0
L_80246FA4:;
  c->r[3]=0u+0x80000000u; // 80246FA4
  c->r[0]=R32(c->r[3]+0x00003120u); // 80246FA8
  cmpu(c,0,c->r[27],c->r[0]); // 80246FAC
  if (!crb(c,0)) { goto L_80246FB8; } // 80246FB0
  c->lr=0x80246FB8u; f_8024AFD0(c); // 80246FB4
L_80246FB8:;
  c->lr=0x80246FBCu; f_8024F170(c); // 80246FB8
  c->lr=0x80246FC0u; f_80230D40(c); // 80246FBC
  c->lr=0x80246FC4u; f_802312F0(c); // 80246FC0
  c->lr=0x80246FC8u; f_801FF420(c); // 80246FC4
  c->r[0]=0u+0x00000000u; // 80246FC8
  c->r[3]=0u+0x804A0000u; // 80246FCC
  c->r[4]=0u+0x80240000u; // 80246FD0
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80246FD4
  c->r[3]=c->r[3]+0xFFFFC500u; // 80246FD8
  c->r[4]=c->r[4]+0x00006930u; // 80246FDC
  c->lr=0x80246FE4u; f_801FF690(c); // 80246FE0
  c->r[0]=c->r[0]|0x00000000u; // 80246FE4
L_80246FE8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246FE8
  cmps(c,0,(int32_t)c->r[0],0); // 80246FEC
  if (crb(c,2)) { IRQCHK(c); goto L_80246FE8; } // 80246FF0
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 80246FF4
  cmps(c,0,(int32_t)c->r[0],2); // 80246FF8
  if (crb(c,2)) { goto L_8024701C; } // 80246FFC
  if (!crb(c,0)) { goto L_80247010; } // 80247000
  cmps(c,0,(int32_t)c->r[0],1); // 80247004
  if (!crb(c,0)) { goto L_80247054; } // 80247008
  goto L_80247044; // 8024700C
L_80247010:;
  cmps(c,0,(int32_t)c->r[0],16); // 80247010
  if (crb(c,2)) { goto L_80247030; } // 80247014
  goto L_80247044; // 80247018
L_8024701C:;
  c->r[3]=c->r[30]+0x00000000u; // 8024701C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247020
  c->lr=0x80247028u; f_80245CC0(c); // 80247024
  c->lr=0x8024702Cu; f_8024BD90(c); // 80247028
  goto L_80247054; // 8024702C
L_80247030:;
  c->r[3]=c->r[30]+0x00000018u; // 80247030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247034
  c->lr=0x8024703Cu; f_80245CC0(c); // 80247038
  c->lr=0x80247040u; f_8024BD90(c); // 8024703C
  goto L_80247054; // 80247040
L_80247044:;
  c->r[3]=c->r[30]+0x00000034u; // 80247044
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247048
  c->lr=0x80247050u; f_80245CC0(c); // 8024704C
  c->lr=0x80247054u; f_8024BD90(c); // 80247050
L_80247054:;
  c->r[0]=0u+0x00000000u; // 80247054
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 80247058
  c->r[3]=0u+0x80000000u; // 8024705C
  c->r[0]=R8(c->r[3]+0x00003187u); // 80247060
  cmpu(c,0,c->r[0],0x00000080u); // 80247064
  if (!crb(c,2)) { goto L_80247094; } // 80247068
  c->r[9]=0u+0x80240000u; // 8024706C
  c->r[3]=R32(c->r[26]+0x00000000u); // 80247070
  c->r[5]=R32(c->r[1]+0x00000010u); // 80247074
  c->r[4]=c->r[29]|c->r[29]; // 80247078
  c->r[6]=c->r[25]|c->r[25]; // 8024707C
  c->r[9]=c->r[9]+0x00006930u; // 80247080
  c->r[7]=0u+0x00000000u; // 80247084
  c->r[8]=0u+0x00000000u; // 80247088
  c->lr=0x80247090u; f_801FFA90(c); // 8024708C
  goto L_802470B8; // 80247090
L_80247094:;
  c->r[8]=0u+0x80240000u; // 80247094
  c->r[3]=R32(c->r[26]+0x00000000u); // 80247098
  c->r[7]=c->r[25]|c->r[25]; // 8024709C
  c->r[4]=0u+0x00000000u; // 802470A0
  c->r[8]=c->r[8]+0x00006930u; // 802470A4
  c->r[5]=0u+0x00000000u; // 802470A8
  c->r[6]=0u+0x00000000u; // 802470AC
  c->lr=0x802470B4u; f_801FF820(c); // 802470B0
  c->r[0]=c->r[0]|0x00000000u; // 802470B4
L_802470B8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 802470B8
  cmps(c,0,(int32_t)c->r[0],0); // 802470BC
  if (crb(c,2)) { IRQCHK(c); goto L_802470B8; } // 802470C0
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 802470C4
  cmps(c,0,(int32_t)c->r[0],2); // 802470C8
  if (crb(c,2)) { goto L_802470EC; } // 802470CC
  if (!crb(c,0)) { goto L_802470E0; } // 802470D0
  cmps(c,0,(int32_t)c->r[0],1); // 802470D4
  if (!crb(c,0)) { goto L_80247124; } // 802470D8
  goto L_80247114; // 802470DC
L_802470E0:;
  cmps(c,0,(int32_t)c->r[0],16); // 802470E0
  if (crb(c,2)) { goto L_80247100; } // 802470E4
  goto L_80247114; // 802470E8
L_802470EC:;
  c->r[3]=c->r[30]+0x00000000u; // 802470EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802470F0
  c->lr=0x802470F8u; f_80245CC0(c); // 802470F4
  c->lr=0x802470FCu; f_8024BD90(c); // 802470F8
  goto L_80247124; // 802470FC
L_80247100:;
  c->r[3]=c->r[30]+0x00000018u; // 80247100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247104
  c->lr=0x8024710Cu; f_80245CC0(c); // 80247108
  c->lr=0x80247110u; f_8024BD90(c); // 8024710C
  goto L_80247124; // 80247110
L_80247114:;
  c->r[3]=c->r[30]+0x00000034u; // 80247114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247118
  c->lr=0x80247120u; f_80245CC0(c); // 8024711C
  c->lr=0x80247124u; f_8024BD90(c); // 80247120
L_80247124:;
  c->r[11]=c->r[1]+0x00000040u; // 80247124
  c->lr=0x8024712Cu; f_800C2E84(c); // 80247128
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024712C
  c->lr=c->r[0]; // 80247130
  c->r[1]=c->r[1]+0x00000040u; // 80247134
  return; // 80247138
}

// __OSLaunchMenu
void f_80247140(Ctx* __restrict c) {
  trace_call(0x80247140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247140
  c->r[0]=c->lr; // 80247144
  c->r[3]=0u+0x81280000u; // 80247148
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024714C
  c->r[0]=0u+0x00000001u; // 80247150
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80247154
  W32(c->r[1]+0x00000008u,c->r[0]); // 80247158
  c->lr=0x80247160u; f_802448F0(c); // 8024715C
  c->r[3]=0u+0x812F0000u; // 80247160
  c->lr=0x80247168u; f_802448C0(c); // 80247164
  c->lr=0x8024716Cu; f_80201900(c); // 80247168
  cmps(c,0,(int32_t)c->r[3],0); // 8024716C
  if (!crb(c,2)) { goto L_802471F4; } // 80247170
  c->r[6]=c->r[1]+0x00000008u; // 80247174
  c->r[4]=0u+0x00000002u; // 80247178
  c->r[3]=0u+0x00000001u; // 8024717C
  c->r[5]=0u+0x00000000u; // 80247180
  c->lr=0x80247188u; f_80201A50(c); // 80247184
  c->r[0]=R32(c->r[1]+0x00000008u); // 80247188
  cmpu(c,0,c->r[0],0x00000001u); // 8024718C
  if (!crb(c,2)) { goto L_802471F4; } // 80247190
  cmps(c,0,(int32_t)c->r[3],0); // 80247194
  if (crb(c,2)) { goto L_802471A0; } // 80247198
  goto L_802471F4; // 8024719C
L_802471A0:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 802471A0
  c->r[4]=0u+0x00000020u; // 802471A4
  c->r[0]=c->r[3]+0x0000001Fu; // 802471A8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802471AC
  c->lr=0x802471B4u; f_80244900(c); // 802471B0
  c->r[31]=c->r[3]|c->r[3]; // 802471B4
  c->r[6]=c->r[1]+0x00000008u; // 802471B8
  c->r[5]=c->r[31]|c->r[31]; // 802471BC
  c->r[4]=0u+0x00000002u; // 802471C0
  c->r[3]=0u+0x00000001u; // 802471C4
  c->lr=0x802471CCu; f_80201A50(c); // 802471C8
  cmps(c,0,(int32_t)c->r[3],0); // 802471CC
  if (!crb(c,2)) { goto L_802471F4; } // 802471D0
  c->r[5]=c->r[31]|c->r[31]; // 802471D4
  c->r[4]=0u+0x00000002u; // 802471D8
  c->r[3]=0u+0x00000001u; // 802471DC
  c->lr=0x802471E4u; f_802019B0(c); // 802471E0
  cmps(c,0,(int32_t)c->r[3],0); // 802471E4
  if (!crb(c,2)) { goto L_802471F4; } // 802471E8
  c->r[0]=c->r[0]|0x00000000u; // 802471EC
L_802471F0:;
  IRQCHK(c); goto L_802471F0; // 802471F0
L_802471F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802471F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802471F8
  c->lr=c->r[0]; // 802471FC
  c->r[1]=c->r[1]+0x00000020u; // 80247200
  return; // 80247204
}

// __OSBootDolSimple
void f_80247210(Ctx* __restrict c) {
  trace_call(0x80247210u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80247210
  c->r[12]=c->r[1]|c->r[1]; // 80247214
  c->r[11]=addc(c,~c->r[11],0xFFFFFE00u,1); // 80247218
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8024721C
  c->r[0]=c->lr; // 80247220
  c->r[11]=c->r[12]|c->r[12]; // 80247224
  W32(c->r[12]+0x00000004u,c->r[0]); // 80247228
  c->lr=0x80247230u; f_800C2E40(c); // 8024722C
  c->r[27]=c->r[3]|c->r[3]; // 80247230
  c->r[24]=c->r[4]|c->r[4]; // 80247234
  c->r[28]=c->r[5]|c->r[5]; // 80247238
  c->r[29]=c->r[6]|c->r[6]; // 8024723C
  c->r[25]=c->r[7]|c->r[7]; // 80247240
  c->r[31]=c->r[8]|c->r[8]; // 80247244
  c->r[26]=c->r[9]|c->r[9]; // 80247248
  c->lr=0x80247250u; f_802494C0(c); // 8024724C
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 80247250
  cmps(c,0,(int32_t)c->r[0],0); // 80247254
  if (crb(c,2)) { goto L_80247268; } // 80247258
  c->r[3]=0u+0x80000000u; // 8024725C
  c->r[0]=R32(c->r[3]+0x00003194u); // 80247260
  W32(c->r[13]+0xFFFF9DE8u,c->r[0]); // 80247264
L_80247268:;
  c->r[3]=0u+0x000C0000u; // 80247268
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 8024726C
  c->lr=0x80247274u; f_8024AF80(c); // 80247270
  c->r[3]=0u+0x0000001Cu; // 80247274
  c->r[4]=0u+0x00000001u; // 80247278
  c->lr=0x80247280u; f_80244900(c); // 8024727C
  c->r[0]=0u+0x00000001u; // 80247280
  W32(c->r[3]+0x00000000u,c->r[0]); // 80247284
  cmps(c,0,(int32_t)c->r[25],0); // 80247288
  c->r[30]=c->r[3]|c->r[3]; // 8024728C
  W32(c->r[3]+0x00000004u,c->r[24]); // 80247290
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 80247294
  W32(c->r[3]+0x00000010u,c->r[29]); // 80247298
  W32(c->r[3]+0x00000014u,c->r[25]); // 8024729C
  if (!crb(c,2)) { goto L_802472F0; } // 802472A0
  c->r[3]=0u+0x00002000u; // 802472A4
  c->r[4]=0u+0x00000001u; // 802472A8
  c->lr=0x802472B0u; f_80244900(c); // 802472AC
  W32(c->r[30]+0x00000018u,c->r[3]); // 802472B0
  c->r[0]=R32(c->r[13]+0xFFFF9DE8u); // 802472B4
  cmpu(c,0,c->r[0],0x00000002u); // 802472B8
  if (!crb(c,2)) { goto L_802472E0; } // 802472BC
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 802472C0
  cmps(c,0,(int32_t)c->r[0],0); // 802472C4
  if (!crb(c,2)) { goto L_802472E0; } // 802472C8
  c->r[3]=R32(c->r[30]+0x00000018u); // 802472CC
  c->r[4]=c->r[31]|c->r[31]; // 802472D0
  c->r[5]=c->r[26]|c->r[26]; // 802472D4
  c->lr=0x802472DCu; f_802466E0(c); // 802472D8
  goto L_802472F0; // 802472DC
L_802472E0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 802472E0
  c->r[4]=c->r[31]|c->r[31]; // 802472E4
  c->r[5]=c->r[26]|c->r[26]; // 802472E8
  c->lr=0x802472F0u; f_80246400(c); // 802472EC
L_802472F0:;
  c->lr=0x802472F4u; f_801F9320(c); // 802472F0
  c->r[3]=0u+0x00000001u; // 802472F4
  c->lr=0x802472FCu; f_801FD5F0(c); // 802472F8
  c->lr=0x80247300u; f_801FD600(c); // 802472FC
  c->r[0]=0u+0x00000000u; // 80247300
  c->r[3]=0u+0x80240000u; // 80247304
  W32(c->r[13]+0xFFFF9DF8u,c->r[0]); // 80247308
  c->r[3]=c->r[3]+0x000068F0u; // 8024730C
  c->lr=0x80247314u; f_801FDE10(c); // 80247310
  c->r[3]=0u+0xFFFFFFF0u; // 80247314
  c->lr=0x8024731Cu; f_80249890(c); // 80247318
  c->r[3]=0u+0x00000010u; // 8024731C
  c->lr=0x80247324u; f_80249910(c); // 80247320
  c->lr=0x80247328u; f_802494E0(c); // 80247324
L_80247328:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF8u); // 80247328
  cmps(c,0,(int32_t)c->r[0],1); // 8024732C
  if (!crb(c,2)) { IRQCHK(c); goto L_80247328; } // 80247330
  c->lr=0x80247338u; f_80246940(c); // 80247334
  c->r[0]=c->r[24]+0x60000000u; // 80247338
  cmpu(c,0,c->r[0],0x00000000u); // 8024733C
  if (!crb(c,2)) { goto L_8024739C; } // 80247340
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 80247344
  cmps(c,0,(int32_t)c->r[0],0); // 80247348
  if (!crb(c,2)) { goto L_8024739C; } // 8024734C
  c->lr=0x80247354u; f_80201900(c); // 80247350
  cmps(c,0,(int32_t)c->r[3],0); // 80247354
  if (!crb(c,2)) { goto L_80247948; } // 80247358
  c->r[3]=c->r[1]+0x00000040u; // 8024735C
  c->lr=0x80247364u; f_80201EC0(c); // 80247360
  cmps(c,0,(int32_t)c->r[3],0); // 80247364
  if (!crb(c,2)) { goto L_80247948; } // 80247368
  c->lr=0x80247370u; f_80201960(c); // 8024736C
  cmps(c,0,(int32_t)c->r[3],0); // 80247370
  if (!crb(c,2)) { goto L_80247948; } // 80247374
  c->r[3]=R32(c->r[30]+0x00000018u); // 80247378
  c->r[4]=0u+0x00000011u; // 8024737C
  c->r[0]=R32(c->r[26]+0x00000004u); // 80247380
  c->r[5]=c->r[13]+0xFFFF9138u; // 80247384
  c->r[7]=R32(c->r[1]+0x00000040u); // 80247388
  c->r[8]=R32(c->r[1]+0x00000044u); // 8024738C
  c->r[3]=c->r[3]+c->r[0]; // 80247390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80247394
  c->lr=0x8024739Cu; f_800C8A0C(c); // 80247398
L_8024739C:;
  c->r[3]=0u+0x00000020u; // 8024739C
  c->r[4]=0u+0x00000020u; // 802473A0
  c->lr=0x802473A8u; f_80244900(c); // 802473A4
  c->r[6]=R32(c->r[13]+0xFFFF9DECu); // 802473A8
  c->r[31]=c->r[3]|c->r[3]; // 802473AC
  cmps(c,0,(int32_t)c->r[6],0); // 802473B0
  if (crb(c,2)) { goto L_802473BC; } // 802473B4
  goto L_80247458; // 802473B8
L_802473BC:;
  c->r[26]=0u+0x80000000u; // 802473BC
  c->r[0]=R32(c->r[26]+0x000030F4u); // 802473C0
  cmps(c,0,(int32_t)c->r[0],0); // 802473C4
  if (crb(c,2)) { goto L_80247450; } // 802473C8
  c->r[3]=0u+0x00000040u; // 802473CC
  c->r[4]=0u+0x00000020u; // 802473D0
  c->lr=0x802473D8u; f_80244900(c); // 802473D4
  c->r[0]=R32(c->r[26]+0x000030F4u); // 802473D8
  c->r[26]=c->r[3]|c->r[3]; // 802473DC
  c->r[3]=c->r[1]+0x00000120u; // 802473E0
  c->r[5]=0u+0x00000040u; // 802473E4
  c->r[4]=c->r[26]|c->r[26]; // 802473E8
  c->r[6]=sraw(c,c->r[0],2); // 802473EC
  c->r[7]=0u+0x00000000u; // 802473F0
  c->r[8]=0u+0x00000000u; // 802473F4
  c->lr=0x802473FCu; f_801FD2B0(c); // 802473F8
  goto L_80247424; // 802473FC
L_80247400:;
  c->r[3]=c->r[1]+0x00000120u; // 80247400
  c->lr=0x80247408u; f_801FD480(c); // 80247404
  cmps(c,0,(int32_t)c->r[3],2); // 80247408
  if (crb(c,1)) { goto L_80247420; } // 8024740C
  c->r[3]=c->r[1]+0x00000120u; // 80247410
  c->lr=0x80247418u; f_801FD480(c); // 80247414
  cmps(c,0,(int32_t)c->r[3],0); // 80247418
  if (!crb(c,0)) { goto L_80247424; } // 8024741C
L_80247420:;
  c->lr=0x80247424u; f_8024BD90(c); // 80247420
L_80247424:;
  c->r[3]=c->r[1]+0x00000120u; // 80247424
  c->lr=0x8024742Cu; f_801FD480(c); // 80247428
  cmps(c,0,(int32_t)c->r[3],0); // 8024742C
  if (!crb(c,2)) { IRQCHK(c); goto L_80247400; } // 80247430
  c->r[3]=0u+0x80000000u; // 80247434
  c->r[4]=R32(c->r[26]+0x00000038u); // 80247438
  c->r[0]=R32(c->r[3]+0x000030F4u); // 8024743C
  c->r[0]=c->r[0]+c->r[4]; // 80247440
  c->r[6]=sraw(c,c->r[0],2); // 80247444
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 80247448
  goto L_80247458; // 8024744C
L_80247450:;
  c->r[6]=0u+0x00000910u; // 80247450
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 80247454
L_80247458:;
  c->r[4]=c->r[31]|c->r[31]; // 80247458
  c->r[3]=c->r[1]+0x00000150u; // 8024745C
  c->r[5]=0u+0x00000020u; // 80247460
  c->r[7]=0u+0x00000000u; // 80247464
  c->r[8]=0u+0x00000000u; // 80247468
  c->lr=0x80247470u; f_801FD2B0(c); // 8024746C
  goto L_80247498; // 80247470
L_80247474:;
  c->r[3]=c->r[1]+0x00000150u; // 80247474
  c->lr=0x8024747Cu; f_801FD480(c); // 80247478
  cmps(c,0,(int32_t)c->r[3],2); // 8024747C
  if (crb(c,1)) { goto L_80247494; } // 80247480
  c->r[3]=c->r[1]+0x00000150u; // 80247484
  c->lr=0x8024748Cu; f_801FD480(c); // 80247488
  cmps(c,0,(int32_t)c->r[3],0); // 8024748C
  if (!crb(c,0)) { goto L_80247498; } // 80247490
L_80247494:;
  c->lr=0x80247498u; f_8024BD90(c); // 80247494
L_80247498:;
  c->r[3]=c->r[1]+0x00000150u; // 80247498
  c->lr=0x802474A0u; f_801FD480(c); // 8024749C
  cmps(c,0,(int32_t)c->r[3],0); // 802474A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80247474; } // 802474A4
  c->r[6]=R32(c->r[13]+0xFFFF9DECu); // 802474A8
  cmps(c,0,(int32_t)c->r[6],0); // 802474AC
  if (crb(c,2)) { goto L_802474B8; } // 802474B0
  goto L_80247554; // 802474B4
L_802474B8:;
  c->r[26]=0u+0x80000000u; // 802474B8
  c->r[0]=R32(c->r[26]+0x000030F4u); // 802474BC
  cmps(c,0,(int32_t)c->r[0],0); // 802474C0
  if (crb(c,2)) { goto L_8024754C; } // 802474C4
  c->r[3]=0u+0x00000040u; // 802474C8
  c->r[4]=0u+0x00000020u; // 802474CC
  c->lr=0x802474D4u; f_80244900(c); // 802474D0
  c->r[0]=R32(c->r[26]+0x000030F4u); // 802474D4
  c->r[26]=c->r[3]|c->r[3]; // 802474D8
  c->r[3]=c->r[1]+0x00000180u; // 802474DC
  c->r[5]=0u+0x00000040u; // 802474E0
  c->r[4]=c->r[26]|c->r[26]; // 802474E4
  c->r[6]=sraw(c,c->r[0],2); // 802474E8
  c->r[7]=0u+0x00000000u; // 802474EC
  c->r[8]=0u+0x00000000u; // 802474F0
  c->lr=0x802474F8u; f_801FD2B0(c); // 802474F4
  goto L_80247520; // 802474F8
L_802474FC:;
  c->r[3]=c->r[1]+0x00000180u; // 802474FC
  c->lr=0x80247504u; f_801FD480(c); // 80247500
  cmps(c,0,(int32_t)c->r[3],2); // 80247504
  if (crb(c,1)) { goto L_8024751C; } // 80247508
  c->r[3]=c->r[1]+0x00000180u; // 8024750C
  c->lr=0x80247514u; f_801FD480(c); // 80247510
  cmps(c,0,(int32_t)c->r[3],0); // 80247514
  if (!crb(c,0)) { goto L_80247520; } // 80247518
L_8024751C:;
  c->lr=0x80247520u; f_8024BD90(c); // 8024751C
L_80247520:;
  c->r[3]=c->r[1]+0x00000180u; // 80247520
  c->lr=0x80247528u; f_801FD480(c); // 80247524
  cmps(c,0,(int32_t)c->r[3],0); // 80247528
  if (!crb(c,2)) { IRQCHK(c); goto L_802474FC; } // 8024752C
  c->r[3]=0u+0x80000000u; // 80247530
  c->r[4]=R32(c->r[26]+0x00000038u); // 80247534
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80247538
  c->r[0]=c->r[0]+c->r[4]; // 8024753C
  c->r[6]=sraw(c,c->r[0],2); // 80247540
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 80247544
  goto L_80247554; // 80247548
L_8024754C:;
  c->r[6]=0u+0x00000910u; // 8024754C
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 80247550
L_80247554:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 80247554
  c->r[3]=c->r[1]+0x000001B0u; // 80247558
  c->r[6]=c->r[6]+0x00000008u; // 8024755C
  c->r[4]=0u+0x81200000u; // 80247560
  c->r[0]=c->r[5]+0x0000001Fu; // 80247564
  c->r[7]=0u+0x00000000u; // 80247568
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8024756C
  c->r[8]=0u+0x00000000u; // 80247570
  c->lr=0x80247578u; f_801FD2B0(c); // 80247574
  goto L_802475A0; // 80247578
L_8024757C:;
  c->r[3]=c->r[1]+0x000001B0u; // 8024757C
  c->lr=0x80247584u; f_801FD480(c); // 80247580
  cmps(c,0,(int32_t)c->r[3],2); // 80247584
  if (crb(c,1)) { goto L_8024759C; } // 80247588
  c->r[3]=c->r[1]+0x000001B0u; // 8024758C
  c->lr=0x80247594u; f_801FD480(c); // 80247590
  cmps(c,0,(int32_t)c->r[3],0); // 80247594
  if (!crb(c,0)) { goto L_802475A0; } // 80247598
L_8024759C:;
  c->lr=0x802475A0u; f_8024BD90(c); // 8024759C
L_802475A0:;
  c->r[3]=c->r[1]+0x000001B0u; // 802475A0
  c->lr=0x802475A8u; f_801FD480(c); // 802475A4
  cmps(c,0,(int32_t)c->r[3],0); // 802475A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8024757C; } // 802475AC
  c->r[4]=R32(c->r[31]+0x00000014u); // 802475B0
  c->r[3]=0u+0x81200000u; // 802475B4
  c->r[0]=c->r[4]+0x0000001Fu; // 802475B8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802475BC
  c->lr=0x802475C4u; f_80244F10(c); // 802475C0
  c->r[4]=0u+0x803B0000u; // 802475C4
  c->r[3]=c->r[31]|c->r[31]; // 802475C8
  c->r[4]=c->r[4]+0xFFFFDCB8u; // 802475CC
  c->r[5]=0u+0x0000000Au; // 802475D0
  c->lr=0x802475D8u; f_800CA49C(c); // 802475D4
  cmps(c,0,(int32_t)c->r[3],0); // 802475D8
  if (!crb(c,1)) { goto L_802475E8; } // 802475DC
  c->r[0]=0u+0x00000001u; // 802475E0
  goto L_802475EC; // 802475E4
L_802475E8:;
  c->r[0]=0u+0x00000000u; // 802475E8
L_802475EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802475EC
  if (crb(c,2)) { goto L_802477FC; } // 802475F0
  c->r[0]=c->r[27]+0x00010000u; // 802475F4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802475F8
  if (!crb(c,2)) { goto L_802476BC; } // 802475FC
  c->r[6]=R32(c->r[13]+0xFFFF9DECu); // 80247600
  cmps(c,0,(int32_t)c->r[6],0); // 80247604
  if (crb(c,2)) { goto L_80247610; } // 80247608
  goto L_802476AC; // 8024760C
L_80247610:;
  c->r[27]=0u+0x80000000u; // 80247610
  c->r[0]=R32(c->r[27]+0x000030F4u); // 80247614
  cmps(c,0,(int32_t)c->r[0],0); // 80247618
  if (crb(c,2)) { goto L_802476A4; } // 8024761C
  c->r[3]=0u+0x00000040u; // 80247620
  c->r[4]=0u+0x00000020u; // 80247624
  c->lr=0x8024762Cu; f_80244900(c); // 80247628
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8024762C
  c->r[26]=c->r[3]|c->r[3]; // 80247630
  c->r[3]=c->r[1]+0x000000F0u; // 80247634
  c->r[5]=0u+0x00000040u; // 80247638
  c->r[4]=c->r[26]|c->r[26]; // 8024763C
  c->r[6]=sraw(c,c->r[0],2); // 80247640
  c->r[7]=0u+0x00000000u; // 80247644
  c->r[8]=0u+0x00000000u; // 80247648
  c->lr=0x80247650u; f_801FD2B0(c); // 8024764C
  goto L_80247678; // 80247650
L_80247654:;
  c->r[3]=c->r[1]+0x000000F0u; // 80247654
  c->lr=0x8024765Cu; f_801FD480(c); // 80247658
  cmps(c,0,(int32_t)c->r[3],2); // 8024765C
  if (crb(c,1)) { goto L_80247674; } // 80247660
  c->r[3]=c->r[1]+0x000000F0u; // 80247664
  c->lr=0x8024766Cu; f_801FD480(c); // 80247668
  cmps(c,0,(int32_t)c->r[3],0); // 8024766C
  if (!crb(c,0)) { goto L_80247678; } // 80247670
L_80247674:;
  c->lr=0x80247678u; f_8024BD90(c); // 80247674
L_80247678:;
  c->r[3]=c->r[1]+0x000000F0u; // 80247678
  c->lr=0x80247680u; f_801FD480(c); // 8024767C
  cmps(c,0,(int32_t)c->r[3],0); // 80247680
  if (!crb(c,2)) { IRQCHK(c); goto L_80247654; } // 80247684
  c->r[3]=0u+0x80000000u; // 80247688
  c->r[4]=R32(c->r[26]+0x00000038u); // 8024768C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 80247690
  c->r[0]=c->r[0]+c->r[4]; // 80247694
  c->r[6]=sraw(c,c->r[0],2); // 80247698
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 8024769C
  goto L_802476AC; // 802476A0
L_802476A4:;
  c->r[6]=0u+0x00000910u; // 802476A4
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 802476A8
L_802476AC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802476AC
  c->r[0]=c->r[3]+0x00000020u; // 802476B0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802476B4
  c->r[27]=c->r[0]+c->r[6]; // 802476B8
L_802476BC:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 802476BC
  c->r[3]=c->r[1]+0x00000020u; // 802476C0
  c->r[4]=c->r[1]+0x00000024u; // 802476C4
  c->r[5]=c->r[1]+0x00000028u; // 802476C8
  c->r[12]=R32(c->r[31]+0x00000010u); // 802476CC
  c->ctr=c->r[12]; // 802476D0
  if (true) { c->lr=0x802476D8u; dispatch(c,c->ctr); } // 802476D4
  c->r[3]=0u+0x0000001Cu; // 802476D8
  c->r[4]=0u+0x00000001u; // 802476DC
  c->lr=0x802476E4u; f_80244900(c); // 802476E0
  c->r[26]=c->r[3]|c->r[3]; // 802476E4
  c->r[4]=c->r[30]|c->r[30]; // 802476E8
  c->r[5]=0u+0x0000001Cu; // 802476EC
  c->lr=0x802476F4u; f_80004000(c); // 802476F0
  c->r[4]=0u+0x80000000u; // 802476F4
  c->r[3]=0u+0x80240000u; // 802476F8
  W32(c->r[4]+0x000030F0u,c->r[26]); // 802476FC
  c->r[3]=c->r[3]+0x00005CC0u; // 80247700
  c->r[12]=R32(c->r[1]+0x00000020u); // 80247704
  c->ctr=c->r[12]; // 80247708
  if (true) { c->lr=0x80247710u; dispatch(c,c->ctr); } // 8024770C
  c->r[3]=c->r[26]|c->r[26]; // 80247710
  c->lr=0x80247718u; f_802448F0(c); // 80247714
  goto L_80247778; // 80247718
L_8024771C:;
  c->r[6]=R32(c->r[1]+0x00000034u); // 8024771C
  c->r[3]=c->r[1]+0x000000C0u; // 80247720
  c->r[0]=R32(c->r[13]+0xFFFF9B78u); // 80247724
  c->r[7]=0u+0x00000000u; // 80247728
  c->r[5]=R32(c->r[1]+0x00000030u); // 8024772C
  c->r[8]=0u+0x00000000u; // 80247730
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 80247734
  c->r[6]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 80247738
  c->lr=0x80247740u; f_801FD2B0(c); // 8024773C
  goto L_80247768; // 80247740
L_80247744:;
  c->r[3]=c->r[1]+0x000000C0u; // 80247744
  c->lr=0x8024774Cu; f_801FD480(c); // 80247748
  cmps(c,0,(int32_t)c->r[3],2); // 8024774C
  if (crb(c,1)) { goto L_80247764; } // 80247750
  c->r[3]=c->r[1]+0x000000C0u; // 80247754
  c->lr=0x8024775Cu; f_801FD480(c); // 80247758
  cmps(c,0,(int32_t)c->r[3],0); // 8024775C
  if (!crb(c,0)) { goto L_80247768; } // 80247760
L_80247764:;
  c->lr=0x80247768u; f_8024BD90(c); // 80247764
L_80247768:;
  c->r[3]=c->r[1]+0x000000C0u; // 80247768
  c->lr=0x80247770u; f_801FD480(c); // 8024776C
  cmps(c,0,(int32_t)c->r[3],0); // 80247770
  if (!crb(c,2)) { IRQCHK(c); goto L_80247744; } // 80247774
L_80247778:;
  c->r[12]=R32(c->r[1]+0x00000024u); // 80247778
  c->r[3]=c->r[1]+0x0000002Cu; // 8024777C
  c->r[4]=c->r[1]+0x00000030u; // 80247780
  c->r[5]=c->r[1]+0x00000034u; // 80247784
  c->ctr=c->r[12]; // 80247788
  if (true) { c->lr=0x80247790u; dispatch(c,c->ctr); } // 8024778C
  cmps(c,0,(int32_t)c->r[3],0); // 80247790
  if (!crb(c,2)) { IRQCHK(c); goto L_8024771C; } // 80247794
  c->r[12]=R32(c->r[1]+0x00000028u); // 80247798
  c->ctr=c->r[12]; // 8024779C
  if (true) { c->lr=0x802477A4u; dispatch(c,c->ctr); } // 802477A0
  c->r[5]=0u+0x80000000u; // 802477A4
  c->r[27]=c->r[3]|c->r[3]; // 802477A8
  c->r[3]=R32(c->r[5]+0x00000000u); // 802477AC
  c->r[0]=0u+0x00000080u; // 802477B0
  W32(c->r[5]+0x00003180u,c->r[3]); // 802477B4
  c->r[3]=0u+0x0000001Cu; // 802477B8
  c->r[4]=0u+0x00000001u; // 802477BC
  W8(c->r[5]+0x00003184u,c->r[0]); // 802477C0
  c->lr=0x802477C8u; f_80244900(c); // 802477C4
  c->r[26]=c->r[3]|c->r[3]; // 802477C8
  c->r[4]=c->r[30]|c->r[30]; // 802477CC
  c->r[5]=0u+0x0000001Cu; // 802477D0
  c->lr=0x802477D8u; f_80004000(c); // 802477D4
  c->r[4]=0u+0x80000000u; // 802477D8
  c->r[3]=0u+0xCC000000u; // 802477DC
  W32(c->r[4]+0x000030F0u,c->r[26]); // 802477E0
  c->r[0]=0u+0x00000007u; // 802477E4
  W32(c->r[3]+0x00003024u,c->r[0]); // 802477E8
  c->lr=0x802477F0u; f_802494C0(c); // 802477EC
  c->r[3]=c->r[27]|c->r[27]; // 802477F0
  c->lr=0x802477F8u; f_802468B0(c); // 802477F4
  goto L_80247948; // 802477F8
L_802477FC:;
  c->r[3]=0u+0x81300000u; // 802477FC
  c->r[27]=0u+0x80000000u; // 80247800
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 80247804
  c->r[0]=0u+0x00000001u; // 80247808
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 8024780C
  W8(c->r[27]+0x000030E2u,c->r[0]); // 80247810
  c->r[6]=R32(c->r[13]+0xFFFF9DECu); // 80247814
  cmps(c,0,(int32_t)c->r[6],0); // 80247818
  if (crb(c,2)) { goto L_80247824; } // 8024781C
  goto L_802478BC; // 80247820
L_80247824:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 80247824
  cmps(c,0,(int32_t)c->r[0],0); // 80247828
  if (crb(c,2)) { goto L_802478B4; } // 8024782C
  c->r[3]=0u+0x00000040u; // 80247830
  c->r[4]=0u+0x00000020u; // 80247834
  c->lr=0x8024783Cu; f_80244900(c); // 80247838
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8024783C
  c->r[26]=c->r[3]|c->r[3]; // 80247840
  c->r[3]=c->r[1]+0x00000090u; // 80247844
  c->r[5]=0u+0x00000040u; // 80247848
  c->r[4]=c->r[26]|c->r[26]; // 8024784C
  c->r[6]=sraw(c,c->r[0],2); // 80247850
  c->r[7]=0u+0x00000000u; // 80247854
  c->r[8]=0u+0x00000000u; // 80247858
  c->lr=0x80247860u; f_801FD2B0(c); // 8024785C
  goto L_80247888; // 80247860
L_80247864:;
  c->r[3]=c->r[1]+0x00000090u; // 80247864
  c->lr=0x8024786Cu; f_801FD480(c); // 80247868
  cmps(c,0,(int32_t)c->r[3],2); // 8024786C
  if (crb(c,1)) { goto L_80247884; } // 80247870
  c->r[3]=c->r[1]+0x00000090u; // 80247874
  c->lr=0x8024787Cu; f_801FD480(c); // 80247878
  cmps(c,0,(int32_t)c->r[3],0); // 8024787C
  if (!crb(c,0)) { goto L_80247888; } // 80247880
L_80247884:;
  c->lr=0x80247888u; f_8024BD90(c); // 80247884
L_80247888:;
  c->r[3]=c->r[1]+0x00000090u; // 80247888
  c->lr=0x80247890u; f_801FD480(c); // 8024788C
  cmps(c,0,(int32_t)c->r[3],0); // 80247890
  if (!crb(c,2)) { IRQCHK(c); goto L_80247864; } // 80247894
  c->r[3]=0u+0x80000000u; // 80247898
  c->r[4]=R32(c->r[26]+0x00000038u); // 8024789C
  c->r[0]=R32(c->r[3]+0x000030F4u); // 802478A0
  c->r[0]=c->r[0]+c->r[4]; // 802478A4
  c->r[6]=sraw(c,c->r[0],2); // 802478A8
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 802478AC
  goto L_802478BC; // 802478B0
L_802478B4:;
  c->r[6]=0u+0x00000910u; // 802478B4
  W32(c->r[13]+0xFFFF9DECu,c->r[6]); // 802478B8
L_802478BC:;
  c->r[7]=R32(c->r[31]+0x00000014u); // 802478BC
  c->r[3]=c->r[1]+0x00000060u; // 802478C0
  c->r[5]=R32(c->r[31]+0x00000018u); // 802478C4
  c->r[4]=0u+0x81330000u; // 802478C8
  c->r[0]=c->r[7]+0x00000020u; // 802478CC
  c->r[7]=0u+0x00000000u; // 802478D0
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802478D4
  c->r[0]=c->r[5]+0x0000001Fu; // 802478D8
  c->r[6]=c->r[8]+c->r[6]; // 802478DC
  c->r[8]=0u+0x00000000u; // 802478E0
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802478E4
  c->lr=0x802478ECu; f_801FD2B0(c); // 802478E8
  goto L_80247914; // 802478EC
L_802478F0:;
  c->r[3]=c->r[1]+0x00000060u; // 802478F0
  c->lr=0x802478F8u; f_801FD480(c); // 802478F4
  cmps(c,0,(int32_t)c->r[3],2); // 802478F8
  if (crb(c,1)) { goto L_80247910; } // 802478FC
  c->r[3]=c->r[1]+0x00000060u; // 80247900
  c->lr=0x80247908u; f_801FD480(c); // 80247904
  cmps(c,0,(int32_t)c->r[3],0); // 80247908
  if (!crb(c,0)) { goto L_80247914; } // 8024790C
L_80247910:;
  c->lr=0x80247914u; f_8024BD90(c); // 80247910
L_80247914:;
  c->r[3]=c->r[1]+0x00000060u; // 80247914
  c->lr=0x8024791Cu; f_801FD480(c); // 80247918
  cmps(c,0,(int32_t)c->r[3],0); // 8024791C
  if (!crb(c,2)) { IRQCHK(c); goto L_802478F0; } // 80247920
  c->r[4]=R32(c->r[31]+0x00000018u); // 80247924
  c->r[3]=0u+0x81330000u; // 80247928
  c->r[0]=c->r[4]+0x0000001Fu; // 8024792C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80247930
  c->lr=0x80247938u; f_80244F10(c); // 80247934
  c->lr=0x8024793Cu; f_802494C0(c); // 80247938
  c->lr=0x80247940u; f_80244F50(c); // 8024793C
  c->r[3]=0u+0x81330000u; // 80247940
  c->lr=0x80247948u; f_802468B0(c); // 80247944
L_80247948:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80247948
  c->r[11]=c->r[10]|c->r[10]; // 8024794C
  c->lr=0x80247954u; f_800C2E8C(c); // 80247950
  c->r[0]=R32(c->r[10]+0x00000004u); // 80247954
  c->lr=c->r[0]; // 80247958
  c->r[1]=c->r[10]|c->r[10]; // 8024795C
  return; // 80247960
}

// __OSBootDol
void f_80247970(Ctx* __restrict c) {
  trace_call(0x80247970u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247970
  c->r[0]=c->lr; // 80247974
  W32(c->r[1]+0x00000044u,c->r[0]); // 80247978
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8024797C
  c->r[31]=c->r[3]|c->r[3]; // 80247980
  c->r[3]=c->r[1]+0x0000000Cu; // 80247984
  W32(c->r[1]+0x00000038u,c->r[30]); // 80247988
  c->r[30]=c->r[5]|c->r[5]; // 8024798C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80247990
  c->r[29]=c->r[4]|c->r[4]; // 80247994
  c->r[4]=c->r[1]+0x00000008u; // 80247998
  c->lr=0x802479A0u; f_8024B530(c); // 8024799C
  c->r[5]=c->r[31]|c->r[31]; // 802479A0
  c->r[3]=c->r[1]+0x00000010u; // 802479A4
  c->r[4]=c->r[13]+0xFFFF9140u; // 802479A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802479AC
  c->lr=0x802479B4u; f_800C8B00(c); // 802479B0
  cmps(c,0,(int32_t)c->r[30],0); // 802479B4
  c->r[31]=0u+0x00000000u; // 802479B8
  if (crb(c,2)) { goto L_802479DC; } // 802479BC
  c->r[3]=c->r[30]|c->r[30]; // 802479C0
  goto L_802479D0; // 802479C4
L_802479C8:;
  c->r[3]=c->r[3]+0x00000004u; // 802479C8
  c->r[31]=c->r[31]+0x00000001u; // 802479CC
L_802479D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802479D0
  cmps(c,0,(int32_t)c->r[0],0); // 802479D4
  if (!crb(c,2)) { IRQCHK(c); goto L_802479C8; } // 802479D8
L_802479DC:;
  c->r[0]=c->r[31]+0x00000002u; // 802479DC
  c->r[4]=0u+0x00000001u; // 802479E0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802479E4
  c->lr=0x802479ECu; f_80244900(c); // 802479E8
  c->r[6]=c->r[31]+0x00000001u; // 802479EC
  c->r[0]=c->r[1]+0x00000010u; // 802479F0
  cmps(c,1,(int32_t)c->r[6],1); // 802479F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 802479F8
  c->r[4]=0u+0x00000001u; // 802479FC
  if (!crb(c,5)) { goto L_80247B14; } // 80247A00
  cmps(c,0,(int32_t)c->r[31],8); // 80247A04
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 80247A08
  if (!crb(c,1)) { goto L_80247AE0; } // 80247A0C
  c->r[8]=0u+0x00000000u; // 80247A10
  c->r[9]=0u+0x00000000u; // 80247A14
  if (crb(c,4)) { goto L_80247A30; } // 80247A18
  c->r[5]=0u+0x80000000u; // 80247A1C
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 80247A20
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80247A24
  if (crb(c,1)) { goto L_80247A30; } // 80247A28
  c->r[9]=0u+0x00000001u; // 80247A2C
L_80247A30:;
  cmps(c,0,(int32_t)c->r[9],0); // 80247A30
  if (crb(c,2)) { goto L_80247A6C; } // 80247A34
  c->r[0]=c->r[31]+0x00000001u; // 80247A38
  c->r[5]=0u+0x00000001u; // 80247A3C
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 80247A40
  c->r[0]=c->r[6]+0x80000000u; // 80247A44
  cmpu(c,0,c->r[0],0x00000000u); // 80247A48
  if (!crb(c,2)) { goto L_80247A60; } // 80247A4C
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 80247A50
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80247A54
  if (crb(c,2)) { goto L_80247A60; } // 80247A58
  c->r[5]=0u+0x00000000u; // 80247A5C
L_80247A60:;
  cmps(c,0,(int32_t)c->r[5],0); // 80247A60
  if (crb(c,2)) { goto L_80247A6C; } // 80247A64
  c->r[8]=0u+0x00000001u; // 80247A68
L_80247A6C:;
  cmps(c,0,(int32_t)c->r[8],0); // 80247A6C
  if (crb(c,2)) { goto L_80247AE0; } // 80247A70
  c->r[0]=c->r[7]+0x00000006u; // 80247A74
  c->r[5]=c->r[30]+0x00000004u; // 80247A78
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80247A7C
  c->r[6]=c->r[3]+0x00000004u; // 80247A80
  c->ctr=c->r[0]; // 80247A84
  cmps(c,0,(int32_t)c->r[7],1); // 80247A88
  if (!crb(c,1)) { goto L_80247AE0; } // 80247A8C
L_80247A90:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80247A90
  c->r[4]=c->r[4]+0x00000008u; // 80247A94
  W32(c->r[6]+0x00000000u,c->r[0]); // 80247A98
  c->r[0]=R32(c->r[5]+0x00000000u); // 80247A9C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80247AA0
  c->r[0]=R32(c->r[5]+0x00000004u); // 80247AA4
  W32(c->r[6]+0x00000008u,c->r[0]); // 80247AA8
  c->r[0]=R32(c->r[5]+0x00000008u); // 80247AAC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80247AB0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80247AB4
  W32(c->r[6]+0x00000010u,c->r[0]); // 80247AB8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80247ABC
  W32(c->r[6]+0x00000014u,c->r[0]); // 80247AC0
  c->r[0]=R32(c->r[5]+0x00000014u); // 80247AC4
  W32(c->r[6]+0x00000018u,c->r[0]); // 80247AC8
  c->r[0]=R32(c->r[5]+0x00000018u); // 80247ACC
  c->r[5]=c->r[5]+0x00000020u; // 80247AD0
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 80247AD4
  c->r[6]=c->r[6]+0x00000020u; // 80247AD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80247A90; } // 80247ADC
L_80247AE0:;
  c->r[5]=c->r[31]+0x00000001u; // 80247AE0
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80247AE4
  c->r[0]=c->r[5]-c->r[4]; // 80247AE8
  c->r[6]=c->r[30]+c->r[7]; // 80247AEC
  c->r[7]=c->r[3]+c->r[7]; // 80247AF0
  c->ctr=c->r[0]; // 80247AF4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 80247AF8
  if (!crb(c,0)) { goto L_80247B14; } // 80247AFC
L_80247B00:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80247B00
  c->r[6]=c->r[6]+0x00000004u; // 80247B04
  W32(c->r[7]+0x00000000u,c->r[0]); // 80247B08
  c->r[7]=c->r[7]+0x00000004u; // 80247B0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80247B00; } // 80247B10
L_80247B14:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80247B14
  c->r[9]=c->r[3]|c->r[3]; // 80247B18
  c->r[6]=R32(c->r[1]+0x00000008u); // 80247B1C
  c->r[4]=c->r[29]|c->r[29]; // 80247B20
  c->r[8]=c->r[31]+0x00000001u; // 80247B24
  c->r[3]=0u+0xFFFFFFFFu; // 80247B28
  c->r[7]=0u+0x00000000u; // 80247B2C
  c->lr=0x80247B34u; f_80247210(c); // 80247B30
  c->r[0]=R32(c->r[1]+0x00000044u); // 80247B34
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80247B38
  c->r[30]=R32(c->r[1]+0x00000038u); // 80247B3C
  c->r[29]=R32(c->r[1]+0x00000034u); // 80247B40
  c->lr=c->r[0]; // 80247B44
  c->r[1]=c->r[1]+0x00000040u; // 80247B48
  return; // 80247B4C
}

// ScreenReport
void f_80247B50(Ctx* __restrict c) {
  trace_call(0x80247B50u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247B50
  c->r[0]=c->lr; // 80247B54
  W32(c->r[1]+0x00000184u,c->r[0]); // 80247B58
  c->r[11]=c->r[1]+0x00000180u; // 80247B5C
  c->lr=0x80247B64u; f_800C2E18(c); // 80247B60
  c->r[0]=c->r[5]+0xFFFFFFE8u; // 80247B64
  W32(c->r[1]+0x00000008u,c->r[3]); // 80247B68
  c->r[24]=c->r[4]|c->r[4]; // 80247B6C
  c->r[25]=c->r[6]|c->r[6]; // 80247B70
  W32(c->r[1]+0x00000130u,c->r[0]); // 80247B74
  c->r[26]=c->r[7]|c->r[7]; // 80247B78
  c->r[27]=c->r[8]|c->r[8]; // 80247B7C
  c->r[14]=c->r[9]|c->r[9]; // 80247B80
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 80247B84
  c->r[20]=0u+0x80810000u; // 80247B88
  c->r[21]=0u+0x88890000u; // 80247B8C
  c->r[31]=0u+0x00000000u; // 80247B90
  c->r[23]=0u+0x00000018u; // 80247B94
  c->r[22]=0u+0x00000003u; // 80247B98
L_80247B9C:;
  c->r[0]=R32(c->r[1]+0x00000130u); // 80247B9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 80247BA0
  if (crb(c,0)) { goto L_80247E60; } // 80247BA4
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[24]); // 80247BA8
  c->r[28]=c->r[26]|c->r[26]; // 80247BAC
  c->r[0]=c->r[26]+c->r[0]; // 80247BB0
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80247BB4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80247BB8
  c->r[29]=c->r[0]+c->r[3]; // 80247BBC
  goto L_80247E54; // 80247BC0
L_80247BC4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80247BC4
  cmps(c,0,(int32_t)c->r[0],10); // 80247BC8
  if (!crb(c,2)) { goto L_80247BDC; } // 80247BCC
  c->r[27]=c->r[27]+c->r[14]; // 80247BD0
  c->r[10]=c->r[10]+0x00000001u; // 80247BD4
  IRQCHK(c); goto L_80247B9C; // 80247BD8
L_80247BDC:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 80247BDC
  if (!crb(c,0)) { goto L_80247BEC; } // 80247BE0
  c->r[27]=c->r[27]+c->r[14]; // 80247BE4
  IRQCHK(c); goto L_80247B9C; // 80247BE8
L_80247BEC:;
  c->r[5]=0u+0x00000000u; // 80247BEC
  c->r[6]=0u+0x00000000u; // 80247BF0
  c->ctr=c->r[22]; // 80247BF4
L_80247BF8:;
  c->r[0]=rotl(c->r[5],0)&0x00000007u; // 80247BF8
  c->r[8]=c->r[5]+0x00000001u; // 80247BFC
  c->r[9]=c->r[0]+c->r[6]; // 80247C00
  c->r[16]=c->r[5]+0x00000003u; // 80247C04
  c->r[0]=rotl(c->r[8],29)&0x1FFFFFFFu; // 80247C08
  c->r[4]=c->r[1]+0x00000010u; // 80247C0C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80247C10
  c->r[8]=rotl(c->r[8],0)&0x00000007u; // 80247C14
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80247C18
  c->r[7]=c->r[5]+0x00000002u; // 80247C1C
  c->r[4]=c->r[4]+c->r[0]; // 80247C20
  c->r[18]=c->r[5]+0x00000004u; // 80247C24
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80247C28
  c->r[8]=c->r[8]+c->r[3]; // 80247C2C
  W32(c->r[4]+0x00000000u,c->r[31]); // 80247C30
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80247C34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80247C38
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 80247C3C
  W32(c->r[4]+0x00000020u,c->r[31]); // 80247C40
  c->r[3]=c->r[1]+0x00000010u; // 80247C44
  c->r[17]=rotl(c->r[16],29)&0x1FFFFFFFu; // 80247C48
  W32(c->r[4]+0x00000040u,c->r[31]); // 80247C4C
  c->r[0]=c->r[7]+c->r[0]; // 80247C50
  c->r[12]=c->r[5]+0x00000005u; // 80247C54
  c->r[11]=rotl(c->r[12],29)&0x1FFFFFFFu; // 80247C58
  {uint32_t ea=c->r[3]+c->r[8]; W32(ea,c->r[31]); c->r[3]=ea;} // 80247C5C
  c->r[9]=c->r[5]+0x00000006u; // 80247C60
  c->r[15]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80247C64
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 80247C68
  W32(c->r[3]+0x00000020u,c->r[31]); // 80247C6C
  c->r[19]=rotl(c->r[18],29)&0x1FFFFFFFu; // 80247C70
  c->r[4]=c->r[1]+0x00000010u; // 80247C74
  W32(c->r[3]+0x00000040u,c->r[31]); // 80247C78
  c->r[3]=rotl(c->r[16],0)&0x00000007u; // 80247C7C
  c->r[16]=(uint32_t)((int32_t)c->r[17]*(int32_t)24); // 80247C80
  c->r[7]=c->r[5]+0x00000007u; // 80247C84
  {uint32_t ea=c->r[4]+c->r[15]; W32(ea,c->r[31]); c->r[4]=ea;} // 80247C88
  c->r[15]=c->r[1]+0x00000010u; // 80247C8C
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80247C90
  W32(c->r[4]+0x00000020u,c->r[31]); // 80247C94
  c->r[3]=c->r[3]+c->r[16]; // 80247C98
  c->r[17]=rotl(c->r[18],0)&0x00000007u; // 80247C9C
  c->r[16]=(uint32_t)((int32_t)c->r[19]*(int32_t)24); // 80247CA0
  W32(c->r[4]+0x00000040u,c->r[31]); // 80247CA4
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80247CA8
  c->r[3]=c->r[15]|c->r[15]; // 80247CAC
  {uint32_t ea=c->r[15]+c->r[4]; W32(ea,c->r[31]); c->r[15]=ea;} // 80247CB0
  c->r[16]=c->r[17]+c->r[16]; // 80247CB4
  W32(c->r[15]+0x00000020u,c->r[31]); // 80247CB8
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)24); // 80247CBC
  c->r[12]=rotl(c->r[12],0)&0x00000007u; // 80247CC0
  c->r[16]=rotl(c->r[16],2)&0xFFFFFFFCu; // 80247CC4
  W32(c->r[15]+0x00000040u,c->r[31]); // 80247CC8
  c->r[4]=c->r[3]|c->r[3]; // 80247CCC
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 80247CD0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 80247CD4
  {uint32_t ea=c->r[3]+c->r[16]; W32(ea,c->r[31]); c->r[3]=ea;} // 80247CD8
  c->r[11]=c->r[12]+c->r[11]; // 80247CDC
  W32(c->r[3]+0x00000020u,c->r[31]); // 80247CE0
  c->r[7]=rotl(c->r[7],0)&0x00000007u; // 80247CE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80247CE8
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80247CEC
  W32(c->r[3]+0x00000040u,c->r[31]); // 80247CF0
  c->r[8]=c->r[9]+c->r[8]; // 80247CF4
  {uint32_t ea=c->r[4]+c->r[11]; W32(ea,c->r[31]); c->r[4]=ea;} // 80247CF8
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80247CFC
  c->r[8]=c->r[1]+0x00000010u; // 80247D00
  c->r[0]=c->r[7]+c->r[0]; // 80247D04
  W32(c->r[4]+0x00000020u,c->r[31]); // 80247D08
  c->r[8]=c->r[8]+c->r[3]; // 80247D0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80247D10
  c->r[3]=c->r[1]+0x00000010u; // 80247D14
  W32(c->r[4]+0x00000040u,c->r[31]); // 80247D18
  c->r[6]=c->r[6]+0x00000018u; // 80247D1C
  c->r[5]=c->r[5]+0x00000008u; // 80247D20
  W32(c->r[8]+0x00000000u,c->r[31]); // 80247D24
  W32(c->r[8]+0x00000020u,c->r[31]); // 80247D28
  W32(c->r[8]+0x00000040u,c->r[31]); // 80247D2C
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[31]); c->r[3]=ea;} // 80247D30
  W32(c->r[3]+0x00000020u,c->r[31]); // 80247D34
  W32(c->r[3]+0x00000040u,c->r[31]); // 80247D38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80247BF8; } // 80247D3C
  c->r[3]=c->r[10]|c->r[10]; // 80247D40
  c->r[4]=c->r[1]+0x00000010u; // 80247D44
  c->r[7]=c->r[1]+0x0000000Cu; // 80247D48
  c->r[5]=0u+0x00000000u; // 80247D4C
  c->r[6]=0u+0x00000006u; // 80247D50
  c->lr=0x80247D58u; f_80249230(c); // 80247D54
  c->r[10]=c->r[3]|c->r[3]; // 80247D58
  c->r[7]=0u+0x00000000u; // 80247D5C
  c->r[3]=0u+0x00000000u; // 80247D60
L_80247D64:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 80247D64
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 80247D68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80247D6C
  c->r[5]=c->r[1]+0x00000010u; // 80247D70
  c->r[4]=c->r[28]|c->r[28]; // 80247D74
  c->r[8]=0u+0x00000000u; // 80247D78
  c->r[0]=c->r[6]+c->r[0]; // 80247D7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80247D80
  c->r[5]=c->r[5]+c->r[0]; // 80247D84
  c->ctr=c->r[23]; // 80247D88
L_80247D8C:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 80247D8C
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 80247D90
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 80247D94
  c->r[6]=R32(c->r[5]+c->r[6]); // 80247D98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80247D9C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 80247DA0
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 80247DA4
  if (crb(c,2)) { goto L_80247E28; } // 80247DA8
  c->r[6]=R8(c->r[25]+0x00000000u); // 80247DAC
  c->r[0]=c->r[8]+c->r[3]; // 80247DB0
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80247DB4
  c->r[11]=c->r[20]+0xFFFF8081u; // 80247DB8
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 80247DBC
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80247DC0
  c->r[6]=c->r[29]+c->r[12]; // 80247DC4
  c->r[0]=c->r[21]+0xFFFF8889u; // 80247DC8
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 80247DCC
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 80247DD0
  c->r[9]=c->r[11]+c->r[9]; // 80247DD4
  c->r[9]=sraw(c,c->r[9],7); // 80247DD8
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 80247DDC
  c->r[9]=c->r[9]+c->r[11]; // 80247DE0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 80247DE4
  c->r[0]=c->r[0]+c->r[9]; // 80247DE8
  c->r[0]=sraw(c,c->r[0],3); // 80247DEC
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 80247DF0
  c->r[9]=c->r[0]+c->r[9]; // 80247DF4
  c->r[0]=c->r[9]+0x00000010u; // 80247DF8
  W8(c->r[29]+c->r[12],c->r[0]); // 80247DFC
  if (crb(c,2)) { goto L_80247E18; } // 80247E00
  c->r[0]=R8(c->r[25]+0x00000001u); // 80247E04
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 80247E08
  c->r[0]=R8(c->r[25]+0x00000002u); // 80247E0C
  W8(c->r[6]+0x00000001u,c->r[0]); // 80247E10
  goto L_80247E28; // 80247E14
L_80247E18:;
  c->r[0]=R8(c->r[25]+0x00000002u); // 80247E18
  W8(c->r[6]+0xFFFFFFFFu,c->r[0]); // 80247E1C
  c->r[0]=R8(c->r[25]+0x00000001u); // 80247E20
  W8(c->r[6]+0x00000001u,c->r[0]); // 80247E24
L_80247E28:;
  c->r[4]=c->r[4]+0x00000001u; // 80247E28
  c->r[8]=c->r[8]+0x00000001u; // 80247E2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80247D8C; } // 80247E30
  c->r[7]=c->r[7]+0x00000001u; // 80247E34
  c->r[3]=c->r[3]+c->r[24]; // 80247E38
  cmpu(c,0,c->r[7],0x00000018u); // 80247E3C
  if (crb(c,0)) { IRQCHK(c); goto L_80247D64; } // 80247E40
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80247E44
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80247E48
  c->r[28]=c->r[28]+c->r[3]; // 80247E4C
  c->r[29]=c->r[29]+c->r[0]; // 80247E50
L_80247E54:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 80247E54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80247E58
  if (!crb(c,2)) { IRQCHK(c); goto L_80247BC4; } // 80247E5C
L_80247E60:;
  c->r[11]=c->r[1]+0x00000180u; // 80247E60
  c->lr=0x80247E68u; f_800C2E64(c); // 80247E64
  c->r[0]=R32(c->r[1]+0x00000184u); // 80247E68
  c->lr=c->r[0]; // 80247E6C
  c->r[1]=c->r[1]+0x00000180u; // 80247E70
  return; // 80247E74
}

// ConfigureVideo
void f_80247E80(Ctx* __restrict c) {
  trace_call(0x80247E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247E80
  c->r[0]=c->lr; // 80247E84
  c->r[6]=0u+0x000001E0u; // 80247E88
  c->r[5]=0u+0x00000028u; // 80247E8C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80247E90
  c->r[0]=0u+0x00000280u; // 80247E94
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 80247E98
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 80247E9C
  W16(c->r[1]+0x00000010u,c->r[4]); // 80247EA0
  W16(c->r[1]+0x00000012u,c->r[5]); // 80247EA4
  W16(c->r[1]+0x00000016u,c->r[0]); // 80247EA8
  W16(c->r[1]+0x00000018u,c->r[4]); // 80247EAC
  c->lr=0x80247EB4u; f_8025E1F0(c); // 80247EB0
  cmps(c,0,(int32_t)c->r[3],0); // 80247EB4
  if (crb(c,2)) { goto L_80247ED8; } // 80247EB8
  cmpu(c,0,c->r[3],0x00000002u); // 80247EBC
  if (crb(c,2)) { goto L_80247ED8; } // 80247EC0
  cmpu(c,0,c->r[3],0x00000005u); // 80247EC4
  if (crb(c,2)) { goto L_80247F18; } // 80247EC8
  cmpu(c,0,c->r[3],0x00000001u); // 80247ECC
  if (crb(c,2)) { goto L_80247F5C; } // 80247ED0
  goto L_80247F74; // 80247ED4
L_80247ED8:;
  c->r[3]=0u+0xCC000000u; // 80247ED8
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 80247EDC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80247EE0
  if (crb(c,2)) { goto L_80247F00; } // 80247EE4
  c->r[0]=0u+0x00000000u; // 80247EE8
  c->r[3]=0u+0x00000002u; // 80247EEC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80247EF0
  W16(c->r[1]+0x00000014u,c->r[0]); // 80247EF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80247EF8
  goto L_80247F74; // 80247EFC
L_80247F00:;
  c->r[3]=0u+0x00000000u; // 80247F00
  c->r[0]=0u+0x00000001u; // 80247F04
  W32(c->r[1]+0x00000008u,c->r[3]); // 80247F08
  W16(c->r[1]+0x00000014u,c->r[3]); // 80247F0C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80247F10
  goto L_80247F74; // 80247F14
L_80247F18:;
  c->r[3]=0u+0xCC000000u; // 80247F18
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 80247F1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80247F20
  if (crb(c,2)) { goto L_80247F40; } // 80247F24
  c->r[0]=0u+0x00000000u; // 80247F28
  c->r[3]=0u+0x00000016u; // 80247F2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80247F30
  W16(c->r[1]+0x00000014u,c->r[0]); // 80247F34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80247F38
  goto L_80247F74; // 80247F3C
L_80247F40:;
  c->r[4]=0u+0x00000014u; // 80247F40
  c->r[3]=0u+0x00000000u; // 80247F44
  c->r[0]=0u+0x00000001u; // 80247F48
  W32(c->r[1]+0x00000008u,c->r[4]); // 80247F4C
  W16(c->r[1]+0x00000014u,c->r[3]); // 80247F50
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80247F54
  goto L_80247F74; // 80247F58
L_80247F5C:;
  c->r[4]=0u+0x00000004u; // 80247F5C
  c->r[3]=0u+0x0000002Fu; // 80247F60
  c->r[0]=0u+0x00000001u; // 80247F64
  W32(c->r[1]+0x00000008u,c->r[4]); // 80247F68
  W16(c->r[1]+0x00000014u,c->r[3]); // 80247F6C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80247F70
L_80247F74:;
  c->r[3]=c->r[1]+0x00000008u; // 80247F74
  c->lr=0x80247F7Cu; f_8025D510(c); // 80247F78
  c->r[3]=0u+0x00000000u; // 80247F7C
  c->r[4]=0u+0x00000000u; // 80247F80
  c->r[5]=0u+0x00000280u; // 80247F84
  c->r[6]=0u+0x000001E0u; // 80247F88
  c->lr=0x80247F90u; f_8025DBE0(c); // 80247F8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80247F90
  c->lr=c->r[0]; // 80247F94
  c->r[1]=c->r[1]+0x00000050u; // 80247F98
  return; // 80247F9C
}

// OSFatal
void f_80247FA0(Ctx* __restrict c) {
  trace_call(0x80247FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80247FA0
  c->r[0]=c->lr; // 80247FA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80247FA8
  c->r[11]=c->r[1]+0x00000030u; // 80247FAC
  c->lr=0x80247FB4u; f_800C2E40(c); // 80247FB0
  c->r[27]=c->r[3]|c->r[3]; // 80247FB4
  c->r[28]=c->r[4]|c->r[4]; // 80247FB8
  c->r[29]=c->r[5]|c->r[5]; // 80247FBC
  c->lr=0x80247FC4u; f_802494C0(c); // 80247FC0
  c->lr=0x80247FC8u; f_8024CE40(c); // 80247FC4
  c->r[24]=0u+0x804A0000u; // 80247FC8
  c->r[3]=c->r[24]+0xFFFFC520u; // 80247FCC
  c->lr=0x80247FD4u; f_802458A0(c); // 80247FD0
  c->r[3]=c->r[24]+0xFFFFC520u; // 80247FD4
  c->lr=0x80247FDCu; f_80245660(c); // 80247FD8
  c->lr=0x80247FE0u; f_80244D30(c); // 80247FDC
  c->lr=0x80247FE4u; f_8025CA30(c); // 80247FE0
  c->r[3]=0u+0x00000080u; // 80247FE4
  c->lr=0x80247FECu; f_80249910(c); // 80247FE8
  c->r[3]=0u+0x00000001u; // 80247FEC
  c->lr=0x80247FF4u; f_8025E0D0(c); // 80247FF0
  c->lr=0x80247FF8u; f_8025DF40(c); // 80247FF4
  c->r[3]=0u+0x00000000u; // 80247FF8
  c->lr=0x80248000u; f_8025C670(c); // 80247FFC
  c->r[3]=0u+0x00000000u; // 80248000
  c->lr=0x80248008u; f_8025C6C0(c); // 80248004
  c->lr=0x8024800Cu; f_802494E0(c); // 80248008
  c->lr=0x80248010u; f_8025E150(c); // 8024800C
  c->r[24]=c->r[3]|c->r[3]; // 80248010
L_80248014:;
  c->lr=0x80248018u; f_8025E150(c); // 80248014
  c->r[0]=c->r[3]-c->r[24]; // 80248018
  cmps(c,0,(int32_t)c->r[0],1); // 8024801C
  if (crb(c,0)) { IRQCHK(c); goto L_80248014; } // 80248020
  c->lr=0x80248028u; f_8024EAD0(c); // 80248024
  c->r[5]=0u+0x10620000u; // 80248028
  c->r[30]=c->r[4]|c->r[4]; // 8024802C
  c->r[31]=c->r[3]|c->r[3]; // 80248030
  c->r[25]=0u+0x80000000u; // 80248034
  c->r[24]=c->r[5]+0x00004DD3u; // 80248038
  c->r[26]=0u+0x00000000u; // 8024803C
L_80248040:;
  c->r[3]=0u+0x00000000u; // 80248040
  c->r[4]=0u+0x00000000u; // 80248044
  c->lr=0x8024804Cu; f_8024B5E0(c); // 80248048
  cmps(c,0,(int32_t)c->r[3],0); // 8024804C
  if (!crb(c,2)) { goto L_80248090; } // 80248050
  c->lr=0x80248058u; f_8024EAD0(c); // 80248054
  c->r[0]=R32(c->r[25]+0x000000F8u); // 80248058
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 8024805C
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 80248060
  c->r[4]=c->r[26]^0x80000000u; // 80248064
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80248068
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 8024806C
  c->r[0]=c->r[5]^0x80000000u; // 80248070
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 80248074
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 80248078
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 8024807C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80248080
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80248084
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80248088
  if (!crb(c,2)) { IRQCHK(c); goto L_80248040; } // 8024808C
L_80248090:;
  c->lr=0x80248094u; f_802494C0(c); // 80248090
  c->r[3]=0u+0x00000001u; // 80248094
  c->r[4]=0u+0x00000000u; // 80248098
  c->lr=0x802480A0u; f_8024B5E0(c); // 8024809C
  c->r[3]=0u+0x00000000u; // 802480A0
  c->r[4]=0u+0x00000000u; // 802480A4
  c->lr=0x802480ACu; f_80202B50(c); // 802480A8
  c->r[3]=0u+0x00000002u; // 802480AC
  c->r[4]=0u+0x00000000u; // 802480B0
  c->lr=0x802480B8u; f_80202B50(c); // 802480B4
  goto L_802480D4; // 802480B8
L_802480BC:;
  c->r[3]=0u+0x00000000u; // 802480BC
  c->lr=0x802480C4u; f_802028D0(c); // 802480C0
  c->r[3]=0u+0x00000000u; // 802480C4
  c->lr=0x802480CCu; f_80203070(c); // 802480C8
  c->r[3]=0u+0x00000000u; // 802480CC
  c->lr=0x802480D4u; f_802037F0(c); // 802480D0
L_802480D4:;
  c->r[3]=0u+0x00000000u; // 802480D4
  c->r[4]=0u+0x00000001u; // 802480D8
  c->r[5]=0u+0x00000000u; // 802480DC
  c->lr=0x802480E4u; f_802036F0(c); // 802480E0
  cmps(c,0,(int32_t)c->r[3],0); // 802480E4
  if (crb(c,2)) { IRQCHK(c); goto L_802480BC; } // 802480E8
  c->r[3]=0u+0x00000000u; // 802480EC
  c->lr=0x802480F4u; f_802037F0(c); // 802480F0
  c->r[3]=0u+0xCD000000u; // 802480F4
L_802480F8:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 802480F8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802480FC
  cmpu(c,0,c->r[0],0x00000001u); // 80248100
  if (crb(c,2)) { IRQCHK(c); goto L_802480F8; } // 80248104
  c->r[4]=0u+0x80240000u; // 80248108
  c->r[3]=0u+0x00000008u; // 8024810C
  c->r[4]=c->r[4]+0x00003AC0u; // 80248110
  c->lr=0x80248118u; f_802439F0(c); // 80248114
  c->lr=0x8024811Cu; f_80208740(c); // 80248118
  c->r[3]=0u+0x81400000u; // 8024811C
  c->lr=0x80248124u; f_802448F0(c); // 80248120
  c->r[4]=0u+0x80000000u; // 80248124
  c->r[3]=R32(c->r[4]+0x00000038u); // 80248128
  cmps(c,0,(int32_t)c->r[3],0); // 8024812C
  if (!crb(c,2)) { goto L_80248140; } // 80248130
  c->r[3]=R32(c->r[4]+0x00003110u); // 80248134
  c->lr=0x8024813Cu; f_802448C0(c); // 80248138
  goto L_80248144; // 8024813C
L_80248140:;
  c->lr=0x80248144u; f_802448C0(c); // 80248140
L_80248144:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80248144
  c->r[3]=0u+0x804A0000u; // 80248148
  {uint32_t ea=c->r[3]+0xFFFFC7E8u; W32(ea,c->r[0]); c->r[3]=ea;} // 8024814C
  c->r[0]=R32(c->r[28]+0x00000000u); // 80248150
  W32(c->r[3]+0x00000004u,c->r[0]); // 80248154
  W32(c->r[3]+0x00000008u,c->r[29]); // 80248158
  c->lr=0x80248160u; f_80244860(c); // 8024815C
  c->r[5]=0u+0x80250000u; // 80248160
  c->r[4]=c->r[3]|c->r[3]; // 80248164
  c->r[3]=c->r[5]+0xFFFF8190u; // 80248168
  c->lr=0x80248170u; f_80245840(c); // 8024816C
  c->r[11]=c->r[1]+0x00000030u; // 80248170
  c->lr=0x80248178u; f_800C2E8C(c); // 80248174
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248178
  c->lr=c->r[0]; // 8024817C
  c->r[1]=c->r[1]+0x00000030u; // 80248180
  return; // 80248184
}

// Halt
void f_80248190(Ctx* __restrict c) {
  trace_call(0x80248190u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80248190
  c->r[0]=c->lr; // 80248194
  W32(c->r[1]+0x00000054u,c->r[0]); // 80248198
  c->r[0]=0u+0x43300000u; // 8024819C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802481A0
  W32(c->r[1]+0x00000048u,c->r[30]); // 802481A4
  W32(c->r[1]+0x00000044u,c->r[29]); // 802481A8
  W32(c->r[1]+0x00000040u,c->r[28]); // 802481AC
  W32(c->r[1]+0x00000020u,c->r[0]); // 802481B0
  W32(c->r[1]+0x00000028u,c->r[0]); // 802481B4
  c->lr=0x802481BCu; f_802494E0(c); // 802481B8
  c->r[29]=0u+0x804A0000u; // 802481BC
  c->r[29]=c->r[29]+0xFFFFC7E8u; // 802481C0
  c->r[28]=R32(c->r[29]+0x00000008u); // 802481C4
  c->r[3]=c->r[28]|c->r[28]; // 802481C8
  c->lr=0x802481D0u; f_800C297C(c); // 802481CC
  c->r[30]=c->r[3]+0x00000001u; // 802481D0
  c->r[4]=0u+0x00000020u; // 802481D4
  c->r[3]=c->r[30]|c->r[30]; // 802481D8
  c->lr=0x802481E0u; f_80244900(c); // 802481DC
  c->r[4]=c->r[28]|c->r[28]; // 802481E0
  c->r[5]=c->r[30]|c->r[30]; // 802481E4
  c->lr=0x802481ECu; f_800C6104(c); // 802481E8
  W32(c->r[29]+0x00000008u,c->r[3]); // 802481EC
  c->r[3]=0u+0x000A0000u; // 802481F0
  c->r[3]=c->r[3]+0x00001004u; // 802481F4
  c->r[4]=0u+0x00000020u; // 802481F8
  c->lr=0x80248200u; f_80244900(c); // 802481FC
  c->r[31]=c->r[3]|c->r[3]; // 80248200
  c->lr=0x80248208u; f_80244890(c); // 80248204
  c->r[4]=c->r[3]|c->r[3]; // 80248208
  c->r[3]=c->r[31]|c->r[31]; // 8024820C
  c->lr=0x80248214u; f_80248E50(c); // 80248210
  c->r[3]=0u+0x00090000u; // 80248214
  c->r[4]=0u+0x00000020u; // 80248218
  c->r[3]=c->r[3]+0x00006000u; // 8024821C
  c->lr=0x80248224u; f_80244900(c); // 80248220
  c->r[0]=R32(c->r[29]+0x00000004u); // 80248224
  c->r[30]=c->r[3]|c->r[3]; // 80248228
  W32(c->r[1]+0x00000018u,c->r[0]); // 8024822C
  {uint32_t ea=c->r[2]+0xFFFFB2F8u; c->f[0]=RF64(ea);} // 80248230
  c->r[4]=R8(c->r[1]+0x0000001Au); // 80248234
  W32(c->r[1]+0x00000024u,c->r[4]); // 80248238
  c->r[0]=R8(c->r[1]+0x00000018u); // 8024823C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80248240
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 80248244
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80248248
  c->r[3]=R8(c->r[1]+0x00000019u); // 8024824C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 80248250
  W32(c->r[1]+0x00000024u,c->r[3]); // 80248254
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80248258
  {uint32_t ea=c->r[2]+0xFFFFB2CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024825C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80248260
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 80248264
  {uint32_t ea=c->r[2]+0xFFFFB2C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80248268
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8024826C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80248270
  {uint32_t ea=c->r[2]+0xFFFFB2D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248274
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 80248278
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8024827C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80248280
  W32(c->r[1]+0x00000024u,c->r[0]); // 80248284
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80248288
  {uint32_t ea=c->r[2]+0xFFFFB2D8u; c->f[9]=c->ps1[9]=RF32(ea);} // 8024828C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80248290
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 80248294
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80248298
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 8024829C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 802482A0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 802482A4
  {uint32_t ea=c->r[2]+0xFFFFB2DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802482A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802482AC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802482B0
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802482B4
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 802482B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 802482BC
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 802482C0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 802482C4
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 802482C8
  {uint32_t ea=c->r[2]+0xFFFFB2E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802482CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 802482D0
  W32(c->r[1]+0x00000024u,c->r[4]); // 802482D4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 802482D8
  {uint32_t ea=c->r[2]+0xFFFFB2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802482DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 802482E0
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 802482E4
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 802482E8
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[9]=c->ps1[9]=RF32(ea);} // 802482EC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 802482F0
  {uint32_t ea=c->r[2]+0xFFFFB2C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802482F4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 802482F8
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 802482FC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 80248300
  {uint32_t ea=c->r[2]+0xFFFFB2D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248304
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80248308
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 8024830C
  {uint32_t ea=c->r[2]+0xFFFFB2ECu; c->f[6]=c->ps1[6]=RF32(ea);} // 80248310
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 80248314
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80248318
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8024831C
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 80248320
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80248324
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 80248328
  fcmp(c,0,c->f[5],c->f[6]); // 8024832C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80248330
  if (!crb(c,1)) { goto L_8024833C; } // 80248334
  goto L_80248350; // 80248338
L_8024833C:;
  fcmp(c,0,c->f[5],c->f[9]); // 8024833C
  if (!crb(c,0)) { goto L_80248348; } // 80248340
  goto L_8024834C; // 80248344
L_80248348:;
  c->f[9]=c->f[5]; // 80248348
L_8024834C:;
  c->f[6]=c->f[9]; // 8024834C
L_80248350:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 80248350
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248354
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80248358
  fcmp(c,0,c->f[2],c->f[3]); // 8024835C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248360
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80248364
  if (!crb(c,1)) { goto L_80248370; } // 80248368
  goto L_80248384; // 8024836C
L_80248370:;
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248370
  fcmp(c,0,c->f[2],c->f[3]); // 80248374
  if (!crb(c,0)) { goto L_80248380; } // 80248378
  goto L_80248384; // 8024837C
L_80248380:;
  c->f[3]=c->f[2]; // 80248380
L_80248384:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80248384
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80248388
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8024838C
  fcmp(c,0,c->f[1],c->f[2]); // 80248390
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248394
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80248398
  if (!crb(c,1)) { goto L_802483A4; } // 8024839C
  goto L_802483B8; // 802483A0
L_802483A4:;
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802483A4
  fcmp(c,0,c->f[1],c->f[2]); // 802483A8
  if (!crb(c,0)) { goto L_802483B4; } // 802483AC
  goto L_802483B8; // 802483B0
L_802483B4:;
  c->f[2]=c->f[1]; // 802483B4
L_802483B8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802483B8
  c->r[0]=0u+0x00000000u; // 802483BC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802483C0
  c->r[4]=c->r[30]|c->r[30]; // 802483C4
  c->r[5]=0u+0x00000000u; // 802483C8
  c->r[0]=0u+0x00000014u; // 802483CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 802483D0
  c->r[3]=R32(c->r[1]+0x00000034u); // 802483D4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 802483D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802483DC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802483E0
  c->r[6]=R8(c->r[1]+0x0000001Du); // 802483E4
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 802483E8
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 802483EC
L_802483F0:;
  c->ctr=c->r[0]; // 802483F0
L_802483F4:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 802483F4
  W8(c->r[4]+0x00000001u,c->r[6]); // 802483F8
  W8(c->r[4]+0x00000002u,c->r[3]); // 802483FC
  W8(c->r[4]+0x00000003u,c->r[7]); // 80248400
  W8(c->r[4]+0x00000004u,c->r[3]); // 80248404
  W8(c->r[4]+0x00000005u,c->r[6]); // 80248408
  W8(c->r[4]+0x00000006u,c->r[3]); // 8024840C
  W8(c->r[4]+0x00000007u,c->r[7]); // 80248410
  W8(c->r[4]+0x00000008u,c->r[3]); // 80248414
  W8(c->r[4]+0x00000009u,c->r[6]); // 80248418
  W8(c->r[4]+0x0000000Au,c->r[3]); // 8024841C
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 80248420
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 80248424
  W8(c->r[4]+0x0000000Du,c->r[6]); // 80248428
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 8024842C
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 80248430
  W8(c->r[4]+0x00000010u,c->r[3]); // 80248434
  W8(c->r[4]+0x00000011u,c->r[6]); // 80248438
  W8(c->r[4]+0x00000012u,c->r[3]); // 8024843C
  W8(c->r[4]+0x00000013u,c->r[7]); // 80248440
  W8(c->r[4]+0x00000014u,c->r[3]); // 80248444
  W8(c->r[4]+0x00000015u,c->r[6]); // 80248448
  W8(c->r[4]+0x00000016u,c->r[3]); // 8024844C
  W8(c->r[4]+0x00000017u,c->r[7]); // 80248450
  W8(c->r[4]+0x00000018u,c->r[3]); // 80248454
  W8(c->r[4]+0x00000019u,c->r[6]); // 80248458
  W8(c->r[4]+0x0000001Au,c->r[3]); // 8024845C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 80248460
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 80248464
  W8(c->r[4]+0x0000001Du,c->r[6]); // 80248468
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 8024846C
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 80248470
  W8(c->r[4]+0x00000020u,c->r[3]); // 80248474
  W8(c->r[4]+0x00000021u,c->r[6]); // 80248478
  W8(c->r[4]+0x00000022u,c->r[3]); // 8024847C
  W8(c->r[4]+0x00000023u,c->r[7]); // 80248480
  W8(c->r[4]+0x00000024u,c->r[3]); // 80248484
  W8(c->r[4]+0x00000025u,c->r[6]); // 80248488
  W8(c->r[4]+0x00000026u,c->r[3]); // 8024848C
  W8(c->r[4]+0x00000027u,c->r[7]); // 80248490
  W8(c->r[4]+0x00000028u,c->r[3]); // 80248494
  W8(c->r[4]+0x00000029u,c->r[6]); // 80248498
  W8(c->r[4]+0x0000002Au,c->r[3]); // 8024849C
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 802484A0
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 802484A4
  W8(c->r[4]+0x0000002Du,c->r[6]); // 802484A8
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 802484AC
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 802484B0
  W8(c->r[4]+0x00000030u,c->r[3]); // 802484B4
  W8(c->r[4]+0x00000031u,c->r[6]); // 802484B8
  W8(c->r[4]+0x00000032u,c->r[3]); // 802484BC
  W8(c->r[4]+0x00000033u,c->r[7]); // 802484C0
  W8(c->r[4]+0x00000034u,c->r[3]); // 802484C4
  W8(c->r[4]+0x00000035u,c->r[6]); // 802484C8
  W8(c->r[4]+0x00000036u,c->r[3]); // 802484CC
  W8(c->r[4]+0x00000037u,c->r[7]); // 802484D0
  W8(c->r[4]+0x00000038u,c->r[3]); // 802484D4
  W8(c->r[4]+0x00000039u,c->r[6]); // 802484D8
  W8(c->r[4]+0x0000003Au,c->r[3]); // 802484DC
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 802484E0
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 802484E4
  W8(c->r[4]+0x0000003Du,c->r[6]); // 802484E8
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 802484EC
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 802484F0
  c->r[4]=c->r[4]+0x00000040u; // 802484F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802483F4; } // 802484F8
  c->r[5]=c->r[5]+0x00000001u; // 802484FC
  cmps(c,0,(int32_t)c->r[5],480); // 80248500
  if (crb(c,0)) { IRQCHK(c); goto L_802483F0; } // 80248504
  c->r[3]=c->r[30]|c->r[30]; // 80248508
  c->lr=0x80248510u; f_8025E060(c); // 8024850C
  c->r[3]=0u+0x00000280u; // 80248510
  c->r[4]=0u+0x000001E0u; // 80248514
  c->lr=0x8024851Cu; f_80247E80(c); // 80248518
  c->lr=0x80248520u; f_8025DF40(c); // 8024851C
  c->lr=0x80248524u; f_8025E150(c); // 80248520
  c->r[28]=c->r[3]|c->r[3]; // 80248524
L_80248528:;
  c->lr=0x8024852Cu; f_8025E150(c); // 80248528
  c->r[0]=c->r[3]-c->r[28]; // 8024852C
  cmps(c,0,(int32_t)c->r[0],2); // 80248530
  if (crb(c,0)) { IRQCHK(c); goto L_80248528; } // 80248534
  c->r[0]=R32(c->r[29]+0x00000000u); // 80248538
  W32(c->r[1]+0x00000010u,c->r[0]); // 8024853C
  {uint32_t ea=c->r[2]+0xFFFFB2F8u; c->f[0]=RF64(ea);} // 80248540
  c->r[4]=R8(c->r[1]+0x00000012u); // 80248544
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80248548
  c->r[0]=R8(c->r[1]+0x00000010u); // 8024854C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80248550
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 80248554
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 80248558
  c->r[3]=R8(c->r[1]+0x00000011u); // 8024855C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 80248560
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80248564
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80248568
  {uint32_t ea=c->r[2]+0xFFFFB2CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024856C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 80248570
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 80248574
  {uint32_t ea=c->r[2]+0xFFFFB2C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80248578
  W32(c->r[1]+0x00000024u,c->r[4]); // 8024857C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80248580
  {uint32_t ea=c->r[2]+0xFFFFB2D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248584
  c->f[11]=c->ps1[11]=S(c->f[2]*c->f[6]); // 80248588
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8024858C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80248590
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80248594
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80248598
  {uint32_t ea=c->r[2]+0xFFFFB2D8u; c->f[9]=c->ps1[9]=RF32(ea);} // 8024859C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 802485A0
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[3]); // 802485A4
  W32(c->r[1]+0x00000024u,c->r[3]); // 802485A8
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 802485AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 802485B0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 802485B4
  {uint32_t ea=c->r[2]+0xFFFFB2DCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802485B8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802485BC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802485C0
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802485C4
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[6]); // 802485C8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 802485CC
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 802485D0
  W32(c->r[1]+0x00000024u,c->r[3]); // 802485D4
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 802485D8
  {uint32_t ea=c->r[2]+0xFFFFB2E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802485DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 802485E0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 802485E4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 802485E8
  {uint32_t ea=c->r[2]+0xFFFFB2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802485EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 802485F0
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[5]); // 802485F4
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 802485F8
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[9]=c->ps1[9]=RF32(ea);} // 802485FC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80248600
  {uint32_t ea=c->r[2]+0xFFFFB2C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80248604
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80248608
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[10]); // 8024860C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 80248610
  {uint32_t ea=c->r[2]+0xFFFFB2D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248614
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80248618
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[6]); // 8024861C
  {uint32_t ea=c->r[2]+0xFFFFB2ECu; c->f[6]=c->ps1[6]=RF32(ea);} // 80248620
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[7]); // 80248624
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80248628
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8024862C
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 80248630
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80248634
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[1]); // 80248638
  fcmp(c,0,c->f[5],c->f[6]); // 8024863C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80248640
  if (!crb(c,1)) { goto L_8024864C; } // 80248644
  goto L_80248660; // 80248648
L_8024864C:;
  fcmp(c,0,c->f[5],c->f[9]); // 8024864C
  if (!crb(c,0)) { goto L_80248658; } // 80248650
  goto L_8024865C; // 80248654
L_80248658:;
  c->f[9]=c->f[5]; // 80248658
L_8024865C:;
  c->f[6]=c->f[9]; // 8024865C
L_80248660:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[6],true)); // 80248660
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248664
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80248668
  fcmp(c,0,c->f[2],c->f[3]); // 8024866C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248670
  W8(c->r[1]+0x00000008u,c->r[0]); // 80248674
  if (!crb(c,1)) { goto L_80248680; } // 80248678
  goto L_80248694; // 8024867C
L_80248680:;
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80248680
  fcmp(c,0,c->f[2],c->f[3]); // 80248684
  if (!crb(c,0)) { goto L_80248690; } // 80248688
  goto L_80248694; // 8024868C
L_80248690:;
  c->f[3]=c->f[2]; // 80248690
L_80248694:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80248694
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80248698
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8024869C
  fcmp(c,0,c->f[1],c->f[2]); // 802486A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802486A4
  W8(c->r[1]+0x00000009u,c->r[0]); // 802486A8
  if (!crb(c,1)) { goto L_802486B4; } // 802486AC
  goto L_802486C8; // 802486B0
L_802486B4:;
  {uint32_t ea=c->r[2]+0xFFFFB2C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802486B4
  fcmp(c,0,c->f[1],c->f[2]); // 802486B8
  if (!crb(c,0)) { goto L_802486C4; } // 802486BC
  goto L_802486C8; // 802486C0
L_802486C4:;
  c->f[2]=c->f[1]; // 802486C4
L_802486C8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802486C8
  c->r[0]=0u+0x00000000u; // 802486CC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802486D0
  c->r[3]=c->r[30]|c->r[30]; // 802486D4
  c->r[10]=R32(c->r[29]+0x00000008u); // 802486D8
  c->r[6]=c->r[1]+0x00000014u; // 802486DC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 802486E0
  c->r[4]=0u+0x00000280u; // 802486E4
  c->r[5]=0u+0x000001E0u; // 802486E8
  c->r[7]=0u+0x00000030u; // 802486EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802486F0
  c->r[8]=0u+0x00000064u; // 802486F4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802486F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802486FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80248700
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 80248704
  c->lr=0x8024870Cu; f_80247B50(c); // 80248708
  c->r[4]=0u+0x00090000u; // 8024870C
  c->r[3]=c->r[30]|c->r[30]; // 80248710
  c->r[4]=c->r[4]+0x00006000u; // 80248714
  c->lr=0x8024871Cu; f_80244E50(c); // 80248718
  c->r[3]=0u+0x00000000u; // 8024871C
  c->lr=0x80248724u; f_8025E0D0(c); // 80248720
  c->lr=0x80248728u; f_8025DF40(c); // 80248724
  c->lr=0x8024872Cu; f_8025E150(c); // 80248728
  c->r[30]=c->r[3]|c->r[3]; // 8024872C
L_80248730:;
  c->lr=0x80248734u; f_8025E150(c); // 80248730
  c->r[0]=c->r[3]-c->r[30]; // 80248734
  cmps(c,0,(int32_t)c->r[0],1); // 80248738
  if (crb(c,0)) { IRQCHK(c); goto L_80248730; } // 8024873C
  c->lr=0x80248744u; f_802494C0(c); // 80248740
  c->r[4]=R32(c->r[29]+0x00000008u); // 80248744
  c->r[3]=c->r[13]+0xFFFF9148u; // 80248748
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024874C
  c->lr=0x80248754u; f_80245CC0(c); // 80248750
  c->lr=0x80248758u; f_801CA5F0(c); // 80248754
  c->r[0]=R32(c->r[1]+0x00000054u); // 80248758
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8024875C
  c->r[30]=R32(c->r[1]+0x00000048u); // 80248760
  c->r[29]=R32(c->r[1]+0x00000044u); // 80248764
  c->r[28]=R32(c->r[1]+0x00000040u); // 80248768
  c->lr=c->r[0]; // 8024876C
  c->r[1]=c->r[1]+0x00000050u; // 80248770
  return; // 80248774
}

// GetFontCode
void f_80248780(Ctx* __restrict c) {
  trace_call(0x80248780u);
  cmpu(c,0,c->r[3],0x00000001u); // 80248780
  if (!crb(c,2)) { goto L_80248894; } // 80248784
  cmpu(c,0,c->r[4],0x00000020u); // 80248788
  if (crb(c,0)) { goto L_802487B0; } // 8024878C
  cmpu(c,0,c->r[4],0x000000DFu); // 80248790
  if (crb(c,1)) { goto L_802487B0; } // 80248794
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 80248798
  c->r[3]=0u+0x803B0000u; // 8024879C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802487A0
  c->r[3]=c->r[3]+0xFFFFDE60u; // 802487A4
  c->r[3]=R16(c->r[3]+c->r[0]); // 802487A8
  return; // 802487AC
L_802487B0:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 802487B0
  if (!crb(c,1)) { goto L_8024881C; } // 802487B4
  cmpu(c,0,c->r[4],0x00009872u); // 802487B8
  if (crb(c,1)) { goto L_8024881C; } // 802487BC
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 802487C0
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 802487C4
  c->r[3]=c->r[3]+0xFFFFFF78u; // 802487C8
  c->r[0]=0u+0x00000000u; // 802487CC
  cmpu(c,0,c->r[4],0x00000040u); // 802487D0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 802487D4
  if (crb(c,0)) { goto L_802487F0; } // 802487D8
  cmpu(c,0,c->r[4],0x000000FCu); // 802487DC
  if (crb(c,1)) { goto L_802487F0; } // 802487E0
  cmpu(c,0,c->r[4],0x0000007Fu); // 802487E4
  if (crb(c,2)) { goto L_802487F0; } // 802487E8
  c->r[0]=0u+0x00000001u; // 802487EC
L_802487F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802487F0
  if (!crb(c,2)) { goto L_80248800; } // 802487F4
  c->r[3]=0u+0x00000000u; // 802487F8
  return; // 802487FC
L_80248800:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 80248800
  cmps(c,0,(int32_t)c->r[4],64); // 80248804
  if (crb(c,0)) { goto L_80248810; } // 80248808
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8024880C
L_80248810:;
  c->r[3]=c->r[3]+c->r[4]; // 80248810
  c->r[3]=c->r[3]+0x000002BEu; // 80248814
  return; // 80248818
L_8024881C:;
  cmpu(c,0,c->r[4],0x00008140u); // 8024881C
  if (crb(c,0)) { goto L_802488B0; } // 80248820
  cmpu(c,0,c->r[4],0x0000879Eu); // 80248824
  if (!crb(c,0)) { goto L_802488B0; } // 80248828
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 8024882C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 80248830
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 80248834
  c->r[0]=0u+0x00000000u; // 80248838
  cmpu(c,0,c->r[4],0x00000040u); // 8024883C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 80248840
  if (crb(c,0)) { goto L_8024885C; } // 80248844
  cmpu(c,0,c->r[4],0x000000FCu); // 80248848
  if (crb(c,1)) { goto L_8024885C; } // 8024884C
  cmpu(c,0,c->r[4],0x0000007Fu); // 80248850
  if (crb(c,2)) { goto L_8024885C; } // 80248854
  c->r[0]=0u+0x00000001u; // 80248858
L_8024885C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024885C
  if (!crb(c,2)) { goto L_8024886C; } // 80248860
  c->r[3]=0u+0x00000000u; // 80248864
  return; // 80248868
L_8024886C:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 8024886C
  cmps(c,0,(int32_t)c->r[4],64); // 80248870
  if (crb(c,0)) { goto L_8024887C; } // 80248874
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80248878
L_8024887C:;
  c->r[0]=c->r[3]+c->r[4]; // 8024887C
  c->r[3]=0u+0x803B0000u; // 80248880
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80248884
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 80248888
  c->r[3]=R16(c->r[3]+c->r[0]); // 8024888C
  return; // 80248890
L_80248894:;
  c->r[3]=c->r[4]+0x00010000u; // 80248894
  c->r[0]=c->r[3]+0xFFFFFFDFu; // 80248898
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8024889C
  cmpu(c,0,c->r[0],0x000000DEu); // 802488A0
  if (crb(c,1)) { goto L_802488B0; } // 802488A4
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 802488A8
  return; // 802488AC
L_802488B0:;
  c->r[3]=0u+0x00000000u; // 802488B0
  return; // 802488B4
}

// Decode
void f_802488C0(Ctx* __restrict c) {
  trace_call(0x802488C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802488C0
  c->r[0]=c->lr; // 802488C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802488C8
  c->r[11]=c->r[1]+0x00000020u; // 802488CC
  c->lr=0x802488D4u; f_800C2E48(c); // 802488D0
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 802488D4
  c->r[30]=c->r[3]+0x00000010u; // 802488D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802488DC
  c->r[8]=0u+0x00000000u; // 802488E0
  c->r[29]=c->r[3]+c->r[5]; // 802488E4
  c->r[9]=R32(c->r[3]+0x00000008u); // 802488E8
  c->r[11]=0u+0x00000000u; // 802488EC
  c->r[5]=0u+0x80000000u; // 802488F0
  c->r[0]=c->r[0]|0x00000000u; // 802488F4
L_802488F8:;
  cmps(c,0,(int32_t)c->r[11],0); // 802488F8
  if (!crb(c,2)) { goto L_8024890C; } // 802488FC
  c->r[12]=R32(c->r[30]+0x00000000u); // 80248900
  c->r[11]=0u+0x00000020u; // 80248904
  c->r[30]=c->r[30]+0x00000004u; // 80248908
L_8024890C:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 8024890C
  if (crb(c,2)) { goto L_80248928; } // 80248910
  c->r[6]=R8(c->r[29]+0x00000000u); // 80248914
  c->r[29]=c->r[29]+0x00000001u; // 80248918
  W8(c->r[4]+c->r[8],c->r[6]); // 8024891C
  c->r[8]=c->r[8]+0x00000001u; // 80248920
  goto L_80248A40; // 80248924
L_80248928:;
  c->r[7]=c->r[3]+c->r[9]; // 80248928
  c->r[6]=R8(c->r[3]+c->r[9]); // 8024892C
  c->r[7]=R8(c->r[7]+0x00000001u); // 80248930
  c->r[9]=c->r[9]+0x00000002u; // 80248934
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80248938
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 8024893C
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 80248940
  c->r[7]=c->r[8]-c->r[6]; // 80248944
  if (!crb(c,2)) { goto L_8024895C; } // 80248948
  c->r[6]=R8(c->r[29]+0x00000000u); // 8024894C
  c->r[29]=c->r[29]+0x00000001u; // 80248950
  c->r[10]=c->r[6]+0x00000012u; // 80248954
  goto L_80248960; // 80248958
L_8024895C:;
  c->r[10]=c->r[10]+0x00000002u; // 8024895C
L_80248960:;
  cmps(c,1,(int32_t)c->r[10],0); // 80248960
  c->r[6]=0u+0x00000000u; // 80248964
  if (!crb(c,5)) { goto L_80248A40; } // 80248968
  cmps(c,0,(int32_t)c->r[10],8); // 8024896C
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 80248970
  if (!crb(c,1)) { goto L_80248A0C; } // 80248974
  c->r[28]=0u+0x00000000u; // 80248978
  if (crb(c,4)) { goto L_80248990; } // 8024897C
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 80248980
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 80248984
  if (crb(c,1)) { goto L_80248990; } // 80248988
  c->r[28]=0u+0x00000001u; // 8024898C
L_80248990:;
  cmps(c,0,(int32_t)c->r[28],0); // 80248990
  if (crb(c,2)) { goto L_80248A0C; } // 80248994
  c->r[31]=c->r[27]+0x00000007u; // 80248998
  c->r[28]=c->r[4]+c->r[8]; // 8024899C
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 802489A0
  c->ctr=c->r[31]; // 802489A4
  cmps(c,0,(int32_t)c->r[27],0); // 802489A8
  if (!crb(c,1)) { goto L_80248A0C; } // 802489AC
L_802489B0:;
  c->r[26]=c->r[4]+c->r[7]; // 802489B0
  c->r[27]=c->r[8]+c->r[4]; // 802489B4
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 802489B8
  c->r[8]=c->r[8]+0x00000008u; // 802489BC
  W8(c->r[28]+0x00000000u,c->r[31]); // 802489C0
  c->r[28]=c->r[28]+0x00000008u; // 802489C4
  c->r[6]=c->r[6]+0x00000008u; // 802489C8
  c->r[31]=R8(c->r[4]+c->r[7]); // 802489CC
  c->r[7]=c->r[7]+0x00000008u; // 802489D0
  W8(c->r[27]+0x00000001u,c->r[31]); // 802489D4
  c->r[31]=R8(c->r[26]+0x00000001u); // 802489D8
  W8(c->r[27]+0x00000002u,c->r[31]); // 802489DC
  c->r[31]=R8(c->r[26]+0x00000002u); // 802489E0
  W8(c->r[27]+0x00000003u,c->r[31]); // 802489E4
  c->r[31]=R8(c->r[26]+0x00000003u); // 802489E8
  W8(c->r[27]+0x00000004u,c->r[31]); // 802489EC
  c->r[31]=R8(c->r[26]+0x00000004u); // 802489F0
  W8(c->r[27]+0x00000005u,c->r[31]); // 802489F4
  c->r[31]=R8(c->r[26]+0x00000005u); // 802489F8
  W8(c->r[27]+0x00000006u,c->r[31]); // 802489FC
  c->r[31]=R8(c->r[26]+0x00000006u); // 80248A00
  W8(c->r[27]+0x00000007u,c->r[31]); // 80248A04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802489B0; } // 80248A08
L_80248A0C:;
  c->r[31]=c->r[10]-c->r[6]; // 80248A0C
  c->r[28]=c->r[4]+c->r[8]; // 80248A10
  c->ctr=c->r[31]; // 80248A14
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 80248A18
  if (!crb(c,0)) { goto L_80248A40; } // 80248A1C
L_80248A20:;
  c->r[10]=c->r[4]+c->r[7]; // 80248A20
  c->r[7]=c->r[7]+0x00000001u; // 80248A24
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 80248A28
  c->r[6]=c->r[6]+0x00000001u; // 80248A2C
  W8(c->r[28]+0x00000000u,c->r[10]); // 80248A30
  c->r[28]=c->r[28]+0x00000001u; // 80248A34
  c->r[8]=c->r[8]+0x00000001u; // 80248A38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80248A20; } // 80248A3C
L_80248A40:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80248A40
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 80248A44
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 80248A48
  if (crb(c,0)) { IRQCHK(c); goto L_802488F8; } // 80248A4C
  c->r[11]=c->r[1]+0x00000020u; // 80248A50
  c->lr=0x80248A58u; f_800C2E94(c); // 80248A54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80248A58
  c->lr=c->r[0]; // 80248A5C
  c->r[1]=c->r[1]+0x00000020u; // 80248A60
  return; // 80248A64
}

// fn_80248A70
void f_80248A70(Ctx* __restrict c) {
  trace_call(0x80248A70u);
  c->r[3]=R16(c->r[13]+0xFFFF9150u); // 80248A70
  cmpu(c,0,c->r[3],0x0000FFFFu); // 80248A74
  if (!crb(c,2)) return; // 80248A78
  c->r[3]=0u+0x80000000u; // 80248A7C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 80248A80
  cmps(c,0,(int32_t)c->r[0],0); // 80248A84
  if (!crb(c,2)) { goto L_80248AA0; } // 80248A88
  c->r[3]=0u+0xCC000000u; // 80248A8C
  c->r[0]=R16(c->r[3]+0x0000206Eu); // 80248A90
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80248A94
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248A98
  goto L_80248AA8; // 80248A9C
L_80248AA0:;
  c->r[0]=0u+0x00000000u; // 80248AA0
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248AA4
L_80248AA8:;
  c->r[4]=0u+0x80250000u; // 80248AA8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80248AAC
  c->r[4]=c->r[4]+0xFFFF8F70u; // 80248AB0
  W32(c->r[13]+0xFFFF9E00u,c->r[4]); // 80248AB4
  return; // 80248AB8
}

// OSSetFontEncode
void f_80248AC0(Ctx* __restrict c) {
  trace_call(0x80248AC0u);
  c->r[0]=R16(c->r[13]+0xFFFF9150u); // 80248AC0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80248AC4
  if (crb(c,2)) { goto L_80248AD0; } // 80248AC8
  goto L_80248B0C; // 80248ACC
L_80248AD0:;
  c->r[4]=0u+0x80000000u; // 80248AD0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80248AD4
  cmps(c,0,(int32_t)c->r[0],0); // 80248AD8
  if (!crb(c,2)) { goto L_80248AF4; } // 80248ADC
  c->r[4]=0u+0xCC000000u; // 80248AE0
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80248AE4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80248AE8
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248AEC
  goto L_80248AFC; // 80248AF0
L_80248AF4:;
  c->r[0]=0u+0x00000000u; // 80248AF4
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248AF8
L_80248AFC:;
  c->r[4]=0u+0x80250000u; // 80248AFC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80248B00
  c->r[4]=c->r[4]+0xFFFF8F70u; // 80248B04
  W32(c->r[13]+0xFFFF9E00u,c->r[4]); // 80248B08
L_80248B0C:;
  cmpu(c,1,c->r[3],0x00000005u); // 80248B0C
  if (crb(c,5)) { goto L_80248B30; } // 80248B10
  cmpu(c,0,c->r[3],0x00000003u); // 80248B14
  W16(c->r[13]+0xFFFF9150u,c->r[3]); // 80248B18
  if (crb(c,0)) { goto L_80248B30; } // 80248B1C
  if (crb(c,5)) { goto L_80248B30; } // 80248B20
  c->r[3]=0u+0x80250000u; // 80248B24
  c->r[3]=c->r[3]+0xFFFF9070u; // 80248B28
  W32(c->r[13]+0xFFFF9E00u,c->r[3]); // 80248B2C
L_80248B30:;
  c->r[3]=c->r[0]|c->r[0]; // 80248B30
  return; // 80248B34
}

// ReadFont
void f_80248B40(Ctx* __restrict c) {
  trace_call(0x80248B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80248B40
  c->r[0]=c->lr; // 80248B44
  W32(c->r[1]+0x00000034u,c->r[0]); // 80248B48
  c->r[11]=c->r[1]+0x00000030u; // 80248B4C
  c->lr=0x80248B54u; f_800C2E44(c); // 80248B50
  cmpu(c,0,c->r[4],0x00000001u); // 80248B54
  c->r[28]=c->r[3]|c->r[3]; // 80248B58
  c->r[29]=c->r[4]|c->r[4]; // 80248B5C
  c->r[30]=c->r[5]|c->r[5]; // 80248B60
  if (!crb(c,2)) { goto L_80248BC0; } // 80248B64
  c->r[4]=0u+0x001B0000u; // 80248B68
  c->r[3]=0u+0x00050000u; // 80248B6C
  c->r[31]=c->r[28]|c->r[28]; // 80248B70
  c->r[26]=c->r[4]+0xFFFFFF00u; // 80248B74
  c->r[27]=c->r[3]+0xFFFFD000u; // 80248B78
  goto L_80248BB4; // 80248B7C
L_80248B80:;
  cmps(c,0,(int32_t)c->r[27],256); // 80248B80
  c->r[25]=0u+0x00000100u; // 80248B84
  if (crb(c,1)) { goto L_80248B90; } // 80248B88
  c->r[25]=c->r[27]|c->r[27]; // 80248B8C
L_80248B90:;
  c->r[27]=c->r[27]-c->r[25]; // 80248B90
L_80248B94:;
  c->r[3]=c->r[31]|c->r[31]; // 80248B94
  c->r[4]=c->r[25]|c->r[25]; // 80248B98
  c->r[5]=c->r[26]|c->r[26]; // 80248B9C
  c->lr=0x80248BA4u; f_8024C520(c); // 80248BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80248BA4
  if (crb(c,2)) { IRQCHK(c); goto L_80248B94; } // 80248BA8
  c->r[26]=c->r[26]+c->r[25]; // 80248BAC
  c->r[31]=c->r[31]+c->r[25]; // 80248BB0
L_80248BB4:;
  cmps(c,0,(int32_t)c->r[27],0); // 80248BB4
  if (crb(c,1)) { IRQCHK(c); goto L_80248B80; } // 80248BB8
  goto L_80248C10; // 80248BBC
L_80248BC0:;
  c->r[3]=0u+0x00200000u; // 80248BC0
  c->r[26]=c->r[28]|c->r[28]; // 80248BC4
  c->r[31]=c->r[3]+0xFFFFCF00u; // 80248BC8
  c->r[27]=0u+0x00003000u; // 80248BCC
  goto L_80248C08; // 80248BD0
L_80248BD4:;
  cmps(c,0,(int32_t)c->r[27],256); // 80248BD4
  c->r[25]=0u+0x00000100u; // 80248BD8
  if (crb(c,1)) { goto L_80248BE4; } // 80248BDC
  c->r[25]=c->r[27]|c->r[27]; // 80248BE0
L_80248BE4:;
  c->r[27]=c->r[27]-c->r[25]; // 80248BE4
L_80248BE8:;
  c->r[3]=c->r[26]|c->r[26]; // 80248BE8
  c->r[4]=c->r[25]|c->r[25]; // 80248BEC
  c->r[5]=c->r[31]|c->r[31]; // 80248BF0
  c->lr=0x80248BF8u; f_8024C520(c); // 80248BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80248BF8
  if (crb(c,2)) { IRQCHK(c); goto L_80248BE8; } // 80248BFC
  c->r[31]=c->r[31]+c->r[25]; // 80248C00
  c->r[26]=c->r[26]+c->r[25]; // 80248C04
L_80248C08:;
  cmps(c,0,(int32_t)c->r[27],0); // 80248C08
  if (crb(c,1)) { IRQCHK(c); goto L_80248BD4; } // 80248C0C
L_80248C10:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80248C10
  cmpu(c,0,c->r[0],0x00000059u); // 80248C14
  if (!crb(c,2)) { goto L_80248C3C; } // 80248C18
  c->r[0]=R8(c->r[28]+0x00000001u); // 80248C1C
  cmpu(c,0,c->r[0],0x00000061u); // 80248C20
  if (!crb(c,2)) { goto L_80248C3C; } // 80248C24
  c->r[0]=R8(c->r[28]+0x00000002u); // 80248C28
  cmpu(c,0,c->r[0],0x00000079u); // 80248C2C
  if (!crb(c,2)) { goto L_80248C3C; } // 80248C30
  c->r[31]=R32(c->r[28]+0x00000004u); // 80248C34
  goto L_80248C40; // 80248C38
L_80248C3C:;
  c->r[31]=0u+0x00000000u; // 80248C3C
L_80248C40:;
  cmps(c,0,(int32_t)c->r[31],0); // 80248C40
  if (!crb(c,2)) { goto L_80248C50; } // 80248C44
  c->r[3]=0u+0x00000000u; // 80248C48
  goto L_80248E38; // 80248C4C
L_80248C50:;
  c->r[3]=c->r[28]|c->r[28]; // 80248C50
  c->r[4]=c->r[30]|c->r[30]; // 80248C54
  c->lr=0x80248C5Cu; f_802488C0(c); // 80248C58
  cmpu(c,0,c->r[29],0x00000001u); // 80248C5C
  if (!crb(c,2)) { goto L_80248E34; } // 80248C60
  c->r[5]=R32(c->r[2]+0xFFFFB300u); // 80248C64
  c->r[3]=c->r[29]|c->r[29]; // 80248C68
  c->r[0]=R32(c->r[2]+0xFFFFB304u); // 80248C6C
  c->r[4]=0u+0x00000054u; // 80248C70
  W32(c->r[1]+0x00000008u,c->r[5]); // 80248C74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80248C78
  c->lr=0x80248C80u; f_80248780(c); // 80248C7C
  c->r[11]=R16(c->r[30]+0x0000001Au); // 80248C80
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 80248C84
  c->r[0]=R16(c->r[30]+0x0000001Eu); // 80248C88
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[4]); // 80248C8C
  c->r[5]=R32(c->r[30]+0x00000024u); // 80248C90
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 80248C94
  c->r[6]=R16(c->r[30]+0x00000012u); // 80248C98
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 80248C9C
  c->r[7]=R16(c->r[30]+0x00000010u); // 80248CA0
  c->r[25]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 80248CA4
  c->r[0]=c->r[0]+c->r[4]; // 80248CA8
  c->r[10]=R32(c->r[30]+0x00000014u); // 80248CAC
  c->r[4]=c->r[30]+c->r[5]; // 80248CB0
  c->r[28]=sraw(c,c->r[0],1); // 80248CB4
  c->r[8]=R16(c->r[1]+0x00000008u); // 80248CB8
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[9]); // 80248CBC
  c->r[9]=R16(c->r[1]+0x0000000Au); // 80248CC0
  c->r[3]=c->r[3]-c->r[0]; // 80248CC4
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[11]); // 80248CC8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 80248CCC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80248CD0
  c->r[26]=c->r[3]-c->r[0]; // 80248CD4
  c->r[6]=c->r[5]+0x00000004u; // 80248CD8
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[7]); // 80248CDC
  c->r[11]=c->r[5]+0x00000005u; // 80248CE0
  c->r[3]=sraw(c,c->r[6],3); // 80248CE4
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 80248CE8
  c->r[12]=addc(c,c->r[3],0,c->xer_ca); // 80248CEC
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 80248CF0
  c->r[29]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 80248CF4
  c->r[3]=sraw(c,c->r[26],3); // 80248CF8
  c->r[0]=c->r[0]-c->r[7]; // 80248CFC
  c->r[10]=addc(c,c->r[3],0,c->xer_ca); // 80248D00
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80248D04
  c->r[0]=rotl(c->r[26],29)&0xE0000000u; // 80248D08
  c->r[6]=rotl(c->r[26],1)&0x00000001u; // 80248D0C
  c->r[29]=rotl(c->r[29],31)&0x7FFFFFFFu; // 80248D10
  c->r[12]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[12]); // 80248D14
  c->r[7]=c->r[3]+c->r[7]; // 80248D18
  c->r[0]=c->r[0]-c->r[6]; // 80248D1C
  c->r[4]=c->r[4]+c->r[29]; // 80248D20
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 80248D24
  c->r[0]=rotl(c->r[10],4)&0xFFFFFFF0u; // 80248D28
  c->r[3]=c->r[3]+c->r[6]; // 80248D2C
  c->r[12]=c->r[4]+c->r[12]; // 80248D30
  c->r[10]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80248D34
  c->r[6]=rotl(c->r[11],29)&0xE0000000u; // 80248D38
  c->r[3]=sraw(c,c->r[3],2); // 80248D3C
  c->r[12]=c->r[12]+c->r[0]; // 80248D40
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80248D44
  c->r[6]=c->r[6]-c->r[7]; // 80248D48
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 80248D4C
  c->r[12]=c->r[12]+c->r[10]; // 80248D50
  W16(c->r[12]+c->r[3],c->r[8]); // 80248D54
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80248D58
  c->r[6]=c->r[6]+c->r[7]; // 80248D5C
  c->r[8]=c->r[5]+0x00000006u; // 80248D60
  c->r[12]=R16(c->r[30]+0x0000001Eu); // 80248D64
  c->r[10]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80248D68
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 80248D6C
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 80248D70
  c->r[28]=rotl(c->r[12],2)&0xFFFFFFE0u; // 80248D74
  c->r[12]=rotl(c->r[12],3)&0x00000001u; // 80248D78
  c->r[12]=c->r[12]+c->r[28]; // 80248D7C
  c->r[6]=c->r[6]-c->r[7]; // 80248D80
  c->r[12]=sraw(c,c->r[12],1); // 80248D84
  c->r[11]=sraw(c,c->r[11],3); // 80248D88
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80248D8C
  c->r[11]=addc(c,c->r[11],0,c->xer_ca); // 80248D90
  c->r[6]=c->r[6]+c->r[7]; // 80248D94
  c->r[11]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 80248D98
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80248D9C
  c->r[7]=c->r[4]+c->r[11]; // 80248DA0
  c->r[7]=c->r[7]+c->r[0]; // 80248DA4
  c->r[7]=c->r[7]+c->r[10]; // 80248DA8
  W16(c->r[7]+c->r[3],c->r[9]); // 80248DAC
  c->r[7]=R16(c->r[30]+0x0000001Eu); // 80248DB0
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 80248DB4
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 80248DB8
  c->r[7]=c->r[7]+c->r[9]; // 80248DBC
  c->r[9]=sraw(c,c->r[7],1); // 80248DC0
  c->r[7]=sraw(c,c->r[8],3); // 80248DC4
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 80248DC8
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 80248DCC
  c->r[7]=c->r[4]+c->r[7]; // 80248DD0
  c->r[7]=c->r[7]+c->r[0]; // 80248DD4
  c->r[7]=c->r[7]+c->r[6]; // 80248DD8
  c->r[6]=R16(c->r[1]+0x0000000Cu); // 80248DDC
  c->r[8]=c->r[5]+0x00000007u; // 80248DE0
  W16(c->r[7]+c->r[3],c->r[6]); // 80248DE4
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 80248DE8
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 80248DEC
  c->r[5]=R16(c->r[1]+0x0000000Eu); // 80248DF0
  c->r[9]=R16(c->r[30]+0x0000001Eu); // 80248DF4
  c->r[6]=c->r[6]-c->r[7]; // 80248DF8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80248DFC
  c->r[10]=rotl(c->r[9],2)&0xFFFFFFE0u; // 80248E00
  c->r[9]=rotl(c->r[9],3)&0x00000001u; // 80248E04
  c->r[9]=c->r[9]+c->r[10]; // 80248E08
  c->r[6]=c->r[6]+c->r[7]; // 80248E0C
  c->r[9]=sraw(c,c->r[9],1); // 80248E10
  c->r[7]=sraw(c,c->r[8],3); // 80248E14
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80248E18
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 80248E1C
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 80248E20
  c->r[4]=c->r[4]+c->r[7]; // 80248E24
  c->r[4]=c->r[4]+c->r[0]; // 80248E28
  c->r[4]=c->r[4]+c->r[6]; // 80248E2C
  W16(c->r[4]+c->r[3],c->r[5]); // 80248E30
L_80248E34:;
  c->r[3]=c->r[31]|c->r[31]; // 80248E34
L_80248E38:;
  c->r[11]=c->r[1]+0x00000030u; // 80248E38
  c->lr=0x80248E40u; f_800C2E90(c); // 80248E3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80248E40
  c->lr=c->r[0]; // 80248E44
  c->r[1]=c->r[1]+0x00000030u; // 80248E48
  return; // 80248E4C
}

// OSLoadFont
void f_80248E50(Ctx* __restrict c) {
  trace_call(0x80248E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80248E50
  c->r[0]=c->lr; // 80248E54
  c->r[5]=c->r[3]|c->r[3]; // 80248E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80248E5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80248E60
  W32(c->r[1]+0x00000008u,c->r[30]); // 80248E64
  c->r[30]=c->r[4]|c->r[4]; // 80248E68
  c->r[0]=R16(c->r[13]+0xFFFF9150u); // 80248E6C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80248E70
  if (crb(c,2)) { goto L_80248E7C; } // 80248E74
  goto L_80248EB8; // 80248E78
L_80248E7C:;
  c->r[4]=0u+0x80000000u; // 80248E7C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80248E80
  cmps(c,0,(int32_t)c->r[0],0); // 80248E84
  if (!crb(c,2)) { goto L_80248EA0; } // 80248E88
  c->r[4]=0u+0xCC000000u; // 80248E8C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80248E90
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80248E94
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248E98
  goto L_80248EA8; // 80248E9C
L_80248EA0:;
  c->r[0]=0u+0x00000000u; // 80248EA0
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80248EA4
L_80248EA8:;
  c->r[4]=0u+0x80250000u; // 80248EA8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80248EAC
  c->r[4]=c->r[4]+0xFFFF8F70u; // 80248EB0
  W32(c->r[13]+0xFFFF9E00u,c->r[4]); // 80248EB4
L_80248EB8:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80248EB8
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 80248EBC
  cmpu(c,0,c->r[0],0x00000002u); // 80248EC0
  if (!crb(c,1)) { goto L_80248F0C; } // 80248EC4
  cmps(c,0,(int32_t)c->r[4],0); // 80248EC8
  if (crb(c,2)) { goto L_80248EDC; } // 80248ECC
  cmps(c,0,(int32_t)c->r[4],1); // 80248ED0
  if (crb(c,2)) { goto L_80248EF4; } // 80248ED4
  goto L_80248F48; // 80248ED8
L_80248EDC:;
  W32(c->r[13]+0xFFFF9E0Cu,c->r[3]); // 80248EDC
  c->r[3]=c->r[30]|c->r[30]; // 80248EE0
  c->r[4]=0u+0x00000000u; // 80248EE4
  c->lr=0x80248EECu; f_80248B40(c); // 80248EE8
  c->r[31]=c->r[3]|c->r[3]; // 80248EEC
  goto L_80248F4C; // 80248EF0
L_80248EF4:;
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 80248EF4
  c->r[3]=c->r[30]|c->r[30]; // 80248EF8
  c->r[4]=0u+0x00000001u; // 80248EFC
  c->lr=0x80248F04u; f_80248B40(c); // 80248F00
  c->r[31]=c->r[3]|c->r[3]; // 80248F04
  goto L_80248F4C; // 80248F08
L_80248F0C:;
  W32(c->r[13]+0xFFFF9E0Cu,c->r[3]); // 80248F0C
  c->r[3]=c->r[30]|c->r[30]; // 80248F10
  c->r[4]=0u+0x00000000u; // 80248F14
  c->lr=0x80248F1Cu; f_80248B40(c); // 80248F18
  cmps(c,0,(int32_t)c->r[3],0); // 80248F1C
  c->r[31]=c->r[3]|c->r[3]; // 80248F20
  if (crb(c,2)) { goto L_80248F4C; } // 80248F24
  c->r[0]=R32(c->r[13]+0xFFFF9E0Cu); // 80248F28
  c->r[4]=0u+0x00000001u; // 80248F2C
  c->r[5]=c->r[0]+c->r[3]; // 80248F30
  W32(c->r[13]+0xFFFF9E08u,c->r[5]); // 80248F34
  c->r[3]=c->r[30]|c->r[30]; // 80248F38
  c->lr=0x80248F40u; f_80248B40(c); // 80248F3C
  c->r[31]=c->r[31]+c->r[3]; // 80248F40
  goto L_80248F4C; // 80248F44
L_80248F48:;
  c->r[31]=0u+0x00000000u; // 80248F48
L_80248F4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80248F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80248F50
  c->r[30]=R32(c->r[1]+0x00000008u); // 80248F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80248F58
  c->lr=c->r[0]; // 80248F5C
  c->r[1]=c->r[1]+0x00000010u; // 80248F60
  return; // 80248F64
}

// ParseStringS
void f_80248F70(Ctx* __restrict c) {
  trace_call(0x80248F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80248F70
  c->r[0]=c->lr; // 80248F74
  cmps(c,0,(int32_t)c->r[3],0); // 80248F78
  c->r[7]=0u+0x00000000u; // 80248F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80248F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80248F84
  c->r[31]=c->r[6]|c->r[6]; // 80248F88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80248F8C
  c->r[30]=c->r[4]|c->r[4]; // 80248F90
  if (crb(c,2)) { goto L_80248FA4; } // 80248F94
  cmps(c,0,(int32_t)c->r[3],1); // 80248F98
  if (crb(c,2)) { goto L_80248FBC; } // 80248F9C
  goto L_8024903C; // 80248FA0
L_80248FA4:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 80248FA4
  c->r[6]=R32(c->r[13]+0xFFFF9E0Cu); // 80248FA8
  cmps(c,0,(int32_t)c->r[7],0); // 80248FAC
  if (crb(c,2)) { goto L_8024903C; } // 80248FB0
  c->r[30]=c->r[4]+0x00000001u; // 80248FB4
  goto L_8024903C; // 80248FB8
L_80248FBC:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 80248FBC
  c->r[6]=R32(c->r[13]+0xFFFF9E08u); // 80248FC0
  cmps(c,0,(int32_t)c->r[7],0); // 80248FC4
  if (crb(c,2)) { goto L_8024903C; } // 80248FC8
  cmpu(c,0,c->r[7],0x00000081u); // 80248FCC
  c->r[30]=c->r[4]+0x00000001u; // 80248FD0
  c->r[0]=0u+0x00000000u; // 80248FD4
  if (crb(c,0)) { goto L_80248FE4; } // 80248FD8
  cmpu(c,0,c->r[7],0x0000009Fu); // 80248FDC
  if (!crb(c,1)) { goto L_80248FF4; } // 80248FE0
L_80248FE4:;
  cmpu(c,0,c->r[7],0x000000E0u); // 80248FE4
  if (crb(c,0)) { goto L_80248FF8; } // 80248FE8
  cmpu(c,0,c->r[7],0x000000FCu); // 80248FEC
  if (crb(c,1)) { goto L_80248FF8; } // 80248FF0
L_80248FF4:;
  c->r[0]=0u+0x00000001u; // 80248FF4
L_80248FF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80248FF8
  if (crb(c,2)) { goto L_8024903C; } // 80248FFC
  c->r[4]=R8(c->r[30]+0x00000000u); // 80249000
  c->r[0]=0u+0x00000000u; // 80249004
  cmpu(c,0,c->r[4],0x00000040u); // 80249008
  if (crb(c,0)) { goto L_80249024; } // 8024900C
  cmpu(c,0,c->r[4],0x000000FCu); // 80249010
  if (crb(c,1)) { goto L_80249024; } // 80249014
  cmpu(c,0,c->r[4],0x0000007Fu); // 80249018
  if (crb(c,2)) { goto L_80249024; } // 8024901C
  c->r[0]=0u+0x00000001u; // 80249020
L_80249024:;
  cmps(c,0,(int32_t)c->r[0],0); // 80249024
  if (crb(c,2)) { goto L_8024903C; } // 80249028
  c->r[0]=R8(c->r[30]+0x00000000u); // 8024902C
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80249030
  c->r[30]=c->r[30]+0x00000001u; // 80249034
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 80249038
L_8024903C:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 8024903C
  c->r[4]=c->r[7]|c->r[7]; // 80249040
  c->lr=0x80249048u; f_80248780(c); // 80249044
  W32(c->r[31]+0x00000000u,c->r[3]); // 80249048
  c->r[3]=c->r[30]|c->r[30]; // 8024904C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80249050
  c->r[30]=R32(c->r[1]+0x00000008u); // 80249054
  c->r[0]=R32(c->r[1]+0x00000014u); // 80249058
  c->lr=c->r[0]; // 8024905C
  c->r[1]=c->r[1]+0x00000010u; // 80249060
  return; // 80249064
}

// ParseStringW
void f_80249070(Ctx* __restrict c) {
  trace_call(0x80249070u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249070
  c->r[0]=c->lr; // 80249074
  W32(c->r[1]+0x00000034u,c->r[0]); // 80249078
  c->r[11]=c->r[1]+0x00000030u; // 8024907C
  c->lr=0x80249084u; f_800C2E48(c); // 80249080
  cmps(c,0,(int32_t)c->r[3],0); // 80249084
  c->r[30]=0u+0x00000000u; // 80249088
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024908C
  c->r[26]=c->r[3]|c->r[3]; // 80249090
  c->r[27]=c->r[4]|c->r[4]; // 80249094
  c->r[28]=c->r[5]|c->r[5]; // 80249098
  c->r[29]=c->r[6]|c->r[6]; // 8024909C
  if (crb(c,2)) { goto L_802490C8; } // 802490A0
  cmps(c,0,(int32_t)c->r[3],1); // 802490A4
  if (crb(c,2)) { goto L_802490E0; } // 802490A8
  cmps(c,0,(int32_t)c->r[3],3); // 802490AC
  if (crb(c,2)) { goto L_80249164; } // 802490B0
  cmps(c,0,(int32_t)c->r[3],4); // 802490B4
  if (crb(c,2)) { goto L_80249178; } // 802490B8
  cmps(c,0,(int32_t)c->r[3],5); // 802490BC
  if (crb(c,2)) { goto L_8024918C; } // 802490C0
  goto L_802491A0; // 802490C4
L_802490C8:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 802490C8
  c->r[31]=R32(c->r[13]+0xFFFF9E0Cu); // 802490CC
  cmps(c,0,(int32_t)c->r[30],0); // 802490D0
  if (crb(c,2)) { goto L_802491A0; } // 802490D4
  c->r[27]=c->r[4]+0x00000001u; // 802490D8
  goto L_802491A0; // 802490DC
L_802490E0:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 802490E0
  c->r[31]=R32(c->r[13]+0xFFFF9E08u); // 802490E4
  cmps(c,0,(int32_t)c->r[30],0); // 802490E8
  if (crb(c,2)) { goto L_802491A0; } // 802490EC
  cmpu(c,0,c->r[30],0x00000081u); // 802490F0
  c->r[27]=c->r[4]+0x00000001u; // 802490F4
  c->r[0]=0u+0x00000000u; // 802490F8
  if (crb(c,0)) { goto L_80249108; } // 802490FC
  cmpu(c,0,c->r[30],0x0000009Fu); // 80249100
  if (!crb(c,1)) { goto L_80249118; } // 80249104
L_80249108:;
  cmpu(c,0,c->r[30],0x000000E0u); // 80249108
  if (crb(c,0)) { goto L_8024911C; } // 8024910C
  cmpu(c,0,c->r[30],0x000000FCu); // 80249110
  if (crb(c,1)) { goto L_8024911C; } // 80249114
L_80249118:;
  c->r[0]=0u+0x00000001u; // 80249118
L_8024911C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024911C
  if (crb(c,2)) { goto L_802491A0; } // 80249120
  c->r[3]=R8(c->r[27]+0x00000000u); // 80249124
  c->r[0]=0u+0x00000000u; // 80249128
  cmpu(c,0,c->r[3],0x00000040u); // 8024912C
  if (crb(c,0)) { goto L_80249148; } // 80249130
  cmpu(c,0,c->r[3],0x000000FCu); // 80249134
  if (crb(c,1)) { goto L_80249148; } // 80249138
  cmpu(c,0,c->r[3],0x0000007Fu); // 8024913C
  if (crb(c,2)) { goto L_80249148; } // 80249140
  c->r[0]=0u+0x00000001u; // 80249144
L_80249148:;
  cmps(c,0,(int32_t)c->r[0],0); // 80249148
  if (crb(c,2)) { goto L_802491A0; } // 8024914C
  c->r[0]=R8(c->r[27]+0x00000000u); // 80249150
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 80249154
  c->r[27]=c->r[27]+0x00000001u; // 80249158
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 8024915C
  goto L_802491A0; // 80249160
L_80249164:;
  c->r[3]=c->r[27]|c->r[27]; // 80249164
  c->r[4]=c->r[1]+0x00000008u; // 80249168
  c->lr=0x80249170u; f_8024EF00(c); // 8024916C
  c->r[27]=c->r[3]|c->r[3]; // 80249170
  goto L_802491A0; // 80249174
L_80249178:;
  c->r[3]=c->r[27]|c->r[27]; // 80249178
  c->r[4]=c->r[1]+0x00000008u; // 8024917C
  c->lr=0x80249184u; f_8024F020(c); // 80249180
  c->r[27]=c->r[3]|c->r[3]; // 80249184
  goto L_802491A0; // 80249188
L_8024918C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8024918C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80249190
  cmps(c,0,(int32_t)c->r[0],0); // 80249194
  if (crb(c,2)) { goto L_802491A0; } // 80249198
  c->r[27]=c->r[4]+0x00000004u; // 8024919C
L_802491A0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 802491A0
  cmps(c,0,(int32_t)c->r[3],0); // 802491A4
  if (crb(c,2)) { goto L_802491F4; } // 802491A8
  c->r[31]=R32(c->r[13]+0xFFFF9E0Cu); // 802491AC
  c->r[26]=0u+0x00000000u; // 802491B0
  c->lr=0x802491B8u; f_8024F090(c); // 802491B4
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 802491B8
  if (crb(c,2)) { goto L_802491D8; } // 802491BC
  c->r[0]=R32(c->r[13]+0xFFFF9E04u); // 802491C0
  cmps(c,0,(int32_t)c->r[0],0); // 802491C4
  if (crb(c,2)) { goto L_802491F4; } // 802491C8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802491CC
  cmpu(c,0,c->r[0],0x0000007Fu); // 802491D0
  if (crb(c,1)) { goto L_802491F4; } // 802491D4
L_802491D8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 802491D8
  c->lr=0x802491E0u; f_8024F110(c); // 802491DC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 802491E0
  c->r[30]=c->r[3]|c->r[3]; // 802491E4
  if (crb(c,2)) { goto L_802491F4; } // 802491E8
  c->r[26]=0u+0x00000001u; // 802491EC
  c->r[31]=R32(c->r[13]+0xFFFF9E08u); // 802491F0
L_802491F4:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 802491F4
  c->r[3]=c->r[26]|c->r[26]; // 802491F8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 802491FC
  c->lr=0x80249204u; f_80248780(c); // 80249200
  W32(c->r[29]+0x00000000u,c->r[3]); // 80249204
  c->r[11]=c->r[1]+0x00000030u; // 80249208
  c->r[3]=c->r[27]|c->r[27]; // 8024920C
  c->lr=0x80249214u; f_800C2E94(c); // 80249210
  c->r[0]=R32(c->r[1]+0x00000034u); // 80249214
  c->lr=c->r[0]; // 80249218
  c->r[1]=c->r[1]+0x00000030u; // 8024921C
  return; // 80249220
}

// OSGetFontTexel
void f_80249230(Ctx* __restrict c) {
  trace_call(0x80249230u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249230
  c->r[0]=c->lr; // 80249234
  W32(c->r[1]+0x00000054u,c->r[0]); // 80249238
  c->r[11]=c->r[1]+0x00000050u; // 8024923C
  c->lr=0x80249244u; f_800C2E24(c); // 80249240
  c->r[0]=R16(c->r[13]+0xFFFF9150u); // 80249244
  c->r[29]=c->r[4]|c->r[4]; // 80249248
  c->r[30]=c->r[5]|c->r[5]; // 8024924C
  c->r[17]=c->r[6]|c->r[6]; // 80249250
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80249254
  c->r[31]=c->r[7]|c->r[7]; // 80249258
  if (crb(c,2)) { goto L_80249264; } // 8024925C
  goto L_802492A0; // 80249260
L_80249264:;
  c->r[4]=0u+0x80000000u; // 80249264
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80249268
  cmps(c,0,(int32_t)c->r[0],0); // 8024926C
  if (!crb(c,2)) { goto L_80249288; } // 80249270
  c->r[4]=0u+0xCC000000u; // 80249274
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 80249278
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8024927C
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 80249280
  goto L_80249290; // 80249284
L_80249288:;
  c->r[0]=0u+0x00000000u; // 80249288
  W16(c->r[13]+0xFFFF9150u,c->r[0]); // 8024928C
L_80249290:;
  c->r[4]=0u+0x80250000u; // 80249290
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80249294
  c->r[4]=c->r[4]+0xFFFF8F70u; // 80249298
  W32(c->r[13]+0xFFFF9E00u,c->r[4]); // 8024929C
L_802492A0:;
  c->r[12]=R32(c->r[13]+0xFFFF9E00u); // 802492A0
  c->r[4]=c->r[3]|c->r[3]; // 802492A4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 802492A8
  c->r[5]=c->r[1]+0x0000000Cu; // 802492AC
  c->r[6]=c->r[1]+0x00000008u; // 802492B0
  c->ctr=c->r[12]; // 802492B4
  if (true) { c->lr=0x802492BCu; dispatch(c,c->ctr); } // 802492B8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 802492BC
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 802492C0
  c->r[0]=sraw(c,c->r[0],3); // 802492C4
  c->r[11]=R32(c->r[1]+0x00000008u); // 802492C8
  c->r[9]=R16(c->r[4]+0x0000001Au); // 802492CC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 802492D0
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 802492D4
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 802492D8
  c->r[6]=R32(c->r[4]+0x00000024u); // 802492DC
  c->r[23]=c->r[4]+0x0000002Cu; // 802492E0
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 802492E4
  c->r[5]=R32(c->r[4]+0x00000014u); // 802492E8
  c->r[22]=c->r[4]+c->r[6]; // 802492EC
  c->r[7]=R16(c->r[4]+0x00000012u); // 802492F0
  c->r[6]=R16(c->r[4]+0x00000010u); // 802492F4
  c->r[24]=0u+0x00000000u; // 802492F8
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 802492FC
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 80249300
  c->r[11]=c->r[11]-c->r[0]; // 80249304
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 80249308
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 8024930C
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 80249310
  c->r[26]=c->r[11]-c->r[9]; // 80249314
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80249318
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 8024931C
  c->r[22]=c->r[22]+c->r[0]; // 80249320
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 80249324
  goto L_80249474; // 80249328
L_8024932C:;
  c->r[7]=c->r[27]+c->r[24]; // 8024932C
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 80249330
  c->r[5]=sraw(c,c->r[7],3); // 80249334
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 80249338
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 8024933C
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 80249340
  c->r[5]=sraw(c,c->r[24],3); // 80249344
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 80249348
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 8024934C
  c->r[0]=c->r[0]-c->r[4]; // 80249350
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 80249354
  c->r[6]=c->r[6]-c->r[7]; // 80249358
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8024935C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 80249360
  c->r[0]=c->r[0]+c->r[4]; // 80249364
  c->r[4]=c->r[6]+c->r[7]; // 80249368
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8024936C
  c->r[11]=c->r[29]+c->r[5]; // 80249370
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80249374
  c->r[25]=0u+0x00000000u; // 80249378
  goto L_80249460; // 8024937C
L_80249380:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 80249380
  c->r[28]=c->r[30]+c->r[25]; // 80249384
  c->r[5]=c->r[26]+c->r[25]; // 80249388
  c->r[0]=0u+0x000000F0u; // 8024938C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 80249390
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 80249394
  c->r[4]=c->r[4]+c->r[6]; // 80249398
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 8024939C
  c->r[7]=sraw(c,c->r[4],1); // 802493A0
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 802493A4
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 802493A8
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 802493AC
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 802493B0
  c->r[18]=sraw(c,c->r[5],3); // 802493B4
  c->r[6]=c->r[6]-c->r[4]; // 802493B8
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 802493BC
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 802493C0
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 802493C4
  c->r[17]=c->r[17]+c->r[4]; // 802493C8
  c->r[20]=c->r[20]-c->r[19]; // 802493CC
  c->r[21]=c->r[21]^c->r[19]; // 802493D0
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 802493D4
  c->r[18]=sraw(c,c->r[17],2); // 802493D8
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 802493DC
  c->r[17]=c->r[5]-c->r[4]; // 802493E0
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 802493E4
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 802493E8
  c->r[20]=c->r[20]+c->r[19]; // 802493EC
  c->r[18]=sraw(c,c->r[28],3); // 802493F0
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 802493F4
  c->r[7]=c->r[22]+c->r[7]; // 802493F8
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 802493FC
  c->r[7]=c->r[7]+c->r[6]; // 80249400
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 80249404
  c->r[7]=c->r[7]+c->r[10]; // 80249408
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 8024940C
  c->r[28]=c->r[17]+c->r[4]; // 80249410
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 80249414
  c->r[4]=c->r[21]+c->r[20]; // 80249418
  c->r[7]=R8(c->r[7]+c->r[5]); // 8024941C
  c->r[6]=c->r[11]+c->r[6]; // 80249420
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80249424
  c->r[4]=sraw(c,c->r[4],1); // 80249428
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 8024942C
  c->r[6]=c->r[6]+c->r[12]; // 80249430
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 80249434
  c->r[7]=R8(c->r[6]+c->r[4]); // 80249438
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 8024943C
  c->r[5]=R8(c->r[23]+c->r[5]); // 80249440
  if (crb(c,2)) { goto L_8024944C; } // 80249444
  c->r[0]=0u+0x0000000Fu; // 80249448
L_8024944C:;
  c->r[0]=c->r[5]&c->r[0]; // 8024944C
  c->r[25]=c->r[25]+0x00000001u; // 80249450
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80249454
  c->r[0]=c->r[7]|c->r[0]; // 80249458
  W8(c->r[6]+c->r[4],c->r[0]); // 8024945C
L_80249460:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80249460
  c->r[0]=R16(c->r[4]+0x00000010u); // 80249464
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80249468
  if (crb(c,0)) { IRQCHK(c); goto L_80249380; } // 8024946C
  c->r[24]=c->r[24]+0x00000001u; // 80249470
L_80249474:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 80249474
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80249478
  if (crb(c,0)) { IRQCHK(c); goto L_8024932C; } // 8024947C
  cmps(c,0,(int32_t)c->r[31],0); // 80249480
  if (crb(c,2)) { goto L_802494A0; } // 80249484
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80249488
  c->r[4]=R32(c->r[1]+0x00000008u); // 8024948C
  c->r[0]=R16(c->r[5]+0x00000022u); // 80249490
  c->r[0]=c->r[5]+c->r[0]; // 80249494
  c->r[0]=R8(c->r[4]+c->r[0]); // 80249498
  W32(c->r[31]+0x00000000u,c->r[0]); // 8024949C
L_802494A0:;
  c->r[11]=c->r[1]+0x00000050u; // 802494A0
  c->lr=0x802494A8u; f_800C2E70(c); // 802494A4
  c->r[0]=R32(c->r[1]+0x00000054u); // 802494A8
  c->lr=c->r[0]; // 802494AC
  c->r[1]=c->r[1]+0x00000050u; // 802494B0
  return; // 802494B4
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_802494C0(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_802494E0(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_80249500(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_80249530(Ctx* __restrict c) {
  trace_call(0x80249530u);
  c->r[5]=R32(c->r[13]+0xFFFF9E20u); // 80249530
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80249534
  c->r[3]=R32(c->r[5]+c->r[0]); // 80249538
  W32(c->r[5]+c->r[0],c->r[4]); // 8024953C
  return; // 80249540
}

// __OSGetInterruptHandler
void f_80249550(Ctx* __restrict c) {
  trace_call(0x80249550u);
  c->r[4]=R32(c->r[13]+0xFFFF9E20u); // 80249550
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80249554
  c->r[3]=R32(c->r[4]+c->r[0]); // 80249558
  return; // 8024955C
}

// __OSInterruptInit
void f_80249560(Ctx* __restrict c) {
  trace_call(0x80249560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249560
  c->r[0]=c->lr; // 80249564
  c->r[4]=0u+0x00000000u; // 80249568
  c->r[5]=0u+0x00000080u; // 8024956C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249570
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80249574
  c->r[31]=0u+0x80000000u; // 80249578
  c->r[3]=c->r[31]+0x00003040u; // 8024957C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80249580
  W32(c->r[1]+0x00000014u,c->r[29]); // 80249584
  W32(c->r[13]+0xFFFF9E20u,c->r[3]); // 80249588
  c->lr=0x80249590u; f_80004350(c); // 8024958C
  c->r[0]=0u+0x00000000u; // 80249590
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80249594
  c->r[4]=0u+0xCC000000u; // 80249598
  c->r[5]=0u+0x000000F0u; // 8024959C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 802495A0
  c->r[3]=0u+0xCD000000u; // 802495A4
  c->r[0]=0u+0x40000000u; // 802495A8
  c->r[30]=0u+0xFFFFFFF0u; // 802495AC
  W32(c->r[4]+0x00003004u,c->r[5]); // 802495B0
  W32(c->r[3]+0x00000034u,c->r[0]); // 802495B4
  c->lr=0x802495BCu; f_802494C0(c); // 802495B8
  c->r[0]=R32(c->r[31]+0x000000C4u); // 802495BC
  c->r[29]=c->r[3]|c->r[3]; // 802495C0
  c->r[4]=R32(c->r[31]+0x000000C8u); // 802495C4
  c->r[30]=c->r[30]|c->r[0]; // 802495C8
  c->r[0]=~(c->r[0]|c->r[4]); // 802495CC
  W32(c->r[31]+0x000000C4u,c->r[30]); // 802495D0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 802495D4
  c->r[30]=c->r[30]|c->r[4]; // 802495D8
  goto L_802495E8; // 802495DC
L_802495E0:;
  c->r[4]=c->r[30]|c->r[30]; // 802495E0
  c->lr=0x802495E8u; f_80249630(c); // 802495E4
L_802495E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802495E8
  if (!crb(c,2)) { IRQCHK(c); goto L_802495E0; } // 802495EC
  c->r[3]=c->r[29]|c->r[29]; // 802495F0
  c->lr=0x802495F8u; f_80249500(c); // 802495F4
  c->r[4]=0u+0x80250000u; // 802495F8
  c->r[3]=0u+0x00000004u; // 802495FC
  c->r[4]=c->r[4]+0xFFFF9C40u; // 80249600
  c->lr=0x80249608u; f_802439F0(c); // 80249604
  c->r[0]=R32(c->r[1]+0x00000024u); // 80249608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024960C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80249610
  c->r[29]=R32(c->r[1]+0x00000014u); // 80249614
  c->lr=c->r[0]; // 80249618
  c->r[1]=c->r[1]+0x00000020u; // 8024961C
  return; // 80249620
}

// SetInterruptMask
void f_80249630(Ctx* __restrict c) {
  trace_call(0x80249630u);
  c->r[0]=cntlz(c->r[3]); // 80249630
  cmps(c,0,(int32_t)c->r[0],12); // 80249634
  if (!crb(c,0)) { goto L_8024965C; } // 80249638
  cmps(c,0,(int32_t)c->r[0],8); // 8024963C
  if (crb(c,2)) { goto L_8024970C; } // 80249640
  if (!crb(c,0)) { goto L_80249738; } // 80249644
  cmps(c,0,(int32_t)c->r[0],5); // 80249648
  if (!crb(c,0)) { goto L_802496CC; } // 8024964C
  cmps(c,0,(int32_t)c->r[0],0); // 80249650
  if (!crb(c,0)) { goto L_8024967C; } // 80249654
  return; // 80249658
L_8024965C:;
  cmps(c,0,(int32_t)c->r[0],17); // 8024965C
  if (!crb(c,0)) { goto L_80249670; } // 80249660
  cmps(c,0,(int32_t)c->r[0],15); // 80249664
  if (!crb(c,0)) { goto L_802497C0; } // 80249668
  goto L_8024977C; // 8024966C
L_80249670:;
  cmps(c,0,(int32_t)c->r[0],28); // 80249670
  if (!crb(c,0)) return; // 80249674
  goto L_802497F4; // 80249678
L_8024967C:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 8024967C
  c->r[5]=0u+0x00000000u; // 80249680
  if (!crb(c,2)) { goto L_8024968C; } // 80249684
  c->r[5]=c->r[5]|0x00000001u; // 80249688
L_8024968C:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 8024968C
  if (!crb(c,2)) { goto L_80249698; } // 80249690
  c->r[5]=c->r[5]|0x00000002u; // 80249694
L_80249698:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 80249698
  if (!crb(c,2)) { goto L_802496A4; } // 8024969C
  c->r[5]=c->r[5]|0x00000004u; // 802496A0
L_802496A4:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 802496A4
  if (!crb(c,2)) { goto L_802496B0; } // 802496A8
  c->r[5]=c->r[5]|0x00000008u; // 802496AC
L_802496B0:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 802496B0
  if (!crb(c,2)) { goto L_802496BC; } // 802496B4
  c->r[5]=c->r[5]|0x00000010u; // 802496B8
L_802496BC:;
  c->r[4]=0u+0xCC000000u; // 802496BC
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 802496C0
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 802496C4
  return; // 802496C8
L_802496CC:;
  c->r[5]=0u+0xCC000000u; // 802496CC
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 802496D0
  c->r[5]=R16(c->r[5]+0x0000500Au); // 802496D4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 802496D8
  if (!crb(c,2)) { goto L_802496E4; } // 802496DC
  c->r[5]=c->r[5]|0x00000010u; // 802496E0
L_802496E4:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 802496E4
  if (!crb(c,2)) { goto L_802496F0; } // 802496E8
  c->r[5]=c->r[5]|0x00000040u; // 802496EC
L_802496F0:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 802496F0
  if (!crb(c,2)) { goto L_802496FC; } // 802496F4
  c->r[5]=c->r[5]|0x00000100u; // 802496F8
L_802496FC:;
  c->r[4]=0u+0xCC000000u; // 802496FC
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 80249700
  W16(c->r[4]+0x0000500Au,c->r[5]); // 80249704
  return; // 80249708
L_8024970C:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 8024970C
  c->r[4]=0u+0xCD000000u; // 80249710
  c->r[5]=R32(c->r[4]+0x00006C00u); // 80249714
  c->r[0]=0u+0xFFFFFFD3u; // 80249718
  c->r[5]=c->r[5]&c->r[0]; // 8024971C
  if (!crb(c,2)) { goto L_80249728; } // 80249720
  c->r[5]=c->r[5]|0x00000004u; // 80249724
L_80249728:;
  c->r[4]=0u+0xCD000000u; // 80249728
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 8024972C
  W32(c->r[4]+0x00006C00u,c->r[5]); // 80249730
  return; // 80249734
L_80249738:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 80249738
  c->r[5]=0u+0xCD000000u; // 8024973C
  c->r[5]=R32(c->r[5]+0x00006800u); // 80249740
  c->r[0]=0u+0xFFFFD3F0u; // 80249744
  c->r[5]=c->r[5]&c->r[0]; // 80249748
  if (!crb(c,2)) { goto L_80249754; } // 8024974C
  c->r[5]=c->r[5]|0x00000001u; // 80249750
L_80249754:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 80249754
  if (!crb(c,2)) { goto L_80249760; } // 80249758
  c->r[5]=c->r[5]|0x00000004u; // 8024975C
L_80249760:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 80249760
  if (!crb(c,2)) { goto L_8024976C; } // 80249764
  c->r[5]=c->r[5]|0x00000400u; // 80249768
L_8024976C:;
  c->r[4]=0u+0xCD000000u; // 8024976C
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 80249770
  W32(c->r[4]+0x00006800u,c->r[5]); // 80249774
  return; // 80249778
L_8024977C:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 8024977C
  c->r[5]=0u+0xCD000000u; // 80249780
  c->r[5]=R32(c->r[5]+0x00006814u); // 80249784
  c->r[0]=0u+0xFFFFF3F0u; // 80249788
  c->r[5]=c->r[5]&c->r[0]; // 8024978C
  if (!crb(c,2)) { goto L_80249798; } // 80249790
  c->r[5]=c->r[5]|0x00000001u; // 80249794
L_80249798:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 80249798
  if (!crb(c,2)) { goto L_802497A4; } // 8024979C
  c->r[5]=c->r[5]|0x00000004u; // 802497A0
L_802497A4:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 802497A4
  if (!crb(c,2)) { goto L_802497B0; } // 802497A8
  c->r[5]=c->r[5]|0x00000400u; // 802497AC
L_802497B0:;
  c->r[4]=0u+0xCD000000u; // 802497B0
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 802497B4
  W32(c->r[4]+0x00006814u,c->r[5]); // 802497B8
  return; // 802497BC
L_802497C0:;
  c->r[5]=0u+0xCD000000u; // 802497C0
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 802497C4
  c->r[5]=R32(c->r[5]+0x00006828u); // 802497C8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 802497CC
  if (!crb(c,2)) { goto L_802497D8; } // 802497D0
  c->r[5]=c->r[5]|0x00000001u; // 802497D4
L_802497D8:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 802497D8
  if (!crb(c,2)) { goto L_802497E4; } // 802497DC
  c->r[5]=c->r[5]|0x00000004u; // 802497E0
L_802497E4:;
  c->r[4]=0u+0xCD000000u; // 802497E4
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 802497E8
  W32(c->r[4]+0x00006828u,c->r[5]); // 802497EC
  return; // 802497F0
L_802497F4:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 802497F4
  c->r[5]=0u+0x000000F0u; // 802497F8
  if (!crb(c,2)) { goto L_80249804; } // 802497FC
  c->r[5]=c->r[5]|0x00000800u; // 80249800
L_80249804:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80249804
  if (!crb(c,2)) { goto L_80249810; } // 80249808
  c->r[5]=c->r[5]|0x00000008u; // 8024980C
L_80249810:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80249810
  if (!crb(c,2)) { goto L_8024981C; } // 80249814
  c->r[5]=c->r[5]|0x00000004u; // 80249818
L_8024981C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 8024981C
  if (!crb(c,2)) { goto L_80249828; } // 80249820
  c->r[5]=c->r[5]|0x00000002u; // 80249824
L_80249828:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 80249828
  if (!crb(c,2)) { goto L_80249834; } // 8024982C
  c->r[5]=c->r[5]|0x00000001u; // 80249830
L_80249834:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 80249834
  if (!crb(c,2)) { goto L_80249840; } // 80249838
  c->r[5]=c->r[5]|0x00000100u; // 8024983C
L_80249840:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 80249840
  if (!crb(c,2)) { goto L_8024984C; } // 80249844
  c->r[5]=c->r[5]|0x00001000u; // 80249848
L_8024984C:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 8024984C
  if (!crb(c,2)) { goto L_80249858; } // 80249850
  c->r[5]=c->r[5]|0x00000200u; // 80249854
L_80249858:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 80249858
  if (!crb(c,2)) { goto L_80249864; } // 8024985C
  c->r[5]=c->r[5]|0x00000400u; // 80249860
L_80249864:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 80249864
  if (!crb(c,2)) { goto L_80249870; } // 80249868
  c->r[5]=c->r[5]|0x00002000u; // 8024986C
L_80249870:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80249870
  if (!crb(c,2)) { goto L_8024987C; } // 80249874
  c->r[5]=c->r[5]|0x00004000u; // 80249878
L_8024987C:;
  c->r[4]=0u+0xCC000000u; // 8024987C
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 80249880
  W32(c->r[4]+0x00003004u,c->r[5]); // 80249884
  return; // 80249888
}

// __OSMaskInterrupts
void f_80249890(Ctx* __restrict c) {
  trace_call(0x80249890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249890
  c->r[0]=c->lr; // 80249894
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024989C
  c->r[31]=c->r[3]|c->r[3]; // 802498A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802498A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802498A8
  c->lr=0x802498B0u; f_802494C0(c); // 802498AC
  c->r[4]=0u+0x80000000u; // 802498B0
  c->r[30]=c->r[3]|c->r[3]; // 802498B4
  c->r[29]=R32(c->r[4]+0x000000C4u); // 802498B8
  c->r[5]=R32(c->r[4]+0x000000C8u); // 802498BC
  c->r[0]=c->r[29]|c->r[5]; // 802498C0
  c->r[3]=c->r[31]&~c->r[0]; // 802498C4
  c->r[31]=c->r[31]|c->r[29]; // 802498C8
  W32(c->r[4]+0x000000C4u,c->r[31]); // 802498CC
  c->r[31]=c->r[31]|c->r[5]; // 802498D0
  goto L_802498E0; // 802498D4
L_802498D8:;
  c->r[4]=c->r[31]|c->r[31]; // 802498D8
  c->lr=0x802498E0u; f_80249630(c); // 802498DC
L_802498E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802498E0
  if (!crb(c,2)) { IRQCHK(c); goto L_802498D8; } // 802498E4
  c->r[3]=c->r[30]|c->r[30]; // 802498E8
  c->lr=0x802498F0u; f_80249500(c); // 802498EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802498F0
  c->r[3]=c->r[29]|c->r[29]; // 802498F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802498F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802498FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80249900
  c->lr=c->r[0]; // 80249904
  c->r[1]=c->r[1]+0x00000020u; // 80249908
  return; // 8024990C
}

// __OSUnmaskInterrupts
void f_80249910(Ctx* __restrict c) {
  trace_call(0x80249910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249910
  c->r[0]=c->lr; // 80249914
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024991C
  c->r[31]=c->r[3]|c->r[3]; // 80249920
  W32(c->r[1]+0x00000018u,c->r[30]); // 80249924
  W32(c->r[1]+0x00000014u,c->r[29]); // 80249928
  c->lr=0x80249930u; f_802494C0(c); // 8024992C
  c->r[4]=0u+0x80000000u; // 80249930
  c->r[30]=c->r[3]|c->r[3]; // 80249934
  c->r[29]=R32(c->r[4]+0x000000C4u); // 80249938
  c->r[5]=R32(c->r[4]+0x000000C8u); // 8024993C
  c->r[0]=c->r[29]|c->r[5]; // 80249940
  c->r[3]=c->r[31]&c->r[0]; // 80249944
  c->r[31]=c->r[29]&~c->r[31]; // 80249948
  W32(c->r[4]+0x000000C4u,c->r[31]); // 8024994C
  c->r[31]=c->r[31]|c->r[5]; // 80249950
  goto L_80249960; // 80249954
L_80249958:;
  c->r[4]=c->r[31]|c->r[31]; // 80249958
  c->lr=0x80249960u; f_80249630(c); // 8024995C
L_80249960:;
  cmps(c,0,(int32_t)c->r[3],0); // 80249960
  if (!crb(c,2)) { IRQCHK(c); goto L_80249958; } // 80249964
  c->r[3]=c->r[30]|c->r[30]; // 80249968
  c->lr=0x80249970u; f_80249500(c); // 8024996C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80249970
  c->r[3]=c->r[29]|c->r[29]; // 80249974
  c->r[30]=R32(c->r[1]+0x00000018u); // 80249978
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024997C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80249980
  c->lr=c->r[0]; // 80249984
  c->r[1]=c->r[1]+0x00000020u; // 80249988
  return; // 8024998C
}

// __OSDispatchInterrupt
void f_80249990(Ctx* __restrict c) {
  trace_call(0x80249990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249990
  c->r[0]=c->lr; // 80249994
  c->r[3]=0u+0xCC000000u; // 80249998
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024999C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802499A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802499A4
  c->r[30]=c->r[4]|c->r[4]; // 802499A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802499AC
  c->r[31]=R32(c->r[3]+0x00003000u); // 802499B0
  c->r[0]=R32(c->r[3]+0x00003004u); // 802499B4
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 802499B8
  if (crb(c,2)) { goto L_802499C8; } // 802499BC
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 802499C0
  if (!crb(c,2)) { goto L_802499D0; } // 802499C4
L_802499C8:;
  c->r[3]=c->r[30]|c->r[30]; // 802499C8
  c->lr=0x802499D0u; f_80245750(c); // 802499CC
L_802499D0:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 802499D0
  c->r[0]=0u+0x00000000u; // 802499D4
  if (crb(c,2)) { goto L_80249A20; } // 802499D8
  c->r[3]=0u+0xCC000000u; // 802499DC
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 802499E0
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 802499E4
  if (crb(c,2)) { goto L_802499F0; } // 802499E8
  c->r[0]=c->r[0]|0x80000000u; // 802499EC
L_802499F0:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 802499F0
  if (crb(c,2)) { goto L_802499FC; } // 802499F4
  c->r[0]=c->r[0]|0x40000000u; // 802499F8
L_802499FC:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 802499FC
  if (crb(c,2)) { goto L_80249A08; } // 80249A00
  c->r[0]=c->r[0]|0x20000000u; // 80249A04
L_80249A08:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80249A08
  if (crb(c,2)) { goto L_80249A14; } // 80249A0C
  c->r[0]=c->r[0]|0x10000000u; // 80249A10
L_80249A14:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 80249A14
  if (crb(c,2)) { goto L_80249A20; } // 80249A18
  c->r[0]=c->r[0]|0x08000000u; // 80249A1C
L_80249A20:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 80249A20
  if (crb(c,2)) { goto L_80249A54; } // 80249A24
  c->r[3]=0u+0xCC000000u; // 80249A28
  c->r[4]=R16(c->r[3]+0x0000500Au); // 80249A2C
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80249A30
  if (crb(c,2)) { goto L_80249A3C; } // 80249A34
  c->r[0]=c->r[0]|0x04000000u; // 80249A38
L_80249A3C:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 80249A3C
  if (crb(c,2)) { goto L_80249A48; } // 80249A40
  c->r[0]=c->r[0]|0x02000000u; // 80249A44
L_80249A48:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 80249A48
  if (crb(c,2)) { goto L_80249A54; } // 80249A4C
  c->r[0]=c->r[0]|0x01000000u; // 80249A50
L_80249A54:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 80249A54
  if (crb(c,2)) { goto L_80249A70; } // 80249A58
  c->r[3]=0u+0xCD000000u; // 80249A5C
  c->r[3]=R32(c->r[3]+0x00006C00u); // 80249A60
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 80249A64
  if (crb(c,2)) { goto L_80249A70; } // 80249A68
  c->r[0]=c->r[0]|0x00800000u; // 80249A6C
L_80249A70:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 80249A70
  if (crb(c,2)) { goto L_80249AF0; } // 80249A74
  c->r[3]=0u+0xCD000000u; // 80249A78
  c->r[4]=R32(c->r[3]+0x00006800u); // 80249A7C
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80249A80
  if (crb(c,2)) { goto L_80249A8C; } // 80249A84
  c->r[0]=c->r[0]|0x00400000u; // 80249A88
L_80249A8C:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80249A8C
  if (crb(c,2)) { goto L_80249A98; } // 80249A90
  c->r[0]=c->r[0]|0x00200000u; // 80249A94
L_80249A98:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 80249A98
  if (crb(c,2)) { goto L_80249AA4; } // 80249A9C
  c->r[0]=c->r[0]|0x00100000u; // 80249AA0
L_80249AA4:;
  c->r[3]=0u+0xCD000000u; // 80249AA4
  c->r[4]=R32(c->r[3]+0x00006814u); // 80249AA8
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80249AAC
  if (crb(c,2)) { goto L_80249AB8; } // 80249AB0
  c->r[0]=c->r[0]|0x00080000u; // 80249AB4
L_80249AB8:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80249AB8
  if (crb(c,2)) { goto L_80249AC4; } // 80249ABC
  c->r[0]=c->r[0]|0x00040000u; // 80249AC0
L_80249AC4:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 80249AC4
  if (crb(c,2)) { goto L_80249AD0; } // 80249AC8
  c->r[0]=c->r[0]|0x00020000u; // 80249ACC
L_80249AD0:;
  c->r[3]=0u+0xCD000000u; // 80249AD0
  c->r[4]=R32(c->r[3]+0x00006828u); // 80249AD4
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 80249AD8
  if (crb(c,2)) { goto L_80249AE4; } // 80249ADC
  c->r[0]=c->r[0]|0x00010000u; // 80249AE0
L_80249AE4:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 80249AE4
  if (crb(c,2)) { goto L_80249AF0; } // 80249AE8
  c->r[0]=c->r[0]|0x00008000u; // 80249AEC
L_80249AF0:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 80249AF0
  if (crb(c,2)) { goto L_80249AFC; } // 80249AF4
  c->r[0]=c->r[0]|0x00000020u; // 80249AF8
L_80249AFC:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 80249AFC
  if (crb(c,2)) { goto L_80249B08; } // 80249B00
  c->r[0]=c->r[0]|0x00000040u; // 80249B04
L_80249B08:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 80249B08
  if (crb(c,2)) { goto L_80249B14; } // 80249B0C
  c->r[0]=c->r[0]|0x00001000u; // 80249B10
L_80249B14:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 80249B14
  if (crb(c,2)) { goto L_80249B20; } // 80249B18
  c->r[0]=c->r[0]|0x00002000u; // 80249B1C
L_80249B20:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 80249B20
  if (crb(c,2)) { goto L_80249B2C; } // 80249B24
  c->r[0]=c->r[0]|0x00000080u; // 80249B28
L_80249B2C:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 80249B2C
  if (crb(c,2)) { goto L_80249B38; } // 80249B30
  c->r[0]=c->r[0]|0x00000800u; // 80249B34
L_80249B38:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 80249B38
  if (crb(c,2)) { goto L_80249B44; } // 80249B3C
  c->r[0]=c->r[0]|0x00000400u; // 80249B40
L_80249B44:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 80249B44
  if (crb(c,2)) { goto L_80249B50; } // 80249B48
  c->r[0]=c->r[0]|0x00000200u; // 80249B4C
L_80249B50:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 80249B50
  if (crb(c,2)) { goto L_80249B5C; } // 80249B54
  c->r[0]=c->r[0]|0x00004000u; // 80249B58
L_80249B5C:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 80249B5C
  if (crb(c,2)) { goto L_80249B68; } // 80249B60
  c->r[0]=c->r[0]|0x00000100u; // 80249B64
L_80249B68:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 80249B68
  if (crb(c,2)) { goto L_80249B74; } // 80249B6C
  c->r[0]=c->r[0]|0x00000010u; // 80249B70
L_80249B74:;
  c->r[3]=0u+0x80000000u; // 80249B74
  c->r[4]=R32(c->r[3]+0x000000C4u); // 80249B78
  c->r[3]=R32(c->r[3]+0x000000C8u); // 80249B7C
  c->r[3]=c->r[4]|c->r[3]; // 80249B80
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 80249B84
  if (crb(c,2)) { goto L_80249C14; } // 80249B88
  c->r[4]=0u+0x803B0000u; // 80249B8C
  c->r[4]=c->r[4]+0xFFFFE970u; // 80249B90
  c->r[0]=c->r[0]|0x00000000u; // 80249B94
L_80249B98:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80249B98
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80249B9C
  if (crb(c,2)) { goto L_80249BB0; } // 80249BA0
  c->r[0]=cntlz(c->r[0]); // 80249BA4
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80249BA8
  goto L_80249BB8; // 80249BAC
L_80249BB0:;
  c->r[4]=c->r[4]+0x00000004u; // 80249BB0
  IRQCHK(c); goto L_80249B98; // 80249BB4
L_80249BB8:;
  c->r[3]=R32(c->r[13]+0xFFFF9E20u); // 80249BB8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80249BBC
  c->r[31]=R32(c->r[3]+c->r[0]); // 80249BC0
  cmps(c,0,(int32_t)c->r[31],0); // 80249BC4
  if (crb(c,2)) { goto L_80249C14; } // 80249BC8
  cmps(c,0,(int32_t)c->r[29],4); // 80249BCC
  if (!crb(c,1)) { goto L_80249BEC; } // 80249BD0
  W16(c->r[13]+0xFFFF9E14u,c->r[29]); // 80249BD4
  c->lr=0x80249BDCu; f_8024EAD0(c); // 80249BD8
  W32(c->r[13]+0xFFFF9E1Cu,c->r[4]); // 80249BDC
  W32(c->r[13]+0xFFFF9E18u,c->r[3]); // 80249BE0
  c->r[0]=R32(c->r[30]+0x00000198u); // 80249BE4
  W32(c->r[13]+0xFFFF9E10u,c->r[0]); // 80249BE8
L_80249BEC:;
  c->lr=0x80249BF0u; f_8024CE40(c); // 80249BEC
  c->r[12]=c->r[31]|c->r[31]; // 80249BF0
  c->r[3]=c->r[29]|c->r[29]; // 80249BF4
  c->r[4]=c->r[30]|c->r[30]; // 80249BF8
  c->ctr=c->r[12]; // 80249BFC
  if (true) { c->lr=0x80249C04u; dispatch(c,c->ctr); } // 80249C00
  c->lr=0x80249C08u; f_8024CE80(c); // 80249C04
  c->lr=0x80249C0Cu; f_8024D3A0(c); // 80249C08
  c->r[3]=c->r[30]|c->r[30]; // 80249C0C
  c->lr=0x80249C14u; f_80245750(c); // 80249C10
L_80249C14:;
  c->r[3]=c->r[30]|c->r[30]; // 80249C14
  c->lr=0x80249C1Cu; f_80245750(c); // 80249C18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80249C1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80249C20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80249C24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80249C28
  c->lr=c->r[0]; // 80249C2C
  c->r[1]=c->r[1]+0x00000020u; // 80249C30
  return; // 80249C34
}

// ExternalInterruptHandler
void f_80249C40(Ctx* __restrict c) {
  trace_call(0x80249C40u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 80249C40
  W32(c->r[4]+0x00000004u,c->r[1]); // 80249C44
  W32(c->r[4]+0x00000008u,c->r[2]); // 80249C48
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80249C4C
  c->r[0]=mfspr(c,913); // 80249C50
  W32(c->r[4]+0x000001A8u,c->r[0]); // 80249C54
  c->r[0]=mfspr(c,914); // 80249C58
  W32(c->r[4]+0x000001ACu,c->r[0]); // 80249C5C
  c->r[0]=mfspr(c,915); // 80249C60
  W32(c->r[4]+0x000001B0u,c->r[0]); // 80249C64
  c->r[0]=mfspr(c,916); // 80249C68
  W32(c->r[4]+0x000001B4u,c->r[0]); // 80249C6C
  c->r[0]=mfspr(c,917); // 80249C70
  W32(c->r[4]+0x000001B8u,c->r[0]); // 80249C74
  c->r[0]=mfspr(c,918); // 80249C78
  W32(c->r[4]+0x000001BCu,c->r[0]); // 80249C7C
  c->r[0]=mfspr(c,919); // 80249C80
  W32(c->r[4]+0x000001C0u,c->r[0]); // 80249C84
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249C88
  f_80249990(c); return; // 80249C8C
}

// fn_80249C90
void f_80249C90(Ctx* __restrict c) {
  trace_call(0x80249C90u);
  return; // 80249C90
}

// fn_80249CA0
void f_80249CA0(Ctx* __restrict c) {
  trace_call(0x80249CA0u);
  return; // 80249CA0
}

// fn_80249CB0
void f_80249CB0(Ctx* __restrict c) {
  trace_call(0x80249CB0u);
  return; // 80249CB0
}

// fn_80249CC0
void f_80249CC0(Ctx* __restrict c) {
  trace_call(0x80249CC0u);
  return; // 80249CC0
}

// fn_80249CD0
void f_80249CD0(Ctx* __restrict c) {
  trace_call(0x80249CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249CD0
  c->r[0]=c->lr; // 80249CD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80249CD8
  c->r[11]=c->r[1]+0x00000030u; // 80249CDC
  c->lr=0x80249CE4u; f_800C2E3C(c); // 80249CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80249CE4
  c->r[26]=c->r[3]|c->r[3]; // 80249CE8
  c->r[27]=c->r[4]|c->r[4]; // 80249CEC
  if (crb(c,2)) { goto L_80249CFC; } // 80249CF0
  c->r[31]=R32(c->r[3]+0x00000000u); // 80249CF4
  goto L_80249D00; // 80249CF8
L_80249CFC:;
  c->r[31]=0u+0x00000000u; // 80249CFC
L_80249D00:;
  c->r[24]=R32(c->r[4]+0x00000028u); // 80249D00
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 80249D04
  c->r[3]=c->r[24]+c->r[0]; // 80249D08
  c->r[0]=c->r[3]+0x00000007u; // 80249D0C
  c->r[0]=c->r[0]-c->r[24]; // 80249D10
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80249D14
  c->ctr=c->r[0]; // 80249D18
  cmpu(c,0,c->r[24],c->r[3]); // 80249D1C
  if (!crb(c,0)) { goto L_80249D3C; } // 80249D20
  c->r[0]=c->r[0]|0x00000000u; // 80249D24
L_80249D28:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80249D28
  cmpu(c,0,c->r[0],c->r[31]); // 80249D2C
  if (crb(c,2)) { goto L_80249D44; } // 80249D30
  c->r[24]=c->r[24]+0x00000008u; // 80249D34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80249D28; } // 80249D38
L_80249D3C:;
  c->r[3]=0u+0x00000000u; // 80249D3C
  goto L_80249F7C; // 80249D40
L_80249D44:;
  c->r[3]=c->r[26]|c->r[26]; // 80249D44
  c->r[4]=c->r[27]|c->r[27]; // 80249D48
  c->lr=0x80249D50u; f_80249CB0(c); // 80249D4C
  c->r[30]=R32(c->r[24]+0x00000004u); // 80249D50
  c->r[29]=0u+0x00000000u; // 80249D54
  c->r[25]=0u+0x803B0000u; // 80249D58
  goto L_80249F38; // 80249D5C
L_80249D60:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 80249D60
  cmps(c,0,(int32_t)c->r[31],0); // 80249D64
  c->r[28]=c->r[28]+c->r[0]; // 80249D68
  if (crb(c,2)) { goto L_80249D88; } // 80249D6C
  c->r[0]=R8(c->r[30]+0x00000003u); // 80249D70
  c->r[3]=R32(c->r[26]+0x00000010u); // 80249D74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80249D78
  c->r[0]=R32(c->r[3]+c->r[0]); // 80249D7C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80249D80
  goto L_80249D8C; // 80249D84
L_80249D88:;
  c->r[3]=0u+0x00000000u; // 80249D88
L_80249D8C:;
  cmps(c,0,(int32_t)c->r[4],6); // 80249D8C
  if (crb(c,2)) { goto L_80249E54; } // 80249D90
  if (!crb(c,0)) { goto L_80249DC4; } // 80249D94
  cmps(c,0,(int32_t)c->r[4],2); // 80249D98
  if (crb(c,2)) { goto L_80249E04; } // 80249D9C
  if (!crb(c,0)) { goto L_80249DB4; } // 80249DA0
  cmps(c,0,(int32_t)c->r[4],0); // 80249DA4
  if (crb(c,2)) { goto L_80249F34; } // 80249DA8
  if (!crb(c,0)) { goto L_80249DF4; } // 80249DAC
  goto L_80249F28; // 80249DB0
L_80249DB4:;
  cmps(c,0,(int32_t)c->r[4],4); // 80249DB4
  if (crb(c,2)) { goto L_80249E30; } // 80249DB8
  if (!crb(c,0)) { goto L_80249E40; } // 80249DBC
  goto L_80249E20; // 80249DC0
L_80249DC4:;
  cmps(c,0,(int32_t)c->r[4],201); // 80249DC4
  if (crb(c,2)) { goto L_80249F34; } // 80249DC8
  if (!crb(c,0)) { goto L_80249DE8; } // 80249DCC
  cmps(c,0,(int32_t)c->r[4],10); // 80249DD0
  if (crb(c,2)) { goto L_80249E8C; } // 80249DD4
  if (crb(c,0)) { goto L_80249E70; } // 80249DD8
  cmps(c,0,(int32_t)c->r[4],14); // 80249DDC
  if (!crb(c,0)) { goto L_80249F28; } // 80249DE0
  goto L_80249EAC; // 80249DE4
L_80249DE8:;
  cmps(c,0,(int32_t)c->r[4],203); // 80249DE8
  if (!crb(c,0)) { goto L_80249F28; } // 80249DEC
  goto L_80249ECC; // 80249DF0
L_80249DF4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249DF4
  c->r[0]=c->r[3]+c->r[0]; // 80249DF8
  W32(c->r[28]+0x00000000u,c->r[0]); // 80249DFC
  goto L_80249F34; // 80249E00
L_80249E04:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E04
  c->r[4]=R32(c->r[28]+0x00000000u); // 80249E08
  c->r[3]=c->r[3]+c->r[0]; // 80249E0C
  c->r[0]=rotl(c->r[4],0)&0xFC000003u; // 80249E10
  c->r[0]=(rotl(c->r[3],0)&0x03FFFFFCu)|(c->r[0]&~0x03FFFFFCu); // 80249E14
  W32(c->r[28]+0x00000000u,c->r[0]); // 80249E18
  goto L_80249F34; // 80249E1C
L_80249E20:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E20
  c->r[0]=c->r[3]+c->r[0]; // 80249E24
  W16(c->r[28]+0x00000000u,c->r[0]); // 80249E28
  goto L_80249F34; // 80249E2C
L_80249E30:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E30
  c->r[0]=c->r[3]+c->r[0]; // 80249E34
  W16(c->r[28]+0x00000000u,c->r[0]); // 80249E38
  goto L_80249F34; // 80249E3C
L_80249E40:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E40
  c->r[0]=c->r[3]+c->r[0]; // 80249E44
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80249E48
  W16(c->r[28]+0x00000000u,c->r[0]); // 80249E4C
  goto L_80249F34; // 80249E50
L_80249E54:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E54
  c->r[0]=c->r[3]+c->r[0]; // 80249E58
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 80249E5C
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 80249E60
  c->r[0]=c->r[3]+c->r[0]; // 80249E64
  W16(c->r[28]+0x00000000u,c->r[0]); // 80249E68
  goto L_80249F34; // 80249E6C
L_80249E70:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E70
  c->r[4]=R32(c->r[28]+0x00000000u); // 80249E74
  c->r[3]=c->r[3]+c->r[0]; // 80249E78
  c->r[0]=rotl(c->r[4],0)&0xFFFF0003u; // 80249E7C
  c->r[0]=(rotl(c->r[3],0)&0x0000FFFCu)|(c->r[0]&~0x0000FFFCu); // 80249E80
  W32(c->r[28]+0x00000000u,c->r[0]); // 80249E84
  goto L_80249F34; // 80249E88
L_80249E8C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249E8C
  c->r[4]=R32(c->r[28]+0x00000000u); // 80249E90
  c->r[0]=c->r[3]+c->r[0]; // 80249E94
  c->r[3]=c->r[0]-c->r[28]; // 80249E98
  c->r[0]=rotl(c->r[4],0)&0xFC000003u; // 80249E9C
  c->r[0]=(rotl(c->r[3],0)&0x03FFFFFCu)|(c->r[0]&~0x03FFFFFCu); // 80249EA0
  W32(c->r[28]+0x00000000u,c->r[0]); // 80249EA4
  goto L_80249F34; // 80249EA8
L_80249EAC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 80249EAC
  c->r[4]=R32(c->r[28]+0x00000000u); // 80249EB0
  c->r[0]=c->r[3]+c->r[0]; // 80249EB4
  c->r[3]=c->r[0]-c->r[28]; // 80249EB8
  c->r[0]=rotl(c->r[4],0)&0xFFFF0003u; // 80249EBC
  c->r[0]=(rotl(c->r[3],0)&0x0000FFFCu)|(c->r[0]&~0x0000FFFCu); // 80249EC0
  W32(c->r[28]+0x00000000u,c->r[0]); // 80249EC4
  goto L_80249F34; // 80249EC8
L_80249ECC:;
  c->r[0]=R8(c->r[30]+0x00000003u); // 80249ECC
  cmps(c,0,(int32_t)c->r[29],0); // 80249ED0
  c->r[3]=R32(c->r[27]+0x00000010u); // 80249ED4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80249ED8
  c->r[23]=c->r[3]+c->r[0]; // 80249EDC
  c->r[0]=R32(c->r[3]+c->r[0]); // 80249EE0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80249EE4
  if (crb(c,2)) { goto L_80249F0C; } // 80249EE8
  c->r[0]=R32(c->r[29]+0x00000000u); // 80249EEC
  c->r[4]=R32(c->r[29]+0x00000004u); // 80249EF0
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80249EF4
  c->r[3]=c->r[24]|c->r[24]; // 80249EF8
  c->lr=0x80249F00u; f_80244E50(c); // 80249EFC
  c->r[4]=R32(c->r[29]+0x00000004u); // 80249F00
  c->r[3]=c->r[24]|c->r[24]; // 80249F04
  c->lr=0x80249F0Cu; f_80244F10(c); // 80249F08
L_80249F0C:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80249F0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80249F10
  if (crb(c,2)) { goto L_80249F20; } // 80249F14
  c->r[29]=c->r[23]|c->r[23]; // 80249F18
  goto L_80249F34; // 80249F1C
L_80249F20:;
  c->r[29]=0u+0x00000000u; // 80249F20
  goto L_80249F34; // 80249F24
L_80249F28:;
  c->r[3]=c->r[25]+0xFFFFE9A0u; // 80249F28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80249F2C
  c->lr=0x80249F34u; f_80245CC0(c); // 80249F30
L_80249F34:;
  c->r[30]=c->r[30]+0x00000008u; // 80249F34
L_80249F38:;
  c->r[4]=R8(c->r[30]+0x00000002u); // 80249F38
  cmpu(c,0,c->r[4],0x000000CBu); // 80249F3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80249D60; } // 80249F40
  cmps(c,0,(int32_t)c->r[29],0); // 80249F44
  if (crb(c,2)) { goto L_80249F6C; } // 80249F48
  c->r[0]=R32(c->r[29]+0x00000000u); // 80249F4C
  c->r[4]=R32(c->r[29]+0x00000004u); // 80249F50
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80249F54
  c->r[3]=c->r[25]|c->r[25]; // 80249F58
  c->lr=0x80249F60u; f_80244E50(c); // 80249F5C
  c->r[4]=R32(c->r[29]+0x00000004u); // 80249F60
  c->r[3]=c->r[25]|c->r[25]; // 80249F64
  c->lr=0x80249F6Cu; f_80244F10(c); // 80249F68
L_80249F6C:;
  c->r[3]=c->r[26]|c->r[26]; // 80249F6C
  c->r[4]=c->r[27]|c->r[27]; // 80249F70
  c->lr=0x80249F78u; f_80249CC0(c); // 80249F74
  c->r[3]=0u+0x00000001u; // 80249F78
L_80249F7C:;
  c->r[11]=c->r[1]+0x00000030u; // 80249F7C
  c->lr=0x80249F84u; f_800C2E88(c); // 80249F80
  c->r[0]=R32(c->r[1]+0x00000034u); // 80249F84
  c->lr=c->r[0]; // 80249F88
  c->r[1]=c->r[1]+0x00000030u; // 80249F8C
  return; // 80249F90
}

// OSLink_Link
void f_80249FA0(Ctx* __restrict c) {
  trace_call(0x80249FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80249FA0
  c->r[0]=c->lr; // 80249FA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80249FA8
  c->r[0]=0u+0x00000000u; // 80249FAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80249FB0
  c->r[31]=c->r[5]|c->r[5]; // 80249FB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80249FB8
  c->r[30]=c->r[4]|c->r[4]; // 80249FBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80249FC0
  c->r[29]=c->r[3]|c->r[3]; // 80249FC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80249FC8
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 80249FCC
  W8(c->r[3]+0x00000033u,c->r[0]); // 80249FD0
  cmpu(c,0,c->r[6],0x00000003u); // 80249FD4
  if (crb(c,1)) { goto L_8024A01C; } // 80249FD8
  cmpu(c,0,c->r[6],0x00000002u); // 80249FDC
  if (crb(c,0)) { goto L_8024A024; } // 80249FE0
  c->r[5]=R32(c->r[3]+0x00000040u); // 80249FE4
  cmps(c,0,(int32_t)c->r[5],0); // 80249FE8
  if (crb(c,2)) { goto L_8024A000; } // 80249FEC
  c->r[0]=divwu(c->r[3],c->r[5]); // 80249FF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 80249FF4
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 80249FF8
  if (!crb(c,2)) { goto L_8024A01C; } // 80249FFC
L_8024A000:;
  c->r[5]=R32(c->r[3]+0x00000044u); // 8024A000
  cmps(c,0,(int32_t)c->r[5],0); // 8024A004
  if (crb(c,2)) { goto L_8024A024; } // 8024A008
  c->r[0]=divwu(c->r[4],c->r[5]); // 8024A00C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8024A010
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 8024A014
  if (crb(c,2)) { goto L_8024A024; } // 8024A018
L_8024A01C:;
  c->r[3]=0u+0x00000000u; // 8024A01C
  goto L_8024A268; // 8024A020
L_8024A024:;
  c->r[5]=0u+0x80000000u; // 8024A024
  c->r[6]=R32(c->r[5]+0x000030CCu); // 8024A028
  cmps(c,0,(int32_t)c->r[6],0); // 8024A02C
  if (!crb(c,2)) { goto L_8024A03C; } // 8024A030
  W32(c->r[5]+0x000030C8u,c->r[3]); // 8024A034
  goto L_8024A040; // 8024A038
L_8024A03C:;
  W32(c->r[6]+0x00000004u,c->r[3]); // 8024A03C
L_8024A040:;
  c->r[0]=0u+0x00000000u; // 8024A040
  W32(c->r[3]+0x00000008u,c->r[6]); // 8024A044
  c->r[5]=0u+0x80000000u; // 8024A048
  W32(c->r[3]+0x00000004u,c->r[0]); // 8024A04C
  W32(c->r[5]+0x000030CCu,c->r[3]); // 8024A050
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8024A054
  c->r[6]=R32(c->r[3]+0x00000010u); // 8024A058
  c->r[5]=R32(c->r[3]+0x00000024u); // 8024A05C
  cmpu(c,0,c->r[0],0x00000003u); // 8024A060
  c->r[0]=R32(c->r[3]+0x00000028u); // 8024A064
  c->r[6]=c->r[6]+c->r[3]; // 8024A068
  c->r[5]=c->r[5]+c->r[3]; // 8024A06C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8024A070
  c->r[0]=c->r[0]+c->r[3]; // 8024A074
  W32(c->r[3]+0x00000024u,c->r[5]); // 8024A078
  W32(c->r[3]+0x00000028u,c->r[0]); // 8024A07C
  if (crb(c,0)) { goto L_8024A090; } // 8024A080
  c->r[0]=R32(c->r[3]+0x00000048u); // 8024A084
  c->r[0]=c->r[0]+c->r[3]; // 8024A088
  W32(c->r[3]+0x00000048u,c->r[0]); // 8024A08C
L_8024A090:;
  c->r[6]=0u+0x00000001u; // 8024A090
  c->r[5]=0u+0x00000008u; // 8024A094
  goto L_8024A0DC; // 8024A098
  c->r[0]=c->r[0]|0x00000000u; // 8024A09C
L_8024A0A0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8024A0A0
  c->r[7]=c->r[0]+c->r[5]; // 8024A0A4
  c->r[0]=R32(c->r[5]+c->r[0]); // 8024A0A8
  cmps(c,0,(int32_t)c->r[0],0); // 8024A0AC
  if (crb(c,2)) { goto L_8024A0C0; } // 8024A0B0
  c->r[0]=c->r[0]+c->r[3]; // 8024A0B4
  W32(c->r[7]+0x00000000u,c->r[0]); // 8024A0B8
  goto L_8024A0D4; // 8024A0BC
L_8024A0C0:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 8024A0C0
  cmps(c,0,(int32_t)c->r[0],0); // 8024A0C4
  if (crb(c,2)) { goto L_8024A0D4; } // 8024A0C8
  W8(c->r[3]+0x00000033u,c->r[6]); // 8024A0CC
  W32(c->r[7]+0x00000000u,c->r[4]); // 8024A0D0
L_8024A0D4:;
  c->r[5]=c->r[5]+0x00000008u; // 8024A0D4
  c->r[6]=c->r[6]+0x00000001u; // 8024A0D8
L_8024A0DC:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8024A0DC
  cmpu(c,0,c->r[6],c->r[0]); // 8024A0E0
  if (crb(c,0)) { IRQCHK(c); goto L_8024A0A0; } // 8024A0E4
  c->r[5]=R32(c->r[3]+0x00000028u); // 8024A0E8
  goto L_8024A100; // 8024A0EC
L_8024A0F0:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8024A0F0
  c->r[0]=c->r[0]+c->r[3]; // 8024A0F4
  W32(c->r[5]+0x00000004u,c->r[0]); // 8024A0F8
  c->r[5]=c->r[5]+0x00000008u; // 8024A0FC
L_8024A100:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 8024A100
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8024A104
  c->r[0]=c->r[4]+c->r[0]; // 8024A108
  cmpu(c,0,c->r[5],c->r[0]); // 8024A10C
  if (crb(c,0)) { IRQCHK(c); goto L_8024A0F0; } // 8024A110
  c->r[0]=R8(c->r[3]+0x00000030u); // 8024A114
  cmps(c,0,(int32_t)c->r[0],0); // 8024A118
  if (crb(c,2)) { goto L_8024A13C; } // 8024A11C
  c->r[4]=R32(c->r[3]+0x00000010u); // 8024A120
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8024A124
  c->r[5]=R32(c->r[3]+0x00000034u); // 8024A128
  c->r[0]=R32(c->r[4]+c->r[0]); // 8024A12C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A130
  c->r[0]=c->r[5]+c->r[0]; // 8024A134
  W32(c->r[3]+0x00000034u,c->r[0]); // 8024A138
L_8024A13C:;
  c->r[0]=R8(c->r[3]+0x00000031u); // 8024A13C
  cmps(c,0,(int32_t)c->r[0],0); // 8024A140
  if (crb(c,2)) { goto L_8024A164; } // 8024A144
  c->r[4]=R32(c->r[3]+0x00000010u); // 8024A148
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8024A14C
  c->r[5]=R32(c->r[3]+0x00000038u); // 8024A150
  c->r[0]=R32(c->r[4]+c->r[0]); // 8024A154
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A158
  c->r[0]=c->r[5]+c->r[0]; // 8024A15C
  W32(c->r[3]+0x00000038u,c->r[0]); // 8024A160
L_8024A164:;
  c->r[0]=R8(c->r[3]+0x00000032u); // 8024A164
  cmps(c,0,(int32_t)c->r[0],0); // 8024A168
  if (crb(c,2)) { goto L_8024A18C; } // 8024A16C
  c->r[4]=R32(c->r[3]+0x00000010u); // 8024A170
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8024A174
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 8024A178
  c->r[0]=R32(c->r[4]+c->r[0]); // 8024A17C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A180
  c->r[0]=c->r[5]+c->r[0]; // 8024A184
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8024A188
L_8024A18C:;
  c->r[4]=0u+0x80000000u; // 8024A18C
  c->r[4]=R32(c->r[4]+0x000030D0u); // 8024A190
  cmps(c,0,(int32_t)c->r[4],0); // 8024A194
  if (crb(c,2)) { goto L_8024A1A8; } // 8024A198
  c->r[0]=R32(c->r[3]+0x00000014u); // 8024A19C
  c->r[0]=c->r[0]+c->r[4]; // 8024A1A0
  W32(c->r[3]+0x00000014u,c->r[0]); // 8024A1A4
L_8024A1A8:;
  c->r[4]=c->r[29]|c->r[29]; // 8024A1A8
  c->r[3]=0u+0x00000000u; // 8024A1AC
  c->lr=0x8024A1B4u; f_80249CD0(c); // 8024A1B0
  c->r[3]=0u+0x80000000u; // 8024A1B4
  c->r[28]=R32(c->r[3]+0x000030C8u); // 8024A1B8
  goto L_8024A1E4; // 8024A1BC
L_8024A1C0:;
  c->r[3]=c->r[29]|c->r[29]; // 8024A1C0
  c->r[4]=c->r[28]|c->r[28]; // 8024A1C4
  c->lr=0x8024A1CCu; f_80249CD0(c); // 8024A1C8
  cmpu(c,0,c->r[28],c->r[29]); // 8024A1CC
  if (crb(c,2)) { goto L_8024A1E0; } // 8024A1D0
  c->r[3]=c->r[28]|c->r[28]; // 8024A1D4
  c->r[4]=c->r[29]|c->r[29]; // 8024A1D8
  c->lr=0x8024A1E0u; f_80249CD0(c); // 8024A1DC
L_8024A1E0:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 8024A1E0
L_8024A1E4:;
  cmps(c,0,(int32_t)c->r[28],0); // 8024A1E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A1C0; } // 8024A1E8
  cmps(c,0,(int32_t)c->r[31],0); // 8024A1EC
  if (crb(c,2)) { goto L_8024A24C; } // 8024A1F0
  c->r[4]=R32(c->r[29]+0x00000028u); // 8024A1F4
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 8024A1F8
  c->r[5]=c->r[4]|c->r[4]; // 8024A1FC
  c->r[3]=c->r[4]+c->r[0]; // 8024A200
  c->r[0]=c->r[3]+0x00000007u; // 8024A204
  c->r[0]=c->r[0]-c->r[4]; // 8024A208
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8024A20C
  c->ctr=c->r[0]; // 8024A210
  cmpu(c,0,c->r[4],c->r[3]); // 8024A214
  if (!crb(c,0)) { goto L_8024A24C; } // 8024A218
  c->r[0]=c->r[0]|0x00000000u; // 8024A21C
L_8024A220:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8024A220
  cmps(c,0,(int32_t)c->r[3],0); // 8024A224
  if (crb(c,2)) { goto L_8024A238; } // 8024A228
  c->r[0]=R32(c->r[29]+0x00000000u); // 8024A22C
  cmpu(c,0,c->r[3],c->r[0]); // 8024A230
  if (!crb(c,2)) { goto L_8024A244; } // 8024A234
L_8024A238:;
  c->r[0]=c->r[5]-c->r[4]; // 8024A238
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8024A23C
  goto L_8024A24C; // 8024A240
L_8024A244:;
  c->r[5]=c->r[5]+0x00000008u; // 8024A244
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024A220; } // 8024A248
L_8024A24C:;
  c->r[5]=R32(c->r[29]+0x00000020u); // 8024A24C
  c->r[3]=c->r[30]|c->r[30]; // 8024A250
  c->r[4]=0u+0x00000000u; // 8024A254
  c->lr=0x8024A25Cu; f_80004350(c); // 8024A258
  c->r[3]=c->r[29]|c->r[29]; // 8024A25C
  c->lr=0x8024A264u; f_80249C90(c); // 8024A260
  c->r[3]=0u+0x00000001u; // 8024A264
L_8024A268:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024A268
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024A26C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024A270
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024A274
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024A278
  c->lr=c->r[0]; // 8024A27C
  c->r[1]=c->r[1]+0x00000020u; // 8024A280
  return; // 8024A284
}

// fn_8024A290
void f_8024A290(Ctx* __restrict c) {
  trace_call(0x8024A290u);
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8024A290
  cmpu(c,0,c->r[0],0x00000003u); // 8024A294
  if (!crb(c,2)) { goto L_8024A2A4; } // 8024A298
  c->r[5]=0u+0x00000001u; // 8024A29C
  f_80249FA0(c); return; // 8024A2A0
L_8024A2A4:;
  c->r[3]=0u+0x00000000u; // 8024A2A4
  return; // 8024A2A8
}

// fn_8024A2B0
void f_8024A2B0(Ctx* __restrict c) {
  trace_call(0x8024A2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A2B0
  c->r[0]=c->lr; // 8024A2B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024A2B8
  c->r[11]=c->r[1]+0x00000030u; // 8024A2BC
  c->lr=0x8024A2C4u; f_800C2E3C(c); // 8024A2C0
  c->r[25]=R32(c->r[4]+0x00000028u); // 8024A2C4
  c->r[26]=c->r[3]|c->r[3]; // 8024A2C8
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8024A2CC
  c->r[27]=c->r[4]|c->r[4]; // 8024A2D0
  c->r[4]=R32(c->r[3]+0x00000000u); // 8024A2D4
  c->r[3]=c->r[25]+c->r[0]; // 8024A2D8
  c->r[0]=c->r[3]+0x00000007u; // 8024A2DC
  c->r[0]=c->r[0]-c->r[25]; // 8024A2E0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8024A2E4
  c->ctr=c->r[0]; // 8024A2E8
  cmpu(c,0,c->r[25],c->r[3]); // 8024A2EC
  if (!crb(c,0)) { goto L_8024A30C; } // 8024A2F0
  c->r[0]=c->r[0]|0x00000000u; // 8024A2F4
L_8024A2F8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8024A2F8
  cmpu(c,0,c->r[0],c->r[4]); // 8024A2FC
  if (crb(c,2)) { goto L_8024A314; } // 8024A300
  c->r[25]=c->r[25]+0x00000008u; // 8024A304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024A2F8; } // 8024A308
L_8024A30C:;
  c->r[3]=0u+0x00000000u; // 8024A30C
  goto L_8024A4D8; // 8024A310
L_8024A314:;
  c->r[3]=c->r[26]|c->r[26]; // 8024A314
  c->r[4]=c->r[27]|c->r[27]; // 8024A318
  c->lr=0x8024A320u; f_80249CB0(c); // 8024A31C
  c->r[30]=R32(c->r[25]+0x00000004u); // 8024A320
  c->r[29]=0u+0x00000000u; // 8024A324
  c->r[25]=0u+0x803B0000u; // 8024A328
  c->r[31]=0u+0x00000000u; // 8024A32C
  goto L_8024A494; // 8024A330
L_8024A334:;
  c->r[3]=R16(c->r[30]+0x00000000u); // 8024A334
  cmps(c,0,(int32_t)c->r[4],6); // 8024A338
  c->r[0]=R8(c->r[30]+0x00000003u); // 8024A33C
  c->r[5]=0u+0x00000000u; // 8024A340
  c->r[28]=c->r[28]+c->r[3]; // 8024A344
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024A348
  if (crb(c,2)) { goto L_8024A3E0; } // 8024A34C
  if (!crb(c,0)) { goto L_8024A380; } // 8024A350
  cmps(c,0,(int32_t)c->r[4],2); // 8024A354
  if (crb(c,2)) { goto L_8024A3B8; } // 8024A358
  if (!crb(c,0)) { goto L_8024A370; } // 8024A35C
  cmps(c,0,(int32_t)c->r[4],0); // 8024A360
  if (crb(c,2)) { goto L_8024A490; } // 8024A364
  if (!crb(c,0)) { goto L_8024A3B0; } // 8024A368
  goto L_8024A484; // 8024A36C
L_8024A370:;
  cmps(c,0,(int32_t)c->r[4],4); // 8024A370
  if (crb(c,2)) { goto L_8024A3D0; } // 8024A374
  if (!crb(c,0)) { goto L_8024A3D8; } // 8024A378
  goto L_8024A3C8; // 8024A37C
L_8024A380:;
  cmps(c,0,(int32_t)c->r[4],201); // 8024A380
  if (crb(c,2)) { goto L_8024A490; } // 8024A384
  if (!crb(c,0)) { goto L_8024A3A4; } // 8024A388
  cmps(c,0,(int32_t)c->r[4],10); // 8024A38C
  if (crb(c,2)) { goto L_8024A3F8; } // 8024A390
  if (crb(c,0)) { goto L_8024A3E8; } // 8024A394
  cmps(c,0,(int32_t)c->r[4],14); // 8024A398
  if (!crb(c,0)) { goto L_8024A484; } // 8024A39C
  goto L_8024A420; // 8024A3A0
L_8024A3A4:;
  cmps(c,0,(int32_t)c->r[4],203); // 8024A3A4
  if (!crb(c,0)) { goto L_8024A484; } // 8024A3A8
  goto L_8024A430; // 8024A3AC
L_8024A3B0:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 8024A3B0
  goto L_8024A490; // 8024A3B4
L_8024A3B8:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8024A3B8
  c->r[0]=rotl(c->r[0],0)&0xFC000003u; // 8024A3BC
  W32(c->r[28]+0x00000000u,c->r[0]); // 8024A3C0
  goto L_8024A490; // 8024A3C4
L_8024A3C8:;
  W16(c->r[28]+0x00000000u,c->r[31]); // 8024A3C8
  goto L_8024A490; // 8024A3CC
L_8024A3D0:;
  W16(c->r[28]+0x00000000u,c->r[31]); // 8024A3D0
  goto L_8024A490; // 8024A3D4
L_8024A3D8:;
  W16(c->r[28]+0x00000000u,c->r[31]); // 8024A3D8
  goto L_8024A490; // 8024A3DC
L_8024A3E0:;
  W16(c->r[28]+0x00000000u,c->r[31]); // 8024A3E0
  goto L_8024A490; // 8024A3E4
L_8024A3E8:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8024A3E8
  c->r[0]=rotl(c->r[0],0)&0xFFFF0003u; // 8024A3EC
  W32(c->r[28]+0x00000000u,c->r[0]); // 8024A3F0
  goto L_8024A490; // 8024A3F4
L_8024A3F8:;
  c->r[0]=R8(c->r[27]+0x00000032u); // 8024A3F8
  cmps(c,0,(int32_t)c->r[0],0); // 8024A3FC
  if (crb(c,2)) { goto L_8024A40C; } // 8024A400
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 8024A404
  c->r[5]=c->r[0]-c->r[28]; // 8024A408
L_8024A40C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8024A40C
  c->r[0]=rotl(c->r[0],0)&0xFC000003u; // 8024A410
  c->r[0]=(rotl(c->r[5],0)&0x03FFFFFCu)|(c->r[0]&~0x03FFFFFCu); // 8024A414
  W32(c->r[28]+0x00000000u,c->r[0]); // 8024A418
  goto L_8024A490; // 8024A41C
L_8024A420:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8024A420
  c->r[0]=rotl(c->r[0],0)&0xFFFF0003u; // 8024A424
  W32(c->r[28]+0x00000000u,c->r[0]); // 8024A428
  goto L_8024A490; // 8024A42C
L_8024A430:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 8024A430
  cmps(c,0,(int32_t)c->r[29],0); // 8024A434
  c->r[24]=c->r[0]+c->r[3]; // 8024A438
  c->r[0]=R32(c->r[3]+c->r[0]); // 8024A43C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A440
  if (crb(c,2)) { goto L_8024A468; } // 8024A444
  c->r[0]=R32(c->r[29]+0x00000000u); // 8024A448
  c->r[4]=R32(c->r[29]+0x00000004u); // 8024A44C
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A450
  c->r[3]=c->r[23]|c->r[23]; // 8024A454
  c->lr=0x8024A45Cu; f_80244E50(c); // 8024A458
  c->r[4]=R32(c->r[29]+0x00000004u); // 8024A45C
  c->r[3]=c->r[23]|c->r[23]; // 8024A460
  c->lr=0x8024A468u; f_80244F10(c); // 8024A464
L_8024A468:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8024A468
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024A46C
  if (crb(c,2)) { goto L_8024A47C; } // 8024A470
  c->r[29]=c->r[24]|c->r[24]; // 8024A474
  goto L_8024A490; // 8024A478
L_8024A47C:;
  c->r[29]=0u+0x00000000u; // 8024A47C
  goto L_8024A490; // 8024A480
L_8024A484:;
  c->r[3]=c->r[25]+0xFFFFE9C8u; // 8024A484
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024A488
  c->lr=0x8024A490u; f_80245CC0(c); // 8024A48C
L_8024A490:;
  c->r[30]=c->r[30]+0x00000008u; // 8024A490
L_8024A494:;
  c->r[4]=R8(c->r[30]+0x00000002u); // 8024A494
  cmpu(c,0,c->r[4],0x000000CBu); // 8024A498
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A334; } // 8024A49C
  cmps(c,0,(int32_t)c->r[29],0); // 8024A4A0
  if (crb(c,2)) { goto L_8024A4C8; } // 8024A4A4
  c->r[0]=R32(c->r[29]+0x00000000u); // 8024A4A8
  c->r[4]=R32(c->r[29]+0x00000004u); // 8024A4AC
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8024A4B0
  c->r[3]=c->r[25]|c->r[25]; // 8024A4B4
  c->lr=0x8024A4BCu; f_80244E50(c); // 8024A4B8
  c->r[4]=R32(c->r[29]+0x00000004u); // 8024A4BC
  c->r[3]=c->r[25]|c->r[25]; // 8024A4C0
  c->lr=0x8024A4C8u; f_80244F10(c); // 8024A4C4
L_8024A4C8:;
  c->r[3]=c->r[26]|c->r[26]; // 8024A4C8
  c->r[4]=c->r[27]|c->r[27]; // 8024A4CC
  c->lr=0x8024A4D4u; f_80249CC0(c); // 8024A4D0
  c->r[3]=0u+0x00000001u; // 8024A4D4
L_8024A4D8:;
  c->r[11]=c->r[1]+0x00000030u; // 8024A4D8
  c->lr=0x8024A4E0u; f_800C2E88(c); // 8024A4DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024A4E0
  c->lr=c->r[0]; // 8024A4E4
  c->r[1]=c->r[1]+0x00000030u; // 8024A4E8
  return; // 8024A4EC
}

// OSUnlink
void f_8024A4F0(Ctx* __restrict c) {
  trace_call(0x8024A4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A4F0
  c->r[0]=c->lr; // 8024A4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A4F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024A4FC
  c->r[31]=c->r[3]|c->r[3]; // 8024A500
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024A504
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024A508
  c->r[5]=R32(c->r[3]+0x00000008u); // 8024A50C
  cmps(c,0,(int32_t)c->r[4],0); // 8024A510
  if (!crb(c,2)) { goto L_8024A524; } // 8024A514
  c->r[3]=0u+0x80000000u; // 8024A518
  W32(c->r[3]+0x000030CCu,c->r[5]); // 8024A51C
  goto L_8024A528; // 8024A520
L_8024A524:;
  W32(c->r[4]+0x00000008u,c->r[5]); // 8024A524
L_8024A528:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024A528
  if (!crb(c,2)) { goto L_8024A53C; } // 8024A52C
  c->r[3]=0u+0x80000000u; // 8024A530
  W32(c->r[3]+0x000030C8u,c->r[4]); // 8024A534
  goto L_8024A540; // 8024A538
L_8024A53C:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 8024A53C
L_8024A540:;
  c->r[3]=0u+0x80000000u; // 8024A540
  c->r[30]=R32(c->r[3]+0x000030C8u); // 8024A544
  goto L_8024A55C; // 8024A548
L_8024A54C:;
  c->r[3]=c->r[31]|c->r[31]; // 8024A54C
  c->r[4]=c->r[30]|c->r[30]; // 8024A550
  c->lr=0x8024A558u; f_8024A2B0(c); // 8024A554
  c->r[30]=R32(c->r[30]+0x00000004u); // 8024A558
L_8024A55C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024A55C
  if (!crb(c,2)) { IRQCHK(c); goto L_8024A54C; } // 8024A560
  c->r[3]=c->r[31]|c->r[31]; // 8024A564
  c->lr=0x8024A56Cu; f_80249CA0(c); // 8024A568
  c->r[3]=0u+0x80000000u; // 8024A56C
  c->r[3]=R32(c->r[3]+0x000030D0u); // 8024A570
  cmps(c,0,(int32_t)c->r[3],0); // 8024A574
  if (crb(c,2)) { goto L_8024A588; } // 8024A578
  c->r[0]=R32(c->r[31]+0x00000014u); // 8024A57C
  c->r[0]=c->r[0]-c->r[3]; // 8024A580
  W32(c->r[31]+0x00000014u,c->r[0]); // 8024A584
L_8024A588:;
  c->r[0]=R8(c->r[31]+0x00000030u); // 8024A588
  cmps(c,0,(int32_t)c->r[0],0); // 8024A58C
  if (crb(c,2)) { goto L_8024A5B0; } // 8024A590
  c->r[4]=R32(c->r[31]+0x00000010u); // 8024A594
  c->r[3]=rotl(c->r[0],3)&0x000007F8u; // 8024A598
  c->r[0]=R32(c->r[31]+0x00000034u); // 8024A59C
  c->r[3]=R32(c->r[4]+c->r[3]); // 8024A5A0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 8024A5A4
  c->r[0]=c->r[0]-c->r[3]; // 8024A5A8
  W32(c->r[31]+0x00000034u,c->r[0]); // 8024A5AC
L_8024A5B0:;
  c->r[0]=R8(c->r[31]+0x00000031u); // 8024A5B0
  cmps(c,0,(int32_t)c->r[0],0); // 8024A5B4
  if (crb(c,2)) { goto L_8024A5D8; } // 8024A5B8
  c->r[4]=R32(c->r[31]+0x00000010u); // 8024A5BC
  c->r[3]=rotl(c->r[0],3)&0x000007F8u; // 8024A5C0
  c->r[0]=R32(c->r[31]+0x00000038u); // 8024A5C4
  c->r[3]=R32(c->r[4]+c->r[3]); // 8024A5C8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 8024A5CC
  c->r[0]=c->r[0]-c->r[3]; // 8024A5D0
  W32(c->r[31]+0x00000038u,c->r[0]); // 8024A5D4
L_8024A5D8:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 8024A5D8
  cmps(c,0,(int32_t)c->r[0],0); // 8024A5DC
  if (crb(c,2)) { goto L_8024A600; } // 8024A5E0
  c->r[4]=R32(c->r[31]+0x00000010u); // 8024A5E4
  c->r[3]=rotl(c->r[0],3)&0x000007F8u; // 8024A5E8
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8024A5EC
  c->r[3]=R32(c->r[4]+c->r[3]); // 8024A5F0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 8024A5F4
  c->r[0]=c->r[0]-c->r[3]; // 8024A5F8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8024A5FC
L_8024A600:;
  c->r[4]=R32(c->r[31]+0x00000028u); // 8024A600
  goto L_8024A618; // 8024A604
L_8024A608:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8024A608
  c->r[0]=c->r[0]-c->r[31]; // 8024A60C
  W32(c->r[4]+0x00000004u,c->r[0]); // 8024A610
  c->r[4]=c->r[4]+0x00000008u; // 8024A614
L_8024A618:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8024A618
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8024A61C
  c->r[0]=c->r[3]+c->r[0]; // 8024A620
  cmpu(c,0,c->r[4],c->r[0]); // 8024A624
  if (crb(c,0)) { IRQCHK(c); goto L_8024A608; } // 8024A628
  c->r[6]=0u+0x00000001u; // 8024A62C
  c->r[5]=0u+0x00000008u; // 8024A630
  c->r[3]=0u+0x00000000u; // 8024A634
  goto L_8024A678; // 8024A638
  c->r[0]=c->r[0]|0x00000000u; // 8024A63C
L_8024A640:;
  c->r[0]=R8(c->r[31]+0x00000033u); // 8024A640
  c->r[4]=R32(c->r[31]+0x00000010u); // 8024A644
  cmpu(c,0,c->r[6],c->r[0]); // 8024A648
  if (!crb(c,2)) { goto L_8024A65C; } // 8024A64C
  W8(c->r[31]+0x00000033u,c->r[3]); // 8024A650
  W32(c->r[4]+c->r[5],c->r[3]); // 8024A654
  goto L_8024A670; // 8024A658
L_8024A65C:;
  c->r[0]=R32(c->r[4]+c->r[5]); // 8024A65C
  cmps(c,0,(int32_t)c->r[0],0); // 8024A660
  if (crb(c,2)) { goto L_8024A670; } // 8024A664
  c->r[0]=c->r[0]-c->r[31]; // 8024A668
  W32(c->r[4]+c->r[5],c->r[0]); // 8024A66C
L_8024A670:;
  c->r[5]=c->r[5]+0x00000008u; // 8024A670
  c->r[6]=c->r[6]+0x00000001u; // 8024A674
L_8024A678:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8024A678
  cmpu(c,0,c->r[6],c->r[0]); // 8024A67C
  if (crb(c,0)) { IRQCHK(c); goto L_8024A640; } // 8024A680
  c->r[5]=R32(c->r[31]+0x00000024u); // 8024A684
  c->r[3]=0u+0x00000001u; // 8024A688
  c->r[4]=R32(c->r[31]+0x00000028u); // 8024A68C
  c->r[0]=R32(c->r[31]+0x00000010u); // 8024A690
  c->r[5]=c->r[5]-c->r[31]; // 8024A694
  c->r[4]=c->r[4]-c->r[31]; // 8024A698
  W32(c->r[31]+0x00000024u,c->r[5]); // 8024A69C
  c->r[0]=c->r[0]-c->r[31]; // 8024A6A0
  W32(c->r[31]+0x00000028u,c->r[4]); // 8024A6A4
  W32(c->r[31]+0x00000010u,c->r[0]); // 8024A6A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024A6AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024A6B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A6B4
  c->lr=c->r[0]; // 8024A6B8
  c->r[1]=c->r[1]+0x00000010u; // 8024A6BC
  return; // 8024A6C0
}

// __OSModuleInit
void f_8024A6D0(Ctx* __restrict c) {
  trace_call(0x8024A6D0u);
  c->r[3]=0u+0x80000000u; // 8024A6D0
  c->r[0]=0u+0x00000000u; // 8024A6D4
  W32(c->r[3]+0x000030CCu,c->r[0]); // 8024A6D8
  W32(c->r[3]+0x000030C8u,c->r[0]); // 8024A6DC
  W32(c->r[3]+0x000030D0u,c->r[0]); // 8024A6E0
  return; // 8024A6E4
}

// OSInitMessageQueue
void f_8024A6F0(Ctx* __restrict c) {
  trace_call(0x8024A6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A6F0
  c->r[0]=c->lr; // 8024A6F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024A6F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024A6FC
  c->r[31]=c->r[5]|c->r[5]; // 8024A700
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024A704
  c->r[30]=c->r[4]|c->r[4]; // 8024A708
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024A70C
  c->r[29]=c->r[3]|c->r[3]; // 8024A710
  c->lr=0x8024A718u; f_8024CDF0(c); // 8024A714
  c->r[3]=c->r[29]+0x00000008u; // 8024A718
  c->lr=0x8024A720u; f_8024CDF0(c); // 8024A71C
  c->r[0]=0u+0x00000000u; // 8024A720
  W32(c->r[29]+0x00000010u,c->r[30]); // 8024A724
  W32(c->r[29]+0x00000014u,c->r[31]); // 8024A728
  W32(c->r[29]+0x00000018u,c->r[0]); // 8024A72C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8024A730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024A734
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024A738
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024A73C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024A740
  c->lr=c->r[0]; // 8024A744
  c->r[1]=c->r[1]+0x00000020u; // 8024A748
  return; // 8024A74C
}

// OSSendMessage
void f_8024A750(Ctx* __restrict c) {
  trace_call(0x8024A750u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A750
  c->r[0]=c->lr; // 8024A754
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024A758
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024A75C
  c->r[31]=c->r[5]|c->r[5]; // 8024A760
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024A764
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024A768
  c->r[29]=c->r[4]|c->r[4]; // 8024A76C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024A770
  c->r[28]=c->r[3]|c->r[3]; // 8024A774
  c->lr=0x8024A77Cu; f_802494C0(c); // 8024A778
  c->r[30]=c->r[3]|c->r[3]; // 8024A77C
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 8024A780
  goto L_8024A7A8; // 8024A784
L_8024A788:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024A788
  if (!crb(c,2)) { goto L_8024A7A0; } // 8024A78C
  c->r[3]=c->r[30]|c->r[30]; // 8024A790
  c->lr=0x8024A798u; f_80249500(c); // 8024A794
  c->r[3]=0u+0x00000000u; // 8024A798
  goto L_8024A7F8; // 8024A79C
L_8024A7A0:;
  c->r[3]=c->r[28]|c->r[28]; // 8024A7A0
  c->lr=0x8024A7A8u; f_8024DEC0(c); // 8024A7A4
L_8024A7A8:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8024A7A8
  c->r[6]=R32(c->r[28]+0x00000014u); // 8024A7AC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8024A7B0
  if (!crb(c,1)) { IRQCHK(c); goto L_8024A788; } // 8024A7B4
  c->r[0]=R32(c->r[28]+0x00000018u); // 8024A7B8
  c->r[3]=c->r[28]+0x00000008u; // 8024A7BC
  c->r[5]=R32(c->r[28]+0x00000010u); // 8024A7C0
  c->r[4]=c->r[0]+c->r[4]; // 8024A7C4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 8024A7C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8024A7CC
  c->r[0]=c->r[4]-c->r[0]; // 8024A7D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024A7D4
  W32(c->r[5]+c->r[0],c->r[29]); // 8024A7D8
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8024A7DC
  c->r[0]=c->r[4]+0x00000001u; // 8024A7E0
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8024A7E4
  c->lr=0x8024A7ECu; f_8024DFB0(c); // 8024A7E8
  c->r[3]=c->r[30]|c->r[30]; // 8024A7EC
  c->lr=0x8024A7F4u; f_80249500(c); // 8024A7F0
  c->r[3]=0u+0x00000001u; // 8024A7F4
L_8024A7F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024A7F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024A7FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024A800
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024A804
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024A808
  c->lr=c->r[0]; // 8024A80C
  c->r[1]=c->r[1]+0x00000020u; // 8024A810
  return; // 8024A814
}

// OSReceiveMessage
void f_8024A820(Ctx* __restrict c) {
  trace_call(0x8024A820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A820
  c->r[0]=c->lr; // 8024A824
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024A828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024A82C
  c->r[31]=c->r[3]|c->r[3]; // 8024A830
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024A834
  c->r[30]=c->r[5]|c->r[5]; // 8024A838
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024A83C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024A840
  c->r[28]=c->r[4]|c->r[4]; // 8024A844
  c->lr=0x8024A84Cu; f_802494C0(c); // 8024A848
  c->r[29]=c->r[3]|c->r[3]; // 8024A84C
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 8024A850
  goto L_8024A878; // 8024A854
L_8024A858:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024A858
  if (!crb(c,2)) { goto L_8024A870; } // 8024A85C
  c->r[3]=c->r[29]|c->r[29]; // 8024A860
  c->lr=0x8024A868u; f_80249500(c); // 8024A864
  c->r[3]=0u+0x00000000u; // 8024A868
  goto L_8024A8DC; // 8024A86C
L_8024A870:;
  c->r[3]=c->r[31]+0x00000008u; // 8024A870
  c->lr=0x8024A878u; f_8024DEC0(c); // 8024A874
L_8024A878:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8024A878
  cmps(c,0,(int32_t)c->r[0],0); // 8024A87C
  if (crb(c,2)) { IRQCHK(c); goto L_8024A858; } // 8024A880
  cmps(c,0,(int32_t)c->r[28],0); // 8024A884
  if (crb(c,2)) { goto L_8024A8A0; } // 8024A888
  c->r[0]=R32(c->r[31]+0x00000018u); // 8024A88C
  c->r[3]=R32(c->r[31]+0x00000010u); // 8024A890
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024A894
  c->r[0]=R32(c->r[3]+c->r[0]); // 8024A898
  W32(c->r[28]+0x00000000u,c->r[0]); // 8024A89C
L_8024A8A0:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8024A8A0
  c->r[3]=c->r[31]|c->r[31]; // 8024A8A4
  c->r[6]=R32(c->r[31]+0x00000014u); // 8024A8A8
  c->r[7]=c->r[4]+0x00000001u; // 8024A8AC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8024A8B0
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 8024A8B4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8024A8B8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8024A8BC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8024A8C0
  c->r[0]=c->r[7]-c->r[0]; // 8024A8C4
  W32(c->r[31]+0x00000018u,c->r[0]); // 8024A8C8
  c->lr=0x8024A8D0u; f_8024DFB0(c); // 8024A8CC
  c->r[3]=c->r[29]|c->r[29]; // 8024A8D0
  c->lr=0x8024A8D8u; f_80249500(c); // 8024A8D4
  c->r[3]=0u+0x00000001u; // 8024A8D8
L_8024A8DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024A8DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024A8E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024A8E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024A8E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024A8EC
  c->lr=c->r[0]; // 8024A8F0
  c->r[1]=c->r[1]+0x00000020u; // 8024A8F4
  return; // 8024A8F8
}

// OSGetPhysicalMem2Size
void f_8024A900(Ctx* __restrict c) {
  trace_call(0x8024A900u);
  c->r[3]=0u+0x80000000u; // 8024A900
  c->r[3]=R32(c->r[3]+0x00003118u); // 8024A904
  return; // 8024A908
}

// OSGetConsoleSimulatedMem1Size
void f_8024A910(Ctx* __restrict c) {
  trace_call(0x8024A910u);
  c->r[3]=0u+0x80000000u; // 8024A910
  c->r[3]=R32(c->r[3]+0x00003104u); // 8024A914
  return; // 8024A918
}

// OSGetConsoleSimulatedMem2Size
void f_8024A920(Ctx* __restrict c) {
  trace_call(0x8024A920u);
  c->r[3]=0u+0x80000000u; // 8024A920
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 8024A924
  return; // 8024A928
}

// OnShutdown
void f_8024A930(Ctx* __restrict c) {
  trace_call(0x8024A930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024A930
  c->r[0]=c->lr; // 8024A934
  cmps(c,0,(int32_t)c->r[3],0); // 8024A938
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024A93C
  if (crb(c,2)) { goto L_8024A958; } // 8024A940
  c->r[3]=0u+0xCC000000u; // 8024A944
  c->r[0]=0u+0x000000FFu; // 8024A948
  W16(c->r[3]+0x00004010u,c->r[0]); // 8024A94C
  c->r[3]=0u+0xF0000000u; // 8024A950
  c->lr=0x8024A958u; f_80249890(c); // 8024A954
L_8024A958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024A958
  c->r[3]=0u+0x00000001u; // 8024A95C
  c->lr=c->r[0]; // 8024A960
  c->r[1]=c->r[1]+0x00000010u; // 8024A964
  return; // 8024A968
}

// MEMIntrruptHandler
void f_8024A970(Ctx* __restrict c) {
  trace_call(0x8024A970u);
  c->r[8]=0u+0xCC000000u; // 8024A970
  c->r[3]=0u+0x804A0000u; // 8024A974
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 8024A978
  c->r[0]=0u+0x00000000u; // 8024A97C
  c->r[7]=R16(c->r[8]+0x00004024u); // 8024A980
  c->r[3]=c->r[3]+0xFFFFC4B0u; // 8024A984
  c->r[6]=R16(c->r[8]+0x00004022u); // 8024A988
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 8024A98C
  W16(c->r[8]+0x00004020u,c->r[0]); // 8024A990
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8024A994
  cmps(c,0,(int32_t)c->r[12],0); // 8024A998
  if (crb(c,2)) { goto L_8024A9B0; } // 8024A99C
  c->r[3]=0u+0x0000000Fu; // 8024A9A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024A9A4
  c->ctr=c->r[12]; // 8024A9A8
  if (true) { dispatch(c,c->ctr); return; } // 8024A9AC
L_8024A9B0:;
  c->r[3]=0u+0x0000000Fu; // 8024A9B0
  f_80246100(c); return; // 8024A9B4
}

// ConfigMEM1_24MB
void f_8024A9C0(Ctx* __restrict c) {
  trace_call(0x8024A9C0u);
  c->r[7]=0u+0x00000000u; // 8024A9C0
  c->r[4]=0u+0x00000000u; // 8024A9C4
  c->r[4]=c->r[4]+0x00000002u; // 8024A9C8
  c->r[3]=0u+0x80000000u; // 8024A9CC
  c->r[3]=c->r[3]+0x000001FFu; // 8024A9D0
  c->r[6]=0u+0x01000000u; // 8024A9D4
  c->r[6]=c->r[6]+0x00000002u; // 8024A9D8
  c->r[5]=0u+0x81000000u; // 8024A9DC
  c->r[5]=c->r[5]+0x000000FFu; // 8024A9E0
  /* isync */ // 8024A9E4
  mtspr(c,536,c->r[7]); // 8024A9E8
  mtspr(c,537,c->r[4]); // 8024A9EC
  mtspr(c,536,c->r[3]); // 8024A9F0
  /* isync */ // 8024A9F4
  mtspr(c,528,c->r[7]); // 8024A9F8
  mtspr(c,529,c->r[4]); // 8024A9FC
  mtspr(c,528,c->r[3]); // 8024AA00
  /* isync */ // 8024AA04
  mtspr(c,540,c->r[7]); // 8024AA08
  mtspr(c,541,c->r[6]); // 8024AA0C
  mtspr(c,540,c->r[5]); // 8024AA10
  /* isync */ // 8024AA14
  mtspr(c,532,c->r[7]); // 8024AA18
  mtspr(c,533,c->r[6]); // 8024AA1C
  mtspr(c,532,c->r[5]); // 8024AA20
  /* isync */ // 8024AA24
  c->r[3]=c->msr; // 8024AA28
  c->r[3]=c->r[3]|0x00000030u; // 8024AA2C
  mtspr(c,27,c->r[3]); // 8024AA30
  c->r[3]=c->lr; // 8024AA34
  mtspr(c,26,c->r[3]); // 8024AA38
  return; /* rfi */ // 8024AA3C
  f_8024AA40(c);
}

// ConfigMEM2_52MB
void f_8024AA40(Ctx* __restrict c) {
  trace_call(0x8024AA40u);
  c->r[7]=0u+0x00000000u; // 8024AA40
  c->r[4]=0u+0x10000000u; // 8024AA44
  c->r[4]=c->r[4]+0x00000002u; // 8024AA48
  c->r[3]=0u+0x90000000u; // 8024AA4C
  c->r[3]=c->r[3]+0x000003FFu; // 8024AA50
  c->r[6]=0u+0x10000000u; // 8024AA54
  c->r[6]=c->r[6]+0x0000002Au; // 8024AA58
  c->r[5]=0u+0xD0000000u; // 8024AA5C
  c->r[5]=c->r[5]+0x000007FFu; // 8024AA60
  /* isync */ // 8024AA64
  mtspr(c,568,c->r[7]); // 8024AA68
  mtspr(c,569,c->r[4]); // 8024AA6C
  mtspr(c,568,c->r[3]); // 8024AA70
  /* isync */ // 8024AA74
  mtspr(c,560,c->r[7]); // 8024AA78
  mtspr(c,561,c->r[7]); // 8024AA7C
  /* isync */ // 8024AA80
  mtspr(c,570,c->r[7]); // 8024AA84
  mtspr(c,571,c->r[6]); // 8024AA88
  mtspr(c,570,c->r[5]); // 8024AA8C
  /* isync */ // 8024AA90
  mtspr(c,562,c->r[7]); // 8024AA94
  mtspr(c,563,c->r[7]); // 8024AA98
  /* isync */ // 8024AA9C
  c->r[4]=0u+0x12000000u; // 8024AAA0
  c->r[4]=c->r[4]+0x00000002u; // 8024AAA4
  c->r[3]=0u+0x92000000u; // 8024AAA8
  c->r[3]=c->r[3]+0x000001FFu; // 8024AAAC
  c->r[6]=0u+0x13000000u; // 8024AAB0
  c->r[6]=c->r[6]+0x00000002u; // 8024AAB4
  c->r[5]=0u+0x93000000u; // 8024AAB8
  c->r[5]=c->r[5]+0x0000007Fu; // 8024AABC
  /* isync */ // 8024AAC0
  mtspr(c,572,c->r[7]); // 8024AAC4
  mtspr(c,573,c->r[4]); // 8024AAC8
  mtspr(c,572,c->r[3]); // 8024AACC
  /* isync */ // 8024AAD0
  mtspr(c,564,c->r[7]); // 8024AAD4
  mtspr(c,565,c->r[7]); // 8024AAD8
  /* isync */ // 8024AADC
  mtspr(c,574,c->r[7]); // 8024AAE0
  mtspr(c,575,c->r[6]); // 8024AAE4
  mtspr(c,574,c->r[5]); // 8024AAE8
  /* isync */ // 8024AAEC
  mtspr(c,566,c->r[7]); // 8024AAF0
  mtspr(c,567,c->r[7]); // 8024AAF4
  /* isync */ // 8024AAF8
  c->r[3]=c->msr; // 8024AAFC
  c->r[3]=c->r[3]|0x00000030u; // 8024AB00
  mtspr(c,27,c->r[3]); // 8024AB04
  c->r[3]=c->lr; // 8024AB08
  mtspr(c,26,c->r[3]); // 8024AB0C
  return; /* rfi */ // 8024AB10
}

// ConfigMEM2_56MB
void f_8024AB20(Ctx* __restrict c) {
  trace_call(0x8024AB20u);
  c->r[7]=0u+0x00000000u; // 8024AB20
  c->r[4]=0u+0x10000000u; // 8024AB24
  c->r[4]=c->r[4]+0x00000002u; // 8024AB28
  c->r[3]=0u+0x90000000u; // 8024AB2C
  c->r[3]=c->r[3]+0x000003FFu; // 8024AB30
  c->r[6]=0u+0x10000000u; // 8024AB34
  c->r[6]=c->r[6]+0x0000002Au; // 8024AB38
  c->r[5]=0u+0xD0000000u; // 8024AB3C
  c->r[5]=c->r[5]+0x000007FFu; // 8024AB40
  /* isync */ // 8024AB44
  mtspr(c,568,c->r[7]); // 8024AB48
  mtspr(c,569,c->r[4]); // 8024AB4C
  mtspr(c,568,c->r[3]); // 8024AB50
  /* isync */ // 8024AB54
  mtspr(c,560,c->r[7]); // 8024AB58
  mtspr(c,561,c->r[7]); // 8024AB5C
  /* isync */ // 8024AB60
  mtspr(c,570,c->r[7]); // 8024AB64
  mtspr(c,571,c->r[6]); // 8024AB68
  mtspr(c,570,c->r[5]); // 8024AB6C
  /* isync */ // 8024AB70
  mtspr(c,562,c->r[7]); // 8024AB74
  mtspr(c,563,c->r[7]); // 8024AB78
  /* isync */ // 8024AB7C
  c->r[4]=0u+0x12000000u; // 8024AB80
  c->r[4]=c->r[4]+0x00000002u; // 8024AB84
  c->r[3]=0u+0x92000000u; // 8024AB88
  c->r[3]=c->r[3]+0x000001FFu; // 8024AB8C
  c->r[6]=0u+0x13000000u; // 8024AB90
  c->r[6]=c->r[6]+0x00000002u; // 8024AB94
  c->r[5]=0u+0x93000000u; // 8024AB98
  c->r[5]=c->r[5]+0x000000FFu; // 8024AB9C
  /* isync */ // 8024ABA0
  mtspr(c,572,c->r[7]); // 8024ABA4
  mtspr(c,573,c->r[4]); // 8024ABA8
  mtspr(c,572,c->r[3]); // 8024ABAC
  /* isync */ // 8024ABB0
  mtspr(c,564,c->r[7]); // 8024ABB4
  mtspr(c,565,c->r[7]); // 8024ABB8
  /* isync */ // 8024ABBC
  mtspr(c,574,c->r[7]); // 8024ABC0
  mtspr(c,575,c->r[6]); // 8024ABC4
  mtspr(c,574,c->r[5]); // 8024ABC8
  /* isync */ // 8024ABCC
  mtspr(c,566,c->r[7]); // 8024ABD0
  mtspr(c,567,c->r[7]); // 8024ABD4
  /* isync */ // 8024ABD8
  c->r[3]=c->msr; // 8024ABDC
  c->r[3]=c->r[3]|0x00000030u; // 8024ABE0
  mtspr(c,27,c->r[3]); // 8024ABE4
  c->r[3]=c->lr; // 8024ABE8
  mtspr(c,26,c->r[3]); // 8024ABEC
  return; /* rfi */ // 8024ABF0
}

// ConfigMEM2_64MB
void f_8024AC00(Ctx* __restrict c) {
  trace_call(0x8024AC00u);
  c->r[7]=0u+0x00000000u; // 8024AC00
  c->r[4]=0u+0x10000000u; // 8024AC04
  c->r[4]=c->r[4]+0x00000002u; // 8024AC08
  c->r[3]=0u+0x90000000u; // 8024AC0C
  c->r[3]=c->r[3]+0x000007FFu; // 8024AC10
  c->r[6]=0u+0x10000000u; // 8024AC14
  c->r[6]=c->r[6]+0x0000002Au; // 8024AC18
  c->r[5]=0u+0xD0000000u; // 8024AC1C
  c->r[5]=c->r[5]+0x000007FFu; // 8024AC20
  /* isync */ // 8024AC24
  mtspr(c,568,c->r[7]); // 8024AC28
  mtspr(c,569,c->r[4]); // 8024AC2C
  mtspr(c,568,c->r[3]); // 8024AC30
  /* isync */ // 8024AC34
  mtspr(c,560,c->r[7]); // 8024AC38
  mtspr(c,561,c->r[7]); // 8024AC3C
  /* isync */ // 8024AC40
  mtspr(c,570,c->r[7]); // 8024AC44
  mtspr(c,571,c->r[6]); // 8024AC48
  mtspr(c,570,c->r[5]); // 8024AC4C
  /* isync */ // 8024AC50
  mtspr(c,562,c->r[7]); // 8024AC54
  mtspr(c,563,c->r[7]); // 8024AC58
  /* isync */ // 8024AC5C
  mtspr(c,564,c->r[7]); // 8024AC60
  mtspr(c,565,c->r[7]); // 8024AC64
  /* isync */ // 8024AC68
  mtspr(c,566,c->r[7]); // 8024AC6C
  mtspr(c,567,c->r[7]); // 8024AC70
  /* isync */ // 8024AC74
  mtspr(c,572,c->r[7]); // 8024AC78
  mtspr(c,573,c->r[7]); // 8024AC7C
  /* isync */ // 8024AC80
  mtspr(c,574,c->r[7]); // 8024AC84
  mtspr(c,575,c->r[7]); // 8024AC88
  /* isync */ // 8024AC8C
  c->r[3]=c->msr; // 8024AC90
  c->r[3]=c->r[3]|0x00000030u; // 8024AC94
  mtspr(c,27,c->r[3]); // 8024AC98
  c->r[3]=c->lr; // 8024AC9C
  mtspr(c,26,c->r[3]); // 8024ACA0
  return; /* rfi */ // 8024ACA4
}

// ConfigMEM2_112MB
void f_8024ACB0(Ctx* __restrict c) {
  trace_call(0x8024ACB0u);
  c->r[7]=0u+0x00000000u; // 8024ACB0
  c->r[4]=0u+0x10000000u; // 8024ACB4
  c->r[4]=c->r[4]+0x00000002u; // 8024ACB8
  c->r[3]=0u+0x90000000u; // 8024ACBC
  c->r[3]=c->r[3]+0x000007FFu; // 8024ACC0
  c->r[6]=0u+0x10000000u; // 8024ACC4
  c->r[6]=c->r[6]+0x0000002Au; // 8024ACC8
  c->r[5]=0u+0xD0000000u; // 8024ACCC
  c->r[5]=c->r[5]+0x00000FFFu; // 8024ACD0
  /* isync */ // 8024ACD4
  mtspr(c,568,c->r[7]); // 8024ACD8
  mtspr(c,569,c->r[4]); // 8024ACDC
  mtspr(c,568,c->r[3]); // 8024ACE0
  /* isync */ // 8024ACE4
  mtspr(c,560,c->r[7]); // 8024ACE8
  mtspr(c,561,c->r[7]); // 8024ACEC
  /* isync */ // 8024ACF0
  mtspr(c,570,c->r[7]); // 8024ACF4
  mtspr(c,571,c->r[6]); // 8024ACF8
  mtspr(c,570,c->r[5]); // 8024ACFC
  /* isync */ // 8024AD00
  mtspr(c,562,c->r[7]); // 8024AD04
  mtspr(c,563,c->r[7]); // 8024AD08
  /* isync */ // 8024AD0C
  c->r[4]=0u+0x14000000u; // 8024AD10
  c->r[4]=c->r[4]+0x00000002u; // 8024AD14
  c->r[3]=0u+0x94000000u; // 8024AD18
  c->r[3]=c->r[3]+0x000003FFu; // 8024AD1C
  c->r[6]=0u+0x16000000u; // 8024AD20
  c->r[6]=c->r[6]+0x00000002u; // 8024AD24
  c->r[5]=0u+0x96000000u; // 8024AD28
  c->r[5]=c->r[5]+0x000001FFu; // 8024AD2C
  /* isync */ // 8024AD30
  mtspr(c,572,c->r[7]); // 8024AD34
  mtspr(c,573,c->r[4]); // 8024AD38
  mtspr(c,572,c->r[3]); // 8024AD3C
  /* isync */ // 8024AD40
  mtspr(c,564,c->r[7]); // 8024AD44
  mtspr(c,565,c->r[7]); // 8024AD48
  /* isync */ // 8024AD4C
  mtspr(c,574,c->r[7]); // 8024AD50
  mtspr(c,575,c->r[6]); // 8024AD54
  mtspr(c,574,c->r[5]); // 8024AD58
  /* isync */ // 8024AD5C
  mtspr(c,566,c->r[7]); // 8024AD60
  mtspr(c,567,c->r[7]); // 8024AD64
  /* isync */ // 8024AD68
  c->r[3]=c->msr; // 8024AD6C
  c->r[3]=c->r[3]|0x00000030u; // 8024AD70
  mtspr(c,27,c->r[3]); // 8024AD74
  c->r[3]=c->lr; // 8024AD78
  mtspr(c,26,c->r[3]); // 8024AD7C
  return; /* rfi */ // 8024AD80
}

// ConfigMEM2_128MB
void f_8024AD90(Ctx* __restrict c) {
  trace_call(0x8024AD90u);
  c->r[7]=0u+0x00000000u; // 8024AD90
  c->r[4]=0u+0x10000000u; // 8024AD94
  c->r[4]=c->r[4]+0x00000002u; // 8024AD98
  c->r[3]=0u+0x90000000u; // 8024AD9C
  c->r[3]=c->r[3]+0x00000FFFu; // 8024ADA0
  c->r[6]=0u+0x10000000u; // 8024ADA4
  c->r[6]=c->r[6]+0x0000002Au; // 8024ADA8
  c->r[5]=0u+0xD0000000u; // 8024ADAC
  c->r[5]=c->r[5]+0x00000FFFu; // 8024ADB0
  /* isync */ // 8024ADB4
  mtspr(c,568,c->r[7]); // 8024ADB8
  mtspr(c,569,c->r[4]); // 8024ADBC
  mtspr(c,568,c->r[3]); // 8024ADC0
  /* isync */ // 8024ADC4
  mtspr(c,560,c->r[7]); // 8024ADC8
  mtspr(c,561,c->r[7]); // 8024ADCC
  /* isync */ // 8024ADD0
  mtspr(c,570,c->r[7]); // 8024ADD4
  mtspr(c,571,c->r[6]); // 8024ADD8
  mtspr(c,570,c->r[5]); // 8024ADDC
  /* isync */ // 8024ADE0
  mtspr(c,562,c->r[7]); // 8024ADE4
  mtspr(c,563,c->r[7]); // 8024ADE8
  /* isync */ // 8024ADEC
  mtspr(c,564,c->r[7]); // 8024ADF0
  mtspr(c,565,c->r[7]); // 8024ADF4
  /* isync */ // 8024ADF8
  mtspr(c,566,c->r[7]); // 8024ADFC
  mtspr(c,567,c->r[7]); // 8024AE00
  /* isync */ // 8024AE04
  mtspr(c,572,c->r[7]); // 8024AE08
  mtspr(c,573,c->r[7]); // 8024AE0C
  /* isync */ // 8024AE10
  mtspr(c,574,c->r[7]); // 8024AE14
  mtspr(c,575,c->r[7]); // 8024AE18
  /* isync */ // 8024AE1C
  c->r[3]=c->msr; // 8024AE20
  c->r[3]=c->r[3]|0x00000030u; // 8024AE24
  mtspr(c,27,c->r[3]); // 8024AE28
  c->r[3]=c->lr; // 8024AE2C
  mtspr(c,26,c->r[3]); // 8024AE30
  return; /* rfi */ // 8024AE34
}

// RealMode
void f_8024AE40(Ctx* __restrict c) {
  trace_call(0x8024AE40u);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8024AE40
  mtspr(c,26,c->r[3]); // 8024AE44
  c->r[3]=c->msr; // 8024AE48
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 8024AE4C
  mtspr(c,27,c->r[3]); // 8024AE50
  return; /* rfi */ // 8024AE54
}

// BATConfig
void f_8024AE60(Ctx* __restrict c) {
  trace_call(0x8024AE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AE60
  c->r[0]=c->lr; // 8024AE64
  c->r[4]=0u+0x80000000u; // 8024AE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AE70
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024AE74
  c->r[30]=c->r[3]|c->r[3]; // 8024AE78
  c->r[31]=R32(c->r[4]+0x00003104u); // 8024AE7C
  c->r[0]=R32(c->r[4]+0x00003100u); // 8024AE80
  cmpu(c,0,c->r[31],c->r[0]); // 8024AE84
  if (!crb(c,0)) { goto L_8024AEB0; } // 8024AE88
  c->r[0]=c->r[31]+0xFE800000u; // 8024AE8C
  cmpu(c,0,c->r[0],0x00000000u); // 8024AE90
  if (!crb(c,2)) { goto L_8024AEB0; } // 8024AE94
  c->r[3]=0u+0x81800000u; // 8024AE98
  c->r[4]=0u+0x01800000u; // 8024AE9C
  c->lr=0x8024AEA4u; f_80244E20(c); // 8024AEA0
  c->r[3]=0u+0xCC000000u; // 8024AEA4
  c->r[0]=0u+0x00000002u; // 8024AEA8
  W16(c->r[3]+0x00004028u,c->r[0]); // 8024AEAC
L_8024AEB0:;
  c->r[0]=0u+0x01800000u; // 8024AEB0
  cmpu(c,0,c->r[31],c->r[0]); // 8024AEB4
  if (crb(c,1)) { goto L_8024AEC8; } // 8024AEB8
  c->r[3]=0u+0x80250000u; // 8024AEBC
  c->r[3]=c->r[3]+0xFFFFA9C0u; // 8024AEC0
  c->lr=0x8024AEC8u; f_8024AE40(c); // 8024AEC4
L_8024AEC8:;
  c->r[3]=0u+0x80000000u; // 8024AEC8
  c->r[0]=0u+0x04000000u; // 8024AECC
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 8024AED0
  c->r[3]=R32(c->r[3]+0x00003120u); // 8024AED4
  cmpu(c,0,c->r[4],c->r[0]); // 8024AED8
  if (crb(c,1)) { goto L_8024AF28; } // 8024AEDC
  c->r[0]=0u+0x93400000u; // 8024AEE0
  cmpu(c,0,c->r[3],c->r[0]); // 8024AEE4
  if (crb(c,1)) { goto L_8024AEFC; } // 8024AEE8
  c->r[3]=0u+0x80250000u; // 8024AEEC
  c->r[3]=c->r[3]+0xFFFFAA40u; // 8024AEF0
  c->lr=0x8024AEF8u; f_8024AE40(c); // 8024AEF4
  goto L_8024AF5C; // 8024AEF8
L_8024AEFC:;
  c->r[0]=0u+0x93800000u; // 8024AEFC
  cmpu(c,0,c->r[3],c->r[0]); // 8024AF00
  if (crb(c,1)) { goto L_8024AF18; } // 8024AF04
  c->r[3]=0u+0x80250000u; // 8024AF08
  c->r[3]=c->r[3]+0xFFFFAB20u; // 8024AF0C
  c->lr=0x8024AF14u; f_8024AE40(c); // 8024AF10
  goto L_8024AF5C; // 8024AF14
L_8024AF18:;
  c->r[3]=0u+0x80250000u; // 8024AF18
  c->r[3]=c->r[3]+0xFFFFAC00u; // 8024AF1C
  c->lr=0x8024AF24u; f_8024AE40(c); // 8024AF20
  goto L_8024AF5C; // 8024AF24
L_8024AF28:;
  c->r[0]=0u+0x08000000u; // 8024AF28
  cmpu(c,0,c->r[4],c->r[0]); // 8024AF2C
  if (crb(c,1)) { goto L_8024AF5C; } // 8024AF30
  c->r[0]=0u+0x97000000u; // 8024AF34
  cmpu(c,0,c->r[3],c->r[0]); // 8024AF38
  if (crb(c,1)) { goto L_8024AF50; } // 8024AF3C
  c->r[3]=0u+0x80250000u; // 8024AF40
  c->r[3]=c->r[3]+0xFFFFACB0u; // 8024AF44
  c->lr=0x8024AF4Cu; f_8024AE40(c); // 8024AF48
  goto L_8024AF5C; // 8024AF4C
L_8024AF50:;
  c->r[3]=0u+0x80250000u; // 8024AF50
  c->r[3]=c->r[3]+0xFFFFAD90u; // 8024AF54
  c->lr=0x8024AF5Cu; f_8024AE40(c); // 8024AF58
L_8024AF5C:;
  c->r[0]=c->r[30]+0xFFF50000u; // 8024AF5C
L_8024AF60:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 8024AF60
  if (!crb(c,2)) { IRQCHK(c); goto L_8024AF60; } // 8024AF64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024AF68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024AF6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024AF70
  c->lr=c->r[0]; // 8024AF74
  c->r[1]=c->r[1]+0x00000010u; // 8024AF78
  return; // 8024AF7C
}

// __OSRestoreCodeExecOnMEM1
void f_8024AF80(Ctx* __restrict c) {
  trace_call(0x8024AF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AF80
  c->r[0]=c->lr; // 8024AF84
  c->r[4]=0u+0x80250000u; // 8024AF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AF90
  c->r[31]=c->r[3]|c->r[3]; // 8024AF94
  c->r[3]=c->r[4]+0xFFFFA9C0u; // 8024AF98
  c->lr=0x8024AFA0u; f_8024AE40(c); // 8024AF9C
  c->r[0]=c->r[31]+0xFFF50000u; // 8024AFA0
  c->r[0]=c->r[0]|0x00000000u; // 8024AFA4
L_8024AFA8:;
  cmpu(c,0,c->r[0],0x0000A2CFu); // 8024AFA8
  if (!crb(c,2)) { IRQCHK(c); goto L_8024AFA8; } // 8024AFAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024AFB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024AFB4
  c->lr=c->r[0]; // 8024AFB8
  c->r[1]=c->r[1]+0x00000010u; // 8024AFBC
  return; // 8024AFC0
}

// __OSInitMemoryProtection
void f_8024AFD0(Ctx* __restrict c) {
  trace_call(0x8024AFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024AFD0
  c->r[0]=c->lr; // 8024AFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024AFD8
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 8024AFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024AFE0
  cmps(c,0,(int32_t)c->r[0],0); // 8024AFE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024AFE8
  if (!crb(c,2)) { goto L_8024B084; } // 8024AFEC
  c->lr=0x8024AFF4u; f_802494C0(c); // 8024AFF0
  c->r[4]=0u+0xCC000000u; // 8024AFF4
  c->r[0]=0u+0x00000000u; // 8024AFF8
  W16(c->r[4]+0x00004020u,c->r[0]); // 8024AFFC
  c->r[0]=0u+0x000000FFu; // 8024B000
  c->r[30]=c->r[3]|c->r[3]; // 8024B004
  c->r[3]=0u+0xF0000000u; // 8024B008
  W16(c->r[4]+0x00004010u,c->r[0]); // 8024B00C
  c->lr=0x8024B014u; f_80249890(c); // 8024B010
  c->r[31]=0u+0x80250000u; // 8024B014
  c->r[3]=0u+0x00000000u; // 8024B018
  c->r[4]=c->r[31]+0xFFFFA970u; // 8024B01C
  c->lr=0x8024B024u; f_80249530(c); // 8024B020
  c->r[4]=c->r[31]+0xFFFFA970u; // 8024B024
  c->r[3]=0u+0x00000001u; // 8024B028
  c->lr=0x8024B030u; f_80249530(c); // 8024B02C
  c->r[4]=c->r[31]+0xFFFFA970u; // 8024B030
  c->r[3]=0u+0x00000002u; // 8024B034
  c->lr=0x8024B03Cu; f_80249530(c); // 8024B038
  c->r[4]=c->r[31]+0xFFFFA970u; // 8024B03C
  c->r[3]=0u+0x00000003u; // 8024B040
  c->lr=0x8024B048u; f_80249530(c); // 8024B044
  c->r[4]=c->r[31]+0xFFFFA970u; // 8024B048
  c->r[3]=0u+0x00000004u; // 8024B04C
  c->lr=0x8024B054u; f_80249530(c); // 8024B050
  c->r[3]=0u+0x803B0000u; // 8024B054
  c->r[3]=c->r[3]+0xFFFFE9F0u; // 8024B058
  c->lr=0x8024B060u; f_8024B550(c); // 8024B05C
  c->r[3]=0u+0x000C0000u; // 8024B060
  c->r[3]=c->r[3]+0xFFFFA2CFu; // 8024B064
  c->lr=0x8024B06Cu; f_8024AE60(c); // 8024B068
  c->r[3]=0u+0x08000000u; // 8024B06C
  c->lr=0x8024B074u; f_80249910(c); // 8024B070
  c->r[0]=0u+0x00000001u; // 8024B074
  W32(c->r[13]+0xFFFF9E28u,c->r[0]); // 8024B078
  c->r[3]=c->r[30]|c->r[30]; // 8024B07C
  c->lr=0x8024B084u; f_80249500(c); // 8024B080
L_8024B084:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024B084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024B088
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024B08C
  c->lr=c->r[0]; // 8024B090
  c->r[1]=c->r[1]+0x00000010u; // 8024B094
  return; // 8024B098
}

// OSInitMutex
void f_8024B0A0(Ctx* __restrict c) {
  trace_call(0x8024B0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B0A0
  c->r[0]=c->lr; // 8024B0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024B0A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024B0AC
  c->r[31]=c->r[3]|c->r[3]; // 8024B0B0
  c->lr=0x8024B0B8u; f_8024CDF0(c); // 8024B0B4
  c->r[0]=0u+0x00000000u; // 8024B0B8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8024B0BC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8024B0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024B0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024B0C8
  c->lr=c->r[0]; // 8024B0CC
  c->r[1]=c->r[1]+0x00000010u; // 8024B0D0
  return; // 8024B0D4
}

// OSLockMutex
void f_8024B0E0(Ctx* __restrict c) {
  trace_call(0x8024B0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B0E0
  c->r[0]=c->lr; // 8024B0E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B0E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024B0EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024B0F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024B0F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024B0F8
  c->r[28]=c->r[3]|c->r[3]; // 8024B0FC
  c->lr=0x8024B104u; f_802494C0(c); // 8024B100
  c->r[29]=c->r[3]|c->r[3]; // 8024B104
  c->lr=0x8024B10Cu; f_8024CE00(c); // 8024B108
  c->r[30]=c->r[3]|c->r[3]; // 8024B10C
  c->r[31]=0u+0x00000000u; // 8024B110
L_8024B114:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8024B114
  cmps(c,0,(int32_t)c->r[0],0); // 8024B118
  if (!crb(c,2)) { goto L_8024B15C; } // 8024B11C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8024B120
  W32(c->r[28]+0x00000008u,c->r[30]); // 8024B124
  c->r[0]=c->r[3]+0x00000001u; // 8024B128
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8024B12C
  c->r[3]=R32(c->r[30]+0x000002F8u); // 8024B130
  cmps(c,0,(int32_t)c->r[3],0); // 8024B134
  if (!crb(c,2)) { goto L_8024B144; } // 8024B138
  W32(c->r[30]+0x000002F4u,c->r[28]); // 8024B13C
  goto L_8024B148; // 8024B140
L_8024B144:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 8024B144
L_8024B148:;
  c->r[0]=0u+0x00000000u; // 8024B148
  W32(c->r[28]+0x00000014u,c->r[3]); // 8024B14C
  W32(c->r[28]+0x00000010u,c->r[0]); // 8024B150
  W32(c->r[30]+0x000002F8u,c->r[28]); // 8024B154
  goto L_8024B194; // 8024B158
L_8024B15C:;
  cmpu(c,0,c->r[0],c->r[30]); // 8024B15C
  if (!crb(c,2)) { goto L_8024B174; } // 8024B160
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8024B164
  c->r[0]=c->r[3]+0x00000001u; // 8024B168
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8024B16C
  goto L_8024B194; // 8024B170
L_8024B174:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 8024B174
  c->r[3]=R32(c->r[28]+0x00000008u); // 8024B178
  c->r[4]=R32(c->r[30]+0x000002D0u); // 8024B17C
  c->lr=0x8024B184u; f_8024D120(c); // 8024B180
  c->r[3]=c->r[28]|c->r[28]; // 8024B184
  c->lr=0x8024B18Cu; f_8024DEC0(c); // 8024B188
  W32(c->r[30]+0x000002F0u,c->r[31]); // 8024B18C
  IRQCHK(c); goto L_8024B114; // 8024B190
L_8024B194:;
  c->r[3]=c->r[29]|c->r[29]; // 8024B194
  c->lr=0x8024B19Cu; f_80249500(c); // 8024B198
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B19C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024B1A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024B1A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024B1A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024B1AC
  c->lr=c->r[0]; // 8024B1B0
  c->r[1]=c->r[1]+0x00000020u; // 8024B1B4
  return; // 8024B1B8
}

// OSUnlockMutex
void f_8024B1C0(Ctx* __restrict c) {
  trace_call(0x8024B1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B1C0
  c->r[0]=c->lr; // 8024B1C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B1C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024B1CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024B1D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024B1D4
  c->r[29]=c->r[3]|c->r[3]; // 8024B1D8
  c->lr=0x8024B1E0u; f_802494C0(c); // 8024B1DC
  c->r[31]=c->r[3]|c->r[3]; // 8024B1E0
  c->lr=0x8024B1E8u; f_8024CE00(c); // 8024B1E4
  c->r[0]=R32(c->r[29]+0x00000008u); // 8024B1E8
  c->r[30]=c->r[3]|c->r[3]; // 8024B1EC
  cmpu(c,0,c->r[0],c->r[3]); // 8024B1F0
  if (!crb(c,2)) { goto L_8024B264; } // 8024B1F4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8024B1F8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8024B1FC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8024B200
  if (!crb(c,2)) { goto L_8024B264; } // 8024B204
  c->r[4]=R32(c->r[29]+0x00000010u); // 8024B208
  c->r[5]=R32(c->r[29]+0x00000014u); // 8024B20C
  cmps(c,0,(int32_t)c->r[4],0); // 8024B210
  if (!crb(c,2)) { goto L_8024B220; } // 8024B214
  W32(c->r[3]+0x000002F8u,c->r[5]); // 8024B218
  goto L_8024B224; // 8024B21C
L_8024B220:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 8024B220
L_8024B224:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024B224
  if (!crb(c,2)) { goto L_8024B234; } // 8024B228
  W32(c->r[3]+0x000002F4u,c->r[4]); // 8024B22C
  goto L_8024B238; // 8024B230
L_8024B234:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 8024B234
L_8024B238:;
  c->r[0]=0u+0x00000000u; // 8024B238
  W32(c->r[29]+0x00000008u,c->r[0]); // 8024B23C
  c->r[4]=R32(c->r[3]+0x000002D0u); // 8024B240
  c->r[0]=R32(c->r[3]+0x000002D4u); // 8024B244
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8024B248
  if (!crb(c,0)) { goto L_8024B25C; } // 8024B24C
  c->r[3]=c->r[30]|c->r[30]; // 8024B250
  c->lr=0x8024B258u; f_8024CF30(c); // 8024B254
  W32(c->r[30]+0x000002D0u,c->r[3]); // 8024B258
L_8024B25C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024B25C
  c->lr=0x8024B264u; f_8024DFB0(c); // 8024B260
L_8024B264:;
  c->r[3]=c->r[31]|c->r[31]; // 8024B264
  c->lr=0x8024B26Cu; f_80249500(c); // 8024B268
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B26C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024B270
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024B274
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024B278
  c->lr=c->r[0]; // 8024B27C
  c->r[1]=c->r[1]+0x00000020u; // 8024B280
  return; // 8024B284
}

// __OSUnlockAllMutex
void f_8024B290(Ctx* __restrict c) {
  trace_call(0x8024B290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B290
  c->r[0]=c->lr; // 8024B294
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024B298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024B29C
  c->r[31]=0u+0x00000000u; // 8024B2A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024B2A4
  c->r[30]=c->r[3]|c->r[3]; // 8024B2A8
  goto L_8024B2D8; // 8024B2AC
L_8024B2B0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8024B2B0
  cmps(c,0,(int32_t)c->r[4],0); // 8024B2B4
  if (!crb(c,2)) { goto L_8024B2C4; } // 8024B2B8
  W32(c->r[30]+0x000002F8u,c->r[31]); // 8024B2BC
  goto L_8024B2C8; // 8024B2C0
L_8024B2C4:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 8024B2C4
L_8024B2C8:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8024B2C8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8024B2CC
  W32(c->r[3]+0x00000008u,c->r[31]); // 8024B2D0
  c->lr=0x8024B2D8u; f_8024DFB0(c); // 8024B2D4
L_8024B2D8:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 8024B2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8024B2DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B2B0; } // 8024B2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024B2E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024B2E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024B2EC
  c->lr=c->r[0]; // 8024B2F0
  c->r[1]=c->r[1]+0x00000010u; // 8024B2F4
  return; // 8024B2F8
}

// fn_8024B300
void f_8024B300(Ctx* __restrict c) {
  trace_call(0x8024B300u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 8024B300
  c->r[7]=0u+0x00000000u; // 8024B304
  cmps(c,0,(int32_t)c->r[6],0); // 8024B308
  if (crb(c,2)) { goto L_8024B324; } // 8024B30C
  c->r[0]=R32(c->r[6]+0x000002E4u); // 8024B310
  cmps(c,0,(int32_t)c->r[0],0); // 8024B314
  if (crb(c,2)) { goto L_8024B324; } // 8024B318
  c->r[3]=0u+0x00000000u; // 8024B31C
  return; // 8024B320
L_8024B324:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024B324
  cmps(c,0,(int32_t)c->r[4],0); // 8024B328
  if (crb(c,2)) { goto L_8024B3B8; } // 8024B32C
  c->r[0]=R32(c->r[4]+0x000002E0u); // 8024B330
  cmps(c,0,(int32_t)c->r[0],0); // 8024B334
  if (crb(c,2)) { goto L_8024B3B8; } // 8024B338
  c->r[3]=0u+0x00000000u; // 8024B33C
  return; // 8024B340
  goto L_8024B3B8; // 8024B344
L_8024B348:;
  c->r[4]=R32(c->r[6]+0x000002E0u); // 8024B348
  cmps(c,0,(int32_t)c->r[4],0); // 8024B34C
  if (crb(c,2)) { goto L_8024B368; } // 8024B350
  c->r[0]=R32(c->r[4]+0x000002E4u); // 8024B354
  cmpu(c,0,c->r[6],c->r[0]); // 8024B358
  if (crb(c,2)) { goto L_8024B368; } // 8024B35C
  c->r[3]=0u+0x00000000u; // 8024B360
  return; // 8024B364
L_8024B368:;
  c->r[5]=R32(c->r[6]+0x000002E4u); // 8024B368
  cmps(c,0,(int32_t)c->r[5],0); // 8024B36C
  if (crb(c,2)) { goto L_8024B388; } // 8024B370
  c->r[0]=R32(c->r[5]+0x000002E0u); // 8024B374
  cmpu(c,0,c->r[6],c->r[0]); // 8024B378
  if (crb(c,2)) { goto L_8024B388; } // 8024B37C
  c->r[3]=0u+0x00000000u; // 8024B380
  return; // 8024B384
L_8024B388:;
  c->r[0]=R16(c->r[6]+0x000002C8u); // 8024B388
  cmpu(c,0,c->r[0],0x00000004u); // 8024B38C
  if (crb(c,2)) { goto L_8024B39C; } // 8024B390
  c->r[3]=0u+0x00000000u; // 8024B394
  return; // 8024B398
L_8024B39C:;
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8024B39C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 8024B3A0
  if (!crb(c,0)) { goto L_8024B3B0; } // 8024B3A4
  c->r[3]=0u+0x00000000u; // 8024B3A8
  return; // 8024B3AC
L_8024B3B0:;
  c->r[7]=c->r[0]|c->r[0]; // 8024B3B0
  c->r[6]=c->r[4]|c->r[4]; // 8024B3B4
L_8024B3B8:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024B3B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B348; } // 8024B3BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024B3C0
  cmps(c,0,(int32_t)c->r[0],0); // 8024B3C4
  if (crb(c,2)) { goto L_8024B3E0; } // 8024B3C8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8024B3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024B3D0
  if (crb(c,1)) { goto L_8024B3F4; } // 8024B3D4
  c->r[3]=0u+0x00000000u; // 8024B3D8
  return; // 8024B3DC
L_8024B3E0:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8024B3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8024B3E4
  if (crb(c,2)) { goto L_8024B3F4; } // 8024B3E8
  c->r[3]=0u+0x00000000u; // 8024B3EC
  return; // 8024B3F0
L_8024B3F4:;
  c->r[3]=0u+0x00000001u; // 8024B3F4
  return; // 8024B3F8
}

// fn_8024B400
void f_8024B400(Ctx* __restrict c) {
  trace_call(0x8024B400u);
  c->r[4]=R32(c->r[3]+0x000002F0u); // 8024B400
  goto L_8024B41C; // 8024B404
L_8024B408:;
  cmpu(c,0,c->r[4],c->r[3]); // 8024B408
  if (!crb(c,2)) { goto L_8024B418; } // 8024B40C
  c->r[3]=0u+0x00000001u; // 8024B410
  return; // 8024B414
L_8024B418:;
  c->r[4]=R32(c->r[4]+0x000002F0u); // 8024B418
L_8024B41C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024B41C
  if (crb(c,2)) { goto L_8024B430; } // 8024B420
  c->r[4]=R32(c->r[4]+0x00000008u); // 8024B424
  cmps(c,0,(int32_t)c->r[4],0); // 8024B428
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B408; } // 8024B42C
L_8024B430:;
  c->r[3]=0u+0x00000000u; // 8024B430
  return; // 8024B434
}

// fn_8024B440
void f_8024B440(Ctx* __restrict c) {
  trace_call(0x8024B440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B440
  c->r[0]=c->lr; // 8024B444
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024B448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024B44C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024B450
  c->r[30]=c->r[3]|c->r[3]; // 8024B454
  c->r[31]=R32(c->r[3]+0x000002F4u); // 8024B458
  goto L_8024B490; // 8024B45C
L_8024B460:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8024B460
  cmpu(c,0,c->r[0],c->r[30]); // 8024B464
  if (crb(c,2)) { goto L_8024B474; } // 8024B468
  c->r[3]=0u+0x00000000u; // 8024B46C
  goto L_8024B49C; // 8024B470
L_8024B474:;
  c->r[3]=c->r[31]|c->r[31]; // 8024B474
  c->lr=0x8024B47Cu; f_8024B300(c); // 8024B478
  cmps(c,0,(int32_t)c->r[3],0); // 8024B47C
  if (!crb(c,2)) { goto L_8024B48C; } // 8024B480
  c->r[3]=0u+0x00000000u; // 8024B484
  goto L_8024B49C; // 8024B488
L_8024B48C:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 8024B48C
L_8024B490:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024B490
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B460; } // 8024B494
  c->r[3]=0u+0x00000001u; // 8024B498
L_8024B49C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024B49C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024B4A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024B4A4
  c->lr=c->r[0]; // 8024B4A8
  c->r[1]=c->r[1]+0x00000010u; // 8024B4AC
  return; // 8024B4B0
}

// __OSReboot
void f_8024B4C0(Ctx* __restrict c) {
  trace_call(0x8024B4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B4C0
  c->r[0]=c->lr; // 8024B4C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B4C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024B4CC
  c->r[31]=c->r[4]|c->r[4]; // 8024B4D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024B4D4
  c->r[30]=c->r[3]|c->r[3]; // 8024B4D8
  c->lr=0x8024B4E0u; f_802494C0(c); // 8024B4DC
  c->r[3]=0u+0x81280000u; // 8024B4E0
  c->lr=0x8024B4E8u; f_802448F0(c); // 8024B4E4
  c->r[3]=0u+0x812F0000u; // 8024B4E8
  c->lr=0x8024B4F0u; f_802448C0(c); // 8024B4EC
  c->r[0]=0u+0x00000000u; // 8024B4F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024B4F4
  c->r[4]=0u+0x80000000u; // 8024B4F8
  c->r[3]=c->r[31]|c->r[31]; // 8024B4FC
  c->r[0]=R32(c->r[4]+0x00003194u); // 8024B500
  c->r[4]=c->r[30]|0x80000000u; // 8024B504
  W32(c->r[13]+0xFFFF9DE8u,c->r[0]); // 8024B508
  c->r[5]=c->r[1]+0x00000008u; // 8024B50C
  c->lr=0x8024B514u; f_80247970(c); // 8024B510
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B514
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024B518
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024B51C
  c->lr=c->r[0]; // 8024B520
  c->r[1]=c->r[1]+0x00000020u; // 8024B524
  return; // 8024B528
}

// OSGetSaveRegion
void f_8024B530(Ctx* __restrict c) {
  trace_call(0x8024B530u);
  c->r[0]=R32(c->r[13]+0xFFFF9E30u); // 8024B530
  W32(c->r[3]+0x00000000u,c->r[0]); // 8024B534
  c->r[0]=R32(c->r[13]+0xFFFF9E34u); // 8024B538
  W32(c->r[4]+0x00000000u,c->r[0]); // 8024B53C
  return; // 8024B540
}

// OSRegisterShutdownFunction
void f_8024B550(Ctx* __restrict c) {
  trace_call(0x8024B550u);
  c->r[5]=R32(c->r[13]+0xFFFF9E40u); // 8024B550
  goto L_8024B55C; // 8024B554
L_8024B558:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 8024B558
L_8024B55C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024B55C
  if (crb(c,2)) { goto L_8024B574; } // 8024B560
  c->r[4]=R32(c->r[5]+0x00000004u); // 8024B564
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024B568
  cmpu(c,0,c->r[4],c->r[0]); // 8024B56C
  if (!crb(c,1)) { IRQCHK(c); goto L_8024B558; } // 8024B570
L_8024B574:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024B574
  if (!crb(c,2)) { goto L_8024B5B0; } // 8024B578
  c->r[4]=c->r[13]+0xFFFF9E40u; // 8024B57C
  c->r[4]=R32(c->r[4]+0x00000004u); // 8024B580
  cmps(c,0,(int32_t)c->r[4],0); // 8024B584
  if (!crb(c,2)) { goto L_8024B594; } // 8024B588
  W32(c->r[13]+0xFFFF9E40u,c->r[3]); // 8024B58C
  goto L_8024B598; // 8024B590
L_8024B594:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8024B594
L_8024B598:;
  c->r[0]=0u+0x00000000u; // 8024B598
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8024B59C
  c->r[4]=c->r[13]+0xFFFF9E40u; // 8024B5A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8024B5A4
  W32(c->r[4]+0x00000004u,c->r[3]); // 8024B5A8
  return; // 8024B5AC
L_8024B5B0:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 8024B5B0
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8024B5B4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8024B5B8
  cmps(c,0,(int32_t)c->r[4],0); // 8024B5BC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8024B5C0
  if (!crb(c,2)) { goto L_8024B5D0; } // 8024B5C4
  W32(c->r[13]+0xFFFF9E40u,c->r[3]); // 8024B5C8
  return; // 8024B5CC
L_8024B5D0:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8024B5D0
  return; // 8024B5D4
}

// __OSCallShutdownFunctions
void f_8024B5E0(Ctx* __restrict c) {
  trace_call(0x8024B5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B5E0
  c->r[0]=c->lr; // 8024B5E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B5E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024B5EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024B5F0
  c->r[30]=0u+0x00000000u; // 8024B5F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024B5F8
  c->r[29]=c->r[4]|c->r[4]; // 8024B5FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024B600
  c->r[28]=c->r[3]|c->r[3]; // 8024B604
  c->r[3]=0u+0x00000000u; // 8024B608
  c->r[31]=R32(c->r[13]+0xFFFF9E40u); // 8024B60C
  goto L_8024B650; // 8024B610
L_8024B614:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024B614
  if (crb(c,2)) { goto L_8024B628; } // 8024B618
  c->r[0]=R32(c->r[31]+0x00000004u); // 8024B61C
  cmpu(c,0,c->r[3],c->r[0]); // 8024B620
  if (!crb(c,2)) { goto L_8024B658; } // 8024B624
L_8024B628:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8024B628
  c->r[3]=c->r[28]|c->r[28]; // 8024B62C
  c->r[4]=c->r[29]|c->r[29]; // 8024B630
  c->ctr=c->r[12]; // 8024B634
  if (true) { c->lr=0x8024B63Cu; dispatch(c,c->ctr); } // 8024B638
  c->r[0]=cntlz(c->r[3]); // 8024B63C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8024B640
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B644
  c->r[31]=R32(c->r[31]+0x00000008u); // 8024B648
  c->r[30]=c->r[30]|c->r[0]; // 8024B64C
L_8024B650:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024B650
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B614; } // 8024B654
L_8024B658:;
  c->lr=0x8024B65Cu; f_8024C510(c); // 8024B658
  c->r[0]=cntlz(c->r[3]); // 8024B65C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024B660
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B664
  c->r[30]=c->r[30]|c->r[0]; // 8024B668
  c->r[0]=cntlz(c->r[30]); // 8024B66C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024B670
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024B674
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B678
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024B67C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B680
  c->lr=c->r[0]; // 8024B684
  c->r[1]=c->r[1]+0x00000020u; // 8024B688
  return; // 8024B68C
}

// __OSShutdownDevices
void f_8024B690(Ctx* __restrict c) {
  trace_call(0x8024B690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B690
  c->r[0]=c->lr; // 8024B694
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B698
  c->r[11]=c->r[1]+0x00000020u; // 8024B69C
  c->lr=0x8024B6A4u; f_800C2E4C(c); // 8024B6A0
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 8024B6A4
  c->r[31]=c->r[3]|c->r[3]; // 8024B6A8
  cmpu(c,0,c->r[0],0x00000001u); // 8024B6AC
  if (!crb(c,1)) { goto L_8024B6BC; } // 8024B6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8024B6B4
  if (!crb(c,2)) { goto L_8024B6C4; } // 8024B6B8
L_8024B6BC:;
  c->r[27]=0u+0x00000000u; // 8024B6BC
  goto L_8024B6C8; // 8024B6C0
L_8024B6C4:;
  c->r[27]=0u+0x00000001u; // 8024B6C4
L_8024B6C8:;
  c->lr=0x8024B6CCu; f_80244D30(c); // 8024B6C8
  cmps(c,0,(int32_t)c->r[27],0); // 8024B6CC
  if (!crb(c,2)) { goto L_8024B6E0; } // 8024B6D0
  c->r[3]=0u+0x00000001u; // 8024B6D4
  c->lr=0x8024B6DCu; f_80253390(c); // 8024B6D8
  c->r[28]=c->r[3]|c->r[3]; // 8024B6DC
L_8024B6E0:;
  c->r[29]=R32(c->r[13]+0xFFFF9E40u); // 8024B6E0
  c->r[3]=0u+0x00000000u; // 8024B6E4
  c->r[30]=0u+0x00000000u; // 8024B6E8
  goto L_8024B72C; // 8024B6EC
L_8024B6F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024B6F0
  if (crb(c,2)) { goto L_8024B704; } // 8024B6F4
  c->r[0]=R32(c->r[29]+0x00000004u); // 8024B6F8
  cmpu(c,0,c->r[3],c->r[0]); // 8024B6FC
  if (!crb(c,2)) { goto L_8024B734; } // 8024B700
L_8024B704:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8024B704
  c->r[4]=c->r[31]|c->r[31]; // 8024B708
  c->r[3]=0u+0x00000000u; // 8024B70C
  c->ctr=c->r[12]; // 8024B710
  if (true) { c->lr=0x8024B718u; dispatch(c,c->ctr); } // 8024B714
  c->r[0]=cntlz(c->r[3]); // 8024B718
  c->r[3]=R32(c->r[29]+0x00000004u); // 8024B71C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B720
  c->r[29]=R32(c->r[29]+0x00000008u); // 8024B724
  c->r[30]=c->r[30]|c->r[0]; // 8024B728
L_8024B72C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8024B72C
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B6F0; } // 8024B730
L_8024B734:;
  c->lr=0x8024B738u; f_8024C510(c); // 8024B734
  c->r[0]=cntlz(c->r[3]); // 8024B738
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B73C
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 8024B740
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B6E0; } // 8024B744
L_8024B748:;
  c->lr=0x8024B74Cu; f_8024C510(c); // 8024B748
  cmps(c,0,(int32_t)c->r[3],0); // 8024B74C
  if (crb(c,2)) { IRQCHK(c); goto L_8024B748; } // 8024B750
  c->lr=0x8024B758u; f_802494C0(c); // 8024B754
  c->r[30]=R32(c->r[13]+0xFFFF9E40u); // 8024B758
  c->r[3]=0u+0x00000000u; // 8024B75C
  c->r[29]=0u+0x00000000u; // 8024B760
  goto L_8024B7A4; // 8024B764
L_8024B768:;
  cmps(c,0,(int32_t)c->r[29],0); // 8024B768
  if (crb(c,2)) { goto L_8024B77C; } // 8024B76C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8024B770
  cmpu(c,0,c->r[3],c->r[0]); // 8024B774
  if (!crb(c,2)) { goto L_8024B7AC; } // 8024B778
L_8024B77C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8024B77C
  c->r[4]=c->r[31]|c->r[31]; // 8024B780
  c->r[3]=0u+0x00000001u; // 8024B784
  c->ctr=c->r[12]; // 8024B788
  if (true) { c->lr=0x8024B790u; dispatch(c,c->ctr); } // 8024B78C
  c->r[0]=cntlz(c->r[3]); // 8024B790
  c->r[3]=R32(c->r[30]+0x00000004u); // 8024B794
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024B798
  c->r[30]=R32(c->r[30]+0x00000008u); // 8024B79C
  c->r[29]=c->r[29]|c->r[0]; // 8024B7A0
L_8024B7A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024B7A4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B768; } // 8024B7A8
L_8024B7AC:;
  c->lr=0x8024B7B0u; f_8024C510(c); // 8024B7AC
  c->lr=0x8024B7B4u; f_80245090(c); // 8024B7B0
  cmps(c,0,(int32_t)c->r[27],0); // 8024B7B4
  if (!crb(c,2)) { goto L_8024B7C4; } // 8024B7B8
  c->r[3]=c->r[28]|c->r[28]; // 8024B7BC
  c->lr=0x8024B7C4u; f_80253390(c); // 8024B7C0
L_8024B7C4:;
  c->r[3]=0u+0x80000000u; // 8024B7C4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8024B7C8
  goto L_8024B7F0; // 8024B7CC
L_8024B7D0:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8024B7D0
  c->r[29]=R32(c->r[3]+0x000002FCu); // 8024B7D4
  cmps(c,0,(int32_t)c->r[0],1); // 8024B7D8
  if (crb(c,2)) { goto L_8024B7E8; } // 8024B7DC
  cmps(c,0,(int32_t)c->r[0],4); // 8024B7E0
  if (!crb(c,2)) { goto L_8024B7EC; } // 8024B7E4
L_8024B7E8:;
  c->lr=0x8024B7ECu; f_8024D760(c); // 8024B7E8
L_8024B7EC:;
  c->r[3]=c->r[29]|c->r[29]; // 8024B7EC
L_8024B7F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024B7F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8024B7D0; } // 8024B7F4
  c->r[11]=c->r[1]+0x00000020u; // 8024B7F8
  c->lr=0x8024B800u; f_800C2E98(c); // 8024B7FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B800
  c->lr=c->r[0]; // 8024B804
  c->r[1]=c->r[1]+0x00000020u; // 8024B808
  return; // 8024B80C
}

// __OSGetDiscState
void f_8024B810(Ctx* __restrict c) {
  trace_call(0x8024B810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B810
  c->r[0]=c->lr; // 8024B814
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024B818
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024B81C
  c->r[31]=c->r[3]|c->r[3]; // 8024B820
  c->lr=0x8024B828u; f_801FDAB0(c); // 8024B824
  cmpu(c,0,c->r[3],0x00000002u); // 8024B828
  if (crb(c,2)) { goto L_8024B838; } // 8024B82C
  c->r[3]=0u+0x00000003u; // 8024B830
  goto L_8024B868; // 8024B834
L_8024B838:;
  cmpu(c,0,c->r[31],0x00000001u); // 8024B838
  if (!crb(c,2)) { goto L_8024B864; } // 8024B83C
  c->r[3]=c->r[1]+0x00000008u; // 8024B840
  c->lr=0x8024B848u; f_8024C770(c); // 8024B844
  cmps(c,0,(int32_t)c->r[3],0); // 8024B848
  if (crb(c,2)) { goto L_8024B864; } // 8024B84C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8024B850
  cmps(c,0,(int32_t)c->r[0],0); // 8024B854
  if (!crb(c,2)) { goto L_8024B864; } // 8024B858
  c->r[3]=0u+0x00000001u; // 8024B85C
  goto L_8024B868; // 8024B860
L_8024B864:;
  c->r[3]=0u+0x00000002u; // 8024B864
L_8024B868:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024B868
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024B86C
  c->lr=c->r[0]; // 8024B870
  c->r[1]=c->r[1]+0x00000020u; // 8024B874
  return; // 8024B878
}

// OSShutdownSystem
void f_8024B880(Ctx* __restrict c) {
  trace_call(0x8024B880u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B880
  c->r[0]=c->lr; // 8024B884
  c->r[4]=0u+0x00000000u; // 8024B888
  c->r[5]=0u+0x00000002u; // 8024B88C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024B890
  c->r[3]=c->r[1]+0x00000008u; // 8024B894
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8024B898
  c->lr=0x8024B8A0u; f_80004350(c); // 8024B89C
  c->lr=0x8024B8A4u; f_802533F0(c); // 8024B8A0
L_8024B8A4:;
  c->lr=0x8024B8A8u; f_80253490(c); // 8024B8A4
  cmpu(c,0,c->r[3],0x00000001u); // 8024B8A8
  if (crb(c,2)) { IRQCHK(c); goto L_8024B8A4; } // 8024B8AC
  c->r[3]=c->r[1]+0x00000008u; // 8024B8B0
  c->lr=0x8024B8B8u; f_80254EC0(c); // 8024B8B4
  c->lr=0x8024B8BCu; f_8024FDD0(c); // 8024B8B8
  c->lr=0x8024B8C0u; f_8024F690(c); // 8024B8BC
  c->lr=0x8024B8C4u; f_801FDF40(c); // 8024B8C0
  c->r[3]=c->r[1]+0x00000018u; // 8024B8C4
  c->lr=0x8024B8CCu; f_802500B0(c); // 8024B8C8
  c->r[31]=R8(c->r[1]+0x0000001Eu); // 8024B8CC
  c->lr=0x8024B8D4u; f_801FDAB0(c); // 8024B8D0
  cmpu(c,0,c->r[3],0x00000002u); // 8024B8D4
  if (crb(c,2)) { goto L_8024B8E4; } // 8024B8D8
  c->r[3]=0u+0x00000003u; // 8024B8DC
  goto L_8024B914; // 8024B8E0
L_8024B8E4:;
  cmpu(c,0,c->r[31],0x00000001u); // 8024B8E4
  if (!crb(c,2)) { goto L_8024B910; } // 8024B8E8
  c->r[3]=c->r[1]+0x0000000Cu; // 8024B8EC
  c->lr=0x8024B8F4u; f_8024C770(c); // 8024B8F0
  cmps(c,0,(int32_t)c->r[3],0); // 8024B8F4
  if (crb(c,2)) { goto L_8024B910; } // 8024B8F8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8024B8FC
  cmps(c,0,(int32_t)c->r[0],0); // 8024B900
  if (!crb(c,2)) { goto L_8024B910; } // 8024B904
  c->r[3]=0u+0x00000001u; // 8024B908
  goto L_8024B914; // 8024B90C
L_8024B910:;
  c->r[3]=0u+0x00000002u; // 8024B910
L_8024B914:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8024B914
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 8024B918
  cmpu(c,0,c->r[0],0x00000001u); // 8024B91C
  if (!crb(c,2)) { goto L_8024B930; } // 8024B920
  c->r[0]=0u+0x00000005u; // 8024B924
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024B928
  goto L_8024B938; // 8024B92C
L_8024B930:;
  c->r[0]=0u+0x00000001u; // 8024B930
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024B934
L_8024B938:;
  c->lr=0x8024B93Cu; f_8024C890(c); // 8024B938
  c->r[3]=c->r[1]+0x00000018u; // 8024B93C
  c->lr=0x8024B944u; f_8024FFC0(c); // 8024B940
  c->r[3]=c->r[1]+0x00000010u; // 8024B944
  c->lr=0x8024B94Cu; f_802428A0(c); // 8024B948
  c->r[0]=R8(c->r[1]+0x00000008u); // 8024B94C
  cmpu(c,0,c->r[0],0x00000001u); // 8024B950
  if (!crb(c,2)) { goto L_8024B978; } // 8024B954
  c->r[0]=0u+0x00000001u; // 8024B958
  W32(c->r[13]+0xFFFF9E3Cu,c->r[0]); // 8024B95C
  c->lr=0x8024B964u; f_8024CE40(c); // 8024B960
  c->r[3]=0u+0x00000005u; // 8024B964
  c->lr=0x8024B96Cu; f_8024B690(c); // 8024B968
  c->lr=0x8024B970u; f_8024CE80(c); // 8024B96C
  c->lr=0x8024B974u; f_80247140(c); // 8024B970
  goto L_8024B988; // 8024B974
L_8024B978:;
  c->lr=0x8024B97Cu; f_8024CE40(c); // 8024B978
  c->r[3]=0u+0x00000002u; // 8024B97C
  c->lr=0x8024B984u; f_8024B690(c); // 8024B980
  c->lr=0x8024B988u; f_8024F490(c); // 8024B984
L_8024B988:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024B988
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8024B98C
  c->lr=c->r[0]; // 8024B990
  c->r[1]=c->r[1]+0x00000040u; // 8024B994
  return; // 8024B998
}

// OSRestart
void f_8024B9A0(Ctx* __restrict c) {
  trace_call(0x8024B9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024B9A0
  c->r[0]=c->lr; // 8024B9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024B9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024B9AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024B9B0
  c->r[30]=c->r[3]|c->r[3]; // 8024B9B4
  c->lr=0x8024B9BCu; f_80243C30(c); // 8024B9B8
  c->r[31]=c->r[3]|c->r[3]; // 8024B9BC
  c->lr=0x8024B9C4u; f_8024FDD0(c); // 8024B9C0
  c->lr=0x8024B9C8u; f_8024F690(c); // 8024B9C4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8024B9C8
  cmpu(c,0,c->r[0],0x00000081u); // 8024B9CC
  if (!crb(c,2)) { goto L_8024B9F0; } // 8024B9D0
  c->lr=0x8024B9D8u; f_8024CE40(c); // 8024B9D4
  c->r[3]=0u+0x00000004u; // 8024B9D8
  c->lr=0x8024B9E0u; f_8024B690(c); // 8024B9DC
  c->lr=0x8024B9E4u; f_8024CE80(c); // 8024B9E0
  c->r[3]=c->r[30]|c->r[30]; // 8024B9E4
  c->lr=0x8024B9ECu; f_80251810(c); // 8024B9E8
  goto L_8024BA14; // 8024B9EC
L_8024B9F0:;
  cmpu(c,0,c->r[0],0x00000080u); // 8024B9F0
  if (!crb(c,2)) { goto L_8024BA14; } // 8024B9F4
  c->lr=0x8024B9FCu; f_8024CE40(c); // 8024B9F8
  c->r[3]=0u+0x00000004u; // 8024B9FC
  c->lr=0x8024BA04u; f_8024B690(c); // 8024BA00
  c->lr=0x8024BA08u; f_8024CE80(c); // 8024BA04
  c->r[4]=R32(c->r[13]+0xFFFF9E38u); // 8024BA08
  c->r[3]=c->r[30]|c->r[30]; // 8024BA0C
  c->lr=0x8024BA14u; f_8024B4C0(c); // 8024BA10
L_8024BA14:;
  c->lr=0x8024BA18u; f_8024CE40(c); // 8024BA14
  c->r[3]=0u+0x00000001u; // 8024BA18
  c->lr=0x8024BA20u; f_8024B690(c); // 8024BA1C
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BA20
  cmps(c,0,(int32_t)c->r[0],0); // 8024BA24
  if (!crb(c,2)) { goto L_8024BA38; } // 8024BA28
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BA2C
  cmps(c,0,(int32_t)c->r[0],0); // 8024BA30
  if (crb(c,2)) { goto L_8024BA3C; } // 8024BA34
L_8024BA38:;
  c->lr=0x8024BA3Cu; f_8024F370(c); // 8024BA38
L_8024BA3C:;
  c->lr=0x8024BA40u; f_8024F510(c); // 8024BA3C
  c->r[3]=0u+0x803B0000u; // 8024BA40
  c->r[5]=0u+0x803B0000u; // 8024BA44
  c->r[3]=c->r[3]+0xFFFFEA00u; // 8024BA48
  c->r[4]=0u+0x0000040Au; // 8024BA4C
  c->r[5]=c->r[5]+0xFFFFEA0Cu; // 8024BA50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BA54
  c->lr=0x8024BA5Cu; f_80245D40(c); // 8024BA58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024BA5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024BA60
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024BA64
  c->lr=c->r[0]; // 8024BA68
  c->r[1]=c->r[1]+0x00000010u; // 8024BA6C
  return; // 8024BA70
}

// __OSReturnToMenu
void f_8024BA80(Ctx* __restrict c) {
  trace_call(0x8024BA80u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BA80
  c->r[0]=c->lr; // 8024BA84
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024BA88
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8024BA8C
  W32(c->r[1]+0x00000088u,c->r[30]); // 8024BA90
  c->r[30]=0u+0x803B0000u; // 8024BA94
  c->r[30]=c->r[30]+0xFFFFEA00u; // 8024BA98
  W32(c->r[1]+0x00000084u,c->r[29]); // 8024BA9C
  c->r[29]=c->r[3]|c->r[3]; // 8024BAA0
  c->lr=0x8024BAA8u; f_8024FDD0(c); // 8024BAA4
  c->lr=0x8024BAACu; f_8024F690(c); // 8024BAA8
  c->lr=0x8024BAB0u; f_801FDF40(c); // 8024BAAC
  c->r[3]=c->r[1]+0x00000058u; // 8024BAB0
  c->lr=0x8024BAB8u; f_802500B0(c); // 8024BAB4
  c->r[31]=R8(c->r[1]+0x0000005Eu); // 8024BAB8
  c->lr=0x8024BAC0u; f_801FDAB0(c); // 8024BABC
  cmpu(c,0,c->r[3],0x00000002u); // 8024BAC0
  if (crb(c,2)) { goto L_8024BAD0; } // 8024BAC4
  c->r[0]=0u+0x00000003u; // 8024BAC8
  goto L_8024BB00; // 8024BACC
L_8024BAD0:;
  cmpu(c,0,c->r[31],0x00000001u); // 8024BAD0
  if (!crb(c,2)) { goto L_8024BAFC; } // 8024BAD4
  c->r[3]=c->r[1]+0x00000008u; // 8024BAD8
  c->lr=0x8024BAE0u; f_8024C770(c); // 8024BADC
  cmps(c,0,(int32_t)c->r[3],0); // 8024BAE0
  if (crb(c,2)) { goto L_8024BAFC; } // 8024BAE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8024BAE8
  cmps(c,0,(int32_t)c->r[0],0); // 8024BAEC
  if (!crb(c,2)) { goto L_8024BAFC; } // 8024BAF0
  c->r[0]=0u+0x00000001u; // 8024BAF4
  goto L_8024BB00; // 8024BAF8
L_8024BAFC:;
  c->r[0]=0u+0x00000002u; // 8024BAFC
L_8024BB00:;
  c->r[31]=0u+0x00000003u; // 8024BB00
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 8024BB04
  W8(c->r[1]+0x0000005Du,c->r[31]); // 8024BB08
  W8(c->r[1]+0x0000005Fu,c->r[29]); // 8024BB0C
  c->lr=0x8024BB14u; f_8024C890(c); // 8024BB10
  c->r[3]=c->r[1]+0x00000058u; // 8024BB14
  c->lr=0x8024BB1Cu; f_8024FFC0(c); // 8024BB18
  c->r[3]=0u+0x81280000u; // 8024BB1C
  c->lr=0x8024BB24u; f_802448F0(c); // 8024BB20
  c->r[3]=0u+0x812F0000u; // 8024BB24
  c->lr=0x8024BB2Cu; f_802448C0(c); // 8024BB28
  c->lr=0x8024BB30u; f_80201900(c); // 8024BB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8024BB30
  if (crb(c,2)) { goto L_8024BBAC; } // 8024BB34
  c->r[3]=c->r[1]+0x00000038u; // 8024BB38
  c->lr=0x8024BB40u; f_802500B0(c); // 8024BB3C
  c->r[0]=0u+0x00000002u; // 8024BB40
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 8024BB44
  W8(c->r[1]+0x0000003Du,c->r[31]); // 8024BB48
  c->lr=0x8024BB50u; f_8024C890(c); // 8024BB4C
  c->r[3]=c->r[1]+0x00000038u; // 8024BB50
  c->lr=0x8024BB58u; f_8024FFC0(c); // 8024BB54
  c->lr=0x8024BB5Cu; f_80247140(c); // 8024BB58
  c->lr=0x8024BB60u; f_8024CE40(c); // 8024BB5C
  c->lr=0x8024BB64u; f_802601B0(c); // 8024BB60
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BB64
  cmps(c,0,(int32_t)c->r[0],0); // 8024BB68
  if (!crb(c,2)) { goto L_8024BB7C; } // 8024BB6C
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BB70
  cmps(c,0,(int32_t)c->r[0],0); // 8024BB74
  if (crb(c,2)) { goto L_8024BB80; } // 8024BB78
L_8024BB7C:;
  c->lr=0x8024BB80u; f_8024F370(c); // 8024BB7C
L_8024BB80:;
  c->lr=0x8024BB84u; f_8024F510(c); // 8024BB80
  c->r[3]=c->r[30]+0x00000000u; // 8024BB84
  c->r[5]=c->r[30]+0x0000000Cu; // 8024BB88
  c->r[4]=0u+0x0000040Au; // 8024BB8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BB90
  c->lr=0x8024BB98u; f_80245D40(c); // 8024BB94
  c->r[3]=c->r[30]+0x00000000u; // 8024BB98
  c->r[5]=c->r[30]+0x00000038u; // 8024BB9C
  c->r[4]=0u+0x000003F2u; // 8024BBA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BBA4
  c->lr=0x8024BBACu; f_80245D40(c); // 8024BBA8
L_8024BBAC:;
  c->r[3]=0u+0x000000E0u; // 8024BBAC
  c->r[4]=0u+0x00000020u; // 8024BBB0
  c->lr=0x8024BBB8u; f_80244900(c); // 8024BBB4
  cmps(c,0,(int32_t)c->r[3],0); // 8024BBB8
  c->r[31]=c->r[3]|c->r[3]; // 8024BBBC
  if (!crb(c,2)) { goto L_8024BC3C; } // 8024BBC0
  c->r[3]=c->r[1]+0x00000018u; // 8024BBC4
  c->lr=0x8024BBCCu; f_802500B0(c); // 8024BBC8
  c->r[3]=0u+0x00000002u; // 8024BBCC
  c->r[0]=0u+0x00000003u; // 8024BBD0
  W8(c->r[1]+0x0000001Eu,c->r[3]); // 8024BBD4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8024BBD8
  c->lr=0x8024BBE0u; f_8024C890(c); // 8024BBDC
  c->r[3]=c->r[1]+0x00000018u; // 8024BBE0
  c->lr=0x8024BBE8u; f_8024FFC0(c); // 8024BBE4
  c->lr=0x8024BBECu; f_80247140(c); // 8024BBE8
  c->lr=0x8024BBF0u; f_8024CE40(c); // 8024BBEC
  c->lr=0x8024BBF4u; f_802601B0(c); // 8024BBF0
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BBF4
  cmps(c,0,(int32_t)c->r[0],0); // 8024BBF8
  if (!crb(c,2)) { goto L_8024BC0C; } // 8024BBFC
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BC00
  cmps(c,0,(int32_t)c->r[0],0); // 8024BC04
  if (crb(c,2)) { goto L_8024BC10; } // 8024BC08
L_8024BC0C:;
  c->lr=0x8024BC10u; f_8024F370(c); // 8024BC0C
L_8024BC10:;
  c->lr=0x8024BC14u; f_8024F510(c); // 8024BC10
  c->r[3]=c->r[30]+0x00000000u; // 8024BC14
  c->r[5]=c->r[30]+0x0000000Cu; // 8024BC18
  c->r[4]=0u+0x0000040Au; // 8024BC1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BC20
  c->lr=0x8024BC28u; f_80245D40(c); // 8024BC24
  c->r[3]=c->r[30]+0x00000000u; // 8024BC28
  c->r[5]=c->r[30]+0x00000038u; // 8024BC2C
  c->r[4]=0u+0x000003F2u; // 8024BC30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BC34
  c->lr=0x8024BC3Cu; f_80245D40(c); // 8024BC38
L_8024BC3C:;
  c->r[3]=c->r[31]|c->r[31]; // 8024BC3C
  c->r[4]=0u+0x00000000u; // 8024BC40
  c->r[5]=0u+0x000000E0u; // 8024BC44
  c->lr=0x8024BC4Cu; f_80004350(c); // 8024BC48
  c->r[4]=c->r[31]|c->r[31]; // 8024BC4C
  c->r[3]=0u+0x00000000u; // 8024BC50
  c->lr=0x8024BC58u; f_80201B70(c); // 8024BC54
  cmps(c,0,(int32_t)c->r[3],0); // 8024BC58
  if (!crb(c,2)) { goto L_8024BC9C; } // 8024BC5C
  c->lr=0x8024BC64u; f_80250990(c); // 8024BC60
  cmps(c,0,(int32_t)c->r[3],0); // 8024BC64
  if (crb(c,2)) { goto L_8024BC9C; } // 8024BC68
  c->r[3]=0u+0x00000000u; // 8024BC6C
  c->r[0]=0u+0xFFFFFFFFu; // 8024BC70
  W32(c->r[1]+0x00000010u,c->r[3]); // 8024BC74
  c->r[3]=c->r[31]|c->r[31]; // 8024BC78
  c->r[4]=c->r[1]+0x00000010u; // 8024BC7C
  c->r[5]=c->r[1]+0x0000000Cu; // 8024BC80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024BC84
  c->lr=0x8024BC8Cu; f_80250E40(c); // 8024BC88
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8024BC8C
  cmps(c,0,(int32_t)c->r[0],0); // 8024BC90
  if (!crb(c,2)) { goto L_8024BC9C; } // 8024BC94
  c->lr=0x8024BC9Cu; f_80250C90(c); // 8024BC98
L_8024BC9C:;
  c->lr=0x8024BCA0u; f_8024CE40(c); // 8024BC9C
  c->r[3]=0u+0x00000005u; // 8024BCA0
  c->lr=0x8024BCA8u; f_8024B690(c); // 8024BCA4
  c->lr=0x8024BCACu; f_8024CE80(c); // 8024BCA8
  c->lr=0x8024BCB0u; f_80247140(c); // 8024BCAC
  c->lr=0x8024BCB4u; f_8024CE40(c); // 8024BCB0
  c->lr=0x8024BCB8u; f_802601B0(c); // 8024BCB4
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BCB8
  cmps(c,0,(int32_t)c->r[0],0); // 8024BCBC
  if (!crb(c,2)) { goto L_8024BCD0; } // 8024BCC0
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BCC4
  cmps(c,0,(int32_t)c->r[0],0); // 8024BCC8
  if (crb(c,2)) { goto L_8024BCD4; } // 8024BCCC
L_8024BCD0:;
  c->lr=0x8024BCD4u; f_8024F370(c); // 8024BCD0
L_8024BCD4:;
  c->lr=0x8024BCD8u; f_8024F510(c); // 8024BCD4
  c->r[3]=c->r[30]+0x00000000u; // 8024BCD8
  c->r[5]=c->r[30]+0x0000000Cu; // 8024BCDC
  c->r[4]=0u+0x0000040Au; // 8024BCE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BCE4
  c->lr=0x8024BCECu; f_80245D40(c); // 8024BCE8
  c->r[0]=R32(c->r[1]+0x00000094u); // 8024BCEC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8024BCF0
  c->r[30]=R32(c->r[1]+0x00000088u); // 8024BCF4
  c->r[29]=R32(c->r[1]+0x00000084u); // 8024BCF8
  c->lr=c->r[0]; // 8024BCFC
  c->r[1]=c->r[1]+0x00000090u; // 8024BD00
  return; // 8024BD04
}

// OSReturnToMenu
void f_8024BD10(Ctx* __restrict c) {
  trace_call(0x8024BD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BD10
  c->r[0]=c->lr; // 8024BD14
  c->r[3]=0u+0x00000000u; // 8024BD18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024BD1C
  c->lr=0x8024BD24u; f_8024BA80(c); // 8024BD20
  c->r[3]=0u+0x803B0000u; // 8024BD24
  c->r[5]=0u+0x803B0000u; // 8024BD28
  c->r[3]=c->r[3]+0xFFFFEA00u; // 8024BD2C
  c->r[4]=0u+0x0000037Fu; // 8024BD30
  c->r[5]=c->r[5]+0xFFFFEA6Cu; // 8024BD34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BD38
  c->lr=0x8024BD40u; f_80245D40(c); // 8024BD3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024BD40
  c->lr=c->r[0]; // 8024BD44
  c->r[1]=c->r[1]+0x00000010u; // 8024BD48
  return; // 8024BD4C
}

// OSReturnToDataManager
void f_8024BD50(Ctx* __restrict c) {
  trace_call(0x8024BD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BD50
  c->r[0]=c->lr; // 8024BD54
  c->r[3]=0u+0x00000001u; // 8024BD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024BD5C
  c->lr=0x8024BD64u; f_8024BA80(c); // 8024BD60
  c->r[3]=0u+0x803B0000u; // 8024BD64
  c->r[5]=0u+0x803B0000u; // 8024BD68
  c->r[3]=c->r[3]+0xFFFFEA00u; // 8024BD6C
  c->r[4]=0u+0x00000391u; // 8024BD70
  c->r[5]=c->r[5]+0xFFFFEA9Cu; // 8024BD74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BD78
  c->lr=0x8024BD80u; f_80245D40(c); // 8024BD7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024BD80
  c->lr=c->r[0]; // 8024BD84
  c->r[1]=c->r[1]+0x00000010u; // 8024BD88
  return; // 8024BD8C
}

// __OSReturnToMenuForError
void f_8024BD90(Ctx* __restrict c) {
  trace_call(0x8024BD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BD90
  c->r[0]=c->lr; // 8024BD94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024BD98
  c->r[3]=c->r[1]+0x00000008u; // 8024BD9C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8024BDA0
  c->r[31]=0u+0x803B0000u; // 8024BDA4
  c->r[31]=c->r[31]+0xFFFFEA00u; // 8024BDA8
  c->lr=0x8024BDB0u; f_802500B0(c); // 8024BDAC
  c->r[3]=0u+0x00000002u; // 8024BDB0
  c->r[0]=0u+0x00000003u; // 8024BDB4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 8024BDB8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8024BDBC
  c->lr=0x8024BDC4u; f_8024C890(c); // 8024BDC0
  c->r[3]=c->r[1]+0x00000008u; // 8024BDC4
  c->lr=0x8024BDCCu; f_8024FFC0(c); // 8024BDC8
  c->lr=0x8024BDD0u; f_80247140(c); // 8024BDCC
  c->lr=0x8024BDD4u; f_8024CE40(c); // 8024BDD0
  c->lr=0x8024BDD8u; f_802601B0(c); // 8024BDD4
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BDD8
  cmps(c,0,(int32_t)c->r[0],0); // 8024BDDC
  if (!crb(c,2)) { goto L_8024BDF0; } // 8024BDE0
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BDE4
  cmps(c,0,(int32_t)c->r[0],0); // 8024BDE8
  if (crb(c,2)) { goto L_8024BDF4; } // 8024BDEC
L_8024BDF0:;
  c->lr=0x8024BDF4u; f_8024F370(c); // 8024BDF0
L_8024BDF4:;
  c->lr=0x8024BDF8u; f_8024F510(c); // 8024BDF4
  c->r[3]=c->r[31]+0x00000000u; // 8024BDF8
  c->r[5]=c->r[31]+0x0000000Cu; // 8024BDFC
  c->r[4]=0u+0x0000040Au; // 8024BE00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BE04
  c->lr=0x8024BE0Cu; f_80245D40(c); // 8024BE08
  c->r[3]=c->r[31]+0x00000000u; // 8024BE0C
  c->r[5]=c->r[31]+0x00000038u; // 8024BE10
  c->r[4]=0u+0x000003F2u; // 8024BE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BE18
  c->lr=0x8024BE20u; f_80245D40(c); // 8024BE1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024BE20
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8024BE24
  c->lr=c->r[0]; // 8024BE28
  c->r[1]=c->r[1]+0x00000030u; // 8024BE2C
  return; // 8024BE30
}

// __OSHotResetForError
void f_8024BE40(Ctx* __restrict c) {
  trace_call(0x8024BE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BE40
  c->r[0]=c->lr; // 8024BE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024BE48
  c->r[0]=R32(c->r[13]+0xFFFF9D84u); // 8024BE4C
  cmps(c,0,(int32_t)c->r[0],0); // 8024BE50
  if (!crb(c,2)) { goto L_8024BE64; } // 8024BE54
  c->r[0]=R32(c->r[13]+0xFFFF9DF4u); // 8024BE58
  cmps(c,0,(int32_t)c->r[0],0); // 8024BE5C
  if (crb(c,2)) { goto L_8024BE68; } // 8024BE60
L_8024BE64:;
  c->lr=0x8024BE68u; f_8024F370(c); // 8024BE64
L_8024BE68:;
  c->lr=0x8024BE6Cu; f_8024F510(c); // 8024BE68
  c->r[3]=0u+0x803B0000u; // 8024BE6C
  c->r[5]=0u+0x803B0000u; // 8024BE70
  c->r[3]=c->r[3]+0xFFFFEA00u; // 8024BE74
  c->r[4]=0u+0x0000040Au; // 8024BE78
  c->r[5]=c->r[5]+0xFFFFEA0Cu; // 8024BE7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BE80
  c->lr=0x8024BE88u; f_80245D40(c); // 8024BE84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024BE88
  c->lr=c->r[0]; // 8024BE8C
  c->r[1]=c->r[1]+0x00000010u; // 8024BE90
  return; // 8024BE94
}

// OSGetResetCode
void f_8024BEA0(Ctx* __restrict c) {
  trace_call(0x8024BEA0u);
  c->r[3]=0u+0x804A0000u; // 8024BEA0
  c->r[0]=R32(c->r[3]+0xFFFFC440u); // 8024BEA4
  cmps(c,0,(int32_t)c->r[0],0); // 8024BEA8
  if (crb(c,2)) { goto L_8024BEC0; } // 8024BEAC
  c->r[3]=c->r[3]+0xFFFFC440u; // 8024BEB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024BEB4
  c->r[3]=c->r[0]|0x80000000u; // 8024BEB8
  return; // 8024BEBC
L_8024BEC0:;
  c->r[3]=0u+0xCC000000u; // 8024BEC0
  c->r[0]=R32(c->r[3]+0x00003024u); // 8024BEC4
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8024BEC8
  return; // 8024BECC
}

// OSResetSystem
void f_8024BED0(Ctx* __restrict c) {
  trace_call(0x8024BED0u);
  c->r[3]=0u+0x803B0000u; // 8024BED0
  c->r[5]=0u+0x803B0000u; // 8024BED4
  c->r[3]=c->r[3]+0xFFFFEA00u; // 8024BED8
  c->r[4]=0u+0x000004A1u; // 8024BEDC
  c->r[5]=c->r[5]+0xFFFFEBECu; // 8024BEE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024BEE4
  f_80245D40(c); return; // 8024BEE8
}

// WriteSramCallback
void f_8024BEF0(Ctx* __restrict c) {
  trace_call(0x8024BEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024BEF0
  c->r[0]=c->lr; // 8024BEF4
  c->r[6]=0u+0x804A0000u; // 8024BEF8
  c->r[5]=0u+0x80250000u; // 8024BEFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024BF00
  c->r[6]=c->r[6]+0xFFFFC800u; // 8024BF04
  c->r[3]=0u+0x00000000u; // 8024BF08
  c->r[5]=c->r[5]+0xFFFFBEF0u; // 8024BF0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024BF10
  c->r[4]=0u+0x00000001u; // 8024BF14
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024BF18
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024BF1C
  c->r[31]=R32(c->r[6]+0x00000040u); // 8024BF20
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 8024BF24
  c->r[30]=c->r[6]+c->r[31]; // 8024BF28
  c->lr=0x8024BF30u; f_802036F0(c); // 8024BF2C
  cmps(c,0,(int32_t)c->r[3],0); // 8024BF30
  if (!crb(c,2)) { goto L_8024BF40; } // 8024BF34
  c->r[0]=0u+0x00000000u; // 8024BF38
  goto L_8024BFF0; // 8024BF3C
L_8024BF40:;
  c->r[3]=0u+0x00000000u; // 8024BF40
  c->r[4]=0u+0x00000001u; // 8024BF44
  c->r[5]=0u+0x00000003u; // 8024BF48
  c->lr=0x8024BF50u; f_80202F40(c); // 8024BF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8024BF50
  if (!crb(c,2)) { goto L_8024BF68; } // 8024BF54
  c->r[3]=0u+0x00000000u; // 8024BF58
  c->lr=0x8024BF60u; f_802037F0(c); // 8024BF5C
  c->r[0]=0u+0x00000000u; // 8024BF60
  goto L_8024BFF0; // 8024BF64
L_8024BF68:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8024BF68
  c->r[4]=c->r[1]+0x00000008u; // 8024BF6C
  c->r[0]=c->r[3]+0x00000100u; // 8024BF70
  c->r[5]=0u+0x00000004u; // 8024BF74
  c->r[0]=c->r[0]|0xA0000000u; // 8024BF78
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024BF7C
  c->r[3]=0u+0x00000000u; // 8024BF80
  c->r[6]=0u+0x00000001u; // 8024BF84
  c->r[7]=0u+0x00000000u; // 8024BF88
  c->lr=0x8024BF90u; f_802024A0(c); // 8024BF8C
  c->r[0]=cntlz(c->r[3]); // 8024BF90
  c->r[3]=0u+0x00000000u; // 8024BF94
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BF98
  c->lr=0x8024BFA0u; f_802028D0(c); // 8024BF9C
  c->r[0]=cntlz(c->r[3]); // 8024BFA0
  c->r[4]=c->r[30]|c->r[30]; // 8024BFA4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BFA8
  c->r[5]=c->r[29]|c->r[29]; // 8024BFAC
  c->r[29]=c->r[31]|c->r[0]; // 8024BFB0
  c->r[3]=0u+0x00000000u; // 8024BFB4
  c->r[6]=0u+0x00000001u; // 8024BFB8
  c->lr=0x8024BFC0u; f_80202720(c); // 8024BFBC
  c->r[0]=cntlz(c->r[3]); // 8024BFC0
  c->r[3]=0u+0x00000000u; // 8024BFC4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BFC8
  c->r[29]=c->r[29]|c->r[0]; // 8024BFCC
  c->lr=0x8024BFD4u; f_80203070(c); // 8024BFD0
  c->r[0]=cntlz(c->r[3]); // 8024BFD4
  c->r[3]=0u+0x00000000u; // 8024BFD8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BFDC
  c->r[29]=c->r[29]|c->r[0]; // 8024BFE0
  c->lr=0x8024BFE8u; f_802037F0(c); // 8024BFE4
  c->r[0]=cntlz(c->r[29]); // 8024BFE8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024BFEC
L_8024BFF0:;
  c->r[3]=0u+0x804A0000u; // 8024BFF0
  cmps(c,0,(int32_t)c->r[0],0); // 8024BFF4
  c->r[3]=c->r[3]+0xFFFFC800u; // 8024BFF8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8024BFFC
  if (crb(c,2)) { goto L_8024C00C; } // 8024C000
  c->r[0]=0u+0x00000040u; // 8024C004
  W32(c->r[3]+0x00000040u,c->r[0]); // 8024C008
L_8024C00C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C00C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C010
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024C014
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024C018
  c->lr=c->r[0]; // 8024C01C
  c->r[1]=c->r[1]+0x00000020u; // 8024C020
  return; // 8024C024
}

// __OSInitSram
void f_8024C030(Ctx* __restrict c) {
  trace_call(0x8024C030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C030
  c->r[0]=c->lr; // 8024C034
  c->r[4]=0u+0x00000040u; // 8024C038
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C03C
  c->r[0]=0u+0x00000000u; // 8024C040
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024C044
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024C048
  c->r[30]=0u+0x804A0000u; // 8024C04C
  c->r[30]=c->r[30]+0xFFFFC800u; // 8024C050
  W32(c->r[30]+0x00000044u,c->r[0]); // 8024C054
  c->r[3]=c->r[30]|c->r[30]; // 8024C058
  W32(c->r[30]+0x00000048u,c->r[0]); // 8024C05C
  c->lr=0x8024C064u; f_80244E20(c); // 8024C060
  c->r[3]=0u+0x00000000u; // 8024C064
  c->r[4]=0u+0x00000001u; // 8024C068
  c->r[5]=0u+0x00000000u; // 8024C06C
  c->lr=0x8024C074u; f_802036F0(c); // 8024C070
  cmps(c,0,(int32_t)c->r[3],0); // 8024C074
  if (!crb(c,2)) { goto L_8024C084; } // 8024C078
  c->r[3]=0u+0x00000000u; // 8024C07C
  goto L_8024C148; // 8024C080
L_8024C084:;
  c->r[3]=0u+0x00000000u; // 8024C084
  c->r[4]=0u+0x00000001u; // 8024C088
  c->r[5]=0u+0x00000003u; // 8024C08C
  c->lr=0x8024C094u; f_80202F40(c); // 8024C090
  cmps(c,0,(int32_t)c->r[3],0); // 8024C094
  if (!crb(c,2)) { goto L_8024C0AC; } // 8024C098
  c->r[3]=0u+0x00000000u; // 8024C09C
  c->lr=0x8024C0A4u; f_802037F0(c); // 8024C0A0
  c->r[3]=0u+0x00000000u; // 8024C0A4
  goto L_8024C148; // 8024C0A8
L_8024C0AC:;
  c->r[3]=0u+0x20000000u; // 8024C0AC
  c->r[4]=c->r[1]+0x00000008u; // 8024C0B0
  c->r[0]=c->r[3]+0x00000100u; // 8024C0B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024C0B8
  c->r[3]=0u+0x00000000u; // 8024C0BC
  c->r[5]=0u+0x00000004u; // 8024C0C0
  c->r[6]=0u+0x00000001u; // 8024C0C4
  c->r[7]=0u+0x00000000u; // 8024C0C8
  c->lr=0x8024C0D0u; f_802024A0(c); // 8024C0CC
  c->r[0]=cntlz(c->r[3]); // 8024C0D0
  c->r[3]=0u+0x00000000u; // 8024C0D4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C0D8
  c->lr=0x8024C0E0u; f_802028D0(c); // 8024C0DC
  c->r[0]=cntlz(c->r[3]); // 8024C0E0
  c->r[4]=c->r[30]|c->r[30]; // 8024C0E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C0E8
  c->r[3]=0u+0x00000000u; // 8024C0EC
  c->r[30]=c->r[31]|c->r[0]; // 8024C0F0
  c->r[5]=0u+0x00000040u; // 8024C0F4
  c->r[6]=0u+0x00000000u; // 8024C0F8
  c->r[7]=0u+0x00000000u; // 8024C0FC
  c->lr=0x8024C104u; f_802027D0(c); // 8024C100
  c->r[0]=cntlz(c->r[3]); // 8024C104
  c->r[3]=0u+0x00000000u; // 8024C108
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C10C
  c->r[30]=c->r[30]|c->r[0]; // 8024C110
  c->lr=0x8024C118u; f_802028D0(c); // 8024C114
  c->r[0]=cntlz(c->r[3]); // 8024C118
  c->r[3]=0u+0x00000000u; // 8024C11C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C120
  c->r[30]=c->r[30]|c->r[0]; // 8024C124
  c->lr=0x8024C12Cu; f_80203070(c); // 8024C128
  c->r[0]=cntlz(c->r[3]); // 8024C12C
  c->r[3]=0u+0x00000000u; // 8024C130
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C134
  c->r[30]=c->r[30]|c->r[0]; // 8024C138
  c->lr=0x8024C140u; f_802037F0(c); // 8024C13C
  c->r[0]=cntlz(c->r[30]); // 8024C140
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C144
L_8024C148:;
  c->r[31]=0u+0x804A0000u; // 8024C148
  c->r[0]=0u+0x00000040u; // 8024C14C
  c->r[31]=c->r[31]+0xFFFFC800u; // 8024C150
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8024C154
  W32(c->r[31]+0x00000040u,c->r[0]); // 8024C158
  c->lr=0x8024C160u; f_802494C0(c); // 8024C15C
  c->r[0]=R32(c->r[31]+0x00000048u); // 8024C160
  cmps(c,0,(int32_t)c->r[0],0); // 8024C164
  if (crb(c,2)) { goto L_8024C178; } // 8024C168
  c->lr=0x8024C170u; f_80249500(c); // 8024C16C
  c->r[3]=0u+0x00000000u; // 8024C170
  goto L_8024C188; // 8024C174
L_8024C178:;
  c->r[0]=0u+0x00000001u; // 8024C178
  W32(c->r[31]+0x00000044u,c->r[3]); // 8024C17C
  c->r[3]=c->r[31]+0x00000014u; // 8024C180
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024C184
L_8024C188:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 8024C188
  c->r[3]=0u+0x00000000u; // 8024C18C
  c->r[4]=0u+0x00000014u; // 8024C190
  c->lr=0x8024C198u; f_8024C230(c); // 8024C194
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 8024C198
  cmpu(c,0,c->r[0],0x00005000u); // 8024C19C
  if (crb(c,2)) { goto L_8024C1B0; } // 8024C1A0
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 8024C1A4
  cmpu(c,0,c->r[0],0x000000C0u); // 8024C1A8
  if (!crb(c,2)) { goto L_8024C1B4; } // 8024C1AC
L_8024C1B0:;
  c->r[30]=0u+0x00000000u; // 8024C1B0
L_8024C1B4:;
  c->lr=0x8024C1B8u; f_802494C0(c); // 8024C1B4
  c->r[4]=0u+0x804A0000u; // 8024C1B8
  c->r[4]=c->r[4]+0xFFFFC800u; // 8024C1BC
  c->r[0]=R32(c->r[4]+0x00000048u); // 8024C1C0
  cmps(c,0,(int32_t)c->r[0],0); // 8024C1C4
  if (crb(c,2)) { goto L_8024C1D8; } // 8024C1C8
  c->lr=0x8024C1D0u; f_80249500(c); // 8024C1CC
  c->r[5]=0u+0x00000000u; // 8024C1D0
  goto L_8024C1E8; // 8024C1D4
L_8024C1D8:;
  c->r[0]=0u+0x00000001u; // 8024C1D8
  W32(c->r[4]+0x00000044u,c->r[3]); // 8024C1DC
  c->r[5]=c->r[4]+0x00000014u; // 8024C1E0
  W32(c->r[4]+0x00000048u,c->r[0]); // 8024C1E4
L_8024C1E8:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 8024C1E8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8024C1EC
  cmpu(c,0,c->r[3],c->r[0]); // 8024C1F0
  if (!crb(c,2)) { goto L_8024C208; } // 8024C1F4
  c->r[3]=0u+0x00000000u; // 8024C1F8
  c->r[4]=0u+0x00000014u; // 8024C1FC
  c->lr=0x8024C204u; f_8024C230(c); // 8024C200
  goto L_8024C218; // 8024C204
L_8024C208:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 8024C208
  c->r[3]=0u+0x00000001u; // 8024C20C
  c->r[4]=0u+0x00000014u; // 8024C210
  c->lr=0x8024C218u; f_8024C230(c); // 8024C214
L_8024C218:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C21C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024C220
  c->lr=c->r[0]; // 8024C224
  c->r[1]=c->r[1]+0x00000020u; // 8024C228
  return; // 8024C22C
}

// UnlockSram
void f_8024C230(Ctx* __restrict c) {
  trace_call(0x8024C230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C230
  c->r[0]=c->lr; // 8024C234
  cmps(c,0,(int32_t)c->r[3],0); // 8024C238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024C240
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024C244
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024C248
  if (crb(c,2)) { goto L_8024C4D8; } // 8024C24C
  cmps(c,0,(int32_t)c->r[4],0); // 8024C250
  if (!crb(c,2)) { goto L_8024C384; } // 8024C254
  c->r[8]=0u+0x804A0000u; // 8024C258
  c->r[8]=c->r[8]+0xFFFFC800u; // 8024C25C
  c->r[3]=R8(c->r[8]+0x00000013u); // 8024C260
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 8024C264
  cmpu(c,0,c->r[0],0x00000002u); // 8024C268
  if (!crb(c,1)) { goto L_8024C278; } // 8024C26C
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 8024C270
  W8(c->r[8]+0x00000013u,c->r[0]); // 8024C274
L_8024C278:;
  c->r[3]=0u+0x804A0000u; // 8024C278
  c->r[0]=0u+0x00000000u; // 8024C27C
  c->r[3]=c->r[3]+0xFFFFC800u; // 8024C280
  c->r[7]=c->r[8]+0x0000000Cu; // 8024C284
  c->r[5]=c->r[3]+0x00000014u; // 8024C288
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C28C
  c->r[3]=c->r[5]+0x00000001u; // 8024C290
  c->r[3]=c->r[3]-c->r[7]; // 8024C294
  cmpu(c,0,c->r[7],c->r[5]); // 8024C298
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C29C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8024C2A0
  if (!crb(c,0)) { goto L_8024C384; } // 8024C2A4
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8024C2A8
  c->ctr=c->r[0]; // 8024C2AC
  if (crb(c,2)) { goto L_8024C354; } // 8024C2B0
L_8024C2B4:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 8024C2B4
  c->r[0]=R16(c->r[7]+0x00000000u); // 8024C2B8
  c->r[5]=R16(c->r[8]+0x00000002u); // 8024C2BC
  c->r[0]=c->r[6]+c->r[0]; // 8024C2C0
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C2C4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C2C8
  c->r[0]=R16(c->r[7]+0x00000000u); // 8024C2CC
  c->r[0]=~(c->r[0]|c->r[0]); // 8024C2D0
  c->r[0]=c->r[5]+c->r[0]; // 8024C2D4
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C2D8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C2DC
  c->r[0]=R16(c->r[7]+0x00000002u); // 8024C2E0
  c->r[0]=c->r[6]+c->r[0]; // 8024C2E4
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C2E8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C2EC
  c->r[0]=R16(c->r[7]+0x00000002u); // 8024C2F0
  c->r[0]=~(c->r[0]|c->r[0]); // 8024C2F4
  c->r[0]=c->r[5]+c->r[0]; // 8024C2F8
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C2FC
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C300
  c->r[0]=R16(c->r[7]+0x00000004u); // 8024C304
  c->r[0]=c->r[6]+c->r[0]; // 8024C308
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C30C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C310
  c->r[0]=R16(c->r[7]+0x00000004u); // 8024C314
  c->r[0]=~(c->r[0]|c->r[0]); // 8024C318
  c->r[0]=c->r[5]+c->r[0]; // 8024C31C
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C320
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8024C324
  c->r[0]=R16(c->r[7]+0x00000006u); // 8024C328
  c->r[0]=c->r[6]+c->r[0]; // 8024C32C
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C330
  c->r[0]=R16(c->r[7]+0x00000006u); // 8024C334
  c->r[7]=c->r[7]+0x00000008u; // 8024C338
  c->r[0]=~(c->r[0]|c->r[0]); // 8024C33C
  c->r[0]=c->r[5]+c->r[0]; // 8024C340
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024C2B4; } // 8024C348
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8024C34C
  if (crb(c,2)) { goto L_8024C384; } // 8024C350
L_8024C354:;
  c->ctr=c->r[3]; // 8024C354
L_8024C358:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 8024C358
  c->r[0]=R16(c->r[7]+0x00000000u); // 8024C35C
  c->r[5]=R16(c->r[8]+0x00000002u); // 8024C360
  c->r[0]=c->r[6]+c->r[0]; // 8024C364
  W16(c->r[8]+0x00000000u,c->r[0]); // 8024C368
  c->r[0]=R16(c->r[7]+0x00000000u); // 8024C36C
  c->r[7]=c->r[7]+0x00000002u; // 8024C370
  c->r[0]=~(c->r[0]|c->r[0]); // 8024C374
  c->r[0]=c->r[5]+c->r[0]; // 8024C378
  W16(c->r[8]+0x00000002u,c->r[0]); // 8024C37C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024C358; } // 8024C380
L_8024C384:;
  c->r[3]=0u+0x804A0000u; // 8024C384
  c->r[3]=c->r[3]+0xFFFFC800u; // 8024C388
  c->r[0]=R32(c->r[3]+0x00000040u); // 8024C38C
  cmpu(c,0,c->r[4],c->r[0]); // 8024C390
  if (!crb(c,0)) { goto L_8024C39C; } // 8024C394
  W32(c->r[3]+0x00000040u,c->r[4]); // 8024C398
L_8024C39C:;
  c->r[4]=0u+0x804A0000u; // 8024C39C
  c->r[4]=c->r[4]+0xFFFFC800u; // 8024C3A0
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024C3A4
  cmpu(c,0,c->r[0],0x00000014u); // 8024C3A8
  if (crb(c,1)) { goto L_8024C3D4; } // 8024C3AC
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 8024C3B0
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 8024C3B4
  cmpu(c,0,c->r[0],0x00005000u); // 8024C3B8
  if (crb(c,2)) { goto L_8024C3CC; } // 8024C3BC
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 8024C3C0
  cmpu(c,0,c->r[0],0x000000C0u); // 8024C3C4
  if (!crb(c,2)) { goto L_8024C3D4; } // 8024C3C8
L_8024C3CC:;
  c->r[0]=0u+0x00000000u; // 8024C3CC
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 8024C3D0
L_8024C3D4:;
  c->r[6]=0u+0x804A0000u; // 8024C3D4
  c->r[5]=0u+0x80250000u; // 8024C3D8
  c->r[6]=c->r[6]+0xFFFFC800u; // 8024C3DC
  c->r[3]=0u+0x00000000u; // 8024C3E0
  c->r[31]=R32(c->r[6]+0x00000040u); // 8024C3E4
  c->r[5]=c->r[5]+0xFFFFBEF0u; // 8024C3E8
  c->r[4]=0u+0x00000001u; // 8024C3EC
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 8024C3F0
  c->r[30]=c->r[6]+c->r[31]; // 8024C3F4
  c->lr=0x8024C3FCu; f_802036F0(c); // 8024C3F8
  cmps(c,0,(int32_t)c->r[3],0); // 8024C3FC
  if (!crb(c,2)) { goto L_8024C40C; } // 8024C400
  c->r[0]=0u+0x00000000u; // 8024C404
  goto L_8024C4BC; // 8024C408
L_8024C40C:;
  c->r[3]=0u+0x00000000u; // 8024C40C
  c->r[4]=0u+0x00000001u; // 8024C410
  c->r[5]=0u+0x00000003u; // 8024C414
  c->lr=0x8024C41Cu; f_80202F40(c); // 8024C418
  cmps(c,0,(int32_t)c->r[3],0); // 8024C41C
  if (!crb(c,2)) { goto L_8024C434; } // 8024C420
  c->r[3]=0u+0x00000000u; // 8024C424
  c->lr=0x8024C42Cu; f_802037F0(c); // 8024C428
  c->r[0]=0u+0x00000000u; // 8024C42C
  goto L_8024C4BC; // 8024C430
L_8024C434:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8024C434
  c->r[4]=c->r[1]+0x00000008u; // 8024C438
  c->r[0]=c->r[3]+0x00000100u; // 8024C43C
  c->r[5]=0u+0x00000004u; // 8024C440
  c->r[0]=c->r[0]|0xA0000000u; // 8024C444
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024C448
  c->r[3]=0u+0x00000000u; // 8024C44C
  c->r[6]=0u+0x00000001u; // 8024C450
  c->r[7]=0u+0x00000000u; // 8024C454
  c->lr=0x8024C45Cu; f_802024A0(c); // 8024C458
  c->r[0]=cntlz(c->r[3]); // 8024C45C
  c->r[3]=0u+0x00000000u; // 8024C460
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C464
  c->lr=0x8024C46Cu; f_802028D0(c); // 8024C468
  c->r[0]=cntlz(c->r[3]); // 8024C46C
  c->r[4]=c->r[30]|c->r[30]; // 8024C470
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C474
  c->r[5]=c->r[29]|c->r[29]; // 8024C478
  c->r[29]=c->r[31]|c->r[0]; // 8024C47C
  c->r[3]=0u+0x00000000u; // 8024C480
  c->r[6]=0u+0x00000001u; // 8024C484
  c->lr=0x8024C48Cu; f_80202720(c); // 8024C488
  c->r[0]=cntlz(c->r[3]); // 8024C48C
  c->r[3]=0u+0x00000000u; // 8024C490
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C494
  c->r[29]=c->r[29]|c->r[0]; // 8024C498
  c->lr=0x8024C4A0u; f_80203070(c); // 8024C49C
  c->r[0]=cntlz(c->r[3]); // 8024C4A0
  c->r[3]=0u+0x00000000u; // 8024C4A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C4A8
  c->r[29]=c->r[29]|c->r[0]; // 8024C4AC
  c->lr=0x8024C4B4u; f_802037F0(c); // 8024C4B0
  c->r[0]=cntlz(c->r[29]); // 8024C4B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C4B8
L_8024C4BC:;
  c->r[3]=0u+0x804A0000u; // 8024C4BC
  cmps(c,0,(int32_t)c->r[0],0); // 8024C4C0
  c->r[3]=c->r[3]+0xFFFFC800u; // 8024C4C4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8024C4C8
  if (crb(c,2)) { goto L_8024C4D8; } // 8024C4CC
  c->r[0]=0u+0x00000040u; // 8024C4D0
  W32(c->r[3]+0x00000040u,c->r[0]); // 8024C4D4
L_8024C4D8:;
  c->r[31]=0u+0x804A0000u; // 8024C4D8
  c->r[0]=0u+0x00000000u; // 8024C4DC
  c->r[31]=c->r[31]+0xFFFFC800u; // 8024C4E0
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024C4E4
  c->r[3]=R32(c->r[31]+0x00000044u); // 8024C4E8
  c->lr=0x8024C4F0u; f_80249500(c); // 8024C4EC
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 8024C4F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C4F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024C4F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024C4FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C500
  c->lr=c->r[0]; // 8024C504
  c->r[1]=c->r[1]+0x00000020u; // 8024C508
  return; // 8024C50C
}

// __OSSyncSram
void f_8024C510(Ctx* __restrict c) {
  trace_call(0x8024C510u);
  c->r[3]=0u+0x804A0000u; // 8024C510
  c->r[3]=c->r[3]+0xFFFFC800u; // 8024C514
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8024C518
  return; // 8024C51C
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_8024C520(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_8024C650(Ctx* __restrict c) {
  trace_call(0x8024C650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C650
  c->r[0]=c->lr; // 8024C654
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024C658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024C65C
  c->r[31]=c->r[3]|c->r[3]; // 8024C660
  c->lr=0x8024C668u; f_802494C0(c); // 8024C664
  c->r[4]=0u+0x804A0000u; // 8024C668
  c->r[4]=c->r[4]+0xFFFFC800u; // 8024C66C
  c->r[0]=R32(c->r[4]+0x00000048u); // 8024C670
  cmps(c,0,(int32_t)c->r[0],0); // 8024C674
  if (crb(c,2)) { goto L_8024C688; } // 8024C678
  c->lr=0x8024C680u; f_80249500(c); // 8024C67C
  c->r[5]=0u+0x00000000u; // 8024C680
  goto L_8024C698; // 8024C684
L_8024C688:;
  c->r[0]=0u+0x00000001u; // 8024C688
  W32(c->r[4]+0x00000044u,c->r[3]); // 8024C68C
  c->r[5]=c->r[4]+0x00000014u; // 8024C690
  W32(c->r[4]+0x00000048u,c->r[0]); // 8024C694
L_8024C698:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 8024C698
  c->r[3]=0u+0x00000000u; // 8024C69C
  c->r[5]=c->r[5]+c->r[0]; // 8024C6A0
  c->r[4]=0u+0x00000014u; // 8024C6A4
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 8024C6A8
  c->lr=0x8024C6B0u; f_8024C230(c); // 8024C6AC
  c->r[3]=c->r[31]|c->r[31]; // 8024C6B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024C6B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024C6B8
  c->lr=c->r[0]; // 8024C6BC
  c->r[1]=c->r[1]+0x00000010u; // 8024C6C0
  return; // 8024C6C4
}

// OSSetWirelessID
void f_8024C6D0(Ctx* __restrict c) {
  trace_call(0x8024C6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C6D0
  c->r[0]=c->lr; // 8024C6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024C6D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024C6DC
  c->r[31]=c->r[4]|c->r[4]; // 8024C6E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024C6E4
  c->r[30]=c->r[3]|c->r[3]; // 8024C6E8
  c->lr=0x8024C6F0u; f_802494C0(c); // 8024C6EC
  c->r[4]=0u+0x804A0000u; // 8024C6F0
  c->r[4]=c->r[4]+0xFFFFC800u; // 8024C6F4
  c->r[0]=R32(c->r[4]+0x00000048u); // 8024C6F8
  cmps(c,0,(int32_t)c->r[0],0); // 8024C6FC
  if (crb(c,2)) { goto L_8024C710; } // 8024C700
  c->lr=0x8024C708u; f_80249500(c); // 8024C704
  c->r[3]=0u+0x00000000u; // 8024C708
  goto L_8024C720; // 8024C70C
L_8024C710:;
  c->r[0]=0u+0x00000001u; // 8024C710
  W32(c->r[4]+0x00000044u,c->r[3]); // 8024C714
  c->r[3]=c->r[4]+0x00000014u; // 8024C718
  W32(c->r[4]+0x00000048u,c->r[0]); // 8024C71C
L_8024C720:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 8024C720
  c->r[3]=c->r[3]+c->r[0]; // 8024C724
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 8024C728
  cmpu(c,0,c->r[31],c->r[0]); // 8024C72C
  if (crb(c,2)) { goto L_8024C748; } // 8024C730
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 8024C734
  c->r[3]=0u+0x00000001u; // 8024C738
  c->r[4]=0u+0x00000014u; // 8024C73C
  c->lr=0x8024C744u; f_8024C230(c); // 8024C740
  goto L_8024C754; // 8024C744
L_8024C748:;
  c->r[3]=0u+0x00000000u; // 8024C748
  c->r[4]=0u+0x00000014u; // 8024C74C
  c->lr=0x8024C754u; f_8024C230(c); // 8024C750
L_8024C754:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024C754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024C758
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024C75C
  c->lr=c->r[0]; // 8024C760
  c->r[1]=c->r[1]+0x00000010u; // 8024C764
  return; // 8024C768
}

// __OSGetRTCFlags
void f_8024C770(Ctx* __restrict c) {
  trace_call(0x8024C770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C770
  c->r[0]=c->lr; // 8024C774
  c->r[4]=0u+0x00000001u; // 8024C778
  c->r[5]=0u+0x00000000u; // 8024C77C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C780
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024C784
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024C788
  c->r[30]=c->r[3]|c->r[3]; // 8024C78C
  c->r[3]=0u+0x00000000u; // 8024C790
  c->lr=0x8024C798u; f_802036F0(c); // 8024C794
  cmps(c,0,(int32_t)c->r[3],0); // 8024C798
  if (!crb(c,2)) { goto L_8024C7A8; } // 8024C79C
  c->r[3]=0u+0x00000000u; // 8024C7A0
  goto L_8024C874; // 8024C7A4
L_8024C7A8:;
  c->r[3]=0u+0x00000000u; // 8024C7A8
  c->r[4]=0u+0x00000001u; // 8024C7AC
  c->r[5]=0u+0x00000003u; // 8024C7B0
  c->lr=0x8024C7B8u; f_80202F40(c); // 8024C7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8024C7B8
  if (!crb(c,2)) { goto L_8024C7D0; } // 8024C7BC
  c->r[3]=0u+0x00000000u; // 8024C7C0
  c->lr=0x8024C7C8u; f_802037F0(c); // 8024C7C4
  c->r[3]=0u+0x00000000u; // 8024C7C8
  goto L_8024C874; // 8024C7CC
L_8024C7D0:;
  c->r[3]=0u+0x21000000u; // 8024C7D0
  c->r[4]=c->r[1]+0x00000008u; // 8024C7D4
  c->r[0]=c->r[3]+0x00000800u; // 8024C7D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024C7DC
  c->r[3]=0u+0x00000000u; // 8024C7E0
  c->r[5]=0u+0x00000004u; // 8024C7E4
  c->r[6]=0u+0x00000001u; // 8024C7E8
  c->r[7]=0u+0x00000000u; // 8024C7EC
  c->lr=0x8024C7F4u; f_802024A0(c); // 8024C7F0
  c->r[0]=cntlz(c->r[3]); // 8024C7F4
  c->r[3]=0u+0x00000000u; // 8024C7F8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C7FC
  c->lr=0x8024C804u; f_802028D0(c); // 8024C800
  c->r[0]=cntlz(c->r[3]); // 8024C804
  c->r[4]=c->r[1]+0x00000008u; // 8024C808
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C80C
  c->r[3]=0u+0x00000000u; // 8024C810
  c->r[31]=c->r[31]|c->r[0]; // 8024C814
  c->r[5]=0u+0x00000004u; // 8024C818
  c->r[6]=0u+0x00000000u; // 8024C81C
  c->r[7]=0u+0x00000000u; // 8024C820
  c->lr=0x8024C828u; f_802024A0(c); // 8024C824
  c->r[0]=cntlz(c->r[3]); // 8024C828
  c->r[3]=0u+0x00000000u; // 8024C82C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C830
  c->r[31]=c->r[31]|c->r[0]; // 8024C834
  c->lr=0x8024C83Cu; f_802028D0(c); // 8024C838
  c->r[0]=cntlz(c->r[3]); // 8024C83C
  c->r[3]=0u+0x00000000u; // 8024C840
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C844
  c->r[31]=c->r[31]|c->r[0]; // 8024C848
  c->lr=0x8024C850u; f_80203070(c); // 8024C84C
  c->r[0]=cntlz(c->r[3]); // 8024C850
  c->r[3]=0u+0x00000000u; // 8024C854
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C858
  c->r[31]=c->r[31]|c->r[0]; // 8024C85C
  c->lr=0x8024C864u; f_802037F0(c); // 8024C860
  c->r[3]=R32(c->r[1]+0x00000008u); // 8024C864
  c->r[0]=cntlz(c->r[31]); // 8024C868
  W32(c->r[30]+0x00000000u,c->r[3]); // 8024C86C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C870
L_8024C874:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C874
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C878
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024C87C
  c->lr=c->r[0]; // 8024C880
  c->r[1]=c->r[1]+0x00000020u; // 8024C884
  return; // 8024C888
}

// __OSClearRTCFlags
void f_8024C890(Ctx* __restrict c) {
  trace_call(0x8024C890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C890
  c->r[0]=c->lr; // 8024C894
  c->r[3]=0u+0x00000000u; // 8024C898
  c->r[4]=0u+0x00000001u; // 8024C89C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C8A0
  c->r[0]=0u+0x00000000u; // 8024C8A4
  c->r[5]=0u+0x00000000u; // 8024C8A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024C8AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024C8B0
  c->lr=0x8024C8B8u; f_802036F0(c); // 8024C8B4
  cmps(c,0,(int32_t)c->r[3],0); // 8024C8B8
  if (!crb(c,2)) { goto L_8024C8C8; } // 8024C8BC
  c->r[3]=0u+0x00000000u; // 8024C8C0
  goto L_8024C98C; // 8024C8C4
L_8024C8C8:;
  c->r[3]=0u+0x00000000u; // 8024C8C8
  c->r[4]=0u+0x00000001u; // 8024C8CC
  c->r[5]=0u+0x00000003u; // 8024C8D0
  c->lr=0x8024C8D8u; f_80202F40(c); // 8024C8D4
  cmps(c,0,(int32_t)c->r[3],0); // 8024C8D8
  if (!crb(c,2)) { goto L_8024C8F0; } // 8024C8DC
  c->r[3]=0u+0x00000000u; // 8024C8E0
  c->lr=0x8024C8E8u; f_802037F0(c); // 8024C8E4
  c->r[3]=0u+0x00000000u; // 8024C8E8
  goto L_8024C98C; // 8024C8EC
L_8024C8F0:;
  c->r[3]=0u+0xA1000000u; // 8024C8F0
  c->r[4]=c->r[1]+0x0000000Cu; // 8024C8F4
  c->r[0]=c->r[3]+0x00000800u; // 8024C8F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024C8FC
  c->r[3]=0u+0x00000000u; // 8024C900
  c->r[5]=0u+0x00000004u; // 8024C904
  c->r[6]=0u+0x00000001u; // 8024C908
  c->r[7]=0u+0x00000000u; // 8024C90C
  c->lr=0x8024C914u; f_802024A0(c); // 8024C910
  c->r[0]=cntlz(c->r[3]); // 8024C914
  c->r[3]=0u+0x00000000u; // 8024C918
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C91C
  c->lr=0x8024C924u; f_802028D0(c); // 8024C920
  c->r[0]=cntlz(c->r[3]); // 8024C924
  c->r[4]=c->r[1]+0x00000008u; // 8024C928
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C92C
  c->r[3]=0u+0x00000000u; // 8024C930
  c->r[31]=c->r[31]|c->r[0]; // 8024C934
  c->r[5]=0u+0x00000004u; // 8024C938
  c->r[6]=0u+0x00000001u; // 8024C93C
  c->r[7]=0u+0x00000000u; // 8024C940
  c->lr=0x8024C948u; f_802024A0(c); // 8024C944
  c->r[0]=cntlz(c->r[3]); // 8024C948
  c->r[3]=0u+0x00000000u; // 8024C94C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C950
  c->r[31]=c->r[31]|c->r[0]; // 8024C954
  c->lr=0x8024C95Cu; f_802028D0(c); // 8024C958
  c->r[0]=cntlz(c->r[3]); // 8024C95C
  c->r[3]=0u+0x00000000u; // 8024C960
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C964
  c->r[31]=c->r[31]|c->r[0]; // 8024C968
  c->lr=0x8024C970u; f_80203070(c); // 8024C96C
  c->r[0]=cntlz(c->r[3]); // 8024C970
  c->r[3]=0u+0x00000000u; // 8024C974
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C978
  c->r[31]=c->r[31]|c->r[0]; // 8024C97C
  c->lr=0x8024C984u; f_802037F0(c); // 8024C980
  c->r[0]=cntlz(c->r[31]); // 8024C984
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024C988
L_8024C98C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C98C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C990
  c->lr=c->r[0]; // 8024C994
  c->r[1]=c->r[1]+0x00000020u; // 8024C998
  return; // 8024C99C
}

// fn_8024C9A0
void f_8024C9A0(Ctx* __restrict c) {
  trace_call(0x8024C9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C9A0
  c->r[0]=c->lr; // 8024C9A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C9A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024C9AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024C9B0
  c->r[30]=c->r[4]|c->r[4]; // 8024C9B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024C9B8
  c->r[29]=c->r[3]|c->r[3]; // 8024C9BC
  c->lr=0x8024C9C4u; f_802494C0(c); // 8024C9C0
  c->r[31]=c->r[3]|c->r[3]; // 8024C9C4
  c->r[3]=c->r[29]+0x00000004u; // 8024C9C8
  c->lr=0x8024C9D0u; f_8024CDF0(c); // 8024C9CC
  W32(c->r[29]+0x00000000u,c->r[30]); // 8024C9D0
  c->r[3]=c->r[31]|c->r[31]; // 8024C9D4
  c->lr=0x8024C9DCu; f_80249500(c); // 8024C9D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C9DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024C9E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024C9E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024C9E8
  c->lr=c->r[0]; // 8024C9EC
  c->r[1]=c->r[1]+0x00000020u; // 8024C9F0
  return; // 8024C9F4
}

// fn_8024CA00
void f_8024CA00(Ctx* __restrict c) {
  trace_call(0x8024CA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CA00
  c->r[0]=c->lr; // 8024CA04
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024CA08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024CA0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024CA10
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024CA14
  c->r[29]=c->r[3]|c->r[3]; // 8024CA18
  c->lr=0x8024CA20u; f_802494C0(c); // 8024CA1C
  c->r[31]=c->r[3]|c->r[3]; // 8024CA20
  goto L_8024CA30; // 8024CA24
L_8024CA28:;
  c->r[3]=c->r[29]+0x00000004u; // 8024CA28
  c->lr=0x8024CA30u; f_8024DEC0(c); // 8024CA2C
L_8024CA30:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 8024CA30
  cmps(c,0,(int32_t)c->r[30],0); // 8024CA34
  if (!crb(c,1)) { IRQCHK(c); goto L_8024CA28; } // 8024CA38
  c->r[4]=R32(c->r[29]+0x00000000u); // 8024CA3C
  c->r[3]=c->r[31]|c->r[31]; // 8024CA40
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8024CA44
  W32(c->r[29]+0x00000000u,c->r[0]); // 8024CA48
  c->lr=0x8024CA50u; f_80249500(c); // 8024CA4C
  c->r[3]=c->r[30]|c->r[30]; // 8024CA50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024CA54
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024CA58
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024CA5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024CA60
  c->lr=c->r[0]; // 8024CA64
  c->r[1]=c->r[1]+0x00000020u; // 8024CA68
  return; // 8024CA6C
}

// fn_8024CA70
void f_8024CA70(Ctx* __restrict c) {
  trace_call(0x8024CA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CA70
  c->r[0]=c->lr; // 8024CA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024CA78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024CA7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024CA80
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024CA84
  c->r[29]=c->r[3]|c->r[3]; // 8024CA88
  c->lr=0x8024CA90u; f_802494C0(c); // 8024CA8C
  c->r[30]=R32(c->r[29]+0x00000000u); // 8024CA90
  c->r[31]=c->r[3]|c->r[3]; // 8024CA94
  c->r[3]=c->r[29]+0x00000004u; // 8024CA98
  c->r[0]=c->r[30]+0x00000001u; // 8024CA9C
  W32(c->r[29]+0x00000000u,c->r[0]); // 8024CAA0
  c->lr=0x8024CAA8u; f_8024DFB0(c); // 8024CAA4
  c->r[3]=c->r[31]|c->r[31]; // 8024CAA8
  c->lr=0x8024CAB0u; f_80249500(c); // 8024CAAC
  c->r[3]=c->r[30]|c->r[30]; // 8024CAB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024CAB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024CAB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024CABC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024CAC0
  c->lr=c->r[0]; // 8024CAC4
  c->r[1]=c->r[1]+0x00000020u; // 8024CAC8
  return; // 8024CACC
}

// fn_8024CAD0
void f_8024CAD0(Ctx* __restrict c) {
  trace_call(0x8024CAD0u);
  c->r[9]=mfspr(c,1008); // 8024CAD0
  c->r[10]=c->r[9]|0x00000008u; // 8024CAD4
  mtspr(c,1008,c->r[10]); // 8024CAD8
  /* isync */ // 8024CADC
  /* sync */ // 8024CAE0
  mtspr(c,1008,c->r[9]); // 8024CAE4
  return; /* rfi */ // 8024CAE8
  f_8024CAEC(c);
}

// fn_8024CAEC
void f_8024CAEC(Ctx* __restrict c) {
  trace_call(0x8024CAECu);
  c->r[0]=c->r[0]|0x00000000u; // 8024CAEC
  f_8024CAF0(c);
}

// __OSInitSystemCall
void f_8024CAF0(Ctx* __restrict c) {
  trace_call(0x8024CAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CAF0
  c->r[0]=c->lr; // 8024CAF4
  c->r[4]=0u+0x80250000u; // 8024CAF8
  c->r[5]=0u+0x80250000u; // 8024CAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CB00
  c->r[4]=c->r[4]+0xFFFFCAD0u; // 8024CB04
  c->r[5]=c->r[5]+0xFFFFCAECu; // 8024CB08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CB0C
  c->r[31]=0u+0x80000000u; // 8024CB10
  c->r[3]=c->r[31]+0x00000C00u; // 8024CB14
  c->r[5]=c->r[5]-c->r[4]; // 8024CB18
  c->lr=0x8024CB20u; f_80004000(c); // 8024CB1C
  c->r[3]=c->r[31]+0x00000C00u; // 8024CB20
  c->r[4]=0u+0x00000100u; // 8024CB24
  c->lr=0x8024CB2Cu; f_80244EB0(c); // 8024CB28
  /* sync */ // 8024CB2C
  c->r[3]=c->r[31]+0x00000C00u; // 8024CB30
  c->r[4]=0u+0x00000100u; // 8024CB34
  c->lr=0x8024CB3Cu; f_80244F10(c); // 8024CB38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CB40
  c->lr=c->r[0]; // 8024CB44
  c->r[1]=c->r[1]+0x00000010u; // 8024CB48
  return; // 8024CB4C
}

// DefaultSwitchThreadCallback
void f_8024CB50(Ctx* __restrict c) {
  trace_call(0x8024CB50u);
  return; // 8024CB50
}

// __OSThreadInit
void f_8024CB60(Ctx* __restrict c) {
  trace_call(0x8024CB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CB60
  c->r[0]=c->lr; // 8024CB64
  c->r[3]=0u+0x00000002u; // 8024CB68
  c->r[6]=0u+0x00000001u; // 8024CB6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024CB70
  c->r[4]=0u+0x00000000u; // 8024CB74
  c->r[5]=0u+0x00000010u; // 8024CB78
  c->r[0]=0u+0xFFFFFFFFu; // 8024CB7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024CB80
  c->r[31]=0u+0x804A0000u; // 8024CB84
  c->r[31]=c->r[31]+0xFFFFC858u; // 8024CB88
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024CB8C
  c->r[30]=c->r[31]+0x00000000u; // 8024CB90
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024CB94
  c->r[29]=0u+0x80000000u; // 8024CB98
  W16(c->r[30]+0x000002C8u,c->r[3]); // 8024CB9C
  c->r[3]=c->r[30]|c->r[30]; // 8024CBA0
  W16(c->r[30]+0x000002CAu,c->r[6]); // 8024CBA4
  W32(c->r[30]+0x000002D4u,c->r[5]); // 8024CBA8
  W32(c->r[30]+0x000002D0u,c->r[5]); // 8024CBAC
  W32(c->r[30]+0x000002CCu,c->r[4]); // 8024CBB0
  W32(c->r[30]+0x000002D8u,c->r[0]); // 8024CBB4
  W32(c->r[30]+0x000002F0u,c->r[4]); // 8024CBB8
  W32(c->r[30]+0x000002ECu,c->r[4]); // 8024CBBC
  W32(c->r[30]+0x000002E8u,c->r[4]); // 8024CBC0
  W32(c->r[30]+0x000002F8u,c->r[4]); // 8024CBC4
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8024CBC8
  W32(c->r[29]+0x000000D8u,c->r[30]); // 8024CBCC
  c->lr=0x8024CBD4u; f_802458A0(c); // 8024CBD0
  c->r[3]=c->r[30]|c->r[30]; // 8024CBD4
  c->lr=0x8024CBDCu; f_80245660(c); // 8024CBD8
  c->r[3]=0u+0x804F0000u; // 8024CBDC
  c->r[5]=0u+0x804E0000u; // 8024CBE0
  c->r[3]=c->r[3]+0xFFFFA4E0u; // 8024CBE4
  W32(c->r[30]+0x00000304u,c->r[3]); // 8024CBE8
  c->r[5]=c->r[5]+0xFFFFA4E0u; // 8024CBEC
  c->r[4]=c->r[30]|c->r[30]; // 8024CBF0
  c->r[3]=0u+0xDEAE0000u; // 8024CBF4
  W32(c->r[30]+0x00000308u,c->r[5]); // 8024CBF8
  c->r[0]=c->r[3]+0xFFFFBABEu; // 8024CBFC
  W32(c->r[5]+0x00000000u,c->r[0]); // 8024CC00
  c->r[12]=R32(c->r[13]+0xFFFF9158u); // 8024CC04
  c->r[3]=R32(c->r[29]+0x000000E4u); // 8024CC08
  c->ctr=c->r[12]; // 8024CC0C
  if (true) { c->lr=0x8024CC14u; dispatch(c,c->ctr); } // 8024CC10
  W32(c->r[29]+0x000000E4u,c->r[30]); // 8024CC14
  c->lr=0x8024CC1Cu; f_80245830(c); // 8024CC18
  c->r[4]=R32(c->r[29]+0x000000E4u); // 8024CC1C
  c->r[4]=R32(c->r[4]+0x00000308u); // 8024CC20
  c->r[8]=c->r[4]+0x00000004u; // 8024CC24
  cmpu(c,1,c->r[8],c->r[3]); // 8024CC28
  if (!crb(c,4)) { goto L_8024CCEC; } // 8024CC2C
  c->r[5]=c->r[3]-c->r[8]; // 8024CC30
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 8024CC34
  c->r[4]=c->r[5]+0x00000003u; // 8024CC38
  c->r[0]=sraw(c,c->r[4],2); // 8024CC3C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8024CC40
  cmps(c,0,(int32_t)c->r[0],8); // 8024CC44
  if (!crb(c,1)) { goto L_8024CCC4; } // 8024CC48
  c->r[7]=0u+0x00000000u; // 8024CC4C
  if (crb(c,5)) { goto L_8024CC78; } // 8024CC50
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 8024CC54
  c->r[5]=0u+0x00000001u; // 8024CC58
  if (!crb(c,2)) { goto L_8024CC6C; } // 8024CC5C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 8024CC60
  if (crb(c,2)) { goto L_8024CC6C; } // 8024CC64
  c->r[5]=0u+0x00000000u; // 8024CC68
L_8024CC6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024CC6C
  if (crb(c,2)) { goto L_8024CC78; } // 8024CC70
  c->r[7]=0u+0x00000001u; // 8024CC74
L_8024CC78:;
  cmps(c,0,(int32_t)c->r[7],0); // 8024CC78
  if (crb(c,2)) { goto L_8024CCC4; } // 8024CC7C
  c->r[0]=c->r[6]+0x0000001Fu; // 8024CC80
  c->r[4]=0u+0x00000000u; // 8024CC84
  c->r[0]=c->r[0]-c->r[8]; // 8024CC88
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8024CC8C
  c->ctr=c->r[0]; // 8024CC90
  cmpu(c,0,c->r[8],c->r[6]); // 8024CC94
  if (!crb(c,0)) { goto L_8024CCC4; } // 8024CC98
L_8024CC9C:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 8024CC9C
  W32(c->r[8]+0x00000004u,c->r[4]); // 8024CCA0
  W32(c->r[8]+0x00000008u,c->r[4]); // 8024CCA4
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 8024CCA8
  W32(c->r[8]+0x00000010u,c->r[4]); // 8024CCAC
  W32(c->r[8]+0x00000014u,c->r[4]); // 8024CCB0
  W32(c->r[8]+0x00000018u,c->r[4]); // 8024CCB4
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 8024CCB8
  c->r[8]=c->r[8]+0x00000020u; // 8024CCBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024CC9C; } // 8024CCC0
L_8024CCC4:;
  c->r[0]=c->r[3]+0x00000003u; // 8024CCC4
  c->r[4]=0u+0x00000000u; // 8024CCC8
  c->r[0]=c->r[0]-c->r[8]; // 8024CCCC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024CCD0
  c->ctr=c->r[0]; // 8024CCD4
  cmpu(c,0,c->r[8],c->r[3]); // 8024CCD8
  if (!crb(c,0)) { goto L_8024CCEC; } // 8024CCDC
L_8024CCE0:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 8024CCE0
  c->r[8]=c->r[8]+0x00000004u; // 8024CCE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024CCE0; } // 8024CCE8
L_8024CCEC:;
  c->r[0]=0u+0x00000002u; // 8024CCEC
  c->r[3]=0u+0x00000000u; // 8024CCF0
  W32(c->r[13]+0xFFFF9E50u,c->r[3]); // 8024CCF4
  c->r[4]=c->r[31]+0x00000318u; // 8024CCF8
  W32(c->r[13]+0xFFFF9E4Cu,c->r[3]); // 8024CCFC
  c->ctr=c->r[0]; // 8024CD00
L_8024CD04:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 8024CD04
  W32(c->r[4]+0x00000000u,c->r[3]); // 8024CD08
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8024CD0C
  W32(c->r[4]+0x00000008u,c->r[3]); // 8024CD10
  W32(c->r[4]+0x00000014u,c->r[3]); // 8024CD14
  W32(c->r[4]+0x00000010u,c->r[3]); // 8024CD18
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 8024CD1C
  W32(c->r[4]+0x00000018u,c->r[3]); // 8024CD20
  W32(c->r[4]+0x00000024u,c->r[3]); // 8024CD24
  W32(c->r[4]+0x00000020u,c->r[3]); // 8024CD28
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8024CD2C
  W32(c->r[4]+0x00000028u,c->r[3]); // 8024CD30
  W32(c->r[4]+0x00000034u,c->r[3]); // 8024CD34
  W32(c->r[4]+0x00000030u,c->r[3]); // 8024CD38
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 8024CD3C
  W32(c->r[4]+0x00000038u,c->r[3]); // 8024CD40
  W32(c->r[4]+0x00000044u,c->r[3]); // 8024CD44
  W32(c->r[4]+0x00000040u,c->r[3]); // 8024CD48
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 8024CD4C
  W32(c->r[4]+0x00000048u,c->r[3]); // 8024CD50
  W32(c->r[4]+0x00000054u,c->r[3]); // 8024CD54
  W32(c->r[4]+0x00000050u,c->r[3]); // 8024CD58
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 8024CD5C
  W32(c->r[4]+0x00000058u,c->r[3]); // 8024CD60
  W32(c->r[4]+0x00000064u,c->r[3]); // 8024CD64
  W32(c->r[4]+0x00000060u,c->r[3]); // 8024CD68
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 8024CD6C
  W32(c->r[4]+0x00000068u,c->r[3]); // 8024CD70
  W32(c->r[4]+0x00000074u,c->r[3]); // 8024CD74
  W32(c->r[4]+0x00000070u,c->r[3]); // 8024CD78
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 8024CD7C
  W32(c->r[4]+0x00000078u,c->r[3]); // 8024CD80
  c->r[4]=c->r[4]+0x00000080u; // 8024CD84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024CD04; } // 8024CD88
  c->r[3]=0u+0x80000000u; // 8024CD8C
  c->r[4]=0u+0x00000000u; // 8024CD90
  W32(c->r[3]+0x000000E0u,c->r[4]); // 8024CD94
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8024CD98
  W32(c->r[3]+0x000000DCu,c->r[30]); // 8024CD9C
  goto L_8024CDA8; // 8024CDA0
  W32(c->r[4]+0x000002FCu,c->r[30]); // 8024CDA4
L_8024CDA8:;
  c->r[29]=0u+0x00000000u; // 8024CDA8
  W32(c->r[30]+0x00000300u,c->r[4]); // 8024CDAC
  c->r[4]=0u+0x80000000u; // 8024CDB0
  c->r[3]=c->r[31]+0x00000418u; // 8024CDB4
  W32(c->r[30]+0x000002FCu,c->r[29]); // 8024CDB8
  W32(c->r[4]+0x000000E0u,c->r[30]); // 8024CDBC
  c->lr=0x8024CDC4u; f_802458A0(c); // 8024CDC0
  W32(c->r[13]+0xFFFF9E48u,c->r[29]); // 8024CDC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024CDC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024CDCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024CDD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024CDD4
  c->lr=c->r[0]; // 8024CDD8
  c->r[1]=c->r[1]+0x00000020u; // 8024CDDC
  return; // 8024CDE0
}

// OSInitThreadQueue
void f_8024CDF0(Ctx* __restrict c) {
  trace_call(0x8024CDF0u);
  c->r[0]=0u+0x00000000u; // 8024CDF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8024CDF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8024CDF8
  return; // 8024CDFC
}

// OSGetCurrentThread
void f_8024CE00(Ctx* __restrict c) {
  trace_call(0x8024CE00u);
  c->r[3]=0u+0x80000000u; // 8024CE00
  c->r[3]=R32(c->r[3]+0x000000E4u); // 8024CE04
  return; // 8024CE08
}

// OSIsThreadTerminated
void f_8024CE10(Ctx* __restrict c) {
  trace_call(0x8024CE10u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8024CE10
  c->r[3]=0u+0x00000001u; // 8024CE14
  cmpu(c,0,c->r[0],0x00000008u); // 8024CE18
  if (crb(c,2)) { goto L_8024CE2C; } // 8024CE1C
  cmps(c,0,(int32_t)c->r[0],0); // 8024CE20
  if (crb(c,2)) { goto L_8024CE2C; } // 8024CE24
  c->r[3]=0u+0x00000000u; // 8024CE28
L_8024CE2C:;
  c->r[0]=0u-c->r[3]; // 8024CE2C
  c->r[0]=c->r[0]|c->r[3]; // 8024CE30
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024CE34
  return; // 8024CE38
}

// OSDisableScheduler
void f_8024CE40(Ctx* __restrict c) {
  trace_call(0x8024CE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CE40
  c->r[0]=c->lr; // 8024CE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CE48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CE4C
  c->lr=0x8024CE54u; f_802494C0(c); // 8024CE50
  c->r[31]=R32(c->r[13]+0xFFFF9E48u); // 8024CE54
  c->r[0]=c->r[31]+0x00000001u; // 8024CE58
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 8024CE5C
  c->lr=0x8024CE64u; f_80249500(c); // 8024CE60
  c->r[3]=c->r[31]|c->r[31]; // 8024CE64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CE68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CE6C
  c->lr=c->r[0]; // 8024CE70
  c->r[1]=c->r[1]+0x00000010u; // 8024CE74
  return; // 8024CE78
}

// OSEnableScheduler
void f_8024CE80(Ctx* __restrict c) {
  trace_call(0x8024CE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CE80
  c->r[0]=c->lr; // 8024CE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CE88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CE8C
  c->lr=0x8024CE94u; f_802494C0(c); // 8024CE90
  c->r[31]=R32(c->r[13]+0xFFFF9E48u); // 8024CE94
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8024CE98
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 8024CE9C
  c->lr=0x8024CEA4u; f_80249500(c); // 8024CEA0
  c->r[3]=c->r[31]|c->r[31]; // 8024CEA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CEA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CEAC
  c->lr=c->r[0]; // 8024CEB0
  c->r[1]=c->r[1]+0x00000010u; // 8024CEB4
  return; // 8024CEB8
}

// UnsetRun
void f_8024CEC0(Ctx* __restrict c) {
  trace_call(0x8024CEC0u);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 8024CEC0
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8024CEC4
  cmps(c,0,(int32_t)c->r[5],0); // 8024CEC8
  c->r[6]=R32(c->r[3]+0x000002E4u); // 8024CECC
  if (!crb(c,2)) { goto L_8024CEDC; } // 8024CED0
  W32(c->r[4]+0x00000004u,c->r[6]); // 8024CED4
  goto L_8024CEE0; // 8024CED8
L_8024CEDC:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 8024CEDC
L_8024CEE0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024CEE0
  if (!crb(c,2)) { goto L_8024CEF0; } // 8024CEE4
  W32(c->r[4]+0x00000000u,c->r[5]); // 8024CEE8
  goto L_8024CEF4; // 8024CEEC
L_8024CEF0:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 8024CEF0
L_8024CEF4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8024CEF4
  cmps(c,0,(int32_t)c->r[0],0); // 8024CEF8
  if (!crb(c,2)) { goto L_8024CF1C; } // 8024CEFC
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024CF00
  c->r[4]=0u+0x00000001u; // 8024CF04
  c->r[5]=R32(c->r[13]+0xFFFF9E50u); // 8024CF08
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8024CF0C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8024CF10
  c->r[0]=c->r[5]&~c->r[0]; // 8024CF14
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024CF18
L_8024CF1C:;
  c->r[0]=0u+0x00000000u; // 8024CF1C
  W32(c->r[3]+0x000002DCu,c->r[0]); // 8024CF20
  return; // 8024CF24
}

// __OSGetEffectivePriority
void f_8024CF30(Ctx* __restrict c) {
  trace_call(0x8024CF30u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8024CF30
  c->r[3]=R32(c->r[3]+0x000002F4u); // 8024CF34
  goto L_8024CF60; // 8024CF38
  c->r[0]=c->r[0]|0x00000000u; // 8024CF3C
L_8024CF40:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8024CF40
  cmps(c,0,(int32_t)c->r[5],0); // 8024CF44
  if (crb(c,2)) { goto L_8024CF5C; } // 8024CF48
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8024CF4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024CF50
  if (!crb(c,0)) { goto L_8024CF5C; } // 8024CF54
  c->r[4]=c->r[0]|c->r[0]; // 8024CF58
L_8024CF5C:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 8024CF5C
L_8024CF60:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024CF60
  if (!crb(c,2)) { IRQCHK(c); goto L_8024CF40; } // 8024CF64
  c->r[3]=c->r[4]|c->r[4]; // 8024CF68
  return; // 8024CF6C
}

// SetEffectivePriority
void f_8024CF70(Ctx* __restrict c) {
  trace_call(0x8024CF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CF70
  c->r[0]=c->lr; // 8024CF74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CF78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CF7C
  c->r[31]=c->r[4]|c->r[4]; // 8024CF80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024CF84
  c->r[30]=c->r[3]|c->r[3]; // 8024CF88
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8024CF8C
  cmps(c,0,(int32_t)c->r[0],1); // 8024CF90
  if (crb(c,2)) { goto L_8024CFAC; } // 8024CF94
  cmps(c,0,(int32_t)c->r[0],4); // 8024CF98
  if (crb(c,2)) { goto L_8024D018; } // 8024CF9C
  cmps(c,0,(int32_t)c->r[0],2); // 8024CFA0
  if (crb(c,2)) { goto L_8024D0F0; } // 8024CFA4
  goto L_8024D0FC; // 8024CFA8
L_8024CFAC:;
  c->lr=0x8024CFB0u; f_8024CEC0(c); // 8024CFAC
  c->r[3]=0u+0x804A0000u; // 8024CFB0
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8024CFB4
  c->r[3]=c->r[3]+0xFFFFCB70u; // 8024CFB8
  W32(c->r[30]+0x000002D0u,c->r[31]); // 8024CFBC
  c->r[3]=c->r[3]+c->r[0]; // 8024CFC0
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8024CFC4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024CFC8
  cmps(c,0,(int32_t)c->r[4],0); // 8024CFCC
  if (!crb(c,2)) { goto L_8024CFDC; } // 8024CFD0
  W32(c->r[3]+0x00000000u,c->r[30]); // 8024CFD4
  goto L_8024CFE0; // 8024CFD8
L_8024CFDC:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 8024CFDC
L_8024CFE0:;
  c->r[0]=0u+0x00000000u; // 8024CFE0
  W32(c->r[30]+0x000002E4u,c->r[4]); // 8024CFE4
  c->r[4]=R32(c->r[30]+0x000002DCu); // 8024CFE8
  c->r[3]=0u+0x00000001u; // 8024CFEC
  W32(c->r[30]+0x000002E0u,c->r[0]); // 8024CFF0
  W32(c->r[4]+0x00000004u,c->r[30]); // 8024CFF4
  c->r[0]=R32(c->r[30]+0x000002D0u); // 8024CFF8
  c->r[4]=R32(c->r[13]+0xFFFF9E50u); // 8024CFFC
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8024D000
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8024D004
  c->r[0]=c->r[4]|c->r[0]; // 8024D008
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024D00C
  W32(c->r[13]+0xFFFF9E4Cu,c->r[3]); // 8024D010
  goto L_8024D0FC; // 8024D014
L_8024D018:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 8024D018
  c->r[7]=R32(c->r[3]+0x000002E4u); // 8024D01C
  cmps(c,0,(int32_t)c->r[6],0); // 8024D020
  if (!crb(c,2)) { goto L_8024D034; } // 8024D024
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8024D028
  W32(c->r[5]+0x00000004u,c->r[7]); // 8024D02C
  goto L_8024D038; // 8024D030
L_8024D034:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 8024D034
L_8024D038:;
  cmps(c,0,(int32_t)c->r[7],0); // 8024D038
  if (!crb(c,2)) { goto L_8024D04C; } // 8024D03C
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8024D040
  W32(c->r[5]+0x00000000u,c->r[6]); // 8024D044
  goto L_8024D050; // 8024D048
L_8024D04C:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 8024D04C
L_8024D050:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 8024D050
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8024D054
  c->r[6]=R32(c->r[5]+0x00000000u); // 8024D058
  goto L_8024D064; // 8024D05C
L_8024D060:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 8024D060
L_8024D064:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024D064
  if (crb(c,2)) { goto L_8024D07C; } // 8024D068
  c->r[4]=R32(c->r[6]+0x000002D0u); // 8024D06C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024D070
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8024D074
  if (!crb(c,1)) { IRQCHK(c); goto L_8024D060; } // 8024D078
L_8024D07C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024D07C
  if (!crb(c,2)) { goto L_8024D0B4; } // 8024D080
  c->r[4]=R32(c->r[5]+0x00000004u); // 8024D084
  cmps(c,0,(int32_t)c->r[4],0); // 8024D088
  if (!crb(c,2)) { goto L_8024D098; } // 8024D08C
  W32(c->r[5]+0x00000000u,c->r[3]); // 8024D090
  goto L_8024D09C; // 8024D094
L_8024D098:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 8024D098
L_8024D09C:;
  c->r[0]=0u+0x00000000u; // 8024D09C
  W32(c->r[3]+0x000002E4u,c->r[4]); // 8024D0A0
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8024D0A4
  W32(c->r[3]+0x000002E0u,c->r[0]); // 8024D0A8
  W32(c->r[4]+0x00000004u,c->r[3]); // 8024D0AC
  goto L_8024D0DC; // 8024D0B0
L_8024D0B4:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 8024D0B4
  c->r[4]=R32(c->r[6]+0x000002E4u); // 8024D0B8
  W32(c->r[6]+0x000002E4u,c->r[3]); // 8024D0BC
  cmps(c,0,(int32_t)c->r[4],0); // 8024D0C0
  W32(c->r[3]+0x000002E4u,c->r[4]); // 8024D0C4
  if (!crb(c,2)) { goto L_8024D0D8; } // 8024D0C8
  c->r[4]=R32(c->r[3]+0x000002DCu); // 8024D0CC
  W32(c->r[4]+0x00000000u,c->r[3]); // 8024D0D0
  goto L_8024D0DC; // 8024D0D4
L_8024D0D8:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 8024D0D8
L_8024D0DC:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 8024D0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8024D0E0
  if (crb(c,2)) { goto L_8024D0FC; } // 8024D0E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024D0E8
  goto L_8024D100; // 8024D0EC
L_8024D0F0:;
  c->r[0]=0u+0x00000001u; // 8024D0F0
  W32(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 8024D0F4
  W32(c->r[3]+0x000002D0u,c->r[4]); // 8024D0F8
L_8024D0FC:;
  c->r[3]=0u+0x00000000u; // 8024D0FC
L_8024D100:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D104
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024D108
  c->lr=c->r[0]; // 8024D10C
  c->r[1]=c->r[1]+0x00000010u; // 8024D110
  return; // 8024D114
}

// __OSPromoteThread
void f_8024D120(Ctx* __restrict c) {
  trace_call(0x8024D120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D120
  c->r[0]=c->lr; // 8024D124
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024D128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024D12C
  c->r[31]=c->r[4]|c->r[4]; // 8024D130
L_8024D134:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8024D134
  cmps(c,0,(int32_t)c->r[0],0); // 8024D138
  if (crb(c,1)) { goto L_8024D15C; } // 8024D13C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024D140
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8024D144
  if (!crb(c,1)) { goto L_8024D15C; } // 8024D148
  c->r[4]=c->r[31]|c->r[31]; // 8024D14C
  c->lr=0x8024D154u; f_8024CF70(c); // 8024D150
  cmps(c,0,(int32_t)c->r[3],0); // 8024D154
  if (!crb(c,2)) { IRQCHK(c); goto L_8024D134; } // 8024D158
L_8024D15C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D15C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D160
  c->lr=c->r[0]; // 8024D164
  c->r[1]=c->r[1]+0x00000010u; // 8024D168
  return; // 8024D16C
}

// SelectThread
void f_8024D170(Ctx* __restrict c) {
  trace_call(0x8024D170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D170
  c->r[0]=c->lr; // 8024D174
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024D178
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024D17C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024D180
  c->r[30]=c->r[3]|c->r[3]; // 8024D184
  c->r[0]=R32(c->r[13]+0xFFFF9E48u); // 8024D188
  cmps(c,0,(int32_t)c->r[0],0); // 8024D18C
  if (!crb(c,1)) { goto L_8024D19C; } // 8024D190
  c->r[3]=0u+0x00000000u; // 8024D194
  goto L_8024D384; // 8024D198
L_8024D19C:;
  c->lr=0x8024D1A0u; f_802456C0(c); // 8024D19C
  c->r[4]=0u+0x80000000u; // 8024D1A0
  c->r[5]=R32(c->r[4]+0x000000E4u); // 8024D1A4
  cmpu(c,0,c->r[3],c->r[5]); // 8024D1A8
  if (crb(c,2)) { goto L_8024D1B8; } // 8024D1AC
  c->r[3]=0u+0x00000000u; // 8024D1B0
  goto L_8024D384; // 8024D1B4
L_8024D1B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024D1B8
  if (crb(c,2)) { goto L_8024D280; } // 8024D1BC
  c->r[0]=R16(c->r[5]+0x000002C8u); // 8024D1C0
  cmpu(c,0,c->r[0],0x00000002u); // 8024D1C4
  if (!crb(c,2)) { goto L_8024D25C; } // 8024D1C8
  cmps(c,0,(int32_t)c->r[30],0); // 8024D1CC
  if (!crb(c,2)) { goto L_8024D1F0; } // 8024D1D0
  c->r[3]=R32(c->r[13]+0xFFFF9E50u); // 8024D1D4
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8024D1D8
  c->r[3]=cntlz(c->r[3]); // 8024D1DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8024D1E0
  if (crb(c,1)) { goto L_8024D1F0; } // 8024D1E4
  c->r[3]=0u+0x00000000u; // 8024D1E8
  goto L_8024D384; // 8024D1EC
L_8024D1F0:;
  c->r[0]=0u+0x00000001u; // 8024D1F0
  W16(c->r[5]+0x000002C8u,c->r[0]); // 8024D1F4
  c->r[3]=0u+0x804A0000u; // 8024D1F8
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8024D1FC
  c->r[3]=c->r[3]+0xFFFFCB70u; // 8024D200
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024D204
  c->r[3]=c->r[3]+c->r[0]; // 8024D208
  W32(c->r[5]+0x000002DCu,c->r[3]); // 8024D20C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024D210
  cmps(c,0,(int32_t)c->r[4],0); // 8024D214
  if (!crb(c,2)) { goto L_8024D224; } // 8024D218
  W32(c->r[3]+0x00000000u,c->r[5]); // 8024D21C
  goto L_8024D228; // 8024D220
L_8024D224:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 8024D224
L_8024D228:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8024D228
  c->r[0]=0u+0x00000000u; // 8024D22C
  c->r[3]=0u+0x00000001u; // 8024D230
  W32(c->r[5]+0x000002E0u,c->r[0]); // 8024D234
  c->r[4]=R32(c->r[5]+0x000002DCu); // 8024D238
  W32(c->r[4]+0x00000004u,c->r[5]); // 8024D23C
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8024D240
  c->r[4]=R32(c->r[13]+0xFFFF9E50u); // 8024D244
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8024D248
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8024D24C
  c->r[0]=c->r[4]|c->r[0]; // 8024D250
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024D254
  W32(c->r[13]+0xFFFF9E4Cu,c->r[3]); // 8024D258
L_8024D25C:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 8024D25C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8024D260
  if (!crb(c,2)) { goto L_8024D280; } // 8024D264
  c->r[3]=c->r[5]|c->r[5]; // 8024D268
  c->lr=0x8024D270u; f_802456D0(c); // 8024D26C
  cmps(c,0,(int32_t)c->r[3],0); // 8024D270
  if (crb(c,2)) { goto L_8024D280; } // 8024D274
  c->r[3]=0u+0x00000000u; // 8024D278
  goto L_8024D384; // 8024D27C
L_8024D280:;
  c->r[0]=R32(c->r[13]+0xFFFF9E50u); // 8024D280
  cmps(c,0,(int32_t)c->r[0],0); // 8024D284
  if (!crb(c,2)) { goto L_8024D2E8; } // 8024D288
  c->r[12]=R32(c->r[13]+0xFFFF9158u); // 8024D28C
  c->r[31]=0u+0x80000000u; // 8024D290
  c->r[3]=R32(c->r[31]+0x000000E4u); // 8024D294
  c->r[4]=0u+0x00000000u; // 8024D298
  c->ctr=c->r[12]; // 8024D29C
  if (true) { c->lr=0x8024D2A4u; dispatch(c,c->ctr); } // 8024D2A0
  c->r[0]=0u+0x00000000u; // 8024D2A4
  c->r[3]=0u+0x804A0000u; // 8024D2A8
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8024D2AC
  c->r[3]=c->r[3]+0xFFFFCC70u; // 8024D2B0
  c->lr=0x8024D2B8u; f_80245660(c); // 8024D2B4
L_8024D2B8:;
  c->lr=0x8024D2BCu; f_802494E0(c); // 8024D2B8
  c->r[0]=c->r[0]|0x00000000u; // 8024D2BC
L_8024D2C0:;
  c->r[0]=R32(c->r[13]+0xFFFF9E50u); // 8024D2C0
  cmps(c,0,(int32_t)c->r[0],0); // 8024D2C4
  if (crb(c,2)) { IDLEWAIT(c); goto L_8024D2C0; } // 8024D2C8
  c->lr=0x8024D2D0u; f_802494C0(c); // 8024D2CC
  c->r[0]=R32(c->r[13]+0xFFFF9E50u); // 8024D2D0
  cmps(c,0,(int32_t)c->r[0],0); // 8024D2D4
  if (crb(c,2)) { IRQCHK(c); goto L_8024D2B8; } // 8024D2D8
  c->r[3]=0u+0x804A0000u; // 8024D2DC
  c->r[3]=c->r[3]+0xFFFFCC70u; // 8024D2E0
  c->lr=0x8024D2E8u; f_802458A0(c); // 8024D2E4
L_8024D2E8:;
  c->r[4]=0u+0x00000000u; // 8024D2E8
  W32(c->r[13]+0xFFFF9E4Cu,c->r[4]); // 8024D2EC
  c->r[0]=R32(c->r[13]+0xFFFF9E50u); // 8024D2F0
  c->r[3]=0u+0x804A0000u; // 8024D2F4
  c->r[3]=c->r[3]+0xFFFFCB70u; // 8024D2F8
  c->r[5]=cntlz(c->r[0]); // 8024D2FC
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8024D300
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 8024D304
  c->r[6]=R32(c->r[30]+0x000002E0u); // 8024D308
  cmps(c,0,(int32_t)c->r[6],0); // 8024D30C
  if (!crb(c,2)) { goto L_8024D31C; } // 8024D310
  W32(c->r[3]+0x00000004u,c->r[4]); // 8024D314
  goto L_8024D320; // 8024D318
L_8024D31C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 8024D31C
L_8024D320:;
  cmps(c,0,(int32_t)c->r[6],0); // 8024D320
  W32(c->r[3]+0x00000000u,c->r[6]); // 8024D324
  if (!crb(c,2)) { goto L_8024D344; } // 8024D328
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 8024D32C
  c->r[3]=0u+0x00000001u; // 8024D330
  c->r[4]=R32(c->r[13]+0xFFFF9E50u); // 8024D334
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8024D338
  c->r[0]=c->r[4]&~c->r[0]; // 8024D33C
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024D340
L_8024D344:;
  c->r[0]=0u+0x00000000u; // 8024D344
  W32(c->r[30]+0x000002DCu,c->r[0]); // 8024D348
  c->r[0]=0u+0x00000002u; // 8024D34C
  c->r[31]=0u+0x80000000u; // 8024D350
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8024D354
  c->r[4]=c->r[30]|c->r[30]; // 8024D358
  c->r[12]=R32(c->r[13]+0xFFFF9158u); // 8024D35C
  c->r[3]=R32(c->r[31]+0x000000E4u); // 8024D360
  c->ctr=c->r[12]; // 8024D364
  if (true) { c->lr=0x8024D36Cu; dispatch(c,c->ctr); } // 8024D368
  W32(c->r[31]+0x000000E4u,c->r[30]); // 8024D36C
  c->r[3]=c->r[30]|c->r[30]; // 8024D370
  c->lr=0x8024D378u; f_80245660(c); // 8024D374
  c->r[3]=c->r[30]|c->r[30]; // 8024D378
  c->lr=0x8024D380u; f_80245750(c); // 8024D37C
  c->r[3]=c->r[30]|c->r[30]; // 8024D380
L_8024D384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D388
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024D38C
  c->lr=c->r[0]; // 8024D390
  c->r[1]=c->r[1]+0x00000010u; // 8024D394
  return; // 8024D398
}

// __OSReschedule
void f_8024D3A0(Ctx* __restrict c) {
  trace_call(0x8024D3A0u);
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024D3A0
  cmps(c,0,(int32_t)c->r[0],0); // 8024D3A4
  if (crb(c,2)) return; // 8024D3A8
  c->r[3]=0u+0x00000000u; // 8024D3AC
  f_8024D170(c); return; // 8024D3B0
}

// fn_8024D3B4
void f_8024D3B4(Ctx* __restrict c) {
  trace_call(0x8024D3B4u);
  return; // 8024D3B4
}

// OSYieldThread
void f_8024D3C0(Ctx* __restrict c) {
  trace_call(0x8024D3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D3C0
  c->r[0]=c->lr; // 8024D3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024D3C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024D3CC
  c->lr=0x8024D3D4u; f_802494C0(c); // 8024D3D0
  c->r[31]=c->r[3]|c->r[3]; // 8024D3D4
  c->r[3]=0u+0x00000001u; // 8024D3D8
  c->lr=0x8024D3E0u; f_8024D170(c); // 8024D3DC
  c->r[3]=c->r[31]|c->r[31]; // 8024D3E0
  c->lr=0x8024D3E8u; f_80249500(c); // 8024D3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D3E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D3EC
  c->lr=c->r[0]; // 8024D3F0
  c->r[1]=c->r[1]+0x00000010u; // 8024D3F4
  return; // 8024D3F8
}

void f_8024D400_orig(Ctx* __restrict c);
// OSCreateThread
void f_8024D400_orig(Ctx* __restrict c) {
  trace_call(0x8024D400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D400
  c->r[0]=c->lr; // 8024D404
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024D408
  c->r[11]=c->r[1]+0x00000020u; // 8024D40C
  c->lr=0x8024D414u; f_800C2E48(c); // 8024D410
  cmps(c,0,(int32_t)c->r[8],0); // 8024D414
  c->r[31]=c->r[3]|c->r[3]; // 8024D418
  c->r[26]=c->r[5]|c->r[5]; // 8024D41C
  c->r[27]=c->r[6]|c->r[6]; // 8024D420
  c->r[28]=c->r[7]|c->r[7]; // 8024D424
  if (crb(c,0)) { goto L_8024D434; } // 8024D428
  cmps(c,0,(int32_t)c->r[8],31); // 8024D42C
  if (!crb(c,1)) { goto L_8024D43C; } // 8024D430
L_8024D434:;
  c->r[3]=0u+0x00000000u; // 8024D434
  goto L_8024D654; // 8024D438
L_8024D43C:;
  c->r[7]=0u+0x00000001u; // 8024D43C
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 8024D440
  c->r[30]=0u+0x00000000u; // 8024D444
  c->r[29]=0u+0xFFFFFFFFu; // 8024D448
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 8024D44C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 8024D450
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 8024D454
  W16(c->r[3]+0x000002CAu,c->r[0]); // 8024D458
  W32(c->r[3]+0x000002D4u,c->r[8]); // 8024D45C
  W32(c->r[3]+0x000002D0u,c->r[8]); // 8024D460
  W32(c->r[3]+0x000002CCu,c->r[7]); // 8024D464
  W32(c->r[3]+0x000002D8u,c->r[29]); // 8024D468
  W32(c->r[3]+0x000002F0u,c->r[30]); // 8024D46C
  W32(c->r[3]+0x000002ECu,c->r[30]); // 8024D470
  W32(c->r[3]+0x000002E8u,c->r[30]); // 8024D474
  W32(c->r[3]+0x000002F8u,c->r[30]); // 8024D478
  W32(c->r[3]+0x000002F4u,c->r[30]); // 8024D47C
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 8024D480
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 8024D484
  c->lr=0x8024D48Cu; f_802458D0(c); // 8024D488
  c->r[3]=0u+0x80250000u; // 8024D48C
  c->r[4]=c->r[27]-c->r[28]; // 8024D490
  c->r[3]=c->r[3]+0xFFFFD670u; // 8024D494
  W32(c->r[31]+0x00000084u,c->r[3]); // 8024D498
  c->r[3]=0u+0xDEAE0000u; // 8024D49C
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 8024D4A0
  c->r[0]=c->r[3]+0xFFFFBABEu; // 8024D4A4
  W32(c->r[31]+0x00000304u,c->r[27]); // 8024D4A8
  W32(c->r[31]+0x00000308u,c->r[4]); // 8024D4AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8024D4B0
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 8024D4B4
  W32(c->r[31]+0x00000310u,c->r[30]); // 8024D4B8
  W32(c->r[31]+0x00000314u,c->r[30]); // 8024D4BC
  c->lr=0x8024D4C4u; f_802494C0(c); // 8024D4C0
  c->r[4]=0u+0x804A0000u; // 8024D4C4
  c->r[4]=c->r[4]+0xFFFFC4B0u; // 8024D4C8
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024D4CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024D4D0
  if (crb(c,2)) { goto L_8024D61C; } // 8024D4D4
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 8024D4D8
  c->r[0]=0u+0x00000002u; // 8024D4DC
  c->r[4]=R16(c->r[31]+0x000001A2u); // 8024D4E0
  c->r[6]=c->r[31]+0x00000090u; // 8024D4E4
  c->r[5]=c->r[5]|0x00000900u; // 8024D4E8
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 8024D4EC
  c->r[4]=c->r[4]|0x00000001u; // 8024D4F0
  W16(c->r[31]+0x000001A2u,c->r[4]); // 8024D4F4
  c->r[5]=c->r[31]+0x000001C8u; // 8024D4F8
  c->r[4]=R32(c->r[13]+0xFFFF9130u); // 8024D4FC
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 8024D500
  c->r[4]=c->r[4]|0x00000004u; // 8024D504
  W32(c->r[31]+0x00000194u,c->r[4]); // 8024D508
  c->ctr=c->r[0]; // 8024D50C
L_8024D510:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 8024D510
  W32(c->r[6]+0x00000000u,c->r[29]); // 8024D514
  W32(c->r[5]+0x00000004u,c->r[29]); // 8024D518
  W32(c->r[5]+0x00000000u,c->r[29]); // 8024D51C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 8024D520
  W32(c->r[6]+0x00000008u,c->r[29]); // 8024D524
  W32(c->r[5]+0x0000000Cu,c->r[29]); // 8024D528
  W32(c->r[5]+0x00000008u,c->r[29]); // 8024D52C
  W32(c->r[6]+0x00000014u,c->r[29]); // 8024D530
  W32(c->r[6]+0x00000010u,c->r[29]); // 8024D534
  W32(c->r[5]+0x00000014u,c->r[29]); // 8024D538
  W32(c->r[5]+0x00000010u,c->r[29]); // 8024D53C
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 8024D540
  W32(c->r[6]+0x00000018u,c->r[29]); // 8024D544
  W32(c->r[5]+0x0000001Cu,c->r[29]); // 8024D548
  W32(c->r[5]+0x00000018u,c->r[29]); // 8024D54C
  W32(c->r[6]+0x00000024u,c->r[29]); // 8024D550
  W32(c->r[6]+0x00000020u,c->r[29]); // 8024D554
  W32(c->r[5]+0x00000024u,c->r[29]); // 8024D558
  W32(c->r[5]+0x00000020u,c->r[29]); // 8024D55C
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 8024D560
  W32(c->r[6]+0x00000028u,c->r[29]); // 8024D564
  W32(c->r[5]+0x0000002Cu,c->r[29]); // 8024D568
  W32(c->r[5]+0x00000028u,c->r[29]); // 8024D56C
  W32(c->r[6]+0x00000034u,c->r[29]); // 8024D570
  W32(c->r[6]+0x00000030u,c->r[29]); // 8024D574
  W32(c->r[5]+0x00000034u,c->r[29]); // 8024D578
  W32(c->r[5]+0x00000030u,c->r[29]); // 8024D57C
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 8024D580
  W32(c->r[6]+0x00000038u,c->r[29]); // 8024D584
  W32(c->r[5]+0x0000003Cu,c->r[29]); // 8024D588
  W32(c->r[5]+0x00000038u,c->r[29]); // 8024D58C
  W32(c->r[6]+0x00000044u,c->r[29]); // 8024D590
  W32(c->r[6]+0x00000040u,c->r[29]); // 8024D594
  W32(c->r[5]+0x00000044u,c->r[29]); // 8024D598
  W32(c->r[5]+0x00000040u,c->r[29]); // 8024D59C
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 8024D5A0
  W32(c->r[6]+0x00000048u,c->r[29]); // 8024D5A4
  W32(c->r[5]+0x0000004Cu,c->r[29]); // 8024D5A8
  W32(c->r[5]+0x00000048u,c->r[29]); // 8024D5AC
  W32(c->r[6]+0x00000054u,c->r[29]); // 8024D5B0
  W32(c->r[6]+0x00000050u,c->r[29]); // 8024D5B4
  W32(c->r[5]+0x00000054u,c->r[29]); // 8024D5B8
  W32(c->r[5]+0x00000050u,c->r[29]); // 8024D5BC
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 8024D5C0
  W32(c->r[6]+0x00000058u,c->r[29]); // 8024D5C4
  W32(c->r[5]+0x0000005Cu,c->r[29]); // 8024D5C8
  W32(c->r[5]+0x00000058u,c->r[29]); // 8024D5CC
  W32(c->r[6]+0x00000064u,c->r[29]); // 8024D5D0
  W32(c->r[6]+0x00000060u,c->r[29]); // 8024D5D4
  W32(c->r[5]+0x00000064u,c->r[29]); // 8024D5D8
  W32(c->r[5]+0x00000060u,c->r[29]); // 8024D5DC
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 8024D5E0
  W32(c->r[6]+0x00000068u,c->r[29]); // 8024D5E4
  W32(c->r[5]+0x0000006Cu,c->r[29]); // 8024D5E8
  W32(c->r[5]+0x00000068u,c->r[29]); // 8024D5EC
  W32(c->r[6]+0x00000074u,c->r[29]); // 8024D5F0
  W32(c->r[6]+0x00000070u,c->r[29]); // 8024D5F4
  W32(c->r[5]+0x00000074u,c->r[29]); // 8024D5F8
  W32(c->r[5]+0x00000070u,c->r[29]); // 8024D5FC
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 8024D600
  W32(c->r[6]+0x00000078u,c->r[29]); // 8024D604
  c->r[6]=c->r[6]+0x00000080u; // 8024D608
  W32(c->r[5]+0x0000007Cu,c->r[29]); // 8024D60C
  W32(c->r[5]+0x00000078u,c->r[29]); // 8024D610
  c->r[5]=c->r[5]+0x00000080u; // 8024D614
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024D510; } // 8024D618
L_8024D61C:;
  c->r[4]=0u+0x80000000u; // 8024D61C
  c->r[5]=R32(c->r[4]+0x000000E0u); // 8024D620
  cmps(c,0,(int32_t)c->r[5],0); // 8024D624
  if (!crb(c,2)) { goto L_8024D634; } // 8024D628
  W32(c->r[4]+0x000000DCu,c->r[31]); // 8024D62C
  goto L_8024D638; // 8024D630
L_8024D634:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 8024D634
L_8024D638:;
  c->r[0]=0u+0x00000000u; // 8024D638
  W32(c->r[31]+0x00000300u,c->r[5]); // 8024D63C
  c->r[4]=0u+0x80000000u; // 8024D640
  W32(c->r[31]+0x000002FCu,c->r[0]); // 8024D644
  W32(c->r[4]+0x000000E0u,c->r[31]); // 8024D648
  c->lr=0x8024D650u; f_80249500(c); // 8024D64C
  c->r[3]=0u+0x00000001u; // 8024D650
L_8024D654:;
  c->r[11]=c->r[1]+0x00000020u; // 8024D654
  c->lr=0x8024D65Cu; f_800C2E94(c); // 8024D658
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024D65C
  c->lr=c->r[0]; // 8024D660
  c->r[1]=c->r[1]+0x00000020u; // 8024D664
  return; // 8024D668
}
void hle_wrap_OSCreateThread(Ctx*, GuestFn);
void f_8024D400(Ctx* __restrict c) { hle_wrap_OSCreateThread(c, f_8024D400_orig); }

void f_8024D670_orig(Ctx* __restrict c);
// OSExitThread
void f_8024D670_orig(Ctx* __restrict c) {
  trace_call(0x8024D670u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D670
  c->r[0]=c->lr; // 8024D674
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024D678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024D67C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024D680
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024D684
  W32(c->r[1]+0x00000010u,c->r[28]); // 8024D688
  c->r[28]=c->r[3]|c->r[3]; // 8024D68C
  c->lr=0x8024D694u; f_802494C0(c); // 8024D690
  c->r[31]=0u+0x80000000u; // 8024D694
  c->r[29]=c->r[3]|c->r[3]; // 8024D698
  c->r[30]=R32(c->r[31]+0x000000E4u); // 8024D69C
  c->r[3]=c->r[30]|c->r[30]; // 8024D6A0
  c->lr=0x8024D6A8u; f_802458A0(c); // 8024D6A4
  c->r[0]=R16(c->r[30]+0x000002CAu); // 8024D6A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024D6AC
  if (crb(c,2)) { goto L_8024D6F4; } // 8024D6B0
  c->r[4]=R32(c->r[30]+0x000002FCu); // 8024D6B4
  c->r[3]=R32(c->r[30]+0x00000300u); // 8024D6B8
  cmps(c,0,(int32_t)c->r[4],0); // 8024D6BC
  if (!crb(c,2)) { goto L_8024D6CC; } // 8024D6C0
  W32(c->r[31]+0x000000E0u,c->r[3]); // 8024D6C4
  goto L_8024D6D0; // 8024D6C8
L_8024D6CC:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 8024D6CC
L_8024D6D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024D6D0
  if (!crb(c,2)) { goto L_8024D6E4; } // 8024D6D4
  c->r[3]=0u+0x80000000u; // 8024D6D8
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8024D6DC
  goto L_8024D6E8; // 8024D6E0
L_8024D6E4:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 8024D6E4
L_8024D6E8:;
  c->r[0]=0u+0x00000000u; // 8024D6E8
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8024D6EC
  goto L_8024D700; // 8024D6F0
L_8024D6F4:;
  c->r[0]=0u+0x00000008u; // 8024D6F4
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8024D6F8
  W32(c->r[30]+0x000002D8u,c->r[28]); // 8024D6FC
L_8024D700:;
  c->r[3]=c->r[30]|c->r[30]; // 8024D700
  c->lr=0x8024D708u; f_8024B290(c); // 8024D704
  c->r[3]=c->r[30]+0x000002E8u; // 8024D708
  c->lr=0x8024D710u; f_8024DFB0(c); // 8024D70C
  c->r[0]=0u+0x00000001u; // 8024D710
  W32(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 8024D714
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024D718
  cmps(c,0,(int32_t)c->r[0],0); // 8024D71C
  if (crb(c,2)) { goto L_8024D72C; } // 8024D720
  c->r[3]=0u+0x00000000u; // 8024D724
  c->lr=0x8024D72Cu; f_8024D170(c); // 8024D728
L_8024D72C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024D72C
  c->lr=0x8024D734u; f_80249500(c); // 8024D730
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024D734
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024D738
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024D73C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024D740
  c->r[28]=R32(c->r[1]+0x00000010u); // 8024D744
  c->lr=c->r[0]; // 8024D748
  c->r[1]=c->r[1]+0x00000020u; // 8024D74C
  return; // 8024D750
}
void hle_wrap_OSExitThread(Ctx*, GuestFn);
void f_8024D670(Ctx* __restrict c) { hle_wrap_OSExitThread(c, f_8024D670_orig); }

// OSCancelThread
void f_8024D760(Ctx* __restrict c) {
  trace_call(0x8024D760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D760
  c->r[0]=c->lr; // 8024D764
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024D768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024D76C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024D770
  c->r[30]=c->r[3]|c->r[3]; // 8024D774
  c->lr=0x8024D77Cu; f_802494C0(c); // 8024D778
  c->r[31]=c->r[3]|c->r[3]; // 8024D77C
  c->r[3]=c->r[30]|c->r[30]; // 8024D780
  c->lr=0x8024D788u; f_80244470(c); // 8024D784
  c->r[0]=R16(c->r[30]+0x000002C8u); // 8024D788
  cmps(c,0,(int32_t)c->r[0],1); // 8024D78C
  if (crb(c,2)) { goto L_8024D7A8; } // 8024D790
  cmps(c,0,(int32_t)c->r[0],2); // 8024D794
  if (crb(c,2)) { goto L_8024D7C0; } // 8024D798
  cmps(c,0,(int32_t)c->r[0],4); // 8024D79C
  if (crb(c,2)) { goto L_8024D7CC; } // 8024D7A0
  goto L_8024D884; // 8024D7A4
L_8024D7A8:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 8024D7A8
  cmps(c,0,(int32_t)c->r[0],0); // 8024D7AC
  if (crb(c,1)) { goto L_8024D890; } // 8024D7B0
  c->r[3]=c->r[30]|c->r[30]; // 8024D7B4
  c->lr=0x8024D7BCu; f_8024CEC0(c); // 8024D7B8
  goto L_8024D890; // 8024D7BC
L_8024D7C0:;
  c->r[0]=0u+0x00000001u; // 8024D7C0
  W32(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 8024D7C4
  goto L_8024D890; // 8024D7C8
L_8024D7CC:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 8024D7CC
  c->r[5]=R32(c->r[30]+0x000002E4u); // 8024D7D0
  cmps(c,0,(int32_t)c->r[4],0); // 8024D7D4
  if (!crb(c,2)) { goto L_8024D7E8; } // 8024D7D8
  c->r[3]=R32(c->r[30]+0x000002DCu); // 8024D7DC
  W32(c->r[3]+0x00000004u,c->r[5]); // 8024D7E0
  goto L_8024D7EC; // 8024D7E4
L_8024D7E8:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8024D7E8
L_8024D7EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024D7EC
  if (!crb(c,2)) { goto L_8024D800; } // 8024D7F0
  c->r[3]=R32(c->r[30]+0x000002DCu); // 8024D7F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024D7F8
  goto L_8024D804; // 8024D7FC
L_8024D800:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8024D800
L_8024D804:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 8024D804
  c->r[3]=0u+0x00000000u; // 8024D808
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8024D80C
  cmps(c,0,(int32_t)c->r[0],0); // 8024D810
  if (crb(c,1)) { goto L_8024D890; } // 8024D814
  c->r[3]=R32(c->r[30]+0x000002F0u); // 8024D818
  cmps(c,0,(int32_t)c->r[3],0); // 8024D81C
  if (crb(c,2)) { goto L_8024D890; } // 8024D820
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024D824
L_8024D828:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8024D828
  cmps(c,0,(int32_t)c->r[0],0); // 8024D82C
  if (crb(c,1)) { goto L_8024D890; } // 8024D830
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8024D834
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8024D838
  goto L_8024D860; // 8024D83C
L_8024D840:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8024D840
  cmps(c,0,(int32_t)c->r[6],0); // 8024D844
  if (crb(c,2)) { goto L_8024D85C; } // 8024D848
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8024D84C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024D850
  if (!crb(c,0)) { goto L_8024D85C; } // 8024D854
  c->r[4]=c->r[0]|c->r[0]; // 8024D858
L_8024D85C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8024D85C
L_8024D860:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024D860
  if (!crb(c,2)) { IRQCHK(c); goto L_8024D840; } // 8024D864
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024D868
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024D86C
  if (crb(c,2)) { goto L_8024D890; } // 8024D870
  c->lr=0x8024D878u; f_8024CF70(c); // 8024D874
  cmps(c,0,(int32_t)c->r[3],0); // 8024D878
  if (!crb(c,2)) { IRQCHK(c); goto L_8024D828; } // 8024D87C
  goto L_8024D890; // 8024D880
L_8024D884:;
  c->r[3]=c->r[31]|c->r[31]; // 8024D884
  c->lr=0x8024D88Cu; f_80249500(c); // 8024D888
  goto L_8024D91C; // 8024D88C
L_8024D890:;
  c->r[3]=c->r[30]|c->r[30]; // 8024D890
  c->lr=0x8024D898u; f_802458A0(c); // 8024D894
  c->r[0]=R16(c->r[30]+0x000002CAu); // 8024D898
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024D89C
  if (crb(c,2)) { goto L_8024D8E8; } // 8024D8A0
  c->r[4]=R32(c->r[30]+0x000002FCu); // 8024D8A4
  c->r[5]=R32(c->r[30]+0x00000300u); // 8024D8A8
  cmps(c,0,(int32_t)c->r[4],0); // 8024D8AC
  if (!crb(c,2)) { goto L_8024D8C0; } // 8024D8B0
  c->r[3]=0u+0x80000000u; // 8024D8B4
  W32(c->r[3]+0x000000E0u,c->r[5]); // 8024D8B8
  goto L_8024D8C4; // 8024D8BC
L_8024D8C0:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 8024D8C0
L_8024D8C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024D8C4
  if (!crb(c,2)) { goto L_8024D8D8; } // 8024D8C8
  c->r[3]=0u+0x80000000u; // 8024D8CC
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8024D8D0
  goto L_8024D8DC; // 8024D8D4
L_8024D8D8:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 8024D8D8
L_8024D8DC:;
  c->r[0]=0u+0x00000000u; // 8024D8DC
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8024D8E0
  goto L_8024D8F0; // 8024D8E4
L_8024D8E8:;
  c->r[0]=0u+0x00000008u; // 8024D8E8
  W16(c->r[30]+0x000002C8u,c->r[0]); // 8024D8EC
L_8024D8F0:;
  c->r[3]=c->r[30]|c->r[30]; // 8024D8F0
  c->lr=0x8024D8F8u; f_8024B290(c); // 8024D8F4
  c->r[3]=c->r[30]+0x000002E8u; // 8024D8F8
  c->lr=0x8024D900u; f_8024DFB0(c); // 8024D8FC
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024D900
  cmps(c,0,(int32_t)c->r[0],0); // 8024D904
  if (crb(c,2)) { goto L_8024D914; } // 8024D908
  c->r[3]=0u+0x00000000u; // 8024D90C
  c->lr=0x8024D914u; f_8024D170(c); // 8024D910
L_8024D914:;
  c->r[3]=c->r[31]|c->r[31]; // 8024D914
  c->lr=0x8024D91Cu; f_80249500(c); // 8024D918
L_8024D91C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024D91C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024D920
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024D924
  c->lr=c->r[0]; // 8024D928
  c->r[1]=c->r[1]+0x00000010u; // 8024D92C
  return; // 8024D930
}

// OSJoinThread
void f_8024D940(Ctx* __restrict c) {
  trace_call(0x8024D940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D940
  c->r[0]=c->lr; // 8024D944
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024D948
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024D94C
  c->r[31]=c->r[3]|c->r[3]; // 8024D950
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024D954
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024D958
  c->r[29]=c->r[4]|c->r[4]; // 8024D95C
  c->lr=0x8024D964u; f_802494C0(c); // 8024D960
  c->r[0]=R16(c->r[31]+0x000002CAu); // 8024D964
  c->r[30]=c->r[3]|c->r[3]; // 8024D968
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024D96C
  if (!crb(c,2)) { goto L_8024D9F0; } // 8024D970
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8024D974
  cmpu(c,0,c->r[0],0x00000008u); // 8024D978
  if (crb(c,2)) { goto L_8024D9F0; } // 8024D97C
  c->r[0]=R32(c->r[31]+0x000002E8u); // 8024D980
  cmps(c,0,(int32_t)c->r[0],0); // 8024D984
  if (!crb(c,2)) { goto L_8024D9F0; } // 8024D988
  c->r[3]=c->r[31]+0x000002E8u; // 8024D98C
  c->lr=0x8024D994u; f_8024DEC0(c); // 8024D990
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8024D994
  cmps(c,0,(int32_t)c->r[0],0); // 8024D998
  if (!crb(c,2)) { goto L_8024D9A8; } // 8024D99C
  c->r[0]=0u+0x00000000u; // 8024D9A0
  goto L_8024D9D8; // 8024D9A4
L_8024D9A8:;
  c->r[3]=0u+0x80000000u; // 8024D9A8
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8024D9AC
  goto L_8024D9CC; // 8024D9B0
  c->r[0]=c->r[0]|0x00000000u; // 8024D9B4
L_8024D9B8:;
  cmpu(c,0,c->r[31],c->r[3]); // 8024D9B8
  if (!crb(c,2)) { goto L_8024D9C8; } // 8024D9BC
  c->r[0]=0u+0x00000001u; // 8024D9C0
  goto L_8024D9D8; // 8024D9C4
L_8024D9C8:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 8024D9C8
L_8024D9CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024D9CC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024D9B8; } // 8024D9D0
  c->r[0]=0u+0x00000000u; // 8024D9D4
L_8024D9D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024D9D8
  if (!crb(c,2)) { goto L_8024D9F0; } // 8024D9DC
  c->r[3]=c->r[30]|c->r[30]; // 8024D9E0
  c->lr=0x8024D9E8u; f_80249500(c); // 8024D9E4
  c->r[3]=0u+0x00000000u; // 8024D9E8
  goto L_8024DA68; // 8024D9EC
L_8024D9F0:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 8024D9F0
  cmpu(c,0,c->r[0],0x00000008u); // 8024D9F4
  if (!crb(c,2)) { goto L_8024DA5C; } // 8024D9F8
  cmps(c,0,(int32_t)c->r[29],0); // 8024D9FC
  if (crb(c,2)) { goto L_8024DA0C; } // 8024DA00
  c->r[0]=R32(c->r[31]+0x000002D8u); // 8024DA04
  W32(c->r[29]+0x00000000u,c->r[0]); // 8024DA08
L_8024DA0C:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 8024DA0C
  c->r[5]=R32(c->r[31]+0x00000300u); // 8024DA10
  cmps(c,0,(int32_t)c->r[4],0); // 8024DA14
  if (!crb(c,2)) { goto L_8024DA28; } // 8024DA18
  c->r[3]=0u+0x80000000u; // 8024DA1C
  W32(c->r[3]+0x000000E0u,c->r[5]); // 8024DA20
  goto L_8024DA2C; // 8024DA24
L_8024DA28:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 8024DA28
L_8024DA2C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DA2C
  if (!crb(c,2)) { goto L_8024DA40; } // 8024DA30
  c->r[3]=0u+0x80000000u; // 8024DA34
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8024DA38
  goto L_8024DA44; // 8024DA3C
L_8024DA40:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 8024DA40
L_8024DA44:;
  c->r[0]=0u+0x00000000u; // 8024DA44
  W16(c->r[31]+0x000002C8u,c->r[0]); // 8024DA48
  c->r[3]=c->r[30]|c->r[30]; // 8024DA4C
  c->lr=0x8024DA54u; f_80249500(c); // 8024DA50
  c->r[3]=0u+0x00000001u; // 8024DA54
  goto L_8024DA68; // 8024DA58
L_8024DA5C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024DA5C
  c->lr=0x8024DA64u; f_80249500(c); // 8024DA60
  c->r[3]=0u+0x00000000u; // 8024DA64
L_8024DA68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024DA68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024DA6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024DA70
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024DA74
  c->lr=c->r[0]; // 8024DA78
  c->r[1]=c->r[1]+0x00000020u; // 8024DA7C
  return; // 8024DA80
}

// OSResumeThread
void f_8024DA90(Ctx* __restrict c) {
  trace_call(0x8024DA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DA90
  c->r[0]=c->lr; // 8024DA94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024DA98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024DA9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024DAA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024DAA4
  c->r[29]=c->r[3]|c->r[3]; // 8024DAA8
  c->lr=0x8024DAB0u; f_802494C0(c); // 8024DAAC
  c->r[30]=R32(c->r[29]+0x000002CCu); // 8024DAB0
  c->r[31]=c->r[3]|c->r[3]; // 8024DAB4
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8024DAB8
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8024DABC
  if (!crb(c,0)) { goto L_8024DAD0; } // 8024DAC0
  c->r[0]=0u+0x00000000u; // 8024DAC4
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8024DAC8
  goto L_8024DD04; // 8024DACC
L_8024DAD0:;
  if (!crb(c,2)) { goto L_8024DD04; } // 8024DAD0
  c->r[0]=R16(c->r[29]+0x000002C8u); // 8024DAD4
  cmps(c,0,(int32_t)c->r[0],1); // 8024DAD8
  if (crb(c,2)) { goto L_8024DAEC; } // 8024DADC
  cmps(c,0,(int32_t)c->r[0],4); // 8024DAE0
  if (crb(c,2)) { goto L_8024DB88; } // 8024DAE4
  goto L_8024DCF0; // 8024DAE8
L_8024DAEC:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 8024DAEC
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8024DAF0
  goto L_8024DB18; // 8024DAF4
L_8024DAF8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024DAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8024DAFC
  if (crb(c,2)) { goto L_8024DB14; } // 8024DB00
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024DB04
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024DB08
  if (!crb(c,0)) { goto L_8024DB14; } // 8024DB0C
  c->r[5]=c->r[0]|c->r[0]; // 8024DB10
L_8024DB14:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8024DB14
L_8024DB18:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024DB18
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DAF8; } // 8024DB1C
  c->r[3]=0u+0x804A0000u; // 8024DB20
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8024DB24
  c->r[3]=c->r[3]+0xFFFFCB70u; // 8024DB28
  W32(c->r[29]+0x000002D0u,c->r[5]); // 8024DB2C
  c->r[3]=c->r[3]+c->r[0]; // 8024DB30
  W32(c->r[29]+0x000002DCu,c->r[3]); // 8024DB34
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024DB38
  cmps(c,0,(int32_t)c->r[4],0); // 8024DB3C
  if (!crb(c,2)) { goto L_8024DB4C; } // 8024DB40
  W32(c->r[3]+0x00000000u,c->r[29]); // 8024DB44
  goto L_8024DB50; // 8024DB48
L_8024DB4C:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 8024DB4C
L_8024DB50:;
  c->r[0]=0u+0x00000000u; // 8024DB50
  W32(c->r[29]+0x000002E4u,c->r[4]); // 8024DB54
  c->r[4]=R32(c->r[29]+0x000002DCu); // 8024DB58
  c->r[3]=0u+0x00000001u; // 8024DB5C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8024DB60
  W32(c->r[4]+0x00000004u,c->r[29]); // 8024DB64
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024DB68
  c->r[4]=R32(c->r[13]+0xFFFF9E50u); // 8024DB6C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8024DB70
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8024DB74
  c->r[0]=c->r[4]|c->r[0]; // 8024DB78
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024DB7C
  W32(c->r[13]+0xFFFF9E4Cu,c->r[3]); // 8024DB80
  goto L_8024DCF0; // 8024DB84
L_8024DB88:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 8024DB88
  c->r[5]=R32(c->r[29]+0x000002E4u); // 8024DB8C
  cmps(c,0,(int32_t)c->r[4],0); // 8024DB90
  if (!crb(c,2)) { goto L_8024DBA4; } // 8024DB94
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DB98
  W32(c->r[3]+0x00000004u,c->r[5]); // 8024DB9C
  goto L_8024DBA8; // 8024DBA0
L_8024DBA4:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8024DBA4
L_8024DBA8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DBA8
  if (!crb(c,2)) { goto L_8024DBBC; } // 8024DBAC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DBB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024DBB4
  goto L_8024DBC0; // 8024DBB8
L_8024DBBC:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8024DBBC
L_8024DBC0:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 8024DBC0
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8024DBC4
  goto L_8024DBF0; // 8024DBC8
  c->r[0]=c->r[0]|0x00000000u; // 8024DBCC
L_8024DBD0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024DBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8024DBD4
  if (crb(c,2)) { goto L_8024DBEC; } // 8024DBD8
  c->r[3]=R32(c->r[3]+0x000002D0u); // 8024DBDC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8024DBE0
  if (!crb(c,0)) { goto L_8024DBEC; } // 8024DBE4
  c->r[0]=c->r[3]|c->r[3]; // 8024DBE8
L_8024DBEC:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8024DBEC
L_8024DBF0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024DBF0
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DBD0; } // 8024DBF4
  W32(c->r[29]+0x000002D0u,c->r[0]); // 8024DBF8
  c->r[4]=R32(c->r[29]+0x000002DCu); // 8024DBFC
  c->r[5]=R32(c->r[4]+0x00000000u); // 8024DC00
  goto L_8024DC0C; // 8024DC04
L_8024DC08:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 8024DC08
L_8024DC0C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DC0C
  if (crb(c,2)) { goto L_8024DC24; } // 8024DC10
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8024DC14
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024DC18
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8024DC1C
  if (!crb(c,1)) { IRQCHK(c); goto L_8024DC08; } // 8024DC20
L_8024DC24:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DC24
  if (!crb(c,2)) { goto L_8024DC5C; } // 8024DC28
  c->r[3]=R32(c->r[4]+0x00000004u); // 8024DC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8024DC30
  if (!crb(c,2)) { goto L_8024DC40; } // 8024DC34
  W32(c->r[4]+0x00000000u,c->r[29]); // 8024DC38
  goto L_8024DC44; // 8024DC3C
L_8024DC40:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 8024DC40
L_8024DC44:;
  c->r[0]=0u+0x00000000u; // 8024DC44
  W32(c->r[29]+0x000002E4u,c->r[3]); // 8024DC48
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DC4C
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8024DC50
  W32(c->r[3]+0x00000004u,c->r[29]); // 8024DC54
  goto L_8024DC84; // 8024DC58
L_8024DC5C:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 8024DC5C
  c->r[3]=R32(c->r[5]+0x000002E4u); // 8024DC60
  W32(c->r[5]+0x000002E4u,c->r[29]); // 8024DC64
  cmps(c,0,(int32_t)c->r[3],0); // 8024DC68
  W32(c->r[29]+0x000002E4u,c->r[3]); // 8024DC6C
  if (!crb(c,2)) { goto L_8024DC80; } // 8024DC70
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DC74
  W32(c->r[3]+0x00000000u,c->r[29]); // 8024DC78
  goto L_8024DC84; // 8024DC7C
L_8024DC80:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 8024DC80
L_8024DC84:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 8024DC84
  cmps(c,0,(int32_t)c->r[3],0); // 8024DC88
  if (crb(c,2)) { goto L_8024DCF0; } // 8024DC8C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024DC90
L_8024DC94:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8024DC94
  cmps(c,0,(int32_t)c->r[0],0); // 8024DC98
  if (crb(c,1)) { goto L_8024DCF0; } // 8024DC9C
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8024DCA0
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8024DCA4
  goto L_8024DCD0; // 8024DCA8
  c->r[0]=c->r[0]|0x00000000u; // 8024DCAC
L_8024DCB0:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8024DCB0
  cmps(c,0,(int32_t)c->r[6],0); // 8024DCB4
  if (crb(c,2)) { goto L_8024DCCC; } // 8024DCB8
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8024DCBC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024DCC0
  if (!crb(c,0)) { goto L_8024DCCC; } // 8024DCC4
  c->r[4]=c->r[0]|c->r[0]; // 8024DCC8
L_8024DCCC:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8024DCCC
L_8024DCD0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DCD0
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DCB0; } // 8024DCD4
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024DCD8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024DCDC
  if (crb(c,2)) { goto L_8024DCF0; } // 8024DCE0
  c->lr=0x8024DCE8u; f_8024CF70(c); // 8024DCE4
  cmps(c,0,(int32_t)c->r[3],0); // 8024DCE8
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DC94; } // 8024DCEC
L_8024DCF0:;
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024DCF0
  cmps(c,0,(int32_t)c->r[0],0); // 8024DCF4
  if (crb(c,2)) { goto L_8024DD04; } // 8024DCF8
  c->r[3]=0u+0x00000000u; // 8024DCFC
  c->lr=0x8024DD04u; f_8024D170(c); // 8024DD00
L_8024DD04:;
  c->r[3]=c->r[31]|c->r[31]; // 8024DD04
  c->lr=0x8024DD0Cu; f_80249500(c); // 8024DD08
  c->r[3]=c->r[30]|c->r[30]; // 8024DD0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024DD10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024DD14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024DD18
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024DD1C
  c->lr=c->r[0]; // 8024DD20
  c->r[1]=c->r[1]+0x00000020u; // 8024DD24
  return; // 8024DD28
}

// OSSuspendThread
void f_8024DD30(Ctx* __restrict c) {
  trace_call(0x8024DD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DD30
  c->r[0]=c->lr; // 8024DD34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024DD38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024DD3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024DD40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024DD44
  c->r[29]=c->r[3]|c->r[3]; // 8024DD48
  c->lr=0x8024DD50u; f_802494C0(c); // 8024DD4C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 8024DD50
  c->r[31]=c->r[3]|c->r[3]; // 8024DD54
  cmps(c,0,(int32_t)c->r[30],0); // 8024DD58
  c->r[0]=c->r[30]+0x00000001u; // 8024DD5C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 8024DD60
  if (!crb(c,2)) { goto L_8024DE94; } // 8024DD64
  c->r[0]=R16(c->r[29]+0x000002C8u); // 8024DD68
  cmps(c,0,(int32_t)c->r[0],2); // 8024DD6C
  if (crb(c,2)) { goto L_8024DD88; } // 8024DD70
  cmps(c,0,(int32_t)c->r[0],1); // 8024DD74
  if (crb(c,2)) { goto L_8024DD98; } // 8024DD78
  cmps(c,0,(int32_t)c->r[0],4); // 8024DD7C
  if (crb(c,2)) { goto L_8024DDA4; } // 8024DD80
  goto L_8024DE80; // 8024DD84
L_8024DD88:;
  c->r[0]=0u+0x00000001u; // 8024DD88
  W32(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 8024DD8C
  W16(c->r[29]+0x000002C8u,c->r[0]); // 8024DD90
  goto L_8024DE80; // 8024DD94
L_8024DD98:;
  c->r[3]=c->r[29]|c->r[29]; // 8024DD98
  c->lr=0x8024DDA0u; f_8024CEC0(c); // 8024DD9C
  goto L_8024DE80; // 8024DDA0
L_8024DDA4:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 8024DDA4
  c->r[5]=R32(c->r[29]+0x000002E4u); // 8024DDA8
  cmps(c,0,(int32_t)c->r[4],0); // 8024DDAC
  if (!crb(c,2)) { goto L_8024DDC0; } // 8024DDB0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DDB4
  W32(c->r[3]+0x00000004u,c->r[5]); // 8024DDB8
  goto L_8024DDC4; // 8024DDBC
L_8024DDC0:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 8024DDC0
L_8024DDC4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DDC4
  if (!crb(c,2)) { goto L_8024DDD8; } // 8024DDC8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DDCC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024DDD0
  goto L_8024DDDC; // 8024DDD4
L_8024DDD8:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 8024DDD8
L_8024DDDC:;
  c->r[0]=0u+0x00000020u; // 8024DDDC
  W32(c->r[29]+0x000002D0u,c->r[0]); // 8024DDE0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DDE4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8024DDE8
  cmps(c,0,(int32_t)c->r[4],0); // 8024DDEC
  if (!crb(c,2)) { goto L_8024DDFC; } // 8024DDF0
  W32(c->r[3]+0x00000000u,c->r[29]); // 8024DDF4
  goto L_8024DE00; // 8024DDF8
L_8024DDFC:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 8024DDFC
L_8024DE00:;
  c->r[0]=0u+0x00000000u; // 8024DE00
  W32(c->r[29]+0x000002E4u,c->r[4]); // 8024DE04
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024DE08
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8024DE0C
  W32(c->r[3]+0x00000004u,c->r[29]); // 8024DE10
  c->r[3]=R32(c->r[29]+0x000002F0u); // 8024DE14
  cmps(c,0,(int32_t)c->r[3],0); // 8024DE18
  if (crb(c,2)) { goto L_8024DE80; } // 8024DE1C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024DE20
L_8024DE24:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 8024DE24
  cmps(c,0,(int32_t)c->r[0],0); // 8024DE28
  if (crb(c,1)) { goto L_8024DE80; } // 8024DE2C
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8024DE30
  c->r[5]=R32(c->r[3]+0x000002F4u); // 8024DE34
  goto L_8024DE60; // 8024DE38
  c->r[0]=c->r[0]|0x00000000u; // 8024DE3C
L_8024DE40:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8024DE40
  cmps(c,0,(int32_t)c->r[6],0); // 8024DE44
  if (crb(c,2)) { goto L_8024DE5C; } // 8024DE48
  c->r[0]=R32(c->r[6]+0x000002D0u); // 8024DE4C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024DE50
  if (!crb(c,0)) { goto L_8024DE5C; } // 8024DE54
  c->r[4]=c->r[0]|c->r[0]; // 8024DE58
L_8024DE5C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 8024DE5C
L_8024DE60:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DE60
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DE40; } // 8024DE64
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024DE68
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024DE6C
  if (crb(c,2)) { goto L_8024DE80; } // 8024DE70
  c->lr=0x8024DE78u; f_8024CF70(c); // 8024DE74
  cmps(c,0,(int32_t)c->r[3],0); // 8024DE78
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DE24; } // 8024DE7C
L_8024DE80:;
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024DE80
  cmps(c,0,(int32_t)c->r[0],0); // 8024DE84
  if (crb(c,2)) { goto L_8024DE94; } // 8024DE88
  c->r[3]=0u+0x00000000u; // 8024DE8C
  c->lr=0x8024DE94u; f_8024D170(c); // 8024DE90
L_8024DE94:;
  c->r[3]=c->r[31]|c->r[31]; // 8024DE94
  c->lr=0x8024DE9Cu; f_80249500(c); // 8024DE98
  c->r[3]=c->r[30]|c->r[30]; // 8024DE9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024DEA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024DEA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024DEA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024DEAC
  c->lr=c->r[0]; // 8024DEB0
  c->r[1]=c->r[1]+0x00000020u; // 8024DEB4
  return; // 8024DEB8
}

// OSSleepThread
void f_8024DEC0(Ctx* __restrict c) {
  trace_call(0x8024DEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DEC0
  c->r[0]=c->lr; // 8024DEC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024DEC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024DECC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024DED0
  c->r[30]=c->r[3]|c->r[3]; // 8024DED4
  c->lr=0x8024DEDCu; f_802494C0(c); // 8024DED8
  c->r[4]=0u+0x80000000u; // 8024DEDC
  c->r[0]=0u+0x00000004u; // 8024DEE0
  c->r[4]=R32(c->r[4]+0x000000E4u); // 8024DEE4
  c->r[31]=c->r[3]|c->r[3]; // 8024DEE8
  W16(c->r[4]+0x000002C8u,c->r[0]); // 8024DEEC
  W32(c->r[4]+0x000002DCu,c->r[30]); // 8024DEF0
  c->r[5]=R32(c->r[30]+0x00000000u); // 8024DEF4
  goto L_8024DF04; // 8024DEF8
  c->r[0]=c->r[0]|0x00000000u; // 8024DEFC
L_8024DF00:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 8024DF00
L_8024DF04:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DF04
  if (crb(c,2)) { goto L_8024DF1C; } // 8024DF08
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8024DF0C
  c->r[0]=R32(c->r[4]+0x000002D0u); // 8024DF10
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8024DF14
  if (!crb(c,1)) { IRQCHK(c); goto L_8024DF00; } // 8024DF18
L_8024DF1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024DF1C
  if (!crb(c,2)) { goto L_8024DF50; } // 8024DF20
  c->r[3]=R32(c->r[30]+0x00000004u); // 8024DF24
  cmps(c,0,(int32_t)c->r[3],0); // 8024DF28
  if (!crb(c,2)) { goto L_8024DF38; } // 8024DF2C
  W32(c->r[30]+0x00000000u,c->r[4]); // 8024DF30
  goto L_8024DF3C; // 8024DF34
L_8024DF38:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 8024DF38
L_8024DF3C:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8024DF3C
  c->r[0]=0u+0x00000000u; // 8024DF40
  W32(c->r[4]+0x000002E0u,c->r[0]); // 8024DF44
  W32(c->r[30]+0x00000004u,c->r[4]); // 8024DF48
  goto L_8024DF74; // 8024DF4C
L_8024DF50:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 8024DF50
  c->r[3]=R32(c->r[5]+0x000002E4u); // 8024DF54
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8024DF58
  cmps(c,0,(int32_t)c->r[3],0); // 8024DF5C
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8024DF60
  if (!crb(c,2)) { goto L_8024DF70; } // 8024DF64
  W32(c->r[30]+0x00000000u,c->r[4]); // 8024DF68
  goto L_8024DF74; // 8024DF6C
L_8024DF70:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 8024DF70
L_8024DF74:;
  c->r[0]=0u+0x00000001u; // 8024DF74
  W32(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 8024DF78
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024DF7C
  cmps(c,0,(int32_t)c->r[0],0); // 8024DF80
  if (crb(c,2)) { goto L_8024DF90; } // 8024DF84
  c->r[3]=0u+0x00000000u; // 8024DF88
  c->lr=0x8024DF90u; f_8024D170(c); // 8024DF8C
L_8024DF90:;
  c->r[3]=c->r[31]|c->r[31]; // 8024DF90
  c->lr=0x8024DF98u; f_80249500(c); // 8024DF94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024DF98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024DF9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024DFA0
  c->lr=c->r[0]; // 8024DFA4
  c->r[1]=c->r[1]+0x00000010u; // 8024DFA8
  return; // 8024DFAC
}

// OSWakeupThread
void f_8024DFB0(Ctx* __restrict c) {
  trace_call(0x8024DFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DFB0
  c->r[0]=c->lr; // 8024DFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024DFB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024DFBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024DFC0
  c->r[30]=c->r[3]|c->r[3]; // 8024DFC4
  c->lr=0x8024DFCCu; f_802494C0(c); // 8024DFC8
  c->r[5]=0u+0x804A0000u; // 8024DFCC
  c->r[31]=c->r[3]|c->r[3]; // 8024DFD0
  c->r[5]=c->r[5]+0xFFFFCB70u; // 8024DFD4
  c->r[6]=0u+0x00000000u; // 8024DFD8
  c->r[3]=0u+0x00000001u; // 8024DFDC
  goto L_8024E068; // 8024DFE0
  c->r[0]=c->r[0]|0x00000000u; // 8024DFE4
L_8024DFE8:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 8024DFE8
  cmps(c,0,(int32_t)c->r[4],0); // 8024DFEC
  if (!crb(c,2)) { goto L_8024DFFC; } // 8024DFF0
  W32(c->r[30]+0x00000004u,c->r[6]); // 8024DFF4
  goto L_8024E000; // 8024DFF8
L_8024DFFC:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 8024DFFC
L_8024E000:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 8024E000
  W16(c->r[8]+0x000002C8u,c->r[3]); // 8024E004
  c->r[0]=R32(c->r[8]+0x000002CCu); // 8024E008
  cmps(c,0,(int32_t)c->r[0],0); // 8024E00C
  if (crb(c,1)) { goto L_8024E068; } // 8024E010
  c->r[0]=R32(c->r[8]+0x000002D0u); // 8024E014
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024E018
  c->r[4]=c->r[5]+c->r[0]; // 8024E01C
  W32(c->r[8]+0x000002DCu,c->r[4]); // 8024E020
  c->r[7]=R32(c->r[4]+0x00000004u); // 8024E024
  cmps(c,0,(int32_t)c->r[7],0); // 8024E028
  if (!crb(c,2)) { goto L_8024E038; } // 8024E02C
  W32(c->r[4]+0x00000000u,c->r[8]); // 8024E030
  goto L_8024E03C; // 8024E034
L_8024E038:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 8024E038
L_8024E03C:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 8024E03C
  W32(c->r[8]+0x000002E0u,c->r[6]); // 8024E040
  c->r[4]=R32(c->r[8]+0x000002DCu); // 8024E044
  W32(c->r[4]+0x00000004u,c->r[8]); // 8024E048
  c->r[0]=R32(c->r[8]+0x000002D0u); // 8024E04C
  c->r[4]=R32(c->r[13]+0xFFFF9E50u); // 8024E050
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8024E054
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8024E058
  c->r[0]=c->r[4]|c->r[0]; // 8024E05C
  W32(c->r[13]+0xFFFF9E50u,c->r[0]); // 8024E060
  W32(c->r[13]+0xFFFF9E4Cu,c->r[3]); // 8024E064
L_8024E068:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 8024E068
  cmps(c,0,(int32_t)c->r[8],0); // 8024E06C
  if (!crb(c,2)) { IRQCHK(c); goto L_8024DFE8; } // 8024E070
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024E074
  cmps(c,0,(int32_t)c->r[0],0); // 8024E078
  if (crb(c,2)) { goto L_8024E088; } // 8024E07C
  c->r[3]=0u+0x00000000u; // 8024E080
  c->lr=0x8024E088u; f_8024D170(c); // 8024E084
L_8024E088:;
  c->r[3]=c->r[31]|c->r[31]; // 8024E088
  c->lr=0x8024E090u; f_80249500(c); // 8024E08C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024E090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024E094
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024E098
  c->lr=c->r[0]; // 8024E09C
  c->r[1]=c->r[1]+0x00000010u; // 8024E0A0
  return; // 8024E0A4
}

// fn_8024E0B0
void f_8024E0B0(Ctx* __restrict c) {
  trace_call(0x8024E0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E0B0
  c->r[0]=c->lr; // 8024E0B4
  cmps(c,0,(int32_t)c->r[4],0); // 8024E0B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024E0BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024E0C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024E0C4
  c->r[30]=c->r[4]|c->r[4]; // 8024E0C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024E0CC
  c->r[29]=c->r[3]|c->r[3]; // 8024E0D0
  if (crb(c,0)) { goto L_8024E0E0; } // 8024E0D4
  cmps(c,0,(int32_t)c->r[4],31); // 8024E0D8
  if (!crb(c,1)) { goto L_8024E0E8; } // 8024E0DC
L_8024E0E0:;
  c->r[3]=0u+0x00000000u; // 8024E0E0
  goto L_8024E180; // 8024E0E4
L_8024E0E8:;
  c->lr=0x8024E0ECu; f_802494C0(c); // 8024E0E8
  c->r[0]=R32(c->r[29]+0x000002D4u); // 8024E0EC
  c->r[31]=c->r[3]|c->r[3]; // 8024E0F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8024E0F4
  if (crb(c,2)) { goto L_8024E174; } // 8024E0F8
  W32(c->r[29]+0x000002D4u,c->r[30]); // 8024E0FC
L_8024E100:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 8024E100
  cmps(c,0,(int32_t)c->r[0],0); // 8024E104
  if (crb(c,1)) { goto L_8024E160; } // 8024E108
  c->r[4]=R32(c->r[29]+0x000002D4u); // 8024E10C
  c->r[3]=R32(c->r[29]+0x000002F4u); // 8024E110
  goto L_8024E138; // 8024E114
L_8024E118:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8024E118
  cmps(c,0,(int32_t)c->r[5],0); // 8024E11C
  if (crb(c,2)) { goto L_8024E134; } // 8024E120
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8024E124
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024E128
  if (!crb(c,0)) { goto L_8024E134; } // 8024E12C
  c->r[4]=c->r[0]|c->r[0]; // 8024E130
L_8024E134:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 8024E134
L_8024E138:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024E138
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E118; } // 8024E13C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E140
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8024E144
  if (crb(c,2)) { goto L_8024E160; } // 8024E148
  c->r[3]=c->r[29]|c->r[29]; // 8024E14C
  c->lr=0x8024E154u; f_8024CF70(c); // 8024E150
  cmps(c,0,(int32_t)c->r[3],0); // 8024E154
  c->r[29]=c->r[3]|c->r[3]; // 8024E158
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E100; } // 8024E15C
L_8024E160:;
  c->r[0]=R32(c->r[13]+0xFFFF9E4Cu); // 8024E160
  cmps(c,0,(int32_t)c->r[0],0); // 8024E164
  if (crb(c,2)) { goto L_8024E174; } // 8024E168
  c->r[3]=0u+0x00000000u; // 8024E16C
  c->lr=0x8024E174u; f_8024D170(c); // 8024E170
L_8024E174:;
  c->r[3]=c->r[31]|c->r[31]; // 8024E174
  c->lr=0x8024E17Cu; f_80249500(c); // 8024E178
  c->r[3]=0u+0x00000001u; // 8024E17C
L_8024E180:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024E180
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024E184
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024E188
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024E18C
  c->lr=c->r[0]; // 8024E190
  c->r[1]=c->r[1]+0x00000020u; // 8024E194
  return; // 8024E198
}

// fn_8024E1A0
void f_8024E1A0(Ctx* __restrict c) {
  trace_call(0x8024E1A0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8024E1A0
  cmps(c,0,(int32_t)c->r[5],0); // 8024E1A4
  if (crb(c,2)) { goto L_8024E1C0; } // 8024E1A8
  c->r[0]=R32(c->r[5]+0x000002E4u); // 8024E1AC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E1B0
  if (crb(c,2)) { goto L_8024E1C0; } // 8024E1B4
  c->r[3]=0u+0x00000000u; // 8024E1B8
  return; // 8024E1BC
L_8024E1C0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8024E1C0
  cmps(c,0,(int32_t)c->r[3],0); // 8024E1C4
  if (crb(c,2)) { goto L_8024E22C; } // 8024E1C8
  c->r[0]=R32(c->r[3]+0x000002E0u); // 8024E1CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E1D0
  if (crb(c,2)) { goto L_8024E22C; } // 8024E1D4
  c->r[3]=0u+0x00000000u; // 8024E1D8
  return; // 8024E1DC
  goto L_8024E22C; // 8024E1E0
  c->r[0]=c->r[0]|0x00000000u; // 8024E1E4
L_8024E1E8:;
  c->r[3]=R32(c->r[5]+0x000002E0u); // 8024E1E8
  cmps(c,0,(int32_t)c->r[3],0); // 8024E1EC
  if (crb(c,2)) { goto L_8024E208; } // 8024E1F0
  c->r[0]=R32(c->r[3]+0x000002E4u); // 8024E1F4
  cmpu(c,0,c->r[5],c->r[0]); // 8024E1F8
  if (crb(c,2)) { goto L_8024E208; } // 8024E1FC
  c->r[3]=0u+0x00000000u; // 8024E200
  return; // 8024E204
L_8024E208:;
  c->r[4]=R32(c->r[5]+0x000002E4u); // 8024E208
  cmps(c,0,(int32_t)c->r[4],0); // 8024E20C
  if (crb(c,2)) { goto L_8024E228; } // 8024E210
  c->r[0]=R32(c->r[4]+0x000002E0u); // 8024E214
  cmpu(c,0,c->r[5],c->r[0]); // 8024E218
  if (crb(c,2)) { goto L_8024E228; } // 8024E21C
  c->r[3]=0u+0x00000000u; // 8024E220
  return; // 8024E224
L_8024E228:;
  c->r[5]=c->r[3]|c->r[3]; // 8024E228
L_8024E22C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8024E22C
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E1E8; } // 8024E230
  c->r[3]=0u+0x00000001u; // 8024E234
  return; // 8024E238
}

// fn_8024E240
void f_8024E240(Ctx* __restrict c) {
  trace_call(0x8024E240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E240
  c->r[0]=c->lr; // 8024E244
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024E248
  c->r[11]=c->r[1]+0x00000020u; // 8024E24C
  c->lr=0x8024E254u; f_800C2E48(c); // 8024E250
  c->r[30]=0u+0x803B0000u; // 8024E254
  c->r[28]=0u+0x00000000u; // 8024E258
  c->r[30]=c->r[30]+0xFFFFEC68u; // 8024E25C
  c->lr=0x8024E264u; f_802494C0(c); // 8024E260
  c->r[31]=0u+0x804A0000u; // 8024E264
  c->r[27]=c->r[3]|c->r[3]; // 8024E268
  c->r[31]=c->r[31]+0xFFFFCB70u; // 8024E26C
  c->r[26]=0u+0x00000000u; // 8024E270
  c->r[29]=0u+0x00000001u; // 8024E274
L_8024E278:;
  c->r[0]=addc(c,~c->r[26],0x0000001Fu,1); // 8024E278
  c->r[3]=R32(c->r[13]+0xFFFF9E50u); // 8024E27C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[29]<<((c->r[0])&31)); // 8024E280
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8024E284
  if (crb(c,2)) { goto L_8024E2CC; } // 8024E288
  c->r[0]=R32(c->r[31]+0x00000000u); // 8024E28C
  cmps(c,0,(int32_t)c->r[0],0); // 8024E290
  if (crb(c,2)) { goto L_8024E2A4; } // 8024E294
  c->r[0]=R32(c->r[31]+0x00000004u); // 8024E298
  cmps(c,0,(int32_t)c->r[0],0); // 8024E29C
  if (!crb(c,2)) { goto L_8024E308; } // 8024E2A0
L_8024E2A4:;
  c->r[3]=c->r[30]+0x00000000u; // 8024E2A4
  c->r[4]=0u+0x000005F2u; // 8024E2A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E2AC
  c->lr=0x8024E2B4u; f_80245CC0(c); // 8024E2B0
  c->r[3]=c->r[30]+0x00000060u; // 8024E2B4
  c->r[4]=0u+0x000005F2u; // 8024E2B8
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E2BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E2C0
  c->lr=0x8024E2C8u; f_80245D40(c); // 8024E2C4
  goto L_8024E308; // 8024E2C8
L_8024E2CC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8024E2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E2D0
  if (!crb(c,2)) { goto L_8024E2E4; } // 8024E2D4
  c->r[0]=R32(c->r[31]+0x00000004u); // 8024E2D8
  cmps(c,0,(int32_t)c->r[0],0); // 8024E2DC
  if (crb(c,2)) { goto L_8024E308; } // 8024E2E0
L_8024E2E4:;
  c->r[3]=c->r[30]+0x0000006Cu; // 8024E2E4
  c->r[4]=0u+0x000005F7u; // 8024E2E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E2EC
  c->lr=0x8024E2F4u; f_80245CC0(c); // 8024E2F0
  c->r[3]=c->r[30]+0x00000060u; // 8024E2F4
  c->r[4]=0u+0x000005F7u; // 8024E2F8
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E2FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E300
  c->lr=0x8024E308u; f_80245D40(c); // 8024E304
L_8024E308:;
  c->r[3]=c->r[31]|c->r[31]; // 8024E308
  c->lr=0x8024E310u; f_8024E1A0(c); // 8024E30C
  cmps(c,0,(int32_t)c->r[3],0); // 8024E310
  if (!crb(c,2)) { goto L_8024E33C; } // 8024E314
  c->r[3]=c->r[30]+0x000000CCu; // 8024E318
  c->r[4]=0u+0x000005F9u; // 8024E31C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E320
  c->lr=0x8024E328u; f_80245CC0(c); // 8024E324
  c->r[3]=c->r[30]+0x00000060u; // 8024E328
  c->r[4]=0u+0x000005F9u; // 8024E32C
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E330
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E334
  c->lr=0x8024E33Cu; f_80245D40(c); // 8024E338
L_8024E33C:;
  c->r[26]=c->r[26]+0x00000001u; // 8024E33C
  c->r[31]=c->r[31]+0x00000008u; // 8024E340
  cmps(c,0,(int32_t)c->r[26],31); // 8024E344
  if (!crb(c,1)) { IRQCHK(c); goto L_8024E278; } // 8024E348
  c->r[3]=0u+0x80000000u; // 8024E34C
  c->r[3]=R32(c->r[3]+0x000000DCu); // 8024E350
  cmps(c,0,(int32_t)c->r[3],0); // 8024E354
  if (crb(c,2)) { goto L_8024E38C; } // 8024E358
  c->r[0]=R32(c->r[3]+0x00000300u); // 8024E35C
  cmps(c,0,(int32_t)c->r[0],0); // 8024E360
  if (crb(c,2)) { goto L_8024E38C; } // 8024E364
  c->r[3]=c->r[30]+0x00000114u; // 8024E368
  c->r[4]=0u+0x000005FEu; // 8024E36C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E370
  c->lr=0x8024E378u; f_80245CC0(c); // 8024E374
  c->r[3]=c->r[30]+0x00000060u; // 8024E378
  c->r[4]=0u+0x000005FEu; // 8024E37C
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E384
  c->lr=0x8024E38Cu; f_80245D40(c); // 8024E388
L_8024E38C:;
  c->r[3]=0u+0x80000000u; // 8024E38C
  c->r[3]=R32(c->r[3]+0x000000E0u); // 8024E390
  cmps(c,0,(int32_t)c->r[3],0); // 8024E394
  if (crb(c,2)) { goto L_8024E3CC; } // 8024E398
  c->r[0]=R32(c->r[3]+0x000002FCu); // 8024E39C
  cmps(c,0,(int32_t)c->r[0],0); // 8024E3A0
  if (crb(c,2)) { goto L_8024E3CC; } // 8024E3A4
  c->r[3]=c->r[30]+0x00000194u; // 8024E3A8
  c->r[4]=0u+0x00000600u; // 8024E3AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E3B0
  c->lr=0x8024E3B8u; f_80245CC0(c); // 8024E3B4
  c->r[3]=c->r[30]+0x00000060u; // 8024E3B8
  c->r[4]=0u+0x00000600u; // 8024E3BC
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E3C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E3C4
  c->lr=0x8024E3CCu; f_80245D40(c); // 8024E3C8
L_8024E3CC:;
  c->r[4]=0u+0x80000000u; // 8024E3CC
  c->r[3]=0u+0x804A0000u; // 8024E3D0
  c->r[29]=R32(c->r[4]+0x000000DCu); // 8024E3D4
  c->r[31]=c->r[3]+0xFFFFCB70u; // 8024E3D8
  goto L_8024E968; // 8024E3DC
L_8024E3E0:;
  c->r[3]=R32(c->r[29]+0x000002FCu); // 8024E3E0
  c->r[28]=c->r[28]+0x00000001u; // 8024E3E4
  cmps(c,0,(int32_t)c->r[3],0); // 8024E3E8
  if (crb(c,2)) { goto L_8024E420; } // 8024E3EC
  c->r[0]=R32(c->r[3]+0x00000300u); // 8024E3F0
  cmpu(c,0,c->r[29],c->r[0]); // 8024E3F4
  if (crb(c,2)) { goto L_8024E420; } // 8024E3F8
  c->r[3]=c->r[30]+0x00000214u; // 8024E3FC
  c->r[4]=0u+0x00000608u; // 8024E400
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E404
  c->lr=0x8024E40Cu; f_80245CC0(c); // 8024E408
  c->r[3]=c->r[30]+0x00000060u; // 8024E40C
  c->r[4]=0u+0x00000608u; // 8024E410
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E414
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E418
  c->lr=0x8024E420u; f_80245D40(c); // 8024E41C
L_8024E420:;
  c->r[3]=R32(c->r[29]+0x00000300u); // 8024E420
  cmps(c,0,(int32_t)c->r[3],0); // 8024E424
  if (crb(c,2)) { goto L_8024E45C; } // 8024E428
  c->r[0]=R32(c->r[3]+0x000002FCu); // 8024E42C
  cmpu(c,0,c->r[29],c->r[0]); // 8024E430
  if (crb(c,2)) { goto L_8024E45C; } // 8024E434
  c->r[3]=c->r[30]+0x00000290u; // 8024E438
  c->r[4]=0u+0x0000060Au; // 8024E43C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E440
  c->lr=0x8024E448u; f_80245CC0(c); // 8024E444
  c->r[3]=c->r[30]+0x00000060u; // 8024E448
  c->r[4]=0u+0x0000060Au; // 8024E44C
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E450
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E454
  c->lr=0x8024E45Cu; f_80245D40(c); // 8024E458
L_8024E45C:;
  c->r[3]=R32(c->r[29]+0x00000308u); // 8024E45C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8024E460
  c->r[0]=c->r[3]+0x21530000u; // 8024E464
  cmpu(c,0,c->r[0],0x0000BABEu); // 8024E468
  if (crb(c,2)) { goto L_8024E494; } // 8024E46C
  c->r[3]=c->r[30]+0x0000030Cu; // 8024E470
  c->r[4]=0u+0x0000060Du; // 8024E474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E478
  c->lr=0x8024E480u; f_80245CC0(c); // 8024E47C
  c->r[3]=c->r[30]+0x00000060u; // 8024E480
  c->r[4]=0u+0x0000060Du; // 8024E484
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E48C
  c->lr=0x8024E494u; f_80245D40(c); // 8024E490
L_8024E494:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E494
  cmps(c,0,(int32_t)c->r[0],0); // 8024E498
  if (crb(c,0)) { goto L_8024E4A8; } // 8024E49C
  cmps(c,0,(int32_t)c->r[0],32); // 8024E4A0
  if (!crb(c,1)) { goto L_8024E4CC; } // 8024E4A4
L_8024E4A8:;
  c->r[3]=c->r[30]+0x00000360u; // 8024E4A8
  c->r[4]=0u+0x00000610u; // 8024E4AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E4B0
  c->lr=0x8024E4B8u; f_80245CC0(c); // 8024E4B4
  c->r[3]=c->r[30]+0x00000060u; // 8024E4B8
  c->r[4]=0u+0x00000610u; // 8024E4BC
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E4C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E4C4
  c->lr=0x8024E4CCu; f_80245D40(c); // 8024E4C8
L_8024E4CC:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 8024E4CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E4D0
  if (!crb(c,0)) { goto L_8024E4FC; } // 8024E4D4
  c->r[3]=c->r[30]+0x000003D4u; // 8024E4D8
  c->r[4]=0u+0x00000611u; // 8024E4DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E4E0
  c->lr=0x8024E4E8u; f_80245CC0(c); // 8024E4E4
  c->r[3]=c->r[30]+0x00000060u; // 8024E4E8
  c->r[4]=0u+0x00000611u; // 8024E4EC
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E4F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E4F4
  c->lr=0x8024E4FCu; f_80245D40(c); // 8024E4F8
L_8024E4FC:;
  c->r[3]=c->r[29]+0x000002E8u; // 8024E4FC
  c->lr=0x8024E504u; f_8024E1A0(c); // 8024E500
  cmps(c,0,(int32_t)c->r[3],0); // 8024E504
  if (!crb(c,2)) { goto L_8024E530; } // 8024E508
  c->r[3]=c->r[30]+0x00000410u; // 8024E50C
  c->r[4]=0u+0x00000612u; // 8024E510
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E514
  c->lr=0x8024E51Cu; f_80245CC0(c); // 8024E518
  c->r[3]=c->r[30]+0x00000060u; // 8024E51C
  c->r[4]=0u+0x00000612u; // 8024E520
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E524
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E528
  c->lr=0x8024E530u; f_80245D40(c); // 8024E52C
L_8024E530:;
  c->r[4]=R16(c->r[29]+0x000002C8u); // 8024E530
  cmps(c,0,(int32_t)c->r[4],1); // 8024E534
  if (crb(c,2)) { goto L_8024E558; } // 8024E538
  cmps(c,0,(int32_t)c->r[4],2); // 8024E53C
  if (crb(c,2)) { goto L_8024E664; } // 8024E540
  cmps(c,0,(int32_t)c->r[4],4); // 8024E544
  if (crb(c,2)) { goto L_8024E72C; } // 8024E548
  cmps(c,0,(int32_t)c->r[4],8); // 8024E54C
  if (crb(c,2)) { goto L_8024E8CC; } // 8024E550
  goto L_8024E90C; // 8024E554
L_8024E558:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 8024E558
  cmps(c,0,(int32_t)c->r[0],0); // 8024E55C
  if (crb(c,1)) { goto L_8024E930; } // 8024E560
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E564
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024E568
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024E56C
  c->r[0]=c->r[31]+c->r[0]; // 8024E570
  cmpu(c,0,c->r[3],c->r[0]); // 8024E574
  if (crb(c,2)) { goto L_8024E5A0; } // 8024E578
  c->r[3]=c->r[30]+0x0000045Cu; // 8024E57C
  c->r[4]=0u+0x00000618u; // 8024E580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E584
  c->lr=0x8024E58Cu; f_80245CC0(c); // 8024E588
  c->r[3]=c->r[30]+0x00000060u; // 8024E58C
  c->r[4]=0u+0x00000618u; // 8024E590
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E598
  c->lr=0x8024E5A0u; f_80245D40(c); // 8024E59C
L_8024E5A0:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E5A0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024E5A4
  c->r[3]=R32(c->r[31]+c->r[0]); // 8024E5A8
  goto L_8024E5C4; // 8024E5AC
L_8024E5B0:;
  cmpu(c,0,c->r[29],c->r[3]); // 8024E5B0
  if (!crb(c,2)) { goto L_8024E5C0; } // 8024E5B4
  c->r[0]=0u+0x00000001u; // 8024E5B8
  goto L_8024E5D0; // 8024E5BC
L_8024E5C0:;
  c->r[3]=R32(c->r[3]+0x000002E0u); // 8024E5C0
L_8024E5C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024E5C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E5B0; } // 8024E5C8
  c->r[0]=0u+0x00000000u; // 8024E5CC
L_8024E5D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024E5D0
  if (!crb(c,2)) { goto L_8024E5FC; } // 8024E5D4
  c->r[3]=c->r[30]+0x000004B0u; // 8024E5D8
  c->r[4]=0u+0x00000619u; // 8024E5DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E5E0
  c->lr=0x8024E5E8u; f_80245CC0(c); // 8024E5E4
  c->r[3]=c->r[30]+0x00000060u; // 8024E5E8
  c->r[4]=0u+0x00000619u; // 8024E5EC
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E5F4
  c->lr=0x8024E5FCu; f_80245D40(c); // 8024E5F8
L_8024E5FC:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 8024E5FC
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8024E600
  goto L_8024E628; // 8024E604
L_8024E608:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024E608
  cmps(c,0,(int32_t)c->r[3],0); // 8024E60C
  if (crb(c,2)) { goto L_8024E624; } // 8024E610
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024E614
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E618
  if (!crb(c,0)) { goto L_8024E624; } // 8024E61C
  c->r[5]=c->r[0]|c->r[0]; // 8024E620
L_8024E624:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8024E624
L_8024E628:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024E628
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E608; } // 8024E62C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E630
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E634
  if (crb(c,2)) { goto L_8024E930; } // 8024E638
  c->r[3]=c->r[30]+0x00000504u; // 8024E63C
  c->r[4]=0u+0x0000061Au; // 8024E640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E644
  c->lr=0x8024E64Cu; f_80245CC0(c); // 8024E648
  c->r[3]=c->r[30]+0x00000060u; // 8024E64C
  c->r[4]=0u+0x0000061Au; // 8024E650
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E658
  c->lr=0x8024E660u; f_80245D40(c); // 8024E65C
  goto L_8024E930; // 8024E660
L_8024E664:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 8024E664
  cmps(c,0,(int32_t)c->r[0],0); // 8024E668
  if (!crb(c,1)) { goto L_8024E694; } // 8024E66C
  c->r[3]=c->r[30]+0x00000560u; // 8024E670
  c->r[4]=0u+0x0000061Eu; // 8024E674
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E678
  c->lr=0x8024E680u; f_80245CC0(c); // 8024E67C
  c->r[3]=c->r[30]+0x00000060u; // 8024E680
  c->r[4]=0u+0x0000061Eu; // 8024E684
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E68C
  c->lr=0x8024E694u; f_80245D40(c); // 8024E690
L_8024E694:;
  c->r[0]=R32(c->r[29]+0x000002DCu); // 8024E694
  cmps(c,0,(int32_t)c->r[0],0); // 8024E698
  if (crb(c,2)) { goto L_8024E6C4; } // 8024E69C
  c->r[3]=c->r[30]+0x000005A4u; // 8024E6A0
  c->r[4]=0u+0x0000061Fu; // 8024E6A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E6A8
  c->lr=0x8024E6B0u; f_80245CC0(c); // 8024E6AC
  c->r[3]=c->r[30]+0x00000060u; // 8024E6B0
  c->r[4]=0u+0x0000061Fu; // 8024E6B4
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E6B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E6BC
  c->lr=0x8024E6C4u; f_80245D40(c); // 8024E6C0
L_8024E6C4:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 8024E6C4
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8024E6C8
  goto L_8024E6F0; // 8024E6CC
L_8024E6D0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024E6D0
  cmps(c,0,(int32_t)c->r[3],0); // 8024E6D4
  if (crb(c,2)) { goto L_8024E6EC; } // 8024E6D8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024E6DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E6E0
  if (!crb(c,0)) { goto L_8024E6EC; } // 8024E6E4
  c->r[5]=c->r[0]|c->r[0]; // 8024E6E8
L_8024E6EC:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8024E6EC
L_8024E6F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024E6F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E6D0; } // 8024E6F4
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E6F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E6FC
  if (crb(c,2)) { goto L_8024E930; } // 8024E700
  c->r[3]=c->r[30]+0x00000504u; // 8024E704
  c->r[4]=0u+0x00000620u; // 8024E708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E70C
  c->lr=0x8024E714u; f_80245CC0(c); // 8024E710
  c->r[3]=c->r[30]+0x00000060u; // 8024E714
  c->r[4]=0u+0x00000620u; // 8024E718
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E720
  c->lr=0x8024E728u; f_80245D40(c); // 8024E724
  goto L_8024E930; // 8024E728
L_8024E72C:;
  c->r[0]=R32(c->r[29]+0x000002DCu); // 8024E72C
  cmps(c,0,(int32_t)c->r[0],0); // 8024E730
  if (!crb(c,2)) { goto L_8024E75C; } // 8024E734
  c->r[3]=c->r[30]+0x000005E0u; // 8024E738
  c->r[4]=0u+0x00000623u; // 8024E73C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E740
  c->lr=0x8024E748u; f_80245CC0(c); // 8024E744
  c->r[3]=c->r[30]+0x00000060u; // 8024E748
  c->r[4]=0u+0x00000623u; // 8024E74C
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E754
  c->lr=0x8024E75Cu; f_80245D40(c); // 8024E758
L_8024E75C:;
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024E75C
  c->lr=0x8024E764u; f_8024E1A0(c); // 8024E760
  cmps(c,0,(int32_t)c->r[3],0); // 8024E764
  if (!crb(c,2)) { goto L_8024E790; } // 8024E768
  c->r[3]=c->r[30]+0x0000061Cu; // 8024E76C
  c->r[4]=0u+0x00000624u; // 8024E770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E774
  c->lr=0x8024E77Cu; f_80245CC0(c); // 8024E778
  c->r[3]=c->r[30]+0x00000060u; // 8024E77C
  c->r[4]=0u+0x00000624u; // 8024E780
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E784
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E788
  c->lr=0x8024E790u; f_80245D40(c); // 8024E78C
L_8024E790:;
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8024E790
  c->r[3]=R32(c->r[3]+0x00000000u); // 8024E794
  goto L_8024E7B4; // 8024E798
  c->r[0]=c->r[0]|0x00000000u; // 8024E79C
L_8024E7A0:;
  cmpu(c,0,c->r[29],c->r[3]); // 8024E7A0
  if (!crb(c,2)) { goto L_8024E7B0; } // 8024E7A4
  c->r[0]=0u+0x00000001u; // 8024E7A8
  goto L_8024E7C0; // 8024E7AC
L_8024E7B0:;
  c->r[3]=R32(c->r[3]+0x000002E0u); // 8024E7B0
L_8024E7B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024E7B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E7A0; } // 8024E7B8
  c->r[0]=0u+0x00000000u; // 8024E7BC
L_8024E7C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024E7C0
  if (!crb(c,2)) { goto L_8024E7EC; } // 8024E7C4
  c->r[3]=c->r[30]+0x00000660u; // 8024E7C8
  c->r[4]=0u+0x00000625u; // 8024E7CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E7D0
  c->lr=0x8024E7D8u; f_80245CC0(c); // 8024E7D4
  c->r[3]=c->r[30]+0x00000060u; // 8024E7D8
  c->r[4]=0u+0x00000625u; // 8024E7DC
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E7E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E7E4
  c->lr=0x8024E7ECu; f_80245D40(c); // 8024E7E8
L_8024E7EC:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 8024E7EC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E7F0
  if (crb(c,1)) { goto L_8024E864; } // 8024E7F4
  c->r[5]=R32(c->r[29]+0x000002D4u); // 8024E7F8
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8024E7FC
  goto L_8024E828; // 8024E800
  c->r[0]=c->r[0]|0x00000000u; // 8024E804
L_8024E808:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024E808
  cmps(c,0,(int32_t)c->r[3],0); // 8024E80C
  if (crb(c,2)) { goto L_8024E824; } // 8024E810
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8024E814
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E818
  if (!crb(c,0)) { goto L_8024E824; } // 8024E81C
  c->r[5]=c->r[0]|c->r[0]; // 8024E820
L_8024E824:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 8024E824
L_8024E828:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024E828
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E808; } // 8024E82C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E830
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024E834
  if (crb(c,2)) { goto L_8024E894; } // 8024E838
  c->r[3]=c->r[30]+0x00000504u; // 8024E83C
  c->r[4]=0u+0x00000628u; // 8024E840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E844
  c->lr=0x8024E84Cu; f_80245CC0(c); // 8024E848
  c->r[3]=c->r[30]+0x00000060u; // 8024E84C
  c->r[4]=0u+0x00000628u; // 8024E850
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E854
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E858
  c->lr=0x8024E860u; f_80245D40(c); // 8024E85C
  goto L_8024E894; // 8024E860
L_8024E864:;
  c->r[0]=R32(c->r[29]+0x000002D0u); // 8024E864
  cmps(c,0,(int32_t)c->r[0],32); // 8024E868
  if (crb(c,2)) { goto L_8024E894; } // 8024E86C
  c->r[3]=c->r[30]+0x000006A4u; // 8024E870
  c->r[4]=0u+0x0000062Cu; // 8024E874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E878
  c->lr=0x8024E880u; f_80245CC0(c); // 8024E87C
  c->r[3]=c->r[30]+0x00000060u; // 8024E880
  c->r[4]=0u+0x0000062Cu; // 8024E884
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E88C
  c->lr=0x8024E894u; f_80245D40(c); // 8024E890
L_8024E894:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E894
  c->lr=0x8024E89Cu; f_8024B400(c); // 8024E898
  cmps(c,0,(int32_t)c->r[3],0); // 8024E89C
  if (crb(c,2)) { goto L_8024E930; } // 8024E8A0
  c->r[3]=c->r[30]+0x000006E0u; // 8024E8A4
  c->r[4]=0u+0x0000062Eu; // 8024E8A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E8AC
  c->lr=0x8024E8B4u; f_80245CC0(c); // 8024E8B0
  c->r[3]=c->r[30]+0x00000060u; // 8024E8B4
  c->r[4]=0u+0x0000062Eu; // 8024E8B8
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E8C0
  c->lr=0x8024E8C8u; f_80245D40(c); // 8024E8C4
  goto L_8024E930; // 8024E8C8
L_8024E8CC:;
  c->r[0]=R32(c->r[29]+0x000002F4u); // 8024E8CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024E8D0
  if (!crb(c,2)) { goto L_8024E8E4; } // 8024E8D4
  c->r[0]=R32(c->r[29]+0x000002F8u); // 8024E8D8
  cmps(c,0,(int32_t)c->r[0],0); // 8024E8DC
  if (crb(c,2)) { goto L_8024E930; } // 8024E8E0
L_8024E8E4:;
  c->r[3]=c->r[30]+0x00000720u; // 8024E8E4
  c->r[4]=0u+0x00000632u; // 8024E8E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E8EC
  c->lr=0x8024E8F4u; f_80245CC0(c); // 8024E8F0
  c->r[3]=c->r[30]+0x00000060u; // 8024E8F4
  c->r[4]=0u+0x00000632u; // 8024E8F8
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E8FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E900
  c->lr=0x8024E908u; f_80245D40(c); // 8024E904
  goto L_8024E930; // 8024E908
L_8024E90C:;
  c->r[5]=c->r[29]|c->r[29]; // 8024E90C
  c->r[3]=c->r[30]+0x00000788u; // 8024E910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E914
  c->lr=0x8024E91Cu; f_80245CC0(c); // 8024E918
  c->r[3]=c->r[30]+0x00000060u; // 8024E91C
  c->r[4]=0u+0x00000638u; // 8024E920
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E928
  c->lr=0x8024E930u; f_80245D40(c); // 8024E92C
L_8024E930:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E930
  c->lr=0x8024E938u; f_8024B440(c); // 8024E934
  cmps(c,0,(int32_t)c->r[3],0); // 8024E938
  if (!crb(c,2)) { goto L_8024E964; } // 8024E93C
  c->r[3]=c->r[30]+0x000007D0u; // 8024E940
  c->r[4]=0u+0x0000063Du; // 8024E944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E948
  c->lr=0x8024E950u; f_80245CC0(c); // 8024E94C
  c->r[3]=c->r[30]+0x00000060u; // 8024E950
  c->r[4]=0u+0x0000063Du; // 8024E954
  c->r[5]=c->r[13]+0xFFFF915Cu; // 8024E958
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024E95C
  c->lr=0x8024E964u; f_80245D40(c); // 8024E960
L_8024E964:;
  c->r[29]=R32(c->r[29]+0x000002FCu); // 8024E964
L_8024E968:;
  cmps(c,0,(int32_t)c->r[29],0); // 8024E968
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E3E0; } // 8024E96C
  c->r[3]=c->r[27]|c->r[27]; // 8024E970
  c->lr=0x8024E978u; f_80249500(c); // 8024E974
  c->r[11]=c->r[1]+0x00000020u; // 8024E978
  c->r[3]=c->r[28]|c->r[28]; // 8024E97C
  c->lr=0x8024E984u; f_800C2E94(c); // 8024E980
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024E984
  c->lr=c->r[0]; // 8024E988
  c->r[1]=c->r[1]+0x00000020u; // 8024E98C
  return; // 8024E990
}

// SleepAlarmHandler
void f_8024E9A0(Ctx* __restrict c) {
  trace_call(0x8024E9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E9A0
  c->r[0]=c->lr; // 8024E9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024E9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024E9AC
  c->r[31]=c->r[3]|c->r[3]; // 8024E9B0
  c->lr=0x8024E9B8u; f_80244450(c); // 8024E9B4
  c->r[0]=R16(c->r[3]+0x000002C8u); // 8024E9B8
  cmps(c,0,(int32_t)c->r[0],0); // 8024E9BC
  if (!crb(c,2)) { goto L_8024E9CC; } // 8024E9C0
  c->r[0]=0u+0x00000000u; // 8024E9C4
  goto L_8024E9F8; // 8024E9C8
L_8024E9CC:;
  c->r[4]=0u+0x80000000u; // 8024E9CC
  c->r[4]=R32(c->r[4]+0x000000DCu); // 8024E9D0
  goto L_8024E9EC; // 8024E9D4
L_8024E9D8:;
  cmpu(c,0,c->r[3],c->r[4]); // 8024E9D8
  if (!crb(c,2)) { goto L_8024E9E8; } // 8024E9DC
  c->r[0]=0u+0x00000001u; // 8024E9E0
  goto L_8024E9F8; // 8024E9E4
L_8024E9E8:;
  c->r[4]=R32(c->r[4]+0x000002FCu); // 8024E9E8
L_8024E9EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8024E9EC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024E9D8; } // 8024E9F0
  c->r[0]=0u+0x00000000u; // 8024E9F4
L_8024E9F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024E9F8
  if (crb(c,2)) { goto L_8024EA0C; } // 8024E9FC
  c->r[3]=c->r[31]|c->r[31]; // 8024EA00
  c->lr=0x8024EA08u; f_80244450(c); // 8024EA04
  c->lr=0x8024EA0Cu; f_8024DA90(c); // 8024EA08
L_8024EA0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024EA0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024EA10
  c->lr=c->r[0]; // 8024EA14
  c->r[1]=c->r[1]+0x00000010u; // 8024EA18
  return; // 8024EA1C
}

// OSSleepTicks
void f_8024EA20(Ctx* __restrict c) {
  trace_call(0x8024EA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EA20
  c->r[0]=c->lr; // 8024EA24
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024EA28
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8024EA2C
  W32(c->r[1]+0x00000048u,c->r[30]); // 8024EA30
  W32(c->r[1]+0x00000044u,c->r[29]); // 8024EA34
  c->r[29]=c->r[3]|c->r[3]; // 8024EA38
  W32(c->r[1]+0x00000040u,c->r[28]); // 8024EA3C
  c->r[28]=c->r[4]|c->r[4]; // 8024EA40
  c->lr=0x8024EA48u; f_802494C0(c); // 8024EA44
  c->r[4]=0u+0x80000000u; // 8024EA48
  c->r[30]=c->r[3]|c->r[3]; // 8024EA4C
  c->r[31]=R32(c->r[4]+0x000000E4u); // 8024EA50
  cmps(c,0,(int32_t)c->r[31],0); // 8024EA54
  if (!crb(c,2)) { goto L_8024EA64; } // 8024EA58
  c->lr=0x8024EA60u; f_80249500(c); // 8024EA5C
  goto L_8024EAA8; // 8024EA60
L_8024EA64:;
  c->r[3]=c->r[1]+0x00000008u; // 8024EA64
  c->lr=0x8024EA6Cu; f_80243CB0(c); // 8024EA68
  c->r[4]=c->r[31]|c->r[31]; // 8024EA6C
  c->r[3]=c->r[1]+0x00000008u; // 8024EA70
  c->lr=0x8024EA78u; f_80244460(c); // 8024EA74
  c->r[7]=0u+0x80250000u; // 8024EA78
  c->r[6]=c->r[28]|c->r[28]; // 8024EA7C
  c->r[5]=c->r[29]|c->r[29]; // 8024EA80
  c->r[3]=c->r[1]+0x00000008u; // 8024EA84
  c->r[7]=c->r[7]+0xFFFFE9A0u; // 8024EA88
  c->lr=0x8024EA90u; f_80243F10(c); // 8024EA8C
  c->r[3]=c->r[31]|c->r[31]; // 8024EA90
  c->lr=0x8024EA98u; f_8024DD30(c); // 8024EA94
  c->r[3]=c->r[1]+0x00000008u; // 8024EA98
  c->lr=0x8024EAA0u; f_80244010(c); // 8024EA9C
  c->r[3]=c->r[30]|c->r[30]; // 8024EAA0
  c->lr=0x8024EAA8u; f_80249500(c); // 8024EAA4
L_8024EAA8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8024EAA8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8024EAAC
  c->r[30]=R32(c->r[1]+0x00000048u); // 8024EAB0
  c->r[29]=R32(c->r[1]+0x00000044u); // 8024EAB4
  c->r[28]=R32(c->r[1]+0x00000040u); // 8024EAB8
  c->lr=c->r[0]; // 8024EABC
  c->r[1]=c->r[1]+0x00000050u; // 8024EAC0
  return; // 8024EAC4
}

// OSGetTime
void f_8024EAD0(Ctx* __restrict c) {
  trace_call(0x8024EAD0u);
L_8024EAD0:;
  c->r[3]=mftb(c,269); // 8024EAD0
  c->r[4]=mftb(c,268); // 8024EAD4
  c->r[5]=mftb(c,269); // 8024EAD8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 8024EADC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024EAD0; } // 8024EAE0
  return; // 8024EAE4
}

// OSGetTick
void f_8024EAF0(Ctx* __restrict c) {
  trace_call(0x8024EAF0u);
  c->r[3]=mftb(c,268); // 8024EAF0
  return; // 8024EAF4
}

// __OSGetSystemTime
void f_8024EB00(Ctx* __restrict c) {
  trace_call(0x8024EB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EB00
  c->r[0]=c->lr; // 8024EB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024EB08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024EB0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024EB10
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024EB14
  c->lr=0x8024EB1Cu; f_802494C0(c); // 8024EB18
  c->r[31]=c->r[3]|c->r[3]; // 8024EB1C
  c->lr=0x8024EB24u; f_8024EAD0(c); // 8024EB20
  c->r[6]=0u+0x80000000u; // 8024EB24
  c->r[5]=R32(c->r[6]+0x000030DCu); // 8024EB28
  c->r[0]=R32(c->r[6]+0x000030D8u); // 8024EB2C
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 8024EB30
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 8024EB34
  c->r[3]=c->r[31]|c->r[31]; // 8024EB38
  c->lr=0x8024EB40u; f_80249500(c); // 8024EB3C
  c->r[4]=c->r[29]|c->r[29]; // 8024EB40
  c->r[3]=c->r[30]|c->r[30]; // 8024EB44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024EB48
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024EB4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024EB50
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024EB54
  c->lr=c->r[0]; // 8024EB58
  c->r[1]=c->r[1]+0x00000020u; // 8024EB5C
  return; // 8024EB60
}

// __OSTimeToSystemTime
void f_8024EB70(Ctx* __restrict c) {
  trace_call(0x8024EB70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EB70
  c->r[0]=c->lr; // 8024EB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024EB78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024EB7C
  c->r[31]=c->r[3]|c->r[3]; // 8024EB80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024EB84
  c->r[30]=c->r[4]|c->r[4]; // 8024EB88
  c->lr=0x8024EB90u; f_802494C0(c); // 8024EB8C
  c->r[5]=0u+0x80000000u; // 8024EB90
  c->r[4]=R32(c->r[5]+0x000030DCu); // 8024EB94
  c->r[0]=R32(c->r[5]+0x000030D8u); // 8024EB98
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 8024EB9C
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 8024EBA0
  c->lr=0x8024EBA8u; f_80249500(c); // 8024EBA4
  c->r[3]=c->r[31]|c->r[31]; // 8024EBA8
  c->r[4]=c->r[30]|c->r[30]; // 8024EBAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024EBB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024EBB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024EBB8
  c->lr=c->r[0]; // 8024EBBC
  c->r[1]=c->r[1]+0x00000010u; // 8024EBC0
  return; // 8024EBC4
}

// OSTicksToCalendarTime
void f_8024EBD0(Ctx* __restrict c) {
  trace_call(0x8024EBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EBD0
  c->r[0]=c->lr; // 8024EBD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024EBD8
  c->r[11]=c->r[1]+0x00000020u; // 8024EBDC
  c->lr=0x8024EBE4u; f_800C2E48(c); // 8024EBE0
  c->r[6]=0u+0x80000000u; // 8024EBE4
  c->r[29]=c->r[5]|c->r[5]; // 8024EBE8
  c->r[0]=R32(c->r[6]+0x000000F8u); // 8024EBEC
  c->r[28]=c->r[3]|c->r[3]; // 8024EBF0
  c->r[27]=c->r[4]|c->r[4]; // 8024EBF4
  c->r[5]=0u+0x00000000u; // 8024EBF8
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024EBFC
  c->r[6]=c->r[26]|c->r[26]; // 8024EC00
  c->lr=0x8024EC08u; f_800C31B8(c); // 8024EC04
  c->r[7]=0u+0x00000000u; // 8024EC08
  c->r[0]=c->r[3]^0x80000000u; // 8024EC0C
  c->r[6]=c->r[7]^0x80000000u; // 8024EC10
  c->r[30]=c->r[4]|c->r[4]; // 8024EC14
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 8024EC18
  c->r[31]=c->r[3]|c->r[3]; // 8024EC1C
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8024EC20
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8024EC24
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8024EC28
  if (crb(c,2)) { goto L_8024EC38; } // 8024EC2C
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 8024EC30
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 8024EC34
L_8024EC38:;
  c->r[4]=0u+0x431C0000u; // 8024EC38
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8024EC3C
  c->r[0]=c->r[4]+0xFFFFDE83u; // 8024EC40
  c->r[5]=0u+0x00000000u; // 8024EC44
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 8024EC48
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8024EC4C
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 8024EC50
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 8024EC54
  c->lr=0x8024EC5Cu; f_800C2F9C(c); // 8024EC58
  c->r[6]=0u+0x000003E8u; // 8024EC5C
  c->r[5]=0u+0x00000000u; // 8024EC60
  c->lr=0x8024EC68u; f_800C31B8(c); // 8024EC64
  W32(c->r[29]+0x00000024u,c->r[4]); // 8024EC68
  c->r[26]=0u+0x80000000u; // 8024EC6C
  c->r[4]=0u+0x10620000u; // 8024EC70
  c->r[3]=c->r[31]|c->r[31]; // 8024EC74
  c->r[0]=R32(c->r[26]+0x000000F8u); // 8024EC78
  c->r[6]=c->r[4]+0x00004DD3u; // 8024EC7C
  c->r[4]=c->r[30]|c->r[30]; // 8024EC80
  c->r[5]=0u+0x00000000u; // 8024EC84
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024EC88
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 8024EC8C
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 8024EC90
  c->lr=0x8024EC98u; f_800C2F9C(c); // 8024EC94
  c->r[6]=0u+0x000003E8u; // 8024EC98
  c->r[5]=0u+0x00000000u; // 8024EC9C
  c->lr=0x8024ECA4u; f_800C31B8(c); // 8024ECA0
  W32(c->r[29]+0x00000020u,c->r[4]); // 8024ECA4
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 8024ECA8
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 8024ECAC
  c->r[5]=0u+0x00000000u; // 8024ECB0
  c->r[0]=R32(c->r[26]+0x000000F8u); // 8024ECB4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024ECB8
  c->lr=0x8024ECC0u; f_800C2F9C(c); // 8024ECBC
  c->r[27]=0u+0x00010000u; // 8024ECC0
  c->r[28]=c->r[4]|c->r[4]; // 8024ECC4
  c->r[26]=c->r[3]|c->r[3]; // 8024ECC8
  c->r[5]=0u+0x00000000u; // 8024ECCC
  c->r[6]=c->r[27]+0x00005180u; // 8024ECD0
  c->lr=0x8024ECD8u; f_800C2F9C(c); // 8024ECD4
  c->r[3]=0u+0x000B0000u; // 8024ECD8
  c->r[6]=c->r[27]+0x00005180u; // 8024ECDC
  c->r[0]=c->r[3]+0x00002575u; // 8024ECE0
  c->r[5]=0u+0x00000000u; // 8024ECE4
  c->r[31]=addc(c,c->r[4],c->r[0],0); // 8024ECE8
  c->r[3]=c->r[26]|c->r[26]; // 8024ECEC
  c->r[4]=c->r[28]|c->r[28]; // 8024ECF0
  c->lr=0x8024ECF8u; f_800C31B8(c); // 8024ECF4
  cmps(c,0,(int32_t)c->r[4],0); // 8024ECF8
  if (!crb(c,0)) { goto L_8024ED0C; } // 8024ECFC
  c->r[4]=c->r[4]+0x00010000u; // 8024ED00
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8024ED04
  c->r[4]=c->r[4]+0x00005180u; // 8024ED08
L_8024ED0C:;
  c->r[6]=0u+0x92490000u; // 8024ED0C
  c->r[5]=0u+0xB38D0000u; // 8024ED10
  c->r[7]=c->r[31]+0x00000006u; // 8024ED14
  c->r[3]=0u+0x51EC0000u; // 8024ED18
  c->r[0]=c->r[5]+0xFFFFF9B1u; // 8024ED1C
  c->r[6]=c->r[6]+0x00002493u; // 8024ED20
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[7])>>32); // 8024ED24
  c->r[9]=c->r[3]+0xFFFF851Fu; // 8024ED28
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 8024ED2C
  c->r[3]=c->r[5]+c->r[7]; // 8024ED30
  c->r[3]=sraw(c,c->r[3],2); // 8024ED34
  c->r[5]=rotl(c->r[3],1)&0x00000001u; // 8024ED38
  c->r[0]=c->r[0]+c->r[31]; // 8024ED3C
  c->r[3]=c->r[3]+c->r[5]; // 8024ED40
  c->r[0]=sraw(c,c->r[0],8); // 8024ED44
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)7); // 8024ED48
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024ED4C
  c->r[3]=c->r[0]+c->r[3]; // 8024ED50
  c->r[0]=c->r[7]-c->r[5]; // 8024ED54
  W32(c->r[29]+0x00000018u,c->r[0]); // 8024ED58
  c->r[10]=(uint32_t)((int32_t)c->r[3]*(int32_t)365); // 8024ED5C
  goto L_8024ED70; // 8024ED60
  c->r[0]=c->r[0]|0x00000000u; // 8024ED64
L_8024ED68:;
  c->r[10]=c->r[10]+0xFFFFFE93u; // 8024ED68
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8024ED6C
L_8024ED70:;
  cmps(c,0,(int32_t)c->r[3],1); // 8024ED70
  if (crb(c,0)) { goto L_8024EDB0; } // 8024ED74
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8024ED78
  c->r[0]=c->r[3]+0x00000003u; // 8024ED7C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[5])>>32); // 8024ED80
  c->r[7]=sraw(c,c->r[5],7); // 8024ED84
  c->r[5]=sraw(c,c->r[5],5); // 8024ED88
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8024ED8C
  c->r[0]=sraw(c,c->r[0],2); // 8024ED90
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8024ED94
  c->r[5]=c->r[5]+c->r[6]; // 8024ED98
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8024ED9C
  c->r[6]=c->r[7]+c->r[8]; // 8024EDA0
  c->r[0]=c->r[0]-c->r[5]; // 8024EDA4
  c->r[0]=c->r[6]+c->r[0]; // 8024EDA8
  goto L_8024EDB4; // 8024EDAC
L_8024EDB0:;
  c->r[0]=0u+0x00000000u; // 8024EDB0
L_8024EDB4:;
  c->r[7]=c->r[10]+c->r[0]; // 8024EDB4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 8024EDB8
  if (crb(c,0)) { IRQCHK(c); goto L_8024ED68; } // 8024EDBC
  c->r[0]=rotl(c->r[3],30)&0xC0000000u; // 8024EDC0
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 8024EDC4
  c->r[5]=c->r[0]-c->r[6]; // 8024EDC8
  W32(c->r[29]+0x00000014u,c->r[3]); // 8024EDCC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFFu; // 8024EDD0
  c->r[0]=c->r[31]-c->r[7]; // 8024EDD4
  c->r[5]=c->r[5]+c->r[6]; cr0(c,c->r[5]); // 8024EDD8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8024EDDC
  c->r[7]=0u+0x00000000u; // 8024EDE0
  if (!crb(c,2)) { goto L_8024EE0C; } // 8024EDE4
  c->r[5]=0u+0x51EC0000u; // 8024EDE8
  c->r[5]=c->r[5]+0xFFFF851Fu; // 8024EDEC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 8024EDF0
  c->r[5]=sraw(c,c->r[5],5); // 8024EDF4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8024EDF8
  c->r[5]=c->r[5]+c->r[6]; // 8024EDFC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 8024EE00
  c->r[5]=c->r[3]-c->r[5]; cr0(c,c->r[5]); // 8024EE04
  if (!crb(c,2)) { goto L_8024EE30; } // 8024EE08
L_8024EE0C:;
  c->r[5]=0u+0x51EC0000u; // 8024EE0C
  c->r[5]=c->r[5]+0xFFFF851Fu; // 8024EE10
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 8024EE14
  c->r[5]=sraw(c,c->r[5],7); // 8024EE18
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8024EE1C
  c->r[5]=c->r[5]+c->r[6]; // 8024EE20
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)400); // 8024EE24
  c->r[3]=c->r[3]-c->r[5]; cr0(c,c->r[3]); // 8024EE28
  if (!crb(c,2)) { goto L_8024EE34; } // 8024EE2C
L_8024EE30:;
  c->r[7]=0u+0x00000001u; // 8024EE30
L_8024EE34:;
  cmps(c,0,(int32_t)c->r[7],0); // 8024EE34
  c->r[7]=0u+0x803B0000u; // 8024EE38
  c->r[7]=c->r[7]+0xFFFFF478u; // 8024EE3C
  if (crb(c,2)) { goto L_8024EE4C; } // 8024EE40
  c->r[7]=0u+0x803B0000u; // 8024EE44
  c->r[7]=c->r[7]+0xFFFFF4A8u; // 8024EE48
L_8024EE4C:;
  c->r[6]=0u+0x0000000Cu; // 8024EE4C
  c->r[3]=0u+0x00000030u; // 8024EE50
  c->r[0]=c->r[0]|0x00000000u; // 8024EE54
L_8024EE58:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8024EE58
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8024EE5C
  c->r[5]=R32(c->r[7]+c->r[3]); // 8024EE60
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8024EE64
  if (crb(c,0)) { IRQCHK(c); goto L_8024EE58; } // 8024EE68
  c->r[5]=0u+0x88890000u; // 8024EE6C
  W32(c->r[29]+0x00000010u,c->r[6]); // 8024EE70
  c->r[6]=c->r[5]+0xFFFF8889u; // 8024EE74
  c->r[11]=c->r[1]+0x00000020u; // 8024EE78
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[4])>>32); // 8024EE7C
  c->r[3]=R32(c->r[7]+c->r[3]); // 8024EE80
  c->r[3]=c->r[0]-c->r[3]; // 8024EE84
  c->r[0]=c->r[3]+0x00000001u; // 8024EE88
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8024EE8C
  c->r[3]=c->r[5]+c->r[4]; // 8024EE90
  c->r[0]=sraw(c,c->r[3],5); // 8024EE94
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8024EE98
  c->r[9]=c->r[0]+c->r[5]; // 8024EE9C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[9])>>32); // 8024EEA0
  c->r[0]=c->r[0]+c->r[9]; // 8024EEA4
  c->r[7]=sraw(c,c->r[0],5); // 8024EEA8
  c->r[5]=sraw(c,c->r[0],5); // 8024EEAC
  c->r[0]=sraw(c,c->r[3],5); // 8024EEB0
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8024EEB4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8024EEB8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024EEBC
  c->r[7]=c->r[7]+c->r[8]; // 8024EEC0
  c->r[0]=c->r[0]+c->r[3]; // 8024EEC4
  c->r[5]=c->r[5]+c->r[6]; // 8024EEC8
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 8024EECC
  W32(c->r[29]+0x00000008u,c->r[7]); // 8024EED0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 8024EED4
  c->r[3]=c->r[9]-c->r[3]; // 8024EED8
  W32(c->r[29]+0x00000004u,c->r[3]); // 8024EEDC
  c->r[0]=c->r[4]-c->r[0]; // 8024EEE0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8024EEE4
  c->lr=0x8024EEECu; f_800C2E94(c); // 8024EEE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024EEEC
  c->lr=c->r[0]; // 8024EEF0
  c->r[1]=c->r[1]+0x00000020u; // 8024EEF4
  return; // 8024EEF8
}

// OSUTF8to32
void f_8024EF00(Ctx* __restrict c) {
  trace_call(0x8024EF00u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 8024EF00
  cmps(c,0,(int32_t)c->r[6],0); // 8024EF04
  if (crb(c,2)) { goto L_8024EF10; } // 8024EF08
  c->r[3]=c->r[3]+0x00000001u; // 8024EF0C
L_8024EF10:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 8024EF10
  if (!crb(c,2)) { goto L_8024EF20; } // 8024EF14
  c->r[7]=0u+0x00000000u; // 8024EF18
  goto L_8024EF70; // 8024EF1C
L_8024EF20:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 8024EF20
  cmpu(c,0,c->r[0],0x000000C0u); // 8024EF24
  if (!crb(c,2)) { goto L_8024EF38; } // 8024EF28
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 8024EF2C
  c->r[7]=0u+0x00000001u; // 8024EF30
  goto L_8024EF70; // 8024EF34
L_8024EF38:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 8024EF38
  cmpu(c,0,c->r[0],0x000000E0u); // 8024EF3C
  if (!crb(c,2)) { goto L_8024EF50; } // 8024EF40
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 8024EF44
  c->r[7]=0u+0x00000002u; // 8024EF48
  goto L_8024EF70; // 8024EF4C
L_8024EF50:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 8024EF50
  cmpu(c,0,c->r[0],0x000000F0u); // 8024EF54
  if (!crb(c,2)) { goto L_8024EF68; } // 8024EF58
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8024EF5C
  c->r[7]=0u+0x00000003u; // 8024EF60
  goto L_8024EF70; // 8024EF64
L_8024EF68:;
  c->r[3]=0u+0x00000000u; // 8024EF68
  return; // 8024EF6C
L_8024EF70:;
  c->ctr=c->r[7]; // 8024EF70
  cmpu(c,0,c->r[7],0x00000000u); // 8024EF74
  if (!crb(c,1)) { goto L_8024EFAC; } // 8024EF78
  c->r[0]=c->r[0]|0x00000000u; // 8024EF7C
L_8024EF80:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 8024EF80
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 8024EF84
  c->r[3]=c->r[3]+0x00000001u; // 8024EF88
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 8024EF8C
  cmpu(c,0,c->r[0],0x00000080u); // 8024EF90
  if (crb(c,2)) { goto L_8024EFA0; } // 8024EF94
  c->r[3]=0u+0x00000000u; // 8024EF98
  return; // 8024EF9C
L_8024EFA0:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 8024EFA0
  c->r[6]=c->r[6]|c->r[0]; // 8024EFA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024EF80; } // 8024EFA8
L_8024EFAC:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 8024EFAC
  if (crb(c,1)) { goto L_8024EFC4; } // 8024EFB0
  cmps(c,0,(int32_t)c->r[7],0); // 8024EFB4
  if (crb(c,2)) { goto L_8024EFF4; } // 8024EFB8
  c->r[3]=0u+0x00000000u; // 8024EFBC
  return; // 8024EFC0
L_8024EFC4:;
  cmpu(c,0,c->r[6],0x000007FFu); // 8024EFC4
  if (crb(c,1)) { goto L_8024EFDC; } // 8024EFC8
  cmpu(c,0,c->r[7],0x00000001u); // 8024EFCC
  if (crb(c,2)) { goto L_8024EFF4; } // 8024EFD0
  c->r[3]=0u+0x00000000u; // 8024EFD4
  return; // 8024EFD8
L_8024EFDC:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 8024EFDC
  if (crb(c,1)) { goto L_8024EFF4; } // 8024EFE0
  cmpu(c,0,c->r[7],0x00000002u); // 8024EFE4
  if (crb(c,2)) { goto L_8024EFF4; } // 8024EFE8
  c->r[3]=0u+0x00000000u; // 8024EFEC
  return; // 8024EFF0
L_8024EFF4:;
  cmpu(c,0,c->r[6],0x0000D800u); // 8024EFF4
  if (crb(c,0)) { goto L_8024F00C; } // 8024EFF8
  cmpu(c,0,c->r[6],0x0000DFFFu); // 8024EFFC
  if (crb(c,1)) { goto L_8024F00C; } // 8024F000
  c->r[3]=0u+0x00000000u; // 8024F004
  return; // 8024F008
L_8024F00C:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 8024F00C
  return; // 8024F010
}

// OSUTF16to32
void f_8024F020(Ctx* __restrict c) {
  trace_call(0x8024F020u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 8024F020
  cmps(c,0,(int32_t)c->r[5],0); // 8024F024
  if (crb(c,2)) { goto L_8024F030; } // 8024F028
  c->r[3]=c->r[3]+0x00000002u; // 8024F02C
L_8024F030:;
  cmpu(c,0,c->r[5],0x0000D800u); // 8024F030
  if (crb(c,0)) { goto L_8024F040; } // 8024F034
  cmpu(c,0,c->r[5],0x0000DFFFu); // 8024F038
  if (!crb(c,1)) { goto L_8024F048; } // 8024F03C
L_8024F040:;
  c->r[6]=c->r[5]|c->r[5]; // 8024F040
  goto L_8024F088; // 8024F044
L_8024F048:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 8024F048
  if (crb(c,1)) { goto L_8024F080; } // 8024F04C
  c->r[0]=R16(c->r[3]+0x00000000u); // 8024F050
  c->r[3]=c->r[3]+0x00000002u; // 8024F054
  cmpu(c,0,c->r[0],0x0000DC00u); // 8024F058
  if (crb(c,0)) { goto L_8024F078; } // 8024F05C
  cmpu(c,0,c->r[0],0x0000DFFFu); // 8024F060
  if (crb(c,1)) { goto L_8024F078; } // 8024F064
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 8024F068
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 8024F06C
  c->r[6]=c->r[6]+0x00010000u; // 8024F070
  goto L_8024F088; // 8024F074
L_8024F078:;
  c->r[3]=0u+0x00000000u; // 8024F078
  return; // 8024F07C
L_8024F080:;
  c->r[3]=0u+0x00000000u; // 8024F080
  return; // 8024F084
L_8024F088:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 8024F088
  return; // 8024F08C
}

// OSUTF32toANSI
void f_8024F090(Ctx* __restrict c) {
  trace_call(0x8024F090u);
  cmpu(c,0,c->r[3],0x000000FFu); // 8024F090
  if (!crb(c,1)) { goto L_8024F0A0; } // 8024F094
  c->r[3]=0u+0x00000000u; // 8024F098
  return; // 8024F09C
L_8024F0A0:;
  cmpu(c,0,c->r[3],0x00000080u); // 8024F0A0
  if (crb(c,0)) { goto L_8024F0B0; } // 8024F0A4
  cmpu(c,0,c->r[3],0x0000009Fu); // 8024F0A8
  if (!crb(c,1)) { goto L_8024F0B8; } // 8024F0AC
L_8024F0B0:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8024F0B0
  return; // 8024F0B4
L_8024F0B8:;
  cmpu(c,0,c->r[3],0x00000152u); // 8024F0B8
  if (crb(c,0)) { goto L_8024F104; } // 8024F0BC
  cmpu(c,0,c->r[3],0x00002122u); // 8024F0C0
  if (crb(c,1)) { goto L_8024F104; } // 8024F0C4
  c->r[4]=0u+0x803B0000u; // 8024F0C8
  c->r[0]=0u+0x00000020u; // 8024F0CC
  c->r[4]=c->r[4]+0xFFFFF4D8u; // 8024F0D0
  c->r[5]=0u+0x00000000u; // 8024F0D4
  c->ctr=c->r[0]; // 8024F0D8
  c->r[0]=c->r[0]|0x00000000u; // 8024F0DC
L_8024F0E0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 8024F0E0
  cmpu(c,0,c->r[3],c->r[0]); // 8024F0E4
  if (!crb(c,2)) { goto L_8024F0F8; } // 8024F0E8
  c->r[0]=c->r[5]+0x00000080u; // 8024F0EC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8024F0F0
  return; // 8024F0F4
L_8024F0F8:;
  c->r[4]=c->r[4]+0x00000002u; // 8024F0F8
  c->r[5]=c->r[5]+0x00000001u; // 8024F0FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024F0E0; } // 8024F100
L_8024F104:;
  c->r[3]=0u+0x00000000u; // 8024F104
  return; // 8024F108
}

// OSUTF32toSJIS
void f_8024F110(Ctx* __restrict c) {
  trace_call(0x8024F110u);
  c->r[0]=0u+0x00010000u; // 8024F110
  cmpu(c,0,c->r[3],c->r[0]); // 8024F114
  if (crb(c,0)) { goto L_8024F124; } // 8024F118
  c->r[3]=0u+0x00000000u; // 8024F11C
  return; // 8024F120
L_8024F124:;
  c->r[4]=0u+0x803C0000u; // 8024F124
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 8024F128
  c->r[4]=c->r[4]+0xFFFFAF18u; // 8024F12C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024F130
  cmps(c,0,(int32_t)c->r[4],0); // 8024F134
  if (crb(c,2)) { goto L_8024F148; } // 8024F138
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 8024F13C
  c->r[3]=R16(c->r[4]+c->r[0]); // 8024F140
  return; // 8024F144
L_8024F148:;
  c->r[3]=0u+0x00000000u; // 8024F148
  return; // 8024F14C
}

// __OSGetIPCBufferHi
void f_8024F150(Ctx* __restrict c) {
  trace_call(0x8024F150u);
  c->r[3]=R32(c->r[13]+0xFFFF9E58u); // 8024F150
  return; // 8024F154
}

// __OSGetIPCBufferLo
void f_8024F160(Ctx* __restrict c) {
  trace_call(0x8024F160u);
  c->r[3]=R32(c->r[13]+0xFFFF9160u); // 8024F160
  return; // 8024F164
}

// __OSInitIPCBuffer
void f_8024F170(Ctx* __restrict c) {
  trace_call(0x8024F170u);
  c->r[3]=0u+0x80000000u; // 8024F170
  c->r[0]=R32(c->r[3]+0x00003130u); // 8024F174
  W32(c->r[13]+0xFFFF9160u,c->r[0]); // 8024F178
  c->r[0]=R32(c->r[3]+0x00003134u); // 8024F17C
  W32(c->r[13]+0xFFFF9E58u,c->r[0]); // 8024F180
  return; // 8024F184
}

// OSSetResetCallback
void f_8024F190(Ctx* __restrict c) {
  trace_call(0x8024F190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F190
  c->r[0]=c->lr; // 8024F194
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024F19C
  c->r[31]=c->r[3]|c->r[3]; // 8024F1A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024F1A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024F1A8
  c->lr=0x8024F1B0u; f_802494C0(c); // 8024F1AC
  cmps(c,0,(int32_t)c->r[31],0); // 8024F1B0
  c->r[29]=R32(c->r[13]+0xFFFF9E7Cu); // 8024F1B4
  c->r[30]=c->r[3]|c->r[3]; // 8024F1B8
  if (crb(c,2)) { goto L_8024F1C8; } // 8024F1BC
  W32(c->r[13]+0xFFFF9E7Cu,c->r[31]); // 8024F1C0
  goto L_8024F1D4; // 8024F1C4
L_8024F1C8:;
  c->r[3]=0u+0x80250000u; // 8024F1C8
  c->r[3]=c->r[3]+0xFFFFF720u; // 8024F1CC
  W32(c->r[13]+0xFFFF9E7Cu,c->r[3]); // 8024F1D0
L_8024F1D4:;
  c->r[0]=R32(c->r[13]+0xFFFF9E70u); // 8024F1D4
  cmps(c,0,(int32_t)c->r[0],0); // 8024F1D8
  if (!crb(c,2)) { goto L_8024F23C; } // 8024F1DC
  c->lr=0x8024F1E4u; f_802494C0(c); // 8024F1E0
  c->r[31]=c->r[3]|c->r[3]; // 8024F1E4
  c->r[5]=0u+0x804A0000u; // 8024F1E8
  c->r[7]=0u+0x804A0000u; // 8024F1EC
  c->r[9]=0u+0x80250000u; // 8024F1F0
  c->r[3]=R32(c->r[13]+0xFFFF9E6Cu); // 8024F1F4
  c->r[5]=c->r[5]+0xFFFFD260u; // 8024F1F8
  c->r[7]=c->r[7]+0xFFFFD280u; // 8024F1FC
  c->r[9]=c->r[9]+0xFFFFF740u; // 8024F200
  c->r[4]=0u+0x00001000u; // 8024F204
  c->r[6]=0u+0x00000020u; // 8024F208
  c->r[8]=0u+0x00000020u; // 8024F20C
  c->r[10]=0u+0x00000000u; // 8024F210
  c->lr=0x8024F218u; f_80231EA0(c); // 8024F214
  cmps(c,0,(int32_t)c->r[3],0); // 8024F218
  if (!crb(c,2)) { goto L_8024F22C; } // 8024F21C
  c->r[0]=0u+0x00000001u; // 8024F220
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F224
  goto L_8024F234; // 8024F228
L_8024F22C:;
  c->r[0]=0u+0x00000000u; // 8024F22C
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F230
L_8024F234:;
  c->r[3]=c->r[31]|c->r[31]; // 8024F234
  c->lr=0x8024F23Cu; f_80249500(c); // 8024F238
L_8024F23C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024F23C
  c->lr=0x8024F244u; f_80249500(c); // 8024F240
  c->r[3]=0u+0x80250000u; // 8024F244
  c->r[3]=c->r[3]+0xFFFFF720u; // 8024F248
  cmpu(c,0,c->r[29],c->r[3]); // 8024F24C
  if (!crb(c,2)) { goto L_8024F25C; } // 8024F250
  c->r[3]=0u+0x00000000u; // 8024F254
  goto L_8024F260; // 8024F258
L_8024F25C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024F25C
L_8024F260:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F260
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024F264
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024F268
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024F26C
  c->lr=c->r[0]; // 8024F270
  c->r[1]=c->r[1]+0x00000020u; // 8024F274
  return; // 8024F278
}

// OSSetPowerCallback
void f_8024F280(Ctx* __restrict c) {
  trace_call(0x8024F280u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F280
  c->r[0]=c->lr; // 8024F284
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F288
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024F28C
  c->r[31]=c->r[3]|c->r[3]; // 8024F290
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024F294
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024F298
  c->lr=0x8024F2A0u; f_802494C0(c); // 8024F29C
  cmps(c,0,(int32_t)c->r[31],0); // 8024F2A0
  c->r[29]=R32(c->r[13]+0xFFFF9E78u); // 8024F2A4
  c->r[30]=c->r[3]|c->r[3]; // 8024F2A8
  if (crb(c,2)) { goto L_8024F2B8; } // 8024F2AC
  W32(c->r[13]+0xFFFF9E78u,c->r[31]); // 8024F2B0
  goto L_8024F2C4; // 8024F2B4
L_8024F2B8:;
  c->r[3]=0u+0x80250000u; // 8024F2B8
  c->r[3]=c->r[3]+0xFFFFF730u; // 8024F2BC
  W32(c->r[13]+0xFFFF9E78u,c->r[3]); // 8024F2C0
L_8024F2C4:;
  c->r[0]=R32(c->r[13]+0xFFFF9E70u); // 8024F2C4
  cmps(c,0,(int32_t)c->r[0],0); // 8024F2C8
  if (!crb(c,2)) { goto L_8024F32C; } // 8024F2CC
  c->lr=0x8024F2D4u; f_802494C0(c); // 8024F2D0
  c->r[31]=c->r[3]|c->r[3]; // 8024F2D4
  c->r[5]=0u+0x804A0000u; // 8024F2D8
  c->r[7]=0u+0x804A0000u; // 8024F2DC
  c->r[9]=0u+0x80250000u; // 8024F2E0
  c->r[3]=R32(c->r[13]+0xFFFF9E6Cu); // 8024F2E4
  c->r[5]=c->r[5]+0xFFFFD260u; // 8024F2E8
  c->r[7]=c->r[7]+0xFFFFD280u; // 8024F2EC
  c->r[9]=c->r[9]+0xFFFFF740u; // 8024F2F0
  c->r[4]=0u+0x00001000u; // 8024F2F4
  c->r[6]=0u+0x00000020u; // 8024F2F8
  c->r[8]=0u+0x00000020u; // 8024F2FC
  c->r[10]=0u+0x00000000u; // 8024F300
  c->lr=0x8024F308u; f_80231EA0(c); // 8024F304
  cmps(c,0,(int32_t)c->r[3],0); // 8024F308
  if (!crb(c,2)) { goto L_8024F31C; } // 8024F30C
  c->r[0]=0u+0x00000001u; // 8024F310
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F314
  goto L_8024F324; // 8024F318
L_8024F31C:;
  c->r[0]=0u+0x00000000u; // 8024F31C
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F320
L_8024F324:;
  c->r[3]=c->r[31]|c->r[31]; // 8024F324
  c->lr=0x8024F32Cu; f_80249500(c); // 8024F328
L_8024F32C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024F32C
  c->lr=0x8024F334u; f_80249500(c); // 8024F330
  c->r[3]=0u+0x80250000u; // 8024F334
  c->r[3]=c->r[3]+0xFFFFF730u; // 8024F338
  cmpu(c,0,c->r[29],c->r[3]); // 8024F33C
  if (!crb(c,2)) { goto L_8024F34C; } // 8024F340
  c->r[3]=0u+0x00000000u; // 8024F344
  goto L_8024F350; // 8024F348
L_8024F34C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024F34C
L_8024F350:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024F354
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024F358
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024F35C
  c->lr=c->r[0]; // 8024F360
  c->r[1]=c->r[1]+0x00000020u; // 8024F364
  return; // 8024F368
}

// __OSInitSTM
void f_8024F370(Ctx* __restrict c) {
  trace_call(0x8024F370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F370
  c->r[0]=c->lr; // 8024F374
  c->r[4]=0u+0x80250000u; // 8024F378
  c->r[3]=0u+0x80250000u; // 8024F37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F380
  c->r[4]=c->r[4]+0xFFFFF730u; // 8024F384
  c->r[3]=c->r[3]+0xFFFFF720u; // 8024F388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F38C
  c->r[31]=0u+0x00000000u; // 8024F390
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024F394
  c->r[0]=R32(c->r[13]+0xFFFF9E64u); // 8024F398
  W32(c->r[13]+0xFFFF9E78u,c->r[4]); // 8024F39C
  cmps(c,0,(int32_t)c->r[0],0); // 8024F3A0
  W32(c->r[13]+0xFFFF9E7Cu,c->r[3]); // 8024F3A4
  W32(c->r[13]+0xFFFF9E60u,c->r[31]); // 8024F3A8
  if (crb(c,2)) { goto L_8024F3B8; } // 8024F3AC
  c->r[3]=0u+0x00000001u; // 8024F3B0
  goto L_8024F470; // 8024F3B4
L_8024F3B8:;
  c->r[3]=0u+0x803C0000u; // 8024F3B8
  W32(c->r[13]+0xFFFF9E74u,c->r[31]); // 8024F3BC
  c->r[4]=0u+0x00000000u; // 8024F3C0
  c->r[3]=c->r[3]+0xFFFFB318u; // 8024F3C4
  c->lr=0x8024F3CCu; f_80231700(c); // 8024F3C8
  cmps(c,0,(int32_t)c->r[3],0); // 8024F3CC
  W32(c->r[13]+0xFFFF9E68u,c->r[3]); // 8024F3D0
  if (!crb(c,0)) { goto L_8024F3E4; } // 8024F3D4
  W32(c->r[13]+0xFFFF9E64u,c->r[31]); // 8024F3D8
  c->r[3]=0u+0x00000000u; // 8024F3DC
  goto L_8024F470; // 8024F3E0
L_8024F3E4:;
  c->r[3]=0u+0x803C0000u; // 8024F3E4
  c->r[4]=0u+0x00000000u; // 8024F3E8
  c->r[3]=c->r[3]+0xFFFFB32Cu; // 8024F3EC
  c->lr=0x8024F3F4u; f_80231700(c); // 8024F3F0
  cmps(c,0,(int32_t)c->r[3],0); // 8024F3F4
  W32(c->r[13]+0xFFFF9E6Cu,c->r[3]); // 8024F3F8
  if (!crb(c,0)) { goto L_8024F40C; } // 8024F3FC
  W32(c->r[13]+0xFFFF9E64u,c->r[31]); // 8024F400
  c->r[3]=0u+0x00000000u; // 8024F404
  goto L_8024F470; // 8024F408
L_8024F40C:;
  c->lr=0x8024F410u; f_802494C0(c); // 8024F40C
  c->r[30]=c->r[3]|c->r[3]; // 8024F410
  c->r[5]=0u+0x804A0000u; // 8024F414
  c->r[7]=0u+0x804A0000u; // 8024F418
  c->r[9]=0u+0x80250000u; // 8024F41C
  c->r[3]=R32(c->r[13]+0xFFFF9E6Cu); // 8024F420
  c->r[5]=c->r[5]+0xFFFFD260u; // 8024F424
  c->r[7]=c->r[7]+0xFFFFD280u; // 8024F428
  c->r[9]=c->r[9]+0xFFFFF740u; // 8024F42C
  c->r[4]=0u+0x00001000u; // 8024F430
  c->r[6]=0u+0x00000020u; // 8024F434
  c->r[8]=0u+0x00000020u; // 8024F438
  c->r[10]=0u+0x00000000u; // 8024F43C
  c->lr=0x8024F444u; f_80231EA0(c); // 8024F440
  cmps(c,0,(int32_t)c->r[3],0); // 8024F444
  if (!crb(c,2)) { goto L_8024F458; } // 8024F448
  c->r[0]=0u+0x00000001u; // 8024F44C
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F450
  goto L_8024F45C; // 8024F454
L_8024F458:;
  W32(c->r[13]+0xFFFF9E70u,c->r[31]); // 8024F458
L_8024F45C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024F45C
  c->lr=0x8024F464u; f_80249500(c); // 8024F460
  c->r[0]=0u+0x00000001u; // 8024F464
  W32(c->r[13]+0xFFFF9E64u,c->r[0]); // 8024F468
  c->r[3]=0u+0x00000001u; // 8024F46C
L_8024F470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F474
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024F478
  c->lr=c->r[0]; // 8024F47C
  c->r[1]=c->r[1]+0x00000010u; // 8024F480
  return; // 8024F484
}

// __OSShutdownToSBY
void f_8024F490(Ctx* __restrict c) {
  trace_call(0x8024F490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F490
  c->r[0]=c->lr; // 8024F494
  c->r[3]=0u+0xCC000000u; // 8024F498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F49C
  c->r[0]=0u+0x00000000u; // 8024F4A0
  W16(c->r[3]+0x00002002u,c->r[0]); // 8024F4A4
  c->r[0]=R32(c->r[13]+0xFFFF9E64u); // 8024F4A8
  cmps(c,0,(int32_t)c->r[0],0); // 8024F4AC
  if (!crb(c,2)) { goto L_8024F4D0; } // 8024F4B0
  c->r[3]=0u+0x803C0000u; // 8024F4B4
  c->r[5]=0u+0x803C0000u; // 8024F4B8
  c->r[3]=c->r[3]+0xFFFFB340u; // 8024F4BC
  c->r[4]=0u+0x0000015Cu; // 8024F4C0
  c->r[5]=c->r[5]+0xFFFFB34Cu; // 8024F4C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F4C8
  c->lr=0x8024F4D0u; f_80245D40(c); // 8024F4CC
L_8024F4D0:;
  c->r[4]=0u+0x804A0000u; // 8024F4D0
  c->r[0]=0u+0x00000000u; // 8024F4D4
  c->r[7]=0u+0x804A0000u; // 8024F4D8
  W32(c->r[4]+0xFFFFD2A0u,c->r[0]); // 8024F4DC
  c->r[5]=c->r[4]+0xFFFFD2A0u; // 8024F4E0
  c->r[3]=R32(c->r[13]+0xFFFF9E68u); // 8024F4E4
  c->r[7]=c->r[7]+0xFFFFD2C0u; // 8024F4E8
  c->r[4]=0u+0x00002003u; // 8024F4EC
  c->r[6]=0u+0x00000020u; // 8024F4F0
  c->r[8]=0u+0x00000020u; // 8024F4F4
  c->lr=0x8024F4FCu; f_80231FE0(c); // 8024F4F8
  c->lr=0x8024F500u; f_802494C0(c); // 8024F4FC
  c->lr=0x8024F504u; f_80244F50(c); // 8024F500
  c->r[0]=c->r[0]|0x00000000u; // 8024F504
L_8024F508:;
  IRQCHK(c); goto L_8024F508; // 8024F508
}

// __OSHotReset
void f_8024F510(Ctx* __restrict c) {
  trace_call(0x8024F510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F510
  c->r[0]=c->lr; // 8024F514
  c->r[3]=0u+0xCC000000u; // 8024F518
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F51C
  c->r[0]=0u+0x00000000u; // 8024F520
  W16(c->r[3]+0x00002002u,c->r[0]); // 8024F524
  c->r[0]=R32(c->r[13]+0xFFFF9E64u); // 8024F528
  cmps(c,0,(int32_t)c->r[0],0); // 8024F52C
  if (!crb(c,2)) { goto L_8024F550; } // 8024F530
  c->r[3]=0u+0x803C0000u; // 8024F534
  c->r[5]=0u+0x803C0000u; // 8024F538
  c->r[3]=c->r[3]+0xFFFFB340u; // 8024F53C
  c->r[4]=0u+0x0000019Cu; // 8024F540
  c->r[5]=c->r[5]+0xFFFFB384u; // 8024F544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F548
  c->lr=0x8024F550u; f_80245D40(c); // 8024F54C
L_8024F550:;
  c->r[5]=0u+0x804A0000u; // 8024F550
  c->r[7]=0u+0x804A0000u; // 8024F554
  c->r[3]=R32(c->r[13]+0xFFFF9E68u); // 8024F558
  c->r[5]=c->r[5]+0xFFFFD2A0u; // 8024F55C
  c->r[7]=c->r[7]+0xFFFFD2C0u; // 8024F560
  c->r[4]=0u+0x00002001u; // 8024F564
  c->r[6]=0u+0x00000020u; // 8024F568
  c->r[8]=0u+0x00000020u; // 8024F56C
  c->lr=0x8024F574u; f_80231FE0(c); // 8024F570
  c->lr=0x8024F578u; f_802494C0(c); // 8024F574
  c->lr=0x8024F57Cu; f_80244F50(c); // 8024F578
  c->r[0]=c->r[0]|0x00000000u; // 8024F57C
L_8024F580:;
  IRQCHK(c); goto L_8024F580; // 8024F580
}

// __OSSetVIForceDimming
void f_8024F590(Ctx* __restrict c) {
  trace_call(0x8024F590u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F590
  c->r[0]=c->lr; // 8024F594
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F598
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024F59C
  c->r[31]=c->r[5]|c->r[5]; // 8024F5A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024F5A4
  c->r[30]=c->r[4]|c->r[4]; // 8024F5A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024F5AC
  c->r[29]=c->r[3]|c->r[3]; // 8024F5B0
  c->r[0]=R32(c->r[13]+0xFFFF9E64u); // 8024F5B4
  cmps(c,0,(int32_t)c->r[0],0); // 8024F5B8
  if (!crb(c,2)) { goto L_8024F5C8; } // 8024F5BC
  c->r[3]=0u+0xFFFFFFF6u; // 8024F5C0
  goto L_8024F66C; // 8024F5C4
L_8024F5C8:;
  c->lr=0x8024F5CCu; f_802494C0(c); // 8024F5C8
  c->r[0]=R32(c->r[13]+0xFFFF9E74u); // 8024F5CC
  cmps(c,0,(int32_t)c->r[0],0); // 8024F5D0
  if (crb(c,2)) { goto L_8024F5E4; } // 8024F5D4
  c->lr=0x8024F5DCu; f_80249500(c); // 8024F5D8
  c->r[3]=0u+0x00000000u; // 8024F5DC
  goto L_8024F66C; // 8024F5E0
L_8024F5E4:;
  c->r[0]=0u+0x00000001u; // 8024F5E4
  W32(c->r[13]+0xFFFF9E74u,c->r[0]); // 8024F5E8
  c->lr=0x8024F5F0u; f_80249500(c); // 8024F5EC
  c->r[4]=rotl(c->r[29],7)&0xFFFFFF80u; // 8024F5F0
  c->r[3]=0u+0x804A0000u; // 8024F5F4
  c->r[5]=c->r[3]+0xFFFFD2E0u; // 8024F5F8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8024F5FC
  c->r[12]=0u+0x00000000u; // 8024F600
  c->r[4]=c->r[4]|c->r[31]; // 8024F604
  c->r[4]=c->r[4]|c->r[0]; // 8024F608
  W32(c->r[3]+0xFFFFD2E0u,c->r[4]); // 8024F60C
  c->r[11]=0u+0xFFFFFFFFu; // 8024F610
  c->r[0]=0u+0xFFFF0000u; // 8024F614
  c->r[7]=0u+0x804A0000u; // 8024F618
  c->r[9]=0u+0x80250000u; // 8024F61C
  c->r[3]=R32(c->r[13]+0xFFFF9E68u); // 8024F620
  c->r[7]=c->r[7]+0xFFFFD300u; // 8024F624
  W32(c->r[5]+0x00000004u,c->r[12]); // 8024F628
  c->r[9]=c->r[9]+0xFFFFF710u; // 8024F62C
  c->r[4]=0u+0x00005001u; // 8024F630
  c->r[6]=0u+0x00000020u; // 8024F634
  W32(c->r[5]+0x00000008u,c->r[12]); // 8024F638
  c->r[8]=0u+0x00000020u; // 8024F63C
  c->r[10]=0u+0x00000000u; // 8024F640
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 8024F644
  W32(c->r[5]+0x00000010u,c->r[12]); // 8024F648
  W32(c->r[5]+0x00000014u,c->r[11]); // 8024F64C
  W32(c->r[5]+0x00000018u,c->r[0]); // 8024F650
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 8024F654
  c->lr=0x8024F65Cu; f_80231EA0(c); // 8024F658
  cmps(c,0,(int32_t)c->r[3],0); // 8024F65C
  if (crb(c,2)) { goto L_8024F668; } // 8024F660
  goto L_8024F66C; // 8024F664
L_8024F668:;
  c->r[3]=0u+0x00000001u; // 8024F668
L_8024F66C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F66C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024F670
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024F674
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024F678
  c->lr=c->r[0]; // 8024F67C
  c->r[1]=c->r[1]+0x00000020u; // 8024F680
  return; // 8024F684
}

// __OSUnRegisterStateEvent
void f_8024F690(Ctx* __restrict c) {
  trace_call(0x8024F690u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F690
  c->r[0]=c->lr; // 8024F694
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F698
  c->r[0]=R32(c->r[13]+0xFFFF9E70u); // 8024F69C
  cmps(c,0,(int32_t)c->r[0],0); // 8024F6A0
  if (!crb(c,2)) { goto L_8024F6B0; } // 8024F6A4
  c->r[3]=0u+0x00000000u; // 8024F6A8
  goto L_8024F6F8; // 8024F6AC
L_8024F6B0:;
  c->r[0]=R32(c->r[13]+0xFFFF9E64u); // 8024F6B0
  cmps(c,0,(int32_t)c->r[0],0); // 8024F6B4
  if (!crb(c,2)) { goto L_8024F6C4; } // 8024F6B8
  c->r[3]=0u+0xFFFFFFFAu; // 8024F6BC
  goto L_8024F6F8; // 8024F6C0
L_8024F6C4:;
  c->r[5]=0u+0x804A0000u; // 8024F6C4
  c->r[7]=0u+0x804A0000u; // 8024F6C8
  c->r[3]=R32(c->r[13]+0xFFFF9E68u); // 8024F6CC
  c->r[5]=c->r[5]+0xFFFFD2A0u; // 8024F6D0
  c->r[7]=c->r[7]+0xFFFFD2C0u; // 8024F6D4
  c->r[4]=0u+0x00003002u; // 8024F6D8
  c->r[6]=0u+0x00000020u; // 8024F6DC
  c->r[8]=0u+0x00000020u; // 8024F6E0
  c->lr=0x8024F6E8u; f_80231FE0(c); // 8024F6E4
  cmps(c,0,(int32_t)c->r[3],0); // 8024F6E8
  if (!crb(c,2)) { goto L_8024F6F8; } // 8024F6EC
  c->r[0]=0u+0x00000000u; // 8024F6F0
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F6F4
L_8024F6F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F6F8
  c->lr=c->r[0]; // 8024F6FC
  c->r[1]=c->r[1]+0x00000010u; // 8024F700
  return; // 8024F704
}

// __OSVIDimReplyHandler
void f_8024F710(Ctx* __restrict c) {
  trace_call(0x8024F710u);
  c->r[0]=0u+0x00000000u; // 8024F710
  W32(c->r[13]+0xFFFF9E74u,c->r[0]); // 8024F714
  c->r[3]=0u+0x00000000u; // 8024F718
  return; // 8024F71C
}

// __OSDefaultResetCallback
void f_8024F720(Ctx* __restrict c) {
  trace_call(0x8024F720u);
  return; // 8024F720
}

// __OSDefaultPowerCallback
void f_8024F730(Ctx* __restrict c) {
  trace_call(0x8024F730u);
  return; // 8024F730
}

// __OSStateEventHandler
void f_8024F740(Ctx* __restrict c) {
  trace_call(0x8024F740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F740
  c->r[0]=c->lr; // 8024F744
  cmps(c,0,(int32_t)c->r[3],0); // 8024F748
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F74C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F750
  if (crb(c,2)) { goto L_8024F774; } // 8024F754
  c->r[3]=0u+0x803C0000u; // 8024F758
  c->r[5]=0u+0x803C0000u; // 8024F75C
  c->r[3]=c->r[3]+0xFFFFB340u; // 8024F760
  c->r[4]=0u+0x00000334u; // 8024F764
  c->r[5]=c->r[5]+0xFFFFB3BCu; // 8024F768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F76C
  c->lr=0x8024F774u; f_80245D40(c); // 8024F770
L_8024F774:;
  c->r[3]=0u+0x804A0000u; // 8024F774
  c->r[0]=0u+0x00000000u; // 8024F778
  c->r[3]=R32(c->r[3]+0xFFFFD280u); // 8024F77C
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F780
  c->r[0]=c->r[3]+0xFFFE0000u; // 8024F784
  cmpu(c,0,c->r[0],0x00000000u); // 8024F788
  if (!crb(c,2)) { goto L_8024F844; } // 8024F78C
  c->r[3]=0u+0xCC000000u; // 8024F790
  c->r[0]=R32(c->r[3]+0x00003000u); // 8024F794
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 8024F798
  if (!crb(c,2)) { goto L_8024F7A8; } // 8024F79C
  c->r[0]=0u+0x00000001u; // 8024F7A0
  goto L_8024F7AC; // 8024F7A4
L_8024F7A8:;
  c->r[0]=0u+0x00000000u; // 8024F7A8
L_8024F7AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024F7AC
  if (crb(c,2)) { goto L_8024F7E8; } // 8024F7B0
  c->lr=0x8024F7B8u; f_802494C0(c); // 8024F7B4
  c->r[12]=R32(c->r[13]+0xFFFF9E7Cu); // 8024F7B8
  c->r[4]=0u+0x80250000u; // 8024F7BC
  c->r[4]=c->r[4]+0xFFFFF720u; // 8024F7C0
  c->r[0]=0u+0x00000001u; // 8024F7C4
  c->r[31]=c->r[3]|c->r[3]; // 8024F7C8
  W32(c->r[13]+0xFFFF9E60u,c->r[0]); // 8024F7CC
  W32(c->r[13]+0xFFFF9E7Cu,c->r[4]); // 8024F7D0
  c->ctr=c->r[12]; // 8024F7D4
  if (true) { c->lr=0x8024F7DCu; dispatch(c,c->ctr); } // 8024F7D8
  c->r[3]=c->r[31]|c->r[31]; // 8024F7DC
  c->lr=0x8024F7E4u; f_80249500(c); // 8024F7E0
  c->lr=0x8024F7E8u; f_8025E630(c); // 8024F7E4
L_8024F7E8:;
  c->lr=0x8024F7ECu; f_802494C0(c); // 8024F7E8
  c->r[31]=c->r[3]|c->r[3]; // 8024F7EC
  c->r[5]=0u+0x804A0000u; // 8024F7F0
  c->r[7]=0u+0x804A0000u; // 8024F7F4
  c->r[9]=0u+0x80250000u; // 8024F7F8
  c->r[3]=R32(c->r[13]+0xFFFF9E6Cu); // 8024F7FC
  c->r[5]=c->r[5]+0xFFFFD260u; // 8024F800
  c->r[7]=c->r[7]+0xFFFFD280u; // 8024F804
  c->r[9]=c->r[9]+0xFFFFF740u; // 8024F808
  c->r[4]=0u+0x00001000u; // 8024F80C
  c->r[6]=0u+0x00000020u; // 8024F810
  c->r[8]=0u+0x00000020u; // 8024F814
  c->r[10]=0u+0x00000000u; // 8024F818
  c->lr=0x8024F820u; f_80231EA0(c); // 8024F81C
  cmps(c,0,(int32_t)c->r[3],0); // 8024F820
  if (!crb(c,2)) { goto L_8024F834; } // 8024F824
  c->r[0]=0u+0x00000001u; // 8024F828
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F82C
  goto L_8024F83C; // 8024F830
L_8024F834:;
  c->r[0]=0u+0x00000000u; // 8024F834
  W32(c->r[13]+0xFFFF9E70u,c->r[0]); // 8024F838
L_8024F83C:;
  c->r[3]=c->r[31]|c->r[31]; // 8024F83C
  c->lr=0x8024F844u; f_80249500(c); // 8024F840
L_8024F844:;
  c->r[3]=0u+0x804A0000u; // 8024F844
  c->r[0]=R32(c->r[3]+0xFFFFD280u); // 8024F848
  cmpu(c,0,c->r[0],0x00000800u); // 8024F84C
  if (!crb(c,2)) { goto L_8024F87C; } // 8024F850
  c->lr=0x8024F858u; f_802494C0(c); // 8024F854
  c->r[12]=R32(c->r[13]+0xFFFF9E78u); // 8024F858
  c->r[4]=0u+0x80250000u; // 8024F85C
  c->r[4]=c->r[4]+0xFFFFF730u; // 8024F860
  c->r[31]=c->r[3]|c->r[3]; // 8024F864
  W32(c->r[13]+0xFFFF9E78u,c->r[4]); // 8024F868
  c->ctr=c->r[12]; // 8024F86C
  if (true) { c->lr=0x8024F874u; dispatch(c,c->ctr); } // 8024F870
  c->r[3]=c->r[31]|c->r[31]; // 8024F874
  c->lr=0x8024F87Cu; f_80249500(c); // 8024F878
L_8024F87C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F87C
  c->r[3]=0u+0x00000000u; // 8024F880
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F884
  c->lr=c->r[0]; // 8024F888
  c->r[1]=c->r[1]+0x00000010u; // 8024F88C
  return; // 8024F890
}

// PlayRecordAlarmCallback
void f_8024F8A0(Ctx* __restrict c) {
  trace_call(0x8024F8A0u);
  c->r[3]=0u+0x00000000u; // 8024F8A0
  c->r[4]=0u+0x00000000u; // 8024F8A4
  f_8024F8B0(c); return; // 8024F8A8
}

// PlayRecordCallback
void f_8024F8B0(Ctx* __restrict c) {
  trace_call(0x8024F8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F8B0
  c->r[0]=c->lr; // 8024F8B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F8B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024F8BC
  c->r[31]=0u+0x804A0000u; // 8024F8C0
  c->r[31]=c->r[31]+0xFFFFD320u; // 8024F8C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024F8C8
  c->r[30]=0u+0x00000000u; // 8024F8CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8024F8D0
  c->r[0]=R32(c->r[13]+0xFFFF9E90u); // 8024F8D4
  W32(c->r[13]+0xFFFF9E9Cu,c->r[3]); // 8024F8D8
  cmps(c,0,(int32_t)c->r[0],0); // 8024F8DC
  if (crb(c,2)) { goto L_8024F8F0; } // 8024F8E0
  c->r[0]=0u+0x00000001u; // 8024F8E4
  W32(c->r[13]+0xFFFF9E94u,c->r[0]); // 8024F8E8
  goto L_8024FD48; // 8024F8EC
L_8024F8F0:;
  c->r[0]=R32(c->r[13]+0xFFFF9E98u); // 8024F8F0
  cmps(c,0,(int32_t)c->r[0],0); // 8024F8F4
  if (!crb(c,2)) { goto L_8024FB10; } // 8024F8F8
  c->r[0]=R32(c->r[13]+0xFFFF9168u); // 8024F8FC
  cmpu(c,0,c->r[0],0x00000006u); // 8024F900
  if (crb(c,1)) { goto L_8024FAFC; } // 8024F904
  c->r[4]=0u+0x803C0000u; // 8024F908
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024F90C
  c->r[4]=c->r[4]+0xFFFFB40Cu; // 8024F910
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024F914
  c->ctr=c->r[4]; // 8024F918
  if (true) { switch (c->ctr) { case 0x8024F920u: goto L_8024F920; case 0x8024F92Cu: goto L_8024F92C; case 0x8024F9A8u: goto L_8024F9A8; case 0x8024F9ECu: goto L_8024F9EC; case 0x8024FA14u: goto L_8024FA14; case 0x8024FA20u: goto L_8024FA20; case 0x8024FAA8u: goto L_8024FAA8; default: break; } dispatch(c,c->ctr); return; } // 8024F91C
L_8024F920:;
  c->r[0]=0u+0x00000001u; // 8024F920
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F924
  goto L_8024FB10; // 8024F928
L_8024F92C:;
  cmps(c,0,(int32_t)c->r[3],-10); // 8024F92C
  if (!crb(c,2)) { goto L_8024F968; } // 8024F930
  c->r[0]=0u+0x00000001u; // 8024F934
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 8024F938
  c->r[3]=c->r[31]+0x00000080u; // 8024F93C
  c->lr=0x8024F944u; f_80243CB0(c); // 8024F940
  c->r[3]=0u+0x80000000u; // 8024F944
  c->r[7]=0u+0x80250000u; // 8024F948
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8024F94C
  c->r[3]=c->r[31]+0x00000080u; // 8024F950
  c->r[7]=c->r[7]+0xFFFFF8A0u; // 8024F954
  c->r[5]=0u+0x00000000u; // 8024F958
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024F95C
  c->lr=0x8024F964u; f_80243F10(c); // 8024F960
  goto L_8024FD48; // 8024F964
L_8024F968:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024F968
  if (!crb(c,2)) { goto L_8024F994; } // 8024F96C
  c->r[0]=R32(c->r[13]+0xFFFF9E88u); // 8024F970
  cmps(c,0,(int32_t)c->r[0],0); // 8024F974
  if (!crb(c,2)) { goto L_8024F988; } // 8024F978
  c->r[0]=0u+0x00000002u; // 8024F97C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F980
  goto L_8024FB10; // 8024F984
L_8024F988:;
  c->r[0]=0u+0x00000004u; // 8024F988
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F98C
  goto L_8024FB10; // 8024F990
L_8024F994:;
  c->r[3]=0u+0x00000001u; // 8024F994
  c->r[0]=0u+0x00000007u; // 8024F998
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 8024F99C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F9A0
  goto L_8024FD48; // 8024F9A4
L_8024F9A8:;
  cmpu(c,0,c->r[3],0x00000080u); // 8024F9A8
  if (!crb(c,2)) { goto L_8024F9D8; } // 8024F9AC
  c->r[4]=c->r[31]+0x00000000u; // 8024F9B0
  c->r[5]=0u+0x00000001u; // 8024F9B4
  c->r[3]=R32(c->r[4]+0x00000060u); // 8024F9B8
  c->r[0]=0u+0x00000003u; // 8024F9BC
  c->r[4]=R32(c->r[4]+0x00000064u); // 8024F9C0
  W32(c->r[13]+0xFFFF9E88u,c->r[5]); // 8024F9C4
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 8024F9C8
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 8024F9CC
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F9D0
  goto L_8024FB10; // 8024F9D4
L_8024F9D8:;
  c->r[3]=0u+0x00000001u; // 8024F9D8
  c->r[0]=0u+0x00000006u; // 8024F9DC
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 8024F9E0
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F9E4
  goto L_8024FB10; // 8024F9E8
L_8024F9EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024F9EC
  if (!crb(c,2)) { goto L_8024FA00; } // 8024F9F0
  c->r[0]=0u+0x00000004u; // 8024F9F4
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024F9F8
  goto L_8024FB10; // 8024F9FC
L_8024FA00:;
  c->r[3]=0u+0x00000001u; // 8024FA00
  c->r[0]=0u+0x00000006u; // 8024FA04
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 8024FA08
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FA0C
  goto L_8024FB10; // 8024FA10
L_8024FA14:;
  c->r[0]=0u+0x00000005u; // 8024FA14
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FA18
  goto L_8024FB10; // 8024FA1C
L_8024FA20:;
  cmpu(c,0,c->r[3],0x00000080u); // 8024FA20
  if (!crb(c,2)) { goto L_8024FA94; } // 8024FA24
  c->lr=0x8024FA2Cu; f_8024EAD0(c); // 8024FA28
  c->r[5]=0u+0x80000000u; // 8024FA2C
  c->r[8]=R32(c->r[13]+0xFFFF9EA4u); // 8024FA30
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8024FA34
  c->r[5]=0u+0x0000012Cu; // 8024FA38
  c->r[9]=R32(c->r[13]+0xFFFF9EA0u); // 8024FA3C
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 8024FA40
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024FA44
  c->r[6]=0u+0x00000000u; // 8024FA48
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 8024FA4C
  c->r[4]=c->r[3]^0x80000000u; // 8024FA50
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 8024FA54
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 8024FA58
  c->r[0]=c->r[0]+c->r[3]; // 8024FA5C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 8024FA60
  c->r[0]=c->r[0]^0x80000000u; // 8024FA64
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 8024FA68
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8024FA6C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8024FA70
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8024FA74
  if (crb(c,2)) { goto L_8024FA88; } // 8024FA78
  c->r[0]=0u+0x00000006u; // 8024FA7C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FA80
  goto L_8024FB10; // 8024FA84
L_8024FA88:;
  c->r[0]=0u+0x00000003u; // 8024FA88
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FA8C
  goto L_8024FB10; // 8024FA90
L_8024FA94:;
  c->r[3]=0u+0x00000001u; // 8024FA94
  c->r[0]=0u+0x00000006u; // 8024FA98
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 8024FA9C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FAA0
  goto L_8024FB10; // 8024FAA4
L_8024FAA8:;
  c->r[0]=R32(c->r[13]+0xFFFF9E8Cu); // 8024FAA8
  cmps(c,0,(int32_t)c->r[0],0); // 8024FAAC
  if (crb(c,2)) { goto L_8024FAC0; } // 8024FAB0
  c->r[0]=0u+0x00000007u; // 8024FAB4
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FAB8
  goto L_8024FD48; // 8024FABC
L_8024FAC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024FAC0
  if (!crb(c,2)) { goto L_8024FAE8; } // 8024FAC4
  c->r[4]=c->r[31]+0x00000000u; // 8024FAC8
  c->r[0]=0u+0x00000001u; // 8024FACC
  c->r[3]=R32(c->r[4]+0x00000060u); // 8024FAD0
  c->r[4]=R32(c->r[4]+0x00000064u); // 8024FAD4
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 8024FAD8
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 8024FADC
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FAE0
  goto L_8024FB10; // 8024FAE4
L_8024FAE8:;
  c->r[3]=0u+0x00000007u; // 8024FAE8
  c->r[0]=0u+0x00000001u; // 8024FAEC
  W32(c->r[13]+0xFFFF9168u,c->r[3]); // 8024FAF0
  W32(c->r[13]+0xFFFF9E8Cu,c->r[0]); // 8024FAF4
  goto L_8024FD48; // 8024FAF8
L_8024FAFC:;
  c->r[3]=0u+0x00000007u; // 8024FAFC
  c->r[0]=0u+0x00000001u; // 8024FB00
  W32(c->r[13]+0xFFFF9168u,c->r[3]); // 8024FB04
  W32(c->r[13]+0xFFFF9E8Cu,c->r[0]); // 8024FB08
  goto L_8024FD48; // 8024FB0C
L_8024FB10:;
  c->r[0]=R32(c->r[13]+0xFFFF9168u); // 8024FB10
  c->r[29]=0u+0x00000000u; // 8024FB14
  W32(c->r[13]+0xFFFF9E98u,c->r[29]); // 8024FB18
  cmps(c,0,(int32_t)c->r[0],4); // 8024FB1C
  if (crb(c,2)) { goto L_8024FBC0; } // 8024FB20
  if (!crb(c,0)) { goto L_8024FB40; } // 8024FB24
  cmps(c,0,(int32_t)c->r[0],2); // 8024FB28
  if (crb(c,2)) { goto L_8024FB78; } // 8024FB2C
  if (!crb(c,0)) { goto L_8024FB9C; } // 8024FB30
  cmps(c,0,(int32_t)c->r[0],1); // 8024FB34
  if (!crb(c,0)) { goto L_8024FB50; } // 8024FB38
  goto L_8024FC70; // 8024FB3C
L_8024FB40:;
  cmps(c,0,(int32_t)c->r[0],6); // 8024FB40
  if (crb(c,2)) { goto L_8024FC58; } // 8024FB44
  if (!crb(c,0)) { goto L_8024FC70; } // 8024FB48
  goto L_8024FBFC; // 8024FB4C
L_8024FB50:;
  c->r[3]=0u+0x803C0000u; // 8024FB50
  c->r[6]=0u+0x80250000u; // 8024FB54
  c->r[3]=c->r[3]+0xFFFFB3E0u; // 8024FB58
  c->r[4]=c->r[31]+0x000000B0u; // 8024FB5C
  c->r[6]=c->r[6]+0xFFFFF8B0u; // 8024FB60
  c->r[7]=c->r[31]+0x0000013Cu; // 8024FB64
  c->r[5]=0u+0x00000003u; // 8024FB68
  c->lr=0x8024FB70u; f_80240910(c); // 8024FB6C
  c->r[30]=c->r[3]|c->r[3]; // 8024FB70
  goto L_8024FC70; // 8024FB74
L_8024FB78:;
  c->r[6]=0u+0x80250000u; // 8024FB78
  c->r[3]=c->r[31]+0x000000B0u; // 8024FB7C
  c->r[4]=c->r[31]+0x00000000u; // 8024FB80
  c->r[7]=c->r[31]+0x0000013Cu; // 8024FB84
  c->r[6]=c->r[6]+0xFFFFF8B0u; // 8024FB88
  c->r[5]=0u+0x00000080u; // 8024FB8C
  c->lr=0x8024FB94u; f_8023FA60(c); // 8024FB90
  c->r[30]=c->r[3]|c->r[3]; // 8024FB94
  goto L_8024FC70; // 8024FB98
L_8024FB9C:;
  c->r[6]=0u+0x80250000u; // 8024FB9C
  c->r[3]=c->r[31]+0x000000B0u; // 8024FBA0
  c->r[6]=c->r[6]+0xFFFFF8B0u; // 8024FBA4
  c->r[7]=c->r[31]+0x0000013Cu; // 8024FBA8
  c->r[4]=0u+0x00000000u; // 8024FBAC
  c->r[5]=0u+0x00000000u; // 8024FBB0
  c->lr=0x8024FBB8u; f_8023FBD0(c); // 8024FBB4
  c->r[30]=c->r[3]|c->r[3]; // 8024FBB8
  goto L_8024FC70; // 8024FBBC
L_8024FBC0:;
  c->r[3]=c->r[31]+0x00000080u; // 8024FBC0
  c->lr=0x8024FBC8u; f_80243CB0(c); // 8024FBC4
  c->r[3]=0u+0x80000000u; // 8024FBC8
  c->r[0]=0u+0x0000003Cu; // 8024FBCC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 8024FBD0
  c->r[7]=0u+0x80250000u; // 8024FBD4
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 8024FBD8
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8024FBDC
  c->r[3]=c->r[31]+0x00000080u; // 8024FBE0
  c->r[7]=c->r[7]+0xFFFFF8A0u; // 8024FBE4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8024FBE8
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 8024FBEC
  c->r[5]=c->r[0]+c->r[4]; // 8024FBF0
  c->lr=0x8024FBF8u; f_80243F10(c); // 8024FBF4
  goto L_8024FC70; // 8024FBF8
L_8024FBFC:;
  c->lr=0x8024FC00u; f_8024EAD0(c); // 8024FBFC
  c->r[5]=c->r[31]+0x00000000u; // 8024FC00
  c->r[0]=0u+0x0000001Fu; // 8024FC04
  W32(c->r[5]+0x00000064u,c->r[4]); // 8024FC08
  c->r[6]=c->r[5]+0x00000004u; // 8024FC0C
  c->r[4]=0u+0x00000000u; // 8024FC10
  W32(c->r[5]+0x00000060u,c->r[3]); // 8024FC14
  c->ctr=c->r[0]; // 8024FC18
  c->r[0]=c->r[0]|0x00000000u; // 8024FC1C
L_8024FC20:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8024FC20
  c->r[6]=c->r[6]+0x00000004u; // 8024FC24
  c->r[4]=c->r[4]+c->r[0]; // 8024FC28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024FC20; } // 8024FC2C
  c->r[6]=0u+0x80250000u; // 8024FC30
  W32(c->r[31]+0x00000000u,c->r[4]); // 8024FC34
  c->r[3]=c->r[31]+0x000000B0u; // 8024FC38
  c->r[4]=c->r[31]+0x00000000u; // 8024FC3C
  c->r[6]=c->r[6]+0xFFFFF8B0u; // 8024FC40
  c->r[7]=c->r[31]+0x0000013Cu; // 8024FC44
  c->r[5]=0u+0x00000080u; // 8024FC48
  c->lr=0x8024FC50u; f_8023FB50(c); // 8024FC4C
  c->r[30]=c->r[3]|c->r[3]; // 8024FC50
  goto L_8024FC70; // 8024FC54
L_8024FC58:;
  c->r[4]=0u+0x80250000u; // 8024FC58
  c->r[3]=c->r[31]+0x000000B0u; // 8024FC5C
  c->r[4]=c->r[4]+0xFFFFF8B0u; // 8024FC60
  c->r[5]=c->r[31]+0x0000013Cu; // 8024FC64
  c->lr=0x8024FC6Cu; f_80240B00(c); // 8024FC68
  c->r[30]=c->r[3]|c->r[3]; // 8024FC6C
L_8024FC70:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024FC70
  if (crb(c,2)) { goto L_8024FD44; } // 8024FC74
  cmps(c,0,(int32_t)c->r[30],-3); // 8024FC78
  if (!crb(c,2)) { goto L_8024FCB4; } // 8024FC7C
  c->r[3]=c->r[31]+0x00000080u; // 8024FC80
  c->lr=0x8024FC88u; f_80243CB0(c); // 8024FC84
  c->r[3]=0u+0x80000000u; // 8024FC88
  c->r[7]=0u+0x80250000u; // 8024FC8C
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8024FC90
  c->r[3]=c->r[31]+0x00000080u; // 8024FC94
  c->r[7]=c->r[7]+0xFFFFF8A0u; // 8024FC98
  c->r[5]=0u+0x00000000u; // 8024FC9C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024FCA0
  c->lr=0x8024FCA8u; f_80243F10(c); // 8024FCA4
  c->r[0]=0u+0x00000001u; // 8024FCA8
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 8024FCAC
  goto L_8024FD44; // 8024FCB0
L_8024FCB4:;
  c->r[0]=R32(c->r[13]+0xFFFF9168u); // 8024FCB4
  c->r[3]=0u+0x00000001u; // 8024FCB8
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 8024FCBC
  cmps(c,0,(int32_t)c->r[0],4); // 8024FCC0
  if (crb(c,2)) { goto L_8024FD3C; } // 8024FCC4
  if (!crb(c,0)) { goto L_8024FCD8; } // 8024FCC8
  cmps(c,0,(int32_t)c->r[0],2); // 8024FCCC
  if (!crb(c,0)) { goto L_8024FCE0; } // 8024FCD0
  goto L_8024FD3C; // 8024FCD4
L_8024FCD8:;
  cmps(c,0,(int32_t)c->r[0],6); // 8024FCD8
  if (!crb(c,0)) { goto L_8024FD3C; } // 8024FCDC
L_8024FCE0:;
  c->r[0]=0u+0x00000006u; // 8024FCE0
  c->r[4]=0u+0x80250000u; // 8024FCE4
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FCE8
  c->r[3]=c->r[31]+0x000000B0u; // 8024FCEC
  c->r[4]=c->r[4]+0xFFFFF8B0u; // 8024FCF0
  c->r[5]=c->r[31]+0x0000013Cu; // 8024FCF4
  c->lr=0x8024FCFCu; f_80240B00(c); // 8024FCF8
  cmps(c,0,(int32_t)c->r[3],-3); // 8024FCFC
  c->r[30]=c->r[3]|c->r[3]; // 8024FD00
  if (!crb(c,2)) { goto L_8024FD44; } // 8024FD04
  c->r[0]=0u+0x00000001u; // 8024FD08
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 8024FD0C
  c->r[3]=c->r[31]+0x00000080u; // 8024FD10
  c->lr=0x8024FD18u; f_80243CB0(c); // 8024FD14
  c->r[3]=0u+0x80000000u; // 8024FD18
  c->r[7]=0u+0x80250000u; // 8024FD1C
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8024FD20
  c->r[3]=c->r[31]+0x00000080u; // 8024FD24
  c->r[7]=c->r[7]+0xFFFFF8A0u; // 8024FD28
  c->r[5]=0u+0x00000000u; // 8024FD2C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024FD30
  c->lr=0x8024FD38u; f_80243F10(c); // 8024FD34
  goto L_8024FD44; // 8024FD38
L_8024FD3C:;
  c->r[0]=0u+0x00000007u; // 8024FD3C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FD40
L_8024FD44:;
  W32(c->r[13]+0xFFFF9E9Cu,c->r[30]); // 8024FD44
L_8024FD48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024FD48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024FD4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024FD50
  c->r[29]=R32(c->r[1]+0x00000014u); // 8024FD54
  c->lr=c->r[0]; // 8024FD58
  c->r[1]=c->r[1]+0x00000020u; // 8024FD5C
  return; // 8024FD60
}

// __OSStartPlayRecord
void f_8024FD70(Ctx* __restrict c) {
  trace_call(0x8024FD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024FD70
  c->r[0]=c->lr; // 8024FD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024FD78
  c->lr=0x8024FD80u; f_80241310(c); // 8024FD7C
  cmps(c,0,(int32_t)c->r[3],0); // 8024FD80
  if (!crb(c,2)) { goto L_8024FDB4; } // 8024FD84
  c->r[0]=0u+0x00000000u; // 8024FD88
  W32(c->r[13]+0xFFFF9E90u,c->r[0]); // 8024FD8C
  c->r[3]=0u+0x00000000u; // 8024FD90
  c->r[4]=0u+0x00000000u; // 8024FD94
  W32(c->r[13]+0xFFFF9E88u,c->r[0]); // 8024FD98
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FD9C
  W32(c->r[13]+0xFFFF9E8Cu,c->r[0]); // 8024FDA0
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 8024FDA4
  W32(c->r[13]+0xFFFF9E94u,c->r[0]); // 8024FDA8
  W32(c->r[13]+0xFFFF9E9Cu,c->r[0]); // 8024FDAC
  c->lr=0x8024FDB4u; f_8024F8B0(c); // 8024FDB0
L_8024FDB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024FDB4
  c->lr=c->r[0]; // 8024FDB8
  c->r[1]=c->r[1]+0x00000010u; // 8024FDBC
  return; // 8024FDC0
}

// __OSStopPlayRecord
void f_8024FDD0(Ctx* __restrict c) {
  trace_call(0x8024FDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024FDD0
  c->r[0]=c->lr; // 8024FDD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024FDD8
  c->r[11]=c->r[1]+0x00000020u; // 8024FDDC
  c->lr=0x8024FDE4u; f_800C2E48(c); // 8024FDE0
  c->r[29]=0u+0x804A0000u; // 8024FDE4
  c->r[29]=c->r[29]+0xFFFFD320u; // 8024FDE8
  c->lr=0x8024FDF0u; f_802494C0(c); // 8024FDEC
  c->r[0]=R32(c->r[13]+0xFFFF9168u); // 8024FDF0
  c->r[4]=0u+0x00000001u; // 8024FDF4
  W32(c->r[13]+0xFFFF9E90u,c->r[4]); // 8024FDF8
  c->r[26]=c->r[3]|c->r[3]; // 8024FDFC
  cmps(c,0,(int32_t)c->r[0],7); // 8024FE00
  if (crb(c,2)) { goto L_8024FE20; } // 8024FE04
  cmps(c,0,(int32_t)c->r[0],0); // 8024FE08
  if (crb(c,2)) { goto L_8024FE20; } // 8024FE0C
  cmps(c,0,(int32_t)c->r[0],9); // 8024FE10
  if (crb(c,2)) { goto L_8024FE20; } // 8024FE14
  cmps(c,0,(int32_t)c->r[0],8); // 8024FE18
  if (!crb(c,2)) { goto L_8024FE2C; } // 8024FE1C
L_8024FE20:;
  c->r[3]=c->r[26]|c->r[26]; // 8024FE20
  c->lr=0x8024FE28u; f_80249500(c); // 8024FE24
  goto L_8024FF9C; // 8024FE28
L_8024FE2C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8024FE2C
  if (!crb(c,2)) { goto L_8024FE98; } // 8024FE30
  c->r[3]=c->r[29]+0x00000080u; // 8024FE34
  c->lr=0x8024FE3Cu; f_80244010(c); // 8024FE38
  c->r[3]=c->r[26]|c->r[26]; // 8024FE3C
  c->lr=0x8024FE44u; f_80249500(c); // 8024FE40
  c->lr=0x8024FE48u; f_8024EAD0(c); // 8024FE44
  c->r[5]=c->r[29]+0x00000000u; // 8024FE48
  c->r[0]=0u+0x0000001Fu; // 8024FE4C
  W32(c->r[5]+0x00000064u,c->r[4]); // 8024FE50
  c->r[6]=c->r[5]+0x00000004u; // 8024FE54
  c->r[4]=0u+0x00000000u; // 8024FE58
  W32(c->r[5]+0x00000060u,c->r[3]); // 8024FE5C
  c->ctr=c->r[0]; // 8024FE60
  c->r[0]=c->r[0]|0x00000000u; // 8024FE64
L_8024FE68:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8024FE68
  c->r[6]=c->r[6]+0x00000004u; // 8024FE6C
  c->r[4]=c->r[4]+c->r[0]; // 8024FE70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024FE68; } // 8024FE74
  W32(c->r[29]+0x00000000u,c->r[4]); // 8024FE78
  c->r[3]=c->r[29]+0x000000B0u; // 8024FE7C
  c->r[4]=c->r[29]+0x00000000u; // 8024FE80
  c->r[5]=0u+0x00000080u; // 8024FE84
  c->lr=0x8024FE8Cu; f_8023FAE0(c); // 8024FE88
  c->r[3]=c->r[29]+0x000000B0u; // 8024FE8C
  c->lr=0x8024FE94u; f_80240A90(c); // 8024FE90
  goto L_8024FF9C; // 8024FE94
L_8024FE98:;
  c->r[0]=R32(c->r[13]+0xFFFF9E98u); // 8024FE98
  cmps(c,0,(int32_t)c->r[0],0); // 8024FE9C
  if (crb(c,2)) { goto L_8024FEB8; } // 8024FEA0
  c->r[3]=c->r[29]+0x00000080u; // 8024FEA4
  c->lr=0x8024FEACu; f_80244010(c); // 8024FEA8
  c->r[3]=c->r[26]|c->r[26]; // 8024FEAC
  c->lr=0x8024FEB4u; f_80249500(c); // 8024FEB0
  goto L_8024FF2C; // 8024FEB4
L_8024FEB8:;
  c->lr=0x8024FEBCu; f_80249500(c); // 8024FEB8
  c->lr=0x8024FEC0u; f_8024EAD0(c); // 8024FEBC
  c->r[5]=0u+0x10620000u; // 8024FEC0
  c->r[0]=0u+0x00000000u; // 8024FEC4
  c->r[30]=c->r[4]|c->r[4]; // 8024FEC8
  c->r[31]=c->r[3]|c->r[3]; // 8024FECC
  c->r[26]=c->r[5]+0x00004DD3u; // 8024FED0
  c->r[28]=c->r[0]^0x80000000u; // 8024FED4
  c->r[27]=0u+0x80000000u; // 8024FED8
L_8024FEDC:;
  c->r[0]=R32(c->r[13]+0xFFFF9E94u); // 8024FEDC
  cmps(c,0,(int32_t)c->r[0],0); // 8024FEE0
  if (!crb(c,2)) { goto L_8024FF2C; } // 8024FEE4
  c->lr=0x8024FEECu; f_8024EAD0(c); // 8024FEE8
  c->r[0]=R32(c->r[27]+0x000000F8u); // 8024FEEC
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 8024FEF0
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 8024FEF4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8024FEF8
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 8024FEFC
  c->r[3]=c->r[3]^0x80000000u; // 8024FF00
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8024FF04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 8024FF08
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 8024FF0C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 8024FF10
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 8024FF14
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8024FF18
  if (crb(c,2)) { IRQCHK(c); goto L_8024FEDC; } // 8024FF1C
  c->r[0]=0u+0x00000008u; // 8024FF20
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FF24
  goto L_8024FFA4; // 8024FF28
L_8024FF2C:;
  c->r[0]=R32(c->r[13]+0xFFFF9168u); // 8024FF2C
  cmps(c,0,(int32_t)c->r[0],4); // 8024FF30
  if (crb(c,2)) { goto L_8024FF9C; } // 8024FF34
  if (!crb(c,0)) { goto L_8024FF4C; } // 8024FF38
  cmps(c,0,(int32_t)c->r[0],1); // 8024FF3C
  if (crb(c,2)) { goto L_8024FF64; } // 8024FF40
  if (!crb(c,0)) { goto L_8024FF58; } // 8024FF44
  goto L_8024FF9C; // 8024FF48
L_8024FF4C:;
  cmps(c,0,(int32_t)c->r[0],6); // 8024FF4C
  if (crb(c,2)) { goto L_8024FF88; } // 8024FF50
  if (!crb(c,0)) { goto L_8024FF9C; } // 8024FF54
L_8024FF58:;
  c->r[3]=c->r[29]+0x000000B0u; // 8024FF58
  c->lr=0x8024FF60u; f_80240A90(c); // 8024FF5C
  goto L_8024FF9C; // 8024FF60
L_8024FF64:;
  c->r[0]=R32(c->r[13]+0xFFFF9E9Cu); // 8024FF64
  cmps(c,0,(int32_t)c->r[0],0); // 8024FF68
  if (!crb(c,2)) { goto L_8024FF9C; } // 8024FF6C
  c->r[0]=R32(c->r[13]+0xFFFF9E98u); // 8024FF70
  cmps(c,0,(int32_t)c->r[0],0); // 8024FF74
  if (!crb(c,2)) { goto L_8024FF9C; } // 8024FF78
  c->r[3]=c->r[29]+0x000000B0u; // 8024FF7C
  c->lr=0x8024FF84u; f_80240A90(c); // 8024FF80
  goto L_8024FF9C; // 8024FF84
L_8024FF88:;
  c->r[0]=R32(c->r[13]+0xFFFF9E98u); // 8024FF88
  cmps(c,0,(int32_t)c->r[0],0); // 8024FF8C
  if (crb(c,2)) { goto L_8024FF9C; } // 8024FF90
  c->r[3]=c->r[29]+0x000000B0u; // 8024FF94
  c->lr=0x8024FF9Cu; f_80240A90(c); // 8024FF98
L_8024FF9C:;
  c->r[0]=0u+0x00000009u; // 8024FF9C
  W32(c->r[13]+0xFFFF9168u,c->r[0]); // 8024FFA0
L_8024FFA4:;
  c->r[11]=c->r[1]+0x00000020u; // 8024FFA4
  c->lr=0x8024FFACu; f_800C2E94(c); // 8024FFA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024FFAC
  c->lr=c->r[0]; // 8024FFB0
  c->r[1]=c->r[1]+0x00000020u; // 8024FFB4
  return; // 8024FFB8
}

// __OSWriteStateFlags
void f_8024FFC0(Ctx* __restrict c) {
  trace_call(0x8024FFC0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024FFC0
  c->r[0]=c->lr; // 8024FFC4
  c->r[4]=c->r[3]|c->r[3]; // 8024FFC8
  c->r[5]=0u+0x00000020u; // 8024FFCC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8024FFD0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8024FFD4
  W32(c->r[1]+0x00000098u,c->r[30]); // 8024FFD8
  c->r[30]=0u+0x804A0000u; // 8024FFDC
  c->r[3]=c->r[30]+0xFFFFD520u; // 8024FFE0
  c->lr=0x8024FFE8u; f_80004000(c); // 8024FFE4
  c->r[31]=c->r[30]+0xFFFFD520u; // 8024FFE8
  c->r[3]=0u+0x803C0000u; // 8024FFEC
  c->r[6]=R32(c->r[31]+0x00000004u); // 8024FFF0
  c->r[3]=c->r[3]+0xFFFFB428u; // 8024FFF4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8024FFF8
  c->r[4]=c->r[1]+0x00000008u; // 8024FFFC
  c->r[5]=0u+0x00000002u; // 80250000
  c->r[6]=c->r[6]+c->r[0]; // 80250004
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80250008
  c->r[6]=c->r[6]+c->r[0]; // 8025000C
  c->r[0]=R32(c->r[31]+0x00000010u); // 80250010
  c->r[6]=c->r[6]+c->r[0]; // 80250014
  c->r[0]=R32(c->r[31]+0x00000014u); // 80250018
  c->r[6]=c->r[6]+c->r[0]; // 8025001C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80250020
  c->r[6]=c->r[6]+c->r[0]; // 80250024
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80250028
  c->r[6]=c->r[6]+c->r[0]; // 8025002C
  W32(c->r[30]+0xFFFFD520u,c->r[6]); // 80250030
  c->lr=0x80250038u; f_802407F0(c); // 80250034
  cmps(c,0,(int32_t)c->r[3],0); // 80250038
  if (!crb(c,2)) { goto L_80250080; } // 8025003C
  c->r[4]=c->r[31]|c->r[31]; // 80250040
  c->r[3]=c->r[1]+0x00000008u; // 80250044
  c->r[5]=0u+0x00000020u; // 80250048
  c->lr=0x80250050u; f_8023FAE0(c); // 8025004C
  cmpu(c,0,c->r[3],0x00000020u); // 80250050
  if (crb(c,2)) { goto L_80250068; } // 80250054
  c->r[3]=c->r[1]+0x00000008u; // 80250058
  c->lr=0x80250060u; f_80240A90(c); // 8025005C
  c->r[3]=0u+0x00000000u; // 80250060
  goto L_8025008C; // 80250064
L_80250068:;
  c->r[3]=c->r[1]+0x00000008u; // 80250068
  c->lr=0x80250070u; f_80240A90(c); // 8025006C
  cmps(c,0,(int32_t)c->r[3],0); // 80250070
  if (crb(c,2)) { goto L_80250088; } // 80250074
  c->r[3]=0u+0x00000000u; // 80250078
  goto L_8025008C; // 8025007C
L_80250080:;
  c->r[3]=0u+0x00000000u; // 80250080
  goto L_8025008C; // 80250084
L_80250088:;
  c->r[3]=0u+0x00000001u; // 80250088
L_8025008C:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8025008C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80250090
  c->r[30]=R32(c->r[1]+0x00000098u); // 80250094
  c->lr=c->r[0]; // 80250098
  c->r[1]=c->r[1]+0x000000A0u; // 8025009C
  return; // 802500A0
}

// __OSReadStateFlags
void f_802500B0(Ctx* __restrict c) {
  trace_call(0x802500B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 802500B0
  c->r[0]=c->lr; // 802500B4
  c->r[5]=0u+0x00000001u; // 802500B8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 802500BC
  c->r[4]=c->r[1]+0x00000008u; // 802500C0
  W32(c->r[1]+0x000000ACu,c->r[31]); // 802500C4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 802500C8
  W32(c->r[1]+0x000000A4u,c->r[29]); // 802500CC
  c->r[29]=0u+0x803C0000u; // 802500D0
  W32(c->r[1]+0x000000A0u,c->r[28]); // 802500D4
  c->r[28]=c->r[3]|c->r[3]; // 802500D8
  c->r[3]=c->r[29]+0xFFFFB428u; // 802500DC
  c->lr=0x802500E4u; f_802407F0(c); // 802500E0
  cmps(c,0,(int32_t)c->r[3],0); // 802500E4
  if (!crb(c,2)) { goto L_80250134; } // 802500E8
  c->r[30]=0u+0x804A0000u; // 802500EC
  c->r[3]=c->r[1]+0x00000008u; // 802500F0
  c->r[4]=c->r[30]+0xFFFFD520u; // 802500F4
  c->r[5]=0u+0x00000020u; // 802500F8
  c->lr=0x80250100u; f_8023F9F0(c); // 802500FC
  c->r[31]=c->r[3]|c->r[3]; // 80250100
  c->r[3]=c->r[1]+0x00000008u; // 80250104
  c->lr=0x8025010Cu; f_80240A90(c); // 80250108
  cmpu(c,0,c->r[31],0x00000020u); // 8025010C
  if (crb(c,2)) { goto L_8025014C; } // 80250110
  c->r[3]=c->r[29]+0xFFFFB428u; // 80250114
  c->lr=0x8025011Cu; f_8023F700(c); // 80250118
  c->r[3]=c->r[28]|c->r[28]; // 8025011C
  c->r[4]=0u+0x00000000u; // 80250120
  c->r[5]=0u+0x00000020u; // 80250124
  c->lr=0x8025012Cu; f_80004350(c); // 80250128
  c->r[3]=0u+0x00000000u; // 8025012C
  goto L_802501B8; // 80250130
L_80250134:;
  c->r[3]=c->r[28]|c->r[28]; // 80250134
  c->r[4]=0u+0x00000000u; // 80250138
  c->r[5]=0u+0x00000020u; // 8025013C
  c->lr=0x80250144u; f_80004350(c); // 80250140
  c->r[3]=0u+0x00000000u; // 80250144
  goto L_802501B8; // 80250148
L_8025014C:;
  c->r[4]=c->r[30]+0xFFFFD520u; // 8025014C
  c->r[0]=R32(c->r[30]+0xFFFFD520u); // 80250150
  c->r[5]=R32(c->r[4]+0x00000004u); // 80250154
  c->r[3]=R32(c->r[4]+0x00000008u); // 80250158
  c->r[5]=c->r[5]+c->r[3]; // 8025015C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80250160
  c->r[5]=c->r[5]+c->r[3]; // 80250164
  c->r[3]=R32(c->r[4]+0x00000010u); // 80250168
  c->r[5]=c->r[5]+c->r[3]; // 8025016C
  c->r[3]=R32(c->r[4]+0x00000014u); // 80250170
  c->r[5]=c->r[5]+c->r[3]; // 80250174
  c->r[3]=R32(c->r[4]+0x00000018u); // 80250178
  c->r[5]=c->r[5]+c->r[3]; // 8025017C
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 80250180
  c->r[5]=c->r[5]+c->r[3]; // 80250184
  cmpu(c,0,c->r[0],c->r[5]); // 80250188
  if (crb(c,2)) { goto L_802501A8; } // 8025018C
  c->r[3]=c->r[28]|c->r[28]; // 80250190
  c->r[4]=0u+0x00000000u; // 80250194
  c->r[5]=0u+0x00000020u; // 80250198
  c->lr=0x802501A0u; f_80004350(c); // 8025019C
  c->r[3]=0u+0x00000000u; // 802501A0
  goto L_802501B8; // 802501A4
L_802501A8:;
  c->r[3]=c->r[28]|c->r[28]; // 802501A8
  c->r[5]=0u+0x00000020u; // 802501AC
  c->lr=0x802501B4u; f_80004000(c); // 802501B0
  c->r[3]=0u+0x00000001u; // 802501B4
L_802501B8:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 802501B8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 802501BC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 802501C0
  c->r[29]=R32(c->r[1]+0x000000A4u); // 802501C4
  c->r[28]=R32(c->r[1]+0x000000A0u); // 802501C8
  c->lr=c->r[0]; // 802501CC
  c->r[1]=c->r[1]+0x000000B0u; // 802501D0
  return; // 802501D4
}

// __OSInitNet
void f_802501E0(Ctx* __restrict c) {
  trace_call(0x802501E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802501E0
  c->r[0]=c->lr; // 802501E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802501E8
  c->r[3]=c->r[1]+0x00000008u; // 802501EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802501F0
  c->r[31]=0u+0x803C0000u; // 802501F4
  c->r[31]=c->r[31]+0xFFFFB450u; // 802501F8
  c->lr=0x80250200u; f_802428A0(c); // 802501FC
  c->r[0]=R8(c->r[1]+0x00000009u); // 80250200
  cmpu(c,0,c->r[0],0x00000004u); // 80250204
  if (!crb(c,1)) { goto L_80250280; } // 80250208
  cmpu(c,0,c->r[0],0x00000009u); // 8025020C
  if (!crb(c,2)) { goto L_80250218; } // 80250210
  goto L_80250280; // 80250214
L_80250218:;
  c->lr=0x8025021Cu; f_802502A0(c); // 80250218
  cmps(c,0,(int32_t)c->r[3],0); // 8025021C
  if (crb(c,2)) { goto L_80250254; } // 80250220
  if (!crb(c,0)) { goto L_80250238; } // 80250224
  c->r[4]=c->r[3]|c->r[3]; // 80250228
  c->r[3]=c->r[31]+0x00000000u; // 8025022C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80250230
  c->lr=0x80250238u; f_80245CC0(c); // 80250234
L_80250238:;
  c->lr=0x8025023Cu; f_80250400(c); // 80250238
  cmps(c,0,(int32_t)c->r[3],0); // 8025023C
  if (!crb(c,0)) { goto L_80250254; } // 80250240
  c->r[4]=c->r[3]|c->r[3]; // 80250244
  c->r[3]=c->r[31]+0x00000034u; // 80250248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025024C
  c->lr=0x80250254u; f_80245CC0(c); // 80250250
L_80250254:;
  c->r[0]=R32(c->r[13]+0xFFFF9D80u); // 80250254
  cmps(c,0,(int32_t)c->r[0],0); // 80250258
  if (!crb(c,2)) { goto L_80250280; } // 8025025C
  c->r[3]=0u+0x00000000u; // 80250260
  c->lr=0x80250268u; f_80250360(c); // 80250264
  cmps(c,0,(int32_t)c->r[3],0); // 80250268
  if (crb(c,2)) { goto L_80250280; } // 8025026C
  c->r[4]=c->r[3]|c->r[3]; // 80250270
  c->r[3]=c->r[31]+0x00000068u; // 80250274
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80250278
  c->lr=0x80250280u; f_80245CC0(c); // 8025027C
L_80250280:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80250280
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80250284
  c->lr=c->r[0]; // 80250288
  c->r[1]=c->r[1]+0x00000020u; // 8025028C
  return; // 80250290
}

// NWC24iPrepareShutdown
void f_802502A0(Ctx* __restrict c) {
  trace_call(0x802502A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802502A0
  c->r[0]=c->lr; // 802502A4
  c->r[4]=0u+0x804A0000u; // 802502A8
  c->r[5]=0u+0x80250000u; // 802502AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802502B0
  c->r[3]=c->r[4]+0xFFFFD540u; // 802502B4
  c->r[0]=0u+0x0000006Eu; // 802502B8
  c->r[5]=c->r[5]+0x00000570u; // 802502BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802502C0
  c->r[31]=0u+0x00000000u; // 802502C4
  W32(c->r[4]+0xFFFFD540u,c->r[5]); // 802502C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 802502CC
  c->lr=0x802502D4u; f_8024B550(c); // 802502D0
  c->r[0]=R32(c->r[13]+0xFFFF9170u); // 802502D4
  cmps(c,0,(int32_t)c->r[0],0); // 802502D8
  if (!crb(c,0)) { goto L_8025032C; } // 802502DC
  c->r[0]=c->r[13]+0xFFFF9170u; // 802502E0
  c->r[3]=0u+0x803C0000u; // 802502E4
  cmps(c,0,(int32_t)c->r[0],0); // 802502E8
  c->r[3]=c->r[3]+0xFFFFB510u; // 802502EC
  if (!crb(c,2)) { goto L_802502FC; } // 802502F0
  c->r[31]=0u+0xFFFFFFFDu; // 802502F4
  goto L_8025032C; // 802502F8
L_802502FC:;
  c->r[4]=0u+0x00000001u; // 802502FC
  c->lr=0x80250304u; f_80231700(c); // 80250300
  cmps(c,0,(int32_t)c->r[3],0); // 80250304
  W32(c->r[13]+0xFFFF9170u,c->r[3]); // 80250308
  if (!crb(c,0)) { goto L_80250328; } // 8025030C
  cmps(c,0,(int32_t)c->r[3],-6); // 80250310
  if (!crb(c,2)) { goto L_80250320; } // 80250314
  c->r[31]=0u+0xFFFFFFE3u; // 80250318
  goto L_8025032C; // 8025031C
L_80250320:;
  c->r[31]=0u+0xFFFFFFD6u; // 80250320
  goto L_8025032C; // 80250324
L_80250328:;
  c->r[31]=0u+0x00000000u; // 80250328
L_8025032C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025032C
  c->r[0]=0u+0x00000005u; // 80250330
  W32(c->r[13]+0xFFFF9EA8u,c->r[0]); // 80250334
  if (!crb(c,2)) { goto L_80250340; } // 80250338
  c->r[31]=0u+0x00000001u; // 8025033C
L_80250340:;
  c->r[3]=c->r[31]|c->r[31]; // 80250340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250344
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250348
  c->lr=c->r[0]; // 8025034C
  c->r[1]=c->r[1]+0x00000010u; // 80250350
  return; // 80250354
}

// NWC24iSynchronizeRtcCounter
void f_80250360(Ctx* __restrict c) {
  trace_call(0x80250360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250360
  c->r[0]=c->lr; // 80250364
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025036C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80250370
  c->r[30]=c->r[3]|c->r[3]; // 80250374
L_80250378:;
  c->lr=0x8025037Cu; f_80253490(c); // 80250378
  cmpu(c,0,c->r[3],0x00000002u); // 8025037C
  if (!crb(c,2)) { goto L_8025038C; } // 80250380
  c->r[3]=0u+0xFFFFFFFFu; // 80250384
  goto L_802503BC; // 80250388
L_8025038C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025038C
  if (!crb(c,2)) { IRQCHK(c); goto L_80250378; } // 80250390
  c->lr=0x80250398u; f_80255060(c); // 80250394
  c->r[31]=c->r[3]|c->r[3]; // 80250398
  c->lr=0x802503A0u; f_8024EAD0(c); // 8025039C
  c->r[6]=0u+0x80000000u; // 802503A0
  c->r[5]=0u+0x00000000u; // 802503A4
  c->r[0]=R32(c->r[6]+0x000000F8u); // 802503A8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802503AC
  c->lr=0x802503B4u; f_800C2F9C(c); // 802503B0
  c->r[31]=addc(c,~c->r[31],c->r[4],1); // 802503B4
  c->r[3]=0u+0x00000000u; // 802503B8
L_802503BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802503BC
  if (crb(c,2)) { goto L_802503C8; } // 802503C0
  goto L_802503DC; // 802503C4
L_802503C8:;
  c->r[0]=0u-c->r[30]; // 802503C8
  c->r[3]=c->r[31]|c->r[31]; // 802503CC
  c->r[0]=c->r[0]|c->r[30]; // 802503D0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802503D4
  c->lr=0x802503DCu; f_80250630(c); // 802503D8
L_802503DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802503DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802503E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802503E4
  c->lr=c->r[0]; // 802503E8
  c->r[1]=c->r[1]+0x00000010u; // 802503EC
  return; // 802503F0
}

// NWC24SuspendScheduler
void f_80250400(Ctx* __restrict c) {
  trace_call(0x80250400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250400
  c->r[0]=c->lr; // 80250404
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025040C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80250410
  c->lr=0x80250418u; f_8024CE00(c); // 80250414
  cmps(c,0,(int32_t)c->r[3],0); // 80250418
  if (!crb(c,2)) { goto L_80250428; } // 8025041C
  c->r[3]=0u+0xFFFFFFFFu; // 80250420
  goto L_8025042C; // 80250424
L_80250428:;
  c->r[3]=0u+0x00000000u; // 80250428
L_8025042C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025042C
  if (!crb(c,0)) { goto L_80250438; } // 80250430
  goto L_802504E8; // 80250434
L_80250438:;
  c->r[3]=0u+0x803C0000u; // 80250438
  c->r[4]=0u+0x00000000u; // 8025043C
  c->r[3]=c->r[3]+0xFFFFB510u; // 80250440
  c->lr=0x80250448u; f_80231700(c); // 80250444
  cmps(c,0,(int32_t)c->r[3],0); // 80250448
  c->r[30]=c->r[3]|c->r[3]; // 8025044C
  if (!crb(c,0)) { goto L_8025046C; } // 80250450
  cmps(c,0,(int32_t)c->r[3],-6); // 80250454
  if (!crb(c,2)) { goto L_80250464; } // 80250458
  c->r[31]=0u+0xFFFFFFE3u; // 8025045C
  goto L_80250470; // 80250460
L_80250464:;
  c->r[31]=0u+0xFFFFFFD6u; // 80250464
  goto L_80250470; // 80250468
L_8025046C:;
  c->r[31]=0u+0x00000000u; // 8025046C
L_80250470:;
  cmps(c,0,(int32_t)c->r[31],0); // 80250470
  if (crb(c,0)) { goto L_802504E4; } // 80250474
  c->r[7]=0u+0x804A0000u; // 80250478
  c->r[3]=c->r[30]|c->r[30]; // 8025047C
  c->r[7]=c->r[7]+0xFFFFD560u; // 80250480
  c->r[4]=0u+0x00000001u; // 80250484
  c->r[5]=0u+0x00000000u; // 80250488
  c->r[6]=0u+0x00000000u; // 8025048C
  c->r[8]=0u+0x00000020u; // 80250490
  c->lr=0x80250498u; f_80231FE0(c); // 80250494
  cmps(c,0,(int32_t)c->r[3],0); // 80250498
  if (!crb(c,0)) { goto L_802504A8; } // 8025049C
  c->r[31]=0u+0xFFFFFFD6u; // 802504A0
  goto L_802504AC; // 802504A4
L_802504A8:;
  c->r[31]=0u+0x00000000u; // 802504A8
L_802504AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802504AC
  if (crb(c,0)) { goto L_802504BC; } // 802504B0
  c->r[3]=0u+0x804A0000u; // 802504B4
  c->r[31]=R32(c->r[3]+0xFFFFD560u); // 802504B8
L_802504BC:;
  c->r[3]=c->r[30]|c->r[30]; // 802504BC
  c->lr=0x802504C4u; f_802318F0(c); // 802504C0
  cmps(c,0,(int32_t)c->r[3],0); // 802504C4
  if (!crb(c,0)) { goto L_802504D4; } // 802504C8
  c->r[0]=0u+0xFFFFFFD6u; // 802504CC
  goto L_802504D8; // 802504D0
L_802504D4:;
  c->r[0]=0u+0x00000000u; // 802504D4
L_802504D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802504D8
  if (!crb(c,0)) { goto L_802504E4; } // 802504DC
  c->r[31]=c->r[0]|c->r[0]; // 802504E0
L_802504E4:;
  c->r[3]=c->r[31]|c->r[31]; // 802504E4
L_802504E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802504E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802504EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802504F0
  c->lr=c->r[0]; // 802504F4
  c->r[1]=c->r[1]+0x00000010u; // 802504F8
  return; // 802504FC
}

// NWC24iRequestShutdown
void f_80250500(Ctx* __restrict c) {
  trace_call(0x80250500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250500
  c->r[0]=c->lr; // 80250504
  c->r[7]=0u+0x804A0000u; // 80250508
  c->r[9]=0u+0x80250000u; // 8025050C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250510
  c->r[5]=0u+0x804A0000u; // 80250514
  c->r[10]=c->r[4]|c->r[4]; // 80250518
  c->r[7]=c->r[7]+0xFFFFD5A0u; // 8025051C
  W32(c->r[5]+0xFFFFD580u,c->r[3]); // 80250520
  c->r[5]=c->r[5]+0xFFFFD580u; // 80250524
  c->r[3]=R32(c->r[13]+0xFFFF9170u); // 80250528
  c->r[9]=c->r[9]+0x00000760u; // 8025052C
  c->r[4]=0u+0x00000028u; // 80250530
  c->r[6]=0u+0x00000020u; // 80250534
  c->r[8]=0u+0x00000020u; // 80250538
  c->lr=0x80250540u; f_80231EA0(c); // 8025053C
  cmps(c,0,(int32_t)c->r[3],0); // 80250540
  if (!crb(c,0)) { goto L_80250550; } // 80250544
  c->r[3]=0u+0xFFFFFFD6u; // 80250548
  goto L_8025055C; // 8025054C
L_80250550:;
  c->r[0]=0u+0x00000001u; // 80250550
  W32(c->r[13]+0xFFFF9EACu,c->r[0]); // 80250554
  c->r[3]=0u+0x00000000u; // 80250558
L_8025055C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025055C
  c->lr=c->r[0]; // 80250560
  c->r[1]=c->r[1]+0x00000010u; // 80250564
  return; // 80250568
}

// NWC24Shutdown_
void f_80250570(Ctx* __restrict c) {
  trace_call(0x80250570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250570
  c->r[0]=c->lr; // 80250574
  cmps(c,0,(int32_t)c->r[3],0); // 80250578
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025057C
  if (crb(c,2)) { goto L_8025058C; } // 80250580
  c->r[3]=0u+0x00000001u; // 80250584
  goto L_80250618; // 80250588
L_8025058C:;
  c->r[0]=R32(c->r[13]+0xFFFF9EB0u); // 8025058C
  cmps(c,0,(int32_t)c->r[0],0); // 80250590
  if (crb(c,2)) { goto L_802505F8; } // 80250594
  c->r[0]=R32(c->r[13]+0xFFFF9EACu); // 80250598
  cmps(c,0,(int32_t)c->r[0],0); // 8025059C
  if (crb(c,2)) { goto L_802505AC; } // 802505A0
  c->r[3]=0u+0x00000000u; // 802505A4
  goto L_80250618; // 802505A8
L_802505AC:;
  c->r[0]=R32(c->r[13]+0xFFFF9EB4u); // 802505AC
  cmps(c,0,(int32_t)c->r[0],0); // 802505B0
  if (crb(c,0)) { goto L_802505C0; } // 802505B4
  c->r[3]=0u+0x00000001u; // 802505B8
  goto L_80250618; // 802505BC
L_802505C0:;
  c->r[3]=R32(c->r[13]+0xFFFF9EA8u); // 802505C0
  cmps(c,0,(int32_t)c->r[3],0); // 802505C4
  if (!crb(c,1)) { goto L_802505E0; } // 802505C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802505CC
  c->r[3]=0u+0x00000000u; // 802505D0
  W32(c->r[13]+0xFFFF9EB0u,c->r[3]); // 802505D4
  W32(c->r[13]+0xFFFF9EA8u,c->r[0]); // 802505D8
  goto L_80250614; // 802505DC
L_802505E0:;
  c->r[3]=0u+0x803C0000u; // 802505E0
  c->r[3]=c->r[3]+0xFFFFB56Cu; // 802505E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802505E8
  c->lr=0x802505F0u; f_80245CC0(c); // 802505EC
  c->r[3]=0u+0x00000001u; // 802505F0
  goto L_80250618; // 802505F4
L_802505F8:;
  c->r[3]=c->r[4]|c->r[4]; // 802505F8
  c->r[4]=c->r[13]+0xFFFF9EB4u; // 802505FC
  c->lr=0x80250604u; f_80250500(c); // 80250600
  cmps(c,0,(int32_t)c->r[3],0); // 80250604
  if (crb(c,0)) { goto L_80250614; } // 80250608
  c->r[0]=0u+0x00000001u; // 8025060C
  W32(c->r[13]+0xFFFF9EB0u,c->r[0]); // 80250610
L_80250614:;
  c->r[3]=0u+0x00000000u; // 80250614
L_80250618:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250618
  c->lr=c->r[0]; // 8025061C
  c->r[1]=c->r[1]+0x00000010u; // 80250620
  return; // 80250624
}

// NWC24iSetRtcCounter_
void f_80250630(Ctx* __restrict c) {
  trace_call(0x80250630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250630
  c->r[0]=c->lr; // 80250634
  W32(c->r[1]+0x00000024u,c->r[0]); // 80250638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025063C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80250640
  W32(c->r[1]+0x00000014u,c->r[29]); // 80250644
  c->r[29]=c->r[4]|c->r[4]; // 80250648
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025064C
  c->r[28]=c->r[3]|c->r[3]; // 80250650
  c->lr=0x80250658u; f_8024CE00(c); // 80250654
  cmps(c,0,(int32_t)c->r[3],0); // 80250658
  if (!crb(c,2)) { goto L_80250668; } // 8025065C
  c->r[3]=0u+0xFFFFFFFFu; // 80250660
  goto L_8025066C; // 80250664
L_80250668:;
  c->r[3]=0u+0x00000000u; // 80250668
L_8025066C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025066C
  if (!crb(c,0)) { goto L_80250678; } // 80250670
  goto L_80250734; // 80250674
L_80250678:;
  c->r[3]=0u+0x803C0000u; // 80250678
  c->r[4]=0u+0x00000000u; // 8025067C
  c->r[3]=c->r[3]+0xFFFFB5A0u; // 80250680
  c->lr=0x80250688u; f_80231700(c); // 80250684
  cmps(c,0,(int32_t)c->r[3],0); // 80250688
  c->r[30]=c->r[3]|c->r[3]; // 8025068C
  if (!crb(c,0)) { goto L_802506AC; } // 80250690
  cmps(c,0,(int32_t)c->r[3],-6); // 80250694
  if (!crb(c,2)) { goto L_802506A4; } // 80250698
  c->r[31]=0u+0xFFFFFFE3u; // 8025069C
  goto L_802506B0; // 802506A0
L_802506A4:;
  c->r[31]=0u+0xFFFFFFD6u; // 802506A4
  goto L_802506B0; // 802506A8
L_802506AC:;
  c->r[31]=0u+0x00000000u; // 802506AC
L_802506B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802506B0
  if (crb(c,0)) { goto L_80250730; } // 802506B4
  c->r[3]=0u+0x804A0000u; // 802506B8
  c->r[7]=0u+0x804A0000u; // 802506BC
  c->r[5]=c->r[3]+0xFFFFD5C0u; // 802506C0
  W32(c->r[3]+0xFFFFD5C0u,c->r[28]); // 802506C4
  c->r[3]=c->r[30]|c->r[30]; // 802506C8
  c->r[7]=c->r[7]+0xFFFFD5E0u; // 802506CC
  W32(c->r[5]+0x00000004u,c->r[29]); // 802506D0
  c->r[4]=0u+0x00000017u; // 802506D4
  c->r[6]=0u+0x00000020u; // 802506D8
  c->r[8]=0u+0x00000020u; // 802506DC
  c->lr=0x802506E4u; f_80231FE0(c); // 802506E0
  cmps(c,0,(int32_t)c->r[3],0); // 802506E4
  if (!crb(c,0)) { goto L_802506F4; } // 802506E8
  c->r[31]=0u+0xFFFFFFD6u; // 802506EC
  goto L_802506F8; // 802506F0
L_802506F4:;
  c->r[31]=0u+0x00000000u; // 802506F4
L_802506F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802506F8
  if (crb(c,0)) { goto L_80250708; } // 802506FC
  c->r[3]=0u+0x804A0000u; // 80250700
  c->r[31]=R32(c->r[3]+0xFFFFD5E0u); // 80250704
L_80250708:;
  c->r[3]=c->r[30]|c->r[30]; // 80250708
  c->lr=0x80250710u; f_802318F0(c); // 8025070C
  cmps(c,0,(int32_t)c->r[3],0); // 80250710
  if (!crb(c,0)) { goto L_80250720; } // 80250714
  c->r[0]=0u+0xFFFFFFD6u; // 80250718
  goto L_80250724; // 8025071C
L_80250720:;
  c->r[0]=0u+0x00000000u; // 80250720
L_80250724:;
  cmps(c,0,(int32_t)c->r[31],0); // 80250724
  if (crb(c,0)) { goto L_80250730; } // 80250728
  c->r[31]=c->r[0]|c->r[0]; // 8025072C
L_80250730:;
  c->r[3]=c->r[31]|c->r[31]; // 80250730
L_80250734:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80250734
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80250738
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025073C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80250740
  c->r[28]=R32(c->r[1]+0x00000010u); // 80250744
  c->lr=c->r[0]; // 80250748
  c->r[1]=c->r[1]+0x00000020u; // 8025074C
  return; // 80250750
}

// CallbackAsyncIpc
void f_80250760(Ctx* __restrict c) {
  trace_call(0x80250760u);
  cmps(c,0,(int32_t)c->r[4],0); // 80250760
  if (crb(c,2)) { goto L_8025076C; } // 80250764
  W32(c->r[4]+0x00000000u,c->r[3]); // 80250768
L_8025076C:;
  c->r[0]=0u+0x00000000u; // 8025076C
  W32(c->r[13]+0xFFFF9EACu,c->r[0]); // 80250770
  c->r[3]=0u+0x00000000u; // 80250774
  return; // 80250778
}

// __OSCreateNandbootInfo
void f_80250780(Ctx* __restrict c) {
  trace_call(0x80250780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250780
  c->r[0]=c->lr; // 80250784
  c->r[3]=0u+0x803C0000u; // 80250788
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025078C
  c->r[4]=c->r[1]+0x00000008u; // 80250790
  c->r[3]=c->r[3]+0xFFFFB5B8u; // 80250794
  c->lr=0x8025079Cu; f_802402A0(c); // 80250798
  cmps(c,0,(int32_t)c->r[3],0); // 8025079C
  if (!crb(c,2)) { goto L_802507B8; } // 802507A0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802507A4
  cmpu(c,0,c->r[0],0x0000003Fu); // 802507A8
  if (!crb(c,2)) { goto L_802507B8; } // 802507AC
  c->r[3]=0u+0x00000001u; // 802507B0
  goto L_80250820; // 802507B4
L_802507B8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802507B8
  if (!crb(c,2)) { goto L_802507E8; } // 802507BC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802507C0
  cmpu(c,0,c->r[0],0x0000003Fu); // 802507C4
  if (crb(c,2)) { goto L_802507E8; } // 802507C8
  c->r[3]=0u+0x803C0000u; // 802507CC
  c->r[3]=c->r[3]+0xFFFFB5B8u; // 802507D0
  c->lr=0x802507D8u; f_8023F7B0(c); // 802507D4
  cmps(c,0,(int32_t)c->r[3],0); // 802507D8
  if (crb(c,2)) { goto L_802507F8; } // 802507DC
  c->r[3]=0u+0x00000000u; // 802507E0
  goto L_80250820; // 802507E4
L_802507E8:;
  cmps(c,0,(int32_t)c->r[3],-12); // 802507E8
  if (crb(c,2)) { goto L_802507F8; } // 802507EC
  c->r[3]=0u+0x00000000u; // 802507F0
  goto L_80250820; // 802507F4
L_802507F8:;
  c->r[3]=0u+0x803C0000u; // 802507F8
  c->r[4]=0u+0x0000003Fu; // 802507FC
  c->r[3]=c->r[3]+0xFFFFB5B8u; // 80250800
  c->r[5]=0u+0x00000000u; // 80250804
  c->lr=0x8025080Cu; f_8023F580(c); // 80250808
  cmps(c,0,(int32_t)c->r[3],0); // 8025080C
  if (crb(c,2)) { goto L_8025081C; } // 80250810
  c->r[3]=0u+0x00000000u; // 80250814
  goto L_80250820; // 80250818
L_8025081C:;
  c->r[3]=0u+0x00000001u; // 8025081C
L_80250820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250820
  c->lr=c->r[0]; // 80250824
  c->r[1]=c->r[1]+0x00000010u; // 80250828
  return; // 8025082C
}

// __OSWriteNandbootInfo
void f_80250830(Ctx* __restrict c) {
  trace_call(0x80250830u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250830
  c->r[0]=c->lr; // 80250834
  c->r[8]=c->r[3]+0x00000004u; // 80250838
  c->r[7]=0u+0x00000000u; // 8025083C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80250840
  c->r[0]=0u+0x00000040u; // 80250844
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80250848
  c->r[31]=c->r[3]|c->r[3]; // 8025084C
  c->ctr=c->r[0]; // 80250850
L_80250854:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 80250854
  c->r[0]=R32(c->r[8]+0x00000004u); // 80250858
  c->r[7]=c->r[7]+c->r[4]; // 8025085C
  c->r[4]=R32(c->r[8]+0x00000008u); // 80250860
  c->r[7]=c->r[7]+c->r[0]; // 80250864
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80250868
  c->r[7]=c->r[7]+c->r[4]; // 8025086C
  c->r[4]=R32(c->r[8]+0x00000010u); // 80250870
  c->r[7]=c->r[7]+c->r[0]; // 80250874
  c->r[0]=R32(c->r[8]+0x00000014u); // 80250878
  c->r[7]=c->r[7]+c->r[4]; // 8025087C
  c->r[4]=R32(c->r[8]+0x00000018u); // 80250880
  c->r[7]=c->r[7]+c->r[0]; // 80250884
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80250888
  c->r[7]=c->r[7]+c->r[4]; // 8025088C
  c->r[4]=R32(c->r[8]+0x00000020u); // 80250890
  c->r[7]=c->r[7]+c->r[0]; // 80250894
  c->r[0]=R32(c->r[8]+0x00000024u); // 80250898
  c->r[7]=c->r[7]+c->r[4]; // 8025089C
  c->r[4]=R32(c->r[8]+0x00000028u); // 802508A0
  c->r[7]=c->r[7]+c->r[0]; // 802508A4
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 802508A8
  c->r[7]=c->r[7]+c->r[4]; // 802508AC
  c->r[4]=R32(c->r[8]+0x00000030u); // 802508B0
  c->r[7]=c->r[7]+c->r[0]; // 802508B4
  c->r[0]=R32(c->r[8]+0x00000034u); // 802508B8
  c->r[7]=c->r[7]+c->r[4]; // 802508BC
  c->r[4]=R32(c->r[8]+0x00000038u); // 802508C0
  c->r[7]=c->r[7]+c->r[0]; // 802508C4
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 802508C8
  c->r[7]=c->r[7]+c->r[4]; // 802508CC
  c->r[8]=c->r[8]+0x00000040u; // 802508D0
  c->r[7]=c->r[7]+c->r[0]; // 802508D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80250854; } // 802508D8
  c->r[0]=R32(c->r[8]+0x00000000u); // 802508DC
  c->r[6]=0u+0x803C0000u; // 802508E0
  c->r[5]=R32(c->r[8]+0x00000004u); // 802508E4
  c->r[4]=c->r[1]+0x00000008u; // 802508E8
  c->r[7]=c->r[7]+c->r[0]; // 802508EC
  c->r[0]=R32(c->r[8]+0x00000008u); // 802508F0
  c->r[7]=c->r[7]+c->r[5]; // 802508F4
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 802508F8
  c->r[7]=c->r[7]+c->r[0]; // 802508FC
  c->r[0]=R32(c->r[8]+0x00000010u); // 80250900
  c->r[7]=c->r[7]+c->r[5]; // 80250904
  c->r[5]=R32(c->r[8]+0x00000014u); // 80250908
  c->r[7]=c->r[7]+c->r[0]; // 8025090C
  c->r[0]=R32(c->r[8]+0x00000018u); // 80250910
  c->r[7]=c->r[7]+c->r[5]; // 80250914
  c->r[5]=0u+0x00000002u; // 80250918
  c->r[7]=c->r[7]+c->r[0]; // 8025091C
  W32(c->r[3]+0x00000000u,c->r[7]); // 80250920
  c->r[3]=c->r[6]+0xFFFFB5B8u; // 80250924
  c->lr=0x8025092Cu; f_80240880(c); // 80250928
  cmps(c,0,(int32_t)c->r[3],0); // 8025092C
  if (!crb(c,2)) { goto L_80250970; } // 80250930
  c->r[4]=c->r[31]|c->r[31]; // 80250934
  c->r[3]=c->r[1]+0x00000008u; // 80250938
  c->r[5]=0u+0x00001020u; // 8025093C
  c->lr=0x80250944u; f_8023FAE0(c); // 80250940
  cmpu(c,0,c->r[3],0x00001020u); // 80250944
  if (crb(c,2)) { goto L_8025095C; } // 80250948
  c->r[3]=c->r[1]+0x00000008u; // 8025094C
  c->lr=0x80250954u; f_80240A90(c); // 80250950
  c->r[3]=0u+0x00000000u; // 80250954
  goto L_80250974; // 80250958
L_8025095C:;
  c->r[3]=c->r[1]+0x00000008u; // 8025095C
  c->lr=0x80250964u; f_80240A90(c); // 80250960
  c->r[0]=cntlz(c->r[3]); // 80250964
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80250968
  goto L_80250974; // 8025096C
L_80250970:;
  c->r[3]=0u+0x00000000u; // 80250970
L_80250974:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80250974
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80250978
  c->lr=c->r[0]; // 8025097C
  c->r[1]=c->r[1]+0x000000A0u; // 80250980
  return; // 80250984
}

// OSPlayTimeIsLimited
void f_80250990(Ctx* __restrict c) {
  trace_call(0x80250990u);
  c->r[0]=R32(c->r[13]+0xFFFF9EC8u); // 80250990
  c->r[3]=R32(c->r[13]+0xFFFF9ECCu); // 80250994
  c->r[0]=c->r[3]|c->r[0]; // 80250998
  c->r[3]=addc(c,c->r[0],0xFFFFFFFFu,0); // 8025099C
  c->r[3]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 802509A0
  return; // 802509A4
}

// __OSPlayTimeFadeLastAIDCallback
void f_802509B0(Ctx* __restrict c) {
  trace_call(0x802509B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802509B0
  c->r[0]=c->lr; // 802509B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802509B8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802509BC
  W32(c->r[1]+0x00000038u,c->r[30]); // 802509C0
  W32(c->r[1]+0x00000034u,c->r[29]); // 802509C4
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 802509C8
  c->r[12]=R32(c->r[3]+0x00000490u); // 802509CC
  cmps(c,0,(int32_t)c->r[12],0); // 802509D0
  if (crb(c,2)) { goto L_802509E0; } // 802509D4
  c->ctr=c->r[12]; // 802509D8
  if (true) { c->lr=0x802509E0u; dispatch(c,c->ctr); } // 802509DC
L_802509E0:;
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 802509E0
  c->r[0]=R32(c->r[3]+0x00000488u); // 802509E4
  cmps(c,0,(int32_t)c->r[0],0); // 802509E8
  if (!crb(c,2)) { goto L_80250A00; } // 802509EC
  c->lr=0x802509F4u; f_801C3230(c); // 802509F0
  c->r[4]=R32(c->r[13]+0xFFFF9EB8u); // 802509F4
  c->r[0]=c->r[3]+0x80000000u; // 802509F8
  W32(c->r[4]+0x00000484u,c->r[0]); // 802509FC
L_80250A00:;
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250A00
  c->r[0]=R32(c->r[3]+0x00000488u); // 80250A04
  cmpu(c,0,c->r[0],0x00000001u); // 80250A08
  if (!crb(c,2)) { goto L_80250A44; } // 80250A0C
  c->r[3]=R32(c->r[3]+0x00000484u); // 80250A10
  c->r[4]=0u+0x00000004u; // 80250A14
  c->lr=0x80250A1Cu; f_80244E20(c); // 80250A18
  c->r[4]=R32(c->r[13]+0xFFFF9EB8u); // 80250A1C
  c->r[3]=R32(c->r[4]+0x00000484u); // 80250A20
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 80250A24
  c->r[3]=c->r[3]+0x00000002u; // 80250A28
  W16(c->r[4]+0x0000048Cu,c->r[0]); // 80250A2C
  W32(c->r[4]+0x00000484u,c->r[3]); // 80250A30
  c->r[4]=R32(c->r[13]+0xFFFF9EB8u); // 80250A34
  c->r[3]=R32(c->r[4]+0x00000484u); // 80250A38
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 80250A3C
  W16(c->r[4]+0x0000048Eu,c->r[0]); // 80250A40
L_80250A44:;
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250A44
  c->r[0]=R32(c->r[3]+0x00000488u); // 80250A48
  cmpu(c,0,c->r[0],0x00000001u); // 80250A4C
  if (crb(c,0)) { goto L_80250B40; } // 80250A50
  c->r[0]=R32(c->r[3]+0x00000480u); // 80250A54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)576); // 80250A58
  c->r[31]=c->r[3]+c->r[0]; // 80250A5C
  c->r[30]=c->r[31]|c->r[31]; // 80250A60
  c->lr=0x80250A68u; f_801C3250(c); // 80250A64
  c->r[29]=c->r[3]|c->r[3]; // 80250A68
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[2]=c->ps1[2]=RF32(ea);} // 80250A6C
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[1]=RF64(ea);} // 80250A70
  c->r[5]=c->r[29]|c->r[29]; // 80250A74
  c->r[4]=0u+0x43300000u; // 80250A78
  goto L_80250B00; // 80250A7C
L_80250A80:;
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250A80
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80250A84
  W32(c->r[1]+0x00000008u,c->r[4]); // 80250A88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 80250A8C
  W16(c->r[30]+0x00000000u,c->r[0]); // 80250A90
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250A94
  W32(c->r[1]+0x00000018u,c->r[4]); // 80250A98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 80250A9C
  W16(c->r[30]+0x00000002u,c->r[0]); // 80250AA0
  c->r[30]=c->r[30]+0x00000004u; // 80250AA4
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250AA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Cu); // 80250AAC
  c->r[0]=c->r[0]^0x80000000u; // 80250AB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80250AB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80250AB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80250ABC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80250AC0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80250AC4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80250AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250ACC
  W16(c->r[3]+0x0000048Cu,c->r[0]); // 80250AD0
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250AD4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000048Eu); // 80250AD8
  c->r[0]=c->r[0]^0x80000000u; // 80250ADC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80250AE0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80250AE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80250AE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80250AEC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80250AF0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80250AF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80250AF8
  W16(c->r[3]+0x0000048Eu,c->r[0]); // 80250AFC
L_80250B00:;
  cmps(c,0,(int32_t)c->r[5],0); // 80250B00
  if (!crb(c,2)) { IRQCHK(c); goto L_80250A80; } // 80250B04
  c->r[3]=c->r[31]|c->r[31]; // 80250B08
  c->r[4]=c->r[29]|c->r[29]; // 80250B0C
  c->lr=0x80250B14u; f_80244E50(c); // 80250B10
  c->r[3]=c->r[31]|c->r[31]; // 80250B14
  c->r[4]=c->r[29]|c->r[29]; // 80250B18
  c->lr=0x80250B20u; f_801C3160(c); // 80250B1C
  c->r[4]=R32(c->r[13]+0xFFFF9EB8u); // 80250B20
  c->r[3]=R32(c->r[4]+0x00000480u); // 80250B24
  c->r[0]=c->r[3]+0x00000001u; // 80250B28
  W32(c->r[4]+0x00000480u,c->r[0]); // 80250B2C
  c->r[3]=R32(c->r[13]+0xFFFF9EB8u); // 80250B30
  c->r[0]=R32(c->r[3]+0x00000480u); // 80250B34
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80250B38
  W32(c->r[3]+0x00000480u,c->r[0]); // 80250B3C
L_80250B40:;
  c->r[4]=R32(c->r[13]+0xFFFF9EB8u); // 80250B40
  c->r[3]=R32(c->r[4]+0x00000488u); // 80250B44
  c->r[0]=c->r[3]+0x00000001u; // 80250B48
  W32(c->r[4]+0x00000488u,c->r[0]); // 80250B4C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80250B50
  c->r[30]=R32(c->r[1]+0x00000038u); // 80250B54
  c->r[29]=R32(c->r[1]+0x00000034u); // 80250B58
  c->r[0]=R32(c->r[1]+0x00000044u); // 80250B5C
  c->lr=c->r[0]; // 80250B60
  c->r[1]=c->r[1]+0x00000040u; // 80250B64
  return; // 80250B68
}

// __OSWriteExpiredFlag
void f_80250B70(Ctx* __restrict c) {
  trace_call(0x80250B70u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80250B70
  c->r[12]=c->r[1]|c->r[1]; // 80250B74
  c->r[11]=addc(c,~c->r[11],0xFFFFFF00u,1); // 80250B78
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80250B7C
  c->r[0]=c->lr; // 80250B80
  c->r[3]=0u+0x803C0000u; // 80250B84
  c->r[5]=0u+0x00000000u; // 80250B88
  W32(c->r[12]+0x00000004u,c->r[0]); // 80250B8C
  c->r[3]=c->r[3]+0xFFFFB5D8u; // 80250B90
  c->r[4]=0u+0x0000003Fu; // 80250B94
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80250B98
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80250B9C
  c->r[30]=0u+0x00000000u; // 80250BA0
  c->lr=0x80250BA8u; f_8023F580(c); // 80250BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80250BA8
  c->r[31]=c->r[3]|c->r[3]; // 80250BAC
  if (crb(c,2)) { goto L_80250BBC; } // 80250BB0
  cmps(c,0,(int32_t)c->r[3],-6); // 80250BB4
  if (!crb(c,2)) { goto L_80250C44; } // 80250BB8
L_80250BBC:;
  c->r[3]=0u+0x803C0000u; // 80250BBC
  c->r[4]=c->r[1]+0x00000040u; // 80250BC0
  c->r[3]=c->r[3]+0xFFFFB5D8u; // 80250BC4
  c->r[5]=0u+0x00000002u; // 80250BC8
  c->lr=0x80250BD0u; f_80240880(c); // 80250BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80250BD0
  c->r[31]=c->r[3]|c->r[3]; // 80250BD4
  if (!crb(c,2)) { goto L_80250C44; } // 80250BD8
  c->r[30]=0u+0x00000001u; // 80250BDC
  c->lr=0x80250BE4u; f_80201900(c); // 80250BE0
  cmps(c,0,(int32_t)c->r[3],0); // 80250BE4
  c->r[31]=c->r[3]|c->r[3]; // 80250BE8
  if (!crb(c,2)) { goto L_80250C44; } // 80250BEC
  c->r[3]=c->r[1]+0x00000020u; // 80250BF0
  c->r[4]=0u+0x00000000u; // 80250BF4
  c->r[5]=0u+0x00000020u; // 80250BF8
  c->lr=0x80250C00u; f_80004350(c); // 80250BFC
  c->r[3]=c->r[1]+0x00000020u; // 80250C00
  c->lr=0x80250C08u; f_80201EC0(c); // 80250C04
  cmps(c,0,(int32_t)c->r[3],0); // 80250C08
  c->r[31]=c->r[3]|c->r[3]; // 80250C0C
  if (!crb(c,2)) { goto L_80250C44; } // 80250C10
  c->r[3]=c->r[1]+0x00000040u; // 80250C14
  c->r[4]=c->r[1]+0x00000020u; // 80250C18
  c->r[5]=0u+0x00000020u; // 80250C1C
  c->lr=0x80250C24u; f_8023FAE0(c); // 80250C20
  cmps(c,0,(int32_t)c->r[3],0); // 80250C24
  c->r[31]=c->r[3]|c->r[3]; // 80250C28
  if (crb(c,0)) { goto L_80250C44; } // 80250C2C
  cmps(c,0,(int32_t)c->r[3],32); // 80250C30
  if (crb(c,2)) { goto L_80250C40; } // 80250C34
  c->r[31]=0u+0xFFFFFFF8u; // 80250C38
  goto L_80250C44; // 80250C3C
L_80250C40:;
  c->r[31]=0u+0x00000000u; // 80250C40
L_80250C44:;
  cmps(c,0,(int32_t)c->r[30],0); // 80250C44
  if (crb(c,2)) { goto L_80250C54; } // 80250C48
  c->r[3]=c->r[1]+0x00000040u; // 80250C4C
  c->lr=0x80250C54u; f_80240A90(c); // 80250C50
L_80250C54:;
  cmps(c,0,(int32_t)c->r[31],0); // 80250C54
  if (!crb(c,2)) { goto L_80250C64; } // 80250C58
  c->r[3]=0u+0x00000001u; // 80250C5C
  goto L_80250C68; // 80250C60
L_80250C64:;
  c->r[3]=0u+0x00000000u; // 80250C64
L_80250C68:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80250C68
  c->r[0]=R32(c->r[10]+0x00000004u); // 80250C6C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80250C70
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80250C74
  c->lr=c->r[0]; // 80250C78
  c->r[1]=c->r[10]|c->r[10]; // 80250C7C
  return; // 80250C80
}

// __OSWriteExpiredFlagIfSet
void f_80250C90(Ctx* __restrict c) {
  trace_call(0x80250C90u);
  c->r[0]=R32(c->r[13]+0xFFFF9EBCu); // 80250C90
  cmps(c,0,(int32_t)c->r[0],0); // 80250C94
  if (crb(c,2)) { goto L_80250CA0; } // 80250C98
  f_80250B70(c); return; // 80250C9C
L_80250CA0:;
  c->r[3]=0u+0x00000000u; // 80250CA0
  return; // 80250CA4
}

// __OSPlayTimeRebootThread
void f_80250CB0(Ctx* __restrict c) {
  trace_call(0x80250CB0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80250CB0
  c->r[12]=c->r[1]|c->r[1]; // 80250CB4
  c->r[11]=addc(c,~c->r[11],0xFFFFFB20u,1); // 80250CB8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80250CBC
  c->r[0]=c->lr; // 80250CC0
  c->r[4]=0u+0x00000000u; // 80250CC4
  c->r[5]=0u+0x00000494u; // 80250CC8
  W32(c->r[12]+0x00000004u,c->r[0]); // 80250CCC
  c->r[3]=c->r[1]+0x00000020u; // 80250CD0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80250CD4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80250CD8
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80250CDC
  W32(c->r[13]+0xFFFF9EB8u,c->r[3]); // 80250CE0
  c->lr=0x80250CE8u; f_80004350(c); // 80250CE4
  c->r[3]=0u+0x80250000u; // 80250CE8
  c->r[3]=c->r[3]+0x000009B0u; // 80250CEC
  c->lr=0x80250CF4u; f_801C3110(c); // 80250CF0
  c->r[5]=R32(c->r[13]+0xFFFF9EB8u); // 80250CF4
  c->r[4]=0u+0xCCCD0000u; // 80250CF8
  c->r[31]=c->r[4]+0xFFFFCCCDu; // 80250CFC
  c->r[30]=0u+0x00000000u; // 80250D00
  W32(c->r[5]+0x00000490u,c->r[3]); // 80250D04
L_80250D08:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[31]*(uint64_t)c->r[30])>>32); // 80250D08
  c->r[3]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80250D0C
  c->r[29]=c->r[3]+0x00000001u; // 80250D10
  cmpu(c,0,c->r[29],0x00000007u); // 80250D14
  if (!crb(c,1)) { goto L_80250D20; } // 80250D18
  c->r[29]=0u+0x00000007u; // 80250D1C
L_80250D20:;
  c->lr=0x80250D24u; f_8025CF80(c); // 80250D20
  c->r[4]=c->r[29]|c->r[29]; // 80250D24
  c->r[5]=c->r[29]|c->r[29]; // 80250D28
  c->r[3]=0u+0x00000001u; // 80250D2C
  c->lr=0x80250D34u; f_8024F590(c); // 80250D30
  c->r[30]=c->r[30]+0x00000001u; // 80250D34
  cmpu(c,0,c->r[30],0x00000014u); // 80250D38
  if (crb(c,0)) { IRQCHK(c); goto L_80250D08; } // 80250D3C
  c->r[3]=0u+0x00000000u; // 80250D40
  c->lr=0x80250D48u; f_801C3110(c); // 80250D44
  c->r[3]=0u+0x00000001u; // 80250D48
  c->lr=0x80250D50u; f_8025E0D0(c); // 80250D4C
  c->lr=0x80250D54u; f_8025DF40(c); // 80250D50
  c->lr=0x80250D58u; f_802494C0(c); // 80250D54
  c->r[0]=R32(c->r[13]+0xFFFF9EBCu); // 80250D58
  c->r[31]=c->r[3]|c->r[3]; // 80250D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80250D60
  if (crb(c,2)) { goto L_80250D6C; } // 80250D64
  c->lr=0x80250D6Cu; f_80250B70(c); // 80250D68
L_80250D6C:;
  c->r[3]=c->r[31]|c->r[31]; // 80250D6C
  c->lr=0x80250D74u; f_80249500(c); // 80250D70
  c->lr=0x80250D78u; f_8024BD10(c); // 80250D74
  c->r[3]=0u+0x00000000u; // 80250D78
  c->r[10]=R32(c->r[1]+0x00000000u); // 80250D7C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80250D80
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80250D84
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80250D88
  c->r[0]=R32(c->r[10]+0x00000004u); // 80250D8C
  c->lr=c->r[0]; // 80250D90
  c->r[1]=c->r[10]|c->r[10]; // 80250D94
  return; // 80250D98
}

// __OSPlayTimeAlarmExpired
void f_80250DA0(Ctx* __restrict c) {
  trace_call(0x80250DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250DA0
  c->r[0]=c->lr; // 80250DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250DAC
  c->r[12]=R32(c->r[13]+0xFFFF9EC0u); // 80250DB0
  cmps(c,0,(int32_t)c->r[12],0); // 80250DB4
  if (crb(c,2)) { goto L_80250DC8; } // 80250DB8
  c->ctr=c->r[12]; // 80250DBC
  if (true) { c->lr=0x80250DC4u; dispatch(c,c->ctr); } // 80250DC0
  goto L_80250E2C; // 80250DC4
L_80250DC8:;
  c->r[3]=0u+0x80000000u; // 80250DC8
  c->r[31]=R32(c->r[3]+0x000000DCu); // 80250DCC
  goto L_80250DE0; // 80250DD0
L_80250DD4:;
  c->r[3]=c->r[31]|c->r[31]; // 80250DD4
  c->lr=0x80250DDCu; f_8024DD30(c); // 80250DD8
  c->r[31]=R32(c->r[31]+0x000002FCu); // 80250DDC
L_80250DE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80250DE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80250DD4; } // 80250DE4
  c->r[3]=0u+0x80000000u; // 80250DE8
  c->r[4]=0u+0x80250000u; // 80250DEC
  c->r[3]=R32(c->r[3]+0x00003128u); // 80250DF0
  c->r[4]=c->r[4]+0x00000CB0u; // 80250DF4
  c->r[5]=0u+0x00000000u; // 80250DF8
  c->r[7]=0u+0x00001000u; // 80250DFC
  c->r[31]=c->r[3]+0xFFFFECE0u; // 80250E00
  c->r[8]=0u+0x00000000u; // 80250E04
  c->r[9]=0u+0x00000000u; // 80250E08
  c->r[3]=c->r[31]|c->r[31]; // 80250E0C
  c->r[6]=c->r[31]+0x00001320u; // 80250E10
  c->lr=0x80250E18u; f_8024D400(c); // 80250E14
  cmps(c,0,(int32_t)c->r[3],0); // 80250E18
  if (!crb(c,2)) { goto L_80250E24; } // 80250E1C
  c->lr=0x80250E24u; f_8024BE40(c); // 80250E20
L_80250E24:;
  c->r[3]=c->r[31]|c->r[31]; // 80250E24
  c->lr=0x80250E2Cu; f_8024DA90(c); // 80250E28
L_80250E2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250E2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250E30
  c->lr=c->r[0]; // 80250E34
  c->r[1]=c->r[1]+0x00000010u; // 80250E38
  return; // 80250E3C
}

// __OSGetPlayTime
void f_80250E40(Ctx* __restrict c) {
  trace_call(0x80250E40u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80250E40
  c->r[12]=c->r[1]|c->r[1]; // 80250E44
  c->r[11]=addc(c,~c->r[11],0xFFFFFE80u,1); // 80250E48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80250E4C
  c->r[0]=c->lr; // 80250E50
  W32(c->r[12]+0x00000004u,c->r[0]); // 80250E54
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80250E58
  c->r[0]=0u+0x00000000u; // 80250E5C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80250E60
  c->r[31]=c->r[5]|c->r[5]; // 80250E64
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80250E68
  c->r[30]=0u+0x00000000u; // 80250E6C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80250E70
  c->r[29]=c->r[4]|c->r[4]; // 80250E74
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 80250E78
  c->r[28]=c->r[3]|c->r[3]; // 80250E7C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80250E80
  if (crb(c,2)) { goto L_80250E9C; } // 80250E84
  c->r[4]=c->r[28]|c->r[28]; // 80250E88
  c->r[3]=c->r[1]+0x00000080u; // 80250E8C
  c->r[5]=0u+0x000000D8u; // 80250E90
  c->lr=0x80250E98u; f_80004000(c); // 80250E94
  c->r[28]=c->r[1]+0x00000080u; // 80250E98
L_80250E9C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80250E9C
  c->r[6]=c->r[1]+0x00000020u; // 80250EA0
  c->r[4]=R32(c->r[28]+0x00000008u); // 80250EA4
  c->r[5]=0u+0x00000000u; // 80250EA8
  c->lr=0x80250EB0u; f_80201F60(c); // 80250EAC
  cmps(c,0,(int32_t)c->r[3],0); // 80250EB0
  if (crb(c,1)) { goto L_80250EE4; } // 80250EB4
  if (crb(c,2)) { goto L_80250EC0; } // 80250EB8
  goto L_80250EE4; // 80250EBC
L_80250EC0:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 80250EC0
  cmps(c,0,(int32_t)c->r[0],0); // 80250EC4
  if (crb(c,2)) { goto L_80250EE4; } // 80250EC8
  c->r[3]=R32(c->r[28]+0x00000004u); // 80250ECC
  c->r[5]=c->r[1]+0x00000040u; // 80250ED0
  c->r[4]=R32(c->r[28]+0x00000008u); // 80250ED4
  c->r[6]=c->r[1]+0x00000020u; // 80250ED8
  c->lr=0x80250EE0u; f_80201F60(c); // 80250EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80250EE0
L_80250EE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80250EE4
  if (!crb(c,2)) { goto L_80250FE8; } // 80250EE8
  c->r[0]=0u+0x00000008u; // 80250EEC
  c->r[5]=0u+0x00000000u; // 80250EF0
  c->r[4]=0u+0x00000000u; // 80250EF4
  c->ctr=c->r[0]; // 80250EF8
  c->r[0]=c->r[0]|0x00000000u; // 80250EFC
L_80250F00:;
  c->r[6]=c->r[28]+c->r[4]; // 80250F00
  c->r[0]=R32(c->r[6]+0x00000098u); // 80250F04
  cmpu(c,0,c->r[0],0x00000001u); // 80250F08
  if (!crb(c,2)) { goto L_80250F60; } // 80250F0C
  c->r[0]=0u+0x00000001u; // 80250F10
  W32(c->r[29]+0x00000000u,c->r[0]); // 80250F14
  c->r[0]=R32(c->r[1]+0x00000020u); // 80250F18
  cmps(c,0,(int32_t)c->r[0],0); // 80250F1C
  if (!crb(c,2)) { goto L_80250F30; } // 80250F20
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 80250F24
  W32(c->r[31]+0x00000000u,c->r[0]); // 80250F28
  goto L_80250FE8; // 80250F2C
L_80250F30:;
  c->r[5]=c->r[1]+0x00000040u; // 80250F30
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 80250F34
  c->r[4]=c->r[5]+c->r[4]; // 80250F38
  c->r[4]=R32(c->r[4]+0x00000004u); // 80250F3C
  cmpu(c,0,c->r[4],c->r[0]); // 80250F40
  if (crb(c,0)) { goto L_80250F54; } // 80250F44
  c->r[0]=0u+0x00000000u; // 80250F48
  W32(c->r[31]+0x00000000u,c->r[0]); // 80250F4C
  goto L_80250FE8; // 80250F50
L_80250F54:;
  c->r[0]=c->r[0]-c->r[4]; // 80250F54
  W32(c->r[31]+0x00000000u,c->r[0]); // 80250F58
  goto L_80250FE8; // 80250F5C
L_80250F60:;
  cmps(c,0,(int32_t)c->r[0],0); // 80250F60
  if (crb(c,2)) { goto L_80250F6C; } // 80250F64
  c->r[30]=c->r[5]+0x00000001u; // 80250F68
L_80250F6C:;
  c->r[5]=c->r[5]+0x00000001u; // 80250F6C
  c->r[4]=c->r[4]+0x00000008u; // 80250F70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80250F00; } // 80250F74
  cmps(c,0,(int32_t)c->r[30],0); // 80250F78
  if (!crb(c,2)) { goto L_80250F94; } // 80250F7C
  c->r[0]=0u+0x00000000u; // 80250F80
  W32(c->r[29]+0x00000000u,c->r[0]); // 80250F84
  c->r[0]=0u+0xFFFFFFFFu; // 80250F88
  W32(c->r[31]+0x00000000u,c->r[0]); // 80250F8C
  goto L_80250FE8; // 80250F90
L_80250F94:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80250F94
  c->r[6]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80250F98
  c->r[4]=c->r[28]+c->r[6]; // 80250F9C
  c->r[0]=R32(c->r[4]+0x00000098u); // 80250FA0
  cmpu(c,0,c->r[0],0x00000004u); // 80250FA4
  if (!crb(c,2)) { goto L_80250FE0; } // 80250FA8
  c->r[0]=0u+0x00000004u; // 80250FAC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80250FB0
  c->r[5]=R32(c->r[4]+0x0000009Cu); // 80250FB4
  W32(c->r[31]+0x00000000u,c->r[5]); // 80250FB8
  c->r[0]=R32(c->r[1]+0x00000020u); // 80250FBC
  cmps(c,0,(int32_t)c->r[0],0); // 80250FC0
  if (crb(c,2)) { goto L_80250FE8; } // 80250FC4
  c->r[0]=c->r[1]+0x00000040u; // 80250FC8
  c->r[4]=c->r[0]+c->r[6]; // 80250FCC
  c->r[0]=R32(c->r[4]+0x00000004u); // 80250FD0
  c->r[0]=c->r[5]-c->r[0]; // 80250FD4
  W32(c->r[31]+0x00000000u,c->r[0]); // 80250FD8
  goto L_80250FE8; // 80250FDC
L_80250FE0:;
  c->r[0]=0u+0x00000009u; // 80250FE0
  W32(c->r[29]+0x00000000u,c->r[0]); // 80250FE4
L_80250FE8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80250FE8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80250FEC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80250FF0
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80250FF4
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80250FF8
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 80250FFC
  c->lr=c->r[0]; // 80251000
  c->r[1]=c->r[10]|c->r[10]; // 80251004
  return; // 80251008
}

// __OSInitPlayTime
void f_80251010(Ctx* __restrict c) {
  trace_call(0x80251010u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80251010
  c->r[12]=c->r[1]|c->r[1]; // 80251014
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80251018
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025101C
  c->r[0]=c->lr; // 80251020
  c->r[3]=0u+0x00000000u; // 80251024
  W32(c->r[12]+0x00000004u,c->r[0]); // 80251028
  c->r[0]=0u+0x00000001u; // 8025102C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80251030
  W32(c->r[13]+0xFFFF9ECCu,c->r[3]); // 80251034
  W32(c->r[13]+0xFFFF9EC8u,c->r[3]); // 80251038
  W32(c->r[13]+0xFFFF9EC0u,c->r[3]); // 8025103C
  W32(c->r[13]+0xFFFF9EBCu,c->r[0]); // 80251040
  c->lr=0x80251048u; f_80201900(c); // 80251044
  cmps(c,0,(int32_t)c->r[3],0); // 80251048
  if (crb(c,2)) { goto L_80251054; } // 8025104C
  goto L_8025114C; // 80251050
L_80251054:;
  c->r[4]=c->r[1]+0x00000040u; // 80251054
  c->r[3]=0u+0x00000000u; // 80251058
  c->lr=0x80251060u; f_80201B70(c); // 8025105C
  cmps(c,0,(int32_t)c->r[3],-1017); // 80251060
  if (crb(c,2)) { goto L_80251084; } // 80251064
  cmps(c,0,(int32_t)c->r[3],0); // 80251068
  if (crb(c,2)) { goto L_80251074; } // 8025106C
  goto L_80251084; // 80251070
L_80251074:;
  c->r[3]=c->r[1]+0x00000040u; // 80251074
  c->r[4]=c->r[1]+0x00000020u; // 80251078
  c->r[5]=c->r[1]+0x00000024u; // 8025107C
  c->lr=0x80251084u; f_80250E40(c); // 80251080
L_80251084:;
  cmps(c,0,(int32_t)c->r[3],0); // 80251084
  if (crb(c,2)) { goto L_80251098; } // 80251088
  cmps(c,0,(int32_t)c->r[3],-1017); // 8025108C
  if (crb(c,2)) { goto L_8025114C; } // 80251090
  goto L_8025114C; // 80251094
L_80251098:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 80251098
  cmps(c,0,(int32_t)c->r[0],0); // 8025109C
  if (crb(c,2)) { goto L_8025114C; } // 802510A0
  cmps(c,0,(int32_t)c->r[0],1); // 802510A4
  if (!crb(c,2)) { goto L_8025114C; } // 802510A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802510AC
  cmps(c,0,(int32_t)c->r[0],0); // 802510B0
  if (!crb(c,2)) { goto L_802510D0; } // 802510B4
  c->r[3]=0u+0x803C0000u; // 802510B8
  c->r[4]=0u+0x000002E1u; // 802510BC
  c->r[3]=c->r[3]+0xFFFFB5ECu; // 802510C0
  c->r[5]=c->r[13]+0xFFFF9178u; // 802510C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802510C8
  c->lr=0x802510D0u; f_80245D40(c); // 802510CC
L_802510D0:;
  c->r[31]=0u+0x804A0000u; // 802510D0
  c->r[3]=c->r[31]+0xFFFFD600u; // 802510D4
  c->lr=0x802510DCu; f_80243CB0(c); // 802510D8
  c->r[3]=0u+0x80000000u; // 802510DC
  c->r[7]=0u+0x80250000u; // 802510E0
  c->r[0]=R32(c->r[3]+0x000000F8u); // 802510E4
  c->r[4]=0u+0x00000014u; // 802510E8
  c->r[5]=R32(c->r[1]+0x00000024u); // 802510EC
  c->r[9]=0u+0x00000000u; // 802510F0
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802510F4
  c->r[3]=c->r[31]+0xFFFFD600u; // 802510F8
  c->r[8]=addc(c,c->r[5],c->r[4],0); // 802510FC
  c->r[7]=c->r[7]+0x00000DA0u; // 80251100
  c->r[0]=addc(c,c->r[9],c->r[9],c->xer_ca); // 80251104
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 80251108
  c->r[4]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[6])>>32); // 8025110C
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[9]); // 80251110
  c->r[4]=c->r[4]+c->r[5]; // 80251114
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 80251118
  c->r[5]=c->r[4]+c->r[0]; // 8025111C
  c->lr=0x80251124u; f_80243F10(c); // 80251120
  c->r[4]=c->r[31]+0xFFFFD600u; // 80251124
  c->r[3]=0u+0x803C0000u; // 80251128
  c->r[0]=R32(c->r[4]+0x00000008u); // 8025112C
  c->r[3]=c->r[3]+0xFFFFB5FCu; // 80251130
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80251134
  W32(c->r[13]+0xFFFF9ECCu,c->r[4]); // 80251138
  c->r[4]=R32(c->r[1]+0x00000024u); // 8025113C
  W32(c->r[13]+0xFFFF9EC8u,c->r[0]); // 80251140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251144
  c->lr=0x8025114Cu; f_80245CC0(c); // 80251148
L_8025114C:;
  c->lr=0x80251150u; f_80201960(c); // 8025114C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80251150
  c->r[0]=R32(c->r[10]+0x00000004u); // 80251154
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80251158
  c->lr=c->r[0]; // 8025115C
  c->r[1]=c->r[10]|c->r[10]; // 80251160
  return; // 80251164
}

// OSCalcCRC32
void f_80251170(Ctx* __restrict c) {
  trace_call(0x80251170u);
  cmps(c,0,(int32_t)c->r[4],0); // 80251170
  c->r[7]=0u+0x80380000u; // 80251174
  c->r[8]=0u+0xFFFFFFFFu; // 80251178
  c->r[7]=c->r[7]+0xFFFFFD38u; // 8025117C
  if (crb(c,2)) { goto L_8025129C; } // 80251180
  c->r[0]=rotl(c->r[4],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80251184
  c->ctr=c->r[0]; // 80251188
  if (crb(c,2)) { goto L_80251260; } // 8025118C
L_80251190:;
  c->r[9]=R8(c->r[3]+0x00000000u); // 80251190
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80251194
  c->r[0]=c->r[8]^c->r[9]; // 80251198
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 8025119C
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 802511A0
  c->r[9]=R8(c->r[3]+0x00000001u); // 802511A4
  c->r[0]=R32(c->r[7]+c->r[0]); // 802511A8
  c->r[6]=c->r[6]^c->r[0]; // 802511AC
  c->r[0]=c->r[6]^c->r[5]; // 802511B0
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 802511B4
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 802511B8
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 802511BC
  c->r[0]=R32(c->r[7]+c->r[0]); // 802511C0
  c->r[8]=c->r[6]^c->r[0]; // 802511C4
  c->r[0]=c->r[8]^c->r[9]; // 802511C8
  c->r[9]=R8(c->r[3]+0x00000002u); // 802511CC
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 802511D0
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 802511D4
  c->r[0]=R32(c->r[7]+c->r[0]); // 802511D8
  c->r[6]=c->r[6]^c->r[0]; // 802511DC
  c->r[0]=c->r[6]^c->r[5]; // 802511E0
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 802511E4
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 802511E8
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 802511EC
  c->r[0]=R32(c->r[7]+c->r[0]); // 802511F0
  c->r[8]=c->r[6]^c->r[0]; // 802511F4
  c->r[0]=c->r[8]^c->r[9]; // 802511F8
  c->r[9]=R8(c->r[3]+0x00000003u); // 802511FC
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80251200
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80251204
  c->r[0]=R32(c->r[7]+c->r[0]); // 80251208
  c->r[3]=c->r[3]+0x00000004u; // 8025120C
  c->r[6]=c->r[6]^c->r[0]; // 80251210
  c->r[0]=c->r[6]^c->r[5]; // 80251214
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 80251218
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 8025121C
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 80251220
  c->r[0]=R32(c->r[7]+c->r[0]); // 80251224
  c->r[8]=c->r[6]^c->r[0]; // 80251228
  c->r[0]=c->r[8]^c->r[9]; // 8025122C
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80251230
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80251234
  c->r[0]=R32(c->r[7]+c->r[0]); // 80251238
  c->r[6]=c->r[6]^c->r[0]; // 8025123C
  c->r[0]=c->r[6]^c->r[5]; // 80251240
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80251244
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 80251248
  c->r[0]=R32(c->r[7]+c->r[0]); // 8025124C
  c->r[8]=c->r[6]^c->r[0]; // 80251250
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251190; } // 80251254
  c->r[4]=c->r[4]&0x00000003u; cr0(c,c->r[4]); // 80251258
  if (crb(c,2)) { goto L_8025129C; } // 8025125C
L_80251260:;
  c->ctr=c->r[4]; // 80251260
L_80251264:;
  c->r[9]=R8(c->r[3]+0x00000000u); // 80251264
  c->r[6]=rotl(c->r[8],28)&0x0FFFFFFFu; // 80251268
  c->r[3]=c->r[3]+0x00000001u; // 8025126C
  c->r[0]=c->r[8]^c->r[9]; // 80251270
  c->r[5]=rotl(c->r[9],28)&0x0FFFFFFFu; // 80251274
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80251278
  c->r[0]=R32(c->r[7]+c->r[0]); // 8025127C
  c->r[6]=c->r[6]^c->r[0]; // 80251280
  c->r[0]=c->r[6]^c->r[5]; // 80251284
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 80251288
  c->r[6]=rotl(c->r[6],28)&0x0FFFFFFFu; // 8025128C
  c->r[0]=R32(c->r[7]+c->r[0]); // 80251290
  c->r[8]=c->r[6]^c->r[0]; // 80251294
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251264; } // 80251298
L_8025129C:;
  c->r[3]=~(c->r[8]|c->r[8]); // 8025129C
  return; // 802512A0
}

// PackArgs_802512B0
void f_802512B0(Ctx* __restrict c) {
  trace_call(0x802512B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802512B0
  c->r[0]=c->lr; // 802512B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802512B8
  c->r[11]=c->r[1]+0x00000030u; // 802512BC
  c->lr=0x802512C4u; f_800C2E44(c); // 802512C0
  c->r[25]=c->r[4]|c->r[4]; // 802512C4
  c->r[29]=c->r[5]|c->r[5]; // 802512C8
  c->r[30]=c->r[3]|c->r[3]; // 802512CC
  c->r[4]=0u+0x00000000u; // 802512D0
  c->r[5]=0u+0x00002000u; // 802512D4
  c->lr=0x802512DCu; f_80004350(c); // 802512D8
  cmps(c,0,(int32_t)c->r[25],0); // 802512DC
  if (!crb(c,2)) { goto L_802512F0; } // 802512E0
  c->r[0]=0u+0x00000000u; // 802512E4
  W32(c->r[30]+0x00000008u,c->r[0]); // 802512E8
  goto L_80251414; // 802512EC
L_802512F0:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 802512F0
  c->r[31]=c->r[25]|c->r[25]; // 802512F4
  c->r[26]=c->r[30]+0x00002000u; // 802512F8
  c->r[28]=c->r[29]+c->r[0]; // 802512FC
  goto L_8025132C; // 80251300
L_80251304:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 80251304
  c->r[3]=c->r[27]|c->r[27]; // 80251308
  c->lr=0x80251310u; f_800C297C(c); // 8025130C
  c->r[0]=c->r[3]+0x00000001u; // 80251310
  c->r[4]=c->r[27]|c->r[27]; // 80251314
  c->r[26]=c->r[26]-c->r[0]; // 80251318
  c->r[3]=c->r[26]|c->r[26]; // 8025131C
  c->lr=0x80251324u; f_800CA250(c); // 80251320
  c->r[0]=c->r[26]-c->r[30]; // 80251324
  W32(c->r[28]+0x00000000u,c->r[0]); // 80251328
L_8025132C:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 8025132C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 80251330
  if (!crb(c,0)) { IRQCHK(c); goto L_80251304; } // 80251334
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 80251338
  c->r[0]=c->r[26]-c->r[30]; // 8025133C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80251340
  c->r[7]=0u+0x00000000u; // 80251344
  c->r[6]=c->r[30]+c->r[4]; // 80251348
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8025134C
  c->r[6]=c->r[6]-c->r[0]; // 80251350
  if (crb(c,2)) { goto L_80251404; } // 80251354
  cmpu(c,0,c->r[3],0x00000008u); // 80251358
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 8025135C
  if (!crb(c,1)) { goto L_802513D0; } // 80251360
  c->r[0]=c->r[3]+0x00000007u; // 80251364
  c->r[4]=c->r[29]|c->r[29]; // 80251368
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8025136C
  c->r[5]=c->r[6]|c->r[6]; // 80251370
  c->ctr=c->r[0]; // 80251374
  cmpu(c,0,c->r[3],0x00000000u); // 80251378
  if (!crb(c,1)) { goto L_802513D0; } // 8025137C
L_80251380:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80251380
  c->r[7]=c->r[7]+0x00000008u; // 80251384
  W32(c->r[5]+0x00000000u,c->r[0]); // 80251388
  c->r[0]=R32(c->r[4]+0x00000004u); // 8025138C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80251390
  c->r[0]=R32(c->r[4]+0x00000008u); // 80251394
  W32(c->r[5]+0x00000008u,c->r[0]); // 80251398
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8025139C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 802513A0
  c->r[0]=R32(c->r[4]+0x00000010u); // 802513A4
  W32(c->r[5]+0x00000010u,c->r[0]); // 802513A8
  c->r[0]=R32(c->r[4]+0x00000014u); // 802513AC
  W32(c->r[5]+0x00000014u,c->r[0]); // 802513B0
  c->r[0]=R32(c->r[4]+0x00000018u); // 802513B4
  W32(c->r[5]+0x00000018u,c->r[0]); // 802513B8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802513BC
  c->r[4]=c->r[4]+0x00000020u; // 802513C0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802513C4
  c->r[5]=c->r[5]+0x00000020u; // 802513C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251380; } // 802513CC
L_802513D0:;
  c->r[3]=c->r[31]+0x00000001u; // 802513D0
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802513D4
  c->r[0]=c->r[3]-c->r[7]; // 802513D8
  c->r[4]=c->r[29]+c->r[5]; // 802513DC
  c->r[5]=c->r[6]+c->r[5]; // 802513E0
  c->ctr=c->r[0]; // 802513E4
  cmpu(c,0,c->r[7],c->r[3]); // 802513E8
  if (!crb(c,0)) { goto L_80251404; } // 802513EC
L_802513F0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802513F0
  c->r[4]=c->r[4]+0x00000004u; // 802513F4
  W32(c->r[5]+0x00000000u,c->r[0]); // 802513F8
  c->r[5]=c->r[5]+0x00000004u; // 802513FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802513F0; } // 80251400
L_80251404:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 80251404
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 80251408
  c->r[0]=c->r[0]-c->r[30]; // 8025140C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80251410
L_80251414:;
  c->r[11]=c->r[1]+0x00000030u; // 80251414
  c->r[3]=0u+0x00000001u; // 80251418
  c->lr=0x80251420u; f_800C2E90(c); // 8025141C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80251420
  c->lr=c->r[0]; // 80251424
  c->r[1]=c->r[1]+0x00000030u; // 80251428
  return; // 8025142C
}

// __OSCheckCompanyCode
void f_80251430(Ctx* __restrict c) {
  trace_call(0x80251430u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251430
  c->r[0]=c->lr; // 80251434
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80251438
  W32(c->r[1]+0x000000ACu,c->r[31]); // 8025143C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80251440
  c->r[30]=c->r[5]|c->r[5]; // 80251444
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80251448
  c->r[29]=c->r[3]|c->r[3]; // 8025144C
  c->r[3]=c->r[1]+0x00000054u; // 80251450
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80251454
  c->r[28]=c->r[4]|c->r[4]; // 80251458
  c->lr=0x80251460u; f_80241530(c); // 8025145C
  cmps(c,0,(int32_t)c->r[3],0); // 80251460
  if (crb(c,2)) { goto L_80251470; } // 80251464
  c->r[3]=0u+0x00000000u; // 80251468
  goto L_80251524; // 8025146C
L_80251470:;
  c->r[3]=c->r[1]+0x00000054u; // 80251470
  c->r[4]=c->r[1]+0x00000008u; // 80251474
  c->lr=0x8025147Cu; f_80240230(c); // 80251478
  cmps(c,0,(int32_t)c->r[3],0); // 8025147C
  if (crb(c,2)) { goto L_8025148C; } // 80251480
  c->r[3]=0u+0x00000000u; // 80251484
  goto L_80251524; // 80251488
L_8025148C:;
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 8025148C
  cmpu(c,0,c->r[31],0x00000002u); // 80251490
  if (!crb(c,2)) { goto L_802514C4; } // 80251494
  c->lr=0x8025149Cu; f_80243C30(c); // 80251498
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8025149C
  cmpu(c,0,c->r[0],0x00000080u); // 802514A0
  if (!crb(c,2)) { goto L_802514C4; } // 802514A4
  c->lr=0x802514ACu; f_80242910(c); // 802514A8
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 802514AC
  c->r[0]=c->r[3]+0xF0000000u; // 802514B0
  cmpu(c,0,c->r[0],0x00000000u); // 802514B4
  if (!crb(c,2)) { goto L_802514C4; } // 802514B8
  c->lr=0x802514C0u; f_801FDA90(c); // 802514BC
  c->r[31]=R16(c->r[3]+0x00000004u); // 802514C0
L_802514C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 802514C4
  if (crb(c,2)) { goto L_802514D8; } // 802514C8
  c->lr=0x802514D0u; f_801FDA90(c); // 802514CC
  c->r[0]=R16(c->r[3]+0x00000004u); // 802514D0
  goto L_80251518; // 802514D4
L_802514D8:;
  c->r[0]=0u+0xFFFFFFFFu; // 802514D8
  c->r[4]=0u+0x803C0000u; // 802514DC
  c->r[3]=c->r[1]+0x00000010u; // 802514E0
  c->r[4]=c->r[4]+0xFFFFB618u; // 802514E4
  c->r[5]=c->r[29]&c->r[0]; // 802514E8
  c->r[6]=c->r[28]&c->r[0]; // 802514EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802514F0
  c->lr=0x802514F8u; f_800C8B00(c); // 802514F4
  c->r[3]=c->r[1]+0x00000010u; // 802514F8
  c->r[4]=c->r[1]+0x00000008u; // 802514FC
  c->lr=0x80251504u; f_80240230(c); // 80251500
  cmps(c,0,(int32_t)c->r[3],0); // 80251504
  if (crb(c,2)) { goto L_80251514; } // 80251508
  c->r[3]=0u+0x00000000u; // 8025150C
  goto L_80251524; // 80251510
L_80251514:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80251514
L_80251518:;
  c->r[0]=c->r[0]-c->r[31]; // 80251518
  c->r[0]=cntlz(c->r[0]); // 8025151C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80251520
L_80251524:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80251524
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80251528
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8025152C
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80251530
  c->r[28]=R32(c->r[1]+0x000000A0u); // 80251534
  c->lr=c->r[0]; // 80251538
  c->r[1]=c->r[1]+0x000000B0u; // 8025153C
  return; // 80251540
}

// __OSCheckTmdSysVersion
void f_80251550(Ctx* __restrict c) {
  trace_call(0x80251550u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80251550
  c->r[12]=c->r[1]|c->r[1]; // 80251554
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80251558
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025155C
  c->r[0]=c->lr; // 80251560
  c->r[5]=0u+0x00000000u; // 80251564
  W32(c->r[12]+0x00000004u,c->r[0]); // 80251568
  c->r[0]=0u+0x00000000u; // 8025156C
  c->r[6]=c->r[1]+0x00000028u; // 80251570
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80251574
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80251578
  W32(c->r[1]+0x00000028u,c->r[0]); // 8025157C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80251580
  W32(c->r[1]+0x00000020u,c->r[0]); // 80251584
  c->r[30]=R32(c->r[3]+0x00000008u); // 80251588
  c->r[31]=R32(c->r[3]+0x00000004u); // 8025158C
  c->r[4]=c->r[30]|c->r[30]; // 80251590
  c->r[3]=c->r[31]|c->r[31]; // 80251594
  c->lr=0x8025159Cu; f_80201A50(c); // 80251598
  cmps(c,0,(int32_t)c->r[3],0); // 8025159C
  if (!crb(c,2)) { goto L_802515B0; } // 802515A0
  c->r[0]=R32(c->r[1]+0x00000028u); // 802515A4
  cmpu(c,0,c->r[0],0x00000001u); // 802515A8
  if (crb(c,2)) { goto L_802515B8; } // 802515AC
L_802515B0:;
  c->r[3]=0u+0x00000000u; // 802515B0
  goto L_80251608; // 802515B4
L_802515B8:;
  c->r[0]=0u+0xFFFFFFFFu; // 802515B8
  c->r[4]=0u+0x803C0000u; // 802515BC
  c->r[3]=c->r[1]+0x00000040u; // 802515C0
  c->r[4]=c->r[4]+0xFFFFB630u; // 802515C4
  c->r[5]=c->r[31]&c->r[0]; // 802515C8
  c->r[6]=c->r[30]&c->r[0]; // 802515CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802515D0
  c->lr=0x802515D8u; f_800C8B00(c); // 802515D4
  c->r[3]=c->r[1]+0x00000040u; // 802515D8
  c->r[4]=c->r[1]+0x00000024u; // 802515DC
  c->r[5]=c->r[1]+0x00000020u; // 802515E0
  c->lr=0x802515E8u; f_80241A70(c); // 802515E4
  cmps(c,0,(int32_t)c->r[3],0); // 802515E8
  if (!crb(c,2)) { goto L_802515FC; } // 802515EC
  c->r[0]=R32(c->r[1]+0x00000020u); // 802515F0
  cmpu(c,0,c->r[0],0x00000002u); // 802515F4
  if (crb(c,1)) { goto L_80251604; } // 802515F8
L_802515FC:;
  c->r[3]=0u+0x00000000u; // 802515FC
  goto L_80251608; // 80251600
L_80251604:;
  c->r[3]=0u+0x00000001u; // 80251604
L_80251608:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80251608
  c->r[0]=R32(c->r[10]+0x00000004u); // 8025160C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80251610
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80251614
  c->lr=c->r[0]; // 80251618
  c->r[1]=c->r[10]|c->r[10]; // 8025161C
  return; // 80251620
}

// __OSGetValidTicketIndex
void f_80251630(Ctx* __restrict c) {
  trace_call(0x80251630u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251630
  c->r[0]=c->lr; // 80251634
  W32(c->r[1]+0x00000044u,c->r[0]); // 80251638
  c->r[11]=c->r[1]+0x00000040u; // 8025163C
  c->lr=0x80251644u; f_800C2E3C(c); // 80251640
  cmps(c,0,(int32_t)c->r[3],0); // 80251644
  c->r[23]=c->r[4]|c->r[4]; // 80251648
  c->r[27]=0u+0x00000000u; // 8025164C
  c->r[26]=0u+0x00000000u; // 80251650
  c->r[25]=0u+0x00000000u; // 80251654
  c->r[24]=0u+0x00000000u; // 80251658
  if (!crb(c,2)) { goto L_80251684; } // 8025165C
  c->r[3]=0u+0x803C0000u; // 80251660
  c->r[5]=0u+0x803C0000u; // 80251664
  c->r[3]=c->r[3]+0xFFFFB64Cu; // 80251668
  c->r[4]=0u+0x0000019Eu; // 8025166C
  c->r[5]=c->r[5]+0xFFFFB674u; // 80251670
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251674
  c->lr=0x8025167Cu; f_80245CC0(c); // 80251678
  c->r[3]=0u+0xFFFFFC07u; // 8025167C
  goto L_802517F8; // 80251680
L_80251684:;
  c->r[29]=c->r[3]|c->r[3]; // 80251684
  c->r[28]=0u+0x00000000u; // 80251688
  c->r[30]=0u+0x00000001u; // 8025168C
  c->r[31]=0u+0x00000002u; // 80251690
  goto L_802517D4; // 80251694
L_80251698:;
  c->r[3]=c->r[29]|c->r[29]; // 80251698
  c->r[4]=c->r[1]+0x00000008u; // 8025169C
  c->r[5]=c->r[1]+0x0000000Cu; // 802516A0
  c->lr=0x802516A8u; f_80250E40(c); // 802516A4
  cmps(c,0,(int32_t)c->r[3],0); // 802516A8
  if (crb(c,1)) { goto L_802517CC; } // 802516AC
  if (crb(c,2)) { goto L_802516B8; } // 802516B0
  goto L_802517F8; // 802516B4
L_802516B8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 802516B8
  cmps(c,0,(int32_t)c->r[0],0); // 802516BC
  if (crb(c,2)) { goto L_802516D0; } // 802516C0
  cmps(c,0,(int32_t)c->r[0],1); // 802516C4
  if (crb(c,2)) { goto L_802517B0; } // 802516C8
  goto L_802517CC; // 802516CC
L_802516D0:;
  cmps(c,0,(int32_t)c->r[26],0); // 802516D0
  c->r[5]=0u+0x00000000u; // 802516D4
  if (!crb(c,2)) { goto L_802516E4; } // 802516D8
  c->r[27]=c->r[28]|c->r[28]; // 802516DC
  c->r[26]=0u+0x00000001u; // 802516E0
L_802516E4:;
  c->r[0]=R8(c->r[29]+0x00000019u); // 802516E4
  c->r[4]=0u+0x00000000u; // 802516E8
  c->r[3]=R8(c->r[29]+0x00000018u); // 802516EC
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 802516F0
  c->ctr=c->r[31]; // 802516F4
L_802516F8:;
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 802516F8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 802516FC
  if (crb(c,2)) { goto L_80251708; } // 80251700
  c->r[5]=c->r[5]+0x00000001u; // 80251704
L_80251708:;
  c->r[4]=c->r[4]+0x00000001u; // 80251708
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8025170C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251710
  if (crb(c,2)) { goto L_8025171C; } // 80251714
  c->r[5]=c->r[5]+0x00000001u; // 80251718
L_8025171C:;
  c->r[4]=c->r[4]+0x00000001u; // 8025171C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80251720
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251724
  if (crb(c,2)) { goto L_80251730; } // 80251728
  c->r[5]=c->r[5]+0x00000001u; // 8025172C
L_80251730:;
  c->r[4]=c->r[4]+0x00000001u; // 80251730
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80251734
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251738
  if (crb(c,2)) { goto L_80251744; } // 8025173C
  c->r[5]=c->r[5]+0x00000001u; // 80251740
L_80251744:;
  c->r[4]=c->r[4]+0x00000001u; // 80251744
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80251748
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8025174C
  if (crb(c,2)) { goto L_80251758; } // 80251750
  c->r[5]=c->r[5]+0x00000001u; // 80251754
L_80251758:;
  c->r[4]=c->r[4]+0x00000001u; // 80251758
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 8025175C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251760
  if (crb(c,2)) { goto L_8025176C; } // 80251764
  c->r[5]=c->r[5]+0x00000001u; // 80251768
L_8025176C:;
  c->r[4]=c->r[4]+0x00000001u; // 8025176C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80251770
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251774
  if (crb(c,2)) { goto L_80251780; } // 80251778
  c->r[5]=c->r[5]+0x00000001u; // 8025177C
L_80251780:;
  c->r[4]=c->r[4]+0x00000001u; // 80251780
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[30]<<((c->r[4])&31)); // 80251784
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80251788
  if (crb(c,2)) { goto L_80251794; } // 8025178C
  c->r[5]=c->r[5]+0x00000001u; // 80251790
L_80251794:;
  c->r[4]=c->r[4]+0x00000001u; // 80251794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802516F8; } // 80251798
  cmpu(c,0,c->r[5],c->r[25]); // 8025179C
  if (!crb(c,1)) { goto L_802517CC; } // 802517A0
  c->r[27]=c->r[28]|c->r[28]; // 802517A4
  c->r[25]=c->r[5]|c->r[5]; // 802517A8
  goto L_802517CC; // 802517AC
L_802517B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 802517B0
  if (!crb(c,2)) { goto L_802517CC; } // 802517B4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802517B8
  cmpu(c,0,c->r[0],c->r[24]); // 802517BC
  if (!crb(c,1)) { goto L_802517CC; } // 802517C0
  c->r[27]=c->r[28]|c->r[28]; // 802517C4
  c->r[24]=c->r[0]|c->r[0]; // 802517C8
L_802517CC:;
  c->r[29]=c->r[29]+0x000000D8u; // 802517CC
  c->r[28]=c->r[28]+0x00000001u; // 802517D0
L_802517D4:;
  cmpu(c,0,c->r[28],c->r[23]); // 802517D4
  if (crb(c,0)) { IRQCHK(c); goto L_80251698; } // 802517D8
  cmps(c,0,(int32_t)c->r[26],0); // 802517DC
  if (!crb(c,2)) { goto L_802517F4; } // 802517E0
  cmps(c,0,(int32_t)c->r[24],0); // 802517E4
  if (!crb(c,2)) { goto L_802517F4; } // 802517E8
  c->r[3]=0u+0xFFFFFFFFu; // 802517EC
  goto L_802517F8; // 802517F0
L_802517F4:;
  c->r[3]=c->r[27]|c->r[27]; // 802517F4
L_802517F8:;
  c->r[11]=c->r[1]+0x00000040u; // 802517F8
  c->lr=0x80251800u; f_800C2E88(c); // 802517FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80251800
  c->lr=c->r[0]; // 80251804
  c->r[1]=c->r[1]+0x00000040u; // 80251808
  return; // 8025180C
}

// __OSRelaunchTitle
void f_80251810(Ctx* __restrict c) {
  trace_call(0x80251810u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80251810
  c->r[12]=c->r[1]|c->r[1]; // 80251814
  c->r[11]=addc(c,~c->r[11],0xFFFFFF60u,1); // 80251818
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025181C
  c->r[0]=c->lr; // 80251820
  W32(c->r[12]+0x00000004u,c->r[0]); // 80251824
  c->r[0]=0u+0x00000001u; // 80251828
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8025182C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80251830
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80251834
  c->r[29]=c->r[3]|c->r[3]; // 80251838
  c->r[3]=0u+0x81280000u; // 8025183C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80251840
  c->lr=0x80251848u; f_802448F0(c); // 80251844
  c->r[3]=0u+0x812F0000u; // 80251848
  c->lr=0x80251850u; f_802448C0(c); // 8025184C
  c->lr=0x80251854u; f_80201900(c); // 80251850
  cmps(c,0,(int32_t)c->r[3],0); // 80251854
  if (crb(c,2)) { goto L_80251860; } // 80251858
  c->lr=0x80251860u; f_8024BD90(c); // 8025185C
L_80251860:;
  c->r[3]=c->r[1]+0x00000040u; // 80251860
  c->lr=0x80251868u; f_80201EC0(c); // 80251864
  cmps(c,0,(int32_t)c->r[3],0); // 80251868
  if (crb(c,2)) { goto L_80251874; } // 8025186C
  c->lr=0x80251874u; f_8024BD90(c); // 80251870
L_80251874:;
  c->r[3]=0u+0x000000E0u; // 80251874
  c->r[4]=0u+0x00000020u; // 80251878
  c->lr=0x80251880u; f_80244900(c); // 8025187C
  c->r[0]=0u+0x00000000u; // 80251880
  c->r[31]=c->r[3]|c->r[3]; // 80251884
  cmpu(c,0,c->r[3],c->r[0]); // 80251888
  if (!crb(c,2)) { goto L_80251894; } // 8025188C
  c->lr=0x80251894u; f_8024BD90(c); // 80251890
L_80251894:;
  c->r[3]=c->r[31]|c->r[31]; // 80251894
  c->r[4]=0u+0x00000000u; // 80251898
  c->r[5]=0u+0x000000E0u; // 8025189C
  c->lr=0x802518A4u; f_80004350(c); // 802518A0
  c->r[4]=c->r[31]|c->r[31]; // 802518A4
  c->r[3]=0u+0x00000000u; // 802518A8
  c->lr=0x802518B0u; f_80201B70(c); // 802518AC
  cmps(c,0,(int32_t)c->r[3],-1017); // 802518B0
  if (!crb(c,2)) { goto L_80251938; } // 802518B4
  c->r[3]=R32(c->r[1]+0x00000040u); // 802518B8
  c->r[6]=c->r[1]+0x00000028u; // 802518BC
  c->r[4]=R32(c->r[1]+0x00000044u); // 802518C0
  c->r[5]=0u+0x00000000u; // 802518C4
  c->lr=0x802518CCu; f_80201A50(c); // 802518C8
  cmps(c,0,(int32_t)c->r[3],0); // 802518CC
  if (crb(c,2)) { goto L_802518D8; } // 802518D0
  c->lr=0x802518D8u; f_8024BD90(c); // 802518D4
L_802518D8:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 802518D8
  c->r[4]=0u+0x00000020u; // 802518DC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 802518E0
  c->r[0]=c->r[3]+0x0000001Fu; // 802518E4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802518E8
  c->lr=0x802518F0u; f_80244900(c); // 802518EC
  c->r[0]=0u+0x00000000u; // 802518F0
  c->r[30]=c->r[3]|c->r[3]; // 802518F4
  cmpu(c,0,c->r[3],c->r[0]); // 802518F8
  if (!crb(c,2)) { goto L_80251904; } // 802518FC
  c->lr=0x80251904u; f_8024BD90(c); // 80251900
L_80251904:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 80251904
  c->r[5]=c->r[30]|c->r[30]; // 80251908
  c->r[4]=R32(c->r[1]+0x00000044u); // 8025190C
  c->r[6]=c->r[1]+0x00000028u; // 80251910
  c->lr=0x80251918u; f_80201A50(c); // 80251914
  cmps(c,0,(int32_t)c->r[3],0); // 80251918
  if (crb(c,2)) { goto L_80251924; } // 8025191C
  c->lr=0x80251924u; f_8024BD90(c); // 80251920
L_80251924:;
  c->r[3]=c->r[31]|c->r[31]; // 80251924
  c->r[4]=c->r[30]|c->r[30]; // 80251928
  c->r[5]=0u+0x000000D8u; // 8025192C
  c->lr=0x80251934u; f_80004000(c); // 80251930
  goto L_80251988; // 80251934
L_80251938:;
  cmps(c,0,(int32_t)c->r[3],0); // 80251938
  if (crb(c,2)) { goto L_80251948; } // 8025193C
  c->lr=0x80251944u; f_8024BD90(c); // 80251940
  goto L_80251988; // 80251944
L_80251948:;
  c->lr=0x8025194Cu; f_80250990(c); // 80251948
  cmps(c,0,(int32_t)c->r[3],0); // 8025194C
  if (crb(c,2)) { goto L_80251988; } // 80251950
  c->r[3]=0u+0x00000000u; // 80251954
  c->r[0]=0u+0xFFFFFFFFu; // 80251958
  W32(c->r[1]+0x00000024u,c->r[3]); // 8025195C
  c->r[3]=c->r[31]|c->r[31]; // 80251960
  c->r[4]=c->r[1]+0x00000024u; // 80251964
  c->r[5]=c->r[1]+0x00000020u; // 80251968
  W32(c->r[1]+0x00000020u,c->r[0]); // 8025196C
  c->lr=0x80251974u; f_80250E40(c); // 80251970
  c->r[0]=R32(c->r[1]+0x00000020u); // 80251974
  cmps(c,0,(int32_t)c->r[0],0); // 80251978
  if (!crb(c,2)) { goto L_80251988; } // 8025197C
  c->lr=0x80251984u; f_80250B70(c); // 80251980
  c->lr=0x80251988u; f_8024BD90(c); // 80251984
L_80251988:;
  c->r[3]=0u+0x00002000u; // 80251988
  c->r[4]=0u+0x00000040u; // 8025198C
  c->lr=0x80251994u; f_80244900(c); // 80251990
  c->r[30]=c->r[3]+0x00000FE0u; // 80251994
  c->r[4]=0u+0x00000000u; // 80251998
  c->r[5]=0u+0x00002000u; // 8025199C
  c->lr=0x802519A4u; f_80004350(c); // 802519A0
  c->r[0]=R32(c->r[1]+0x00000040u); // 802519A4
  c->r[3]=R32(c->r[1]+0x00000044u); // 802519A8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 802519AC
  W32(c->r[30]+0x00000018u,c->r[0]); // 802519B0
  c->lr=0x802519B8u; f_80243C30(c); // 802519B4
  W8(c->r[30]+0x0000000Au,c->r[3]); // 802519B8
  c->r[3]=0u+0x00000001u; // 802519BC
  c->r[0]=c->r[29]|0x80000000u; // 802519C0
  W8(c->r[30]+0x0000000Bu,c->r[3]); // 802519C4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 802519C8
  c->lr=0x802519D0u; f_80250780(c); // 802519CC
  c->r[3]=c->r[30]|c->r[30]; // 802519D0
  c->lr=0x802519D8u; f_80250830(c); // 802519D4
  c->r[3]=c->r[1]+0x00000060u; // 802519D8
  c->lr=0x802519E0u; f_802500B0(c); // 802519DC
  c->r[0]=0u+0x00000003u; // 802519E0
  W8(c->r[1]+0x00000065u,c->r[0]); // 802519E4
  c->r[3]=c->r[1]+0x00000060u; // 802519E8
  c->lr=0x802519F0u; f_8024FFC0(c); // 802519EC
  c->r[3]=R32(c->r[1]+0x00000040u); // 802519F0
  c->r[5]=c->r[31]|c->r[31]; // 802519F4
  c->r[4]=R32(c->r[1]+0x00000044u); // 802519F8
  c->lr=0x80251A00u; f_802019B0(c); // 802519FC
  cmps(c,0,(int32_t)c->r[3],0); // 80251A00
  if (crb(c,2)) { goto L_80251A10; } // 80251A04
  c->lr=0x80251A0Cu; f_8024BD90(c); // 80251A08
  c->r[0]=c->r[0]|0x00000000u; // 80251A0C
L_80251A10:;
  IRQCHK(c); goto L_80251A10; // 80251A10
}

// __OSLaunchTitle
void f_80251A20(Ctx* __restrict c) {
  trace_call(0x80251A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251A20
  c->r[0]=c->lr; // 80251A24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80251A28
  c->r[0]=0u+0x00000001u; // 80251A2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80251A30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80251A34
  W32(c->r[1]+0x00000014u,c->r[29]); // 80251A38
  c->r[29]=c->r[3]|c->r[3]; // 80251A3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80251A40
  c->r[28]=c->r[4]|c->r[4]; // 80251A44
  W32(c->r[1]+0x00000008u,c->r[0]); // 80251A48
  c->lr=0x80251A50u; f_80201900(c); // 80251A4C
  cmps(c,0,(int32_t)c->r[3],0); // 80251A50
  if (!crb(c,2)) { goto L_80251B1C; } // 80251A54
  c->r[3]=0u+0x000000E0u; // 80251A58
  c->r[4]=0u+0x00000020u; // 80251A5C
  c->lr=0x80251A64u; f_80244900(c); // 80251A60
  cmps(c,0,(int32_t)c->r[3],0); // 80251A64
  c->r[31]=c->r[3]|c->r[3]; // 80251A68
  if (crb(c,2)) { goto L_80251B1C; } // 80251A6C
  c->r[4]=0u+0x00000000u; // 80251A70
  c->r[5]=0u+0x000000E0u; // 80251A74
  c->lr=0x80251A7Cu; f_80004350(c); // 80251A78
  c->r[4]=c->r[28]|c->r[28]; // 80251A7C
  c->r[3]=c->r[29]|c->r[29]; // 80251A80
  c->r[6]=c->r[1]+0x00000008u; // 80251A84
  c->r[5]=0u+0x00000000u; // 80251A88
  c->lr=0x80251A90u; f_80201A50(c); // 80251A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80251A90
  if (!crb(c,2)) { goto L_80251B1C; } // 80251A94
  c->r[0]=R32(c->r[1]+0x00000008u); // 80251A98
  c->r[4]=0u+0x00000020u; // 80251A9C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80251AA0
  c->r[0]=c->r[3]+0x0000001Fu; // 80251AA4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80251AA8
  c->lr=0x80251AB0u; f_80244900(c); // 80251AAC
  cmps(c,0,(int32_t)c->r[3],0); // 80251AB0
  c->r[30]=c->r[3]|c->r[3]; // 80251AB4
  if (crb(c,2)) { goto L_80251B1C; } // 80251AB8
  c->r[4]=c->r[28]|c->r[28]; // 80251ABC
  c->r[3]=c->r[29]|c->r[29]; // 80251AC0
  c->r[5]=c->r[30]|c->r[30]; // 80251AC4
  c->r[6]=c->r[1]+0x00000008u; // 80251AC8
  c->lr=0x80251AD0u; f_80201A50(c); // 80251ACC
  cmps(c,0,(int32_t)c->r[3],0); // 80251AD0
  if (!crb(c,2)) { goto L_80251B1C; } // 80251AD4
  c->r[4]=R32(c->r[1]+0x00000008u); // 80251AD8
  c->r[3]=c->r[30]|c->r[30]; // 80251ADC
  c->lr=0x80251AE4u; f_80251630(c); // 80251AE0
  cmps(c,0,(int32_t)c->r[3],0); // 80251AE4
  if (crb(c,0)) { goto L_80251B1C; } // 80251AE8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 80251AEC
  c->r[3]=c->r[31]|c->r[31]; // 80251AF0
  c->r[5]=0u+0x000000D8u; // 80251AF4
  c->r[4]=c->r[30]+c->r[0]; // 80251AF8
  c->lr=0x80251B00u; f_80004000(c); // 80251AFC
  c->r[4]=c->r[28]|c->r[28]; // 80251B00
  c->r[3]=c->r[29]|c->r[29]; // 80251B04
  c->r[5]=c->r[31]|c->r[31]; // 80251B08
  c->lr=0x80251B10u; f_802019B0(c); // 80251B0C
  cmps(c,0,(int32_t)c->r[3],0); // 80251B10
  if (!crb(c,2)) { goto L_80251B1C; } // 80251B14
L_80251B18:;
  IRQCHK(c); goto L_80251B18; // 80251B18
L_80251B1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80251B1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80251B20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80251B24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80251B28
  c->r[28]=R32(c->r[1]+0x00000010u); // 80251B2C
  c->lr=c->r[0]; // 80251B30
  c->r[1]=c->r[1]+0x00000020u; // 80251B34
  return; // 80251B38
}

// fn_80251B40
void f_80251B40(Ctx* __restrict c) {
  trace_call(0x80251B40u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80251B40
  c->r[12]=c->r[1]|c->r[1]; // 80251B44
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80251B48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80251B4C
  c->r[0]=c->lr; // 80251B50
  c->r[11]=c->r[12]|c->r[12]; // 80251B54
  W32(c->r[12]+0x00000004u,c->r[0]); // 80251B58
  c->lr=0x80251B60u; f_800C2E40(c); // 80251B5C
  c->r[31]=0u+0x803C0000u; // 80251B60
  c->r[29]=0u+0x00000000u; // 80251B64
  W32(c->r[1]+0x00000020u,c->r[29]); // 80251B68
  c->r[25]=c->r[3]|c->r[3]; // 80251B6C
  c->r[24]=c->r[4]|c->r[4]; // 80251B70
  c->r[26]=c->r[5]|c->r[5]; // 80251B74
  c->r[27]=c->r[6]|c->r[6]; // 80251B78
  c->r[28]=c->r[7]|c->r[7]; // 80251B7C
  c->r[31]=c->r[31]+0xFFFFB618u; // 80251B80
  c->lr=0x80251B88u; f_802494E0(c); // 80251B84
  c->lr=0x80251B8Cu; f_80201900(c); // 80251B88
  cmps(c,0,(int32_t)c->r[3],0); // 80251B8C
  if (crb(c,2)) { goto L_80251B98; } // 80251B90
  c->lr=0x80251B98u; f_8024BD90(c); // 80251B94
L_80251B98:;
  c->r[4]=c->r[24]|c->r[24]; // 80251B98
  c->r[3]=c->r[25]|c->r[25]; // 80251B9C
  c->r[6]=c->r[1]+0x00000020u; // 80251BA0
  c->r[5]=0u+0x00000000u; // 80251BA4
  c->lr=0x80251BACu; f_80201D10(c); // 80251BA8
  cmps(c,0,(int32_t)c->r[3],0); // 80251BAC
  if (crb(c,2)) { goto L_80251BB8; } // 80251BB0
  c->lr=0x80251BB8u; f_8024BD90(c); // 80251BB4
L_80251BB8:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 80251BB8
  c->r[4]=0u+0x00000040u; // 80251BBC
  c->r[0]=c->r[3]+0x0000001Fu; // 80251BC0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80251BC4
  c->lr=0x80251BCCu; f_80244900(c); // 80251BC8
  c->r[0]=0u+0x00000000u; // 80251BCC
  c->r[29]=c->r[3]|c->r[3]; // 80251BD0
  cmpu(c,0,c->r[3],c->r[0]); // 80251BD4
  if (!crb(c,2)) { goto L_80251BE0; } // 80251BD8
  c->lr=0x80251BE0u; f_8024BD90(c); // 80251BDC
L_80251BE0:;
  c->r[4]=c->r[24]|c->r[24]; // 80251BE0
  c->r[3]=c->r[25]|c->r[25]; // 80251BE4
  c->r[5]=c->r[29]|c->r[29]; // 80251BE8
  c->r[6]=c->r[1]+0x00000020u; // 80251BEC
  c->lr=0x80251BF4u; f_80201D10(c); // 80251BF0
  cmps(c,0,(int32_t)c->r[3],0); // 80251BF4
  if (crb(c,2)) { goto L_80251C00; } // 80251BF8
  c->lr=0x80251C00u; f_8024BD90(c); // 80251BFC
L_80251C00:;
  c->r[3]=c->r[29]|c->r[29]; // 80251C00
  c->lr=0x80251C08u; f_80251550(c); // 80251C04
  cmps(c,0,(int32_t)c->r[3],0); // 80251C08
  if (!crb(c,2)) { goto L_80251C20; } // 80251C0C
  c->r[3]=c->r[31]+0x00000068u; // 80251C10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251C14
  c->lr=0x80251C1Cu; f_80245CC0(c); // 80251C18
  c->lr=0x80251C20u; f_8024BD90(c); // 80251C1C
L_80251C20:;
  cmps(c,0,(int32_t)c->r[28],0); // 80251C20
  if (crb(c,2)) { goto L_80251C98; } // 80251C24
  c->r[4]=c->r[24]|c->r[24]; // 80251C28
  c->r[3]=c->r[25]|c->r[25]; // 80251C2C
  c->r[5]=0u+0x00000000u; // 80251C30
  c->lr=0x80251C38u; f_80251430(c); // 80251C34
  cmps(c,0,(int32_t)c->r[3],0); // 80251C38
  if (!crb(c,2)) { goto L_80251C50; } // 80251C3C
  c->r[3]=c->r[31]+0x00000094u; // 80251C40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251C44
  c->lr=0x80251C4Cu; f_80245CC0(c); // 80251C48
  c->lr=0x80251C50u; f_8024BD90(c); // 80251C4C
L_80251C50:;
  c->r[28]=R32(c->r[29]+0x0000001Au); // 80251C50
  cmpu(c,0,c->r[28],0x00000003u); // 80251C54
  if (!crb(c,2)) { goto L_80251C64; } // 80251C58
  c->r[0]=0u+0x00000001u; // 80251C5C
  goto L_80251C80; // 80251C60
L_80251C64:;
  c->lr=0x80251C68u; f_80255490(c); // 80251C64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80251C68
  cmpu(c,0,c->r[28],c->r[0]); // 80251C6C
  if (!crb(c,2)) { goto L_80251C7C; } // 80251C70
  c->r[0]=0u+0x00000001u; // 80251C74
  goto L_80251C80; // 80251C78
L_80251C7C:;
  c->r[0]=0u+0x00000000u; // 80251C7C
L_80251C80:;
  cmps(c,0,(int32_t)c->r[0],0); // 80251C80
  if (!crb(c,2)) { goto L_80251C98; } // 80251C84
  c->r[3]=c->r[31]+0x000000C4u; // 80251C88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251C8C
  c->lr=0x80251C94u; f_80245CC0(c); // 80251C90
  c->lr=0x80251C98u; f_8024BD90(c); // 80251C94
L_80251C98:;
  c->r[0]=R8(c->r[29]+0x00000032u); // 80251C98
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80251C9C
  if (crb(c,2)) { goto L_80251CAC; } // 80251CA0
  c->r[0]=0u+0x00000001u; // 80251CA4
  goto L_80251CB0; // 80251CA8
L_80251CAC:;
  c->r[0]=0u+0x00000000u; // 80251CAC
L_80251CB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80251CB0
  if (!crb(c,2)) { goto L_80251CC8; } // 80251CB4
  c->lr=0x80251CBCu; f_801FDAB0(c); // 80251CB8
  cmpu(c,0,c->r[3],0x00000002u); // 80251CBC
  if (!crb(c,2)) { goto L_80251CC8; } // 80251CC0
  c->lr=0x80251CC8u; f_801FDB80(c); // 80251CC4
L_80251CC8:;
  cmps(c,0,(int32_t)c->r[27],0); // 80251CC8
  if (!crb(c,2)) { goto L_80251CD8; } // 80251CCC
  cmps(c,0,(int32_t)c->r[26],0); // 80251CD0
  if (crb(c,2)) { goto L_80251F50; } // 80251CD4
L_80251CD8:;
  c->r[3]=0u+0x00002000u; // 80251CD8
  c->r[4]=0u+0x00000040u; // 80251CDC
  c->lr=0x80251CE4u; f_80244900(c); // 80251CE0
  c->r[29]=c->r[3]|c->r[3]; // 80251CE4
  c->r[30]=c->r[3]+0x00000FE0u; // 80251CE8
  c->r[6]=c->r[24]|c->r[24]; // 80251CEC
  c->r[5]=c->r[25]|c->r[25]; // 80251CF0
  c->r[3]=c->r[1]+0x00000060u; // 80251CF4
  c->r[4]=c->r[13]+0xFFFF9180u; // 80251CF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251CFC
  c->lr=0x80251D04u; f_800C8B00(c); // 80251D00
  cmps(c,0,(int32_t)c->r[27],0); // 80251D04
  c->r[28]=0u+0x00000000u; // 80251D08
  c->r[3]=0u+0x00000000u; // 80251D0C
  if (crb(c,2)) { goto L_80251D2C; } // 80251D10
  goto L_80251D20; // 80251D14
L_80251D18:;
  c->r[28]=c->r[28]+0x00000001u; // 80251D18
  c->r[3]=c->r[3]+0x00000004u; // 80251D1C
L_80251D20:;
  c->r[0]=R32(c->r[27]+c->r[3]); // 80251D20
  cmps(c,0,(int32_t)c->r[0],0); // 80251D24
  if (!crb(c,2)) { IRQCHK(c); goto L_80251D18; } // 80251D28
L_80251D2C:;
  c->r[0]=c->r[28]+0x00000002u; // 80251D2C
  c->r[4]=0u+0x00000001u; // 80251D30
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80251D34
  c->r[28]=c->r[28]+0x00000001u; // 80251D38
  c->lr=0x80251D40u; f_80244900(c); // 80251D3C
  cmps(c,0,(int32_t)c->r[28],1); // 80251D40
  c->r[0]=c->r[1]+0x00000060u; // 80251D44
  W32(c->r[3]+0x00000000u,c->r[0]); // 80251D48
  c->r[5]=c->r[3]|c->r[3]; // 80251D4C
  c->r[4]=c->r[28]+0xFFFFFFFFu; // 80251D50
  c->r[9]=0u+0x00000001u; // 80251D54
  c->r[6]=0u+0x00000004u; // 80251D58
  if (!crb(c,1)) { goto L_80251E3C; } // 80251D5C
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80251D60
  c->ctr=c->r[0]; // 80251D64
  if (crb(c,2)) { goto L_80251E18; } // 80251D68
L_80251D6C:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 80251D6C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251D70
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251D74
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80251D78
  W32(c->r[3]+c->r[6],c->r[0]); // 80251D7C
  c->r[8]=c->r[9]+0x00000001u; // 80251D80
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251D84
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251D88
  c->r[6]=c->r[6]+0x00000004u; // 80251D8C
  c->r[8]=c->r[9]+0x00000002u; // 80251D90
  W32(c->r[3]+c->r[6],c->r[0]); // 80251D94
  c->r[6]=c->r[6]+0x00000004u; // 80251D98
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251D9C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251DA0
  W32(c->r[3]+c->r[6],c->r[0]); // 80251DA4
  c->r[8]=c->r[9]+0x00000003u; // 80251DA8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251DAC
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251DB0
  c->r[6]=c->r[6]+0x00000004u; // 80251DB4
  c->r[8]=c->r[9]+0x00000004u; // 80251DB8
  W32(c->r[3]+c->r[6],c->r[0]); // 80251DBC
  c->r[6]=c->r[6]+0x00000004u; // 80251DC0
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251DC4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251DC8
  W32(c->r[3]+c->r[6],c->r[0]); // 80251DCC
  c->r[8]=c->r[9]+0x00000005u; // 80251DD0
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251DD4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251DD8
  c->r[6]=c->r[6]+0x00000004u; // 80251DDC
  c->r[8]=c->r[9]+0x00000006u; // 80251DE0
  W32(c->r[3]+c->r[6],c->r[0]); // 80251DE4
  c->r[6]=c->r[6]+0x00000004u; // 80251DE8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251DEC
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251DF0
  W32(c->r[3]+c->r[6],c->r[0]); // 80251DF4
  c->r[6]=c->r[6]+0x00000004u; // 80251DF8
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251DFC
  c->r[9]=c->r[9]+0x00000008u; // 80251E00
  W32(c->r[3]+c->r[6],c->r[0]); // 80251E04
  c->r[6]=c->r[6]+0x00000004u; // 80251E08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251D6C; } // 80251E0C
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 80251E10
  if (crb(c,2)) { goto L_80251E3C; } // 80251E14
L_80251E18:;
  c->ctr=c->r[4]; // 80251E18
  c->r[0]=c->r[0]|0x00000000u; // 80251E1C
L_80251E20:;
  c->r[8]=c->r[9]+0xFFFFFFFFu; // 80251E20
  c->r[9]=c->r[9]+0x00000001u; // 80251E24
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80251E28
  c->r[0]=R32(c->r[27]+c->r[7]); // 80251E2C
  W32(c->r[3]+c->r[6],c->r[0]); // 80251E30
  c->r[6]=c->r[6]+0x00000004u; // 80251E34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251E20; } // 80251E38
L_80251E3C:;
  c->r[3]=c->r[29]|c->r[29]; // 80251E3C
  c->r[4]=c->r[28]|c->r[28]; // 80251E40
  c->lr=0x80251E48u; f_802512B0(c); // 80251E44
  c->r[0]=R32(c->r[13]+0xFFFF9D80u); // 80251E48
  cmps(c,0,(int32_t)c->r[0],0); // 80251E4C
  if (!crb(c,2)) { goto L_80251E60; } // 80251E50
  c->r[0]=R32(c->r[13]+0xFFFF9ED0u); // 80251E54
  cmps(c,0,(int32_t)c->r[0],0); // 80251E58
  if (crb(c,2)) { goto L_80251E74; } // 80251E5C
L_80251E60:;
  c->r[3]=0u+0x00000002u; // 80251E60
  c->r[0]=0u+0x00000001u; // 80251E64
  W32(c->r[1]+0x00000044u,c->r[3]); // 80251E68
  W32(c->r[1]+0x00000040u,c->r[0]); // 80251E6C
  goto L_80251EC0; // 80251E70
L_80251E74:;
  c->lr=0x80251E78u; f_80201900(c); // 80251E74
  cmps(c,0,(int32_t)c->r[3],0); // 80251E78
  if (crb(c,2)) { goto L_80251E98; } // 80251E7C
  c->r[4]=c->r[3]|c->r[3]; // 80251E80
  c->r[3]=c->r[31]+0x000000F4u; // 80251E84
  c->r[5]=0u+0x0000032Cu; // 80251E88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251E8C
  c->lr=0x80251E94u; f_80245CC0(c); // 80251E90
  c->lr=0x80251E98u; f_8024BE40(c); // 80251E94
L_80251E98:;
  c->r[3]=c->r[1]+0x00000040u; // 80251E98
  c->lr=0x80251EA0u; f_80201EC0(c); // 80251E9C
  cmps(c,0,(int32_t)c->r[3],0); // 80251EA0
  if (crb(c,2)) { goto L_80251EC0; } // 80251EA4
  c->r[4]=c->r[3]|c->r[3]; // 80251EA8
  c->r[3]=c->r[31]+0x000000F4u; // 80251EAC
  c->r[5]=0u+0x00000334u; // 80251EB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251EB4
  c->lr=0x80251EBCu; f_80245CC0(c); // 80251EB8
  c->lr=0x80251EC0u; f_8024BE40(c); // 80251EBC
L_80251EC0:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 80251EC0
  c->r[3]=R32(c->r[1]+0x00000044u); // 80251EC4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80251EC8
  W32(c->r[30]+0x00000018u,c->r[0]); // 80251ECC
  c->r[0]=R32(c->r[29]+0x00000008u); // 80251ED0
  W32(c->r[30]+0x00000004u,c->r[0]); // 80251ED4
  c->lr=0x80251EDCu; f_80243C30(c); // 80251ED8
  c->r[4]=c->r[24]^0x00000002u; // 80251EDC
  c->r[0]=c->r[25]^0x00000001u; // 80251EE0
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 80251EE4
  W8(c->r[30]+0x0000000Au,c->r[3]); // 80251EE8
  if (!crb(c,2)) { goto L_80251EFC; } // 80251EEC
  c->r[0]=0u+0x00000004u; // 80251EF0
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 80251EF4
  goto L_80251F04; // 80251EF8
L_80251EFC:;
  c->r[0]=0u+0x00000002u; // 80251EFC
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 80251F00
L_80251F04:;
  W32(c->r[30]+0x0000000Cu,c->r[26]); // 80251F04
  c->lr=0x80251F0Cu; f_80250780(c); // 80251F08
  c->r[3]=c->r[30]|c->r[30]; // 80251F0C
  c->lr=0x80251F14u; f_80250830(c); // 80251F10
  c->r[3]=c->r[1]+0x00000078u; // 80251F14
  c->lr=0x80251F1Cu; f_802500B0(c); // 80251F18
  c->r[3]=c->r[24]^0x00000002u; // 80251F1C
  c->r[0]=c->r[25]^0x00000001u; // 80251F20
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80251F24
  c->r[0]=0u+0x00000003u; // 80251F28
  W8(c->r[1]+0x0000007Du,c->r[0]); // 80251F2C
  if (!crb(c,2)) { goto L_80251F48; } // 80251F30
  c->r[3]=R8(c->r[1]+0x0000007Eu); // 80251F34
  c->lr=0x80251F3Cu; f_8024B810(c); // 80251F38
  c->r[0]=0u+0x00000002u; // 80251F3C
  W8(c->r[1]+0x0000007Eu,c->r[3]); // 80251F40
  W8(c->r[1]+0x0000007Fu,c->r[0]); // 80251F44
L_80251F48:;
  c->r[3]=c->r[1]+0x00000078u; // 80251F48
  c->lr=0x80251F50u; f_8024FFC0(c); // 80251F4C
L_80251F50:;
  c->r[4]=c->r[24]|c->r[24]; // 80251F50
  c->r[3]=c->r[25]|c->r[25]; // 80251F54
  c->lr=0x80251F5Cu; f_80251A20(c); // 80251F58
  c->lr=0x80251F60u; f_80247140(c); // 80251F5C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80251F60
  c->r[11]=c->r[10]|c->r[10]; // 80251F64
  c->lr=0x80251F6Cu; f_800C2E8C(c); // 80251F68
  c->r[0]=R32(c->r[10]+0x00000004u); // 80251F6C
  c->lr=c->r[0]; // 80251F70
  c->r[1]=c->r[10]|c->r[10]; // 80251F74
  return; // 80251F78
}

// fn_80251F80
void f_80251F80(Ctx* __restrict c) {
  trace_call(0x80251F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251F80
  c->r[0]=c->lr; // 80251F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80251F88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80251F8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80251F90
  W32(c->r[1]+0x00000014u,c->r[29]); // 80251F94
  c->r[29]=0u+0x00000000u; // 80251F98
  W32(c->r[1]+0x00000010u,c->r[28]); // 80251F9C
  c->r[28]=c->r[3]|c->r[3]; // 80251FA0
  c->lr=0x80251FA8u; f_80243C30(c); // 80251FA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80251FA8
  cmpu(c,0,c->r[0],0x00000080u); // 80251FAC
  if (!crb(c,2)) { goto L_80251FDC; } // 80251FB0
  c->r[3]=0u+0x803C0000u; // 80251FB4
  c->r[3]=c->r[3]+0xFFFFB7ECu; // 80251FB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251FBC
  c->lr=0x80251FC4u; f_80245CC0(c); // 80251FC0
  c->r[3]=0u+0x803C0000u; // 80251FC4
  c->r[4]=0u+0x0000060Bu; // 80251FC8
  c->r[3]=c->r[3]+0xFFFFB674u; // 80251FCC
  c->r[5]=c->r[13]+0xFFFF9188u; // 80251FD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80251FD4
  c->lr=0x80251FDCu; f_80245D40(c); // 80251FD8
L_80251FDC:;
  c->lr=0x80251FE0u; f_80255490(c); // 80251FDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80251FE0
  cmpu(c,0,c->r[0],0x00000002u); // 80251FE4
  if (!crb(c,1)) { goto L_80252000; } // 80251FE8
  cmps(c,0,(int32_t)c->r[0],4); // 80251FEC
  if (crb(c,2)) { goto L_80252014; } // 80251FF0
  cmps(c,0,(int32_t)c->r[0],5); // 80251FF4
  if (crb(c,2)) { goto L_80252028; } // 80251FF8
  goto L_8025203C; // 80251FFC
L_80252000:;
  c->r[4]=0u+0x48410000u; // 80252000
  c->r[3]=0u+0x00010000u; // 80252004
  c->r[30]=c->r[4]+0x00004241u; // 80252008
  c->r[31]=c->r[3]+0x00000002u; // 8025200C
  goto L_8025204C; // 80252010
L_80252014:;
  c->r[4]=0u+0x48410000u; // 80252014
  c->r[3]=0u+0x00010000u; // 80252018
  c->r[30]=c->r[4]+0x0000424Bu; // 8025201C
  c->r[31]=c->r[3]+0x00000002u; // 80252020
  goto L_8025204C; // 80252024
L_80252028:;
  c->r[4]=0u+0x48410000u; // 80252028
  c->r[3]=0u+0x00010000u; // 8025202C
  c->r[30]=c->r[4]+0x00004243u; // 80252030
  c->r[31]=c->r[3]+0x00000002u; // 80252034
  goto L_8025204C; // 80252038
L_8025203C:;
  c->r[4]=0u+0x48410000u; // 8025203C
  c->r[3]=0u+0x00010000u; // 80252040
  c->r[30]=c->r[4]+0x00004241u; // 80252044
  c->r[31]=c->r[3]+0x00000002u; // 80252048
L_8025204C:;
  c->lr=0x80252050u; f_8024FDD0(c); // 8025204C
  c->lr=0x80252054u; f_8024F690(c); // 80252050
  c->lr=0x80252058u; f_8024CE40(c); // 80252054
  c->r[3]=0u+0x00000006u; // 80252058
  c->lr=0x80252060u; f_8024B690(c); // 8025205C
  c->lr=0x80252064u; f_8024CE80(c); // 80252060
  c->r[3]=0u+0x81280000u; // 80252064
  c->lr=0x8025206Cu; f_802448F0(c); // 80252068
  c->r[3]=0u+0x812F0000u; // 8025206C
  c->lr=0x80252074u; f_802448C0(c); // 80252070
  cmps(c,0,(int32_t)c->r[28],0); // 80252074
  if (crb(c,2)) { goto L_80252098; } // 80252078
  c->r[3]=0u+0x00000004u; // 8025207C
  c->r[4]=0u+0x00001000u; // 80252080
  c->lr=0x80252088u; f_80244900(c); // 80252084
  W32(c->r[3]+0x00000000u,c->r[28]); // 80252088
  c->r[0]=0u+0x00000000u; // 8025208C
  c->r[29]=c->r[3]|c->r[3]; // 80252090
  W32(c->r[3]+0x00000004u,c->r[0]); // 80252094
L_80252098:;
  c->r[4]=c->r[30]|c->r[30]; // 80252098
  c->r[3]=c->r[31]|c->r[31]; // 8025209C
  c->r[6]=c->r[29]|c->r[29]; // 802520A0
  c->r[5]=0u+0x00000002u; // 802520A4
  c->r[7]=0u+0x00000000u; // 802520A8
  c->lr=0x802520B0u; f_80251B40(c); // 802520AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802520B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802520B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802520B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802520BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802520C0
  c->lr=c->r[0]; // 802520C4
  c->r[1]=c->r[1]+0x00000020u; // 802520C8
  return; // 802520CC
}

// __init_user
void f_802520D0(Ctx* __restrict c) {
  trace_call(0x802520D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802520D0
  c->r[0]=c->lr; // 802520D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802520D8
  c->lr=0x802520E0u; f_802520F0(c); // 802520DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802520E0
  c->lr=c->r[0]; // 802520E4
  c->r[1]=c->r[1]+0x00000010u; // 802520E8
  return; // 802520EC
}

// __init_cpp
void f_802520F0(Ctx* __restrict c) {
  trace_call(0x802520F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802520F0
  c->r[0]=c->lr; // 802520F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802520F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802520FC
  c->r[31]=0u+0x80370000u; // 80252100
  c->r[31]=c->r[31]+0x00000420u; // 80252104
  goto L_80252118; // 80252108
L_8025210C:;
  c->ctr=c->r[12]; // 8025210C
  if (true) { c->lr=0x80252114u; dispatch(c,c->ctr); } // 80252110
  c->r[31]=c->r[31]+0x00000004u; // 80252114
L_80252118:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80252118
  cmps(c,0,(int32_t)c->r[12],0); // 8025211C
  if (!crb(c,2)) { IRQCHK(c); goto L_8025210C; } // 80252120
  c->r[0]=R32(c->r[1]+0x00000014u); // 80252124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80252128
  c->lr=c->r[0]; // 8025212C
  c->r[1]=c->r[1]+0x00000010u; // 80252130
  return; // 80252134
}

// exit
void f_80252140(Ctx* __restrict c) {
  trace_call(0x80252140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252140
  c->r[0]=c->lr; // 80252144
  W32(c->r[1]+0x00000014u,c->r[0]); // 80252148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025214C
  c->r[31]=0u+0x80370000u; // 80252150
  c->r[31]=c->r[31]+0x000006A0u; // 80252154
  goto L_80252168; // 80252158
L_8025215C:;
  c->ctr=c->r[12]; // 8025215C
  if (true) { c->lr=0x80252164u; dispatch(c,c->ctr); } // 80252160
  c->r[31]=c->r[31]+0x00000004u; // 80252164
L_80252168:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80252168
  cmps(c,0,(int32_t)c->r[12],0); // 8025216C
  if (!crb(c,2)) { IRQCHK(c); goto L_8025215C; } // 80252170
  c->lr=0x80252178u; f_801CA5F0(c); // 80252174
  c->r[0]=R32(c->r[1]+0x00000014u); // 80252178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025217C
  c->lr=c->r[0]; // 80252180
  c->r[1]=c->r[1]+0x00000010u; // 80252184
  return; // 80252188
}

// fn_80252190
void f_80252190(Ctx* __restrict c) {
  trace_call(0x80252190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252190
  c->r[0]=c->lr; // 80252194
  c->r[4]=0u+0x804A0000u; // 80252198
  c->r[6]=0u+0x80000000u; // 8025219C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802521A0
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802521A4
  c->r[4]=c->r[4]+0xFFFFD630u; // 802521A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802521AC
  c->r[31]=c->r[4]+c->r[5]; // 802521B0
  c->r[0]=R32(c->r[13]+0xFFFF919Cu); // 802521B4
  c->r[7]=rotl(c->r[0],0)&0x00000700u; cr0(c,c->r[7]); // 802521B8
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]>>((c->r[3])&31)); // 802521BC
  if (crb(c,2)) { goto L_802521F0; } // 802521C0
  cmpu(c,0,c->r[7],0x00000500u); // 802521C4
  if (crb(c,2)) { goto L_802521F0; } // 802521C8
  cmpu(c,0,c->r[7],0x00000600u); // 802521CC
  if (crb(c,2)) { goto L_802521F0; } // 802521D0
  cmpu(c,0,c->r[7],0x00000700u); // 802521D4
  if (crb(c,2)) { goto L_802521F0; } // 802521D8
  cmpu(c,0,c->r[7],0x00000100u); // 802521DC
  if (crb(c,2)) { goto L_80252224; } // 802521E0
  cmpu(c,0,c->r[7],0x00000200u); // 802521E4
  if (crb(c,2)) { goto L_80252258; } // 802521E8
  goto L_80252288; // 802521EC
L_802521F0:;
  c->r[4]=R8(c->r[31]+0x00000006u); // 802521F0
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 802521F4
  W8(c->r[31]+0x00000006u,c->r[4]); // 802521F8
  c->r[4]=R8(c->r[31]+0x00000007u); // 802521FC
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80252200
  W8(c->r[31]+0x00000007u,c->r[4]); // 80252204
  c->r[4]=R8(c->r[31]+0x00000008u); // 80252208
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 8025220C
  W8(c->r[31]+0x00000008u,c->r[4]); // 80252210
  c->r[4]=R8(c->r[31]+0x00000009u); // 80252214
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80252218
  W8(c->r[31]+0x00000009u,c->r[4]); // 8025221C
  goto L_80252288; // 80252220
L_80252224:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 80252224
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80252228
  W8(c->r[31]+0x00000004u,c->r[4]); // 8025222C
  c->r[4]=R8(c->r[31]+0x00000005u); // 80252230
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80252234
  W8(c->r[31]+0x00000005u,c->r[4]); // 80252238
  c->r[4]=R8(c->r[31]+0x00000008u); // 8025223C
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80252240
  W8(c->r[31]+0x00000008u,c->r[4]); // 80252244
  c->r[4]=R8(c->r[31]+0x00000009u); // 80252248
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 8025224C
  W8(c->r[31]+0x00000009u,c->r[4]); // 80252250
  goto L_80252288; // 80252254
L_80252258:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 80252258
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 8025225C
  W8(c->r[31]+0x00000004u,c->r[4]); // 80252260
  c->r[4]=R8(c->r[31]+0x00000005u); // 80252264
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 80252268
  W8(c->r[31]+0x00000005u,c->r[4]); // 8025226C
  c->r[4]=R8(c->r[31]+0x00000006u); // 80252270
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80252274
  W8(c->r[31]+0x00000006u,c->r[4]); // 80252278
  c->r[4]=R8(c->r[31]+0x00000007u); // 8025227C
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 80252280
  W8(c->r[31]+0x00000007u,c->r[4]); // 80252284
L_80252288:;
  c->r[5]=R8(c->r[31]+0x00000002u); // 80252288
  c->r[4]=R32(c->r[13]+0xFFFF9198u); // 8025228C
  c->r[5]=c->r[5]+0xFFFFFF80u; // 80252290
  W8(c->r[31]+0x00000002u,c->r[5]); // 80252294
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 80252298
  c->r[4]=R8(c->r[31]+0x00000003u); // 8025229C
  c->r[0]=c->r[4]+0xFFFFFF80u; // 802522A0
  W8(c->r[31]+0x00000003u,c->r[0]); // 802522A4
  c->r[4]=R8(c->r[31]+0x00000004u); // 802522A8
  c->r[0]=c->r[4]+0xFFFFFF80u; // 802522AC
  W8(c->r[31]+0x00000004u,c->r[0]); // 802522B0
  c->r[4]=R8(c->r[31]+0x00000005u); // 802522B4
  c->r[0]=c->r[4]+0xFFFFFF80u; // 802522B8
  W8(c->r[31]+0x00000005u,c->r[0]); // 802522BC
  if (crb(c,2)) { goto L_802522F0; } // 802522C0
  c->r[0]=R8(c->r[31]+0x00000002u); // 802522C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802522C8
  cmps(c,0,(int32_t)c->r[0],64); // 802522CC
  if (!crb(c,1)) { goto L_802522F0; } // 802522D0
  c->lr=0x802522D8u; f_80256790(c); // 802522D4
  c->r[3]=rotl(c->r[3],0)&0xFFFF0000u; // 802522D8
  c->r[0]=c->r[3]+0xF7000000u; // 802522DC
  cmpu(c,0,c->r[0],0x00000000u); // 802522E0
  if (!crb(c,2)) { goto L_802522F0; } // 802522E4
  c->r[0]=0u+0x00000000u; // 802522E8
  W8(c->r[31]+0x00000002u,c->r[0]); // 802522EC
L_802522F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802522F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802522F4
  c->lr=c->r[0]; // 802522F8
  c->r[1]=c->r[1]+0x00000010u; // 802522FC
  return; // 80252300
}

// PADOriginCallback
void f_80252310(Ctx* __restrict c) {
  trace_call(0x80252310u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252310
  c->r[0]=c->lr; // 80252314
  W32(c->r[1]+0x00000024u,c->r[0]); // 80252318
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 8025231C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80252320
  if (!crb(c,2)) { goto L_8025236C; } // 80252324
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252328
  c->lr=0x80252330u; f_80252190(c); // 8025232C
  c->r[31]=R32(c->r[13]+0xFFFF9194u); // 80252330
  c->r[0]=0u+0x80000000u; // 80252334
  c->r[5]=R32(c->r[13]+0xFFFF9EFCu); // 80252338
  c->r[4]=c->r[1]+0x00000008u; // 8025233C
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]>>((c->r[31])&31)); // 80252340
  c->r[3]=c->r[31]|c->r[31]; // 80252344
  c->r[0]=c->r[5]|c->r[0]; // 80252348
  W32(c->r[13]+0xFFFF9EFCu,c->r[0]); // 8025234C
  c->lr=0x80252354u; f_802561A0(c); // 80252350
  c->r[0]=R32(c->r[13]+0xFFFF919Cu); // 80252354
  c->r[3]=c->r[31]|c->r[31]; // 80252358
  c->r[4]=c->r[0]|0x00400000u; // 8025235C
  c->lr=0x80252364u; f_80256010(c); // 80252360
  c->r[3]=R32(c->r[13]+0xFFFF9EFCu); // 80252364
  c->lr=0x8025236Cu; f_802560A0(c); // 80252368
L_8025236C:;
  c->r[6]=R32(c->r[13]+0xFFFF9EF8u); // 8025236C
  c->r[5]=cntlz(c->r[6]); // 80252370
  W32(c->r[13]+0xFFFF9194u,c->r[5]); // 80252374
  cmps(c,0,(int32_t)c->r[5],32); // 80252378
  if (crb(c,2)) { goto L_802523BC; } // 8025237C
  c->r[0]=0u+0x80000000u; // 80252380
  c->r[3]=0u+0x804A0000u; // 80252384
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80252388
  c->r[4]=0u+0x00000000u; // 8025238C
  c->r[0]=c->r[6]&~c->r[0]; // 80252390
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 80252394
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80252398
  c->r[3]=c->r[3]+0xFFFFD630u; // 8025239C
  c->r[5]=0u+0x0000000Cu; // 802523A0
  c->r[3]=c->r[3]+c->r[0]; // 802523A4
  c->lr=0x802523ACu; f_80004350(c); // 802523A8
  c->r[4]=0u+0x80250000u; // 802523AC
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 802523B0
  c->r[4]=c->r[4]+0x000024B0u; // 802523B4
  c->lr=0x802523BCu; f_80256950(c); // 802523B8
L_802523BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802523BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802523C0
  c->lr=c->r[0]; // 802523C4
  c->r[1]=c->r[1]+0x00000020u; // 802523C8
  return; // 802523CC
}

// PADProbeCallback
void f_802523D0(Ctx* __restrict c) {
  trace_call(0x802523D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802523D0
  c->r[0]=c->lr; // 802523D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802523D8
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 802523DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802523E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802523E4
  if (!crb(c,2)) { goto L_8025243C; } // 802523E8
  c->r[30]=R32(c->r[13]+0xFFFF9194u); // 802523EC
  c->r[31]=0u+0x80000000u; // 802523F0
  c->r[5]=R32(c->r[13]+0xFFFF9EFCu); // 802523F4
  c->r[4]=c->r[1]+0x00000008u; // 802523F8
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]>>((c->r[30])&31)); // 802523FC
  c->r[3]=c->r[30]|c->r[30]; // 80252400
  c->r[0]=c->r[5]|c->r[0]; // 80252404
  W32(c->r[13]+0xFFFF9EFCu,c->r[0]); // 80252408
  c->lr=0x80252410u; f_802561A0(c); // 8025240C
  c->r[0]=R32(c->r[13]+0xFFFF919Cu); // 80252410
  c->r[3]=c->r[30]|c->r[30]; // 80252414
  c->r[4]=c->r[0]|0x00400000u; // 80252418
  c->lr=0x80252420u; f_80256010(c); // 8025241C
  c->r[3]=R32(c->r[13]+0xFFFF9EFCu); // 80252420
  c->lr=0x80252428u; f_802560A0(c); // 80252424
  c->r[0]=R32(c->r[13]+0xFFFF9194u); // 80252428
  c->r[3]=R32(c->r[13]+0xFFFF9EF0u); // 8025242C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 80252430
  c->r[0]=c->r[3]|c->r[0]; // 80252434
  W32(c->r[13]+0xFFFF9EF0u,c->r[0]); // 80252438
L_8025243C:;
  c->r[6]=R32(c->r[13]+0xFFFF9EF8u); // 8025243C
  c->r[5]=cntlz(c->r[6]); // 80252440
  W32(c->r[13]+0xFFFF9194u,c->r[5]); // 80252444
  cmps(c,0,(int32_t)c->r[5],32); // 80252448
  if (crb(c,2)) { goto L_8025248C; } // 8025244C
  c->r[0]=0u+0x80000000u; // 80252450
  c->r[3]=0u+0x804A0000u; // 80252454
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80252458
  c->r[4]=0u+0x00000000u; // 8025245C
  c->r[0]=c->r[6]&~c->r[0]; // 80252460
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 80252464
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80252468
  c->r[3]=c->r[3]+0xFFFFD630u; // 8025246C
  c->r[5]=0u+0x0000000Cu; // 80252470
  c->r[3]=c->r[3]+c->r[0]; // 80252474
  c->lr=0x8025247Cu; f_80004350(c); // 80252478
  c->r[4]=0u+0x80250000u; // 8025247C
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252480
  c->r[4]=c->r[4]+0x000024B0u; // 80252484
  c->lr=0x8025248Cu; f_80256950(c); // 80252488
L_8025248C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025248C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80252490
  c->r[30]=R32(c->r[1]+0x00000018u); // 80252494
  c->lr=c->r[0]; // 80252498
  c->r[1]=c->r[1]+0x00000020u; // 8025249C
  return; // 802524A0
}

// PADTypeAndStatusCallback
void f_802524B0(Ctx* __restrict c) {
  trace_call(0x802524B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802524B0
  c->r[0]=c->lr; // 802524B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802524B8
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 802524BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802524C0
  c->r[31]=0u+0x80000000u; // 802524C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802524C8
  c->r[30]=0u+0x804A0000u; // 802524CC
  c->r[30]=c->r[30]+0xFFFFD630u; // 802524D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802524D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 802524D8
  c->r[28]=R32(c->r[13]+0xFFFF9194u); // 802524DC
  c->r[3]=R32(c->r[13]+0xFFFF9EF4u); // 802524E0
  c->r[29]=((c->r[28])&0x20)?0u:(c->r[31]>>((c->r[28])&31)); // 802524E4
  c->r[0]=c->r[3]&~c->r[29]; // 802524E8
  W32(c->r[13]+0xFFFF9EF4u,c->r[0]); // 802524EC
  c->r[7]=c->r[3]&c->r[29]; // 802524F0
  c->r[3]=0u+0x00000001u; // 802524F4
  if (crb(c,2)) { goto L_80252548; } // 802524F8
  c->r[5]=R32(c->r[13]+0xFFFF9EF8u); // 802524FC
  c->r[0]=cntlz(c->r[5]); // 80252500
  W32(c->r[13]+0xFFFF9194u,c->r[0]); // 80252504
  cmps(c,0,(int32_t)c->r[0],32); // 80252508
  if (crb(c,2)) { goto L_802527B0; } // 8025250C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80252510
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 80252514
  c->r[0]=c->r[30]+0x00000000u; // 80252518
  c->r[4]=c->r[5]&~c->r[4]; // 8025251C
  W32(c->r[13]+0xFFFF9EF8u,c->r[4]); // 80252520
  c->r[3]=c->r[0]+c->r[3]; // 80252524
  c->r[4]=0u+0x00000000u; // 80252528
  c->r[5]=0u+0x0000000Cu; // 8025252C
  c->lr=0x80252534u; f_80004350(c); // 80252530
  c->r[4]=0u+0x80250000u; // 80252534
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252538
  c->r[4]=c->r[4]+0x000024B0u; // 8025253C
  c->lr=0x80252544u; f_80256950(c); // 80252540
  goto L_802527B0; // 80252544
L_80252548:;
  c->r[5]=rotl(c->r[4],0)&0x18000000u; // 80252548
  c->r[6]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8025254C
  c->r[0]=c->r[5]+0xF8000000u; // 80252550
  c->r[4]=rotl(c->r[4],0)&0xFFFFFF00u; // 80252554
  c->r[5]=c->r[30]+0x00000030u; // 80252558
  cmpu(c,0,c->r[0],0x00000000u); // 8025255C
  W32(c->r[5]+c->r[6],c->r[4]); // 80252560
  if (!crb(c,2)) { goto L_80252570; } // 80252564
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 80252568
  if (!crb(c,2)) { goto L_802525C0; } // 8025256C
L_80252570:;
  c->r[7]=R32(c->r[13]+0xFFFF9EF8u); // 80252570
  c->r[6]=cntlz(c->r[7]); // 80252574
  W32(c->r[13]+0xFFFF9194u,c->r[6]); // 80252578
  cmps(c,0,(int32_t)c->r[6],32); // 8025257C
  if (crb(c,2)) { goto L_802527B0; } // 80252580
  c->r[5]=0u+0x80000000u; // 80252584
  c->r[0]=c->r[30]+0x00000000u; // 80252588
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8025258C
  c->r[4]=0u+0x00000000u; // 80252590
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 80252594
  c->r[5]=0u+0x0000000Cu; // 80252598
  c->r[6]=c->r[7]&~c->r[6]; // 8025259C
  W32(c->r[13]+0xFFFF9EF8u,c->r[6]); // 802525A0
  c->r[3]=c->r[0]+c->r[3]; // 802525A4
  c->lr=0x802525ACu; f_80004350(c); // 802525A8
  c->r[4]=0u+0x80250000u; // 802525AC
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 802525B0
  c->r[4]=c->r[4]+0x000024B0u; // 802525B4
  c->lr=0x802525BCu; f_80256950(c); // 802525B8
  goto L_802527B0; // 802525BC
L_802525C0:;
  c->r[0]=R32(c->r[13]+0xFFFF91A0u); // 802525C0
  cmpu(c,0,c->r[0],0x00000002u); // 802525C4
  if (!crb(c,0)) { goto L_80252648; } // 802525C8
  c->r[0]=R32(c->r[13]+0xFFFF9EFCu); // 802525CC
  c->r[3]=c->r[28]|c->r[28]; // 802525D0
  c->r[4]=c->r[1]+0x00000008u; // 802525D4
  c->r[0]=c->r[0]|c->r[29]; // 802525D8
  W32(c->r[13]+0xFFFF9EFCu,c->r[0]); // 802525DC
  c->lr=0x802525E4u; f_802561A0(c); // 802525E0
  c->r[0]=R32(c->r[13]+0xFFFF919Cu); // 802525E4
  c->r[3]=c->r[28]|c->r[28]; // 802525E8
  c->r[4]=c->r[0]|0x00400000u; // 802525EC
  c->lr=0x802525F4u; f_80256010(c); // 802525F0
  c->r[3]=R32(c->r[13]+0xFFFF9EFCu); // 802525F4
  c->lr=0x802525FCu; f_802560A0(c); // 802525F8
  c->r[5]=R32(c->r[13]+0xFFFF9EF8u); // 802525FC
  c->r[0]=cntlz(c->r[5]); // 80252600
  W32(c->r[13]+0xFFFF9194u,c->r[0]); // 80252604
  cmps(c,0,(int32_t)c->r[0],32); // 80252608
  if (crb(c,2)) { goto L_802527B0; } // 8025260C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80252610
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 80252614
  c->r[0]=c->r[30]+0x00000000u; // 80252618
  c->r[4]=c->r[5]&~c->r[4]; // 8025261C
  W32(c->r[13]+0xFFFF9EF8u,c->r[4]); // 80252620
  c->r[3]=c->r[0]+c->r[3]; // 80252624
  c->r[4]=0u+0x00000000u; // 80252628
  c->r[5]=0u+0x0000000Cu; // 8025262C
  c->lr=0x80252634u; f_80004350(c); // 80252630
  c->r[4]=0u+0x80250000u; // 80252634
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252638
  c->r[4]=c->r[4]+0x000024B0u; // 8025263C
  c->lr=0x80252644u; f_80256950(c); // 80252640
  goto L_802527B0; // 80252644
L_80252648:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 80252648
  if (crb(c,2)) { goto L_80252658; } // 8025264C
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 80252650
  if (crb(c,2)) { goto L_802526C8; } // 80252654
L_80252658:;
  cmps(c,0,(int32_t)c->r[7],0); // 80252658
  if (crb(c,2)) { goto L_80252694; } // 8025265C
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252660
  c->r[8]=0u+0x80250000u; // 80252664
  c->r[0]=c->r[30]+0x00000000u; // 80252668
  c->r[4]=c->r[13]+0xFFFF91ACu; // 8025266C
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80252670
  c->r[8]=c->r[8]+0x00002310u; // 80252674
  c->r[5]=0u+0x00000003u; // 80252678
  c->r[7]=0u+0x0000000Au; // 8025267C
  c->r[6]=c->r[0]+c->r[6]; // 80252680
  c->r[10]=0u+0x00000000u; // 80252684
  c->r[9]=0u+0x00000000u; // 80252688
  c->lr=0x80252690u; f_80256360(c); // 8025268C
  goto L_80252750; // 80252690
L_80252694:;
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 80252694
  c->r[8]=0u+0x80250000u; // 80252698
  c->r[0]=c->r[30]+0x00000000u; // 8025269C
  c->r[4]=c->r[13]+0xFFFF91A8u; // 802526A0
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802526A4
  c->r[8]=c->r[8]+0x00002310u; // 802526A8
  c->r[5]=0u+0x00000001u; // 802526AC
  c->r[7]=0u+0x0000000Au; // 802526B0
  c->r[6]=c->r[0]+c->r[6]; // 802526B4
  c->r[10]=0u+0x00000000u; // 802526B8
  c->r[9]=0u+0x00000000u; // 802526BC
  c->lr=0x802526C4u; f_80256360(c); // 802526C0
  goto L_80252750; // 802526C4
L_802526C8:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 802526C8
  if (crb(c,2)) { goto L_80252750; } // 802526CC
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 802526D0
  if (!crb(c,2)) { goto L_80252750; } // 802526D4
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 802526D8
  if (!crb(c,2)) { goto L_80252750; } // 802526DC
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 802526E0
  if (crb(c,2)) { goto L_8025271C; } // 802526E4
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 802526E8
  c->r[0]=c->r[30]+0x00000000u; // 802526EC
  c->r[8]=0u+0x80250000u; // 802526F0
  c->r[3]=c->r[28]|c->r[28]; // 802526F4
  c->r[6]=c->r[0]+c->r[4]; // 802526F8
  c->r[8]=c->r[8]+0x00002310u; // 802526FC
  c->r[4]=c->r[13]+0xFFFF91A8u; // 80252700
  c->r[5]=0u+0x00000001u; // 80252704
  c->r[7]=0u+0x0000000Au; // 80252708
  c->r[10]=0u+0x00000000u; // 8025270C
  c->r[9]=0u+0x00000000u; // 80252710
  c->lr=0x80252718u; f_80256360(c); // 80252714
  goto L_80252750; // 80252718
L_8025271C:;
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 8025271C
  c->r[4]=c->r[30]+0x00000040u; // 80252720
  c->r[8]=0u+0x80250000u; // 80252724
  c->r[0]=c->r[30]+0x00000000u; // 80252728
  c->r[4]=c->r[4]+c->r[6]; // 8025272C
  c->r[3]=c->r[28]|c->r[28]; // 80252730
  c->r[6]=c->r[0]+c->r[5]; // 80252734
  c->r[8]=c->r[8]+0x000023D0u; // 80252738
  c->r[5]=0u+0x00000003u; // 8025273C
  c->r[7]=0u+0x00000008u; // 80252740
  c->r[10]=0u+0x00000000u; // 80252744
  c->r[9]=0u+0x00000000u; // 80252748
  c->lr=0x80252750u; f_80256360(c); // 8025274C
L_80252750:;
  cmps(c,0,(int32_t)c->r[3],0); // 80252750
  if (!crb(c,2)) { goto L_802527B0; } // 80252754
  c->r[7]=R32(c->r[13]+0xFFFF9EF8u); // 80252758
  c->r[0]=R32(c->r[13]+0xFFFF9EE8u); // 8025275C
  c->r[6]=cntlz(c->r[7]); // 80252760
  W32(c->r[13]+0xFFFF9194u,c->r[6]); // 80252764
  cmps(c,0,(int32_t)c->r[6],32); // 80252768
  c->r[0]=c->r[0]|c->r[29]; // 8025276C
  W32(c->r[13]+0xFFFF9EE8u,c->r[0]); // 80252770
  if (crb(c,2)) { goto L_802527B0; } // 80252774
  c->r[5]=0u+0x80000000u; // 80252778
  c->r[0]=c->r[30]+0x00000000u; // 8025277C
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80252780
  c->r[4]=0u+0x00000000u; // 80252784
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 80252788
  c->r[5]=0u+0x0000000Cu; // 8025278C
  c->r[6]=c->r[7]&~c->r[6]; // 80252790
  W32(c->r[13]+0xFFFF9EF8u,c->r[6]); // 80252794
  c->r[3]=c->r[0]+c->r[3]; // 80252798
  c->lr=0x802527A0u; f_80004350(c); // 8025279C
  c->r[4]=0u+0x80250000u; // 802527A0
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 802527A4
  c->r[4]=c->r[4]+0x000024B0u; // 802527A8
  c->lr=0x802527B0u; f_80256950(c); // 802527AC
L_802527B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802527B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802527B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802527B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802527BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802527C0
  c->lr=c->r[0]; // 802527C4
  c->r[1]=c->r[1]+0x00000020u; // 802527C8
  return; // 802527CC
}

// fn_802527D0
void f_802527D0(Ctx* __restrict c) {
  trace_call(0x802527D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802527D0
  c->r[0]=c->lr; // 802527D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802527D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802527DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802527E0
  c->r[30]=c->r[3]|c->r[3]; // 802527E4
  c->lr=0x802527ECu; f_802494C0(c); // 802527E8
  c->r[0]=R32(c->r[13]+0xFFFF9EE8u); // 802527EC
  c->r[31]=c->r[3]|c->r[3]; // 802527F0
  c->r[4]=R32(c->r[13]+0xFFFF9EF0u); // 802527F4
  c->r[7]=0u+0x00000000u; // 802527F8
  c->r[3]=R32(c->r[13]+0xFFFF9EECu); // 802527FC
  c->r[30]=c->r[30]|c->r[0]; // 80252800
  c->r[0]=R32(c->r[13]+0xFFFF91A0u); // 80252804
  c->r[4]=c->r[4]|c->r[3]; // 80252808
  c->r[3]=R32(c->r[13]+0xFFFF9EF8u); // 8025280C
  c->r[30]=c->r[30]&~c->r[4]; // 80252810
  c->r[5]=R32(c->r[13]+0xFFFF9EFCu); // 80252814
  c->r[6]=c->r[3]|c->r[30]; // 80252818
  c->r[3]=R32(c->r[13]+0xFFFF9EE4u); // 8025281C
  c->r[8]=~(c->r[30]|c->r[30]); // 80252820
  cmpu(c,0,c->r[0],0x00000004u); // 80252824
  c->r[0]=c->r[3]&c->r[8]; // 80252828
  W32(c->r[13]+0xFFFF9EE8u,c->r[7]); // 8025282C
  c->r[4]=c->r[5]&c->r[8]; // 80252830
  c->r[3]=c->r[6]&c->r[5]; // 80252834
  W32(c->r[13]+0xFFFF9EF8u,c->r[6]); // 80252838
  W32(c->r[13]+0xFFFF9EFCu,c->r[4]); // 8025283C
  W32(c->r[13]+0xFFFF9EE4u,c->r[0]); // 80252840
  if (!crb(c,2)) { goto L_80252854; } // 80252844
  c->r[0]=R32(c->r[13]+0xFFFF9EF4u); // 80252848
  c->r[0]=c->r[0]|c->r[30]; // 8025284C
  W32(c->r[13]+0xFFFF9EF4u,c->r[0]); // 80252850
L_80252854:;
  c->lr=0x80252858u; f_80256130(c); // 80252854
  c->r[0]=R32(c->r[13]+0xFFFF9194u); // 80252858
  cmps(c,0,(int32_t)c->r[0],32); // 8025285C
  if (!crb(c,2)) { goto L_802528B4; } // 80252860
  c->r[6]=R32(c->r[13]+0xFFFF9EF8u); // 80252864
  c->r[5]=cntlz(c->r[6]); // 80252868
  W32(c->r[13]+0xFFFF9194u,c->r[5]); // 8025286C
  cmps(c,0,(int32_t)c->r[5],32); // 80252870
  if (crb(c,2)) { goto L_802528B4; } // 80252874
  c->r[0]=0u+0x80000000u; // 80252878
  c->r[3]=0u+0x804A0000u; // 8025287C
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80252880
  c->r[4]=0u+0x00000000u; // 80252884
  c->r[0]=c->r[6]&~c->r[0]; // 80252888
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 8025288C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80252890
  c->r[3]=c->r[3]+0xFFFFD630u; // 80252894
  c->r[5]=0u+0x0000000Cu; // 80252898
  c->r[3]=c->r[3]+c->r[0]; // 8025289C
  c->lr=0x802528A4u; f_80004350(c); // 802528A0
  c->r[4]=0u+0x80250000u; // 802528A4
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 802528A8
  c->r[4]=c->r[4]+0x000024B0u; // 802528AC
  c->lr=0x802528B4u; f_80256950(c); // 802528B0
L_802528B4:;
  c->r[3]=c->r[31]|c->r[31]; // 802528B4
  c->lr=0x802528BCu; f_80249500(c); // 802528B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802528BC
  c->r[3]=0u+0x00000001u; // 802528C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802528C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802528C8
  c->lr=c->r[0]; // 802528CC
  c->r[1]=c->r[1]+0x00000010u; // 802528D0
  return; // 802528D4
}

// PADRecalibrate
void f_802528E0(Ctx* __restrict c) {
  trace_call(0x802528E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802528E0
  c->r[0]=c->lr; // 802528E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802528E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802528EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802528F0
  c->r[30]=c->r[3]|c->r[3]; // 802528F4
  c->lr=0x802528FCu; f_802494C0(c); // 802528F8
  c->r[5]=R32(c->r[13]+0xFFFF9EE8u); // 802528FC
  c->r[31]=c->r[3]|c->r[3]; // 80252900
  c->r[6]=R32(c->r[13]+0xFFFF9EF0u); // 80252904
  c->r[7]=0u+0x00000000u; // 80252908
  c->r[0]=R32(c->r[13]+0xFFFF9EECu); // 8025290C
  c->r[30]=c->r[30]|c->r[5]; // 80252910
  c->r[5]=R32(c->r[13]+0xFFFF9EF8u); // 80252914
  c->r[4]=0u+0x80000000u; // 80252918
  c->r[0]=c->r[6]|c->r[0]; // 8025291C
  c->r[3]=R32(c->r[13]+0xFFFF9EFCu); // 80252920
  c->r[30]=c->r[30]&~c->r[0]; // 80252924
  c->r[0]=R32(c->r[13]+0xFFFF9EE4u); // 80252928
  c->r[8]=~(c->r[30]|c->r[30]); // 8025292C
  W32(c->r[13]+0xFFFF9EE8u,c->r[7]); // 80252930
  c->r[6]=c->r[5]|c->r[30]; // 80252934
  c->r[5]=c->r[3]&c->r[8]; // 80252938
  c->r[0]=c->r[0]&c->r[8]; // 8025293C
  W32(c->r[13]+0xFFFF9EF8u,c->r[6]); // 80252940
  c->r[3]=c->r[6]&c->r[3]; // 80252944
  W32(c->r[13]+0xFFFF9EFCu,c->r[5]); // 80252948
  W32(c->r[13]+0xFFFF9EE4u,c->r[0]); // 8025294C
  c->r[0]=R8(c->r[4]+0x000030E3u); // 80252950
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80252954
  if (!crb(c,2)) { goto L_80252968; } // 80252958
  c->r[0]=R32(c->r[13]+0xFFFF9EF4u); // 8025295C
  c->r[0]=c->r[0]|c->r[30]; // 80252960
  W32(c->r[13]+0xFFFF9EF4u,c->r[0]); // 80252964
L_80252968:;
  c->lr=0x8025296Cu; f_80256130(c); // 80252968
  c->r[0]=R32(c->r[13]+0xFFFF9194u); // 8025296C
  cmps(c,0,(int32_t)c->r[0],32); // 80252970
  if (!crb(c,2)) { goto L_802529C8; } // 80252974
  c->r[6]=R32(c->r[13]+0xFFFF9EF8u); // 80252978
  c->r[5]=cntlz(c->r[6]); // 8025297C
  W32(c->r[13]+0xFFFF9194u,c->r[5]); // 80252980
  cmps(c,0,(int32_t)c->r[5],32); // 80252984
  if (crb(c,2)) { goto L_802529C8; } // 80252988
  c->r[0]=0u+0x80000000u; // 8025298C
  c->r[3]=0u+0x804A0000u; // 80252990
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80252994
  c->r[4]=0u+0x00000000u; // 80252998
  c->r[0]=c->r[6]&~c->r[0]; // 8025299C
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 802529A0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 802529A4
  c->r[3]=c->r[3]+0xFFFFD630u; // 802529A8
  c->r[5]=0u+0x0000000Cu; // 802529AC
  c->r[3]=c->r[3]+c->r[0]; // 802529B0
  c->lr=0x802529B8u; f_80004350(c); // 802529B4
  c->r[4]=0u+0x80250000u; // 802529B8
  c->r[3]=R32(c->r[13]+0xFFFF9194u); // 802529BC
  c->r[4]=c->r[4]+0x000024B0u; // 802529C0
  c->lr=0x802529C8u; f_80256950(c); // 802529C4
L_802529C8:;
  c->r[3]=c->r[31]|c->r[31]; // 802529C8
  c->lr=0x802529D0u; f_80249500(c); // 802529CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802529D0
  c->r[3]=0u+0x00000001u; // 802529D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802529D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802529DC
  c->lr=c->r[0]; // 802529E0
  c->r[1]=c->r[1]+0x00000010u; // 802529E4
  return; // 802529E8
}

// fn_802529F0
void f_802529F0(Ctx* __restrict c) {
  trace_call(0x802529F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802529F0
  c->r[0]=c->lr; // 802529F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802529F8
  c->r[0]=R32(c->r[13]+0xFFFF9F00u); // 802529FC
  cmps(c,0,(int32_t)c->r[0],0); // 80252A00
  if (crb(c,2)) { goto L_80252A10; } // 80252A04
  c->r[3]=0u+0x00000001u; // 80252A08
  goto L_80252B38; // 80252A0C
L_80252A10:;
  c->r[3]=R32(c->r[13]+0xFFFF9190u); // 80252A10
  c->lr=0x80252A18u; f_80243B90(c); // 80252A14
  c->r[4]=R32(c->r[13]+0xFFFF9EE0u); // 80252A18
  cmps(c,1,(int32_t)c->r[4],0); // 80252A1C
  if (crb(c,6)) { goto L_80252A78; } // 80252A20
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80252A24
  c->r[3]=0u+0x00000000u; // 80252A28
  cmpu(c,0,c->r[0],0x00000003u); // 80252A2C
  W32(c->r[13]+0xFFFF9EE0u,c->r[3]); // 80252A30
  if (!crb(c,1)) { goto L_80252A68; } // 80252A34
  if (crb(c,6)) { goto L_80252A48; } // 80252A38
  cmpu(c,0,c->r[4],0x00000001u); // 80252A3C
  if (crb(c,2)) { goto L_80252A58; } // 80252A40
  goto L_80252A74; // 80252A44
L_80252A48:;
  c->r[3]=0u+0x80250000u; // 80252A48
  c->r[3]=c->r[3]+0x00002C10u; // 80252A4C
  W32(c->r[13]+0xFFFF91A4u,c->r[3]); // 80252A50
  goto L_80252A74; // 80252A54
L_80252A58:;
  c->r[3]=0u+0x80250000u; // 80252A58
  c->r[3]=c->r[3]+0x00002D30u; // 80252A5C
  W32(c->r[13]+0xFFFF91A4u,c->r[3]); // 80252A60
  goto L_80252A74; // 80252A64
L_80252A68:;
  c->r[3]=0u+0x80250000u; // 80252A68
  c->r[3]=c->r[3]+0x00002E50u; // 80252A6C
  W32(c->r[13]+0xFFFF91A4u,c->r[3]); // 80252A70
L_80252A74:;
  W32(c->r[13]+0xFFFF91A0u,c->r[4]); // 80252A74
L_80252A78:;
  c->r[0]=R32(c->r[13]+0xFFFF9F2Cu); // 80252A78
  c->r[3]=0u+0x00000001u; // 80252A7C
  W32(c->r[13]+0xFFFF9F00u,c->r[3]); // 80252A80
  cmps(c,0,(int32_t)c->r[0],0); // 80252A84
  if (crb(c,2)) { goto L_80252AEC; } // 80252A88
  c->lr=0x80252A90u; f_8024EAD0(c); // 80252A8C
  c->r[8]=sraw(c,c->r[3],16); // 80252A90
  c->r[5]=0u+0x00010000u; // 80252A94
  c->r[0]=sraw(c,c->r[3],31); // 80252A98
  c->r[6]=0u+0x00000000u; // 80252A9C
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 80252AA0
  c->r[5]=rotl(c->r[4],16)&0xFFFFFFFFu; // 80252AA4
  c->r[0]=sraw(c,c->r[3],31); // 80252AA8
  c->r[5]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 80252AAC
  c->r[4]=c->r[4]&c->r[7]; // 80252AB0
  c->r[0]=sraw(c,c->r[3],16); // 80252AB4
  c->r[0]=c->r[5]&c->r[7]; // 80252AB8
  c->r[5]=c->r[3]&c->r[7]; // 80252ABC
  c->r[0]=addc(c,c->r[4],c->r[0],0); // 80252AC0
  c->r[7]=c->r[8]&c->r[7]; // 80252AC4
  c->r[4]=addc(c,c->r[6],c->r[6],c->xer_ca); // 80252AC8
  c->r[3]=0u+0x80000000u; // 80252ACC
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 80252AD0
  c->r[0]=0u+0xF0000000u; // 80252AD4
  c->r[4]=addc(c,c->r[6],c->r[4],c->xer_ca); // 80252AD8
  c->r[4]=addc(c,c->r[7],c->r[5],0); // 80252ADC
  c->r[4]=rotl(c->r[4],0)&0x00003FFFu; // 80252AE0
  W16(c->r[3]+0x000030E0u,c->r[4]); // 80252AE4
  W32(c->r[13]+0xFFFF9EF4u,c->r[0]); // 80252AE8
L_80252AEC:;
  c->r[4]=0u+0x80000000u; // 80252AEC
  c->r[3]=0u+0x804A0000u; // 80252AF0
  c->r[0]=R16(c->r[4]+0x000030E0u); // 80252AF4
  c->r[4]=c->r[3]+0xFFFFD670u; // 80252AF8
  c->r[6]=rotl(c->r[0],8)&0x003FFF00u; // 80252AFC
  c->r[0]=c->r[6]|0x4D000000u; // 80252B00
  W32(c->r[3]+0xFFFFD670u,c->r[0]); // 80252B04
  c->r[5]=c->r[6]|0x4D400000u; // 80252B08
  c->r[3]=c->r[6]|0x4D800000u; // 80252B0C
  c->r[0]=c->r[6]|0x4DC00000u; // 80252B10
  W32(c->r[4]+0x00000004u,c->r[5]); // 80252B14
  W32(c->r[4]+0x00000008u,c->r[3]); // 80252B18
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80252B1C
  c->lr=0x80252B24u; f_80256B40(c); // 80252B20
  c->r[3]=0u+0x803C0000u; // 80252B24
  c->r[3]=c->r[3]+0xFFFFB9B0u; // 80252B28
  c->lr=0x80252B30u; f_8024B550(c); // 80252B2C
  c->r[3]=0u+0xF0000000u; // 80252B30
  c->lr=0x80252B38u; f_802527D0(c); // 80252B34
L_80252B38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80252B38
  c->lr=c->r[0]; // 80252B3C
  c->r[1]=c->r[1]+0x00000010u; // 80252B40
  return; // 80252B44
}

// fn_80252B50
void f_80252B50(Ctx* __restrict c) {
  trace_call(0x80252B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252B50
  c->r[0]=c->lr; // 80252B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80252B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80252B5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80252B60
  c->r[30]=c->r[4]|c->r[4]; // 80252B64
  W32(c->r[1]+0x00000014u,c->r[29]); // 80252B68
  c->r[29]=c->r[3]|c->r[3]; // 80252B6C
  c->lr=0x80252B74u; f_802494C0(c); // 80252B70
  c->r[0]=0u+0x80000000u; // 80252B74
  c->r[4]=R32(c->r[13]+0xFFFF9EFCu); // 80252B78
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); // 80252B7C
  c->r[31]=c->r[3]|c->r[3]; // 80252B80
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 80252B84
  if (crb(c,2)) { goto L_80252BE4; } // 80252B88
  c->r[3]=c->r[29]|c->r[29]; // 80252B8C
  c->lr=0x80252B94u; f_80256790(c); // 80252B90
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 80252B94
  if (!crb(c,2)) { goto L_80252BE4; } // 80252B98
  c->r[0]=R32(c->r[13]+0xFFFF91A0u); // 80252B9C
  cmpu(c,0,c->r[0],0x00000002u); // 80252BA0
  if (!crb(c,0)) { goto L_80252BB4; } // 80252BA4
  cmpu(c,0,c->r[30],0x00000002u); // 80252BA8
  if (!crb(c,2)) { goto L_80252BB4; } // 80252BAC
  c->r[30]=0u+0x00000000u; // 80252BB0
L_80252BB4:;
  c->r[3]=0u+0x80000000u; // 80252BB4
  c->r[0]=R8(c->r[3]+0x000030E3u); // 80252BB8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80252BBC
  if (crb(c,2)) { goto L_80252BC8; } // 80252BC0
  c->r[30]=0u+0x00000000u; // 80252BC4
L_80252BC8:;
  c->r[4]=R32(c->r[13]+0xFFFF919Cu); // 80252BC8
  c->r[0]=rotl(c->r[30],0)&0x00000003u; // 80252BCC
  c->r[3]=c->r[29]|c->r[29]; // 80252BD0
  c->r[4]=c->r[4]|0x00400000u; // 80252BD4
  c->r[4]=c->r[4]|c->r[0]; // 80252BD8
  c->lr=0x80252BE0u; f_80256010(c); // 80252BDC
  c->lr=0x80252BE4u; f_80256030(c); // 80252BE0
L_80252BE4:;
  c->r[3]=c->r[31]|c->r[31]; // 80252BE4
  c->lr=0x80252BECu; f_80249500(c); // 80252BE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80252BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80252BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80252BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80252BF8
  c->lr=c->r[0]; // 80252BFC
  c->r[1]=c->r[1]+0x00000020u; // 80252C00
  return; // 80252C04
}

// fn_80252C10
void f_80252C10(Ctx* __restrict c) {
  trace_call(0x80252C10u);
  c->r[0]=0u+0x00000000u; // 80252C10
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252C14
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252C18
  c->r[3]=rotl(c->r[3],13)&0x00000001u; // 80252C1C
  c->r[7]=0u-c->r[3]; // 80252C20
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 80252C24
  W16(c->r[4]+0x00000000u,c->r[3]); // 80252C28
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252C2C
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 80252C30
  c->r[3]=0u-c->r[3]; // 80252C34
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 80252C38
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 80252C3C
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252C40
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252C44
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 80252C48
  c->r[3]=0u-c->r[3]; // 80252C4C
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 80252C50
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252C54
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252C58
  c->r[3]=rotl(c->r[3],16)&0x00000001u; // 80252C5C
  c->r[3]=0u-c->r[3]; // 80252C60
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 80252C64
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252C68
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252C6C
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 80252C70
  c->r[3]=0u-c->r[3]; // 80252C74
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 80252C78
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252C7C
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252C80
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 80252C84
  W8(c->r[4]+0x00000002u,c->r[3]); // 80252C88
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252C8C
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 80252C90
  W8(c->r[4]+0x00000003u,c->r[3]); // 80252C94
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252C98
  W8(c->r[4]+0x00000004u,c->r[3]); // 80252C9C
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252CA0
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 80252CA4
  W8(c->r[4]+0x00000005u,c->r[3]); // 80252CA8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252CAC
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 80252CB0
  W8(c->r[4]+0x00000006u,c->r[3]); // 80252CB4
  cmpu(c,0,c->r[3],0x000000AAu); // 80252CB8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252CBC
  W8(c->r[4]+0x00000007u,c->r[3]); // 80252CC0
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252CC4
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252CC8
  if (crb(c,0)) { goto L_80252CDC; } // 80252CCC
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 80252CD0
  c->r[0]=c->r[0]|0x00000040u; // 80252CD4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252CD8
L_80252CDC:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 80252CDC
  cmpu(c,0,c->r[0],0x000000AAu); // 80252CE0
  if (crb(c,0)) { goto L_80252CF4; } // 80252CE4
  c->r[0]=R16(c->r[4]+0x00000000u); // 80252CE8
  c->r[0]=c->r[0]|0x00000020u; // 80252CEC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252CF0
L_80252CF4:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 80252CF4
  c->r[6]=R8(c->r[4]+0x00000003u); // 80252CF8
  c->r[0]=c->r[3]+0xFFFFFF80u; // 80252CFC
  c->r[5]=R8(c->r[4]+0x00000004u); // 80252D00
  c->r[3]=R8(c->r[4]+0x00000005u); // 80252D04
  c->r[6]=c->r[6]+0xFFFFFF80u; // 80252D08
  c->r[5]=c->r[5]+0xFFFFFF80u; // 80252D0C
  W8(c->r[4]+0x00000002u,c->r[0]); // 80252D10
  c->r[0]=c->r[3]+0xFFFFFF80u; // 80252D14
  W8(c->r[4]+0x00000003u,c->r[6]); // 80252D18
  W8(c->r[4]+0x00000004u,c->r[5]); // 80252D1C
  W8(c->r[4]+0x00000005u,c->r[0]); // 80252D20
  return; // 80252D24
}

// fn_80252D30
void f_80252D30(Ctx* __restrict c) {
  trace_call(0x80252D30u);
  c->r[0]=0u+0x00000000u; // 80252D30
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252D34
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252D38
  c->r[3]=rotl(c->r[3],9)&0x00000001u; // 80252D3C
  c->r[7]=0u-c->r[3]; // 80252D40
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 80252D44
  W16(c->r[4]+0x00000000u,c->r[3]); // 80252D48
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252D4C
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 80252D50
  c->r[3]=0u-c->r[3]; // 80252D54
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 80252D58
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 80252D5C
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252D60
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252D64
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 80252D68
  c->r[3]=0u-c->r[3]; // 80252D6C
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 80252D70
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252D74
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252D78
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 80252D7C
  c->r[3]=0u-c->r[3]; // 80252D80
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 80252D84
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252D88
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252D8C
  c->r[3]=rotl(c->r[3],7)&0x00000001u; // 80252D90
  c->r[3]=0u-c->r[3]; // 80252D94
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 80252D98
  W16(c->r[4]+0x00000000u,c->r[6]); // 80252D9C
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252DA0
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 80252DA4
  W8(c->r[4]+0x00000002u,c->r[3]); // 80252DA8
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252DAC
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 80252DB0
  W8(c->r[4]+0x00000003u,c->r[3]); // 80252DB4
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252DB8
  W8(c->r[4]+0x00000004u,c->r[3]); // 80252DBC
  c->r[3]=R32(c->r[5]+0x00000004u); // 80252DC0
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 80252DC4
  W8(c->r[4]+0x00000005u,c->r[3]); // 80252DC8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252DCC
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 80252DD0
  W8(c->r[4]+0x00000006u,c->r[3]); // 80252DD4
  cmpu(c,0,c->r[3],0x000000AAu); // 80252DD8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80252DDC
  W8(c->r[4]+0x00000007u,c->r[3]); // 80252DE0
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252DE4
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252DE8
  if (crb(c,0)) { goto L_80252DFC; } // 80252DEC
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 80252DF0
  c->r[0]=c->r[0]|0x00000040u; // 80252DF4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252DF8
L_80252DFC:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 80252DFC
  cmpu(c,0,c->r[0],0x000000AAu); // 80252E00
  if (crb(c,0)) { goto L_80252E14; } // 80252E04
  c->r[0]=R16(c->r[4]+0x00000000u); // 80252E08
  c->r[0]=c->r[0]|0x00000020u; // 80252E0C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252E10
L_80252E14:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 80252E14
  c->r[6]=R8(c->r[4]+0x00000003u); // 80252E18
  c->r[0]=c->r[3]+0xFFFFFF80u; // 80252E1C
  c->r[5]=R8(c->r[4]+0x00000004u); // 80252E20
  c->r[3]=R8(c->r[4]+0x00000005u); // 80252E24
  c->r[6]=c->r[6]+0xFFFFFF80u; // 80252E28
  c->r[5]=c->r[5]+0xFFFFFF80u; // 80252E2C
  W8(c->r[4]+0x00000002u,c->r[0]); // 80252E30
  c->r[0]=c->r[3]+0xFFFFFF80u; // 80252E34
  W8(c->r[4]+0x00000003u,c->r[6]); // 80252E38
  W8(c->r[4]+0x00000004u,c->r[5]); // 80252E3C
  W8(c->r[4]+0x00000005u,c->r[0]); // 80252E40
  return; // 80252E44
}

// fn_80252E50
void f_80252E50(Ctx* __restrict c) {
  trace_call(0x80252E50u);
  c->r[0]=R32(c->r[5]+0x00000000u); // 80252E50
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80252E54
  W16(c->r[4]+0x00000000u,c->r[0]); // 80252E58
  c->r[0]=R32(c->r[5]+0x00000000u); // 80252E5C
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 80252E60
  W8(c->r[4]+0x00000002u,c->r[0]); // 80252E64
  c->r[0]=R32(c->r[5]+0x00000000u); // 80252E68
  W8(c->r[4]+0x00000003u,c->r[0]); // 80252E6C
  c->r[0]=R32(c->r[13]+0xFFFF919Cu); // 80252E70
  c->r[0]=rotl(c->r[0],0)&0x00000700u; // 80252E74
  cmps(c,0,(int32_t)c->r[0],1024); // 80252E78
  if (crb(c,2)) { goto L_80252FF4; } // 80252E7C
  if (!crb(c,0)) { goto L_80252EB4; } // 80252E80
  cmps(c,0,(int32_t)c->r[0],512); // 80252E84
  if (crb(c,2)) { goto L_80252F70; } // 80252E88
  if (!crb(c,0)) { goto L_80252EA8; } // 80252E8C
  cmps(c,0,(int32_t)c->r[0],256); // 80252E90
  if (crb(c,2)) { goto L_80252F24; } // 80252E94
  if (!crb(c,0)) { goto L_8025302C; } // 80252E98
  cmps(c,0,(int32_t)c->r[0],0); // 80252E9C
  if (crb(c,2)) { goto L_80252ED8; } // 80252EA0
  goto L_8025302C; // 80252EA4
L_80252EA8:;
  cmps(c,0,(int32_t)c->r[0],768); // 80252EA8
  if (crb(c,2)) { goto L_80252FB8; } // 80252EAC
  goto L_8025302C; // 80252EB0
L_80252EB4:;
  cmps(c,0,(int32_t)c->r[0],1536); // 80252EB4
  if (crb(c,2)) { goto L_80252ED8; } // 80252EB8
  if (!crb(c,0)) { goto L_80252ECC; } // 80252EBC
  cmps(c,0,(int32_t)c->r[0],1280); // 80252EC0
  if (crb(c,2)) { goto L_80252ED8; } // 80252EC4
  goto L_8025302C; // 80252EC8
L_80252ECC:;
  cmps(c,0,(int32_t)c->r[0],1792); // 80252ECC
  if (crb(c,2)) { goto L_80252ED8; } // 80252ED0
  goto L_8025302C; // 80252ED4
L_80252ED8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252ED8
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 80252EDC
  W8(c->r[4]+0x00000004u,c->r[0]); // 80252EE0
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252EE4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80252EE8
  W8(c->r[4]+0x00000005u,c->r[0]); // 80252EEC
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252EF0
  c->r[0]=rotl(c->r[0],24)&0x000000F0u; // 80252EF4
  W8(c->r[4]+0x00000006u,c->r[0]); // 80252EF8
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252EFC
  c->r[0]=rotl(c->r[0],28)&0x000000F0u; // 80252F00
  W8(c->r[4]+0x00000007u,c->r[0]); // 80252F04
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F08
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 80252F0C
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252F10
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F14
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 80252F18
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252F1C
  goto L_8025302C; // 80252F20
L_80252F24:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F24
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 80252F28
  W8(c->r[4]+0x00000004u,c->r[0]); // 80252F2C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F30
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 80252F34
  W8(c->r[4]+0x00000005u,c->r[0]); // 80252F38
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F3C
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 80252F40
  W8(c->r[4]+0x00000006u,c->r[0]); // 80252F44
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F48
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 80252F4C
  W8(c->r[4]+0x00000007u,c->r[0]); // 80252F50
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F54
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 80252F58
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252F5C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F60
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 80252F64
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252F68
  goto L_8025302C; // 80252F6C
L_80252F70:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F70
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 80252F74
  W8(c->r[4]+0x00000004u,c->r[0]); // 80252F78
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F7C
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 80252F80
  W8(c->r[4]+0x00000005u,c->r[0]); // 80252F84
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F88
  c->r[0]=rotl(c->r[0],16)&0x000000F0u; // 80252F8C
  W8(c->r[4]+0x00000006u,c->r[0]); // 80252F90
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252F94
  c->r[0]=rotl(c->r[0],20)&0x000000F0u; // 80252F98
  W8(c->r[4]+0x00000007u,c->r[0]); // 80252F9C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252FA0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 80252FA4
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252FA8
  c->r[0]=R32(c->r[5]+0x00000004u); // 80252FAC
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252FB0
  goto L_8025302C; // 80252FB4
L_80252FB8:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 80252FB8
  c->r[0]=0u+0x00000000u; // 80252FBC
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 80252FC0
  W8(c->r[4]+0x00000004u,c->r[6]); // 80252FC4
  c->r[6]=R32(c->r[5]+0x00000004u); // 80252FC8
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 80252FCC
  W8(c->r[4]+0x00000005u,c->r[6]); // 80252FD0
  c->r[6]=R32(c->r[5]+0x00000004u); // 80252FD4
  c->r[6]=rotl(c->r[6],24)&0x000000FFu; // 80252FD8
  W8(c->r[4]+0x00000006u,c->r[6]); // 80252FDC
  c->r[5]=R32(c->r[5]+0x00000004u); // 80252FE0
  W8(c->r[4]+0x00000007u,c->r[5]); // 80252FE4
  W8(c->r[4]+0x00000008u,c->r[0]); // 80252FE8
  W8(c->r[4]+0x00000009u,c->r[0]); // 80252FEC
  goto L_8025302C; // 80252FF0
L_80252FF4:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 80252FF4
  c->r[0]=0u+0x00000000u; // 80252FF8
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 80252FFC
  W8(c->r[4]+0x00000004u,c->r[6]); // 80253000
  c->r[6]=R32(c->r[5]+0x00000004u); // 80253004
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 80253008
  W8(c->r[4]+0x00000005u,c->r[6]); // 8025300C
  W8(c->r[4]+0x00000006u,c->r[0]); // 80253010
  W8(c->r[4]+0x00000007u,c->r[0]); // 80253014
  c->r[0]=R32(c->r[5]+0x00000004u); // 80253018
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 8025301C
  W8(c->r[4]+0x00000008u,c->r[0]); // 80253020
  c->r[0]=R32(c->r[5]+0x00000004u); // 80253024
  W8(c->r[4]+0x00000009u,c->r[0]); // 80253028
L_8025302C:;
  c->r[6]=R8(c->r[4]+0x00000002u); // 8025302C
  c->r[5]=0u+0x804A0000u; // 80253030
  c->r[8]=R8(c->r[4]+0x00000003u); // 80253034
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80253038
  c->r[9]=c->r[6]+0xFFFFFF80u; // 8025303C
  c->r[7]=R8(c->r[4]+0x00000004u); // 80253040
  c->r[6]=R8(c->r[4]+0x00000005u); // 80253044
  c->r[8]=c->r[8]+0xFFFFFF80u; // 80253048
  c->r[7]=c->r[7]+0xFFFFFF80u; // 8025304C
  W8(c->r[4]+0x00000002u,c->r[9]); // 80253050
  c->r[6]=c->r[6]+0xFFFFFF80u; // 80253054
  c->r[5]=c->r[5]+0xFFFFD660u; // 80253058
  W8(c->r[4]+0x00000003u,c->r[8]); // 8025305C
  W8(c->r[4]+0x00000004u,c->r[7]); // 80253060
  W8(c->r[4]+0x00000005u,c->r[6]); // 80253064
  c->r[0]=R32(c->r[5]+c->r[0]); // 80253068
  c->r[5]=rotl(c->r[0],0)&0xFFFF0000u; // 8025306C
  c->r[0]=c->r[5]+0xF7000000u; // 80253070
  cmpu(c,0,c->r[0],0x00000000u); // 80253074
  if (!crb(c,2)) { goto L_802530BC; } // 80253078
  c->r[0]=R16(c->r[4]+0x00000000u); // 8025307C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 80253080
  c->r[0]=c->r[0]^0x00000080u; // 80253084
  cmps(c,0,(int32_t)c->r[0],0); // 80253088
  if (crb(c,2)) { goto L_802530BC; } // 8025308C
  c->r[0]=0u+0x80000000u; // 80253090
  c->r[5]=R32(c->r[13]+0xFFFF9EE4u); // 80253094
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80253098
  c->r[3]=c->r[5]|c->r[3]; // 8025309C
  W32(c->r[13]+0xFFFF9EE4u,c->r[3]); // 802530A0
  c->r[0]=0u+0x00000000u; // 802530A4
  W8(c->r[4]+0x00000002u,c->r[0]); // 802530A8
  W8(c->r[4]+0x00000003u,c->r[0]); // 802530AC
  W8(c->r[4]+0x00000004u,c->r[0]); // 802530B0
  W8(c->r[4]+0x00000005u,c->r[0]); // 802530B4
  return; // 802530B8
L_802530BC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802530BC
  c->r[5]=0u+0x804A0000u; // 802530C0
  c->r[6]=0u+0x80000000u; // 802530C4
  c->r[7]=R32(c->r[13]+0xFFFF9EE4u); // 802530C8
  c->r[5]=c->r[5]+0xFFFFD630u; // 802530CC
  c->r[5]=c->r[5]+c->r[0]; // 802530D0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]>>((c->r[3])&31)); // 802530D4
  c->r[8]=R8(c->r[5]+0x00000002u); // 802530D8
  c->r[0]=c->r[7]&~c->r[0]; // 802530DC
  W32(c->r[13]+0xFFFF9EE4u,c->r[0]); // 802530E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[0]); // 802530E4
  c->r[6]=R8(c->r[4]+0x00000002u); // 802530E8
  if (!crb(c,1)) { goto L_8025310C; } // 802530EC
  c->r[3]=c->r[8]+0xFFFFFF80u; // 802530F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802530F4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802530F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 802530FC
  if (!crb(c,0)) { goto L_80253128; } // 80253100
  c->r[6]=c->r[3]|c->r[3]; // 80253104
  goto L_80253128; // 80253108
L_8025310C:;
  if (!crb(c,0)) { goto L_80253128; } // 8025310C
  c->r[3]=c->r[8]+0x0000007Fu; // 80253110
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80253114
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80253118
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8025311C
  if (!crb(c,0)) { goto L_80253128; } // 80253120
  c->r[6]=c->r[3]|c->r[3]; // 80253124
L_80253128:;
  c->r[0]=c->r[6]-c->r[8]; // 80253128
  W8(c->r[4]+0x00000002u,c->r[0]); // 8025312C
  c->r[6]=R8(c->r[4]+0x00000003u); // 80253130
  c->r[7]=R8(c->r[5]+0x00000003u); // 80253134
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80253138
  if (!crb(c,1)) { goto L_8025315C; } // 8025313C
  c->r[3]=c->r[7]+0xFFFFFF80u; // 80253140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80253144
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80253148
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8025314C
  if (!crb(c,0)) { goto L_80253178; } // 80253150
  c->r[6]=c->r[3]|c->r[3]; // 80253154
  goto L_80253178; // 80253158
L_8025315C:;
  if (!crb(c,0)) { goto L_80253178; } // 8025315C
  c->r[3]=c->r[7]+0x0000007Fu; // 80253160
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80253164
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80253168
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8025316C
  if (!crb(c,0)) { goto L_80253178; } // 80253170
  c->r[6]=c->r[3]|c->r[3]; // 80253174
L_80253178:;
  c->r[0]=c->r[6]-c->r[7]; // 80253178
  W8(c->r[4]+0x00000003u,c->r[0]); // 8025317C
  c->r[6]=R8(c->r[4]+0x00000004u); // 80253180
  c->r[7]=R8(c->r[5]+0x00000004u); // 80253184
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80253188
  if (!crb(c,1)) { goto L_802531AC; } // 8025318C
  c->r[3]=c->r[7]+0xFFFFFF80u; // 80253190
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80253194
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80253198
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8025319C
  if (!crb(c,0)) { goto L_802531C8; } // 802531A0
  c->r[6]=c->r[3]|c->r[3]; // 802531A4
  goto L_802531C8; // 802531A8
L_802531AC:;
  if (!crb(c,0)) { goto L_802531C8; } // 802531AC
  c->r[3]=c->r[7]+0x0000007Fu; // 802531B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802531B4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802531B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802531BC
  if (!crb(c,0)) { goto L_802531C8; } // 802531C0
  c->r[6]=c->r[3]|c->r[3]; // 802531C4
L_802531C8:;
  c->r[0]=c->r[6]-c->r[7]; // 802531C8
  W8(c->r[4]+0x00000004u,c->r[0]); // 802531CC
  c->r[6]=R8(c->r[4]+0x00000005u); // 802531D0
  c->r[7]=R8(c->r[5]+0x00000005u); // 802531D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 802531D8
  if (!crb(c,1)) { goto L_802531FC; } // 802531DC
  c->r[3]=c->r[7]+0xFFFFFF80u; // 802531E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802531E4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802531E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 802531EC
  if (!crb(c,0)) { goto L_80253218; } // 802531F0
  c->r[6]=c->r[3]|c->r[3]; // 802531F4
  goto L_80253218; // 802531F8
L_802531FC:;
  if (!crb(c,0)) { goto L_80253218; } // 802531FC
  c->r[3]=c->r[7]+0x0000007Fu; // 80253200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80253204
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80253208
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8025320C
  if (!crb(c,0)) { goto L_80253218; } // 80253210
  c->r[6]=c->r[3]|c->r[3]; // 80253214
L_80253218:;
  c->r[0]=c->r[6]-c->r[7]; // 80253218
  W8(c->r[4]+0x00000005u,c->r[0]); // 8025321C
  c->r[3]=R8(c->r[4]+0x00000006u); // 80253220
  c->r[0]=R8(c->r[5]+0x00000006u); // 80253224
  cmpu(c,0,c->r[3],c->r[0]); // 80253228
  if (!crb(c,0)) { goto L_80253234; } // 8025322C
  c->r[3]=c->r[0]|c->r[0]; // 80253230
L_80253234:;
  c->r[0]=c->r[3]-c->r[0]; // 80253234
  W8(c->r[4]+0x00000006u,c->r[0]); // 80253238
  c->r[3]=R8(c->r[4]+0x00000007u); // 8025323C
  c->r[0]=R8(c->r[5]+0x00000007u); // 80253240
  cmpu(c,0,c->r[3],c->r[0]); // 80253244
  if (!crb(c,0)) { goto L_80253250; } // 80253248
  c->r[3]=c->r[0]|c->r[0]; // 8025324C
L_80253250:;
  c->r[0]=c->r[3]-c->r[0]; // 80253250
  W8(c->r[4]+0x00000007u,c->r[0]); // 80253254
  return; // 80253258
}

// fn_80253260
void f_80253260(Ctx* __restrict c) {
  trace_call(0x80253260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253260
  c->r[0]=c->lr; // 80253264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80253268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025326C
  c->r[31]=c->r[3]|c->r[3]; // 80253270
  c->r[0]=R32(c->r[13]+0xFFFF9EDCu); // 80253274
  cmps(c,0,(int32_t)c->r[0],0); // 80253278
  if (crb(c,2)) { goto L_80253294; } // 8025327C
  c->r[0]=0u+0x00000000u; // 80253280
  c->r[3]=0u+0x80250000u; // 80253284
  W32(c->r[13]+0xFFFF9EDCu,c->r[0]); // 80253288
  c->r[3]=c->r[3]+0x00003330u; // 8025328C
  c->lr=0x80253294u; f_80255CB0(c); // 80253290
L_80253294:;
  cmps(c,0,(int32_t)c->r[31],0); // 80253294
  if (!crb(c,2)) { goto L_80253308; } // 80253298
  c->r[0]=R32(c->r[13]+0xFFFF9EF8u); // 8025329C
  c->r[31]=0u+0x00000000u; // 802532A0
  c->r[3]=0u+0x00000000u; // 802532A4
  cmps(c,0,(int32_t)c->r[0],0); // 802532A8
  if (!crb(c,2)) { goto L_802532C0; } // 802532AC
  c->r[0]=R32(c->r[13]+0xFFFF9194u); // 802532B0
  cmps(c,0,(int32_t)c->r[0],32); // 802532B4
  if (!crb(c,2)) { goto L_802532C0; } // 802532B8
  c->r[3]=0u+0x00000001u; // 802532BC
L_802532C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802532C0
  if (crb(c,2)) { goto L_802532D8; } // 802532C4
  c->lr=0x802532CCu; f_80255520(c); // 802532C8
  cmps(c,0,(int32_t)c->r[3],0); // 802532CC
  if (!crb(c,2)) { goto L_802532D8; } // 802532D0
  c->r[31]=0u+0x00000001u; // 802532D4
L_802532D8:;
  c->r[0]=R32(c->r[13]+0xFFFF9ED8u); // 802532D8
  cmps(c,0,(int32_t)c->r[0],0); // 802532DC
  if (!crb(c,2)) { goto L_80253300; } // 802532E0
  cmps(c,0,(int32_t)c->r[31],0); // 802532E4
  if (crb(c,2)) { goto L_80253300; } // 802532E8
  c->r[3]=0u+0xF0000000u; // 802532EC
  c->lr=0x802532F4u; f_802528E0(c); // 802532F0
  W32(c->r[13]+0xFFFF9ED8u,c->r[3]); // 802532F4
  c->r[3]=0u+0x00000000u; // 802532F8
  goto L_80253314; // 802532FC
L_80253300:;
  c->r[3]=c->r[31]|c->r[31]; // 80253300
  goto L_80253314; // 80253304
L_80253308:;
  c->r[0]=0u+0x00000000u; // 80253308
  W32(c->r[13]+0xFFFF9ED8u,c->r[0]); // 8025330C
  c->r[3]=0u+0x00000001u; // 80253310
L_80253314:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80253314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80253318
  c->lr=c->r[0]; // 8025331C
  c->r[1]=c->r[1]+0x00000010u; // 80253320
  return; // 80253324
}

// SamplingHandler
void f_80253330(Ctx* __restrict c) {
  trace_call(0x80253330u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253330
  c->r[0]=c->lr; // 80253334
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80253338
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8025333C
  c->r[31]=c->r[4]|c->r[4]; // 80253340
  c->r[0]=R32(c->r[13]+0xFFFF9EDCu); // 80253344
  cmps(c,0,(int32_t)c->r[0],0); // 80253348
  if (crb(c,2)) { goto L_8025337C; } // 8025334C
  c->r[3]=c->r[1]+0x00000008u; // 80253350
  c->lr=0x80253358u; f_802458A0(c); // 80253354
  c->r[3]=c->r[1]+0x00000008u; // 80253358
  c->lr=0x80253360u; f_80245660(c); // 8025335C
  c->r[12]=R32(c->r[13]+0xFFFF9EDCu); // 80253360
  c->ctr=c->r[12]; // 80253364
  if (true) { c->lr=0x8025336Cu; dispatch(c,c->ctr); } // 80253368
  c->r[3]=c->r[1]+0x00000008u; // 8025336C
  c->lr=0x80253374u; f_802458A0(c); // 80253370
  c->r[3]=c->r[31]|c->r[31]; // 80253374
  c->lr=0x8025337Cu; f_80245660(c); // 80253378
L_8025337C:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8025337C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80253380
  c->lr=c->r[0]; // 80253384
  c->r[1]=c->r[1]+0x000002E0u; // 80253388
  return; // 8025338C
}

// __PADDisableRecalibration
void f_80253390(Ctx* __restrict c) {
  trace_call(0x80253390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253390
  c->r[0]=c->lr; // 80253394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80253398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025339C
  c->r[31]=c->r[3]|c->r[3]; // 802533A0
  c->lr=0x802533A8u; f_802494C0(c); // 802533A4
  c->r[5]=0u+0x80000000u; // 802533A8
  cmps(c,0,(int32_t)c->r[31],0); // 802533AC
  c->r[4]=R8(c->r[5]+0x000030E3u); // 802533B0
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFBFu; // 802533B4
  W8(c->r[5]+0x000030E3u,c->r[0]); // 802533B8
  c->r[31]=rotl(c->r[4],26)&0x00000001u; // 802533BC
  if (crb(c,2)) { goto L_802533D0; } // 802533C0
  c->r[0]=R8(c->r[5]+0x000030E3u); // 802533C4
  c->r[0]=c->r[0]|0x00000040u; // 802533C8
  W8(c->r[5]+0x000030E3u,c->r[0]); // 802533CC
L_802533D0:;
  c->lr=0x802533D4u; f_80249500(c); // 802533D0
  c->r[3]=c->r[31]|c->r[31]; // 802533D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802533D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802533DC
  c->lr=c->r[0]; // 802533E0
  c->r[1]=c->r[1]+0x00000010u; // 802533E4
  return; // 802533E8
}

// SCInit
void f_802533F0(Ctx* __restrict c) {
  trace_call(0x802533F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802533F0
  c->r[0]=c->lr; // 802533F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802533F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802533FC
  c->lr=0x80253404u; f_802494C0(c); // 80253400
  c->r[0]=R8(c->r[13]+0xFFFF9F1Eu); // 80253404
  cmps(c,0,(int32_t)c->r[0],0); // 80253408
  if (crb(c,2)) { goto L_80253418; } // 8025340C
  c->lr=0x80253414u; f_80249500(c); // 80253410
  goto L_8025347C; // 80253414
L_80253418:;
  c->r[31]=0u+0x00000001u; // 80253418
  W8(c->r[13]+0xFFFF9F1Eu,c->r[31]); // 8025341C
  W8(c->r[13]+0xFFFF9F08u,c->r[31]); // 80253420
  c->lr=0x80253428u; f_80249500(c); // 80253424
  c->r[3]=R32(c->r[13]+0xFFFF91B0u); // 80253428
  c->lr=0x80253430u; f_80243B90(c); // 8025342C
  c->r[3]=0u+0x804A0000u; // 80253430
  c->r[3]=c->r[3]+0xFFFFD6E0u; // 80253434
  c->lr=0x8025343Cu; f_8024CDF0(c); // 80253438
  c->lr=0x80253440u; f_80242910(c); // 8025343C
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 80253440
  if (crb(c,2)) { goto L_8025344C; } // 80253444
  W8(c->r[13]+0xFFFF9F1Cu,c->r[31]); // 80253448
L_8025344C:;
  c->lr=0x80253450u; f_80241310(c); // 8025344C
  cmps(c,0,(int32_t)c->r[3],0); // 80253450
  if (!crb(c,2)) { goto L_80253474; } // 80253454
  c->r[3]=0u+0x804A0000u; // 80253458
  c->r[4]=0u+0x00004000u; // 8025345C
  c->r[3]=c->r[3]+0xFFFFD880u; // 80253460
  c->r[5]=0u+0x00000000u; // 80253464
  c->lr=0x8025346Cu; f_802535B0(c); // 80253468
  cmps(c,0,(int32_t)c->r[3],0); // 8025346C
  if (crb(c,2)) { goto L_8025347C; } // 80253470
L_80253474:;
  c->r[0]=0u+0x00000002u; // 80253474
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 80253478
L_8025347C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025347C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80253480
  c->lr=c->r[0]; // 80253484
  c->r[1]=c->r[1]+0x00000010u; // 80253488
  return; // 8025348C
}

// SCCheckStatus
void f_80253490(Ctx* __restrict c) {
  trace_call(0x80253490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253490
  c->r[0]=c->lr; // 80253494
  W32(c->r[1]+0x00000024u,c->r[0]); // 80253498
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025349C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802534A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802534A4
  c->lr=0x802534ACu; f_802494C0(c); // 802534A8
  c->r[29]=R8(c->r[13]+0xFFFF9F08u); // 802534AC
  cmpu(c,0,c->r[29],0x00000003u); // 802534B0
  if (!crb(c,2)) { goto L_80253588; } // 802534B4
  c->r[0]=0u+0x00000001u; // 802534B8
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 802534BC
  c->lr=0x802534C4u; f_80249500(c); // 802534C0
  c->r[31]=0u+0x804A0000u; // 802534C4
  c->r[31]=c->r[31]+0xFFFFD6E0u; // 802534C8
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 802534CC
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 802534D0
  c->lr=0x802534D8u; f_80253A60(c); // 802534D4
  cmps(c,0,(int32_t)c->r[3],0); // 802534D8
  if (!crb(c,2)) { goto L_8025351C; } // 802534DC
  c->lr=0x802534E4u; f_802494C0(c); // 802534E0
  c->r[5]=0u+0x804A0000u; // 802534E4
  c->r[4]=R32(c->r[31]+0x0000016Cu); // 802534E8
  c->r[5]=c->r[5]+0xFFFFD880u; // 802534EC
  c->r[29]=c->r[3]|c->r[3]; // 802534F0
  cmpu(c,0,c->r[5],c->r[4]); // 802534F4
  if (crb(c,2)) { goto L_80253508; } // 802534F8
  c->r[3]=c->r[5]|c->r[5]; // 802534FC
  c->r[5]=0u+0x00004000u; // 80253500
  c->lr=0x80253508u; f_80004000(c); // 80253504
L_80253508:;
  c->r[0]=0u+0x00000000u; // 80253508
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 8025350C
  c->r[3]=c->r[29]|c->r[29]; // 80253510
  c->lr=0x80253518u; f_80249500(c); // 80253514
  goto L_8025357C; // 80253518
L_8025351C:;
  c->lr=0x80253520u; f_802494C0(c); // 8025351C
  c->r[31]=R32(c->r[31]+0x0000016Cu); // 80253520
  c->r[29]=c->r[3]|c->r[3]; // 80253524
  c->r[30]=0u+0x00004000u; // 80253528
  c->r[4]=0u+0x00000000u; // 8025352C
  c->r[3]=c->r[31]|c->r[31]; // 80253530
  c->r[5]=0u+0x00004000u; // 80253534
  c->lr=0x8025353Cu; f_80004350(c); // 80253538
  cmpu(c,0,c->r[30],0x0000000Cu); // 8025353C
  if (!crb(c,1)) { goto L_8025356C; } // 80253540
  c->r[3]=c->r[31]|c->r[31]; // 80253544
  c->r[4]=c->r[13]+0xFFFF92B0u; // 80253548
  c->r[5]=0u+0x00000004u; // 8025354C
  c->lr=0x80253554u; f_80004000(c); // 80253550
  c->r[3]=c->r[31]+0x00003FFCu; // 80253554
  c->r[4]=c->r[13]+0xFFFF92B8u; // 80253558
  c->r[5]=0u+0x00000004u; // 8025355C
  c->lr=0x80253564u; f_80004000(c); // 80253560
  c->r[0]=0u+0x00000008u; // 80253564
  W16(c->r[31]+0x00000006u,c->r[0]); // 80253568
L_8025356C:;
  c->r[0]=0u+0x00000000u; // 8025356C
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80253570
  c->r[3]=c->r[29]|c->r[29]; // 80253574
  c->lr=0x8025357Cu; f_80249500(c); // 80253578
L_8025357C:;
  c->r[29]=0u+0x00000000u; // 8025357C
  W8(c->r[13]+0xFFFF9F08u,c->r[29]); // 80253580
  goto L_8025358C; // 80253584
L_80253588:;
  c->lr=0x8025358Cu; f_80249500(c); // 80253588
L_8025358C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025358C
  c->r[3]=c->r[29]|c->r[29]; // 80253590
  c->r[30]=R32(c->r[1]+0x00000018u); // 80253594
  c->r[29]=R32(c->r[1]+0x00000014u); // 80253598
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025359C
  c->lr=c->r[0]; // 802535A0
  c->r[1]=c->r[1]+0x00000020u; // 802535A4
  return; // 802535A8
}

// SCReloadConfFileAsync
void f_802535B0(Ctx* __restrict c) {
  trace_call(0x802535B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802535B0
  c->r[0]=c->lr; // 802535B4
  cmpu(c,0,c->r[4],0x00004000u); // 802535B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802535BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802535C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802535C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802535C8
  c->r[29]=c->r[3]|c->r[3]; // 802535CC
  if (!crb(c,0)) { goto L_802535DC; } // 802535D0
  c->r[3]=0u+0xFFFFFF80u; // 802535D4
  goto L_802536A8; // 802535D8
L_802535DC:;
  c->r[30]=0u+0x804A0000u; // 802535DC
  c->r[9]=0u+0x80380000u; // 802535E0
  c->r[30]=c->r[30]+0xFFFFD6E0u; // 802535E4
  c->r[8]=0u+0x80380000u; // 802535E8
  c->r[31]=0u+0x00000000u; // 802535EC
  c->r[4]=0u+0x80000000u; // 802535F0
  c->r[7]=c->r[4]+0x00003800u; // 802535F4
  W32(c->r[30]+0x0000015Cu,c->r[5]); // 802535F8
  c->r[9]=c->r[9]+0xFFFFFD88u; // 802535FC
  c->r[8]=c->r[8]+0xFFFFFDA0u; // 80253600
  c->r[4]=0u+0x00000001u; // 80253604
  c->r[6]=0u+0x00004000u; // 80253608
  c->r[0]=0u+0x00000100u; // 8025360C
  W8(c->r[13]+0xFFFF9F08u,c->r[4]); // 80253610
  c->r[4]=0u+0x00000000u; // 80253614
  c->r[5]=0u+0x00004000u; // 80253618
  W32(c->r[30]+0x00000160u,c->r[31]); // 8025361C
  W8(c->r[30]+0x0000015Au,c->r[31]); // 80253620
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 80253624
  W32(c->r[30]+0x00000180u,c->r[31]); // 80253628
  W32(c->r[30]+0x00000164u,c->r[9]); // 8025362C
  W32(c->r[30]+0x00000168u,c->r[8]); // 80253630
  W32(c->r[30]+0x0000016Cu,c->r[3]); // 80253634
  W32(c->r[30]+0x00000170u,c->r[7]); // 80253638
  W32(c->r[30]+0x00000174u,c->r[6]); // 8025363C
  W32(c->r[30]+0x00000178u,c->r[0]); // 80253640
  c->lr=0x80253648u; f_80004350(c); // 80253644
  c->r[3]=c->r[29]|c->r[29]; // 80253648
  c->r[4]=c->r[13]+0xFFFF92B0u; // 8025364C
  c->r[5]=0u+0x00000004u; // 80253650
  c->lr=0x80253658u; f_80004000(c); // 80253654
  c->r[3]=c->r[29]+0x00003FFCu; // 80253658
  c->r[4]=c->r[13]+0xFFFF92B8u; // 8025365C
  c->r[5]=0u+0x00000004u; // 80253660
  c->lr=0x80253668u; f_80004000(c); // 80253664
  c->r[0]=0u+0x00000008u; // 80253668
  W16(c->r[29]+0x00000006u,c->r[0]); // 8025366C
  c->r[6]=0u+0x80250000u; // 80253670
  c->r[4]=c->r[30]+0x00000008u; // 80253674
  c->r[0]=R8(c->r[30]+0x0000015Au); // 80253678
  c->r[6]=c->r[6]+0x000036D0u; // 8025367C
  W8(c->r[30]+0x00000159u,c->r[31]); // 80253680
  c->r[7]=c->r[30]+0x00000094u; // 80253684
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80253688
  c->r[5]=0u+0x00000001u; // 8025368C
  c->r[3]=c->r[30]+c->r[0]; // 80253690
  W32(c->r[13]+0xFFFF9F18u,c->r[31]); // 80253694
  c->r[3]=R32(c->r[3]+0x00000164u); // 80253698
  W32(c->r[13]+0xFFFF9F10u,c->r[31]); // 8025369C
  W32(c->r[13]+0xFFFF9F0Cu,c->r[31]); // 802536A0
  c->lr=0x802536A8u; f_80240990(c); // 802536A4
L_802536A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802536A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802536AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802536B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802536B4
  c->lr=c->r[0]; // 802536B8
  c->r[1]=c->r[1]+0x00000020u; // 802536BC
  return; // 802536C0
}

// OpenCallbackFromReload
void f_802536D0(Ctx* __restrict c) {
  trace_call(0x802536D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802536D0
  c->r[0]=c->lr; // 802536D4
  cmps(c,0,(int32_t)c->r[3],0); // 802536D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802536DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802536E0
  c->r[31]=c->r[3]|c->r[3]; // 802536E4
  if (!crb(c,2)) { goto L_8025372C; } // 802536E8
  c->r[4]=0u+0x804A0000u; // 802536EC
  c->r[6]=0u+0x80250000u; // 802536F0
  c->r[4]=c->r[4]+0xFFFFD6E0u; // 802536F4
  c->r[5]=0u+0x00000001u; // 802536F8
  c->r[0]=R8(c->r[4]+0x0000015Au); // 802536FC
  c->r[3]=c->r[4]+0x00000008u; // 80253700
  W8(c->r[4]+0x00000159u,c->r[5]); // 80253704
  c->r[7]=c->r[4]+0x00000094u; // 80253708
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025370C
  c->r[6]=c->r[6]+0x000037A0u; // 80253710
  c->r[5]=c->r[4]+c->r[0]; // 80253714
  c->r[4]=R32(c->r[5]+0x0000016Cu); // 80253718
  c->r[5]=R32(c->r[5]+0x00000174u); // 8025371C
  c->lr=0x80253724u; f_8023FA60(c); // 80253720
  cmps(c,0,(int32_t)c->r[3],0); // 80253724
  if (crb(c,2)) { goto L_8025378C; } // 80253728
L_8025372C:;
  c->r[3]=0u+0x804A0000u; // 8025372C
  c->r[3]=c->r[3]+0xFFFFD6E0u; // 80253730
  c->r[0]=R8(c->r[3]+0x0000015Au); // 80253734
  cmps(c,0,(int32_t)c->r[0],0); // 80253738
  if (!crb(c,2)) { goto L_80253744; } // 8025373C
  W32(c->r[3]+0x00000160u,c->r[31]); // 80253740
L_80253744:;
  c->r[5]=0u+0x804A0000u; // 80253744
  c->r[4]=0u+0x00000000u; // 80253748
  c->r[5]=c->r[5]+0xFFFFD6E0u; // 8025374C
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80253750
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80253754
  c->r[3]=c->r[5]+c->r[0]; // 80253758
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 8025375C
  c->r[0]=R8(c->r[5]+0x00000159u); // 80253760
  cmps(c,0,(int32_t)c->r[0],0); // 80253764
  if (crb(c,2)) { goto L_80253788; } // 80253768
  c->r[4]=0u+0x80250000u; // 8025376C
  c->r[3]=c->r[5]+0x00000008u; // 80253770
  c->r[4]=c->r[4]+0x00003A50u; // 80253774
  c->r[5]=c->r[5]+0x00000094u; // 80253778
  c->lr=0x80253780u; f_80240B00(c); // 8025377C
  cmps(c,0,(int32_t)c->r[3],0); // 80253780
  if (crb(c,2)) { goto L_8025378C; } // 80253784
L_80253788:;
  c->lr=0x8025378Cu; f_80253920(c); // 80253788
L_8025378C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025378C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80253790
  c->lr=c->r[0]; // 80253794
  c->r[1]=c->r[1]+0x00000010u; // 80253798
  return; // 8025379C
}

// ReadCallbackFromReload
void f_802537A0(Ctx* __restrict c) {
  trace_call(0x802537A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802537A0
  c->r[0]=c->lr; // 802537A4
  c->r[5]=0u+0x804A0000u; // 802537A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802537AC
  c->r[5]=c->r[5]+0xFFFFD6E0u; // 802537B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802537B4
  c->r[31]=c->r[3]|c->r[3]; // 802537B8
  c->r[0]=R8(c->r[5]+0x0000015Au); // 802537BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802537C0
  c->r[4]=c->r[5]+c->r[0]; // 802537C4
  c->r[0]=R32(c->r[4]+0x00000174u); // 802537C8
  cmpu(c,0,c->r[3],c->r[0]); // 802537CC
  if (!crb(c,2)) { goto L_802537FC; } // 802537D0
  W32(c->r[4]+0x0000017Cu,c->r[3]); // 802537D4
  c->r[0]=0u+0x00000000u; // 802537D8
  c->r[4]=0u+0x80250000u; // 802537DC
  c->r[3]=c->r[5]+0x00000008u; // 802537E0
  W8(c->r[5]+0x00000159u,c->r[0]); // 802537E4
  c->r[4]=c->r[4]+0x00003890u; // 802537E8
  c->r[5]=c->r[5]+0x00000094u; // 802537EC
  c->lr=0x802537F4u; f_80240B00(c); // 802537F0
  cmps(c,0,(int32_t)c->r[3],0); // 802537F4
  if (crb(c,2)) { goto L_80253874; } // 802537F8
L_802537FC:;
  c->r[3]=0u+0x804A0000u; // 802537FC
  c->r[3]=c->r[3]+0xFFFFD6E0u; // 80253800
  c->r[0]=R8(c->r[3]+0x0000015Au); // 80253804
  cmps(c,0,(int32_t)c->r[0],0); // 80253808
  if (!crb(c,2)) { goto L_8025382C; } // 8025380C
  cmps(c,0,(int32_t)c->r[31],0); // 80253810
  c->r[0]=0u+0xFFFFFF80u; // 80253814
  if (crb(c,2)) { goto L_80253820; } // 80253818
  c->r[0]=c->r[31]|c->r[31]; // 8025381C
L_80253820:;
  c->r[3]=0u+0x804A0000u; // 80253820
  c->r[3]=c->r[3]+0xFFFFD6E0u; // 80253824
  W32(c->r[3]+0x00000160u,c->r[0]); // 80253828
L_8025382C:;
  c->r[5]=0u+0x804A0000u; // 8025382C
  c->r[4]=0u+0x00000000u; // 80253830
  c->r[5]=c->r[5]+0xFFFFD6E0u; // 80253834
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80253838
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025383C
  c->r[3]=c->r[5]+c->r[0]; // 80253840
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 80253844
  c->r[0]=R8(c->r[5]+0x00000159u); // 80253848
  cmps(c,0,(int32_t)c->r[0],0); // 8025384C
  if (crb(c,2)) { goto L_80253870; } // 80253850
  c->r[4]=0u+0x80250000u; // 80253854
  c->r[3]=c->r[5]+0x00000008u; // 80253858
  c->r[4]=c->r[4]+0x00003A50u; // 8025385C
  c->r[5]=c->r[5]+0x00000094u; // 80253860
  c->lr=0x80253868u; f_80240B00(c); // 80253864
  cmps(c,0,(int32_t)c->r[3],0); // 80253868
  if (crb(c,2)) { goto L_80253874; } // 8025386C
L_80253870:;
  c->lr=0x80253874u; f_80253920(c); // 80253870
L_80253874:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80253874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80253878
  c->lr=c->r[0]; // 8025387C
  c->r[1]=c->r[1]+0x00000010u; // 80253880
  return; // 80253884
}

// CloseCallbackFromReload
void f_80253890(Ctx* __restrict c) {
  trace_call(0x80253890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253890
  c->r[0]=c->lr; // 80253894
  cmps(c,0,(int32_t)c->r[3],0); // 80253898
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025389C
  if (!crb(c,2)) { goto L_802538AC; } // 802538A0
  c->lr=0x802538A8u; f_80253920(c); // 802538A4
  goto L_8025390C; // 802538A8
L_802538AC:;
  c->r[4]=0u+0x804A0000u; // 802538AC
  c->r[4]=c->r[4]+0xFFFFD6E0u; // 802538B0
  c->r[0]=R8(c->r[4]+0x0000015Au); // 802538B4
  cmps(c,0,(int32_t)c->r[0],0); // 802538B8
  if (!crb(c,2)) { goto L_802538C4; } // 802538BC
  W32(c->r[4]+0x00000160u,c->r[3]); // 802538C0
L_802538C4:;
  c->r[5]=0u+0x804A0000u; // 802538C4
  c->r[4]=0u+0x00000000u; // 802538C8
  c->r[5]=c->r[5]+0xFFFFD6E0u; // 802538CC
  c->r[0]=R8(c->r[5]+0x0000015Au); // 802538D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802538D4
  c->r[3]=c->r[5]+c->r[0]; // 802538D8
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 802538DC
  c->r[0]=R8(c->r[5]+0x00000159u); // 802538E0
  cmps(c,0,(int32_t)c->r[0],0); // 802538E4
  if (crb(c,2)) { goto L_80253908; } // 802538E8
  c->r[4]=0u+0x80250000u; // 802538EC
  c->r[3]=c->r[5]+0x00000008u; // 802538F0
  c->r[4]=c->r[4]+0x00003A50u; // 802538F4
  c->r[5]=c->r[5]+0x00000094u; // 802538F8
  c->lr=0x80253900u; f_80240B00(c); // 802538FC
  cmps(c,0,(int32_t)c->r[3],0); // 80253900
  if (crb(c,2)) { goto L_8025390C; } // 80253904
L_80253908:;
  c->lr=0x8025390Cu; f_80253920(c); // 80253908
L_8025390C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025390C
  c->lr=c->r[0]; // 80253910
  c->r[1]=c->r[1]+0x00000010u; // 80253914
  return; // 80253918
}

// FinishFromReload
void f_80253920(Ctx* __restrict c) {
  trace_call(0x80253920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253920
  c->r[0]=c->lr; // 80253924
  W32(c->r[1]+0x00000024u,c->r[0]); // 80253928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025392C
  c->r[31]=0u+0x00000000u; // 80253930
  W32(c->r[1]+0x00000018u,c->r[30]); // 80253934
  c->r[30]=0u+0x80250000u; // 80253938
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025393C
  c->r[29]=0u+0x804A0000u; // 80253940
  c->r[29]=c->r[29]+0xFFFFD6E0u; // 80253944
  W32(c->r[1]+0x00000010u,c->r[28]); // 80253948
L_8025394C:;
  c->r[3]=R8(c->r[29]+0x0000015Au); // 8025394C
  c->r[3]=c->r[3]+0x00000001u; // 80253950
  W8(c->r[29]+0x0000015Au,c->r[3]); // 80253954
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80253958
  cmpu(c,0,c->r[0],0x00000002u); // 8025395C
  if (!crb(c,0)) { goto L_80253994; } // 80253960
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80253964
  W8(c->r[29]+0x00000159u,c->r[31]); // 80253968
  c->r[3]=c->r[29]+c->r[0]; // 8025396C
  c->r[4]=c->r[29]+0x00000008u; // 80253970
  c->r[3]=R32(c->r[3]+0x00000164u); // 80253974
  c->r[6]=c->r[30]+0x000036D0u; // 80253978
  c->r[7]=c->r[29]+0x00000094u; // 8025397C
  c->r[5]=0u+0x00000001u; // 80253980
  c->lr=0x80253988u; f_80240990(c); // 80253984
  cmps(c,0,(int32_t)c->r[3],0); // 80253988
  if (!crb(c,2)) { IRQCHK(c); goto L_8025394C; } // 8025398C
  goto L_80253A24; // 80253990
L_80253994:;
  c->r[0]=R32(c->r[29]+0x00000160u); // 80253994
  cmps(c,0,(int32_t)c->r[0],0); // 80253998
  if (!crb(c,2)) { goto L_802539A8; } // 8025399C
  c->r[28]=0u+0x00000003u; // 802539A0
  goto L_802539F0; // 802539A4
L_802539A8:;
  c->r[30]=R32(c->r[29]+0x0000016Cu); // 802539A8
  c->r[4]=0u+0x00000000u; // 802539AC
  c->r[5]=0u+0x00004000u; // 802539B0
  c->r[3]=c->r[30]|c->r[30]; // 802539B4
  c->lr=0x802539BCu; f_80004350(c); // 802539B8
  c->r[3]=c->r[30]|c->r[30]; // 802539BC
  c->r[4]=c->r[13]+0xFFFF92B0u; // 802539C0
  c->r[5]=0u+0x00000004u; // 802539C4
  c->lr=0x802539CCu; f_80004000(c); // 802539C8
  c->r[3]=c->r[30]+0x00003FFCu; // 802539CC
  c->r[4]=c->r[13]+0xFFFF92B8u; // 802539D0
  c->r[5]=0u+0x00000004u; // 802539D4
  c->lr=0x802539DCu; f_80004000(c); // 802539D8
  c->r[0]=0u+0x00000008u; // 802539DC
  W16(c->r[30]+0x00000006u,c->r[0]); // 802539E0
  c->r[28]=0u+0x00000003u; // 802539E4
  c->r[0]=R32(c->r[29]+0x00000174u); // 802539E8
  W32(c->r[29]+0x0000017Cu,c->r[0]); // 802539EC
L_802539F0:;
  c->r[3]=0u+0x80000000u; // 802539F0
  c->r[30]=0u+0x00000000u; // 802539F4
  c->r[31]=0u+0x804A0000u; // 802539F8
  W8(c->r[3]+0x000038FFu,c->r[30]); // 802539FC
  c->r[31]=c->r[31]+0xFFFFD6E0u; // 80253A00
  c->r[12]=R32(c->r[31]+0x0000015Cu); // 80253A04
  cmps(c,0,(int32_t)c->r[12],0); // 80253A08
  if (crb(c,2)) { goto L_80253A20; } // 80253A0C
  c->r[3]=R32(c->r[31]+0x00000160u); // 80253A10
  c->ctr=c->r[12]; // 80253A14
  if (true) { c->lr=0x80253A1Cu; dispatch(c,c->ctr); } // 80253A18
  W32(c->r[31]+0x0000015Cu,c->r[30]); // 80253A1C
L_80253A20:;
  W8(c->r[13]+0xFFFF9F08u,c->r[28]); // 80253A20
L_80253A24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80253A24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80253A28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80253A2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80253A30
  c->r[28]=R32(c->r[1]+0x00000010u); // 80253A34
  c->lr=c->r[0]; // 80253A38
  c->r[1]=c->r[1]+0x00000020u; // 80253A3C
  return; // 80253A40
}

// CloseCallbackFromReloadError
void f_80253A50(Ctx* __restrict c) {
  trace_call(0x80253A50u);
  f_80253920(c); return; // 80253A50
}

// ParseConfBuf
void f_80253A60(Ctx* __restrict c) {
  trace_call(0x80253A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253A60
  c->r[0]=c->lr; // 80253A64
  W32(c->r[1]+0x00000064u,c->r[0]); // 80253A68
  c->r[11]=c->r[1]+0x00000060u; // 80253A6C
  c->lr=0x80253A74u; f_800C2E34(c); // 80253A70
  c->r[0]=c->r[4]+0xFFFFFFF4u; // 80253A74
  c->r[27]=0u+0x803C0000u; // 80253A78
  cmpu(c,0,c->r[0],0x00003FF4u); // 80253A7C
  c->r[25]=c->r[3]|c->r[3]; // 80253A80
  c->r[26]=c->r[4]|c->r[4]; // 80253A84
  c->r[27]=c->r[27]+0xFFFFBA60u; // 80253A88
  if (crb(c,1)) { goto L_80253C8C; } // 80253A8C
  c->r[31]=c->r[3]+c->r[4]; // 80253A90
  c->r[0]=0u+0x00000026u; // 80253A94
  W32(c->r[13]+0xFFFF9F14u,c->r[0]); // 80253A98
  c->r[4]=c->r[13]+0xFFFF92B0u; // 80253A9C
  c->r[5]=0u+0x00000004u; // 80253AA0
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80253AA4
  c->lr=0x80253AACu; f_800C6228(c); // 80253AA8
  cmps(c,0,(int32_t)c->r[3],0); // 80253AAC
  if (!crb(c,2)) { goto L_80253C8C; } // 80253AB0
  c->r[3]=c->r[31]|c->r[31]; // 80253AB4
  c->r[4]=c->r[13]+0xFFFF92B8u; // 80253AB8
  c->r[5]=0u+0x00000004u; // 80253ABC
  c->lr=0x80253AC4u; f_800C6228(c); // 80253AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80253AC4
  if (!crb(c,2)) { goto L_80253C8C; } // 80253AC8
  cmpu(c,0,c->r[26],0x00004000u); // 80253ACC
  if (!crb(c,0)) { goto L_80253AFC; } // 80253AD0
  c->r[22]=addc(c,~c->r[26],0x00004000u,1); // 80253AD4
  c->r[3]=c->r[31]|c->r[31]; // 80253AD8
  c->r[5]=c->r[22]|c->r[22]; // 80253ADC
  c->r[4]=0u+0x00000000u; // 80253AE0
  c->lr=0x80253AE8u; f_80004350(c); // 80253AE4
  c->r[31]=c->r[31]+c->r[22]; // 80253AE8
  c->r[4]=c->r[13]+0xFFFF92B8u; // 80253AEC
  c->r[3]=c->r[31]|c->r[31]; // 80253AF0
  c->r[5]=0u+0x00000004u; // 80253AF4
  c->lr=0x80253AFCu; f_80004000(c); // 80253AF8
L_80253AFC:;
  c->r[0]=c->r[25]+0x00000006u; // 80253AFC
  cmpu(c,0,c->r[0],c->r[31]); // 80253B00
  if (!crb(c,1)) { goto L_80253B10; } // 80253B04
  c->r[0]=0u+0x00000000u; // 80253B08
  goto L_80253B20; // 80253B0C
L_80253B10:;
  c->r[3]=R8(c->r[25]+0x00000004u); // 80253B10
  c->r[0]=0u+0x00000001u; // 80253B14
  c->r[30]=R8(c->r[25]+0x00000005u); // 80253B18
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 80253B1C
L_80253B20:;
  cmps(c,0,(int32_t)c->r[0],0); // 80253B20
  if (crb(c,2)) { goto L_80253C8C; } // 80253B24
  c->r[29]=c->r[25]+0x00000006u; // 80253B28
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80253B2C
  c->r[3]=c->r[29]+c->r[0]; // 80253B30
  c->r[23]=0u+0x00000000u; // 80253B34
  c->r[0]=c->r[3]+0x00000002u; // 80253B38
  c->r[24]=c->r[29]|c->r[29]; // 80253B3C
  c->r[28]=c->r[0]-c->r[25]; // 80253B40
  goto L_80253B8C; // 80253B44
L_80253B48:;
  cmpu(c,0,c->r[28],c->r[26]); // 80253B48
  if (crb(c,1)) { goto L_80253C8C; } // 80253B4C
  c->r[0]=c->r[24]-c->r[25]; // 80253B50
  cmpu(c,0,c->r[0],c->r[26]); // 80253B54
  if (crb(c,1)) { goto L_80253C8C; } // 80253B58
  c->r[0]=R16(c->r[24]+0x00000000u); // 80253B5C
  cmpu(c,0,c->r[28],c->r[0]); // 80253B60
  if (!crb(c,2)) { goto L_80253C8C; } // 80253B64
  c->r[3]=c->r[25]+c->r[28]; // 80253B68
  c->r[4]=c->r[1]+0x00000008u; // 80253B6C
  c->lr=0x80253B74u; f_80253CB0(c); // 80253B70
  cmps(c,0,(int32_t)c->r[3],0); // 80253B74
  if (crb(c,2)) { goto L_80253C8C; } // 80253B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 80253B7C
  c->r[24]=c->r[24]+0x00000002u; // 80253B80
  c->r[23]=c->r[23]+0x00000001u; // 80253B84
  c->r[28]=c->r[28]+c->r[0]; // 80253B88
L_80253B8C:;
  cmpu(c,0,c->r[23],c->r[30]); // 80253B8C
  if (crb(c,0)) { IRQCHK(c); goto L_80253B48; } // 80253B90
  cmpu(c,0,c->r[28],c->r[26]); // 80253B94
  if (crb(c,1)) { goto L_80253C8C; } // 80253B98
  c->r[0]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80253B9C
  c->r[0]=R16(c->r[29]+c->r[0]); // 80253BA0
  cmpu(c,0,c->r[28],c->r[0]); // 80253BA4
  if (!crb(c,2)) { goto L_80253C8C; } // 80253BA8
  c->r[3]=c->r[31]+0xFFFFFFB4u; // 80253BAC
  c->r[0]=c->r[25]+c->r[28]; // 80253BB0
  cmpu(c,0,c->r[0],c->r[3]); // 80253BB4
  if (crb(c,1)) { goto L_80253C8C; } // 80253BB8
  c->r[28]=c->r[3]-c->r[0]; // 80253BBC
  c->r[5]=c->r[31]-c->r[3]; // 80253BC0
  c->r[4]=0u+0x00000000u; // 80253BC4
  c->lr=0x80253BCCu; f_80004350(c); // 80253BC8
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80253BCC
  c->r[31]=c->r[31]+0xFFFFFFFEu; // 80253BD0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80253BD4
  c->r[26]=c->r[27]+c->r[0]; // 80253BD8
  goto L_80253C60; // 80253BDC
L_80253BE0:;
  c->r[3]=c->r[22]|c->r[22]; // 80253BE0
  c->lr=0x80253BE8u; f_800C297C(c); // 80253BE4
  c->r[21]=c->r[3]|c->r[3]; // 80253BE8
  c->r[24]=c->r[29]|c->r[29]; // 80253BEC
  c->r[23]=0u+0x00000000u; // 80253BF0
  goto L_80253C54; // 80253BF4
L_80253BF8:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 80253BF8
  c->r[4]=c->r[25]+c->r[0]; // 80253BFC
  c->r[0]=R8(c->r[25]+c->r[0]); // 80253C00
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 80253C04
  c->r[0]=c->r[3]+0x00000001u; // 80253C08
  cmpu(c,0,c->r[21],c->r[0]); // 80253C0C
  if (!crb(c,2)) { goto L_80253C4C; } // 80253C10
  c->r[3]=c->r[22]|c->r[22]; // 80253C14
  c->r[5]=c->r[21]|c->r[21]; // 80253C18
  c->r[4]=c->r[4]+0x00000001u; // 80253C1C
  c->lr=0x80253C24u; f_800C6228(c); // 80253C20
  cmps(c,0,(int32_t)c->r[3],0); // 80253C24
  if (!crb(c,2)) { goto L_80253C4C; } // 80253C28
  c->r[0]=R32(c->r[27]+0x00000004u); // 80253C2C
  c->r[3]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80253C30
  c->r[3]=c->r[29]+c->r[3]; // 80253C34
  c->r[0]=0u-c->r[0]; // 80253C38
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80253C3C
  c->r[3]=c->r[3]-c->r[25]; // 80253C40
  W16(c->r[31]+c->r[0],c->r[3]); // 80253C44
  goto L_80253C5C; // 80253C48
L_80253C4C:;
  c->r[24]=c->r[24]+0x00000002u; // 80253C4C
  c->r[23]=c->r[23]+0x00000001u; // 80253C50
L_80253C54:;
  cmpu(c,0,c->r[23],c->r[30]); // 80253C54
  if (crb(c,0)) { IRQCHK(c); goto L_80253BF8; } // 80253C58
L_80253C5C:;
  c->r[27]=c->r[27]+0x00000008u; // 80253C5C
L_80253C60:;
  cmpu(c,0,c->r[27],c->r[26]); // 80253C60
  if (!crb(c,0)) { goto L_80253C74; } // 80253C64
  c->r[22]=R32(c->r[27]+0x00000000u); // 80253C68
  cmps(c,0,(int32_t)c->r[22],0); // 80253C6C
  if (!crb(c,2)) { IRQCHK(c); goto L_80253BE0; } // 80253C70
L_80253C74:;
  c->r[0]=c->r[31]-c->r[25]; // 80253C74
  W32(c->r[13]+0xFFFF9F18u,c->r[0]); // 80253C78
  c->r[3]=0u+0x00000000u; // 80253C7C
  W32(c->r[13]+0xFFFF9F10u,c->r[30]); // 80253C80
  W32(c->r[13]+0xFFFF9F0Cu,c->r[28]); // 80253C84
  goto L_80253C90; // 80253C88
L_80253C8C:;
  c->r[3]=0u+0x00000002u; // 80253C8C
L_80253C90:;
  c->r[11]=c->r[1]+0x00000060u; // 80253C90
  c->lr=0x80253C98u; f_800C2E80(c); // 80253C94
  c->r[0]=R32(c->r[1]+0x00000064u); // 80253C98
  c->lr=c->r[0]; // 80253C9C
  c->r[1]=c->r[1]+0x00000060u; // 80253CA0
  return; // 80253CA4
}

// UnpackItem
void f_80253CB0(Ctx* __restrict c) {
  trace_call(0x80253CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253CB0
  c->r[0]=c->lr; // 80253CB4
  c->r[5]=0u+0x00000020u; // 80253CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80253CBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80253CC0
  c->r[31]=c->r[4]|c->r[4]; // 80253CC4
  c->r[4]=0u+0x00000000u; // 80253CC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80253CCC
  c->r[30]=c->r[3]|c->r[3]; // 80253CD0
  c->r[3]=c->r[31]|c->r[31]; // 80253CD4
  c->lr=0x80253CDCu; f_80004350(c); // 80253CD8
  c->r[0]=R8(c->r[30]+0x00000000u); // 80253CDC
  c->r[4]=c->r[30]+0x00000001u; // 80253CE0
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 80253CE4
  c->r[6]=rotl(c->r[0],0)&0x000000E0u; // 80253CE8
  c->r[0]=c->r[3]+0x00000001u; // 80253CEC
  W32(c->r[31]+0x00000014u,c->r[4]); // 80253CF0
  c->r[3]=c->r[30]+c->r[0]; // 80253CF4
  cmps(c,0,(int32_t)c->r[6],96); // 80253CF8
  c->r[3]=c->r[3]+0x00000001u; // 80253CFC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80253D00
  W32(c->r[31]+0x00000018u,c->r[3]); // 80253D04
  if (crb(c,2)) { goto L_80253D40; } // 80253D08
  cmps(c,0,(int32_t)c->r[6],224); // 80253D0C
  if (crb(c,2)) { goto L_80253D40; } // 80253D10
  cmps(c,0,(int32_t)c->r[6],128); // 80253D14
  if (crb(c,2)) { goto L_80253D4C; } // 80253D18
  cmps(c,0,(int32_t)c->r[6],160); // 80253D1C
  if (crb(c,2)) { goto L_80253D58; } // 80253D20
  cmps(c,0,(int32_t)c->r[6],192); // 80253D24
  if (crb(c,2)) { goto L_80253D64; } // 80253D28
  cmps(c,0,(int32_t)c->r[6],64); // 80253D2C
  if (crb(c,2)) { goto L_80253D70; } // 80253D30
  cmps(c,0,(int32_t)c->r[6],32); // 80253D34
  if (crb(c,2)) { goto L_80253D94; } // 80253D38
  goto L_80253E08; // 80253D3C
L_80253D40:;
  c->r[0]=0u+0x00000001u; // 80253D40
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253D44
  goto L_80253DBC; // 80253D48
L_80253D4C:;
  c->r[0]=0u+0x00000002u; // 80253D4C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253D50
  goto L_80253DBC; // 80253D54
L_80253D58:;
  c->r[0]=0u+0x00000004u; // 80253D58
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253D5C
  goto L_80253DBC; // 80253D60
L_80253D64:;
  c->r[0]=0u+0x00000008u; // 80253D64
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253D68
  goto L_80253DBC; // 80253D6C
L_80253D70:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80253D70
  c->r[4]=c->r[3]+0x00000001u; // 80253D74
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80253D78
  c->r[0]=c->r[5]+0x00000001u; // 80253D7C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253D80
  c->r[0]=c->r[3]+0x00000001u; // 80253D84
  W32(c->r[31]+0x00000018u,c->r[4]); // 80253D88
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80253D8C
  goto L_80253DBC; // 80253D90
L_80253D94:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80253D94
  c->r[4]=c->r[3]+0x00000002u; // 80253D98
  c->r[5]=R8(c->r[3]+0x00000001u); // 80253D9C
  c->r[5]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 80253DA0
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80253DA4
  c->r[0]=c->r[5]+0x00000001u; // 80253DA8
  W32(c->r[31]+0x00000010u,c->r[0]); // 80253DAC
  c->r[0]=c->r[3]+0x00000002u; // 80253DB0
  W32(c->r[31]+0x00000018u,c->r[4]); // 80253DB4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80253DB8
L_80253DBC:;
  cmpu(c,0,c->r[6],0x00000040u); // 80253DBC
  if (crb(c,2)) { goto L_80253DCC; } // 80253DC0
  cmpu(c,0,c->r[6],0x00000020u); // 80253DC4
  if (!crb(c,2)) { goto L_80253DD8; } // 80253DC8
L_80253DCC:;
  c->r[0]=0u+0x00000040u; // 80253DCC
  W8(c->r[31]+0x00000009u,c->r[0]); // 80253DD0
  goto L_80253DEC; // 80253DD4
L_80253DD8:;
  W8(c->r[31]+0x00000008u,c->r[6]); // 80253DD8
  c->r[3]=c->r[31]|c->r[31]; // 80253DDC
  c->r[4]=R32(c->r[31]+0x00000018u); // 80253DE0
  c->r[5]=R32(c->r[31]+0x00000010u); // 80253DE4
  c->lr=0x80253DECu; f_80004000(c); // 80253DE8
L_80253DEC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80253DEC
  c->r[0]=R32(c->r[31]+0x00000010u); // 80253DF0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80253DF4
  c->r[0]=c->r[3]+c->r[0]; // 80253DF8
  c->r[3]=c->r[0]+c->r[4]; // 80253DFC
  c->r[0]=c->r[3]+0x00000001u; // 80253E00
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80253E04
L_80253E08:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80253E08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80253E0C
  c->r[0]=0u-c->r[3]; // 80253E10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80253E14
  c->r[0]=c->r[0]|c->r[3]; // 80253E18
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80253E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80253E20
  c->lr=c->r[0]; // 80253E24
  c->r[1]=c->r[1]+0x00000010u; // 80253E28
  return; // 80253E2C
}

// DeleteItemByID
void f_80253E30(Ctx* __restrict c) {
  trace_call(0x80253E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253E30
  c->r[0]=c->lr; // 80253E34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80253E38
  c->r[11]=c->r[1]+0x00000030u; // 80253E3C
  c->lr=0x80253E44u; f_800C2E40(c); // 80253E40
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80253E44
  c->r[31]=0u+0x804A0000u; // 80253E48
  c->r[31]=c->r[31]+0xFFFFD880u; // 80253E4C
  cmpu(c,0,c->r[3],c->r[0]); // 80253E50
  if (!crb(c,0)) { goto L_80253FAC; } // 80253E54
  c->r[4]=R32(c->r[13]+0xFFFF9F18u); // 80253E58
  cmps(c,0,(int32_t)c->r[4],0); // 80253E5C
  if (crb(c,2)) { goto L_80253FAC; } // 80253E60
  c->r[0]=0u-c->r[3]; // 80253E64
  c->r[28]=c->r[31]+c->r[4]; // 80253E68
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80253E6C
  c->r[30]=R16(c->r[28]+c->r[0]); // 80253E70
  cmps(c,0,(int32_t)c->r[30],0); // 80253E74
  if (crb(c,2)) { goto L_80253FAC; } // 80253E78
  c->r[0]=R32(c->r[13]+0xFFFF9F10u); // 80253E7C
  cmps(c,0,(int32_t)c->r[0],0); // 80253E80
  if (crb(c,2)) { goto L_80253FAC; } // 80253E84
  c->r[27]=c->r[31]+c->r[30]; // 80253E88
  c->r[25]=c->r[31]+0x00000006u; // 80253E8C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80253E90
  c->r[5]=R16(c->r[31]+c->r[30]); // 80253E94
  c->r[24]=c->r[25]+c->r[0]; // 80253E98
  c->r[3]=R16(c->r[27]+0x00000002u); // 80253E9C
  c->r[4]=c->r[27]|c->r[27]; // 80253EA0
  c->r[0]=c->r[30]+0x00000002u; // 80253EA4
  c->r[6]=c->r[3]-c->r[5]; // 80253EA8
  c->r[26]=R16(c->r[24]+0x00000000u); // 80253EAC
  c->r[3]=c->r[27]|c->r[27]; // 80253EB0
  c->r[5]=c->r[5]-c->r[0]; // 80253EB4
  c->r[29]=c->r[6]+0x00000002u; // 80253EB8
  c->r[4]=c->r[4]+0x00000002u; // 80253EBC
  c->lr=0x80253EC4u; f_800C6104(c); // 80253EC0
  c->r[4]=c->r[24]+0xFFFFFFFEu; // 80253EC4
  c->r[0]=c->r[4]+0x00000002u; // 80253EC8
  c->r[0]=c->r[0]-c->r[25]; // 80253ECC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80253ED0
  c->ctr=c->r[0]; // 80253ED4
  cmpu(c,0,c->r[4],c->r[25]); // 80253ED8
  if (crb(c,0)) { goto L_80253F0C; } // 80253EDC
L_80253EE0:;
  cmpu(c,0,c->r[4],c->r[27]); // 80253EE0
  if (!crb(c,0)) { goto L_80253EF8; } // 80253EE4
  c->r[3]=R16(c->r[4]+0x00000000u); // 80253EE8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80253EEC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80253EF0
  goto L_80253F04; // 80253EF4
L_80253EF8:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80253EF8
  c->r[0]=c->r[0]-c->r[29]; // 80253EFC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80253F00
L_80253F04:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80253F04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253EE0; } // 80253F08
L_80253F0C:;
  c->r[5]=R16(c->r[27]+0x00000000u); // 80253F0C
  c->r[4]=c->r[31]+c->r[29]; // 80253F10
  c->r[0]=c->r[5]+c->r[29]; // 80253F14
  c->r[3]=c->r[31]+c->r[5]; // 80253F18
  c->r[4]=c->r[5]+c->r[4]; // 80253F1C
  c->r[5]=c->r[26]-c->r[0]; // 80253F20
  c->lr=0x80253F28u; f_800C6104(c); // 80253F24
  c->r[0]=c->r[26]-c->r[29]; // 80253F28
  c->r[5]=c->r[29]|c->r[29]; // 80253F2C
  c->r[3]=c->r[31]+c->r[0]; // 80253F30
  c->r[4]=0u+0x00000000u; // 80253F34
  c->lr=0x80253F3Cu; f_80004350(c); // 80253F38
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80253F3C
  c->r[6]=0u+0x00000000u; // 80253F40
  c->r[3]=0u+0x00000000u; // 80253F44
  c->ctr=c->r[0]; // 80253F48
  cmpu(c,0,c->r[0],0x00000000u); // 80253F4C
  if (!crb(c,1)) { goto L_80253F88; } // 80253F50
  c->r[0]=c->r[0]|0x00000000u; // 80253F54
L_80253F58:;
  c->r[0]=0u-c->r[6]; // 80253F58
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80253F5C
  c->r[4]=R16(c->r[28]+c->r[5]); // 80253F60
  cmpu(c,0,c->r[4],c->r[30]); // 80253F64
  if (crb(c,0)) { goto L_80253F80; } // 80253F68
  if (!crb(c,1)) { goto L_80253F7C; } // 80253F6C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80253F70
  W16(c->r[28]+c->r[5],c->r[0]); // 80253F74
  goto L_80253F80; // 80253F78
L_80253F7C:;
  W16(c->r[28]+c->r[5],c->r[3]); // 80253F7C
L_80253F80:;
  c->r[6]=c->r[6]+0x00000001u; // 80253F80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253F58; } // 80253F84
L_80253F88:;
  c->r[4]=R32(c->r[13]+0xFFFF9F0Cu); // 80253F88
  c->r[0]=0u+0x00000001u; // 80253F8C
  c->r[3]=R32(c->r[13]+0xFFFF9F10u); // 80253F90
  c->r[4]=c->r[4]+c->r[29]; // 80253F94
  W32(c->r[13]+0xFFFF9F0Cu,c->r[4]); // 80253F98
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80253F9C
  W32(c->r[13]+0xFFFF9F10u,c->r[3]); // 80253FA0
  W16(c->r[31]+0x00000004u,c->r[3]); // 80253FA4
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80253FA8
L_80253FAC:;
  c->r[11]=c->r[1]+0x00000030u; // 80253FAC
  c->lr=0x80253FB4u; f_800C2E8C(c); // 80253FB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80253FB4
  c->lr=c->r[0]; // 80253FB8
  c->r[1]=c->r[1]+0x00000030u; // 80253FBC
  return; // 80253FC0
}

// CreateItemByID
void f_80253FD0(Ctx* __restrict c) {
  trace_call(0x80253FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253FD0
  c->r[0]=c->lr; // 80253FD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80253FD8
  c->r[11]=c->r[1]+0x00000030u; // 80253FDC
  c->lr=0x80253FE4u; f_800C2E38(c); // 80253FE0
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80253FE4
  c->r[31]=0u+0x804A0000u; // 80253FE8
  c->r[7]=0u+0x803C0000u; // 80253FEC
  c->r[23]=c->r[3]|c->r[3]; // 80253FF0
  cmpu(c,0,c->r[3],c->r[0]); // 80253FF4
  c->r[24]=c->r[4]|c->r[4]; // 80253FF8
  c->r[25]=c->r[5]|c->r[5]; // 80253FFC
  c->r[26]=c->r[6]|c->r[6]; // 80254000
  c->r[31]=c->r[31]+0xFFFFD880u; // 80254004
  c->r[7]=c->r[7]+0xFFFFBA60u; // 80254008
  c->r[29]=0u+0x00000001u; // 8025400C
  if (!crb(c,0)) { goto L_8025422C; } // 80254010
  c->r[0]=0u+0x00000000u; // 80254014
  cmpu(c,0,c->r[5],c->r[0]); // 80254018
  if (crb(c,2)) { goto L_8025422C; } // 8025401C
  c->r[0]=R32(c->r[13]+0xFFFF9F10u); // 80254020
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80254024
  if (!crb(c,0)) { goto L_8025422C; } // 80254028
  c->r[0]=R32(c->r[13]+0xFFFF9F18u); // 8025402C
  cmps(c,0,(int32_t)c->r[0],0); // 80254030
  if (crb(c,2)) { goto L_8025422C; } // 80254034
  cmps(c,0,(int32_t)c->r[4],160); // 80254038
  if (crb(c,2)) { goto L_80254090; } // 8025403C
  if (!crb(c,0)) { goto L_80254068; } // 80254040
  cmps(c,0,(int32_t)c->r[4],96); // 80254044
  if (crb(c,2)) { goto L_80254080; } // 80254048
  if (!crb(c,0)) { goto L_8025405C; } // 8025404C
  cmps(c,0,(int32_t)c->r[4],64); // 80254050
  if (crb(c,2)) { goto L_802540A0; } // 80254054
  goto L_8025422C; // 80254058
L_8025405C:;
  cmps(c,0,(int32_t)c->r[4],128); // 8025405C
  if (crb(c,2)) { goto L_80254088; } // 80254060
  goto L_8025422C; // 80254064
L_80254068:;
  cmps(c,0,(int32_t)c->r[4],224); // 80254068
  if (crb(c,2)) { goto L_80254080; } // 8025406C
  if (!crb(c,0)) { goto L_8025422C; } // 80254070
  cmps(c,0,(int32_t)c->r[4],192); // 80254074
  if (crb(c,2)) { goto L_80254098; } // 80254078
  goto L_8025422C; // 8025407C
L_80254080:;
  c->r[26]=0u+0x00000001u; // 80254080
  goto L_802540CC; // 80254084
L_80254088:;
  c->r[26]=0u+0x00000002u; // 80254088
  goto L_802540CC; // 8025408C
L_80254090:;
  c->r[26]=0u+0x00000004u; // 80254090
  goto L_802540CC; // 80254094
L_80254098:;
  c->r[26]=0u+0x00000008u; // 80254098
  goto L_802540CC; // 8025409C
L_802540A0:;
  cmps(c,0,(int32_t)c->r[6],0); // 802540A0
  if (crb(c,2)) { goto L_8025422C; } // 802540A4
  c->r[0]=0u+0x00010000u; // 802540A8
  cmpu(c,0,c->r[6],c->r[0]); // 802540AC
  if (crb(c,1)) { goto L_8025422C; } // 802540B0
  cmpu(c,0,c->r[6],0x00000100u); // 802540B4
  if (!crb(c,1)) { goto L_802540C8; } // 802540B8
  c->r[24]=0u+0x00000020u; // 802540BC
  c->r[29]=0u+0x00000003u; // 802540C0
  goto L_802540CC; // 802540C4
L_802540C8:;
  c->r[29]=0u+0x00000002u; // 802540C8
L_802540CC:;
  c->r[29]=c->r[29]+c->r[26]; // 802540CC
  c->r[0]=0u+0x00000000u; // 802540D0
  goto L_802540E8; // 802540D4
L_802540D8:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 802540D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 802540DC
  if (crb(c,2)) { goto L_802540F4; } // 802540E0
  c->r[7]=c->r[7]+0x00000008u; // 802540E4
L_802540E8:;
  c->r[28]=R32(c->r[7]+0x00000000u); // 802540E8
  cmpu(c,0,c->r[28],c->r[0]); // 802540EC
  if (!crb(c,2)) { IRQCHK(c); goto L_802540D8; } // 802540F0
L_802540F4:;
  c->r[0]=0u+0x00000000u; // 802540F4
  cmpu(c,0,c->r[28],c->r[0]); // 802540F8
  if (crb(c,2)) { goto L_8025422C; } // 802540FC
  c->r[3]=c->r[28]|c->r[28]; // 80254100
  c->lr=0x80254108u; f_800C297C(c); // 80254104
  cmpu(c,0,c->r[3],0x00000020u); // 80254108
  c->r[30]=c->r[3]|c->r[3]; // 8025410C
  if (crb(c,1)) { goto L_8025422C; } // 80254110
  c->r[29]=c->r[29]+c->r[3]; // 80254114
  c->r[3]=R32(c->r[13]+0xFFFF9F0Cu); // 80254118
  c->r[0]=c->r[29]+0x00000002u; // 8025411C
  cmpu(c,0,c->r[3],c->r[0]); // 80254120
  if (crb(c,0)) { goto L_8025422C; } // 80254124
  c->r[3]=R32(c->r[13]+0xFFFF9F10u); // 80254128
  c->r[22]=c->r[31]+0x00000006u; // 8025412C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80254130
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80254134
  c->r[5]=R16(c->r[22]+c->r[3]); // 80254138
  c->r[4]=c->r[0]+c->r[31]; // 8025413C
  c->r[27]=c->r[22]+c->r[3]; // 80254140
  c->r[3]=c->r[4]+0x00000002u; // 80254144
  c->r[5]=c->r[5]-c->r[0]; // 80254148
  c->lr=0x80254150u; f_800C6104(c); // 8025414C
L_80254150:;
  c->r[3]=R16(c->r[22]+0x00000000u); // 80254150
  c->r[0]=c->r[3]+0x00000002u; // 80254154
  W16(c->r[22]+0x00000000u,c->r[0]); // 80254158
  c->r[22]=c->r[22]+0x00000002u; // 8025415C
  cmpu(c,0,c->r[22],c->r[27]); // 80254160
  if (!crb(c,1)) { IRQCHK(c); goto L_80254150; } // 80254164
  c->r[5]=R16(c->r[27]+0x00000000u); // 80254168
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 8025416C
  c->r[4]=c->r[28]|c->r[28]; // 80254170
  c->r[28]=c->r[31]+c->r[5]; // 80254174
  c->r[0]=c->r[24]|c->r[0]; // 80254178
  W8(c->r[28]+0x00000000u,c->r[0]); // 8025417C
  c->r[5]=c->r[30]|c->r[30]; // 80254180
  c->r[3]=c->r[28]+0x00000001u; // 80254184
  c->lr=0x8025418Cu; f_80004000(c); // 80254188
  cmpu(c,0,c->r[24],0x00000040u); // 8025418C
  c->r[3]=c->r[30]+c->r[28]; // 80254190
  c->r[28]=c->r[3]+0x00000001u; // 80254194
  if (!crb(c,2)) { goto L_802541AC; } // 80254198
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 8025419C
  W8(c->r[28]+0x00000000u,c->r[0]); // 802541A0
  c->r[28]=c->r[28]+0x00000001u; // 802541A4
  goto L_802541C8; // 802541A8
L_802541AC:;
  cmpu(c,0,c->r[24],0x00000020u); // 802541AC
  if (!crb(c,2)) { goto L_802541C8; } // 802541B0
  c->r[3]=c->r[26]+0xFFFFFFFFu; // 802541B4
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 802541B8
  W8(c->r[28]+0x00000000u,c->r[0]); // 802541BC
  W8(c->r[28]+0x00000001u,c->r[3]); // 802541C0
  c->r[28]=c->r[28]+0x00000002u; // 802541C4
L_802541C8:;
  c->r[3]=c->r[28]|c->r[28]; // 802541C8
  c->r[4]=c->r[25]|c->r[25]; // 802541CC
  c->r[5]=c->r[26]|c->r[26]; // 802541D0
  c->lr=0x802541D8u; f_80004000(c); // 802541D4
  c->r[5]=R32(c->r[13]+0xFFFF9F18u); // 802541D8
  c->r[4]=0u-c->r[23]; // 802541DC
  c->r[0]=0u+0x00000001u; // 802541E0
  c->r[3]=R32(c->r[13]+0xFFFF9F10u); // 802541E4
  c->r[6]=c->r[31]+c->r[5]; // 802541E8
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802541EC
  c->r[5]=c->r[27]-c->r[31]; // 802541F0
  W16(c->r[6]+c->r[4],c->r[5]); // 802541F4
  c->r[4]=c->r[3]+0x00000001u; // 802541F8
  c->r[3]=R32(c->r[13]+0xFFFF9F0Cu); // 802541FC
  c->r[6]=R16(c->r[27]+0x00000000u); // 80254200
  c->r[5]=c->r[29]+0x00000002u; // 80254204
  c->r[3]=c->r[3]-c->r[5]; // 80254208
  W32(c->r[13]+0xFFFF9F0Cu,c->r[3]); // 8025420C
  c->r[5]=c->r[6]+c->r[29]; // 80254210
  W16(c->r[27]+0x00000002u,c->r[5]); // 80254214
  c->r[3]=0u+0x00000001u; // 80254218
  W32(c->r[13]+0xFFFF9F10u,c->r[4]); // 8025421C
  W16(c->r[31]+0x00000004u,c->r[4]); // 80254220
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80254224
  goto L_80254230; // 80254228
L_8025422C:;
  c->r[3]=0u+0x00000000u; // 8025422C
L_80254230:;
  c->r[11]=c->r[1]+0x00000030u; // 80254230
  c->lr=0x80254238u; f_800C2E84(c); // 80254234
  c->r[0]=R32(c->r[1]+0x00000034u); // 80254238
  c->lr=c->r[0]; // 8025423C
  c->r[1]=c->r[1]+0x00000030u; // 80254240
  return; // 80254244
}

// SCFindByteArrayItem
void f_80254250(Ctx* __restrict c) {
  trace_call(0x80254250u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254250
  c->r[0]=c->lr; // 80254254
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254258
  c->r[11]=c->r[1]+0x00000040u; // 8025425C
  c->lr=0x80254264u; f_800C2E4C(c); // 80254260
  c->r[27]=c->r[3]|c->r[3]; // 80254264
  c->r[28]=c->r[4]|c->r[4]; // 80254268
  c->r[29]=c->r[5]|c->r[5]; // 8025426C
  c->r[31]=0u+0x00000000u; // 80254270
  c->lr=0x80254278u; f_802494C0(c); // 80254274
  c->r[0]=0u+0x00000000u; // 80254278
  c->r[30]=c->r[3]|c->r[3]; // 8025427C
  cmpu(c,0,c->r[27],c->r[0]); // 80254280
  if (crb(c,2)) { goto L_8025430C; } // 80254284
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80254288
  c->r[5]=0u+0x804A0000u; // 8025428C
  c->r[5]=c->r[5]+0xFFFFD880u; // 80254290
  cmpu(c,0,c->r[29],c->r[0]); // 80254294
  if (!crb(c,0)) { goto L_802542D4; } // 80254298
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 8025429C
  cmps(c,0,(int32_t)c->r[3],0); // 802542A0
  if (crb(c,2)) { goto L_802542D4; } // 802542A4
  c->r[0]=0u-c->r[29]; // 802542A8
  c->r[3]=c->r[5]+c->r[3]; // 802542AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802542B0
  c->r[0]=R16(c->r[3]+c->r[0]); // 802542B4
  cmps(c,0,(int32_t)c->r[0],0); // 802542B8
  if (crb(c,2)) { goto L_802542D4; } // 802542BC
  c->r[0]=R16(c->r[5]+c->r[0]); // 802542C0
  c->r[4]=c->r[1]+0x00000008u; // 802542C4
  c->r[3]=c->r[5]+c->r[0]; // 802542C8
  c->lr=0x802542D0u; f_80253CB0(c); // 802542CC
  goto L_802542D8; // 802542D0
L_802542D4:;
  c->r[3]=0u+0x00000000u; // 802542D4
L_802542D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802542D8
  if (crb(c,2)) { goto L_8025430C; } // 802542DC
  c->r[0]=R8(c->r[1]+0x00000011u); // 802542E0
  cmps(c,0,(int32_t)c->r[0],0); // 802542E4
  if (crb(c,2)) { goto L_8025430C; } // 802542E8
  c->r[0]=R32(c->r[1]+0x00000018u); // 802542EC
  cmpu(c,0,c->r[0],c->r[28]); // 802542F0
  if (!crb(c,2)) { goto L_8025430C; } // 802542F4
  c->r[4]=R32(c->r[1]+0x00000020u); // 802542F8
  c->r[3]=c->r[27]|c->r[27]; // 802542FC
  c->r[5]=c->r[28]|c->r[28]; // 80254300
  c->lr=0x80254308u; f_80004000(c); // 80254304
  c->r[31]=0u+0x00000001u; // 80254308
L_8025430C:;
  c->r[3]=c->r[30]|c->r[30]; // 8025430C
  c->lr=0x80254314u; f_80249500(c); // 80254310
  c->r[11]=c->r[1]+0x00000040u; // 80254314
  c->r[3]=c->r[31]|c->r[31]; // 80254318
  c->lr=0x80254320u; f_800C2E98(c); // 8025431C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80254320
  c->lr=c->r[0]; // 80254324
  c->r[1]=c->r[1]+0x00000040u; // 80254328
  return; // 8025432C
}

// SCReplaceByteArrayItem
void f_80254330(Ctx* __restrict c) {
  trace_call(0x80254330u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254330
  c->r[0]=c->lr; // 80254334
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254338
  c->r[11]=c->r[1]+0x00000040u; // 8025433C
  c->lr=0x80254344u; f_800C2E4C(c); // 80254340
  c->r[27]=c->r[3]|c->r[3]; // 80254344
  c->r[28]=c->r[4]|c->r[4]; // 80254348
  c->r[29]=c->r[5]|c->r[5]; // 8025434C
  c->r[31]=0u+0x00000000u; // 80254350
  c->lr=0x80254358u; f_802494C0(c); // 80254354
  c->r[0]=0u+0x00000000u; // 80254358
  c->r[30]=c->r[3]|c->r[3]; // 8025435C
  cmpu(c,0,c->r[27],c->r[0]); // 80254360
  if (crb(c,2)) { goto L_80254430; } // 80254364
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80254368
  c->r[5]=0u+0x804A0000u; // 8025436C
  c->r[5]=c->r[5]+0xFFFFD880u; // 80254370
  cmpu(c,0,c->r[29],c->r[0]); // 80254374
  if (!crb(c,0)) { goto L_802543B4; } // 80254378
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 8025437C
  cmps(c,0,(int32_t)c->r[3],0); // 80254380
  if (crb(c,2)) { goto L_802543B4; } // 80254384
  c->r[0]=0u-c->r[29]; // 80254388
  c->r[3]=c->r[5]+c->r[3]; // 8025438C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80254390
  c->r[0]=R16(c->r[3]+c->r[0]); // 80254394
  cmps(c,0,(int32_t)c->r[0],0); // 80254398
  if (crb(c,2)) { goto L_802543B4; } // 8025439C
  c->r[0]=R16(c->r[5]+c->r[0]); // 802543A0
  c->r[4]=c->r[1]+0x00000008u; // 802543A4
  c->r[3]=c->r[5]+c->r[0]; // 802543A8
  c->lr=0x802543B0u; f_80253CB0(c); // 802543AC
  goto L_802543B8; // 802543B0
L_802543B4:;
  c->r[3]=0u+0x00000000u; // 802543B4
L_802543B8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802543B8
  if (crb(c,2)) { goto L_80254418; } // 802543BC
  c->r[0]=R8(c->r[1]+0x00000011u); // 802543C0
  cmps(c,0,(int32_t)c->r[0],0); // 802543C4
  if (crb(c,2)) { goto L_80254410; } // 802543C8
  c->r[0]=R32(c->r[1]+0x00000018u); // 802543CC
  cmpu(c,0,c->r[0],c->r[28]); // 802543D0
  if (!crb(c,2)) { goto L_80254410; } // 802543D4
  c->r[3]=R32(c->r[1]+0x00000020u); // 802543D8
  c->r[4]=c->r[27]|c->r[27]; // 802543DC
  c->r[5]=c->r[28]|c->r[28]; // 802543E0
  c->lr=0x802543E8u; f_800C6228(c); // 802543E4
  cmps(c,0,(int32_t)c->r[3],0); // 802543E8
  if (crb(c,2)) { goto L_80254408; } // 802543EC
  c->r[3]=R32(c->r[1]+0x00000020u); // 802543F0
  c->r[4]=c->r[27]|c->r[27]; // 802543F4
  c->r[5]=c->r[28]|c->r[28]; // 802543F8
  c->lr=0x80254400u; f_80004000(c); // 802543FC
  c->r[0]=0u+0x00000001u; // 80254400
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80254404
L_80254408:;
  c->r[31]=0u+0x00000001u; // 80254408
  goto L_80254430; // 8025440C
L_80254410:;
  c->r[3]=c->r[29]|c->r[29]; // 80254410
  c->lr=0x80254418u; f_80253E30(c); // 80254414
L_80254418:;
  c->r[3]=c->r[29]|c->r[29]; // 80254418
  c->r[5]=c->r[27]|c->r[27]; // 8025441C
  c->r[6]=c->r[28]|c->r[28]; // 80254420
  c->r[4]=0u+0x00000040u; // 80254424
  c->lr=0x8025442Cu; f_80253FD0(c); // 80254428
  c->r[31]=c->r[3]|c->r[3]; // 8025442C
L_80254430:;
  c->r[3]=c->r[30]|c->r[30]; // 80254430
  c->lr=0x80254438u; f_80249500(c); // 80254434
  c->r[11]=c->r[1]+0x00000040u; // 80254438
  c->r[3]=c->r[31]|c->r[31]; // 8025443C
  c->lr=0x80254444u; f_800C2E98(c); // 80254440
  c->r[0]=R32(c->r[1]+0x00000044u); // 80254444
  c->lr=c->r[0]; // 80254448
  c->r[1]=c->r[1]+0x00000040u; // 8025444C
  return; // 80254450
}

// SCFindU8Item
void f_80254460(Ctx* __restrict c) {
  trace_call(0x80254460u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254460
  c->r[0]=c->lr; // 80254464
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254468
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8025446C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80254470
  c->r[30]=0u+0x00000000u; // 80254474
  W32(c->r[1]+0x00000034u,c->r[29]); // 80254478
  c->r[29]=c->r[4]|c->r[4]; // 8025447C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80254480
  c->r[28]=c->r[3]|c->r[3]; // 80254484
  c->lr=0x8025448Cu; f_802494C0(c); // 80254488
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 8025448C
  c->r[5]=0u+0x804A0000u; // 80254490
  c->r[31]=c->r[3]|c->r[3]; // 80254494
  cmpu(c,0,c->r[29],c->r[0]); // 80254498
  c->r[5]=c->r[5]+0xFFFFD880u; // 8025449C
  if (!crb(c,0)) { goto L_802544DC; } // 802544A0
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 802544A4
  cmps(c,0,(int32_t)c->r[3],0); // 802544A8
  if (crb(c,2)) { goto L_802544DC; } // 802544AC
  c->r[0]=0u-c->r[29]; // 802544B0
  c->r[3]=c->r[5]+c->r[3]; // 802544B4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802544B8
  c->r[0]=R16(c->r[3]+c->r[0]); // 802544BC
  cmps(c,0,(int32_t)c->r[0],0); // 802544C0
  if (crb(c,2)) { goto L_802544DC; } // 802544C4
  c->r[0]=R16(c->r[5]+c->r[0]); // 802544C8
  c->r[4]=c->r[1]+0x00000008u; // 802544CC
  c->r[3]=c->r[5]+c->r[0]; // 802544D0
  c->lr=0x802544D8u; f_80253CB0(c); // 802544D4
  goto L_802544E0; // 802544D8
L_802544DC:;
  c->r[3]=0u+0x00000000u; // 802544DC
L_802544E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802544E0
  if (crb(c,2)) { goto L_80254508; } // 802544E4
  c->r[0]=R8(c->r[1]+0x00000010u); // 802544E8
  cmpu(c,0,c->r[0],0x00000060u); // 802544EC
  if (!crb(c,2)) { goto L_80254508; } // 802544F0
  c->r[4]=R32(c->r[1]+0x00000020u); // 802544F4
  c->r[3]=c->r[28]|c->r[28]; // 802544F8
  c->r[5]=R32(c->r[1]+0x00000018u); // 802544FC
  c->lr=0x80254504u; f_80004000(c); // 80254500
  c->r[30]=0u+0x00000001u; // 80254504
L_80254508:;
  c->r[3]=c->r[31]|c->r[31]; // 80254508
  c->lr=0x80254510u; f_80249500(c); // 8025450C
  c->r[3]=c->r[30]|c->r[30]; // 80254510
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80254514
  c->r[30]=R32(c->r[1]+0x00000038u); // 80254518
  c->r[29]=R32(c->r[1]+0x00000034u); // 8025451C
  c->r[28]=R32(c->r[1]+0x00000030u); // 80254520
  c->r[0]=R32(c->r[1]+0x00000044u); // 80254524
  c->lr=c->r[0]; // 80254528
  c->r[1]=c->r[1]+0x00000040u; // 8025452C
  return; // 80254530
}

// SCFindS8Item
void f_80254540(Ctx* __restrict c) {
  trace_call(0x80254540u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254540
  c->r[0]=c->lr; // 80254544
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254548
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8025454C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80254550
  c->r[30]=0u+0x00000000u; // 80254554
  W32(c->r[1]+0x00000034u,c->r[29]); // 80254558
  c->r[29]=c->r[4]|c->r[4]; // 8025455C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80254560
  c->r[28]=c->r[3]|c->r[3]; // 80254564
  c->lr=0x8025456Cu; f_802494C0(c); // 80254568
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 8025456C
  c->r[5]=0u+0x804A0000u; // 80254570
  c->r[31]=c->r[3]|c->r[3]; // 80254574
  cmpu(c,0,c->r[29],c->r[0]); // 80254578
  c->r[5]=c->r[5]+0xFFFFD880u; // 8025457C
  if (!crb(c,0)) { goto L_802545BC; } // 80254580
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 80254584
  cmps(c,0,(int32_t)c->r[3],0); // 80254588
  if (crb(c,2)) { goto L_802545BC; } // 8025458C
  c->r[0]=0u-c->r[29]; // 80254590
  c->r[3]=c->r[5]+c->r[3]; // 80254594
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80254598
  c->r[0]=R16(c->r[3]+c->r[0]); // 8025459C
  cmps(c,0,(int32_t)c->r[0],0); // 802545A0
  if (crb(c,2)) { goto L_802545BC; } // 802545A4
  c->r[0]=R16(c->r[5]+c->r[0]); // 802545A8
  c->r[4]=c->r[1]+0x00000008u; // 802545AC
  c->r[3]=c->r[5]+c->r[0]; // 802545B0
  c->lr=0x802545B8u; f_80253CB0(c); // 802545B4
  goto L_802545C0; // 802545B8
L_802545BC:;
  c->r[3]=0u+0x00000000u; // 802545BC
L_802545C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802545C0
  if (crb(c,2)) { goto L_802545E8; } // 802545C4
  c->r[0]=R8(c->r[1]+0x00000010u); // 802545C8
  cmpu(c,0,c->r[0],0x00000060u); // 802545CC
  if (!crb(c,2)) { goto L_802545E8; } // 802545D0
  c->r[4]=R32(c->r[1]+0x00000020u); // 802545D4
  c->r[3]=c->r[28]|c->r[28]; // 802545D8
  c->r[5]=R32(c->r[1]+0x00000018u); // 802545DC
  c->lr=0x802545E4u; f_80004000(c); // 802545E0
  c->r[30]=0u+0x00000001u; // 802545E4
L_802545E8:;
  c->r[3]=c->r[31]|c->r[31]; // 802545E8
  c->lr=0x802545F0u; f_80249500(c); // 802545EC
  c->r[3]=c->r[30]|c->r[30]; // 802545F0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802545F4
  c->r[30]=R32(c->r[1]+0x00000038u); // 802545F8
  c->r[29]=R32(c->r[1]+0x00000034u); // 802545FC
  c->r[28]=R32(c->r[1]+0x00000030u); // 80254600
  c->r[0]=R32(c->r[1]+0x00000044u); // 80254604
  c->lr=c->r[0]; // 80254608
  c->r[1]=c->r[1]+0x00000040u; // 8025460C
  return; // 80254610
}

// SCFindU32Item
void f_80254620(Ctx* __restrict c) {
  trace_call(0x80254620u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254620
  c->r[0]=c->lr; // 80254624
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254628
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8025462C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80254630
  c->r[30]=0u+0x00000000u; // 80254634
  W32(c->r[1]+0x00000034u,c->r[29]); // 80254638
  c->r[29]=c->r[4]|c->r[4]; // 8025463C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80254640
  c->r[28]=c->r[3]|c->r[3]; // 80254644
  c->lr=0x8025464Cu; f_802494C0(c); // 80254648
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 8025464C
  c->r[5]=0u+0x804A0000u; // 80254650
  c->r[31]=c->r[3]|c->r[3]; // 80254654
  cmpu(c,0,c->r[29],c->r[0]); // 80254658
  c->r[5]=c->r[5]+0xFFFFD880u; // 8025465C
  if (!crb(c,0)) { goto L_8025469C; } // 80254660
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 80254664
  cmps(c,0,(int32_t)c->r[3],0); // 80254668
  if (crb(c,2)) { goto L_8025469C; } // 8025466C
  c->r[0]=0u-c->r[29]; // 80254670
  c->r[3]=c->r[5]+c->r[3]; // 80254674
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80254678
  c->r[0]=R16(c->r[3]+c->r[0]); // 8025467C
  cmps(c,0,(int32_t)c->r[0],0); // 80254680
  if (crb(c,2)) { goto L_8025469C; } // 80254684
  c->r[0]=R16(c->r[5]+c->r[0]); // 80254688
  c->r[4]=c->r[1]+0x00000008u; // 8025468C
  c->r[3]=c->r[5]+c->r[0]; // 80254690
  c->lr=0x80254698u; f_80253CB0(c); // 80254694
  goto L_802546A0; // 80254698
L_8025469C:;
  c->r[3]=0u+0x00000000u; // 8025469C
L_802546A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802546A0
  if (crb(c,2)) { goto L_802546C8; } // 802546A4
  c->r[0]=R8(c->r[1]+0x00000010u); // 802546A8
  cmpu(c,0,c->r[0],0x000000A0u); // 802546AC
  if (!crb(c,2)) { goto L_802546C8; } // 802546B0
  c->r[4]=R32(c->r[1]+0x00000020u); // 802546B4
  c->r[3]=c->r[28]|c->r[28]; // 802546B8
  c->r[5]=R32(c->r[1]+0x00000018u); // 802546BC
  c->lr=0x802546C4u; f_80004000(c); // 802546C0
  c->r[30]=0u+0x00000001u; // 802546C4
L_802546C8:;
  c->r[3]=c->r[31]|c->r[31]; // 802546C8
  c->lr=0x802546D0u; f_80249500(c); // 802546CC
  c->r[3]=c->r[30]|c->r[30]; // 802546D0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802546D4
  c->r[30]=R32(c->r[1]+0x00000038u); // 802546D8
  c->r[29]=R32(c->r[1]+0x00000034u); // 802546DC
  c->r[28]=R32(c->r[1]+0x00000030u); // 802546E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802546E4
  c->lr=c->r[0]; // 802546E8
  c->r[1]=c->r[1]+0x00000040u; // 802546EC
  return; // 802546F0
}

// SCReplaceU8Item
void f_80254700(Ctx* __restrict c) {
  trace_call(0x80254700u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254700
  c->r[0]=c->lr; // 80254704
  W32(c->r[1]+0x00000044u,c->r[0]); // 80254708
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8025470C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80254710
  c->r[30]=c->r[4]|c->r[4]; // 80254714
  W8(c->r[1]+0x00000008u,c->r[3]); // 80254718
  c->lr=0x80254720u; f_802494C0(c); // 8025471C
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 80254720
  c->r[5]=0u+0x804A0000u; // 80254724
  c->r[31]=c->r[3]|c->r[3]; // 80254728
  cmpu(c,0,c->r[30],c->r[0]); // 8025472C
  c->r[5]=c->r[5]+0xFFFFD880u; // 80254730
  if (!crb(c,0)) { goto L_80254770; } // 80254734
  c->r[3]=R32(c->r[13]+0xFFFF9F18u); // 80254738
  cmps(c,0,(int32_t)c->r[3],0); // 8025473C
  if (crb(c,2)) { goto L_80254770; } // 80254740
  c->r[0]=0u-c->r[30]; // 80254744
  c->r[3]=c->r[5]+c->r[3]; // 80254748
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025474C
  c->r[0]=R16(c->r[3]+c->r[0]); // 80254750
  cmps(c,0,(int32_t)c->r[0],0); // 80254754
  if (crb(c,2)) { goto L_80254770; } // 80254758
  c->r[0]=R16(c->r[5]+c->r[0]); // 8025475C
  c->r[4]=c->r[1]+0x00000010u; // 80254760
  c->r[3]=c->r[5]+c->r[0]; // 80254764
  c->lr=0x8025476Cu; f_80253CB0(c); // 80254768
  goto L_80254774; // 8025476C
L_80254770:;
  c->r[3]=0u+0x00000000u; // 80254770
L_80254774:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254774
  if (crb(c,2)) { goto L_802547C8; } // 80254778
  c->r[0]=R8(c->r[1]+0x00000018u); // 8025477C
  cmpu(c,0,c->r[0],0x00000060u); // 80254780
  if (!crb(c,2)) { goto L_802547C0; } // 80254784
  c->r[3]=R32(c->r[1]+0x00000028u); // 80254788
  c->r[4]=c->r[1]+0x00000008u; // 8025478C
  c->r[5]=R32(c->r[1]+0x00000020u); // 80254790
  c->lr=0x80254798u; f_800C6228(c); // 80254794
  cmps(c,0,(int32_t)c->r[3],0); // 80254798
  if (crb(c,2)) { goto L_802547B8; } // 8025479C
  c->r[3]=R32(c->r[1]+0x00000028u); // 802547A0
  c->r[4]=c->r[1]+0x00000008u; // 802547A4
  c->r[5]=R32(c->r[1]+0x00000020u); // 802547A8
  c->lr=0x802547B0u; f_80004000(c); // 802547AC
  c->r[0]=0u+0x00000001u; // 802547B0
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 802547B4
L_802547B8:;
  c->r[30]=0u+0x00000001u; // 802547B8
  goto L_802547E0; // 802547BC
L_802547C0:;
  c->r[3]=c->r[30]|c->r[30]; // 802547C0
  c->lr=0x802547C8u; f_80253E30(c); // 802547C4
L_802547C8:;
  c->r[3]=c->r[30]|c->r[30]; // 802547C8
  c->r[5]=c->r[1]+0x00000008u; // 802547CC
  c->r[4]=0u+0x00000060u; // 802547D0
  c->r[6]=0u+0x00000000u; // 802547D4
  c->lr=0x802547DCu; f_80253FD0(c); // 802547D8
  c->r[30]=c->r[3]|c->r[3]; // 802547DC
L_802547E0:;
  c->r[3]=c->r[31]|c->r[31]; // 802547E0
  c->lr=0x802547E8u; f_80249500(c); // 802547E4
  c->r[3]=c->r[30]|c->r[30]; // 802547E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802547EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 802547F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802547F4
  c->lr=c->r[0]; // 802547F8
  c->r[1]=c->r[1]+0x00000040u; // 802547FC
  return; // 80254800
}

// fn_80254810
void f_80254810(Ctx* __restrict c) {
  trace_call(0x80254810u);
  c->r[3]=0u+0x804A0000u; // 80254810
  c->r[3]=c->r[3]+0xFFFFD6E0u; // 80254814
  f_8024DFB0(c); return; // 80254818
}

// SCFlushAsync
void f_80254820(Ctx* __restrict c) {
  trace_call(0x80254820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254820
  c->r[0]=c->lr; // 80254824
  W32(c->r[1]+0x00000024u,c->r[0]); // 80254828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025482C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80254830
  c->r[30]=c->r[3]|c->r[3]; // 80254834
  W32(c->r[1]+0x00000014u,c->r[29]); // 80254838
  c->r[29]=0u+0x804A0000u; // 8025483C
  c->r[29]=c->r[29]+0xFFFFD6E0u; // 80254840
  W32(c->r[1]+0x00000010u,c->r[28]); // 80254844
  c->r[28]=c->r[29]+0x00000000u; // 80254848
  c->lr=0x80254850u; f_802494C0(c); // 8025484C
  c->r[0]=R8(c->r[13]+0xFFFF9F08u); // 80254850
  c->r[31]=c->r[3]|c->r[3]; // 80254854
  cmps(c,0,(int32_t)c->r[0],0); // 80254858
  if (!crb(c,2)) { goto L_802549EC; } // 8025485C
  c->r[0]=0u+0x00000000u; // 80254860
  c->r[3]=0u+0x00000001u; // 80254864
  cmpu(c,0,c->r[30],c->r[0]); // 80254868
  W8(c->r[13]+0xFFFF9F08u,c->r[3]); // 8025486C
  if (!crb(c,2)) { goto L_8025487C; } // 80254870
  c->r[30]=0u+0x80250000u; // 80254874
  c->r[30]=c->r[30]+0x00004810u; // 80254878
L_8025487C:;
  c->r[0]=R8(c->r[13]+0xFFFF9F1Du); // 8025487C
  c->r[4]=0u+0x00000000u; // 80254880
  c->r[3]=0u+0x00004000u; // 80254884
  W32(c->r[28]+0x00000184u,c->r[30]); // 80254888
  cmps(c,0,(int32_t)c->r[0],0); // 8025488C
  W32(c->r[28]+0x00000188u,c->r[4]); // 80254890
  W8(c->r[28]+0x00000159u,c->r[4]); // 80254894
  W32(c->r[28]+0x0000018Cu,c->r[3]); // 80254898
  if (crb(c,2)) { goto L_802548A8; } // 8025489C
  c->r[0]=0u+0x00000001u; // 802548A0
  goto L_802548AC; // 802548A4
L_802548A8:;
  c->r[0]=0u+0x00000000u; // 802548A8
L_802548AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802548AC
  if (!crb(c,2)) { goto L_80254914; } // 802548B0
  c->r[3]=c->r[31]|c->r[31]; // 802548B4
  c->lr=0x802548BCu; f_80249500(c); // 802548B8
  c->r[29]=c->r[29]+0x00000000u; // 802548BC
  c->r[0]=R32(c->r[29]+0x00000188u); // 802548C0
  cmps(c,0,(int32_t)c->r[0],0); // 802548C4
  if (crb(c,2)) { goto L_802548D4; } // 802548C8
  c->r[0]=0u+0x00000001u; // 802548CC
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 802548D0
L_802548D4:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 802548D4
  cmps(c,0,(int32_t)c->r[12],0); // 802548D8
  if (crb(c,2)) { goto L_80254908; } // 802548DC
  c->r[30]=0u+0x00000000u; // 802548E0
  W32(c->r[29]+0x00000184u,c->r[30]); // 802548E4
  c->r[3]=R32(c->r[29]+0x00000188u); // 802548E8
  c->ctr=c->r[12]; // 802548EC
  if (true) { c->lr=0x802548F4u; dispatch(c,c->ctr); } // 802548F0
  c->r[0]=R32(c->r[29]+0x00000000u); // 802548F4
  cmpu(c,0,c->r[0],c->r[30]); // 802548F8
  if (crb(c,2)) { goto L_80254908; } // 802548FC
  c->r[3]=c->r[29]|c->r[29]; // 80254900
  c->lr=0x80254908u; f_8024DFB0(c); // 80254904
L_80254908:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 80254908
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 8025490C
  goto L_80254A1C; // 80254910
L_80254914:;
  c->r[30]=0u+0x00000000u; // 80254914
  W8(c->r[13]+0xFFFF9F1Du,c->r[30]); // 80254918
  c->r[3]=c->r[29]+0x000041A0u; // 8025491C
  c->r[4]=c->r[29]+0x000001A0u; // 80254920
  c->r[5]=0u+0x00004000u; // 80254924
  c->lr=0x8025492Cu; f_80004000(c); // 80254928
  c->r[3]=c->r[31]|c->r[31]; // 8025492C
  c->lr=0x80254934u; f_80249500(c); // 80254930
  c->r[3]=0u+0x80380000u; // 80254934
  c->r[31]=0u+0x80250000u; // 80254938
  W8(c->r[28]+0x00000158u,c->r[30]); // 8025493C
  c->r[3]=c->r[3]+0xFFFFFD88u; // 80254940
  c->r[4]=c->r[28]+0x00000150u; // 80254944
  c->r[5]=c->r[31]+0x00004A40u; // 80254948
  c->r[6]=c->r[28]+0x00000094u; // 8025494C
  c->lr=0x80254954u; f_802418B0(c); // 80254950
  cmps(c,0,(int32_t)c->r[3],0); // 80254954
  if (crb(c,2)) { goto L_80254A1C; } // 80254958
  c->r[5]=c->r[29]+0x00000000u; // 8025495C
  c->r[3]=0u+0x00000002u; // 80254960
  c->r[0]=R8(c->r[5]+0x00000159u); // 80254964
  W32(c->r[5]+0x00000188u,c->r[3]); // 80254968
  cmps(c,0,(int32_t)c->r[0],0); // 8025496C
  if (crb(c,2)) { goto L_80254994; } // 80254970
  c->r[0]=0u+0x00000009u; // 80254974
  W8(c->r[5]+0x00000158u,c->r[0]); // 80254978
  c->r[3]=c->r[5]+0x00000008u; // 8025497C
  c->r[4]=c->r[31]+0x00004A40u; // 80254980
  c->r[5]=c->r[5]+0x00000094u; // 80254984
  c->lr=0x8025498Cu; f_80240B00(c); // 80254988
  cmps(c,0,(int32_t)c->r[3],0); // 8025498C
  if (crb(c,2)) { goto L_80254A1C; } // 80254990
L_80254994:;
  c->r[29]=c->r[29]+0x00000000u; // 80254994
  c->r[0]=R32(c->r[29]+0x00000188u); // 80254998
  cmps(c,0,(int32_t)c->r[0],0); // 8025499C
  if (crb(c,2)) { goto L_802549AC; } // 802549A0
  c->r[0]=0u+0x00000001u; // 802549A4
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 802549A8
L_802549AC:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 802549AC
  cmps(c,0,(int32_t)c->r[12],0); // 802549B0
  if (crb(c,2)) { goto L_802549E0; } // 802549B4
  c->r[31]=0u+0x00000000u; // 802549B8
  W32(c->r[29]+0x00000184u,c->r[31]); // 802549BC
  c->r[3]=R32(c->r[29]+0x00000188u); // 802549C0
  c->ctr=c->r[12]; // 802549C4
  if (true) { c->lr=0x802549CCu; dispatch(c,c->ctr); } // 802549C8
  c->r[0]=R32(c->r[29]+0x00000000u); // 802549CC
  cmpu(c,0,c->r[0],c->r[31]); // 802549D0
  if (crb(c,2)) { goto L_802549E0; } // 802549D4
  c->r[3]=c->r[29]|c->r[29]; // 802549D8
  c->lr=0x802549E0u; f_8024DFB0(c); // 802549DC
L_802549E0:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 802549E0
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 802549E4
  goto L_80254A1C; // 802549E8
L_802549EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 802549EC
  if (crb(c,2)) { goto L_80254A14; } // 802549F0
  cmpu(c,0,c->r[0],0x00000001u); // 802549F4
  if (!crb(c,2)) { goto L_80254A00; } // 802549F8
  goto L_80254A04; // 802549FC
L_80254A00:;
  c->r[0]=0u+0x00000002u; // 80254A00
L_80254A04:;
  c->r[12]=c->r[30]|c->r[30]; // 80254A04
  c->r[3]=c->r[0]|c->r[0]; // 80254A08
  c->ctr=c->r[12]; // 80254A0C
  if (true) { c->lr=0x80254A14u; dispatch(c,c->ctr); } // 80254A10
L_80254A14:;
  c->r[3]=c->r[31]|c->r[31]; // 80254A14
  c->lr=0x80254A1Cu; f_80249500(c); // 80254A18
L_80254A1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80254A1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80254A20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80254A24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80254A28
  c->r[28]=R32(c->r[1]+0x00000010u); // 80254A2C
  c->lr=c->r[0]; // 80254A30
  c->r[1]=c->r[1]+0x00000020u; // 80254A34
  return; // 80254A38
}

// MyNandCallback
void f_80254A40(Ctx* __restrict c) {
  trace_call(0x80254A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254A40
  c->r[0]=c->lr; // 80254A44
  c->r[7]=0u+0x804A0000u; // 80254A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254A4C
  c->r[7]=c->r[7]+0xFFFFD6E0u; // 80254A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80254A54
  W32(c->r[1]+0x00000008u,c->r[30]); // 80254A58
  c->r[0]=R8(c->r[7]+0x00000158u); // 80254A5C
  cmpu(c,0,c->r[0],0x00000009u); // 80254A60
  if (crb(c,1)) { goto L_80254D60; } // 80254A64
  c->r[4]=0u+0x803C0000u; // 80254A68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80254A6C
  c->r[4]=c->r[4]+0xFFFFBB90u; // 80254A70
  c->r[4]=R32(c->r[4]+c->r[0]); // 80254A74
  c->ctr=c->r[4]; // 80254A78
  if (true) { switch (c->ctr) { case 0x80254A80u: goto L_80254A80; case 0x80254AC4u: goto L_80254AC4; case 0x80254B04u: goto L_80254B04; case 0x80254B34u: goto L_80254B34; case 0x80254B7Cu: goto L_80254B7C; case 0x80254BB0u: goto L_80254BB0; case 0x80254BE4u: goto L_80254BE4; case 0x80254C28u: goto L_80254C28; case 0x80254C64u: goto L_80254C64; case 0x80254C6Cu: goto L_80254C6C; default: break; } dispatch(c,c->ctr); return; } // 80254A7C
L_80254A80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254A80
  if (!crb(c,2)) { goto L_80254AD8; } // 80254A84
  c->r[0]=R8(c->r[7]+0x00000150u); // 80254A88
  cmpu(c,0,c->r[0],0x00000001u); // 80254A8C
  if (!crb(c,2)) { goto L_80254AD8; } // 80254A90
  c->r[0]=0u+0x00000001u; // 80254A94
  c->r[3]=0u+0x80380000u; // 80254A98
  c->r[5]=0u+0x80250000u; // 80254A9C
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254AA0
  c->r[3]=c->r[3]+0xFFFFFD88u; // 80254AA4
  c->r[4]=c->r[7]+0x00000150u; // 80254AA8
  c->r[5]=c->r[5]+0x00004A40u; // 80254AAC
  c->r[6]=c->r[7]+0x00000094u; // 80254AB0
  c->lr=0x80254AB8u; f_80240310(c); // 80254AB4
  cmps(c,0,(int32_t)c->r[3],0); // 80254AB8
  if (!crb(c,2)) { goto L_80254CC8; } // 80254ABC
  goto L_80254D60; // 80254AC0
L_80254AC4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254AC4
  if (!crb(c,2)) { goto L_80254AD8; } // 80254AC8
  c->r[0]=R8(c->r[7]+0x00000157u); // 80254ACC
  cmpu(c,0,c->r[0],0x0000003Fu); // 80254AD0
  if (crb(c,2)) { goto L_80254BB0; } // 80254AD4
L_80254AD8:;
  c->r[0]=0u+0x00000002u; // 80254AD8
  c->r[3]=0u+0x80380000u; // 80254ADC
  c->r[4]=0u+0x80250000u; // 80254AE0
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254AE4
  c->r[3]=c->r[3]+0xFFFFFD88u; // 80254AE8
  c->r[5]=c->r[7]+0x00000094u; // 80254AEC
  c->r[4]=c->r[4]+0x00004A40u; // 80254AF0
  c->lr=0x80254AF8u; f_8023F930(c); // 80254AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80254AF8
  if (!crb(c,2)) { goto L_80254CC8; } // 80254AFC
  goto L_80254D60; // 80254B00
L_80254B04:;
  c->r[0]=0u+0x00000003u; // 80254B04
  c->r[3]=0u+0x80380000u; // 80254B08
  c->r[5]=0u+0x80250000u; // 80254B0C
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254B10
  c->r[3]=c->r[3]+0xFFFFFD78u; // 80254B14
  c->r[4]=c->r[7]+0x00000150u; // 80254B18
  c->r[5]=c->r[5]+0x00004A40u; // 80254B1C
  c->r[6]=c->r[7]+0x00000094u; // 80254B20
  c->lr=0x80254B28u; f_802418B0(c); // 80254B24
  cmps(c,0,(int32_t)c->r[3],0); // 80254B28
  if (!crb(c,2)) { goto L_80254CC8; } // 80254B2C
  goto L_80254D60; // 80254B30
L_80254B34:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254B34
  if (!crb(c,2)) { goto L_80254B48; } // 80254B38
  c->r[0]=R8(c->r[7]+0x00000150u); // 80254B3C
  cmpu(c,0,c->r[0],0x00000002u); // 80254B40
  if (crb(c,2)) { goto L_80254B7C; } // 80254B44
L_80254B48:;
  c->r[0]=0u+0x00000004u; // 80254B48
  c->r[3]=0u+0x80380000u; // 80254B4C
  c->r[6]=0u+0x80250000u; // 80254B50
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254B54
  c->r[3]=c->r[3]+0xFFFFFD78u; // 80254B58
  c->r[7]=c->r[7]+0x00000094u; // 80254B5C
  c->r[6]=c->r[6]+0x00004A40u; // 80254B60
  c->r[4]=0u+0x0000003Fu; // 80254B64
  c->r[5]=0u+0x00000000u; // 80254B68
  c->lr=0x80254B70u; f_8023FDD0(c); // 80254B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80254B70
  if (!crb(c,2)) { goto L_80254CC8; } // 80254B74
  goto L_80254D60; // 80254B78
L_80254B7C:;
  c->r[0]=0u+0x00000005u; // 80254B7C
  c->r[3]=0u+0x80380000u; // 80254B80
  c->r[6]=0u+0x80250000u; // 80254B84
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254B88
  c->r[3]=c->r[3]+0xFFFFFD88u; // 80254B8C
  c->r[7]=c->r[7]+0x00000094u; // 80254B90
  c->r[6]=c->r[6]+0x00004A40u; // 80254B94
  c->r[4]=0u+0x0000003Fu; // 80254B98
  c->r[5]=0u+0x00000000u; // 80254B9C
  c->lr=0x80254BA4u; f_8023F680(c); // 80254BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80254BA4
  if (!crb(c,2)) { goto L_80254CC8; } // 80254BA8
  goto L_80254D60; // 80254BAC
L_80254BB0:;
  c->r[0]=0u+0x00000006u; // 80254BB0
  c->r[3]=0u+0x80380000u; // 80254BB4
  c->r[6]=0u+0x80250000u; // 80254BB8
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254BBC
  c->r[4]=c->r[7]+0x00000008u; // 80254BC0
  c->r[3]=c->r[3]+0xFFFFFD88u; // 80254BC4
  c->r[6]=c->r[6]+0x00004A40u; // 80254BC8
  c->r[7]=c->r[7]+0x00000094u; // 80254BCC
  c->r[5]=0u+0x00000002u; // 80254BD0
  c->lr=0x80254BD8u; f_80240990(c); // 80254BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80254BD8
  if (!crb(c,2)) { goto L_80254CC8; } // 80254BDC
  goto L_80254D60; // 80254BE0
L_80254BE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254BE4
  if (!crb(c,2)) { goto L_80254CC8; } // 80254BE8
  c->r[3]=0u+0x00000001u; // 80254BEC
  c->r[0]=0u+0x00000007u; // 80254BF0
  c->r[4]=0u+0x804A0000u; // 80254BF4
  c->r[6]=0u+0x80250000u; // 80254BF8
  W8(c->r[7]+0x00000159u,c->r[3]); // 80254BFC
  c->r[3]=c->r[7]+0x00000008u; // 80254C00
  c->r[5]=R32(c->r[7]+0x0000018Cu); // 80254C04
  c->r[4]=c->r[4]+0x00001880u; // 80254C08
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254C0C
  c->r[6]=c->r[6]+0x00004A40u; // 80254C10
  c->r[7]=c->r[7]+0x00000094u; // 80254C14
  c->lr=0x80254C1Cu; f_8023FB50(c); // 80254C18
  cmps(c,0,(int32_t)c->r[3],0); // 80254C1C
  if (!crb(c,2)) { goto L_80254CC8; } // 80254C20
  goto L_80254D60; // 80254C24
L_80254C28:;
  c->r[0]=R32(c->r[7]+0x0000018Cu); // 80254C28
  cmpu(c,0,c->r[3],c->r[0]); // 80254C2C
  if (!crb(c,2)) { goto L_80254CC8; } // 80254C30
  c->r[3]=0u+0x00000000u; // 80254C34
  c->r[0]=0u+0x00000008u; // 80254C38
  c->r[4]=0u+0x80250000u; // 80254C3C
  W8(c->r[7]+0x00000159u,c->r[3]); // 80254C40
  c->r[3]=c->r[7]+0x00000008u; // 80254C44
  c->r[5]=c->r[7]+0x00000094u; // 80254C48
  W8(c->r[7]+0x00000158u,c->r[0]); // 80254C4C
  c->r[4]=c->r[4]+0x00004A40u; // 80254C50
  c->lr=0x80254C58u; f_80240B00(c); // 80254C54
  cmps(c,0,(int32_t)c->r[3],0); // 80254C58
  if (!crb(c,2)) { goto L_80254CC8; } // 80254C5C
  goto L_80254D60; // 80254C60
L_80254C64:;
  cmps(c,0,(int32_t)c->r[3],0); // 80254C64
  if (!crb(c,2)) { goto L_80254CC8; } // 80254C68
L_80254C6C:;
  c->r[30]=0u+0x804A0000u; // 80254C6C
  c->r[30]=c->r[30]+0xFFFFD6E0u; // 80254C70
  c->r[0]=R32(c->r[30]+0x00000188u); // 80254C74
  cmps(c,0,(int32_t)c->r[0],0); // 80254C78
  if (crb(c,2)) { goto L_80254C88; } // 80254C7C
  c->r[0]=0u+0x00000001u; // 80254C80
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80254C84
L_80254C88:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 80254C88
  cmps(c,0,(int32_t)c->r[12],0); // 80254C8C
  if (crb(c,2)) { goto L_80254CBC; } // 80254C90
  c->r[31]=0u+0x00000000u; // 80254C94
  W32(c->r[30]+0x00000184u,c->r[31]); // 80254C98
  c->r[3]=R32(c->r[30]+0x00000188u); // 80254C9C
  c->ctr=c->r[12]; // 80254CA0
  if (true) { c->lr=0x80254CA8u; dispatch(c,c->ctr); } // 80254CA4
  c->r[0]=R32(c->r[30]+0x00000000u); // 80254CA8
  cmpu(c,0,c->r[0],c->r[31]); // 80254CAC
  if (crb(c,2)) { goto L_80254CBC; } // 80254CB0
  c->r[3]=c->r[30]|c->r[30]; // 80254CB4
  c->lr=0x80254CBCu; f_8024DFB0(c); // 80254CB8
L_80254CBC:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 80254CBC
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 80254CC0
  goto L_80254D60; // 80254CC4
L_80254CC8:;
  c->r[5]=0u+0x804A0000u; // 80254CC8
  c->r[3]=0u+0x00000002u; // 80254CCC
  c->r[5]=c->r[5]+0xFFFFD6E0u; // 80254CD0
  c->r[0]=R8(c->r[5]+0x00000159u); // 80254CD4
  W32(c->r[5]+0x00000188u,c->r[3]); // 80254CD8
  cmps(c,0,(int32_t)c->r[0],0); // 80254CDC
  if (crb(c,2)) { goto L_80254D08; } // 80254CE0
  c->r[0]=0u+0x00000009u; // 80254CE4
  c->r[4]=0u+0x80250000u; // 80254CE8
  W8(c->r[5]+0x00000158u,c->r[0]); // 80254CEC
  c->r[3]=c->r[5]+0x00000008u; // 80254CF0
  c->r[4]=c->r[4]+0x00004A40u; // 80254CF4
  c->r[5]=c->r[5]+0x00000094u; // 80254CF8
  c->lr=0x80254D00u; f_80240B00(c); // 80254CFC
  cmps(c,0,(int32_t)c->r[3],0); // 80254D00
  if (crb(c,2)) { goto L_80254D60; } // 80254D04
L_80254D08:;
  c->r[30]=0u+0x804A0000u; // 80254D08
  c->r[30]=c->r[30]+0xFFFFD6E0u; // 80254D0C
  c->r[0]=R32(c->r[30]+0x00000188u); // 80254D10
  cmps(c,0,(int32_t)c->r[0],0); // 80254D14
  if (crb(c,2)) { goto L_80254D24; } // 80254D18
  c->r[0]=0u+0x00000001u; // 80254D1C
  W8(c->r[13]+0xFFFF9F1Du,c->r[0]); // 80254D20
L_80254D24:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 80254D24
  cmps(c,0,(int32_t)c->r[12],0); // 80254D28
  if (crb(c,2)) { goto L_80254D58; } // 80254D2C
  c->r[31]=0u+0x00000000u; // 80254D30
  W32(c->r[30]+0x00000184u,c->r[31]); // 80254D34
  c->r[3]=R32(c->r[30]+0x00000188u); // 80254D38
  c->ctr=c->r[12]; // 80254D3C
  if (true) { c->lr=0x80254D44u; dispatch(c,c->ctr); } // 80254D40
  c->r[0]=R32(c->r[30]+0x00000000u); // 80254D44
  cmpu(c,0,c->r[0],c->r[31]); // 80254D48
  if (crb(c,2)) { goto L_80254D58; } // 80254D4C
  c->r[3]=c->r[30]|c->r[30]; // 80254D50
  c->lr=0x80254D58u; f_8024DFB0(c); // 80254D54
L_80254D58:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 80254D58
  W8(c->r[13]+0xFFFF9F08u,c->r[0]); // 80254D5C
L_80254D60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254D60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80254D64
  c->r[30]=R32(c->r[1]+0x00000008u); // 80254D68
  c->lr=c->r[0]; // 80254D6C
  c->r[1]=c->r[1]+0x00000010u; // 80254D70
  return; // 80254D74
}

void hle_SCGetAspectRatio(Ctx*);
// SCGetAspectRatio
void f_80254D80(Ctx* __restrict c) {
  hle_SCGetAspectRatio(c);
}

// SCGetDisplayOffsetH
void f_80254DE0(Ctx* __restrict c) {
  trace_call(0x80254DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254DE0
  c->r[0]=c->lr; // 80254DE4
  c->r[4]=0u+0x00000005u; // 80254DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254DEC
  c->r[3]=c->r[1]+0x00000008u; // 80254DF0
  c->lr=0x80254DF8u; f_80254540(c); // 80254DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80254DF8
  if (!crb(c,2)) { goto L_80254E0C; } // 80254DFC
  c->r[0]=0u+0x00000000u; // 80254E00
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254E04
  goto L_80254E38; // 80254E08
L_80254E0C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254E0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80254E10
  cmps(c,0,(int32_t)c->r[0],-32); // 80254E14
  if (!crb(c,0)) { goto L_80254E28; } // 80254E18
  c->r[0]=0u+0xFFFFFFE0u; // 80254E1C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254E20
  goto L_80254E38; // 80254E24
L_80254E28:;
  cmps(c,0,(int32_t)c->r[0],32); // 80254E28
  if (!crb(c,1)) { goto L_80254E38; } // 80254E2C
  c->r[0]=0u+0x00000020u; // 80254E30
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254E34
L_80254E38:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254E38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80254E3C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80254E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254E44
  c->lr=c->r[0]; // 80254E48
  c->r[1]=c->r[1]+0x00000010u; // 80254E4C
  return; // 80254E50
}

// SCGetEuRgb60Mode
void f_80254E60(Ctx* __restrict c) {
  trace_call(0x80254E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254E60
  c->r[0]=c->lr; // 80254E64
  c->r[4]=0u+0x00000006u; // 80254E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254E6C
  c->r[3]=c->r[1]+0x00000008u; // 80254E70
  c->lr=0x80254E78u; f_80254460(c); // 80254E74
  cmps(c,0,(int32_t)c->r[3],0); // 80254E78
  if (!crb(c,2)) { goto L_80254E8C; } // 80254E7C
  c->r[0]=0u+0x00000000u; // 80254E80
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254E84
  goto L_80254EA0; // 80254E88
L_80254E8C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254E8C
  cmpu(c,0,c->r[0],0x00000001u); // 80254E90
  if (crb(c,2)) { goto L_80254EA0; } // 80254E94
  c->r[0]=0u+0x00000000u; // 80254E98
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254E9C
L_80254EA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254EA0
  c->r[3]=R8(c->r[1]+0x00000008u); // 80254EA4
  c->lr=c->r[0]; // 80254EA8
  c->r[1]=c->r[1]+0x00000010u; // 80254EAC
  return; // 80254EB0
}

// SCGetIdleMode
void f_80254EC0(Ctx* __restrict c) {
  trace_call(0x80254EC0u);
  c->r[4]=0u+0x00000002u; // 80254EC0
  c->r[5]=0u+0x00000009u; // 80254EC4
  f_80254250(c); return; // 80254EC8
}

// SCGetLanguage
void f_80254ED0(Ctx* __restrict c) {
  trace_call(0x80254ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254ED0
  c->r[0]=c->lr; // 80254ED4
  c->r[4]=0u+0x0000000Bu; // 80254ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254EDC
  c->r[3]=c->r[1]+0x00000008u; // 80254EE0
  c->lr=0x80254EE8u; f_80254460(c); // 80254EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80254EE8
  if (!crb(c,2)) { goto L_80254F14; } // 80254EEC
  c->lr=0x80254EF4u; f_80255400(c); // 80254EF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80254EF4
  if (!crb(c,2)) { goto L_80254F08; } // 80254EF8
  c->r[0]=0u+0x00000000u; // 80254EFC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254F00
  goto L_80254F28; // 80254F04
L_80254F08:;
  c->r[0]=0u+0x00000001u; // 80254F08
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254F0C
  goto L_80254F28; // 80254F10
L_80254F14:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254F14
  cmpu(c,0,c->r[0],0x00000009u); // 80254F18
  if (!crb(c,1)) { goto L_80254F28; } // 80254F1C
  c->r[0]=0u+0x00000001u; // 80254F20
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254F24
L_80254F28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254F28
  c->r[3]=R8(c->r[1]+0x00000008u); // 80254F2C
  c->lr=c->r[0]; // 80254F30
  c->r[1]=c->r[1]+0x00000010u; // 80254F34
  return; // 80254F38
}

// SCGetProgressiveMode
void f_80254F40(Ctx* __restrict c) {
  trace_call(0x80254F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254F40
  c->r[0]=c->lr; // 80254F44
  c->r[4]=0u+0x0000000Eu; // 80254F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254F4C
  c->r[3]=c->r[1]+0x00000008u; // 80254F50
  c->lr=0x80254F58u; f_80254460(c); // 80254F54
  cmps(c,0,(int32_t)c->r[3],0); // 80254F58
  if (!crb(c,2)) { goto L_80254F6C; } // 80254F5C
  c->r[0]=0u+0x00000000u; // 80254F60
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254F64
  goto L_80254F80; // 80254F68
L_80254F6C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254F6C
  cmpu(c,0,c->r[0],0x00000001u); // 80254F70
  if (crb(c,2)) { goto L_80254F80; } // 80254F74
  c->r[0]=0u+0x00000000u; // 80254F78
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254F7C
L_80254F80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254F80
  c->r[3]=R8(c->r[1]+0x00000008u); // 80254F84
  c->lr=c->r[0]; // 80254F88
  c->r[1]=c->r[1]+0x00000010u; // 80254F8C
  return; // 80254F90
}

// SCGetScreenSaverMode
void f_80254FA0(Ctx* __restrict c) {
  trace_call(0x80254FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254FA0
  c->r[0]=c->lr; // 80254FA4
  c->r[4]=0u+0x0000000Fu; // 80254FA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254FAC
  c->r[3]=c->r[1]+0x00000008u; // 80254FB0
  c->lr=0x80254FB8u; f_80254460(c); // 80254FB4
  cmps(c,0,(int32_t)c->r[3],0); // 80254FB8
  if (!crb(c,2)) { goto L_80254FCC; } // 80254FBC
  c->r[0]=0u+0x00000001u; // 80254FC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254FC4
  goto L_80254FE0; // 80254FC8
L_80254FCC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80254FCC
  cmpu(c,0,c->r[0],0x00000001u); // 80254FD0
  if (crb(c,2)) { goto L_80254FE0; } // 80254FD4
  c->r[0]=0u+0x00000000u; // 80254FD8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80254FDC
L_80254FE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254FE0
  c->r[3]=R8(c->r[1]+0x00000008u); // 80254FE4
  c->lr=c->r[0]; // 80254FE8
  c->r[1]=c->r[1]+0x00000010u; // 80254FEC
  return; // 80254FF0
}

// SCGetSoundMode
void f_80255000(Ctx* __restrict c) {
  trace_call(0x80255000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255000
  c->r[0]=c->lr; // 80255004
  c->r[4]=0u+0x00000011u; // 80255008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025500C
  c->r[3]=c->r[1]+0x00000008u; // 80255010
  c->lr=0x80255018u; f_80254460(c); // 80255014
  cmps(c,0,(int32_t)c->r[3],0); // 80255018
  if (!crb(c,2)) { goto L_8025502C; } // 8025501C
  c->r[0]=0u+0x00000001u; // 80255020
  W8(c->r[1]+0x00000008u,c->r[0]); // 80255024
  goto L_80255040; // 80255028
L_8025502C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8025502C
  cmpu(c,0,c->r[0],0x00000002u); // 80255030
  if (!crb(c,1)) { goto L_80255040; } // 80255034
  c->r[0]=0u+0x00000001u; // 80255038
  W8(c->r[1]+0x00000008u,c->r[0]); // 8025503C
L_80255040:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255040
  c->r[3]=R8(c->r[1]+0x00000008u); // 80255044
  c->lr=c->r[0]; // 80255048
  c->r[1]=c->r[1]+0x00000010u; // 8025504C
  return; // 80255050
}

// SCGetCounterBias
void f_80255060(Ctx* __restrict c) {
  trace_call(0x80255060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255060
  c->r[0]=c->lr; // 80255064
  c->r[4]=0u+0x00000000u; // 80255068
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025506C
  c->r[3]=c->r[1]+0x00000008u; // 80255070
  c->lr=0x80255078u; f_80254620(c); // 80255074
  cmps(c,0,(int32_t)c->r[3],0); // 80255078
  if (!crb(c,2)) { goto L_8025508C; } // 8025507C
  c->r[3]=0u+0x0B4A0000u; // 80255080
  c->r[0]=c->r[3]+0xFFFFD800u; // 80255084
  W32(c->r[1]+0x00000008u,c->r[0]); // 80255088
L_8025508C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025508C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80255090
  c->lr=c->r[0]; // 80255094
  c->r[1]=c->r[1]+0x00000010u; // 80255098
  return; // 8025509C
}

// SCGetBtDeviceInfoArray
void f_802550A0(Ctx* __restrict c) {
  trace_call(0x802550A0u);
  c->r[4]=0u+0x00000461u; // 802550A0
  c->r[5]=0u+0x0000001Cu; // 802550A4
  f_80254250(c); return; // 802550A8
}

// SCSetBtDeviceInfoArray
void f_802550B0(Ctx* __restrict c) {
  trace_call(0x802550B0u);
  c->r[4]=0u+0x00000461u; // 802550B0
  c->r[5]=0u+0x0000001Cu; // 802550B4
  f_80254330(c); return; // 802550B8
}

// SCGetBtCmpDevInfoArray
void f_802550C0(Ctx* __restrict c) {
  trace_call(0x802550C0u);
  c->r[4]=0u+0x00000205u; // 802550C0
  c->r[5]=0u+0x0000001Du; // 802550C4
  f_80254250(c); return; // 802550C8
}

// SCSetBtCmpDevInfoArray
void f_802550D0(Ctx* __restrict c) {
  trace_call(0x802550D0u);
  c->r[4]=0u+0x00000205u; // 802550D0
  c->r[5]=0u+0x0000001Du; // 802550D4
  f_80254330(c); return; // 802550D8
}

// SCGetBtDpdSensibility
void f_802550E0(Ctx* __restrict c) {
  trace_call(0x802550E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802550E0
  c->r[0]=c->lr; // 802550E4
  c->r[4]=0u+0x0000001Eu; // 802550E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802550EC
  c->r[3]=c->r[1]+0x00000008u; // 802550F0
  c->lr=0x802550F8u; f_80254620(c); // 802550F4
  cmps(c,0,(int32_t)c->r[3],0); // 802550F8
  if (!crb(c,2)) { goto L_8025510C; } // 802550FC
  c->r[0]=0u+0x00000002u; // 80255100
  W32(c->r[1]+0x00000008u,c->r[0]); // 80255104
  goto L_80255134; // 80255108
L_8025510C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8025510C
  cmpu(c,0,c->r[0],0x00000001u); // 80255110
  if (!crb(c,0)) { goto L_80255124; } // 80255114
  c->r[0]=0u+0x00000001u; // 80255118
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025511C
  goto L_80255134; // 80255120
L_80255124:;
  cmpu(c,0,c->r[0],0x00000005u); // 80255124
  if (!crb(c,1)) { goto L_80255134; } // 80255128
  c->r[0]=0u+0x00000005u; // 8025512C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80255130
L_80255134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255134
  c->r[3]=R32(c->r[1]+0x00000008u); // 80255138
  c->lr=c->r[0]; // 8025513C
  c->r[1]=c->r[1]+0x00000010u; // 80255140
  return; // 80255144
}

// SCGetWpadMotorMode
void f_80255150(Ctx* __restrict c) {
  trace_call(0x80255150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255150
  c->r[0]=c->lr; // 80255154
  c->r[4]=0u+0x00000020u; // 80255158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025515C
  c->r[3]=c->r[1]+0x00000008u; // 80255160
  c->lr=0x80255168u; f_80254460(c); // 80255164
  cmps(c,0,(int32_t)c->r[3],0); // 80255168
  if (!crb(c,2)) { goto L_8025517C; } // 8025516C
  c->r[0]=0u+0x00000001u; // 80255170
  W8(c->r[1]+0x00000008u,c->r[0]); // 80255174
  goto L_80255190; // 80255178
L_8025517C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8025517C
  cmpu(c,0,c->r[0],0x00000001u); // 80255180
  if (crb(c,2)) { goto L_80255190; } // 80255184
  c->r[0]=0u+0x00000000u; // 80255188
  W8(c->r[1]+0x00000008u,c->r[0]); // 8025518C
L_80255190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255190
  c->r[3]=R8(c->r[1]+0x00000008u); // 80255194
  c->lr=c->r[0]; // 80255198
  c->r[1]=c->r[1]+0x00000010u; // 8025519C
  return; // 802551A0
}

// SCSetWpadMotorMode
void f_802551B0(Ctx* __restrict c) {
  trace_call(0x802551B0u);
  c->r[4]=0u+0x00000020u; // 802551B0
  f_80254700(c); return; // 802551B4
}

// SCGetWpadSensorBarPosition
void f_802551C0(Ctx* __restrict c) {
  trace_call(0x802551C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802551C0
  c->r[0]=c->lr; // 802551C4
  c->r[4]=0u+0x00000021u; // 802551C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802551CC
  c->r[3]=c->r[1]+0x00000008u; // 802551D0
  c->lr=0x802551D8u; f_80254460(c); // 802551D4
  cmps(c,0,(int32_t)c->r[3],0); // 802551D8
  if (!crb(c,2)) { goto L_802551EC; } // 802551DC
  c->r[0]=0u+0x00000000u; // 802551E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 802551E4
  goto L_80255200; // 802551E8
L_802551EC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 802551EC
  cmpu(c,0,c->r[0],0x00000001u); // 802551F0
  if (crb(c,2)) { goto L_80255200; } // 802551F4
  c->r[0]=0u+0x00000000u; // 802551F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 802551FC
L_80255200:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255200
  c->r[3]=R8(c->r[1]+0x00000008u); // 80255204
  c->lr=c->r[0]; // 80255208
  c->r[1]=c->r[1]+0x00000010u; // 8025520C
  return; // 80255210
}

// SCGetWpadSpeakerVolume
void f_80255220(Ctx* __restrict c) {
  trace_call(0x80255220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255220
  c->r[0]=c->lr; // 80255224
  c->r[4]=0u+0x0000001Fu; // 80255228
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025522C
  c->r[3]=c->r[1]+0x00000008u; // 80255230
  c->lr=0x80255238u; f_80254460(c); // 80255234
  cmps(c,0,(int32_t)c->r[3],0); // 80255238
  if (!crb(c,2)) { goto L_8025524C; } // 8025523C
  c->r[0]=0u+0x00000059u; // 80255240
  W8(c->r[1]+0x00000008u,c->r[0]); // 80255244
  goto L_80255260; // 80255248
L_8025524C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8025524C
  cmpu(c,0,c->r[0],0x0000007Fu); // 80255250
  if (!crb(c,1)) { goto L_80255260; } // 80255254
  c->r[0]=0u+0x0000007Fu; // 80255258
  W8(c->r[1]+0x00000008u,c->r[0]); // 8025525C
L_80255260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255260
  c->r[3]=R8(c->r[1]+0x00000008u); // 80255264
  c->lr=c->r[0]; // 80255268
  c->r[1]=c->r[1]+0x00000010u; // 8025526C
  return; // 80255270
}

// SCSetWpadSpeakerVolume
void f_80255280(Ctx* __restrict c) {
  trace_call(0x80255280u);
  c->r[4]=0u+0x0000001Fu; // 80255280
  f_80254700(c); return; // 80255284
}

// __SCF1
void f_80255290(Ctx* __restrict c) {
  trace_call(0x80255290u);
  c->r[6]=0u+0x73B60000u; // 80255290
  c->r[0]=0u+0x00000080u; // 80255294
  c->r[11]=c->r[6]+0xFFFFDBFAu; // 80255298
  c->r[9]=0u+0x00000000u; // 8025529C
  c->r[12]=0u+0x00000000u; // 802552A0
  c->r[6]=0u+0x00000000u; // 802552A4
  c->r[10]=0u+0x00000000u; // 802552A8
  c->ctr=c->r[0]; // 802552AC
L_802552B0:;
  c->r[8]=c->r[10]+0x80000000u; // 802552B0
  c->r[8]=R8(c->r[8]+0x00003800u); // 802552B4
  cmps(c,0,(int32_t)c->r[8],0); // 802552B8
  if (crb(c,2)) { goto L_80255304; } // 802552BC
  c->r[7]=R8(c->r[3]+c->r[12]); // 802552C0
  c->r[0]=c->r[8]^c->r[11]; // 802552C4
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 802552C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 802552CC
  if (!crb(c,2)) { goto L_802552E4; } // 802552D0
  cmpu(c,0,c->r[8],0x0000003Du); // 802552D4
  if (!crb(c,2)) { goto L_802552E4; } // 802552D8
  c->r[9]=0u+0x00000001u; // 802552DC
  goto L_8025537C; // 802552E0
L_802552E4:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 802552E4
  c->r[0]=c->r[12]+0x00000001u; // 802552E8
  c->r[7]=c->r[8]^c->r[7]; // 802552EC
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 802552F0
  c->r[7]=cntlz(c->r[7]); // 802552F4
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 802552F8
  c->r[7]=0u-c->r[7]; // 802552FC
  c->r[12]=c->r[0]&c->r[7]; // 80255300
L_80255304:;
  c->r[10]=c->r[10]+0x00000001u; // 80255304
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80255308
  c->r[8]=c->r[10]+0x80000000u; // 8025530C
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80255310
  c->r[8]=R8(c->r[8]+0x00003800u); // 80255314
  c->r[11]=c->r[7]|c->r[0]; // 80255318
  cmps(c,0,(int32_t)c->r[8],0); // 8025531C
  if (crb(c,2)) { goto L_80255368; } // 80255320
  c->r[7]=R8(c->r[3]+c->r[12]); // 80255324
  c->r[0]=c->r[8]^c->r[11]; // 80255328
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 8025532C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80255330
  if (!crb(c,2)) { goto L_80255348; } // 80255334
  cmpu(c,0,c->r[8],0x0000003Du); // 80255338
  if (!crb(c,2)) { goto L_80255348; } // 8025533C
  c->r[9]=0u+0x00000001u; // 80255340
  goto L_8025537C; // 80255344
L_80255348:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80255348
  c->r[0]=c->r[12]+0x00000001u; // 8025534C
  c->r[7]=c->r[8]^c->r[7]; // 80255350
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 80255354
  c->r[7]=cntlz(c->r[7]); // 80255358
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 8025535C
  c->r[7]=0u-c->r[7]; // 80255360
  c->r[12]=c->r[0]&c->r[7]; // 80255364
L_80255368:;
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80255368
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8025536C
  c->r[11]=c->r[7]|c->r[0]; // 80255370
  c->r[10]=c->r[10]+0x00000001u; // 80255374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802552B0; } // 80255378
L_8025537C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8025537C
  if (crb(c,2)) { goto L_802553F8; } // 80255380
  c->r[10]=c->r[10]+0x00000001u; // 80255384
  goto L_802553E8; // 80255388
  c->r[0]=c->r[0]|0x00000000u; // 8025538C
L_80255390:;
  c->r[3]=c->r[10]+0x80000000u; // 80255390
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80255394
  c->r[3]=R8(c->r[3]+0x00003800u); // 80255398
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 8025539C
  c->r[11]=c->r[7]|c->r[0]; // 802553A0
  cmps(c,0,(int32_t)c->r[3],0); // 802553A4
  if (crb(c,2)) { goto L_802553C8; } // 802553A8
  c->r[0]=c->r[3]^c->r[11]; // 802553AC
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 802553B0
  cmpu(c,0,c->r[3],0x0000000Du); // 802553B4
  if (crb(c,2)) { goto L_802553C4; } // 802553B8
  cmpu(c,0,c->r[3],0x0000000Au); // 802553BC
  if (!crb(c,2)) { goto L_802553C8; } // 802553C0
L_802553C4:;
  c->r[3]=0u+0x00000000u; // 802553C4
L_802553C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802553C8
  W8(c->r[4]+0x00000000u,c->r[3]); // 802553CC
  c->r[6]=c->r[6]+0x00000001u; // 802553D0
  c->r[4]=c->r[4]+0x00000001u; // 802553D4
  if (!crb(c,2)) { goto L_802553E4; } // 802553D8
  c->r[3]=0u+0x00000001u; // 802553DC
  return; // 802553E0
L_802553E4:;
  c->r[10]=c->r[10]+0x00000001u; // 802553E4
L_802553E8:;
  cmpu(c,0,c->r[10],0x00000100u); // 802553E8
  if (!crb(c,0)) { goto L_802553F8; } // 802553EC
  cmpu(c,0,c->r[6],c->r[5]); // 802553F0
  if (crb(c,0)) { IRQCHK(c); goto L_80255390; } // 802553F4
L_802553F8:;
  c->r[3]=0u+0x00000000u; // 802553F8
  return; // 802553FC
}

// SCGetProductArea
void f_80255400(Ctx* __restrict c) {
  trace_call(0x80255400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255400
  c->r[0]=c->lr; // 80255404
  c->r[3]=c->r[13]+0xFFFF92C0u; // 80255408
  c->r[5]=0u+0x00000004u; // 8025540C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255410
  c->r[4]=c->r[1]+0x00000008u; // 80255414
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80255418
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025541C
  c->r[30]=0u+0x803C0000u; // 80255420
  c->r[30]=c->r[30]+0xFFFFBBB8u; // 80255424
  c->lr=0x8025542Cu; f_80255290(c); // 80255428
  cmps(c,0,(int32_t)c->r[3],0); // 8025542C
  if (crb(c,2)) { goto L_80255468; } // 80255430
  goto L_80255458; // 80255434
L_80255438:;
  c->r[3]=c->r[30]+0x00000001u; // 80255438
  c->r[4]=c->r[1]+0x00000008u; // 8025543C
  c->lr=0x80255444u; f_800CA380(c); // 80255440
  cmps(c,0,(int32_t)c->r[3],0); // 80255444
  if (!crb(c,2)) { goto L_80255454; } // 80255448
  c->r[3]=c->r[31]|c->r[31]; // 8025544C
  goto L_8025546C; // 80255450
L_80255454:;
  c->r[30]=c->r[30]+0x00000005u; // 80255454
L_80255458:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 80255458
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8025545C
  cmps(c,0,(int32_t)c->r[0],-1); // 80255460
  if (!crb(c,2)) { IRQCHK(c); goto L_80255438; } // 80255464
L_80255468:;
  c->r[3]=0u+0xFFFFFFFFu; // 80255468
L_8025546C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025546C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80255470
  c->r[30]=R32(c->r[1]+0x00000018u); // 80255474
  c->lr=c->r[0]; // 80255478
  c->r[1]=c->r[1]+0x00000020u; // 8025547C
  return; // 80255480
}

// SCGetProductGameRegion
void f_80255490(Ctx* __restrict c) {
  trace_call(0x80255490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255490
  c->r[0]=c->lr; // 80255494
  c->r[3]=c->r[13]+0xFFFF92C8u; // 80255498
  c->r[5]=0u+0x00000003u; // 8025549C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802554A0
  c->r[4]=c->r[1]+0x00000008u; // 802554A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802554A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802554AC
  c->r[30]=0u+0x803C0000u; // 802554B0
  c->r[30]=c->r[30]+0xFFFFBC00u; // 802554B4
  c->lr=0x802554BCu; f_80255290(c); // 802554B8
  cmps(c,0,(int32_t)c->r[3],0); // 802554BC
  if (crb(c,2)) { goto L_802554F8; } // 802554C0
  goto L_802554E8; // 802554C4
L_802554C8:;
  c->r[3]=c->r[30]+0x00000001u; // 802554C8
  c->r[4]=c->r[1]+0x00000008u; // 802554CC
  c->lr=0x802554D4u; f_800CA380(c); // 802554D0
  cmps(c,0,(int32_t)c->r[3],0); // 802554D4
  if (!crb(c,2)) { goto L_802554E4; } // 802554D8
  c->r[3]=c->r[31]|c->r[31]; // 802554DC
  goto L_802554FC; // 802554E0
L_802554E4:;
  c->r[30]=c->r[30]+0x00000004u; // 802554E4
L_802554E8:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 802554E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 802554EC
  cmps(c,0,(int32_t)c->r[0],-1); // 802554F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802554C8; } // 802554F4
L_802554F8:;
  c->r[3]=0u+0xFFFFFFFFu; // 802554F8
L_802554FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802554FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80255500
  c->r[30]=R32(c->r[1]+0x00000018u); // 80255504
  c->lr=c->r[0]; // 80255508
  c->r[1]=c->r[1]+0x00000020u; // 8025550C
  return; // 80255510
}

// SIBusy
void f_80255520(Ctx* __restrict c) {
  trace_call(0x80255520u);
  c->r[3]=0u+0x803C0000u; // 80255520
  c->r[4]=R32(c->r[3]+0xFFFFBC60u); // 80255524
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 80255528
  c->r[0]=c->r[4]+0x00000001u; // 8025552C
  c->r[0]=c->r[3]|c->r[0]; // 80255530
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80255534
  return; // 80255538
}

// CompleteTransfer
void f_80255540(Ctx* __restrict c) {
  trace_call(0x80255540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255540
  c->r[0]=c->lr; // 80255544
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025554C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80255550
  c->r[30]=0u+0x803C0000u; // 80255554
  W32(c->r[1]+0x00000014u,c->r[29]); // 80255558
  c->r[29]=0u+0xCD000000u; // 8025555C
  c->r[31]=R32(c->r[29]+0x00006438u); // 80255560
  c->r[0]=R32(c->r[29]+0x00006434u); // 80255564
  c->r[0]=c->r[0]|0x80000000u; // 80255568
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8025556C
  W32(c->r[29]+0x00006434u,c->r[0]); // 80255570
  c->r[0]=R32(c->r[30]+0xFFFFBC60u); // 80255574
  cmps(c,0,(int32_t)c->r[0],-1); // 80255578
  if (crb(c,2)) { goto L_80255814; } // 8025557C
  c->lr=0x80255584u; f_8024EB00(c); // 80255580
  c->r[7]=R32(c->r[30]+0xFFFFBC60u); // 80255584
  c->r[6]=0u+0x804A0000u; // 80255588
  c->r[5]=c->r[30]+0xFFFFBC60u; // 8025558C
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80255590
  c->r[6]=c->r[6]+0x00005900u; // 80255594
  c->r[0]=R32(c->r[5]+0x00000008u); // 80255598
  c->r[6]=c->r[6]+c->r[7]; // 8025559C
  W32(c->r[6]+0x00000004u,c->r[4]); // 802555A0
  c->r[7]=0u+0x00000000u; // 802555A4
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[8]); // 802555A8
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 802555AC
  W32(c->r[6]+0x00000000u,c->r[3]); // 802555B0
  if (crb(c,2)) { goto L_80255664; } // 802555B4
  cmpu(c,0,c->r[8],0x00000008u); // 802555B8
  c->r[3]=c->r[8]+0xFFFFFFF8u; // 802555BC
  if (!crb(c,1)) { goto L_8025562C; } // 802555C0
  c->r[0]=c->r[3]+0x00000007u; // 802555C4
  c->r[4]=c->r[29]+0x00006400u; // 802555C8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802555CC
  c->ctr=c->r[0]; // 802555D0
  cmpu(c,0,c->r[3],0x00000000u); // 802555D4
  if (!crb(c,1)) { goto L_8025562C; } // 802555D8
L_802555DC:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 802555DC
  c->r[7]=c->r[7]+0x00000008u; // 802555E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 802555E4
  c->r[0]=R32(c->r[4]+0x00000084u); // 802555E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 802555EC
  c->r[0]=R32(c->r[4]+0x00000088u); // 802555F0
  W32(c->r[5]+0x00000008u,c->r[0]); // 802555F4
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 802555F8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 802555FC
  c->r[0]=R32(c->r[4]+0x00000090u); // 80255600
  W32(c->r[5]+0x00000010u,c->r[0]); // 80255604
  c->r[0]=R32(c->r[4]+0x00000094u); // 80255608
  W32(c->r[5]+0x00000014u,c->r[0]); // 8025560C
  c->r[0]=R32(c->r[4]+0x00000098u); // 80255610
  W32(c->r[5]+0x00000018u,c->r[0]); // 80255614
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 80255618
  c->r[4]=c->r[4]+0x00000020u; // 8025561C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80255620
  c->r[5]=c->r[5]+0x00000020u; // 80255624
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802555DC; } // 80255628
L_8025562C:;
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8025562C
  c->r[0]=0u+0xCD000000u; // 80255630
  c->r[3]=c->r[0]+c->r[3]; // 80255634
  c->r[0]=c->r[8]-c->r[7]; // 80255638
  c->r[3]=c->r[3]+0x00006400u; // 8025563C
  c->ctr=c->r[0]; // 80255640
  cmpu(c,0,c->r[7],c->r[8]); // 80255644
  if (!crb(c,0)) { goto L_80255664; } // 80255648
L_8025564C:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 8025564C
  c->r[7]=c->r[7]+0x00000001u; // 80255650
  W32(c->r[5]+0x00000000u,c->r[0]); // 80255654
  c->r[5]=c->r[5]+0x00000004u; // 80255658
  c->r[3]=c->r[3]+0x00000004u; // 8025565C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025564C; } // 80255660
L_80255664:;
  c->r[3]=0u+0x803C0000u; // 80255664
  c->r[3]=c->r[3]+0xFFFFBC60u; // 80255668
  c->r[0]=R32(c->r[3]+0x00000008u); // 8025566C
  c->r[3]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[3]); // 80255670
  if (crb(c,2)) { goto L_80255780; } // 80255674
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80255678
  c->r[4]=0u+0xCD000000u; // 8025567C
  c->r[6]=c->r[4]+c->r[0]; // 80255680
  c->r[0]=R32(c->r[6]+0x00006480u); // 80255684
  c->r[4]=0u+0x00000000u; // 80255688
  if (crb(c,2)) { goto L_80255780; } // 8025568C
  cmpu(c,0,c->r[3],0x00000008u); // 80255690
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 80255694
  if (!crb(c,1)) { goto L_80255754; } // 80255698
  c->r[6]=c->r[7]+0x00000007u; // 8025569C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 802556A0
  c->ctr=c->r[6]; // 802556A4
  cmpu(c,0,c->r[7],0x00000000u); // 802556A8
  if (!crb(c,1)) { goto L_80255754; } // 802556AC
L_802556B0:;
  c->r[6]=addc(c,~c->r[4],0x00000003u,1); // 802556B0
  c->r[7]=c->r[4]+0x00000001u; // 802556B4
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802556B8
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 802556BC
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 802556C0
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 802556C4
  W8(c->r[5]+0x00000000u,c->r[9]); // 802556C8
  c->r[7]=c->r[4]+0x00000002u; // 802556CC
  c->r[6]=0u-c->r[4]; // 802556D0
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 802556D4
  W8(c->r[5]+0x00000001u,c->r[9]); // 802556D8
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802556DC
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 802556E0
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 802556E4
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 802556E8
  W8(c->r[5]+0x00000002u,c->r[9]); // 802556EC
  c->r[6]=c->r[4]+0x00000004u; // 802556F0
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 802556F4
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 802556F8
  W8(c->r[5]+0x00000003u,c->r[8]); // 802556FC
  c->r[6]=c->r[4]+0x00000005u; // 80255700
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80255704
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80255708
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 8025570C
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80255710
  W8(c->r[5]+0x00000004u,c->r[9]); // 80255714
  c->r[6]=c->r[4]+0x00000006u; // 80255718
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 8025571C
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 80255720
  c->r[6]=c->r[4]+0x00000007u; // 80255724
  W8(c->r[5]+0x00000005u,c->r[8]); // 80255728
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8025572C
  c->r[4]=c->r[4]+0x00000008u; // 80255730
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 80255734
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80255738
  W8(c->r[5]+0x00000006u,c->r[7]); // 8025573C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80255740
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 80255744
  W8(c->r[5]+0x00000007u,c->r[6]); // 80255748
  c->r[5]=c->r[5]+0x00000008u; // 8025574C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802556B0; } // 80255750
L_80255754:;
  c->r[6]=c->r[3]-c->r[4]; // 80255754
  c->ctr=c->r[6]; // 80255758
  cmpu(c,0,c->r[4],c->r[3]); // 8025575C
  if (!crb(c,0)) { goto L_80255780; } // 80255760
L_80255764:;
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 80255764
  c->r[4]=c->r[4]+0x00000001u; // 80255768
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8025576C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80255770
  W8(c->r[5]+0x00000000u,c->r[3]); // 80255774
  c->r[5]=c->r[5]+0x00000001u; // 80255778
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255764; } // 8025577C
L_80255780:;
  c->r[3]=0u+0xCD000000u; // 80255780
  c->r[0]=R32(c->r[3]+0x00006434u); // 80255784
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 80255788
  if (crb(c,2)) { goto L_802557E0; } // 8025578C
  c->r[3]=0u+0x803C0000u; // 80255790
  c->r[4]=R32(c->r[3]+0xFFFFBC60u); // 80255794
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 80255798
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8025579C
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 802557A0
  c->r[31]=rotl(c->r[31],0)&0x0000000Fu; // 802557A4
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 802557A8
  if (crb(c,2)) { goto L_802557D0; } // 802557AC
  c->r[3]=0u+0x803C0000u; // 802557B0
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802557B4
  c->r[3]=c->r[3]+0xFFFFBC78u; // 802557B8
  c->r[0]=R32(c->r[3]+c->r[4]); // 802557BC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802557C0
  if (!crb(c,2)) { goto L_802557D0; } // 802557C4
  c->r[0]=0u+0x00000008u; // 802557C8
  W32(c->r[3]+c->r[4],c->r[0]); // 802557CC
L_802557D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802557D0
  if (!crb(c,2)) { goto L_80255808; } // 802557D4
  c->r[31]=0u+0x00000004u; // 802557D8
  goto L_80255808; // 802557DC
L_802557E0:;
  c->lr=0x802557E4u; f_8024EB00(c); // 802557E0
  c->r[6]=0u+0x803C0000u; // 802557E4
  c->r[5]=0u+0x804A0000u; // 802557E8
  c->r[0]=R32(c->r[6]+0xFFFFBC60u); // 802557EC
  c->r[5]=c->r[5]+0x00005920u; // 802557F0
  c->r[31]=0u+0x00000000u; // 802557F4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802557F8
  c->r[5]=c->r[5]+c->r[0]; // 802557FC
  W32(c->r[5]+0x00000004u,c->r[4]); // 80255800
  W32(c->r[5]+0x00000000u,c->r[3]); // 80255804
L_80255808:;
  c->r[3]=0u+0x803C0000u; // 80255808
  c->r[0]=0u+0xFFFFFFFFu; // 8025580C
  W32(c->r[3]+0xFFFFBC60u,c->r[0]); // 80255810
L_80255814:;
  c->r[3]=c->r[31]|c->r[31]; // 80255814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80255818
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025581C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80255820
  c->r[0]=R32(c->r[1]+0x00000024u); // 80255824
  c->lr=c->r[0]; // 80255828
  c->r[1]=c->r[1]+0x00000020u; // 8025582C
  return; // 80255830
}

// SIInterruptHandler
void f_80255840(Ctx* __restrict c) {
  trace_call(0x80255840u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255840
  c->r[0]=c->lr; // 80255844
  W32(c->r[1]+0x00000054u,c->r[0]); // 80255848
  c->r[11]=c->r[1]+0x00000050u; // 8025584C
  c->lr=0x80255854u; f_800C2E24(c); // 80255850
  c->r[5]=0u+0xCD000000u; // 80255854
  c->r[27]=0u+0x804A0000u; // 80255858
  c->r[21]=R32(c->r[5]+0x00006434u); // 8025585C
  c->r[30]=c->r[3]|c->r[3]; // 80255860
  c->r[31]=c->r[4]|c->r[4]; // 80255864
  c->r[27]=c->r[27]+0x00005880u; // 80255868
  c->r[3]=rotl(c->r[21],0)&0xC0000000u; // 8025586C
  c->r[0]=c->r[3]+0x40000000u; // 80255870
  cmpu(c,0,c->r[0],0x00000000u); // 80255874
  if (!crb(c,2)) { goto L_80255A1C; } // 80255878
  c->r[17]=0u+0x803C0000u; // 8025587C
  c->r[22]=R32(c->r[17]+0xFFFFBC60u); // 80255880
  c->lr=0x80255888u; f_80255540(c); // 80255884
  c->r[4]=c->r[17]+0xFFFFBC60u; // 80255888
  c->r[0]=0u+0x00000000u; // 8025588C
  c->r[24]=R32(c->r[4]+0x00000010u); // 80255890
  c->r[23]=c->r[3]|c->r[3]; // 80255894
  c->r[28]=c->r[22]|c->r[22]; // 80255898
  c->r[17]=c->r[27]+0x00000000u; // 8025589C
  W32(c->r[4]+0x00000010u,c->r[0]); // 802558A0
  c->r[26]=0u+0x00000000u; // 802558A4
L_802558A8:;
  c->r[28]=c->r[28]+0x00000001u; // 802558A8
  c->r[0]=rotl(c->r[28],30)&0xC0000000u; // 802558AC
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 802558B0
  c->r[0]=c->r[0]-c->r[3]; // 802558B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 802558B8
  c->r[28]=c->r[0]+c->r[3]; // 802558BC
  c->r[0]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802558C0
  c->r[29]=c->r[17]+c->r[0]; // 802558C4
  c->r[0]=R32(c->r[17]+c->r[0]); // 802558C8
  cmps(c,0,(int32_t)c->r[0],-1); // 802558CC
  if (crb(c,2)) { goto L_8025593C; } // 802558D0
  c->lr=0x802558D8u; f_8024EB00(c); // 802558D4
  c->r[5]=R32(c->r[29]+0x00000018u); // 802558D8
  c->r[0]=c->r[3]^0x80000000u; // 802558DC
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 802558E0
  c->r[5]=c->r[5]^0x80000000u; // 802558E4
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 802558E8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 802558EC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802558F0
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 802558F4
  if (!crb(c,2)) { goto L_8025593C; } // 802558F8
  c->r[3]=R32(c->r[29]+0x00000000u); // 802558FC
  c->r[4]=R32(c->r[29]+0x00000004u); // 80255900
  c->r[5]=R32(c->r[29]+0x00000008u); // 80255904
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 80255908
  c->r[7]=R32(c->r[29]+0x00000010u); // 8025590C
  c->r[8]=R32(c->r[29]+0x00000014u); // 80255910
  c->lr=0x80255918u; f_80255E60(c); // 80255914
  cmps(c,0,(int32_t)c->r[3],0); // 80255918
  if (crb(c,2)) { goto L_80255948; } // 8025591C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 80255920
  c->r[0]=c->r[27]+0x000000C0u; // 80255924
  c->r[3]=c->r[0]+c->r[3]; // 80255928
  c->lr=0x80255930u; f_80244010(c); // 8025592C
  c->r[0]=0u+0xFFFFFFFFu; // 80255930
  W32(c->r[29]+0x00000000u,c->r[0]); // 80255934
  goto L_80255948; // 80255938
L_8025593C:;
  c->r[26]=c->r[26]+0x00000001u; // 8025593C
  cmps(c,0,(int32_t)c->r[26],4); // 80255940
  if (crb(c,0)) { IRQCHK(c); goto L_802558A8; } // 80255944
L_80255948:;
  cmps(c,0,(int32_t)c->r[24],0); // 80255948
  if (crb(c,2)) { goto L_80255968; } // 8025594C
  c->r[12]=c->r[24]|c->r[24]; // 80255950
  c->r[3]=c->r[22]|c->r[22]; // 80255954
  c->r[4]=c->r[23]|c->r[23]; // 80255958
  c->r[5]=c->r[31]|c->r[31]; // 8025595C
  c->ctr=c->r[12]; // 80255960
  if (true) { c->lr=0x80255968u; dispatch(c,c->ctr); } // 80255964
L_80255968:;
  c->r[5]=0u+0xCD000000u; // 80255968
  c->r[3]=0u+0x803C0000u; // 8025596C
  c->r[0]=rotl(c->r[22],3)&0xFFFFFFF8u; // 80255970
  c->r[4]=0u+0x0F000000u; // 80255974
  c->r[4]=sraw(c,c->r[4],(c->r[0])&63); // 80255978
  c->r[6]=R32(c->r[5]+0x00006438u); // 8025597C
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80255980
  c->r[3]=c->r[3]+0xFFFFBC78u; // 80255984
  c->r[6]=c->r[6]&c->r[4]; // 80255988
  W32(c->r[5]+0x00006438u,c->r[6]); // 8025598C
  c->r[6]=c->r[3]+c->r[0]; // 80255990
  c->r[0]=R32(c->r[3]+c->r[0]); // 80255994
  cmpu(c,0,c->r[0],0x00000080u); // 80255998
  if (!crb(c,2)) { goto L_80255A1C; } // 8025599C
  c->r[0]=rotl(c->r[22],5)&0xFFFFFFE0u; // 802559A0
  c->r[3]=c->r[27]+0x00000000u; // 802559A4
  c->r[0]=R32(c->r[3]+c->r[0]); // 802559A8
  c->r[4]=0u+0x00000000u; // 802559AC
  cmps(c,0,(int32_t)c->r[0],-1); // 802559B0
  if (!crb(c,2)) { goto L_802559C8; } // 802559B4
  c->r[3]=0u+0x803C0000u; // 802559B8
  c->r[0]=R32(c->r[3]+0xFFFFBC60u); // 802559BC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 802559C0
  if (!crb(c,2)) { goto L_802559CC; } // 802559C4
L_802559C8:;
  c->r[4]=0u+0x00000001u; // 802559C8
L_802559CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802559CC
  if (!crb(c,2)) { goto L_80255A1C; } // 802559D0
  c->r[4]=0u+0x80000000u; // 802559D4
  c->r[8]=0u+0x80250000u; // 802559D8
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802559DC
  c->r[3]=0u+0x431C0000u; // 802559E0
  c->r[4]=c->r[3]+0xFFFFDE83u; // 802559E4
  c->r[8]=c->r[8]+0x000064D0u; // 802559E8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802559EC
  c->r[3]=c->r[22]|c->r[22]; // 802559F0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802559F4
  c->r[4]=c->r[13]+0xFFFF9F20u; // 802559F8
  c->r[5]=0u+0x00000001u; // 802559FC
  c->r[7]=0u+0x00000003u; // 80255A00
  c->r[9]=0u+0x00000000u; // 80255A04
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 80255A08
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 80255A0C
  c->r[0]=c->r[0]+c->r[10]; // 80255A10
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80255A14
  c->lr=0x80255A1Cu; f_80256360(c); // 80255A18
L_80255A1C:;
  c->r[3]=rotl(c->r[21],0)&0x18000000u; // 80255A1C
  c->r[0]=c->r[3]+0xE8000000u; // 80255A20
  cmpu(c,0,c->r[0],0x00000000u); // 80255A24
  if (!crb(c,2)) { goto L_80255C14; } // 80255A28
  c->lr=0x80255A30u; f_8025E160(c); // 80255A2C
  c->r[4]=0u+0x803C0000u; // 80255A30
  c->r[25]=0u+0x803C0000u; // 80255A34
  c->r[4]=c->r[4]+0xFFFFBC60u; // 80255A38
  c->r[28]=0u+0xCD000000u; // 80255A3C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80255A40
  c->r[19]=c->r[3]+0x00000001u; // 80255A44
  c->r[25]=c->r[25]+0xFFFFBC78u; // 80255A48
  c->r[24]=c->r[28]+0x00006400u; // 80255A4C
  c->r[18]=rotl(c->r[0],16)&0x000003FFu; // 80255A50
  c->r[23]=c->r[27]+0x00000180u; // 80255A54
  c->r[22]=c->r[27]+0x000001A0u; // 80255A58
  c->r[21]=c->r[27]+0x000001B0u; // 80255A5C
  c->r[20]=0u+0x00000000u; // 80255A60
  c->r[29]=0u+0x00000008u; // 80255A64
  c->r[17]=0u+0x00000001u; // 80255A68
L_80255A6C:;
  c->lr=0x80255A70u; f_802494C0(c); // 80255A6C
  c->r[0]=addc(c,~c->r[20],0x00000003u,1); // 80255A70
  c->r[26]=R32(c->r[28]+0x00006438u); // 80255A74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80255A78
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[26]>>((c->r[0])&31)); // 80255A7C
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 80255A80
  if (crb(c,2)) { goto L_80255A98; } // 80255A84
  c->r[0]=R32(c->r[25]+0x00000000u); // 80255A88
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80255A8C
  if (!crb(c,2)) { goto L_80255A98; } // 80255A90
  W32(c->r[25]+0x00000000u,c->r[29]); // 80255A94
L_80255A98:;
  c->lr=0x80255A9Cu; f_80249500(c); // 80255A98
  c->r[0]=rotl(c->r[26],0)&0x00000020u; cr0(c,c->r[0]); // 80255A9C
  if (crb(c,2)) { goto L_80255AC0; } // 80255AA0
  c->r[0]=R32(c->r[24]+0x00000004u); // 80255AA4
  c->r[3]=0u+0x00000001u; // 80255AA8
  W32(c->r[23]+0x00000000u,c->r[0]); // 80255AAC
  c->r[0]=R32(c->r[24]+0x00000008u); // 80255AB0
  W32(c->r[23]+0x00000004u,c->r[0]); // 80255AB4
  W32(c->r[22]+0x00000000u,c->r[17]); // 80255AB8
  goto L_80255AC4; // 80255ABC
L_80255AC0:;
  c->r[3]=0u+0x00000000u; // 80255AC0
L_80255AC4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80255AC4
  if (crb(c,2)) { goto L_80255AD0; } // 80255AC8
  W32(c->r[21]+0x00000000u,c->r[19]); // 80255ACC
L_80255AD0:;
  c->r[20]=c->r[20]+0x00000001u; // 80255AD0
  c->r[24]=c->r[24]+0x0000000Cu; // 80255AD4
  cmps(c,0,(int32_t)c->r[20],4); // 80255AD8
  c->r[23]=c->r[23]+0x00000008u; // 80255ADC
  c->r[22]=c->r[22]+0x00000004u; // 80255AE0
  c->r[21]=c->r[21]+0x00000004u; // 80255AE4
  c->r[25]=c->r[25]+0x00000004u; // 80255AE8
  if (crb(c,0)) { IRQCHK(c); goto L_80255A6C; } // 80255AEC
  c->r[4]=0u+0x803C0000u; // 80255AF0
  c->r[3]=0u+0x80000000u; // 80255AF4
  c->r[4]=c->r[4]+0xFFFFBC60u; // 80255AF8
  c->r[0]=0u+0x00000018u; // 80255AFC
  c->r[5]=R32(c->r[4]+0x00000004u); // 80255B00
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80255B04
  c->r[4]=c->r[27]+0x000001B0u; // 80255B08
  c->r[6]=rotl(c->r[18],31)&0x7FFFFFFFu; // 80255B0C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80255B10
  if (crb(c,2)) { goto L_80255B38; } // 80255B14
  c->r[0]=R32(c->r[4]+0x00000000u); // 80255B18
  cmps(c,0,(int32_t)c->r[0],0); // 80255B1C
  if (crb(c,2)) { goto L_80255C14; } // 80255B20
  c->r[0]=R32(c->r[4]+0x00000000u); // 80255B24
  c->r[0]=c->r[6]+c->r[0]; // 80255B28
  cmpu(c,0,c->r[0],c->r[19]); // 80255B2C
  if (!crb(c,0)) { goto L_80255B38; } // 80255B30
  goto L_80255C14; // 80255B34
L_80255B38:;
  c->r[0]=0u+0x00000019u; // 80255B38
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80255B3C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80255B40
  if (crb(c,2)) { goto L_80255B68; } // 80255B44
  c->r[0]=R32(c->r[4]+0x00000004u); // 80255B48
  cmps(c,0,(int32_t)c->r[0],0); // 80255B4C
  if (crb(c,2)) { goto L_80255C14; } // 80255B50
  c->r[0]=R32(c->r[4]+0x00000004u); // 80255B54
  c->r[0]=c->r[6]+c->r[0]; // 80255B58
  cmpu(c,0,c->r[0],c->r[19]); // 80255B5C
  if (!crb(c,0)) { goto L_80255B68; } // 80255B60
  goto L_80255C14; // 80255B64
L_80255B68:;
  c->r[0]=0u+0x0000001Au; // 80255B68
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80255B6C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80255B70
  if (crb(c,2)) { goto L_80255B98; } // 80255B74
  c->r[0]=R32(c->r[4]+0x00000008u); // 80255B78
  cmps(c,0,(int32_t)c->r[0],0); // 80255B7C
  if (crb(c,2)) { goto L_80255C14; } // 80255B80
  c->r[0]=R32(c->r[4]+0x00000008u); // 80255B84
  c->r[0]=c->r[6]+c->r[0]; // 80255B88
  cmpu(c,0,c->r[0],c->r[19]); // 80255B8C
  if (!crb(c,0)) { goto L_80255B98; } // 80255B90
  goto L_80255C14; // 80255B94
L_80255B98:;
  c->r[0]=0u+0x0000001Bu; // 80255B98
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80255B9C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 80255BA0
  if (crb(c,2)) { goto L_80255BC8; } // 80255BA4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80255BA8
  cmps(c,0,(int32_t)c->r[0],0); // 80255BAC
  if (crb(c,2)) { goto L_80255C14; } // 80255BB0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80255BB4
  c->r[0]=c->r[6]+c->r[0]; // 80255BB8
  cmpu(c,0,c->r[0],c->r[19]); // 80255BBC
  if (!crb(c,0)) { goto L_80255BC8; } // 80255BC0
  goto L_80255C14; // 80255BC4
L_80255BC8:;
  c->r[3]=c->r[27]+0x000001B0u; // 80255BC8
  c->r[0]=0u+0x00000000u; // 80255BCC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80255BD0
  c->r[17]=c->r[27]+0x000001C0u; // 80255BD4
  c->r[18]=0u+0x00000000u; // 80255BD8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80255BDC
  W32(c->r[3]+0x00000008u,c->r[0]); // 80255BE0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80255BE4
L_80255BE8:;
  c->r[12]=R32(c->r[17]+0x00000000u); // 80255BE8
  cmps(c,0,(int32_t)c->r[12],0); // 80255BEC
  if (crb(c,2)) { goto L_80255C04; } // 80255BF0
  c->r[3]=c->r[30]|c->r[30]; // 80255BF4
  c->r[4]=c->r[31]|c->r[31]; // 80255BF8
  c->ctr=c->r[12]; // 80255BFC
  if (true) { c->lr=0x80255C04u; dispatch(c,c->ctr); } // 80255C00
L_80255C04:;
  c->r[18]=c->r[18]+0x00000001u; // 80255C04
  c->r[17]=c->r[17]+0x00000004u; // 80255C08
  cmps(c,0,(int32_t)c->r[18],4); // 80255C0C
  if (crb(c,0)) { IRQCHK(c); goto L_80255BE8; } // 80255C10
L_80255C14:;
  c->r[11]=c->r[1]+0x00000050u; // 80255C14
  c->lr=0x80255C1Cu; f_800C2E70(c); // 80255C18
  c->r[0]=R32(c->r[1]+0x00000054u); // 80255C1C
  c->lr=c->r[0]; // 80255C20
  c->r[1]=c->r[1]+0x00000050u; // 80255C24
  return; // 80255C28
}

// SIEnablePollingInterrupt
void f_80255C30(Ctx* __restrict c) {
  trace_call(0x80255C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255C30
  c->r[0]=c->lr; // 80255C34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255C38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80255C3C
  c->r[31]=c->r[3]|c->r[3]; // 80255C40
  c->lr=0x80255C48u; f_802494C0(c); // 80255C44
  c->r[4]=0u+0xCD000000u; // 80255C48
  cmps(c,0,(int32_t)c->r[31],0); // 80255C4C
  c->r[5]=R32(c->r[4]+0x00006434u); // 80255C50
  c->r[31]=rotl(c->r[5],5)&0x00000001u; // 80255C54
  if (crb(c,2)) { goto L_80255C7C; } // 80255C58
  c->r[4]=0u+0x804A0000u; // 80255C5C
  c->r[0]=0u+0x00000000u; // 80255C60
  {uint32_t ea=c->r[4]+0x00005A30u; W32(ea,c->r[0]); c->r[4]=ea;} // 80255C64
  c->r[5]=c->r[5]|0x08000000u; // 80255C68
  W32(c->r[4]+0x00000004u,c->r[0]); // 80255C6C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80255C70
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80255C74
  goto L_80255C80; // 80255C78
L_80255C7C:;
  c->r[5]=rotl(c->r[5],0)&0xF7FFFFFFu; // 80255C7C
L_80255C80:;
  c->r[4]=0u+0xCD000000u; // 80255C80
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFEu; // 80255C84
  W32(c->r[4]+0x00006434u,c->r[0]); // 80255C88
  c->lr=0x80255C90u; f_80249500(c); // 80255C8C
  c->r[3]=c->r[31]|c->r[31]; // 80255C90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80255C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255C98
  c->lr=c->r[0]; // 80255C9C
  c->r[1]=c->r[1]+0x00000010u; // 80255CA0
  return; // 80255CA4
}

// fn_80255CB0
void f_80255CB0(Ctx* __restrict c) {
  trace_call(0x80255CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255CB0
  c->r[0]=c->lr; // 80255CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80255CBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80255CC0
  c->r[30]=c->r[3]|c->r[3]; // 80255CC4
  c->lr=0x80255CCCu; f_802494C0(c); // 80255CC8
  c->r[4]=0u+0x804A0000u; // 80255CCC
  c->r[0]=0u+0x00000004u; // 80255CD0
  c->r[31]=c->r[3]|c->r[3]; // 80255CD4
  c->r[5]=0u+0x00000000u; // 80255CD8
  c->r[4]=c->r[4]+0x00005A40u; // 80255CDC
  c->ctr=c->r[0]; // 80255CE0
  c->r[0]=c->r[0]|0x00000000u; // 80255CE4
L_80255CE8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80255CE8
  cmpu(c,0,c->r[0],c->r[30]); // 80255CEC
  if (!crb(c,2)) { goto L_80255D6C; } // 80255CF0
  c->r[3]=0u+0x804A0000u; // 80255CF4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80255CF8
  c->r[3]=c->r[3]+0x00005A40u; // 80255CFC
  c->r[4]=0u+0x00000000u; // 80255D00
  W32(c->r[3]+c->r[0],c->r[4]); // 80255D04
  c->r[4]=0u+0x00000000u; // 80255D08
  c->r[0]=R32(c->r[3]+0x00000000u); // 80255D0C
  cmps(c,0,(int32_t)c->r[0],0); // 80255D10
  if (!crb(c,2)) { goto L_80255D4C; } // 80255D14
  c->r[0]=R32(c->r[3]+0x00000004u); // 80255D18
  c->r[4]=0u+0x00000001u; // 80255D1C
  cmps(c,0,(int32_t)c->r[0],0); // 80255D20
  if (!crb(c,2)) { goto L_80255D4C; } // 80255D24
  c->r[0]=R32(c->r[3]+0x00000008u); // 80255D28
  c->r[4]=0u+0x00000002u; // 80255D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80255D30
  if (!crb(c,2)) { goto L_80255D4C; } // 80255D34
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80255D38
  c->r[4]=0u+0x00000003u; // 80255D3C
  cmps(c,0,(int32_t)c->r[0],0); // 80255D40
  if (!crb(c,2)) { goto L_80255D4C; } // 80255D44
  c->r[4]=0u+0x00000004u; // 80255D48
L_80255D4C:;
  cmps(c,0,(int32_t)c->r[4],4); // 80255D4C
  if (!crb(c,2)) { goto L_80255D5C; } // 80255D50
  c->r[3]=0u+0x00000000u; // 80255D54
  c->lr=0x80255D5Cu; f_80255C30(c); // 80255D58
L_80255D5C:;
  c->r[3]=c->r[31]|c->r[31]; // 80255D5C
  c->lr=0x80255D64u; f_80249500(c); // 80255D60
  c->r[3]=0u+0x00000001u; // 80255D64
  goto L_80255D84; // 80255D68
L_80255D6C:;
  c->r[4]=c->r[4]+0x00000004u; // 80255D6C
  c->r[5]=c->r[5]+0x00000001u; // 80255D70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255CE8; } // 80255D74
  c->r[3]=c->r[31]|c->r[31]; // 80255D78
  c->lr=0x80255D80u; f_80249500(c); // 80255D7C
  c->r[3]=0u+0x00000000u; // 80255D80
L_80255D84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80255D88
  c->r[30]=R32(c->r[1]+0x00000008u); // 80255D8C
  c->lr=c->r[0]; // 80255D90
  c->r[1]=c->r[1]+0x00000010u; // 80255D94
  return; // 80255D98
}

// SIInit
void f_80255DA0(Ctx* __restrict c) {
  trace_call(0x80255DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255DA0
  c->r[0]=c->lr; // 80255DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255DA8
  c->r[0]=R32(c->r[13]+0xFFFF9F24u); // 80255DAC
  cmps(c,0,(int32_t)c->r[0],0); // 80255DB0
  if (!crb(c,2)) { goto L_80255E50; } // 80255DB4
  c->r[3]=R32(c->r[13]+0xFFFF92D0u); // 80255DB8
  c->lr=0x80255DC0u; f_80243B90(c); // 80255DBC
  c->r[6]=0u+0x804A0000u; // 80255DC0
  c->r[4]=0u+0x803C0000u; // 80255DC4
  c->r[5]=c->r[6]+0x00005880u; // 80255DC8
  c->r[7]=0u+0xFFFFFFFFu; // 80255DCC
  c->r[4]=c->r[4]+0xFFFFBC60u; // 80255DD0
  c->r[0]=0u+0x00000000u; // 80255DD4
  W32(c->r[5]+0x00000060u,c->r[7]); // 80255DD8
  c->r[3]=0u+0x00000000u; // 80255DDC
  W32(c->r[5]+0x00000040u,c->r[7]); // 80255DE0
  W32(c->r[5]+0x00000020u,c->r[7]); // 80255DE4
  W32(c->r[6]+0x00005880u,c->r[7]); // 80255DE8
  W32(c->r[4]+0x00000004u,c->r[0]); // 80255DEC
  c->lr=0x80255DF4u; f_80256A60(c); // 80255DF0
  c->r[3]=0u+0xCD000000u; // 80255DF4
L_80255DF8:;
  c->r[0]=R32(c->r[3]+0x00006434u); // 80255DF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80255DFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80255DF8; } // 80255E00
  c->r[3]=0u+0xCD000000u; // 80255E04
  c->r[0]=0u+0x80000000u; // 80255E08
  c->r[4]=0u+0x80250000u; // 80255E0C
  W32(c->r[3]+0x00006434u,c->r[0]); // 80255E10
  c->r[4]=c->r[4]+0x00005840u; // 80255E14
  c->r[3]=0u+0x00000014u; // 80255E18
  c->lr=0x80255E20u; f_80249530(c); // 80255E1C
  c->r[3]=0u+0x00000800u; // 80255E20
  c->lr=0x80255E28u; f_80249910(c); // 80255E24
  c->r[3]=0u+0x00000000u; // 80255E28
  c->lr=0x80255E30u; f_80256790(c); // 80255E2C
  c->r[3]=0u+0x00000001u; // 80255E30
  c->lr=0x80255E38u; f_80256790(c); // 80255E34
  c->r[3]=0u+0x00000002u; // 80255E38
  c->lr=0x80255E40u; f_80256790(c); // 80255E3C
  c->r[3]=0u+0x00000003u; // 80255E40
  c->lr=0x80255E48u; f_80256790(c); // 80255E44
  c->r[0]=0u+0x00000001u; // 80255E48
  W32(c->r[13]+0xFFFF9F24u,c->r[0]); // 80255E4C
L_80255E50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255E50
  c->lr=c->r[0]; // 80255E54
  c->r[1]=c->r[1]+0x00000010u; // 80255E58
  return; // 80255E5C
}

// __SITransfer
void f_80255E60(Ctx* __restrict c) {
  trace_call(0x80255E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255E60
  c->r[0]=c->lr; // 80255E64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255E68
  c->r[11]=c->r[1]+0x00000020u; // 80255E6C
  c->lr=0x80255E74u; f_800C2E48(c); // 80255E70
  c->r[27]=c->r[3]|c->r[3]; // 80255E74
  c->r[28]=c->r[4]|c->r[4]; // 80255E78
  c->r[29]=c->r[5]|c->r[5]; // 80255E7C
  c->r[26]=c->r[6]|c->r[6]; // 80255E80
  c->r[30]=c->r[7]|c->r[7]; // 80255E84
  c->r[31]=c->r[8]|c->r[8]; // 80255E88
  c->lr=0x80255E90u; f_802494C0(c); // 80255E8C
  c->r[8]=0u+0x803C0000u; // 80255E90
  c->r[0]=R32(c->r[8]+0xFFFFBC60u); // 80255E94
  cmps(c,0,(int32_t)c->r[0],-1); // 80255E98
  if (crb(c,2)) { goto L_80255EAC; } // 80255E9C
  c->lr=0x80255EA4u; f_80249500(c); // 80255EA0
  c->r[3]=0u+0x00000000u; // 80255EA4
  goto L_80255FF8; // 80255EA8
L_80255EAC:;
  c->r[7]=0u+0xCD000000u; // 80255EAC
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 80255EB0
  c->r[5]=0u+0x0F000000u; // 80255EB4
  c->r[9]=R32(c->r[7]+0x00006438u); // 80255EB8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80255EBC
  c->r[0]=c->r[29]+0x00000003u; // 80255EC0
  c->r[9]=c->r[9]&c->r[5]; // 80255EC4
  W32(c->r[7]+0x00006438u,c->r[9]); // 80255EC8
  c->r[6]=c->r[8]+0xFFFFBC60u; // 80255ECC
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[4]); // 80255ED0
  W32(c->r[8]+0xFFFFBC60u,c->r[27]); // 80255ED4
  c->r[5]=0u+0x00000000u; // 80255ED8
  W32(c->r[6]+0x00000010u,c->r[31]); // 80255EDC
  W32(c->r[6]+0x00000008u,c->r[30]); // 80255EE0
  W32(c->r[6]+0x0000000Cu,c->r[26]); // 80255EE4
  if (crb(c,2)) { goto L_80255F9C; } // 80255EE8
  cmpu(c,0,c->r[4],0x00000008u); // 80255EEC
  c->r[6]=c->r[4]+0xFFFFFFF8u; // 80255EF0
  if (!crb(c,1)) { goto L_80255F64; } // 80255EF4
  c->r[0]=c->r[6]+0x00000007u; // 80255EF8
  c->r[8]=c->r[28]|c->r[28]; // 80255EFC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80255F00
  c->r[7]=c->r[7]+0x00006400u; // 80255F04
  c->ctr=c->r[0]; // 80255F08
  cmpu(c,0,c->r[6],0x00000000u); // 80255F0C
  if (!crb(c,1)) { goto L_80255F64; } // 80255F10
L_80255F14:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 80255F14
  c->r[5]=c->r[5]+0x00000008u; // 80255F18
  W32(c->r[7]+0x00000080u,c->r[0]); // 80255F1C
  c->r[0]=R32(c->r[8]+0x00000004u); // 80255F20
  W32(c->r[7]+0x00000084u,c->r[0]); // 80255F24
  c->r[0]=R32(c->r[8]+0x00000008u); // 80255F28
  W32(c->r[7]+0x00000088u,c->r[0]); // 80255F2C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80255F30
  W32(c->r[7]+0x0000008Cu,c->r[0]); // 80255F34
  c->r[0]=R32(c->r[8]+0x00000010u); // 80255F38
  W32(c->r[7]+0x00000090u,c->r[0]); // 80255F3C
  c->r[0]=R32(c->r[8]+0x00000014u); // 80255F40
  W32(c->r[7]+0x00000094u,c->r[0]); // 80255F44
  c->r[0]=R32(c->r[8]+0x00000018u); // 80255F48
  W32(c->r[7]+0x00000098u,c->r[0]); // 80255F4C
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80255F50
  c->r[8]=c->r[8]+0x00000020u; // 80255F54
  W32(c->r[7]+0x0000009Cu,c->r[0]); // 80255F58
  c->r[7]=c->r[7]+0x00000020u; // 80255F5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255F14; } // 80255F60
L_80255F64:;
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80255F64
  c->r[0]=0u+0xCD000000u; // 80255F68
  c->r[6]=c->r[0]+c->r[7]; // 80255F6C
  c->r[0]=c->r[4]-c->r[5]; // 80255F70
  c->r[7]=c->r[28]+c->r[7]; // 80255F74
  c->r[6]=c->r[6]+0x00006400u; // 80255F78
  c->ctr=c->r[0]; // 80255F7C
  cmpu(c,0,c->r[5],c->r[4]); // 80255F80
  if (!crb(c,0)) { goto L_80255F9C; } // 80255F84
L_80255F88:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 80255F88
  c->r[7]=c->r[7]+0x00000004u; // 80255F8C
  W32(c->r[6]+0x00000080u,c->r[0]); // 80255F90
  c->r[6]=c->r[6]+0x00000004u; // 80255F94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255F88; } // 80255F98
L_80255F9C:;
  c->r[4]=c->r[29]+0xFFFFFF80u; // 80255F9C
  c->r[0]=addc(c,~c->r[29],0x00000080u,1); // 80255FA0
  c->r[0]=~(c->r[4]|c->r[0]); // 80255FA4
  c->r[9]=0u+0xCD000000u; // 80255FA8
  c->r[5]=sraw(c,c->r[0],31); // 80255FAC
  c->r[6]=0u-c->r[31]; // 80255FB0
  c->r[4]=c->r[30]+0xFFFFFF80u; // 80255FB4
  c->r[0]=addc(c,~c->r[30],0x00000080u,1); // 80255FB8
  c->r[0]=~(c->r[4]|c->r[0]); // 80255FBC
  c->r[8]=R32(c->r[9]+0x00006434u); // 80255FC0
  c->r[0]=sraw(c,c->r[0],31); // 80255FC4
  c->r[7]=c->r[6]|c->r[31]; // 80255FC8
  c->r[4]=c->r[29]&~c->r[5]; // 80255FCC
  c->r[6]=c->r[8]|0x80000000u; // 80255FD0
  c->r[6]=(rotl(c->r[7],31)&0x40000000u)|(c->r[6]&~0x40000000u); // 80255FD4
  c->r[0]=c->r[30]&~c->r[0]; // 80255FD8
  c->r[6]=(rotl(c->r[4],16)&0x007F0000u)|(c->r[6]&~0x007F0000u); // 80255FDC
  c->r[6]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[6]&~0x00007F00u); // 80255FE0
  c->r[6]=(rotl(c->r[27],1)&0x00000006u)|(c->r[6]&~0x00000006u); // 80255FE4
  c->r[0]=c->r[6]|0x00000001u; // 80255FE8
  W32(c->r[9]+0x00006434u,c->r[0]); // 80255FEC
  c->lr=0x80255FF4u; f_80249500(c); // 80255FF0
  c->r[3]=0u+0x00000001u; // 80255FF4
L_80255FF8:;
  c->r[11]=c->r[1]+0x00000020u; // 80255FF8
  c->lr=0x80256000u; f_800C2E94(c); // 80255FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80256000
  c->lr=c->r[0]; // 80256004
  c->r[1]=c->r[1]+0x00000020u; // 80256008
  return; // 8025600C
}

// SISetCommand
void f_80256010(Ctx* __restrict c) {
  trace_call(0x80256010u);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80256010
  c->r[0]=0u+0xCD000000u; // 80256014
  c->r[3]=c->r[0]+c->r[3]; // 80256018
  W32(c->r[3]+0x00006400u,c->r[4]); // 8025601C
  return; // 80256020
}

// fn_80256030
void f_80256030(Ctx* __restrict c) {
  trace_call(0x80256030u);
  c->r[3]=0u+0xCD000000u; // 80256030
  c->r[0]=0u+0x80000000u; // 80256034
  W32(c->r[3]+0x00006438u,c->r[0]); // 80256038
  return; // 8025603C
}

// SISetXY
void f_80256040(Ctx* __restrict c) {
  trace_call(0x80256040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256040
  c->r[0]=c->lr; // 80256044
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256048
  c->r[0]=rotl(c->r[4],8)&0xFFFFFF00u; // 8025604C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80256050
  c->r[31]=rotl(c->r[3],16)&0xFFFF0000u; // 80256054
  c->r[31]=c->r[31]|c->r[0]; // 80256058
  c->lr=0x80256060u; f_802494C0(c); // 8025605C
  c->r[5]=0u+0x803C0000u; // 80256060
  c->r[4]=0u+0xCD000000u; // 80256064
  c->r[5]=c->r[5]+0xFFFFBC60u; // 80256068
  c->r[0]=R32(c->r[5]+0x00000004u); // 8025606C
  c->r[0]=rotl(c->r[0],0)&0xFC0000FFu; // 80256070
  c->r[31]=c->r[0]|c->r[31]; // 80256074
  W32(c->r[5]+0x00000004u,c->r[31]); // 80256078
  W32(c->r[4]+0x00006430u,c->r[31]); // 8025607C
  c->lr=0x80256084u; f_80249500(c); // 80256080
  c->r[3]=c->r[31]|c->r[31]; // 80256084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80256088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025608C
  c->lr=c->r[0]; // 80256090
  c->r[1]=c->r[1]+0x00000010u; // 80256094
  return; // 80256098
}

// SIEnablePolling
void f_802560A0(Ctx* __restrict c) {
  trace_call(0x802560A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802560A0
  c->r[0]=c->lr; // 802560A4
  cmps(c,0,(int32_t)c->r[3],0); // 802560A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802560AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802560B0
  c->r[31]=c->r[3]|c->r[3]; // 802560B4
  if (!crb(c,2)) { goto L_802560CC; } // 802560B8
  c->r[3]=0u+0x803C0000u; // 802560BC
  c->r[3]=c->r[3]+0xFFFFBC60u; // 802560C0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802560C4
  goto L_80256114; // 802560C8
L_802560CC:;
  c->lr=0x802560D0u; f_802494C0(c); // 802560CC
  c->r[31]=rotl(c->r[31],8)&0x000000FFu; // 802560D0
  c->r[6]=0u+0x803C0000u; // 802560D4
  c->r[8]=rotl(c->r[31],28)&0x0000000Fu; // 802560D8
  c->r[4]=0u+0xCD000000u; // 802560DC
  c->r[6]=c->r[6]+0xFFFFBC60u; // 802560E0
  c->r[0]=0u+0x80000000u; // 802560E4
  c->r[7]=c->r[8]|0x03FF0000u; // 802560E8
  c->r[5]=R32(c->r[6]+0x00000004u); // 802560EC
  c->r[7]=c->r[7]|0x0000FFF0u; // 802560F0
  c->r[31]=c->r[31]&c->r[7]; // 802560F4
  c->r[5]=c->r[5]&~c->r[8]; // 802560F8
  c->r[31]=c->r[5]|c->r[31]; // 802560FC
  W32(c->r[6]+0x00000004u,c->r[31]); // 80256100
  W32(c->r[4]+0x00006438u,c->r[0]); // 80256104
  W32(c->r[4]+0x00006430u,c->r[31]); // 80256108
  c->lr=0x80256110u; f_80249500(c); // 8025610C
  c->r[3]=c->r[31]|c->r[31]; // 80256110
L_80256114:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80256118
  c->lr=c->r[0]; // 8025611C
  c->r[1]=c->r[1]+0x00000010u; // 80256120
  return; // 80256124
}

// SIDisablePolling
void f_80256130(Ctx* __restrict c) {
  trace_call(0x80256130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256130
  c->r[0]=c->lr; // 80256134
  cmps(c,0,(int32_t)c->r[3],0); // 80256138
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025613C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80256140
  c->r[31]=c->r[3]|c->r[3]; // 80256144
  if (!crb(c,2)) { goto L_8025615C; } // 80256148
  c->r[3]=0u+0x803C0000u; // 8025614C
  c->r[3]=c->r[3]+0xFFFFBC60u; // 80256150
  c->r[3]=R32(c->r[3]+0x00000004u); // 80256154
  goto L_80256188; // 80256158
L_8025615C:;
  c->lr=0x80256160u; f_802494C0(c); // 8025615C
  c->r[6]=0u+0x803C0000u; // 80256160
  c->r[0]=rotl(c->r[31],8)&0x000000F0u; // 80256164
  c->r[6]=c->r[6]+0xFFFFBC60u; // 80256168
  c->r[4]=0u+0xCD000000u; // 8025616C
  c->r[5]=R32(c->r[6]+0x00000004u); // 80256170
  c->r[31]=c->r[5]&~c->r[0]; // 80256174
  W32(c->r[4]+0x00006430u,c->r[31]); // 80256178
  W32(c->r[6]+0x00000004u,c->r[31]); // 8025617C
  c->lr=0x80256184u; f_80249500(c); // 80256180
  c->r[3]=c->r[31]|c->r[31]; // 80256184
L_80256188:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256188
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025618C
  c->lr=c->r[0]; // 80256190
  c->r[1]=c->r[1]+0x00000010u; // 80256194
  return; // 80256198
}

// SIGetResponse
void f_802561A0(Ctx* __restrict c) {
  trace_call(0x802561A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802561A0
  c->r[0]=c->lr; // 802561A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802561A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802561AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802561B0
  c->r[30]=c->r[4]|c->r[4]; // 802561B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802561B8
  c->r[29]=c->r[3]|c->r[3]; // 802561BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 802561C0
  c->lr=0x802561C8u; f_802494C0(c); // 802561C4
  c->r[31]=c->r[3]|c->r[3]; // 802561C8
  c->lr=0x802561D0u; f_802494C0(c); // 802561CC
  c->r[4]=0u+0xCD000000u; // 802561D0
  c->r[0]=addc(c,~c->r[29],0x00000003u,1); // 802561D4
  c->r[28]=R32(c->r[4]+0x00006438u); // 802561D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802561DC
  c->r[28]=((c->r[0])&0x20)?0u:(c->r[28]>>((c->r[0])&31)); // 802561E0
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 802561E4
  if (crb(c,2)) { goto L_8025620C; } // 802561E8
  c->r[4]=0u+0x803C0000u; // 802561EC
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802561F0
  c->r[4]=c->r[4]+0xFFFFBC78u; // 802561F4
  c->r[0]=R32(c->r[4]+c->r[5]); // 802561F8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802561FC
  if (!crb(c,2)) { goto L_8025620C; } // 80256200
  c->r[0]=0u+0x00000008u; // 80256204
  W32(c->r[4]+c->r[5],c->r[0]); // 80256208
L_8025620C:;
  c->lr=0x80256210u; f_80249500(c); // 8025620C
  c->r[0]=rotl(c->r[28],0)&0x00000020u; cr0(c,c->r[0]); // 80256210
  if (crb(c,2)) { goto L_80256258; } // 80256214
  c->r[5]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80256218
  c->r[0]=0u+0xCD000000u; // 8025621C
  c->r[4]=0u+0x804A0000u; // 80256220
  c->r[3]=0u+0x804A0000u; // 80256224
  c->r[6]=c->r[0]+c->r[5]; // 80256228
  c->r[4]=c->r[4]+0x00005A00u; // 8025622C
  c->r[5]=rotl(c->r[29],3)&0xFFFFFFF8u; // 80256230
  c->r[0]=R32(c->r[6]+0x00006404u); // 80256234
  W32(c->r[4]+c->r[5],c->r[0]); // 80256238
  c->r[5]=c->r[4]+c->r[5]; // 8025623C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80256240
  c->r[3]=c->r[3]+0x00005A20u; // 80256244
  c->r[6]=R32(c->r[6]+0x00006408u); // 80256248
  c->r[4]=0u+0x00000001u; // 8025624C
  W32(c->r[5]+0x00000004u,c->r[6]); // 80256250
  W32(c->r[3]+c->r[0],c->r[4]); // 80256254
L_80256258:;
  c->r[3]=0u+0x804A0000u; // 80256258
  c->r[4]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8025625C
  c->r[3]=c->r[3]+0x00005A20u; // 80256260
  c->r[0]=0u+0x00000000u; // 80256264
  c->r[28]=R32(c->r[3]+c->r[4]); // 80256268
  cmps(c,0,(int32_t)c->r[28],0); // 8025626C
  W32(c->r[3]+c->r[4],c->r[0]); // 80256270
  if (crb(c,2)) { goto L_80256298; } // 80256274
  c->r[3]=0u+0x804A0000u; // 80256278
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 8025627C
  c->r[3]=c->r[3]+0x00005A00u; // 80256280
  c->r[0]=R32(c->r[3]+c->r[4]); // 80256284
  c->r[3]=c->r[3]+c->r[4]; // 80256288
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025628C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80256290
  W32(c->r[30]+0x00000004u,c->r[0]); // 80256294
L_80256298:;
  c->r[3]=c->r[31]|c->r[31]; // 80256298
  c->lr=0x802562A0u; f_80249500(c); // 8025629C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802562A0
  c->r[3]=c->r[28]|c->r[28]; // 802562A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802562A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802562AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802562B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802562B4
  c->lr=c->r[0]; // 802562B8
  c->r[1]=c->r[1]+0x00000020u; // 802562BC
  return; // 802562C0
}

// AlarmHandler
void f_802562D0(Ctx* __restrict c) {
  trace_call(0x802562D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802562D0
  c->r[0]=c->lr; // 802562D4
  c->r[6]=0u+0x804A0000u; // 802562D8
  c->r[5]=0u+0x2AAB0000u; // 802562DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802562E0
  c->r[6]=c->r[6]+0x00005940u; // 802562E4
  c->r[0]=c->r[3]-c->r[6]; // 802562E8
  c->r[3]=c->r[5]+0xFFFFAAABu; // 802562EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 802562F0
  c->r[4]=0u+0x804A0000u; // 802562F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802562F8
  c->r[4]=c->r[4]+0x00005880u; // 802562FC
  c->r[0]=sraw(c,c->r[0],3); // 80256300
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80256304
  c->r[0]=c->r[0]+c->r[3]; // 80256308
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8025630C
  c->r[3]=R32(c->r[4]+c->r[0]); // 80256310
  c->r[31]=c->r[4]+c->r[0]; // 80256314
  cmps(c,0,(int32_t)c->r[3],-1); // 80256318
  if (crb(c,2)) { goto L_80256348; } // 8025631C
  c->r[4]=R32(c->r[31]+0x00000004u); // 80256320
  c->r[5]=R32(c->r[31]+0x00000008u); // 80256324
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 80256328
  c->r[7]=R32(c->r[31]+0x00000010u); // 8025632C
  c->r[8]=R32(c->r[31]+0x00000014u); // 80256330
  c->lr=0x80256338u; f_80255E60(c); // 80256334
  cmps(c,0,(int32_t)c->r[3],0); // 80256338
  if (crb(c,2)) { goto L_80256348; } // 8025633C
  c->r[0]=0u+0xFFFFFFFFu; // 80256340
  W32(c->r[31]+0x00000000u,c->r[0]); // 80256344
L_80256348:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025634C
  c->lr=c->r[0]; // 80256350
  c->r[1]=c->r[1]+0x00000010u; // 80256354
  return; // 80256358
}

// SITransfer
void f_80256360(Ctx* __restrict c) {
  trace_call(0x80256360u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256360
  c->r[0]=c->lr; // 80256364
  W32(c->r[1]+0x00000044u,c->r[0]); // 80256368
  c->r[11]=c->r[1]+0x00000040u; // 8025636C
  c->lr=0x80256374u; f_800C2E34(c); // 80256370
  c->r[31]=0u+0x804A0000u; // 80256374
  c->r[11]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80256378
  c->r[31]=c->r[31]+0x00005880u; // 8025637C
  c->r[21]=c->r[3]|c->r[3]; // 80256380
  c->r[0]=c->r[31]+0x00000000u; // 80256384
  c->r[22]=c->r[4]|c->r[4]; // 80256388
  c->r[23]=c->r[5]|c->r[5]; // 8025638C
  c->r[24]=c->r[6]|c->r[6]; // 80256390
  c->r[25]=c->r[7]|c->r[7]; // 80256394
  c->r[26]=c->r[8]|c->r[8]; // 80256398
  c->r[27]=c->r[9]|c->r[9]; // 8025639C
  c->r[28]=c->r[10]|c->r[10]; // 802563A0
  c->r[29]=c->r[0]+c->r[11]; // 802563A4
  c->lr=0x802563ACu; f_802494C0(c); // 802563A8
  c->r[0]=R32(c->r[29]+0x00000000u); // 802563AC
  c->r[30]=c->r[3]|c->r[3]; // 802563B0
  cmps(c,0,(int32_t)c->r[0],-1); // 802563B4
  if (!crb(c,2)) { goto L_802563CC; } // 802563B8
  c->r[3]=0u+0x803C0000u; // 802563BC
  c->r[0]=R32(c->r[3]+0xFFFFBC60u); // 802563C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 802563C4
  if (!crb(c,2)) { goto L_802563DC; } // 802563C8
L_802563CC:;
  c->r[3]=c->r[30]|c->r[30]; // 802563CC
  c->lr=0x802563D4u; f_80249500(c); // 802563D0
  c->r[3]=0u+0x00000000u; // 802563D4
  goto L_802564B4; // 802563D8
L_802563DC:;
  c->lr=0x802563E0u; f_8024EB00(c); // 802563DC
  c->r[0]=c->r[28]|c->r[27]; cr0(c,c->r[0]); // 802563E0
  c->r[8]=c->r[3]|c->r[3]; // 802563E4
  if (!crb(c,2)) { goto L_802563F8; } // 802563E8
  c->r[28]=c->r[4]|c->r[4]; // 802563EC
  c->r[27]=c->r[8]|c->r[8]; // 802563F0
  goto L_80256414; // 802563F4
L_802563F8:;
  c->r[5]=rotl(c->r[21],3)&0xFFFFFFF8u; // 802563F8
  c->r[0]=c->r[31]+0x00000080u; // 802563FC
  c->r[6]=c->r[0]+c->r[5]; // 80256400
  c->r[5]=R32(c->r[6]+0x00000004u); // 80256404
  c->r[0]=R32(c->r[6]+0x00000000u); // 80256408
  c->r[28]=addc(c,c->r[28],c->r[5],0); // 8025640C
  c->r[27]=addc(c,c->r[27],c->r[0],c->xer_ca); // 80256410
L_80256414:;
  c->r[0]=c->r[3]^0x80000000u; // 80256414
  c->r[5]=c->r[27]^0x80000000u; // 80256418
  c->r[3]=addc(c,~c->r[28],c->r[4],1); // 8025641C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80256420
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80256424
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80256428
  if (crb(c,2)) { goto L_80256454; } // 8025642C
  c->r[3]=(uint32_t)((int32_t)c->r[21]*(int32_t)48); // 80256430
  c->r[0]=c->r[31]+0x000000C0u; // 80256434
  c->r[6]=addc(c,~c->r[4],c->r[28],1); // 80256438
  c->r[7]=0u+0x80250000u; // 8025643C
  c->r[3]=c->r[0]+c->r[3]; // 80256440
  c->r[5]=addc(c,~c->r[8],c->r[27],c->xer_ca); // 80256444
  c->r[7]=c->r[7]+0x000062D0u; // 80256448
  c->lr=0x80256450u; f_80243F10(c); // 8025644C
  goto L_80256488; // 80256450
L_80256454:;
  c->r[3]=c->r[21]|c->r[21]; // 80256454
  c->r[4]=c->r[22]|c->r[22]; // 80256458
  c->r[5]=c->r[23]|c->r[23]; // 8025645C
  c->r[6]=c->r[24]|c->r[24]; // 80256460
  c->r[7]=c->r[25]|c->r[25]; // 80256464
  c->r[8]=c->r[26]|c->r[26]; // 80256468
  c->lr=0x80256470u; f_80255E60(c); // 8025646C
  cmps(c,0,(int32_t)c->r[3],0); // 80256470
  if (crb(c,2)) { goto L_80256488; } // 80256474
  c->r[3]=c->r[30]|c->r[30]; // 80256478
  c->lr=0x80256480u; f_80249500(c); // 8025647C
  c->r[3]=0u+0x00000001u; // 80256480
  goto L_802564B4; // 80256484
L_80256488:;
  W32(c->r[29]+0x00000000u,c->r[21]); // 80256488
  c->r[3]=c->r[30]|c->r[30]; // 8025648C
  W32(c->r[29]+0x00000004u,c->r[22]); // 80256490
  W32(c->r[29]+0x00000008u,c->r[23]); // 80256494
  W32(c->r[29]+0x0000000Cu,c->r[24]); // 80256498
  W32(c->r[29]+0x00000010u,c->r[25]); // 8025649C
  W32(c->r[29]+0x00000014u,c->r[26]); // 802564A0
  W32(c->r[29]+0x0000001Cu,c->r[28]); // 802564A4
  W32(c->r[29]+0x00000018u,c->r[27]); // 802564A8
  c->lr=0x802564B0u; f_80249500(c); // 802564AC
  c->r[3]=0u+0x00000001u; // 802564B0
L_802564B4:;
  c->r[11]=c->r[1]+0x00000040u; // 802564B4
  c->lr=0x802564BCu; f_800C2E80(c); // 802564B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802564BC
  c->lr=c->r[0]; // 802564C0
  c->r[1]=c->r[1]+0x00000040u; // 802564C4
  return; // 802564C8
}

// GetTypeCallback
void f_802564D0(Ctx* __restrict c) {
  trace_call(0x802564D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802564D0
  c->r[0]=c->lr; // 802564D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802564D8
  c->r[11]=c->r[1]+0x00000020u; // 802564DC
  c->lr=0x802564E4u; f_800C2E48(c); // 802564E0
  c->r[31]=0u+0x803C0000u; // 802564E4
  c->r[30]=0u+0x804A0000u; // 802564E8
  c->r[29]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802564EC
  c->r[26]=c->r[3]|c->r[3]; // 802564F0
  c->r[31]=c->r[31]+0xFFFFBC78u; // 802564F4
  c->r[27]=c->r[4]|c->r[4]; // 802564F8
  c->r[0]=R32(c->r[31]+c->r[29]); // 802564FC
  c->r[30]=c->r[30]+0x00005880u; // 80256500
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80256504
  c->r[0]=c->r[0]|c->r[4]; // 80256508
  W32(c->r[31]+c->r[29],c->r[0]); // 8025650C
  c->lr=0x80256514u; f_8024EB00(c); // 80256510
  c->r[5]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80256514
  c->r[0]=c->r[30]+0x000000A0u; // 80256518
  c->r[5]=c->r[0]+c->r[5]; // 8025651C
  c->r[28]=R32(c->r[31]+c->r[29]); // 80256520
  c->r[0]=rotl(c->r[27],0)&0x0000000Fu; cr0(c,c->r[0]); // 80256524
  W32(c->r[5]+0x00000004u,c->r[4]); // 80256528
  c->r[0]=0u+0x80000000u; // 8025652C
  c->r[4]=R32(c->r[13]+0xFFFF9F2Cu); // 80256530
  W32(c->r[5]+0x00000000u,c->r[3]); // 80256534
  c->r[6]=((c->r[26])&0x20)?0u:(c->r[0]>>((c->r[26])&31)); // 80256538
  c->r[0]=c->r[4]&~c->r[6]; // 8025653C
  W32(c->r[13]+0xFFFF9F2Cu,c->r[0]); // 80256540
  c->r[27]=c->r[4]&c->r[6]; // 80256544
  if (!crb(c,2)) { goto L_8025656C; } // 80256548
  c->r[3]=rotl(c->r[28],0)&0x18000000u; // 8025654C
  c->r[0]=c->r[3]+0xF8000000u; // 80256550
  cmpu(c,0,c->r[0],0x00000000u); // 80256554
  if (!crb(c,2)) { goto L_8025656C; } // 80256558
  c->r[0]=rotl(c->r[28],0)&0x80000000u; cr0(c,c->r[0]); // 8025655C
  if (crb(c,2)) { goto L_8025656C; } // 80256560
  c->r[0]=rotl(c->r[28],0)&0x04000000u; cr0(c,c->r[0]); // 80256564
  if (crb(c,2)) { goto L_802565C4; } // 80256568
L_8025656C:;
  c->r[3]=c->r[26]|c->r[26]; // 8025656C
  c->r[4]=0u+0x00000000u; // 80256570
  c->lr=0x80256578u; f_8024C6D0(c); // 80256574
  c->r[28]=R32(c->r[31]+c->r[29]); // 80256578
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 8025657C
  c->r[0]=c->r[30]+0x000001E0u; // 80256580
  c->r[29]=0u+0x00000000u; // 80256584
  c->r[30]=c->r[0]+c->r[3]; // 80256588
  c->r[27]=0u+0x00000000u; // 8025658C
L_80256590:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80256590
  cmps(c,0,(int32_t)c->r[12],0); // 80256594
  if (crb(c,2)) { goto L_802565B0; } // 80256598
  c->r[3]=c->r[26]|c->r[26]; // 8025659C
  c->r[4]=c->r[28]|c->r[28]; // 802565A0
  W32(c->r[30]+0x00000000u,c->r[27]); // 802565A4
  c->ctr=c->r[12]; // 802565A8
  if (true) { c->lr=0x802565B0u; dispatch(c,c->ctr); } // 802565AC
L_802565B0:;
  c->r[29]=c->r[29]+0x00000001u; // 802565B0
  c->r[30]=c->r[30]+0x00000004u; // 802565B4
  cmps(c,0,(int32_t)c->r[29],4); // 802565B8
  if (crb(c,0)) { IRQCHK(c); goto L_80256590; } // 802565BC
  goto L_8025676C; // 802565C0
L_802565C4:;
  c->r[3]=c->r[26]|c->r[26]; // 802565C4
  c->lr=0x802565CCu; f_8024C650(c); // 802565C8
  cmps(c,0,(int32_t)c->r[27],0); // 802565CC
  c->r[27]=rotl(c->r[3],8)&0x00FFFF00u; // 802565D0
  if (crb(c,2)) { goto L_8025662C; } // 802565D4
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 802565D8
  if (crb(c,2)) { goto L_8025662C; } // 802565DC
  c->r[3]=0u+0x00D00000u; // 802565E0
  c->r[0]=c->r[30]+0x000001D0u; // 802565E4
  c->r[3]=c->r[3]+0xFFFFFF00u; // 802565E8
  c->r[8]=0u+0x80250000u; // 802565EC
  c->r[4]=c->r[0]+c->r[29]; // 802565F0
  c->r[0]=0u+0x00000080u; // 802565F4
  c->r[3]=c->r[27]&c->r[3]; // 802565F8
  W32(c->r[31]+c->r[29],c->r[0]); // 802565FC
  c->r[3]=c->r[3]|0x4E100000u; // 80256600
  c->r[6]=c->r[31]+c->r[29]; // 80256604
  W32(c->r[4]+0x00000000u,c->r[3]); // 80256608
  c->r[3]=c->r[26]|c->r[26]; // 8025660C
  c->r[8]=c->r[8]+0x000064D0u; // 80256610
  c->r[5]=0u+0x00000003u; // 80256614
  c->r[7]=0u+0x00000003u; // 80256618
  c->r[10]=0u+0x00000000u; // 8025661C
  c->r[9]=0u+0x00000000u; // 80256620
  c->lr=0x80256628u; f_80256360(c); // 80256624
  goto L_8025676C; // 80256628
L_8025662C:;
  c->r[0]=rotl(c->r[28],0)&0x00100000u; cr0(c,c->r[0]); // 8025662C
  if (crb(c,2)) { goto L_802566AC; } // 80256630
  c->r[3]=0u+0x00D00000u; // 80256634
  c->r[0]=c->r[3]+0xFFFFFF00u; // 80256638
  c->r[3]=c->r[28]&c->r[0]; // 8025663C
  c->r[0]=c->r[27]&c->r[0]; // 80256640
  cmpu(c,0,c->r[0],c->r[3]); // 80256644
  if (crb(c,2)) { goto L_80256724; } // 80256648
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 8025664C
  if (!crb(c,2)) { goto L_80256664; } // 80256650
  c->r[27]=c->r[3]|0x00100000u; // 80256654
  c->r[3]=c->r[26]|c->r[26]; // 80256658
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 8025665C
  c->lr=0x80256664u; f_8024C6D0(c); // 80256660
L_80256664:;
  c->r[3]=0u+0x803C0000u; // 80256664
  c->r[0]=c->r[30]+0x000001D0u; // 80256668
  c->r[3]=c->r[3]+0xFFFFBC78u; // 8025666C
  c->r[8]=0u+0x80250000u; // 80256670
  c->r[4]=c->r[0]+c->r[29]; // 80256674
  c->r[5]=c->r[27]|0x4E000000u; // 80256678
  c->r[6]=c->r[3]+c->r[29]; // 8025667C
  c->r[0]=0u+0x00000080u; // 80256680
  W32(c->r[4]+0x00000000u,c->r[5]); // 80256684
  c->r[3]=c->r[26]|c->r[26]; // 80256688
  c->r[8]=c->r[8]+0x000064D0u; // 8025668C
  c->r[5]=0u+0x00000003u; // 80256690
  W32(c->r[6]+0x00000000u,c->r[0]); // 80256694
  c->r[7]=0u+0x00000003u; // 80256698
  c->r[10]=0u+0x00000000u; // 8025669C
  c->r[9]=0u+0x00000000u; // 802566A0
  c->lr=0x802566A8u; f_80256360(c); // 802566A4
  goto L_8025676C; // 802566A8
L_802566AC:;
  c->r[0]=rotl(c->r[28],0)&0x40000000u; cr0(c,c->r[0]); // 802566AC
  if (crb(c,2)) { goto L_80256718; } // 802566B0
  c->r[4]=0u+0x00D00000u; // 802566B4
  c->r[3]=c->r[26]|c->r[26]; // 802566B8
  c->r[0]=c->r[4]+0xFFFFFF00u; // 802566BC
  c->r[27]=c->r[28]&c->r[0]; // 802566C0
  c->r[27]=c->r[27]|0x00100000u; // 802566C4
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 802566C8
  c->lr=0x802566D0u; f_8024C6D0(c); // 802566CC
  c->r[3]=0u+0x803C0000u; // 802566D0
  c->r[0]=c->r[30]+0x000001D0u; // 802566D4
  c->r[3]=c->r[3]+0xFFFFBC78u; // 802566D8
  c->r[8]=0u+0x80250000u; // 802566DC
  c->r[4]=c->r[0]+c->r[29]; // 802566E0
  c->r[5]=c->r[27]|0x4E000000u; // 802566E4
  c->r[6]=c->r[3]+c->r[29]; // 802566E8
  c->r[0]=0u+0x00000080u; // 802566EC
  W32(c->r[4]+0x00000000u,c->r[5]); // 802566F0
  c->r[3]=c->r[26]|c->r[26]; // 802566F4
  c->r[8]=c->r[8]+0x000064D0u; // 802566F8
  c->r[5]=0u+0x00000003u; // 802566FC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80256700
  c->r[7]=0u+0x00000003u; // 80256704
  c->r[10]=0u+0x00000000u; // 80256708
  c->r[9]=0u+0x00000000u; // 8025670C
  c->lr=0x80256714u; f_80256360(c); // 80256710
  goto L_8025676C; // 80256714
L_80256718:;
  c->r[3]=c->r[26]|c->r[26]; // 80256718
  c->r[4]=0u+0x00000000u; // 8025671C
  c->lr=0x80256724u; f_8024C6D0(c); // 80256720
L_80256724:;
  c->r[28]=R32(c->r[31]+c->r[29]); // 80256724
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 80256728
  c->r[0]=c->r[30]+0x000001E0u; // 8025672C
  c->r[29]=0u+0x00000000u; // 80256730
  c->r[30]=c->r[0]+c->r[3]; // 80256734
  c->r[27]=0u+0x00000000u; // 80256738
L_8025673C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8025673C
  cmps(c,0,(int32_t)c->r[12],0); // 80256740
  if (crb(c,2)) { goto L_8025675C; } // 80256744
  c->r[3]=c->r[26]|c->r[26]; // 80256748
  c->r[4]=c->r[28]|c->r[28]; // 8025674C
  W32(c->r[30]+0x00000000u,c->r[27]); // 80256750
  c->ctr=c->r[12]; // 80256754
  if (true) { c->lr=0x8025675Cu; dispatch(c,c->ctr); } // 80256758
L_8025675C:;
  c->r[29]=c->r[29]+0x00000001u; // 8025675C
  c->r[30]=c->r[30]+0x00000004u; // 80256760
  cmps(c,0,(int32_t)c->r[29],4); // 80256764
  if (crb(c,0)) { IRQCHK(c); goto L_8025673C; } // 80256768
L_8025676C:;
  c->r[11]=c->r[1]+0x00000020u; // 8025676C
  c->lr=0x80256774u; f_800C2E94(c); // 80256770
  c->r[0]=R32(c->r[1]+0x00000024u); // 80256774
  c->lr=c->r[0]; // 80256778
  c->r[1]=c->r[1]+0x00000020u; // 8025677C
  return; // 80256780
}

