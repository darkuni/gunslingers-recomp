#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// __dt__Q36nw4hbm3lyt6LayoutFv
void f_8021BAE0(Ctx* __restrict c) {
  trace_call(0x8021BAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BAE0
  c->r[0]=c->lr; // 8021BAE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021BAE8
  c->r[11]=c->r[1]+0x00000030u; // 8021BAEC
  c->lr=0x8021BAF4u; f_800C2E48(c); // 8021BAF0
  cmps(c,0,(int32_t)c->r[3],0); // 8021BAF4
  c->r[26]=c->r[3]|c->r[3]; // 8021BAF8
  c->r[27]=c->r[4]|c->r[4]; // 8021BAFC
  if (crb(c,2)) { goto L_8021BBEC; } // 8021BB00
  c->r[0]=R32(c->r[3]+0x00000014u); // 8021BB04
  c->r[4]=0u+0x803A0000u; // 8021BB08
  c->r[4]=c->r[4]+0x00007840u; // 8021BB0C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8021BB10
  cmps(c,0,(int32_t)c->r[0],0); // 8021BB14
  if (crb(c,2)) { goto L_8021BB38; } // 8021BB18
  c->r[3]=c->r[0]|c->r[0]; // 8021BB1C
  c->r[4]=0u+0xFFFFFFFFu; // 8021BB20
  c->lr=0x8021BB28u; f_8021B770(c); // 8021BB24
  c->r[3]=0u+0x80490000u; // 8021BB28
  c->r[4]=R32(c->r[26]+0x00000014u); // 8021BB2C
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021BB30
  c->lr=0x8021BB38u; f_8023B6E0(c); // 8021BB34
L_8021BB38:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 8021BB38
  cmps(c,0,(int32_t)c->r[3],0); // 8021BB3C
  if (crb(c,2)) { goto L_8021BB74; } // 8021BB40
  c->r[0]=R8(c->r[3]+0x000000D0u); // 8021BB44
  cmps(c,0,(int32_t)c->r[0],0); // 8021BB48
  if (!crb(c,2)) { goto L_8021BB74; } // 8021BB4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021BB50
  c->r[4]=0u+0xFFFFFFFFu; // 8021BB54
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021BB58
  c->ctr=c->r[12]; // 8021BB5C
  if (true) { c->lr=0x8021BB64u; dispatch(c,c->ctr); } // 8021BB60
  c->r[3]=0u+0x80490000u; // 8021BB64
  c->r[4]=R32(c->r[26]+0x00000010u); // 8021BB68
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021BB6C
  c->lr=0x8021BB74u; f_8023B6E0(c); // 8021BB70
L_8021BB74:;
  c->r[31]=R32(c->r[26]+0x00000008u); // 8021BB74
  c->r[30]=c->r[26]+0x00000008u; // 8021BB78
  c->r[29]=0u+0x80490000u; // 8021BB7C
  goto L_8021BBC4; // 8021BB80
L_8021BB84:;
  c->r[28]=c->r[31]|c->r[31]; // 8021BB84
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021BB88
  c->r[3]=c->r[26]+0x00000004u; // 8021BB8C
  c->r[4]=c->r[1]+0x00000008u; // 8021BB90
  W32(c->r[1]+0x00000008u,c->r[28]); // 8021BB94
  c->lr=0x8021BB9Cu; f_80226930(c); // 8021BB98
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8021BB9C
  c->r[4]=0u+0xFFFFFFFFu; // 8021BBA0
  c->r[12]=R32(c->r[28]+0x00000000u); // 8021BBA4
  c->r[3]=c->r[28]|c->r[28]; // 8021BBA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021BBAC
  c->ctr=c->r[12]; // 8021BBB0
  if (true) { c->lr=0x8021BBB8u; dispatch(c,c->ctr); } // 8021BBB4
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021BBB8
  c->r[4]=c->r[28]|c->r[28]; // 8021BBBC
  c->lr=0x8021BBC4u; f_8023B6E0(c); // 8021BBC0
L_8021BBC4:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021BBC4
  if (!crb(c,2)) { IRQCHK(c); goto L_8021BB84; } // 8021BBC8
  c->r[3]=addc(c,c->r[26],0x00000004u,0); cr0(c,c->r[3]); // 8021BBCC
  if (crb(c,2)) { goto L_8021BBDC; } // 8021BBD0
  c->r[4]=0u+0x00000000u; // 8021BBD4
  c->lr=0x8021BBDCu; f_802268A0(c); // 8021BBD8
L_8021BBDC:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021BBDC
  if (!crb(c,1)) { goto L_8021BBEC; } // 8021BBE0
  c->r[3]=c->r[26]|c->r[26]; // 8021BBE4
  c->lr=0x8021BBECu; f_800C2AC0(c); // 8021BBE8
L_8021BBEC:;
  c->r[11]=c->r[1]+0x00000030u; // 8021BBEC
  c->r[3]=c->r[26]|c->r[26]; // 8021BBF0
  c->lr=0x8021BBF8u; f_800C2E94(c); // 8021BBF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021BBF8
  c->lr=c->r[0]; // 8021BBFC
  c->r[1]=c->r[1]+0x00000030u; // 8021BC00
  return; // 8021BC04
}

// Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_8021BC10(Ctx* __restrict c) {
  trace_call(0x8021BC10u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BC10
  c->r[0]=c->lr; // 8021BC14
  W32(c->r[1]+0x00000064u,c->r[0]); // 8021BC18
  c->r[11]=c->r[1]+0x00000060u; // 8021BC1C
  c->lr=0x8021BC24u; f_800C2E18(c); // 8021BC20
  c->r[31]=c->r[4]|c->r[4]; // 8021BC24
  c->r[4]=0u+0x524C0000u; // 8021BC28
  c->r[30]=c->r[3]|c->r[3]; // 8021BC2C
  c->r[14]=c->r[5]|c->r[5]; // 8021BC30
  c->r[4]=c->r[4]+0x00005954u; // 8021BC34
  c->r[3]=c->r[31]|c->r[31]; // 8021BC38
  c->lr=0x8021BC40u; f_8021A700(c); // 8021BC3C
  cmps(c,0,(int32_t)c->r[3],0); // 8021BC40
  if (!crb(c,2)) { goto L_8021BC50; } // 8021BC44
  c->r[3]=0u+0x00000000u; // 8021BC48
  goto L_8021BEFC; // 8021BC4C
L_8021BC50:;
  c->r[22]=0u+0x00000000u; // 8021BC50
  W32(c->r[1]+0x00000014u,c->r[14]); // 8021BC54
  c->r[27]=0u+0x70610000u; // 8021BC58
  c->r[20]=0u+0x00000000u; // 8021BC5C
  W32(c->r[1]+0x00000008u,c->r[22]); // 8021BC60
  c->r[23]=c->r[27]+0x00006531u; // 8021BC64
  c->r[19]=0u+0x00000000u; // 8021BC68
  c->r[18]=0u+0x00000000u; // 8021BC6C
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 8021BC70
  c->r[17]=0u+0x00000000u; // 8021BC74
  c->r[15]=0u+0x00000000u; // 8021BC78
  c->r[28]=0u+0x74780000u; // 8021BC7C
  W32(c->r[1]+0x00000010u,c->r[22]); // 8021BC80
  c->r[25]=0u+0x626E0000u; // 8021BC84
  c->r[29]=0u+0x80490000u; // 8021BC88
  c->r[14]=0u+0x6C790000u; // 8021BC8C
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 8021BC90
  c->r[26]=0u+0x67720000u; // 8021BC94
  c->r[24]=0u+0x666E0000u; // 8021BC98
  c->r[16]=c->r[31]+c->r[0]; // 8021BC9C
  goto L_8021BEEC; // 8021BCA0
L_8021BCA4:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 8021BCA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 8021BCA8
  if (crb(c,2)) { goto L_8021BE1C; } // 8021BCAC
  if (!crb(c,0)) { goto L_8021BD28; } // 8021BCB0
  c->r[0]=c->r[26]+0x00007031u; // 8021BCB4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BCB8
  if (crb(c,2)) { goto L_8021BE28; } // 8021BCBC
  if (!crb(c,0)) { goto L_8021BCF4; } // 8021BCC0
  c->r[0]=c->r[24]+0x00006C31u; // 8021BCC4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BCC8
  if (crb(c,2)) { goto L_8021BDC0; } // 8021BCCC
  if (!crb(c,0)) { goto L_8021BCE4; } // 8021BCD0
  c->r[0]=c->r[25]+0x00006431u; // 8021BCD4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BCD8
  if (crb(c,2)) { goto L_8021BDD0; } // 8021BCDC
  goto L_8021BEE0; // 8021BCE0
L_8021BCE4:;
  c->r[0]=c->r[26]+0x00006531u; // 8021BCE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BCE8
  if (crb(c,2)) { goto L_8021BEDC; } // 8021BCEC
  goto L_8021BEE0; // 8021BCF0
L_8021BCF4:;
  c->r[0]=c->r[14]+0x00007431u; // 8021BCF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BCF8
  if (crb(c,2)) { goto L_8021BD90; } // 8021BCFC
  if (!crb(c,0)) { goto L_8021BD14; } // 8021BD00
  c->r[0]=c->r[26]+0x00007331u; // 8021BD04
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD08
  if (crb(c,2)) { goto L_8021BED4; } // 8021BD0C
  goto L_8021BEE0; // 8021BD10
L_8021BD14:;
  c->r[4]=0u+0x6D610000u; // 8021BD14
  c->r[0]=c->r[4]+0x00007431u; // 8021BD18
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD1C
  if (crb(c,2)) { goto L_8021BDC8; } // 8021BD20
  goto L_8021BEE0; // 8021BD24
L_8021BD28:;
  c->r[0]=c->r[28]+0x00006C31u; // 8021BD28
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD2C
  if (crb(c,2)) { goto L_8021BDB8; } // 8021BD30
  if (!crb(c,0)) { goto L_8021BD6C; } // 8021BD34
  c->r[0]=c->r[27]+0x00007331u; // 8021BD38
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD3C
  if (crb(c,2)) { goto L_8021BE14; } // 8021BD40
  if (!crb(c,0)) { goto L_8021BD58; } // 8021BD44
  c->r[0]=c->r[27]+0x00006E31u; // 8021BD48
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD4C
  if (crb(c,2)) { goto L_8021BDD0; } // 8021BD50
  goto L_8021BEE0; // 8021BD54
L_8021BD58:;
  c->r[4]=0u+0x70690000u; // 8021BD58
  c->r[0]=c->r[4]+0x00006331u; // 8021BD5C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD60
  if (crb(c,2)) { goto L_8021BDD0; } // 8021BD64
  goto L_8021BEE0; // 8021BD68
L_8021BD6C:;
  c->r[4]=0u+0x776E0000u; // 8021BD6C
  c->r[0]=c->r[4]+0x00006431u; // 8021BD70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD74
  if (crb(c,2)) { goto L_8021BDD0; } // 8021BD78
  if (!crb(c,0)) { goto L_8021BEE0; } // 8021BD7C
  c->r[0]=c->r[28]+0x00007431u; // 8021BD80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021BD84
  if (crb(c,2)) { goto L_8021BDD0; } // 8021BD88
  goto L_8021BEE0; // 8021BD8C
L_8021BD90:;
  c->r[3]=R8(c->r[16]+0x00000008u); // 8021BD90
  c->r[0]=0u-c->r[3]; // 8021BD94
  c->r[0]=c->r[0]|c->r[3]; // 8021BD98
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8021BD9C
  W8(c->r[30]+0x00000020u,c->r[0]); // 8021BDA0
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021BDA4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8021BDA8
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021BDAC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021BDB0
  goto L_8021BEE0; // 8021BDB4
L_8021BDB8:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 8021BDB8
  goto L_8021BEE0; // 8021BDBC
L_8021BDC0:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 8021BDC0
  goto L_8021BEE0; // 8021BDC4
L_8021BDC8:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 8021BDC8
  goto L_8021BEE0; // 8021BDCC
L_8021BDD0:;
  c->r[4]=c->r[16]|c->r[16]; // 8021BDD0
  c->r[5]=c->r[1]+0x00000008u; // 8021BDD4
  c->lr=0x8021BDDCu; f_8021C3A0(c); // 8021BDD8
  cmps(c,0,(int32_t)c->r[3],0); // 8021BDDC
  c->r[21]=c->r[3]|c->r[3]; // 8021BDE0
  if (crb(c,2)) { goto L_8021BEE0; } // 8021BDE4
  c->r[0]=R32(c->r[30]+0x00000010u); // 8021BDE8
  cmps(c,0,(int32_t)c->r[0],0); // 8021BDEC
  if (!crb(c,2)) { goto L_8021BDF8; } // 8021BDF0
  W32(c->r[30]+0x00000010u,c->r[3]); // 8021BDF4
L_8021BDF8:;
  cmps(c,0,(int32_t)c->r[20],0); // 8021BDF8
  if (crb(c,2)) { goto L_8021BE0C; } // 8021BDFC
  c->r[3]=c->r[20]|c->r[20]; // 8021BE00
  c->r[4]=c->r[21]|c->r[21]; // 8021BE04
  c->lr=0x8021BE0Cu; f_8021FA70(c); // 8021BE08
L_8021BE0C:;
  c->r[19]=c->r[21]|c->r[21]; // 8021BE0C
  goto L_8021BEE0; // 8021BE10
L_8021BE14:;
  c->r[20]=c->r[19]|c->r[19]; // 8021BE14
  goto L_8021BEE0; // 8021BE18
L_8021BE1C:;
  c->r[19]=c->r[20]|c->r[20]; // 8021BE1C
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 8021BE20
  goto L_8021BEE0; // 8021BE24
L_8021BE28:;
  cmps(c,0,(int32_t)c->r[18],0); // 8021BE28
  if (!crb(c,2)) { goto L_8021BE74; } // 8021BE2C
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021BE30
  c->r[18]=0u+0x00000001u; // 8021BE34
  c->r[4]=0u+0x0000000Cu; // 8021BE38
  c->lr=0x8021BE40u; f_8023B6D0(c); // 8021BE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8021BE40
  if (crb(c,2)) { goto L_8021BE68; } // 8021BE44
  if (crb(c,2)) { goto L_8021BE6C; } // 8021BE48
  W32(c->r[3]+0x00000004u,c->r[22]); // 8021BE4C
  c->r[4]=c->r[3]+0x00000004u; // 8021BE50
  W32(c->r[3]+0x00000008u,c->r[22]); // 8021BE54
  W32(c->r[3]+0x00000000u,c->r[22]); // 8021BE58
  W32(c->r[3]+0x00000004u,c->r[4]); // 8021BE5C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8021BE60
  goto L_8021BE6C; // 8021BE64
L_8021BE68:;
  c->r[3]=0u+0x00000000u; // 8021BE68
L_8021BE6C:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 8021BE6C
  goto L_8021BEE0; // 8021BE70
L_8021BE74:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 8021BE74
  cmps(c,0,(int32_t)c->r[0],0); // 8021BE78
  if (crb(c,2)) { goto L_8021BEE0; } // 8021BE7C
  cmps(c,0,(int32_t)c->r[17],1); // 8021BE80
  if (!crb(c,2)) { goto L_8021BEE0; } // 8021BE84
  c->r[21]=R32(c->r[30]+0x00000010u); // 8021BE88
  c->r[4]=0u+0x0000002Cu; // 8021BE8C
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021BE90
  c->lr=0x8021BE98u; f_8023B6D0(c); // 8021BE94
  cmps(c,0,(int32_t)c->r[3],0); // 8021BE98
  if (crb(c,2)) { goto L_8021BEBC; } // 8021BE9C
  c->r[4]=c->r[3]|c->r[3]; // 8021BEA0
  if (crb(c,2)) { goto L_8021BEC0; } // 8021BEA4
  c->r[4]=c->r[16]|c->r[16]; // 8021BEA8
  c->r[5]=c->r[21]|c->r[21]; // 8021BEAC
  c->lr=0x8021BEB4u; f_8021B5B0(c); // 8021BEB0
  c->r[4]=c->r[3]|c->r[3]; // 8021BEB4
  goto L_8021BEC0; // 8021BEB8
L_8021BEBC:;
  c->r[4]=0u+0x00000000u; // 8021BEBC
L_8021BEC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8021BEC0
  if (crb(c,2)) { goto L_8021BEE0; } // 8021BEC4
  c->r[3]=R32(c->r[30]+0x00000014u); // 8021BEC8
  c->lr=0x8021BED0u; f_8021B840(c); // 8021BECC
  goto L_8021BEE0; // 8021BED0
L_8021BED4:;
  c->r[17]=c->r[17]+0x00000001u; // 8021BED4
  goto L_8021BEE0; // 8021BED8
L_8021BEDC:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 8021BEDC
L_8021BEE0:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 8021BEE0
  c->r[15]=c->r[15]+0x00000001u; // 8021BEE4
  c->r[16]=c->r[16]+c->r[0]; // 8021BEE8
L_8021BEEC:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 8021BEEC
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 8021BEF0
  if (crb(c,0)) { IRQCHK(c); goto L_8021BCA4; } // 8021BEF4
  c->r[3]=0u+0x00000001u; // 8021BEF8
L_8021BEFC:;
  c->r[11]=c->r[1]+0x00000060u; // 8021BEFC
  c->lr=0x8021BF04u; f_800C2E64(c); // 8021BF00
  c->r[0]=R32(c->r[1]+0x00000064u); // 8021BF04
  c->lr=c->r[0]; // 8021BF08
  c->r[1]=c->r[1]+0x00000060u; // 8021BF0C
  return; // 8021BF10
}

// CreateAnimTransform__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_8021BF20(Ctx* __restrict c) {
  trace_call(0x8021BF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021BF20
  c->r[0]=c->lr; // 8021BF24
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021BF28
  c->r[11]=c->r[1]+0x00000030u; // 8021BF2C
  c->lr=0x8021BF34u; f_800C2E40(c); // 8021BF30
  c->r[29]=c->r[4]|c->r[4]; // 8021BF34
  c->r[24]=c->r[3]|c->r[3]; // 8021BF38
  c->r[25]=c->r[5]|c->r[5]; // 8021BF3C
  c->r[3]=c->r[29]|c->r[29]; // 8021BF40
  c->lr=0x8021BF48u; f_8021A6D0(c); // 8021BF44
  cmps(c,0,(int32_t)c->r[3],0); // 8021BF48
  if (!crb(c,2)) { goto L_8021BF58; } // 8021BF4C
  c->r[3]=0u+0x00000000u; // 8021BF50
  goto L_8021C050; // 8021BF54
L_8021BF58:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 8021BF58
  c->r[27]=0u+0x00000000u; // 8021BF5C
  c->r[26]=0u+0x00000000u; // 8021BF60
  c->r[31]=0u+0x80490000u; // 8021BF64
  c->r[28]=c->r[29]+c->r[0]; // 8021BF68
  goto L_8021C040; // 8021BF6C
L_8021BF70:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8021BF70
  c->r[0]=c->r[3]+0x8F9F0000u; // 8021BF74
  cmpu(c,0,c->r[0],0x00006931u); // 8021BF78
  if (!crb(c,2)) { goto L_8021C034; } // 8021BF7C
  c->r[3]=R32(c->r[29]+0x00000000u); // 8021BF80
  c->r[0]=c->r[3]+0xADB40000u; // 8021BF84
  cmpu(c,0,c->r[0],0x0000414Eu); // 8021BF88
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BF8C
  cmpu(c,0,c->r[0],0x00005041u); // 8021BF90
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BF94
  cmpu(c,0,c->r[0],0x00005649u); // 8021BF98
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BF9C
  cmpu(c,0,c->r[0],0x00005643u); // 8021BFA0
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BFA4
  cmpu(c,0,c->r[0],0x00004D43u); // 8021BFA8
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BFAC
  cmpu(c,0,c->r[0],0x00005453u); // 8021BFB0
  if (crb(c,2)) { goto L_8021BFC0; } // 8021BFB4
  cmpu(c,0,c->r[0],0x00005450u); // 8021BFB8
  if (!crb(c,2)) { goto L_8021C014; } // 8021BFBC
L_8021BFC0:;
  c->r[3]=R32(c->r[31]+0x00001A20u); // 8021BFC0
  c->r[4]=0u+0x00000020u; // 8021BFC4
  c->lr=0x8021BFCCu; f_8023B6D0(c); // 8021BFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8021BFCC
  if (crb(c,2)) { goto L_8021BFE8; } // 8021BFD0
  c->r[30]=c->r[3]|c->r[3]; // 8021BFD4
  if (crb(c,2)) { goto L_8021BFEC; } // 8021BFD8
  c->lr=0x8021BFE0u; f_80219870(c); // 8021BFDC
  c->r[30]=c->r[3]|c->r[3]; // 8021BFE0
  goto L_8021BFEC; // 8021BFE4
L_8021BFE8:;
  c->r[30]=0u+0x00000000u; // 8021BFE8
L_8021BFEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021BFEC
  if (crb(c,2)) { goto L_8021C014; } // 8021BFF0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8021BFF4
  c->r[3]=c->r[30]|c->r[30]; // 8021BFF8
  c->r[4]=c->r[28]|c->r[28]; // 8021BFFC
  c->r[5]=c->r[25]|c->r[25]; // 8021C000
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021C004
  c->ctr=c->r[12]; // 8021C008
  if (true) { c->lr=0x8021C010u; dispatch(c,c->ctr); } // 8021C00C
  c->r[27]=c->r[30]|c->r[30]; // 8021C010
L_8021C014:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021C014
  if (crb(c,2)) { goto L_8021C034; } // 8021C018
  c->r[0]=c->r[24]+0x00000008u; // 8021C01C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021C020
  c->r[3]=c->r[24]+0x00000004u; // 8021C024
  c->r[4]=c->r[1]+0x00000008u; // 8021C028
  c->r[5]=c->r[27]+0x00000004u; // 8021C02C
  c->lr=0x8021C034u; f_80226980(c); // 8021C030
L_8021C034:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8021C034
  c->r[26]=c->r[26]+0x00000001u; // 8021C038
  c->r[28]=c->r[28]+c->r[0]; // 8021C03C
L_8021C040:;
  c->r[0]=R16(c->r[29]+0x0000000Eu); // 8021C040
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8021C044
  if (crb(c,0)) { IRQCHK(c); goto L_8021BF70; } // 8021C048
  c->r[3]=c->r[27]|c->r[27]; // 8021C04C
L_8021C050:;
  c->r[11]=c->r[1]+0x00000030u; // 8021C050
  c->lr=0x8021C058u; f_800C2E8C(c); // 8021C054
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021C058
  c->lr=c->r[0]; // 8021C05C
  c->r[1]=c->r[1]+0x00000030u; // 8021C060
  return; // 8021C064
}

// fn_8021C070
void f_8021C070(Ctx* __restrict c) {
  trace_call(0x8021C070u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C070
  cmps(c,0,(int32_t)c->r[3],0); // 8021C074
  if (crb(c,2)) return; // 8021C078
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C07C
  c->r[5]=0u+0x00000001u; // 8021C080
  c->r[12]=R32(c->r[12]+0x00000044u); // 8021C084
  c->ctr=c->r[12]; // 8021C088
  if (true) { dispatch(c,c->ctr); return; } // 8021C08C
}

// fn_8021C090
void f_8021C090(Ctx* __restrict c) {
  trace_call(0x8021C090u);
  return; // 8021C090
}

// fn_8021C0A0
void f_8021C0A0(Ctx* __restrict c) {
  trace_call(0x8021C0A0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C0A0
  cmps(c,0,(int32_t)c->r[3],0); // 8021C0A4
  if (crb(c,2)) return; // 8021C0A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C0AC
  c->r[5]=0u+0x00000001u; // 8021C0B0
  c->r[12]=R32(c->r[12]+0x00000048u); // 8021C0B4
  c->ctr=c->r[12]; // 8021C0B8
  if (true) { dispatch(c,c->ctr); return; } // 8021C0BC
}

// fn_8021C0C0
void f_8021C0C0(Ctx* __restrict c) {
  trace_call(0x8021C0C0u);
  return; // 8021C0C0
}

// fn_8021C0D0
void f_8021C0D0(Ctx* __restrict c) {
  trace_call(0x8021C0D0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C0D0
  c->r[4]=0u+0x00000000u; // 8021C0D4
  c->r[12]=R32(c->r[12]+0x00000018u); // 8021C0D8
  c->ctr=c->r[12]; // 8021C0DC
  if (true) { dispatch(c,c->ctr); return; } // 8021C0E0
}

// fn_8021C0F0
void f_8021C0F0(Ctx* __restrict c) {
  trace_call(0x8021C0F0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C0F0
  cmps(c,0,(int32_t)c->r[3],0); // 8021C0F4
  if (crb(c,2)) return; // 8021C0F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C0FC
  c->r[6]=0u+0x00000001u; // 8021C100
  c->r[12]=R32(c->r[12]+0x00000058u); // 8021C104
  c->ctr=c->r[12]; // 8021C108
  if (true) { dispatch(c,c->ctr); return; } // 8021C10C
}

// fn_8021C110
void f_8021C110(Ctx* __restrict c) {
  trace_call(0x8021C110u);
  return; // 8021C110
}

// fn_8021C120
void f_8021C120(Ctx* __restrict c) {
  trace_call(0x8021C120u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C120
  cmps(c,0,(int32_t)c->r[3],0); // 8021C124
  if (crb(c,2)) return; // 8021C128
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C12C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8021C130
  c->ctr=c->r[12]; // 8021C134
  if (true) { dispatch(c,c->ctr); return; } // 8021C138
}

// fn_8021C13C
void f_8021C13C(Ctx* __restrict c) {
  trace_call(0x8021C13Cu);
  return; // 8021C13C
}

// fn_8021C140
void f_8021C140(Ctx* __restrict c) {
  trace_call(0x8021C140u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C140
  cmps(c,0,(int32_t)c->r[3],0); // 8021C144
  if (crb(c,2)) return; // 8021C148
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C14C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8021C150
  c->ctr=c->r[12]; // 8021C154
  if (true) { dispatch(c,c->ctr); return; } // 8021C158
}

// fn_8021C15C
void f_8021C15C(Ctx* __restrict c) {
  trace_call(0x8021C15Cu);
  return; // 8021C15C
}

// fn_8021C160
void f_8021C160(Ctx* __restrict c) {
  trace_call(0x8021C160u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021C160
  cmps(c,0,(int32_t)c->r[3],0); // 8021C164
  if (crb(c,2)) return; // 8021C168
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021C16C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8021C170
  c->ctr=c->r[12]; // 8021C174
  if (true) { dispatch(c,c->ctr); return; } // 8021C178
}

// fn_8021C17C
void f_8021C17C(Ctx* __restrict c) {
  trace_call(0x8021C17Cu);
  return; // 8021C17C
}

// GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
void f_8021C180(Ctx* __restrict c) {
  trace_call(0x8021C180u);
  c->r[0]=R8(c->r[4]+0x00000020u); // 8021C180
  cmpu(c,0,c->r[0],0x00000001u); // 8021C184
  if (!crb(c,2)) { goto L_8021C1C8; } // 8021C188
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8021C18C
  c->r[5]=0u+0x80380000u; // 8021C190
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C194
  c->f[3]=-c->f[4]; // 8021C198
  {uint32_t ea=c->r[5]+0xFFFFF83Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C19C
  c->f[0]=-c->f[1]; // 8021C1A0
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 8021C1A4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 8021C1A8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 8021C1AC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 8021C1B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8021C1B4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8021C1B8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8021C1BC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 8021C1C0
  return; // 8021C1C4
L_8021C1C8:;
  c->r[5]=0u+0x80380000u; // 8021C1C8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C1CC
  {uint32_t ea=c->r[5]+0xFFFFF838u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C1D0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C1D4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8021C1D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8021C1DC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8021C1E0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8021C1E4
  return; // 8021C1E8
}

// SetTagProcessor__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm2ut19TagProcessorBase<w>
void f_8021C1F0(Ctx* __restrict c) {
  trace_call(0x8021C1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C1F0
  c->r[0]=c->lr; // 8021C1F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021C1F8
  c->r[11]=c->r[1]+0x00000030u; // 8021C1FC
  c->lr=0x8021C204u; f_800C2E40(c); // 8021C200
  c->r[25]=R32(c->r[3]+0x00000010u); // 8021C204
  c->r[24]=0u+0x80490000u; // 8021C208
  c->r[31]=c->r[4]|c->r[4]; // 8021C20C
  c->r[12]=R32(c->r[25]+0x00000000u); // 8021C210
  c->r[3]=c->r[25]|c->r[25]; // 8021C214
  c->r[24]=c->r[24]+0x00001A38u; // 8021C218
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021C21C
  c->ctr=c->r[12]; // 8021C220
  if (true) { c->lr=0x8021C228u; dispatch(c,c->ctr); } // 8021C224
  goto L_8021C244; // 8021C228
  c->r[0]=c->r[0]|0x00000000u; // 8021C22C
L_8021C230:;
  cmpu(c,0,c->r[3],c->r[24]); // 8021C230
  if (!crb(c,2)) { goto L_8021C240; } // 8021C234
  c->r[0]=0u+0x00000001u; // 8021C238
  goto L_8021C250; // 8021C23C
L_8021C240:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021C240
L_8021C244:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C244
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C230; } // 8021C248
  c->r[0]=0u+0x00000000u; // 8021C24C
L_8021C250:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021C250
  if (crb(c,2)) { goto L_8021C260; } // 8021C254
  c->r[3]=c->r[25]|c->r[25]; // 8021C258
  goto L_8021C264; // 8021C25C
L_8021C260:;
  c->r[3]=0u+0x00000000u; // 8021C260
L_8021C264:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C264
  if (crb(c,2)) { goto L_8021C270; } // 8021C268
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8021C26C
L_8021C270:;
  c->r[24]=0u+0x80490000u; // 8021C270
  c->r[30]=R32(c->r[25]+0x00000014u); // 8021C274
  c->r[27]=c->r[25]+0x00000014u; // 8021C278
  c->r[24]=c->r[24]+0x00001A38u; // 8021C27C
  goto L_8021C378; // 8021C280
L_8021C284:;
  c->r[25]=c->r[30]+0xFFFFFFFCu; // 8021C284
  c->r[12]=R32(c->r[25]+0x00000000u); // 8021C288
  c->r[3]=c->r[25]|c->r[25]; // 8021C28C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021C290
  c->ctr=c->r[12]; // 8021C294
  if (true) { c->lr=0x8021C29Cu; dispatch(c,c->ctr); } // 8021C298
  goto L_8021C2B4; // 8021C29C
L_8021C2A0:;
  cmpu(c,0,c->r[3],c->r[24]); // 8021C2A0
  if (!crb(c,2)) { goto L_8021C2B0; } // 8021C2A4
  c->r[0]=0u+0x00000001u; // 8021C2A8
  goto L_8021C2C0; // 8021C2AC
L_8021C2B0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021C2B0
L_8021C2B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C2B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C2A0; } // 8021C2B8
  c->r[0]=0u+0x00000000u; // 8021C2BC
L_8021C2C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021C2C0
  if (crb(c,2)) { goto L_8021C2D0; } // 8021C2C4
  c->r[3]=c->r[25]|c->r[25]; // 8021C2C8
  goto L_8021C2D4; // 8021C2CC
L_8021C2D0:;
  c->r[3]=0u+0x00000000u; // 8021C2D0
L_8021C2D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C2D4
  if (crb(c,2)) { goto L_8021C2E0; } // 8021C2D8
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8021C2DC
L_8021C2E0:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 8021C2E0
  c->r[26]=c->r[25]+0x00000014u; // 8021C2E4
  goto L_8021C36C; // 8021C2E8
L_8021C2EC:;
  c->r[25]=c->r[29]+0xFFFFFFFCu; // 8021C2EC
  c->r[12]=R32(c->r[25]+0x00000000u); // 8021C2F0
  c->r[3]=c->r[25]|c->r[25]; // 8021C2F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021C2F8
  c->ctr=c->r[12]; // 8021C2FC
  if (true) { c->lr=0x8021C304u; dispatch(c,c->ctr); } // 8021C300
  goto L_8021C31C; // 8021C304
L_8021C308:;
  cmpu(c,0,c->r[3],c->r[24]); // 8021C308
  if (!crb(c,2)) { goto L_8021C318; } // 8021C30C
  c->r[0]=0u+0x00000001u; // 8021C310
  goto L_8021C328; // 8021C314
L_8021C318:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021C318
L_8021C31C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C31C
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C308; } // 8021C320
  c->r[0]=0u+0x00000000u; // 8021C324
L_8021C328:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021C328
  if (crb(c,2)) { goto L_8021C338; } // 8021C32C
  c->r[3]=c->r[25]|c->r[25]; // 8021C330
  goto L_8021C33C; // 8021C334
L_8021C338:;
  c->r[3]=0u+0x00000000u; // 8021C338
L_8021C33C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021C33C
  if (crb(c,2)) { goto L_8021C348; } // 8021C340
  W32(c->r[3]+0x000000F4u,c->r[31]); // 8021C344
L_8021C348:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 8021C348
  goto L_8021C360; // 8021C34C
L_8021C350:;
  c->r[4]=c->r[31]|c->r[31]; // 8021C350
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 8021C354
  c->lr=0x8021C35Cu; f_8021B900(c); // 8021C358
  c->r[28]=R32(c->r[28]+0x00000000u); // 8021C35C
L_8021C360:;
  cmpu(c,0,c->r[28],c->r[25]); // 8021C360
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C350; } // 8021C364
  c->r[29]=R32(c->r[29]+0x00000000u); // 8021C368
L_8021C36C:;
  cmpu(c,0,c->r[29],c->r[26]); // 8021C36C
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C2EC; } // 8021C370
  c->r[30]=R32(c->r[30]+0x00000000u); // 8021C374
L_8021C378:;
  cmpu(c,0,c->r[30],c->r[27]); // 8021C378
  if (!crb(c,2)) { IRQCHK(c); goto L_8021C284; } // 8021C37C
  c->r[11]=c->r[1]+0x00000030u; // 8021C380
  c->lr=0x8021C388u; f_800C2E8C(c); // 8021C384
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021C388
  c->lr=c->r[0]; // 8021C38C
  c->r[1]=c->r[1]+0x00000030u; // 8021C390
  return; // 8021C394
}

// BuildPaneObj__Q36nw4hbm3lyt6LayoutFlPCvRCQ36nw4hbm3lyt11ResBlockSet
void f_8021C3A0(Ctx* __restrict c) {
  trace_call(0x8021C3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C3A0
  c->r[0]=c->lr; // 8021C3A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8021C3A8
  c->r[0]=c->r[3]+0x8F9F0000u; // 8021C3AC
  cmpu(c,0,c->r[0],0x00006E31u); // 8021C3B0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8021C3B4
  if (crb(c,2)) { goto L_8021C3F0; } // 8021C3B8
  c->r[0]=c->r[3]+0x8F970000u; // 8021C3BC
  cmpu(c,0,c->r[0],0x00006331u); // 8021C3C0
  if (crb(c,2)) { goto L_8021C424; } // 8021C3C4
  c->r[0]=c->r[3]+0x8B880000u; // 8021C3C8
  cmpu(c,0,c->r[0],0x00007431u); // 8021C3CC
  if (crb(c,2)) { goto L_8021C47C; } // 8021C3D0
  c->r[0]=c->r[3]+0x88920000u; // 8021C3D4
  cmpu(c,0,c->r[0],0x00006431u); // 8021C3D8
  if (crb(c,2)) { goto L_8021C4D4; } // 8021C3DC
  c->r[0]=c->r[3]+0x9D920000u; // 8021C3E0
  cmpu(c,0,c->r[0],0x00006431u); // 8021C3E4
  if (crb(c,2)) { goto L_8021C52C; } // 8021C3E8
  goto L_8021C584; // 8021C3EC
L_8021C3F0:;
  c->r[3]=0u+0x80490000u; // 8021C3F0
  c->r[31]=c->r[4]|c->r[4]; // 8021C3F4
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021C3F8
  c->r[4]=0u+0x000000D4u; // 8021C3FC
  c->lr=0x8021C404u; f_8023B6D0(c); // 8021C400
  cmps(c,0,(int32_t)c->r[3],0); // 8021C404
  if (crb(c,2)) { goto L_8021C41C; } // 8021C408
  if (crb(c,2)) { goto L_8021C588; } // 8021C40C
  c->r[4]=c->r[31]|c->r[31]; // 8021C410
  c->lr=0x8021C418u; f_8021F810(c); // 8021C414
  goto L_8021C588; // 8021C418
L_8021C41C:;
  c->r[3]=0u+0x00000000u; // 8021C41C
  goto L_8021C588; // 8021C420
L_8021C424:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8021C424
  c->r[3]=0u+0x80490000u; // 8021C428
  c->r[7]=R32(c->r[5]+0x00000004u); // 8021C42C
  c->r[31]=c->r[4]|c->r[4]; // 8021C430
  c->r[6]=R32(c->r[5]+0x00000008u); // 8021C434
  c->r[4]=0u+0x000000ECu; // 8021C438
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021C43C
  W32(c->r[1]+0x00000038u,c->r[8]); // 8021C440
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021C444
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 8021C448
  W32(c->r[1]+0x00000040u,c->r[6]); // 8021C44C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021C450
  c->lr=0x8021C458u; f_8023B6D0(c); // 8021C454
  cmps(c,0,(int32_t)c->r[3],0); // 8021C458
  if (crb(c,2)) { goto L_8021C474; } // 8021C45C
  if (crb(c,2)) { goto L_8021C588; } // 8021C460
  c->r[4]=c->r[31]|c->r[31]; // 8021C464
  c->r[5]=c->r[1]+0x00000038u; // 8021C468
  c->lr=0x8021C470u; f_80220960(c); // 8021C46C
  goto L_8021C588; // 8021C470
L_8021C474:;
  c->r[3]=0u+0x00000000u; // 8021C474
  goto L_8021C588; // 8021C478
L_8021C47C:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8021C47C
  c->r[3]=0u+0x80490000u; // 8021C480
  c->r[7]=R32(c->r[5]+0x00000004u); // 8021C484
  c->r[31]=c->r[4]|c->r[4]; // 8021C488
  c->r[6]=R32(c->r[5]+0x00000008u); // 8021C48C
  c->r[4]=0u+0x00000100u; // 8021C490
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021C494
  W32(c->r[1]+0x00000028u,c->r[8]); // 8021C498
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021C49C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8021C4A0
  W32(c->r[1]+0x00000030u,c->r[6]); // 8021C4A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021C4A8
  c->lr=0x8021C4B0u; f_8023B6D0(c); // 8021C4AC
  cmps(c,0,(int32_t)c->r[3],0); // 8021C4B0
  if (crb(c,2)) { goto L_8021C4CC; } // 8021C4B4
  if (crb(c,2)) { goto L_8021C588; } // 8021C4B8
  c->r[4]=c->r[31]|c->r[31]; // 8021C4BC
  c->r[5]=c->r[1]+0x00000028u; // 8021C4C0
  c->lr=0x8021C4C8u; f_80220F20(c); // 8021C4C4
  goto L_8021C588; // 8021C4C8
L_8021C4CC:;
  c->r[3]=0u+0x00000000u; // 8021C4CC
  goto L_8021C588; // 8021C4D0
L_8021C4D4:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8021C4D4
  c->r[3]=0u+0x80490000u; // 8021C4D8
  c->r[7]=R32(c->r[5]+0x00000004u); // 8021C4DC
  c->r[31]=c->r[4]|c->r[4]; // 8021C4E0
  c->r[6]=R32(c->r[5]+0x00000008u); // 8021C4E4
  c->r[4]=0u+0x00000104u; // 8021C4E8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021C4EC
  W32(c->r[1]+0x00000018u,c->r[8]); // 8021C4F0
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021C4F4
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 8021C4F8
  W32(c->r[1]+0x00000020u,c->r[6]); // 8021C4FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021C500
  c->lr=0x8021C508u; f_8023B6D0(c); // 8021C504
  cmps(c,0,(int32_t)c->r[3],0); // 8021C508
  if (crb(c,2)) { goto L_8021C524; } // 8021C50C
  if (crb(c,2)) { goto L_8021C588; } // 8021C510
  c->r[4]=c->r[31]|c->r[31]; // 8021C514
  c->r[5]=c->r[1]+0x00000018u; // 8021C518
  c->lr=0x8021C520u; f_80222370(c); // 8021C51C
  goto L_8021C588; // 8021C520
L_8021C524:;
  c->r[3]=0u+0x00000000u; // 8021C524
  goto L_8021C588; // 8021C528
L_8021C52C:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 8021C52C
  c->r[3]=0u+0x80490000u; // 8021C530
  c->r[7]=R32(c->r[5]+0x00000004u); // 8021C534
  c->r[31]=c->r[4]|c->r[4]; // 8021C538
  c->r[6]=R32(c->r[5]+0x00000008u); // 8021C53C
  c->r[4]=0u+0x000000D4u; // 8021C540
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021C544
  W32(c->r[1]+0x00000008u,c->r[8]); // 8021C548
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021C54C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8021C550
  W32(c->r[1]+0x00000010u,c->r[6]); // 8021C554
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021C558
  c->lr=0x8021C560u; f_8023B6D0(c); // 8021C55C
  cmps(c,0,(int32_t)c->r[3],0); // 8021C560
  if (crb(c,2)) { goto L_8021C57C; } // 8021C564
  if (crb(c,2)) { goto L_8021C588; } // 8021C568
  c->r[4]=c->r[31]|c->r[31]; // 8021C56C
  c->r[5]=c->r[1]+0x00000008u; // 8021C570
  c->lr=0x8021C578u; f_8021A4F0(c); // 8021C574
  goto L_8021C588; // 8021C578
L_8021C57C:;
  c->r[3]=0u+0x00000000u; // 8021C57C
  goto L_8021C588; // 8021C580
L_8021C584:;
  c->r[3]=0u+0x00000000u; // 8021C584
L_8021C588:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8021C588
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8021C58C
  c->lr=c->r[0]; // 8021C590
  c->r[1]=c->r[1]+0x00000050u; // 8021C594
  return; // 8021C598
}

// CalcTextureMtx__26@unnamed@lyt_material_cpp@FPQ36nw4hbm4math5MTX34RCQ36nw4hbm3lyt6TexSRT
void f_8021C5A0(Ctx* __restrict c) {
  trace_call(0x8021C5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C5A0
  c->r[0]=c->lr; // 8021C5A4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C5A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021C5AC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8021C5B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8021C5B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021C5B8
  c->r[31]=0u+0x80380000u; // 8021C5BC
  c->r[31]=c->r[31]+0xFFFFF840u; // 8021C5C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021C5C4
  c->r[30]=c->r[4]|c->r[4]; // 8021C5C8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C5CC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C5D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021C5D4
  c->r[29]=c->r[3]|c->r[3]; // 8021C5D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8021C5DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8021C5E0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8021C5E4
  c->lr=0x8021C5ECu; f_80224A20(c); // 8021C5E8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C5EC
  c->f[31]=c->f[1]; // 8021C5F0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C5F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8021C5F8
  c->lr=0x8021C600u; f_802249A0(c); // 8021C5FC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C600
  c->f[5]=-c->f[1]; // 8021C604
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C608
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 8021C60C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 8021C610
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 8021C614
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C618
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8021C61C
  c->f[4]=-c->f[2]; // 8021C620
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 8021C624
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C628
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 8021C62C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C630
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 8021C634
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C638
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 8021C63C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[11]);} // 8021C640
  c->f[7]=-c->f[6]; // 8021C644
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 8021C648
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[12]);} // 8021C64C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 8021C650
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 8021C654
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[8]);} // 8021C658
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8021C65C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 8021C660
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[9]);} // 8021C664
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 8021C668
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[10]);} // 8021C66C
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 8021C670
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8021C674
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[8]);} // 8021C678
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 8021C67C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 8021C680
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[8]);} // 8021C684
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[8]);} // 8021C688
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8021C68C
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[8]);} // 8021C690
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8021C694
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8021C698
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021C69C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021C6A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021C6A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021C6A8
  c->lr=c->r[0]; // 8021C6AC
  c->r[1]=c->r[1]+0x00000030u; // 8021C6B0
  return; // 8021C6B4
}

// SetIndTexMtx__26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_8021C6C0(Ctx* __restrict c) {
  trace_call(0x8021C6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C6C0
  c->r[0]=c->lr; // 8021C6C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021C6C8
  c->r[5]=0u+0x80380000u; // 8021C6CC
  c->r[5]=c->r[5]+0xFFFFF840u; // 8021C6D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021C6D4
  c->f[8]=std::fabs(c->f[2]); // 8021C6D8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C6DC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8021C6E0
  c->f[9]=std::fabs(c->f[3]); // 8021C6E4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8021C6E8
  c->r[6]=0u+0x00000000u; // 8021C6EC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 8021C6F0
  fcmp(c,0,c->f[8],c->f[0]); // 8021C6F4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 8021C6F8
  c->f[10]=std::fabs(c->f[4]); // 8021C6FC
  c->f[11]=std::fabs(c->f[5]); // 8021C700
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021C704
  c->f[12]=std::fabs(c->f[6]); // 8021C708
  c->f[13]=std::fabs(c->f[7]); // 8021C70C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C710
  if (crb(c,2)) { goto L_8021C754; } // 8021C714
  fcmp(c,0,c->f[9],c->f[0]); // 8021C718
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C71C
  if (crb(c,2)) { goto L_8021C754; } // 8021C720
  fcmp(c,0,c->f[10],c->f[0]); // 8021C724
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C728
  if (crb(c,2)) { goto L_8021C754; } // 8021C72C
  fcmp(c,0,c->f[11],c->f[0]); // 8021C730
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C734
  if (crb(c,2)) { goto L_8021C754; } // 8021C738
  fcmp(c,0,c->f[12],c->f[0]); // 8021C73C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C740
  if (crb(c,2)) { goto L_8021C754; } // 8021C744
  fcmp(c,0,c->f[13],c->f[0]); // 8021C748
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C74C
  if (!crb(c,2)) { goto L_8021C7EC; } // 8021C750
L_8021C754:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C754
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C758
  c->r[0]=c->r[0]|0x00000000u; // 8021C75C
L_8021C760:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8021C760
  cmps(c,0,(int32_t)c->r[0],46); // 8021C764
  if (!crb(c,0)) { goto L_8021C894; } // 8021C768
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 8021C76C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8021C770
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 8021C774
  fcmp(c,0,c->f[8],c->f[0]); // 8021C778
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8021C77C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 8021C780
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 8021C784
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 8021C788
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 8021C78C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 8021C790
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 8021C794
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 8021C798
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 8021C79C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7A0
  c->r[6]=c->r[6]+0x00000001u; // 8021C7A4
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7A8
  fcmp(c,0,c->f[9],c->f[0]); // 8021C7AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7B0
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7B4
  fcmp(c,0,c->f[10],c->f[0]); // 8021C7B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7BC
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7C0
  fcmp(c,0,c->f[11],c->f[0]); // 8021C7C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7C8
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7CC
  fcmp(c,0,c->f[12],c->f[0]); // 8021C7D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7D4
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7D8
  fcmp(c,0,c->f[13],c->f[0]); // 8021C7DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021C7E0
  if (crb(c,2)) { IRQCHK(c); goto L_8021C760; } // 8021C7E4
  goto L_8021C894; // 8021C7E8
L_8021C7EC:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021C7EC
  fcmp(c,0,c->f[8],c->f[1]); // 8021C7F0
  if (!crb(c,0)) { goto L_8021C894; } // 8021C7F4
  fcmp(c,0,c->f[9],c->f[1]); // 8021C7F8
  if (!crb(c,0)) { goto L_8021C894; } // 8021C7FC
  fcmp(c,0,c->f[10],c->f[1]); // 8021C800
  if (!crb(c,0)) { goto L_8021C894; } // 8021C804
  fcmp(c,0,c->f[11],c->f[1]); // 8021C808
  if (!crb(c,0)) { goto L_8021C894; } // 8021C80C
  fcmp(c,0,c->f[12],c->f[1]); // 8021C810
  if (!crb(c,0)) { goto L_8021C894; } // 8021C814
  fcmp(c,0,c->f[13],c->f[1]); // 8021C818
  if (!crb(c,0)) { goto L_8021C894; } // 8021C81C
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021C820
L_8021C824:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 8021C824
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8021C828
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 8021C82C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8021C830
  fcmp(c,0,c->f[8],c->f[1]); // 8021C834
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 8021C838
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8021C83C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 8021C840
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 8021C844
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 8021C848
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 8021C84C
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 8021C850
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 8021C854
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 8021C858
  if (!crb(c,0)) { goto L_8021C894; } // 8021C85C
  fcmp(c,0,c->f[9],c->f[1]); // 8021C860
  if (!crb(c,0)) { goto L_8021C894; } // 8021C864
  fcmp(c,0,c->f[10],c->f[1]); // 8021C868
  if (!crb(c,0)) { goto L_8021C894; } // 8021C86C
  fcmp(c,0,c->f[11],c->f[1]); // 8021C870
  if (!crb(c,0)) { goto L_8021C894; } // 8021C874
  fcmp(c,0,c->f[12],c->f[1]); // 8021C878
  if (!crb(c,0)) { goto L_8021C894; } // 8021C87C
  fcmp(c,0,c->f[13],c->f[1]); // 8021C880
  if (!crb(c,0)) { goto L_8021C894; } // 8021C884
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8021C888
  cmps(c,0,(int32_t)c->r[0],-17); // 8021C88C
  if (crb(c,1)) { IRQCHK(c); goto L_8021C824; } // 8021C890
L_8021C894:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8021C894
  c->r[4]=c->r[1]+0x00000008u; // 8021C898
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8021C89C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8021C8A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8021C8A4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 8021C8A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 8021C8AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 8021C8B0
  c->lr=0x8021C8B8u; f_8020B290(c); // 8021C8B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021C8B8
  c->lr=c->r[0]; // 8021C8BC
  c->r[1]=c->r[1]+0x00000020u; // 8021C8C0
  return; // 8021C8C4
}

// fn_8021C8D0
void f_8021C8D0(Ctx* __restrict c) {
  trace_call(0x8021C8D0u);
  c->r[0]=0u+0xFFFFFFFFu; // 8021C8D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8021C8D4
  return; // 8021C8D8
}

// fn_8021C8E0
void f_8021C8E0(Ctx* __restrict c) {
  trace_call(0x8021C8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021C8E0
  c->r[0]=c->lr; // 8021C8E4
  W32(c->r[1]+0x00000084u,c->r[0]); // 8021C8E8
  c->r[11]=c->r[1]+0x00000080u; // 8021C8EC
  c->lr=0x8021C8F4u; f_800C2E18(c); // 8021C8F0
  c->r[6]=0u+0x803A0000u; // 8021C8F4
  c->r[0]=c->r[3]+0x0000001Cu; // 8021C8F8
  c->r[6]=c->r[6]+0x000078D0u; // 8021C8FC
  c->r[14]=0u+0x00000000u; // 8021C900
  W32(c->r[3]+0x00000000u,c->r[6]); // 8021C904
  c->r[7]=0u+0x80220000u; // 8021C908
  c->r[16]=c->r[4]|c->r[4]; // 8021C90C
  c->r[6]=0u+0x80220000u; // 8021C910
  c->r[17]=c->r[5]|c->r[5]; // 8021C914
  c->r[4]=c->r[7]+0xFFFFC8D0u; // 8021C918
  c->r[5]=c->r[6]+0xFFFFA600u; // 8021C91C
  W32(c->r[3]+0x00000018u,c->r[14]); // 8021C920
  c->r[15]=c->r[3]|c->r[3]; // 8021C924
  c->r[6]=0u+0x00000004u; // 8021C928
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8021C92C
  c->r[7]=0u+0x00000004u; // 8021C930
  W32(c->r[3]+0x00000020u,c->r[0]); // 8021C934
  c->r[3]=c->r[3]+0x0000003Cu; // 8021C938
  c->lr=0x8021C940u; f_800C2B8C(c); // 8021C93C
  c->r[4]=0u+0x80380000u; // 8021C940
  c->r[7]=0u+0x000000FFu; // 8021C944
  c->r[5]=c->r[4]+0xFFFFF840u; // 8021C948
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021C94C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFFF840u); // 8021C950
  c->r[4]=c->r[16]|c->r[16]; // 8021C954
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 8021C958
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8021C95C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 8021C960
  c->r[6]=rotl(c->r[3],0)&0x0000001Fu; // 8021C964
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 8021C968
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 8021C96C
  c->r[3]=c->r[15]+0x00000004u; // 8021C970
  W16(c->r[15]+0x00000024u,c->r[11]); // 8021C974
  c->r[5]=0u+0x00000014u; // 8021C978
  W16(c->r[15]+0x00000026u,c->r[10]); // 8021C97C
  W16(c->r[15]+0x00000028u,c->r[9]); // 8021C980
  W16(c->r[15]+0x0000002Au,c->r[8]); // 8021C984
  W16(c->r[15]+0x0000002Cu,c->r[7]); // 8021C988
  W16(c->r[15]+0x0000002Eu,c->r[7]); // 8021C98C
  W16(c->r[15]+0x00000030u,c->r[7]); // 8021C990
  W16(c->r[15]+0x00000032u,c->r[7]); // 8021C994
  W16(c->r[15]+0x00000034u,c->r[7]); // 8021C998
  W16(c->r[15]+0x00000036u,c->r[7]); // 8021C99C
  W16(c->r[15]+0x00000038u,c->r[7]); // 8021C9A0
  W16(c->r[15]+0x0000003Au,c->r[7]); // 8021C9A4
  W32(c->r[15]+0x0000004Cu,c->r[6]); // 8021C9A8
  W32(c->r[15]+0x00000050u,c->r[0]); // 8021C9AC
  W8(c->r[15]+0x00000054u,c->r[14]); // 8021C9B0
  W32(c->r[15]+0x00000058u,c->r[14]); // 8021C9B4
  c->lr=0x8021C9BCu; f_800CA310(c); // 8021C9B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000014u); // 8021C9BC
  c->r[21]=c->r[16]+0x00000040u; // 8021C9C0
  W16(c->r[15]+0x00000024u,c->r[0]); // 8021C9C4
  c->r[18]=0u+0x00000008u; // 8021C9C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000016u); // 8021C9CC
  W16(c->r[15]+0x00000026u,c->r[0]); // 8021C9D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000018u); // 8021C9D4
  W16(c->r[15]+0x00000028u,c->r[0]); // 8021C9D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Au); // 8021C9DC
  W16(c->r[15]+0x0000002Au,c->r[0]); // 8021C9E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Cu); // 8021C9E4
  W16(c->r[15]+0x0000002Cu,c->r[0]); // 8021C9E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Eu); // 8021C9EC
  W16(c->r[15]+0x0000002Eu,c->r[0]); // 8021C9F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000020u); // 8021C9F4
  W16(c->r[15]+0x00000030u,c->r[0]); // 8021C9F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000022u); // 8021C9FC
  W16(c->r[15]+0x00000032u,c->r[0]); // 8021CA00
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000024u); // 8021CA04
  W16(c->r[15]+0x00000034u,c->r[0]); // 8021CA08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000026u); // 8021CA0C
  W16(c->r[15]+0x00000036u,c->r[0]); // 8021CA10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000028u); // 8021CA14
  W16(c->r[15]+0x00000038u,c->r[0]); // 8021CA18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000002Au); // 8021CA1C
  W16(c->r[15]+0x0000003Au,c->r[0]); // 8021CA20
  c->r[0]=R32(c->r[16]+0x0000002Cu); // 8021CA24
  W32(c->r[15]+0x0000003Cu,c->r[0]); // 8021CA28
  c->r[0]=R32(c->r[16]+0x00000030u); // 8021CA2C
  W32(c->r[15]+0x00000040u,c->r[0]); // 8021CA30
  c->r[0]=R32(c->r[16]+0x00000034u); // 8021CA34
  W32(c->r[15]+0x00000044u,c->r[0]); // 8021CA38
  c->r[0]=R32(c->r[16]+0x00000038u); // 8021CA3C
  W32(c->r[15]+0x00000048u,c->r[0]); // 8021CA40
  c->r[0]=R32(c->r[16]+0x0000003Cu); // 8021CA44
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 8021CA48
  c->r[3]=rotl(c->r[0],2)&0x0000003Cu; // 8021CA4C
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 8021CA50
  c->r[5]=rotl(c->r[0],0)&0x0000000Fu; // 8021CA54
  c->r[22]=c->r[3]+0x00000040u; // 8021CA58
  cmpu(c,0,c->r[5],0x00000008u); // 8021CA5C
  c->r[20]=c->r[16]+c->r[22]; // 8021CA60
  c->r[3]=rotl(c->r[0],26)&0x0000003Cu; // 8021CA64
  c->r[22]=c->r[22]+c->r[4]; // 8021CA68
  c->r[4]=rotl(c->r[0],24)&0x0000000Fu; // 8021CA6C
  c->r[19]=c->r[16]+c->r[22]; // 8021CA70
  c->r[22]=c->r[22]+c->r[3]; // 8021CA74
  if (crb(c,1)) { goto L_8021CA80; } // 8021CA78
  c->r[18]=c->r[5]|c->r[5]; // 8021CA7C
L_8021CA80:;
  cmpu(c,0,c->r[6],0x0000000Au); // 8021CA80
  c->r[14]=0u+0x0000000Au; // 8021CA84
  if (crb(c,1)) { goto L_8021CA90; } // 8021CA88
  c->r[14]=c->r[6]|c->r[6]; // 8021CA8C
L_8021CA90:;
  cmpu(c,0,c->r[4],0x00000008u); // 8021CA90
  c->r[27]=0u+0x00000008u; // 8021CA94
  if (crb(c,1)) { goto L_8021CAA0; } // 8021CA98
  c->r[27]=c->r[4]|c->r[4]; // 8021CA9C
L_8021CAA0:;
  c->r[6]=rotl(c->r[0],7)&0x00000001u; // 8021CAA0
  c->r[4]=rotl(c->r[0],5)&0x00000001u; // 8021CAA4
  c->r[7]=rotl(c->r[0],19)&0x00000003u; // 8021CAA8
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 8021CAAC
  W8(c->r[1]+0x0000002Cu,c->r[3]); // 8021CAB0
  c->r[5]=0u-c->r[6]; // 8021CAB4
  c->r[3]=0u-c->r[4]; // 8021CAB8
  cmpu(c,0,c->r[7],0x00000003u); // 8021CABC
  c->r[4]=c->r[3]|c->r[4]; // 8021CAC0
  c->r[5]=c->r[5]|c->r[6]; // 8021CAC4
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 8021CAC8
  W8(c->r[1]+0x0000002Bu,c->r[3]); // 8021CACC
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 8021CAD0
  c->r[28]=0u+0x00000003u; // 8021CAD4
  W8(c->r[1]+0x00000029u,c->r[3]); // 8021CAD8
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 8021CADC
  W8(c->r[1]+0x0000002Au,c->r[3]); // 8021CAE0
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 8021CAE4
  W8(c->r[1]+0x00000028u,c->r[3]); // 8021CAE8
  if (crb(c,1)) { goto L_8021CAF4; } // 8021CAEC
  c->r[28]=c->r[7]|c->r[7]; // 8021CAF0
L_8021CAF4:;
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 8021CAF4
  c->r[29]=0u+0x00000004u; // 8021CAF8
  cmpu(c,0,c->r[3],0x00000004u); // 8021CAFC
  if (crb(c,1)) { goto L_8021CB08; } // 8021CB00
  c->r[29]=c->r[3]|c->r[3]; // 8021CB04
L_8021CB08:;
  c->r[0]=rotl(c->r[0],14)&0x0000001Fu; // 8021CB08
  c->r[30]=0u+0x00000010u; // 8021CB0C
  cmpu(c,0,c->r[0],0x00000010u); // 8021CB10
  if (crb(c,1)) { goto L_8021CB1C; } // 8021CB14
  c->r[30]=c->r[0]|c->r[0]; // 8021CB18
L_8021CB1C:;
  c->r[0]=R8(c->r[1]+0x00000029u); // 8021CB1C
  c->r[3]=c->r[15]|c->r[15]; // 8021CB20
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021CB24
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 8021CB28
  c->r[0]=R8(c->r[1]+0x00000028u); // 8021CB2C
  c->r[5]=rotl(c->r[14],0)&0x000000FFu; // 8021CB30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021CB34
  c->r[6]=rotl(c->r[27],0)&0x000000FFu; // 8021CB38
  c->r[0]=R8(c->r[1]+0x0000002Bu); // 8021CB3C
  c->r[7]=rotl(c->r[30],0)&0x000000FFu; // 8021CB40
  W32(c->r[1]+0x00000010u,c->r[0]); // 8021CB44
  c->r[9]=rotl(c->r[29],0)&0x000000FFu; // 8021CB48
  c->r[0]=R8(c->r[1]+0x0000002Au); // 8021CB4C
  c->r[10]=rotl(c->r[28],0)&0x000000FFu; // 8021CB50
  c->r[8]=R8(c->r[1]+0x0000002Cu); // 8021CB54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021CB58
  c->lr=0x8021CB60u; f_8021DB20(c); // 8021CB5C
  c->r[4]=R32(c->r[15]+0x00000058u); // 8021CB60
  cmps(c,0,(int32_t)c->r[4],0); // 8021CB64
  if (crb(c,2)) { goto L_8021DA54; } // 8021CB68
  c->r[23]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[23]); // 8021CB6C
  if (crb(c,2)) { goto L_8021CBB4; } // 8021CB70
  c->r[3]=R32(c->r[15]+0x00000050u); // 8021CB74
  c->r[0]=rotl(c->r[3],9)&0x000001E0u; // 8021CB78
  c->r[24]=rotl(c->r[3],4)&0x0000000Fu; // 8021CB7C
  c->r[25]=c->r[4]+c->r[0]; // 8021CB80
  goto L_8021CBA0; // 8021CB84
L_8021CB88:;
  c->r[3]=c->r[25]|c->r[25]; // 8021CB88
  c->r[4]=0u+0x00000000u; // 8021CB8C
  c->r[5]=0u+0x00000020u; // 8021CB90
  c->lr=0x8021CB98u; f_80004350(c); // 8021CB94
  c->r[25]=c->r[25]+0x00000020u; // 8021CB98
  c->r[24]=c->r[24]+0x00000001u; // 8021CB9C
L_8021CBA0:;
  cmpu(c,0,c->r[24],c->r[23]); // 8021CBA0
  if (crb(c,0)) { IRQCHK(c); goto L_8021CB88; } // 8021CBA4
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021CBA8
  c->r[0]=(rotl(c->r[18],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8021CBAC
  W32(c->r[15]+0x00000050u,c->r[0]); // 8021CBB0
L_8021CBB4:;
  c->r[0]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[0]); // 8021CBB4
  if (crb(c,2)) { goto L_8021CC48; } // 8021CBB8
  c->r[3]=R32(c->r[17]+0x00000000u); // 8021CBBC
  c->r[18]=0u+0x00000000u; // 8021CBC0
  c->r[25]=R32(c->r[15]+0x00000058u); // 8021CBC4
  c->r[31]=0u+0x74690000u; // 8021CBC8
  c->r[26]=c->r[3]+0x0000000Cu; // 8021CBCC
  goto L_8021CC34; // 8021CBD0
L_8021CBD4:;
  c->r[0]=rotl(c->r[18],2)&0x000003FCu; // 8021CBD4
  c->r[3]=R32(c->r[17]+0x0000000Cu); // 8021CBD8
  c->r[24]=c->r[21]+c->r[0]; // 8021CBDC
  c->r[0]=R16(c->r[21]+c->r[0]); // 8021CBE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021CBE4
  c->r[4]=c->r[31]+0x00006D67u; // 8021CBE8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021CBEC
  c->r[6]=0u+0x00000000u; // 8021CBF0
  c->r[0]=R32(c->r[26]+c->r[0]); // 8021CBF4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021CBF8
  c->r[5]=c->r[26]+c->r[0]; // 8021CBFC
  c->ctr=c->r[12]; // 8021CC00
  if (true) { c->lr=0x8021CC08u; dispatch(c,c->ctr); } // 8021CC04
  c->r[0]=R32(c->r[15]+0x00000058u); // 8021CC08
  c->r[23]=rotl(c->r[18],5)&0x00001FE0u; // 8021CC0C
  c->r[4]=c->r[3]|c->r[3]; // 8021CC10
  c->r[5]=0u+0x00000000u; // 8021CC14
  c->r[3]=c->r[0]+c->r[23]; // 8021CC18
  c->lr=0x8021CC20u; f_8021B3B0(c); // 8021CC1C
  c->r[4]=R8(c->r[24]+0x00000002u); // 8021CC20
  c->r[3]=c->r[25]+c->r[23]; // 8021CC24
  c->r[5]=R8(c->r[24]+0x00000003u); // 8021CC28
  c->lr=0x8021CC30u; f_8020A680(c); // 8021CC2C
  c->r[18]=c->r[18]+0x00000001u; // 8021CC30
L_8021CC34:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021CC34
  c->r[3]=rotl(c->r[18],0)&0x000000FFu; // 8021CC38
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8021CC3C
  cmpu(c,0,c->r[3],c->r[0]); // 8021CC40
  if (crb(c,0)) { IRQCHK(c); goto L_8021CBD4; } // 8021CC44
L_8021CC48:;
  c->r[0]=R32(c->r[15]+0x0000004Cu); // 8021CC48
  c->r[3]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[3]); // 8021CC4C
  c->r[4]=R32(c->r[15]+0x00000058u); // 8021CC50
  c->r[5]=c->r[20]|c->r[20]; // 8021CC54
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8021CC58
  c->r[4]=c->r[4]+c->r[0]; // 8021CC5C
  if (!crb(c,1)) { goto L_8021CD64; } // 8021CC60
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8021CC64
  c->ctr=c->r[0]; // 8021CC68
  if (crb(c,2)) { goto L_8021CD28; } // 8021CC6C
L_8021CC70:;
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC70
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8021CC74
  {uint32_t ea=c->r[20]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC78
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8021CC7C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC80
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8021CC84
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC88
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021CC8C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC90
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8021CC94
  {uint32_t ea=c->r[20]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CC98
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 8021CC9C
  {uint32_t ea=c->r[20]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCA0
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 8021CCA4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCA8
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021CCAC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCB0
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 8021CCB4
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCB8
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 8021CCBC
  {uint32_t ea=c->r[20]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCC0
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 8021CCC4
  {uint32_t ea=c->r[20]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCC8
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 8021CCCC
  {uint32_t ea=c->r[5]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCD0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 8021CCD4
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCD8
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 8021CCDC
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCE0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 8021CCE4
  {uint32_t ea=c->r[20]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCE8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 8021CCEC
  {uint32_t ea=c->r[20]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCF0
  c->r[20]=c->r[20]+0x00000050u; // 8021CCF4
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 8021CCF8
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CCFC
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 8021CD00
  {uint32_t ea=c->r[5]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD04
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 8021CD08
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD0C
  c->r[5]=c->r[5]+0x00000050u; // 8021CD10
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021CD14
  c->r[4]=c->r[4]+0x00000050u; // 8021CD18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021CC70; } // 8021CD1C
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8021CD20
  if (crb(c,2)) { goto L_8021CD64; } // 8021CD24
L_8021CD28:;
  c->ctr=c->r[3]; // 8021CD28
L_8021CD2C:;
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD2C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8021CD30
  {uint32_t ea=c->r[20]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD34
  c->r[20]=c->r[20]+0x00000014u; // 8021CD38
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8021CD3C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD40
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8021CD44
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD48
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021CD4C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021CD50
  c->r[5]=c->r[5]+0x00000014u; // 8021CD54
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8021CD58
  c->r[4]=c->r[4]+0x00000014u; // 8021CD5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021CD2C; } // 8021CD60
L_8021CD64:;
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 8021CD64
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[5]); // 8021CD68
  c->r[4]=R32(c->r[15]+0x00000058u); // 8021CD6C
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 8021CD70
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8021CD74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021CD78
  c->r[0]=c->r[4]+c->r[0]; // 8021CD7C
  c->r[3]=c->r[3]+c->r[0]; // 8021CD80
  if (crb(c,2)) { goto L_8021CEB8; } // 8021CD84
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021CD88
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 8021CD8C
  cmpu(c,1,c->r[4],c->r[5]); // 8021CD90
  if (!crb(c,4)) { goto L_8021CEAC; } // 8021CD94
  c->r[0]=c->r[5]-c->r[4]; // 8021CD98
  c->r[9]=c->r[5]+0xFFFFFFF8u; // 8021CD9C
  cmpu(c,0,c->r[0],0x00000008u); // 8021CDA0
  if (!crb(c,1)) { goto L_8021CE68; } // 8021CDA4
  if (crb(c,5)) { goto L_8021CE68; } // 8021CDA8
  c->r[0]=c->r[9]+0x00000007u; // 8021CDAC
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021CDB0
  c->r[0]=c->r[0]-c->r[4]; // 8021CDB4
  c->r[8]=0u+0x00000001u; // 8021CDB8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021CDBC
  c->r[10]=c->r[3]+c->r[5]; // 8021CDC0
  c->r[7]=0u+0x00000004u; // 8021CDC4
  c->r[6]=0u+0x0000003Cu; // 8021CDC8
  c->r[5]=0u+0x00000000u; // 8021CDCC
  c->ctr=c->r[0]; // 8021CDD0
  cmpu(c,0,c->r[4],c->r[9]); // 8021CDD4
  if (!crb(c,0)) { goto L_8021CE68; } // 8021CDD8
L_8021CDDC:;
  W8(c->r[10]+0x00000000u,c->r[8]); // 8021CDDC
  c->r[4]=c->r[4]+0x00000008u; // 8021CDE0
  W8(c->r[10]+0x00000001u,c->r[7]); // 8021CDE4
  W8(c->r[10]+0x00000002u,c->r[6]); // 8021CDE8
  W8(c->r[10]+0x00000003u,c->r[5]); // 8021CDEC
  W8(c->r[10]+0x00000004u,c->r[8]); // 8021CDF0
  W8(c->r[10]+0x00000005u,c->r[7]); // 8021CDF4
  W8(c->r[10]+0x00000006u,c->r[6]); // 8021CDF8
  W8(c->r[10]+0x00000007u,c->r[5]); // 8021CDFC
  W8(c->r[10]+0x00000008u,c->r[8]); // 8021CE00
  W8(c->r[10]+0x00000009u,c->r[7]); // 8021CE04
  W8(c->r[10]+0x0000000Au,c->r[6]); // 8021CE08
  W8(c->r[10]+0x0000000Bu,c->r[5]); // 8021CE0C
  W8(c->r[10]+0x0000000Cu,c->r[8]); // 8021CE10
  W8(c->r[10]+0x0000000Du,c->r[7]); // 8021CE14
  W8(c->r[10]+0x0000000Eu,c->r[6]); // 8021CE18
  W8(c->r[10]+0x0000000Fu,c->r[5]); // 8021CE1C
  W8(c->r[10]+0x00000010u,c->r[8]); // 8021CE20
  W8(c->r[10]+0x00000011u,c->r[7]); // 8021CE24
  W8(c->r[10]+0x00000012u,c->r[6]); // 8021CE28
  W8(c->r[10]+0x00000013u,c->r[5]); // 8021CE2C
  W8(c->r[10]+0x00000014u,c->r[8]); // 8021CE30
  W8(c->r[10]+0x00000015u,c->r[7]); // 8021CE34
  W8(c->r[10]+0x00000016u,c->r[6]); // 8021CE38
  W8(c->r[10]+0x00000017u,c->r[5]); // 8021CE3C
  W8(c->r[10]+0x00000018u,c->r[8]); // 8021CE40
  W8(c->r[10]+0x00000019u,c->r[7]); // 8021CE44
  W8(c->r[10]+0x0000001Au,c->r[6]); // 8021CE48
  W8(c->r[10]+0x0000001Bu,c->r[5]); // 8021CE4C
  W8(c->r[10]+0x0000001Cu,c->r[8]); // 8021CE50
  W8(c->r[10]+0x0000001Du,c->r[7]); // 8021CE54
  W8(c->r[10]+0x0000001Eu,c->r[6]); // 8021CE58
  W8(c->r[10]+0x0000001Fu,c->r[5]); // 8021CE5C
  c->r[10]=c->r[10]+0x00000020u; // 8021CE60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021CDDC; } // 8021CE64
L_8021CE68:;
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; // 8021CE68
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021CE6C
  c->r[0]=c->r[5]-c->r[4]; // 8021CE70
  c->r[9]=0u+0x00000001u; // 8021CE74
  c->r[10]=c->r[3]+c->r[6]; // 8021CE78
  c->r[8]=0u+0x00000004u; // 8021CE7C
  c->r[7]=0u+0x0000003Cu; // 8021CE80
  c->r[6]=0u+0x00000000u; // 8021CE84
  c->ctr=c->r[0]; // 8021CE88
  cmpu(c,0,c->r[4],c->r[5]); // 8021CE8C
  if (!crb(c,0)) { goto L_8021CEAC; } // 8021CE90
L_8021CE94:;
  W8(c->r[10]+0x00000000u,c->r[9]); // 8021CE94
  W8(c->r[10]+0x00000001u,c->r[8]); // 8021CE98
  W8(c->r[10]+0x00000002u,c->r[7]); // 8021CE9C
  W8(c->r[10]+0x00000003u,c->r[6]); // 8021CEA0
  c->r[10]=c->r[10]+0x00000004u; // 8021CEA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021CE94; } // 8021CEA8
L_8021CEAC:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021CEAC
  c->r[0]=(rotl(c->r[27],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 8021CEB0
  W32(c->r[15]+0x00000050u,c->r[0]); // 8021CEB4
L_8021CEB8:;
  c->r[4]=0u+0x00000000u; // 8021CEB8
  goto L_8021CEEC; // 8021CEBC
L_8021CEC0:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 8021CEC0
  c->r[4]=c->r[4]+0x00000001u; // 8021CEC4
  W8(c->r[3]+0x00000000u,c->r[0]); // 8021CEC8
  c->r[0]=R8(c->r[19]+0x00000001u); // 8021CECC
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021CED0
  c->r[0]=R8(c->r[19]+0x00000002u); // 8021CED4
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021CED8
  c->r[0]=R8(c->r[19]+0x00000003u); // 8021CEDC
  c->r[19]=c->r[19]+0x00000004u; // 8021CEE0
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021CEE4
  c->r[3]=c->r[3]+0x00000004u; // 8021CEE8
L_8021CEEC:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021CEEC
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 8021CEF0
  cmpu(c,0,c->r[4],c->r[0]); // 8021CEF4
  if (crb(c,0)) { IRQCHK(c); goto L_8021CEC0; } // 8021CEF8
  c->r[0]=R8(c->r[1]+0x00000029u); // 8021CEFC
  cmps(c,0,(int32_t)c->r[0],0); // 8021CF00
  if (crb(c,2)) { goto L_8021CF50; } // 8021CF04
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 8021CF08
  c->r[7]=c->r[16]+c->r[22]; // 8021CF0C
  c->r[6]=R32(c->r[15]+0x00000058u); // 8021CF10
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 8021CF14
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 8021CF18
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021CF1C
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 8021CF20
  c->r[0]=R8(c->r[16]+c->r[22]); // 8021CF24
  c->r[22]=c->r[22]+0x00000004u; // 8021CF28
  c->r[4]=c->r[5]+c->r[4]; // 8021CF2C
  c->r[3]=c->r[6]+c->r[3]; // 8021CF30
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 8021CF34
  c->r[0]=R8(c->r[7]+0x00000001u); // 8021CF38
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021CF3C
  c->r[0]=R8(c->r[7]+0x00000002u); // 8021CF40
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021CF44
  c->r[0]=R8(c->r[7]+0x00000003u); // 8021CF48
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021CF4C
L_8021CF50:;
  c->r[0]=R8(c->r[1]+0x00000028u); // 8021CF50
  cmps(c,0,(int32_t)c->r[0],0); // 8021CF54
  if (crb(c,2)) { goto L_8021CFAC; } // 8021CF58
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 8021CF5C
  c->r[8]=c->r[16]+c->r[22]; // 8021CF60
  c->r[7]=R32(c->r[15]+0x00000058u); // 8021CF64
  c->r[0]=rotl(c->r[6],8)&0x0000000Fu; // 8021CF68
  c->r[5]=rotl(c->r[6],14)&0x0000003Cu; // 8021CF6C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021CF70
  c->r[3]=rotl(c->r[6],9)&0x000001E0u; // 8021CF74
  c->r[6]=rotl(c->r[6],26)&0x00000004u; // 8021CF78
  c->r[0]=R8(c->r[16]+c->r[22]); // 8021CF7C
  c->r[3]=c->r[5]+c->r[3]; // 8021CF80
  c->r[4]=c->r[6]+c->r[4]; // 8021CF84
  c->r[3]=c->r[7]+c->r[3]; // 8021CF88
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 8021CF8C
  c->r[22]=c->r[22]+0x00000004u; // 8021CF90
  c->r[0]=R8(c->r[8]+0x00000001u); // 8021CF94
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021CF98
  c->r[0]=R8(c->r[8]+0x00000002u); // 8021CF9C
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021CFA0
  c->r[0]=R8(c->r[8]+0x00000003u); // 8021CFA4
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021CFA8
L_8021CFAC:;
  c->r[0]=R8(c->r[1]+0x0000002Cu); // 8021CFAC
  cmps(c,0,(int32_t)c->r[0],0); // 8021CFB0
  if (crb(c,2)) { goto L_8021D010; } // 8021CFB4
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 8021CFB8
  c->r[9]=c->r[16]+c->r[22]; // 8021CFBC
  c->r[8]=R32(c->r[15]+0x00000058u); // 8021CFC0
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 8021CFC4
  c->r[7]=rotl(c->r[3],27)&0x00000004u; // 8021CFC8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021CFCC
  c->r[0]=R8(c->r[16]+c->r[22]); // 8021CFD0
  c->r[6]=rotl(c->r[3],26)&0x00000004u; // 8021CFD4
  c->r[4]=rotl(c->r[3],14)&0x0000003Cu; // 8021CFD8
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8021CFDC
  c->r[22]=c->r[22]+0x00000004u; // 8021CFE0
  c->r[4]=c->r[4]+c->r[3]; // 8021CFE4
  c->r[3]=c->r[7]+c->r[6]; // 8021CFE8
  c->r[4]=c->r[5]+c->r[4]; // 8021CFEC
  c->r[3]=c->r[8]+c->r[3]; // 8021CFF0
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 8021CFF4
  c->r[0]=R8(c->r[9]+0x00000001u); // 8021CFF8
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021CFFC
  c->r[0]=R8(c->r[9]+0x00000002u); // 8021D000
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021D004
  c->r[0]=R8(c->r[9]+0x00000003u); // 8021D008
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021D00C
L_8021D010:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 8021D010
  cmps(c,1,(int32_t)c->r[3],0); // 8021D014
  if (crb(c,6)) { goto L_8021D26C; } // 8021D018
  c->r[12]=R32(c->r[15]+0x0000004Cu); // 8021D01C
  c->r[5]=c->r[16]+c->r[22]; // 8021D020
  c->r[17]=R32(c->r[15]+0x00000058u); // 8021D024
  c->r[6]=0u+0x00000000u; // 8021D028
  c->r[0]=rotl(c->r[12],8)&0x0000000Fu; // 8021D02C
  c->r[11]=rotl(c->r[12],28)&0x00000004u; // 8021D030
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021D034
  c->r[9]=rotl(c->r[12],26)&0x00000004u; // 8021D038
  c->r[10]=rotl(c->r[12],20)&0x00000004u; // 8021D03C
  c->r[8]=rotl(c->r[12],27)&0x00000004u; // 8021D040
  c->r[7]=rotl(c->r[12],14)&0x0000003Cu; // 8021D044
  c->r[0]=rotl(c->r[12],9)&0x000001E0u; // 8021D048
  c->r[0]=c->r[7]+c->r[0]; // 8021D04C
  c->r[14]=rotl(c->r[12],19)&0x0000001Cu; // 8021D050
  c->r[12]=rotl(c->r[12],29)&0x00000004u; // 8021D054
  c->r[8]=c->r[10]+c->r[8]; // 8021D058
  c->r[7]=c->r[11]+c->r[9]; // 8021D05C
  c->r[4]=c->r[4]+c->r[0]; // 8021D060
  c->r[7]=c->r[8]+c->r[7]; // 8021D064
  c->r[0]=c->r[14]+c->r[12]; // 8021D068
  c->r[4]=c->r[7]+c->r[4]; // 8021D06C
  c->r[0]=c->r[17]+c->r[0]; // 8021D070
  c->r[0]=c->r[4]+c->r[0]; // 8021D074
  if (!crb(c,5)) { goto L_8021D26C; } // 8021D078
  cmps(c,0,(int32_t)c->r[3],8); // 8021D07C
  c->r[8]=c->r[3]+0xFFFFFFF8u; // 8021D080
  if (!crb(c,1)) { goto L_8021D218; } // 8021D084
  c->r[7]=0u+0x00000000u; // 8021D088
  if (crb(c,4)) { goto L_8021D0A4; } // 8021D08C
  c->r[4]=0u+0x80000000u; // 8021D090
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 8021D094
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 8021D098
  if (crb(c,1)) { goto L_8021D0A4; } // 8021D09C
  c->r[7]=0u+0x00000001u; // 8021D0A0
L_8021D0A4:;
  cmps(c,0,(int32_t)c->r[7],0); // 8021D0A4
  if (crb(c,2)) { goto L_8021D218; } // 8021D0A8
  c->r[7]=c->r[8]+0x00000007u; // 8021D0AC
  c->r[3]=c->r[5]|c->r[5]; // 8021D0B0
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 8021D0B4
  c->r[4]=c->r[0]|c->r[0]; // 8021D0B8
  c->ctr=c->r[7]; // 8021D0BC
  cmps(c,0,(int32_t)c->r[8],0); // 8021D0C0
  if (!crb(c,1)) { goto L_8021D218; } // 8021D0C4
L_8021D0C8:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 8021D0C8
  c->r[6]=c->r[6]+0x00000008u; // 8021D0CC
  c->r[8]=R32(c->r[3]+0x00000000u); // 8021D0D0
  W32(c->r[4]+0x00000000u,c->r[8]); // 8021D0D4
  W32(c->r[4]+0x00000004u,c->r[7]); // 8021D0D8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D0DC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8021D0E0
  c->r[7]=R32(c->r[3]+0x00000010u); // 8021D0E4
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 8021D0E8
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 8021D0EC
  W32(c->r[4]+0x00000010u,c->r[7]); // 8021D0F0
  c->r[7]=R32(c->r[3]+0x00000018u); // 8021D0F4
  c->r[8]=R32(c->r[3]+0x00000014u); // 8021D0F8
  W32(c->r[4]+0x00000014u,c->r[8]); // 8021D0FC
  W32(c->r[4]+0x00000018u,c->r[7]); // 8021D100
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D104
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021D108
  c->r[7]=R32(c->r[3]+0x00000024u); // 8021D10C
  c->r[8]=R32(c->r[3]+0x00000020u); // 8021D110
  W32(c->r[4]+0x00000020u,c->r[8]); // 8021D114
  W32(c->r[4]+0x00000024u,c->r[7]); // 8021D118
  c->r[7]=R32(c->r[3]+0x0000002Cu); // 8021D11C
  c->r[8]=R32(c->r[3]+0x00000028u); // 8021D120
  W32(c->r[4]+0x00000028u,c->r[8]); // 8021D124
  W32(c->r[4]+0x0000002Cu,c->r[7]); // 8021D128
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D12C
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 8021D130
  c->r[7]=R32(c->r[3]+0x00000038u); // 8021D134
  c->r[8]=R32(c->r[3]+0x00000034u); // 8021D138
  W32(c->r[4]+0x00000034u,c->r[8]); // 8021D13C
  W32(c->r[4]+0x00000038u,c->r[7]); // 8021D140
  c->r[7]=R32(c->r[3]+0x00000040u); // 8021D144
  c->r[8]=R32(c->r[3]+0x0000003Cu); // 8021D148
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 8021D14C
  W32(c->r[4]+0x00000040u,c->r[7]); // 8021D150
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D154
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 8021D158
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8021D15C
  c->r[8]=R32(c->r[3]+0x00000048u); // 8021D160
  W32(c->r[4]+0x00000048u,c->r[8]); // 8021D164
  W32(c->r[4]+0x0000004Cu,c->r[7]); // 8021D168
  c->r[7]=R32(c->r[3]+0x00000054u); // 8021D16C
  c->r[8]=R32(c->r[3]+0x00000050u); // 8021D170
  W32(c->r[4]+0x00000050u,c->r[8]); // 8021D174
  W32(c->r[4]+0x00000054u,c->r[7]); // 8021D178
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D17C
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 8021D180
  c->r[7]=R32(c->r[3]+0x00000060u); // 8021D184
  c->r[8]=R32(c->r[3]+0x0000005Cu); // 8021D188
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 8021D18C
  W32(c->r[4]+0x00000060u,c->r[7]); // 8021D190
  c->r[7]=R32(c->r[3]+0x00000068u); // 8021D194
  c->r[8]=R32(c->r[3]+0x00000064u); // 8021D198
  W32(c->r[4]+0x00000064u,c->r[8]); // 8021D19C
  W32(c->r[4]+0x00000068u,c->r[7]); // 8021D1A0
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D1A4
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 8021D1A8
  c->r[7]=R32(c->r[3]+0x00000074u); // 8021D1AC
  c->r[8]=R32(c->r[3]+0x00000070u); // 8021D1B0
  W32(c->r[4]+0x00000070u,c->r[8]); // 8021D1B4
  W32(c->r[4]+0x00000074u,c->r[7]); // 8021D1B8
  c->r[7]=R32(c->r[3]+0x0000007Cu); // 8021D1BC
  c->r[8]=R32(c->r[3]+0x00000078u); // 8021D1C0
  W32(c->r[4]+0x00000078u,c->r[8]); // 8021D1C4
  W32(c->r[4]+0x0000007Cu,c->r[7]); // 8021D1C8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D1CC
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 8021D1D0
  c->r[7]=R32(c->r[3]+0x00000088u); // 8021D1D4
  c->r[8]=R32(c->r[3]+0x00000084u); // 8021D1D8
  W32(c->r[4]+0x00000084u,c->r[8]); // 8021D1DC
  W32(c->r[4]+0x00000088u,c->r[7]); // 8021D1E0
  c->r[7]=R32(c->r[3]+0x00000090u); // 8021D1E4
  c->r[8]=R32(c->r[3]+0x0000008Cu); // 8021D1E8
  W32(c->r[4]+0x0000008Cu,c->r[8]); // 8021D1EC
  W32(c->r[4]+0x00000090u,c->r[7]); // 8021D1F0
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D1F4
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 8021D1F8
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 8021D1FC
  c->r[8]=R32(c->r[3]+0x00000098u); // 8021D200
  c->r[3]=c->r[3]+0x000000A0u; // 8021D204
  W32(c->r[4]+0x00000098u,c->r[8]); // 8021D208
  W32(c->r[4]+0x0000009Cu,c->r[7]); // 8021D20C
  c->r[4]=c->r[4]+0x000000A0u; // 8021D210
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D0C8; } // 8021D214
L_8021D218:;
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 8021D218
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 8021D21C
  c->r[3]=c->r[4]-c->r[6]; // 8021D220
  c->r[5]=c->r[5]+c->r[7]; // 8021D224
  c->r[7]=c->r[0]+c->r[7]; // 8021D228
  c->ctr=c->r[3]; // 8021D22C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8021D230
  if (!crb(c,0)) { goto L_8021D26C; } // 8021D234
L_8021D238:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021D238
  c->r[3]=R32(c->r[5]+0x00000000u); // 8021D23C
  W32(c->r[7]+0x00000000u,c->r[3]); // 8021D240
  W32(c->r[7]+0x00000004u,c->r[0]); // 8021D244
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021D248
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 8021D24C
  c->r[0]=R32(c->r[5]+0x00000010u); // 8021D250
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8021D254
  c->r[5]=c->r[5]+0x00000014u; // 8021D258
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 8021D25C
  W32(c->r[7]+0x00000010u,c->r[0]); // 8021D260
  c->r[7]=c->r[7]+0x00000014u; // 8021D264
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D238; } // 8021D268
L_8021D26C:;
  c->r[0]=R32(c->r[16]+0x0000003Cu); // 8021D26C
  c->r[12]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[12]); // 8021D270
  c->r[0]=rotl(c->r[0],19)&0x00000003u; // 8021D274
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021D278
  c->r[22]=c->r[22]+c->r[0]; // 8021D27C
  if (crb(c,2)) { goto L_8021D5F0; } // 8021D280
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 8021D284
  c->r[0]=R32(c->r[15]+0x00000050u); // 8021D288
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 8021D28C
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 8021D290
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8021D294
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 8021D298
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 8021D29C
  c->r[11]=R32(c->r[15]+0x00000058u); // 8021D2A0
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 8021D2A4
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 8021D2A8
  c->r[5]=rotl(c->r[10],14)&0x0000003Cu; // 8021D2AC
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 8021D2B0
  c->r[0]=c->r[5]+c->r[0]; // 8021D2B4
  c->r[6]=c->r[8]+c->r[6]; // 8021D2B8
  c->r[5]=c->r[9]+c->r[7]; // 8021D2BC
  cmpu(c,1,c->r[3],c->r[12]); // 8021D2C0
  c->r[0]=c->r[4]+c->r[0]; // 8021D2C4
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 8021D2C8
  c->r[4]=c->r[6]+c->r[5]; // 8021D2CC
  c->r[4]=c->r[7]+c->r[4]; // 8021D2D0
  c->r[0]=c->r[11]+c->r[0]; // 8021D2D4
  c->r[7]=c->r[4]+c->r[0]; // 8021D2D8
  if (!crb(c,4)) { goto L_8021D3DC; } // 8021D2DC
  c->r[0]=c->r[12]-c->r[3]; // 8021D2E0
  c->r[6]=c->r[12]+0xFFFFFFF8u; // 8021D2E4
  cmpu(c,0,c->r[0],0x00000008u); // 8021D2E8
  if (!crb(c,1)) { goto L_8021D3A4; } // 8021D2EC
  if (crb(c,5)) { goto L_8021D3A4; } // 8021D2F0
  c->r[0]=c->r[6]+0x00000007u; // 8021D2F4
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021D2F8
  c->r[0]=c->r[0]-c->r[3]; // 8021D2FC
  c->r[4]=0u+0x00000000u; // 8021D300
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021D304
  c->r[5]=c->r[7]+c->r[5]; // 8021D308
  c->ctr=c->r[0]; // 8021D30C
  cmpu(c,0,c->r[3],c->r[6]); // 8021D310
  if (!crb(c,0)) { goto L_8021D3A4; } // 8021D314
L_8021D318:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 8021D318
  c->r[3]=c->r[3]+0x00000008u; // 8021D31C
  W8(c->r[5]+0x00000001u,c->r[4]); // 8021D320
  W8(c->r[5]+0x00000002u,c->r[4]); // 8021D324
  W8(c->r[5]+0x00000003u,c->r[4]); // 8021D328
  W8(c->r[5]+0x00000004u,c->r[4]); // 8021D32C
  W8(c->r[5]+0x00000005u,c->r[4]); // 8021D330
  W8(c->r[5]+0x00000006u,c->r[4]); // 8021D334
  W8(c->r[5]+0x00000007u,c->r[4]); // 8021D338
  W8(c->r[5]+0x00000008u,c->r[4]); // 8021D33C
  W8(c->r[5]+0x00000009u,c->r[4]); // 8021D340
  W8(c->r[5]+0x0000000Au,c->r[4]); // 8021D344
  W8(c->r[5]+0x0000000Bu,c->r[4]); // 8021D348
  W8(c->r[5]+0x0000000Cu,c->r[4]); // 8021D34C
  W8(c->r[5]+0x0000000Du,c->r[4]); // 8021D350
  W8(c->r[5]+0x0000000Eu,c->r[4]); // 8021D354
  W8(c->r[5]+0x0000000Fu,c->r[4]); // 8021D358
  W8(c->r[5]+0x00000010u,c->r[4]); // 8021D35C
  W8(c->r[5]+0x00000011u,c->r[4]); // 8021D360
  W8(c->r[5]+0x00000012u,c->r[4]); // 8021D364
  W8(c->r[5]+0x00000013u,c->r[4]); // 8021D368
  W8(c->r[5]+0x00000014u,c->r[4]); // 8021D36C
  W8(c->r[5]+0x00000015u,c->r[4]); // 8021D370
  W8(c->r[5]+0x00000016u,c->r[4]); // 8021D374
  W8(c->r[5]+0x00000017u,c->r[4]); // 8021D378
  W8(c->r[5]+0x00000018u,c->r[4]); // 8021D37C
  W8(c->r[5]+0x00000019u,c->r[4]); // 8021D380
  W8(c->r[5]+0x0000001Au,c->r[4]); // 8021D384
  W8(c->r[5]+0x0000001Bu,c->r[4]); // 8021D388
  W8(c->r[5]+0x0000001Cu,c->r[4]); // 8021D38C
  W8(c->r[5]+0x0000001Du,c->r[4]); // 8021D390
  W8(c->r[5]+0x0000001Eu,c->r[4]); // 8021D394
  W8(c->r[5]+0x0000001Fu,c->r[4]); // 8021D398
  c->r[5]=c->r[5]+0x00000020u; // 8021D39C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D318; } // 8021D3A0
L_8021D3A4:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8021D3A4
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021D3A8
  c->r[0]=c->r[4]-c->r[3]; // 8021D3AC
  c->r[5]=0u+0x00000000u; // 8021D3B0
  c->r[6]=c->r[7]+c->r[6]; // 8021D3B4
  c->ctr=c->r[0]; // 8021D3B8
  cmpu(c,0,c->r[3],c->r[4]); // 8021D3BC
  if (!crb(c,0)) { goto L_8021D3DC; } // 8021D3C0
L_8021D3C4:;
  W8(c->r[6]+0x00000000u,c->r[5]); // 8021D3C4
  W8(c->r[6]+0x00000001u,c->r[5]); // 8021D3C8
  W8(c->r[6]+0x00000002u,c->r[5]); // 8021D3CC
  W8(c->r[6]+0x00000003u,c->r[5]); // 8021D3D0
  c->r[6]=c->r[6]+0x00000004u; // 8021D3D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D3C4; } // 8021D3D8
L_8021D3DC:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 8021D3DC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8021D3E0
  c->r[5]=R32(c->r[15]+0x00000050u); // 8021D3E4
  c->r[5]=(rotl(c->r[29],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 8021D3E8
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 8021D3EC
  W32(c->r[15]+0x00000050u,c->r[5]); // 8021D3F0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021D3F4
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 8021D3F8
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 8021D3FC
  c->r[11]=R32(c->r[15]+0x00000058u); // 8021D400
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 8021D404
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 8021D408
  c->r[5]=rotl(c->r[10],14)&0x0000003Cu; // 8021D40C
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 8021D410
  c->r[0]=c->r[5]+c->r[0]; // 8021D414
  c->r[6]=c->r[8]+c->r[6]; // 8021D418
  c->r[5]=c->r[9]+c->r[7]; // 8021D41C
  cmps(c,1,(int32_t)c->r[4],0); // 8021D420
  c->r[0]=c->r[3]+c->r[0]; // 8021D424
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 8021D428
  c->r[3]=c->r[6]+c->r[5]; // 8021D42C
  c->r[5]=c->r[16]+c->r[22]; // 8021D430
  c->r[3]=c->r[7]+c->r[3]; // 8021D434
  c->r[0]=c->r[11]+c->r[0]; // 8021D438
  c->r[0]=c->r[3]+c->r[0]; // 8021D43C
  c->r[6]=0u+0x00000000u; // 8021D440
  if (!crb(c,5)) { goto L_8021D5F0; } // 8021D444
  cmps(c,0,(int32_t)c->r[4],8); // 8021D448
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 8021D44C
  if (!crb(c,1)) { goto L_8021D5A4; } // 8021D450
  c->r[7]=0u+0x00000000u; // 8021D454
  if (crb(c,4)) { goto L_8021D470; } // 8021D458
  c->r[3]=0u+0x80000000u; // 8021D45C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 8021D460
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 8021D464
  if (crb(c,1)) { goto L_8021D470; } // 8021D468
  c->r[7]=0u+0x00000001u; // 8021D46C
L_8021D470:;
  cmps(c,0,(int32_t)c->r[7],0); // 8021D470
  if (crb(c,2)) { goto L_8021D5A4; } // 8021D474
  c->r[7]=c->r[8]+0x00000007u; // 8021D478
  c->r[3]=c->r[5]|c->r[5]; // 8021D47C
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 8021D480
  c->r[4]=c->r[0]|c->r[0]; // 8021D484
  c->ctr=c->r[7]; // 8021D488
  cmps(c,0,(int32_t)c->r[8],0); // 8021D48C
  if (!crb(c,1)) { goto L_8021D5A4; } // 8021D490
L_8021D494:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 8021D494
  c->r[6]=c->r[6]+0x00000008u; // 8021D498
  W8(c->r[4]+0x00000000u,c->r[7]); // 8021D49C
  c->r[7]=R8(c->r[3]+0x00000001u); // 8021D4A0
  W8(c->r[4]+0x00000001u,c->r[7]); // 8021D4A4
  c->r[7]=R8(c->r[3]+0x00000002u); // 8021D4A8
  W8(c->r[4]+0x00000002u,c->r[7]); // 8021D4AC
  c->r[7]=R8(c->r[3]+0x00000003u); // 8021D4B0
  W8(c->r[4]+0x00000003u,c->r[7]); // 8021D4B4
  c->r[7]=R8(c->r[3]+0x00000004u); // 8021D4B8
  W8(c->r[4]+0x00000004u,c->r[7]); // 8021D4BC
  c->r[7]=R8(c->r[3]+0x00000005u); // 8021D4C0
  W8(c->r[4]+0x00000005u,c->r[7]); // 8021D4C4
  c->r[7]=R8(c->r[3]+0x00000006u); // 8021D4C8
  W8(c->r[4]+0x00000006u,c->r[7]); // 8021D4CC
  c->r[7]=R8(c->r[3]+0x00000007u); // 8021D4D0
  W8(c->r[4]+0x00000007u,c->r[7]); // 8021D4D4
  c->r[7]=R8(c->r[3]+0x00000008u); // 8021D4D8
  W8(c->r[4]+0x00000008u,c->r[7]); // 8021D4DC
  c->r[7]=R8(c->r[3]+0x00000009u); // 8021D4E0
  W8(c->r[4]+0x00000009u,c->r[7]); // 8021D4E4
  c->r[7]=R8(c->r[3]+0x0000000Au); // 8021D4E8
  W8(c->r[4]+0x0000000Au,c->r[7]); // 8021D4EC
  c->r[7]=R8(c->r[3]+0x0000000Bu); // 8021D4F0
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 8021D4F4
  c->r[7]=R8(c->r[3]+0x0000000Cu); // 8021D4F8
  W8(c->r[4]+0x0000000Cu,c->r[7]); // 8021D4FC
  c->r[7]=R8(c->r[3]+0x0000000Du); // 8021D500
  W8(c->r[4]+0x0000000Du,c->r[7]); // 8021D504
  c->r[7]=R8(c->r[3]+0x0000000Eu); // 8021D508
  W8(c->r[4]+0x0000000Eu,c->r[7]); // 8021D50C
  c->r[7]=R8(c->r[3]+0x0000000Fu); // 8021D510
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 8021D514
  c->r[7]=R8(c->r[3]+0x00000010u); // 8021D518
  W8(c->r[4]+0x00000010u,c->r[7]); // 8021D51C
  c->r[7]=R8(c->r[3]+0x00000011u); // 8021D520
  W8(c->r[4]+0x00000011u,c->r[7]); // 8021D524
  c->r[7]=R8(c->r[3]+0x00000012u); // 8021D528
  W8(c->r[4]+0x00000012u,c->r[7]); // 8021D52C
  c->r[7]=R8(c->r[3]+0x00000013u); // 8021D530
  W8(c->r[4]+0x00000013u,c->r[7]); // 8021D534
  c->r[7]=R8(c->r[3]+0x00000014u); // 8021D538
  W8(c->r[4]+0x00000014u,c->r[7]); // 8021D53C
  c->r[7]=R8(c->r[3]+0x00000015u); // 8021D540
  W8(c->r[4]+0x00000015u,c->r[7]); // 8021D544
  c->r[7]=R8(c->r[3]+0x00000016u); // 8021D548
  W8(c->r[4]+0x00000016u,c->r[7]); // 8021D54C
  c->r[7]=R8(c->r[3]+0x00000017u); // 8021D550
  W8(c->r[4]+0x00000017u,c->r[7]); // 8021D554
  c->r[7]=R8(c->r[3]+0x00000018u); // 8021D558
  W8(c->r[4]+0x00000018u,c->r[7]); // 8021D55C
  c->r[7]=R8(c->r[3]+0x00000019u); // 8021D560
  W8(c->r[4]+0x00000019u,c->r[7]); // 8021D564
  c->r[7]=R8(c->r[3]+0x0000001Au); // 8021D568
  W8(c->r[4]+0x0000001Au,c->r[7]); // 8021D56C
  c->r[7]=R8(c->r[3]+0x0000001Bu); // 8021D570
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 8021D574
  c->r[7]=R8(c->r[3]+0x0000001Cu); // 8021D578
  W8(c->r[4]+0x0000001Cu,c->r[7]); // 8021D57C
  c->r[7]=R8(c->r[3]+0x0000001Du); // 8021D580
  W8(c->r[4]+0x0000001Du,c->r[7]); // 8021D584
  c->r[7]=R8(c->r[3]+0x0000001Eu); // 8021D588
  W8(c->r[4]+0x0000001Eu,c->r[7]); // 8021D58C
  c->r[7]=R8(c->r[3]+0x0000001Fu); // 8021D590
  c->r[3]=c->r[3]+0x00000020u; // 8021D594
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 8021D598
  c->r[4]=c->r[4]+0x00000020u; // 8021D59C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D494; } // 8021D5A0
L_8021D5A4:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8021D5A4
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8021D5A8
  c->r[3]=c->r[4]-c->r[6]; // 8021D5AC
  c->r[5]=c->r[5]+c->r[7]; // 8021D5B0
  c->r[7]=c->r[0]+c->r[7]; // 8021D5B4
  c->ctr=c->r[3]; // 8021D5B8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8021D5BC
  if (!crb(c,0)) { goto L_8021D5F0; } // 8021D5C0
L_8021D5C4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8021D5C4
  W8(c->r[7]+0x00000000u,c->r[0]); // 8021D5C8
  c->r[0]=R8(c->r[5]+0x00000001u); // 8021D5CC
  W8(c->r[7]+0x00000001u,c->r[0]); // 8021D5D0
  c->r[0]=R8(c->r[5]+0x00000002u); // 8021D5D4
  W8(c->r[7]+0x00000002u,c->r[0]); // 8021D5D8
  c->r[0]=R8(c->r[5]+0x00000003u); // 8021D5DC
  c->r[5]=c->r[5]+0x00000004u; // 8021D5E0
  W8(c->r[7]+0x00000003u,c->r[0]); // 8021D5E4
  c->r[7]=c->r[7]+0x00000004u; // 8021D5E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D5C4; } // 8021D5EC
L_8021D5F0:;
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 8021D5F0
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[0]); // 8021D5F4
  c->r[3]=rotl(c->r[3],19)&0x0000001Cu; // 8021D5F8
  c->r[22]=c->r[22]+c->r[3]; // 8021D5FC
  if (crb(c,2)) { goto L_8021D96C; } // 8021D600
  c->r[11]=R32(c->r[15]+0x0000004Cu); // 8021D604
  c->r[3]=R32(c->r[15]+0x00000050u); // 8021D608
  c->r[5]=rotl(c->r[11],14)&0x00000003u; // 8021D60C
  c->r[4]=rotl(c->r[11],8)&0x0000000Fu; // 8021D610
  c->r[4]=c->r[5]+c->r[4]; // 8021D614
  c->r[3]=rotl(c->r[3],23)&0x0000001Fu; // 8021D618
  c->r[10]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8021D61C
  c->r[6]=rotl(c->r[11],27)&0x00000004u; // 8021D620
  c->r[4]=rotl(c->r[11],20)&0x00000004u; // 8021D624
  c->r[12]=R32(c->r[15]+0x00000058u); // 8021D628
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 8021D62C
  c->r[4]=c->r[6]+c->r[4]; // 8021D630
  c->r[5]=rotl(c->r[11],28)&0x00000004u; // 8021D634
  c->r[6]=c->r[10]+c->r[7]; // 8021D638
  c->r[9]=rotl(c->r[11],9)&0x000001E0u; // 8021D63C
  c->r[8]=rotl(c->r[11],14)&0x0000003Cu; // 8021D640
  c->r[8]=c->r[9]+c->r[8]; // 8021D644
  c->r[5]=c->r[5]+c->r[4]; // 8021D648
  c->r[4]=c->r[8]+c->r[6]; // 8021D64C
  c->r[7]=rotl(c->r[11],29)&0x00000004u; // 8021D650
  cmpu(c,0,c->r[3],c->r[0]); // 8021D654
  c->r[6]=rotl(c->r[11],19)&0x0000001Cu; // 8021D658
  c->r[5]=c->r[7]+c->r[5]; // 8021D65C
  c->r[4]=c->r[12]+c->r[4]; // 8021D660
  c->r[5]=c->r[6]+c->r[5]; // 8021D664
  c->r[14]=c->r[5]+c->r[4]; // 8021D668
  if (!crb(c,0)) { goto L_8021D7D8; } // 8021D66C
  c->r[10]=0u+0x00000000u; // 8021D670
  c->r[12]=0u+0x000000FFu; // 8021D674
  c->r[4]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8021D678
  c->r[9]=0u+0x000000AFu; // 8021D67C
  c->r[8]=0u+0x00000077u; // 8021D680
  c->r[7]=0u+0x00000057u; // 8021D684
  c->r[6]=0u+0x00000061u; // 8021D688
  c->r[5]=0u+0x00000081u; // 8021D68C
  c->r[11]=0u+0x00000004u; // 8021D690
  W8(c->r[1]+0x0000001Cu,c->r[12]); // 8021D694
  c->r[14]=c->r[14]+c->r[4]; // 8021D698
  c->r[3]=c->r[0]-c->r[3]; // 8021D69C
  W8(c->r[1]+0x0000001Du,c->r[9]); // 8021D6A0
  W8(c->r[1]+0x00000020u,c->r[8]); // 8021D6A4
  W8(c->r[1]+0x00000021u,c->r[7]); // 8021D6A8
  W8(c->r[1]+0x0000001Eu,c->r[10]); // 8021D6AC
  W8(c->r[1]+0x0000001Fu,c->r[6]); // 8021D6B0
  W8(c->r[1]+0x00000022u,c->r[10]); // 8021D6B4
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8021D6B8
  W8(c->r[1]+0x00000023u,c->r[5]); // 8021D6BC
  W8(c->r[1]+0x00000018u,c->r[12]); // 8021D6C0
  c->r[5]=R32(c->r[1]+0x00000020u); // 8021D6C4
  W8(c->r[1]+0x00000019u,c->r[11]); // 8021D6C8
  W8(c->r[1]+0x0000001Au,c->r[12]); // 8021D6CC
  W8(c->r[1]+0x0000001Bu,c->r[10]); // 8021D6D0
  W8(c->r[1]+0x00000024u,c->r[10]); // 8021D6D4
  W8(c->r[1]+0x00000025u,c->r[10]); // 8021D6D8
  W8(c->r[1]+0x00000026u,c->r[10]); // 8021D6DC
  W8(c->r[1]+0x00000027u,c->r[10]); // 8021D6E0
  if (!crb(c,0)) { goto L_8021D7D8; } // 8021D6E4
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8021D6E8
  c->ctr=c->r[0]; // 8021D6EC
  if (crb(c,2)) { goto L_8021D7A4; } // 8021D6F0
L_8021D6F4:;
  W8(c->r[14]+0x00000000u,c->r[12]); // 8021D6F4
  W8(c->r[14]+0x00000001u,c->r[11]); // 8021D6F8
  W8(c->r[14]+0x00000002u,c->r[12]); // 8021D6FC
  W8(c->r[14]+0x00000003u,c->r[10]); // 8021D700
  W32(c->r[14]+0x00000004u,c->r[4]); // 8021D704
  W32(c->r[14]+0x00000008u,c->r[5]); // 8021D708
  W8(c->r[14]+0x0000000Cu,c->r[10]); // 8021D70C
  W8(c->r[14]+0x0000000Du,c->r[10]); // 8021D710
  W8(c->r[14]+0x0000000Eu,c->r[10]); // 8021D714
  W8(c->r[14]+0x0000000Fu,c->r[10]); // 8021D718
  W8(c->r[14]+0x00000010u,c->r[12]); // 8021D71C
  W8(c->r[14]+0x00000011u,c->r[11]); // 8021D720
  W8(c->r[14]+0x00000012u,c->r[12]); // 8021D724
  W8(c->r[14]+0x00000013u,c->r[10]); // 8021D728
  W32(c->r[14]+0x00000014u,c->r[4]); // 8021D72C
  W32(c->r[14]+0x00000018u,c->r[5]); // 8021D730
  W8(c->r[14]+0x0000001Cu,c->r[10]); // 8021D734
  W8(c->r[14]+0x0000001Du,c->r[10]); // 8021D738
  W8(c->r[14]+0x0000001Eu,c->r[10]); // 8021D73C
  W8(c->r[14]+0x0000001Fu,c->r[10]); // 8021D740
  W8(c->r[14]+0x00000020u,c->r[12]); // 8021D744
  W8(c->r[14]+0x00000021u,c->r[11]); // 8021D748
  W8(c->r[14]+0x00000022u,c->r[12]); // 8021D74C
  W8(c->r[14]+0x00000023u,c->r[10]); // 8021D750
  W32(c->r[14]+0x00000024u,c->r[4]); // 8021D754
  W32(c->r[14]+0x00000028u,c->r[5]); // 8021D758
  W8(c->r[14]+0x0000002Cu,c->r[10]); // 8021D75C
  W8(c->r[14]+0x0000002Du,c->r[10]); // 8021D760
  W8(c->r[14]+0x0000002Eu,c->r[10]); // 8021D764
  W8(c->r[14]+0x0000002Fu,c->r[10]); // 8021D768
  W8(c->r[14]+0x00000030u,c->r[12]); // 8021D76C
  W8(c->r[14]+0x00000031u,c->r[11]); // 8021D770
  W8(c->r[14]+0x00000032u,c->r[12]); // 8021D774
  W8(c->r[14]+0x00000033u,c->r[10]); // 8021D778
  W32(c->r[14]+0x00000034u,c->r[4]); // 8021D77C
  W32(c->r[14]+0x00000038u,c->r[5]); // 8021D780
  W8(c->r[14]+0x0000003Cu,c->r[10]); // 8021D784
  W8(c->r[14]+0x0000003Du,c->r[10]); // 8021D788
  W8(c->r[14]+0x0000003Eu,c->r[10]); // 8021D78C
  W8(c->r[14]+0x0000003Fu,c->r[10]); // 8021D790
  c->r[14]=c->r[14]+0x00000040u; // 8021D794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D6F4; } // 8021D798
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 8021D79C
  if (crb(c,2)) { goto L_8021D7D8; } // 8021D7A0
L_8021D7A4:;
  c->ctr=c->r[3]; // 8021D7A4
L_8021D7A8:;
  W8(c->r[14]+0x00000000u,c->r[12]); // 8021D7A8
  W8(c->r[14]+0x00000001u,c->r[11]); // 8021D7AC
  W8(c->r[14]+0x00000002u,c->r[12]); // 8021D7B0
  W8(c->r[14]+0x00000003u,c->r[10]); // 8021D7B4
  W32(c->r[14]+0x00000004u,c->r[4]); // 8021D7B8
  W32(c->r[14]+0x00000008u,c->r[5]); // 8021D7BC
  W8(c->r[14]+0x0000000Cu,c->r[10]); // 8021D7C0
  W8(c->r[14]+0x0000000Du,c->r[10]); // 8021D7C4
  W8(c->r[14]+0x0000000Eu,c->r[10]); // 8021D7C8
  W8(c->r[14]+0x0000000Fu,c->r[10]); // 8021D7CC
  c->r[14]=c->r[14]+0x00000010u; // 8021D7D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D7A8; } // 8021D7D4
L_8021D7D8:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 8021D7D8
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[3]); // 8021D7DC
  c->r[7]=R32(c->r[15]+0x00000050u); // 8021D7E0
  c->r[7]=(rotl(c->r[30],9)&0x00003E00u)|(c->r[7]&~0x00003E00u); // 8021D7E4
  c->r[4]=rotl(c->r[10],14)&0x00000003u; // 8021D7E8
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 8021D7EC
  c->r[0]=c->r[4]+c->r[0]; // 8021D7F0
  W32(c->r[15]+0x00000050u,c->r[7]); // 8021D7F4
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021D7F8
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 8021D7FC
  c->r[0]=rotl(c->r[10],20)&0x00000004u; // 8021D800
  c->r[11]=R32(c->r[15]+0x00000058u); // 8021D804
  c->r[6]=rotl(c->r[10],26)&0x00000004u; // 8021D808
  c->r[0]=c->r[5]+c->r[0]; // 8021D80C
  c->r[4]=rotl(c->r[10],28)&0x00000004u; // 8021D810
  c->r[5]=c->r[9]+c->r[6]; // 8021D814
  c->r[8]=rotl(c->r[10],9)&0x000001E0u; // 8021D818
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 8021D81C
  c->r[7]=c->r[8]+c->r[7]; // 8021D820
  c->r[4]=c->r[4]+c->r[0]; // 8021D824
  c->r[0]=c->r[7]+c->r[5]; // 8021D828
  c->r[6]=rotl(c->r[10],29)&0x00000004u; // 8021D82C
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 8021D830
  c->r[4]=c->r[6]+c->r[4]; // 8021D834
  c->r[0]=c->r[11]+c->r[0]; // 8021D838
  c->r[4]=c->r[5]+c->r[4]; // 8021D83C
  c->r[5]=c->r[16]+c->r[22]; // 8021D840
  c->r[4]=c->r[4]+c->r[0]; // 8021D844
  if (!crb(c,1)) { goto L_8021D96C; } // 8021D848
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8021D84C
  c->ctr=c->r[0]; // 8021D850
  if (crb(c,2)) { goto L_8021D90C; } // 8021D854
L_8021D858:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8021D858
  W8(c->r[4]+0x00000000u,c->r[0]); // 8021D85C
  c->r[0]=R8(c->r[5]+0x00000001u); // 8021D860
  W8(c->r[4]+0x00000001u,c->r[0]); // 8021D864
  c->r[0]=R8(c->r[5]+0x00000002u); // 8021D868
  W8(c->r[4]+0x00000002u,c->r[0]); // 8021D86C
  c->r[0]=R8(c->r[5]+0x00000003u); // 8021D870
  W8(c->r[4]+0x00000003u,c->r[0]); // 8021D874
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021D878
  W32(c->r[4]+0x00000004u,c->r[0]); // 8021D87C
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021D880
  W32(c->r[4]+0x00000008u,c->r[0]); // 8021D884
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 8021D888
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 8021D88C
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8021D890
  W8(c->r[4]+0x0000000Du,c->r[0]); // 8021D894
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8021D898
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 8021D89C
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8021D8A0
  W8(c->r[4]+0x0000000Fu,c->r[0]); // 8021D8A4
  c->r[0]=R8(c->r[5]+0x00000010u); // 8021D8A8
  W8(c->r[4]+0x00000010u,c->r[0]); // 8021D8AC
  c->r[0]=R8(c->r[5]+0x00000011u); // 8021D8B0
  W8(c->r[4]+0x00000011u,c->r[0]); // 8021D8B4
  c->r[0]=R8(c->r[5]+0x00000012u); // 8021D8B8
  W8(c->r[4]+0x00000012u,c->r[0]); // 8021D8BC
  c->r[0]=R8(c->r[5]+0x00000013u); // 8021D8C0
  W8(c->r[4]+0x00000013u,c->r[0]); // 8021D8C4
  c->r[0]=R32(c->r[5]+0x00000014u); // 8021D8C8
  W32(c->r[4]+0x00000014u,c->r[0]); // 8021D8CC
  c->r[0]=R32(c->r[5]+0x00000018u); // 8021D8D0
  W32(c->r[4]+0x00000018u,c->r[0]); // 8021D8D4
  c->r[0]=R8(c->r[5]+0x0000001Cu); // 8021D8D8
  W8(c->r[4]+0x0000001Cu,c->r[0]); // 8021D8DC
  c->r[0]=R8(c->r[5]+0x0000001Du); // 8021D8E0
  W8(c->r[4]+0x0000001Du,c->r[0]); // 8021D8E4
  c->r[0]=R8(c->r[5]+0x0000001Eu); // 8021D8E8
  W8(c->r[4]+0x0000001Eu,c->r[0]); // 8021D8EC
  c->r[0]=R8(c->r[5]+0x0000001Fu); // 8021D8F0
  c->r[5]=c->r[5]+0x00000020u; // 8021D8F4
  W8(c->r[4]+0x0000001Fu,c->r[0]); // 8021D8F8
  c->r[4]=c->r[4]+0x00000020u; // 8021D8FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D858; } // 8021D900
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 8021D904
  if (crb(c,2)) { goto L_8021D96C; } // 8021D908
L_8021D90C:;
  c->ctr=c->r[3]; // 8021D90C
L_8021D910:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8021D910
  W8(c->r[4]+0x00000000u,c->r[0]); // 8021D914
  c->r[0]=R8(c->r[5]+0x00000001u); // 8021D918
  W8(c->r[4]+0x00000001u,c->r[0]); // 8021D91C
  c->r[0]=R8(c->r[5]+0x00000002u); // 8021D920
  W8(c->r[4]+0x00000002u,c->r[0]); // 8021D924
  c->r[0]=R8(c->r[5]+0x00000003u); // 8021D928
  W8(c->r[4]+0x00000003u,c->r[0]); // 8021D92C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021D930
  W32(c->r[4]+0x00000004u,c->r[0]); // 8021D934
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021D938
  W32(c->r[4]+0x00000008u,c->r[0]); // 8021D93C
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 8021D940
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 8021D944
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8021D948
  W8(c->r[4]+0x0000000Du,c->r[0]); // 8021D94C
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8021D950
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 8021D954
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8021D958
  c->r[5]=c->r[5]+0x00000010u; // 8021D95C
  W8(c->r[4]+0x0000000Fu,c->r[0]); // 8021D960
  c->r[4]=c->r[4]+0x00000010u; // 8021D964
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021D910; } // 8021D968
L_8021D96C:;
  c->r[0]=R8(c->r[1]+0x0000002Bu); // 8021D96C
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 8021D970
  cmps(c,0,(int32_t)c->r[0],0); // 8021D974
  c->r[0]=rotl(c->r[3],18)&0x000001F0u; // 8021D978
  c->r[22]=c->r[22]+c->r[0]; // 8021D97C
  if (crb(c,2)) { goto L_8021D9E4; } // 8021D980
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 8021D984
  c->r[9]=c->r[16]+c->r[22]; // 8021D988
  c->r[8]=R32(c->r[15]+0x00000058u); // 8021D98C
  c->r[3]=rotl(c->r[6],20)&0x00000004u; // 8021D990
  c->r[0]=rotl(c->r[6],27)&0x00000004u; // 8021D994
  c->r[3]=c->r[3]+c->r[0]; // 8021D998
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 8021D99C
  c->r[3]=c->r[5]+c->r[3]; // 8021D9A0
  c->r[4]=rotl(c->r[6],8)&0x0000000Fu; // 8021D9A4
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 8021D9A8
  c->r[6]=rotl(c->r[6],9)&0x000001E0u; // 8021D9AC
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8021D9B0
  c->r[0]=R8(c->r[16]+c->r[22]); // 8021D9B4
  c->r[4]=c->r[7]+c->r[6]; // 8021D9B8
  c->r[3]=c->r[8]+c->r[3]; // 8021D9BC
  c->r[4]=c->r[5]+c->r[4]; // 8021D9C0
  c->r[22]=c->r[22]+0x00000004u; // 8021D9C4
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 8021D9C8
  c->r[0]=R8(c->r[9]+0x00000001u); // 8021D9CC
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021D9D0
  c->r[0]=R8(c->r[9]+0x00000002u); // 8021D9D4
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021D9D8
  c->r[0]=R8(c->r[9]+0x00000003u); // 8021D9DC
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021D9E0
L_8021D9E4:;
  c->r[0]=R8(c->r[1]+0x0000002Au); // 8021D9E4
  cmps(c,0,(int32_t)c->r[0],0); // 8021D9E8
  if (crb(c,2)) { goto L_8021DA54; } // 8021D9EC
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 8021D9F0
  c->r[10]=c->r[16]+c->r[22]; // 8021D9F4
  c->r[9]=R32(c->r[15]+0x00000058u); // 8021D9F8
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; // 8021D9FC
  c->r[3]=rotl(c->r[4],28)&0x00000004u; // 8021DA00
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 8021DA04
  c->r[0]=rotl(c->r[4],26)&0x00000004u; // 8021DA08
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 8021DA0C
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 8021DA10
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 8021DA14
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 8021DA18
  c->r[3]=c->r[3]+c->r[0]; // 8021DA1C
  c->r[7]=c->r[8]+c->r[7]; // 8021DA20
  c->r[4]=c->r[6]+c->r[4]; // 8021DA24
  c->r[0]=R8(c->r[16]+c->r[22]); // 8021DA28
  c->r[3]=c->r[7]+c->r[3]; // 8021DA2C
  c->r[4]=c->r[5]+c->r[4]; // 8021DA30
  c->r[3]=c->r[9]+c->r[3]; // 8021DA34
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 8021DA38
  c->r[0]=R8(c->r[10]+0x00000001u); // 8021DA3C
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021DA40
  c->r[0]=R8(c->r[10]+0x00000002u); // 8021DA44
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021DA48
  c->r[0]=R8(c->r[10]+0x00000003u); // 8021DA4C
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021DA50
L_8021DA54:;
  c->r[11]=c->r[1]+0x00000080u; // 8021DA54
  c->r[3]=c->r[15]|c->r[15]; // 8021DA58
  c->lr=0x8021DA60u; f_800C2E64(c); // 8021DA5C
  c->r[0]=R32(c->r[1]+0x00000084u); // 8021DA60
  c->lr=c->r[0]; // 8021DA64
  c->r[1]=c->r[1]+0x00000080u; // 8021DA68
  return; // 8021DA6C
}

// __dt__Q36nw4hbm3lyt8MaterialFv
void f_8021DA70(Ctx* __restrict c) {
  trace_call(0x8021DA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021DA70
  c->r[0]=c->lr; // 8021DA74
  cmps(c,0,(int32_t)c->r[3],0); // 8021DA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021DA7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021DA80
  c->r[31]=c->r[4]|c->r[4]; // 8021DA84
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021DA88
  c->r[30]=c->r[3]|c->r[3]; // 8021DA8C
  if (crb(c,2)) { goto L_8021DB04; } // 8021DA90
  c->r[12]=0u+0x803A0000u; // 8021DA94
  c->r[12]=c->r[12]+0x000078D0u; // 8021DA98
  W32(c->r[3]+0x00000000u,c->r[12]); // 8021DA9C
  c->r[12]=R32(c->r[12]+0x00000018u); // 8021DAA0
  c->ctr=c->r[12]; // 8021DAA4
  if (true) { c->lr=0x8021DAACu; dispatch(c,c->ctr); } // 8021DAA8
  c->r[4]=R32(c->r[30]+0x00000058u); // 8021DAAC
  cmps(c,0,(int32_t)c->r[4],0); // 8021DAB0
  if (crb(c,2)) { goto L_8021DACC; } // 8021DAB4
  c->r[3]=0u+0x80490000u; // 8021DAB8
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021DABC
  c->lr=0x8021DAC4u; f_8023B6E0(c); // 8021DAC0
  c->r[0]=0u+0x00000000u; // 8021DAC4
  W32(c->r[30]+0x00000058u,c->r[0]); // 8021DAC8
L_8021DACC:;
  c->r[4]=0u+0x80220000u; // 8021DACC
  c->r[3]=c->r[30]+0x0000003Cu; // 8021DAD0
  c->r[4]=c->r[4]+0xFFFFA600u; // 8021DAD4
  c->r[5]=0u+0x00000004u; // 8021DAD8
  c->r[6]=0u+0x00000004u; // 8021DADC
  c->lr=0x8021DAE4u; f_800C2C84(c); // 8021DAE0
  c->r[3]=addc(c,c->r[30],0x00000018u,0); cr0(c,c->r[3]); // 8021DAE4
  if (crb(c,2)) { goto L_8021DAF4; } // 8021DAE8
  c->r[4]=0u+0x00000000u; // 8021DAEC
  c->lr=0x8021DAF4u; f_802268A0(c); // 8021DAF0
L_8021DAF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8021DAF4
  if (!crb(c,1)) { goto L_8021DB04; } // 8021DAF8
  c->r[3]=c->r[30]|c->r[30]; // 8021DAFC
  c->lr=0x8021DB04u; f_800C2AC0(c); // 8021DB00
L_8021DB04:;
  c->r[3]=c->r[30]|c->r[30]; // 8021DB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021DB08
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021DB0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021DB10
  c->lr=c->r[0]; // 8021DB14
  c->r[1]=c->r[1]+0x00000010u; // 8021DB18
  return; // 8021DB1C
}

// ReserveGXMem__Q36nw4hbm3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_8021DB20(Ctx* __restrict c) {
  trace_call(0x8021DB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021DB20
  c->r[0]=c->lr; // 8021DB24
  W32(c->r[1]+0x00000064u,c->r[0]); // 8021DB28
  c->r[11]=c->r[1]+0x00000060u; // 8021DB2C
  c->lr=0x8021DB34u; f_800C2E30(c); // 8021DB30
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8021DB34
  c->r[20]=c->r[3]|c->r[3]; // 8021DB38
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 8021DB3C
  c->r[21]=c->r[4]|c->r[4]; // 8021DB40
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 8021DB44
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 8021DB48
  cmpu(c,0,c->r[11],c->r[4]); // 8021DB4C
  c->r[30]=R8(c->r[1]+0x00000073u); // 8021DB50
  c->r[31]=R8(c->r[1]+0x00000077u); // 8021DB54
  c->r[22]=c->r[5]|c->r[5]; // 8021DB58
  c->r[23]=c->r[6]|c->r[6]; // 8021DB5C
  c->r[24]=c->r[7]|c->r[7]; // 8021DB60
  c->r[25]=c->r[8]|c->r[8]; // 8021DB64
  c->r[26]=c->r[9]|c->r[9]; // 8021DB68
  c->r[27]=c->r[10]|c->r[10]; // 8021DB6C
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DB70
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 8021DB74
  cmpu(c,0,c->r[4],c->r[5]); // 8021DB78
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DB7C
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 8021DB80
  cmpu(c,0,c->r[4],c->r[6]); // 8021DB84
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DB88
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 8021DB8C
  cmpu(c,0,c->r[4],c->r[7]); // 8021DB90
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DB94
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 8021DB98
  cmpu(c,0,c->r[4],c->r[8]); // 8021DB9C
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBA0
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 8021DBA4
  cmpu(c,0,c->r[4],c->r[9]); // 8021DBA8
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBAC
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 8021DBB0
  cmpu(c,0,c->r[4],c->r[10]); // 8021DBB4
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBB8
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 8021DBBC
  cmpu(c,0,c->r[4],c->r[28]); // 8021DBC0
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBC4
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 8021DBC8
  cmpu(c,0,c->r[4],c->r[29]); // 8021DBCC
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBD0
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 8021DBD4
  cmpu(c,0,c->r[4],c->r[30]); // 8021DBD8
  if (crb(c,0)) { goto L_8021DBEC; } // 8021DBDC
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8021DBE0
  cmpu(c,0,c->r[0],c->r[31]); // 8021DBE4
  if (!crb(c,0)) { goto L_8021E1A0; } // 8021DBE8
L_8021DBEC:;
  c->r[4]=R32(c->r[3]+0x00000058u); // 8021DBEC
  cmps(c,0,(int32_t)c->r[4],0); // 8021DBF0
  if (crb(c,2)) { goto L_8021DC24; } // 8021DBF4
  c->r[3]=0u+0x80490000u; // 8021DBF8
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021DBFC
  c->lr=0x8021DC04u; f_8023B6E0(c); // 8021DC00
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021DC04
  c->r[4]=0u+0x00000000u; // 8021DC08
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021DC0C
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 8021DC10
  W32(c->r[20]+0x00000058u,c->r[4]); // 8021DC14
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8021DC18
  W32(c->r[20]+0x0000004Cu,c->r[3]); // 8021DC1C
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021DC20
L_8021DC24:;
  c->r[5]=c->r[27]+c->r[22]; // 8021DC24
  c->r[0]=c->r[25]+c->r[28]; // 8021DC28
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 8021DC2C
  c->r[4]=c->r[31]+c->r[29]; // 8021DC30
  c->r[3]=c->r[26]+c->r[23]; // 8021DC34
  c->r[0]=c->r[30]+c->r[0]; // 8021DC38
  c->r[3]=c->r[4]+c->r[3]; // 8021DC3C
  c->r[7]=0u+0x80490000u; // 8021DC40
  c->r[0]=c->r[3]+c->r[0]; // 8021DC44
  c->r[5]=rotl(c->r[21],5)&0x00001FE0u; // 8021DC48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021DC4C
  c->r[4]=rotl(c->r[24],4)&0x00000FF0u; // 8021DC50
  c->r[0]=c->r[6]+c->r[0]; // 8021DC54
  c->r[3]=R32(c->r[7]+0x00001A20u); // 8021DC58
  c->r[0]=c->r[5]+c->r[0]; // 8021DC5C
  c->r[4]=c->r[4]+c->r[0]; // 8021DC60
  c->lr=0x8021DC68u; f_8023B6D0(c); // 8021DC64
  cmps(c,0,(int32_t)c->r[3],0); // 8021DC68
  W32(c->r[20]+0x00000058u,c->r[3]); // 8021DC6C
  if (crb(c,2)) { goto L_8021E1A0; } // 8021DC70
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 8021DC74
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8021DC78
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 8021DC7C
  c->r[4]=R32(c->r[20]+0x00000050u); // 8021DC80
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 8021DC84
  c->r[7]=0u+0x00000000u; // 8021DC88
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 8021DC8C
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8021DC90
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 8021DC94
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 8021DC98
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 8021DC9C
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 8021DCA0
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 8021DCA4
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 8021DCA8
  W32(c->r[20]+0x0000004Cu,c->r[0]); // 8021DCAC
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 8021DCB0
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8021DCB4
  W32(c->r[20]+0x00000050u,c->r[4]); // 8021DCB8
  c->r[6]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[6]); // 8021DCBC
  c->r[8]=c->r[3]+c->r[0]; // 8021DCC0
  if (crb(c,2)) { goto L_8021DE0C; } // 8021DCC4
  cmpu(c,0,c->r[6],0x00000008u); // 8021DCC8
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 8021DCCC
  if (!crb(c,1)) { goto L_8021DDB8; } // 8021DCD0
  c->r[0]=c->r[5]+0x00000007u; // 8021DCD4
  c->r[4]=0u+0x80380000u; // 8021DCD8
  c->r[3]=0u+0x80380000u; // 8021DCDC
  c->r[9]=c->r[8]|c->r[8]; // 8021DCE0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021DCE4
  {uint32_t ea=c->r[4]+0xFFFFF858u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021DCE8
  {uint32_t ea=c->r[3]+0xFFFFF85Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021DCEC
  c->ctr=c->r[0]; // 8021DCF0
  cmpu(c,0,c->r[5],0x00000000u); // 8021DCF4
  if (!crb(c,1)) { goto L_8021DDB8; } // 8021DCF8
L_8021DCFC:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 8021DCFC
  c->r[7]=c->r[7]+0x00000008u; // 8021DD00
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 8021DD04
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 8021DD08
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021DD0C
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 8021DD10
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 8021DD14
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 8021DD18
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 8021DD1C
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 8021DD20
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 8021DD24
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 8021DD28
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 8021DD2C
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 8021DD30
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 8021DD34
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 8021DD38
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 8021DD3C
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 8021DD40
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 8021DD44
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 8021DD48
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021DD4C
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 8021DD50
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 8021DD54
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 8021DD58
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 8021DD5C
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 8021DD60
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 8021DD64
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 8021DD68
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 8021DD6C
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 8021DD70
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 8021DD74
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 8021DD78
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 8021DD7C
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 8021DD80
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 8021DD84
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 8021DD88
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 8021DD8C
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 8021DD90
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 8021DD94
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 8021DD98
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 8021DD9C
  c->r[9]=c->r[9]+0x000000A0u; // 8021DDA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8021DDA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8021DDA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8021DDAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8021DDB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021DCFC; } // 8021DDB4
L_8021DDB8:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)20); // 8021DDB8
  c->r[4]=0u+0x80380000u; // 8021DDBC
  c->r[3]=0u+0x80380000u; // 8021DDC0
  {uint32_t ea=c->r[4]+0xFFFFF858u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021DDC4
  c->r[0]=c->r[6]-c->r[7]; // 8021DDC8
  {uint32_t ea=c->r[3]+0xFFFFF85Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021DDCC
  c->r[3]=c->r[8]+c->r[5]; // 8021DDD0
  c->ctr=c->r[0]; // 8021DDD4
  cmpu(c,0,c->r[7],c->r[6]); // 8021DDD8
  if (!crb(c,0)) { goto L_8021DE0C; } // 8021DDDC
L_8021DDE0:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8021DDE0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8021DDE4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8021DDE8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021DDEC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8021DDF0
  c->r[3]=c->r[3]+0x00000014u; // 8021DDF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8021DDF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8021DDFC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8021DE00
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8021DE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021DDE0; } // 8021DE08
L_8021DE0C:;
  c->r[11]=R32(c->r[20]+0x0000004Cu); // 8021DE0C
  c->r[4]=0u+0x00000000u; // 8021DE10
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 8021DE14
  c->r[0]=rotl(c->r[11],8)&0x0000000Fu; // 8021DE18
  c->r[3]=R32(c->r[20]+0x00000050u); // 8021DE1C
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021DE20
  c->r[3]=(rotl(c->r[5],0)&0x000C0000u)|(c->r[3]&~0x000C0000u); // 8021DE24
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 8021DE28
  W32(c->r[20]+0x00000050u,c->r[3]); // 8021DE2C
  c->r[6]=rotl(c->r[11],26)&0x00000004u; // 8021DE30
  c->r[21]=R32(c->r[20]+0x00000058u); // 8021DE34
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 8021DE38
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 8021DE3C
  c->r[5]=rotl(c->r[11],14)&0x0000003Cu; // 8021DE40
  c->r[0]=rotl(c->r[11],9)&0x000001E0u; // 8021DE44
  c->r[12]=rotl(c->r[11],19)&0x0000001Cu; // 8021DE48
  c->r[11]=rotl(c->r[11],29)&0x00000004u; // 8021DE4C
  c->r[5]=c->r[5]+c->r[0]; // 8021DE50
  c->r[8]=c->r[9]+c->r[8]; // 8021DE54
  c->r[6]=c->r[10]+c->r[6]; // 8021DE58
  c->r[0]=c->r[12]+c->r[11]; // 8021DE5C
  c->r[3]=rotl(c->r[3],14)&0x00000003u; cr0(c,c->r[3]); // 8021DE60
  c->r[5]=c->r[7]+c->r[5]; // 8021DE64
  c->r[6]=c->r[8]+c->r[6]; // 8021DE68
  c->r[0]=c->r[21]+c->r[0]; // 8021DE6C
  c->r[5]=c->r[6]+c->r[5]; // 8021DE70
  c->r[8]=c->r[5]+c->r[0]; // 8021DE74
  if (crb(c,2)) { goto L_8021DFC0; } // 8021DE78
  cmpu(c,0,c->r[3],0x00000008u); // 8021DE7C
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 8021DE80
  if (!crb(c,1)) { goto L_8021DF6C; } // 8021DE84
  c->r[0]=c->r[7]+0x00000007u; // 8021DE88
  c->r[6]=0u+0x80380000u; // 8021DE8C
  c->r[5]=0u+0x80380000u; // 8021DE90
  c->r[9]=c->r[8]|c->r[8]; // 8021DE94
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021DE98
  {uint32_t ea=c->r[6]+0xFFFFF858u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021DE9C
  {uint32_t ea=c->r[5]+0xFFFFF85Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021DEA0
  c->ctr=c->r[0]; // 8021DEA4
  cmpu(c,0,c->r[7],0x00000000u); // 8021DEA8
  if (!crb(c,1)) { goto L_8021DF6C; } // 8021DEAC
L_8021DEB0:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 8021DEB0
  c->r[4]=c->r[4]+0x00000008u; // 8021DEB4
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 8021DEB8
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 8021DEBC
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021DEC0
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 8021DEC4
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 8021DEC8
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 8021DECC
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 8021DED0
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 8021DED4
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 8021DED8
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 8021DEDC
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 8021DEE0
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 8021DEE4
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 8021DEE8
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 8021DEEC
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 8021DEF0
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 8021DEF4
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 8021DEF8
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 8021DEFC
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021DF00
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 8021DF04
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 8021DF08
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 8021DF0C
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 8021DF10
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 8021DF14
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 8021DF18
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 8021DF1C
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 8021DF20
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 8021DF24
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 8021DF28
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 8021DF2C
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 8021DF30
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 8021DF34
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 8021DF38
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 8021DF3C
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 8021DF40
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 8021DF44
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 8021DF48
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 8021DF4C
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 8021DF50
  c->r[9]=c->r[9]+0x000000A0u; // 8021DF54
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8021DF58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8021DF5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8021DF60
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8021DF64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021DEB0; } // 8021DF68
L_8021DF6C:;
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8021DF6C
  c->r[6]=0u+0x80380000u; // 8021DF70
  c->r[5]=0u+0x80380000u; // 8021DF74
  {uint32_t ea=c->r[6]+0xFFFFF858u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021DF78
  c->r[0]=c->r[3]-c->r[4]; // 8021DF7C
  {uint32_t ea=c->r[5]+0xFFFFF85Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021DF80
  c->r[5]=c->r[8]+c->r[7]; // 8021DF84
  c->ctr=c->r[0]; // 8021DF88
  cmpu(c,0,c->r[4],c->r[3]); // 8021DF8C
  if (!crb(c,0)) { goto L_8021DFC0; } // 8021DF90
L_8021DF94:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 8021DF94
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 8021DF98
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 8021DF9C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021DFA0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 8021DFA4
  c->r[5]=c->r[5]+0x00000014u; // 8021DFA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8021DFAC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8021DFB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8021DFB4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8021DFB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021DF94; } // 8021DFBC
L_8021DFC0:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021DFC0
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021DFC4
  c->r[0]=(rotl(c->r[3],0)&0x00000100u)|(c->r[0]&~0x00000100u); // 8021DFC8
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021DFCC
  c->r[0]=rotl(c->r[0],24)&0x00000001u; cr0(c,c->r[0]); // 8021DFD0
  if (crb(c,2)) { goto L_8021E010; } // 8021DFD4
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 8021DFD8
  c->r[3]=0u+0x00000001u; // 8021DFDC
  c->r[7]=R32(c->r[20]+0x00000058u); // 8021DFE0
  c->r[0]=0u+0x00000000u; // 8021DFE4
  c->r[4]=rotl(c->r[5],8)&0x0000000Fu; // 8021DFE8
  c->r[6]=rotl(c->r[5],14)&0x0000003Cu; // 8021DFEC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8021DFF0
  c->r[5]=rotl(c->r[5],9)&0x000001E0u; // 8021DFF4
  c->r[5]=c->r[6]+c->r[5]; // 8021DFF8
  c->r[4]=c->r[7]+c->r[4]; // 8021DFFC
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 8021E000
  W8(c->r[4]+0x00000001u,c->r[3]); // 8021E004
  W8(c->r[4]+0x00000002u,c->r[0]); // 8021E008
  W8(c->r[4]+0x00000003u,c->r[0]); // 8021E00C
L_8021E010:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021E010
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021E014
  c->r[0]=(rotl(c->r[3],0)&0x00000080u)|(c->r[0]&~0x00000080u); // 8021E018
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021E01C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8021E020
  if (crb(c,2)) { goto L_8021E058; } // 8021E024
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 8021E028
  c->r[7]=0u+0xFFFFFFFFu; // 8021E02C
  c->r[6]=R32(c->r[20]+0x00000058u); // 8021E030
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 8021E034
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 8021E038
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E03C
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 8021E040
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 8021E044
  c->r[0]=c->r[4]+c->r[0]; // 8021E048
  c->r[3]=c->r[5]+c->r[3]; // 8021E04C
  c->r[0]=c->r[6]+c->r[0]; // 8021E050
  W32(c->r[3]+c->r[0],c->r[7]); // 8021E054
L_8021E058:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021E058
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021E05C
  c->r[0]=(rotl(c->r[3],0)&0x00004000u)|(c->r[0]&~0x00004000u); // 8021E060
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021E064
  c->r[0]=rotl(c->r[0],18)&0x00000001u; cr0(c,c->r[0]); // 8021E068
  if (crb(c,2)) { goto L_8021E0C0; } // 8021E06C
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 8021E070
  c->r[5]=0u+0x000000E4u; // 8021E074
  c->r[10]=R32(c->r[20]+0x00000058u); // 8021E078
  c->r[4]=0u+0x000000C0u; // 8021E07C
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8021E080
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 8021E084
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E088
  c->r[8]=rotl(c->r[9],27)&0x00000004u; // 8021E08C
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 8021E090
  c->r[7]=rotl(c->r[9],26)&0x00000004u; // 8021E094
  c->r[3]=c->r[3]+c->r[0]; // 8021E098
  c->r[0]=c->r[8]+c->r[7]; // 8021E09C
  c->r[7]=c->r[6]+c->r[3]; // 8021E0A0
  c->r[3]=0u+0x000000D5u; // 8021E0A4
  c->r[6]=c->r[10]+c->r[0]; // 8021E0A8
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 8021E0AC
  c->r[0]=0u+0x000000EAu; // 8021E0B0
  W8(c->r[6]+0x00000001u,c->r[4]); // 8021E0B4
  W8(c->r[6]+0x00000002u,c->r[3]); // 8021E0B8
  W8(c->r[6]+0x00000003u,c->r[0]); // 8021E0BC
L_8021E0C0:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021E0C0
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021E0C4
  c->r[0]=(rotl(c->r[3],0)&0x00000040u)|(c->r[0]&~0x00000040u); // 8021E0C8
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021E0CC
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 8021E0D0
  if (crb(c,2)) { goto L_8021E128; } // 8021E0D4
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 8021E0D8
  c->r[3]=0u+0x00000077u; // 8021E0DC
  c->r[10]=R32(c->r[20]+0x00000058u); // 8021E0E0
  c->r[0]=0u+0x00000000u; // 8021E0E4
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 8021E0E8
  c->r[4]=rotl(c->r[9],27)&0x00000004u; // 8021E0EC
  c->r[4]=c->r[7]+c->r[4]; // 8021E0F0
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 8021E0F4
  c->r[4]=c->r[6]+c->r[4]; // 8021E0F8
  c->r[5]=rotl(c->r[9],8)&0x0000000Fu; // 8021E0FC
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 8021E100
  c->r[8]=rotl(c->r[9],14)&0x0000003Cu; // 8021E104
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 8021E108
  c->r[4]=c->r[10]+c->r[4]; // 8021E10C
  c->r[5]=c->r[8]+c->r[7]; // 8021E110
  c->r[5]=c->r[6]+c->r[5]; // 8021E114
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 8021E118
  W8(c->r[4]+0x00000001u,c->r[0]); // 8021E11C
  W8(c->r[4]+0x00000002u,c->r[0]); // 8021E120
  W8(c->r[4]+0x00000003u,c->r[0]); // 8021E124
L_8021E128:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 8021E128
  c->r[0]=R32(c->r[20]+0x00000050u); // 8021E12C
  c->r[0]=(rotl(c->r[3],0)&0x00000020u)|(c->r[0]&~0x00000020u); // 8021E130
  W32(c->r[20]+0x00000050u,c->r[0]); // 8021E134
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 8021E138
  if (crb(c,2)) { goto L_8021E1A0; } // 8021E13C
  c->r[7]=R32(c->r[20]+0x0000004Cu); // 8021E140
  c->r[5]=0u+0x00000001u; // 8021E144
  c->r[11]=R32(c->r[20]+0x00000058u); // 8021E148
  c->r[4]=0u+0x00000004u; // 8021E14C
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 8021E150
  c->r[6]=rotl(c->r[7],28)&0x00000004u; // 8021E154
  c->r[3]=rotl(c->r[7],26)&0x00000004u; // 8021E158
  c->r[10]=rotl(c->r[7],20)&0x00000004u; // 8021E15C
  c->r[9]=rotl(c->r[7],27)&0x00000004u; // 8021E160
  c->r[8]=rotl(c->r[7],14)&0x0000003Cu; // 8021E164
  c->r[7]=rotl(c->r[7],9)&0x000001E0u; // 8021E168
  c->r[6]=c->r[6]+c->r[3]; // 8021E16C
  c->r[7]=c->r[8]+c->r[7]; // 8021E170
  c->r[9]=c->r[10]+c->r[9]; // 8021E174
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E178
  c->r[3]=0u+0x00000005u; // 8021E17C
  c->r[6]=c->r[9]+c->r[6]; // 8021E180
  c->r[0]=0u+0x0000000Fu; // 8021E184
  c->r[7]=c->r[8]+c->r[7]; // 8021E188
  c->r[6]=c->r[11]+c->r[6]; // 8021E18C
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 8021E190
  W8(c->r[6]+0x00000001u,c->r[4]); // 8021E194
  W8(c->r[6]+0x00000002u,c->r[3]); // 8021E198
  W8(c->r[6]+0x00000003u,c->r[0]); // 8021E19C
L_8021E1A0:;
  c->r[11]=c->r[1]+0x00000060u; // 8021E1A0
  c->lr=0x8021E1A8u; f_800C2E7C(c); // 8021E1A4
  c->r[0]=R32(c->r[1]+0x00000064u); // 8021E1A8
  c->lr=c->r[0]; // 8021E1AC
  c->r[1]=c->r[1]+0x00000060u; // 8021E1B0
  return; // 8021E1B4
}

// GetTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_8021E1C0(Ctx* __restrict c) {
  trace_call(0x8021E1C0u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8021E1C0
  c->r[3]=R32(c->r[3]+0x00000058u); // 8021E1C4
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8021E1C8
  c->r[3]=c->r[3]+c->r[0]; // 8021E1CC
  return; // 8021E1D0
}

// GetTexCoordGenAry__Q36nw4hbm3lyt8MaterialFv
void f_8021E1E0(Ctx* __restrict c) {
  trace_call(0x8021E1E0u);
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8021E1E0
  c->r[5]=R32(c->r[3]+0x00000058u); // 8021E1E4
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 8021E1E8
  c->r[3]=rotl(c->r[4],9)&0x000001E0u; // 8021E1EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E1F0
  c->r[0]=c->r[5]+c->r[0]; // 8021E1F4
  c->r[3]=c->r[3]+c->r[0]; // 8021E1F8
  return; // 8021E1FC
}

// GetIndTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_8021E200(Ctx* __restrict c) {
  trace_call(0x8021E200u);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 8021E200
  c->r[11]=R32(c->r[3]+0x00000058u); // 8021E204
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8021E208
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 8021E20C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E210
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 8021E214
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 8021E218
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 8021E21C
  c->r[4]=rotl(c->r[9],14)&0x0000003Cu; // 8021E220
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 8021E224
  c->r[0]=c->r[4]+c->r[0]; // 8021E228
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 8021E22C
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 8021E230
  c->r[5]=c->r[7]+c->r[5]; // 8021E234
  c->r[4]=c->r[8]+c->r[6]; // 8021E238
  c->r[3]=c->r[3]+c->r[0]; // 8021E23C
  c->r[4]=c->r[5]+c->r[4]; // 8021E240
  c->r[0]=c->r[10]+c->r[9]; // 8021E244
  c->r[3]=c->r[4]+c->r[3]; // 8021E248
  c->r[0]=c->r[11]+c->r[0]; // 8021E24C
  c->r[3]=c->r[3]+c->r[0]; // 8021E250
  return; // 8021E254
}

// SetTextureNum__Q36nw4hbm3lyt8MaterialFUc
void f_8021E260(Ctx* __restrict c) {
  trace_call(0x8021E260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E260
  c->r[0]=c->lr; // 8021E264
  cmps(c,0,(int32_t)c->r[4],0); // 8021E268
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021E26C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021E270
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021E274
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021E278
  c->r[29]=c->r[4]|c->r[4]; // 8021E27C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021E280
  c->r[28]=c->r[3]|c->r[3]; // 8021E284
  if (crb(c,2)) { goto L_8021E2D0; } // 8021E288
  c->r[4]=R32(c->r[3]+0x00000050u); // 8021E28C
  c->r[3]=R32(c->r[3]+0x00000058u); // 8021E290
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 8021E294
  c->r[30]=rotl(c->r[4],4)&0x0000000Fu; // 8021E298
  c->r[31]=c->r[3]+c->r[0]; // 8021E29C
  goto L_8021E2BC; // 8021E2A0
L_8021E2A4:;
  c->r[3]=c->r[31]|c->r[31]; // 8021E2A4
  c->r[4]=0u+0x00000000u; // 8021E2A8
  c->r[5]=0u+0x00000020u; // 8021E2AC
  c->lr=0x8021E2B4u; f_80004350(c); // 8021E2B0
  c->r[31]=c->r[31]+0x00000020u; // 8021E2B4
  c->r[30]=c->r[30]+0x00000001u; // 8021E2B8
L_8021E2BC:;
  cmpu(c,0,c->r[30],c->r[29]); // 8021E2BC
  if (crb(c,0)) { IRQCHK(c); goto L_8021E2A4; } // 8021E2C0
  c->r[0]=R32(c->r[28]+0x00000050u); // 8021E2C4
  c->r[0]=(rotl(c->r[29],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8021E2C8
  W32(c->r[28]+0x00000050u,c->r[0]); // 8021E2CC
L_8021E2D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021E2D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021E2D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021E2D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021E2DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8021E2E0
  c->lr=c->r[0]; // 8021E2E4
  c->r[1]=c->r[1]+0x00000020u; // 8021E2E8
  return; // 8021E2EC
}

// SetTexCoordGenNum__Q36nw4hbm3lyt8MaterialFUc
void f_8021E2F0(Ctx* __restrict c) {
  trace_call(0x8021E2F0u);
  cmps(c,0,(int32_t)c->r[4],0); // 8021E2F0
  if (crb(c,2)) return; // 8021E2F4
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8021E2F8
  c->r[0]=R32(c->r[3]+0x00000050u); // 8021E2FC
  c->r[5]=rotl(c->r[7],8)&0x0000000Fu; // 8021E300
  c->r[8]=R32(c->r[3]+0x00000058u); // 8021E304
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 8021E308
  c->r[12]=rotl(c->r[0],12)&0x0000000Fu; // 8021E30C
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 8021E310
  cmpu(c,1,c->r[12],c->r[4]); // 8021E314
  c->r[0]=c->r[8]+c->r[6]; // 8021E318
  c->r[9]=c->r[5]+c->r[0]; // 8021E31C
  if (!crb(c,4)) { goto L_8021E434; } // 8021E320
  c->r[0]=c->r[4]-c->r[12]; // 8021E324
  c->r[10]=c->r[4]+0xFFFFFFF8u; // 8021E328
  cmpu(c,0,c->r[0],0x00000008u); // 8021E32C
  if (!crb(c,1)) { goto L_8021E3F4; } // 8021E330
  if (crb(c,5)) { goto L_8021E3F4; } // 8021E334
  c->r[0]=c->r[10]+0x00000007u; // 8021E338
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 8021E33C
  c->r[0]=c->r[0]-c->r[12]; // 8021E340
  c->r[8]=0u+0x00000001u; // 8021E344
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021E348
  c->r[11]=c->r[9]+c->r[5]; // 8021E34C
  c->r[7]=0u+0x00000004u; // 8021E350
  c->r[6]=0u+0x0000003Cu; // 8021E354
  c->r[5]=0u+0x00000000u; // 8021E358
  c->ctr=c->r[0]; // 8021E35C
  cmpu(c,0,c->r[12],c->r[10]); // 8021E360
  if (!crb(c,0)) { goto L_8021E3F4; } // 8021E364
L_8021E368:;
  W8(c->r[11]+0x00000000u,c->r[8]); // 8021E368
  c->r[12]=c->r[12]+0x00000008u; // 8021E36C
  W8(c->r[11]+0x00000001u,c->r[7]); // 8021E370
  W8(c->r[11]+0x00000002u,c->r[6]); // 8021E374
  W8(c->r[11]+0x00000003u,c->r[5]); // 8021E378
  W8(c->r[11]+0x00000004u,c->r[8]); // 8021E37C
  W8(c->r[11]+0x00000005u,c->r[7]); // 8021E380
  W8(c->r[11]+0x00000006u,c->r[6]); // 8021E384
  W8(c->r[11]+0x00000007u,c->r[5]); // 8021E388
  W8(c->r[11]+0x00000008u,c->r[8]); // 8021E38C
  W8(c->r[11]+0x00000009u,c->r[7]); // 8021E390
  W8(c->r[11]+0x0000000Au,c->r[6]); // 8021E394
  W8(c->r[11]+0x0000000Bu,c->r[5]); // 8021E398
  W8(c->r[11]+0x0000000Cu,c->r[8]); // 8021E39C
  W8(c->r[11]+0x0000000Du,c->r[7]); // 8021E3A0
  W8(c->r[11]+0x0000000Eu,c->r[6]); // 8021E3A4
  W8(c->r[11]+0x0000000Fu,c->r[5]); // 8021E3A8
  W8(c->r[11]+0x00000010u,c->r[8]); // 8021E3AC
  W8(c->r[11]+0x00000011u,c->r[7]); // 8021E3B0
  W8(c->r[11]+0x00000012u,c->r[6]); // 8021E3B4
  W8(c->r[11]+0x00000013u,c->r[5]); // 8021E3B8
  W8(c->r[11]+0x00000014u,c->r[8]); // 8021E3BC
  W8(c->r[11]+0x00000015u,c->r[7]); // 8021E3C0
  W8(c->r[11]+0x00000016u,c->r[6]); // 8021E3C4
  W8(c->r[11]+0x00000017u,c->r[5]); // 8021E3C8
  W8(c->r[11]+0x00000018u,c->r[8]); // 8021E3CC
  W8(c->r[11]+0x00000019u,c->r[7]); // 8021E3D0
  W8(c->r[11]+0x0000001Au,c->r[6]); // 8021E3D4
  W8(c->r[11]+0x0000001Bu,c->r[5]); // 8021E3D8
  W8(c->r[11]+0x0000001Cu,c->r[8]); // 8021E3DC
  W8(c->r[11]+0x0000001Du,c->r[7]); // 8021E3E0
  W8(c->r[11]+0x0000001Eu,c->r[6]); // 8021E3E4
  W8(c->r[11]+0x0000001Fu,c->r[5]); // 8021E3E8
  c->r[11]=c->r[11]+0x00000020u; // 8021E3EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021E368; } // 8021E3F0
L_8021E3F4:;
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 8021E3F4
  c->r[0]=c->r[4]-c->r[12]; // 8021E3F8
  c->r[9]=c->r[9]+c->r[5]; // 8021E3FC
  c->r[8]=0u+0x00000001u; // 8021E400
  c->r[7]=0u+0x00000004u; // 8021E404
  c->r[6]=0u+0x0000003Cu; // 8021E408
  c->r[5]=0u+0x00000000u; // 8021E40C
  c->ctr=c->r[0]; // 8021E410
  cmpu(c,0,c->r[12],c->r[4]); // 8021E414
  if (!crb(c,0)) { goto L_8021E434; } // 8021E418
L_8021E41C:;
  W8(c->r[9]+0x00000000u,c->r[8]); // 8021E41C
  W8(c->r[9]+0x00000001u,c->r[7]); // 8021E420
  W8(c->r[9]+0x00000002u,c->r[6]); // 8021E424
  W8(c->r[9]+0x00000003u,c->r[5]); // 8021E428
  c->r[9]=c->r[9]+0x00000004u; // 8021E42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021E41C; } // 8021E430
L_8021E434:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 8021E434
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 8021E438
  W32(c->r[3]+0x00000050u,c->r[0]); // 8021E43C
  return; // 8021E440
}

// SetTextureNoWrap__Q36nw4hbm3lyt8MaterialFUcP10TPLPalette
void f_8021E450(Ctx* __restrict c) {
  trace_call(0x8021E450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E450
  c->r[0]=c->lr; // 8021E454
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021E458
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 8021E45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021E460
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021E464
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021E468
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021E46C
  c->r[28]=c->r[5]|c->r[5]; // 8021E470
  c->r[3]=R32(c->r[3]+0x00000058u); // 8021E474
  c->r[31]=c->r[3]+c->r[0]; // 8021E478
  c->r[3]=c->r[31]|c->r[31]; // 8021E47C
  c->lr=0x8021E484u; f_8020A7B0(c); // 8021E480
  c->r[30]=c->r[3]|c->r[3]; // 8021E484
  c->r[3]=c->r[31]|c->r[31]; // 8021E488
  c->lr=0x8021E490u; f_8020A7C0(c); // 8021E48C
  c->r[29]=c->r[3]|c->r[3]; // 8021E490
  c->r[3]=c->r[31]|c->r[31]; // 8021E494
  c->r[4]=c->r[28]|c->r[28]; // 8021E498
  c->r[5]=0u+0x00000000u; // 8021E49C
  c->lr=0x8021E4A4u; f_8021B3B0(c); // 8021E4A0
  c->r[3]=c->r[31]|c->r[31]; // 8021E4A4
  c->r[4]=c->r[30]|c->r[30]; // 8021E4A8
  c->r[5]=c->r[29]|c->r[29]; // 8021E4AC
  c->lr=0x8021E4B4u; f_8020A680(c); // 8021E4B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021E4B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021E4B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021E4BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021E4C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8021E4C4
  c->lr=c->r[0]; // 8021E4C8
  c->r[1]=c->r[1]+0x00000020u; // 8021E4CC
  return; // 8021E4D0
}

// SetTexture__Q36nw4hbm3lyt8MaterialFUcRC9_GXTexObj
void f_8021E4E0(Ctx* __restrict c) {
  trace_call(0x8021E4E0u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 8021E4E0
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 8021E4E4
  c->r[6]=R32(c->r[5]+0x00000000u); // 8021E4E8
  c->r[4]=0u+0x00000000u; // 8021E4EC
  c->r[3]=c->r[3]+c->r[0]; // 8021E4F0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021E4F4
  W32(c->r[3]+0x00000000u,c->r[6]); // 8021E4F8
  c->r[6]=R32(c->r[5]+0x00000008u); // 8021E4FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8021E500
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021E504
  W32(c->r[3]+0x00000008u,c->r[6]); // 8021E508
  c->r[6]=R32(c->r[5]+0x00000010u); // 8021E50C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021E510
  c->r[0]=R32(c->r[5]+0x00000014u); // 8021E514
  W32(c->r[3]+0x00000010u,c->r[6]); // 8021E518
  c->r[6]=R32(c->r[5]+0x00000018u); // 8021E51C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8021E520
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 8021E524
  W32(c->r[3]+0x00000018u,c->r[6]); // 8021E528
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8021E52C
  f_8020A740(c); return; // 8021E530
}

// SetColorElement__Q36nw4hbm3lyt8MaterialFUls
void f_8021E540(Ctx* __restrict c) {
  trace_call(0x8021E540u);
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 8021E540
  cmpu(c,0,c->r[6],0x0000000Fu); // 8021E544
  if (!crb(c,1)) { goto L_8021E668; } // 8021E548
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 8021E54C
  cmpu(c,0,c->r[0],0x0000000Bu); // 8021E550
  if (!crb(c,1)) { goto L_8021E600; } // 8021E554
  cmpu(c,0,c->r[4],0x00000003u); // 8021E558
  if (crb(c,1)) return; // 8021E55C
  c->r[0]=R32(c->r[3]+0x00000050u); // 8021E560
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8021E564
  cmpu(c,0,c->r[0],0x00000001u); // 8021E568
  if (crb(c,0)) return; // 8021E56C
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8021E570
  c->r[0]=sraw(c,c->r[5],31); // 8021E574
  c->r[9]=c->r[5]&~c->r[0]; // 8021E578
  c->r[8]=R32(c->r[3]+0x00000058u); // 8021E57C
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 8021E580
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 8021E584
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E588
  c->r[3]=rotl(c->r[7],9)&0x000001E0u; // 8021E58C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 8021E590
  c->r[7]=rotl(c->r[7],26)&0x00000004u; // 8021E594
  c->r[3]=c->r[6]+c->r[3]; // 8021E598
  cmps(c,0,(int32_t)c->r[0],255); // 8021E59C
  c->r[5]=c->r[7]+c->r[5]; // 8021E5A0
  c->r[0]=0u+0x000000FFu; // 8021E5A4
  c->r[3]=c->r[8]+c->r[3]; // 8021E5A8
  c->r[3]=c->r[5]+c->r[3]; // 8021E5AC
  if (crb(c,1)) { goto L_8021E5B8; } // 8021E5B0
  c->r[0]=c->r[9]|c->r[9]; // 8021E5B4
L_8021E5B8:;
  c->r[4]=rotl(c->r[4],0)&0x00000003u; cr0(c,c->r[4]); // 8021E5B8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8021E5BC
  if (crb(c,2)) { goto L_8021E5E0; } // 8021E5C0
  cmpu(c,0,c->r[4],0x00000001u); // 8021E5C4
  if (crb(c,2)) { goto L_8021E5E8; } // 8021E5C8
  cmpu(c,0,c->r[4],0x00000002u); // 8021E5CC
  if (crb(c,2)) { goto L_8021E5F0; } // 8021E5D0
  cmpu(c,0,c->r[4],0x00000003u); // 8021E5D4
  if (crb(c,2)) { goto L_8021E5F8; } // 8021E5D8
  return; // 8021E5DC
L_8021E5E0:;
  W8(c->r[3]+0x00000000u,c->r[0]); // 8021E5E0
  return; // 8021E5E4
L_8021E5E8:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021E5E8
  return; // 8021E5EC
L_8021E5F0:;
  W8(c->r[3]+0x00000002u,c->r[0]); // 8021E5F0
  return; // 8021E5F4
L_8021E5F8:;
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021E5F8
  return; // 8021E5FC
L_8021E600:;
  c->r[4]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[4]); // 8021E600
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8021E604
  if (crb(c,2)) { goto L_8021E628; } // 8021E608
  cmpu(c,0,c->r[4],0x00000001u); // 8021E60C
  if (crb(c,2)) { goto L_8021E638; } // 8021E610
  cmpu(c,0,c->r[4],0x00000002u); // 8021E614
  if (crb(c,2)) { goto L_8021E648; } // 8021E618
  cmpu(c,0,c->r[4],0x00000003u); // 8021E61C
  if (crb(c,2)) { goto L_8021E658; } // 8021E620
  return; // 8021E624
L_8021E628:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021E628
  c->r[3]=c->r[3]+c->r[0]; // 8021E62C
  W16(c->r[3]+0x00000024u,c->r[5]); // 8021E630
  return; // 8021E634
L_8021E638:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021E638
  c->r[3]=c->r[3]+c->r[0]; // 8021E63C
  W16(c->r[3]+0x00000026u,c->r[5]); // 8021E640
  return; // 8021E644
L_8021E648:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021E648
  c->r[3]=c->r[3]+c->r[0]; // 8021E64C
  W16(c->r[3]+0x00000028u,c->r[5]); // 8021E650
  return; // 8021E654
L_8021E658:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8021E658
  c->r[3]=c->r[3]+c->r[0]; // 8021E65C
  W16(c->r[3]+0x0000002Au,c->r[5]); // 8021E660
  return; // 8021E664
L_8021E668:;
  c->r[0]=sraw(c,c->r[5],31); // 8021E668
  c->r[7]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8021E66C
  c->r[6]=c->r[5]&~c->r[0]; // 8021E670
  c->r[5]=0u+0x000000FFu; // 8021E674
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 8021E678
  cmps(c,0,(int32_t)c->r[0],255); // 8021E67C
  if (crb(c,1)) { goto L_8021E688; } // 8021E680
  c->r[5]=c->r[6]|c->r[6]; // 8021E684
L_8021E688:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 8021E688
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 8021E68C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 8021E690
  if (crb(c,2)) { goto L_8021E6B4; } // 8021E694
  cmpu(c,0,c->r[0],0x00000001u); // 8021E698
  if (crb(c,2)) { goto L_8021E6C4; } // 8021E69C
  cmpu(c,0,c->r[0],0x00000002u); // 8021E6A0
  if (crb(c,2)) { goto L_8021E6D4; } // 8021E6A4
  cmpu(c,0,c->r[0],0x00000003u); // 8021E6A8
  if (crb(c,2)) { goto L_8021E6E4; } // 8021E6AC
  return; // 8021E6B0
L_8021E6B4:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8021E6B4
  c->r[3]=c->r[3]+c->r[0]; // 8021E6B8
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 8021E6BC
  return; // 8021E6C0
L_8021E6C4:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8021E6C4
  c->r[3]=c->r[3]+c->r[0]; // 8021E6C8
  W8(c->r[3]+0x0000003Du,c->r[4]); // 8021E6CC
  return; // 8021E6D0
L_8021E6D4:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8021E6D4
  c->r[3]=c->r[3]+c->r[0]; // 8021E6D8
  W8(c->r[3]+0x0000003Eu,c->r[4]); // 8021E6DC
  return; // 8021E6E0
L_8021E6E4:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8021E6E4
  c->r[3]=c->r[3]+c->r[0]; // 8021E6E8
  W8(c->r[3]+0x0000003Fu,c->r[4]); // 8021E6EC
  return; // 8021E6F0
}

// fn_8021E700
void f_8021E700(Ctx* __restrict c) {
  trace_call(0x8021E700u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021E700
  c->r[0]=c->lr; // 8021E704
  W32(c->r[1]+0x00000124u,c->r[0]); // 8021E708
  c->r[11]=c->r[1]+0x00000100u; // 8021E70C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 8021E710
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 8021E714
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 8021E718
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 8021E71C
  c->lr=0x8021E724u; f_800C2E38(c); // 8021E720
  c->r[26]=c->r[3]|c->r[3]; // 8021E724
  c->r[28]=c->r[4]|c->r[4]; // 8021E728
  c->r[27]=c->r[5]|c->r[5]; // 8021E72C
  c->r[30]=0u+0x00000001u; // 8021E730
  c->r[23]=0u+0x00000000u; // 8021E734
  c->r[3]=0u+0x00000001u; // 8021E738
  c->lr=0x8021E740u; f_8020A170(c); // 8021E73C
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 8021E740
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 8021E744
  if (crb(c,2)) { goto L_8021E7EC; } // 8021E748
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 8021E74C
  c->r[7]=R32(c->r[26]+0x00000058u); // 8021E750
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E754
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 8021E758
  c->r[4]=rotl(c->r[3],9)&0x000001E0u; // 8021E75C
  c->r[3]=0u+0x00000000u; // 8021E760
  c->r[6]=c->r[5]+c->r[4]; // 8021E764
  c->r[4]=0u+0x00000000u; // 8021E768
  c->r[0]=c->r[7]+c->r[0]; // 8021E76C
  c->r[5]=0u+0x00000000u; // 8021E770
  c->r[24]=c->r[6]+c->r[0]; // 8021E774
  c->r[6]=R8(c->r[6]+c->r[0]); // 8021E778
  c->r[7]=0u+0x00000000u; // 8021E77C
  c->r[8]=0u+0x00000000u; // 8021E780
  c->r[9]=0u+0x00000002u; // 8021E784
  c->lr=0x8021E78Cu; f_8020A1A0(c); // 8021E788
  c->r[6]=R8(c->r[24]+0x00000001u); // 8021E78C
  c->r[3]=0u+0x00000002u; // 8021E790
  c->r[4]=0u+0x00000000u; // 8021E794
  c->r[5]=0u+0x00000000u; // 8021E798
  c->r[7]=0u+0x00000000u; // 8021E79C
  c->r[8]=0u+0x00000000u; // 8021E7A0
  c->r[9]=0u+0x00000002u; // 8021E7A4
  c->lr=0x8021E7ACu; f_8020A1A0(c); // 8021E7A8
  c->r[3]=R8(c->r[24]+0x00000000u); // 8021E7AC
  c->r[30]=0u+0x00000001u; // 8021E7B0
  cmps(c,0,(int32_t)c->r[3],1); // 8021E7B4
  if (crb(c,2)) { goto L_8021E7CC; } // 8021E7B8
  c->r[0]=R8(c->r[24]+0x00000001u); // 8021E7BC
  cmps(c,0,(int32_t)c->r[0],1); // 8021E7C0
  if (crb(c,2)) { goto L_8021E7CC; } // 8021E7C4
  c->r[30]=0u+0x00000000u; // 8021E7C8
L_8021E7CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021E7CC
  c->r[23]=0u+0x00000000u; // 8021E7D0
  if (crb(c,2)) { goto L_8021E7E4; } // 8021E7D4
  c->r[0]=R8(c->r[24]+0x00000001u); // 8021E7D8
  cmps(c,0,(int32_t)c->r[0],0); // 8021E7DC
  if (!crb(c,2)) { goto L_8021E80C; } // 8021E7E0
L_8021E7E4:;
  c->r[23]=0u+0x00000001u; // 8021E7E4
  goto L_8021E80C; // 8021E7E8
L_8021E7EC:;
  c->r[3]=0u+0x00000004u; // 8021E7EC
  c->r[4]=0u+0x00000000u; // 8021E7F0
  c->r[5]=0u+0x00000000u; // 8021E7F4
  c->r[6]=0u+0x00000001u; // 8021E7F8
  c->r[7]=0u+0x00000000u; // 8021E7FC
  c->r[8]=0u+0x00000000u; // 8021E800
  c->r[9]=0u+0x00000002u; // 8021E804
  c->lr=0x8021E80Cu; f_8020A1A0(c); // 8021E808
L_8021E80C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021E80C
  c->r[29]=0u+0x00000000u; // 8021E810
  if (crb(c,2)) { goto L_8021E828; } // 8021E814
  cmps(c,0,(int32_t)c->r[28],0); // 8021E818
  c->r[29]=0u+0x00000001u; // 8021E81C
  if (!crb(c,2)) { goto L_8021E828; } // 8021E820
  c->r[29]=0u+0x00000000u; // 8021E824
L_8021E828:;
  cmps(c,0,(int32_t)c->r[23],0); // 8021E828
  if (crb(c,2)) { goto L_8021E8F8; } // 8021E82C
  c->r[5]=R32(c->r[26]+0x0000004Cu); // 8021E830
  c->r[0]=0u+0xFFFFFFFFu; // 8021E834
  W32(c->r[1]+0x00000030u,c->r[0]); // 8021E838
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 8021E83C
  if (crb(c,2)) { goto L_8021E88C; } // 8021E840
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 8021E844
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 8021E848
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E84C
  c->r[6]=R32(c->r[26]+0x00000058u); // 8021E850
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 8021E854
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 8021E858
  c->r[0]=c->r[4]+c->r[0]; // 8021E85C
  c->r[3]=c->r[5]+c->r[3]; // 8021E860
  c->r[0]=c->r[6]+c->r[0]; // 8021E864
  c->r[6]=c->r[3]+c->r[0]; // 8021E868
  c->r[5]=R8(c->r[3]+c->r[0]); // 8021E86C
  c->r[4]=R8(c->r[6]+0x00000001u); // 8021E870
  c->r[3]=R8(c->r[6]+0x00000002u); // 8021E874
  c->r[0]=R8(c->r[6]+0x00000003u); // 8021E878
  W8(c->r[1]+0x00000030u,c->r[5]); // 8021E87C
  W8(c->r[1]+0x00000031u,c->r[4]); // 8021E880
  W8(c->r[1]+0x00000032u,c->r[3]); // 8021E884
  W8(c->r[1]+0x00000033u,c->r[0]); // 8021E888
L_8021E88C:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 8021E88C
  c->r[5]=c->r[27]|c->r[27]; // 8021E890
  W32(c->r[1]+0x00000028u,c->r[0]); // 8021E894
  c->r[3]=c->r[1]+0x00000024u; // 8021E898
  c->r[4]=c->r[1]+0x00000028u; // 8021E89C
  c->lr=0x8021E8A4u; f_8021AA50(c); // 8021E8A0
  c->r[7]=R8(c->r[1]+0x00000024u); // 8021E8A4
  c->r[4]=c->r[1]+0x00000020u; // 8021E8A8
  c->r[6]=R8(c->r[1]+0x00000025u); // 8021E8AC
  c->r[3]=0u+0x00000004u; // 8021E8B0
  c->r[5]=R8(c->r[1]+0x00000026u); // 8021E8B4
  c->r[0]=R8(c->r[1]+0x00000027u); // 8021E8B8
  W8(c->r[1]+0x00000030u,c->r[7]); // 8021E8BC
  W8(c->r[1]+0x00000031u,c->r[6]); // 8021E8C0
  W8(c->r[1]+0x00000032u,c->r[5]); // 8021E8C4
  W8(c->r[1]+0x00000033u,c->r[0]); // 8021E8C8
  c->r[0]=R32(c->r[1]+0x00000030u); // 8021E8CC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8021E8D0
  c->lr=0x8021E8D8u; f_8020A090(c); // 8021E8D4
  cmps(c,0,(int32_t)c->r[29],0); // 8021E8D8
  c->r[29]=0u+0x00000000u; // 8021E8DC
  if (!crb(c,2)) { goto L_8021E8F4; } // 8021E8E0
  c->r[3]=R32(c->r[1]+0x00000030u); // 8021E8E4
  c->r[0]=c->r[3]+0x00010000u; // 8021E8E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021E8EC
  if (crb(c,2)) { goto L_8021E8F8; } // 8021E8F0
L_8021E8F4:;
  c->r[29]=0u+0x00000001u; // 8021E8F4
L_8021E8F8:;
  c->r[31]=0u+0x00000000u; // 8021E8F8
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 8021E8FC
  W8(c->r[1]+0x0000005Du,c->r[31]); // 8021E900
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 8021E904
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 8021E908
  W8(c->r[1]+0x00000060u,c->r[31]); // 8021E90C
  W8(c->r[1]+0x00000061u,c->r[31]); // 8021E910
  W8(c->r[1]+0x00000062u,c->r[31]); // 8021E914
  W8(c->r[1]+0x00000063u,c->r[31]); // 8021E918
  W8(c->r[1]+0x00000064u,c->r[31]); // 8021E91C
  W8(c->r[1]+0x00000065u,c->r[31]); // 8021E920
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021E924
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 8021E928
  c->lr=0x8021E930u; f_80208480(c); // 8021E92C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021E930
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 8021E934
  if (crb(c,2)) { goto L_8021E9CC; } // 8021E938
  c->r[4]=R32(c->r[26]+0x0000004Cu); // 8021E93C
  c->r[3]=0u+0xAAAB0000u; // 8021E940
  c->r[5]=R32(c->r[26]+0x00000058u); // 8021E944
  c->r[27]=c->r[1]+0x0000005Cu; // 8021E948
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 8021E94C
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 8021E950
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021E954
  c->r[25]=c->r[3]+0xFFFFAAABu; // 8021E958
  c->r[28]=0u+0x00000000u; // 8021E95C
  c->r[24]=0u+0x00000001u; // 8021E960
  c->r[0]=c->r[5]+c->r[0]; // 8021E964
  c->r[23]=c->r[4]+c->r[0]; // 8021E968
  goto L_8021E9BC; // 8021E96C
L_8021E970:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 8021E970
  c->r[6]=R8(c->r[23]+0x00000002u); // 8021E974
  cmps(c,0,(int32_t)c->r[0],1); // 8021E978
  if (!crb(c,2)) { goto L_8021E99C; } // 8021E97C
  cmpu(c,0,c->r[6],0x0000003Cu); // 8021E980
  if (crb(c,2)) { goto L_8021E99C; } // 8021E984
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 8021E988
  c->r[31]=0u+0x00000001u; // 8021E98C
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 8021E990
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8021E994
  W8(c->r[27]+c->r[0],c->r[24]); // 8021E998
L_8021E99C:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 8021E99C
  c->r[3]=c->r[28]|c->r[28]; // 8021E9A0
  c->r[5]=R8(c->r[23]+0x00000001u); // 8021E9A4
  c->r[7]=0u+0x00000000u; // 8021E9A8
  c->r[8]=0u+0x0000007Du; // 8021E9AC
  c->lr=0x8021E9B4u; f_80208230(c); // 8021E9B0
  c->r[23]=c->r[23]+0x00000004u; // 8021E9B4
  c->r[28]=c->r[28]+0x00000001u; // 8021E9B8
L_8021E9BC:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021E9BC
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 8021E9C0
  cmpu(c,0,c->r[28],c->r[0]); // 8021E9C4
  if (crb(c,0)) { IRQCHK(c); goto L_8021E970; } // 8021E9C8
L_8021E9CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8021E9CC
  if (crb(c,2)) { goto L_8021EA44; } // 8021E9D0
  c->r[0]=R32(c->r[26]+0x0000004Cu); // 8021E9D4
  c->r[27]=c->r[1]+0x0000005Cu; // 8021E9D8
  c->r[3]=R32(c->r[26]+0x00000058u); // 8021E9DC
  c->r[28]=0u+0x00000000u; // 8021E9E0
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 8021E9E4
  c->r[24]=c->r[3]+c->r[0]; // 8021E9E8
  goto L_8021EA30; // 8021E9EC
L_8021E9F0:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 8021E9F0
  c->r[0]=R8(c->r[27]+c->r[3]); // 8021E9F4
  cmps(c,0,(int32_t)c->r[0],0); // 8021E9F8
  if (crb(c,2)) { goto L_8021EA2C; } // 8021E9FC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8021EA00
  c->r[3]=c->r[1]+0x000000A0u; // 8021EA04
  c->r[4]=c->r[24]+c->r[0]; // 8021EA08
  c->lr=0x8021EA10u; f_8021C5A0(c); // 8021EA0C
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 8021EA10
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 8021EA14
  c->r[4]=c->r[0]-c->r[3]; // 8021EA18
  c->r[5]=0u+0x00000001u; // 8021EA1C
  c->r[3]=c->r[1]+0x000000A0u; // 8021EA20
  c->r[4]=c->r[4]+0x0000001Eu; // 8021EA24
  c->lr=0x8021EA2Cu; f_8020C740(c); // 8021EA28
L_8021EA2C:;
  c->r[28]=c->r[28]+0x00000001u; // 8021EA2C
L_8021EA30:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021EA30
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 8021EA34
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 8021EA38
  cmpu(c,0,c->r[3],c->r[0]); // 8021EA3C
  if (crb(c,0)) { IRQCHK(c); goto L_8021E9F0; } // 8021EA40
L_8021EA44:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021EA44
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8021EA48
  if (crb(c,2)) { goto L_8021EB1C; } // 8021EA4C
  c->r[31]=R32(c->r[26]+0x00000058u); // 8021EA50
  c->r[28]=0u+0x00000000u; // 8021EA54
  c->r[27]=0u+0x00000000u; // 8021EA58
  goto L_8021EB0C; // 8021EA5C
L_8021EA60:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8021EA60
  c->r[3]=c->r[1]+0x00000080u; // 8021EA64
  c->r[0]=R32(c->r[31]+0x00000004u); // 8021EA68
  W32(c->r[1]+0x00000084u,c->r[0]); // 8021EA6C
  W32(c->r[1]+0x00000080u,c->r[4]); // 8021EA70
  c->r[4]=R32(c->r[31]+0x00000008u); // 8021EA74
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8021EA78
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8021EA7C
  W32(c->r[1]+0x00000088u,c->r[4]); // 8021EA80
  c->r[4]=R32(c->r[31]+0x00000010u); // 8021EA84
  c->r[0]=R32(c->r[31]+0x00000014u); // 8021EA88
  W32(c->r[1]+0x00000094u,c->r[0]); // 8021EA8C
  W32(c->r[1]+0x00000090u,c->r[4]); // 8021EA90
  c->r[4]=R32(c->r[31]+0x00000018u); // 8021EA94
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8021EA98
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8021EA9C
  W32(c->r[1]+0x00000098u,c->r[4]); // 8021EAA0
  c->lr=0x8021EAA8u; f_8020A7A0(c); // 8021EAA4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 8021EAA8
  cmpu(c,0,c->r[0],0x00000001u); // 8021EAAC
  if (crb(c,1)) { goto L_8021EAF8; } // 8021EAB0
  c->r[3]=c->r[1]+0x00000080u; // 8021EAB4
  c->lr=0x8021EABCu; f_8020A750(c); // 8021EAB8
  cmps(c,0,(int32_t)c->r[3],0); // 8021EABC
  c->r[6]=c->r[3]|c->r[3]; // 8021EAC0
  if (crb(c,2)) { goto L_8021EAF8; } // 8021EAC4
  c->r[4]=R32(c->r[6]+0x00000008u); // 8021EAC8
  c->r[3]=c->r[1]+0x00000050u; // 8021EACC
  c->r[5]=R32(c->r[6]+0x00000004u); // 8021EAD0
  c->r[6]=R16(c->r[6]+0x00000000u); // 8021EAD4
  c->lr=0x8021EADCu; f_8020A9B0(c); // 8021EAD8
  c->r[4]=c->r[28]|c->r[28]; // 8021EADC
  c->r[3]=c->r[1]+0x00000050u; // 8021EAE0
  c->lr=0x8021EAE8u; f_8020A9E0(c); // 8021EAE4
  c->r[4]=c->r[28]|c->r[28]; // 8021EAE8
  c->r[3]=c->r[1]+0x00000080u; // 8021EAEC
  c->lr=0x8021EAF4u; f_8020A6A0(c); // 8021EAF0
  c->r[28]=c->r[28]+0x00000001u; // 8021EAF4
L_8021EAF8:;
  c->r[4]=c->r[27]|c->r[27]; // 8021EAF8
  c->r[3]=c->r[1]+0x00000080u; // 8021EAFC
  c->lr=0x8021EB04u; f_8020A950(c); // 8021EB00
  c->r[31]=c->r[31]+0x00000020u; // 8021EB04
  c->r[27]=c->r[27]+0x00000001u; // 8021EB08
L_8021EB0C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021EB0C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8021EB10
  cmpu(c,0,c->r[27],c->r[0]); // 8021EB14
  if (crb(c,0)) { IRQCHK(c); goto L_8021EA60; } // 8021EB18
L_8021EB1C:;
  c->r[5]=R32(c->r[26]+0x00000024u); // 8021EB1C
  c->r[4]=c->r[1]+0x00000048u; // 8021EB20
  c->r[0]=R32(c->r[26]+0x00000028u); // 8021EB24
  c->r[3]=0u+0x00000001u; // 8021EB28
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8021EB2C
  W32(c->r[1]+0x00000048u,c->r[5]); // 8021EB30
  c->lr=0x8021EB38u; f_8020B8C0(c); // 8021EB34
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 8021EB38
  c->r[4]=c->r[1]+0x00000040u; // 8021EB3C
  c->r[0]=R32(c->r[26]+0x00000030u); // 8021EB40
  c->r[3]=0u+0x00000002u; // 8021EB44
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021EB48
  W32(c->r[1]+0x00000040u,c->r[5]); // 8021EB4C
  c->lr=0x8021EB54u; f_8020B8C0(c); // 8021EB50
  c->r[5]=R32(c->r[26]+0x00000034u); // 8021EB54
  c->r[4]=c->r[1]+0x00000038u; // 8021EB58
  c->r[0]=R32(c->r[26]+0x00000038u); // 8021EB5C
  c->r[3]=0u+0x00000003u; // 8021EB60
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8021EB64
  W32(c->r[1]+0x00000038u,c->r[5]); // 8021EB68
  c->lr=0x8021EB70u; f_8020B8C0(c); // 8021EB6C
  c->r[0]=R32(c->r[26]+0x0000003Cu); // 8021EB70
  c->r[4]=c->r[1]+0x0000001Cu; // 8021EB74
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021EB78
  c->r[3]=0u+0x00000000u; // 8021EB7C
  c->lr=0x8021EB84u; f_8020B930(c); // 8021EB80
  c->r[0]=R32(c->r[26]+0x00000040u); // 8021EB84
  c->r[4]=c->r[1]+0x00000018u; // 8021EB88
  W32(c->r[1]+0x00000018u,c->r[0]); // 8021EB8C
  c->r[3]=0u+0x00000001u; // 8021EB90
  c->lr=0x8021EB98u; f_8020B930(c); // 8021EB94
  c->r[0]=R32(c->r[26]+0x00000044u); // 8021EB98
  c->r[4]=c->r[1]+0x00000014u; // 8021EB9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021EBA0
  c->r[3]=0u+0x00000002u; // 8021EBA4
  c->lr=0x8021EBACu; f_8020B930(c); // 8021EBA8
  c->r[0]=R32(c->r[26]+0x00000048u); // 8021EBAC
  c->r[4]=c->r[1]+0x00000010u; // 8021EBB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8021EBB4
  c->r[3]=0u+0x00000003u; // 8021EBB8
  c->lr=0x8021EBC0u; f_8020B930(c); // 8021EBBC
  c->r[8]=R32(c->r[26]+0x0000004Cu); // 8021EBC0
  c->r[0]=rotl(c->r[8],18)&0x00000001u; cr0(c,c->r[0]); // 8021EBC4
  if (crb(c,2)) { goto L_8021EC30; } // 8021EBC8
  c->r[0]=rotl(c->r[8],8)&0x0000000Fu; // 8021EBCC
  c->r[6]=rotl(c->r[8],27)&0x00000004u; // 8021EBD0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021EBD4
  c->r[5]=rotl(c->r[8],26)&0x00000004u; // 8021EBD8
  c->r[3]=rotl(c->r[8],14)&0x0000003Cu; // 8021EBDC
  c->r[7]=R32(c->r[26]+0x00000058u); // 8021EBE0
  c->r[0]=rotl(c->r[8],9)&0x000001E0u; // 8021EBE4
  c->r[3]=c->r[3]+c->r[0]; // 8021EBE8
  c->r[0]=c->r[6]+c->r[5]; // 8021EBEC
  c->r[23]=0u+0x00000000u; // 8021EBF0
  c->r[3]=c->r[4]+c->r[3]; // 8021EBF4
  c->r[0]=c->r[7]+c->r[0]; // 8021EBF8
  c->r[27]=c->r[3]+c->r[0]; // 8021EBFC
L_8021EC00:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 8021EC00
  c->r[3]=c->r[23]|c->r[23]; // 8021EC04
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 8021EC08
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 8021EC0C
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 8021EC10
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 8021EC14
  c->lr=0x8021EC1Cu; f_8020BA70(c); // 8021EC18
  c->r[23]=c->r[23]+0x00000001u; // 8021EC1C
  c->r[27]=c->r[27]+0x00000001u; // 8021EC20
  cmps(c,0,(int32_t)c->r[23],4); // 8021EC24
  if (crb(c,0)) { IRQCHK(c); goto L_8021EC00; } // 8021EC28
  goto L_8021EC90; // 8021EC2C
L_8021EC30:;
  c->r[3]=0u+0x00000000u; // 8021EC30
  c->r[4]=0u+0x00000000u; // 8021EC34
  c->r[5]=0u+0x00000001u; // 8021EC38
  c->r[6]=0u+0x00000002u; // 8021EC3C
  c->r[7]=0u+0x00000003u; // 8021EC40
  c->lr=0x8021EC48u; f_8020BA70(c); // 8021EC44
  c->r[3]=0u+0x00000001u; // 8021EC48
  c->r[4]=0u+0x00000000u; // 8021EC4C
  c->r[5]=0u+0x00000000u; // 8021EC50
  c->r[6]=0u+0x00000000u; // 8021EC54
  c->r[7]=0u+0x00000003u; // 8021EC58
  c->lr=0x8021EC60u; f_8020BA70(c); // 8021EC5C
  c->r[3]=0u+0x00000002u; // 8021EC60
  c->r[4]=0u+0x00000001u; // 8021EC64
  c->r[5]=0u+0x00000001u; // 8021EC68
  c->r[6]=0u+0x00000001u; // 8021EC6C
  c->r[7]=0u+0x00000003u; // 8021EC70
  c->lr=0x8021EC78u; f_8020BA70(c); // 8021EC74
  c->r[3]=0u+0x00000003u; // 8021EC78
  c->r[4]=0u+0x00000002u; // 8021EC7C
  c->r[5]=0u+0x00000002u; // 8021EC80
  c->r[6]=0u+0x00000002u; // 8021EC84
  c->r[7]=0u+0x00000003u; // 8021EC88
  c->lr=0x8021EC90u; f_8020BA70(c); // 8021EC8C
L_8021EC90:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021EC90
  c->r[27]=0u+0x00000000u; // 8021EC94
  W8(c->r[1]+0x0000002Cu,c->r[27]); // 8021EC98
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 8021EC9C
  W8(c->r[1]+0x0000002Du,c->r[27]); // 8021ECA0
  W8(c->r[1]+0x0000002Eu,c->r[27]); // 8021ECA4
  if (crb(c,2)) { goto L_8021EE74; } // 8021ECA8
  c->lr=0x8021ECB0u; f_8020BD20(c); // 8021ECAC
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 8021ECB0
  c->r[29]=c->r[1]+0x0000002Cu; // 8021ECB4
  c->r[10]=R32(c->r[26]+0x00000058u); // 8021ECB8
  c->r[28]=0u+0x00000000u; // 8021ECBC
  c->r[3]=rotl(c->r[9],14)&0x00000003u; // 8021ECC0
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8021ECC4
  c->r[0]=c->r[3]+c->r[0]; // 8021ECC8
  c->r[5]=rotl(c->r[9],26)&0x00000004u; // 8021ECCC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021ECD0
  c->r[3]=rotl(c->r[9],27)&0x00000004u; // 8021ECD4
  c->r[0]=rotl(c->r[9],20)&0x00000004u; // 8021ECD8
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 8021ECDC
  c->r[6]=rotl(c->r[9],14)&0x0000003Cu; // 8021ECE0
  c->r[0]=c->r[3]+c->r[0]; // 8021ECE4
  c->r[4]=rotl(c->r[9],28)&0x00000004u; // 8021ECE8
  c->r[5]=c->r[8]+c->r[5]; // 8021ECEC
  c->r[0]=c->r[4]+c->r[0]; // 8021ECF0
  c->r[3]=rotl(c->r[9],29)&0x00000004u; // 8021ECF4
  c->r[6]=c->r[7]+c->r[6]; // 8021ECF8
  c->r[4]=rotl(c->r[9],19)&0x0000001Cu; // 8021ECFC
  c->r[3]=c->r[3]+c->r[0]; // 8021ED00
  c->r[31]=0u+0x00000001u; // 8021ED04
  c->r[0]=c->r[6]+c->r[5]; // 8021ED08
  c->r[3]=c->r[4]+c->r[3]; // 8021ED0C
  c->r[0]=c->r[10]+c->r[0]; // 8021ED10
  c->r[25]=c->r[3]+c->r[0]; // 8021ED14
  goto L_8021EE5C; // 8021ED18
L_8021ED1C:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 8021ED1C
  c->r[3]=c->r[28]|c->r[28]; // 8021ED20
  c->r[5]=R8(c->r[25]+0x00000002u); // 8021ED24
  c->r[4]=R8(c->r[25]+0x00000000u); // 8021ED28
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 8021ED2C
  c->r[6]=R8(c->r[25]+0x00000001u); // 8021ED30
  c->lr=0x8021ED38u; f_8020BBC0(c); // 8021ED34
  c->r[0]=R8(c->r[25]+0x00000003u); // 8021ED38
  c->r[3]=c->r[28]|c->r[28]; // 8021ED3C
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 8021ED40
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 8021ED44
  c->lr=0x8021ED4Cu; f_8020BA30(c); // 8021ED48
  c->r[0]=R8(c->r[25]+0x00000005u); // 8021ED4C
  c->r[3]=c->r[28]|c->r[28]; // 8021ED50
  c->r[5]=R8(c->r[25]+0x00000004u); // 8021ED54
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 8021ED58
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8021ED5C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8021ED60
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 8021ED64
  c->lr=0x8021ED6Cu; f_8020B720(c); // 8021ED68
  c->r[6]=R8(c->r[25]+0x00000006u); // 8021ED6C
  c->r[3]=c->r[28]|c->r[28]; // 8021ED70
  c->r[0]=R8(c->r[25]+0x00000007u); // 8021ED74
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 8021ED78
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 8021ED7C
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8021ED80
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 8021ED84
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 8021ED88
  c->lr=0x8021ED90u; f_8020B7A0(c); // 8021ED8C
  c->r[0]=R8(c->r[25]+0x00000007u); // 8021ED90
  c->r[3]=c->r[28]|c->r[28]; // 8021ED94
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 8021ED98
  c->lr=0x8021EDA0u; f_8020B990(c); // 8021ED9C
  c->r[0]=R8(c->r[25]+0x00000009u); // 8021EDA0
  c->r[3]=c->r[28]|c->r[28]; // 8021EDA4
  c->r[5]=R8(c->r[25]+0x00000008u); // 8021EDA8
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 8021EDAC
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8021EDB0
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8021EDB4
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 8021EDB8
  c->lr=0x8021EDC0u; f_8020B760(c); // 8021EDBC
  c->r[6]=R8(c->r[25]+0x0000000Au); // 8021EDC0
  c->r[3]=c->r[28]|c->r[28]; // 8021EDC4
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 8021EDC8
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 8021EDCC
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 8021EDD0
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8021EDD4
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 8021EDD8
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 8021EDDC
  c->lr=0x8021EDE4u; f_8020B800(c); // 8021EDE0
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 8021EDE4
  c->r[3]=c->r[28]|c->r[28]; // 8021EDE8
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 8021EDEC
  c->lr=0x8021EDF4u; f_8020B9E0(c); // 8021EDF0
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 8021EDF4
  c->r[3]=c->r[28]|c->r[28]; // 8021EDF8
  c->r[6]=R8(c->r[25]+0x0000000Du); // 8021EDFC
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 8021EE00
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 8021EE04
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 8021EE08
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 8021EE0C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8021EE10
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 8021EE14
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 8021EE18
  c->r[7]=c->r[24]|c->r[24]; // 8021EE1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021EE20
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 8021EE24
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 8021EE28
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 8021EE2C
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 8021EE30
  c->lr=0x8021EE38u; f_8020B220(c); // 8021EE34
  cmps(c,0,(int32_t)c->r[24],1); // 8021EE38
  if (crb(c,0)) { goto L_8021EE54; } // 8021EE3C
  cmps(c,0,(int32_t)c->r[24],3); // 8021EE40
  if (crb(c,1)) { goto L_8021EE54; } // 8021EE44
  c->r[3]=c->r[29]+c->r[24]; // 8021EE48
  c->r[27]=0u+0x00000001u; // 8021EE4C
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 8021EE50
L_8021EE54:;
  c->r[25]=c->r[25]+0x00000010u; // 8021EE54
  c->r[28]=c->r[28]+0x00000001u; // 8021EE58
L_8021EE5C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021EE5C
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 8021EE60
  cmpu(c,0,c->r[28],c->r[0]); // 8021EE64
  if (crb(c,0)) { IRQCHK(c); goto L_8021ED1C; } // 8021EE68
  c->r[29]=0u+0x00000001u; // 8021EE6C
  goto L_8021F240; // 8021EE70
L_8021EE74:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 8021EE74
  c->r[28]=0u+0x00000000u; // 8021EE78
  if (!crb(c,2)) { goto L_8021EED0; } // 8021EE7C
  c->r[3]=0u+0x00000000u; // 8021EE80
  c->r[4]=0u+0x000000FFu; // 8021EE84
  c->r[5]=0u+0x000000FFu; // 8021EE88
  c->r[6]=0u+0x00000004u; // 8021EE8C
  c->lr=0x8021EE94u; f_8020BBC0(c); // 8021EE90
  c->r[3]=0u+0x00000000u; // 8021EE94
  c->r[4]=0u+0x0000000Fu; // 8021EE98
  c->r[5]=0u+0x00000004u; // 8021EE9C
  c->r[6]=0u+0x0000000Au; // 8021EEA0
  c->r[7]=0u+0x0000000Fu; // 8021EEA4
  c->lr=0x8021EEACu; f_8020B720(c); // 8021EEA8
  c->r[3]=0u+0x00000000u; // 8021EEAC
  c->r[4]=0u+0x00000007u; // 8021EEB0
  c->r[5]=0u+0x00000002u; // 8021EEB4
  c->r[6]=0u+0x00000005u; // 8021EEB8
  c->r[7]=0u+0x00000007u; // 8021EEBC
  c->lr=0x8021EEC4u; f_8020B760(c); // 8021EEC0
  c->r[29]=0u+0x00000001u; // 8021EEC4
  c->r[28]=0u+0x00000001u; // 8021EEC8
  goto L_8021F1C8; // 8021EECC
L_8021EED0:;
  cmpu(c,0,c->r[0],0x00000001u); // 8021EED0
  if (!crb(c,2)) { goto L_8021EF24; } // 8021EED4
  c->r[3]=0u+0x00000000u; // 8021EED8
  c->r[4]=0u+0x00000000u; // 8021EEDC
  c->r[5]=0u+0x00000000u; // 8021EEE0
  c->r[6]=0u+0x000000FFu; // 8021EEE4
  c->lr=0x8021EEECu; f_8020BBC0(c); // 8021EEE8
  c->r[3]=0u+0x00000000u; // 8021EEEC
  c->r[4]=0u+0x00000002u; // 8021EEF0
  c->r[5]=0u+0x00000004u; // 8021EEF4
  c->r[6]=0u+0x00000008u; // 8021EEF8
  c->r[7]=0u+0x0000000Fu; // 8021EEFC
  c->lr=0x8021EF04u; f_8020B720(c); // 8021EF00
  c->r[3]=0u+0x00000000u; // 8021EF04
  c->r[4]=0u+0x00000001u; // 8021EF08
  c->r[5]=0u+0x00000002u; // 8021EF0C
  c->r[6]=0u+0x00000004u; // 8021EF10
  c->r[7]=0u+0x00000007u; // 8021EF14
  c->lr=0x8021EF1Cu; f_8020B760(c); // 8021EF18
  c->r[28]=0u+0x00000001u; // 8021EF1C
  goto L_8021F174; // 8021EF20
L_8021EF24:;
  cmpu(c,0,c->r[0],0x00000002u); // 8021EF24
  if (!crb(c,2)) { goto L_8021EFDC; } // 8021EF28
  c->r[3]=0u+0x00000000u; // 8021EF2C
  c->r[4]=0u+0x00000000u; // 8021EF30
  c->r[5]=0u+0x00000000u; // 8021EF34
  c->r[6]=0u+0x000000FFu; // 8021EF38
  c->lr=0x8021EF40u; f_8020BBC0(c); // 8021EF3C
  c->r[3]=0u+0x00000000u; // 8021EF40
  c->r[4]=0u+0x0000000Fu; // 8021EF44
  c->r[5]=0u+0x0000000Fu; // 8021EF48
  c->r[6]=0u+0x0000000Fu; // 8021EF4C
  c->r[7]=0u+0x00000008u; // 8021EF50
  c->lr=0x8021EF58u; f_8020B720(c); // 8021EF54
  c->r[3]=0u+0x00000000u; // 8021EF58
  c->r[4]=0u+0x00000007u; // 8021EF5C
  c->r[5]=0u+0x00000007u; // 8021EF60
  c->r[6]=0u+0x00000007u; // 8021EF64
  c->r[7]=0u+0x00000004u; // 8021EF68
  c->lr=0x8021EF70u; f_8020B760(c); // 8021EF6C
  c->r[3]=0u+0x00000001u; // 8021EF70
  c->r[4]=0u+0x00000001u; // 8021EF74
  c->r[5]=0u+0x00000001u; // 8021EF78
  c->r[6]=0u+0x000000FFu; // 8021EF7C
  c->lr=0x8021EF84u; f_8020BBC0(c); // 8021EF80
  c->r[3]=0u+0x00000001u; // 8021EF84
  c->r[4]=0u+0x00000008u; // 8021EF88
  c->r[5]=0u+0x00000000u; // 8021EF8C
  c->r[6]=0u+0x0000000Eu; // 8021EF90
  c->r[7]=0u+0x0000000Fu; // 8021EF94
  c->lr=0x8021EF9Cu; f_8020B720(c); // 8021EF98
  c->r[3]=0u+0x00000001u; // 8021EF9C
  c->r[4]=0u+0x00000004u; // 8021EFA0
  c->r[5]=0u+0x00000000u; // 8021EFA4
  c->r[6]=0u+0x00000006u; // 8021EFA8
  c->r[7]=0u+0x00000007u; // 8021EFAC
  c->lr=0x8021EFB4u; f_8020B760(c); // 8021EFB0
  c->r[4]=0u+0x803A0000u; // 8021EFB4
  c->r[3]=0u+0x00000001u; // 8021EFB8
  c->r[4]=R32(c->r[4]+0x00007890u); // 8021EFBC
  c->lr=0x8021EFC4u; f_8020B990(c); // 8021EFC0
  c->r[4]=0u+0x803A0000u; // 8021EFC4
  c->r[3]=0u+0x00000001u; // 8021EFC8
  c->r[4]=R32(c->r[4]+0x000078B0u); // 8021EFCC
  c->lr=0x8021EFD4u; f_8020B9E0(c); // 8021EFD0
  c->r[28]=0u+0x00000002u; // 8021EFD4
  goto L_8021F090; // 8021EFD8
L_8021EFDC:;
  c->r[24]=0u+0x803A0000u; // 8021EFDC
  c->r[25]=0u+0x803A0000u; // 8021EFE0
  c->r[24]=c->r[24]+0x00007890u; // 8021EFE4
  c->r[23]=0u+0x00000000u; // 8021EFE8
  c->r[25]=c->r[25]+0x000078B0u; // 8021EFEC
  goto L_8021F080; // 8021EFF0
L_8021EFF4:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 8021EFF4
  c->r[4]=c->r[23]|c->r[23]; // 8021EFF8
  c->r[3]=c->r[22]|c->r[22]; // 8021EFFC
  c->r[5]=c->r[23]|c->r[23]; // 8021F000
  c->r[6]=0u+0x000000FFu; // 8021F004
  c->lr=0x8021F00Cu; f_8020BBC0(c); // 8021F008
  cmps(c,0,(int32_t)c->r[23],0); // 8021F00C
  c->r[7]=0u+0x00000000u; // 8021F010
  if (!crb(c,2)) { goto L_8021F01C; } // 8021F014
  c->r[7]=0u+0x0000000Fu; // 8021F018
L_8021F01C:;
  cmps(c,0,(int32_t)c->r[23],0); // 8021F01C
  c->r[31]=0u+0x00000000u; // 8021F020
  if (!crb(c,2)) { goto L_8021F02C; } // 8021F024
  c->r[31]=0u+0x00000007u; // 8021F028
L_8021F02C:;
  c->r[3]=c->r[22]|c->r[22]; // 8021F02C
  c->r[4]=0u+0x0000000Fu; // 8021F030
  c->r[5]=0u+0x00000008u; // 8021F034
  c->r[6]=0u+0x0000000Eu; // 8021F038
  c->lr=0x8021F040u; f_8020B720(c); // 8021F03C
  c->r[3]=c->r[22]|c->r[22]; // 8021F040
  c->r[7]=c->r[31]|c->r[31]; // 8021F044
  c->r[4]=0u+0x00000007u; // 8021F048
  c->r[5]=0u+0x00000004u; // 8021F04C
  c->r[6]=0u+0x00000006u; // 8021F050
  c->lr=0x8021F058u; f_8020B760(c); // 8021F054
  c->r[4]=R32(c->r[24]+0x00000000u); // 8021F058
  c->r[3]=c->r[22]|c->r[22]; // 8021F05C
  c->lr=0x8021F064u; f_8020B990(c); // 8021F060
  c->r[4]=R32(c->r[25]+0x00000000u); // 8021F064
  c->r[3]=c->r[22]|c->r[22]; // 8021F068
  c->lr=0x8021F070u; f_8020B9E0(c); // 8021F06C
  c->r[28]=c->r[28]+0x00000001u; // 8021F070
  c->r[24]=c->r[24]+0x00000004u; // 8021F074
  c->r[25]=c->r[25]+0x00000004u; // 8021F078
  c->r[23]=c->r[23]+0x00000001u; // 8021F07C
L_8021F080:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021F080
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8021F084
  cmpu(c,0,c->r[23],c->r[0]); // 8021F088
  if (crb(c,0)) { IRQCHK(c); goto L_8021EFF4; } // 8021F08C
L_8021F090:;
  c->r[3]=0u+0x80380000u; // 8021F090
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000024u); // 8021F094
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFFF840u); // 8021F098
  c->r[5]=0u+0x00000000u; // 8021F09C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8021F0A0
  if (!crb(c,2)) { goto L_8021F0E0; } // 8021F0A4
  c->r[4]=c->r[3]+0xFFFFF840u; // 8021F0A8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000026u); // 8021F0AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8021F0B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021F0B4
  if (!crb(c,2)) { goto L_8021F0E0; } // 8021F0B8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000028u); // 8021F0BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 8021F0C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021F0C4
  if (!crb(c,2)) { goto L_8021F0E0; } // 8021F0C8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Au); // 8021F0CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 8021F0D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021F0D4
  if (!crb(c,2)) { goto L_8021F0E0; } // 8021F0D8
  c->r[5]=0u+0x00000001u; // 8021F0DC
L_8021F0E0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8021F0E0
  if (crb(c,2)) { goto L_8021F128; } // 8021F0E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Cu); // 8021F0E8
  c->r[3]=0u+0x00000000u; // 8021F0EC
  cmps(c,0,(int32_t)c->r[0],255); // 8021F0F0
  if (!crb(c,2)) { goto L_8021F120; } // 8021F0F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Eu); // 8021F0F8
  cmps(c,0,(int32_t)c->r[0],255); // 8021F0FC
  if (!crb(c,2)) { goto L_8021F120; } // 8021F100
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000030u); // 8021F104
  cmps(c,0,(int32_t)c->r[0],255); // 8021F108
  if (!crb(c,2)) { goto L_8021F120; } // 8021F10C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000032u); // 8021F110
  cmps(c,0,(int32_t)c->r[0],255); // 8021F114
  if (!crb(c,2)) { goto L_8021F120; } // 8021F118
  c->r[3]=0u+0x00000001u; // 8021F11C
L_8021F120:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021F120
  if (!crb(c,2)) { goto L_8021F174; } // 8021F124
L_8021F128:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 8021F128
  c->r[4]=0u+0x000000FFu; // 8021F12C
  c->r[3]=c->r[22]|c->r[22]; // 8021F130
  c->r[5]=0u+0x000000FFu; // 8021F134
  c->r[6]=0u+0x000000FFu; // 8021F138
  c->lr=0x8021F140u; f_8020BBC0(c); // 8021F13C
  c->r[3]=c->r[22]|c->r[22]; // 8021F140
  c->r[4]=0u+0x00000002u; // 8021F144
  c->r[5]=0u+0x00000004u; // 8021F148
  c->r[6]=0u+0x00000000u; // 8021F14C
  c->r[7]=0u+0x0000000Fu; // 8021F150
  c->lr=0x8021F158u; f_8020B720(c); // 8021F154
  c->r[3]=c->r[22]|c->r[22]; // 8021F158
  c->r[4]=0u+0x00000001u; // 8021F15C
  c->r[5]=0u+0x00000002u; // 8021F160
  c->r[6]=0u+0x00000000u; // 8021F164
  c->r[7]=0u+0x00000007u; // 8021F168
  c->lr=0x8021F170u; f_8020B760(c); // 8021F16C
  c->r[28]=c->r[28]+0x00000001u; // 8021F170
L_8021F174:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021F174
  if (crb(c,2)) { goto L_8021F1C8; } // 8021F178
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 8021F17C
  c->r[4]=0u+0x000000FFu; // 8021F180
  c->r[3]=c->r[22]|c->r[22]; // 8021F184
  c->r[5]=0u+0x000000FFu; // 8021F188
  c->r[6]=0u+0x00000004u; // 8021F18C
  c->lr=0x8021F194u; f_8020BBC0(c); // 8021F190
  c->r[3]=c->r[22]|c->r[22]; // 8021F194
  c->r[4]=0u+0x0000000Fu; // 8021F198
  c->r[5]=0u+0x00000000u; // 8021F19C
  c->r[6]=0u+0x0000000Au; // 8021F1A0
  c->r[7]=0u+0x0000000Fu; // 8021F1A4
  c->lr=0x8021F1ACu; f_8020B720(c); // 8021F1A8
  c->r[3]=c->r[22]|c->r[22]; // 8021F1AC
  c->r[4]=0u+0x00000007u; // 8021F1B0
  c->r[5]=0u+0x00000000u; // 8021F1B4
  c->r[6]=0u+0x00000005u; // 8021F1B8
  c->r[7]=0u+0x00000007u; // 8021F1BC
  c->lr=0x8021F1C4u; f_8020B760(c); // 8021F1C0
  c->r[28]=c->r[28]+0x00000001u; // 8021F1C4
L_8021F1C8:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 8021F1C8
  c->r[23]=0u+0x00000000u; // 8021F1CC
  goto L_8021F22C; // 8021F1D0
L_8021F1D4:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 8021F1D4
  c->r[4]=0u+0x00000000u; // 8021F1D8
  c->r[3]=c->r[24]|c->r[24]; // 8021F1DC
  c->r[5]=0u+0x00000000u; // 8021F1E0
  c->r[6]=0u+0x00000000u; // 8021F1E4
  c->r[7]=0u+0x00000001u; // 8021F1E8
  c->r[8]=0u+0x00000000u; // 8021F1EC
  c->lr=0x8021F1F4u; f_8020B7A0(c); // 8021F1F0
  c->r[3]=c->r[24]|c->r[24]; // 8021F1F4
  c->r[4]=0u+0x00000000u; // 8021F1F8
  c->r[5]=0u+0x00000000u; // 8021F1FC
  c->r[6]=0u+0x00000000u; // 8021F200
  c->r[7]=0u+0x00000001u; // 8021F204
  c->r[8]=0u+0x00000000u; // 8021F208
  c->lr=0x8021F210u; f_8020B800(c); // 8021F20C
  c->r[3]=c->r[24]|c->r[24]; // 8021F210
  c->lr=0x8021F218u; f_8020B5C0(c); // 8021F214
  c->r[3]=c->r[24]|c->r[24]; // 8021F218
  c->r[4]=0u+0x00000000u; // 8021F21C
  c->r[5]=0u+0x00000000u; // 8021F220
  c->lr=0x8021F228u; f_8020BA30(c); // 8021F224
  c->r[23]=c->r[23]+0x00000001u; // 8021F228
L_8021F22C:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 8021F22C
  cmpu(c,0,c->r[0],c->r[22]); // 8021F230
  if (crb(c,0)) { IRQCHK(c); goto L_8021F1D4; } // 8021F234
  c->r[3]=c->r[22]|c->r[22]; // 8021F238
  c->lr=0x8021F240u; f_8020BD20(c); // 8021F23C
L_8021F240:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021F240
  if (crb(c,2)) { goto L_8021F344; } // 8021F244
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 8021F248
  c->r[3]=0u+0x80380000u; // 8021F24C
  {uint32_t ea=c->r[3]+0xFFFFF854u; c->f[30]=c->ps1[30]=RF32(ea);} // 8021F250
  c->r[31]=c->r[1]+0x0000002Cu; // 8021F254
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8021F258
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 8021F25C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021F260
  c->r[4]=rotl(c->r[9],26)&0x00000004u; // 8021F264
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 8021F268
  c->r[11]=R32(c->r[26]+0x00000058u); // 8021F26C
  c->r[6]=rotl(c->r[9],27)&0x00000004u; // 8021F270
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 8021F274
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 8021F278
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 8021F27C
  c->r[3]=c->r[3]+c->r[0]; // 8021F280
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 8021F284
  c->r[0]=c->r[10]+c->r[9]; // 8021F288
  c->r[6]=c->r[7]+c->r[6]; // 8021F28C
  c->r[4]=c->r[8]+c->r[4]; // 8021F290
  c->r[3]=c->r[5]+c->r[3]; // 8021F294
  c->r[4]=c->r[6]+c->r[4]; // 8021F298
  c->r[0]=c->r[11]+c->r[0]; // 8021F29C
  c->r[3]=c->r[4]+c->r[3]; // 8021F2A0
  c->r[27]=0u+0x00000000u; // 8021F2A4
  c->r[24]=c->r[3]+c->r[0]; // 8021F2A8
  goto L_8021F334; // 8021F2AC
L_8021F2B0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8021F2B0
  cmps(c,0,(int32_t)c->r[0],0); // 8021F2B4
  if (crb(c,2)) { goto L_8021F328; } // 8021F2B8
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2BC
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 8021F2C0
  c->lr=0x8021F2C8u; f_80224A20(c); // 8021F2C4
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2C8
  c->f[31]=c->f[1]; // 8021F2CC
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 8021F2D0
  c->lr=0x8021F2D8u; f_802249A0(c); // 8021F2D4
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2D8
  c->f[2]=-c->f[1]; // 8021F2DC
  c->r[3]=c->r[27]+0x00000001u; // 8021F2E0
  c->r[4]=c->r[1]+0x00000068u; // 8021F2E4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8021F2E8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8021F2EC
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2F0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8021F2F4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8021F2F8
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F2FC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8021F300
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F304
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8021F308
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8021F30C
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F310
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8021F314
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8021F318
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F31C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8021F320
  c->lr=0x8021F328u; f_8021C6C0(c); // 8021F324
L_8021F328:;
  c->r[31]=c->r[31]+0x00000001u; // 8021F328
  c->r[24]=c->r[24]+0x00000014u; // 8021F32C
  c->r[27]=c->r[27]+0x00000001u; // 8021F330
L_8021F334:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021F334
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 8021F338
  cmpu(c,0,c->r[27],c->r[0]); // 8021F33C
  if (crb(c,0)) { IRQCHK(c); goto L_8021F2B0; } // 8021F340
L_8021F344:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021F344
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 8021F348
  c->lr=0x8021F350u; f_8020B5A0(c); // 8021F34C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021F350
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 8021F354
  if (crb(c,2)) { goto L_8021F3E8; } // 8021F358
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 8021F35C
  c->r[27]=0u+0x00000000u; // 8021F360
  c->r[10]=R32(c->r[26]+0x00000058u); // 8021F364
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8021F368
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 8021F36C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021F370
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 8021F374
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 8021F378
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 8021F37C
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 8021F380
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 8021F384
  c->r[0]=c->r[3]+c->r[0]; // 8021F388
  c->r[5]=c->r[7]+c->r[5]; // 8021F38C
  c->r[3]=c->r[8]+c->r[6]; // 8021F390
  c->r[6]=rotl(c->r[9],29)&0x00000004u; // 8021F394
  c->r[3]=c->r[5]+c->r[3]; // 8021F398
  c->r[0]=c->r[4]+c->r[0]; // 8021F39C
  c->r[3]=c->r[6]+c->r[3]; // 8021F3A0
  c->r[0]=c->r[10]+c->r[0]; // 8021F3A4
  c->r[24]=c->r[3]+c->r[0]; // 8021F3A8
  goto L_8021F3D8; // 8021F3AC
L_8021F3B0:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 8021F3B0
  c->r[3]=c->r[27]|c->r[27]; // 8021F3B4
  c->r[5]=R8(c->r[24]+0x00000001u); // 8021F3B8
  c->lr=0x8021F3C0u; f_8020B4D0(c); // 8021F3BC
  c->r[4]=R8(c->r[24]+0x00000002u); // 8021F3C0
  c->r[3]=c->r[27]|c->r[27]; // 8021F3C4
  c->r[5]=R8(c->r[24]+0x00000003u); // 8021F3C8
  c->lr=0x8021F3D0u; f_8020B3D0(c); // 8021F3CC
  c->r[24]=c->r[24]+0x00000004u; // 8021F3D0
  c->r[27]=c->r[27]+0x00000001u; // 8021F3D4
L_8021F3D8:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8021F3D8
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 8021F3DC
  cmpu(c,0,c->r[27],c->r[0]); // 8021F3E0
  if (crb(c,0)) { IRQCHK(c); goto L_8021F3B0; } // 8021F3E4
L_8021F3E8:;
  c->r[7]=R32(c->r[26]+0x0000004Cu); // 8021F3E8
  c->r[0]=rotl(c->r[7],26)&0x00000001u; cr0(c,c->r[0]); // 8021F3EC
  if (crb(c,2)) { goto L_8021F44C; } // 8021F3F0
  c->r[5]=rotl(c->r[7],20)&0x00000004u; // 8021F3F4
  c->r[0]=rotl(c->r[7],27)&0x00000004u; // 8021F3F8
  c->r[0]=c->r[5]+c->r[0]; // 8021F3FC
  c->r[4]=rotl(c->r[7],26)&0x00000004u; // 8021F400
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 8021F404
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 8021F408
  c->r[0]=c->r[4]+c->r[0]; // 8021F40C
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 8021F410
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8021F414
  c->r[7]=R32(c->r[26]+0x00000058u); // 8021F418
  c->r[3]=c->r[6]+c->r[5]; // 8021F41C
  c->r[0]=c->r[7]+c->r[0]; // 8021F420
  c->r[3]=c->r[4]+c->r[3]; // 8021F424
  c->r[6]=c->r[3]+c->r[0]; // 8021F428
  c->r[0]=R8(c->r[3]+c->r[0]); // 8021F42C
  c->r[4]=R8(c->r[6]+0x00000002u); // 8021F430
  c->r[5]=R8(c->r[6]+0x00000001u); // 8021F434
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 8021F438
  c->r[7]=R8(c->r[6]+0x00000003u); // 8021F43C
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 8021F440
  c->lr=0x8021F448u; f_8020BAF0(c); // 8021F444
  goto L_8021F464; // 8021F448
L_8021F44C:;
  c->r[3]=0u+0x00000007u; // 8021F44C
  c->r[4]=0u+0x00000000u; // 8021F450
  c->r[5]=0u+0x00000000u; // 8021F454
  c->r[6]=0u+0x00000007u; // 8021F458
  c->r[7]=0u+0x00000000u; // 8021F45C
  c->lr=0x8021F464u; f_8020BAF0(c); // 8021F460
L_8021F464:;
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 8021F464
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 8021F468
  if (crb(c,2)) { goto L_8021F4C8; } // 8021F46C
  c->r[4]=rotl(c->r[3],8)&0x0000000Fu; // 8021F470
  c->r[8]=rotl(c->r[3],28)&0x00000004u; // 8021F474
  c->r[0]=rotl(c->r[3],26)&0x00000004u; // 8021F478
  c->r[7]=rotl(c->r[3],20)&0x00000004u; // 8021F47C
  c->r[6]=rotl(c->r[3],27)&0x00000004u; // 8021F480
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 8021F484
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8021F488
  c->r[0]=c->r[8]+c->r[0]; // 8021F48C
  c->r[6]=c->r[7]+c->r[6]; // 8021F490
  c->r[7]=R32(c->r[26]+0x00000058u); // 8021F494
  c->r[0]=c->r[6]+c->r[0]; // 8021F498
  c->r[3]=c->r[5]+c->r[3]; // 8021F49C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8021F4A0
  c->r[0]=c->r[7]+c->r[0]; // 8021F4A4
  c->r[3]=c->r[4]+c->r[3]; // 8021F4A8
  c->r[6]=c->r[3]+c->r[0]; // 8021F4AC
  c->r[3]=R8(c->r[3]+c->r[0]); // 8021F4B0
  c->r[4]=R8(c->r[6]+0x00000001u); // 8021F4B4
  c->r[5]=R8(c->r[6]+0x00000002u); // 8021F4B8
  c->r[6]=R8(c->r[6]+0x00000003u); // 8021F4BC
  c->lr=0x8021F4C4u; f_8020C090(c); // 8021F4C0
  goto L_8021F4DC; // 8021F4C4
L_8021F4C8:;
  c->r[3]=0u+0x00000001u; // 8021F4C8
  c->r[4]=0u+0x00000004u; // 8021F4CC
  c->r[5]=0u+0x00000005u; // 8021F4D0
  c->r[6]=0u+0x0000000Fu; // 8021F4D4
  c->lr=0x8021F4DCu; f_8020C090(c); // 8021F4D8
L_8021F4DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021F4DC
  c->r[3]=0u+0x00000000u; // 8021F4E0
  if (crb(c,2)) { goto L_8021F4F4; } // 8021F4E4
  cmps(c,0,(int32_t)c->r[30],0); // 8021F4E8
  if (crb(c,2)) { goto L_8021F4F4; } // 8021F4EC
  c->r[3]=0u+0x00000001u; // 8021F4F0
L_8021F4F4:;
  c->r[11]=c->r[1]+0x00000100u; // 8021F4F4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 8021F4F8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 8021F4FC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 8021F500
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 8021F504
  c->lr=0x8021F50Cu; f_800C2E84(c); // 8021F508
  c->r[0]=R32(c->r[1]+0x00000124u); // 8021F50C
  c->lr=c->r[0]; // 8021F510
  c->r[1]=c->r[1]+0x00000120u; // 8021F514
  return; // 8021F518
}

// fn_8021F520
void f_8021F520(Ctx* __restrict c) {
  trace_call(0x8021F520u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 8021F520
  c->r[0]=c->r[3]|c->r[3]; // 8021F524
  c->r[3]=c->r[4]|c->r[4]; // 8021F528
  c->r[12]=R32(c->r[12]+0x00000014u); // 8021F52C
  c->r[4]=c->r[0]|c->r[0]; // 8021F530
  c->ctr=c->r[12]; // 8021F534
  if (true) { dispatch(c,c->ctr); return; } // 8021F538
}

// fn_8021F540
void f_8021F540(Ctx* __restrict c) {
  trace_call(0x8021F540u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F540
  c->r[0]=c->lr; // 8021F544
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F548
  c->r[11]=c->r[1]+0x00000030u; // 8021F54C
  c->lr=0x8021F554u; f_800C2E48(c); // 8021F550
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8021F554
  c->r[26]=c->r[3]|c->r[3]; // 8021F558
  c->r[27]=c->r[4]|c->r[4]; // 8021F55C
  c->r[30]=c->r[3]+0x0000001Cu; // 8021F560
  c->r[29]=0u+0x00000000u; // 8021F564
  goto L_8021F5A0; // 8021F568
L_8021F56C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021F56C
  c->r[28]=c->r[31]|c->r[31]; // 8021F570
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021F574
  if (crb(c,2)) { goto L_8021F588; } // 8021F578
  c->r[0]=R32(c->r[28]+0x00000008u); // 8021F57C
  cmpu(c,0,c->r[0],c->r[27]); // 8021F580
  if (!crb(c,2)) { goto L_8021F5A0; } // 8021F584
L_8021F588:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8021F588
  c->r[3]=c->r[26]+0x00000018u; // 8021F58C
  c->r[4]=c->r[1]+0x00000008u; // 8021F590
  c->lr=0x8021F598u; f_80226930(c); // 8021F594
  W32(c->r[28]+0x00000008u,c->r[29]); // 8021F598
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 8021F59C
L_8021F5A0:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021F5A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8021F56C; } // 8021F5A4
  c->r[11]=c->r[1]+0x00000030u; // 8021F5A8
  c->lr=0x8021F5B0u; f_800C2E94(c); // 8021F5AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021F5B0
  c->lr=c->r[0]; // 8021F5B4
  c->r[1]=c->r[1]+0x00000030u; // 8021F5B8
  return; // 8021F5BC
}

// fn_8021F5C0
void f_8021F5C0(Ctx* __restrict c) {
  trace_call(0x8021F5C0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021F5C0
  c->r[4]=0u+0x00000000u; // 8021F5C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8021F5C8
  c->ctr=c->r[12]; // 8021F5CC
  if (true) { dispatch(c,c->ctr); return; } // 8021F5D0
}

// Animate__Q36nw4hbm3lyt8MaterialFv
void f_8021F5E0(Ctx* __restrict c) {
  trace_call(0x8021F5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F5E0
  c->r[0]=c->lr; // 8021F5E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021F5E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021F5EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021F5F0
  c->r[30]=c->r[3]+0x0000001Cu; // 8021F5F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021F5F8
  c->r[29]=c->r[3]|c->r[3]; // 8021F5FC
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8021F600
  goto L_8021F634; // 8021F604
L_8021F608:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8021F608
  cmps(c,0,(int32_t)c->r[0],0); // 8021F60C
  if (!crb(c,2)) { goto L_8021F630; } // 8021F610
  c->r[3]=R32(c->r[31]+0x00000008u); // 8021F614
  c->r[5]=c->r[29]|c->r[29]; // 8021F618
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 8021F61C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021F620
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8021F624
  c->ctr=c->r[12]; // 8021F628
  if (true) { c->lr=0x8021F630u; dispatch(c,c->ctr); } // 8021F62C
L_8021F630:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021F630
L_8021F634:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021F634
  if (!crb(c,2)) { IRQCHK(c); goto L_8021F608; } // 8021F638
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021F63C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021F640
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021F644
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021F648
  c->lr=c->r[0]; // 8021F64C
  c->r[1]=c->r[1]+0x00000020u; // 8021F650
  return; // 8021F654
}

// AddAnimationLink__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimationLink
void f_8021F660(Ctx* __restrict c) {
  trace_call(0x8021F660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F660
  c->r[0]=c->lr; // 8021F664
  c->r[5]=c->r[4]|c->r[4]; // 8021F668
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F66C
  c->r[0]=c->r[3]+0x0000001Cu; // 8021F670
  c->r[3]=c->r[3]+0x00000018u; // 8021F674
  c->r[4]=c->r[1]+0x00000008u; // 8021F678
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021F67C
  c->lr=0x8021F684u; f_80226980(c); // 8021F680
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F684
  c->lr=c->r[0]; // 8021F688
  c->r[1]=c->r[1]+0x00000010u; // 8021F68C
  return; // 8021F690
}

// FindAnimationLink__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransform
void f_8021F6A0(Ctx* __restrict c) {
  trace_call(0x8021F6A0u);
  c->r[3]=c->r[3]+0x00000018u; // 8021F6A0
  f_8021A110(c); return; // 8021F6A4
}

// SetAnimationEnable__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransformb
void f_8021F6B0(Ctx* __restrict c) {
  trace_call(0x8021F6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F6B0
  c->r[0]=c->lr; // 8021F6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021F6BC
  c->r[31]=c->r[5]|c->r[5]; // 8021F6C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021F6C4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8021F6C8
  c->ctr=c->r[12]; // 8021F6CC
  if (true) { c->lr=0x8021F6D4u; dispatch(c,c->ctr); } // 8021F6D0
  cmps(c,0,(int32_t)c->r[3],0); // 8021F6D4
  if (crb(c,2)) { goto L_8021F6E8; } // 8021F6D8
  c->r[0]=cntlz(c->r[31]); // 8021F6DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021F6E0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8021F6E4
L_8021F6E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F6E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021F6EC
  c->lr=c->r[0]; // 8021F6F0
  c->r[1]=c->r[1]+0x00000010u; // 8021F6F4
  return; // 8021F6F8
}

// GetTextureSize__Q36nw4hbm3lyt6detailFPQ36nw4hbm3lyt8MaterialUc
void f_8021F700(Ctx* __restrict c) {
  trace_call(0x8021F700u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F700
  c->r[0]=c->lr; // 8021F704
  W32(c->r[1]+0x00000064u,c->r[0]); // 8021F708
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8021F70C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8021F710
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8021F714
  c->r[31]=c->r[3]|c->r[3]; // 8021F718
  W32(c->r[1]+0x00000048u,c->r[30]); // 8021F71C
  W32(c->r[1]+0x00000044u,c->r[29]); // 8021F720
  c->r[0]=R32(c->r[4]+0x00000050u); // 8021F724
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8021F728
  cmpu(c,0,c->r[5],c->r[0]); // 8021F72C
  if (crb(c,0)) { goto L_8021F748; } // 8021F730
  c->r[4]=0u+0x80380000u; // 8021F734
  {uint32_t ea=c->r[4]+0xFFFFF858u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F738
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8021F73C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8021F740
  goto L_8021F7EC; // 8021F744
L_8021F748:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 8021F748
  c->r[6]=R32(c->r[4]+0x00000058u); // 8021F74C
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 8021F750
  c->r[3]=c->r[1]+0x00000008u; // 8021F754
  c->r[4]=0u+0x00000000u; // 8021F758
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021F75C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021F760
  W32(c->r[1]+0x00000008u,c->r[5]); // 8021F764
  c->r[5]=R32(c->r[6]+0x00000008u); // 8021F768
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8021F76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F770
  W32(c->r[1]+0x00000010u,c->r[5]); // 8021F774
  c->r[5]=R32(c->r[6]+0x00000010u); // 8021F778
  c->r[0]=R32(c->r[6]+0x00000014u); // 8021F77C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021F780
  W32(c->r[1]+0x00000018u,c->r[5]); // 8021F784
  c->r[5]=R32(c->r[6]+0x00000018u); // 8021F788
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8021F78C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021F790
  W32(c->r[1]+0x00000020u,c->r[5]); // 8021F794
  c->lr=0x8021F79Cu; f_8020A740(c); // 8021F798
  c->r[3]=c->r[1]+0x00000008u; // 8021F79C
  c->lr=0x8021F7A4u; f_8020A780(c); // 8021F7A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8021F7A4
  c->r[30]=0u+0x43300000u; // 8021F7A8
  c->r[29]=0u+0x80380000u; // 8021F7AC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8021F7B0
  {uint32_t ea=c->r[29]+0xFFFFF868u; c->f[1]=RF64(ea);} // 8021F7B4
  c->r[3]=c->r[1]+0x00000008u; // 8021F7B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8021F7BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8021F7C0
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8021F7C4
  c->lr=0x8021F7CCu; f_8020A760(c); // 8021F7C8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8021F7CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F7D0
  {uint32_t ea=c->r[29]+0xFFFFF868u; c->f[1]=RF64(ea);} // 8021F7D4
  W32(c->r[1]+0x00000030u,c->r[30]); // 8021F7D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8021F7DC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 8021F7E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8021F7E4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8021F7E8
L_8021F7EC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8021F7EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8021F7F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8021F7F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8021F7F8
  c->r[30]=R32(c->r[1]+0x00000048u); // 8021F7FC
  c->r[29]=R32(c->r[1]+0x00000044u); // 8021F800
  c->lr=c->r[0]; // 8021F804
  c->r[1]=c->r[1]+0x00000060u; // 8021F808
  return; // 8021F80C
}

// __ct__Q36nw4hbm3lyt4PaneFPCQ46nw4hbm3lyt3res4Pane
void f_8021F810(Ctx* __restrict c) {
  trace_call(0x8021F810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F810
  c->r[0]=c->lr; // 8021F814
  c->r[5]=0u+0x80380000u; // 8021F818
  c->r[6]=0u+0x803A0000u; // 8021F81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021F820
  c->r[0]=0u+0x00000000u; // 8021F824
  {uint32_t ea=c->r[5]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F828
  c->r[7]=c->r[3]+0x00000014u; // 8021F82C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021F830
  c->r[8]=c->r[3]+0x00000020u; // 8021F834
  c->r[6]=c->r[6]+0x00007918u; // 8021F838
  c->r[31]=c->r[4]|c->r[4]; // 8021F83C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021F840
  c->r[30]=c->r[3]|c->r[3]; // 8021F844
  c->r[5]=0u+0x00000010u; // 8021F848
  W32(c->r[3]+0x00000004u,c->r[0]); // 8021F84C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8021F850
  W32(c->r[3]+0x00000000u,c->r[6]); // 8021F854
  W32(c->r[3]+0x00000010u,c->r[0]); // 8021F858
  W32(c->r[3]+0x00000014u,c->r[7]); // 8021F85C
  W32(c->r[3]+0x00000018u,c->r[7]); // 8021F860
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8021F864
  W32(c->r[3]+0x00000020u,c->r[8]); // 8021F868
  W32(c->r[3]+0x00000024u,c->r[8]); // 8021F86C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021F870
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 8021F874
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021F878
  W32(c->r[3]+0x00000028u,c->r[0]); // 8021F87C
  W8(c->r[3]+0x000000D0u,c->r[0]); // 8021F880
  c->r[0]=R8(c->r[4]+0x00000009u); // 8021F884
  c->r[4]=c->r[4]+0x0000000Cu; // 8021F888
  W8(c->r[3]+0x000000CCu,c->r[0]); // 8021F88C
  c->r[3]=c->r[3]+0x000000B4u; // 8021F890
  c->lr=0x8021F898u; f_800CA310(c); // 8021F894
  c->r[3]=c->r[30]+0x000000C4u; // 8021F898
  c->r[4]=c->r[31]+0x0000001Cu; // 8021F89C
  c->r[5]=0u+0x00000008u; // 8021F8A0
  c->lr=0x8021F8A8u; f_800CA310(c); // 8021F8A4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8A8
  c->r[3]=c->r[30]|c->r[30]; // 8021F8AC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8021F8B0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8B4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8021F8B8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8BC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8021F8C0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8C4
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8021F8C8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8CC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8021F8D0
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8D4
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 8021F8D8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8DC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 8021F8E0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8E4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8021F8E8
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8EC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021F8F0
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021F8F4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8021F8F8
  c->r[0]=R8(c->r[31]+0x0000000Au); // 8021F8FC
  W8(c->r[30]+0x000000CDu,c->r[0]); // 8021F900
  W8(c->r[30]+0x000000CEu,c->r[0]); // 8021F904
  c->r[0]=R8(c->r[31]+0x00000008u); // 8021F908
  W8(c->r[30]+0x000000CFu,c->r[0]); // 8021F90C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021F910
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021F914
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021F918
  c->lr=c->r[0]; // 8021F91C
  c->r[1]=c->r[1]+0x00000010u; // 8021F920
  return; // 8021F924
}

// fn_8021F930
void f_8021F930(Ctx* __restrict c) {
  trace_call(0x8021F930u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021F930
  c->r[0]=c->lr; // 8021F934
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021F938
  c->r[11]=c->r[1]+0x00000030u; // 8021F93C
  c->lr=0x8021F944u; f_800C2E48(c); // 8021F940
  cmps(c,0,(int32_t)c->r[3],0); // 8021F944
  c->r[26]=c->r[3]|c->r[3]; // 8021F948
  c->r[27]=c->r[4]|c->r[4]; // 8021F94C
  if (crb(c,2)) { goto L_8021FA48; } // 8021F950
  c->r[4]=0u+0x803A0000u; // 8021F954
  c->r[31]=R32(c->r[3]+0x00000014u); // 8021F958
  c->r[4]=c->r[4]+0x00007918u; // 8021F95C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8021F960
  c->r[30]=c->r[3]+0x00000014u; // 8021F964
  c->r[29]=0u+0x80490000u; // 8021F968
  goto L_8021F9BC; // 8021F96C
L_8021F970:;
  c->r[28]=c->r[31]|c->r[31]; // 8021F970
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021F974
  c->r[3]=c->r[26]+0x00000010u; // 8021F978
  c->r[4]=c->r[1]+0x00000008u; // 8021F97C
  W32(c->r[1]+0x00000008u,c->r[28]); // 8021F980
  c->lr=0x8021F988u; f_80226930(c); // 8021F984
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8021F988
  c->r[0]=R8(c->r[28]+0x000000D0u); // 8021F98C
  cmps(c,0,(int32_t)c->r[0],0); // 8021F990
  if (!crb(c,2)) { goto L_8021F9BC; } // 8021F994
  c->r[12]=R32(c->r[28]+0x00000000u); // 8021F998
  c->r[3]=c->r[28]|c->r[28]; // 8021F99C
  c->r[4]=0u+0xFFFFFFFFu; // 8021F9A0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021F9A4
  c->ctr=c->r[12]; // 8021F9A8
  if (true) { c->lr=0x8021F9B0u; dispatch(c,c->ctr); } // 8021F9AC
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021F9B0
  c->r[4]=c->r[28]|c->r[28]; // 8021F9B4
  c->lr=0x8021F9BCu; f_8023B6E0(c); // 8021F9B8
L_8021F9BC:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021F9BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8021F970; } // 8021F9C0
  c->r[12]=R32(c->r[26]+0x00000000u); // 8021F9C4
  c->r[3]=c->r[26]|c->r[26]; // 8021F9C8
  c->r[4]=0u+0x00000000u; // 8021F9CC
  c->r[12]=R32(c->r[12]+0x00000050u); // 8021F9D0
  c->ctr=c->r[12]; // 8021F9D4
  if (true) { c->lr=0x8021F9DCu; dispatch(c,c->ctr); } // 8021F9D8
  c->r[3]=R32(c->r[26]+0x00000028u); // 8021F9DC
  cmps(c,0,(int32_t)c->r[3],0); // 8021F9E0
  if (crb(c,2)) { goto L_8021FA18; } // 8021F9E4
  c->r[0]=R8(c->r[3]+0x00000054u); // 8021F9E8
  cmps(c,0,(int32_t)c->r[0],0); // 8021F9EC
  if (!crb(c,2)) { goto L_8021FA18; } // 8021F9F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021F9F4
  c->r[4]=0u+0xFFFFFFFFu; // 8021F9F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021F9FC
  c->ctr=c->r[12]; // 8021FA00
  if (true) { c->lr=0x8021FA08u; dispatch(c,c->ctr); } // 8021FA04
  c->r[3]=0u+0x80490000u; // 8021FA08
  c->r[4]=R32(c->r[26]+0x00000028u); // 8021FA0C
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021FA10
  c->lr=0x8021FA18u; f_8023B6E0(c); // 8021FA14
L_8021FA18:;
  c->r[3]=addc(c,c->r[26],0x0000001Cu,0); cr0(c,c->r[3]); // 8021FA18
  if (crb(c,2)) { goto L_8021FA28; } // 8021FA1C
  c->r[4]=0u+0x00000000u; // 8021FA20
  c->lr=0x8021FA28u; f_802268A0(c); // 8021FA24
L_8021FA28:;
  c->r[3]=addc(c,c->r[26],0x00000010u,0); cr0(c,c->r[3]); // 8021FA28
  if (crb(c,2)) { goto L_8021FA38; } // 8021FA2C
  c->r[4]=0u+0x00000000u; // 8021FA30
  c->lr=0x8021FA38u; f_802268A0(c); // 8021FA34
L_8021FA38:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021FA38
  if (!crb(c,1)) { goto L_8021FA48; } // 8021FA3C
  c->r[3]=c->r[26]|c->r[26]; // 8021FA40
  c->lr=0x8021FA48u; f_800C2AC0(c); // 8021FA44
L_8021FA48:;
  c->r[11]=c->r[1]+0x00000030u; // 8021FA48
  c->r[3]=c->r[26]|c->r[26]; // 8021FA4C
  c->lr=0x8021FA54u; f_800C2E94(c); // 8021FA50
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021FA54
  c->lr=c->r[0]; // 8021FA58
  c->r[1]=c->r[1]+0x00000030u; // 8021FA5C
  return; // 8021FA60
}

// AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane
void f_8021FA70(Ctx* __restrict c) {
  trace_call(0x8021FA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FA70
  c->r[0]=c->lr; // 8021FA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021FA78
  c->r[0]=c->r[3]+0x00000014u; // 8021FA7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021FA80
  c->r[31]=c->r[4]|c->r[4]; // 8021FA84
  c->r[4]=c->r[1]+0x00000008u; // 8021FA88
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021FA8C
  c->r[30]=c->r[3]|c->r[3]; // 8021FA90
  c->r[3]=c->r[3]+0x00000010u; // 8021FA94
  c->r[5]=c->r[31]+0x00000004u; // 8021FA98
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021FA9C
  c->lr=0x8021FAA4u; f_80226980(c); // 8021FAA0
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 8021FAA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021FAA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021FAAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021FAB0
  c->lr=c->r[0]; // 8021FAB4
  c->r[1]=c->r[1]+0x00000020u; // 8021FAB8
  return; // 8021FABC
}

// fn_8021FAC0
void f_8021FAC0(Ctx* __restrict c) {
  trace_call(0x8021FAC0u);
  c->r[6]=0u+0x55550000u; // 8021FAC0
  c->r[8]=R8(c->r[4]+0x000000CCu); // 8021FAC4
  c->r[0]=c->r[6]+0x00005556u; // 8021FAC8
  c->r[7]=0u+0x80380000u; // 8021FACC
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 8021FAD0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FAD4
  {uint32_t ea=c->r[7]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FAD8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8021FADC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8021FAE0
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8021FAE4
  c->r[0]=c->r[6]+c->r[0]; // 8021FAE8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8021FAEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8021FAF0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FAF4
  c->r[0]=c->r[8]-c->r[0]; // 8021FAF8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8021FAFC
  cmps(c,0,(int32_t)c->r[0],1); // 8021FB00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FB04
  if (crb(c,2)) { goto L_8021FB1C; } // 8021FB08
  cmps(c,0,(int32_t)c->r[0],2); // 8021FB0C
  if (crb(c,2)) { goto L_8021FB38; } // 8021FB10
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8021FB14
  goto L_8021FB44; // 8021FB18
L_8021FB1C:;
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FB1C
  c->r[6]=0u+0x80380000u; // 8021FB20
  {uint32_t ea=c->r[6]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FB24
  c->f[1]=-c->f[1]; // 8021FB28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8021FB2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8021FB30
  goto L_8021FB44; // 8021FB34
L_8021FB38:;
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FB38
  c->f[0]=-c->f[0]; // 8021FB3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8021FB40
L_8021FB44:;
  c->r[6]=0u+0x55550000u; // 8021FB44
  c->r[0]=c->r[6]+0x00005556u; // 8021FB48
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 8021FB4C
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8021FB50
  c->r[0]=c->r[6]+c->r[0]; // 8021FB54
  cmps(c,0,(int32_t)c->r[0],1); // 8021FB58
  if (crb(c,2)) { goto L_8021FB78; } // 8021FB5C
  cmps(c,0,(int32_t)c->r[0],2); // 8021FB60
  if (crb(c,2)) { goto L_8021FB94; } // 8021FB64
  c->r[6]=0u+0x80380000u; // 8021FB68
  {uint32_t ea=c->r[6]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FB6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FB70
  goto L_8021FBA0; // 8021FB74
L_8021FB78:;
  {uint32_t ea=c->r[4]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FB78
  c->r[6]=0u+0x80380000u; // 8021FB7C
  {uint32_t ea=c->r[6]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FB80
  c->f[1]=-c->f[1]; // 8021FB84
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8021FB88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FB8C
  goto L_8021FBA0; // 8021FB90
L_8021FB94:;
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FB94
  c->f[0]=-c->f[0]; // 8021FB98
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FB9C
L_8021FBA0:;
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FBA0
  c->r[6]=0u+0x80380000u; // 8021FBA4
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FBA8
  c->r[7]=R32(c->r[1]+0x00000008u); // 8021FBAC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8021FBB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8021FBB4
  W32(c->r[1]+0x00000018u,c->r[7]); // 8021FBB8
  {uint32_t ea=c->r[6]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FBBC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021FBC0
  fcmp(c,0,c->f[1],c->f[0]); // 8021FBC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021FBC8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021FBCC
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FBD0
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FBD4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8021FBD8
  W32(c->r[1]+0x00000010u,c->r[7]); // 8021FBDC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8021FBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021FBE4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 8021FBE8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8021FBEC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8021FBF0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FBF4
  c->r[0]=c->cr; // 8021FBF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8021FBFC
  if (crb(c,2)) { goto L_8021FC14; } // 8021FC00
  c->f[1]=-c->f[2]; // 8021FC04
  c->f[0]=-c->f[0]; // 8021FC08
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8021FC0C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FC10
L_8021FC14:;
  c->r[1]=c->r[1]+0x00000020u; // 8021FC14
  return; // 8021FC18
}

// fn_8021FC20
void f_8021FC20(Ctx* __restrict c) {
  trace_call(0x8021FC20u);
  c->r[0]=0u+0xFFFFFFFFu; // 8021FC20
  W32(c->r[3]+0x00000000u,c->r[0]); // 8021FC24
  return; // 8021FC28
}

// fn_8021FC30
void f_8021FC30(Ctx* __restrict c) {
  trace_call(0x8021FC30u);
  return; // 8021FC30
}

// fn_8021FC40
void f_8021FC40(Ctx* __restrict c) {
  trace_call(0x8021FC40u);
  cmpu(c,0,c->r[4],0x00000010u); // 8021FC40
  if (!crb(c,2)) { goto L_8021FC50; } // 8021FC44
  c->r[3]=R8(c->r[3]+0x000000CDu); // 8021FC48
  return; // 8021FC4C
L_8021FC50:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021FC50
  c->r[12]=R32(c->r[12]+0x00000034u); // 8021FC54
  c->ctr=c->r[12]; // 8021FC58
  if (true) { dispatch(c,c->ctr); return; } // 8021FC5C
}

// fn_8021FC60
void f_8021FC60(Ctx* __restrict c) {
  trace_call(0x8021FC60u);
  return; // 8021FC60
}

// fn_8021FC70
void f_8021FC70(Ctx* __restrict c) {
  trace_call(0x8021FC70u);
  cmpu(c,0,c->r[4],0x00000010u); // 8021FC70
  if (!crb(c,2)) { goto L_8021FC80; } // 8021FC74
  W8(c->r[3]+0x000000CDu,c->r[5]); // 8021FC78
  return; // 8021FC7C
L_8021FC80:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021FC80
  c->r[12]=R32(c->r[12]+0x00000038u); // 8021FC84
  c->ctr=c->r[12]; // 8021FC88
  if (true) { dispatch(c,c->ctr); return; } // 8021FC8C
}

// fn_8021FC90
void f_8021FC90(Ctx* __restrict c) {
  trace_call(0x8021FC90u);
  return; // 8021FC90
}

// fn_8021FCA0
void f_8021FCA0(Ctx* __restrict c) {
  trace_call(0x8021FCA0u);
  c->r[3]=0u+0x000000FFu; // 8021FCA0
  return; // 8021FCA4
}

// fn_8021FCB0
void f_8021FCB0(Ctx* __restrict c) {
  trace_call(0x8021FCB0u);
  return; // 8021FCB0
}

// FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb
void f_8021FCC0(Ctx* __restrict c) {
  trace_call(0x8021FCC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FCC0
  c->r[0]=c->lr; // 8021FCC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021FCC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021FCCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021FCD0
  c->r[30]=c->r[5]|c->r[5]; // 8021FCD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021FCD8
  c->r[29]=c->r[4]|c->r[4]; // 8021FCDC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021FCE0
  c->r[28]=c->r[3]|c->r[3]; // 8021FCE4
  c->r[3]=c->r[3]+0x000000B4u; // 8021FCE8
  c->lr=0x8021FCF0u; f_8021A670(c); // 8021FCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8021FCF0
  if (crb(c,2)) { goto L_8021FD00; } // 8021FCF4
  c->r[3]=c->r[28]|c->r[28]; // 8021FCF8
  goto L_8021FD4C; // 8021FCFC
L_8021FD00:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021FD00
  if (crb(c,2)) { goto L_8021FD48; } // 8021FD04
  c->r[31]=R32(c->r[28]+0x00000014u); // 8021FD08
  c->r[30]=c->r[28]+0x00000014u; // 8021FD0C
  goto L_8021FD40; // 8021FD10
L_8021FD14:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8021FD14
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 8021FD18
  c->r[4]=c->r[29]|c->r[29]; // 8021FD1C
  c->r[5]=0u+0x00000001u; // 8021FD20
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021FD24
  c->ctr=c->r[12]; // 8021FD28
  if (true) { c->lr=0x8021FD30u; dispatch(c,c->ctr); } // 8021FD2C
  cmps(c,0,(int32_t)c->r[3],0); // 8021FD30
  if (crb(c,2)) { goto L_8021FD3C; } // 8021FD34
  goto L_8021FD4C; // 8021FD38
L_8021FD3C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021FD3C
L_8021FD40:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021FD40
  if (!crb(c,2)) { IRQCHK(c); goto L_8021FD14; } // 8021FD44
L_8021FD48:;
  c->r[3]=0u+0x00000000u; // 8021FD48
L_8021FD4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021FD4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021FD50
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021FD54
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021FD58
  c->r[28]=R32(c->r[1]+0x00000010u); // 8021FD5C
  c->lr=c->r[0]; // 8021FD60
  c->r[1]=c->r[1]+0x00000020u; // 8021FD64
  return; // 8021FD68
}

// FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb
void f_8021FD70(Ctx* __restrict c) {
  trace_call(0x8021FD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FD70
  c->r[0]=c->lr; // 8021FD74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021FD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021FD7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021FD80
  c->r[30]=c->r[5]|c->r[5]; // 8021FD84
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021FD88
  c->r[29]=c->r[4]|c->r[4]; // 8021FD8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021FD90
  c->r[28]=c->r[3]|c->r[3]; // 8021FD94
  c->r[6]=R32(c->r[3]+0x00000028u); // 8021FD98
  cmps(c,0,(int32_t)c->r[6],0); // 8021FD9C
  if (crb(c,2)) { goto L_8021FDBC; } // 8021FDA0
  c->r[3]=c->r[6]+0x00000004u; // 8021FDA4
  c->lr=0x8021FDACu; f_8021A6A0(c); // 8021FDA8
  cmps(c,0,(int32_t)c->r[3],0); // 8021FDAC
  if (crb(c,2)) { goto L_8021FDBC; } // 8021FDB0
  c->r[3]=R32(c->r[28]+0x00000028u); // 8021FDB4
  goto L_8021FE08; // 8021FDB8
L_8021FDBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8021FDBC
  if (crb(c,2)) { goto L_8021FE04; } // 8021FDC0
  c->r[31]=R32(c->r[28]+0x00000014u); // 8021FDC4
  c->r[30]=c->r[28]+0x00000014u; // 8021FDC8
  goto L_8021FDFC; // 8021FDCC
L_8021FDD0:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8021FDD0
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 8021FDD4
  c->r[4]=c->r[29]|c->r[29]; // 8021FDD8
  c->r[5]=0u+0x00000001u; // 8021FDDC
  c->r[12]=R32(c->r[12]+0x00000040u); // 8021FDE0
  c->ctr=c->r[12]; // 8021FDE4
  if (true) { c->lr=0x8021FDECu; dispatch(c,c->ctr); } // 8021FDE8
  cmps(c,0,(int32_t)c->r[3],0); // 8021FDEC
  if (crb(c,2)) { goto L_8021FDF8; } // 8021FDF0
  goto L_8021FE08; // 8021FDF4
L_8021FDF8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021FDF8
L_8021FDFC:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021FDFC
  if (!crb(c,2)) { IRQCHK(c); goto L_8021FDD0; } // 8021FE00
L_8021FE04:;
  c->r[3]=0u+0x00000000u; // 8021FE04
L_8021FE08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021FE08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021FE0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021FE10
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021FE14
  c->r[28]=R32(c->r[1]+0x00000010u); // 8021FE18
  c->lr=c->r[0]; // 8021FE1C
  c->r[1]=c->r[1]+0x00000020u; // 8021FE20
  return; // 8021FE24
}

// CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_8021FE30(Ctx* __restrict c) {
  trace_call(0x8021FE30u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021FE30
  c->r[0]=c->lr; // 8021FE34
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8021FE38
  c->r[11]=c->r[1]+0x000000D0u; // 8021FE3C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 8021FE40
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 8021FE44
  c->lr=0x8021FE4Cu; f_800C2E4C(c); // 8021FE48
  c->r[6]=R8(c->r[3]+0x000000CFu); // 8021FE4C
  c->r[31]=0u+0x80380000u; // 8021FE50
  c->r[29]=c->r[3]|c->r[3]; // 8021FE54
  c->r[30]=c->r[4]|c->r[4]; // 8021FE58
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8021FE5C
  c->r[31]=c->r[31]+0xFFFFF870u; // 8021FE60
  if (!crb(c,2)) { goto L_8021FE74; } // 8021FE64
  c->r[0]=R8(c->r[4]+0x00000050u); // 8021FE68
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 8021FE6C
  if (crb(c,2)) { goto L_80220110; } // 8021FE70
L_8021FE74:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 8021FE74
  c->r[5]=R32(c->r[3]+0x00000044u); // 8021FE78
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 8021FE7C
  c->r[0]=R32(c->r[3]+0x00000048u); // 8021FE80
  W32(c->r[1]+0x00000008u,c->r[5]); // 8021FE84
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021FE88
  if (crb(c,2)) { goto L_8021FEB8; } // 8021FE8C
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 8021FE90
  if (crb(c,2)) { goto L_8021FEB8; } // 8021FE94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021FE98
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021FE9C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FEA0
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FEA4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8021FEA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8021FEAC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8021FEB0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021FEB4
L_8021FEB8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FEB8
  c->r[3]=c->r[1]+0x00000040u; // 8021FEBC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021FEC0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021FEC4
  c->lr=0x8021FECCu; f_8023F310(c); // 8021FEC8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FECC
  c->r[3]=c->r[1]+0x00000010u; // 8021FED0
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FED4
  c->r[4]=0u+0x00000078u; // 8021FED8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021FEDC
  c->lr=0x8021FEE4u; f_8023F150(c); // 8021FEE0
  c->r[3]=c->r[1]+0x00000010u; // 8021FEE4
  c->r[4]=c->r[1]+0x00000040u; // 8021FEE8
  c->r[5]=c->r[1]+0x00000070u; // 8021FEEC
  c->lr=0x8021FEF4u; f_8023EF80(c); // 8021FEF0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FEF4
  c->r[3]=c->r[1]+0x00000010u; // 8021FEF8
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FEFC
  c->r[4]=0u+0x00000079u; // 8021FF00
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021FF04
  c->lr=0x8021FF0Cu; f_8023F150(c); // 8021FF08
  c->r[3]=c->r[1]+0x00000010u; // 8021FF0C
  c->r[4]=c->r[1]+0x00000070u; // 8021FF10
  c->r[5]=c->r[1]+0x00000040u; // 8021FF14
  c->lr=0x8021FF1Cu; f_8023EF80(c); // 8021FF18
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FF1C
  c->r[3]=c->r[1]+0x00000010u; // 8021FF20
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021FF24
  c->r[4]=0u+0x0000007Au; // 8021FF28
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021FF2C
  c->lr=0x8021FF34u; f_8023F150(c); // 8021FF30
  c->r[3]=c->r[1]+0x00000010u; // 8021FF34
  c->r[4]=c->r[1]+0x00000040u; // 8021FF38
  c->r[5]=c->r[1]+0x00000070u; // 8021FF3C
  c->lr=0x8021FF44u; f_8023EF80(c); // 8021FF40
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021FF44
  c->r[3]=c->r[1]+0x00000070u; // 8021FF48
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021FF4C
  c->r[4]=c->r[29]+0x00000054u; // 8021FF50
  {uint32_t ea=c->r[29]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021FF54
  c->lr=0x8021FF5Cu; f_8023F2C0(c); // 8021FF58
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8021FF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8021FF60
  if (crb(c,2)) { goto L_8021FF7C; } // 8021FF64
  c->r[3]=c->r[3]+0x00000084u; // 8021FF68
  c->r[4]=c->r[29]+0x00000054u; // 8021FF6C
  c->r[5]=c->r[29]+0x00000084u; // 8021FF70
  c->lr=0x8021FF78u; f_8023EF80(c); // 8021FF74
  goto L_8021FFFC; // 8021FF78
L_8021FF7C:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 8021FF7C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8021FF80
  if (crb(c,2)) { goto L_8021FFEC; } // 8021FF84
  c->r[27]=R32(c->r[29]+0x00000054u); // 8021FF88
  c->r[12]=R32(c->r[29]+0x00000058u); // 8021FF8C
  c->r[11]=R32(c->r[29]+0x0000005Cu); // 8021FF90
  c->r[10]=R32(c->r[29]+0x00000060u); // 8021FF94
  c->r[9]=R32(c->r[29]+0x00000064u); // 8021FF98
  c->r[8]=R32(c->r[29]+0x00000068u); // 8021FF9C
  c->r[7]=R32(c->r[29]+0x0000006Cu); // 8021FFA0
  c->r[6]=R32(c->r[29]+0x00000070u); // 8021FFA4
  c->r[5]=R32(c->r[29]+0x00000074u); // 8021FFA8
  c->r[4]=R32(c->r[29]+0x00000078u); // 8021FFAC
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 8021FFB0
  c->r[0]=R32(c->r[29]+0x00000080u); // 8021FFB4
  W32(c->r[29]+0x00000084u,c->r[27]); // 8021FFB8
  W32(c->r[29]+0x00000088u,c->r[12]); // 8021FFBC
  W32(c->r[29]+0x0000008Cu,c->r[11]); // 8021FFC0
  W32(c->r[29]+0x00000090u,c->r[10]); // 8021FFC4
  W32(c->r[29]+0x00000094u,c->r[9]); // 8021FFC8
  W32(c->r[29]+0x00000098u,c->r[8]); // 8021FFCC
  W32(c->r[29]+0x0000009Cu,c->r[7]); // 8021FFD0
  W32(c->r[29]+0x000000A0u,c->r[6]); // 8021FFD4
  W32(c->r[29]+0x000000A4u,c->r[5]); // 8021FFD8
  W32(c->r[29]+0x000000A8u,c->r[4]); // 8021FFDC
  W32(c->r[29]+0x000000ACu,c->r[3]); // 8021FFE0
  W32(c->r[29]+0x000000B0u,c->r[0]); // 8021FFE4
  goto L_8021FFFC; // 8021FFE8
L_8021FFEC:;
  c->r[3]=c->r[30]+0x00000004u; // 8021FFEC
  c->r[4]=c->r[29]+0x00000054u; // 8021FFF0
  c->r[5]=c->r[29]+0x00000084u; // 8021FFF4
  c->lr=0x8021FFFCu; f_8023EF80(c); // 8021FFF8
L_8021FFFC:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 8021FFFC
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80220000
  if (crb(c,2)) { goto L_8022004C; } // 80220004
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80220008
  cmps(c,0,(int32_t)c->r[0],0); // 8022000C
  if (crb(c,2)) { goto L_8022004C; } // 80220010
  c->r[3]=R8(c->r[29]+0x000000CDu); // 80220014
  c->r[0]=0u+0x43300000u; // 80220018
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8022001C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=RF64(ea);} // 80220020
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80220024
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80220028
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8022002C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80220030
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80220034
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80220038
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 8022003C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80220040
  W8(c->r[29]+0x000000CEu,c->r[0]); // 80220044
  goto L_80220054; // 80220048
L_8022004C:;
  c->r[0]=R8(c->r[29]+0x000000CDu); // 8022004C
  W8(c->r[29]+0x000000CEu,c->r[0]); // 80220050
L_80220054:;
  c->r[0]=R8(c->r[29]+0x000000CFu); // 80220054
  c->r[28]=0u+0x00000000u; // 80220058
  c->r[3]=R8(c->r[30]+0x00000050u); // 8022005C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80220060
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80220064
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 80220068
  c->r[0]=0u-c->r[3]; // 8022006C
  c->r[0]=c->r[0]|c->r[3]; // 80220070
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 80220074
  if (crb(c,2)) { goto L_8022008C; } // 80220078
  c->r[0]=R8(c->r[29]+0x000000CDu); // 8022007C
  cmpu(c,0,c->r[0],0x000000FFu); // 80220080
  if (crb(c,2)) { goto L_8022008C; } // 80220084
  c->r[28]=0u+0x00000001u; // 80220088
L_8022008C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8022008C
  if (crb(c,2)) { goto L_802200CC; } // 80220090
  c->r[0]=R8(c->r[29]+0x000000CDu); // 80220094
  c->r[3]=0u+0x43300000u; // 80220098
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8022009C
  c->r[0]=R8(c->r[30]+0x00000050u); // 802200A0
  W32(c->r[1]+0x000000A8u,c->r[3]); // 802200A4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[2]=RF64(ea);} // 802200A8
  c->r[0]=c->r[0]|0x00000040u; // 802200AC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 802200B0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802200B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802200B8
  W8(c->r[30]+0x00000050u,c->r[0]); // 802200BC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 802200C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802200C4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 802200C8
L_802200CC:;
  {uint32_t ea=c->r[29]+0x00000014u; c->r[31]=R32(ea); c->r[29]=ea;} // 802200CC
  goto L_802200F0; // 802200D0
L_802200D4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802200D4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 802200D8
  c->r[4]=c->r[30]|c->r[30]; // 802200DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802200E0
  c->ctr=c->r[12]; // 802200E4
  if (true) { c->lr=0x802200ECu; dispatch(c,c->ctr); } // 802200E8
  c->r[31]=R32(c->r[31]+0x00000000u); // 802200EC
L_802200F0:;
  cmpu(c,0,c->r[31],c->r[29]); // 802200F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802200D4; } // 802200F4
  cmps(c,0,(int32_t)c->r[28],0); // 802200F8
  if (crb(c,2)) { goto L_80220110; } // 802200FC
  c->r[0]=R8(c->r[30]+0x00000050u); // 80220100
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80220104
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[31]);} // 80220108
  W8(c->r[30]+0x00000050u,c->r[0]); // 8022010C
L_80220110:;
  c->r[11]=c->r[1]+0x000000D0u; // 80220110
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80220114
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80220118
  c->lr=0x80220120u; f_800C2E98(c); // 8022011C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80220120
  c->lr=c->r[0]; // 80220124
  c->r[1]=c->r[1]+0x000000E0u; // 80220128
  return; // 8022012C
}

// Draw__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80220130(Ctx* __restrict c) {
  trace_call(0x80220130u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220130
  c->r[0]=c->lr; // 80220134
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220138
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022013C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80220140
  c->r[30]=c->r[3]|c->r[3]; // 80220144
  W32(c->r[1]+0x00000014u,c->r[29]); // 80220148
  c->r[29]=c->r[4]|c->r[4]; // 8022014C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80220150
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80220154
  if (crb(c,2)) { goto L_80220198; } // 80220158
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022015C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80220160
  c->ctr=c->r[12]; // 80220164
  if (true) { c->lr=0x8022016Cu; dispatch(c,c->ctr); } // 80220168
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 8022016C
  goto L_80220190; // 80220170
L_80220174:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80220174
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80220178
  c->r[4]=c->r[29]|c->r[29]; // 8022017C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80220180
  c->ctr=c->r[12]; // 80220184
  if (true) { c->lr=0x8022018Cu; dispatch(c,c->ctr); } // 80220188
  c->r[31]=R32(c->r[31]+0x00000000u); // 8022018C
L_80220190:;
  cmpu(c,0,c->r[31],c->r[30]); // 80220190
  if (!crb(c,2)) { IRQCHK(c); goto L_80220174; } // 80220194
L_80220198:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220198
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022019C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802201A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802201A4
  c->lr=c->r[0]; // 802201A8
  c->r[1]=c->r[1]+0x00000020u; // 802201AC
  return; // 802201B0
}

// fn_802201C0
void f_802201C0(Ctx* __restrict c) {
  trace_call(0x802201C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802201C0
  c->r[0]=c->lr; // 802201C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802201C8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802201CC
  c->r[31]=c->r[3]|c->r[3]; // 802201D0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802201D4
  cmps(c,0,(int32_t)c->r[0],0); // 802201D8
  if (crb(c,2)) { goto L_802202F4; } // 802201DC
  c->r[0]=R8(c->r[4]+0x00000050u); // 802201E0
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 802201E4
  if (crb(c,2)) { goto L_802202F4; } // 802201E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802201EC
  c->r[12]=R32(c->r[12]+0x00000060u); // 802201F0
  c->ctr=c->r[12]; // 802201F4
  if (true) { c->lr=0x802201FCu; dispatch(c,c->ctr); } // 802201F8
  c->r[4]=0u+0x00FF0000u; // 802201FC
  c->r[3]=0u+0x55550000u; // 80220200
  c->r[0]=c->r[4]+0x000000FFu; // 80220204
  W32(c->r[1]+0x00000008u,c->r[0]); // 80220208
  c->r[4]=0u+0x80380000u; // 8022020C
  c->r[5]=R8(c->r[31]+0x000000CCu); // 80220210
  c->r[0]=c->r[3]+0x00005556u; // 80220214
  {uint32_t ea=c->r[4]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220218
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8022021C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80220220
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80220224
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80220228
  c->r[0]=c->r[3]+c->r[0]; // 8022022C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80220230
  c->r[0]=c->r[5]-c->r[0]; // 80220234
  cmps(c,0,(int32_t)c->r[0],1); // 80220238
  if (crb(c,2)) { goto L_80220250; } // 8022023C
  cmps(c,0,(int32_t)c->r[0],2); // 80220240
  if (crb(c,2)) { goto L_8022026C; } // 80220244
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80220248
  goto L_80220278; // 8022024C
L_80220250:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80220250
  c->r[3]=0u+0x80380000u; // 80220254
  {uint32_t ea=c->r[3]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220258
  c->f[1]=-c->f[1]; // 8022025C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80220260
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80220264
  goto L_80220278; // 80220268
L_8022026C:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022026C
  c->f[0]=-c->f[0]; // 80220270
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80220274
L_80220278:;
  c->r[3]=0u+0x55550000u; // 80220278
  c->r[0]=c->r[3]+0x00005556u; // 8022027C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80220280
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80220284
  c->r[0]=c->r[3]+c->r[0]; // 80220288
  cmps(c,0,(int32_t)c->r[0],1); // 8022028C
  if (crb(c,2)) { goto L_802202AC; } // 80220290
  cmps(c,0,(int32_t)c->r[0],2); // 80220294
  if (crb(c,2)) { goto L_802202C8; } // 80220298
  c->r[3]=0u+0x80380000u; // 8022029C
  {uint32_t ea=c->r[3]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 802202A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802202A4
  goto L_802202D4; // 802202A8
L_802202AC:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802202AC
  c->r[3]=0u+0x80380000u; // 802202B0
  {uint32_t ea=c->r[3]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 802202B4
  c->f[1]=-c->f[1]; // 802202B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802202BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802202C0
  goto L_802202D4; // 802202C4
L_802202C8:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802202C8
  c->f[0]=-c->f[0]; // 802202CC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802202D0
L_802202D4:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 802202D4
  c->r[3]=c->r[1]+0x00000018u; // 802202D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802202DC
  c->r[4]=c->r[31]+0x0000004Cu; // 802202E0
  W32(c->r[1]+0x00000018u,c->r[5]); // 802202E4
  c->r[5]=c->r[1]+0x00000008u; // 802202E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802202EC
  c->lr=0x802202F4u; f_8021B210(c); // 802202F0
L_802202F4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802202F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802202F8
  c->lr=c->r[0]; // 802202FC
  c->r[1]=c->r[1]+0x00000030u; // 80220300
  return; // 80220304
}

// Animate__Q36nw4hbm3lyt4PaneFUl
void f_80220310(Ctx* __restrict c) {
  trace_call(0x80220310u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220310
  c->r[0]=c->lr; // 80220314
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022031C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80220320
  c->r[30]=c->r[3]|c->r[3]; // 80220324
  W32(c->r[1]+0x00000014u,c->r[29]); // 80220328
  c->r[29]=c->r[4]|c->r[4]; // 8022032C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80220330
  c->r[12]=R32(c->r[12]+0x00000020u); // 80220334
  c->ctr=c->r[12]; // 80220338
  if (true) { c->lr=0x80220340u; dispatch(c,c->ctr); } // 8022033C
  c->r[0]=R8(c->r[30]+0x000000CFu); // 80220340
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80220344
  if (!crb(c,2)) { goto L_80220354; } // 80220348
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8022034C
  if (!crb(c,2)) { goto L_80220380; } // 80220350
L_80220354:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 80220354
  goto L_80220378; // 80220358
L_8022035C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8022035C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80220360
  c->r[4]=c->r[29]|c->r[29]; // 80220364
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80220368
  c->ctr=c->r[12]; // 8022036C
  if (true) { c->lr=0x80220374u; dispatch(c,c->ctr); } // 80220370
  c->r[31]=R32(c->r[31]+0x00000000u); // 80220374
L_80220378:;
  cmpu(c,0,c->r[31],c->r[30]); // 80220378
  if (!crb(c,2)) { IRQCHK(c); goto L_8022035C; } // 8022037C
L_80220380:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80220384
  c->r[30]=R32(c->r[1]+0x00000018u); // 80220388
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022038C
  c->lr=c->r[0]; // 80220390
  c->r[1]=c->r[1]+0x00000020u; // 80220394
  return; // 80220398
}

// AnimateSelf__Q36nw4hbm3lyt4PaneFUl
void f_802203A0(Ctx* __restrict c) {
  trace_call(0x802203A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802203A0
  c->r[0]=c->lr; // 802203A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802203A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802203AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802203B0
  c->r[30]=c->r[3]+0x00000020u; // 802203B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802203B8
  c->r[29]=c->r[4]|c->r[4]; // 802203BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 802203C0
  c->r[28]=c->r[3]|c->r[3]; // 802203C4
  c->r[31]=R32(c->r[3]+0x00000020u); // 802203C8
  goto L_802203FC; // 802203CC
L_802203D0:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 802203D0
  cmps(c,0,(int32_t)c->r[0],0); // 802203D4
  if (!crb(c,2)) { goto L_802203F8; } // 802203D8
  c->r[3]=R32(c->r[31]+0x00000008u); // 802203DC
  c->r[5]=c->r[28]|c->r[28]; // 802203E0
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 802203E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802203E8
  c->r[12]=R32(c->r[12]+0x00000018u); // 802203EC
  c->ctr=c->r[12]; // 802203F0
  if (true) { c->lr=0x802203F8u; dispatch(c,c->ctr); } // 802203F4
L_802203F8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802203F8
L_802203FC:;
  cmpu(c,0,c->r[31],c->r[30]); // 802203FC
  if (!crb(c,2)) { IRQCHK(c); goto L_802203D0; } // 80220400
  c->r[0]=R8(c->r[28]+0x000000CFu); // 80220404
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80220408
  if (!crb(c,2)) { goto L_80220418; } // 8022040C
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80220410
  if (!crb(c,2)) { goto L_80220434; } // 80220414
L_80220418:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 80220418
  cmps(c,0,(int32_t)c->r[3],0); // 8022041C
  if (crb(c,2)) { goto L_80220434; } // 80220420
  c->r[12]=R32(c->r[3]+0x00000000u); // 80220424
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80220428
  c->ctr=c->r[12]; // 8022042C
  if (true) { c->lr=0x80220434u; dispatch(c,c->ctr); } // 80220430
L_80220434:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220434
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80220438
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022043C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80220440
  c->r[28]=R32(c->r[1]+0x00000010u); // 80220444
  c->lr=c->r[0]; // 80220448
  c->r[1]=c->r[1]+0x00000020u; // 8022044C
  return; // 80220450
}

// BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
void f_80220460(Ctx* __restrict c) {
  trace_call(0x80220460u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 80220460
  c->r[0]=c->r[3]|c->r[3]; // 80220464
  c->r[3]=c->r[4]|c->r[4]; // 80220468
  c->r[12]=R32(c->r[12]+0x00000010u); // 8022046C
  c->r[4]=c->r[0]|c->r[0]; // 80220470
  c->ctr=c->r[12]; // 80220474
  if (true) { dispatch(c,c->ctr); return; } // 80220478
}

// UnbindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb
void f_80220480(Ctx* __restrict c) {
  trace_call(0x80220480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220480
  c->r[0]=c->lr; // 80220484
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022048C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80220490
  c->r[30]=c->r[3]|c->r[3]; // 80220494
  W32(c->r[1]+0x00000014u,c->r[29]); // 80220498
  c->r[29]=c->r[5]|c->r[5]; // 8022049C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802204A0
  c->r[28]=c->r[4]|c->r[4]; // 802204A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802204A8
  c->r[12]=R32(c->r[12]+0x00000050u); // 802204AC
  c->ctr=c->r[12]; // 802204B0
  if (true) { c->lr=0x802204B8u; dispatch(c,c->ctr); } // 802204B4
  cmps(c,0,(int32_t)c->r[29],0); // 802204B8
  if (crb(c,2)) { goto L_802204F0; } // 802204BC
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 802204C0
  goto L_802204E8; // 802204C4
L_802204C8:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 802204C8
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 802204CC
  c->r[4]=c->r[28]|c->r[28]; // 802204D0
  c->r[5]=c->r[29]|c->r[29]; // 802204D4
  c->r[12]=R32(c->r[12]+0x00000048u); // 802204D8
  c->ctr=c->r[12]; // 802204DC
  if (true) { c->lr=0x802204E4u; dispatch(c,c->ctr); } // 802204E0
  c->r[31]=R32(c->r[31]+0x00000000u); // 802204E4
L_802204E8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802204E8
  if (!crb(c,2)) { IRQCHK(c); goto L_802204C8; } // 802204EC
L_802204F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802204F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802204F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802204F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802204FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80220500
  c->lr=c->r[0]; // 80220504
  c->r[1]=c->r[1]+0x00000020u; // 80220508
  return; // 8022050C
}

// UnbindAllAnimation__Q36nw4hbm3lyt4PaneFb
void f_80220510(Ctx* __restrict c) {
  trace_call(0x80220510u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80220510
  c->r[5]=c->r[4]|c->r[4]; // 80220514
  c->r[4]=0u+0x00000000u; // 80220518
  c->r[12]=R32(c->r[12]+0x00000048u); // 8022051C
  c->ctr=c->r[12]; // 80220520
  if (true) { dispatch(c,c->ctr); return; } // 80220524
}

// UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
void f_80220530(Ctx* __restrict c) {
  trace_call(0x80220530u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220530
  c->r[0]=c->lr; // 80220534
  W32(c->r[1]+0x00000034u,c->r[0]); // 80220538
  c->r[11]=c->r[1]+0x00000030u; // 8022053C
  c->lr=0x80220544u; f_800C2E48(c); // 80220540
  c->r[0]=R32(c->r[3]+0x00000028u); // 80220544
  c->r[26]=c->r[3]|c->r[3]; // 80220548
  c->r[27]=c->r[4]|c->r[4]; // 8022054C
  cmps(c,0,(int32_t)c->r[0],0); // 80220550
  if (crb(c,2)) { goto L_8022056C; } // 80220554
  c->r[3]=c->r[0]|c->r[0]; // 80220558
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022055C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80220560
  c->ctr=c->r[12]; // 80220564
  if (true) { c->lr=0x8022056Cu; dispatch(c,c->ctr); } // 80220568
L_8022056C:;
  c->r[31]=R32(c->r[26]+0x00000020u); // 8022056C
  c->r[30]=c->r[26]+0x00000020u; // 80220570
  c->r[29]=0u+0x00000000u; // 80220574
  goto L_802205B0; // 80220578
L_8022057C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8022057C
  c->r[28]=c->r[31]|c->r[31]; // 80220580
  c->r[31]=R32(c->r[31]+0x00000000u); // 80220584
  if (crb(c,2)) { goto L_80220598; } // 80220588
  c->r[0]=R32(c->r[28]+0x00000008u); // 8022058C
  cmpu(c,0,c->r[0],c->r[27]); // 80220590
  if (!crb(c,2)) { goto L_802205B0; } // 80220594
L_80220598:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 80220598
  c->r[3]=c->r[26]+0x0000001Cu; // 8022059C
  c->r[4]=c->r[1]+0x00000008u; // 802205A0
  c->lr=0x802205A8u; f_80226930(c); // 802205A4
  W32(c->r[28]+0x00000008u,c->r[29]); // 802205A8
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 802205AC
L_802205B0:;
  cmpu(c,0,c->r[31],c->r[30]); // 802205B0
  if (!crb(c,2)) { IRQCHK(c); goto L_8022057C; } // 802205B4
  c->r[11]=c->r[1]+0x00000030u; // 802205B8
  c->lr=0x802205C0u; f_800C2E94(c); // 802205BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802205C0
  c->lr=c->r[0]; // 802205C4
  c->r[1]=c->r[1]+0x00000030u; // 802205C8
  return; // 802205CC
}

// AddAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimationLink
void f_802205D0(Ctx* __restrict c) {
  trace_call(0x802205D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802205D0
  c->r[0]=c->lr; // 802205D4
  c->r[5]=c->r[4]|c->r[4]; // 802205D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802205DC
  c->r[0]=c->r[3]+0x00000020u; // 802205E0
  c->r[3]=c->r[3]+0x0000001Cu; // 802205E4
  c->r[4]=c->r[1]+0x00000008u; // 802205E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802205EC
  c->lr=0x802205F4u; f_80226980(c); // 802205F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802205F4
  c->lr=c->r[0]; // 802205F8
  c->r[1]=c->r[1]+0x00000010u; // 802205FC
  return; // 80220600
}

// FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
void f_80220610(Ctx* __restrict c) {
  trace_call(0x80220610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220610
  c->r[0]=c->lr; // 80220614
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022061C
  c->r[31]=c->r[4]|c->r[4]; // 80220620
  W32(c->r[1]+0x00000008u,c->r[30]); // 80220624
  c->r[30]=c->r[3]|c->r[3]; // 80220628
  c->r[3]=c->r[3]+0x0000001Cu; // 8022062C
  c->lr=0x80220634u; f_8021A110(c); // 80220630
  cmps(c,0,(int32_t)c->r[3],0); // 80220634
  if (crb(c,2)) { goto L_80220640; } // 80220638
  goto L_80220670; // 8022063C
L_80220640:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 80220640
  cmps(c,0,(int32_t)c->r[3],0); // 80220644
  if (crb(c,2)) { goto L_8022066C; } // 80220648
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022064C
  c->r[4]=c->r[31]|c->r[31]; // 80220650
  c->r[12]=R32(c->r[12]+0x00000020u); // 80220654
  c->ctr=c->r[12]; // 80220658
  if (true) { c->lr=0x80220660u; dispatch(c,c->ctr); } // 8022065C
  cmps(c,0,(int32_t)c->r[3],0); // 80220660
  if (crb(c,2)) { goto L_8022066C; } // 80220664
  goto L_80220670; // 80220668
L_8022066C:;
  c->r[3]=0u+0x00000000u; // 8022066C
L_80220670:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220674
  c->r[30]=R32(c->r[1]+0x00000008u); // 80220678
  c->lr=c->r[0]; // 8022067C
  c->r[1]=c->r[1]+0x00000010u; // 80220680
  return; // 80220684
}

// SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb
void f_80220690(Ctx* __restrict c) {
  trace_call(0x80220690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220690
  c->r[0]=c->lr; // 80220694
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220698
  c->r[11]=c->r[1]+0x00000020u; // 8022069C
  c->lr=0x802206A4u; f_800C2E4C(c); // 802206A0
  c->r[30]=c->r[3]|c->r[3]; // 802206A4
  c->r[27]=c->r[4]|c->r[4]; // 802206A8
  c->r[28]=c->r[5]|c->r[5]; // 802206AC
  c->r[29]=c->r[6]|c->r[6]; // 802206B0
  c->r[3]=c->r[3]+0x0000001Cu; // 802206B4
  c->lr=0x802206BCu; f_8021A110(c); // 802206B8
  cmps(c,0,(int32_t)c->r[3],0); // 802206BC
  if (crb(c,2)) { goto L_802206D0; } // 802206C0
  c->r[0]=cntlz(c->r[28]); // 802206C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802206C8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 802206CC
L_802206D0:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 802206D0
  cmps(c,0,(int32_t)c->r[3],0); // 802206D4
  if (crb(c,2)) { goto L_802206F4; } // 802206D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802206DC
  c->r[4]=c->r[27]|c->r[27]; // 802206E0
  c->r[5]=c->r[28]|c->r[28]; // 802206E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 802206E8
  c->ctr=c->r[12]; // 802206EC
  if (true) { c->lr=0x802206F4u; dispatch(c,c->ctr); } // 802206F0
L_802206F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802206F4
  if (crb(c,2)) { goto L_80220730; } // 802206F8
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 802206FC
  goto L_80220728; // 80220700
L_80220704:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80220704
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80220708
  c->r[4]=c->r[27]|c->r[27]; // 8022070C
  c->r[5]=c->r[28]|c->r[28]; // 80220710
  c->r[12]=R32(c->r[12]+0x00000058u); // 80220714
  c->r[6]=c->r[29]|c->r[29]; // 80220718
  c->ctr=c->r[12]; // 8022071C
  if (true) { c->lr=0x80220724u; dispatch(c,c->ctr); } // 80220720
  c->r[31]=R32(c->r[31]+0x00000000u); // 80220724
L_80220728:;
  cmpu(c,0,c->r[31],c->r[30]); // 80220728
  if (!crb(c,2)) { IRQCHK(c); goto L_80220704; } // 8022072C
L_80220730:;
  c->r[11]=c->r[1]+0x00000020u; // 80220730
  c->lr=0x80220738u; f_800C2E98(c); // 80220734
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220738
  c->lr=c->r[0]; // 8022073C
  c->r[1]=c->r[1]+0x00000020u; // 80220740
  return; // 80220744
}

// LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80220750(Ctx* __restrict c) {
  trace_call(0x80220750u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220750
  c->r[0]=c->lr; // 80220754
  c->r[5]=c->r[3]|c->r[3]; // 80220758
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022075C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80220760
  c->r[31]=c->r[4]|c->r[4]; // 80220764
  c->r[0]=R8(c->r[4]+0x00000050u); // 80220768
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8022076C
  if (crb(c,2)) { goto L_802207D4; } // 80220770
  c->r[3]=c->r[4]+0x00000004u; // 80220774
  c->r[4]=c->r[5]+0x00000084u; // 80220778
  c->r[5]=c->r[1]+0x00000008u; // 8022077C
  c->lr=0x80220784u; f_8023EF80(c); // 80220780
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80220784
  c->r[3]=0u+0x80380000u; // 80220788
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022078C
  {uint32_t ea=c->r[3]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220790
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80220794
  fcmp(c,0,c->f[1],c->f[0]); // 80220798
  c->r[0]=c->cr; // 8022079C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802207A0
  if (crb(c,2)) { goto L_802207CC; } // 802207A4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802207A8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802207AC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802207B0
  c->f[2]=-c->f[2]; // 802207B4
  c->f[1]=-c->f[1]; // 802207B8
  c->f[0]=-c->f[0]; // 802207BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802207C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 802207C4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802207C8
L_802207CC:;
  c->r[3]=c->r[1]+0x00000008u; // 802207CC
  goto L_80220834; // 802207D0
L_802207D4:;
  {uint32_t ea=c->r[4]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802207D4
  c->r[5]=0u+0x80380000u; // 802207D8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802207DC
  {uint32_t ea=c->r[5]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 802207E0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802207E4
  fcmp(c,0,c->f[1],c->f[0]); // 802207E8
  c->r[0]=c->cr; // 802207EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802207F0
  if (crb(c,2)) { goto L_80220830; } // 802207F4
  c->r[3]=c->r[3]+0x00000084u; // 802207F8
  c->r[4]=c->r[1]+0x00000008u; // 802207FC
  c->lr=0x80220804u; f_8023EF40(c); // 80220800
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80220804
  c->r[3]=c->r[1]+0x00000008u; // 80220808
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022080C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80220810
  c->f[2]=-c->f[2]; // 80220814
  c->f[1]=-c->f[1]; // 80220818
  c->f[0]=-c->f[0]; // 8022081C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80220820
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80220824
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 80220828
  goto L_80220834; // 8022082C
L_80220830:;
  c->r[3]=c->r[3]+0x00000084u; // 80220830
L_80220834:;
  c->r[4]=0u+0x00000000u; // 80220834
  c->lr=0x8022083Cu; f_8020C670(c); // 80220838
  c->r[3]=0u+0x00000000u; // 8022083C
  c->lr=0x80220844u; f_8020C720(c); // 80220840
  c->r[0]=R32(c->r[1]+0x00000044u); // 80220844
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80220848
  c->lr=c->r[0]; // 8022084C
  c->r[1]=c->r[1]+0x00000040u; // 80220850
  return; // 80220854
}

// GetVtxPos__Q36nw4hbm3lyt4PaneCFv
void f_80220860(Ctx* __restrict c) {
  trace_call(0x80220860u);
  c->r[4]=0u+0x55550000u; // 80220860
  c->r[6]=R8(c->r[3]+0x000000CCu); // 80220864
  c->r[0]=c->r[4]+0x00005556u; // 80220868
  c->r[5]=0u+0x80380000u; // 8022086C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80220870
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220874
  {uint32_t ea=c->r[5]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220878
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8022087C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80220880
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80220884
  c->r[0]=c->r[4]+c->r[0]; // 80220888
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8022088C
  c->r[0]=c->r[6]-c->r[0]; // 80220890
  cmps(c,0,(int32_t)c->r[0],1); // 80220894
  if (crb(c,2)) { goto L_802208AC; } // 80220898
  cmps(c,0,(int32_t)c->r[0],2); // 8022089C
  if (crb(c,2)) { goto L_802208C8; } // 802208A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802208A4
  goto L_802208D4; // 802208A8
L_802208AC:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802208AC
  c->r[4]=0u+0x80380000u; // 802208B0
  {uint32_t ea=c->r[4]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 802208B4
  c->f[1]=-c->f[1]; // 802208B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802208BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802208C0
  goto L_802208D4; // 802208C4
L_802208C8:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802208C8
  c->f[0]=-c->f[0]; // 802208CC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802208D0
L_802208D4:;
  c->r[4]=0u+0x55550000u; // 802208D4
  c->r[0]=c->r[4]+0x00005556u; // 802208D8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 802208DC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802208E0
  c->r[0]=c->r[4]+c->r[0]; // 802208E4
  cmps(c,0,(int32_t)c->r[0],1); // 802208E8
  if (crb(c,2)) { goto L_80220908; } // 802208EC
  cmps(c,0,(int32_t)c->r[0],2); // 802208F0
  if (crb(c,2)) { goto L_80220924; } // 802208F4
  c->r[3]=0u+0x80380000u; // 802208F8
  {uint32_t ea=c->r[3]+0xFFFFF870u; c->f[0]=c->ps1[0]=RF32(ea);} // 802208FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80220900
  goto L_80220930; // 80220904
L_80220908:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80220908
  c->r[3]=0u+0x80380000u; // 8022090C
  {uint32_t ea=c->r[3]+0xFFFFF878u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220910
  c->f[1]=-c->f[1]; // 80220914
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80220918
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8022091C
  goto L_80220930; // 80220920
L_80220924:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220924
  c->f[0]=-c->f[0]; // 80220928
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8022092C
L_80220930:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80220930
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80220934
  c->r[1]=c->r[1]+0x00000010u; // 80220938
  return; // 8022093C
}

// GetMaterial__Q36nw4hbm3lyt4PaneCFv
void f_80220940(Ctx* __restrict c) {
  trace_call(0x80220940u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 80220940
  return; // 80220944
}

// fn_80220950
void f_80220950(Ctx* __restrict c) {
  trace_call(0x80220950u);
  c->r[3]=0u+0x80490000u; // 80220950
  c->r[0]=0u+0x00000000u; // 80220954
  W32(c->r[3]+0x00001A28u,c->r[0]); // 80220958
  return; // 8022095C
}

// __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet
void f_80220960(Ctx* __restrict c) {
  trace_call(0x80220960u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220960
  c->r[0]=c->lr; // 80220964
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220968
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022096C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80220970
  c->r[30]=c->r[5]|c->r[5]; // 80220974
  W32(c->r[1]+0x00000014u,c->r[29]); // 80220978
  c->r[29]=c->r[4]|c->r[4]; // 8022097C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80220980
  c->r[28]=c->r[3]|c->r[3]; // 80220984
  c->lr=0x8022098Cu; f_8021F810(c); // 80220988
  c->r[3]=0u+0x803A0000u; // 8022098C
  c->r[4]=0u+0x80220000u; // 80220990
  c->r[3]=c->r[3]+0x00007980u; // 80220994
  c->r[5]=0u+0x80220000u; // 80220998
  W32(c->r[28]+0x00000000u,c->r[3]); // 8022099C
  c->r[3]=c->r[28]+0x000000D4u; // 802209A0
  c->r[4]=c->r[4]+0xFFFFC8D0u; // 802209A4
  c->r[5]=c->r[5]+0xFFFFA600u; // 802209A8
  c->r[6]=0u+0x00000004u; // 802209AC
  c->r[7]=0u+0x00000004u; // 802209B0
  c->lr=0x802209B8u; f_800C2B8C(c); // 802209B4
  c->r[3]=c->r[28]+0x000000E4u; // 802209B8
  c->lr=0x802209C0u; f_8021A740(c); // 802209BC
  c->r[0]=R8(c->r[29]+0x0000005Eu); // 802209C0
  c->r[31]=0u+0x00000008u; // 802209C4
  cmpu(c,0,c->r[0],0x00000008u); // 802209C8
  if (crb(c,1)) { goto L_802209D4; } // 802209CC
  c->r[31]=c->r[0]|c->r[0]; // 802209D0
L_802209D4:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[4]); // 802209D4
  if (crb(c,2)) { goto L_802209E4; } // 802209D8
  c->r[3]=c->r[28]+0x000000E4u; // 802209DC
  c->lr=0x802209E4u; f_8021A7B0(c); // 802209E0
L_802209E4:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 802209E4
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[5]); // 802209E8
  W32(c->r[28]+0x000000D4u,c->r[0]); // 802209EC
  c->r[0]=R32(c->r[29]+0x00000050u); // 802209F0
  W32(c->r[28]+0x000000D8u,c->r[0]); // 802209F4
  c->r[0]=R32(c->r[29]+0x00000054u); // 802209F8
  W32(c->r[28]+0x000000DCu,c->r[0]); // 802209FC
  c->r[0]=R32(c->r[29]+0x00000058u); // 80220A00
  W32(c->r[28]+0x000000E0u,c->r[0]); // 80220A04
  if (crb(c,2)) { goto L_80220A24; } // 80220A08
  c->r[0]=R8(c->r[28]+0x000000E4u); // 80220A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80220A10
  if (crb(c,2)) { goto L_80220A24; } // 80220A14
  c->r[3]=c->r[28]+0x000000E4u; // 80220A18
  c->r[4]=c->r[29]+0x00000060u; // 80220A1C
  c->lr=0x80220A24u; f_8021A940(c); // 80220A20
L_80220A24:;
  c->r[3]=0u+0x80490000u; // 80220A24
  c->r[4]=0u+0x0000005Cu; // 80220A28
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80220A2C
  c->lr=0x80220A34u; f_8023B6D0(c); // 80220A30
  cmps(c,0,(int32_t)c->r[3],0); // 80220A34
  if (crb(c,2)) { goto L_80220A64; } // 80220A38
  c->r[0]=R16(c->r[29]+0x0000005Cu); // 80220A3C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80220A40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80220A44
  c->r[4]=c->r[5]+c->r[0]; // 80220A48
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80220A4C
  c->r[4]=c->r[5]+c->r[0]; // 80220A50
  if (crb(c,2)) { goto L_80220A60; } // 80220A54
  c->r[5]=c->r[30]|c->r[30]; // 80220A58
  c->lr=0x80220A60u; f_8021C8E0(c); // 80220A5C
L_80220A60:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 80220A60
L_80220A64:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80220A64
  c->r[3]=c->r[28]|c->r[28]; // 80220A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 80220A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80220A70
  c->r[28]=R32(c->r[1]+0x00000010u); // 80220A74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220A78
  c->lr=c->r[0]; // 80220A7C
  c->r[1]=c->r[1]+0x00000020u; // 80220A80
  return; // 80220A84
}

// __dt__Q36nw4hbm3lyt7PictureFv
void f_80220A90(Ctx* __restrict c) {
  trace_call(0x80220A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220A90
  c->r[0]=c->lr; // 80220A94
  cmps(c,0,(int32_t)c->r[3],0); // 80220A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80220AA0
  c->r[31]=c->r[4]|c->r[4]; // 80220AA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80220AA8
  c->r[30]=c->r[3]|c->r[3]; // 80220AAC
  if (crb(c,2)) { goto L_80220B44; } // 80220AB0
  c->r[5]=R32(c->r[3]+0x00000028u); // 80220AB4
  c->r[4]=0u+0x803A0000u; // 80220AB8
  c->r[4]=c->r[4]+0x00007980u; // 80220ABC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80220AC0
  cmps(c,0,(int32_t)c->r[5],0); // 80220AC4
  if (crb(c,2)) { goto L_80220B08; } // 80220AC8
  c->r[0]=R8(c->r[5]+0x00000054u); // 80220ACC
  cmps(c,0,(int32_t)c->r[0],0); // 80220AD0
  if (!crb(c,2)) { goto L_80220B08; } // 80220AD4
  c->r[12]=R32(c->r[5]+0x00000000u); // 80220AD8
  c->r[3]=c->r[5]|c->r[5]; // 80220ADC
  c->r[4]=0u+0xFFFFFFFFu; // 80220AE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80220AE4
  c->ctr=c->r[12]; // 80220AE8
  if (true) { c->lr=0x80220AF0u; dispatch(c,c->ctr); } // 80220AEC
  c->r[3]=0u+0x80490000u; // 80220AF0
  c->r[4]=R32(c->r[30]+0x00000028u); // 80220AF4
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80220AF8
  c->lr=0x80220B00u; f_8023B6E0(c); // 80220AFC
  c->r[0]=0u+0x00000000u; // 80220B00
  W32(c->r[30]+0x00000028u,c->r[0]); // 80220B04
L_80220B08:;
  c->r[3]=c->r[30]+0x000000E4u; // 80220B08
  c->lr=0x80220B10u; f_8021A760(c); // 80220B0C
  c->r[4]=0u+0x80220000u; // 80220B10
  c->r[3]=c->r[30]+0x000000D4u; // 80220B14
  c->r[4]=c->r[4]+0xFFFFA600u; // 80220B18
  c->r[5]=0u+0x00000004u; // 80220B1C
  c->r[6]=0u+0x00000004u; // 80220B20
  c->lr=0x80220B28u; f_800C2C84(c); // 80220B24
  c->r[3]=c->r[30]|c->r[30]; // 80220B28
  c->r[4]=0u+0x00000000u; // 80220B2C
  c->lr=0x80220B34u; f_8021F930(c); // 80220B30
  cmps(c,0,(int32_t)c->r[31],0); // 80220B34
  if (!crb(c,1)) { goto L_80220B44; } // 80220B38
  c->r[3]=c->r[30]|c->r[30]; // 80220B3C
  c->lr=0x80220B44u; f_800C2AC0(c); // 80220B40
L_80220B44:;
  c->r[3]=c->r[30]|c->r[30]; // 80220B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220B48
  c->r[30]=R32(c->r[1]+0x00000008u); // 80220B4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220B50
  c->lr=c->r[0]; // 80220B54
  c->r[1]=c->r[1]+0x00000010u; // 80220B58
  return; // 80220B5C
}

// Append__Q36nw4hbm3lyt7PictureFP10TPLPalette
void f_80220B60(Ctx* __restrict c) {
  trace_call(0x80220B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220B60
  c->r[0]=c->lr; // 80220B64
  c->r[5]=0u+0x00000000u; // 80220B68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80220B6C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80220B70
  c->r[31]=c->r[3]|c->r[3]; // 80220B74
  c->r[3]=c->r[1]+0x00000008u; // 80220B78
  c->lr=0x80220B80u; f_8021B3B0(c); // 80220B7C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80220B80
  c->r[3]=c->r[31]|c->r[31]; // 80220B84
  c->r[4]=c->r[1]+0x00000008u; // 80220B88
  c->r[12]=R32(c->r[12]+0x00000068u); // 80220B8C
  c->ctr=c->r[12]; // 80220B90
  if (true) { c->lr=0x80220B98u; dispatch(c,c->ctr); } // 80220B94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80220B98
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80220B9C
  c->lr=c->r[0]; // 80220BA0
  c->r[1]=c->r[1]+0x00000030u; // 80220BA4
  return; // 80220BA8
}

// Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj
void f_80220BB0(Ctx* __restrict c) {
  trace_call(0x80220BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220BB0
  c->r[0]=c->lr; // 80220BB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80220BB8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80220BBC
  c->r[31]=c->r[3]|c->r[3]; // 80220BC0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80220BC4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80220BC8
  c->r[29]=c->r[4]|c->r[4]; // 80220BCC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80220BD0
  c->r[5]=R32(c->r[3]+0x00000028u); // 80220BD4
  c->r[0]=R32(c->r[5]+0x00000050u); // 80220BD8
  c->r[3]=R32(c->r[5]+0x0000004Cu); // 80220BDC
  c->r[28]=rotl(c->r[0],4)&0x0000000Fu; // 80220BE0
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 80220BE4
  cmpu(c,0,c->r[28],c->r[0]); // 80220BE8
  if (!crb(c,0)) { goto L_80220D00; } // 80220BEC
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 80220BF0
  cmpu(c,0,c->r[28],c->r[0]); // 80220BF4
  if (crb(c,0)) { goto L_80220C00; } // 80220BF8
  goto L_80220D00; // 80220BFC
L_80220C00:;
  c->r[0]=c->r[28]+0x00000001u; // 80220C00
  c->r[3]=c->r[5]|c->r[5]; // 80220C04
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80220C08
  c->lr=0x80220C10u; f_8021E260(c); // 80220C0C
  c->r[3]=R32(c->r[31]+0x00000028u); // 80220C10
  c->r[4]=c->r[28]|c->r[28]; // 80220C14
  c->r[5]=c->r[29]|c->r[29]; // 80220C18
  c->lr=0x80220C20u; f_8021E4E0(c); // 80220C1C
  c->r[3]=R32(c->r[31]+0x00000028u); // 80220C20
  c->r[0]=R32(c->r[3]+0x00000050u); // 80220C24
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80220C28
  c->lr=0x80220C30u; f_8021E2F0(c); // 80220C2C
  c->r[29]=0u+0x00000000u; // 80220C30
  c->r[30]=0u+0x00000001u; // 80220C34
  c->r[4]=0u+0x00000004u; // 80220C38
  c->r[0]=0u+0x0000003Cu; // 80220C3C
  W8(c->r[1]+0x0000000Bu,c->r[29]); // 80220C40
  c->r[3]=R32(c->r[31]+0x00000028u); // 80220C44
  W8(c->r[1]+0x00000008u,c->r[30]); // 80220C48
  W8(c->r[1]+0x00000009u,c->r[4]); // 80220C4C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80220C50
  c->r[0]=R32(c->r[1]+0x00000008u); // 80220C54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80220C58
  c->lr=0x80220C60u; f_8021E1E0(c); // 80220C5C
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 80220C60
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 80220C64
  c->r[5]=c->r[3]+c->r[0]; // 80220C68
  c->r[0]=R8(c->r[1]+0x0000000Du); // 80220C6C
  W8(c->r[5]+0x00000000u,c->r[4]); // 80220C70
  c->r[3]=c->r[31]+0x000000E4u; // 80220C74
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80220C78
  W8(c->r[5]+0x00000001u,c->r[0]); // 80220C7C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80220C80
  W8(c->r[5]+0x00000002u,c->r[4]); // 80220C84
  W8(c->r[5]+0x00000003u,c->r[0]); // 80220C88
  c->r[4]=R32(c->r[31]+0x00000028u); // 80220C8C
  c->r[0]=R32(c->r[4]+0x00000050u); // 80220C90
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 80220C94
  c->lr=0x80220C9Cu; f_8021A840(c); // 80220C98
  c->r[3]=0u+0x80380000u; // 80220C9C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80220CA0
  {uint32_t ea=c->r[3]+0xFFFFF890u; c->f[1]=c->ps1[1]=RF32(ea);} // 80220CA4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80220CA8
  fcmp(c,0,c->f[0],c->f[1]); // 80220CAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80220CB0
  if (!crb(c,2)) { goto L_80220CC8; } // 80220CB4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220CB8
  fcmp(c,0,c->f[0],c->f[1]); // 80220CBC
  if (!crb(c,2)) { goto L_80220CC8; } // 80220CC0
  c->r[29]=c->r[30]|c->r[30]; // 80220CC4
L_80220CC8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80220CC8
  if (crb(c,2)) { goto L_80220D00; } // 80220CCC
  c->r[4]=R32(c->r[31]+0x00000028u); // 80220CD0
  c->r[0]=R32(c->r[4]+0x00000050u); // 80220CD4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80220CD8
  cmpu(c,0,c->r[0],0x00000001u); // 80220CDC
  if (!crb(c,2)) { goto L_80220D00; } // 80220CE0
  c->r[3]=c->r[1]+0x00000010u; // 80220CE4
  c->r[5]=0u+0x00000000u; // 80220CE8
  c->lr=0x80220CF0u; f_8021F700(c); // 80220CEC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220CF0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80220CF4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220CF8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 80220CFC
L_80220D00:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80220D00
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80220D04
  c->r[30]=R32(c->r[1]+0x00000028u); // 80220D08
  c->r[29]=R32(c->r[1]+0x00000024u); // 80220D0C
  c->r[28]=R32(c->r[1]+0x00000020u); // 80220D10
  c->lr=c->r[0]; // 80220D14
  c->r[1]=c->r[1]+0x00000030u; // 80220D18
  return; // 80220D1C
}

// fn_80220D20
void f_80220D20(Ctx* __restrict c) {
  trace_call(0x80220D20u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80220D20
  c->r[4]=c->r[4]+c->r[0]; // 80220D24
  c->r[0]=R32(c->r[4]+0x000000D4u); // 80220D28
  W32(c->r[3]+0x00000000u,c->r[0]); // 80220D2C
  return; // 80220D30
}

// fn_80220D40
void f_80220D40(Ctx* __restrict c) {
  trace_call(0x80220D40u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80220D40
  c->r[0]=R8(c->r[5]+0x00000000u); // 80220D44
  c->r[3]=c->r[3]+c->r[4]; // 80220D48
  W8(c->r[3]+0x000000D4u,c->r[0]); // 80220D4C
  c->r[0]=R8(c->r[5]+0x00000001u); // 80220D50
  W8(c->r[3]+0x000000D5u,c->r[0]); // 80220D54
  c->r[0]=R8(c->r[5]+0x00000002u); // 80220D58
  W8(c->r[3]+0x000000D6u,c->r[0]); // 80220D5C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80220D60
  W8(c->r[3]+0x000000D7u,c->r[0]); // 80220D64
  return; // 80220D68
}

// fn_80220D70
void f_80220D70(Ctx* __restrict c) {
  trace_call(0x80220D70u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80220D70
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80220D74
  c->r[3]=c->r[3]+c->r[5]; // 80220D78
  c->r[3]=c->r[3]+c->r[0]; // 80220D7C
  c->r[3]=R8(c->r[3]+0x000000D4u); // 80220D80
  return; // 80220D84
}

// fn_80220D90
void f_80220D90(Ctx* __restrict c) {
  trace_call(0x80220D90u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80220D90
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80220D94
  c->r[3]=c->r[3]+c->r[6]; // 80220D98
  c->r[3]=c->r[3]+c->r[0]; // 80220D9C
  W8(c->r[3]+0x000000D4u,c->r[5]); // 80220DA0
  return; // 80220DA4
}

// DrawSelf__Q36nw4hbm3lyt7PictureFRCQ36nw4hbm3lyt8DrawInfo
void f_80220DB0(Ctx* __restrict c) {
  trace_call(0x80220DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220DB0
  c->r[0]=c->lr; // 80220DB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80220DB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80220DBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80220DC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80220DC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 80220DC8
  c->r[28]=c->r[3]|c->r[3]; // 80220DCC
  c->r[0]=R32(c->r[3]+0x00000028u); // 80220DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80220DD4
  if (crb(c,2)) { goto L_80220E6C; } // 80220DD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80220DDC
  c->r[12]=R32(c->r[12]+0x00000060u); // 80220DE0
  c->ctr=c->r[12]; // 80220DE4
  if (true) { c->lr=0x80220DECu; dispatch(c,c->ctr); } // 80220DE8
  c->r[29]=R8(c->r[28]+0x000000CEu); // 80220DEC
  c->r[3]=c->r[28]+0x000000D4u; // 80220DF0
  c->r[4]=c->r[29]|c->r[29]; // 80220DF4
  c->lr=0x80220DFCu; f_8021A9E0(c); // 80220DF8
  c->r[4]=c->r[3]|c->r[3]; // 80220DFC
  c->r[3]=R32(c->r[28]+0x00000028u); // 80220E00
  c->r[5]=c->r[29]|c->r[29]; // 80220E04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80220E08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80220E0C
  c->ctr=c->r[12]; // 80220E10
  if (true) { c->lr=0x80220E18u; dispatch(c,c->ctr); } // 80220E14
  c->r[4]=R8(c->r[28]+0x000000E5u); // 80220E18
  c->r[29]=c->r[3]|c->r[3]; // 80220E1C
  c->lr=0x80220E24u; f_8021AA90(c); // 80220E20
  cmps(c,0,(int32_t)c->r[29],0); // 80220E24
  if (crb(c,2)) { goto L_80220E34; } // 80220E28
  c->r[30]=c->r[28]+0x000000D4u; // 80220E2C
  goto L_80220E38; // 80220E30
L_80220E34:;
  c->r[30]=0u+0x00000000u; // 80220E34
L_80220E38:;
  c->r[29]=R32(c->r[28]+0x000000E8u); // 80220E38
  c->r[3]=c->r[28]|c->r[28]; // 80220E3C
  c->r[31]=R8(c->r[28]+0x000000E5u); // 80220E40
  c->lr=0x80220E48u; f_80220860(c); // 80220E44
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80220E48
  c->r[5]=c->r[31]|c->r[31]; // 80220E4C
  c->r[6]=c->r[29]|c->r[29]; // 80220E50
  c->r[7]=c->r[30]|c->r[30]; // 80220E54
  W32(c->r[1]+0x00000008u,c->r[3]); // 80220E58
  c->r[3]=c->r[1]+0x00000008u; // 80220E5C
  c->r[4]=c->r[28]+0x0000004Cu; // 80220E60
  c->r[8]=R8(c->r[28]+0x000000CEu); // 80220E64
  c->lr=0x80220E6Cu; f_8021B0E0(c); // 80220E68
L_80220E6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80220E6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80220E70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80220E74
  c->r[29]=R32(c->r[1]+0x00000014u); // 80220E78
  c->r[28]=R32(c->r[1]+0x00000010u); // 80220E7C
  c->lr=c->r[0]; // 80220E80
  c->r[1]=c->r[1]+0x00000020u; // 80220E84
  return; // 80220E88
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt7PictureCFv
void f_80220E90(Ctx* __restrict c) {
  trace_call(0x80220E90u);
  c->r[3]=0u+0x80490000u; // 80220E90
  c->r[3]=c->r[3]+0x00001A30u; // 80220E94
  return; // 80220E98
}

// fn_80220EA0
void f_80220EA0(Ctx* __restrict c) {
  trace_call(0x80220EA0u);
  c->r[4]=0u+0x80490000u; // 80220EA0
  c->r[3]=0u+0x80490000u; // 80220EA4
  c->r[4]=c->r[4]+0x00001A28u; // 80220EA8
  W32(c->r[3]+0x00001A30u,c->r[4]); // 80220EAC
  return; // 80220EB0
}

// __dt__Q36nw4hbm3lyt16ResourceAccessorFv
void f_80220EC0(Ctx* __restrict c) {
  trace_call(0x80220EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220EC0
  c->r[0]=c->lr; // 80220EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80220EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80220ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80220ED0
  c->r[31]=c->r[3]|c->r[3]; // 80220ED4
  if (crb(c,2)) { goto L_80220EE8; } // 80220ED8
  cmps(c,0,(int32_t)c->r[4],0); // 80220EDC
  if (!crb(c,1)) { goto L_80220EE8; } // 80220EE0
  c->lr=0x80220EE8u; f_800C2AC0(c); // 80220EE4
L_80220EE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80220EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80220EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80220EF0
  c->lr=c->r[0]; // 80220EF4
  c->r[1]=c->r[1]+0x00000010u; // 80220EF8
  return; // 80220EFC
}

// __ct__Q36nw4hbm3lyt16ResourceAccessorFv
void f_80220F00(Ctx* __restrict c) {
  trace_call(0x80220F00u);
  c->r[4]=0u+0x803A0000u; // 80220F00
  c->r[4]=c->r[4]+0x00007A20u; // 80220F04
  W32(c->r[3]+0x00000000u,c->r[4]); // 80220F08
  return; // 80220F0C
}

// GetFont__Q36nw4hbm3lyt16ResourceAccessorFPCc
void f_80220F10(Ctx* __restrict c) {
  trace_call(0x80220F10u);
  c->r[3]=0u+0x00000000u; // 80220F10
  return; // 80220F14
}

// __ct__Q36nw4hbm3lyt7TextBoxFPCQ46nw4hbm3lyt3res7TextBoxRCQ36nw4hbm3lyt11ResBlockSet
void f_80220F20(Ctx* __restrict c) {
  trace_call(0x80220F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80220F20
  c->r[0]=c->lr; // 80220F24
  W32(c->r[1]+0x00000034u,c->r[0]); // 80220F28
  c->r[11]=c->r[1]+0x00000030u; // 80220F2C
  c->lr=0x80220F34u; f_800C2E4C(c); // 80220F30
  c->r[28]=c->r[3]|c->r[3]; // 80220F34
  c->r[29]=c->r[4]|c->r[4]; // 80220F38
  c->r[30]=c->r[5]|c->r[5]; // 80220F3C
  c->lr=0x80220F44u; f_8021F810(c); // 80220F40
  c->r[3]=0u+0x803A0000u; // 80220F44
  c->r[4]=0u+0x80220000u; // 80220F48
  c->r[3]=c->r[3]+0x00007A3Cu; // 80220F4C
  c->r[5]=0u+0x80220000u; // 80220F50
  W32(c->r[28]+0x00000000u,c->r[3]); // 80220F54
  c->r[3]=c->r[28]+0x000000D8u; // 80220F58
  c->r[4]=c->r[4]+0xFFFFC8D0u; // 80220F5C
  c->r[5]=c->r[5]+0xFFFFA600u; // 80220F60
  c->r[6]=0u+0x00000004u; // 80220F64
  c->r[7]=0u+0x00000002u; // 80220F68
  c->lr=0x80220F70u; f_800C2B8C(c); // 80220F6C
  c->r[3]=0u+0x80380000u; // 80220F70
  {uint32_t ea=c->r[3]+0xFFFFF898u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220F74
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80220F78
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 80220F7C
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 80220F80
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 80220F84
  if (crb(c,2)) { goto L_80220F94; } // 80220F88
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80220F8C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80220F90
L_80220F94:;
  c->r[3]=0u+0x55550000u; // 80220F94
  c->r[0]=R8(c->r[28]+0x000000FCu); // 80220F98
  c->r[8]=c->r[3]+0x00005556u; // 80220F9C
  c->r[9]=0u+0x00000000u; // 80220FA0
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 80220FA4
  c->r[3]=0u+0x80380000u; // 80220FA8
  {uint32_t ea=c->r[3]+0xFFFFF898u; c->f[0]=c->ps1[0]=RF32(ea);} // 80220FAC
  c->r[4]=0u+0x00000000u; // 80220FB0
  W32(c->r[28]+0x000000D4u,c->r[9]); // 80220FB4
  c->r[3]=c->r[28]+0x000000FDu; // 80220FB8
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80220FBC
  W16(c->r[28]+0x000000F8u,c->r[9]); // 80220FC0
  c->r[0]=c->r[5]+c->r[0]; // 80220FC4
  c->r[5]=0u+0x00000001u; // 80220FC8
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80220FCC
  W16(c->r[28]+0x000000FAu,c->r[9]); // 80220FD0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80220FD4
  c->r[6]=c->r[0]-c->r[6]; // 80220FD8
  W32(c->r[28]+0x000000E0u,c->r[9]); // 80220FDC
  c->r[0]=c->r[6]+0x00000001u; // 80220FE0
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 80220FE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80220FE8
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 80220FEC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80220FF0
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 80220FF4
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 80220FF8
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 80220FFC
  c->r[0]=c->r[6]+c->r[0]; // 80221000
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80221004
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 80221008
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 8022100C
  c->r[0]=c->r[7]-c->r[0]; // 80221010
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80221014
  W32(c->r[28]+0x000000F4u,c->r[9]); // 80221018
  c->r[0]=c->r[6]+0x00000003u; // 8022101C
  W8(c->r[28]+0x000000FCu,c->r[0]); // 80221020
  c->lr=0x80221028u; f_80004350(c); // 80221024
  cmps(c,0,(int32_t)c->r[31],0); // 80221028
  if (crb(c,2)) { goto L_80221048; } // 8022102C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80221030
  c->r[3]=c->r[28]|c->r[28]; // 80221034
  c->r[4]=c->r[31]|c->r[31]; // 80221038
  c->r[12]=R32(c->r[12]+0x00000064u); // 8022103C
  c->ctr=c->r[12]; // 80221040
  if (true) { c->lr=0x80221048u; dispatch(c,c->ctr); } // 80221044
L_80221048:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 80221048
  cmpu(c,0,c->r[4],0x00000002u); // 8022104C
  if (crb(c,0)) { goto L_8022108C; } // 80221050
  c->r[0]=R32(c->r[28]+0x000000D4u); // 80221054
  cmps(c,0,(int32_t)c->r[0],0); // 80221058
  if (crb(c,2)) { goto L_8022108C; } // 8022105C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80221060
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 80221064
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80221068
  c->r[4]=R32(c->r[29]+0x00000058u); // 8022106C
  c->r[12]=R32(c->r[12]+0x00000070u); // 80221070
  c->r[3]=c->r[28]|c->r[28]; // 80221074
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80221078
  c->r[5]=0u+0x00000000u; // 8022107C
  c->r[4]=c->r[29]+c->r[4]; // 80221080
  c->ctr=c->r[12]; // 80221084
  if (true) { c->lr=0x8022108Cu; dispatch(c,c->ctr); } // 80221088
L_8022108C:;
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 8022108C
  W32(c->r[28]+0x000000D8u,c->r[0]); // 80221090
  c->r[3]=R32(c->r[30]+0x00000004u); // 80221094
  c->r[0]=R32(c->r[29]+0x00000060u); // 80221098
  W32(c->r[28]+0x000000DCu,c->r[0]); // 8022109C
  c->r[4]=c->r[3]+0x0000000Cu; // 802210A0
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802210A4
  {uint32_t ea=c->r[29]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802210A8
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 802210AC
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 802210B0
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 802210B4
  c->r[0]=R8(c->r[29]+0x00000054u); // 802210B8
  W8(c->r[28]+0x000000FCu,c->r[0]); // 802210BC
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802210C0
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 802210C4
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 802210C8
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 802210CC
  c->r[0]=R16(c->r[29]+0x00000052u); // 802210D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802210D4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802210D8
  c->r[0]=R32(c->r[4]+c->r[0]); // 802210DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802210E0
  c->r[31]=c->r[4]+c->r[0]; // 802210E4
  c->r[4]=c->r[31]|c->r[31]; // 802210E8
  c->ctr=c->r[12]; // 802210EC
  if (true) { c->lr=0x802210F4u; dispatch(c,c->ctr); } // 802210F0
  cmps(c,0,(int32_t)c->r[3],0); // 802210F4
  if (crb(c,2)) { goto L_80221104; } // 802210F8
  W32(c->r[28]+0x000000E0u,c->r[3]); // 802210FC
  goto L_80221178; // 80221100
L_80221104:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80221104
  c->r[4]=0u+0x666F0000u; // 80221108
  c->r[5]=c->r[31]|c->r[31]; // 8022110C
  c->r[6]=0u+0x00000000u; // 80221110
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221114
  c->r[4]=c->r[4]+0x00006E74u; // 80221118
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8022111C
  c->ctr=c->r[12]; // 80221120
  if (true) { c->lr=0x80221128u; dispatch(c,c->ctr); } // 80221124
  cmps(c,0,(int32_t)c->r[3],0); // 80221128
  c->r[27]=c->r[3]|c->r[3]; // 8022112C
  if (crb(c,2)) { goto L_80221178; } // 80221130
  c->r[3]=0u+0x80490000u; // 80221134
  c->r[4]=0u+0x00000018u; // 80221138
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8022113C
  c->lr=0x80221144u; f_8023B6D0(c); // 80221140
  cmps(c,0,(int32_t)c->r[3],0); // 80221144
  if (crb(c,2)) { goto L_80221178; } // 80221148
  c->r[31]=c->r[3]|c->r[3]; // 8022114C
  if (crb(c,2)) { goto L_8022115C; } // 80221150
  c->lr=0x80221158u; f_80226B20(c); // 80221154
  c->r[31]=c->r[3]|c->r[3]; // 80221158
L_8022115C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022115C
  c->r[4]=c->r[27]|c->r[27]; // 80221160
  c->lr=0x80221168u; f_80226BC0(c); // 80221164
  c->r[0]=R8(c->r[28]+0x000000FDu); // 80221168
  W32(c->r[28]+0x000000E0u,c->r[31]); // 8022116C
  c->r[0]=c->r[0]|0x00000080u; // 80221170
  W8(c->r[28]+0x000000FDu,c->r[0]); // 80221174
L_80221178:;
  c->r[3]=0u+0x80490000u; // 80221178
  c->r[4]=0u+0x0000005Cu; // 8022117C
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80221180
  c->lr=0x80221188u; f_8023B6D0(c); // 80221184
  cmps(c,0,(int32_t)c->r[3],0); // 80221188
  if (crb(c,2)) { goto L_802211B8; } // 8022118C
  c->r[0]=R16(c->r[29]+0x00000050u); // 80221190
  c->r[5]=R32(c->r[30]+0x00000008u); // 80221194
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80221198
  c->r[4]=c->r[5]+c->r[0]; // 8022119C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802211A0
  c->r[4]=c->r[5]+c->r[0]; // 802211A4
  if (crb(c,2)) { goto L_802211B4; } // 802211A8
  c->r[5]=c->r[30]|c->r[30]; // 802211AC
  c->lr=0x802211B4u; f_8021C8E0(c); // 802211B0
L_802211B4:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 802211B4
L_802211B8:;
  c->r[11]=c->r[1]+0x00000030u; // 802211B8
  c->r[3]=c->r[28]|c->r[28]; // 802211BC
  c->lr=0x802211C4u; f_800C2E98(c); // 802211C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802211C4
  c->lr=c->r[0]; // 802211C8
  c->r[1]=c->r[1]+0x00000030u; // 802211CC
  return; // 802211D0
}

// __dt__Q36nw4hbm3lyt7TextBoxFv
void f_802211E0(Ctx* __restrict c) {
  trace_call(0x802211E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802211E0
  c->r[0]=c->lr; // 802211E4
  cmps(c,0,(int32_t)c->r[3],0); // 802211E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802211EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802211F0
  c->r[31]=c->r[4]|c->r[4]; // 802211F4
  W32(c->r[1]+0x00000028u,c->r[30]); // 802211F8
  c->r[30]=c->r[3]|c->r[3]; // 802211FC
  if (crb(c,2)) { goto L_80221354; } // 80221200
  c->r[0]=R8(c->r[3]+0x000000FDu); // 80221204
  c->r[4]=0u+0x803A0000u; // 80221208
  c->r[4]=c->r[4]+0x00007A3Cu; // 8022120C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80221210
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80221214
  if (crb(c,2)) { goto L_80221250; } // 80221218
  c->r[3]=R32(c->r[3]+0x000000E0u); // 8022121C
  c->r[4]=0u+0xFFFFFFFFu; // 80221220
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221224
  c->r[12]=R32(c->r[12]+0x00000008u); // 80221228
  c->ctr=c->r[12]; // 8022122C
  if (true) { c->lr=0x80221234u; dispatch(c,c->ctr); } // 80221230
  c->r[3]=0u+0x80490000u; // 80221234
  c->r[4]=R32(c->r[30]+0x000000E0u); // 80221238
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8022123C
  c->lr=0x80221244u; f_8023B6E0(c); // 80221240
  c->r[0]=R8(c->r[30]+0x000000FDu); // 80221244
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80221248
  W8(c->r[30]+0x000000FDu,c->r[0]); // 8022124C
L_80221250:;
  c->r[0]=0u+0x00000000u; // 80221250
  W32(c->r[30]+0x000000E0u,c->r[0]); // 80221254
  goto L_802212B0; // 80221258
  if (true) { c->lr=0x80221260u; dispatch(c,c->ctr); } // 8022125C
  c->r[0]=c->r[3]^0x80000000u; // 80221260
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80221264
  c->r[4]=0u+0x43300000u; // 80221268
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022126C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221270
  W32(c->r[1]+0x00000018u,c->r[4]); // 80221274
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80221278
  c->ctr=c->r[12]; // 8022127C
  if (true) { c->lr=0x80221284u; dispatch(c,c->ctr); } // 80221280
  c->r[0]=c->r[3]^0x80000000u; // 80221284
  W32(c->r[1]+0x00000024u,c->r[0]); // 80221288
  {uint32_t ea=c->r[3]+0xFFFFF8A0u; c->f[1]=RF64(ea);} // 8022128C
  W32(c->r[1]+0x00000020u,c->r[4]); // 80221290
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80221294
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80221298
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8022129C
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 802212A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802212A4
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 802212A8
  goto L_802212C8; // 802212AC
L_802212B0:;
  c->r[3]=0u+0x80380000u; // 802212B0
  {uint32_t ea=c->r[3]+0xFFFFF898u; c->f[0]=c->ps1[0]=RF32(ea);} // 802212B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802212B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802212BC
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 802212C0
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 802212C4
L_802212C8:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 802212C8
  cmps(c,0,(int32_t)c->r[3],0); // 802212CC
  if (crb(c,2)) { goto L_8022130C; } // 802212D0
  c->r[0]=R8(c->r[3]+0x00000054u); // 802212D4
  cmps(c,0,(int32_t)c->r[0],0); // 802212D8
  if (!crb(c,2)) { goto L_8022130C; } // 802212DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802212E0
  c->r[4]=0u+0xFFFFFFFFu; // 802212E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802212E8
  c->ctr=c->r[12]; // 802212EC
  if (true) { c->lr=0x802212F4u; dispatch(c,c->ctr); } // 802212F0
  c->r[3]=0u+0x80490000u; // 802212F4
  c->r[4]=R32(c->r[30]+0x00000028u); // 802212F8
  c->r[3]=R32(c->r[3]+0x00001A20u); // 802212FC
  c->lr=0x80221304u; f_8023B6E0(c); // 80221300
  c->r[0]=0u+0x00000000u; // 80221304
  W32(c->r[30]+0x00000028u,c->r[0]); // 80221308
L_8022130C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8022130C
  c->r[3]=c->r[30]|c->r[30]; // 80221310
  c->r[12]=R32(c->r[12]+0x00000068u); // 80221314
  c->ctr=c->r[12]; // 80221318
  if (true) { c->lr=0x80221320u; dispatch(c,c->ctr); } // 8022131C
  c->r[4]=0u+0x80220000u; // 80221320
  c->r[3]=c->r[30]+0x000000D8u; // 80221324
  c->r[4]=c->r[4]+0xFFFFA600u; // 80221328
  c->r[5]=0u+0x00000004u; // 8022132C
  c->r[6]=0u+0x00000002u; // 80221330
  c->lr=0x80221338u; f_800C2C84(c); // 80221334
  c->r[3]=c->r[30]|c->r[30]; // 80221338
  c->r[4]=0u+0x00000000u; // 8022133C
  c->lr=0x80221344u; f_8021F930(c); // 80221340
  cmps(c,0,(int32_t)c->r[31],0); // 80221344
  if (!crb(c,1)) { goto L_80221354; } // 80221348
  c->r[3]=c->r[30]|c->r[30]; // 8022134C
  c->lr=0x80221354u; f_800C2AC0(c); // 80221350
L_80221354:;
  c->r[3]=c->r[30]|c->r[30]; // 80221354
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80221358
  c->r[30]=R32(c->r[1]+0x00000028u); // 8022135C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80221360
  c->lr=c->r[0]; // 80221364
  c->r[1]=c->r[1]+0x00000030u; // 80221368
  return; // 8022136C
}

// GetVtxColor__Q36nw4hbm3lyt7TextBoxCFUl
void f_80221370(Ctx* __restrict c) {
  trace_call(0x80221370u);
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFCu; // 80221370
  c->r[4]=c->r[4]+c->r[0]; // 80221374
  c->r[0]=R32(c->r[4]+0x000000D8u); // 80221378
  W32(c->r[3]+0x00000000u,c->r[0]); // 8022137C
  return; // 80221380
}

// fn_80221390
void f_80221390(Ctx* __restrict c) {
  trace_call(0x80221390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221390
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFCu; // 80221394
  c->r[3]=c->r[3]+c->r[4]; // 80221398
  c->r[0]=R32(c->r[5]+0x00000000u); // 8022139C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802213A0
  c->r[0]=R8(c->r[1]+0x00000008u); // 802213A4
  W8(c->r[3]+0x000000D8u,c->r[0]); // 802213A8
  c->r[0]=R8(c->r[1]+0x00000009u); // 802213AC
  W8(c->r[3]+0x000000D9u,c->r[0]); // 802213B0
  c->r[0]=R8(c->r[1]+0x0000000Au); // 802213B4
  W8(c->r[3]+0x000000DAu,c->r[0]); // 802213B8
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 802213BC
  W8(c->r[3]+0x000000DBu,c->r[0]); // 802213C0
  c->r[1]=c->r[1]+0x00000010u; // 802213C4
  return; // 802213C8
}

// fn_802213D0
void f_802213D0(Ctx* __restrict c) {
  trace_call(0x802213D0u);
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 802213D0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802213D4
  c->r[3]=c->r[3]+c->r[5]; // 802213D8
  c->r[3]=c->r[3]+c->r[0]; // 802213DC
  c->r[3]=R8(c->r[3]+0x000000D8u); // 802213E0
  return; // 802213E4
}

// fn_802213F0
void f_802213F0(Ctx* __restrict c) {
  trace_call(0x802213F0u);
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 802213F0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802213F4
  c->r[3]=c->r[3]+c->r[6]; // 802213F8
  c->r[3]=c->r[3]+c->r[0]; // 802213FC
  W8(c->r[3]+0x000000D8u,c->r[5]); // 80221400
  return; // 80221404
}

// DrawSelf__Q36nw4hbm3lyt7TextBoxFRCQ36nw4hbm3lyt8DrawInfo
void f_80221410(Ctx* __restrict c) {
  trace_call(0x80221410u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221410
  c->r[0]=c->lr; // 80221414
  W32(c->r[1]+0x00000224u,c->r[0]); // 80221418
  c->r[11]=c->r[1]+0x000001E0u; // 8022141C
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 80221420
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 80221424
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[30]);} // 80221428
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,30,ea,0,0);} // 8022142C
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[29]);} // 80221430
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,29,ea,0,0);} // 80221434
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[28]);} // 80221438
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,28,ea,0,0);} // 8022143C
  c->lr=0x80221444u; f_800C2E18(c); // 80221440
  c->r[0]=R32(c->r[3]+0x000000D4u); // 80221444
  c->r[31]=0u+0x80380000u; // 80221448
  c->r[30]=c->r[3]|c->r[3]; // 8022144C
  cmps(c,0,(int32_t)c->r[0],0); // 80221450
  c->r[31]=c->r[31]+0xFFFFF898u; // 80221454
  if (crb(c,2)) { goto L_80221AEC; } // 80221458
  c->r[0]=R32(c->r[3]+0x000000E0u); // 8022145C
  cmps(c,0,(int32_t)c->r[0],0); // 80221460
  if (crb(c,2)) { goto L_80221AEC; } // 80221464
  c->r[0]=R32(c->r[3]+0x00000028u); // 80221468
  cmps(c,0,(int32_t)c->r[0],0); // 8022146C
  if (!crb(c,2)) { goto L_80221478; } // 80221470
  goto L_80221AEC; // 80221474
L_80221478:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221478
  c->r[12]=R32(c->r[12]+0x00000060u); // 8022147C
  c->ctr=c->r[12]; // 80221480
  if (true) { c->lr=0x80221488u; dispatch(c,c->ctr); } // 80221484
  c->r[3]=c->r[1]+0x00000138u; // 80221488
  c->lr=0x80221490u; f_8022A8F0(c); // 8022148C
  c->r[4]=R32(c->r[30]+0x000000E0u); // 80221490
  c->r[3]=c->r[1]+0x00000138u; // 80221494
  c->lr=0x8022149Cu; f_802251C0(c); // 80221498
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022149C
  c->r[3]=c->r[1]+0x00000138u; // 802214A0
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802214A4
  c->lr=0x802214ACu; f_80225E70(c); // 802214A8
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 802214AC
  c->r[3]=c->r[1]+0x00000138u; // 802214B0
  c->lr=0x802214B8u; f_8022AAE0(c); // 802214B4
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802214B8
  c->r[3]=c->r[1]+0x00000138u; // 802214BC
  c->lr=0x802214C4u; f_8022AAF0(c); // 802214C0
  c->r[0]=R32(c->r[30]+0x000000D8u); // 802214C4
  c->r[3]=c->r[1]+0x00000030u; // 802214C8
  W32(c->r[1]+0x00000028u,c->r[0]); // 802214CC
  c->r[4]=c->r[1]+0x00000028u; // 802214D0
  c->r[5]=R8(c->r[30]+0x000000CEu); // 802214D4
  c->lr=0x802214DCu; f_8021AA50(c); // 802214D8
  c->r[0]=R32(c->r[30]+0x000000DCu); // 802214DC
  c->r[3]=c->r[1]+0x0000002Cu; // 802214E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802214E4
  c->r[4]=c->r[1]+0x00000024u; // 802214E8
  c->r[5]=R8(c->r[30]+0x000000CEu); // 802214EC
  c->lr=0x802214F4u; f_8021AA50(c); // 802214F0
  c->r[5]=R32(c->r[1]+0x00000030u); // 802214F4
  c->r[3]=c->r[1]+0x00000138u; // 802214F8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 802214FC
  c->r[4]=0u+0x00000000u; // 80221500
  cmpu(c,0,c->r[5],c->r[0]); // 80221504
  if (crb(c,2)) { goto L_80221510; } // 80221508
  c->r[4]=0u+0x00000002u; // 8022150C
L_80221510:;
  c->lr=0x80221514u; f_80225B80(c); // 80221510
  c->r[5]=R32(c->r[1]+0x00000030u); // 80221514
  c->r[3]=c->r[1]+0x00000138u; // 80221518
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8022151C
  c->r[4]=c->r[1]+0x00000020u; // 80221520
  W32(c->r[1]+0x00000020u,c->r[5]); // 80221524
  c->r[5]=c->r[1]+0x0000001Cu; // 80221528
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022152C
  c->lr=0x80221534u; f_80225CD0(c); // 80221530
  c->r[3]=R32(c->r[30]+0x00000028u); // 80221534
  c->r[0]=R32(c->r[3]+0x00000024u); // 80221538
  W32(c->r[1]+0x00000050u,c->r[0]); // 8022153C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80221540
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000050u); // 80221544
  W32(c->r[1]+0x00000054u,c->r[0]); // 80221548
  cmps(c,0,(int32_t)c->r[3],0); // 8022154C
  if (!crb(c,0)) { goto L_8022155C; } // 80221550
  c->r[0]=0u+0x00000000u; // 80221554
  goto L_8022156C; // 80221558
L_8022155C:;
  cmps(c,0,(int32_t)c->r[3],255); // 8022155C
  c->r[0]=0u+0x000000FFu; // 80221560
  if (crb(c,1)) { goto L_8022156C; } // 80221564
  c->r[0]=c->r[3]|c->r[3]; // 80221568
L_8022156C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000052u); // 8022156C
  W8(c->r[1]+0x00000010u,c->r[0]); // 80221570
  cmps(c,0,(int32_t)c->r[3],0); // 80221574
  if (!crb(c,0)) { goto L_80221584; } // 80221578
  c->r[0]=0u+0x00000000u; // 8022157C
  goto L_80221594; // 80221580
L_80221584:;
  cmps(c,0,(int32_t)c->r[3],255); // 80221584
  c->r[0]=0u+0x000000FFu; // 80221588
  if (crb(c,1)) { goto L_80221594; } // 8022158C
  c->r[0]=c->r[3]|c->r[3]; // 80221590
L_80221594:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000054u); // 80221594
  W8(c->r[1]+0x00000011u,c->r[0]); // 80221598
  cmps(c,0,(int32_t)c->r[3],0); // 8022159C
  if (!crb(c,0)) { goto L_802215AC; } // 802215A0
  c->r[0]=0u+0x00000000u; // 802215A4
  goto L_802215BC; // 802215A8
L_802215AC:;
  cmps(c,0,(int32_t)c->r[3],255); // 802215AC
  c->r[0]=0u+0x000000FFu; // 802215B0
  if (crb(c,1)) { goto L_802215BC; } // 802215B4
  c->r[0]=c->r[3]|c->r[3]; // 802215B8
L_802215BC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000056u); // 802215BC
  W8(c->r[1]+0x00000012u,c->r[0]); // 802215C0
  cmps(c,0,(int32_t)c->r[3],0); // 802215C4
  if (!crb(c,0)) { goto L_802215D4; } // 802215C8
  c->r[0]=0u+0x00000000u; // 802215CC
  goto L_802215E4; // 802215D0
L_802215D4:;
  cmps(c,0,(int32_t)c->r[3],255); // 802215D4
  c->r[0]=0u+0x000000FFu; // 802215D8
  if (crb(c,1)) { goto L_802215E4; } // 802215DC
  c->r[0]=c->r[3]|c->r[3]; // 802215E0
L_802215E4:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 802215E4
  W8(c->r[1]+0x00000013u,c->r[0]); // 802215E8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802215EC
  W32(c->r[1]+0x00000048u,c->r[0]); // 802215F0
  c->r[0]=R32(c->r[3]+0x00000030u); // 802215F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000048u); // 802215F8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802215FC
  cmps(c,0,(int32_t)c->r[4],0); // 80221600
  c->r[0]=R32(c->r[1]+0x00000010u); // 80221604
  if (!crb(c,0)) { goto L_80221614; } // 80221608
  c->r[3]=0u+0x00000000u; // 8022160C
  goto L_80221624; // 80221610
L_80221614:;
  cmps(c,0,(int32_t)c->r[4],255); // 80221614
  c->r[3]=0u+0x000000FFu; // 80221618
  if (crb(c,1)) { goto L_80221624; } // 8022161C
  c->r[3]=c->r[4]|c->r[4]; // 80221620
L_80221624:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000004Au); // 80221624
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80221628
  cmps(c,0,(int32_t)c->r[4],0); // 8022162C
  if (!crb(c,0)) { goto L_8022163C; } // 80221630
  c->r[3]=0u+0x00000000u; // 80221634
  goto L_8022164C; // 80221638
L_8022163C:;
  cmps(c,0,(int32_t)c->r[4],255); // 8022163C
  c->r[3]=0u+0x000000FFu; // 80221640
  if (crb(c,1)) { goto L_8022164C; } // 80221644
  c->r[3]=c->r[4]|c->r[4]; // 80221648
L_8022164C:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000004Cu); // 8022164C
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80221650
  cmps(c,0,(int32_t)c->r[4],0); // 80221654
  if (!crb(c,0)) { goto L_80221664; } // 80221658
  c->r[3]=0u+0x00000000u; // 8022165C
  goto L_80221674; // 80221660
L_80221664:;
  cmps(c,0,(int32_t)c->r[4],255); // 80221664
  c->r[3]=0u+0x000000FFu; // 80221668
  if (crb(c,1)) { goto L_80221674; } // 8022166C
  c->r[3]=c->r[4]|c->r[4]; // 80221670
L_80221674:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000004Eu); // 80221674
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80221678
  cmps(c,0,(int32_t)c->r[4],0); // 8022167C
  if (!crb(c,0)) { goto L_8022168C; } // 80221680
  c->r[3]=0u+0x00000000u; // 80221684
  goto L_8022169C; // 80221688
L_8022168C:;
  cmps(c,0,(int32_t)c->r[4],255); // 8022168C
  c->r[3]=0u+0x000000FFu; // 80221690
  if (crb(c,1)) { goto L_8022169C; } // 80221694
  c->r[3]=c->r[4]|c->r[4]; // 80221698
L_8022169C:;
  W8(c->r[1]+0x0000000Fu,c->r[3]); // 8022169C
  c->r[3]=c->r[1]+0x00000138u; // 802216A0
  c->r[4]=c->r[1]+0x00000018u; // 802216A4
  c->r[5]=c->r[1]+0x00000014u; // 802216A8
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 802216AC
  W32(c->r[1]+0x00000018u,c->r[0]); // 802216B0
  W32(c->r[1]+0x00000014u,c->r[6]); // 802216B4
  c->lr=0x802216BCu; f_80225B30(c); // 802216B8
  c->r[4]=R32(c->r[30]+0x000000F4u); // 802216BC
  cmps(c,0,(int32_t)c->r[4],0); // 802216C0
  if (crb(c,2)) { goto L_802216D0; } // 802216C4
  c->r[3]=c->r[1]+0x00000138u; // 802216C8
  c->lr=0x802216D0u; f_8022AB60(c); // 802216CC
L_802216D0:;
  c->r[3]=c->r[1]+0x00000138u; // 802216D0
  c->lr=0x802216D8u; f_802251E0(c); // 802216D4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802216D8
  c->r[3]=c->r[1]+0x00000138u; // 802216DC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 802216E0
  c->f[2]=c->f[1]; // 802216E4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 802216E8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 802216EC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 802216F0
  c->lr=0x802216F8u; f_802261F0(c); // 802216F4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802216F8
  c->r[3]=c->r[1]+0x00000068u; // 802216FC
  c->r[6]=R16(c->r[30]+0x000000FAu); // 80221700
  c->r[4]=c->r[1]+0x000000D8u; // 80221704
  c->r[5]=R32(c->r[30]+0x000000D4u); // 80221708
  c->r[15]=R32(c->r[1]+0x00000138u); // 8022170C
  c->r[16]=R32(c->r[1]+0x0000013Cu); // 80221710
  c->r[17]=R32(c->r[1]+0x00000140u); // 80221714
  c->r[18]=R32(c->r[1]+0x00000144u); // 80221718
  c->r[19]=R32(c->r[1]+0x00000148u); // 8022171C
  c->r[20]=R32(c->r[1]+0x0000014Cu); // 80221720
  c->r[21]=R32(c->r[1]+0x00000150u); // 80221724
  c->r[22]=R32(c->r[1]+0x00000154u); // 80221728
  c->r[23]=R32(c->r[1]+0x00000158u); // 8022172C
  c->r[24]=R32(c->r[1]+0x0000015Cu); // 80221730
  c->r[25]=R32(c->r[1]+0x00000160u); // 80221734
  c->r[26]=R32(c->r[1]+0x00000164u); // 80221738
  c->r[27]=R32(c->r[1]+0x00000168u); // 8022173C
  c->r[28]=R32(c->r[1]+0x0000016Cu); // 80221740
  c->r[29]=R32(c->r[1]+0x00000170u); // 80221744
  c->r[12]=R32(c->r[1]+0x00000174u); // 80221748
  c->r[11]=R16(c->r[1]+0x00000178u); // 8022174C
  c->r[10]=R8(c->r[1]+0x0000017Au); // 80221750
  c->r[9]=R8(c->r[1]+0x0000017Bu); // 80221754
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80221758
  c->r[8]=R32(c->r[1]+0x00000180u); // 8022175C
  {uint32_t ea=c->r[1]+0x00000184u; c->f[2]=c->ps1[2]=RF32(ea);} // 80221760
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221764
  c->r[7]=R32(c->r[1]+0x0000018Cu); // 80221768
  c->r[0]=R32(c->r[1]+0x00000190u); // 8022176C
  c->r[14]=R32(c->r[1]+0x00000194u); // 80221770
  W32(c->r[1]+0x000000D8u,c->r[15]); // 80221774
  W32(c->r[1]+0x000000DCu,c->r[16]); // 80221778
  W32(c->r[1]+0x000000E0u,c->r[17]); // 8022177C
  W32(c->r[1]+0x000000E4u,c->r[18]); // 80221780
  W32(c->r[1]+0x000000E8u,c->r[19]); // 80221784
  W32(c->r[1]+0x000000ECu,c->r[20]); // 80221788
  W32(c->r[1]+0x000000F0u,c->r[21]); // 8022178C
  W32(c->r[1]+0x000000F4u,c->r[22]); // 80221790
  W32(c->r[1]+0x000000F8u,c->r[23]); // 80221794
  W32(c->r[1]+0x000000FCu,c->r[24]); // 80221798
  W32(c->r[1]+0x00000100u,c->r[25]); // 8022179C
  W32(c->r[1]+0x00000104u,c->r[26]); // 802217A0
  W32(c->r[1]+0x00000108u,c->r[27]); // 802217A4
  W32(c->r[1]+0x0000010Cu,c->r[28]); // 802217A8
  W32(c->r[1]+0x00000110u,c->r[29]); // 802217AC
  W32(c->r[1]+0x00000114u,c->r[12]); // 802217B0
  W16(c->r[1]+0x00000118u,c->r[11]); // 802217B4
  W8(c->r[1]+0x0000011Au,c->r[10]); // 802217B8
  W8(c->r[1]+0x0000011Bu,c->r[9]); // 802217BC
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 802217C0
  W32(c->r[1]+0x00000120u,c->r[8]); // 802217C4
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[2]);} // 802217C8
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 802217CC
  W32(c->r[1]+0x0000012Cu,c->r[7]); // 802217D0
  W32(c->r[1]+0x00000130u,c->r[0]); // 802217D4
  W32(c->r[1]+0x00000134u,c->r[14]); // 802217D8
  c->lr=0x802217E0u; f_802221D0(c); // 802217DC
  c->r[3]=c->r[1]+0x000000D8u; // 802217E0
  c->r[4]=0u+0xFFFFFFFFu; // 802217E4
  c->lr=0x802217ECu; f_8022A950(c); // 802217E8
  c->r[3]=c->r[30]|c->r[30]; // 802217EC
  c->lr=0x802217F4u; f_80220860(c); // 802217F0
  c->r[5]=0u+0x55550000u; // 802217F4
  c->r[6]=R8(c->r[30]+0x000000FCu); // 802217F8
  c->r[0]=c->r[5]+0x00005556u; // 802217FC
  W32(c->r[1]+0x00000044u,c->r[4]); // 80221800
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80221804
  W32(c->r[1]+0x00000040u,c->r[3]); // 80221808
  W32(c->r[1]+0x00000038u,c->r[3]); // 8022180C
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 80221810
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80221814
  c->r[0]=c->r[5]+c->r[0]; // 80221818
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8022181C
  c->r[0]=c->r[6]-c->r[0]; // 80221820
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80221824
  cmps(c,0,(int32_t)c->r[0],1); // 80221828
  if (crb(c,2)) { goto L_80221840; } // 8022182C
  cmps(c,0,(int32_t)c->r[0],2); // 80221830
  if (crb(c,2)) { goto L_80221848; } // 80221834
  {uint32_t ea=c->r[31]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80221838
  goto L_8022184C; // 8022183C
L_80221840:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80221840
  goto L_8022184C; // 80221844
L_80221848:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 80221848
L_8022184C:;
  c->r[3]=0u+0x55550000u; // 8022184C
  c->r[0]=c->r[3]+0x00005556u; // 80221850
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80221854
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80221858
  c->r[0]=c->r[3]+c->r[0]; // 8022185C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80221860
  cmps(c,0,(int32_t)c->r[0],1); // 80221864
  if (crb(c,2)) { goto L_8022187C; } // 80221868
  cmps(c,0,(int32_t)c->r[0],2); // 8022186C
  if (crb(c,2)) { goto L_80221884; } // 80221870
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80221874
  goto L_80221888; // 80221878
L_8022187C:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 8022187C
  goto L_80221888; // 80221880
L_80221884:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 80221884
L_80221888:;
  {uint32_t ea=c->r[1]+0x00000074u; c->f[3]=c->ps1[3]=RF32(ea);} // 80221888
  c->r[3]=0u+0x55550000u; // 8022188C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80221890
  c->r[0]=c->r[3]+0x00005556u; // 80221894
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221898
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022189C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 802218A0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802218A4
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 802218A8
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802218AC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 802218B0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802218B4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802218B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 802218BC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[7]); // 802218C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 802218C4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802218C8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 802218CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 802218D0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[4]); // 802218D4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 802218D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 802218DC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 802218E0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 802218E4
  c->r[4]=R8(c->r[30]+0x000000FCu); // 802218E8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 802218EC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802218F0
  c->r[0]=c->r[3]+c->r[0]; // 802218F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802218F8
  c->r[0]=c->r[4]-c->r[0]; // 802218FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80221900
  cmps(c,0,(int32_t)c->r[0],1); // 80221904
  if (crb(c,2)) { goto L_8022191C; } // 80221908
  cmps(c,0,(int32_t)c->r[0],2); // 8022190C
  if (crb(c,2)) { goto L_80221924; } // 80221910
  {uint32_t ea=c->r[31]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 80221914
  goto L_80221928; // 80221918
L_8022191C:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 8022191C
  goto L_80221928; // 80221920
L_80221924:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[28]=c->ps1[28]=RF32(ea);} // 80221924
L_80221928:;
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221928
  c->r[3]=c->r[1]+0x00000138u; // 8022192C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221930
  c->r[14]=R32(c->r[30]+0x000000D4u); // 80221934
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 80221938
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022193C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80221940
  c->lr=0x80221948u; f_802261F0(c); // 80221944
  c->r[15]=R16(c->r[30]+0x000000FAu); // 80221948
  cmps(c,0,(int32_t)c->r[15],0); // 8022194C
  if (!crb(c,1)) { goto L_80221AE0; } // 80221950
  {uint32_t ea=c->r[31]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80221954
  c->r[16]=0u+0x803A0000u; // 80221958
  goto L_80221AD8; // 8022195C
L_80221960:;
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80221960
  c->f[1]=c->f[31]; // 80221964
  c->r[29]=R32(c->r[1]+0x00000138u); // 80221968
  c->f[2]=c->f[31]; // 8022196C
  c->r[28]=R32(c->r[1]+0x0000013Cu); // 80221970
  c->r[3]=c->r[1]+0x00000078u; // 80221974
  c->r[27]=R32(c->r[1]+0x00000140u); // 80221978
  c->r[26]=R32(c->r[1]+0x00000144u); // 8022197C
  c->r[25]=R32(c->r[1]+0x00000148u); // 80221980
  c->r[24]=R32(c->r[1]+0x0000014Cu); // 80221984
  c->r[23]=R32(c->r[1]+0x00000150u); // 80221988
  c->r[22]=R32(c->r[1]+0x00000154u); // 8022198C
  c->r[21]=R32(c->r[1]+0x00000158u); // 80221990
  c->r[20]=R32(c->r[1]+0x0000015Cu); // 80221994
  c->r[19]=R32(c->r[1]+0x00000160u); // 80221998
  c->r[18]=R32(c->r[1]+0x00000164u); // 8022199C
  c->r[17]=R32(c->r[1]+0x00000168u); // 802219A0
  c->r[12]=R32(c->r[1]+0x0000016Cu); // 802219A4
  c->r[11]=R32(c->r[1]+0x00000170u); // 802219A8
  c->r[10]=R32(c->r[1]+0x00000174u); // 802219AC
  c->r[9]=R16(c->r[1]+0x00000178u); // 802219B0
  c->r[8]=R8(c->r[1]+0x0000017Au); // 802219B4
  c->r[7]=R8(c->r[1]+0x0000017Bu); // 802219B8
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802219BC
  c->r[6]=R32(c->r[1]+0x00000180u); // 802219C0
  {uint32_t ea=c->r[1]+0x00000184u; c->f[3]=c->ps1[3]=RF32(ea);} // 802219C4
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=c->ps1[0]=RF32(ea);} // 802219C8
  c->r[5]=R32(c->r[1]+0x0000018Cu); // 802219CC
  c->r[4]=R32(c->r[1]+0x00000190u); // 802219D0
  c->r[0]=R32(c->r[1]+0x00000194u); // 802219D4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[31]);} // 802219D8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[31]);} // 802219DC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[31]);} // 802219E0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[31]);} // 802219E4
  W32(c->r[1]+0x00000078u,c->r[29]); // 802219E8
  W32(c->r[1]+0x0000007Cu,c->r[28]); // 802219EC
  W32(c->r[1]+0x00000080u,c->r[27]); // 802219F0
  W32(c->r[1]+0x00000084u,c->r[26]); // 802219F4
  W32(c->r[1]+0x00000088u,c->r[25]); // 802219F8
  W32(c->r[1]+0x0000008Cu,c->r[24]); // 802219FC
  W32(c->r[1]+0x00000090u,c->r[23]); // 80221A00
  W32(c->r[1]+0x00000094u,c->r[22]); // 80221A04
  W32(c->r[1]+0x00000098u,c->r[21]); // 80221A08
  W32(c->r[1]+0x0000009Cu,c->r[20]); // 80221A0C
  W32(c->r[1]+0x000000A0u,c->r[19]); // 80221A10
  W32(c->r[1]+0x000000A4u,c->r[18]); // 80221A14
  W32(c->r[1]+0x000000A8u,c->r[17]); // 80221A18
  W32(c->r[1]+0x000000ACu,c->r[12]); // 80221A1C
  W32(c->r[1]+0x000000B0u,c->r[11]); // 80221A20
  W32(c->r[1]+0x000000B4u,c->r[10]); // 80221A24
  W16(c->r[1]+0x000000B8u,c->r[9]); // 80221A28
  W8(c->r[1]+0x000000BAu,c->r[8]); // 80221A2C
  W8(c->r[1]+0x000000BBu,c->r[7]); // 80221A30
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[4]);} // 80221A34
  W32(c->r[1]+0x000000C0u,c->r[6]); // 80221A38
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[3]);} // 80221A3C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80221A40
  W32(c->r[1]+0x000000CCu,c->r[5]); // 80221A44
  W32(c->r[1]+0x000000D0u,c->r[4]); // 80221A48
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80221A4C
  c->lr=0x80221A54u; f_802261F0(c); // 80221A50
  c->f[1]=c->f[30]; // 80221A54
  c->r[5]=c->r[14]|c->r[14]; // 80221A58
  c->r[6]=c->r[15]|c->r[15]; // 80221A5C
  c->r[3]=c->r[1]+0x00000058u; // 80221A60
  c->r[4]=c->r[1]+0x00000078u; // 80221A64
  c->r[7]=c->r[1]+0x00000008u; // 80221A68
  c->lr=0x80221A70u; f_80221B30(c); // 80221A6C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221A70
  c->r[17]=c->r[3]|c->r[3]; // 80221A74
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221A78
  c->r[3]=c->r[1]+0x00000078u; // 80221A7C
  c->r[4]=0u+0xFFFFFFFFu; // 80221A80
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 80221A84
  c->lr=0x80221A8Cu; f_8022A950(c); // 80221A88
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[30]); // 80221A8C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221A90
  c->r[3]=c->r[1]+0x00000138u; // 80221A94
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 80221A98
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80221A9C
  c->lr=0x80221AA4u; f_80226200(c); // 80221AA0
  c->r[4]=c->r[14]|c->r[14]; // 80221AA4
  c->r[5]=c->r[17]|c->r[17]; // 80221AA8
  c->r[3]=c->r[1]+0x00000138u; // 80221AAC
  c->lr=0x80221AB4u; f_8022BE30(c); // 80221AB0
  c->r[0]=R8(c->r[1]+0x00000008u); // 80221AB4
  cmps(c,0,(int32_t)c->r[0],0); // 80221AB8
  if (crb(c,2)) { goto L_80221ACC; } // 80221ABC
  c->r[3]=c->r[1]+0x00000138u; // 80221AC0
  c->r[4]=c->r[16]+0x00007A38u; // 80221AC4
  c->lr=0x80221ACCu; f_8022BF90(c); // 80221AC8
L_80221ACC:;
  c->r[0]=rotl(c->r[17],1)&0xFFFFFFFEu; // 80221ACC
  c->r[15]=c->r[15]-c->r[17]; // 80221AD0
  c->r[14]=c->r[14]+c->r[0]; // 80221AD4
L_80221AD8:;
  cmps(c,0,(int32_t)c->r[15],0); // 80221AD8
  if (crb(c,1)) { IRQCHK(c); goto L_80221960; } // 80221ADC
L_80221AE0:;
  c->r[3]=c->r[1]+0x00000138u; // 80221AE0
  c->r[4]=0u+0xFFFFFFFFu; // 80221AE4
  c->lr=0x80221AECu; f_8022A950(c); // 80221AE8
L_80221AEC:;
  c->r[11]=c->r[1]+0x000001E0u; // 80221AEC
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 80221AF0
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 80221AF4
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,30,ea,0,0);} // 80221AF8
  {uint32_t ea=c->r[1]+0x00000200u; c->f[30]=RF64(ea);} // 80221AFC
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,29,ea,0,0);} // 80221B00
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[29]=RF64(ea);} // 80221B04
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,28,ea,0,0);} // 80221B08
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[28]=RF64(ea);} // 80221B0C
  c->lr=0x80221B14u; f_800C2E64(c); // 80221B10
  c->r[0]=R32(c->r[1]+0x00000224u); // 80221B14
  c->lr=c->r[0]; // 80221B18
  c->r[1]=c->r[1]+0x00000220u; // 80221B1C
  return; // 80221B20
}

// CalcLineRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwifPb_i
void f_80221B30(Ctx* __restrict c) {
  trace_call(0x80221B30u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221B30
  c->r[0]=c->lr; // 80221B34
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80221B38
  c->r[11]=c->r[1]+0x00000090u; // 80221B3C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80221B40
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80221B44
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 80221B48
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 80221B4C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 80221B50
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 80221B54
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 80221B58
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 80221B5C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[27]);} // 80221B60
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,27,ea,0,0);} // 80221B64
  c->lr=0x80221B6Cu; f_800C2E3C(c); // 80221B68
  c->f[30]=c->f[1]; // 80221B6C
  c->r[0]=0u+0x00000000u; // 80221B70
  c->r[25]=c->r[4]|c->r[4]; // 80221B74
  W32(c->r[1]+0x00000050u,c->r[0]); // 80221B78
  c->r[24]=c->r[3]|c->r[3]; // 80221B7C
  c->r[26]=c->r[5]|c->r[5]; // 80221B80
  W32(c->r[1]+0x00000054u,c->r[0]); // 80221B84
  c->r[27]=c->r[6]|c->r[6]; // 80221B88
  c->r[28]=c->r[7]|c->r[7]; // 80221B8C
  c->r[3]=c->r[25]|c->r[25]; // 80221B90
  W32(c->r[1]+0x00000058u,c->r[0]); // 80221B94
  W32(c->r[1]+0x00000048u,c->r[4]); // 80221B98
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 80221B9C
  c->lr=0x80221BA4u; f_802251D0(c); // 80221BA0
  c->r[5]=R32(c->r[3]+0x00000004u); // 80221BA4
  c->r[23]=0u+0x80380000u; // 80221BA8
  c->r[4]=R32(c->r[3]+0x00000008u); // 80221BAC
  c->r[31]=0u+0x00000000u; // 80221BB0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80221BB4
  c->r[3]=c->r[25]|c->r[25]; // 80221BB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80221BBC
  c->r[30]=0u+0x00000000u; // 80221BC0
  {uint32_t ea=c->r[23]+0xFFFFF898u; c->f[31]=c->ps1[31]=RF32(ea);} // 80221BC4
  W32(c->r[1]+0x00000038u,c->r[31]); // 80221BC8
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80221BCC
  W32(c->r[1]+0x00000040u,c->r[4]); // 80221BD0
  W32(c->r[1]+0x00000008u,c->r[5]); // 80221BD4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80221BD8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80221BDC
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[31]);} // 80221BE0
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[31]);} // 80221BE4
  c->lr=0x80221BECu; f_8022AA50(c); // 80221BE8
  c->f[0]=c->f[31]; // 80221BEC
  fcmp(c,0,c->f[0],c->f[1]); // 80221BF0
  if (!crb(c,1)) { goto L_80221BFC; } // 80221BF4
  goto L_80221C00; // 80221BF8
L_80221BFC:;
  c->f[1]=c->f[0]; // 80221BFC
L_80221C00:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 80221C00
  c->r[3]=c->r[25]|c->r[25]; // 80221C04
  c->lr=0x80221C0Cu; f_8022AA50(c); // 80221C08
  c->r[3]=0u+0x80380000u; // 80221C0C
  {uint32_t ea=c->r[3]+0xFFFFF898u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221C10
  fcmp(c,0,c->f[0],c->f[1]); // 80221C14
  if (!crb(c,0)) { goto L_80221C20; } // 80221C18
  goto L_80221C24; // 80221C1C
L_80221C20:;
  c->f[1]=c->f[0]; // 80221C20
L_80221C24:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 80221C24
  c->r[0]=0u+0x00000000u; // 80221C28
  c->r[3]=c->r[1]+0x00000038u; // 80221C2C
  c->r[12]=c->r[1]+0x0000003Cu; // 80221C30
  W8(c->r[28]+0x00000000u,c->r[0]); // 80221C34
  W32(c->r[1]+0x00000038u,c->r[26]); // 80221C38
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80221C3C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80221C40
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221C44
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80221C48
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 80221C4C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80221C50
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80221C54
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80221C58
  c->lr=0x80221C60u; f_800C2CFC(c); // 80221C5C
  c->r[0]=c->r[0]|0x00000000u; // 80221C60
  c->r[5]=0u+0x80380000u; // 80221C64
  c->r[4]=0u+0x80380000u; // 80221C68
  {uint32_t ea=c->r[5]+0xFFFFF898u; c->f[27]=c->ps1[27]=RF32(ea);} // 80221C6C
  c->r[29]=c->r[3]|c->r[3]; // 80221C70
  {uint32_t ea=c->r[4]+0xFFFFF8A0u; c->f[29]=RF64(ea);} // 80221C74
  c->r[23]=0u+0x43300000u; // 80221C78
  goto L_80221EBC; // 80221C7C
L_80221C80:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80221C80
  cmps(c,0,(int32_t)c->r[0],32); // 80221C84
  if (!crb(c,0)) { goto L_80221DC0; } // 80221C88
  c->r[0]=cntlz(c->r[31]); // 80221C8C
  c->f[1]=c->f[31]; // 80221C90
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80221C94
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80221C98
  c->r[3]=c->r[25]|c->r[25]; // 80221C9C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[27]);} // 80221CA0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[27]);} // 80221CA4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[27]);} // 80221CA8
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80221CAC
  W32(c->r[1]+0x00000058u,c->r[0]); // 80221CB0
  c->lr=0x80221CB8u; f_80226200(c); // 80221CB4
  c->r[3]=c->r[25]|c->r[25]; // 80221CB8
  c->lr=0x80221CC0u; f_8022AB80(c); // 80221CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221CC0
  c->r[4]=c->r[1]+0x00000018u; // 80221CC4
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 80221CC8
  c->r[6]=c->r[1]+0x00000048u; // 80221CCC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80221CD0
  c->ctr=c->r[12]; // 80221CD4
  if (true) { c->lr=0x80221CDCu; dispatch(c,c->ctr); } // 80221CD8
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80221CDC
  c->r[29]=c->r[3]|c->r[3]; // 80221CE0
  W32(c->r[1]+0x00000038u,c->r[0]); // 80221CE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221CE8
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221CEC
  fcmp(c,0,c->f[0],c->f[1]); // 80221CF0
  if (!crb(c,1)) { goto L_80221CFC; } // 80221CF4
  goto L_80221D00; // 80221CF8
L_80221CFC:;
  c->f[1]=c->f[0]; // 80221CFC
L_80221D00:;
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[1]);} // 80221D00
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221D04
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80221D08
  fcmp(c,0,c->f[0],c->f[1]); // 80221D0C
  if (!crb(c,1)) { goto L_80221D18; } // 80221D10
  goto L_80221D1C; // 80221D14
L_80221D18:;
  c->f[1]=c->f[0]; // 80221D18
L_80221D1C:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 80221D1C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221D20
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221D24
  fcmp(c,0,c->f[0],c->f[1]); // 80221D28
  if (!crb(c,0)) { goto L_80221D34; } // 80221D2C
  goto L_80221D38; // 80221D30
L_80221D34:;
  c->f[1]=c->f[0]; // 80221D34
L_80221D38:;
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 80221D38
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80221D3C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221D40
  fcmp(c,0,c->f[0],c->f[1]); // 80221D44
  if (!crb(c,0)) { goto L_80221D50; } // 80221D48
  goto L_80221D54; // 80221D4C
L_80221D50:;
  c->f[1]=c->f[0]; // 80221D50
L_80221D54:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 80221D54
  c->r[3]=c->r[25]|c->r[25]; // 80221D58
  c->lr=0x80221D60u; f_80226240(c); // 80221D5C
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80221D60
  c->f[31]=c->f[1]; // 80221D64
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221D68
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80221D6C
  fcmp(c,0,c->f[0],c->f[30]); // 80221D70
  if (!crb(c,1)) { goto L_80221D84; } // 80221D74
  c->r[0]=0u+0x00000001u; // 80221D78
  W8(c->r[28]+0x00000000u,c->r[0]); // 80221D7C
  goto L_80221ED8; // 80221D80
L_80221D84:;
  cmps(c,0,(int32_t)c->r[29],4); // 80221D84
  if (!crb(c,2)) { goto L_80221D94; } // 80221D88
  c->r[3]=c->r[27]|c->r[27]; // 80221D8C
  goto L_80221F34; // 80221D90
L_80221D94:;
  cmps(c,0,(int32_t)c->r[29],1); // 80221D94
  if (!crb(c,2)) { goto L_80221DA4; } // 80221D98
  c->r[31]=0u+0x00000000u; // 80221D9C
  goto L_80221E84; // 80221DA0
L_80221DA4:;
  cmps(c,0,(int32_t)c->r[29],2); // 80221DA4
  if (!crb(c,2)) { goto L_80221DB4; } // 80221DA8
  c->r[31]=0u+0x00000001u; // 80221DAC
  goto L_80221E84; // 80221DB0
L_80221DB4:;
  cmps(c,0,(int32_t)c->r[29],3); // 80221DB4
  if (crb(c,2)) { goto L_80221ED8; } // 80221DB8
  goto L_80221E84; // 80221DBC
L_80221DC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80221DC0
  if (crb(c,2)) { goto L_80221DD4; } // 80221DC4
  c->r[3]=c->r[25]|c->r[25]; // 80221DC8
  c->lr=0x80221DD0u; f_8022AB10(c); // 80221DCC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80221DD0
L_80221DD4:;
  c->r[3]=c->r[25]|c->r[25]; // 80221DD4
  c->r[31]=0u+0x00000001u; // 80221DD8
  c->lr=0x80221DE0u; f_80226090(c); // 80221DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80221DE0
  if (crb(c,2)) { goto L_80221DF8; } // 80221DE4
  c->r[3]=c->r[25]|c->r[25]; // 80221DE8
  c->lr=0x80221DF0u; f_802260A0(c); // 80221DEC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80221DF0
  goto L_80221E3C; // 80221DF4
L_80221DF8:;
  c->r[3]=c->r[25]|c->r[25]; // 80221DF8
  c->lr=0x80221E00u; f_80225E50(c); // 80221DFC
  c->f[28]=c->f[1]; // 80221E00
  c->r[3]=c->r[25]|c->r[25]; // 80221E04
  c->lr=0x80221E0Cu; f_802251D0(c); // 80221E08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221E0C
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 80221E10
  c->r[12]=R32(c->r[12]+0x00000048u); // 80221E14
  c->ctr=c->r[12]; // 80221E18
  if (true) { c->lr=0x80221E20u; dispatch(c,c->ctr); } // 80221E1C
  c->r[0]=c->r[3]^0x80000000u; // 80221E20
  W32(c->r[1]+0x00000064u,c->r[0]); // 80221E24
  W32(c->r[1]+0x00000060u,c->r[23]); // 80221E28
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 80221E2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80221E30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 80221E34
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80221E38
L_80221E3C:;
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221E3C
  fcmp(c,0,c->f[0],c->f[31]); // 80221E40
  if (!crb(c,1)) { goto L_80221E4C; } // 80221E44
  c->f[0]=c->f[31]; // 80221E48
L_80221E4C:;
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80221E4C
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 80221E50
  fcmp(c,0,c->f[2],c->f[31]); // 80221E54
  if (!crb(c,0)) { goto L_80221E60; } // 80221E58
  c->f[2]=c->f[31]; // 80221E5C
L_80221E60:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80221E60
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221E64
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[2]);} // 80221E68
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80221E6C
  fcmp(c,0,c->f[0],c->f[30]); // 80221E70
  if (!crb(c,1)) { goto L_80221E84; } // 80221E74
  c->r[0]=0u+0x00000001u; // 80221E78
  W8(c->r[28]+0x00000000u,c->r[0]); // 80221E7C
  goto L_80221ED8; // 80221E80
L_80221E84:;
  c->r[30]=R32(c->r[1]+0x00000038u); // 80221E84
  c->r[3]=c->r[1]+0x00000038u; // 80221E88
  c->r[12]=c->r[1]+0x0000003Cu; // 80221E8C
  c->lr=0x80221E94u; f_800C2CFC(c); // 80221E90
  c->r[0]=c->r[0]|0x00000000u; // 80221E94
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80221E98
  c->r[29]=c->r[3]|c->r[3]; // 80221E9C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80221EA0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221EA4
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80221EA8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 80221EAC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80221EB0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80221EB4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80221EB8
L_80221EBC:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 80221EBC
  c->r[3]=c->r[4]-c->r[26]; // 80221EC0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80221EC4
  c->r[0]=c->r[0]+c->r[3]; // 80221EC8
  c->r[0]=sraw(c,c->r[0],1); // 80221ECC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 80221ED0
  if (!crb(c,1)) { IRQCHK(c); goto L_80221C80; } // 80221ED4
L_80221ED8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80221ED8
  cmps(c,0,(int32_t)c->r[0],0); // 80221EDC
  if (crb(c,2)) { goto L_80221F20; } // 80221EE0
  cmps(c,0,(int32_t)c->r[30],0); // 80221EE4
  if (crb(c,2)) { goto L_80221F20; } // 80221EE8
  c->r[3]=c->r[30]-c->r[26]; // 80221EEC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80221EF0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80221EF4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80221EF8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80221EFC
  c->r[0]=c->r[0]+c->r[3]; // 80221F00
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80221F04
  c->r[3]=sraw(c,c->r[0],1); // 80221F08
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[3]);} // 80221F0C
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[2]);} // 80221F10
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 80221F14
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 80221F18
  goto L_80221F34; // 80221F1C
L_80221F20:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 80221F20
  c->r[3]=c->r[0]-c->r[26]; // 80221F24
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80221F28
  c->r[0]=c->r[0]+c->r[3]; // 80221F2C
  c->r[3]=sraw(c,c->r[0],1); // 80221F30
L_80221F34:;
  c->r[11]=c->r[1]+0x00000090u; // 80221F34
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80221F38
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80221F3C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 80221F40
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 80221F44
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 80221F48
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 80221F4C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 80221F50
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 80221F54
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,27,ea,0,0);} // 80221F58
  {uint32_t ea=c->r[1]+0x00000090u; c->f[27]=RF64(ea);} // 80221F5C
  c->lr=0x80221F64u; f_800C2E88(c); // 80221F60
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80221F64
  c->lr=c->r[0]; // 80221F68
  c->r[1]=c->r[1]+0x000000E0u; // 80221F6C
  return; // 80221F70
}

// AllocStringBuffer__Q36nw4hbm3lyt7TextBoxFUs
void f_80221F80(Ctx* __restrict c) {
  trace_call(0x80221F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80221F80
  c->r[0]=c->lr; // 80221F84
  cmps(c,0,(int32_t)c->r[4],0); // 80221F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80221F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80221F90
  W32(c->r[1]+0x00000008u,c->r[30]); // 80221F94
  c->r[30]=c->r[3]|c->r[3]; // 80221F98
  if (crb(c,2)) { goto L_80221FE4; } // 80221F9C
  c->r[4]=c->r[4]+0x00000001u; // 80221FA0
  c->r[0]=R16(c->r[3]+0x000000F8u); // 80221FA4
  c->r[31]=rotl(c->r[4],1)&0x0000FFFEu; // 80221FA8
  cmpu(c,0,c->r[31],c->r[0]); // 80221FAC
  if (!crb(c,1)) { goto L_80221FE4; } // 80221FB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80221FB4
  c->r[12]=R32(c->r[12]+0x00000068u); // 80221FB8
  c->ctr=c->r[12]; // 80221FBC
  if (true) { c->lr=0x80221FC4u; dispatch(c,c->ctr); } // 80221FC0
  c->r[3]=0u+0x80490000u; // 80221FC4
  c->r[4]=c->r[31]|c->r[31]; // 80221FC8
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80221FCC
  c->lr=0x80221FD4u; f_8023B6D0(c); // 80221FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80221FD4
  W32(c->r[30]+0x000000D4u,c->r[3]); // 80221FD8
  if (crb(c,2)) { goto L_80221FE4; } // 80221FDC
  W16(c->r[30]+0x000000F8u,c->r[31]); // 80221FE0
L_80221FE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80221FE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80221FE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80221FEC
  c->lr=c->r[0]; // 80221FF0
  c->r[1]=c->r[1]+0x00000010u; // 80221FF4
  return; // 80221FF8
}

// FreeStringBuffer__Q36nw4hbm3lyt7TextBoxFv
void f_80222000(Ctx* __restrict c) {
  trace_call(0x80222000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222000
  c->r[0]=c->lr; // 80222004
  W32(c->r[1]+0x00000014u,c->r[0]); // 80222008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022200C
  c->r[31]=c->r[3]|c->r[3]; // 80222010
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80222014
  cmps(c,0,(int32_t)c->r[4],0); // 80222018
  if (crb(c,2)) { goto L_80222038; } // 8022201C
  c->r[3]=0u+0x80490000u; // 80222020
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80222024
  c->lr=0x8022202Cu; f_8023B6E0(c); // 80222028
  c->r[0]=0u+0x00000000u; // 8022202C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 80222030
  W16(c->r[31]+0x000000F8u,c->r[0]); // 80222034
L_80222038:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80222038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022203C
  c->lr=c->r[0]; // 80222040
  c->r[1]=c->r[1]+0x00000010u; // 80222044
  return; // 80222048
}

// SetString__Q36nw4hbm3lyt7TextBoxFPCwUs
void f_80222050(Ctx* __restrict c) {
  trace_call(0x80222050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222050
  c->r[0]=c->lr; // 80222054
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022205C
  c->r[31]=c->r[5]|c->r[5]; // 80222060
  W32(c->r[1]+0x00000018u,c->r[30]); // 80222064
  c->r[30]=c->r[4]|c->r[4]; // 80222068
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022206C
  c->r[29]=c->r[3]|c->r[3]; // 80222070
  c->r[3]=c->r[30]|c->r[30]; // 80222074
  c->lr=0x8022207Cu; f_800CE4B4(c); // 80222078
  c->r[12]=R32(c->r[29]+0x00000000u); // 8022207C
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 80222080
  c->r[3]=c->r[29]|c->r[29]; // 80222084
  c->r[4]=c->r[30]|c->r[30]; // 80222088
  c->r[12]=R32(c->r[12]+0x00000070u); // 8022208C
  c->r[5]=c->r[31]|c->r[31]; // 80222090
  c->ctr=c->r[12]; // 80222094
  if (true) { c->lr=0x8022209Cu; dispatch(c,c->ctr); } // 80222098
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022209C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802220A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802220A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802220A8
  c->lr=c->r[0]; // 802220AC
  c->r[1]=c->r[1]+0x00000020u; // 802220B0
  return; // 802220B4
}

// SetString__Q36nw4hbm3lyt7TextBoxFPCwUsUs
void f_802220C0(Ctx* __restrict c) {
  trace_call(0x802220C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802220C0
  c->r[0]=c->lr; // 802220C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802220C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802220CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802220D0
  c->r[30]=c->r[5]|c->r[5]; // 802220D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802220D8
  c->r[29]=c->r[3]|c->r[3]; // 802220DC
  c->r[8]=R32(c->r[3]+0x000000D4u); // 802220E0
  cmps(c,0,(int32_t)c->r[8],0); // 802220E4
  if (!crb(c,2)) { goto L_802220F4; } // 802220E8
  c->r[3]=0u+0x00000000u; // 802220EC
  goto L_8022216C; // 802220F0
L_802220F4:;
  c->r[3]=R16(c->r[3]+0x000000F8u); // 802220F4
  c->r[0]=cntlz(c->r[3]); // 802220F8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 802220FC
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 80222100
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80222104
  c->r[3]=0u-c->r[7]; // 80222108
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8022210C
  c->r[0]=c->r[0]&~c->r[3]; // 80222110
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80222114
  cmpu(c,0,c->r[5],c->r[0]); // 80222118
  if (crb(c,0)) { goto L_80222128; } // 8022211C
  c->r[3]=0u+0x00000000u; // 80222120
  goto L_8022216C; // 80222124
L_80222128:;
  c->r[0]=c->r[0]-c->r[5]; // 80222128
  c->r[31]=c->r[6]|c->r[6]; // 8022212C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80222130
  cmpu(c,0,c->r[6],c->r[0]); // 80222134
  if (!crb(c,1)) { goto L_80222140; } // 80222138
  c->r[31]=c->r[0]|c->r[0]; // 8022213C
L_80222140:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 80222140
  c->r[5]=rotl(c->r[31],1)&0x0001FFFEu; // 80222144
  c->r[3]=c->r[8]+c->r[0]; // 80222148
  c->lr=0x80222150u; f_80004000(c); // 8022214C
  c->r[0]=c->r[30]+c->r[31]; // 80222150
  W16(c->r[29]+0x000000FAu,c->r[0]); // 80222154
  c->r[4]=R32(c->r[29]+0x000000D4u); // 80222158
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 8022215C
  c->r[5]=0u+0x00000000u; // 80222160
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 80222164
  W16(c->r[4]+c->r[0],c->r[5]); // 80222168
L_8022216C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022216C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80222170
  c->r[30]=R32(c->r[1]+0x00000018u); // 80222174
  c->r[29]=R32(c->r[1]+0x00000014u); // 80222178
  c->lr=c->r[0]; // 8022217C
  c->r[1]=c->r[1]+0x00000020u; // 80222180
  return; // 80222184
}

// __dt__Q36nw4hbm2ut4FontFv
void f_80222190(Ctx* __restrict c) {
  trace_call(0x80222190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222190
  c->r[0]=c->lr; // 80222194
  cmps(c,0,(int32_t)c->r[3],0); // 80222198
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022219C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802221A0
  c->r[31]=c->r[3]|c->r[3]; // 802221A4
  if (crb(c,2)) { goto L_802221B8; } // 802221A8
  cmps(c,0,(int32_t)c->r[4],0); // 802221AC
  if (!crb(c,1)) { goto L_802221B8; } // 802221B0
  c->lr=0x802221B8u; f_800C2AC0(c); // 802221B4
L_802221B8:;
  c->r[3]=c->r[31]|c->r[31]; // 802221B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802221BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802221C0
  c->lr=c->r[0]; // 802221C4
  c->r[1]=c->r[1]+0x00000010u; // 802221C8
  return; // 802221CC
}

// CalcStringRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwif_v
void f_802221D0(Ctx* __restrict c) {
  trace_call(0x802221D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802221D0
  c->r[0]=c->lr; // 802221D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802221D8
  c->r[11]=c->r[1]+0x00000040u; // 802221DC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802221E0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802221E4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802221E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802221EC
  c->lr=0x802221F4u; f_800C2E48(c); // 802221F0
  c->r[30]=0u+0x80380000u; // 802221F4
  c->f[30]=c->f[1]; // 802221F8
  {uint32_t ea=c->r[30]+0xFFFFF898u; c->f[1]=c->ps1[1]=RF32(ea);} // 802221FC
  c->r[27]=c->r[4]|c->r[4]; // 80222200
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80222204
  c->r[26]=c->r[3]|c->r[3]; // 80222208
  c->f[2]=c->f[1]; // 8022220C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80222210
  c->r[28]=c->r[5]|c->r[5]; // 80222214
  c->r[29]=c->r[6]|c->r[6]; // 80222218
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8022221C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80222220
  c->r[3]=c->r[27]|c->r[27]; // 80222224
  c->lr=0x8022222Cu; f_802261F0(c); // 80222228
  {uint32_t ea=c->r[30]+0xFFFFF898u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022222C
  c->r[31]=0u+0x803A0000u; // 80222230
L_80222234:;
  c->f[1]=c->f[30]; // 80222234
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80222238
  c->r[4]=c->r[27]|c->r[27]; // 8022223C
  c->r[5]=c->r[28]|c->r[28]; // 80222240
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 80222244
  c->r[6]=c->r[29]|c->r[29]; // 80222248
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8022224C
  c->r[3]=c->r[1]+0x00000010u; // 80222250
  c->r[7]=c->r[1]+0x00000008u; // 80222254
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 80222258
  c->lr=0x80222260u; f_80221B30(c); // 8022225C
  c->r[0]=R8(c->r[1]+0x00000008u); // 80222260
  c->r[30]=c->r[3]|c->r[3]; // 80222264
  cmps(c,0,(int32_t)c->r[0],0); // 80222268
  if (crb(c,2)) { goto L_8022228C; } // 8022226C
  c->f[1]=c->f[30]; // 80222270
  c->r[4]=c->r[27]|c->r[27]; // 80222274
  c->r[3]=c->r[1]+0x00000010u; // 80222278
  c->r[5]=c->r[31]+0x00007A38u; // 8022227C
  c->r[7]=c->r[1]+0x00000008u; // 80222280
  c->r[6]=0u+0x00000001u; // 80222284
  c->lr=0x8022228Cu; f_80221B30(c); // 80222288
L_8022228C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022228C
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80222290
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222294
  c->r[28]=c->r[28]+c->r[0]; // 80222298
  c->r[29]=c->r[29]-c->r[30]; // 8022229C
  fcmp(c,0,c->f[0],c->f[1]); // 802222A0
  if (!crb(c,1)) { goto L_802222AC; } // 802222A4
  goto L_802222B0; // 802222A8
L_802222AC:;
  c->f[1]=c->f[0]; // 802222AC
L_802222B0:;
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[1]);} // 802222B0
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802222B4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802222B8
  fcmp(c,0,c->f[0],c->f[1]); // 802222BC
  if (!crb(c,1)) { goto L_802222C8; } // 802222C0
  goto L_802222CC; // 802222C4
L_802222C8:;
  c->f[1]=c->f[0]; // 802222C8
L_802222CC:;
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 802222CC
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802222D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802222D4
  fcmp(c,0,c->f[0],c->f[1]); // 802222D8
  if (!crb(c,0)) { goto L_802222E4; } // 802222DC
  goto L_802222E8; // 802222E0
L_802222E4:;
  c->f[1]=c->f[0]; // 802222E4
L_802222E8:;
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 802222E8
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802222EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802222F0
  fcmp(c,0,c->f[0],c->f[1]); // 802222F4
  if (!crb(c,0)) { goto L_80222300; } // 802222F8
  goto L_80222304; // 802222FC
L_80222300:;
  c->f[1]=c->f[0]; // 80222300
L_80222304:;
  cmps(c,0,(int32_t)c->r[29],0); // 80222304
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 80222308
  if (crb(c,1)) { IRQCHK(c); goto L_80222234; } // 8022230C
  c->r[11]=c->r[1]+0x00000040u; // 80222310
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80222314
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80222318
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8022231C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80222320
  c->lr=0x80222328u; f_800C2E94(c); // 80222324
  c->r[0]=R32(c->r[1]+0x00000064u); // 80222328
  c->lr=c->r[0]; // 8022232C
  c->r[1]=c->r[1]+0x00000060u; // 80222330
  return; // 80222334
}

// fn_80222340
void f_80222340(Ctx* __restrict c) {
  trace_call(0x80222340u);
  c->r[3]=0u+0x80490000u; // 80222340
  c->r[3]=c->r[3]+0x00001A38u; // 80222344
  return; // 80222348
}

// fn_80222350
void f_80222350(Ctx* __restrict c) {
  trace_call(0x80222350u);
  c->r[4]=0u+0x80490000u; // 80222350
  c->r[3]=0u+0x80490000u; // 80222354
  c->r[4]=c->r[4]+0x00001A28u; // 80222358
  W32(c->r[3]+0x00001A38u,c->r[4]); // 8022235C
  return; // 80222360
}

// fn_80222370
void f_80222370(Ctx* __restrict c) {
  trace_call(0x80222370u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222370
  c->r[0]=c->lr; // 80222374
  W32(c->r[1]+0x00000034u,c->r[0]); // 80222378
  c->r[11]=c->r[1]+0x00000030u; // 8022237C
  c->lr=0x80222384u; f_800C2E38(c); // 80222380
  c->r[23]=c->r[3]|c->r[3]; // 80222384
  c->r[24]=c->r[4]|c->r[4]; // 80222388
  c->r[25]=c->r[5]|c->r[5]; // 8022238C
  c->lr=0x80222394u; f_8021F810(c); // 80222390
  c->r[3]=0u+0x803A0000u; // 80222394
  c->r[4]=0u+0x80220000u; // 80222398
  c->r[3]=c->r[3]+0x00007B24u; // 8022239C
  c->r[5]=0u+0x80220000u; // 802223A0
  c->r[26]=c->r[23]+0x000000E4u; // 802223A4
  W32(c->r[23]+0x00000000u,c->r[3]); // 802223A8
  c->r[3]=c->r[26]|c->r[26]; // 802223AC
  c->r[4]=c->r[4]+0xFFFFC8D0u; // 802223B0
  c->r[5]=c->r[5]+0xFFFFA600u; // 802223B4
  c->r[6]=0u+0x00000004u; // 802223B8
  c->r[7]=0u+0x00000004u; // 802223BC
  c->lr=0x802223C4u; f_800C2B8C(c); // 802223C0
  c->r[3]=c->r[26]+0x00000010u; // 802223C4
  c->lr=0x802223CCu; f_8021A740(c); // 802223C8
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802223CC
  {uint32_t ea=c->r[23]+0x000000D4u; WF32(ea,c->f[0]);} // 802223D0
  c->r[3]=R32(c->r[25]+0x00000008u); // 802223D4
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802223D8
  {uint32_t ea=c->r[23]+0x000000D8u; WF32(ea,c->f[0]);} // 802223DC
  c->r[29]=c->r[3]+0x0000000Cu; // 802223E0
  {uint32_t ea=c->r[24]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802223E4
  {uint32_t ea=c->r[23]+0x000000DCu; WF32(ea,c->f[0]);} // 802223E8
  {uint32_t ea=c->r[24]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 802223EC
  {uint32_t ea=c->r[23]+0x000000E0u; WF32(ea,c->f[0]);} // 802223F0
  c->r[0]=R32(c->r[24]+0x00000060u); // 802223F4
  c->r[27]=c->r[24]+c->r[0]; // 802223F8
  c->r[0]=R32(c->r[24]+c->r[0]); // 802223FC
  W32(c->r[23]+0x000000E4u,c->r[0]); // 80222400
  c->r[0]=R32(c->r[27]+0x00000004u); // 80222404
  W32(c->r[23]+0x000000E8u,c->r[0]); // 80222408
  c->r[0]=R32(c->r[27]+0x00000008u); // 8022240C
  W32(c->r[23]+0x000000ECu,c->r[0]); // 80222410
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80222414
  W32(c->r[23]+0x000000F0u,c->r[0]); // 80222418
  c->r[0]=R8(c->r[27]+0x00000012u); // 8022241C
  cmps(c,0,(int32_t)c->r[0],0); // 80222420
  if (crb(c,2)) { goto L_80222460; } // 80222424
  cmpu(c,0,c->r[0],0x00000008u); // 80222428
  c->r[26]=0u+0x00000008u; // 8022242C
  if (crb(c,1)) { goto L_80222438; } // 80222430
  c->r[26]=c->r[0]|c->r[0]; // 80222434
L_80222438:;
  c->r[3]=c->r[23]+0x000000F4u; // 80222438
  c->r[4]=rotl(c->r[26],0)&0x000000FFu; // 8022243C
  c->lr=0x80222444u; f_8021A7B0(c); // 80222440
  c->r[0]=R8(c->r[23]+0x000000F4u); // 80222444
  cmps(c,0,(int32_t)c->r[0],0); // 80222448
  if (crb(c,2)) { goto L_80222460; } // 8022244C
  c->r[3]=c->r[23]+0x000000F4u; // 80222450
  c->r[4]=c->r[27]+0x00000014u; // 80222454
  c->r[5]=rotl(c->r[26],0)&0x000000FFu; // 80222458
  c->lr=0x80222460u; f_8021A940(c); // 8022245C
L_80222460:;
  c->r[3]=0u+0x80490000u; // 80222460
  c->r[4]=0u+0x0000005Cu; // 80222464
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80222468
  c->lr=0x80222470u; f_8023B6D0(c); // 8022246C
  cmps(c,0,(int32_t)c->r[3],0); // 80222470
  if (crb(c,2)) { goto L_8022249C; } // 80222474
  c->r[0]=R16(c->r[27]+0x00000010u); // 80222478
  c->r[4]=R32(c->r[25]+0x00000008u); // 8022247C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222480
  c->r[0]=R32(c->r[29]+c->r[0]); // 80222484
  c->r[4]=c->r[4]+c->r[0]; // 80222488
  if (crb(c,2)) { goto L_80222498; } // 8022248C
  c->r[5]=c->r[25]|c->r[25]; // 80222490
  c->lr=0x80222498u; f_8021C8E0(c); // 80222494
L_80222498:;
  W32(c->r[23]+0x00000028u,c->r[3]); // 80222498
L_8022249C:;
  c->r[30]=0u+0x00000000u; // 8022249C
  W8(c->r[23]+0x00000100u,c->r[30]); // 802224A0
  W32(c->r[23]+0x000000FCu,c->r[30]); // 802224A4
  c->r[0]=R8(c->r[24]+0x0000005Cu); // 802224A8
  cmps(c,0,(int32_t)c->r[0],0); // 802224AC
  if (crb(c,2)) { goto L_80222564; } // 802224B0
  c->r[31]=0u+0x80490000u; // 802224B4
  c->r[4]=rotl(c->r[0],3)&0x000007F8u; // 802224B8
  c->r[3]=R32(c->r[31]+0x00001A20u); // 802224BC
  c->lr=0x802224C4u; f_8023B6D0(c); // 802224C0
  cmps(c,0,(int32_t)c->r[3],0); // 802224C4
  W32(c->r[23]+0x000000FCu,c->r[3]); // 802224C8
  if (crb(c,2)) { goto L_80222564; } // 802224CC
  c->r[0]=R8(c->r[24]+0x0000005Cu); // 802224D0
  c->r[26]=0u+0x00000000u; // 802224D4
  W8(c->r[23]+0x00000100u,c->r[0]); // 802224D8
  c->r[27]=0u+0x00000000u; // 802224DC
  c->r[0]=R32(c->r[24]+0x00000064u); // 802224E0
  c->r[28]=c->r[24]+c->r[0]; // 802224E4
  goto L_80222558; // 802224E8
L_802224EC:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802224EC
  c->r[4]=0u+0x0000005Cu; // 802224F0
  c->r[3]=R32(c->r[23]+0x000000FCu); // 802224F4
  c->r[22]=c->r[24]+c->r[0]; // 802224F8
  c->r[0]=R8(c->r[22]+0x00000002u); // 802224FC
  W8(c->r[3]+c->r[27],c->r[0]); // 80222500
  c->r[0]=R32(c->r[23]+0x000000FCu); // 80222504
  c->r[3]=c->r[0]+c->r[27]; // 80222508
  W32(c->r[3]+0x00000004u,c->r[30]); // 8022250C
  c->r[3]=R32(c->r[31]+0x00001A20u); // 80222510
  c->lr=0x80222518u; f_8023B6D0(c); // 80222514
  cmps(c,0,(int32_t)c->r[3],0); // 80222518
  if (crb(c,2)) { goto L_8022254C; } // 8022251C
  c->r[0]=R16(c->r[22]+0x00000000u); // 80222520
  c->r[4]=R32(c->r[25]+0x00000008u); // 80222524
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222528
  c->r[0]=R32(c->r[29]+c->r[0]); // 8022252C
  c->r[4]=c->r[4]+c->r[0]; // 80222530
  if (crb(c,2)) { goto L_80222540; } // 80222534
  c->r[5]=c->r[25]|c->r[25]; // 80222538
  c->lr=0x80222540u; f_8021C8E0(c); // 8022253C
L_80222540:;
  c->r[0]=R32(c->r[23]+0x000000FCu); // 80222540
  c->r[4]=c->r[0]+c->r[27]; // 80222544
  W32(c->r[4]+0x00000004u,c->r[3]); // 80222548
L_8022254C:;
  c->r[28]=c->r[28]+0x00000004u; // 8022254C
  c->r[27]=c->r[27]+0x00000008u; // 80222550
  c->r[26]=c->r[26]+0x00000001u; // 80222554
L_80222558:;
  c->r[0]=R8(c->r[23]+0x00000100u); // 80222558
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8022255C
  if (crb(c,0)) { IRQCHK(c); goto L_802224EC; } // 80222560
L_80222564:;
  c->r[11]=c->r[1]+0x00000030u; // 80222564
  c->r[3]=c->r[23]|c->r[23]; // 80222568
  c->lr=0x80222570u; f_800C2E84(c); // 8022256C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80222570
  c->lr=c->r[0]; // 80222574
  c->r[1]=c->r[1]+0x00000030u; // 80222578
  return; // 8022257C
}

// __dt__Q36nw4hbm3lyt6WindowFv
void f_80222580(Ctx* __restrict c) {
  trace_call(0x80222580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222580
  c->r[0]=c->lr; // 80222584
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222588
  c->r[11]=c->r[1]+0x00000020u; // 8022258C
  c->lr=0x80222594u; f_800C2E4C(c); // 80222590
  cmps(c,0,(int32_t)c->r[3],0); // 80222594
  c->r[27]=c->r[3]|c->r[3]; // 80222598
  c->r[28]=c->r[4]|c->r[4]; // 8022259C
  if (crb(c,2)) { goto L_802226A8; } // 802225A0
  c->r[0]=R32(c->r[3]+0x000000FCu); // 802225A4
  c->r[4]=0u+0x803A0000u; // 802225A8
  c->r[4]=c->r[4]+0x00007B24u; // 802225AC
  W32(c->r[3]+0x00000000u,c->r[4]); // 802225B0
  cmps(c,0,(int32_t)c->r[0],0); // 802225B4
  if (crb(c,2)) { goto L_80222624; } // 802225B8
  c->r[29]=0u+0x00000000u; // 802225BC
  c->r[30]=0u+0x00000000u; // 802225C0
  c->r[31]=0u+0x80490000u; // 802225C4
  goto L_80222608; // 802225C8
L_802225CC:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 802225CC
  c->r[4]=0u+0xFFFFFFFFu; // 802225D0
  c->r[3]=c->r[0]+c->r[30]; // 802225D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802225D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802225DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802225E0
  c->ctr=c->r[12]; // 802225E4
  if (true) { c->lr=0x802225ECu; dispatch(c,c->ctr); } // 802225E8
  c->r[0]=R32(c->r[27]+0x000000FCu); // 802225EC
  c->r[3]=R32(c->r[31]+0x00001A20u); // 802225F0
  c->r[4]=c->r[0]+c->r[30]; // 802225F4
  c->r[4]=R32(c->r[4]+0x00000004u); // 802225F8
  c->lr=0x80222600u; f_8023B6E0(c); // 802225FC
  c->r[30]=c->r[30]+0x00000008u; // 80222600
  c->r[29]=c->r[29]+0x00000001u; // 80222604
L_80222608:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 80222608
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8022260C
  if (crb(c,0)) { IRQCHK(c); goto L_802225CC; } // 80222610
  c->r[3]=0u+0x80490000u; // 80222614
  c->r[4]=R32(c->r[27]+0x000000FCu); // 80222618
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8022261C
  c->lr=0x80222624u; f_8023B6E0(c); // 80222620
L_80222624:;
  c->r[3]=R32(c->r[27]+0x00000028u); // 80222624
  cmps(c,0,(int32_t)c->r[3],0); // 80222628
  if (crb(c,2)) { goto L_80222668; } // 8022262C
  c->r[0]=R8(c->r[3]+0x00000054u); // 80222630
  cmps(c,0,(int32_t)c->r[0],0); // 80222634
  if (!crb(c,2)) { goto L_80222668; } // 80222638
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022263C
  c->r[4]=0u+0xFFFFFFFFu; // 80222640
  c->r[12]=R32(c->r[12]+0x00000008u); // 80222644
  c->ctr=c->r[12]; // 80222648
  if (true) { c->lr=0x80222650u; dispatch(c,c->ctr); } // 8022264C
  c->r[3]=0u+0x80490000u; // 80222650
  c->r[4]=R32(c->r[27]+0x00000028u); // 80222654
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80222658
  c->lr=0x80222660u; f_8023B6E0(c); // 8022265C
  c->r[0]=0u+0x00000000u; // 80222660
  W32(c->r[27]+0x00000028u,c->r[0]); // 80222664
L_80222668:;
  c->r[3]=c->r[27]+0x000000F4u; // 80222668
  c->lr=0x80222670u; f_8021A760(c); // 8022266C
  c->r[3]=addc(c,c->r[27],0x000000E4u,0); cr0(c,c->r[3]); // 80222670
  if (crb(c,2)) { goto L_8022268C; } // 80222674
  c->r[4]=0u+0x80220000u; // 80222678
  c->r[5]=0u+0x00000004u; // 8022267C
  c->r[4]=c->r[4]+0xFFFFA600u; // 80222680
  c->r[6]=0u+0x00000004u; // 80222684
  c->lr=0x8022268Cu; f_800C2C84(c); // 80222688
L_8022268C:;
  c->r[3]=c->r[27]|c->r[27]; // 8022268C
  c->r[4]=0u+0x00000000u; // 80222690
  c->lr=0x80222698u; f_8021F930(c); // 80222694
  cmps(c,0,(int32_t)c->r[28],0); // 80222698
  if (!crb(c,1)) { goto L_802226A8; } // 8022269C
  c->r[3]=c->r[27]|c->r[27]; // 802226A0
  c->lr=0x802226A8u; f_800C2AC0(c); // 802226A4
L_802226A8:;
  c->r[11]=c->r[1]+0x00000020u; // 802226A8
  c->r[3]=c->r[27]|c->r[27]; // 802226AC
  c->lr=0x802226B4u; f_800C2E98(c); // 802226B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802226B4
  c->lr=c->r[0]; // 802226B8
  c->r[1]=c->r[1]+0x00000020u; // 802226BC
  return; // 802226C0
}

// fn_802226D0
void f_802226D0(Ctx* __restrict c) {
  trace_call(0x802226D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802226D0
  c->r[0]=c->lr; // 802226D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802226D8
  c->r[11]=c->r[1]+0x00000020u; // 802226DC
  c->lr=0x802226E4u; f_800C2E4C(c); // 802226E0
  c->r[6]=R32(c->r[3]+0x00000028u); // 802226E4
  c->r[27]=c->r[3]|c->r[3]; // 802226E8
  c->r[28]=c->r[4]|c->r[4]; // 802226EC
  c->r[29]=c->r[5]|c->r[5]; // 802226F0
  cmps(c,0,(int32_t)c->r[6],0); // 802226F4
  if (crb(c,2)) { goto L_80222714; } // 802226F8
  c->r[3]=c->r[6]+0x00000004u; // 802226FC
  c->lr=0x80222704u; f_8021A6A0(c); // 80222700
  cmps(c,0,(int32_t)c->r[3],0); // 80222704
  if (crb(c,2)) { goto L_80222714; } // 80222708
  c->r[3]=R32(c->r[27]+0x00000028u); // 8022270C
  goto L_802227B4; // 80222710
L_80222714:;
  c->r[31]=0u+0x00000000u; // 80222714
  c->r[30]=0u+0x00000000u; // 80222718
  goto L_8022275C; // 8022271C
L_80222720:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 80222720
  c->r[4]=c->r[28]|c->r[28]; // 80222724
  c->r[3]=c->r[0]+c->r[30]; // 80222728
  c->r[3]=R32(c->r[3]+0x00000004u); // 8022272C
  c->r[3]=c->r[3]+0x00000004u; // 80222730
  c->lr=0x80222738u; f_8021A6A0(c); // 80222734
  cmps(c,0,(int32_t)c->r[3],0); // 80222738
  if (crb(c,2)) { goto L_80222754; } // 8022273C
  c->r[3]=R32(c->r[27]+0x000000FCu); // 80222740
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80222744
  c->r[3]=c->r[3]+c->r[0]; // 80222748
  c->r[3]=R32(c->r[3]+0x00000004u); // 8022274C
  goto L_802227B4; // 80222750
L_80222754:;
  c->r[30]=c->r[30]+0x00000008u; // 80222754
  c->r[31]=c->r[31]+0x00000001u; // 80222758
L_8022275C:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 8022275C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80222760
  if (crb(c,0)) { IRQCHK(c); goto L_80222720; } // 80222764
  cmps(c,0,(int32_t)c->r[29],0); // 80222768
  if (crb(c,2)) { goto L_802227B0; } // 8022276C
  c->r[31]=R32(c->r[27]+0x00000014u); // 80222770
  c->r[30]=c->r[27]+0x00000014u; // 80222774
  goto L_802227A8; // 80222778
L_8022277C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 8022277C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80222780
  c->r[4]=c->r[28]|c->r[28]; // 80222784
  c->r[5]=0u+0x00000001u; // 80222788
  c->r[12]=R32(c->r[12]+0x00000040u); // 8022278C
  c->ctr=c->r[12]; // 80222790
  if (true) { c->lr=0x80222798u; dispatch(c,c->ctr); } // 80222794
  cmps(c,0,(int32_t)c->r[3],0); // 80222798
  if (crb(c,2)) { goto L_802227A4; } // 8022279C
  goto L_802227B4; // 802227A0
L_802227A4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802227A4
L_802227A8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802227A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8022277C; } // 802227AC
L_802227B0:;
  c->r[3]=0u+0x00000000u; // 802227B0
L_802227B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802227B4
  c->lr=0x802227BCu; f_800C2E98(c); // 802227B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802227BC
  c->lr=c->r[0]; // 802227C0
  c->r[1]=c->r[1]+0x00000020u; // 802227C4
  return; // 802227C8
}

// FindAnimationLink__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransform
void f_802227D0(Ctx* __restrict c) {
  trace_call(0x802227D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802227D0
  c->r[0]=c->lr; // 802227D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802227D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802227DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802227E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802227E4
  c->r[29]=c->r[4]|c->r[4]; // 802227E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802227EC
  c->r[28]=c->r[3]|c->r[3]; // 802227F0
  c->lr=0x802227F8u; f_80220610(c); // 802227F4
  cmps(c,0,(int32_t)c->r[3],0); // 802227F8
  if (crb(c,2)) { goto L_80222804; } // 802227FC
  goto L_80222854; // 80222800
L_80222804:;
  c->r[30]=0u+0x00000000u; // 80222804
  c->r[31]=0u+0x00000000u; // 80222808
  goto L_80222844; // 8022280C
L_80222810:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 80222810
  c->r[4]=c->r[29]|c->r[29]; // 80222814
  c->r[3]=c->r[0]+c->r[31]; // 80222818
  c->r[3]=R32(c->r[3]+0x00000004u); // 8022281C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80222820
  c->r[12]=R32(c->r[12]+0x00000020u); // 80222824
  c->ctr=c->r[12]; // 80222828
  if (true) { c->lr=0x80222830u; dispatch(c,c->ctr); } // 8022282C
  cmps(c,0,(int32_t)c->r[3],0); // 80222830
  if (crb(c,2)) { goto L_8022283C; } // 80222834
  goto L_80222854; // 80222838
L_8022283C:;
  c->r[31]=c->r[31]+0x00000008u; // 8022283C
  c->r[30]=c->r[30]+0x00000001u; // 80222840
L_80222844:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 80222844
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80222848
  if (crb(c,0)) { IRQCHK(c); goto L_80222810; } // 8022284C
  c->r[3]=0u+0x00000000u; // 80222850
L_80222854:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80222854
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80222858
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022285C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80222860
  c->r[28]=R32(c->r[1]+0x00000010u); // 80222864
  c->lr=c->r[0]; // 80222868
  c->r[1]=c->r[1]+0x00000020u; // 8022286C
  return; // 80222870
}

// SetAnimationEnable__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransformbb
void f_80222880(Ctx* __restrict c) {
  trace_call(0x80222880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222880
  c->r[0]=c->lr; // 80222884
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222888
  c->r[11]=c->r[1]+0x00000020u; // 8022288C
  c->lr=0x80222894u; f_800C2E48(c); // 80222890
  c->r[26]=c->r[3]|c->r[3]; // 80222894
  c->r[27]=c->r[4]|c->r[4]; // 80222898
  c->r[28]=c->r[5]|c->r[5]; // 8022289C
  c->r[29]=c->r[6]|c->r[6]; // 802228A0
  c->r[30]=0u+0x00000000u; // 802228A4
  c->r[31]=0u+0x00000000u; // 802228A8
  goto L_802228DC; // 802228AC
L_802228B0:;
  c->r[0]=R32(c->r[26]+0x000000FCu); // 802228B0
  c->r[4]=c->r[27]|c->r[27]; // 802228B4
  c->r[5]=c->r[28]|c->r[28]; // 802228B8
  c->r[3]=c->r[0]+c->r[31]; // 802228BC
  c->r[3]=R32(c->r[3]+0x00000004u); // 802228C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802228C4
  c->r[12]=R32(c->r[12]+0x00000024u); // 802228C8
  c->ctr=c->r[12]; // 802228CC
  if (true) { c->lr=0x802228D4u; dispatch(c,c->ctr); } // 802228D0
  c->r[31]=c->r[31]+0x00000008u; // 802228D4
  c->r[30]=c->r[30]+0x00000001u; // 802228D8
L_802228DC:;
  c->r[0]=R8(c->r[26]+0x00000100u); // 802228DC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802228E0
  if (crb(c,0)) { IRQCHK(c); goto L_802228B0; } // 802228E4
  c->r[3]=c->r[26]|c->r[26]; // 802228E8
  c->r[4]=c->r[27]|c->r[27]; // 802228EC
  c->r[5]=c->r[28]|c->r[28]; // 802228F0
  c->r[6]=c->r[29]|c->r[29]; // 802228F4
  c->lr=0x802228FCu; f_80220690(c); // 802228F8
  c->r[11]=c->r[1]+0x00000020u; // 802228FC
  c->lr=0x80222904u; f_800C2E94(c); // 80222900
  c->r[0]=R32(c->r[1]+0x00000024u); // 80222904
  c->lr=c->r[0]; // 80222908
  c->r[1]=c->r[1]+0x00000020u; // 8022290C
  return; // 80222910
}

// fn_80222920
void f_80222920(Ctx* __restrict c) {
  trace_call(0x80222920u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80222920
  c->r[4]=c->r[4]+c->r[0]; // 80222924
  c->r[0]=R32(c->r[4]+0x000000E4u); // 80222928
  W32(c->r[3]+0x00000000u,c->r[0]); // 8022292C
  return; // 80222930
}

// fn_80222940
void f_80222940(Ctx* __restrict c) {
  trace_call(0x80222940u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80222940
  c->r[0]=R8(c->r[5]+0x00000000u); // 80222944
  c->r[3]=c->r[3]+c->r[4]; // 80222948
  W8(c->r[3]+0x000000E4u,c->r[0]); // 8022294C
  c->r[0]=R8(c->r[5]+0x00000001u); // 80222950
  W8(c->r[3]+0x000000E5u,c->r[0]); // 80222954
  c->r[0]=R8(c->r[5]+0x00000002u); // 80222958
  W8(c->r[3]+0x000000E6u,c->r[0]); // 8022295C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80222960
  W8(c->r[3]+0x000000E7u,c->r[0]); // 80222964
  return; // 80222968
}

// fn_80222970
void f_80222970(Ctx* __restrict c) {
  trace_call(0x80222970u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80222970
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80222974
  c->r[3]=c->r[3]+c->r[5]; // 80222978
  c->r[3]=c->r[3]+c->r[0]; // 8022297C
  c->r[3]=R8(c->r[3]+0x000000E4u); // 80222980
  return; // 80222984
}

// fn_80222990
void f_80222990(Ctx* __restrict c) {
  trace_call(0x80222990u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80222990
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80222994
  c->r[3]=c->r[3]+c->r[6]; // 80222998
  c->r[3]=c->r[3]+c->r[0]; // 8022299C
  W8(c->r[3]+0x000000E4u,c->r[5]); // 802229A0
  return; // 802229A4
}

// fn_802229B0
void f_802229B0(Ctx* __restrict c) {
  trace_call(0x802229B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802229B0
  c->r[0]=c->lr; // 802229B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802229B8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 802229BC
  W32(c->r[1]+0x00000058u,c->r[30]); // 802229C0
  c->r[30]=c->r[3]|c->r[3]; // 802229C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802229C8
  c->r[12]=R32(c->r[12]+0x00000060u); // 802229CC
  c->ctr=c->r[12]; // 802229D0
  if (true) { c->lr=0x802229D8u; dispatch(c,c->ctr); } // 802229D4
  c->r[3]=R8(c->r[30]+0x00000100u); // 802229D8
  c->r[0]=0u+0x00000000u; // 802229DC
  W32(c->r[1]+0x00000030u,c->r[0]); // 802229E0
  cmps(c,0,(int32_t)c->r[3],1); // 802229E4
  c->r[31]=R32(c->r[30]+0x000000FCu); // 802229E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802229EC
  W32(c->r[1]+0x00000038u,c->r[0]); // 802229F0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802229F4
  if (crb(c,2)) { goto L_80222A10; } // 802229F8
  cmps(c,0,(int32_t)c->r[3],4); // 802229FC
  if (crb(c,2)) { goto L_80222A3C; } // 80222A00
  cmps(c,0,(int32_t)c->r[3],8); // 80222A04
  if (crb(c,2)) { goto L_80222A3C; } // 80222A08
  goto L_80222A84; // 80222A0C
L_80222A10:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 80222A10
  c->r[3]=c->r[1]+0x00000008u; // 80222A14
  c->r[5]=0u+0x00000000u; // 80222A18
  c->lr=0x80222A20u; f_8021F700(c); // 80222A1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222A20
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222A24
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80222A28
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80222A2C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80222A30
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80222A34
  goto L_80222A84; // 80222A38
L_80222A3C:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 80222A3C
  c->r[3]=c->r[1]+0x00000010u; // 80222A40
  c->r[5]=0u+0x00000000u; // 80222A44
  c->lr=0x80222A4Cu; f_8021F700(c); // 80222A48
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222A4C
  c->r[3]=c->r[1]+0x00000018u; // 80222A50
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222A54
  c->r[5]=0u+0x00000000u; // 80222A58
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80222A5C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80222A60
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80222A64
  c->lr=0x80222A6Cu; f_8021F700(c); // 80222A68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222A6C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222A70
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80222A74
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80222A78
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80222A7C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80222A80
L_80222A84:;
  c->r[6]=R32(c->r[1]+0x00000030u); // 80222A84
  c->r[3]=c->r[30]|c->r[30]; // 80222A88
  c->r[5]=R32(c->r[1]+0x00000034u); // 80222A8C
  c->r[4]=R32(c->r[1]+0x00000038u); // 80222A90
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80222A94
  W32(c->r[1]+0x00000040u,c->r[6]); // 80222A98
  W32(c->r[1]+0x00000044u,c->r[5]); // 80222A9C
  W32(c->r[1]+0x00000048u,c->r[4]); // 80222AA0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80222AA4
  c->lr=0x80222AACu; f_80220860(c); // 80222AA8
  W32(c->r[1]+0x00000028u,c->r[3]); // 80222AAC
  c->r[5]=c->r[1]+0x00000040u; // 80222AB0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 80222AB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80222AB8
  W32(c->r[1]+0x00000020u,c->r[3]); // 80222ABC
  c->r[3]=c->r[30]|c->r[30]; // 80222AC0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80222AC4
  W32(c->r[1]+0x00000024u,c->r[4]); // 80222AC8
  c->r[4]=c->r[1]+0x00000028u; // 80222ACC
  c->r[6]=R8(c->r[30]+0x000000CEu); // 80222AD0
  c->ctr=c->r[12]; // 80222AD4
  if (true) { c->lr=0x80222ADCu; dispatch(c,c->ctr); } // 80222AD8
  c->r[0]=R8(c->r[30]+0x00000100u); // 80222ADC
  cmps(c,0,(int32_t)c->r[0],1); // 80222AE0
  if (crb(c,2)) { goto L_80222AFC; } // 80222AE4
  cmps(c,0,(int32_t)c->r[0],4); // 80222AE8
  if (crb(c,2)) { goto L_80222B24; } // 80222AEC
  cmps(c,0,(int32_t)c->r[0],8); // 80222AF0
  if (crb(c,2)) { goto L_80222B4C; } // 80222AF4
  goto L_80222B70; // 80222AF8
L_80222AFC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80222AFC
  c->r[3]=c->r[30]|c->r[30]; // 80222B00
  c->r[4]=c->r[1]+0x00000028u; // 80222B04
  c->r[6]=c->r[1]+0x00000040u; // 80222B08
  c->r[12]=R32(c->r[12]+0x00000070u); // 80222B0C
  c->r[5]=R32(c->r[30]+0x000000FCu); // 80222B10
  c->r[7]=R8(c->r[30]+0x000000CEu); // 80222B14
  c->ctr=c->r[12]; // 80222B18
  if (true) { c->lr=0x80222B20u; dispatch(c,c->ctr); } // 80222B1C
  goto L_80222B70; // 80222B20
L_80222B24:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80222B24
  c->r[3]=c->r[30]|c->r[30]; // 80222B28
  c->r[4]=c->r[1]+0x00000028u; // 80222B2C
  c->r[6]=c->r[1]+0x00000040u; // 80222B30
  c->r[12]=R32(c->r[12]+0x00000074u); // 80222B34
  c->r[5]=R32(c->r[30]+0x000000FCu); // 80222B38
  c->r[7]=R8(c->r[30]+0x000000CEu); // 80222B3C
  c->ctr=c->r[12]; // 80222B40
  if (true) { c->lr=0x80222B48u; dispatch(c,c->ctr); } // 80222B44
  goto L_80222B70; // 80222B48
L_80222B4C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80222B4C
  c->r[3]=c->r[30]|c->r[30]; // 80222B50
  c->r[4]=c->r[1]+0x00000028u; // 80222B54
  c->r[6]=c->r[1]+0x00000040u; // 80222B58
  c->r[12]=R32(c->r[12]+0x00000078u); // 80222B5C
  c->r[5]=R32(c->r[30]+0x000000FCu); // 80222B60
  c->r[7]=R8(c->r[30]+0x000000CEu); // 80222B64
  c->ctr=c->r[12]; // 80222B68
  if (true) { c->lr=0x80222B70u; dispatch(c,c->ctr); } // 80222B6C
L_80222B70:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 80222B70
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80222B74
  c->r[30]=R32(c->r[1]+0x00000058u); // 80222B78
  c->lr=c->r[0]; // 80222B7C
  c->r[1]=c->r[1]+0x00000060u; // 80222B80
  return; // 80222B84
}

// AnimateSelf__Q36nw4hbm3lyt6WindowFUl
void f_80222B90(Ctx* __restrict c) {
  trace_call(0x80222B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222B90
  c->r[0]=c->lr; // 80222B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222B98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80222B9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80222BA0
  c->r[30]=c->r[4]|c->r[4]; // 80222BA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80222BA8
  c->r[29]=c->r[3]|c->r[3]; // 80222BAC
  c->lr=0x80222BB4u; f_802203A0(c); // 80222BB0
  c->r[0]=R8(c->r[29]+0x000000CFu); // 80222BB4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80222BB8
  if (!crb(c,2)) { goto L_80222BC8; } // 80222BBC
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80222BC0
  if (!crb(c,2)) { goto L_80222C04; } // 80222BC4
L_80222BC8:;
  c->r[30]=0u+0x00000000u; // 80222BC8
  c->r[31]=0u+0x00000000u; // 80222BCC
  goto L_80222BF8; // 80222BD0
L_80222BD4:;
  c->r[0]=R32(c->r[29]+0x000000FCu); // 80222BD4
  c->r[3]=c->r[0]+c->r[31]; // 80222BD8
  c->r[3]=R32(c->r[3]+0x00000004u); // 80222BDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80222BE0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80222BE4
  c->ctr=c->r[12]; // 80222BE8
  if (true) { c->lr=0x80222BF0u; dispatch(c,c->ctr); } // 80222BEC
  c->r[31]=c->r[31]+0x00000008u; // 80222BF0
  c->r[30]=c->r[30]+0x00000001u; // 80222BF4
L_80222BF8:;
  c->r[0]=R8(c->r[29]+0x00000100u); // 80222BF8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80222BFC
  if (crb(c,0)) { IRQCHK(c); goto L_80222BD4; } // 80222C00
L_80222C04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80222C04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80222C08
  c->r[30]=R32(c->r[1]+0x00000018u); // 80222C0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80222C10
  c->lr=c->r[0]; // 80222C14
  c->r[1]=c->r[1]+0x00000020u; // 80222C18
  return; // 80222C1C
}

// UnbindAnimationSelf__Q36nw4hbm3lyt6WindowFPQ36nw4hbm3lyt13AnimTransform
void f_80222C20(Ctx* __restrict c) {
  trace_call(0x80222C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222C20
  c->r[0]=c->lr; // 80222C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80222C28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80222C2C
  c->r[31]=0u+0x00000000u; // 80222C30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80222C34
  c->r[30]=0u+0x00000000u; // 80222C38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80222C3C
  c->r[29]=c->r[4]|c->r[4]; // 80222C40
  W32(c->r[1]+0x00000010u,c->r[28]); // 80222C44
  c->r[28]=c->r[3]|c->r[3]; // 80222C48
  goto L_80222C78; // 80222C4C
L_80222C50:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 80222C50
  c->r[4]=c->r[29]|c->r[29]; // 80222C54
  c->r[3]=c->r[0]+c->r[31]; // 80222C58
  c->r[3]=R32(c->r[3]+0x00000004u); // 80222C5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80222C60
  c->r[12]=R32(c->r[12]+0x00000014u); // 80222C64
  c->ctr=c->r[12]; // 80222C68
  if (true) { c->lr=0x80222C70u; dispatch(c,c->ctr); } // 80222C6C
  c->r[31]=c->r[31]+0x00000008u; // 80222C70
  c->r[30]=c->r[30]+0x00000001u; // 80222C74
L_80222C78:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 80222C78
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80222C7C
  if (crb(c,0)) { IRQCHK(c); goto L_80222C50; } // 80222C80
  c->r[3]=c->r[28]|c->r[28]; // 80222C84
  c->r[4]=c->r[29]|c->r[29]; // 80222C88
  c->lr=0x80222C90u; f_80220530(c); // 80222C8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80222C90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80222C94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80222C98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80222C9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80222CA0
  c->lr=c->r[0]; // 80222CA4
  c->r[1]=c->r[1]+0x00000020u; // 80222CA8
  return; // 80222CAC
}

// fn_80222CB0
void f_80222CB0(Ctx* __restrict c) {
  trace_call(0x80222CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222CB0
  c->r[0]=c->lr; // 80222CB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80222CB8
  c->r[11]=c->r[1]+0x00000030u; // 80222CBC
  c->lr=0x80222CC4u; f_800C2E4C(c); // 80222CC0
  c->r[30]=c->r[6]|c->r[6]; // 80222CC4
  c->r[27]=c->r[3]|c->r[3]; // 80222CC8
  c->r[28]=c->r[4]|c->r[4]; // 80222CCC
  c->r[29]=c->r[5]|c->r[5]; // 80222CD0
  c->r[4]=c->r[30]|c->r[30]; // 80222CD4
  c->r[3]=c->r[3]+0x000000E4u; // 80222CD8
  c->lr=0x80222CE0u; f_8021A9E0(c); // 80222CDC
  c->r[4]=c->r[3]|c->r[3]; // 80222CE0
  c->r[3]=R32(c->r[27]+0x00000028u); // 80222CE4
  c->r[5]=c->r[30]|c->r[30]; // 80222CE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80222CEC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80222CF0
  c->ctr=c->r[12]; // 80222CF4
  if (true) { c->lr=0x80222CFCu; dispatch(c,c->ctr); } // 80222CF8
  c->r[4]=R8(c->r[27]+0x000000F5u); // 80222CFC
  c->r[31]=c->r[3]|c->r[3]; // 80222D00
  c->lr=0x80222D08u; f_8021AA90(c); // 80222D04
  cmps(c,0,(int32_t)c->r[31],0); // 80222D08
  if (crb(c,2)) { goto L_80222D18; } // 80222D0C
  c->r[7]=c->r[27]+0x000000E4u; // 80222D10
  goto L_80222D1C; // 80222D14
L_80222D18:;
  c->r[7]=0u+0x00000000u; // 80222D18
L_80222D1C:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222D1C
  c->r[8]=c->r[30]|c->r[30]; // 80222D20
  {uint32_t ea=c->r[29]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80222D24
  c->r[3]=c->r[1]+0x00000010u; // 80222D28
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222D2C
  c->r[4]=c->r[1]+0x00000008u; // 80222D30
  {uint32_t ea=c->r[29]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80222D34
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 80222D38
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[10]=c->ps1[10]=RF32(ea);} // 80222D3C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 80222D40
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222D44
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[3]); // 80222D48
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80222D4C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 80222D50
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80222D54
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[2]); // 80222D58
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80222D5C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80222D60
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 80222D64
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 80222D68
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[7]=c->ps1[7]=RF32(ea);} // 80222D6C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 80222D70
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80222D74
  c->r[6]=R32(c->r[27]+0x000000F8u); // 80222D78
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[8]); // 80222D7C
  c->r[5]=R8(c->r[27]+0x000000F5u); // 80222D80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[10]); // 80222D84
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80222D88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 80222D8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 80222D90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80222D94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80222D98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80222D9C
  c->lr=0x80222DA4u; f_8021B0E0(c); // 80222DA0
  c->r[11]=c->r[1]+0x00000030u; // 80222DA4
  c->lr=0x80222DACu; f_800C2E98(c); // 80222DA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80222DAC
  c->lr=c->r[0]; // 80222DB0
  c->r[1]=c->r[1]+0x00000030u; // 80222DB4
  return; // 80222DB8
}

// fn_80222DC0
void f_80222DC0(Ctx* __restrict c) {
  trace_call(0x80222DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80222DC0
  c->r[0]=c->lr; // 80222DC4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80222DC8
  c->r[11]=c->r[1]+0x000000C0u; // 80222DCC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 80222DD0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 80222DD4
  c->lr=0x80222DDCu; f_800C2E38(c); // 80222DD8
  c->r[0]=0u+0x43300000u; // 80222DDC
  c->r[30]=c->r[7]|c->r[7]; // 80222DE0
  c->r[27]=c->r[3]|c->r[3]; // 80222DE4
  c->r[28]=c->r[4]|c->r[4]; // 80222DE8
  W32(c->r[1]+0x00000088u,c->r[0]); // 80222DEC
  c->r[22]=c->r[5]|c->r[5]; // 80222DF0
  c->r[29]=c->r[6]|c->r[6]; // 80222DF4
  c->r[4]=c->r[30]|c->r[30]; // 80222DF8
  W32(c->r[1]+0x00000090u,c->r[0]); // 80222DFC
  c->r[3]=0u+0x00000000u; // 80222E00
  c->lr=0x80222E08u; f_8021A9E0(c); // 80222E04
  c->r[4]=c->r[3]|c->r[3]; // 80222E08
  c->r[3]=R32(c->r[22]+0x00000004u); // 80222E0C
  c->r[5]=c->r[30]|c->r[30]; // 80222E10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80222E14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80222E18
  c->ctr=c->r[12]; // 80222E1C
  if (true) { c->lr=0x80222E24u; dispatch(c,c->ctr); } // 80222E20
  c->r[31]=c->r[3]|c->r[3]; // 80222E24
  c->r[4]=0u+0x00000001u; // 80222E28
  c->lr=0x80222E30u; f_8021AA90(c); // 80222E2C
  c->r[4]=R32(c->r[22]+0x00000004u); // 80222E30
  c->r[3]=c->r[1]+0x00000050u; // 80222E34
  c->r[5]=0u+0x00000000u; // 80222E38
  c->lr=0x80222E40u; f_8021F700(c); // 80222E3C
  c->r[3]=0u+0x803A0000u; // 80222E40
  c->r[24]=0u+0xFFFFFFFFu; // 80222E44
  c->r[3]=c->r[3]+0x00007AE8u; // 80222E48
  c->r[4]=0u+0x80380000u; // 80222E4C
  c->r[7]=R8(c->r[3]+0x00000009u); // 80222E50
  c->r[26]=0u+0x80380000u; // 80222E54
  c->r[0]=R8(c->r[3]+0x00000008u); // 80222E58
  c->r[5]=0u+0x80380000u; // 80222E5C
  c->r[11]=R8(c->r[3]+c->r[7]); // 80222E60
  c->r[8]=c->r[3]+c->r[7]; // 80222E64
  {uint32_t ea=c->r[3]+c->r[0]; c->r[25]=R8(ea); c->r[3]=ea;} // 80222E68
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80222E6C
  W32(c->r[1]+0x00000094u,c->r[11]); // 80222E70
  c->r[22]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80222E74
  c->r[0]=R8(c->r[3]+0x00000002u); // 80222E78
  c->r[9]=c->r[1]+0x00000038u; // 80222E7C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80222E80
  c->r[12]=c->r[1]+0x00000078u; // 80222E84
  c->r[3]=c->r[0]-c->r[25]; // 80222E88
  {uint32_t ea=c->r[5]+0xFFFFF8B0u; c->f[12]=c->ps1[12]=RF32(ea);} // 80222E8C
  c->r[0]=R8(c->r[8]+0x00000004u); // 80222E90
  c->r[3]=c->r[3]^0x80000000u; // 80222E94
  W32(c->r[1]+0x00000094u,c->r[3]); // 80222E98
  c->r[6]=c->r[1]+0x00000068u; // 80222E9C
  c->r[0]=c->r[0]-c->r[11]; // 80222EA0
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[1]=RF64(ea);} // 80222EA4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80222EA8
  c->r[0]=c->r[0]^0x80000000u; // 80222EAC
  {uint32_t ea=c->r[26]+0xFFFFF8B8u; c->f[3]=RF64(ea);} // 80222EB0
  c->r[10]=c->r[1]+0x00000070u; // 80222EB4
  W32(c->r[1]+0x00000094u,c->r[0]); // 80222EB8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80222EBC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 80222EC0
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 80222EC4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80222EC8
  c->r[8]=c->r[1]+0x00000080u; // 80222ECC
  W32(c->r[1]+0x0000008Cu,c->r[25]); // 80222ED0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80222ED4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 80222ED8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80222EDC
  cmps(c,0,(int32_t)c->r[31],0); // 80222EE0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 80222EE4
  c->r[3]=c->r[1]+0x00000048u; // 80222EE8
  W32(c->r[1]+0x0000008Cu,c->r[25]); // 80222EEC
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 80222EF0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 80222EF4
  c->r[4]=c->r[1]+0x00000040u; // 80222EF8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80222EFC
  c->r[5]=0u+0x00000001u; // 80222F00
  W32(c->r[1]+0x00000058u,c->r[24]); // 80222F04
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 80222F08
  {uint32_t ea=c->r[29]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 80222F0C
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 80222F10
  c->r[7]=0u+0x00000000u; // 80222F14
  {uint32_t ea=c->r[29]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80222F18
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 80222F1C
  W32(c->r[1]+0x0000005Cu,c->r[24]); // 80222F20
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80222F24
  W32(c->r[1]+0x00000060u,c->r[24]); // 80222F28
  W32(c->r[1]+0x00000064u,c->r[24]); // 80222F2C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 80222F30
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 80222F34
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 80222F38
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 80222F3C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222F40
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 80222F44
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 80222F48
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 80222F4C
  {uint32_t ea=c->r[9]+c->r[23]; c->f[3]=c->ps1[3]=RF32(ea);} // 80222F50
  {uint32_t ea=c->r[9]+c->r[22]; c->f[0]=c->ps1[0]=RF32(ea);} // 80222F54
  {uint32_t ea=c->r[12]+c->r[23]; WF32(ea,c->f[7]);} // 80222F58
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80222F5C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80222F60
  {uint32_t ea=c->r[6]+c->r[23]; WF32(ea,c->f[7]);} // 80222F64
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 80222F68
  {uint32_t ea=c->r[10]+c->r[22]; WF32(ea,c->f[6]);} // 80222F6C
  {uint32_t ea=c->r[6]+c->r[22]; WF32(ea,c->f[6]);} // 80222F70
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 80222F74
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 80222F78
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 80222F7C
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 80222F80
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80222F84
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[1]);} // 80222F88
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[1]);} // 80222F8C
  {uint32_t ea=c->r[12]+c->r[22]; WF32(ea,c->f[0]);} // 80222F90
  {uint32_t ea=c->r[8]+c->r[22]; WF32(ea,c->f[0]);} // 80222F94
  if (crb(c,2)) { goto L_80222FA0; } // 80222F98
  c->r[7]=c->r[1]+0x00000058u; // 80222F9C
L_80222FA0:;
  c->r[8]=c->r[30]|c->r[30]; // 80222FA0
  c->lr=0x80222FA8u; f_8021B0E0(c); // 80222FA4
  c->r[3]=0u+0x803A0000u; // 80222FA8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 80222FAC
  c->r[3]=c->r[3]+0x00007AE8u; // 80222FB0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 80222FB4
  c->r[8]=R8(c->r[3]+0x00000013u); // 80222FB8
  c->r[11]=c->r[3]+0x0000000Au; // 80222FBC
  c->r[10]=R8(c->r[3]+0x00000012u); // 80222FC0
  c->r[4]=0u+0x80380000u; // 80222FC4
  c->r[5]=c->r[11]+c->r[8]; // 80222FC8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 80222FCC
  c->r[9]=R8(c->r[5]+0x00000002u); // 80222FD0
  c->r[3]=c->r[11]+c->r[10]; // 80222FD4
  W32(c->r[1]+0x00000094u,c->r[9]); // 80222FD8
  c->r[22]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80222FDC
  c->r[26]=R8(c->r[3]+0x00000002u); // 80222FE0
  c->r[12]=0u+0x80380000u; // 80222FE4
  c->r[3]=R8(c->r[11]+c->r[10]); // 80222FE8
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80222FEC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80222FF0
  c->r[7]=c->r[1]+0x00000028u; // 80222FF4
  c->r[3]=c->r[3]-c->r[26]; // 80222FF8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80222FFC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80223000
  c->r[3]=c->r[3]^0x80000000u; // 80223004
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 80223008
  {uint32_t ea=c->r[29]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8022300C
  W32(c->r[1]+0x00000094u,c->r[3]); // 80223010
  c->r[11]=c->r[1]+0x00000080u; // 80223014
  c->r[3]=R8(c->r[5]+0x00000006u); // 80223018
  c->r[10]=c->r[1]+0x00000070u; // 8022301C
  c->f[9]=c->ps1[9]=S(c->f[3]-c->f[7]); // 80223020
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[1]=RF64(ea);} // 80223024
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80223028
  c->r[3]=c->r[3]-c->r[9]; // 8022302C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[6]);} // 80223030
  c->r[3]=c->r[3]^0x80000000u; // 80223034
  W32(c->r[1]+0x00000094u,c->r[3]); // 80223038
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8022303C
  {uint32_t ea=c->r[12]+0xFFFFF8B8u; c->f[6]=RF64(ea);} // 80223040
  c->r[6]=c->r[1]+0x00000068u; // 80223044
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 80223048
  c->r[8]=c->r[1]+0x00000078u; // 8022304C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80223050
  {uint32_t ea=c->r[7]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80223054
  cmps(c,0,(int32_t)c->r[31],0); // 80223058
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8022305C
  c->r[3]=c->r[1]+0x00000048u; // 80223060
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80223064
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80223068
  {uint32_t ea=c->r[7]+c->r[22]; c->f[0]=c->ps1[0]=RF32(ea);} // 8022306C
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 80223070
  c->r[4]=c->r[1]+0x00000040u; // 80223074
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80223078
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8022307C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 80223080
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 80223084
  c->r[5]=0u+0x00000001u; // 80223088
  c->r[7]=0u+0x00000000u; // 8022308C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 80223090
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 80223094
  {uint32_t ea=c->r[27]+0x00000050u; c->f[7]=c->ps1[7]=RF32(ea);} // 80223098
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[5]); // 8022309C
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 802230A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802230A4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 802230A8
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 802230AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[9]);} // 802230B0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 802230B4
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 802230B8
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 802230BC
  {uint32_t ea=c->r[11]+c->r[0]; WF32(ea,c->f[5]);} // 802230C0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 802230C4
  {uint32_t ea=c->r[10]+c->r[0]; WF32(ea,c->f[5]);} // 802230C8
  {uint32_t ea=c->r[6]+c->r[22]; WF32(ea,c->f[4]);} // 802230CC
  {uint32_t ea=c->r[10]+c->r[22]; WF32(ea,c->f[4]);} // 802230D0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802230D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[8]);} // 802230D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802230DC
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[2]);} // 802230E0
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[2]);} // 802230E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802230E8
  {uint32_t ea=c->r[11]+c->r[22]; WF32(ea,c->f[0]);} // 802230EC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 802230F0
  {uint32_t ea=c->r[8]+c->r[22]; WF32(ea,c->f[0]);} // 802230F4
  if (crb(c,2)) { goto L_80223100; } // 802230F8
  c->r[7]=c->r[1]+0x00000058u; // 802230FC
L_80223100:;
  c->r[8]=c->r[30]|c->r[30]; // 80223100
  c->lr=0x80223108u; f_8021B0E0(c); // 80223104
  c->r[3]=0u+0x803A0000u; // 80223108
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 8022310C
  c->r[3]=c->r[3]+0x00007AE8u; // 80223110
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 80223114
  c->r[3]=c->r[3]+0x00000028u; // 80223118
  c->r[7]=0u+0x80380000u; // 8022311C
  c->r[0]=R8(c->r[3]+0x00000009u); // 80223120
  c->r[4]=0u+0x80380000u; // 80223124
  c->r[8]=R8(c->r[3]+0x00000008u); // 80223128
  c->r[12]=c->r[1]+0x00000070u; // 8022312C
  c->r[5]=c->r[3]+c->r[0]; // 80223130
  {uint32_t ea=c->r[7]+0xFFFFF8B8u; c->f[6]=RF64(ea);} // 80223134
  c->r[10]=R8(c->r[5]+0x00000006u); // 80223138
  c->r[3]=c->r[3]+c->r[8]; // 8022313C
  W32(c->r[1]+0x00000094u,c->r[10]); // 80223140
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223144
  c->r[26]=R8(c->r[3]+0x00000006u); // 80223148
  c->r[22]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8022314C
  c->r[0]=R8(c->r[3]+0x00000004u); // 80223150
  c->r[8]=c->r[1]+0x00000018u; // 80223154
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80223158
  c->r[11]=c->r[1]+0x00000080u; // 8022315C
  c->r[3]=c->r[0]-c->r[26]; // 80223160
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223164
  c->r[0]=R8(c->r[5]+0x00000002u); // 80223168
  c->r[3]=c->r[3]^0x80000000u; // 8022316C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223170
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80223174
  W32(c->r[1]+0x00000094u,c->r[3]); // 80223178
  c->r[0]=c->r[0]-c->r[10]; // 8022317C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223180
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80223184
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223188
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8022318C
  c->r[0]=c->r[0]^0x80000000u; // 80223190
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[8]); // 80223194
  c->f[10]=c->ps1[10]=S(c->f[1]+c->f[5]); // 80223198
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 8022319C
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[1]=RF64(ea);} // 802231A0
  c->r[9]=c->r[1]+0x00000078u; // 802231A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802231A8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 802231AC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 802231B0
  c->r[6]=c->r[1]+0x00000068u; // 802231B4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 802231B8
  cmps(c,0,(int32_t)c->r[31],0); // 802231BC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 802231C0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 802231C4
  c->r[3]=c->r[1]+0x00000048u; // 802231C8
  c->r[4]=c->r[1]+0x00000040u; // 802231CC
  c->r[5]=0u+0x00000001u; // 802231D0
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802231D4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 802231D8
  c->r[7]=0u+0x00000000u; // 802231DC
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 802231E0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 802231E4
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 802231E8
  {uint32_t ea=c->r[8]+c->r[22]; c->f[2]=c->ps1[2]=RF32(ea);} // 802231EC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 802231F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802231F4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 802231F8
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 802231FC
  {uint32_t ea=c->r[8]+c->r[23]; c->f[0]=c->ps1[0]=RF32(ea);} // 80223200
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 80223204
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80223208
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 8022320C
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 80223210
  {uint32_t ea=c->r[12]+c->r[22]; WF32(ea,c->f[5]);} // 80223214
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 80223218
  {uint32_t ea=c->r[11]+c->r[22]; WF32(ea,c->f[5]);} // 8022321C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80223220
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[4]);} // 80223224
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 80223228
  {uint32_t ea=c->r[11]+c->r[23]; WF32(ea,c->f[4]);} // 8022322C
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 80223230
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 80223234
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 80223238
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 8022323C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80223240
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 80223244
  {uint32_t ea=c->r[9]+c->r[22]; WF32(ea,c->f[2]);} // 80223248
  {uint32_t ea=c->r[6]+c->r[22]; WF32(ea,c->f[2]);} // 8022324C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223250
  {uint32_t ea=c->r[12]+c->r[23]; WF32(ea,c->f[0]);} // 80223254
  {uint32_t ea=c->r[6]+c->r[23]; WF32(ea,c->f[0]);} // 80223258
  if (crb(c,2)) { goto L_80223264; } // 8022325C
  c->r[7]=c->r[1]+0x00000058u; // 80223260
L_80223264:;
  c->r[8]=c->r[30]|c->r[30]; // 80223264
  c->lr=0x8022326Cu; f_8021B0E0(c); // 80223268
  c->r[3]=0u+0x803A0000u; // 8022326C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 80223270
  c->r[3]=c->r[3]+0x00007AE8u; // 80223274
  c->r[4]=0u+0x80380000u; // 80223278
  c->r[8]=R8(c->r[3]+0x0000001Du); // 8022327C
  c->r[9]=c->r[3]+0x00000014u; // 80223280
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80223284
  c->r[5]=0u+0x80380000u; // 80223288
  c->r[3]=c->r[9]+c->r[8]; // 8022328C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[10]=c->ps1[10]=RF32(ea);} // 80223290
  c->r[10]=R8(c->r[3]+0x00000004u); // 80223294
  c->r[3]=c->r[9]+c->r[0]; // 80223298
  W32(c->r[1]+0x00000094u,c->r[10]); // 8022329C
  c->r[22]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802232A0
  c->r[12]=R8(c->r[3]+0x00000004u); // 802232A4
  c->r[7]=c->r[1]+0x00000008u; // 802232A8
  c->r[0]=R8(c->r[3]+0x00000006u); // 802232AC
  c->r[23]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802232B0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 802232B4
  c->r[6]=c->r[1]+0x00000068u; // 802232B8
  c->r[3]=c->r[0]-c->r[12]; // 802232BC
  c->r[0]=R8(c->r[9]+c->r[8]); // 802232C0
  c->r[3]=c->r[3]^0x80000000u; // 802232C4
  W32(c->r[1]+0x00000094u,c->r[3]); // 802232C8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 802232CC
  c->r[0]=c->r[0]-c->r[10]; // 802232D0
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[1]=RF64(ea);} // 802232D4
  c->r[0]=c->r[0]^0x80000000u; // 802232D8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 802232DC
  c->r[11]=c->r[1]+0x00000078u; // 802232E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 802232E4
  c->r[9]=c->r[1]+0x00000080u; // 802232E8
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[6]=RF64(ea);} // 802232EC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 802232F0
  W32(c->r[1]+0x00000094u,c->r[0]); // 802232F4
  c->r[8]=c->r[1]+0x00000070u; // 802232F8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 802232FC
  cmps(c,0,(int32_t)c->r[31],0); // 80223300
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80223304
  {uint32_t ea=c->r[28]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80223308
  c->r[3]=c->r[1]+0x00000048u; // 8022330C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 80223310
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80223314
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[10]);} // 80223318
  c->r[4]=c->r[1]+0x00000040u; // 8022331C
  c->f[8]=c->ps1[8]=S(c->f[4]+c->f[7]); // 80223320
  c->r[5]=0u+0x00000001u; // 80223324
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 80223328
  {uint32_t ea=c->r[7]+c->r[22]; c->f[2]=c->ps1[2]=RF32(ea);} // 8022332C
  {uint32_t ea=c->r[7]+c->r[23]; c->f[0]=c->ps1[0]=RF32(ea);} // 80223330
  c->r[7]=0u+0x00000000u; // 80223334
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80223338
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 8022333C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80223340
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 80223344
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 80223348
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 8022334C
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 80223350
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80223354
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 80223358
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 8022335C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 80223360
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 80223364
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 80223368
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 8022336C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 80223370
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 80223374
  {uint32_t ea=c->r[6]+c->r[22]; WF32(ea,c->f[5]);} // 80223378
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 8022337C
  {uint32_t ea=c->r[11]+c->r[22]; WF32(ea,c->f[5]);} // 80223380
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[4]);} // 80223384
  {uint32_t ea=c->r[11]+c->r[23]; WF32(ea,c->f[4]);} // 80223388
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 8022338C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 80223390
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80223394
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 80223398
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8022339C
  {uint32_t ea=c->r[9]+c->r[22]; WF32(ea,c->f[2]);} // 802233A0
  {uint32_t ea=c->r[8]+c->r[22]; WF32(ea,c->f[2]);} // 802233A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802233A8
  {uint32_t ea=c->r[6]+c->r[23]; WF32(ea,c->f[0]);} // 802233AC
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[0]);} // 802233B0
  if (crb(c,2)) { goto L_802233BC; } // 802233B4
  c->r[7]=c->r[1]+0x00000058u; // 802233B8
L_802233BC:;
  c->r[8]=c->r[30]|c->r[30]; // 802233BC
  c->lr=0x802233C4u; f_8021B0E0(c); // 802233C0
  c->r[11]=c->r[1]+0x000000C0u; // 802233C4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 802233C8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 802233CC
  c->lr=0x802233D4u; f_800C2E84(c); // 802233D0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 802233D4
  c->lr=c->r[0]; // 802233D8
  c->r[1]=c->r[1]+0x000000D0u; // 802233DC
  return; // 802233E0
}

// fn_802233F0
void f_802233F0(Ctx* __restrict c) {
  trace_call(0x802233F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 802233F0
  c->r[0]=c->lr; // 802233F4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802233F8
  c->r[11]=c->r[1]+0x000000E0u; // 802233FC
  c->lr=0x80223404u; f_800C2E3C(c); // 80223400
  c->r[8]=0u+0x80380000u; // 80223404
  c->r[0]=0u+0xFFFFFFFFu; // 80223408
  {uint32_t ea=c->r[8]+0xFFFFF8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022340C
  c->r[8]=0u+0x43300000u; // 80223410
  c->r[28]=c->r[7]|c->r[7]; // 80223414
  W32(c->r[1]+0x000000A0u,c->r[8]); // 80223418
  c->r[24]=c->r[3]|c->r[3]; // 8022341C
  c->r[25]=c->r[4]|c->r[4]; // 80223420
  W32(c->r[1]+0x000000A8u,c->r[8]); // 80223424
  c->r[26]=c->r[5]|c->r[5]; // 80223428
  c->r[27]=c->r[6]|c->r[6]; // 8022342C
  c->r[4]=c->r[28]|c->r[28]; // 80223430
  W32(c->r[1]+0x00000070u,c->r[0]); // 80223434
  c->r[3]=0u+0x00000000u; // 80223438
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022343C
  W32(c->r[1]+0x00000078u,c->r[0]); // 80223440
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80223444
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80223448
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8022344C
  c->lr=0x80223454u; f_8021A9E0(c); // 80223450
  c->r[30]=c->r[3]|c->r[3]; // 80223454
  c->r[3]=R32(c->r[26]+0x00000004u); // 80223458
  c->r[4]=c->r[30]|c->r[30]; // 8022345C
  c->r[5]=c->r[28]|c->r[28]; // 80223460
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223464
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223468
  c->ctr=c->r[12]; // 8022346C
  if (true) { c->lr=0x80223474u; dispatch(c,c->ctr); } // 80223470
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223474
  c->r[29]=c->r[3]|c->r[3]; // 80223478
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022347C
  c->r[3]=c->r[1]+0x00000058u; // 80223480
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80223484
  c->r[5]=0u+0x00000000u; // 80223488
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022348C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80223490
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223494
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80223498
  c->r[31]=R8(c->r[26]+0x00000000u); // 8022349C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802234A0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802234A4
  c->r[4]=R32(c->r[26]+0x00000004u); // 802234A8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 802234AC
  c->lr=0x802234B4u; f_8021F700(c); // 802234B0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 802234B4
  c->r[4]=0u+0x803A0000u; // 802234B8
  c->r[3]=0u+0x80380000u; // 802234BC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802234C0
  c->r[4]=c->r[4]+0x00007AE8u; // 802234C4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 802234C8
  c->r[7]=c->r[4]+c->r[0]; // 802234CC
  c->r[4]=0u+0x80380000u; // 802234D0
  c->r[0]=R8(c->r[7]+0x00000009u); // 802234D4
  c->r[6]=c->r[1]+0x00000038u; // 802234D8
  c->r[5]=R8(c->r[7]+0x00000008u); // 802234DC
  c->r[9]=c->r[1]+0x00000090u; // 802234E0
  c->r[8]=R8(c->r[7]+c->r[0]); // 802234E4
  c->r[23]=c->r[7]+c->r[0]; // 802234E8
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 802234EC
  c->r[3]=c->r[7]+c->r[5]; // 802234F0
  c->r[10]=R8(c->r[7]+c->r[5]); // 802234F4
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802234F8
  W32(c->r[1]+0x000000ACu,c->r[8]); // 802234FC
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80223500
  c->r[0]=R8(c->r[3]+0x00000002u); // 80223504
  c->r[31]=c->r[1]+0x00000080u; // 80223508
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 8022350C
  c->r[7]=c->r[1]+0x00000088u; // 80223510
  c->r[3]=c->r[0]-c->r[10]; // 80223514
  c->r[0]=R8(c->r[23]+0x00000004u); // 80223518
  c->r[3]=c->r[3]^0x80000000u; // 8022351C
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80223520
  {uint32_t ea=c->r[4]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 80223524
  c->r[0]=c->r[0]-c->r[8]; // 80223528
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 8022352C
  c->r[0]=c->r[0]^0x80000000u; // 80223530
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 80223534
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80223538
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 8022353C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223540
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80223544
  c->r[5]=c->r[1]+0x00000098u; // 80223548
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022354C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80223550
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223554
  c->r[3]=c->r[29]|c->r[29]; // 80223558
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=RF64(ea);} // 8022355C
  c->r[4]=0u+0x00000001u; // 80223560
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80223564
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223568
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 8022356C
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80223570
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223574
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 80223578
  W32(c->r[1]+0x000000A4u,c->r[10]); // 8022357C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 80223580
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80223584
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 80223588
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022358C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223590
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223594
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223598
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 8022359C
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 802235A0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 802235A4
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 802235A8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 802235AC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 802235B0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 802235B4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 802235B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802235BC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 802235C0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 802235C4
  c->lr=0x802235CCu; f_8021AA90(c); // 802235C8
  cmps(c,0,(int32_t)c->r[29],0); // 802235CC
  c->r[6]=c->r[31]|c->r[31]; // 802235D0
  c->r[3]=c->r[1]+0x00000068u; // 802235D4
  c->r[4]=c->r[1]+0x00000060u; // 802235D8
  c->r[5]=0u+0x00000001u; // 802235DC
  c->r[7]=0u+0x00000000u; // 802235E0
  if (crb(c,2)) { goto L_802235EC; } // 802235E4
  c->r[7]=c->r[1]+0x00000070u; // 802235E8
L_802235EC:;
  c->r[8]=c->r[28]|c->r[28]; // 802235EC
  c->lr=0x802235F4u; f_8021B0E0(c); // 802235F0
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 802235F4
  c->r[4]=c->r[30]|c->r[30]; // 802235F8
  c->r[5]=c->r[28]|c->r[28]; // 802235FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223600
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223604
  c->ctr=c->r[12]; // 80223608
  if (true) { c->lr=0x80223610u; dispatch(c,c->ctr); } // 8022360C
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223610
  c->r[29]=c->r[3]|c->r[3]; // 80223614
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80223618
  c->r[3]=c->r[1]+0x00000050u; // 8022361C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223620
  c->r[5]=0u+0x00000000u; // 80223624
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 80223628
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022362C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 80223630
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80223634
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80223638
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8022363C
  c->r[31]=R8(c->r[26]+0x00000008u); // 80223640
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 80223644
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 80223648
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022364C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80223650
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80223654
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80223658
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8022365C
  c->lr=0x80223664u; f_8021F700(c); // 80223660
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80223664
  c->r[4]=0u+0x803A0000u; // 80223668
  c->r[3]=0u+0x80380000u; // 8022366C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223670
  c->r[4]=c->r[4]+0x00007AE8u; // 80223674
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223678
  c->r[12]=c->r[4]+c->r[0]; // 8022367C
  c->r[10]=0u+0x80380000u; // 80223680
  c->r[4]=R8(c->r[12]+0x00000009u); // 80223684
  c->r[6]=c->r[1]+0x00000028u; // 80223688
  c->r[8]=R8(c->r[12]+0x00000008u); // 8022368C
  c->r[9]=c->r[1]+0x00000098u; // 80223690
  c->r[5]=c->r[12]+c->r[4]; // 80223694
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223698
  c->r[7]=R8(c->r[5]+0x00000002u); // 8022369C
  c->r[3]=c->r[12]+c->r[8]; // 802236A0
  c->r[11]=R8(c->r[3]+0x00000002u); // 802236A4
  c->r[23]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802236A8
  W32(c->r[1]+0x000000ACu,c->r[7]); // 802236AC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802236B0
  c->r[3]=R8(c->r[12]+c->r[8]); // 802236B4
  c->r[8]=c->r[1]+0x00000088u; // 802236B8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 802236BC
  c->r[31]=c->r[1]+0x00000080u; // 802236C0
  c->r[4]=c->r[3]-c->r[11]; // 802236C4
  c->r[3]=R8(c->r[5]+0x00000006u); // 802236C8
  c->r[4]=c->r[4]^0x80000000u; // 802236CC
  W32(c->r[1]+0x000000ACu,c->r[4]); // 802236D0
  c->r[3]=c->r[3]-c->r[7]; // 802236D4
  {uint32_t ea=c->r[10]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 802236D8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 802236DC
  c->r[3]=c->r[3]^0x80000000u; // 802236E0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 802236E4
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 802236E8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802236EC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 802236F0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 802236F4
  c->r[5]=c->r[1]+0x00000090u; // 802236F8
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802236FC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80223700
  {uint32_t ea=c->r[6]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223704
  c->r[3]=c->r[29]|c->r[29]; // 80223708
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=RF64(ea);} // 8022370C
  c->r[4]=0u+0x00000001u; // 80223710
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80223714
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223718
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 8022371C
  W32(c->r[1]+0x000000A4u,c->r[11]); // 80223720
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223724
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 80223728
  W32(c->r[1]+0x000000A4u,c->r[11]); // 8022372C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 80223730
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80223734
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 80223738
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022373C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223740
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223744
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223748
  {uint32_t ea=c->r[9]+c->r[0]; WF32(ea,c->f[7]);} // 8022374C
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[7]);} // 80223750
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[6]);} // 80223754
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 80223758
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8022375C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80223760
  {uint32_t ea=c->r[31]+c->r[0]; WF32(ea,c->f[2]);} // 80223764
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[2]);} // 80223768
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8022376C
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 80223770
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80223774
  c->lr=0x8022377Cu; f_8021AA90(c); // 80223778
  cmps(c,0,(int32_t)c->r[29],0); // 8022377C
  c->r[6]=c->r[31]|c->r[31]; // 80223780
  c->r[3]=c->r[1]+0x00000068u; // 80223784
  c->r[4]=c->r[1]+0x00000060u; // 80223788
  c->r[5]=0u+0x00000001u; // 8022378C
  c->r[7]=0u+0x00000000u; // 80223790
  if (crb(c,2)) { goto L_8022379C; } // 80223794
  c->r[7]=c->r[1]+0x00000070u; // 80223798
L_8022379C:;
  c->r[8]=c->r[28]|c->r[28]; // 8022379C
  c->lr=0x802237A4u; f_8021B0E0(c); // 802237A0
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 802237A4
  c->r[4]=c->r[30]|c->r[30]; // 802237A8
  c->r[5]=c->r[28]|c->r[28]; // 802237AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802237B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802237B4
  c->ctr=c->r[12]; // 802237B8
  if (true) { c->lr=0x802237C0u; dispatch(c,c->ctr); } // 802237BC
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802237C0
  c->r[29]=c->r[3]|c->r[3]; // 802237C4
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802237C8
  c->r[3]=c->r[1]+0x00000048u; // 802237CC
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802237D0
  c->r[5]=0u+0x00000000u; // 802237D4
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802237D8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802237DC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802237E0
  c->r[31]=R8(c->r[26]+0x00000018u); // 802237E4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 802237E8
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 802237EC
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 802237F0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 802237F4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 802237F8
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802237FC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80223800
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80223804
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 80223808
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8022380C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 80223810
  c->lr=0x80223818u; f_8021F700(c); // 80223814
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80223818
  c->r[4]=0u+0x803A0000u; // 8022381C
  c->r[3]=0u+0x80380000u; // 80223820
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80223824
  c->r[4]=c->r[4]+0x00007AE8u; // 80223828
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022382C
  c->r[7]=c->r[4]+c->r[0]; // 80223830
  c->r[10]=0u+0x80380000u; // 80223834
  c->r[0]=R8(c->r[7]+0x00000009u); // 80223838
  c->r[5]=c->r[1]+0x00000018u; // 8022383C
  c->r[6]=R8(c->r[7]+0x00000008u); // 80223840
  c->r[9]=c->r[1]+0x00000088u; // 80223844
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223848
  c->r[4]=c->r[7]+c->r[0]; // 8022384C
  c->r[3]=c->r[7]+c->r[6]; // 80223850
  c->r[7]=R8(c->r[4]+0x00000006u); // 80223854
  W32(c->r[1]+0x000000ACu,c->r[7]); // 80223858
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022385C
  c->r[11]=R8(c->r[3]+0x00000006u); // 80223860
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80223864
  c->r[0]=R8(c->r[3]+0x00000004u); // 80223868
  c->r[8]=c->r[1]+0x00000098u; // 8022386C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 80223870
  c->r[6]=c->r[1]+0x00000090u; // 80223874
  c->r[3]=c->r[0]-c->r[11]; // 80223878
  c->r[0]=R8(c->r[4]+0x00000002u); // 8022387C
  c->r[3]=c->r[3]^0x80000000u; // 80223880
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80223884
  c->r[0]=c->r[0]-c->r[7]; // 80223888
  {uint32_t ea=c->r[10]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 8022388C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80223890
  c->r[0]=c->r[0]^0x80000000u; // 80223894
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 80223898
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 8022389C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802238A0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 802238A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802238A8
  c->r[31]=c->r[1]+0x00000080u; // 802238AC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802238B0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 802238B4
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 802238B8
  c->r[3]=c->r[29]|c->r[29]; // 802238BC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=RF64(ea);} // 802238C0
  c->r[4]=0u+0x00000001u; // 802238C4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 802238C8
  {uint32_t ea=c->r[5]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 802238CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 802238D0
  W32(c->r[1]+0x000000A4u,c->r[11]); // 802238D4
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 802238D8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 802238DC
  W32(c->r[1]+0x000000A4u,c->r[11]); // 802238E0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 802238E4
  W32(c->r[1]+0x000000A4u,c->r[7]); // 802238E8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 802238EC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802238F0
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 802238F4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 802238F8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802238FC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 80223900
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 80223904
  {uint32_t ea=c->r[6]+c->r[23]; WF32(ea,c->f[6]);} // 80223908
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 8022390C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80223910
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80223914
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[2]);} // 80223918
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[2]);} // 8022391C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223920
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 80223924
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[0]);} // 80223928
  c->lr=0x80223930u; f_8021AA90(c); // 8022392C
  cmps(c,0,(int32_t)c->r[29],0); // 80223930
  c->r[6]=c->r[31]|c->r[31]; // 80223934
  c->r[3]=c->r[1]+0x00000068u; // 80223938
  c->r[4]=c->r[1]+0x00000060u; // 8022393C
  c->r[5]=0u+0x00000001u; // 80223940
  c->r[7]=0u+0x00000000u; // 80223944
  if (crb(c,2)) { goto L_80223950; } // 80223948
  c->r[7]=c->r[1]+0x00000070u; // 8022394C
L_80223950:;
  c->r[8]=c->r[28]|c->r[28]; // 80223950
  c->lr=0x80223958u; f_8021B0E0(c); // 80223954
  c->r[3]=R32(c->r[26]+0x00000014u); // 80223958
  c->r[4]=c->r[30]|c->r[30]; // 8022395C
  c->r[5]=c->r[28]|c->r[28]; // 80223960
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223964
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223968
  c->ctr=c->r[12]; // 8022396C
  if (true) { c->lr=0x80223974u; dispatch(c,c->ctr); } // 80223970
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223974
  c->r[29]=c->r[3]|c->r[3]; // 80223978
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022397C
  c->r[3]=c->r[1]+0x00000040u; // 80223980
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223984
  c->r[5]=0u+0x00000000u; // 80223988
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 8022398C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223990
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 80223994
  c->r[25]=R8(c->r[26]+0x00000010u); // 80223998
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 8022399C
  c->r[4]=R32(c->r[26]+0x00000014u); // 802239A0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 802239A4
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802239A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 802239AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802239B0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802239B4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802239B8
  c->lr=0x802239C0u; f_8021F700(c); // 802239BC
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 802239C0
  c->r[3]=0u+0x803A0000u; // 802239C4
  c->r[5]=0u+0x80380000u; // 802239C8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802239CC
  c->r[3]=c->r[3]+0x00007AE8u; // 802239D0
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 802239D4
  c->r[10]=c->r[3]+c->r[0]; // 802239D8
  c->r[4]=0u+0x80380000u; // 802239DC
  c->r[7]=R8(c->r[10]+0x00000009u); // 802239E0
  c->r[6]=c->r[1]+0x00000008u; // 802239E4
  c->r[9]=R8(c->r[10]+0x00000008u); // 802239E8
  c->r[24]=c->r[1]+0x00000080u; // 802239EC
  c->r[3]=c->r[10]+c->r[7]; // 802239F0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802239F4
  c->r[8]=R8(c->r[3]+0x00000004u); // 802239F8
  c->r[3]=c->r[10]+c->r[9]; // 802239FC
  c->r[0]=R8(c->r[10]+c->r[7]); // 80223A00
  c->r[11]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80223A04
  c->r[10]=R8(c->r[3]+0x00000004u); // 80223A08
  c->r[12]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80223A0C
  W32(c->r[1]+0x000000ACu,c->r[8]); // 80223A10
  c->r[0]=c->r[0]-c->r[8]; // 80223A14
  c->r[3]=R8(c->r[3]+0x00000006u); // 80223A18
  c->r[0]=c->r[0]^0x80000000u; // 80223A1C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80223A20
  c->r[9]=c->r[1]+0x00000090u; // 80223A24
  c->r[3]=c->r[3]-c->r[10]; // 80223A28
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223A2C
  c->r[3]=c->r[3]^0x80000000u; // 80223A30
  W32(c->r[1]+0x000000ACu,c->r[3]); // 80223A34
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80223A38
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223A3C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80223A40
  c->r[7]=c->r[1]+0x00000098u; // 80223A44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80223A48
  c->r[5]=c->r[1]+0x00000088u; // 80223A4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80223A50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80223A54
  c->r[3]=c->r[29]|c->r[29]; // 80223A58
  c->r[4]=0u+0x00000001u; // 80223A5C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 80223A60
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223A64
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 80223A68
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80223A6C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223A70
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80223A74
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223A78
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80223A7C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223A80
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 80223A84
  W32(c->r[1]+0x000000A4u,c->r[10]); // 80223A88
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 80223A8C
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80223A90
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 80223A94
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80223A98
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223A9C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223AA0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223AA4
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[7]);} // 80223AA8
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80223AAC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80223AB0
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 80223AB4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80223AB8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80223ABC
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 80223AC0
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 80223AC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223AC8
  {uint32_t ea=c->r[24]+c->r[12]; WF32(ea,c->f[0]);} // 80223ACC
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80223AD0
  c->lr=0x80223AD8u; f_8021AA90(c); // 80223AD4
  cmps(c,0,(int32_t)c->r[29],0); // 80223AD8
  c->r[6]=c->r[24]|c->r[24]; // 80223ADC
  c->r[3]=c->r[1]+0x00000068u; // 80223AE0
  c->r[4]=c->r[1]+0x00000060u; // 80223AE4
  c->r[5]=0u+0x00000001u; // 80223AE8
  c->r[7]=0u+0x00000000u; // 80223AEC
  if (crb(c,2)) { goto L_80223AF8; } // 80223AF0
  c->r[7]=c->r[1]+0x00000070u; // 80223AF4
L_80223AF8:;
  c->r[8]=c->r[28]|c->r[28]; // 80223AF8
  c->lr=0x80223B00u; f_8021B0E0(c); // 80223AFC
  c->r[11]=c->r[1]+0x000000E0u; // 80223B00
  c->lr=0x80223B08u; f_800C2E88(c); // 80223B04
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80223B08
  c->lr=c->r[0]; // 80223B0C
  c->r[1]=c->r[1]+0x000000E0u; // 80223B10
  return; // 80223B14
}

// fn_80223B20
void f_80223B20(Ctx* __restrict c) {
  trace_call(0x80223B20u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80223B20
  c->r[0]=c->lr; // 80223B24
  W32(c->r[1]+0x00000174u,c->r[0]); // 80223B28
  c->r[11]=c->r[1]+0x00000170u; // 80223B2C
  c->lr=0x80223B34u; f_800C2E3C(c); // 80223B30
  c->r[8]=0u+0x80380000u; // 80223B34
  c->r[0]=0u+0xFFFFFFFFu; // 80223B38
  {uint32_t ea=c->r[8]+0xFFFFF8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223B3C
  c->r[8]=0u+0x43300000u; // 80223B40
  c->r[28]=c->r[7]|c->r[7]; // 80223B44
  W32(c->r[1]+0x00000138u,c->r[8]); // 80223B48
  c->r[24]=c->r[3]|c->r[3]; // 80223B4C
  c->r[25]=c->r[4]|c->r[4]; // 80223B50
  W32(c->r[1]+0x00000140u,c->r[8]); // 80223B54
  c->r[26]=c->r[5]|c->r[5]; // 80223B58
  c->r[27]=c->r[6]|c->r[6]; // 80223B5C
  c->r[4]=c->r[28]|c->r[28]; // 80223B60
  W32(c->r[1]+0x00000108u,c->r[0]); // 80223B64
  c->r[3]=0u+0x00000000u; // 80223B68
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 80223B6C
  W32(c->r[1]+0x00000110u,c->r[0]); // 80223B70
  W32(c->r[1]+0x00000114u,c->r[0]); // 80223B74
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80223B78
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80223B7C
  c->lr=0x80223B84u; f_8021A9E0(c); // 80223B80
  c->r[30]=c->r[3]|c->r[3]; // 80223B84
  c->r[3]=R32(c->r[26]+0x00000004u); // 80223B88
  c->r[4]=c->r[30]|c->r[30]; // 80223B8C
  c->r[5]=c->r[28]|c->r[28]; // 80223B90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223B94
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223B98
  c->ctr=c->r[12]; // 80223B9C
  if (true) { c->lr=0x80223BA4u; dispatch(c,c->ctr); } // 80223BA0
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223BA4
  c->r[29]=c->r[3]|c->r[3]; // 80223BA8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223BAC
  c->r[3]=c->r[1]+0x000000F0u; // 80223BB0
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80223BB4
  c->r[5]=0u+0x00000000u; // 80223BB8
  c->r[31]=R8(c->r[26]+0x00000000u); // 80223BBC
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 80223BC0
  c->r[4]=R32(c->r[26]+0x00000004u); // 80223BC4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80223BC8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80223BCC
  c->lr=0x80223BD4u; f_8021F700(c); // 80223BD0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80223BD4
  c->r[4]=0u+0x803A0000u; // 80223BD8
  c->r[3]=0u+0x80380000u; // 80223BDC
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223BE0
  c->r[4]=c->r[4]+0x00007AE8u; // 80223BE4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223BE8
  c->r[7]=c->r[4]+c->r[0]; // 80223BEC
  c->r[4]=0u+0x80380000u; // 80223BF0
  c->r[0]=R8(c->r[7]+0x00000009u); // 80223BF4
  c->r[6]=c->r[1]+0x00000040u; // 80223BF8
  c->r[5]=R8(c->r[7]+0x00000008u); // 80223BFC
  c->r[9]=c->r[1]+0x00000128u; // 80223C00
  c->r[8]=R8(c->r[7]+c->r[0]); // 80223C04
  c->r[23]=c->r[7]+c->r[0]; // 80223C08
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223C0C
  c->r[3]=c->r[7]+c->r[5]; // 80223C10
  c->r[10]=R8(c->r[7]+c->r[5]); // 80223C14
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223C18
  W32(c->r[1]+0x00000144u,c->r[8]); // 80223C1C
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80223C20
  c->r[0]=R8(c->r[3]+0x00000002u); // 80223C24
  c->r[31]=c->r[1]+0x00000118u; // 80223C28
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 80223C2C
  c->r[7]=c->r[1]+0x00000120u; // 80223C30
  c->r[3]=c->r[0]-c->r[10]; // 80223C34
  c->r[0]=R8(c->r[23]+0x00000004u); // 80223C38
  c->r[3]=c->r[3]^0x80000000u; // 80223C3C
  W32(c->r[1]+0x00000144u,c->r[3]); // 80223C40
  {uint32_t ea=c->r[4]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 80223C44
  c->r[0]=c->r[0]-c->r[8]; // 80223C48
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80223C4C
  c->r[0]=c->r[0]^0x80000000u; // 80223C50
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80223C54
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80223C58
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80223C5C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223C60
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80223C64
  c->r[5]=c->r[1]+0x00000130u; // 80223C68
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223C6C
  W32(c->r[1]+0x00000144u,c->r[0]); // 80223C70
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223C74
  c->r[3]=c->r[29]|c->r[29]; // 80223C78
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 80223C7C
  c->r[4]=0u+0x00000001u; // 80223C80
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80223C84
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223C88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80223C8C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80223C90
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223C94
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80223C98
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 80223C9C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80223CA0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80223CA4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80223CA8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80223CAC
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223CB0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223CB4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223CB8
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 80223CBC
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 80223CC0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 80223CC4
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 80223CC8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80223CCC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80223CD0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 80223CD4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 80223CD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223CDC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 80223CE0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 80223CE4
  c->lr=0x80223CECu; f_8021AA90(c); // 80223CE8
  cmps(c,0,(int32_t)c->r[29],0); // 80223CEC
  c->r[3]=c->r[25]|c->r[25]; // 80223CF0
  c->r[6]=c->r[31]|c->r[31]; // 80223CF4
  c->r[4]=c->r[1]+0x00000100u; // 80223CF8
  c->r[5]=0u+0x00000001u; // 80223CFC
  c->r[7]=0u+0x00000000u; // 80223D00
  if (crb(c,2)) { goto L_80223D0C; } // 80223D04
  c->r[7]=c->r[1]+0x00000108u; // 80223D08
L_80223D0C:;
  c->r[8]=c->r[28]|c->r[28]; // 80223D0C
  c->lr=0x80223D14u; f_8021B0E0(c); // 80223D10
  c->r[3]=R32(c->r[26]+0x00000034u); // 80223D14
  c->r[4]=c->r[30]|c->r[30]; // 80223D18
  c->r[5]=c->r[28]|c->r[28]; // 80223D1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223D20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223D24
  c->ctr=c->r[12]; // 80223D28
  if (true) { c->lr=0x80223D30u; dispatch(c,c->ctr); } // 80223D2C
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80223D30
  c->r[29]=c->r[3]|c->r[3]; // 80223D34
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223D38
  c->r[3]=c->r[1]+0x000000E0u; // 80223D3C
  {uint32_t ea=c->r[27]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223D40
  c->r[5]=0u+0x00000000u; // 80223D44
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80223D48
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223D4C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 80223D50
  c->r[31]=R8(c->r[26]+0x00000030u); // 80223D54
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80223D58
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 80223D5C
  c->r[4]=R32(c->r[26]+0x00000034u); // 80223D60
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80223D64
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80223D68
  c->lr=0x80223D70u; f_8021F700(c); // 80223D6C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80223D70
  c->r[4]=0u+0x803A0000u; // 80223D74
  c->r[3]=0u+0x80380000u; // 80223D78
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223D7C
  c->r[4]=c->r[4]+0x00007AE8u; // 80223D80
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223D84
  c->r[7]=c->r[4]+c->r[0]; // 80223D88
  c->r[4]=0u+0x80380000u; // 80223D8C
  c->r[0]=R8(c->r[7]+0x00000009u); // 80223D90
  c->r[6]=c->r[1]+0x00000038u; // 80223D94
  c->r[5]=R8(c->r[7]+0x00000008u); // 80223D98
  c->r[10]=c->r[1]+0x00000128u; // 80223D9C
  c->r[8]=R8(c->r[7]+c->r[0]); // 80223DA0
  c->r[31]=c->r[7]+c->r[0]; // 80223DA4
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223DA8
  c->r[3]=c->r[7]+c->r[5]; // 80223DAC
  c->r[11]=R8(c->r[7]+c->r[5]); // 80223DB0
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80223DB4
  W32(c->r[1]+0x00000144u,c->r[8]); // 80223DB8
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80223DBC
  c->r[0]=R8(c->r[3]+0x00000002u); // 80223DC0
  c->r[9]=c->r[1]+0x00000118u; // 80223DC4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 80223DC8
  c->r[7]=c->r[1]+0x00000120u; // 80223DCC
  c->r[3]=c->r[0]-c->r[11]; // 80223DD0
  c->r[0]=R8(c->r[31]+0x00000004u); // 80223DD4
  c->r[3]=c->r[3]^0x80000000u; // 80223DD8
  W32(c->r[1]+0x00000144u,c->r[3]); // 80223DDC
  {uint32_t ea=c->r[4]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 80223DE0
  c->r[0]=c->r[0]-c->r[8]; // 80223DE4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80223DE8
  c->r[0]=c->r[0]^0x80000000u; // 80223DEC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 80223DF0
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80223DF4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80223DF8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223DFC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80223E00
  c->r[5]=c->r[1]+0x00000130u; // 80223E04
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223E08
  W32(c->r[1]+0x00000144u,c->r[0]); // 80223E0C
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223E10
  c->r[3]=c->r[29]|c->r[29]; // 80223E14
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 80223E18
  c->r[4]=0u+0x00000001u; // 80223E1C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80223E20
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223E24
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80223E28
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 80223E2C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223E30
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80223E34
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 80223E38
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80223E3C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80223E40
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80223E44
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80223E48
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223E4C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223E50
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223E54
  {uint32_t ea=c->r[10]+c->r[12]; WF32(ea,c->f[7]);} // 80223E58
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 80223E5C
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 80223E60
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 80223E64
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80223E68
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80223E6C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[2]);} // 80223E70
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 80223E74
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223E78
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 80223E7C
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80223E80
  c->lr=0x80223E88u; f_8021AA90(c); // 80223E84
  cmps(c,0,(int32_t)c->r[29],0); // 80223E88
  c->r[7]=0u+0x00000000u; // 80223E8C
  if (crb(c,2)) { goto L_80223E98; } // 80223E90
  c->r[7]=c->r[1]+0x00000108u; // 80223E94
L_80223E98:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223E98
  c->r[8]=c->r[28]|c->r[28]; // 80223E9C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223EA0
  c->r[3]=c->r[1]+0x000000D8u; // 80223EA4
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80223EA8
  c->r[4]=c->r[1]+0x00000100u; // 80223EAC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80223EB0
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 80223EB4
  c->r[6]=c->r[1]+0x00000118u; // 80223EB8
  c->r[5]=0u+0x00000001u; // 80223EBC
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80223EC0
  c->lr=0x80223EC8u; f_8021B0E0(c); // 80223EC4
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80223EC8
  c->r[4]=c->r[30]|c->r[30]; // 80223ECC
  c->r[5]=c->r[28]|c->r[28]; // 80223ED0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80223ED4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80223ED8
  c->ctr=c->r[12]; // 80223EDC
  if (true) { c->lr=0x80223EE4u; dispatch(c,c->ctr); } // 80223EE0
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80223EE4
  c->r[29]=c->r[3]|c->r[3]; // 80223EE8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223EEC
  c->r[3]=c->r[1]+0x000000C8u; // 80223EF0
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80223EF4
  c->r[5]=0u+0x00000000u; // 80223EF8
  c->r[31]=R8(c->r[26]+0x00000008u); // 80223EFC
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80223F00
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 80223F04
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80223F08
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80223F0C
  c->lr=0x80223F14u; f_8021F700(c); // 80223F10
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80223F14
  c->r[4]=0u+0x803A0000u; // 80223F18
  c->r[3]=0u+0x80380000u; // 80223F1C
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80223F20
  c->r[4]=c->r[4]+0x00007AE8u; // 80223F24
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223F28
  c->r[9]=c->r[4]+c->r[0]; // 80223F2C
  c->r[11]=0u+0x80380000u; // 80223F30
  c->r[4]=R8(c->r[9]+0x00000009u); // 80223F34
  c->r[6]=c->r[1]+0x00000030u; // 80223F38
  c->r[7]=R8(c->r[9]+0x00000008u); // 80223F3C
  c->r[10]=c->r[1]+0x00000130u; // 80223F40
  c->r[5]=c->r[9]+c->r[4]; // 80223F44
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80223F48
  c->r[8]=R8(c->r[5]+0x00000002u); // 80223F4C
  c->r[3]=c->r[9]+c->r[7]; // 80223F50
  c->r[12]=R8(c->r[3]+0x00000002u); // 80223F54
  c->r[23]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80223F58
  c->r[3]=R8(c->r[9]+c->r[7]); // 80223F5C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80223F60
  W32(c->r[1]+0x00000144u,c->r[8]); // 80223F64
  c->r[9]=c->r[1]+0x00000120u; // 80223F68
  c->r[4]=c->r[3]-c->r[12]; // 80223F6C
  c->r[3]=R8(c->r[5]+0x00000006u); // 80223F70
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 80223F74
  c->r[4]=c->r[4]^0x80000000u; // 80223F78
  c->r[3]=c->r[3]-c->r[8]; // 80223F7C
  {uint32_t ea=c->r[11]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 80223F80
  W32(c->r[1]+0x00000144u,c->r[4]); // 80223F84
  c->r[3]=c->r[3]^0x80000000u; // 80223F88
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80223F8C
  c->r[7]=c->r[1]+0x00000118u; // 80223F90
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80223F94
  c->r[5]=c->r[1]+0x00000128u; // 80223F98
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 80223F9C
  c->r[4]=0u+0x00000001u; // 80223FA0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80223FA4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80223FA8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80223FAC
  W32(c->r[1]+0x00000144u,c->r[3]); // 80223FB0
  c->r[3]=c->r[29]|c->r[29]; // 80223FB4
  {uint32_t ea=c->r[6]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223FB8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 80223FBC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80223FC0
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80223FC4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80223FC8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80223FCC
  W32(c->r[1]+0x0000013Cu,c->r[12]); // 80223FD0
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80223FD4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80223FD8
  W32(c->r[1]+0x0000013Cu,c->r[12]); // 80223FDC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80223FE0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80223FE4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80223FE8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80223FEC
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80223FF0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80223FF4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80223FF8
  {uint32_t ea=c->r[10]+c->r[0]; WF32(ea,c->f[7]);} // 80223FFC
  {uint32_t ea=c->r[9]+c->r[0]; WF32(ea,c->f[7]);} // 80224000
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 80224004
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 80224008
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8022400C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80224010
  {uint32_t ea=c->r[7]+c->r[0]; WF32(ea,c->f[2]);} // 80224014
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[2]);} // 80224018
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8022401C
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 80224020
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80224024
  c->lr=0x8022402Cu; f_8021AA90(c); // 80224028
  cmps(c,0,(int32_t)c->r[29],0); // 8022402C
  c->r[7]=0u+0x00000000u; // 80224030
  if (crb(c,2)) { goto L_8022403C; } // 80224034
  c->r[7]=c->r[1]+0x00000108u; // 80224038
L_8022403C:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022403C
  c->r[8]=c->r[28]|c->r[28]; // 80224040
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80224044
  c->r[3]=c->r[1]+0x000000C0u; // 80224048
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022404C
  c->r[4]=c->r[1]+0x00000100u; // 80224050
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80224054
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224058
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 8022405C
  c->r[6]=c->r[1]+0x00000118u; // 80224060
  c->r[5]=0u+0x00000001u; // 80224064
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80224068
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8022406C
  c->lr=0x80224074u; f_8021B0E0(c); // 80224070
  c->r[3]=R32(c->r[26]+0x0000002Cu); // 80224074
  c->r[4]=c->r[30]|c->r[30]; // 80224078
  c->r[5]=c->r[28]|c->r[28]; // 8022407C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80224080
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80224084
  c->ctr=c->r[12]; // 80224088
  if (true) { c->lr=0x80224090u; dispatch(c,c->ctr); } // 8022408C
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224090
  c->r[29]=c->r[3]|c->r[3]; // 80224094
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224098
  c->r[3]=c->r[1]+0x000000B0u; // 8022409C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802240A0
  c->r[5]=0u+0x00000000u; // 802240A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 802240A8
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802240AC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 802240B0
  c->r[31]=R8(c->r[26]+0x00000028u); // 802240B4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802240B8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 802240BC
  c->r[4]=R32(c->r[26]+0x0000002Cu); // 802240C0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 802240C4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 802240C8
  c->lr=0x802240D0u; f_8021F700(c); // 802240CC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 802240D0
  c->r[4]=0u+0x803A0000u; // 802240D4
  c->r[3]=0u+0x80380000u; // 802240D8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802240DC
  c->r[4]=c->r[4]+0x00007AE8u; // 802240E0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802240E4
  c->r[9]=c->r[4]+c->r[0]; // 802240E8
  c->r[11]=0u+0x80380000u; // 802240EC
  c->r[4]=R8(c->r[9]+0x00000009u); // 802240F0
  c->r[6]=c->r[1]+0x00000028u; // 802240F4
  c->r[7]=R8(c->r[9]+0x00000008u); // 802240F8
  c->r[10]=c->r[1]+0x00000130u; // 802240FC
  c->r[5]=c->r[9]+c->r[4]; // 80224100
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80224104
  c->r[8]=R8(c->r[5]+0x00000002u); // 80224108
  c->r[3]=c->r[9]+c->r[7]; // 8022410C
  c->r[12]=R8(c->r[3]+0x00000002u); // 80224110
  c->r[23]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80224114
  c->r[3]=R8(c->r[9]+c->r[7]); // 80224118
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8022411C
  W32(c->r[1]+0x00000144u,c->r[8]); // 80224120
  c->r[9]=c->r[1]+0x00000120u; // 80224124
  c->r[4]=c->r[3]-c->r[12]; // 80224128
  c->r[3]=R8(c->r[5]+0x00000006u); // 8022412C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 80224130
  c->r[4]=c->r[4]^0x80000000u; // 80224134
  c->r[3]=c->r[3]-c->r[8]; // 80224138
  {uint32_t ea=c->r[11]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 8022413C
  W32(c->r[1]+0x00000144u,c->r[4]); // 80224140
  c->r[3]=c->r[3]^0x80000000u; // 80224144
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80224148
  c->r[7]=c->r[1]+0x00000118u; // 8022414C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224150
  c->r[5]=c->r[1]+0x00000128u; // 80224154
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 80224158
  c->r[4]=0u+0x00000001u; // 8022415C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80224160
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 80224164
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224168
  W32(c->r[1]+0x00000144u,c->r[3]); // 8022416C
  c->r[3]=c->r[29]|c->r[29]; // 80224170
  {uint32_t ea=c->r[6]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224174
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 80224178
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8022417C
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224180
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80224184
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224188
  W32(c->r[1]+0x0000013Cu,c->r[12]); // 8022418C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80224190
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80224194
  W32(c->r[1]+0x0000013Cu,c->r[12]); // 80224198
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8022419C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 802241A0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 802241A4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802241A8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 802241AC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 802241B0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802241B4
  {uint32_t ea=c->r[10]+c->r[0]; WF32(ea,c->f[7]);} // 802241B8
  {uint32_t ea=c->r[9]+c->r[0]; WF32(ea,c->f[7]);} // 802241BC
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 802241C0
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 802241C4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 802241C8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 802241CC
  {uint32_t ea=c->r[7]+c->r[0]; WF32(ea,c->f[2]);} // 802241D0
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[2]);} // 802241D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802241D8
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 802241DC
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 802241E0
  c->lr=0x802241E8u; f_8021AA90(c); // 802241E4
  cmps(c,0,(int32_t)c->r[29],0); // 802241E8
  c->r[7]=0u+0x00000000u; // 802241EC
  if (crb(c,2)) { goto L_802241F8; } // 802241F0
  c->r[7]=c->r[1]+0x00000108u; // 802241F4
L_802241F8:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802241F8
  c->r[8]=c->r[28]|c->r[28]; // 802241FC
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80224200
  c->r[3]=c->r[1]+0x000000A8u; // 80224204
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224208
  c->r[4]=c->r[1]+0x00000100u; // 8022420C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80224210
  {uint32_t ea=c->r[27]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80224214
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224218
  c->r[6]=c->r[1]+0x00000118u; // 8022421C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80224220
  c->r[5]=0u+0x00000001u; // 80224224
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80224228
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 8022422C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 80224230
  c->lr=0x80224238u; f_8021B0E0(c); // 80224234
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 80224238
  c->r[4]=c->r[30]|c->r[30]; // 8022423C
  c->r[5]=c->r[28]|c->r[28]; // 80224240
  c->r[12]=R32(c->r[3]+0x00000000u); // 80224244
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80224248
  c->ctr=c->r[12]; // 8022424C
  if (true) { c->lr=0x80224254u; dispatch(c,c->ctr); } // 80224250
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80224254
  c->r[29]=c->r[3]|c->r[3]; // 80224258
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022425C
  c->r[3]=c->r[1]+0x00000098u; // 80224260
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 80224264
  c->r[5]=0u+0x00000000u; // 80224268
  c->r[31]=R8(c->r[26]+0x00000018u); // 8022426C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80224270
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 80224274
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80224278
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8022427C
  c->lr=0x80224284u; f_8021F700(c); // 80224280
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80224284
  c->r[4]=0u+0x803A0000u; // 80224288
  c->r[3]=0u+0x80380000u; // 8022428C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80224290
  c->r[4]=c->r[4]+0x00007AE8u; // 80224294
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224298
  c->r[8]=c->r[4]+c->r[0]; // 8022429C
  c->r[5]=0u+0x80380000u; // 802242A0
  c->r[0]=R8(c->r[8]+0x00000009u); // 802242A4
  c->r[6]=c->r[1]+0x00000020u; // 802242A8
  c->r[7]=R8(c->r[8]+0x00000008u); // 802242AC
  c->r[10]=c->r[1]+0x00000120u; // 802242B0
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 802242B4
  c->r[4]=c->r[8]+c->r[0]; // 802242B8
  c->r[3]=c->r[8]+c->r[7]; // 802242BC
  c->r[8]=R8(c->r[4]+0x00000006u); // 802242C0
  W32(c->r[1]+0x00000144u,c->r[8]); // 802242C4
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802242C8
  c->r[11]=R8(c->r[3]+0x00000006u); // 802242CC
  c->r[12]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802242D0
  c->r[0]=R8(c->r[3]+0x00000004u); // 802242D4
  c->r[9]=c->r[1]+0x00000130u; // 802242D8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 802242DC
  c->r[7]=c->r[1]+0x00000128u; // 802242E0
  c->r[3]=c->r[0]-c->r[11]; // 802242E4
  c->r[0]=R8(c->r[4]+0x00000002u); // 802242E8
  c->r[3]=c->r[3]^0x80000000u; // 802242EC
  W32(c->r[1]+0x00000144u,c->r[3]); // 802242F0
  c->r[0]=c->r[0]-c->r[8]; // 802242F4
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 802242F8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802242FC
  c->r[0]=c->r[0]^0x80000000u; // 80224300
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 80224304
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 80224308
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 8022430C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224310
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80224314
  c->r[5]=c->r[1]+0x00000118u; // 80224318
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022431C
  W32(c->r[1]+0x00000144u,c->r[0]); // 80224320
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224324
  c->r[3]=c->r[29]|c->r[29]; // 80224328
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 8022432C
  c->r[4]=0u+0x00000001u; // 80224330
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80224334
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224338
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 8022433C
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 80224340
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80224344
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80224348
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 8022434C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 80224350
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80224354
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80224358
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022435C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 80224360
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80224364
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80224368
  {uint32_t ea=c->r[10]+c->r[12]; WF32(ea,c->f[7]);} // 8022436C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 80224370
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 80224374
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 80224378
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 8022437C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80224380
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[2]);} // 80224384
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 80224388
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8022438C
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 80224390
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80224394
  c->lr=0x8022439Cu; f_8021AA90(c); // 80224398
  cmps(c,0,(int32_t)c->r[29],0); // 8022439C
  c->r[7]=0u+0x00000000u; // 802243A0
  if (crb(c,2)) { goto L_802243AC; } // 802243A4
  c->r[7]=c->r[1]+0x00000108u; // 802243A8
L_802243AC:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802243AC
  c->r[8]=c->r[28]|c->r[28]; // 802243B0
  {uint32_t ea=c->r[24]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802243B4
  c->r[3]=c->r[1]+0x00000090u; // 802243B8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802243BC
  c->r[4]=c->r[1]+0x00000100u; // 802243C0
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802243C4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 802243C8
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802243CC
  c->r[6]=c->r[1]+0x00000118u; // 802243D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802243D4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802243D8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802243DC
  c->r[5]=0u+0x00000001u; // 802243E0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802243E4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 802243E8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 802243EC
  c->lr=0x802243F4u; f_8021B0E0(c); // 802243F0
  c->r[3]=R32(c->r[26]+0x0000003Cu); // 802243F4
  c->r[4]=c->r[30]|c->r[30]; // 802243F8
  c->r[5]=c->r[28]|c->r[28]; // 802243FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80224400
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80224404
  c->ctr=c->r[12]; // 80224408
  if (true) { c->lr=0x80224410u; dispatch(c,c->ctr); } // 8022440C
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80224410
  c->r[29]=c->r[3]|c->r[3]; // 80224414
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224418
  c->r[3]=c->r[1]+0x00000080u; // 8022441C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80224420
  c->r[5]=0u+0x00000000u; // 80224424
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80224428
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022442C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 80224430
  c->r[31]=R8(c->r[26]+0x00000038u); // 80224434
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80224438
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 8022443C
  c->r[4]=R32(c->r[26]+0x0000003Cu); // 80224440
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80224444
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80224448
  c->lr=0x80224450u; f_8021F700(c); // 8022444C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80224450
  c->r[4]=0u+0x803A0000u; // 80224454
  c->r[3]=0u+0x80380000u; // 80224458
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022445C
  c->r[4]=c->r[4]+0x00007AE8u; // 80224460
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224464
  c->r[8]=c->r[4]+c->r[0]; // 80224468
  c->r[5]=0u+0x80380000u; // 8022446C
  c->r[0]=R8(c->r[8]+0x00000009u); // 80224470
  c->r[6]=c->r[1]+0x00000018u; // 80224474
  c->r[7]=R8(c->r[8]+0x00000008u); // 80224478
  c->r[10]=c->r[1]+0x00000120u; // 8022447C
  {uint32_t ea=c->r[3]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80224480
  c->r[4]=c->r[8]+c->r[0]; // 80224484
  c->r[3]=c->r[8]+c->r[7]; // 80224488
  c->r[8]=R8(c->r[4]+0x00000006u); // 8022448C
  W32(c->r[1]+0x00000144u,c->r[8]); // 80224490
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80224494
  c->r[11]=R8(c->r[3]+0x00000006u); // 80224498
  c->r[12]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8022449C
  c->r[0]=R8(c->r[3]+0x00000004u); // 802244A0
  c->r[9]=c->r[1]+0x00000130u; // 802244A4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=RF64(ea);} // 802244A8
  c->r[7]=c->r[1]+0x00000128u; // 802244AC
  c->r[3]=c->r[0]-c->r[11]; // 802244B0
  c->r[0]=R8(c->r[4]+0x00000002u); // 802244B4
  c->r[3]=c->r[3]^0x80000000u; // 802244B8
  W32(c->r[1]+0x00000144u,c->r[3]); // 802244BC
  c->r[0]=c->r[0]-c->r[8]; // 802244C0
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 802244C4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802244C8
  c->r[0]=c->r[0]^0x80000000u; // 802244CC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 802244D0
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 802244D4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802244D8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 802244DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802244E0
  c->r[5]=c->r[1]+0x00000118u; // 802244E4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 802244E8
  W32(c->r[1]+0x00000144u,c->r[0]); // 802244EC
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 802244F0
  c->r[3]=c->r[29]|c->r[29]; // 802244F4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 802244F8
  c->r[4]=0u+0x00000001u; // 802244FC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80224500
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224504
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80224508
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 8022450C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80224510
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80224514
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 80224518
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8022451C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80224520
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80224524
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80224528
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8022452C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 80224530
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80224534
  {uint32_t ea=c->r[10]+c->r[12]; WF32(ea,c->f[7]);} // 80224538
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 8022453C
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 80224540
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 80224544
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80224548
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 8022454C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[2]);} // 80224550
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 80224554
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80224558
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 8022455C
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80224560
  c->lr=0x80224568u; f_8021AA90(c); // 80224564
  cmps(c,0,(int32_t)c->r[29],0); // 80224568
  c->r[7]=0u+0x00000000u; // 8022456C
  if (crb(c,2)) { goto L_80224578; } // 80224570
  c->r[7]=c->r[1]+0x00000108u; // 80224574
L_80224578:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224578
  c->r[8]=c->r[28]|c->r[28]; // 8022457C
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224580
  c->r[3]=c->r[1]+0x00000078u; // 80224584
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80224588
  c->r[4]=c->r[1]+0x00000100u; // 8022458C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 80224590
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224594
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224598
  c->r[6]=c->r[1]+0x00000118u; // 8022459C
  c->r[5]=0u+0x00000001u; // 802245A0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802245A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802245A8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 802245AC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 802245B0
  c->lr=0x802245B8u; f_8021B0E0(c); // 802245B4
  c->r[3]=R32(c->r[26]+0x00000014u); // 802245B8
  c->r[4]=c->r[30]|c->r[30]; // 802245BC
  c->r[5]=c->r[28]|c->r[28]; // 802245C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802245C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802245C8
  c->ctr=c->r[12]; // 802245CC
  if (true) { c->lr=0x802245D4u; dispatch(c,c->ctr); } // 802245D0
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802245D4
  c->r[29]=c->r[3]|c->r[3]; // 802245D8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802245DC
  c->r[3]=c->r[1]+0x00000068u; // 802245E0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802245E4
  c->r[5]=0u+0x00000000u; // 802245E8
  c->r[31]=R8(c->r[26]+0x00000010u); // 802245EC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 802245F0
  c->r[4]=R32(c->r[26]+0x00000014u); // 802245F4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 802245F8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 802245FC
  c->lr=0x80224604u; f_8021F700(c); // 80224600
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 80224604
  c->r[3]=0u+0x803A0000u; // 80224608
  c->r[5]=0u+0x80380000u; // 8022460C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80224610
  c->r[3]=c->r[3]+0x00007AE8u; // 80224614
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 80224618
  c->r[11]=c->r[3]+c->r[0]; // 8022461C
  c->r[4]=0u+0x80380000u; // 80224620
  c->r[7]=R8(c->r[11]+0x00000009u); // 80224624
  c->r[6]=c->r[1]+0x00000010u; // 80224628
  c->r[9]=R8(c->r[11]+0x00000008u); // 8022462C
  c->r[10]=c->r[1]+0x00000118u; // 80224630
  c->r[3]=c->r[11]+c->r[7]; // 80224634
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80224638
  c->r[8]=R8(c->r[3]+0x00000004u); // 8022463C
  c->r[3]=c->r[11]+c->r[9]; // 80224640
  c->r[0]=R8(c->r[11]+c->r[7]); // 80224644
  c->r[12]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80224648
  c->r[11]=R8(c->r[3]+0x00000004u); // 8022464C
  c->r[23]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80224650
  W32(c->r[1]+0x00000144u,c->r[8]); // 80224654
  c->r[0]=c->r[0]-c->r[8]; // 80224658
  c->r[3]=R8(c->r[3]+0x00000006u); // 8022465C
  c->r[0]=c->r[0]^0x80000000u; // 80224660
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224664
  c->r[9]=c->r[1]+0x00000128u; // 80224668
  c->r[3]=c->r[3]-c->r[11]; // 8022466C
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 80224670
  c->r[3]=c->r[3]^0x80000000u; // 80224674
  W32(c->r[1]+0x00000144u,c->r[3]); // 80224678
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 8022467C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80224680
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224684
  c->r[7]=c->r[1]+0x00000130u; // 80224688
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8022468C
  c->r[5]=c->r[1]+0x00000120u; // 80224690
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80224694
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80224698
  c->r[3]=c->r[29]|c->r[29]; // 8022469C
  c->r[4]=0u+0x00000001u; // 802246A0
  W32(c->r[1]+0x00000144u,c->r[0]); // 802246A4
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 802246A8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 802246AC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 802246B0
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 802246B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 802246B8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 802246BC
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 802246C0
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 802246C4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 802246C8
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 802246CC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 802246D0
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 802246D4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 802246D8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802246DC
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 802246E0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 802246E4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802246E8
  {uint32_t ea=c->r[10]+c->r[12]; WF32(ea,c->f[7]);} // 802246EC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 802246F0
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 802246F4
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 802246F8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 802246FC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 80224700
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[2]);} // 80224704
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 80224708
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8022470C
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 80224710
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 80224714
  c->lr=0x8022471Cu; f_8021AA90(c); // 80224718
  cmps(c,0,(int32_t)c->r[29],0); // 8022471C
  c->r[7]=0u+0x00000000u; // 80224720
  if (crb(c,2)) { goto L_8022472C; } // 80224724
  c->r[7]=c->r[1]+0x00000108u; // 80224728
L_8022472C:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022472C
  c->r[8]=c->r[28]|c->r[28]; // 80224730
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224734
  c->r[3]=c->r[1]+0x00000060u; // 80224738
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022473C
  c->r[4]=c->r[1]+0x00000100u; // 80224740
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80224744
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80224748
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8022474C
  c->r[6]=c->r[1]+0x00000118u; // 80224750
  c->r[5]=0u+0x00000001u; // 80224754
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80224758
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8022475C
  c->lr=0x80224764u; f_8021B0E0(c); // 80224760
  c->r[3]=R32(c->r[26]+0x00000024u); // 80224764
  c->r[4]=c->r[30]|c->r[30]; // 80224768
  c->r[5]=c->r[28]|c->r[28]; // 8022476C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80224770
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80224774
  c->ctr=c->r[12]; // 80224778
  if (true) { c->lr=0x80224780u; dispatch(c,c->ctr); } // 8022477C
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224780
  c->r[29]=c->r[3]|c->r[3]; // 80224784
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224788
  c->r[3]=c->r[1]+0x00000050u; // 8022478C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80224790
  c->r[5]=0u+0x00000000u; // 80224794
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80224798
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022479C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 802247A0
  c->r[24]=R8(c->r[26]+0x00000020u); // 802247A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802247A8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 802247AC
  c->r[4]=R32(c->r[26]+0x00000024u); // 802247B0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802247B4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 802247B8
  c->lr=0x802247C0u; f_8021F700(c); // 802247BC
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)10); // 802247C0
  c->r[3]=0u+0x803A0000u; // 802247C4
  c->r[5]=0u+0x80380000u; // 802247C8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 802247CC
  c->r[3]=c->r[3]+0x00007AE8u; // 802247D0
  {uint32_t ea=c->r[5]+0xFFFFF8B8u; c->f[8]=RF64(ea);} // 802247D4
  c->r[11]=c->r[3]+c->r[0]; // 802247D8
  c->r[4]=0u+0x80380000u; // 802247DC
  c->r[7]=R8(c->r[11]+0x00000009u); // 802247E0
  c->r[6]=c->r[1]+0x00000008u; // 802247E4
  c->r[9]=R8(c->r[11]+0x00000008u); // 802247E8
  c->r[10]=c->r[1]+0x00000118u; // 802247EC
  c->r[3]=c->r[11]+c->r[7]; // 802247F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802247F4
  c->r[8]=R8(c->r[3]+0x00000004u); // 802247F8
  c->r[3]=c->r[11]+c->r[9]; // 802247FC
  c->r[0]=R8(c->r[11]+c->r[7]); // 80224800
  c->r[12]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80224804
  c->r[11]=R8(c->r[3]+0x00000004u); // 80224808
  c->r[23]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8022480C
  W32(c->r[1]+0x00000144u,c->r[8]); // 80224810
  c->r[0]=c->r[0]-c->r[8]; // 80224814
  c->r[3]=R8(c->r[3]+0x00000006u); // 80224818
  c->r[0]=c->r[0]^0x80000000u; // 8022481C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224820
  c->r[9]=c->r[1]+0x00000128u; // 80224824
  c->r[3]=c->r[3]-c->r[11]; // 80224828
  {uint32_t ea=c->r[4]+0xFFFFF8C0u; c->f[5]=RF64(ea);} // 8022482C
  c->r[3]=c->r[3]^0x80000000u; // 80224830
  W32(c->r[1]+0x00000144u,c->r[3]); // 80224834
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 80224838
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022483C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224840
  c->r[7]=c->r[1]+0x00000130u; // 80224844
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80224848
  c->r[5]=c->r[1]+0x00000120u; // 8022484C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80224850
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80224854
  c->r[3]=c->r[29]|c->r[29]; // 80224858
  c->r[4]=0u+0x00000001u; // 8022485C
  W32(c->r[1]+0x00000144u,c->r[0]); // 80224860
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224864
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 80224868
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 8022486C
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 80224870
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 80224874
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224878
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 8022487C
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 80224880
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 80224884
  W32(c->r[1]+0x0000013Cu,c->r[11]); // 80224888
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 8022488C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 80224890
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 80224894
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80224898
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 8022489C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 802248A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 802248A4
  {uint32_t ea=c->r[10]+c->r[12]; WF32(ea,c->f[7]);} // 802248A8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 802248AC
  {uint32_t ea=c->r[7]+c->r[23]; WF32(ea,c->f[6]);} // 802248B0
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[6]);} // 802248B4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 802248B8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 802248BC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[2]);} // 802248C0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 802248C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802248C8
  {uint32_t ea=c->r[10]+c->r[23]; WF32(ea,c->f[0]);} // 802248CC
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 802248D0
  c->lr=0x802248D8u; f_8021AA90(c); // 802248D4
  cmps(c,0,(int32_t)c->r[29],0); // 802248D8
  c->r[7]=0u+0x00000000u; // 802248DC
  if (crb(c,2)) { goto L_802248E8; } // 802248E0
  c->r[7]=c->r[1]+0x00000108u; // 802248E4
L_802248E8:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802248E8
  c->r[8]=c->r[28]|c->r[28]; // 802248EC
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802248F0
  c->r[3]=c->r[1]+0x00000048u; // 802248F4
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802248F8
  c->r[4]=c->r[1]+0x00000100u; // 802248FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80224900
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80224904
  c->r[6]=c->r[1]+0x00000118u; // 80224908
  c->r[5]=0u+0x00000001u; // 8022490C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80224910
  c->lr=0x80224918u; f_8021B0E0(c); // 80224914
  c->r[11]=c->r[1]+0x00000170u; // 80224918
  c->lr=0x80224920u; f_800C2E88(c); // 8022491C
  c->r[0]=R32(c->r[1]+0x00000174u); // 80224920
  c->lr=c->r[0]; // 80224924
  c->r[1]=c->r[1]+0x00000170u; // 80224928
  return; // 8022492C
}

// GetFrameMaterial__Q36nw4hbm3lyt6WindowCFUl
void f_80224930(Ctx* __restrict c) {
  trace_call(0x80224930u);
  c->r[0]=R8(c->r[3]+0x00000100u); // 80224930
  cmpu(c,0,c->r[4],c->r[0]); // 80224934
  if (crb(c,0)) { goto L_80224944; } // 80224938
  c->r[3]=0u+0x00000000u; // 8022493C
  return; // 80224940
L_80224944:;
  c->r[3]=R32(c->r[3]+0x000000FCu); // 80224944
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80224948
  c->r[3]=c->r[3]+c->r[0]; // 8022494C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80224950
  return; // 80224954
}

// GetContentMaterial__Q36nw4hbm3lyt6WindowCFv
void f_80224960(Ctx* __restrict c) {
  trace_call(0x80224960u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80224960
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80224964
  c->ctr=c->r[12]; // 80224968
  if (true) { dispatch(c,c->ctr); return; } // 8022496C
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt6WindowCFv
void f_80224970(Ctx* __restrict c) {
  trace_call(0x80224970u);
  c->r[3]=0u+0x80490000u; // 80224970
  c->r[3]=c->r[3]+0x00001A40u; // 80224974
  return; // 80224978
}

// fn_80224980
void f_80224980(Ctx* __restrict c) {
  trace_call(0x80224980u);
  c->r[4]=0u+0x80490000u; // 80224980
  c->r[3]=0u+0x80490000u; // 80224984
  c->r[4]=c->r[4]+0x00001A28u; // 80224988
  W32(c->r[3]+0x00001A40u,c->r[4]); // 8022498C
  return; // 80224990
}

// SinFIdx__Q26nw4hbm4mathFf
void f_802249A0(Ctx* __restrict c) {
  trace_call(0x802249A0u);
  c->r[3]=0u+0x80380000u; // 802249A0
  c->f[2]=std::fabs(c->f[1]); // 802249A4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802249A8
  {uint32_t ea=c->r[3]+0xFFFFF8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802249AC
  goto L_802249BC; // 802249B0
  c->r[0]=c->r[0]|0x00000000u; // 802249B4
L_802249B8:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 802249B8
L_802249BC:;
  fcmp(c,0,c->f[2],c->f[0]); // 802249BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802249C0
  if (crb(c,2)) { IRQCHK(c); goto L_802249B8; } // 802249C4
  c->r[3]=c->r[1]+0x0000000Cu; // 802249C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,1,3);} // 802249CC
  c->r[3]=c->r[1]+0x00000008u; // 802249D0
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 802249D4
  W16(c->r[1]+0x00000008u,c->r[0]); // 802249D8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,3);} // 802249DC
  c->r[5]=0u+0x803A0000u; // 802249E0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 802249E4
  c->r[3]=0u+0x80380000u; // 802249E8
  c->r[5]=c->r[5]+0x00007BD0u; // 802249EC
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 802249F0
  c->r[4]=c->r[5]+c->r[0]; // 802249F4
  {uint32_t ea=c->r[3]+0xFFFFF8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802249F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802249FC
  fcmp(c,0,c->f[1],c->f[0]); // 80224A00
  {uint32_t ea=c->r[5]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80224A04
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 80224A08
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80224A0C
  if (!crb(c,0)) { goto L_80224A18; } // 80224A10
  c->f[1]=-c->f[1]; // 80224A14
L_80224A18:;
  c->r[1]=c->r[1]+0x00000010u; // 80224A18
  return; // 80224A1C
}

// CosFIdx__Q26nw4hbm4mathFf
void f_80224A20(Ctx* __restrict c) {
  trace_call(0x80224A20u);
  c->r[3]=0u+0x80380000u; // 80224A20
  c->f[1]=std::fabs(c->f[1]); // 80224A24
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80224A28
  {uint32_t ea=c->r[3]+0xFFFFF8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224A2C
  goto L_80224A3C; // 80224A30
  c->r[0]=c->r[0]|0x00000000u; // 80224A34
L_80224A38:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80224A38
L_80224A3C:;
  fcmp(c,0,c->f[1],c->f[0]); // 80224A3C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224A40
  if (crb(c,2)) { IRQCHK(c); goto L_80224A38; } // 80224A44
  c->r[3]=c->r[1]+0x0000000Cu; // 80224A48
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,3);} // 80224A4C
  c->r[3]=c->r[1]+0x00000008u; // 80224A50
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80224A54
  W16(c->r[1]+0x00000008u,c->r[0]); // 80224A58
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,3);} // 80224A5C
  c->r[3]=0u+0x803A0000u; // 80224A60
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80224A64
  c->r[3]=c->r[3]+0x00007BD0u; // 80224A68
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80224A6C
  c->r[3]=c->r[3]+c->r[0]; // 80224A70
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80224A74
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224A78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80224A7C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80224A80
  c->r[1]=c->r[1]+0x00000010u; // 80224A84
  return; // 80224A88
}

// Atan2FIdx__Q26nw4hbm4mathFff
void f_80224A90(Ctx* __restrict c) {
  trace_call(0x80224A90u);
  c->r[3]=0u+0x80380000u; // 80224A90
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80224A94
  c->r[3]=c->r[3]+0xFFFFF8C8u; // 80224A98
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224A9C
  fcmp(c,0,c->f[0],c->f[2]); // 80224AA0
  if (!crb(c,2)) { goto L_80224AB8; } // 80224AA4
  fcmp(c,0,c->f[0],c->f[1]); // 80224AA8
  if (!crb(c,2)) { goto L_80224AB8; } // 80224AAC
  c->f[1]=c->f[0]; // 80224AB0
  goto L_80224C48; // 80224AB4
L_80224AB8:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224AB8
  fcmp(c,0,c->f[2],c->f[4]); // 80224ABC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224AC0
  if (!crb(c,2)) { goto L_80224B30; } // 80224AC4
  fcmp(c,0,c->f[1],c->f[4]); // 80224AC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224ACC
  if (!crb(c,2)) { goto L_80224B00; } // 80224AD0
  fcmp(c,0,c->f[2],c->f[1]); // 80224AD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224AD8
  if (!crb(c,2)) { goto L_80224AEC; } // 80224ADC
  c->f[3]=c->f[2]; // 80224AE0
  c->r[0]=0u+0x00000000u; // 80224AE4
  goto L_80224BA4; // 80224AE8
L_80224AEC:;
  c->f[3]=c->f[1]; // 80224AEC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224AF0
  c->f[1]=c->f[2]; // 80224AF4
  c->r[0]=0u+0x00000001u; // 80224AF8
  goto L_80224BA4; // 80224AFC
L_80224B00:;
  c->f[1]=-c->f[1]; // 80224B00
  fcmp(c,0,c->f[2],c->f[1]); // 80224B04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224B08
  if (!crb(c,2)) { goto L_80224B1C; } // 80224B0C
  c->f[3]=c->f[2]; // 80224B10
  c->r[0]=0u+0x00000001u; // 80224B14
  goto L_80224BA4; // 80224B18
L_80224B1C:;
  c->f[3]=c->f[1]; // 80224B1C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224B20
  c->f[1]=c->f[2]; // 80224B24
  c->r[0]=0u+0x00000000u; // 80224B28
  goto L_80224BA4; // 80224B2C
L_80224B30:;
  fcmp(c,0,c->f[1],c->f[4]); // 80224B30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224B34
  if (!crb(c,2)) { goto L_80224B70; } // 80224B38
  c->f[0]=-c->f[2]; // 80224B3C
  fcmp(c,0,c->f[0],c->f[1]); // 80224B40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224B44
  if (!crb(c,2)) { goto L_80224B5C; } // 80224B48
  c->f[3]=c->f[0]; // 80224B4C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80224B50
  c->r[0]=0u+0x00000001u; // 80224B54
  goto L_80224BA4; // 80224B58
L_80224B5C:;
  c->f[3]=c->f[1]; // 80224B5C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224B60
  c->f[1]=c->f[0]; // 80224B64
  c->r[0]=0u+0x00000000u; // 80224B68
  goto L_80224BA4; // 80224B6C
L_80224B70:;
  c->f[0]=-c->f[2]; // 80224B70
  c->f[1]=-c->f[1]; // 80224B74
  fcmp(c,0,c->f[0],c->f[1]); // 80224B78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80224B7C
  if (!crb(c,2)) { goto L_80224B94; } // 80224B80
  c->f[3]=c->f[0]; // 80224B84
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224B88
  c->r[0]=0u+0x00000000u; // 80224B8C
  goto L_80224BA4; // 80224B90
L_80224B94:;
  c->f[3]=c->f[1]; // 80224B94
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80224B98
  c->f[1]=c->f[0]; // 80224B9C
  c->r[0]=0u+0x00000001u; // 80224BA0
L_80224BA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80224BA4
  if (crb(c,2)) { goto L_80224BFC; } // 80224BA8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80224BAC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80224BB0
  c->r[3]=c->r[1]+0x00000010u; // 80224BB4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80224BB8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,3);} // 80224BBC
  c->r[3]=c->r[1]+0x0000000Au; // 80224BC0
  c->r[0]=R16(c->r[1]+0x00000010u); // 80224BC4
  W16(c->r[1]+0x0000000Au,c->r[0]); // 80224BC8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,3);} // 80224BCC
  c->r[4]=0u+0x803B0000u; // 80224BD0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80224BD4
  c->r[4]=c->r[4]+0xFFFF8BE0u; // 80224BD8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80224BDC
  c->r[3]=c->r[4]+c->r[0]; // 80224BE0
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80224BE4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224BE8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80224BEC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80224BF0
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 80224BF4
  goto L_80224C48; // 80224BF8
L_80224BFC:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80224BFC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80224C00
  c->r[3]=c->r[1]+0x0000000Cu; // 80224C04
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80224C08
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,3);} // 80224C0C
  c->r[3]=c->r[1]+0x00000008u; // 80224C10
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 80224C14
  W16(c->r[1]+0x00000008u,c->r[0]); // 80224C18
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,3);} // 80224C1C
  c->r[4]=0u+0x803B0000u; // 80224C20
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80224C24
  c->r[4]=c->r[4]+0xFFFF8BE0u; // 80224C28
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80224C2C
  c->r[3]=c->r[4]+c->r[0]; // 80224C30
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80224C34
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80224C38
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80224C3C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80224C40
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 80224C44
L_80224C48:;
  c->r[1]=c->r[1]+0x00000020u; // 80224C48
  return; // 80224C4C
}

// IsValidBinaryFile__Q26nw4hbm2utFPCQ36nw4hbm2ut16BinaryFileHeaderUlUsUs
void f_80224C50(Ctx* __restrict c) {
  trace_call(0x80224C50u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80224C50
  cmpu(c,0,c->r[0],c->r[4]); // 80224C54
  if (crb(c,2)) { goto L_80224C64; } // 80224C58
  c->r[3]=0u+0x00000000u; // 80224C5C
  return; // 80224C60
L_80224C64:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 80224C64
  cmpu(c,0,c->r[0],0x0000FEFFu); // 80224C68
  if (crb(c,2)) { goto L_80224C78; } // 80224C6C
  c->r[3]=0u+0x00000000u; // 80224C70
  return; // 80224C74
L_80224C78:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 80224C78
  cmpu(c,0,c->r[0],c->r[5]); // 80224C7C
  if (crb(c,2)) { goto L_80224C8C; } // 80224C80
  c->r[3]=0u+0x00000000u; // 80224C84
  return; // 80224C88
L_80224C8C:;
  c->r[4]=rotl(c->r[6],3)&0x0007FFF8u; // 80224C8C
  c->r[5]=R32(c->r[3]+0x00000008u); // 80224C90
  c->r[0]=c->r[4]+0x00000010u; // 80224C94
  cmpu(c,0,c->r[5],c->r[0]); // 80224C98
  if (!crb(c,0)) { goto L_80224CA8; } // 80224C9C
  c->r[3]=0u+0x00000000u; // 80224CA0
  return; // 80224CA4
L_80224CA8:;
  c->r[3]=R16(c->r[3]+0x0000000Eu); // 80224CA8
  c->r[0]=c->r[3]-c->r[6]; // 80224CAC
  c->r[3]=c->r[3]|~c->r[6]; // 80224CB0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80224CB4
  c->r[0]=c->r[3]-c->r[0]; // 80224CB8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80224CBC
  return; // 80224CC0
}

// ReadNextCharUTF8__Q36nw4hbm2ut14CharStrmReaderFv
void f_80224CD0(Ctx* __restrict c) {
  trace_call(0x80224CD0u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 80224CD0
  c->r[6]=R8(c->r[7]+0x00000000u); // 80224CD4
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 80224CD8
  if (!crb(c,2)) { goto L_80224CF0; } // 80224CDC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224CE0
  c->r[0]=c->r[4]+0x00000001u; // 80224CE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80224CE8
  goto L_80224D40; // 80224CEC
L_80224CF0:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 80224CF0
  cmps(c,0,(int32_t)c->r[0],192); // 80224CF4
  if (!crb(c,2)) { goto L_80224D1C; } // 80224CF8
  c->r[0]=R8(c->r[7]+0x00000001u); // 80224CFC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224D00
  c->r[5]=rotl(c->r[0],0)&0x0000003Fu; // 80224D04
  c->r[5]=(rotl(c->r[6],6)&0x000007C0u)|(c->r[5]&~0x000007C0u); // 80224D08
  c->r[0]=c->r[4]+0x00000002u; // 80224D0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80224D10
  c->r[6]=c->r[5]|c->r[5]; // 80224D14
  goto L_80224D40; // 80224D18
L_80224D1C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224D1C
  c->r[5]=rotl(c->r[6],12)&0x0001F000u; // 80224D20
  c->r[6]=R8(c->r[7]+0x00000001u); // 80224D24
  c->r[7]=R8(c->r[7]+0x00000002u); // 80224D28
  c->r[0]=c->r[4]+0x00000003u; // 80224D2C
  c->r[5]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[5]&~0x00000FC0u); // 80224D30
  c->r[5]=(rotl(c->r[7],0)&0x0000003Fu)|(c->r[5]&~0x0000003Fu); // 80224D34
  W32(c->r[3]+0x00000000u,c->r[0]); // 80224D38
  c->r[6]=rotl(c->r[5],0)&0x0000FFFFu; // 80224D3C
L_80224D40:;
  c->r[3]=c->r[6]|c->r[6]; // 80224D40
  return; // 80224D44
}

// ReadNextCharUTF16__Q36nw4hbm2ut14CharStrmReaderFv
void f_80224D50(Ctx* __restrict c) {
  trace_call(0x80224D50u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80224D50
  c->r[6]=c->r[3]|c->r[3]; // 80224D54
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224D58
  c->r[3]=R16(c->r[5]+0x00000000u); // 80224D5C
  c->r[0]=c->r[4]+0x00000002u; // 80224D60
  W32(c->r[6]+0x00000000u,c->r[0]); // 80224D64
  return; // 80224D68
}

// ReadNextCharCP1252__Q36nw4hbm2ut14CharStrmReaderFv
void f_80224D70(Ctx* __restrict c) {
  trace_call(0x80224D70u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 80224D70
  c->r[6]=c->r[3]|c->r[3]; // 80224D74
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224D78
  c->r[3]=R8(c->r[5]+0x00000000u); // 80224D7C
  c->r[0]=c->r[4]+0x00000001u; // 80224D80
  W32(c->r[6]+0x00000000u,c->r[0]); // 80224D84
  return; // 80224D88
}

// ReadNextCharSJIS__Q36nw4hbm2ut14CharStrmReaderFv
void f_80224D90(Ctx* __restrict c) {
  trace_call(0x80224D90u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224D90
  c->r[0]=0u+0x00000000u; // 80224D94
  c->r[5]=R8(c->r[4]+0x00000000u); // 80224D98
  cmpu(c,0,c->r[5],0x00000081u); // 80224D9C
  if (crb(c,0)) { goto L_80224DAC; } // 80224DA0
  cmpu(c,0,c->r[5],0x000000A0u); // 80224DA4
  if (crb(c,0)) { goto L_80224DB4; } // 80224DA8
L_80224DAC:;
  cmpu(c,0,c->r[5],0x000000E0u); // 80224DAC
  if (crb(c,0)) { goto L_80224DB8; } // 80224DB0
L_80224DB4:;
  c->r[0]=0u+0x00000001u; // 80224DB4
L_80224DB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80224DB8
  if (crb(c,2)) { goto L_80224DD8; } // 80224DBC
  c->r[6]=R8(c->r[4]+0x00000001u); // 80224DC0
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80224DC4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224DC8
  c->r[0]=c->r[4]+0x00000002u; // 80224DCC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80224DD0
  goto L_80224DE8; // 80224DD4
L_80224DD8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80224DD8
  c->r[6]=c->r[5]|c->r[5]; // 80224DDC
  c->r[0]=c->r[4]+0x00000001u; // 80224DE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80224DE4
L_80224DE8:;
  c->r[3]=c->r[6]|c->r[6]; // 80224DE8
  return; // 80224DEC
}

// __ct__Q36nw4hbm2ut10CharWriterFv
void f_80224DF0(Ctx* __restrict c) {
  trace_call(0x80224DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80224DF0
  c->r[4]=0u+0x80380000u; // 80224DF4
  c->r[6]=0u+0xFFFFFFFFu; // 80224DF8
  {uint32_t ea=c->r[4]+0xFFFFF8F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80224DFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80224E00
  c->r[5]=0u+0x80490000u; // 80224E04
  c->r[0]=0u+0x000000FFu; // 80224E08
  W32(c->r[1]+0x00000028u,c->r[30]); // 80224E0C
  c->r[4]=c->r[5]+0x00001A50u; // 80224E10
  W32(c->r[1]+0x00000024u,c->r[29]); // 80224E14
  c->r[29]=0u+0x00000000u; // 80224E18
  W32(c->r[1]+0x00000020u,c->r[28]); // 80224E1C
  c->r[28]=c->r[3]+0x00000018u; // 80224E20
  W32(c->r[3]+0x00000000u,c->r[6]); // 80224E24
  W32(c->r[1]+0x00000008u,c->r[29]); // 80224E28
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80224E2C
  c->r[30]=R8(c->r[1]+0x00000008u); // 80224E30
  W32(c->r[3]+0x00000004u,c->r[6]); // 80224E34
  c->r[31]=R8(c->r[1]+0x00000009u); // 80224E38
  W32(c->r[3]+0x00000008u,c->r[6]); // 80224E3C
  c->r[12]=R8(c->r[1]+0x0000000Au); // 80224E40
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80224E44
  c->r[11]=R8(c->r[1]+0x0000000Bu); // 80224E48
  W32(c->r[3]+0x00000010u,c->r[6]); // 80224E4C
  c->r[10]=R8(c->r[1]+0x0000000Cu); // 80224E50
  W32(c->r[3]+0x00000014u,c->r[6]); // 80224E54
  c->r[9]=R8(c->r[1]+0x0000000Du); // 80224E58
  W32(c->r[3]+0x00000018u,c->r[6]); // 80224E5C
  c->r[8]=R8(c->r[1]+0x0000000Eu); // 80224E60
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 80224E64
  c->r[7]=R8(c->r[1]+0x0000000Fu); // 80224E68
  W8(c->r[3]+0x00000042u,c->r[0]); // 80224E6C
  W8(c->r[3]+0x00000043u,c->r[29]); // 80224E70
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80224E74
  W32(c->r[3]+0x00000048u,c->r[29]); // 80224E78
  W32(c->r[5]+0x00001A50u,c->r[0]); // 80224E7C
  W32(c->r[4]+0x00000004u,c->r[29]); // 80224E80
  c->r[6]=R8(c->r[3]+0x00000018u); // 80224E84
  c->r[5]=R8(c->r[3]+0x00000019u); // 80224E88
  c->r[4]=R8(c->r[3]+0x0000001Au); // 80224E8C
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 80224E90
  W8(c->r[3]+0x00000000u,c->r[30]); // 80224E94
  W8(c->r[3]+0x00000001u,c->r[31]); // 80224E98
  W8(c->r[3]+0x00000002u,c->r[12]); // 80224E9C
  W8(c->r[3]+0x00000003u,c->r[11]); // 80224EA0
  W8(c->r[3]+0x00000004u,c->r[10]); // 80224EA4
  W8(c->r[3]+0x00000005u,c->r[9]); // 80224EA8
  W8(c->r[3]+0x00000006u,c->r[8]); // 80224EAC
  W8(c->r[3]+0x00000007u,c->r[7]); // 80224EB0
  W32(c->r[3]+0x00000020u,c->r[29]); // 80224EB4
  W8(c->r[3]+0x00000008u,c->r[6]); // 80224EB8
  W8(c->r[3]+0x00000009u,c->r[5]); // 80224EBC
  W8(c->r[3]+0x0000000Au,c->r[4]); // 80224EC0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 80224EC4
  c->r[0]=R8(c->r[28]+0x00000000u); // 80224EC8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80224ECC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80224ED0
  c->r[4]=R8(c->r[28]+0x00000001u); // 80224ED4
  W8(c->r[3]+0x0000000Du,c->r[4]); // 80224ED8
  cmps(c,0,(int32_t)c->r[0],2); // 80224EDC
  c->r[0]=R8(c->r[28]+0x00000002u); // 80224EE0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80224EE4
  c->r[0]=R8(c->r[28]+0x00000003u); // 80224EE8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80224EEC
  if (crb(c,2)) { goto L_80224EFC; } // 80224EF0
  c->r[5]=c->r[3]+0x00000018u; // 80224EF4
  goto L_80224F00; // 80224EF8
L_80224EFC:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80224EFC
L_80224F00:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80224F00
  W8(c->r[3]+0x00000010u,c->r[0]); // 80224F04
  c->r[0]=R32(c->r[3]+0x00000020u); // 80224F08
  c->r[4]=R8(c->r[5]+0x00000001u); // 80224F0C
  W8(c->r[3]+0x00000011u,c->r[4]); // 80224F10
  cmps(c,0,(int32_t)c->r[0],0); // 80224F14
  c->r[0]=R8(c->r[5]+0x00000002u); // 80224F18
  W8(c->r[3]+0x00000012u,c->r[0]); // 80224F1C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80224F20
  W8(c->r[3]+0x00000013u,c->r[0]); // 80224F24
  if (!crb(c,2)) { goto L_80224F34; } // 80224F28
  c->r[6]=c->r[3]+0x00000018u; // 80224F2C
  goto L_80224F38; // 80224F30
L_80224F34:;
  c->r[6]=c->r[3]+0x0000001Cu; // 80224F34
L_80224F38:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80224F38
  c->r[5]=0u+0x80810000u; // 80224F3C
  W8(c->r[3]+0x00000014u,c->r[0]); // 80224F40
  c->r[12]=c->r[5]+0xFFFF8081u; // 80224F44
  c->r[0]=R32(c->r[3]+0x00000020u); // 80224F48
  c->r[4]=0u+0xFFFFFFFFu; // 80224F4C
  c->r[5]=R8(c->r[6]+0x00000001u); // 80224F50
  W8(c->r[3]+0x00000015u,c->r[5]); // 80224F54
  cmps(c,0,(int32_t)c->r[0],1); // 80224F58
  c->r[5]=R8(c->r[3]+0x0000000Bu); // 80224F5C
  c->r[0]=R8(c->r[6]+0x00000002u); // 80224F60
  W8(c->r[3]+0x00000016u,c->r[0]); // 80224F64
  c->r[11]=R8(c->r[3]+0x00000042u); // 80224F68
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 80224F6C
  W32(c->r[1]+0x00000010u,c->r[4]); // 80224F70
  c->r[10]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 80224F74
  c->r[31]=R8(c->r[6]+0x00000003u); // 80224F78
  c->r[5]=R8(c->r[1]+0x00000011u); // 80224F7C
  c->r[7]=R8(c->r[3]+0x00000013u); // 80224F80
  W8(c->r[3]+0x00000019u,c->r[5]); // 80224F84
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[11]); // 80224F88
  c->r[0]=R8(c->r[1]+0x00000013u); // 80224F8C
  c->r[4]=R8(c->r[1]+0x00000012u); // 80224F90
  W8(c->r[3]+0x00000009u,c->r[5]); // 80224F94
  c->r[6]=R8(c->r[1]+0x00000010u); // 80224F98
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[11]); // 80224F9C
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 80224FA0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 80224FA4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[9])>>32); // 80224FA8
  W8(c->r[3]+0x0000001Au,c->r[4]); // 80224FAC
  W8(c->r[3]+0x0000000Au,c->r[4]); // 80224FB0
  W8(c->r[3]+0x00000018u,c->r[6]); // 80224FB4
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[10])>>32); // 80224FB8
  c->r[0]=c->r[0]+c->r[9]; // 80224FBC
  W8(c->r[3]+0x00000008u,c->r[6]); // 80224FC0
  c->r[4]=c->r[5]+c->r[10]; // 80224FC4
  c->r[4]=sraw(c,c->r[4],7); // 80224FC8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[8])>>32); // 80224FCC
  c->r[5]=sraw(c,c->r[0],7); // 80224FD0
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80224FD4
  c->r[5]=c->r[5]+c->r[6]; // 80224FD8
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 80224FDC
  c->r[7]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[11]); // 80224FE0
  c->r[4]=c->r[4]+c->r[8]; // 80224FE4
  c->r[5]=sraw(c,c->r[4],7); // 80224FE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[7])>>32); // 80224FEC
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80224FF0
  c->r[5]=c->r[5]+c->r[6]; // 80224FF4
  W8(c->r[3]+0x00000013u,c->r[5]); // 80224FF8
  c->r[0]=c->r[0]+c->r[7]; // 80224FFC
  c->r[0]=sraw(c,c->r[0],7); // 80225000
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80225004
  c->r[0]=c->r[0]+c->r[4]; // 80225008
  W8(c->r[3]+0x00000017u,c->r[0]); // 8022500C
  if (crb(c,2)) { goto L_8022501C; } // 80225010
  c->r[5]=c->r[3]+0x00000018u; // 80225014
  goto L_80225020; // 80225018
L_8022501C:;
  c->r[5]=c->r[3]+0x0000001Cu; // 8022501C
L_80225020:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225020
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80225024
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225028
  c->r[4]=R8(c->r[5]+0x00000001u); // 8022502C
  W8(c->r[3]+0x0000000Du,c->r[4]); // 80225030
  cmps(c,0,(int32_t)c->r[0],2); // 80225034
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225038
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8022503C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225040
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80225044
  if (crb(c,2)) { goto L_80225054; } // 80225048
  c->r[5]=c->r[3]+0x00000018u; // 8022504C
  goto L_80225058; // 80225050
L_80225054:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225054
L_80225058:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225058
  W8(c->r[3]+0x00000010u,c->r[0]); // 8022505C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225060
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225064
  W8(c->r[3]+0x00000011u,c->r[4]); // 80225068
  cmps(c,0,(int32_t)c->r[0],0); // 8022506C
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225070
  W8(c->r[3]+0x00000012u,c->r[0]); // 80225074
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225078
  W8(c->r[3]+0x00000013u,c->r[0]); // 8022507C
  if (!crb(c,2)) { goto L_8022508C; } // 80225080
  c->r[11]=c->r[3]+0x00000018u; // 80225084
  goto L_80225090; // 80225088
L_8022508C:;
  c->r[11]=c->r[3]+0x0000001Cu; // 8022508C
L_80225090:;
  c->r[0]=R8(c->r[11]+0x00000000u); // 80225090
  c->r[6]=0u+0x80810000u; // 80225094
  W8(c->r[3]+0x00000014u,c->r[0]); // 80225098
  c->r[5]=0u+0x80380000u; // 8022509C
  c->r[7]=R8(c->r[3]+0x0000000Bu); // 802250A0
  c->r[4]=0u+0x80380000u; // 802250A4
  c->r[9]=R8(c->r[3]+0x00000042u); // 802250A8
  c->r[10]=c->r[6]+0xFFFF8081u; // 802250AC
  c->r[0]=R8(c->r[11]+0x00000001u); // 802250B0
  W8(c->r[3]+0x00000015u,c->r[0]); // 802250B4
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 802250B8
  c->r[7]=R8(c->r[3]+0x0000000Fu); // 802250BC
  c->r[0]=0u+0x00000001u; // 802250C0
  c->r[6]=R8(c->r[11]+0x00000002u); // 802250C4
  W8(c->r[3]+0x00000016u,c->r[6]); // 802250C8
  c->r[6]=R8(c->r[3]+0x00000013u); // 802250CC
  c->r[11]=R8(c->r[11]+0x00000003u); // 802250D0
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 802250D4
  {uint32_t ea=c->r[4]+0xFFFFF8F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802250D8
  {uint32_t ea=c->r[5]+0xFFFFF8F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802250DC
  W32(c->r[3]+0x00000038u,c->r[0]); // 802250E0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 802250E4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 802250E8
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 802250EC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 802250F0
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[8])>>32); // 802250F4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 802250F8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 802250FC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[7])>>32); // 80225100
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80225104
  c->r[6]=c->r[6]+c->r[8]; // 80225108
  c->r[8]=sraw(c,c->r[6],7); // 8022510C
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 80225110
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80225114
  c->r[0]=c->r[0]+c->r[7]; // 80225118
  c->r[7]=c->r[8]+c->r[9]; // 8022511C
  W8(c->r[3]+0x0000000Bu,c->r[7]); // 80225120
  c->r[7]=sraw(c,c->r[0],7); // 80225124
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80225128
  c->r[5]=c->r[6]+c->r[5]; // 8022512C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80225130
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 80225134
  c->r[5]=sraw(c,c->r[5],7); // 80225138
  c->r[6]=c->r[7]+c->r[6]; // 8022513C
  W8(c->r[3]+0x0000000Fu,c->r[6]); // 80225140
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80225144
  c->r[0]=c->r[0]+c->r[4]; // 80225148
  c->r[5]=c->r[5]+c->r[6]; // 8022514C
  c->r[0]=sraw(c,c->r[0],7); // 80225150
  W8(c->r[3]+0x00000013u,c->r[5]); // 80225154
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80225158
  c->r[0]=c->r[0]+c->r[4]; // 8022515C
  W8(c->r[3]+0x00000017u,c->r[0]); // 80225160
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80225164
  c->r[30]=R32(c->r[1]+0x00000028u); // 80225168
  c->r[29]=R32(c->r[1]+0x00000024u); // 8022516C
  c->r[28]=R32(c->r[1]+0x00000020u); // 80225170
  c->r[1]=c->r[1]+0x00000030u; // 80225174
  return; // 80225178
}

// __dt__Q36nw4hbm2ut10CharWriterFv
void f_80225180(Ctx* __restrict c) {
  trace_call(0x80225180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80225180
  c->r[0]=c->lr; // 80225184
  cmps(c,0,(int32_t)c->r[3],0); // 80225188
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022518C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80225190
  c->r[31]=c->r[3]|c->r[3]; // 80225194
  if (crb(c,2)) { goto L_802251A8; } // 80225198
  cmps(c,0,(int32_t)c->r[4],0); // 8022519C
  if (!crb(c,1)) { goto L_802251A8; } // 802251A0
  c->lr=0x802251A8u; f_800C2AC0(c); // 802251A4
L_802251A8:;
  c->r[3]=c->r[31]|c->r[31]; // 802251A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802251AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802251B0
  c->lr=c->r[0]; // 802251B4
  c->r[1]=c->r[1]+0x00000010u; // 802251B8
  return; // 802251BC
}

// SetFont__Q36nw4hbm2ut10CharWriterFRCQ36nw4hbm2ut4Font
void f_802251C0(Ctx* __restrict c) {
  trace_call(0x802251C0u);
  W32(c->r[3]+0x00000048u,c->r[4]); // 802251C0
  return; // 802251C4
}

// GetFont__Q36nw4hbm2ut10CharWriterCFv
void f_802251D0(Ctx* __restrict c) {
  trace_call(0x802251D0u);
  c->r[3]=R32(c->r[3]+0x00000048u); // 802251D0
  return; // 802251D4
}

// SetupGX__Q36nw4hbm2ut10CharWriterFv
void f_802251E0(Ctx* __restrict c) {
  trace_call(0x802251E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802251E0
  c->r[0]=c->lr; // 802251E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802251E8
  c->r[0]=0u+0x000000FFu; // 802251EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802251F0
  c->r[31]=0u+0x00000000u; // 802251F4
  W32(c->r[1]+0x00000028u,c->r[30]); // 802251F8
  c->r[30]=0u+0x80490000u; // 802251FC
  c->r[30]=c->r[30]+0x00001A48u; // 80225200
  c->r[4]=c->r[30]+0x00000008u; // 80225204
  W32(c->r[30]+0x00000008u,c->r[0]); // 80225208
  W32(c->r[4]+0x00000004u,c->r[31]); // 8022520C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80225210
  cmps(c,0,(int32_t)c->r[0],0); // 80225214
  if (!crb(c,2)) { goto L_8022522C; } // 80225218
  c->r[4]=R32(c->r[3]+0x00000004u); // 8022521C
  c->r[0]=c->r[4]+0x00010000u; // 80225220
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80225224
  if (crb(c,2)) { goto L_8022524C; } // 80225228
L_8022522C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022522C
  c->r[4]=c->r[1]+0x0000001Cu; // 80225230
  W32(c->r[1]+0x00000020u,c->r[0]); // 80225234
  c->r[0]=R32(c->r[3]+0x00000004u); // 80225238
  c->r[3]=c->r[1]+0x00000020u; // 8022523C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80225240
  c->lr=0x80225248u; f_802264F0(c); // 80225244
  goto L_80225B18; // 80225248
L_8022524C:;
  c->r[3]=R32(c->r[3]+0x00000048u); // 8022524C
  cmps(c,0,(int32_t)c->r[3],0); // 80225250
  if (crb(c,2)) { goto L_80225978; } // 80225254
  c->r[12]=R32(c->r[3]+0x00000000u); // 80225258
  c->r[12]=R32(c->r[12]+0x00000030u); // 8022525C
  c->ctr=c->r[12]; // 80225260
  if (true) { c->lr=0x80225268u; dispatch(c,c->ctr); } // 80225264
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80225268
  cmpu(c,0,c->r[0],0x00000002u); // 8022526C
  if (!crb(c,1)) { goto L_80225630; } // 80225270
  cmpu(c,0,c->r[3],0x00000001u); // 80225274
  if (!crb(c,1)) { goto L_8022528C; } // 80225278
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8022527C
  cmpu(c,0,c->r[0],0x00000001u); // 80225280
  if (!crb(c,1)) { goto L_8022548C; } // 80225284
  goto L_802257D4; // 80225288
L_8022528C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8022528C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80225290
  if (!crb(c,2)) { goto L_802252A4; } // 80225294
  c->r[0]=0u+0x00000001u; // 80225298
  W32(c->r[30]+0x00000004u,c->r[31]); // 8022529C
  W8(c->r[30]+0x00000000u,c->r[0]); // 802252A0
L_802252A4:;
  c->r[3]=0u+0x80380000u; // 802252A4
  c->r[0]=R32(c->r[30]+0x00000004u); // 802252A8
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802252AC
  c->r[4]=c->r[1]+0x00000018u; // 802252B0
  W32(c->r[1]+0x00000018u,c->r[0]); // 802252B4
  c->r[3]=0u+0x00000000u; // 802252B8
  c->f[2]=c->f[1]; // 802252BC
  c->f[3]=c->f[1]; // 802252C0
  c->f[4]=c->f[1]; // 802252C4
  c->lr=0x802252CCu; f_8020BD50(c); // 802252C8
  c->r[3]=0u+0x00000000u; // 802252CC
  c->r[4]=0u+0x00000000u; // 802252D0
  c->r[5]=0u+0x00000001u; // 802252D4
  c->r[6]=0u+0x00000002u; // 802252D8
  c->r[7]=0u+0x00000003u; // 802252DC
  c->lr=0x802252E4u; f_8020BA70(c); // 802252E0
  c->r[3]=0u+0x00000000u; // 802252E4
  c->r[4]=0u+0x00000011u; // 802252E8
  c->r[5]=0u+0x00000000u; // 802252EC
  c->lr=0x802252F4u; f_8020BB30(c); // 802252F0
  c->r[3]=0u+0x00000001u; // 802252F4
  c->lr=0x802252FCu; f_8020A170(c); // 802252F8
  c->r[3]=0u+0x00000004u; // 802252FC
  c->r[4]=0u+0x00000000u; // 80225300
  c->r[5]=0u+0x00000000u; // 80225304
  c->r[6]=0u+0x00000001u; // 80225308
  c->r[7]=0u+0x00000000u; // 8022530C
  c->r[8]=0u+0x00000000u; // 80225310
  c->r[9]=0u+0x00000002u; // 80225314
  c->lr=0x8022531Cu; f_8020A1A0(c); // 80225318
  c->r[3]=0u+0x00000005u; // 8022531C
  c->r[4]=0u+0x00000000u; // 80225320
  c->r[5]=0u+0x00000000u; // 80225324
  c->r[6]=0u+0x00000000u; // 80225328
  c->r[7]=0u+0x00000000u; // 8022532C
  c->r[8]=0u+0x00000000u; // 80225330
  c->r[9]=0u+0x00000002u; // 80225334
  c->lr=0x8022533Cu; f_8020A1A0(c); // 80225338
  c->r[3]=0u+0x00000001u; // 8022533C
  c->lr=0x80225344u; f_80208480(c); // 80225340
  c->r[3]=0u+0x00000000u; // 80225344
  c->r[4]=0u+0x00000001u; // 80225348
  c->r[5]=0u+0x00000004u; // 8022534C
  c->r[6]=0u+0x0000003Cu; // 80225350
  c->r[7]=0u+0x00000000u; // 80225354
  c->r[8]=0u+0x0000007Du; // 80225358
  c->lr=0x80225360u; f_80208230(c); // 8022535C
  c->r[3]=0u+0x00000000u; // 80225360
  c->lr=0x80225368u; f_8020B5A0(c); // 80225364
  c->r[3]=0u+0x00000001u; // 80225368
  c->r[4]=0u+0x00000004u; // 8022536C
  c->r[5]=0u+0x00000005u; // 80225370
  c->r[6]=0u+0x0000000Fu; // 80225374
  c->lr=0x8022537Cu; f_8020C090(c); // 80225378
  c->r[3]=0u+0x00000001u; // 8022537C
  c->lr=0x80225384u; f_8020BD20(c); // 80225380
  c->r[3]=0u+0x00000000u; // 80225384
  c->lr=0x8022538Cu; f_8020B5C0(c); // 80225388
  c->r[3]=0u+0x00000000u; // 8022538C
  c->r[4]=0u+0x00000000u; // 80225390
  c->r[5]=0u+0x00000000u; // 80225394
  c->lr=0x8022539Cu; f_8020BA30(c); // 80225398
  c->r[3]=0u+0x00000000u; // 8022539C
  c->r[4]=0u+0x00000000u; // 802253A0
  c->r[5]=0u+0x00000000u; // 802253A4
  c->r[6]=0u+0x00000004u; // 802253A8
  c->lr=0x802253B0u; f_8020BBC0(c); // 802253AC
  c->r[3]=0u+0x00000000u; // 802253B0
  c->r[4]=0u+0x0000000Fu; // 802253B4
  c->r[5]=0u+0x0000000Fu; // 802253B8
  c->r[6]=0u+0x0000000Fu; // 802253BC
  c->r[7]=0u+0x0000000Au; // 802253C0
  c->lr=0x802253C8u; f_8020B720(c); // 802253C4
  c->r[3]=0u+0x00000000u; // 802253C8
  c->r[4]=0u+0x00000007u; // 802253CC
  c->r[5]=0u+0x00000004u; // 802253D0
  c->r[6]=0u+0x00000005u; // 802253D4
  c->r[7]=0u+0x00000007u; // 802253D8
  c->lr=0x802253E0u; f_8020B760(c); // 802253DC
  c->r[3]=0u+0x00000000u; // 802253E0
  c->r[4]=0u+0x00000000u; // 802253E4
  c->r[5]=0u+0x00000000u; // 802253E8
  c->r[6]=0u+0x00000000u; // 802253EC
  c->r[7]=0u+0x00000001u; // 802253F0
  c->r[8]=0u+0x00000000u; // 802253F4
  c->lr=0x802253FCu; f_8020B7A0(c); // 802253F8
  c->r[3]=0u+0x00000000u; // 802253FC
  c->r[4]=0u+0x00000000u; // 80225400
  c->r[5]=0u+0x00000000u; // 80225404
  c->r[6]=0u+0x00000000u; // 80225408
  c->r[7]=0u+0x00000001u; // 8022540C
  c->r[8]=0u+0x00000000u; // 80225410
  c->lr=0x80225418u; f_8020B800(c); // 80225414
  c->r[3]=0u+0x00000000u; // 80225418
  c->r[4]=0u+0x00000009u; // 8022541C
  c->r[5]=0u+0x00000001u; // 80225420
  c->r[6]=0u+0x00000004u; // 80225424
  c->r[7]=0u+0x00000000u; // 80225428
  c->lr=0x80225430u; f_80207B10(c); // 8022542C
  c->r[3]=0u+0x00000000u; // 80225430
  c->r[4]=0u+0x0000000Bu; // 80225434
  c->r[5]=0u+0x00000001u; // 80225438
  c->r[6]=0u+0x00000005u; // 8022543C
  c->r[7]=0u+0x00000000u; // 80225440
  c->lr=0x80225448u; f_80207B10(c); // 80225444
  c->r[3]=0u+0x00000000u; // 80225448
  c->r[4]=0u+0x0000000Du; // 8022544C
  c->r[5]=0u+0x00000001u; // 80225450
  c->r[6]=0u+0x00000002u; // 80225454
  c->r[7]=0u+0x0000000Fu; // 80225458
  c->lr=0x80225460u; f_80207B10(c); // 8022545C
  c->lr=0x80225464u; f_80207AD0(c); // 80225460
  c->r[3]=0u+0x00000009u; // 80225464
  c->r[4]=0u+0x00000001u; // 80225468
  c->lr=0x80225470u; f_80207470(c); // 8022546C
  c->r[3]=0u+0x0000000Bu; // 80225470
  c->r[4]=0u+0x00000001u; // 80225474
  c->lr=0x8022547Cu; f_80207470(c); // 80225478
  c->r[3]=0u+0x0000000Du; // 8022547C
  c->r[4]=0u+0x00000001u; // 80225480
  c->lr=0x80225488u; f_80207470(c); // 80225484
  goto L_80225B18; // 80225488
L_8022548C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8022548C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80225490
  if (!crb(c,2)) { goto L_802254A4; } // 80225494
  c->r[0]=0u+0x00000001u; // 80225498
  W32(c->r[30]+0x00000004u,c->r[31]); // 8022549C
  W8(c->r[30]+0x00000000u,c->r[0]); // 802254A0
L_802254A4:;
  c->r[3]=0u+0x80380000u; // 802254A4
  c->r[0]=R32(c->r[30]+0x00000004u); // 802254A8
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802254AC
  c->r[4]=c->r[1]+0x00000014u; // 802254B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802254B4
  c->r[3]=0u+0x00000000u; // 802254B8
  c->f[2]=c->f[1]; // 802254BC
  c->f[3]=c->f[1]; // 802254C0
  c->f[4]=c->f[1]; // 802254C4
  c->lr=0x802254CCu; f_8020BD50(c); // 802254C8
  c->r[3]=0u+0x00000000u; // 802254CC
  c->r[4]=0u+0x00000000u; // 802254D0
  c->r[5]=0u+0x00000001u; // 802254D4
  c->r[6]=0u+0x00000002u; // 802254D8
  c->r[7]=0u+0x00000003u; // 802254DC
  c->lr=0x802254E4u; f_8020BA70(c); // 802254E0
  c->r[3]=0u+0x00000000u; // 802254E4
  c->r[4]=0u+0x00000011u; // 802254E8
  c->r[5]=0u+0x00000000u; // 802254EC
  c->lr=0x802254F4u; f_8020BB30(c); // 802254F0
  c->r[3]=0u+0x00000001u; // 802254F4
  c->lr=0x802254FCu; f_8020A170(c); // 802254F8
  c->r[3]=0u+0x00000004u; // 802254FC
  c->r[4]=0u+0x00000000u; // 80225500
  c->r[5]=0u+0x00000000u; // 80225504
  c->r[6]=0u+0x00000001u; // 80225508
  c->r[7]=0u+0x00000000u; // 8022550C
  c->r[8]=0u+0x00000000u; // 80225510
  c->r[9]=0u+0x00000002u; // 80225514
  c->lr=0x8022551Cu; f_8020A1A0(c); // 80225518
  c->r[3]=0u+0x00000005u; // 8022551C
  c->r[4]=0u+0x00000000u; // 80225520
  c->r[5]=0u+0x00000000u; // 80225524
  c->r[6]=0u+0x00000000u; // 80225528
  c->r[7]=0u+0x00000000u; // 8022552C
  c->r[8]=0u+0x00000000u; // 80225530
  c->r[9]=0u+0x00000002u; // 80225534
  c->lr=0x8022553Cu; f_8020A1A0(c); // 80225538
  c->r[3]=0u+0x00000001u; // 8022553C
  c->lr=0x80225544u; f_80208480(c); // 80225540
  c->r[3]=0u+0x00000000u; // 80225544
  c->r[4]=0u+0x00000001u; // 80225548
  c->r[5]=0u+0x00000004u; // 8022554C
  c->r[6]=0u+0x0000003Cu; // 80225550
  c->r[7]=0u+0x00000000u; // 80225554
  c->r[8]=0u+0x0000007Du; // 80225558
  c->lr=0x80225560u; f_80208230(c); // 8022555C
  c->r[3]=0u+0x00000000u; // 80225560
  c->lr=0x80225568u; f_8020B5A0(c); // 80225564
  c->r[3]=0u+0x00000001u; // 80225568
  c->r[4]=0u+0x00000004u; // 8022556C
  c->r[5]=0u+0x00000005u; // 80225570
  c->r[6]=0u+0x0000000Fu; // 80225574
  c->lr=0x8022557Cu; f_8020C090(c); // 80225578
  c->r[3]=0u+0x00000001u; // 8022557C
  c->lr=0x80225584u; f_8020BD20(c); // 80225580
  c->r[3]=0u+0x00000000u; // 80225584
  c->lr=0x8022558Cu; f_8020B5C0(c); // 80225588
  c->r[3]=0u+0x00000000u; // 8022558C
  c->r[4]=0u+0x00000000u; // 80225590
  c->r[5]=0u+0x00000000u; // 80225594
  c->lr=0x8022559Cu; f_8020BA30(c); // 80225598
  c->r[3]=0u+0x00000000u; // 8022559C
  c->r[4]=0u+0x00000000u; // 802255A0
  c->r[5]=0u+0x00000000u; // 802255A4
  c->r[6]=0u+0x00000004u; // 802255A8
  c->lr=0x802255B0u; f_8020BBC0(c); // 802255AC
  c->r[3]=0u+0x00000000u; // 802255B0
  c->r[4]=0u+0x00000000u; // 802255B4
  c->lr=0x802255BCu; f_8020B680(c); // 802255B8
  c->r[3]=0u+0x00000000u; // 802255BC
  c->r[4]=0u+0x00000009u; // 802255C0
  c->r[5]=0u+0x00000001u; // 802255C4
  c->r[6]=0u+0x00000004u; // 802255C8
  c->r[7]=0u+0x00000000u; // 802255CC
  c->lr=0x802255D4u; f_80207B10(c); // 802255D0
  c->r[3]=0u+0x00000000u; // 802255D4
  c->r[4]=0u+0x0000000Bu; // 802255D8
  c->r[5]=0u+0x00000001u; // 802255DC
  c->r[6]=0u+0x00000005u; // 802255E0
  c->r[7]=0u+0x00000000u; // 802255E4
  c->lr=0x802255ECu; f_80207B10(c); // 802255E8
  c->r[3]=0u+0x00000000u; // 802255EC
  c->r[4]=0u+0x0000000Du; // 802255F0
  c->r[5]=0u+0x00000001u; // 802255F4
  c->r[6]=0u+0x00000002u; // 802255F8
  c->r[7]=0u+0x0000000Fu; // 802255FC
  c->lr=0x80225604u; f_80207B10(c); // 80225600
  c->lr=0x80225608u; f_80207AD0(c); // 80225604
  c->r[3]=0u+0x00000009u; // 80225608
  c->r[4]=0u+0x00000001u; // 8022560C
  c->lr=0x80225614u; f_80207470(c); // 80225610
  c->r[3]=0u+0x0000000Bu; // 80225614
  c->r[4]=0u+0x00000001u; // 80225618
  c->lr=0x80225620u; f_80207470(c); // 8022561C
  c->r[3]=0u+0x0000000Du; // 80225620
  c->r[4]=0u+0x00000001u; // 80225624
  c->lr=0x8022562Cu; f_80207470(c); // 80225628
  goto L_80225B18; // 8022562C
L_80225630:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80225630
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80225634
  if (!crb(c,2)) { goto L_80225648; } // 80225638
  c->r[0]=0u+0x00000001u; // 8022563C
  W32(c->r[30]+0x00000004u,c->r[31]); // 80225640
  W8(c->r[30]+0x00000000u,c->r[0]); // 80225644
L_80225648:;
  c->r[3]=0u+0x80380000u; // 80225648
  c->r[0]=R32(c->r[30]+0x00000004u); // 8022564C
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80225650
  c->r[4]=c->r[1]+0x00000010u; // 80225654
  W32(c->r[1]+0x00000010u,c->r[0]); // 80225658
  c->r[3]=0u+0x00000000u; // 8022565C
  c->f[2]=c->f[1]; // 80225660
  c->f[3]=c->f[1]; // 80225664
  c->f[4]=c->f[1]; // 80225668
  c->lr=0x80225670u; f_8020BD50(c); // 8022566C
  c->r[3]=0u+0x00000000u; // 80225670
  c->r[4]=0u+0x00000000u; // 80225674
  c->r[5]=0u+0x00000001u; // 80225678
  c->r[6]=0u+0x00000002u; // 8022567C
  c->r[7]=0u+0x00000003u; // 80225680
  c->lr=0x80225688u; f_8020BA70(c); // 80225684
  c->r[3]=0u+0x00000000u; // 80225688
  c->r[4]=0u+0x00000011u; // 8022568C
  c->r[5]=0u+0x00000000u; // 80225690
  c->lr=0x80225698u; f_8020BB30(c); // 80225694
  c->r[3]=0u+0x00000001u; // 80225698
  c->lr=0x802256A0u; f_8020A170(c); // 8022569C
  c->r[3]=0u+0x00000004u; // 802256A0
  c->r[4]=0u+0x00000000u; // 802256A4
  c->r[5]=0u+0x00000000u; // 802256A8
  c->r[6]=0u+0x00000001u; // 802256AC
  c->r[7]=0u+0x00000000u; // 802256B0
  c->r[8]=0u+0x00000000u; // 802256B4
  c->r[9]=0u+0x00000002u; // 802256B8
  c->lr=0x802256C0u; f_8020A1A0(c); // 802256BC
  c->r[3]=0u+0x00000005u; // 802256C0
  c->r[4]=0u+0x00000000u; // 802256C4
  c->r[5]=0u+0x00000000u; // 802256C8
  c->r[6]=0u+0x00000000u; // 802256CC
  c->r[7]=0u+0x00000000u; // 802256D0
  c->r[8]=0u+0x00000000u; // 802256D4
  c->r[9]=0u+0x00000002u; // 802256D8
  c->lr=0x802256E0u; f_8020A1A0(c); // 802256DC
  c->r[3]=0u+0x00000001u; // 802256E0
  c->lr=0x802256E8u; f_80208480(c); // 802256E4
  c->r[3]=0u+0x00000000u; // 802256E8
  c->r[4]=0u+0x00000001u; // 802256EC
  c->r[5]=0u+0x00000004u; // 802256F0
  c->r[6]=0u+0x0000003Cu; // 802256F4
  c->r[7]=0u+0x00000000u; // 802256F8
  c->r[8]=0u+0x0000007Du; // 802256FC
  c->lr=0x80225704u; f_80208230(c); // 80225700
  c->r[3]=0u+0x00000000u; // 80225704
  c->lr=0x8022570Cu; f_8020B5A0(c); // 80225708
  c->r[3]=0u+0x00000001u; // 8022570C
  c->r[4]=0u+0x00000004u; // 80225710
  c->r[5]=0u+0x00000005u; // 80225714
  c->r[6]=0u+0x0000000Fu; // 80225718
  c->lr=0x80225720u; f_8020C090(c); // 8022571C
  c->r[3]=0u+0x00000001u; // 80225720
  c->lr=0x80225728u; f_8020BD20(c); // 80225724
  c->r[3]=0u+0x00000000u; // 80225728
  c->lr=0x80225730u; f_8020B5C0(c); // 8022572C
  c->r[3]=0u+0x00000000u; // 80225730
  c->r[4]=0u+0x00000000u; // 80225734
  c->r[5]=0u+0x00000000u; // 80225738
  c->lr=0x80225740u; f_8020BA30(c); // 8022573C
  c->r[3]=0u+0x00000000u; // 80225740
  c->r[4]=0u+0x00000000u; // 80225744
  c->r[5]=0u+0x00000000u; // 80225748
  c->r[6]=0u+0x00000004u; // 8022574C
  c->lr=0x80225754u; f_8020BBC0(c); // 80225750
  c->r[3]=0u+0x00000000u; // 80225754
  c->r[4]=0u+0x00000000u; // 80225758
  c->lr=0x80225760u; f_8020B680(c); // 8022575C
  c->r[3]=0u+0x00000000u; // 80225760
  c->r[4]=0u+0x00000009u; // 80225764
  c->r[5]=0u+0x00000001u; // 80225768
  c->r[6]=0u+0x00000004u; // 8022576C
  c->r[7]=0u+0x00000000u; // 80225770
  c->lr=0x80225778u; f_80207B10(c); // 80225774
  c->r[3]=0u+0x00000000u; // 80225778
  c->r[4]=0u+0x0000000Bu; // 8022577C
  c->r[5]=0u+0x00000001u; // 80225780
  c->r[6]=0u+0x00000005u; // 80225784
  c->r[7]=0u+0x00000000u; // 80225788
  c->lr=0x80225790u; f_80207B10(c); // 8022578C
  c->r[3]=0u+0x00000000u; // 80225790
  c->r[4]=0u+0x0000000Du; // 80225794
  c->r[5]=0u+0x00000001u; // 80225798
  c->r[6]=0u+0x00000002u; // 8022579C
  c->r[7]=0u+0x0000000Fu; // 802257A0
  c->lr=0x802257A8u; f_80207B10(c); // 802257A4
  c->lr=0x802257ACu; f_80207AD0(c); // 802257A8
  c->r[3]=0u+0x00000009u; // 802257AC
  c->r[4]=0u+0x00000001u; // 802257B0
  c->lr=0x802257B8u; f_80207470(c); // 802257B4
  c->r[3]=0u+0x0000000Bu; // 802257B8
  c->r[4]=0u+0x00000001u; // 802257BC
  c->lr=0x802257C4u; f_80207470(c); // 802257C0
  c->r[3]=0u+0x0000000Du; // 802257C4
  c->r[4]=0u+0x00000001u; // 802257C8
  c->lr=0x802257D0u; f_80207470(c); // 802257CC
  goto L_80225B18; // 802257D0
L_802257D4:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 802257D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802257D8
  if (!crb(c,2)) { goto L_802257EC; } // 802257DC
  c->r[0]=0u+0x00000001u; // 802257E0
  W32(c->r[30]+0x00000004u,c->r[31]); // 802257E4
  W8(c->r[30]+0x00000000u,c->r[0]); // 802257E8
L_802257EC:;
  c->r[3]=0u+0x80380000u; // 802257EC
  c->r[0]=R32(c->r[30]+0x00000004u); // 802257F0
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802257F4
  c->r[4]=c->r[1]+0x0000000Cu; // 802257F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802257FC
  c->r[3]=0u+0x00000000u; // 80225800
  c->f[2]=c->f[1]; // 80225804
  c->f[3]=c->f[1]; // 80225808
  c->f[4]=c->f[1]; // 8022580C
  c->lr=0x80225814u; f_8020BD50(c); // 80225810
  c->r[3]=0u+0x00000000u; // 80225814
  c->r[4]=0u+0x00000000u; // 80225818
  c->r[5]=0u+0x00000001u; // 8022581C
  c->r[6]=0u+0x00000002u; // 80225820
  c->r[7]=0u+0x00000003u; // 80225824
  c->lr=0x8022582Cu; f_8020BA70(c); // 80225828
  c->r[3]=0u+0x00000000u; // 8022582C
  c->r[4]=0u+0x00000011u; // 80225830
  c->r[5]=0u+0x00000000u; // 80225834
  c->lr=0x8022583Cu; f_8020BB30(c); // 80225838
  c->r[3]=0u+0x00000001u; // 8022583C
  c->lr=0x80225844u; f_8020A170(c); // 80225840
  c->r[3]=0u+0x00000004u; // 80225844
  c->r[4]=0u+0x00000000u; // 80225848
  c->r[5]=0u+0x00000000u; // 8022584C
  c->r[6]=0u+0x00000001u; // 80225850
  c->r[7]=0u+0x00000000u; // 80225854
  c->r[8]=0u+0x00000000u; // 80225858
  c->r[9]=0u+0x00000002u; // 8022585C
  c->lr=0x80225864u; f_8020A1A0(c); // 80225860
  c->r[3]=0u+0x00000005u; // 80225864
  c->r[4]=0u+0x00000000u; // 80225868
  c->r[5]=0u+0x00000000u; // 8022586C
  c->r[6]=0u+0x00000000u; // 80225870
  c->r[7]=0u+0x00000000u; // 80225874
  c->r[8]=0u+0x00000000u; // 80225878
  c->r[9]=0u+0x00000002u; // 8022587C
  c->lr=0x80225884u; f_8020A1A0(c); // 80225880
  c->r[3]=0u+0x00000001u; // 80225884
  c->lr=0x8022588Cu; f_80208480(c); // 80225888
  c->r[3]=0u+0x00000000u; // 8022588C
  c->r[4]=0u+0x00000001u; // 80225890
  c->r[5]=0u+0x00000004u; // 80225894
  c->r[6]=0u+0x0000003Cu; // 80225898
  c->r[7]=0u+0x00000000u; // 8022589C
  c->r[8]=0u+0x0000007Du; // 802258A0
  c->lr=0x802258A8u; f_80208230(c); // 802258A4
  c->r[3]=0u+0x00000000u; // 802258A8
  c->lr=0x802258B0u; f_8020B5A0(c); // 802258AC
  c->r[3]=0u+0x00000001u; // 802258B0
  c->r[4]=0u+0x00000004u; // 802258B4
  c->r[5]=0u+0x00000005u; // 802258B8
  c->r[6]=0u+0x0000000Fu; // 802258BC
  c->lr=0x802258C4u; f_8020C090(c); // 802258C0
  c->r[3]=0u+0x00000001u; // 802258C4
  c->lr=0x802258CCu; f_8020BD20(c); // 802258C8
  c->r[3]=0u+0x00000000u; // 802258CC
  c->lr=0x802258D4u; f_8020B5C0(c); // 802258D0
  c->r[3]=0u+0x00000000u; // 802258D4
  c->r[4]=0u+0x00000000u; // 802258D8
  c->r[5]=0u+0x00000000u; // 802258DC
  c->lr=0x802258E4u; f_8020BA30(c); // 802258E0
  c->r[3]=0u+0x00000000u; // 802258E4
  c->r[4]=0u+0x00000000u; // 802258E8
  c->r[5]=0u+0x00000000u; // 802258EC
  c->r[6]=0u+0x00000004u; // 802258F0
  c->lr=0x802258F8u; f_8020BBC0(c); // 802258F4
  c->r[3]=0u+0x00000000u; // 802258F8
  c->r[4]=0u+0x00000000u; // 802258FC
  c->lr=0x80225904u; f_8020B680(c); // 80225900
  c->r[3]=0u+0x00000000u; // 80225904
  c->r[4]=0u+0x00000009u; // 80225908
  c->r[5]=0u+0x00000001u; // 8022590C
  c->r[6]=0u+0x00000004u; // 80225910
  c->r[7]=0u+0x00000000u; // 80225914
  c->lr=0x8022591Cu; f_80207B10(c); // 80225918
  c->r[3]=0u+0x00000000u; // 8022591C
  c->r[4]=0u+0x0000000Bu; // 80225920
  c->r[5]=0u+0x00000001u; // 80225924
  c->r[6]=0u+0x00000005u; // 80225928
  c->r[7]=0u+0x00000000u; // 8022592C
  c->lr=0x80225934u; f_80207B10(c); // 80225930
  c->r[3]=0u+0x00000000u; // 80225934
  c->r[4]=0u+0x0000000Du; // 80225938
  c->r[5]=0u+0x00000001u; // 8022593C
  c->r[6]=0u+0x00000002u; // 80225940
  c->r[7]=0u+0x0000000Fu; // 80225944
  c->lr=0x8022594Cu; f_80207B10(c); // 80225948
  c->lr=0x80225950u; f_80207AD0(c); // 8022594C
  c->r[3]=0u+0x00000009u; // 80225950
  c->r[4]=0u+0x00000001u; // 80225954
  c->lr=0x8022595Cu; f_80207470(c); // 80225958
  c->r[3]=0u+0x0000000Bu; // 8022595C
  c->r[4]=0u+0x00000001u; // 80225960
  c->lr=0x80225968u; f_80207470(c); // 80225964
  c->r[3]=0u+0x0000000Du; // 80225968
  c->r[4]=0u+0x00000001u; // 8022596C
  c->lr=0x80225974u; f_80207470(c); // 80225970
  goto L_80225B18; // 80225974
L_80225978:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80225978
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022597C
  if (!crb(c,2)) { goto L_80225990; } // 80225980
  c->r[0]=0u+0x00000001u; // 80225984
  W32(c->r[30]+0x00000004u,c->r[31]); // 80225988
  W8(c->r[30]+0x00000000u,c->r[0]); // 8022598C
L_80225990:;
  c->r[3]=0u+0x80380000u; // 80225990
  c->r[0]=R32(c->r[30]+0x00000004u); // 80225994
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80225998
  c->r[4]=c->r[1]+0x00000008u; // 8022599C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802259A0
  c->r[3]=0u+0x00000000u; // 802259A4
  c->f[2]=c->f[1]; // 802259A8
  c->f[3]=c->f[1]; // 802259AC
  c->f[4]=c->f[1]; // 802259B0
  c->lr=0x802259B8u; f_8020BD50(c); // 802259B4
  c->r[3]=0u+0x00000000u; // 802259B8
  c->r[4]=0u+0x00000000u; // 802259BC
  c->r[5]=0u+0x00000001u; // 802259C0
  c->r[6]=0u+0x00000002u; // 802259C4
  c->r[7]=0u+0x00000003u; // 802259C8
  c->lr=0x802259D0u; f_8020BA70(c); // 802259CC
  c->r[3]=0u+0x00000000u; // 802259D0
  c->r[4]=0u+0x00000011u; // 802259D4
  c->r[5]=0u+0x00000000u; // 802259D8
  c->lr=0x802259E0u; f_8020BB30(c); // 802259DC
  c->r[3]=0u+0x00000001u; // 802259E0
  c->lr=0x802259E8u; f_8020A170(c); // 802259E4
  c->r[3]=0u+0x00000004u; // 802259E8
  c->r[4]=0u+0x00000000u; // 802259EC
  c->r[5]=0u+0x00000000u; // 802259F0
  c->r[6]=0u+0x00000001u; // 802259F4
  c->r[7]=0u+0x00000000u; // 802259F8
  c->r[8]=0u+0x00000000u; // 802259FC
  c->r[9]=0u+0x00000002u; // 80225A00
  c->lr=0x80225A08u; f_8020A1A0(c); // 80225A04
  c->r[3]=0u+0x00000005u; // 80225A08
  c->r[4]=0u+0x00000000u; // 80225A0C
  c->r[5]=0u+0x00000000u; // 80225A10
  c->r[6]=0u+0x00000000u; // 80225A14
  c->r[7]=0u+0x00000000u; // 80225A18
  c->r[8]=0u+0x00000000u; // 80225A1C
  c->r[9]=0u+0x00000002u; // 80225A20
  c->lr=0x80225A28u; f_8020A1A0(c); // 80225A24
  c->r[3]=0u+0x00000001u; // 80225A28
  c->lr=0x80225A30u; f_80208480(c); // 80225A2C
  c->r[3]=0u+0x00000000u; // 80225A30
  c->r[4]=0u+0x00000001u; // 80225A34
  c->r[5]=0u+0x00000004u; // 80225A38
  c->r[6]=0u+0x0000003Cu; // 80225A3C
  c->r[7]=0u+0x00000000u; // 80225A40
  c->r[8]=0u+0x0000007Du; // 80225A44
  c->lr=0x80225A4Cu; f_80208230(c); // 80225A48
  c->r[3]=0u+0x00000000u; // 80225A4C
  c->lr=0x80225A54u; f_8020B5A0(c); // 80225A50
  c->r[3]=0u+0x00000001u; // 80225A54
  c->r[4]=0u+0x00000004u; // 80225A58
  c->r[5]=0u+0x00000005u; // 80225A5C
  c->r[6]=0u+0x0000000Fu; // 80225A60
  c->lr=0x80225A68u; f_8020C090(c); // 80225A64
  c->r[3]=0u+0x00000001u; // 80225A68
  c->lr=0x80225A70u; f_8020BD20(c); // 80225A6C
  c->r[3]=0u+0x00000000u; // 80225A70
  c->lr=0x80225A78u; f_8020B5C0(c); // 80225A74
  c->r[3]=0u+0x00000000u; // 80225A78
  c->r[4]=0u+0x00000000u; // 80225A7C
  c->r[5]=0u+0x00000000u; // 80225A80
  c->lr=0x80225A88u; f_8020BA30(c); // 80225A84
  c->r[3]=0u+0x00000000u; // 80225A88
  c->r[4]=0u+0x00000000u; // 80225A8C
  c->r[5]=0u+0x00000000u; // 80225A90
  c->r[6]=0u+0x00000004u; // 80225A94
  c->lr=0x80225A9Cu; f_8020BBC0(c); // 80225A98
  c->r[3]=0u+0x00000000u; // 80225A9C
  c->r[4]=0u+0x00000000u; // 80225AA0
  c->lr=0x80225AA8u; f_8020B680(c); // 80225AA4
  c->r[3]=0u+0x00000000u; // 80225AA8
  c->r[4]=0u+0x00000009u; // 80225AAC
  c->r[5]=0u+0x00000001u; // 80225AB0
  c->r[6]=0u+0x00000004u; // 80225AB4
  c->r[7]=0u+0x00000000u; // 80225AB8
  c->lr=0x80225AC0u; f_80207B10(c); // 80225ABC
  c->r[3]=0u+0x00000000u; // 80225AC0
  c->r[4]=0u+0x0000000Bu; // 80225AC4
  c->r[5]=0u+0x00000001u; // 80225AC8
  c->r[6]=0u+0x00000005u; // 80225ACC
  c->r[7]=0u+0x00000000u; // 80225AD0
  c->lr=0x80225AD8u; f_80207B10(c); // 80225AD4
  c->r[3]=0u+0x00000000u; // 80225AD8
  c->r[4]=0u+0x0000000Du; // 80225ADC
  c->r[5]=0u+0x00000001u; // 80225AE0
  c->r[6]=0u+0x00000002u; // 80225AE4
  c->r[7]=0u+0x0000000Fu; // 80225AE8
  c->lr=0x80225AF0u; f_80207B10(c); // 80225AEC
  c->lr=0x80225AF4u; f_80207AD0(c); // 80225AF0
  c->r[3]=0u+0x00000009u; // 80225AF4
  c->r[4]=0u+0x00000001u; // 80225AF8
  c->lr=0x80225B00u; f_80207470(c); // 80225AFC
  c->r[3]=0u+0x0000000Bu; // 80225B00
  c->r[4]=0u+0x00000001u; // 80225B04
  c->lr=0x80225B0Cu; f_80207470(c); // 80225B08
  c->r[3]=0u+0x0000000Du; // 80225B0C
  c->r[4]=0u+0x00000001u; // 80225B10
  c->lr=0x80225B18u; f_80207470(c); // 80225B14
L_80225B18:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80225B18
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80225B1C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80225B20
  c->lr=c->r[0]; // 80225B24
  c->r[1]=c->r[1]+0x00000030u; // 80225B28
  return; // 80225B2C
}

// fn_80225B30
void f_80225B30(Ctx* __restrict c) {
  trace_call(0x80225B30u);
  c->r[0]=R8(c->r[4]+0x00000000u); // 80225B30
  W8(c->r[3]+0x00000000u,c->r[0]); // 80225B34
  c->r[0]=R8(c->r[4]+0x00000001u); // 80225B38
  W8(c->r[3]+0x00000001u,c->r[0]); // 80225B3C
  c->r[0]=R8(c->r[4]+0x00000002u); // 80225B40
  W8(c->r[3]+0x00000002u,c->r[0]); // 80225B44
  c->r[0]=R8(c->r[4]+0x00000003u); // 80225B48
  W8(c->r[3]+0x00000003u,c->r[0]); // 80225B4C
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225B50
  W8(c->r[3]+0x00000004u,c->r[0]); // 80225B54
  c->r[0]=R8(c->r[5]+0x00000001u); // 80225B58
  W8(c->r[3]+0x00000005u,c->r[0]); // 80225B5C
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225B60
  W8(c->r[3]+0x00000006u,c->r[0]); // 80225B64
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225B68
  W8(c->r[3]+0x00000007u,c->r[0]); // 80225B6C
  return; // 80225B70
}

// SetGradationMode__Q36nw4hbm2ut10CharWriterFQ46nw4hbm2ut10CharWriter13GradationMode
void f_80225B80(Ctx* __restrict c) {
  trace_call(0x80225B80u);
  c->r[7]=R8(c->r[3]+0x00000018u); // 80225B80
  cmps(c,0,(int32_t)c->r[4],1); // 80225B84
  c->r[6]=R8(c->r[3]+0x00000019u); // 80225B88
  c->r[5]=R8(c->r[3]+0x0000001Au); // 80225B8C
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 80225B90
  W32(c->r[3]+0x00000020u,c->r[4]); // 80225B94
  W8(c->r[3]+0x00000008u,c->r[7]); // 80225B98
  W8(c->r[3]+0x00000009u,c->r[6]); // 80225B9C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 80225BA0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 80225BA4
  if (crb(c,2)) { goto L_80225BB4; } // 80225BA8
  c->r[5]=c->r[3]+0x00000018u; // 80225BAC
  goto L_80225BB8; // 80225BB0
L_80225BB4:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225BB4
L_80225BB8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225BB8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80225BBC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225BC0
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225BC4
  W8(c->r[3]+0x0000000Du,c->r[4]); // 80225BC8
  cmps(c,0,(int32_t)c->r[0],2); // 80225BCC
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225BD0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80225BD4
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225BD8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80225BDC
  if (crb(c,2)) { goto L_80225BEC; } // 80225BE0
  c->r[5]=c->r[3]+0x00000018u; // 80225BE4
  goto L_80225BF0; // 80225BE8
L_80225BEC:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225BEC
L_80225BF0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225BF0
  W8(c->r[3]+0x00000010u,c->r[0]); // 80225BF4
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225BF8
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225BFC
  W8(c->r[3]+0x00000011u,c->r[4]); // 80225C00
  cmps(c,0,(int32_t)c->r[0],0); // 80225C04
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225C08
  W8(c->r[3]+0x00000012u,c->r[0]); // 80225C0C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225C10
  W8(c->r[3]+0x00000013u,c->r[0]); // 80225C14
  if (!crb(c,2)) { goto L_80225C24; } // 80225C18
  c->r[5]=c->r[3]+0x00000018u; // 80225C1C
  goto L_80225C28; // 80225C20
L_80225C24:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225C24
L_80225C28:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225C28
  c->r[4]=0u+0x80810000u; // 80225C2C
  W8(c->r[3]+0x00000014u,c->r[0]); // 80225C30
  c->r[10]=c->r[4]+0xFFFF8081u; // 80225C34
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80225C38
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225C3C
  W8(c->r[3]+0x00000015u,c->r[4]); // 80225C40
  c->r[7]=R8(c->r[3]+0x00000042u); // 80225C44
  c->r[4]=R8(c->r[5]+0x00000002u); // 80225C48
  W8(c->r[3]+0x00000016u,c->r[4]); // 80225C4C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80225C50
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 80225C54
  c->r[0]=R8(c->r[3]+0x00000013u); // 80225C58
  c->r[8]=R8(c->r[5]+0x00000003u); // 80225C5C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80225C60
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 80225C64
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 80225C68
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 80225C6C
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80225C70
  c->r[6]=c->r[8]+c->r[6]; // 80225C74
  c->r[8]=sraw(c,c->r[6],7); // 80225C78
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80225C7C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80225C80
  c->r[4]=c->r[7]+c->r[4]; // 80225C84
  c->r[7]=c->r[8]+c->r[9]; // 80225C88
  W8(c->r[3]+0x0000000Bu,c->r[7]); // 80225C8C
  c->r[7]=sraw(c,c->r[4],7); // 80225C90
  c->r[5]=c->r[6]+c->r[5]; // 80225C94
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 80225C98
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 80225C9C
  c->r[6]=c->r[7]+c->r[6]; // 80225CA0
  W8(c->r[3]+0x0000000Fu,c->r[6]); // 80225CA4
  c->r[5]=sraw(c,c->r[5],7); // 80225CA8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80225CAC
  c->r[0]=c->r[4]+c->r[0]; // 80225CB0
  c->r[0]=sraw(c,c->r[0],7); // 80225CB4
  c->r[5]=c->r[5]+c->r[6]; // 80225CB8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80225CBC
  W8(c->r[3]+0x00000013u,c->r[5]); // 80225CC0
  c->r[0]=c->r[0]+c->r[4]; // 80225CC4
  W8(c->r[3]+0x00000017u,c->r[0]); // 80225CC8
  return; // 80225CCC
}

// fn_80225CD0
void f_80225CD0(Ctx* __restrict c) {
  trace_call(0x80225CD0u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 80225CD0
  W8(c->r[3]+0x00000018u,c->r[8]); // 80225CD4
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225CD8
  c->r[7]=R8(c->r[4]+0x00000001u); // 80225CDC
  W8(c->r[3]+0x00000019u,c->r[7]); // 80225CE0
  cmps(c,0,(int32_t)c->r[0],1); // 80225CE4
  c->r[6]=R8(c->r[4]+0x00000002u); // 80225CE8
  W8(c->r[3]+0x0000001Au,c->r[6]); // 80225CEC
  c->r[4]=R8(c->r[4]+0x00000003u); // 80225CF0
  W8(c->r[3]+0x0000001Bu,c->r[4]); // 80225CF4
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225CF8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80225CFC
  c->r[0]=R8(c->r[5]+0x00000001u); // 80225D00
  W8(c->r[3]+0x0000001Du,c->r[0]); // 80225D04
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225D08
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 80225D0C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225D10
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 80225D14
  W8(c->r[3]+0x00000008u,c->r[8]); // 80225D18
  W8(c->r[3]+0x00000009u,c->r[7]); // 80225D1C
  W8(c->r[3]+0x0000000Au,c->r[6]); // 80225D20
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 80225D24
  if (crb(c,2)) { goto L_80225D34; } // 80225D28
  c->r[5]=c->r[3]+0x00000018u; // 80225D2C
  goto L_80225D38; // 80225D30
L_80225D34:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225D34
L_80225D38:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225D38
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80225D3C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225D40
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225D44
  W8(c->r[3]+0x0000000Du,c->r[4]); // 80225D48
  cmps(c,0,(int32_t)c->r[0],2); // 80225D4C
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225D50
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80225D54
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225D58
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80225D5C
  if (crb(c,2)) { goto L_80225D6C; } // 80225D60
  c->r[5]=c->r[3]+0x00000018u; // 80225D64
  goto L_80225D70; // 80225D68
L_80225D6C:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225D6C
L_80225D70:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225D70
  W8(c->r[3]+0x00000010u,c->r[0]); // 80225D74
  c->r[0]=R32(c->r[3]+0x00000020u); // 80225D78
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225D7C
  W8(c->r[3]+0x00000011u,c->r[4]); // 80225D80
  cmps(c,0,(int32_t)c->r[0],0); // 80225D84
  c->r[0]=R8(c->r[5]+0x00000002u); // 80225D88
  W8(c->r[3]+0x00000012u,c->r[0]); // 80225D8C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80225D90
  W8(c->r[3]+0x00000013u,c->r[0]); // 80225D94
  if (!crb(c,2)) { goto L_80225DA4; } // 80225D98
  c->r[5]=c->r[3]+0x00000018u; // 80225D9C
  goto L_80225DA8; // 80225DA0
L_80225DA4:;
  c->r[5]=c->r[3]+0x0000001Cu; // 80225DA4
L_80225DA8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 80225DA8
  c->r[4]=0u+0x80810000u; // 80225DAC
  W8(c->r[3]+0x00000014u,c->r[0]); // 80225DB0
  c->r[10]=c->r[4]+0xFFFF8081u; // 80225DB4
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80225DB8
  c->r[4]=R8(c->r[5]+0x00000001u); // 80225DBC
  W8(c->r[3]+0x00000015u,c->r[4]); // 80225DC0
  c->r[7]=R8(c->r[3]+0x00000042u); // 80225DC4
  c->r[4]=R8(c->r[5]+0x00000002u); // 80225DC8
  W8(c->r[3]+0x00000016u,c->r[4]); // 80225DCC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80225DD0
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 80225DD4
  c->r[0]=R8(c->r[3]+0x00000013u); // 80225DD8
  c->r[8]=R8(c->r[5]+0x00000003u); // 80225DDC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80225DE0
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 80225DE4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 80225DE8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 80225DEC
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 80225DF0
  c->r[6]=c->r[8]+c->r[6]; // 80225DF4
  c->r[8]=sraw(c,c->r[6],7); // 80225DF8
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 80225DFC
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 80225E00
  c->r[4]=c->r[7]+c->r[4]; // 80225E04
  c->r[7]=c->r[8]+c->r[9]; // 80225E08
  W8(c->r[3]+0x0000000Bu,c->r[7]); // 80225E0C
  c->r[7]=sraw(c,c->r[4],7); // 80225E10
  c->r[5]=c->r[6]+c->r[5]; // 80225E14
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 80225E18
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 80225E1C
  c->r[6]=c->r[7]+c->r[6]; // 80225E20
  W8(c->r[3]+0x0000000Fu,c->r[6]); // 80225E24
  c->r[5]=sraw(c,c->r[5],7); // 80225E28
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80225E2C
  c->r[0]=c->r[4]+c->r[0]; // 80225E30
  c->r[0]=sraw(c,c->r[0],7); // 80225E34
  c->r[5]=c->r[5]+c->r[6]; // 80225E38
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80225E3C
  W8(c->r[3]+0x00000013u,c->r[5]); // 80225E40
  c->r[0]=c->r[0]+c->r[4]; // 80225E44
  W8(c->r[3]+0x00000017u,c->r[0]); // 80225E48
  return; // 80225E4C
}

// GetScaleH__Q36nw4hbm2ut10CharWriterCFv
void f_80225E50(Ctx* __restrict c) {
  trace_call(0x80225E50u);
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80225E50
  return; // 80225E54
}

// GetScaleV__Q36nw4hbm2ut10CharWriterCFv
void f_80225E60(Ctx* __restrict c) {
  trace_call(0x80225E60u);
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80225E60
  return; // 80225E64
}

// SetFontSize__Q36nw4hbm2ut10CharWriterFff
void f_80225E70(Ctx* __restrict c) {
  trace_call(0x80225E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80225E70
  c->r[0]=c->lr; // 80225E74
  W32(c->r[1]+0x00000054u,c->r[0]); // 80225E78
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80225E7C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80225E80
  c->f[31]=c->f[2]; // 80225E84
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80225E88
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80225E8C
  c->f[30]=c->f[1]; // 80225E90
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80225E94
  W32(c->r[1]+0x00000028u,c->r[30]); // 80225E98
  W32(c->r[1]+0x00000024u,c->r[29]); // 80225E9C
  c->r[29]=c->r[3]|c->r[3]; // 80225EA0
  c->r[3]=R32(c->r[3]+0x00000048u); // 80225EA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80225EA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80225EAC
  c->ctr=c->r[12]; // 80225EB0
  if (true) { c->lr=0x80225EB8u; dispatch(c,c->ctr); } // 80225EB4
  c->r[0]=c->r[3]^0x80000000u; // 80225EB8
  c->r[31]=0u+0x43300000u; // 80225EBC
  c->r[30]=0u+0x80380000u; // 80225EC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80225EC4
  {uint32_t ea=c->r[30]+0xFFFFF8F8u; c->f[1]=RF64(ea);} // 80225EC8
  W32(c->r[1]+0x00000008u,c->r[31]); // 80225ECC
  c->r[3]=R32(c->r[29]+0x00000048u); // 80225ED0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80225ED4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80225ED8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80225EDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80225EE0
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[0]); // 80225EE4
  c->ctr=c->r[12]; // 80225EE8
  if (true) { c->lr=0x80225EF0u; dispatch(c,c->ctr); } // 80225EEC
  c->r[0]=c->r[3]^0x80000000u; // 80225EF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80225EF4
  {uint32_t ea=c->r[30]+0xFFFFF8F8u; c->f[1]=RF64(ea);} // 80225EF8
  W32(c->r[1]+0x00000010u,c->r[31]); // 80225EFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80225F00
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[31]);} // 80225F04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80225F08
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 80225F0C
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 80225F10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80225F14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80225F18
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80225F1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80225F20
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80225F24
  c->r[30]=R32(c->r[1]+0x00000028u); // 80225F28
  c->r[29]=R32(c->r[1]+0x00000024u); // 80225F2C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80225F30
  c->lr=c->r[0]; // 80225F34
  c->r[1]=c->r[1]+0x00000050u; // 80225F38
  return; // 80225F3C
}

// fn_80225F40
void f_80225F40(Ctx* __restrict c) {
  trace_call(0x80225F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80225F40
  c->r[0]=c->lr; // 80225F44
  W32(c->r[1]+0x00000024u,c->r[0]); // 80225F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80225F4C
  c->r[31]=c->r[3]|c->r[3]; // 80225F50
  c->r[3]=R32(c->r[3]+0x00000048u); // 80225F54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80225F58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80225F5C
  c->ctr=c->r[12]; // 80225F60
  if (true) { c->lr=0x80225F68u; dispatch(c,c->ctr); } // 80225F64
  c->r[3]=c->r[3]^0x80000000u; // 80225F68
  c->r[0]=0u+0x43300000u; // 80225F6C
  c->r[4]=0u+0x80380000u; // 80225F70
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80225F74
  {uint32_t ea=c->r[4]+0xFFFFF8F8u; c->f[2]=RF64(ea);} // 80225F78
  W32(c->r[1]+0x00000008u,c->r[0]); // 80225F7C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80225F80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80225F84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80225F88
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80225F8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80225F90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80225F94
  c->lr=c->r[0]; // 80225F98
  c->r[1]=c->r[1]+0x00000020u; // 80225F9C
  return; // 80225FA0
}

// fn_80225FB0
void f_80225FB0(Ctx* __restrict c) {
  trace_call(0x80225FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80225FB0
  c->r[0]=c->lr; // 80225FB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80225FB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80225FBC
  c->r[31]=c->r[3]|c->r[3]; // 80225FC0
  c->r[3]=R32(c->r[3]+0x00000048u); // 80225FC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80225FC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80225FCC
  c->ctr=c->r[12]; // 80225FD0
  if (true) { c->lr=0x80225FD8u; dispatch(c,c->ctr); } // 80225FD4
  c->r[3]=c->r[3]^0x80000000u; // 80225FD8
  c->r[0]=0u+0x43300000u; // 80225FDC
  c->r[4]=0u+0x80380000u; // 80225FE0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80225FE4
  {uint32_t ea=c->r[4]+0xFFFFF8F8u; c->f[2]=RF64(ea);} // 80225FE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80225FEC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80225FF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80225FF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80225FF8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80225FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80226000
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80226004
  c->lr=c->r[0]; // 80226008
  c->r[1]=c->r[1]+0x00000020u; // 8022600C
  return; // 80226010
}

// GetFontAscent__Q36nw4hbm2ut10CharWriterCFv
void f_80226020(Ctx* __restrict c) {
  trace_call(0x80226020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226020
  c->r[0]=c->lr; // 80226024
  W32(c->r[1]+0x00000024u,c->r[0]); // 80226028
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022602C
  c->r[31]=c->r[3]|c->r[3]; // 80226030
  c->r[3]=R32(c->r[3]+0x00000048u); // 80226034
  c->r[12]=R32(c->r[3]+0x00000000u); // 80226038
  c->r[12]=R32(c->r[12]+0x00000014u); // 8022603C
  c->ctr=c->r[12]; // 80226040
  if (true) { c->lr=0x80226048u; dispatch(c,c->ctr); } // 80226044
  c->r[3]=c->r[3]^0x80000000u; // 80226048
  c->r[0]=0u+0x43300000u; // 8022604C
  c->r[4]=0u+0x80380000u; // 80226050
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80226054
  {uint32_t ea=c->r[4]+0xFFFFF8F8u; c->f[2]=RF64(ea);} // 80226058
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022605C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80226060
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80226064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80226068
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8022606C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80226070
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80226074
  c->lr=c->r[0]; // 80226078
  c->r[1]=c->r[1]+0x00000020u; // 8022607C
  return; // 80226080
}

// IsWidthFixed__Q36nw4hbm2ut10CharWriterCFv
void f_80226090(Ctx* __restrict c) {
  trace_call(0x80226090u);
  c->r[3]=R8(c->r[3]+0x00000043u); // 80226090
  return; // 80226094
}

// GetFixedWidth__Q36nw4hbm2ut10CharWriterCFv
void f_802260A0(Ctx* __restrict c) {
  trace_call(0x802260A0u);
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802260A0
  return; // 802260A4
}

// Print__Q36nw4hbm2ut10CharWriterFUs
void f_802260B0(Ctx* __restrict c) {
  trace_call(0x802260B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802260B0
  c->r[0]=c->lr; // 802260B4
  c->r[5]=c->r[4]|c->r[4]; // 802260B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802260BC
  c->r[0]=0u+0x43300000u; // 802260C0
  c->r[4]=c->r[1]+0x00000008u; // 802260C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802260C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802260CC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802260D0
  c->r[31]=c->r[3]|c->r[3]; // 802260D4
  c->r[3]=R32(c->r[3]+0x00000048u); // 802260D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 802260DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802260E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 802260E4
  c->r[12]=R32(c->r[12]+0x00000050u); // 802260E8
  c->ctr=c->r[12]; // 802260EC
  if (true) { c->lr=0x802260F4u; dispatch(c,c->ctr); } // 802260F0
  c->r[0]=R8(c->r[31]+0x00000043u); // 802260F4
  cmps(c,0,(int32_t)c->r[0],0); // 802260F8
  if (crb(c,2)) { goto L_80226160; } // 802260FC
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80226100
  c->r[5]=0u+0x80380000u; // 80226104
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80226108
  c->r[3]=0u+0x80380000u; // 8022610C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80226110
  {uint32_t ea=c->r[5]+0xFFFFF8F8u; c->f[4]=RF64(ea);} // 80226114
  c->r[4]=c->r[4]^0x80000000u; // 80226118
  W32(c->r[1]+0x00000024u,c->r[4]); // 8022611C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80226120
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80226124
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80226128
  c->r[0]=c->r[0]^0x80000000u; // 8022612C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80226130
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 80226134
  {uint32_t ea=c->r[31]+0x00000044u; c->f[31]=c->ps1[31]=RF32(ea);} // 80226138
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8022613C
  {uint32_t ea=c->r[3]+0xFFFFF900u; c->f[1]=c->ps1[1]=RF32(ea);} // 80226140
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 80226144
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80226148
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[2]); // 8022614C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80226150
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80226154
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80226158
  goto L_802261A4; // 8022615C
L_80226160:;
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 80226160
  c->r[3]=0u+0x80380000u; // 80226164
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80226168
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8022616C
  {uint32_t ea=c->r[3]+0xFFFFF8F8u; c->f[3]=RF64(ea);} // 80226170
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80226174
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80226178
  c->r[3]=c->r[4]^0x80000000u; // 8022617C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80226180
  c->r[0]=c->r[0]^0x80000000u; // 80226184
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80226188
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8022618C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80226190
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80226194
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80226198
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 8022619C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802261A0
L_802261A4:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802261A4
  c->r[3]=c->r[31]|c->r[31]; // 802261A8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802261AC
  c->r[4]=c->r[1]+0x00000008u; // 802261B0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 802261B4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802261B8
  c->lr=0x802261C0u; f_80226260(c); // 802261BC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802261C0
  c->f[1]=c->f[31]; // 802261C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 802261C8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802261CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802261D0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802261D4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802261D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 802261DC
  c->lr=c->r[0]; // 802261E0
  c->r[1]=c->r[1]+0x00000050u; // 802261E4
  return; // 802261E8
}

// SetCursor__Q36nw4hbm2ut10CharWriterFff
void f_802261F0(Ctx* __restrict c) {
  trace_call(0x802261F0u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 802261F0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 802261F4
  return; // 802261F8
}

// SetCursorX__Q36nw4hbm2ut10CharWriterFf
void f_80226200(Ctx* __restrict c) {
  trace_call(0x80226200u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80226200
  return; // 80226204
}

// SetCursorY__Q36nw4hbm2ut10CharWriterFf
void f_80226210(Ctx* __restrict c) {
  trace_call(0x80226210u);
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80226210
  return; // 80226214
}

// MoveCursorX__Q36nw4hbm2ut10CharWriterFf
void f_80226220(Ctx* __restrict c) {
  trace_call(0x80226220u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80226220
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80226224
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80226228
  return; // 8022622C
}

// MoveCursorY__Q36nw4hbm2ut10CharWriterFf
void f_80226230(Ctx* __restrict c) {
  trace_call(0x80226230u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80226230
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80226234
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80226238
  return; // 8022623C
}

// GetCursorX__Q36nw4hbm2ut10CharWriterCFv
void f_80226240(Ctx* __restrict c) {
  trace_call(0x80226240u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80226240
  return; // 80226244
}

// GetCursorY__Q36nw4hbm2ut10CharWriterCFv
void f_80226250(Ctx* __restrict c) {
  trace_call(0x80226250u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80226250
  return; // 80226254
}

// PrintGlyph__Q36nw4hbm2ut10CharWriterFfffRCQ36nw4hbm2ut5Glyph
void f_80226260(Ctx* __restrict c) {
  trace_call(0x80226260u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226260
  c->r[0]=c->lr; // 80226264
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80226268
  c->r[11]=c->r[1]+0x00000070u; // 8022626C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80226270
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80226274
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80226278
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8022627C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80226280
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80226284
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 80226288
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 8022628C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 80226290
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 80226294
  c->lr=0x8022629Cu; f_800C2E40(c); // 80226298
  c->r[25]=R8(c->r[4]+0x00000005u); // 8022629C
  c->r[31]=0u+0x43300000u; // 802262A0
  c->r[6]=R16(c->r[4]+0x00000010u); // 802262A4
  c->r[11]=0u+0x00000000u; // 802262A8
  c->r[24]=R8(c->r[4]+0x00000007u); // 802262AC
  c->r[26]=0u+0x80380000u; // 802262B0
  c->r[0]=c->r[6]+c->r[25]; // 802262B4
  c->r[8]=R16(c->r[4]+0x00000012u); // 802262B8
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 802262BC
  c->r[6]=rotl(c->r[6],15)&0xFFFF8000u; // 802262C0
  c->r[7]=c->r[8]+c->r[24]; // 802262C4
  c->r[8]=rotl(c->r[8],15)&0xFFFF8000u; // 802262C8
  c->r[30]=divwu(c->r[6],c->r[5]); // 802262CC
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 802262D0
  c->r[27]=rotl(c->r[0],15)&0xFFFF8000u; // 802262D4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802262D8
  c->r[12]=rotl(c->r[7],15)&0xFFFF8000u; // 802262DC
  c->r[10]=R32(c->r[3]+0x00000038u); // 802262E0
  c->r[29]=divwu(c->r[8],c->r[6]); // 802262E4
  c->r[8]=0u+0x80490000u; // 802262E8
  c->r[7]=R32(c->r[8]+0x00001A50u); // 802262EC
  c->f[29]=c->f[3]; // 802262F0
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 802262F4
  c->f[27]=c->f[1]; // 802262F8
  c->r[28]=divwu(c->r[27],c->r[5]); // 802262FC
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[7]); // 80226300
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 80226304
  c->f[28]=c->f[2]; // 80226308
  {uint32_t ea=c->r[26]+0xFFFFF908u; c->f[5]=RF64(ea);} // 8022630C
  c->r[27]=c->r[3]|c->r[3]; // 80226310
  W32(c->r[1]+0x00000038u,c->r[31]); // 80226314
  c->r[7]=divwu(c->r[12],c->r[6]); // 80226318
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8022631C
  W32(c->r[1]+0x00000040u,c->r[31]); // 80226320
  c->r[31]=rotl(c->r[30],0)&0x0000FFFFu; // 80226324
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[5]); // 80226328
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022632C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[0]); // 80226330
  W32(c->r[1]+0x00000044u,c->r[24]); // 80226334
  c->r[30]=rotl(c->r[29],0)&0x0000FFFFu; // 80226338
  c->r[29]=rotl(c->r[28],0)&0x0000FFFFu; // 8022633C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 80226340
  c->r[28]=rotl(c->r[7],0)&0x0000FFFFu; // 80226344
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[4]); // 80226348
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022634C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 80226350
  W32(c->r[1]+0x00000008u,c->r[11]); // 80226354
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80226358
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8022635C
  W32(c->r[1]+0x00000010u,c->r[10]); // 80226360
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 80226364
  W32(c->r[1]+0x00000014u,c->r[9]); // 80226368
  if (!crb(c,2)) { goto L_80226398; } // 8022636C
  c->r[7]=c->r[8]+0x00001A50u; // 80226370
  c->r[3]=R32(c->r[7]+0x00000004u); // 80226374
  cmpu(c,0,c->r[0],c->r[3]); // 80226378
  if (!crb(c,2)) { goto L_80226398; } // 8022637C
  c->r[3]=R32(c->r[7]+0x00000008u); // 80226380
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[3]); // 80226384
  if (!crb(c,2)) { goto L_80226398; } // 80226388
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 8022638C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[3]); // 80226390
  if (crb(c,2)) { goto L_8022639C; } // 80226394
L_80226398:;
  c->r[11]=0u+0x00000001u; // 80226398
L_8022639C:;
  cmps(c,0,(int32_t)c->r[11],0); // 8022639C
  if (crb(c,2)) { goto L_80226420; } // 802263A0
  c->r[7]=R32(c->r[4]+0x00000008u); // 802263A4
  c->r[4]=c->r[0]|c->r[0]; // 802263A8
  c->r[3]=c->r[1]+0x00000018u; // 802263AC
  c->r[8]=0u+0x00000000u; // 802263B0
  c->r[9]=0u+0x00000000u; // 802263B4
  c->r[10]=0u+0x00000000u; // 802263B8
  c->lr=0x802263C0u; f_8020A310(c); // 802263BC
  c->r[3]=0u+0x80380000u; // 802263C0
  c->r[4]=R32(c->r[27]+0x00000038u); // 802263C4
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802263C8
  c->r[3]=c->r[1]+0x00000018u; // 802263CC
  c->r[5]=R32(c->r[27]+0x0000003Cu); // 802263D0
  c->r[6]=0u+0x00000000u; // 802263D4
  c->f[2]=c->f[1]; // 802263D8
  c->r[7]=0u+0x00000000u; // 802263DC
  c->f[3]=c->f[1]; // 802263E0
  c->r[8]=0u+0x00000000u; // 802263E4
  c->lr=0x802263ECu; f_8020A570(c); // 802263E8
  c->r[3]=c->r[1]+0x00000018u; // 802263EC
  c->r[4]=0u+0x00000000u; // 802263F0
  c->lr=0x802263F8u; f_8020A950(c); // 802263F4
  c->r[6]=0u+0x80490000u; // 802263F8
  c->r[7]=R32(c->r[1]+0x00000008u); // 802263FC
  c->r[4]=c->r[6]+0x00001A50u; // 80226400
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80226404
  c->r[3]=R32(c->r[1]+0x00000010u); // 80226408
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022640C
  W32(c->r[6]+0x00001A50u,c->r[7]); // 80226410
  W32(c->r[4]+0x00000004u,c->r[5]); // 80226414
  W32(c->r[4]+0x00000008u,c->r[3]); // 80226418
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8022641C
L_80226420:;
  c->r[3]=0u+0x00000080u; // 80226420
  c->r[4]=0u+0x00000000u; // 80226424
  c->r[5]=0u+0x00000004u; // 80226428
  c->lr=0x80226430u; f_80208FD0(c); // 8022642C
  c->r[3]=0u+0xCC010000u; // 80226430
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 80226434
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 80226438
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 8022643C
  c->r[0]=R32(c->r[27]+0x00000008u); // 80226440
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80226444
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 80226448
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 8022644C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 80226450
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 80226454
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80226458
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8022645C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80226460
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 80226464
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80226468
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 8022646C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 80226470
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80226474
  c->r[0]=R32(c->r[27]+0x00000014u); // 80226478
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8022647C
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 80226480
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 80226484
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 80226488
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 8022648C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 80226490
  c->r[0]=R32(c->r[27]+0x00000010u); // 80226494
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80226498
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 8022649C
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 802264A0
  c->r[11]=c->r[1]+0x00000070u; // 802264A4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 802264A8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 802264AC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 802264B0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 802264B4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 802264B8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 802264BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 802264C0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 802264C4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 802264C8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 802264CC
  c->lr=0x802264D4u; f_800C2E8C(c); // 802264D0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 802264D4
  c->lr=c->r[0]; // 802264D8
  c->r[1]=c->r[1]+0x000000C0u; // 802264DC
  return; // 802264E0
}

// SetupGXWithColorMapping__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_802264F0(Ctx* __restrict c) {
  trace_call(0x802264F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802264F0
  c->r[0]=c->lr; // 802264F4
  c->r[5]=0u+0x80490000u; // 802264F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802264FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80226500
  c->r[31]=c->r[4]|c->r[4]; // 80226504
  W32(c->r[1]+0x00000018u,c->r[30]); // 80226508
  c->r[30]=c->r[3]|c->r[3]; // 8022650C
  c->r[0]=R8(c->r[5]+0x00001A48u); // 80226510
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80226514
  if (!crb(c,2)) { goto L_80226530; } // 80226518
  c->r[3]=0u+0x80490000u; // 8022651C
  c->r[4]=0u+0x00000000u; // 80226520
  c->r[0]=0u+0x00000001u; // 80226524
  W32(c->r[3]+0x00001A4Cu,c->r[4]); // 80226528
  W8(c->r[5]+0x00001A48u,c->r[0]); // 8022652C
L_80226530:;
  c->r[3]=0u+0x80380000u; // 80226530
  c->r[4]=0u+0x80490000u; // 80226534
  {uint32_t ea=c->r[3]+0xFFFFF8F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80226538
  c->r[3]=0u+0x00000000u; // 8022653C
  c->r[0]=R32(c->r[4]+0x00001A4Cu); // 80226540
  c->r[4]=c->r[1]+0x00000008u; // 80226544
  c->f[2]=c->f[1]; // 80226548
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022654C
  c->f[3]=c->f[1]; // 80226550
  c->f[4]=c->f[1]; // 80226554
  c->lr=0x8022655Cu; f_8020BD50(c); // 80226558
  c->r[3]=0u+0x00000000u; // 8022655C
  c->r[4]=0u+0x00000000u; // 80226560
  c->r[5]=0u+0x00000001u; // 80226564
  c->r[6]=0u+0x00000002u; // 80226568
  c->r[7]=0u+0x00000003u; // 8022656C
  c->lr=0x80226574u; f_8020BA70(c); // 80226570
  c->r[3]=0u+0x00000000u; // 80226574
  c->r[4]=0u+0x00000011u; // 80226578
  c->r[5]=0u+0x00000000u; // 8022657C
  c->lr=0x80226584u; f_8020BB30(c); // 80226580
  c->r[3]=0u+0x00000001u; // 80226584
  c->lr=0x8022658Cu; f_8020A170(c); // 80226588
  c->r[3]=0u+0x00000004u; // 8022658C
  c->r[4]=0u+0x00000000u; // 80226590
  c->r[5]=0u+0x00000000u; // 80226594
  c->r[6]=0u+0x00000001u; // 80226598
  c->r[7]=0u+0x00000000u; // 8022659C
  c->r[8]=0u+0x00000000u; // 802265A0
  c->r[9]=0u+0x00000002u; // 802265A4
  c->lr=0x802265ACu; f_8020A1A0(c); // 802265A8
  c->r[3]=0u+0x00000005u; // 802265AC
  c->r[4]=0u+0x00000000u; // 802265B0
  c->r[5]=0u+0x00000000u; // 802265B4
  c->r[6]=0u+0x00000000u; // 802265B8
  c->r[7]=0u+0x00000000u; // 802265BC
  c->r[8]=0u+0x00000000u; // 802265C0
  c->r[9]=0u+0x00000002u; // 802265C4
  c->lr=0x802265CCu; f_8020A1A0(c); // 802265C8
  c->r[3]=0u+0x00000001u; // 802265CC
  c->lr=0x802265D4u; f_80208480(c); // 802265D0
  c->r[3]=0u+0x00000000u; // 802265D4
  c->r[4]=0u+0x00000001u; // 802265D8
  c->r[5]=0u+0x00000004u; // 802265DC
  c->r[6]=0u+0x0000003Cu; // 802265E0
  c->r[7]=0u+0x00000000u; // 802265E4
  c->r[8]=0u+0x0000007Du; // 802265E8
  c->lr=0x802265F0u; f_80208230(c); // 802265EC
  c->r[3]=0u+0x00000000u; // 802265F0
  c->lr=0x802265F8u; f_8020B5A0(c); // 802265F4
  c->r[3]=0u+0x00000001u; // 802265F8
  c->r[4]=0u+0x00000004u; // 802265FC
  c->r[5]=0u+0x00000005u; // 80226600
  c->r[6]=0u+0x0000000Fu; // 80226604
  c->lr=0x8022660Cu; f_8020C090(c); // 80226608
  c->r[3]=0u+0x00000002u; // 8022660C
  c->lr=0x80226614u; f_8020BD20(c); // 80226610
  c->r[3]=0u+0x00000000u; // 80226614
  c->lr=0x8022661Cu; f_8020B5C0(c); // 80226618
  c->r[3]=0u+0x00000001u; // 8022661C
  c->lr=0x80226624u; f_8020B5C0(c); // 80226620
  c->r[3]=0u+0x00000000u; // 80226624
  c->r[4]=0u+0x00000000u; // 80226628
  c->r[5]=0u+0x00000000u; // 8022662C
  c->lr=0x80226634u; f_8020BA30(c); // 80226630
  c->r[3]=0u+0x00000001u; // 80226634
  c->r[4]=0u+0x00000000u; // 80226638
  c->r[5]=0u+0x00000000u; // 8022663C
  c->lr=0x80226644u; f_8020BA30(c); // 80226640
  c->r[3]=0u+0x00000000u; // 80226644
  c->r[4]=0u+0x00000000u; // 80226648
  c->r[5]=0u+0x00000000u; // 8022664C
  c->r[6]=0u+0x000000FFu; // 80226650
  c->lr=0x80226658u; f_8020BBC0(c); // 80226654
  c->r[0]=R32(c->r[30]+0x00000000u); // 80226658
  c->r[4]=c->r[1]+0x00000010u; // 8022665C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80226660
  c->r[3]=0u+0x00000001u; // 80226664
  c->lr=0x8022666Cu; f_8020B860(c); // 80226668
  c->r[0]=R32(c->r[31]+0x00000000u); // 8022666C
  c->r[4]=c->r[1]+0x0000000Cu; // 80226670
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80226674
  c->r[3]=0u+0x00000002u; // 80226678
  c->lr=0x80226680u; f_8020B860(c); // 8022667C
  c->r[3]=0u+0x00000000u; // 80226680
  c->r[4]=0u+0x00000002u; // 80226684
  c->r[5]=0u+0x00000004u; // 80226688
  c->r[6]=0u+0x00000008u; // 8022668C
  c->r[7]=0u+0x0000000Fu; // 80226690
  c->lr=0x80226698u; f_8020B720(c); // 80226694
  c->r[3]=0u+0x00000000u; // 80226698
  c->r[4]=0u+0x00000001u; // 8022669C
  c->r[5]=0u+0x00000002u; // 802266A0
  c->r[6]=0u+0x00000004u; // 802266A4
  c->r[7]=0u+0x00000007u; // 802266A8
  c->lr=0x802266B0u; f_8020B760(c); // 802266AC
  c->r[3]=0u+0x00000000u; // 802266B0
  c->r[4]=0u+0x00000000u; // 802266B4
  c->r[5]=0u+0x00000000u; // 802266B8
  c->r[6]=0u+0x00000000u; // 802266BC
  c->r[7]=0u+0x00000001u; // 802266C0
  c->r[8]=0u+0x00000000u; // 802266C4
  c->lr=0x802266CCu; f_8020B7A0(c); // 802266C8
  c->r[3]=0u+0x00000000u; // 802266CC
  c->r[4]=0u+0x00000000u; // 802266D0
  c->r[5]=0u+0x00000000u; // 802266D4
  c->r[6]=0u+0x00000000u; // 802266D8
  c->r[7]=0u+0x00000001u; // 802266DC
  c->r[8]=0u+0x00000000u; // 802266E0
  c->lr=0x802266E8u; f_8020B800(c); // 802266E4
  c->r[3]=0u+0x00000001u; // 802266E8
  c->r[4]=0u+0x000000FFu; // 802266EC
  c->r[5]=0u+0x000000FFu; // 802266F0
  c->r[6]=0u+0x00000004u; // 802266F4
  c->lr=0x802266FCu; f_8020BBC0(c); // 802266F8
  c->r[3]=0u+0x00000001u; // 802266FC
  c->r[4]=0u+0x0000000Fu; // 80226700
  c->r[5]=0u+0x00000000u; // 80226704
  c->r[6]=0u+0x0000000Au; // 80226708
  c->r[7]=0u+0x0000000Fu; // 8022670C
  c->lr=0x80226714u; f_8020B720(c); // 80226710
  c->r[3]=0u+0x00000001u; // 80226714
  c->r[4]=0u+0x00000007u; // 80226718
  c->r[5]=0u+0x00000000u; // 8022671C
  c->r[6]=0u+0x00000005u; // 80226720
  c->r[7]=0u+0x00000007u; // 80226724
  c->lr=0x8022672Cu; f_8020B760(c); // 80226728
  c->r[3]=0u+0x00000001u; // 8022672C
  c->r[4]=0u+0x00000000u; // 80226730
  c->r[5]=0u+0x00000000u; // 80226734
  c->r[6]=0u+0x00000000u; // 80226738
  c->r[7]=0u+0x00000001u; // 8022673C
  c->r[8]=0u+0x00000000u; // 80226740
  c->lr=0x80226748u; f_8020B7A0(c); // 80226744
  c->r[3]=0u+0x00000001u; // 80226748
  c->r[4]=0u+0x00000000u; // 8022674C
  c->r[5]=0u+0x00000000u; // 80226750
  c->r[6]=0u+0x00000000u; // 80226754
  c->r[7]=0u+0x00000001u; // 80226758
  c->r[8]=0u+0x00000000u; // 8022675C
  c->lr=0x80226764u; f_8020B800(c); // 80226760
  c->r[3]=0u+0x00000000u; // 80226764
  c->r[4]=0u+0x00000009u; // 80226768
  c->r[5]=0u+0x00000001u; // 8022676C
  c->r[6]=0u+0x00000004u; // 80226770
  c->r[7]=0u+0x00000000u; // 80226774
  c->lr=0x8022677Cu; f_80207B10(c); // 80226778
  c->r[3]=0u+0x00000000u; // 8022677C
  c->r[4]=0u+0x0000000Bu; // 80226780
  c->r[5]=0u+0x00000001u; // 80226784
  c->r[6]=0u+0x00000005u; // 80226788
  c->r[7]=0u+0x00000000u; // 8022678C
  c->lr=0x80226794u; f_80207B10(c); // 80226790
  c->r[3]=0u+0x00000000u; // 80226794
  c->r[4]=0u+0x0000000Du; // 80226798
  c->r[5]=0u+0x00000001u; // 8022679C
  c->r[6]=0u+0x00000002u; // 802267A0
  c->r[7]=0u+0x0000000Fu; // 802267A4
  c->lr=0x802267ACu; f_80207B10(c); // 802267A8
  c->lr=0x802267B0u; f_80207AD0(c); // 802267AC
  c->r[3]=0u+0x00000009u; // 802267B0
  c->r[4]=0u+0x00000001u; // 802267B4
  c->lr=0x802267BCu; f_80207470(c); // 802267B8
  c->r[3]=0u+0x0000000Bu; // 802267BC
  c->r[4]=0u+0x00000001u; // 802267C0
  c->lr=0x802267C8u; f_80207470(c); // 802267C4
  c->r[3]=0u+0x0000000Du; // 802267C8
  c->r[4]=0u+0x00000001u; // 802267CC
  c->lr=0x802267D4u; f_80207470(c); // 802267D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802267D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802267D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802267DC
  c->lr=c->r[0]; // 802267E0
  c->r[1]=c->r[1]+0x00000020u; // 802267E4
  return; // 802267E8
}

// InitReaderFunc__Q36nw4hbm2ut4FontFQ36nw4hbm2ut12FontEncoding
void f_802267F0(Ctx* __restrict c) {
  trace_call(0x802267F0u);
  cmps(c,0,(int32_t)c->r[4],0); // 802267F0
  c->r[5]=0u+0x803B0000u; // 802267F4
  c->r[5]=c->r[5]+0xFFFF8CE8u; // 802267F8
  if (crb(c,2)) { goto L_80226814; } // 802267FC
  cmps(c,0,(int32_t)c->r[4],1); // 80226800
  if (crb(c,2)) { goto L_80226834; } // 80226804
  cmps(c,0,(int32_t)c->r[4],2); // 80226808
  if (crb(c,2)) { goto L_80226854; } // 8022680C
  goto L_80226874; // 80226810
L_80226814:;
  c->r[4]=c->r[5]+0x00000000u; // 80226814
  c->r[5]=R32(c->r[5]+0x00000000u); // 80226818
  c->r[0]=R32(c->r[4]+0x00000004u); // 8022681C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80226820
  W32(c->r[3]+0x00000004u,c->r[5]); // 80226824
  c->r[0]=R32(c->r[4]+0x00000008u); // 80226828
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8022682C
  return; // 80226830
L_80226834:;
  c->r[4]=c->r[5]+0x0000000Cu; // 80226834
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80226838
  c->r[0]=R32(c->r[4]+0x00000004u); // 8022683C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80226840
  W32(c->r[3]+0x00000004u,c->r[5]); // 80226844
  c->r[0]=R32(c->r[4]+0x00000008u); // 80226848
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8022684C
  return; // 80226850
L_80226854:;
  c->r[4]=c->r[5]+0x00000018u; // 80226854
  c->r[5]=R32(c->r[5]+0x00000018u); // 80226858
  c->r[0]=R32(c->r[4]+0x00000004u); // 8022685C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80226860
  W32(c->r[3]+0x00000004u,c->r[5]); // 80226864
  c->r[0]=R32(c->r[4]+0x00000008u); // 80226868
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8022686C
  return; // 80226870
L_80226874:;
  c->r[4]=c->r[5]+0x00000024u; // 80226874
  c->r[5]=R32(c->r[5]+0x00000024u); // 80226878
  c->r[0]=R32(c->r[4]+0x00000004u); // 8022687C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80226880
  W32(c->r[3]+0x00000004u,c->r[5]); // 80226884
  c->r[0]=R32(c->r[4]+0x00000008u); // 80226888
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8022688C
  return; // 80226890
}

// __dt__Q46nw4hbm2ut6detail12LinkListImplFv
void f_802268A0(Ctx* __restrict c) {
  trace_call(0x802268A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802268A0
  c->r[0]=c->lr; // 802268A4
  cmps(c,0,(int32_t)c->r[3],0); // 802268A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802268AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802268B0
  c->r[31]=c->r[3]|c->r[3]; // 802268B4
  if (crb(c,2)) { goto L_8022690C; } // 802268B8
  c->r[7]=R32(c->r[3]+0x00000004u); // 802268BC
  c->r[6]=c->r[3]+0x00000004u; // 802268C0
  c->r[0]=0u+0x00000000u; // 802268C4
  goto L_802268F4; // 802268C8
L_802268CC:;
  c->r[8]=R32(c->r[7]+0x00000000u); // 802268CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 802268D0
  W32(c->r[8]+0x00000004u,c->r[5]); // 802268D4
  W32(c->r[5]+0x00000000u,c->r[8]); // 802268D8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802268DC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802268E0
  W32(c->r[3]+0x00000000u,c->r[5]); // 802268E4
  W32(c->r[7]+0x00000000u,c->r[0]); // 802268E8
  W32(c->r[7]+0x00000004u,c->r[0]); // 802268EC
  c->r[7]=c->r[8]|c->r[8]; // 802268F0
L_802268F4:;
  cmpu(c,0,c->r[7],c->r[6]); // 802268F4
  if (!crb(c,2)) { IRQCHK(c); goto L_802268CC; } // 802268F8
  cmps(c,0,(int32_t)c->r[4],0); // 802268FC
  if (!crb(c,1)) { goto L_8022690C; } // 80226900
  c->r[3]=c->r[31]|c->r[31]; // 80226904
  c->lr=0x8022690Cu; f_800C2AC0(c); // 80226908
L_8022690C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022690C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80226910
  c->r[0]=R32(c->r[1]+0x00000014u); // 80226914
  c->lr=c->r[0]; // 80226918
  c->r[1]=c->r[1]+0x00000010u; // 8022691C
  return; // 80226920
}

// Erase__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8Iterator
void f_80226930(Ctx* __restrict c) {
  trace_call(0x80226930u);
  c->r[6]=R32(c->r[4]+0x00000000u); // 80226930
  c->r[0]=0u+0x00000000u; // 80226934
  c->r[5]=R32(c->r[6]+0x00000000u); // 80226938
  goto L_80226968; // 8022693C
L_80226940:;
  c->r[7]=R32(c->r[6]+0x00000000u); // 80226940
  c->r[4]=R32(c->r[6]+0x00000004u); // 80226944
  W32(c->r[7]+0x00000004u,c->r[4]); // 80226948
  W32(c->r[4]+0x00000000u,c->r[7]); // 8022694C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80226950
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80226954
  W32(c->r[3]+0x00000000u,c->r[4]); // 80226958
  W32(c->r[6]+0x00000000u,c->r[0]); // 8022695C
  W32(c->r[6]+0x00000004u,c->r[0]); // 80226960
  c->r[6]=c->r[7]|c->r[7]; // 80226964
L_80226968:;
  cmpu(c,0,c->r[6],c->r[5]); // 80226968
  if (!crb(c,2)) { IRQCHK(c); goto L_80226940; } // 8022696C
  c->r[3]=c->r[5]|c->r[5]; // 80226970
  return; // 80226974
}

// Insert__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8IteratorPQ36nw4hbm2ut12LinkListNode
void f_80226980(Ctx* __restrict c) {
  trace_call(0x80226980u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 80226980
  c->r[6]=R32(c->r[4]+0x00000004u); // 80226984
  W32(c->r[5]+0x00000004u,c->r[6]); // 80226988
  W32(c->r[5]+0x00000000u,c->r[4]); // 8022698C
  W32(c->r[4]+0x00000004u,c->r[5]); // 80226990
  W32(c->r[6]+0x00000000u,c->r[5]); // 80226994
  c->r[4]=R32(c->r[3]+0x00000000u); // 80226998
  c->r[0]=c->r[4]+0x00000001u; // 8022699C
  W32(c->r[3]+0x00000000u,c->r[0]); // 802269A0
  c->r[3]=c->r[5]|c->r[5]; // 802269A4
  return; // 802269A8
}

// List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
void f_802269B0(Ctx* __restrict c) {
  trace_call(0x802269B0u);
  c->r[0]=0u+0x00000000u; // 802269B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 802269B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802269B8
  W16(c->r[3]+0x00000008u,c->r[0]); // 802269BC
  W16(c->r[3]+0x0000000Au,c->r[4]); // 802269C0
  return; // 802269C4
}

// List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_802269D0(Ctx* __restrict c) {
  trace_call(0x802269D0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802269D0
  cmps(c,0,(int32_t)c->r[0],0); // 802269D4
  if (!crb(c,2)) { goto L_80226A08; } // 802269D8
  c->r[5]=R16(c->r[3]+0x0000000Au); // 802269DC
  c->r[0]=0u+0x00000000u; // 802269E0
  c->r[5]=c->r[4]+c->r[5]; // 802269E4
  W32(c->r[5]+0x00000004u,c->r[0]); // 802269E8
  W32(c->r[5]+0x00000000u,c->r[0]); // 802269EC
  c->r[5]=R16(c->r[3]+0x00000008u); // 802269F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802269F4
  c->r[0]=c->r[5]+0x00000001u; // 802269F8
  W32(c->r[3]+0x00000004u,c->r[4]); // 802269FC
  W16(c->r[3]+0x00000008u,c->r[0]); // 80226A00
  return; // 80226A04
L_80226A08:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 80226A08
  c->r[0]=0u+0x00000000u; // 80226A0C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80226A10
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 80226A14
  W32(c->r[6]+0x00000004u,c->r[0]); // 80226A18
  c->r[5]=R32(c->r[3]+0x00000004u); // 80226A1C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80226A20
  c->r[5]=c->r[5]+c->r[0]; // 80226A24
  W32(c->r[5]+0x00000004u,c->r[4]); // 80226A28
  c->r[5]=R16(c->r[3]+0x00000008u); // 80226A2C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80226A30
  c->r[0]=c->r[5]+0x00000001u; // 80226A34
  W16(c->r[3]+0x00000008u,c->r[0]); // 80226A38
  return; // 80226A3C
}

// List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_80226A40(Ctx* __restrict c) {
  trace_call(0x80226A40u);
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80226A40
  c->r[6]=c->r[4]+c->r[0]; // 80226A44
  c->r[4]=R32(c->r[4]+c->r[0]); // 80226A48
  cmps(c,0,(int32_t)c->r[4],0); // 80226A4C
  if (!crb(c,2)) { goto L_80226A60; } // 80226A50
  c->r[0]=R32(c->r[6]+0x00000004u); // 80226A54
  W32(c->r[3]+0x00000000u,c->r[0]); // 80226A58
  goto L_80226A6C; // 80226A5C
L_80226A60:;
  c->r[4]=c->r[4]+c->r[0]; // 80226A60
  c->r[0]=R32(c->r[6]+0x00000004u); // 80226A64
  W32(c->r[4]+0x00000004u,c->r[0]); // 80226A68
L_80226A6C:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 80226A6C
  cmps(c,0,(int32_t)c->r[5],0); // 80226A70
  if (!crb(c,2)) { goto L_80226A84; } // 80226A74
  c->r[0]=R32(c->r[6]+0x00000000u); // 80226A78
  W32(c->r[3]+0x00000004u,c->r[0]); // 80226A7C
  goto L_80226A90; // 80226A80
L_80226A84:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80226A84
  c->r[4]=R32(c->r[6]+0x00000000u); // 80226A88
  W32(c->r[5]+c->r[0],c->r[4]); // 80226A8C
L_80226A90:;
  c->r[0]=0u+0x00000000u; // 80226A90
  W32(c->r[6]+0x00000000u,c->r[0]); // 80226A94
  W32(c->r[6]+0x00000004u,c->r[0]); // 80226A98
  c->r[4]=R16(c->r[3]+0x00000008u); // 80226A9C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80226AA0
  W16(c->r[3]+0x00000008u,c->r[0]); // 80226AA4
  return; // 80226AA8
}

// List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
void f_80226AB0(Ctx* __restrict c) {
  trace_call(0x80226AB0u);
  cmps(c,0,(int32_t)c->r[4],0); // 80226AB0
  if (!crb(c,2)) { goto L_80226AC0; } // 80226AB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80226AB8
  return; // 80226ABC
L_80226AC0:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80226AC0
  c->r[3]=c->r[4]+c->r[0]; // 80226AC4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80226AC8
  return; // 80226ACC
}

// List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
void f_80226AD0(Ctx* __restrict c) {
  trace_call(0x80226AD0u);
  c->r[6]=0u+0x00000000u; // 80226AD0
  c->r[5]=0u+0x00000000u; // 80226AD4
  goto L_80226AF4; // 80226AD8
  c->r[0]=c->r[0]|0x00000000u; // 80226ADC
L_80226AE0:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 80226AE0
  if (!crb(c,2)) { goto L_80226AF0; } // 80226AE4
  c->r[3]=c->r[5]|c->r[5]; // 80226AE8
  return; // 80226AEC
L_80226AF0:;
  c->r[6]=c->r[6]+0x00000001u; // 80226AF0
L_80226AF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80226AF4
  if (crb(c,2)) { goto L_80226B0C; } // 80226AF8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80226AFC
  c->r[5]=c->r[5]+c->r[0]; // 80226B00
  c->r[5]=R32(c->r[5]+0x00000004u); // 80226B04
  goto L_80226B10; // 80226B08
L_80226B0C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80226B0C
L_80226B10:;
  cmps(c,0,(int32_t)c->r[5],0); // 80226B10
  if (!crb(c,2)) { IRQCHK(c); goto L_80226AE0; } // 80226B14
  c->r[3]=0u+0x00000000u; // 80226B18
  return; // 80226B1C
}

// __ct__Q36nw4hbm2ut7ResFontFv
void f_80226B20(Ctx* __restrict c) {
  trace_call(0x80226B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226B20
  c->r[0]=c->lr; // 80226B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80226B28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80226B2C
  c->r[31]=c->r[3]|c->r[3]; // 80226B30
  c->lr=0x80226B38u; f_80226E20(c); // 80226B34
  c->r[4]=0u+0x803B0000u; // 80226B38
  c->r[3]=c->r[31]|c->r[31]; // 80226B3C
  c->r[4]=c->r[4]+0xFFFF8D18u; // 80226B40
  W32(c->r[31]+0x00000000u,c->r[4]); // 80226B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80226B48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80226B4C
  c->lr=c->r[0]; // 80226B50
  c->r[1]=c->r[1]+0x00000010u; // 80226B54
  return; // 80226B58
}

// __dt__Q36nw4hbm2ut7ResFontFv
void f_80226B60(Ctx* __restrict c) {
  trace_call(0x80226B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226B60
  c->r[0]=c->lr; // 80226B64
  cmps(c,0,(int32_t)c->r[3],0); // 80226B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80226B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80226B70
  c->r[31]=c->r[4]|c->r[4]; // 80226B74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80226B78
  c->r[30]=c->r[3]|c->r[3]; // 80226B7C
  if (crb(c,2)) { goto L_80226B9C; } // 80226B80
  c->r[4]=0u+0x00000000u; // 80226B84
  c->lr=0x80226B8Cu; f_80226E70(c); // 80226B88
  cmps(c,0,(int32_t)c->r[31],0); // 80226B8C
  if (!crb(c,1)) { goto L_80226B9C; } // 80226B90
  c->r[3]=c->r[30]|c->r[30]; // 80226B94
  c->lr=0x80226B9Cu; f_800C2AC0(c); // 80226B98
L_80226B9C:;
  c->r[3]=c->r[30]|c->r[30]; // 80226B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80226BA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80226BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80226BA8
  c->lr=c->r[0]; // 80226BAC
  c->r[1]=c->r[1]+0x00000010u; // 80226BB0
  return; // 80226BB4
}

// SetResource__Q36nw4hbm2ut7ResFontFPv
void f_80226BC0(Ctx* __restrict c) {
  trace_call(0x80226BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226BC0
  c->r[0]=c->lr; // 80226BC4
  c->r[5]=0u+0x00000000u; // 80226BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80226BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80226BD0
  c->r[31]=c->r[4]|c->r[4]; // 80226BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80226BD8
  c->r[30]=c->r[3]|c->r[3]; // 80226BDC
  c->r[0]=R32(c->r[3]+0x00000010u); // 80226BE0
  cmps(c,0,(int32_t)c->r[0],0); // 80226BE4
  if (crb(c,2)) { goto L_80226BF4; } // 80226BE8
  c->r[3]=0u+0x00000000u; // 80226BEC
  goto L_80226CF0; // 80226BF0
L_80226BF4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80226BF4
  c->r[0]=c->r[3]+0xADBA0000u; // 80226BF8
  cmpu(c,0,c->r[0],0x00004E55u); // 80226BFC
  if (!crb(c,2)) { goto L_80226C48; } // 80226C00
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80226C04
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 80226C08
  c->r[4]=c->r[4]+c->r[0]; // 80226C0C
  c->ctr=c->r[3]; // 80226C10
  cmps(c,0,(int32_t)c->r[3],0); // 80226C14
  if (!crb(c,1)) { goto L_80226CB0; } // 80226C18
  c->r[0]=c->r[0]|0x00000000u; // 80226C1C
L_80226C20:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80226C20
  c->r[0]=c->r[3]+0xB9B70000u; // 80226C24
  cmpu(c,0,c->r[0],0x00004E46u); // 80226C28
  if (!crb(c,2)) { goto L_80226C38; } // 80226C2C
  c->r[5]=c->r[4]+0x00000008u; // 80226C30
  goto L_80226CB0; // 80226C34
L_80226C38:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80226C38
  c->r[4]=c->r[4]+c->r[0]; // 80226C3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80226C20; } // 80226C40
  goto L_80226CB0; // 80226C44
L_80226C48:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 80226C48
  cmpu(c,0,c->r[0],0x00000104u); // 80226C4C
  if (!crb(c,2)) { goto L_80226C7C; } // 80226C50
  c->r[4]=0u+0x52460000u; // 80226C54
  c->r[3]=c->r[31]|c->r[31]; // 80226C58
  c->r[4]=c->r[4]+0x00004E54u; // 80226C5C
  c->r[5]=0u+0x00000104u; // 80226C60
  c->r[6]=0u+0x00000002u; // 80226C64
  c->lr=0x80226C6Cu; f_80224C50(c); // 80226C68
  cmps(c,0,(int32_t)c->r[3],0); // 80226C6C
  if (!crb(c,2)) { goto L_80226CA4; } // 80226C70
  c->r[3]=0u+0x00000000u; // 80226C74
  goto L_80226CF0; // 80226C78
L_80226C7C:;
  c->r[4]=0u+0x52460000u; // 80226C7C
  c->r[3]=c->r[31]|c->r[31]; // 80226C80
  c->r[4]=c->r[4]+0x00004E54u; // 80226C84
  c->r[5]=0u+0x00000102u; // 80226C88
  c->r[6]=0u+0x00000002u; // 80226C8C
  c->lr=0x80226C94u; f_80224C50(c); // 80226C90
  cmps(c,0,(int32_t)c->r[3],0); // 80226C94
  if (!crb(c,2)) { goto L_80226CA4; } // 80226C98
  c->r[3]=0u+0x00000000u; // 80226C9C
  goto L_80226CF0; // 80226CA0
L_80226CA4:;
  c->r[3]=c->r[31]|c->r[31]; // 80226CA4
  c->lr=0x80226CACu; f_80226D10(c); // 80226CA8
  c->r[5]=c->r[3]|c->r[3]; // 80226CAC
L_80226CB0:;
  cmps(c,0,(int32_t)c->r[5],0); // 80226CB0
  if (!crb(c,2)) { goto L_80226CC0; } // 80226CB4
  c->r[3]=0u+0x00000000u; // 80226CB8
  goto L_80226CF0; // 80226CBC
L_80226CC0:;
  c->r[3]=c->r[30]|c->r[30]; // 80226CC0
  c->r[4]=c->r[31]|c->r[31]; // 80226CC4
  c->lr=0x80226CCCu; f_80226EB0(c); // 80226CC8
  c->r[12]=R32(c->r[30]+0x00000000u); // 80226CCC
  c->r[3]=c->r[30]|c->r[30]; // 80226CD0
  c->r[12]=R32(c->r[12]+0x00000054u); // 80226CD4
  c->ctr=c->r[12]; // 80226CD8
  if (true) { c->lr=0x80226CE0u; dispatch(c,c->ctr); } // 80226CDC
  c->r[4]=c->r[3]|c->r[3]; // 80226CE0
  c->r[3]=c->r[30]|c->r[30]; // 80226CE4
  c->lr=0x80226CECu; f_802267F0(c); // 80226CE8
  c->r[3]=0u+0x00000001u; // 80226CEC
L_80226CF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80226CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80226CF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80226CF8
  c->lr=c->r[0]; // 80226CFC
  c->r[1]=c->r[1]+0x00000010u; // 80226D00
  return; // 80226D04
}

// Rebuild__Q36nw4hbm2ut7ResFontFPQ36nw4hbm2ut16BinaryFileHeader
void f_80226D10(Ctx* __restrict c) {
  trace_call(0x80226D10u);
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 80226D10
  c->r[6]=0u+0x00000000u; // 80226D14
  c->r[7]=0u+0x00000000u; // 80226D18
  c->r[5]=c->r[3]+c->r[0]; // 80226D1C
  goto L_80226DFC; // 80226D20
  c->r[0]=c->r[0]|0x00000000u; // 80226D24
L_80226D28:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 80226D28
  c->r[0]=c->r[4]+0xB9B70000u; // 80226D2C
  cmpu(c,0,c->r[0],0x00004E46u); // 80226D30
  if (crb(c,2)) { goto L_80226D6C; } // 80226D34
  c->r[0]=c->r[4]+0xABB90000u; // 80226D38
  cmpu(c,0,c->r[0],0x00004C50u); // 80226D3C
  if (crb(c,2)) { goto L_80226DA8; } // 80226D40
  c->r[0]=c->r[4]+0xBCA90000u; // 80226D44
  cmpu(c,0,c->r[0],0x00004448u); // 80226D48
  if (crb(c,2)) { goto L_80226DB8; } // 80226D4C
  c->r[0]=c->r[4]+0xBCB30000u; // 80226D50
  cmpu(c,0,c->r[0],0x00004150u); // 80226D54
  if (crb(c,2)) { goto L_80226DD0; } // 80226D58
  c->r[0]=c->r[4]+0xB8B40000u; // 80226D5C
  cmpu(c,0,c->r[0],0x00004752u); // 80226D60
  if (crb(c,2)) { goto L_80226DF0; } // 80226D64
  goto L_80226DE8; // 80226D68
L_80226D6C:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 80226D6C
  c->r[6]=c->r[5]+0x00000008u; // 80226D70
  c->r[0]=c->r[3]+c->r[0]; // 80226D74
  W32(c->r[5]+0x00000010u,c->r[0]); // 80226D78
  c->r[0]=R32(c->r[5]+0x00000014u); // 80226D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80226D80
  if (crb(c,2)) { goto L_80226D90; } // 80226D84
  c->r[0]=c->r[3]+c->r[0]; // 80226D88
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80226D8C
L_80226D90:;
  c->r[0]=R32(c->r[6]+0x00000010u); // 80226D90
  cmps(c,0,(int32_t)c->r[0],0); // 80226D94
  if (crb(c,2)) { goto L_80226DF0; } // 80226D98
  c->r[0]=c->r[3]+c->r[0]; // 80226D9C
  W32(c->r[6]+0x00000010u,c->r[0]); // 80226DA0
  goto L_80226DF0; // 80226DA4
L_80226DA8:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80226DA8
  c->r[0]=c->r[3]+c->r[0]; // 80226DAC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80226DB0
  goto L_80226DF0; // 80226DB4
L_80226DB8:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80226DB8
  cmps(c,0,(int32_t)c->r[0],0); // 80226DBC
  if (crb(c,2)) { goto L_80226DF0; } // 80226DC0
  c->r[0]=c->r[3]+c->r[0]; // 80226DC4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80226DC8
  goto L_80226DF0; // 80226DCC
L_80226DD0:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 80226DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80226DD4
  if (crb(c,2)) { goto L_80226DF0; } // 80226DD8
  c->r[0]=c->r[3]+c->r[0]; // 80226DDC
  W32(c->r[5]+0x00000010u,c->r[0]); // 80226DE0
  goto L_80226DF0; // 80226DE4
L_80226DE8:;
  c->r[3]=0u+0x00000000u; // 80226DE8
  return; // 80226DEC
L_80226DF0:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80226DF0
  c->r[7]=c->r[7]+0x00000001u; // 80226DF4
  c->r[5]=c->r[5]+c->r[0]; // 80226DF8
L_80226DFC:;
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 80226DFC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80226E00
  if (crb(c,0)) { IRQCHK(c); goto L_80226D28; } // 80226E04
  c->r[4]=0u+0x52460000u; // 80226E08
  c->r[0]=c->r[4]+0x00004E55u; // 80226E0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80226E10
  c->r[3]=c->r[6]|c->r[6]; // 80226E14
  return; // 80226E18
}

// __ct__Q46nw4hbm2ut6detail11ResFontBaseFv
void f_80226E20(Ctx* __restrict c) {
  trace_call(0x80226E20u);
  c->r[4]=0u+0x803B0000u; // 80226E20
  c->r[7]=0u+0x803B0000u; // 80226E24
  c->r[4]=c->r[4]+0xFFFF8E60u; // 80226E28
  W32(c->r[3]+0x00000000u,c->r[4]); // 80226E2C
  c->r[4]=0u+0x803B0000u; // 80226E30
  c->r[0]=0u+0x00000000u; // 80226E34
  {uint32_t ea=c->r[7]+0xFFFF8DF8u; c->r[6]=R32(ea); c->r[7]=ea;} // 80226E38
  c->r[4]=c->r[4]+0xFFFF8E08u; // 80226E3C
  c->r[5]=R32(c->r[7]+0x00000004u); // 80226E40
  W32(c->r[3]+0x00000008u,c->r[5]); // 80226E44
  W32(c->r[3]+0x00000004u,c->r[6]); // 80226E48
  c->r[5]=R32(c->r[7]+0x00000008u); // 80226E4C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80226E50
  W32(c->r[3]+0x00000000u,c->r[4]); // 80226E54
  W32(c->r[3]+0x00000010u,c->r[0]); // 80226E58
  W32(c->r[3]+0x00000014u,c->r[0]); // 80226E5C
  return; // 80226E60
}

// fn_80226E70
void f_80226E70(Ctx* __restrict c) {
  trace_call(0x80226E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226E70
  c->r[0]=c->lr; // 80226E74
  cmps(c,0,(int32_t)c->r[3],0); // 80226E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80226E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80226E80
  c->r[31]=c->r[3]|c->r[3]; // 80226E84
  if (crb(c,2)) { goto L_80226E98; } // 80226E88
  cmps(c,0,(int32_t)c->r[4],0); // 80226E8C
  if (!crb(c,1)) { goto L_80226E98; } // 80226E90
  c->lr=0x80226E98u; f_800C2AC0(c); // 80226E94
L_80226E98:;
  c->r[3]=c->r[31]|c->r[31]; // 80226E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80226E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80226EA0
  c->lr=c->r[0]; // 80226EA4
  c->r[1]=c->r[1]+0x00000010u; // 80226EA8
  return; // 80226EAC
}

// SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation
void f_80226EB0(Ctx* __restrict c) {
  trace_call(0x80226EB0u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 80226EB0
  W32(c->r[3]+0x00000014u,c->r[5]); // 80226EB4
  return; // 80226EB8
}

// fn_80226EC0
void f_80226EC0(Ctx* __restrict c) {
  trace_call(0x80226EC0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226EC0
  c->r[3]=R8(c->r[3]+0x00000015u); // 80226EC4
  return; // 80226EC8
}

// fn_80226ED0
void f_80226ED0(Ctx* __restrict c) {
  trace_call(0x80226ED0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226ED0
  c->r[3]=R8(c->r[3]+0x00000014u); // 80226ED4
  return; // 80226ED8
}

// fn_80226EE0
void f_80226EE0(Ctx* __restrict c) {
  trace_call(0x80226EE0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226EE0
  c->r[3]=R8(c->r[3]+0x00000016u); // 80226EE4
  return; // 80226EE8
}

// GetDescent__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226EF0(Ctx* __restrict c) {
  trace_call(0x80226EF0u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 80226EF0
  c->r[3]=R8(c->r[4]+0x00000016u); // 80226EF4
  c->r[0]=R8(c->r[4]+0x00000014u); // 80226EF8
  c->r[3]=c->r[0]-c->r[3]; // 80226EFC
  return; // 80226F00
}

// GetBaselinePos__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F10(Ctx* __restrict c) {
  trace_call(0x80226F10u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F10
  c->r[3]=R32(c->r[3]+0x00000008u); // 80226F14
  c->r[3]=R8(c->r[3]+0x00000002u); // 80226F18
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80226F1C
  return; // 80226F20
}

// GetCellHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F30(Ctx* __restrict c) {
  trace_call(0x80226F30u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F30
  c->r[3]=R32(c->r[3]+0x00000008u); // 80226F34
  c->r[3]=R8(c->r[3]+0x00000001u); // 80226F38
  return; // 80226F3C
}

// GetCellWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F40(Ctx* __restrict c) {
  trace_call(0x80226F40u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F40
  c->r[3]=R32(c->r[3]+0x00000008u); // 80226F44
  c->r[3]=R8(c->r[3]+0x00000000u); // 80226F48
  return; // 80226F4C
}

// GetMaxCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F50(Ctx* __restrict c) {
  trace_call(0x80226F50u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F50
  c->r[3]=R32(c->r[3]+0x00000008u); // 80226F54
  c->r[3]=R8(c->r[3]+0x00000003u); // 80226F58
  return; // 80226F5C
}

// GetType__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F60(Ctx* __restrict c) {
  trace_call(0x80226F60u);
  c->r[3]=0u+0x00000002u; // 80226F60
  return; // 80226F64
}

// GetTextureFormat__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F70(Ctx* __restrict c) {
  trace_call(0x80226F70u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F70
  c->r[3]=R32(c->r[3]+0x00000008u); // 80226F74
  c->r[3]=R16(c->r[3]+0x0000000Au); // 80226F78
  return; // 80226F7C
}

// GetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F80(Ctx* __restrict c) {
  trace_call(0x80226F80u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226F80
  c->r[3]=R8(c->r[3]+0x00000001u); // 80226F84
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80226F88
  return; // 80226F8C
}

// GetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFv
void f_80226F90(Ctx* __restrict c) {
  trace_call(0x80226F90u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 80226F90
  c->r[0]=R16(c->r[4]+0x00000004u); // 80226F94
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 80226F98
  c->r[0]=R8(c->r[4]+0x00000006u); // 80226F9C
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 80226FA0
  return; // 80226FA4
}

// SetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseFRCQ36nw4hbm2ut10CharWidths
void f_80226FB0(Ctx* __restrict c) {
  trace_call(0x80226FB0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80226FB0
  c->r[0]=R8(c->r[4]+0x00000000u); // 80226FB4
  W8(c->r[3]+0x00000004u,c->r[0]); // 80226FB8
  c->r[0]=R8(c->r[4]+0x00000001u); // 80226FBC
  W8(c->r[3]+0x00000005u,c->r[0]); // 80226FC0
  c->r[0]=R8(c->r[4]+0x00000002u); // 80226FC4
  W8(c->r[3]+0x00000006u,c->r[0]); // 80226FC8
  return; // 80226FCC
}

// SetAlternateChar__Q46nw4hbm2ut6detail11ResFontBaseFUs
void f_80226FD0(Ctx* __restrict c) {
  trace_call(0x80226FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80226FD0
  c->r[0]=c->lr; // 80226FD4
  c->r[5]=c->r[4]|c->r[4]; // 80226FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80226FDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80226FE0
  c->r[31]=c->r[3]|c->r[3]; // 80226FE4
  c->r[6]=R32(c->r[3]+0x00000014u); // 80226FE8
  c->r[6]=R32(c->r[6]+0x00000010u); // 80226FEC
  goto L_80227028; // 80226FF0
  c->r[0]=c->r[0]|0x00000000u; // 80226FF4
L_80226FF8:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 80226FF8
  cmpu(c,0,c->r[0],c->r[4]); // 80226FFC
  if (crb(c,1)) { goto L_80227024; } // 80227000
  c->r[0]=R16(c->r[6]+0x00000002u); // 80227004
  cmpu(c,0,c->r[4],c->r[0]); // 80227008
  if (crb(c,1)) { goto L_80227024; } // 8022700C
  c->r[3]=c->r[31]|c->r[31]; // 80227010
  c->r[4]=c->r[6]|c->r[6]; // 80227014
  c->lr=0x8022701Cu; f_80227290(c); // 80227018
  c->r[5]=c->r[3]|c->r[3]; // 8022701C
  goto L_80227038; // 80227020
L_80227024:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 80227024
L_80227028:;
  cmps(c,0,(int32_t)c->r[6],0); // 80227028
  if (!crb(c,2)) { IRQCHK(c); goto L_80226FF8; } // 8022702C
  c->r[3]=0u+0x00010000u; // 80227030
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80227034
L_80227038:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 80227038
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8022703C
  if (crb(c,2)) { goto L_80227054; } // 80227040
  c->r[4]=R32(c->r[31]+0x00000014u); // 80227044
  c->r[3]=0u+0x00000001u; // 80227048
  W16(c->r[4]+0x00000002u,c->r[5]); // 8022704C
  goto L_80227058; // 80227050
L_80227054:;
  c->r[3]=0u+0x00000000u; // 80227054
L_80227058:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80227058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022705C
  c->lr=c->r[0]; // 80227060
  c->r[1]=c->r[1]+0x00000010u; // 80227064
  return; // 80227068
}

// SetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseFi
void f_80227070(Ctx* __restrict c) {
  trace_call(0x80227070u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80227070
  W8(c->r[3]+0x00000001u,c->r[4]); // 80227074
  return; // 80227078
}

// fn_80227080
void f_80227080(Ctx* __restrict c) {
  trace_call(0x80227080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227080
  c->r[0]=c->lr; // 80227084
  W32(c->r[1]+0x00000014u,c->r[0]); // 80227088
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022708C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80227090
  c->ctr=c->r[12]; // 80227094
  if (true) { c->lr=0x8022709Cu; dispatch(c,c->ctr); } // 80227098
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 8022709C
  W16(c->r[1]+0x00000008u,c->r[0]); // 802270A0
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 802270A4
  c->r[3]=c->r[0]|c->r[0]; // 802270A8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802270AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802270B0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802270B4
  c->lr=c->r[0]; // 802270B8
  c->r[1]=c->r[1]+0x00000010u; // 802270BC
  return; // 802270C0
}

// GetCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFUs
void f_802270D0(Ctx* __restrict c) {
  trace_call(0x802270D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802270D0
  c->r[0]=c->lr; // 802270D4
  c->r[5]=c->r[4]|c->r[4]; // 802270D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802270DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802270E0
  c->r[31]=c->r[3]|c->r[3]; // 802270E4
  c->r[6]=R32(c->r[3]+0x00000014u); // 802270E8
  c->r[6]=R32(c->r[6]+0x00000010u); // 802270EC
  goto L_80227124; // 802270F0
  c->r[0]=c->r[0]|0x00000000u; // 802270F4
L_802270F8:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 802270F8
  cmpu(c,0,c->r[0],c->r[4]); // 802270FC
  if (crb(c,1)) { goto L_80227120; } // 80227100
  c->r[0]=R16(c->r[6]+0x00000002u); // 80227104
  cmpu(c,0,c->r[4],c->r[0]); // 80227108
  if (crb(c,1)) { goto L_80227120; } // 8022710C
  c->r[3]=c->r[31]|c->r[31]; // 80227110
  c->r[4]=c->r[6]|c->r[6]; // 80227114
  c->lr=0x8022711Cu; f_80227290(c); // 80227118
  goto L_80227134; // 8022711C
L_80227120:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 80227120
L_80227124:;
  cmps(c,0,(int32_t)c->r[6],0); // 80227124
  if (!crb(c,2)) { IRQCHK(c); goto L_802270F8; } // 80227128
  c->r[3]=0u+0x00010000u; // 8022712C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80227130
L_80227134:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80227134
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80227138
  if (crb(c,2)) { goto L_80227144; } // 8022713C
  goto L_8022714C; // 80227140
L_80227144:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80227144
  c->r[3]=R16(c->r[3]+0x00000002u); // 80227148
L_8022714C:;
  c->r[6]=R32(c->r[31]+0x00000014u); // 8022714C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80227150
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 80227154
  goto L_80227194; // 80227158
  c->r[0]=c->r[0]|0x00000000u; // 8022715C
L_80227160:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 80227160
  cmpu(c,0,c->r[5],c->r[3]); // 80227164
  if (crb(c,1)) { goto L_80227190; } // 80227168
  c->r[0]=R16(c->r[4]+0x00000002u); // 8022716C
  cmpu(c,0,c->r[3],c->r[0]); // 80227170
  if (crb(c,1)) { goto L_80227190; } // 80227174
  c->r[3]=c->r[3]-c->r[5]; // 80227178
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8022717C
  c->r[0]=c->r[0]-c->r[3]; // 80227180
  c->r[3]=c->r[4]+c->r[0]; // 80227184
  c->r[4]=c->r[3]+0x00000008u; // 80227188
  goto L_802271A0; // 8022718C
L_80227190:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 80227190
L_80227194:;
  cmps(c,0,(int32_t)c->r[4],0); // 80227194
  if (!crb(c,2)) { IRQCHK(c); goto L_80227160; } // 80227198
  c->r[4]=c->r[6]+0x00000004u; // 8022719C
L_802271A0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 802271A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802271A4
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 802271A8
  c->r[0]=R8(c->r[4]+0x00000002u); // 802271AC
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 802271B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802271B4
  c->lr=c->r[0]; // 802271B8
  c->r[1]=c->r[1]+0x00000010u; // 802271BC
  return; // 802271C0
}

// GetGlyph__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
void f_802271D0(Ctx* __restrict c) {
  trace_call(0x802271D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802271D0
  c->r[0]=c->lr; // 802271D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802271D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802271DC
  c->r[31]=c->r[4]|c->r[4]; // 802271E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802271E4
  c->r[30]=c->r[3]|c->r[3]; // 802271E8
  c->r[6]=R32(c->r[3]+0x00000014u); // 802271EC
  c->r[4]=R32(c->r[6]+0x00000010u); // 802271F0
  goto L_80227224; // 802271F4
L_802271F8:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 802271F8
  cmpu(c,0,c->r[0],c->r[5]); // 802271FC
  if (crb(c,1)) { goto L_80227220; } // 80227200
  c->r[0]=R16(c->r[4]+0x00000002u); // 80227204
  cmpu(c,0,c->r[5],c->r[0]); // 80227208
  if (crb(c,1)) { goto L_80227220; } // 8022720C
  c->r[3]=c->r[30]|c->r[30]; // 80227210
  c->lr=0x80227218u; f_80227290(c); // 80227214
  c->r[5]=c->r[3]|c->r[3]; // 80227218
  goto L_80227234; // 8022721C
L_80227220:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 80227220
L_80227224:;
  cmps(c,0,(int32_t)c->r[4],0); // 80227224
  if (!crb(c,2)) { IRQCHK(c); goto L_802271F8; } // 80227228
  c->r[3]=0u+0x00010000u; // 8022722C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80227230
L_80227234:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 80227234
  c->r[3]=c->r[30]|c->r[30]; // 80227238
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8022723C
  c->r[4]=c->r[31]|c->r[31]; // 80227240
  if (crb(c,2)) { goto L_8022724C; } // 80227244
  goto L_80227254; // 80227248
L_8022724C:;
  c->r[5]=R32(c->r[30]+0x00000014u); // 8022724C
  c->r[5]=R16(c->r[5]+0x00000002u); // 80227250
L_80227254:;
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80227254
  c->lr=0x8022725Cu; f_80227360(c); // 80227258
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022725C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227260
  c->r[30]=R32(c->r[1]+0x00000008u); // 80227264
  c->lr=c->r[0]; // 80227268
  c->r[1]=c->r[1]+0x00000010u; // 8022726C
  return; // 80227270
}

// fn_80227280
void f_80227280(Ctx* __restrict c) {
  trace_call(0x80227280u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80227280
  c->r[3]=R8(c->r[3]+0x00000007u); // 80227284
  return; // 80227288
}

// FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
void f_80227290(Ctx* __restrict c) {
  trace_call(0x80227290u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 80227290
  c->r[3]=0u+0x00010000u; // 80227294
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80227298
  cmps(c,0,(int32_t)c->r[0],0); // 8022729C
  if (crb(c,2)) { goto L_802272B8; } // 802272A0
  cmps(c,0,(int32_t)c->r[0],1); // 802272A4
  if (crb(c,2)) { goto L_802272D0; } // 802272A8
  cmps(c,0,(int32_t)c->r[0],2); // 802272AC
  if (crb(c,2)) { goto L_802272E8; } // 802272B0
  return; // 802272B4
L_802272B8:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 802272B8
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 802272BC
  c->r[0]=c->r[5]-c->r[0]; // 802272C0
  c->r[0]=c->r[3]+c->r[0]; // 802272C4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 802272C8
  return; // 802272CC
L_802272D0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 802272D0
  c->r[0]=c->r[5]-c->r[0]; // 802272D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802272D8
  c->r[3]=c->r[4]+c->r[0]; // 802272DC
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 802272E0
  return; // 802272E4
L_802272E8:;
  c->r[6]=c->r[4]+0x0000000Cu; // 802272E8
  c->r[4]=R16(c->r[4]+0x0000000Cu); // 802272EC
  c->r[7]=c->r[6]+0x00000002u; // 802272F0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802272F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802272F8
  c->r[4]=c->r[6]+c->r[0]; // 802272FC
  c->r[6]=c->r[4]+0x00000002u; // 80227300
  goto L_80227350; // 80227304
L_80227308:;
  c->r[0]=c->r[6]-c->r[7]; // 80227308
  c->r[0]=sraw(c,c->r[0],2); // 8022730C
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80227310
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80227314
  c->r[0]=c->r[0]+c->r[4]; // 80227318
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 8022731C
  c->r[4]=c->r[7]+c->r[0]; // 80227320
  c->r[0]=R16(c->r[7]+c->r[0]); // 80227324
  cmpu(c,0,c->r[0],c->r[5]); // 80227328
  if (!crb(c,0)) { goto L_80227338; } // 8022732C
  c->r[7]=c->r[4]+0x00000004u; // 80227330
  goto L_80227350; // 80227334
L_80227338:;
  cmpu(c,0,c->r[5],c->r[0]); // 80227338
  if (!crb(c,0)) { goto L_80227348; } // 8022733C
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 80227340
  goto L_80227350; // 80227344
L_80227348:;
  c->r[3]=R16(c->r[4]+0x00000002u); // 80227348
  return; // 8022734C
L_80227350:;
  cmpu(c,0,c->r[7],c->r[6]); // 80227350
  if (!crb(c,1)) { IRQCHK(c); goto L_80227308; } // 80227354
  return; // 80227358
}

// GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
void f_80227360(Ctx* __restrict c) {
  trace_call(0x80227360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227360
  c->r[12]=R32(c->r[3]+0x00000014u); // 80227364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80227368
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022736C
  c->r[3]=R32(c->r[12]+0x00000008u); // 80227370
  c->r[31]=R16(c->r[3]+0x0000000Cu); // 80227374
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 80227378
  c->r[7]=R8(c->r[3]+0x00000000u); // 8022737C
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 80227380
  c->r[0]=R32(c->r[3]+0x00000004u); // 80227384
  c->r[6]=R8(c->r[3]+0x00000001u); // 80227388
  c->r[8]=c->r[7]+0x00000001u; // 8022738C
  c->r[7]=c->r[6]+0x00000001u; // 80227390
  c->r[6]=R32(c->r[3]+0x00000014u); // 80227394
  c->r[11]=divwu(c->r[5],c->r[9]); // 80227398
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 8022739C
  c->r[30]=c->r[5]-c->r[9]; // 802273A0
  c->r[10]=divwu(c->r[30],c->r[31]); // 802273A4
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[31]); // 802273A8
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 802273AC
  c->r[9]=c->r[30]-c->r[9]; // 802273B0
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 802273B4
  c->r[0]=c->r[6]+c->r[0]; // 802273B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802273BC
  c->r[6]=R32(c->r[12]+0x0000000Cu); // 802273C0
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 802273C4
  goto L_80227404; // 802273C8
  c->r[0]=c->r[0]|0x00000000u; // 802273CC
L_802273D0:;
  c->r[7]=R16(c->r[6]+0x00000000u); // 802273D0
  cmpu(c,0,c->r[7],c->r[5]); // 802273D4
  if (crb(c,1)) { goto L_80227400; } // 802273D8
  c->r[0]=R16(c->r[6]+0x00000002u); // 802273DC
  cmpu(c,0,c->r[5],c->r[0]); // 802273E0
  if (crb(c,1)) { goto L_80227400; } // 802273E4
  c->r[5]=c->r[5]-c->r[7]; // 802273E8
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802273EC
  c->r[0]=c->r[0]-c->r[5]; // 802273F0
  c->r[5]=c->r[6]+c->r[0]; // 802273F4
  c->r[7]=c->r[5]+0x00000008u; // 802273F8
  goto L_80227410; // 802273FC
L_80227400:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 80227400
L_80227404:;
  cmps(c,0,(int32_t)c->r[6],0); // 80227404
  if (!crb(c,2)) { IRQCHK(c); goto L_802273D0; } // 80227408
  c->r[7]=c->r[12]+0x00000004u; // 8022740C
L_80227410:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80227410
  c->r[5]=c->r[8]+0x00000001u; // 80227414
  W8(c->r[4]+0x00000004u,c->r[0]); // 80227418
  c->r[0]=c->r[9]+0x00000001u; // 8022741C
  c->r[6]=R8(c->r[7]+0x00000001u); // 80227420
  W8(c->r[4]+0x00000005u,c->r[6]); // 80227424
  c->r[6]=R8(c->r[7]+0x00000002u); // 80227428
  W8(c->r[4]+0x00000006u,c->r[6]); // 8022742C
  c->r[6]=R8(c->r[3]+0x00000001u); // 80227430
  W8(c->r[4]+0x00000007u,c->r[6]); // 80227434
  c->r[6]=R16(c->r[3]+0x0000000Au); // 80227438
  W32(c->r[4]+0x00000008u,c->r[6]); // 8022743C
  c->r[6]=R16(c->r[3]+0x00000010u); // 80227440
  W16(c->r[4]+0x0000000Cu,c->r[6]); // 80227444
  c->r[3]=R16(c->r[3]+0x00000012u); // 80227448
  W16(c->r[4]+0x0000000Eu,c->r[3]); // 8022744C
  W16(c->r[4]+0x00000010u,c->r[5]); // 80227450
  W16(c->r[4]+0x00000012u,c->r[0]); // 80227454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227458
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022745C
  c->r[1]=c->r[1]+0x00000010u; // 80227460
  return; // 80227464
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<c>Fv
void f_80227470(Ctx* __restrict c) {
  trace_call(0x80227470u);
  c->r[4]=0u+0x803B0000u; // 80227470
  c->r[4]=c->r[4]+0xFFFF8F00u; // 80227474
  W32(c->r[3]+0x00000000u,c->r[4]); // 80227478
  return; // 8022747C
}

// __dt__Q36nw4hbm2ut19TagProcessorBase<c>Fv
void f_80227480(Ctx* __restrict c) {
  trace_call(0x80227480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227480
  c->r[0]=c->lr; // 80227484
  cmps(c,0,(int32_t)c->r[3],0); // 80227488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022748C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80227490
  c->r[31]=c->r[3]|c->r[3]; // 80227494
  if (crb(c,2)) { goto L_802274A8; } // 80227498
  cmps(c,0,(int32_t)c->r[4],0); // 8022749C
  if (!crb(c,1)) { goto L_802274A8; } // 802274A0
  c->lr=0x802274A8u; f_800C2AC0(c); // 802274A4
L_802274A8:;
  c->r[3]=c->r[31]|c->r[31]; // 802274A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802274AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802274B0
  c->lr=c->r[0]; // 802274B4
  c->r[1]=c->r[1]+0x00000010u; // 802274B8
  return; // 802274BC
}

// fn_802274C0
void f_802274C0(Ctx* __restrict c) {
  trace_call(0x802274C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802274C0
  c->r[0]=c->lr; // 802274C4
  cmps(c,0,(int32_t)c->r[4],10); // 802274C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802274CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802274D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802274D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802274D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802274DC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802274E0
  W32(c->r[1]+0x00000028u,c->r[30]); // 802274E4
  W32(c->r[1]+0x00000024u,c->r[29]); // 802274E8
  c->r[29]=c->r[5]|c->r[5]; // 802274EC
  if (crb(c,2)) { goto L_80227500; } // 802274F0
  cmps(c,0,(int32_t)c->r[4],9); // 802274F4
  if (crb(c,2)) { goto L_80227534; } // 802274F8
  goto L_802275EC; // 802274FC
L_80227500:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 80227500
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227504
  c->r[3]=c->r[31]|c->r[31]; // 80227508
  c->lr=0x80227510u; f_80228090(c); // 8022750C
  c->f[31]=c->f[1]; // 80227510
  c->r[3]=c->r[31]|c->r[31]; // 80227514
  c->lr=0x8022751Cu; f_80226250(c); // 80227518
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8022751C
  c->r[3]=c->r[31]|c->r[31]; // 80227520
  c->f[1]=c->f[30]; // 80227524
  c->lr=0x8022752Cu; f_802261F0(c); // 80227528
  c->r[3]=0u+0x00000003u; // 8022752C
  goto L_802275F0; // 80227530
L_80227534:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 80227534
  c->r[3]=c->r[30]|c->r[30]; // 80227538
  c->lr=0x80227540u; f_80228170(c); // 8022753C
  cmps(c,0,(int32_t)c->r[3],0); // 80227540
  c->r[31]=c->r[3]|c->r[3]; // 80227544
  if (!crb(c,1)) { goto L_802275E4; } // 80227548
  c->r[3]=c->r[30]|c->r[30]; // 8022754C
  c->lr=0x80227554u; f_80226090(c); // 80227550
  cmps(c,0,(int32_t)c->r[3],0); // 80227554
  if (crb(c,2)) { goto L_8022756C; } // 80227558
  c->r[3]=c->r[30]|c->r[30]; // 8022755C
  c->lr=0x80227564u; f_802260A0(c); // 80227560
  c->f[31]=c->f[1]; // 80227564
  goto L_80227578; // 80227568
L_8022756C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022756C
  c->lr=0x80227574u; f_80225F40(c); // 80227570
  c->f[31]=c->f[1]; // 80227574
L_80227578:;
  c->r[3]=c->r[30]|c->r[30]; // 80227578
  c->lr=0x80227580u; f_80226240(c); // 8022757C
  c->r[0]=0u+0x43300000u; // 80227580
  c->r[3]=c->r[31]^0x80000000u; // 80227584
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80227588
  c->r[4]=0u+0x80380000u; // 8022758C
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227590
  c->r[3]=c->r[30]|c->r[30]; // 80227594
  W32(c->r[1]+0x00000008u,c->r[0]); // 80227598
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022759C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802275A0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 802275A4
  W32(c->r[1]+0x00000018u,c->r[0]); // 802275A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802275AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 802275B0
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 802275B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802275B8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802275BC
  c->r[4]=R32(c->r[1]+0x00000014u); // 802275C0
  c->r[0]=c->r[4]+0x00000001u; // 802275C4
  c->r[0]=c->r[0]^0x80000000u; // 802275C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802275CC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 802275D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802275D4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802275D8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 802275DC
  c->lr=0x802275E4u; f_80226200(c); // 802275E0
L_802275E4:;
  c->r[3]=0u+0x00000001u; // 802275E4
  goto L_802275F0; // 802275E8
L_802275EC:;
  c->r[3]=0u+0x00000000u; // 802275EC
L_802275F0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802275F0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802275F4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802275F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802275FC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80227600
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80227604
  c->r[30]=R32(c->r[1]+0x00000028u); // 80227608
  c->r[29]=R32(c->r[1]+0x00000024u); // 8022760C
  c->lr=c->r[0]; // 80227610
  c->r[1]=c->r[1]+0x00000050u; // 80227614
  return; // 80227618
}

// fn_80227620
void f_80227620(Ctx* __restrict c) {
  trace_call(0x80227620u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227620
  c->r[0]=c->lr; // 80227624
  W32(c->r[1]+0x00000064u,c->r[0]); // 80227628
  c->r[11]=c->r[1]+0x00000040u; // 8022762C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80227630
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80227634
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80227638
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8022763C
  c->lr=0x80227644u; f_800C2E4C(c); // 80227640
  cmps(c,0,(int32_t)c->r[5],10); // 80227644
  c->r[27]=c->r[4]|c->r[4]; // 80227648
  c->r[28]=c->r[6]|c->r[6]; // 8022764C
  if (crb(c,2)) { goto L_80227660; } // 80227650
  cmps(c,0,(int32_t)c->r[5],9); // 80227654
  if (crb(c,2)) { goto L_80227708; } // 80227658
  goto L_80227828; // 8022765C
L_80227660:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 80227660
  c->r[3]=c->r[30]|c->r[30]; // 80227664
  c->lr=0x8022766Cu; f_80226240(c); // 80227668
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8022766C
  c->r[3]=c->r[30]|c->r[30]; // 80227670
  c->lr=0x80227678u; f_80226250(c); // 80227674
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 80227678
  c->r[31]=R32(c->r[28]+0x00000000u); // 8022767C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227680
  c->r[3]=c->r[31]|c->r[31]; // 80227684
  c->lr=0x8022768Cu; f_80228090(c); // 80227688
  c->f[31]=c->f[1]; // 8022768C
  c->r[3]=c->r[31]|c->r[31]; // 80227690
  c->lr=0x80227698u; f_80226250(c); // 80227694
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 80227698
  c->r[3]=c->r[31]|c->r[31]; // 8022769C
  c->f[1]=c->f[30]; // 802276A0
  c->lr=0x802276A8u; f_802261F0(c); // 802276A4
  c->r[3]=c->r[30]|c->r[30]; // 802276A8
  c->lr=0x802276B0u; f_80226240(c); // 802276AC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 802276B0
  c->r[3]=R32(c->r[28]+0x00000000u); // 802276B4
  c->lr=0x802276BCu; f_80225FB0(c); // 802276B8
  c->f[31]=c->f[1]; // 802276BC
  c->r[3]=c->r[30]|c->r[30]; // 802276C0
  c->lr=0x802276C8u; f_80226250(c); // 802276C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 802276C8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 802276CC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 802276D0
  c->r[3]=0u+0x00000003u; // 802276D4
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802276D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 802276DC
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 802276E0
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 802276E4
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 802276E8
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 802276EC
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 802276F0
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 802276F4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 802276F8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 802276FC
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 80227700
  goto L_8022782C; // 80227704
L_80227708:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 80227708
  c->r[3]=c->r[29]|c->r[29]; // 8022770C
  c->lr=0x80227714u; f_80226240(c); // 80227710
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 80227714
  c->r[30]=R32(c->r[28]+0x00000000u); // 80227718
  c->r[3]=c->r[30]|c->r[30]; // 8022771C
  c->lr=0x80227724u; f_80228170(c); // 80227720
  cmps(c,0,(int32_t)c->r[3],0); // 80227724
  c->r[31]=c->r[3]|c->r[3]; // 80227728
  if (!crb(c,1)) { goto L_802277C8; } // 8022772C
  c->r[3]=c->r[30]|c->r[30]; // 80227730
  c->lr=0x80227738u; f_80226090(c); // 80227734
  cmps(c,0,(int32_t)c->r[3],0); // 80227738
  if (crb(c,2)) { goto L_80227750; } // 8022773C
  c->r[3]=c->r[30]|c->r[30]; // 80227740
  c->lr=0x80227748u; f_802260A0(c); // 80227744
  c->f[31]=c->f[1]; // 80227748
  goto L_8022775C; // 8022774C
L_80227750:;
  c->r[3]=c->r[30]|c->r[30]; // 80227750
  c->lr=0x80227758u; f_80225F40(c); // 80227754
  c->f[31]=c->f[1]; // 80227758
L_8022775C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022775C
  c->lr=0x80227764u; f_80226240(c); // 80227760
  c->r[0]=0u+0x43300000u; // 80227764
  c->r[3]=c->r[31]^0x80000000u; // 80227768
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8022776C
  c->r[4]=0u+0x80380000u; // 80227770
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227774
  c->r[3]=c->r[30]|c->r[30]; // 80227778
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022777C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80227780
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80227784
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 80227788
  W32(c->r[1]+0x00000018u,c->r[0]); // 8022778C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227790
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 80227794
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 80227798
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8022779C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802277A0
  c->r[4]=R32(c->r[1]+0x00000014u); // 802277A4
  c->r[0]=c->r[4]+0x00000001u; // 802277A8
  c->r[0]=c->r[0]^0x80000000u; // 802277AC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802277B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 802277B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802277B8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802277BC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 802277C0
  c->lr=0x802277C8u; f_80226200(c); // 802277C4
L_802277C8:;
  c->r[3]=c->r[29]|c->r[29]; // 802277C8
  c->lr=0x802277D0u; f_80226240(c); // 802277CC
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 802277D0
  c->r[3]=c->r[29]|c->r[29]; // 802277D4
  c->lr=0x802277DCu; f_80226250(c); // 802277D8
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 802277DC
  c->r[3]=c->r[29]|c->r[29]; // 802277E0
  c->lr=0x802277E8u; f_80225FB0(c); // 802277E4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802277E8
  c->r[3]=0u+0x00000001u; // 802277EC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 802277F0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 802277F4
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802277F8
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 802277FC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 80227800
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 80227804
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 80227808
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 8022780C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 80227810
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 80227814
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 80227818
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 8022781C
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 80227820
  goto L_8022782C; // 80227824
L_80227828:;
  c->r[3]=0u+0x00000000u; // 80227828
L_8022782C:;
  c->r[11]=c->r[1]+0x00000040u; // 8022782C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80227830
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80227834
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80227838
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8022783C
  c->lr=0x80227844u; f_800C2E98(c); // 80227840
  c->r[0]=R32(c->r[1]+0x00000064u); // 80227844
  c->lr=c->r[0]; // 80227848
  c->r[1]=c->r[1]+0x00000060u; // 8022784C
  return; // 80227850
}

// fn_80227860
void f_80227860(Ctx* __restrict c) {
  trace_call(0x80227860u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227860
  c->r[0]=c->lr; // 80227864
  W32(c->r[1]+0x00000034u,c->r[0]); // 80227868
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8022786C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80227870
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80227874
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80227878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022787C
  c->r[31]=R32(c->r[4]+0x00000000u); // 80227880
  {uint32_t ea=c->r[4]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227884
  c->r[3]=c->r[31]|c->r[31]; // 80227888
  c->lr=0x80227890u; f_80228090(c); // 8022788C
  c->f[31]=c->f[1]; // 80227890
  c->r[3]=c->r[31]|c->r[31]; // 80227894
  c->lr=0x8022789Cu; f_80226250(c); // 80227898
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 8022789C
  c->r[3]=c->r[31]|c->r[31]; // 802278A0
  c->f[1]=c->f[30]; // 802278A4
  c->lr=0x802278ACu; f_802261F0(c); // 802278A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802278AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802278B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802278B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 802278B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 802278BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802278C0
  c->lr=c->r[0]; // 802278C4
  c->r[1]=c->r[1]+0x00000030u; // 802278C8
  return; // 802278CC
}

// fn_802278D0
void f_802278D0(Ctx* __restrict c) {
  trace_call(0x802278D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802278D0
  c->r[0]=c->lr; // 802278D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802278D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802278DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802278E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802278E4
  W32(c->r[1]+0x00000028u,c->r[30]); // 802278E8
  W32(c->r[1]+0x00000024u,c->r[29]); // 802278EC
  c->r[29]=c->r[4]|c->r[4]; // 802278F0
  c->r[30]=R32(c->r[4]+0x00000000u); // 802278F4
  c->r[3]=c->r[30]|c->r[30]; // 802278F8
  c->lr=0x80227900u; f_80228170(c); // 802278FC
  cmps(c,0,(int32_t)c->r[3],0); // 80227900
  c->r[31]=c->r[3]|c->r[3]; // 80227904
  if (!crb(c,1)) { goto L_802279A4; } // 80227908
  c->r[3]=c->r[30]|c->r[30]; // 8022790C
  c->lr=0x80227914u; f_80226090(c); // 80227910
  cmps(c,0,(int32_t)c->r[3],0); // 80227914
  if (crb(c,2)) { goto L_8022792C; } // 80227918
  c->r[3]=c->r[30]|c->r[30]; // 8022791C
  c->lr=0x80227924u; f_802260A0(c); // 80227920
  c->f[31]=c->f[1]; // 80227924
  goto L_80227938; // 80227928
L_8022792C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022792C
  c->lr=0x80227934u; f_80225F40(c); // 80227930
  c->f[31]=c->f[1]; // 80227934
L_80227938:;
  c->r[3]=c->r[30]|c->r[30]; // 80227938
  c->lr=0x80227940u; f_80226240(c); // 8022793C
  c->r[0]=0u+0x43300000u; // 80227940
  c->r[3]=c->r[31]^0x80000000u; // 80227944
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80227948
  c->r[4]=0u+0x80380000u; // 8022794C
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227950
  c->r[3]=c->r[30]|c->r[30]; // 80227954
  W32(c->r[1]+0x00000008u,c->r[0]); // 80227958
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022795C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80227960
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80227964
  W32(c->r[1]+0x00000018u,c->r[0]); // 80227968
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022796C
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[31]); // 80227970
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[4]); // 80227974
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80227978
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8022797C
  c->r[4]=R32(c->r[1]+0x00000014u); // 80227980
  c->r[0]=c->r[4]+0x00000001u; // 80227984
  c->r[0]=c->r[0]^0x80000000u; // 80227988
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022798C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80227990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227994
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80227998
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 8022799C
  c->lr=0x802279A4u; f_80226200(c); // 802279A0
L_802279A4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802279A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802279A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802279AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802279B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802279B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 802279B8
  c->lr=c->r[0]; // 802279BC
  c->r[1]=c->r[1]+0x00000040u; // 802279C0
  return; // 802279C4
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<w>Fv
void f_802279D0(Ctx* __restrict c) {
  trace_call(0x802279D0u);
  c->r[4]=0u+0x803B0000u; // 802279D0
  c->r[4]=c->r[4]+0xFFFF8EB8u; // 802279D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802279D8
  return; // 802279DC
}

// __dt__Q36nw4hbm2ut19TagProcessorBase<w>Fv
void f_802279E0(Ctx* __restrict c) {
  trace_call(0x802279E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802279E0
  c->r[0]=c->lr; // 802279E4
  cmps(c,0,(int32_t)c->r[3],0); // 802279E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802279EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802279F0
  c->r[31]=c->r[3]|c->r[3]; // 802279F4
  if (crb(c,2)) { goto L_80227A08; } // 802279F8
  cmps(c,0,(int32_t)c->r[4],0); // 802279FC
  if (!crb(c,1)) { goto L_80227A08; } // 80227A00
  c->lr=0x80227A08u; f_800C2AC0(c); // 80227A04
L_80227A08:;
  c->r[3]=c->r[31]|c->r[31]; // 80227A08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80227A10
  c->lr=c->r[0]; // 80227A14
  c->r[1]=c->r[1]+0x00000010u; // 80227A18
  return; // 80227A1C
}

// fn_80227A20
void f_80227A20(Ctx* __restrict c) {
  trace_call(0x80227A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227A20
  c->r[0]=c->lr; // 80227A24
  cmps(c,0,(int32_t)c->r[4],10); // 80227A28
  W32(c->r[1]+0x00000054u,c->r[0]); // 80227A2C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80227A30
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80227A34
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80227A38
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80227A3C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80227A40
  W32(c->r[1]+0x00000028u,c->r[30]); // 80227A44
  W32(c->r[1]+0x00000024u,c->r[29]); // 80227A48
  c->r[29]=c->r[5]|c->r[5]; // 80227A4C
  if (crb(c,2)) { goto L_80227A60; } // 80227A50
  cmps(c,0,(int32_t)c->r[4],9); // 80227A54
  if (crb(c,2)) { goto L_80227A94; } // 80227A58
  goto L_80227B4C; // 80227A5C
L_80227A60:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 80227A60
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227A64
  c->r[3]=c->r[31]|c->r[31]; // 80227A68
  c->lr=0x80227A70u; f_8022AA50(c); // 80227A6C
  c->f[31]=c->f[1]; // 80227A70
  c->r[3]=c->r[31]|c->r[31]; // 80227A74
  c->lr=0x80227A7Cu; f_80226250(c); // 80227A78
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 80227A7C
  c->r[3]=c->r[31]|c->r[31]; // 80227A80
  c->f[1]=c->f[30]; // 80227A84
  c->lr=0x80227A8Cu; f_802261F0(c); // 80227A88
  c->r[3]=0u+0x00000003u; // 80227A8C
  goto L_80227B50; // 80227A90
L_80227A94:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 80227A94
  c->r[3]=c->r[30]|c->r[30]; // 80227A98
  c->lr=0x80227AA0u; f_8022AB30(c); // 80227A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80227AA0
  c->r[31]=c->r[3]|c->r[3]; // 80227AA4
  if (!crb(c,1)) { goto L_80227B44; } // 80227AA8
  c->r[3]=c->r[30]|c->r[30]; // 80227AAC
  c->lr=0x80227AB4u; f_80226090(c); // 80227AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80227AB4
  if (crb(c,2)) { goto L_80227ACC; } // 80227AB8
  c->r[3]=c->r[30]|c->r[30]; // 80227ABC
  c->lr=0x80227AC4u; f_802260A0(c); // 80227AC0
  c->f[31]=c->f[1]; // 80227AC4
  goto L_80227AD8; // 80227AC8
L_80227ACC:;
  c->r[3]=c->r[30]|c->r[30]; // 80227ACC
  c->lr=0x80227AD4u; f_80225F40(c); // 80227AD0
  c->f[31]=c->f[1]; // 80227AD4
L_80227AD8:;
  c->r[3]=c->r[30]|c->r[30]; // 80227AD8
  c->lr=0x80227AE0u; f_80226240(c); // 80227ADC
  c->r[0]=0u+0x43300000u; // 80227AE0
  c->r[3]=c->r[31]^0x80000000u; // 80227AE4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80227AE8
  c->r[4]=0u+0x80380000u; // 80227AEC
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227AF0
  c->r[3]=c->r[30]|c->r[30]; // 80227AF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80227AF8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80227AFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80227B00
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 80227B04
  W32(c->r[1]+0x00000018u,c->r[0]); // 80227B08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227B0C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 80227B10
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 80227B14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80227B18
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80227B1C
  c->r[4]=R32(c->r[1]+0x00000014u); // 80227B20
  c->r[0]=c->r[4]+0x00000001u; // 80227B24
  c->r[0]=c->r[0]^0x80000000u; // 80227B28
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80227B2C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80227B30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227B34
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80227B38
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80227B3C
  c->lr=0x80227B44u; f_80226200(c); // 80227B40
L_80227B44:;
  c->r[3]=0u+0x00000001u; // 80227B44
  goto L_80227B50; // 80227B48
L_80227B4C:;
  c->r[3]=0u+0x00000000u; // 80227B4C
L_80227B50:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80227B50
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80227B54
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80227B58
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80227B5C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80227B60
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80227B64
  c->r[30]=R32(c->r[1]+0x00000028u); // 80227B68
  c->r[29]=R32(c->r[1]+0x00000024u); // 80227B6C
  c->lr=c->r[0]; // 80227B70
  c->r[1]=c->r[1]+0x00000050u; // 80227B74
  return; // 80227B78
}

// fn_80227B80
void f_80227B80(Ctx* __restrict c) {
  trace_call(0x80227B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227B80
  c->r[0]=c->lr; // 80227B84
  W32(c->r[1]+0x00000064u,c->r[0]); // 80227B88
  c->r[11]=c->r[1]+0x00000040u; // 80227B8C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80227B90
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80227B94
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80227B98
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80227B9C
  c->lr=0x80227BA4u; f_800C2E4C(c); // 80227BA0
  cmps(c,0,(int32_t)c->r[5],10); // 80227BA4
  c->r[27]=c->r[4]|c->r[4]; // 80227BA8
  c->r[28]=c->r[6]|c->r[6]; // 80227BAC
  if (crb(c,2)) { goto L_80227BC0; } // 80227BB0
  cmps(c,0,(int32_t)c->r[5],9); // 80227BB4
  if (crb(c,2)) { goto L_80227C68; } // 80227BB8
  goto L_80227D88; // 80227BBC
L_80227BC0:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 80227BC0
  c->r[3]=c->r[30]|c->r[30]; // 80227BC4
  c->lr=0x80227BCCu; f_80226240(c); // 80227BC8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 80227BCC
  c->r[3]=c->r[30]|c->r[30]; // 80227BD0
  c->lr=0x80227BD8u; f_80226250(c); // 80227BD4
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 80227BD8
  c->r[31]=R32(c->r[28]+0x00000000u); // 80227BDC
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227BE0
  c->r[3]=c->r[31]|c->r[31]; // 80227BE4
  c->lr=0x80227BECu; f_8022AA50(c); // 80227BE8
  c->f[31]=c->f[1]; // 80227BEC
  c->r[3]=c->r[31]|c->r[31]; // 80227BF0
  c->lr=0x80227BF8u; f_80226250(c); // 80227BF4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 80227BF8
  c->r[3]=c->r[31]|c->r[31]; // 80227BFC
  c->f[1]=c->f[30]; // 80227C00
  c->lr=0x80227C08u; f_802261F0(c); // 80227C04
  c->r[3]=c->r[30]|c->r[30]; // 80227C08
  c->lr=0x80227C10u; f_80226240(c); // 80227C0C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 80227C10
  c->r[3]=R32(c->r[28]+0x00000000u); // 80227C14
  c->lr=0x80227C1Cu; f_80225FB0(c); // 80227C18
  c->f[31]=c->f[1]; // 80227C1C
  c->r[3]=c->r[30]|c->r[30]; // 80227C20
  c->lr=0x80227C28u; f_80226250(c); // 80227C24
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 80227C28
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80227C2C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80227C30
  c->r[3]=0u+0x00000003u; // 80227C34
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80227C38
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 80227C3C
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 80227C40
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 80227C44
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 80227C48
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 80227C4C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 80227C50
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 80227C54
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 80227C58
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 80227C5C
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 80227C60
  goto L_80227D8C; // 80227C64
L_80227C68:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 80227C68
  c->r[3]=c->r[29]|c->r[29]; // 80227C6C
  c->lr=0x80227C74u; f_80226240(c); // 80227C70
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 80227C74
  c->r[30]=R32(c->r[28]+0x00000000u); // 80227C78
  c->r[3]=c->r[30]|c->r[30]; // 80227C7C
  c->lr=0x80227C84u; f_8022AB30(c); // 80227C80
  cmps(c,0,(int32_t)c->r[3],0); // 80227C84
  c->r[31]=c->r[3]|c->r[3]; // 80227C88
  if (!crb(c,1)) { goto L_80227D28; } // 80227C8C
  c->r[3]=c->r[30]|c->r[30]; // 80227C90
  c->lr=0x80227C98u; f_80226090(c); // 80227C94
  cmps(c,0,(int32_t)c->r[3],0); // 80227C98
  if (crb(c,2)) { goto L_80227CB0; } // 80227C9C
  c->r[3]=c->r[30]|c->r[30]; // 80227CA0
  c->lr=0x80227CA8u; f_802260A0(c); // 80227CA4
  c->f[31]=c->f[1]; // 80227CA8
  goto L_80227CBC; // 80227CAC
L_80227CB0:;
  c->r[3]=c->r[30]|c->r[30]; // 80227CB0
  c->lr=0x80227CB8u; f_80225F40(c); // 80227CB4
  c->f[31]=c->f[1]; // 80227CB8
L_80227CBC:;
  c->r[3]=c->r[30]|c->r[30]; // 80227CBC
  c->lr=0x80227CC4u; f_80226240(c); // 80227CC0
  c->r[0]=0u+0x43300000u; // 80227CC4
  c->r[3]=c->r[31]^0x80000000u; // 80227CC8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80227CCC
  c->r[4]=0u+0x80380000u; // 80227CD0
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227CD4
  c->r[3]=c->r[30]|c->r[30]; // 80227CD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80227CDC
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80227CE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80227CE4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 80227CE8
  W32(c->r[1]+0x00000018u,c->r[0]); // 80227CEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227CF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 80227CF4
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 80227CF8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80227CFC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80227D00
  c->r[4]=R32(c->r[1]+0x00000014u); // 80227D04
  c->r[0]=c->r[4]+0x00000001u; // 80227D08
  c->r[0]=c->r[0]^0x80000000u; // 80227D0C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80227D10
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80227D14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227D18
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80227D1C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80227D20
  c->lr=0x80227D28u; f_80226200(c); // 80227D24
L_80227D28:;
  c->r[3]=c->r[29]|c->r[29]; // 80227D28
  c->lr=0x80227D30u; f_80226240(c); // 80227D2C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 80227D30
  c->r[3]=c->r[29]|c->r[29]; // 80227D34
  c->lr=0x80227D3Cu; f_80226250(c); // 80227D38
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 80227D3C
  c->r[3]=c->r[29]|c->r[29]; // 80227D40
  c->lr=0x80227D48u; f_80225FB0(c); // 80227D44
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80227D48
  c->r[3]=0u+0x00000001u; // 80227D4C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80227D50
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 80227D54
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80227D58
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 80227D5C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 80227D60
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 80227D64
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 80227D68
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 80227D6C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 80227D70
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 80227D74
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 80227D78
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 80227D7C
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 80227D80
  goto L_80227D8C; // 80227D84
L_80227D88:;
  c->r[3]=0u+0x00000000u; // 80227D88
L_80227D8C:;
  c->r[11]=c->r[1]+0x00000040u; // 80227D8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80227D90
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80227D94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80227D98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80227D9C
  c->lr=0x80227DA4u; f_800C2E98(c); // 80227DA0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80227DA4
  c->lr=c->r[0]; // 80227DA8
  c->r[1]=c->r[1]+0x00000060u; // 80227DAC
  return; // 80227DB0
}

// fn_80227DC0
void f_80227DC0(Ctx* __restrict c) {
  trace_call(0x80227DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227DC0
  c->r[0]=c->lr; // 80227DC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80227DC8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80227DCC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80227DD0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80227DD4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80227DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80227DDC
  c->r[31]=R32(c->r[4]+0x00000000u); // 80227DE0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 80227DE4
  c->r[3]=c->r[31]|c->r[31]; // 80227DE8
  c->lr=0x80227DF0u; f_8022AA50(c); // 80227DEC
  c->f[31]=c->f[1]; // 80227DF0
  c->r[3]=c->r[31]|c->r[31]; // 80227DF4
  c->lr=0x80227DFCu; f_80226250(c); // 80227DF8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 80227DFC
  c->r[3]=c->r[31]|c->r[31]; // 80227E00
  c->f[1]=c->f[30]; // 80227E04
  c->lr=0x80227E0Cu; f_802261F0(c); // 80227E08
  c->r[0]=R32(c->r[1]+0x00000034u); // 80227E0C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80227E10
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80227E14
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80227E18
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80227E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227E20
  c->lr=c->r[0]; // 80227E24
  c->r[1]=c->r[1]+0x00000030u; // 80227E28
  return; // 80227E2C
}

// fn_80227E30
void f_80227E30(Ctx* __restrict c) {
  trace_call(0x80227E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227E30
  c->r[0]=c->lr; // 80227E34
  W32(c->r[1]+0x00000044u,c->r[0]); // 80227E38
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80227E3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80227E40
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80227E44
  W32(c->r[1]+0x00000028u,c->r[30]); // 80227E48
  W32(c->r[1]+0x00000024u,c->r[29]); // 80227E4C
  c->r[29]=c->r[4]|c->r[4]; // 80227E50
  c->r[30]=R32(c->r[4]+0x00000000u); // 80227E54
  c->r[3]=c->r[30]|c->r[30]; // 80227E58
  c->lr=0x80227E60u; f_8022AB30(c); // 80227E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80227E60
  c->r[31]=c->r[3]|c->r[3]; // 80227E64
  if (!crb(c,1)) { goto L_80227F04; } // 80227E68
  c->r[3]=c->r[30]|c->r[30]; // 80227E6C
  c->lr=0x80227E74u; f_80226090(c); // 80227E70
  cmps(c,0,(int32_t)c->r[3],0); // 80227E74
  if (crb(c,2)) { goto L_80227E8C; } // 80227E78
  c->r[3]=c->r[30]|c->r[30]; // 80227E7C
  c->lr=0x80227E84u; f_802260A0(c); // 80227E80
  c->f[31]=c->f[1]; // 80227E84
  goto L_80227E98; // 80227E88
L_80227E8C:;
  c->r[3]=c->r[30]|c->r[30]; // 80227E8C
  c->lr=0x80227E94u; f_80225F40(c); // 80227E90
  c->f[31]=c->f[1]; // 80227E94
L_80227E98:;
  c->r[3]=c->r[30]|c->r[30]; // 80227E98
  c->lr=0x80227EA0u; f_80226240(c); // 80227E9C
  c->r[0]=0u+0x43300000u; // 80227EA0
  c->r[3]=c->r[31]^0x80000000u; // 80227EA4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80227EA8
  c->r[4]=0u+0x80380000u; // 80227EAC
  {uint32_t ea=c->r[4]+0xFFFFF910u; c->f[2]=RF64(ea);} // 80227EB0
  c->r[3]=c->r[30]|c->r[30]; // 80227EB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80227EB8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80227EBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80227EC0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80227EC4
  W32(c->r[1]+0x00000018u,c->r[0]); // 80227EC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227ECC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[31]); // 80227ED0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[4]); // 80227ED4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80227ED8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80227EDC
  c->r[4]=R32(c->r[1]+0x00000014u); // 80227EE0
  c->r[0]=c->r[4]+0x00000001u; // 80227EE4
  c->r[0]=c->r[0]^0x80000000u; // 80227EE8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80227EEC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80227EF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80227EF4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80227EF8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80227EFC
  c->lr=0x80227F04u; f_80226200(c); // 80227F00
L_80227F04:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80227F04
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80227F08
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80227F0C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80227F10
  c->r[30]=R32(c->r[1]+0x00000028u); // 80227F14
  c->r[29]=R32(c->r[1]+0x00000024u); // 80227F18
  c->lr=c->r[0]; // 80227F1C
  c->r[1]=c->r[1]+0x00000040u; // 80227F20
  return; // 80227F24
}

// fn_80227F30
void f_80227F30(Ctx* __restrict c) {
  trace_call(0x80227F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227F30
  c->r[0]=c->lr; // 80227F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80227F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80227F3C
  c->r[31]=c->r[3]|c->r[3]; // 80227F40
  c->lr=0x80227F48u; f_80224DF0(c); // 80227F44
  c->r[3]=0u+0x80380000u; // 80227F48
  c->r[4]=0u+0x80490000u; // 80227F4C
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 80227F50
  c->r[4]=c->r[4]+0x00001A7Cu; // 80227F54
  c->r[5]=0u+0x00000004u; // 80227F58
  c->r[0]=0u+0x00000000u; // 80227F5C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80227F60
  c->r[3]=c->r[31]|c->r[31]; // 80227F64
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 80227F68
  W32(c->r[31]+0x00000054u,c->r[5]); // 80227F6C
  W32(c->r[31]+0x00000058u,c->r[0]); // 80227F70
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 80227F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80227F7C
  c->lr=c->r[0]; // 80227F80
  c->r[1]=c->r[1]+0x00000010u; // 80227F84
  return; // 80227F88
}

// fn_80227F90
void f_80227F90(Ctx* __restrict c) {
  trace_call(0x80227F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227F90
  c->r[0]=c->lr; // 80227F94
  cmps(c,0,(int32_t)c->r[3],0); // 80227F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80227F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80227FA0
  c->r[31]=c->r[4]|c->r[4]; // 80227FA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80227FA8
  c->r[30]=c->r[3]|c->r[3]; // 80227FAC
  if (crb(c,2)) { goto L_80227FCC; } // 80227FB0
  c->r[4]=0u+0x00000000u; // 80227FB4
  c->lr=0x80227FBCu; f_80225180(c); // 80227FB8
  cmps(c,0,(int32_t)c->r[31],0); // 80227FBC
  if (!crb(c,1)) { goto L_80227FCC; } // 80227FC0
  c->r[3]=c->r[30]|c->r[30]; // 80227FC4
  c->lr=0x80227FCCu; f_800C2AC0(c); // 80227FC8
L_80227FCC:;
  c->r[3]=c->r[30]|c->r[30]; // 80227FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80227FD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80227FD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80227FD8
  c->lr=c->r[0]; // 80227FDC
  c->r[1]=c->r[1]+0x00000010u; // 80227FE0
  return; // 80227FE4
}

// fn_80227FF0
void f_80227FF0(Ctx* __restrict c) {
  trace_call(0x80227FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80227FF0
  c->r[0]=c->lr; // 80227FF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80227FF8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80227FFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80228000
  c->f[31]=c->f[1]; // 80228004
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80228008
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022800C
  c->r[30]=c->r[3]|c->r[3]; // 80228010
  c->lr=0x80228018u; f_802251D0(c); // 80228014
  cmps(c,0,(int32_t)c->r[3],0); // 80228018
  if (crb(c,2)) { goto L_80228038; } // 8022801C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80228020
  c->r[12]=R32(c->r[12]+0x00000034u); // 80228024
  c->ctr=c->r[12]; // 80228028
  if (true) { c->lr=0x80228030u; dispatch(c,c->ctr); } // 8022802C
  c->r[31]=c->r[3]|c->r[3]; // 80228030
  goto L_8022803C; // 80228034
L_80228038:;
  c->r[31]=0u+0x00000000u; // 80228038
L_8022803C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022803C
  c->lr=0x80228044u; f_80225E60(c); // 80228040
  c->r[3]=c->r[31]^0x80000000u; // 80228044
  c->r[0]=0u+0x43300000u; // 80228048
  c->r[4]=0u+0x80380000u; // 8022804C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80228050
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[2]=RF64(ea);} // 80228054
  W32(c->r[1]+0x00000008u,c->r[0]); // 80228058
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8022805C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80228060
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80228064
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 80228068
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8022806C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80228070
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80228074
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80228078
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022807C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80228080
  c->lr=c->r[0]; // 80228084
  c->r[1]=c->r[1]+0x00000030u; // 80228088
  return; // 8022808C
}

// fn_80228090
void f_80228090(Ctx* __restrict c) {
  trace_call(0x80228090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228090
  c->r[0]=c->lr; // 80228094
  W32(c->r[1]+0x00000024u,c->r[0]); // 80228098
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022809C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802280A0
  c->r[30]=c->r[3]|c->r[3]; // 802280A4
  c->lr=0x802280ACu; f_802251D0(c); // 802280A8
  cmps(c,0,(int32_t)c->r[3],0); // 802280AC
  if (crb(c,2)) { goto L_802280CC; } // 802280B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802280B4
  c->r[12]=R32(c->r[12]+0x00000034u); // 802280B8
  c->ctr=c->r[12]; // 802280BC
  if (true) { c->lr=0x802280C4u; dispatch(c,c->ctr); } // 802280C0
  c->r[31]=c->r[3]|c->r[3]; // 802280C4
  goto L_802280D0; // 802280C8
L_802280CC:;
  c->r[31]=0u+0x00000000u; // 802280CC
L_802280D0:;
  c->r[3]=c->r[30]|c->r[30]; // 802280D0
  c->lr=0x802280D8u; f_80225E60(c); // 802280D4
  c->r[3]=c->r[31]^0x80000000u; // 802280D8
  c->r[0]=0u+0x43300000u; // 802280DC
  c->r[4]=0u+0x80380000u; // 802280E0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802280E4
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[3]=RF64(ea);} // 802280E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802280EC
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802280F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802280F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802280F8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802280FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80228100
  c->r[0]=R32(c->r[1]+0x00000024u); // 80228104
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80228108
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022810C
  c->lr=c->r[0]; // 80228110
  c->r[1]=c->r[1]+0x00000020u; // 80228114
  return; // 80228118
}

// fn_80228120
void f_80228120(Ctx* __restrict c) {
  trace_call(0x80228120u);
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 80228120
  return; // 80228124
}

// fn_80228130
void f_80228130(Ctx* __restrict c) {
  trace_call(0x80228130u);
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 80228130
  return; // 80228134
}

// fn_80228140
void f_80228140(Ctx* __restrict c) {
  trace_call(0x80228140u);
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80228140
  return; // 80228144
}

// fn_80228150
void f_80228150(Ctx* __restrict c) {
  trace_call(0x80228150u);
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228150
  return; // 80228154
}

// fn_80228160
void f_80228160(Ctx* __restrict c) {
  trace_call(0x80228160u);
  W32(c->r[3]+0x00000054u,c->r[4]); // 80228160
  return; // 80228164
}

// fn_80228170
void f_80228170(Ctx* __restrict c) {
  trace_call(0x80228170u);
  c->r[3]=R32(c->r[3]+0x00000054u); // 80228170
  return; // 80228174
}

// fn_80228180
void f_80228180(Ctx* __restrict c) {
  trace_call(0x80228180u);
  W32(c->r[3]+0x00000058u,c->r[4]); // 80228180
  return; // 80228184
}

// fn_80228190
void f_80228190(Ctx* __restrict c) {
  trace_call(0x80228190u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 80228190
  return; // 80228194
}

// fn_802281A0
void f_802281A0(Ctx* __restrict c) {
  trace_call(0x802281A0u);
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 802281A0
  return; // 802281A4
}

// fn_802281B0
void f_802281B0(Ctx* __restrict c) {
  trace_call(0x802281B0u);
  c->r[4]=0u+0x80490000u; // 802281B0
  c->r[4]=c->r[4]+0x00001A7Cu; // 802281B4
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 802281B8
  return; // 802281BC
}

// fn_802281C0
void f_802281C0(Ctx* __restrict c) {
  trace_call(0x802281C0u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 802281C0
  return; // 802281C4
}

// fn_802281D0
void f_802281D0(Ctx* __restrict c) {
  trace_call(0x802281D0u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802281D0
  c->r[0]=c->lr; // 802281D4
  W32(c->r[1]+0x00000134u,c->r[0]); // 802281D8
  c->r[11]=c->r[1]+0x00000130u; // 802281DC
  c->lr=0x802281E4u; f_800C2E1C(c); // 802281E0
  c->r[31]=c->r[1]|c->r[1]; // 802281E4
  c->r[30]=c->r[3]|c->r[3]; // 802281E8
  c->r[16]=c->r[4]|c->r[4]; // 802281EC
  if (!crb(c,6)) { goto L_80228214; } // 802281F0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 802281F4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 802281F8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 802281FC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 80228200
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 80228204
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 80228208
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022820C
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 80228210
L_80228214:;
  c->r[11]=0u+0x80490000u; // 80228214
  c->r[12]=0u+0x80380000u; // 80228218
  c->r[15]=R32(c->r[11]+0x00001A78u); // 8022821C
  c->r[11]=c->r[31]+0x00000138u; // 80228220
  {uint32_t ea=c->r[12]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228224
  c->r[0]=c->r[31]+0x00000008u; // 80228228
  cmps(c,0,(int32_t)c->r[15],0); // 8022822C
  c->r[12]=0u+0x02000000u; // 80228230
  W32(c->r[31]+0x00000008u,c->r[3]); // 80228234
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80228238
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022823C
  W32(c->r[31]+0x00000014u,c->r[6]); // 80228240
  W32(c->r[31]+0x00000018u,c->r[7]); // 80228244
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 80228248
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022824C
  W32(c->r[31]+0x00000024u,c->r[10]); // 80228250
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80228254
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80228258
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8022825C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 80228260
  W32(c->r[31]+0x00000068u,c->r[12]); // 80228264
  W32(c->r[31]+0x0000006Cu,c->r[11]); // 80228268
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022826C
  if (crb(c,2)) { goto L_80228278; } // 80228270
  goto L_80228294; // 80228274
L_80228278:;
  c->r[3]=0u+0x803B0000u; // 80228278
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022827C
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 80228280
  c->r[15]=0u-c->r[3]; // 80228284
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 80228288
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022828C
  c->r[15]=c->r[1]+0x00000008u; // 80228290
L_80228294:;
  c->r[4]=0u+0x803B0000u; // 80228294
  c->r[3]=c->r[15]|c->r[15]; // 80228298
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 8022829C
  c->r[5]=c->r[16]|c->r[16]; // 802282A0
  c->r[6]=c->r[31]+0x00000068u; // 802282A4
  c->lr=0x802282ACu; f_800C8900(c); // 802282A8
  c->r[16]=R32(c->r[30]+0x00000000u); // 802282AC
  c->r[5]=c->r[15]|c->r[15]; // 802282B0
  c->r[17]=R32(c->r[30]+0x00000004u); // 802282B4
  c->r[6]=c->r[3]|c->r[3]; // 802282B8
  c->r[18]=R32(c->r[30]+0x00000008u); // 802282BC
  c->r[3]=c->r[31]+0x00000088u; // 802282C0
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 802282C4
  c->r[4]=c->r[31]+0x00000078u; // 802282C8
  c->r[20]=R32(c->r[30]+0x00000010u); // 802282CC
  c->r[21]=R32(c->r[30]+0x00000014u); // 802282D0
  c->r[22]=R32(c->r[30]+0x00000018u); // 802282D4
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 802282D8
  c->r[24]=R32(c->r[30]+0x00000020u); // 802282DC
  c->r[25]=R32(c->r[30]+0x00000024u); // 802282E0
  c->r[26]=R32(c->r[30]+0x00000028u); // 802282E4
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 802282E8
  c->r[28]=R32(c->r[30]+0x00000030u); // 802282EC
  c->r[29]=R32(c->r[30]+0x00000034u); // 802282F0
  c->r[12]=R32(c->r[30]+0x00000038u); // 802282F4
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 802282F8
  c->r[10]=R16(c->r[30]+0x00000040u); // 802282FC
  c->r[9]=R8(c->r[30]+0x00000042u); // 80228300
  c->r[8]=R8(c->r[30]+0x00000043u); // 80228304
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228308
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022830C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228310
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228314
  c->r[0]=R32(c->r[30]+0x00000054u); // 80228318
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022831C
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 80228320
  W32(c->r[31]+0x00000088u,c->r[16]); // 80228324
  W32(c->r[31]+0x0000008Cu,c->r[17]); // 80228328
  W32(c->r[31]+0x00000090u,c->r[18]); // 8022832C
  W32(c->r[31]+0x00000094u,c->r[19]); // 80228330
  W32(c->r[31]+0x00000098u,c->r[20]); // 80228334
  W32(c->r[31]+0x0000009Cu,c->r[21]); // 80228338
  W32(c->r[31]+0x000000A0u,c->r[22]); // 8022833C
  W32(c->r[31]+0x000000A4u,c->r[23]); // 80228340
  W32(c->r[31]+0x000000A8u,c->r[24]); // 80228344
  W32(c->r[31]+0x000000ACu,c->r[25]); // 80228348
  W32(c->r[31]+0x000000B0u,c->r[26]); // 8022834C
  W32(c->r[31]+0x000000B4u,c->r[27]); // 80228350
  W32(c->r[31]+0x000000B8u,c->r[28]); // 80228354
  W32(c->r[31]+0x000000BCu,c->r[29]); // 80228358
  W32(c->r[31]+0x000000C0u,c->r[12]); // 8022835C
  W32(c->r[31]+0x000000C4u,c->r[11]); // 80228360
  W16(c->r[31]+0x000000C8u,c->r[10]); // 80228364
  W8(c->r[31]+0x000000CAu,c->r[9]); // 80228368
  W8(c->r[31]+0x000000CBu,c->r[8]); // 8022836C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[2]);} // 80228370
  W32(c->r[31]+0x000000D0u,c->r[7]); // 80228374
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 80228378
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 8022837C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 80228380
  W32(c->r[31]+0x000000E0u,c->r[15]); // 80228384
  W32(c->r[31]+0x000000E4u,c->r[30]); // 80228388
  c->lr=0x80228390u; f_80229D10(c); // 8022838C
  c->r[3]=c->r[31]+0x00000088u; // 80228390
  c->r[4]=0u+0x00000000u; // 80228394
  c->lr=0x8022839Cu; f_80225180(c); // 80228398
  c->r[10]=c->r[31]|c->r[31]; // 8022839C
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 802283A0
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 802283A4
  c->r[11]=c->r[10]+0x00000130u; // 802283A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 802283AC
  c->lr=0x802283B4u; f_800C2E68(c); // 802283B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802283B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802283B8
  c->r[1]=c->r[10]|c->r[10]; // 802283BC
  c->lr=c->r[0]; // 802283C0
  return; // 802283C4
}

// fn_802283D0
void f_802283D0(Ctx* __restrict c) {
  trace_call(0x802283D0u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802283D0
  c->r[0]=c->lr; // 802283D4
  W32(c->r[1]+0x00000134u,c->r[0]); // 802283D8
  c->r[11]=c->r[1]+0x00000130u; // 802283DC
  c->lr=0x802283E4u; f_800C2E1C(c); // 802283E0
  c->r[31]=c->r[1]|c->r[1]; // 802283E4
  c->r[30]=c->r[3]|c->r[3]; // 802283E8
  c->r[16]=c->r[4]|c->r[4]; // 802283EC
  if (!crb(c,6)) { goto L_80228414; } // 802283F0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 802283F4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 802283F8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 802283FC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 80228400
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 80228404
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 80228408
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022840C
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 80228410
L_80228414:;
  c->r[11]=0u+0x80490000u; // 80228414
  c->r[12]=0u+0x80380000u; // 80228418
  c->r[15]=R32(c->r[11]+0x00001A78u); // 8022841C
  c->r[11]=c->r[31]+0x00000138u; // 80228420
  {uint32_t ea=c->r[12]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228424
  c->r[0]=c->r[31]+0x00000008u; // 80228428
  cmps(c,0,(int32_t)c->r[15],0); // 8022842C
  c->r[12]=0u+0x02000000u; // 80228430
  W32(c->r[31]+0x00000008u,c->r[3]); // 80228434
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80228438
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022843C
  W32(c->r[31]+0x00000014u,c->r[6]); // 80228440
  W32(c->r[31]+0x00000018u,c->r[7]); // 80228444
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 80228448
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022844C
  W32(c->r[31]+0x00000024u,c->r[10]); // 80228450
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80228454
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80228458
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8022845C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 80228460
  W32(c->r[31]+0x00000068u,c->r[12]); // 80228464
  W32(c->r[31]+0x0000006Cu,c->r[11]); // 80228468
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022846C
  if (crb(c,2)) { goto L_80228478; } // 80228470
  goto L_80228494; // 80228474
L_80228478:;
  c->r[3]=0u+0x803B0000u; // 80228478
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022847C
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 80228480
  c->r[15]=0u-c->r[3]; // 80228484
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 80228488
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022848C
  c->r[15]=c->r[1]+0x00000008u; // 80228490
L_80228494:;
  c->r[4]=0u+0x803B0000u; // 80228494
  c->r[3]=c->r[15]|c->r[15]; // 80228498
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 8022849C
  c->r[5]=c->r[16]|c->r[16]; // 802284A0
  c->r[6]=c->r[31]+0x00000068u; // 802284A4
  c->lr=0x802284ACu; f_800C8900(c); // 802284A8
  c->r[16]=R32(c->r[30]+0x00000000u); // 802284AC
  c->r[5]=c->r[15]|c->r[15]; // 802284B0
  c->r[17]=R32(c->r[30]+0x00000004u); // 802284B4
  c->r[6]=c->r[3]|c->r[3]; // 802284B8
  c->r[18]=R32(c->r[30]+0x00000008u); // 802284BC
  c->r[3]=c->r[31]+0x00000088u; // 802284C0
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 802284C4
  c->r[4]=c->r[31]+0x00000078u; // 802284C8
  c->r[20]=R32(c->r[30]+0x00000010u); // 802284CC
  c->r[21]=R32(c->r[30]+0x00000014u); // 802284D0
  c->r[22]=R32(c->r[30]+0x00000018u); // 802284D4
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 802284D8
  c->r[24]=R32(c->r[30]+0x00000020u); // 802284DC
  c->r[25]=R32(c->r[30]+0x00000024u); // 802284E0
  c->r[26]=R32(c->r[30]+0x00000028u); // 802284E4
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 802284E8
  c->r[28]=R32(c->r[30]+0x00000030u); // 802284EC
  c->r[29]=R32(c->r[30]+0x00000034u); // 802284F0
  c->r[12]=R32(c->r[30]+0x00000038u); // 802284F4
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 802284F8
  c->r[10]=R16(c->r[30]+0x00000040u); // 802284FC
  c->r[9]=R8(c->r[30]+0x00000042u); // 80228500
  c->r[8]=R8(c->r[30]+0x00000043u); // 80228504
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228508
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022850C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228510
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228514
  c->r[0]=R32(c->r[30]+0x00000054u); // 80228518
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022851C
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 80228520
  W32(c->r[31]+0x00000088u,c->r[16]); // 80228524
  W32(c->r[31]+0x0000008Cu,c->r[17]); // 80228528
  W32(c->r[31]+0x00000090u,c->r[18]); // 8022852C
  W32(c->r[31]+0x00000094u,c->r[19]); // 80228530
  W32(c->r[31]+0x00000098u,c->r[20]); // 80228534
  W32(c->r[31]+0x0000009Cu,c->r[21]); // 80228538
  W32(c->r[31]+0x000000A0u,c->r[22]); // 8022853C
  W32(c->r[31]+0x000000A4u,c->r[23]); // 80228540
  W32(c->r[31]+0x000000A8u,c->r[24]); // 80228544
  W32(c->r[31]+0x000000ACu,c->r[25]); // 80228548
  W32(c->r[31]+0x000000B0u,c->r[26]); // 8022854C
  W32(c->r[31]+0x000000B4u,c->r[27]); // 80228550
  W32(c->r[31]+0x000000B8u,c->r[28]); // 80228554
  W32(c->r[31]+0x000000BCu,c->r[29]); // 80228558
  W32(c->r[31]+0x000000C0u,c->r[12]); // 8022855C
  W32(c->r[31]+0x000000C4u,c->r[11]); // 80228560
  W16(c->r[31]+0x000000C8u,c->r[10]); // 80228564
  W8(c->r[31]+0x000000CAu,c->r[9]); // 80228568
  W8(c->r[31]+0x000000CBu,c->r[8]); // 8022856C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[2]);} // 80228570
  W32(c->r[31]+0x000000D0u,c->r[7]); // 80228574
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 80228578
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 8022857C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 80228580
  W32(c->r[31]+0x000000E0u,c->r[15]); // 80228584
  W32(c->r[31]+0x000000E4u,c->r[30]); // 80228588
  c->lr=0x80228590u; f_80229D10(c); // 8022858C
  c->r[3]=c->r[31]+0x00000088u; // 80228590
  c->r[4]=0u+0x00000000u; // 80228594
  c->lr=0x8022859Cu; f_80225180(c); // 80228598
  c->r[10]=c->r[31]|c->r[31]; // 8022859C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 802285A0
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802285A4
  c->r[11]=c->r[10]+0x00000130u; // 802285A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 802285AC
  c->lr=0x802285B4u; f_800C2E68(c); // 802285B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802285B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802285B8
  c->r[1]=c->r[10]|c->r[10]; // 802285BC
  c->lr=c->r[0]; // 802285C0
  return; // 802285C4
}

// fn_802285D0
void f_802285D0(Ctx* __restrict c) {
  trace_call(0x802285D0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802285D0
  c->r[0]=c->lr; // 802285D4
  W32(c->r[1]+0x00000124u,c->r[0]); // 802285D8
  c->r[11]=c->r[1]+0x00000120u; // 802285DC
  c->lr=0x802285E4u; f_800C2E1C(c); // 802285E0
  c->r[31]=c->r[1]|c->r[1]; // 802285E4
  c->r[30]=c->r[3]|c->r[3]; // 802285E8
  c->r[18]=c->r[4]|c->r[4]; // 802285EC
  if (!crb(c,6)) { goto L_80228614; } // 802285F0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 802285F4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 802285F8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 802285FC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 80228600
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 80228604
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 80228608
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022860C
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 80228610
L_80228614:;
  c->r[11]=0u+0x80490000u; // 80228614
  c->r[12]=c->r[31]+0x00000128u; // 80228618
  c->r[15]=R32(c->r[11]+0x00001A78u); // 8022861C
  c->r[0]=c->r[31]+0x00000008u; // 80228620
  c->r[11]=0u+0x03000000u; // 80228624
  W32(c->r[31]+0x00000008u,c->r[3]); // 80228628
  cmps(c,0,(int32_t)c->r[15],0); // 8022862C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80228630
  W32(c->r[31]+0x00000010u,c->r[5]); // 80228634
  W32(c->r[31]+0x00000014u,c->r[6]); // 80228638
  W32(c->r[31]+0x00000018u,c->r[7]); // 8022863C
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 80228640
  W32(c->r[31]+0x00000020u,c->r[9]); // 80228644
  W32(c->r[31]+0x00000024u,c->r[10]); // 80228648
  W32(c->r[31]+0x00000068u,c->r[11]); // 8022864C
  W32(c->r[31]+0x0000006Cu,c->r[12]); // 80228650
  W32(c->r[31]+0x00000070u,c->r[0]); // 80228654
  if (crb(c,2)) { goto L_80228660; } // 80228658
  goto L_8022867C; // 8022865C
L_80228660:;
  c->r[3]=0u+0x803B0000u; // 80228660
  c->r[0]=R32(c->r[1]+0x00000000u); // 80228664
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 80228668
  c->r[15]=0u-c->r[3]; // 8022866C
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 80228670
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 80228674
  c->r[15]=c->r[1]+0x00000008u; // 80228678
L_8022867C:;
  c->r[4]=0u+0x803B0000u; // 8022867C
  c->r[3]=c->r[15]|c->r[15]; // 80228680
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 80228684
  c->r[6]=c->r[31]+0x00000068u; // 80228688
  c->lr=0x80228690u; f_800C8900(c); // 8022868C
  c->r[16]=R32(c->r[30]+0x00000000u); // 80228690
  c->r[4]=c->r[18]|c->r[18]; // 80228694
  c->r[17]=R32(c->r[30]+0x00000004u); // 80228698
  c->r[5]=c->r[15]|c->r[15]; // 8022869C
  c->r[18]=R32(c->r[30]+0x00000008u); // 802286A0
  c->r[6]=c->r[3]|c->r[3]; // 802286A4
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 802286A8
  c->r[3]=c->r[31]+0x00000078u; // 802286AC
  c->r[20]=R32(c->r[30]+0x00000010u); // 802286B0
  c->r[21]=R32(c->r[30]+0x00000014u); // 802286B4
  c->r[22]=R32(c->r[30]+0x00000018u); // 802286B8
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 802286BC
  c->r[24]=R32(c->r[30]+0x00000020u); // 802286C0
  c->r[25]=R32(c->r[30]+0x00000024u); // 802286C4
  c->r[26]=R32(c->r[30]+0x00000028u); // 802286C8
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 802286CC
  c->r[28]=R32(c->r[30]+0x00000030u); // 802286D0
  c->r[29]=R32(c->r[30]+0x00000034u); // 802286D4
  c->r[12]=R32(c->r[30]+0x00000038u); // 802286D8
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 802286DC
  c->r[10]=R16(c->r[30]+0x00000040u); // 802286E0
  c->r[9]=R8(c->r[30]+0x00000042u); // 802286E4
  c->r[8]=R8(c->r[30]+0x00000043u); // 802286E8
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 802286EC
  c->r[7]=R32(c->r[30]+0x00000048u); // 802286F0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802286F4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802286F8
  c->r[0]=R32(c->r[30]+0x00000054u); // 802286FC
  c->r[15]=R32(c->r[30]+0x00000058u); // 80228700
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 80228704
  W32(c->r[31]+0x00000078u,c->r[16]); // 80228708
  W32(c->r[31]+0x0000007Cu,c->r[17]); // 8022870C
  W32(c->r[31]+0x00000080u,c->r[18]); // 80228710
  W32(c->r[31]+0x00000084u,c->r[19]); // 80228714
  W32(c->r[31]+0x00000088u,c->r[20]); // 80228718
  W32(c->r[31]+0x0000008Cu,c->r[21]); // 8022871C
  W32(c->r[31]+0x00000090u,c->r[22]); // 80228720
  W32(c->r[31]+0x00000094u,c->r[23]); // 80228724
  W32(c->r[31]+0x00000098u,c->r[24]); // 80228728
  W32(c->r[31]+0x0000009Cu,c->r[25]); // 8022872C
  W32(c->r[31]+0x000000A0u,c->r[26]); // 80228730
  W32(c->r[31]+0x000000A4u,c->r[27]); // 80228734
  W32(c->r[31]+0x000000A8u,c->r[28]); // 80228738
  W32(c->r[31]+0x000000ACu,c->r[29]); // 8022873C
  W32(c->r[31]+0x000000B0u,c->r[12]); // 80228740
  W32(c->r[31]+0x000000B4u,c->r[11]); // 80228744
  W16(c->r[31]+0x000000B8u,c->r[10]); // 80228748
  W8(c->r[31]+0x000000BAu,c->r[9]); // 8022874C
  W8(c->r[31]+0x000000BBu,c->r[8]); // 80228750
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[2]);} // 80228754
  W32(c->r[31]+0x000000C0u,c->r[7]); // 80228758
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[1]);} // 8022875C
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 80228760
  W32(c->r[31]+0x000000CCu,c->r[0]); // 80228764
  W32(c->r[31]+0x000000D0u,c->r[15]); // 80228768
  W32(c->r[31]+0x000000D4u,c->r[30]); // 8022876C
  c->lr=0x80228774u; f_80229D10(c); // 80228770
  c->r[3]=c->r[31]+0x00000078u; // 80228774
  c->r[4]=0u+0x00000000u; // 80228778
  c->lr=0x80228780u; f_80225180(c); // 8022877C
  c->r[10]=c->r[31]|c->r[31]; // 80228780
  c->r[11]=c->r[10]+0x00000120u; // 80228784
  c->lr=0x8022878Cu; f_800C2E68(c); // 80228788
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022878C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80228790
  c->r[1]=c->r[10]|c->r[10]; // 80228794
  c->lr=c->r[0]; // 80228798
  return; // 8022879C
}

// fn_802287A0
void f_802287A0(Ctx* __restrict c) {
  trace_call(0x802287A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 802287A0
  c->r[0]=c->lr; // 802287A4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 802287A8
  c->r[11]=c->r[1]+0x000000B0u; // 802287AC
  c->lr=0x802287B4u; f_800C2E1C(c); // 802287B0
  c->r[31]=c->r[1]|c->r[1]; // 802287B4
  c->r[7]=0u+0x80490000u; // 802287B8
  c->r[30]=c->r[3]|c->r[3]; // 802287BC
  c->r[15]=R32(c->r[7]+0x00001A78u); // 802287C0
  c->r[18]=c->r[4]|c->r[4]; // 802287C4
  cmps(c,0,(int32_t)c->r[15],0); // 802287C8
  if (crb(c,2)) { goto L_802287D4; } // 802287CC
  goto L_802287F0; // 802287D0
L_802287D4:;
  c->r[3]=0u+0x803B0000u; // 802287D4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802287D8
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 802287DC
  c->r[15]=0u-c->r[3]; // 802287E0
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 802287E4
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 802287E8
  c->r[15]=c->r[1]+0x00000008u; // 802287EC
L_802287F0:;
  c->r[4]=0u+0x803B0000u; // 802287F0
  c->r[3]=c->r[15]|c->r[15]; // 802287F4
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 802287F8
  c->lr=0x80228800u; f_800C8900(c); // 802287FC
  c->r[16]=R32(c->r[30]+0x00000000u); // 80228800
  c->r[4]=c->r[18]|c->r[18]; // 80228804
  c->r[17]=R32(c->r[30]+0x00000004u); // 80228808
  c->r[5]=c->r[15]|c->r[15]; // 8022880C
  c->r[18]=R32(c->r[30]+0x00000008u); // 80228810
  c->r[6]=c->r[3]|c->r[3]; // 80228814
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 80228818
  c->r[3]=c->r[31]+0x00000008u; // 8022881C
  c->r[20]=R32(c->r[30]+0x00000010u); // 80228820
  c->r[21]=R32(c->r[30]+0x00000014u); // 80228824
  c->r[22]=R32(c->r[30]+0x00000018u); // 80228828
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 8022882C
  c->r[24]=R32(c->r[30]+0x00000020u); // 80228830
  c->r[25]=R32(c->r[30]+0x00000024u); // 80228834
  c->r[26]=R32(c->r[30]+0x00000028u); // 80228838
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 8022883C
  c->r[28]=R32(c->r[30]+0x00000030u); // 80228840
  c->r[29]=R32(c->r[30]+0x00000034u); // 80228844
  c->r[12]=R32(c->r[30]+0x00000038u); // 80228848
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 8022884C
  c->r[10]=R16(c->r[30]+0x00000040u); // 80228850
  c->r[9]=R8(c->r[30]+0x00000042u); // 80228854
  c->r[8]=R8(c->r[30]+0x00000043u); // 80228858
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022885C
  c->r[7]=R32(c->r[30]+0x00000048u); // 80228860
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228864
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228868
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022886C
  c->r[15]=R32(c->r[30]+0x00000058u); // 80228870
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 80228874
  W32(c->r[31]+0x00000008u,c->r[16]); // 80228878
  W32(c->r[31]+0x0000000Cu,c->r[17]); // 8022887C
  W32(c->r[31]+0x00000010u,c->r[18]); // 80228880
  W32(c->r[31]+0x00000014u,c->r[19]); // 80228884
  W32(c->r[31]+0x00000018u,c->r[20]); // 80228888
  W32(c->r[31]+0x0000001Cu,c->r[21]); // 8022888C
  W32(c->r[31]+0x00000020u,c->r[22]); // 80228890
  W32(c->r[31]+0x00000024u,c->r[23]); // 80228894
  W32(c->r[31]+0x00000028u,c->r[24]); // 80228898
  W32(c->r[31]+0x0000002Cu,c->r[25]); // 8022889C
  W32(c->r[31]+0x00000030u,c->r[26]); // 802288A0
  W32(c->r[31]+0x00000034u,c->r[27]); // 802288A4
  W32(c->r[31]+0x00000038u,c->r[28]); // 802288A8
  W32(c->r[31]+0x0000003Cu,c->r[29]); // 802288AC
  W32(c->r[31]+0x00000040u,c->r[12]); // 802288B0
  W32(c->r[31]+0x00000044u,c->r[11]); // 802288B4
  W16(c->r[31]+0x00000048u,c->r[10]); // 802288B8
  W8(c->r[31]+0x0000004Au,c->r[9]); // 802288BC
  W8(c->r[31]+0x0000004Bu,c->r[8]); // 802288C0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[2]);} // 802288C4
  W32(c->r[31]+0x00000050u,c->r[7]); // 802288C8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 802288CC
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 802288D0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 802288D4
  W32(c->r[31]+0x00000060u,c->r[15]); // 802288D8
  W32(c->r[31]+0x00000064u,c->r[30]); // 802288DC
  c->lr=0x802288E4u; f_80229D10(c); // 802288E0
  c->r[3]=c->r[31]+0x00000008u; // 802288E4
  c->r[4]=0u+0x00000000u; // 802288E8
  c->lr=0x802288F0u; f_80225180(c); // 802288EC
  c->r[10]=c->r[31]|c->r[31]; // 802288F0
  c->r[11]=c->r[10]+0x000000B0u; // 802288F4
  c->lr=0x802288FCu; f_800C2E68(c); // 802288F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 802288FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80228900
  c->r[1]=c->r[10]|c->r[10]; // 80228904
  c->lr=c->r[0]; // 80228908
  return; // 8022890C
}

// fn_80228910
void f_80228910(Ctx* __restrict c) {
  trace_call(0x80228910u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228910
  c->r[0]=c->lr; // 80228914
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80228918
  c->r[11]=c->r[1]+0x000000C0u; // 8022891C
  c->lr=0x80228924u; f_800C2E20(c); // 80228920
  c->r[6]=0u+0x80380000u; // 80228924
  c->r[16]=R32(c->r[3]+0x00000000u); // 80228928
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022892C
  c->r[6]=c->r[5]|c->r[5]; // 80228930
  c->r[17]=R32(c->r[3]+0x00000004u); // 80228934
  c->r[5]=c->r[4]|c->r[4]; // 80228938
  c->r[18]=R32(c->r[3]+0x00000008u); // 8022893C
  c->r[4]=c->r[1]+0x00000008u; // 80228940
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 80228944
  c->r[20]=R32(c->r[3]+0x00000010u); // 80228948
  c->r[21]=R32(c->r[3]+0x00000014u); // 8022894C
  c->r[22]=R32(c->r[3]+0x00000018u); // 80228950
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 80228954
  c->r[24]=R32(c->r[3]+0x00000020u); // 80228958
  c->r[25]=R32(c->r[3]+0x00000024u); // 8022895C
  c->r[26]=R32(c->r[3]+0x00000028u); // 80228960
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 80228964
  c->r[28]=R32(c->r[3]+0x00000030u); // 80228968
  c->r[29]=R32(c->r[3]+0x00000034u); // 8022896C
  c->r[30]=R32(c->r[3]+0x00000038u); // 80228970
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 80228974
  c->r[12]=R16(c->r[3]+0x00000040u); // 80228978
  c->r[11]=R8(c->r[3]+0x00000042u); // 8022897C
  c->r[10]=R8(c->r[3]+0x00000043u); // 80228980
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228984
  c->r[9]=R32(c->r[3]+0x00000048u); // 80228988
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022898C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228990
  c->r[8]=R32(c->r[3]+0x00000054u); // 80228994
  c->r[7]=R32(c->r[3]+0x00000058u); // 80228998
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022899C
  c->r[3]=c->r[1]+0x00000018u; // 802289A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 802289A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 802289A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 802289AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 802289B0
  W32(c->r[1]+0x00000018u,c->r[16]); // 802289B4
  W32(c->r[1]+0x0000001Cu,c->r[17]); // 802289B8
  W32(c->r[1]+0x00000020u,c->r[18]); // 802289BC
  W32(c->r[1]+0x00000024u,c->r[19]); // 802289C0
  W32(c->r[1]+0x00000028u,c->r[20]); // 802289C4
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 802289C8
  W32(c->r[1]+0x00000030u,c->r[22]); // 802289CC
  W32(c->r[1]+0x00000034u,c->r[23]); // 802289D0
  W32(c->r[1]+0x00000038u,c->r[24]); // 802289D4
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 802289D8
  W32(c->r[1]+0x00000040u,c->r[26]); // 802289DC
  W32(c->r[1]+0x00000044u,c->r[27]); // 802289E0
  W32(c->r[1]+0x00000048u,c->r[28]); // 802289E4
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 802289E8
  W32(c->r[1]+0x00000050u,c->r[30]); // 802289EC
  W32(c->r[1]+0x00000054u,c->r[31]); // 802289F0
  W16(c->r[1]+0x00000058u,c->r[12]); // 802289F4
  W8(c->r[1]+0x0000005Au,c->r[11]); // 802289F8
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 802289FC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80228A00
  W32(c->r[1]+0x00000060u,c->r[9]); // 80228A04
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80228A08
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80228A0C
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80228A10
  W32(c->r[1]+0x00000070u,c->r[7]); // 80228A14
  W32(c->r[1]+0x00000074u,c->r[0]); // 80228A18
  c->lr=0x80228A20u; f_80229D10(c); // 80228A1C
  c->r[3]=c->r[1]+0x00000018u; // 80228A20
  c->r[4]=0u+0x00000000u; // 80228A24
  c->lr=0x80228A2Cu; f_80225180(c); // 80228A28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80228A2C
  c->r[11]=c->r[1]+0x000000C0u; // 80228A30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228A34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80228A38
  c->lr=0x80228A40u; f_800C2E6C(c); // 80228A3C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80228A40
  c->lr=c->r[0]; // 80228A44
  c->r[1]=c->r[1]+0x000000C0u; // 80228A48
  return; // 80228A4C
}

// fn_80228A50
void f_80228A50(Ctx* __restrict c) {
  trace_call(0x80228A50u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228A50
  c->r[0]=c->lr; // 80228A54
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80228A58
  c->r[11]=c->r[1]+0x000000C0u; // 80228A5C
  c->lr=0x80228A64u; f_800C2E1C(c); // 80228A60
  c->r[17]=c->r[4]|c->r[4]; // 80228A64
  c->r[31]=c->r[3]|c->r[3]; // 80228A68
  c->r[3]=c->r[17]|c->r[17]; // 80228A6C
  c->lr=0x80228A74u; f_800C297C(c); // 80228A70
  c->r[4]=0u+0x80380000u; // 80228A74
  c->r[15]=R32(c->r[31]+0x00000000u); // 80228A78
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 80228A7C
  c->r[5]=c->r[17]|c->r[17]; // 80228A80
  c->r[16]=R32(c->r[31]+0x00000004u); // 80228A84
  c->r[6]=c->r[3]|c->r[3]; // 80228A88
  c->r[17]=R32(c->r[31]+0x00000008u); // 80228A8C
  c->r[3]=c->r[1]+0x00000018u; // 80228A90
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 80228A94
  c->r[4]=c->r[1]+0x00000008u; // 80228A98
  c->r[19]=R32(c->r[31]+0x00000010u); // 80228A9C
  c->r[20]=R32(c->r[31]+0x00000014u); // 80228AA0
  c->r[21]=R32(c->r[31]+0x00000018u); // 80228AA4
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 80228AA8
  c->r[23]=R32(c->r[31]+0x00000020u); // 80228AAC
  c->r[24]=R32(c->r[31]+0x00000024u); // 80228AB0
  c->r[25]=R32(c->r[31]+0x00000028u); // 80228AB4
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 80228AB8
  c->r[27]=R32(c->r[31]+0x00000030u); // 80228ABC
  c->r[28]=R32(c->r[31]+0x00000034u); // 80228AC0
  c->r[29]=R32(c->r[31]+0x00000038u); // 80228AC4
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 80228AC8
  c->r[12]=R16(c->r[31]+0x00000040u); // 80228ACC
  c->r[11]=R8(c->r[31]+0x00000042u); // 80228AD0
  c->r[10]=R8(c->r[31]+0x00000043u); // 80228AD4
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228AD8
  c->r[9]=R32(c->r[31]+0x00000048u); // 80228ADC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228AE0
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228AE4
  c->r[8]=R32(c->r[31]+0x00000054u); // 80228AE8
  c->r[7]=R32(c->r[31]+0x00000058u); // 80228AEC
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80228AF0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80228AF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80228AF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80228AFC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80228B00
  W32(c->r[1]+0x00000018u,c->r[15]); // 80228B04
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 80228B08
  W32(c->r[1]+0x00000020u,c->r[17]); // 80228B0C
  W32(c->r[1]+0x00000024u,c->r[18]); // 80228B10
  W32(c->r[1]+0x00000028u,c->r[19]); // 80228B14
  W32(c->r[1]+0x0000002Cu,c->r[20]); // 80228B18
  W32(c->r[1]+0x00000030u,c->r[21]); // 80228B1C
  W32(c->r[1]+0x00000034u,c->r[22]); // 80228B20
  W32(c->r[1]+0x00000038u,c->r[23]); // 80228B24
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 80228B28
  W32(c->r[1]+0x00000040u,c->r[25]); // 80228B2C
  W32(c->r[1]+0x00000044u,c->r[26]); // 80228B30
  W32(c->r[1]+0x00000048u,c->r[27]); // 80228B34
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 80228B38
  W32(c->r[1]+0x00000050u,c->r[29]); // 80228B3C
  W32(c->r[1]+0x00000054u,c->r[30]); // 80228B40
  W16(c->r[1]+0x00000058u,c->r[12]); // 80228B44
  W8(c->r[1]+0x0000005Au,c->r[11]); // 80228B48
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 80228B4C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80228B50
  W32(c->r[1]+0x00000060u,c->r[9]); // 80228B54
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80228B58
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80228B5C
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80228B60
  W32(c->r[1]+0x00000070u,c->r[7]); // 80228B64
  W32(c->r[1]+0x00000074u,c->r[0]); // 80228B68
  c->lr=0x80228B70u; f_80229D10(c); // 80228B6C
  c->r[3]=c->r[1]+0x00000018u; // 80228B70
  c->r[4]=0u+0x00000000u; // 80228B74
  c->lr=0x80228B7Cu; f_80225180(c); // 80228B78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80228B7C
  c->r[11]=c->r[1]+0x000000C0u; // 80228B80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228B84
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80228B88
  c->lr=0x80228B90u; f_800C2E68(c); // 80228B8C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80228B90
  c->lr=c->r[0]; // 80228B94
  c->r[1]=c->r[1]+0x000000C0u; // 80228B98
  return; // 80228B9C
}

// fn_80228BA0
void f_80228BA0(Ctx* __restrict c) {
  trace_call(0x80228BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228BA0
  c->r[0]=c->lr; // 80228BA4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80228BA8
  c->r[11]=c->r[1]+0x000000C0u; // 80228BAC
  c->lr=0x80228BB4u; f_800C2E20(c); // 80228BB0
  c->r[6]=0u+0x80380000u; // 80228BB4
  c->r[16]=R32(c->r[3]+0x00000000u); // 80228BB8
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 80228BBC
  c->r[6]=c->r[5]|c->r[5]; // 80228BC0
  c->r[17]=R32(c->r[3]+0x00000004u); // 80228BC4
  c->r[5]=c->r[4]|c->r[4]; // 80228BC8
  c->r[18]=R32(c->r[3]+0x00000008u); // 80228BCC
  c->r[4]=c->r[1]+0x00000008u; // 80228BD0
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 80228BD4
  c->r[20]=R32(c->r[3]+0x00000010u); // 80228BD8
  c->r[21]=R32(c->r[3]+0x00000014u); // 80228BDC
  c->r[22]=R32(c->r[3]+0x00000018u); // 80228BE0
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 80228BE4
  c->r[24]=R32(c->r[3]+0x00000020u); // 80228BE8
  c->r[25]=R32(c->r[3]+0x00000024u); // 80228BEC
  c->r[26]=R32(c->r[3]+0x00000028u); // 80228BF0
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 80228BF4
  c->r[28]=R32(c->r[3]+0x00000030u); // 80228BF8
  c->r[29]=R32(c->r[3]+0x00000034u); // 80228BFC
  c->r[30]=R32(c->r[3]+0x00000038u); // 80228C00
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 80228C04
  c->r[12]=R16(c->r[3]+0x00000040u); // 80228C08
  c->r[11]=R8(c->r[3]+0x00000042u); // 80228C0C
  c->r[10]=R8(c->r[3]+0x00000043u); // 80228C10
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228C14
  c->r[9]=R32(c->r[3]+0x00000048u); // 80228C18
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228C1C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228C20
  c->r[8]=R32(c->r[3]+0x00000054u); // 80228C24
  c->r[7]=R32(c->r[3]+0x00000058u); // 80228C28
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80228C2C
  c->r[3]=c->r[1]+0x00000018u; // 80228C30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80228C34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80228C38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80228C3C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80228C40
  W32(c->r[1]+0x00000018u,c->r[16]); // 80228C44
  W32(c->r[1]+0x0000001Cu,c->r[17]); // 80228C48
  W32(c->r[1]+0x00000020u,c->r[18]); // 80228C4C
  W32(c->r[1]+0x00000024u,c->r[19]); // 80228C50
  W32(c->r[1]+0x00000028u,c->r[20]); // 80228C54
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 80228C58
  W32(c->r[1]+0x00000030u,c->r[22]); // 80228C5C
  W32(c->r[1]+0x00000034u,c->r[23]); // 80228C60
  W32(c->r[1]+0x00000038u,c->r[24]); // 80228C64
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 80228C68
  W32(c->r[1]+0x00000040u,c->r[26]); // 80228C6C
  W32(c->r[1]+0x00000044u,c->r[27]); // 80228C70
  W32(c->r[1]+0x00000048u,c->r[28]); // 80228C74
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 80228C78
  W32(c->r[1]+0x00000050u,c->r[30]); // 80228C7C
  W32(c->r[1]+0x00000054u,c->r[31]); // 80228C80
  W16(c->r[1]+0x00000058u,c->r[12]); // 80228C84
  W8(c->r[1]+0x0000005Au,c->r[11]); // 80228C88
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 80228C8C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80228C90
  W32(c->r[1]+0x00000060u,c->r[9]); // 80228C94
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80228C98
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80228C9C
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80228CA0
  W32(c->r[1]+0x00000070u,c->r[7]); // 80228CA4
  W32(c->r[1]+0x00000074u,c->r[0]); // 80228CA8
  c->lr=0x80228CB0u; f_80229D10(c); // 80228CAC
  c->r[3]=c->r[1]+0x00000018u; // 80228CB0
  c->r[4]=0u+0x00000000u; // 80228CB4
  c->lr=0x80228CBCu; f_80225180(c); // 80228CB8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80228CBC
  c->r[11]=c->r[1]+0x000000C0u; // 80228CC0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80228CC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80228CC8
  c->lr=0x80228CD0u; f_800C2E6C(c); // 80228CCC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80228CD0
  c->lr=c->r[0]; // 80228CD4
  c->r[1]=c->r[1]+0x000000C0u; // 80228CD8
  return; // 80228CDC
}

// fn_80228CE0
void f_80228CE0(Ctx* __restrict c) {
  trace_call(0x80228CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228CE0
  c->r[0]=c->lr; // 80228CE4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80228CE8
  c->r[11]=c->r[1]+0x000000C0u; // 80228CEC
  c->lr=0x80228CF4u; f_800C2E1C(c); // 80228CF0
  c->r[17]=c->r[4]|c->r[4]; // 80228CF4
  c->r[31]=c->r[3]|c->r[3]; // 80228CF8
  c->r[3]=c->r[17]|c->r[17]; // 80228CFC
  c->lr=0x80228D04u; f_800C297C(c); // 80228D00
  c->r[4]=0u+0x80380000u; // 80228D04
  c->r[15]=R32(c->r[31]+0x00000000u); // 80228D08
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 80228D0C
  c->r[5]=c->r[17]|c->r[17]; // 80228D10
  c->r[16]=R32(c->r[31]+0x00000004u); // 80228D14
  c->r[6]=c->r[3]|c->r[3]; // 80228D18
  c->r[17]=R32(c->r[31]+0x00000008u); // 80228D1C
  c->r[3]=c->r[1]+0x00000018u; // 80228D20
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 80228D24
  c->r[4]=c->r[1]+0x00000008u; // 80228D28
  c->r[19]=R32(c->r[31]+0x00000010u); // 80228D2C
  c->r[20]=R32(c->r[31]+0x00000014u); // 80228D30
  c->r[21]=R32(c->r[31]+0x00000018u); // 80228D34
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 80228D38
  c->r[23]=R32(c->r[31]+0x00000020u); // 80228D3C
  c->r[24]=R32(c->r[31]+0x00000024u); // 80228D40
  c->r[25]=R32(c->r[31]+0x00000028u); // 80228D44
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 80228D48
  c->r[27]=R32(c->r[31]+0x00000030u); // 80228D4C
  c->r[28]=R32(c->r[31]+0x00000034u); // 80228D50
  c->r[29]=R32(c->r[31]+0x00000038u); // 80228D54
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 80228D58
  c->r[12]=R16(c->r[31]+0x00000040u); // 80228D5C
  c->r[11]=R8(c->r[31]+0x00000042u); // 80228D60
  c->r[10]=R8(c->r[31]+0x00000043u); // 80228D64
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228D68
  c->r[9]=R32(c->r[31]+0x00000048u); // 80228D6C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228D70
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228D74
  c->r[8]=R32(c->r[31]+0x00000054u); // 80228D78
  c->r[7]=R32(c->r[31]+0x00000058u); // 80228D7C
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80228D80
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80228D84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80228D88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80228D8C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80228D90
  W32(c->r[1]+0x00000018u,c->r[15]); // 80228D94
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 80228D98
  W32(c->r[1]+0x00000020u,c->r[17]); // 80228D9C
  W32(c->r[1]+0x00000024u,c->r[18]); // 80228DA0
  W32(c->r[1]+0x00000028u,c->r[19]); // 80228DA4
  W32(c->r[1]+0x0000002Cu,c->r[20]); // 80228DA8
  W32(c->r[1]+0x00000030u,c->r[21]); // 80228DAC
  W32(c->r[1]+0x00000034u,c->r[22]); // 80228DB0
  W32(c->r[1]+0x00000038u,c->r[23]); // 80228DB4
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 80228DB8
  W32(c->r[1]+0x00000040u,c->r[25]); // 80228DBC
  W32(c->r[1]+0x00000044u,c->r[26]); // 80228DC0
  W32(c->r[1]+0x00000048u,c->r[27]); // 80228DC4
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 80228DC8
  W32(c->r[1]+0x00000050u,c->r[29]); // 80228DCC
  W32(c->r[1]+0x00000054u,c->r[30]); // 80228DD0
  W16(c->r[1]+0x00000058u,c->r[12]); // 80228DD4
  W8(c->r[1]+0x0000005Au,c->r[11]); // 80228DD8
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 80228DDC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80228DE0
  W32(c->r[1]+0x00000060u,c->r[9]); // 80228DE4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80228DE8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80228DEC
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 80228DF0
  W32(c->r[1]+0x00000070u,c->r[7]); // 80228DF4
  W32(c->r[1]+0x00000074u,c->r[0]); // 80228DF8
  c->lr=0x80228E00u; f_80229D10(c); // 80228DFC
  c->r[3]=c->r[1]+0x00000018u; // 80228E00
  c->r[4]=0u+0x00000000u; // 80228E04
  c->lr=0x80228E0Cu; f_80225180(c); // 80228E08
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80228E0C
  c->r[11]=c->r[1]+0x000000C0u; // 80228E10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80228E14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80228E18
  c->lr=0x80228E20u; f_800C2E68(c); // 80228E1C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80228E20
  c->lr=c->r[0]; // 80228E24
  c->r[1]=c->r[1]+0x000000C0u; // 80228E28
  return; // 80228E2C
}

// fn_80228E30
void f_80228E30(Ctx* __restrict c) {
  trace_call(0x80228E30u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228E30
  c->r[0]=c->lr; // 80228E34
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80228E38
  c->r[11]=c->r[1]+0x000000B0u; // 80228E3C
  c->lr=0x80228E44u; f_800C2E20(c); // 80228E40
  c->r[16]=R32(c->r[3]+0x00000000u); // 80228E44
  c->r[17]=R32(c->r[3]+0x00000004u); // 80228E48
  c->r[18]=R32(c->r[3]+0x00000008u); // 80228E4C
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 80228E50
  c->r[20]=R32(c->r[3]+0x00000010u); // 80228E54
  c->r[21]=R32(c->r[3]+0x00000014u); // 80228E58
  c->r[22]=R32(c->r[3]+0x00000018u); // 80228E5C
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 80228E60
  c->r[24]=R32(c->r[3]+0x00000020u); // 80228E64
  c->r[25]=R32(c->r[3]+0x00000024u); // 80228E68
  c->r[26]=R32(c->r[3]+0x00000028u); // 80228E6C
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 80228E70
  c->r[28]=R32(c->r[3]+0x00000030u); // 80228E74
  c->r[29]=R32(c->r[3]+0x00000034u); // 80228E78
  c->r[30]=R32(c->r[3]+0x00000038u); // 80228E7C
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 80228E80
  c->r[12]=R16(c->r[3]+0x00000040u); // 80228E84
  c->r[11]=R8(c->r[3]+0x00000042u); // 80228E88
  c->r[10]=R8(c->r[3]+0x00000043u); // 80228E8C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228E90
  c->r[9]=R32(c->r[3]+0x00000048u); // 80228E94
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228E98
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228E9C
  c->r[8]=R32(c->r[3]+0x00000054u); // 80228EA0
  c->r[7]=R32(c->r[3]+0x00000058u); // 80228EA4
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80228EA8
  c->r[3]=c->r[1]+0x00000008u; // 80228EAC
  W32(c->r[1]+0x00000008u,c->r[16]); // 80228EB0
  W32(c->r[1]+0x0000000Cu,c->r[17]); // 80228EB4
  W32(c->r[1]+0x00000010u,c->r[18]); // 80228EB8
  W32(c->r[1]+0x00000014u,c->r[19]); // 80228EBC
  W32(c->r[1]+0x00000018u,c->r[20]); // 80228EC0
  W32(c->r[1]+0x0000001Cu,c->r[21]); // 80228EC4
  W32(c->r[1]+0x00000020u,c->r[22]); // 80228EC8
  W32(c->r[1]+0x00000024u,c->r[23]); // 80228ECC
  W32(c->r[1]+0x00000028u,c->r[24]); // 80228ED0
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 80228ED4
  W32(c->r[1]+0x00000030u,c->r[26]); // 80228ED8
  W32(c->r[1]+0x00000034u,c->r[27]); // 80228EDC
  W32(c->r[1]+0x00000038u,c->r[28]); // 80228EE0
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 80228EE4
  W32(c->r[1]+0x00000040u,c->r[30]); // 80228EE8
  W32(c->r[1]+0x00000044u,c->r[31]); // 80228EEC
  W16(c->r[1]+0x00000048u,c->r[12]); // 80228EF0
  W8(c->r[1]+0x0000004Au,c->r[11]); // 80228EF4
  W8(c->r[1]+0x0000004Bu,c->r[10]); // 80228EF8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 80228EFC
  W32(c->r[1]+0x00000050u,c->r[9]); // 80228F00
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80228F04
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80228F08
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 80228F0C
  W32(c->r[1]+0x00000060u,c->r[7]); // 80228F10
  W32(c->r[1]+0x00000064u,c->r[0]); // 80228F14
  c->lr=0x80228F1Cu; f_80229D10(c); // 80228F18
  c->r[3]=c->r[1]+0x00000008u; // 80228F1C
  c->r[4]=0u+0x00000000u; // 80228F20
  c->lr=0x80228F28u; f_80225180(c); // 80228F24
  c->r[11]=c->r[1]+0x000000B0u; // 80228F28
  c->lr=0x80228F30u; f_800C2E6C(c); // 80228F2C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80228F30
  c->lr=c->r[0]; // 80228F34
  c->r[1]=c->r[1]+0x000000B0u; // 80228F38
  return; // 80228F3C
}

// fn_80228F40
void f_80228F40(Ctx* __restrict c) {
  trace_call(0x80228F40u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80228F40
  c->r[0]=c->lr; // 80228F44
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80228F48
  c->r[11]=c->r[1]+0x000000B0u; // 80228F4C
  c->lr=0x80228F54u; f_800C2E1C(c); // 80228F50
  c->r[18]=c->r[5]|c->r[5]; // 80228F54
  c->r[31]=c->r[3]|c->r[3]; // 80228F58
  c->r[17]=c->r[4]|c->r[4]; // 80228F5C
  c->r[3]=c->r[18]|c->r[18]; // 80228F60
  c->lr=0x80228F68u; f_800C297C(c); // 80228F64
  c->r[15]=R32(c->r[31]+0x00000000u); // 80228F68
  c->r[4]=c->r[17]|c->r[17]; // 80228F6C
  c->r[16]=R32(c->r[31]+0x00000004u); // 80228F70
  c->r[5]=c->r[18]|c->r[18]; // 80228F74
  c->r[17]=R32(c->r[31]+0x00000008u); // 80228F78
  c->r[6]=c->r[3]|c->r[3]; // 80228F7C
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 80228F80
  c->r[3]=c->r[1]+0x00000008u; // 80228F84
  c->r[19]=R32(c->r[31]+0x00000010u); // 80228F88
  c->r[20]=R32(c->r[31]+0x00000014u); // 80228F8C
  c->r[21]=R32(c->r[31]+0x00000018u); // 80228F90
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 80228F94
  c->r[23]=R32(c->r[31]+0x00000020u); // 80228F98
  c->r[24]=R32(c->r[31]+0x00000024u); // 80228F9C
  c->r[25]=R32(c->r[31]+0x00000028u); // 80228FA0
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 80228FA4
  c->r[27]=R32(c->r[31]+0x00000030u); // 80228FA8
  c->r[28]=R32(c->r[31]+0x00000034u); // 80228FAC
  c->r[29]=R32(c->r[31]+0x00000038u); // 80228FB0
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 80228FB4
  c->r[12]=R16(c->r[31]+0x00000040u); // 80228FB8
  c->r[11]=R8(c->r[31]+0x00000042u); // 80228FBC
  c->r[10]=R8(c->r[31]+0x00000043u); // 80228FC0
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80228FC4
  c->r[9]=R32(c->r[31]+0x00000048u); // 80228FC8
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80228FCC
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80228FD0
  c->r[8]=R32(c->r[31]+0x00000054u); // 80228FD4
  c->r[7]=R32(c->r[31]+0x00000058u); // 80228FD8
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80228FDC
  W32(c->r[1]+0x00000008u,c->r[15]); // 80228FE0
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 80228FE4
  W32(c->r[1]+0x00000010u,c->r[17]); // 80228FE8
  W32(c->r[1]+0x00000014u,c->r[18]); // 80228FEC
  W32(c->r[1]+0x00000018u,c->r[19]); // 80228FF0
  W32(c->r[1]+0x0000001Cu,c->r[20]); // 80228FF4
  W32(c->r[1]+0x00000020u,c->r[21]); // 80228FF8
  W32(c->r[1]+0x00000024u,c->r[22]); // 80228FFC
  W32(c->r[1]+0x00000028u,c->r[23]); // 80229000
  W32(c->r[1]+0x0000002Cu,c->r[24]); // 80229004
  W32(c->r[1]+0x00000030u,c->r[25]); // 80229008
  W32(c->r[1]+0x00000034u,c->r[26]); // 8022900C
  W32(c->r[1]+0x00000038u,c->r[27]); // 80229010
  W32(c->r[1]+0x0000003Cu,c->r[28]); // 80229014
  W32(c->r[1]+0x00000040u,c->r[29]); // 80229018
  W32(c->r[1]+0x00000044u,c->r[30]); // 8022901C
  W16(c->r[1]+0x00000048u,c->r[12]); // 80229020
  W8(c->r[1]+0x0000004Au,c->r[11]); // 80229024
  W8(c->r[1]+0x0000004Bu,c->r[10]); // 80229028
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 8022902C
  W32(c->r[1]+0x00000050u,c->r[9]); // 80229030
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80229034
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80229038
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 8022903C
  W32(c->r[1]+0x00000060u,c->r[7]); // 80229040
  W32(c->r[1]+0x00000064u,c->r[0]); // 80229044
  c->lr=0x8022904Cu; f_80229D10(c); // 80229048
  c->r[3]=c->r[1]+0x00000008u; // 8022904C
  c->r[4]=0u+0x00000000u; // 80229050
  c->lr=0x80229058u; f_80225180(c); // 80229054
  c->r[11]=c->r[1]+0x000000B0u; // 80229058
  c->lr=0x80229060u; f_800C2E68(c); // 8022905C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80229060
  c->lr=c->r[0]; // 80229064
  c->r[1]=c->r[1]+0x000000B0u; // 80229068
  return; // 8022906C
}

// fn_80229070
void f_80229070(Ctx* __restrict c) {
  trace_call(0x80229070u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80229070
  c->r[0]=c->lr; // 80229074
  W32(c->r[1]+0x00000114u,c->r[0]); // 80229078
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 8022907C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 80229080
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 80229084
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 80229088
  W32(c->r[1]+0x000000ECu,c->r[31]); // 8022908C
  c->r[31]=c->r[1]|c->r[1]; // 80229090
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80229094
  c->r[30]=c->r[3]|c->r[3]; // 80229098
  W32(c->r[1]+0x000000E4u,c->r[29]); // 8022909C
  W32(c->r[1]+0x000000E0u,c->r[28]); // 802290A0
  c->r[28]=c->r[4]|c->r[4]; // 802290A4
  if (!crb(c,6)) { goto L_802290CC; } // 802290A8
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 802290AC
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 802290B0
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 802290B4
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 802290B8
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 802290BC
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 802290C0
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 802290C4
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 802290C8
L_802290CC:;
  c->r[11]=0u+0x80490000u; // 802290CC
  c->r[12]=c->r[31]+0x00000118u; // 802290D0
  c->r[29]=R32(c->r[11]+0x00001A78u); // 802290D4
  c->r[0]=c->r[31]+0x00000008u; // 802290D8
  c->r[11]=0u+0x02000000u; // 802290DC
  W32(c->r[31]+0x00000008u,c->r[3]); // 802290E0
  cmps(c,0,(int32_t)c->r[29],0); // 802290E4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 802290E8
  W32(c->r[31]+0x00000010u,c->r[5]); // 802290EC
  W32(c->r[31]+0x00000014u,c->r[6]); // 802290F0
  W32(c->r[31]+0x00000018u,c->r[7]); // 802290F4
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 802290F8
  W32(c->r[31]+0x00000020u,c->r[9]); // 802290FC
  W32(c->r[31]+0x00000024u,c->r[10]); // 80229100
  W32(c->r[31]+0x00000068u,c->r[11]); // 80229104
  W32(c->r[31]+0x0000006Cu,c->r[12]); // 80229108
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022910C
  if (crb(c,2)) { goto L_80229118; } // 80229110
  goto L_80229134; // 80229114
L_80229118:;
  c->r[3]=0u+0x803B0000u; // 80229118
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022911C
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 80229120
  c->r[29]=0u-c->r[3]; // 80229124
  c->r[29]=rotl(c->r[29],0)&0xFFFFFFF8u; // 80229128
  {uint32_t ea=c->r[1]+c->r[29]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022912C
  c->r[29]=c->r[1]+0x00000008u; // 80229130
L_80229134:;
  c->r[4]=0u+0x803B0000u; // 80229134
  c->r[3]=c->r[29]|c->r[29]; // 80229138
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 8022913C
  c->r[5]=c->r[28]|c->r[28]; // 80229140
  c->r[6]=c->r[31]+0x00000068u; // 80229144
  c->lr=0x8022914Cu; f_800C8900(c); // 80229148
  c->r[0]=R32(c->r[30]+0x00000000u); // 8022914C
  c->r[5]=c->r[3]|c->r[3]; // 80229150
  W32(c->r[31]+0x00000078u,c->r[0]); // 80229154
  c->r[4]=c->r[29]|c->r[29]; // 80229158
  c->r[3]=c->r[31]+0x00000078u; // 8022915C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80229160
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 80229164
  c->r[0]=R32(c->r[30]+0x00000008u); // 80229168
  W32(c->r[31]+0x00000080u,c->r[0]); // 8022916C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80229170
  W32(c->r[31]+0x00000084u,c->r[0]); // 80229174
  c->r[0]=R32(c->r[30]+0x00000010u); // 80229178
  W32(c->r[31]+0x00000088u,c->r[0]); // 8022917C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80229180
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80229184
  c->r[0]=R32(c->r[30]+0x00000018u); // 80229188
  W32(c->r[31]+0x00000090u,c->r[0]); // 8022918C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80229190
  W32(c->r[31]+0x00000094u,c->r[0]); // 80229194
  c->r[0]=R32(c->r[30]+0x00000020u); // 80229198
  W32(c->r[31]+0x00000098u,c->r[0]); // 8022919C
  c->r[6]=R32(c->r[30]+0x00000024u); // 802291A0
  c->r[0]=R32(c->r[30]+0x00000028u); // 802291A4
  W32(c->r[31]+0x000000A0u,c->r[0]); // 802291A8
  W32(c->r[31]+0x0000009Cu,c->r[6]); // 802291AC
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 802291B0
  c->r[0]=R32(c->r[30]+0x00000030u); // 802291B4
  W32(c->r[31]+0x000000A8u,c->r[0]); // 802291B8
  W32(c->r[31]+0x000000A4u,c->r[6]); // 802291BC
  c->r[0]=R32(c->r[30]+0x00000034u); // 802291C0
  W32(c->r[31]+0x000000ACu,c->r[0]); // 802291C4
  c->r[6]=R32(c->r[30]+0x00000038u); // 802291C8
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 802291CC
  W32(c->r[31]+0x000000B4u,c->r[0]); // 802291D0
  W32(c->r[31]+0x000000B0u,c->r[6]); // 802291D4
  c->r[0]=R16(c->r[30]+0x00000040u); // 802291D8
  W16(c->r[31]+0x000000B8u,c->r[0]); // 802291DC
  c->r[0]=R8(c->r[30]+0x00000042u); // 802291E0
  W8(c->r[31]+0x000000BAu,c->r[0]); // 802291E4
  c->r[0]=R8(c->r[30]+0x00000043u); // 802291E8
  W8(c->r[31]+0x000000BBu,c->r[0]); // 802291EC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802291F0
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 802291F4
  c->r[0]=R32(c->r[30]+0x00000048u); // 802291F8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 802291FC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80229200
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 80229204
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229208
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8022920C
  c->r[0]=R32(c->r[30]+0x00000054u); // 80229210
  W32(c->r[31]+0x000000CCu,c->r[0]); // 80229214
  c->r[0]=R32(c->r[30]+0x00000058u); // 80229218
  W32(c->r[31]+0x000000D0u,c->r[0]); // 8022921C
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 80229220
  W32(c->r[31]+0x000000D4u,c->r[0]); // 80229224
  c->lr=0x8022922Cu; f_80229E30(c); // 80229228
  c->f[30]=c->f[1]; // 8022922C
  c->r[3]=c->r[31]+0x00000078u; // 80229230
  c->lr=0x80229238u; f_80226250(c); // 80229234
  c->f[31]=c->f[1]; // 80229238
  c->r[3]=c->r[31]+0x00000078u; // 8022923C
  c->lr=0x80229244u; f_80226240(c); // 80229240
  c->f[2]=c->f[31]; // 80229244
  c->r[3]=c->r[30]|c->r[30]; // 80229248
  c->lr=0x80229250u; f_802261F0(c); // 8022924C
  c->r[3]=c->r[31]+0x00000078u; // 80229250
  c->r[4]=0u+0x00000000u; // 80229254
  c->lr=0x8022925Cu; f_80225180(c); // 80229258
  c->r[10]=c->r[31]|c->r[31]; // 8022925C
  c->f[1]=c->f[30]; // 80229260
  {uint32_t ea=c->r[10]+0x00000108u; psq_load(c,31,ea,0,0);} // 80229264
  {uint32_t ea=c->r[31]+0x00000100u; c->f[31]=RF64(ea);} // 80229268
  {uint32_t ea=c->r[10]+0x000000F8u; psq_load(c,30,ea,0,0);} // 8022926C
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[30]=RF64(ea);} // 80229270
  c->r[31]=R32(c->r[31]+0x000000ECu); // 80229274
  c->r[30]=R32(c->r[10]+0x000000E8u); // 80229278
  c->r[29]=R32(c->r[10]+0x000000E4u); // 8022927C
  c->r[28]=R32(c->r[10]+0x000000E0u); // 80229280
  c->r[10]=R32(c->r[1]+0x00000000u); // 80229284
  c->r[0]=R32(c->r[10]+0x00000004u); // 80229288
  c->r[1]=c->r[10]|c->r[10]; // 8022928C
  c->lr=c->r[0]; // 80229290
  return; // 80229294
}

// fn_802292A0
void f_802292A0(Ctx* __restrict c) {
  trace_call(0x802292A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802292A0
  c->r[0]=c->lr; // 802292A4
  c->r[6]=0u+0x80490000u; // 802292A8
  c->r[7]=c->r[4]|c->r[4]; // 802292AC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802292B0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 802292B4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 802292B8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 802292BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 802292C0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802292C4
  c->r[31]=c->r[1]|c->r[1]; // 802292C8
  W32(c->r[1]+0x00000078u,c->r[30]); // 802292CC
  c->r[30]=c->r[3]|c->r[3]; // 802292D0
  W32(c->r[1]+0x00000074u,c->r[29]); // 802292D4
  c->r[29]=R32(c->r[6]+0x00001A78u); // 802292D8
  c->r[6]=c->r[5]|c->r[5]; // 802292DC
  cmps(c,0,(int32_t)c->r[29],0); // 802292E0
  if (crb(c,2)) { goto L_802292EC; } // 802292E4
  goto L_80229308; // 802292E8
L_802292EC:;
  c->r[3]=0u+0x803B0000u; // 802292EC
  c->r[0]=R32(c->r[1]+0x00000000u); // 802292F0
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 802292F4
  c->r[29]=0u-c->r[3]; // 802292F8
  c->r[29]=rotl(c->r[29],0)&0xFFFFFFF8u; // 802292FC
  {uint32_t ea=c->r[1]+c->r[29]; W32(ea,c->r[0]); c->r[1]=ea;} // 80229300
  c->r[29]=c->r[1]+0x00000008u; // 80229304
L_80229308:;
  c->r[4]=0u+0x803B0000u; // 80229308
  c->r[3]=c->r[29]|c->r[29]; // 8022930C
  c->r[4]=R32(c->r[4]+0xFFFF8F40u); // 80229310
  c->r[5]=c->r[7]|c->r[7]; // 80229314
  c->lr=0x8022931Cu; f_800C8900(c); // 80229318
  c->r[0]=R32(c->r[30]+0x00000000u); // 8022931C
  c->r[5]=c->r[3]|c->r[3]; // 80229320
  W32(c->r[31]+0x00000008u,c->r[0]); // 80229324
  c->r[4]=c->r[29]|c->r[29]; // 80229328
  c->r[3]=c->r[31]+0x00000008u; // 8022932C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80229330
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80229334
  c->r[0]=R32(c->r[30]+0x00000008u); // 80229338
  W32(c->r[31]+0x00000010u,c->r[0]); // 8022933C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80229340
  W32(c->r[31]+0x00000014u,c->r[0]); // 80229344
  c->r[0]=R32(c->r[30]+0x00000010u); // 80229348
  W32(c->r[31]+0x00000018u,c->r[0]); // 8022934C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80229350
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80229354
  c->r[0]=R32(c->r[30]+0x00000018u); // 80229358
  W32(c->r[31]+0x00000020u,c->r[0]); // 8022935C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80229360
  W32(c->r[31]+0x00000024u,c->r[0]); // 80229364
  c->r[0]=R32(c->r[30]+0x00000020u); // 80229368
  W32(c->r[31]+0x00000028u,c->r[0]); // 8022936C
  c->r[6]=R32(c->r[30]+0x00000024u); // 80229370
  c->r[0]=R32(c->r[30]+0x00000028u); // 80229374
  W32(c->r[31]+0x00000030u,c->r[0]); // 80229378
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 8022937C
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 80229380
  c->r[0]=R32(c->r[30]+0x00000030u); // 80229384
  W32(c->r[31]+0x00000038u,c->r[0]); // 80229388
  W32(c->r[31]+0x00000034u,c->r[6]); // 8022938C
  c->r[0]=R32(c->r[30]+0x00000034u); // 80229390
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80229394
  c->r[6]=R32(c->r[30]+0x00000038u); // 80229398
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8022939C
  W32(c->r[31]+0x00000044u,c->r[0]); // 802293A0
  W32(c->r[31]+0x00000040u,c->r[6]); // 802293A4
  c->r[0]=R16(c->r[30]+0x00000040u); // 802293A8
  W16(c->r[31]+0x00000048u,c->r[0]); // 802293AC
  c->r[0]=R8(c->r[30]+0x00000042u); // 802293B0
  W8(c->r[31]+0x0000004Au,c->r[0]); // 802293B4
  c->r[0]=R8(c->r[30]+0x00000043u); // 802293B8
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 802293BC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802293C0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 802293C4
  c->r[0]=R32(c->r[30]+0x00000048u); // 802293C8
  W32(c->r[31]+0x00000050u,c->r[0]); // 802293CC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802293D0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 802293D4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802293D8
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 802293DC
  c->r[0]=R32(c->r[30]+0x00000054u); // 802293E0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 802293E4
  c->r[0]=R32(c->r[30]+0x00000058u); // 802293E8
  W32(c->r[31]+0x00000060u,c->r[0]); // 802293EC
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 802293F0
  W32(c->r[31]+0x00000064u,c->r[0]); // 802293F4
  c->lr=0x802293FCu; f_80229E30(c); // 802293F8
  c->f[30]=c->f[1]; // 802293FC
  c->r[3]=c->r[31]+0x00000008u; // 80229400
  c->lr=0x80229408u; f_80226250(c); // 80229404
  c->f[31]=c->f[1]; // 80229408
  c->r[3]=c->r[31]+0x00000008u; // 8022940C
  c->lr=0x80229414u; f_80226240(c); // 80229410
  c->f[2]=c->f[31]; // 80229414
  c->r[3]=c->r[30]|c->r[30]; // 80229418
  c->lr=0x80229420u; f_802261F0(c); // 8022941C
  c->r[3]=c->r[31]+0x00000008u; // 80229420
  c->r[4]=0u+0x00000000u; // 80229424
  c->lr=0x8022942Cu; f_80225180(c); // 80229428
  c->r[10]=c->r[31]|c->r[31]; // 8022942C
  c->f[1]=c->f[30]; // 80229430
  {uint32_t ea=c->r[10]+0x00000098u; psq_load(c,31,ea,0,0);} // 80229434
  {uint32_t ea=c->r[31]+0x00000090u; c->f[31]=RF64(ea);} // 80229438
  {uint32_t ea=c->r[10]+0x00000088u; psq_load(c,30,ea,0,0);} // 8022943C
  {uint32_t ea=c->r[31]+0x00000080u; c->f[30]=RF64(ea);} // 80229440
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 80229444
  c->r[30]=R32(c->r[10]+0x00000078u); // 80229448
  c->r[29]=R32(c->r[10]+0x00000074u); // 8022944C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80229450
  c->r[0]=R32(c->r[10]+0x00000004u); // 80229454
  c->r[1]=c->r[10]|c->r[10]; // 80229458
  c->lr=c->r[0]; // 8022945C
  return; // 80229460
}

// fn_80229470
void f_80229470(Ctx* __restrict c) {
  trace_call(0x80229470u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80229470
  c->r[0]=c->lr; // 80229474
  W32(c->r[1]+0x00000094u,c->r[0]); // 80229478
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8022947C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80229480
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80229484
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80229488
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8022948C
  c->r[31]=c->r[3]|c->r[3]; // 80229490
  c->r[0]=R32(c->r[3]+0x00000000u); // 80229494
  W32(c->r[1]+0x00000008u,c->r[0]); // 80229498
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022949C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802294A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802294A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802294A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802294AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802294B0
  c->r[0]=R32(c->r[3]+0x00000010u); // 802294B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 802294B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802294BC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802294C0
  c->r[0]=R32(c->r[3]+0x00000018u); // 802294C4
  W32(c->r[1]+0x00000020u,c->r[0]); // 802294C8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802294CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802294D0
  c->r[0]=R32(c->r[3]+0x00000020u); // 802294D4
  W32(c->r[1]+0x00000028u,c->r[0]); // 802294D8
  c->r[6]=R32(c->r[3]+0x00000024u); // 802294DC
  c->r[0]=R32(c->r[3]+0x00000028u); // 802294E0
  W32(c->r[1]+0x00000030u,c->r[0]); // 802294E4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 802294E8
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 802294EC
  c->r[0]=R32(c->r[3]+0x00000030u); // 802294F0
  W32(c->r[1]+0x00000038u,c->r[0]); // 802294F4
  W32(c->r[1]+0x00000034u,c->r[6]); // 802294F8
  c->r[0]=R32(c->r[3]+0x00000034u); // 802294FC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80229500
  c->r[6]=R32(c->r[3]+0x00000038u); // 80229504
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80229508
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022950C
  W32(c->r[1]+0x00000040u,c->r[6]); // 80229510
  c->r[0]=R16(c->r[3]+0x00000040u); // 80229514
  W16(c->r[1]+0x00000048u,c->r[0]); // 80229518
  c->r[0]=R8(c->r[3]+0x00000042u); // 8022951C
  W8(c->r[1]+0x0000004Au,c->r[0]); // 80229520
  c->r[0]=R8(c->r[3]+0x00000043u); // 80229524
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 80229528
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022952C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80229530
  c->r[0]=R32(c->r[3]+0x00000048u); // 80229534
  W32(c->r[1]+0x00000050u,c->r[0]); // 80229538
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022953C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80229540
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229544
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80229548
  c->r[0]=R32(c->r[3]+0x00000054u); // 8022954C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80229550
  c->r[0]=R32(c->r[3]+0x00000058u); // 80229554
  W32(c->r[1]+0x00000060u,c->r[0]); // 80229558
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022955C
  c->r[3]=c->r[1]+0x00000008u; // 80229560
  W32(c->r[1]+0x00000064u,c->r[0]); // 80229564
  c->lr=0x8022956Cu; f_80229E30(c); // 80229568
  c->f[30]=c->f[1]; // 8022956C
  c->r[3]=c->r[1]+0x00000008u; // 80229570
  c->lr=0x80229578u; f_80226250(c); // 80229574
  c->f[31]=c->f[1]; // 80229578
  c->r[3]=c->r[1]+0x00000008u; // 8022957C
  c->lr=0x80229584u; f_80226240(c); // 80229580
  c->f[2]=c->f[31]; // 80229584
  c->r[3]=c->r[31]|c->r[31]; // 80229588
  c->lr=0x80229590u; f_802261F0(c); // 8022958C
  c->r[3]=c->r[1]+0x00000008u; // 80229590
  c->r[4]=0u+0x00000000u; // 80229594
  c->lr=0x8022959Cu; f_80225180(c); // 80229598
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8022959C
  c->f[1]=c->f[30]; // 802295A0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802295A4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802295A8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802295AC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 802295B0
  c->r[0]=R32(c->r[1]+0x00000094u); // 802295B4
  c->lr=c->r[0]; // 802295B8
  c->r[1]=c->r[1]+0x00000090u; // 802295BC
  return; // 802295C0
}

// fn_802295D0
void f_802295D0(Ctx* __restrict c) {
  trace_call(0x802295D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802295D0
  c->r[0]=c->lr; // 802295D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802295D8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802295DC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802295E0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802295E4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802295E8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 802295EC
  c->r[31]=c->r[3]|c->r[3]; // 802295F0
  W32(c->r[1]+0x00000068u,c->r[30]); // 802295F4
  c->r[30]=c->r[4]|c->r[4]; // 802295F8
  c->r[3]=c->r[30]|c->r[30]; // 802295FC
  c->lr=0x80229604u; f_800C297C(c); // 80229600
  c->r[0]=R32(c->r[31]+0x00000000u); // 80229604
  c->r[5]=c->r[3]|c->r[3]; // 80229608
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022960C
  c->r[4]=c->r[30]|c->r[30]; // 80229610
  c->r[3]=c->r[1]+0x00000008u; // 80229614
  c->r[0]=R32(c->r[31]+0x00000004u); // 80229618
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8022961C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80229620
  W32(c->r[1]+0x00000010u,c->r[0]); // 80229624
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80229628
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022962C
  c->r[0]=R32(c->r[31]+0x00000010u); // 80229630
  W32(c->r[1]+0x00000018u,c->r[0]); // 80229634
  c->r[0]=R32(c->r[31]+0x00000014u); // 80229638
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022963C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80229640
  W32(c->r[1]+0x00000020u,c->r[0]); // 80229644
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80229648
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022964C
  c->r[0]=R32(c->r[31]+0x00000020u); // 80229650
  W32(c->r[1]+0x00000028u,c->r[0]); // 80229654
  c->r[6]=R32(c->r[31]+0x00000024u); // 80229658
  c->r[0]=R32(c->r[31]+0x00000028u); // 8022965C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80229660
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80229664
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 80229668
  c->r[0]=R32(c->r[31]+0x00000030u); // 8022966C
  W32(c->r[1]+0x00000038u,c->r[0]); // 80229670
  W32(c->r[1]+0x00000034u,c->r[6]); // 80229674
  c->r[0]=R32(c->r[31]+0x00000034u); // 80229678
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8022967C
  c->r[6]=R32(c->r[31]+0x00000038u); // 80229680
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80229684
  W32(c->r[1]+0x00000044u,c->r[0]); // 80229688
  W32(c->r[1]+0x00000040u,c->r[6]); // 8022968C
  c->r[0]=R16(c->r[31]+0x00000040u); // 80229690
  W16(c->r[1]+0x00000048u,c->r[0]); // 80229694
  c->r[0]=R8(c->r[31]+0x00000042u); // 80229698
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8022969C
  c->r[0]=R8(c->r[31]+0x00000043u); // 802296A0
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 802296A4
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802296A8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 802296AC
  c->r[0]=R32(c->r[31]+0x00000048u); // 802296B0
  W32(c->r[1]+0x00000050u,c->r[0]); // 802296B4
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802296B8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 802296BC
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802296C0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 802296C4
  c->r[0]=R32(c->r[31]+0x00000054u); // 802296C8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802296CC
  c->r[0]=R32(c->r[31]+0x00000058u); // 802296D0
  W32(c->r[1]+0x00000060u,c->r[0]); // 802296D4
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 802296D8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802296DC
  c->lr=0x802296E4u; f_80229E30(c); // 802296E0
  c->f[30]=c->f[1]; // 802296E4
  c->r[3]=c->r[1]+0x00000008u; // 802296E8
  c->lr=0x802296F0u; f_80226250(c); // 802296EC
  c->f[31]=c->f[1]; // 802296F0
  c->r[3]=c->r[1]+0x00000008u; // 802296F4
  c->lr=0x802296FCu; f_80226240(c); // 802296F8
  c->f[2]=c->f[31]; // 802296FC
  c->r[3]=c->r[31]|c->r[31]; // 80229700
  c->lr=0x80229708u; f_802261F0(c); // 80229704
  c->r[3]=c->r[1]+0x00000008u; // 80229708
  c->r[4]=0u+0x00000000u; // 8022970C
  c->lr=0x80229714u; f_80225180(c); // 80229710
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80229714
  c->f[1]=c->f[30]; // 80229718
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8022971C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80229720
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80229724
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80229728
  c->r[30]=R32(c->r[1]+0x00000068u); // 8022972C
  c->r[0]=R32(c->r[1]+0x00000094u); // 80229730
  c->lr=c->r[0]; // 80229734
  c->r[1]=c->r[1]+0x00000090u; // 80229738
  return; // 8022973C
}

// fn_80229740
void f_80229740(Ctx* __restrict c) {
  trace_call(0x80229740u);
  c->r[6]=0u+0x80490000u; // 80229740
  c->r[0]=c->r[3]|c->r[3]; // 80229744
  c->r[3]=R32(c->r[6]+0x00001A78u); // 80229748
  c->r[5]=0u+0x803B0000u; // 8022974C
  W32(c->r[5]+0xFFFF8F40u,c->r[4]); // 80229750
  W32(c->r[6]+0x00001A78u,c->r[0]); // 80229754
  return; // 80229758
}

// fn_80229760
void f_80229760(Ctx* __restrict c) {
  trace_call(0x80229760u);
  c->r[5]=0u+0x80490000u; // 80229760
  c->r[6]=c->r[3]|c->r[3]; // 80229764
  c->r[3]=R32(c->r[5]+0x00001A78u); // 80229768
  c->r[4]=0u+0x803B0000u; // 8022976C
  c->r[0]=0u+0x00000000u; // 80229770
  W32(c->r[4]+0xFFFF8F40u,c->r[6]); // 80229774
  W32(c->r[5]+0x00001A78u,c->r[0]); // 80229778
  return; // 8022977C
}

// fn_80229780
void f_80229780(Ctx* __restrict c) {
  trace_call(0x80229780u);
  c->r[3]=0u+0x803B0000u; // 80229780
  c->r[3]=R32(c->r[3]+0xFFFF8F40u); // 80229784
  return; // 80229788
}

// fn_80229790
void f_80229790(Ctx* __restrict c) {
  trace_call(0x80229790u);
  c->r[3]=0u+0x80490000u; // 80229790
  c->r[3]=R32(c->r[3]+0x00001A78u); // 80229794
  return; // 80229798
}

// fn_802297A0
void f_802297A0(Ctx* __restrict c) {
  trace_call(0x802297A0u);
  f_800C8900(c); return; // 802297A0
}

// fn_802297B0
void f_802297B0(Ctx* __restrict c) {
  trace_call(0x802297B0u);
  f_800C297C(c); return; // 802297B0
}

// fn_802297C0
void f_802297C0(Ctx* __restrict c) {
  trace_call(0x802297C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802297C0
  c->r[0]=c->lr; // 802297C4
  c->r[6]=0u+0x80380000u; // 802297C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802297CC
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 802297D0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802297D4
  c->f[2]=c->f[1]; // 802297D8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802297DC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802297E0
  c->r[31]=c->r[5]|c->r[5]; // 802297E4
  W32(c->r[1]+0x00000078u,c->r[30]); // 802297E8
  c->r[30]=c->r[4]|c->r[4]; // 802297EC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802297F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802297F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 802297F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 802297FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80229800
  W32(c->r[1]+0x00000018u,c->r[0]); // 80229804
  c->r[0]=R32(c->r[3]+0x00000004u); // 80229808
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022980C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80229810
  W32(c->r[1]+0x00000020u,c->r[0]); // 80229814
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80229818
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022981C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80229820
  W32(c->r[1]+0x00000028u,c->r[0]); // 80229824
  c->r[0]=R32(c->r[3]+0x00000014u); // 80229828
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8022982C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80229830
  W32(c->r[1]+0x00000030u,c->r[0]); // 80229834
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80229838
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022983C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80229840
  W32(c->r[1]+0x00000038u,c->r[0]); // 80229844
  c->r[4]=R32(c->r[3]+0x00000024u); // 80229848
  c->r[0]=R32(c->r[3]+0x00000028u); // 8022984C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80229850
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80229854
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 80229858
  c->r[0]=R32(c->r[3]+0x00000030u); // 8022985C
  W32(c->r[1]+0x00000048u,c->r[0]); // 80229860
  W32(c->r[1]+0x00000044u,c->r[4]); // 80229864
  c->r[0]=R32(c->r[3]+0x00000034u); // 80229868
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8022986C
  c->r[4]=R32(c->r[3]+0x00000038u); // 80229870
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80229874
  W32(c->r[1]+0x00000054u,c->r[0]); // 80229878
  W32(c->r[1]+0x00000050u,c->r[4]); // 8022987C
  c->r[0]=R16(c->r[3]+0x00000040u); // 80229880
  W16(c->r[1]+0x00000058u,c->r[0]); // 80229884
  c->r[0]=R8(c->r[3]+0x00000042u); // 80229888
  W8(c->r[1]+0x0000005Au,c->r[0]); // 8022988C
  c->r[0]=R8(c->r[3]+0x00000043u); // 80229890
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 80229894
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229898
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8022989C
  c->r[0]=R32(c->r[3]+0x00000048u); // 802298A0
  W32(c->r[1]+0x00000060u,c->r[0]); // 802298A4
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802298A8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802298AC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802298B0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 802298B4
  c->r[0]=R32(c->r[3]+0x00000054u); // 802298B8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802298BC
  c->r[0]=R32(c->r[3]+0x00000058u); // 802298C0
  W32(c->r[1]+0x00000070u,c->r[0]); // 802298C4
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 802298C8
  c->r[3]=c->r[1]+0x00000018u; // 802298CC
  W32(c->r[1]+0x00000074u,c->r[0]); // 802298D0
  c->lr=0x802298D8u; f_802261F0(c); // 802298D4
  c->r[5]=c->r[30]|c->r[30]; // 802298D8
  c->r[6]=c->r[31]|c->r[31]; // 802298DC
  c->r[3]=c->r[1]+0x00000018u; // 802298E0
  c->r[4]=c->r[1]+0x00000008u; // 802298E4
  c->lr=0x802298ECu; f_80229930(c); // 802298E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802298EC
  c->r[3]=c->r[1]+0x00000018u; // 802298F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802298F4
  c->r[4]=0u+0x00000000u; // 802298F8
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 802298FC
  c->lr=0x80229904u; f_80225180(c); // 80229900
  c->f[1]=c->f[31]; // 80229904
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80229908
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8022990C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80229910
  c->r[30]=R32(c->r[1]+0x00000078u); // 80229914
  c->r[0]=R32(c->r[1]+0x00000094u); // 80229918
  c->lr=c->r[0]; // 8022991C
  c->r[1]=c->r[1]+0x00000090u; // 80229920
  return; // 80229924
}

// CalcLineRectImpl__Q36nw4hbm2ut17TextWriterBase<c>FPQ36nw4hbm2ut4RectPCci
void f_80229930(Ctx* __restrict c) {
  trace_call(0x80229930u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80229930
  c->r[0]=c->lr; // 80229934
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80229938
  c->r[11]=c->r[1]+0x00000080u; // 8022993C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80229940
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80229944
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80229948
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8022994C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80229950
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80229954
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 80229958
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 8022995C
  c->lr=0x80229964u; f_800C2E44(c); // 80229960
  c->r[25]=0u+0x00000000u; // 80229964
  W32(c->r[1]+0x00000040u,c->r[25]); // 80229968
  c->r[27]=c->r[3]|c->r[3]; // 8022996C
  c->r[28]=c->r[4]|c->r[4]; // 80229970
  W32(c->r[1]+0x00000044u,c->r[25]); // 80229974
  c->r[29]=c->r[5]|c->r[5]; // 80229978
  c->r[30]=c->r[6]|c->r[6]; // 8022997C
  W32(c->r[1]+0x00000048u,c->r[25]); // 80229980
  W32(c->r[1]+0x00000038u,c->r[3]); // 80229984
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 80229988
  c->lr=0x80229990u; f_802251D0(c); // 8022998C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80229990
  c->r[6]=0u+0x80380000u; // 80229994
  c->r[4]=R32(c->r[3]+0x00000008u); // 80229998
  c->r[31]=0u+0x00000000u; // 8022999C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802299A0
  c->r[3]=c->r[27]|c->r[27]; // 802299A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802299A8
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 802299AC
  W32(c->r[1]+0x00000028u,c->r[31]); // 802299B0
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 802299B4
  W32(c->r[1]+0x00000030u,c->r[4]); // 802299B8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802299BC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802299C0
  W32(c->r[1]+0x00000010u,c->r[0]); // 802299C4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 802299C8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[31]);} // 802299CC
  c->lr=0x802299D4u; f_802251D0(c); // 802299D0
  cmps(c,0,(int32_t)c->r[3],0); // 802299D4
  if (crb(c,2)) { goto L_802299F0; } // 802299D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802299DC
  c->r[12]=R32(c->r[12]+0x00000034u); // 802299E0
  c->ctr=c->r[12]; // 802299E4
  if (true) { c->lr=0x802299ECu; dispatch(c,c->ctr); } // 802299E8
  c->r[25]=c->r[3]|c->r[3]; // 802299EC
L_802299F0:;
  c->r[3]=c->r[27]|c->r[27]; // 802299F0
  c->lr=0x802299F8u; f_80225E60(c); // 802299F4
  c->r[3]=c->r[25]^0x80000000u; // 802299F8
  c->r[0]=0u+0x43300000u; // 802299FC
  W32(c->r[1]+0x00000054u,c->r[3]); // 80229A00
  c->r[4]=0u+0x80380000u; // 80229A04
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[4]=RF64(ea);} // 80229A08
  c->r[3]=0u+0x80380000u; // 80229A0C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80229A10
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80229A14
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=RF64(ea);} // 80229A18
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229A1C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80229A20
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80229A24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80229A28
  fcmp(c,0,c->f[0],c->f[1]); // 80229A2C
  if (!crb(c,1)) { goto L_80229A38; } // 80229A30
  goto L_80229A3C; // 80229A34
L_80229A38:;
  c->f[1]=c->f[0]; // 80229A38
L_80229A3C:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 80229A3C
  c->r[3]=c->r[27]|c->r[27]; // 80229A40
  c->lr=0x80229A48u; f_802251D0(c); // 80229A44
  cmps(c,0,(int32_t)c->r[3],0); // 80229A48
  if (crb(c,2)) { goto L_80229A68; } // 80229A4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80229A50
  c->r[12]=R32(c->r[12]+0x00000034u); // 80229A54
  c->ctr=c->r[12]; // 80229A58
  if (true) { c->lr=0x80229A60u; dispatch(c,c->ctr); } // 80229A5C
  c->r[25]=c->r[3]|c->r[3]; // 80229A60
  goto L_80229A6C; // 80229A64
L_80229A68:;
  c->r[25]=0u+0x00000000u; // 80229A68
L_80229A6C:;
  c->r[3]=c->r[27]|c->r[27]; // 80229A6C
  c->lr=0x80229A74u; f_80225E60(c); // 80229A70
  c->r[3]=c->r[25]^0x80000000u; // 80229A74
  c->r[0]=0u+0x43300000u; // 80229A78
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 80229A7C
  c->r[4]=0u+0x80380000u; // 80229A80
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[4]=RF64(ea);} // 80229A84
  c->r[3]=0u+0x80380000u; // 80229A88
  W32(c->r[1]+0x00000058u,c->r[0]); // 80229A8C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80229A90
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=RF64(ea);} // 80229A94
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229A98
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80229A9C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80229AA0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80229AA4
  fcmp(c,0,c->f[0],c->f[1]); // 80229AA8
  if (!crb(c,0)) { goto L_80229AB4; } // 80229AAC
  goto L_80229AB8; // 80229AB0
L_80229AB4:;
  c->f[1]=c->f[0]; // 80229AB4
L_80229AB8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 80229AB8
  c->r[3]=c->r[1]+0x00000028u; // 80229ABC
  c->r[12]=c->r[1]+0x0000002Cu; // 80229AC0
  W32(c->r[1]+0x00000028u,c->r[29]); // 80229AC4
  c->lr=0x80229ACCu; f_800C2CFC(c); // 80229AC8
  c->r[0]=c->r[0]|0x00000000u; // 80229ACC
  c->r[5]=0u+0x80380000u; // 80229AD0
  c->r[4]=0u+0x80380000u; // 80229AD4
  {uint32_t ea=c->r[5]+0xFFFFF918u; c->f[28]=c->ps1[28]=RF32(ea);} // 80229AD8
  c->r[25]=c->r[3]|c->r[3]; // 80229ADC
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[30]=RF64(ea);} // 80229AE0
  c->r[26]=0u+0x43300000u; // 80229AE4
  goto L_80229CBC; // 80229AE8
L_80229AEC:;
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 80229AEC
  cmps(c,0,(int32_t)c->r[0],32); // 80229AF0
  if (!crb(c,0)) { goto L_80229C08; } // 80229AF4
  c->r[0]=cntlz(c->r[31]); // 80229AF8
  c->f[1]=c->f[31]; // 80229AFC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80229B00
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80229B04
  c->r[3]=c->r[27]|c->r[27]; // 80229B08
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[28]);} // 80229B0C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[28]);} // 80229B10
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[28]);} // 80229B14
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80229B18
  W32(c->r[1]+0x00000048u,c->r[0]); // 80229B1C
  c->lr=0x80229B24u; f_80226200(c); // 80229B20
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 80229B24
  c->r[4]=c->r[1]+0x00000018u; // 80229B28
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 80229B2C
  c->r[6]=c->r[1]+0x00000038u; // 80229B30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80229B34
  c->r[12]=R32(c->r[12]+0x00000010u); // 80229B38
  c->ctr=c->r[12]; // 80229B3C
  if (true) { c->lr=0x80229B44u; dispatch(c,c->ctr); } // 80229B40
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80229B44
  c->r[25]=c->r[3]|c->r[3]; // 80229B48
  W32(c->r[1]+0x00000028u,c->r[0]); // 80229B4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229B50
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229B54
  fcmp(c,0,c->f[0],c->f[1]); // 80229B58
  if (!crb(c,1)) { goto L_80229B64; } // 80229B5C
  goto L_80229B68; // 80229B60
L_80229B64:;
  c->f[1]=c->f[0]; // 80229B64
L_80229B68:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 80229B68
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229B6C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80229B70
  fcmp(c,0,c->f[0],c->f[1]); // 80229B74
  if (!crb(c,1)) { goto L_80229B80; } // 80229B78
  goto L_80229B84; // 80229B7C
L_80229B80:;
  c->f[1]=c->f[0]; // 80229B80
L_80229B84:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 80229B84
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229B88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229B8C
  fcmp(c,0,c->f[0],c->f[1]); // 80229B90
  if (!crb(c,0)) { goto L_80229B9C; } // 80229B94
  goto L_80229BA0; // 80229B98
L_80229B9C:;
  c->f[1]=c->f[0]; // 80229B9C
L_80229BA0:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80229BA0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80229BA4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229BA8
  fcmp(c,0,c->f[0],c->f[1]); // 80229BAC
  if (!crb(c,0)) { goto L_80229BB8; } // 80229BB0
  goto L_80229BBC; // 80229BB4
L_80229BB8:;
  c->f[1]=c->f[0]; // 80229BB8
L_80229BBC:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 80229BBC
  c->r[3]=c->r[27]|c->r[27]; // 80229BC0
  c->lr=0x80229BC8u; f_80226240(c); // 80229BC4
  cmps(c,0,(int32_t)c->r[25],4); // 80229BC8
  c->f[31]=c->f[1]; // 80229BCC
  if (!crb(c,2)) { goto L_80229BDC; } // 80229BD0
  c->r[3]=c->r[30]|c->r[30]; // 80229BD4
  goto L_80229CD4; // 80229BD8
L_80229BDC:;
  cmps(c,0,(int32_t)c->r[25],1); // 80229BDC
  if (!crb(c,2)) { goto L_80229BEC; } // 80229BE0
  c->r[31]=0u+0x00000000u; // 80229BE4
  goto L_80229CA8; // 80229BE8
L_80229BEC:;
  cmps(c,0,(int32_t)c->r[25],2); // 80229BEC
  if (!crb(c,2)) { goto L_80229BFC; } // 80229BF0
  c->r[31]=0u+0x00000001u; // 80229BF4
  goto L_80229CA8; // 80229BF8
L_80229BFC:;
  cmps(c,0,(int32_t)c->r[25],3); // 80229BFC
  if (crb(c,2)) { goto L_80229CCC; } // 80229C00
  goto L_80229CA8; // 80229C04
L_80229C08:;
  cmps(c,0,(int32_t)c->r[31],0); // 80229C08
  if (crb(c,2)) { goto L_80229C18; } // 80229C0C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80229C10
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80229C14
L_80229C18:;
  c->r[3]=c->r[27]|c->r[27]; // 80229C18
  c->r[31]=0u+0x00000001u; // 80229C1C
  c->lr=0x80229C24u; f_80226090(c); // 80229C20
  cmps(c,0,(int32_t)c->r[3],0); // 80229C24
  if (crb(c,2)) { goto L_80229C3C; } // 80229C28
  c->r[3]=c->r[27]|c->r[27]; // 80229C2C
  c->lr=0x80229C34u; f_802260A0(c); // 80229C30
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80229C34
  goto L_80229C80; // 80229C38
L_80229C3C:;
  c->r[3]=c->r[27]|c->r[27]; // 80229C3C
  c->lr=0x80229C44u; f_80225E50(c); // 80229C40
  c->f[29]=c->f[1]; // 80229C44
  c->r[3]=c->r[27]|c->r[27]; // 80229C48
  c->lr=0x80229C50u; f_802251D0(c); // 80229C4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80229C50
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 80229C54
  c->r[12]=R32(c->r[12]+0x00000048u); // 80229C58
  c->ctr=c->r[12]; // 80229C5C
  if (true) { c->lr=0x80229C64u; dispatch(c,c->ctr); } // 80229C60
  c->r[0]=c->r[3]^0x80000000u; // 80229C64
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80229C68
  W32(c->r[1]+0x00000058u,c->r[26]); // 80229C6C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 80229C70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80229C74
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 80229C78
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80229C7C
L_80229C80:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229C80
  fcmp(c,0,c->f[0],c->f[31]); // 80229C84
  if (!crb(c,1)) { goto L_80229C90; } // 80229C88
  c->f[0]=c->f[31]; // 80229C8C
L_80229C90:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229C90
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80229C94
  fcmp(c,0,c->f[1],c->f[31]); // 80229C98
  if (!crb(c,0)) { goto L_80229CA4; } // 80229C9C
  c->f[1]=c->f[31]; // 80229CA0
L_80229CA4:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80229CA4
L_80229CA8:;
  c->r[3]=c->r[1]+0x00000028u; // 80229CA8
  c->r[12]=c->r[1]+0x0000002Cu; // 80229CAC
  c->lr=0x80229CB4u; f_800C2CFC(c); // 80229CB0
  c->r[0]=c->r[0]|0x00000000u; // 80229CB4
  c->r[25]=c->r[3]|c->r[3]; // 80229CB8
L_80229CBC:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 80229CBC
  c->r[0]=c->r[4]-c->r[29]; // 80229CC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80229CC4
  if (!crb(c,1)) { IRQCHK(c); goto L_80229AEC; } // 80229CC8
L_80229CCC:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 80229CCC
  c->r[3]=c->r[0]-c->r[29]; // 80229CD0
L_80229CD4:;
  c->r[11]=c->r[1]+0x00000080u; // 80229CD4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80229CD8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80229CDC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 80229CE0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 80229CE4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 80229CE8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 80229CEC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 80229CF0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 80229CF4
  c->lr=0x80229CFCu; f_800C2E90(c); // 80229CF8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80229CFC
  c->lr=c->r[0]; // 80229D00
  c->r[1]=c->r[1]+0x000000C0u; // 80229D04
  return; // 80229D08
}

// CalcStringRectImpl__Q36nw4hbm2ut17TextWriterBase<c>FPQ36nw4hbm2ut4RectPCci
void f_80229D10(Ctx* __restrict c) {
  trace_call(0x80229D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80229D10
  c->r[0]=c->lr; // 80229D14
  W32(c->r[1]+0x00000044u,c->r[0]); // 80229D18
  c->r[11]=c->r[1]+0x00000030u; // 80229D1C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80229D20
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80229D24
  c->lr=0x80229D2Cu; f_800C2E4C(c); // 80229D28
  c->r[31]=0u+0x80380000u; // 80229D2C
  c->r[27]=c->r[3]|c->r[3]; // 80229D30
  {uint32_t ea=c->r[31]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229D34
  c->r[28]=c->r[4]|c->r[4]; // 80229D38
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 80229D3C
  c->r[29]=c->r[5]|c->r[5]; // 80229D40
  c->f[2]=c->f[1]; // 80229D44
  c->r[30]=c->r[6]|c->r[6]; // 80229D48
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 80229D4C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 80229D50
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 80229D54
  c->lr=0x80229D5Cu; f_802261F0(c); // 80229D58
  {uint32_t ea=c->r[31]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 80229D5C
L_80229D60:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80229D60
  c->r[3]=c->r[27]|c->r[27]; // 80229D64
  c->r[5]=c->r[29]|c->r[29]; // 80229D68
  c->r[6]=c->r[30]|c->r[30]; // 80229D6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 80229D70
  c->r[4]=c->r[1]+0x00000008u; // 80229D74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80229D78
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 80229D7C
  c->lr=0x80229D84u; f_80229930(c); // 80229D80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229D84
  c->r[29]=c->r[29]+c->r[3]; // 80229D88
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229D8C
  c->r[30]=c->r[30]-c->r[3]; // 80229D90
  fcmp(c,0,c->f[0],c->f[1]); // 80229D94
  if (!crb(c,1)) { goto L_80229DA0; } // 80229D98
  goto L_80229DA4; // 80229D9C
L_80229DA0:;
  c->f[1]=c->f[0]; // 80229DA0
L_80229DA4:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 80229DA4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229DA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80229DAC
  fcmp(c,0,c->f[0],c->f[1]); // 80229DB0
  if (!crb(c,1)) { goto L_80229DBC; } // 80229DB4
  goto L_80229DC0; // 80229DB8
L_80229DBC:;
  c->f[1]=c->f[0]; // 80229DBC
L_80229DC0:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 80229DC0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229DC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229DC8
  fcmp(c,0,c->f[0],c->f[1]); // 80229DCC
  if (!crb(c,0)) { goto L_80229DD8; } // 80229DD0
  goto L_80229DDC; // 80229DD4
L_80229DD8:;
  c->f[1]=c->f[0]; // 80229DD8
L_80229DDC:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 80229DDC
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80229DE0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80229DE4
  fcmp(c,0,c->f[0],c->f[1]); // 80229DE8
  if (!crb(c,0)) { goto L_80229DF4; } // 80229DEC
  goto L_80229DF8; // 80229DF0
L_80229DF4:;
  c->f[1]=c->f[0]; // 80229DF4
L_80229DF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80229DF8
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 80229DFC
  if (crb(c,1)) { IRQCHK(c); goto L_80229D60; } // 80229E00
  c->r[11]=c->r[1]+0x00000030u; // 80229E04
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80229E08
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80229E0C
  c->lr=0x80229E14u; f_800C2E98(c); // 80229E10
  c->r[0]=R32(c->r[1]+0x00000044u); // 80229E14
  c->lr=c->r[0]; // 80229E18
  c->r[1]=c->r[1]+0x00000040u; // 80229E1C
  return; // 80229E20
}

// PrintImpl__Q36nw4hbm2ut17TextWriterBase<c>FPCci
void f_80229E30(Ctx* __restrict c) {
  trace_call(0x80229E30u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80229E30
  c->r[0]=c->lr; // 80229E34
  W32(c->r[1]+0x000001D4u,c->r[0]); // 80229E38
  c->r[11]=c->r[1]+0x00000150u; // 80229E3C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 80229E40
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 80229E44
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 80229E48
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 80229E4C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 80229E50
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 80229E54
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 80229E58
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 80229E5C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[27]);} // 80229E60
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,27,ea,0,0);} // 80229E64
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[26]);} // 80229E68
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,26,ea,0,0);} // 80229E6C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[25]);} // 80229E70
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,25,ea,0,0);} // 80229E74
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[24]);} // 80229E78
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,24,ea,0,0);} // 80229E7C
  c->lr=0x80229E84u; f_800C2E44(c); // 80229E80
  c->r[28]=c->r[3]|c->r[3]; // 80229E84
  c->r[29]=c->r[4]|c->r[4]; // 80229E88
  c->r[30]=c->r[5]|c->r[5]; // 80229E8C
  c->lr=0x80229E94u; f_80226240(c); // 80229E90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80229E94
  c->r[3]=c->r[28]|c->r[28]; // 80229E98
  c->lr=0x80229EA0u; f_80226250(c); // 80229E9C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80229EA0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80229EA4
  c->r[3]=c->r[28]|c->r[28]; // 80229EA8
  c->r[6]=c->r[29]|c->r[29]; // 80229EAC
  c->r[7]=c->r[30]|c->r[30]; // 80229EB0
  c->r[4]=c->r[1]+0x0000000Cu; // 80229EB4
  c->r[5]=c->r[1]+0x00000008u; // 80229EB8
  c->r[31]=0u+0x00000000u; // 80229EBC
  c->lr=0x80229EC4u; f_8022A3E0(c); // 80229EC0
  c->f[29]=c->f[1]; // 80229EC4
  c->r[3]=c->r[28]|c->r[28]; // 80229EC8
  c->lr=0x80229ED0u; f_80226240(c); // 80229ECC
  c->r[3]=c->r[28]|c->r[28]; // 80229ED0
  c->lr=0x80229ED8u; f_80226250(c); // 80229ED4
  c->r[0]=0u+0x00000000u; // 80229ED8
  W32(c->r[1]+0x00000058u,c->r[0]); // 80229EDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80229EE0
  c->f[30]=c->ps1[30]=S(c->f[28]-c->f[1]); // 80229EE4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80229EE8
  c->r[3]=c->r[28]|c->r[28]; // 80229EEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80229EF0
  W32(c->r[1]+0x00000060u,c->r[0]); // 80229EF4
  W32(c->r[1]+0x00000050u,c->r[28]); // 80229EF8
  W32(c->r[1]+0x00000054u,c->r[29]); // 80229EFC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 80229F00
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80229F04
  c->lr=0x80229F0Cu; f_802251D0(c); // 80229F08
  c->r[5]=R32(c->r[3]+0x00000004u); // 80229F0C
  c->r[12]=c->r[1]+0x00000044u; // 80229F10
  c->r[4]=R32(c->r[3]+0x00000008u); // 80229F14
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80229F18
  c->r[3]=c->r[1]+0x00000040u; // 80229F1C
  W32(c->r[1]+0x00000030u,c->r[5]); // 80229F20
  W32(c->r[1]+0x00000034u,c->r[4]); // 80229F24
  W32(c->r[1]+0x00000038u,c->r[0]); // 80229F28
  W32(c->r[1]+0x00000044u,c->r[5]); // 80229F2C
  W32(c->r[1]+0x00000048u,c->r[4]); // 80229F30
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80229F34
  W32(c->r[1]+0x00000040u,c->r[29]); // 80229F38
  c->lr=0x80229F40u; f_800C2CFC(c); // 80229F3C
  c->r[0]=c->r[0]|0x00000000u; // 80229F40
  c->r[4]=0u+0x80380000u; // 80229F44
  c->r[5]=0u+0x80380000u; // 80229F48
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 80229F4C
  c->r[4]=0u+0x80380000u; // 80229F50
  {uint32_t ea=c->r[5]+0xFFFFF928u; c->f[25]=c->ps1[25]=RF32(ea);} // 80229F54
  c->r[26]=c->r[3]|c->r[3]; // 80229F58
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[27]=RF64(ea);} // 80229F5C
  c->r[27]=0u+0x43300000u; // 80229F60
  goto L_8022A33C; // 80229F64
L_80229F68:;
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 80229F68
  cmps(c,0,(int32_t)c->r[4],32); // 80229F6C
  if (!crb(c,0)) { goto L_8022A29C; } // 80229F70
  c->r[0]=cntlz(c->r[31]); // 80229F74
  W32(c->r[1]+0x00000054u,c->r[3]); // 80229F78
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80229F7C
  c->r[5]=c->r[1]+0x00000050u; // 80229F80
  W32(c->r[1]+0x00000060u,c->r[0]); // 80229F84
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 80229F88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80229F8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80229F90
  c->ctr=c->r[12]; // 80229F94
  if (true) { c->lr=0x80229F9Cu; dispatch(c,c->ctr); } // 80229F98
  cmps(c,0,(int32_t)c->r[3],3); // 80229F9C
  if (!crb(c,2)) { goto L_8022A268; } // 80229FA0
  c->r[0]=R32(c->r[28]+0x00000058u); // 80229FA4
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 80229FA8
  cmpu(c,0,c->r[3],0x00000001u); // 80229FAC
  if (!crb(c,2)) { goto L_8022A0F0; } // 80229FB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[31]);} // 80229FB4
  c->f[1]=c->f[31]; // 80229FB8
  c->f[2]=c->f[31]; // 80229FBC
  c->r[31]=R32(c->r[1]+0x00000054u); // 80229FC0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 80229FC4
  c->r[3]=c->r[1]+0x000000C8u; // 80229FC8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 80229FCC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 80229FD0
  c->r[4]=R32(c->r[28]+0x00000000u); // 80229FD4
  W32(c->r[1]+0x000000C8u,c->r[4]); // 80229FD8
  c->r[4]=R32(c->r[28]+0x00000004u); // 80229FDC
  W32(c->r[1]+0x000000CCu,c->r[4]); // 80229FE0
  c->r[4]=R32(c->r[28]+0x00000008u); // 80229FE4
  W32(c->r[1]+0x000000D0u,c->r[4]); // 80229FE8
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80229FEC
  W32(c->r[1]+0x000000D4u,c->r[4]); // 80229FF0
  c->r[4]=R32(c->r[28]+0x00000010u); // 80229FF4
  W32(c->r[1]+0x000000D8u,c->r[4]); // 80229FF8
  c->r[4]=R32(c->r[28]+0x00000014u); // 80229FFC
  W32(c->r[1]+0x000000DCu,c->r[4]); // 8022A000
  c->r[4]=R32(c->r[28]+0x00000018u); // 8022A004
  W32(c->r[1]+0x000000E0u,c->r[4]); // 8022A008
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8022A00C
  W32(c->r[1]+0x000000E4u,c->r[4]); // 8022A010
  c->r[4]=R32(c->r[28]+0x00000020u); // 8022A014
  W32(c->r[1]+0x000000E8u,c->r[4]); // 8022A018
  c->r[5]=R32(c->r[28]+0x00000024u); // 8022A01C
  c->r[4]=R32(c->r[28]+0x00000028u); // 8022A020
  W32(c->r[1]+0x000000F0u,c->r[4]); // 8022A024
  W32(c->r[1]+0x000000ECu,c->r[5]); // 8022A028
  c->r[5]=R32(c->r[28]+0x0000002Cu); // 8022A02C
  c->r[4]=R32(c->r[28]+0x00000030u); // 8022A030
  W32(c->r[1]+0x000000F8u,c->r[4]); // 8022A034
  W32(c->r[1]+0x000000F4u,c->r[5]); // 8022A038
  c->r[4]=R32(c->r[28]+0x00000034u); // 8022A03C
  W32(c->r[1]+0x000000FCu,c->r[4]); // 8022A040
  c->r[5]=R32(c->r[28]+0x00000038u); // 8022A044
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 8022A048
  W32(c->r[1]+0x00000104u,c->r[4]); // 8022A04C
  W32(c->r[1]+0x00000100u,c->r[5]); // 8022A050
  c->r[4]=R16(c->r[28]+0x00000040u); // 8022A054
  W16(c->r[1]+0x00000108u,c->r[4]); // 8022A058
  c->r[4]=R8(c->r[28]+0x00000042u); // 8022A05C
  W8(c->r[1]+0x0000010Au,c->r[4]); // 8022A060
  c->r[4]=R8(c->r[28]+0x00000043u); // 8022A064
  W8(c->r[1]+0x0000010Bu,c->r[4]); // 8022A068
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A06C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8022A070
  c->r[4]=R32(c->r[28]+0x00000048u); // 8022A074
  W32(c->r[1]+0x00000110u,c->r[4]); // 8022A078
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A07C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8022A080
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A084
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8022A088
  c->r[4]=R32(c->r[28]+0x00000054u); // 8022A08C
  W32(c->r[1]+0x0000011Cu,c->r[4]); // 8022A090
  W32(c->r[1]+0x00000120u,c->r[0]); // 8022A094
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8022A098
  W32(c->r[1]+0x00000124u,c->r[0]); // 8022A09C
  c->lr=0x8022A0A4u; f_802261F0(c); // 8022A0A0
  c->r[0]=c->r[31]-c->r[29]; // 8022A0A4
  c->r[5]=c->r[31]|c->r[31]; // 8022A0A8
  c->r[3]=c->r[1]+0x000000C8u; // 8022A0AC
  c->r[4]=c->r[1]+0x00000020u; // 8022A0B0
  c->r[6]=c->r[30]-c->r[0]; // 8022A0B4
  c->lr=0x8022A0BCu; f_80229930(c); // 8022A0B8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A0BC
  c->r[3]=c->r[1]+0x000000C8u; // 8022A0C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A0C4
  c->r[4]=0u+0x00000000u; // 8022A0C8
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8022A0CC
  c->lr=0x8022A0D4u; f_80225180(c); // 8022A0D0
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8022A0D4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A0D8
  c->r[3]=c->r[28]|c->r[28]; // 8022A0DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[25]); // 8022A0E0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022A0E4
  c->lr=0x8022A0ECu; f_80226200(c); // 8022A0E8
  goto L_8022A260; // 8022A0EC
L_8022A0F0:;
  cmpu(c,0,c->r[3],0x00000002u); // 8022A0F0
  if (!crb(c,2)) { goto L_8022A230; } // 8022A0F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8022A0F8
  c->f[1]=c->f[31]; // 8022A0FC
  c->f[2]=c->f[31]; // 8022A100
  c->r[31]=R32(c->r[1]+0x00000054u); // 8022A104
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8022A108
  c->r[3]=c->r[1]+0x00000068u; // 8022A10C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8022A110
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 8022A114
  c->r[4]=R32(c->r[28]+0x00000000u); // 8022A118
  W32(c->r[1]+0x00000068u,c->r[4]); // 8022A11C
  c->r[4]=R32(c->r[28]+0x00000004u); // 8022A120
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8022A124
  c->r[4]=R32(c->r[28]+0x00000008u); // 8022A128
  W32(c->r[1]+0x00000070u,c->r[4]); // 8022A12C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8022A130
  W32(c->r[1]+0x00000074u,c->r[4]); // 8022A134
  c->r[4]=R32(c->r[28]+0x00000010u); // 8022A138
  W32(c->r[1]+0x00000078u,c->r[4]); // 8022A13C
  c->r[4]=R32(c->r[28]+0x00000014u); // 8022A140
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 8022A144
  c->r[4]=R32(c->r[28]+0x00000018u); // 8022A148
  W32(c->r[1]+0x00000080u,c->r[4]); // 8022A14C
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8022A150
  W32(c->r[1]+0x00000084u,c->r[4]); // 8022A154
  c->r[4]=R32(c->r[28]+0x00000020u); // 8022A158
  W32(c->r[1]+0x00000088u,c->r[4]); // 8022A15C
  c->r[5]=R32(c->r[28]+0x00000024u); // 8022A160
  c->r[4]=R32(c->r[28]+0x00000028u); // 8022A164
  W32(c->r[1]+0x00000090u,c->r[4]); // 8022A168
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 8022A16C
  c->r[5]=R32(c->r[28]+0x0000002Cu); // 8022A170
  c->r[4]=R32(c->r[28]+0x00000030u); // 8022A174
  W32(c->r[1]+0x00000098u,c->r[4]); // 8022A178
  W32(c->r[1]+0x00000094u,c->r[5]); // 8022A17C
  c->r[4]=R32(c->r[28]+0x00000034u); // 8022A180
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 8022A184
  c->r[5]=R32(c->r[28]+0x00000038u); // 8022A188
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 8022A18C
  W32(c->r[1]+0x000000A4u,c->r[4]); // 8022A190
  W32(c->r[1]+0x000000A0u,c->r[5]); // 8022A194
  c->r[4]=R16(c->r[28]+0x00000040u); // 8022A198
  W16(c->r[1]+0x000000A8u,c->r[4]); // 8022A19C
  c->r[4]=R8(c->r[28]+0x00000042u); // 8022A1A0
  W8(c->r[1]+0x000000AAu,c->r[4]); // 8022A1A4
  c->r[4]=R8(c->r[28]+0x00000043u); // 8022A1A8
  W8(c->r[1]+0x000000ABu,c->r[4]); // 8022A1AC
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A1B0
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8022A1B4
  c->r[4]=R32(c->r[28]+0x00000048u); // 8022A1B8
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8022A1BC
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A1C0
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8022A1C4
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A1C8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8022A1CC
  c->r[4]=R32(c->r[28]+0x00000054u); // 8022A1D0
  W32(c->r[1]+0x000000BCu,c->r[4]); // 8022A1D4
  W32(c->r[1]+0x000000C0u,c->r[0]); // 8022A1D8
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8022A1DC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022A1E0
  c->lr=0x8022A1E8u; f_802261F0(c); // 8022A1E4
  c->r[0]=c->r[31]-c->r[29]; // 8022A1E8
  c->r[5]=c->r[31]|c->r[31]; // 8022A1EC
  c->r[3]=c->r[1]+0x00000068u; // 8022A1F0
  c->r[4]=c->r[1]+0x00000010u; // 8022A1F4
  c->r[6]=c->r[30]-c->r[0]; // 8022A1F8
  c->lr=0x8022A200u; f_80229930(c); // 8022A1FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A200
  c->r[3]=c->r[1]+0x00000068u; // 8022A204
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A208
  c->r[4]=0u+0x00000000u; // 8022A20C
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8022A210
  c->lr=0x8022A218u; f_80225180(c); // 8022A214
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8022A218
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A21C
  c->r[3]=c->r[28]|c->r[28]; // 8022A220
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022A224
  c->lr=0x8022A22Cu; f_80226200(c); // 8022A228
  goto L_8022A260; // 8022A22C
L_8022A230:;
  c->r[3]=c->r[28]|c->r[28]; // 8022A230
  c->lr=0x8022A238u; f_80226240(c); // 8022A234
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A238
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8022A23C
  fcmp(c,0,c->f[29],c->f[0]); // 8022A240
  if (!crb(c,0)) { goto L_8022A24C; } // 8022A244
  goto L_8022A250; // 8022A248
L_8022A24C:;
  c->f[0]=c->f[29]; // 8022A24C
L_8022A250:;
  c->f[29]=c->f[0]; // 8022A250
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A254
  c->r[3]=c->r[28]|c->r[28]; // 8022A258
  c->lr=0x8022A260u; f_80226200(c); // 8022A25C
L_8022A260:;
  c->r[31]=0u+0x00000000u; // 8022A260
  goto L_8022A290; // 8022A264
L_8022A268:;
  cmps(c,0,(int32_t)c->r[3],1); // 8022A268
  if (!crb(c,2)) { goto L_8022A278; } // 8022A26C
  c->r[31]=0u+0x00000000u; // 8022A270
  goto L_8022A290; // 8022A274
L_8022A278:;
  cmps(c,0,(int32_t)c->r[3],2); // 8022A278
  if (!crb(c,2)) { goto L_8022A288; } // 8022A27C
  c->r[31]=0u+0x00000001u; // 8022A280
  goto L_8022A290; // 8022A284
L_8022A288:;
  cmps(c,0,(int32_t)c->r[3],4); // 8022A288
  if (crb(c,2)) { goto L_8022A34C; } // 8022A28C
L_8022A290:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8022A290
  W32(c->r[1]+0x00000040u,c->r[0]); // 8022A294
  goto L_8022A328; // 8022A298
L_8022A29C:;
  c->r[3]=c->r[28]|c->r[28]; // 8022A29C
  c->lr=0x8022A2A4u; f_80226250(c); // 8022A2A0
  cmps(c,0,(int32_t)c->r[31],0); // 8022A2A4
  c->f[24]=c->f[1]; // 8022A2A8
  if (crb(c,2)) { goto L_8022A2BC; } // 8022A2AC
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A2B0
  c->r[3]=c->r[28]|c->r[28]; // 8022A2B4
  c->lr=0x8022A2BCu; f_80226220(c); // 8022A2B8
L_8022A2BC:;
  c->r[3]=c->r[28]|c->r[28]; // 8022A2BC
  c->r[31]=0u+0x00000001u; // 8022A2C0
  c->lr=0x8022A2C8u; f_802251D0(c); // 8022A2C4
  c->r[25]=c->r[3]|c->r[3]; // 8022A2C8
  c->r[3]=c->r[28]|c->r[28]; // 8022A2CC
  c->lr=0x8022A2D4u; f_80225E60(c); // 8022A2D0
  c->r[12]=R32(c->r[25]+0x00000000u); // 8022A2D4
  c->f[26]=c->f[1]; // 8022A2D8
  c->r[3]=c->r[25]|c->r[25]; // 8022A2DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8022A2E0
  c->ctr=c->r[12]; // 8022A2E4
  if (true) { c->lr=0x8022A2ECu; dispatch(c,c->ctr); } // 8022A2E8
  c->r[0]=0u-c->r[3]; // 8022A2EC
  W32(c->r[1]+0x00000128u,c->r[27]); // 8022A2F0
  c->r[0]=c->r[0]^0x80000000u; // 8022A2F4
  c->r[3]=c->r[28]|c->r[28]; // 8022A2F8
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8022A2FC
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 8022A300
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8022A304
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 8022A308
  c->lr=0x8022A310u; f_80226230(c); // 8022A30C
  c->r[3]=c->r[28]|c->r[28]; // 8022A310
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 8022A314
  c->lr=0x8022A31Cu; f_802260B0(c); // 8022A318
  c->f[1]=c->f[24]; // 8022A31C
  c->r[3]=c->r[28]|c->r[28]; // 8022A320
  c->lr=0x8022A328u; f_80226210(c); // 8022A324
L_8022A328:;
  c->r[3]=c->r[1]+0x00000040u; // 8022A328
  c->r[12]=c->r[1]+0x00000044u; // 8022A32C
  c->lr=0x8022A334u; f_800C2CFC(c); // 8022A330
  c->r[0]=c->r[0]|0x00000000u; // 8022A334
  c->r[26]=c->r[3]|c->r[3]; // 8022A338
L_8022A33C:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 8022A33C
  c->r[0]=c->r[3]-c->r[29]; // 8022A340
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8022A344
  if (!crb(c,1)) { IRQCHK(c); goto L_80229F68; } // 8022A348
L_8022A34C:;
  c->r[0]=R32(c->r[28]+0x00000058u); // 8022A34C
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022A350
  cmpu(c,0,c->r[0],0x00000100u); // 8022A354
  if (crb(c,2)) { goto L_8022A364; } // 8022A358
  cmpu(c,0,c->r[0],0x00000200u); // 8022A35C
  if (!crb(c,2)) { goto L_8022A374; } // 8022A360
L_8022A364:;
  c->f[1]=c->f[28]; // 8022A364
  c->r[3]=c->r[28]|c->r[28]; // 8022A368
  c->lr=0x8022A370u; f_80226210(c); // 8022A36C
  goto L_8022A380; // 8022A370
L_8022A374:;
  c->f[1]=c->f[30]; // 8022A374
  c->r[3]=c->r[28]|c->r[28]; // 8022A378
  c->lr=0x8022A380u; f_80226230(c); // 8022A37C
L_8022A380:;
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8022A380
  c->f[1]=c->f[29]; // 8022A384
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8022A388
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8022A38C
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8022A390
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8022A394
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8022A398
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8022A39C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8022A3A0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,27,ea,0,0);} // 8022A3A4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[27]=RF64(ea);} // 8022A3A8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,26,ea,0,0);} // 8022A3AC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[26]=RF64(ea);} // 8022A3B0
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,25,ea,0,0);} // 8022A3B4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[25]=RF64(ea);} // 8022A3B8
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,24,ea,0,0);} // 8022A3BC
  {uint32_t ea=c->r[1]+0x00000150u; c->f[24]=RF64(ea);} // 8022A3C0
  c->r[11]=c->r[1]+0x00000150u; // 8022A3C4
  c->lr=0x8022A3CCu; f_800C2E90(c); // 8022A3C8
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8022A3CC
  c->lr=c->r[0]; // 8022A3D0
  c->r[1]=c->r[1]+0x000001D0u; // 8022A3D4
  return; // 8022A3D8
}

// AdjustCursor__Q36nw4hbm2ut17TextWriterBase<c>FPfPfPCci
void f_8022A3E0(Ctx* __restrict c) {
  trace_call(0x8022A3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A3E0
  c->r[0]=c->lr; // 8022A3E4
  W32(c->r[1]+0x00000194u,c->r[0]); // 8022A3E8
  c->r[11]=c->r[1]+0x00000170u; // 8022A3EC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 8022A3F0
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 8022A3F4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 8022A3F8
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 8022A3FC
  c->lr=0x8022A404u; f_800C2E4C(c); // 8022A400
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022A404
  c->r[8]=0u+0x80380000u; // 8022A408
  {uint32_t ea=c->r[8]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022A40C
  c->r[27]=c->r[3]|c->r[3]; // 8022A410
  c->r[8]=c->r[0]&0x00000333u; cr0(c,c->r[8]); // 8022A414
  c->r[28]=c->r[4]|c->r[4]; // 8022A418
  c->f[2]=c->f[31]; // 8022A41C
  c->r[29]=c->r[5]|c->r[5]; // 8022A420
  c->r[30]=c->r[6]|c->r[6]; // 8022A424
  c->r[31]=c->r[7]|c->r[7]; // 8022A428
  cmpu(c,0,c->r[8],0x00000300u); // 8022A42C
  if (crb(c,2)) { goto L_8022A550; } // 8022A430
  cmps(c,0,(int32_t)c->r[8],0); // 8022A434
  if (crb(c,2)) { goto L_8022A550; } // 8022A438
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8022A43C
  c->r[5]=c->r[30]|c->r[30]; // 8022A440
  c->r[6]=c->r[31]|c->r[31]; // 8022A444
  c->r[4]=c->r[1]+0x00000028u; // 8022A448
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 8022A44C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 8022A450
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 8022A454
  c->r[7]=R32(c->r[3]+0x00000000u); // 8022A458
  W32(c->r[1]+0x000000F8u,c->r[7]); // 8022A45C
  c->r[7]=R32(c->r[3]+0x00000004u); // 8022A460
  W32(c->r[1]+0x000000FCu,c->r[7]); // 8022A464
  c->r[7]=R32(c->r[3]+0x00000008u); // 8022A468
  W32(c->r[1]+0x00000100u,c->r[7]); // 8022A46C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8022A470
  W32(c->r[1]+0x00000104u,c->r[7]); // 8022A474
  c->r[7]=R32(c->r[3]+0x00000010u); // 8022A478
  W32(c->r[1]+0x00000108u,c->r[7]); // 8022A47C
  c->r[7]=R32(c->r[3]+0x00000014u); // 8022A480
  W32(c->r[1]+0x0000010Cu,c->r[7]); // 8022A484
  c->r[7]=R32(c->r[3]+0x00000018u); // 8022A488
  W32(c->r[1]+0x00000110u,c->r[7]); // 8022A48C
  c->r[7]=R32(c->r[3]+0x0000001Cu); // 8022A490
  W32(c->r[1]+0x00000114u,c->r[7]); // 8022A494
  c->r[7]=R32(c->r[3]+0x00000020u); // 8022A498
  W32(c->r[1]+0x00000118u,c->r[7]); // 8022A49C
  c->r[8]=R32(c->r[3]+0x00000024u); // 8022A4A0
  c->r[7]=R32(c->r[3]+0x00000028u); // 8022A4A4
  W32(c->r[1]+0x00000120u,c->r[7]); // 8022A4A8
  W32(c->r[1]+0x0000011Cu,c->r[8]); // 8022A4AC
  c->r[8]=R32(c->r[3]+0x0000002Cu); // 8022A4B0
  c->r[7]=R32(c->r[3]+0x00000030u); // 8022A4B4
  W32(c->r[1]+0x00000128u,c->r[7]); // 8022A4B8
  W32(c->r[1]+0x00000124u,c->r[8]); // 8022A4BC
  c->r[7]=R32(c->r[3]+0x00000034u); // 8022A4C0
  W32(c->r[1]+0x0000012Cu,c->r[7]); // 8022A4C4
  c->r[8]=R32(c->r[3]+0x00000038u); // 8022A4C8
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 8022A4CC
  W32(c->r[1]+0x00000134u,c->r[7]); // 8022A4D0
  W32(c->r[1]+0x00000130u,c->r[8]); // 8022A4D4
  c->r[7]=R16(c->r[3]+0x00000040u); // 8022A4D8
  W16(c->r[1]+0x00000138u,c->r[7]); // 8022A4DC
  c->r[7]=R8(c->r[3]+0x00000042u); // 8022A4E0
  W8(c->r[1]+0x0000013Au,c->r[7]); // 8022A4E4
  c->r[7]=R8(c->r[3]+0x00000043u); // 8022A4E8
  W8(c->r[1]+0x0000013Bu,c->r[7]); // 8022A4EC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A4F0
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 8022A4F4
  c->r[7]=R32(c->r[3]+0x00000048u); // 8022A4F8
  W32(c->r[1]+0x00000140u,c->r[7]); // 8022A4FC
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A500
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8022A504
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A508
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8022A50C
  c->r[7]=R32(c->r[3]+0x00000054u); // 8022A510
  W32(c->r[1]+0x0000014Cu,c->r[7]); // 8022A514
  W32(c->r[1]+0x00000150u,c->r[0]); // 8022A518
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022A51C
  c->r[3]=c->r[1]+0x000000F8u; // 8022A520
  W32(c->r[1]+0x00000154u,c->r[0]); // 8022A524
  c->lr=0x8022A52Cu; f_80229D10(c); // 8022A528
  c->r[3]=c->r[1]+0x000000F8u; // 8022A52C
  c->r[4]=0u+0x00000000u; // 8022A530
  c->lr=0x8022A538u; f_80225180(c); // 8022A534
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022A538
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022A53C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A540
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A544
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 8022A548
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 8022A54C
L_8022A550:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022A550
  c->r[0]=rotl(c->r[0],0)&0x00000030u; // 8022A554
  cmpu(c,0,c->r[0],0x00000010u); // 8022A558
  if (!crb(c,2)) { goto L_8022A57C; } // 8022A55C
  c->r[3]=0u+0x80380000u; // 8022A560
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A564
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A568
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8022A56C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8022A570
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8022A574
  goto L_8022A590; // 8022A578
L_8022A57C:;
  cmpu(c,0,c->r[0],0x00000020u); // 8022A57C
  if (!crb(c,2)) { goto L_8022A590; } // 8022A580
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A584
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8022A588
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8022A58C
L_8022A590:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022A590
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022A594
  cmpu(c,0,c->r[0],0x00000100u); // 8022A598
  if (!crb(c,2)) { goto L_8022A5BC; } // 8022A59C
  c->r[3]=0u+0x80380000u; // 8022A5A0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A5A4
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A5A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022A5AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8022A5B0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8022A5B4
  goto L_8022A5D0; // 8022A5B8
L_8022A5BC:;
  cmpu(c,0,c->r[0],0x00000200u); // 8022A5BC
  if (!crb(c,2)) { goto L_8022A5D0; } // 8022A5C0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A5C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022A5C8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8022A5CC
L_8022A5D0:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022A5D0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8022A5D4
  cmpu(c,0,c->r[3],0x00000001u); // 8022A5D8
  if (!crb(c,2)) { goto L_8022A720; } // 8022A5DC
  c->r[4]=0u+0x80380000u; // 8022A5E0
  c->r[3]=c->r[1]+0x00000098u; // 8022A5E4
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A5E8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8022A5EC
  c->f[2]=c->f[1]; // 8022A5F0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8022A5F4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8022A5F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8022A5FC
  c->r[4]=R32(c->r[27]+0x00000000u); // 8022A600
  W32(c->r[1]+0x00000098u,c->r[4]); // 8022A604
  c->r[4]=R32(c->r[27]+0x00000004u); // 8022A608
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 8022A60C
  c->r[4]=R32(c->r[27]+0x00000008u); // 8022A610
  W32(c->r[1]+0x000000A0u,c->r[4]); // 8022A614
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8022A618
  W32(c->r[1]+0x000000A4u,c->r[4]); // 8022A61C
  c->r[4]=R32(c->r[27]+0x00000010u); // 8022A620
  W32(c->r[1]+0x000000A8u,c->r[4]); // 8022A624
  c->r[4]=R32(c->r[27]+0x00000014u); // 8022A628
  W32(c->r[1]+0x000000ACu,c->r[4]); // 8022A62C
  c->r[4]=R32(c->r[27]+0x00000018u); // 8022A630
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8022A634
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 8022A638
  W32(c->r[1]+0x000000B4u,c->r[4]); // 8022A63C
  c->r[4]=R32(c->r[27]+0x00000020u); // 8022A640
  W32(c->r[1]+0x000000B8u,c->r[4]); // 8022A644
  c->r[5]=R32(c->r[27]+0x00000024u); // 8022A648
  c->r[4]=R32(c->r[27]+0x00000028u); // 8022A64C
  W32(c->r[1]+0x000000C0u,c->r[4]); // 8022A650
  W32(c->r[1]+0x000000BCu,c->r[5]); // 8022A654
  c->r[5]=R32(c->r[27]+0x0000002Cu); // 8022A658
  c->r[4]=R32(c->r[27]+0x00000030u); // 8022A65C
  W32(c->r[1]+0x000000C8u,c->r[4]); // 8022A660
  W32(c->r[1]+0x000000C4u,c->r[5]); // 8022A664
  c->r[4]=R32(c->r[27]+0x00000034u); // 8022A668
  W32(c->r[1]+0x000000CCu,c->r[4]); // 8022A66C
  c->r[5]=R32(c->r[27]+0x00000038u); // 8022A670
  c->r[4]=R32(c->r[27]+0x0000003Cu); // 8022A674
  W32(c->r[1]+0x000000D4u,c->r[4]); // 8022A678
  W32(c->r[1]+0x000000D0u,c->r[5]); // 8022A67C
  c->r[4]=R16(c->r[27]+0x00000040u); // 8022A680
  W16(c->r[1]+0x000000D8u,c->r[4]); // 8022A684
  c->r[4]=R8(c->r[27]+0x00000042u); // 8022A688
  W8(c->r[1]+0x000000DAu,c->r[4]); // 8022A68C
  c->r[4]=R8(c->r[27]+0x00000043u); // 8022A690
  W8(c->r[1]+0x000000DBu,c->r[4]); // 8022A694
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A698
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 8022A69C
  c->r[4]=R32(c->r[27]+0x00000048u); // 8022A6A0
  W32(c->r[1]+0x000000E0u,c->r[4]); // 8022A6A4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A6A8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8022A6AC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A6B0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8022A6B4
  c->r[4]=R32(c->r[27]+0x00000054u); // 8022A6B8
  W32(c->r[1]+0x000000ECu,c->r[4]); // 8022A6BC
  W32(c->r[1]+0x000000F0u,c->r[0]); // 8022A6C0
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8022A6C4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8022A6C8
  c->lr=0x8022A6D0u; f_802261F0(c); // 8022A6CC
  c->r[5]=c->r[30]|c->r[30]; // 8022A6D0
  c->r[6]=c->r[31]|c->r[31]; // 8022A6D4
  c->r[3]=c->r[1]+0x00000098u; // 8022A6D8
  c->r[4]=c->r[1]+0x00000018u; // 8022A6DC
  c->lr=0x8022A6E4u; f_80229930(c); // 8022A6E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A6E4
  c->r[3]=c->r[1]+0x00000098u; // 8022A6E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A6EC
  c->r[4]=0u+0x00000000u; // 8022A6F0
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8022A6F4
  c->lr=0x8022A6FCu; f_80225180(c); // 8022A6F8
  c->r[3]=0u+0x80380000u; // 8022A6FC
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 8022A700
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A704
  c->r[3]=c->r[27]|c->r[27]; // 8022A708
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A70C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022A710
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022A714
  c->lr=0x8022A71Cu; f_80226200(c); // 8022A718
  goto L_8022A868; // 8022A71C
L_8022A720:;
  cmpu(c,0,c->r[3],0x00000002u); // 8022A720
  if (!crb(c,2)) { goto L_8022A85C; } // 8022A724
  c->r[4]=0u+0x80380000u; // 8022A728
  c->r[3]=c->r[1]+0x00000038u; // 8022A72C
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A730
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022A734
  c->f[2]=c->f[1]; // 8022A738
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022A73C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8022A740
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8022A744
  c->r[4]=R32(c->r[27]+0x00000000u); // 8022A748
  W32(c->r[1]+0x00000038u,c->r[4]); // 8022A74C
  c->r[4]=R32(c->r[27]+0x00000004u); // 8022A750
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8022A754
  c->r[4]=R32(c->r[27]+0x00000008u); // 8022A758
  W32(c->r[1]+0x00000040u,c->r[4]); // 8022A75C
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8022A760
  W32(c->r[1]+0x00000044u,c->r[4]); // 8022A764
  c->r[4]=R32(c->r[27]+0x00000010u); // 8022A768
  W32(c->r[1]+0x00000048u,c->r[4]); // 8022A76C
  c->r[4]=R32(c->r[27]+0x00000014u); // 8022A770
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 8022A774
  c->r[4]=R32(c->r[27]+0x00000018u); // 8022A778
  W32(c->r[1]+0x00000050u,c->r[4]); // 8022A77C
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 8022A780
  W32(c->r[1]+0x00000054u,c->r[4]); // 8022A784
  c->r[4]=R32(c->r[27]+0x00000020u); // 8022A788
  W32(c->r[1]+0x00000058u,c->r[4]); // 8022A78C
  c->r[5]=R32(c->r[27]+0x00000024u); // 8022A790
  c->r[4]=R32(c->r[27]+0x00000028u); // 8022A794
  W32(c->r[1]+0x00000060u,c->r[4]); // 8022A798
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8022A79C
  c->r[5]=R32(c->r[27]+0x0000002Cu); // 8022A7A0
  c->r[4]=R32(c->r[27]+0x00000030u); // 8022A7A4
  W32(c->r[1]+0x00000068u,c->r[4]); // 8022A7A8
  W32(c->r[1]+0x00000064u,c->r[5]); // 8022A7AC
  c->r[4]=R32(c->r[27]+0x00000034u); // 8022A7B0
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8022A7B4
  c->r[5]=R32(c->r[27]+0x00000038u); // 8022A7B8
  c->r[4]=R32(c->r[27]+0x0000003Cu); // 8022A7BC
  W32(c->r[1]+0x00000074u,c->r[4]); // 8022A7C0
  W32(c->r[1]+0x00000070u,c->r[5]); // 8022A7C4
  c->r[4]=R16(c->r[27]+0x00000040u); // 8022A7C8
  W16(c->r[1]+0x00000078u,c->r[4]); // 8022A7CC
  c->r[4]=R8(c->r[27]+0x00000042u); // 8022A7D0
  W8(c->r[1]+0x0000007Au,c->r[4]); // 8022A7D4
  c->r[4]=R8(c->r[27]+0x00000043u); // 8022A7D8
  W8(c->r[1]+0x0000007Bu,c->r[4]); // 8022A7DC
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A7E0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8022A7E4
  c->r[4]=R32(c->r[27]+0x00000048u); // 8022A7E8
  W32(c->r[1]+0x00000080u,c->r[4]); // 8022A7EC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A7F0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 8022A7F4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A7F8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8022A7FC
  c->r[4]=R32(c->r[27]+0x00000054u); // 8022A800
  W32(c->r[1]+0x0000008Cu,c->r[4]); // 8022A804
  W32(c->r[1]+0x00000090u,c->r[0]); // 8022A808
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8022A80C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8022A810
  c->lr=0x8022A818u; f_802261F0(c); // 8022A814
  c->r[5]=c->r[30]|c->r[30]; // 8022A818
  c->r[6]=c->r[31]|c->r[31]; // 8022A81C
  c->r[3]=c->r[1]+0x00000038u; // 8022A820
  c->r[4]=c->r[1]+0x00000008u; // 8022A824
  c->lr=0x8022A82Cu; f_80229930(c); // 8022A828
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A82C
  c->r[3]=c->r[1]+0x00000038u; // 8022A830
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A834
  c->r[4]=0u+0x00000000u; // 8022A838
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8022A83C
  c->lr=0x8022A844u; f_80225180(c); // 8022A840
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 8022A844
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A848
  c->r[3]=c->r[27]|c->r[27]; // 8022A84C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022A850
  c->lr=0x8022A858u; f_80226200(c); // 8022A854
  goto L_8022A868; // 8022A858
L_8022A85C:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A85C
  c->r[3]=c->r[27]|c->r[27]; // 8022A860
  c->lr=0x8022A868u; f_80226200(c); // 8022A864
L_8022A868:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022A868
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022A86C
  cmpu(c,0,c->r[0],0x00000300u); // 8022A870
  if (!crb(c,2)) { goto L_8022A888; } // 8022A874
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022A878
  c->r[3]=c->r[27]|c->r[27]; // 8022A87C
  c->lr=0x8022A884u; f_80226210(c); // 8022A880
  goto L_8022A8A0; // 8022A884
L_8022A888:;
  c->r[3]=c->r[27]|c->r[27]; // 8022A888
  c->lr=0x8022A890u; f_80226020(c); // 8022A88C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A890
  c->r[3]=c->r[27]|c->r[27]; // 8022A894
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022A898
  c->lr=0x8022A8A0u; f_80226210(c); // 8022A89C
L_8022A8A0:;
  c->f[1]=c->f[31]; // 8022A8A0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 8022A8A4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 8022A8A8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 8022A8AC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 8022A8B0
  c->r[11]=c->r[1]+0x00000170u; // 8022A8B4
  c->lr=0x8022A8BCu; f_800C2E98(c); // 8022A8B8
  c->r[0]=R32(c->r[1]+0x00000194u); // 8022A8BC
  c->lr=c->r[0]; // 8022A8C0
  c->r[1]=c->r[1]+0x00000190u; // 8022A8C4
  return; // 8022A8C8
}

// fn_8022A8D0
void f_8022A8D0(Ctx* __restrict c) {
  trace_call(0x8022A8D0u);
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022A8D0
  c->r[0]=c->r[0]&c->r[4]; // 8022A8D4
  c->r[0]=c->r[0]-c->r[5]; // 8022A8D8
  c->r[0]=cntlz(c->r[0]); // 8022A8DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8022A8E0
  return; // 8022A8E4
}

// __ct__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_8022A8F0(Ctx* __restrict c) {
  trace_call(0x8022A8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A8F0
  c->r[0]=c->lr; // 8022A8F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022A8F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022A8FC
  c->r[31]=c->r[3]|c->r[3]; // 8022A900
  c->lr=0x8022A908u; f_80224DF0(c); // 8022A904
  c->r[3]=0u+0x80380000u; // 8022A908
  c->r[4]=0u+0x80490000u; // 8022A90C
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022A910
  c->r[4]=c->r[4]+0x00001A84u; // 8022A914
  c->r[5]=0u+0x00000004u; // 8022A918
  c->r[0]=0u+0x00000000u; // 8022A91C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 8022A920
  c->r[3]=c->r[31]|c->r[31]; // 8022A924
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8022A928
  W32(c->r[31]+0x00000054u,c->r[5]); // 8022A92C
  W32(c->r[31]+0x00000058u,c->r[0]); // 8022A930
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8022A934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022A938
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022A93C
  c->lr=c->r[0]; // 8022A940
  c->r[1]=c->r[1]+0x00000010u; // 8022A944
  return; // 8022A948
}

// __dt__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_8022A950(Ctx* __restrict c) {
  trace_call(0x8022A950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A950
  c->r[0]=c->lr; // 8022A954
  cmps(c,0,(int32_t)c->r[3],0); // 8022A958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022A95C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022A960
  c->r[31]=c->r[4]|c->r[4]; // 8022A964
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022A968
  c->r[30]=c->r[3]|c->r[3]; // 8022A96C
  if (crb(c,2)) { goto L_8022A98C; } // 8022A970
  c->r[4]=0u+0x00000000u; // 8022A974
  c->lr=0x8022A97Cu; f_80225180(c); // 8022A978
  cmps(c,0,(int32_t)c->r[31],0); // 8022A97C
  if (!crb(c,1)) { goto L_8022A98C; } // 8022A980
  c->r[3]=c->r[30]|c->r[30]; // 8022A984
  c->lr=0x8022A98Cu; f_800C2AC0(c); // 8022A988
L_8022A98C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A98C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022A990
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022A994
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022A998
  c->lr=c->r[0]; // 8022A99C
  c->r[1]=c->r[1]+0x00000010u; // 8022A9A0
  return; // 8022A9A4
}

// fn_8022A9B0
void f_8022A9B0(Ctx* __restrict c) {
  trace_call(0x8022A9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A9B0
  c->r[0]=c->lr; // 8022A9B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022A9B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8022A9BC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8022A9C0
  c->f[31]=c->f[1]; // 8022A9C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022A9C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022A9CC
  c->r[30]=c->r[3]|c->r[3]; // 8022A9D0
  c->lr=0x8022A9D8u; f_802251D0(c); // 8022A9D4
  cmps(c,0,(int32_t)c->r[3],0); // 8022A9D8
  if (crb(c,2)) { goto L_8022A9F8; } // 8022A9DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022A9E0
  c->r[12]=R32(c->r[12]+0x00000034u); // 8022A9E4
  c->ctr=c->r[12]; // 8022A9E8
  if (true) { c->lr=0x8022A9F0u; dispatch(c,c->ctr); } // 8022A9EC
  c->r[31]=c->r[3]|c->r[3]; // 8022A9F0
  goto L_8022A9FC; // 8022A9F4
L_8022A9F8:;
  c->r[31]=0u+0x00000000u; // 8022A9F8
L_8022A9FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A9FC
  c->lr=0x8022AA04u; f_80225E60(c); // 8022AA00
  c->r[3]=c->r[31]^0x80000000u; // 8022AA04
  c->r[0]=0u+0x43300000u; // 8022AA08
  c->r[4]=0u+0x80380000u; // 8022AA0C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8022AA10
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[2]=RF64(ea);} // 8022AA14
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022AA18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8022AA1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022AA20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8022AA24
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 8022AA28
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8022AA2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8022AA30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8022AA34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022AA38
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022AA3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022AA40
  c->lr=c->r[0]; // 8022AA44
  c->r[1]=c->r[1]+0x00000030u; // 8022AA48
  return; // 8022AA4C
}

// GetLineHeight__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8022AA50(Ctx* __restrict c) {
  trace_call(0x8022AA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AA50
  c->r[0]=c->lr; // 8022AA54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022AA58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022AA5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022AA60
  c->r[30]=c->r[3]|c->r[3]; // 8022AA64
  c->lr=0x8022AA6Cu; f_802251D0(c); // 8022AA68
  cmps(c,0,(int32_t)c->r[3],0); // 8022AA6C
  if (crb(c,2)) { goto L_8022AA8C; } // 8022AA70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022AA74
  c->r[12]=R32(c->r[12]+0x00000034u); // 8022AA78
  c->ctr=c->r[12]; // 8022AA7C
  if (true) { c->lr=0x8022AA84u; dispatch(c,c->ctr); } // 8022AA80
  c->r[31]=c->r[3]|c->r[3]; // 8022AA84
  goto L_8022AA90; // 8022AA88
L_8022AA8C:;
  c->r[31]=0u+0x00000000u; // 8022AA8C
L_8022AA90:;
  c->r[3]=c->r[30]|c->r[30]; // 8022AA90
  c->lr=0x8022AA98u; f_80225E60(c); // 8022AA94
  c->r[3]=c->r[31]^0x80000000u; // 8022AA98
  c->r[0]=0u+0x43300000u; // 8022AA9C
  c->r[4]=0u+0x80380000u; // 8022AAA0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8022AAA4
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[3]=RF64(ea);} // 8022AAA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022AAAC
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AAB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8022AAB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022AAB8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8022AABC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022AAC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022AAC4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022AAC8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022AACC
  c->lr=c->r[0]; // 8022AAD0
  c->r[1]=c->r[1]+0x00000020u; // 8022AAD4
  return; // 8022AAD8
}

// SetLineSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_8022AAE0(Ctx* __restrict c) {
  trace_call(0x8022AAE0u);
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 8022AAE0
  return; // 8022AAE4
}

// SetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_8022AAF0(Ctx* __restrict c) {
  trace_call(0x8022AAF0u);
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 8022AAF0
  return; // 8022AAF4
}

// fn_8022AB00
void f_8022AB00(Ctx* __restrict c) {
  trace_call(0x8022AB00u);
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AB00
  return; // 8022AB04
}

// GetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8022AB10(Ctx* __restrict c) {
  trace_call(0x8022AB10u);
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AB10
  return; // 8022AB14
}

// fn_8022AB20
void f_8022AB20(Ctx* __restrict c) {
  trace_call(0x8022AB20u);
  W32(c->r[3]+0x00000054u,c->r[4]); // 8022AB20
  return; // 8022AB24
}

// fn_8022AB30
void f_8022AB30(Ctx* __restrict c) {
  trace_call(0x8022AB30u);
  c->r[3]=R32(c->r[3]+0x00000054u); // 8022AB30
  return; // 8022AB34
}

// fn_8022AB40
void f_8022AB40(Ctx* __restrict c) {
  trace_call(0x8022AB40u);
  W32(c->r[3]+0x00000058u,c->r[4]); // 8022AB40
  return; // 8022AB44
}

// fn_8022AB50
void f_8022AB50(Ctx* __restrict c) {
  trace_call(0x8022AB50u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 8022AB50
  return; // 8022AB54
}

// SetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut19TagProcessorBase<w>
void f_8022AB60(Ctx* __restrict c) {
  trace_call(0x8022AB60u);
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8022AB60
  return; // 8022AB64
}

// fn_8022AB70
void f_8022AB70(Ctx* __restrict c) {
  trace_call(0x8022AB70u);
  c->r[4]=0u+0x80490000u; // 8022AB70
  c->r[4]=c->r[4]+0x00001A84u; // 8022AB74
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8022AB78
  return; // 8022AB7C
}

// GetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_8022AB80(Ctx* __restrict c) {
  trace_call(0x8022AB80u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 8022AB80
  return; // 8022AB84
}

// fn_8022AB90
void f_8022AB90(Ctx* __restrict c) {
  trace_call(0x8022AB90u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AB90
  c->r[0]=c->lr; // 8022AB94
  W32(c->r[1]+0x00000134u,c->r[0]); // 8022AB98
  c->r[11]=c->r[1]+0x00000130u; // 8022AB9C
  c->lr=0x8022ABA4u; f_800C2E1C(c); // 8022ABA0
  c->r[31]=c->r[1]|c->r[1]; // 8022ABA4
  c->r[30]=c->r[3]|c->r[3]; // 8022ABA8
  c->r[16]=c->r[4]|c->r[4]; // 8022ABAC
  if (!crb(c,6)) { goto L_8022ABD4; } // 8022ABB0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 8022ABB4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 8022ABB8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 8022ABBC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 8022ABC0
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 8022ABC4
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 8022ABC8
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022ABCC
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 8022ABD0
L_8022ABD4:;
  c->r[11]=0u+0x80490000u; // 8022ABD4
  c->r[12]=0u+0x80380000u; // 8022ABD8
  c->r[15]=R32(c->r[11]+0x00001A80u); // 8022ABDC
  c->r[11]=c->r[31]+0x00000138u; // 8022ABE0
  {uint32_t ea=c->r[12]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022ABE4
  c->r[0]=c->r[31]+0x00000008u; // 8022ABE8
  cmps(c,0,(int32_t)c->r[15],0); // 8022ABEC
  c->r[12]=0u+0x02000000u; // 8022ABF0
  W32(c->r[31]+0x00000008u,c->r[3]); // 8022ABF4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8022ABF8
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022ABFC
  W32(c->r[31]+0x00000014u,c->r[6]); // 8022AC00
  W32(c->r[31]+0x00000018u,c->r[7]); // 8022AC04
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 8022AC08
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022AC0C
  W32(c->r[31]+0x00000024u,c->r[10]); // 8022AC10
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8022AC14
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8022AC18
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8022AC1C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 8022AC20
  W32(c->r[31]+0x00000068u,c->r[12]); // 8022AC24
  W32(c->r[31]+0x0000006Cu,c->r[11]); // 8022AC28
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022AC2C
  if (crb(c,2)) { goto L_8022AC38; } // 8022AC30
  goto L_8022AC54; // 8022AC34
L_8022AC38:;
  c->r[3]=0u+0x803B0000u; // 8022AC38
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022AC3C
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022AC40
  c->r[15]=0u-c->r[3]; // 8022AC44
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 8022AC48
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022AC4C
  c->r[15]=c->r[1]+0x00000008u; // 8022AC50
L_8022AC54:;
  c->r[4]=0u+0x803B0000u; // 8022AC54
  c->r[3]=c->r[15]|c->r[15]; // 8022AC58
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022AC5C
  c->r[5]=c->r[16]|c->r[16]; // 8022AC60
  c->r[6]=c->r[31]+0x00000068u; // 8022AC64
  c->lr=0x8022AC6Cu; f_800CE428(c); // 8022AC68
  c->r[16]=R32(c->r[30]+0x00000000u); // 8022AC6C
  c->r[5]=c->r[15]|c->r[15]; // 8022AC70
  c->r[17]=R32(c->r[30]+0x00000004u); // 8022AC74
  c->r[6]=c->r[3]|c->r[3]; // 8022AC78
  c->r[18]=R32(c->r[30]+0x00000008u); // 8022AC7C
  c->r[3]=c->r[31]+0x00000088u; // 8022AC80
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 8022AC84
  c->r[4]=c->r[31]+0x00000078u; // 8022AC88
  c->r[20]=R32(c->r[30]+0x00000010u); // 8022AC8C
  c->r[21]=R32(c->r[30]+0x00000014u); // 8022AC90
  c->r[22]=R32(c->r[30]+0x00000018u); // 8022AC94
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 8022AC98
  c->r[24]=R32(c->r[30]+0x00000020u); // 8022AC9C
  c->r[25]=R32(c->r[30]+0x00000024u); // 8022ACA0
  c->r[26]=R32(c->r[30]+0x00000028u); // 8022ACA4
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 8022ACA8
  c->r[28]=R32(c->r[30]+0x00000030u); // 8022ACAC
  c->r[29]=R32(c->r[30]+0x00000034u); // 8022ACB0
  c->r[12]=R32(c->r[30]+0x00000038u); // 8022ACB4
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 8022ACB8
  c->r[10]=R16(c->r[30]+0x00000040u); // 8022ACBC
  c->r[9]=R8(c->r[30]+0x00000042u); // 8022ACC0
  c->r[8]=R8(c->r[30]+0x00000043u); // 8022ACC4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022ACC8
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022ACCC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022ACD0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022ACD4
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022ACD8
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022ACDC
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 8022ACE0
  W32(c->r[31]+0x00000088u,c->r[16]); // 8022ACE4
  W32(c->r[31]+0x0000008Cu,c->r[17]); // 8022ACE8
  W32(c->r[31]+0x00000090u,c->r[18]); // 8022ACEC
  W32(c->r[31]+0x00000094u,c->r[19]); // 8022ACF0
  W32(c->r[31]+0x00000098u,c->r[20]); // 8022ACF4
  W32(c->r[31]+0x0000009Cu,c->r[21]); // 8022ACF8
  W32(c->r[31]+0x000000A0u,c->r[22]); // 8022ACFC
  W32(c->r[31]+0x000000A4u,c->r[23]); // 8022AD00
  W32(c->r[31]+0x000000A8u,c->r[24]); // 8022AD04
  W32(c->r[31]+0x000000ACu,c->r[25]); // 8022AD08
  W32(c->r[31]+0x000000B0u,c->r[26]); // 8022AD0C
  W32(c->r[31]+0x000000B4u,c->r[27]); // 8022AD10
  W32(c->r[31]+0x000000B8u,c->r[28]); // 8022AD14
  W32(c->r[31]+0x000000BCu,c->r[29]); // 8022AD18
  W32(c->r[31]+0x000000C0u,c->r[12]); // 8022AD1C
  W32(c->r[31]+0x000000C4u,c->r[11]); // 8022AD20
  W16(c->r[31]+0x000000C8u,c->r[10]); // 8022AD24
  W8(c->r[31]+0x000000CAu,c->r[9]); // 8022AD28
  W8(c->r[31]+0x000000CBu,c->r[8]); // 8022AD2C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[2]);} // 8022AD30
  W32(c->r[31]+0x000000D0u,c->r[7]); // 8022AD34
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 8022AD38
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 8022AD3C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8022AD40
  W32(c->r[31]+0x000000E0u,c->r[15]); // 8022AD44
  W32(c->r[31]+0x000000E4u,c->r[30]); // 8022AD48
  c->lr=0x8022AD50u; f_8022C6F0(c); // 8022AD4C
  c->r[3]=c->r[31]+0x00000088u; // 8022AD50
  c->r[4]=0u+0x00000000u; // 8022AD54
  c->lr=0x8022AD5Cu; f_80225180(c); // 8022AD58
  c->r[10]=c->r[31]|c->r[31]; // 8022AD5C
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AD60
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AD64
  c->r[11]=c->r[10]+0x00000130u; // 8022AD68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022AD6C
  c->lr=0x8022AD74u; f_800C2E68(c); // 8022AD70
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022AD74
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022AD78
  c->r[1]=c->r[10]|c->r[10]; // 8022AD7C
  c->lr=c->r[0]; // 8022AD80
  return; // 8022AD84
}

// fn_8022AD90
void f_8022AD90(Ctx* __restrict c) {
  trace_call(0x8022AD90u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AD90
  c->r[0]=c->lr; // 8022AD94
  W32(c->r[1]+0x00000134u,c->r[0]); // 8022AD98
  c->r[11]=c->r[1]+0x00000130u; // 8022AD9C
  c->lr=0x8022ADA4u; f_800C2E1C(c); // 8022ADA0
  c->r[31]=c->r[1]|c->r[1]; // 8022ADA4
  c->r[30]=c->r[3]|c->r[3]; // 8022ADA8
  c->r[16]=c->r[4]|c->r[4]; // 8022ADAC
  if (!crb(c,6)) { goto L_8022ADD4; } // 8022ADB0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 8022ADB4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 8022ADB8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 8022ADBC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 8022ADC0
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 8022ADC4
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 8022ADC8
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022ADCC
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 8022ADD0
L_8022ADD4:;
  c->r[11]=0u+0x80490000u; // 8022ADD4
  c->r[12]=0u+0x80380000u; // 8022ADD8
  c->r[15]=R32(c->r[11]+0x00001A80u); // 8022ADDC
  c->r[11]=c->r[31]+0x00000138u; // 8022ADE0
  {uint32_t ea=c->r[12]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022ADE4
  c->r[0]=c->r[31]+0x00000008u; // 8022ADE8
  cmps(c,0,(int32_t)c->r[15],0); // 8022ADEC
  c->r[12]=0u+0x02000000u; // 8022ADF0
  W32(c->r[31]+0x00000008u,c->r[3]); // 8022ADF4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8022ADF8
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022ADFC
  W32(c->r[31]+0x00000014u,c->r[6]); // 8022AE00
  W32(c->r[31]+0x00000018u,c->r[7]); // 8022AE04
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 8022AE08
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022AE0C
  W32(c->r[31]+0x00000024u,c->r[10]); // 8022AE10
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 8022AE14
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8022AE18
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8022AE1C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 8022AE20
  W32(c->r[31]+0x00000068u,c->r[12]); // 8022AE24
  W32(c->r[31]+0x0000006Cu,c->r[11]); // 8022AE28
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022AE2C
  if (crb(c,2)) { goto L_8022AE38; } // 8022AE30
  goto L_8022AE54; // 8022AE34
L_8022AE38:;
  c->r[3]=0u+0x803B0000u; // 8022AE38
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022AE3C
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022AE40
  c->r[15]=0u-c->r[3]; // 8022AE44
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 8022AE48
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022AE4C
  c->r[15]=c->r[1]+0x00000008u; // 8022AE50
L_8022AE54:;
  c->r[4]=0u+0x803B0000u; // 8022AE54
  c->r[3]=c->r[15]|c->r[15]; // 8022AE58
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022AE5C
  c->r[5]=c->r[16]|c->r[16]; // 8022AE60
  c->r[6]=c->r[31]+0x00000068u; // 8022AE64
  c->lr=0x8022AE6Cu; f_800CE428(c); // 8022AE68
  c->r[16]=R32(c->r[30]+0x00000000u); // 8022AE6C
  c->r[5]=c->r[15]|c->r[15]; // 8022AE70
  c->r[17]=R32(c->r[30]+0x00000004u); // 8022AE74
  c->r[6]=c->r[3]|c->r[3]; // 8022AE78
  c->r[18]=R32(c->r[30]+0x00000008u); // 8022AE7C
  c->r[3]=c->r[31]+0x00000088u; // 8022AE80
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 8022AE84
  c->r[4]=c->r[31]+0x00000078u; // 8022AE88
  c->r[20]=R32(c->r[30]+0x00000010u); // 8022AE8C
  c->r[21]=R32(c->r[30]+0x00000014u); // 8022AE90
  c->r[22]=R32(c->r[30]+0x00000018u); // 8022AE94
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 8022AE98
  c->r[24]=R32(c->r[30]+0x00000020u); // 8022AE9C
  c->r[25]=R32(c->r[30]+0x00000024u); // 8022AEA0
  c->r[26]=R32(c->r[30]+0x00000028u); // 8022AEA4
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 8022AEA8
  c->r[28]=R32(c->r[30]+0x00000030u); // 8022AEAC
  c->r[29]=R32(c->r[30]+0x00000034u); // 8022AEB0
  c->r[12]=R32(c->r[30]+0x00000038u); // 8022AEB4
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 8022AEB8
  c->r[10]=R16(c->r[30]+0x00000040u); // 8022AEBC
  c->r[9]=R8(c->r[30]+0x00000042u); // 8022AEC0
  c->r[8]=R8(c->r[30]+0x00000043u); // 8022AEC4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022AEC8
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022AECC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AED0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AED4
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022AED8
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022AEDC
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 8022AEE0
  W32(c->r[31]+0x00000088u,c->r[16]); // 8022AEE4
  W32(c->r[31]+0x0000008Cu,c->r[17]); // 8022AEE8
  W32(c->r[31]+0x00000090u,c->r[18]); // 8022AEEC
  W32(c->r[31]+0x00000094u,c->r[19]); // 8022AEF0
  W32(c->r[31]+0x00000098u,c->r[20]); // 8022AEF4
  W32(c->r[31]+0x0000009Cu,c->r[21]); // 8022AEF8
  W32(c->r[31]+0x000000A0u,c->r[22]); // 8022AEFC
  W32(c->r[31]+0x000000A4u,c->r[23]); // 8022AF00
  W32(c->r[31]+0x000000A8u,c->r[24]); // 8022AF04
  W32(c->r[31]+0x000000ACu,c->r[25]); // 8022AF08
  W32(c->r[31]+0x000000B0u,c->r[26]); // 8022AF0C
  W32(c->r[31]+0x000000B4u,c->r[27]); // 8022AF10
  W32(c->r[31]+0x000000B8u,c->r[28]); // 8022AF14
  W32(c->r[31]+0x000000BCu,c->r[29]); // 8022AF18
  W32(c->r[31]+0x000000C0u,c->r[12]); // 8022AF1C
  W32(c->r[31]+0x000000C4u,c->r[11]); // 8022AF20
  W16(c->r[31]+0x000000C8u,c->r[10]); // 8022AF24
  W8(c->r[31]+0x000000CAu,c->r[9]); // 8022AF28
  W8(c->r[31]+0x000000CBu,c->r[8]); // 8022AF2C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[2]);} // 8022AF30
  W32(c->r[31]+0x000000D0u,c->r[7]); // 8022AF34
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 8022AF38
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 8022AF3C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8022AF40
  W32(c->r[31]+0x000000E0u,c->r[15]); // 8022AF44
  W32(c->r[31]+0x000000E4u,c->r[30]); // 8022AF48
  c->lr=0x8022AF50u; f_8022C6F0(c); // 8022AF4C
  c->r[3]=c->r[31]+0x00000088u; // 8022AF50
  c->r[4]=0u+0x00000000u; // 8022AF54
  c->lr=0x8022AF5Cu; f_80225180(c); // 8022AF58
  c->r[10]=c->r[31]|c->r[31]; // 8022AF5C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AF60
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AF64
  c->r[11]=c->r[10]+0x00000130u; // 8022AF68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022AF6C
  c->lr=0x8022AF74u; f_800C2E68(c); // 8022AF70
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022AF74
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022AF78
  c->r[1]=c->r[10]|c->r[10]; // 8022AF7C
  c->lr=c->r[0]; // 8022AF80
  return; // 8022AF84
}

// fn_8022AF90
void f_8022AF90(Ctx* __restrict c) {
  trace_call(0x8022AF90u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AF90
  c->r[0]=c->lr; // 8022AF94
  W32(c->r[1]+0x00000124u,c->r[0]); // 8022AF98
  c->r[11]=c->r[1]+0x00000120u; // 8022AF9C
  c->lr=0x8022AFA4u; f_800C2E1C(c); // 8022AFA0
  c->r[31]=c->r[1]|c->r[1]; // 8022AFA4
  c->r[30]=c->r[3]|c->r[3]; // 8022AFA8
  c->r[18]=c->r[4]|c->r[4]; // 8022AFAC
  if (!crb(c,6)) { goto L_8022AFD4; } // 8022AFB0
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 8022AFB4
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 8022AFB8
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 8022AFBC
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 8022AFC0
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 8022AFC4
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 8022AFC8
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022AFCC
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 8022AFD0
L_8022AFD4:;
  c->r[11]=0u+0x80490000u; // 8022AFD4
  c->r[12]=c->r[31]+0x00000128u; // 8022AFD8
  c->r[15]=R32(c->r[11]+0x00001A80u); // 8022AFDC
  c->r[0]=c->r[31]+0x00000008u; // 8022AFE0
  c->r[11]=0u+0x03000000u; // 8022AFE4
  W32(c->r[31]+0x00000008u,c->r[3]); // 8022AFE8
  cmps(c,0,(int32_t)c->r[15],0); // 8022AFEC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8022AFF0
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022AFF4
  W32(c->r[31]+0x00000014u,c->r[6]); // 8022AFF8
  W32(c->r[31]+0x00000018u,c->r[7]); // 8022AFFC
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 8022B000
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022B004
  W32(c->r[31]+0x00000024u,c->r[10]); // 8022B008
  W32(c->r[31]+0x00000068u,c->r[11]); // 8022B00C
  W32(c->r[31]+0x0000006Cu,c->r[12]); // 8022B010
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022B014
  if (crb(c,2)) { goto L_8022B020; } // 8022B018
  goto L_8022B03C; // 8022B01C
L_8022B020:;
  c->r[3]=0u+0x803B0000u; // 8022B020
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022B024
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022B028
  c->r[15]=0u-c->r[3]; // 8022B02C
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 8022B030
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022B034
  c->r[15]=c->r[1]+0x00000008u; // 8022B038
L_8022B03C:;
  c->r[4]=0u+0x803B0000u; // 8022B03C
  c->r[3]=c->r[15]|c->r[15]; // 8022B040
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022B044
  c->r[6]=c->r[31]+0x00000068u; // 8022B048
  c->lr=0x8022B050u; f_800CE428(c); // 8022B04C
  c->r[16]=R32(c->r[30]+0x00000000u); // 8022B050
  c->r[4]=c->r[18]|c->r[18]; // 8022B054
  c->r[17]=R32(c->r[30]+0x00000004u); // 8022B058
  c->r[5]=c->r[15]|c->r[15]; // 8022B05C
  c->r[18]=R32(c->r[30]+0x00000008u); // 8022B060
  c->r[6]=c->r[3]|c->r[3]; // 8022B064
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 8022B068
  c->r[3]=c->r[31]+0x00000078u; // 8022B06C
  c->r[20]=R32(c->r[30]+0x00000010u); // 8022B070
  c->r[21]=R32(c->r[30]+0x00000014u); // 8022B074
  c->r[22]=R32(c->r[30]+0x00000018u); // 8022B078
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 8022B07C
  c->r[24]=R32(c->r[30]+0x00000020u); // 8022B080
  c->r[25]=R32(c->r[30]+0x00000024u); // 8022B084
  c->r[26]=R32(c->r[30]+0x00000028u); // 8022B088
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 8022B08C
  c->r[28]=R32(c->r[30]+0x00000030u); // 8022B090
  c->r[29]=R32(c->r[30]+0x00000034u); // 8022B094
  c->r[12]=R32(c->r[30]+0x00000038u); // 8022B098
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 8022B09C
  c->r[10]=R16(c->r[30]+0x00000040u); // 8022B0A0
  c->r[9]=R8(c->r[30]+0x00000042u); // 8022B0A4
  c->r[8]=R8(c->r[30]+0x00000043u); // 8022B0A8
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B0AC
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022B0B0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B0B4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B0B8
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022B0BC
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022B0C0
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 8022B0C4
  W32(c->r[31]+0x00000078u,c->r[16]); // 8022B0C8
  W32(c->r[31]+0x0000007Cu,c->r[17]); // 8022B0CC
  W32(c->r[31]+0x00000080u,c->r[18]); // 8022B0D0
  W32(c->r[31]+0x00000084u,c->r[19]); // 8022B0D4
  W32(c->r[31]+0x00000088u,c->r[20]); // 8022B0D8
  W32(c->r[31]+0x0000008Cu,c->r[21]); // 8022B0DC
  W32(c->r[31]+0x00000090u,c->r[22]); // 8022B0E0
  W32(c->r[31]+0x00000094u,c->r[23]); // 8022B0E4
  W32(c->r[31]+0x00000098u,c->r[24]); // 8022B0E8
  W32(c->r[31]+0x0000009Cu,c->r[25]); // 8022B0EC
  W32(c->r[31]+0x000000A0u,c->r[26]); // 8022B0F0
  W32(c->r[31]+0x000000A4u,c->r[27]); // 8022B0F4
  W32(c->r[31]+0x000000A8u,c->r[28]); // 8022B0F8
  W32(c->r[31]+0x000000ACu,c->r[29]); // 8022B0FC
  W32(c->r[31]+0x000000B0u,c->r[12]); // 8022B100
  W32(c->r[31]+0x000000B4u,c->r[11]); // 8022B104
  W16(c->r[31]+0x000000B8u,c->r[10]); // 8022B108
  W8(c->r[31]+0x000000BAu,c->r[9]); // 8022B10C
  W8(c->r[31]+0x000000BBu,c->r[8]); // 8022B110
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[2]);} // 8022B114
  W32(c->r[31]+0x000000C0u,c->r[7]); // 8022B118
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[1]);} // 8022B11C
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8022B120
  W32(c->r[31]+0x000000CCu,c->r[0]); // 8022B124
  W32(c->r[31]+0x000000D0u,c->r[15]); // 8022B128
  W32(c->r[31]+0x000000D4u,c->r[30]); // 8022B12C
  c->lr=0x8022B134u; f_8022C6F0(c); // 8022B130
  c->r[3]=c->r[31]+0x00000078u; // 8022B134
  c->r[4]=0u+0x00000000u; // 8022B138
  c->lr=0x8022B140u; f_80225180(c); // 8022B13C
  c->r[10]=c->r[31]|c->r[31]; // 8022B140
  c->r[11]=c->r[10]+0x00000120u; // 8022B144
  c->lr=0x8022B14Cu; f_800C2E68(c); // 8022B148
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022B14C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022B150
  c->r[1]=c->r[10]|c->r[10]; // 8022B154
  c->lr=c->r[0]; // 8022B158
  return; // 8022B15C
}

// fn_8022B160
void f_8022B160(Ctx* __restrict c) {
  trace_call(0x8022B160u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B160
  c->r[0]=c->lr; // 8022B164
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8022B168
  c->r[11]=c->r[1]+0x000000B0u; // 8022B16C
  c->lr=0x8022B174u; f_800C2E1C(c); // 8022B170
  c->r[31]=c->r[1]|c->r[1]; // 8022B174
  c->r[7]=0u+0x80490000u; // 8022B178
  c->r[30]=c->r[3]|c->r[3]; // 8022B17C
  c->r[15]=R32(c->r[7]+0x00001A80u); // 8022B180
  c->r[18]=c->r[4]|c->r[4]; // 8022B184
  cmps(c,0,(int32_t)c->r[15],0); // 8022B188
  if (crb(c,2)) { goto L_8022B194; } // 8022B18C
  goto L_8022B1B0; // 8022B190
L_8022B194:;
  c->r[3]=0u+0x803B0000u; // 8022B194
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022B198
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022B19C
  c->r[15]=0u-c->r[3]; // 8022B1A0
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 8022B1A4
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022B1A8
  c->r[15]=c->r[1]+0x00000008u; // 8022B1AC
L_8022B1B0:;
  c->r[4]=0u+0x803B0000u; // 8022B1B0
  c->r[3]=c->r[15]|c->r[15]; // 8022B1B4
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022B1B8
  c->lr=0x8022B1C0u; f_800CE428(c); // 8022B1BC
  c->r[16]=R32(c->r[30]+0x00000000u); // 8022B1C0
  c->r[4]=c->r[18]|c->r[18]; // 8022B1C4
  c->r[17]=R32(c->r[30]+0x00000004u); // 8022B1C8
  c->r[5]=c->r[15]|c->r[15]; // 8022B1CC
  c->r[18]=R32(c->r[30]+0x00000008u); // 8022B1D0
  c->r[6]=c->r[3]|c->r[3]; // 8022B1D4
  c->r[19]=R32(c->r[30]+0x0000000Cu); // 8022B1D8
  c->r[3]=c->r[31]+0x00000008u; // 8022B1DC
  c->r[20]=R32(c->r[30]+0x00000010u); // 8022B1E0
  c->r[21]=R32(c->r[30]+0x00000014u); // 8022B1E4
  c->r[22]=R32(c->r[30]+0x00000018u); // 8022B1E8
  c->r[23]=R32(c->r[30]+0x0000001Cu); // 8022B1EC
  c->r[24]=R32(c->r[30]+0x00000020u); // 8022B1F0
  c->r[25]=R32(c->r[30]+0x00000024u); // 8022B1F4
  c->r[26]=R32(c->r[30]+0x00000028u); // 8022B1F8
  c->r[27]=R32(c->r[30]+0x0000002Cu); // 8022B1FC
  c->r[28]=R32(c->r[30]+0x00000030u); // 8022B200
  c->r[29]=R32(c->r[30]+0x00000034u); // 8022B204
  c->r[12]=R32(c->r[30]+0x00000038u); // 8022B208
  c->r[11]=R32(c->r[30]+0x0000003Cu); // 8022B20C
  c->r[10]=R16(c->r[30]+0x00000040u); // 8022B210
  c->r[9]=R8(c->r[30]+0x00000042u); // 8022B214
  c->r[8]=R8(c->r[30]+0x00000043u); // 8022B218
  {uint32_t ea=c->r[30]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B21C
  c->r[7]=R32(c->r[30]+0x00000048u); // 8022B220
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B224
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B228
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022B22C
  c->r[15]=R32(c->r[30]+0x00000058u); // 8022B230
  c->r[30]=R32(c->r[30]+0x0000005Cu); // 8022B234
  W32(c->r[31]+0x00000008u,c->r[16]); // 8022B238
  W32(c->r[31]+0x0000000Cu,c->r[17]); // 8022B23C
  W32(c->r[31]+0x00000010u,c->r[18]); // 8022B240
  W32(c->r[31]+0x00000014u,c->r[19]); // 8022B244
  W32(c->r[31]+0x00000018u,c->r[20]); // 8022B248
  W32(c->r[31]+0x0000001Cu,c->r[21]); // 8022B24C
  W32(c->r[31]+0x00000020u,c->r[22]); // 8022B250
  W32(c->r[31]+0x00000024u,c->r[23]); // 8022B254
  W32(c->r[31]+0x00000028u,c->r[24]); // 8022B258
  W32(c->r[31]+0x0000002Cu,c->r[25]); // 8022B25C
  W32(c->r[31]+0x00000030u,c->r[26]); // 8022B260
  W32(c->r[31]+0x00000034u,c->r[27]); // 8022B264
  W32(c->r[31]+0x00000038u,c->r[28]); // 8022B268
  W32(c->r[31]+0x0000003Cu,c->r[29]); // 8022B26C
  W32(c->r[31]+0x00000040u,c->r[12]); // 8022B270
  W32(c->r[31]+0x00000044u,c->r[11]); // 8022B274
  W16(c->r[31]+0x00000048u,c->r[10]); // 8022B278
  W8(c->r[31]+0x0000004Au,c->r[9]); // 8022B27C
  W8(c->r[31]+0x0000004Bu,c->r[8]); // 8022B280
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[2]);} // 8022B284
  W32(c->r[31]+0x00000050u,c->r[7]); // 8022B288
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 8022B28C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8022B290
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8022B294
  W32(c->r[31]+0x00000060u,c->r[15]); // 8022B298
  W32(c->r[31]+0x00000064u,c->r[30]); // 8022B29C
  c->lr=0x8022B2A4u; f_8022C6F0(c); // 8022B2A0
  c->r[3]=c->r[31]+0x00000008u; // 8022B2A4
  c->r[4]=0u+0x00000000u; // 8022B2A8
  c->lr=0x8022B2B0u; f_80225180(c); // 8022B2AC
  c->r[10]=c->r[31]|c->r[31]; // 8022B2B0
  c->r[11]=c->r[10]+0x000000B0u; // 8022B2B4
  c->lr=0x8022B2BCu; f_800C2E68(c); // 8022B2B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022B2BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022B2C0
  c->r[1]=c->r[10]|c->r[10]; // 8022B2C4
  c->lr=c->r[0]; // 8022B2C8
  return; // 8022B2CC
}

// fn_8022B2D0
void f_8022B2D0(Ctx* __restrict c) {
  trace_call(0x8022B2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B2D0
  c->r[0]=c->lr; // 8022B2D4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022B2D8
  c->r[11]=c->r[1]+0x000000C0u; // 8022B2DC
  c->lr=0x8022B2E4u; f_800C2E20(c); // 8022B2E0
  c->r[6]=0u+0x80380000u; // 8022B2E4
  c->r[16]=R32(c->r[3]+0x00000000u); // 8022B2E8
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022B2EC
  c->r[6]=c->r[5]|c->r[5]; // 8022B2F0
  c->r[17]=R32(c->r[3]+0x00000004u); // 8022B2F4
  c->r[5]=c->r[4]|c->r[4]; // 8022B2F8
  c->r[18]=R32(c->r[3]+0x00000008u); // 8022B2FC
  c->r[4]=c->r[1]+0x00000008u; // 8022B300
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 8022B304
  c->r[20]=R32(c->r[3]+0x00000010u); // 8022B308
  c->r[21]=R32(c->r[3]+0x00000014u); // 8022B30C
  c->r[22]=R32(c->r[3]+0x00000018u); // 8022B310
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 8022B314
  c->r[24]=R32(c->r[3]+0x00000020u); // 8022B318
  c->r[25]=R32(c->r[3]+0x00000024u); // 8022B31C
  c->r[26]=R32(c->r[3]+0x00000028u); // 8022B320
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 8022B324
  c->r[28]=R32(c->r[3]+0x00000030u); // 8022B328
  c->r[29]=R32(c->r[3]+0x00000034u); // 8022B32C
  c->r[30]=R32(c->r[3]+0x00000038u); // 8022B330
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 8022B334
  c->r[12]=R16(c->r[3]+0x00000040u); // 8022B338
  c->r[11]=R8(c->r[3]+0x00000042u); // 8022B33C
  c->r[10]=R8(c->r[3]+0x00000043u); // 8022B340
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B344
  c->r[9]=R32(c->r[3]+0x00000048u); // 8022B348
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B34C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B350
  c->r[8]=R32(c->r[3]+0x00000054u); // 8022B354
  c->r[7]=R32(c->r[3]+0x00000058u); // 8022B358
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022B35C
  c->r[3]=c->r[1]+0x00000018u; // 8022B360
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8022B364
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8022B368
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8022B36C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8022B370
  W32(c->r[1]+0x00000018u,c->r[16]); // 8022B374
  W32(c->r[1]+0x0000001Cu,c->r[17]); // 8022B378
  W32(c->r[1]+0x00000020u,c->r[18]); // 8022B37C
  W32(c->r[1]+0x00000024u,c->r[19]); // 8022B380
  W32(c->r[1]+0x00000028u,c->r[20]); // 8022B384
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8022B388
  W32(c->r[1]+0x00000030u,c->r[22]); // 8022B38C
  W32(c->r[1]+0x00000034u,c->r[23]); // 8022B390
  W32(c->r[1]+0x00000038u,c->r[24]); // 8022B394
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 8022B398
  W32(c->r[1]+0x00000040u,c->r[26]); // 8022B39C
  W32(c->r[1]+0x00000044u,c->r[27]); // 8022B3A0
  W32(c->r[1]+0x00000048u,c->r[28]); // 8022B3A4
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 8022B3A8
  W32(c->r[1]+0x00000050u,c->r[30]); // 8022B3AC
  W32(c->r[1]+0x00000054u,c->r[31]); // 8022B3B0
  W16(c->r[1]+0x00000058u,c->r[12]); // 8022B3B4
  W8(c->r[1]+0x0000005Au,c->r[11]); // 8022B3B8
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 8022B3BC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8022B3C0
  W32(c->r[1]+0x00000060u,c->r[9]); // 8022B3C4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8022B3C8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8022B3CC
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 8022B3D0
  W32(c->r[1]+0x00000070u,c->r[7]); // 8022B3D4
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022B3D8
  c->lr=0x8022B3E0u; f_8022C6F0(c); // 8022B3DC
  c->r[3]=c->r[1]+0x00000018u; // 8022B3E0
  c->r[4]=0u+0x00000000u; // 8022B3E4
  c->lr=0x8022B3ECu; f_80225180(c); // 8022B3E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B3EC
  c->r[11]=c->r[1]+0x000000C0u; // 8022B3F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B3F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022B3F8
  c->lr=0x8022B400u; f_800C2E6C(c); // 8022B3FC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8022B400
  c->lr=c->r[0]; // 8022B404
  c->r[1]=c->r[1]+0x000000C0u; // 8022B408
  return; // 8022B40C
}

// fn_8022B410
void f_8022B410(Ctx* __restrict c) {
  trace_call(0x8022B410u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B410
  c->r[0]=c->lr; // 8022B414
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022B418
  c->r[11]=c->r[1]+0x000000C0u; // 8022B41C
  c->lr=0x8022B424u; f_800C2E1C(c); // 8022B420
  c->r[17]=c->r[4]|c->r[4]; // 8022B424
  c->r[31]=c->r[3]|c->r[3]; // 8022B428
  c->r[3]=c->r[17]|c->r[17]; // 8022B42C
  c->lr=0x8022B434u; f_800CE4B4(c); // 8022B430
  c->r[4]=0u+0x80380000u; // 8022B434
  c->r[15]=R32(c->r[31]+0x00000000u); // 8022B438
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022B43C
  c->r[5]=c->r[17]|c->r[17]; // 8022B440
  c->r[16]=R32(c->r[31]+0x00000004u); // 8022B444
  c->r[6]=c->r[3]|c->r[3]; // 8022B448
  c->r[17]=R32(c->r[31]+0x00000008u); // 8022B44C
  c->r[3]=c->r[1]+0x00000018u; // 8022B450
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 8022B454
  c->r[4]=c->r[1]+0x00000008u; // 8022B458
  c->r[19]=R32(c->r[31]+0x00000010u); // 8022B45C
  c->r[20]=R32(c->r[31]+0x00000014u); // 8022B460
  c->r[21]=R32(c->r[31]+0x00000018u); // 8022B464
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 8022B468
  c->r[23]=R32(c->r[31]+0x00000020u); // 8022B46C
  c->r[24]=R32(c->r[31]+0x00000024u); // 8022B470
  c->r[25]=R32(c->r[31]+0x00000028u); // 8022B474
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 8022B478
  c->r[27]=R32(c->r[31]+0x00000030u); // 8022B47C
  c->r[28]=R32(c->r[31]+0x00000034u); // 8022B480
  c->r[29]=R32(c->r[31]+0x00000038u); // 8022B484
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 8022B488
  c->r[12]=R16(c->r[31]+0x00000040u); // 8022B48C
  c->r[11]=R8(c->r[31]+0x00000042u); // 8022B490
  c->r[10]=R8(c->r[31]+0x00000043u); // 8022B494
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B498
  c->r[9]=R32(c->r[31]+0x00000048u); // 8022B49C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B4A0
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B4A4
  c->r[8]=R32(c->r[31]+0x00000054u); // 8022B4A8
  c->r[7]=R32(c->r[31]+0x00000058u); // 8022B4AC
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8022B4B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8022B4B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8022B4B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8022B4BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8022B4C0
  W32(c->r[1]+0x00000018u,c->r[15]); // 8022B4C4
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 8022B4C8
  W32(c->r[1]+0x00000020u,c->r[17]); // 8022B4CC
  W32(c->r[1]+0x00000024u,c->r[18]); // 8022B4D0
  W32(c->r[1]+0x00000028u,c->r[19]); // 8022B4D4
  W32(c->r[1]+0x0000002Cu,c->r[20]); // 8022B4D8
  W32(c->r[1]+0x00000030u,c->r[21]); // 8022B4DC
  W32(c->r[1]+0x00000034u,c->r[22]); // 8022B4E0
  W32(c->r[1]+0x00000038u,c->r[23]); // 8022B4E4
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 8022B4E8
  W32(c->r[1]+0x00000040u,c->r[25]); // 8022B4EC
  W32(c->r[1]+0x00000044u,c->r[26]); // 8022B4F0
  W32(c->r[1]+0x00000048u,c->r[27]); // 8022B4F4
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 8022B4F8
  W32(c->r[1]+0x00000050u,c->r[29]); // 8022B4FC
  W32(c->r[1]+0x00000054u,c->r[30]); // 8022B500
  W16(c->r[1]+0x00000058u,c->r[12]); // 8022B504
  W8(c->r[1]+0x0000005Au,c->r[11]); // 8022B508
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 8022B50C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8022B510
  W32(c->r[1]+0x00000060u,c->r[9]); // 8022B514
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8022B518
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8022B51C
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 8022B520
  W32(c->r[1]+0x00000070u,c->r[7]); // 8022B524
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022B528
  c->lr=0x8022B530u; f_8022C6F0(c); // 8022B52C
  c->r[3]=c->r[1]+0x00000018u; // 8022B530
  c->r[4]=0u+0x00000000u; // 8022B534
  c->lr=0x8022B53Cu; f_80225180(c); // 8022B538
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B53C
  c->r[11]=c->r[1]+0x000000C0u; // 8022B540
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B544
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022B548
  c->lr=0x8022B550u; f_800C2E68(c); // 8022B54C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8022B550
  c->lr=c->r[0]; // 8022B554
  c->r[1]=c->r[1]+0x000000C0u; // 8022B558
  return; // 8022B55C
}

// fn_8022B560
void f_8022B560(Ctx* __restrict c) {
  trace_call(0x8022B560u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B560
  c->r[0]=c->lr; // 8022B564
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022B568
  c->r[11]=c->r[1]+0x000000C0u; // 8022B56C
  c->lr=0x8022B574u; f_800C2E20(c); // 8022B570
  c->r[6]=0u+0x80380000u; // 8022B574
  c->r[16]=R32(c->r[3]+0x00000000u); // 8022B578
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022B57C
  c->r[6]=c->r[5]|c->r[5]; // 8022B580
  c->r[17]=R32(c->r[3]+0x00000004u); // 8022B584
  c->r[5]=c->r[4]|c->r[4]; // 8022B588
  c->r[18]=R32(c->r[3]+0x00000008u); // 8022B58C
  c->r[4]=c->r[1]+0x00000008u; // 8022B590
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 8022B594
  c->r[20]=R32(c->r[3]+0x00000010u); // 8022B598
  c->r[21]=R32(c->r[3]+0x00000014u); // 8022B59C
  c->r[22]=R32(c->r[3]+0x00000018u); // 8022B5A0
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 8022B5A4
  c->r[24]=R32(c->r[3]+0x00000020u); // 8022B5A8
  c->r[25]=R32(c->r[3]+0x00000024u); // 8022B5AC
  c->r[26]=R32(c->r[3]+0x00000028u); // 8022B5B0
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 8022B5B4
  c->r[28]=R32(c->r[3]+0x00000030u); // 8022B5B8
  c->r[29]=R32(c->r[3]+0x00000034u); // 8022B5BC
  c->r[30]=R32(c->r[3]+0x00000038u); // 8022B5C0
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 8022B5C4
  c->r[12]=R16(c->r[3]+0x00000040u); // 8022B5C8
  c->r[11]=R8(c->r[3]+0x00000042u); // 8022B5CC
  c->r[10]=R8(c->r[3]+0x00000043u); // 8022B5D0
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B5D4
  c->r[9]=R32(c->r[3]+0x00000048u); // 8022B5D8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B5DC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B5E0
  c->r[8]=R32(c->r[3]+0x00000054u); // 8022B5E4
  c->r[7]=R32(c->r[3]+0x00000058u); // 8022B5E8
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022B5EC
  c->r[3]=c->r[1]+0x00000018u; // 8022B5F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8022B5F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8022B5F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8022B5FC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8022B600
  W32(c->r[1]+0x00000018u,c->r[16]); // 8022B604
  W32(c->r[1]+0x0000001Cu,c->r[17]); // 8022B608
  W32(c->r[1]+0x00000020u,c->r[18]); // 8022B60C
  W32(c->r[1]+0x00000024u,c->r[19]); // 8022B610
  W32(c->r[1]+0x00000028u,c->r[20]); // 8022B614
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8022B618
  W32(c->r[1]+0x00000030u,c->r[22]); // 8022B61C
  W32(c->r[1]+0x00000034u,c->r[23]); // 8022B620
  W32(c->r[1]+0x00000038u,c->r[24]); // 8022B624
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 8022B628
  W32(c->r[1]+0x00000040u,c->r[26]); // 8022B62C
  W32(c->r[1]+0x00000044u,c->r[27]); // 8022B630
  W32(c->r[1]+0x00000048u,c->r[28]); // 8022B634
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 8022B638
  W32(c->r[1]+0x00000050u,c->r[30]); // 8022B63C
  W32(c->r[1]+0x00000054u,c->r[31]); // 8022B640
  W16(c->r[1]+0x00000058u,c->r[12]); // 8022B644
  W8(c->r[1]+0x0000005Au,c->r[11]); // 8022B648
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 8022B64C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8022B650
  W32(c->r[1]+0x00000060u,c->r[9]); // 8022B654
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8022B658
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8022B65C
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 8022B660
  W32(c->r[1]+0x00000070u,c->r[7]); // 8022B664
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022B668
  c->lr=0x8022B670u; f_8022C6F0(c); // 8022B66C
  c->r[3]=c->r[1]+0x00000018u; // 8022B670
  c->r[4]=0u+0x00000000u; // 8022B674
  c->lr=0x8022B67Cu; f_80225180(c); // 8022B678
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B67C
  c->r[11]=c->r[1]+0x000000C0u; // 8022B680
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B684
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022B688
  c->lr=0x8022B690u; f_800C2E6C(c); // 8022B68C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8022B690
  c->lr=c->r[0]; // 8022B694
  c->r[1]=c->r[1]+0x000000C0u; // 8022B698
  return; // 8022B69C
}

// fn_8022B6A0
void f_8022B6A0(Ctx* __restrict c) {
  trace_call(0x8022B6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B6A0
  c->r[0]=c->lr; // 8022B6A4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022B6A8
  c->r[11]=c->r[1]+0x000000C0u; // 8022B6AC
  c->lr=0x8022B6B4u; f_800C2E1C(c); // 8022B6B0
  c->r[17]=c->r[4]|c->r[4]; // 8022B6B4
  c->r[31]=c->r[3]|c->r[3]; // 8022B6B8
  c->r[3]=c->r[17]|c->r[17]; // 8022B6BC
  c->lr=0x8022B6C4u; f_800CE4B4(c); // 8022B6C0
  c->r[4]=0u+0x80380000u; // 8022B6C4
  c->r[15]=R32(c->r[31]+0x00000000u); // 8022B6C8
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022B6CC
  c->r[5]=c->r[17]|c->r[17]; // 8022B6D0
  c->r[16]=R32(c->r[31]+0x00000004u); // 8022B6D4
  c->r[6]=c->r[3]|c->r[3]; // 8022B6D8
  c->r[17]=R32(c->r[31]+0x00000008u); // 8022B6DC
  c->r[3]=c->r[1]+0x00000018u; // 8022B6E0
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 8022B6E4
  c->r[4]=c->r[1]+0x00000008u; // 8022B6E8
  c->r[19]=R32(c->r[31]+0x00000010u); // 8022B6EC
  c->r[20]=R32(c->r[31]+0x00000014u); // 8022B6F0
  c->r[21]=R32(c->r[31]+0x00000018u); // 8022B6F4
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 8022B6F8
  c->r[23]=R32(c->r[31]+0x00000020u); // 8022B6FC
  c->r[24]=R32(c->r[31]+0x00000024u); // 8022B700
  c->r[25]=R32(c->r[31]+0x00000028u); // 8022B704
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 8022B708
  c->r[27]=R32(c->r[31]+0x00000030u); // 8022B70C
  c->r[28]=R32(c->r[31]+0x00000034u); // 8022B710
  c->r[29]=R32(c->r[31]+0x00000038u); // 8022B714
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 8022B718
  c->r[12]=R16(c->r[31]+0x00000040u); // 8022B71C
  c->r[11]=R8(c->r[31]+0x00000042u); // 8022B720
  c->r[10]=R8(c->r[31]+0x00000043u); // 8022B724
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B728
  c->r[9]=R32(c->r[31]+0x00000048u); // 8022B72C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B730
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B734
  c->r[8]=R32(c->r[31]+0x00000054u); // 8022B738
  c->r[7]=R32(c->r[31]+0x00000058u); // 8022B73C
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8022B740
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 8022B744
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 8022B748
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8022B74C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8022B750
  W32(c->r[1]+0x00000018u,c->r[15]); // 8022B754
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 8022B758
  W32(c->r[1]+0x00000020u,c->r[17]); // 8022B75C
  W32(c->r[1]+0x00000024u,c->r[18]); // 8022B760
  W32(c->r[1]+0x00000028u,c->r[19]); // 8022B764
  W32(c->r[1]+0x0000002Cu,c->r[20]); // 8022B768
  W32(c->r[1]+0x00000030u,c->r[21]); // 8022B76C
  W32(c->r[1]+0x00000034u,c->r[22]); // 8022B770
  W32(c->r[1]+0x00000038u,c->r[23]); // 8022B774
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 8022B778
  W32(c->r[1]+0x00000040u,c->r[25]); // 8022B77C
  W32(c->r[1]+0x00000044u,c->r[26]); // 8022B780
  W32(c->r[1]+0x00000048u,c->r[27]); // 8022B784
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 8022B788
  W32(c->r[1]+0x00000050u,c->r[29]); // 8022B78C
  W32(c->r[1]+0x00000054u,c->r[30]); // 8022B790
  W16(c->r[1]+0x00000058u,c->r[12]); // 8022B794
  W8(c->r[1]+0x0000005Au,c->r[11]); // 8022B798
  W8(c->r[1]+0x0000005Bu,c->r[10]); // 8022B79C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 8022B7A0
  W32(c->r[1]+0x00000060u,c->r[9]); // 8022B7A4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8022B7A8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8022B7AC
  W32(c->r[1]+0x0000006Cu,c->r[8]); // 8022B7B0
  W32(c->r[1]+0x00000070u,c->r[7]); // 8022B7B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022B7B8
  c->lr=0x8022B7C0u; f_8022C6F0(c); // 8022B7BC
  c->r[3]=c->r[1]+0x00000018u; // 8022B7C0
  c->r[4]=0u+0x00000000u; // 8022B7C4
  c->lr=0x8022B7CCu; f_80225180(c); // 8022B7C8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B7CC
  c->r[11]=c->r[1]+0x000000C0u; // 8022B7D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B7D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022B7D8
  c->lr=0x8022B7E0u; f_800C2E68(c); // 8022B7DC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8022B7E0
  c->lr=c->r[0]; // 8022B7E4
  c->r[1]=c->r[1]+0x000000C0u; // 8022B7E8
  return; // 8022B7EC
}

// fn_8022B7F0
void f_8022B7F0(Ctx* __restrict c) {
  trace_call(0x8022B7F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B7F0
  c->r[0]=c->lr; // 8022B7F4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8022B7F8
  c->r[11]=c->r[1]+0x000000B0u; // 8022B7FC
  c->lr=0x8022B804u; f_800C2E20(c); // 8022B800
  c->r[16]=R32(c->r[3]+0x00000000u); // 8022B804
  c->r[17]=R32(c->r[3]+0x00000004u); // 8022B808
  c->r[18]=R32(c->r[3]+0x00000008u); // 8022B80C
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 8022B810
  c->r[20]=R32(c->r[3]+0x00000010u); // 8022B814
  c->r[21]=R32(c->r[3]+0x00000014u); // 8022B818
  c->r[22]=R32(c->r[3]+0x00000018u); // 8022B81C
  c->r[23]=R32(c->r[3]+0x0000001Cu); // 8022B820
  c->r[24]=R32(c->r[3]+0x00000020u); // 8022B824
  c->r[25]=R32(c->r[3]+0x00000024u); // 8022B828
  c->r[26]=R32(c->r[3]+0x00000028u); // 8022B82C
  c->r[27]=R32(c->r[3]+0x0000002Cu); // 8022B830
  c->r[28]=R32(c->r[3]+0x00000030u); // 8022B834
  c->r[29]=R32(c->r[3]+0x00000034u); // 8022B838
  c->r[30]=R32(c->r[3]+0x00000038u); // 8022B83C
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 8022B840
  c->r[12]=R16(c->r[3]+0x00000040u); // 8022B844
  c->r[11]=R8(c->r[3]+0x00000042u); // 8022B848
  c->r[10]=R8(c->r[3]+0x00000043u); // 8022B84C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B850
  c->r[9]=R32(c->r[3]+0x00000048u); // 8022B854
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B858
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B85C
  c->r[8]=R32(c->r[3]+0x00000054u); // 8022B860
  c->r[7]=R32(c->r[3]+0x00000058u); // 8022B864
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022B868
  c->r[3]=c->r[1]+0x00000008u; // 8022B86C
  W32(c->r[1]+0x00000008u,c->r[16]); // 8022B870
  W32(c->r[1]+0x0000000Cu,c->r[17]); // 8022B874
  W32(c->r[1]+0x00000010u,c->r[18]); // 8022B878
  W32(c->r[1]+0x00000014u,c->r[19]); // 8022B87C
  W32(c->r[1]+0x00000018u,c->r[20]); // 8022B880
  W32(c->r[1]+0x0000001Cu,c->r[21]); // 8022B884
  W32(c->r[1]+0x00000020u,c->r[22]); // 8022B888
  W32(c->r[1]+0x00000024u,c->r[23]); // 8022B88C
  W32(c->r[1]+0x00000028u,c->r[24]); // 8022B890
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 8022B894
  W32(c->r[1]+0x00000030u,c->r[26]); // 8022B898
  W32(c->r[1]+0x00000034u,c->r[27]); // 8022B89C
  W32(c->r[1]+0x00000038u,c->r[28]); // 8022B8A0
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 8022B8A4
  W32(c->r[1]+0x00000040u,c->r[30]); // 8022B8A8
  W32(c->r[1]+0x00000044u,c->r[31]); // 8022B8AC
  W16(c->r[1]+0x00000048u,c->r[12]); // 8022B8B0
  W8(c->r[1]+0x0000004Au,c->r[11]); // 8022B8B4
  W8(c->r[1]+0x0000004Bu,c->r[10]); // 8022B8B8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 8022B8BC
  W32(c->r[1]+0x00000050u,c->r[9]); // 8022B8C0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8022B8C4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8022B8C8
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 8022B8CC
  W32(c->r[1]+0x00000060u,c->r[7]); // 8022B8D0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022B8D4
  c->lr=0x8022B8DCu; f_8022C6F0(c); // 8022B8D8
  c->r[3]=c->r[1]+0x00000008u; // 8022B8DC
  c->r[4]=0u+0x00000000u; // 8022B8E0
  c->lr=0x8022B8E8u; f_80225180(c); // 8022B8E4
  c->r[11]=c->r[1]+0x000000B0u; // 8022B8E8
  c->lr=0x8022B8F0u; f_800C2E6C(c); // 8022B8EC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8022B8F0
  c->lr=c->r[0]; // 8022B8F4
  c->r[1]=c->r[1]+0x000000B0u; // 8022B8F8
  return; // 8022B8FC
}

// fn_8022B900
void f_8022B900(Ctx* __restrict c) {
  trace_call(0x8022B900u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B900
  c->r[0]=c->lr; // 8022B904
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8022B908
  c->r[11]=c->r[1]+0x000000B0u; // 8022B90C
  c->lr=0x8022B914u; f_800C2E1C(c); // 8022B910
  c->r[18]=c->r[5]|c->r[5]; // 8022B914
  c->r[31]=c->r[3]|c->r[3]; // 8022B918
  c->r[17]=c->r[4]|c->r[4]; // 8022B91C
  c->r[3]=c->r[18]|c->r[18]; // 8022B920
  c->lr=0x8022B928u; f_800CE4B4(c); // 8022B924
  c->r[15]=R32(c->r[31]+0x00000000u); // 8022B928
  c->r[4]=c->r[17]|c->r[17]; // 8022B92C
  c->r[16]=R32(c->r[31]+0x00000004u); // 8022B930
  c->r[5]=c->r[18]|c->r[18]; // 8022B934
  c->r[17]=R32(c->r[31]+0x00000008u); // 8022B938
  c->r[6]=c->r[3]|c->r[3]; // 8022B93C
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 8022B940
  c->r[3]=c->r[1]+0x00000008u; // 8022B944
  c->r[19]=R32(c->r[31]+0x00000010u); // 8022B948
  c->r[20]=R32(c->r[31]+0x00000014u); // 8022B94C
  c->r[21]=R32(c->r[31]+0x00000018u); // 8022B950
  c->r[22]=R32(c->r[31]+0x0000001Cu); // 8022B954
  c->r[23]=R32(c->r[31]+0x00000020u); // 8022B958
  c->r[24]=R32(c->r[31]+0x00000024u); // 8022B95C
  c->r[25]=R32(c->r[31]+0x00000028u); // 8022B960
  c->r[26]=R32(c->r[31]+0x0000002Cu); // 8022B964
  c->r[27]=R32(c->r[31]+0x00000030u); // 8022B968
  c->r[28]=R32(c->r[31]+0x00000034u); // 8022B96C
  c->r[29]=R32(c->r[31]+0x00000038u); // 8022B970
  c->r[30]=R32(c->r[31]+0x0000003Cu); // 8022B974
  c->r[12]=R16(c->r[31]+0x00000040u); // 8022B978
  c->r[11]=R8(c->r[31]+0x00000042u); // 8022B97C
  c->r[10]=R8(c->r[31]+0x00000043u); // 8022B980
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B984
  c->r[9]=R32(c->r[31]+0x00000048u); // 8022B988
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B98C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B990
  c->r[8]=R32(c->r[31]+0x00000054u); // 8022B994
  c->r[7]=R32(c->r[31]+0x00000058u); // 8022B998
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8022B99C
  W32(c->r[1]+0x00000008u,c->r[15]); // 8022B9A0
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 8022B9A4
  W32(c->r[1]+0x00000010u,c->r[17]); // 8022B9A8
  W32(c->r[1]+0x00000014u,c->r[18]); // 8022B9AC
  W32(c->r[1]+0x00000018u,c->r[19]); // 8022B9B0
  W32(c->r[1]+0x0000001Cu,c->r[20]); // 8022B9B4
  W32(c->r[1]+0x00000020u,c->r[21]); // 8022B9B8
  W32(c->r[1]+0x00000024u,c->r[22]); // 8022B9BC
  W32(c->r[1]+0x00000028u,c->r[23]); // 8022B9C0
  W32(c->r[1]+0x0000002Cu,c->r[24]); // 8022B9C4
  W32(c->r[1]+0x00000030u,c->r[25]); // 8022B9C8
  W32(c->r[1]+0x00000034u,c->r[26]); // 8022B9CC
  W32(c->r[1]+0x00000038u,c->r[27]); // 8022B9D0
  W32(c->r[1]+0x0000003Cu,c->r[28]); // 8022B9D4
  W32(c->r[1]+0x00000040u,c->r[29]); // 8022B9D8
  W32(c->r[1]+0x00000044u,c->r[30]); // 8022B9DC
  W16(c->r[1]+0x00000048u,c->r[12]); // 8022B9E0
  W8(c->r[1]+0x0000004Au,c->r[11]); // 8022B9E4
  W8(c->r[1]+0x0000004Bu,c->r[10]); // 8022B9E8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 8022B9EC
  W32(c->r[1]+0x00000050u,c->r[9]); // 8022B9F0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8022B9F4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8022B9F8
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 8022B9FC
  W32(c->r[1]+0x00000060u,c->r[7]); // 8022BA00
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022BA04
  c->lr=0x8022BA0Cu; f_8022C6F0(c); // 8022BA08
  c->r[3]=c->r[1]+0x00000008u; // 8022BA0C
  c->r[4]=0u+0x00000000u; // 8022BA10
  c->lr=0x8022BA18u; f_80225180(c); // 8022BA14
  c->r[11]=c->r[1]+0x000000B0u; // 8022BA18
  c->lr=0x8022BA20u; f_800C2E68(c); // 8022BA1C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8022BA20
  c->lr=c->r[0]; // 8022BA24
  c->r[1]=c->r[1]+0x000000B0u; // 8022BA28
  return; // 8022BA2C
}

// fn_8022BA30
void f_8022BA30(Ctx* __restrict c) {
  trace_call(0x8022BA30u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BA30
  c->r[0]=c->lr; // 8022BA34
  W32(c->r[1]+0x00000114u,c->r[0]); // 8022BA38
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 8022BA3C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 8022BA40
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 8022BA44
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 8022BA48
  W32(c->r[1]+0x000000ECu,c->r[31]); // 8022BA4C
  c->r[31]=c->r[1]|c->r[1]; // 8022BA50
  W32(c->r[1]+0x000000E8u,c->r[30]); // 8022BA54
  c->r[30]=c->r[3]|c->r[3]; // 8022BA58
  W32(c->r[1]+0x000000E4u,c->r[29]); // 8022BA5C
  W32(c->r[1]+0x000000E0u,c->r[28]); // 8022BA60
  c->r[28]=c->r[4]|c->r[4]; // 8022BA64
  if (!crb(c,6)) { goto L_8022BA8C; } // 8022BA68
  {uint32_t ea=c->r[31]+0x00000028u; WF64(ea,c->f[1]);} // 8022BA6C
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[2]);} // 8022BA70
  {uint32_t ea=c->r[31]+0x00000038u; WF64(ea,c->f[3]);} // 8022BA74
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[4]);} // 8022BA78
  {uint32_t ea=c->r[31]+0x00000048u; WF64(ea,c->f[5]);} // 8022BA7C
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[6]);} // 8022BA80
  {uint32_t ea=c->r[31]+0x00000058u; WF64(ea,c->f[7]);} // 8022BA84
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[8]);} // 8022BA88
L_8022BA8C:;
  c->r[11]=0u+0x80490000u; // 8022BA8C
  c->r[12]=c->r[31]+0x00000118u; // 8022BA90
  c->r[29]=R32(c->r[11]+0x00001A80u); // 8022BA94
  c->r[0]=c->r[31]+0x00000008u; // 8022BA98
  c->r[11]=0u+0x02000000u; // 8022BA9C
  W32(c->r[31]+0x00000008u,c->r[3]); // 8022BAA0
  cmps(c,0,(int32_t)c->r[29],0); // 8022BAA4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8022BAA8
  W32(c->r[31]+0x00000010u,c->r[5]); // 8022BAAC
  W32(c->r[31]+0x00000014u,c->r[6]); // 8022BAB0
  W32(c->r[31]+0x00000018u,c->r[7]); // 8022BAB4
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 8022BAB8
  W32(c->r[31]+0x00000020u,c->r[9]); // 8022BABC
  W32(c->r[31]+0x00000024u,c->r[10]); // 8022BAC0
  W32(c->r[31]+0x00000068u,c->r[11]); // 8022BAC4
  W32(c->r[31]+0x0000006Cu,c->r[12]); // 8022BAC8
  W32(c->r[31]+0x00000070u,c->r[0]); // 8022BACC
  if (crb(c,2)) { goto L_8022BAD8; } // 8022BAD0
  goto L_8022BAF4; // 8022BAD4
L_8022BAD8:;
  c->r[3]=0u+0x803B0000u; // 8022BAD8
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022BADC
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022BAE0
  c->r[29]=0u-c->r[3]; // 8022BAE4
  c->r[29]=rotl(c->r[29],0)&0xFFFFFFF8u; // 8022BAE8
  {uint32_t ea=c->r[1]+c->r[29]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022BAEC
  c->r[29]=c->r[1]+0x00000008u; // 8022BAF0
L_8022BAF4:;
  c->r[4]=0u+0x803B0000u; // 8022BAF4
  c->r[3]=c->r[29]|c->r[29]; // 8022BAF8
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022BAFC
  c->r[5]=c->r[28]|c->r[28]; // 8022BB00
  c->r[6]=c->r[31]+0x00000068u; // 8022BB04
  c->lr=0x8022BB0Cu; f_800CE428(c); // 8022BB08
  c->r[0]=R32(c->r[30]+0x00000000u); // 8022BB0C
  c->r[5]=c->r[3]|c->r[3]; // 8022BB10
  W32(c->r[31]+0x00000078u,c->r[0]); // 8022BB14
  c->r[4]=c->r[29]|c->r[29]; // 8022BB18
  c->r[3]=c->r[31]+0x00000078u; // 8022BB1C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8022BB20
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 8022BB24
  c->r[0]=R32(c->r[30]+0x00000008u); // 8022BB28
  W32(c->r[31]+0x00000080u,c->r[0]); // 8022BB2C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022BB30
  W32(c->r[31]+0x00000084u,c->r[0]); // 8022BB34
  c->r[0]=R32(c->r[30]+0x00000010u); // 8022BB38
  W32(c->r[31]+0x00000088u,c->r[0]); // 8022BB3C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022BB40
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8022BB44
  c->r[0]=R32(c->r[30]+0x00000018u); // 8022BB48
  W32(c->r[31]+0x00000090u,c->r[0]); // 8022BB4C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8022BB50
  W32(c->r[31]+0x00000094u,c->r[0]); // 8022BB54
  c->r[0]=R32(c->r[30]+0x00000020u); // 8022BB58
  W32(c->r[31]+0x00000098u,c->r[0]); // 8022BB5C
  c->r[6]=R32(c->r[30]+0x00000024u); // 8022BB60
  c->r[0]=R32(c->r[30]+0x00000028u); // 8022BB64
  W32(c->r[31]+0x000000A0u,c->r[0]); // 8022BB68
  W32(c->r[31]+0x0000009Cu,c->r[6]); // 8022BB6C
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 8022BB70
  c->r[0]=R32(c->r[30]+0x00000030u); // 8022BB74
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8022BB78
  W32(c->r[31]+0x000000A4u,c->r[6]); // 8022BB7C
  c->r[0]=R32(c->r[30]+0x00000034u); // 8022BB80
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8022BB84
  c->r[6]=R32(c->r[30]+0x00000038u); // 8022BB88
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8022BB8C
  W32(c->r[31]+0x000000B4u,c->r[0]); // 8022BB90
  W32(c->r[31]+0x000000B0u,c->r[6]); // 8022BB94
  c->r[0]=R16(c->r[30]+0x00000040u); // 8022BB98
  W16(c->r[31]+0x000000B8u,c->r[0]); // 8022BB9C
  c->r[0]=R8(c->r[30]+0x00000042u); // 8022BBA0
  W8(c->r[31]+0x000000BAu,c->r[0]); // 8022BBA4
  c->r[0]=R8(c->r[30]+0x00000043u); // 8022BBA8
  W8(c->r[31]+0x000000BBu,c->r[0]); // 8022BBAC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BBB0
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 8022BBB4
  c->r[0]=R32(c->r[30]+0x00000048u); // 8022BBB8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8022BBBC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BBC0
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8022BBC4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BBC8
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8022BBCC
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022BBD0
  W32(c->r[31]+0x000000CCu,c->r[0]); // 8022BBD4
  c->r[0]=R32(c->r[30]+0x00000058u); // 8022BBD8
  W32(c->r[31]+0x000000D0u,c->r[0]); // 8022BBDC
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8022BBE0
  W32(c->r[31]+0x000000D4u,c->r[0]); // 8022BBE4
  c->lr=0x8022BBECu; f_8022C810(c); // 8022BBE8
  c->f[30]=c->f[1]; // 8022BBEC
  c->r[3]=c->r[31]+0x00000078u; // 8022BBF0
  c->lr=0x8022BBF8u; f_80226250(c); // 8022BBF4
  c->f[31]=c->f[1]; // 8022BBF8
  c->r[3]=c->r[31]+0x00000078u; // 8022BBFC
  c->lr=0x8022BC04u; f_80226240(c); // 8022BC00
  c->f[2]=c->f[31]; // 8022BC04
  c->r[3]=c->r[30]|c->r[30]; // 8022BC08
  c->lr=0x8022BC10u; f_802261F0(c); // 8022BC0C
  c->r[3]=c->r[31]+0x00000078u; // 8022BC10
  c->r[4]=0u+0x00000000u; // 8022BC14
  c->lr=0x8022BC1Cu; f_80225180(c); // 8022BC18
  c->r[10]=c->r[31]|c->r[31]; // 8022BC1C
  c->f[1]=c->f[30]; // 8022BC20
  {uint32_t ea=c->r[10]+0x00000108u; psq_load(c,31,ea,0,0);} // 8022BC24
  {uint32_t ea=c->r[31]+0x00000100u; c->f[31]=RF64(ea);} // 8022BC28
  {uint32_t ea=c->r[10]+0x000000F8u; psq_load(c,30,ea,0,0);} // 8022BC2C
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[30]=RF64(ea);} // 8022BC30
  c->r[31]=R32(c->r[31]+0x000000ECu); // 8022BC34
  c->r[30]=R32(c->r[10]+0x000000E8u); // 8022BC38
  c->r[29]=R32(c->r[10]+0x000000E4u); // 8022BC3C
  c->r[28]=R32(c->r[10]+0x000000E0u); // 8022BC40
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022BC44
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022BC48
  c->r[1]=c->r[10]|c->r[10]; // 8022BC4C
  c->lr=c->r[0]; // 8022BC50
  return; // 8022BC54
}

// fn_8022BC60
void f_8022BC60(Ctx* __restrict c) {
  trace_call(0x8022BC60u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BC60
  c->r[0]=c->lr; // 8022BC64
  c->r[6]=0u+0x80490000u; // 8022BC68
  c->r[7]=c->r[4]|c->r[4]; // 8022BC6C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8022BC70
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8022BC74
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8022BC78
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8022BC7C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 8022BC80
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8022BC84
  c->r[31]=c->r[1]|c->r[1]; // 8022BC88
  W32(c->r[1]+0x00000078u,c->r[30]); // 8022BC8C
  c->r[30]=c->r[3]|c->r[3]; // 8022BC90
  W32(c->r[1]+0x00000074u,c->r[29]); // 8022BC94
  c->r[29]=R32(c->r[6]+0x00001A80u); // 8022BC98
  c->r[6]=c->r[5]|c->r[5]; // 8022BC9C
  cmps(c,0,(int32_t)c->r[29],0); // 8022BCA0
  if (crb(c,2)) { goto L_8022BCAC; } // 8022BCA4
  goto L_8022BCC8; // 8022BCA8
L_8022BCAC:;
  c->r[3]=0u+0x803B0000u; // 8022BCAC
  c->r[0]=R32(c->r[1]+0x00000000u); // 8022BCB0
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022BCB4
  c->r[29]=0u-c->r[3]; // 8022BCB8
  c->r[29]=rotl(c->r[29],0)&0xFFFFFFF8u; // 8022BCBC
  {uint32_t ea=c->r[1]+c->r[29]; W32(ea,c->r[0]); c->r[1]=ea;} // 8022BCC0
  c->r[29]=c->r[1]+0x00000008u; // 8022BCC4
L_8022BCC8:;
  c->r[4]=0u+0x803B0000u; // 8022BCC8
  c->r[3]=c->r[29]|c->r[29]; // 8022BCCC
  c->r[4]=R32(c->r[4]+0xFFFF8F44u); // 8022BCD0
  c->r[5]=c->r[7]|c->r[7]; // 8022BCD4
  c->lr=0x8022BCDCu; f_800CE428(c); // 8022BCD8
  c->r[0]=R32(c->r[30]+0x00000000u); // 8022BCDC
  c->r[5]=c->r[3]|c->r[3]; // 8022BCE0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8022BCE4
  c->r[4]=c->r[29]|c->r[29]; // 8022BCE8
  c->r[3]=c->r[31]+0x00000008u; // 8022BCEC
  c->r[0]=R32(c->r[30]+0x00000004u); // 8022BCF0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8022BCF4
  c->r[0]=R32(c->r[30]+0x00000008u); // 8022BCF8
  W32(c->r[31]+0x00000010u,c->r[0]); // 8022BCFC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022BD00
  W32(c->r[31]+0x00000014u,c->r[0]); // 8022BD04
  c->r[0]=R32(c->r[30]+0x00000010u); // 8022BD08
  W32(c->r[31]+0x00000018u,c->r[0]); // 8022BD0C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022BD10
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8022BD14
  c->r[0]=R32(c->r[30]+0x00000018u); // 8022BD18
  W32(c->r[31]+0x00000020u,c->r[0]); // 8022BD1C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8022BD20
  W32(c->r[31]+0x00000024u,c->r[0]); // 8022BD24
  c->r[0]=R32(c->r[30]+0x00000020u); // 8022BD28
  W32(c->r[31]+0x00000028u,c->r[0]); // 8022BD2C
  c->r[6]=R32(c->r[30]+0x00000024u); // 8022BD30
  c->r[0]=R32(c->r[30]+0x00000028u); // 8022BD34
  W32(c->r[31]+0x00000030u,c->r[0]); // 8022BD38
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 8022BD3C
  c->r[6]=R32(c->r[30]+0x0000002Cu); // 8022BD40
  c->r[0]=R32(c->r[30]+0x00000030u); // 8022BD44
  W32(c->r[31]+0x00000038u,c->r[0]); // 8022BD48
  W32(c->r[31]+0x00000034u,c->r[6]); // 8022BD4C
  c->r[0]=R32(c->r[30]+0x00000034u); // 8022BD50
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8022BD54
  c->r[6]=R32(c->r[30]+0x00000038u); // 8022BD58
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8022BD5C
  W32(c->r[31]+0x00000044u,c->r[0]); // 8022BD60
  W32(c->r[31]+0x00000040u,c->r[6]); // 8022BD64
  c->r[0]=R16(c->r[30]+0x00000040u); // 8022BD68
  W16(c->r[31]+0x00000048u,c->r[0]); // 8022BD6C
  c->r[0]=R8(c->r[30]+0x00000042u); // 8022BD70
  W8(c->r[31]+0x0000004Au,c->r[0]); // 8022BD74
  c->r[0]=R8(c->r[30]+0x00000043u); // 8022BD78
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 8022BD7C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BD80
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 8022BD84
  c->r[0]=R32(c->r[30]+0x00000048u); // 8022BD88
  W32(c->r[31]+0x00000050u,c->r[0]); // 8022BD8C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BD90
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8022BD94
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BD98
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8022BD9C
  c->r[0]=R32(c->r[30]+0x00000054u); // 8022BDA0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8022BDA4
  c->r[0]=R32(c->r[30]+0x00000058u); // 8022BDA8
  W32(c->r[31]+0x00000060u,c->r[0]); // 8022BDAC
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8022BDB0
  W32(c->r[31]+0x00000064u,c->r[0]); // 8022BDB4
  c->lr=0x8022BDBCu; f_8022C810(c); // 8022BDB8
  c->f[30]=c->f[1]; // 8022BDBC
  c->r[3]=c->r[31]+0x00000008u; // 8022BDC0
  c->lr=0x8022BDC8u; f_80226250(c); // 8022BDC4
  c->f[31]=c->f[1]; // 8022BDC8
  c->r[3]=c->r[31]+0x00000008u; // 8022BDCC
  c->lr=0x8022BDD4u; f_80226240(c); // 8022BDD0
  c->f[2]=c->f[31]; // 8022BDD4
  c->r[3]=c->r[30]|c->r[30]; // 8022BDD8
  c->lr=0x8022BDE0u; f_802261F0(c); // 8022BDDC
  c->r[3]=c->r[31]+0x00000008u; // 8022BDE0
  c->r[4]=0u+0x00000000u; // 8022BDE4
  c->lr=0x8022BDECu; f_80225180(c); // 8022BDE8
  c->r[10]=c->r[31]|c->r[31]; // 8022BDEC
  c->f[1]=c->f[30]; // 8022BDF0
  {uint32_t ea=c->r[10]+0x00000098u; psq_load(c,31,ea,0,0);} // 8022BDF4
  {uint32_t ea=c->r[31]+0x00000090u; c->f[31]=RF64(ea);} // 8022BDF8
  {uint32_t ea=c->r[10]+0x00000088u; psq_load(c,30,ea,0,0);} // 8022BDFC
  {uint32_t ea=c->r[31]+0x00000080u; c->f[30]=RF64(ea);} // 8022BE00
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 8022BE04
  c->r[30]=R32(c->r[10]+0x00000078u); // 8022BE08
  c->r[29]=R32(c->r[10]+0x00000074u); // 8022BE0C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8022BE10
  c->r[0]=R32(c->r[10]+0x00000004u); // 8022BE14
  c->r[1]=c->r[10]|c->r[10]; // 8022BE18
  c->lr=c->r[0]; // 8022BE1C
  return; // 8022BE20
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_8022BE30(Ctx* __restrict c) {
  trace_call(0x8022BE30u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BE30
  c->r[0]=c->lr; // 8022BE34
  W32(c->r[1]+0x00000094u,c->r[0]); // 8022BE38
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8022BE3C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8022BE40
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8022BE44
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8022BE48
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8022BE4C
  c->r[31]=c->r[3]|c->r[3]; // 8022BE50
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022BE54
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022BE58
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022BE5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8022BE60
  c->r[0]=R32(c->r[3]+0x00000008u); // 8022BE64
  W32(c->r[1]+0x00000010u,c->r[0]); // 8022BE68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8022BE6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022BE70
  c->r[0]=R32(c->r[3]+0x00000010u); // 8022BE74
  W32(c->r[1]+0x00000018u,c->r[0]); // 8022BE78
  c->r[0]=R32(c->r[3]+0x00000014u); // 8022BE7C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022BE80
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022BE84
  W32(c->r[1]+0x00000020u,c->r[0]); // 8022BE88
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8022BE8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022BE90
  c->r[0]=R32(c->r[3]+0x00000020u); // 8022BE94
  W32(c->r[1]+0x00000028u,c->r[0]); // 8022BE98
  c->r[6]=R32(c->r[3]+0x00000024u); // 8022BE9C
  c->r[0]=R32(c->r[3]+0x00000028u); // 8022BEA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8022BEA4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8022BEA8
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 8022BEAC
  c->r[0]=R32(c->r[3]+0x00000030u); // 8022BEB0
  W32(c->r[1]+0x00000038u,c->r[0]); // 8022BEB4
  W32(c->r[1]+0x00000034u,c->r[6]); // 8022BEB8
  c->r[0]=R32(c->r[3]+0x00000034u); // 8022BEBC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8022BEC0
  c->r[6]=R32(c->r[3]+0x00000038u); // 8022BEC4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8022BEC8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022BECC
  W32(c->r[1]+0x00000040u,c->r[6]); // 8022BED0
  c->r[0]=R16(c->r[3]+0x00000040u); // 8022BED4
  W16(c->r[1]+0x00000048u,c->r[0]); // 8022BED8
  c->r[0]=R8(c->r[3]+0x00000042u); // 8022BEDC
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8022BEE0
  c->r[0]=R8(c->r[3]+0x00000043u); // 8022BEE4
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 8022BEE8
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BEEC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8022BEF0
  c->r[0]=R32(c->r[3]+0x00000048u); // 8022BEF4
  W32(c->r[1]+0x00000050u,c->r[0]); // 8022BEF8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BEFC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8022BF00
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BF04
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8022BF08
  c->r[0]=R32(c->r[3]+0x00000054u); // 8022BF0C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8022BF10
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022BF14
  W32(c->r[1]+0x00000060u,c->r[0]); // 8022BF18
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022BF1C
  c->r[3]=c->r[1]+0x00000008u; // 8022BF20
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022BF24
  c->lr=0x8022BF2Cu; f_8022C810(c); // 8022BF28
  c->f[30]=c->f[1]; // 8022BF2C
  c->r[3]=c->r[1]+0x00000008u; // 8022BF30
  c->lr=0x8022BF38u; f_80226250(c); // 8022BF34
  c->f[31]=c->f[1]; // 8022BF38
  c->r[3]=c->r[1]+0x00000008u; // 8022BF3C
  c->lr=0x8022BF44u; f_80226240(c); // 8022BF40
  c->f[2]=c->f[31]; // 8022BF44
  c->r[3]=c->r[31]|c->r[31]; // 8022BF48
  c->lr=0x8022BF50u; f_802261F0(c); // 8022BF4C
  c->r[3]=c->r[1]+0x00000008u; // 8022BF50
  c->r[4]=0u+0x00000000u; // 8022BF54
  c->lr=0x8022BF5Cu; f_80225180(c); // 8022BF58
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8022BF5C
  c->f[1]=c->f[30]; // 8022BF60
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8022BF64
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8022BF68
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8022BF6C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8022BF70
  c->r[0]=R32(c->r[1]+0x00000094u); // 8022BF74
  c->lr=c->r[0]; // 8022BF78
  c->r[1]=c->r[1]+0x00000090u; // 8022BF7C
  return; // 8022BF80
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCw
void f_8022BF90(Ctx* __restrict c) {
  trace_call(0x8022BF90u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BF90
  c->r[0]=c->lr; // 8022BF94
  W32(c->r[1]+0x00000094u,c->r[0]); // 8022BF98
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8022BF9C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8022BFA0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8022BFA4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8022BFA8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8022BFAC
  c->r[31]=c->r[3]|c->r[3]; // 8022BFB0
  W32(c->r[1]+0x00000068u,c->r[30]); // 8022BFB4
  c->r[30]=c->r[4]|c->r[4]; // 8022BFB8
  c->r[3]=c->r[30]|c->r[30]; // 8022BFBC
  c->lr=0x8022BFC4u; f_800CE4B4(c); // 8022BFC0
  c->r[0]=R32(c->r[31]+0x00000000u); // 8022BFC4
  c->r[5]=c->r[3]|c->r[3]; // 8022BFC8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8022BFCC
  c->r[4]=c->r[30]|c->r[30]; // 8022BFD0
  c->r[3]=c->r[1]+0x00000008u; // 8022BFD4
  c->r[0]=R32(c->r[31]+0x00000004u); // 8022BFD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8022BFDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 8022BFE0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8022BFE4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8022BFE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022BFEC
  c->r[0]=R32(c->r[31]+0x00000010u); // 8022BFF0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8022BFF4
  c->r[0]=R32(c->r[31]+0x00000014u); // 8022BFF8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022BFFC
  c->r[0]=R32(c->r[31]+0x00000018u); // 8022C000
  W32(c->r[1]+0x00000020u,c->r[0]); // 8022C004
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8022C008
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022C00C
  c->r[0]=R32(c->r[31]+0x00000020u); // 8022C010
  W32(c->r[1]+0x00000028u,c->r[0]); // 8022C014
  c->r[6]=R32(c->r[31]+0x00000024u); // 8022C018
  c->r[0]=R32(c->r[31]+0x00000028u); // 8022C01C
  W32(c->r[1]+0x00000030u,c->r[0]); // 8022C020
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8022C024
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 8022C028
  c->r[0]=R32(c->r[31]+0x00000030u); // 8022C02C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8022C030
  W32(c->r[1]+0x00000034u,c->r[6]); // 8022C034
  c->r[0]=R32(c->r[31]+0x00000034u); // 8022C038
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8022C03C
  c->r[6]=R32(c->r[31]+0x00000038u); // 8022C040
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8022C044
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022C048
  W32(c->r[1]+0x00000040u,c->r[6]); // 8022C04C
  c->r[0]=R16(c->r[31]+0x00000040u); // 8022C050
  W16(c->r[1]+0x00000048u,c->r[0]); // 8022C054
  c->r[0]=R8(c->r[31]+0x00000042u); // 8022C058
  W8(c->r[1]+0x0000004Au,c->r[0]); // 8022C05C
  c->r[0]=R8(c->r[31]+0x00000043u); // 8022C060
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 8022C064
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C068
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8022C06C
  c->r[0]=R32(c->r[31]+0x00000048u); // 8022C070
  W32(c->r[1]+0x00000050u,c->r[0]); // 8022C074
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C078
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8022C07C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C080
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8022C084
  c->r[0]=R32(c->r[31]+0x00000054u); // 8022C088
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8022C08C
  c->r[0]=R32(c->r[31]+0x00000058u); // 8022C090
  W32(c->r[1]+0x00000060u,c->r[0]); // 8022C094
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8022C098
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022C09C
  c->lr=0x8022C0A4u; f_8022C810(c); // 8022C0A0
  c->f[30]=c->f[1]; // 8022C0A4
  c->r[3]=c->r[1]+0x00000008u; // 8022C0A8
  c->lr=0x8022C0B0u; f_80226250(c); // 8022C0AC
  c->f[31]=c->f[1]; // 8022C0B0
  c->r[3]=c->r[1]+0x00000008u; // 8022C0B4
  c->lr=0x8022C0BCu; f_80226240(c); // 8022C0B8
  c->f[2]=c->f[31]; // 8022C0BC
  c->r[3]=c->r[31]|c->r[31]; // 8022C0C0
  c->lr=0x8022C0C8u; f_802261F0(c); // 8022C0C4
  c->r[3]=c->r[1]+0x00000008u; // 8022C0C8
  c->r[4]=0u+0x00000000u; // 8022C0CC
  c->lr=0x8022C0D4u; f_80225180(c); // 8022C0D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8022C0D4
  c->f[1]=c->f[30]; // 8022C0D8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8022C0DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8022C0E0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8022C0E4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8022C0E8
  c->r[30]=R32(c->r[1]+0x00000068u); // 8022C0EC
  c->r[0]=R32(c->r[1]+0x00000094u); // 8022C0F0
  c->lr=c->r[0]; // 8022C0F4
  c->r[1]=c->r[1]+0x00000090u; // 8022C0F8
  return; // 8022C0FC
}

// fn_8022C100
void f_8022C100(Ctx* __restrict c) {
  trace_call(0x8022C100u);
  c->r[6]=0u+0x80490000u; // 8022C100
  c->r[0]=c->r[3]|c->r[3]; // 8022C104
  c->r[3]=R32(c->r[6]+0x00001A80u); // 8022C108
  c->r[5]=0u+0x803B0000u; // 8022C10C
  W32(c->r[5]+0xFFFF8F44u,c->r[4]); // 8022C110
  W32(c->r[6]+0x00001A80u,c->r[0]); // 8022C114
  return; // 8022C118
}

// fn_8022C120
void f_8022C120(Ctx* __restrict c) {
  trace_call(0x8022C120u);
  c->r[5]=0u+0x80490000u; // 8022C120
  c->r[6]=c->r[3]|c->r[3]; // 8022C124
  c->r[3]=R32(c->r[5]+0x00001A80u); // 8022C128
  c->r[4]=0u+0x803B0000u; // 8022C12C
  c->r[0]=0u+0x00000000u; // 8022C130
  W32(c->r[4]+0xFFFF8F44u,c->r[6]); // 8022C134
  W32(c->r[5]+0x00001A80u,c->r[0]); // 8022C138
  return; // 8022C13C
}

// fn_8022C140
void f_8022C140(Ctx* __restrict c) {
  trace_call(0x8022C140u);
  c->r[3]=0u+0x803B0000u; // 8022C140
  c->r[3]=R32(c->r[3]+0xFFFF8F44u); // 8022C144
  return; // 8022C148
}

// fn_8022C150
void f_8022C150(Ctx* __restrict c) {
  trace_call(0x8022C150u);
  c->r[3]=0u+0x80490000u; // 8022C150
  c->r[3]=R32(c->r[3]+0x00001A80u); // 8022C154
  return; // 8022C158
}

// fn_8022C160
void f_8022C160(Ctx* __restrict c) {
  trace_call(0x8022C160u);
  f_800CE428(c); return; // 8022C160
}

// fn_8022C170
void f_8022C170(Ctx* __restrict c) {
  trace_call(0x8022C170u);
  f_800CE4B4(c); return; // 8022C170
}

// fn_8022C180
void f_8022C180(Ctx* __restrict c) {
  trace_call(0x8022C180u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C180
  c->r[0]=c->lr; // 8022C184
  c->r[6]=0u+0x80380000u; // 8022C188
  W32(c->r[1]+0x00000094u,c->r[0]); // 8022C18C
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C190
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8022C194
  c->f[2]=c->f[1]; // 8022C198
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8022C19C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8022C1A0
  c->r[31]=c->r[5]|c->r[5]; // 8022C1A4
  W32(c->r[1]+0x00000078u,c->r[30]); // 8022C1A8
  c->r[30]=c->r[4]|c->r[4]; // 8022C1AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022C1B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C1B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8022C1B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8022C1BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022C1C0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8022C1C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022C1C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8022C1CC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8022C1D0
  W32(c->r[1]+0x00000020u,c->r[0]); // 8022C1D4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8022C1D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022C1DC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8022C1E0
  W32(c->r[1]+0x00000028u,c->r[0]); // 8022C1E4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8022C1E8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8022C1EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022C1F0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8022C1F4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8022C1F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022C1FC
  c->r[0]=R32(c->r[3]+0x00000020u); // 8022C200
  W32(c->r[1]+0x00000038u,c->r[0]); // 8022C204
  c->r[4]=R32(c->r[3]+0x00000024u); // 8022C208
  c->r[0]=R32(c->r[3]+0x00000028u); // 8022C20C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8022C210
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8022C214
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 8022C218
  c->r[0]=R32(c->r[3]+0x00000030u); // 8022C21C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8022C220
  W32(c->r[1]+0x00000044u,c->r[4]); // 8022C224
  c->r[0]=R32(c->r[3]+0x00000034u); // 8022C228
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8022C22C
  c->r[4]=R32(c->r[3]+0x00000038u); // 8022C230
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8022C234
  W32(c->r[1]+0x00000054u,c->r[0]); // 8022C238
  W32(c->r[1]+0x00000050u,c->r[4]); // 8022C23C
  c->r[0]=R16(c->r[3]+0x00000040u); // 8022C240
  W16(c->r[1]+0x00000058u,c->r[0]); // 8022C244
  c->r[0]=R8(c->r[3]+0x00000042u); // 8022C248
  W8(c->r[1]+0x0000005Au,c->r[0]); // 8022C24C
  c->r[0]=R8(c->r[3]+0x00000043u); // 8022C250
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 8022C254
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C258
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8022C25C
  c->r[0]=R32(c->r[3]+0x00000048u); // 8022C260
  W32(c->r[1]+0x00000060u,c->r[0]); // 8022C264
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C268
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8022C26C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C270
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8022C274
  c->r[0]=R32(c->r[3]+0x00000054u); // 8022C278
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8022C27C
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022C280
  W32(c->r[1]+0x00000070u,c->r[0]); // 8022C284
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022C288
  c->r[3]=c->r[1]+0x00000018u; // 8022C28C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8022C290
  c->lr=0x8022C298u; f_802261F0(c); // 8022C294
  c->r[5]=c->r[30]|c->r[30]; // 8022C298
  c->r[6]=c->r[31]|c->r[31]; // 8022C29C
  c->r[3]=c->r[1]+0x00000018u; // 8022C2A0
  c->r[4]=c->r[1]+0x00000008u; // 8022C2A4
  c->lr=0x8022C2ACu; f_8022C2F0(c); // 8022C2A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C2AC
  c->r[3]=c->r[1]+0x00000018u; // 8022C2B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C2B4
  c->r[4]=0u+0x00000000u; // 8022C2B8
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 8022C2BC
  c->lr=0x8022C2C4u; f_80225180(c); // 8022C2C0
  c->f[1]=c->f[31]; // 8022C2C4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8022C2C8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8022C2CC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8022C2D0
  c->r[30]=R32(c->r[1]+0x00000078u); // 8022C2D4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8022C2D8
  c->lr=c->r[0]; // 8022C2DC
  c->r[1]=c->r[1]+0x00000090u; // 8022C2E0
  return; // 8022C2E4
}

// CalcLineRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_8022C2F0(Ctx* __restrict c) {
  trace_call(0x8022C2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C2F0
  c->r[0]=c->lr; // 8022C2F4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022C2F8
  c->r[11]=c->r[1]+0x00000080u; // 8022C2FC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 8022C300
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 8022C304
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 8022C308
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 8022C30C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 8022C310
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 8022C314
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 8022C318
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 8022C31C
  c->lr=0x8022C324u; f_800C2E44(c); // 8022C320
  c->r[25]=0u+0x00000000u; // 8022C324
  W32(c->r[1]+0x00000040u,c->r[25]); // 8022C328
  c->r[27]=c->r[3]|c->r[3]; // 8022C32C
  c->r[28]=c->r[4]|c->r[4]; // 8022C330
  W32(c->r[1]+0x00000044u,c->r[25]); // 8022C334
  c->r[29]=c->r[5]|c->r[5]; // 8022C338
  c->r[30]=c->r[6]|c->r[6]; // 8022C33C
  W32(c->r[1]+0x00000048u,c->r[25]); // 8022C340
  W32(c->r[1]+0x00000038u,c->r[3]); // 8022C344
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8022C348
  c->lr=0x8022C350u; f_802251D0(c); // 8022C34C
  c->r[5]=R32(c->r[3]+0x00000004u); // 8022C350
  c->r[6]=0u+0x80380000u; // 8022C354
  c->r[4]=R32(c->r[3]+0x00000008u); // 8022C358
  c->r[31]=0u+0x00000000u; // 8022C35C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8022C360
  c->r[3]=c->r[27]|c->r[27]; // 8022C364
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022C368
  {uint32_t ea=c->r[6]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022C36C
  W32(c->r[1]+0x00000028u,c->r[31]); // 8022C370
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8022C374
  W32(c->r[1]+0x00000030u,c->r[4]); // 8022C378
  W32(c->r[1]+0x00000008u,c->r[5]); // 8022C37C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8022C380
  W32(c->r[1]+0x00000010u,c->r[0]); // 8022C384
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 8022C388
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[31]);} // 8022C38C
  c->lr=0x8022C394u; f_802251D0(c); // 8022C390
  cmps(c,0,(int32_t)c->r[3],0); // 8022C394
  if (crb(c,2)) { goto L_8022C3B0; } // 8022C398
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022C39C
  c->r[12]=R32(c->r[12]+0x00000034u); // 8022C3A0
  c->ctr=c->r[12]; // 8022C3A4
  if (true) { c->lr=0x8022C3ACu; dispatch(c,c->ctr); } // 8022C3A8
  c->r[25]=c->r[3]|c->r[3]; // 8022C3AC
L_8022C3B0:;
  c->r[3]=c->r[27]|c->r[27]; // 8022C3B0
  c->lr=0x8022C3B8u; f_80225E60(c); // 8022C3B4
  c->r[3]=c->r[25]^0x80000000u; // 8022C3B8
  c->r[0]=0u+0x43300000u; // 8022C3BC
  W32(c->r[1]+0x00000054u,c->r[3]); // 8022C3C0
  c->r[4]=0u+0x80380000u; // 8022C3C4
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[4]=RF64(ea);} // 8022C3C8
  c->r[3]=0u+0x80380000u; // 8022C3CC
  W32(c->r[1]+0x00000050u,c->r[0]); // 8022C3D0
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C3D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=RF64(ea);} // 8022C3D8
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C3DC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8022C3E0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8022C3E4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8022C3E8
  fcmp(c,0,c->f[0],c->f[1]); // 8022C3EC
  if (!crb(c,1)) { goto L_8022C3F8; } // 8022C3F0
  goto L_8022C3FC; // 8022C3F4
L_8022C3F8:;
  c->f[1]=c->f[0]; // 8022C3F8
L_8022C3FC:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8022C3FC
  c->r[3]=c->r[27]|c->r[27]; // 8022C400
  c->lr=0x8022C408u; f_802251D0(c); // 8022C404
  cmps(c,0,(int32_t)c->r[3],0); // 8022C408
  if (crb(c,2)) { goto L_8022C428; } // 8022C40C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022C410
  c->r[12]=R32(c->r[12]+0x00000034u); // 8022C414
  c->ctr=c->r[12]; // 8022C418
  if (true) { c->lr=0x8022C420u; dispatch(c,c->ctr); } // 8022C41C
  c->r[25]=c->r[3]|c->r[3]; // 8022C420
  goto L_8022C42C; // 8022C424
L_8022C428:;
  c->r[25]=0u+0x00000000u; // 8022C428
L_8022C42C:;
  c->r[3]=c->r[27]|c->r[27]; // 8022C42C
  c->lr=0x8022C434u; f_80225E60(c); // 8022C430
  c->r[3]=c->r[25]^0x80000000u; // 8022C434
  c->r[0]=0u+0x43300000u; // 8022C438
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 8022C43C
  c->r[4]=0u+0x80380000u; // 8022C440
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[4]=RF64(ea);} // 8022C444
  c->r[3]=0u+0x80380000u; // 8022C448
  W32(c->r[1]+0x00000058u,c->r[0]); // 8022C44C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C450
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=RF64(ea);} // 8022C454
  {uint32_t ea=c->r[3]+0xFFFFF918u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C458
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8022C45C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8022C460
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8022C464
  fcmp(c,0,c->f[0],c->f[1]); // 8022C468
  if (!crb(c,0)) { goto L_8022C474; } // 8022C46C
  goto L_8022C478; // 8022C470
L_8022C474:;
  c->f[1]=c->f[0]; // 8022C474
L_8022C478:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C478
  c->r[3]=c->r[1]+0x00000028u; // 8022C47C
  c->r[12]=c->r[1]+0x0000002Cu; // 8022C480
  W32(c->r[1]+0x00000028u,c->r[29]); // 8022C484
  c->lr=0x8022C48Cu; f_800C2CFC(c); // 8022C488
  c->r[0]=c->r[0]|0x00000000u; // 8022C48C
  c->r[5]=0u+0x80380000u; // 8022C490
  c->r[4]=0u+0x80380000u; // 8022C494
  {uint32_t ea=c->r[5]+0xFFFFF918u; c->f[28]=c->ps1[28]=RF32(ea);} // 8022C498
  c->r[25]=c->r[3]|c->r[3]; // 8022C49C
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[30]=RF64(ea);} // 8022C4A0
  c->r[26]=0u+0x43300000u; // 8022C4A4
  goto L_8022C67C; // 8022C4A8
L_8022C4AC:;
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 8022C4AC
  cmps(c,0,(int32_t)c->r[0],32); // 8022C4B0
  if (!crb(c,0)) { goto L_8022C5C8; } // 8022C4B4
  c->r[0]=cntlz(c->r[31]); // 8022C4B8
  c->f[1]=c->f[31]; // 8022C4BC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8022C4C0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8022C4C4
  c->r[3]=c->r[27]|c->r[27]; // 8022C4C8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[28]);} // 8022C4CC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[28]);} // 8022C4D0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[28]);} // 8022C4D4
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8022C4D8
  W32(c->r[1]+0x00000048u,c->r[0]); // 8022C4DC
  c->lr=0x8022C4E4u; f_80226200(c); // 8022C4E0
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 8022C4E4
  c->r[4]=c->r[1]+0x00000018u; // 8022C4E8
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 8022C4EC
  c->r[6]=c->r[1]+0x00000038u; // 8022C4F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022C4F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8022C4F8
  c->ctr=c->r[12]; // 8022C4FC
  if (true) { c->lr=0x8022C504u; dispatch(c,c->ctr); } // 8022C500
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8022C504
  c->r[25]=c->r[3]|c->r[3]; // 8022C508
  W32(c->r[1]+0x00000028u,c->r[0]); // 8022C50C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C510
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C514
  fcmp(c,0,c->f[0],c->f[1]); // 8022C518
  if (!crb(c,1)) { goto L_8022C524; } // 8022C51C
  goto L_8022C528; // 8022C520
L_8022C524:;
  c->f[1]=c->f[0]; // 8022C524
L_8022C528:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8022C528
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C52C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C530
  fcmp(c,0,c->f[0],c->f[1]); // 8022C534
  if (!crb(c,1)) { goto L_8022C540; } // 8022C538
  goto L_8022C544; // 8022C53C
L_8022C540:;
  c->f[1]=c->f[0]; // 8022C540
L_8022C544:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8022C544
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C548
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C54C
  fcmp(c,0,c->f[0],c->f[1]); // 8022C550
  if (!crb(c,0)) { goto L_8022C55C; } // 8022C554
  goto L_8022C560; // 8022C558
L_8022C55C:;
  c->f[1]=c->f[0]; // 8022C55C
L_8022C560:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8022C560
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C564
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C568
  fcmp(c,0,c->f[0],c->f[1]); // 8022C56C
  if (!crb(c,0)) { goto L_8022C578; } // 8022C570
  goto L_8022C57C; // 8022C574
L_8022C578:;
  c->f[1]=c->f[0]; // 8022C578
L_8022C57C:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C57C
  c->r[3]=c->r[27]|c->r[27]; // 8022C580
  c->lr=0x8022C588u; f_80226240(c); // 8022C584
  cmps(c,0,(int32_t)c->r[25],4); // 8022C588
  c->f[31]=c->f[1]; // 8022C58C
  if (!crb(c,2)) { goto L_8022C59C; } // 8022C590
  c->r[3]=c->r[30]|c->r[30]; // 8022C594
  goto L_8022C6AC; // 8022C598
L_8022C59C:;
  cmps(c,0,(int32_t)c->r[25],1); // 8022C59C
  if (!crb(c,2)) { goto L_8022C5AC; } // 8022C5A0
  c->r[31]=0u+0x00000000u; // 8022C5A4
  goto L_8022C668; // 8022C5A8
L_8022C5AC:;
  cmps(c,0,(int32_t)c->r[25],2); // 8022C5AC
  if (!crb(c,2)) { goto L_8022C5BC; } // 8022C5B0
  c->r[31]=0u+0x00000001u; // 8022C5B4
  goto L_8022C668; // 8022C5B8
L_8022C5BC:;
  cmps(c,0,(int32_t)c->r[25],3); // 8022C5BC
  if (crb(c,2)) { goto L_8022C698; } // 8022C5C0
  goto L_8022C668; // 8022C5C4
L_8022C5C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8022C5C8
  if (crb(c,2)) { goto L_8022C5D8; } // 8022C5CC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C5D0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8022C5D4
L_8022C5D8:;
  c->r[3]=c->r[27]|c->r[27]; // 8022C5D8
  c->r[31]=0u+0x00000001u; // 8022C5DC
  c->lr=0x8022C5E4u; f_80226090(c); // 8022C5E0
  cmps(c,0,(int32_t)c->r[3],0); // 8022C5E4
  if (crb(c,2)) { goto L_8022C5FC; } // 8022C5E8
  c->r[3]=c->r[27]|c->r[27]; // 8022C5EC
  c->lr=0x8022C5F4u; f_802260A0(c); // 8022C5F0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8022C5F4
  goto L_8022C640; // 8022C5F8
L_8022C5FC:;
  c->r[3]=c->r[27]|c->r[27]; // 8022C5FC
  c->lr=0x8022C604u; f_80225E50(c); // 8022C600
  c->f[29]=c->f[1]; // 8022C604
  c->r[3]=c->r[27]|c->r[27]; // 8022C608
  c->lr=0x8022C610u; f_802251D0(c); // 8022C60C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022C610
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 8022C614
  c->r[12]=R32(c->r[12]+0x00000048u); // 8022C618
  c->ctr=c->r[12]; // 8022C61C
  if (true) { c->lr=0x8022C624u; dispatch(c,c->ctr); } // 8022C620
  c->r[0]=c->r[3]^0x80000000u; // 8022C624
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8022C628
  W32(c->r[1]+0x00000058u,c->r[26]); // 8022C62C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 8022C630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8022C634
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 8022C638
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8022C63C
L_8022C640:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C640
  fcmp(c,0,c->f[0],c->f[31]); // 8022C644
  if (!crb(c,1)) { goto L_8022C650; } // 8022C648
  c->f[0]=c->f[31]; // 8022C64C
L_8022C650:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C650
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8022C654
  fcmp(c,0,c->f[1],c->f[31]); // 8022C658
  if (!crb(c,0)) { goto L_8022C664; } // 8022C65C
  c->f[1]=c->f[31]; // 8022C660
L_8022C664:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8022C664
L_8022C668:;
  c->r[3]=c->r[1]+0x00000028u; // 8022C668
  c->r[12]=c->r[1]+0x0000002Cu; // 8022C66C
  c->lr=0x8022C674u; f_800C2CFC(c); // 8022C670
  c->r[0]=c->r[0]|0x00000000u; // 8022C674
  c->r[25]=c->r[3]|c->r[3]; // 8022C678
L_8022C67C:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 8022C67C
  c->r[3]=c->r[4]-c->r[29]; // 8022C680
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8022C684
  c->r[0]=c->r[0]+c->r[3]; // 8022C688
  c->r[0]=sraw(c,c->r[0],1); // 8022C68C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8022C690
  if (!crb(c,1)) { IRQCHK(c); goto L_8022C4AC; } // 8022C694
L_8022C698:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 8022C698
  c->r[3]=c->r[0]-c->r[29]; // 8022C69C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8022C6A0
  c->r[0]=c->r[0]+c->r[3]; // 8022C6A4
  c->r[3]=sraw(c,c->r[0],1); // 8022C6A8
L_8022C6AC:;
  c->r[11]=c->r[1]+0x00000080u; // 8022C6AC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 8022C6B0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 8022C6B4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 8022C6B8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 8022C6BC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 8022C6C0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 8022C6C4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 8022C6C8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 8022C6CC
  c->lr=0x8022C6D4u; f_800C2E90(c); // 8022C6D0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8022C6D4
  c->lr=c->r[0]; // 8022C6D8
  c->r[1]=c->r[1]+0x000000C0u; // 8022C6DC
  return; // 8022C6E0
}

// CalcStringRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_8022C6F0(Ctx* __restrict c) {
  trace_call(0x8022C6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C6F0
  c->r[0]=c->lr; // 8022C6F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022C6F8
  c->r[11]=c->r[1]+0x00000030u; // 8022C6FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8022C700
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8022C704
  c->lr=0x8022C70Cu; f_800C2E4C(c); // 8022C708
  c->r[31]=0u+0x80380000u; // 8022C70C
  c->r[27]=c->r[3]|c->r[3]; // 8022C710
  {uint32_t ea=c->r[31]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C714
  c->r[28]=c->r[4]|c->r[4]; // 8022C718
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 8022C71C
  c->r[29]=c->r[5]|c->r[5]; // 8022C720
  c->f[2]=c->f[1]; // 8022C724
  c->r[30]=c->r[6]|c->r[6]; // 8022C728
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 8022C72C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8022C730
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C734
  c->lr=0x8022C73Cu; f_802261F0(c); // 8022C738
  {uint32_t ea=c->r[31]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022C73C
L_8022C740:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8022C740
  c->r[3]=c->r[27]|c->r[27]; // 8022C744
  c->r[5]=c->r[29]|c->r[29]; // 8022C748
  c->r[6]=c->r[30]|c->r[30]; // 8022C74C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 8022C750
  c->r[4]=c->r[1]+0x00000008u; // 8022C754
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8022C758
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8022C75C
  c->lr=0x8022C764u; f_8022C2F0(c); // 8022C760
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C764
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8022C768
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C76C
  c->r[29]=c->r[29]+c->r[0]; // 8022C770
  c->r[30]=c->r[30]-c->r[3]; // 8022C774
  fcmp(c,0,c->f[0],c->f[1]); // 8022C778
  if (!crb(c,1)) { goto L_8022C784; } // 8022C77C
  goto L_8022C788; // 8022C780
L_8022C784:;
  c->f[1]=c->f[0]; // 8022C784
L_8022C788:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 8022C788
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C78C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C790
  fcmp(c,0,c->f[0],c->f[1]); // 8022C794
  if (!crb(c,1)) { goto L_8022C7A0; } // 8022C798
  goto L_8022C7A4; // 8022C79C
L_8022C7A0:;
  c->f[1]=c->f[0]; // 8022C7A0
L_8022C7A4:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8022C7A4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C7A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C7AC
  fcmp(c,0,c->f[0],c->f[1]); // 8022C7B0
  if (!crb(c,0)) { goto L_8022C7BC; } // 8022C7B4
  goto L_8022C7C0; // 8022C7B8
L_8022C7BC:;
  c->f[1]=c->f[0]; // 8022C7BC
L_8022C7C0:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8022C7C0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C7C4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C7C8
  fcmp(c,0,c->f[0],c->f[1]); // 8022C7CC
  if (!crb(c,0)) { goto L_8022C7D8; } // 8022C7D0
  goto L_8022C7DC; // 8022C7D4
L_8022C7D8:;
  c->f[1]=c->f[0]; // 8022C7D8
L_8022C7DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8022C7DC
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C7E0
  if (crb(c,1)) { IRQCHK(c); goto L_8022C740; } // 8022C7E4
  c->r[11]=c->r[1]+0x00000030u; // 8022C7E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8022C7EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8022C7F0
  c->lr=0x8022C7F8u; f_800C2E98(c); // 8022C7F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8022C7F8
  c->lr=c->r[0]; // 8022C7FC
  c->r[1]=c->r[1]+0x00000040u; // 8022C800
  return; // 8022C804
}

// PrintImpl__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_8022C810(Ctx* __restrict c) {
  trace_call(0x8022C810u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C810
  c->r[0]=c->lr; // 8022C814
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8022C818
  c->r[11]=c->r[1]+0x00000150u; // 8022C81C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8022C820
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8022C824
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8022C828
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8022C82C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8022C830
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8022C834
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8022C838
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8022C83C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[27]);} // 8022C840
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,27,ea,0,0);} // 8022C844
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[26]);} // 8022C848
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,26,ea,0,0);} // 8022C84C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[25]);} // 8022C850
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,25,ea,0,0);} // 8022C854
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[24]);} // 8022C858
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,24,ea,0,0);} // 8022C85C
  c->lr=0x8022C864u; f_800C2E44(c); // 8022C860
  c->r[28]=c->r[3]|c->r[3]; // 8022C864
  c->r[29]=c->r[4]|c->r[4]; // 8022C868
  c->r[30]=c->r[5]|c->r[5]; // 8022C86C
  c->lr=0x8022C874u; f_80226240(c); // 8022C870
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022C874
  c->r[3]=c->r[28]|c->r[28]; // 8022C878
  c->lr=0x8022C880u; f_80226250(c); // 8022C87C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8022C880
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022C884
  c->r[3]=c->r[28]|c->r[28]; // 8022C888
  c->r[6]=c->r[29]|c->r[29]; // 8022C88C
  c->r[7]=c->r[30]|c->r[30]; // 8022C890
  c->r[4]=c->r[1]+0x0000000Cu; // 8022C894
  c->r[5]=c->r[1]+0x00000008u; // 8022C898
  c->r[31]=0u+0x00000000u; // 8022C89C
  c->lr=0x8022C8A4u; f_8022CDE0(c); // 8022C8A0
  c->f[29]=c->f[1]; // 8022C8A4
  c->r[3]=c->r[28]|c->r[28]; // 8022C8A8
  c->lr=0x8022C8B0u; f_80226240(c); // 8022C8AC
  c->r[3]=c->r[28]|c->r[28]; // 8022C8B0
  c->lr=0x8022C8B8u; f_80226250(c); // 8022C8B4
  c->r[0]=0u+0x00000000u; // 8022C8B8
  W32(c->r[1]+0x00000058u,c->r[0]); // 8022C8BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C8C0
  c->f[30]=c->ps1[30]=S(c->f[28]-c->f[1]); // 8022C8C4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8022C8C8
  c->r[3]=c->r[28]|c->r[28]; // 8022C8CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C8D0
  W32(c->r[1]+0x00000060u,c->r[0]); // 8022C8D4
  W32(c->r[1]+0x00000050u,c->r[28]); // 8022C8D8
  W32(c->r[1]+0x00000054u,c->r[29]); // 8022C8DC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 8022C8E0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8022C8E4
  c->lr=0x8022C8ECu; f_802251D0(c); // 8022C8E8
  c->r[5]=R32(c->r[3]+0x00000004u); // 8022C8EC
  c->r[12]=c->r[1]+0x00000044u; // 8022C8F0
  c->r[4]=R32(c->r[3]+0x00000008u); // 8022C8F4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8022C8F8
  c->r[3]=c->r[1]+0x00000040u; // 8022C8FC
  W32(c->r[1]+0x00000030u,c->r[5]); // 8022C900
  W32(c->r[1]+0x00000034u,c->r[4]); // 8022C904
  W32(c->r[1]+0x00000038u,c->r[0]); // 8022C908
  W32(c->r[1]+0x00000044u,c->r[5]); // 8022C90C
  W32(c->r[1]+0x00000048u,c->r[4]); // 8022C910
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8022C914
  W32(c->r[1]+0x00000040u,c->r[29]); // 8022C918
  c->lr=0x8022C920u; f_800C2CFC(c); // 8022C91C
  c->r[0]=c->r[0]|0x00000000u; // 8022C920
  c->r[4]=0u+0x80380000u; // 8022C924
  c->r[5]=0u+0x80380000u; // 8022C928
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022C92C
  c->r[4]=0u+0x80380000u; // 8022C930
  {uint32_t ea=c->r[5]+0xFFFFF928u; c->f[25]=c->ps1[25]=RF32(ea);} // 8022C934
  c->r[26]=c->r[3]|c->r[3]; // 8022C938
  {uint32_t ea=c->r[4]+0xFFFFF920u; c->f[27]=RF64(ea);} // 8022C93C
  c->r[27]=0u+0x43300000u; // 8022C940
  goto L_8022CD34; // 8022C944
L_8022C948:;
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 8022C948
  cmps(c,0,(int32_t)c->r[4],32); // 8022C94C
  if (!crb(c,0)) { goto L_8022CC94; } // 8022C950
  c->r[0]=cntlz(c->r[31]); // 8022C954
  W32(c->r[1]+0x00000054u,c->r[5]); // 8022C958
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8022C95C
  c->r[5]=c->r[1]+0x00000050u; // 8022C960
  W32(c->r[1]+0x00000060u,c->r[0]); // 8022C964
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 8022C968
  c->r[12]=R32(c->r[3]+0x00000000u); // 8022C96C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8022C970
  c->ctr=c->r[12]; // 8022C974
  if (true) { c->lr=0x8022C97Cu; dispatch(c,c->ctr); } // 8022C978
  cmps(c,0,(int32_t)c->r[3],3); // 8022C97C
  if (!crb(c,2)) { goto L_8022CC60; } // 8022C980
  c->r[0]=R32(c->r[28]+0x00000058u); // 8022C984
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8022C988
  cmpu(c,0,c->r[3],0x00000001u); // 8022C98C
  if (!crb(c,2)) { goto L_8022CADC; } // 8022C990
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[31]);} // 8022C994
  c->f[1]=c->f[31]; // 8022C998
  c->f[2]=c->f[31]; // 8022C99C
  c->r[31]=R32(c->r[1]+0x00000054u); // 8022C9A0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 8022C9A4
  c->r[3]=c->r[1]+0x000000C8u; // 8022C9A8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8022C9AC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 8022C9B0
  c->r[4]=R32(c->r[28]+0x00000000u); // 8022C9B4
  W32(c->r[1]+0x000000C8u,c->r[4]); // 8022C9B8
  c->r[4]=R32(c->r[28]+0x00000004u); // 8022C9BC
  W32(c->r[1]+0x000000CCu,c->r[4]); // 8022C9C0
  c->r[4]=R32(c->r[28]+0x00000008u); // 8022C9C4
  W32(c->r[1]+0x000000D0u,c->r[4]); // 8022C9C8
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8022C9CC
  W32(c->r[1]+0x000000D4u,c->r[4]); // 8022C9D0
  c->r[4]=R32(c->r[28]+0x00000010u); // 8022C9D4
  W32(c->r[1]+0x000000D8u,c->r[4]); // 8022C9D8
  c->r[4]=R32(c->r[28]+0x00000014u); // 8022C9DC
  W32(c->r[1]+0x000000DCu,c->r[4]); // 8022C9E0
  c->r[4]=R32(c->r[28]+0x00000018u); // 8022C9E4
  W32(c->r[1]+0x000000E0u,c->r[4]); // 8022C9E8
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8022C9EC
  W32(c->r[1]+0x000000E4u,c->r[4]); // 8022C9F0
  c->r[4]=R32(c->r[28]+0x00000020u); // 8022C9F4
  W32(c->r[1]+0x000000E8u,c->r[4]); // 8022C9F8
  c->r[5]=R32(c->r[28]+0x00000024u); // 8022C9FC
  c->r[4]=R32(c->r[28]+0x00000028u); // 8022CA00
  W32(c->r[1]+0x000000F0u,c->r[4]); // 8022CA04
  W32(c->r[1]+0x000000ECu,c->r[5]); // 8022CA08
  c->r[5]=R32(c->r[28]+0x0000002Cu); // 8022CA0C
  c->r[4]=R32(c->r[28]+0x00000030u); // 8022CA10
  W32(c->r[1]+0x000000F8u,c->r[4]); // 8022CA14
  W32(c->r[1]+0x000000F4u,c->r[5]); // 8022CA18
  c->r[4]=R32(c->r[28]+0x00000034u); // 8022CA1C
  W32(c->r[1]+0x000000FCu,c->r[4]); // 8022CA20
  c->r[5]=R32(c->r[28]+0x00000038u); // 8022CA24
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 8022CA28
  W32(c->r[1]+0x00000104u,c->r[4]); // 8022CA2C
  W32(c->r[1]+0x00000100u,c->r[5]); // 8022CA30
  c->r[4]=R16(c->r[28]+0x00000040u); // 8022CA34
  W16(c->r[1]+0x00000108u,c->r[4]); // 8022CA38
  c->r[4]=R8(c->r[28]+0x00000042u); // 8022CA3C
  W8(c->r[1]+0x0000010Au,c->r[4]); // 8022CA40
  c->r[4]=R8(c->r[28]+0x00000043u); // 8022CA44
  W8(c->r[1]+0x0000010Bu,c->r[4]); // 8022CA48
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CA4C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8022CA50
  c->r[4]=R32(c->r[28]+0x00000048u); // 8022CA54
  W32(c->r[1]+0x00000110u,c->r[4]); // 8022CA58
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CA5C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8022CA60
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CA64
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8022CA68
  c->r[4]=R32(c->r[28]+0x00000054u); // 8022CA6C
  W32(c->r[1]+0x0000011Cu,c->r[4]); // 8022CA70
  W32(c->r[1]+0x00000120u,c->r[0]); // 8022CA74
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8022CA78
  W32(c->r[1]+0x00000124u,c->r[0]); // 8022CA7C
  c->lr=0x8022CA84u; f_802261F0(c); // 8022CA80
  c->r[4]=c->r[31]-c->r[29]; // 8022CA84
  c->r[5]=c->r[31]|c->r[31]; // 8022CA88
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8022CA8C
  c->r[3]=c->r[1]+0x000000C8u; // 8022CA90
  c->r[0]=c->r[0]+c->r[4]; // 8022CA94
  c->r[4]=c->r[1]+0x00000020u; // 8022CA98
  c->r[0]=sraw(c,c->r[0],1); // 8022CA9C
  c->r[6]=c->r[30]-c->r[0]; // 8022CAA0
  c->lr=0x8022CAA8u; f_8022C2F0(c); // 8022CAA4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CAA8
  c->r[3]=c->r[1]+0x000000C8u; // 8022CAAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CAB0
  c->r[4]=0u+0x00000000u; // 8022CAB4
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8022CAB8
  c->lr=0x8022CAC0u; f_80225180(c); // 8022CABC
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8022CAC0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CAC4
  c->r[3]=c->r[28]|c->r[28]; // 8022CAC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[25]); // 8022CACC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022CAD0
  c->lr=0x8022CAD8u; f_80226200(c); // 8022CAD4
  goto L_8022CC58; // 8022CAD8
L_8022CADC:;
  cmpu(c,0,c->r[3],0x00000002u); // 8022CADC
  if (!crb(c,2)) { goto L_8022CC28; } // 8022CAE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8022CAE4
  c->f[1]=c->f[31]; // 8022CAE8
  c->f[2]=c->f[31]; // 8022CAEC
  c->r[31]=R32(c->r[1]+0x00000054u); // 8022CAF0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 8022CAF4
  c->r[3]=c->r[1]+0x00000068u; // 8022CAF8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 8022CAFC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 8022CB00
  c->r[4]=R32(c->r[28]+0x00000000u); // 8022CB04
  W32(c->r[1]+0x00000068u,c->r[4]); // 8022CB08
  c->r[4]=R32(c->r[28]+0x00000004u); // 8022CB0C
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8022CB10
  c->r[4]=R32(c->r[28]+0x00000008u); // 8022CB14
  W32(c->r[1]+0x00000070u,c->r[4]); // 8022CB18
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8022CB1C
  W32(c->r[1]+0x00000074u,c->r[4]); // 8022CB20
  c->r[4]=R32(c->r[28]+0x00000010u); // 8022CB24
  W32(c->r[1]+0x00000078u,c->r[4]); // 8022CB28
  c->r[4]=R32(c->r[28]+0x00000014u); // 8022CB2C
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 8022CB30
  c->r[4]=R32(c->r[28]+0x00000018u); // 8022CB34
  W32(c->r[1]+0x00000080u,c->r[4]); // 8022CB38
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8022CB3C
  W32(c->r[1]+0x00000084u,c->r[4]); // 8022CB40
  c->r[4]=R32(c->r[28]+0x00000020u); // 8022CB44
  W32(c->r[1]+0x00000088u,c->r[4]); // 8022CB48
  c->r[5]=R32(c->r[28]+0x00000024u); // 8022CB4C
  c->r[4]=R32(c->r[28]+0x00000028u); // 8022CB50
  W32(c->r[1]+0x00000090u,c->r[4]); // 8022CB54
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 8022CB58
  c->r[5]=R32(c->r[28]+0x0000002Cu); // 8022CB5C
  c->r[4]=R32(c->r[28]+0x00000030u); // 8022CB60
  W32(c->r[1]+0x00000098u,c->r[4]); // 8022CB64
  W32(c->r[1]+0x00000094u,c->r[5]); // 8022CB68
  c->r[4]=R32(c->r[28]+0x00000034u); // 8022CB6C
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 8022CB70
  c->r[5]=R32(c->r[28]+0x00000038u); // 8022CB74
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 8022CB78
  W32(c->r[1]+0x000000A4u,c->r[4]); // 8022CB7C
  W32(c->r[1]+0x000000A0u,c->r[5]); // 8022CB80
  c->r[4]=R16(c->r[28]+0x00000040u); // 8022CB84
  W16(c->r[1]+0x000000A8u,c->r[4]); // 8022CB88
  c->r[4]=R8(c->r[28]+0x00000042u); // 8022CB8C
  W8(c->r[1]+0x000000AAu,c->r[4]); // 8022CB90
  c->r[4]=R8(c->r[28]+0x00000043u); // 8022CB94
  W8(c->r[1]+0x000000ABu,c->r[4]); // 8022CB98
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CB9C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8022CBA0
  c->r[4]=R32(c->r[28]+0x00000048u); // 8022CBA4
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8022CBA8
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CBAC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8022CBB0
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CBB4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8022CBB8
  c->r[4]=R32(c->r[28]+0x00000054u); // 8022CBBC
  W32(c->r[1]+0x000000BCu,c->r[4]); // 8022CBC0
  W32(c->r[1]+0x000000C0u,c->r[0]); // 8022CBC4
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 8022CBC8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8022CBCC
  c->lr=0x8022CBD4u; f_802261F0(c); // 8022CBD0
  c->r[4]=c->r[31]-c->r[29]; // 8022CBD4
  c->r[5]=c->r[31]|c->r[31]; // 8022CBD8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8022CBDC
  c->r[3]=c->r[1]+0x00000068u; // 8022CBE0
  c->r[0]=c->r[0]+c->r[4]; // 8022CBE4
  c->r[4]=c->r[1]+0x00000010u; // 8022CBE8
  c->r[0]=sraw(c,c->r[0],1); // 8022CBEC
  c->r[6]=c->r[30]-c->r[0]; // 8022CBF0
  c->lr=0x8022CBF8u; f_8022C2F0(c); // 8022CBF4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CBF8
  c->r[3]=c->r[1]+0x00000068u; // 8022CBFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CC00
  c->r[4]=0u+0x00000000u; // 8022CC04
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 8022CC08
  c->lr=0x8022CC10u; f_80225180(c); // 8022CC0C
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 8022CC10
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CC14
  c->r[3]=c->r[28]|c->r[28]; // 8022CC18
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022CC1C
  c->lr=0x8022CC24u; f_80226200(c); // 8022CC20
  goto L_8022CC58; // 8022CC24
L_8022CC28:;
  c->r[3]=c->r[28]|c->r[28]; // 8022CC28
  c->lr=0x8022CC30u; f_80226240(c); // 8022CC2C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CC30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8022CC34
  fcmp(c,0,c->f[29],c->f[0]); // 8022CC38
  if (!crb(c,0)) { goto L_8022CC44; } // 8022CC3C
  goto L_8022CC48; // 8022CC40
L_8022CC44:;
  c->f[0]=c->f[29]; // 8022CC44
L_8022CC48:;
  c->f[29]=c->f[0]; // 8022CC48
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CC4C
  c->r[3]=c->r[28]|c->r[28]; // 8022CC50
  c->lr=0x8022CC58u; f_80226200(c); // 8022CC54
L_8022CC58:;
  c->r[31]=0u+0x00000000u; // 8022CC58
  goto L_8022CC88; // 8022CC5C
L_8022CC60:;
  cmps(c,0,(int32_t)c->r[3],1); // 8022CC60
  if (!crb(c,2)) { goto L_8022CC70; } // 8022CC64
  c->r[31]=0u+0x00000000u; // 8022CC68
  goto L_8022CC88; // 8022CC6C
L_8022CC70:;
  cmps(c,0,(int32_t)c->r[3],2); // 8022CC70
  if (!crb(c,2)) { goto L_8022CC80; } // 8022CC74
  c->r[31]=0u+0x00000001u; // 8022CC78
  goto L_8022CC88; // 8022CC7C
L_8022CC80:;
  cmps(c,0,(int32_t)c->r[3],4); // 8022CC80
  if (crb(c,2)) { goto L_8022CD50; } // 8022CC84
L_8022CC88:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8022CC88
  W32(c->r[1]+0x00000040u,c->r[0]); // 8022CC8C
  goto L_8022CD20; // 8022CC90
L_8022CC94:;
  c->r[3]=c->r[28]|c->r[28]; // 8022CC94
  c->lr=0x8022CC9Cu; f_80226250(c); // 8022CC98
  cmps(c,0,(int32_t)c->r[31],0); // 8022CC9C
  c->f[24]=c->f[1]; // 8022CCA0
  if (crb(c,2)) { goto L_8022CCB4; } // 8022CCA4
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CCA8
  c->r[3]=c->r[28]|c->r[28]; // 8022CCAC
  c->lr=0x8022CCB4u; f_80226220(c); // 8022CCB0
L_8022CCB4:;
  c->r[3]=c->r[28]|c->r[28]; // 8022CCB4
  c->r[31]=0u+0x00000001u; // 8022CCB8
  c->lr=0x8022CCC0u; f_802251D0(c); // 8022CCBC
  c->r[25]=c->r[3]|c->r[3]; // 8022CCC0
  c->r[3]=c->r[28]|c->r[28]; // 8022CCC4
  c->lr=0x8022CCCCu; f_80225E60(c); // 8022CCC8
  c->r[12]=R32(c->r[25]+0x00000000u); // 8022CCCC
  c->f[26]=c->f[1]; // 8022CCD0
  c->r[3]=c->r[25]|c->r[25]; // 8022CCD4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8022CCD8
  c->ctr=c->r[12]; // 8022CCDC
  if (true) { c->lr=0x8022CCE4u; dispatch(c,c->ctr); } // 8022CCE0
  c->r[0]=0u-c->r[3]; // 8022CCE4
  W32(c->r[1]+0x00000128u,c->r[27]); // 8022CCE8
  c->r[0]=c->r[0]^0x80000000u; // 8022CCEC
  c->r[3]=c->r[28]|c->r[28]; // 8022CCF0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8022CCF4
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 8022CCF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8022CCFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 8022CD00
  c->lr=0x8022CD08u; f_80226230(c); // 8022CD04
  c->r[3]=c->r[28]|c->r[28]; // 8022CD08
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 8022CD0C
  c->lr=0x8022CD14u; f_802260B0(c); // 8022CD10
  c->f[1]=c->f[24]; // 8022CD14
  c->r[3]=c->r[28]|c->r[28]; // 8022CD18
  c->lr=0x8022CD20u; f_80226210(c); // 8022CD1C
L_8022CD20:;
  c->r[3]=c->r[1]+0x00000040u; // 8022CD20
  c->r[12]=c->r[1]+0x00000044u; // 8022CD24
  c->lr=0x8022CD2Cu; f_800C2CFC(c); // 8022CD28
  c->r[0]=c->r[0]|0x00000000u; // 8022CD2C
  c->r[26]=c->r[3]|c->r[3]; // 8022CD30
L_8022CD34:;
  c->r[5]=R32(c->r[1]+0x00000040u); // 8022CD34
  c->r[3]=c->r[5]-c->r[29]; // 8022CD38
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8022CD3C
  c->r[0]=c->r[0]+c->r[3]; // 8022CD40
  c->r[0]=sraw(c,c->r[0],1); // 8022CD44
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 8022CD48
  if (!crb(c,1)) { IRQCHK(c); goto L_8022C948; } // 8022CD4C
L_8022CD50:;
  c->r[0]=R32(c->r[28]+0x00000058u); // 8022CD50
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022CD54
  cmpu(c,0,c->r[0],0x00000100u); // 8022CD58
  if (crb(c,2)) { goto L_8022CD68; } // 8022CD5C
  cmpu(c,0,c->r[0],0x00000200u); // 8022CD60
  if (!crb(c,2)) { goto L_8022CD78; } // 8022CD64
L_8022CD68:;
  c->f[1]=c->f[28]; // 8022CD68
  c->r[3]=c->r[28]|c->r[28]; // 8022CD6C
  c->lr=0x8022CD74u; f_80226210(c); // 8022CD70
  goto L_8022CD84; // 8022CD74
L_8022CD78:;
  c->f[1]=c->f[30]; // 8022CD78
  c->r[3]=c->r[28]|c->r[28]; // 8022CD7C
  c->lr=0x8022CD84u; f_80226230(c); // 8022CD80
L_8022CD84:;
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8022CD84
  c->f[1]=c->f[29]; // 8022CD88
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8022CD8C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8022CD90
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8022CD94
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8022CD98
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8022CD9C
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8022CDA0
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8022CDA4
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,27,ea,0,0);} // 8022CDA8
  {uint32_t ea=c->r[1]+0x00000180u; c->f[27]=RF64(ea);} // 8022CDAC
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,26,ea,0,0);} // 8022CDB0
  {uint32_t ea=c->r[1]+0x00000170u; c->f[26]=RF64(ea);} // 8022CDB4
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,25,ea,0,0);} // 8022CDB8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[25]=RF64(ea);} // 8022CDBC
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,24,ea,0,0);} // 8022CDC0
  {uint32_t ea=c->r[1]+0x00000150u; c->f[24]=RF64(ea);} // 8022CDC4
  c->r[11]=c->r[1]+0x00000150u; // 8022CDC8
  c->lr=0x8022CDD0u; f_800C2E90(c); // 8022CDCC
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8022CDD0
  c->lr=c->r[0]; // 8022CDD4
  c->r[1]=c->r[1]+0x000001D0u; // 8022CDD8
  return; // 8022CDDC
}

// AdjustCursor__Q36nw4hbm2ut17TextWriterBase<w>FPfPfPCwi
void f_8022CDE0(Ctx* __restrict c) {
  trace_call(0x8022CDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022CDE0
  c->r[0]=c->lr; // 8022CDE4
  W32(c->r[1]+0x00000194u,c->r[0]); // 8022CDE8
  c->r[11]=c->r[1]+0x00000170u; // 8022CDEC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 8022CDF0
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 8022CDF4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 8022CDF8
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 8022CDFC
  c->lr=0x8022CE04u; f_800C2E4C(c); // 8022CE00
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022CE04
  c->r[8]=0u+0x80380000u; // 8022CE08
  {uint32_t ea=c->r[8]+0xFFFFF918u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022CE0C
  c->r[27]=c->r[3]|c->r[3]; // 8022CE10
  c->r[8]=c->r[0]&0x00000333u; cr0(c,c->r[8]); // 8022CE14
  c->r[28]=c->r[4]|c->r[4]; // 8022CE18
  c->f[2]=c->f[31]; // 8022CE1C
  c->r[29]=c->r[5]|c->r[5]; // 8022CE20
  c->r[30]=c->r[6]|c->r[6]; // 8022CE24
  c->r[31]=c->r[7]|c->r[7]; // 8022CE28
  cmpu(c,0,c->r[8],0x00000300u); // 8022CE2C
  if (crb(c,2)) { goto L_8022CF50; } // 8022CE30
  cmps(c,0,(int32_t)c->r[8],0); // 8022CE34
  if (crb(c,2)) { goto L_8022CF50; } // 8022CE38
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8022CE3C
  c->r[5]=c->r[30]|c->r[30]; // 8022CE40
  c->r[6]=c->r[31]|c->r[31]; // 8022CE44
  c->r[4]=c->r[1]+0x00000028u; // 8022CE48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 8022CE4C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 8022CE50
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 8022CE54
  c->r[7]=R32(c->r[3]+0x00000000u); // 8022CE58
  W32(c->r[1]+0x000000F8u,c->r[7]); // 8022CE5C
  c->r[7]=R32(c->r[3]+0x00000004u); // 8022CE60
  W32(c->r[1]+0x000000FCu,c->r[7]); // 8022CE64
  c->r[7]=R32(c->r[3]+0x00000008u); // 8022CE68
  W32(c->r[1]+0x00000100u,c->r[7]); // 8022CE6C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8022CE70
  W32(c->r[1]+0x00000104u,c->r[7]); // 8022CE74
  c->r[7]=R32(c->r[3]+0x00000010u); // 8022CE78
  W32(c->r[1]+0x00000108u,c->r[7]); // 8022CE7C
  c->r[7]=R32(c->r[3]+0x00000014u); // 8022CE80
  W32(c->r[1]+0x0000010Cu,c->r[7]); // 8022CE84
  c->r[7]=R32(c->r[3]+0x00000018u); // 8022CE88
  W32(c->r[1]+0x00000110u,c->r[7]); // 8022CE8C
  c->r[7]=R32(c->r[3]+0x0000001Cu); // 8022CE90
  W32(c->r[1]+0x00000114u,c->r[7]); // 8022CE94
  c->r[7]=R32(c->r[3]+0x00000020u); // 8022CE98
  W32(c->r[1]+0x00000118u,c->r[7]); // 8022CE9C
  c->r[8]=R32(c->r[3]+0x00000024u); // 8022CEA0
  c->r[7]=R32(c->r[3]+0x00000028u); // 8022CEA4
  W32(c->r[1]+0x00000120u,c->r[7]); // 8022CEA8
  W32(c->r[1]+0x0000011Cu,c->r[8]); // 8022CEAC
  c->r[8]=R32(c->r[3]+0x0000002Cu); // 8022CEB0
  c->r[7]=R32(c->r[3]+0x00000030u); // 8022CEB4
  W32(c->r[1]+0x00000128u,c->r[7]); // 8022CEB8
  W32(c->r[1]+0x00000124u,c->r[8]); // 8022CEBC
  c->r[7]=R32(c->r[3]+0x00000034u); // 8022CEC0
  W32(c->r[1]+0x0000012Cu,c->r[7]); // 8022CEC4
  c->r[8]=R32(c->r[3]+0x00000038u); // 8022CEC8
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 8022CECC
  W32(c->r[1]+0x00000134u,c->r[7]); // 8022CED0
  W32(c->r[1]+0x00000130u,c->r[8]); // 8022CED4
  c->r[7]=R16(c->r[3]+0x00000040u); // 8022CED8
  W16(c->r[1]+0x00000138u,c->r[7]); // 8022CEDC
  c->r[7]=R8(c->r[3]+0x00000042u); // 8022CEE0
  W8(c->r[1]+0x0000013Au,c->r[7]); // 8022CEE4
  c->r[7]=R8(c->r[3]+0x00000043u); // 8022CEE8
  W8(c->r[1]+0x0000013Bu,c->r[7]); // 8022CEEC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CEF0
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 8022CEF4
  c->r[7]=R32(c->r[3]+0x00000048u); // 8022CEF8
  W32(c->r[1]+0x00000140u,c->r[7]); // 8022CEFC
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CF00
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8022CF04
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CF08
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8022CF0C
  c->r[7]=R32(c->r[3]+0x00000054u); // 8022CF10
  W32(c->r[1]+0x0000014Cu,c->r[7]); // 8022CF14
  W32(c->r[1]+0x00000150u,c->r[0]); // 8022CF18
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8022CF1C
  c->r[3]=c->r[1]+0x000000F8u; // 8022CF20
  W32(c->r[1]+0x00000154u,c->r[0]); // 8022CF24
  c->lr=0x8022CF2Cu; f_8022C6F0(c); // 8022CF28
  c->r[3]=c->r[1]+0x000000F8u; // 8022CF2C
  c->r[4]=0u+0x00000000u; // 8022CF30
  c->lr=0x8022CF38u; f_80225180(c); // 8022CF34
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022CF38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CF3C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CF40
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CF44
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 8022CF48
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 8022CF4C
L_8022CF50:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022CF50
  c->r[0]=rotl(c->r[0],0)&0x00000030u; // 8022CF54
  cmpu(c,0,c->r[0],0x00000010u); // 8022CF58
  if (!crb(c,2)) { goto L_8022CF7C; } // 8022CF5C
  c->r[3]=0u+0x80380000u; // 8022CF60
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CF64
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CF68
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8022CF6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8022CF70
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8022CF74
  goto L_8022CF90; // 8022CF78
L_8022CF7C:;
  cmpu(c,0,c->r[0],0x00000020u); // 8022CF7C
  if (!crb(c,2)) { goto L_8022CF90; } // 8022CF80
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CF84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8022CF88
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8022CF8C
L_8022CF90:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022CF90
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022CF94
  cmpu(c,0,c->r[0],0x00000100u); // 8022CF98
  if (!crb(c,2)) { goto L_8022CFBC; } // 8022CF9C
  c->r[3]=0u+0x80380000u; // 8022CFA0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CFA4
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CFA8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022CFAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8022CFB0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8022CFB4
  goto L_8022CFD0; // 8022CFB8
L_8022CFBC:;
  cmpu(c,0,c->r[0],0x00000200u); // 8022CFBC
  if (!crb(c,2)) { goto L_8022CFD0; } // 8022CFC0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022CFC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022CFC8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8022CFCC
L_8022CFD0:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022CFD0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8022CFD4
  cmpu(c,0,c->r[3],0x00000001u); // 8022CFD8
  if (!crb(c,2)) { goto L_8022D120; } // 8022CFDC
  c->r[4]=0u+0x80380000u; // 8022CFE0
  c->r[3]=c->r[1]+0x00000098u; // 8022CFE4
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CFE8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8022CFEC
  c->f[2]=c->f[1]; // 8022CFF0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8022CFF4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8022CFF8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8022CFFC
  c->r[4]=R32(c->r[27]+0x00000000u); // 8022D000
  W32(c->r[1]+0x00000098u,c->r[4]); // 8022D004
  c->r[4]=R32(c->r[27]+0x00000004u); // 8022D008
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 8022D00C
  c->r[4]=R32(c->r[27]+0x00000008u); // 8022D010
  W32(c->r[1]+0x000000A0u,c->r[4]); // 8022D014
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8022D018
  W32(c->r[1]+0x000000A4u,c->r[4]); // 8022D01C
  c->r[4]=R32(c->r[27]+0x00000010u); // 8022D020
  W32(c->r[1]+0x000000A8u,c->r[4]); // 8022D024
  c->r[4]=R32(c->r[27]+0x00000014u); // 8022D028
  W32(c->r[1]+0x000000ACu,c->r[4]); // 8022D02C
  c->r[4]=R32(c->r[27]+0x00000018u); // 8022D030
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8022D034
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 8022D038
  W32(c->r[1]+0x000000B4u,c->r[4]); // 8022D03C
  c->r[4]=R32(c->r[27]+0x00000020u); // 8022D040
  W32(c->r[1]+0x000000B8u,c->r[4]); // 8022D044
  c->r[5]=R32(c->r[27]+0x00000024u); // 8022D048
  c->r[4]=R32(c->r[27]+0x00000028u); // 8022D04C
  W32(c->r[1]+0x000000C0u,c->r[4]); // 8022D050
  W32(c->r[1]+0x000000BCu,c->r[5]); // 8022D054
  c->r[5]=R32(c->r[27]+0x0000002Cu); // 8022D058
  c->r[4]=R32(c->r[27]+0x00000030u); // 8022D05C
  W32(c->r[1]+0x000000C8u,c->r[4]); // 8022D060
  W32(c->r[1]+0x000000C4u,c->r[5]); // 8022D064
  c->r[4]=R32(c->r[27]+0x00000034u); // 8022D068
  W32(c->r[1]+0x000000CCu,c->r[4]); // 8022D06C
  c->r[5]=R32(c->r[27]+0x00000038u); // 8022D070
  c->r[4]=R32(c->r[27]+0x0000003Cu); // 8022D074
  W32(c->r[1]+0x000000D4u,c->r[4]); // 8022D078
  W32(c->r[1]+0x000000D0u,c->r[5]); // 8022D07C
  c->r[4]=R16(c->r[27]+0x00000040u); // 8022D080
  W16(c->r[1]+0x000000D8u,c->r[4]); // 8022D084
  c->r[4]=R8(c->r[27]+0x00000042u); // 8022D088
  W8(c->r[1]+0x000000DAu,c->r[4]); // 8022D08C
  c->r[4]=R8(c->r[27]+0x00000043u); // 8022D090
  W8(c->r[1]+0x000000DBu,c->r[4]); // 8022D094
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D098
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 8022D09C
  c->r[4]=R32(c->r[27]+0x00000048u); // 8022D0A0
  W32(c->r[1]+0x000000E0u,c->r[4]); // 8022D0A4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D0A8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8022D0AC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D0B0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8022D0B4
  c->r[4]=R32(c->r[27]+0x00000054u); // 8022D0B8
  W32(c->r[1]+0x000000ECu,c->r[4]); // 8022D0BC
  W32(c->r[1]+0x000000F0u,c->r[0]); // 8022D0C0
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8022D0C4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8022D0C8
  c->lr=0x8022D0D0u; f_802261F0(c); // 8022D0CC
  c->r[5]=c->r[30]|c->r[30]; // 8022D0D0
  c->r[6]=c->r[31]|c->r[31]; // 8022D0D4
  c->r[3]=c->r[1]+0x00000098u; // 8022D0D8
  c->r[4]=c->r[1]+0x00000018u; // 8022D0DC
  c->lr=0x8022D0E4u; f_8022C2F0(c); // 8022D0E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D0E4
  c->r[3]=c->r[1]+0x00000098u; // 8022D0E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D0EC
  c->r[4]=0u+0x00000000u; // 8022D0F0
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8022D0F4
  c->lr=0x8022D0FCu; f_80225180(c); // 8022D0F8
  c->r[3]=0u+0x80380000u; // 8022D0FC
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 8022D100
  {uint32_t ea=c->r[3]+0xFFFFF928u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D104
  c->r[3]=c->r[27]|c->r[27]; // 8022D108
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D10C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8022D110
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022D114
  c->lr=0x8022D11Cu; f_80226200(c); // 8022D118
  goto L_8022D268; // 8022D11C
L_8022D120:;
  cmpu(c,0,c->r[3],0x00000002u); // 8022D120
  if (!crb(c,2)) { goto L_8022D25C; } // 8022D124
  c->r[4]=0u+0x80380000u; // 8022D128
  c->r[3]=c->r[1]+0x00000038u; // 8022D12C
  {uint32_t ea=c->r[4]+0xFFFFF918u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D130
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022D134
  c->f[2]=c->f[1]; // 8022D138
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8022D13C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8022D140
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8022D144
  c->r[4]=R32(c->r[27]+0x00000000u); // 8022D148
  W32(c->r[1]+0x00000038u,c->r[4]); // 8022D14C
  c->r[4]=R32(c->r[27]+0x00000004u); // 8022D150
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8022D154
  c->r[4]=R32(c->r[27]+0x00000008u); // 8022D158
  W32(c->r[1]+0x00000040u,c->r[4]); // 8022D15C
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8022D160
  W32(c->r[1]+0x00000044u,c->r[4]); // 8022D164
  c->r[4]=R32(c->r[27]+0x00000010u); // 8022D168
  W32(c->r[1]+0x00000048u,c->r[4]); // 8022D16C
  c->r[4]=R32(c->r[27]+0x00000014u); // 8022D170
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 8022D174
  c->r[4]=R32(c->r[27]+0x00000018u); // 8022D178
  W32(c->r[1]+0x00000050u,c->r[4]); // 8022D17C
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 8022D180
  W32(c->r[1]+0x00000054u,c->r[4]); // 8022D184
  c->r[4]=R32(c->r[27]+0x00000020u); // 8022D188
  W32(c->r[1]+0x00000058u,c->r[4]); // 8022D18C
  c->r[5]=R32(c->r[27]+0x00000024u); // 8022D190
  c->r[4]=R32(c->r[27]+0x00000028u); // 8022D194
  W32(c->r[1]+0x00000060u,c->r[4]); // 8022D198
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8022D19C
  c->r[5]=R32(c->r[27]+0x0000002Cu); // 8022D1A0
  c->r[4]=R32(c->r[27]+0x00000030u); // 8022D1A4
  W32(c->r[1]+0x00000068u,c->r[4]); // 8022D1A8
  W32(c->r[1]+0x00000064u,c->r[5]); // 8022D1AC
  c->r[4]=R32(c->r[27]+0x00000034u); // 8022D1B0
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 8022D1B4
  c->r[5]=R32(c->r[27]+0x00000038u); // 8022D1B8
  c->r[4]=R32(c->r[27]+0x0000003Cu); // 8022D1BC
  W32(c->r[1]+0x00000074u,c->r[4]); // 8022D1C0
  W32(c->r[1]+0x00000070u,c->r[5]); // 8022D1C4
  c->r[4]=R16(c->r[27]+0x00000040u); // 8022D1C8
  W16(c->r[1]+0x00000078u,c->r[4]); // 8022D1CC
  c->r[4]=R8(c->r[27]+0x00000042u); // 8022D1D0
  W8(c->r[1]+0x0000007Au,c->r[4]); // 8022D1D4
  c->r[4]=R8(c->r[27]+0x00000043u); // 8022D1D8
  W8(c->r[1]+0x0000007Bu,c->r[4]); // 8022D1DC
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D1E0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8022D1E4
  c->r[4]=R32(c->r[27]+0x00000048u); // 8022D1E8
  W32(c->r[1]+0x00000080u,c->r[4]); // 8022D1EC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D1F0
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 8022D1F4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D1F8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8022D1FC
  c->r[4]=R32(c->r[27]+0x00000054u); // 8022D200
  W32(c->r[1]+0x0000008Cu,c->r[4]); // 8022D204
  W32(c->r[1]+0x00000090u,c->r[0]); // 8022D208
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8022D20C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8022D210
  c->lr=0x8022D218u; f_802261F0(c); // 8022D214
  c->r[5]=c->r[30]|c->r[30]; // 8022D218
  c->r[6]=c->r[31]|c->r[31]; // 8022D21C
  c->r[3]=c->r[1]+0x00000038u; // 8022D220
  c->r[4]=c->r[1]+0x00000008u; // 8022D224
  c->lr=0x8022D22Cu; f_8022C2F0(c); // 8022D228
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D22C
  c->r[3]=c->r[1]+0x00000038u; // 8022D230
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D234
  c->r[4]=0u+0x00000000u; // 8022D238
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 8022D23C
  c->lr=0x8022D244u; f_80225180(c); // 8022D240
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 8022D244
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D248
  c->r[3]=c->r[27]|c->r[27]; // 8022D24C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022D250
  c->lr=0x8022D258u; f_80226200(c); // 8022D254
  goto L_8022D268; // 8022D258
L_8022D25C:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D25C
  c->r[3]=c->r[27]|c->r[27]; // 8022D260
  c->lr=0x8022D268u; f_80226200(c); // 8022D264
L_8022D268:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 8022D268
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 8022D26C
  cmpu(c,0,c->r[0],0x00000300u); // 8022D270
  if (!crb(c,2)) { goto L_8022D288; } // 8022D274
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D278
  c->r[3]=c->r[27]|c->r[27]; // 8022D27C
  c->lr=0x8022D284u; f_80226210(c); // 8022D280
  goto L_8022D2A0; // 8022D284
L_8022D288:;
  c->r[3]=c->r[27]|c->r[27]; // 8022D288
  c->lr=0x8022D290u; f_80226020(c); // 8022D28C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D290
  c->r[3]=c->r[27]|c->r[27]; // 8022D294
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022D298
  c->lr=0x8022D2A0u; f_80226210(c); // 8022D29C
L_8022D2A0:;
  c->f[1]=c->f[31]; // 8022D2A0
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 8022D2A4
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 8022D2A8
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 8022D2AC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 8022D2B0
  c->r[11]=c->r[1]+0x00000170u; // 8022D2B4
  c->lr=0x8022D2BCu; f_800C2E98(c); // 8022D2B8
  c->r[0]=R32(c->r[1]+0x00000194u); // 8022D2BC
  c->lr=c->r[0]; // 8022D2C0
  c->r[1]=c->r[1]+0x00000190u; // 8022D2C4
  return; // 8022D2C8
}

// fn_8022D2D0
void f_8022D2D0(Ctx* __restrict c) {
  trace_call(0x8022D2D0u);
  c->r[0]=R32(c->r[3]+0x00000058u); // 8022D2D0
  c->r[0]=c->r[0]&c->r[4]; // 8022D2D4
  c->r[0]=c->r[0]-c->r[5]; // 8022D2D8
  c->r[0]=cntlz(c->r[0]); // 8022D2DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8022D2E0
  return; // 8022D2E4
}

// fn_8022D2F0
void f_8022D2F0(Ctx* __restrict c) {
  trace_call(0x8022D2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D2F0
  c->r[0]=c->lr; // 8022D2F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D2F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022D2FC
  c->r[31]=0u+0x80490000u; // 8022D300
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022D304
  c->r[0]=R8(c->r[31]+0x00001A88u); // 8022D308
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022D30C
  if (!crb(c,2)) { goto L_8022D340; } // 8022D310
  c->r[30]=0u+0x80490000u; // 8022D314
  c->r[3]=c->r[30]+0x00001A7Cu; // 8022D318
  c->lr=0x8022D320u; f_80227470(c); // 8022D31C
  c->r[4]=0u+0x80220000u; // 8022D320
  c->r[5]=0u+0x80490000u; // 8022D324
  c->r[3]=c->r[30]+0x00001A7Cu; // 8022D328
  c->r[4]=c->r[4]+0x00007480u; // 8022D32C
  c->r[5]=c->r[5]+0x00001A60u; // 8022D330
  c->lr=0x8022D338u; f_800C2A60(c); // 8022D334
  c->r[0]=0u+0x00000001u; // 8022D338
  W8(c->r[31]+0x00001A88u,c->r[0]); // 8022D33C
L_8022D340:;
  c->r[30]=0u+0x80490000u; // 8022D340
  c->r[0]=R8(c->r[30]+0x00001A89u); // 8022D344
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022D348
  if (!crb(c,2)) { goto L_8022D37C; } // 8022D34C
  c->r[31]=0u+0x80490000u; // 8022D350
  c->r[3]=c->r[31]+0x00001A84u; // 8022D354
  c->lr=0x8022D35Cu; f_802279D0(c); // 8022D358
  c->r[4]=0u+0x80220000u; // 8022D35C
  c->r[5]=0u+0x80490000u; // 8022D360
  c->r[3]=c->r[31]+0x00001A84u; // 8022D364
  c->r[4]=c->r[4]+0x000079E0u; // 8022D368
  c->r[5]=c->r[5]+0x00001A6Cu; // 8022D36C
  c->lr=0x8022D374u; f_800C2A60(c); // 8022D370
  c->r[0]=0u+0x00000001u; // 8022D374
  W8(c->r[30]+0x00001A89u,c->r[0]); // 8022D378
L_8022D37C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022D37C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022D380
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022D384
  c->lr=c->r[0]; // 8022D388
  c->r[1]=c->r[1]+0x00000010u; // 8022D38C
  return; // 8022D390
}

// __HBMMIXSetPan__FP13HBMMIXChannel
void f_8022D3A0(Ctx* __restrict c) {
  trace_call(0x8022D3A0u);
  c->r[4]=0u+0x80490000u; // 8022D3A0
  c->r[6]=0u+0x803B0000u; // 8022D3A4
  c->r[0]=R32(c->r[4]+0x00001B00u); // 8022D3A8
  c->r[6]=c->r[6]+0xFFFF8F48u; // 8022D3AC
  c->r[5]=R32(c->r[3]+0x00000010u); // 8022D3B0
  cmpu(c,0,c->r[0],0x00000002u); // 8022D3B4
  c->r[4]=addc(c,~c->r[5],0x0000007Fu,1); // 8022D3B8
  if (!crb(c,2)) { goto L_8022D404; } // 8022D3BC
  c->r[8]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8022D3C0
  c->r[5]=c->r[6]+0x00000990u; // 8022D3C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[8]); // 8022D3C8
  c->r[7]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8022D3CC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8022D3D0
  c->r[4]=c->r[6]+0x00000A90u; // 8022D3D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[7]); // 8022D3D8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8022D3DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000990u); // 8022D3E0
  W32(c->r[3]+0x00000020u,c->r[0]); // 8022D3E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x000000FEu); // 8022D3E8
  W32(c->r[3]+0x00000024u,c->r[0]); // 8022D3EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[7]); // 8022D3F0
  W32(c->r[3]+0x00000028u,c->r[0]); // 8022D3F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[8]); // 8022D3F8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8022D3FC
  return; // 8022D400
L_8022D404:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8022D404
  c->r[5]=c->r[6]+0x00000790u; // 8022D408
  c->r[0]=R32(c->r[5]+c->r[0]); // 8022D40C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8022D410
  W32(c->r[3]+0x00000018u,c->r[0]); // 8022D414
  c->r[0]=0u+0x00000000u; // 8022D418
  c->r[4]=R32(c->r[5]+c->r[4]); // 8022D41C
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8022D420
  c->r[4]=R32(c->r[6]+0x00000790u); // 8022D424
  W32(c->r[3]+0x00000020u,c->r[4]); // 8022D428
  c->r[4]=R32(c->r[5]+0x000001FCu); // 8022D42C
  W32(c->r[3]+0x00000024u,c->r[4]); // 8022D430
  W32(c->r[3]+0x00000028u,c->r[0]); // 8022D434
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8022D438
  return; // 8022D43C
}

// HBMMIXInit
void f_8022D440(Ctx* __restrict c) {
  trace_call(0x8022D440u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D440
  c->r[0]=c->lr; // 8022D444
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022D448
  c->r[11]=c->r[1]+0x00000030u; // 8022D44C
  c->lr=0x8022D454u; f_800C2E44(c); // 8022D450
  c->r[27]=0u+0x80490000u; // 8022D454
  c->r[27]=c->r[27]+0x00001A90u; // 8022D458
  c->lr=0x8022D460u; f_801C4190(c); // 8022D45C
  cmps(c,0,(int32_t)c->r[3],0); // 8022D460
  if (crb(c,2)) { goto L_8022D628; } // 8022D464
  c->r[0]=R32(c->r[27]+0x000006B8u); // 8022D468
  cmps(c,0,(int32_t)c->r[0],0); // 8022D46C
  if (!crb(c,2)) { goto L_8022D628; } // 8022D470
  c->r[5]=c->r[27]+0x00000000u; // 8022D474
  c->r[3]=0u+0xFFFFFFFFu; // 8022D478
  W8(c->r[5]+0x00000000u,c->r[3]); // 8022D47C
  c->r[0]=0u+0x00000002u; // 8022D480
  c->r[4]=c->r[27]+0x00000010u; // 8022D484
  W8(c->r[5]+0x00000001u,c->r[3]); // 8022D488
  W8(c->r[5]+0x00000002u,c->r[3]); // 8022D48C
  W8(c->r[5]+0x00000003u,c->r[3]); // 8022D490
  W8(c->r[5]+0x00000004u,c->r[3]); // 8022D494
  W8(c->r[5]+0x00000005u,c->r[3]); // 8022D498
  W8(c->r[5]+0x00000006u,c->r[3]); // 8022D49C
  W8(c->r[5]+0x00000007u,c->r[3]); // 8022D4A0
  W8(c->r[5]+0x00000008u,c->r[3]); // 8022D4A4
  W8(c->r[5]+0x00000009u,c->r[3]); // 8022D4A8
  W8(c->r[5]+0x0000000Au,c->r[3]); // 8022D4AC
  W8(c->r[5]+0x0000000Bu,c->r[3]); // 8022D4B0
  W8(c->r[5]+0x0000000Cu,c->r[3]); // 8022D4B4
  W8(c->r[5]+0x0000000Du,c->r[3]); // 8022D4B8
  W8(c->r[5]+0x0000000Eu,c->r[3]); // 8022D4BC
  W8(c->r[5]+0x0000000Fu,c->r[3]); // 8022D4C0
  c->ctr=c->r[0]; // 8022D4C4
L_8022D4C8:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 8022D4C8
  W8(c->r[4]+0x00000001u,c->r[3]); // 8022D4CC
  W8(c->r[4]+0x00000002u,c->r[3]); // 8022D4D0
  W8(c->r[4]+0x00000003u,c->r[3]); // 8022D4D4
  W8(c->r[4]+0x00000004u,c->r[3]); // 8022D4D8
  W8(c->r[4]+0x00000005u,c->r[3]); // 8022D4DC
  W8(c->r[4]+0x00000006u,c->r[3]); // 8022D4E0
  W8(c->r[4]+0x00000007u,c->r[3]); // 8022D4E4
  W8(c->r[4]+0x00000008u,c->r[3]); // 8022D4E8
  W8(c->r[4]+0x00000009u,c->r[3]); // 8022D4EC
  W8(c->r[4]+0x0000000Au,c->r[3]); // 8022D4F0
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 8022D4F4
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 8022D4F8
  W8(c->r[4]+0x0000000Du,c->r[3]); // 8022D4FC
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 8022D500
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 8022D504
  W8(c->r[4]+0x00000010u,c->r[3]); // 8022D508
  W8(c->r[4]+0x00000011u,c->r[3]); // 8022D50C
  W8(c->r[4]+0x00000012u,c->r[3]); // 8022D510
  W8(c->r[4]+0x00000013u,c->r[3]); // 8022D514
  W8(c->r[4]+0x00000014u,c->r[3]); // 8022D518
  W8(c->r[4]+0x00000015u,c->r[3]); // 8022D51C
  W8(c->r[4]+0x00000016u,c->r[3]); // 8022D520
  W8(c->r[4]+0x00000017u,c->r[3]); // 8022D524
  W8(c->r[4]+0x00000018u,c->r[3]); // 8022D528
  W8(c->r[4]+0x00000019u,c->r[3]); // 8022D52C
  W8(c->r[4]+0x0000001Au,c->r[3]); // 8022D530
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 8022D534
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 8022D538
  W8(c->r[4]+0x0000001Du,c->r[3]); // 8022D53C
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 8022D540
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 8022D544
  W8(c->r[4]+0x00000020u,c->r[3]); // 8022D548
  W8(c->r[4]+0x00000021u,c->r[3]); // 8022D54C
  W8(c->r[4]+0x00000022u,c->r[3]); // 8022D550
  W8(c->r[4]+0x00000023u,c->r[3]); // 8022D554
  W8(c->r[4]+0x00000024u,c->r[3]); // 8022D558
  W8(c->r[4]+0x00000025u,c->r[3]); // 8022D55C
  W8(c->r[4]+0x00000026u,c->r[3]); // 8022D560
  W8(c->r[4]+0x00000027u,c->r[3]); // 8022D564
  W8(c->r[4]+0x00000028u,c->r[3]); // 8022D568
  W8(c->r[4]+0x00000029u,c->r[3]); // 8022D56C
  W8(c->r[4]+0x0000002Au,c->r[3]); // 8022D570
  W8(c->r[4]+0x0000002Bu,c->r[3]); // 8022D574
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 8022D578
  W8(c->r[4]+0x0000002Du,c->r[3]); // 8022D57C
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 8022D580
  W8(c->r[4]+0x0000002Fu,c->r[3]); // 8022D584
  c->r[4]=c->r[4]+0x00000030u; // 8022D588
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8022D4C8; } // 8022D58C
  c->r[0]=c->r[27]+0x00000078u; // 8022D590
  W32(c->r[27]+0x00000074u,c->r[0]); // 8022D594
  c->r[25]=0u+0x00000000u; // 8022D598
  c->r[26]=0u+0x00000000u; // 8022D59C
  c->r[28]=0u+0x00000000u; // 8022D5A0
  c->r[29]=0u+0x50000000u; // 8022D5A4
  c->r[30]=0u+0xFFFFFC40u; // 8022D5A8
  c->r[31]=0u+0x00000040u; // 8022D5AC
L_8022D5B0:;
  c->r[3]=R32(c->r[27]+0x00000074u); // 8022D5B0
  W32(c->r[3]+c->r[26],c->r[28]); // 8022D5B4
  c->r[0]=R32(c->r[27]+0x00000074u); // 8022D5B8
  c->r[3]=c->r[0]+c->r[26]; // 8022D5BC
  W32(c->r[3]+0x00000004u,c->r[29]); // 8022D5C0
  W32(c->r[3]+0x00000008u,c->r[28]); // 8022D5C4
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8022D5C8
  W32(c->r[3]+0x00000014u,c->r[28]); // 8022D5CC
  W32(c->r[3]+0x00000010u,c->r[31]); // 8022D5D0
  W16(c->r[3]+0x00000060u,c->r[28]); // 8022D5D4
  W16(c->r[3]+0x0000005Cu,c->r[28]); // 8022D5D8
  W16(c->r[3]+0x00000058u,c->r[28]); // 8022D5DC
  W16(c->r[3]+0x00000054u,c->r[28]); // 8022D5E0
  W16(c->r[3]+0x00000050u,c->r[28]); // 8022D5E4
  W16(c->r[3]+0x0000004Cu,c->r[28]); // 8022D5E8
  W16(c->r[3]+0x00000048u,c->r[28]); // 8022D5EC
  W16(c->r[3]+0x00000044u,c->r[28]); // 8022D5F0
  W16(c->r[3]+0x00000040u,c->r[28]); // 8022D5F4
  W16(c->r[3]+0x0000003Cu,c->r[28]); // 8022D5F8
  W16(c->r[3]+0x00000038u,c->r[28]); // 8022D5FC
  W16(c->r[3]+0x00000034u,c->r[28]); // 8022D600
  W16(c->r[3]+0x00000030u,c->r[28]); // 8022D604
  c->lr=0x8022D60Cu; f_8022D3A0(c); // 8022D608
  c->r[25]=c->r[25]+0x00000001u; // 8022D60C
  c->r[26]=c->r[26]+0x00000064u; // 8022D610
  cmps(c,0,(int32_t)c->r[25],16); // 8022D614
  if (crb(c,0)) { IRQCHK(c); goto L_8022D5B0; } // 8022D618
  c->r[0]=0u+0x00000001u; // 8022D61C
  W32(c->r[27]+0x00000070u,c->r[0]); // 8022D620
  W32(c->r[27]+0x000006B8u,c->r[0]); // 8022D624
L_8022D628:;
  c->r[11]=c->r[1]+0x00000030u; // 8022D628
  c->lr=0x8022D630u; f_800C2E90(c); // 8022D62C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022D630
  c->lr=c->r[0]; // 8022D634
  c->r[1]=c->r[1]+0x00000030u; // 8022D638
  return; // 8022D63C
}

// HBMMIXSetSoundMode
void f_8022D640(Ctx* __restrict c) {
  trace_call(0x8022D640u);
  c->r[4]=0u+0x80490000u; // 8022D640
  W32(c->r[4]+0x00001B00u,c->r[3]); // 8022D644
  return; // 8022D648
}

// HBMMIXInitChannel
void f_8022D650(Ctx* __restrict c) {
  trace_call(0x8022D650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D650
  c->r[0]=c->lr; // 8022D654
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022D658
  c->r[0]=0u+0x00000000u; // 8022D65C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022D660
  c->r[31]=0u+0x80490000u; // 8022D664
  c->r[31]=c->r[31]+0x00001A90u; // 8022D668
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022D66C
  c->r[8]=c->r[31]+0x00000010u; // 8022D670
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022D674
  c->r[29]=c->r[4]|c->r[4]; // 8022D678
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022D67C
  c->r[28]=c->r[3]|c->r[3]; // 8022D680
  c->r[9]=R32(c->r[3]+0x00000018u); // 8022D684
  c->r[10]=R32(c->r[31]+0x00000074u); // 8022D688
  c->r[8]=R8(c->r[8]+c->r[9]); // 8022D68C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 8022D690
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)100); // 8022D694
  W32(c->r[10]+c->r[8],c->r[3]); // 8022D698
  c->r[30]=c->r[10]+c->r[8]; // 8022D69C
  c->r[3]=c->r[30]|c->r[30]; // 8022D6A0
  W32(c->r[30]+0x00000004u,c->r[0]); // 8022D6A4
  W32(c->r[30]+0x00000008u,c->r[4]); // 8022D6A8
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 8022D6AC
  W32(c->r[30]+0x00000010u,c->r[6]); // 8022D6B0
  W32(c->r[30]+0x00000014u,c->r[7]); // 8022D6B4
  c->lr=0x8022D6BCu; f_8022D3A0(c); // 8022D6B8
  cmps(c,0,(int32_t)c->r[29],-904); // 8022D6BC
  if (crb(c,1)) { goto L_8022D6CC; } // 8022D6C0
  c->r[0]=0u+0x00000000u; // 8022D6C4
  goto L_8022D6F4; // 8022D6C8
L_8022D6CC:;
  cmps(c,0,(int32_t)c->r[29],60); // 8022D6CC
  if (crb(c,0)) { goto L_8022D6E0; } // 8022D6D0
  c->r[3]=0u+0x00010000u; // 8022D6D4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D6D8
  goto L_8022D6F4; // 8022D6DC
L_8022D6E0:;
  c->r[0]=c->r[29]+0x00000388u; // 8022D6E0
  c->r[3]=0u+0x803B0000u; // 8022D6E4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D6E8
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D6EC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D6F0
L_8022D6F4:;
  W16(c->r[30]+0x00000030u,c->r[0]); // 8022D6F4
  c->r[29]=0u+0x00000000u; // 8022D6F8
  c->r[0]=R32(c->r[31]+0x00000070u); // 8022D6FC
  cmps(c,0,(int32_t)c->r[0],0); // 8022D700
  if (crb(c,2)) { goto L_8022D71C; } // 8022D704
  cmpu(c,0,c->r[0],0x00000001u); // 8022D708
  if (crb(c,2)) { goto L_8022D90C; } // 8022D70C
  cmpu(c,0,c->r[0],0x00000002u); // 8022D710
  if (crb(c,2)) { goto L_8022DB1C; } // 8022D714
  goto L_8022DDD4; // 8022D718
L_8022D71C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8022D71C
  c->r[0]=R32(c->r[30]+0x00000020u); // 8022D720
  c->r[3]=c->r[3]+c->r[0]; // 8022D724
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D728
  if (crb(c,1)) { goto L_8022D738; } // 8022D72C
  c->r[0]=0u+0x00000000u; // 8022D730
  goto L_8022D760; // 8022D734
L_8022D738:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D738
  if (crb(c,0)) { goto L_8022D74C; } // 8022D73C
  c->r[3]=0u+0x00010000u; // 8022D740
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D744
  goto L_8022D760; // 8022D748
L_8022D74C:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D74C
  c->r[3]=0u+0x803B0000u; // 8022D750
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D754
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D758
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D75C
L_8022D760:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8022D760
  c->r[3]=R32(c->r[30]+0x00000014u); // 8022D764
  c->r[0]=R32(c->r[30]+0x00000020u); // 8022D768
  c->r[3]=c->r[3]+c->r[0]; // 8022D76C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D770
  if (crb(c,1)) { goto L_8022D780; } // 8022D774
  c->r[0]=0u+0x00000000u; // 8022D778
  goto L_8022D7A8; // 8022D77C
L_8022D780:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D780
  if (crb(c,0)) { goto L_8022D794; } // 8022D784
  c->r[3]=0u+0x00010000u; // 8022D788
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D78C
  goto L_8022D7A8; // 8022D790
L_8022D794:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D794
  c->r[3]=0u+0x803B0000u; // 8022D798
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D79C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D7A0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D7A4
L_8022D7A8:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8022D7A8
  c->r[3]=R32(c->r[30]+0x00000014u); // 8022D7AC
  c->r[0]=R32(c->r[30]+0x00000024u); // 8022D7B0
  c->r[3]=c->r[3]+c->r[0]; // 8022D7B4
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8022D7B8
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D7BC
  if (crb(c,1)) { goto L_8022D7CC; } // 8022D7C0
  c->r[0]=0u+0x00000000u; // 8022D7C4
  goto L_8022D7F4; // 8022D7C8
L_8022D7CC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D7CC
  if (crb(c,0)) { goto L_8022D7E0; } // 8022D7D0
  c->r[3]=0u+0x00010000u; // 8022D7D4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D7D8
  goto L_8022D7F4; // 8022D7DC
L_8022D7E0:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D7E0
  c->r[3]=0u+0x803B0000u; // 8022D7E4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D7E8
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D7EC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D7F0
L_8022D7F4:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8022D7F4
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022D7F8
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022D7FC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8022D800
  c->r[0]=c->r[4]+c->r[0]; // 8022D804
  c->r[3]=c->r[3]+c->r[0]; // 8022D808
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D80C
  if (crb(c,1)) { goto L_8022D81C; } // 8022D810
  c->r[0]=0u+0x00000000u; // 8022D814
  goto L_8022D844; // 8022D818
L_8022D81C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D81C
  if (crb(c,0)) { goto L_8022D830; } // 8022D820
  c->r[3]=0u+0x00010000u; // 8022D824
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D828
  goto L_8022D844; // 8022D82C
L_8022D830:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D830
  c->r[3]=0u+0x803B0000u; // 8022D834
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D838
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D83C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D840
L_8022D844:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8022D844
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022D848
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022D84C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8022D850
  c->r[0]=c->r[4]+c->r[0]; // 8022D854
  c->r[3]=c->r[3]+c->r[0]; // 8022D858
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D85C
  if (crb(c,1)) { goto L_8022D86C; } // 8022D860
  c->r[0]=0u+0x00000000u; // 8022D864
  goto L_8022D894; // 8022D868
L_8022D86C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D86C
  if (crb(c,0)) { goto L_8022D880; } // 8022D870
  c->r[3]=0u+0x00010000u; // 8022D874
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D878
  goto L_8022D894; // 8022D87C
L_8022D880:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D880
  c->r[3]=0u+0x803B0000u; // 8022D884
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D888
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D88C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D890
L_8022D894:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8022D894
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022D898
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022D89C
  c->r[3]=R32(c->r[30]+0x00000024u); // 8022D8A0
  c->r[0]=c->r[4]+c->r[0]; // 8022D8A4
  c->r[3]=c->r[0]+c->r[3]; // 8022D8A8
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8022D8AC
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D8B0
  if (crb(c,1)) { goto L_8022D8C0; } // 8022D8B4
  c->r[0]=0u+0x00000000u; // 8022D8B8
  goto L_8022D8E8; // 8022D8BC
L_8022D8C0:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D8C0
  if (crb(c,0)) { goto L_8022D8D4; } // 8022D8C4
  c->r[3]=0u+0x00010000u; // 8022D8C8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D8CC
  goto L_8022D8E8; // 8022D8D0
L_8022D8D4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D8D4
  c->r[3]=0u+0x803B0000u; // 8022D8D8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D8DC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D8E0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D8E4
L_8022D8E8:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8022D8E8
  c->r[0]=0u+0x00000000u; // 8022D8EC
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8022D8F0
  W16(c->r[30]+0x00000050u,c->r[0]); // 8022D8F4
  W16(c->r[30]+0x00000054u,c->r[0]); // 8022D8F8
  W16(c->r[30]+0x00000058u,c->r[0]); // 8022D8FC
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8022D900
  W16(c->r[30]+0x00000060u,c->r[0]); // 8022D904
  goto L_8022DDD4; // 8022D908
L_8022D90C:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022D90C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022D910
  c->r[3]=R32(c->r[30]+0x00000018u); // 8022D914
  c->r[0]=c->r[4]+c->r[0]; // 8022D918
  c->r[3]=c->r[3]+c->r[0]; // 8022D91C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D920
  if (crb(c,1)) { goto L_8022D930; } // 8022D924
  c->r[0]=0u+0x00000000u; // 8022D928
  goto L_8022D958; // 8022D92C
L_8022D930:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D930
  if (crb(c,0)) { goto L_8022D944; } // 8022D934
  c->r[3]=0u+0x00010000u; // 8022D938
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D93C
  goto L_8022D958; // 8022D940
L_8022D944:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D944
  c->r[3]=0u+0x803B0000u; // 8022D948
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D94C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D950
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D954
L_8022D958:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8022D958
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022D95C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022D960
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8022D964
  c->r[0]=c->r[4]+c->r[0]; // 8022D968
  c->r[3]=c->r[3]+c->r[0]; // 8022D96C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D970
  if (crb(c,1)) { goto L_8022D980; } // 8022D974
  c->r[0]=0u+0x00000000u; // 8022D978
  goto L_8022D9A8; // 8022D97C
L_8022D980:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D980
  if (crb(c,0)) { goto L_8022D994; } // 8022D984
  c->r[3]=0u+0x00010000u; // 8022D988
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D98C
  goto L_8022D9A8; // 8022D990
L_8022D994:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D994
  c->r[3]=0u+0x803B0000u; // 8022D998
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D99C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D9A0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D9A4
L_8022D9A8:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8022D9A8
  c->r[3]=R32(c->r[30]+0x00000014u); // 8022D9AC
  c->r[0]=R32(c->r[30]+0x00000024u); // 8022D9B0
  c->r[3]=c->r[3]+c->r[0]; // 8022D9B4
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8022D9B8
  cmps(c,0,(int32_t)c->r[3],-904); // 8022D9BC
  if (crb(c,1)) { goto L_8022D9CC; } // 8022D9C0
  c->r[0]=0u+0x00000000u; // 8022D9C4
  goto L_8022D9F4; // 8022D9C8
L_8022D9CC:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022D9CC
  if (crb(c,0)) { goto L_8022D9E0; } // 8022D9D0
  c->r[3]=0u+0x00010000u; // 8022D9D4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022D9D8
  goto L_8022D9F4; // 8022D9DC
L_8022D9E0:;
  c->r[0]=c->r[3]+0x00000388u; // 8022D9E0
  c->r[3]=0u+0x803B0000u; // 8022D9E4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022D9E8
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022D9EC
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022D9F0
L_8022D9F4:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8022D9F4
  c->r[5]=R32(c->r[30]+0x00000020u); // 8022D9F8
  c->r[3]=R32(c->r[30]+0x00000018u); // 8022D9FC
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DA00
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DA04
  c->r[3]=c->r[5]+c->r[3]; // 8022DA08
  c->r[0]=c->r[4]+c->r[0]; // 8022DA0C
  c->r[3]=c->r[3]+c->r[0]; // 8022DA10
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DA14
  if (crb(c,1)) { goto L_8022DA24; } // 8022DA18
  c->r[0]=0u+0x00000000u; // 8022DA1C
  goto L_8022DA4C; // 8022DA20
L_8022DA24:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DA24
  if (crb(c,0)) { goto L_8022DA38; } // 8022DA28
  c->r[3]=0u+0x00010000u; // 8022DA2C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DA30
  goto L_8022DA4C; // 8022DA34
L_8022DA38:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DA38
  c->r[3]=0u+0x803B0000u; // 8022DA3C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DA40
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DA44
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DA48
L_8022DA4C:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8022DA4C
  c->r[5]=R32(c->r[30]+0x00000020u); // 8022DA50
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8022DA54
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DA58
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DA5C
  c->r[3]=c->r[5]+c->r[3]; // 8022DA60
  c->r[0]=c->r[4]+c->r[0]; // 8022DA64
  c->r[3]=c->r[3]+c->r[0]; // 8022DA68
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DA6C
  if (crb(c,1)) { goto L_8022DA7C; } // 8022DA70
  c->r[0]=0u+0x00000000u; // 8022DA74
  goto L_8022DAA4; // 8022DA78
L_8022DA7C:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DA7C
  if (crb(c,0)) { goto L_8022DA90; } // 8022DA80
  c->r[3]=0u+0x00010000u; // 8022DA84
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DA88
  goto L_8022DAA4; // 8022DA8C
L_8022DA90:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DA90
  c->r[3]=0u+0x803B0000u; // 8022DA94
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DA98
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DA9C
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DAA0
L_8022DAA4:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8022DAA4
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DAA8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DAAC
  c->r[3]=R32(c->r[30]+0x00000024u); // 8022DAB0
  c->r[0]=c->r[4]+c->r[0]; // 8022DAB4
  c->r[3]=c->r[0]+c->r[3]; // 8022DAB8
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 8022DABC
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DAC0
  if (crb(c,1)) { goto L_8022DAD0; } // 8022DAC4
  c->r[0]=0u+0x00000000u; // 8022DAC8
  goto L_8022DAF8; // 8022DACC
L_8022DAD0:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DAD0
  if (crb(c,0)) { goto L_8022DAE4; } // 8022DAD4
  c->r[3]=0u+0x00010000u; // 8022DAD8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DADC
  goto L_8022DAF8; // 8022DAE0
L_8022DAE4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DAE4
  c->r[3]=0u+0x803B0000u; // 8022DAE8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DAEC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DAF0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DAF4
L_8022DAF8:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8022DAF8
  c->r[0]=0u+0x00000000u; // 8022DAFC
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8022DB00
  W16(c->r[30]+0x00000050u,c->r[0]); // 8022DB04
  W16(c->r[30]+0x00000054u,c->r[0]); // 8022DB08
  W16(c->r[30]+0x00000058u,c->r[0]); // 8022DB0C
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8022DB10
  W16(c->r[30]+0x00000060u,c->r[0]); // 8022DB14
  goto L_8022DDD4; // 8022DB18
L_8022DB1C:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022DB1C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022DB20
  c->r[3]=R32(c->r[30]+0x00000018u); // 8022DB24
  c->r[0]=c->r[4]+c->r[0]; // 8022DB28
  c->r[3]=c->r[3]+c->r[0]; // 8022DB2C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DB30
  if (crb(c,1)) { goto L_8022DB40; } // 8022DB34
  c->r[0]=0u+0x00000000u; // 8022DB38
  goto L_8022DB68; // 8022DB3C
L_8022DB40:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DB40
  if (crb(c,0)) { goto L_8022DB54; } // 8022DB44
  c->r[3]=0u+0x00010000u; // 8022DB48
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DB4C
  goto L_8022DB68; // 8022DB50
L_8022DB54:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DB54
  c->r[3]=0u+0x803B0000u; // 8022DB58
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DB5C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DB60
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DB64
L_8022DB68:;
  W16(c->r[30]+0x00000034u,c->r[0]); // 8022DB68
  c->r[4]=R32(c->r[30]+0x00000020u); // 8022DB6C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022DB70
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8022DB74
  c->r[0]=c->r[4]+c->r[0]; // 8022DB78
  c->r[3]=c->r[3]+c->r[0]; // 8022DB7C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DB80
  if (crb(c,1)) { goto L_8022DB90; } // 8022DB84
  c->r[0]=0u+0x00000000u; // 8022DB88
  goto L_8022DBB8; // 8022DB8C
L_8022DB90:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DB90
  if (crb(c,0)) { goto L_8022DBA4; } // 8022DB94
  c->r[3]=0u+0x00010000u; // 8022DB98
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DB9C
  goto L_8022DBB8; // 8022DBA0
L_8022DBA4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DBA4
  c->r[3]=0u+0x803B0000u; // 8022DBA8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DBAC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DBB0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DBB4
L_8022DBB8:;
  W16(c->r[30]+0x00000038u,c->r[0]); // 8022DBB8
  c->r[4]=R32(c->r[30]+0x00000024u); // 8022DBBC
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022DBC0
  c->r[3]=R32(c->r[30]+0x00000028u); // 8022DBC4
  c->r[0]=c->r[4]+c->r[0]; // 8022DBC8
  c->r[3]=c->r[3]+c->r[0]; // 8022DBCC
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DBD0
  if (crb(c,1)) { goto L_8022DBE0; } // 8022DBD4
  c->r[0]=0u+0x00000000u; // 8022DBD8
  goto L_8022DC08; // 8022DBDC
L_8022DBE0:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DBE0
  if (crb(c,0)) { goto L_8022DBF4; } // 8022DBE4
  c->r[3]=0u+0x00010000u; // 8022DBE8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DBEC
  goto L_8022DC08; // 8022DBF0
L_8022DBF4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DBF4
  c->r[3]=0u+0x803B0000u; // 8022DBF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DBFC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DC00
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DC04
L_8022DC08:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 8022DC08
  c->r[4]=R32(c->r[30]+0x00000024u); // 8022DC0C
  c->r[0]=R32(c->r[30]+0x00000014u); // 8022DC10
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8022DC14
  c->r[0]=c->r[4]+c->r[0]; // 8022DC18
  c->r[3]=c->r[3]+c->r[0]; // 8022DC1C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DC20
  if (crb(c,1)) { goto L_8022DC30; } // 8022DC24
  c->r[0]=0u+0x00000000u; // 8022DC28
  goto L_8022DC58; // 8022DC2C
L_8022DC30:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DC30
  if (crb(c,0)) { goto L_8022DC44; } // 8022DC34
  c->r[3]=0u+0x00010000u; // 8022DC38
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DC3C
  goto L_8022DC58; // 8022DC40
L_8022DC44:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DC44
  c->r[3]=0u+0x803B0000u; // 8022DC48
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DC4C
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DC50
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DC54
L_8022DC58:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 8022DC58
  c->r[5]=R32(c->r[30]+0x00000020u); // 8022DC5C
  c->r[3]=R32(c->r[30]+0x00000018u); // 8022DC60
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DC64
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DC68
  c->r[3]=c->r[5]+c->r[3]; // 8022DC6C
  c->r[0]=c->r[4]+c->r[0]; // 8022DC70
  c->r[3]=c->r[3]+c->r[0]; // 8022DC74
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DC78
  if (crb(c,1)) { goto L_8022DC88; } // 8022DC7C
  c->r[0]=0u+0x00000000u; // 8022DC80
  goto L_8022DCB0; // 8022DC84
L_8022DC88:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DC88
  if (crb(c,0)) { goto L_8022DC9C; } // 8022DC8C
  c->r[3]=0u+0x00010000u; // 8022DC90
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DC94
  goto L_8022DCB0; // 8022DC98
L_8022DC9C:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DC9C
  c->r[3]=0u+0x803B0000u; // 8022DCA0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DCA4
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DCA8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DCAC
L_8022DCB0:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 8022DCB0
  c->r[5]=R32(c->r[30]+0x00000020u); // 8022DCB4
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8022DCB8
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DCBC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DCC0
  c->r[3]=c->r[5]+c->r[3]; // 8022DCC4
  c->r[0]=c->r[4]+c->r[0]; // 8022DCC8
  c->r[3]=c->r[3]+c->r[0]; // 8022DCCC
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DCD0
  if (crb(c,1)) { goto L_8022DCE0; } // 8022DCD4
  c->r[0]=0u+0x00000000u; // 8022DCD8
  goto L_8022DD08; // 8022DCDC
L_8022DCE0:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DCE0
  if (crb(c,0)) { goto L_8022DCF4; } // 8022DCE4
  c->r[3]=0u+0x00010000u; // 8022DCE8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DCEC
  goto L_8022DD08; // 8022DCF0
L_8022DCF4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DCF4
  c->r[3]=0u+0x803B0000u; // 8022DCF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DCFC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DD00
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DD04
L_8022DD08:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 8022DD08
  c->r[5]=R32(c->r[30]+0x00000024u); // 8022DD0C
  c->r[3]=R32(c->r[30]+0x00000028u); // 8022DD10
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DD14
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DD18
  c->r[3]=c->r[5]+c->r[3]; // 8022DD1C
  c->r[0]=c->r[4]+c->r[0]; // 8022DD20
  c->r[3]=c->r[3]+c->r[0]; // 8022DD24
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DD28
  if (crb(c,1)) { goto L_8022DD38; } // 8022DD2C
  c->r[0]=0u+0x00000000u; // 8022DD30
  goto L_8022DD60; // 8022DD34
L_8022DD38:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DD38
  if (crb(c,0)) { goto L_8022DD4C; } // 8022DD3C
  c->r[3]=0u+0x00010000u; // 8022DD40
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DD44
  goto L_8022DD60; // 8022DD48
L_8022DD4C:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DD4C
  c->r[3]=0u+0x803B0000u; // 8022DD50
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DD54
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DD58
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DD5C
L_8022DD60:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 8022DD60
  c->r[5]=R32(c->r[30]+0x00000024u); // 8022DD64
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8022DD68
  c->r[4]=R32(c->r[30]+0x00000014u); // 8022DD6C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8022DD70
  c->r[3]=c->r[5]+c->r[3]; // 8022DD74
  c->r[0]=c->r[4]+c->r[0]; // 8022DD78
  c->r[3]=c->r[3]+c->r[0]; // 8022DD7C
  cmps(c,0,(int32_t)c->r[3],-904); // 8022DD80
  if (crb(c,1)) { goto L_8022DD90; } // 8022DD84
  c->r[0]=0u+0x00000000u; // 8022DD88
  goto L_8022DDB8; // 8022DD8C
L_8022DD90:;
  cmps(c,0,(int32_t)c->r[3],60); // 8022DD90
  if (crb(c,0)) { goto L_8022DDA4; } // 8022DD94
  c->r[3]=0u+0x00010000u; // 8022DD98
  c->r[0]=c->r[3]+0xFFFFFF64u; // 8022DD9C
  goto L_8022DDB8; // 8022DDA0
L_8022DDA4:;
  c->r[0]=c->r[3]+0x00000388u; // 8022DDA4
  c->r[3]=0u+0x803B0000u; // 8022DDA8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8022DDAC
  c->r[3]=c->r[3]+0xFFFF8F48u; // 8022DDB0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8022DDB4
L_8022DDB8:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 8022DDB8
  c->r[0]=0u+0x00000000u; // 8022DDBC
  c->r[29]=c->r[29]|0x80000000u; // 8022DDC0
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 8022DDC4
  W16(c->r[30]+0x00000050u,c->r[0]); // 8022DDC8
  W16(c->r[30]+0x00000054u,c->r[0]); // 8022DDCC
  W16(c->r[30]+0x00000060u,c->r[0]); // 8022DDD0
L_8022DDD4:;
  c->lr=0x8022DDD8u; f_802494C0(c); // 8022DDD4
  c->r[4]=R16(c->r[30]+0x00000030u); // 8022DDD8
  c->r[0]=0u+0x00000000u; // 8022DDDC
  c->r[31]=c->r[3]|c->r[3]; // 8022DDE0
  W16(c->r[28]+0x00000092u,c->r[4]); // 8022DDE4
  c->r[3]=c->r[28]+0x0000003Eu; // 8022DDE8
  W16(c->r[28]+0x00000094u,c->r[0]); // 8022DDEC
  c->r[0]=R16(c->r[30]+0x00000034u); // 8022DDF0
  W16(c->r[28]+0x0000003Cu,c->r[0]); // 8022DDF4
  cmps(c,0,(int32_t)c->r[0],0); // 8022DDF8
  if (crb(c,2)) { goto L_8022DE04; } // 8022DDFC
  c->r[29]=c->r[29]|0x00000001u; // 8022DE00
L_8022DE04:;
  c->r[0]=0u+0x00000000u; // 8022DE04
  W16(c->r[3]+0x00000000u,c->r[0]); // 8022DE08
  c->r[0]=R16(c->r[30]+0x00000038u); // 8022DE0C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8022DE10
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE14
  if (crb(c,2)) { goto L_8022DE20; } // 8022DE18
  c->r[29]=c->r[29]|0x00000002u; // 8022DE1C
L_8022DE20:;
  c->r[0]=0u+0x00000000u; // 8022DE20
  W16(c->r[3]+0x00000004u,c->r[0]); // 8022DE24
  c->r[0]=R16(c->r[30]+0x00000040u); // 8022DE28
  W16(c->r[3]+0x00000006u,c->r[0]); // 8022DE2C
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE30
  if (crb(c,2)) { goto L_8022DE3C; } // 8022DE34
  c->r[29]=c->r[29]|0x00010000u; // 8022DE38
L_8022DE3C:;
  c->r[0]=0u+0x00000000u; // 8022DE3C
  W16(c->r[3]+0x00000008u,c->r[0]); // 8022DE40
  c->r[0]=R16(c->r[30]+0x00000044u); // 8022DE44
  W16(c->r[3]+0x0000000Au,c->r[0]); // 8022DE48
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE4C
  if (crb(c,2)) { goto L_8022DE58; } // 8022DE50
  c->r[29]=c->r[29]|0x00020000u; // 8022DE54
L_8022DE58:;
  c->r[0]=0u+0x00000000u; // 8022DE58
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 8022DE5C
  c->r[0]=R16(c->r[30]+0x0000004Cu); // 8022DE60
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 8022DE64
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE68
  if (crb(c,2)) { goto L_8022DE74; } // 8022DE6C
  c->r[29]=c->r[29]|0x00200000u; // 8022DE70
L_8022DE74:;
  c->r[0]=0u+0x00000000u; // 8022DE74
  W16(c->r[3]+0x00000010u,c->r[0]); // 8022DE78
  c->r[0]=R16(c->r[30]+0x00000050u); // 8022DE7C
  W16(c->r[3]+0x00000012u,c->r[0]); // 8022DE80
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE84
  if (crb(c,2)) { goto L_8022DE90; } // 8022DE88
  c->r[29]=c->r[29]|0x00400000u; // 8022DE8C
L_8022DE90:;
  c->r[0]=0u+0x00000000u; // 8022DE90
  W16(c->r[3]+0x00000014u,c->r[0]); // 8022DE94
  c->r[0]=R16(c->r[30]+0x00000058u); // 8022DE98
  W16(c->r[3]+0x00000016u,c->r[0]); // 8022DE9C
  cmps(c,0,(int32_t)c->r[0],0); // 8022DEA0
  if (crb(c,2)) { goto L_8022DEAC; } // 8022DEA4
  c->r[29]=c->r[29]|0x04000000u; // 8022DEA8
L_8022DEAC:;
  c->r[0]=0u+0x00000000u; // 8022DEAC
  W16(c->r[3]+0x00000018u,c->r[0]); // 8022DEB0
  c->r[0]=R16(c->r[30]+0x0000005Cu); // 8022DEB4
  W16(c->r[3]+0x0000001Au,c->r[0]); // 8022DEB8
  cmps(c,0,(int32_t)c->r[0],0); // 8022DEBC
  if (crb(c,2)) { goto L_8022DEC8; } // 8022DEC0
  c->r[29]=c->r[29]|0x08000000u; // 8022DEC4
L_8022DEC8:;
  c->r[0]=0u+0x00000000u; // 8022DEC8
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 8022DECC
  c->r[0]=R16(c->r[30]+0x0000003Cu); // 8022DED0
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 8022DED4
  cmps(c,0,(int32_t)c->r[0],0); // 8022DED8
  if (crb(c,2)) { goto L_8022DEE4; } // 8022DEDC
  c->r[29]=c->r[29]|0x00000008u; // 8022DEE0
L_8022DEE4:;
  c->r[0]=0u+0x00000000u; // 8022DEE4
  W16(c->r[3]+0x00000020u,c->r[0]); // 8022DEE8
  c->r[0]=R16(c->r[30]+0x00000048u); // 8022DEEC
  W16(c->r[3]+0x00000022u,c->r[0]); // 8022DEF0
  cmps(c,0,(int32_t)c->r[0],0); // 8022DEF4
  if (crb(c,2)) { goto L_8022DF00; } // 8022DEF8
  c->r[29]=c->r[29]|0x00080000u; // 8022DEFC
L_8022DF00:;
  c->r[0]=0u+0x00000000u; // 8022DF00
  W16(c->r[3]+0x00000024u,c->r[0]); // 8022DF04
  c->r[0]=R16(c->r[30]+0x00000054u); // 8022DF08
  W16(c->r[3]+0x00000026u,c->r[0]); // 8022DF0C
  cmps(c,0,(int32_t)c->r[0],0); // 8022DF10
  if (crb(c,2)) { goto L_8022DF1C; } // 8022DF14
  c->r[29]=c->r[29]|0x01000000u; // 8022DF18
L_8022DF1C:;
  c->r[0]=0u+0x00000000u; // 8022DF1C
  W16(c->r[3]+0x00000028u,c->r[0]); // 8022DF20
  c->r[0]=R16(c->r[30]+0x00000060u); // 8022DF24
  W16(c->r[3]+0x0000002Au,c->r[0]); // 8022DF28
  cmps(c,0,(int32_t)c->r[0],0); // 8022DF2C
  if (crb(c,2)) { goto L_8022DF38; } // 8022DF30
  c->r[29]=c->r[29]|0x20000000u; // 8022DF34
L_8022DF38:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8022DF38
  c->r[30]=0u+0x00000000u; // 8022DF3C
  W16(c->r[3]+0x0000002Cu,c->r[30]); // 8022DF40
  c->r[3]=c->r[28]+0x00000102u; // 8022DF44
  c->r[0]=c->r[0]|0x00000112u; // 8022DF48
  c->r[4]=0u+0x00000000u; // 8022DF4C
  W32(c->r[28]+0x00000034u,c->r[29]); // 8022DF50
  c->r[5]=0u+0x00000020u; // 8022DF54
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8022DF58
  c->lr=0x8022DF60u; f_80004350(c); // 8022DF5C
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8022DF60
  c->r[3]=c->r[31]|c->r[31]; // 8022DF64
  W16(c->r[28]+0x00000100u,c->r[30]); // 8022DF68
  c->r[0]=c->r[0]|0x03000000u; // 8022DF6C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8022DF70
  c->lr=0x8022DF78u; f_80249500(c); // 8022DF74
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022DF78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022DF7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022DF80
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022DF84
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022DF88
  c->lr=c->r[0]; // 8022DF8C
  c->r[1]=c->r[1]+0x00000020u; // 8022DF90
  return; // 8022DF94
}

// HBMMIXReleaseChannel
void f_8022DFA0(Ctx* __restrict c) {
  trace_call(0x8022DFA0u);
  c->r[4]=0u+0x80490000u; // 8022DFA0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022DFA4
  c->r[4]=c->r[4]+0x00001AA0u; // 8022DFA8
  c->r[3]=0u+0x80490000u; // 8022DFAC
  c->r[0]=R8(c->r[4]+c->r[0]); // 8022DFB0
  c->r[4]=0u+0x00000000u; // 8022DFB4
  c->r[3]=R32(c->r[3]+0x00001B04u); // 8022DFB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022DFBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8022DFC0
  W32(c->r[3]+c->r[0],c->r[4]); // 8022DFC4
  return; // 8022DFC8
}

// HBMMIXSetInput
void f_8022DFD0(Ctx* __restrict c) {
  trace_call(0x8022DFD0u);
  c->r[5]=0u+0x80490000u; // 8022DFD0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022DFD4
  c->r[5]=c->r[5]+0x00001AA0u; // 8022DFD8
  c->r[3]=0u+0x80490000u; // 8022DFDC
  c->r[0]=R8(c->r[5]+c->r[0]); // 8022DFE0
  c->r[3]=R32(c->r[3]+0x00001B04u); // 8022DFE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022DFE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8022DFEC
  c->r[3]=c->r[3]+c->r[0]; // 8022DFF0
  W32(c->r[3]+0x00000008u,c->r[4]); // 8022DFF4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022DFF8
  c->r[0]=c->r[0]|0x10000000u; // 8022DFFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8022E000
  return; // 8022E004
}

// HBMMIXSetAuxA
void f_8022E010(Ctx* __restrict c) {
  trace_call(0x8022E010u);
  c->r[5]=0u+0x80490000u; // 8022E010
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022E014
  c->r[5]=c->r[5]+0x00001AA0u; // 8022E018
  c->r[3]=0u+0x80490000u; // 8022E01C
  c->r[0]=R8(c->r[5]+c->r[0]); // 8022E020
  c->r[3]=R32(c->r[3]+0x00001B04u); // 8022E024
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022E028
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8022E02C
  c->r[3]=c->r[3]+c->r[0]; // 8022E030
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8022E034
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022E038
  c->r[0]=c->r[0]|0x40000000u; // 8022E03C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8022E040
  return; // 8022E044
}

// HBMMIXSetPan
void f_8022E050(Ctx* __restrict c) {
  trace_call(0x8022E050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E050
  c->r[0]=c->lr; // 8022E054
  c->r[5]=0u+0x80490000u; // 8022E058
  cmps(c,0,(int32_t)c->r[4],0); // 8022E05C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022E060
  c->r[5]=c->r[5]+0x00001AA0u; // 8022E064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022E068
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022E06C
  c->r[3]=0u+0x80490000u; // 8022E070
  c->r[3]=R32(c->r[3]+0x00001B04u); // 8022E074
  c->r[0]=R8(c->r[5]+c->r[0]); // 8022E078
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022E07C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8022E080
  c->r[31]=c->r[3]+c->r[0]; // 8022E084
  if (!crb(c,0)) { goto L_8022E094; } // 8022E088
  c->r[0]=0u+0x00000000u; // 8022E08C
  goto L_8022E0A4; // 8022E090
L_8022E094:;
  cmps(c,0,(int32_t)c->r[4],127); // 8022E094
  c->r[0]=0u+0x0000007Fu; // 8022E098
  if (crb(c,1)) { goto L_8022E0A4; } // 8022E09C
  c->r[0]=c->r[4]|c->r[4]; // 8022E0A0
L_8022E0A4:;
  W32(c->r[31]+0x00000010u,c->r[0]); // 8022E0A4
  c->r[3]=c->r[31]|c->r[31]; // 8022E0A8
  c->lr=0x8022E0B0u; f_8022D3A0(c); // 8022E0AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8022E0B0
  c->r[0]=c->r[0]|0x40000000u; // 8022E0B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8022E0B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022E0BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022E0C0
  c->lr=c->r[0]; // 8022E0C4
  c->r[1]=c->r[1]+0x00000010u; // 8022E0C8
  return; // 8022E0CC
}

// HBMMIXSetFader
void f_8022E0D0(Ctx* __restrict c) {
  trace_call(0x8022E0D0u);
  c->r[5]=0u+0x80490000u; // 8022E0D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022E0D4
  c->r[5]=c->r[5]+0x00001AA0u; // 8022E0D8
  c->r[3]=0u+0x80490000u; // 8022E0DC
  c->r[0]=R8(c->r[5]+c->r[0]); // 8022E0E0
  c->r[3]=R32(c->r[3]+0x00001B04u); // 8022E0E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022E0E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8022E0EC
  c->r[3]=c->r[3]+c->r[0]; // 8022E0F0
  W32(c->r[3]+0x00000014u,c->r[4]); // 8022E0F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022E0F8
  c->r[0]=c->r[0]|0x40000000u; // 8022E0FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8022E100
  return; // 8022E104
}

// HBMMIXUpdateSettings
void f_8022E110(Ctx* __restrict c) {
  trace_call(0x8022E110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E110
  c->r[6]=0u+0x80490000u; // 8022E114
  c->r[6]=c->r[6]+0x00001A90u; // 8022E118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022E11C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022E120
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022E124
  c->r[0]=R32(c->r[6]+0x000006B8u); // 8022E128
  cmps(c,0,(int32_t)c->r[0],0); // 8022E12C
  if (crb(c,2)) { goto L_8022EBF4; } // 8022E130
  c->r[3]=0u+0x803B0000u; // 8022E134
  c->r[8]=0u+0x00000010u; // 8022E138
  c->r[4]=c->r[3]+0xFFFF8F48u; // 8022E13C
  c->r[7]=0u+0x00000000u; // 8022E140
  c->r[5]=0u+0x00010000u; // 8022E144
  c->r[0]=0u+0x00000000u; // 8022E148
  c->r[3]=0u+0x2AAB0000u; // 8022E14C
  c->ctr=c->r[8]; // 8022E150
  c->r[0]=c->r[0]|0x00000000u; // 8022E154
L_8022E158:;
  c->r[10]=R32(c->r[6]+0x00000074u); // 8022E158
  c->r[9]=0u+0x00000000u; // 8022E15C
  {uint32_t ea=c->r[10]+c->r[7]; c->r[11]=R32(ea); c->r[10]=ea;} // 8022E160
  c->r[8]=0u+0x00000000u; // 8022E164
  cmps(c,0,(int32_t)c->r[11],0); // 8022E168
  if (crb(c,2)) { goto L_8022EBEC; } // 8022E16C
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E170
  c->r[12]=0u+0x00000000u; // 8022E174
  c->r[29]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[29]); // 8022E178
  if (crb(c,2)) { goto L_8022E198; } // 8022E17C
  c->r[29]=R16(c->r[10]+0x00000032u); // 8022E180
  c->r[9]=0u+0x00000001u; // 8022E184
  W16(c->r[10]+0x00000030u,c->r[29]); // 8022E188
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E18C
  c->r[29]=rotl(c->r[29],0)&0xDFFFFFFFu; // 8022E190
  W32(c->r[10]+0x00000004u,c->r[29]); // 8022E194
L_8022E198:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E198
  c->r[29]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[29]); // 8022E19C
  if (crb(c,2)) { goto L_8022E1EC; } // 8022E1A0
  c->r[9]=R32(c->r[10]+0x00000008u); // 8022E1A4
  cmps(c,0,(int32_t)c->r[9],-904); // 8022E1A8
  if (crb(c,1)) { goto L_8022E1B8; } // 8022E1AC
  c->r[9]=0u+0x00000000u; // 8022E1B0
  goto L_8022E1D4; // 8022E1B4
L_8022E1B8:;
  cmps(c,0,(int32_t)c->r[9],60); // 8022E1B8
  if (crb(c,0)) { goto L_8022E1C8; } // 8022E1BC
  c->r[9]=c->r[5]+0xFFFFFF64u; // 8022E1C0
  goto L_8022E1D4; // 8022E1C4
L_8022E1C8:;
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8022E1C8
  c->r[9]=c->r[4]+c->r[9]; // 8022E1CC
  c->r[9]=R16(c->r[9]+0x00000710u); // 8022E1D0
L_8022E1D4:;
  W16(c->r[10]+0x00000032u,c->r[9]); // 8022E1D4
  c->r[9]=0u+0x00000001u; // 8022E1D8
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E1DC
  c->r[29]=rotl(c->r[29],0)&0xEFFFFFFFu; // 8022E1E0
  c->r[29]=c->r[29]|0x20000000u; // 8022E1E4
  W32(c->r[10]+0x00000004u,c->r[29]); // 8022E1E8
L_8022E1EC:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E1EC
  c->r[29]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[29]); // 8022E1F0
  if (crb(c,2)) { goto L_8022E268; } // 8022E1F4
  c->r[29]=R16(c->r[10]+0x00000036u); // 8022E1F8
  c->r[8]=0u+0x00000001u; // 8022E1FC
  W16(c->r[10]+0x00000034u,c->r[29]); // 8022E200
  c->r[29]=R16(c->r[10]+0x0000003Au); // 8022E204
  W16(c->r[10]+0x00000038u,c->r[29]); // 8022E208
  c->r[29]=R16(c->r[10]+0x0000003Eu); // 8022E20C
  W16(c->r[10]+0x0000003Cu,c->r[29]); // 8022E210
  c->r[29]=R16(c->r[10]+0x00000042u); // 8022E214
  W16(c->r[10]+0x00000040u,c->r[29]); // 8022E218
  c->r[29]=R16(c->r[10]+0x00000046u); // 8022E21C
  W16(c->r[10]+0x00000044u,c->r[29]); // 8022E220
  c->r[29]=R16(c->r[10]+0x0000004Au); // 8022E224
  W16(c->r[10]+0x00000048u,c->r[29]); // 8022E228
  c->r[29]=R16(c->r[10]+0x0000004Eu); // 8022E22C
  W16(c->r[10]+0x0000004Cu,c->r[29]); // 8022E230
  c->r[29]=R16(c->r[10]+0x00000052u); // 8022E234
  W16(c->r[10]+0x00000050u,c->r[29]); // 8022E238
  c->r[29]=R16(c->r[10]+0x00000056u); // 8022E23C
  W16(c->r[10]+0x00000054u,c->r[29]); // 8022E240
  c->r[29]=R16(c->r[10]+0x0000005Au); // 8022E244
  W16(c->r[10]+0x00000058u,c->r[29]); // 8022E248
  c->r[29]=R16(c->r[10]+0x0000005Eu); // 8022E24C
  W16(c->r[10]+0x0000005Cu,c->r[29]); // 8022E250
  c->r[29]=R16(c->r[10]+0x00000062u); // 8022E254
  W16(c->r[10]+0x00000060u,c->r[29]); // 8022E258
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E25C
  c->r[29]=rotl(c->r[29],0)&0x7FFFFFFFu; // 8022E260
  W32(c->r[10]+0x00000004u,c->r[29]); // 8022E264
L_8022E268:;
  c->r[29]=R32(c->r[10]+0x00000004u); // 8022E268
  c->r[29]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[29]); // 8022E26C
  if (crb(c,2)) { goto L_8022E864; } // 8022E270
  c->r[8]=R32(c->r[6]+0x00000070u); // 8022E274
  cmps(c,0,(int32_t)c->r[8],0); // 8022E278
  if (crb(c,2)) { goto L_8022E294; } // 8022E27C
  cmpu(c,0,c->r[8],0x00000001u); // 8022E280
  if (crb(c,2)) { goto L_8022E438; } // 8022E284
  cmpu(c,0,c->r[8],0x00000002u); // 8022E288
  if (crb(c,2)) { goto L_8022E5FC; } // 8022E28C
  goto L_8022E850; // 8022E290
L_8022E294:;
  c->r[29]=R32(c->r[10]+0x00000014u); // 8022E294
  c->r[8]=R32(c->r[10]+0x00000020u); // 8022E298
  c->r[8]=c->r[29]+c->r[8]; // 8022E29C
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E2A0
  if (crb(c,1)) { goto L_8022E2B0; } // 8022E2A4
  c->r[8]=0u+0x00000000u; // 8022E2A8
  goto L_8022E2CC; // 8022E2AC
L_8022E2B0:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E2B0
  if (crb(c,0)) { goto L_8022E2C0; } // 8022E2B4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E2B8
  goto L_8022E2CC; // 8022E2BC
L_8022E2C0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E2C0
  c->r[8]=c->r[4]+c->r[8]; // 8022E2C4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E2C8
L_8022E2CC:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8022E2CC
  c->r[29]=R32(c->r[10]+0x00000014u); // 8022E2D0
  c->r[8]=R32(c->r[10]+0x00000020u); // 8022E2D4
  c->r[8]=c->r[29]+c->r[8]; // 8022E2D8
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E2DC
  if (crb(c,1)) { goto L_8022E2EC; } // 8022E2E0
  c->r[8]=0u+0x00000000u; // 8022E2E4
  goto L_8022E308; // 8022E2E8
L_8022E2EC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E2EC
  if (crb(c,0)) { goto L_8022E2FC; } // 8022E2F0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E2F4
  goto L_8022E308; // 8022E2F8
L_8022E2FC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E2FC
  c->r[8]=c->r[4]+c->r[8]; // 8022E300
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E304
L_8022E308:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8022E308
  c->r[29]=R32(c->r[10]+0x00000014u); // 8022E30C
  c->r[8]=R32(c->r[10]+0x00000024u); // 8022E310
  c->r[8]=c->r[29]+c->r[8]; // 8022E314
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8022E318
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E31C
  if (crb(c,1)) { goto L_8022E32C; } // 8022E320
  c->r[8]=0u+0x00000000u; // 8022E324
  goto L_8022E348; // 8022E328
L_8022E32C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E32C
  if (crb(c,0)) { goto L_8022E33C; } // 8022E330
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E334
  goto L_8022E348; // 8022E338
L_8022E33C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E33C
  c->r[8]=c->r[4]+c->r[8]; // 8022E340
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E344
L_8022E348:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8022E348
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E34C
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E350
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 8022E354
  c->r[8]=c->r[30]+c->r[8]; // 8022E358
  c->r[8]=c->r[29]+c->r[8]; // 8022E35C
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E360
  if (crb(c,1)) { goto L_8022E370; } // 8022E364
  c->r[8]=0u+0x00000000u; // 8022E368
  goto L_8022E38C; // 8022E36C
L_8022E370:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E370
  if (crb(c,0)) { goto L_8022E380; } // 8022E374
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E378
  goto L_8022E38C; // 8022E37C
L_8022E380:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E380
  c->r[8]=c->r[4]+c->r[8]; // 8022E384
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E388
L_8022E38C:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8022E38C
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E390
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E394
  c->r[29]=R32(c->r[10]+0x0000000Cu); // 8022E398
  c->r[8]=c->r[30]+c->r[8]; // 8022E39C
  c->r[8]=c->r[29]+c->r[8]; // 8022E3A0
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E3A4
  if (crb(c,1)) { goto L_8022E3B4; } // 8022E3A8
  c->r[8]=0u+0x00000000u; // 8022E3AC
  goto L_8022E3D0; // 8022E3B0
L_8022E3B4:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E3B4
  if (crb(c,0)) { goto L_8022E3C4; } // 8022E3B8
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E3BC
  goto L_8022E3D0; // 8022E3C0
L_8022E3C4:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E3C4
  c->r[8]=c->r[4]+c->r[8]; // 8022E3C8
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E3CC
L_8022E3D0:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8022E3D0
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E3D4
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E3D8
  c->r[29]=R32(c->r[10]+0x00000024u); // 8022E3DC
  c->r[8]=c->r[30]+c->r[8]; // 8022E3E0
  c->r[8]=c->r[8]+c->r[29]; // 8022E3E4
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8022E3E8
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E3EC
  if (crb(c,1)) { goto L_8022E3FC; } // 8022E3F0
  c->r[8]=0u+0x00000000u; // 8022E3F4
  goto L_8022E418; // 8022E3F8
L_8022E3FC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E3FC
  if (crb(c,0)) { goto L_8022E40C; } // 8022E400
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E404
  goto L_8022E418; // 8022E408
L_8022E40C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E40C
  c->r[8]=c->r[4]+c->r[8]; // 8022E410
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E414
L_8022E418:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8022E418
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8022E41C
  W16(c->r[10]+0x00000052u,c->r[0]); // 8022E420
  W16(c->r[10]+0x00000056u,c->r[0]); // 8022E424
  W16(c->r[10]+0x0000005Au,c->r[0]); // 8022E428
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 8022E42C
  W16(c->r[10]+0x00000062u,c->r[0]); // 8022E430
  goto L_8022E850; // 8022E434
L_8022E438:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E438
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E43C
  c->r[29]=R32(c->r[10]+0x00000018u); // 8022E440
  c->r[8]=c->r[30]+c->r[8]; // 8022E444
  c->r[8]=c->r[29]+c->r[8]; // 8022E448
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E44C
  if (crb(c,1)) { goto L_8022E45C; } // 8022E450
  c->r[8]=0u+0x00000000u; // 8022E454
  goto L_8022E478; // 8022E458
L_8022E45C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E45C
  if (crb(c,0)) { goto L_8022E46C; } // 8022E460
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E464
  goto L_8022E478; // 8022E468
L_8022E46C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E46C
  c->r[8]=c->r[4]+c->r[8]; // 8022E470
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E474
L_8022E478:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8022E478
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E47C
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E480
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8022E484
  c->r[8]=c->r[30]+c->r[8]; // 8022E488
  c->r[8]=c->r[29]+c->r[8]; // 8022E48C
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E490
  if (crb(c,1)) { goto L_8022E4A0; } // 8022E494
  c->r[8]=0u+0x00000000u; // 8022E498
  goto L_8022E4BC; // 8022E49C
L_8022E4A0:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E4A0
  if (crb(c,0)) { goto L_8022E4B0; } // 8022E4A4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E4A8
  goto L_8022E4BC; // 8022E4AC
L_8022E4B0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E4B0
  c->r[8]=c->r[4]+c->r[8]; // 8022E4B4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E4B8
L_8022E4BC:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8022E4BC
  c->r[29]=R32(c->r[10]+0x00000014u); // 8022E4C0
  c->r[8]=R32(c->r[10]+0x00000024u); // 8022E4C4
  c->r[8]=c->r[29]+c->r[8]; // 8022E4C8
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8022E4CC
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E4D0
  if (crb(c,1)) { goto L_8022E4E0; } // 8022E4D4
  c->r[8]=0u+0x00000000u; // 8022E4D8
  goto L_8022E4FC; // 8022E4DC
L_8022E4E0:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E4E0
  if (crb(c,0)) { goto L_8022E4F0; } // 8022E4E4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E4E8
  goto L_8022E4FC; // 8022E4EC
L_8022E4F0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E4F0
  c->r[8]=c->r[4]+c->r[8]; // 8022E4F4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E4F8
L_8022E4FC:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8022E4FC
  c->r[31]=R32(c->r[10]+0x00000020u); // 8022E500
  c->r[29]=R32(c->r[10]+0x00000018u); // 8022E504
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E508
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E50C
  c->r[29]=c->r[31]+c->r[29]; // 8022E510
  c->r[8]=c->r[30]+c->r[8]; // 8022E514
  c->r[8]=c->r[29]+c->r[8]; // 8022E518
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E51C
  if (crb(c,1)) { goto L_8022E52C; } // 8022E520
  c->r[8]=0u+0x00000000u; // 8022E524
  goto L_8022E548; // 8022E528
L_8022E52C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E52C
  if (crb(c,0)) { goto L_8022E53C; } // 8022E530
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E534
  goto L_8022E548; // 8022E538
L_8022E53C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E53C
  c->r[8]=c->r[4]+c->r[8]; // 8022E540
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E544
L_8022E548:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8022E548
  c->r[31]=R32(c->r[10]+0x00000020u); // 8022E54C
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8022E550
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E554
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E558
  c->r[29]=c->r[31]+c->r[29]; // 8022E55C
  c->r[8]=c->r[30]+c->r[8]; // 8022E560
  c->r[8]=c->r[29]+c->r[8]; // 8022E564
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E568
  if (crb(c,1)) { goto L_8022E578; } // 8022E56C
  c->r[8]=0u+0x00000000u; // 8022E570
  goto L_8022E594; // 8022E574
L_8022E578:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E578
  if (crb(c,0)) { goto L_8022E588; } // 8022E57C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E580
  goto L_8022E594; // 8022E584
L_8022E588:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E588
  c->r[8]=c->r[4]+c->r[8]; // 8022E58C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E590
L_8022E594:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8022E594
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E598
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E59C
  c->r[29]=R32(c->r[10]+0x00000024u); // 8022E5A0
  c->r[8]=c->r[30]+c->r[8]; // 8022E5A4
  c->r[8]=c->r[8]+c->r[29]; // 8022E5A8
  c->r[8]=c->r[8]+0xFFFFFFE2u; // 8022E5AC
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E5B0
  if (crb(c,1)) { goto L_8022E5C0; } // 8022E5B4
  c->r[8]=0u+0x00000000u; // 8022E5B8
  goto L_8022E5DC; // 8022E5BC
L_8022E5C0:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E5C0
  if (crb(c,0)) { goto L_8022E5D0; } // 8022E5C4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E5C8
  goto L_8022E5DC; // 8022E5CC
L_8022E5D0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E5D0
  c->r[8]=c->r[4]+c->r[8]; // 8022E5D4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E5D8
L_8022E5DC:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8022E5DC
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8022E5E0
  W16(c->r[10]+0x00000052u,c->r[0]); // 8022E5E4
  W16(c->r[10]+0x00000056u,c->r[0]); // 8022E5E8
  W16(c->r[10]+0x0000005Au,c->r[0]); // 8022E5EC
  W16(c->r[10]+0x0000005Eu,c->r[0]); // 8022E5F0
  W16(c->r[10]+0x00000062u,c->r[0]); // 8022E5F4
  goto L_8022E850; // 8022E5F8
L_8022E5FC:;
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E5FC
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E600
  c->r[29]=R32(c->r[10]+0x00000018u); // 8022E604
  c->r[8]=c->r[30]+c->r[8]; // 8022E608
  c->r[8]=c->r[29]+c->r[8]; // 8022E60C
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E610
  if (crb(c,1)) { goto L_8022E620; } // 8022E614
  c->r[8]=0u+0x00000000u; // 8022E618
  goto L_8022E63C; // 8022E61C
L_8022E620:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E620
  if (crb(c,0)) { goto L_8022E630; } // 8022E624
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E628
  goto L_8022E63C; // 8022E62C
L_8022E630:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E630
  c->r[8]=c->r[4]+c->r[8]; // 8022E634
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E638
L_8022E63C:;
  W16(c->r[10]+0x00000036u,c->r[8]); // 8022E63C
  c->r[30]=R32(c->r[10]+0x00000020u); // 8022E640
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E644
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8022E648
  c->r[8]=c->r[30]+c->r[8]; // 8022E64C
  c->r[8]=c->r[29]+c->r[8]; // 8022E650
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E654
  if (crb(c,1)) { goto L_8022E664; } // 8022E658
  c->r[8]=0u+0x00000000u; // 8022E65C
  goto L_8022E680; // 8022E660
L_8022E664:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E664
  if (crb(c,0)) { goto L_8022E674; } // 8022E668
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E66C
  goto L_8022E680; // 8022E670
L_8022E674:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E674
  c->r[8]=c->r[4]+c->r[8]; // 8022E678
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E67C
L_8022E680:;
  W16(c->r[10]+0x0000003Au,c->r[8]); // 8022E680
  c->r[30]=R32(c->r[10]+0x00000024u); // 8022E684
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E688
  c->r[29]=R32(c->r[10]+0x00000028u); // 8022E68C
  c->r[8]=c->r[30]+c->r[8]; // 8022E690
  c->r[8]=c->r[29]+c->r[8]; // 8022E694
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E698
  if (crb(c,1)) { goto L_8022E6A8; } // 8022E69C
  c->r[8]=0u+0x00000000u; // 8022E6A0
  goto L_8022E6C4; // 8022E6A4
L_8022E6A8:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E6A8
  if (crb(c,0)) { goto L_8022E6B8; } // 8022E6AC
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E6B0
  goto L_8022E6C4; // 8022E6B4
L_8022E6B8:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E6B8
  c->r[8]=c->r[4]+c->r[8]; // 8022E6BC
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E6C0
L_8022E6C4:;
  W16(c->r[10]+0x0000003Eu,c->r[8]); // 8022E6C4
  c->r[30]=R32(c->r[10]+0x00000024u); // 8022E6C8
  c->r[8]=R32(c->r[10]+0x00000014u); // 8022E6CC
  c->r[29]=R32(c->r[10]+0x0000002Cu); // 8022E6D0
  c->r[8]=c->r[30]+c->r[8]; // 8022E6D4
  c->r[8]=c->r[29]+c->r[8]; // 8022E6D8
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E6DC
  if (crb(c,1)) { goto L_8022E6EC; } // 8022E6E0
  c->r[8]=0u+0x00000000u; // 8022E6E4
  goto L_8022E708; // 8022E6E8
L_8022E6EC:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E6EC
  if (crb(c,0)) { goto L_8022E6FC; } // 8022E6F0
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E6F4
  goto L_8022E708; // 8022E6F8
L_8022E6FC:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E6FC
  c->r[8]=c->r[4]+c->r[8]; // 8022E700
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E704
L_8022E708:;
  W16(c->r[10]+0x0000005Au,c->r[8]); // 8022E708
  c->r[31]=R32(c->r[10]+0x00000020u); // 8022E70C
  c->r[29]=R32(c->r[10]+0x00000018u); // 8022E710
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E714
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E718
  c->r[29]=c->r[31]+c->r[29]; // 8022E71C
  c->r[8]=c->r[30]+c->r[8]; // 8022E720
  c->r[8]=c->r[29]+c->r[8]; // 8022E724
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E728
  if (crb(c,1)) { goto L_8022E738; } // 8022E72C
  c->r[8]=0u+0x00000000u; // 8022E730
  goto L_8022E754; // 8022E734
L_8022E738:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E738
  if (crb(c,0)) { goto L_8022E748; } // 8022E73C
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E740
  goto L_8022E754; // 8022E744
L_8022E748:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E748
  c->r[8]=c->r[4]+c->r[8]; // 8022E74C
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E750
L_8022E754:;
  W16(c->r[10]+0x00000042u,c->r[8]); // 8022E754
  c->r[31]=R32(c->r[10]+0x00000020u); // 8022E758
  c->r[29]=R32(c->r[10]+0x0000001Cu); // 8022E75C
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E760
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E764
  c->r[29]=c->r[31]+c->r[29]; // 8022E768
  c->r[8]=c->r[30]+c->r[8]; // 8022E76C
  c->r[8]=c->r[29]+c->r[8]; // 8022E770
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E774
  if (crb(c,1)) { goto L_8022E784; } // 8022E778
  c->r[8]=0u+0x00000000u; // 8022E77C
  goto L_8022E7A0; // 8022E780
L_8022E784:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E784
  if (crb(c,0)) { goto L_8022E794; } // 8022E788
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E78C
  goto L_8022E7A0; // 8022E790
L_8022E794:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E794
  c->r[8]=c->r[4]+c->r[8]; // 8022E798
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E79C
L_8022E7A0:;
  W16(c->r[10]+0x00000046u,c->r[8]); // 8022E7A0
  c->r[31]=R32(c->r[10]+0x00000024u); // 8022E7A4
  c->r[29]=R32(c->r[10]+0x00000028u); // 8022E7A8
  c->r[30]=R32(c->r[10]+0x00000014u); // 8022E7AC
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E7B0
  c->r[29]=c->r[31]+c->r[29]; // 8022E7B4
  c->r[8]=c->r[30]+c->r[8]; // 8022E7B8
  c->r[8]=c->r[29]+c->r[8]; // 8022E7BC
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E7C0
  if (crb(c,1)) { goto L_8022E7D0; } // 8022E7C4
  c->r[8]=0u+0x00000000u; // 8022E7C8
  goto L_8022E7EC; // 8022E7CC
L_8022E7D0:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E7D0
  if (crb(c,0)) { goto L_8022E7E0; } // 8022E7D4
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E7D8
  goto L_8022E7EC; // 8022E7DC
L_8022E7E0:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E7E0
  c->r[8]=c->r[4]+c->r[8]; // 8022E7E4
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E7E8
L_8022E7EC:;
  W16(c->r[10]+0x0000004Au,c->r[8]); // 8022E7EC
  c->r[29]=R32(c->r[10]+0x00000024u); // 8022E7F0
  c->r[30]=R32(c->r[10]+0x0000002Cu); // 8022E7F4
  c->r[31]=R32(c->r[10]+0x00000014u); // 8022E7F8
  c->r[8]=R32(c->r[10]+0x0000000Cu); // 8022E7FC
  c->r[30]=c->r[29]+c->r[30]; // 8022E800
  c->r[8]=c->r[31]+c->r[8]; // 8022E804
  c->r[8]=c->r[30]+c->r[8]; // 8022E808
  cmps(c,0,(int32_t)c->r[8],-904); // 8022E80C
  if (crb(c,1)) { goto L_8022E81C; } // 8022E810
  c->r[8]=0u+0x00000000u; // 8022E814
  goto L_8022E838; // 8022E818
L_8022E81C:;
  cmps(c,0,(int32_t)c->r[8],60); // 8022E81C
  if (crb(c,0)) { goto L_8022E82C; } // 8022E820
  c->r[8]=c->r[5]+0xFFFFFF64u; // 8022E824
  goto L_8022E838; // 8022E828
L_8022E82C:;
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8022E82C
  c->r[8]=c->r[4]+c->r[8]; // 8022E830
  c->r[8]=R16(c->r[8]+0x00000710u); // 8022E834
L_8022E838:;
  W16(c->r[10]+0x0000005Eu,c->r[8]); // 8022E838
  c->r[12]=c->r[12]|0x80000000u; // 8022E83C
  W16(c->r[10]+0x0000004Eu,c->r[0]); // 8022E840
  W16(c->r[10]+0x00000052u,c->r[0]); // 8022E844
  W16(c->r[10]+0x00000056u,c->r[0]); // 8022E848
  W16(c->r[10]+0x00000062u,c->r[0]); // 8022E84C
L_8022E850:;
  c->r[30]=R32(c->r[10]+0x00000004u); // 8022E850
  c->r[8]=0u+0x00000001u; // 8022E854
  c->r[30]=rotl(c->r[30],0)&0xBFFFFFFFu; // 8022E858
  c->r[30]=c->r[30]|0x80000000u; // 8022E85C
  W32(c->r[10]+0x00000004u,c->r[30]); // 8022E860
L_8022E864:;
  cmps(c,0,(int32_t)c->r[9],0); // 8022E864
  if (crb(c,2)) { goto L_8022E8A4; } // 8022E868
  c->r[9]=R16(c->r[10]+0x00000030u); // 8022E86C
  c->r[30]=c->r[3]+0xFFFFAAABu; // 8022E870
  W16(c->r[11]+0x00000092u,c->r[9]); // 8022E874
  c->r[31]=R16(c->r[10]+0x00000030u); // 8022E878
  c->r[9]=R16(c->r[10]+0x00000032u); // 8022E87C
  c->r[9]=c->r[9]-c->r[31]; // 8022E880
  c->r[9]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[9])>>32); // 8022E884
  c->r[9]=sraw(c,c->r[9],4); // 8022E888
  c->r[31]=rotl(c->r[9],1)&0x00000001u; // 8022E88C
  c->r[9]=c->r[9]+c->r[31]; // 8022E890
  W16(c->r[11]+0x00000094u,c->r[9]); // 8022E894
  c->r[9]=R32(c->r[11]+0x0000001Cu); // 8022E898
  c->r[9]=c->r[9]|0x00000100u; // 8022E89C
  W32(c->r[11]+0x0000001Cu,c->r[9]); // 8022E8A0
L_8022E8A4:;
  cmps(c,0,(int32_t)c->r[8],0); // 8022E8A4
  if (crb(c,2)) { goto L_8022EBEC; } // 8022E8A8
  c->r[8]=R16(c->r[10]+0x00000034u); // 8022E8AC
  W16(c->r[11]+0x0000003Cu,c->r[8]); // 8022E8B0
  cmps(c,0,(int32_t)c->r[8],0); // 8022E8B4
  if (crb(c,2)) { goto L_8022E8C0; } // 8022E8B8
  c->r[12]=c->r[12]|0x00000001u; // 8022E8BC
L_8022E8C0:;
  c->r[9]=R16(c->r[10]+0x00000034u); // 8022E8C0
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022E8C4
  c->r[8]=R16(c->r[10]+0x00000036u); // 8022E8C8
  c->r[8]=c->r[8]-c->r[9]; // 8022E8CC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022E8D0
  c->r[8]=sraw(c,c->r[8],4); // 8022E8D4
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022E8D8
  c->r[8]=c->r[8]+c->r[9]; // 8022E8DC
  W16(c->r[11]+0x0000003Eu,c->r[8]); // 8022E8E0
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022E8E4
  if (crb(c,2)) { goto L_8022E8F0; } // 8022E8E8
  c->r[12]=c->r[12]|0x00000004u; // 8022E8EC
L_8022E8F0:;
  c->r[8]=R16(c->r[10]+0x00000038u); // 8022E8F0
  W16(c->r[11]+0x00000040u,c->r[8]); // 8022E8F4
  cmps(c,0,(int32_t)c->r[8],0); // 8022E8F8
  if (crb(c,2)) { goto L_8022E904; } // 8022E8FC
  c->r[12]=c->r[12]|0x00000002u; // 8022E900
L_8022E904:;
  c->r[9]=R16(c->r[10]+0x00000038u); // 8022E904
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022E908
  c->r[8]=R16(c->r[10]+0x0000003Au); // 8022E90C
  c->r[8]=c->r[8]-c->r[9]; // 8022E910
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022E914
  c->r[8]=sraw(c,c->r[8],4); // 8022E918
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022E91C
  c->r[8]=c->r[8]+c->r[9]; // 8022E920
  W16(c->r[11]+0x00000042u,c->r[8]); // 8022E924
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022E928
  if (crb(c,2)) { goto L_8022E934; } // 8022E92C
  c->r[12]=c->r[12]|0x00000004u; // 8022E930
L_8022E934:;
  c->r[8]=R16(c->r[10]+0x00000040u); // 8022E934
  W16(c->r[11]+0x00000044u,c->r[8]); // 8022E938
  cmps(c,0,(int32_t)c->r[8],0); // 8022E93C
  if (crb(c,2)) { goto L_8022E948; } // 8022E940
  c->r[12]=c->r[12]|0x00010000u; // 8022E944
L_8022E948:;
  c->r[9]=R16(c->r[10]+0x00000040u); // 8022E948
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022E94C
  c->r[8]=R16(c->r[10]+0x00000042u); // 8022E950
  c->r[8]=c->r[8]-c->r[9]; // 8022E954
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022E958
  c->r[8]=sraw(c,c->r[8],4); // 8022E95C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022E960
  c->r[8]=c->r[8]+c->r[9]; // 8022E964
  W16(c->r[11]+0x00000046u,c->r[8]); // 8022E968
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022E96C
  if (crb(c,2)) { goto L_8022E978; } // 8022E970
  c->r[12]=c->r[12]|0x00040000u; // 8022E974
L_8022E978:;
  c->r[8]=R16(c->r[10]+0x00000044u); // 8022E978
  W16(c->r[11]+0x00000048u,c->r[8]); // 8022E97C
  cmps(c,0,(int32_t)c->r[8],0); // 8022E980
  if (crb(c,2)) { goto L_8022E98C; } // 8022E984
  c->r[12]=c->r[12]|0x00020000u; // 8022E988
L_8022E98C:;
  c->r[9]=R16(c->r[10]+0x00000044u); // 8022E98C
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022E990
  c->r[8]=R16(c->r[10]+0x00000046u); // 8022E994
  c->r[8]=c->r[8]-c->r[9]; // 8022E998
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022E99C
  c->r[8]=sraw(c,c->r[8],4); // 8022E9A0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022E9A4
  c->r[8]=c->r[8]+c->r[9]; // 8022E9A8
  W16(c->r[11]+0x0000004Au,c->r[8]); // 8022E9AC
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022E9B0
  if (crb(c,2)) { goto L_8022E9BC; } // 8022E9B4
  c->r[12]=c->r[12]|0x00040000u; // 8022E9B8
L_8022E9BC:;
  c->r[8]=R16(c->r[10]+0x0000004Cu); // 8022E9BC
  W16(c->r[11]+0x0000004Cu,c->r[8]); // 8022E9C0
  cmps(c,0,(int32_t)c->r[8],0); // 8022E9C4
  if (crb(c,2)) { goto L_8022E9D0; } // 8022E9C8
  c->r[12]=c->r[12]|0x00200000u; // 8022E9CC
L_8022E9D0:;
  c->r[9]=R16(c->r[10]+0x0000004Cu); // 8022E9D0
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022E9D4
  c->r[8]=R16(c->r[10]+0x0000004Eu); // 8022E9D8
  c->r[8]=c->r[8]-c->r[9]; // 8022E9DC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022E9E0
  c->r[8]=sraw(c,c->r[8],4); // 8022E9E4
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022E9E8
  c->r[8]=c->r[8]+c->r[9]; // 8022E9EC
  W16(c->r[11]+0x0000004Eu,c->r[8]); // 8022E9F0
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022E9F4
  if (crb(c,2)) { goto L_8022EA00; } // 8022E9F8
  c->r[12]=c->r[12]|0x00800000u; // 8022E9FC
L_8022EA00:;
  c->r[8]=R16(c->r[10]+0x00000050u); // 8022EA00
  W16(c->r[11]+0x00000050u,c->r[8]); // 8022EA04
  cmps(c,0,(int32_t)c->r[8],0); // 8022EA08
  if (crb(c,2)) { goto L_8022EA14; } // 8022EA0C
  c->r[12]=c->r[12]|0x00400000u; // 8022EA10
L_8022EA14:;
  c->r[9]=R16(c->r[10]+0x00000050u); // 8022EA14
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EA18
  c->r[8]=R16(c->r[10]+0x00000052u); // 8022EA1C
  c->r[8]=c->r[8]-c->r[9]; // 8022EA20
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EA24
  c->r[8]=sraw(c,c->r[8],4); // 8022EA28
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EA2C
  c->r[8]=c->r[8]+c->r[9]; // 8022EA30
  W16(c->r[11]+0x00000052u,c->r[8]); // 8022EA34
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EA38
  if (crb(c,2)) { goto L_8022EA44; } // 8022EA3C
  c->r[12]=c->r[12]|0x00800000u; // 8022EA40
L_8022EA44:;
  c->r[8]=R16(c->r[10]+0x00000058u); // 8022EA44
  W16(c->r[11]+0x00000054u,c->r[8]); // 8022EA48
  cmps(c,0,(int32_t)c->r[8],0); // 8022EA4C
  if (crb(c,2)) { goto L_8022EA58; } // 8022EA50
  c->r[12]=c->r[12]|0x04000000u; // 8022EA54
L_8022EA58:;
  c->r[9]=R16(c->r[10]+0x00000058u); // 8022EA58
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EA5C
  c->r[8]=R16(c->r[10]+0x0000005Au); // 8022EA60
  c->r[8]=c->r[8]-c->r[9]; // 8022EA64
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EA68
  c->r[8]=sraw(c,c->r[8],4); // 8022EA6C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EA70
  c->r[8]=c->r[8]+c->r[9]; // 8022EA74
  W16(c->r[11]+0x00000056u,c->r[8]); // 8022EA78
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EA7C
  if (crb(c,2)) { goto L_8022EA88; } // 8022EA80
  c->r[12]=c->r[12]|0x10000000u; // 8022EA84
L_8022EA88:;
  c->r[8]=R16(c->r[10]+0x0000005Cu); // 8022EA88
  W16(c->r[11]+0x00000058u,c->r[8]); // 8022EA8C
  cmps(c,0,(int32_t)c->r[8],0); // 8022EA90
  if (crb(c,2)) { goto L_8022EA9C; } // 8022EA94
  c->r[12]=c->r[12]|0x08000000u; // 8022EA98
L_8022EA9C:;
  c->r[9]=R16(c->r[10]+0x0000005Cu); // 8022EA9C
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EAA0
  c->r[8]=R16(c->r[10]+0x0000005Eu); // 8022EAA4
  c->r[8]=c->r[8]-c->r[9]; // 8022EAA8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EAAC
  c->r[8]=sraw(c,c->r[8],4); // 8022EAB0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EAB4
  c->r[8]=c->r[8]+c->r[9]; // 8022EAB8
  W16(c->r[11]+0x0000005Au,c->r[8]); // 8022EABC
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EAC0
  if (crb(c,2)) { goto L_8022EACC; } // 8022EAC4
  c->r[12]=c->r[12]|0x10000000u; // 8022EAC8
L_8022EACC:;
  c->r[8]=R16(c->r[10]+0x0000003Cu); // 8022EACC
  W16(c->r[11]+0x0000005Cu,c->r[8]); // 8022EAD0
  cmps(c,0,(int32_t)c->r[8],0); // 8022EAD4
  if (crb(c,2)) { goto L_8022EAE0; } // 8022EAD8
  c->r[12]=c->r[12]|0x00000008u; // 8022EADC
L_8022EAE0:;
  c->r[9]=R16(c->r[10]+0x0000003Cu); // 8022EAE0
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EAE4
  c->r[8]=R16(c->r[10]+0x0000003Eu); // 8022EAE8
  c->r[8]=c->r[8]-c->r[9]; // 8022EAEC
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EAF0
  c->r[8]=sraw(c,c->r[8],4); // 8022EAF4
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EAF8
  c->r[8]=c->r[8]+c->r[9]; // 8022EAFC
  W16(c->r[11]+0x0000005Eu,c->r[8]); // 8022EB00
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EB04
  if (crb(c,2)) { goto L_8022EB10; } // 8022EB08
  c->r[12]=c->r[12]|0x00000010u; // 8022EB0C
L_8022EB10:;
  c->r[8]=R16(c->r[10]+0x00000048u); // 8022EB10
  W16(c->r[11]+0x00000060u,c->r[8]); // 8022EB14
  cmps(c,0,(int32_t)c->r[8],0); // 8022EB18
  if (crb(c,2)) { goto L_8022EB24; } // 8022EB1C
  c->r[12]=c->r[12]|0x00080000u; // 8022EB20
L_8022EB24:;
  c->r[9]=R16(c->r[10]+0x00000048u); // 8022EB24
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EB28
  c->r[8]=R16(c->r[10]+0x0000004Au); // 8022EB2C
  c->r[8]=c->r[8]-c->r[9]; // 8022EB30
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EB34
  c->r[8]=sraw(c,c->r[8],4); // 8022EB38
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EB3C
  c->r[8]=c->r[8]+c->r[9]; // 8022EB40
  W16(c->r[11]+0x00000062u,c->r[8]); // 8022EB44
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EB48
  if (crb(c,2)) { goto L_8022EB54; } // 8022EB4C
  c->r[12]=c->r[12]|0x00100000u; // 8022EB50
L_8022EB54:;
  c->r[8]=R16(c->r[10]+0x00000054u); // 8022EB54
  W16(c->r[11]+0x00000064u,c->r[8]); // 8022EB58
  cmps(c,0,(int32_t)c->r[8],0); // 8022EB5C
  if (crb(c,2)) { goto L_8022EB68; } // 8022EB60
  c->r[12]=c->r[12]|0x01000000u; // 8022EB64
L_8022EB68:;
  c->r[9]=R16(c->r[10]+0x00000054u); // 8022EB68
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EB6C
  c->r[8]=R16(c->r[10]+0x00000056u); // 8022EB70
  c->r[8]=c->r[8]-c->r[9]; // 8022EB74
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EB78
  c->r[8]=sraw(c,c->r[8],4); // 8022EB7C
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EB80
  c->r[8]=c->r[8]+c->r[9]; // 8022EB84
  W16(c->r[11]+0x00000066u,c->r[8]); // 8022EB88
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EB8C
  if (crb(c,2)) { goto L_8022EB98; } // 8022EB90
  c->r[12]=c->r[12]|0x02000000u; // 8022EB94
L_8022EB98:;
  c->r[8]=R16(c->r[10]+0x00000060u); // 8022EB98
  W16(c->r[11]+0x00000068u,c->r[8]); // 8022EB9C
  cmps(c,0,(int32_t)c->r[8],0); // 8022EBA0
  if (crb(c,2)) { goto L_8022EBAC; } // 8022EBA4
  c->r[12]=c->r[12]|0x20000000u; // 8022EBA8
L_8022EBAC:;
  c->r[9]=R16(c->r[10]+0x00000060u); // 8022EBAC
  c->r[31]=c->r[3]+0xFFFFAAABu; // 8022EBB0
  c->r[8]=R16(c->r[10]+0x00000062u); // 8022EBB4
  c->r[8]=c->r[8]-c->r[9]; // 8022EBB8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[8])>>32); // 8022EBBC
  c->r[8]=sraw(c,c->r[8],4); // 8022EBC0
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8022EBC4
  c->r[8]=c->r[8]+c->r[9]; // 8022EBC8
  W16(c->r[11]+0x0000006Au,c->r[8]); // 8022EBCC
  c->r[8]=rotl(c->r[8],0)&0x0000FFFFu; cr0(c,c->r[8]); // 8022EBD0
  if (crb(c,2)) { goto L_8022EBDC; } // 8022EBD4
  c->r[12]=c->r[12]|0x40000000u; // 8022EBD8
L_8022EBDC:;
  W32(c->r[11]+0x00000034u,c->r[12]); // 8022EBDC
  c->r[8]=R32(c->r[11]+0x0000001Cu); // 8022EBE0
  c->r[8]=c->r[8]|0x00000012u; // 8022EBE4
  W32(c->r[11]+0x0000001Cu,c->r[8]); // 8022EBE8
L_8022EBEC:;
  c->r[7]=c->r[7]+0x00000064u; // 8022EBEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8022E158; } // 8022EBF0
L_8022EBF4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022EBF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022EBF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022EBFC
  c->r[1]=c->r[1]+0x00000020u; // 8022EC00
  return; // 8022EC04
}

// HBMAllocIndex
void f_8022EC10(Ctx* __restrict c) {
  trace_call(0x8022EC10u);
  c->r[4]=0u+0x80490000u; // 8022EC10
  c->r[0]=0u+0x00000010u; // 8022EC14
  c->r[4]=c->r[4]+0x00001A90u; // 8022EC18
  c->r[6]=0u+0x00000000u; // 8022EC1C
  c->ctr=c->r[0]; // 8022EC20
  c->r[0]=c->r[0]|0x00000000u; // 8022EC24
L_8022EC28:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8022EC28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8022EC2C
  if (!crb(c,0)) { goto L_8022EC54; } // 8022EC30
  c->r[5]=0u+0x80490000u; // 8022EC34
  c->r[4]=0u+0x80490000u; // 8022EC38
  c->r[5]=c->r[5]+0x00001A90u; // 8022EC3C
  c->r[4]=c->r[4]+0x00001AA0u; // 8022EC40
  W8(c->r[5]+c->r[6],c->r[3]); // 8022EC44
  W8(c->r[4]+c->r[3],c->r[6]); // 8022EC48
  c->r[3]=c->r[6]|c->r[6]; // 8022EC4C
  return; // 8022EC50
L_8022EC54:;
  c->r[4]=c->r[4]+0x00000001u; // 8022EC54
  c->r[6]=c->r[6]+0x00000001u; // 8022EC58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8022EC28; } // 8022EC5C
  c->r[3]=0u+0xFFFFFFFFu; // 8022EC60
  return; // 8022EC64
}

// HBMGetIndex
void f_8022EC70(Ctx* __restrict c) {
  trace_call(0x8022EC70u);
  c->r[4]=0u+0x80490000u; // 8022EC70
  c->r[4]=c->r[4]+0x00001AA0u; // 8022EC74
  c->r[3]=R8(c->r[4]+c->r[3]); // 8022EC78
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8022EC7C
  return; // 8022EC80
}

