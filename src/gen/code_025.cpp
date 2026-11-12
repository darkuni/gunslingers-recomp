#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GXInitLightAttn
void f_80209DE0(Ctx* __restrict c) {
  trace_call(0x80209DE0u);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80209DE0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80209DE4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 80209DE8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 80209DEC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 80209DF0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[6]);} // 80209DF4
  return; // 80209DF8
}

// GXInitLightAttnA
void f_80209E00(Ctx* __restrict c) {
  trace_call(0x80209E00u);
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80209E00
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 80209E04
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 80209E08
  return; // 80209E0C
}

// fn_80209E10
void f_80209E10(Ctx* __restrict c) {
  trace_call(0x80209E10u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209E10
  c->r[0]=c->lr; // 80209E14
  c->f[6]=-c->f[3]; // 80209E18
  {uint32_t ea=c->r[2]+0xFFFFB0BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80209E1C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80209E20
  {uint32_t ea=c->r[2]+0xFFFFB0B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80209E24
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80209E28
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80209E2C
  c->f[31]=-c->f[1]; // 80209E30
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80209E34
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[31]); // 80209E38
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80209E3C
  c->f[30]=-c->f[2]; // 80209E40
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80209E44
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80209E48
  c->f[29]=c->ps1[29]=S(c->f[4]+c->f[6]); // 80209E4C
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[30]); // 80209E50
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 80209E54
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[29]); // 80209E58
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 80209E5C
  c->f[28]=c->f[3]; // 80209E60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 80209E64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 80209E68
  c->f[27]=c->f[2]; // 80209E6C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[26]);} // 80209E70
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,26,ea,0,0);} // 80209E74
  c->f[26]=c->f[1]; // 80209E78
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[4]); // 80209E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80209E80
  c->r[31]=c->r[3]|c->r[3]; // 80209E84
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 80209E88
  fcmp(c,0,c->f[0],c->f[1]); // 80209E8C
  if (crb(c,2)) { goto L_80209EA4; } // 80209E90
  c->lr=0x80209E98u; f_800D2C14(c); // 80209E94
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80209E98
  {uint32_t ea=c->r[2]+0xFFFFB0BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80209E9C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80209EA0
L_80209EA4:;
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 80209EA4
  {uint32_t ea=c->r[2]+0xFFFFB0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80209EA8
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[1]); // 80209EAC
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[1]); // 80209EB0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 80209EB4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[26]); // 80209EB8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[27]); // 80209EBC
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[4]);} // 80209EC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 80209EC4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 80209EC8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 80209ECC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 80209ED0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80209ED4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80209ED8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80209EDC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80209EE0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80209EE4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80209EE8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80209EEC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 80209EF0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 80209EF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 80209EF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 80209EFC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,26,ea,0,0);} // 80209F00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[26]=RF64(ea);} // 80209F04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80209F08
  c->r[0]=R32(c->r[1]+0x00000074u); // 80209F0C
  c->lr=c->r[0]; // 80209F10
  c->r[1]=c->r[1]+0x00000070u; // 80209F14
  return; // 80209F18
}

// fn_80209F20
void f_80209F20(Ctx* __restrict c) {
  trace_call(0x80209F20u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 80209F20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80209F24
  return; // 80209F28
}

// fn_80209F30
void f_80209F30(Ctx* __restrict c) {
  trace_call(0x80209F30u);
  c->r[0]=cntlz(c->r[4]); // 80209F30
  c->r[4]=0u+0xCC010000u; // 80209F34
  c->r[5]=addc(c,~c->r[0],0x0000001Fu,1); // 80209F38
  c->r[5]=rotl(c->r[5],4)&0x00000070u; // 80209F3C
  c->r[0]=0u+0x00000010u; // 80209F40
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80209F44
  c->r[0]=c->r[5]+0x00000600u; // 80209F48
  c->r[0]=c->r[0]|0x000F0000u; // 80209F4C
  c->r[5]=c->r[4]+0xFFFF8000u; // 80209F50
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80209F54
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80209F58
  c->r[6]=c->r[6]^c->r[6]; // 80209F5C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,5,ea,0,0);} // 80209F60
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,4,ea,0,0);} // 80209F64
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,3,ea,0,0);} // 80209F68
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,2,ea,0,0);} // 80209F6C
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 80209F70
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 80209F74
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80209F78
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80209F7C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80209F80
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80209F84
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,5,ea,0,0);} // 80209F88
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,4,ea,0,0);} // 80209F8C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,3,ea,0,0);} // 80209F90
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 80209F94
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 80209F98
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80209F9C
  c->r[0]=0u+0x00000001u; // 80209FA0
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 80209FA4
  W16(c->r[3]+0x00000002u,c->r[0]); // 80209FA8
  return; // 80209FAC
}

// fn_80209FB0
void f_80209FB0(Ctx* __restrict c) {
  trace_call(0x80209FB0u);
  cmps(c,0,(int32_t)c->r[3],0); // 80209FB0
  if (crb(c,2)) { goto L_80209FE4; } // 80209FB4
  cmps(c,0,(int32_t)c->r[3],1); // 80209FB8
  if (crb(c,2)) { goto L_80209FFC; } // 80209FBC
  cmps(c,0,(int32_t)c->r[3],2); // 80209FC0
  if (crb(c,2)) { goto L_8020A014; } // 80209FC4
  cmps(c,0,(int32_t)c->r[3],3); // 80209FC8
  if (crb(c,2)) { goto L_8020A02C; } // 80209FCC
  cmps(c,0,(int32_t)c->r[3],4); // 80209FD0
  if (crb(c,2)) { goto L_8020A044; } // 80209FD4
  cmps(c,0,(int32_t)c->r[3],5); // 80209FD8
  if (crb(c,2)) { goto L_8020A050; } // 80209FDC
  return; // 80209FE0
L_80209FE4:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 80209FE4
  c->r[8]=0u+0x00000000u; // 80209FE8
  c->r[0]=R32(c->r[4]+0x00000000u); // 80209FEC
  c->r[7]=R32(c->r[3]+0x000000A8u); // 80209FF0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 80209FF4
  goto L_8020A060; // 80209FF8
L_80209FFC:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 80209FFC
  c->r[8]=0u+0x00000001u; // 8020A000
  c->r[0]=R32(c->r[4]+0x00000000u); // 8020A004
  c->r[7]=R32(c->r[3]+0x000000ACu); // 8020A008
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 8020A00C
  goto L_8020A060; // 8020A010
L_8020A014:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A014
  c->r[8]=0u+0x00000000u; // 8020A018
  c->r[0]=R8(c->r[4]+0x00000003u); // 8020A01C
  c->r[7]=R32(c->r[3]+0x000000A8u); // 8020A020
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020A024
  goto L_8020A060; // 8020A028
L_8020A02C:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A02C
  c->r[8]=0u+0x00000001u; // 8020A030
  c->r[0]=R8(c->r[4]+0x00000003u); // 8020A034
  c->r[7]=R32(c->r[3]+0x000000ACu); // 8020A038
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020A03C
  goto L_8020A060; // 8020A040
L_8020A044:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8020A044
  c->r[8]=0u+0x00000000u; // 8020A048
  goto L_8020A060; // 8020A04C
L_8020A050:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8020A050
  c->r[8]=0u+0x00000001u; // 8020A054
  goto L_8020A060; // 8020A058
  return; // 8020A05C
L_8020A060:;
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020A060
  c->r[3]=0u+0x00000100u; // 8020A064
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8020A068
  c->r[5]=R32(c->r[6]+0x000005FCu); // 8020A06C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 8020A070
  c->r[3]=c->r[6]+c->r[0]; // 8020A074
  c->r[0]=c->r[5]|c->r[4]; // 8020A078
  W32(c->r[6]+0x000005FCu,c->r[0]); // 8020A07C
  W32(c->r[3]+0x000000A8u,c->r[7]); // 8020A080
  return; // 8020A084
}

// fn_8020A090
void f_8020A090(Ctx* __restrict c) {
  trace_call(0x8020A090u);
  cmps(c,0,(int32_t)c->r[3],0); // 8020A090
  if (crb(c,2)) { goto L_8020A0C4; } // 8020A094
  cmps(c,0,(int32_t)c->r[3],1); // 8020A098
  if (crb(c,2)) { goto L_8020A0DC; } // 8020A09C
  cmps(c,0,(int32_t)c->r[3],2); // 8020A0A0
  if (crb(c,2)) { goto L_8020A0F4; } // 8020A0A4
  cmps(c,0,(int32_t)c->r[3],3); // 8020A0A8
  if (crb(c,2)) { goto L_8020A10C; } // 8020A0AC
  cmps(c,0,(int32_t)c->r[3],4); // 8020A0B0
  if (crb(c,2)) { goto L_8020A124; } // 8020A0B4
  cmps(c,0,(int32_t)c->r[3],5); // 8020A0B8
  if (crb(c,2)) { goto L_8020A130; } // 8020A0BC
  return; // 8020A0C0
L_8020A0C4:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A0C4
  c->r[8]=0u+0x00000000u; // 8020A0C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8020A0CC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 8020A0D0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 8020A0D4
  goto L_8020A140; // 8020A0D8
L_8020A0DC:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A0DC
  c->r[8]=0u+0x00000001u; // 8020A0E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8020A0E4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 8020A0E8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 8020A0EC
  goto L_8020A140; // 8020A0F0
L_8020A0F4:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A0F4
  c->r[8]=0u+0x00000000u; // 8020A0F8
  c->r[0]=R8(c->r[4]+0x00000003u); // 8020A0FC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 8020A100
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020A104
  goto L_8020A140; // 8020A108
L_8020A10C:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020A10C
  c->r[8]=0u+0x00000001u; // 8020A110
  c->r[0]=R8(c->r[4]+0x00000003u); // 8020A114
  c->r[7]=R32(c->r[3]+0x000000B4u); // 8020A118
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020A11C
  goto L_8020A140; // 8020A120
L_8020A124:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8020A124
  c->r[8]=0u+0x00000000u; // 8020A128
  goto L_8020A140; // 8020A12C
L_8020A130:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8020A130
  c->r[8]=0u+0x00000001u; // 8020A134
  goto L_8020A140; // 8020A138
  return; // 8020A13C
L_8020A140:;
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020A140
  c->r[3]=0u+0x00000400u; // 8020A144
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8020A148
  c->r[5]=R32(c->r[6]+0x000005FCu); // 8020A14C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 8020A150
  c->r[3]=c->r[6]+c->r[0]; // 8020A154
  c->r[0]=c->r[5]|c->r[4]; // 8020A158
  W32(c->r[6]+0x000005FCu,c->r[0]); // 8020A15C
  W32(c->r[3]+0x000000B0u,c->r[7]); // 8020A160
  return; // 8020A164
}

// GXSetNumChans
void f_8020A170(Ctx* __restrict c) {
  trace_call(0x8020A170u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020A170
  c->r[0]=R32(c->r[4]+0x00000254u); // 8020A174
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 8020A178
  W32(c->r[4]+0x00000254u,c->r[0]); // 8020A17C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8020A180
  c->r[0]=c->r[0]|0x01000000u; // 8020A184
  c->r[0]=c->r[0]|0x00000004u; // 8020A188
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8020A18C
  return; // 8020A190
}

// GXSetChanCtrl
void f_8020A1A0(Ctx* __restrict c) {
  trace_call(0x8020A1A0u);
  cmps(c,0,(int32_t)c->r[9],0); // 8020A1A0
  c->r[10]=0u+0x00000000u; // 8020A1A4
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 8020A1A8
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 8020A1AC
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 8020A1B0
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 8020A1B4
  if (!crb(c,2)) { goto L_8020A1C0; } // 8020A1B8
  c->r[8]=0u+0x00000000u; // 8020A1BC
L_8020A1C0:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 8020A1C0
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 8020A1C4
  c->r[4]=c->r[5]|c->r[4]; // 8020A1C8
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020A1CC
  c->r[0]=0u-c->r[9]; // 8020A1D0
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 8020A1D4
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 8020A1D8
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 8020A1DC
  c->r[0]=c->r[0]|c->r[9]; // 8020A1E0
  cmps(c,0,(int32_t)c->r[3],4); // 8020A1E4
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 8020A1E8
  c->r[4]=c->r[5]+c->r[4]; // 8020A1EC
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 8020A1F0
  c->r[0]=0u+0x00001000u; // 8020A1F4
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 8020A1F8
  W32(c->r[4]+0x000000B8u,c->r[10]); // 8020A1FC
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 8020A200
  c->r[4]=R32(c->r[5]+0x000005FCu); // 8020A204
  c->r[0]=c->r[4]|c->r[0]; // 8020A208
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8020A20C
  if (!crb(c,2)) { goto L_8020A228; } // 8020A210
  W32(c->r[5]+0x000000C0u,c->r[10]); // 8020A214
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8020A218
  c->r[0]=c->r[0]|0x00005000u; // 8020A21C
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8020A220
  return; // 8020A224
L_8020A228:;
  cmps(c,0,(int32_t)c->r[3],5); // 8020A228
  if (!crb(c,2)) return; // 8020A22C
  W32(c->r[5]+0x000000C4u,c->r[10]); // 8020A230
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8020A234
  c->r[0]=c->r[0]|0x0000A000u; // 8020A238
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8020A23C
  return; // 8020A240
}

// __GetImageTileCount
void f_8020A250(Ctx* __restrict c) {
  trace_call(0x8020A250u);
  cmpu(c,0,c->r[3],0x0000003Cu); // 8020A250
  if (crb(c,1)) { goto L_8020A294; } // 8020A254
  c->r[9]=0u+0x803A0000u; // 8020A258
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020A25C
  c->r[9]=c->r[9]+0x00005F88u; // 8020A260
  c->r[9]=R32(c->r[9]+c->r[0]); // 8020A264
  c->ctr=c->r[9]; // 8020A268
  if (true) { switch (c->ctr) { case 0x8020A270u: goto L_8020A270; case 0x8020A27Cu: goto L_8020A27C; case 0x8020A288u: goto L_8020A288; case 0x8020A294u: goto L_8020A294; default: break; } dispatch(c,c->ctr); return; } // 8020A26C
L_8020A270:;
  c->r[11]=0u+0x00000003u; // 8020A270
  c->r[12]=0u+0x00000003u; // 8020A274
  goto L_8020A29C; // 8020A278
L_8020A27C:;
  c->r[11]=0u+0x00000003u; // 8020A27C
  c->r[12]=0u+0x00000002u; // 8020A280
  goto L_8020A29C; // 8020A284
L_8020A288:;
  c->r[11]=0u+0x00000002u; // 8020A288
  c->r[12]=0u+0x00000002u; // 8020A28C
  goto L_8020A29C; // 8020A290
L_8020A294:;
  c->r[12]=0u+0x00000000u; // 8020A294
  c->r[11]=0u+0x00000000u; // 8020A298
L_8020A29C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8020A29C
  if (!crb(c,2)) { goto L_8020A2A8; } // 8020A2A0
  c->r[4]=0u+0x00000001u; // 8020A2A4
L_8020A2A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8020A2A8
  if (!crb(c,2)) { goto L_8020A2B4; } // 8020A2AC
  c->r[5]=0u+0x00000001u; // 8020A2B0
L_8020A2B4:;
  c->r[10]=0u+0x00000001u; // 8020A2B4
  cmps(c,0,(int32_t)c->r[3],6); // 8020A2B8
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 8020A2BC
  c->r[9]=0u+0x00000000u; // 8020A2C0
  c->r[4]=c->r[4]+c->r[0]; // 8020A2C4
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 8020A2C8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8020A2CC
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 8020A2D0
  W32(c->r[6]+0x00000000u,c->r[10]); // 8020A2D4
  c->r[4]=c->r[5]+c->r[0]; // 8020A2D8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8020A2DC
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 8020A2E0
  W32(c->r[7]+0x00000000u,c->r[0]); // 8020A2E4
  if (crb(c,2)) { goto L_8020A2F4; } // 8020A2E8
  cmps(c,0,(int32_t)c->r[3],22); // 8020A2EC
  if (!crb(c,2)) { goto L_8020A2F8; } // 8020A2F0
L_8020A2F4:;
  c->r[9]=0u+0x00000001u; // 8020A2F4
L_8020A2F8:;
  c->r[0]=0u-c->r[9]; // 8020A2F8
  c->r[0]=c->r[0]|c->r[9]; // 8020A2FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020A300
  c->r[0]=c->r[3]+0x00000001u; // 8020A304
  W32(c->r[8]+0x00000000u,c->r[0]); // 8020A308
  return; // 8020A30C
}

// GXInitTexObj
void f_8020A310(Ctx* __restrict c) {
  trace_call(0x8020A310u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A310
  c->r[0]=c->lr; // 8020A314
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020A318
  c->r[11]=c->r[1]+0x00000040u; // 8020A31C
  c->lr=0x8020A324u; f_800C2E40(c); // 8020A320
  c->r[27]=c->r[4]|c->r[4]; // 8020A324
  c->r[28]=c->r[5]|c->r[5]; // 8020A328
  c->r[31]=c->r[3]|c->r[3]; // 8020A32C
  c->r[29]=c->r[6]|c->r[6]; // 8020A330
  c->r[30]=c->r[7]|c->r[7]; // 8020A334
  c->r[24]=c->r[8]|c->r[8]; // 8020A338
  c->r[25]=c->r[9]|c->r[9]; // 8020A33C
  c->r[26]=c->r[10]|c->r[10]; // 8020A340
  c->r[4]=0u+0x00000000u; // 8020A344
  c->r[5]=0u+0x00000020u; // 8020A348
  c->lr=0x8020A350u; f_80004350(c); // 8020A34C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020A350
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 8020A354
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 8020A358
  cmps(c,0,(int32_t)c->r[26],0); // 8020A35C
  c->r[4]=c->r[0]|0x00000010u; // 8020A360
  W32(c->r[31]+0x00000000u,c->r[4]); // 8020A364
  if (crb(c,2)) { goto L_8020A3F8; } // 8020A368
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 8020A36C
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 8020A370
  cmpu(c,0,c->r[0],0x00000002u); // 8020A374
  c->r[0]=c->r[3]|0x00000001u; // 8020A378
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 8020A37C
  if (crb(c,1)) { goto L_8020A394; } // 8020A380
  c->r[0]=0u+0x00000005u; // 8020A384
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8020A388
  W32(c->r[31]+0x00000000u,c->r[4]); // 8020A38C
  goto L_8020A3A0; // 8020A390
L_8020A394:;
  c->r[0]=0u+0x00000006u; // 8020A394
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8020A398
  W32(c->r[31]+0x00000000u,c->r[4]); // 8020A39C
L_8020A3A0:;
  cmpu(c,0,c->r[28],c->r[29]); // 8020A3A0
  if (!crb(c,1)) { goto L_8020A3B4; } // 8020A3A4
  c->r[0]=cntlz(c->r[28]); // 8020A3A8
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 8020A3AC
  goto L_8020A3BC; // 8020A3B0
L_8020A3B4:;
  c->r[0]=cntlz(c->r[29]); // 8020A3B4
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 8020A3B8
L_8020A3BC:;
  c->r[0]=0u+0x43300000u; // 8020A3BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020A3C0
  {uint32_t ea=c->r[2]+0xFFFFB0D0u; c->f[2]=RF64(ea);} // 8020A3C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8020A3C8
  {uint32_t ea=c->r[2]+0xFFFFB0C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A3CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8020A3D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8020A3D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8020A3D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8020A3DC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020A3E0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8020A3E4
  c->r[3]=R32(c->r[1]+0x00000014u); // 8020A3E8
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8020A3EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8020A3F0
  goto L_8020A404; // 8020A3F4
L_8020A3F8:;
  c->r[0]=0u+0x00000004u; // 8020A3F8
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8020A3FC
  W32(c->r[31]+0x00000000u,c->r[4]); // 8020A400
L_8020A404:;
  c->r[5]=rotl(c->r[30],0)&0x0000000Fu; // 8020A404
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 8020A408
  c->r[4]=R32(c->r[31]+0x00000008u); // 8020A40C
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 8020A410
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8020A414
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 8020A418
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 8020A41C
  cmpu(c,0,c->r[5],0x0000000Eu); // 8020A420
  c->r[4]=(rotl(c->r[3],10)&0x000FFC00u)|(c->r[4]&~0x000FFC00u); // 8020A424
  W32(c->r[31]+0x00000014u,c->r[30]); // 8020A428
  c->r[4]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[4]&~0x00F00000u); // 8020A42C
  W32(c->r[31]+0x00000008u,c->r[4]); // 8020A430
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8020A434
  if (crb(c,1)) { goto L_8020A4B8; } // 8020A438
  c->r[3]=0u+0x803A0000u; // 8020A43C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8020A440
  c->r[3]=c->r[3]+0x0000607Cu; // 8020A444
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020A448
  c->ctr=c->r[3]; // 8020A44C
  if (true) { switch (c->ctr) { case 0x8020A454u: goto L_8020A454; case 0x8020A468u: goto L_8020A468; case 0x8020A47Cu: goto L_8020A47C; case 0x8020A490u: goto L_8020A490; case 0x8020A4A4u: goto L_8020A4A4; case 0x8020A4B8u: goto L_8020A4B8; default: break; } dispatch(c,c->ctr); return; } // 8020A450
L_8020A454:;
  c->r[0]=0u+0x00000001u; // 8020A454
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A458
  c->r[6]=0u+0x00000003u; // 8020A45C
  c->r[7]=0u+0x00000003u; // 8020A460
  goto L_8020A4C8; // 8020A464
L_8020A468:;
  c->r[0]=0u+0x00000002u; // 8020A468
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A46C
  c->r[6]=0u+0x00000003u; // 8020A470
  c->r[7]=0u+0x00000002u; // 8020A474
  goto L_8020A4C8; // 8020A478
L_8020A47C:;
  c->r[0]=0u+0x00000002u; // 8020A47C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A480
  c->r[6]=0u+0x00000002u; // 8020A484
  c->r[7]=0u+0x00000002u; // 8020A488
  goto L_8020A4C8; // 8020A48C
L_8020A490:;
  c->r[0]=0u+0x00000003u; // 8020A490
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A494
  c->r[6]=0u+0x00000002u; // 8020A498
  c->r[7]=0u+0x00000002u; // 8020A49C
  goto L_8020A4C8; // 8020A4A0
L_8020A4A4:;
  c->r[0]=0u+0x00000000u; // 8020A4A4
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A4A8
  c->r[6]=0u+0x00000003u; // 8020A4AC
  c->r[7]=0u+0x00000003u; // 8020A4B0
  goto L_8020A4C8; // 8020A4B4
L_8020A4B8:;
  c->r[0]=0u+0x00000002u; // 8020A4B8
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8020A4BC
  c->r[6]=0u+0x00000002u; // 8020A4C0
  c->r[7]=0u+0x00000002u; // 8020A4C4
L_8020A4C8:;
  c->r[5]=0u+0x00000001u; // 8020A4C8
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 8020A4CC
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 8020A4D0
  c->r[11]=c->r[1]+0x00000040u; // 8020A4D4
  c->r[4]=c->r[28]+c->r[3]; // 8020A4D8
  c->r[0]=c->r[0]|0x00000002u; // 8020A4DC
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 8020A4E0
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 8020A4E4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8020A4E8
  c->r[3]=c->r[29]+c->r[3]; // 8020A4EC
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 8020A4F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8020A4F4
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 8020A4F8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8020A4FC
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 8020A500
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 8020A504
  c->lr=0x8020A50Cu; f_800C2E8C(c); // 8020A508
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020A50C
  c->lr=c->r[0]; // 8020A510
  c->r[1]=c->r[1]+0x00000040u; // 8020A514
  return; // 8020A518
}

// GXInitTexObjCI
void f_8020A520(Ctx* __restrict c) {
  trace_call(0x8020A520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A520
  c->r[0]=c->lr; // 8020A524
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020A528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020A52C
  c->r[31]=R32(c->r[1]+0x00000018u); // 8020A530
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020A534
  c->r[30]=c->r[3]|c->r[3]; // 8020A538
  c->lr=0x8020A540u; f_8020A310(c); // 8020A53C
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 8020A540
  W32(c->r[30]+0x00000018u,c->r[31]); // 8020A544
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8020A548
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 8020A54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020A550
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020A554
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020A558
  c->lr=c->r[0]; // 8020A55C
  c->r[1]=c->r[1]+0x00000010u; // 8020A560
  return; // 8020A564
}

// GXInitTexObjLOD
void f_8020A570(Ctx* __restrict c) {
  trace_call(0x8020A570u);
  {uint32_t ea=c->r[2]+0xFFFFB0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A570
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A574
  fcmp(c,0,c->f[3],c->f[0]); // 8020A578
  if (!crb(c,0)) { goto L_8020A588; } // 8020A57C
  c->f[3]=c->f[0]; // 8020A580
  goto L_8020A59C; // 8020A584
L_8020A588:;
  {uint32_t ea=c->r[2]+0xFFFFB0E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A588
  fcmp(c,0,c->f[3],c->f[0]); // 8020A58C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020A590
  if (!crb(c,2)) { goto L_8020A59C; } // 8020A594
  {uint32_t ea=c->r[2]+0xFFFFB0DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8020A598
L_8020A59C:;
  {uint32_t ea=c->r[2]+0xFFFFB0E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8020A59C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8020A5A0
  c->r[9]=cntlz(c->r[0]); // 8020A5A4
  {uint32_t ea=c->r[2]+0xFFFFB0E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A5A8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8020A5AC
  c->r[0]=cntlz(c->r[7]); // 8020A5B0
  c->r[10]=R32(c->r[3]+0x00000000u); // 8020A5B4
  c->r[5]=c->r[13]+0xFFFF9018u; // 8020A5B8
  fcmp(c,0,c->f[1],c->f[0]); // 8020A5BC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8020A5C0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 8020A5C4
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 8020A5C8
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 8020A5CC
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 8020A5D0
  W32(c->r[3]+0x00000000u,c->r[10]); // 8020A5D4
  c->r[4]=R8(c->r[5]+c->r[4]); // 8020A5D8
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 8020A5DC
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 8020A5E0
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 8020A5E4
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 8020A5E8
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 8020A5EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020A5F0
  if (!crb(c,0)) { goto L_8020A600; } // 8020A5F4
  c->f[1]=c->f[0]; // 8020A5F8
  goto L_8020A610; // 8020A5FC
L_8020A600:;
  {uint32_t ea=c->r[2]+0xFFFFB0ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A600
  fcmp(c,0,c->f[1],c->f[0]); // 8020A604
  if (!crb(c,1)) { goto L_8020A610; } // 8020A608
  c->f[1]=c->f[0]; // 8020A60C
L_8020A610:;
  {uint32_t ea=c->r[2]+0xFFFFB0C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020A610
  {uint32_t ea=c->r[2]+0xFFFFB0E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A614
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8020A618
  fcmp(c,0,c->f[2],c->f[0]); // 8020A61C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8020A620
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8020A624
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8020A628
  if (!crb(c,0)) { goto L_8020A638; } // 8020A62C
  c->f[2]=c->f[0]; // 8020A630
  goto L_8020A648; // 8020A634
L_8020A638:;
  {uint32_t ea=c->r[2]+0xFFFFB0ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A638
  fcmp(c,0,c->f[2],c->f[0]); // 8020A63C
  if (!crb(c,1)) { goto L_8020A648; } // 8020A640
  c->f[2]=c->f[0]; // 8020A644
L_8020A648:;
  {uint32_t ea=c->r[2]+0xFFFFB0C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A648
  c->r[0]=R32(c->r[3]+0x00000004u); // 8020A64C
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8020A650
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8020A654
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020A658
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8020A65C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8020A660
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8020A664
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020A668
  c->r[1]=c->r[1]+0x00000010u; // 8020A66C
  return; // 8020A670
}

// GXInitTexObjWrapMode
void f_8020A680(Ctx* __restrict c) {
  trace_call(0x8020A680u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A680
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 8020A684
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 8020A688
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020A68C
  return; // 8020A690
}

// GXInitTexObjTlut
void f_8020A6A0(Ctx* __restrict c) {
  trace_call(0x8020A6A0u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 8020A6A0
  return; // 8020A6A4
}

// GXInitTexObjFilter
void f_8020A6B0(Ctx* __restrict c) {
  trace_call(0x8020A6B0u);
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8020A6B0
  c->r[6]=R32(c->r[3]+0x00000000u); // 8020A6B4
  c->r[0]=cntlz(c->r[0]); // 8020A6B8
  c->r[5]=c->r[13]+0xFFFF9018u; // 8020A6BC
  c->r[6]=(rotl(c->r[0],31)&0x00000010u)|(c->r[6]&~0x00000010u); // 8020A6C0
  W32(c->r[3]+0x00000000u,c->r[6]); // 8020A6C4
  c->r[0]=R8(c->r[5]+c->r[4]); // 8020A6C8
  c->r[6]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[6]&~0x000000E0u); // 8020A6CC
  W32(c->r[3]+0x00000000u,c->r[6]); // 8020A6D0
  return; // 8020A6D4
}

// fn_8020A6E0
void f_8020A6E0(Ctx* __restrict c) {
  trace_call(0x8020A6E0u);
  {uint32_t ea=c->r[2]+0xFFFFB0D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A6E0
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A6E4
  fcmp(c,0,c->f[1],c->f[0]); // 8020A6E8
  if (!crb(c,0)) { goto L_8020A6F8; } // 8020A6EC
  c->f[1]=c->f[0]; // 8020A6F0
  goto L_8020A70C; // 8020A6F4
L_8020A6F8:;
  {uint32_t ea=c->r[2]+0xFFFFB0E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A6F8
  fcmp(c,0,c->f[1],c->f[0]); // 8020A6FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020A700
  if (!crb(c,2)) { goto L_8020A70C; } // 8020A704
  {uint32_t ea=c->r[2]+0xFFFFB0DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020A708
L_8020A70C:;
  {uint32_t ea=c->r[2]+0xFFFFB0E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020A70C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A710
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8020A714
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020A718
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8020A71C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8020A720
  c->r[0]=(rotl(c->r[4],9)&0x0001FE00u)|(c->r[0]&~0x0001FE00u); // 8020A724
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020A728
  c->r[1]=c->r[1]+0x00000010u; // 8020A72C
  return; // 8020A730
}

// GXInitTexObjUserData
void f_8020A740(Ctx* __restrict c) {
  trace_call(0x8020A740u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 8020A740
  return; // 8020A744
}

// GXGetTexObjUserData
void f_8020A750(Ctx* __restrict c) {
  trace_call(0x8020A750u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8020A750
  return; // 8020A754
}

// GXGetTexObjWidth
void f_8020A760(Ctx* __restrict c) {
  trace_call(0x8020A760u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 8020A760
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 8020A764
  c->r[0]=c->r[3]+0x00000001u; // 8020A768
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8020A76C
  return; // 8020A770
}

// GXGetTexObjHeight
void f_8020A780(Ctx* __restrict c) {
  trace_call(0x8020A780u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 8020A780
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 8020A784
  c->r[0]=c->r[3]+0x00000001u; // 8020A788
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8020A78C
  return; // 8020A790
}

// GXGetTexObjFmt
void f_8020A7A0(Ctx* __restrict c) {
  trace_call(0x8020A7A0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8020A7A0
  return; // 8020A7A4
}

// GXGetTexObjWrapS
void f_8020A7B0(Ctx* __restrict c) {
  trace_call(0x8020A7B0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A7B0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 8020A7B4
  return; // 8020A7B8
}

// GXGetTexObjWrapT
void f_8020A7C0(Ctx* __restrict c) {
  trace_call(0x8020A7C0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A7C0
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 8020A7C4
  return; // 8020A7C8
}

// GXGetTexObjMipMap
void f_8020A7D0(Ctx* __restrict c) {
  trace_call(0x8020A7D0u);
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 8020A7D0
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8020A7D4
  return; // 8020A7D8
}

// GXLoadTexObjPreLoaded
void f_8020A7E0(Ctx* __restrict c) {
  trace_call(0x8020A7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A7E0
  c->r[0]=c->lr; // 8020A7E4
  c->r[11]=c->r[13]+0xFFFF8FE0u; // 8020A7E8
  c->r[10]=c->r[13]+0xFFFF8FE8u; // 8020A7EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020A7F0
  c->r[9]=c->r[13]+0xFFFF8FF0u; // 8020A7F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020A7F8
  c->r[8]=c->r[13]+0xFFFF8FF8u; // 8020A7FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020A800
  c->r[7]=c->r[13]+0xFFFF9000u; // 8020A804
  c->r[6]=c->r[13]+0xFFFF9008u; // 8020A808
  c->r[31]=c->r[5]|c->r[5]; // 8020A80C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020A810
  c->r[30]=c->r[3]|c->r[3]; // 8020A814
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020A818
  c->r[29]=0u+0xCC010000u; // 8020A81C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020A820
  c->r[28]=0u+0x00000061u; // 8020A824
  c->r[0]=R8(c->r[11]+c->r[5]); // 8020A828
  c->r[11]=R32(c->r[3]+0x00000004u); // 8020A82C
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 8020A830
  c->r[0]=R8(c->r[10]+c->r[5]); // 8020A834
  c->r[10]=R8(c->r[9]+c->r[5]); // 8020A838
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 8020A83C
  c->r[0]=R8(c->r[7]+c->r[5]); // 8020A840
  c->r[8]=R8(c->r[8]+c->r[5]); // 8020A844
  c->r[5]=R8(c->r[6]+c->r[5]); // 8020A848
  c->r[9]=R32(c->r[3]+0x00000008u); // 8020A84C
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 8020A850
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A854
  c->r[7]=R32(c->r[4]+0x00000000u); // 8020A858
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020A85C
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 8020A860
  c->r[6]=R32(c->r[4]+0x00000004u); // 8020A864
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020A868
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A86C
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 8020A870
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 8020A874
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8020A878
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8020A87C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A880
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8020A884
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 8020A888
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A88C
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 8020A890
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A894
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 8020A898
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A89C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8020A8A0
  W32(c->r[3]+0x00000004u,c->r[11]); // 8020A8A4
  W32(c->r[3]+0x00000008u,c->r[9]); // 8020A8A8
  W32(c->r[4]+0x00000000u,c->r[7]); // 8020A8AC
  W32(c->r[4]+0x00000004u,c->r[6]); // 8020A8B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8020A8B4
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 8020A8B8
  if (!crb(c,2)) { goto L_8020A8F4; } // 8020A8BC
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020A8C0
  c->r[3]=R32(c->r[3]+0x00000018u); // 8020A8C4
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 8020A8C8
  c->ctr=c->r[12]; // 8020A8CC
  if (true) { c->lr=0x8020A8D4u; dispatch(c,c->ctr); } // 8020A8D0
  c->r[4]=c->r[13]+0xFFFF9010u; // 8020A8D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8020A8D8
  c->r[4]=R8(c->r[4]+c->r[31]); // 8020A8DC
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8020A8E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020A8E4
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 8020A8E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8020A8EC
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 8020A8F0
L_8020A8F4:;
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020A8F4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8020A8F8
  c->r[5]=R32(c->r[30]+0x00000008u); // 8020A8FC
  c->r[0]=0u+0x00000000u; // 8020A900
  c->r[4]=c->r[6]+c->r[3]; // 8020A904
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020A908
  W32(c->r[4]+0x00000564u,c->r[5]); // 8020A90C
  W32(c->r[4]+0x00000584u,c->r[3]); // 8020A910
  c->r[3]=R32(c->r[6]+0x000005FCu); // 8020A914
  c->r[3]=c->r[3]|0x00000001u; // 8020A918
  W32(c->r[6]+0x000005FCu,c->r[3]); // 8020A91C
  W16(c->r[6]+0x00000002u,c->r[0]); // 8020A920
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020A924
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020A928
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020A92C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020A930
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020A934
  c->lr=c->r[0]; // 8020A938
  c->r[1]=c->r[1]+0x00000020u; // 8020A93C
  return; // 8020A940
}

// GXLoadTexObj
void f_8020A950(Ctx* __restrict c) {
  trace_call(0x8020A950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A950
  c->r[0]=c->lr; // 8020A954
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020A958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020A95C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020A960
  c->r[31]=c->r[4]|c->r[4]; // 8020A964
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020A968
  c->r[30]=c->r[3]|c->r[3]; // 8020A96C
  c->r[12]=R32(c->r[5]+0x00000518u); // 8020A970
  c->ctr=c->r[12]; // 8020A974
  if (true) { c->lr=0x8020A97Cu; dispatch(c,c->ctr); } // 8020A978
  c->r[4]=c->r[3]|c->r[3]; // 8020A97C
  c->r[3]=c->r[30]|c->r[30]; // 8020A980
  c->r[5]=c->r[31]|c->r[31]; // 8020A984
  c->lr=0x8020A98Cu; f_8020A7E0(c); // 8020A988
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020A98C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020A990
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020A994
  c->lr=c->r[0]; // 8020A998
  c->r[1]=c->r[1]+0x00000010u; // 8020A99C
  return; // 8020A9A0
}

// GXInitTlutObj
void f_8020A9B0(Ctx* __restrict c) {
  trace_call(0x8020A9B0u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 8020A9B0
  c->r[0]=0u+0x00000064u; // 8020A9B4
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 8020A9B8
  c->r[4]=0u+0x00000000u; // 8020A9BC
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 8020A9C0
  W16(c->r[3]+0x00000008u,c->r[6]); // 8020A9C4
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020A9C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8020A9CC
  W32(c->r[3]+0x00000004u,c->r[7]); // 8020A9D0
  return; // 8020A9D4
}

// GXLoadTlut
void f_8020A9E0(Ctx* __restrict c) {
  trace_call(0x8020A9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A9E0
  c->r[0]=c->lr; // 8020A9E4
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020A9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020A9EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020A9F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020A9F4
  c->r[30]=c->r[3]|c->r[3]; // 8020A9F8
  c->r[3]=c->r[4]|c->r[4]; // 8020A9FC
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 8020AA00
  c->ctr=c->r[12]; // 8020AA04
  if (true) { c->lr=0x8020AA0Cu; dispatch(c,c->ctr); } // 8020AA08
  c->r[31]=c->r[3]|c->r[3]; // 8020AA0C
  c->lr=0x8020AA14u; f_8020B650(c); // 8020AA10
  c->r[3]=0u+0xCC010000u; // 8020AA14
  c->r[4]=0u+0x00000061u; // 8020AA18
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AA1C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8020AA20
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AA24
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AA28
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020AA2C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AA30
  c->lr=0x8020AA38u; f_8020B650(c); // 8020AA34
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020AA38
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020AA3C
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 8020AA40
  W32(c->r[31]+0x00000004u,c->r[3]); // 8020AA44
  c->r[0]=R32(c->r[30]+0x00000004u); // 8020AA48
  W32(c->r[31]+0x00000008u,c->r[0]); // 8020AA4C
  c->r[0]=R32(c->r[30]+0x00000008u); // 8020AA50
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8020AA54
  W32(c->r[30]+0x00000000u,c->r[3]); // 8020AA58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020AA5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020AA60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020AA64
  c->lr=c->r[0]; // 8020AA68
  c->r[1]=c->r[1]+0x00000010u; // 8020AA6C
  return; // 8020AA70
}

// GXInitTexCacheRegion
void f_8020AA80(Ctx* __restrict c) {
  trace_call(0x8020AA80u);
  cmps(c,0,(int32_t)c->r[6],0); // 8020AA80
  if (crb(c,2)) { goto L_8020AA9C; } // 8020AA84
  cmps(c,0,(int32_t)c->r[6],1); // 8020AA88
  if (crb(c,2)) { goto L_8020AAA4; } // 8020AA8C
  cmps(c,0,(int32_t)c->r[6],2); // 8020AA90
  if (crb(c,2)) { goto L_8020AAAC; } // 8020AA94
  goto L_8020AAB0; // 8020AA98
L_8020AA9C:;
  c->r[6]=0u+0x00000003u; // 8020AA9C
  goto L_8020AAB0; // 8020AAA0
L_8020AAA4:;
  c->r[6]=0u+0x00000004u; // 8020AAA4
  goto L_8020AAB0; // 8020AAA8
L_8020AAAC:;
  c->r[6]=0u+0x00000005u; // 8020AAAC
L_8020AAB0:;
  cmps(c,0,(int32_t)c->r[8],0); // 8020AAB0
  c->r[0]=0u+0x00000000u; // 8020AAB4
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 8020AAB8
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8020AABC
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 8020AAC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020AAC4
  if (crb(c,2)) { goto L_8020AAE8; } // 8020AAC8
  cmps(c,0,(int32_t)c->r[8],1); // 8020AACC
  if (crb(c,2)) { goto L_8020AAF0; } // 8020AAD0
  cmps(c,0,(int32_t)c->r[8],2); // 8020AAD4
  if (crb(c,2)) { goto L_8020AAF8; } // 8020AAD8
  cmps(c,0,(int32_t)c->r[8],3); // 8020AADC
  if (crb(c,2)) { goto L_8020AB00; } // 8020AAE0
  goto L_8020AB04; // 8020AAE4
L_8020AAE8:;
  c->r[6]=0u+0x00000003u; // 8020AAE8
  goto L_8020AB04; // 8020AAEC
L_8020AAF0:;
  c->r[6]=0u+0x00000004u; // 8020AAF0
  goto L_8020AB04; // 8020AAF4
L_8020AAF8:;
  c->r[6]=0u+0x00000005u; // 8020AAF8
  goto L_8020AB04; // 8020AAFC
L_8020AB00:;
  c->r[6]=0u+0x00000000u; // 8020AB00
L_8020AB04:;
  c->r[5]=0u+0x00000000u; // 8020AB04
  c->r[0]=0u+0x00000001u; // 8020AB08
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 8020AB0C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8020AB10
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 8020AB14
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 8020AB18
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8020AB1C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8020AB20
  return; // 8020AB24
}

// GXInitTlutRegion
void f_8020AB30(Ctx* __restrict c) {
  trace_call(0x8020AB30u);
  c->r[0]=c->r[4]+0xFFF80000u; // 8020AB30
  c->r[4]=0u+0x00000000u; // 8020AB34
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 8020AB38
  c->r[0]=0u+0x00000065u; // 8020AB3C
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 8020AB40
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8020AB44
  W32(c->r[3]+0x00000000u,c->r[4]); // 8020AB48
  return; // 8020AB4C
}

// GXInvalidateTexAll
void f_8020AB50(Ctx* __restrict c) {
  trace_call(0x8020AB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AB50
  c->r[0]=c->lr; // 8020AB54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020AB58
  c->lr=0x8020AB60u; f_8020B650(c); // 8020AB5C
  c->r[5]=0u+0xCC010000u; // 8020AB60
  c->r[3]=0u+0x66000000u; // 8020AB64
  c->r[6]=0u+0x00000061u; // 8020AB68
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8020AB6C
  c->r[4]=c->r[3]+0x00001000u; // 8020AB70
  c->r[0]=c->r[3]+0x00001100u; // 8020AB74
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8020AB78
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8020AB7C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020AB80
  c->lr=0x8020AB88u; f_8020B650(c); // 8020AB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020AB88
  c->lr=c->r[0]; // 8020AB8C
  c->r[1]=c->r[1]+0x00000010u; // 8020AB90
  return; // 8020AB94
}

// GXSetTexRegionCallback
void f_8020ABA0(Ctx* __restrict c) {
  trace_call(0x8020ABA0u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020ABA0
  c->r[0]=c->r[3]|c->r[3]; // 8020ABA4
  c->r[3]=R32(c->r[4]+0x00000518u); // 8020ABA8
  W32(c->r[4]+0x00000518u,c->r[0]); // 8020ABAC
  return; // 8020ABB0
}

// GXSetTlutRegionCallback
void f_8020ABC0(Ctx* __restrict c) {
  trace_call(0x8020ABC0u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020ABC0
  c->r[0]=c->r[3]|c->r[3]; // 8020ABC4
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 8020ABC8
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 8020ABCC
  return; // 8020ABD0
}

// GXSetTexCoordScaleManually
void f_8020ABE0(Ctx* __restrict c) {
  trace_call(0x8020ABE0u);
  c->r[9]=R32(c->r[2]+0xFFFFB080u); // 8020ABE0
  c->r[0]=0u+0x00000001u; // 8020ABE4
  c->r[7]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8020ABE8
  cmps(c,0,(int32_t)c->r[4],0); // 8020ABEC
  c->r[8]=R32(c->r[9]+0x000005E4u); // 8020ABF0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 8020ABF4
  c->r[4]=c->r[8]&~c->r[7]; // 8020ABF8
  c->r[0]=c->r[4]|c->r[0]; // 8020ABFC
  W32(c->r[9]+0x000005E4u,c->r[0]); // 8020AC00
  if (crb(c,2)) return; // 8020AC04
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020AC08
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 8020AC0C
  c->r[8]=c->r[9]+c->r[0]; // 8020AC10
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 8020AC14
  c->r[0]=R32(c->r[8]+0x00000108u); // 8020AC18
  c->r[0]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[0]&~0x0000FFFFu); // 8020AC1C
  W32(c->r[8]+0x00000108u,c->r[0]); // 8020AC20
  c->r[4]=0u+0xCC010000u; // 8020AC24
  c->r[7]=0u+0x00000061u; // 8020AC28
  c->r[0]=0u+0x00000000u; // 8020AC2C
  c->r[3]=R32(c->r[8]+0x00000128u); // 8020AC30
  c->r[3]=(rotl(c->r[5],0)&0x0000FFFFu)|(c->r[3]&~0x0000FFFFu); // 8020AC34
  W32(c->r[8]+0x00000128u,c->r[3]); // 8020AC38
  W8(c->r[4]+0xFFFF8000u,c->r[7]); // 8020AC3C
  c->r[3]=R32(c->r[8]+0x00000108u); // 8020AC40
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020AC44
  W8(c->r[4]+0xFFFF8000u,c->r[7]); // 8020AC48
  c->r[3]=R32(c->r[8]+0x00000128u); // 8020AC4C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020AC50
  W16(c->r[9]+0x00000002u,c->r[0]); // 8020AC54
  return; // 8020AC58
}

// fn_8020AC60
void f_8020AC60(Ctx* __restrict c) {
  trace_call(0x8020AC60u);
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020AC60
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020AC64
  c->r[0]=0u+0x00000001u; // 8020AC68
  c->r[7]=c->r[8]+c->r[6]; // 8020AC6C
  c->r[6]=R32(c->r[7]+0x00000108u); // 8020AC70
  c->r[6]=(rotl(c->r[4],17)&0x00020000u)|(c->r[6]&~0x00020000u); // 8020AC74
  W32(c->r[7]+0x00000108u,c->r[6]); // 8020AC78
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8020AC7C
  c->r[3]=R32(c->r[7]+0x00000128u); // 8020AC80
  c->r[3]=(rotl(c->r[5],17)&0x00020000u)|(c->r[3]&~0x00020000u); // 8020AC84
  W32(c->r[7]+0x00000128u,c->r[3]); // 8020AC88
  c->r[3]=R32(c->r[8]+0x000005E4u); // 8020AC8C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8020AC90
  if (crb(c,2)) return; // 8020AC94
  c->r[4]=0u+0xCC010000u; // 8020AC98
  c->r[5]=0u+0x00000061u; // 8020AC9C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020ACA0
  c->r[0]=0u+0x00000000u; // 8020ACA4
  c->r[3]=R32(c->r[7]+0x00000108u); // 8020ACA8
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020ACAC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020ACB0
  c->r[3]=R32(c->r[7]+0x00000128u); // 8020ACB4
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020ACB8
  W16(c->r[8]+0x00000002u,c->r[0]); // 8020ACBC
  return; // 8020ACC0
}

// __SetSURegs
void f_8020ACD0(Ctx* __restrict c) {
  trace_call(0x8020ACD0u);
  c->r[11]=R32(c->r[2]+0xFFFFB080u); // 8020ACD0
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020ACD4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020ACD8
  c->r[5]=0u+0xCC010000u; // 8020ACDC
  c->r[10]=c->r[11]+c->r[0]; // 8020ACE0
  c->r[9]=c->r[11]+c->r[6]; // 8020ACE4
  c->r[3]=R32(c->r[10]+0x00000564u); // 8020ACE8
  c->r[4]=0u+0x00000061u; // 8020ACEC
  c->r[8]=R32(c->r[9]+0x00000108u); // 8020ACF0
  c->r[0]=0u+0x00000000u; // 8020ACF4
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 8020ACF8
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 8020ACFC
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 8020AD00
  W32(c->r[9]+0x00000108u,c->r[8]); // 8020AD04
  c->r[7]=R32(c->r[9]+0x00000128u); // 8020AD08
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 8020AD0C
  W32(c->r[9]+0x00000128u,c->r[7]); // 8020AD10
  c->r[3]=R32(c->r[10]+0x00000584u); // 8020AD14
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 8020AD18
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 8020AD1C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8020AD20
  c->r[6]=cntlz(c->r[6]); // 8020AD24
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8020AD28
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 8020AD2C
  W32(c->r[9]+0x00000108u,c->r[8]); // 8020AD30
  c->r[3]=cntlz(c->r[3]); // 8020AD34
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 8020AD38
  W32(c->r[9]+0x00000128u,c->r[7]); // 8020AD3C
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020AD40
  c->r[3]=R32(c->r[9]+0x00000108u); // 8020AD44
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8020AD48
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020AD4C
  c->r[3]=R32(c->r[9]+0x00000128u); // 8020AD50
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8020AD54
  W16(c->r[11]+0x00000002u,c->r[0]); // 8020AD58
  return; // 8020AD5C
}

// __GXSetSUTexRegs
void f_8020AD60(Ctx* __restrict c) {
  trace_call(0x8020AD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AD60
  c->r[0]=c->lr; // 8020AD64
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020AD68
  c->r[11]=c->r[1]+0x00000030u; // 8020AD6C
  c->lr=0x8020AD74u; f_800C2E3C(c); // 8020AD70
  c->r[29]=R32(c->r[2]+0xFFFFB080u); // 8020AD74
  c->r[0]=R32(c->r[29]+0x000005E4u); // 8020AD78
  cmpu(c,0,c->r[0],0x000000FFu); // 8020AD7C
  if (crb(c,2)) { goto L_8020AEAC; } // 8020AD80
  c->r[0]=R32(c->r[29]+0x00000254u); // 8020AD84
  c->r[28]=0u+0x00000000u; // 8020AD88
  c->r[23]=0u+0x00000001u; // 8020AD8C
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 8020AD90
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 8020AD94
  c->r[26]=c->r[3]+0x00000001u; // 8020AD98
  goto L_8020AE20; // 8020AD9C
L_8020ADA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020ADA0
  if (crb(c,2)) { goto L_8020ADC4; } // 8020ADA4
  cmpu(c,0,c->r[28],0x00000001u); // 8020ADA8
  if (crb(c,2)) { goto L_8020ADD4; } // 8020ADAC
  cmpu(c,0,c->r[28],0x00000002u); // 8020ADB0
  if (crb(c,2)) { goto L_8020ADE4; } // 8020ADB4
  cmpu(c,0,c->r[28],0x00000003u); // 8020ADB8
  if (crb(c,2)) { goto L_8020ADF4; } // 8020ADBC
  goto L_8020AE00; // 8020ADC0
L_8020ADC4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 8020ADC4
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 8020ADC8
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 8020ADCC
  goto L_8020AE00; // 8020ADD0
L_8020ADD4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 8020ADD4
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 8020ADD8
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 8020ADDC
  goto L_8020AE00; // 8020ADE0
L_8020ADE4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 8020ADE4
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 8020ADE8
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 8020ADEC
  goto L_8020AE00; // 8020ADF0
L_8020ADF4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 8020ADF4
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 8020ADF8
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 8020ADFC
L_8020AE00:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 8020AE00
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 8020AE04
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8020AE08
  if (!crb(c,2)) { goto L_8020AE1C; } // 8020AE0C
  c->r[3]=c->r[25]|c->r[25]; // 8020AE10
  c->r[4]=c->r[24]|c->r[24]; // 8020AE14
  c->lr=0x8020AE1Cu; f_8020ACD0(c); // 8020AE18
L_8020AE1C:;
  c->r[28]=c->r[28]+0x00000001u; // 8020AE1C
L_8020AE20:;
  cmpu(c,0,c->r[28],c->r[27]); // 8020AE20
  if (crb(c,0)) { IRQCHK(c); goto L_8020ADA0; } // 8020AE24
  c->r[28]=R32(c->r[2]+0xFFFFB080u); // 8020AE28
  c->r[27]=0u+0x00000000u; // 8020AE2C
  c->r[23]=0u+0x00000001u; // 8020AE30
  c->r[31]=c->r[28]|c->r[28]; // 8020AE34
  c->r[30]=c->r[28]+0x00000150u; // 8020AE38
  goto L_8020AEA4; // 8020AE3C
L_8020AE40:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 8020AE40
  c->r[0]=R32(c->r[31]+0x000005A4u); // 8020AE44
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 8020AE48
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 8020AE4C
  if (crb(c,2)) { goto L_8020AE60; } // 8020AE50
  c->r[0]=R32(c->r[30]+c->r[3]); // 8020AE54
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 8020AE58
  goto L_8020AE68; // 8020AE5C
L_8020AE60:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 8020AE60
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 8020AE64
L_8020AE68:;
  cmpu(c,0,c->r[25],0x000000FFu); // 8020AE68
  if (crb(c,2)) { goto L_8020AE9C; } // 8020AE6C
  c->r[3]=R32(c->r[29]+0x000005E4u); // 8020AE70
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 8020AE74
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8020AE78
  if (!crb(c,2)) { goto L_8020AE9C; } // 8020AE7C
  c->r[3]=R32(c->r[28]+0x000005E8u); // 8020AE80
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 8020AE84
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8020AE88
  if (crb(c,2)) { goto L_8020AE9C; } // 8020AE8C
  c->r[3]=c->r[25]|c->r[25]; // 8020AE90
  c->r[4]=c->r[24]|c->r[24]; // 8020AE94
  c->lr=0x8020AE9Cu; f_8020ACD0(c); // 8020AE98
L_8020AE9C:;
  c->r[31]=c->r[31]+0x00000004u; // 8020AE9C
  c->r[27]=c->r[27]+0x00000001u; // 8020AEA0
L_8020AEA4:;
  cmpu(c,0,c->r[27],c->r[26]); // 8020AEA4
  if (crb(c,0)) { IRQCHK(c); goto L_8020AE40; } // 8020AEA8
L_8020AEAC:;
  c->r[11]=c->r[1]+0x00000030u; // 8020AEAC
  c->lr=0x8020AEB4u; f_800C2E88(c); // 8020AEB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020AEB4
  c->lr=c->r[0]; // 8020AEB8
  c->r[1]=c->r[1]+0x00000030u; // 8020AEBC
  return; // 8020AEC0
}

// __GXSetTmemConfig
void f_8020AED0(Ctx* __restrict c) {
  trace_call(0x8020AED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AED0
  cmpu(c,0,c->r[3],0x00000002u); // 8020AED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020AED8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020AEDC
  if (crb(c,2)) { goto L_8020AEF0; } // 8020AEE0
  cmpu(c,0,c->r[3],0x00000001u); // 8020AEE4
  if (crb(c,2)) { goto L_8020AFFC; } // 8020AEE8
  goto L_8020B108; // 8020AEEC
L_8020AEF0:;
  c->r[3]=0u+0xCC010000u; // 8020AEF0
  c->r[0]=0u+0x00000061u; // 8020AEF4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AEF8
  c->r[4]=0u+0x8C0E0000u; // 8020AEFC
  c->r[4]=c->r[4]+0xFFFF8000u; // 8020AF00
  c->r[5]=0u+0x900E0000u; // 8020AF04
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AF08
  c->r[4]=0u+0x8D0E0000u; // 8020AF0C
  c->r[31]=0u+0x910E0000u; // 8020AF10
  c->r[30]=0u+0x8E0E0000u; // 8020AF14
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF18
  c->r[5]=c->r[5]+0xFFFFC000u; // 8020AF1C
  c->r[12]=0u+0x920E0000u; // 8020AF20
  c->r[11]=0u+0x8F0E0000u; // 8020AF24
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020AF28
  c->r[10]=0u+0x930E0000u; // 8020AF2C
  c->r[9]=0u+0xAC0E0000u; // 8020AF30
  c->r[8]=0u+0xB00E0000u; // 8020AF34
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF38
  c->r[4]=c->r[4]+0xFFFF8800u; // 8020AF3C
  c->r[7]=0u+0xAD0E0000u; // 8020AF40
  c->r[6]=0u+0xB10E0000u; // 8020AF44
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AF48
  c->r[5]=0u+0xAE0E0000u; // 8020AF4C
  c->r[4]=0u+0xB20E0000u; // 8020AF50
  c->r[31]=c->r[31]+0xFFFFC800u; // 8020AF54
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF58
  c->r[30]=c->r[30]+0xFFFF9000u; // 8020AF5C
  c->r[12]=c->r[12]+0xFFFFD000u; // 8020AF60
  c->r[11]=c->r[11]+0xFFFF9800u; // 8020AF64
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8020AF68
  c->r[10]=c->r[10]+0xFFFFD800u; // 8020AF6C
  c->r[9]=c->r[9]+0xFFFFA000u; // 8020AF70
  c->r[8]=c->r[8]+0xFFFFC400u; // 8020AF74
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF78
  c->r[7]=c->r[7]+0xFFFFA800u; // 8020AF7C
  c->r[6]=c->r[6]+0xFFFFCC00u; // 8020AF80
  c->r[5]=c->r[5]+0xFFFFB000u; // 8020AF84
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8020AF88
  c->r[4]=c->r[4]+0xFFFFD400u; // 8020AF8C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF90
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 8020AF94
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AF98
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8020AF9C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFA0
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 8020AFA4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFA8
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8020AFAC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFB0
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 8020AFB4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFB8
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 8020AFBC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFC0
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 8020AFC4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFC8
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020AFCC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFD0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AFD4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFD8
  c->r[5]=0u+0xAF0E0000u; // 8020AFDC
  c->r[4]=0u+0xB30E0000u; // 8020AFE0
  c->r[5]=c->r[5]+0xFFFFB800u; // 8020AFE4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020AFE8
  c->r[4]=c->r[4]+0xFFFFDC00u; // 8020AFEC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020AFF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020AFF4
  goto L_8020B210; // 8020AFF8
L_8020AFFC:;
  c->r[3]=0u+0xCC010000u; // 8020AFFC
  c->r[0]=0u+0x00000061u; // 8020B000
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B004
  c->r[4]=0u+0x8C0E0000u; // 8020B008
  c->r[4]=c->r[4]+0xFFFF8000u; // 8020B00C
  c->r[5]=0u+0x900E0000u; // 8020B010
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B014
  c->r[4]=0u+0x8D0E0000u; // 8020B018
  c->r[31]=0u+0x910E0000u; // 8020B01C
  c->r[30]=0u+0x8E0E0000u; // 8020B020
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B024
  c->r[5]=c->r[5]+0xFFFFC000u; // 8020B028
  c->r[12]=0u+0x920E0000u; // 8020B02C
  c->r[11]=0u+0x8F0E0000u; // 8020B030
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B034
  c->r[10]=0u+0x930E0000u; // 8020B038
  c->r[9]=0u+0xAC0E0000u; // 8020B03C
  c->r[8]=0u+0xB00E0000u; // 8020B040
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B044
  c->r[4]=c->r[4]+0xFFFF8800u; // 8020B048
  c->r[7]=0u+0xAD0E0000u; // 8020B04C
  c->r[6]=0u+0xB10E0000u; // 8020B050
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B054
  c->r[5]=0u+0xAE0E0000u; // 8020B058
  c->r[4]=0u+0xB20E0000u; // 8020B05C
  c->r[31]=c->r[31]+0xFFFFC800u; // 8020B060
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B064
  c->r[30]=c->r[30]+0xFFFF9000u; // 8020B068
  c->r[12]=c->r[12]+0xFFFFD000u; // 8020B06C
  c->r[11]=c->r[11]+0xFFFF9800u; // 8020B070
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8020B074
  c->r[10]=c->r[10]+0xFFFFD800u; // 8020B078
  c->r[9]=c->r[9]+0xFFFFA000u; // 8020B07C
  c->r[8]=c->r[8]+0xFFFFE000u; // 8020B080
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B084
  c->r[7]=c->r[7]+0xFFFFA800u; // 8020B088
  c->r[6]=c->r[6]+0xFFFFE800u; // 8020B08C
  c->r[5]=c->r[5]+0xFFFFB000u; // 8020B090
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8020B094
  c->r[4]=c->r[4]+0xFFFFF000u; // 8020B098
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B09C
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 8020B0A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0A4
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8020B0A8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0AC
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 8020B0B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0B4
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8020B0B8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0BC
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 8020B0C0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0C4
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 8020B0C8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0CC
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 8020B0D0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0D4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B0D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0DC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B0E0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0E4
  c->r[5]=0u+0xAF0E0000u; // 8020B0E8
  c->r[4]=0u+0xB30E0000u; // 8020B0EC
  c->r[5]=c->r[5]+0xFFFFB800u; // 8020B0F0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B0F4
  c->r[4]=c->r[4]+0xFFFFF800u; // 8020B0F8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B0FC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B100
  goto L_8020B210; // 8020B104
L_8020B108:;
  c->r[3]=0u+0xCC010000u; // 8020B108
  c->r[0]=0u+0x00000061u; // 8020B10C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B110
  c->r[4]=0u+0x8C0E0000u; // 8020B114
  c->r[4]=c->r[4]+0xFFFF8000u; // 8020B118
  c->r[5]=0u+0x900E0000u; // 8020B11C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B120
  c->r[4]=0u+0x8D0E0000u; // 8020B124
  c->r[30]=0u+0x910E0000u; // 8020B128
  c->r[31]=0u+0x8E0E0000u; // 8020B12C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B130
  c->r[5]=c->r[5]+0xFFFFC000u; // 8020B134
  c->r[12]=0u+0x920E0000u; // 8020B138
  c->r[11]=0u+0x8F0E0000u; // 8020B13C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B140
  c->r[10]=0u+0x930E0000u; // 8020B144
  c->r[9]=0u+0xAC0E0000u; // 8020B148
  c->r[8]=0u+0xB00E0000u; // 8020B14C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B150
  c->r[4]=c->r[4]+0xFFFF8400u; // 8020B154
  c->r[7]=0u+0xAD0E0000u; // 8020B158
  c->r[6]=0u+0xB10E0000u; // 8020B15C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B160
  c->r[5]=0u+0xAE0E0000u; // 8020B164
  c->r[4]=0u+0xB20E0000u; // 8020B168
  c->r[30]=c->r[30]+0xFFFFC400u; // 8020B16C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B170
  c->r[31]=c->r[31]+0xFFFF8800u; // 8020B174
  c->r[12]=c->r[12]+0xFFFFC800u; // 8020B178
  c->r[11]=c->r[11]+0xFFFF8C00u; // 8020B17C
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8020B180
  c->r[10]=c->r[10]+0xFFFFCC00u; // 8020B184
  c->r[9]=c->r[9]+0xFFFF9000u; // 8020B188
  c->r[8]=c->r[8]+0xFFFFD000u; // 8020B18C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B190
  c->r[7]=c->r[7]+0xFFFF9400u; // 8020B194
  c->r[6]=c->r[6]+0xFFFFD400u; // 8020B198
  c->r[5]=c->r[5]+0xFFFF9800u; // 8020B19C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8020B1A0
  c->r[4]=c->r[4]+0xFFFFD800u; // 8020B1A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1A8
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 8020B1AC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1B0
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8020B1B4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1B8
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 8020B1BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1C0
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8020B1C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1C8
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 8020B1CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1D0
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 8020B1D4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1D8
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 8020B1DC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1E0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B1E4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1E8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B1EC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B1F0
  c->r[5]=0u+0xAF0E0000u; // 8020B1F4
  c->r[4]=0u+0xB30E0000u; // 8020B1F8
  c->r[5]=c->r[5]+0xFFFF9C00u; // 8020B1FC
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8020B200
  c->r[4]=c->r[4]+0xFFFFDC00u; // 8020B204
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B208
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8020B20C
L_8020B210:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020B210
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020B214
  c->r[1]=c->r[1]+0x00000010u; // 8020B218
  return; // 8020B21C
}

// GXSetTevIndirect
void f_8020B220(Ctx* __restrict c) {
  trace_call(0x8020B220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B220
  c->r[12]=0u+0x00000000u; // 8020B224
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 8020B228
  c->r[4]=c->r[3]+0x00000010u; // 8020B22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020B230
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 8020B234
  c->r[11]=0u+0xCC010000u; // 8020B238
  c->r[0]=0u+0x00000061u; // 8020B23C
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 8020B240
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 8020B244
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020B248
  c->r[0]=0u+0x00000000u; // 8020B24C
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 8020B250
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 8020B254
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B258
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 8020B25C
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 8020B260
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 8020B264
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 8020B268
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 8020B26C
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 8020B270
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 8020B274
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020B27C
  c->r[1]=c->r[1]+0x00000010u; // 8020B280
  return; // 8020B284
}

// GXSetIndTexMtx
void f_8020B290(Ctx* __restrict c) {
  trace_call(0x8020B290u);
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 8020B290
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B294
  cmpu(c,0,c->r[6],0x00000002u); // 8020B298
  if (!crb(c,1)) { goto L_8020B2CC; } // 8020B29C
  c->r[6]=c->r[3]+0xFFFFFFFBu; // 8020B2A0
  cmpu(c,0,c->r[6],0x00000002u); // 8020B2A4
  if (!crb(c,1)) { goto L_8020B2CC; } // 8020B2A8
  c->r[6]=c->r[3]+0xFFFFFFF7u; // 8020B2AC
  cmpu(c,0,c->r[6],0x00000002u); // 8020B2B0
  if (!crb(c,1)) { goto L_8020B2CC; } // 8020B2B4
  goto L_8020B2C8; // 8020B2B8
  goto L_8020B2CC; // 8020B2BC
  goto L_8020B2CC; // 8020B2C0
  goto L_8020B2CC; // 8020B2C4
L_8020B2C8:;
  c->r[6]=0u+0x00000000u; // 8020B2C8
L_8020B2CC:;
  {uint32_t ea=c->r[2]+0xFFFFB0F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8020B2CC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8020B2D0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020B2D4
  c->r[10]=c->r[0]-c->r[6]; // 8020B2D8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020B2DC
  c->r[9]=c->r[5]+0x00000011u; // 8020B2E0
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 8020B2E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020B2E8
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 8020B2EC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020B2F0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 8020B2F4
  c->r[7]=0u+0xCC010000u; // 8020B2F8
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8020B2FC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020B300
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020B304
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020B308
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 8020B30C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 8020B310
  c->r[8]=0u+0x00000061u; // 8020B314
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8020B318
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8020B31C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 8020B320
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 8020B324
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8020B328
  c->r[5]=0u+0x00000000u; // 8020B32C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 8020B330
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020B334
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 8020B338
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8020B33C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8020B340
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 8020B344
  c->r[4]=c->r[10]+0x00000006u; // 8020B348
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8020B34C
  c->r[5]=(rotl(c->r[9],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 8020B350
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020B354
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8020B358
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8020B35C
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020B360
  c->r[6]=0u+0x00000000u; // 8020B364
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 8020B368
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020B36C
  c->r[6]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 8020B370
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8020B374
  c->r[4]=c->r[10]+0x00000007u; // 8020B378
  c->r[6]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[6]&~0x003FF800u); // 8020B37C
  c->r[5]=0u+0x00000000u; // 8020B380
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8020B384
  c->r[6]=(rotl(c->r[9],20)&0x00C00000u)|(c->r[6]&~0x00C00000u); // 8020B388
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020B38C
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8020B390
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8020B394
  c->r[4]=c->r[10]+0x00000008u; // 8020B398
  c->r[5]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 8020B39C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020B3A0
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 8020B3A4
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 8020B3A8
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B3AC
  c->r[5]=(rotl(c->r[9],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 8020B3B0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8020B3B4
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8020B3B8
  c->r[0]=0u+0x00000000u; // 8020B3BC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 8020B3C0
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B3C4
  c->r[1]=c->r[1]+0x00000040u; // 8020B3C8
  return; // 8020B3CC
}

// GXSetIndTexCoordScale
void f_8020B3D0(Ctx* __restrict c) {
  trace_call(0x8020B3D0u);
  cmps(c,0,(int32_t)c->r[3],0); // 8020B3D0
  if (crb(c,2)) { goto L_8020B3F4; } // 8020B3D4
  cmps(c,0,(int32_t)c->r[3],1); // 8020B3D8
  if (crb(c,2)) { goto L_8020B428; } // 8020B3DC
  cmps(c,0,(int32_t)c->r[3],2); // 8020B3E0
  if (crb(c,2)) { goto L_8020B45C; } // 8020B3E4
  cmps(c,0,(int32_t)c->r[3],3); // 8020B3E8
  if (crb(c,2)) { goto L_8020B490; } // 8020B3EC
  goto L_8020B4C0; // 8020B3F0
L_8020B3F4:;
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020B3F4
  c->r[6]=0u+0x00000025u; // 8020B3F8
  c->r[3]=0u+0xCC010000u; // 8020B3FC
  c->r[0]=0u+0x00000061u; // 8020B400
  c->r[7]=R32(c->r[8]+0x00000178u); // 8020B404
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 8020B408
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 8020B40C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020B410
  W32(c->r[8]+0x00000178u,c->r[7]); // 8020B414
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B418
  c->r[0]=R32(c->r[8]+0x00000178u); // 8020B41C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B420
  goto L_8020B4C0; // 8020B424
L_8020B428:;
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020B428
  c->r[6]=0u+0x00000025u; // 8020B42C
  c->r[3]=0u+0xCC010000u; // 8020B430
  c->r[0]=0u+0x00000061u; // 8020B434
  c->r[7]=R32(c->r[8]+0x00000178u); // 8020B438
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 8020B43C
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 8020B440
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020B444
  W32(c->r[8]+0x00000178u,c->r[7]); // 8020B448
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B44C
  c->r[0]=R32(c->r[8]+0x00000178u); // 8020B450
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B454
  goto L_8020B4C0; // 8020B458
L_8020B45C:;
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020B45C
  c->r[6]=0u+0x00000026u; // 8020B460
  c->r[3]=0u+0xCC010000u; // 8020B464
  c->r[0]=0u+0x00000061u; // 8020B468
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 8020B46C
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 8020B470
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 8020B474
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020B478
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 8020B47C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B480
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 8020B484
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B488
  goto L_8020B4C0; // 8020B48C
L_8020B490:;
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020B490
  c->r[6]=0u+0x00000026u; // 8020B494
  c->r[3]=0u+0xCC010000u; // 8020B498
  c->r[0]=0u+0x00000061u; // 8020B49C
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 8020B4A0
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 8020B4A4
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 8020B4A8
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020B4AC
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 8020B4B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B4B4
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 8020B4B8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B4BC
L_8020B4C0:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B4C0
  c->r[0]=0u+0x00000000u; // 8020B4C4
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B4C8
  return; // 8020B4CC
}

// GXSetIndTexOrder
void f_8020B4D0(Ctx* __restrict c) {
  trace_call(0x8020B4D0u);
  cmps(c,0,(int32_t)c->r[5],255); // 8020B4D0
  if (!crb(c,2)) { goto L_8020B4DC; } // 8020B4D4
  c->r[5]=0u+0x00000000u; // 8020B4D8
L_8020B4DC:;
  cmps(c,0,(int32_t)c->r[4],255); // 8020B4DC
  if (!crb(c,2)) { goto L_8020B4E8; } // 8020B4E0
  c->r[4]=0u+0x00000000u; // 8020B4E4
L_8020B4E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020B4E8
  if (crb(c,2)) { goto L_8020B50C; } // 8020B4EC
  cmps(c,0,(int32_t)c->r[3],1); // 8020B4F0
  if (crb(c,2)) { goto L_8020B524; } // 8020B4F4
  cmps(c,0,(int32_t)c->r[3],2); // 8020B4F8
  if (crb(c,2)) { goto L_8020B53C; } // 8020B4FC
  cmps(c,0,(int32_t)c->r[3],3); // 8020B500
  if (crb(c,2)) { goto L_8020B554; } // 8020B504
  goto L_8020B568; // 8020B508
L_8020B50C:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B50C
  c->r[0]=R32(c->r[3]+0x00000170u); // 8020B510
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 8020B514
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 8020B518
  W32(c->r[3]+0x00000170u,c->r[0]); // 8020B51C
  goto L_8020B568; // 8020B520
L_8020B524:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B524
  c->r[0]=R32(c->r[3]+0x00000170u); // 8020B528
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 8020B52C
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 8020B530
  W32(c->r[3]+0x00000170u,c->r[0]); // 8020B534
  goto L_8020B568; // 8020B538
L_8020B53C:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B53C
  c->r[0]=R32(c->r[3]+0x00000170u); // 8020B540
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 8020B544
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 8020B548
  W32(c->r[3]+0x00000170u,c->r[0]); // 8020B54C
  goto L_8020B568; // 8020B550
L_8020B554:;
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B554
  c->r[0]=R32(c->r[3]+0x00000170u); // 8020B558
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 8020B55C
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 8020B560
  W32(c->r[3]+0x00000170u,c->r[0]); // 8020B564
L_8020B568:;
  c->r[4]=0u+0xCC010000u; // 8020B568
  c->r[0]=0u+0x00000061u; // 8020B56C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020B570
  c->r[0]=0u+0x00000000u; // 8020B574
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020B578
  c->r[3]=R32(c->r[5]+0x00000170u); // 8020B57C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020B580
  c->r[3]=R32(c->r[5]+0x000005FCu); // 8020B584
  c->r[3]=c->r[3]|0x00000003u; // 8020B588
  W32(c->r[5]+0x000005FCu,c->r[3]); // 8020B58C
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020B590
  return; // 8020B594
}

// GXSetNumIndStages
void f_8020B5A0(Ctx* __restrict c) {
  trace_call(0x8020B5A0u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020B5A0
  c->r[0]=R32(c->r[4]+0x00000254u); // 8020B5A4
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 8020B5A8
  W32(c->r[4]+0x00000254u,c->r[0]); // 8020B5AC
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8020B5B0
  c->r[0]=c->r[0]|0x00000006u; // 8020B5B4
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8020B5B8
  return; // 8020B5BC
}

// GXSetTevDirect
void f_8020B5C0(Ctx* __restrict c) {
  trace_call(0x8020B5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B5C0
  c->r[0]=c->lr; // 8020B5C4
  c->r[4]=0u+0x00000000u; // 8020B5C8
  c->r[5]=0u+0x00000000u; // 8020B5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020B5D0
  c->r[0]=0u+0x00000000u; // 8020B5D4
  c->r[6]=0u+0x00000000u; // 8020B5D8
  c->r[7]=0u+0x00000000u; // 8020B5DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020B5E0
  c->r[8]=0u+0x00000000u; // 8020B5E4
  c->r[9]=0u+0x00000000u; // 8020B5E8
  c->r[10]=0u+0x00000000u; // 8020B5EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020B5F0
  c->lr=0x8020B5F8u; f_8020B220(c); // 8020B5F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020B5F8
  c->lr=c->r[0]; // 8020B5FC
  c->r[1]=c->r[1]+0x00000010u; // 8020B600
  return; // 8020B604
}

// __GXUpdateBPMask
void f_8020B610(Ctx* __restrict c) {
  trace_call(0x8020B610u);
  return; // 8020B610
}

// __GXSetIndirectMask
void f_8020B620(Ctx* __restrict c) {
  trace_call(0x8020B620u);
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020B620
  c->r[4]=0u+0xCC010000u; // 8020B624
  c->r[5]=0u+0x00000061u; // 8020B628
  c->r[0]=0u+0x00000000u; // 8020B62C
  c->r[6]=R32(c->r[7]+0x00000174u); // 8020B630
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 8020B634
  W32(c->r[7]+0x00000174u,c->r[6]); // 8020B638
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B63C
  c->r[3]=R32(c->r[7]+0x00000174u); // 8020B640
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020B644
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020B648
  return; // 8020B64C
}

// __GXFlushTextureState
void f_8020B650(Ctx* __restrict c) {
  trace_call(0x8020B650u);
  c->r[4]=0u+0xCC010000u; // 8020B650
  c->r[0]=0u+0x00000061u; // 8020B654
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020B658
  c->r[0]=0u+0x00000000u; // 8020B65C
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020B660
  c->r[3]=R32(c->r[5]+0x00000174u); // 8020B664
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020B668
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020B66C
  return; // 8020B670
}

// GXSetTevOp
void f_8020B680(Ctx* __restrict c) {
  trace_call(0x8020B680u);
  cmps(c,0,(int32_t)c->r[3],0); // 8020B680
  c->r[5]=0u+0x803A0000u; // 8020B684
  c->r[5]=c->r[5]+0x000060B8u; // 8020B688
  if (!crb(c,2)) { goto L_8020B6A8; } // 8020B68C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020B690
  c->r[4]=c->r[5]+0x00000000u; // 8020B694
  c->r[0]=c->r[5]+0x00000028u; // 8020B698
  c->r[8]=c->r[4]+c->r[6]; // 8020B69C
  c->r[9]=c->r[0]+c->r[6]; // 8020B6A0
  goto L_8020B6BC; // 8020B6A4
L_8020B6A8:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020B6A8
  c->r[4]=c->r[5]+0x00000014u; // 8020B6AC
  c->r[0]=c->r[5]+0x0000003Cu; // 8020B6B0
  c->r[8]=c->r[4]+c->r[6]; // 8020B6B4
  c->r[9]=c->r[0]+c->r[6]; // 8020B6B8
L_8020B6BC:;
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020B6BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020B6C0
  c->r[3]=R32(c->r[8]+0x00000000u); // 8020B6C4
  c->r[4]=0u+0xCC010000u; // 8020B6C8
  c->r[6]=c->r[7]+c->r[0]; // 8020B6CC
  c->r[5]=0u+0x00000061u; // 8020B6D0
  c->r[8]=R32(c->r[6]+0x00000180u); // 8020B6D4
  c->r[0]=0u+0x00000000u; // 8020B6D8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B6DC
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 8020B6E0
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 8020B6E4
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 8020B6E8
  W32(c->r[6]+0x00000180u,c->r[8]); // 8020B6EC
  c->r[8]=R32(c->r[6]+0x000001C0u); // 8020B6F0
  c->r[3]=R32(c->r[9]+0x00000000u); // 8020B6F4
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 8020B6F8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B6FC
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 8020B700
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 8020B704
  W32(c->r[6]+0x000001C0u,c->r[8]); // 8020B708
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020B70C
  return; // 8020B710
}

// GXSetTevColorIn
void f_8020B720(Ctx* __restrict c) {
  trace_call(0x8020B720u);
  c->r[11]=R32(c->r[2]+0xFFFFB080u); // 8020B720
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020B724
  c->r[3]=0u+0xCC010000u; // 8020B728
  c->r[8]=0u+0x00000061u; // 8020B72C
  c->r[10]=c->r[11]+c->r[0]; // 8020B730
  c->r[0]=0u+0x00000000u; // 8020B734
  c->r[9]=R32(c->r[10]+0x00000180u); // 8020B738
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 8020B73C
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 8020B740
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 8020B744
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 8020B748
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 8020B74C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8020B750
  W32(c->r[10]+0x00000180u,c->r[9]); // 8020B754
  W16(c->r[11]+0x00000002u,c->r[0]); // 8020B758
  return; // 8020B75C
}

// GXSetTevAlphaIn
void f_8020B760(Ctx* __restrict c) {
  trace_call(0x8020B760u);
  c->r[11]=R32(c->r[2]+0xFFFFB080u); // 8020B760
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020B764
  c->r[3]=0u+0xCC010000u; // 8020B768
  c->r[8]=0u+0x00000061u; // 8020B76C
  c->r[10]=c->r[11]+c->r[0]; // 8020B770
  c->r[0]=0u+0x00000000u; // 8020B774
  c->r[9]=R32(c->r[10]+0x000001C0u); // 8020B778
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 8020B77C
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 8020B780
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 8020B784
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 8020B788
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 8020B78C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8020B790
  W32(c->r[10]+0x000001C0u,c->r[9]); // 8020B794
  W16(c->r[11]+0x00000002u,c->r[0]); // 8020B798
  return; // 8020B79C
}

// GXSetTevColorOp
void f_8020B7A0(Ctx* __restrict c) {
  trace_call(0x8020B7A0u);
  c->r[10]=R32(c->r[2]+0xFFFFB080u); // 8020B7A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020B7A4
  cmps(c,0,(int32_t)c->r[4],1); // 8020B7A8
  c->r[9]=c->r[10]+c->r[0]; // 8020B7AC
  c->r[11]=R32(c->r[9]+0x00000180u); // 8020B7B0
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 8020B7B4
  if (crb(c,1)) { goto L_8020B7C8; } // 8020B7B8
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 8020B7BC
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 8020B7C0
  goto L_8020B7D0; // 8020B7C4
L_8020B7C8:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 8020B7C8
  c->r[11]=c->r[11]|0x00030000u; // 8020B7CC
L_8020B7D0:;
  c->r[3]=0u+0xCC010000u; // 8020B7D0
  c->r[0]=0u+0x00000061u; // 8020B7D4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B7D8
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 8020B7DC
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 8020B7E0
  c->r[0]=0u+0x00000000u; // 8020B7E4
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8020B7E8
  W32(c->r[9]+0x00000180u,c->r[11]); // 8020B7EC
  W16(c->r[10]+0x00000002u,c->r[0]); // 8020B7F0
  return; // 8020B7F4
}

// GXSetTevAlphaOp
void f_8020B800(Ctx* __restrict c) {
  trace_call(0x8020B800u);
  c->r[10]=R32(c->r[2]+0xFFFFB080u); // 8020B800
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020B804
  cmps(c,0,(int32_t)c->r[4],1); // 8020B808
  c->r[9]=c->r[10]+c->r[0]; // 8020B80C
  c->r[11]=R32(c->r[9]+0x000001C0u); // 8020B810
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 8020B814
  if (crb(c,1)) { goto L_8020B828; } // 8020B818
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 8020B81C
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 8020B820
  goto L_8020B830; // 8020B824
L_8020B828:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 8020B828
  c->r[11]=c->r[11]|0x00030000u; // 8020B82C
L_8020B830:;
  c->r[3]=0u+0xCC010000u; // 8020B830
  c->r[0]=0u+0x00000061u; // 8020B834
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020B838
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 8020B83C
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 8020B840
  c->r[0]=0u+0x00000000u; // 8020B844
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8020B848
  W32(c->r[9]+0x000001C0u,c->r[11]); // 8020B84C
  W16(c->r[10]+0x00000002u,c->r[0]); // 8020B850
  return; // 8020B854
}

// GXSetTevColor
void f_8020B860(Ctx* __restrict c) {
  trace_call(0x8020B860u);
  c->r[8]=R32(c->r[4]+0x00000000u); // 8020B860
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8020B864
  c->r[4]=0u+0xCC010000u; // 8020B868
  c->r[5]=0u+0x00000061u; // 8020B86C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B870
  c->r[0]=c->r[3]+0x000000E0u; // 8020B874
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 8020B878
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020B87C
  c->r[0]=c->r[3]+0x000000E1u; // 8020B880
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 8020B884
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 8020B888
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 8020B88C
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B890
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B894
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 8020B898
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 8020B89C
  c->r[0]=0u+0x00000000u; // 8020B8A0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020B8A4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B8A8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020B8AC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B8B0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020B8B4
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B8B8
  return; // 8020B8BC
}

// GXSetTevColorS10
void f_8020B8C0(Ctx* __restrict c) {
  trace_call(0x8020B8C0u);
  c->r[8]=R32(c->r[4]+0x00000000u); // 8020B8C0
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8020B8C4
  c->r[9]=R32(c->r[4]+0x00000004u); // 8020B8C8
  c->r[5]=0u+0xCC010000u; // 8020B8CC
  c->r[4]=0u+0x00000061u; // 8020B8D0
  c->r[0]=c->r[6]+0x000000E0u; // 8020B8D4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020B8D8
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 8020B8DC
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 8020B8E0
  c->r[6]=c->r[6]+0x000000E1u; // 8020B8E4
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 8020B8E8
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 8020B8EC
  c->r[6]=rotl(c->r[6],24)&0xFF000000u; // 8020B8F0
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B8F4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020B8F8
  c->r[6]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 8020B8FC
  c->r[6]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 8020B900
  c->r[0]=0u+0x00000000u; // 8020B904
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020B908
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020B90C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020B910
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 8020B914
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020B918
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B91C
  return; // 8020B920
}

// GXSetTevKColor
void f_8020B930(Ctx* __restrict c) {
  trace_call(0x8020B930u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 8020B930
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8020B934
  c->r[4]=0u+0xCC010000u; // 8020B938
  c->r[5]=0u+0x00000061u; // 8020B93C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B940
  c->r[0]=c->r[3]+0x000000E0u; // 8020B944
  c->r[7]=0u+0x00000008u; // 8020B948
  c->r[8]=rotl(c->r[0],24)&0xFF000000u; // 8020B94C
  c->r[0]=c->r[3]+0x000000E1u; // 8020B950
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 8020B954
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020B958
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 8020B95C
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 8020B960
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 8020B964
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 8020B968
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 8020B96C
  c->r[0]=0u+0x00000000u; // 8020B970
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 8020B974
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020B978
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 8020B97C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020B980
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020B984
  return; // 8020B988
}

// GXSetTevKColorSel
void f_8020B990(Ctx* __restrict c) {
  trace_call(0x8020B990u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8020B990
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020B994
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 8020B998
  c->r[3]=c->r[5]+c->r[0]; // 8020B99C
  if (crb(c,2)) { goto L_8020B9B4; } // 8020B9A0
  c->r[0]=R32(c->r[3]+0x00000200u); // 8020B9A4
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 8020B9A8
  W32(c->r[3]+0x00000200u,c->r[0]); // 8020B9AC
  goto L_8020B9C0; // 8020B9B0
L_8020B9B4:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 8020B9B4
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 8020B9B8
  W32(c->r[3]+0x00000200u,c->r[0]); // 8020B9BC
L_8020B9C0:;
  c->r[4]=0u+0xCC010000u; // 8020B9C0
  c->r[0]=0u+0x00000061u; // 8020B9C4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020B9C8
  c->r[0]=0u+0x00000000u; // 8020B9CC
  c->r[3]=R32(c->r[3]+0x00000200u); // 8020B9D0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020B9D4
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020B9D8
  return; // 8020B9DC
}

// GXSetTevKAlphaSel
void f_8020B9E0(Ctx* __restrict c) {
  trace_call(0x8020B9E0u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8020B9E0
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020B9E4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 8020B9E8
  c->r[3]=c->r[5]+c->r[0]; // 8020B9EC
  if (crb(c,2)) { goto L_8020BA04; } // 8020B9F0
  c->r[0]=R32(c->r[3]+0x00000200u); // 8020B9F4
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 8020B9F8
  W32(c->r[3]+0x00000200u,c->r[0]); // 8020B9FC
  goto L_8020BA10; // 8020BA00
L_8020BA04:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 8020BA04
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 8020BA08
  W32(c->r[3]+0x00000200u,c->r[0]); // 8020BA0C
L_8020BA10:;
  c->r[4]=0u+0xCC010000u; // 8020BA10
  c->r[0]=0u+0x00000061u; // 8020BA14
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BA18
  c->r[0]=0u+0x00000000u; // 8020BA1C
  c->r[3]=R32(c->r[3]+0x00000200u); // 8020BA20
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020BA24
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020BA28
  return; // 8020BA2C
}

// GXSetTevSwapMode
void f_8020BA30(Ctx* __restrict c) {
  trace_call(0x8020BA30u);
  c->r[9]=R32(c->r[2]+0xFFFFB080u); // 8020BA30
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020BA34
  c->r[6]=0u+0xCC010000u; // 8020BA38
  c->r[3]=0u+0x00000061u; // 8020BA3C
  c->r[8]=c->r[9]+c->r[0]; // 8020BA40
  c->r[0]=0u+0x00000000u; // 8020BA44
  c->r[7]=R32(c->r[8]+0x000001C0u); // 8020BA48
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 8020BA4C
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 8020BA50
  W32(c->r[8]+0x000001C0u,c->r[7]); // 8020BA54
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 8020BA58
  c->r[3]=R32(c->r[8]+0x000001C0u); // 8020BA5C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020BA60
  W16(c->r[9]+0x00000002u,c->r[0]); // 8020BA64
  return; // 8020BA68
}

// GXSetTevSwapModeTable
void f_8020BA70(Ctx* __restrict c) {
  trace_call(0x8020BA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020BA70
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8020BA74
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8020BA78
  c->r[8]=0u+0xCC010000u; // 8020BA7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020BA80
  c->r[9]=0u+0x00000061u; // 8020BA84
  c->r[3]=c->r[12]+0x00000001u; // 8020BA88
  c->r[0]=0u+0x00000000u; // 8020BA8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020BA90
  c->r[30]=R32(c->r[2]+0xFFFFB080u); // 8020BA94
  c->r[31]=c->r[30]+0x00000200u; // 8020BA98
  c->r[10]=R32(c->r[31]+c->r[11]); // 8020BA9C
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 8020BAA0
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 8020BAA4
  W32(c->r[31]+c->r[11],c->r[10]); // 8020BAA8
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020BAAC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8020BAB0
  c->r[3]=R32(c->r[31]+c->r[11]); // 8020BAB4
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 8020BAB8
  c->r[3]=R32(c->r[31]+c->r[4]); // 8020BABC
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 8020BAC0
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 8020BAC4
  W32(c->r[31]+c->r[4],c->r[3]); // 8020BAC8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 8020BACC
  c->r[3]=R32(c->r[31]+c->r[4]); // 8020BAD0
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 8020BAD4
  W16(c->r[30]+0x00000002u,c->r[0]); // 8020BAD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020BADC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020BAE0
  c->r[1]=c->r[1]+0x00000010u; // 8020BAE4
  return; // 8020BAE8
}

// GXSetAlphaCompare
void f_8020BAF0(Ctx* __restrict c) {
  trace_call(0x8020BAF0u);
  c->r[8]=0u+0xCC010000u; // 8020BAF0
  c->r[0]=0u+0x00000061u; // 8020BAF4
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 8020BAF8
  c->r[9]=0u+0xF3000000u; // 8020BAFC
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 8020BB00
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020BB04
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 8020BB08
  c->r[0]=0u+0x00000000u; // 8020BB0C
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 8020BB10
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 8020BB14
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 8020BB18
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 8020BB1C
  W16(c->r[4]+0x00000002u,c->r[0]); // 8020BB20
  return; // 8020BB24
}

// GXSetZTexture
void f_8020BB30(Ctx* __restrict c) {
  trace_call(0x8020BB30u);
  cmps(c,0,(int32_t)c->r[4],17); // 8020BB30
  c->r[7]=0u+0x00000000u; // 8020BB34
  c->r[0]=0u+0x000000F4u; // 8020BB38
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 8020BB3C
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020BB40
  if (crb(c,2)) { goto L_8020BB5C; } // 8020BB44
  cmps(c,0,(int32_t)c->r[4],19); // 8020BB48
  if (crb(c,2)) { goto L_8020BB64; } // 8020BB4C
  cmps(c,0,(int32_t)c->r[4],22); // 8020BB50
  if (crb(c,2)) { goto L_8020BB6C; } // 8020BB54
  goto L_8020BB74; // 8020BB58
L_8020BB5C:;
  c->r[5]=0u+0x00000000u; // 8020BB5C
  goto L_8020BB78; // 8020BB60
L_8020BB64:;
  c->r[5]=0u+0x00000001u; // 8020BB64
  goto L_8020BB78; // 8020BB68
L_8020BB6C:;
  c->r[5]=0u+0x00000002u; // 8020BB6C
  goto L_8020BB78; // 8020BB70
L_8020BB74:;
  c->r[5]=0u+0x00000002u; // 8020BB74
L_8020BB78:;
  c->r[4]=0u+0xCC010000u; // 8020BB78
  c->r[0]=0u+0x00000061u; // 8020BB7C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BB80
  c->r[6]=0u+0x00000000u; // 8020BB84
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 8020BB88
  c->r[5]=0u+0x000000F5u; // 8020BB8C
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 8020BB90
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 8020BB94
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020BB98
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020BB9C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BBA0
  c->r[0]=0u+0x00000000u; // 8020BBA4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020BBA8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020BBAC
  return; // 8020BBB0
}

// GXSetTevOrder
void f_8020BBC0(Ctx* __restrict c) {
  trace_call(0x8020BBC0u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 8020BBC0
  c->r[7]=0u+0x00000008u; // 8020BBC4
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 8020BBC8
  c->r[10]=R32(c->r[2]+0xFFFFB080u); // 8020BBCC
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 8020BBD0
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020BBD4
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 8020BBD8
  c->r[9]=c->r[9]+c->r[3]; // 8020BBDC
  c->r[7]=c->r[10]+c->r[8]; // 8020BBE0
  cmps(c,0,(int32_t)c->r[4],8); // 8020BBE4
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 8020BBE8
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 8020BBEC
  W32(c->r[7]+0x000005A4u,c->r[5]); // 8020BBF0
  c->r[7]=c->r[10]+c->r[8]; // 8020BBF4
  c->r[9]=c->r[11]&~c->r[0]; // 8020BBF8
  if (crb(c,0)) { goto L_8020BC1C; } // 8020BBFC
  c->r[0]=0u+0x00000001u; // 8020BC00
  c->r[8]=R32(c->r[10]+0x000005E8u); // 8020BC04
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8020BC08
  c->r[4]=0u+0x00000000u; // 8020BC0C
  c->r[0]=c->r[8]&~c->r[0]; // 8020BC10
  W32(c->r[10]+0x000005E8u,c->r[0]); // 8020BC14
  goto L_8020BC30; // 8020BC18
L_8020BC1C:;
  c->r[0]=0u+0x00000001u; // 8020BC1C
  c->r[8]=R32(c->r[10]+0x000005E8u); // 8020BC20
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8020BC24
  c->r[0]=c->r[8]|c->r[0]; // 8020BC28
  W32(c->r[10]+0x000005E8u,c->r[0]); // 8020BC2C
L_8020BC30:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8020BC30
  if (crb(c,2)) { goto L_8020BC94; } // 8020BC34
  c->r[8]=R32(c->r[7]+0x00000150u); // 8020BC38
  cmps(c,0,(int32_t)c->r[6],255); // 8020BC3C
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 8020BC40
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 8020BC44
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BC48
  if (!crb(c,2)) { goto L_8020BC58; } // 8020BC4C
  c->r[0]=0u+0x00000007u; // 8020BC50
  goto L_8020BC68; // 8020BC54
L_8020BC58:;
  c->r[3]=0u+0x803A0000u; // 8020BC58
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8020BC5C
  c->r[3]=c->r[3]+0x00006108u; // 8020BC60
  c->r[0]=R32(c->r[3]+c->r[0]); // 8020BC64
L_8020BC68:;
  cmps(c,0,(int32_t)c->r[5],255); // 8020BC68
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 8020BC6C
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BC70
  c->r[3]=0u+0x00000000u; // 8020BC74
  if (crb(c,2)) { goto L_8020BC88; } // 8020BC78
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 8020BC7C
  if (!crb(c,2)) { goto L_8020BC88; } // 8020BC80
  c->r[3]=0u+0x00000001u; // 8020BC84
L_8020BC88:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 8020BC88
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BC8C
  goto L_8020BCEC; // 8020BC90
L_8020BC94:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 8020BC94
  cmps(c,0,(int32_t)c->r[6],255); // 8020BC98
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 8020BC9C
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 8020BCA0
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BCA4
  if (!crb(c,2)) { goto L_8020BCB4; } // 8020BCA8
  c->r[0]=0u+0x00000007u; // 8020BCAC
  goto L_8020BCC4; // 8020BCB0
L_8020BCB4:;
  c->r[3]=0u+0x803A0000u; // 8020BCB4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8020BCB8
  c->r[3]=c->r[3]+0x00006108u; // 8020BCBC
  c->r[0]=R32(c->r[3]+c->r[0]); // 8020BCC0
L_8020BCC4:;
  cmps(c,0,(int32_t)c->r[5],255); // 8020BCC4
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 8020BCC8
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BCCC
  c->r[3]=0u+0x00000000u; // 8020BCD0
  if (crb(c,2)) { goto L_8020BCE4; } // 8020BCD4
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 8020BCD8
  if (!crb(c,2)) { goto L_8020BCE4; } // 8020BCDC
  c->r[3]=0u+0x00000001u; // 8020BCE0
L_8020BCE4:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 8020BCE4
  W32(c->r[7]+0x00000150u,c->r[8]); // 8020BCE8
L_8020BCEC:;
  c->r[4]=0u+0xCC010000u; // 8020BCEC
  c->r[0]=0u+0x00000061u; // 8020BCF0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BCF4
  c->r[0]=0u+0x00000000u; // 8020BCF8
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020BCFC
  c->r[3]=R32(c->r[7]+0x00000150u); // 8020BD00
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020BD04
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020BD08
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8020BD0C
  c->r[0]=c->r[0]|0x00000001u; // 8020BD10
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8020BD14
  return; // 8020BD18
}

// GXSetNumTevStages
void f_8020BD20(Ctx* __restrict c) {
  trace_call(0x8020BD20u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020BD20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8020BD24
  c->r[3]=R32(c->r[4]+0x00000254u); // 8020BD28
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 8020BD2C
  W32(c->r[4]+0x00000254u,c->r[3]); // 8020BD30
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8020BD34
  c->r[0]=c->r[0]|0x00000004u; // 8020BD38
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8020BD3C
  return; // 8020BD40
}

// GXSetFog
void f_8020BD50(Ctx* __restrict c) {
  trace_call(0x8020BD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020BD50
  c->r[0]=c->lr; // 8020BD54
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020BD58
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8020BD5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8020BD60
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8020BD64
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 8020BD68
  W32(c->r[1]+0x00000028u,c->r[30]); // 8020BD6C
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 8020BD70
  W32(c->r[1]+0x00000024u,c->r[29]); // 8020BD74
  c->r[29]=c->r[4]|c->r[4]; // 8020BD78
  W32(c->r[1]+0x00000020u,c->r[28]); // 8020BD7C
  if (crb(c,2)) { goto L_8020BDCC; } // 8020BD80
  fcmp(c,0,c->f[4],c->f[3]); // 8020BD84
  if (crb(c,2)) { goto L_8020BD94; } // 8020BD88
  fcmp(c,0,c->f[2],c->f[1]); // 8020BD8C
  if (!crb(c,2)) { goto L_8020BDA4; } // 8020BD90
L_8020BD94:;
  {uint32_t ea=c->r[2]+0xFFFFB0F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020BD94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020BD98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8020BD9C
  goto L_8020BED4; // 8020BDA0
L_8020BDA4:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 8020BDA4
  {uint32_t ea=c->r[2]+0xFFFFB0FCu; c->f[5]=c->ps1[5]=RF32(ea);} // 8020BDA8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 8020BDAC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 8020BDB0
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 8020BDB4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 8020BDB8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8020BDBC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8020BDC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8020BDC4
  goto L_8020BED4; // 8020BDC8
L_8020BDCC:;
  fcmp(c,0,c->f[4],c->f[3]); // 8020BDCC
  if (crb(c,2)) { goto L_8020BDDC; } // 8020BDD0
  fcmp(c,0,c->f[2],c->f[1]); // 8020BDD4
  if (!crb(c,2)) { goto L_8020BDEC; } // 8020BDD8
L_8020BDDC:;
  {uint32_t ea=c->r[2]+0xFFFFB0F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020BDDC
  {uint32_t ea=c->r[2]+0xFFFFB100u; c->f[4]=c->ps1[4]=RF32(ea);} // 8020BDE0
  c->f[31]=c->f[3]; // 8020BDE4
  goto L_8020BE08; // 8020BDE8
L_8020BDEC:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 8020BDEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8020BDF0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8020BDF4
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 8020BDF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8020BDFC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 8020BE00
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 8020BE04
L_8020BE08:;
  {uint32_t ea=c->r[2]+0xFFFFB100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020BE08
  c->r[28]=0u+0x00000000u; // 8020BE0C
  {uint32_t ea=c->r[2]+0xFFFFB108u; c->f[0]=RF64(ea);} // 8020BE10
  goto L_8020BE20; // 8020BE14
L_8020BE18:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 8020BE18
  c->r[28]=c->r[28]+0x00000001u; // 8020BE1C
L_8020BE20:;
  fcmp(c,0,c->f[4],c->f[0]); // 8020BE20
  if (crb(c,1)) { IRQCHK(c); goto L_8020BE18; } // 8020BE24
  {uint32_t ea=c->r[2]+0xFFFFB118u; c->f[0]=RF64(ea);} // 8020BE28
  {uint32_t ea=c->r[2]+0xFFFFB110u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020BE2C
  {uint32_t ea=c->r[2]+0xFFFFB0F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020BE30
  goto L_8020BE40; // 8020BE34
L_8020BE38:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 8020BE38
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 8020BE3C
L_8020BE40:;
  fcmp(c,0,c->f[4],c->f[1]); // 8020BE40
  c->r[0]=c->cr; // 8020BE44
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8020BE48
  if (crb(c,2)) { goto L_8020BE58; } // 8020BE4C
  fcmp(c,0,c->f[4],c->f[0]); // 8020BE50
  if (crb(c,0)) { IRQCHK(c); goto L_8020BE38; } // 8020BE54
L_8020BE58:;
  c->r[0]=c->r[28]+0x00000001u; // 8020BE58
  c->r[3]=0u+0x00000001u; // 8020BE5C
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8020BE60
  {uint32_t ea=c->r[2]+0xFFFFB120u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020BE64
  c->r[0]=0u+0x43300000u; // 8020BE68
  W32(c->r[1]+0x00000010u,c->r[0]); // 8020BE6C
  c->r[3]=c->r[3]^0x80000000u; // 8020BE70
  {uint32_t ea=c->r[2]+0xFFFFB128u; c->f[2]=RF64(ea);} // 8020BE74
  W32(c->r[1]+0x00000014u,c->r[3]); // 8020BE78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 8020BE7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8020BE80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8020BE84
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 8020BE88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020BE8C
  c->lr=0x8020BE94u; f_800C2D24(c); // 8020BE90
  c->r[4]=0u+0xCC010000u; // 8020BE94
  c->r[0]=0u+0x00000061u; // 8020BE98
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BE9C
  c->r[6]=0u+0x00000000u; // 8020BEA0
  c->r[6]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 8020BEA4
  c->r[3]=0u+0x000000EFu; // 8020BEA8
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020BEAC
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020BEB0
  c->r[5]=c->r[28]+0x00000001u; // 8020BEB4
  c->r[3]=0u+0x000000F0u; // 8020BEB8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020BEBC
  c->r[6]=0u+0x00000000u; // 8020BEC0
  c->r[6]=(rotl(c->r[5],0)&0x0000001Fu)|(c->r[6]&~0x0000001Fu); // 8020BEC4
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020BEC8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8020BECC
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020BED0
L_8020BED4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8020BED4
  c->r[4]=0u+0xCC010000u; // 8020BED8
  c->r[5]=0u+0x00000061u; // 8020BEDC
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8020BEE0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020BEE4
  c->r[7]=0u+0x00000000u; // 8020BEE8
  c->r[3]=0u+0x000000EEu; // 8020BEEC
  c->r[9]=R32(c->r[1]+0x00000008u); // 8020BEF0
  c->r[7]=(rotl(c->r[6],20)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 8020BEF4
  c->r[8]=0u+0x00000000u; // 8020BEF8
  c->r[7]=(rotl(c->r[6],20)&0x0007F800u)|(c->r[7]&~0x0007F800u); // 8020BEFC
  c->r[7]=(rotl(c->r[6],20)&0x00080000u)|(c->r[7]&~0x00080000u); // 8020BF00
  c->r[8]=(rotl(c->r[9],20)&0x000007FFu)|(c->r[8]&~0x000007FFu); // 8020BF04
  c->r[7]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8020BF08
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 8020BF0C
  c->r[8]=(rotl(c->r[9],20)&0x0007F800u)|(c->r[8]&~0x0007F800u); // 8020BF10
  c->r[6]=0u+0x00000000u; // 8020BF14
  c->r[8]=(rotl(c->r[9],20)&0x00080000u)|(c->r[8]&~0x00080000u); // 8020BF18
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020BF1C
  c->r[8]=(rotl(c->r[30],20)&0x00100000u)|(c->r[8]&~0x00100000u); // 8020BF20
  c->r[7]=0u+0x000000F1u; // 8020BF24
  c->r[8]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[8]&~0x00E00000u); // 8020BF28
  c->r[6]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 8020BF2C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020BF30
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 8020BF34
  c->r[0]=0u+0x000000F2u; // 8020BF38
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020BF3C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020BF40
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020BF44
  c->r[0]=0u+0x00000000u; // 8020BF48
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020BF4C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020BF50
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8020BF54
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8020BF58
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8020BF5C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8020BF60
  c->r[29]=R32(c->r[1]+0x00000024u); // 8020BF64
  c->r[28]=R32(c->r[1]+0x00000020u); // 8020BF68
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020BF6C
  c->lr=c->r[0]; // 8020BF70
  c->r[1]=c->r[1]+0x00000040u; // 8020BF74
  return; // 8020BF78
}

// fn_8020BF80
void f_8020BF80(Ctx* __restrict c) {
  trace_call(0x8020BF80u);
  cmps(c,0,(int32_t)c->r[3],0); // 8020BF80
  if (crb(c,2)) { goto L_8020C058; } // 8020BF84
  c->r[11]=R16(c->r[5]+0x00000000u); // 8020BF88
  c->r[6]=0u+0xCC010000u; // 8020BF8C
  c->r[0]=0u+0x00000061u; // 8020BF90
  c->r[9]=R16(c->r[5]+0x00000002u); // 8020BF94
  c->r[10]=0u+0x00000000u; // 8020BF98
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020BF9C
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 8020BFA0
  c->r[7]=0u+0x000000E9u; // 8020BFA4
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 8020BFA8
  c->r[11]=R16(c->r[5]+0x00000004u); // 8020BFAC
  c->r[8]=c->r[10]|c->r[10]; // 8020BFB0
  c->r[9]=R16(c->r[5]+0x00000006u); // 8020BFB4
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020BFB8
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020BFBC
  c->r[10]=0u+0x00000000u; // 8020BFC0
  c->r[7]=0u+0x000000EAu; // 8020BFC4
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 8020BFC8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020BFCC
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 8020BFD0
  c->r[11]=R16(c->r[5]+0x00000008u); // 8020BFD4
  c->r[8]=c->r[10]|c->r[10]; // 8020BFD8
  c->r[9]=R16(c->r[5]+0x0000000Au); // 8020BFDC
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020BFE0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020BFE4
  c->r[10]=0u+0x00000000u; // 8020BFE8
  c->r[7]=0u+0x000000EBu; // 8020BFEC
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 8020BFF0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020BFF4
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 8020BFF8
  c->r[11]=R16(c->r[5]+0x0000000Cu); // 8020BFFC
  c->r[8]=c->r[10]|c->r[10]; // 8020C000
  c->r[9]=R16(c->r[5]+0x0000000Eu); // 8020C004
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020C008
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020C00C
  c->r[10]=0u+0x00000000u; // 8020C010
  c->r[7]=0u+0x000000ECu; // 8020C014
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 8020C018
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020C01C
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 8020C020
  c->r[11]=R16(c->r[5]+0x00000010u); // 8020C024
  c->r[8]=c->r[10]|c->r[10]; // 8020C028
  c->r[9]=R16(c->r[5]+0x00000012u); // 8020C02C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020C030
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020C034
  c->r[10]=0u+0x00000000u; // 8020C038
  c->r[7]=0u+0x000000EDu; // 8020C03C
  c->r[10]=(rotl(c->r[11],0)&0x00000FFFu)|(c->r[10]&~0x00000FFFu); // 8020C040
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020C044
  c->r[10]=(rotl(c->r[9],12)&0x00FFF000u)|(c->r[10]&~0x00FFF000u); // 8020C048
  c->r[8]=c->r[10]|c->r[10]; // 8020C04C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8020C050
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020C054
L_8020C058:;
  c->r[5]=0u+0xCC010000u; // 8020C058
  c->r[0]=0u+0x00000061u; // 8020C05C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C060
  c->r[4]=c->r[4]+0x00000156u; // 8020C064
  c->r[6]=0u+0x00000000u; // 8020C068
  c->r[0]=0u+0x00000000u; // 8020C06C
  c->r[6]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 8020C070
  c->r[4]=0u+0x000000E8u; // 8020C074
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 8020C078
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020C07C
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020C080
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020C084
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020C088
  return; // 8020C08C
}

// GXSetBlendMode
void f_8020C090(Ctx* __restrict c) {
  trace_call(0x8020C090u);
  c->r[10]=R32(c->r[2]+0xFFFFB080u); // 8020C090
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8020C094
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 8020C098
  c->r[7]=0u+0xCC010000u; // 8020C09C
  c->r[9]=R32(c->r[10]+0x00000220u); // 8020C0A0
  c->r[0]=cntlz(c->r[0]); // 8020C0A4
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 8020C0A8
  c->r[8]=cntlz(c->r[8]); // 8020C0AC
  c->r[0]=0u+0x00000061u; // 8020C0B0
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 8020C0B4
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 8020C0B8
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 8020C0BC
  c->r[0]=0u+0x00000000u; // 8020C0C0
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 8020C0C4
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 8020C0C8
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 8020C0CC
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 8020C0D0
  W32(c->r[10]+0x00000220u,c->r[9]); // 8020C0D4
  W16(c->r[10]+0x00000002u,c->r[0]); // 8020C0D8
  return; // 8020C0DC
}

// GXSetColorUpdate
void f_8020C0E0(Ctx* __restrict c) {
  trace_call(0x8020C0E0u);
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020C0E0
  c->r[4]=0u+0xCC010000u; // 8020C0E4
  c->r[5]=0u+0x00000061u; // 8020C0E8
  c->r[0]=0u+0x00000000u; // 8020C0EC
  c->r[6]=R32(c->r[7]+0x00000220u); // 8020C0F0
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 8020C0F4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020C0F8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020C0FC
  W32(c->r[7]+0x00000220u,c->r[6]); // 8020C100
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020C104
  return; // 8020C108
}

// GXSetAlphaUpdate
void f_8020C110(Ctx* __restrict c) {
  trace_call(0x8020C110u);
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020C110
  c->r[4]=0u+0xCC010000u; // 8020C114
  c->r[5]=0u+0x00000061u; // 8020C118
  c->r[0]=0u+0x00000000u; // 8020C11C
  c->r[6]=R32(c->r[7]+0x00000220u); // 8020C120
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 8020C124
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020C128
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020C12C
  W32(c->r[7]+0x00000220u,c->r[6]); // 8020C130
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020C134
  return; // 8020C138
}

// GXSetZMode
void f_8020C140(Ctx* __restrict c) {
  trace_call(0x8020C140u);
  c->r[9]=R32(c->r[2]+0xFFFFB080u); // 8020C140
  c->r[6]=0u+0xCC010000u; // 8020C144
  c->r[7]=0u+0x00000061u; // 8020C148
  c->r[0]=0u+0x00000000u; // 8020C14C
  c->r[8]=R32(c->r[9]+0x00000228u); // 8020C150
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 8020C154
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 8020C158
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8020C15C
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 8020C160
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8020C164
  W32(c->r[9]+0x00000228u,c->r[8]); // 8020C168
  W16(c->r[9]+0x00000002u,c->r[0]); // 8020C16C
  return; // 8020C170
}

// GXSetZCompLoc
void f_8020C180(Ctx* __restrict c) {
  trace_call(0x8020C180u);
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020C180
  c->r[4]=0u+0xCC010000u; // 8020C184
  c->r[5]=0u+0x00000061u; // 8020C188
  c->r[0]=0u+0x00000000u; // 8020C18C
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 8020C190
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 8020C194
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 8020C198
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020C19C
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 8020C1A0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8020C1A4
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020C1A8
  return; // 8020C1AC
}

// GXSetPixelFmt
void f_8020C1B0(Ctx* __restrict c) {
  trace_call(0x8020C1B0u);
  c->r[9]=R32(c->r[2]+0xFFFFB080u); // 8020C1B0
  c->r[6]=0u+0x803A0000u; // 8020C1B4
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020C1B8
  c->r[6]=c->r[6]+0x00006130u; // 8020C1BC
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 8020C1C0
  c->r[0]=R32(c->r[6]+c->r[7]); // 8020C1C4
  c->r[5]=c->r[8]|c->r[8]; // 8020C1C8
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 8020C1CC
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 8020C1D0
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 8020C1D4
  cmpu(c,0,c->r[8],c->r[5]); // 8020C1D8
  if (crb(c,2)) { goto L_8020C214; } // 8020C1DC
  c->r[5]=0u+0xCC010000u; // 8020C1E0
  c->r[0]=0u+0x00000061u; // 8020C1E4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C1E8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8020C1EC
  c->r[4]=cntlz(c->r[0]); // 8020C1F0
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 8020C1F4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C1F8
  c->r[0]=R32(c->r[9]+0x00000254u); // 8020C1FC
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 8020C200
  W32(c->r[9]+0x00000254u,c->r[0]); // 8020C204
  c->r[0]=R32(c->r[9]+0x000005FCu); // 8020C208
  c->r[0]=c->r[0]|0x00000004u; // 8020C20C
  W32(c->r[9]+0x000005FCu,c->r[0]); // 8020C210
L_8020C214:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 8020C214
  cmpu(c,0,c->r[0],0x00000004u); // 8020C218
  if (!crb(c,2)) { goto L_8020C24C; } // 8020C21C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8020C220
  c->r[4]=R32(c->r[9]+0x00000224u); // 8020C224
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 8020C228
  c->r[3]=0u+0xCC010000u; // 8020C22C
  c->r[0]=0u+0x00000042u; // 8020C230
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8020C234
  W32(c->r[9]+0x00000224u,c->r[4]); // 8020C238
  c->r[0]=0u+0x00000061u; // 8020C23C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020C240
  c->r[0]=R32(c->r[9]+0x00000224u); // 8020C244
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020C248
L_8020C24C:;
  c->r[0]=0u+0x00000000u; // 8020C24C
  W16(c->r[9]+0x00000002u,c->r[0]); // 8020C250
  return; // 8020C254
}

// GXSetDither
void f_8020C260(Ctx* __restrict c) {
  trace_call(0x8020C260u);
  c->r[7]=R32(c->r[2]+0xFFFFB080u); // 8020C260
  c->r[4]=0u+0xCC010000u; // 8020C264
  c->r[5]=0u+0x00000061u; // 8020C268
  c->r[0]=0u+0x00000000u; // 8020C26C
  c->r[6]=R32(c->r[7]+0x00000220u); // 8020C270
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 8020C274
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020C278
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8020C27C
  W32(c->r[7]+0x00000220u,c->r[6]); // 8020C280
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020C284
  return; // 8020C288
}

// GXSetDstAlpha
void f_8020C290(Ctx* __restrict c) {
  trace_call(0x8020C290u);
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020C290
  c->r[5]=0u+0xCC010000u; // 8020C294
  c->r[6]=0u+0x00000061u; // 8020C298
  c->r[0]=0u+0x00000000u; // 8020C29C
  c->r[7]=R32(c->r[8]+0x00000224u); // 8020C2A0
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 8020C2A4
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 8020C2A8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8020C2AC
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 8020C2B0
  W32(c->r[8]+0x00000224u,c->r[7]); // 8020C2B4
  W16(c->r[8]+0x00000002u,c->r[0]); // 8020C2B8
  return; // 8020C2BC
}

// GXSetFieldMask
void f_8020C2C0(Ctx* __restrict c) {
  trace_call(0x8020C2C0u);
  c->r[5]=0u+0xCC010000u; // 8020C2C0
  c->r[0]=0u+0x00000061u; // 8020C2C4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C2C8
  c->r[6]=0u+0x00000000u; // 8020C2CC
  c->r[0]=0u+0x00000044u; // 8020C2D0
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 8020C2D4
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 8020C2D8
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020C2DC
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020C2E0
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020C2E4
  c->r[0]=0u+0x00000000u; // 8020C2E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020C2EC
  return; // 8020C2F0
}

// GXSetFieldMode
void f_8020C300(Ctx* __restrict c) {
  trace_call(0x8020C300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C300
  c->r[0]=c->lr; // 8020C304
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020C308
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020C30C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020C310
  c->r[31]=0u+0xCC010000u; // 8020C314
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020C318
  c->r[30]=0u+0x00000061u; // 8020C31C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020C320
  c->r[29]=c->r[3]|c->r[3]; // 8020C324
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 8020C328
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 8020C32C
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 8020C330
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 8020C334
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 8020C338
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 8020C33C
  c->lr=0x8020C344u; f_8020B650(c); // 8020C340
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 8020C344
  c->r[0]=c->r[29]|0x68000000u; // 8020C348
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 8020C34C
  c->lr=0x8020C354u; f_8020B650(c); // 8020C350
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020C354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020C358
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020C35C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020C360
  c->lr=c->r[0]; // 8020C364
  c->r[1]=c->r[1]+0x00000020u; // 8020C368
  return; // 8020C36C
}

// fn_8020C370
void f_8020C370(Ctx* __restrict c) {
  trace_call(0x8020C370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C370
  c->r[0]=c->lr; // 8020C374
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020C378
  c->r[11]=c->r[1]+0x00000020u; // 8020C37C
  c->lr=0x8020C384u; f_800C2E4C(c); // 8020C380
  c->r[30]=R32(c->r[2]+0xFFFFB080u); // 8020C384
  c->r[31]=0u+0x80490000u; // 8020C388
  c->r[31]=c->r[31]+0x000010A8u; // 8020C38C
  c->r[27]=c->r[3]|c->r[3]; // 8020C390
  c->r[0]=R32(c->r[30]+0x000005FCu); // 8020C394
  c->r[28]=c->r[4]|c->r[4]; // 8020C398
  c->r[29]=c->r[31]+0x00000000u; // 8020C39C
  cmps(c,0,(int32_t)c->r[0],0); // 8020C3A0
  if (crb(c,2)) { goto L_8020C3AC; } // 8020C3A4
  c->lr=0x8020C3ACu; f_80208D50(c); // 8020C3A8
L_8020C3AC:;
  c->r[0]=R8(c->r[30]+0x000005F9u); // 8020C3AC
  cmps(c,0,(int32_t)c->r[0],0); // 8020C3B0
  if (crb(c,2)) { goto L_8020C3C8; } // 8020C3B4
  c->r[4]=c->r[30]|c->r[30]; // 8020C3B8
  c->r[3]=c->r[31]+0x00000080u; // 8020C3BC
  c->r[5]=0u+0x00000600u; // 8020C3C0
  c->lr=0x8020C3C8u; f_80004000(c); // 8020C3C4
L_8020C3C8:;
  c->r[4]=c->r[27]+c->r[28]; // 8020C3C8
  c->r[3]=0u+0x00000000u; // 8020C3CC
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 8020C3D0
  W32(c->r[29]+0x00000000u,c->r[27]); // 8020C3D4
  c->r[0]=0u+0x00000001u; // 8020C3D8
  W32(c->r[29]+0x00000004u,c->r[4]); // 8020C3DC
  W32(c->r[29]+0x00000008u,c->r[28]); // 8020C3E0
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8020C3E4
  W32(c->r[29]+0x00000014u,c->r[27]); // 8020C3E8
  W32(c->r[29]+0x00000018u,c->r[27]); // 8020C3EC
  W8(c->r[30]+0x000005F8u,c->r[0]); // 8020C3F0
  c->lr=0x8020C3F8u; f_80208530(c); // 8020C3F4
  c->r[3]=c->r[31]+0x00000680u; // 8020C3F8
  c->lr=0x8020C400u; f_80207150(c); // 8020C3FC
  c->r[3]=c->r[31]+0x00000000u; // 8020C400
  c->lr=0x8020C408u; f_80206BD0(c); // 8020C404
  c->lr=0x8020C40Cu; f_80208590(c); // 8020C408
  c->r[11]=c->r[1]+0x00000020u; // 8020C40C
  c->lr=0x8020C414u; f_800C2E98(c); // 8020C410
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020C414
  c->lr=c->r[0]; // 8020C418
  c->r[1]=c->r[1]+0x00000020u; // 8020C41C
  return; // 8020C420
}

// fn_8020C430
void f_8020C430(Ctx* __restrict c) {
  trace_call(0x8020C430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C430
  c->r[0]=c->lr; // 8020C434
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020C438
  c->r[11]=c->r[1]+0x00000020u; // 8020C43C
  c->lr=0x8020C444u; f_800C2E48(c); // 8020C440
  c->r[30]=0u+0x80490000u; // 8020C444
  c->r[30]=c->r[30]+0x000010A8u; // 8020C448
  c->lr=0x8020C450u; f_80208530(c); // 8020C44C
  c->r[3]=c->r[30]+0x00000000u; // 8020C450
  c->lr=0x8020C458u; f_80207150(c); // 8020C454
  c->r[3]=c->r[30]+0x00000000u; // 8020C458
  c->lr=0x8020C460u; f_802071F0(c); // 8020C45C
  c->r[31]=c->r[3]|c->r[3]; // 8020C460
  c->r[3]=c->r[30]+0x00000680u; // 8020C464
  c->lr=0x8020C46Cu; f_80206BD0(c); // 8020C468
  c->r[29]=R32(c->r[2]+0xFFFFB080u); // 8020C46C
  c->r[0]=R8(c->r[29]+0x000005F9u); // 8020C470
  cmps(c,0,(int32_t)c->r[0],0); // 8020C474
  if (crb(c,2)) { goto L_8020C4A8; } // 8020C478
  c->lr=0x8020C480u; f_802494C0(c); // 8020C47C
  c->r[28]=R32(c->r[2]+0xFFFFB080u); // 8020C480
  c->r[27]=c->r[3]|c->r[3]; // 8020C484
  c->r[4]=c->r[30]+0x00000080u; // 8020C488
  c->r[5]=0u+0x00000600u; // 8020C48C
  c->r[26]=R32(c->r[28]+0x00000008u); // 8020C490
  c->r[3]=c->r[28]|c->r[28]; // 8020C494
  c->lr=0x8020C49Cu; f_80004000(c); // 8020C498
  W32(c->r[28]+0x00000008u,c->r[26]); // 8020C49C
  c->r[3]=c->r[27]|c->r[27]; // 8020C4A0
  c->lr=0x8020C4A8u; f_80249500(c); // 8020C4A4
L_8020C4A8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 8020C4A8
  c->r[0]=0u+0x00000000u; // 8020C4AC
  W8(c->r[29]+0x000005F8u,c->r[0]); // 8020C4B0
  if (!crb(c,2)) { goto L_8020C4C4; } // 8020C4B4
  c->r[3]=c->r[30]+0x00000000u; // 8020C4B8
  c->lr=0x8020C4C0u; f_802071E0(c); // 8020C4BC
  goto L_8020C4C8; // 8020C4C0
L_8020C4C4:;
  c->r[3]=0u+0x00000000u; // 8020C4C4
L_8020C4C8:;
  c->r[11]=c->r[1]+0x00000020u; // 8020C4C8
  c->lr=0x8020C4D0u; f_800C2E94(c); // 8020C4CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020C4D0
  c->lr=c->r[0]; // 8020C4D4
  c->r[1]=c->r[1]+0x00000020u; // 8020C4D8
  return; // 8020C4DC
}

// GXCallDisplayList
void f_8020C4E0(Ctx* __restrict c) {
  trace_call(0x8020C4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C4E0
  c->r[0]=c->lr; // 8020C4E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020C4E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020C4EC
  c->r[31]=R32(c->r[2]+0xFFFFB080u); // 8020C4F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020C4F4
  c->r[30]=c->r[4]|c->r[4]; // 8020C4F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020C4FC
  c->r[29]=c->r[3]|c->r[3]; // 8020C500
  c->r[0]=R32(c->r[31]+0x000005FCu); // 8020C504
  cmps(c,0,(int32_t)c->r[0],0); // 8020C508
  if (crb(c,2)) { goto L_8020C514; } // 8020C50C
  c->lr=0x8020C514u; f_80208D50(c); // 8020C510
L_8020C514:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020C514
  cmps(c,0,(int32_t)c->r[0],0); // 8020C518
  if (!crb(c,2)) { goto L_8020C524; } // 8020C51C
  c->lr=0x8020C524u; f_80209120(c); // 8020C520
L_8020C524:;
  c->r[3]=0u+0xCC010000u; // 8020C524
  c->r[0]=0u+0x00000040u; // 8020C528
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020C52C
  W32(c->r[3]+0xFFFF8000u,c->r[29]); // 8020C530
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8020C534
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020C538
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020C53C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020C540
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020C544
  c->lr=c->r[0]; // 8020C548
  c->r[1]=c->r[1]+0x00000020u; // 8020C54C
  return; // 8020C550
}

// __GXSetProjection
void f_8020C560(Ctx* __restrict c) {
  trace_call(0x8020C560u);
  c->r[4]=0u+0xCC010000u; // 8020C560
  c->r[0]=0u+0x00000010u; // 8020C564
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C568
  c->r[3]=0u+0x00060000u; // 8020C56C
  c->r[0]=c->r[3]+0x00001020u; // 8020C570
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020C574
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C578
  c->r[5]=c->r[4]+0xFFFF8000u; // 8020C57C
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 8020C580
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 8020C584
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 8020C588
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 8020C58C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 8020C590
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 8020C594
  c->r[0]=R32(c->r[3]+0x00000528u); // 8020C598
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C59C
  return; // 8020C5A0
}

// GXSetProjection
void f_8020C5B0(Ctx* __restrict c) {
  trace_call(0x8020C5B0u);
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020C5B0
  cmps(c,0,(int32_t)c->r[4],1); // 8020C5B4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020C5B8
  W32(c->r[5]+0x00000528u,c->r[4]); // 8020C5BC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5C0
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 8020C5C4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020C5C8
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 8020C5CC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5D0
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 8020C5D4
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 8020C5D8
  if (!crb(c,2)) { goto L_8020C5F4; } // 8020C5DC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5E0
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[0]);} // 8020C5E4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5E8
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 8020C5EC
  goto L_8020C604; // 8020C5F0
L_8020C5F4:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5F4
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[0]);} // 8020C5F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C5FC
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 8020C600
L_8020C604:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8020C604
  c->r[0]=c->r[0]|0x08000000u; // 8020C608
  W32(c->r[5]+0x000005FCu,c->r[0]); // 8020C60C
  return; // 8020C610
}

// GXSetProjectionv
void f_8020C620(Ctx* __restrict c) {
  trace_call(0x8020C620u);
  {uint32_t ea=c->r[2]+0xFFFFB130u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020C620
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C624
  fcmp(c,0,c->f[1],c->f[0]); // 8020C628
  if (!crb(c,2)) { goto L_8020C638; } // 8020C62C
  c->r[0]=0u+0x00000000u; // 8020C630
  goto L_8020C63C; // 8020C634
L_8020C638:;
  c->r[0]=0u+0x00000001u; // 8020C638
L_8020C63C:;
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020C63C
  W32(c->r[4]+0x00000528u,c->r[0]); // 8020C640
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 8020C644
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 8020C648
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 8020C64C
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 8020C650
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 8020C654
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 8020C658
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8020C65C
  c->r[0]=c->r[0]|0x08000000u; // 8020C660
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8020C664
  return; // 8020C668
}

// GXLoadPosMtxImm
void f_8020C670(Ctx* __restrict c) {
  trace_call(0x8020C670u);
  c->r[5]=0u+0xCC010000u; // 8020C670
  c->r[0]=0u+0x00000010u; // 8020C674
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C678
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020C67C
  c->r[0]=c->r[0]|0x000B0000u; // 8020C680
  c->r[4]=c->r[5]+0xFFFF8000u; // 8020C684
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C688
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 8020C68C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 8020C690
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 8020C694
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8020C698
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 8020C69C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 8020C6A0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 8020C6A4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8020C6A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8020C6AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8020C6B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8020C6B4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8020C6B8
  return; // 8020C6BC
}

// GXLoadNrmMtxImm
void f_8020C6C0(Ctx* __restrict c) {
  trace_call(0x8020C6C0u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020C6C0
  c->r[5]=0u+0xCC010000u; // 8020C6C4
  c->r[4]=c->r[0]-c->r[4]; // 8020C6C8
  c->r[0]=0u+0x00000010u; // 8020C6CC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C6D0
  c->r[4]=c->r[4]+0x00000400u; // 8020C6D4
  c->r[0]=c->r[4]|0x00080000u; // 8020C6D8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C6DC
  c->r[4]=c->r[5]+0xFFFF8000u; // 8020C6E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 8020C6E4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8020C6E8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 8020C6EC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020C6F0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 8020C6F4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C6F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 8020C6FC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 8020C700
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8020C704
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8020C708
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8020C70C
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8020C710
  return; // 8020C714
}

// GXSetCurrentMtx
void f_8020C720(Ctx* __restrict c) {
  trace_call(0x8020C720u);
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020C720
  c->r[0]=R32(c->r[4]+0x00000080u); // 8020C724
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 8020C728
  W32(c->r[4]+0x00000080u,c->r[0]); // 8020C72C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8020C730
  c->r[0]=c->r[0]|0x04000000u; // 8020C734
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8020C738
  return; // 8020C73C
}

// GXLoadTexMtxImm
void f_8020C740(Ctx* __restrict c) {
  trace_call(0x8020C740u);
  cmpu(c,0,c->r[4],0x00000040u); // 8020C740
  if (crb(c,0)) { goto L_8020C758; } // 8020C744
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 8020C748
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8020C74C
  c->r[7]=c->r[4]+0x00000500u; // 8020C750
  goto L_8020C75C; // 8020C754
L_8020C758:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020C758
L_8020C75C:;
  cmps(c,0,(int32_t)c->r[5],1); // 8020C75C
  if (!crb(c,2)) { goto L_8020C76C; } // 8020C760
  c->r[6]=0u+0x00000008u; // 8020C764
  goto L_8020C770; // 8020C768
L_8020C76C:;
  c->r[6]=0u+0x0000000Cu; // 8020C76C
L_8020C770:;
  c->r[4]=0u+0xCC010000u; // 8020C770
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8020C774
  c->r[0]=0u+0x00000010u; // 8020C778
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C77C
  c->r[0]=rotl(c->r[6],16)&0xFFFF0000u; // 8020C780
  cmps(c,0,(int32_t)c->r[5],0); // 8020C784
  c->r[0]=c->r[7]|c->r[0]; // 8020C788
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C78C
  if (!crb(c,2)) { goto L_8020C7CC; } // 8020C790
  c->r[4]=c->r[4]+0xFFFF8000u; // 8020C794
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 8020C798
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 8020C79C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 8020C7A0
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8020C7A4
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 8020C7A8
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 8020C7AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 8020C7B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8020C7B4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8020C7B8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8020C7BC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8020C7C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8020C7C4
  return; // 8020C7C8
L_8020C7CC:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 8020C7CC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 8020C7D0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 8020C7D4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 8020C7D8
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 8020C7DC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8020C7E0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8020C7E4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8020C7E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8020C7EC
  return; // 8020C7F0
}

// __GXSetViewport
void f_8020C800(Ctx* __restrict c) {
  trace_call(0x8020C800u);
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020C800
  c->r[3]=0u+0x00050000u; // 8020C804
  {uint32_t ea=c->r[2]+0xFFFFB134u; c->f[7]=c->ps1[7]=RF32(ea);} // 8020C808
  c->r[4]=0u+0xCC010000u; // 8020C80C
  {uint32_t ea=c->r[6]+0x00000550u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020C810
  c->r[5]=0u+0x00000010u; // 8020C814
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020C818
  c->r[0]=c->r[3]+0x0000101Au; // 8020C81C
  c->f[0]=-c->f[1]; // 8020C820
  {uint32_t ea=c->r[6]+0x00000544u; c->f[6]=c->ps1[6]=RF32(ea);} // 8020C824
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[7]); // 8020C828
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 8020C82C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[7]); // 8020C830
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020C834
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020C838
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 8020C83C
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020C840
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020C844
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[2]); // 8020C848
  c->f[10]=c->ps1[10]=S(c->f[1]*c->f[2]); // 8020C84C
  {uint32_t ea=c->r[2]+0xFFFFB138u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020C850
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8020C854
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 8020C858
  c->f[3]=c->ps1[3]=S(c->f[6]+c->f[8]); // 8020C85C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020C860
  c->f[4]=c->ps1[4]=S(c->f[10]-c->f[9]); // 8020C864
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 8020C868
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 8020C86C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8020C870
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 8020C874
  c->f[0]=c->ps1[0]=S(c->f[10]+c->f[0]); // 8020C878
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 8020C87C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8020C880
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8020C884
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8020C888
  return; // 8020C88C
}

// GXSetViewport
void f_8020C890(Ctx* __restrict c) {
  trace_call(0x8020C890u);
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020C890
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 8020C894
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 8020C898
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 8020C89C
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 8020C8A0
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 8020C8A4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 8020C8A8
  c->r[0]=R32(c->r[3]+0x000005FCu); // 8020C8AC
  c->r[0]=c->r[0]|0x10000000u; // 8020C8B0
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8020C8B4
  return; // 8020C8B8
}

// GXSetScissor
void f_8020C8C0(Ctx* __restrict c) {
  trace_call(0x8020C8C0u);
  c->r[8]=R32(c->r[2]+0xFFFFB080u); // 8020C8C0
  c->r[4]=c->r[4]+0x00000156u; // 8020C8C4
  c->r[9]=c->r[3]+0x00000156u; // 8020C8C8
  c->r[7]=0u+0xCC010000u; // 8020C8CC
  c->r[0]=R32(c->r[8]+0x00000148u); // 8020C8D0
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8020C8D4
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 8020C8D8
  W32(c->r[8]+0x00000148u,c->r[0]); // 8020C8DC
  c->r[6]=c->r[4]+c->r[6]; // 8020C8E0
  c->r[3]=c->r[9]+c->r[5]; // 8020C8E4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8020C8E8
  c->r[5]=R32(c->r[8]+0x0000014Cu); // 8020C8EC
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 8020C8F0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8020C8F4
  c->r[5]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[5]&~0x007FF000u); // 8020C8F8
  W32(c->r[8]+0x0000014Cu,c->r[5]); // 8020C8FC
  c->r[4]=0u+0x00000061u; // 8020C900
  c->r[0]=0u+0x00000000u; // 8020C904
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 8020C908
  c->r[3]=R32(c->r[8]+0x00000148u); // 8020C90C
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 8020C910
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 8020C914
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 8020C918
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 8020C91C
  W16(c->r[8]+0x00000002u,c->r[0]); // 8020C920
  return; // 8020C924
}

// GXSetScissorBoxOffset
void f_8020C930(Ctx* __restrict c) {
  trace_call(0x8020C930u);
  c->r[5]=0u+0xCC010000u; // 8020C930
  c->r[0]=0u+0x00000061u; // 8020C934
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C938
  c->r[0]=c->r[4]+0x00000156u; // 8020C93C
  c->r[3]=c->r[3]+0x00000156u; // 8020C940
  c->r[4]=0u+0x00000059u; // 8020C944
  c->r[6]=0u+0x00000000u; // 8020C948
  c->r[6]=(rotl(c->r[3],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 8020C94C
  c->r[3]=R32(c->r[2]+0xFFFFB080u); // 8020C950
  c->r[6]=(rotl(c->r[0],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 8020C954
  c->r[0]=0u+0x00000000u; // 8020C958
  c->r[6]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8020C95C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8020C960
  W16(c->r[3]+0x00000002u,c->r[0]); // 8020C964
  return; // 8020C968
}

// GXSetClipMode
void f_8020C970(Ctx* __restrict c) {
  trace_call(0x8020C970u);
  c->r[6]=0u+0xCC010000u; // 8020C970
  c->r[0]=0u+0x00000010u; // 8020C974
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020C978
  c->r[5]=0u+0x00001005u; // 8020C97C
  c->r[4]=R32(c->r[2]+0xFFFFB080u); // 8020C980
  c->r[0]=0u+0x00000001u; // 8020C984
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8020C988
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020C98C
  W16(c->r[4]+0x00000002u,c->r[0]); // 8020C990
  return; // 8020C994
}

// __GXSetMatrixIndex
void f_8020C9A0(Ctx* __restrict c) {
  trace_call(0x8020C9A0u);
  cmps(c,0,(int32_t)c->r[3],5); // 8020C9A0
  if (!crb(c,0)) { goto L_8020C9E4; } // 8020C9A4
  c->r[5]=0u+0xCC010000u; // 8020C9A8
  c->r[0]=0u+0x00000008u; // 8020C9AC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9B0
  c->r[0]=0u+0x00000030u; // 8020C9B4
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020C9B8
  c->r[3]=0u+0x00000010u; // 8020C9BC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9C0
  c->r[0]=0u+0x00001018u; // 8020C9C4
  c->r[4]=R32(c->r[6]+0x00000080u); // 8020C9C8
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8020C9CC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8020C9D0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9D4
  c->r[0]=R32(c->r[6]+0x00000080u); // 8020C9D8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9DC
  goto L_8020CA1C; // 8020C9E0
L_8020C9E4:;
  c->r[5]=0u+0xCC010000u; // 8020C9E4
  c->r[0]=0u+0x00000008u; // 8020C9E8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9EC
  c->r[0]=0u+0x00000040u; // 8020C9F0
  c->r[6]=R32(c->r[2]+0xFFFFB080u); // 8020C9F4
  c->r[3]=0u+0x00000010u; // 8020C9F8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8020C9FC
  c->r[0]=0u+0x00001019u; // 8020CA00
  c->r[4]=R32(c->r[6]+0x00000084u); // 8020CA04
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8020CA08
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8020CA0C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020CA10
  c->r[0]=R32(c->r[6]+0x00000084u); // 8020CA14
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8020CA18
L_8020CA1C:;
  c->r[0]=0u+0x00000001u; // 8020CA1C
  W16(c->r[6]+0x00000002u,c->r[0]); // 8020CA20
  return; // 8020CA24
}

// GXSetGPMetric
void f_8020CA30(Ctx* __restrict c) {
  trace_call(0x8020CA30u);
  c->r[5]=R32(c->r[2]+0xFFFFB080u); // 8020CA30
  c->r[6]=R32(c->r[5]+0x000005ECu); // 8020CA34
  c->r[0]=c->r[6]+0xFFFFFFF5u; // 8020CA38
  cmpu(c,0,c->r[0],0x0000000Fu); // 8020CA3C
  if (!crb(c,1)) { goto L_8020CA80; } // 8020CA40
  cmpu(c,0,c->r[6],0x0000000Au); // 8020CA44
  if (!crb(c,1)) { goto L_8020CA60; } // 8020CA48
  c->r[0]=c->r[6]+0xFFFFFFE5u; // 8020CA4C
  cmpu(c,0,c->r[0],0x00000006u); // 8020CA50
  if (!crb(c,1)) { goto L_8020CA98; } // 8020CA54
  cmps(c,0,(int32_t)c->r[6],34); // 8020CA58
  if (!crb(c,2)) { goto L_8020CAAC; } // 8020CA5C
L_8020CA60:;
  c->r[7]=0u+0xCC010000u; // 8020CA60
  c->r[0]=0u+0x00000010u; // 8020CA64
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 8020CA68
  c->r[6]=0u+0x00001006u; // 8020CA6C
  c->r[0]=0u+0x00000000u; // 8020CA70
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 8020CA74
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8020CA78
  goto L_8020CAAC; // 8020CA7C
L_8020CA80:;
  c->r[6]=0u+0xCC010000u; // 8020CA80
  c->r[0]=0u+0x00000061u; // 8020CA84
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CA88
  c->r[0]=0u+0x23000000u; // 8020CA8C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CA90
  goto L_8020CAAC; // 8020CA94
L_8020CA98:;
  c->r[6]=0u+0xCC010000u; // 8020CA98
  c->r[0]=0u+0x00000061u; // 8020CA9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CAA0
  c->r[0]=0u+0x24000000u; // 8020CAA4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CAA8
L_8020CAAC:;
  c->r[6]=R32(c->r[5]+0x000005F0u); // 8020CAAC
  cmpu(c,0,c->r[6],0x00000008u); // 8020CAB0
  if (!crb(c,1)) { goto L_8020CAD8; } // 8020CAB4
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 8020CAB8
  cmpu(c,0,c->r[0],0x00000007u); // 8020CABC
  if (!crb(c,1)) { goto L_8020CAF0; } // 8020CAC0
  c->r[0]=c->r[6]+0xFFFFFFEFu; // 8020CAC4
  cmpu(c,0,c->r[0],0x00000003u); // 8020CAC8
  if (!crb(c,1)) { goto L_8020CB1C; } // 8020CACC
  cmps(c,0,(int32_t)c->r[6],21); // 8020CAD0
  if (!crb(c,2)) { goto L_8020CB28; } // 8020CAD4
L_8020CAD8:;
  c->r[6]=0u+0xCC010000u; // 8020CAD8
  c->r[0]=0u+0x00000061u; // 8020CADC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CAE0
  c->r[0]=0u+0x67000000u; // 8020CAE4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CAE8
  goto L_8020CB28; // 8020CAEC
L_8020CAF0:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 8020CAF0
  c->r[6]=0u+0xCC010000u; // 8020CAF4
  c->r[7]=0u+0x00000008u; // 8020CAF8
  c->r[0]=0u+0x00000020u; // 8020CAFC
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 8020CB00
  W32(c->r[5]+0x000005F4u,c->r[8]); // 8020CB04
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8020CB08
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB0C
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020CB10
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB14
  goto L_8020CB28; // 8020CB18
L_8020CB1C:;
  c->r[6]=R32(c->r[13]+0xFFFF9C64u); // 8020CB1C
  c->r[0]=0u+0x00000000u; // 8020CB20
  W16(c->r[6]+0x00000006u,c->r[0]); // 8020CB24
L_8020CB28:;
  cmpu(c,0,c->r[3],0x00000022u); // 8020CB28
  W32(c->r[5]+0x000005ECu,c->r[3]); // 8020CB2C
  if (crb(c,1)) { goto L_8020CF4C; } // 8020CB30
  c->r[6]=0u+0x803A0000u; // 8020CB34
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020CB38
  c->r[6]=c->r[6]+0x000061A8u; // 8020CB3C
  c->r[6]=R32(c->r[6]+c->r[0]); // 8020CB40
  c->ctr=c->r[6]; // 8020CB44
  if (true) { switch (c->ctr) { case 0x8020CB4Cu: goto L_8020CB4C; case 0x8020CB6Cu: goto L_8020CB6C; case 0x8020CB8Cu: goto L_8020CB8C; case 0x8020CBACu: goto L_8020CBAC; case 0x8020CBCCu: goto L_8020CBCC; case 0x8020CBECu: goto L_8020CBEC; case 0x8020CC0Cu: goto L_8020CC0C; case 0x8020CC2Cu: goto L_8020CC2C; case 0x8020CC4Cu: goto L_8020CC4C; case 0x8020CC6Cu: goto L_8020CC6C; case 0x8020CC8Cu: goto L_8020CC8C; case 0x8020CCACu: goto L_8020CCAC; case 0x8020CCCCu: goto L_8020CCCC; case 0x8020CCE8u: goto L_8020CCE8; case 0x8020CD04u: goto L_8020CD04; case 0x8020CD20u: goto L_8020CD20; case 0x8020CD3Cu: goto L_8020CD3C; case 0x8020CD58u: goto L_8020CD58; case 0x8020CD74u: goto L_8020CD74; case 0x8020CD90u: goto L_8020CD90; case 0x8020CDACu: goto L_8020CDAC; case 0x8020CDC8u: goto L_8020CDC8; case 0x8020CDE4u: goto L_8020CDE4; case 0x8020CE00u: goto L_8020CE00; case 0x8020CE1Cu: goto L_8020CE1C; case 0x8020CE38u: goto L_8020CE38; case 0x8020CE54u: goto L_8020CE54; case 0x8020CE70u: goto L_8020CE70; case 0x8020CE8Cu: goto L_8020CE8C; case 0x8020CEA8u: goto L_8020CEA8; case 0x8020CEC4u: goto L_8020CEC4; case 0x8020CEE0u: goto L_8020CEE0; case 0x8020CEFCu: goto L_8020CEFC; case 0x8020CF18u: goto L_8020CF18; case 0x8020CF34u: goto L_8020CF34; case 0x8020CF70u: goto L_8020CF70; case 0x8020CF8Cu: goto L_8020CF8C; case 0x8020CFA8u: goto L_8020CFA8; case 0x8020CFC4u: goto L_8020CFC4; case 0x8020CFE0u: goto L_8020CFE0; case 0x8020CFFCu: goto L_8020CFFC; case 0x8020D018u: goto L_8020D018; case 0x8020D034u: goto L_8020D034; case 0x8020D050u: goto L_8020D050; case 0x8020D06Cu: goto L_8020D06C; case 0x8020D088u: goto L_8020D088; case 0x8020D0B8u: goto L_8020D0B8; case 0x8020D0E8u: goto L_8020D0E8; case 0x8020D118u: goto L_8020D118; case 0x8020D148u: goto L_8020D148; case 0x8020D178u: goto L_8020D178; case 0x8020D1A8u: goto L_8020D1A8; case 0x8020D1D8u: goto L_8020D1D8; case 0x8020D204u: goto L_8020D204; case 0x8020D214u: goto L_8020D214; case 0x8020D224u: goto L_8020D224; case 0x8020D234u: goto L_8020D234; default: break; } dispatch(c,c->ctr); return; } // 8020CB48
L_8020CB4C:;
  c->r[6]=0u+0xCC010000u; // 8020CB4C
  c->r[0]=0u+0x00000010u; // 8020CB50
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB54
  c->r[3]=0u+0x00001006u; // 8020CB58
  c->r[0]=0u+0x00000273u; // 8020CB5C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CB60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB64
  goto L_8020CF4C; // 8020CB68
L_8020CB6C:;
  c->r[6]=0u+0xCC010000u; // 8020CB6C
  c->r[0]=0u+0x00000010u; // 8020CB70
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB74
  c->r[3]=0u+0x00001006u; // 8020CB78
  c->r[0]=0u+0x0000014Au; // 8020CB7C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CB80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB84
  goto L_8020CF4C; // 8020CB88
L_8020CB8C:;
  c->r[6]=0u+0xCC010000u; // 8020CB8C
  c->r[0]=0u+0x00000010u; // 8020CB90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CB94
  c->r[3]=0u+0x00001006u; // 8020CB98
  c->r[0]=0u+0x0000016Bu; // 8020CB9C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CBA0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBA4
  goto L_8020CF4C; // 8020CBA8
L_8020CBAC:;
  c->r[6]=0u+0xCC010000u; // 8020CBAC
  c->r[0]=0u+0x00000010u; // 8020CBB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBB4
  c->r[3]=0u+0x00001006u; // 8020CBB8
  c->r[0]=0u+0x00000084u; // 8020CBBC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CBC0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBC4
  goto L_8020CF4C; // 8020CBC8
L_8020CBCC:;
  c->r[6]=0u+0xCC010000u; // 8020CBCC
  c->r[0]=0u+0x00000010u; // 8020CBD0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBD4
  c->r[3]=0u+0x00001006u; // 8020CBD8
  c->r[0]=0u+0x000000C6u; // 8020CBDC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CBE0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBE4
  goto L_8020CF4C; // 8020CBE8
L_8020CBEC:;
  c->r[6]=0u+0xCC010000u; // 8020CBEC
  c->r[0]=0u+0x00000010u; // 8020CBF0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CBF4
  c->r[3]=0u+0x00001006u; // 8020CBF8
  c->r[0]=0u+0x00000210u; // 8020CBFC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CC00
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC04
  goto L_8020CF4C; // 8020CC08
L_8020CC0C:;
  c->r[6]=0u+0xCC010000u; // 8020CC0C
  c->r[0]=0u+0x00000010u; // 8020CC10
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC14
  c->r[3]=0u+0x00001006u; // 8020CC18
  c->r[0]=0u+0x00000252u; // 8020CC1C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CC20
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC24
  goto L_8020CF4C; // 8020CC28
L_8020CC2C:;
  c->r[6]=0u+0xCC010000u; // 8020CC2C
  c->r[0]=0u+0x00000010u; // 8020CC30
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC34
  c->r[3]=0u+0x00001006u; // 8020CC38
  c->r[0]=0u+0x00000231u; // 8020CC3C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CC40
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC44
  goto L_8020CF4C; // 8020CC48
L_8020CC4C:;
  c->r[6]=0u+0xCC010000u; // 8020CC4C
  c->r[0]=0u+0x00000010u; // 8020CC50
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC54
  c->r[3]=0u+0x00001006u; // 8020CC58
  c->r[0]=0u+0x000001ADu; // 8020CC5C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CC60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC64
  goto L_8020CF4C; // 8020CC68
L_8020CC6C:;
  c->r[6]=0u+0xCC010000u; // 8020CC6C
  c->r[0]=0u+0x00000010u; // 8020CC70
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC74
  c->r[3]=0u+0x00001006u; // 8020CC78
  c->r[0]=0u+0x000001CEu; // 8020CC7C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CC80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC84
  goto L_8020CF4C; // 8020CC88
L_8020CC8C:;
  c->r[6]=0u+0xCC010000u; // 8020CC8C
  c->r[0]=0u+0x00000010u; // 8020CC90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CC94
  c->r[3]=0u+0x00001006u; // 8020CC98
  c->r[0]=0u+0x00000021u; // 8020CC9C
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CCA0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCA4
  goto L_8020CF4C; // 8020CCA8
L_8020CCAC:;
  c->r[6]=0u+0xCC010000u; // 8020CCAC
  c->r[0]=0u+0x00000010u; // 8020CCB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCB4
  c->r[3]=0u+0x00001006u; // 8020CCB8
  c->r[0]=0u+0x00000153u; // 8020CCBC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8020CCC0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCC4
  goto L_8020CF4C; // 8020CCC8
L_8020CCCC:;
  c->r[6]=0u+0xCC010000u; // 8020CCCC
  c->r[0]=0u+0x00000061u; // 8020CCD0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCD4
  c->r[3]=0u+0x23010000u; // 8020CCD8
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 8020CCDC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCE0
  goto L_8020CF4C; // 8020CCE4
L_8020CCE8:;
  c->r[6]=0u+0xCC010000u; // 8020CCE8
  c->r[0]=0u+0x00000061u; // 8020CCEC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCF0
  c->r[3]=0u+0x23010000u; // 8020CCF4
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 8020CCF8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CCFC
  goto L_8020CF4C; // 8020CD00
L_8020CD04:;
  c->r[6]=0u+0xCC010000u; // 8020CD04
  c->r[0]=0u+0x00000061u; // 8020CD08
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD0C
  c->r[3]=0u+0x23010000u; // 8020CD10
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 8020CD14
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD18
  goto L_8020CF4C; // 8020CD1C
L_8020CD20:;
  c->r[6]=0u+0xCC010000u; // 8020CD20
  c->r[0]=0u+0x00000061u; // 8020CD24
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD28
  c->r[3]=0u+0x23000000u; // 8020CD2C
  c->r[0]=c->r[3]+0x00001E7Fu; // 8020CD30
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD34
  goto L_8020CF4C; // 8020CD38
L_8020CD3C:;
  c->r[6]=0u+0xCC010000u; // 8020CD3C
  c->r[0]=0u+0x00000061u; // 8020CD40
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD44
  c->r[3]=0u+0x23010000u; // 8020CD48
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 8020CD4C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD50
  goto L_8020CF4C; // 8020CD54
L_8020CD58:;
  c->r[6]=0u+0xCC010000u; // 8020CD58
  c->r[0]=0u+0x00000061u; // 8020CD5C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD60
  c->r[3]=0u+0x23010000u; // 8020CD64
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 8020CD68
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD6C
  goto L_8020CF4C; // 8020CD70
L_8020CD74:;
  c->r[6]=0u+0xCC010000u; // 8020CD74
  c->r[0]=0u+0x00000061u; // 8020CD78
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD7C
  c->r[3]=0u+0x23010000u; // 8020CD80
  c->r[0]=c->r[3]+0xFFFFACBFu; // 8020CD84
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD88
  goto L_8020CF4C; // 8020CD8C
L_8020CD90:;
  c->r[6]=0u+0xCC010000u; // 8020CD90
  c->r[0]=0u+0x00000061u; // 8020CD94
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CD98
  c->r[3]=0u+0x23010000u; // 8020CD9C
  c->r[0]=c->r[3]+0xFFFFACFFu; // 8020CDA0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDA4
  goto L_8020CF4C; // 8020CDA8
L_8020CDAC:;
  c->r[6]=0u+0xCC010000u; // 8020CDAC
  c->r[0]=0u+0x00000061u; // 8020CDB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDB4
  c->r[3]=0u+0x23010000u; // 8020CDB8
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 8020CDBC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDC0
  goto L_8020CF4C; // 8020CDC4
L_8020CDC8:;
  c->r[6]=0u+0xCC010000u; // 8020CDC8
  c->r[0]=0u+0x00000061u; // 8020CDCC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDD0
  c->r[3]=0u+0x23010000u; // 8020CDD4
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 8020CDD8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDDC
  goto L_8020CF4C; // 8020CDE0
L_8020CDE4:;
  c->r[6]=0u+0xCC010000u; // 8020CDE4
  c->r[0]=0u+0x00000061u; // 8020CDE8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDEC
  c->r[3]=0u+0x23010000u; // 8020CDF0
  c->r[0]=c->r[3]+0xFFFFADBFu; // 8020CDF4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CDF8
  goto L_8020CF4C; // 8020CDFC
L_8020CE00:;
  c->r[6]=0u+0xCC010000u; // 8020CE00
  c->r[0]=0u+0x00000061u; // 8020CE04
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE08
  c->r[3]=0u+0x23010000u; // 8020CE0C
  c->r[0]=c->r[3]+0xFFFFADFFu; // 8020CE10
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE14
  goto L_8020CF4C; // 8020CE18
L_8020CE1C:;
  c->r[6]=0u+0xCC010000u; // 8020CE1C
  c->r[0]=0u+0x00000061u; // 8020CE20
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE24
  c->r[3]=0u+0x23010000u; // 8020CE28
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 8020CE2C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE30
  goto L_8020CF4C; // 8020CE34
L_8020CE38:;
  c->r[6]=0u+0xCC010000u; // 8020CE38
  c->r[0]=0u+0x00000061u; // 8020CE3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE40
  c->r[3]=0u+0x23010000u; // 8020CE44
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 8020CE48
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE4C
  goto L_8020CF4C; // 8020CE50
L_8020CE54:;
  c->r[6]=0u+0xCC010000u; // 8020CE54
  c->r[0]=0u+0x00000061u; // 8020CE58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE5C
  c->r[3]=0u+0x23010000u; // 8020CE60
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 8020CE64
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE68
  goto L_8020CF4C; // 8020CE6C
L_8020CE70:;
  c->r[6]=0u+0xCC010000u; // 8020CE70
  c->r[0]=0u+0x00000061u; // 8020CE74
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE78
  c->r[3]=0u+0x23010000u; // 8020CE7C
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 8020CE80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE84
  goto L_8020CF4C; // 8020CE88
L_8020CE8C:;
  c->r[6]=0u+0xCC010000u; // 8020CE8C
  c->r[0]=0u+0x00000061u; // 8020CE90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CE94
  c->r[3]=0u+0x24030000u; // 8020CE98
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 8020CE9C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CEA0
  goto L_8020CF4C; // 8020CEA4
L_8020CEA8:;
  c->r[6]=0u+0xCC010000u; // 8020CEA8
  c->r[0]=0u+0x00000061u; // 8020CEAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CEB0
  c->r[3]=0u+0x24030000u; // 8020CEB4
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 8020CEB8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CEBC
  goto L_8020CF4C; // 8020CEC0
L_8020CEC4:;
  c->r[6]=0u+0xCC010000u; // 8020CEC4
  c->r[0]=0u+0x00000061u; // 8020CEC8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CECC
  c->r[3]=0u+0x24030000u; // 8020CED0
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 8020CED4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CED8
  goto L_8020CF4C; // 8020CEDC
L_8020CEE0:;
  c->r[6]=0u+0xCC010000u; // 8020CEE0
  c->r[0]=0u+0x00000061u; // 8020CEE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CEE8
  c->r[3]=0u+0x24030000u; // 8020CEEC
  c->r[0]=c->r[3]+0xFFFFC108u; // 8020CEF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CEF4
  goto L_8020CF4C; // 8020CEF8
L_8020CEFC:;
  c->r[6]=0u+0xCC010000u; // 8020CEFC
  c->r[0]=0u+0x00000061u; // 8020CF00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF04
  c->r[3]=0u+0x24030000u; // 8020CF08
  c->r[0]=c->r[3]+0xFFFFC129u; // 8020CF0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF10
  goto L_8020CF4C; // 8020CF14
L_8020CF18:;
  c->r[6]=0u+0xCC010000u; // 8020CF18
  c->r[0]=0u+0x00000061u; // 8020CF1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF20
  c->r[3]=0u+0x24030000u; // 8020CF24
  c->r[0]=c->r[3]+0xFFFFC14Au; // 8020CF28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF2C
  goto L_8020CF4C; // 8020CF30
L_8020CF34:;
  c->r[6]=0u+0xCC010000u; // 8020CF34
  c->r[0]=0u+0x00000061u; // 8020CF38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF3C
  c->r[3]=0u+0x24030000u; // 8020CF40
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 8020CF44
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8020CF48
L_8020CF4C:;
  cmpu(c,0,c->r[4],0x00000015u); // 8020CF4C
  W32(c->r[5]+0x000005F0u,c->r[4]); // 8020CF50
  if (crb(c,1)) { goto L_8020D240; } // 8020CF54
  c->r[3]=0u+0x803A0000u; // 8020CF58
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020CF5C
  c->r[3]=c->r[3]+0x00006150u; // 8020CF60
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020CF64
  c->ctr=c->r[3]; // 8020CF68
  if (true) { switch (c->ctr) { case 0x8020CB4Cu: goto L_8020CB4C; case 0x8020CB6Cu: goto L_8020CB6C; case 0x8020CB8Cu: goto L_8020CB8C; case 0x8020CBACu: goto L_8020CBAC; case 0x8020CBCCu: goto L_8020CBCC; case 0x8020CBECu: goto L_8020CBEC; case 0x8020CC0Cu: goto L_8020CC0C; case 0x8020CC2Cu: goto L_8020CC2C; case 0x8020CC4Cu: goto L_8020CC4C; case 0x8020CC6Cu: goto L_8020CC6C; case 0x8020CC8Cu: goto L_8020CC8C; case 0x8020CCACu: goto L_8020CCAC; case 0x8020CCCCu: goto L_8020CCCC; case 0x8020CCE8u: goto L_8020CCE8; case 0x8020CD04u: goto L_8020CD04; case 0x8020CD20u: goto L_8020CD20; case 0x8020CD3Cu: goto L_8020CD3C; case 0x8020CD58u: goto L_8020CD58; case 0x8020CD74u: goto L_8020CD74; case 0x8020CD90u: goto L_8020CD90; case 0x8020CDACu: goto L_8020CDAC; case 0x8020CDC8u: goto L_8020CDC8; case 0x8020CDE4u: goto L_8020CDE4; case 0x8020CE00u: goto L_8020CE00; case 0x8020CE1Cu: goto L_8020CE1C; case 0x8020CE38u: goto L_8020CE38; case 0x8020CE54u: goto L_8020CE54; case 0x8020CE70u: goto L_8020CE70; case 0x8020CE8Cu: goto L_8020CE8C; case 0x8020CEA8u: goto L_8020CEA8; case 0x8020CEC4u: goto L_8020CEC4; case 0x8020CEE0u: goto L_8020CEE0; case 0x8020CEFCu: goto L_8020CEFC; case 0x8020CF18u: goto L_8020CF18; case 0x8020CF34u: goto L_8020CF34; case 0x8020CF70u: goto L_8020CF70; case 0x8020CF8Cu: goto L_8020CF8C; case 0x8020CFA8u: goto L_8020CFA8; case 0x8020CFC4u: goto L_8020CFC4; case 0x8020CFE0u: goto L_8020CFE0; case 0x8020CFFCu: goto L_8020CFFC; case 0x8020D018u: goto L_8020D018; case 0x8020D034u: goto L_8020D034; case 0x8020D050u: goto L_8020D050; case 0x8020D06Cu: goto L_8020D06C; case 0x8020D088u: goto L_8020D088; case 0x8020D0B8u: goto L_8020D0B8; case 0x8020D0E8u: goto L_8020D0E8; case 0x8020D118u: goto L_8020D118; case 0x8020D148u: goto L_8020D148; case 0x8020D178u: goto L_8020D178; case 0x8020D1A8u: goto L_8020D1A8; case 0x8020D1D8u: goto L_8020D1D8; case 0x8020D204u: goto L_8020D204; case 0x8020D214u: goto L_8020D214; case 0x8020D224u: goto L_8020D224; case 0x8020D234u: goto L_8020D234; default: break; } dispatch(c,c->ctr); return; } // 8020CF6C
L_8020CF70:;
  c->r[4]=0u+0xCC010000u; // 8020CF70
  c->r[0]=0u+0x00000061u; // 8020CF74
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CF78
  c->r[3]=0u+0x67000000u; // 8020CF7C
  c->r[0]=c->r[3]+0x00000042u; // 8020CF80
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CF84
  goto L_8020D240; // 8020CF88
L_8020CF8C:;
  c->r[4]=0u+0xCC010000u; // 8020CF8C
  c->r[0]=0u+0x00000061u; // 8020CF90
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CF94
  c->r[3]=0u+0x67000000u; // 8020CF98
  c->r[0]=c->r[3]+0x00000084u; // 8020CF9C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFA0
  goto L_8020D240; // 8020CFA4
L_8020CFA8:;
  c->r[4]=0u+0xCC010000u; // 8020CFA8
  c->r[0]=0u+0x00000061u; // 8020CFAC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFB0
  c->r[3]=0u+0x67000000u; // 8020CFB4
  c->r[0]=c->r[3]+0x00000063u; // 8020CFB8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFBC
  goto L_8020D240; // 8020CFC0
L_8020CFC4:;
  c->r[4]=0u+0xCC010000u; // 8020CFC4
  c->r[0]=0u+0x00000061u; // 8020CFC8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFCC
  c->r[3]=0u+0x67000000u; // 8020CFD0
  c->r[0]=c->r[3]+0x00000129u; // 8020CFD4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFD8
  goto L_8020D240; // 8020CFDC
L_8020CFE0:;
  c->r[4]=0u+0xCC010000u; // 8020CFE0
  c->r[0]=0u+0x00000061u; // 8020CFE4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFE8
  c->r[3]=0u+0x67000000u; // 8020CFEC
  c->r[0]=c->r[3]+0x00000252u; // 8020CFF0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020CFF4
  goto L_8020D240; // 8020CFF8
L_8020CFFC:;
  c->r[4]=0u+0xCC010000u; // 8020CFFC
  c->r[0]=0u+0x00000061u; // 8020D000
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D004
  c->r[3]=0u+0x67000000u; // 8020D008
  c->r[0]=c->r[3]+0x00000021u; // 8020D00C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D010
  goto L_8020D240; // 8020D014
L_8020D018:;
  c->r[4]=0u+0xCC010000u; // 8020D018
  c->r[0]=0u+0x00000061u; // 8020D01C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D020
  c->r[3]=0u+0x67000000u; // 8020D024
  c->r[0]=c->r[3]+0x0000014Bu; // 8020D028
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D02C
  goto L_8020D240; // 8020D030
L_8020D034:;
  c->r[4]=0u+0xCC010000u; // 8020D034
  c->r[0]=0u+0x00000061u; // 8020D038
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D03C
  c->r[3]=0u+0x67000000u; // 8020D040
  c->r[0]=c->r[3]+0x0000018Du; // 8020D044
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D048
  goto L_8020D240; // 8020D04C
L_8020D050:;
  c->r[4]=0u+0xCC010000u; // 8020D050
  c->r[0]=0u+0x00000061u; // 8020D054
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D058
  c->r[3]=0u+0x67000000u; // 8020D05C
  c->r[0]=c->r[3]+0x000001CFu; // 8020D060
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D064
  goto L_8020D240; // 8020D068
L_8020D06C:;
  c->r[4]=0u+0xCC010000u; // 8020D06C
  c->r[0]=0u+0x00000061u; // 8020D070
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D074
  c->r[3]=0u+0x67000000u; // 8020D078
  c->r[0]=c->r[3]+0x00000211u; // 8020D07C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8020D080
  goto L_8020D240; // 8020D084
L_8020D088:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D088
  c->r[0]=0u+0x00000002u; // 8020D08C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D090
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D094
  c->r[3]=0u+0xCC010000u; // 8020D098
  c->r[0]=0u+0x00000008u; // 8020D09C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0A0
  c->r[0]=0u+0x00000020u; // 8020D0A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0A8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D0AC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0B0
  goto L_8020D240; // 8020D0B4
L_8020D0B8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D0B8
  c->r[0]=0u+0x00000003u; // 8020D0BC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D0C0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D0C4
  c->r[3]=0u+0xCC010000u; // 8020D0C8
  c->r[0]=0u+0x00000008u; // 8020D0CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0D0
  c->r[0]=0u+0x00000020u; // 8020D0D4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0D8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D0DC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D0E0
  goto L_8020D240; // 8020D0E4
L_8020D0E8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D0E8
  c->r[0]=0u+0x00000004u; // 8020D0EC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D0F0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D0F4
  c->r[3]=0u+0xCC010000u; // 8020D0F8
  c->r[0]=0u+0x00000008u; // 8020D0FC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D100
  c->r[0]=0u+0x00000020u; // 8020D104
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D108
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D10C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D110
  goto L_8020D240; // 8020D114
L_8020D118:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D118
  c->r[0]=0u+0x00000005u; // 8020D11C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D120
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D124
  c->r[3]=0u+0xCC010000u; // 8020D128
  c->r[0]=0u+0x00000008u; // 8020D12C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D130
  c->r[0]=0u+0x00000020u; // 8020D134
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D138
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D13C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D140
  goto L_8020D240; // 8020D144
L_8020D148:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D148
  c->r[0]=0u+0x00000006u; // 8020D14C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D150
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D154
  c->r[3]=0u+0xCC010000u; // 8020D158
  c->r[0]=0u+0x00000008u; // 8020D15C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D160
  c->r[0]=0u+0x00000020u; // 8020D164
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D168
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D16C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D170
  goto L_8020D240; // 8020D174
L_8020D178:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D178
  c->r[0]=0u+0x00000007u; // 8020D17C
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D180
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D184
  c->r[3]=0u+0xCC010000u; // 8020D188
  c->r[0]=0u+0x00000008u; // 8020D18C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D190
  c->r[0]=0u+0x00000020u; // 8020D194
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D198
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D19C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1A0
  goto L_8020D240; // 8020D1A4
L_8020D1A8:;
  c->r[3]=R32(c->r[5]+0x000005F4u); // 8020D1A8
  c->r[0]=0u+0x00000009u; // 8020D1AC
  c->r[3]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 8020D1B0
  W32(c->r[5]+0x000005F4u,c->r[3]); // 8020D1B4
  c->r[3]=0u+0xCC010000u; // 8020D1B8
  c->r[0]=0u+0x00000008u; // 8020D1BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1C0
  c->r[0]=0u+0x00000020u; // 8020D1C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1C8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D1CC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1D0
  goto L_8020D240; // 8020D1D4
L_8020D1D8:;
  c->r[4]=0u+0x00000008u; // 8020D1D8
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D1DC
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8020D1E0
  W32(c->r[5]+0x000005F4u,c->r[0]); // 8020D1E4
  c->r[3]=0u+0xCC010000u; // 8020D1E8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8020D1EC
  c->r[0]=0u+0x00000020u; // 8020D1F0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1F4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8020D1F8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D1FC
  goto L_8020D240; // 8020D200
L_8020D204:;
  c->r[3]=R32(c->r[13]+0xFFFF9C64u); // 8020D204
  c->r[0]=0u+0x00000002u; // 8020D208
  W16(c->r[3]+0x00000006u,c->r[0]); // 8020D20C
  goto L_8020D240; // 8020D210
L_8020D214:;
  c->r[3]=R32(c->r[13]+0xFFFF9C64u); // 8020D214
  c->r[0]=0u+0x00000003u; // 8020D218
  W16(c->r[3]+0x00000006u,c->r[0]); // 8020D21C
  goto L_8020D240; // 8020D220
L_8020D224:;
  c->r[3]=R32(c->r[13]+0xFFFF9C64u); // 8020D224
  c->r[0]=0u+0x00000004u; // 8020D228
  W16(c->r[3]+0x00000006u,c->r[0]); // 8020D22C
  goto L_8020D240; // 8020D230
L_8020D234:;
  c->r[3]=R32(c->r[13]+0xFFFF9C64u); // 8020D234
  c->r[0]=0u+0x00000005u; // 8020D238
  W16(c->r[3]+0x00000006u,c->r[0]); // 8020D23C
L_8020D240:;
  c->r[0]=0u+0x00000000u; // 8020D240
  W16(c->r[5]+0x00000002u,c->r[0]); // 8020D244
  return; // 8020D248
}

// GXClearGPMetric
void f_8020D250(Ctx* __restrict c) {
  trace_call(0x8020D250u);
  c->r[3]=R32(c->r[13]+0xFFFF9C64u); // 8020D250
  c->r[0]=0u+0x00000004u; // 8020D254
  W16(c->r[3]+0x00000004u,c->r[0]); // 8020D258
  return; // 8020D25C
}

// init__Q210homebutton15FrameControllerFifff
void f_8020D260(Ctx* __restrict c) {
  trace_call(0x8020D260u);
  cmps(c,0,(int32_t)c->r[4],1); // 8020D260
  c->r[0]=0u+0x00000000u; // 8020D264
  W32(c->r[3]+0x00000018u,c->r[4]); // 8020D268
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8020D26C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8020D270
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 8020D274
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020D278
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 8020D27C
  if (!crb(c,2)) { goto L_8020D28C; } // 8020D280
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8020D284
  goto L_8020D290; // 8020D288
L_8020D28C:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 8020D28C
L_8020D290:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D290
  return; // 8020D294
}

// initFrame__Q210homebutton15FrameControllerFv
void f_8020D2A0(Ctx* __restrict c) {
  trace_call(0x8020D2A0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020D2A0
  cmps(c,0,(int32_t)c->r[0],1); // 8020D2A4
  if (!crb(c,2)) { goto L_8020D2B4; } // 8020D2A8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D2AC
  goto L_8020D2B8; // 8020D2B0
L_8020D2B4:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D2B4
L_8020D2B8:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D2B8
  return; // 8020D2BC
}

// calc__Q210homebutton15FrameControllerFv
void f_8020D2C0(Ctx* __restrict c) {
  trace_call(0x8020D2C0u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 8020D2C0
  cmps(c,0,(int32_t)c->r[0],1); // 8020D2C4
  if (!crb(c,2)) return; // 8020D2C8
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020D2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8020D2D0
  if (crb(c,2)) { goto L_8020D2F4; } // 8020D2D4
  cmps(c,0,(int32_t)c->r[0],1); // 8020D2D8
  if (crb(c,2)) { goto L_8020D330; } // 8020D2DC
  cmps(c,0,(int32_t)c->r[0],2); // 8020D2E0
  if (crb(c,2)) { goto L_8020D360; } // 8020D2E4
  cmps(c,0,(int32_t)c->r[0],3); // 8020D2E8
  if (crb(c,2)) { goto L_8020D394; } // 8020D2EC
  return; // 8020D2F0
L_8020D2F4:;
  c->r[4]=0u+0x80380000u; // 8020D2F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020D2F8
  {uint32_t ea=c->r[4]+0xFFFFF420u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020D2FC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D300
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D304
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8020D308
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8020D30C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D310
  fcmp(c,0,c->f[0],c->f[2]); // 8020D314
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020D318
  if (!crb(c,2)) return; // 8020D31C
  c->r[0]=0u+0x00000000u; // 8020D320
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8020D324
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020D328
  return; // 8020D32C
L_8020D330:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020D330
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D334
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D338
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8020D33C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8020D340
  fcmp(c,0,c->f[1],c->f[0]); // 8020D344
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020D348
  if (!crb(c,2)) return; // 8020D34C
  c->r[0]=0u+0x00000000u; // 8020D350
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D354
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020D358
  return; // 8020D35C
L_8020D360:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020D360
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D364
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D368
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8020D36C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8020D370
  fcmp(c,0,c->f[2],c->f[1]); // 8020D374
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020D378
  if (!crb(c,2)) return; // 8020D37C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D380
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8020D384
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8020D388
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D38C
  return; // 8020D390
L_8020D394:;
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 8020D394
  cmps(c,0,(int32_t)c->r[0],0); // 8020D398
  if (!crb(c,2)) { goto L_8020D3DC; } // 8020D39C
  c->r[4]=0u+0x80380000u; // 8020D3A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020D3A4
  {uint32_t ea=c->r[4]+0xFFFFF420u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020D3A8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D3AC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D3B0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8020D3B4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8020D3B8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D3BC
  fcmp(c,0,c->f[0],c->f[2]); // 8020D3C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020D3C4
  if (!crb(c,2)) return; // 8020D3C8
  c->r[0]=0u+0x00000001u; // 8020D3CC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8020D3D0
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 8020D3D4
  return; // 8020D3D8
L_8020D3DC:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020D3DC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D3E0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D3E4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8020D3E8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8020D3EC
  fcmp(c,0,c->f[1],c->f[0]); // 8020D3F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020D3F4
  if (!crb(c,2)) return; // 8020D3F8
  c->r[0]=0u+0x00000000u; // 8020D3FC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020D400
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 8020D404
  return; // 8020D408
}

// __ct__Q210homebutton18GroupAnmControllerFv
void f_8020D410(Ctx* __restrict c) {
  trace_call(0x8020D410u);
  c->r[4]=0u+0x803A0000u; // 8020D410
  c->r[0]=0u+0x00000000u; // 8020D414
  c->r[4]=c->r[4]+0x00006260u; // 8020D418
  W32(c->r[3]+0x00000000u,c->r[4]); // 8020D41C
  W32(c->r[3]+0x00000020u,c->r[0]); // 8020D420
  W32(c->r[3]+0x00000024u,c->r[0]); // 8020D424
  return; // 8020D428
}

// fn_8020D430
void f_8020D430(Ctx* __restrict c) {
  trace_call(0x8020D430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D430
  c->r[0]=c->lr; // 8020D434
  cmps(c,0,(int32_t)c->r[3],0); // 8020D438
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020D43C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020D440
  c->r[31]=c->r[3]|c->r[3]; // 8020D444
  if (crb(c,2)) { goto L_8020D458; } // 8020D448
  cmps(c,0,(int32_t)c->r[4],0); // 8020D44C
  if (!crb(c,1)) { goto L_8020D458; } // 8020D450
  c->lr=0x8020D458u; f_800C2AC0(c); // 8020D454
L_8020D458:;
  c->r[3]=c->r[31]|c->r[31]; // 8020D458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020D45C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020D460
  c->lr=c->r[0]; // 8020D464
  c->r[1]=c->r[1]+0x00000010u; // 8020D468
  return; // 8020D46C
}

// do_calc__Q210homebutton18GroupAnmControllerFv
void f_8020D470(Ctx* __restrict c) {
  trace_call(0x8020D470u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D470
  c->r[0]=c->lr; // 8020D474
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020D478
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020D47C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020D480
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020D484
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020D488
  c->r[28]=c->r[3]|c->r[3]; // 8020D48C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8020D490
  cmps(c,0,(int32_t)c->r[0],1); // 8020D494
  if (!crb(c,2)) { goto L_8020D4C0; } // 8020D498
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D49C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020D4A0
  c->ctr=c->r[12]; // 8020D4A4
  if (true) { c->lr=0x8020D4ACu; dispatch(c,c->ctr); } // 8020D4A8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8020D4AC
  c->r[29]=0u+0x00000001u; // 8020D4B0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020D4B4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8020D4B8
  goto L_8020D4C4; // 8020D4BC
L_8020D4C0:;
  c->r[29]=0u+0x00000000u; // 8020D4C0
L_8020D4C4:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 8020D4C4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8020D4C8
  c->r[30]=c->r[3]+0x00000010u; // 8020D4CC
  goto L_8020D4F8; // 8020D4D0
L_8020D4D4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8020D4D4
  c->r[5]=c->r[29]|c->r[29]; // 8020D4D8
  c->r[4]=R32(c->r[28]+0x00000024u); // 8020D4DC
  c->r[6]=0u+0x00000000u; // 8020D4E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D4E4
  c->r[12]=R32(c->r[12]+0x00000058u); // 8020D4E8
  c->ctr=c->r[12]; // 8020D4EC
  if (true) { c->lr=0x8020D4F4u; dispatch(c,c->ctr); } // 8020D4F0
  c->r[31]=R32(c->r[31]+0x00000000u); // 8020D4F4
L_8020D4F8:;
  cmpu(c,0,c->r[31],c->r[30]); // 8020D4F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8020D4D4; } // 8020D4FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020D500
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020D504
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020D508
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020D50C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020D510
  c->lr=c->r[0]; // 8020D514
  c->r[1]=c->r[1]+0x00000020u; // 8020D518
  return; // 8020D51C
}

// drawLine___Q210homebutton3guiFfffffUcR8_GXColor
void f_8020D520(Ctx* __restrict c) {
  trace_call(0x8020D520u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D520
  c->r[0]=c->lr; // 8020D524
  W32(c->r[1]+0x00000094u,c->r[0]); // 8020D528
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8020D52C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8020D530
  c->f[31]=c->f[5]; // 8020D534
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8020D538
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8020D53C
  c->f[30]=c->f[4]; // 8020D540
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8020D544
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8020D548
  c->f[29]=c->f[3]; // 8020D54C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8020D550
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8020D554
  c->f[28]=c->f[2]; // 8020D558
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 8020D55C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 8020D560
  c->f[27]=c->f[1]; // 8020D564
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8020D568
  c->r[31]=c->r[4]|c->r[4]; // 8020D56C
  W32(c->r[1]+0x00000038u,c->r[30]); // 8020D570
  c->r[30]=c->r[3]|c->r[3]; // 8020D574
  c->lr=0x8020D57Cu; f_80207AD0(c); // 8020D578
  c->r[3]=0u+0x00000009u; // 8020D57C
  c->r[4]=0u+0x00000001u; // 8020D580
  c->lr=0x8020D588u; f_80207470(c); // 8020D584
  c->r[3]=0u+0x0000000Bu; // 8020D588
  c->r[4]=0u+0x00000001u; // 8020D58C
  c->lr=0x8020D594u; f_80207470(c); // 8020D590
  c->r[3]=0u+0x00000000u; // 8020D594
  c->r[4]=0u+0x00000009u; // 8020D598
  c->r[5]=0u+0x00000001u; // 8020D59C
  c->r[6]=0u+0x00000004u; // 8020D5A0
  c->r[7]=0u+0x00000000u; // 8020D5A4
  c->lr=0x8020D5ACu; f_80207B10(c); // 8020D5A8
  c->r[3]=0u+0x00000000u; // 8020D5AC
  c->r[4]=0u+0x0000000Bu; // 8020D5B0
  c->r[5]=0u+0x00000001u; // 8020D5B4
  c->r[6]=0u+0x00000005u; // 8020D5B8
  c->r[7]=0u+0x00000000u; // 8020D5BC
  c->lr=0x8020D5C4u; f_80207B10(c); // 8020D5C0
  c->r[3]=0u+0x00000000u; // 8020D5C4
  c->lr=0x8020D5CCu; f_802092C0(c); // 8020D5C8
  c->r[3]=0u+0x00000001u; // 8020D5CC
  c->lr=0x8020D5D4u; f_8020A170(c); // 8020D5D0
  c->r[3]=0u+0x00000004u; // 8020D5D4
  c->r[4]=0u+0x00000000u; // 8020D5D8
  c->r[5]=0u+0x00000001u; // 8020D5DC
  c->r[6]=0u+0x00000001u; // 8020D5E0
  c->r[7]=0u+0x00000000u; // 8020D5E4
  c->r[8]=0u+0x00000000u; // 8020D5E8
  c->r[9]=0u+0x00000002u; // 8020D5EC
  c->lr=0x8020D5F4u; f_8020A1A0(c); // 8020D5F0
  c->r[3]=0u+0x00000000u; // 8020D5F4
  c->lr=0x8020D5FCu; f_80208480(c); // 8020D5F8
  c->r[3]=0u+0x00000001u; // 8020D5FC
  c->lr=0x8020D604u; f_8020BD20(c); // 8020D600
  c->r[3]=0u+0x00000000u; // 8020D604
  c->r[4]=0u+0x00000004u; // 8020D608
  c->lr=0x8020D610u; f_8020B680(c); // 8020D60C
  c->r[3]=0u+0x00000000u; // 8020D610
  c->r[4]=0u+0x000000FFu; // 8020D614
  c->r[5]=0u+0x000000FFu; // 8020D618
  c->r[6]=0u+0x00000004u; // 8020D61C
  c->lr=0x8020D624u; f_8020BBC0(c); // 8020D620
  c->r[3]=0u+0x00000000u; // 8020D624
  c->r[4]=0u+0x00000000u; // 8020D628
  c->r[5]=0u+0x00000000u; // 8020D62C
  c->r[6]=0u+0x00000005u; // 8020D630
  c->lr=0x8020D638u; f_8020C090(c); // 8020D634
  c->r[4]=0u+0x80380000u; // 8020D638
  c->r[3]=c->r[1]+0x00000008u; // 8020D63C
  {uint32_t ea=c->r[4]+0xFFFFF428u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020D640
  c->f[2]=c->f[1]; // 8020D644
  c->f[3]=c->f[1]; // 8020D648
  c->lr=0x8020D650u; f_8023F280(c); // 8020D64C
  c->r[3]=c->r[1]+0x00000008u; // 8020D650
  c->r[4]=0u+0x00000000u; // 8020D654
  c->lr=0x8020D65Cu; f_8020C670(c); // 8020D658
  c->r[3]=c->r[30]|c->r[30]; // 8020D65C
  c->r[4]=0u+0x00000000u; // 8020D660
  c->lr=0x8020D668u; f_80209200(c); // 8020D664
  c->r[3]=0u+0x000000A8u; // 8020D668
  c->r[4]=0u+0x00000000u; // 8020D66C
  c->r[5]=0u+0x00000002u; // 8020D670
  c->lr=0x8020D678u; f_80208FD0(c); // 8020D674
  c->r[3]=0u+0xCC010000u; // 8020D678
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 8020D67C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 8020D680
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 8020D684
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020D688
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D68C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 8020D690
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 8020D694
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 8020D698
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020D69C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8020D6A0
  c->r[0]=R32(c->r[1]+0x00000094u); // 8020D6A4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8020D6A8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8020D6AC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8020D6B0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8020D6B4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8020D6B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8020D6BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8020D6C0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8020D6C4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 8020D6C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 8020D6CC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8020D6D0
  c->r[30]=R32(c->r[1]+0x00000038u); // 8020D6D4
  c->lr=c->r[0]; // 8020D6D8
  c->r[1]=c->r[1]+0x00000090u; // 8020D6DC
  return; // 8020D6E0
}

// update__Q310homebutton3gui9ComponentFiffUlUlUlPv
void f_8020D6F0(Ctx* __restrict c) {
  trace_call(0x8020D6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D6F0
  c->r[0]=c->lr; // 8020D6F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020D6F8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8020D6FC
  c->f[31]=c->f[2]; // 8020D700
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8020D704
  c->f[30]=c->f[1]; // 8020D708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020D70C
  c->r[31]=0u+0x00000000u; // 8020D710
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020D714
  c->r[30]=c->r[8]|c->r[8]; // 8020D718
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020D71C
  c->r[29]=c->r[4]|c->r[4]; // 8020D720
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020D724
  c->r[28]=c->r[3]|c->r[3]; // 8020D728
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D72C
  c->r[12]=R32(c->r[12]+0x00000058u); // 8020D730
  c->ctr=c->r[12]; // 8020D734
  if (true) { c->lr=0x8020D73Cu; dispatch(c,c->ctr); } // 8020D738
  cmps(c,0,(int32_t)c->r[3],0); // 8020D73C
  if (crb(c,2)) { goto L_8020D8CC; } // 8020D740
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D744
  c->f[1]=c->f[30]; // 8020D748
  c->f[2]=c->f[31]; // 8020D74C
  c->r[3]=c->r[28]|c->r[28]; // 8020D750
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8020D754
  c->ctr=c->r[12]; // 8020D758
  if (true) { c->lr=0x8020D760u; dispatch(c,c->ctr); } // 8020D75C
  cmps(c,0,(int32_t)c->r[3],0); // 8020D760
  if (crb(c,2)) { goto L_8020D848; } // 8020D764
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D768
  c->r[3]=c->r[28]|c->r[28]; // 8020D76C
  c->r[4]=c->r[29]|c->r[29]; // 8020D770
  c->r[12]=R32(c->r[12]+0x00000024u); // 8020D774
  c->ctr=c->r[12]; // 8020D778
  if (true) { c->lr=0x8020D780u; dispatch(c,c->ctr); } // 8020D77C
  cmps(c,0,(int32_t)c->r[3],0); // 8020D780
  if (crb(c,2)) { goto L_8020D7DC; } // 8020D784
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D788
  c->f[1]=c->f[30]; // 8020D78C
  c->f[2]=c->f[31]; // 8020D790
  c->r[3]=c->r[28]|c->r[28]; // 8020D794
  c->r[12]=R32(c->r[12]+0x00000038u); // 8020D798
  c->ctr=c->r[12]; // 8020D79C
  if (true) { c->lr=0x8020D7A4u; dispatch(c,c->ctr); } // 8020D7A0
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D7A4
  c->r[3]=c->r[28]|c->r[28]; // 8020D7A8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020D7AC
  c->ctr=c->r[12]; // 8020D7B0
  if (true) { c->lr=0x8020D7B8u; dispatch(c,c->ctr); } // 8020D7B4
  c->r[4]=c->r[3]|c->r[3]; // 8020D7B8
  c->r[3]=R32(c->r[28]+0x00000028u); // 8020D7BC
  c->r[6]=c->r[30]|c->r[30]; // 8020D7C0
  c->r[5]=0u+0x00000003u; // 8020D7C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D7C8
  c->r[12]=R32(c->r[12]+0x00000034u); // 8020D7CC
  c->ctr=c->r[12]; // 8020D7D0
  if (true) { c->lr=0x8020D7D8u; dispatch(c,c->ctr); } // 8020D7D4
  goto L_8020D840; // 8020D7D8
L_8020D7DC:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D7DC
  c->r[3]=c->r[28]|c->r[28]; // 8020D7E0
  c->r[4]=c->r[29]|c->r[29]; // 8020D7E4
  c->r[5]=0u+0x00000001u; // 8020D7E8
  c->r[12]=R32(c->r[12]+0x00000028u); // 8020D7EC
  c->ctr=c->r[12]; // 8020D7F0
  if (true) { c->lr=0x8020D7F8u; dispatch(c,c->ctr); } // 8020D7F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D7F8
  c->r[3]=c->r[28]|c->r[28]; // 8020D7FC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8020D800
  c->ctr=c->r[12]; // 8020D804
  if (true) { c->lr=0x8020D80Cu; dispatch(c,c->ctr); } // 8020D808
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D80C
  c->r[3]=c->r[28]|c->r[28]; // 8020D810
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020D814
  c->ctr=c->r[12]; // 8020D818
  if (true) { c->lr=0x8020D820u; dispatch(c,c->ctr); } // 8020D81C
  c->r[4]=c->r[3]|c->r[3]; // 8020D820
  c->r[3]=R32(c->r[28]+0x00000028u); // 8020D824
  c->r[6]=c->r[30]|c->r[30]; // 8020D828
  c->r[5]=0u+0x00000001u; // 8020D82C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D830
  c->r[12]=R32(c->r[12]+0x00000034u); // 8020D834
  c->ctr=c->r[12]; // 8020D838
  if (true) { c->lr=0x8020D840u; dispatch(c,c->ctr); } // 8020D83C
L_8020D840:;
  c->r[31]=0u+0x00000001u; // 8020D840
  goto L_8020D8CC; // 8020D844
L_8020D848:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D848
  c->r[3]=c->r[28]|c->r[28]; // 8020D84C
  c->r[4]=c->r[29]|c->r[29]; // 8020D850
  c->r[12]=R32(c->r[12]+0x00000024u); // 8020D854
  c->ctr=c->r[12]; // 8020D858
  if (true) { c->lr=0x8020D860u; dispatch(c,c->ctr); } // 8020D85C
  cmps(c,0,(int32_t)c->r[3],0); // 8020D860
  if (crb(c,2)) { goto L_8020D8CC; } // 8020D864
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D868
  c->r[3]=c->r[28]|c->r[28]; // 8020D86C
  c->r[4]=c->r[29]|c->r[29]; // 8020D870
  c->r[5]=0u+0x00000000u; // 8020D874
  c->r[12]=R32(c->r[12]+0x00000028u); // 8020D878
  c->ctr=c->r[12]; // 8020D87C
  if (true) { c->lr=0x8020D884u; dispatch(c,c->ctr); } // 8020D880
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D884
  c->r[3]=c->r[28]|c->r[28]; // 8020D888
  c->r[12]=R32(c->r[12]+0x00000030u); // 8020D88C
  c->ctr=c->r[12]; // 8020D890
  if (true) { c->lr=0x8020D898u; dispatch(c,c->ctr); } // 8020D894
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020D898
  c->r[3]=c->r[28]|c->r[28]; // 8020D89C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020D8A0
  c->ctr=c->r[12]; // 8020D8A4
  if (true) { c->lr=0x8020D8ACu; dispatch(c,c->ctr); } // 8020D8A8
  c->r[4]=c->r[3]|c->r[3]; // 8020D8AC
  c->r[3]=R32(c->r[28]+0x00000028u); // 8020D8B0
  c->r[6]=c->r[30]|c->r[30]; // 8020D8B4
  c->r[5]=0u+0x00000002u; // 8020D8B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D8BC
  c->r[12]=R32(c->r[12]+0x00000034u); // 8020D8C0
  c->ctr=c->r[12]; // 8020D8C4
  if (true) { c->lr=0x8020D8CCu; dispatch(c,c->ctr); } // 8020D8C8
L_8020D8CC:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8020D8CC
  c->r[3]=c->r[31]|c->r[31]; // 8020D8D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8020D8D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020D8D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020D8DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020D8E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020D8E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020D8E8
  c->lr=c->r[0]; // 8020D8EC
  c->r[1]=c->r[1]+0x00000030u; // 8020D8F0
  return; // 8020D8F4
}

// isVisible__Q310homebutton3gui9ComponentFv
void f_8020D900(Ctx* __restrict c) {
  trace_call(0x8020D900u);
  c->r[3]=0u+0x00000001u; // 8020D900
  return; // 8020D904
}

// isPointed__Q310homebutton3gui9ComponentFi
void f_8020D910(Ctx* __restrict c) {
  trace_call(0x8020D910u);
  c->r[3]=c->r[3]+c->r[4]; // 8020D910
  c->r[3]=R8(c->r[3]+0x00000004u); // 8020D914
  return; // 8020D918
}

// onMove__Q310homebutton3gui9ComponentFff
void f_8020D920(Ctx* __restrict c) {
  trace_call(0x8020D920u);
  return; // 8020D920
}

// fn_8020D930
void f_8020D930(Ctx* __restrict c) {
  trace_call(0x8020D930u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020D930
  cmps(c,0,(int32_t)c->r[3],0); // 8020D934
  if (crb(c,2)) return; // 8020D938
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D93C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8020D940
  c->ctr=c->r[12]; // 8020D944
  if (true) { dispatch(c,c->ctr); return; } // 8020D948
}

// fn_8020D94C
void f_8020D94C(Ctx* __restrict c) {
  trace_call(0x8020D94Cu);
  return; // 8020D94C
}

// fn_8020D950
void f_8020D950(Ctx* __restrict c) {
  trace_call(0x8020D950u);
  return; // 8020D950
}

// fn_8020D960
void f_8020D960(Ctx* __restrict c) {
  trace_call(0x8020D960u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020D960
  return; // 8020D964
}

// setPointed__Q310homebutton3gui9ComponentFib
void f_8020D970(Ctx* __restrict c) {
  trace_call(0x8020D970u);
  c->r[3]=c->r[3]+c->r[4]; // 8020D970
  W8(c->r[3]+0x00000004u,c->r[5]); // 8020D974
  return; // 8020D978
}

// fn_8020D980
void f_8020D980(Ctx* __restrict c) {
  trace_call(0x8020D980u);
  return; // 8020D980
}

// fn_8020D990
void f_8020D990(Ctx* __restrict c) {
  trace_call(0x8020D990u);
  return; // 8020D990
}

// __dt__Q310homebutton3gui7ManagerFv
void f_8020D9A0(Ctx* __restrict c) {
  trace_call(0x8020D9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D9A0
  c->r[0]=c->lr; // 8020D9A4
  cmps(c,0,(int32_t)c->r[3],0); // 8020D9A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020D9AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020D9B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020D9B4
  c->r[30]=c->r[4]|c->r[4]; // 8020D9B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020D9BC
  c->r[29]=c->r[3]|c->r[3]; // 8020D9C0
  if (crb(c,2)) { goto L_8020DA3C; } // 8020D9C4
  c->r[5]=0u+0x803A0000u; // 8020D9C8
  c->r[4]=0u+0x00000000u; // 8020D9CC
  c->r[5]=c->r[5]+0x000063F0u; // 8020D9D0
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020D9D4
  c->r[3]=c->r[3]+0x00000008u; // 8020D9D8
  c->lr=0x8020D9E0u; f_80226AB0(c); // 8020D9DC
  c->r[31]=c->r[3]|c->r[3]; // 8020D9E0
  goto L_8020DA24; // 8020D9E4
L_8020D9E8:;
  c->r[4]=c->r[31]|c->r[31]; // 8020D9E8
  c->r[3]=c->r[29]+0x00000008u; // 8020D9EC
  c->lr=0x8020D9F4u; f_80226A40(c); // 8020D9F0
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020D9F4
  cmps(c,0,(int32_t)c->r[3],0); // 8020D9F8
  if (crb(c,2)) { goto L_8020DA0C; } // 8020D9FC
  c->r[4]=c->r[31]|c->r[31]; // 8020DA00
  c->lr=0x8020DA08u; f_8023B6E0(c); // 8020DA04
  goto L_8020DA14; // 8020DA08
L_8020DA0C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020DA0C
  c->lr=0x8020DA14u; f_800C2AC0(c); // 8020DA10
L_8020DA14:;
  c->r[3]=c->r[29]+0x00000008u; // 8020DA14
  c->r[4]=0u+0x00000000u; // 8020DA18
  c->lr=0x8020DA20u; f_80226AB0(c); // 8020DA1C
  c->r[31]=c->r[3]|c->r[3]; // 8020DA20
L_8020DA24:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020DA24
  if (!crb(c,2)) { IRQCHK(c); goto L_8020D9E8; } // 8020DA28
  cmps(c,0,(int32_t)c->r[30],0); // 8020DA2C
  if (!crb(c,1)) { goto L_8020DA3C; } // 8020DA30
  c->r[3]=c->r[29]|c->r[29]; // 8020DA34
  c->lr=0x8020DA3Cu; f_800C2AC0(c); // 8020DA38
L_8020DA3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020DA3C
  c->r[3]=c->r[29]|c->r[29]; // 8020DA40
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020DA44
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020DA48
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020DA4C
  c->lr=c->r[0]; // 8020DA50
  c->r[1]=c->r[1]+0x00000020u; // 8020DA54
  return; // 8020DA58
}

// init__Q310homebutton3gui7ManagerFv
void f_8020DA60(Ctx* __restrict c) {
  trace_call(0x8020DA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DA60
  c->r[0]=c->lr; // 8020DA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DA68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DA6C
  c->r[31]=0u+0x00000000u; // 8020DA70
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DA74
  c->r[30]=c->r[3]|c->r[3]; // 8020DA78
  goto L_8020DAA4; // 8020DA7C
L_8020DA80:;
  c->r[3]=c->r[30]+0x00000008u; // 8020DA80
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 8020DA84
  c->lr=0x8020DA8Cu; f_80226AD0(c); // 8020DA88
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DA8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DA90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020DA94
  c->ctr=c->r[12]; // 8020DA98
  if (true) { c->lr=0x8020DAA0u; dispatch(c,c->ctr); } // 8020DA9C
  c->r[31]=c->r[31]+0x00000001u; // 8020DAA0
L_8020DAA4:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 8020DAA4
  cmpu(c,0,c->r[31],c->r[0]); // 8020DAA8
  if (crb(c,0)) { IRQCHK(c); goto L_8020DA80; } // 8020DAAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DAB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DAB8
  c->lr=c->r[0]; // 8020DABC
  c->r[1]=c->r[1]+0x00000010u; // 8020DAC0
  return; // 8020DAC4
}

// init__Q310homebutton3gui9ComponentFv
void f_8020DAD0(Ctx* __restrict c) {
  trace_call(0x8020DAD0u);
  c->r[0]=0u+0x00000000u; // 8020DAD0
  W8(c->r[3]+0x00000018u,c->r[0]); // 8020DAD4
  W8(c->r[3]+0x00000004u,c->r[0]); // 8020DAD8
  W8(c->r[3]+0x00000005u,c->r[0]); // 8020DADC
  W8(c->r[3]+0x00000006u,c->r[0]); // 8020DAE0
  W8(c->r[3]+0x00000007u,c->r[0]); // 8020DAE4
  W8(c->r[3]+0x00000008u,c->r[0]); // 8020DAE8
  W8(c->r[3]+0x00000009u,c->r[0]); // 8020DAEC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8020DAF0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8020DAF4
  return; // 8020DAF8
}

// addComponent__Q310homebutton3gui7ManagerFPQ310homebutton3gui9Component
void f_8020DB00(Ctx* __restrict c) {
  trace_call(0x8020DB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DB00
  c->r[0]=c->lr; // 8020DB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020DB08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020DB0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020DB10
  c->r[30]=c->r[4]|c->r[4]; // 8020DB14
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020DB18
  c->r[29]=c->r[3]|c->r[3]; // 8020DB1C
  c->r[3]=c->r[30]|c->r[30]; // 8020DB20
  c->r[12]=R32(c->r[30]+0x00000000u); // 8020DB24
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020DB28
  c->ctr=c->r[12]; // 8020DB2C
  if (true) { c->lr=0x8020DB34u; dispatch(c,c->ctr); } // 8020DB30
  c->r[12]=R32(c->r[30]+0x00000000u); // 8020DB34
  c->r[31]=c->r[3]|c->r[3]; // 8020DB38
  c->r[3]=c->r[30]|c->r[30]; // 8020DB3C
  c->r[4]=c->r[29]|c->r[29]; // 8020DB40
  c->r[12]=R32(c->r[12]+0x00000054u); // 8020DB44
  c->ctr=c->r[12]; // 8020DB48
  if (true) { c->lr=0x8020DB50u; dispatch(c,c->ctr); } // 8020DB4C
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020DB50
  cmps(c,0,(int32_t)c->r[3],0); // 8020DB54
  if (crb(c,2)) { goto L_8020DB84; } // 8020DB58
  c->r[4]=0u+0x00000010u; // 8020DB5C
  c->lr=0x8020DB64u; f_8023B6D0(c); // 8020DB60
  cmps(c,0,(int32_t)c->r[3],0); // 8020DB64
  if (crb(c,2)) { goto L_8020DB74; } // 8020DB68
  W32(c->r[3]+0x00000000u,c->r[31]); // 8020DB6C
  W32(c->r[3]+0x00000004u,c->r[30]); // 8020DB70
L_8020DB74:;
  c->r[4]=c->r[3]|c->r[3]; // 8020DB74
  c->r[3]=c->r[29]+0x00000008u; // 8020DB78
  c->lr=0x8020DB80u; f_802269D0(c); // 8020DB7C
  goto L_8020DBA8; // 8020DB80
L_8020DB84:;
  c->r[3]=0u+0x00000010u; // 8020DB84
  c->lr=0x8020DB8Cu; f_8004BB00(c); // 8020DB88
  cmps(c,0,(int32_t)c->r[3],0); // 8020DB8C
  if (crb(c,2)) { goto L_8020DB9C; } // 8020DB90
  W32(c->r[3]+0x00000000u,c->r[31]); // 8020DB94
  W32(c->r[3]+0x00000004u,c->r[30]); // 8020DB98
L_8020DB9C:;
  c->r[4]=c->r[3]|c->r[3]; // 8020DB9C
  c->r[3]=c->r[29]+0x00000008u; // 8020DBA0
  c->lr=0x8020DBA8u; f_802269D0(c); // 8020DBA4
L_8020DBA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020DBA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020DBAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020DBB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020DBB4
  c->lr=c->r[0]; // 8020DBB8
  c->r[1]=c->r[1]+0x00000020u; // 8020DBBC
  return; // 8020DBC0
}

// setManager__Q310homebutton3gui9ComponentFPQ310homebutton3gui7Manager
void f_8020DBD0(Ctx* __restrict c) {
  trace_call(0x8020DBD0u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 8020DBD0
  return; // 8020DBD4
}

// delComponent__Q310homebutton3gui7ManagerFPQ310homebutton3gui9Component
void f_8020DBE0(Ctx* __restrict c) {
  trace_call(0x8020DBE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DBE0
  c->r[0]=c->lr; // 8020DBE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020DBE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020DBEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020DBF0
  c->r[30]=c->r[4]|c->r[4]; // 8020DBF4
  c->r[4]=0u+0x00000000u; // 8020DBF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020DBFC
  c->r[29]=c->r[3]|c->r[3]; // 8020DC00
  c->r[3]=c->r[3]+0x00000008u; // 8020DC04
  c->lr=0x8020DC0Cu; f_80226AB0(c); // 8020DC08
  c->r[31]=c->r[3]|c->r[3]; // 8020DC0C
  goto L_8020DC30; // 8020DC10
L_8020DC14:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8020DC14
  cmpu(c,0,c->r[0],c->r[30]); // 8020DC18
  if (crb(c,2)) { goto L_8020DC38; } // 8020DC1C
  c->r[4]=c->r[31]|c->r[31]; // 8020DC20
  c->r[3]=c->r[29]+0x00000008u; // 8020DC24
  c->lr=0x8020DC2Cu; f_80226AB0(c); // 8020DC28
  c->r[31]=c->r[3]|c->r[3]; // 8020DC2C
L_8020DC30:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020DC30
  if (!crb(c,2)) { IRQCHK(c); goto L_8020DC14; } // 8020DC34
L_8020DC38:;
  c->r[4]=c->r[31]|c->r[31]; // 8020DC38
  c->r[3]=c->r[29]+0x00000008u; // 8020DC3C
  c->lr=0x8020DC44u; f_80226A40(c); // 8020DC40
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020DC44
  cmps(c,0,(int32_t)c->r[3],0); // 8020DC48
  if (crb(c,2)) { goto L_8020DC5C; } // 8020DC4C
  c->r[4]=c->r[31]|c->r[31]; // 8020DC50
  c->lr=0x8020DC58u; f_8023B6E0(c); // 8020DC54
  goto L_8020DC64; // 8020DC58
L_8020DC5C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020DC5C
  c->lr=0x8020DC64u; f_800C2AC0(c); // 8020DC60
L_8020DC64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020DC64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020DC68
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020DC6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020DC70
  c->lr=c->r[0]; // 8020DC74
  c->r[1]=c->r[1]+0x00000020u; // 8020DC78
  return; // 8020DC7C
}

// getComponent__Q310homebutton3gui7ManagerFUl
void f_8020DC80(Ctx* __restrict c) {
  trace_call(0x8020DC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DC80
  c->r[0]=c->lr; // 8020DC84
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8020DC88
  c->r[3]=c->r[3]+0x00000008u; // 8020DC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DC90
  c->lr=0x8020DC98u; f_80226AD0(c); // 8020DC94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DC98
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DC9C
  c->lr=c->r[0]; // 8020DCA0
  c->r[1]=c->r[1]+0x00000010u; // 8020DCA4
  return; // 8020DCA8
}

// update__Q310homebutton3gui7ManagerFiffUlUlUlPv
void f_8020DCB0(Ctx* __restrict c) {
  trace_call(0x8020DCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DCB0
  c->r[0]=c->lr; // 8020DCB4
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020DCB8
  c->r[11]=c->r[1]+0x00000050u; // 8020DCBC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 8020DCC0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8020DCC4
  c->lr=0x8020DCCCu; f_800C2E38(c); // 8020DCC8
  c->f[30]=c->f[1]; // 8020DCCC
  c->r[22]=c->r[3]|c->r[3]; // 8020DCD0
  c->f[31]=c->f[2]; // 8020DCD4
  c->r[23]=c->r[4]|c->r[4]; // 8020DCD8
  c->r[24]=c->r[5]|c->r[5]; // 8020DCDC
  c->r[25]=c->r[6]|c->r[6]; // 8020DCE0
  c->r[26]=c->r[7]|c->r[7]; // 8020DCE4
  c->r[27]=c->r[8]|c->r[8]; // 8020DCE8
  c->r[30]=0u+0x00000000u; // 8020DCEC
  c->r[29]=0u+0x00000000u; // 8020DCF0
  c->r[28]=0u+0x00000000u; // 8020DCF4
  goto L_8020DD6C; // 8020DCF8
L_8020DCFC:;
  c->r[3]=c->r[22]+0x00000008u; // 8020DCFC
  c->r[4]=rotl(c->r[28],0)&0x0000FFFFu; // 8020DD00
  c->lr=0x8020DD08u; f_80226AD0(c); // 8020DD04
  c->r[31]=c->r[3]|c->r[3]; // 8020DD08
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DD0C
  c->f[1]=c->f[30]; // 8020DD10
  c->r[4]=c->r[23]|c->r[23]; // 8020DD14
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DD18
  c->f[2]=c->f[31]; // 8020DD1C
  c->r[5]=c->r[24]|c->r[24]; // 8020DD20
  c->r[6]=c->r[25]|c->r[25]; // 8020DD24
  c->r[12]=R32(c->r[12]+0x00000048u); // 8020DD28
  c->r[7]=c->r[26]|c->r[26]; // 8020DD2C
  c->r[8]=c->r[27]|c->r[27]; // 8020DD30
  c->ctr=c->r[12]; // 8020DD34
  if (true) { c->lr=0x8020DD3Cu; dispatch(c,c->ctr); } // 8020DD38
  cmps(c,0,(int32_t)c->r[3],0); // 8020DD3C
  if (crb(c,2)) { goto L_8020DD68; } // 8020DD40
  c->r[3]=R32(c->r[31]+0x00000004u); // 8020DD44
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DD48
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8020DD4C
  c->ctr=c->r[12]; // 8020DD50
  if (true) { c->lr=0x8020DD58u; dispatch(c,c->ctr); } // 8020DD54
  cmps(c,0,(int32_t)c->r[3],0); // 8020DD58
  if (crb(c,2)) { goto L_8020DD64; } // 8020DD5C
  c->r[29]=R32(c->r[31]+0x00000004u); // 8020DD60
L_8020DD64:;
  c->r[30]=0u+0x00000001u; // 8020DD64
L_8020DD68:;
  c->r[28]=c->r[28]+0x00000001u; // 8020DD68
L_8020DD6C:;
  c->r[0]=R16(c->r[22]+0x00000010u); // 8020DD6C
  cmpu(c,0,c->r[28],c->r[0]); // 8020DD70
  if (crb(c,0)) { IRQCHK(c); goto L_8020DCFC; } // 8020DD74
  cmps(c,0,(int32_t)c->r[29],0); // 8020DD78
  if (crb(c,2)) { goto L_8020DE30; } // 8020DD7C
  cmps(c,0,(int32_t)c->r[24],0); // 8020DD80
  if (crb(c,2)) { goto L_8020DDD8; } // 8020DD84
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020DD88
  c->r[3]=c->r[29]|c->r[29]; // 8020DD8C
  c->r[4]=c->r[24]|c->r[24]; // 8020DD90
  c->r[5]=c->r[1]+0x00000014u; // 8020DD94
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8020DD98
  c->ctr=c->r[12]; // 8020DD9C
  if (true) { c->lr=0x8020DDA4u; dispatch(c,c->ctr); } // 8020DDA0
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020DDA4
  c->r[3]=c->r[29]|c->r[29]; // 8020DDA8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020DDAC
  c->ctr=c->r[12]; // 8020DDB0
  if (true) { c->lr=0x8020DDB8u; dispatch(c,c->ctr); } // 8020DDB4
  c->r[12]=R32(c->r[22]+0x00000000u); // 8020DDB8
  c->r[4]=c->r[3]|c->r[3]; // 8020DDBC
  c->r[3]=c->r[22]|c->r[22]; // 8020DDC0
  c->r[6]=c->r[27]|c->r[27]; // 8020DDC4
  c->r[12]=R32(c->r[12]+0x00000034u); // 8020DDC8
  c->r[5]=0u+0x00000000u; // 8020DDCC
  c->ctr=c->r[12]; // 8020DDD0
  if (true) { c->lr=0x8020DDD8u; dispatch(c,c->ctr); } // 8020DDD4
L_8020DDD8:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020DDD8
  if (crb(c,2)) { goto L_8020DE30; } // 8020DDDC
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020DDE0
  c->r[3]=c->r[29]|c->r[29]; // 8020DDE4
  c->r[4]=c->r[26]|c->r[26]; // 8020DDE8
  c->r[5]=c->r[1]+0x00000008u; // 8020DDEC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8020DDF0
  c->ctr=c->r[12]; // 8020DDF4
  if (true) { c->lr=0x8020DDFCu; dispatch(c,c->ctr); } // 8020DDF8
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020DDFC
  c->r[3]=c->r[29]|c->r[29]; // 8020DE00
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020DE04
  c->ctr=c->r[12]; // 8020DE08
  if (true) { c->lr=0x8020DE10u; dispatch(c,c->ctr); } // 8020DE0C
  c->r[12]=R32(c->r[22]+0x00000000u); // 8020DE10
  c->r[4]=c->r[3]|c->r[3]; // 8020DE14
  c->r[3]=c->r[22]|c->r[22]; // 8020DE18
  c->r[6]=c->r[27]|c->r[27]; // 8020DE1C
  c->r[12]=R32(c->r[12]+0x00000034u); // 8020DE20
  c->r[5]=0u+0x00000005u; // 8020DE24
  c->ctr=c->r[12]; // 8020DE28
  if (true) { c->lr=0x8020DE30u; dispatch(c,c->ctr); } // 8020DE2C
L_8020DE30:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[31]=RF64(ea);} // 8020DE30
  c->r[3]=c->r[30]|c->r[30]; // 8020DE34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8020DE38
  c->r[11]=c->r[1]+0x00000050u; // 8020DE3C
  c->lr=0x8020DE44u; f_800C2E84(c); // 8020DE40
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020DE44
  c->lr=c->r[0]; // 8020DE48
  c->r[1]=c->r[1]+0x00000060u; // 8020DE4C
  return; // 8020DE50
}

// isTriggerTarger__Q310homebutton3gui9ComponentFv
void f_8020DE60(Ctx* __restrict c) {
  trace_call(0x8020DE60u);
  c->r[3]=R8(c->r[3]+0x00000024u); // 8020DE60
  return; // 8020DE64
}

// onTrig__Q310homebutton3gui9ComponentFUlR3Vec
void f_8020DE70(Ctx* __restrict c) {
  trace_call(0x8020DE70u);
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8020DE70
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8020DE74
  if (crb(c,2)) return; // 8020DE78
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020DE7C
  c->r[0]=0u+0x00000001u; // 8020DE80
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020DE84
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020DE88
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8020DE8C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020DE90
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8020DE94
  W8(c->r[3]+0x00000018u,c->r[0]); // 8020DE98
  return; // 8020DE9C
}

// calc__Q310homebutton3gui7ManagerFv
void f_8020DEA0(Ctx* __restrict c) {
  trace_call(0x8020DEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DEA0
  c->r[0]=c->lr; // 8020DEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DEAC
  c->r[31]=0u+0x00000000u; // 8020DEB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DEB4
  c->r[30]=c->r[3]|c->r[3]; // 8020DEB8
  goto L_8020DEE4; // 8020DEBC
L_8020DEC0:;
  c->r[3]=c->r[30]+0x00000008u; // 8020DEC0
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 8020DEC4
  c->lr=0x8020DECCu; f_80226AD0(c); // 8020DEC8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DECC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DED0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8020DED4
  c->ctr=c->r[12]; // 8020DED8
  if (true) { c->lr=0x8020DEE0u; dispatch(c,c->ctr); } // 8020DEDC
  c->r[31]=c->r[31]+0x00000001u; // 8020DEE0
L_8020DEE4:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 8020DEE4
  cmpu(c,0,c->r[31],c->r[0]); // 8020DEE8
  if (crb(c,0)) { IRQCHK(c); goto L_8020DEC0; } // 8020DEEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DEF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DEF8
  c->lr=c->r[0]; // 8020DEFC
  c->r[1]=c->r[1]+0x00000010u; // 8020DF00
  return; // 8020DF04
}

// calc__Q310homebutton3gui9InterfaceFv
void f_8020DF10(Ctx* __restrict c) {
  trace_call(0x8020DF10u);
  return; // 8020DF10
}

// draw__Q310homebutton3gui7ManagerFv
void f_8020DF20(Ctx* __restrict c) {
  trace_call(0x8020DF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DF20
  c->r[0]=c->lr; // 8020DF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DF28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DF2C
  c->r[31]=0u+0x00000000u; // 8020DF30
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DF34
  c->r[30]=c->r[3]|c->r[3]; // 8020DF38
  goto L_8020DF64; // 8020DF3C
L_8020DF40:;
  c->r[3]=c->r[30]+0x00000008u; // 8020DF40
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 8020DF44
  c->lr=0x8020DF4Cu; f_80226AD0(c); // 8020DF48
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DF4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DF50
  c->r[12]=R32(c->r[12]+0x00000018u); // 8020DF54
  c->ctr=c->r[12]; // 8020DF58
  if (true) { c->lr=0x8020DF60u; dispatch(c,c->ctr); } // 8020DF5C
  c->r[31]=c->r[31]+0x00000001u; // 8020DF60
L_8020DF64:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 8020DF64
  cmpu(c,0,c->r[31],c->r[0]); // 8020DF68
  if (crb(c,0)) { IRQCHK(c); goto L_8020DF40; } // 8020DF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DF70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DF74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DF78
  c->lr=c->r[0]; // 8020DF7C
  c->r[1]=c->r[1]+0x00000010u; // 8020DF80
  return; // 8020DF84
}

// draw__Q310homebutton3gui9InterfaceFv
void f_8020DF90(Ctx* __restrict c) {
  trace_call(0x8020DF90u);
  return; // 8020DF90
}

// setAllComponentTriggerTarget__Q310homebutton3gui7ManagerFb
void f_8020DFA0(Ctx* __restrict c) {
  trace_call(0x8020DFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DFA0
  c->r[0]=c->lr; // 8020DFA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020DFA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020DFAC
  c->r[31]=0u+0x00000000u; // 8020DFB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020DFB4
  c->r[30]=c->r[4]|c->r[4]; // 8020DFB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020DFBC
  c->r[29]=c->r[3]|c->r[3]; // 8020DFC0
  goto L_8020DFF0; // 8020DFC4
L_8020DFC8:;
  c->r[3]=c->r[29]+0x00000008u; // 8020DFC8
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 8020DFCC
  c->lr=0x8020DFD4u; f_80226AD0(c); // 8020DFD0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DFD4
  c->r[4]=c->r[30]|c->r[30]; // 8020DFD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020DFDC
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020DFE0
  c->ctr=c->r[12]; // 8020DFE4
  if (true) { c->lr=0x8020DFECu; dispatch(c,c->ctr); } // 8020DFE8
  c->r[31]=c->r[31]+0x00000001u; // 8020DFEC
L_8020DFF0:;
  c->r[0]=R16(c->r[29]+0x00000010u); // 8020DFF0
  cmpu(c,0,c->r[31],c->r[0]); // 8020DFF4
  if (crb(c,0)) { IRQCHK(c); goto L_8020DFC8; } // 8020DFF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020DFFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020E000
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020E004
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020E008
  c->lr=c->r[0]; // 8020E00C
  c->r[1]=c->r[1]+0x00000020u; // 8020E010
  return; // 8020E014
}

// setTriggerTarget__Q310homebutton3gui9ComponentFb
void f_8020E020(Ctx* __restrict c) {
  trace_call(0x8020E020u);
  W8(c->r[3]+0x00000024u,c->r[4]); // 8020E020
  return; // 8020E024
}

// __dt__Q310homebutton3gui11PaneManagerFv
void f_8020E030(Ctx* __restrict c) {
  trace_call(0x8020E030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E030
  c->r[0]=c->lr; // 8020E034
  cmps(c,0,(int32_t)c->r[3],0); // 8020E038
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E03C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020E040
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020E044
  c->r[30]=c->r[4]|c->r[4]; // 8020E048
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020E04C
  c->r[29]=c->r[3]|c->r[3]; // 8020E050
  if (crb(c,2)) { goto L_8020E164; } // 8020E054
  c->r[5]=0u+0x803A0000u; // 8020E058
  c->r[4]=0u+0x00000000u; // 8020E05C
  c->r[5]=c->r[5]+0x00006350u; // 8020E060
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020E064
  c->r[3]=c->r[3]+0x00000018u; // 8020E068
  c->lr=0x8020E070u; f_80226AB0(c); // 8020E06C
  c->r[31]=c->r[3]|c->r[3]; // 8020E070
  goto L_8020E0E0; // 8020E074
L_8020E078:;
  c->r[4]=c->r[31]|c->r[31]; // 8020E078
  c->r[3]=c->r[29]+0x00000018u; // 8020E07C
  c->lr=0x8020E084u; f_80226A40(c); // 8020E080
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020E084
  cmps(c,0,(int32_t)c->r[3],0); // 8020E088
  if (crb(c,2)) { goto L_8020E0A8; } // 8020E08C
  c->r[4]=R32(c->r[31]+0x00000004u); // 8020E090
  c->lr=0x8020E098u; f_8023B6E0(c); // 8020E094
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020E098
  c->r[4]=c->r[31]|c->r[31]; // 8020E09C
  c->lr=0x8020E0A4u; f_8023B6E0(c); // 8020E0A0
  goto L_8020E0D0; // 8020E0A4
L_8020E0A8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8020E0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8020E0AC
  if (crb(c,2)) { goto L_8020E0C8; } // 8020E0B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E0B4
  c->r[4]=0u+0x00000001u; // 8020E0B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020E0BC
  c->ctr=c->r[12]; // 8020E0C0
  if (true) { c->lr=0x8020E0C8u; dispatch(c,c->ctr); } // 8020E0C4
L_8020E0C8:;
  c->r[3]=c->r[31]|c->r[31]; // 8020E0C8
  c->lr=0x8020E0D0u; f_800C2AC0(c); // 8020E0CC
L_8020E0D0:;
  c->r[3]=c->r[29]+0x00000018u; // 8020E0D0
  c->r[4]=0u+0x00000000u; // 8020E0D4
  c->lr=0x8020E0DCu; f_80226AB0(c); // 8020E0D8
  c->r[31]=c->r[3]|c->r[3]; // 8020E0DC
L_8020E0E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020E0E0
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E078; } // 8020E0E4
  cmps(c,0,(int32_t)c->r[29],0); // 8020E0E8
  if (crb(c,2)) { goto L_8020E154; } // 8020E0EC
  c->r[4]=0u+0x803A0000u; // 8020E0F0
  c->r[3]=c->r[29]+0x00000008u; // 8020E0F4
  c->r[4]=c->r[4]+0x000063F0u; // 8020E0F8
  W32(c->r[29]+0x00000000u,c->r[4]); // 8020E0FC
  c->r[4]=0u+0x00000000u; // 8020E100
  c->lr=0x8020E108u; f_80226AB0(c); // 8020E104
  c->r[31]=c->r[3]|c->r[3]; // 8020E108
  goto L_8020E14C; // 8020E10C
L_8020E110:;
  c->r[4]=c->r[31]|c->r[31]; // 8020E110
  c->r[3]=c->r[29]+0x00000008u; // 8020E114
  c->lr=0x8020E11Cu; f_80226A40(c); // 8020E118
  c->r[3]=R32(c->r[29]+0x00000014u); // 8020E11C
  cmps(c,0,(int32_t)c->r[3],0); // 8020E120
  if (crb(c,2)) { goto L_8020E134; } // 8020E124
  c->r[4]=c->r[31]|c->r[31]; // 8020E128
  c->lr=0x8020E130u; f_8023B6E0(c); // 8020E12C
  goto L_8020E13C; // 8020E130
L_8020E134:;
  c->r[3]=c->r[31]|c->r[31]; // 8020E134
  c->lr=0x8020E13Cu; f_800C2AC0(c); // 8020E138
L_8020E13C:;
  c->r[3]=c->r[29]+0x00000008u; // 8020E13C
  c->r[4]=0u+0x00000000u; // 8020E140
  c->lr=0x8020E148u; f_80226AB0(c); // 8020E144
  c->r[31]=c->r[3]|c->r[3]; // 8020E148
L_8020E14C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020E14C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E110; } // 8020E150
L_8020E154:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020E154
  if (!crb(c,1)) { goto L_8020E164; } // 8020E158
  c->r[3]=c->r[29]|c->r[29]; // 8020E15C
  c->lr=0x8020E164u; f_800C2AC0(c); // 8020E160
L_8020E164:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020E164
  c->r[3]=c->r[29]|c->r[29]; // 8020E168
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020E16C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020E170
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E174
  c->lr=c->r[0]; // 8020E178
  c->r[1]=c->r[1]+0x00000020u; // 8020E17C
  return; // 8020E180
}

// __dt__Q310homebutton3gui13PaneComponentFv
void f_8020E190(Ctx* __restrict c) {
  trace_call(0x8020E190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E190
  c->r[0]=c->lr; // 8020E194
  cmps(c,0,(int32_t)c->r[3],0); // 8020E198
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E19C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020E1A0
  c->r[31]=c->r[3]|c->r[3]; // 8020E1A4
  if (crb(c,2)) { goto L_8020E1B8; } // 8020E1A8
  cmps(c,0,(int32_t)c->r[4],0); // 8020E1AC
  if (!crb(c,1)) { goto L_8020E1B8; } // 8020E1B0
  c->lr=0x8020E1B8u; f_800C2AC0(c); // 8020E1B4
L_8020E1B8:;
  c->r[3]=c->r[31]|c->r[31]; // 8020E1B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020E1BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020E1C0
  c->lr=c->r[0]; // 8020E1C4
  c->r[1]=c->r[1]+0x00000010u; // 8020E1C8
  return; // 8020E1CC
}

// __dt__Q310homebutton3gui9ComponentFv
void f_8020E1D0(Ctx* __restrict c) {
  trace_call(0x8020E1D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E1D0
  c->r[0]=c->lr; // 8020E1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8020E1D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E1DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020E1E0
  c->r[31]=c->r[3]|c->r[3]; // 8020E1E4
  if (crb(c,2)) { goto L_8020E1F8; } // 8020E1E8
  cmps(c,0,(int32_t)c->r[4],0); // 8020E1EC
  if (!crb(c,1)) { goto L_8020E1F8; } // 8020E1F0
  c->lr=0x8020E1F8u; f_800C2AC0(c); // 8020E1F4
L_8020E1F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8020E1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020E1FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020E200
  c->lr=c->r[0]; // 8020E204
  c->r[1]=c->r[1]+0x00000010u; // 8020E208
  return; // 8020E20C
}

// createLayoutScene__Q310homebutton3gui11PaneManagerFRCQ36nw4hbm3lyt6Layout
void f_8020E210(Ctx* __restrict c) {
  trace_call(0x8020E210u);
  c->r[5]=0u+0x80490000u; // 8020E210
  c->r[0]=0u+0x00000000u; // 8020E214
  W32(c->r[5]+0x000017A8u,c->r[0]); // 8020E218
  c->r[4]=R32(c->r[4]+0x00000010u); // 8020E21C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E220
  c->r[4]=c->r[4]+0x00000010u; // 8020E224
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8020E228
  c->ctr=c->r[12]; // 8020E22C
  if (true) { dispatch(c,c->ctr); return; } // 8020E230
}

// addLayoutScene__Q310homebutton3gui11PaneManagerFRCQ36nw4hbm3lyt6Layout
void f_8020E240(Ctx* __restrict c) {
  trace_call(0x8020E240u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E240
  c->r[4]=R32(c->r[4]+0x00000010u); // 8020E244
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8020E248
  c->r[4]=c->r[4]+0x00000010u; // 8020E24C
  c->ctr=c->r[12]; // 8020E250
  if (true) { dispatch(c,c->ctr); return; } // 8020E254
}

// walkInChildren__Q310homebutton3gui11PaneManagerFRQ36nw4hbm2ut30LinkList<Q36nw4hbm3lyt4Pane,4>
void f_8020E260(Ctx* __restrict c) {
  trace_call(0x8020E260u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E260
  c->r[0]=c->lr; // 8020E264
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020E268
  c->r[11]=c->r[1]+0x00000040u; // 8020E26C
  c->lr=0x8020E274u; f_800C2E34(c); // 8020E270
  c->r[23]=0u+0x803A0000u; // 8020E274
  c->r[25]=0u+0x803A0000u; // 8020E278
  c->r[31]=0u+0x80490000u; // 8020E27C
  c->r[30]=0u+0x80490000u; // 8020E280
  c->r[27]=R32(c->r[4]+0x00000004u); // 8020E284
  c->r[28]=c->r[3]|c->r[3]; // 8020E288
  c->r[23]=c->r[23]+0x00006460u; // 8020E28C
  c->r[25]=c->r[25]+0x000062A8u; // 8020E290
  c->r[31]=c->r[31]+0x00001A30u; // 8020E294
  c->r[30]=c->r[30]+0x00001A40u; // 8020E298
  c->r[26]=c->r[4]+0x00000004u; // 8020E29C
  c->r[22]=0u+0x80490000u; // 8020E2A0
  c->r[24]=0u+0x00000000u; // 8020E2A4
  goto L_8020E4D8; // 8020E2A8
L_8020E2AC:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8020E2AC
  cmps(c,0,(int32_t)c->r[3],0); // 8020E2B0
  if (crb(c,2)) { goto L_8020E32C; } // 8020E2B4
  c->r[4]=0u+0x00000030u; // 8020E2B8
  c->lr=0x8020E2C0u; f_8023B6D0(c); // 8020E2BC
  c->r[29]=c->r[3]|c->r[3]; // 8020E2C0
  c->r[3]=R32(c->r[28]+0x00000014u); // 8020E2C4
  c->r[4]=0u+0x00000010u; // 8020E2C8
  c->lr=0x8020E2D0u; f_8023B6D0(c); // 8020E2CC
  cmps(c,0,(int32_t)c->r[29],0); // 8020E2D0
  c->r[21]=c->r[3]|c->r[3]; // 8020E2D4
  if (crb(c,2)) { goto L_8020E314; } // 8020E2D8
  c->r[0]=R32(c->r[22]+0x000017A8u); // 8020E2DC
  c->r[3]=c->r[29]|c->r[29]; // 8020E2E0
  W32(c->r[29]+0x00000000u,c->r[23]); // 8020E2E4
  W8(c->r[29]+0x00000018u,c->r[24]); // 8020E2E8
  W32(c->r[29]+0x0000001Cu,c->r[24]); // 8020E2EC
  W32(c->r[29]+0x00000020u,c->r[0]); // 8020E2F0
  W8(c->r[29]+0x00000024u,c->r[24]); // 8020E2F4
  W32(c->r[29]+0x00000028u,c->r[24]); // 8020E2F8
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020E2FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020E300
  c->ctr=c->r[12]; // 8020E304
  if (true) { c->lr=0x8020E30Cu; dispatch(c,c->ctr); } // 8020E308
  W32(c->r[29]+0x00000000u,c->r[25]); // 8020E30C
  W32(c->r[29]+0x0000002Cu,c->r[24]); // 8020E310
L_8020E314:;
  cmps(c,0,(int32_t)c->r[21],0); // 8020E314
  if (crb(c,2)) { goto L_8020E390; } // 8020E318
  c->r[0]=c->r[27]+0xFFFFFFFCu; // 8020E31C
  W32(c->r[21]+0x00000000u,c->r[0]); // 8020E320
  W32(c->r[21]+0x00000004u,c->r[29]); // 8020E324
  goto L_8020E390; // 8020E328
L_8020E32C:;
  c->r[3]=0u+0x00000030u; // 8020E32C
  c->lr=0x8020E334u; f_8004BB00(c); // 8020E330
  cmps(c,0,(int32_t)c->r[3],0); // 8020E334
  c->r[29]=c->r[3]|c->r[3]; // 8020E338
  if (crb(c,2)) { goto L_8020E370; } // 8020E33C
  c->r[0]=R32(c->r[22]+0x000017A8u); // 8020E340
  W32(c->r[3]+0x00000000u,c->r[23]); // 8020E344
  W8(c->r[3]+0x00000018u,c->r[24]); // 8020E348
  W32(c->r[3]+0x0000001Cu,c->r[24]); // 8020E34C
  W32(c->r[3]+0x00000020u,c->r[0]); // 8020E350
  W8(c->r[3]+0x00000024u,c->r[24]); // 8020E354
  W32(c->r[3]+0x00000028u,c->r[24]); // 8020E358
  c->r[12]=R32(c->r[23]+0x0000000Cu); // 8020E35C
  c->ctr=c->r[12]; // 8020E360
  if (true) { c->lr=0x8020E368u; dispatch(c,c->ctr); } // 8020E364
  W32(c->r[29]+0x00000000u,c->r[25]); // 8020E368
  W32(c->r[29]+0x0000002Cu,c->r[24]); // 8020E36C
L_8020E370:;
  c->r[3]=0u+0x00000010u; // 8020E370
  c->lr=0x8020E378u; f_8004BB00(c); // 8020E374
  cmps(c,0,(int32_t)c->r[3],0); // 8020E378
  if (crb(c,2)) { goto L_8020E38C; } // 8020E37C
  c->r[0]=c->r[27]+0xFFFFFFFCu; // 8020E380
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020E384
  W32(c->r[3]+0x00000004u,c->r[29]); // 8020E388
L_8020E38C:;
  c->r[21]=c->r[3]|c->r[3]; // 8020E38C
L_8020E390:;
  c->r[4]=c->r[21]|c->r[21]; // 8020E390
  c->r[3]=c->r[28]+0x00000018u; // 8020E394
  c->lr=0x8020E39Cu; f_802269D0(c); // 8020E398
  c->r[4]=R32(c->r[22]+0x000017A8u); // 8020E39C
  c->r[21]=c->r[27]+0xFFFFFFFCu; // 8020E3A0
  c->r[3]=c->r[29]|c->r[29]; // 8020E3A4
  c->r[0]=c->r[4]+0x00000001u; // 8020E3A8
  W32(c->r[22]+0x000017A8u,c->r[0]); // 8020E3AC
  c->r[4]=c->r[21]|c->r[21]; // 8020E3B0
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020E3B4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8020E3B8
  c->ctr=c->r[12]; // 8020E3BC
  if (true) { c->lr=0x8020E3C4u; dispatch(c,c->ctr); } // 8020E3C0
  c->r[12]=R32(c->r[21]+0x00000000u); // 8020E3C4
  c->r[3]=c->r[21]|c->r[21]; // 8020E3C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020E3CC
  c->ctr=c->r[12]; // 8020E3D0
  if (true) { c->lr=0x8020E3D8u; dispatch(c,c->ctr); } // 8020E3D4
  goto L_8020E3F4; // 8020E3D8
  c->r[0]=c->r[0]|0x00000000u; // 8020E3DC
L_8020E3E0:;
  cmpu(c,0,c->r[3],c->r[31]); // 8020E3E0
  if (!crb(c,2)) { goto L_8020E3F0; } // 8020E3E4
  c->r[0]=0u+0x00000001u; // 8020E3E8
  goto L_8020E400; // 8020E3EC
L_8020E3F0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020E3F0
L_8020E3F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020E3F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E3E0; } // 8020E3F8
  c->r[0]=0u+0x00000000u; // 8020E3FC
L_8020E400:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020E400
  if (crb(c,2)) { goto L_8020E410; } // 8020E404
  c->r[0]=c->r[21]|c->r[21]; // 8020E408
  goto L_8020E414; // 8020E40C
L_8020E410:;
  c->r[0]=0u+0x00000000u; // 8020E410
L_8020E414:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020E414
  if (crb(c,2)) { goto L_8020E434; } // 8020E418
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020E41C
  c->r[3]=c->r[29]|c->r[29]; // 8020E420
  c->r[4]=0u+0x00000001u; // 8020E424
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020E428
  c->ctr=c->r[12]; // 8020E42C
  if (true) { c->lr=0x8020E434u; dispatch(c,c->ctr); } // 8020E430
L_8020E434:;
  c->r[12]=R32(c->r[21]+0x00000000u); // 8020E434
  c->r[3]=c->r[21]|c->r[21]; // 8020E438
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020E43C
  c->ctr=c->r[12]; // 8020E440
  if (true) { c->lr=0x8020E448u; dispatch(c,c->ctr); } // 8020E444
  goto L_8020E464; // 8020E448
  c->r[0]=c->r[0]|0x00000000u; // 8020E44C
L_8020E450:;
  cmpu(c,0,c->r[3],c->r[30]); // 8020E450
  if (!crb(c,2)) { goto L_8020E460; } // 8020E454
  c->r[0]=0u+0x00000001u; // 8020E458
  goto L_8020E470; // 8020E45C
L_8020E460:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020E460
L_8020E464:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020E464
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E450; } // 8020E468
  c->r[0]=0u+0x00000000u; // 8020E46C
L_8020E470:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020E470
  if (crb(c,2)) { goto L_8020E480; } // 8020E474
  c->r[0]=c->r[21]|c->r[21]; // 8020E478
  goto L_8020E484; // 8020E47C
L_8020E480:;
  c->r[0]=0u+0x00000000u; // 8020E480
L_8020E484:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020E484
  if (crb(c,2)) { goto L_8020E4A4; } // 8020E488
  c->r[12]=R32(c->r[29]+0x00000000u); // 8020E48C
  c->r[3]=c->r[29]|c->r[29]; // 8020E490
  c->r[4]=0u+0x00000001u; // 8020E494
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020E498
  c->ctr=c->r[12]; // 8020E49C
  if (true) { c->lr=0x8020E4A4u; dispatch(c,c->ctr); } // 8020E4A0
L_8020E4A4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020E4A4
  c->r[3]=c->r[28]|c->r[28]; // 8020E4A8
  c->r[4]=c->r[29]|c->r[29]; // 8020E4AC
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020E4B0
  c->ctr=c->r[12]; // 8020E4B4
  if (true) { c->lr=0x8020E4BCu; dispatch(c,c->ctr); } // 8020E4B8
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020E4BC
  c->r[3]=c->r[28]|c->r[28]; // 8020E4C0
  c->r[4]=c->r[21]+0x00000010u; // 8020E4C4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8020E4C8
  c->ctr=c->r[12]; // 8020E4CC
  if (true) { c->lr=0x8020E4D4u; dispatch(c,c->ctr); } // 8020E4D0
  c->r[27]=R32(c->r[27]+0x00000000u); // 8020E4D4
L_8020E4D8:;
  cmpu(c,0,c->r[27],c->r[26]); // 8020E4D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E2AC; } // 8020E4DC
  c->r[11]=c->r[1]+0x00000040u; // 8020E4E0
  c->lr=0x8020E4E8u; f_800C2E80(c); // 8020E4E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020E4E8
  c->lr=c->r[0]; // 8020E4EC
  c->r[1]=c->r[1]+0x00000040u; // 8020E4F0
  return; // 8020E4F4
}

// fn_8020E500
void f_8020E500(Ctx* __restrict c) {
  trace_call(0x8020E500u);
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8020E500
  return; // 8020E504
}

// fn_8020E510
void f_8020E510(Ctx* __restrict c) {
  trace_call(0x8020E510u);
  c->r[3]=0u+0x80490000u; // 8020E510
  c->r[3]=c->r[3]+0x00001A28u; // 8020E514
  return; // 8020E518
}

// fn_8020E520
void f_8020E520(Ctx* __restrict c) {
  trace_call(0x8020E520u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E520
  c->r[4]=R32(c->r[4]+0x00000010u); // 8020E524
  c->r[12]=R32(c->r[12]+0x00000060u); // 8020E528
  c->r[4]=c->r[4]+0x00000010u; // 8020E52C
  c->ctr=c->r[12]; // 8020E530
  if (true) { dispatch(c,c->ctr); return; } // 8020E534
}

// fn_8020E540
void f_8020E540(Ctx* __restrict c) {
  trace_call(0x8020E540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E540
  c->r[0]=c->lr; // 8020E544
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E548
  c->r[11]=c->r[1]+0x00000020u; // 8020E54C
  c->lr=0x8020E554u; f_800C2E48(c); // 8020E550
  c->r[31]=R32(c->r[4]+0x00000004u); // 8020E554
  c->r[26]=c->r[3]|c->r[3]; // 8020E558
  c->r[30]=c->r[4]+0x00000004u; // 8020E55C
  c->r[29]=0u+0x80490000u; // 8020E560
  goto L_8020E63C; // 8020E564
L_8020E568:;
  c->r[3]=c->r[26]+0x00000018u; // 8020E568
  c->r[4]=0u+0x00000000u; // 8020E56C
  c->lr=0x8020E574u; f_80226AB0(c); // 8020E570
  c->r[27]=c->r[3]|c->r[3]; // 8020E574
  c->r[28]=c->r[31]+0xFFFFFFFCu; // 8020E578
  goto L_8020E59C; // 8020E57C
L_8020E580:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 8020E580
  cmpu(c,0,c->r[0],c->r[28]); // 8020E584
  if (crb(c,2)) { goto L_8020E5A4; } // 8020E588
  c->r[4]=c->r[27]|c->r[27]; // 8020E58C
  c->r[3]=c->r[26]+0x00000018u; // 8020E590
  c->lr=0x8020E598u; f_80226AB0(c); // 8020E594
  c->r[27]=c->r[3]|c->r[3]; // 8020E598
L_8020E59C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020E59C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E580; } // 8020E5A0
L_8020E5A4:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8020E5A4
  c->r[3]=c->r[26]|c->r[26]; // 8020E5A8
  c->r[4]=R32(c->r[27]+0x00000004u); // 8020E5AC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8020E5B0
  c->ctr=c->r[12]; // 8020E5B4
  if (true) { c->lr=0x8020E5BCu; dispatch(c,c->ctr); } // 8020E5B8
  c->r[4]=c->r[27]|c->r[27]; // 8020E5BC
  c->r[3]=c->r[26]+0x00000018u; // 8020E5C0
  c->lr=0x8020E5C8u; f_80226A40(c); // 8020E5C4
  c->r[3]=R32(c->r[29]+0x000017A8u); // 8020E5C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8020E5CC
  W32(c->r[29]+0x000017A8u,c->r[0]); // 8020E5D0
  c->r[3]=R32(c->r[26]+0x00000014u); // 8020E5D4
  cmps(c,0,(int32_t)c->r[3],0); // 8020E5D8
  if (crb(c,2)) { goto L_8020E5F8; } // 8020E5DC
  c->r[4]=R32(c->r[27]+0x00000004u); // 8020E5E0
  c->lr=0x8020E5E8u; f_8023B6E0(c); // 8020E5E4
  c->r[3]=R32(c->r[26]+0x00000014u); // 8020E5E8
  c->r[4]=c->r[27]|c->r[27]; // 8020E5EC
  c->lr=0x8020E5F4u; f_8023B6E0(c); // 8020E5F0
  goto L_8020E620; // 8020E5F4
L_8020E5F8:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 8020E5F8
  cmps(c,0,(int32_t)c->r[3],0); // 8020E5FC
  if (crb(c,2)) { goto L_8020E618; } // 8020E600
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E604
  c->r[4]=0u+0x00000001u; // 8020E608
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020E60C
  c->ctr=c->r[12]; // 8020E610
  if (true) { c->lr=0x8020E618u; dispatch(c,c->ctr); } // 8020E614
L_8020E618:;
  c->r[3]=c->r[27]|c->r[27]; // 8020E618
  c->lr=0x8020E620u; f_800C2AC0(c); // 8020E61C
L_8020E620:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 8020E620
  c->r[3]=c->r[26]|c->r[26]; // 8020E624
  c->r[4]=c->r[28]+0x00000010u; // 8020E628
  c->r[12]=R32(c->r[12]+0x00000060u); // 8020E62C
  c->ctr=c->r[12]; // 8020E630
  if (true) { c->lr=0x8020E638u; dispatch(c,c->ctr); } // 8020E634
  c->r[31]=R32(c->r[31]+0x00000000u); // 8020E638
L_8020E63C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8020E63C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E568; } // 8020E640
  c->r[11]=c->r[1]+0x00000020u; // 8020E644
  c->lr=0x8020E64Cu; f_800C2E94(c); // 8020E648
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E64C
  c->lr=c->r[0]; // 8020E650
  c->r[1]=c->r[1]+0x00000020u; // 8020E654
  return; // 8020E658
}

// getPaneComponentByPane__Q310homebutton3gui11PaneManagerFPQ36nw4hbm3lyt4Pane
void f_8020E660(Ctx* __restrict c) {
  trace_call(0x8020E660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E660
  c->r[0]=c->lr; // 8020E664
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E668
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020E66C
  c->r[31]=0u+0x00000000u; // 8020E670
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020E674
  c->r[30]=c->r[4]|c->r[4]; // 8020E678
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020E67C
  c->r[29]=c->r[3]|c->r[3]; // 8020E680
  goto L_8020E6AC; // 8020E684
L_8020E688:;
  c->r[3]=c->r[29]+0x00000018u; // 8020E688
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 8020E68C
  c->lr=0x8020E694u; f_80226AD0(c); // 8020E690
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020E694
  cmpu(c,0,c->r[0],c->r[30]); // 8020E698
  if (!crb(c,2)) { goto L_8020E6A8; } // 8020E69C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020E6A0
  goto L_8020E6BC; // 8020E6A4
L_8020E6A8:;
  c->r[31]=c->r[31]+0x00000001u; // 8020E6A8
L_8020E6AC:;
  c->r[0]=R16(c->r[29]+0x00000010u); // 8020E6AC
  cmpu(c,0,c->r[31],c->r[0]); // 8020E6B0
  if (crb(c,0)) { IRQCHK(c); goto L_8020E688; } // 8020E6B4
  c->r[3]=0u+0x00000000u; // 8020E6B8
L_8020E6BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E6BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020E6C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020E6C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020E6C8
  c->lr=c->r[0]; // 8020E6CC
  c->r[1]=c->r[1]+0x00000020u; // 8020E6D0
  return; // 8020E6D4
}

// setAllBoundingBoxComponentTriggerTarget__Q310homebutton3gui11PaneManagerFb
void f_8020E6E0(Ctx* __restrict c) {
  trace_call(0x8020E6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E6E0
  c->r[0]=c->lr; // 8020E6E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E6E8
  c->r[11]=c->r[1]+0x00000020u; // 8020E6EC
  c->lr=0x8020E6F4u; f_800C2E48(c); // 8020E6F0
  c->r[29]=0u+0x80490000u; // 8020E6F4
  c->r[26]=c->r[3]|c->r[3]; // 8020E6F8
  c->r[27]=c->r[4]|c->r[4]; // 8020E6FC
  c->r[28]=0u+0x00000000u; // 8020E700
  c->r[29]=c->r[29]+0x000019F0u; // 8020E704
  goto L_8020E78C; // 8020E708
L_8020E70C:;
  c->r[3]=c->r[26]+0x00000018u; // 8020E70C
  c->r[4]=rotl(c->r[28],0)&0x0000FFFFu; // 8020E710
  c->lr=0x8020E718u; f_80226AD0(c); // 8020E714
  c->r[30]=R32(c->r[3]+0x00000000u); // 8020E718
  c->r[31]=c->r[3]|c->r[3]; // 8020E71C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8020E720
  c->r[3]=c->r[30]|c->r[30]; // 8020E724
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020E728
  c->ctr=c->r[12]; // 8020E72C
  if (true) { c->lr=0x8020E734u; dispatch(c,c->ctr); } // 8020E730
  goto L_8020E74C; // 8020E734
L_8020E738:;
  cmpu(c,0,c->r[3],c->r[29]); // 8020E738
  if (!crb(c,2)) { goto L_8020E748; } // 8020E73C
  c->r[0]=0u+0x00000001u; // 8020E740
  goto L_8020E758; // 8020E744
L_8020E748:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020E748
L_8020E74C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020E74C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E738; } // 8020E750
  c->r[0]=0u+0x00000000u; // 8020E754
L_8020E758:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020E758
  if (crb(c,2)) { goto L_8020E764; } // 8020E75C
  goto L_8020E768; // 8020E760
L_8020E764:;
  c->r[30]=0u+0x00000000u; // 8020E764
L_8020E768:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020E768
  if (crb(c,2)) { goto L_8020E788; } // 8020E76C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8020E770
  c->r[4]=c->r[27]|c->r[27]; // 8020E774
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E778
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020E77C
  c->ctr=c->r[12]; // 8020E780
  if (true) { c->lr=0x8020E788u; dispatch(c,c->ctr); } // 8020E784
L_8020E788:;
  c->r[28]=c->r[28]+0x00000001u; // 8020E788
L_8020E78C:;
  c->r[0]=R16(c->r[26]+0x00000010u); // 8020E78C
  cmpu(c,0,c->r[28],c->r[0]); // 8020E790
  if (crb(c,0)) { IRQCHK(c); goto L_8020E70C; } // 8020E794
  c->r[11]=c->r[1]+0x00000020u; // 8020E798
  c->lr=0x8020E7A0u; f_800C2E94(c); // 8020E79C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E7A0
  c->lr=c->r[0]; // 8020E7A4
  c->r[1]=c->r[1]+0x00000020u; // 8020E7A8
  return; // 8020E7AC
}

// contain__Q310homebutton3gui13PaneComponentFff
void f_8020E7B0(Ctx* __restrict c) {
  trace_call(0x8020E7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E7B0
  c->r[0]=c->lr; // 8020E7B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8020E7B8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8020E7BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8020E7C0
  c->f[31]=c->f[2]; // 8020E7C4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8020E7C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8020E7CC
  c->f[30]=c->f[1]; // 8020E7D0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8020E7D4
  W32(c->r[1]+0x00000068u,c->r[30]); // 8020E7D8
  c->r[30]=c->r[3]|c->r[3]; // 8020E7DC
  c->r[0]=R32(c->r[3]+0x00000028u); // 8020E7E0
  cmps(c,0,(int32_t)c->r[0],0); // 8020E7E4
  if (!crb(c,2)) { goto L_8020E7F4; } // 8020E7E8
  c->r[3]=0u+0x00000000u; // 8020E7EC
  goto L_8020E8B4; // 8020E7F0
L_8020E7F4:;
  c->r[3]=c->r[0]|c->r[0]; // 8020E7F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E7F8
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020E7FC
  c->ctr=c->r[12]; // 8020E800
  if (true) { c->lr=0x8020E808u; dispatch(c,c->ctr); } // 8020E804
  cmps(c,0,(int32_t)c->r[3],0); // 8020E808
  c->r[31]=c->r[3]|c->r[3]; // 8020E80C
  if (!crb(c,2)) { goto L_8020E81C; } // 8020E810
  c->r[3]=0u+0x00000000u; // 8020E814
  goto L_8020E8B4; // 8020E818
L_8020E81C:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8020E81C
  c->r[4]=c->r[1]+0x00000038u; // 8020E820
  c->r[3]=c->r[3]+0x00000084u; // 8020E824
  c->lr=0x8020E82Cu; f_8023F050(c); // 8020E828
  c->r[3]=0u+0x80380000u; // 8020E82C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[30]);} // 8020E830
  {uint32_t ea=c->r[3]+0xFFFFF428u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E834
  c->r[3]=c->r[1]+0x00000038u; // 8020E838
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 8020E83C
  c->r[4]=c->r[1]+0x00000008u; // 8020E840
  c->r[5]=c->r[1]+0x00000028u; // 8020E844
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8020E848
  c->lr=0x8020E850u; f_8023F340(c); // 8020E84C
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 8020E850
  c->r[5]=c->r[31]|c->r[31]; // 8020E854
  c->r[3]=c->r[1]+0x00000018u; // 8020E858
  c->lr=0x8020E860u; f_8021FAC0(c); // 8020E85C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E860
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E864
  fcmp(c,0,c->f[0],c->f[1]); // 8020E868
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020E86C
  if (!crb(c,2)) { goto L_8020E8B0; } // 8020E870
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E874
  fcmp(c,0,c->f[1],c->f[0]); // 8020E878
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020E87C
  if (!crb(c,2)) { goto L_8020E8B0; } // 8020E880
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E884
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E888
  fcmp(c,0,c->f[0],c->f[1]); // 8020E88C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020E890
  if (!crb(c,2)) { goto L_8020E8B0; } // 8020E894
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E898
  fcmp(c,0,c->f[1],c->f[0]); // 8020E89C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8020E8A0
  if (!crb(c,2)) { goto L_8020E8B0; } // 8020E8A4
  c->r[3]=0u+0x00000001u; // 8020E8A8
  goto L_8020E8B4; // 8020E8AC
L_8020E8B0:;
  c->r[3]=0u+0x00000000u; // 8020E8B0
L_8020E8B4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8020E8B4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8020E8B8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8020E8BC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8020E8C0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8020E8C4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8020E8C8
  c->r[30]=R32(c->r[1]+0x00000068u); // 8020E8CC
  c->lr=c->r[0]; // 8020E8D0
  c->r[1]=c->r[1]+0x00000090u; // 8020E8D4
  return; // 8020E8D8
}

// getDrawInfo__Q310homebutton3gui11PaneManagerFv
void f_8020E8E0(Ctx* __restrict c) {
  trace_call(0x8020E8E0u);
  c->r[3]=R32(c->r[3]+0x00000024u); // 8020E8E0
  return; // 8020E8E4
}

// draw__Q310homebutton3gui13PaneComponentFv
void f_8020E8F0(Ctx* __restrict c) {
  trace_call(0x8020E8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E8F0
  c->r[0]=c->lr; // 8020E8F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020E8F8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8020E8FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8020E900
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8020E904
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8020E908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020E90C
  c->r[31]=0u+0x80380000u; // 8020E910
  c->r[31]=c->r[31]+0xFFFFF428u; // 8020E914
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020E918
  c->r[30]=c->r[3]|c->r[3]; // 8020E91C
  c->r[3]=R32(c->r[3]+0x00000028u); // 8020E920
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020E924
  c->r[12]=R32(c->r[12]+0x00000050u); // 8020E928
  c->ctr=c->r[12]; // 8020E92C
  if (true) { c->lr=0x8020E934u; dispatch(c,c->ctr); } // 8020E930
  cmps(c,0,(int32_t)c->r[3],0); // 8020E934
  if (crb(c,2)) { goto L_8020EA4C; } // 8020E938
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8020E93C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8020E940
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E944
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E948
  {uint32_t ea=c->r[3]+0x00000090u; c->f[31]=c->ps1[31]=RF32(ea);} // 8020E94C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8020E950
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8020E954
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020E958
  c->r[0]=R8(c->r[30]+0x00000004u); // 8020E95C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8020E960
  cmps(c,0,(int32_t)c->r[0],0); // 8020E964
  if (crb(c,2)) { goto L_8020E97C; } // 8020E968
  c->r[3]=0u+0x00000000u; // 8020E96C
  c->r[0]=0u+0x000000FFu; // 8020E970
  W8(c->r[1]+0x00000008u,c->r[3]); // 8020E974
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8020E978
L_8020E97C:;
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E97C
  c->r[4]=c->r[1]+0x00000008u; // 8020E980
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E984
  c->r[3]=0u+0x00000008u; // 8020E988
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020E98C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8020E990
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8020E994
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8020E998
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 8020E99C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[3]); // 8020E9A0
  c->f[3]=c->ps1[3]=S(c->f[31]+c->f[3]); // 8020E9A4
  c->f[4]=c->f[2]; // 8020E9A8
  c->lr=0x8020E9B0u; f_8020D520(c); // 8020E9AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E9B0
  c->r[4]=c->r[1]+0x00000008u; // 8020E9B4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020E9B8
  c->r[3]=0u+0x00000008u; // 8020E9BC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E9C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8020E9C4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8020E9C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8020E9CC
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 8020E9D0
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 8020E9D4
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[0]); // 8020E9D8
  c->f[3]=c->f[1]; // 8020E9DC
  c->lr=0x8020E9E4u; f_8020D520(c); // 8020E9E0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020E9E4
  c->r[4]=c->r[1]+0x00000008u; // 8020E9E8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020E9EC
  c->r[3]=0u+0x00000008u; // 8020E9F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020E9F4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8020E9F8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8020E9FC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8020EA00
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 8020EA04
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[3]); // 8020EA08
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[3]); // 8020EA0C
  c->f[4]=c->f[2]; // 8020EA10
  c->lr=0x8020EA18u; f_8020D520(c); // 8020EA14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020EA18
  c->r[4]=c->r[1]+0x00000008u; // 8020EA1C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020EA20
  c->r[3]=0u+0x00000008u; // 8020EA24
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020EA28
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8020EA2C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8020EA30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8020EA34
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 8020EA38
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 8020EA3C
  c->f[4]=c->ps1[4]=S(c->f[30]-c->f[0]); // 8020EA40
  c->f[3]=c->f[1]; // 8020EA44
  c->lr=0x8020EA4Cu; f_8020D520(c); // 8020EA48
L_8020EA4C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020EA4C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8020EA50
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8020EA54
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8020EA58
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8020EA5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020EA60
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020EA64
  c->lr=c->r[0]; // 8020EA68
  c->r[1]=c->r[1]+0x00000040u; // 8020EA6C
  return; // 8020EA70
}

// is_visible__Q210homebutton3guiFPQ36nw4hbm3lyt4Pane
void f_8020EA80(Ctx* __restrict c) {
  trace_call(0x8020EA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EA80
  c->r[0]=c->lr; // 8020EA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020EA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020EA8C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EA90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EA94
  if (!crb(c,2)) { goto L_8020EAA4; } // 8020EA98
  c->r[3]=0u+0x00000000u; // 8020EA9C
  goto L_8020EB6C; // 8020EAA0
L_8020EAA4:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EAA4
  cmps(c,0,(int32_t)c->r[3],0); // 8020EAA8
  if (!crb(c,2)) { goto L_8020EAB8; } // 8020EAAC
  c->r[3]=0u+0x00000001u; // 8020EAB0
  goto L_8020EB6C; // 8020EAB4
L_8020EAB8:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EAB8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EABC
  if (!crb(c,2)) { goto L_8020EACC; } // 8020EAC0
  c->r[3]=0u+0x00000000u; // 8020EAC4
  goto L_8020EB6C; // 8020EAC8
L_8020EACC:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EACC
  cmps(c,0,(int32_t)c->r[3],0); // 8020EAD0
  if (!crb(c,2)) { goto L_8020EAE0; } // 8020EAD4
  c->r[3]=0u+0x00000001u; // 8020EAD8
  goto L_8020EB6C; // 8020EADC
L_8020EAE0:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EAE0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EAE4
  if (!crb(c,2)) { goto L_8020EAF4; } // 8020EAE8
  c->r[3]=0u+0x00000000u; // 8020EAEC
  goto L_8020EB6C; // 8020EAF0
L_8020EAF4:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EAF4
  cmps(c,0,(int32_t)c->r[3],0); // 8020EAF8
  if (!crb(c,2)) { goto L_8020EB08; } // 8020EAFC
  c->r[3]=0u+0x00000001u; // 8020EB00
  goto L_8020EB6C; // 8020EB04
L_8020EB08:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EB08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EB0C
  if (!crb(c,2)) { goto L_8020EB1C; } // 8020EB10
  c->r[3]=0u+0x00000000u; // 8020EB14
  goto L_8020EB6C; // 8020EB18
L_8020EB1C:;
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 8020EB1C
  cmps(c,0,(int32_t)c->r[31],0); // 8020EB20
  if (!crb(c,2)) { goto L_8020EB30; } // 8020EB24
  c->r[3]=0u+0x00000001u; // 8020EB28
  goto L_8020EB6C; // 8020EB2C
L_8020EB30:;
  c->r[3]=c->r[31]|c->r[31]; // 8020EB30
  c->lr=0x8020EB38u; f_8020EB80(c); // 8020EB34
  cmps(c,0,(int32_t)c->r[3],0); // 8020EB38
  if (!crb(c,2)) { goto L_8020EB48; } // 8020EB3C
  c->r[3]=0u+0x00000000u; // 8020EB40
  goto L_8020EB6C; // 8020EB44
L_8020EB48:;
  c->r[3]=c->r[31]|c->r[31]; // 8020EB48
  c->lr=0x8020EB50u; f_8020EB90(c); // 8020EB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8020EB50
  if (!crb(c,2)) { goto L_8020EB60; } // 8020EB54
  c->r[3]=0u+0x00000001u; // 8020EB58
  goto L_8020EB6C; // 8020EB5C
L_8020EB60:;
  c->r[3]=c->r[31]|c->r[31]; // 8020EB60
  c->lr=0x8020EB68u; f_8020EB90(c); // 8020EB64
  c->lr=0x8020EB6Cu; f_8020EA80(c); // 8020EB68
L_8020EB6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020EB6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020EB70
  c->lr=c->r[0]; // 8020EB74
  c->r[1]=c->r[1]+0x00000010u; // 8020EB78
  return; // 8020EB7C
}

// IsVisible__Q36nw4hbm3lyt4PaneCFv
void f_8020EB80(Ctx* __restrict c) {
  trace_call(0x8020EB80u);
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EB80
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8020EB84
  return; // 8020EB88
}

// GetParent__Q36nw4hbm3lyt4PaneCFv
void f_8020EB90(Ctx* __restrict c) {
  trace_call(0x8020EB90u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EB90
  return; // 8020EB94
}

// fn_8020EBA0
void f_8020EBA0(Ctx* __restrict c) {
  trace_call(0x8020EBA0u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8020EBA0
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EBA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EBA8
  if (!crb(c,2)) { goto L_8020EBB8; } // 8020EBAC
  c->r[3]=0u+0x00000000u; // 8020EBB0
  return; // 8020EBB4
L_8020EBB8:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8020EBBC
  if (!crb(c,2)) { goto L_8020EBCC; } // 8020EBC0
  c->r[3]=0u+0x00000001u; // 8020EBC4
  return; // 8020EBC8
L_8020EBCC:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EBCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EBD0
  if (!crb(c,2)) { goto L_8020EBE0; } // 8020EBD4
  c->r[3]=0u+0x00000000u; // 8020EBD8
  return; // 8020EBDC
L_8020EBE0:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EBE0
  cmps(c,0,(int32_t)c->r[3],0); // 8020EBE4
  if (!crb(c,2)) { goto L_8020EBF4; } // 8020EBE8
  c->r[3]=0u+0x00000001u; // 8020EBEC
  return; // 8020EBF0
L_8020EBF4:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EBF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EBF8
  if (!crb(c,2)) { goto L_8020EC08; } // 8020EBFC
  c->r[3]=0u+0x00000000u; // 8020EC00
  return; // 8020EC04
L_8020EC08:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EC08
  cmps(c,0,(int32_t)c->r[3],0); // 8020EC0C
  if (!crb(c,2)) { goto L_8020EC1C; } // 8020EC10
  c->r[3]=0u+0x00000001u; // 8020EC14
  return; // 8020EC18
L_8020EC1C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EC1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EC20
  if (!crb(c,2)) { goto L_8020EC30; } // 8020EC24
  c->r[3]=0u+0x00000000u; // 8020EC28
  return; // 8020EC2C
L_8020EC30:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EC30
  cmps(c,0,(int32_t)c->r[3],0); // 8020EC34
  if (!crb(c,2)) { goto L_8020EC44; } // 8020EC38
  c->r[3]=0u+0x00000001u; // 8020EC3C
  return; // 8020EC40
L_8020EC44:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8020EC44
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020EC48
  if (!crb(c,2)) { goto L_8020EC58; } // 8020EC4C
  c->r[3]=0u+0x00000000u; // 8020EC50
  return; // 8020EC54
L_8020EC58:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8020EC58
  cmps(c,0,(int32_t)c->r[3],0); // 8020EC5C
  if (!crb(c,2)) { goto L_8020EC6C; } // 8020EC60
  c->r[3]=0u+0x00000001u; // 8020EC64
  return; // 8020EC68
L_8020EC6C:;
  f_8020EA80(c); return; // 8020EC6C
}

// fn_8020EC70
void f_8020EC70(Ctx* __restrict c) {
  trace_call(0x8020EC70u);
  return; // 8020EC70
}

// fn_8020EC80
void f_8020EC80(Ctx* __restrict c) {
  trace_call(0x8020EC80u);
  return; // 8020EC80
}

// fn_8020EC90
void f_8020EC90(Ctx* __restrict c) {
  trace_call(0x8020EC90u);
  return; // 8020EC90
}

// fn_8020ECA0
void f_8020ECA0(Ctx* __restrict c) {
  trace_call(0x8020ECA0u);
  c->r[3]=0u+0x00000000u; // 8020ECA0
  return; // 8020ECA4
}

// fn_8020ECB0
void f_8020ECB0(Ctx* __restrict c) {
  trace_call(0x8020ECB0u);
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8020ECB0
  return; // 8020ECB4
}

// fn_8020ECC0
void f_8020ECC0(Ctx* __restrict c) {
  trace_call(0x8020ECC0u);
  return; // 8020ECC0
}

// fn_8020ECD0
void f_8020ECD0(Ctx* __restrict c) {
  trace_call(0x8020ECD0u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 8020ECD0
  return; // 8020ECD4
}

// fn_8020ECE0
void f_8020ECE0(Ctx* __restrict c) {
  trace_call(0x8020ECE0u);
  cmps(c,0,(int32_t)c->r[4],0); // 8020ECE0
  W32(c->r[3]+0x00000004u,c->r[4]); // 8020ECE4
  c->r[0]=c->r[3]|c->r[3]; // 8020ECE8
  if (crb(c,2)) return; // 8020ECEC
  c->r[3]=c->r[4]|c->r[4]; // 8020ECF0
  c->r[4]=c->r[0]|c->r[0]; // 8020ECF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020ECF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8020ECFC
  c->ctr=c->r[12]; // 8020ED00
  if (true) { dispatch(c,c->ctr); return; } // 8020ED04
}

// fn_8020ED08
void f_8020ED08(Ctx* __restrict c) {
  trace_call(0x8020ED08u);
  return; // 8020ED08
}

// fn_8020ED10
void f_8020ED10(Ctx* __restrict c) {
  trace_call(0x8020ED10u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 8020ED10
  return; // 8020ED14
}

// fn_8020ED20
void f_8020ED20(Ctx* __restrict c) {
  trace_call(0x8020ED20u);
  c->r[3]=0u+0x00000000u; // 8020ED20
  return; // 8020ED24
}

// fn_8020ED30
void f_8020ED30(Ctx* __restrict c) {
  trace_call(0x8020ED30u);
  W32(c->r[3]+0x00000024u,c->r[4]); // 8020ED30
  return; // 8020ED34
}

// fn_8020ED40
void f_8020ED40(Ctx* __restrict c) {
  trace_call(0x8020ED40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020ED40
  c->r[0]=c->lr; // 8020ED44
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020ED48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020ED4C
  c->r[31]=0u+0x80490000u; // 8020ED50
  c->r[31]=c->r[31]+0x00001938u; // 8020ED54
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020ED58
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020ED5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020ED60
  c->r[29]=c->r[4]|c->r[4]; // 8020ED64
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020ED68
  c->r[28]=c->r[3]|c->r[3]; // 8020ED6C
  c->r[5]=R32(c->r[31]+c->r[30]); // 8020ED70
  cmps(c,0,(int32_t)c->r[5],0); // 8020ED74
  if (crb(c,2)) { goto L_8020EE1C; } // 8020ED78
  cmps(c,0,(int32_t)c->r[4],0); // 8020ED7C
  if (crb(c,2)) { goto L_8020ED90; } // 8020ED80
  cmps(c,0,(int32_t)c->r[4],-1); // 8020ED84
  if (crb(c,2)) { goto L_8020EDC8; } // 8020ED88
  goto L_8020EDEC; // 8020ED8C
L_8020ED90:;
  c->r[0]=R8(c->r[5]+0x00000040u); // 8020ED90
  cmps(c,0,(int32_t)c->r[0],0); // 8020ED94
  if (!crb(c,2)) { goto L_8020EDB4; } // 8020ED98
  c->r[4]=0u+0x80210000u; // 8020ED9C
  c->r[4]=c->r[4]+0xFFFFEE40u; // 8020EDA0
  c->lr=0x8020EDA8u; f_80264440(c); // 8020EDA4
  c->r[3]=R32(c->r[31]+c->r[30]); // 8020EDA8
  c->r[0]=0u+0x00000001u; // 8020EDAC
  W8(c->r[3]+0x00000040u,c->r[0]); // 8020EDB0
L_8020EDB4:;
  c->r[3]=c->r[28]|c->r[28]; // 8020EDB4
  c->r[4]=0u+0x00000000u; // 8020EDB8
  c->r[5]=0u+0x00000000u; // 8020EDBC
  c->lr=0x8020EDC4u; f_80265090(c); // 8020EDC0
  goto L_8020EDEC; // 8020EDC4
L_8020EDC8:;
  c->r[4]=R32(c->r[5]+0x00000028u); // 8020EDC8
  c->lr=0x8020EDD0u; f_80264440(c); // 8020EDCC
  c->r[3]=R32(c->r[31]+c->r[30]); // 8020EDD0
  c->r[0]=0u+0x00000000u; // 8020EDD4
  W8(c->r[3]+0x00000040u,c->r[0]); // 8020EDD8
  c->r[3]=R32(c->r[31]+c->r[30]); // 8020EDDC
  W8(c->r[3]+0x00000042u,c->r[0]); // 8020EDE0
  c->r[3]=R32(c->r[31]+c->r[30]); // 8020EDE4
  W8(c->r[3]+0x00000043u,c->r[0]); // 8020EDE8
L_8020EDEC:;
  c->r[3]=R32(c->r[31]+c->r[30]); // 8020EDEC
  c->r[12]=R32(c->r[3]+0x00000024u); // 8020EDF0
  cmps(c,0,(int32_t)c->r[12],0); // 8020EDF4
  if (crb(c,2)) { goto L_8020EE1C; } // 8020EDF8
  c->r[3]=0u+0x80210000u; // 8020EDFC
  c->r[3]=c->r[3]+0xFFFFED40u; // 8020EE00
  cmpu(c,0,c->r[12],c->r[3]); // 8020EE04
  if (crb(c,2)) { goto L_8020EE1C; } // 8020EE08
  c->r[3]=c->r[28]|c->r[28]; // 8020EE0C
  c->r[4]=c->r[29]|c->r[29]; // 8020EE10
  c->ctr=c->r[12]; // 8020EE14
  if (true) { c->lr=0x8020EE1Cu; dispatch(c,c->ctr); } // 8020EE18
L_8020EE1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020EE1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020EE20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020EE24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020EE28
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020EE2C
  c->lr=c->r[0]; // 8020EE30
  c->r[1]=c->r[1]+0x00000020u; // 8020EE34
  return; // 8020EE38
}

// fn_8020EE40
void f_8020EE40(Ctx* __restrict c) {
  trace_call(0x8020EE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EE40
  c->r[0]=c->lr; // 8020EE44
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020EE48
  c->r[11]=c->r[1]+0x00000020u; // 8020EE4C
  c->lr=0x8020EE54u; f_800C2E48(c); // 8020EE50
  c->r[29]=0u+0x80490000u; // 8020EE54
  c->r[28]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020EE58
  c->r[29]=c->r[29]+0x00001938u; // 8020EE5C
  c->r[30]=c->r[3]|c->r[3]; // 8020EE60
  c->r[26]=R32(c->r[29]+c->r[28]); // 8020EE64
  c->r[31]=c->r[4]|c->r[4]; // 8020EE68
  cmps(c,0,(int32_t)c->r[26],0); // 8020EE6C
  if (crb(c,2)) { goto L_8020EF20; } // 8020EE70
  cmps(c,0,(int32_t)c->r[4],255); // 8020EE74
  if (!crb(c,2)) { goto L_8020EF00; } // 8020EE78
  c->r[27]=R32(c->r[26]+0x00000000u); // 8020EE7C
  c->r[3]=c->r[27]|c->r[27]; // 8020EE80
  c->lr=0x8020EE88u; f_80265040(c); // 8020EE84
  cmps(c,0,(int32_t)c->r[3],0); // 8020EE88
  if (crb(c,2)) { goto L_8020EF00; } // 8020EE8C
  c->r[3]=c->r[27]|c->r[27]; // 8020EE90
  c->r[4]=0u+0x00000002u; // 8020EE94
  c->r[5]=0u+0x00000000u; // 8020EE98
  c->lr=0x8020EEA0u; f_80265090(c); // 8020EE9C
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 8020EEA0
  c->r[3]=0u+0x80490000u; // 8020EEA4
  c->r[4]=c->r[27]|c->r[27]; // 8020EEA8
  c->r[3]=c->r[3]+0x00001878u; // 8020EEAC
  c->r[27]=c->r[3]+c->r[0]; // 8020EEB0
  c->r[3]=c->r[27]|c->r[27]; // 8020EEB4
  c->lr=0x8020EEBCu; f_80244440(c); // 8020EEB8
  c->r[3]=c->r[27]|c->r[27]; // 8020EEBC
  c->lr=0x8020EEC4u; f_80244010(c); // 8020EEC0
  c->r[4]=0u+0x80000000u; // 8020EEC4
  c->r[7]=0u+0x80210000u; // 8020EEC8
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8020EECC
  c->r[3]=0u+0x10620000u; // 8020EED0
  c->r[4]=c->r[3]+0x00004DD3u; // 8020EED4
  c->r[7]=c->r[7]+0xFFFFEF40u; // 8020EED8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020EEDC
  c->r[3]=c->r[27]|c->r[27]; // 8020EEE0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8020EEE4
  c->r[5]=0u+0x00000000u; // 8020EEE8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020EEEC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 8020EEF0
  c->lr=0x8020EEF8u; f_80243F10(c); // 8020EEF4
  c->r[0]=0u+0x00000001u; // 8020EEF8
  W8(c->r[26]+0x00000041u,c->r[0]); // 8020EEFC
L_8020EF00:;
  c->r[3]=R32(c->r[29]+c->r[28]); // 8020EF00
  c->r[12]=R32(c->r[3]+0x00000028u); // 8020EF04
  cmps(c,0,(int32_t)c->r[12],0); // 8020EF08
  if (crb(c,2)) { goto L_8020EF20; } // 8020EF0C
  c->r[3]=c->r[30]|c->r[30]; // 8020EF10
  c->r[4]=c->r[31]|c->r[31]; // 8020EF14
  c->ctr=c->r[12]; // 8020EF18
  if (true) { c->lr=0x8020EF20u; dispatch(c,c->ctr); } // 8020EF1C
L_8020EF20:;
  c->r[11]=c->r[1]+0x00000020u; // 8020EF20
  c->lr=0x8020EF28u; f_800C2E94(c); // 8020EF24
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020EF28
  c->lr=c->r[0]; // 8020EF2C
  c->r[1]=c->r[1]+0x00000020u; // 8020EF30
  return; // 8020EF34
}

// soundOnCallback__Q210homebutton10ControllerFP7OSAlarmP9OSContext
void f_8020EF40(Ctx* __restrict c) {
  trace_call(0x8020EF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EF40
  c->r[0]=c->lr; // 8020EF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020EF48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020EF4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020EF50
  c->lr=0x8020EF58u; f_80244450(c); // 8020EF54
  c->r[4]=0u+0x80490000u; // 8020EF58
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020EF5C
  c->r[4]=c->r[4]+0x00001938u; // 8020EF60
  c->r[31]=R32(c->r[4]+c->r[0]); // 8020EF64
  c->r[30]=R32(c->r[31]+0x00000000u); // 8020EF68
  c->r[3]=c->r[30]|c->r[30]; // 8020EF6C
  c->lr=0x8020EF74u; f_80265040(c); // 8020EF70
  cmps(c,0,(int32_t)c->r[3],0); // 8020EF74
  if (crb(c,2)) { goto L_8020EF8C; } // 8020EF78
  c->r[3]=c->r[30]|c->r[30]; // 8020EF7C
  c->r[4]=0u+0x00000003u; // 8020EF80
  c->r[5]=0u+0x00000000u; // 8020EF84
  c->lr=0x8020EF8Cu; f_80265090(c); // 8020EF88
L_8020EF8C:;
  c->r[0]=0u+0x00000000u; // 8020EF8C
  W8(c->r[31]+0x00000041u,c->r[0]); // 8020EF90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020EF94
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020EF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020EF9C
  c->lr=c->r[0]; // 8020EFA0
  c->r[1]=c->r[1]+0x00000010u; // 8020EFA4
  return; // 8020EFA8
}

// fn_8020EFB0
void f_8020EFB0(Ctx* __restrict c) {
  trace_call(0x8020EFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EFB0
  c->r[0]=c->lr; // 8020EFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020EFB8
  c->r[11]=c->r[1]+0x00000020u; // 8020EFBC
  c->lr=0x8020EFC4u; f_800C2E4C(c); // 8020EFC0
  c->r[6]=0u+0x80380000u; // 8020EFC4
  c->r[31]=0u+0x00000000u; // 8020EFC8
  {uint32_t ea=c->r[6]+0xFFFFF438u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020EFCC
  cmps(c,0,(int32_t)c->r[4],4); // 8020EFD0
  c->r[30]=0u+0x80490000u; // 8020EFD4
  c->r[0]=0u+0x00000001u; // 8020EFD8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8020EFDC
  c->r[27]=c->r[3]|c->r[3]; // 8020EFE0
  c->r[28]=c->r[4]|c->r[4]; // 8020EFE4
  c->r[30]=c->r[30]+0x000017B0u; // 8020EFE8
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 8020EFEC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8020EFF0
  W32(c->r[3]+0x00000020u,c->r[5]); // 8020EFF4
  W32(c->r[3]+0x00000024u,c->r[31]); // 8020EFF8
  W32(c->r[3]+0x00000028u,c->r[31]); // 8020EFFC
  W8(c->r[3]+0x00000040u,c->r[31]); // 8020F000
  W8(c->r[3]+0x00000041u,c->r[31]); // 8020F004
  W8(c->r[3]+0x00000044u,c->r[0]); // 8020F008
  if (!crb(c,0)) { goto L_8020F048; } // 8020F00C
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8020F010
  c->r[3]=c->r[30]+0x00000000u; // 8020F014
  c->r[0]=c->r[30]+0x00000008u; // 8020F018
  W8(c->r[3]+c->r[4],c->r[31]); // 8020F01C
  c->r[3]=c->r[0]+c->r[29]; // 8020F020
  c->lr=0x8020F028u; f_80243CB0(c); // 8020F024
  c->r[0]=c->r[30]+0x000000C8u; // 8020F028
  c->r[3]=c->r[0]+c->r[29]; // 8020F02C
  c->lr=0x8020F034u; f_80243CB0(c); // 8020F030
  c->r[3]=c->r[30]+0x00000198u; // 8020F034
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8020F038
  c->r[4]=c->r[30]+0x00000188u; // 8020F03C
  W8(c->r[3]+c->r[28],c->r[31]); // 8020F040
  W32(c->r[4]+c->r[0],c->r[27]); // 8020F044
L_8020F048:;
  c->r[11]=c->r[1]+0x00000020u; // 8020F048
  c->r[3]=c->r[27]|c->r[27]; // 8020F04C
  c->lr=0x8020F054u; f_800C2E98(c); // 8020F050
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020F054
  c->lr=c->r[0]; // 8020F058
  c->r[1]=c->r[1]+0x00000020u; // 8020F05C
  return; // 8020F060
}

// fn_8020F070
void f_8020F070(Ctx* __restrict c) {
  trace_call(0x8020F070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F070
  c->r[0]=c->lr; // 8020F074
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020F078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020F07C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020F080
  c->r[30]=c->r[3]|c->r[3]; // 8020F084
  c->lr=0x8020F08Cu; f_80269D60(c); // 8020F088
  c->r[31]=c->r[3]|c->r[3]; // 8020F08C
  c->r[3]=0u+0x00000000u; // 8020F090
  c->lr=0x8020F098u; f_80269D70(c); // 8020F094
  c->r[4]=0u+0x80210000u; // 8020F098
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020F09C
  c->r[4]=c->r[4]+0xFFFFED40u; // 8020F0A0
  c->lr=0x8020F0A8u; f_802643B0(c); // 8020F0A4
  W32(c->r[30]+0x00000024u,c->r[3]); // 8020F0A8
  c->r[3]=c->r[31]|c->r[31]; // 8020F0AC
  c->lr=0x8020F0B4u; f_80269D70(c); // 8020F0B0
  c->r[4]=0u+0x80210000u; // 8020F0B4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020F0B8
  c->r[4]=c->r[4]+0xFFFFEE40u; // 8020F0BC
  c->lr=0x8020F0C4u; f_80264440(c); // 8020F0C0
  W32(c->r[30]+0x00000028u,c->r[3]); // 8020F0C4
  c->r[31]=0u+0x00000001u; // 8020F0C8
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020F0CC
  c->r[4]=c->r[1]+0x00000008u; // 8020F0D0
  W8(c->r[30]+0x00000044u,c->r[31]); // 8020F0D4
  c->lr=0x8020F0DCu; f_80264290(c); // 8020F0D8
  cmps(c,0,(int32_t)c->r[3],0); // 8020F0DC
  if (crb(c,2)) { goto L_8020F0F0; } // 8020F0E0
  cmps(c,0,(int32_t)c->r[3],-1); // 8020F0E4
  if (crb(c,2)) { goto L_8020F0F8; } // 8020F0E8
  goto L_8020F100; // 8020F0EC
L_8020F0F0:;
  W8(c->r[30]+0x00000040u,c->r[31]); // 8020F0F0
  goto L_8020F100; // 8020F0F4
L_8020F0F8:;
  c->r[0]=0u+0x00000000u; // 8020F0F8
  W8(c->r[30]+0x00000040u,c->r[0]); // 8020F0FC
L_8020F100:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020F100
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020F104
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020F108
  c->lr=c->r[0]; // 8020F10C
  c->r[1]=c->r[1]+0x00000020u; // 8020F110
  return; // 8020F114
}

// fn_8020F120
void f_8020F120(Ctx* __restrict c) {
  trace_call(0x8020F120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F120
  c->r[0]=c->lr; // 8020F124
  c->r[4]=0u+0x00000001u; // 8020F128
  c->r[5]=0u+0x00000000u; // 8020F12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F134
  c->r[31]=c->r[3]|c->r[3]; // 8020F138
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020F13C
  c->lr=0x8020F144u; f_80265090(c); // 8020F140
  c->r[3]=0u+0x00000000u; // 8020F144
  c->lr=0x8020F14Cu; f_80269D70(c); // 8020F148
  c->r[3]=R32(c->r[31]+0x00000000u); // 8020F14C
  c->r[4]=R32(c->r[31]+0x00000024u); // 8020F150
  c->lr=0x8020F158u; f_802643B0(c); // 8020F154
  c->r[3]=0u+0x00000001u; // 8020F158
  c->lr=0x8020F160u; f_80269D70(c); // 8020F15C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8020F160
  c->r[4]=R32(c->r[31]+0x00000028u); // 8020F164
  c->lr=0x8020F16Cu; f_80264440(c); // 8020F168
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F16C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F170
  c->lr=c->r[0]; // 8020F174
  c->r[1]=c->r[1]+0x00000010u; // 8020F178
  return; // 8020F17C
}

// fn_8020F180
void f_8020F180(Ctx* __restrict c) {
  trace_call(0x8020F180u);
  c->r[6]=R32(c->r[4]+0x00000000u); // 8020F180
  cmps(c,0,(int32_t)c->r[6],0); // 8020F184
  if (crb(c,2)) return; // 8020F188
  cmps(c,0,(int32_t)c->r[5],0); // 8020F18C
  if (crb(c,2)) { goto L_8020F1E8; } // 8020F190
  c->r[5]=R8(c->r[6]+0x0000005Cu); // 8020F194
  cmpu(c,0,c->r[5],0x00000002u); // 8020F198
  if (!crb(c,2)) { goto L_8020F1AC; } // 8020F19C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8020F1A0
  cmpu(c,0,c->r[0],0x00000002u); // 8020F1A4
  if (crb(c,2)) { goto L_8020F1C0; } // 8020F1A8
L_8020F1AC:;
  cmpu(c,0,c->r[5],0x00000007u); // 8020F1AC
  if (!crb(c,2)) { goto L_8020F1D4; } // 8020F1B0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8020F1B4
  cmpu(c,0,c->r[0],0x00000007u); // 8020F1B8
  if (!crb(c,2)) { goto L_8020F1D4; } // 8020F1BC
L_8020F1C0:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F1C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F1C4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8020F1C8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020F1CC
  goto L_8020F1E8; // 8020F1D0
L_8020F1D4:;
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F1D4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8020F1D8
  c->r[5]=R32(c->r[4]+0x00000000u); // 8020F1DC
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F1E0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020F1E4
L_8020F1E8:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 8020F1E8
  c->r[0]=R32(c->r[6]+0x00000004u); // 8020F1EC
  W32(c->r[3]+0x00000010u,c->r[0]); // 8020F1F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 8020F1F4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020F1F8
  c->r[0]=R32(c->r[6]+0x00000008u); // 8020F1FC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8020F200
  c->r[5]=R8(c->r[6]+0x0000005Cu); // 8020F204
  cmpu(c,0,c->r[5],0x00000002u); // 8020F208
  if (!crb(c,2)) { goto L_8020F21C; } // 8020F20C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8020F210
  cmpu(c,0,c->r[0],0x00000002u); // 8020F214
  if (crb(c,2)) { goto L_8020F230; } // 8020F218
L_8020F21C:;
  cmpu(c,0,c->r[5],0x00000007u); // 8020F21C
  if (!crb(c,2)) return; // 8020F220
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8020F224
  cmpu(c,0,c->r[0],0x00000007u); // 8020F228
  if (!crb(c,2)) return; // 8020F22C
L_8020F230:;
  c->r[0]=R32(c->r[6]+0x00000060u); // 8020F230
  c->r[4]=R32(c->r[6]+0x00000064u); // 8020F234
  c->r[5]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[5]); // 8020F238
  c->r[5]=R32(c->r[6]+0x00000068u); // 8020F23C
  if (crb(c,2)) { goto L_8020F250; } // 8020F240
  c->r[6]=R32(c->r[3]+0x00000014u); // 8020F244
  c->r[6]=c->r[6]|0x00000800u; // 8020F248
  W32(c->r[3]+0x00000014u,c->r[6]); // 8020F24C
L_8020F250:;
  c->r[6]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[6]); // 8020F250
  if (crb(c,2)) { goto L_8020F264; } // 8020F254
  c->r[6]=R32(c->r[3]+0x00000010u); // 8020F258
  c->r[6]=c->r[6]|0x00000800u; // 8020F25C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8020F260
L_8020F264:;
  c->r[6]=rotl(c->r[5],0)&0x00000010u; cr0(c,c->r[6]); // 8020F264
  if (crb(c,2)) { goto L_8020F278; } // 8020F268
  c->r[6]=R32(c->r[3]+0x00000018u); // 8020F26C
  c->r[6]=c->r[6]|0x00000800u; // 8020F270
  W32(c->r[3]+0x00000018u,c->r[6]); // 8020F274
L_8020F278:;
  c->r[6]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[6]); // 8020F278
  if (crb(c,2)) { goto L_8020F28C; } // 8020F27C
  c->r[6]=R32(c->r[3]+0x00000014u); // 8020F280
  c->r[6]=c->r[6]|0x00000010u; // 8020F284
  W32(c->r[3]+0x00000014u,c->r[6]); // 8020F288
L_8020F28C:;
  c->r[6]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[6]); // 8020F28C
  if (crb(c,2)) { goto L_8020F2A0; } // 8020F290
  c->r[6]=R32(c->r[3]+0x00000010u); // 8020F294
  c->r[6]=c->r[6]|0x00000010u; // 8020F298
  W32(c->r[3]+0x00000010u,c->r[6]); // 8020F29C
L_8020F2A0:;
  c->r[6]=rotl(c->r[5],0)&0x00000400u; cr0(c,c->r[6]); // 8020F2A0
  if (crb(c,2)) { goto L_8020F2B4; } // 8020F2A4
  c->r[6]=R32(c->r[3]+0x00000018u); // 8020F2A8
  c->r[6]=c->r[6]|0x00000010u; // 8020F2AC
  W32(c->r[3]+0x00000018u,c->r[6]); // 8020F2B0
L_8020F2B4:;
  c->r[6]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[6]); // 8020F2B4
  if (crb(c,2)) { goto L_8020F2C8; } // 8020F2B8
  c->r[6]=R32(c->r[3]+0x00000014u); // 8020F2BC
  c->r[6]=c->r[6]|0x00001000u; // 8020F2C0
  W32(c->r[3]+0x00000014u,c->r[6]); // 8020F2C4
L_8020F2C8:;
  c->r[6]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[6]); // 8020F2C8
  if (crb(c,2)) { goto L_8020F2DC; } // 8020F2CC
  c->r[6]=R32(c->r[3]+0x00000010u); // 8020F2D0
  c->r[6]=c->r[6]|0x00001000u; // 8020F2D4
  W32(c->r[3]+0x00000010u,c->r[6]); // 8020F2D8
L_8020F2DC:;
  c->r[6]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[6]); // 8020F2DC
  if (crb(c,2)) { goto L_8020F2F0; } // 8020F2E0
  c->r[6]=R32(c->r[3]+0x00000018u); // 8020F2E4
  c->r[6]=c->r[6]|0x00001000u; // 8020F2E8
  W32(c->r[3]+0x00000018u,c->r[6]); // 8020F2EC
L_8020F2F0:;
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8020F2F0
  if (crb(c,2)) { goto L_8020F304; } // 8020F2F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8020F2F8
  c->r[0]=c->r[0]|0x00008000u; // 8020F2FC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020F300
L_8020F304:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 8020F304
  if (crb(c,2)) { goto L_8020F318; } // 8020F308
  c->r[0]=R32(c->r[3]+0x00000010u); // 8020F30C
  c->r[0]=c->r[0]|0x00008000u; // 8020F310
  W32(c->r[3]+0x00000010u,c->r[0]); // 8020F314
L_8020F318:;
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 8020F318
  if (crb(c,2)) return; // 8020F31C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020F320
  c->r[0]=c->r[0]|0x00008000u; // 8020F324
  W32(c->r[3]+0x00000018u,c->r[0]); // 8020F328
  return; // 8020F32C
}

// fn_8020F330
void f_8020F330(Ctx* __restrict c) {
  trace_call(0x8020F330u);
  c->r[0]=0u+0x00000000u; // 8020F330
  W32(c->r[3]+0x00000010u,c->r[0]); // 8020F334
  W32(c->r[3]+0x00000014u,c->r[0]); // 8020F338
  W32(c->r[3]+0x00000018u,c->r[0]); // 8020F33C
  return; // 8020F340
}

// setInValidPos__Q210homebutton10ControllerFv
void f_8020F350(Ctx* __restrict c) {
  trace_call(0x8020F350u);
  c->r[5]=0u+0x80380000u; // 8020F350
  c->r[4]=0u+0x80380000u; // 8020F354
  {uint32_t ea=c->r[5]+0xFFFFF43Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F358
  {uint32_t ea=c->r[4]+0xFFFFF440u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F35C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8020F360
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8020F364
  return; // 8020F368
}

// connect__Q210homebutton10ControllerFv
void f_8020F370(Ctx* __restrict c) {
  trace_call(0x8020F370u);
  c->r[4]=c->r[3]|c->r[3]; // 8020F370
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F374
  c->r[4]=R32(c->r[4]+0x00000000u); // 8020F378
  f_80210060(c); return; // 8020F37C
}

// disconnect__Q210homebutton10ControllerFv
void f_8020F380(Ctx* __restrict c) {
  trace_call(0x8020F380u);
  return; // 8020F380
}

// setSpeakerVol__Q210homebutton10ControllerFf
void f_8020F390(Ctx* __restrict c) {
  trace_call(0x8020F390u);
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8020F390
  return; // 8020F394
}

// playSound__Q210homebutton10ControllerFi
void f_8020F3A0(Ctx* __restrict c) {
  trace_call(0x8020F3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F3A0
  c->r[0]=c->lr; // 8020F3A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020F3A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020F3AC
  c->r[31]=c->r[3]|c->r[3]; // 8020F3B0
  c->r[0]=R8(c->r[3]+0x00000041u); // 8020F3B4
  cmps(c,0,(int32_t)c->r[0],0); // 8020F3B8
  if (!crb(c,2)) { goto L_8020F428; } // 8020F3BC
  c->r[5]=0u+0x80380000u; // 8020F3C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F3C4
  {uint32_t ea=c->r[5]+0xFFFFF444u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F3C8
  c->r[5]=c->r[4]|c->r[4]; // 8020F3CC
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F3D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8020F3D4
  c->r[4]=R32(c->r[31]+0x00000000u); // 8020F3D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8020F3DC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8020F3E0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8020F3E4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8020F3E8
  c->lr=0x8020F3F0u; f_802100F0(c); // 8020F3EC
  c->r[3]=R32(c->r[31]+0x00000000u); // 8020F3F0
  c->lr=0x8020F3F8u; f_80265040(c); // 8020F3F4
  cmps(c,0,(int32_t)c->r[3],0); // 8020F3F8
  if (crb(c,2)) { goto L_8020F428; } // 8020F3FC
  c->r[0]=R8(c->r[31]+0x00000042u); // 8020F400
  cmps(c,0,(int32_t)c->r[0],0); // 8020F404
  if (!crb(c,2)) { goto L_8020F418; } // 8020F408
  c->lr=0x8020F410u; f_8024EAD0(c); // 8020F40C
  W32(c->r[31]+0x00000034u,c->r[4]); // 8020F410
  W32(c->r[31]+0x00000030u,c->r[3]); // 8020F414
L_8020F418:;
  c->r[3]=0u+0x00000001u; // 8020F418
  c->r[0]=0u+0x00000000u; // 8020F41C
  W8(c->r[31]+0x00000042u,c->r[3]); // 8020F420
  W8(c->r[31]+0x00000043u,c->r[0]); // 8020F424
L_8020F428:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020F428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020F42C
  c->lr=c->r[0]; // 8020F430
  c->r[1]=c->r[1]+0x00000020u; // 8020F434
  return; // 8020F438
}

// isPlayingSoundId__Q210homebutton10ControllerCFi
void f_8020F440(Ctx* __restrict c) {
  trace_call(0x8020F440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F440
  c->r[0]=c->lr; // 8020F444
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F44C
  c->r[31]=c->r[4]|c->r[4]; // 8020F450
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020F454
  c->r[30]=c->r[3]|c->r[3]; // 8020F458
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F45C
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020F460
  c->lr=0x8020F468u; f_80210190(c); // 8020F464
  cmps(c,0,(int32_t)c->r[3],0); // 8020F468
  if (!crb(c,2)) { goto L_8020F478; } // 8020F46C
  c->r[3]=0u+0x00000000u; // 8020F470
  goto L_8020F488; // 8020F474
L_8020F478:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8020F478
  c->r[5]=c->r[31]|c->r[31]; // 8020F47C
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020F480
  c->lr=0x8020F488u; f_802101B0(c); // 8020F484
L_8020F488:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F48C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020F490
  c->lr=c->r[0]; // 8020F494
  c->r[1]=c->r[1]+0x00000010u; // 8020F498
  return; // 8020F49C
}

// initSound__Q210homebutton10ControllerFv
void f_8020F4A0(Ctx* __restrict c) {
  trace_call(0x8020F4A0u);
  c->r[0]=0u+0x00000000u; // 8020F4A0
  W8(c->r[3]+0x00000042u,c->r[0]); // 8020F4A4
  W8(c->r[3]+0x00000043u,c->r[0]); // 8020F4A8
  return; // 8020F4AC
}

// updateSound__Q210homebutton10ControllerFv
void f_8020F4B0(Ctx* __restrict c) {
  trace_call(0x8020F4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F4B0
  c->r[0]=c->lr; // 8020F4B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020F4B8
  c->r[11]=c->r[1]+0x00000020u; // 8020F4BC
  c->lr=0x8020F4C4u; f_800C2E4C(c); // 8020F4C0
  c->r[27]=R32(c->r[3]+0x00000000u); // 8020F4C4
  c->r[31]=c->r[3]|c->r[3]; // 8020F4C8
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F4CC
  c->r[4]=c->r[27]|c->r[27]; // 8020F4D0
  c->lr=0x8020F4D8u; f_80210190(c); // 8020F4D4
  cmps(c,0,(int32_t)c->r[3],0); // 8020F4D8
  if (!crb(c,2)) { goto L_8020F554; } // 8020F4DC
  c->r[0]=R8(c->r[31]+0x00000042u); // 8020F4E0
  cmps(c,0,(int32_t)c->r[0],0); // 8020F4E4
  if (crb(c,2)) { goto L_8020F6D0; } // 8020F4E8
  c->r[0]=R8(c->r[31]+0x00000043u); // 8020F4EC
  cmps(c,0,(int32_t)c->r[0],0); // 8020F4F0
  if (!crb(c,2)) { goto L_8020F510; } // 8020F4F4
  c->lr=0x8020F4FCu; f_8024EAD0(c); // 8020F4F8
  c->r[0]=0u+0x00000001u; // 8020F4FC
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 8020F500
  W32(c->r[31]+0x00000038u,c->r[3]); // 8020F504
  W8(c->r[31]+0x00000043u,c->r[0]); // 8020F508
  goto L_8020F6D0; // 8020F50C
L_8020F510:;
  c->lr=0x8020F514u; f_8024EAD0(c); // 8020F510
  c->r[5]=0u+0x80000000u; // 8020F514
  c->r[3]=0u+0x10620000u; // 8020F518
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8020F51C
  c->r[3]=c->r[3]+0x00004DD3u; // 8020F520
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 8020F524
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020F528
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 8020F52C
  c->r[3]=c->r[4]-c->r[5]; // 8020F530
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020F534
  c->r[0]=divwu(c->r[3],c->r[0]); // 8020F538
  cmpu(c,0,c->r[0],0x000003E8u); // 8020F53C
  if (crb(c,0)) { goto L_8020F6D0; } // 8020F540
  c->r[0]=0u+0x00000000u; // 8020F544
  W8(c->r[31]+0x00000042u,c->r[0]); // 8020F548
  W8(c->r[31]+0x00000043u,c->r[0]); // 8020F54C
  goto L_8020F6D0; // 8020F550
L_8020F554:;
  c->r[0]=R8(c->r[31]+0x00000042u); // 8020F554
  cmps(c,0,(int32_t)c->r[0],0); // 8020F558
  if (crb(c,2)) { goto L_8020F62C; } // 8020F55C
  c->r[28]=0u+0x00000000u; // 8020F560
  W8(c->r[31]+0x00000043u,c->r[28]); // 8020F564
  c->lr=0x8020F56Cu; f_8024EAD0(c); // 8020F568
  c->r[29]=0u+0x80000000u; // 8020F56C
  c->r[30]=0u+0x10620000u; // 8020F570
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8020F574
  c->r[3]=0u+0x00070000u; // 8020F578
  c->r[7]=R32(c->r[31]+0x00000034u); // 8020F57C
  c->r[6]=c->r[30]+0x00004DD3u; // 8020F580
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020F584
  c->r[0]=c->r[3]+0x00005300u; // 8020F588
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[5])>>32); // 8020F58C
  c->r[4]=c->r[4]-c->r[7]; // 8020F590
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 8020F594
  c->r[3]=divwu(c->r[4],c->r[3]); // 8020F598
  cmpu(c,0,c->r[3],c->r[0]); // 8020F59C
  if (crb(c,0)) { goto L_8020F62C; } // 8020F5A0
  c->r[27]=R32(c->r[31]+0x00000000u); // 8020F5A4
  W8(c->r[31]+0x00000042u,c->r[28]); // 8020F5A8
  c->r[3]=c->r[27]|c->r[27]; // 8020F5AC
  W8(c->r[31]+0x00000043u,c->r[28]); // 8020F5B0
  c->lr=0x8020F5B8u; f_80265040(c); // 8020F5B4
  cmps(c,0,(int32_t)c->r[3],0); // 8020F5B8
  if (crb(c,2)) { goto L_8020F6D0; } // 8020F5BC
  c->r[3]=c->r[27]|c->r[27]; // 8020F5C0
  c->r[4]=0u+0x00000002u; // 8020F5C4
  c->r[5]=0u+0x00000000u; // 8020F5C8
  c->lr=0x8020F5D0u; f_80265090(c); // 8020F5CC
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 8020F5D0
  c->r[3]=0u+0x80490000u; // 8020F5D4
  c->r[4]=c->r[27]|c->r[27]; // 8020F5D8
  c->r[3]=c->r[3]+0x00001878u; // 8020F5DC
  c->r[27]=c->r[3]+c->r[0]; // 8020F5E0
  c->r[3]=c->r[27]|c->r[27]; // 8020F5E4
  c->lr=0x8020F5ECu; f_80244440(c); // 8020F5E8
  c->r[3]=c->r[27]|c->r[27]; // 8020F5EC
  c->lr=0x8020F5F4u; f_80244010(c); // 8020F5F0
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8020F5F4
  c->r[7]=0u+0x80210000u; // 8020F5F8
  c->r[4]=c->r[30]+0x00004DD3u; // 8020F5FC
  c->r[3]=c->r[27]|c->r[27]; // 8020F600
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020F604
  c->r[7]=c->r[7]+0xFFFFEF40u; // 8020F608
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8020F60C
  c->r[5]=0u+0x00000000u; // 8020F610
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020F614
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 8020F618
  c->lr=0x8020F620u; f_80243F10(c); // 8020F61C
  c->r[0]=0u+0x00000001u; // 8020F620
  W8(c->r[31]+0x00000041u,c->r[0]); // 8020F624
  goto L_8020F6D0; // 8020F628
L_8020F62C:;
  c->r[0]=R8(c->r[31]+0x00000041u); // 8020F62C
  cmps(c,0,(int32_t)c->r[0],0); // 8020F630
  if (!crb(c,2)) { goto L_8020F6D0; } // 8020F634
  c->r[3]=c->r[27]|c->r[27]; // 8020F638
  c->lr=0x8020F640u; f_80262FC0(c); // 8020F63C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8020F640
  cmpu(c,0,c->r[0],0x00000055u); // 8020F644
  if (crb(c,1)) { goto L_8020F6D0; } // 8020F648
  c->r[27]=R32(c->r[31]+0x00000000u); // 8020F64C
  c->r[3]=c->r[27]|c->r[27]; // 8020F650
  c->lr=0x8020F658u; f_80265040(c); // 8020F654
  cmps(c,0,(int32_t)c->r[3],0); // 8020F658
  if (crb(c,2)) { goto L_8020F6D0; } // 8020F65C
  c->r[3]=c->r[27]|c->r[27]; // 8020F660
  c->r[4]=0u+0x00000002u; // 8020F664
  c->r[5]=0u+0x00000000u; // 8020F668
  c->lr=0x8020F670u; f_80265090(c); // 8020F66C
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 8020F670
  c->r[3]=0u+0x80490000u; // 8020F674
  c->r[4]=c->r[27]|c->r[27]; // 8020F678
  c->r[3]=c->r[3]+0x00001878u; // 8020F67C
  c->r[27]=c->r[3]+c->r[0]; // 8020F680
  c->r[3]=c->r[27]|c->r[27]; // 8020F684
  c->lr=0x8020F68Cu; f_80244440(c); // 8020F688
  c->r[3]=c->r[27]|c->r[27]; // 8020F68C
  c->lr=0x8020F694u; f_80244010(c); // 8020F690
  c->r[4]=0u+0x80000000u; // 8020F694
  c->r[7]=0u+0x80210000u; // 8020F698
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8020F69C
  c->r[3]=0u+0x10620000u; // 8020F6A0
  c->r[4]=c->r[3]+0x00004DD3u; // 8020F6A4
  c->r[7]=c->r[7]+0xFFFFEF40u; // 8020F6A8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020F6AC
  c->r[3]=c->r[27]|c->r[27]; // 8020F6B0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8020F6B4
  c->r[5]=0u+0x00000000u; // 8020F6B8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020F6BC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 8020F6C0
  c->lr=0x8020F6C8u; f_80243F10(c); // 8020F6C4
  c->r[0]=0u+0x00000001u; // 8020F6C8
  W8(c->r[31]+0x00000041u,c->r[0]); // 8020F6CC
L_8020F6D0:;
  c->r[11]=c->r[1]+0x00000020u; // 8020F6D0
  c->lr=0x8020F6D8u; f_800C2E98(c); // 8020F6D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020F6D8
  c->lr=c->r[0]; // 8020F6DC
  c->r[1]=c->r[1]+0x00000020u; // 8020F6E0
  return; // 8020F6E4
}

// isPlayReady__Q210homebutton10ControllerCFv
void f_8020F6F0(Ctx* __restrict c) {
  trace_call(0x8020F6F0u);
  c->r[4]=c->r[3]|c->r[3]; // 8020F6F0
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F6F4
  c->r[4]=R32(c->r[4]+0x00000000u); // 8020F6F8
  f_802101E0(c); return; // 8020F6FC
}

// getController__Q210homebutton10ControllerFv
void f_8020F700(Ctx* __restrict c) {
  trace_call(0x8020F700u);
  return; // 8020F700
}

// startMotor__Q210homebutton10ControllerFv
void f_8020F710(Ctx* __restrict c) {
  trace_call(0x8020F710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F710
  c->r[0]=c->lr; // 8020F714
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F71C
  c->r[31]=c->r[3]|c->r[3]; // 8020F720
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020F724
  cmps(c,0,(int32_t)c->r[4],4); // 8020F728
  if (!crb(c,0)) { goto L_8020F760; } // 8020F72C
  c->r[0]=R8(c->r[3]+0x00000044u); // 8020F730
  cmps(c,0,(int32_t)c->r[0],0); // 8020F734
  if (crb(c,2)) { goto L_8020F760; } // 8020F738
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F73C
  c->lr=0x8020F744u; f_80210190(c); // 8020F740
  cmps(c,0,(int32_t)c->r[3],0); // 8020F744
  if (!crb(c,2)) { goto L_8020F760; } // 8020F748
  c->r[0]=0u+0x00000001u; // 8020F74C
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 8020F750
  c->r[3]=R32(c->r[31]+0x00000000u); // 8020F754
  c->r[4]=0u+0x00000001u; // 8020F758
  c->lr=0x8020F760u; f_80264830(c); // 8020F75C
L_8020F760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F764
  c->lr=c->r[0]; // 8020F768
  c->r[1]=c->r[1]+0x00000010u; // 8020F76C
  return; // 8020F770
}

// fn_8020F780
void f_8020F780(Ctx* __restrict c) {
  trace_call(0x8020F780u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020F780
  cmps(c,0,(int32_t)c->r[4],4); // 8020F784
  if (!crb(c,0)) return; // 8020F788
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 8020F78C
  cmps(c,0,(int32_t)c->r[0],0); // 8020F790
  if (crb(c,2)) return; // 8020F794
  c->r[0]=0u+0x00000000u; // 8020F798
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 8020F79C
  c->r[3]=c->r[4]|c->r[4]; // 8020F7A0
  c->r[4]=0u+0x00000000u; // 8020F7A4
  f_80264830(c); return; // 8020F7A8
}

// fn_8020F7AC
void f_8020F7AC(Ctx* __restrict c) {
  trace_call(0x8020F7ACu);
  return; // 8020F7AC
}

// fn_8020F7B0
void f_8020F7B0(Ctx* __restrict c) {
  trace_call(0x8020F7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F7B0
  c->r[0]=c->lr; // 8020F7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F7BC
  c->r[31]=c->r[4]|c->r[4]; // 8020F7C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020F7C4
  c->r[30]=c->r[3]|c->r[3]; // 8020F7C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020F7CC
  cmps(c,0,(int32_t)c->r[0],4); // 8020F7D0
  if (crb(c,0)) { goto L_8020F7E0; } // 8020F7D4
  c->r[3]=0u+0xFFFFFFFEu; // 8020F7D8
  goto L_8020F838; // 8020F7DC
L_8020F7E0:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 8020F7E0
  c->r[4]=c->r[0]|c->r[0]; // 8020F7E4
  c->lr=0x8020F7ECu; f_80210190(c); // 8020F7E8
  cmps(c,0,(int32_t)c->r[3],0); // 8020F7EC
  if (!crb(c,2)) { goto L_8020F800; } // 8020F7F0
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 8020F7F4
  cmps(c,0,(int32_t)c->r[0],0); // 8020F7F8
  if (crb(c,2)) { goto L_8020F808; } // 8020F7FC
L_8020F800:;
  c->r[3]=0u+0xFFFFFFFEu; // 8020F800
  goto L_8020F838; // 8020F804
L_8020F808:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020F808
  cmps(c,0,(int32_t)c->r[4],4); // 8020F80C
  if (!crb(c,0)) { goto L_8020F824; } // 8020F810
  c->r[3]=0u+0x80490000u; // 8020F814
  c->r[0]=0u+0x00000001u; // 8020F818
  c->r[3]=c->r[3]+0x00001948u; // 8020F81C
  W8(c->r[3]+c->r[4],c->r[0]); // 8020F820
L_8020F824:;
  c->r[5]=0u+0x80210000u; // 8020F824
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020F828
  c->r[4]=c->r[31]|c->r[31]; // 8020F82C
  c->r[5]=c->r[5]+0xFFFFF850u; // 8020F830
  c->lr=0x8020F838u; f_80264610(c); // 8020F834
L_8020F838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F83C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020F840
  c->lr=c->r[0]; // 8020F844
  c->r[1]=c->r[1]+0x00000010u; // 8020F848
  return; // 8020F84C
}

// fn_8020F850
void f_8020F850(Ctx* __restrict c) {
  trace_call(0x8020F850u);
  cmps(c,0,(int32_t)c->r[4],0); // 8020F850
  if (!crb(c,2)) { goto L_8020F870; } // 8020F854
  cmps(c,0,(int32_t)c->r[3],4); // 8020F858
  if (!crb(c,0)) { goto L_8020F870; } // 8020F85C
  c->r[4]=0u+0x80490000u; // 8020F860
  c->r[0]=0u+0x00000001u; // 8020F864
  c->r[4]=c->r[4]+0x000017B0u; // 8020F868
  W8(c->r[4]+c->r[3],c->r[0]); // 8020F86C
L_8020F870:;
  cmps(c,0,(int32_t)c->r[3],4); // 8020F870
  if (!crb(c,0)) return; // 8020F874
  c->r[4]=0u+0x80490000u; // 8020F878
  c->r[0]=0u+0x00000000u; // 8020F87C
  c->r[4]=c->r[4]+0x00001948u; // 8020F880
  W8(c->r[4]+c->r[3],c->r[0]); // 8020F884
  return; // 8020F888
}

// getBatteryFlag__Q210homebutton10ControllerCFv
void f_8020F890(Ctx* __restrict c) {
  trace_call(0x8020F890u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020F890
  cmps(c,0,(int32_t)c->r[0],4); // 8020F894
  if (crb(c,0)) { goto L_8020F8A4; } // 8020F898
  c->r[3]=0u+0x00000000u; // 8020F89C
  return; // 8020F8A0
L_8020F8A4:;
  c->r[3]=0u+0x80490000u; // 8020F8A4
  c->r[3]=c->r[3]+0x000017B0u; // 8020F8A8
  c->r[3]=R8(c->r[3]+c->r[0]); // 8020F8AC
  return; // 8020F8B0
}

// clrBatteryFlag__Q210homebutton10ControllerFv
void f_8020F8C0(Ctx* __restrict c) {
  trace_call(0x8020F8C0u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020F8C0
  cmps(c,0,(int32_t)c->r[4],4); // 8020F8C4
  if (!crb(c,0)) return; // 8020F8C8
  c->r[3]=0u+0x80490000u; // 8020F8CC
  c->r[0]=0u+0x00000000u; // 8020F8D0
  c->r[3]=c->r[3]+0x000017B0u; // 8020F8D4
  W8(c->r[3]+c->r[4],c->r[0]); // 8020F8D8
  return; // 8020F8DC
}

// UpdateSpeaker__Q210homebutton9RemoteSpkFP7OSAlarmP9OSContext
void f_8020F8E0(Ctx* __restrict c) {
  trace_call(0x8020F8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F8E0
  c->r[0]=c->lr; // 8020F8E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8020F8E8
  c->r[11]=c->r[1]+0x00000090u; // 8020F8EC
  c->lr=0x8020F8F4u; f_800C2E48(c); // 8020F8F0
  c->r[3]=0u+0x80490000u; // 8020F8F4
  c->r[29]=R32(c->r[3]+0x00001950u); // 8020F8F8
  cmps(c,0,(int32_t)c->r[29],0); // 8020F8FC
  if (crb(c,2)) { goto L_8020FB34; } // 8020F900
  c->r[28]=0u+0x00000000u; // 8020F904
  c->r[31]=0u+0x00000000u; // 8020F908
  c->r[30]=0u+0x66660000u; // 8020F90C
  c->r[26]=0u+0xFFFFFFFFu; // 8020F910
L_8020F914:;
  c->r[0]=R32(c->r[29]+0x00000050u); // 8020F914
  cmps(c,0,(int32_t)c->r[0],0); // 8020F918
  if (crb(c,2)) { goto L_8020FB24; } // 8020F91C
  c->r[3]=c->r[28]|c->r[28]; // 8020F920
  c->lr=0x8020F928u; f_80265040(c); // 8020F924
  cmps(c,0,(int32_t)c->r[3],0); // 8020F928
  if (crb(c,2)) { goto L_8020FB24; } // 8020F92C
  c->lr=0x8020F934u; f_802494C0(c); // 8020F930
  c->r[27]=c->r[3]|c->r[3]; // 8020F934
  c->r[3]=c->r[28]|c->r[28]; // 8020F938
  c->lr=0x8020F940u; f_80266860(c); // 8020F93C
  cmps(c,0,(int32_t)c->r[3],0); // 8020F940
  if (crb(c,2)) { goto L_8020FAFC; } // 8020F944
  c->r[0]=R32(c->r[29]+0x00000054u); // 8020F948
  c->r[7]=c->r[1]+0x00000020u; // 8020F94C
  c->r[8]=R8(c->r[29]+0x0000005Du); // 8020F950
  c->r[5]=0u+0x00000028u; // 8020F954
  c->r[9]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8020F958
  c->r[6]=R32(c->r[29]+0x00000050u); // 8020F95C
  cmpu(c,0,c->r[9],0x00000028u); // 8020F960
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 8020F964
  if (crb(c,1)) { goto L_8020F970; } // 8020F968
  c->r[5]=c->r[9]|c->r[9]; // 8020F96C
L_8020F970:;
  cmpu(c,0,c->r[5],0x00000000u); // 8020F970
  c->r[4]=c->r[30]+0x00006667u; // 8020F974
  if (!crb(c,1)) { goto L_8020FA38; } // 8020F978
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 8020F97C
  c->ctr=c->r[0]; // 8020F980
  if (crb(c,2)) { goto L_8020FA0C; } // 8020F984
L_8020F988:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 8020F988
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8020F98C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8020F990
  c->r[0]=sraw(c,c->r[0],2); // 8020F994
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020F998
  c->r[0]=c->r[0]+c->r[3]; // 8020F99C
  W16(c->r[7]+0x00000000u,c->r[0]); // 8020F9A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 8020F9A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8020F9A8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8020F9AC
  c->r[0]=sraw(c,c->r[0],2); // 8020F9B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020F9B4
  c->r[0]=c->r[0]+c->r[3]; // 8020F9B8
  W16(c->r[7]+0x00000002u,c->r[0]); // 8020F9BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000004u); // 8020F9C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8020F9C4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8020F9C8
  c->r[0]=sraw(c,c->r[0],2); // 8020F9CC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020F9D0
  c->r[0]=c->r[0]+c->r[3]; // 8020F9D4
  W16(c->r[7]+0x00000004u,c->r[0]); // 8020F9D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000006u); // 8020F9DC
  c->r[6]=c->r[6]+0x00000008u; // 8020F9E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8020F9E4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8020F9E8
  c->r[0]=sraw(c,c->r[0],2); // 8020F9EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020F9F0
  c->r[0]=c->r[0]+c->r[3]; // 8020F9F4
  W16(c->r[7]+0x00000006u,c->r[0]); // 8020F9F8
  c->r[7]=c->r[7]+0x00000008u; // 8020F9FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020F988; } // 8020FA00
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 8020FA04
  if (crb(c,2)) { goto L_8020FA38; } // 8020FA08
L_8020FA0C:;
  c->ctr=c->r[5]; // 8020FA0C
L_8020FA10:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 8020FA10
  c->r[6]=c->r[6]+0x00000002u; // 8020FA14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8020FA18
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8020FA1C
  c->r[0]=sraw(c,c->r[0],2); // 8020FA20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8020FA24
  c->r[0]=c->r[0]+c->r[3]; // 8020FA28
  W16(c->r[7]+0x00000000u,c->r[0]); // 8020FA2C
  c->r[7]=c->r[7]+0x00000002u; // 8020FA30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020FA10; } // 8020FA34
L_8020FA38:;
  cmpu(c,0,c->r[9],0x00000028u); // 8020FA38
  if (crb(c,1)) { goto L_8020FA9C; } // 8020FA3C
  c->r[3]=addc(c,~c->r[9],0x00000028u,1); // 8020FA40
  cmpu(c,0,c->r[3],0x00000000u); // 8020FA44
  if (!crb(c,1)) { goto L_8020FA9C; } // 8020FA48
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8020FA4C
  c->ctr=c->r[0]; // 8020FA50
  if (crb(c,2)) { goto L_8020FA88; } // 8020FA54
L_8020FA58:;
  W16(c->r[7]+0x00000000u,c->r[31]); // 8020FA58
  W16(c->r[7]+0x00000002u,c->r[31]); // 8020FA5C
  W16(c->r[7]+0x00000004u,c->r[31]); // 8020FA60
  W16(c->r[7]+0x00000006u,c->r[31]); // 8020FA64
  W16(c->r[7]+0x00000008u,c->r[31]); // 8020FA68
  W16(c->r[7]+0x0000000Au,c->r[31]); // 8020FA6C
  W16(c->r[7]+0x0000000Cu,c->r[31]); // 8020FA70
  W16(c->r[7]+0x0000000Eu,c->r[31]); // 8020FA74
  c->r[7]=c->r[7]+0x00000010u; // 8020FA78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020FA58; } // 8020FA7C
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 8020FA80
  if (crb(c,2)) { goto L_8020FA9C; } // 8020FA84
L_8020FA88:;
  c->ctr=c->r[3]; // 8020FA88
  c->r[0]=c->r[0]|0x00000000u; // 8020FA8C
L_8020FA90:;
  W16(c->r[7]+0x00000000u,c->r[31]); // 8020FA90
  c->r[7]=c->r[7]+0x00000002u; // 8020FA94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020FA90; } // 8020FA98
L_8020FA9C:;
  c->r[0]=R8(c->r[29]+0x0000005Cu); // 8020FA9C
  c->r[3]=c->r[29]+0x00000030u; // 8020FAA0
  c->r[5]=c->r[1]+0x00000020u; // 8020FAA4
  c->r[7]=c->r[1]+0x00000008u; // 8020FAA8
  c->r[0]=cntlz(c->r[0]); // 8020FAAC
  c->r[6]=0u+0x00000028u; // 8020FAB0
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8020FAB4
  c->lr=0x8020FABCu; f_802606AC(c); // 8020FAB8
  c->r[3]=c->r[28]|c->r[28]; // 8020FABC
  c->r[4]=c->r[1]+0x00000008u; // 8020FAC0
  c->r[5]=0u+0x00000014u; // 8020FAC4
  c->lr=0x8020FACCu; f_802668F0(c); // 8020FAC8
  W8(c->r[29]+0x0000005Cu,c->r[31]); // 8020FACC
  W8(c->r[29]+0x0000005Eu,c->r[31]); // 8020FAD0
  c->r[3]=R32(c->r[29]+0x00000050u); // 8020FAD4
  c->r[0]=c->r[3]+0x00000050u; // 8020FAD8
  W32(c->r[29]+0x00000050u,c->r[0]); // 8020FADC
  c->r[3]=R32(c->r[29]+0x00000054u); // 8020FAE0
  c->r[0]=addc(c,c->r[3],0xFFFFFFB0u,0); cr0(c,c->r[0]); // 8020FAE4
  W32(c->r[29]+0x00000054u,c->r[0]); // 8020FAE8
  if (crb(c,1)) { goto L_8020FB1C; } // 8020FAEC
  W32(c->r[29]+0x00000058u,c->r[26]); // 8020FAF0
  W32(c->r[29]+0x00000050u,c->r[31]); // 8020FAF4
  goto L_8020FB1C; // 8020FAF8
L_8020FAFC:;
  c->r[3]=R8(c->r[29]+0x0000005Eu); // 8020FAFC
  c->r[0]=c->r[3]+0x00000001u; // 8020FB00
  W8(c->r[29]+0x0000005Eu,c->r[0]); // 8020FB04
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8020FB08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020FB0C
  cmps(c,0,(int32_t)c->r[0],60); // 8020FB10
  if (!crb(c,1)) { goto L_8020FB1C; } // 8020FB14
  W32(c->r[29]+0x00000050u,c->r[31]); // 8020FB18
L_8020FB1C:;
  c->r[3]=c->r[27]|c->r[27]; // 8020FB1C
  c->lr=0x8020FB24u; f_80249500(c); // 8020FB20
L_8020FB24:;
  c->r[28]=c->r[28]+0x00000001u; // 8020FB24
  c->r[29]=c->r[29]+0x00000068u; // 8020FB28
  cmps(c,0,(int32_t)c->r[28],4); // 8020FB2C
  if (crb(c,0)) { IRQCHK(c); goto L_8020F914; } // 8020FB30
L_8020FB34:;
  c->r[11]=c->r[1]+0x00000090u; // 8020FB34
  c->lr=0x8020FB3Cu; f_800C2E94(c); // 8020FB38
  c->r[0]=R32(c->r[1]+0x00000094u); // 8020FB3C
  c->lr=c->r[0]; // 8020FB40
  c->r[1]=c->r[1]+0x00000090u; // 8020FB44
  return; // 8020FB48
}

// ClearPcm__Q210homebutton9RemoteSpkFv
void f_8020FB50(Ctx* __restrict c) {
  trace_call(0x8020FB50u);
  c->r[4]=0u+0x00000000u; // 8020FB50
  c->r[0]=0u+0xFFFFFFFFu; // 8020FB54
  W32(c->r[3]+0x00000050u,c->r[4]); // 8020FB58
  W32(c->r[3]+0x00000058u,c->r[0]); // 8020FB5C
  W32(c->r[3]+0x000000B8u,c->r[4]); // 8020FB60
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8020FB64
  W32(c->r[3]+0x00000120u,c->r[4]); // 8020FB68
  W32(c->r[3]+0x00000128u,c->r[0]); // 8020FB6C
  W32(c->r[3]+0x00000188u,c->r[4]); // 8020FB70
  W32(c->r[3]+0x00000190u,c->r[0]); // 8020FB74
  return; // 8020FB78
}

// __ct__Q210homebutton9RemoteSpkFPv
void f_8020FB80(Ctx* __restrict c) {
  trace_call(0x8020FB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FB80
  c->r[0]=c->lr; // 8020FB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020FB88
  c->r[11]=c->r[1]+0x00000020u; // 8020FB8C
  c->lr=0x8020FB94u; f_800C2E48(c); // 8020FB90
  c->r[5]=0u+0x803A0000u; // 8020FB94
  cmps(c,0,(int32_t)c->r[4],0); // 8020FB98
  c->r[5]=c->r[5]+0x00006518u; // 8020FB9C
  W32(c->r[3]+0x000001F0u,c->r[5]); // 8020FBA0
  c->r[5]=0u+0x80490000u; // 8020FBA4
  c->r[26]=c->r[3]|c->r[3]; // 8020FBA8
  W32(c->r[5]+0x00001950u,c->r[3]); // 8020FBAC
  if (crb(c,2)) { goto L_8020FBD4; } // 8020FBB0
  c->r[3]=c->r[4]|c->r[4]; // 8020FBB4
  c->r[4]=c->r[26]+0x000001D0u; // 8020FBB8
  c->lr=0x8020FBC0u; f_801C3700(c); // 8020FBBC
  c->r[0]=0u-c->r[3]; // 8020FBC0
  c->r[0]=c->r[0]|c->r[3]; // 8020FBC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8020FBC8
  W8(c->r[26]+0x000001ECu,c->r[0]); // 8020FBCC
  goto L_8020FBDC; // 8020FBD0
L_8020FBD4:;
  c->r[0]=0u+0x00000000u; // 8020FBD4
  W8(c->r[3]+0x000001ECu,c->r[0]); // 8020FBD8
L_8020FBDC:;
  c->r[3]=c->r[26]+0x000001A0u; // 8020FBDC
  c->lr=0x8020FBE4u; f_80243CB0(c); // 8020FBE0
  c->r[28]=c->r[26]|c->r[26]; // 8020FBE4
  c->r[27]=0u+0x00000000u; // 8020FBE8
  c->r[29]=0u+0x00000000u; // 8020FBEC
  c->r[30]=0u+0xFFFFFFFFu; // 8020FBF0
  c->r[31]=0u+0x00000001u; // 8020FBF4
L_8020FBF8:;
  c->r[3]=c->r[28]|c->r[28]; // 8020FBF8
  c->lr=0x8020FC00u; f_80243CB0(c); // 8020FBFC
  W32(c->r[28]+0x00000050u,c->r[29]); // 8020FC00
  c->r[27]=c->r[27]+0x00000001u; // 8020FC04
  cmps(c,0,(int32_t)c->r[27],4); // 8020FC08
  W32(c->r[28]+0x00000058u,c->r[30]); // 8020FC0C
  W8(c->r[28]+0x0000005Cu,c->r[31]); // 8020FC10
  W8(c->r[28]+0x00000062u,c->r[31]); // 8020FC14
  c->r[28]=c->r[28]+0x00000068u; // 8020FC18
  if (crb(c,0)) { IRQCHK(c); goto L_8020FBF8; } // 8020FC1C
  c->r[11]=c->r[1]+0x00000020u; // 8020FC20
  c->r[3]=c->r[26]|c->r[26]; // 8020FC24
  c->lr=0x8020FC2Cu; f_800C2E94(c); // 8020FC28
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020FC2C
  c->lr=c->r[0]; // 8020FC30
  c->r[1]=c->r[1]+0x00000020u; // 8020FC34
  return; // 8020FC38
}

// __dt__Q210homebutton9RemoteSpkFv
void f_8020FC40(Ctx* __restrict c) {
  trace_call(0x8020FC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FC40
  c->r[0]=c->lr; // 8020FC44
  cmps(c,0,(int32_t)c->r[3],0); // 8020FC48
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020FC4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020FC50
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020FC54
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020FC58
  c->r[29]=c->r[4]|c->r[4]; // 8020FC5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8020FC60
  c->r[28]=c->r[3]|c->r[3]; // 8020FC64
  if (crb(c,2)) { goto L_8020FCC0; } // 8020FC68
  c->r[5]=0u+0x803A0000u; // 8020FC6C
  c->r[4]=0u+0x80490000u; // 8020FC70
  c->r[5]=c->r[5]+0x00006518u; // 8020FC74
  W32(c->r[3]+0x000001F0u,c->r[5]); // 8020FC78
  c->r[0]=0u+0x00000000u; // 8020FC7C
  W32(c->r[4]+0x00001950u,c->r[0]); // 8020FC80
  W8(c->r[3]+0x000001ECu,c->r[0]); // 8020FC84
  c->r[3]=c->r[3]+0x000001A0u; // 8020FC88
  c->lr=0x8020FC90u; f_80244010(c); // 8020FC8C
  c->r[31]=c->r[28]|c->r[28]; // 8020FC90
  c->r[30]=0u+0x00000000u; // 8020FC94
L_8020FC98:;
  c->r[3]=c->r[31]|c->r[31]; // 8020FC98
  c->lr=0x8020FCA0u; f_80244010(c); // 8020FC9C
  c->r[30]=c->r[30]+0x00000001u; // 8020FCA0
  c->r[31]=c->r[31]+0x00000068u; // 8020FCA4
  cmps(c,0,(int32_t)c->r[30],4); // 8020FCA8
  if (crb(c,0)) { IRQCHK(c); goto L_8020FC98; } // 8020FCAC
  cmps(c,0,(int32_t)c->r[29],0); // 8020FCB0
  if (!crb(c,1)) { goto L_8020FCC0; } // 8020FCB4
  c->r[3]=c->r[28]|c->r[28]; // 8020FCB8
  c->lr=0x8020FCC0u; f_800C2AC0(c); // 8020FCBC
L_8020FCC0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020FCC0
  c->r[3]=c->r[28]|c->r[28]; // 8020FCC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020FCC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8020FCCC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8020FCD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020FCD4
  c->lr=c->r[0]; // 8020FCD8
  c->r[1]=c->r[1]+0x00000020u; // 8020FCDC
  return; // 8020FCE0
}

// Start__Q210homebutton9RemoteSpkFv
void f_8020FCF0(Ctx* __restrict c) {
  trace_call(0x8020FCF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FCF0
  c->r[0]=c->lr; // 8020FCF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020FCF8
  c->r[11]=c->r[1]+0x00000020u; // 8020FCFC
  c->lr=0x8020FD04u; f_800C2E4C(c); // 8020FD00
  c->r[0]=R8(c->r[3]+0x000001ECu); // 8020FD04
  c->r[31]=c->r[3]|c->r[3]; // 8020FD08
  cmps(c,0,(int32_t)c->r[0],0); // 8020FD0C
  if (crb(c,2)) { goto L_8020FDAC; } // 8020FD10
  c->r[3]=c->r[3]+0x000001A0u; // 8020FD14
  c->lr=0x8020FD1Cu; f_80243CB0(c); // 8020FD18
  c->lr=0x8020FD20u; f_8024EAD0(c); // 8020FD1C
  c->r[6]=0u+0x80000000u; // 8020FD20
  c->r[5]=0u+0x431C0000u; // 8020FD24
  c->r[0]=R32(c->r[6]+0x000000F8u); // 8020FD28
  c->r[6]=0u+0x10620000u; // 8020FD2C
  c->r[10]=c->r[6]+0x00004DD3u; // 8020FD30
  c->r[9]=0u+0x80210000u; // 8020FD34
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020FD38
  c->r[5]=c->r[5]+0xFFFFDE83u; // 8020FD3C
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8020FD40
  c->r[7]=0u+0x00660000u; // 8020FD44
  c->r[6]=c->r[4]|c->r[4]; // 8020FD48
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 8020FD4C
  c->r[5]=c->r[3]|c->r[3]; // 8020FD50
  c->r[3]=c->r[31]+0x000001A0u; // 8020FD54
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 8020FD58
  c->r[9]=c->r[9]+0xFFFFF8E0u; // 8020FD5C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8020FD60
  c->r[7]=0u+0x00000000u; // 8020FD64
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 8020FD68
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 8020FD6C
  c->lr=0x8020FD74u; f_80243F80(c); // 8020FD70
  c->r[27]=0u+0x00000000u; // 8020FD74
  c->r[28]=0u+0x00000000u; // 8020FD78
  c->r[29]=0u+0xFFFFFFFFu; // 8020FD7C
  c->r[30]=0u+0x00000001u; // 8020FD80
L_8020FD84:;
  c->r[3]=c->r[31]|c->r[31]; // 8020FD84
  c->lr=0x8020FD8Cu; f_80243CB0(c); // 8020FD88
  W32(c->r[31]+0x00000050u,c->r[28]); // 8020FD8C
  c->r[27]=c->r[27]+0x00000001u; // 8020FD90
  cmps(c,0,(int32_t)c->r[27],4); // 8020FD94
  W32(c->r[31]+0x00000058u,c->r[29]); // 8020FD98
  W8(c->r[31]+0x0000005Cu,c->r[30]); // 8020FD9C
  W8(c->r[31]+0x00000062u,c->r[30]); // 8020FDA0
  c->r[31]=c->r[31]+0x00000068u; // 8020FDA4
  if (crb(c,0)) { IRQCHK(c); goto L_8020FD84; } // 8020FDA8
L_8020FDAC:;
  c->r[11]=c->r[1]+0x00000020u; // 8020FDAC
  c->lr=0x8020FDB4u; f_800C2E98(c); // 8020FDB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020FDB4
  c->lr=c->r[0]; // 8020FDB8
  c->r[1]=c->r[1]+0x00000020u; // 8020FDBC
  return; // 8020FDC0
}

// Stop__Q210homebutton9RemoteSpkFv
void f_8020FDD0(Ctx* __restrict c) {
  trace_call(0x8020FDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FDD0
  c->r[0]=c->lr; // 8020FDD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020FDD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020FDDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020FDE0
  c->r[30]=c->r[3]|c->r[3]; // 8020FDE4
  c->r[3]=c->r[3]+0x000001A0u; // 8020FDE8
  c->lr=0x8020FDF0u; f_80244010(c); // 8020FDEC
  c->r[31]=0u+0x00000000u; // 8020FDF0
L_8020FDF4:;
  c->r[3]=c->r[30]|c->r[30]; // 8020FDF4
  c->lr=0x8020FDFCu; f_80244010(c); // 8020FDF8
  c->r[31]=c->r[31]+0x00000001u; // 8020FDFC
  c->r[30]=c->r[30]+0x00000068u; // 8020FE00
  cmps(c,0,(int32_t)c->r[31],4); // 8020FE04
  if (crb(c,0)) { IRQCHK(c); goto L_8020FDF4; } // 8020FE08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020FE0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020FE10
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020FE14
  c->lr=c->r[0]; // 8020FE18
  c->r[1]=c->r[1]+0x00000010u; // 8020FE1C
  return; // 8020FE20
}

// DelaySpeakerOnCallback__Q210homebutton9RemoteSpkFP7OSAlarmP9OSContext
void f_8020FE30(Ctx* __restrict c) {
  trace_call(0x8020FE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FE30
  c->r[0]=c->lr; // 8020FE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020FE38
  c->lr=0x8020FE40u; f_80244450(c); // 8020FE3C
  c->r[5]=0u+0x80210000u; // 8020FE40
  c->r[4]=0u+0x00000001u; // 8020FE44
  c->r[5]=c->r[5]+0xFFFFFE60u; // 8020FE48
  c->lr=0x8020FE50u; f_80265090(c); // 8020FE4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020FE50
  c->lr=c->r[0]; // 8020FE54
  c->r[1]=c->r[1]+0x00000010u; // 8020FE58
  return; // 8020FE5C
}

// SpeakerOnCallback__Q210homebutton9RemoteSpkFll
void f_8020FE60(Ctx* __restrict c) {
  trace_call(0x8020FE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FE60
  c->r[0]=c->lr; // 8020FE64
  c->r[5]=0u+0x80490000u; // 8020FE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020FE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020FE70
  c->r[6]=R32(c->r[5]+0x00001950u); // 8020FE74
  cmps(c,0,(int32_t)c->r[6],0); // 8020FE78
  if (crb(c,2)) { goto L_8020FF24; } // 8020FE7C
  cmps(c,0,(int32_t)c->r[4],0); // 8020FE80
  if (crb(c,2)) { goto L_8020FE9C; } // 8020FE84
  cmps(c,0,(int32_t)c->r[4],-3); // 8020FE88
  if (crb(c,2)) { goto L_8020FEC0; } // 8020FE8C
  cmps(c,0,(int32_t)c->r[4],-2); // 8020FE90
  if (crb(c,2)) { goto L_8020FED4; } // 8020FE94
  goto L_8020FF24; // 8020FE98
L_8020FE9C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FE9C
  c->r[5]=0u+0x80210000u; // 8020FEA0
  c->r[7]=0u+0x00000001u; // 8020FEA4
  c->r[5]=c->r[5]+0xFFFFFF70u; // 8020FEA8
  c->r[6]=c->r[6]+c->r[0]; // 8020FEAC
  c->r[4]=0u+0x00000004u; // 8020FEB0
  W8(c->r[6]+0x0000005Cu,c->r[7]); // 8020FEB4
  c->lr=0x8020FEBCu; f_80265090(c); // 8020FEB8
  goto L_8020FF24; // 8020FEBC
L_8020FEC0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FEC0
  c->r[4]=0u+0x00000000u; // 8020FEC4
  c->r[3]=c->r[6]+c->r[0]; // 8020FEC8
  W8(c->r[3]+0x00000062u,c->r[4]); // 8020FECC
  goto L_8020FF24; // 8020FED0
L_8020FED4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FED4
  c->r[4]=c->r[3]|c->r[3]; // 8020FED8
  c->r[31]=c->r[6]+c->r[0]; // 8020FEDC
  c->r[3]=c->r[31]|c->r[31]; // 8020FEE0
  c->lr=0x8020FEE8u; f_80244440(c); // 8020FEE4
  c->r[3]=c->r[31]|c->r[31]; // 8020FEE8
  c->lr=0x8020FEF0u; f_80244010(c); // 8020FEEC
  c->r[4]=0u+0x80000000u; // 8020FEF0
  c->r[7]=0u+0x80210000u; // 8020FEF4
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8020FEF8
  c->r[3]=0u+0x10620000u; // 8020FEFC
  c->r[4]=c->r[3]+0x00004DD3u; // 8020FF00
  c->r[7]=c->r[7]+0xFFFFFE30u; // 8020FF04
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020FF08
  c->r[3]=c->r[31]|c->r[31]; // 8020FF0C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8020FF10
  c->r[5]=0u+0x00000000u; // 8020FF14
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020FF18
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 8020FF1C
  c->lr=0x8020FF24u; f_80243F10(c); // 8020FF20
L_8020FF24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020FF24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020FF28
  c->lr=c->r[0]; // 8020FF2C
  c->r[1]=c->r[1]+0x00000010u; // 8020FF30
  return; // 8020FF34
}

// fn_8020FF40
void f_8020FF40(Ctx* __restrict c) {
  trace_call(0x8020FF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FF40
  c->r[0]=c->lr; // 8020FF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020FF48
  c->lr=0x8020FF50u; f_80244450(c); // 8020FF4C
  c->r[5]=0u+0x80210000u; // 8020FF50
  c->r[4]=0u+0x00000004u; // 8020FF54
  c->r[5]=c->r[5]+0xFFFFFF70u; // 8020FF58
  c->lr=0x8020FF60u; f_80265090(c); // 8020FF5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020FF60
  c->lr=c->r[0]; // 8020FF64
  c->r[1]=c->r[1]+0x00000010u; // 8020FF68
  return; // 8020FF6C
}

// SpeakerOffCallback__Q210homebutton9RemoteSpkFll
void f_8020FF70(Ctx* __restrict c) {
  trace_call(0x8020FF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FF70
  c->r[0]=c->lr; // 8020FF74
  c->r[5]=0u+0x80490000u; // 8020FF78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020FF7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020FF80
  c->r[5]=R32(c->r[5]+0x00001950u); // 8020FF84
  cmps(c,0,(int32_t)c->r[5],0); // 8020FF88
  if (crb(c,2)) { goto L_80210040; } // 8020FF8C
  cmps(c,0,(int32_t)c->r[4],0); // 8020FF90
  if (crb(c,2)) { goto L_8020FFB4; } // 8020FF94
  cmps(c,0,(int32_t)c->r[4],-3); // 8020FF98
  if (crb(c,2)) { goto L_8020FFC8; } // 8020FF9C
  cmps(c,0,(int32_t)c->r[4],-1); // 8020FFA0
  if (crb(c,2)) { goto L_8020FFDC; } // 8020FFA4
  cmps(c,0,(int32_t)c->r[4],-2); // 8020FFA8
  if (crb(c,2)) { goto L_8020FFF0; } // 8020FFAC
  goto L_80210040; // 8020FFB0
L_8020FFB4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FFB4
  c->r[4]=0u+0x00000001u; // 8020FFB8
  c->r[3]=c->r[5]+c->r[0]; // 8020FFBC
  W8(c->r[3]+0x00000062u,c->r[4]); // 8020FFC0
  goto L_80210040; // 8020FFC4
L_8020FFC8:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FFC8
  c->r[4]=0u+0x00000000u; // 8020FFCC
  c->r[3]=c->r[5]+c->r[0]; // 8020FFD0
  W8(c->r[3]+0x00000062u,c->r[4]); // 8020FFD4
  goto L_80210040; // 8020FFD8
L_8020FFDC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FFDC
  c->r[4]=0u+0x00000000u; // 8020FFE0
  c->r[3]=c->r[5]+c->r[0]; // 8020FFE4
  W8(c->r[3]+0x00000062u,c->r[4]); // 8020FFE8
  goto L_80210040; // 8020FFEC
L_8020FFF0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 8020FFF0
  c->r[4]=c->r[3]|c->r[3]; // 8020FFF4
  c->r[31]=c->r[5]+c->r[0]; // 8020FFF8
  c->r[3]=c->r[31]|c->r[31]; // 8020FFFC
  c->lr=0x80210004u; f_80244440(c); // 80210000
  c->r[3]=c->r[31]|c->r[31]; // 80210004
  c->lr=0x8021000Cu; f_80244010(c); // 80210008
  c->r[4]=0u+0x80000000u; // 8021000C
  c->r[7]=0u+0x80210000u; // 80210010
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80210014
  c->r[3]=0u+0x10620000u; // 80210018
  c->r[4]=c->r[3]+0x00004DD3u; // 8021001C
  c->r[7]=c->r[7]+0xFFFFFF40u; // 80210020
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80210024
  c->r[3]=c->r[31]|c->r[31]; // 80210028
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8021002C
  c->r[5]=0u+0x00000000u; // 80210030
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80210034
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 80210038
  c->lr=0x80210040u; f_80243F10(c); // 8021003C
L_80210040:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210044
  c->lr=c->r[0]; // 80210048
  c->r[1]=c->r[1]+0x00000010u; // 8021004C
  return; // 80210050
}

// Connect__Q210homebutton9RemoteSpkFl
void f_80210060(Ctx* __restrict c) {
  trace_call(0x80210060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210060
  c->r[0]=c->lr; // 80210064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021006C
  c->r[31]=c->r[4]|c->r[4]; // 80210070
  W32(c->r[1]+0x00000008u,c->r[30]); // 80210074
  c->r[30]=c->r[3]|c->r[3]; // 80210078
  c->r[0]=R8(c->r[3]+0x000001ECu); // 8021007C
  cmps(c,0,(int32_t)c->r[0],0); // 80210080
  if (crb(c,2)) { goto L_802100D4; } // 80210084
  c->r[5]=0u+0x80210000u; // 80210088
  c->r[3]=c->r[31]|c->r[31]; // 8021008C
  c->r[5]=c->r[5]+0xFFFFFE60u; // 80210090
  c->r[4]=0u+0x00000001u; // 80210094
  c->lr=0x8021009Cu; f_80265090(c); // 80210098
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)104); // 8021009C
  c->r[3]=0u+0x00000000u; // 802100A0
  c->r[0]=0u+0x00000001u; // 802100A4
  c->r[4]=c->r[30]+c->r[4]; // 802100A8
  W32(c->r[4]+0x00000030u,c->r[3]); // 802100AC
  W32(c->r[4]+0x00000034u,c->r[3]); // 802100B0
  W32(c->r[4]+0x00000038u,c->r[3]); // 802100B4
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 802100B8
  W32(c->r[4]+0x00000040u,c->r[3]); // 802100BC
  W32(c->r[4]+0x00000044u,c->r[3]); // 802100C0
  W32(c->r[4]+0x00000048u,c->r[3]); // 802100C4
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 802100C8
  W8(c->r[4]+0x0000005Cu,c->r[0]); // 802100CC
  W8(c->r[4]+0x00000062u,c->r[3]); // 802100D0
L_802100D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802100D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802100D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802100DC
  c->lr=c->r[0]; // 802100E0
  c->r[1]=c->r[1]+0x00000010u; // 802100E4
  return; // 802100E8
}

// Play__Q210homebutton9RemoteSpkFliSc
void f_802100F0(Ctx* __restrict c) {
  trace_call(0x802100F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802100F0
  c->r[0]=c->lr; // 802100F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802100F8
  c->r[11]=c->r[1]+0x00000030u; // 802100FC
  c->lr=0x80210104u; f_800C2E48(c); // 80210100
  c->r[0]=R8(c->r[3]+0x000001ECu); // 80210104
  c->r[26]=c->r[3]|c->r[3]; // 80210108
  c->r[27]=c->r[4]|c->r[4]; // 8021010C
  c->r[28]=c->r[5]|c->r[5]; // 80210110
  cmps(c,0,(int32_t)c->r[0],0); // 80210114
  c->r[29]=c->r[6]|c->r[6]; // 80210118
  if (crb(c,2)) { goto L_80210170; } // 8021011C
  c->r[4]=c->r[28]|c->r[28]; // 80210120
  c->r[5]=c->r[1]+0x00000008u; // 80210124
  c->r[3]=c->r[3]+0x000001D0u; // 80210128
  c->lr=0x80210130u; f_801C3A50(c); // 8021012C
  c->r[3]=c->r[1]+0x00000008u; // 80210130
  c->lr=0x80210138u; f_801C3EF0(c); // 80210134
  c->r[30]=c->r[3]|c->r[3]; // 80210138
  c->r[3]=c->r[1]+0x00000008u; // 8021013C
  c->lr=0x80210144u; f_801C3F10(c); // 80210140
  c->r[31]=c->r[3]|c->r[3]; // 80210144
  c->r[3]=c->r[1]+0x00000008u; // 80210148
  c->lr=0x80210150u; f_801C3F20(c); // 8021014C
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)104); // 80210150
  c->r[0]=0u+0x00000000u; // 80210154
  c->r[3]=c->r[26]+c->r[3]; // 80210158
  W8(c->r[3]+0x0000005Eu,c->r[0]); // 8021015C
  W32(c->r[3]+0x00000058u,c->r[28]); // 80210160
  W32(c->r[3]+0x00000054u,c->r[31]); // 80210164
  W8(c->r[3]+0x0000005Du,c->r[29]); // 80210168
  W32(c->r[3]+0x00000050u,c->r[30]); // 8021016C
L_80210170:;
  c->r[11]=c->r[1]+0x00000030u; // 80210170
  c->lr=0x80210178u; f_800C2E94(c); // 80210174
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210178
  c->lr=c->r[0]; // 8021017C
  c->r[1]=c->r[1]+0x00000030u; // 80210180
  return; // 80210184
}

// isPlaying__Q210homebutton9RemoteSpkCFl
void f_80210190(Ctx* __restrict c) {
  trace_call(0x80210190u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 80210190
  c->r[3]=c->r[3]+c->r[0]; // 80210194
  c->r[3]=R32(c->r[3]+0x00000050u); // 80210198
  c->r[0]=0u-c->r[3]; // 8021019C
  c->r[0]=c->r[0]|c->r[3]; // 802101A0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802101A4
  return; // 802101A8
}

// isPlayingId__Q210homebutton9RemoteSpkCFli
void f_802101B0(Ctx* __restrict c) {
  trace_call(0x802101B0u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 802101B0
  c->r[3]=c->r[3]+c->r[0]; // 802101B4
  c->r[0]=R32(c->r[3]+0x00000050u); // 802101B8
  cmps(c,0,(int32_t)c->r[0],0); // 802101BC
  if (crb(c,2)) { goto L_802101D8; } // 802101C0
  c->r[0]=R32(c->r[3]+0x00000058u); // 802101C4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802101C8
  if (!crb(c,2)) { goto L_802101D8; } // 802101CC
  c->r[3]=0u+0x00000001u; // 802101D0
  return; // 802101D4
L_802101D8:;
  c->r[3]=0u+0x00000000u; // 802101D8
  return; // 802101DC
}

// isPlayReady__Q210homebutton9RemoteSpkCFl
void f_802101E0(Ctx* __restrict c) {
  trace_call(0x802101E0u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 802101E0
  c->r[3]=c->r[3]+c->r[0]; // 802101E4
  c->r[3]=R8(c->r[3]+0x00000062u); // 802101E8
  c->r[0]=0u-c->r[3]; // 802101EC
  c->r[0]=c->r[0]|c->r[3]; // 802101F0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802101F4
  return; // 802101F8
}

// GetFreePlayer__24@unnamed@HBMAxSound_cpp@Fi
void f_80210200(Ctx* __restrict c) {
  trace_call(0x80210200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210200
  c->r[0]=c->lr; // 80210204
  cmps(c,0,(int32_t)c->r[3],4); // 80210208
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021020C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80210210
  W32(c->r[1]+0x00000008u,c->r[30]); // 80210214
  if (crb(c,2)) { goto L_8021022C; } // 80210218
  cmps(c,0,(int32_t)c->r[3],23); // 8021021C
  if (crb(c,2)) { goto L_8021022C; } // 80210220
  cmps(c,0,(int32_t)c->r[3],25); // 80210224
  if (!crb(c,2)) { goto L_80210244; } // 80210228
L_8021022C:;
  c->r[4]=0u+0x80490000u; // 8021022C
  c->r[0]=0u+0x00000003u; // 80210230
  c->r[4]=R32(c->r[4]+0x00001958u); // 80210234
  c->r[5]=c->r[4]+0x00010000u; // 80210238
  c->r[5]=c->r[5]+0xFFFFB8B0u; // 8021023C
  goto L_80210250; // 80210240
L_80210244:;
  c->r[4]=0u+0x80490000u; // 80210244
  c->r[0]=0u+0x00000004u; // 80210248
  c->r[5]=R32(c->r[4]+0x00001958u); // 8021024C
L_80210250:;
  c->r[4]=c->r[5]|c->r[5]; // 80210250
  c->r[31]=0u+0x00000000u; // 80210254
  c->r[6]=0u+0x00000000u; // 80210258
  c->ctr=c->r[0]; // 8021025C
  cmps(c,0,(int32_t)c->r[0],0); // 80210260
  if (!crb(c,1)) { goto L_80210294; } // 80210264
L_80210268:;
  c->r[0]=R8(c->r[4]+0x00002E1Cu); // 80210268
  cmps(c,0,(int32_t)c->r[0],0); // 8021026C
  if (!crb(c,2)) { goto L_80210288; } // 80210270
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)11820); // 80210274
  c->r[0]=0u+0x00000001u; // 80210278
  c->r[31]=c->r[5]+c->r[4]; // 8021027C
  W8(c->r[31]+0x00002E1Cu,c->r[0]); // 80210280
  goto L_80210294; // 80210284
L_80210288:;
  c->r[4]=c->r[4]+0x00002E2Cu; // 80210288
  c->r[6]=c->r[6]+0x00000001u; // 8021028C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80210268; } // 80210290
L_80210294:;
  cmps(c,0,(int32_t)c->r[31],0); // 80210294
  if (!crb(c,2)) { goto L_8021037C; } // 80210298
  cmps(c,0,(int32_t)c->r[3],4); // 8021029C
  if (crb(c,2)) { goto L_802102B4; } // 802102A0
  cmps(c,0,(int32_t)c->r[3],23); // 802102A4
  if (crb(c,2)) { goto L_802102B4; } // 802102A8
  cmps(c,0,(int32_t)c->r[3],25); // 802102AC
  if (!crb(c,2)) { goto L_802102C8; } // 802102B0
L_802102B4:;
  c->r[3]=0u+0x80490000u; // 802102B4
  c->r[4]=R32(c->r[3]+0x00001958u); // 802102B8
  c->r[3]=c->r[4]+0x00010000u; // 802102BC
  c->r[3]=c->r[3]+0x0000433Cu; // 802102C0
  goto L_802102D8; // 802102C4
L_802102C8:;
  c->r[3]=0u+0x80490000u; // 802102C8
  c->r[4]=R32(c->r[3]+0x00001958u); // 802102CC
  c->r[3]=c->r[4]+0x00010000u; // 802102D0
  c->r[3]=c->r[3]+0x00004334u; // 802102D4
L_802102D8:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 802102D8
  c->r[0]=R32(c->r[31]+0x00002E28u); // 802102DC
  cmps(c,0,(int32_t)c->r[0],4); // 802102E0
  if (crb(c,2)) { goto L_802102F8; } // 802102E4
  cmps(c,0,(int32_t)c->r[0],23); // 802102E8
  if (crb(c,2)) { goto L_802102F8; } // 802102EC
  cmps(c,0,(int32_t)c->r[0],25); // 802102F0
  if (!crb(c,2)) { goto L_80210304; } // 802102F4
L_802102F8:;
  c->r[30]=c->r[4]+0x00010000u; // 802102F8
  c->r[30]=c->r[30]+0x0000433Cu; // 802102FC
  goto L_8021030C; // 80210300
L_80210304:;
  c->r[30]=c->r[4]+0x00010000u; // 80210304
  c->r[30]=c->r[30]+0x00004334u; // 80210308
L_8021030C:;
  c->r[3]=c->r[31]|c->r[31]; // 8021030C
  c->r[4]=0u+0x00000000u; // 80210310
  c->lr=0x80210318u; f_80230B80(c); // 80210314
  c->r[3]=c->r[31]|c->r[31]; // 80210318
  c->lr=0x80210320u; f_80230AE0(c); // 8021031C
  c->r[0]=0u+0x00000000u; // 80210320
  W8(c->r[31]+0x00002E1Cu,c->r[0]); // 80210324
  c->r[3]=R32(c->r[31]+0x00002E24u); // 80210328
  cmps(c,0,(int32_t)c->r[3],0); // 8021032C
  if (!crb(c,2)) { goto L_80210340; } // 80210330
  c->r[0]=R32(c->r[31]+0x00002E20u); // 80210334
  W32(c->r[30]+0x00000000u,c->r[0]); // 80210338
  goto L_80210348; // 8021033C
L_80210340:;
  c->r[0]=R32(c->r[31]+0x00002E20u); // 80210340
  W32(c->r[3]+0x00002E20u,c->r[0]); // 80210344
L_80210348:;
  c->r[3]=R32(c->r[31]+0x00002E20u); // 80210348
  cmps(c,0,(int32_t)c->r[3],0); // 8021034C
  if (!crb(c,2)) { goto L_80210360; } // 80210350
  c->r[0]=R32(c->r[31]+0x00002E24u); // 80210354
  W32(c->r[30]+0x00000004u,c->r[0]); // 80210358
  goto L_80210368; // 8021035C
L_80210360:;
  c->r[0]=R32(c->r[31]+0x00002E24u); // 80210360
  W32(c->r[3]+0x00002E24u,c->r[0]); // 80210364
L_80210368:;
  c->r[3]=0u+0x00000000u; // 80210368
  W32(c->r[31]+0x00002E20u,c->r[3]); // 8021036C
  c->r[0]=0u+0x00000001u; // 80210370
  W32(c->r[31]+0x00002E24u,c->r[3]); // 80210374
  W8(c->r[31]+0x00002E1Cu,c->r[0]); // 80210378
L_8021037C:;
  c->r[3]=c->r[31]|c->r[31]; // 8021037C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210380
  c->r[30]=R32(c->r[1]+0x00000008u); // 80210384
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210388
  c->lr=c->r[0]; // 8021038C
  c->r[1]=c->r[1]+0x00000010u; // 80210390
  return; // 80210394
}

// AudioFrameCallback__24@unnamed@HBMAxSound_cpp@Fv
void f_802103A0(Ctx* __restrict c) {
  trace_call(0x802103A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802103A0
  c->r[0]=c->lr; // 802103A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802103A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802103AC
  c->r[31]=0u+0x80490000u; // 802103B0
  c->r[3]=R32(c->r[31]+0x00001958u); // 802103B4
  cmps(c,0,(int32_t)c->r[3],0); // 802103B8
  if (crb(c,2)) { goto L_802103F0; } // 802103BC
  c->r[3]=c->r[3]+0x00010000u; // 802103C0
  c->r[4]=0u+0x00000001u; // 802103C4
  c->r[5]=0u+0x00000000u; // 802103C8
  c->r[3]=c->r[3]+0x00004680u; // 802103CC
  c->lr=0x802103D4u; f_8024A750(c); // 802103D0
  c->r[3]=R32(c->r[31]+0x00001958u); // 802103D4
  c->r[3]=c->r[3]+0x00010000u; // 802103D8
  c->r[12]=R32(c->r[3]+0x00004348u); // 802103DC
  cmps(c,0,(int32_t)c->r[12],0); // 802103E0
  if (crb(c,2)) { goto L_802103F0; } // 802103E4
  c->ctr=c->r[12]; // 802103E8
  if (true) { c->lr=0x802103F0u; dispatch(c,c->ctr); } // 802103EC
L_802103F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802103F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802103F4
  c->lr=c->r[0]; // 802103F8
  c->r[1]=c->r[1]+0x00000010u; // 802103FC
  return; // 80210400
}

// AudioSoundThreadProc__24@unnamed@HBMAxSound_cpp@FPv
void f_80210410(Ctx* __restrict c) {
  trace_call(0x80210410u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210410
  c->r[0]=c->lr; // 80210414
  W32(c->r[1]+0x00000034u,c->r[0]); // 80210418
  c->r[11]=c->r[1]+0x00000030u; // 8021041C
  c->lr=0x80210424u; f_800C2E4C(c); // 80210420
  c->r[31]=0u+0x00000000u; // 80210424
  W32(c->r[1]+0x00000008u,c->r[31]); // 80210428
  c->r[30]=0u+0x80490000u; // 8021042C
L_80210430:;
  c->r[3]=R32(c->r[30]+0x00001958u); // 80210430
  c->r[4]=c->r[1]+0x00000008u; // 80210434
  c->r[5]=0u+0x00000001u; // 80210438
  c->r[3]=c->r[3]+0x00010000u; // 8021043C
  c->r[3]=c->r[3]+0x00004680u; // 80210440
  c->lr=0x80210448u; f_8024A820(c); // 80210444
  c->r[0]=R32(c->r[1]+0x00000008u); // 80210448
  cmpu(c,0,c->r[0],0x00000001u); // 8021044C
  if (!crb(c,2)) { goto L_8021062C; } // 80210450
  c->lr=0x80210458u; f_802305C0(c); // 80210454
  c->lr=0x8021045Cu; f_8022EE60(c); // 80210458
  c->lr=0x80210460u; f_8022E110(c); // 8021045C
  c->r[3]=R32(c->r[30]+0x00001958u); // 80210460
  cmps(c,0,(int32_t)c->r[3],0); // 80210464
  if (crb(c,2)) { IRQCHK(c); goto L_80210430; } // 80210468
  c->r[3]=c->r[3]+0x00010000u; // 8021046C
  c->r[27]=R32(c->r[3]+0x00004334u); // 80210470
  goto L_80210540; // 80210474
L_80210478:;
  c->r[0]=R8(c->r[27]+0x00002E1Cu); // 80210478
  c->r[28]=R32(c->r[27]+0x00002E20u); // 8021047C
  cmps(c,0,(int32_t)c->r[0],0); // 80210480
  if (crb(c,2)) { goto L_8021053C; } // 80210484
  c->r[3]=c->r[27]|c->r[27]; // 80210488
  c->lr=0x80210490u; f_80230CD0(c); // 8021048C
  cmps(c,0,(int32_t)c->r[3],0); // 80210490
  if (!crb(c,2)) { goto L_8021053C; } // 80210494
  c->r[0]=R32(c->r[27]+0x00000418u); // 80210498
  cmps(c,0,(int32_t)c->r[0],0); // 8021049C
  if (!crb(c,2)) { goto L_8021053C; } // 802104A0
  c->r[0]=R32(c->r[27]+0x00002E28u); // 802104A4
  cmps(c,0,(int32_t)c->r[0],4); // 802104A8
  if (crb(c,2)) { goto L_802104C0; } // 802104AC
  cmps(c,0,(int32_t)c->r[0],23); // 802104B0
  if (crb(c,2)) { goto L_802104C0; } // 802104B4
  cmps(c,0,(int32_t)c->r[0],25); // 802104B8
  if (!crb(c,2)) { goto L_802104D0; } // 802104BC
L_802104C0:;
  c->r[3]=R32(c->r[30]+0x00001958u); // 802104C0
  c->r[29]=c->r[3]+0x00010000u; // 802104C4
  c->r[29]=c->r[29]+0x0000433Cu; // 802104C8
  goto L_802104DC; // 802104CC
L_802104D0:;
  c->r[3]=R32(c->r[30]+0x00001958u); // 802104D0
  c->r[29]=c->r[3]+0x00010000u; // 802104D4
  c->r[29]=c->r[29]+0x00004334u; // 802104D8
L_802104DC:;
  c->r[3]=c->r[27]|c->r[27]; // 802104DC
  c->r[4]=0u+0x00000000u; // 802104E0
  c->lr=0x802104E8u; f_80230B80(c); // 802104E4
  c->r[3]=c->r[27]|c->r[27]; // 802104E8
  c->lr=0x802104F0u; f_80230AE0(c); // 802104EC
  W8(c->r[27]+0x00002E1Cu,c->r[31]); // 802104F0
  c->r[3]=R32(c->r[27]+0x00002E24u); // 802104F4
  cmps(c,0,(int32_t)c->r[3],0); // 802104F8
  if (!crb(c,2)) { goto L_8021050C; } // 802104FC
  c->r[0]=R32(c->r[27]+0x00002E20u); // 80210500
  W32(c->r[29]+0x00000000u,c->r[0]); // 80210504
  goto L_80210514; // 80210508
L_8021050C:;
  c->r[0]=R32(c->r[27]+0x00002E20u); // 8021050C
  W32(c->r[3]+0x00002E20u,c->r[0]); // 80210510
L_80210514:;
  c->r[3]=R32(c->r[27]+0x00002E20u); // 80210514
  cmps(c,0,(int32_t)c->r[3],0); // 80210518
  if (!crb(c,2)) { goto L_8021052C; } // 8021051C
  c->r[0]=R32(c->r[27]+0x00002E24u); // 80210520
  W32(c->r[29]+0x00000004u,c->r[0]); // 80210524
  goto L_80210534; // 80210528
L_8021052C:;
  c->r[0]=R32(c->r[27]+0x00002E24u); // 8021052C
  W32(c->r[3]+0x00002E24u,c->r[0]); // 80210530
L_80210534:;
  W32(c->r[27]+0x00002E20u,c->r[31]); // 80210534
  W32(c->r[27]+0x00002E24u,c->r[31]); // 80210538
L_8021053C:;
  c->r[27]=c->r[28]|c->r[28]; // 8021053C
L_80210540:;
  cmps(c,0,(int32_t)c->r[27],0); // 80210540
  if (!crb(c,2)) { IRQCHK(c); goto L_80210478; } // 80210544
  c->r[3]=R32(c->r[30]+0x00001958u); // 80210548
  c->r[3]=c->r[3]+0x00010000u; // 8021054C
  c->r[29]=R32(c->r[3]+0x0000433Cu); // 80210550
  goto L_80210620; // 80210554
L_80210558:;
  c->r[0]=R8(c->r[29]+0x00002E1Cu); // 80210558
  c->r[28]=R32(c->r[29]+0x00002E20u); // 8021055C
  cmps(c,0,(int32_t)c->r[0],0); // 80210560
  if (crb(c,2)) { goto L_8021061C; } // 80210564
  c->r[3]=c->r[29]|c->r[29]; // 80210568
  c->lr=0x80210570u; f_80230CD0(c); // 8021056C
  cmps(c,0,(int32_t)c->r[3],0); // 80210570
  if (!crb(c,2)) { goto L_8021061C; } // 80210574
  c->r[0]=R32(c->r[29]+0x00000418u); // 80210578
  cmps(c,0,(int32_t)c->r[0],0); // 8021057C
  if (!crb(c,2)) { goto L_8021061C; } // 80210580
  c->r[0]=R32(c->r[29]+0x00002E28u); // 80210584
  cmps(c,0,(int32_t)c->r[0],4); // 80210588
  if (crb(c,2)) { goto L_802105A0; } // 8021058C
  cmps(c,0,(int32_t)c->r[0],23); // 80210590
  if (crb(c,2)) { goto L_802105A0; } // 80210594
  cmps(c,0,(int32_t)c->r[0],25); // 80210598
  if (!crb(c,2)) { goto L_802105B0; } // 8021059C
L_802105A0:;
  c->r[3]=R32(c->r[30]+0x00001958u); // 802105A0
  c->r[27]=c->r[3]+0x00010000u; // 802105A4
  c->r[27]=c->r[27]+0x0000433Cu; // 802105A8
  goto L_802105BC; // 802105AC
L_802105B0:;
  c->r[3]=R32(c->r[30]+0x00001958u); // 802105B0
  c->r[27]=c->r[3]+0x00010000u; // 802105B4
  c->r[27]=c->r[27]+0x00004334u; // 802105B8
L_802105BC:;
  c->r[3]=c->r[29]|c->r[29]; // 802105BC
  c->r[4]=0u+0x00000000u; // 802105C0
  c->lr=0x802105C8u; f_80230B80(c); // 802105C4
  c->r[3]=c->r[29]|c->r[29]; // 802105C8
  c->lr=0x802105D0u; f_80230AE0(c); // 802105CC
  W8(c->r[29]+0x00002E1Cu,c->r[31]); // 802105D0
  c->r[3]=R32(c->r[29]+0x00002E24u); // 802105D4
  cmps(c,0,(int32_t)c->r[3],0); // 802105D8
  if (!crb(c,2)) { goto L_802105EC; } // 802105DC
  c->r[0]=R32(c->r[29]+0x00002E20u); // 802105E0
  W32(c->r[27]+0x00000000u,c->r[0]); // 802105E4
  goto L_802105F4; // 802105E8
L_802105EC:;
  c->r[0]=R32(c->r[29]+0x00002E20u); // 802105EC
  W32(c->r[3]+0x00002E20u,c->r[0]); // 802105F0
L_802105F4:;
  c->r[3]=R32(c->r[29]+0x00002E20u); // 802105F4
  cmps(c,0,(int32_t)c->r[3],0); // 802105F8
  if (!crb(c,2)) { goto L_8021060C; } // 802105FC
  c->r[0]=R32(c->r[29]+0x00002E24u); // 80210600
  W32(c->r[27]+0x00000004u,c->r[0]); // 80210604
  goto L_80210614; // 80210608
L_8021060C:;
  c->r[0]=R32(c->r[29]+0x00002E24u); // 8021060C
  W32(c->r[3]+0x00002E24u,c->r[0]); // 80210610
L_80210614:;
  W32(c->r[29]+0x00002E20u,c->r[31]); // 80210614
  W32(c->r[29]+0x00002E24u,c->r[31]); // 80210618
L_8021061C:;
  c->r[29]=c->r[28]|c->r[28]; // 8021061C
L_80210620:;
  cmps(c,0,(int32_t)c->r[29],0); // 80210620
  if (!crb(c,2)) { IRQCHK(c); goto L_80210558; } // 80210624
  IRQCHK(c); goto L_80210430; // 80210628
L_8021062C:;
  cmpu(c,0,c->r[0],0x00000008u); // 8021062C
  if (!crb(c,2)) { IRQCHK(c); goto L_80210430; } // 80210630
  c->r[11]=c->r[1]+0x00000030u; // 80210634
  c->r[3]=0u+0x00000000u; // 80210638
  c->lr=0x80210640u; f_800C2E98(c); // 8021063C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210640
  c->lr=c->r[0]; // 80210644
  c->r[1]=c->r[1]+0x00000030u; // 80210648
  return; // 8021064C
}

// PlaySeq__10homebuttonFi
void f_80210650(Ctx* __restrict c) {
  trace_call(0x80210650u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210650
  c->r[0]=c->lr; // 80210654
  c->r[4]=0u+0x80490000u; // 80210658
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021065C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80210660
  c->r[5]=c->r[1]+0x00000008u; // 80210664
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80210668
  W32(c->r[1]+0x00000028u,c->r[30]); // 8021066C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80210670
  W32(c->r[1]+0x00000020u,c->r[28]); // 80210674
  c->r[28]=c->r[3]|c->r[3]; // 80210678
  c->r[6]=R32(c->r[4]+0x00001958u); // 8021067C
  c->r[4]=0u+0x803A0000u; // 80210680
  c->r[4]=c->r[4]+0x00006828u; // 80210684
  c->r[3]=c->r[6]+0x00010000u; // 80210688
  c->r[4]=R32(c->r[4]+c->r[0]); // 8021068C
  c->r[3]=c->r[3]+0x0000434Cu; // 80210690
  c->lr=0x80210698u; f_801C37A0(c); // 80210694
  cmps(c,0,(int32_t)c->r[3],0); // 80210698
  if (crb(c,2)) { goto L_802106B0; } // 8021069C
  c->r[3]=c->r[1]+0x00000008u; // 802106A0
  c->lr=0x802106A8u; f_801C3EF0(c); // 802106A4
  c->r[30]=c->r[3]|c->r[3]; // 802106A8
  goto L_802106B4; // 802106AC
L_802106B0:;
  c->r[30]=0u+0x00000000u; // 802106B0
L_802106B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 802106B4
  if (crb(c,2)) { goto L_8021076C; } // 802106B8
  c->r[3]=c->r[28]|c->r[28]; // 802106BC
  c->lr=0x802106C4u; f_80210200(c); // 802106C0
  c->r[31]=0u+0x80490000u; // 802106C4
  c->r[29]=c->r[3]|c->r[3]; // 802106C8
  c->r[5]=R32(c->r[31]+0x00001958u); // 802106CC
  c->r[4]=c->r[30]|c->r[30]; // 802106D0
  c->r[7]=0u+0x00000000u; // 802106D4
  c->r[6]=c->r[5]+0x00010000u; // 802106D8
  c->r[5]=R32(c->r[6]+0x000046B4u); // 802106DC
  c->r[6]=R32(c->r[6]+0x000046B8u); // 802106E0
  c->lr=0x802106E8u; f_80230A50(c); // 802106E4
  c->r[3]=c->r[29]|c->r[29]; // 802106E8
  c->r[4]=0u+0x00000001u; // 802106EC
  c->lr=0x802106F4u; f_80230B80(c); // 802106F0
  cmps(c,0,(int32_t)c->r[28],4); // 802106F4
  W32(c->r[29]+0x00002E28u,c->r[28]); // 802106F8
  if (crb(c,2)) { goto L_80210710; } // 802106FC
  cmps(c,0,(int32_t)c->r[28],23); // 80210700
  if (crb(c,2)) { goto L_80210710; } // 80210704
  cmps(c,0,(int32_t)c->r[28],25); // 80210708
  if (!crb(c,2)) { goto L_80210724; } // 8021070C
L_80210710:;
  c->r[3]=0u+0x80490000u; // 80210710
  c->r[3]=R32(c->r[3]+0x00001958u); // 80210714
  c->r[4]=c->r[3]+0x00010000u; // 80210718
  c->r[4]=c->r[4]+0x0000433Cu; // 8021071C
  goto L_80210730; // 80210720
L_80210724:;
  c->r[3]=R32(c->r[31]+0x00001958u); // 80210724
  c->r[4]=c->r[3]+0x00010000u; // 80210728
  c->r[4]=c->r[4]+0x00004334u; // 8021072C
L_80210730:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80210730
  cmps(c,0,(int32_t)c->r[3],0); // 80210734
  if (!crb(c,2)) { goto L_80210754; } // 80210738
  W32(c->r[4]+0x00000000u,c->r[29]); // 8021073C
  c->r[0]=0u+0x00000000u; // 80210740
  W32(c->r[4]+0x00000004u,c->r[29]); // 80210744
  W32(c->r[29]+0x00002E20u,c->r[0]); // 80210748
  W32(c->r[29]+0x00002E24u,c->r[0]); // 8021074C
  goto L_8021076C; // 80210750
L_80210754:;
  W32(c->r[3]+0x00002E20u,c->r[29]); // 80210754
  c->r[0]=0u+0x00000000u; // 80210758
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021075C
  W32(c->r[29]+0x00002E24u,c->r[3]); // 80210760
  W32(c->r[29]+0x00002E20u,c->r[0]); // 80210764
  W32(c->r[4]+0x00000004u,c->r[29]); // 80210768
L_8021076C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021076C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80210770
  c->r[30]=R32(c->r[1]+0x00000028u); // 80210774
  c->r[29]=R32(c->r[1]+0x00000024u); // 80210778
  c->r[28]=R32(c->r[1]+0x00000020u); // 8021077C
  c->lr=c->r[0]; // 80210780
  c->r[1]=c->r[1]+0x00000030u; // 80210784
  return; // 80210788
}

// InitAxSound__10homebuttonFPCvPvUl
void f_80210790(Ctx* __restrict c) {
  trace_call(0x80210790u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210790
  c->r[0]=c->lr; // 80210794
  c->r[6]=0u+0x00020000u; // 80210798
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021079C
  c->r[0]=c->r[6]+0xFFFF8700u; // 802107A0
  cmpu(c,0,c->r[5],c->r[0]); // 802107A4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802107A8
  c->r[31]=c->r[5]|c->r[5]; // 802107AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 802107B0
  c->r[30]=c->r[4]|c->r[4]; // 802107B4
  W32(c->r[1]+0x00000024u,c->r[29]); // 802107B8
  c->r[29]=c->r[3]|c->r[3]; // 802107BC
  if (crb(c,0)) { goto L_80210968; } // 802107C0
  c->lr=0x802107C8u; f_801C3260(c); // 802107C4
  cmps(c,0,(int32_t)c->r[3],0); // 802107C8
  if (!crb(c,2)) { goto L_802107DC; } // 802107CC
  c->r[3]=0u+0x00000000u; // 802107D0
  c->lr=0x802107D8u; f_801C3290(c); // 802107D4
  c->lr=0x802107DCu; f_801C40E0(c); // 802107D8
L_802107DC:;
  c->lr=0x802107E0u; f_8022D440(c); // 802107DC
  c->lr=0x802107E4u; f_8022ED80(c); // 802107E0
  c->lr=0x802107E8u; f_80230590(c); // 802107E4
  c->r[4]=c->r[30]+0x00010000u; // 802107E8
  c->r[5]=c->r[30]+0x00005C58u; // 802107EC
  c->r[6]=0u+0x00000000u; // 802107F0
  W8(c->r[30]+0x00002E1Cu,c->r[6]); // 802107F4
  c->r[0]=c->r[4]+0x00004700u; // 802107F8
  c->r[3]=c->r[29]|c->r[29]; // 802107FC
  W32(c->r[30]+0x00002E20u,c->r[6]); // 80210800
  W32(c->r[30]+0x00002E24u,c->r[6]); // 80210804
  W8(c->r[30]+0x00005C48u,c->r[6]); // 80210808
  W32(c->r[30]+0x00005C4Cu,c->r[6]); // 8021080C
  W32(c->r[30]+0x00005C50u,c->r[6]); // 80210810
  W8(c->r[5]+0x00002E1Cu,c->r[6]); // 80210814
  W32(c->r[5]+0x00002E20u,c->r[6]); // 80210818
  W32(c->r[5]+0x00002E24u,c->r[6]); // 8021081C
  W8(c->r[4]+0xFFFFB8A0u,c->r[6]); // 80210820
  W32(c->r[4]+0xFFFFB8A4u,c->r[6]); // 80210824
  W32(c->r[4]+0xFFFFB8A8u,c->r[6]); // 80210828
  W8(c->r[4]+0xFFFFE6CCu,c->r[6]); // 8021082C
  W32(c->r[4]+0xFFFFE6D0u,c->r[6]); // 80210830
  W32(c->r[4]+0xFFFFE6D4u,c->r[6]); // 80210834
  W8(c->r[4]+0x000014F8u,c->r[6]); // 80210838
  W32(c->r[4]+0x000014FCu,c->r[6]); // 8021083C
  W32(c->r[4]+0x00001500u,c->r[6]); // 80210840
  W8(c->r[4]+0x00004324u,c->r[6]); // 80210844
  W32(c->r[4]+0x00004328u,c->r[6]); // 80210848
  W32(c->r[4]+0x0000432Cu,c->r[6]); // 8021084C
  W32(c->r[4]+0x000046B4u,c->r[6]); // 80210850
  W32(c->r[4]+0x000046B8u,c->r[6]); // 80210854
  W32(c->r[4]+0x000046B0u,c->r[0]); // 80210858
  W32(c->r[4]+0x00004334u,c->r[6]); // 8021085C
  W32(c->r[4]+0x00004338u,c->r[6]); // 80210860
  W32(c->r[4]+0x0000433Cu,c->r[6]); // 80210864
  W32(c->r[4]+0x00004340u,c->r[6]); // 80210868
  W32(c->r[4]+0x00004348u,c->r[6]); // 8021086C
  c->r[4]=c->r[4]+0x0000434Cu; // 80210870
  c->lr=0x80210878u; f_801C3700(c); // 80210874
  cmps(c,0,(int32_t)c->r[3],0); // 80210878
  if (crb(c,2)) { goto L_80210968; } // 8021087C
  c->r[3]=c->r[30]+0x00010000u; // 80210880
  c->r[4]=0u+0x80380000u; // 80210884
  c->r[4]=c->r[4]+0xFFFFF448u; // 80210888
  c->r[5]=c->r[1]+0x00000014u; // 8021088C
  c->r[3]=c->r[3]+0x0000434Cu; // 80210890
  c->lr=0x80210898u; f_801C37A0(c); // 80210894
  cmps(c,0,(int32_t)c->r[3],0); // 80210898
  if (crb(c,2)) { goto L_80210968; } // 8021089C
  c->r[3]=c->r[1]+0x00000014u; // 802108A0
  c->lr=0x802108A8u; f_801C3EF0(c); // 802108A4
  c->r[5]=c->r[30]+0x00010000u; // 802108A8
  c->r[4]=0u+0x80380000u; // 802108AC
  W32(c->r[5]+0x000046B4u,c->r[3]); // 802108B0
  c->r[3]=c->r[5]|c->r[5]; // 802108B4
  c->r[4]=c->r[4]+0xFFFFF45Cu; // 802108B8
  c->r[5]=c->r[1]+0x00000008u; // 802108BC
  c->r[3]=c->r[3]+0x0000434Cu; // 802108C0
  c->lr=0x802108C8u; f_801C37A0(c); // 802108C4
  cmps(c,0,(int32_t)c->r[3],0); // 802108C8
  if (crb(c,2)) { goto L_80210968; } // 802108CC
  c->r[3]=c->r[1]+0x00000008u; // 802108D0
  c->lr=0x802108D8u; f_801C3EF0(c); // 802108D4
  c->r[4]=c->r[30]+0x00010000u; // 802108D8
  c->r[5]=0u+0x00000004u; // 802108DC
  W32(c->r[4]+0x000046B8u,c->r[3]); // 802108E0
  c->r[3]=c->r[4]|c->r[4]; // 802108E4
  c->r[3]=c->r[3]+0x00004680u; // 802108E8
  c->r[4]=c->r[4]+0x000046A0u; // 802108EC
  c->lr=0x802108F4u; f_8024A6F0(c); // 802108F0
  c->r[3]=c->r[30]+0x00010000u; // 802108F4
  c->r[7]=c->r[31]+0xFFFF0000u; // 802108F8
  c->r[0]=R32(c->r[3]+0x000046B0u); // 802108FC
  c->r[6]=c->r[7]+0xFFFFB900u; // 80210900
  c->r[4]=0u+0x80210000u; // 80210904
  c->r[5]=0u+0x00000000u; // 80210908
  c->r[4]=c->r[4]+0x00000410u; // 8021090C
  c->r[6]=c->r[0]+c->r[6]; // 80210910
  c->r[8]=0u+0x00000004u; // 80210914
  c->r[9]=0u+0x00000000u; // 80210918
  c->r[3]=c->r[3]+0x00004368u; // 8021091C
  c->r[7]=c->r[7]+0xFFFFB900u; // 80210920
  c->lr=0x80210928u; f_8024D400(c); // 80210924
  cmps(c,0,(int32_t)c->r[3],0); // 80210928
  if (crb(c,2)) { goto L_80210968; } // 8021092C
  c->r[4]=0u+0x80490000u; // 80210930
  c->r[3]=c->r[30]+0x00010000u; // 80210934
  W32(c->r[4]+0x00001958u,c->r[30]); // 80210938
  c->r[3]=c->r[3]+0x00004368u; // 8021093C
  c->lr=0x80210944u; f_8024DA90(c); // 80210940
  c->lr=0x80210948u; f_802494C0(c); // 80210944
  c->r[4]=0u+0x80210000u; // 80210948
  c->r[31]=c->r[3]|c->r[3]; // 8021094C
  c->r[3]=c->r[4]+0x000003A0u; // 80210950
  c->lr=0x80210958u; f_801C6100(c); // 80210954
  c->r[4]=c->r[30]+0x00010000u; // 80210958
  W32(c->r[4]+0x00004348u,c->r[3]); // 8021095C
  c->r[3]=c->r[31]|c->r[31]; // 80210960
  c->lr=0x80210968u; f_80249500(c); // 80210964
L_80210968:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210968
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8021096C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80210970
  c->r[29]=R32(c->r[1]+0x00000024u); // 80210974
  c->lr=c->r[0]; // 80210978
  c->r[1]=c->r[1]+0x00000030u; // 8021097C
  return; // 80210980
}

// AxSoundMain__10homebuttonFv
void f_80210990(Ctx* __restrict c) {
  trace_call(0x80210990u);
  return; // 80210990
}

// StopAllSeq__10homebuttonFv
void f_802109A0(Ctx* __restrict c) {
  trace_call(0x802109A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802109A0
  c->r[0]=c->lr; // 802109A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802109A8
  c->r[11]=c->r[1]+0x00000020u; // 802109AC
  c->lr=0x802109B4u; f_800C2E48(c); // 802109B0
  c->r[31]=0u+0x80490000u; // 802109B4
  c->r[0]=R32(c->r[31]+0x00001958u); // 802109B8
  cmps(c,0,(int32_t)c->r[0],0); // 802109BC
  if (crb(c,2)) { goto L_80210B4C; } // 802109C0
  c->r[27]=0u+0x00000000u; // 802109C4
  c->r[28]=0u+0x00000000u; // 802109C8
  c->r[30]=0u+0x00000000u; // 802109CC
L_802109D0:;
  c->r[3]=R32(c->r[31]+0x00001958u); // 802109D0
  c->r[26]=c->r[3]+c->r[28]; // 802109D4
  c->r[0]=R8(c->r[26]+0x00002E1Cu); // 802109D8
  cmps(c,0,(int32_t)c->r[0],0); // 802109DC
  if (crb(c,2)) { goto L_80210A74; } // 802109E0
  c->r[0]=R32(c->r[26]+0x00002E28u); // 802109E4
  cmps(c,0,(int32_t)c->r[0],4); // 802109E8
  if (crb(c,2)) { goto L_80210A00; } // 802109EC
  cmps(c,0,(int32_t)c->r[0],23); // 802109F0
  if (crb(c,2)) { goto L_80210A00; } // 802109F4
  cmps(c,0,(int32_t)c->r[0],25); // 802109F8
  if (!crb(c,2)) { goto L_80210A0C; } // 802109FC
L_80210A00:;
  c->r[29]=c->r[3]+0x00010000u; // 80210A00
  c->r[29]=c->r[29]+0x0000433Cu; // 80210A04
  goto L_80210A14; // 80210A08
L_80210A0C:;
  c->r[29]=c->r[3]+0x00010000u; // 80210A0C
  c->r[29]=c->r[29]+0x00004334u; // 80210A10
L_80210A14:;
  c->r[3]=c->r[26]|c->r[26]; // 80210A14
  c->r[4]=0u+0x00000000u; // 80210A18
  c->lr=0x80210A20u; f_80230B80(c); // 80210A1C
  c->r[3]=c->r[26]|c->r[26]; // 80210A20
  c->lr=0x80210A28u; f_80230AE0(c); // 80210A24
  W8(c->r[26]+0x00002E1Cu,c->r[30]); // 80210A28
  c->r[3]=R32(c->r[26]+0x00002E24u); // 80210A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80210A30
  if (!crb(c,2)) { goto L_80210A44; } // 80210A34
  c->r[0]=R32(c->r[26]+0x00002E20u); // 80210A38
  W32(c->r[29]+0x00000000u,c->r[0]); // 80210A3C
  goto L_80210A4C; // 80210A40
L_80210A44:;
  c->r[0]=R32(c->r[26]+0x00002E20u); // 80210A44
  W32(c->r[3]+0x00002E20u,c->r[0]); // 80210A48
L_80210A4C:;
  c->r[3]=R32(c->r[26]+0x00002E20u); // 80210A4C
  cmps(c,0,(int32_t)c->r[3],0); // 80210A50
  if (!crb(c,2)) { goto L_80210A64; } // 80210A54
  c->r[0]=R32(c->r[26]+0x00002E24u); // 80210A58
  W32(c->r[29]+0x00000004u,c->r[0]); // 80210A5C
  goto L_80210A6C; // 80210A60
L_80210A64:;
  c->r[0]=R32(c->r[26]+0x00002E24u); // 80210A64
  W32(c->r[3]+0x00002E24u,c->r[0]); // 80210A68
L_80210A6C:;
  W32(c->r[26]+0x00002E20u,c->r[30]); // 80210A6C
  W32(c->r[26]+0x00002E24u,c->r[30]); // 80210A70
L_80210A74:;
  c->r[27]=c->r[27]+0x00000001u; // 80210A74
  c->r[28]=c->r[28]+0x00002E2Cu; // 80210A78
  cmps(c,0,(int32_t)c->r[27],4); // 80210A7C
  if (crb(c,0)) { IRQCHK(c); goto L_802109D0; } // 80210A80
  c->r[26]=0u+0x00000000u; // 80210A84
  c->r[28]=0u+0x00000000u; // 80210A88
  c->r[31]=0u+0x00000000u; // 80210A8C
  c->r[30]=0u+0x80490000u; // 80210A90
L_80210A94:;
  c->r[5]=R32(c->r[30]+0x00001958u); // 80210A94
  c->r[4]=c->r[5]+0x00010000u; // 80210A98
  c->r[3]=c->r[4]+c->r[28]; // 80210A9C
  c->r[0]=R8(c->r[3]+0xFFFFE6CCu); // 80210AA0
  c->r[27]=c->r[3]+0xFFFFB8B0u; // 80210AA4
  cmps(c,0,(int32_t)c->r[0],0); // 80210AA8
  if (crb(c,2)) { goto L_80210B3C; } // 80210AAC
  c->r[0]=R32(c->r[27]+0x00002E28u); // 80210AB0
  cmps(c,0,(int32_t)c->r[0],4); // 80210AB4
  if (crb(c,2)) { goto L_80210ACC; } // 80210AB8
  cmps(c,0,(int32_t)c->r[0],23); // 80210ABC
  if (crb(c,2)) { goto L_80210ACC; } // 80210AC0
  cmps(c,0,(int32_t)c->r[0],25); // 80210AC4
  if (!crb(c,2)) { goto L_80210AD8; } // 80210AC8
L_80210ACC:;
  c->r[29]=c->r[5]+0x00010000u; // 80210ACC
  c->r[29]=c->r[29]+0x0000433Cu; // 80210AD0
  goto L_80210ADC; // 80210AD4
L_80210AD8:;
  c->r[29]=c->r[4]+0x00004334u; // 80210AD8
L_80210ADC:;
  c->r[3]=c->r[27]|c->r[27]; // 80210ADC
  c->r[4]=0u+0x00000000u; // 80210AE0
  c->lr=0x80210AE8u; f_80230B80(c); // 80210AE4
  c->r[3]=c->r[27]|c->r[27]; // 80210AE8
  c->lr=0x80210AF0u; f_80230AE0(c); // 80210AEC
  W8(c->r[27]+0x00002E1Cu,c->r[31]); // 80210AF0
  c->r[3]=R32(c->r[27]+0x00002E24u); // 80210AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80210AF8
  if (!crb(c,2)) { goto L_80210B0C; } // 80210AFC
  c->r[0]=R32(c->r[27]+0x00002E20u); // 80210B00
  W32(c->r[29]+0x00000000u,c->r[0]); // 80210B04
  goto L_80210B14; // 80210B08
L_80210B0C:;
  c->r[0]=R32(c->r[27]+0x00002E20u); // 80210B0C
  W32(c->r[3]+0x00002E20u,c->r[0]); // 80210B10
L_80210B14:;
  c->r[3]=R32(c->r[27]+0x00002E20u); // 80210B14
  cmps(c,0,(int32_t)c->r[3],0); // 80210B18
  if (!crb(c,2)) { goto L_80210B2C; } // 80210B1C
  c->r[0]=R32(c->r[27]+0x00002E24u); // 80210B20
  W32(c->r[29]+0x00000004u,c->r[0]); // 80210B24
  goto L_80210B34; // 80210B28
L_80210B2C:;
  c->r[0]=R32(c->r[27]+0x00002E24u); // 80210B2C
  W32(c->r[3]+0x00002E24u,c->r[0]); // 80210B30
L_80210B34:;
  W32(c->r[27]+0x00002E20u,c->r[31]); // 80210B34
  W32(c->r[27]+0x00002E24u,c->r[31]); // 80210B38
L_80210B3C:;
  c->r[26]=c->r[26]+0x00000001u; // 80210B3C
  c->r[28]=c->r[28]+0x00002E2Cu; // 80210B40
  cmps(c,0,(int32_t)c->r[26],3); // 80210B44
  if (crb(c,0)) { IRQCHK(c); goto L_80210A94; } // 80210B48
L_80210B4C:;
  c->r[11]=c->r[1]+0x00000020u; // 80210B4C
  c->lr=0x80210B54u; f_800C2E94(c); // 80210B50
  c->r[0]=R32(c->r[1]+0x00000024u); // 80210B54
  c->lr=c->r[0]; // 80210B58
  c->r[1]=c->r[1]+0x00000020u; // 80210B5C
  return; // 80210B60
}

// SetVolumeAllSeq__10homebuttonFf
void f_80210B70(Ctx* __restrict c) {
  trace_call(0x80210B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210B70
  c->r[0]=c->lr; // 80210B74
  c->r[3]=0u+0x80490000u; // 80210B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 80210B7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80210B80
  c->r[31]=0u+0x80380000u; // 80210B84
  c->r[31]=c->r[31]+0xFFFFF448u; // 80210B88
  W32(c->r[1]+0x00000018u,c->r[30]); // 80210B8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80210B90
  W32(c->r[1]+0x00000010u,c->r[28]); // 80210B94
  c->r[0]=R32(c->r[3]+0x00001958u); // 80210B98
  cmps(c,0,(int32_t)c->r[0],0); // 80210B9C
  if (crb(c,2)) { goto L_80210C70; } // 80210BA0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210BA4
  fcmp(c,0,c->f[1],c->f[0]); // 80210BA8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80210BAC
  if (!crb(c,2)) { goto L_80210BBC; } // 80210BB0
  c->r[29]=0u+0xFFFFFC78u; // 80210BB4
  goto L_80210BE0; // 80210BB8
L_80210BBC:;
  c->lr=0x80210BC0u; f_800D29C0(c); // 80210BBC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80210BC0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210BC4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80210BC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80210BCC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80210BD0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80210BD4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80210BD8
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 80210BDC
L_80210BE0:;
  cmps(c,0,(int32_t)c->r[29],60); // 80210BE0
  if (!crb(c,1)) { goto L_80210BEC; } // 80210BE4
  c->r[29]=0u+0x0000003Cu; // 80210BE8
L_80210BEC:;
  cmps(c,0,(int32_t)c->r[29],-904); // 80210BEC
  if (!crb(c,0)) { goto L_80210BF8; } // 80210BF0
  c->r[29]=0u+0xFFFFFC78u; // 80210BF4
L_80210BF8:;
  c->r[28]=0u+0x00000000u; // 80210BF8
  c->r[30]=0u+0x00000000u; // 80210BFC
  c->r[31]=0u+0x80490000u; // 80210C00
L_80210C04:;
  c->r[0]=R32(c->r[31]+0x00001958u); // 80210C04
  c->r[3]=c->r[0]+c->r[30]; // 80210C08
  c->r[0]=R8(c->r[3]+0x00002E1Cu); // 80210C0C
  cmps(c,0,(int32_t)c->r[0],0); // 80210C10
  if (crb(c,2)) { goto L_80210C20; } // 80210C14
  c->r[4]=c->r[29]|c->r[29]; // 80210C18
  c->lr=0x80210C20u; f_80230CE0(c); // 80210C1C
L_80210C20:;
  c->r[28]=c->r[28]+0x00000001u; // 80210C20
  c->r[30]=c->r[30]+0x00002E2Cu; // 80210C24
  cmps(c,0,(int32_t)c->r[28],4); // 80210C28
  if (crb(c,0)) { IRQCHK(c); goto L_80210C04; } // 80210C2C
  c->r[28]=0u+0x00000000u; // 80210C30
  c->r[30]=0u+0x00000000u; // 80210C34
  c->r[31]=0u+0x80490000u; // 80210C38
L_80210C3C:;
  c->r[3]=R32(c->r[31]+0x00001958u); // 80210C3C
  c->r[0]=c->r[3]+0x00010000u; // 80210C40
  c->r[3]=c->r[0]+c->r[30]; // 80210C44
  c->r[3]=c->r[3]+0xFFFFB8B0u; // 80210C48
  c->r[0]=R8(c->r[3]+0x00002E1Cu); // 80210C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80210C50
  if (crb(c,2)) { goto L_80210C60; } // 80210C54
  c->r[4]=c->r[29]|c->r[29]; // 80210C58
  c->lr=0x80210C60u; f_80230CE0(c); // 80210C5C
L_80210C60:;
  c->r[28]=c->r[28]+0x00000001u; // 80210C60
  c->r[30]=c->r[30]+0x00002E2Cu; // 80210C64
  cmps(c,0,(int32_t)c->r[28],3); // 80210C68
  if (crb(c,0)) { IRQCHK(c); goto L_80210C3C; } // 80210C6C
L_80210C70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80210C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80210C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 80210C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 80210C7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80210C80
  c->lr=c->r[0]; // 80210C84
  c->r[1]=c->r[1]+0x00000020u; // 80210C88
  return; // 80210C8C
}

// SetSoundMode__10homebuttonFUl
void f_80210C90(Ctx* __restrict c) {
  trace_call(0x80210C90u);
  f_8022D640(c); return; // 80210C90
}

// HBMAllocMem__FUl
void f_80210CA0(Ctx* __restrict c) {
  trace_call(0x80210CA0u);
  c->r[5]=0u+0x803A0000u; // 80210CA0
  c->r[4]=c->r[3]|c->r[3]; // 80210CA4
  c->r[3]=R32(c->r[5]+0x000068E4u); // 80210CA8
  f_8023B6D0(c); return; // 80210CAC
}

// HBMFreeMem__FPv
void f_80210CB0(Ctx* __restrict c) {
  trace_call(0x80210CB0u);
  c->r[5]=0u+0x803A0000u; // 80210CB0
  c->r[4]=c->r[3]|c->r[3]; // 80210CB4
  c->r[3]=R32(c->r[5]+0x000068E4u); // 80210CB8
  f_8023B6E0(c); return; // 80210CBC
}

// HBMCreate
void f_80210CC0(Ctx* __restrict c) {
  trace_call(0x80210CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210CC0
  c->r[0]=c->lr; // 80210CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210CC8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80210CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80210CD0
  c->r[31]=c->r[3]|c->r[3]; // 80210CD4
  cmps(c,0,(int32_t)c->r[0],0); // 80210CD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80210CDC
  if (crb(c,2)) { goto L_80210CEC; } // 80210CE0
  c->r[4]=0u+0x00000000u; // 80210CE4
  goto L_80210D00; // 80210CE8
L_80210CEC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80210CEC
  c->r[4]=0u+0x00000002u; // 80210CF0
  cmps(c,0,(int32_t)c->r[0],0); // 80210CF4
  if (crb(c,2)) { goto L_80210D00; } // 80210CF8
  c->r[4]=0u+0x00000001u; // 80210CFC
L_80210D00:;
  cmps(c,0,(int32_t)c->r[4],1); // 80210D00
  if (!crb(c,2)) { goto L_80210D38; } // 80210D04
  c->r[3]=R32(c->r[3]+0x00000010u); // 80210D08
  c->r[5]=0u+0x00000000u; // 80210D0C
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 80210D10
  c->lr=0x80210D18u; f_8023B1F0(c); // 80210D14
  c->r[30]=0u+0x80490000u; // 80210D18
  c->r[4]=c->r[3]|c->r[3]; // 80210D1C
  c->r[3]=c->r[30]+0x00001960u; // 80210D20
  c->r[5]=0u+0x00000020u; // 80210D24
  c->lr=0x80210D2Cu; f_8023B6F0(c); // 80210D28
  c->r[3]=0u+0x803A0000u; // 80210D2C
  c->r[0]=c->r[30]+0x00001960u; // 80210D30
  W32(c->r[3]+0x000068E4u,c->r[0]); // 80210D34
L_80210D38:;
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80210D38
  cmps(c,0,(int32_t)c->r[5],0); // 80210D3C
  if (crb(c,2)) { goto L_80210D4C; } // 80210D40
  c->r[3]=0u+0x00000000u; // 80210D44
  goto L_80210D60; // 80210D48
L_80210D4C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80210D4C
  c->r[3]=0u+0x00000002u; // 80210D50
  cmps(c,0,(int32_t)c->r[0],0); // 80210D54
  if (crb(c,2)) { goto L_80210D60; } // 80210D58
  c->r[3]=0u+0x00000001u; // 80210D5C
L_80210D60:;
  cmps(c,0,(int32_t)c->r[3],0); // 80210D60
  if (crb(c,2)) { goto L_80210D7C; } // 80210D64
  cmps(c,0,(int32_t)c->r[3],1); // 80210D68
  if (crb(c,2)) { goto L_80210D94; } // 80210D6C
  cmps(c,0,(int32_t)c->r[3],2); // 80210D70
  if (crb(c,2)) { goto L_80210DA8; } // 80210D74
  goto L_80210DB8; // 80210D78
L_80210D7C:;
  c->r[4]=0u+0x80490000u; // 80210D7C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80210D80
  c->r[3]=0u+0x803A0000u; // 80210D84
  W32(c->r[4]+0x00001A20u,c->r[5]); // 80210D88
  W32(c->r[3]+0x000068E4u,c->r[0]); // 80210D8C
  goto L_80210DB8; // 80210D90
L_80210D94:;
  c->r[4]=0u+0x803A0000u; // 80210D94
  c->r[3]=0u+0x80490000u; // 80210D98
  c->r[0]=R32(c->r[4]+0x000068E4u); // 80210D9C
  W32(c->r[3]+0x00001A20u,c->r[0]); // 80210DA0
  goto L_80210DB8; // 80210DA4
L_80210DA8:;
  c->r[4]=0u+0x80490000u; // 80210DA8
  c->r[3]=0u+0x803A0000u; // 80210DAC
  c->r[0]=R32(c->r[4]+0x00001A20u); // 80210DB0
  W32(c->r[3]+0x000068E4u,c->r[0]); // 80210DB4
L_80210DB8:;
  c->r[3]=c->r[31]|c->r[31]; // 80210DB8
  c->lr=0x80210DC0u; f_802112F0(c); // 80210DBC
  c->lr=0x80210DC4u; f_80211340(c); // 80210DC0
  c->lr=0x80210DC8u; f_80211350(c); // 80210DC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210DC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210DCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80210DD0
  c->lr=c->r[0]; // 80210DD4
  c->r[1]=c->r[1]+0x00000010u; // 80210DD8
  return; // 80210DDC
}

// HBMInit
void f_80210DE0(Ctx* __restrict c) {
  trace_call(0x80210DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210DE0
  c->r[0]=c->lr; // 80210DE4
  c->r[3]=0u+0x803A0000u; // 80210DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210DEC
  c->r[3]=R32(c->r[3]+0x000068E0u); // 80210DF0
  c->lr=0x80210DF8u; f_80243B90(c); // 80210DF4
  c->lr=0x80210DFCu; f_80211340(c); // 80210DF8
  c->lr=0x80210E00u; f_80211E60(c); // 80210DFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210E00
  c->lr=c->r[0]; // 80210E04
  c->r[1]=c->r[1]+0x00000010u; // 80210E08
  return; // 80210E0C
}

// HBMCalc
void f_80210E10(Ctx* __restrict c) {
  trace_call(0x80210E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210E10
  c->r[0]=c->lr; // 80210E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80210E1C
  c->r[31]=c->r[3]|c->r[3]; // 80210E20
  c->lr=0x80210E28u; f_80211340(c); // 80210E24
  c->r[4]=c->r[31]|c->r[31]; // 80210E28
  c->lr=0x80210E30u; f_80212910(c); // 80210E2C
  c->lr=0x80210E34u; f_80211340(c); // 80210E30
  c->lr=0x80210E38u; f_80219150(c); // 80210E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210E38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210E3C
  c->lr=c->r[0]; // 80210E40
  c->r[1]=c->r[1]+0x00000010u; // 80210E44
  return; // 80210E48
}

// HBMDraw
void f_80210E50(Ctx* __restrict c) {
  trace_call(0x80210E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210E50
  c->r[0]=c->lr; // 80210E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210E58
  c->lr=0x80210E60u; f_80211340(c); // 80210E5C
  c->lr=0x80210E64u; f_802148E0(c); // 80210E60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210E64
  c->lr=c->r[0]; // 80210E68
  c->r[1]=c->r[1]+0x00000010u; // 80210E6C
  return; // 80210E70
}

// HBMGetSelectBtnNum
void f_80210E80(Ctx* __restrict c) {
  trace_call(0x80210E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210E80
  c->r[0]=c->lr; // 80210E84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210E88
  c->lr=0x80210E90u; f_80211340(c); // 80210E8C
  c->lr=0x80210E94u; f_80219150(c); // 80210E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210E94
  c->lr=c->r[0]; // 80210E98
  c->r[1]=c->r[1]+0x00000010u; // 80210E9C
  return; // 80210EA0
}

// HBMSetAdjustFlag
void f_80210EB0(Ctx* __restrict c) {
  trace_call(0x80210EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210EB0
  c->r[0]=c->lr; // 80210EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80210EBC
  c->r[31]=c->r[3]|c->r[3]; // 80210EC0
  c->lr=0x80210EC8u; f_80211340(c); // 80210EC4
  c->r[4]=c->r[31]|c->r[31]; // 80210EC8
  c->lr=0x80210ED0u; f_80219170(c); // 80210ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210ED4
  c->lr=c->r[0]; // 80210ED8
  c->r[1]=c->r[1]+0x00000010u; // 80210EDC
  return; // 80210EE0
}

// HBMStartBlackOut
void f_80210EF0(Ctx* __restrict c) {
  trace_call(0x80210EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210EF0
  c->r[0]=c->lr; // 80210EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210EF8
  c->lr=0x80210F00u; f_80211340(c); // 80210EFC
  c->lr=0x80210F04u; f_80219360(c); // 80210F00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210F04
  c->lr=c->r[0]; // 80210F08
  c->r[1]=c->r[1]+0x00000010u; // 80210F0C
  return; // 80210F10
}

// HBMCreateSound
void f_80210F20(Ctx* __restrict c) {
  trace_call(0x80210F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210F20
  c->r[0]=c->lr; // 80210F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80210F28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80210F2C
  c->r[31]=c->r[5]|c->r[5]; // 80210F30
  W32(c->r[1]+0x00000018u,c->r[30]); // 80210F34
  c->r[30]=c->r[4]|c->r[4]; // 80210F38
  W32(c->r[1]+0x00000014u,c->r[29]); // 80210F3C
  c->r[29]=c->r[3]|c->r[3]; // 80210F40
  c->lr=0x80210F48u; f_80211340(c); // 80210F44
  c->r[3]=c->r[29]|c->r[29]; // 80210F48
  c->r[4]=c->r[30]|c->r[30]; // 80210F4C
  c->r[5]=c->r[31]|c->r[31]; // 80210F50
  c->lr=0x80210F58u; f_80210790(c); // 80210F54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80210F58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80210F5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80210F60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80210F64
  c->lr=c->r[0]; // 80210F68
  c->r[1]=c->r[1]+0x00000020u; // 80210F6C
  return; // 80210F70
}

// fn_80210F80
void f_80210F80(Ctx* __restrict c) {
  trace_call(0x80210F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210F80
  c->r[0]=c->lr; // 80210F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210F88
  c->lr=0x80210F90u; f_80211340(c); // 80210F8C
  c->lr=0x80210F94u; f_80219550(c); // 80210F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210F94
  c->lr=c->r[0]; // 80210F98
  c->r[1]=c->r[1]+0x00000010u; // 80210F9C
  return; // 80210FA0
}

// initgx__10homebuttonFv
void f_80210FB0(Ctx* __restrict c) {
  trace_call(0x80210FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210FB0
  c->r[0]=c->lr; // 80210FB4
  c->r[3]=0u+0x00000000u; // 80210FB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80210FBC
  c->lr=0x80210FC4u; f_802092C0(c); // 80210FC0
  c->r[3]=c->r[1]+0x00000008u; // 80210FC4
  c->lr=0x80210FCCu; f_8023EF10(c); // 80210FC8
  c->r[3]=c->r[1]+0x00000008u; // 80210FCC
  c->r[4]=0u+0x00000000u; // 80210FD0
  c->lr=0x80210FD8u; f_8020C670(c); // 80210FD4
  c->r[3]=0u+0x00000000u; // 80210FD8
  c->lr=0x80210FE0u; f_8020C720(c); // 80210FDC
  c->lr=0x80210FE4u; f_80207AD0(c); // 80210FE0
  c->r[3]=0u+0x00000009u; // 80210FE4
  c->r[4]=0u+0x00000001u; // 80210FE8
  c->lr=0x80210FF0u; f_80207470(c); // 80210FEC
  c->r[3]=0u+0x00000000u; // 80210FF0
  c->r[4]=0u+0x00000009u; // 80210FF4
  c->r[5]=0u+0x00000000u; // 80210FF8
  c->r[6]=0u+0x00000004u; // 80210FFC
  c->r[7]=0u+0x00000000u; // 80211000
  c->lr=0x80211008u; f_80207B10(c); // 80211004
  c->r[3]=0u+0x00000001u; // 80211008
  c->lr=0x80211010u; f_8020A170(c); // 8021100C
  c->r[3]=0u+0x00000004u; // 80211010
  c->r[4]=0u+0x00000000u; // 80211014
  c->r[5]=0u+0x00000000u; // 80211018
  c->r[6]=0u+0x00000000u; // 8021101C
  c->r[7]=0u+0x00000000u; // 80211020
  c->r[8]=0u+0x00000000u; // 80211024
  c->r[9]=0u+0x00000002u; // 80211028
  c->lr=0x80211030u; f_8020A1A0(c); // 8021102C
  c->r[3]=0u+0x00000005u; // 80211030
  c->r[4]=0u+0x00000000u; // 80211034
  c->r[5]=0u+0x00000000u; // 80211038
  c->r[6]=0u+0x00000000u; // 8021103C
  c->r[7]=0u+0x00000000u; // 80211040
  c->r[8]=0u+0x00000000u; // 80211044
  c->r[9]=0u+0x00000002u; // 80211048
  c->lr=0x80211050u; f_8020A1A0(c); // 8021104C
  c->r[3]=0u+0x00000000u; // 80211050
  c->lr=0x80211058u; f_80208480(c); // 80211054
  c->r[3]=0u+0x00000001u; // 80211058
  c->lr=0x80211060u; f_8020BD20(c); // 8021105C
  c->r[3]=0u+0x00000000u; // 80211060
  c->r[4]=0u+0x000000FFu; // 80211064
  c->r[5]=0u+0x000000FFu; // 80211068
  c->r[6]=0u+0x000000FFu; // 8021106C
  c->lr=0x80211074u; f_8020BBC0(c); // 80211070
  c->r[3]=0u+0x00000000u; // 80211074
  c->r[4]=0u+0x0000000Fu; // 80211078
  c->r[5]=0u+0x0000000Fu; // 8021107C
  c->r[6]=0u+0x0000000Fu; // 80211080
  c->r[7]=0u+0x00000002u; // 80211084
  c->lr=0x8021108Cu; f_8020B720(c); // 80211088
  c->r[3]=0u+0x00000000u; // 8021108C
  c->r[4]=0u+0x00000000u; // 80211090
  c->r[5]=0u+0x00000000u; // 80211094
  c->r[6]=0u+0x00000000u; // 80211098
  c->r[7]=0u+0x00000001u; // 8021109C
  c->r[8]=0u+0x00000000u; // 802110A0
  c->lr=0x802110A8u; f_8020B7A0(c); // 802110A4
  c->r[3]=0u+0x00000000u; // 802110A8
  c->r[4]=0u+0x00000007u; // 802110AC
  c->r[5]=0u+0x00000007u; // 802110B0
  c->r[6]=0u+0x00000007u; // 802110B4
  c->r[7]=0u+0x00000001u; // 802110B8
  c->lr=0x802110C0u; f_8020B760(c); // 802110BC
  c->r[3]=0u+0x00000000u; // 802110C0
  c->r[4]=0u+0x00000000u; // 802110C4
  c->r[5]=0u+0x00000000u; // 802110C8
  c->r[6]=0u+0x00000000u; // 802110CC
  c->r[7]=0u+0x00000001u; // 802110D0
  c->r[8]=0u+0x00000000u; // 802110D4
  c->lr=0x802110DCu; f_8020B800(c); // 802110D8
  c->r[3]=0u+0x00000007u; // 802110DC
  c->r[4]=0u+0x00000000u; // 802110E0
  c->r[5]=0u+0x00000001u; // 802110E4
  c->r[6]=0u+0x00000007u; // 802110E8
  c->r[7]=0u+0x00000000u; // 802110EC
  c->lr=0x802110F4u; f_8020BAF0(c); // 802110F0
  c->r[3]=0u+0x00000001u; // 802110F4
  c->r[4]=0u+0x00000004u; // 802110F8
  c->r[5]=0u+0x00000005u; // 802110FC
  c->r[6]=0u+0x00000005u; // 80211100
  c->lr=0x80211108u; f_8020C090(c); // 80211104
  c->r[3]=0u+0x00000000u; // 80211108
  c->lr=0x80211110u; f_8020C110(c); // 8021110C
  c->r[3]=0u+0x00000000u; // 80211110
  c->r[4]=0u+0x00000007u; // 80211114
  c->r[5]=0u+0x00000000u; // 80211118
  c->lr=0x80211120u; f_8020C140(c); // 8021111C
  c->r[3]=0u+0x00000000u; // 80211120
  c->lr=0x80211128u; f_80209AE0(c); // 80211124
  c->r[3]=0u+0x00000000u; // 80211128
  c->lr=0x80211130u; f_8020B5A0(c); // 8021112C
  c->r[3]=0u+0x00000000u; // 80211130
  c->r[4]=0u+0x00000000u; // 80211134
  c->r[5]=0u+0x00000001u; // 80211138
  c->r[6]=0u+0x00000002u; // 8021113C
  c->r[7]=0u+0x00000003u; // 80211140
  c->lr=0x80211148u; f_8020BA70(c); // 80211144
  c->r[3]=0u+0x00000000u; // 80211148
  c->r[4]=0u+0x00000000u; // 8021114C
  c->r[5]=0u+0x00000000u; // 80211150
  c->lr=0x80211158u; f_8020BA30(c); // 80211154
  c->r[0]=R32(c->r[1]+0x00000044u); // 80211158
  c->lr=c->r[0]; // 8021115C
  c->r[1]=c->r[1]+0x00000040u; // 80211160
  return; // 80211164
}

// __ct__Q210homebutton10HomeButtonFPC11HBMDataInfo
void f_80211170(Ctx* __restrict c) {
  trace_call(0x80211170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211170
  c->r[0]=c->lr; // 80211174
  W32(c->r[1]+0x00000024u,c->r[0]); // 80211178
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021117C
  c->r[31]=0u+0x00000000u; // 80211180
  W32(c->r[1]+0x00000018u,c->r[30]); // 80211184
  W32(c->r[1]+0x00000014u,c->r[29]); // 80211188
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021118C
  c->r[28]=c->r[3]|c->r[3]; // 80211190
  W32(c->r[3]+0x00000004u,c->r[4]); // 80211194
  W32(c->r[3]+0x00000008u,c->r[31]); // 80211198
  W32(c->r[3]+0x000001D8u,c->r[31]); // 8021119C
  W32(c->r[3]+0x000001F0u,c->r[31]); // 802111A0
  c->r[3]=c->r[3]+0x000001F8u; // 802111A4
  c->lr=0x802111ACu; f_8021B4F0(c); // 802111A8
  c->r[4]=0u+0x00000001u; // 802111AC
  c->r[0]=0u+0xFFFFFFFFu; // 802111B0
  c->r[5]=0u+0x0000001Eu; // 802111B4
  c->r[3]=0u+0x00000002u; // 802111B8
  W32(c->r[28]+0x000003F4u,c->r[31]); // 802111BC
  c->r[29]=0u+0x00000000u; // 802111C0
  c->r[30]=0u+0x00000000u; // 802111C4
  W32(c->r[28]+0x000003F8u,c->r[5]); // 802111C8
  W32(c->r[28]+0x000003FCu,c->r[31]); // 802111CC
  W8(c->r[28]+0x00000401u,c->r[31]); // 802111D0
  W8(c->r[28]+0x00000402u,c->r[31]); // 802111D4
  W8(c->r[28]+0x00000403u,c->r[31]); // 802111D8
  W8(c->r[28]+0x00000400u,c->r[4]); // 802111DC
  W32(c->r[28]+0x000005B8u,c->r[4]); // 802111E0
  W32(c->r[28]+0x00000014u,c->r[3]); // 802111E4
  W32(c->r[28]+0x000000B8u,c->r[0]); // 802111E8
  W32(c->r[28]+0x00000018u,c->r[0]); // 802111EC
  W32(c->r[28]+0x0000001Cu,c->r[31]); // 802111F0
  W32(c->r[28]+0x00000000u,c->r[31]); // 802111F4
  W32(c->r[28]+0x00000068u,c->r[31]); // 802111F8
  W8(c->r[28]+0x0000008Eu,c->r[31]); // 802111FC
  W32(c->r[28]+0x0000006Cu,c->r[31]); // 80211200
  W32(c->r[28]+0x00000070u,c->r[31]); // 80211204
  W32(c->r[28]+0x00000074u,c->r[31]); // 80211208
  W32(c->r[28]+0x00000078u,c->r[31]); // 8021120C
  W8(c->r[28]+0x0000008Fu,c->r[31]); // 80211210
  W8(c->r[28]+0x00000090u,c->r[31]); // 80211214
  W8(c->r[28]+0x00000097u,c->r[31]); // 80211218
L_8021121C:;
  c->r[3]=c->r[28]+c->r[30]; // 8021121C
  c->r[3]=c->r[3]+0x00000408u; // 80211220
  c->lr=0x80211228u; f_80243CB0(c); // 80211224
  c->r[3]=c->r[28]+c->r[30]; // 80211228
  c->r[3]=c->r[3]+0x000004C8u; // 8021122C
  c->lr=0x80211234u; f_80243CB0(c); // 80211230
  c->r[29]=c->r[29]+0x00000001u; // 80211234
  c->r[30]=c->r[30]+0x00000030u; // 80211238
  cmps(c,0,(int32_t)c->r[29],4); // 8021123C
  if (crb(c,0)) { IRQCHK(c); goto L_8021121C; } // 80211240
  c->r[3]=c->r[28]+0x00000588u; // 80211244
  c->lr=0x8021124Cu; f_80243CB0(c); // 80211248
  c->r[3]=0u+0x80490000u; // 8021124C
  c->r[3]=c->r[3]+0x00001978u; // 80211250
  c->lr=0x80211258u; f_8024B0A0(c); // 80211254
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80211258
  c->r[3]=c->r[28]|c->r[28]; // 8021125C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80211260
  c->r[29]=R32(c->r[1]+0x00000014u); // 80211264
  c->r[28]=R32(c->r[1]+0x00000010u); // 80211268
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021126C
  c->lr=c->r[0]; // 80211270
  c->r[1]=c->r[1]+0x00000020u; // 80211274
  return; // 80211278
}

// __dt__Q36nw4hbm3lyt19ArcResourceAccessorFv
void f_80211280(Ctx* __restrict c) {
  trace_call(0x80211280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211280
  c->r[0]=c->lr; // 80211284
  cmps(c,0,(int32_t)c->r[3],0); // 80211288
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021128C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80211290
  c->r[31]=c->r[4]|c->r[4]; // 80211294
  W32(c->r[1]+0x00000008u,c->r[30]); // 80211298
  c->r[30]=c->r[3]|c->r[3]; // 8021129C
  if (crb(c,2)) { goto L_802112D0; } // 802112A0
  c->r[3]=addc(c,c->r[3],0x00000024u,0); cr0(c,c->r[3]); // 802112A4
  if (crb(c,2)) { goto L_802112B4; } // 802112A8
  c->r[4]=0u+0x00000000u; // 802112AC
  c->lr=0x802112B4u; f_802268A0(c); // 802112B0
L_802112B4:;
  c->r[3]=c->r[30]|c->r[30]; // 802112B4
  c->r[4]=0u+0x00000000u; // 802112B8
  c->lr=0x802112C0u; f_80220EC0(c); // 802112BC
  cmps(c,0,(int32_t)c->r[31],0); // 802112C0
  if (!crb(c,1)) { goto L_802112D0; } // 802112C4
  c->r[3]=c->r[30]|c->r[30]; // 802112C8
  c->lr=0x802112D0u; f_800C2AC0(c); // 802112CC
L_802112D0:;
  c->r[3]=c->r[30]|c->r[30]; // 802112D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802112D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802112D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802112DC
  c->lr=c->r[0]; // 802112E0
  c->r[1]=c->r[1]+0x00000010u; // 802112E4
  return; // 802112E8
}

// createInstance__Q210homebutton10HomeButtonFPC11HBMDataInfo
void f_802112F0(Ctx* __restrict c) {
  trace_call(0x802112F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802112F0
  c->r[0]=c->lr; // 802112F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802112F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802112FC
  c->r[31]=c->r[3]|c->r[3]; // 80211300
  c->r[3]=0u+0x00000740u; // 80211304
  c->lr=0x8021130Cu; f_80210CA0(c); // 80211308
  cmps(c,0,(int32_t)c->r[3],0); // 8021130C
  if (crb(c,2)) { goto L_80211328; } // 80211310
  if (crb(c,2)) { goto L_80211320; } // 80211314
  c->r[4]=c->r[31]|c->r[31]; // 80211318
  c->lr=0x80211320u; f_80211170(c); // 8021131C
L_80211320:;
  c->r[4]=0u+0x80490000u; // 80211320
  W32(c->r[4]+0x00001970u,c->r[3]); // 80211324
L_80211328:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021132C
  c->lr=c->r[0]; // 80211330
  c->r[1]=c->r[1]+0x00000010u; // 80211334
  return; // 80211338
}

// getInstance__Q210homebutton10HomeButtonFv
void f_80211340(Ctx* __restrict c) {
  trace_call(0x80211340u);
  c->r[3]=0u+0x80490000u; // 80211340
  c->r[3]=R32(c->r[3]+0x00001970u); // 80211344
  return; // 80211348
}

// fn_80211350
void f_80211350(Ctx* __restrict c) {
  trace_call(0x80211350u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211350
  c->r[0]=c->lr; // 80211354
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80211358
  c->r[11]=c->r[1]+0x000000D0u; // 8021135C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80211360
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80211364
  c->lr=0x8021136Cu; f_800C2E34(c); // 80211368
  c->r[0]=0u+0x00000000u; // 8021136C
  c->r[27]=0u+0x80380000u; // 80211370
  c->r[28]=0u+0x803A0000u; // 80211374
  W8(c->r[3]+0x00000094u,c->r[0]); // 80211378
  c->r[31]=c->r[3]|c->r[3]; // 8021137C
  c->r[27]=c->r[27]+0xFFFFF480u; // 80211380
  W8(c->r[3]+0x00000095u,c->r[0]); // 80211384
  c->r[28]=c->r[28]+0x000068E8u; // 80211388
  W8(c->r[3]+0x00000096u,c->r[0]); // 8021138C
  c->lr=0x80211394u; f_80211C60(c); // 80211390
  c->r[3]=c->r[31]|c->r[31]; // 80211394
  c->lr=0x8021139Cu; f_80211DD0(c); // 80211398
  c->r[3]=0u+0x000000B0u; // 8021139C
  c->lr=0x802113A4u; f_80210CA0(c); // 802113A0
  cmps(c,0,(int32_t)c->r[3],0); // 802113A4
  if (crb(c,2)) { goto L_802113B8; } // 802113A8
  if (crb(c,2)) { goto L_802113B4; } // 802113AC
  c->lr=0x802113B4u; f_8021A380(c); // 802113B0
L_802113B4:;
  W32(c->r[31]+0x000001ECu,c->r[3]); // 802113B4
L_802113B8:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 802113B8
  c->r[5]=c->r[28]+0x00000B30u; // 802113BC
  c->r[3]=R32(c->r[31]+0x000001ECu); // 802113C0
  c->r[4]=R32(c->r[4]+0x00000000u); // 802113C4
  c->lr=0x802113CCu; f_8021A3E0(c); // 802113C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 802113CC
  c->r[0]=R32(c->r[3]+0x00000020u); // 802113D0
  cmps(c,0,(int32_t)c->r[0],0); // 802113D4
  if (!crb(c,2)) { goto L_80211454; } // 802113D8
  c->r[21]=c->r[31]|c->r[31]; // 802113DC
  c->r[22]=c->r[28]+0x00000040u; // 802113E0
  c->r[23]=0u+0x00000000u; // 802113E4
L_802113E8:;
  c->r[3]=0u+0x00000024u; // 802113E8
  c->lr=0x802113F0u; f_80210CA0(c); // 802113EC
  cmps(c,0,(int32_t)c->r[3],0); // 802113F0
  if (crb(c,2)) { goto L_80211404; } // 802113F4
  if (crb(c,2)) { goto L_80211400; } // 802113F8
  c->lr=0x80211400u; f_8021BAA0(c); // 802113FC
L_80211400:;
  W32(c->r[21]+0x000001DCu,c->r[3]); // 80211400
L_80211404:;
  c->r[3]=R32(c->r[31]+0x000001ECu); // 80211404
  c->r[4]=0u+0x00000000u; // 80211408
  c->r[5]=R32(c->r[22]+0x00000000u); // 8021140C
  c->r[6]=0u+0x00000000u; // 80211410
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211414
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211418
  c->ctr=c->r[12]; // 8021141C
  if (true) { c->lr=0x80211424u; dispatch(c,c->ctr); } // 80211420
  c->r[4]=c->r[3]|c->r[3]; // 80211424
  c->r[3]=R32(c->r[21]+0x000001DCu); // 80211428
  c->r[5]=R32(c->r[31]+0x000001ECu); // 8021142C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211430
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211434
  c->ctr=c->r[12]; // 80211438
  if (true) { c->lr=0x80211440u; dispatch(c,c->ctr); } // 8021143C
  c->r[23]=c->r[23]+0x00000001u; // 80211440
  c->r[22]=c->r[22]+0x00000004u; // 80211444
  cmps(c,0,(int32_t)c->r[23],4); // 80211448
  c->r[21]=c->r[21]+0x00000004u; // 8021144C
  if (crb(c,0)) { IRQCHK(c); goto L_802113E8; } // 80211450
L_80211454:;
  c->r[3]=0u+0x00000024u; // 80211454
  c->lr=0x8021145Cu; f_80210CA0(c); // 80211458
  cmps(c,0,(int32_t)c->r[3],0); // 8021145C
  if (crb(c,2)) { goto L_80211470; } // 80211460
  if (crb(c,2)) { goto L_8021146C; } // 80211464
  c->lr=0x8021146Cu; f_8021BAA0(c); // 80211468
L_8021146C:;
  W32(c->r[31]+0x000001D8u,c->r[3]); // 8021146C
L_80211470:;
  c->r[3]=R32(c->r[31]+0x000001ECu); // 80211470
  c->r[4]=0u+0x00000000u; // 80211474
  c->r[5]=R32(c->r[31]+0x000000B0u); // 80211478
  c->r[6]=0u+0x00000000u; // 8021147C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211480
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211484
  c->ctr=c->r[12]; // 80211488
  if (true) { c->lr=0x80211490u; dispatch(c,c->ctr); } // 8021148C
  c->r[4]=c->r[3]|c->r[3]; // 80211490
  c->r[3]=R32(c->r[31]+0x000001D8u); // 80211494
  c->r[5]=R32(c->r[31]+0x000001ECu); // 80211498
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021149C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802114A0
  c->ctr=c->r[12]; // 802114A4
  if (true) { c->lr=0x802114ACu; dispatch(c,c->ctr); } // 802114A8
  c->r[3]=R32(c->r[31]+0x000001D8u); // 802114AC
  {uint32_t ea=c->r[27]+0x000002DCu; c->f[31]=c->ps1[31]=RF32(ea);} // 802114B0
  c->r[3]=R32(c->r[3]+0x00000010u); // 802114B4
  c->r[24]=R32(c->r[3]+0x00000014u); // 802114B8
  c->r[21]=c->r[3]+0x00000014u; // 802114BC
  goto L_80211518; // 802114C0
L_802114C4:;
  c->r[22]=c->r[24]+0x000000B0u; // 802114C4
  c->r[4]=c->r[28]+0x00000B38u; // 802114C8
  c->r[3]=c->r[22]|c->r[22]; // 802114CC
  c->lr=0x802114D4u; f_800CA380(c); // 802114D0
  cmps(c,0,(int32_t)c->r[3],0); // 802114D4
  if (crb(c,2)) { goto L_80211504; } // 802114D8
  c->r[3]=c->r[22]|c->r[22]; // 802114DC
  c->r[4]=c->r[28]+0x00000B40u; // 802114E0
  c->lr=0x802114E8u; f_800CA380(c); // 802114E4
  cmps(c,0,(int32_t)c->r[3],0); // 802114E8
  if (crb(c,2)) { goto L_80211504; } // 802114EC
  c->r[3]=c->r[22]|c->r[22]; // 802114F0
  c->r[4]=c->r[28]+0x00000B48u; // 802114F4
  c->lr=0x802114FCu; f_800CA380(c); // 802114F8
  cmps(c,0,(int32_t)c->r[3],0); // 802114FC
  if (!crb(c,2)) { goto L_80211514; } // 80211500
L_80211504:;
  {uint32_t ea=c->r[24]+0x00000040u; WF32(ea,c->f[31]);} // 80211504
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80211508
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 8021150C
  {uint32_t ea=c->r[24]+0x00000044u; WF32(ea,c->f[31]);} // 80211510
L_80211514:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 80211514
L_80211518:;
  cmpu(c,0,c->r[24],c->r[21]); // 80211518
  if (!crb(c,2)) { IRQCHK(c); goto L_802114C4; } // 8021151C
  c->r[3]=R32(c->r[31]+0x000001D8u); // 80211520
  c->r[4]=c->r[28]+0x00000B50u; // 80211524
  {uint32_t ea=c->r[27]+0x000002DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80211528
  c->r[5]=0u+0x00000001u; // 8021152C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80211530
  {uint32_t ea=c->r[27]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211534
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211538
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8021153C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80211540
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80211544
  c->ctr=c->r[12]; // 80211548
  if (true) { c->lr=0x80211550u; dispatch(c,c->ctr); } // 8021154C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211550
  c->r[4]=c->r[28]+0x00000B5Cu; // 80211554
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80211558
  c->r[5]=0u+0x00000001u; // 8021155C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211560
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80211564
  {uint32_t ea=c->r[27]+0x000002DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80211568
  c->r[3]=R32(c->r[31]+0x000001D8u); // 8021156C
  {uint32_t ea=c->r[27]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211570
  c->r[3]=R32(c->r[3]+0x00000010u); // 80211574
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80211578
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021157C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80211580
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80211584
  c->ctr=c->r[12]; // 80211588
  if (true) { c->lr=0x80211590u; dispatch(c,c->ctr); } // 8021158C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211590
  c->r[26]=c->r[31]|c->r[31]; // 80211594
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80211598
  c->r[25]=c->r[27]+0x00000008u; // 8021159C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802115A0
  c->r[30]=c->r[28]+0x000001ACu; // 802115A4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 802115A8
  c->r[29]=c->r[28]+0x00000150u; // 802115AC
  {uint32_t ea=c->r[27]+0x000002E8u; c->f[31]=RF64(ea);} // 802115B0
  c->r[24]=0u+0x00000000u; // 802115B4
  c->r[21]=0u+0x43300000u; // 802115B8
  goto L_802116E8; // 802115BC
L_802115C0:;
  c->r[4]=R32(c->r[31]+0x000000B4u); // 802115C0
  c->r[3]=c->r[1]+0x00000058u; // 802115C4
  c->lr=0x802115CCu; f_800CA250(c); // 802115C8
  c->r[0]=R32(c->r[25]+0x00000004u); // 802115CC
  c->r[3]=c->r[1]+0x00000058u; // 802115D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802115D4
  c->r[4]=R32(c->r[30]+c->r[0]); // 802115D8
  c->lr=0x802115E0u; f_800CA354(c); // 802115DC
  c->r[3]=R32(c->r[31]+0x000001ECu); // 802115E0
  c->r[5]=c->r[1]+0x00000058u; // 802115E4
  c->r[4]=0u+0x00000000u; // 802115E8
  c->r[6]=0u+0x00000000u; // 802115EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802115F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802115F4
  c->ctr=c->r[12]; // 802115F8
  if (true) { c->lr=0x80211600u; dispatch(c,c->ctr); } // 802115FC
  c->r[22]=c->r[3]|c->r[3]; // 80211600
  c->r[3]=0u+0x00000028u; // 80211604
  c->lr=0x8021160Cu; f_80210CA0(c); // 80211608
  cmps(c,0,(int32_t)c->r[3],0); // 8021160C
  if (crb(c,2)) { goto L_80211620; } // 80211610
  if (crb(c,2)) { goto L_8021161C; } // 80211614
  c->lr=0x8021161Cu; f_8020D410(c); // 80211618
L_8021161C:;
  W32(c->r[26]+0x00000260u,c->r[3]); // 8021161C
L_80211620:;
  c->r[3]=R32(c->r[31]+0x000001D8u); // 80211620
  c->r[4]=c->r[22]|c->r[22]; // 80211624
  c->r[5]=R32(c->r[31]+0x000001ECu); // 80211628
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021162C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80211630
  c->ctr=c->r[12]; // 80211634
  if (true) { c->lr=0x8021163Cu; dispatch(c,c->ctr); } // 80211638
  c->r[4]=R32(c->r[26]+0x00000260u); // 8021163C
  c->r[0]=R32(c->r[25]+0x00000000u); // 80211640
  W32(c->r[4]+0x00000024u,c->r[3]); // 80211644
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80211648
  c->r[3]=R32(c->r[31]+0x000001D8u); // 8021164C
  c->r[4]=R32(c->r[29]+c->r[0]); // 80211650
  c->r[3]=R32(c->r[3]+0x00000014u); // 80211654
  c->lr=0x8021165Cu; f_8021B880(c); // 80211658
  c->r[4]=R32(c->r[26]+0x00000260u); // 8021165C
  W32(c->r[4]+0x00000020u,c->r[3]); // 80211660
  c->r[3]=R32(c->r[26]+0x00000260u); // 80211664
  c->r[3]=R32(c->r[3]+0x00000020u); // 80211668
  c->r[23]=R32(c->r[3]+0x00000010u); // 8021166C
  c->r[22]=c->r[3]+0x00000010u; // 80211670
  goto L_8021169C; // 80211674
L_80211678:;
  c->r[3]=R32(c->r[23]+0x00000008u); // 80211678
  c->r[5]=0u+0x00000000u; // 8021167C
  c->r[4]=R32(c->r[26]+0x00000260u); // 80211680
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211684
  c->r[4]=R32(c->r[4]+0x00000024u); // 80211688
  c->r[12]=R32(c->r[12]+0x00000044u); // 8021168C
  c->ctr=c->r[12]; // 80211690
  if (true) { c->lr=0x80211698u; dispatch(c,c->ctr); } // 80211694
  c->r[23]=R32(c->r[23]+0x00000000u); // 80211698
L_8021169C:;
  cmpu(c,0,c->r[23],c->r[22]); // 8021169C
  if (!crb(c,2)) { IRQCHK(c); goto L_80211678; } // 802116A0
  c->r[3]=R32(c->r[26]+0x00000260u); // 802116A4
  c->r[3]=R32(c->r[3]+0x00000024u); // 802116A8
  c->lr=0x802116B0u; f_80219860(c); // 802116AC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 802116B0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 802116B4
  c->r[5]=R32(c->r[31]+0x00000004u); // 802116B8
  c->r[4]=0u+0x00000000u; // 802116BC
  W32(c->r[1]+0x00000098u,c->r[21]); // 802116C0
  c->r[3]=R32(c->r[26]+0x00000260u); // 802116C4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 802116C8
  {uint32_t ea=c->r[27]+0x000002E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802116CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 802116D0
  {uint32_t ea=c->r[5]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 802116D4
  c->lr=0x802116DCu; f_8020D260(c); // 802116D8
  c->r[25]=c->r[25]+0x00000008u; // 802116DC
  c->r[26]=c->r[26]+0x00000004u; // 802116E0
  c->r[24]=c->r[24]+0x00000001u; // 802116E4
L_802116E8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802116E8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 802116EC
  if (crb(c,0)) { IRQCHK(c); goto L_802115C0; } // 802116F0
  {uint32_t ea=c->r[27]+0x000002E8u; c->f[31]=RF64(ea);} // 802116F4
  c->r[25]=c->r[31]|c->r[31]; // 802116F8
  c->r[26]=c->r[27]+0x00000068u; // 802116FC
  c->r[29]=c->r[28]+0x00000610u; // 80211700
  c->r[30]=c->r[28]+0x00000838u; // 80211704
  c->r[24]=0u+0x00000000u; // 80211708
  c->r[21]=0u+0x43300000u; // 8021170C
L_80211710:;
  c->r[4]=R32(c->r[31]+0x000000B4u); // 80211710
  c->r[3]=c->r[1]+0x00000058u; // 80211714
  c->lr=0x8021171Cu; f_800CA250(c); // 80211718
  c->r[0]=R32(c->r[26]+0x00000004u); // 8021171C
  c->r[3]=c->r[1]+0x00000058u; // 80211720
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80211724
  c->r[4]=R32(c->r[29]+c->r[0]); // 80211728
  c->lr=0x80211730u; f_800CA354(c); // 8021172C
  c->r[3]=R32(c->r[31]+0x000001ECu); // 80211730
  c->r[5]=c->r[1]+0x00000058u; // 80211734
  c->r[4]=0u+0x00000000u; // 80211738
  c->r[6]=0u+0x00000000u; // 8021173C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211740
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211744
  c->ctr=c->r[12]; // 80211748
  if (true) { c->lr=0x80211750u; dispatch(c,c->ctr); } // 8021174C
  c->r[22]=c->r[3]|c->r[3]; // 80211750
  c->r[3]=0u+0x00000028u; // 80211754
  c->lr=0x8021175Cu; f_80210CA0(c); // 80211758
  cmps(c,0,(int32_t)c->r[3],0); // 8021175C
  if (crb(c,2)) { goto L_80211770; } // 80211760
  if (crb(c,2)) { goto L_8021176C; } // 80211764
  c->lr=0x8021176Cu; f_8020D410(c); // 80211768
L_8021176C:;
  W32(c->r[25]+0x00000290u,c->r[3]); // 8021176C
L_80211770:;
  c->r[3]=R32(c->r[31]+0x000001D8u); // 80211770
  c->r[4]=c->r[22]|c->r[22]; // 80211774
  c->r[5]=R32(c->r[31]+0x000001ECu); // 80211778
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021177C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80211780
  c->ctr=c->r[12]; // 80211784
  if (true) { c->lr=0x8021178Cu; dispatch(c,c->ctr); } // 80211788
  c->r[4]=R32(c->r[25]+0x00000290u); // 8021178C
  c->r[0]=R32(c->r[26]+0x00000000u); // 80211790
  W32(c->r[4]+0x00000024u,c->r[3]); // 80211794
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80211798
  c->r[3]=R32(c->r[31]+0x000001D8u); // 8021179C
  c->r[4]=R32(c->r[30]+c->r[0]); // 802117A0
  c->r[3]=R32(c->r[3]+0x00000014u); // 802117A4
  c->lr=0x802117ACu; f_8021B880(c); // 802117A8
  c->r[4]=R32(c->r[25]+0x00000290u); // 802117AC
  W32(c->r[4]+0x00000020u,c->r[3]); // 802117B0
  c->r[3]=R32(c->r[25]+0x00000290u); // 802117B4
  c->r[3]=R32(c->r[3]+0x00000020u); // 802117B8
  c->r[22]=R32(c->r[3]+0x00000010u); // 802117BC
  c->r[23]=c->r[3]+0x00000010u; // 802117C0
  goto L_802117EC; // 802117C4
L_802117C8:;
  c->r[3]=R32(c->r[22]+0x00000008u); // 802117C8
  c->r[5]=0u+0x00000000u; // 802117CC
  c->r[4]=R32(c->r[25]+0x00000290u); // 802117D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802117D4
  c->r[4]=R32(c->r[4]+0x00000024u); // 802117D8
  c->r[12]=R32(c->r[12]+0x00000044u); // 802117DC
  c->ctr=c->r[12]; // 802117E0
  if (true) { c->lr=0x802117E8u; dispatch(c,c->ctr); } // 802117E4
  c->r[22]=R32(c->r[22]+0x00000000u); // 802117E8
L_802117EC:;
  cmpu(c,0,c->r[22],c->r[23]); // 802117EC
  if (!crb(c,2)) { IRQCHK(c); goto L_802117C8; } // 802117F0
  c->r[3]=R32(c->r[25]+0x00000290u); // 802117F4
  c->r[3]=R32(c->r[3]+0x00000024u); // 802117F8
  c->lr=0x80211800u; f_80219860(c); // 802117FC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80211800
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80211804
  c->r[5]=R32(c->r[31]+0x00000004u); // 80211808
  c->r[4]=0u+0x00000000u; // 8021180C
  W32(c->r[1]+0x00000098u,c->r[21]); // 80211810
  c->r[3]=R32(c->r[25]+0x00000290u); // 80211814
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80211818
  {uint32_t ea=c->r[27]+0x000002E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021181C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80211820
  {uint32_t ea=c->r[5]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 80211824
  c->lr=0x8021182Cu; f_8020D260(c); // 80211828
  c->r[24]=c->r[24]+0x00000001u; // 8021182C
  c->r[25]=c->r[25]+0x00000004u; // 80211830
  cmps(c,0,(int32_t)c->r[24],74); // 80211834
  c->r[26]=c->r[26]+0x00000008u; // 80211838
  if (crb(c,0)) { IRQCHK(c); goto L_80211710; } // 8021183C
  {uint32_t ea=c->r[27]+0x000002E8u; c->f[31]=RF64(ea);} // 80211840
  c->r[30]=c->r[31]|c->r[31]; // 80211844
  c->r[29]=c->r[28]+0x000002F0u; // 80211848
  c->r[26]=c->r[28]+0x00000400u; // 8021184C
  c->r[25]=0u+0x00000000u; // 80211850
  c->r[24]=0u+0x43300000u; // 80211854
L_80211858:;
  c->r[4]=R32(c->r[31]+0x000000B4u); // 80211858
  c->r[3]=c->r[1]+0x00000058u; // 8021185C
  c->lr=0x80211864u; f_800CA250(c); // 80211860
  c->r[4]=R32(c->r[29]+0x00000000u); // 80211864
  c->r[3]=c->r[1]+0x00000058u; // 80211868
  c->lr=0x80211870u; f_800CA354(c); // 8021186C
  c->r[3]=R32(c->r[31]+0x000001ECu); // 80211870
  c->r[5]=c->r[1]+0x00000058u; // 80211874
  c->r[4]=0u+0x00000000u; // 80211878
  c->r[6]=0u+0x00000000u; // 8021187C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211880
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211884
  c->ctr=c->r[12]; // 80211888
  if (true) { c->lr=0x80211890u; dispatch(c,c->ctr); } // 8021188C
  c->r[21]=c->r[3]|c->r[3]; // 80211890
  c->r[3]=0u+0x00000028u; // 80211894
  c->lr=0x8021189Cu; f_80210CA0(c); // 80211898
  cmps(c,0,(int32_t)c->r[3],0); // 8021189C
  if (crb(c,2)) { goto L_802118B0; } // 802118A0
  if (crb(c,2)) { goto L_802118AC; } // 802118A4
  c->lr=0x802118ACu; f_8020D410(c); // 802118A8
L_802118AC:;
  W32(c->r[30]+0x000003B8u,c->r[3]); // 802118AC
L_802118B0:;
  c->r[3]=R32(c->r[31]+0x000001D8u); // 802118B0
  c->r[4]=c->r[21]|c->r[21]; // 802118B4
  c->r[5]=R32(c->r[31]+0x000001ECu); // 802118B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802118BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802118C0
  c->ctr=c->r[12]; // 802118C4
  if (true) { c->lr=0x802118CCu; dispatch(c,c->ctr); } // 802118C8
  c->r[4]=R32(c->r[30]+0x000003B8u); // 802118CC
  W32(c->r[4]+0x00000024u,c->r[3]); // 802118D0
  c->r[3]=R32(c->r[31]+0x000001D8u); // 802118D4
  c->r[4]=R32(c->r[26]+0x00000000u); // 802118D8
  c->r[3]=R32(c->r[3]+0x00000014u); // 802118DC
  c->lr=0x802118E4u; f_8021B880(c); // 802118E0
  c->r[4]=R32(c->r[30]+0x000003B8u); // 802118E4
  W32(c->r[4]+0x00000020u,c->r[3]); // 802118E8
  c->r[3]=R32(c->r[30]+0x000003B8u); // 802118EC
  c->r[3]=R32(c->r[3]+0x00000020u); // 802118F0
  c->r[22]=R32(c->r[3]+0x00000010u); // 802118F4
  c->r[23]=c->r[3]+0x00000010u; // 802118F8
  goto L_80211924; // 802118FC
L_80211900:;
  c->r[3]=R32(c->r[22]+0x00000008u); // 80211900
  c->r[5]=0u+0x00000000u; // 80211904
  c->r[4]=R32(c->r[30]+0x000003B8u); // 80211908
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021190C
  c->r[4]=R32(c->r[4]+0x00000024u); // 80211910
  c->r[12]=R32(c->r[12]+0x00000044u); // 80211914
  c->ctr=c->r[12]; // 80211918
  if (true) { c->lr=0x80211920u; dispatch(c,c->ctr); } // 8021191C
  c->r[22]=R32(c->r[22]+0x00000000u); // 80211920
L_80211924:;
  cmpu(c,0,c->r[22],c->r[23]); // 80211924
  if (!crb(c,2)) { IRQCHK(c); goto L_80211900; } // 80211928
  c->r[3]=R32(c->r[30]+0x000003B8u); // 8021192C
  c->r[3]=R32(c->r[3]+0x00000024u); // 80211930
  c->lr=0x80211938u; f_80219860(c); // 80211934
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80211938
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8021193C
  c->r[5]=R32(c->r[31]+0x00000004u); // 80211940
  c->r[4]=0u+0x00000000u; // 80211944
  W32(c->r[1]+0x00000098u,c->r[24]); // 80211948
  c->r[3]=R32(c->r[30]+0x000003B8u); // 8021194C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80211950
  {uint32_t ea=c->r[27]+0x000002E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80211954
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80211958
  {uint32_t ea=c->r[5]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021195C
  c->lr=0x80211964u; f_8020D260(c); // 80211960
  c->r[25]=c->r[25]+0x00000001u; // 80211964
  c->r[30]=c->r[30]+0x00000004u; // 80211968
  cmps(c,0,(int32_t)c->r[25],15); // 8021196C
  c->r[26]=c->r[26]+0x00000004u; // 80211970
  c->r[29]=c->r[29]+0x00000004u; // 80211974
  if (crb(c,0)) { IRQCHK(c); goto L_80211858; } // 80211978
  c->r[3]=0u+0x0000000Cu; // 8021197C
  c->lr=0x80211984u; f_80210CA0(c); // 80211980
  cmps(c,0,(int32_t)c->r[3],0); // 80211984
  if (crb(c,2)) { goto L_802119A4; } // 80211988
  if (crb(c,2)) { goto L_802119A0; } // 8021198C
  c->r[4]=0u+0x803A0000u; // 80211990
  c->r[4]=c->r[4]+0x00007538u; // 80211994
  W32(c->r[3]+0x00000000u,c->r[4]); // 80211998
  W32(c->r[3]+0x00000008u,c->r[31]); // 8021199C
L_802119A0:;
  W32(c->r[31]+0x000001F4u,c->r[3]); // 802119A0
L_802119A4:;
  c->r[3]=0u+0x0000002Cu; // 802119A4
  c->lr=0x802119ACu; f_80210CA0(c); // 802119A8
  cmps(c,0,(int32_t)c->r[3],0); // 802119AC
  c->r[21]=c->r[3]|c->r[3]; // 802119B0
  if (crb(c,2)) { goto L_80211A2C; } // 802119B4
  if (crb(c,2)) { goto L_80211A28; } // 802119B8
  c->r[4]=0u+0x803A0000u; // 802119BC
  c->r[0]=R32(c->r[31]+0x000001F4u); // 802119C0
  c->r[5]=R32(c->r[4]+0x000068E4u); // 802119C4
  c->r[4]=0u+0x803A0000u; // 802119C8
  c->r[4]=c->r[4]+0x000063F0u; // 802119CC
  cmps(c,0,(int32_t)c->r[0],0); // 802119D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802119D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802119D8
  W32(c->r[3]+0x00000014u,c->r[5]); // 802119DC
  if (crb(c,2)) { goto L_802119FC; } // 802119E0
  c->r[3]=c->r[0]|c->r[0]; // 802119E4
  c->r[4]=c->r[21]|c->r[21]; // 802119E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802119EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802119F0
  c->ctr=c->r[12]; // 802119F4
  if (true) { c->lr=0x802119FCu; dispatch(c,c->ctr); } // 802119F8
L_802119FC:;
  c->r[3]=c->r[21]+0x00000008u; // 802119FC
  c->r[4]=0u+0x00000008u; // 80211A00
  c->lr=0x80211A08u; f_802269B0(c); // 80211A04
  c->r[3]=0u+0x803A0000u; // 80211A08
  c->r[0]=0u+0x00000000u; // 80211A0C
  c->r[3]=c->r[3]+0x00006350u; // 80211A10
  W32(c->r[21]+0x00000000u,c->r[3]); // 80211A14
  c->r[3]=c->r[21]+0x00000018u; // 80211A18
  c->r[4]=0u+0x00000008u; // 80211A1C
  W32(c->r[21]+0x00000024u,c->r[0]); // 80211A20
  c->lr=0x80211A28u; f_802269B0(c); // 80211A24
L_80211A28:;
  W32(c->r[31]+0x000001F0u,c->r[21]); // 80211A28
L_80211A2C:;
  c->r[3]=R32(c->r[31]+0x000001F0u); // 80211A2C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80211A30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211A34
  c->r[12]=R32(c->r[12]+0x00000040u); // 80211A38
  c->ctr=c->r[12]; // 80211A3C
  if (true) { c->lr=0x80211A44u; dispatch(c,c->ctr); } // 80211A40
  c->r[3]=0u+0x000001F8u; // 80211A44
  c->lr=0x80211A4Cu; f_80210CA0(c); // 80211A48
  cmps(c,0,(int32_t)c->r[3],0); // 80211A4C
  if (crb(c,2)) { goto L_80211A68; } // 80211A50
  if (crb(c,2)) { goto L_80211A64; } // 80211A54
  c->r[4]=R32(c->r[31]+0x00000004u); // 80211A58
  c->r[4]=R32(c->r[4]+0x00000004u); // 80211A5C
  c->lr=0x80211A64u; f_8020FB80(c); // 80211A60
L_80211A64:;
  W32(c->r[31]+0x0000025Cu,c->r[3]); // 80211A64
L_80211A68:;
  c->r[21]=c->r[31]|c->r[31]; // 80211A68
  c->r[22]=0u+0x00000000u; // 80211A6C
L_80211A70:;
  c->r[3]=0u+0x00000048u; // 80211A70
  c->lr=0x80211A78u; f_80210CA0(c); // 80211A74
  cmps(c,0,(int32_t)c->r[3],0); // 80211A78
  if (crb(c,2)) { goto L_80211A94; } // 80211A7C
  if (crb(c,2)) { goto L_80211A90; } // 80211A80
  c->r[5]=R32(c->r[31]+0x0000025Cu); // 80211A84
  c->r[4]=c->r[22]|c->r[22]; // 80211A88
  c->lr=0x80211A90u; f_8020EFB0(c); // 80211A8C
L_80211A90:;
  W32(c->r[21]+0x0000024Cu,c->r[3]); // 80211A90
L_80211A94:;
  c->r[22]=c->r[22]+0x00000001u; // 80211A94
  c->r[21]=c->r[21]+0x00000004u; // 80211A98
  cmps(c,0,(int32_t)c->r[22],4); // 80211A9C
  if (crb(c,0)) { IRQCHK(c); goto L_80211A70; } // 80211AA0
  c->r[3]=R32(c->r[31]+0x000001F0u); // 80211AA4
  c->r[4]=c->r[31]+0x000001F8u; // 80211AA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211AAC
  c->r[12]=R32(c->r[12]+0x00000054u); // 80211AB0
  c->ctr=c->r[12]; // 80211AB4
  if (true) { c->lr=0x80211ABCu; dispatch(c,c->ctr); } // 80211AB8
  c->r[4]=R32(c->r[31]+0x00000004u); // 80211ABC
  c->r[3]=c->r[1]+0x00000028u; // 80211AC0
  {uint32_t ea=c->r[27]+0x000002E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211AC4
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211AC8
  c->r[4]=R8(c->r[31]+0x0000008Fu); // 80211ACC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80211AD0
  c->r[0]=R8(c->r[31]+0x00000248u); // 80211AD4
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80211AD8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80211ADC
  {uint32_t ea=c->r[31]+0x00000240u; WF32(ea,c->f[1]);} // 80211AE0
  W8(c->r[31]+0x00000248u,c->r[0]); // 80211AE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80211AE8
  {uint32_t ea=c->r[31]+0x0000023Cu; WF32(ea,c->f[0]);} // 80211AEC
  c->lr=0x80211AF4u; f_8023EF10(c); // 80211AF0
  c->r[3]=R32(c->r[1]+0x00000028u); // 80211AF4
  c->r[27]=0u+0x80490000u; // 80211AF8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80211AFC
  c->r[29]=c->r[28]+0x000009E4u; // 80211B00
  W32(c->r[31]+0x00000200u,c->r[0]); // 80211B04
  c->r[27]=c->r[27]+0x00001A38u; // 80211B08
  c->r[28]=0u+0x00000000u; // 80211B0C
  c->r[30]=0u+0x00000000u; // 80211B10
  W32(c->r[31]+0x000001FCu,c->r[3]); // 80211B14
  c->r[3]=R32(c->r[1]+0x00000030u); // 80211B18
  c->r[0]=R32(c->r[1]+0x00000034u); // 80211B1C
  W32(c->r[31]+0x00000208u,c->r[0]); // 80211B20
  W32(c->r[31]+0x00000204u,c->r[3]); // 80211B24
  c->r[3]=R32(c->r[1]+0x00000038u); // 80211B28
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80211B2C
  W32(c->r[31]+0x00000210u,c->r[0]); // 80211B30
  W32(c->r[31]+0x0000020Cu,c->r[3]); // 80211B34
  c->r[3]=R32(c->r[1]+0x00000040u); // 80211B38
  c->r[0]=R32(c->r[1]+0x00000044u); // 80211B3C
  W32(c->r[31]+0x00000218u,c->r[0]); // 80211B40
  W32(c->r[31]+0x00000214u,c->r[3]); // 80211B44
  c->r[3]=R32(c->r[1]+0x00000048u); // 80211B48
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80211B4C
  W32(c->r[31]+0x00000220u,c->r[0]); // 80211B50
  W32(c->r[31]+0x0000021Cu,c->r[3]); // 80211B54
  c->r[3]=R32(c->r[1]+0x00000050u); // 80211B58
  c->r[0]=R32(c->r[1]+0x00000054u); // 80211B5C
  W32(c->r[31]+0x00000228u,c->r[0]); // 80211B60
  W32(c->r[31]+0x00000224u,c->r[3]); // 80211B64
L_80211B68:;
  c->r[3]=R32(c->r[31]+0x000001D8u); // 80211B68
  c->r[5]=0u+0x00000001u; // 80211B6C
  c->r[4]=R32(c->r[29]+0x00000000u); // 80211B70
  c->r[3]=R32(c->r[3]+0x00000010u); // 80211B74
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211B78
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80211B7C
  c->ctr=c->r[12]; // 80211B80
  if (true) { c->lr=0x80211B88u; dispatch(c,c->ctr); } // 80211B84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211B88
  c->r[21]=c->r[3]|c->r[3]; // 80211B8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211B90
  c->ctr=c->r[12]; // 80211B94
  if (true) { c->lr=0x80211B9Cu; dispatch(c,c->ctr); } // 80211B98
  goto L_80211BB4; // 80211B9C
L_80211BA0:;
  cmpu(c,0,c->r[3],c->r[27]); // 80211BA0
  if (!crb(c,2)) { goto L_80211BB0; } // 80211BA4
  c->r[0]=0u+0x00000001u; // 80211BA8
  goto L_80211BC0; // 80211BAC
L_80211BB0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80211BB0
L_80211BB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80211BB4
  if (!crb(c,2)) { IRQCHK(c); goto L_80211BA0; } // 80211BB8
  c->r[0]=0u+0x00000000u; // 80211BBC
L_80211BC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80211BC0
  if (crb(c,2)) { goto L_80211BCC; } // 80211BC4
  goto L_80211BD0; // 80211BC8
L_80211BCC:;
  c->r[21]=0u+0x00000000u; // 80211BCC
L_80211BD0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80211BD0
  c->r[0]=c->r[30]+c->r[31]; // 80211BD4
  c->r[5]=0u+0x00000000u; // 80211BD8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80211BDC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 80211BE0
  c->r[3]=c->r[3]+c->r[0]; // 80211BE4
  c->r[4]=R32(c->r[3]+0x000000BCu); // 80211BE8
  c->r[3]=c->r[4]|c->r[4]; // 80211BEC
L_80211BF0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 80211BF0
  cmpu(c,0,c->r[0],0x00000022u); // 80211BF4
  if (crb(c,2)) { goto L_80211C08; } // 80211BF8
  c->r[3]=c->r[3]+0x00000002u; // 80211BFC
  c->r[5]=c->r[5]+0x00000001u; // 80211C00
  IRQCHK(c); goto L_80211BF0; // 80211C04
L_80211C08:;
  c->r[12]=R32(c->r[21]+0x00000000u); // 80211C08
  c->r[6]=rotl(c->r[5],0)&0x0000FFFFu; // 80211C0C
  c->r[3]=c->r[21]|c->r[21]; // 80211C10
  c->r[5]=0u+0x00000000u; // 80211C14
  c->r[12]=R32(c->r[12]+0x00000070u); // 80211C18
  c->ctr=c->r[12]; // 80211C1C
  if (true) { c->lr=0x80211C24u; dispatch(c,c->ctr); } // 80211C20
  c->r[28]=c->r[28]+0x00000001u; // 80211C24
  c->r[30]=c->r[30]+0x00000004u; // 80211C28
  cmps(c,0,(int32_t)c->r[28],3); // 80211C2C
  c->r[29]=c->r[29]+0x00000004u; // 80211C30
  if (crb(c,0)) { IRQCHK(c); goto L_80211B68; } // 80211C34
  c->r[11]=c->r[1]+0x000000D0u; // 80211C38
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80211C3C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80211C40
  c->lr=0x80211C48u; f_800C2E80(c); // 80211C44
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80211C48
  c->lr=c->r[0]; // 80211C4C
  c->r[1]=c->r[1]+0x000000E0u; // 80211C50
  return; // 80211C54
}

// fn_80211C60
void f_80211C60(Ctx* __restrict c) {
  trace_call(0x80211C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211C60
  c->r[0]=c->lr; // 80211C64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80211C68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80211C6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80211C70
  W32(c->r[1]+0x00000014u,c->r[29]); // 80211C74
  c->r[29]=c->r[3]|c->r[3]; // 80211C78
  W32(c->r[1]+0x00000010u,c->r[28]); // 80211C7C
  c->r[28]=0u+0x00000000u; // 80211C80
  c->r[4]=R32(c->r[3]+0x00000004u); // 80211C84
  c->r[31]=R32(c->r[4]+0x0000000Cu); // 80211C88
  c->r[0]=R32(c->r[4]+0x00000028u); // 80211C8C
  c->r[3]=c->r[31]|c->r[31]; // 80211C90
  c->r[30]=c->r[31]+c->r[0]; // 80211C94
  goto L_80211CB4; // 80211C98
  c->r[0]=c->r[0]|0x00000000u; // 80211C9C
L_80211CA0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80211CA0
  cmps(c,0,(int32_t)c->r[0],44); // 80211CA4
  if (crb(c,2)) { goto L_80211CC0; } // 80211CA8
  c->r[28]=c->r[28]+0x00000001u; // 80211CAC
  c->r[3]=c->r[3]+0x00000001u; // 80211CB0
L_80211CB4:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 80211CB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 80211CB8
  if (!crb(c,2)) { IRQCHK(c); goto L_80211CA0; } // 80211CBC
L_80211CC0:;
  c->r[3]=c->r[28]+0x00000001u; // 80211CC0
  c->lr=0x80211CC8u; f_80210CA0(c); // 80211CC4
  W32(c->r[29]+0x000000B0u,c->r[3]); // 80211CC8
  c->r[4]=c->r[31]|c->r[31]; // 80211CCC
  c->r[5]=c->r[28]|c->r[28]; // 80211CD0
  c->lr=0x80211CD8u; f_800CA310(c); // 80211CD4
  c->r[4]=R32(c->r[29]+0x000000B0u); // 80211CD8
  c->r[3]=c->r[28]+c->r[31]; // 80211CDC
  c->r[31]=c->r[3]+0x00000001u; // 80211CE0
  c->r[0]=0u+0x00000000u; // 80211CE4
  W8(c->r[4]+c->r[28],c->r[0]); // 80211CE8
  c->r[3]=c->r[31]|c->r[31]; // 80211CEC
  c->r[28]=0u+0x00000000u; // 80211CF0
  goto L_80211D0C; // 80211CF4
L_80211CF8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80211CF8
  cmps(c,0,(int32_t)c->r[0],44); // 80211CFC
  if (crb(c,2)) { goto L_80211D18; } // 80211D00
  c->r[28]=c->r[28]+0x00000001u; // 80211D04
  c->r[3]=c->r[3]+0x00000001u; // 80211D08
L_80211D0C:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 80211D0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 80211D10
  if (!crb(c,2)) { IRQCHK(c); goto L_80211CF8; } // 80211D14
L_80211D18:;
  c->r[3]=c->r[28]+0x00000001u; // 80211D18
  c->lr=0x80211D20u; f_80210CA0(c); // 80211D1C
  W32(c->r[29]+0x000000B4u,c->r[3]); // 80211D20
  c->r[4]=c->r[31]|c->r[31]; // 80211D24
  c->r[5]=c->r[28]|c->r[28]; // 80211D28
  c->lr=0x80211D30u; f_800CA310(c); // 80211D2C
  c->r[3]=R32(c->r[29]+0x000000B4u); // 80211D30
  c->r[4]=0u+0x00000000u; // 80211D34
  c->r[5]=c->r[29]|c->r[29]; // 80211D38
  c->r[31]=c->r[31]+c->r[28]; // 80211D3C
  W8(c->r[3]+c->r[28],c->r[4]); // 80211D40
  c->r[8]=0u+0x00000000u; // 80211D44
  c->r[9]=0u+0x00000000u; // 80211D48
  c->r[3]=0u+0x00000001u; // 80211D4C
  goto L_80211D88; // 80211D50
  c->r[0]=c->r[0]|0x00000000u; // 80211D54
L_80211D58:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80211D58
  cmps(c,0,(int32_t)c->r[0],44); // 80211D5C
  if (!crb(c,2)) { goto L_80211D84; } // 80211D60
  c->r[0]=R8(c->r[6]+0x00000001u); // 80211D64
  cmps(c,0,(int32_t)c->r[0],49); // 80211D68
  if (!crb(c,2)) { goto L_80211D78; } // 80211D6C
  W32(c->r[5]+0x000000A0u,c->r[3]); // 80211D70
  goto L_80211D7C; // 80211D74
L_80211D78:;
  W32(c->r[5]+0x000000A0u,c->r[4]); // 80211D78
L_80211D7C:;
  c->r[5]=c->r[5]+0x00000004u; // 80211D7C
  c->r[9]=c->r[9]+0x00000001u; // 80211D80
L_80211D84:;
  c->r[8]=c->r[8]+0x00000001u; // 80211D84
L_80211D88:;
  c->r[7]=R8(c->r[31]+c->r[8]); // 80211D88
  c->r[6]=c->r[31]+c->r[8]; // 80211D8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80211D90
  if (crb(c,2)) { goto L_80211DA0; } // 80211D94
  cmpu(c,0,c->r[6],c->r[30]); // 80211D98
  if (crb(c,0)) { IRQCHK(c); goto L_80211D58; } // 80211D9C
L_80211DA0:;
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80211DA0
  W32(c->r[29]+0x0000000Cu,c->r[9]); // 80211DA4
  c->r[0]=c->r[0]-c->r[9]; // 80211DA8
  W32(c->r[29]+0x00000010u,c->r[0]); // 80211DAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80211DB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80211DB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80211DB8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80211DBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80211DC0
  c->lr=c->r[0]; // 80211DC4
  c->r[1]=c->r[1]+0x00000020u; // 80211DC8
  return; // 80211DCC
}

// fn_80211DD0
void f_80211DD0(Ctx* __restrict c) {
  trace_call(0x80211DD0u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 80211DD0
  c->r[8]=0u+0x00000000u; // 80211DD4
  c->r[9]=0u+0x00000000u; // 80211DD8
  c->r[10]=0u+0x00000000u; // 80211DDC
  c->r[11]=R32(c->r[4]+0x00000008u); // 80211DE0
  c->r[7]=0u+0x00000000u; // 80211DE4
  c->r[6]=c->r[11]|c->r[11]; // 80211DE8
  goto L_80211E44; // 80211DEC
L_80211DF0:;
  cmpu(c,0,c->r[0],0x00000022u); // 80211DF0
  if (!crb(c,2)) { goto L_80211E3C; } // 80211DF4
  cmps(c,0,(int32_t)c->r[10],0); // 80211DF8
  if (!crb(c,2)) { goto L_80211E38; } // 80211DFC
  c->r[4]=(uint32_t)((int32_t)c->r[9]*(int32_t)24); // 80211E00
  c->r[5]=c->r[8]+0x00000001u; // 80211E04
  c->r[0]=c->r[7]+c->r[3]; // 80211E08
  c->r[9]=c->r[9]+0x00000001u; // 80211E0C
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80211E10
  c->r[10]=0u+0x00000001u; // 80211E14
  c->r[4]=c->r[4]+c->r[0]; // 80211E18
  cmps(c,0,(int32_t)c->r[9],10); // 80211E1C
  c->r[0]=c->r[11]+c->r[5]; // 80211E20
  W32(c->r[4]+0x000000BCu,c->r[0]); // 80211E24
  if (!crb(c,2)) { goto L_80211E3C; } // 80211E28
  c->r[9]=0u+0x00000000u; // 80211E2C
  c->r[7]=c->r[7]+0x00000004u; // 80211E30
  goto L_80211E3C; // 80211E34
L_80211E38:;
  c->r[10]=0u+0x00000000u; // 80211E38
L_80211E3C:;
  c->r[6]=c->r[6]+0x00000002u; // 80211E3C
  c->r[8]=c->r[8]+0x00000001u; // 80211E40
L_80211E44:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 80211E44
  cmps(c,0,(int32_t)c->r[0],0); // 80211E48
  if (!crb(c,2)) { IRQCHK(c); goto L_80211DF0; } // 80211E4C
  return; // 80211E50
}

// init__Q210homebutton10HomeButtonFv
void f_80211E60(Ctx* __restrict c) {
  trace_call(0x80211E60u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211E60
  c->r[0]=c->lr; // 80211E64
  W32(c->r[1]+0x00000084u,c->r[0]); // 80211E68
  c->r[11]=c->r[1]+0x00000060u; // 80211E6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80211E70
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80211E74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 80211E78
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 80211E7C
  c->lr=0x80211E84u; f_800C2E48(c); // 80211E80
  c->r[0]=R8(c->r[3]+0x00000094u); // 80211E84
  c->r[30]=0u+0x80380000u; // 80211E88
  c->r[31]=0u+0x803A0000u; // 80211E8C
  c->r[29]=c->r[3]|c->r[3]; // 80211E90
  cmps(c,0,(int32_t)c->r[0],0); // 80211E94
  c->r[30]=c->r[30]+0xFFFFF480u; // 80211E98
  c->r[31]=c->r[31]+0x000068E8u; // 80211E9C
  if (!crb(c,2)) { goto L_8021233C; } // 80211EA0
  c->r[0]=0u+0x00000001u; // 80211EA4
  W8(c->r[3]+0x00000094u,c->r[0]); // 80211EA8
  W16(c->r[3]+0x000005CAu,c->r[0]); // 80211EAC
  c->lr=0x80211EB4u; f_80262F80(c); // 80211EB0
  c->r[28]=0u+0x00000000u; // 80211EB4
  W8(c->r[29]+0x00000095u,c->r[28]); // 80211EB8
  c->r[4]=0u+0x80490000u; // 80211EBC
  c->r[0]=R8(c->r[29]+0x00000097u); // 80211EC0
  W8(c->r[29]+0x00000096u,c->r[28]); // 80211EC4
  {uint32_t ea=c->r[30]+0x000002F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80211EC8
  cmps(c,0,(int32_t)c->r[0],0); // 80211ECC
  W8(c->r[29]+0x0000009Au,c->r[28]); // 80211ED0
  {uint32_t ea=c->r[30]+0x000002F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211ED4
  W8(c->r[29]+0x00000098u,c->r[28]); // 80211ED8
  W32(c->r[29]+0x000001ACu,c->r[28]); // 80211EDC
  c->r[3]=R32(c->r[4]+0x00001970u); // 80211EE0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80211EE4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211EE8
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 80211EEC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80211EF0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80211EF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80211EF8
  W32(c->r[29]+0x000005BCu,c->r[0]); // 80211EFC
  c->r[3]=R32(c->r[4]+0x00001970u); // 80211F00
  c->r[3]=R32(c->r[3]+0x00000004u); // 80211F04
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211F08
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80211F0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80211F10
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 80211F14
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80211F18
  W32(c->r[29]+0x000005C0u,c->r[0]); // 80211F1C
  if (crb(c,2)) { goto L_80211F60; } // 80211F20
  c->r[3]=c->r[29]+0x000005D4u; // 80211F24
  c->lr=0x80211F2Cu; f_801C7AF0(c); // 80211F28
  c->r[3]=R32(c->r[29]+0x00000734u); // 80211F2C
  c->r[4]=R32(c->r[29]+0x00000738u); // 80211F30
  c->lr=0x80211F38u; f_801C4DB0(c); // 80211F34
  c->r[3]=R32(c->r[29]+0x000005CCu); // 80211F38
  c->r[4]=R32(c->r[29]+0x000005D0u); // 80211F3C
  c->lr=0x80211F44u; f_801CA540(c); // 80211F40
  c->r[3]=R16(c->r[29]+0x000005C4u); // 80211F44
  c->lr=0x80211F4Cu; f_801C59D0(c); // 80211F48
  c->r[3]=R16(c->r[29]+0x000005C6u); // 80211F4C
  c->lr=0x80211F54u; f_801C59E0(c); // 80211F50
  c->r[3]=R16(c->r[29]+0x000005C8u); // 80211F54
  c->lr=0x80211F5Cu; f_801C59F0(c); // 80211F58
  W8(c->r[29]+0x00000097u,c->r[28]); // 80211F5C
L_80211F60:;
  c->r[0]=0u+0x00000000u; // 80211F60
  W32(c->r[29]+0x00000020u,c->r[0]); // 80211F64
  W32(c->r[29]+0x00000024u,c->r[0]); // 80211F68
  W32(c->r[29]+0x00000028u,c->r[0]); // 80211F6C
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 80211F70
  W32(c->r[29]+0x00000030u,c->r[0]); // 80211F74
  W32(c->r[29]+0x00000034u,c->r[0]); // 80211F78
  W32(c->r[29]+0x00000038u,c->r[0]); // 80211F7C
  W32(c->r[29]+0x0000003Cu,c->r[0]); // 80211F80
  W32(c->r[29]+0x00000040u,c->r[0]); // 80211F84
  W32(c->r[29]+0x00000044u,c->r[0]); // 80211F88
  W32(c->r[29]+0x00000048u,c->r[0]); // 80211F8C
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 80211F90
  W32(c->r[29]+0x00000050u,c->r[0]); // 80211F94
  W32(c->r[29]+0x00000054u,c->r[0]); // 80211F98
  W32(c->r[29]+0x00000014u,c->r[0]); // 80211F9C
  c->r[3]=R32(c->r[29]+0x000001F0u); // 80211FA0
  W32(c->r[29]+0x00000000u,c->r[0]); // 80211FA4
  W8(c->r[29]+0x00000090u,c->r[0]); // 80211FA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211FAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211FB0
  c->ctr=c->r[12]; // 80211FB4
  if (true) { c->lr=0x80211FBCu; dispatch(c,c->ctr); } // 80211FB8
  c->r[3]=R32(c->r[29]+0x000001F0u); // 80211FBC
  c->r[4]=0u+0x00000000u; // 80211FC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211FC4
  c->r[12]=R32(c->r[12]+0x00000038u); // 80211FC8
  c->ctr=c->r[12]; // 80211FCC
  if (true) { c->lr=0x80211FD4u; dispatch(c,c->ctr); } // 80211FD0
  c->r[27]=c->r[31]+0x00000098u; // 80211FD4
  c->r[26]=0u+0x00000000u; // 80211FD8
  goto L_80212034; // 80211FDC
L_80211FE0:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80211FE0
  c->r[5]=0u+0x00000001u; // 80211FE4
  c->r[4]=R32(c->r[27]+0x00000000u); // 80211FE8
  c->r[3]=R32(c->r[3]+0x00000010u); // 80211FEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211FF0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80211FF4
  c->ctr=c->r[12]; // 80211FF8
  if (true) { c->lr=0x80212000u; dispatch(c,c->ctr); } // 80211FFC
  c->r[4]=c->r[3]|c->r[3]; // 80212000
  c->r[3]=R32(c->r[29]+0x000001F0u); // 80212004
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212008
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8021200C
  c->ctr=c->r[12]; // 80212010
  if (true) { c->lr=0x80212018u; dispatch(c,c->ctr); } // 80212014
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212018
  c->r[4]=0u+0x00000001u; // 8021201C
  c->r[12]=R32(c->r[12]+0x00000050u); // 80212020
  c->ctr=c->r[12]; // 80212024
  if (true) { c->lr=0x8021202Cu; dispatch(c,c->ctr); } // 80212028
  c->r[27]=c->r[27]+0x00000004u; // 8021202C
  c->r[26]=c->r[26]+0x00000001u; // 80212030
L_80212034:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80212034
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80212038
  if (crb(c,0)) { IRQCHK(c); goto L_80211FE0; } // 8021203C
  c->r[3]=c->r[29]|c->r[29]; // 80212040
  c->lr=0x80212048u; f_80215FD0(c); // 80212044
  c->r[4]=R32(c->r[29]+0x000001D8u); // 80212048
  c->r[3]=c->r[1]+0x00000020u; // 8021204C
  c->lr=0x80212054u; f_8021C180(c); // 80212050
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212054
  c->r[4]=c->r[29]+0x000001F8u; // 80212058
  {uint32_t ea=c->r[29]+0x0000022Cu; WF32(ea,c->f[0]);} // 8021205C
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80212060
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212064
  {uint32_t ea=c->r[29]+0x00000230u; WF32(ea,c->f[0]);} // 80212068
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021206C
  {uint32_t ea=c->r[29]+0x00000234u; WF32(ea,c->f[0]);} // 80212070
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80212074
  {uint32_t ea=c->r[29]+0x00000238u; WF32(ea,c->f[0]);} // 80212078
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021207C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80212080
  c->ctr=c->r[12]; // 80212084
  if (true) { c->lr=0x8021208Cu; dispatch(c,c->ctr); } // 80212088
  {uint32_t ea=c->r[30]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021208C
  c->r[27]=c->r[29]|c->r[29]; // 80212090
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80212094
  c->r[26]=0u+0x00000000u; // 80212098
  c->f[30]=c->ps1[30]=S(c->f[0]); // 8021209C
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 802120A0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802120A4
L_802120A8:;
  c->r[3]=R32(c->r[27]+0x000001DCu); // 802120A8
  c->r[4]=c->r[29]+0x000001F8u; // 802120AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802120B0
  c->r[12]=R32(c->r[12]+0x00000024u); // 802120B4
  c->ctr=c->r[12]; // 802120B8
  if (true) { c->lr=0x802120C0u; dispatch(c,c->ctr); } // 802120BC
  c->r[3]=R32(c->r[27]+0x000001DCu); // 802120C0
  c->r[5]=0u+0x00000001u; // 802120C4
  c->r[4]=R32(c->r[31]+0x00000058u); // 802120C8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802120CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802120D0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802120D4
  c->ctr=c->r[12]; // 802120D8
  if (true) { c->lr=0x802120E0u; dispatch(c,c->ctr); } // 802120DC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[30]);} // 802120E0
  c->r[26]=c->r[26]+0x00000001u; // 802120E4
  cmps(c,0,(int32_t)c->r[26],4); // 802120E8
  c->r[27]=c->r[27]+0x00000004u; // 802120EC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[30]);} // 802120F0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[30]);} // 802120F4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[30]);} // 802120F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 802120FC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[31]);} // 80212100
  if (crb(c,0)) { IRQCHK(c); goto L_802120A8; } // 80212104
  c->r[28]=0u+0x00000000u; // 80212108
L_8021210C:;
  c->r[3]=R32(c->r[29]+0x000001F0u); // 8021210C
  c->r[4]=c->r[28]|c->r[28]; // 80212110
  {uint32_t ea=c->r[30]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80212114
  c->r[5]=0u+0x00000000u; // 80212118
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021211C
  c->r[6]=0u+0x00000000u; // 80212120
  c->f[2]=c->f[1]; // 80212124
  c->r[7]=0u+0x00000000u; // 80212128
  c->r[12]=R32(c->r[12]+0x00000030u); // 8021212C
  c->r[8]=0u+0x00000000u; // 80212130
  c->ctr=c->r[12]; // 80212134
  if (true) { c->lr=0x8021213Cu; dispatch(c,c->ctr); } // 80212138
  c->r[28]=c->r[28]+0x00000001u; // 8021213C
  cmps(c,0,(int32_t)c->r[28],8); // 80212140
  if (crb(c,0)) { IRQCHK(c); goto L_8021210C; } // 80212144
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80212148
  c->r[27]=c->r[29]|c->r[29]; // 8021214C
  c->r[26]=0u+0x00000000u; // 80212150
  c->r[28]=0u+0x00000000u; // 80212154
L_80212158:;
  W32(c->r[27]+0x00000058u,c->r[28]); // 80212158
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 8021215C
  c->lr=0x80212164u; f_8020F350(c); // 80212160
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80212164
  c->lr=0x8021216Cu; f_8020F330(c); // 80212168
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 8021216C
  c->lr=0x80212174u; f_8020F380(c); // 80212170
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80212174
  c->lr=0x8021217Cu; f_8020F8C0(c); // 80212178
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 8021217C
  c->lr=0x80212184u; f_8020F070(c); // 80212180
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80212184
  c->lr=0x8021218Cu; f_8020F4A0(c); // 80212188
  c->r[26]=c->r[26]+0x00000001u; // 8021218C
  {uint32_t ea=c->r[27]+0x000001B0u; WF32(ea,c->f[31]);} // 80212190
  cmps(c,0,(int32_t)c->r[26],4); // 80212194
  {uint32_t ea=c->r[27]+0x000001C0u; WF32(ea,c->f[31]);} // 80212198
  c->r[27]=c->r[27]+0x00000004u; // 8021219C
  if (crb(c,0)) { IRQCHK(c); goto L_80212158; } // 802121A0
  c->r[3]=R32(c->r[29]+0x000001D8u); // 802121A4
  c->r[5]=0u+0x00000001u; // 802121A8
  c->r[4]=R32(c->r[31]+0x00000900u); // 802121AC
  c->r[3]=R32(c->r[3]+0x00000010u); // 802121B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802121B4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802121B8
  c->ctr=c->r[12]; // 802121BC
  if (true) { c->lr=0x802121C4u; dispatch(c,c->ctr); } // 802121C0
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802121C4
  c->r[4]=c->r[31]+0x00000B68u; // 802121C8
  c->r[5]=0u+0x00000001u; // 802121CC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802121D0
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802121D4
  c->r[3]=R32(c->r[29]+0x000001D8u); // 802121D8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802121DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802121E0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802121E4
  c->ctr=c->r[12]; // 802121E8
  if (true) { c->lr=0x802121F0u; dispatch(c,c->ctr); } // 802121EC
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802121F0
  c->r[4]=c->r[31]+0x00000B74u; // 802121F4
  c->r[5]=0u+0x00000001u; // 802121F8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802121FC
  c->r[0]=c->r[0]|0x00000001u; // 80212200
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212204
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80212208
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021220C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212210
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212214
  c->ctr=c->r[12]; // 80212218
  if (true) { c->lr=0x80212220u; dispatch(c,c->ctr); } // 8021221C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212220
  c->r[4]=c->r[31]+0x00000B7Cu; // 80212224
  c->r[5]=0u+0x00000001u; // 80212228
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8021222C
  c->r[0]=c->r[0]|0x00000001u; // 80212230
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212234
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80212238
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021223C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212240
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212244
  c->ctr=c->r[12]; // 80212248
  if (true) { c->lr=0x80212250u; dispatch(c,c->ctr); } // 8021224C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212250
  c->r[4]=c->r[31]+0x00000998u; // 80212254
  c->r[28]=c->r[4]+0x00000008u; // 80212258
  c->r[27]=0u+0x00000002u; // 8021225C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212260
  c->r[0]=c->r[0]|0x00000001u; // 80212264
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212268
L_8021226C:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 8021226C
  c->r[5]=0u+0x00000001u; // 80212270
  c->r[4]=R32(c->r[28]+0x00000000u); // 80212274
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212278
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021227C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212280
  c->ctr=c->r[12]; // 80212284
  if (true) { c->lr=0x8021228Cu; dispatch(c,c->ctr); } // 80212288
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8021228C
  c->r[27]=c->r[27]+0x00000001u; // 80212290
  cmps(c,0,(int32_t)c->r[27],7); // 80212294
  c->r[28]=c->r[28]+0x00000004u; // 80212298
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8021229C
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802122A0
  if (crb(c,0)) { IRQCHK(c); goto L_8021226C; } // 802122A4
  c->r[28]=c->r[31]+0x000009E4u; // 802122A8
  c->r[27]=0u+0x00000000u; // 802122AC
L_802122B0:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 802122B0
  c->r[5]=0u+0x00000001u; // 802122B4
  c->r[4]=R32(c->r[28]+0x00000000u); // 802122B8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802122BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802122C0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802122C4
  c->ctr=c->r[12]; // 802122C8
  if (true) { c->lr=0x802122D0u; dispatch(c,c->ctr); } // 802122CC
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802122D0
  c->r[27]=c->r[27]+0x00000001u; // 802122D4
  cmps(c,0,(int32_t)c->r[27],3); // 802122D8
  c->r[28]=c->r[28]+0x00000004u; // 802122DC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802122E0
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802122E4
  if (crb(c,0)) { IRQCHK(c); goto L_802122B0; } // 802122E8
  c->r[3]=R32(c->r[29]+0x0000025Cu); // 802122EC
  c->lr=0x802122F4u; f_8020FCF0(c); // 802122F0
  c->r[3]=c->r[29]|c->r[29]; // 802122F4
  c->r[4]=0u+0x00000000u; // 802122F8
  c->lr=0x80212300u; f_80212910(c); // 802122FC
  c->r[3]=0u+0x80490000u; // 80212300
  {uint32_t ea=c->r[30]+0x00000300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212304
  c->r[4]=R32(c->r[3]+0x00001970u); // 80212308
  c->r[0]=0u+0x00000001u; // 8021230C
  c->r[3]=0u+0x00000000u; // 80212310
  c->r[4]=R32(c->r[4]+0x00000004u); // 80212314
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212318
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8021231C
  W8(c->r[29]+0x00000400u,c->r[0]); // 80212320
  W32(c->r[29]+0x000003F4u,c->r[3]); // 80212324
  W32(c->r[29]+0x000003FCu,c->r[3]); // 80212328
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8021232C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 80212330
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80212334
  W32(c->r[29]+0x000003F8u,c->r[0]); // 80212338
L_8021233C:;
  c->r[11]=c->r[1]+0x00000060u; // 8021233C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80212340
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80212344
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 80212348
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8021234C
  c->lr=0x80212354u; f_800C2E94(c); // 80212350
  c->r[0]=R32(c->r[1]+0x00000084u); // 80212354
  c->lr=c->r[0]; // 80212358
  c->r[1]=c->r[1]+0x00000080u; // 8021235C
  return; // 80212360
}

// init_volume__Q210homebutton10HomeButtonFv
void f_80212370(Ctx* __restrict c) {
  trace_call(0x80212370u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212370
  c->r[0]=c->lr; // 80212374
  W32(c->r[1]+0x00000064u,c->r[0]); // 80212378
  c->r[11]=c->r[1]+0x00000040u; // 8021237C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80212380
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80212384
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80212388
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8021238C
  c->lr=0x80212394u; f_800C2E44(c); // 80212390
  c->r[31]=0u+0x80380000u; // 80212394
  c->r[29]=c->r[3]|c->r[3]; // 80212398
  c->r[31]=c->r[31]+0xFFFFF480u; // 8021239C
  c->lr=0x802123A4u; f_80266690(c); // 802123A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802123A4
  c->r[26]=0u+0x43300000u; // 802123A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802123AC
  c->r[3]=0u+0x0000007Fu; // 802123B0
  {uint32_t ea=c->r[31]+0x000002E8u; c->f[3]=RF64(ea);} // 802123B4
  W32(c->r[1]+0x00000008u,c->r[26]); // 802123B8
  {uint32_t ea=c->r[31]+0x00000308u; c->f[1]=c->ps1[1]=RF32(ea);} // 802123BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802123C0
  {uint32_t ea=c->r[31]+0x00000304u; c->f[0]=c->ps1[0]=RF32(ea);} // 802123C4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802123C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802123CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802123D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802123D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802123D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802123DC
  W32(c->r[29]+0x00000084u,c->r[0]); // 802123E0
  c->lr=0x802123E8u; f_802666D0(c); // 802123E4
  {uint32_t ea=c->r[31]+0x00000310u; c->f[30]=RF64(ea);} // 802123E8
  c->r[25]=c->r[29]|c->r[29]; // 802123EC
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802123F0
  c->r[27]=0u+0x00000000u; // 802123F4
L_802123F8:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 802123F8
  W32(c->r[1]+0x00000010u,c->r[26]); // 802123FC
  c->r[0]=c->r[0]^0x80000000u; // 80212400
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80212404
  W32(c->r[1]+0x00000014u,c->r[0]); // 80212408
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8021240C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80212410
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 80212414
  c->lr=0x8021241Cu; f_8020F390(c); // 80212418
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 8021241C
  c->lr=0x80212424u; f_8020F370(c); // 80212420
  c->r[27]=c->r[27]+0x00000001u; // 80212424
  c->r[25]=c->r[25]+0x00000004u; // 80212428
  cmps(c,0,(int32_t)c->r[27],4); // 8021242C
  if (crb(c,0)) { IRQCHK(c); goto L_802123F8; } // 80212430
  c->r[30]=0u+0x00000000u; // 80212434
  c->r[26]=0u+0x00000001u; // 80212438
  c->r[27]=0u+0x00000025u; // 8021243C
  c->r[28]=0u+0x00000025u; // 80212440
L_80212444:;
  c->r[0]=R32(c->r[29]+0x00000084u); // 80212444
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80212448
  if (!crb(c,0)) { goto L_802124C8; } // 8021244C
  c->r[5]=c->r[31]+0x00000068u; // 80212450
  c->r[3]=c->r[30]+0x00000015u; // 80212454
  c->r[4]=0u+0x00000000u; // 80212458
  c->ctr=c->r[27]; // 8021245C
L_80212460:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80212460
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80212464
  if (!crb(c,2)) { goto L_8021247C; } // 80212468
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021246C
  cmps(c,0,(int32_t)c->r[0],10); // 80212470
  if (!crb(c,2)) { goto L_8021247C; } // 80212474
  goto L_802124AC; // 80212478
L_8021247C:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021247C
  c->r[4]=c->r[4]+0x00000001u; // 80212480
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80212484
  if (!crb(c,2)) { goto L_8021249C; } // 80212488
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021248C
  cmps(c,0,(int32_t)c->r[0],10); // 80212490
  if (!crb(c,2)) { goto L_8021249C; } // 80212494
  goto L_802124AC; // 80212498
L_8021249C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021249C
  c->r[4]=c->r[4]+0x00000001u; // 802124A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212460; } // 802124A4
  c->r[4]=0u+0xFFFFFFFFu; // 802124A8
L_802124AC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802124AC
  c->r[3]=c->r[29]+c->r[0]; // 802124B0
  c->r[25]=R32(c->r[3]+0x00000290u); // 802124B4
  c->r[3]=c->r[25]|c->r[25]; // 802124B8
  c->lr=0x802124C0u; f_8020D2A0(c); // 802124BC
  W32(c->r[25]+0x00000014u,c->r[26]); // 802124C0
  goto L_8021253C; // 802124C4
L_802124C8:;
  c->r[5]=c->r[31]+0x00000068u; // 802124C8
  c->r[3]=c->r[30]+0x00000015u; // 802124CC
  c->r[4]=0u+0x00000000u; // 802124D0
  c->ctr=c->r[28]; // 802124D4
L_802124D8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802124D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802124DC
  if (!crb(c,2)) { goto L_802124F4; } // 802124E0
  c->r[0]=R32(c->r[5]+0x00000004u); // 802124E4
  cmps(c,0,(int32_t)c->r[0],9); // 802124E8
  if (!crb(c,2)) { goto L_802124F4; } // 802124EC
  goto L_80212524; // 802124F0
L_802124F4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802124F4
  c->r[4]=c->r[4]+0x00000001u; // 802124F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802124FC
  if (!crb(c,2)) { goto L_80212514; } // 80212500
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80212504
  cmps(c,0,(int32_t)c->r[0],9); // 80212508
  if (!crb(c,2)) { goto L_80212514; } // 8021250C
  goto L_80212524; // 80212510
L_80212514:;
  c->r[5]=c->r[5]+0x00000010u; // 80212514
  c->r[4]=c->r[4]+0x00000001u; // 80212518
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802124D8; } // 8021251C
  c->r[4]=0u+0xFFFFFFFFu; // 80212520
L_80212524:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80212524
  c->r[3]=c->r[29]+c->r[0]; // 80212528
  c->r[25]=R32(c->r[3]+0x00000290u); // 8021252C
  c->r[3]=c->r[25]|c->r[25]; // 80212530
  c->lr=0x80212538u; f_8020D2A0(c); // 80212534
  W32(c->r[25]+0x00000014u,c->r[26]); // 80212538
L_8021253C:;
  c->r[30]=c->r[30]+0x00000001u; // 8021253C
  cmps(c,0,(int32_t)c->r[30],10); // 80212540
  if (crb(c,0)) { IRQCHK(c); goto L_80212444; } // 80212544
  c->r[11]=c->r[1]+0x00000040u; // 80212548
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8021254C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80212550
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80212554
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80212558
  c->lr=0x80212560u; f_800C2E90(c); // 8021255C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80212560
  c->lr=c->r[0]; // 80212564
  c->r[1]=c->r[1]+0x00000060u; // 80212568
  return; // 8021256C
}

// init_sound__Q210homebutton10HomeButtonFv
void f_80212570(Ctx* __restrict c) {
  trace_call(0x80212570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212570
  c->r[0]=c->lr; // 80212574
  W32(c->r[1]+0x00000014u,c->r[0]); // 80212578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021257C
  c->r[31]=0u+0x80380000u; // 80212580
  c->r[31]=c->r[31]+0xFFFFF480u; // 80212584
  W32(c->r[1]+0x00000008u,c->r[30]); // 80212588
  c->r[30]=c->r[3]|c->r[3]; // 8021258C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80212590
  c->r[12]=R32(c->r[4]+0x00000014u); // 80212594
  cmps(c,0,(int32_t)c->r[12],0); // 80212598
  if (crb(c,2)) { goto L_802125B0; } // 8021259C
  c->r[3]=0u+0x00000000u; // 802125A0
  c->r[4]=0u+0x00000000u; // 802125A4
  c->ctr=c->r[12]; // 802125A8
  if (true) { c->lr=0x802125B0u; dispatch(c,c->ctr); } // 802125AC
L_802125B0:;
  c->lr=0x802125B4u; f_801C59A0(c); // 802125B0
  W16(c->r[30]+0x000005C4u,c->r[3]); // 802125B4
  c->lr=0x802125BCu; f_801C59B0(c); // 802125B8
  W16(c->r[30]+0x000005C6u,c->r[3]); // 802125BC
  c->lr=0x802125C4u; f_801C59C0(c); // 802125C0
  W16(c->r[30]+0x000005C8u,c->r[3]); // 802125C4
  c->r[3]=c->r[30]+0x000005CCu; // 802125C8
  c->r[4]=c->r[30]+0x000005D0u; // 802125CC
  c->lr=0x802125D4u; f_801CA550(c); // 802125D0
  c->r[3]=c->r[30]+0x00000734u; // 802125D4
  c->r[4]=c->r[30]+0x00000738u; // 802125D8
  c->lr=0x802125E0u; f_801C4F00(c); // 802125DC
  c->r[3]=0u+0x80210000u; // 802125E0
  c->r[4]=0u+0x80210000u; // 802125E4
  c->r[3]=c->r[3]+0x00000CA0u; // 802125E8
  c->r[4]=c->r[4]+0x00000CB0u; // 802125EC
  c->lr=0x802125F4u; f_801CA540(c); // 802125F0
  {uint32_t ea=c->r[31]+0x000002E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802125F4
  c->r[3]=c->r[30]+0x000005D4u; // 802125F8
  {uint32_t ea=c->r[31]+0x00000318u; c->f[2]=c->ps1[2]=RF32(ea);} // 802125FC
  {uint32_t ea=c->r[31]+0x0000031Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80212600
  {uint32_t ea=c->r[31]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212604
  {uint32_t ea=c->r[30]+0x0000072Cu; WF32(ea,c->f[3]);} // 80212608
  {uint32_t ea=c->r[30]+0x00000724u; WF32(ea,c->f[2]);} // 8021260C
  {uint32_t ea=c->r[30]+0x0000071Cu; WF32(ea,c->f[1]);} // 80212610
  {uint32_t ea=c->r[30]+0x00000728u; WF32(ea,c->f[3]);} // 80212614
  {uint32_t ea=c->r[30]+0x00000730u; WF32(ea,c->f[3]);} // 80212618
  {uint32_t ea=c->r[30]+0x00000720u; WF32(ea,c->f[0]);} // 8021261C
  c->lr=0x80212624u; f_801C7A80(c); // 80212620
  c->r[3]=0u+0x801C0000u; // 80212624
  c->r[4]=c->r[30]+0x000005D4u; // 80212628
  c->r[3]=c->r[3]+0x00007B20u; // 8021262C
  c->lr=0x80212634u; f_801C4DB0(c); // 80212630
  c->r[3]=0u+0x00010000u; // 80212634
  c->r[0]=c->r[3]+0xFFFF8000u; // 80212638
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8021263C
  c->lr=0x80212644u; f_801C59D0(c); // 80212640
  c->r[3]=0u+0x00000000u; // 80212644
  c->lr=0x8021264Cu; f_801C59E0(c); // 80212648
  c->r[3]=0u+0x00000000u; // 8021264C
  c->lr=0x80212654u; f_801C59F0(c); // 80212650
  c->r[3]=R32(c->r[30]+0x00000004u); // 80212654
  c->r[12]=R32(c->r[3]+0x00000014u); // 80212658
  cmps(c,0,(int32_t)c->r[12],0); // 8021265C
  if (crb(c,2)) { goto L_80212674; } // 80212660
  c->r[3]=0u+0x00000001u; // 80212664
  c->r[4]=0u+0x00000000u; // 80212668
  c->ctr=c->r[12]; // 8021266C
  if (true) { c->lr=0x80212674u; dispatch(c,c->ctr); } // 80212670
L_80212674:;
  c->lr=0x80212678u; f_80255000(c); // 80212674
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80212678
  c->lr=0x80212680u; f_80210C90(c); // 8021267C
  c->r[0]=0u+0x00000001u; // 80212680
  W8(c->r[30]+0x00000097u,c->r[0]); // 80212684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80212688
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021268C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80212690
  c->lr=c->r[0]; // 80212694
  c->r[1]=c->r[1]+0x00000010u; // 80212698
  return; // 8021269C
}

// fn_802126A0
void f_802126A0(Ctx* __restrict c) {
  trace_call(0x802126A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802126A0
  c->r[0]=c->lr; // 802126A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802126A8
  c->r[11]=c->r[1]+0x00000040u; // 802126AC
  c->lr=0x802126B4u; f_800C2E30(c); // 802126B0
  c->r[24]=c->r[3]|c->r[3]; // 802126B4
  c->r[26]=0u+0x80490000u; // 802126B8
  c->r[28]=c->r[4]|c->r[4]; // 802126BC
  c->r[25]=0u+0x00000000u; // 802126C0
  c->r[27]=c->r[24]|c->r[24]; // 802126C4
  c->r[26]=c->r[26]+0x00001990u; // 802126C8
  c->r[29]=0u+0x803A0000u; // 802126CC
  c->r[30]=0u+0x80380000u; // 802126D0
  c->r[31]=0u+0x00000001u; // 802126D4
  c->r[21]=0u+0x00000000u; // 802126D8
  c->r[22]=0u+0x00000025u; // 802126DC
  c->r[23]=0u+0x00000025u; // 802126E0
L_802126E4:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802126E4
  cmps(c,0,(int32_t)c->r[0],0); // 802126E8
  if (crb(c,2)) { goto L_802127BC; } // 802126EC
  c->r[3]=R32(c->r[24]+0x00000004u); // 802126F0
  c->r[0]=R32(c->r[3]+0x00000020u); // 802126F4
  cmps(c,0,(int32_t)c->r[0],0); // 802126F8
  if (!crb(c,2)) { goto L_80212730; } // 802126FC
  c->r[3]=R32(c->r[27]+0x000001DCu); // 80212700
  c->r[5]=0u+0x00000001u; // 80212704
  c->r[4]=R32(c->r[29]+0x00006940u); // 80212708
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021270C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212710
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212714
  c->ctr=c->r[12]; // 80212718
  if (true) { c->lr=0x80212720u; dispatch(c,c->ctr); } // 8021271C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212720
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212724
  c->r[0]=c->r[0]|0x00000001u; // 80212728
  W8(c->r[3]+0x000000CFu,c->r[0]); // 8021272C
L_80212730:;
  c->r[5]=c->r[30]+0xFFFFF4E8u; // 80212730
  c->r[3]=c->r[25]+0x0000001Fu; // 80212734
  c->r[4]=0u+0x00000000u; // 80212738
  c->ctr=c->r[22]; // 8021273C
L_80212740:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80212740
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80212744
  if (!crb(c,2)) { goto L_8021275C; } // 80212748
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021274C
  cmps(c,0,(int32_t)c->r[0],17); // 80212750
  if (!crb(c,2)) { goto L_8021275C; } // 80212754
  goto L_8021278C; // 80212758
L_8021275C:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021275C
  c->r[4]=c->r[4]+0x00000001u; // 80212760
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80212764
  if (!crb(c,2)) { goto L_8021277C; } // 80212768
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021276C
  cmps(c,0,(int32_t)c->r[0],17); // 80212770
  if (!crb(c,2)) { goto L_8021277C; } // 80212774
  goto L_8021278C; // 80212778
L_8021277C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021277C
  c->r[4]=c->r[4]+0x00000001u; // 80212780
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212740; } // 80212784
  c->r[4]=0u+0xFFFFFFFFu; // 80212788
L_8021278C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021278C
  c->r[3]=c->r[24]+c->r[0]; // 80212790
  c->r[20]=R32(c->r[3]+0x00000290u); // 80212794
  c->r[3]=c->r[20]|c->r[20]; // 80212798
  c->lr=0x802127A0u; f_8020D2A0(c); // 8021279C
  W32(c->r[20]+0x00000014u,c->r[31]); // 802127A0
  c->r[3]=c->r[24]+c->r[25]; // 802127A4
  c->r[4]=c->r[26]|c->r[26]; // 802127A8
  W8(c->r[3]+0x00000080u,c->r[31]); // 802127AC
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 802127B0
  c->lr=0x802127B8u; f_8020F7B0(c); // 802127B4
  goto L_80212874; // 802127B8
L_802127BC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 802127BC
  c->r[0]=R32(c->r[3]+0x00000020u); // 802127C0
  cmps(c,0,(int32_t)c->r[0],0); // 802127C4
  if (!crb(c,2)) { goto L_802127F8; } // 802127C8
  c->r[3]=R32(c->r[27]+0x000001DCu); // 802127CC
  c->r[5]=0u+0x00000001u; // 802127D0
  c->r[4]=R32(c->r[29]+0x00006940u); // 802127D4
  c->r[3]=R32(c->r[3]+0x00000010u); // 802127D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802127DC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802127E0
  c->ctr=c->r[12]; // 802127E4
  if (true) { c->lr=0x802127ECu; dispatch(c,c->ctr); } // 802127E8
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802127EC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802127F0
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802127F4
L_802127F8:;
  c->r[5]=c->r[30]+0xFFFFF4E8u; // 802127F8
  c->r[3]=c->r[25]+0x0000001Fu; // 802127FC
  c->r[4]=0u+0x00000000u; // 80212800
  c->ctr=c->r[23]; // 80212804
L_80212808:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80212808
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021280C
  if (!crb(c,2)) { goto L_80212824; } // 80212810
  c->r[0]=R32(c->r[5]+0x00000004u); // 80212814
  cmps(c,0,(int32_t)c->r[0],16); // 80212818
  if (!crb(c,2)) { goto L_80212824; } // 8021281C
  goto L_80212854; // 80212820
L_80212824:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 80212824
  c->r[4]=c->r[4]+0x00000001u; // 80212828
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021282C
  if (!crb(c,2)) { goto L_80212844; } // 80212830
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80212834
  cmps(c,0,(int32_t)c->r[0],16); // 80212838
  if (!crb(c,2)) { goto L_80212844; } // 8021283C
  goto L_80212854; // 80212840
L_80212844:;
  c->r[5]=c->r[5]+0x00000010u; // 80212844
  c->r[4]=c->r[4]+0x00000001u; // 80212848
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212808; } // 8021284C
  c->r[4]=0u+0xFFFFFFFFu; // 80212850
L_80212854:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80212854
  c->r[3]=c->r[24]+c->r[0]; // 80212858
  c->r[20]=R32(c->r[3]+0x00000290u); // 8021285C
  c->r[3]=c->r[20]|c->r[20]; // 80212860
  c->lr=0x80212868u; f_8020D2A0(c); // 80212864
  W32(c->r[20]+0x00000014u,c->r[31]); // 80212868
  c->r[3]=c->r[24]+c->r[25]; // 8021286C
  W8(c->r[3]+0x00000080u,c->r[21]); // 80212870
L_80212874:;
  c->r[25]=c->r[25]+0x00000001u; // 80212874
  c->r[27]=c->r[27]+0x00000004u; // 80212878
  cmps(c,0,(int32_t)c->r[25],4); // 8021287C
  c->r[26]=c->r[26]+0x00000018u; // 80212880
  c->r[28]=c->r[28]+0x00000010u; // 80212884
  if (crb(c,0)) { IRQCHK(c); goto L_802126E4; } // 80212888
  c->r[22]=0u+0x803A0000u; // 8021288C
  c->r[21]=0u+0x00000000u; // 80212890
  c->r[22]=c->r[22]+0x000073D8u; // 80212894
L_80212898:;
  c->r[23]=c->r[22]|c->r[22]; // 80212898
  c->r[20]=0u+0x00000000u; // 8021289C
L_802128A0:;
  c->r[3]=R32(c->r[24]+0x000001D8u); // 802128A0
  c->r[5]=0u+0x00000001u; // 802128A4
  c->r[4]=R32(c->r[23]+0x00000000u); // 802128A8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802128AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802128B0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802128B4
  c->ctr=c->r[12]; // 802128B8
  if (true) { c->lr=0x802128C0u; dispatch(c,c->ctr); } // 802128BC
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802128C0
  c->r[20]=c->r[20]+0x00000001u; // 802128C4
  cmps(c,0,(int32_t)c->r[20],4); // 802128C8
  c->r[23]=c->r[23]+0x00000004u; // 802128CC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802128D0
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802128D4
  if (crb(c,0)) { IRQCHK(c); goto L_802128A0; } // 802128D8
  c->r[21]=c->r[21]+0x00000001u; // 802128DC
  c->r[22]=c->r[22]+0x00000010u; // 802128E0
  cmps(c,0,(int32_t)c->r[21],4); // 802128E4
  if (crb(c,0)) { IRQCHK(c); goto L_80212898; } // 802128E8
  c->r[0]=0u+0x00000000u; // 802128EC
  W32(c->r[24]+0x0000007Cu,c->r[0]); // 802128F0
  c->r[11]=c->r[1]+0x00000040u; // 802128F4
  c->lr=0x802128FCu; f_800C2E7C(c); // 802128F8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802128FC
  c->lr=c->r[0]; // 80212900
  c->r[1]=c->r[1]+0x00000040u; // 80212904
  return; // 80212908
}

// calc__Q210homebutton10HomeButtonFPC17HBMControllerData
void f_80212910(Ctx* __restrict c) {
  trace_call(0x80212910u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212910
  c->r[0]=c->lr; // 80212914
  W32(c->r[1]+0x00000074u,c->r[0]); // 80212918
  c->r[11]=c->r[1]+0x00000050u; // 8021291C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80212920
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80212924
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80212928
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8021292C
  c->lr=0x80212934u; f_800C2E44(c); // 80212930
  c->r[28]=c->r[3]|c->r[3]; // 80212934
  c->r[3]=R32(c->r[3]+0x000001F0u); // 80212938
  c->r[0]=0u+0x43300000u; // 8021293C
  c->r[30]=0u+0x80380000u; // 80212940
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212944
  c->r[31]=0u+0x803A0000u; // 80212948
  c->r[29]=c->r[4]|c->r[4]; // 8021294C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80212950
  c->r[12]=R32(c->r[12]+0x00000010u); // 80212954
  c->r[30]=c->r[30]+0xFFFFF480u; // 80212958
  W32(c->r[1]+0x00000018u,c->r[0]); // 8021295C
  c->r[31]=c->r[31]+0x000068E8u; // 80212960
  c->ctr=c->r[12]; // 80212964
  if (true) { c->lr=0x8021296Cu; dispatch(c,c->ctr); } // 80212968
  c->r[25]=c->r[28]|c->r[28]; // 8021296C
  c->r[26]=0u+0x00000000u; // 80212970
  goto L_80212988; // 80212974
L_80212978:;
  c->r[3]=R32(c->r[25]+0x00000260u); // 80212978
  c->lr=0x80212980u; f_8020D470(c); // 8021297C
  c->r[25]=c->r[25]+0x00000004u; // 80212980
  c->r[26]=c->r[26]+0x00000001u; // 80212984
L_80212988:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80212988
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8021298C
  if (crb(c,0)) { IRQCHK(c); goto L_80212978; } // 80212990
  c->r[25]=c->r[28]|c->r[28]; // 80212994
  c->r[26]=0u+0x00000000u; // 80212998
L_8021299C:;
  c->r[3]=R32(c->r[25]+0x000003B8u); // 8021299C
  c->lr=0x802129A4u; f_8020D470(c); // 802129A0
  c->r[26]=c->r[26]+0x00000001u; // 802129A4
  c->r[25]=c->r[25]+0x00000004u; // 802129A8
  cmps(c,0,(int32_t)c->r[26],15); // 802129AC
  if (crb(c,0)) { IRQCHK(c); goto L_8021299C; } // 802129B0
  c->r[25]=c->r[28]|c->r[28]; // 802129B4
  c->r[26]=0u+0x00000000u; // 802129B8
L_802129BC:;
  c->r[3]=R32(c->r[25]+0x00000290u); // 802129BC
  c->lr=0x802129C4u; f_8020D470(c); // 802129C0
  c->r[26]=c->r[26]+0x00000001u; // 802129C4
  c->r[25]=c->r[25]+0x00000004u; // 802129C8
  cmps(c,0,(int32_t)c->r[26],74); // 802129CC
  if (crb(c,0)) { IRQCHK(c); goto L_802129BC; } // 802129D0
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 802129D4
  c->r[25]=c->r[28]|c->r[28]; // 802129D8
  {uint32_t ea=c->r[30]+0x00000320u; c->f[31]=c->ps1[31]=RF32(ea);} // 802129DC
  c->r[26]=0u+0x00000000u; // 802129E0
L_802129E4:;
  {uint32_t ea=c->r[25]+0x000001B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802129E4
  fcmp(c,0,c->f[1],c->f[30]); // 802129E8
  if (!crb(c,1)) { goto L_80212A6C; } // 802129EC
  c->r[3]=c->r[28]+c->r[26]; // 802129F0
  c->r[0]=R8(c->r[3]+0x00000080u); // 802129F4
  cmps(c,0,(int32_t)c->r[0],0); // 802129F8
  if (crb(c,2)) { goto L_80212A10; } // 802129FC
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80212A00
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80212A04
  cmps(c,0,(int32_t)c->r[0],0); // 80212A08
  if (!crb(c,2)) { goto L_80212A30; } // 80212A0C
L_80212A10:;
  {uint32_t ea=c->r[25]+0x000001B0u; WF32(ea,c->f[30]);} // 80212A10
  {uint32_t ea=c->r[25]+0x000001C0u; WF32(ea,c->f[30]);} // 80212A14
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80212A18
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80212A1C
  cmps(c,0,(int32_t)c->r[0],0); // 80212A20
  if (crb(c,2)) { goto L_80212A98; } // 80212A24
  c->lr=0x80212A2Cu; f_8020F780(c); // 80212A28
  goto L_80212A98; // 80212A2C
L_80212A30:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80212A30
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212A34
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80212A38
  {uint32_t ea=c->r[25]+0x000001B0u; WF32(ea,c->f[0]);} // 80212A3C
  fcmp(c,0,c->f[0],c->f[30]); // 80212A40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80212A44
  if (crb(c,2)) { goto L_80212A58; } // 80212A48
  c->r[0]=R32(c->r[28]+0x00000014u); // 80212A4C
  cmps(c,0,(int32_t)c->r[0],17); // 80212A50
  if (!crb(c,2)) { goto L_80212A98; } // 80212A54
L_80212A58:;
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80212A58
  c->lr=0x80212A60u; f_8020F780(c); // 80212A5C
  {uint32_t ea=c->r[25]+0x000001B0u; WF32(ea,c->f[30]);} // 80212A60
  {uint32_t ea=c->r[25]+0x000001C0u; WF32(ea,c->f[31]);} // 80212A64
  goto L_80212A98; // 80212A68
L_80212A6C:;
  {uint32_t ea=c->r[25]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212A6C
  fcmp(c,0,c->f[1],c->f[30]); // 80212A70
  if (!crb(c,1)) { goto L_80212A98; } // 80212A74
  c->r[3]=R32(c->r[28]+0x00000004u); // 80212A78
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212A7C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80212A80
  {uint32_t ea=c->r[25]+0x000001C0u; WF32(ea,c->f[0]);} // 80212A84
  fcmp(c,0,c->f[0],c->f[30]); // 80212A88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80212A8C
  if (!crb(c,2)) { goto L_80212A98; } // 80212A90
  {uint32_t ea=c->r[25]+0x000001C0u; WF32(ea,c->f[30]);} // 80212A94
L_80212A98:;
  c->r[26]=c->r[26]+0x00000001u; // 80212A98
  c->r[25]=c->r[25]+0x00000004u; // 80212A9C
  cmps(c,0,(int32_t)c->r[26],4); // 80212AA0
  if (crb(c,0)) { IRQCHK(c); goto L_802129E4; } // 80212AA4
  c->r[0]=R32(c->r[28]+0x00000014u); // 80212AA8
  cmpu(c,0,c->r[0],0x00000013u); // 80212AAC
  if (crb(c,1)) { goto L_802142D4; } // 80212AB0
  c->r[3]=0u+0x803A0000u; // 80212AB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80212AB8
  c->r[3]=c->r[3]+0x0000746Cu; // 80212ABC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80212AC0
  c->ctr=c->r[3]; // 80212AC4
  if (true) { switch (c->ctr) { case 0x80212ACCu: goto L_80212ACC; case 0x80212CB0u: goto L_80212CB0; case 0x80212F20u: goto L_80212F20; case 0x80213018u: goto L_80213018; case 0x80213134u: goto L_80213134; case 0x80213400u: goto L_80213400; case 0x802134C4u: goto L_802134C4; case 0x8021367Cu: goto L_8021367C; case 0x802136D0u: goto L_802136D0; case 0x802137F4u: goto L_802137F4; case 0x80213838u: goto L_80213838; case 0x80213870u: goto L_80213870; case 0x80213968u: goto L_80213968; case 0x80213AFCu: goto L_80213AFC; case 0x80213B80u: goto L_80213B80; case 0x80213C38u: goto L_80213C38; case 0x80213EBCu: goto L_80213EBC; case 0x80213EC8u: goto L_80213EC8; case 0x802142D4u: goto L_802142D4; default: break; } dispatch(c,c->ctr); return; } // 80212AC8
L_80212ACC:;
  c->r[27]=0u+0x80210000u; // 80212ACC
  c->r[3]=c->r[27]+0x00004D70u; // 80212AD0
  c->lr=0x80212AD8u; f_80262F90(c); // 80212AD4
  c->r[0]=c->r[27]+0x00004D70u; // 80212AD8
  cmpu(c,0,c->r[3],c->r[0]); // 80212ADC
  if (crb(c,2)) { goto L_80212AE8; } // 80212AE0
  W32(c->r[28]+0x000001ACu,c->r[3]); // 80212AE4
L_80212AE8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80212AE8
  c->r[0]=R32(c->r[3]+0x00000018u); // 80212AEC
  cmps(c,0,(int32_t)c->r[0],0); // 80212AF0
  if (crb(c,2)) { goto L_80212BB8; } // 80212AF4
  c->r[0]=0u+0x00000025u; // 80212AF8
  c->r[4]=c->r[30]+0x00000068u; // 80212AFC
  c->r[3]=0u+0x00000000u; // 80212B00
  c->ctr=c->r[0]; // 80212B04
L_80212B08:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212B08
  cmps(c,0,(int32_t)c->r[0],2); // 80212B0C
  if (!crb(c,2)) { goto L_80212B24; } // 80212B10
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212B14
  cmps(c,0,(int32_t)c->r[0],0); // 80212B18
  if (!crb(c,2)) { goto L_80212B24; } // 80212B1C
  goto L_80212B54; // 80212B20
L_80212B24:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212B24
  c->r[3]=c->r[3]+0x00000001u; // 80212B28
  cmps(c,0,(int32_t)c->r[0],2); // 80212B2C
  if (!crb(c,2)) { goto L_80212B44; } // 80212B30
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212B34
  cmps(c,0,(int32_t)c->r[0],0); // 80212B38
  if (!crb(c,2)) { goto L_80212B44; } // 80212B3C
  goto L_80212B54; // 80212B40
L_80212B44:;
  c->r[4]=c->r[4]+0x00000010u; // 80212B44
  c->r[3]=c->r[3]+0x00000001u; // 80212B48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212B08; } // 80212B4C
  c->r[3]=0u+0xFFFFFFFFu; // 80212B50
L_80212B54:;
  W32(c->r[28]+0x00000018u,c->r[3]); // 80212B54
  c->r[4]=c->r[31]+0x00000B38u; // 80212B58
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80212B5C
  c->r[5]=0u+0x00000001u; // 80212B60
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212B64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212B68
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212B6C
  c->ctr=c->r[12]; // 80212B70
  if (true) { c->lr=0x80212B78u; dispatch(c,c->ctr); } // 80212B74
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212B78
  c->r[4]=c->r[31]+0x00000B48u; // 80212B7C
  c->r[5]=0u+0x00000001u; // 80212B80
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212B84
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212B88
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80212B8C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212B90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212B94
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212B98
  c->ctr=c->r[12]; // 80212B9C
  if (true) { c->lr=0x80212BA4u; dispatch(c,c->ctr); } // 80212BA0
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212BA4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212BA8
  c->r[0]=c->r[0]|0x00000001u; // 80212BAC
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212BB0
  goto L_80212C74; // 80212BB4
L_80212BB8:;
  c->r[0]=0u+0x00000025u; // 80212BB8
  c->r[4]=c->r[30]+0x00000068u; // 80212BBC
  c->r[3]=0u+0x00000000u; // 80212BC0
  c->ctr=c->r[0]; // 80212BC4
L_80212BC8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212BC8
  cmps(c,0,(int32_t)c->r[0],0); // 80212BCC
  if (!crb(c,2)) { goto L_80212BE4; } // 80212BD0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212BD4
  cmps(c,0,(int32_t)c->r[0],0); // 80212BD8
  if (!crb(c,2)) { goto L_80212BE4; } // 80212BDC
  goto L_80212C14; // 80212BE0
L_80212BE4:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212BE4
  c->r[3]=c->r[3]+0x00000001u; // 80212BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80212BEC
  if (!crb(c,2)) { goto L_80212C04; } // 80212BF0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212BF4
  cmps(c,0,(int32_t)c->r[0],0); // 80212BF8
  if (!crb(c,2)) { goto L_80212C04; } // 80212BFC
  goto L_80212C14; // 80212C00
L_80212C04:;
  c->r[4]=c->r[4]+0x00000010u; // 80212C04
  c->r[3]=c->r[3]+0x00000001u; // 80212C08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212BC8; } // 80212C0C
  c->r[3]=0u+0xFFFFFFFFu; // 80212C10
L_80212C14:;
  W32(c->r[28]+0x00000018u,c->r[3]); // 80212C14
  c->r[4]=c->r[31]+0x00000B38u; // 80212C18
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80212C1C
  c->r[5]=0u+0x00000001u; // 80212C20
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212C24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212C28
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212C2C
  c->ctr=c->r[12]; // 80212C30
  if (true) { c->lr=0x80212C38u; dispatch(c,c->ctr); } // 80212C34
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212C38
  c->r[4]=c->r[31]+0x00000B48u; // 80212C3C
  c->r[5]=0u+0x00000001u; // 80212C40
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212C44
  c->r[0]=c->r[0]|0x00000001u; // 80212C48
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212C4C
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80212C50
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212C54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212C58
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212C5C
  c->ctr=c->r[12]; // 80212C60
  if (true) { c->lr=0x80212C68u; dispatch(c,c->ctr); } // 80212C64
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212C68
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212C6C
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212C70
L_80212C74:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80212C74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80212C78
  c->r[3]=c->r[28]+c->r[0]; // 80212C7C
  c->r[27]=R32(c->r[3]+0x00000290u); // 80212C80
  c->r[3]=c->r[27]|c->r[27]; // 80212C84
  c->lr=0x80212C8Cu; f_8020D2A0(c); // 80212C88
  cmps(c,0,(int32_t)c->r[29],0); // 80212C8C
  c->r[0]=0u+0x00000001u; // 80212C90
  W32(c->r[27]+0x00000014u,c->r[0]); // 80212C94
  if (crb(c,2)) { goto L_802142D4; } // 80212C98
  W32(c->r[28]+0x00000014u,c->r[0]); // 80212C9C
  c->r[3]=c->r[28]|c->r[28]; // 80212CA0
  c->r[4]=c->r[29]|c->r[29]; // 80212CA4
  c->lr=0x80212CACu; f_802126A0(c); // 80212CA8
  goto L_802142D4; // 80212CAC
L_80212CB0:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80212CB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80212CB4
  c->r[3]=c->r[28]+c->r[0]; // 80212CB8
  c->r[3]=R32(c->r[3]+0x00000290u); // 80212CBC
  c->r[0]=R32(c->r[3]+0x00000014u); // 80212CC0
  cmps(c,0,(int32_t)c->r[0],1); // 80212CC4
  if (crb(c,2)) { goto L_802142D4; } // 80212CC8
  c->r[3]=c->r[28]|c->r[28]; // 80212CCC
  c->lr=0x80212CD4u; f_80212370(c); // 80212CD0
  c->lr=0x80212CD8u; f_80264940(c); // 80212CD4
  c->r[0]=0u-c->r[3]; // 80212CD8
  c->r[0]=c->r[0]|c->r[3]; // 80212CDC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80212CE0
  W8(c->r[28]+0x0000008Cu,c->r[0]); // 80212CE4
  if (crb(c,2)) { goto L_80212DE4; } // 80212CE8
  c->r[0]=0u+0x00000025u; // 80212CEC
  c->r[4]=c->r[30]+0x00000068u; // 80212CF0
  c->r[3]=0u+0x00000000u; // 80212CF4
  c->ctr=c->r[0]; // 80212CF8
  c->r[0]=c->r[0]|0x00000000u; // 80212CFC
L_80212D00:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212D00
  cmps(c,0,(int32_t)c->r[0],13); // 80212D04
  if (!crb(c,2)) { goto L_80212D1C; } // 80212D08
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212D0C
  cmps(c,0,(int32_t)c->r[0],6); // 80212D10
  if (!crb(c,2)) { goto L_80212D1C; } // 80212D14
  goto L_80212D4C; // 80212D18
L_80212D1C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212D1C
  c->r[3]=c->r[3]+0x00000001u; // 80212D20
  cmps(c,0,(int32_t)c->r[0],13); // 80212D24
  if (!crb(c,2)) { goto L_80212D3C; } // 80212D28
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212D2C
  cmps(c,0,(int32_t)c->r[0],6); // 80212D30
  if (!crb(c,2)) { goto L_80212D3C; } // 80212D34
  goto L_80212D4C; // 80212D38
L_80212D3C:;
  c->r[4]=c->r[4]+0x00000010u; // 80212D3C
  c->r[3]=c->r[3]+0x00000001u; // 80212D40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212D00; } // 80212D44
  c->r[3]=0u+0xFFFFFFFFu; // 80212D48
L_80212D4C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80212D4C
  c->r[3]=c->r[28]+c->r[0]; // 80212D50
  c->r[27]=R32(c->r[3]+0x00000290u); // 80212D54
  c->r[3]=c->r[27]|c->r[27]; // 80212D58
  c->lr=0x80212D60u; f_8020D2A0(c); // 80212D5C
  c->r[0]=0u+0x00000025u; // 80212D60
  c->r[3]=0u+0x00000001u; // 80212D64
  W32(c->r[27]+0x00000014u,c->r[3]); // 80212D68
  c->r[4]=c->r[30]+0x00000068u; // 80212D6C
  c->r[3]=0u+0x00000000u; // 80212D70
  c->ctr=c->r[0]; // 80212D74
L_80212D78:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212D78
  cmps(c,0,(int32_t)c->r[0],14); // 80212D7C
  if (!crb(c,2)) { goto L_80212D94; } // 80212D80
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212D84
  cmps(c,0,(int32_t)c->r[0],8); // 80212D88
  if (!crb(c,2)) { goto L_80212D94; } // 80212D8C
  goto L_80212DC4; // 80212D90
L_80212D94:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212D94
  c->r[3]=c->r[3]+0x00000001u; // 80212D98
  cmps(c,0,(int32_t)c->r[0],14); // 80212D9C
  if (!crb(c,2)) { goto L_80212DB4; } // 80212DA0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212DA4
  cmps(c,0,(int32_t)c->r[0],8); // 80212DA8
  if (!crb(c,2)) { goto L_80212DB4; } // 80212DAC
  goto L_80212DC4; // 80212DB0
L_80212DB4:;
  c->r[4]=c->r[4]+0x00000010u; // 80212DB4
  c->r[3]=c->r[3]+0x00000001u; // 80212DB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212D78; } // 80212DBC
  c->r[3]=0u+0xFFFFFFFFu; // 80212DC0
L_80212DC4:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80212DC4
  c->r[3]=c->r[28]+c->r[0]; // 80212DC8
  c->r[27]=R32(c->r[3]+0x00000290u); // 80212DCC
  c->r[3]=c->r[27]|c->r[27]; // 80212DD0
  c->lr=0x80212DD8u; f_8020D2A0(c); // 80212DD4
  c->r[0]=0u+0x00000001u; // 80212DD8
  W32(c->r[27]+0x00000014u,c->r[0]); // 80212DDC
  goto L_80212ED8; // 80212DE0
L_80212DE4:;
  c->r[0]=0u+0x00000025u; // 80212DE4
  c->r[4]=c->r[30]+0x00000068u; // 80212DE8
  c->r[3]=0u+0x00000000u; // 80212DEC
  c->ctr=c->r[0]; // 80212DF0
  c->r[0]=c->r[0]|0x00000000u; // 80212DF4
L_80212DF8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212DF8
  cmps(c,0,(int32_t)c->r[0],13); // 80212DFC
  if (!crb(c,2)) { goto L_80212E14; } // 80212E00
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212E04
  cmps(c,0,(int32_t)c->r[0],8); // 80212E08
  if (!crb(c,2)) { goto L_80212E14; } // 80212E0C
  goto L_80212E44; // 80212E10
L_80212E14:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212E14
  c->r[3]=c->r[3]+0x00000001u; // 80212E18
  cmps(c,0,(int32_t)c->r[0],13); // 80212E1C
  if (!crb(c,2)) { goto L_80212E34; } // 80212E20
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212E24
  cmps(c,0,(int32_t)c->r[0],8); // 80212E28
  if (!crb(c,2)) { goto L_80212E34; } // 80212E2C
  goto L_80212E44; // 80212E30
L_80212E34:;
  c->r[4]=c->r[4]+0x00000010u; // 80212E34
  c->r[3]=c->r[3]+0x00000001u; // 80212E38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212DF8; } // 80212E3C
  c->r[3]=0u+0xFFFFFFFFu; // 80212E40
L_80212E44:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80212E44
  c->r[3]=c->r[28]+c->r[0]; // 80212E48
  c->r[27]=R32(c->r[3]+0x00000290u); // 80212E4C
  c->r[3]=c->r[27]|c->r[27]; // 80212E50
  c->lr=0x80212E58u; f_8020D2A0(c); // 80212E54
  c->r[0]=0u+0x00000025u; // 80212E58
  c->r[3]=0u+0x00000001u; // 80212E5C
  W32(c->r[27]+0x00000014u,c->r[3]); // 80212E60
  c->r[4]=c->r[30]+0x00000068u; // 80212E64
  c->r[3]=0u+0x00000000u; // 80212E68
  c->ctr=c->r[0]; // 80212E6C
L_80212E70:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80212E70
  cmps(c,0,(int32_t)c->r[0],14); // 80212E74
  if (!crb(c,2)) { goto L_80212E8C; } // 80212E78
  c->r[0]=R32(c->r[4]+0x00000004u); // 80212E7C
  cmps(c,0,(int32_t)c->r[0],6); // 80212E80
  if (!crb(c,2)) { goto L_80212E8C; } // 80212E84
  goto L_80212EBC; // 80212E88
L_80212E8C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80212E8C
  c->r[3]=c->r[3]+0x00000001u; // 80212E90
  cmps(c,0,(int32_t)c->r[0],14); // 80212E94
  if (!crb(c,2)) { goto L_80212EAC; } // 80212E98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80212E9C
  cmps(c,0,(int32_t)c->r[0],6); // 80212EA0
  if (!crb(c,2)) { goto L_80212EAC; } // 80212EA4
  goto L_80212EBC; // 80212EA8
L_80212EAC:;
  c->r[4]=c->r[4]+0x00000010u; // 80212EAC
  c->r[3]=c->r[3]+0x00000001u; // 80212EB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212E70; } // 80212EB4
  c->r[3]=0u+0xFFFFFFFFu; // 80212EB8
L_80212EBC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80212EBC
  c->r[3]=c->r[28]+c->r[0]; // 80212EC0
  c->r[27]=R32(c->r[3]+0x00000290u); // 80212EC4
  c->r[3]=c->r[27]|c->r[27]; // 80212EC8
  c->lr=0x80212ED0u; f_8020D2A0(c); // 80212ECC
  c->r[0]=0u+0x00000001u; // 80212ED0
  W32(c->r[27]+0x00000014u,c->r[0]); // 80212ED4
L_80212ED8:;
  c->r[3]=c->r[28]|c->r[28]; // 80212ED8
  c->lr=0x80212EE0u; f_80212570(c); // 80212EDC
  c->r[4]=R32(c->r[28]+0x00000004u); // 80212EE0
  c->r[3]=0u+0x00000000u; // 80212EE4
  c->r[12]=R32(c->r[4]+0x00000014u); // 80212EE8
  cmps(c,0,(int32_t)c->r[12],0); // 80212EEC
  if (crb(c,2)) { goto L_80212F04; } // 80212EF0
  c->r[3]=0u+0x00000005u; // 80212EF4
  c->r[4]=0u+0x00000000u; // 80212EF8
  c->ctr=c->r[12]; // 80212EFC
  if (true) { c->lr=0x80212F04u; dispatch(c,c->ctr); } // 80212F00
L_80212F04:;
  cmps(c,0,(int32_t)c->r[3],0); // 80212F04
  if (!crb(c,2)) { goto L_80212F14; } // 80212F08
  c->r[3]=0u+0x00000000u; // 80212F0C
  c->lr=0x80212F14u; f_80210650(c); // 80212F10
L_80212F14:;
  c->r[0]=0u+0x00000002u; // 80212F14
  W32(c->r[28]+0x00000014u,c->r[0]); // 80212F18
  goto L_802142D4; // 80212F1C
L_80212F20:;
  c->r[4]=R32(c->r[28]+0x00000018u); // 80212F20
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80212F24
  c->r[3]=c->r[28]+c->r[0]; // 80212F28
  c->r[3]=R32(c->r[3]+0x00000290u); // 80212F2C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80212F30
  cmps(c,0,(int32_t)c->r[0],1); // 80212F34
  if (crb(c,2)) { goto L_80212FBC; } // 80212F38
  cmps(c,0,(int32_t)c->r[4],5); // 80212F3C
  if (crb(c,2)) { goto L_80212FBC; } // 80212F40
  c->r[25]=c->r[31]+0x00000AF0u; // 80212F44
  c->r[31]=0u+0x00000000u; // 80212F48
L_80212F4C:;
  c->r[26]=c->r[25]|c->r[25]; // 80212F4C
  c->r[27]=0u+0x00000000u; // 80212F50
L_80212F54:;
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80212F54
  c->r[5]=0u+0x00000001u; // 80212F58
  c->r[4]=R32(c->r[26]+0x00000000u); // 80212F5C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80212F60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80212F64
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80212F68
  c->ctr=c->r[12]; // 80212F6C
  if (true) { c->lr=0x80212F74u; dispatch(c,c->ctr); } // 80212F70
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80212F74
  c->r[27]=c->r[27]+0x00000001u; // 80212F78
  cmps(c,0,(int32_t)c->r[27],4); // 80212F7C
  c->r[26]=c->r[26]+0x00000004u; // 80212F80
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80212F84
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80212F88
  if (crb(c,0)) { IRQCHK(c); goto L_80212F54; } // 80212F8C
  c->r[31]=c->r[31]+0x00000001u; // 80212F90
  c->r[25]=c->r[25]+0x00000010u; // 80212F94
  cmps(c,0,(int32_t)c->r[31],4); // 80212F98
  if (crb(c,0)) { IRQCHK(c); goto L_80212F4C; } // 80212F9C
  c->r[0]=0u+0x00000005u; // 80212FA0
  W32(c->r[28]+0x00000018u,c->r[0]); // 80212FA4
  c->r[27]=R32(c->r[28]+0x000003CCu); // 80212FA8
  c->r[3]=c->r[27]|c->r[27]; // 80212FAC
  c->lr=0x80212FB4u; f_8020D2A0(c); // 80212FB0
  c->r[0]=0u+0x00000001u; // 80212FB4
  W32(c->r[27]+0x00000014u,c->r[0]); // 80212FB8
L_80212FBC:;
  c->r[3]=R32(c->r[28]+0x000001D0u); // 80212FBC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80212FC0
  W32(c->r[28]+0x000001D0u,c->r[0]); // 80212FC4
  if (crb(c,1)) { goto L_802142D4; } // 80212FC8
  c->r[25]=0u+0x00000000u; // 80212FCC
L_80212FD0:;
  c->r[3]=c->r[25]|c->r[25]; // 80212FD0
  c->lr=0x80212FD8u; f_802641D0(c); // 80212FD4
  c->r[25]=c->r[25]+0x00000001u; // 80212FD8
  cmps(c,0,(int32_t)c->r[25],4); // 80212FDC
  if (crb(c,0)) { IRQCHK(c); goto L_80212FD0; } // 80212FE0
  c->r[0]=0u+0x00000004u; // 80212FE4
  W32(c->r[28]+0x00000014u,c->r[0]); // 80212FE8
  c->r[3]=0u+0x80490000u; // 80212FEC
  {uint32_t ea=c->r[30]+0x00000324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212FF0
  c->r[3]=R32(c->r[3]+0x00001970u); // 80212FF4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80212FF8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212FFC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80213000
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80213004
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80213008
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021300C
  W32(c->r[28]+0x000001D4u,c->r[0]); // 80213010
  goto L_802142D4; // 80213014
L_80213018:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213018
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021301C
  c->r[3]=c->r[28]+c->r[0]; // 80213020
  c->r[3]=R32(c->r[3]+0x00000290u); // 80213024
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213028
  cmps(c,0,(int32_t)c->r[0],1); // 8021302C
  if (crb(c,2)) { goto L_802142D4; } // 80213030
  c->r[0]=R32(c->r[28]+0x000001D4u); // 80213034
  cmps(c,0,(int32_t)c->r[0],0); // 80213038
  if (!crb(c,1)) { goto L_80213084; } // 8021303C
  c->r[25]=0u+0x00000000u; // 80213040
L_80213044:;
  c->r[3]=c->r[25]|c->r[25]; // 80213044
  c->r[4]=c->r[1]+0x00000008u; // 80213048
  c->lr=0x80213050u; f_80264290(c); // 8021304C
  cmps(c,0,(int32_t)c->r[3],-1); // 80213050
  if (!crb(c,2)) { goto L_80213064; } // 80213054
  c->r[25]=c->r[25]+0x00000001u; // 80213058
  cmps(c,0,(int32_t)c->r[25],4); // 8021305C
  if (crb(c,0)) { IRQCHK(c); goto L_80213044; } // 80213060
L_80213064:;
  cmps(c,0,(int32_t)c->r[25],4); // 80213064
  if (!crb(c,0)) { goto L_8021307C; } // 80213068
  c->r[3]=R32(c->r[28]+0x000001D4u); // 8021306C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80213070
  W32(c->r[28]+0x000001D4u,c->r[0]); // 80213074
  goto L_802142D4; // 80213078
L_8021307C:;
  c->r[0]=0u+0x00000000u; // 8021307C
  W32(c->r[28]+0x000001D4u,c->r[0]); // 80213080
L_80213084:;
  c->r[27]=0u+0x00000000u; // 80213084
  c->r[0]=0u+0x00000005u; // 80213088
  c->r[3]=0u+0x80210000u; // 8021308C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213090
  c->r[3]=c->r[3]+0x00004D70u; // 80213094
  W32(c->r[28]+0x0000001Cu,c->r[27]); // 80213098
  W32(c->r[28]+0x0000009Cu,c->r[27]); // 8021309C
  c->lr=0x802130A4u; f_80262F90(c); // 802130A0
  W8(c->r[28]+0x00000092u,c->r[27]); // 802130A4
  c->r[0]=0u+0x00000001u; // 802130A8
  c->r[3]=R32(c->r[28]+0x0000024Cu); // 802130AC
  W8(c->r[28]+0x00000093u,c->r[27]); // 802130B0
  W8(c->r[3]+0x00000044u,c->r[0]); // 802130B4
  c->r[3]=R32(c->r[28]+0x00000250u); // 802130B8
  W8(c->r[3]+0x00000044u,c->r[0]); // 802130BC
  c->r[3]=R32(c->r[28]+0x00000254u); // 802130C0
  W8(c->r[3]+0x00000044u,c->r[0]); // 802130C4
  c->r[3]=R32(c->r[28]+0x00000258u); // 802130C8
  W8(c->r[3]+0x00000044u,c->r[0]); // 802130CC
  c->lr=0x802130D4u; f_80262F70(c); // 802130D0
  c->r[0]=0u-c->r[3]; // 802130D4
  c->r[0]=c->r[0]|c->r[3]; // 802130D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802130DC
  W8(c->r[28]+0x00000091u,c->r[0]); // 802130E0
  if (!crb(c,2)) { goto L_802142D4; } // 802130E4
  c->r[3]=c->r[28]+0x00000588u; // 802130E8
  c->lr=0x802130F0u; f_80244010(c); // 802130EC
  c->r[3]=c->r[28]+0x00000588u; // 802130F0
  c->r[4]=0u+0x00000000u; // 802130F4
  c->lr=0x802130FCu; f_80244440(c); // 802130F8
  c->r[4]=0u+0x80000000u; // 802130FC
  c->r[7]=0u+0x80210000u; // 80213100
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80213104
  c->r[3]=0u+0x10620000u; // 80213108
  c->r[4]=c->r[3]+0x00004DD3u; // 8021310C
  c->r[7]=c->r[7]+0x00004CA0u; // 80213110
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80213114
  c->r[3]=c->r[28]+0x00000588u; // 80213118
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8021311C
  c->r[5]=0u+0x00000000u; // 80213120
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80213124
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80213128
  c->lr=0x80213130u; f_80243F10(c); // 8021312C
  goto L_802142D4; // 80213130
L_80213134:;
  c->r[0]=R8(c->r[28]+0x00000091u); // 80213134
  cmps(c,0,(int32_t)c->r[0],0); // 80213138
  if (crb(c,2)) { goto L_802142D4; } // 8021313C
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213140
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213144
  c->r[3]=c->r[28]+c->r[0]; // 80213148
  c->r[3]=R32(c->r[3]+0x000003B8u); // 8021314C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213150
  cmps(c,0,(int32_t)c->r[0],1); // 80213154
  if (crb(c,2)) { goto L_802142D4; } // 80213158
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8021315C
  cmps(c,0,(int32_t)c->r[0],0); // 80213160
  if (!crb(c,2)) { goto L_80213220; } // 80213164
  c->r[25]=0u+0x00000000u; // 80213168
  c->r[27]=0u+0x00000001u; // 8021316C
  c->r[31]=0u+0x00000025u; // 80213170
L_80213174:;
  c->r[5]=c->r[30]+0x00000068u; // 80213174
  c->r[3]=c->r[25]+0x00000006u; // 80213178
  c->r[4]=0u+0x00000000u; // 8021317C
  c->ctr=c->r[31]; // 80213180
  c->r[0]=c->r[0]|0x00000000u; // 80213184
L_80213188:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80213188
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021318C
  if (!crb(c,2)) { goto L_802131A4; } // 80213190
  c->r[0]=R32(c->r[5]+0x00000004u); // 80213194
  cmps(c,0,(int32_t)c->r[0],7); // 80213198
  if (!crb(c,2)) { goto L_802131A4; } // 8021319C
  goto L_802131D4; // 802131A0
L_802131A4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802131A4
  c->r[4]=c->r[4]+0x00000001u; // 802131A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802131AC
  if (!crb(c,2)) { goto L_802131C4; } // 802131B0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802131B4
  cmps(c,0,(int32_t)c->r[0],7); // 802131B8
  if (!crb(c,2)) { goto L_802131C4; } // 802131BC
  goto L_802131D4; // 802131C0
L_802131C4:;
  c->r[5]=c->r[5]+0x00000010u; // 802131C4
  c->r[4]=c->r[4]+0x00000001u; // 802131C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213188; } // 802131CC
  c->r[4]=0u+0xFFFFFFFFu; // 802131D0
L_802131D4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802131D4
  c->r[3]=c->r[28]+c->r[0]; // 802131D8
  c->r[26]=R32(c->r[3]+0x00000290u); // 802131DC
  c->r[3]=c->r[26]|c->r[26]; // 802131E0
  c->lr=0x802131E8u; f_8020D2A0(c); // 802131E4
  c->r[25]=c->r[25]+0x00000001u; // 802131E8
  W32(c->r[26]+0x00000014u,c->r[27]); // 802131EC
  cmps(c,0,(int32_t)c->r[25],5); // 802131F0
  if (crb(c,0)) { IRQCHK(c); goto L_80213174; } // 802131F4
  c->r[3]=c->r[28]|c->r[28]; // 802131F8
  c->lr=0x80213200u; f_80218E30(c); // 802131FC
  c->r[3]=R32(c->r[28]+0x000003F0u); // 80213200
  c->r[0]=0u+0x00000002u; // 80213204
  W32(c->r[3]+0x00000018u,c->r[0]); // 80213208
  c->r[25]=R32(c->r[28]+0x000003F0u); // 8021320C
  c->r[3]=c->r[25]|c->r[25]; // 80213210
  c->lr=0x80213218u; f_8020D2A0(c); // 80213214
  c->r[0]=0u+0x00000001u; // 80213218
  W32(c->r[25]+0x00000014u,c->r[0]); // 8021321C
L_80213220:;
  c->r[0]=R8(c->r[28]+0x00000080u); // 80213220
  c->r[3]=0u+0x00000000u; // 80213224
  cmps(c,0,(int32_t)c->r[0],0); // 80213228
  if (crb(c,2)) { goto L_80213264; } // 8021322C
  c->r[0]=R8(c->r[28]+0x00000081u); // 80213230
  c->r[3]=0u+0x00000001u; // 80213234
  cmps(c,0,(int32_t)c->r[0],0); // 80213238
  if (crb(c,2)) { goto L_80213264; } // 8021323C
  c->r[0]=R8(c->r[28]+0x00000082u); // 80213240
  c->r[3]=0u+0x00000002u; // 80213244
  cmps(c,0,(int32_t)c->r[0],0); // 80213248
  if (crb(c,2)) { goto L_80213264; } // 8021324C
  c->r[0]=R8(c->r[28]+0x00000083u); // 80213250
  c->r[3]=0u+0x00000003u; // 80213254
  cmps(c,0,(int32_t)c->r[0],0); // 80213258
  if (crb(c,2)) { goto L_80213264; } // 8021325C
  c->r[3]=0u+0x00000004u; // 80213260
L_80213264:;
  cmps(c,0,(int32_t)c->r[3],4); // 80213264
  if (crb(c,0)) { goto L_80213274; } // 80213268
  c->r[0]=0u+0x00000001u; // 8021326C
  W8(c->r[28]+0x00000093u,c->r[0]); // 80213270
L_80213274:;
  c->r[0]=R8(c->r[28]+0x00000093u); // 80213274
  cmps(c,0,(int32_t)c->r[0],0); // 80213278
  if (crb(c,2)) { goto L_80213380; } // 8021327C
  c->r[0]=R32(c->r[28]+0x00000014u); // 80213280
  cmps(c,0,(int32_t)c->r[0],6); // 80213284
  if (crb(c,2)) { goto L_80213300; } // 80213288
  c->r[0]=R32(c->r[28]+0x00000088u); // 8021328C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213290
  c->r[3]=c->r[28]+c->r[0]; // 80213294
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 80213298
  c->lr=0x802132A0u; f_8020F6F0(c); // 8021329C
  cmps(c,0,(int32_t)c->r[3],0); // 802132A0
  if (crb(c,2)) { goto L_802132C8; } // 802132A4
  c->r[0]=R32(c->r[28]+0x00000088u); // 802132A8
  c->r[4]=0u+0x00000005u; // 802132AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802132B0
  c->r[3]=c->r[28]+c->r[0]; // 802132B4
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 802132B8
  c->lr=0x802132C0u; f_8020F440(c); // 802132BC
  cmps(c,0,(int32_t)c->r[3],0); // 802132C0
  if (crb(c,2)) { goto L_802132D8; } // 802132C4
L_802132C8:;
  c->r[0]=R32(c->r[28]+0x000005C0u); // 802132C8
  c->r[3]=0u+0x00000006u; // 802132CC
  W32(c->r[28]+0x00000014u,c->r[3]); // 802132D0
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 802132D4
L_802132D8:;
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 802132D8
  c->r[3]=R32(c->r[28]+0x000005C0u); // 802132DC
  c->r[0]=c->r[4]+0x00000001u; // 802132E0
  W32(c->r[28]+0x0000009Cu,c->r[0]); // 802132E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 802132E8
  if (!crb(c,1)) { goto L_802142D4; } // 802132EC
  c->r[0]=0u+0x00000006u; // 802132F0
  W32(c->r[28]+0x00000014u,c->r[0]); // 802132F4
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 802132F8
  goto L_802142D4; // 802132FC
L_80213300:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80213300
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80213304
  c->r[3]=c->r[3]+0x00000001u; // 80213308
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 8021330C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80213310
  if (!crb(c,1)) { goto L_802142D4; } // 80213314
  c->r[0]=0u+0x00000007u; // 80213318
  W32(c->r[28]+0x00000014u,c->r[0]); // 8021331C
  c->lr=0x80213324u; f_80262F80(c); // 80213320
  cmps(c,0,(int32_t)c->r[3],0); // 80213324
  if (!crb(c,2)) { goto L_80213374; } // 80213328
  c->r[3]=c->r[28]+0x00000588u; // 8021332C
  c->lr=0x80213334u; f_80244010(c); // 80213330
  c->r[3]=c->r[28]+0x00000588u; // 80213334
  c->r[4]=0u+0x00000001u; // 80213338
  c->lr=0x80213340u; f_80244440(c); // 8021333C
  c->r[4]=0u+0x80000000u; // 80213340
  c->r[7]=0u+0x80210000u; // 80213344
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80213348
  c->r[3]=0u+0x10620000u; // 8021334C
  c->r[4]=c->r[3]+0x00004DD3u; // 80213350
  c->r[7]=c->r[7]+0x00004CA0u; // 80213354
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80213358
  c->r[3]=c->r[28]+0x00000588u; // 8021335C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80213360
  c->r[5]=0u+0x00000000u; // 80213364
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80213368
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8021336C
  c->lr=0x80213374u; f_80243F10(c); // 80213370
L_80213374:;
  c->r[0]=0u+0x00000001u; // 80213374
  W8(c->r[28]+0x00000092u,c->r[0]); // 80213378
  goto L_802142D4; // 8021337C
L_80213380:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80213380
  c->r[0]=R32(c->r[28]+0x000005BCu); // 80213384
  c->r[3]=c->r[3]+0x00000001u; // 80213388
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 8021338C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80213390
  if (!crb(c,1)) { goto L_802142D4; } // 80213394
  c->r[0]=0u+0x00000007u; // 80213398
  W32(c->r[28]+0x00000014u,c->r[0]); // 8021339C
  c->lr=0x802133A4u; f_80262F80(c); // 802133A0
  cmps(c,0,(int32_t)c->r[3],0); // 802133A4
  if (!crb(c,2)) { goto L_802133F4; } // 802133A8
  c->r[3]=c->r[28]+0x00000588u; // 802133AC
  c->lr=0x802133B4u; f_80244010(c); // 802133B0
  c->r[3]=c->r[28]+0x00000588u; // 802133B4
  c->r[4]=0u+0x00000001u; // 802133B8
  c->lr=0x802133C0u; f_80244440(c); // 802133BC
  c->r[4]=0u+0x80000000u; // 802133C0
  c->r[7]=0u+0x80210000u; // 802133C4
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802133C8
  c->r[3]=0u+0x10620000u; // 802133CC
  c->r[4]=c->r[3]+0x00004DD3u; // 802133D0
  c->r[7]=c->r[7]+0x00004CA0u; // 802133D4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802133D8
  c->r[3]=c->r[28]+0x00000588u; // 802133DC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802133E0
  c->r[5]=0u+0x00000000u; // 802133E4
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802133E8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802133EC
  c->lr=0x802133F4u; f_80243F10(c); // 802133F0
L_802133F4:;
  c->r[0]=0u+0x00000001u; // 802133F4
  W8(c->r[28]+0x00000092u,c->r[0]); // 802133F8
  goto L_802142D4; // 802133FC
L_80213400:;
  c->r[0]=R8(c->r[28]+0x00000092u); // 80213400
  cmps(c,0,(int32_t)c->r[0],0); // 80213404
  if (crb(c,2)) { goto L_802142D4; } // 80213408
  c->r[3]=R32(c->r[28]+0x000001ACu); // 8021340C
  c->lr=0x80213414u; f_80262F90(c); // 80213410
  c->r[3]=R32(c->r[28]+0x0000025Cu); // 80213414
  c->lr=0x8021341Cu; f_8020FB50(c); // 80213418
  c->r[25]=0u+0x00000000u; // 8021341C
L_80213420:;
  c->r[3]=R32(c->r[28]+0x000001F0u); // 80213420
  c->r[4]=c->r[25]|c->r[25]; // 80213424
  {uint32_t ea=c->r[30]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213428
  c->r[5]=0u+0x00000000u; // 8021342C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213430
  c->r[6]=0u+0x00000000u; // 80213434
  c->f[2]=c->f[1]; // 80213438
  c->r[7]=0u+0x00000000u; // 8021343C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80213440
  c->r[8]=0u+0x00000000u; // 80213444
  c->ctr=c->r[12]; // 80213448
  if (true) { c->lr=0x80213450u; dispatch(c,c->ctr); } // 8021344C
  c->r[25]=c->r[25]+0x00000001u; // 80213450
  cmps(c,0,(int32_t)c->r[25],8); // 80213454
  if (crb(c,0)) { IRQCHK(c); goto L_80213420; } // 80213458
  c->r[0]=0u+0x00000006u; // 8021345C
  W32(c->r[28]+0x00000018u,c->r[0]); // 80213460
  c->r[25]=R32(c->r[28]+0x000003D0u); // 80213464
  c->r[3]=c->r[25]|c->r[25]; // 80213468
  c->lr=0x80213470u; f_8020D2A0(c); // 8021346C
  c->r[0]=0u+0x00000001u; // 80213470
  W32(c->r[25]+0x00000014u,c->r[0]); // 80213474
  c->r[3]=0u+0x00000008u; // 80213478
  W32(c->r[28]+0x00000014u,c->r[3]); // 8021347C
  c->r[0]=0u+0x00000000u; // 80213480
  c->r[4]=R32(c->r[28]+0x000003F0u); // 80213484
  c->r[3]=0u+0x00000000u; // 80213488
  W32(c->r[4]+0x00000018u,c->r[0]); // 8021348C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80213490
  c->r[12]=R32(c->r[4]+0x00000014u); // 80213494
  cmps(c,0,(int32_t)c->r[12],0); // 80213498
  if (crb(c,2)) { goto L_802134B0; } // 8021349C
  c->r[3]=0u+0x00000005u; // 802134A0
  c->r[4]=0u+0x00000015u; // 802134A4
  c->ctr=c->r[12]; // 802134A8
  if (true) { c->lr=0x802134B0u; dispatch(c,c->ctr); } // 802134AC
L_802134B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802134B0
  if (!crb(c,2)) { goto L_802142D4; } // 802134B4
  c->r[3]=0u+0x00000015u; // 802134B8
  c->lr=0x802134C0u; f_80210650(c); // 802134BC
  goto L_802142D4; // 802134C0
L_802134C4:;
  c->r[4]=R32(c->r[28]+0x00000018u); // 802134C4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802134C8
  c->r[3]=c->r[28]+c->r[0]; // 802134CC
  c->r[3]=R32(c->r[3]+0x000003B8u); // 802134D0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802134D4
  cmps(c,0,(int32_t)c->r[0],1); // 802134D8
  if (crb(c,2)) { goto L_802142D4; } // 802134DC
  cmps(c,0,(int32_t)c->r[4],13); // 802134E0
  if (!crb(c,2)) { goto L_8021360C; } // 802134E4
  c->r[0]=0u+0x00000025u; // 802134E8
  c->r[4]=c->r[30]+0x00000068u; // 802134EC
  c->r[3]=0u+0x00000000u; // 802134F0
  c->ctr=c->r[0]; // 802134F4
L_802134F8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802134F8
  cmps(c,0,(int32_t)c->r[0],17); // 802134FC
  if (!crb(c,2)) { goto L_80213514; } // 80213500
  c->r[0]=R32(c->r[4]+0x00000004u); // 80213504
  cmps(c,0,(int32_t)c->r[0],12); // 80213508
  if (!crb(c,2)) { goto L_80213514; } // 8021350C
  goto L_80213544; // 80213510
L_80213514:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80213514
  c->r[3]=c->r[3]+0x00000001u; // 80213518
  cmps(c,0,(int32_t)c->r[0],17); // 8021351C
  if (!crb(c,2)) { goto L_80213534; } // 80213520
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80213524
  cmps(c,0,(int32_t)c->r[0],12); // 80213528
  if (!crb(c,2)) { goto L_80213534; } // 8021352C
  goto L_80213544; // 80213530
L_80213534:;
  c->r[4]=c->r[4]+0x00000010u; // 80213534
  c->r[3]=c->r[3]+0x00000001u; // 80213538
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802134F8; } // 8021353C
  c->r[3]=0u+0xFFFFFFFFu; // 80213540
L_80213544:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80213544
  c->r[3]=c->r[28]+c->r[0]; // 80213548
  c->r[25]=R32(c->r[3]+0x00000290u); // 8021354C
  c->r[3]=c->r[25]|c->r[25]; // 80213550
  c->lr=0x80213558u; f_8020D2A0(c); // 80213554
  c->r[0]=0u+0x00000025u; // 80213558
  c->r[3]=0u+0x00000001u; // 8021355C
  W32(c->r[25]+0x00000014u,c->r[3]); // 80213560
  c->r[4]=c->r[30]+0x00000068u; // 80213564
  c->r[3]=0u+0x00000000u; // 80213568
  c->ctr=c->r[0]; // 8021356C
L_80213570:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80213570
  cmps(c,0,(int32_t)c->r[0],18); // 80213574
  if (!crb(c,2)) { goto L_8021358C; } // 80213578
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021357C
  cmps(c,0,(int32_t)c->r[0],12); // 80213580
  if (!crb(c,2)) { goto L_8021358C; } // 80213584
  goto L_802135BC; // 80213588
L_8021358C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021358C
  c->r[3]=c->r[3]+0x00000001u; // 80213590
  cmps(c,0,(int32_t)c->r[0],18); // 80213594
  if (!crb(c,2)) { goto L_802135AC; } // 80213598
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8021359C
  cmps(c,0,(int32_t)c->r[0],12); // 802135A0
  if (!crb(c,2)) { goto L_802135AC; } // 802135A4
  goto L_802135BC; // 802135A8
L_802135AC:;
  c->r[4]=c->r[4]+0x00000010u; // 802135AC
  c->r[3]=c->r[3]+0x00000001u; // 802135B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213570; } // 802135B4
  c->r[3]=0u+0xFFFFFFFFu; // 802135B8
L_802135BC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802135BC
  c->r[3]=c->r[28]+c->r[0]; // 802135C0
  c->r[25]=R32(c->r[3]+0x00000290u); // 802135C4
  c->r[3]=c->r[25]|c->r[25]; // 802135C8
  c->lr=0x802135D0u; f_8020D2A0(c); // 802135CC
  c->r[0]=0u+0x00000001u; // 802135D0
  W32(c->r[25]+0x00000014u,c->r[0]); // 802135D4
  c->r[3]=c->r[31]+0x000009E4u; // 802135D8
  c->r[5]=0u+0x00000001u; // 802135DC
  c->r[6]=R32(c->r[28]+0x000001D8u); // 802135E0
  c->r[4]=R32(c->r[3]+0x00000008u); // 802135E4
  c->r[3]=R32(c->r[6]+0x00000010u); // 802135E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802135EC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802135F0
  c->ctr=c->r[12]; // 802135F4
  if (true) { c->lr=0x802135FCu; dispatch(c,c->ctr); } // 802135F8
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802135FC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80213600
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80213604
  goto L_80213670; // 80213608
L_8021360C:;
  cmps(c,0,(int32_t)c->r[4],6); // 8021360C
  if (!crb(c,2)) { goto L_80213670; } // 80213610
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80213614
  c->r[5]=0u+0x00000001u; // 80213618
  c->r[4]=R32(c->r[31]+0x000009E4u); // 8021361C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80213620
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213624
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80213628
  c->ctr=c->r[12]; // 8021362C
  if (true) { c->lr=0x80213634u; dispatch(c,c->ctr); } // 80213630
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80213634
  c->r[4]=c->r[31]+0x000009E4u; // 80213638
  c->r[5]=0u+0x00000001u; // 8021363C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80213640
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80213644
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80213648
  c->r[4]=R32(c->r[4]+0x00000004u); // 8021364C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80213650
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213654
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80213658
  c->ctr=c->r[12]; // 8021365C
  if (true) { c->lr=0x80213664u; dispatch(c,c->ctr); } // 80213660
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80213664
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80213668
  W8(c->r[3]+0x000000CFu,c->r[0]); // 8021366C
L_80213670:;
  c->r[0]=0u+0x00000002u; // 80213670
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213674
  goto L_802142D4; // 80213678
L_8021367C:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 8021367C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213680
  c->r[3]=c->r[28]+c->r[0]; // 80213684
  c->r[3]=R32(c->r[3]+0x00000290u); // 80213688
  c->r[0]=R32(c->r[3]+0x00000014u); // 8021368C
  cmps(c,0,(int32_t)c->r[0],1); // 80213690
  if (crb(c,2)) { goto L_802142D4; } // 80213694
  c->r[0]=R8(c->r[28]+0x0000008Cu); // 80213698
  cmps(c,0,(int32_t)c->r[0],0); // 8021369C
  if (crb(c,2)) { goto L_802136C4; } // 802136A0
  c->r[25]=c->r[28]|c->r[28]; // 802136A4
  c->r[26]=0u+0x00000000u; // 802136A8
L_802136AC:;
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 802136AC
  c->lr=0x802136B4u; f_8020F780(c); // 802136B0
  c->r[26]=c->r[26]+0x00000001u; // 802136B4
  c->r[25]=c->r[25]+0x00000004u; // 802136B8
  cmps(c,0,(int32_t)c->r[26],4); // 802136BC
  if (crb(c,0)) { IRQCHK(c); goto L_802136AC; } // 802136C0
L_802136C4:;
  c->r[0]=0u+0x00000002u; // 802136C4
  W32(c->r[28]+0x00000014u,c->r[0]); // 802136C8
  goto L_802142D4; // 802136CC
L_802136D0:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 802136D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802136D4
  c->r[3]=c->r[28]+c->r[0]; // 802136D8
  c->r[3]=R32(c->r[3]+0x000003B8u); // 802136DC
  c->r[0]=R32(c->r[3]+0x00000014u); // 802136E0
  cmps(c,0,(int32_t)c->r[0],1); // 802136E4
  if (crb(c,2)) { goto L_802142D4; } // 802136E8
  c->r[0]=R32(c->r[28]+0x00000000u); // 802136EC
  c->r[3]=0u+0x00000000u; // 802136F0
  W32(c->r[28]+0x0000006Cu,c->r[3]); // 802136F4
  cmps(c,0,(int32_t)c->r[0],1); // 802136F8
  W32(c->r[28]+0x00000070u,c->r[3]); // 802136FC
  W32(c->r[28]+0x00000074u,c->r[3]); // 80213700
  W32(c->r[28]+0x00000078u,c->r[3]); // 80213704
  if (crb(c,2)) { goto L_80213760; } // 80213708
  c->r[3]=c->r[31]+0x00000998u; // 8021370C
  c->r[26]=0u+0x00000002u; // 80213710
  c->r[25]=c->r[3]+0x00000008u; // 80213714
L_80213718:;
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80213718
  c->r[5]=0u+0x00000001u; // 8021371C
  c->r[4]=R32(c->r[25]+0x00000000u); // 80213720
  c->r[3]=R32(c->r[3]+0x00000010u); // 80213724
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213728
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021372C
  c->ctr=c->r[12]; // 80213730
  if (true) { c->lr=0x80213738u; dispatch(c,c->ctr); } // 80213734
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80213738
  c->r[26]=c->r[26]+0x00000001u; // 8021373C
  cmps(c,0,(int32_t)c->r[26],7); // 80213740
  c->r[25]=c->r[25]+0x00000004u; // 80213744
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80213748
  W8(c->r[3]+0x000000CFu,c->r[0]); // 8021374C
  if (crb(c,0)) { IRQCHK(c); goto L_80213718; } // 80213750
  c->r[0]=0u+0x00000002u; // 80213754
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213758
  goto L_802137E8; // 8021375C
L_80213760:;
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80213760
  c->r[4]=c->r[31]+0x00000B74u; // 80213764
  c->r[5]=0u+0x00000001u; // 80213768
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021376C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213770
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80213774
  c->ctr=c->r[12]; // 80213778
  if (true) { c->lr=0x80213780u; dispatch(c,c->ctr); } // 8021377C
  c->r[4]=R8(c->r[3]+0x000000CFu); // 80213780
  c->r[0]=0u+0x0000000Au; // 80213784
  c->r[4]=rotl(c->r[4],0)&0x000000FEu; // 80213788
  W8(c->r[3]+0x000000CFu,c->r[4]); // 8021378C
  W32(c->r[28]+0x00000018u,c->r[0]); // 80213790
  c->r[25]=R32(c->r[28]+0x000003E0u); // 80213794
  c->r[3]=c->r[25]|c->r[25]; // 80213798
  c->lr=0x802137A0u; f_8020D2A0(c); // 8021379C
  c->r[0]=0u+0x00000001u; // 802137A0
  W32(c->r[25]+0x00000014u,c->r[0]); // 802137A4
  c->r[3]=0u+0x00000000u; // 802137A8
  W32(c->r[28]+0x00000018u,c->r[0]); // 802137AC
  c->r[4]=R32(c->r[28]+0x00000004u); // 802137B0
  c->r[12]=R32(c->r[4]+0x00000014u); // 802137B4
  cmps(c,0,(int32_t)c->r[12],0); // 802137B8
  if (crb(c,2)) { goto L_802137D0; } // 802137BC
  c->r[3]=0u+0x00000005u; // 802137C0
  c->r[4]=0u+0x00000007u; // 802137C4
  c->ctr=c->r[12]; // 802137C8
  if (true) { c->lr=0x802137D0u; dispatch(c,c->ctr); } // 802137CC
L_802137D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802137D0
  if (!crb(c,2)) { goto L_802137E0; } // 802137D4
  c->r[3]=0u+0x00000007u; // 802137D8
  c->lr=0x802137E0u; f_80210650(c); // 802137DC
L_802137E0:;
  c->r[0]=0u+0x00000008u; // 802137E0
  W32(c->r[28]+0x00000014u,c->r[0]); // 802137E4
L_802137E8:;
  c->r[3]=c->r[28]|c->r[28]; // 802137E8
  c->lr=0x802137F0u; f_80215FD0(c); // 802137EC
  goto L_802142D4; // 802137F0
L_802137F4:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 802137F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802137F8
  c->r[3]=c->r[28]+c->r[0]; // 802137FC
  c->r[3]=R32(c->r[3]+0x00000260u); // 80213800
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213804
  cmps(c,0,(int32_t)c->r[0],1); // 80213808
  if (crb(c,2)) { goto L_802142D4; } // 8021380C
  c->r[0]=0u+0x00000007u; // 80213810
  W32(c->r[28]+0x00000018u,c->r[0]); // 80213814
  c->r[25]=R32(c->r[28]+0x000003D4u); // 80213818
  c->r[3]=c->r[25]|c->r[25]; // 8021381C
  c->lr=0x80213824u; f_8020D2A0(c); // 80213820
  c->r[0]=0u+0x00000001u; // 80213824
  W32(c->r[25]+0x00000014u,c->r[0]); // 80213828
  c->r[0]=0u+0x0000000Cu; // 8021382C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213830
  goto L_802142D4; // 80213834
L_80213838:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213838
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021383C
  c->r[3]=c->r[28]+c->r[0]; // 80213840
  c->r[3]=R32(c->r[3]+0x000003B8u); // 80213844
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213848
  cmps(c,0,(int32_t)c->r[0],1); // 8021384C
  if (crb(c,2)) { goto L_802142D4; } // 80213850
  c->r[3]=c->r[28]|c->r[28]; // 80213854
  c->lr=0x8021385Cu; f_80215FD0(c); // 80213858
  c->r[3]=c->r[28]|c->r[28]; // 8021385C
  c->lr=0x80213864u; f_80218E30(c); // 80213860
  c->r[0]=0u+0x00000002u; // 80213864
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213868
  goto L_802142D4; // 8021386C
L_80213870:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213870
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213874
  c->r[3]=c->r[28]+c->r[0]; // 80213878
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021387C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213880
  cmps(c,0,(int32_t)c->r[0],1); // 80213884
  if (crb(c,2)) { goto L_802142D4; } // 80213888
  c->r[5]=R32(c->r[28]+0x000000B8u); // 8021388C
  cmps(c,0,(int32_t)c->r[5],0); // 80213890
  if (crb(c,0)) { goto L_802138F8; } // 80213894
  c->r[0]=R32(c->r[28]+0x000003F8u); // 80213898
  c->r[4]=0u+0x00000001u; // 8021389C
  c->r[3]=0u+0x00000013u; // 802138A0
  {uint32_t ea=c->r[30]+0x00000310u; c->f[1]=RF64(ea);} // 802138A4
  c->r[0]=c->r[0]^0x80000000u; // 802138A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802138AC
  cmps(c,0,(int32_t)c->r[5],3); // 802138B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802138B4
  W32(c->r[28]+0x000003FCu,c->r[4]); // 802138B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802138BC
  W32(c->r[28]+0x00000014u,c->r[3]); // 802138C0
  {uint32_t ea=c->r[28]+0x0000073Cu; WF32(ea,c->f[0]);} // 802138C4
  if (crb(c,2)) { goto L_80213924; } // 802138C8
  c->r[3]=R32(c->r[28]+0x00000004u); // 802138CC
  c->r[12]=R32(c->r[3]+0x00000014u); // 802138D0
  cmps(c,0,(int32_t)c->r[12],0); // 802138D4
  if (crb(c,2)) { goto L_80213924; } // 802138D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802138DC
  c->r[3]=0u+0x00000003u; // 802138E0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 802138E4
  c->r[4]=R32(c->r[1]+0x00000024u); // 802138E8
  c->ctr=c->r[12]; // 802138EC
  if (true) { c->lr=0x802138F4u; dispatch(c,c->ctr); } // 802138F0
  goto L_80213924; // 802138F4
L_802138F8:;
  c->r[3]=c->r[28]|c->r[28]; // 802138F8
  c->lr=0x80213900u; f_80215FD0(c); // 802138FC
  c->r[0]=0u+0x0000000Du; // 80213900
  W32(c->r[28]+0x00000018u,c->r[0]); // 80213904
  c->r[25]=R32(c->r[28]+0x000003ECu); // 80213908
  c->r[3]=c->r[25]|c->r[25]; // 8021390C
  c->lr=0x80213914u; f_8020D2A0(c); // 80213910
  c->r[0]=0u+0x00000001u; // 80213914
  W32(c->r[25]+0x00000014u,c->r[0]); // 80213918
  c->r[0]=0u+0x00000008u; // 8021391C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213920
L_80213924:;
  c->r[25]=0u+0x00000000u; // 80213924
L_80213928:;
  c->r[3]=R32(c->r[28]+0x000001F0u); // 80213928
  c->r[4]=c->r[25]|c->r[25]; // 8021392C
  {uint32_t ea=c->r[30]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213930
  c->r[5]=0u+0x00000000u; // 80213934
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213938
  c->r[6]=0u+0x00000000u; // 8021393C
  c->f[2]=c->f[1]; // 80213940
  c->r[7]=0u+0x00000000u; // 80213944
  c->r[12]=R32(c->r[12]+0x00000030u); // 80213948
  c->r[8]=0u+0x00000000u; // 8021394C
  c->ctr=c->r[12]; // 80213950
  if (true) { c->lr=0x80213958u; dispatch(c,c->ctr); } // 80213954
  c->r[25]=c->r[25]+0x00000001u; // 80213958
  cmps(c,0,(int32_t)c->r[25],8); // 8021395C
  if (crb(c,0)) { IRQCHK(c); goto L_80213928; } // 80213960
  goto L_802142D4; // 80213964
L_80213968:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213968
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021396C
  c->r[3]=c->r[28]+c->r[0]; // 80213970
  c->r[3]=R32(c->r[3]+0x000003B8u); // 80213974
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213978
  cmps(c,0,(int32_t)c->r[0],1); // 8021397C
  if (crb(c,2)) { goto L_802142D4; } // 80213980
  c->r[6]=R32(c->r[28]+0x000001D8u); // 80213984
  c->r[3]=c->r[31]+0x000009E4u; // 80213988
  c->r[4]=R32(c->r[3]+0x00000008u); // 8021398C
  c->r[5]=0u+0x00000001u; // 80213990
  c->r[3]=R32(c->r[6]+0x00000010u); // 80213994
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213998
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021399C
  c->ctr=c->r[12]; // 802139A0
  if (true) { c->lr=0x802139A8u; dispatch(c,c->ctr); } // 802139A4
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802139A8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802139AC
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802139B0
  c->r[3]=R32(c->r[28]+0x00000004u); // 802139B4
  c->r[0]=R32(c->r[3]+0x00000018u); // 802139B8
  cmps(c,0,(int32_t)c->r[0],0); // 802139BC
  if (crb(c,2)) { goto L_80213A2C; } // 802139C0
  c->r[0]=0u+0x00000025u; // 802139C4
  c->r[4]=c->r[30]+0x00000068u; // 802139C8
  c->r[3]=0u+0x00000000u; // 802139CC
  c->ctr=c->r[0]; // 802139D0
  c->r[0]=c->r[0]|0x00000000u; // 802139D4
L_802139D8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802139D8
  cmps(c,0,(int32_t)c->r[0],3); // 802139DC
  if (!crb(c,2)) { goto L_802139F4; } // 802139E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802139E4
  cmps(c,0,(int32_t)c->r[0],1); // 802139E8
  if (!crb(c,2)) { goto L_802139F4; } // 802139EC
  goto L_80213A24; // 802139F0
L_802139F4:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802139F4
  c->r[3]=c->r[3]+0x00000001u; // 802139F8
  cmps(c,0,(int32_t)c->r[0],3); // 802139FC
  if (!crb(c,2)) { goto L_80213A14; } // 80213A00
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80213A04
  cmps(c,0,(int32_t)c->r[0],1); // 80213A08
  if (!crb(c,2)) { goto L_80213A14; } // 80213A0C
  goto L_80213A24; // 80213A10
L_80213A14:;
  c->r[4]=c->r[4]+0x00000010u; // 80213A14
  c->r[3]=c->r[3]+0x00000001u; // 80213A18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802139D8; } // 80213A1C
  c->r[3]=0u+0xFFFFFFFFu; // 80213A20
L_80213A24:;
  W32(c->r[28]+0x00000018u,c->r[3]); // 80213A24
  goto L_80213A90; // 80213A28
L_80213A2C:;
  c->r[0]=0u+0x00000025u; // 80213A2C
  c->r[4]=c->r[30]+0x00000068u; // 80213A30
  c->r[3]=0u+0x00000000u; // 80213A34
  c->ctr=c->r[0]; // 80213A38
  c->r[0]=c->r[0]|0x00000000u; // 80213A3C
L_80213A40:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80213A40
  cmps(c,0,(int32_t)c->r[0],1); // 80213A44
  if (!crb(c,2)) { goto L_80213A5C; } // 80213A48
  c->r[0]=R32(c->r[4]+0x00000004u); // 80213A4C
  cmps(c,0,(int32_t)c->r[0],1); // 80213A50
  if (!crb(c,2)) { goto L_80213A5C; } // 80213A54
  goto L_80213A8C; // 80213A58
L_80213A5C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80213A5C
  c->r[3]=c->r[3]+0x00000001u; // 80213A60
  cmps(c,0,(int32_t)c->r[0],1); // 80213A64
  if (!crb(c,2)) { goto L_80213A7C; } // 80213A68
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80213A6C
  cmps(c,0,(int32_t)c->r[0],1); // 80213A70
  if (!crb(c,2)) { goto L_80213A7C; } // 80213A74
  goto L_80213A8C; // 80213A78
L_80213A7C:;
  c->r[4]=c->r[4]+0x00000010u; // 80213A7C
  c->r[3]=c->r[3]+0x00000001u; // 80213A80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213A40; } // 80213A84
  c->r[3]=0u+0xFFFFFFFFu; // 80213A88
L_80213A8C:;
  W32(c->r[28]+0x00000018u,c->r[3]); // 80213A8C
L_80213A90:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213A90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213A94
  c->r[3]=c->r[28]+c->r[0]; // 80213A98
  c->r[25]=R32(c->r[3]+0x00000290u); // 80213A9C
  c->r[3]=c->r[25]|c->r[25]; // 80213AA0
  c->lr=0x80213AA8u; f_8020D2A0(c); // 80213AA4
  c->r[0]=0u+0x00000001u; // 80213AA8
  W32(c->r[25]+0x00000014u,c->r[0]); // 80213AAC
  c->r[3]=0u+0x00000010u; // 80213AB0
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213AB4
  W32(c->r[28]+0x00000014u,c->r[3]); // 80213AB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213ABC
  c->r[3]=R32(c->r[28]+0x00000004u); // 80213AC0
  c->r[4]=c->r[28]+c->r[0]; // 80213AC4
  c->r[4]=R32(c->r[4]+0x00000290u); // 80213AC8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213ACC
  {uint32_t ea=c->r[28]+0x0000073Cu; WF32(ea,c->f[0]);} // 80213AD0
  c->r[12]=R32(c->r[3]+0x00000014u); // 80213AD4
  cmps(c,0,(int32_t)c->r[12],0); // 80213AD8
  if (crb(c,2)) { goto L_802142D4; } // 80213ADC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80213AE0
  c->r[3]=0u+0x00000002u; // 80213AE4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80213AE8
  c->r[4]=R32(c->r[1]+0x00000024u); // 80213AEC
  c->ctr=c->r[12]; // 80213AF0
  if (true) { c->lr=0x80213AF8u; dispatch(c,c->ctr); } // 80213AF4
  goto L_802142D4; // 80213AF8
L_80213AFC:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213AFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213B00
  c->r[3]=c->r[28]+c->r[0]; // 80213B04
  c->r[3]=R32(c->r[3]+0x00000260u); // 80213B08
  c->r[0]=R32(c->r[3]+0x00000014u); // 80213B0C
  cmps(c,0,(int32_t)c->r[0],1); // 80213B10
  if (crb(c,2)) { goto L_802142D4; } // 80213B14
  c->r[3]=R32(c->r[28]+0x000003F8u); // 80213B18
  c->r[5]=0u+0x00000001u; // 80213B1C
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80213B20
  c->r[4]=0u+0x00000013u; // 80213B24
  c->r[3]=c->r[3]^0x80000000u; // 80213B28
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80213B2C
  {uint32_t ea=c->r[30]+0x00000310u; c->f[1]=RF64(ea);} // 80213B30
  cmps(c,0,(int32_t)c->r[0],3); // 80213B34
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80213B38
  W32(c->r[28]+0x000003FCu,c->r[5]); // 80213B3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80213B40
  W8(c->r[28]+0x0000009Au,c->r[5]); // 80213B44
  W32(c->r[28]+0x00000014u,c->r[4]); // 80213B48
  {uint32_t ea=c->r[28]+0x0000073Cu; WF32(ea,c->f[0]);} // 80213B4C
  if (crb(c,2)) { goto L_802142D4; } // 80213B50
  c->r[3]=R32(c->r[28]+0x00000004u); // 80213B54
  c->r[12]=R32(c->r[3]+0x00000014u); // 80213B58
  cmps(c,0,(int32_t)c->r[12],0); // 80213B5C
  if (crb(c,2)) { goto L_802142D4; } // 80213B60
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80213B64
  c->r[3]=0u+0x00000003u; // 80213B68
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80213B6C
  c->r[4]=R32(c->r[1]+0x00000024u); // 80213B70
  c->ctr=c->r[12]; // 80213B74
  if (true) { c->lr=0x80213B7Cu; dispatch(c,c->ctr); } // 80213B78
  goto L_802142D4; // 80213B7C
L_80213B80:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80213B80
  c->r[3]=0u+0x00000000u; // 80213B84
  W16(c->r[28]+0x000005CAu,c->r[3]); // 80213B88
  cmps(c,0,(int32_t)c->r[0],2); // 80213B8C
  if (crb(c,1)) { goto L_80213BA4; } // 80213B90
  c->r[0]=R32(c->r[28]+0x00000018u); // 80213B94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80213B98
  c->r[3]=c->r[28]+c->r[0]; // 80213B9C
  c->r[31]=R32(c->r[3]+0x00000290u); // 80213BA0
L_80213BA4:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80213BA4
  cmps(c,0,(int32_t)c->r[0],1); // 80213BA8
  if (crb(c,2)) { goto L_80213BE4; } // 80213BAC
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80213BB0
  c->r[3]=0u+0x00000011u; // 80213BB4
  W32(c->r[28]+0x00000014u,c->r[3]); // 80213BB8
  cmps(c,0,(int32_t)c->r[0],3); // 80213BBC
  if (crb(c,2)) { goto L_802142D4; } // 80213BC0
  c->r[0]=R8(c->r[28]+0x00000097u); // 80213BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80213BC8
  if (crb(c,2)) { goto L_80213BD8; } // 80213BCC
  c->r[3]=0u+0x00000000u; // 80213BD0
  c->lr=0x80213BD8u; f_801C59D0(c); // 80213BD4
L_80213BD8:;
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213BD8
  c->lr=0x80213BE0u; f_80210B70(c); // 80213BDC
  goto L_802142D4; // 80213BE0
L_80213BE4:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213BE4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213BE8
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80213BEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80213BF0
  {uint32_t ea=c->r[28]+0x0000073Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213BF4
  cmps(c,0,(int32_t)c->r[0],3); // 80213BF8
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 80213BFC
  if (crb(c,2)) { goto L_802142D4; } // 80213C00
  c->r[0]=R8(c->r[28]+0x00000097u); // 80213C04
  cmps(c,0,(int32_t)c->r[0],0); // 80213C08
  if (crb(c,2)) { goto L_80213C2C; } // 80213C0C
  {uint32_t ea=c->r[30]+0x00000328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213C10
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 80213C14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80213C18
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80213C1C
  c->r[3]=R32(c->r[1]+0x00000024u); // 80213C20
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80213C24
  c->lr=0x80213C2Cu; f_801C59D0(c); // 80213C28
L_80213C2C:;
  c->f[1]=c->f[30]; // 80213C2C
  c->lr=0x80213C34u; f_80210B70(c); // 80213C30
  goto L_802142D4; // 80213C34
L_80213C38:;
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80213C38
  c->r[3]=0u+0x00000012u; // 80213C3C
  W32(c->r[28]+0x00000014u,c->r[3]); // 80213C40
  cmps(c,0,(int32_t)c->r[0],3); // 80213C44
  if (crb(c,2)) { goto L_80213C9C; } // 80213C48
  c->lr=0x80213C50u; f_802109A0(c); // 80213C4C
  c->r[0]=R8(c->r[28]+0x00000097u); // 80213C50
  cmps(c,0,(int32_t)c->r[0],0); // 80213C54
  if (crb(c,2)) { goto L_80213C94; } // 80213C58
  c->r[3]=c->r[28]+0x000005D4u; // 80213C5C
  c->lr=0x80213C64u; f_801C7AF0(c); // 80213C60
  c->r[3]=R32(c->r[28]+0x00000734u); // 80213C64
  c->r[4]=R32(c->r[28]+0x00000738u); // 80213C68
  c->lr=0x80213C70u; f_801C4DB0(c); // 80213C6C
  c->r[3]=R32(c->r[28]+0x000005CCu); // 80213C70
  c->r[4]=R32(c->r[28]+0x000005D0u); // 80213C74
  c->lr=0x80213C7Cu; f_801CA540(c); // 80213C78
  c->r[3]=R16(c->r[28]+0x000005C4u); // 80213C7C
  c->lr=0x80213C84u; f_801C59D0(c); // 80213C80
  c->r[3]=R16(c->r[28]+0x000005C6u); // 80213C84
  c->lr=0x80213C8Cu; f_801C59E0(c); // 80213C88
  c->r[3]=R16(c->r[28]+0x000005C8u); // 80213C8C
  c->lr=0x80213C94u; f_801C59F0(c); // 80213C90
L_80213C94:;
  c->r[0]=0u+0x00000000u; // 80213C94
  W8(c->r[28]+0x00000097u,c->r[0]); // 80213C98
L_80213C9C:;
  c->r[0]=R32(c->r[28]+0x00000084u); // 80213C9C
  {uint32_t ea=c->r[30]+0x00000310u; c->f[2]=RF64(ea);} // 80213CA0
  c->r[0]=c->r[0]^0x80000000u; // 80213CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213CA8
  {uint32_t ea=c->r[30]+0x0000032Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213CAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80213CB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80213CB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80213CB8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80213CBC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80213CC0
  c->r[3]=R32(c->r[1]+0x00000024u); // 80213CC4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80213CC8
  c->lr=0x80213CD0u; f_802666D0(c); // 80213CCC
  c->r[3]=0u+0x00000000u; // 80213CD0
  c->lr=0x80213CD8u; f_80264B70(c); // 80213CD4
  c->r[3]=R32(c->r[28]+0x0000025Cu); // 80213CD8
  c->lr=0x80213CE0u; f_8020FB50(c); // 80213CDC
  c->r[3]=R32(c->r[28]+0x0000025Cu); // 80213CE0
  c->lr=0x80213CE8u; f_8020FDD0(c); // 80213CE4
  c->r[25]=c->r[28]|c->r[28]; // 80213CE8
  c->r[26]=0u+0x00000000u; // 80213CEC
L_80213CF0:;
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80213CF0
  c->lr=0x80213CF8u; f_8020F780(c); // 80213CF4
  c->r[3]=R32(c->r[25]+0x0000024Cu); // 80213CF8
  c->lr=0x80213D00u; f_8020F120(c); // 80213CFC
  c->r[26]=c->r[26]+0x00000001u; // 80213D00
  c->r[25]=c->r[25]+0x00000004u; // 80213D04
  cmps(c,0,(int32_t)c->r[26],4); // 80213D08
  if (crb(c,0)) { IRQCHK(c); goto L_80213CF0; } // 80213D0C
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80213D10
  cmps(c,0,(int32_t)c->r[0],3); // 80213D14
  if (crb(c,2)) { goto L_80213D3C; } // 80213D18
  c->r[3]=R32(c->r[28]+0x00000004u); // 80213D1C
  c->r[12]=R32(c->r[3]+0x00000014u); // 80213D20
  cmps(c,0,(int32_t)c->r[12],0); // 80213D24
  if (crb(c,2)) { goto L_80213D3C; } // 80213D28
  c->r[3]=0u+0x00000004u; // 80213D2C
  c->r[4]=0u+0x00000000u; // 80213D30
  c->ctr=c->r[12]; // 80213D34
  if (true) { c->lr=0x80213D3Cu; dispatch(c,c->ctr); } // 80213D38
L_80213D3C:;
  c->r[3]=0u+0x00000000u; // 80213D3C
  c->r[8]=0u+0x00000000u; // 80213D40
  c->r[4]=0u+0x00000025u; // 80213D44
  c->r[0]=0u+0x00000025u; // 80213D48
  c->r[5]=0u+0x00000025u; // 80213D4C
L_80213D50:;
  c->r[10]=c->r[30]+0x00000068u; // 80213D50
  c->r[7]=c->r[3]+0x0000001Fu; // 80213D54
  c->r[9]=0u+0x00000000u; // 80213D58
  c->ctr=c->r[5]; // 80213D5C
L_80213D60:;
  c->r[6]=R32(c->r[10]+0x00000000u); // 80213D60
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213D64
  if (!crb(c,2)) { goto L_80213D7C; } // 80213D68
  c->r[6]=R32(c->r[10]+0x00000004u); // 80213D6C
  cmps(c,0,(int32_t)c->r[6],17); // 80213D70
  if (!crb(c,2)) { goto L_80213D7C; } // 80213D74
  goto L_80213DAC; // 80213D78
L_80213D7C:;
  c->r[6]=R32(c->r[10]+0x00000008u); // 80213D7C
  c->r[9]=c->r[9]+0x00000001u; // 80213D80
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213D84
  if (!crb(c,2)) { goto L_80213D9C; } // 80213D88
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 80213D8C
  cmps(c,0,(int32_t)c->r[6],17); // 80213D90
  if (!crb(c,2)) { goto L_80213D9C; } // 80213D94
  goto L_80213DAC; // 80213D98
L_80213D9C:;
  c->r[10]=c->r[10]+0x00000010u; // 80213D9C
  c->r[9]=c->r[9]+0x00000001u; // 80213DA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213D60; } // 80213DA4
  c->r[9]=0u+0xFFFFFFFFu; // 80213DA8
L_80213DAC:;
  c->r[6]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80213DAC
  c->r[10]=c->r[30]+0x00000068u; // 80213DB0
  c->r[6]=c->r[28]+c->r[6]; // 80213DB4
  c->r[7]=c->r[3]+0x0000001Fu; // 80213DB8
  c->r[6]=R32(c->r[6]+0x00000290u); // 80213DBC
  c->r[9]=0u+0x00000000u; // 80213DC0
  W32(c->r[6]+0x00000014u,c->r[8]); // 80213DC4
  c->ctr=c->r[4]; // 80213DC8
  c->r[0]=c->r[0]|0x00000000u; // 80213DCC
L_80213DD0:;
  c->r[6]=R32(c->r[10]+0x00000000u); // 80213DD0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213DD4
  if (!crb(c,2)) { goto L_80213DEC; } // 80213DD8
  c->r[6]=R32(c->r[10]+0x00000004u); // 80213DDC
  cmps(c,0,(int32_t)c->r[6],18); // 80213DE0
  if (!crb(c,2)) { goto L_80213DEC; } // 80213DE4
  goto L_80213E1C; // 80213DE8
L_80213DEC:;
  c->r[6]=R32(c->r[10]+0x00000008u); // 80213DEC
  c->r[9]=c->r[9]+0x00000001u; // 80213DF0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213DF4
  if (!crb(c,2)) { goto L_80213E0C; } // 80213DF8
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 80213DFC
  cmps(c,0,(int32_t)c->r[6],18); // 80213E00
  if (!crb(c,2)) { goto L_80213E0C; } // 80213E04
  goto L_80213E1C; // 80213E08
L_80213E0C:;
  c->r[10]=c->r[10]+0x00000010u; // 80213E0C
  c->r[9]=c->r[9]+0x00000001u; // 80213E10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213DD0; } // 80213E14
  c->r[9]=0u+0xFFFFFFFFu; // 80213E18
L_80213E1C:;
  c->r[6]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80213E1C
  c->r[10]=c->r[30]+0x00000068u; // 80213E20
  c->r[6]=c->r[28]+c->r[6]; // 80213E24
  c->r[7]=c->r[3]+0x0000001Fu; // 80213E28
  c->r[6]=R32(c->r[6]+0x00000290u); // 80213E2C
  c->r[9]=0u+0x00000000u; // 80213E30
  W32(c->r[6]+0x00000014u,c->r[8]); // 80213E34
  c->ctr=c->r[0]; // 80213E38
  c->r[0]=c->r[0]|0x00000000u; // 80213E3C
L_80213E40:;
  c->r[6]=R32(c->r[10]+0x00000000u); // 80213E40
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213E44
  if (!crb(c,2)) { goto L_80213E5C; } // 80213E48
  c->r[6]=R32(c->r[10]+0x00000004u); // 80213E4C
  cmps(c,0,(int32_t)c->r[6],15); // 80213E50
  if (!crb(c,2)) { goto L_80213E5C; } // 80213E54
  goto L_80213E8C; // 80213E58
L_80213E5C:;
  c->r[6]=R32(c->r[10]+0x00000008u); // 80213E5C
  c->r[9]=c->r[9]+0x00000001u; // 80213E60
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80213E64
  if (!crb(c,2)) { goto L_80213E7C; } // 80213E68
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 80213E6C
  cmps(c,0,(int32_t)c->r[6],15); // 80213E70
  if (!crb(c,2)) { goto L_80213E7C; } // 80213E74
  goto L_80213E8C; // 80213E78
L_80213E7C:;
  c->r[10]=c->r[10]+0x00000010u; // 80213E7C
  c->r[9]=c->r[9]+0x00000001u; // 80213E80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213E40; } // 80213E84
  c->r[9]=0u+0xFFFFFFFFu; // 80213E88
L_80213E8C:;
  c->r[6]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80213E8C
  c->r[3]=c->r[3]+0x00000001u; // 80213E90
  c->r[6]=c->r[28]+c->r[6]; // 80213E94
  c->r[6]=R32(c->r[6]+0x00000290u); // 80213E98
  cmps(c,0,(int32_t)c->r[3],4); // 80213E9C
  W32(c->r[6]+0x00000014u,c->r[8]); // 80213EA0
  if (crb(c,0)) { IRQCHK(c); goto L_80213D50; } // 80213EA4
  c->r[3]=R32(c->r[28]+0x000001ACu); // 80213EA8
  c->lr=0x80213EB0u; f_80262F90(c); // 80213EAC
  c->r[0]=0u+0x00000000u; // 80213EB0
  W8(c->r[28]+0x00000094u,c->r[0]); // 80213EB4
  goto L_802142D4; // 80213EB8
L_80213EBC:;
  c->r[0]=0u+0x00000002u; // 80213EBC
  W32(c->r[28]+0x00000014u,c->r[0]); // 80213EC0
  goto L_802142D4; // 80213EC4
L_80213EC8:;
  c->r[0]=R8(c->r[28]+0x00000095u); // 80213EC8
  cmps(c,0,(int32_t)c->r[0],0); // 80213ECC
  if (crb(c,2)) { goto L_80213EE8; } // 80213ED0
  c->r[3]=c->r[28]|c->r[28]; // 80213ED4
  c->r[4]=c->r[29]|c->r[29]; // 80213ED8
  c->lr=0x80213EE0u; f_802126A0(c); // 80213EDC
  c->r[0]=0u+0x00000000u; // 80213EE0
  W8(c->r[28]+0x00000095u,c->r[0]); // 80213EE4
L_80213EE8:;
  c->r[0]=R8(c->r[28]+0x00000096u); // 80213EE8
  cmps(c,0,(int32_t)c->r[0],0); // 80213EEC
  if (crb(c,2)) { goto L_80214108; } // 80213EF0
  c->r[3]=c->r[28]|c->r[28]; // 80213EF4
  c->lr=0x80213EFCu; f_80212370(c); // 80213EF8
  c->lr=0x80213F00u; f_80264940(c); // 80213EFC
  c->r[0]=0u-c->r[3]; // 80213F00
  c->r[0]=c->r[0]|c->r[3]; // 80213F04
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80213F08
  W8(c->r[28]+0x0000008Cu,c->r[0]); // 80213F0C
  if (crb(c,2)) { goto L_8021400C; } // 80213F10
  c->r[0]=0u+0x00000025u; // 80213F14
  c->r[4]=c->r[30]+0x00000068u; // 80213F18
  c->r[3]=0u+0x00000000u; // 80213F1C
  c->ctr=c->r[0]; // 80213F20
  c->r[0]=c->r[0]|0x00000000u; // 80213F24
L_80213F28:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80213F28
  cmps(c,0,(int32_t)c->r[0],13); // 80213F2C
  if (!crb(c,2)) { goto L_80213F44; } // 80213F30
  c->r[0]=R32(c->r[4]+0x00000004u); // 80213F34
  cmps(c,0,(int32_t)c->r[0],6); // 80213F38
  if (!crb(c,2)) { goto L_80213F44; } // 80213F3C
  goto L_80213F74; // 80213F40
L_80213F44:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80213F44
  c->r[3]=c->r[3]+0x00000001u; // 80213F48
  cmps(c,0,(int32_t)c->r[0],13); // 80213F4C
  if (!crb(c,2)) { goto L_80213F64; } // 80213F50
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80213F54
  cmps(c,0,(int32_t)c->r[0],6); // 80213F58
  if (!crb(c,2)) { goto L_80213F64; } // 80213F5C
  goto L_80213F74; // 80213F60
L_80213F64:;
  c->r[4]=c->r[4]+0x00000010u; // 80213F64
  c->r[3]=c->r[3]+0x00000001u; // 80213F68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213F28; } // 80213F6C
  c->r[3]=0u+0xFFFFFFFFu; // 80213F70
L_80213F74:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80213F74
  c->r[3]=c->r[28]+c->r[0]; // 80213F78
  c->r[25]=R32(c->r[3]+0x00000290u); // 80213F7C
  c->r[3]=c->r[25]|c->r[25]; // 80213F80
  c->lr=0x80213F88u; f_8020D2A0(c); // 80213F84
  c->r[0]=0u+0x00000025u; // 80213F88
  c->r[3]=0u+0x00000001u; // 80213F8C
  W32(c->r[25]+0x00000014u,c->r[3]); // 80213F90
  c->r[4]=c->r[30]+0x00000068u; // 80213F94
  c->r[3]=0u+0x00000000u; // 80213F98
  c->ctr=c->r[0]; // 80213F9C
L_80213FA0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80213FA0
  cmps(c,0,(int32_t)c->r[0],14); // 80213FA4
  if (!crb(c,2)) { goto L_80213FBC; } // 80213FA8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80213FAC
  cmps(c,0,(int32_t)c->r[0],8); // 80213FB0
  if (!crb(c,2)) { goto L_80213FBC; } // 80213FB4
  goto L_80213FEC; // 80213FB8
L_80213FBC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80213FBC
  c->r[3]=c->r[3]+0x00000001u; // 80213FC0
  cmps(c,0,(int32_t)c->r[0],14); // 80213FC4
  if (!crb(c,2)) { goto L_80213FDC; } // 80213FC8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80213FCC
  cmps(c,0,(int32_t)c->r[0],8); // 80213FD0
  if (!crb(c,2)) { goto L_80213FDC; } // 80213FD4
  goto L_80213FEC; // 80213FD8
L_80213FDC:;
  c->r[4]=c->r[4]+0x00000010u; // 80213FDC
  c->r[3]=c->r[3]+0x00000001u; // 80213FE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213FA0; } // 80213FE4
  c->r[3]=0u+0xFFFFFFFFu; // 80213FE8
L_80213FEC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80213FEC
  c->r[3]=c->r[28]+c->r[0]; // 80213FF0
  c->r[25]=R32(c->r[3]+0x00000290u); // 80213FF4
  c->r[3]=c->r[25]|c->r[25]; // 80213FF8
  c->lr=0x80214000u; f_8020D2A0(c); // 80213FFC
  c->r[0]=0u+0x00000001u; // 80214000
  W32(c->r[25]+0x00000014u,c->r[0]); // 80214004
  goto L_80214100; // 80214008
L_8021400C:;
  c->r[0]=0u+0x00000025u; // 8021400C
  c->r[4]=c->r[30]+0x00000068u; // 80214010
  c->r[3]=0u+0x00000000u; // 80214014
  c->ctr=c->r[0]; // 80214018
  c->r[0]=c->r[0]|0x00000000u; // 8021401C
L_80214020:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80214020
  cmps(c,0,(int32_t)c->r[0],13); // 80214024
  if (!crb(c,2)) { goto L_8021403C; } // 80214028
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021402C
  cmps(c,0,(int32_t)c->r[0],8); // 80214030
  if (!crb(c,2)) { goto L_8021403C; } // 80214034
  goto L_8021406C; // 80214038
L_8021403C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021403C
  c->r[3]=c->r[3]+0x00000001u; // 80214040
  cmps(c,0,(int32_t)c->r[0],13); // 80214044
  if (!crb(c,2)) { goto L_8021405C; } // 80214048
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8021404C
  cmps(c,0,(int32_t)c->r[0],8); // 80214050
  if (!crb(c,2)) { goto L_8021405C; } // 80214054
  goto L_8021406C; // 80214058
L_8021405C:;
  c->r[4]=c->r[4]+0x00000010u; // 8021405C
  c->r[3]=c->r[3]+0x00000001u; // 80214060
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80214020; } // 80214064
  c->r[3]=0u+0xFFFFFFFFu; // 80214068
L_8021406C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021406C
  c->r[3]=c->r[28]+c->r[0]; // 80214070
  c->r[25]=R32(c->r[3]+0x00000290u); // 80214074
  c->r[3]=c->r[25]|c->r[25]; // 80214078
  c->lr=0x80214080u; f_8020D2A0(c); // 8021407C
  c->r[0]=0u+0x00000025u; // 80214080
  c->r[3]=0u+0x00000001u; // 80214084
  W32(c->r[25]+0x00000014u,c->r[3]); // 80214088
  c->r[4]=c->r[30]+0x00000068u; // 8021408C
  c->r[3]=0u+0x00000000u; // 80214090
  c->ctr=c->r[0]; // 80214094
L_80214098:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80214098
  cmps(c,0,(int32_t)c->r[0],14); // 8021409C
  if (!crb(c,2)) { goto L_802140B4; } // 802140A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802140A4
  cmps(c,0,(int32_t)c->r[0],6); // 802140A8
  if (!crb(c,2)) { goto L_802140B4; } // 802140AC
  goto L_802140E4; // 802140B0
L_802140B4:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802140B4
  c->r[3]=c->r[3]+0x00000001u; // 802140B8
  cmps(c,0,(int32_t)c->r[0],14); // 802140BC
  if (!crb(c,2)) { goto L_802140D4; } // 802140C0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802140C4
  cmps(c,0,(int32_t)c->r[0],6); // 802140C8
  if (!crb(c,2)) { goto L_802140D4; } // 802140CC
  goto L_802140E4; // 802140D0
L_802140D4:;
  c->r[4]=c->r[4]+0x00000010u; // 802140D4
  c->r[3]=c->r[3]+0x00000001u; // 802140D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80214098; } // 802140DC
  c->r[3]=0u+0xFFFFFFFFu; // 802140E0
L_802140E4:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802140E4
  c->r[3]=c->r[28]+c->r[0]; // 802140E8
  c->r[25]=R32(c->r[3]+0x00000290u); // 802140EC
  c->r[3]=c->r[25]|c->r[25]; // 802140F0
  c->lr=0x802140F8u; f_8020D2A0(c); // 802140F4
  c->r[0]=0u+0x00000001u; // 802140F8
  W32(c->r[25]+0x00000014u,c->r[0]); // 802140FC
L_80214100:;
  c->r[0]=0u+0x00000000u; // 80214100
  W8(c->r[28]+0x00000096u,c->r[0]); // 80214104
L_80214108:;
  c->r[4]=R32(c->r[28]+0x000003FCu); // 80214108
  cmps(c,0,(int32_t)c->r[4],1); // 8021410C
  if (!crb(c,2)) { goto L_8021412C; } // 80214110
  c->r[3]=R32(c->r[28]+0x000003F4u); // 80214114
  c->r[0]=R32(c->r[28]+0x000003F8u); // 80214118
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021411C
  if (!crb(c,2)) { goto L_8021412C; } // 80214120
  c->r[0]=0u+0x00000001u; // 80214124
  goto L_8021414C; // 80214128
L_8021412C:;
  cmps(c,0,(int32_t)c->r[4],2); // 8021412C
  if (!crb(c,2)) { goto L_80214148; } // 80214130
  c->r[0]=R32(c->r[28]+0x000003F4u); // 80214134
  cmps(c,0,(int32_t)c->r[0],0); // 80214138
  if (!crb(c,2)) { goto L_80214148; } // 8021413C
  c->r[0]=0u+0x00000001u; // 80214140
  goto L_8021414C; // 80214144
L_80214148:;
  c->r[0]=0u+0x00000000u; // 80214148
L_8021414C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021414C
  if (crb(c,2)) { goto L_80214270; } // 80214150
  c->r[0]=R8(c->r[28]+0x00000098u); // 80214154
  cmps(c,0,(int32_t)c->r[0],0); // 80214158
  if (crb(c,2)) { goto L_8021417C; } // 8021415C
  c->r[0]=R8(c->r[28]+0x00000092u); // 80214160
  cmps(c,0,(int32_t)c->r[0],0); // 80214164
  if (crb(c,2)) { goto L_802142D4; } // 80214168
  c->r[3]=R32(c->r[28]+0x000001ACu); // 8021416C
  c->lr=0x80214174u; f_80262F90(c); // 80214170
  c->r[0]=0u+0x00000000u; // 80214174
  W8(c->r[28]+0x00000098u,c->r[0]); // 80214178
L_8021417C:;
  c->r[0]=R8(c->r[28]+0x00000099u); // 8021417C
  cmps(c,0,(int32_t)c->r[0],0); // 80214180
  if (crb(c,2)) { goto L_80214214; } // 80214184
  c->r[3]=R32(c->r[28]+0x000003CCu); // 80214188
  c->lr=0x80214190u; f_8020D2A0(c); // 8021418C
  c->r[3]=R32(c->r[28]+0x000003CCu); // 80214190
  c->r[27]=0u+0x00000000u; // 80214194
  c->r[5]=0u+0x00000001u; // 80214198
  W32(c->r[3]+0x00000014u,c->r[27]); // 8021419C
  c->r[3]=R32(c->r[28]+0x000001D8u); // 802141A0
  c->r[4]=R32(c->r[31]+0x000009E4u); // 802141A4
  c->r[3]=R32(c->r[3]+0x00000010u); // 802141A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802141AC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802141B0
  c->ctr=c->r[12]; // 802141B4
  if (true) { c->lr=0x802141BCu; dispatch(c,c->ctr); } // 802141B8
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802141BC
  c->r[4]=c->r[31]+0x000009E4u; // 802141C0
  c->r[5]=0u+0x00000001u; // 802141C4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802141C8
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802141CC
  c->r[3]=R32(c->r[28]+0x000001D8u); // 802141D0
  c->r[4]=R32(c->r[4]+0x00000004u); // 802141D4
  c->r[3]=R32(c->r[3]+0x00000010u); // 802141D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802141DC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802141E0
  c->ctr=c->r[12]; // 802141E4
  if (true) { c->lr=0x802141ECu; dispatch(c,c->ctr); } // 802141E8
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802141EC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802141F0
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802141F4
  c->r[3]=R32(c->r[28]+0x000003F0u); // 802141F8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802141FC
  cmps(c,0,(int32_t)c->r[0],1); // 80214200
  if (!crb(c,2)) { goto L_80214214; } // 80214204
  c->lr=0x8021420Cu; f_8020D2A0(c); // 80214208
  c->r[3]=R32(c->r[28]+0x000003F0u); // 8021420C
  W32(c->r[3]+0x00000014u,c->r[27]); // 80214210
L_80214214:;
  c->r[0]=R32(c->r[28]+0x000005B8u); // 80214214
  c->r[3]=0u+0x00000011u; // 80214218
  W32(c->r[28]+0x00000014u,c->r[3]); // 8021421C
  c->r[3]=0u+0x00000000u; // 80214220
  cmps(c,0,(int32_t)c->r[0],0); // 80214224
  if (!crb(c,2)) { goto L_80214238; } // 80214228
  c->r[0]=R8(c->r[28]+0x00000400u); // 8021422C
  cmps(c,0,(int32_t)c->r[0],0); // 80214230
  if (!crb(c,2)) { goto L_8021423C; } // 80214234
L_80214238:;
  c->r[3]=0u+0x00000001u; // 80214238
L_8021423C:;
  c->lr=0x80214240u; f_8025E0D0(c); // 8021423C
  c->lr=0x80214244u; f_8025DF40(c); // 80214240
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80214244
  cmps(c,0,(int32_t)c->r[0],3); // 80214248
  if (crb(c,2)) { goto L_802142D4; } // 8021424C
  c->r[0]=R8(c->r[28]+0x00000097u); // 80214250
  cmps(c,0,(int32_t)c->r[0],0); // 80214254
  if (crb(c,2)) { goto L_80214264; } // 80214258
  c->r[3]=0u+0x00000000u; // 8021425C
  c->lr=0x80214264u; f_801C59D0(c); // 80214260
L_80214264:;
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214264
  c->lr=0x8021426Cu; f_80210B70(c); // 80214268
  goto L_802142D4; // 8021426C
L_80214270:;
  c->r[4]=R32(c->r[28]+0x000003F4u); // 80214270
  c->r[3]=R32(c->r[28]+0x000003F8u); // 80214274
  c->r[0]=R32(c->r[28]+0x000000B8u); // 80214278
  c->r[3]=c->r[3]-c->r[4]; // 8021427C
  {uint32_t ea=c->r[30]+0x00000310u; c->f[2]=RF64(ea);} // 80214280
  c->r[3]=c->r[3]^0x80000000u; // 80214284
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80214288
  {uint32_t ea=c->r[28]+0x0000073Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021428C
  cmps(c,0,(int32_t)c->r[0],3); // 80214290
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80214294
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80214298
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 8021429C
  if (crb(c,2)) { goto L_802142D4; } // 802142A0
  c->r[0]=R8(c->r[28]+0x00000097u); // 802142A4
  cmps(c,0,(int32_t)c->r[0],0); // 802142A8
  if (crb(c,2)) { goto L_802142CC; } // 802142AC
  {uint32_t ea=c->r[30]+0x00000328u; c->f[0]=c->ps1[0]=RF32(ea);} // 802142B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 802142B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802142B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 802142BC
  c->r[3]=R32(c->r[1]+0x00000024u); // 802142C0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 802142C4
  c->lr=0x802142CCu; f_801C59D0(c); // 802142C8
L_802142CC:;
  c->f[1]=c->f[30]; // 802142CC
  c->lr=0x802142D4u; f_80210B70(c); // 802142D0
L_802142D4:;
  c->r[5]=R32(c->r[28]+0x0000006Cu); // 802142D4
  cmps(c,0,(int32_t)c->r[5],0); // 802142D8
  if (crb(c,2)) { goto L_8021435C; } // 802142DC
  c->r[0]=R32(c->r[28]+0x00000014u); // 802142E0
  c->r[4]=0u+0x00000001u; // 802142E4
  cmps(c,0,(int32_t)c->r[0],2); // 802142E8
  if (!crb(c,2)) { goto L_80214310; } // 802142EC
  c->r[3]=R32(c->r[28]+0x000003E8u); // 802142F0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802142F4
  cmps(c,0,(int32_t)c->r[0],1); // 802142F8
  if (crb(c,2)) { goto L_80214310; } // 802142FC
  c->r[3]=R32(c->r[28]+0x000003C4u); // 80214300
  c->r[0]=R32(c->r[3]+0x00000014u); // 80214304
  cmps(c,0,(int32_t)c->r[0],1); // 80214308
  if (!crb(c,2)) { goto L_80214314; } // 8021430C
L_80214310:;
  c->r[4]=0u+0x00000000u; // 80214310
L_80214314:;
  cmps(c,0,(int32_t)c->r[4],0); // 80214314
  if (crb(c,2)) { goto L_8021435C; } // 80214318
  cmps(c,0,(int32_t)c->r[5],0); // 8021431C
  if (crb(c,2)) { goto L_80214354; } // 80214320
  c->r[0]=R32(c->r[28]+0x00000074u); // 80214324
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80214328
  if (crb(c,2)) { goto L_80214354; } // 8021432C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80214330
  c->r[3]=c->r[28]+c->r[0]; // 80214334
  c->r[25]=R32(c->r[3]+0x000003B8u); // 80214338
  c->r[3]=c->r[25]|c->r[25]; // 8021433C
  c->lr=0x80214344u; f_8020D2A0(c); // 80214340
  c->r[0]=0u+0x00000001u; // 80214344
  W32(c->r[25]+0x00000014u,c->r[0]); // 80214348
  c->r[0]=R32(c->r[28]+0x0000006Cu); // 8021434C
  W32(c->r[28]+0x00000074u,c->r[0]); // 80214350
L_80214354:;
  c->r[0]=0u+0x00000000u; // 80214354
  W32(c->r[28]+0x0000006Cu,c->r[0]); // 80214358
L_8021435C:;
  c->r[3]=R32(c->r[28]+0x00000070u); // 8021435C
  cmps(c,0,(int32_t)c->r[3],0); // 80214360
  if (crb(c,2)) { goto L_802145A4; } // 80214364
  c->r[4]=0u+0x00000025u; // 80214368
  c->r[5]=c->r[30]+0x00000068u; // 8021436C
  c->r[0]=0u+0x00000001u; // 80214370
  c->r[8]=0u+0x00000000u; // 80214374
  c->ctr=c->r[4]; // 80214378
  c->r[0]=c->r[0]|0x00000000u; // 8021437C
L_80214380:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 80214380
  cmps(c,0,(int32_t)c->r[4],4); // 80214384
  if (!crb(c,2)) { goto L_8021439C; } // 80214388
  c->r[4]=R32(c->r[5]+0x00000004u); // 8021438C
  cmps(c,0,(int32_t)c->r[4],2); // 80214390
  if (!crb(c,2)) { goto L_8021439C; } // 80214394
  goto L_802143CC; // 80214398
L_8021439C:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 8021439C
  c->r[8]=c->r[8]+0x00000001u; // 802143A0
  cmps(c,0,(int32_t)c->r[4],4); // 802143A4
  if (!crb(c,2)) { goto L_802143BC; } // 802143A8
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 802143AC
  cmps(c,0,(int32_t)c->r[4],2); // 802143B0
  if (!crb(c,2)) { goto L_802143BC; } // 802143B4
  goto L_802143CC; // 802143B8
L_802143BC:;
  c->r[5]=c->r[5]+0x00000010u; // 802143BC
  c->r[8]=c->r[8]+0x00000001u; // 802143C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80214380; } // 802143C4
  c->r[8]=0u+0xFFFFFFFFu; // 802143C8
L_802143CC:;
  c->r[4]=0u+0x00000025u; // 802143CC
  c->r[5]=c->r[30]+0x00000068u; // 802143D0
  c->r[7]=0u+0x00000000u; // 802143D4
  c->ctr=c->r[4]; // 802143D8
  c->r[0]=c->r[0]|0x00000000u; // 802143DC
L_802143E0:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 802143E0
  cmps(c,0,(int32_t)c->r[4],5); // 802143E4
  if (!crb(c,2)) { goto L_802143FC; } // 802143E8
  c->r[4]=R32(c->r[5]+0x00000004u); // 802143EC
  cmps(c,0,(int32_t)c->r[4],3); // 802143F0
  if (!crb(c,2)) { goto L_802143FC; } // 802143F4
  goto L_8021442C; // 802143F8
L_802143FC:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 802143FC
  c->r[7]=c->r[7]+0x00000001u; // 80214400
  cmps(c,0,(int32_t)c->r[4],5); // 80214404
  if (!crb(c,2)) { goto L_8021441C; } // 80214408
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8021440C
  cmps(c,0,(int32_t)c->r[4],3); // 80214410
  if (!crb(c,2)) { goto L_8021441C; } // 80214414
  goto L_8021442C; // 80214418
L_8021441C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021441C
  c->r[7]=c->r[7]+0x00000001u; // 80214420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802143E0; } // 80214424
  c->r[7]=0u+0xFFFFFFFFu; // 80214428
L_8021442C:;
  c->r[4]=0u+0x00000025u; // 8021442C
  c->r[5]=c->r[30]+0x00000068u; // 80214430
  c->r[6]=0u+0x00000000u; // 80214434
  c->ctr=c->r[4]; // 80214438
  c->r[0]=c->r[0]|0x00000000u; // 8021443C
L_80214440:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 80214440
  cmps(c,0,(int32_t)c->r[4],4); // 80214444
  if (!crb(c,2)) { goto L_8021445C; } // 80214448
  c->r[4]=R32(c->r[5]+0x00000004u); // 8021444C
  cmps(c,0,(int32_t)c->r[4],19); // 80214450
  if (!crb(c,2)) { goto L_8021445C; } // 80214454
  goto L_8021448C; // 80214458
L_8021445C:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 8021445C
  c->r[6]=c->r[6]+0x00000001u; // 80214460
  cmps(c,0,(int32_t)c->r[4],4); // 80214464
  if (!crb(c,2)) { goto L_8021447C; } // 80214468
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8021446C
  cmps(c,0,(int32_t)c->r[4],19); // 80214470
  if (!crb(c,2)) { goto L_8021447C; } // 80214474
  goto L_8021448C; // 80214478
L_8021447C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021447C
  c->r[6]=c->r[6]+0x00000001u; // 80214480
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80214440; } // 80214484
  c->r[6]=0u+0xFFFFFFFFu; // 80214488
L_8021448C:;
  c->r[4]=0u+0x00000025u; // 8021448C
  c->r[9]=c->r[30]+0x00000068u; // 80214490
  c->r[5]=0u+0x00000000u; // 80214494
  c->ctr=c->r[4]; // 80214498
  c->r[0]=c->r[0]|0x00000000u; // 8021449C
L_802144A0:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 802144A0
  cmps(c,0,(int32_t)c->r[4],5); // 802144A4
  if (!crb(c,2)) { goto L_802144BC; } // 802144A8
  c->r[4]=R32(c->r[9]+0x00000004u); // 802144AC
  cmps(c,0,(int32_t)c->r[4],20); // 802144B0
  if (!crb(c,2)) { goto L_802144BC; } // 802144B4
  goto L_802144EC; // 802144B8
L_802144BC:;
  c->r[4]=R32(c->r[9]+0x00000008u); // 802144BC
  c->r[5]=c->r[5]+0x00000001u; // 802144C0
  cmps(c,0,(int32_t)c->r[4],5); // 802144C4
  if (!crb(c,2)) { goto L_802144DC; } // 802144C8
  c->r[4]=R32(c->r[9]+0x0000000Cu); // 802144CC
  cmps(c,0,(int32_t)c->r[4],20); // 802144D0
  if (!crb(c,2)) { goto L_802144DC; } // 802144D4
  goto L_802144EC; // 802144D8
L_802144DC:;
  c->r[9]=c->r[9]+0x00000010u; // 802144DC
  c->r[5]=c->r[5]+0x00000001u; // 802144E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802144A0; } // 802144E4
  c->r[5]=0u+0xFFFFFFFFu; // 802144E8
L_802144EC:;
  c->r[4]=R32(c->r[28]+0x00000014u); // 802144EC
  cmps(c,0,(int32_t)c->r[4],2); // 802144F0
  if (!crb(c,2)) { goto L_80214558; } // 802144F4
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802144F8
  c->r[4]=c->r[28]+c->r[4]; // 802144FC
  c->r[4]=R32(c->r[4]+0x00000290u); // 80214500
  c->r[4]=R32(c->r[4]+0x00000014u); // 80214504
  cmps(c,0,(int32_t)c->r[4],1); // 80214508
  if (crb(c,2)) { goto L_80214558; } // 8021450C
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80214510
  c->r[4]=c->r[28]+c->r[4]; // 80214514
  c->r[4]=R32(c->r[4]+0x00000290u); // 80214518
  c->r[4]=R32(c->r[4]+0x00000014u); // 8021451C
  cmps(c,0,(int32_t)c->r[4],1); // 80214520
  if (crb(c,2)) { goto L_80214558; } // 80214524
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80214528
  c->r[4]=c->r[28]+c->r[4]; // 8021452C
  c->r[4]=R32(c->r[4]+0x00000290u); // 80214530
  c->r[4]=R32(c->r[4]+0x00000014u); // 80214534
  cmps(c,0,(int32_t)c->r[4],1); // 80214538
  if (crb(c,2)) { goto L_80214558; } // 8021453C
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80214540
  c->r[4]=c->r[28]+c->r[4]; // 80214544
  c->r[4]=R32(c->r[4]+0x00000290u); // 80214548
  c->r[4]=R32(c->r[4]+0x00000014u); // 8021454C
  cmps(c,0,(int32_t)c->r[4],1); // 80214550
  if (!crb(c,2)) { goto L_8021455C; } // 80214554
L_80214558:;
  c->r[0]=0u+0x00000000u; // 80214558
L_8021455C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021455C
  if (crb(c,2)) { goto L_802145A4; } // 80214560
  cmps(c,0,(int32_t)c->r[3],0); // 80214564
  if (crb(c,2)) { goto L_8021459C; } // 80214568
  c->r[0]=R32(c->r[28]+0x00000078u); // 8021456C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80214570
  if (crb(c,2)) { goto L_8021459C; } // 80214574
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80214578
  c->r[3]=c->r[28]+c->r[0]; // 8021457C
  c->r[25]=R32(c->r[3]+0x00000290u); // 80214580
  c->r[3]=c->r[25]|c->r[25]; // 80214584
  c->lr=0x8021458Cu; f_8020D2A0(c); // 80214588
  c->r[0]=0u+0x00000001u; // 8021458C
  W32(c->r[25]+0x00000014u,c->r[0]); // 80214590
  c->r[0]=R32(c->r[28]+0x00000070u); // 80214594
  W32(c->r[28]+0x00000078u,c->r[0]); // 80214598
L_8021459C:;
  c->r[0]=0u+0x00000000u; // 8021459C
  W32(c->r[28]+0x00000070u,c->r[0]); // 802145A0
L_802145A4:;
  c->r[0]=R32(c->r[28]+0x000003FCu); // 802145A4
  cmps(c,0,(int32_t)c->r[0],1); // 802145A8
  if (!crb(c,2)) { goto L_802145C0; } // 802145AC
  c->r[3]=R32(c->r[28]+0x000003F4u); // 802145B0
  c->r[0]=c->r[3]+0x00000001u; // 802145B4
  W32(c->r[28]+0x000003F4u,c->r[0]); // 802145B8
  goto L_802145D4; // 802145BC
L_802145C0:;
  cmps(c,0,(int32_t)c->r[0],2); // 802145C0
  if (!crb(c,2)) { goto L_802145D4; } // 802145C4
  c->r[3]=R32(c->r[28]+0x000003F4u); // 802145C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802145CC
  W32(c->r[28]+0x000003F4u,c->r[0]); // 802145D0
L_802145D4:;
  c->r[0]=R32(c->r[28]+0x000003F4u); // 802145D4
  cmps(c,0,(int32_t)c->r[0],0); // 802145D8
  if (!crb(c,0)) { goto L_802145EC; } // 802145DC
  c->r[0]=0u+0x00000000u; // 802145E0
  W32(c->r[28]+0x000003F4u,c->r[0]); // 802145E4
  goto L_802145FC; // 802145E8
L_802145EC:;
  c->r[3]=R32(c->r[28]+0x000003F8u); // 802145EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 802145F0
  if (!crb(c,1)) { goto L_802145FC; } // 802145F4
  W32(c->r[28]+0x000003F4u,c->r[3]); // 802145F8
L_802145FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802145FC
  if (crb(c,2)) { goto L_8021461C; } // 80214600
  c->r[0]=R16(c->r[28]+0x000005CAu); // 80214604
  cmps(c,0,(int32_t)c->r[0],0); // 80214608
  if (crb(c,2)) { goto L_8021461C; } // 8021460C
  c->r[3]=c->r[28]|c->r[28]; // 80214610
  c->r[4]=c->r[29]|c->r[29]; // 80214614
  c->lr=0x8021461Cu; f_80214DB0(c); // 80214618
L_8021461C:;
  c->r[3]=R32(c->r[28]+0x000001D8u); // 8021461C
  c->r[4]=0u+0x00000000u; // 80214620
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214624
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80214628
  c->ctr=c->r[12]; // 8021462C
  if (true) { c->lr=0x80214634u; dispatch(c,c->ctr); } // 80214630
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80214634
  c->r[4]=c->r[28]+0x000001F8u; // 80214638
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021463C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80214640
  c->ctr=c->r[12]; // 80214644
  if (true) { c->lr=0x8021464Cu; dispatch(c,c->ctr); } // 80214648
  c->r[3]=R32(c->r[28]+0x00000004u); // 8021464C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80214650
  cmps(c,0,(int32_t)c->r[0],0); // 80214654
  if (!crb(c,2)) { goto L_8021468C; } // 80214658
  c->r[25]=c->r[28]|c->r[28]; // 8021465C
  c->r[26]=0u+0x00000000u; // 80214660
L_80214664:;
  c->r[3]=R32(c->r[25]+0x000001DCu); // 80214664
  c->r[4]=c->r[28]+0x000001F8u; // 80214668
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021466C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80214670
  c->ctr=c->r[12]; // 80214674
  if (true) { c->lr=0x8021467Cu; dispatch(c,c->ctr); } // 80214678
  c->r[26]=c->r[26]+0x00000001u; // 8021467C
  c->r[25]=c->r[25]+0x00000004u; // 80214680
  cmps(c,0,(int32_t)c->r[26],4); // 80214684
  if (crb(c,0)) { IRQCHK(c); goto L_80214664; } // 80214688
L_8021468C:;
  c->r[3]=R32(c->r[28]+0x00000068u); // 8021468C
  cmps(c,0,(int32_t)c->r[3],2); // 80214690
  if (crb(c,1)) { goto L_802146A0; } // 80214694
  c->r[0]=c->r[3]+0x00000001u; // 80214698
  W32(c->r[28]+0x00000068u,c->r[0]); // 8021469C
L_802146A0:;
  c->r[11]=c->r[1]+0x00000050u; // 802146A0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802146A4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802146A8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 802146AC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802146B0
  c->lr=0x802146B8u; f_800C2E90(c); // 802146B4
  c->r[0]=R32(c->r[1]+0x00000074u); // 802146B8
  c->lr=c->r[0]; // 802146BC
  c->r[1]=c->r[1]+0x00000070u; // 802146C0
  return; // 802146C4
}

// fn_802146D0
void f_802146D0(Ctx* __restrict c) {
  trace_call(0x802146D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802146D0
  c->r[0]=c->lr; // 802146D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802146D8
  c->r[11]=c->r[1]+0x00000020u; // 802146DC
  c->lr=0x802146E4u; f_800C2E4C(c); // 802146E0
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 802146E4
  c->r[6]=0u+0x803A0000u; // 802146E8
  c->r[5]=0u+0x80490000u; // 802146EC
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 802146F0
  c->r[6]=c->r[6]+0x000073D8u; // 802146F4
  c->r[5]=c->r[5]+0x00001990u; // 802146F8
  c->r[30]=c->r[3]|c->r[3]; // 802146FC
  c->r[31]=c->r[4]|c->r[4]; // 80214700
  c->r[29]=c->r[6]+c->r[0]; // 80214704
  c->r[28]=c->r[5]+c->r[7]; // 80214708
  c->r[27]=0u+0x00000000u; // 8021470C
L_80214710:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 80214710
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80214714
  if (!crb(c,0)) { goto L_80214750; } // 80214718
  c->r[3]=R32(c->r[30]+0x000001D8u); // 8021471C
  c->r[5]=0u+0x00000001u; // 80214720
  c->r[4]=R32(c->r[29]+0x00000000u); // 80214724
  c->r[3]=R32(c->r[3]+0x00000010u); // 80214728
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021472C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80214730
  c->ctr=c->r[12]; // 80214734
  if (true) { c->lr=0x8021473Cu; dispatch(c,c->ctr); } // 80214738
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8021473C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80214740
  c->r[0]=c->r[0]|0x00000001u; // 80214744
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80214748
  goto L_8021477C; // 8021474C
L_80214750:;
  c->r[3]=R32(c->r[30]+0x000001D8u); // 80214750
  c->r[5]=0u+0x00000001u; // 80214754
  c->r[4]=R32(c->r[29]+0x00000000u); // 80214758
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021475C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214760
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80214764
  c->ctr=c->r[12]; // 80214768
  if (true) { c->lr=0x80214770u; dispatch(c,c->ctr); } // 8021476C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80214770
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80214774
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80214778
L_8021477C:;
  c->r[27]=c->r[27]+0x00000001u; // 8021477C
  c->r[29]=c->r[29]+0x00000004u; // 80214780
  cmps(c,0,(int32_t)c->r[27],4); // 80214784
  if (crb(c,0)) { IRQCHK(c); goto L_80214710; } // 80214788
  c->r[0]=R8(c->r[28]+0x00000014u); // 8021478C
  cmpu(c,0,c->r[0],0x00000002u); // 80214790
  if (!crb(c,0)) { goto L_8021481C; } // 80214794
  c->r[5]=0u+0x80380000u; // 80214798
  c->r[0]=0u+0x00000025u; // 8021479C
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 802147A0
  c->r[3]=c->r[31]+0x0000001Fu; // 802147A4
  c->r[4]=0u+0x00000000u; // 802147A8
  c->ctr=c->r[0]; // 802147AC
L_802147B0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802147B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802147B4
  if (!crb(c,2)) { goto L_802147CC; } // 802147B8
  c->r[0]=R32(c->r[5]+0x00000004u); // 802147BC
  cmps(c,0,(int32_t)c->r[0],21); // 802147C0
  if (!crb(c,2)) { goto L_802147CC; } // 802147C4
  goto L_802147FC; // 802147C8
L_802147CC:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802147CC
  c->r[4]=c->r[4]+0x00000001u; // 802147D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802147D4
  if (!crb(c,2)) { goto L_802147EC; } // 802147D8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802147DC
  cmps(c,0,(int32_t)c->r[0],21); // 802147E0
  if (!crb(c,2)) { goto L_802147EC; } // 802147E4
  goto L_802147FC; // 802147E8
L_802147EC:;
  c->r[5]=c->r[5]+0x00000010u; // 802147EC
  c->r[4]=c->r[4]+0x00000001u; // 802147F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802147B0; } // 802147F4
  c->r[4]=0u+0xFFFFFFFFu; // 802147F8
L_802147FC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802147FC
  c->r[3]=c->r[30]+c->r[0]; // 80214800
  c->r[29]=R32(c->r[3]+0x00000290u); // 80214804
  c->r[3]=c->r[29]|c->r[29]; // 80214808
  c->lr=0x80214810u; f_8020D2A0(c); // 8021480C
  c->r[0]=0u+0x00000001u; // 80214810
  W32(c->r[29]+0x00000014u,c->r[0]); // 80214814
  goto L_802148A0; // 80214818
L_8021481C:;
  c->r[5]=0u+0x80380000u; // 8021481C
  c->r[0]=0u+0x00000025u; // 80214820
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 80214824
  c->r[3]=c->r[31]+0x0000001Fu; // 80214828
  c->r[4]=0u+0x00000000u; // 8021482C
  c->ctr=c->r[0]; // 80214830
  c->r[0]=c->r[0]|0x00000000u; // 80214834
L_80214838:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80214838
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021483C
  if (!crb(c,2)) { goto L_80214854; } // 80214840
  c->r[0]=R32(c->r[5]+0x00000004u); // 80214844
  cmps(c,0,(int32_t)c->r[0],17); // 80214848
  if (!crb(c,2)) { goto L_80214854; } // 8021484C
  goto L_80214884; // 80214850
L_80214854:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 80214854
  c->r[4]=c->r[4]+0x00000001u; // 80214858
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021485C
  if (!crb(c,2)) { goto L_80214874; } // 80214860
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80214864
  cmps(c,0,(int32_t)c->r[0],17); // 80214868
  if (!crb(c,2)) { goto L_80214874; } // 8021486C
  goto L_80214884; // 80214870
L_80214874:;
  c->r[5]=c->r[5]+0x00000010u; // 80214874
  c->r[4]=c->r[4]+0x00000001u; // 80214878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80214838; } // 8021487C
  c->r[4]=0u+0xFFFFFFFFu; // 80214880
L_80214884:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80214884
  c->r[3]=c->r[30]+c->r[0]; // 80214888
  c->r[29]=R32(c->r[3]+0x00000290u); // 8021488C
  c->r[3]=c->r[29]|c->r[29]; // 80214890
  c->lr=0x80214898u; f_8020D2A0(c); // 80214894
  c->r[0]=0u+0x00000001u; // 80214898
  W32(c->r[29]+0x00000014u,c->r[0]); // 8021489C
L_802148A0:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 802148A0
  cmps(c,0,(int32_t)c->r[0],100); // 802148A4
  if (!crb(c,0)) { goto L_802148B4; } // 802148A8
  c->r[0]=0u+0x00000000u; // 802148AC
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 802148B0
L_802148B4:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802148B4
  c->r[3]=c->r[30]+c->r[0]; // 802148B8
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 802148BC
  c->lr=0x802148C4u; f_8020F8C0(c); // 802148C0
  c->r[11]=c->r[1]+0x00000020u; // 802148C4
  c->lr=0x802148CCu; f_800C2E98(c); // 802148C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802148CC
  c->lr=c->r[0]; // 802148D0
  c->r[1]=c->r[1]+0x00000020u; // 802148D4
  return; // 802148D8
}

// fn_802148E0
void f_802148E0(Ctx* __restrict c) {
  trace_call(0x802148E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802148E0
  c->r[0]=c->lr; // 802148E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802148E8
  c->r[4]=c->r[1]+0x0000001Cu; // 802148EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802148F0
  c->r[31]=0u+0x80380000u; // 802148F4
  c->r[31]=c->r[31]+0xFFFFF480u; // 802148F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 802148FC
  c->r[30]=c->r[3]|c->r[3]; // 80214900
  {uint32_t ea=c->r[31]+0x000002E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214904
  c->r[3]=0u+0x00000000u; // 80214908
  W32(c->r[1]+0x00000024u,c->r[29]); // 8021490C
  c->r[0]=R32(c->r[31]+0x00000330u); // 80214910
  c->f[2]=c->f[1]; // 80214914
  W32(c->r[1]+0x00000020u,c->r[28]); // 80214918
  c->f[3]=c->f[1]; // 8021491C
  c->f[4]=c->f[1]; // 80214920
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80214924
  c->lr=0x8021492Cu; f_8020BD50(c); // 80214928
  c->r[3]=0u+0x00000000u; // 8021492C
  c->r[4]=0u+0x00000000u; // 80214930
  c->r[5]=0u+0x00000000u; // 80214934
  c->r[6]=0u+0x00000000u; // 80214938
  c->lr=0x80214940u; f_8020ABE0(c); // 8021493C
  c->r[3]=0u+0x00000000u; // 80214940
  c->r[4]=0u+0x00000000u; // 80214944
  c->r[5]=0u+0x00000000u; // 80214948
  c->lr=0x80214950u; f_8020AC60(c); // 8021494C
  c->r[3]=0u+0x00000001u; // 80214950
  c->r[4]=0u+0x00000000u; // 80214954
  c->r[5]=0u+0x00000000u; // 80214958
  c->r[6]=0u+0x00000000u; // 8021495C
  c->lr=0x80214964u; f_8020ABE0(c); // 80214960
  c->r[3]=0u+0x00000001u; // 80214964
  c->r[4]=0u+0x00000000u; // 80214968
  c->r[5]=0u+0x00000000u; // 8021496C
  c->lr=0x80214974u; f_8020AC60(c); // 80214970
  c->lr=0x80214978u; f_80210FB0(c); // 80214974
  c->r[0]=R32(c->r[31]+0x00000334u); // 80214978
  c->r[4]=c->r[1]+0x00000018u; // 8021497C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80214980
  c->r[3]=0u+0x00000001u; // 80214984
  c->lr=0x8021498Cu; f_8020B860(c); // 80214988
  c->r[3]=0u+0x00000080u; // 8021498C
  c->r[4]=0u+0x00000000u; // 80214990
  c->r[5]=0u+0x00000004u; // 80214994
  c->lr=0x8021499Cu; f_80208FD0(c); // 80214998
  c->r[29]=0u+0xCC010000u; // 8021499C
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802149A0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149A4
  c->r[4]=c->r[1]+0x00000014u; // 802149A8
  {uint32_t ea=c->r[31]+0x00000340u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149AC
  c->r[3]=0u+0x00000001u; // 802149B0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149B4
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802149B8
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149BC
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149C0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149C4
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149C8
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149CC
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149D0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149D4
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149D8
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149DC
  {uint32_t ea=c->r[31]+0x00000340u; c->f[0]=c->ps1[0]=RF32(ea);} // 802149E0
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802149E4
  c->r[0]=R32(c->r[31]+0x00000338u); // 802149E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802149EC
  c->lr=0x802149F4u; f_8020B860(c); // 802149F0
  c->r[3]=0u+0x00000080u; // 802149F4
  c->r[4]=0u+0x00000000u; // 802149F8
  c->r[5]=0u+0x00000004u; // 802149FC
  c->lr=0x80214A04u; f_80208FD0(c); // 80214A00
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A04
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A08
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A0C
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A10
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A14
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A18
  {uint32_t ea=c->r[31]+0x00000348u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A1C
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A20
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A24
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A28
  {uint32_t ea=c->r[31]+0x00000348u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A2C
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A30
  {uint32_t ea=c->r[31]+0x00000344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A34
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A38
  {uint32_t ea=c->r[31]+0x0000033Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214A3C
  {uint32_t ea=c->r[29]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214A40
  c->lr=0x80214A48u; f_80210FB0(c); // 80214A44
  c->r[3]=R32(c->r[30]+0x000001D8u); // 80214A48
  c->r[4]=c->r[30]+0x000001F8u; // 80214A4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214A50
  c->r[12]=R32(c->r[12]+0x00000028u); // 80214A54
  c->ctr=c->r[12]; // 80214A58
  if (true) { c->lr=0x80214A60u; dispatch(c,c->ctr); } // 80214A5C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80214A60
  c->r[0]=R32(c->r[3]+0x00000020u); // 80214A64
  cmps(c,0,(int32_t)c->r[0],0); // 80214A68
  if (!crb(c,2)) { goto L_80214A9C; } // 80214A6C
  c->r[29]=c->r[30]+0x0000000Cu; // 80214A70
  c->r[28]=0u+0x00000003u; // 80214A74
L_80214A78:;
  c->r[3]=R32(c->r[29]+0x000001DCu); // 80214A78
  c->r[4]=c->r[30]+0x000001F8u; // 80214A7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214A80
  c->r[12]=R32(c->r[12]+0x00000028u); // 80214A84
  c->ctr=c->r[12]; // 80214A88
  if (true) { c->lr=0x80214A90u; dispatch(c,c->ctr); } // 80214A8C
  c->r[28]=addc(c,c->r[28],0xFFFFFFFFu,0); cr0(c,c->r[28]); // 80214A90
  c->r[29]=c->r[29]+0xFFFFFFFCu; // 80214A94
  if (!crb(c,0)) { IRQCHK(c); goto L_80214A78; } // 80214A98
L_80214A9C:;
  c->r[4]=R32(c->r[30]+0x000003F4u); // 80214A9C
  c->r[0]=R32(c->r[30]+0x000003F8u); // 80214AA0
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 80214AA4
  c->r[3]=c->r[3]-c->r[4]; // 80214AA8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[0]); // 80214AAC
  c->r[29]=rotl(c->r[0],0)&0x000000FFu; // 80214AB0
  c->lr=0x80214AB8u; f_80210FB0(c); // 80214AB4
  c->r[0]=R8(c->r[30]+0x00000400u); // 80214AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80214ABC
  if (crb(c,2)) { goto L_80214AE8; } // 80214AC0
  c->r[4]=R8(c->r[30]+0x00000401u); // 80214AC4
  c->r[3]=R8(c->r[30]+0x00000402u); // 80214AC8
  c->r[0]=R8(c->r[30]+0x00000403u); // 80214ACC
  W8(c->r[1]+0x00000008u,c->r[4]); // 80214AD0
  W8(c->r[1]+0x00000009u,c->r[3]); // 80214AD4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80214AD8
  W8(c->r[1]+0x0000000Bu,c->r[29]); // 80214ADC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80214AE0
  goto L_80214AF8; // 80214AE4
L_80214AE8:;
  c->r[0]=0u+0x00000000u; // 80214AE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80214AEC
  W8(c->r[1]+0x0000000Fu,c->r[29]); // 80214AF0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80214AF4
L_80214AF8:;
  W32(c->r[1]+0x00000010u,c->r[0]); // 80214AF8
  c->r[4]=c->r[1]+0x00000010u; // 80214AFC
  c->r[3]=0u+0x00000001u; // 80214B00
  c->lr=0x80214B08u; f_8020B860(c); // 80214B04
  c->r[3]=0u+0x00000080u; // 80214B08
  c->r[4]=0u+0x00000000u; // 80214B0C
  c->r[5]=0u+0x00000004u; // 80214B10
  c->lr=0x80214B18u; f_80208FD0(c); // 80214B14
  c->r[3]=0u+0xCC010000u; // 80214B18
  {uint32_t ea=c->r[31]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B1C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B20
  {uint32_t ea=c->r[31]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B24
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B28
  {uint32_t ea=c->r[31]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B30
  {uint32_t ea=c->r[31]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B34
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B38
  {uint32_t ea=c->r[31]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B3C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B40
  {uint32_t ea=c->r[31]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B44
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B48
  {uint32_t ea=c->r[31]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B4C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B50
  {uint32_t ea=c->r[31]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214B54
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80214B58
  c->r[0]=R32(c->r[1]+0x00000034u); // 80214B5C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80214B60
  c->r[30]=R32(c->r[1]+0x00000028u); // 80214B64
  c->r[29]=R32(c->r[1]+0x00000024u); // 80214B68
  c->r[28]=R32(c->r[1]+0x00000020u); // 80214B6C
  c->lr=c->r[0]; // 80214B70
  c->r[1]=c->r[1]+0x00000030u; // 80214B74
  return; // 80214B78
}

// SpeakerCallback__10homebuttonFP7OSAlarmP9OSContext
void f_80214B80(Ctx* __restrict c) {
  trace_call(0x80214B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214B80
  c->r[0]=c->lr; // 80214B84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214B88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80214B8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80214B90
  W32(c->r[1]+0x00000014u,c->r[29]); // 80214B94
  W32(c->r[1]+0x00000010u,c->r[28]); // 80214B98
  c->lr=0x80214BA0u; f_80244450(c); // 80214B9C
  c->r[4]=0u+0x80490000u; // 80214BA0
  c->r[29]=rotl(c->r[3],16)&0x0000FFFFu; // 80214BA4
  c->r[30]=R32(c->r[4]+0x00001970u); // 80214BA8
  c->r[28]=rotl(c->r[3],0)&0x0000FFFFu; // 80214BAC
  c->r[3]=c->r[29]|c->r[29]; // 80214BB0
  c->lr=0x80214BB8u; f_80265040(c); // 80214BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80214BB8
  if (crb(c,2)) { goto L_80214BD8; } // 80214BBC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80214BC0
  c->r[31]=c->r[30]+c->r[0]; // 80214BC4
  c->r[3]=R32(c->r[31]+0x0000024Cu); // 80214BC8
  c->lr=0x80214BD0u; f_8020F6F0(c); // 80214BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80214BD0
  if (!crb(c,2)) { goto L_80214C38; } // 80214BD4
L_80214BD8:;
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 80214BD8
  c->r[3]=rotl(c->r[29],16)&0xFFFF0000u; // 80214BDC
  c->r[0]=c->r[29]+0x00000002u; // 80214BE0
  c->r[5]=c->r[30]+c->r[4]; // 80214BE4
  c->r[30]=c->r[5]+0x000004C8u; // 80214BE8
  c->r[4]=c->r[3]|c->r[0]; // 80214BEC
  c->r[3]=c->r[30]|c->r[30]; // 80214BF0
  c->lr=0x80214BF8u; f_80244440(c); // 80214BF4
  c->r[3]=c->r[30]|c->r[30]; // 80214BF8
  c->lr=0x80214C00u; f_80244010(c); // 80214BFC
  c->r[4]=0u+0x80000000u; // 80214C00
  c->r[7]=0u+0x80210000u; // 80214C04
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80214C08
  c->r[3]=0u+0x10620000u; // 80214C0C
  c->r[4]=c->r[3]+0x00004DD3u; // 80214C10
  c->r[7]=c->r[7]+0x00004B80u; // 80214C14
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80214C18
  c->r[3]=c->r[30]|c->r[30]; // 80214C1C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80214C20
  c->r[5]=0u+0x00000000u; // 80214C24
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80214C28
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 80214C2C
  c->lr=0x80214C34u; f_80243F10(c); // 80214C30
  goto L_80214C44; // 80214C34
L_80214C38:;
  c->r[3]=R32(c->r[31]+0x0000024Cu); // 80214C38
  c->r[4]=c->r[28]|c->r[28]; // 80214C3C
  c->lr=0x80214C44u; f_8020F3A0(c); // 80214C40
L_80214C44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80214C44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80214C48
  c->r[30]=R32(c->r[1]+0x00000018u); // 80214C4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80214C50
  c->r[28]=R32(c->r[1]+0x00000010u); // 80214C54
  c->lr=c->r[0]; // 80214C58
  c->r[1]=c->r[1]+0x00000020u; // 80214C5C
  return; // 80214C60
}

// MotorCallback__10homebuttonFP7OSAlarmP9OSContext
void f_80214C70(Ctx* __restrict c) {
  trace_call(0x80214C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214C70
  c->r[0]=c->lr; // 80214C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214C78
  c->lr=0x80214C80u; f_80244450(c); // 80214C7C
  c->lr=0x80214C84u; f_8020F780(c); // 80214C80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214C84
  c->lr=c->r[0]; // 80214C88
  c->r[1]=c->r[1]+0x00000010u; // 80214C8C
  return; // 80214C90
}

// RetrySimpleSyncCallback__10homebuttonFP7OSAlarmP9OSContext
void f_80214CA0(Ctx* __restrict c) {
  trace_call(0x80214CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214CA0
  c->r[0]=c->lr; // 80214CA4
  c->r[4]=0u+0x80490000u; // 80214CA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214CAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80214CB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80214CB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80214CB8
  c->r[31]=R32(c->r[4]+0x00001970u); // 80214CBC
  c->lr=0x80214CC4u; f_80244450(c); // 80214CC0
  cmps(c,0,(int32_t)c->r[3],0); // 80214CC4
  c->r[30]=c->r[3]|c->r[3]; // 80214CC8
  c->r[29]=0u+0x00000000u; // 80214CCC
  if (!crb(c,2)) { goto L_80214CF0; } // 80214CD0
  c->lr=0x80214CD8u; f_80262F70(c); // 80214CD4
  cmps(c,0,(int32_t)c->r[3],0); // 80214CD8
  if (crb(c,2)) { goto L_80214D00; } // 80214CDC
  c->r[0]=0u+0x00000001u; // 80214CE0
  W8(c->r[31]+0x00000091u,c->r[0]); // 80214CE4
  c->r[29]=0u+0x00000001u; // 80214CE8
  goto L_80214D00; // 80214CEC
L_80214CF0:;
  c->lr=0x80214CF4u; f_80262F80(c); // 80214CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80214CF4
  if (crb(c,2)) { goto L_80214D00; } // 80214CF8
  c->r[29]=0u+0x00000001u; // 80214CFC
L_80214D00:;
  cmps(c,0,(int32_t)c->r[29],0); // 80214D00
  if (!crb(c,2)) { goto L_80214D50; } // 80214D04
  c->r[3]=c->r[31]+0x00000588u; // 80214D08
  c->lr=0x80214D10u; f_80244010(c); // 80214D0C
  c->r[4]=c->r[30]|c->r[30]; // 80214D10
  c->r[3]=c->r[31]+0x00000588u; // 80214D14
  c->lr=0x80214D1Cu; f_80244440(c); // 80214D18
  c->r[4]=0u+0x80000000u; // 80214D1C
  c->r[7]=0u+0x80210000u; // 80214D20
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80214D24
  c->r[3]=0u+0x10620000u; // 80214D28
  c->r[4]=c->r[3]+0x00004DD3u; // 80214D2C
  c->r[7]=c->r[7]+0x00004CA0u; // 80214D30
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80214D34
  c->r[3]=c->r[31]+0x00000588u; // 80214D38
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80214D3C
  c->r[5]=0u+0x00000000u; // 80214D40
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80214D44
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80214D48
  c->lr=0x80214D50u; f_80243F10(c); // 80214D4C
L_80214D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80214D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80214D54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80214D58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80214D5C
  c->lr=c->r[0]; // 80214D60
  c->r[1]=c->r[1]+0x00000020u; // 80214D64
  return; // 80214D68
}

// fn_80214D70
void f_80214D70(Ctx* __restrict c) {
  trace_call(0x80214D70u);
  cmps(c,0,(int32_t)c->r[3],1); // 80214D70
  if (!crb(c,2)) { goto L_80214D88; } // 80214D74
  c->r[5]=0u+0x80490000u; // 80214D78
  c->r[0]=0u+0x00000001u; // 80214D7C
  c->r[5]=R32(c->r[5]+0x00001970u); // 80214D80
  W8(c->r[5]+0x00000092u,c->r[0]); // 80214D84
L_80214D88:;
  c->r[5]=0u+0x80490000u; // 80214D88
  c->r[5]=R32(c->r[5]+0x00001970u); // 80214D8C
  c->r[12]=R32(c->r[5]+0x000001ACu); // 80214D90
  cmps(c,0,(int32_t)c->r[12],0); // 80214D94
  if (crb(c,2)) return; // 80214D98
  c->ctr=c->r[12]; // 80214D9C
  if (true) { dispatch(c,c->ctr); return; } // 80214DA0
}

// fn_80214DA4
void f_80214DA4(Ctx* __restrict c) {
  trace_call(0x80214DA4u);
  return; // 80214DA4
}

// fn_80214DB0
void f_80214DB0(Ctx* __restrict c) {
  trace_call(0x80214DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214DB0
  c->r[0]=c->lr; // 80214DB4
  W32(c->r[1]+0x00000104u,c->r[0]); // 80214DB8
  c->r[11]=c->r[1]+0x000000B0u; // 80214DBC
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80214DC0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80214DC4
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80214DC8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 80214DCC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 80214DD0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 80214DD4
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[28]);} // 80214DD8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,28,ea,0,0);} // 80214DDC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[27]);} // 80214DE0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,27,ea,0,0);} // 80214DE4
  c->lr=0x80214DECu; f_800C2E18(c); // 80214DE8
  c->r[28]=0u+0x80380000u; // 80214DEC
  c->r[29]=0u+0x803A0000u; // 80214DF0
  c->r[28]=c->r[28]+0xFFFFF480u; // 80214DF4
  c->r[15]=c->r[3]|c->r[3]; // 80214DF8
  c->r[24]=0u+0x80490000u; // 80214DFC
  c->r[29]=c->r[29]+0x000068E8u; // 80214E00
  {uint32_t ea=c->r[28]+0x00000350u; c->f[31]=c->ps1[31]=RF32(ea);} // 80214E04
  c->r[27]=c->r[4]|c->r[4]; // 80214E08
  {uint32_t ea=c->r[28]+0x0000031Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 80214E0C
  c->r[26]=c->r[15]|c->r[15]; // 80214E10
  {uint32_t ea=c->r[28]+0x00000358u; c->f[29]=c->ps1[29]=RF32(ea);} // 80214E14
  c->r[25]=c->r[4]|c->r[4]; // 80214E18
  {uint32_t ea=c->r[28]+0x000002E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80214E1C
  c->r[24]=c->r[24]+0x00001990u; // 80214E20
  {uint32_t ea=c->r[28]+0x00000354u; c->f[28]=c->ps1[28]=RF32(ea);} // 80214E24
  c->r[23]=c->r[3]+0x00000408u; // 80214E28
  c->r[21]=c->r[3]+0x000004C8u; // 80214E2C
  c->r[20]=c->r[29]+0x00000AF0u; // 80214E30
  c->r[17]=0u+0x00000000u; // 80214E34
  c->r[22]=0u+0x00000000u; // 80214E38
  c->r[30]=0u+0x00000001u; // 80214E3C
  c->r[31]=0u+0x00000000u; // 80214E40
  c->r[14]=0u+0x80000000u; // 80214E44
L_80214E48:;
  c->r[6]=R32(c->r[27]+0x00000000u); // 80214E48
  cmps(c,0,(int32_t)c->r[6],0); // 80214E4C
  if (crb(c,2)) { goto L_80215444; } // 80214E50
  c->r[0]=R8(c->r[6]+0x0000005Du); // 80214E54
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80214E58
  cmps(c,0,(int32_t)c->r[5],-1); // 80214E5C
  if (crb(c,2)) { goto L_80214FC0; } // 80214E60
  c->r[3]=0u+0x80490000u; // 80214E64
  c->r[4]=R32(c->r[26]+0x00000058u); // 80214E68
  c->r[3]=R32(c->r[3]+0x00001970u); // 80214E6C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80214E70
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214E74
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[0]); // 80214E78
  c->f[0]=c->ps1[0]=S(c->f[27]+c->f[0]); // 80214E7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80214E80
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 80214E84
  c->r[0]=R32(c->r[1]+0x00000064u); // 80214E88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80214E8C
  if (!crb(c,1)) { goto L_80214F40; } // 80214E90
  cmps(c,0,(int32_t)c->r[5],0); // 80214E94
  if (crb(c,2)) { goto L_80214EA4; } // 80214E98
  cmps(c,0,(int32_t)c->r[5],-7); // 80214E9C
  if (!crb(c,2)) { goto L_80214F48; } // 80214EA0
L_80214EA4:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80214EA4
  cmpu(c,0,c->r[3],0x00000002u); // 80214EA8
  if (!crb(c,2)) { goto L_80214EBC; } // 80214EAC
  c->r[0]=R8(c->r[6]+0x0000005Cu); // 80214EB0
  cmpu(c,0,c->r[0],0x00000002u); // 80214EB4
  if (crb(c,2)) { goto L_80214EEC; } // 80214EB8
L_80214EBC:;
  cmpu(c,0,c->r[3],0x00000007u); // 80214EBC
  if (!crb(c,2)) { goto L_80214ED0; } // 80214EC0
  c->r[0]=R8(c->r[6]+0x0000005Cu); // 80214EC4
  cmpu(c,0,c->r[0],0x00000007u); // 80214EC8
  if (crb(c,2)) { goto L_80214EEC; } // 80214ECC
L_80214ED0:;
  c->r[0]=R8(c->r[6]+0x0000005Eu); // 80214ED0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80214ED4
  if (!crb(c,1)) { goto L_80214EE4; } // 80214ED8
  c->r[5]=0u+0x00000001u; // 80214EDC
  goto L_80214EF0; // 80214EE0
L_80214EE4:;
  c->r[5]=0u+0x00000000u; // 80214EE4
  goto L_80214EF0; // 80214EE8
L_80214EEC:;
  c->r[5]=0u+0x00000001u; // 80214EEC
L_80214EF0:;
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80214EF0
  c->r[4]=c->r[25]|c->r[25]; // 80214EF4
  c->lr=0x80214EFCu; f_8020F180(c); // 80214EF8
  c->r[3]=R32(c->r[15]+0x00000004u); // 80214EFC
  c->r[0]=R32(c->r[3]+0x00000020u); // 80214F00
  cmps(c,0,(int32_t)c->r[0],0); // 80214F04
  if (!crb(c,2)) { goto L_80214F48; } // 80214F08
  c->r[3]=R32(c->r[26]+0x000001DCu); // 80214F0C
  c->r[5]=0u+0x00000001u; // 80214F10
  c->r[4]=R32(c->r[29]+0x00000058u); // 80214F14
  c->r[3]=R32(c->r[3]+0x00000010u); // 80214F18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214F1C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80214F20
  c->ctr=c->r[12]; // 80214F24
  if (true) { c->lr=0x80214F2Cu; dispatch(c,c->ctr); } // 80214F28
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80214F2C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80214F30
  c->r[0]=c->r[0]|0x00000001u; // 80214F34
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80214F38
  goto L_80214F48; // 80214F3C
L_80214F40:;
  c->r[0]=c->r[4]+0x00000001u; // 80214F40
  W32(c->r[26]+0x00000058u,c->r[0]); // 80214F44
L_80214F48:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 80214F48
  cmpu(c,0,c->r[4],0x00000002u); // 80214F4C
  if (!crb(c,2)) { goto L_80214F64; } // 80214F50
  c->r[3]=R32(c->r[27]+0x00000000u); // 80214F54
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80214F58
  cmpu(c,0,c->r[0],0x00000002u); // 80214F5C
  if (crb(c,2)) { goto L_80215004; } // 80214F60
L_80214F64:;
  cmpu(c,0,c->r[4],0x00000007u); // 80214F64
  if (!crb(c,2)) { goto L_80214F7C; } // 80214F68
  c->r[3]=R32(c->r[27]+0x00000000u); // 80214F6C
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80214F70
  cmpu(c,0,c->r[0],0x00000007u); // 80214F74
  if (crb(c,2)) { goto L_80215004; } // 80214F78
L_80214F7C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80214F7C
  c->r[0]=R8(c->r[3]+0x0000005Eu); // 80214F80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80214F84
  if (crb(c,1)) { goto L_80215004; } // 80214F88
  c->r[3]=c->r[17]|c->r[17]; // 80214F8C
  c->r[4]=c->r[1]+0x00000008u; // 80214F90
  c->lr=0x80214F98u; f_80264290(c); // 80214F94
  c->r[4]=R32(c->r[27]+0x00000000u); // 80214F98
  c->r[0]=R8(c->r[4]+0x0000005Du); // 80214F9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80214FA0
  cmps(c,0,(int32_t)c->r[0],-2); // 80214FA4
  if (crb(c,2)) { goto L_80215004; } // 80214FA8
  cmps(c,0,(int32_t)c->r[3],-2); // 80214FAC
  if (crb(c,2)) { goto L_80215004; } // 80214FB0
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80214FB4
  c->lr=0x80214FBCu; f_8020F350(c); // 80214FB8
  goto L_80215004; // 80214FBC
L_80214FC0:;
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80214FC0
  c->lr=0x80214FC8u; f_8020F350(c); // 80214FC4
  c->r[3]=R32(c->r[15]+0x00000004u); // 80214FC8
  c->r[0]=R32(c->r[3]+0x00000020u); // 80214FCC
  cmps(c,0,(int32_t)c->r[0],0); // 80214FD0
  if (!crb(c,2)) { goto L_80215004; } // 80214FD4
  c->r[3]=R32(c->r[26]+0x000001DCu); // 80214FD8
  c->r[5]=0u+0x00000001u; // 80214FDC
  c->r[4]=R32(c->r[29]+0x00000058u); // 80214FE0
  c->r[3]=R32(c->r[3]+0x00000010u); // 80214FE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80214FE8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80214FEC
  c->ctr=c->r[12]; // 80214FF0
  if (true) { c->lr=0x80214FF8u; dispatch(c,c->ctr); } // 80214FF4
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80214FF8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80214FFC
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80215000
L_80215004:;
  c->r[3]=c->r[15]+c->r[17]; // 80215004
  c->r[0]=R8(c->r[3]+0x00000080u); // 80215008
  cmps(c,0,(int32_t)c->r[0],0); // 8021500C
  if (!crb(c,2)) { goto L_8021525C; } // 80215010
  W32(c->r[15]+0x00000088u,c->r[17]); // 80215014
  c->r[4]=c->r[24]|c->r[24]; // 80215018
  W8(c->r[3]+0x00000080u,c->r[30]); // 8021501C
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80215020
  c->lr=0x80215028u; f_8020F7B0(c); // 80215024
  c->r[0]=0u+0x00000025u; // 80215028
  c->r[5]=c->r[28]+0x00000068u; // 8021502C
  c->r[3]=c->r[17]+0x0000001Fu; // 80215030
  c->r[4]=0u+0x00000000u; // 80215034
  c->ctr=c->r[0]; // 80215038
  c->r[0]=c->r[0]|0x00000000u; // 8021503C
L_80215040:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80215040
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215044
  if (!crb(c,2)) { goto L_8021505C; } // 80215048
  c->r[0]=R32(c->r[5]+0x00000004u); // 8021504C
  cmps(c,0,(int32_t)c->r[0],17); // 80215050
  if (!crb(c,2)) { goto L_8021505C; } // 80215054
  goto L_8021508C; // 80215058
L_8021505C:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 8021505C
  c->r[4]=c->r[4]+0x00000001u; // 80215060
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215064
  if (!crb(c,2)) { goto L_8021507C; } // 80215068
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021506C
  cmps(c,0,(int32_t)c->r[0],17); // 80215070
  if (!crb(c,2)) { goto L_8021507C; } // 80215074
  goto L_8021508C; // 80215078
L_8021507C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021507C
  c->r[4]=c->r[4]+0x00000001u; // 80215080
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215040; } // 80215084
  c->r[4]=0u+0xFFFFFFFFu; // 80215088
L_8021508C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021508C
  c->r[3]=c->r[15]+c->r[0]; // 80215090
  c->r[16]=R32(c->r[3]+0x00000290u); // 80215094
  c->r[3]=c->r[16]|c->r[16]; // 80215098
  c->lr=0x802150A0u; f_8020D2A0(c); // 8021509C
  c->r[0]=0u+0x00000025u; // 802150A0
  W32(c->r[16]+0x00000014u,c->r[30]); // 802150A4
  c->r[5]=c->r[28]+0x00000068u; // 802150A8
  c->r[3]=c->r[17]+0x0000001Fu; // 802150AC
  c->r[4]=0u+0x00000000u; // 802150B0
  c->ctr=c->r[0]; // 802150B4
L_802150B8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802150B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802150BC
  if (!crb(c,2)) { goto L_802150D4; } // 802150C0
  c->r[0]=R32(c->r[5]+0x00000004u); // 802150C4
  cmps(c,0,(int32_t)c->r[0],18); // 802150C8
  if (!crb(c,2)) { goto L_802150D4; } // 802150CC
  goto L_80215104; // 802150D0
L_802150D4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802150D4
  c->r[4]=c->r[4]+0x00000001u; // 802150D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802150DC
  if (!crb(c,2)) { goto L_802150F4; } // 802150E0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802150E4
  cmps(c,0,(int32_t)c->r[0],18); // 802150E8
  if (!crb(c,2)) { goto L_802150F4; } // 802150EC
  goto L_80215104; // 802150F0
L_802150F4:;
  c->r[5]=c->r[5]+0x00000010u; // 802150F4
  c->r[4]=c->r[4]+0x00000001u; // 802150F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802150B8; } // 802150FC
  c->r[4]=0u+0xFFFFFFFFu; // 80215100
L_80215104:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215104
  c->r[6]=c->r[28]+0x00000068u; // 80215108
  c->r[4]=c->r[15]+c->r[0]; // 8021510C
  c->r[3]=c->r[17]+0x0000001Fu; // 80215110
  c->r[4]=R32(c->r[4]+0x00000290u); // 80215114
  c->r[0]=0u+0x00000025u; // 80215118
  c->r[5]=0u+0x00000000u; // 8021511C
  W32(c->r[4]+0x00000014u,c->r[31]); // 80215120
  c->ctr=c->r[0]; // 80215124
L_80215128:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80215128
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021512C
  if (!crb(c,2)) { goto L_80215144; } // 80215130
  c->r[0]=R32(c->r[6]+0x00000004u); // 80215134
  cmps(c,0,(int32_t)c->r[0],15); // 80215138
  if (!crb(c,2)) { goto L_80215144; } // 8021513C
  goto L_80215174; // 80215140
L_80215144:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80215144
  c->r[5]=c->r[5]+0x00000001u; // 80215148
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021514C
  if (!crb(c,2)) { goto L_80215164; } // 80215150
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80215154
  cmps(c,0,(int32_t)c->r[0],15); // 80215158
  if (!crb(c,2)) { goto L_80215164; } // 8021515C
  goto L_80215174; // 80215160
L_80215164:;
  c->r[6]=c->r[6]+0x00000010u; // 80215164
  c->r[5]=c->r[5]+0x00000001u; // 80215168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215128; } // 8021516C
  c->r[5]=0u+0xFFFFFFFFu; // 80215170
L_80215174:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80215174
  c->r[3]=c->r[15]+c->r[0]; // 80215178
  c->r[16]=R32(c->r[3]+0x00000290u); // 8021517C
  c->r[3]=c->r[16]|c->r[16]; // 80215180
  c->lr=0x80215188u; f_8020D2A0(c); // 80215184
  W32(c->r[16]+0x00000014u,c->r[30]); // 80215188
  c->r[3]=0u+0x00000000u; // 8021518C
  c->r[4]=R32(c->r[15]+0x00000004u); // 80215190
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215194
  cmps(c,0,(int32_t)c->r[12],0); // 80215198
  if (crb(c,2)) { goto L_802151B0; } // 8021519C
  c->r[4]=c->r[17]+0x00000011u; // 802151A0
  c->r[3]=0u+0x00000005u; // 802151A4
  c->ctr=c->r[12]; // 802151A8
  if (true) { c->lr=0x802151B0u; dispatch(c,c->ctr); } // 802151AC
L_802151B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802151B0
  if (!crb(c,2)) { goto L_802151C0; } // 802151B4
  c->r[3]=c->r[17]+0x00000011u; // 802151B8
  c->lr=0x802151C0u; f_80210650(c); // 802151BC
L_802151C0:;
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802151C0
  c->lr=0x802151C8u; f_8020F370(c); // 802151C4
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802151C8
  c->lr=0x802151D0u; f_8020F710(c); // 802151CC
  c->r[4]=R32(c->r[26]+0x0000024Cu); // 802151D0
  c->r[3]=c->r[23]|c->r[23]; // 802151D4
  c->lr=0x802151DCu; f_80244440(c); // 802151D8
  c->r[3]=c->r[23]|c->r[23]; // 802151DC
  c->lr=0x802151E4u; f_80244010(c); // 802151E0
  c->r[0]=R32(c->r[14]+0x000000F8u); // 802151E4
  c->r[3]=0u+0x10620000u; // 802151E8
  c->r[6]=c->r[3]+0x00004DD3u; // 802151EC
  c->r[4]=0u+0x80210000u; // 802151F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802151F4
  c->r[3]=c->r[23]|c->r[23]; // 802151F8
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 802151FC
  c->r[7]=c->r[4]+0x00004C70u; // 80215200
  c->r[5]=0u+0x00000000u; // 80215204
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80215208
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)300); // 8021520C
  c->lr=0x80215214u; f_80243F10(c); // 80215210
  c->r[0]=c->r[17]+0x00000002u; // 80215214
  c->r[3]=c->r[21]|c->r[21]; // 80215218
  c->r[4]=c->r[22]|c->r[0]; // 8021521C
  c->lr=0x80215224u; f_80244440(c); // 80215220
  c->r[3]=c->r[21]|c->r[21]; // 80215224
  c->lr=0x8021522Cu; f_80244010(c); // 80215228
  c->r[0]=R32(c->r[14]+0x000000F8u); // 8021522C
  c->r[3]=0u+0x10620000u; // 80215230
  c->r[6]=c->r[3]+0x00004DD3u; // 80215234
  c->r[4]=0u+0x80210000u; // 80215238
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8021523C
  c->r[3]=c->r[21]|c->r[21]; // 80215240
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 80215244
  c->r[7]=c->r[4]+0x00004B80u; // 80215248
  c->r[5]=0u+0x00000000u; // 8021524C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80215250
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)400); // 80215254
  c->lr=0x8021525Cu; f_80243F10(c); // 80215258
L_8021525C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8021525C
  c->r[0]=R8(c->r[3]+0x0000005Du); // 80215260
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80215264
  if (crb(c,2)) { goto L_80215274; } // 80215268
  cmps(c,0,(int32_t)c->r[0],-7); // 8021526C
  if (!crb(c,2)) { goto L_80215424; } // 80215270
L_80215274:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 80215274
  cmpu(c,0,c->r[4],0x00000002u); // 80215278
  if (!crb(c,2)) { goto L_8021528C; } // 8021527C
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80215280
  cmpu(c,0,c->r[0],0x00000002u); // 80215284
  if (crb(c,2)) { goto L_802152A0; } // 80215288
L_8021528C:;
  cmpu(c,0,c->r[4],0x00000007u); // 8021528C
  if (!crb(c,2)) { goto L_802152BC; } // 80215290
  c->r[0]=R8(c->r[3]+0x0000005Cu); // 80215294
  cmpu(c,0,c->r[0],0x00000007u); // 80215298
  if (!crb(c,2)) { goto L_802152BC; } // 8021529C
L_802152A0:;
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[30]);} // 802152A0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[30]);} // 802152A4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[28]);} // 802152A8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[30]);} // 802152AC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[30]);} // 802152B0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[28]);} // 802152B4
  goto L_802152F8; // 802152B8
L_802152BC:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 802152BC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802152C0
  c->r[0]=R32(c->r[3]+0x00000034u); // 802152C4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802152C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 802152CC
  c->f[1]=-c->f[0]; // 802152D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802152D4
  c->lr=0x802152DCu; f_80224A90(c); // 802152D8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802152DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[30]);} // 802152E0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[30]);} // 802152E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 802152E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[30]);} // 802152EC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[30]);} // 802152F0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802152F4
L_802152F8:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 802152F8
  c->r[0]=R32(c->r[3]+0x00000020u); // 802152FC
  cmps(c,0,(int32_t)c->r[0],0); // 80215300
  if (!crb(c,2)) { goto L_80215378; } // 80215304
  c->r[3]=R32(c->r[26]+0x000001DCu); // 80215308
  c->r[5]=0u+0x00000001u; // 8021530C
  c->r[4]=R32(c->r[29]+0x00000064u); // 80215310
  c->r[3]=R32(c->r[3]+0x00000010u); // 80215314
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215318
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021531C
  c->ctr=c->r[12]; // 80215320
  if (true) { c->lr=0x80215328u; dispatch(c,c->ctr); } // 80215324
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215328
  c->r[5]=0u+0x00000001u; // 8021532C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80215330
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215334
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80215338
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021533C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80215340
  c->r[3]=R32(c->r[26]+0x000001DCu); // 80215344
  c->r[4]=R32(c->r[29]+0x00000070u); // 80215348
  c->r[3]=R32(c->r[3]+0x00000010u); // 8021534C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215350
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80215354
  c->ctr=c->r[12]; // 80215358
  if (true) { c->lr=0x80215360u; dispatch(c,c->ctr); } // 8021535C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215360
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80215364
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215368
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8021536C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80215370
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80215374
L_80215378:;
  c->r[0]=R32(c->r[15]+0x0000007Cu); // 80215378
  cmps(c,0,(int32_t)c->r[0],100); // 8021537C
  if (!crb(c,1)) { goto L_80215390; } // 80215380
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80215384
  c->r[4]=c->r[24]|c->r[24]; // 80215388
  c->lr=0x80215390u; f_8020F7B0(c); // 8021538C
L_80215390:;
  c->r[3]=c->r[15]|c->r[15]; // 80215390
  c->r[4]=c->r[17]|c->r[17]; // 80215394
  c->lr=0x8021539Cu; f_802156F0(c); // 80215398
  c->r[3]=R32(c->r[15]+0x00000004u); // 8021539C
  c->r[0]=R32(c->r[3]+0x00000020u); // 802153A0
  cmps(c,0,(int32_t)c->r[0],0); // 802153A4
  if (!crb(c,2)) { goto L_80215424; } // 802153A8
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802153AC
  c->lr=0x802153B4u; f_8020F700(c); // 802153B0
  c->r[4]=R32(c->r[15]+0x000001D8u); // 802153B4
  c->r[16]=c->r[3]|c->r[3]; // 802153B8
  c->r[3]=c->r[1]+0x00000020u; // 802153BC
  c->lr=0x802153C4u; f_8021C180(c); // 802153C0
  c->r[3]=R32(c->r[26]+0x000001DCu); // 802153C4
  c->r[5]=0u+0x00000001u; // 802153C8
  {uint32_t ea=c->r[16]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802153CC
  c->r[3]=R32(c->r[3]+0x00000010u); // 802153D0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802153D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802153D8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802153DC
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802153E0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802153E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802153E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802153EC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802153F0
  c->r[4]=R32(c->r[29]+0x00000058u); // 802153F4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802153F8
  c->ctr=c->r[12]; // 802153FC
  if (true) { c->lr=0x80215404u; dispatch(c,c->ctr); } // 80215400
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215404
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80215408
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021540C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 80215410
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80215414
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80215418
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[30]);} // 8021541C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[30]);} // 80215420
L_80215424:;
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 80215424
  c->lr=0x8021542Cu; f_8020F890(c); // 80215428
  cmps(c,0,(int32_t)c->r[3],0); // 8021542C
  if (crb(c,2)) { goto L_80215660; } // 80215430
  c->r[3]=c->r[15]|c->r[15]; // 80215434
  c->r[4]=c->r[17]|c->r[17]; // 80215438
  c->lr=0x80215440u; f_802146D0(c); // 8021543C
  goto L_80215660; // 80215440
L_80215444:;
  c->r[18]=c->r[15]+c->r[17]; // 80215444
  c->r[0]=R8(c->r[18]+0x00000080u); // 80215448
  cmps(c,0,(int32_t)c->r[0],0); // 8021544C
  if (crb(c,2)) { goto L_802155E4; } // 80215450
  c->r[0]=0u+0x00000025u; // 80215454
  c->r[5]=c->r[28]+0x00000068u; // 80215458
  c->r[3]=c->r[17]+0x0000001Fu; // 8021545C
  c->r[4]=0u+0x00000000u; // 80215460
  c->ctr=c->r[0]; // 80215464
L_80215468:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80215468
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021546C
  if (!crb(c,2)) { goto L_80215484; } // 80215470
  c->r[0]=R32(c->r[5]+0x00000004u); // 80215474
  cmps(c,0,(int32_t)c->r[0],17); // 80215478
  if (!crb(c,2)) { goto L_80215484; } // 8021547C
  goto L_802154B4; // 80215480
L_80215484:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 80215484
  c->r[4]=c->r[4]+0x00000001u; // 80215488
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021548C
  if (!crb(c,2)) { goto L_802154A4; } // 80215490
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80215494
  cmps(c,0,(int32_t)c->r[0],17); // 80215498
  if (!crb(c,2)) { goto L_802154A4; } // 8021549C
  goto L_802154B4; // 802154A0
L_802154A4:;
  c->r[5]=c->r[5]+0x00000010u; // 802154A4
  c->r[4]=c->r[4]+0x00000001u; // 802154A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215468; } // 802154AC
  c->r[4]=0u+0xFFFFFFFFu; // 802154B0
L_802154B4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802154B4
  c->r[3]=c->r[15]+c->r[0]; // 802154B8
  c->r[16]=R32(c->r[3]+0x00000290u); // 802154BC
  c->r[3]=c->r[16]|c->r[16]; // 802154C0
  c->lr=0x802154C8u; f_8020D2A0(c); // 802154C4
  c->r[0]=0u+0x00000025u; // 802154C8
  W32(c->r[16]+0x00000014u,c->r[30]); // 802154CC
  c->r[5]=c->r[28]+0x00000068u; // 802154D0
  c->r[3]=c->r[17]+0x0000001Fu; // 802154D4
  c->r[4]=0u+0x00000000u; // 802154D8
  c->ctr=c->r[0]; // 802154DC
L_802154E0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802154E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802154E4
  if (!crb(c,2)) { goto L_802154FC; } // 802154E8
  c->r[0]=R32(c->r[5]+0x00000004u); // 802154EC
  cmps(c,0,(int32_t)c->r[0],18); // 802154F0
  if (!crb(c,2)) { goto L_802154FC; } // 802154F4
  goto L_8021552C; // 802154F8
L_802154FC:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802154FC
  c->r[4]=c->r[4]+0x00000001u; // 80215500
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215504
  if (!crb(c,2)) { goto L_8021551C; } // 80215508
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021550C
  cmps(c,0,(int32_t)c->r[0],18); // 80215510
  if (!crb(c,2)) { goto L_8021551C; } // 80215514
  goto L_8021552C; // 80215518
L_8021551C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021551C
  c->r[4]=c->r[4]+0x00000001u; // 80215520
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802154E0; } // 80215524
  c->r[4]=0u+0xFFFFFFFFu; // 80215528
L_8021552C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021552C
  c->r[3]=c->r[15]+c->r[0]; // 80215530
  c->r[16]=R32(c->r[3]+0x00000290u); // 80215534
  c->r[3]=c->r[16]|c->r[16]; // 80215538
  c->lr=0x80215540u; f_8020D2A0(c); // 8021553C
  W32(c->r[16]+0x00000014u,c->r[30]); // 80215540
  c->r[19]=c->r[20]|c->r[20]; // 80215544
  c->r[16]=0u+0x00000000u; // 80215548
L_8021554C:;
  c->r[3]=R32(c->r[15]+0x000001D8u); // 8021554C
  c->r[5]=0u+0x00000001u; // 80215550
  c->r[4]=R32(c->r[19]+0x00000000u); // 80215554
  c->r[3]=R32(c->r[3]+0x00000010u); // 80215558
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021555C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80215560
  c->ctr=c->r[12]; // 80215564
  if (true) { c->lr=0x8021556Cu; dispatch(c,c->ctr); } // 80215568
  c->r[0]=R8(c->r[3]+0x000000CFu); // 8021556C
  c->r[16]=c->r[16]+0x00000001u; // 80215570
  cmps(c,0,(int32_t)c->r[16],4); // 80215574
  c->r[19]=c->r[19]+0x00000004u; // 80215578
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8021557C
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80215580
  if (crb(c,0)) { IRQCHK(c); goto L_8021554C; } // 80215584
  c->r[3]=R32(c->r[15]+0x00000004u); // 80215588
  c->r[0]=R32(c->r[3]+0x00000020u); // 8021558C
  cmps(c,0,(int32_t)c->r[0],0); // 80215590
  if (!crb(c,2)) { goto L_802155C4; } // 80215594
  c->r[3]=R32(c->r[26]+0x000001DCu); // 80215598
  c->r[5]=0u+0x00000001u; // 8021559C
  c->r[4]=R32(c->r[29]+0x00000058u); // 802155A0
  c->r[3]=R32(c->r[3]+0x00000010u); // 802155A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802155A8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802155AC
  c->ctr=c->r[12]; // 802155B0
  if (true) { c->lr=0x802155B8u; dispatch(c,c->ctr); } // 802155B4
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802155B8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802155BC
  W8(c->r[3]+0x000000CFu,c->r[0]); // 802155C0
L_802155C4:;
  W32(c->r[26]+0x00000058u,c->r[31]); // 802155C4
  W8(c->r[18]+0x00000080u,c->r[31]); // 802155C8
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802155CC
  c->lr=0x802155D4u; f_8020F350(c); // 802155D0
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802155D4
  c->lr=0x802155DCu; f_8020F330(c); // 802155D8
  c->r[3]=R32(c->r[26]+0x0000024Cu); // 802155DC
  c->lr=0x802155E4u; f_8020F380(c); // 802155E0
L_802155E4:;
  cmps(c,0,(int32_t)c->r[17],0); // 802155E4
  if (!crb(c,0)) { goto L_80215630; } // 802155E8
  c->r[16]=0u+0x00000000u; // 802155EC
L_802155F0:;
  c->r[3]=R32(c->r[15]+0x000001F0u); // 802155F0
  c->r[4]=c->r[16]|c->r[16]; // 802155F4
  {uint32_t ea=c->r[28]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802155F8
  c->r[5]=0u+0x00000000u; // 802155FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215600
  c->r[6]=0u+0x00000000u; // 80215604
  c->f[2]=c->f[1]; // 80215608
  c->r[7]=0u+0x00000000u; // 8021560C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80215610
  c->r[8]=0u+0x00000000u; // 80215614
  c->ctr=c->r[12]; // 80215618
  if (true) { c->lr=0x80215620u; dispatch(c,c->ctr); } // 8021561C
  c->r[16]=c->r[16]+0x00000001u; // 80215620
  cmps(c,0,(int32_t)c->r[16],8); // 80215624
  if (crb(c,0)) { IRQCHK(c); goto L_802155F0; } // 80215628
  goto L_80215660; // 8021562C
L_80215630:;
  c->r[3]=R32(c->r[15]+0x000001F0u); // 80215630
  c->r[4]=c->r[17]|c->r[17]; // 80215634
  {uint32_t ea=c->r[28]+0x000002FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80215638
  c->r[5]=0u+0x00000000u; // 8021563C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215640
  c->r[6]=0u+0x00000000u; // 80215644
  c->f[2]=c->f[1]; // 80215648
  c->r[7]=0u+0x00000000u; // 8021564C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80215650
  c->r[8]=0u+0x00000000u; // 80215654
  c->ctr=c->r[12]; // 80215658
  if (true) { c->lr=0x80215660u; dispatch(c,c->ctr); } // 8021565C
L_80215660:;
  c->r[17]=c->r[17]+0x00000001u; // 80215660
  c->r[22]=c->r[22]+0x00010000u; // 80215664
  cmps(c,0,(int32_t)c->r[17],4); // 80215668
  c->r[21]=c->r[21]+0x00000030u; // 8021566C
  c->r[20]=c->r[20]+0x00000010u; // 80215670
  c->r[27]=c->r[27]+0x00000010u; // 80215674
  c->r[26]=c->r[26]+0x00000004u; // 80215678
  c->r[25]=c->r[25]+0x00000010u; // 8021567C
  c->r[24]=c->r[24]+0x00000018u; // 80215680
  c->r[23]=c->r[23]+0x00000030u; // 80215684
  if (crb(c,0)) { IRQCHK(c); goto L_80214E48; } // 80215688
  c->r[3]=R32(c->r[15]+0x0000007Cu); // 8021568C
  cmps(c,0,(int32_t)c->r[3],100); // 80215690
  if (!crb(c,1)) { goto L_802156A4; } // 80215694
  c->r[0]=0u+0x00000000u; // 80215698
  W32(c->r[15]+0x0000007Cu,c->r[0]); // 8021569C
  goto L_802156AC; // 802156A0
L_802156A4:;
  c->r[0]=c->r[3]+0x00000001u; // 802156A4
  W32(c->r[15]+0x0000007Cu,c->r[0]); // 802156A8
L_802156AC:;
  c->r[11]=c->r[1]+0x000000B0u; // 802156AC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 802156B0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 802156B4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 802156B8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 802156BC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 802156C0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 802156C4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,28,ea,0,0);} // 802156C8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[28]=RF64(ea);} // 802156CC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,27,ea,0,0);} // 802156D0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[27]=RF64(ea);} // 802156D4
  c->lr=0x802156DCu; f_800C2E64(c); // 802156D8
  c->r[0]=R32(c->r[1]+0x00000104u); // 802156DC
  c->lr=c->r[0]; // 802156E0
  c->r[1]=c->r[1]+0x00000100u; // 802156E4
  return; // 802156E8
}

// fn_802156F0
void f_802156F0(Ctx* __restrict c) {
  trace_call(0x802156F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802156F0
  c->r[0]=c->lr; // 802156F4
  c->r[5]=0u+0x43300000u; // 802156F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802156FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80215700
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80215704
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80215708
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8021570C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80215710
  c->r[31]=0u+0x80380000u; // 80215714
  c->r[31]=c->r[31]+0xFFFFF480u; // 80215718
  W32(c->r[1]+0x00000028u,c->r[30]); // 8021571C
  c->r[30]=c->r[3]|c->r[3]; // 80215720
  W32(c->r[1]+0x00000024u,c->r[29]); // 80215724
  W32(c->r[1]+0x00000020u,c->r[28]); // 80215728
  c->r[28]=c->r[4]|c->r[4]; // 8021572C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80215730
  W32(c->r[1]+0x00000008u,c->r[5]); // 80215734
  cmps(c,0,(int32_t)c->r[0],2); // 80215738
  W32(c->r[1]+0x00000010u,c->r[5]); // 8021573C
  if (!crb(c,2)) { goto L_80215F3C; } // 80215740
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215744
  c->r[3]=c->r[3]+c->r[0]; // 80215748
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 8021574C
  c->lr=0x80215754u; f_8020F700(c); // 80215750
  {uint32_t ea=c->r[31]+0x0000035Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80215754
  c->r[29]=c->r[3]|c->r[3]; // 80215758
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021575C
  {uint32_t ea=c->r[31]+0x00000360u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215760
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80215764
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80215768
  c->r[0]=R8(c->r[30]+0x0000008Fu); // 8021576C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80215770
  {uint32_t ea=c->r[31]+0x0000031Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80215774
  cmps(c,0,(int32_t)c->r[0],0); // 80215778
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 8021577C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[2]); // 80215780
  if (crb(c,2)) { goto L_8021579C; } // 80215784
  c->r[3]=R32(c->r[30]+0x00000004u); // 80215788
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021578C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215790
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80215794
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80215798
L_8021579C:;
  c->r[3]=R32(c->r[30]+0x000001F0u); // 8021579C
  c->f[2]=-c->f[3]; // 802157A0
  c->r[4]=c->r[28]|c->r[28]; // 802157A4
  c->r[8]=c->r[29]|c->r[29]; // 802157A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802157AC
  c->r[5]=R32(c->r[29]+0x00000010u); // 802157B0
  c->r[12]=R32(c->r[12]+0x00000030u); // 802157B4
  c->r[6]=R32(c->r[29]+0x00000014u); // 802157B8
  c->r[7]=R32(c->r[29]+0x00000018u); // 802157BC
  c->ctr=c->r[12]; // 802157C0
  if (true) { c->lr=0x802157C8u; dispatch(c,c->ctr); } // 802157C4
  c->r[3]=R32(c->r[29]+0x00000010u); // 802157C8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802157CC
  if (crb(c,2)) { goto L_80215970; } // 802157D0
  c->r[0]=R32(c->r[30]+0x00000014u); // 802157D4
  cmps(c,0,(int32_t)c->r[0],2); // 802157D8
  if (!crb(c,2)) { goto L_80215970; } // 802157DC
  c->r[0]=R32(c->r[30]+0x00000000u); // 802157E0
  cmps(c,0,(int32_t)c->r[0],1); // 802157E4
  if (!crb(c,2)) { goto L_802158D4; } // 802157E8
  c->r[3]=R32(c->r[30]+0x000001D8u); // 802157EC
  c->r[4]=0u+0x803A0000u; // 802157F0
  c->r[4]=c->r[4]+0x0000745Cu; // 802157F4
  c->r[5]=0u+0x00000001u; // 802157F8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802157FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215800
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80215804
  c->ctr=c->r[12]; // 80215808
  if (true) { c->lr=0x80215810u; dispatch(c,c->ctr); } // 8021580C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80215810
  c->r[4]=c->r[28]|c->r[28]; // 80215814
  {uint32_t ea=c->r[31]+0x000002E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215818
  c->r[5]=0u+0x00000000u; // 8021581C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80215820
  {uint32_t ea=c->r[31]+0x00000364u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215824
  c->r[0]=c->r[0]|0x00000001u; // 80215828
  W8(c->r[3]+0x000000CFu,c->r[0]); // 8021582C
  c->r[6]=0u+0x00000000u; // 80215830
  c->r[7]=0u+0x00000000u; // 80215834
  c->r[3]=R32(c->r[30]+0x000001F0u); // 80215838
  c->r[8]=0u+0x00000000u; // 8021583C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215840
  c->r[12]=R32(c->r[12]+0x00000030u); // 80215844
  c->ctr=c->r[12]; // 80215848
  if (true) { c->lr=0x80215850u; dispatch(c,c->ctr); } // 8021584C
  c->r[29]=R32(c->r[30]+0x000003C8u); // 80215850
  c->r[3]=c->r[29]|c->r[29]; // 80215854
  c->lr=0x8021585Cu; f_8020D2A0(c); // 80215858
  c->r[31]=0u+0x00000001u; // 8021585C
  W32(c->r[29]+0x00000014u,c->r[31]); // 80215860
  c->r[0]=0u+0x00000002u; // 80215864
  W32(c->r[30]+0x00000018u,c->r[0]); // 80215868
  c->r[29]=R32(c->r[30]+0x000003C0u); // 8021586C
  c->r[3]=c->r[29]|c->r[29]; // 80215870
  c->lr=0x80215878u; f_8020D2A0(c); // 80215874
  W32(c->r[29]+0x00000014u,c->r[31]); // 80215878
  c->r[29]=R32(c->r[30]+0x000003E4u); // 8021587C
  c->r[3]=c->r[29]|c->r[29]; // 80215880
  c->lr=0x80215888u; f_8020D2A0(c); // 80215884
  W32(c->r[29]+0x00000014u,c->r[31]); // 80215888
  c->r[3]=0u+0x0000000Au; // 8021588C
  c->r[0]=0u+0x00000000u; // 80215890
  W32(c->r[30]+0x00000014u,c->r[3]); // 80215894
  c->r[3]=0u+0x00000000u; // 80215898
  c->r[4]=R32(c->r[30]+0x00000004u); // 8021589C
  W32(c->r[30]+0x00000000u,c->r[0]); // 802158A0
  c->r[12]=R32(c->r[4]+0x00000014u); // 802158A4
  cmps(c,0,(int32_t)c->r[12],0); // 802158A8
  if (crb(c,2)) { goto L_802158C0; } // 802158AC
  c->r[3]=0u+0x00000005u; // 802158B0
  c->r[4]=0u+0x00000008u; // 802158B4
  c->ctr=c->r[12]; // 802158B8
  if (true) { c->lr=0x802158C0u; dispatch(c,c->ctr); } // 802158BC
L_802158C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802158C0
  if (!crb(c,2)) { goto L_80215F94; } // 802158C4
  c->r[3]=0u+0x00000008u; // 802158C8
  c->lr=0x802158D0u; f_80210650(c); // 802158CC
  goto L_80215F94; // 802158D0
L_802158D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802158D4
  if (!crb(c,2)) { goto L_80215F94; } // 802158D8
  c->r[3]=R32(c->r[30]+0x000003C4u); // 802158DC
  c->r[0]=R32(c->r[3]+0x00000014u); // 802158E0
  cmps(c,0,(int32_t)c->r[0],1); // 802158E4
  if (!crb(c,2)) { goto L_802158F4; } // 802158E8
  c->r[0]=0u+0x00000000u; // 802158EC
  W32(c->r[3]+0x00000014u,c->r[0]); // 802158F0
L_802158F4:;
  c->r[3]=R32(c->r[30]+0x000003E8u); // 802158F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802158F8
  cmps(c,0,(int32_t)c->r[0],1); // 802158FC
  if (!crb(c,2)) { goto L_8021590C; } // 80215900
  c->r[0]=0u+0x00000000u; // 80215904
  W32(c->r[3]+0x00000014u,c->r[0]); // 80215908
L_8021590C:;
  c->r[3]=0u+0x00000000u; // 8021590C
  c->r[0]=0u+0x00000004u; // 80215910
  W32(c->r[30]+0x000000B8u,c->r[3]); // 80215914
  W32(c->r[30]+0x00000018u,c->r[0]); // 80215918
  c->r[29]=R32(c->r[30]+0x000003C8u); // 8021591C
  c->r[3]=c->r[29]|c->r[29]; // 80215920
  c->lr=0x80215928u; f_8020D2A0(c); // 80215924
  c->r[0]=0u+0x00000001u; // 80215928
  W32(c->r[29]+0x00000014u,c->r[0]); // 8021592C
  c->r[0]=0u+0x0000000Eu; // 80215930
  c->r[3]=0u+0x00000000u; // 80215934
  W32(c->r[30]+0x00000014u,c->r[0]); // 80215938
  c->r[4]=R32(c->r[30]+0x00000004u); // 8021593C
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215940
  cmps(c,0,(int32_t)c->r[12],0); // 80215944
  if (crb(c,2)) { goto L_8021595C; } // 80215948
  c->r[3]=0u+0x00000005u; // 8021594C
  c->r[4]=0u+0x00000001u; // 80215950
  c->ctr=c->r[12]; // 80215954
  if (true) { c->lr=0x8021595Cu; dispatch(c,c->ctr); } // 80215958
L_8021595C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021595C
  if (!crb(c,2)) { goto L_80215F94; } // 80215960
  c->r[3]=0u+0x00000001u; // 80215964
  c->lr=0x8021596Cu; f_80210650(c); // 80215968
  goto L_80215F94; // 8021596C
L_80215970:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80215970
  cmps(c,0,(int32_t)c->r[0],1); // 80215974
  if (!crb(c,2)) { goto L_80215F94; } // 80215978
  c->r[0]=R32(c->r[30]+0x00000014u); // 8021597C
  cmps(c,0,(int32_t)c->r[0],2); // 80215980
  if (!crb(c,2)) { goto L_80215F94; } // 80215984
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 80215988
  if (crb(c,2)) { goto L_80215C5C; } // 8021598C
  c->r[3]=R32(c->r[30]+0x00000084u); // 80215990
  cmps(c,0,(int32_t)c->r[3],0); // 80215994
  if (!crb(c,1)) { goto L_80215C24; } // 80215998
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8021599C
  c->r[0]=0u+0x00000025u; // 802159A0
  W32(c->r[30]+0x00000084u,c->r[3]); // 802159A4
  c->r[3]=c->r[3]+0x00000015u; // 802159A8
  c->r[5]=c->r[31]+0x00000068u; // 802159AC
  c->r[4]=0u+0x00000000u; // 802159B0
  c->ctr=c->r[0]; // 802159B4
L_802159B8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802159B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802159BC
  if (!crb(c,2)) { goto L_802159D4; } // 802159C0
  c->r[0]=R32(c->r[5]+0x00000004u); // 802159C4
  cmps(c,0,(int32_t)c->r[0],10); // 802159C8
  if (!crb(c,2)) { goto L_802159D4; } // 802159CC
  goto L_80215A04; // 802159D0
L_802159D4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802159D4
  c->r[4]=c->r[4]+0x00000001u; // 802159D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802159DC
  if (!crb(c,2)) { goto L_802159F4; } // 802159E0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802159E4
  cmps(c,0,(int32_t)c->r[0],10); // 802159E8
  if (!crb(c,2)) { goto L_802159F4; } // 802159EC
  goto L_80215A04; // 802159F0
L_802159F4:;
  c->r[5]=c->r[5]+0x00000010u; // 802159F4
  c->r[4]=c->r[4]+0x00000001u; // 802159F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802159B8; } // 802159FC
  c->r[4]=0u+0xFFFFFFFFu; // 80215A00
L_80215A04:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215A04
  c->r[4]=0u+0x00000000u; // 80215A08
  c->r[3]=c->r[30]+c->r[0]; // 80215A0C
  c->r[6]=c->r[31]+0x00000068u; // 80215A10
  c->r[3]=R32(c->r[3]+0x00000290u); // 80215A14
  c->r[0]=0u+0x00000025u; // 80215A18
  c->r[5]=0u+0x00000000u; // 80215A1C
  W32(c->r[3]+0x00000014u,c->r[4]); // 80215A20
  c->r[3]=R32(c->r[30]+0x00000084u); // 80215A24
  c->r[3]=c->r[3]+0x00000015u; // 80215A28
  c->ctr=c->r[0]; // 80215A2C
L_80215A30:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80215A30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215A34
  if (!crb(c,2)) { goto L_80215A4C; } // 80215A38
  c->r[0]=R32(c->r[6]+0x00000004u); // 80215A3C
  cmps(c,0,(int32_t)c->r[0],9); // 80215A40
  if (!crb(c,2)) { goto L_80215A4C; } // 80215A44
  goto L_80215A7C; // 80215A48
L_80215A4C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80215A4C
  c->r[5]=c->r[5]+0x00000001u; // 80215A50
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215A54
  if (!crb(c,2)) { goto L_80215A6C; } // 80215A58
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80215A5C
  cmps(c,0,(int32_t)c->r[0],9); // 80215A60
  if (!crb(c,2)) { goto L_80215A6C; } // 80215A64
  goto L_80215A7C; // 80215A68
L_80215A6C:;
  c->r[6]=c->r[6]+0x00000010u; // 80215A6C
  c->r[5]=c->r[5]+0x00000001u; // 80215A70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215A30; } // 80215A74
  c->r[5]=0u+0xFFFFFFFFu; // 80215A78
L_80215A7C:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80215A7C
  c->r[3]=c->r[30]+c->r[0]; // 80215A80
  c->r[29]=R32(c->r[3]+0x00000290u); // 80215A84
  c->r[3]=c->r[29]|c->r[29]; // 80215A88
  c->lr=0x80215A90u; f_8020D2A0(c); // 80215A8C
  c->r[0]=0u+0x00000025u; // 80215A90
  c->r[3]=0u+0x00000001u; // 80215A94
  W32(c->r[29]+0x00000014u,c->r[3]); // 80215A98
  c->r[4]=c->r[31]+0x00000068u; // 80215A9C
  c->r[3]=0u+0x00000000u; // 80215AA0
  c->ctr=c->r[0]; // 80215AA4
L_80215AA8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80215AA8
  cmps(c,0,(int32_t)c->r[0],11); // 80215AAC
  if (!crb(c,2)) { goto L_80215AC4; } // 80215AB0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80215AB4
  cmps(c,0,(int32_t)c->r[0],5); // 80215AB8
  if (!crb(c,2)) { goto L_80215AC4; } // 80215ABC
  goto L_80215AF4; // 80215AC0
L_80215AC4:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80215AC4
  c->r[3]=c->r[3]+0x00000001u; // 80215AC8
  cmps(c,0,(int32_t)c->r[0],11); // 80215ACC
  if (!crb(c,2)) { goto L_80215AE4; } // 80215AD0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80215AD4
  cmps(c,0,(int32_t)c->r[0],5); // 80215AD8
  if (!crb(c,2)) { goto L_80215AE4; } // 80215ADC
  goto L_80215AF4; // 80215AE0
L_80215AE4:;
  c->r[4]=c->r[4]+0x00000010u; // 80215AE4
  c->r[3]=c->r[3]+0x00000001u; // 80215AE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215AA8; } // 80215AEC
  c->r[3]=0u+0xFFFFFFFFu; // 80215AF0
L_80215AF4:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80215AF4
  c->r[3]=c->r[30]+c->r[0]; // 80215AF8
  c->r[29]=R32(c->r[3]+0x00000290u); // 80215AFC
  c->r[3]=c->r[29]|c->r[29]; // 80215B00
  c->lr=0x80215B08u; f_8020D2A0(c); // 80215B04
  c->r[0]=0u+0x00000001u; // 80215B08
  W32(c->r[29]+0x00000014u,c->r[0]); // 80215B0C
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215B10
  cmps(c,0,(int32_t)c->r[0],0); // 80215B14
  if (!crb(c,2)) { goto L_80215BA0; } // 80215B18
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215B1C
  c->r[3]=0u+0x00000000u; // 80215B20
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215B24
  cmps(c,0,(int32_t)c->r[12],0); // 80215B28
  if (crb(c,2)) { goto L_80215B40; } // 80215B2C
  c->r[3]=0u+0x00000005u; // 80215B30
  c->r[4]=0u+0x0000000Cu; // 80215B34
  c->ctr=c->r[12]; // 80215B38
  if (true) { c->lr=0x80215B40u; dispatch(c,c->ctr); } // 80215B3C
L_80215B40:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215B40
  if (!crb(c,2)) { goto L_80215B50; } // 80215B44
  c->r[3]=0u+0x0000000Cu; // 80215B48
  c->lr=0x80215B50u; f_80210650(c); // 80215B4C
L_80215B50:;
  {uint32_t ea=c->r[31]+0x00000310u; c->f[31]=RF64(ea);} // 80215B50
  c->r[29]=c->r[30]|c->r[30]; // 80215B54
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80215B58
  c->r[31]=0u+0x00000000u; // 80215B5C
L_80215B60:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215B60
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215B64
  c->r[0]=c->r[0]^0x80000000u; // 80215B68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80215B6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80215B70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80215B74
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 80215B78
  c->lr=0x80215B80u; f_8020F390(c); // 80215B7C
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215B80
  c->r[4]=0u+0x00000001u; // 80215B84
  c->lr=0x80215B8Cu; f_8020F3A0(c); // 80215B88
  c->r[31]=c->r[31]+0x00000001u; // 80215B8C
  c->r[29]=c->r[29]+0x00000004u; // 80215B90
  cmps(c,0,(int32_t)c->r[31],4); // 80215B94
  if (crb(c,0)) { IRQCHK(c); goto L_80215B60; } // 80215B98
  goto L_80215F94; // 80215B9C
L_80215BA0:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215BA0
  c->r[3]=0u+0x00000000u; // 80215BA4
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215BA8
  cmps(c,0,(int32_t)c->r[12],0); // 80215BAC
  if (crb(c,2)) { goto L_80215BC4; } // 80215BB0
  c->r[3]=0u+0x00000005u; // 80215BB4
  c->r[4]=0u+0x0000000Au; // 80215BB8
  c->ctr=c->r[12]; // 80215BBC
  if (true) { c->lr=0x80215BC4u; dispatch(c,c->ctr); } // 80215BC0
L_80215BC4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215BC4
  if (!crb(c,2)) { goto L_80215BD4; } // 80215BC8
  c->r[3]=0u+0x0000000Au; // 80215BCC
  c->lr=0x80215BD4u; f_80210650(c); // 80215BD0
L_80215BD4:;
  {uint32_t ea=c->r[31]+0x00000310u; c->f[31]=RF64(ea);} // 80215BD4
  c->r[29]=c->r[30]|c->r[30]; // 80215BD8
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80215BDC
  c->r[31]=0u+0x00000000u; // 80215BE0
L_80215BE4:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215BE4
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215BE8
  c->r[0]=c->r[0]^0x80000000u; // 80215BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215BF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80215BF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80215BF8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 80215BFC
  c->lr=0x80215C04u; f_8020F390(c); // 80215C00
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215C04
  c->r[4]=0u+0x00000001u; // 80215C08
  c->lr=0x80215C10u; f_8020F3A0(c); // 80215C0C
  c->r[31]=c->r[31]+0x00000001u; // 80215C10
  c->r[29]=c->r[29]+0x00000004u; // 80215C14
  cmps(c,0,(int32_t)c->r[31],4); // 80215C18
  if (crb(c,0)) { IRQCHK(c); goto L_80215BE4; } // 80215C1C
  goto L_80215F94; // 80215C20
L_80215C24:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215C24
  c->r[3]=0u+0x00000000u; // 80215C28
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215C2C
  cmps(c,0,(int32_t)c->r[12],0); // 80215C30
  if (crb(c,2)) { goto L_80215C48; } // 80215C34
  c->r[3]=0u+0x00000005u; // 80215C38
  c->r[4]=0u+0x0000000Du; // 80215C3C
  c->ctr=c->r[12]; // 80215C40
  if (true) { c->lr=0x80215C48u; dispatch(c,c->ctr); } // 80215C44
L_80215C48:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215C48
  if (!crb(c,2)) { goto L_80215F94; } // 80215C4C
  c->r[3]=0u+0x0000000Du; // 80215C50
  c->lr=0x80215C58u; f_80210650(c); // 80215C54
  goto L_80215F94; // 80215C58
L_80215C5C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80215C5C
  if (crb(c,2)) { goto L_80215F94; } // 80215C60
  c->r[3]=R32(c->r[30]+0x00000084u); // 80215C64
  cmps(c,0,(int32_t)c->r[3],10); // 80215C68
  if (!crb(c,0)) { goto L_80215F04; } // 80215C6C
  c->r[0]=0u+0x00000025u; // 80215C70
  c->r[3]=c->r[3]+0x00000015u; // 80215C74
  c->r[5]=c->r[31]+0x00000068u; // 80215C78
  c->r[4]=0u+0x00000000u; // 80215C7C
  c->ctr=c->r[0]; // 80215C80
  c->r[0]=c->r[0]|0x00000000u; // 80215C84
L_80215C88:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80215C88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215C8C
  if (!crb(c,2)) { goto L_80215CA4; } // 80215C90
  c->r[0]=R32(c->r[5]+0x00000004u); // 80215C94
  cmps(c,0,(int32_t)c->r[0],9); // 80215C98
  if (!crb(c,2)) { goto L_80215CA4; } // 80215C9C
  goto L_80215CD4; // 80215CA0
L_80215CA4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 80215CA4
  c->r[4]=c->r[4]+0x00000001u; // 80215CA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215CAC
  if (!crb(c,2)) { goto L_80215CC4; } // 80215CB0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80215CB4
  cmps(c,0,(int32_t)c->r[0],9); // 80215CB8
  if (!crb(c,2)) { goto L_80215CC4; } // 80215CBC
  goto L_80215CD4; // 80215CC0
L_80215CC4:;
  c->r[5]=c->r[5]+0x00000010u; // 80215CC4
  c->r[4]=c->r[4]+0x00000001u; // 80215CC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215C88; } // 80215CCC
  c->r[4]=0u+0xFFFFFFFFu; // 80215CD0
L_80215CD4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215CD4
  c->r[4]=0u+0x00000000u; // 80215CD8
  c->r[3]=c->r[30]+c->r[0]; // 80215CDC
  c->r[6]=c->r[31]+0x00000068u; // 80215CE0
  c->r[3]=R32(c->r[3]+0x00000290u); // 80215CE4
  c->r[0]=0u+0x00000025u; // 80215CE8
  c->r[5]=0u+0x00000000u; // 80215CEC
  W32(c->r[3]+0x00000014u,c->r[4]); // 80215CF0
  c->r[3]=R32(c->r[30]+0x00000084u); // 80215CF4
  c->r[3]=c->r[3]+0x00000015u; // 80215CF8
  c->ctr=c->r[0]; // 80215CFC
L_80215D00:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80215D00
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215D04
  if (!crb(c,2)) { goto L_80215D1C; } // 80215D08
  c->r[0]=R32(c->r[6]+0x00000004u); // 80215D0C
  cmps(c,0,(int32_t)c->r[0],10); // 80215D10
  if (!crb(c,2)) { goto L_80215D1C; } // 80215D14
  goto L_80215D4C; // 80215D18
L_80215D1C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80215D1C
  c->r[5]=c->r[5]+0x00000001u; // 80215D20
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80215D24
  if (!crb(c,2)) { goto L_80215D3C; } // 80215D28
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80215D2C
  cmps(c,0,(int32_t)c->r[0],10); // 80215D30
  if (!crb(c,2)) { goto L_80215D3C; } // 80215D34
  goto L_80215D4C; // 80215D38
L_80215D3C:;
  c->r[6]=c->r[6]+0x00000010u; // 80215D3C
  c->r[5]=c->r[5]+0x00000001u; // 80215D40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215D00; } // 80215D44
  c->r[5]=0u+0xFFFFFFFFu; // 80215D48
L_80215D4C:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80215D4C
  c->r[3]=c->r[30]+c->r[0]; // 80215D50
  c->r[29]=R32(c->r[3]+0x00000290u); // 80215D54
  c->r[3]=c->r[29]|c->r[29]; // 80215D58
  c->lr=0x80215D60u; f_8020D2A0(c); // 80215D5C
  c->r[0]=0u+0x00000001u; // 80215D60
  W32(c->r[29]+0x00000014u,c->r[0]); // 80215D64
  c->r[0]=0u+0x00000025u; // 80215D68
  c->r[5]=c->r[31]+0x00000068u; // 80215D6C
  c->r[3]=R32(c->r[30]+0x00000084u); // 80215D70
  c->r[4]=0u+0x00000000u; // 80215D74
  c->r[3]=c->r[3]+0x00000001u; // 80215D78
  W32(c->r[30]+0x00000084u,c->r[3]); // 80215D7C
  c->ctr=c->r[0]; // 80215D80
  c->r[0]=c->r[0]|0x00000000u; // 80215D84
L_80215D88:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80215D88
  cmps(c,0,(int32_t)c->r[0],12); // 80215D8C
  if (!crb(c,2)) { goto L_80215DA4; } // 80215D90
  c->r[0]=R32(c->r[5]+0x00000004u); // 80215D94
  cmps(c,0,(int32_t)c->r[0],5); // 80215D98
  if (!crb(c,2)) { goto L_80215DA4; } // 80215D9C
  goto L_80215DD4; // 80215DA0
L_80215DA4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 80215DA4
  c->r[4]=c->r[4]+0x00000001u; // 80215DA8
  cmps(c,0,(int32_t)c->r[0],12); // 80215DAC
  if (!crb(c,2)) { goto L_80215DC4; } // 80215DB0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80215DB4
  cmps(c,0,(int32_t)c->r[0],5); // 80215DB8
  if (!crb(c,2)) { goto L_80215DC4; } // 80215DBC
  goto L_80215DD4; // 80215DC0
L_80215DC4:;
  c->r[5]=c->r[5]+0x00000010u; // 80215DC4
  c->r[4]=c->r[4]+0x00000001u; // 80215DC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215D88; } // 80215DCC
  c->r[4]=0u+0xFFFFFFFFu; // 80215DD0
L_80215DD4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215DD4
  c->r[3]=c->r[30]+c->r[0]; // 80215DD8
  c->r[29]=R32(c->r[3]+0x00000290u); // 80215DDC
  c->r[3]=c->r[29]|c->r[29]; // 80215DE0
  c->lr=0x80215DE8u; f_8020D2A0(c); // 80215DE4
  c->r[0]=0u+0x00000001u; // 80215DE8
  W32(c->r[29]+0x00000014u,c->r[0]); // 80215DEC
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215DF0
  cmps(c,0,(int32_t)c->r[0],10); // 80215DF4
  if (!crb(c,2)) { goto L_80215E80; } // 80215DF8
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215DFC
  c->r[3]=0u+0x00000000u; // 80215E00
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215E04
  cmps(c,0,(int32_t)c->r[12],0); // 80215E08
  if (crb(c,2)) { goto L_80215E20; } // 80215E0C
  c->r[3]=0u+0x00000005u; // 80215E10
  c->r[4]=0u+0x0000000Bu; // 80215E14
  c->ctr=c->r[12]; // 80215E18
  if (true) { c->lr=0x80215E20u; dispatch(c,c->ctr); } // 80215E1C
L_80215E20:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215E20
  if (!crb(c,2)) { goto L_80215E30; } // 80215E24
  c->r[3]=0u+0x0000000Bu; // 80215E28
  c->lr=0x80215E30u; f_80210650(c); // 80215E2C
L_80215E30:;
  {uint32_t ea=c->r[31]+0x00000310u; c->f[31]=RF64(ea);} // 80215E30
  c->r[29]=c->r[30]|c->r[30]; // 80215E34
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80215E38
  c->r[31]=0u+0x00000000u; // 80215E3C
L_80215E40:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215E40
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215E44
  c->r[0]=c->r[0]^0x80000000u; // 80215E48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80215E4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80215E50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80215E54
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 80215E58
  c->lr=0x80215E60u; f_8020F390(c); // 80215E5C
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215E60
  c->r[4]=0u+0x00000001u; // 80215E64
  c->lr=0x80215E6Cu; f_8020F3A0(c); // 80215E68
  c->r[31]=c->r[31]+0x00000001u; // 80215E6C
  c->r[29]=c->r[29]+0x00000004u; // 80215E70
  cmps(c,0,(int32_t)c->r[31],4); // 80215E74
  if (crb(c,0)) { IRQCHK(c); goto L_80215E40; } // 80215E78
  goto L_80215F94; // 80215E7C
L_80215E80:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215E80
  c->r[3]=0u+0x00000000u; // 80215E84
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215E88
  cmps(c,0,(int32_t)c->r[12],0); // 80215E8C
  if (crb(c,2)) { goto L_80215EA4; } // 80215E90
  c->r[3]=0u+0x00000005u; // 80215E94
  c->r[4]=0u+0x00000009u; // 80215E98
  c->ctr=c->r[12]; // 80215E9C
  if (true) { c->lr=0x80215EA4u; dispatch(c,c->ctr); } // 80215EA0
L_80215EA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215EA4
  if (!crb(c,2)) { goto L_80215EB4; } // 80215EA8
  c->r[3]=0u+0x00000009u; // 80215EAC
  c->lr=0x80215EB4u; f_80210650(c); // 80215EB0
L_80215EB4:;
  {uint32_t ea=c->r[31]+0x00000310u; c->f[30]=RF64(ea);} // 80215EB4
  c->r[29]=c->r[30]|c->r[30]; // 80215EB8
  {uint32_t ea=c->r[31]+0x0000030Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80215EBC
  c->r[31]=0u+0x00000000u; // 80215EC0
L_80215EC4:;
  c->r[0]=R32(c->r[30]+0x00000084u); // 80215EC4
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215EC8
  c->r[0]=c->r[0]^0x80000000u; // 80215ECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215ED0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80215ED4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80215ED8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 80215EDC
  c->lr=0x80215EE4u; f_8020F390(c); // 80215EE0
  c->r[3]=R32(c->r[29]+0x0000024Cu); // 80215EE4
  c->r[4]=0u+0x00000001u; // 80215EE8
  c->lr=0x80215EF0u; f_8020F3A0(c); // 80215EEC
  c->r[31]=c->r[31]+0x00000001u; // 80215EF0
  c->r[29]=c->r[29]+0x00000004u; // 80215EF4
  cmps(c,0,(int32_t)c->r[31],4); // 80215EF8
  if (crb(c,0)) { IRQCHK(c); goto L_80215EC4; } // 80215EFC
  goto L_80215F94; // 80215F00
L_80215F04:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80215F04
  c->r[3]=0u+0x00000000u; // 80215F08
  c->r[12]=R32(c->r[4]+0x00000014u); // 80215F0C
  cmps(c,0,(int32_t)c->r[12],0); // 80215F10
  if (crb(c,2)) { goto L_80215F28; } // 80215F14
  c->r[3]=0u+0x00000005u; // 80215F18
  c->r[4]=0u+0x0000000Du; // 80215F1C
  c->ctr=c->r[12]; // 80215F20
  if (true) { c->lr=0x80215F28u; dispatch(c,c->ctr); } // 80215F24
L_80215F28:;
  cmps(c,0,(int32_t)c->r[3],0); // 80215F28
  if (!crb(c,2)) { goto L_80215F94; } // 80215F2C
  c->r[3]=0u+0x0000000Du; // 80215F30
  c->lr=0x80215F38u; f_80210650(c); // 80215F34
  goto L_80215F94; // 80215F38
L_80215F3C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80215F3C
  cmps(c,0,(int32_t)c->r[0],1); // 80215F40
  if (!crb(c,2)) { goto L_80215F94; } // 80215F44
  c->r[0]=R32(c->r[3]+0x00000014u); // 80215F48
  cmps(c,0,(int32_t)c->r[0],5); // 80215F4C
  if (!crb(c,2)) { goto L_80215F94; } // 80215F50
  c->r[0]=R32(c->r[3]+0x00000018u); // 80215F54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80215F58
  c->r[5]=c->r[3]+c->r[0]; // 80215F5C
  c->r[5]=R32(c->r[5]+0x000003B8u); // 80215F60
  c->r[0]=R32(c->r[5]+0x00000014u); // 80215F64
  cmps(c,0,(int32_t)c->r[0],1); // 80215F68
  if (crb(c,2)) { goto L_80215F94; } // 80215F6C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80215F70
  c->r[3]=c->r[3]+c->r[0]; // 80215F74
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 80215F78
  c->lr=0x80215F80u; f_8020F700(c); // 80215F7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80215F80
  cmps(c,0,(int32_t)c->r[0],0); // 80215F84
  if (crb(c,2)) { goto L_80215F94; } // 80215F88
  c->r[0]=R32(c->r[30]+0x000005BCu); // 80215F8C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80215F90
L_80215F94:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80215F94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80215F98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80215F9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80215FA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80215FA4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80215FA8
  c->r[30]=R32(c->r[1]+0x00000028u); // 80215FAC
  c->r[29]=R32(c->r[1]+0x00000024u); // 80215FB0
  c->r[28]=R32(c->r[1]+0x00000020u); // 80215FB4
  c->lr=c->r[0]; // 80215FB8
  c->r[1]=c->r[1]+0x00000050u; // 80215FBC
  return; // 80215FC0
}

// fn_80215FD0
void f_80215FD0(Ctx* __restrict c) {
  trace_call(0x80215FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215FD0
  c->r[0]=c->lr; // 80215FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80215FD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80215FDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80215FE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80215FE4
  c->r[29]=c->r[3]|c->r[3]; // 80215FE8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80215FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80215FF0
  if (crb(c,2)) { goto L_8021600C; } // 80215FF4
  cmps(c,0,(int32_t)c->r[0],1); // 80215FF8
  if (crb(c,2)) { goto L_802160D8; } // 80215FFC
  cmps(c,0,(int32_t)c->r[0],2); // 80216000
  if (crb(c,2)) { goto L_802161A8; } // 80216004
  goto L_80216270; // 80216008
L_8021600C:;
  c->r[31]=0u+0x803A0000u; // 8021600C
  c->r[30]=0u+0x00000000u; // 80216010
  c->r[31]=c->r[31]+0x00007280u; // 80216014
L_80216018:;
  cmps(c,0,(int32_t)c->r[30],2); // 80216018
  if (crb(c,0)) { goto L_80216028; } // 8021601C
  cmps(c,0,(int32_t)c->r[30],9); // 80216020
  if (!crb(c,2)) { goto L_80216078; } // 80216024
L_80216028:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80216028
  c->r[5]=0u+0x00000001u; // 8021602C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80216030
  c->r[3]=R32(c->r[3]+0x00000010u); // 80216034
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216038
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021603C
  c->ctr=c->r[12]; // 80216040
  if (true) { c->lr=0x80216048u; dispatch(c,c->ctr); } // 80216044
  c->r[4]=c->r[3]|c->r[3]; // 80216048
  c->r[3]=R32(c->r[29]+0x000001F0u); // 8021604C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216050
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80216054
  c->ctr=c->r[12]; // 80216058
  if (true) { c->lr=0x80216060u; dispatch(c,c->ctr); } // 8021605C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216060
  c->r[4]=0u+0x00000001u; // 80216064
  c->r[12]=R32(c->r[12]+0x00000050u); // 80216068
  c->ctr=c->r[12]; // 8021606C
  if (true) { c->lr=0x80216074u; dispatch(c,c->ctr); } // 80216070
  goto L_802160C4; // 80216074
L_80216078:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80216078
  c->r[5]=0u+0x00000001u; // 8021607C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80216080
  c->r[3]=R32(c->r[3]+0x00000010u); // 80216084
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216088
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021608C
  c->ctr=c->r[12]; // 80216090
  if (true) { c->lr=0x80216098u; dispatch(c,c->ctr); } // 80216094
  c->r[4]=c->r[3]|c->r[3]; // 80216098
  c->r[3]=R32(c->r[29]+0x000001F0u); // 8021609C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802160A0
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 802160A4
  c->ctr=c->r[12]; // 802160A8
  if (true) { c->lr=0x802160B0u; dispatch(c,c->ctr); } // 802160AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802160B0
  c->r[4]=0u+0x00000000u; // 802160B4
  c->r[12]=R32(c->r[12]+0x00000050u); // 802160B8
  c->ctr=c->r[12]; // 802160BC
  if (true) { c->lr=0x802160C4u; dispatch(c,c->ctr); } // 802160C0
L_802160C4:;
  c->r[30]=c->r[30]+0x00000001u; // 802160C4
  c->r[31]=c->r[31]+0x00000004u; // 802160C8
  cmps(c,0,(int32_t)c->r[30],10); // 802160CC
  if (crb(c,0)) { IRQCHK(c); goto L_80216018; } // 802160D0
  goto L_80216270; // 802160D4
L_802160D8:;
  c->r[31]=0u+0x803A0000u; // 802160D8
  c->r[30]=0u+0x00000000u; // 802160DC
  c->r[31]=c->r[31]+0x00007280u; // 802160E0
L_802160E4:;
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 802160E4
  cmpu(c,0,c->r[0],0x00000005u); // 802160E8
  if (!crb(c,1)) { goto L_802160F8; } // 802160EC
  cmps(c,0,(int32_t)c->r[30],9); // 802160F0
  if (!crb(c,2)) { goto L_80216148; } // 802160F4
L_802160F8:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 802160F8
  c->r[5]=0u+0x00000001u; // 802160FC
  c->r[4]=R32(c->r[31]+0x00000000u); // 80216100
  c->r[3]=R32(c->r[3]+0x00000010u); // 80216104
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216108
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021610C
  c->ctr=c->r[12]; // 80216110
  if (true) { c->lr=0x80216118u; dispatch(c,c->ctr); } // 80216114
  c->r[4]=c->r[3]|c->r[3]; // 80216118
  c->r[3]=R32(c->r[29]+0x000001F0u); // 8021611C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216120
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80216124
  c->ctr=c->r[12]; // 80216128
  if (true) { c->lr=0x80216130u; dispatch(c,c->ctr); } // 8021612C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216130
  c->r[4]=0u+0x00000001u; // 80216134
  c->r[12]=R32(c->r[12]+0x00000050u); // 80216138
  c->ctr=c->r[12]; // 8021613C
  if (true) { c->lr=0x80216144u; dispatch(c,c->ctr); } // 80216140
  goto L_80216194; // 80216144
L_80216148:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80216148
  c->r[5]=0u+0x00000001u; // 8021614C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80216150
  c->r[3]=R32(c->r[3]+0x00000010u); // 80216154
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216158
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021615C
  c->ctr=c->r[12]; // 80216160
  if (true) { c->lr=0x80216168u; dispatch(c,c->ctr); } // 80216164
  c->r[4]=c->r[3]|c->r[3]; // 80216168
  c->r[3]=R32(c->r[29]+0x000001F0u); // 8021616C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216170
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80216174
  c->ctr=c->r[12]; // 80216178
  if (true) { c->lr=0x80216180u; dispatch(c,c->ctr); } // 8021617C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216180
  c->r[4]=0u+0x00000000u; // 80216184
  c->r[12]=R32(c->r[12]+0x00000050u); // 80216188
  c->ctr=c->r[12]; // 8021618C
  if (true) { c->lr=0x80216194u; dispatch(c,c->ctr); } // 80216190
L_80216194:;
  c->r[30]=c->r[30]+0x00000001u; // 80216194
  c->r[31]=c->r[31]+0x00000004u; // 80216198
  cmps(c,0,(int32_t)c->r[30],10); // 8021619C
  if (crb(c,0)) { IRQCHK(c); goto L_802160E4; } // 802161A0
  goto L_80216270; // 802161A4
L_802161A8:;
  c->r[31]=0u+0x803A0000u; // 802161A8
  c->r[30]=0u+0x00000000u; // 802161AC
  c->r[31]=c->r[31]+0x00007280u; // 802161B0
L_802161B4:;
  cmps(c,0,(int32_t)c->r[30],7); // 802161B4
  if (crb(c,0)) { goto L_802161C4; } // 802161B8
  cmps(c,0,(int32_t)c->r[30],9); // 802161BC
  if (!crb(c,2)) { goto L_80216214; } // 802161C0
L_802161C4:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 802161C4
  c->r[5]=0u+0x00000001u; // 802161C8
  c->r[4]=R32(c->r[31]+0x00000000u); // 802161CC
  c->r[3]=R32(c->r[3]+0x00000010u); // 802161D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802161D4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802161D8
  c->ctr=c->r[12]; // 802161DC
  if (true) { c->lr=0x802161E4u; dispatch(c,c->ctr); } // 802161E0
  c->r[4]=c->r[3]|c->r[3]; // 802161E4
  c->r[3]=R32(c->r[29]+0x000001F0u); // 802161E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802161EC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 802161F0
  c->ctr=c->r[12]; // 802161F4
  if (true) { c->lr=0x802161FCu; dispatch(c,c->ctr); } // 802161F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802161FC
  c->r[4]=0u+0x00000000u; // 80216200
  c->r[12]=R32(c->r[12]+0x00000050u); // 80216204
  c->ctr=c->r[12]; // 80216208
  if (true) { c->lr=0x80216210u; dispatch(c,c->ctr); } // 8021620C
  goto L_80216260; // 80216210
L_80216214:;
  c->r[3]=R32(c->r[29]+0x000001D8u); // 80216214
  c->r[5]=0u+0x00000001u; // 80216218
  c->r[4]=R32(c->r[31]+0x00000000u); // 8021621C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80216220
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216224
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80216228
  c->ctr=c->r[12]; // 8021622C
  if (true) { c->lr=0x80216234u; dispatch(c,c->ctr); } // 80216230
  c->r[4]=c->r[3]|c->r[3]; // 80216234
  c->r[3]=R32(c->r[29]+0x000001F0u); // 80216238
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021623C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80216240
  c->ctr=c->r[12]; // 80216244
  if (true) { c->lr=0x8021624Cu; dispatch(c,c->ctr); } // 80216248
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021624C
  c->r[4]=0u+0x00000001u; // 80216250
  c->r[12]=R32(c->r[12]+0x00000050u); // 80216254
  c->ctr=c->r[12]; // 80216258
  if (true) { c->lr=0x80216260u; dispatch(c,c->ctr); } // 8021625C
L_80216260:;
  c->r[30]=c->r[30]+0x00000001u; // 80216260
  c->r[31]=c->r[31]+0x00000004u; // 80216264
  cmps(c,0,(int32_t)c->r[30],10); // 80216268
  if (crb(c,0)) { IRQCHK(c); goto L_802161B4; } // 8021626C
L_80216270:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80216270
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80216274
  c->r[30]=R32(c->r[1]+0x00000018u); // 80216278
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021627C
  c->lr=c->r[0]; // 80216280
  c->r[1]=c->r[1]+0x00000020u; // 80216284
  return; // 80216288
}

// fn_80216290
void f_80216290(Ctx* __restrict c) {
  trace_call(0x80216290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216290
  c->r[0]=c->lr; // 80216294
  W32(c->r[1]+0x00000024u,c->r[0]); // 80216298
  c->r[11]=c->r[1]+0x00000020u; // 8021629C
  c->lr=0x802162A4u; f_800C2E48(c); // 802162A0
  c->r[30]=0u+0x80380000u; // 802162A4
  c->r[26]=c->r[3]|c->r[3]; // 802162A8
  c->r[27]=c->r[5]|c->r[5]; // 802162AC
  c->r[30]=c->r[30]+0xFFFFF480u; // 802162B0
  c->lr=0x802162B8u; f_802190A0(c); // 802162B4
  c->r[4]=R32(c->r[26]+0x00000014u); // 802162B8
  c->r[31]=c->r[3]|c->r[3]; // 802162BC
  c->r[28]=0u+0x00000000u; // 802162C0
  cmps(c,0,(int32_t)c->r[4],2); // 802162C4
  if (!crb(c,2)) { goto L_80217004; } // 802162C8
  cmps(c,0,(int32_t)c->r[3],-1); // 802162CC
  if (crb(c,2)) { goto L_80217004; } // 802162D0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802162D4
  c->r[5]=c->r[26]+c->r[0]; // 802162D8
  c->r[0]=R32(c->r[5]+0x00000020u); // 802162DC
  cmps(c,0,(int32_t)c->r[0],0); // 802162E0
  if (!crb(c,2)) { goto L_80217004; } // 802162E4
  c->r[5]=R32(c->r[26]+0x00000000u); // 802162E8
  cmps(c,0,(int32_t)c->r[5],2); // 802162EC
  if (crb(c,2)) { goto L_802163BC; } // 802162F0
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 802162F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802162F8
  if (!crb(c,0)) { goto L_802163BC; } // 802162FC
  c->r[0]=R32(c->r[26]+0x00000010u); // 80216300
  c->r[5]=c->r[30]+0x00000008u; // 80216304
  c->r[4]=0u+0x00000000u; // 80216308
  c->ctr=c->r[0]; // 8021630C
  cmps(c,0,(int32_t)c->r[0],0); // 80216310
  if (!crb(c,1)) { goto L_80216340; } // 80216314
L_80216318:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80216318
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021631C
  if (!crb(c,2)) { goto L_80216334; } // 80216320
  c->r[0]=R32(c->r[5]+0x00000004u); // 80216324
  cmps(c,0,(int32_t)c->r[0],0); // 80216328
  if (!crb(c,2)) { goto L_80216334; } // 8021632C
  goto L_80216344; // 80216330
L_80216334:;
  c->r[5]=c->r[5]+0x00000008u; // 80216334
  c->r[4]=c->r[4]+0x00000001u; // 80216338
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216318; } // 8021633C
L_80216340:;
  c->r[4]=0u+0xFFFFFFFFu; // 80216340
L_80216344:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80216344
  c->r[3]=c->r[26]+c->r[0]; // 80216348
  c->r[29]=R32(c->r[3]+0x00000260u); // 8021634C
  c->r[3]=c->r[29]|c->r[29]; // 80216350
  c->lr=0x80216358u; f_8020D2A0(c); // 80216354
  c->r[0]=0u+0x00000001u; // 80216358
  W32(c->r[29]+0x00000014u,c->r[0]); // 8021635C
  c->r[0]=R32(c->r[26]+0x00000000u); // 80216360
  cmps(c,0,(int32_t)c->r[0],0); // 80216364
  if (!crb(c,2)) { goto L_80217004; } // 80216368
  c->r[0]=R32(c->r[26]+0x00000068u); // 8021636C
  cmps(c,0,(int32_t)c->r[0],2); // 80216370
  if (!crb(c,1)) { goto L_802163B4; } // 80216374
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216378
  c->r[3]=0u+0x00000000u; // 8021637C
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216380
  cmps(c,0,(int32_t)c->r[12],0); // 80216384
  if (crb(c,2)) { goto L_8021639C; } // 80216388
  c->r[3]=0u+0x00000005u; // 8021638C
  c->r[4]=0u+0x00000004u; // 80216390
  c->ctr=c->r[12]; // 80216394
  if (true) { c->lr=0x8021639Cu; dispatch(c,c->ctr); } // 80216398
L_8021639C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021639C
  if (!crb(c,2)) { goto L_802163AC; } // 802163A0
  c->r[3]=0u+0x00000004u; // 802163A4
  c->lr=0x802163ACu; f_80210650(c); // 802163A8
L_802163AC:;
  c->r[0]=0u+0x00000000u; // 802163AC
  W32(c->r[26]+0x00000068u,c->r[0]); // 802163B0
L_802163B4:;
  c->r[28]=0u+0x00000001u; // 802163B4
  goto L_80217004; // 802163B8
L_802163BC:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 802163BC
  c->r[0]=c->r[3]-c->r[0]; // 802163C0
  cmpu(c,0,c->r[0],0x00000009u); // 802163C4
  if (crb(c,1)) { goto L_80217004; } // 802163C8
  c->r[3]=0u+0x803A0000u; // 802163CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802163D0
  c->r[3]=c->r[3]+0x000074BCu; // 802163D4
  c->r[3]=R32(c->r[3]+c->r[0]); // 802163D8
  c->ctr=c->r[3]; // 802163DC
  if (true) { switch (c->ctr) { case 0x802163E4u: goto L_802163E4; case 0x802164A4u: goto L_802164A4; case 0x80216A58u: goto L_80216A58; case 0x80216B28u: goto L_80216B28; case 0x80216BF8u: goto L_80216BF8; case 0x80216CC8u: goto L_80216CC8; case 0x80216D98u: goto L_80216D98; case 0x80216E68u: goto L_80216E68; case 0x80216F38u: goto L_80216F38; default: break; } dispatch(c,c->ctr); return; } // 802163E0
L_802163E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802163E4
  if (!crb(c,2)) { goto L_80217004; } // 802163E8
  cmps(c,0,(int32_t)c->r[4],2); // 802163EC
  c->r[4]=0u+0x00000001u; // 802163F0
  if (!crb(c,2)) { goto L_80216418; } // 802163F4
  c->r[3]=R32(c->r[26]+0x000003E8u); // 802163F8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802163FC
  cmps(c,0,(int32_t)c->r[0],1); // 80216400
  if (crb(c,2)) { goto L_80216418; } // 80216404
  c->r[3]=R32(c->r[26]+0x000003C4u); // 80216408
  c->r[0]=R32(c->r[3]+0x00000014u); // 8021640C
  cmps(c,0,(int32_t)c->r[0],1); // 80216410
  if (!crb(c,2)) { goto L_8021641C; } // 80216414
L_80216418:;
  c->r[4]=0u+0x00000000u; // 80216418
L_8021641C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8021641C
  if (crb(c,2)) { goto L_80216498; } // 80216420
  c->r[28]=R32(c->r[26]+0x000003C4u); // 80216424
  c->r[3]=c->r[28]|c->r[28]; // 80216428
  c->lr=0x80216430u; f_8020D2A0(c); // 8021642C
  c->r[0]=0u+0x00000001u; // 80216430
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216434
  c->r[4]=0u+0x00000003u; // 80216438
  c->r[3]=0u+0x00000000u; // 8021643C
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216440
  W32(c->r[26]+0x00000074u,c->r[4]); // 80216444
  cmps(c,0,(int32_t)c->r[0],2); // 80216448
  W32(c->r[26]+0x0000006Cu,c->r[3]); // 8021644C
  if (!crb(c,1)) { goto L_80216490; } // 80216450
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216454
  c->r[3]=0u+0x00000000u; // 80216458
  c->r[12]=R32(c->r[4]+0x00000014u); // 8021645C
  cmps(c,0,(int32_t)c->r[12],0); // 80216460
  if (crb(c,2)) { goto L_80216478; } // 80216464
  c->r[3]=0u+0x00000005u; // 80216468
  c->r[4]=0u+0x00000004u; // 8021646C
  c->ctr=c->r[12]; // 80216470
  if (true) { c->lr=0x80216478u; dispatch(c,c->ctr); } // 80216474
L_80216478:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216478
  if (!crb(c,2)) { goto L_80216488; } // 8021647C
  c->r[3]=0u+0x00000004u; // 80216480
  c->lr=0x80216488u; f_80210650(c); // 80216484
L_80216488:;
  c->r[0]=0u+0x00000000u; // 80216488
  W32(c->r[26]+0x00000068u,c->r[0]); // 8021648C
L_80216490:;
  c->r[28]=0u+0x00000001u; // 80216490
  goto L_80217004; // 80216494
L_80216498:;
  c->r[0]=0u+0x00000003u; // 80216498
  W32(c->r[26]+0x0000006Cu,c->r[0]); // 8021649C
  goto L_80217004; // 802164A0
L_802164A4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802164A4
  if (!crb(c,2)) { goto L_80216780; } // 802164A8
  c->r[0]=0u+0x00000025u; // 802164AC
  c->r[3]=c->r[30]+0x00000068u; // 802164B0
  c->r[29]=0u+0x00000000u; // 802164B4
  c->ctr=c->r[0]; // 802164B8
  c->r[0]=c->r[0]|0x00000000u; // 802164BC
L_802164C0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802164C0
  cmps(c,0,(int32_t)c->r[0],4); // 802164C4
  if (!crb(c,2)) { goto L_802164DC; } // 802164C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802164CC
  cmps(c,0,(int32_t)c->r[0],2); // 802164D0
  if (!crb(c,2)) { goto L_802164DC; } // 802164D4
  goto L_8021650C; // 802164D8
L_802164DC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802164DC
  c->r[29]=c->r[29]+0x00000001u; // 802164E0
  cmps(c,0,(int32_t)c->r[0],4); // 802164E4
  if (!crb(c,2)) { goto L_802164FC; } // 802164E8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802164EC
  cmps(c,0,(int32_t)c->r[0],2); // 802164F0
  if (!crb(c,2)) { goto L_802164FC; } // 802164F4
  goto L_8021650C; // 802164F8
L_802164FC:;
  c->r[3]=c->r[3]+0x00000010u; // 802164FC
  c->r[29]=c->r[29]+0x00000001u; // 80216500
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802164C0; } // 80216504
  c->r[29]=0u+0xFFFFFFFFu; // 80216508
L_8021650C:;
  c->r[3]=0u+0x00000025u; // 8021650C
  c->r[5]=c->r[30]+0x00000068u; // 80216510
  c->r[0]=0u+0x00000001u; // 80216514
  c->r[8]=0u+0x00000000u; // 80216518
  c->ctr=c->r[3]; // 8021651C
L_80216520:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80216520
  cmps(c,0,(int32_t)c->r[3],4); // 80216524
  if (!crb(c,2)) { goto L_8021653C; } // 80216528
  c->r[3]=R32(c->r[5]+0x00000004u); // 8021652C
  cmps(c,0,(int32_t)c->r[3],2); // 80216530
  if (!crb(c,2)) { goto L_8021653C; } // 80216534
  goto L_8021656C; // 80216538
L_8021653C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8021653C
  c->r[8]=c->r[8]+0x00000001u; // 80216540
  cmps(c,0,(int32_t)c->r[3],4); // 80216544
  if (!crb(c,2)) { goto L_8021655C; } // 80216548
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8021654C
  cmps(c,0,(int32_t)c->r[3],2); // 80216550
  if (!crb(c,2)) { goto L_8021655C; } // 80216554
  goto L_8021656C; // 80216558
L_8021655C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021655C
  c->r[8]=c->r[8]+0x00000001u; // 80216560
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216520; } // 80216564
  c->r[8]=0u+0xFFFFFFFFu; // 80216568
L_8021656C:;
  c->r[3]=0u+0x00000025u; // 8021656C
  c->r[5]=c->r[30]+0x00000068u; // 80216570
  c->r[7]=0u+0x00000000u; // 80216574
  c->ctr=c->r[3]; // 80216578
  c->r[0]=c->r[0]|0x00000000u; // 8021657C
L_80216580:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80216580
  cmps(c,0,(int32_t)c->r[3],5); // 80216584
  if (!crb(c,2)) { goto L_8021659C; } // 80216588
  c->r[3]=R32(c->r[5]+0x00000004u); // 8021658C
  cmps(c,0,(int32_t)c->r[3],3); // 80216590
  if (!crb(c,2)) { goto L_8021659C; } // 80216594
  goto L_802165CC; // 80216598
L_8021659C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8021659C
  c->r[7]=c->r[7]+0x00000001u; // 802165A0
  cmps(c,0,(int32_t)c->r[3],5); // 802165A4
  if (!crb(c,2)) { goto L_802165BC; } // 802165A8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802165AC
  cmps(c,0,(int32_t)c->r[3],3); // 802165B0
  if (!crb(c,2)) { goto L_802165BC; } // 802165B4
  goto L_802165CC; // 802165B8
L_802165BC:;
  c->r[5]=c->r[5]+0x00000010u; // 802165BC
  c->r[7]=c->r[7]+0x00000001u; // 802165C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216580; } // 802165C4
  c->r[7]=0u+0xFFFFFFFFu; // 802165C8
L_802165CC:;
  c->r[3]=0u+0x00000025u; // 802165CC
  c->r[5]=c->r[30]+0x00000068u; // 802165D0
  c->r[6]=0u+0x00000000u; // 802165D4
  c->ctr=c->r[3]; // 802165D8
  c->r[0]=c->r[0]|0x00000000u; // 802165DC
L_802165E0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802165E0
  cmps(c,0,(int32_t)c->r[3],4); // 802165E4
  if (!crb(c,2)) { goto L_802165FC; } // 802165E8
  c->r[3]=R32(c->r[5]+0x00000004u); // 802165EC
  cmps(c,0,(int32_t)c->r[3],19); // 802165F0
  if (!crb(c,2)) { goto L_802165FC; } // 802165F4
  goto L_8021662C; // 802165F8
L_802165FC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802165FC
  c->r[6]=c->r[6]+0x00000001u; // 80216600
  cmps(c,0,(int32_t)c->r[3],4); // 80216604
  if (!crb(c,2)) { goto L_8021661C; } // 80216608
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8021660C
  cmps(c,0,(int32_t)c->r[3],19); // 80216610
  if (!crb(c,2)) { goto L_8021661C; } // 80216614
  goto L_8021662C; // 80216618
L_8021661C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021661C
  c->r[6]=c->r[6]+0x00000001u; // 80216620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802165E0; } // 80216624
  c->r[6]=0u+0xFFFFFFFFu; // 80216628
L_8021662C:;
  c->r[3]=0u+0x00000025u; // 8021662C
  c->r[9]=c->r[30]+0x00000068u; // 80216630
  c->r[5]=0u+0x00000000u; // 80216634
  c->ctr=c->r[3]; // 80216638
  c->r[0]=c->r[0]|0x00000000u; // 8021663C
L_80216640:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80216640
  cmps(c,0,(int32_t)c->r[3],5); // 80216644
  if (!crb(c,2)) { goto L_8021665C; } // 80216648
  c->r[3]=R32(c->r[9]+0x00000004u); // 8021664C
  cmps(c,0,(int32_t)c->r[3],20); // 80216650
  if (!crb(c,2)) { goto L_8021665C; } // 80216654
  goto L_8021668C; // 80216658
L_8021665C:;
  c->r[3]=R32(c->r[9]+0x00000008u); // 8021665C
  c->r[5]=c->r[5]+0x00000001u; // 80216660
  cmps(c,0,(int32_t)c->r[3],5); // 80216664
  if (!crb(c,2)) { goto L_8021667C; } // 80216668
  c->r[3]=R32(c->r[9]+0x0000000Cu); // 8021666C
  cmps(c,0,(int32_t)c->r[3],20); // 80216670
  if (!crb(c,2)) { goto L_8021667C; } // 80216674
  goto L_8021668C; // 80216678
L_8021667C:;
  c->r[9]=c->r[9]+0x00000010u; // 8021667C
  c->r[5]=c->r[5]+0x00000001u; // 80216680
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216640; } // 80216684
  c->r[5]=0u+0xFFFFFFFFu; // 80216688
L_8021668C:;
  cmps(c,0,(int32_t)c->r[4],2); // 8021668C
  if (!crb(c,2)) { goto L_802166F4; } // 80216690
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80216694
  c->r[3]=c->r[26]+c->r[3]; // 80216698
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021669C
  c->r[3]=R32(c->r[3]+0x00000014u); // 802166A0
  cmps(c,0,(int32_t)c->r[3],1); // 802166A4
  if (crb(c,2)) { goto L_802166F4; } // 802166A8
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802166AC
  c->r[3]=c->r[26]+c->r[3]; // 802166B0
  c->r[3]=R32(c->r[3]+0x00000290u); // 802166B4
  c->r[3]=R32(c->r[3]+0x00000014u); // 802166B8
  cmps(c,0,(int32_t)c->r[3],1); // 802166BC
  if (crb(c,2)) { goto L_802166F4; } // 802166C0
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802166C4
  c->r[3]=c->r[26]+c->r[3]; // 802166C8
  c->r[3]=R32(c->r[3]+0x00000290u); // 802166CC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802166D0
  cmps(c,0,(int32_t)c->r[3],1); // 802166D4
  if (crb(c,2)) { goto L_802166F4; } // 802166D8
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802166DC
  c->r[3]=c->r[26]+c->r[3]; // 802166E0
  c->r[3]=R32(c->r[3]+0x00000290u); // 802166E4
  c->r[3]=R32(c->r[3]+0x00000014u); // 802166E8
  cmps(c,0,(int32_t)c->r[3],1); // 802166EC
  if (!crb(c,2)) { goto L_802166F8; } // 802166F0
L_802166F4:;
  c->r[0]=0u+0x00000000u; // 802166F4
L_802166F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802166F8
  if (crb(c,2)) { goto L_80216778; } // 802166FC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80216700
  c->r[3]=c->r[26]+c->r[0]; // 80216704
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216708
  c->r[3]=c->r[28]|c->r[28]; // 8021670C
  c->lr=0x80216714u; f_8020D2A0(c); // 80216710
  c->r[0]=0u+0x00000001u; // 80216714
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216718
  c->r[3]=0u+0x00000000u; // 8021671C
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216720
  W32(c->r[26]+0x00000078u,c->r[29]); // 80216724
  cmps(c,0,(int32_t)c->r[0],2); // 80216728
  W32(c->r[26]+0x00000070u,c->r[3]); // 8021672C
  if (!crb(c,1)) { goto L_80216770; } // 80216730
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216734
  c->r[3]=0u+0x00000000u; // 80216738
  c->r[12]=R32(c->r[4]+0x00000014u); // 8021673C
  cmps(c,0,(int32_t)c->r[12],0); // 80216740
  if (crb(c,2)) { goto L_80216758; } // 80216744
  c->r[3]=0u+0x00000005u; // 80216748
  c->r[4]=0u+0x00000004u; // 8021674C
  c->ctr=c->r[12]; // 80216750
  if (true) { c->lr=0x80216758u; dispatch(c,c->ctr); } // 80216754
L_80216758:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216758
  if (!crb(c,2)) { goto L_80216768; } // 8021675C
  c->r[3]=0u+0x00000004u; // 80216760
  c->lr=0x80216768u; f_80210650(c); // 80216764
L_80216768:;
  c->r[0]=0u+0x00000000u; // 80216768
  W32(c->r[26]+0x00000068u,c->r[0]); // 8021676C
L_80216770:;
  c->r[28]=0u+0x00000001u; // 80216770
  goto L_80217004; // 80216774
L_80216778:;
  W32(c->r[26]+0x00000070u,c->r[29]); // 80216778
  goto L_80217004; // 8021677C
L_80216780:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216780
  if (!crb(c,2)) { goto L_80217004; } // 80216784
  c->r[0]=0u+0x00000025u; // 80216788
  c->r[3]=c->r[30]+0x00000068u; // 8021678C
  c->r[29]=0u+0x00000000u; // 80216790
  c->ctr=c->r[0]; // 80216794
L_80216798:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80216798
  cmps(c,0,(int32_t)c->r[0],4); // 8021679C
  if (!crb(c,2)) { goto L_802167B4; } // 802167A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802167A4
  cmps(c,0,(int32_t)c->r[0],19); // 802167A8
  if (!crb(c,2)) { goto L_802167B4; } // 802167AC
  goto L_802167E4; // 802167B0
L_802167B4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802167B4
  c->r[29]=c->r[29]+0x00000001u; // 802167B8
  cmps(c,0,(int32_t)c->r[0],4); // 802167BC
  if (!crb(c,2)) { goto L_802167D4; } // 802167C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802167C4
  cmps(c,0,(int32_t)c->r[0],19); // 802167C8
  if (!crb(c,2)) { goto L_802167D4; } // 802167CC
  goto L_802167E4; // 802167D0
L_802167D4:;
  c->r[3]=c->r[3]+0x00000010u; // 802167D4
  c->r[29]=c->r[29]+0x00000001u; // 802167D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216798; } // 802167DC
  c->r[29]=0u+0xFFFFFFFFu; // 802167E0
L_802167E4:;
  c->r[3]=0u+0x00000025u; // 802167E4
  c->r[5]=c->r[30]+0x00000068u; // 802167E8
  c->r[0]=0u+0x00000001u; // 802167EC
  c->r[8]=0u+0x00000000u; // 802167F0
  c->ctr=c->r[3]; // 802167F4
L_802167F8:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802167F8
  cmps(c,0,(int32_t)c->r[3],4); // 802167FC
  if (!crb(c,2)) { goto L_80216814; } // 80216800
  c->r[3]=R32(c->r[5]+0x00000004u); // 80216804
  cmps(c,0,(int32_t)c->r[3],2); // 80216808
  if (!crb(c,2)) { goto L_80216814; } // 8021680C
  goto L_80216844; // 80216810
L_80216814:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 80216814
  c->r[8]=c->r[8]+0x00000001u; // 80216818
  cmps(c,0,(int32_t)c->r[3],4); // 8021681C
  if (!crb(c,2)) { goto L_80216834; } // 80216820
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 80216824
  cmps(c,0,(int32_t)c->r[3],2); // 80216828
  if (!crb(c,2)) { goto L_80216834; } // 8021682C
  goto L_80216844; // 80216830
L_80216834:;
  c->r[5]=c->r[5]+0x00000010u; // 80216834
  c->r[8]=c->r[8]+0x00000001u; // 80216838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802167F8; } // 8021683C
  c->r[8]=0u+0xFFFFFFFFu; // 80216840
L_80216844:;
  c->r[3]=0u+0x00000025u; // 80216844
  c->r[5]=c->r[30]+0x00000068u; // 80216848
  c->r[7]=0u+0x00000000u; // 8021684C
  c->ctr=c->r[3]; // 80216850
  c->r[0]=c->r[0]|0x00000000u; // 80216854
L_80216858:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80216858
  cmps(c,0,(int32_t)c->r[3],5); // 8021685C
  if (!crb(c,2)) { goto L_80216874; } // 80216860
  c->r[3]=R32(c->r[5]+0x00000004u); // 80216864
  cmps(c,0,(int32_t)c->r[3],3); // 80216868
  if (!crb(c,2)) { goto L_80216874; } // 8021686C
  goto L_802168A4; // 80216870
L_80216874:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 80216874
  c->r[7]=c->r[7]+0x00000001u; // 80216878
  cmps(c,0,(int32_t)c->r[3],5); // 8021687C
  if (!crb(c,2)) { goto L_80216894; } // 80216880
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 80216884
  cmps(c,0,(int32_t)c->r[3],3); // 80216888
  if (!crb(c,2)) { goto L_80216894; } // 8021688C
  goto L_802168A4; // 80216890
L_80216894:;
  c->r[5]=c->r[5]+0x00000010u; // 80216894
  c->r[7]=c->r[7]+0x00000001u; // 80216898
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216858; } // 8021689C
  c->r[7]=0u+0xFFFFFFFFu; // 802168A0
L_802168A4:;
  c->r[3]=0u+0x00000025u; // 802168A4
  c->r[5]=c->r[30]+0x00000068u; // 802168A8
  c->r[6]=0u+0x00000000u; // 802168AC
  c->ctr=c->r[3]; // 802168B0
  c->r[0]=c->r[0]|0x00000000u; // 802168B4
L_802168B8:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802168B8
  cmps(c,0,(int32_t)c->r[3],4); // 802168BC
  if (!crb(c,2)) { goto L_802168D4; } // 802168C0
  c->r[3]=R32(c->r[5]+0x00000004u); // 802168C4
  cmps(c,0,(int32_t)c->r[3],19); // 802168C8
  if (!crb(c,2)) { goto L_802168D4; } // 802168CC
  goto L_80216904; // 802168D0
L_802168D4:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802168D4
  c->r[6]=c->r[6]+0x00000001u; // 802168D8
  cmps(c,0,(int32_t)c->r[3],4); // 802168DC
  if (!crb(c,2)) { goto L_802168F4; } // 802168E0
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802168E4
  cmps(c,0,(int32_t)c->r[3],19); // 802168E8
  if (!crb(c,2)) { goto L_802168F4; } // 802168EC
  goto L_80216904; // 802168F0
L_802168F4:;
  c->r[5]=c->r[5]+0x00000010u; // 802168F4
  c->r[6]=c->r[6]+0x00000001u; // 802168F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802168B8; } // 802168FC
  c->r[6]=0u+0xFFFFFFFFu; // 80216900
L_80216904:;
  c->r[3]=0u+0x00000025u; // 80216904
  c->r[9]=c->r[30]+0x00000068u; // 80216908
  c->r[5]=0u+0x00000000u; // 8021690C
  c->ctr=c->r[3]; // 80216910
  c->r[0]=c->r[0]|0x00000000u; // 80216914
L_80216918:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80216918
  cmps(c,0,(int32_t)c->r[3],5); // 8021691C
  if (!crb(c,2)) { goto L_80216934; } // 80216920
  c->r[3]=R32(c->r[9]+0x00000004u); // 80216924
  cmps(c,0,(int32_t)c->r[3],20); // 80216928
  if (!crb(c,2)) { goto L_80216934; } // 8021692C
  goto L_80216964; // 80216930
L_80216934:;
  c->r[3]=R32(c->r[9]+0x00000008u); // 80216934
  c->r[5]=c->r[5]+0x00000001u; // 80216938
  cmps(c,0,(int32_t)c->r[3],5); // 8021693C
  if (!crb(c,2)) { goto L_80216954; } // 80216940
  c->r[3]=R32(c->r[9]+0x0000000Cu); // 80216944
  cmps(c,0,(int32_t)c->r[3],20); // 80216948
  if (!crb(c,2)) { goto L_80216954; } // 8021694C
  goto L_80216964; // 80216950
L_80216954:;
  c->r[9]=c->r[9]+0x00000010u; // 80216954
  c->r[5]=c->r[5]+0x00000001u; // 80216958
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216918; } // 8021695C
  c->r[5]=0u+0xFFFFFFFFu; // 80216960
L_80216964:;
  cmps(c,0,(int32_t)c->r[4],2); // 80216964
  if (!crb(c,2)) { goto L_802169CC; } // 80216968
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8021696C
  c->r[3]=c->r[26]+c->r[3]; // 80216970
  c->r[3]=R32(c->r[3]+0x00000290u); // 80216974
  c->r[3]=R32(c->r[3]+0x00000014u); // 80216978
  cmps(c,0,(int32_t)c->r[3],1); // 8021697C
  if (crb(c,2)) { goto L_802169CC; } // 80216980
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80216984
  c->r[3]=c->r[26]+c->r[3]; // 80216988
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021698C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80216990
  cmps(c,0,(int32_t)c->r[3],1); // 80216994
  if (crb(c,2)) { goto L_802169CC; } // 80216998
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8021699C
  c->r[3]=c->r[26]+c->r[3]; // 802169A0
  c->r[3]=R32(c->r[3]+0x00000290u); // 802169A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 802169A8
  cmps(c,0,(int32_t)c->r[3],1); // 802169AC
  if (crb(c,2)) { goto L_802169CC; } // 802169B0
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802169B4
  c->r[3]=c->r[26]+c->r[3]; // 802169B8
  c->r[3]=R32(c->r[3]+0x00000290u); // 802169BC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802169C0
  cmps(c,0,(int32_t)c->r[3],1); // 802169C4
  if (!crb(c,2)) { goto L_802169D0; } // 802169C8
L_802169CC:;
  c->r[0]=0u+0x00000000u; // 802169CC
L_802169D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802169D0
  if (crb(c,2)) { goto L_80216A50; } // 802169D4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802169D8
  c->r[3]=c->r[26]+c->r[0]; // 802169DC
  c->r[28]=R32(c->r[3]+0x00000290u); // 802169E0
  c->r[3]=c->r[28]|c->r[28]; // 802169E4
  c->lr=0x802169ECu; f_8020D2A0(c); // 802169E8
  c->r[0]=0u+0x00000001u; // 802169EC
  W32(c->r[28]+0x00000014u,c->r[0]); // 802169F0
  c->r[3]=0u+0x00000000u; // 802169F4
  c->r[0]=R32(c->r[26]+0x00000068u); // 802169F8
  W32(c->r[26]+0x00000078u,c->r[29]); // 802169FC
  cmps(c,0,(int32_t)c->r[0],2); // 80216A00
  W32(c->r[26]+0x00000070u,c->r[3]); // 80216A04
  if (!crb(c,1)) { goto L_80216A48; } // 80216A08
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216A0C
  c->r[3]=0u+0x00000000u; // 80216A10
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216A14
  cmps(c,0,(int32_t)c->r[12],0); // 80216A18
  if (crb(c,2)) { goto L_80216A30; } // 80216A1C
  c->r[3]=0u+0x00000005u; // 80216A20
  c->r[4]=0u+0x00000004u; // 80216A24
  c->ctr=c->r[12]; // 80216A28
  if (true) { c->lr=0x80216A30u; dispatch(c,c->ctr); } // 80216A2C
L_80216A30:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216A30
  if (!crb(c,2)) { goto L_80216A40; } // 80216A34
  c->r[3]=0u+0x00000004u; // 80216A38
  c->lr=0x80216A40u; f_80210650(c); // 80216A3C
L_80216A40:;
  c->r[0]=0u+0x00000000u; // 80216A40
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216A44
L_80216A48:;
  c->r[28]=0u+0x00000001u; // 80216A48
  goto L_80217004; // 80216A4C
L_80216A50:;
  W32(c->r[26]+0x00000070u,c->r[29]); // 80216A50
  goto L_80217004; // 80216A54
L_80216A58:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216A58
  if (!crb(c,2)) { goto L_80217004; } // 80216A5C
  c->r[0]=0u+0x00000025u; // 80216A60
  c->r[4]=c->r[30]+0x00000068u; // 80216A64
  c->r[3]=0u+0x00000000u; // 80216A68
  c->ctr=c->r[0]; // 80216A6C
L_80216A70:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216A70
  cmps(c,0,(int32_t)c->r[0],6); // 80216A74
  if (!crb(c,2)) { goto L_80216A8C; } // 80216A78
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216A7C
  cmps(c,0,(int32_t)c->r[0],4); // 80216A80
  if (!crb(c,2)) { goto L_80216A8C; } // 80216A84
  goto L_80216ABC; // 80216A88
L_80216A8C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216A8C
  c->r[3]=c->r[3]+0x00000001u; // 80216A90
  cmps(c,0,(int32_t)c->r[0],6); // 80216A94
  if (!crb(c,2)) { goto L_80216AAC; } // 80216A98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216A9C
  cmps(c,0,(int32_t)c->r[0],4); // 80216AA0
  if (!crb(c,2)) { goto L_80216AAC; } // 80216AA4
  goto L_80216ABC; // 80216AA8
L_80216AAC:;
  c->r[4]=c->r[4]+0x00000010u; // 80216AAC
  c->r[3]=c->r[3]+0x00000001u; // 80216AB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216A70; } // 80216AB4
  c->r[3]=0u+0xFFFFFFFFu; // 80216AB8
L_80216ABC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216ABC
  c->r[3]=c->r[26]+c->r[0]; // 80216AC0
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216AC4
  c->r[3]=c->r[28]|c->r[28]; // 80216AC8
  c->lr=0x80216AD0u; f_8020D2A0(c); // 80216ACC
  c->r[0]=0u+0x00000001u; // 80216AD0
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216AD4
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216AD8
  cmps(c,0,(int32_t)c->r[0],2); // 80216ADC
  if (!crb(c,1)) { goto L_80216B20; } // 80216AE0
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216AE4
  c->r[3]=0u+0x00000000u; // 80216AE8
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216AEC
  cmps(c,0,(int32_t)c->r[12],0); // 80216AF0
  if (crb(c,2)) { goto L_80216B08; } // 80216AF4
  c->r[3]=0u+0x00000005u; // 80216AF8
  c->r[4]=0u+0x00000004u; // 80216AFC
  c->ctr=c->r[12]; // 80216B00
  if (true) { c->lr=0x80216B08u; dispatch(c,c->ctr); } // 80216B04
L_80216B08:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216B08
  if (!crb(c,2)) { goto L_80216B18; } // 80216B0C
  c->r[3]=0u+0x00000004u; // 80216B10
  c->lr=0x80216B18u; f_80210650(c); // 80216B14
L_80216B18:;
  c->r[0]=0u+0x00000000u; // 80216B18
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216B1C
L_80216B20:;
  c->r[28]=0u+0x00000001u; // 80216B20
  goto L_80217004; // 80216B24
L_80216B28:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216B28
  if (!crb(c,2)) { goto L_80217004; } // 80216B2C
  c->r[0]=0u+0x00000025u; // 80216B30
  c->r[4]=c->r[30]+0x00000068u; // 80216B34
  c->r[3]=0u+0x00000000u; // 80216B38
  c->ctr=c->r[0]; // 80216B3C
L_80216B40:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216B40
  cmps(c,0,(int32_t)c->r[0],7); // 80216B44
  if (!crb(c,2)) { goto L_80216B5C; } // 80216B48
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216B4C
  cmps(c,0,(int32_t)c->r[0],4); // 80216B50
  if (!crb(c,2)) { goto L_80216B5C; } // 80216B54
  goto L_80216B8C; // 80216B58
L_80216B5C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216B5C
  c->r[3]=c->r[3]+0x00000001u; // 80216B60
  cmps(c,0,(int32_t)c->r[0],7); // 80216B64
  if (!crb(c,2)) { goto L_80216B7C; } // 80216B68
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216B6C
  cmps(c,0,(int32_t)c->r[0],4); // 80216B70
  if (!crb(c,2)) { goto L_80216B7C; } // 80216B74
  goto L_80216B8C; // 80216B78
L_80216B7C:;
  c->r[4]=c->r[4]+0x00000010u; // 80216B7C
  c->r[3]=c->r[3]+0x00000001u; // 80216B80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216B40; } // 80216B84
  c->r[3]=0u+0xFFFFFFFFu; // 80216B88
L_80216B8C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216B8C
  c->r[3]=c->r[26]+c->r[0]; // 80216B90
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216B94
  c->r[3]=c->r[28]|c->r[28]; // 80216B98
  c->lr=0x80216BA0u; f_8020D2A0(c); // 80216B9C
  c->r[0]=0u+0x00000001u; // 80216BA0
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216BA4
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216BA8
  cmps(c,0,(int32_t)c->r[0],2); // 80216BAC
  if (!crb(c,1)) { goto L_80216BF0; } // 80216BB0
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216BB4
  c->r[3]=0u+0x00000000u; // 80216BB8
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216BBC
  cmps(c,0,(int32_t)c->r[12],0); // 80216BC0
  if (crb(c,2)) { goto L_80216BD8; } // 80216BC4
  c->r[3]=0u+0x00000005u; // 80216BC8
  c->r[4]=0u+0x00000004u; // 80216BCC
  c->ctr=c->r[12]; // 80216BD0
  if (true) { c->lr=0x80216BD8u; dispatch(c,c->ctr); } // 80216BD4
L_80216BD8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216BD8
  if (!crb(c,2)) { goto L_80216BE8; } // 80216BDC
  c->r[3]=0u+0x00000004u; // 80216BE0
  c->lr=0x80216BE8u; f_80210650(c); // 80216BE4
L_80216BE8:;
  c->r[0]=0u+0x00000000u; // 80216BE8
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216BEC
L_80216BF0:;
  c->r[28]=0u+0x00000001u; // 80216BF0
  goto L_80217004; // 80216BF4
L_80216BF8:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216BF8
  if (!crb(c,2)) { goto L_80217004; } // 80216BFC
  c->r[0]=0u+0x00000025u; // 80216C00
  c->r[4]=c->r[30]+0x00000068u; // 80216C04
  c->r[3]=0u+0x00000000u; // 80216C08
  c->ctr=c->r[0]; // 80216C0C
L_80216C10:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216C10
  cmps(c,0,(int32_t)c->r[0],8); // 80216C14
  if (!crb(c,2)) { goto L_80216C2C; } // 80216C18
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216C1C
  cmps(c,0,(int32_t)c->r[0],4); // 80216C20
  if (!crb(c,2)) { goto L_80216C2C; } // 80216C24
  goto L_80216C5C; // 80216C28
L_80216C2C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216C2C
  c->r[3]=c->r[3]+0x00000001u; // 80216C30
  cmps(c,0,(int32_t)c->r[0],8); // 80216C34
  if (!crb(c,2)) { goto L_80216C4C; } // 80216C38
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216C3C
  cmps(c,0,(int32_t)c->r[0],4); // 80216C40
  if (!crb(c,2)) { goto L_80216C4C; } // 80216C44
  goto L_80216C5C; // 80216C48
L_80216C4C:;
  c->r[4]=c->r[4]+0x00000010u; // 80216C4C
  c->r[3]=c->r[3]+0x00000001u; // 80216C50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216C10; } // 80216C54
  c->r[3]=0u+0xFFFFFFFFu; // 80216C58
L_80216C5C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216C5C
  c->r[3]=c->r[26]+c->r[0]; // 80216C60
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216C64
  c->r[3]=c->r[28]|c->r[28]; // 80216C68
  c->lr=0x80216C70u; f_8020D2A0(c); // 80216C6C
  c->r[0]=0u+0x00000001u; // 80216C70
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216C74
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216C78
  cmps(c,0,(int32_t)c->r[0],2); // 80216C7C
  if (!crb(c,1)) { goto L_80216CC0; } // 80216C80
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216C84
  c->r[3]=0u+0x00000000u; // 80216C88
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216C8C
  cmps(c,0,(int32_t)c->r[12],0); // 80216C90
  if (crb(c,2)) { goto L_80216CA8; } // 80216C94
  c->r[3]=0u+0x00000005u; // 80216C98
  c->r[4]=0u+0x00000004u; // 80216C9C
  c->ctr=c->r[12]; // 80216CA0
  if (true) { c->lr=0x80216CA8u; dispatch(c,c->ctr); } // 80216CA4
L_80216CA8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216CA8
  if (!crb(c,2)) { goto L_80216CB8; } // 80216CAC
  c->r[3]=0u+0x00000004u; // 80216CB0
  c->lr=0x80216CB8u; f_80210650(c); // 80216CB4
L_80216CB8:;
  c->r[0]=0u+0x00000000u; // 80216CB8
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216CBC
L_80216CC0:;
  c->r[28]=0u+0x00000001u; // 80216CC0
  goto L_80217004; // 80216CC4
L_80216CC8:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216CC8
  if (!crb(c,2)) { goto L_80217004; } // 80216CCC
  c->r[0]=0u+0x00000025u; // 80216CD0
  c->r[4]=c->r[30]+0x00000068u; // 80216CD4
  c->r[3]=0u+0x00000000u; // 80216CD8
  c->ctr=c->r[0]; // 80216CDC
L_80216CE0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216CE0
  cmps(c,0,(int32_t)c->r[0],9); // 80216CE4
  if (!crb(c,2)) { goto L_80216CFC; } // 80216CE8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216CEC
  cmps(c,0,(int32_t)c->r[0],4); // 80216CF0
  if (!crb(c,2)) { goto L_80216CFC; } // 80216CF4
  goto L_80216D2C; // 80216CF8
L_80216CFC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216CFC
  c->r[3]=c->r[3]+0x00000001u; // 80216D00
  cmps(c,0,(int32_t)c->r[0],9); // 80216D04
  if (!crb(c,2)) { goto L_80216D1C; } // 80216D08
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216D0C
  cmps(c,0,(int32_t)c->r[0],4); // 80216D10
  if (!crb(c,2)) { goto L_80216D1C; } // 80216D14
  goto L_80216D2C; // 80216D18
L_80216D1C:;
  c->r[4]=c->r[4]+0x00000010u; // 80216D1C
  c->r[3]=c->r[3]+0x00000001u; // 80216D20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216CE0; } // 80216D24
  c->r[3]=0u+0xFFFFFFFFu; // 80216D28
L_80216D2C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216D2C
  c->r[3]=c->r[26]+c->r[0]; // 80216D30
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216D34
  c->r[3]=c->r[28]|c->r[28]; // 80216D38
  c->lr=0x80216D40u; f_8020D2A0(c); // 80216D3C
  c->r[0]=0u+0x00000001u; // 80216D40
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216D44
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216D48
  cmps(c,0,(int32_t)c->r[0],2); // 80216D4C
  if (!crb(c,1)) { goto L_80216D90; } // 80216D50
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216D54
  c->r[3]=0u+0x00000000u; // 80216D58
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216D5C
  cmps(c,0,(int32_t)c->r[12],0); // 80216D60
  if (crb(c,2)) { goto L_80216D78; } // 80216D64
  c->r[3]=0u+0x00000005u; // 80216D68
  c->r[4]=0u+0x00000004u; // 80216D6C
  c->ctr=c->r[12]; // 80216D70
  if (true) { c->lr=0x80216D78u; dispatch(c,c->ctr); } // 80216D74
L_80216D78:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216D78
  if (!crb(c,2)) { goto L_80216D88; } // 80216D7C
  c->r[3]=0u+0x00000004u; // 80216D80
  c->lr=0x80216D88u; f_80210650(c); // 80216D84
L_80216D88:;
  c->r[0]=0u+0x00000000u; // 80216D88
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216D8C
L_80216D90:;
  c->r[28]=0u+0x00000001u; // 80216D90
  goto L_80217004; // 80216D94
L_80216D98:;
  cmps(c,0,(int32_t)c->r[5],1); // 80216D98
  if (!crb(c,2)) { goto L_80217004; } // 80216D9C
  c->r[0]=0u+0x00000025u; // 80216DA0
  c->r[4]=c->r[30]+0x00000068u; // 80216DA4
  c->r[3]=0u+0x00000000u; // 80216DA8
  c->ctr=c->r[0]; // 80216DAC
L_80216DB0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216DB0
  cmps(c,0,(int32_t)c->r[0],10); // 80216DB4
  if (!crb(c,2)) { goto L_80216DCC; } // 80216DB8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216DBC
  cmps(c,0,(int32_t)c->r[0],4); // 80216DC0
  if (!crb(c,2)) { goto L_80216DCC; } // 80216DC4
  goto L_80216DFC; // 80216DC8
L_80216DCC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216DCC
  c->r[3]=c->r[3]+0x00000001u; // 80216DD0
  cmps(c,0,(int32_t)c->r[0],10); // 80216DD4
  if (!crb(c,2)) { goto L_80216DEC; } // 80216DD8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216DDC
  cmps(c,0,(int32_t)c->r[0],4); // 80216DE0
  if (!crb(c,2)) { goto L_80216DEC; } // 80216DE4
  goto L_80216DFC; // 80216DE8
L_80216DEC:;
  c->r[4]=c->r[4]+0x00000010u; // 80216DEC
  c->r[3]=c->r[3]+0x00000001u; // 80216DF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216DB0; } // 80216DF4
  c->r[3]=0u+0xFFFFFFFFu; // 80216DF8
L_80216DFC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216DFC
  c->r[3]=c->r[26]+c->r[0]; // 80216E00
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216E04
  c->r[3]=c->r[28]|c->r[28]; // 80216E08
  c->lr=0x80216E10u; f_8020D2A0(c); // 80216E0C
  c->r[0]=0u+0x00000001u; // 80216E10
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216E14
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216E18
  cmps(c,0,(int32_t)c->r[0],2); // 80216E1C
  if (!crb(c,1)) { goto L_80216E60; } // 80216E20
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216E24
  c->r[3]=0u+0x00000000u; // 80216E28
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216E2C
  cmps(c,0,(int32_t)c->r[12],0); // 80216E30
  if (crb(c,2)) { goto L_80216E48; } // 80216E34
  c->r[3]=0u+0x00000005u; // 80216E38
  c->r[4]=0u+0x00000004u; // 80216E3C
  c->ctr=c->r[12]; // 80216E40
  if (true) { c->lr=0x80216E48u; dispatch(c,c->ctr); } // 80216E44
L_80216E48:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216E48
  if (!crb(c,2)) { goto L_80216E58; } // 80216E4C
  c->r[3]=0u+0x00000004u; // 80216E50
  c->lr=0x80216E58u; f_80210650(c); // 80216E54
L_80216E58:;
  c->r[0]=0u+0x00000000u; // 80216E58
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216E5C
L_80216E60:;
  c->r[28]=0u+0x00000001u; // 80216E60
  goto L_80217004; // 80216E64
L_80216E68:;
  cmps(c,0,(int32_t)c->r[5],2); // 80216E68
  if (!crb(c,2)) { goto L_80217004; } // 80216E6C
  c->r[0]=0u+0x00000025u; // 80216E70
  c->r[4]=c->r[30]+0x00000068u; // 80216E74
  c->r[3]=0u+0x00000000u; // 80216E78
  c->ctr=c->r[0]; // 80216E7C
L_80216E80:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216E80
  cmps(c,0,(int32_t)c->r[0],17); // 80216E84
  if (!crb(c,2)) { goto L_80216E9C; } // 80216E88
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216E8C
  cmps(c,0,(int32_t)c->r[0],11); // 80216E90
  if (!crb(c,2)) { goto L_80216E9C; } // 80216E94
  goto L_80216ECC; // 80216E98
L_80216E9C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216E9C
  c->r[3]=c->r[3]+0x00000001u; // 80216EA0
  cmps(c,0,(int32_t)c->r[0],17); // 80216EA4
  if (!crb(c,2)) { goto L_80216EBC; } // 80216EA8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216EAC
  cmps(c,0,(int32_t)c->r[0],11); // 80216EB0
  if (!crb(c,2)) { goto L_80216EBC; } // 80216EB4
  goto L_80216ECC; // 80216EB8
L_80216EBC:;
  c->r[4]=c->r[4]+0x00000010u; // 80216EBC
  c->r[3]=c->r[3]+0x00000001u; // 80216EC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216E80; } // 80216EC4
  c->r[3]=0u+0xFFFFFFFFu; // 80216EC8
L_80216ECC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216ECC
  c->r[3]=c->r[26]+c->r[0]; // 80216ED0
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216ED4
  c->r[3]=c->r[28]|c->r[28]; // 80216ED8
  c->lr=0x80216EE0u; f_8020D2A0(c); // 80216EDC
  c->r[0]=0u+0x00000001u; // 80216EE0
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216EE4
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216EE8
  cmps(c,0,(int32_t)c->r[0],2); // 80216EEC
  if (!crb(c,1)) { goto L_80216F30; } // 80216EF0
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216EF4
  c->r[3]=0u+0x00000000u; // 80216EF8
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216EFC
  cmps(c,0,(int32_t)c->r[12],0); // 80216F00
  if (crb(c,2)) { goto L_80216F18; } // 80216F04
  c->r[3]=0u+0x00000005u; // 80216F08
  c->r[4]=0u+0x00000004u; // 80216F0C
  c->ctr=c->r[12]; // 80216F10
  if (true) { c->lr=0x80216F18u; dispatch(c,c->ctr); } // 80216F14
L_80216F18:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216F18
  if (!crb(c,2)) { goto L_80216F28; } // 80216F1C
  c->r[3]=0u+0x00000004u; // 80216F20
  c->lr=0x80216F28u; f_80210650(c); // 80216F24
L_80216F28:;
  c->r[0]=0u+0x00000000u; // 80216F28
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216F2C
L_80216F30:;
  c->r[28]=0u+0x00000001u; // 80216F30
  goto L_80217004; // 80216F34
L_80216F38:;
  cmps(c,0,(int32_t)c->r[5],2); // 80216F38
  if (!crb(c,2)) { goto L_80217004; } // 80216F3C
  c->r[0]=0u+0x00000025u; // 80216F40
  c->r[4]=c->r[30]+0x00000068u; // 80216F44
  c->r[3]=0u+0x00000000u; // 80216F48
  c->ctr=c->r[0]; // 80216F4C
L_80216F50:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80216F50
  cmps(c,0,(int32_t)c->r[0],18); // 80216F54
  if (!crb(c,2)) { goto L_80216F6C; } // 80216F58
  c->r[0]=R32(c->r[4]+0x00000004u); // 80216F5C
  cmps(c,0,(int32_t)c->r[0],11); // 80216F60
  if (!crb(c,2)) { goto L_80216F6C; } // 80216F64
  goto L_80216F9C; // 80216F68
L_80216F6C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80216F6C
  c->r[3]=c->r[3]+0x00000001u; // 80216F70
  cmps(c,0,(int32_t)c->r[0],18); // 80216F74
  if (!crb(c,2)) { goto L_80216F8C; } // 80216F78
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80216F7C
  cmps(c,0,(int32_t)c->r[0],11); // 80216F80
  if (!crb(c,2)) { goto L_80216F8C; } // 80216F84
  goto L_80216F9C; // 80216F88
L_80216F8C:;
  c->r[4]=c->r[4]+0x00000010u; // 80216F8C
  c->r[3]=c->r[3]+0x00000001u; // 80216F90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80216F50; } // 80216F94
  c->r[3]=0u+0xFFFFFFFFu; // 80216F98
L_80216F9C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80216F9C
  c->r[3]=c->r[26]+c->r[0]; // 80216FA0
  c->r[28]=R32(c->r[3]+0x00000290u); // 80216FA4
  c->r[3]=c->r[28]|c->r[28]; // 80216FA8
  c->lr=0x80216FB0u; f_8020D2A0(c); // 80216FAC
  c->r[0]=0u+0x00000001u; // 80216FB0
  W32(c->r[28]+0x00000014u,c->r[0]); // 80216FB4
  c->r[0]=R32(c->r[26]+0x00000068u); // 80216FB8
  cmps(c,0,(int32_t)c->r[0],2); // 80216FBC
  if (!crb(c,1)) { goto L_80217000; } // 80216FC0
  c->r[4]=R32(c->r[26]+0x00000004u); // 80216FC4
  c->r[3]=0u+0x00000000u; // 80216FC8
  c->r[12]=R32(c->r[4]+0x00000014u); // 80216FCC
  cmps(c,0,(int32_t)c->r[12],0); // 80216FD0
  if (crb(c,2)) { goto L_80216FE8; } // 80216FD4
  c->r[3]=0u+0x00000005u; // 80216FD8
  c->r[4]=0u+0x00000004u; // 80216FDC
  c->ctr=c->r[12]; // 80216FE0
  if (true) { c->lr=0x80216FE8u; dispatch(c,c->ctr); } // 80216FE4
L_80216FE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80216FE8
  if (!crb(c,2)) { goto L_80216FF8; } // 80216FEC
  c->r[3]=0u+0x00000004u; // 80216FF0
  c->lr=0x80216FF8u; f_80210650(c); // 80216FF4
L_80216FF8:;
  c->r[0]=0u+0x00000000u; // 80216FF8
  W32(c->r[26]+0x00000068u,c->r[0]); // 80216FFC
L_80217000:;
  c->r[28]=0u+0x00000001u; // 80217000
L_80217004:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80217004
  c->r[4]=c->r[3]+0x00000001u; // 80217008
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 8021700C
  if (crb(c,2)) { goto L_80217020; } // 80217010
  c->r[0]=c->r[3]+0x00000009u; // 80217014
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80217018
  if (!crb(c,2)) { goto L_80217054; } // 8021701C
L_80217020:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80217020
  c->r[4]=c->r[26]+c->r[0]; // 80217024
  c->r[3]=R32(c->r[4]+0x00000020u); // 80217028
  c->r[0]=c->r[3]+0x00000001u; // 8021702C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80217030
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80217034
  c->r[0]=c->r[3]+0x00000009u; // 80217038
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021703C
  c->r[4]=c->r[26]+c->r[0]; // 80217040
  c->r[3]=R32(c->r[4]+0x00000020u); // 80217044
  c->r[0]=c->r[3]+0x00000001u; // 80217048
  W32(c->r[4]+0x00000020u,c->r[0]); // 8021704C
  goto L_80217068; // 80217050
L_80217054:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80217054
  c->r[4]=c->r[26]+c->r[0]; // 80217058
  c->r[3]=R32(c->r[4]+0x00000020u); // 8021705C
  c->r[0]=c->r[3]+0x00000001u; // 80217060
  W32(c->r[4]+0x00000020u,c->r[0]); // 80217064
L_80217068:;
  cmps(c,0,(int32_t)c->r[28],0); // 80217068
  if (crb(c,2)) { goto L_802170C4; } // 8021706C
  cmps(c,0,(int32_t)c->r[27],0); // 80217070
  if (crb(c,2)) { goto L_802170C4; } // 80217074
  c->r[0]=R32(c->r[27]+0x00000000u); // 80217078
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021707C
  c->r[4]=c->r[26]+c->r[0]; // 80217080
  c->r[3]=R32(c->r[4]+0x0000024Cu); // 80217084
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80217088
  cmps(c,0,(int32_t)c->r[0],0); // 8021708C
  if (!crb(c,2)) { goto L_802170C4; } // 80217090
  {uint32_t ea=c->r[4]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217094
  {uint32_t ea=c->r[30]+0x000002E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217098
  fcmp(c,0,c->f[1],c->f[0]); // 8021709C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802170A0
  if (!crb(c,2)) { goto L_802170C4; } // 802170A4
  {uint32_t ea=c->r[30]+0x00000368u; c->f[0]=c->ps1[0]=RF32(ea);} // 802170A8
  {uint32_t ea=c->r[4]+0x000001B0u; WF32(ea,c->f[0]);} // 802170AC
  c->r[0]=R32(c->r[27]+0x00000000u); // 802170B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802170B4
  c->r[3]=c->r[26]+c->r[0]; // 802170B8
  c->r[3]=R32(c->r[3]+0x0000024Cu); // 802170BC
  c->lr=0x802170C4u; f_8020F710(c); // 802170C0
L_802170C4:;
  c->r[11]=c->r[1]+0x00000020u; // 802170C4
  c->lr=0x802170CCu; f_800C2E94(c); // 802170C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802170CC
  c->lr=c->r[0]; // 802170D0
  c->r[1]=c->r[1]+0x00000020u; // 802170D4
  return; // 802170D8
}

// fn_802170E0
void f_802170E0(Ctx* __restrict c) {
  trace_call(0x802170E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802170E0
  c->r[0]=c->lr; // 802170E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802170E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802170EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802170F0
  c->r[30]=c->r[3]|c->r[3]; // 802170F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802170F8
  c->lr=0x80217100u; f_802190A0(c); // 802170FC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217100
  c->r[6]=c->r[30]+c->r[0]; // 80217104
  c->r[4]=R32(c->r[6]+0x00000020u); // 80217108
  cmps(c,0,(int32_t)c->r[4],0); // 8021710C
  if (!crb(c,1)) { goto L_8021716C; } // 80217110
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80217114
  c->r[7]=c->r[5]+0x00000001u; // 80217118
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[7]); // 8021711C
  if (crb(c,2)) { goto L_80217130; } // 80217120
  c->r[0]=c->r[5]+0x00000009u; // 80217124
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80217128
  if (!crb(c,2)) { goto L_80217164; } // 8021712C
L_80217130:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80217130
  c->r[5]=c->r[30]+c->r[0]; // 80217134
  c->r[4]=R32(c->r[5]+0x00000020u); // 80217138
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8021713C
  W32(c->r[5]+0x00000020u,c->r[0]); // 80217140
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80217144
  c->r[0]=c->r[4]+0x00000009u; // 80217148
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021714C
  c->r[5]=c->r[30]+c->r[0]; // 80217150
  c->r[4]=R32(c->r[5]+0x00000020u); // 80217154
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80217158
  W32(c->r[5]+0x00000020u,c->r[0]); // 8021715C
  goto L_8021716C; // 80217160
L_80217164:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80217164
  W32(c->r[6]+0x00000020u,c->r[0]); // 80217168
L_8021716C:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 8021716C
  cmps(c,0,(int32_t)c->r[4],2); // 80217170
  if (!crb(c,2)) { goto L_80217B90; } // 80217174
  cmps(c,0,(int32_t)c->r[3],-1); // 80217178
  if (crb(c,2)) { goto L_80217B90; } // 8021717C
  c->r[0]=R32(c->r[6]+0x00000020u); // 80217180
  cmps(c,0,(int32_t)c->r[0],0); // 80217184
  if (!crb(c,2)) { goto L_80217B90; } // 80217188
  c->r[5]=R32(c->r[30]+0x00000000u); // 8021718C
  cmps(c,0,(int32_t)c->r[5],2); // 80217190
  if (crb(c,2)) { goto L_8021720C; } // 80217194
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80217198
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021719C
  if (!crb(c,0)) { goto L_8021720C; } // 802171A0
  c->r[0]=R32(c->r[30]+0x00000010u); // 802171A4
  c->r[5]=0u+0x80380000u; // 802171A8
  c->r[5]=c->r[5]+0xFFFFF488u; // 802171AC
  c->r[4]=0u+0x00000000u; // 802171B0
  c->ctr=c->r[0]; // 802171B4
  cmps(c,0,(int32_t)c->r[0],0); // 802171B8
  if (!crb(c,1)) { goto L_802171E8; } // 802171BC
L_802171C0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802171C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802171C4
  if (!crb(c,2)) { goto L_802171DC; } // 802171C8
  c->r[0]=R32(c->r[5]+0x00000004u); // 802171CC
  cmps(c,0,(int32_t)c->r[0],2); // 802171D0
  if (!crb(c,2)) { goto L_802171DC; } // 802171D4
  goto L_802171EC; // 802171D8
L_802171DC:;
  c->r[5]=c->r[5]+0x00000008u; // 802171DC
  c->r[4]=c->r[4]+0x00000001u; // 802171E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802171C0; } // 802171E4
L_802171E8:;
  c->r[4]=0u+0xFFFFFFFFu; // 802171E8
L_802171EC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802171EC
  c->r[3]=c->r[30]+c->r[0]; // 802171F0
  c->r[30]=R32(c->r[3]+0x00000260u); // 802171F4
  c->r[3]=c->r[30]|c->r[30]; // 802171F8
  c->lr=0x80217200u; f_8020D2A0(c); // 802171FC
  c->r[0]=0u+0x00000001u; // 80217200
  W32(c->r[30]+0x00000014u,c->r[0]); // 80217204
  goto L_80217B90; // 80217208
L_8021720C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8021720C
  c->r[0]=c->r[3]-c->r[0]; // 80217210
  cmpu(c,0,c->r[0],0x00000009u); // 80217214
  if (crb(c,1)) { goto L_80217B90; } // 80217218
  c->r[3]=0u+0x803A0000u; // 8021721C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217220
  c->r[3]=c->r[3]+0x000074E4u; // 80217224
  c->r[3]=R32(c->r[3]+c->r[0]); // 80217228
  c->ctr=c->r[3]; // 8021722C
  if (true) { switch (c->ctr) { case 0x80217234u: goto L_80217234; case 0x802172A8u: goto L_802172A8; case 0x802177DCu: goto L_802177DC; case 0x80217864u: goto L_80217864; case 0x802178ECu: goto L_802178EC; case 0x80217974u: goto L_80217974; case 0x802179FCu: goto L_802179FC; case 0x80217A84u: goto L_80217A84; case 0x80217B0Cu: goto L_80217B0C; default: break; } dispatch(c,c->ctr); return; } // 80217230
L_80217234:;
  cmps(c,0,(int32_t)c->r[5],0); // 80217234
  if (!crb(c,2)) { goto L_80217B90; } // 80217238
  cmps(c,0,(int32_t)c->r[4],2); // 8021723C
  c->r[4]=0u+0x00000001u; // 80217240
  if (!crb(c,2)) { goto L_80217268; } // 80217244
  c->r[3]=R32(c->r[30]+0x000003E8u); // 80217248
  c->r[0]=R32(c->r[3]+0x00000014u); // 8021724C
  cmps(c,0,(int32_t)c->r[0],1); // 80217250
  if (crb(c,2)) { goto L_80217268; } // 80217254
  c->r[3]=R32(c->r[30]+0x000003C4u); // 80217258
  c->r[0]=R32(c->r[3]+0x00000014u); // 8021725C
  cmps(c,0,(int32_t)c->r[0],1); // 80217260
  if (!crb(c,2)) { goto L_8021726C; } // 80217264
L_80217268:;
  c->r[4]=0u+0x00000000u; // 80217268
L_8021726C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8021726C
  if (crb(c,2)) { goto L_8021729C; } // 80217270
  c->r[31]=R32(c->r[30]+0x000003E8u); // 80217274
  c->r[3]=c->r[31]|c->r[31]; // 80217278
  c->lr=0x80217280u; f_8020D2A0(c); // 8021727C
  c->r[0]=0u+0x00000001u; // 80217280
  W32(c->r[31]+0x00000014u,c->r[0]); // 80217284
  c->r[3]=0u+0x0000000Cu; // 80217288
  c->r[0]=0u+0x00000000u; // 8021728C
  W32(c->r[30]+0x00000074u,c->r[3]); // 80217290
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 80217294
  goto L_80217B90; // 80217298
L_8021729C:;
  c->r[0]=0u+0x0000000Cu; // 8021729C
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 802172A0
  goto L_80217B90; // 802172A4
L_802172A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802172A8
  if (!crb(c,2)) { goto L_80217544; } // 802172AC
  c->r[3]=0u+0x80380000u; // 802172B0
  c->r[0]=0u+0x00000025u; // 802172B4
  c->r[3]=c->r[3]+0xFFFFF4E8u; // 802172B8
  c->r[31]=0u+0x00000000u; // 802172BC
  c->ctr=c->r[0]; // 802172C0
  c->r[0]=c->r[0]|0x00000000u; // 802172C4
L_802172C8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802172C8
  cmps(c,0,(int32_t)c->r[0],5); // 802172CC
  if (!crb(c,2)) { goto L_802172E4; } // 802172D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802172D4
  cmps(c,0,(int32_t)c->r[0],3); // 802172D8
  if (!crb(c,2)) { goto L_802172E4; } // 802172DC
  goto L_80217314; // 802172E0
L_802172E4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802172E4
  c->r[31]=c->r[31]+0x00000001u; // 802172E8
  cmps(c,0,(int32_t)c->r[0],5); // 802172EC
  if (!crb(c,2)) { goto L_80217304; } // 802172F0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802172F4
  cmps(c,0,(int32_t)c->r[0],3); // 802172F8
  if (!crb(c,2)) { goto L_80217304; } // 802172FC
  goto L_80217314; // 80217300
L_80217304:;
  c->r[3]=c->r[3]+0x00000010u; // 80217304
  c->r[31]=c->r[31]+0x00000001u; // 80217308
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802172C8; } // 8021730C
  c->r[31]=0u+0xFFFFFFFFu; // 80217310
L_80217314:;
  c->r[5]=0u+0x80380000u; // 80217314
  c->r[3]=0u+0x00000025u; // 80217318
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 8021731C
  c->r[0]=0u+0x00000001u; // 80217320
  c->r[8]=0u+0x00000000u; // 80217324
  c->ctr=c->r[3]; // 80217328
  c->r[0]=c->r[0]|0x00000000u; // 8021732C
L_80217330:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80217330
  cmps(c,0,(int32_t)c->r[3],4); // 80217334
  if (!crb(c,2)) { goto L_8021734C; } // 80217338
  c->r[3]=R32(c->r[5]+0x00000004u); // 8021733C
  cmps(c,0,(int32_t)c->r[3],2); // 80217340
  if (!crb(c,2)) { goto L_8021734C; } // 80217344
  goto L_8021737C; // 80217348
L_8021734C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8021734C
  c->r[8]=c->r[8]+0x00000001u; // 80217350
  cmps(c,0,(int32_t)c->r[3],4); // 80217354
  if (!crb(c,2)) { goto L_8021736C; } // 80217358
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8021735C
  cmps(c,0,(int32_t)c->r[3],2); // 80217360
  if (!crb(c,2)) { goto L_8021736C; } // 80217364
  goto L_8021737C; // 80217368
L_8021736C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021736C
  c->r[8]=c->r[8]+0x00000001u; // 80217370
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217330; } // 80217374
  c->r[8]=0u+0xFFFFFFFFu; // 80217378
L_8021737C:;
  c->r[5]=0u+0x80380000u; // 8021737C
  c->r[3]=0u+0x00000025u; // 80217380
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 80217384
  c->r[7]=0u+0x00000000u; // 80217388
  c->ctr=c->r[3]; // 8021738C
L_80217390:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80217390
  cmps(c,0,(int32_t)c->r[3],5); // 80217394
  if (!crb(c,2)) { goto L_802173AC; } // 80217398
  c->r[3]=R32(c->r[5]+0x00000004u); // 8021739C
  cmps(c,0,(int32_t)c->r[3],3); // 802173A0
  if (!crb(c,2)) { goto L_802173AC; } // 802173A4
  goto L_802173DC; // 802173A8
L_802173AC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802173AC
  c->r[7]=c->r[7]+0x00000001u; // 802173B0
  cmps(c,0,(int32_t)c->r[3],5); // 802173B4
  if (!crb(c,2)) { goto L_802173CC; } // 802173B8
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802173BC
  cmps(c,0,(int32_t)c->r[3],3); // 802173C0
  if (!crb(c,2)) { goto L_802173CC; } // 802173C4
  goto L_802173DC; // 802173C8
L_802173CC:;
  c->r[5]=c->r[5]+0x00000010u; // 802173CC
  c->r[7]=c->r[7]+0x00000001u; // 802173D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217390; } // 802173D4
  c->r[7]=0u+0xFFFFFFFFu; // 802173D8
L_802173DC:;
  c->r[5]=0u+0x80380000u; // 802173DC
  c->r[3]=0u+0x00000025u; // 802173E0
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 802173E4
  c->r[6]=0u+0x00000000u; // 802173E8
  c->ctr=c->r[3]; // 802173EC
L_802173F0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802173F0
  cmps(c,0,(int32_t)c->r[3],4); // 802173F4
  if (!crb(c,2)) { goto L_8021740C; } // 802173F8
  c->r[3]=R32(c->r[5]+0x00000004u); // 802173FC
  cmps(c,0,(int32_t)c->r[3],19); // 80217400
  if (!crb(c,2)) { goto L_8021740C; } // 80217404
  goto L_8021743C; // 80217408
L_8021740C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8021740C
  c->r[6]=c->r[6]+0x00000001u; // 80217410
  cmps(c,0,(int32_t)c->r[3],4); // 80217414
  if (!crb(c,2)) { goto L_8021742C; } // 80217418
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8021741C
  cmps(c,0,(int32_t)c->r[3],19); // 80217420
  if (!crb(c,2)) { goto L_8021742C; } // 80217424
  goto L_8021743C; // 80217428
L_8021742C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021742C
  c->r[6]=c->r[6]+0x00000001u; // 80217430
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802173F0; } // 80217434
  c->r[6]=0u+0xFFFFFFFFu; // 80217438
L_8021743C:;
  c->r[9]=0u+0x80380000u; // 8021743C
  c->r[3]=0u+0x00000025u; // 80217440
  c->r[9]=c->r[9]+0xFFFFF4E8u; // 80217444
  c->r[5]=0u+0x00000000u; // 80217448
  c->ctr=c->r[3]; // 8021744C
L_80217450:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80217450
  cmps(c,0,(int32_t)c->r[3],5); // 80217454
  if (!crb(c,2)) { goto L_8021746C; } // 80217458
  c->r[3]=R32(c->r[9]+0x00000004u); // 8021745C
  cmps(c,0,(int32_t)c->r[3],20); // 80217460
  if (!crb(c,2)) { goto L_8021746C; } // 80217464
  goto L_8021749C; // 80217468
L_8021746C:;
  c->r[3]=R32(c->r[9]+0x00000008u); // 8021746C
  c->r[5]=c->r[5]+0x00000001u; // 80217470
  cmps(c,0,(int32_t)c->r[3],5); // 80217474
  if (!crb(c,2)) { goto L_8021748C; } // 80217478
  c->r[3]=R32(c->r[9]+0x0000000Cu); // 8021747C
  cmps(c,0,(int32_t)c->r[3],20); // 80217480
  if (!crb(c,2)) { goto L_8021748C; } // 80217484
  goto L_8021749C; // 80217488
L_8021748C:;
  c->r[9]=c->r[9]+0x00000010u; // 8021748C
  c->r[5]=c->r[5]+0x00000001u; // 80217490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217450; } // 80217494
  c->r[5]=0u+0xFFFFFFFFu; // 80217498
L_8021749C:;
  cmps(c,0,(int32_t)c->r[4],2); // 8021749C
  if (!crb(c,2)) { goto L_80217504; } // 802174A0
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802174A4
  c->r[3]=c->r[30]+c->r[3]; // 802174A8
  c->r[3]=R32(c->r[3]+0x00000290u); // 802174AC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802174B0
  cmps(c,0,(int32_t)c->r[3],1); // 802174B4
  if (crb(c,2)) { goto L_80217504; } // 802174B8
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802174BC
  c->r[3]=c->r[30]+c->r[3]; // 802174C0
  c->r[3]=R32(c->r[3]+0x00000290u); // 802174C4
  c->r[3]=R32(c->r[3]+0x00000014u); // 802174C8
  cmps(c,0,(int32_t)c->r[3],1); // 802174CC
  if (crb(c,2)) { goto L_80217504; } // 802174D0
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802174D4
  c->r[3]=c->r[30]+c->r[3]; // 802174D8
  c->r[3]=R32(c->r[3]+0x00000290u); // 802174DC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802174E0
  cmps(c,0,(int32_t)c->r[3],1); // 802174E4
  if (crb(c,2)) { goto L_80217504; } // 802174E8
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802174EC
  c->r[3]=c->r[30]+c->r[3]; // 802174F0
  c->r[3]=R32(c->r[3]+0x00000290u); // 802174F4
  c->r[3]=R32(c->r[3]+0x00000014u); // 802174F8
  cmps(c,0,(int32_t)c->r[3],1); // 802174FC
  if (!crb(c,2)) { goto L_80217508; } // 80217500
L_80217504:;
  c->r[0]=0u+0x00000000u; // 80217504
L_80217508:;
  cmps(c,0,(int32_t)c->r[0],0); // 80217508
  if (crb(c,2)) { goto L_8021753C; } // 8021750C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80217510
  c->r[3]=c->r[30]+c->r[0]; // 80217514
  c->r[29]=R32(c->r[3]+0x00000290u); // 80217518
  c->r[3]=c->r[29]|c->r[29]; // 8021751C
  c->lr=0x80217524u; f_8020D2A0(c); // 80217520
  c->r[0]=0u+0x00000001u; // 80217524
  W32(c->r[29]+0x00000014u,c->r[0]); // 80217528
  c->r[0]=0u+0x00000000u; // 8021752C
  W32(c->r[30]+0x00000078u,c->r[31]); // 80217530
  W32(c->r[30]+0x00000070u,c->r[0]); // 80217534
  goto L_80217B90; // 80217538
L_8021753C:;
  W32(c->r[30]+0x00000070u,c->r[31]); // 8021753C
  goto L_80217B90; // 80217540
L_80217544:;
  cmps(c,0,(int32_t)c->r[5],1); // 80217544
  if (!crb(c,2)) { goto L_80217B90; } // 80217548
  c->r[3]=0u+0x80380000u; // 8021754C
  c->r[0]=0u+0x00000025u; // 80217550
  c->r[3]=c->r[3]+0xFFFFF4E8u; // 80217554
  c->r[31]=0u+0x00000000u; // 80217558
  c->ctr=c->r[0]; // 8021755C
L_80217560:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80217560
  cmps(c,0,(int32_t)c->r[0],5); // 80217564
  if (!crb(c,2)) { goto L_8021757C; } // 80217568
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021756C
  cmps(c,0,(int32_t)c->r[0],20); // 80217570
  if (!crb(c,2)) { goto L_8021757C; } // 80217574
  goto L_802175AC; // 80217578
L_8021757C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8021757C
  c->r[31]=c->r[31]+0x00000001u; // 80217580
  cmps(c,0,(int32_t)c->r[0],5); // 80217584
  if (!crb(c,2)) { goto L_8021759C; } // 80217588
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8021758C
  cmps(c,0,(int32_t)c->r[0],20); // 80217590
  if (!crb(c,2)) { goto L_8021759C; } // 80217594
  goto L_802175AC; // 80217598
L_8021759C:;
  c->r[3]=c->r[3]+0x00000010u; // 8021759C
  c->r[31]=c->r[31]+0x00000001u; // 802175A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217560; } // 802175A4
  c->r[31]=0u+0xFFFFFFFFu; // 802175A8
L_802175AC:;
  c->r[5]=0u+0x80380000u; // 802175AC
  c->r[3]=0u+0x00000025u; // 802175B0
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 802175B4
  c->r[0]=0u+0x00000001u; // 802175B8
  c->r[8]=0u+0x00000000u; // 802175BC
  c->ctr=c->r[3]; // 802175C0
  c->r[0]=c->r[0]|0x00000000u; // 802175C4
L_802175C8:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802175C8
  cmps(c,0,(int32_t)c->r[3],4); // 802175CC
  if (!crb(c,2)) { goto L_802175E4; } // 802175D0
  c->r[3]=R32(c->r[5]+0x00000004u); // 802175D4
  cmps(c,0,(int32_t)c->r[3],2); // 802175D8
  if (!crb(c,2)) { goto L_802175E4; } // 802175DC
  goto L_80217614; // 802175E0
L_802175E4:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802175E4
  c->r[8]=c->r[8]+0x00000001u; // 802175E8
  cmps(c,0,(int32_t)c->r[3],4); // 802175EC
  if (!crb(c,2)) { goto L_80217604; } // 802175F0
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802175F4
  cmps(c,0,(int32_t)c->r[3],2); // 802175F8
  if (!crb(c,2)) { goto L_80217604; } // 802175FC
  goto L_80217614; // 80217600
L_80217604:;
  c->r[5]=c->r[5]+0x00000010u; // 80217604
  c->r[8]=c->r[8]+0x00000001u; // 80217608
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802175C8; } // 8021760C
  c->r[8]=0u+0xFFFFFFFFu; // 80217610
L_80217614:;
  c->r[5]=0u+0x80380000u; // 80217614
  c->r[3]=0u+0x00000025u; // 80217618
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 8021761C
  c->r[7]=0u+0x00000000u; // 80217620
  c->ctr=c->r[3]; // 80217624
L_80217628:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80217628
  cmps(c,0,(int32_t)c->r[3],5); // 8021762C
  if (!crb(c,2)) { goto L_80217644; } // 80217630
  c->r[3]=R32(c->r[5]+0x00000004u); // 80217634
  cmps(c,0,(int32_t)c->r[3],3); // 80217638
  if (!crb(c,2)) { goto L_80217644; } // 8021763C
  goto L_80217674; // 80217640
L_80217644:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 80217644
  c->r[7]=c->r[7]+0x00000001u; // 80217648
  cmps(c,0,(int32_t)c->r[3],5); // 8021764C
  if (!crb(c,2)) { goto L_80217664; } // 80217650
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 80217654
  cmps(c,0,(int32_t)c->r[3],3); // 80217658
  if (!crb(c,2)) { goto L_80217664; } // 8021765C
  goto L_80217674; // 80217660
L_80217664:;
  c->r[5]=c->r[5]+0x00000010u; // 80217664
  c->r[7]=c->r[7]+0x00000001u; // 80217668
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217628; } // 8021766C
  c->r[7]=0u+0xFFFFFFFFu; // 80217670
L_80217674:;
  c->r[5]=0u+0x80380000u; // 80217674
  c->r[3]=0u+0x00000025u; // 80217678
  c->r[5]=c->r[5]+0xFFFFF4E8u; // 8021767C
  c->r[6]=0u+0x00000000u; // 80217680
  c->ctr=c->r[3]; // 80217684
L_80217688:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80217688
  cmps(c,0,(int32_t)c->r[3],4); // 8021768C
  if (!crb(c,2)) { goto L_802176A4; } // 80217690
  c->r[3]=R32(c->r[5]+0x00000004u); // 80217694
  cmps(c,0,(int32_t)c->r[3],19); // 80217698
  if (!crb(c,2)) { goto L_802176A4; } // 8021769C
  goto L_802176D4; // 802176A0
L_802176A4:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 802176A4
  c->r[6]=c->r[6]+0x00000001u; // 802176A8
  cmps(c,0,(int32_t)c->r[3],4); // 802176AC
  if (!crb(c,2)) { goto L_802176C4; } // 802176B0
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 802176B4
  cmps(c,0,(int32_t)c->r[3],19); // 802176B8
  if (!crb(c,2)) { goto L_802176C4; } // 802176BC
  goto L_802176D4; // 802176C0
L_802176C4:;
  c->r[5]=c->r[5]+0x00000010u; // 802176C4
  c->r[6]=c->r[6]+0x00000001u; // 802176C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217688; } // 802176CC
  c->r[6]=0u+0xFFFFFFFFu; // 802176D0
L_802176D4:;
  c->r[9]=0u+0x80380000u; // 802176D4
  c->r[3]=0u+0x00000025u; // 802176D8
  c->r[9]=c->r[9]+0xFFFFF4E8u; // 802176DC
  c->r[5]=0u+0x00000000u; // 802176E0
  c->ctr=c->r[3]; // 802176E4
L_802176E8:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 802176E8
  cmps(c,0,(int32_t)c->r[3],5); // 802176EC
  if (!crb(c,2)) { goto L_80217704; } // 802176F0
  c->r[3]=R32(c->r[9]+0x00000004u); // 802176F4
  cmps(c,0,(int32_t)c->r[3],20); // 802176F8
  if (!crb(c,2)) { goto L_80217704; } // 802176FC
  goto L_80217734; // 80217700
L_80217704:;
  c->r[3]=R32(c->r[9]+0x00000008u); // 80217704
  c->r[5]=c->r[5]+0x00000001u; // 80217708
  cmps(c,0,(int32_t)c->r[3],5); // 8021770C
  if (!crb(c,2)) { goto L_80217724; } // 80217710
  c->r[3]=R32(c->r[9]+0x0000000Cu); // 80217714
  cmps(c,0,(int32_t)c->r[3],20); // 80217718
  if (!crb(c,2)) { goto L_80217724; } // 8021771C
  goto L_80217734; // 80217720
L_80217724:;
  c->r[9]=c->r[9]+0x00000010u; // 80217724
  c->r[5]=c->r[5]+0x00000001u; // 80217728
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802176E8; } // 8021772C
  c->r[5]=0u+0xFFFFFFFFu; // 80217730
L_80217734:;
  cmps(c,0,(int32_t)c->r[4],2); // 80217734
  if (!crb(c,2)) { goto L_8021779C; } // 80217738
  c->r[3]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8021773C
  c->r[3]=c->r[30]+c->r[3]; // 80217740
  c->r[3]=R32(c->r[3]+0x00000290u); // 80217744
  c->r[3]=R32(c->r[3]+0x00000014u); // 80217748
  cmps(c,0,(int32_t)c->r[3],1); // 8021774C
  if (crb(c,2)) { goto L_8021779C; } // 80217750
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80217754
  c->r[3]=c->r[30]+c->r[3]; // 80217758
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021775C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80217760
  cmps(c,0,(int32_t)c->r[3],1); // 80217764
  if (crb(c,2)) { goto L_8021779C; } // 80217768
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8021776C
  c->r[3]=c->r[30]+c->r[3]; // 80217770
  c->r[3]=R32(c->r[3]+0x00000290u); // 80217774
  c->r[3]=R32(c->r[3]+0x00000014u); // 80217778
  cmps(c,0,(int32_t)c->r[3],1); // 8021777C
  if (crb(c,2)) { goto L_8021779C; } // 80217780
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80217784
  c->r[3]=c->r[30]+c->r[3]; // 80217788
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021778C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80217790
  cmps(c,0,(int32_t)c->r[3],1); // 80217794
  if (!crb(c,2)) { goto L_802177A0; } // 80217798
L_8021779C:;
  c->r[0]=0u+0x00000000u; // 8021779C
L_802177A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802177A0
  if (crb(c,2)) { goto L_802177D4; } // 802177A4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802177A8
  c->r[3]=c->r[30]+c->r[0]; // 802177AC
  c->r[29]=R32(c->r[3]+0x00000290u); // 802177B0
  c->r[3]=c->r[29]|c->r[29]; // 802177B4
  c->lr=0x802177BCu; f_8020D2A0(c); // 802177B8
  c->r[0]=0u+0x00000001u; // 802177BC
  W32(c->r[29]+0x00000014u,c->r[0]); // 802177C0
  c->r[0]=0u+0x00000000u; // 802177C4
  W32(c->r[30]+0x00000078u,c->r[31]); // 802177C8
  W32(c->r[30]+0x00000070u,c->r[0]); // 802177CC
  goto L_80217B90; // 802177D0
L_802177D4:;
  W32(c->r[30]+0x00000070u,c->r[31]); // 802177D4
  goto L_80217B90; // 802177D8
L_802177DC:;
  cmps(c,0,(int32_t)c->r[5],1); // 802177DC
  if (!crb(c,2)) { goto L_80217B90; } // 802177E0
  c->r[4]=0u+0x80380000u; // 802177E4
  c->r[0]=0u+0x00000025u; // 802177E8
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 802177EC
  c->r[3]=0u+0x00000000u; // 802177F0
  c->ctr=c->r[0]; // 802177F4
L_802177F8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802177F8
  cmps(c,0,(int32_t)c->r[0],6); // 802177FC
  if (!crb(c,2)) { goto L_80217814; } // 80217800
  c->r[0]=R32(c->r[4]+0x00000004u); // 80217804
  cmps(c,0,(int32_t)c->r[0],7); // 80217808
  if (!crb(c,2)) { goto L_80217814; } // 8021780C
  goto L_80217844; // 80217810
L_80217814:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80217814
  c->r[3]=c->r[3]+0x00000001u; // 80217818
  cmps(c,0,(int32_t)c->r[0],6); // 8021781C
  if (!crb(c,2)) { goto L_80217834; } // 80217820
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80217824
  cmps(c,0,(int32_t)c->r[0],7); // 80217828
  if (!crb(c,2)) { goto L_80217834; } // 8021782C
  goto L_80217844; // 80217830
L_80217834:;
  c->r[4]=c->r[4]+0x00000010u; // 80217834
  c->r[3]=c->r[3]+0x00000001u; // 80217838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802177F8; } // 8021783C
  c->r[3]=0u+0xFFFFFFFFu; // 80217840
L_80217844:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217844
  c->r[3]=c->r[30]+c->r[0]; // 80217848
  c->r[29]=R32(c->r[3]+0x00000290u); // 8021784C
  c->r[3]=c->r[29]|c->r[29]; // 80217850
  c->lr=0x80217858u; f_8020D2A0(c); // 80217854
  c->r[0]=0u+0x00000001u; // 80217858
  W32(c->r[29]+0x00000014u,c->r[0]); // 8021785C
  goto L_80217B90; // 80217860
L_80217864:;
  cmps(c,0,(int32_t)c->r[5],1); // 80217864
  if (!crb(c,2)) { goto L_80217B90; } // 80217868
  c->r[4]=0u+0x80380000u; // 8021786C
  c->r[0]=0u+0x00000025u; // 80217870
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80217874
  c->r[3]=0u+0x00000000u; // 80217878
  c->ctr=c->r[0]; // 8021787C
L_80217880:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217880
  cmps(c,0,(int32_t)c->r[0],7); // 80217884
  if (!crb(c,2)) { goto L_8021789C; } // 80217888
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021788C
  cmps(c,0,(int32_t)c->r[0],7); // 80217890
  if (!crb(c,2)) { goto L_8021789C; } // 80217894
  goto L_802178CC; // 80217898
L_8021789C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021789C
  c->r[3]=c->r[3]+0x00000001u; // 802178A0
  cmps(c,0,(int32_t)c->r[0],7); // 802178A4
  if (!crb(c,2)) { goto L_802178BC; } // 802178A8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802178AC
  cmps(c,0,(int32_t)c->r[0],7); // 802178B0
  if (!crb(c,2)) { goto L_802178BC; } // 802178B4
  goto L_802178CC; // 802178B8
L_802178BC:;
  c->r[4]=c->r[4]+0x00000010u; // 802178BC
  c->r[3]=c->r[3]+0x00000001u; // 802178C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217880; } // 802178C4
  c->r[3]=0u+0xFFFFFFFFu; // 802178C8
L_802178CC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802178CC
  c->r[3]=c->r[30]+c->r[0]; // 802178D0
  c->r[29]=R32(c->r[3]+0x00000290u); // 802178D4
  c->r[3]=c->r[29]|c->r[29]; // 802178D8
  c->lr=0x802178E0u; f_8020D2A0(c); // 802178DC
  c->r[0]=0u+0x00000001u; // 802178E0
  W32(c->r[29]+0x00000014u,c->r[0]); // 802178E4
  goto L_80217B90; // 802178E8
L_802178EC:;
  cmps(c,0,(int32_t)c->r[5],1); // 802178EC
  if (!crb(c,2)) { goto L_80217B90; } // 802178F0
  c->r[4]=0u+0x80380000u; // 802178F4
  c->r[0]=0u+0x00000025u; // 802178F8
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 802178FC
  c->r[3]=0u+0x00000000u; // 80217900
  c->ctr=c->r[0]; // 80217904
L_80217908:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217908
  cmps(c,0,(int32_t)c->r[0],8); // 8021790C
  if (!crb(c,2)) { goto L_80217924; } // 80217910
  c->r[0]=R32(c->r[4]+0x00000004u); // 80217914
  cmps(c,0,(int32_t)c->r[0],7); // 80217918
  if (!crb(c,2)) { goto L_80217924; } // 8021791C
  goto L_80217954; // 80217920
L_80217924:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80217924
  c->r[3]=c->r[3]+0x00000001u; // 80217928
  cmps(c,0,(int32_t)c->r[0],8); // 8021792C
  if (!crb(c,2)) { goto L_80217944; } // 80217930
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80217934
  cmps(c,0,(int32_t)c->r[0],7); // 80217938
  if (!crb(c,2)) { goto L_80217944; } // 8021793C
  goto L_80217954; // 80217940
L_80217944:;
  c->r[4]=c->r[4]+0x00000010u; // 80217944
  c->r[3]=c->r[3]+0x00000001u; // 80217948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217908; } // 8021794C
  c->r[3]=0u+0xFFFFFFFFu; // 80217950
L_80217954:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217954
  c->r[3]=c->r[30]+c->r[0]; // 80217958
  c->r[29]=R32(c->r[3]+0x00000290u); // 8021795C
  c->r[3]=c->r[29]|c->r[29]; // 80217960
  c->lr=0x80217968u; f_8020D2A0(c); // 80217964
  c->r[0]=0u+0x00000001u; // 80217968
  W32(c->r[29]+0x00000014u,c->r[0]); // 8021796C
  goto L_80217B90; // 80217970
L_80217974:;
  cmps(c,0,(int32_t)c->r[5],1); // 80217974
  if (!crb(c,2)) { goto L_80217B90; } // 80217978
  c->r[4]=0u+0x80380000u; // 8021797C
  c->r[0]=0u+0x00000025u; // 80217980
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80217984
  c->r[3]=0u+0x00000000u; // 80217988
  c->ctr=c->r[0]; // 8021798C
L_80217990:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217990
  cmps(c,0,(int32_t)c->r[0],9); // 80217994
  if (!crb(c,2)) { goto L_802179AC; } // 80217998
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021799C
  cmps(c,0,(int32_t)c->r[0],7); // 802179A0
  if (!crb(c,2)) { goto L_802179AC; } // 802179A4
  goto L_802179DC; // 802179A8
L_802179AC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802179AC
  c->r[3]=c->r[3]+0x00000001u; // 802179B0
  cmps(c,0,(int32_t)c->r[0],9); // 802179B4
  if (!crb(c,2)) { goto L_802179CC; } // 802179B8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802179BC
  cmps(c,0,(int32_t)c->r[0],7); // 802179C0
  if (!crb(c,2)) { goto L_802179CC; } // 802179C4
  goto L_802179DC; // 802179C8
L_802179CC:;
  c->r[4]=c->r[4]+0x00000010u; // 802179CC
  c->r[3]=c->r[3]+0x00000001u; // 802179D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217990; } // 802179D4
  c->r[3]=0u+0xFFFFFFFFu; // 802179D8
L_802179DC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802179DC
  c->r[3]=c->r[30]+c->r[0]; // 802179E0
  c->r[29]=R32(c->r[3]+0x00000290u); // 802179E4
  c->r[3]=c->r[29]|c->r[29]; // 802179E8
  c->lr=0x802179F0u; f_8020D2A0(c); // 802179EC
  c->r[0]=0u+0x00000001u; // 802179F0
  W32(c->r[29]+0x00000014u,c->r[0]); // 802179F4
  goto L_80217B90; // 802179F8
L_802179FC:;
  cmps(c,0,(int32_t)c->r[5],1); // 802179FC
  if (!crb(c,2)) { goto L_80217B90; } // 80217A00
  c->r[4]=0u+0x80380000u; // 80217A04
  c->r[0]=0u+0x00000025u; // 80217A08
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80217A0C
  c->r[3]=0u+0x00000000u; // 80217A10
  c->ctr=c->r[0]; // 80217A14
L_80217A18:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217A18
  cmps(c,0,(int32_t)c->r[0],10); // 80217A1C
  if (!crb(c,2)) { goto L_80217A34; } // 80217A20
  c->r[0]=R32(c->r[4]+0x00000004u); // 80217A24
  cmps(c,0,(int32_t)c->r[0],7); // 80217A28
  if (!crb(c,2)) { goto L_80217A34; } // 80217A2C
  goto L_80217A64; // 80217A30
L_80217A34:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80217A34
  c->r[3]=c->r[3]+0x00000001u; // 80217A38
  cmps(c,0,(int32_t)c->r[0],10); // 80217A3C
  if (!crb(c,2)) { goto L_80217A54; } // 80217A40
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80217A44
  cmps(c,0,(int32_t)c->r[0],7); // 80217A48
  if (!crb(c,2)) { goto L_80217A54; } // 80217A4C
  goto L_80217A64; // 80217A50
L_80217A54:;
  c->r[4]=c->r[4]+0x00000010u; // 80217A54
  c->r[3]=c->r[3]+0x00000001u; // 80217A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217A18; } // 80217A5C
  c->r[3]=0u+0xFFFFFFFFu; // 80217A60
L_80217A64:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217A64
  c->r[3]=c->r[30]+c->r[0]; // 80217A68
  c->r[29]=R32(c->r[3]+0x00000290u); // 80217A6C
  c->r[3]=c->r[29]|c->r[29]; // 80217A70
  c->lr=0x80217A78u; f_8020D2A0(c); // 80217A74
  c->r[0]=0u+0x00000001u; // 80217A78
  W32(c->r[29]+0x00000014u,c->r[0]); // 80217A7C
  goto L_80217B90; // 80217A80
L_80217A84:;
  cmps(c,0,(int32_t)c->r[5],2); // 80217A84
  if (!crb(c,2)) { goto L_80217B90; } // 80217A88
  c->r[4]=0u+0x80380000u; // 80217A8C
  c->r[0]=0u+0x00000025u; // 80217A90
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80217A94
  c->r[3]=0u+0x00000000u; // 80217A98
  c->ctr=c->r[0]; // 80217A9C
L_80217AA0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217AA0
  cmps(c,0,(int32_t)c->r[0],17); // 80217AA4
  if (!crb(c,2)) { goto L_80217ABC; } // 80217AA8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80217AAC
  cmps(c,0,(int32_t)c->r[0],12); // 80217AB0
  if (!crb(c,2)) { goto L_80217ABC; } // 80217AB4
  goto L_80217AEC; // 80217AB8
L_80217ABC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80217ABC
  c->r[3]=c->r[3]+0x00000001u; // 80217AC0
  cmps(c,0,(int32_t)c->r[0],17); // 80217AC4
  if (!crb(c,2)) { goto L_80217ADC; } // 80217AC8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80217ACC
  cmps(c,0,(int32_t)c->r[0],12); // 80217AD0
  if (!crb(c,2)) { goto L_80217ADC; } // 80217AD4
  goto L_80217AEC; // 80217AD8
L_80217ADC:;
  c->r[4]=c->r[4]+0x00000010u; // 80217ADC
  c->r[3]=c->r[3]+0x00000001u; // 80217AE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217AA0; } // 80217AE4
  c->r[3]=0u+0xFFFFFFFFu; // 80217AE8
L_80217AEC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217AEC
  c->r[3]=c->r[30]+c->r[0]; // 80217AF0
  c->r[29]=R32(c->r[3]+0x00000290u); // 80217AF4
  c->r[3]=c->r[29]|c->r[29]; // 80217AF8
  c->lr=0x80217B00u; f_8020D2A0(c); // 80217AFC
  c->r[0]=0u+0x00000001u; // 80217B00
  W32(c->r[29]+0x00000014u,c->r[0]); // 80217B04
  goto L_80217B90; // 80217B08
L_80217B0C:;
  cmps(c,0,(int32_t)c->r[5],2); // 80217B0C
  if (!crb(c,2)) { goto L_80217B90; } // 80217B10
  c->r[4]=0u+0x80380000u; // 80217B14
  c->r[0]=0u+0x00000025u; // 80217B18
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80217B1C
  c->r[3]=0u+0x00000000u; // 80217B20
  c->ctr=c->r[0]; // 80217B24
L_80217B28:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80217B28
  cmps(c,0,(int32_t)c->r[0],18); // 80217B2C
  if (!crb(c,2)) { goto L_80217B44; } // 80217B30
  c->r[0]=R32(c->r[4]+0x00000004u); // 80217B34
  cmps(c,0,(int32_t)c->r[0],12); // 80217B38
  if (!crb(c,2)) { goto L_80217B44; } // 80217B3C
  goto L_80217B74; // 80217B40
L_80217B44:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80217B44
  c->r[3]=c->r[3]+0x00000001u; // 80217B48
  cmps(c,0,(int32_t)c->r[0],18); // 80217B4C
  if (!crb(c,2)) { goto L_80217B64; } // 80217B50
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80217B54
  cmps(c,0,(int32_t)c->r[0],12); // 80217B58
  if (!crb(c,2)) { goto L_80217B64; } // 80217B5C
  goto L_80217B74; // 80217B60
L_80217B64:;
  c->r[4]=c->r[4]+0x00000010u; // 80217B64
  c->r[3]=c->r[3]+0x00000001u; // 80217B68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217B28; } // 80217B6C
  c->r[3]=0u+0xFFFFFFFFu; // 80217B70
L_80217B74:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217B74
  c->r[3]=c->r[30]+c->r[0]; // 80217B78
  c->r[29]=R32(c->r[3]+0x00000290u); // 80217B7C
  c->r[3]=c->r[29]|c->r[29]; // 80217B80
  c->lr=0x80217B88u; f_8020D2A0(c); // 80217B84
  c->r[0]=0u+0x00000001u; // 80217B88
  W32(c->r[29]+0x00000014u,c->r[0]); // 80217B8C
L_80217B90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80217B90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80217B94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80217B98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80217B9C
  c->lr=c->r[0]; // 80217BA0
  c->r[1]=c->r[1]+0x00000020u; // 80217BA4
  return; // 80217BA8
}

// fn_80217BB0
void f_80217BB0(Ctx* __restrict c) {
  trace_call(0x80217BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217BB0
  c->r[0]=c->lr; // 80217BB4
  W32(c->r[1]+0x00000064u,c->r[0]); // 80217BB8
  c->r[11]=c->r[1]+0x00000040u; // 80217BBC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80217BC0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80217BC4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80217BC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80217BCC
  c->lr=0x80217BD4u; f_800C2E48(c); // 80217BD0
  c->r[0]=0u+0x43300000u; // 80217BD4
  c->r[29]=0u+0x80380000u; // 80217BD8
  c->r[30]=0u+0x803A0000u; // 80217BDC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80217BE0
  c->r[28]=c->r[3]|c->r[3]; // 80217BE4
  c->r[29]=c->r[29]+0xFFFFF480u; // 80217BE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80217BEC
  c->r[30]=c->r[30]+0x000068E8u; // 80217BF0
  c->lr=0x80217BF8u; f_802190A0(c); // 80217BF4
  c->r[0]=R32(c->r[28]+0x00000014u); // 80217BF8
  c->r[31]=c->r[3]|c->r[3]; // 80217BFC
  cmps(c,0,(int32_t)c->r[0],2); // 80217C00
  if (!crb(c,2)) { goto L_80218E08; } // 80217C04
  cmps(c,0,(int32_t)c->r[3],-1); // 80217C08
  if (crb(c,2)) { goto L_80218E08; } // 80217C0C
  c->r[4]=R32(c->r[28]+0x00000000u); // 80217C10
  cmps(c,0,(int32_t)c->r[4],0); // 80217C14
  if (!crb(c,2)) { goto L_80217E78; } // 80217C18
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80217C1C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80217C20
  if (!crb(c,0)) { goto L_80217E78; } // 80217C24
  c->r[6]=R32(c->r[28]+0x00000010u); // 80217C28
  c->r[0]=c->r[3]+0x00000001u; // 80217C2C
  W32(c->r[28]+0x000000B8u,c->r[0]); // 80217C30
  c->r[5]=c->r[29]+0x00000008u; // 80217C34
  c->r[3]=c->r[3]+0x00000004u; // 80217C38
  c->r[4]=0u+0x00000000u; // 80217C3C
  c->ctr=c->r[6]; // 80217C40
  cmps(c,0,(int32_t)c->r[6],0); // 80217C44
  if (!crb(c,1)) { goto L_80217C78; } // 80217C48
  c->r[0]=c->r[0]|0x00000000u; // 80217C4C
L_80217C50:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80217C50
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80217C54
  if (!crb(c,2)) { goto L_80217C6C; } // 80217C58
  c->r[0]=R32(c->r[5]+0x00000004u); // 80217C5C
  cmps(c,0,(int32_t)c->r[0],1); // 80217C60
  if (!crb(c,2)) { goto L_80217C6C; } // 80217C64
  goto L_80217C7C; // 80217C68
L_80217C6C:;
  c->r[5]=c->r[5]+0x00000008u; // 80217C6C
  c->r[4]=c->r[4]+0x00000001u; // 80217C70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80217C50; } // 80217C74
L_80217C78:;
  c->r[4]=0u+0xFFFFFFFFu; // 80217C78
L_80217C7C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80217C7C
  W32(c->r[28]+0x00000018u,c->r[4]); // 80217C80
  c->r[3]=c->r[28]+c->r[0]; // 80217C84
  c->r[29]=R32(c->r[3]+0x00000260u); // 80217C88
  c->r[3]=c->r[29]|c->r[29]; // 80217C8C
  c->lr=0x80217C94u; f_8020D2A0(c); // 80217C90
  c->r[0]=0u+0x00000001u; // 80217C94
  W32(c->r[29]+0x00000014u,c->r[0]); // 80217C98
  c->r[3]=0u+0x00000000u; // 80217C9C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80217CA0
  c->r[12]=R32(c->r[4]+0x00000014u); // 80217CA4
  cmps(c,0,(int32_t)c->r[12],0); // 80217CA8
  if (crb(c,2)) { goto L_80217CC0; } // 80217CAC
  c->r[3]=0u+0x00000005u; // 80217CB0
  c->r[4]=0u+0x00000005u; // 80217CB4
  c->ctr=c->r[12]; // 80217CB8
  if (true) { c->lr=0x80217CC0u; dispatch(c,c->ctr); } // 80217CBC
L_80217CC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80217CC0
  if (!crb(c,2)) { goto L_80217CD0; } // 80217CC4
  c->r[3]=0u+0x00000005u; // 80217CC8
  c->lr=0x80217CD0u; f_80210650(c); // 80217CCC
L_80217CD0:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80217CD0
  c->r[3]=c->r[28]+c->r[0]; // 80217CD4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80217CD8
  cmps(c,0,(int32_t)c->r[0],0); // 80217CDC
  if (crb(c,2)) { goto L_80217E6C; } // 80217CE0
  c->r[3]=0u+0x0000000Bu; // 80217CE4
  c->r[0]=0u+0x00000002u; // 80217CE8
  W32(c->r[28]+0x00000014u,c->r[3]); // 80217CEC
  c->r[4]=c->r[30]+0x000009E4u; // 80217CF0
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80217CF4
  c->r[5]=0u+0x00000001u; // 80217CF8
  W32(c->r[28]+0x00000000u,c->r[0]); // 80217CFC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80217D00
  c->r[4]=R32(c->r[4]+0x00000008u); // 80217D04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80217D08
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80217D0C
  c->ctr=c->r[12]; // 80217D10
  if (true) { c->lr=0x80217D18u; dispatch(c,c->ctr); } // 80217D14
  c->r[12]=R32(c->r[3]+0x00000000u); // 80217D18
  c->r[27]=0u+0x80490000u; // 80217D1C
  c->r[29]=c->r[3]|c->r[3]; // 80217D20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80217D24
  c->r[27]=c->r[27]+0x00001A38u; // 80217D28
  c->ctr=c->r[12]; // 80217D2C
  if (true) { c->lr=0x80217D34u; dispatch(c,c->ctr); } // 80217D30
  goto L_80217D4C; // 80217D34
L_80217D38:;
  cmpu(c,0,c->r[3],c->r[27]); // 80217D38
  if (!crb(c,2)) { goto L_80217D48; } // 80217D3C
  c->r[0]=0u+0x00000001u; // 80217D40
  goto L_80217D58; // 80217D44
L_80217D48:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217D48
L_80217D4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80217D4C
  if (!crb(c,2)) { IRQCHK(c); goto L_80217D38; } // 80217D50
  c->r[0]=0u+0x00000000u; // 80217D54
L_80217D58:;
  cmps(c,0,(int32_t)c->r[0],0); // 80217D58
  if (crb(c,2)) { goto L_80217D64; } // 80217D5C
  goto L_80217D68; // 80217D60
L_80217D64:;
  c->r[29]=0u+0x00000000u; // 80217D64
L_80217D68:;
  c->r[5]=R32(c->r[28]+0x00000004u); // 80217D68
  c->r[0]=c->r[31]+0x00000001u; // 80217D6C
  c->r[3]=R32(c->r[5]+0x00000024u); // 80217D70
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80217D74
  if (crb(c,2)) { goto L_80217DC0; } // 80217D78
  c->r[3]=R32(c->r[5]+0x0000001Cu); // 80217D7C
  c->r[0]=c->r[31]+0x00000002u; // 80217D80
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217D84
  c->r[6]=0u+0x00000000u; // 80217D88
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 80217D8C
  c->r[0]=c->r[28]+c->r[0]; // 80217D90
  c->r[3]=c->r[0]+c->r[7]; // 80217D94
  c->r[3]=R32(c->r[3]+0x000000BCu); // 80217D98
  c->r[0]=c->r[0]|0x00000000u; // 80217D9C
L_80217DA0:;
  c->r[0]=rotl(c->r[6],1)&0x0001FFFEu; // 80217DA0
  c->r[0]=R16(c->r[3]+c->r[0]); // 80217DA4
  cmpu(c,0,c->r[0],0x0000FF1Fu); // 80217DA8
  if (crb(c,2)) { goto L_80217DFC; } // 80217DAC
  cmpu(c,0,c->r[0],0x0000003Fu); // 80217DB0
  if (crb(c,2)) { goto L_80217DFC; } // 80217DB4
  c->r[6]=c->r[6]+0x00000001u; // 80217DB8
  IRQCHK(c); goto L_80217DA0; // 80217DBC
L_80217DC0:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80217DC0
  c->r[3]=c->r[31]+0x00000002u; // 80217DC4
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80217DC8
  c->r[6]=0u+0x00000000u; // 80217DCC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80217DD0
  c->r[0]=c->r[7]+c->r[28]; // 80217DD4
  c->r[3]=c->r[3]+c->r[0]; // 80217DD8
  c->r[4]=R32(c->r[3]+0x000000BCu); // 80217DDC
L_80217DE0:;
  c->r[0]=rotl(c->r[6],1)&0x0001FFFEu; // 80217DE0
  c->r[3]=c->r[4]+c->r[0]; // 80217DE4
  c->r[0]=R16(c->r[3]+0x00000002u); // 80217DE8
  cmpu(c,0,c->r[0],0x00000022u); // 80217DEC
  if (crb(c,2)) { goto L_80217DFC; } // 80217DF0
  c->r[6]=c->r[6]+0x00000001u; // 80217DF4
  IRQCHK(c); goto L_80217DE0; // 80217DF8
L_80217DFC:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80217DFC
  c->r[4]=rotl(c->r[6],0)&0x0000FFFFu; // 80217E00
  c->r[12]=R32(c->r[29]+0x00000000u); // 80217E04
  c->r[3]=c->r[29]|c->r[29]; // 80217E08
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80217E0C
  c->r[0]=c->r[4]+0x00000001u; // 80217E10
  c->r[12]=R32(c->r[12]+0x00000070u); // 80217E14
  c->r[5]=0u+0x00000000u; // 80217E18
  c->r[4]=c->r[28]+c->r[6]; // 80217E1C
  c->r[4]=c->r[4]+c->r[7]; // 80217E20
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80217E24
  c->r[4]=R32(c->r[4]+0x000000BCu); // 80217E28
  c->ctr=c->r[12]; // 80217E2C
  if (true) { c->lr=0x80217E34u; dispatch(c,c->ctr); } // 80217E30
  c->r[6]=R32(c->r[28]+0x000001D8u); // 80217E34
  c->r[3]=c->r[30]+0x000009E4u; // 80217E38
  c->r[4]=R32(c->r[3]+0x00000008u); // 80217E3C
  c->r[5]=0u+0x00000001u; // 80217E40
  c->r[3]=R32(c->r[6]+0x00000010u); // 80217E44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80217E48
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80217E4C
  c->ctr=c->r[12]; // 80217E50
  if (true) { c->lr=0x80217E58u; dispatch(c,c->ctr); } // 80217E54
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80217E58
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80217E5C
  c->r[0]=c->r[0]|0x00000001u; // 80217E60
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80217E64
  goto L_80218E08; // 80217E68
L_80217E6C:;
  c->r[0]=0u+0x0000000Fu; // 80217E6C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80217E70
  goto L_80218E08; // 80217E74
L_80217E78:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80217E78
  c->r[0]=c->r[3]-c->r[0]; // 80217E7C
  cmpu(c,0,c->r[0],0x00000009u); // 80217E80
  if (crb(c,1)) { goto L_80218E08; } // 80217E84
  c->r[3]=0u+0x803A0000u; // 80217E88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217E8C
  c->r[3]=c->r[3]+0x0000750Cu; // 80217E90
  c->r[3]=R32(c->r[3]+c->r[0]); // 80217E94
  c->ctr=c->r[3]; // 80217E98
  if (true) { switch (c->ctr) { case 0x80217EA0u: goto L_80217EA0; case 0x80217F34u: goto L_80217F34; case 0x802180B8u: goto L_802180B8; case 0x80218384u: goto L_80218384; case 0x80218654u: goto L_80218654; case 0x80218888u: goto L_80218888; case 0x80218A14u: goto L_80218A14; case 0x80218BD4u: goto L_80218BD4; case 0x80218D40u: goto L_80218D40; default: break; } dispatch(c,c->ctr); return; } // 80217E9C
L_80217EA0:;
  c->r[3]=R32(c->r[28]+0x000003E8u); // 80217EA0
  c->r[0]=R32(c->r[3]+0x00000014u); // 80217EA4
  cmps(c,0,(int32_t)c->r[0],1); // 80217EA8
  if (!crb(c,2)) { goto L_80217EB8; } // 80217EAC
  c->r[0]=0u+0x00000000u; // 80217EB0
  W32(c->r[3]+0x00000014u,c->r[0]); // 80217EB4
L_80217EB8:;
  c->r[3]=R32(c->r[28]+0x000003C4u); // 80217EB8
  c->r[0]=R32(c->r[3]+0x00000014u); // 80217EBC
  cmps(c,0,(int32_t)c->r[0],1); // 80217EC0
  if (!crb(c,2)) { goto L_80217ED0; } // 80217EC4
  c->r[0]=0u+0x00000000u; // 80217EC8
  W32(c->r[3]+0x00000014u,c->r[0]); // 80217ECC
L_80217ED0:;
  c->r[3]=0u+0x00000000u; // 80217ED0
  c->r[0]=0u+0x00000004u; // 80217ED4
  W32(c->r[28]+0x000000B8u,c->r[3]); // 80217ED8
  W32(c->r[28]+0x00000018u,c->r[0]); // 80217EDC
  c->r[27]=R32(c->r[28]+0x000003C8u); // 80217EE0
  c->r[3]=c->r[27]|c->r[27]; // 80217EE4
  c->lr=0x80217EECu; f_8020D2A0(c); // 80217EE8
  c->r[0]=0u+0x00000001u; // 80217EEC
  W32(c->r[27]+0x00000014u,c->r[0]); // 80217EF0
  c->r[0]=0u+0x0000000Eu; // 80217EF4
  c->r[3]=0u+0x00000000u; // 80217EF8
  W32(c->r[28]+0x00000014u,c->r[0]); // 80217EFC
  c->r[4]=R32(c->r[28]+0x00000004u); // 80217F00
  c->r[12]=R32(c->r[4]+0x00000014u); // 80217F04
  cmps(c,0,(int32_t)c->r[12],0); // 80217F08
  if (crb(c,2)) { goto L_80217F20; } // 80217F0C
  c->r[3]=0u+0x00000005u; // 80217F10
  c->r[4]=0u+0x00000001u; // 80217F14
  c->ctr=c->r[12]; // 80217F18
  if (true) { c->lr=0x80217F20u; dispatch(c,c->ctr); } // 80217F1C
L_80217F20:;
  cmps(c,0,(int32_t)c->r[3],0); // 80217F20
  if (!crb(c,2)) { goto L_80218E08; } // 80217F24
  c->r[3]=0u+0x00000001u; // 80217F28
  c->lr=0x80217F30u; f_80210650(c); // 80217F2C
  goto L_80218E08; // 80217F30
L_80217F34:;
  cmps(c,0,(int32_t)c->r[4],1); // 80217F34
  if (!crb(c,2)) { goto L_80217FF0; } // 80217F38
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80217F3C
  c->r[4]=c->r[30]+0x00000B74u; // 80217F40
  c->r[5]=0u+0x00000001u; // 80217F44
  c->r[3]=R32(c->r[3]+0x00000010u); // 80217F48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80217F4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80217F50
  c->ctr=c->r[12]; // 80217F54
  if (true) { c->lr=0x80217F5Cu; dispatch(c,c->ctr); } // 80217F58
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80217F5C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80217F60
  c->r[0]=c->r[0]|0x00000001u; // 80217F64
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80217F68
  c->r[27]=R32(c->r[28]+0x000003C8u); // 80217F6C
  c->r[3]=c->r[27]|c->r[27]; // 80217F70
  c->lr=0x80217F78u; f_8020D2A0(c); // 80217F74
  c->r[29]=0u+0x00000001u; // 80217F78
  W32(c->r[27]+0x00000014u,c->r[29]); // 80217F7C
  c->r[27]=R32(c->r[28]+0x000003E4u); // 80217F80
  c->r[3]=c->r[27]|c->r[27]; // 80217F84
  c->lr=0x80217F8Cu; f_8020D2A0(c); // 80217F88
  W32(c->r[27]+0x00000014u,c->r[29]); // 80217F8C
  c->r[0]=0u+0x00000002u; // 80217F90
  W32(c->r[28]+0x00000018u,c->r[0]); // 80217F94
  c->r[27]=R32(c->r[28]+0x000003C0u); // 80217F98
  c->r[3]=c->r[27]|c->r[27]; // 80217F9C
  c->lr=0x80217FA4u; f_8020D2A0(c); // 80217FA0
  W32(c->r[27]+0x00000014u,c->r[29]); // 80217FA4
  c->r[3]=0u+0x0000000Au; // 80217FA8
  c->r[0]=0u+0x00000000u; // 80217FAC
  W32(c->r[28]+0x00000014u,c->r[3]); // 80217FB0
  c->r[3]=0u+0x00000000u; // 80217FB4
  c->r[4]=R32(c->r[28]+0x00000004u); // 80217FB8
  W32(c->r[28]+0x00000000u,c->r[0]); // 80217FBC
  c->r[12]=R32(c->r[4]+0x00000014u); // 80217FC0
  cmps(c,0,(int32_t)c->r[12],0); // 80217FC4
  if (crb(c,2)) { goto L_80217FDC; } // 80217FC8
  c->r[3]=0u+0x00000005u; // 80217FCC
  c->r[4]=0u+0x00000008u; // 80217FD0
  c->ctr=c->r[12]; // 80217FD4
  if (true) { c->lr=0x80217FDCu; dispatch(c,c->ctr); } // 80217FD8
L_80217FDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80217FDC
  if (!crb(c,2)) { goto L_80218E08; } // 80217FE0
  c->r[3]=0u+0x00000008u; // 80217FE4
  c->lr=0x80217FECu; f_80210650(c); // 80217FE8
  goto L_80218E08; // 80217FEC
L_80217FF0:;
  cmps(c,0,(int32_t)c->r[4],0); // 80217FF0
  if (!crb(c,2)) { goto L_80218E08; } // 80217FF4
  c->r[27]=R32(c->r[28]+0x000003BCu); // 80217FF8
  c->r[3]=c->r[27]|c->r[27]; // 80217FFC
  c->lr=0x80218004u; f_8020D2A0(c); // 80218000
  c->r[29]=0u+0x00000001u; // 80218004
  W32(c->r[27]+0x00000014u,c->r[29]); // 80218008
  c->r[0]=0u+0x00000009u; // 8021800C
  W32(c->r[28]+0x00000018u,c->r[0]); // 80218010
  c->r[27]=R32(c->r[28]+0x000003DCu); // 80218014
  c->r[3]=c->r[27]|c->r[27]; // 80218018
  c->lr=0x80218020u; f_8020D2A0(c); // 8021801C
  W32(c->r[27]+0x00000014u,c->r[29]); // 80218020
  c->r[3]=c->r[30]+0x00000998u; // 80218024
  c->r[0]=0u+0x0000000Au; // 80218028
  c->r[29]=0u+0x00000002u; // 8021802C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80218030
  c->r[27]=c->r[3]+0x00000008u; // 80218034
L_80218038:;
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80218038
  c->r[5]=0u+0x00000001u; // 8021803C
  c->r[4]=R32(c->r[27]+0x00000000u); // 80218040
  c->r[3]=R32(c->r[3]+0x00000010u); // 80218044
  c->r[12]=R32(c->r[3]+0x00000000u); // 80218048
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021804C
  c->ctr=c->r[12]; // 80218050
  if (true) { c->lr=0x80218058u; dispatch(c,c->ctr); } // 80218054
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80218058
  c->r[29]=c->r[29]+0x00000001u; // 8021805C
  cmps(c,0,(int32_t)c->r[29],7); // 80218060
  c->r[27]=c->r[27]+0x00000004u; // 80218064
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80218068
  c->r[0]=c->r[0]|0x00000001u; // 8021806C
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80218070
  if (crb(c,0)) { IRQCHK(c); goto L_80218038; } // 80218074
  c->r[0]=0u+0x00000001u; // 80218078
  W32(c->r[28]+0x00000000u,c->r[0]); // 8021807C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218080
  c->r[3]=0u+0x00000000u; // 80218084
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218088
  cmps(c,0,(int32_t)c->r[12],0); // 8021808C
  if (crb(c,2)) { goto L_802180A4; } // 80218090
  c->r[3]=0u+0x00000005u; // 80218094
  c->r[4]=0u+0x00000005u; // 80218098
  c->ctr=c->r[12]; // 8021809C
  if (true) { c->lr=0x802180A4u; dispatch(c,c->ctr); } // 802180A0
L_802180A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802180A4
  if (!crb(c,2)) { goto L_80218E08; } // 802180A8
  c->r[3]=0u+0x00000005u; // 802180AC
  c->lr=0x802180B4u; f_80210650(c); // 802180B0
  goto L_80218E08; // 802180B4
L_802180B8:;
  c->r[3]=R32(c->r[28]+0x00000084u); // 802180B8
  cmps(c,0,(int32_t)c->r[3],0); // 802180BC
  if (!crb(c,1)) { goto L_8021834C; } // 802180C0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802180C4
  c->r[0]=0u+0x00000025u; // 802180C8
  W32(c->r[28]+0x00000084u,c->r[3]); // 802180CC
  c->r[3]=c->r[3]+0x00000015u; // 802180D0
  c->r[5]=c->r[29]+0x00000068u; // 802180D4
  c->r[4]=0u+0x00000000u; // 802180D8
  c->ctr=c->r[0]; // 802180DC
L_802180E0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802180E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802180E4
  if (!crb(c,2)) { goto L_802180FC; } // 802180E8
  c->r[0]=R32(c->r[5]+0x00000004u); // 802180EC
  cmps(c,0,(int32_t)c->r[0],10); // 802180F0
  if (!crb(c,2)) { goto L_802180FC; } // 802180F4
  goto L_8021812C; // 802180F8
L_802180FC:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802180FC
  c->r[4]=c->r[4]+0x00000001u; // 80218100
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80218104
  if (!crb(c,2)) { goto L_8021811C; } // 80218108
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8021810C
  cmps(c,0,(int32_t)c->r[0],10); // 80218110
  if (!crb(c,2)) { goto L_8021811C; } // 80218114
  goto L_8021812C; // 80218118
L_8021811C:;
  c->r[5]=c->r[5]+0x00000010u; // 8021811C
  c->r[4]=c->r[4]+0x00000001u; // 80218120
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802180E0; } // 80218124
  c->r[4]=0u+0xFFFFFFFFu; // 80218128
L_8021812C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021812C
  c->r[4]=0u+0x00000000u; // 80218130
  c->r[3]=c->r[28]+c->r[0]; // 80218134
  c->r[6]=c->r[29]+0x00000068u; // 80218138
  c->r[3]=R32(c->r[3]+0x00000290u); // 8021813C
  c->r[0]=0u+0x00000025u; // 80218140
  c->r[5]=0u+0x00000000u; // 80218144
  W32(c->r[3]+0x00000014u,c->r[4]); // 80218148
  c->r[3]=R32(c->r[28]+0x00000084u); // 8021814C
  c->r[3]=c->r[3]+0x00000015u; // 80218150
  c->ctr=c->r[0]; // 80218154
L_80218158:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80218158
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021815C
  if (!crb(c,2)) { goto L_80218174; } // 80218160
  c->r[0]=R32(c->r[6]+0x00000004u); // 80218164
  cmps(c,0,(int32_t)c->r[0],9); // 80218168
  if (!crb(c,2)) { goto L_80218174; } // 8021816C
  goto L_802181A4; // 80218170
L_80218174:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80218174
  c->r[5]=c->r[5]+0x00000001u; // 80218178
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8021817C
  if (!crb(c,2)) { goto L_80218194; } // 80218180
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80218184
  cmps(c,0,(int32_t)c->r[0],9); // 80218188
  if (!crb(c,2)) { goto L_80218194; } // 8021818C
  goto L_802181A4; // 80218190
L_80218194:;
  c->r[6]=c->r[6]+0x00000010u; // 80218194
  c->r[5]=c->r[5]+0x00000001u; // 80218198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218158; } // 8021819C
  c->r[5]=0u+0xFFFFFFFFu; // 802181A0
L_802181A4:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802181A4
  c->r[3]=c->r[28]+c->r[0]; // 802181A8
  c->r[27]=R32(c->r[3]+0x00000290u); // 802181AC
  c->r[3]=c->r[27]|c->r[27]; // 802181B0
  c->lr=0x802181B8u; f_8020D2A0(c); // 802181B4
  c->r[0]=0u+0x00000001u; // 802181B8
  W32(c->r[27]+0x00000014u,c->r[0]); // 802181BC
  c->r[0]=R32(c->r[28]+0x00000084u); // 802181C0
  cmps(c,0,(int32_t)c->r[0],0); // 802181C4
  if (!crb(c,2)) { goto L_80218250; } // 802181C8
  c->r[4]=R32(c->r[28]+0x00000004u); // 802181CC
  c->r[3]=0u+0x00000000u; // 802181D0
  c->r[12]=R32(c->r[4]+0x00000014u); // 802181D4
  cmps(c,0,(int32_t)c->r[12],0); // 802181D8
  if (crb(c,2)) { goto L_802181F0; } // 802181DC
  c->r[3]=0u+0x00000005u; // 802181E0
  c->r[4]=0u+0x0000000Cu; // 802181E4
  c->ctr=c->r[12]; // 802181E8
  if (true) { c->lr=0x802181F0u; dispatch(c,c->ctr); } // 802181EC
L_802181F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802181F0
  if (!crb(c,2)) { goto L_80218200; } // 802181F4
  c->r[3]=0u+0x0000000Cu; // 802181F8
  c->lr=0x80218200u; f_80210650(c); // 802181FC
L_80218200:;
  {uint32_t ea=c->r[29]+0x00000310u; c->f[31]=RF64(ea);} // 80218200
  c->r[27]=c->r[28]|c->r[28]; // 80218204
  {uint32_t ea=c->r[29]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80218208
  c->r[30]=0u+0x00000000u; // 8021820C
L_80218210:;
  c->r[0]=R32(c->r[28]+0x00000084u); // 80218210
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218214
  c->r[0]=c->r[0]^0x80000000u; // 80218218
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021821C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80218220
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80218224
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 80218228
  c->lr=0x80218230u; f_8020F390(c); // 8021822C
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218230
  c->r[4]=0u+0x00000001u; // 80218234
  c->lr=0x8021823Cu; f_8020F3A0(c); // 80218238
  c->r[30]=c->r[30]+0x00000001u; // 8021823C
  c->r[27]=c->r[27]+0x00000004u; // 80218240
  cmps(c,0,(int32_t)c->r[30],4); // 80218244
  if (crb(c,0)) { IRQCHK(c); goto L_80218210; } // 80218248
  goto L_802182D0; // 8021824C
L_80218250:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218250
  c->r[3]=0u+0x00000000u; // 80218254
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218258
  cmps(c,0,(int32_t)c->r[12],0); // 8021825C
  if (crb(c,2)) { goto L_80218274; } // 80218260
  c->r[3]=0u+0x00000005u; // 80218264
  c->r[4]=0u+0x0000000Au; // 80218268
  c->ctr=c->r[12]; // 8021826C
  if (true) { c->lr=0x80218274u; dispatch(c,c->ctr); } // 80218270
L_80218274:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218274
  if (!crb(c,2)) { goto L_80218284; } // 80218278
  c->r[3]=0u+0x0000000Au; // 8021827C
  c->lr=0x80218284u; f_80210650(c); // 80218280
L_80218284:;
  {uint32_t ea=c->r[29]+0x00000310u; c->f[31]=RF64(ea);} // 80218284
  c->r[27]=c->r[28]|c->r[28]; // 80218288
  {uint32_t ea=c->r[29]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8021828C
  c->r[30]=0u+0x00000000u; // 80218290
L_80218294:;
  c->r[0]=R32(c->r[28]+0x00000084u); // 80218294
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218298
  c->r[0]=c->r[0]^0x80000000u; // 8021829C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802182A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802182A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802182A8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 802182AC
  c->lr=0x802182B4u; f_8020F390(c); // 802182B0
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 802182B4
  c->r[4]=0u+0x00000001u; // 802182B8
  c->lr=0x802182C0u; f_8020F3A0(c); // 802182BC
  c->r[30]=c->r[30]+0x00000001u; // 802182C0
  c->r[27]=c->r[27]+0x00000004u; // 802182C4
  cmps(c,0,(int32_t)c->r[30],4); // 802182C8
  if (crb(c,0)) { IRQCHK(c); goto L_80218294; } // 802182CC
L_802182D0:;
  c->r[0]=0u+0x00000025u; // 802182D0
  c->r[4]=c->r[29]+0x00000068u; // 802182D4
  c->r[3]=0u+0x00000000u; // 802182D8
  c->ctr=c->r[0]; // 802182DC
L_802182E0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802182E0
  cmps(c,0,(int32_t)c->r[0],11); // 802182E4
  if (!crb(c,2)) { goto L_802182FC; } // 802182E8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802182EC
  cmps(c,0,(int32_t)c->r[0],5); // 802182F0
  if (!crb(c,2)) { goto L_802182FC; } // 802182F4
  goto L_8021832C; // 802182F8
L_802182FC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802182FC
  c->r[3]=c->r[3]+0x00000001u; // 80218300
  cmps(c,0,(int32_t)c->r[0],11); // 80218304
  if (!crb(c,2)) { goto L_8021831C; } // 80218308
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8021830C
  cmps(c,0,(int32_t)c->r[0],5); // 80218310
  if (!crb(c,2)) { goto L_8021831C; } // 80218314
  goto L_8021832C; // 80218318
L_8021831C:;
  c->r[4]=c->r[4]+0x00000010u; // 8021831C
  c->r[3]=c->r[3]+0x00000001u; // 80218320
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802182E0; } // 80218324
  c->r[3]=0u+0xFFFFFFFFu; // 80218328
L_8021832C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021832C
  c->r[3]=c->r[28]+c->r[0]; // 80218330
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218334
  c->r[3]=c->r[27]|c->r[27]; // 80218338
  c->lr=0x80218340u; f_8020D2A0(c); // 8021833C
  c->r[0]=0u+0x00000001u; // 80218340
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218344
  goto L_80218E08; // 80218348
L_8021834C:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 8021834C
  c->r[3]=0u+0x00000000u; // 80218350
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218354
  cmps(c,0,(int32_t)c->r[12],0); // 80218358
  if (crb(c,2)) { goto L_80218370; } // 8021835C
  c->r[3]=0u+0x00000005u; // 80218360
  c->r[4]=0u+0x0000000Du; // 80218364
  c->ctr=c->r[12]; // 80218368
  if (true) { c->lr=0x80218370u; dispatch(c,c->ctr); } // 8021836C
L_80218370:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218370
  if (!crb(c,2)) { goto L_80218E08; } // 80218374
  c->r[3]=0u+0x0000000Du; // 80218378
  c->lr=0x80218380u; f_80210650(c); // 8021837C
  goto L_80218E08; // 80218380
L_80218384:;
  c->r[3]=R32(c->r[28]+0x00000084u); // 80218384
  cmps(c,0,(int32_t)c->r[3],10); // 80218388
  if (!crb(c,0)) { goto L_8021861C; } // 8021838C
  c->r[0]=0u+0x00000025u; // 80218390
  c->r[3]=c->r[3]+0x00000015u; // 80218394
  c->r[5]=c->r[29]+0x00000068u; // 80218398
  c->r[4]=0u+0x00000000u; // 8021839C
  c->ctr=c->r[0]; // 802183A0
  c->r[0]=c->r[0]|0x00000000u; // 802183A4
L_802183A8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802183A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802183AC
  if (!crb(c,2)) { goto L_802183C4; } // 802183B0
  c->r[0]=R32(c->r[5]+0x00000004u); // 802183B4
  cmps(c,0,(int32_t)c->r[0],9); // 802183B8
  if (!crb(c,2)) { goto L_802183C4; } // 802183BC
  goto L_802183F4; // 802183C0
L_802183C4:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802183C4
  c->r[4]=c->r[4]+0x00000001u; // 802183C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802183CC
  if (!crb(c,2)) { goto L_802183E4; } // 802183D0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802183D4
  cmps(c,0,(int32_t)c->r[0],9); // 802183D8
  if (!crb(c,2)) { goto L_802183E4; } // 802183DC
  goto L_802183F4; // 802183E0
L_802183E4:;
  c->r[5]=c->r[5]+0x00000010u; // 802183E4
  c->r[4]=c->r[4]+0x00000001u; // 802183E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802183A8; } // 802183EC
  c->r[4]=0u+0xFFFFFFFFu; // 802183F0
L_802183F4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802183F4
  c->r[4]=0u+0x00000000u; // 802183F8
  c->r[3]=c->r[28]+c->r[0]; // 802183FC
  c->r[6]=c->r[29]+0x00000068u; // 80218400
  c->r[3]=R32(c->r[3]+0x00000290u); // 80218404
  c->r[0]=0u+0x00000025u; // 80218408
  c->r[5]=0u+0x00000000u; // 8021840C
  W32(c->r[3]+0x00000014u,c->r[4]); // 80218410
  c->r[3]=R32(c->r[28]+0x00000084u); // 80218414
  c->r[3]=c->r[3]+0x00000015u; // 80218418
  c->ctr=c->r[0]; // 8021841C
L_80218420:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 80218420
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80218424
  if (!crb(c,2)) { goto L_8021843C; } // 80218428
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021842C
  cmps(c,0,(int32_t)c->r[0],10); // 80218430
  if (!crb(c,2)) { goto L_8021843C; } // 80218434
  goto L_8021846C; // 80218438
L_8021843C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 8021843C
  c->r[5]=c->r[5]+0x00000001u; // 80218440
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80218444
  if (!crb(c,2)) { goto L_8021845C; } // 80218448
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8021844C
  cmps(c,0,(int32_t)c->r[0],10); // 80218450
  if (!crb(c,2)) { goto L_8021845C; } // 80218454
  goto L_8021846C; // 80218458
L_8021845C:;
  c->r[6]=c->r[6]+0x00000010u; // 8021845C
  c->r[5]=c->r[5]+0x00000001u; // 80218460
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218420; } // 80218464
  c->r[5]=0u+0xFFFFFFFFu; // 80218468
L_8021846C:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8021846C
  c->r[3]=c->r[28]+c->r[0]; // 80218470
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218474
  c->r[3]=c->r[27]|c->r[27]; // 80218478
  c->lr=0x80218480u; f_8020D2A0(c); // 8021847C
  c->r[0]=0u+0x00000001u; // 80218480
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218484
  c->r[3]=R32(c->r[28]+0x00000084u); // 80218488
  c->r[0]=c->r[3]+0x00000001u; // 8021848C
  W32(c->r[28]+0x00000084u,c->r[0]); // 80218490
  cmps(c,0,(int32_t)c->r[0],10); // 80218494
  if (!crb(c,2)) { goto L_80218520; } // 80218498
  c->r[4]=R32(c->r[28]+0x00000004u); // 8021849C
  c->r[3]=0u+0x00000000u; // 802184A0
  c->r[12]=R32(c->r[4]+0x00000014u); // 802184A4
  cmps(c,0,(int32_t)c->r[12],0); // 802184A8
  if (crb(c,2)) { goto L_802184C0; } // 802184AC
  c->r[3]=0u+0x00000005u; // 802184B0
  c->r[4]=0u+0x0000000Bu; // 802184B4
  c->ctr=c->r[12]; // 802184B8
  if (true) { c->lr=0x802184C0u; dispatch(c,c->ctr); } // 802184BC
L_802184C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802184C0
  if (!crb(c,2)) { goto L_802184D0; } // 802184C4
  c->r[3]=0u+0x0000000Bu; // 802184C8
  c->lr=0x802184D0u; f_80210650(c); // 802184CC
L_802184D0:;
  {uint32_t ea=c->r[29]+0x00000310u; c->f[31]=RF64(ea);} // 802184D0
  c->r[27]=c->r[28]|c->r[28]; // 802184D4
  {uint32_t ea=c->r[29]+0x0000030Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802184D8
  c->r[30]=0u+0x00000000u; // 802184DC
L_802184E0:;
  c->r[0]=R32(c->r[28]+0x00000084u); // 802184E0
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 802184E4
  c->r[0]=c->r[0]^0x80000000u; // 802184E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802184EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802184F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802184F4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 802184F8
  c->lr=0x80218500u; f_8020F390(c); // 802184FC
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218500
  c->r[4]=0u+0x00000001u; // 80218504
  c->lr=0x8021850Cu; f_8020F3A0(c); // 80218508
  c->r[30]=c->r[30]+0x00000001u; // 8021850C
  c->r[27]=c->r[27]+0x00000004u; // 80218510
  cmps(c,0,(int32_t)c->r[30],4); // 80218514
  if (crb(c,0)) { IRQCHK(c); goto L_802184E0; } // 80218518
  goto L_802185A0; // 8021851C
L_80218520:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218520
  c->r[3]=0u+0x00000000u; // 80218524
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218528
  cmps(c,0,(int32_t)c->r[12],0); // 8021852C
  if (crb(c,2)) { goto L_80218544; } // 80218530
  c->r[3]=0u+0x00000005u; // 80218534
  c->r[4]=0u+0x00000009u; // 80218538
  c->ctr=c->r[12]; // 8021853C
  if (true) { c->lr=0x80218544u; dispatch(c,c->ctr); } // 80218540
L_80218544:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218544
  if (!crb(c,2)) { goto L_80218554; } // 80218548
  c->r[3]=0u+0x00000009u; // 8021854C
  c->lr=0x80218554u; f_80210650(c); // 80218550
L_80218554:;
  {uint32_t ea=c->r[29]+0x00000310u; c->f[30]=RF64(ea);} // 80218554
  c->r[27]=c->r[28]|c->r[28]; // 80218558
  {uint32_t ea=c->r[29]+0x0000030Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8021855C
  c->r[30]=0u+0x00000000u; // 80218560
L_80218564:;
  c->r[0]=R32(c->r[28]+0x00000084u); // 80218564
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218568
  c->r[0]=c->r[0]^0x80000000u; // 8021856C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218570
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80218574
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80218578
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 8021857C
  c->lr=0x80218584u; f_8020F390(c); // 80218580
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218584
  c->r[4]=0u+0x00000001u; // 80218588
  c->lr=0x80218590u; f_8020F3A0(c); // 8021858C
  c->r[30]=c->r[30]+0x00000001u; // 80218590
  c->r[27]=c->r[27]+0x00000004u; // 80218594
  cmps(c,0,(int32_t)c->r[30],4); // 80218598
  if (crb(c,0)) { IRQCHK(c); goto L_80218564; } // 8021859C
L_802185A0:;
  c->r[0]=0u+0x00000025u; // 802185A0
  c->r[4]=c->r[29]+0x00000068u; // 802185A4
  c->r[3]=0u+0x00000000u; // 802185A8
  c->ctr=c->r[0]; // 802185AC
L_802185B0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802185B0
  cmps(c,0,(int32_t)c->r[0],12); // 802185B4
  if (!crb(c,2)) { goto L_802185CC; } // 802185B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802185BC
  cmps(c,0,(int32_t)c->r[0],5); // 802185C0
  if (!crb(c,2)) { goto L_802185CC; } // 802185C4
  goto L_802185FC; // 802185C8
L_802185CC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802185CC
  c->r[3]=c->r[3]+0x00000001u; // 802185D0
  cmps(c,0,(int32_t)c->r[0],12); // 802185D4
  if (!crb(c,2)) { goto L_802185EC; } // 802185D8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802185DC
  cmps(c,0,(int32_t)c->r[0],5); // 802185E0
  if (!crb(c,2)) { goto L_802185EC; } // 802185E4
  goto L_802185FC; // 802185E8
L_802185EC:;
  c->r[4]=c->r[4]+0x00000010u; // 802185EC
  c->r[3]=c->r[3]+0x00000001u; // 802185F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802185B0; } // 802185F4
  c->r[3]=0u+0xFFFFFFFFu; // 802185F8
L_802185FC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802185FC
  c->r[3]=c->r[28]+c->r[0]; // 80218600
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218604
  c->r[3]=c->r[27]|c->r[27]; // 80218608
  c->lr=0x80218610u; f_8020D2A0(c); // 8021860C
  c->r[0]=0u+0x00000001u; // 80218610
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218614
  goto L_80218E08; // 80218618
L_8021861C:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 8021861C
  c->r[3]=0u+0x00000000u; // 80218620
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218624
  cmps(c,0,(int32_t)c->r[12],0); // 80218628
  if (crb(c,2)) { goto L_80218640; } // 8021862C
  c->r[3]=0u+0x00000005u; // 80218630
  c->r[4]=0u+0x0000000Du; // 80218634
  c->ctr=c->r[12]; // 80218638
  if (true) { c->lr=0x80218640u; dispatch(c,c->ctr); } // 8021863C
L_80218640:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218640
  if (!crb(c,2)) { goto L_80218E08; } // 80218644
  c->r[3]=0u+0x0000000Du; // 80218648
  c->lr=0x80218650u; f_80210650(c); // 8021864C
  goto L_80218E08; // 80218650
L_80218654:;
  c->r[0]=R8(c->r[28]+0x0000008Cu); // 80218654
  cmps(c,0,(int32_t)c->r[0],0); // 80218658
  if (!crb(c,2)) { goto L_8021879C; } // 8021865C
  c->r[0]=0u+0x00000001u; // 80218660
  W8(c->r[28]+0x0000008Cu,c->r[0]); // 80218664
  c->r[3]=0u+0x00000001u; // 80218668
  c->lr=0x80218670u; f_80264900(c); // 8021866C
  c->r[0]=0u+0x00000025u; // 80218670
  c->r[4]=c->r[29]+0x00000068u; // 80218674
  c->r[3]=0u+0x00000000u; // 80218678
  c->ctr=c->r[0]; // 8021867C
L_80218680:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218680
  cmps(c,0,(int32_t)c->r[0],14); // 80218684
  if (!crb(c,2)) { goto L_8021869C; } // 80218688
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021868C
  cmps(c,0,(int32_t)c->r[0],8); // 80218690
  if (!crb(c,2)) { goto L_8021869C; } // 80218694
  goto L_802186CC; // 80218698
L_8021869C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021869C
  c->r[3]=c->r[3]+0x00000001u; // 802186A0
  cmps(c,0,(int32_t)c->r[0],14); // 802186A4
  if (!crb(c,2)) { goto L_802186BC; } // 802186A8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802186AC
  cmps(c,0,(int32_t)c->r[0],8); // 802186B0
  if (!crb(c,2)) { goto L_802186BC; } // 802186B4
  goto L_802186CC; // 802186B8
L_802186BC:;
  c->r[4]=c->r[4]+0x00000010u; // 802186BC
  c->r[3]=c->r[3]+0x00000001u; // 802186C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218680; } // 802186C4
  c->r[3]=0u+0xFFFFFFFFu; // 802186C8
L_802186CC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802186CC
  c->r[3]=c->r[28]+c->r[0]; // 802186D0
  c->r[27]=R32(c->r[3]+0x00000290u); // 802186D4
  c->r[3]=c->r[27]|c->r[27]; // 802186D8
  c->lr=0x802186E0u; f_8020D2A0(c); // 802186DC
  c->r[0]=0u+0x00000025u; // 802186E0
  c->r[3]=0u+0x00000001u; // 802186E4
  W32(c->r[27]+0x00000014u,c->r[3]); // 802186E8
  c->r[4]=c->r[29]+0x00000068u; // 802186EC
  c->r[3]=0u+0x00000000u; // 802186F0
  c->ctr=c->r[0]; // 802186F4
L_802186F8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802186F8
  cmps(c,0,(int32_t)c->r[0],16); // 802186FC
  if (!crb(c,2)) { goto L_80218714; } // 80218700
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218704
  cmps(c,0,(int32_t)c->r[0],6); // 80218708
  if (!crb(c,2)) { goto L_80218714; } // 8021870C
  goto L_80218744; // 80218710
L_80218714:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218714
  c->r[3]=c->r[3]+0x00000001u; // 80218718
  cmps(c,0,(int32_t)c->r[0],16); // 8021871C
  if (!crb(c,2)) { goto L_80218734; } // 80218720
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80218724
  cmps(c,0,(int32_t)c->r[0],6); // 80218728
  if (!crb(c,2)) { goto L_80218734; } // 8021872C
  goto L_80218744; // 80218730
L_80218734:;
  c->r[4]=c->r[4]+0x00000010u; // 80218734
  c->r[3]=c->r[3]+0x00000001u; // 80218738
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802186F8; } // 8021873C
  c->r[3]=0u+0xFFFFFFFFu; // 80218740
L_80218744:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218744
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218748
  c->r[3]=c->r[28]+c->r[0]; // 8021874C
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218750
  c->r[3]=c->r[27]|c->r[27]; // 80218754
  c->lr=0x8021875Cu; f_8020D2A0(c); // 80218758
  c->r[0]=0u+0x00000001u; // 8021875C
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218760
  c->r[3]=0u+0x00000000u; // 80218764
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218768
  c->r[12]=R32(c->r[4]+0x00000014u); // 8021876C
  cmps(c,0,(int32_t)c->r[12],0); // 80218770
  if (crb(c,2)) { goto L_80218788; } // 80218774
  c->r[3]=0u+0x00000005u; // 80218778
  c->r[4]=0u+0x0000000Eu; // 8021877C
  c->ctr=c->r[12]; // 80218780
  if (true) { c->lr=0x80218788u; dispatch(c,c->ctr); } // 80218784
L_80218788:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218788
  if (!crb(c,2)) { goto L_80218850; } // 8021878C
  c->r[3]=0u+0x0000000Eu; // 80218790
  c->lr=0x80218798u; f_80210650(c); // 80218794
  goto L_80218850; // 80218798
L_8021879C:;
  c->r[0]=0u+0x00000025u; // 8021879C
  c->r[4]=c->r[29]+0x00000068u; // 802187A0
  c->r[3]=0u+0x00000000u; // 802187A4
  c->ctr=c->r[0]; // 802187A8
  c->r[0]=c->r[0]|0x00000000u; // 802187AC
L_802187B0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802187B0
  cmps(c,0,(int32_t)c->r[0],16); // 802187B4
  if (!crb(c,2)) { goto L_802187CC; } // 802187B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802187BC
  cmps(c,0,(int32_t)c->r[0],14); // 802187C0
  if (!crb(c,2)) { goto L_802187CC; } // 802187C4
  goto L_802187FC; // 802187C8
L_802187CC:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802187CC
  c->r[3]=c->r[3]+0x00000001u; // 802187D0
  cmps(c,0,(int32_t)c->r[0],16); // 802187D4
  if (!crb(c,2)) { goto L_802187EC; } // 802187D8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802187DC
  cmps(c,0,(int32_t)c->r[0],14); // 802187E0
  if (!crb(c,2)) { goto L_802187EC; } // 802187E4
  goto L_802187FC; // 802187E8
L_802187EC:;
  c->r[4]=c->r[4]+0x00000010u; // 802187EC
  c->r[3]=c->r[3]+0x00000001u; // 802187F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802187B0; } // 802187F4
  c->r[3]=0u+0xFFFFFFFFu; // 802187F8
L_802187FC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802187FC
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218800
  c->r[3]=c->r[28]+c->r[0]; // 80218804
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218808
  c->r[3]=c->r[27]|c->r[27]; // 8021880C
  c->lr=0x80218814u; f_8020D2A0(c); // 80218810
  c->r[0]=0u+0x00000001u; // 80218814
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218818
  c->r[3]=0u+0x00000000u; // 8021881C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218820
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218824
  cmps(c,0,(int32_t)c->r[12],0); // 80218828
  if (crb(c,2)) { goto L_80218840; } // 8021882C
  c->r[3]=0u+0x00000005u; // 80218830
  c->r[4]=0u+0x0000000Du; // 80218834
  c->ctr=c->r[12]; // 80218838
  if (true) { c->lr=0x80218840u; dispatch(c,c->ctr); } // 8021883C
L_80218840:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218840
  if (!crb(c,2)) { goto L_80218850; } // 80218844
  c->r[3]=0u+0x0000000Du; // 80218848
  c->lr=0x80218850u; f_80210650(c); // 8021884C
L_80218850:;
  {uint32_t ea=c->r[29]+0x000002E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218850
  c->r[27]=c->r[28]|c->r[28]; // 80218854
  c->r[29]=0u+0x00000000u; // 80218858
L_8021885C:;
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 8021885C
  c->lr=0x80218864u; f_8020F710(c); // 80218860
  c->r[29]=c->r[29]+0x00000001u; // 80218864
  {uint32_t ea=c->r[27]+0x000001B0u; WF32(ea,c->f[31]);} // 80218868
  cmps(c,0,(int32_t)c->r[29],4); // 8021886C
  {uint32_t ea=c->r[27]+0x000001C0u; WF32(ea,c->f[31]);} // 80218870
  c->r[27]=c->r[27]+0x00000004u; // 80218874
  if (crb(c,0)) { IRQCHK(c); goto L_8021885C; } // 80218878
  c->r[0]=0u+0x00000009u; // 8021887C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80218880
  goto L_80218E08; // 80218884
L_80218888:;
  c->r[0]=R8(c->r[28]+0x0000008Cu); // 80218888
  cmps(c,0,(int32_t)c->r[0],0); // 8021888C
  if (crb(c,2)) { goto L_802189D4; } // 80218890
  c->r[0]=0u+0x00000000u; // 80218894
  W8(c->r[28]+0x0000008Cu,c->r[0]); // 80218898
  c->r[3]=0u+0x00000000u; // 8021889C
  c->lr=0x802188A4u; f_80264900(c); // 802188A0
  c->r[0]=0u+0x00000025u; // 802188A4
  c->r[4]=c->r[29]+0x00000068u; // 802188A8
  c->r[3]=0u+0x00000000u; // 802188AC
  c->ctr=c->r[0]; // 802188B0
  c->r[0]=c->r[0]|0x00000000u; // 802188B4
L_802188B8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802188B8
  cmps(c,0,(int32_t)c->r[0],14); // 802188BC
  if (!crb(c,2)) { goto L_802188D4; } // 802188C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802188C4
  cmps(c,0,(int32_t)c->r[0],6); // 802188C8
  if (!crb(c,2)) { goto L_802188D4; } // 802188CC
  goto L_80218904; // 802188D0
L_802188D4:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802188D4
  c->r[3]=c->r[3]+0x00000001u; // 802188D8
  cmps(c,0,(int32_t)c->r[0],14); // 802188DC
  if (!crb(c,2)) { goto L_802188F4; } // 802188E0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802188E4
  cmps(c,0,(int32_t)c->r[0],6); // 802188E8
  if (!crb(c,2)) { goto L_802188F4; } // 802188EC
  goto L_80218904; // 802188F0
L_802188F4:;
  c->r[4]=c->r[4]+0x00000010u; // 802188F4
  c->r[3]=c->r[3]+0x00000001u; // 802188F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802188B8; } // 802188FC
  c->r[3]=0u+0xFFFFFFFFu; // 80218900
L_80218904:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218904
  c->r[3]=c->r[28]+c->r[0]; // 80218908
  c->r[27]=R32(c->r[3]+0x00000290u); // 8021890C
  c->r[3]=c->r[27]|c->r[27]; // 80218910
  c->lr=0x80218918u; f_8020D2A0(c); // 80218914
  c->r[0]=0u+0x00000025u; // 80218918
  c->r[3]=0u+0x00000001u; // 8021891C
  W32(c->r[27]+0x00000014u,c->r[3]); // 80218920
  c->r[4]=c->r[29]+0x00000068u; // 80218924
  c->r[3]=0u+0x00000000u; // 80218928
  c->ctr=c->r[0]; // 8021892C
L_80218930:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218930
  cmps(c,0,(int32_t)c->r[0],13); // 80218934
  if (!crb(c,2)) { goto L_8021894C; } // 80218938
  c->r[0]=R32(c->r[4]+0x00000004u); // 8021893C
  cmps(c,0,(int32_t)c->r[0],8); // 80218940
  if (!crb(c,2)) { goto L_8021894C; } // 80218944
  goto L_8021897C; // 80218948
L_8021894C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8021894C
  c->r[3]=c->r[3]+0x00000001u; // 80218950
  cmps(c,0,(int32_t)c->r[0],13); // 80218954
  if (!crb(c,2)) { goto L_8021896C; } // 80218958
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8021895C
  cmps(c,0,(int32_t)c->r[0],8); // 80218960
  if (!crb(c,2)) { goto L_8021896C; } // 80218964
  goto L_8021897C; // 80218968
L_8021896C:;
  c->r[4]=c->r[4]+0x00000010u; // 8021896C
  c->r[3]=c->r[3]+0x00000001u; // 80218970
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218930; } // 80218974
  c->r[3]=0u+0xFFFFFFFFu; // 80218978
L_8021897C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8021897C
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218980
  c->r[3]=c->r[28]+c->r[0]; // 80218984
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218988
  c->r[3]=c->r[27]|c->r[27]; // 8021898C
  c->lr=0x80218994u; f_8020D2A0(c); // 80218990
  c->r[0]=0u+0x00000001u; // 80218994
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218998
  c->r[3]=0u+0x00000000u; // 8021899C
  c->r[4]=R32(c->r[28]+0x00000004u); // 802189A0
  c->r[12]=R32(c->r[4]+0x00000014u); // 802189A4
  cmps(c,0,(int32_t)c->r[12],0); // 802189A8
  if (crb(c,2)) { goto L_802189C0; } // 802189AC
  c->r[3]=0u+0x00000005u; // 802189B0
  c->r[4]=0u+0x0000000Fu; // 802189B4
  c->ctr=c->r[12]; // 802189B8
  if (true) { c->lr=0x802189C0u; dispatch(c,c->ctr); } // 802189BC
L_802189C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802189C0
  if (!crb(c,2)) { goto L_80218A08; } // 802189C4
  c->r[3]=0u+0x0000000Fu; // 802189C8
  c->lr=0x802189D0u; f_80210650(c); // 802189CC
  goto L_80218A08; // 802189D0
L_802189D4:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 802189D4
  c->r[3]=0u+0x00000000u; // 802189D8
  c->r[12]=R32(c->r[4]+0x00000014u); // 802189DC
  cmps(c,0,(int32_t)c->r[12],0); // 802189E0
  if (crb(c,2)) { goto L_802189F8; } // 802189E4
  c->r[3]=0u+0x00000005u; // 802189E8
  c->r[4]=0u+0x0000000Du; // 802189EC
  c->ctr=c->r[12]; // 802189F0
  if (true) { c->lr=0x802189F8u; dispatch(c,c->ctr); } // 802189F4
L_802189F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802189F8
  if (!crb(c,2)) { goto L_80218A08; } // 802189FC
  c->r[3]=0u+0x0000000Du; // 80218A00
  c->lr=0x80218A08u; f_80210650(c); // 80218A04
L_80218A08:;
  c->r[0]=0u+0x00000009u; // 80218A08
  W32(c->r[28]+0x00000014u,c->r[0]); // 80218A0C
  goto L_80218E08; // 80218A10
L_80218A14:;
  c->r[0]=0u+0x00000025u; // 80218A14
  c->r[4]=c->r[29]+0x00000068u; // 80218A18
  c->r[3]=0u+0x00000000u; // 80218A1C
  c->ctr=c->r[0]; // 80218A20
  c->r[0]=c->r[0]|0x00000000u; // 80218A24
L_80218A28:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218A28
  cmps(c,0,(int32_t)c->r[0],15); // 80218A2C
  if (!crb(c,2)) { goto L_80218A44; } // 80218A30
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218A34
  cmps(c,0,(int32_t)c->r[0],5); // 80218A38
  if (!crb(c,2)) { goto L_80218A44; } // 80218A3C
  goto L_80218A74; // 80218A40
L_80218A44:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218A44
  c->r[3]=c->r[3]+0x00000001u; // 80218A48
  cmps(c,0,(int32_t)c->r[0],15); // 80218A4C
  if (!crb(c,2)) { goto L_80218A64; } // 80218A50
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80218A54
  cmps(c,0,(int32_t)c->r[0],5); // 80218A58
  if (!crb(c,2)) { goto L_80218A64; } // 80218A5C
  goto L_80218A74; // 80218A60
L_80218A64:;
  c->r[4]=c->r[4]+0x00000010u; // 80218A64
  c->r[3]=c->r[3]+0x00000001u; // 80218A68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218A28; } // 80218A6C
  c->r[3]=0u+0xFFFFFFFFu; // 80218A70
L_80218A74:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218A74
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218A78
  c->r[3]=c->r[28]+c->r[0]; // 80218A7C
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218A80
  c->r[3]=c->r[27]|c->r[27]; // 80218A84
  c->lr=0x80218A8Cu; f_8020D2A0(c); // 80218A88
  c->r[3]=0u+0x00000001u; // 80218A8C
  W32(c->r[27]+0x00000014u,c->r[3]); // 80218A90
  c->r[0]=0u+0x00000003u; // 80218A94
  {uint32_t ea=c->r[29]+0x000002E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218A98
  W32(c->r[28]+0x00000014u,c->r[0]); // 80218A9C
  c->r[27]=c->r[28]|c->r[28]; // 80218AA0
  c->r[26]=0u+0x00000000u; // 80218AA4
  c->r[31]=0u+0x00000000u; // 80218AA8
  W8(c->r[28]+0x00000090u,c->r[3]); // 80218AAC
L_80218AB0:;
  {uint32_t ea=c->r[27]+0x000001B0u; WF32(ea,c->f[31]);} // 80218AB0
  {uint32_t ea=c->r[27]+0x000001C0u; WF32(ea,c->f[31]);} // 80218AB4
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218AB8
  c->lr=0x80218AC0u; f_8020F780(c); // 80218ABC
  c->r[3]=R32(c->r[27]+0x0000024Cu); // 80218AC0
  c->r[26]=c->r[26]+0x00000001u; // 80218AC4
  cmps(c,0,(int32_t)c->r[26],4); // 80218AC8
  c->r[27]=c->r[27]+0x00000004u; // 80218ACC
  W8(c->r[3]+0x00000044u,c->r[31]); // 80218AD0
  if (crb(c,0)) { IRQCHK(c); goto L_80218AB0; } // 80218AD4
  c->r[3]=0u+0x80490000u; // 80218AD8
  {uint32_t ea=c->r[29]+0x00000300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218ADC
  c->r[4]=R32(c->r[3]+0x00001970u); // 80218AE0
  c->r[5]=0u+0x00000001u; // 80218AE4
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80218AE8
  c->r[4]=R32(c->r[4]+0x00000004u); // 80218AEC
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218AF0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80218AF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80218AF8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80218AFC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80218B00
  W32(c->r[28]+0x000001D0u,c->r[0]); // 80218B04
  c->r[3]=R32(c->r[3]+0x00000010u); // 80218B08
  c->r[4]=R32(c->r[30]+0x000009E4u); // 80218B0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80218B10
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80218B14
  c->ctr=c->r[12]; // 80218B18
  if (true) { c->lr=0x80218B20u; dispatch(c,c->ctr); } // 80218B1C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80218B20
  c->r[4]=c->r[30]+0x000009E4u; // 80218B24
  c->r[5]=0u+0x00000001u; // 80218B28
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80218B2C
  c->r[0]=c->r[0]|0x00000001u; // 80218B30
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80218B34
  c->r[3]=R32(c->r[28]+0x000001D8u); // 80218B38
  c->r[4]=R32(c->r[4]+0x00000004u); // 80218B3C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80218B40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80218B44
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80218B48
  c->ctr=c->r[12]; // 80218B4C
  if (true) { c->lr=0x80218B54u; dispatch(c,c->ctr); } // 80218B50
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80218B54
  c->r[4]=0u+0x00000000u; // 80218B58
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80218B5C
  c->r[0]=c->r[0]|0x00000001u; // 80218B60
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80218B64
  c->r[3]=R32(c->r[28]+0x00000004u); // 80218B68
  c->r[12]=R32(c->r[3]+0x00000014u); // 80218B6C
  cmps(c,0,(int32_t)c->r[12],0); // 80218B70
  if (crb(c,2)) { goto L_80218B8C; } // 80218B74
  c->r[3]=0u+0x00000005u; // 80218B78
  c->r[4]=0u+0x00000005u; // 80218B7C
  c->ctr=c->r[12]; // 80218B80
  if (true) { c->lr=0x80218B88u; dispatch(c,c->ctr); } // 80218B84
  c->r[4]=c->r[3]|c->r[3]; // 80218B88
L_80218B8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80218B8C
  if (!crb(c,2)) { goto L_80218B9C; } // 80218B90
  c->r[3]=0u+0x00000005u; // 80218B94
  c->lr=0x80218B9Cu; f_80210650(c); // 80218B98
L_80218B9C:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218B9C
  c->r[3]=0u+0x00000000u; // 80218BA0
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218BA4
  cmps(c,0,(int32_t)c->r[12],0); // 80218BA8
  if (crb(c,2)) { goto L_80218BC0; } // 80218BAC
  c->r[3]=0u+0x00000005u; // 80218BB0
  c->r[4]=0u+0x00000010u; // 80218BB4
  c->ctr=c->r[12]; // 80218BB8
  if (true) { c->lr=0x80218BC0u; dispatch(c,c->ctr); } // 80218BBC
L_80218BC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218BC0
  if (!crb(c,2)) { goto L_80218E08; } // 80218BC4
  c->r[3]=0u+0x00000010u; // 80218BC8
  c->lr=0x80218BD0u; f_80210650(c); // 80218BCC
  goto L_80218E08; // 80218BD0
L_80218BD4:;
  c->r[0]=0u+0x00000025u; // 80218BD4
  c->r[4]=c->r[29]+0x00000068u; // 80218BD8
  c->r[3]=0u+0x00000000u; // 80218BDC
  c->ctr=c->r[0]; // 80218BE0
  c->r[0]=c->r[0]|0x00000000u; // 80218BE4
L_80218BE8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218BE8
  cmps(c,0,(int32_t)c->r[0],19); // 80218BEC
  if (!crb(c,2)) { goto L_80218C04; } // 80218BF0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218BF4
  cmps(c,0,(int32_t)c->r[0],13); // 80218BF8
  if (!crb(c,2)) { goto L_80218C04; } // 80218BFC
  goto L_80218C34; // 80218C00
L_80218C04:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218C04
  c->r[3]=c->r[3]+0x00000001u; // 80218C08
  cmps(c,0,(int32_t)c->r[0],19); // 80218C0C
  if (!crb(c,2)) { goto L_80218C24; } // 80218C10
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80218C14
  cmps(c,0,(int32_t)c->r[0],13); // 80218C18
  if (!crb(c,2)) { goto L_80218C24; } // 80218C1C
  goto L_80218C34; // 80218C20
L_80218C24:;
  c->r[4]=c->r[4]+0x00000010u; // 80218C24
  c->r[3]=c->r[3]+0x00000001u; // 80218C28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218BE8; } // 80218C2C
  c->r[3]=0u+0xFFFFFFFFu; // 80218C30
L_80218C34:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218C34
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218C38
  c->r[3]=c->r[28]+c->r[0]; // 80218C3C
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218C40
  c->r[3]=c->r[27]|c->r[27]; // 80218C44
  c->lr=0x80218C4Cu; f_8020D2A0(c); // 80218C48
  c->r[0]=0u+0x00000001u; // 80218C4C
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218C50
  c->r[3]=0u+0x0000000Du; // 80218C54
  c->r[4]=R32(c->r[28]+0x000000B8u); // 80218C58
  c->r[0]=0u+0x00000000u; // 80218C5C
  W32(c->r[28]+0x00000014u,c->r[3]); // 80218C60
  cmps(c,0,(int32_t)c->r[4],1); // 80218C64
  W32(c->r[28]+0x00000000u,c->r[0]); // 80218C68
  if (!crb(c,2)) { goto L_80218CB0; } // 80218C6C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218C70
  c->r[3]=0u+0x00000000u; // 80218C74
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218C78
  cmps(c,0,(int32_t)c->r[12],0); // 80218C7C
  if (crb(c,2)) { goto L_80218C94; } // 80218C80
  c->r[3]=0u+0x00000005u; // 80218C84
  c->r[4]=0u+0x00000002u; // 80218C88
  c->ctr=c->r[12]; // 80218C8C
  if (true) { c->lr=0x80218C94u; dispatch(c,c->ctr); } // 80218C90
L_80218C94:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218C94
  if (!crb(c,2)) { goto L_80218CA4; } // 80218C98
  c->r[3]=0u+0x00000002u; // 80218C9C
  c->lr=0x80218CA4u; f_80210650(c); // 80218CA0
L_80218CA4:;
  c->r[0]=0u+0x00000000u; // 80218CA4
  W8(c->r[28]+0x00000400u,c->r[0]); // 80218CA8
  goto L_80218E08; // 80218CAC
L_80218CB0:;
  cmps(c,0,(int32_t)c->r[4],2); // 80218CB0
  if (!crb(c,2)) { goto L_80218CF8; } // 80218CB4
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218CB8
  c->r[3]=0u+0x00000000u; // 80218CBC
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218CC0
  cmps(c,0,(int32_t)c->r[12],0); // 80218CC4
  if (crb(c,2)) { goto L_80218CDC; } // 80218CC8
  c->r[3]=0u+0x00000005u; // 80218CCC
  c->r[4]=0u+0x00000003u; // 80218CD0
  c->ctr=c->r[12]; // 80218CD4
  if (true) { c->lr=0x80218CDCu; dispatch(c,c->ctr); } // 80218CD8
L_80218CDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218CDC
  if (!crb(c,2)) { goto L_80218CEC; } // 80218CE0
  c->r[3]=0u+0x00000003u; // 80218CE4
  c->lr=0x80218CECu; f_80210650(c); // 80218CE8
L_80218CEC:;
  c->r[0]=0u+0x00000001u; // 80218CEC
  W8(c->r[28]+0x00000400u,c->r[0]); // 80218CF0
  goto L_80218E08; // 80218CF4
L_80218CF8:;
  cmps(c,0,(int32_t)c->r[4],4); // 80218CF8
  if (!crb(c,2)) { goto L_80218E08; } // 80218CFC
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218D00
  c->r[3]=0u+0x00000000u; // 80218D04
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218D08
  cmps(c,0,(int32_t)c->r[12],0); // 80218D0C
  if (crb(c,2)) { goto L_80218D24; } // 80218D10
  c->r[3]=0u+0x00000005u; // 80218D14
  c->r[4]=0u+0x00000003u; // 80218D18
  c->ctr=c->r[12]; // 80218D1C
  if (true) { c->lr=0x80218D24u; dispatch(c,c->ctr); } // 80218D20
L_80218D24:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218D24
  if (!crb(c,2)) { goto L_80218D34; } // 80218D28
  c->r[3]=0u+0x00000003u; // 80218D2C
  c->lr=0x80218D34u; f_80210650(c); // 80218D30
L_80218D34:;
  c->r[0]=0u+0x00000000u; // 80218D34
  W8(c->r[28]+0x00000400u,c->r[0]); // 80218D38
  goto L_80218E08; // 80218D3C
L_80218D40:;
  c->r[0]=0u+0x00000025u; // 80218D40
  c->r[4]=c->r[29]+0x00000068u; // 80218D44
  c->r[3]=0u+0x00000000u; // 80218D48
  c->ctr=c->r[0]; // 80218D4C
L_80218D50:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218D50
  cmps(c,0,(int32_t)c->r[0],20); // 80218D54
  if (!crb(c,2)) { goto L_80218D6C; } // 80218D58
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218D5C
  cmps(c,0,(int32_t)c->r[0],13); // 80218D60
  if (!crb(c,2)) { goto L_80218D6C; } // 80218D64
  goto L_80218D9C; // 80218D68
L_80218D6C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218D6C
  c->r[3]=c->r[3]+0x00000001u; // 80218D70
  cmps(c,0,(int32_t)c->r[0],20); // 80218D74
  if (!crb(c,2)) { goto L_80218D8C; } // 80218D78
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80218D7C
  cmps(c,0,(int32_t)c->r[0],13); // 80218D80
  if (!crb(c,2)) { goto L_80218D8C; } // 80218D84
  goto L_80218D9C; // 80218D88
L_80218D8C:;
  c->r[4]=c->r[4]+0x00000010u; // 80218D8C
  c->r[3]=c->r[3]+0x00000001u; // 80218D90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218D50; } // 80218D94
  c->r[3]=0u+0xFFFFFFFFu; // 80218D98
L_80218D9C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218D9C
  W32(c->r[28]+0x00000018u,c->r[3]); // 80218DA0
  c->r[3]=c->r[28]+c->r[0]; // 80218DA4
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218DA8
  c->r[3]=c->r[27]|c->r[27]; // 80218DAC
  c->lr=0x80218DB4u; f_8020D2A0(c); // 80218DB0
  c->r[0]=0u+0x00000001u; // 80218DB4
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218DB8
  c->r[3]=0u+0x0000000Du; // 80218DBC
  c->r[5]=0u+0xFFFFFFFFu; // 80218DC0
  c->r[0]=0u+0x00000000u; // 80218DC4
  W32(c->r[28]+0x00000014u,c->r[3]); // 80218DC8
  c->r[4]=R32(c->r[28]+0x00000004u); // 80218DCC
  c->r[3]=0u+0x00000000u; // 80218DD0
  W32(c->r[28]+0x000000B8u,c->r[5]); // 80218DD4
  W32(c->r[28]+0x00000000u,c->r[0]); // 80218DD8
  c->r[12]=R32(c->r[4]+0x00000014u); // 80218DDC
  cmps(c,0,(int32_t)c->r[12],0); // 80218DE0
  if (crb(c,2)) { goto L_80218DF8; } // 80218DE4
  c->r[3]=0u+0x00000005u; // 80218DE8
  c->r[4]=0u+0x00000006u; // 80218DEC
  c->ctr=c->r[12]; // 80218DF0
  if (true) { c->lr=0x80218DF8u; dispatch(c,c->ctr); } // 80218DF4
L_80218DF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80218DF8
  if (!crb(c,2)) { goto L_80218E08; } // 80218DFC
  c->r[3]=0u+0x00000006u; // 80218E00
  c->lr=0x80218E08u; f_80210650(c); // 80218E04
L_80218E08:;
  c->r[11]=c->r[1]+0x00000040u; // 80218E08
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80218E0C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80218E10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80218E14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80218E18
  c->lr=0x80218E20u; f_800C2E94(c); // 80218E1C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80218E20
  c->lr=c->r[0]; // 80218E24
  c->r[1]=c->r[1]+0x00000060u; // 80218E28
  return; // 80218E2C
}

// fn_80218E30
void f_80218E30(Ctx* __restrict c) {
  trace_call(0x80218E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218E30
  c->r[0]=c->lr; // 80218E34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80218E38
  c->r[11]=c->r[1]+0x00000030u; // 80218E3C
  c->lr=0x80218E44u; f_800C2E44(c); // 80218E40
  c->r[31]=c->r[3]|c->r[3]; // 80218E44
  c->r[25]=0u+0x00000000u; // 80218E48
  c->r[26]=c->r[31]|c->r[31]; // 80218E4C
  c->r[28]=0u+0x80380000u; // 80218E50
  c->r[29]=0u+0x00000001u; // 80218E54
  c->r[30]=0u+0x00000000u; // 80218E58
  goto L_80218ED8; // 80218E5C
L_80218E60:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 80218E60
  cmps(c,0,(int32_t)c->r[0],0); // 80218E64
  if (crb(c,2)) { goto L_80218ED0; } // 80218E68
  c->r[0]=R32(c->r[31]+0x00000010u); // 80218E6C
  c->r[4]=c->r[28]+0xFFFFF488u; // 80218E70
  c->r[3]=0u+0x00000000u; // 80218E74
  c->ctr=c->r[0]; // 80218E78
  cmps(c,0,(int32_t)c->r[0],0); // 80218E7C
  if (!crb(c,1)) { goto L_80218EB0; } // 80218E80
  c->r[0]=c->r[0]|0x00000000u; // 80218E84
L_80218E88:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218E88
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80218E8C
  if (!crb(c,2)) { goto L_80218EA4; } // 80218E90
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218E94
  cmps(c,0,(int32_t)c->r[0],2); // 80218E98
  if (!crb(c,2)) { goto L_80218EA4; } // 80218E9C
  goto L_80218EB4; // 80218EA0
L_80218EA4:;
  c->r[4]=c->r[4]+0x00000008u; // 80218EA4
  c->r[3]=c->r[3]+0x00000001u; // 80218EA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218E88; } // 80218EAC
L_80218EB0:;
  c->r[3]=0u+0xFFFFFFFFu; // 80218EB0
L_80218EB4:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218EB4
  c->r[3]=c->r[31]+c->r[0]; // 80218EB8
  c->r[27]=R32(c->r[3]+0x00000260u); // 80218EBC
  c->r[3]=c->r[27]|c->r[27]; // 80218EC0
  c->lr=0x80218EC8u; f_8020D2A0(c); // 80218EC4
  W32(c->r[27]+0x00000014u,c->r[29]); // 80218EC8
  W32(c->r[26]+0x00000020u,c->r[30]); // 80218ECC
L_80218ED0:;
  c->r[26]=c->r[26]+0x00000004u; // 80218ED0
  c->r[25]=c->r[25]+0x00000001u; // 80218ED4
L_80218ED8:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80218ED8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80218EDC
  if (crb(c,0)) { IRQCHK(c); goto L_80218E60; } // 80218EE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218EE4
  c->r[3]=c->r[31]+c->r[0]; // 80218EE8
  c->r[0]=R32(c->r[3]+0x00000020u); // 80218EEC
  cmps(c,0,(int32_t)c->r[0],0); // 80218EF0
  if (crb(c,2)) { goto L_80218F24; } // 80218EF4
  c->r[27]=R32(c->r[31]+0x000003E8u); // 80218EF8
  c->r[3]=c->r[27]|c->r[27]; // 80218EFC
  c->lr=0x80218F04u; f_8020D2A0(c); // 80218F00
  c->r[0]=0u+0x00000001u; // 80218F04
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218F08
  c->r[4]=0u+0x00000000u; // 80218F0C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80218F10
  c->r[0]=c->r[3]+0x00000001u; // 80218F14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218F18
  c->r[3]=c->r[31]+c->r[0]; // 80218F1C
  W32(c->r[3]+0x00000020u,c->r[4]); // 80218F20
L_80218F24:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80218F24
  c->r[0]=c->r[3]+0x00000001u; // 80218F28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218F2C
  c->r[3]=c->r[31]+c->r[0]; // 80218F30
  c->r[0]=R32(c->r[3]+0x00000020u); // 80218F34
  cmps(c,0,(int32_t)c->r[0],0); // 80218F38
  if (crb(c,2)) { goto L_80219084; } // 80218F3C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80218F40
  cmps(c,0,(int32_t)c->r[0],1); // 80218F44
  if (!crb(c,2)) { goto L_80218FF0; } // 80218F48
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80218F4C
  cmps(c,0,(int32_t)c->r[0],0); // 80218F50
  if (!crb(c,2)) { goto L_80219084; } // 80218F54
  c->r[4]=0u+0x80380000u; // 80218F58
  c->r[0]=0u+0x00000025u; // 80218F5C
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80218F60
  c->r[3]=0u+0x00000000u; // 80218F64
  c->ctr=c->r[0]; // 80218F68
  c->r[0]=c->r[0]|0x00000000u; // 80218F6C
L_80218F70:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80218F70
  cmps(c,0,(int32_t)c->r[0],5); // 80218F74
  if (!crb(c,2)) { goto L_80218F8C; } // 80218F78
  c->r[0]=R32(c->r[4]+0x00000004u); // 80218F7C
  cmps(c,0,(int32_t)c->r[0],20); // 80218F80
  if (!crb(c,2)) { goto L_80218F8C; } // 80218F84
  goto L_80218FBC; // 80218F88
L_80218F8C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80218F8C
  c->r[3]=c->r[3]+0x00000001u; // 80218F90
  cmps(c,0,(int32_t)c->r[0],5); // 80218F94
  if (!crb(c,2)) { goto L_80218FAC; } // 80218F98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80218F9C
  cmps(c,0,(int32_t)c->r[0],20); // 80218FA0
  if (!crb(c,2)) { goto L_80218FAC; } // 80218FA4
  goto L_80218FBC; // 80218FA8
L_80218FAC:;
  c->r[4]=c->r[4]+0x00000010u; // 80218FAC
  c->r[3]=c->r[3]+0x00000001u; // 80218FB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80218F70; } // 80218FB4
  c->r[3]=0u+0xFFFFFFFFu; // 80218FB8
L_80218FBC:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80218FBC
  c->r[3]=c->r[31]+c->r[0]; // 80218FC0
  c->r[27]=R32(c->r[3]+0x00000290u); // 80218FC4
  c->r[3]=c->r[27]|c->r[27]; // 80218FC8
  c->lr=0x80218FD0u; f_8020D2A0(c); // 80218FCC
  c->r[0]=0u+0x00000001u; // 80218FD0
  W32(c->r[27]+0x00000014u,c->r[0]); // 80218FD4
  c->r[4]=0u+0x00000000u; // 80218FD8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80218FDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218FE0
  c->r[3]=c->r[31]+c->r[0]; // 80218FE4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80218FE8
  goto L_80219084; // 80218FEC
L_80218FF0:;
  c->r[4]=0u+0x80380000u; // 80218FF0
  c->r[0]=0u+0x00000025u; // 80218FF4
  c->r[4]=c->r[4]+0xFFFFF4E8u; // 80218FF8
  c->r[3]=0u+0x00000000u; // 80218FFC
  c->ctr=c->r[0]; // 80219000
  c->r[0]=c->r[0]|0x00000000u; // 80219004
L_80219008:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80219008
  cmps(c,0,(int32_t)c->r[0],5); // 8021900C
  if (!crb(c,2)) { goto L_80219024; } // 80219010
  c->r[0]=R32(c->r[4]+0x00000004u); // 80219014
  cmps(c,0,(int32_t)c->r[0],3); // 80219018
  if (!crb(c,2)) { goto L_80219024; } // 8021901C
  goto L_80219054; // 80219020
L_80219024:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80219024
  c->r[3]=c->r[3]+0x00000001u; // 80219028
  cmps(c,0,(int32_t)c->r[0],5); // 8021902C
  if (!crb(c,2)) { goto L_80219044; } // 80219030
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80219034
  cmps(c,0,(int32_t)c->r[0],3); // 80219038
  if (!crb(c,2)) { goto L_80219044; } // 8021903C
  goto L_80219054; // 80219040
L_80219044:;
  c->r[4]=c->r[4]+0x00000010u; // 80219044
  c->r[3]=c->r[3]+0x00000001u; // 80219048
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80219008; } // 8021904C
  c->r[3]=0u+0xFFFFFFFFu; // 80219050
L_80219054:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80219054
  c->r[3]=c->r[31]+c->r[0]; // 80219058
  c->r[27]=R32(c->r[3]+0x00000290u); // 8021905C
  c->r[3]=c->r[27]|c->r[27]; // 80219060
  c->lr=0x80219068u; f_8020D2A0(c); // 80219064
  c->r[0]=0u+0x00000001u; // 80219068
  W32(c->r[27]+0x00000014u,c->r[0]); // 8021906C
  c->r[4]=0u+0x00000000u; // 80219070
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80219074
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80219078
  c->r[3]=c->r[31]+c->r[0]; // 8021907C
  W32(c->r[3]+0x00000020u,c->r[4]); // 80219080
L_80219084:;
  c->r[11]=c->r[1]+0x00000030u; // 80219084
  c->lr=0x8021908Cu; f_800C2E90(c); // 80219088
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021908C
  c->lr=c->r[0]; // 80219090
  c->r[1]=c->r[1]+0x00000030u; // 80219094
  return; // 80219098
}

// fn_802190A0
void f_802190A0(Ctx* __restrict c) {
  trace_call(0x802190A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802190A0
  c->r[0]=c->lr; // 802190A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802190A8
  c->r[11]=c->r[1]+0x00000020u; // 802190AC
  c->lr=0x802190B4u; f_800C2E4C(c); // 802190B0
  c->r[31]=0u+0x803A0000u; // 802190B4
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 802190B8
  c->r[28]=c->r[4]+0x000000B4u; // 802190BC
  c->r[29]=0u+0xFFFFFFFFu; // 802190C0
  c->r[31]=c->r[31]+0x00006980u; // 802190C4
  c->r[27]=0u+0x00000000u; // 802190C8
  goto L_802190F4; // 802190CC
L_802190D0:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 802190D0
  c->r[3]=c->r[28]|c->r[28]; // 802190D4
  c->lr=0x802190DCu; f_800CA380(c); // 802190D8
  cmps(c,0,(int32_t)c->r[3],0); // 802190DC
  if (!crb(c,2)) { goto L_802190EC; } // 802190E0
  c->r[29]=c->r[27]|c->r[27]; // 802190E4
  goto L_802190FC; // 802190E8
L_802190EC:;
  c->r[31]=c->r[31]+0x00000004u; // 802190EC
  c->r[27]=c->r[27]+0x00000001u; // 802190F0
L_802190F4:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 802190F4
  if (crb(c,0)) { IRQCHK(c); goto L_802190D0; } // 802190F8
L_802190FC:;
  c->r[31]=0u+0x803A0000u; // 802190FC
  c->r[27]=0u+0x00000000u; // 80219100
  c->r[31]=c->r[31]+0x00007280u; // 80219104
L_80219108:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80219108
  c->r[3]=c->r[28]|c->r[28]; // 8021910C
  c->lr=0x80219114u; f_800CA380(c); // 80219110
  cmps(c,0,(int32_t)c->r[3],0); // 80219114
  if (!crb(c,2)) { goto L_80219124; } // 80219118
  c->r[29]=c->r[27]+c->r[30]; // 8021911C
  goto L_80219134; // 80219120
L_80219124:;
  c->r[27]=c->r[27]+0x00000001u; // 80219124
  c->r[31]=c->r[31]+0x00000004u; // 80219128
  cmps(c,0,(int32_t)c->r[27],10); // 8021912C
  if (crb(c,0)) { IRQCHK(c); goto L_80219108; } // 80219130
L_80219134:;
  c->r[11]=c->r[1]+0x00000020u; // 80219134
  c->r[3]=c->r[29]|c->r[29]; // 80219138
  c->lr=0x80219140u; f_800C2E98(c); // 8021913C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80219140
  c->lr=c->r[0]; // 80219144
  c->r[1]=c->r[1]+0x00000020u; // 80219148
  return; // 8021914C
}

// getSelectBtnNum__Q210homebutton10HomeButtonFv
void f_80219150(Ctx* __restrict c) {
  trace_call(0x80219150u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 80219150
  cmps(c,0,(int32_t)c->r[0],18); // 80219154
  if (crb(c,2)) { goto L_80219164; } // 80219158
  c->r[3]=0u+0xFFFFFFFFu; // 8021915C
  return; // 80219160
L_80219164:;
  c->r[3]=R32(c->r[3]+0x000000B8u); // 80219164
  return; // 80219168
}

// setAdjustFlag__Q210homebutton10HomeButtonFi
void f_80219170(Ctx* __restrict c) {
  trace_call(0x80219170u);
  c->r[5]=0u-c->r[4]; // 80219170
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219174
  c->r[5]=c->r[5]|c->r[4]; // 80219178
  c->r[4]=rotl(c->r[5],1)&0x00000001u; cr0(c,c->r[4]); // 8021917C
  c->r[0]=R8(c->r[3]+0x00000248u); // 80219180
  c->r[0]=(rotl(c->r[5],6)&0x00000020u)|(c->r[0]&~0x00000020u); // 80219184
  W8(c->r[3]+0x00000248u,c->r[0]); // 80219188
  W8(c->r[3]+0x0000008Fu,c->r[4]); // 8021918C
  if (crb(c,2)) { goto L_80219214; } // 80219190
  c->r[5]=R32(c->r[3]+0x00000004u); // 80219194
  c->r[4]=R32(c->r[3]+0x000001D8u); // 80219198
  {uint32_t ea=c->r[5]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021919C
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802191A0
  c->r[4]=R32(c->r[4]+0x00000010u); // 802191A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802191A8
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 802191AC
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 802191B0
  c->r[4]=R32(c->r[3]+0x00000004u); // 802191B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 802191B8
  c->r[0]=R32(c->r[4]+0x00000020u); // 802191BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 802191C0
  cmps(c,0,(int32_t)c->r[0],0); // 802191C4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 802191C8
  if (!crb(c,2)) { goto L_8021928C; } // 802191CC
  c->r[4]=R32(c->r[3]+0x000001DCu); // 802191D0
  c->r[4]=R32(c->r[4]+0x00000010u); // 802191D4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 802191D8
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 802191DC
  c->r[4]=R32(c->r[3]+0x000001E0u); // 802191E0
  c->r[4]=R32(c->r[4]+0x00000010u); // 802191E4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 802191E8
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 802191EC
  c->r[4]=R32(c->r[3]+0x000001E4u); // 802191F0
  c->r[4]=R32(c->r[4]+0x00000010u); // 802191F4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 802191F8
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 802191FC
  c->r[3]=R32(c->r[3]+0x000001E8u); // 80219200
  c->r[3]=R32(c->r[3]+0x00000010u); // 80219204
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80219208
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8021920C
  goto L_8021928C; // 80219210
L_80219214:;
  c->r[4]=R32(c->r[3]+0x000001D8u); // 80219214
  c->r[5]=0u+0x80380000u; // 80219218
  {uint32_t ea=c->r[5]+0xFFFFF760u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021921C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80219220
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80219224
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 80219228
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 8021922C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80219230
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80219234
  c->r[0]=R32(c->r[4]+0x00000020u); // 80219238
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8021923C
  cmps(c,0,(int32_t)c->r[0],0); // 80219240
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80219244
  if (!crb(c,2)) { goto L_8021928C; } // 80219248
  c->r[4]=R32(c->r[3]+0x000001DCu); // 8021924C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80219250
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 80219254
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 80219258
  c->r[4]=R32(c->r[3]+0x000001E0u); // 8021925C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80219260
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 80219264
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 80219268
  c->r[4]=R32(c->r[3]+0x000001E4u); // 8021926C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80219270
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 80219274
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 80219278
  c->r[3]=R32(c->r[3]+0x000001E8u); // 8021927C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80219280
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80219284
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80219288
L_8021928C:;
  c->r[1]=c->r[1]+0x00000020u; // 8021928C
  return; // 80219290
}

// fn_802192A0
void f_802192A0(Ctx* __restrict c) {
  trace_call(0x802192A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802192A0
  c->r[0]=c->lr; // 802192A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802192A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802192AC
  c->r[31]=c->r[6]|c->r[6]; // 802192B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802192B4
  c->r[30]=c->r[5]|c->r[5]; // 802192B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802192BC
  c->r[29]=c->r[3]|c->r[3]; // 802192C0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802192C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802192C8
  c->r[12]=R32(c->r[12]+0x00000028u); // 802192CC
  c->ctr=c->r[12]; // 802192D0
  if (true) { c->lr=0x802192D8u; dispatch(c,c->ctr); } // 802192D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802192D8
  c->r[12]=R32(c->r[12]+0x00000064u); // 802192DC
  c->ctr=c->r[12]; // 802192E0
  if (true) { c->lr=0x802192E8u; dispatch(c,c->ctr); } // 802192E4
  cmpu(c,0,c->r[30],0x00000001u); // 802192E8
  c->r[5]=R32(c->r[29]+0x00000008u); // 802192EC
  c->r[4]=c->r[3]|c->r[3]; // 802192F0
  if (crb(c,2)) { goto L_8021930C; } // 802192F4
  cmpu(c,0,c->r[30],0x00000002u); // 802192F8
  if (crb(c,2)) { goto L_8021931C; } // 802192FC
  cmps(c,0,(int32_t)c->r[30],0); // 80219300
  if (crb(c,2)) { goto L_80219328; } // 80219304
  goto L_8021933C; // 80219308
L_8021930C:;
  c->r[3]=c->r[5]|c->r[5]; // 8021930C
  c->r[5]=c->r[31]|c->r[31]; // 80219310
  c->lr=0x80219318u; f_80216290(c); // 80219314
  goto L_8021933C; // 80219318
L_8021931C:;
  c->r[3]=c->r[5]|c->r[5]; // 8021931C
  c->lr=0x80219324u; f_802170E0(c); // 80219320
  goto L_8021933C; // 80219324
L_80219328:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80219328
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8021932C
  if (crb(c,2)) { goto L_8021933C; } // 80219330
  c->r[3]=c->r[5]|c->r[5]; // 80219334
  c->lr=0x8021933Cu; f_80217BB0(c); // 80219338
L_8021933C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021933C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80219340
  c->r[30]=R32(c->r[1]+0x00000018u); // 80219344
  c->r[29]=R32(c->r[1]+0x00000014u); // 80219348
  c->lr=c->r[0]; // 8021934C
  c->r[1]=c->r[1]+0x00000020u; // 80219350
  return; // 80219354
}

// fn_80219360
void f_80219360(Ctx* __restrict c) {
  trace_call(0x80219360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219360
  c->r[0]=c->lr; // 80219364
  W32(c->r[1]+0x00000024u,c->r[0]); // 80219368
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021936C
  c->r[31]=c->r[3]|c->r[3]; // 80219370
  W32(c->r[1]+0x00000018u,c->r[30]); // 80219374
  W32(c->r[1]+0x00000014u,c->r[29]); // 80219378
  c->r[0]=R8(c->r[3]+0x0000009Au); // 8021937C
  cmps(c,0,(int32_t)c->r[0],0); // 80219380
  if (!crb(c,2)) { goto L_8021952C; } // 80219384
  c->r[0]=0u+0x00000001u; // 80219388
  W8(c->r[3]+0x0000009Au,c->r[0]); // 8021938C
  c->r[30]=c->r[31]|c->r[31]; // 80219390
  c->r[29]=0u+0x00000000u; // 80219394
L_80219398:;
  c->r[3]=R32(c->r[30]+0x0000024Cu); // 80219398
  c->lr=0x802193A0u; f_8020F780(c); // 8021939C
  c->r[29]=c->r[29]+0x00000001u; // 802193A0
  c->r[30]=c->r[30]+0x00000004u; // 802193A4
  cmps(c,0,(int32_t)c->r[29],4); // 802193A8
  if (crb(c,0)) { IRQCHK(c); goto L_80219398; } // 802193AC
  c->r[4]=R32(c->r[31]+0x00000014u); // 802193B0
  c->r[3]=0u+0x00000000u; // 802193B4
  W8(c->r[31]+0x00000095u,c->r[3]); // 802193B8
  c->r[0]=c->r[4]+0xFFFFFFFBu; // 802193BC
  cmpu(c,0,c->r[0],0x00000002u); // 802193C0
  W8(c->r[31]+0x00000096u,c->r[3]); // 802193C4
  W8(c->r[31]+0x00000098u,c->r[3]); // 802193C8
  W8(c->r[31]+0x00000099u,c->r[3]); // 802193CC
  if (!crb(c,1)) { goto L_80219404; } // 802193D0
  cmps(c,0,(int32_t)c->r[4],0); // 802193D4
  if (crb(c,2)) { goto L_802193F0; } // 802193D8
  cmps(c,0,(int32_t)c->r[4],1); // 802193DC
  if (crb(c,2)) { goto L_802193F8; } // 802193E0
  cmps(c,0,(int32_t)c->r[4],3); // 802193E4
  if (crb(c,2)) { goto L_80219404; } // 802193E8
  goto L_802194C4; // 802193EC
L_802193F0:;
  c->r[0]=0u+0x00000001u; // 802193F0
  W8(c->r[31]+0x00000095u,c->r[0]); // 802193F4
L_802193F8:;
  c->r[0]=0u+0x00000001u; // 802193F8
  W8(c->r[31]+0x00000096u,c->r[0]); // 802193FC
  goto L_802194C4; // 80219400
L_80219404:;
  cmps(c,0,(int32_t)c->r[4],3); // 80219404
  if (!crb(c,2)) { goto L_80219418; } // 80219408
  c->r[0]=R32(c->r[31]+0x00000018u); // 8021940C
  cmps(c,0,(int32_t)c->r[0],5); // 80219410
  if (crb(c,2)) { goto L_8021942C; } // 80219414
L_80219418:;
  cmps(c,0,(int32_t)c->r[4],5); // 80219418
  if (!crb(c,2)) { goto L_80219440; } // 8021941C
  c->r[0]=R8(c->r[31]+0x00000091u); // 80219420
  cmps(c,0,(int32_t)c->r[0],0); // 80219424
  if (!crb(c,2)) { goto L_80219440; } // 80219428
L_8021942C:;
  c->r[3]=c->r[31]+0x00000588u; // 8021942C
  c->lr=0x80219434u; f_80244010(c); // 80219430
  c->r[3]=R32(c->r[31]+0x000001ACu); // 80219434
  c->lr=0x8021943Cu; f_80262F90(c); // 80219438
  goto L_802194BC; // 8021943C
L_80219440:;
  c->r[0]=R8(c->r[31]+0x00000092u); // 80219440
  cmps(c,0,(int32_t)c->r[0],0); // 80219444
  if (!crb(c,2)) { goto L_802194B4; } // 80219448
  cmps(c,0,(int32_t)c->r[4],3); // 8021944C
  if (!crb(c,1)) { goto L_802194B4; } // 80219450
  c->r[0]=0u+0x00000001u; // 80219454
  W8(c->r[31]+0x00000098u,c->r[0]); // 80219458
  c->lr=0x80219460u; f_80262F80(c); // 8021945C
  cmps(c,0,(int32_t)c->r[3],0); // 80219460
  if (!crb(c,2)) { goto L_802194BC; } // 80219464
  c->r[3]=c->r[31]+0x00000588u; // 80219468
  c->lr=0x80219470u; f_80244010(c); // 8021946C
  c->r[3]=c->r[31]+0x00000588u; // 80219470
  c->r[4]=0u+0x00000001u; // 80219474
  c->lr=0x8021947Cu; f_80244440(c); // 80219478
  c->r[4]=0u+0x80000000u; // 8021947C
  c->r[7]=0u+0x80210000u; // 80219480
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80219484
  c->r[3]=0u+0x10620000u; // 80219488
  c->r[4]=c->r[3]+0x00004DD3u; // 8021948C
  c->r[7]=c->r[7]+0x00004CA0u; // 80219490
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80219494
  c->r[3]=c->r[31]+0x00000588u; // 80219498
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8021949C
  c->r[5]=0u+0x00000000u; // 802194A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802194A4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802194A8
  c->lr=0x802194B0u; f_80243F10(c); // 802194AC
  goto L_802194BC; // 802194B0
L_802194B4:;
  c->r[3]=R32(c->r[31]+0x000001ACu); // 802194B4
  c->lr=0x802194BCu; f_80262F90(c); // 802194B8
L_802194BC:;
  c->r[0]=0u+0x00000001u; // 802194BC
  W8(c->r[31]+0x00000099u,c->r[0]); // 802194C0
L_802194C4:;
  c->r[3]=R32(c->r[31]+0x000003F8u); // 802194C4
  c->r[0]=0u+0x43300000u; // 802194C8
  c->r[4]=0u+0x80380000u; // 802194CC
  c->r[6]=0u+0x00000013u; // 802194D0
  c->r[3]=c->r[3]^0x80000000u; // 802194D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802194D8
  {uint32_t ea=c->r[4]+0xFFFFF790u; c->f[1]=RF64(ea);} // 802194DC
  c->r[5]=0u+0x00000001u; // 802194E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802194E4
  c->r[3]=0u+0x00000002u; // 802194E8
  c->r[4]=R32(c->r[31]+0x00000004u); // 802194EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802194F0
  W32(c->r[31]+0x00000014u,c->r[6]); // 802194F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802194F8
  W32(c->r[31]+0x000003FCu,c->r[5]); // 802194FC
  W32(c->r[31]+0x000000B8u,c->r[3]); // 80219500
  {uint32_t ea=c->r[31]+0x0000073Cu; WF32(ea,c->f[0]);} // 80219504
  c->r[12]=R32(c->r[4]+0x00000014u); // 80219508
  cmps(c,0,(int32_t)c->r[12],0); // 8021950C
  if (crb(c,2)) { goto L_8021952C; } // 80219510
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80219514
  c->r[3]=0u+0x00000003u; // 80219518
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8021951C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80219520
  c->ctr=c->r[12]; // 80219524
  if (true) { c->lr=0x8021952Cu; dispatch(c,c->ctr); } // 80219528
L_8021952C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021952C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80219530
  c->r[30]=R32(c->r[1]+0x00000018u); // 80219534
  c->r[29]=R32(c->r[1]+0x00000014u); // 80219538
  c->lr=c->r[0]; // 8021953C
  c->r[1]=c->r[1]+0x00000020u; // 80219540
  return; // 80219544
}

// update_sound__Q210homebutton10HomeButtonFv
void f_80219550(Ctx* __restrict c) {
  trace_call(0x80219550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219550
  c->r[0]=c->lr; // 80219554
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021955C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80219560
  c->r[30]=c->r[3]|c->r[3]; // 80219564
  c->lr=0x8021956Cu; f_80210990(c); // 80219568
  c->r[31]=0u+0x00000000u; // 8021956C
L_80219570:;
  c->r[3]=R32(c->r[30]+0x0000024Cu); // 80219570
  c->lr=0x80219578u; f_8020F4B0(c); // 80219574
  c->r[31]=c->r[31]+0x00000001u; // 80219578
  c->r[30]=c->r[30]+0x00000004u; // 8021957C
  cmps(c,0,(int32_t)c->r[31],4); // 80219580
  if (crb(c,0)) { IRQCHK(c); goto L_80219570; } // 80219584
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021958C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80219590
  c->lr=c->r[0]; // 80219594
  c->r[1]=c->r[1]+0x00000010u; // 80219598
  return; // 8021959C
}

// GetStepCurveValue__27@unnamed@lyt_animation_cpp@FfPCQ46nw4hbm3lyt3res7StepKeyUl
void f_802195A0(Ctx* __restrict c) {
  trace_call(0x802195A0u);
  cmpu(c,0,c->r[4],0x00000001u); // 802195A0
  if (crb(c,2)) { goto L_802195B8; } // 802195A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802195A8
  fcmp(c,0,c->f[1],c->f[0]); // 802195AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802195B0
  if (!crb(c,2)) { goto L_802195C0; } // 802195B4
L_802195B8:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 802195B8
  return; // 802195BC
L_802195C0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802195C0
  c->r[5]=c->r[3]+c->r[0]; // 802195C4
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802195C8
  fcmp(c,0,c->f[1],c->f[0]); // 802195CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802195D0
  if (!crb(c,2)) { goto L_802195E0; } // 802195D4
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 802195D8
  return; // 802195DC
L_802195E0:;
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 802195E0
  c->r[6]=0u+0x00000000u; // 802195E4
  goto L_80219624; // 802195E8
L_802195EC:;
  c->r[4]=c->r[6]+c->r[5]; // 802195EC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802195F0
  c->r[4]=c->r[0]+c->r[4]; // 802195F4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 802195F8
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802195FC
  c->r[4]=sraw(c,c->r[4],1); // 80219600
  fcmp(c,0,c->f[1],c->f[0]); // 80219604
  c->r[0]=c->cr; // 80219608
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8021960C
  if (crb(c,2)) { goto L_80219618; } // 80219610
  c->r[5]=c->r[4]|c->r[4]; // 80219614
L_80219618:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219618
  if (!crb(c,2)) { goto L_80219624; } // 8021961C
  c->r[6]=c->r[4]|c->r[4]; // 80219620
L_80219624:;
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80219624
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80219628
  if (crb(c,2)) { goto L_80219638; } // 8021962C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 80219630
  if (!crb(c,2)) { IRQCHK(c); goto L_802195EC; } // 80219634
L_80219638:;
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80219638
  c->r[4]=0u+0x80380000u; // 8021963C
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 80219640
  c->r[0]=0u+0x00000000u; // 80219644
  {uint32_t ea=c->r[4]+0xFFFFF800u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219648
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8021964C
  fcmp(c,0,c->f[0],c->f[1]); // 80219650
  if (!crb(c,0)) { goto L_8021966C; } // 80219654
  c->r[4]=0u+0x80380000u; // 80219658
  {uint32_t ea=c->r[4]+0xFFFFF804u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021965C
  fcmp(c,0,c->f[1],c->f[0]); // 80219660
  if (!crb(c,0)) { goto L_8021966C; } // 80219664
  c->r[0]=0u+0x00000001u; // 80219668
L_8021966C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021966C
  if (crb(c,2)) { goto L_80219680; } // 80219670
  c->r[3]=c->r[3]+c->r[5]; // 80219674
  c->r[3]=R16(c->r[3]+0x00000004u); // 80219678
  return; // 8021967C
L_80219680:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 80219680
  c->r[3]=c->r[3]+c->r[0]; // 80219684
  c->r[3]=R16(c->r[3]+0x00000004u); // 80219688
  return; // 8021968C
}

// GetHermiteCurveValue__27@unnamed@lyt_animation_cpp@FfPCQ46nw4hbm3lyt3res10HermiteKeyUl
void f_80219690(Ctx* __restrict c) {
  trace_call(0x80219690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219690
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80219694
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80219698
  cmpu(c,0,c->r[4],0x00000001u); // 8021969C
  c->r[6]=0u+0x80380000u; // 802196A0
  c->r[6]=c->r[6]+0xFFFFF800u; // 802196A4
  if (crb(c,2)) { goto L_802196BC; } // 802196A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802196AC
  fcmp(c,0,c->f[1],c->f[0]); // 802196B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802196B4
  if (!crb(c,2)) { goto L_802196C4; } // 802196B8
L_802196BC:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802196BC
  goto L_80219844; // 802196C0
L_802196C4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802196C4
  c->r[5]=c->r[3]+c->r[0]; // 802196C8
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802196CC
  fcmp(c,0,c->f[1],c->f[0]); // 802196D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802196D4
  if (!crb(c,2)) { goto L_802196E4; } // 802196D8
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802196DC
  goto L_80219844; // 802196E0
L_802196E4:;
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 802196E4
  c->r[7]=0u+0x00000000u; // 802196E8
  goto L_8021972C; // 802196EC
L_802196F0:;
  c->r[5]=c->r[7]+c->r[8]; // 802196F0
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 802196F4
  c->r[0]=c->r[0]+c->r[5]; // 802196F8
  c->r[5]=sraw(c,c->r[0],1); // 802196FC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80219700
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80219704
  fcmp(c,0,c->f[1],c->f[0]); // 80219708
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021970C
  c->r[0]=c->cr; // 80219710
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80219714
  if (crb(c,2)) { goto L_80219720; } // 80219718
  c->r[8]=c->r[5]|c->r[5]; // 8021971C
L_80219720:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219720
  if (!crb(c,2)) { goto L_8021972C; } // 80219724
  c->r[7]=c->r[5]|c->r[5]; // 80219728
L_8021972C:;
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 8021972C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80219730
  if (crb(c,2)) { goto L_80219740; } // 80219734
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 80219738
  if (!crb(c,2)) { IRQCHK(c); goto L_802196F0; } // 8021973C
L_80219740:;
  c->r[5]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80219740
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219744
  c->r[0]=0u+0x00000000u; // 80219748
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 8021974C
  c->r[9]=c->r[3]+c->r[5]; // 80219750
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80219754
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 80219758
  c->r[5]=c->r[3]+c->r[5]; // 8021975C
  fcmp(c,0,c->f[0],c->f[2]); // 80219760
  if (!crb(c,0)) { goto L_80219778; } // 80219764
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219768
  fcmp(c,0,c->f[2],c->f[0]); // 8021976C
  if (!crb(c,0)) { goto L_80219778; } // 80219770
  c->r[0]=0u+0x00000001u; // 80219774
L_80219778:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219778
  if (crb(c,2)) { goto L_802197B8; } // 8021977C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80219780
  cmpu(c,0,c->r[8],c->r[0]); // 80219784
  if (!crb(c,0)) { goto L_802197B0; } // 80219788
  c->r[0]=c->r[8]+0x00000001u; // 8021978C
  {uint32_t ea=c->r[9]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219790
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80219794
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80219798
  fcmp(c,0,c->f[1],c->f[0]); // 8021979C
  if (!crb(c,2)) { goto L_802197B0; } // 802197A0
  c->r[3]=c->r[3]+c->r[0]; // 802197A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802197A8
  goto L_80219844; // 802197AC
L_802197B0:;
  {uint32_t ea=c->r[9]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802197B0
  goto L_80219844; // 802197B4
L_802197B8:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802197B8
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802197BC
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 802197C0
  {uint32_t ea=c->r[6]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802197C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802197C8
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802197CC
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802197D0
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 802197D4
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 802197D8
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802197DC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802197E0
  {uint32_t ea=c->r[9]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 802197E4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802197E8
  {uint32_t ea=c->r[9]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802197EC
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 802197F0
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 802197F4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 802197F8
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 802197FC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80219800
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 80219804
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 80219808
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 8021980C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 80219810
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 80219814
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 80219818
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8021981C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80219820
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 80219824
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 80219828
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 8021982C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 80219830
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 80219834
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80219838
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8021983C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80219840
L_80219844:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80219844
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80219848
  c->r[1]=c->r[1]+0x00000020u; // 8021984C
  return; // 80219850
}

// GetFrameSize__Q36nw4hbm3lyt13AnimTransformCFv
void f_80219860(Ctx* __restrict c) {
  trace_call(0x80219860u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80219860
  c->r[3]=R16(c->r[3]+0x00000008u); // 80219864
  return; // 80219868
}

// __ct__Q36nw4hbm3lyt18AnimTransformBasicFv
void f_80219870(Ctx* __restrict c) {
  trace_call(0x80219870u);
  c->r[4]=0u+0x80380000u; // 80219870
  c->r[0]=0u+0x00000000u; // 80219874
  {uint32_t ea=c->r[4]+0xFFFFF818u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219878
  c->r[4]=0u+0x803A0000u; // 8021987C
  c->r[4]=c->r[4]+0x00007600u; // 80219880
  W32(c->r[3]+0x00000004u,c->r[0]); // 80219884
  W32(c->r[3]+0x00000008u,c->r[0]); // 80219888
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8021988C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80219890
  W32(c->r[3]+0x00000000u,c->r[4]); // 80219894
  W32(c->r[3]+0x00000014u,c->r[0]); // 80219898
  W32(c->r[3]+0x00000018u,c->r[0]); // 8021989C
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 802198A0
  return; // 802198A4
}

// __dt__Q36nw4hbm3lyt18AnimTransformBasicFv
void f_802198B0(Ctx* __restrict c) {
  trace_call(0x802198B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802198B0
  c->r[0]=c->lr; // 802198B4
  cmps(c,0,(int32_t)c->r[3],0); // 802198B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802198BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802198C0
  c->r[31]=c->r[4]|c->r[4]; // 802198C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802198C8
  c->r[30]=c->r[3]|c->r[3]; // 802198CC
  if (crb(c,2)) { goto L_80219920; } // 802198D0
  c->r[4]=R32(c->r[3]+0x00000018u); // 802198D4
  c->r[5]=0u+0x803A0000u; // 802198D8
  c->r[5]=c->r[5]+0x00007600u; // 802198DC
  W32(c->r[3]+0x00000000u,c->r[5]); // 802198E0
  cmps(c,0,(int32_t)c->r[4],0); // 802198E4
  if (crb(c,2)) { goto L_802198F8; } // 802198E8
  c->r[3]=0u+0x80490000u; // 802198EC
  c->r[3]=R32(c->r[3]+0x00001A20u); // 802198F0
  c->lr=0x802198F8u; f_8023B6E0(c); // 802198F4
L_802198F8:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 802198F8
  cmps(c,0,(int32_t)c->r[4],0); // 802198FC
  if (crb(c,2)) { goto L_80219910; } // 80219900
  c->r[3]=0u+0x80490000u; // 80219904
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80219908
  c->lr=0x80219910u; f_8023B6E0(c); // 8021990C
L_80219910:;
  cmps(c,0,(int32_t)c->r[31],0); // 80219910
  if (!crb(c,1)) { goto L_80219920; } // 80219914
  c->r[3]=c->r[30]|c->r[30]; // 80219918
  c->lr=0x80219920u; f_800C2AC0(c); // 8021991C
L_80219920:;
  c->r[3]=c->r[30]|c->r[30]; // 80219920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219924
  c->r[30]=R32(c->r[1]+0x00000008u); // 80219928
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021992C
  c->lr=c->r[0]; // 80219930
  c->r[1]=c->r[1]+0x00000010u; // 80219934
  return; // 80219938
}

// SetResource__Q36nw4hbm3lyt18AnimTransformBasicFPCQ46nw4hbm3lyt3res14AnimationBlockPQ36nw4hbm3lyt16ResourceAccessor
void f_80219940(Ctx* __restrict c) {
  trace_call(0x80219940u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219940
  c->r[0]=c->lr; // 80219944
  W32(c->r[1]+0x00000034u,c->r[0]); // 80219948
  c->r[11]=c->r[1]+0x00000030u; // 8021994C
  c->lr=0x80219954u; f_800C2E40(c); // 80219950
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 80219954
  c->r[0]=0u+0x00000000u; // 80219958
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8021995C
  c->r[30]=c->r[3]|c->r[3]; // 80219960
  cmps(c,0,(int32_t)c->r[6],0); // 80219964
  c->r[31]=c->r[4]|c->r[4]; // 80219968
  W32(c->r[3]+0x00000014u,c->r[0]); // 8021996C
  c->r[24]=c->r[5]|c->r[5]; // 80219970
  if (crb(c,2)) { goto L_802199F8; } // 80219974
  c->r[3]=0u+0x80490000u; // 80219978
  c->r[4]=rotl(c->r[6],2)&0x0003FFFCu; // 8021997C
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80219980
  c->lr=0x80219988u; f_8023B6D0(c); // 80219984
  cmps(c,0,(int32_t)c->r[3],0); // 80219988
  W32(c->r[30]+0x00000014u,c->r[3]); // 8021998C
  if (crb(c,2)) { goto L_802199F8; } // 80219990
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80219994
  c->r[25]=0u+0x00000000u; // 80219998
  c->r[26]=0u+0x00000000u; // 8021999C
  c->r[29]=0u+0x74690000u; // 802199A0
  c->r[28]=c->r[3]+0x00000014u; // 802199A4
  c->r[27]=c->r[28]|c->r[28]; // 802199A8
  goto L_802199E8; // 802199AC
L_802199B0:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 802199B0
  c->r[3]=c->r[24]|c->r[24]; // 802199B4
  c->r[0]=R32(c->r[27]+0x00000000u); // 802199B8
  c->r[4]=c->r[29]+0x00006D67u; // 802199BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802199C0
  c->r[6]=0u+0x00000000u; // 802199C4
  c->r[5]=c->r[28]+c->r[0]; // 802199C8
  c->ctr=c->r[12]; // 802199CC
  if (true) { c->lr=0x802199D4u; dispatch(c,c->ctr); } // 802199D0
  c->r[4]=R32(c->r[30]+0x00000014u); // 802199D4
  c->r[27]=c->r[27]+0x00000004u; // 802199D8
  c->r[25]=c->r[25]+0x00000001u; // 802199DC
  W32(c->r[4]+c->r[26],c->r[3]); // 802199E0
  c->r[26]=c->r[26]+0x00000004u; // 802199E4
L_802199E8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802199E8
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 802199EC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802199F0
  if (crb(c,0)) { IRQCHK(c); goto L_802199B0; } // 802199F4
L_802199F8:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 802199F8
  c->r[3]=0u+0x80490000u; // 802199FC
  c->r[3]=R32(c->r[3]+0x00001A20u); // 80219A00
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80219A04
  c->lr=0x80219A0Cu; f_8023B6D0(c); // 80219A08
  cmps(c,0,(int32_t)c->r[3],0); // 80219A0C
  W32(c->r[30]+0x00000018u,c->r[3]); // 80219A10
  if (crb(c,2)) { goto L_80219A70; } // 80219A14
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 80219A18
  c->r[4]=0u+0x00000000u; // 80219A1C
  W16(c->r[30]+0x0000001Cu,c->r[0]); // 80219A20
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80219A24
  c->lr=0x80219A2Cu; f_80004350(c); // 80219A28
  c->r[5]=0u+0x00000000u; // 80219A2C
  c->r[4]=0u+0x00000000u; // 80219A30
  goto L_80219A60; // 80219A34
L_80219A38:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 80219A38
  c->r[0]=rotl(c->r[5],4)&0x000FFFF0u; // 80219A3C
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 80219A40
  if (crb(c,2)) { goto L_80219A5C; } // 80219A44
  W32(c->r[3]+0x00000000u,c->r[4]); // 80219A48
  W32(c->r[3]+0x00000004u,c->r[4]); // 80219A4C
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 80219A50
  W32(c->r[3]+0x00000008u,c->r[4]); // 80219A54
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 80219A58
L_80219A5C:;
  c->r[5]=c->r[5]+0x00000001u; // 80219A5C
L_80219A60:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 80219A60
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 80219A64
  cmpu(c,0,c->r[3],c->r[0]); // 80219A68
  if (crb(c,0)) { IRQCHK(c); goto L_80219A38; } // 80219A6C
L_80219A70:;
  c->r[11]=c->r[1]+0x00000030u; // 80219A70
  c->lr=0x80219A78u; f_800C2E8C(c); // 80219A74
  c->r[0]=R32(c->r[1]+0x00000034u); // 80219A78
  c->lr=c->r[0]; // 80219A7C
  c->r[1]=c->r[1]+0x00000030u; // 80219A80
  return; // 80219A84
}

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt4Paneb
void f_80219A90(Ctx* __restrict c) {
  trace_call(0x80219A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219A90
  c->r[0]=c->lr; // 80219A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80219A98
  c->r[11]=c->r[1]+0x00000020u; // 80219A9C
  c->lr=0x80219AA4u; f_800C2E4C(c); // 80219AA0
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80219AA4
  c->r[27]=c->r[3]|c->r[3]; // 80219AA8
  c->r[28]=c->r[4]|c->r[4]; // 80219AAC
  c->r[29]=c->r[5]|c->r[5]; // 80219AB0
  c->r[0]=R32(c->r[6]+0x00000010u); // 80219AB4
  c->r[30]=0u+0x00000000u; // 80219AB8
  c->r[31]=c->r[6]+c->r[0]; // 80219ABC
  goto L_80219B64; // 80219AC0
L_80219AC4:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 80219AC4
  c->r[0]=R32(c->r[31]+c->r[0]); // 80219AC8
  c->r[4]=c->r[4]+c->r[0]; // 80219ACC
  c->r[0]=R8(c->r[4]+0x00000015u); // 80219AD0
  cmps(c,0,(int32_t)c->r[0],0); // 80219AD4
  if (!crb(c,2)) { goto L_80219B20; } // 80219AD8
  c->r[12]=R32(c->r[28]+0x00000000u); // 80219ADC
  c->r[3]=c->r[28]|c->r[28]; // 80219AE0
  c->r[5]=c->r[29]|c->r[29]; // 80219AE4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80219AE8
  c->ctr=c->r[12]; // 80219AEC
  if (true) { c->lr=0x80219AF4u; dispatch(c,c->ctr); } // 80219AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80219AF4
  if (crb(c,2)) { goto L_80219B60; } // 80219AF8
  c->r[0]=R32(c->r[27]+0x00000018u); // 80219AFC
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 80219B00
  c->r[4]=c->r[0]+c->r[5]; // 80219B04
  W32(c->r[4]+0x00000008u,c->r[27]); // 80219B08
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 80219B0C
  c->r[0]=R32(c->r[27]+0x00000018u); // 80219B10
  c->r[4]=c->r[0]+c->r[5]; // 80219B14
  c->lr=0x80219B1Cu; f_802205D0(c); // 80219B18
  goto L_80219B60; // 80219B1C
L_80219B20:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80219B20
  c->r[3]=c->r[28]|c->r[28]; // 80219B24
  c->r[5]=c->r[29]|c->r[29]; // 80219B28
  c->r[12]=R32(c->r[12]+0x00000040u); // 80219B2C
  c->ctr=c->r[12]; // 80219B30
  if (true) { c->lr=0x80219B38u; dispatch(c,c->ctr); } // 80219B34
  cmps(c,0,(int32_t)c->r[3],0); // 80219B38
  if (crb(c,2)) { goto L_80219B60; } // 80219B3C
  c->r[0]=R32(c->r[27]+0x00000018u); // 80219B40
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 80219B44
  c->r[4]=c->r[0]+c->r[5]; // 80219B48
  W32(c->r[4]+0x00000008u,c->r[27]); // 80219B4C
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 80219B50
  c->r[0]=R32(c->r[27]+0x00000018u); // 80219B54
  c->r[4]=c->r[0]+c->r[5]; // 80219B58
  c->lr=0x80219B60u; f_8021F660(c); // 80219B5C
L_80219B60:;
  c->r[30]=c->r[30]+0x00000001u; // 80219B60
L_80219B64:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 80219B64
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80219B68
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 80219B6C
  cmpu(c,0,c->r[3],c->r[0]); // 80219B70
  if (crb(c,0)) { IRQCHK(c); goto L_80219AC4; } // 80219B74
  c->r[11]=c->r[1]+0x00000020u; // 80219B78
  c->lr=0x80219B80u; f_800C2E98(c); // 80219B7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80219B80
  c->lr=c->r[0]; // 80219B84
  c->r[1]=c->r[1]+0x00000020u; // 80219B88
  return; // 80219B8C
}

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt8Material
void f_80219B90(Ctx* __restrict c) {
  trace_call(0x80219B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219B90
  c->r[0]=c->lr; // 80219B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80219B98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80219B9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80219BA0
  c->r[30]=0u+0x00000000u; // 80219BA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80219BA8
  c->r[29]=c->r[4]|c->r[4]; // 80219BAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80219BB0
  c->r[28]=c->r[3]|c->r[3]; // 80219BB4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80219BB8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80219BBC
  c->r[31]=c->r[5]+c->r[0]; // 80219BC0
  goto L_80219C18; // 80219BC4
L_80219BC8:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 80219BC8
  c->r[0]=R32(c->r[31]+c->r[0]); // 80219BCC
  c->r[4]=c->r[4]+c->r[0]; // 80219BD0
  c->r[0]=R8(c->r[4]+0x00000015u); // 80219BD4
  cmpu(c,0,c->r[0],0x00000001u); // 80219BD8
  if (!crb(c,2)) { goto L_80219C14; } // 80219BDC
  c->r[3]=c->r[29]+0x00000004u; // 80219BE0
  c->lr=0x80219BE8u; f_8021A6A0(c); // 80219BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80219BE8
  if (crb(c,2)) { goto L_80219C14; } // 80219BEC
  c->r[0]=R32(c->r[28]+0x00000018u); // 80219BF0
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 80219BF4
  c->r[3]=c->r[29]|c->r[29]; // 80219BF8
  c->r[4]=c->r[0]+c->r[5]; // 80219BFC
  W32(c->r[4]+0x00000008u,c->r[28]); // 80219C00
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 80219C04
  c->r[0]=R32(c->r[28]+0x00000018u); // 80219C08
  c->r[4]=c->r[0]+c->r[5]; // 80219C0C
  c->lr=0x80219C14u; f_8021F660(c); // 80219C10
L_80219C14:;
  c->r[30]=c->r[30]+0x00000001u; // 80219C14
L_80219C18:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80219C18
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80219C1C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 80219C20
  cmpu(c,0,c->r[3],c->r[0]); // 80219C24
  if (crb(c,0)) { IRQCHK(c); goto L_80219BC8; } // 80219C28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80219C2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80219C30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80219C34
  c->r[29]=R32(c->r[1]+0x00000014u); // 80219C38
  c->r[28]=R32(c->r[1]+0x00000010u); // 80219C3C
  c->lr=c->r[0]; // 80219C40
  c->r[1]=c->r[1]+0x00000020u; // 80219C44
  return; // 80219C48
}

// Animate__Q36nw4hbm3lyt18AnimTransformBasicFUlPQ36nw4hbm3lyt4Pane
void f_80219C50(Ctx* __restrict c) {
  trace_call(0x80219C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219C50
  c->r[0]=c->lr; // 80219C54
  W32(c->r[1]+0x00000064u,c->r[0]); // 80219C58
  c->r[11]=c->r[1]+0x00000040u; // 80219C5C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80219C60
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80219C64
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80219C68
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80219C6C
  c->lr=0x80219C74u; f_800C2E38(c); // 80219C70
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 80219C74
  c->r[6]=0u+0x80380000u; // 80219C78
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80219C7C
  {uint32_t ea=c->r[6]+0xFFFFF81Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80219C80
  c->r[0]=R32(c->r[7]+0x00000010u); // 80219C84
  c->r[24]=c->r[3]|c->r[3]; // 80219C88
  c->r[25]=c->r[5]|c->r[5]; // 80219C8C
  c->r[31]=c->r[1]+0x00000008u; // 80219C90
  c->r[0]=c->r[7]+c->r[0]; // 80219C94
  c->r[26]=0u+0x00000000u; // 80219C98
  c->r[0]=R32(c->r[4]+c->r[0]); // 80219C9C
  c->r[30]=c->r[7]+c->r[0]; // 80219CA0
  c->r[28]=c->r[30]+0x00000018u; // 80219CA4
  goto L_80219DFC; // 80219CA8
L_80219CAC:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80219CAC
  c->r[3]=R32(c->r[30]+c->r[0]); // 80219CB0
  c->r[29]=c->r[30]+c->r[0]; // 80219CB4
  c->r[27]=c->r[29]+0x00000008u; // 80219CB8
  c->r[0]=c->r[3]+0xADB40000u; // 80219CBC
  cmpu(c,0,c->r[0],0x00005041u); // 80219CC0
  if (crb(c,2)) { goto L_80219CDC; } // 80219CC4
  cmpu(c,0,c->r[0],0x00005649u); // 80219CC8
  if (crb(c,2)) { goto L_80219D2C; } // 80219CCC
  cmpu(c,0,c->r[0],0x00005643u); // 80219CD0
  if (crb(c,2)) { goto L_80219D88; } // 80219CD4
  goto L_80219DF4; // 80219CD8
L_80219CDC:;
  {uint32_t ea=c->r[24]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 80219CDC
  c->r[23]=0u+0x00000000u; // 80219CE0
  goto L_80219D1C; // 80219CE4
L_80219CE8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80219CE8
  c->f[1]=c->f[30]; // 80219CEC
  c->r[22]=c->r[29]+c->r[0]; // 80219CF0
  c->r[0]=R32(c->r[22]+0x00000008u); // 80219CF4
  c->r[4]=R16(c->r[22]+0x00000004u); // 80219CF8
  c->r[3]=c->r[22]+c->r[0]; // 80219CFC
  c->lr=0x80219D04u; f_80219690(c); // 80219D00
  c->r[0]=R8(c->r[22]+0x00000001u); // 80219D04
  c->r[27]=c->r[27]+0x00000004u; // 80219D08
  c->r[23]=c->r[23]+0x00000001u; // 80219D0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80219D10
  c->r[3]=c->r[25]+c->r[0]; // 80219D14
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 80219D18
L_80219D1C:;
  c->r[0]=R8(c->r[29]+0x00000004u); // 80219D1C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80219D20
  if (crb(c,0)) { IRQCHK(c); goto L_80219CE8; } // 80219D24
  goto L_80219DF4; // 80219D28
L_80219D2C:;
  {uint32_t ea=c->r[24]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 80219D2C
  c->r[23]=0u+0x00000000u; // 80219D30
  goto L_80219D78; // 80219D34
L_80219D38:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80219D38
  c->f[1]=c->f[30]; // 80219D3C
  c->r[3]=c->r[29]+c->r[0]; // 80219D40
  c->r[0]=R32(c->r[3]+0x00000008u); // 80219D44
  c->r[4]=R16(c->r[3]+0x00000004u); // 80219D48
  c->r[3]=c->r[3]+c->r[0]; // 80219D4C
  c->lr=0x80219D54u; f_802195A0(c); // 80219D50
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 80219D54
  c->r[0]=R8(c->r[25]+0x000000CFu); // 80219D58
  c->r[3]=0u-c->r[4]; // 80219D5C
  c->r[27]=c->r[27]+0x00000004u; // 80219D60
  c->r[3]=c->r[3]|c->r[4]; // 80219D64
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80219D68
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 80219D6C
  W8(c->r[25]+0x000000CFu,c->r[0]); // 80219D70
  c->r[23]=c->r[23]+0x00000001u; // 80219D74
L_80219D78:;
  c->r[0]=R8(c->r[29]+0x00000004u); // 80219D78
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80219D7C
  if (crb(c,0)) { IRQCHK(c); goto L_80219D38; } // 80219D80
  goto L_80219DF4; // 80219D84
L_80219D88:;
  c->r[0]=R8(c->r[29]+0x00000004u); // 80219D88
  c->r[23]=0u+0x00000000u; // 80219D8C
  {uint32_t ea=c->r[24]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 80219D90
  cmps(c,0,(int32_t)c->r[0],0); // 80219D94
  if (!crb(c,1)) { goto L_80219DF4; } // 80219D98
  goto L_80219DE8; // 80219D9C
L_80219DA0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80219DA0
  c->f[1]=c->f[30]; // 80219DA4
  c->r[22]=c->r[29]+c->r[0]; // 80219DA8
  c->r[0]=R32(c->r[22]+0x00000008u); // 80219DAC
  c->r[4]=R16(c->r[22]+0x00000004u); // 80219DB0
  c->r[3]=c->r[22]+c->r[0]; // 80219DB4
  c->lr=0x80219DBCu; f_80219690(c); // 80219DB8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 80219DBC
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,1,2);} // 80219DC0
  c->r[3]=c->r[25]|c->r[25]; // 80219DC4
  c->r[12]=R32(c->r[25]+0x00000000u); // 80219DC8
  c->r[5]=R8(c->r[1]+0x00000008u); // 80219DCC
  c->r[12]=R32(c->r[12]+0x00000030u); // 80219DD0
  c->r[4]=R8(c->r[22]+0x00000001u); // 80219DD4
  c->ctr=c->r[12]; // 80219DD8
  if (true) { c->lr=0x80219DE0u; dispatch(c,c->ctr); } // 80219DDC
  c->r[27]=c->r[27]+0x00000004u; // 80219DE0
  c->r[23]=c->r[23]+0x00000001u; // 80219DE4
L_80219DE8:;
  c->r[0]=R8(c->r[29]+0x00000004u); // 80219DE8
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80219DEC
  if (crb(c,0)) { IRQCHK(c); goto L_80219DA0; } // 80219DF0
L_80219DF4:;
  c->r[28]=c->r[28]+0x00000004u; // 80219DF4
  c->r[26]=c->r[26]+0x00000001u; // 80219DF8
L_80219DFC:;
  c->r[0]=R8(c->r[30]+0x00000014u); // 80219DFC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80219E00
  if (crb(c,0)) { IRQCHK(c); goto L_80219CAC; } // 80219E04
  c->r[11]=c->r[1]+0x00000040u; // 80219E08
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80219E0C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80219E10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80219E14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80219E18
  c->lr=0x80219E20u; f_800C2E84(c); // 80219E1C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80219E20
  c->lr=c->r[0]; // 80219E24
  c->r[1]=c->r[1]+0x00000060u; // 80219E28
  return; // 80219E2C
}

// Animate__Q36nw4hbm3lyt18AnimTransformBasicFUlPQ36nw4hbm3lyt8Material
void f_80219E30(Ctx* __restrict c) {
  trace_call(0x80219E30u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219E30
  c->r[0]=c->lr; // 80219E34
  W32(c->r[1]+0x00000074u,c->r[0]); // 80219E38
  c->r[11]=c->r[1]+0x00000040u; // 80219E3C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80219E40
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80219E44
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80219E48
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80219E4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80219E50
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80219E54
  c->lr=0x80219E5Cu; f_800C2E34(c); // 80219E58
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 80219E5C
  c->r[6]=0u+0x80380000u; // 80219E60
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80219E64
  {uint32_t ea=c->r[6]+0xFFFFF81Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80219E68
  c->r[0]=R32(c->r[7]+0x00000010u); // 80219E6C
  c->r[22]=c->r[3]|c->r[3]; // 80219E70
  c->r[23]=c->r[5]|c->r[5]; // 80219E74
  c->r[31]=c->r[1]+0x00000008u; // 80219E78
  c->r[0]=c->r[7]+c->r[0]; // 80219E7C
  c->r[24]=0u+0x00000000u; // 80219E80
  c->r[0]=R32(c->r[4]+c->r[0]); // 80219E84
  c->r[29]=c->r[7]+c->r[0]; // 80219E88
  c->r[27]=c->r[29]+0x00000018u; // 80219E8C
  goto L_8021A0CC; // 80219E90
L_80219E94:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80219E94
  c->r[3]=R32(c->r[29]+c->r[0]); // 80219E98
  c->r[28]=c->r[29]+c->r[0]; // 80219E9C
  c->r[26]=c->r[28]+0x00000008u; // 80219EA0
  c->r[0]=c->r[3]+0xADB40000u; // 80219EA4
  cmpu(c,0,c->r[0],0x00004D43u); // 80219EA8
  if (crb(c,2)) { goto L_80219ECC; } // 80219EAC
  cmpu(c,0,c->r[0],0x00005453u); // 80219EB0
  if (crb(c,2)) { goto L_80219F58; } // 80219EB4
  cmpu(c,0,c->r[0],0x00005450u); // 80219EB8
  if (crb(c,2)) { goto L_80219FD0; } // 80219EBC
  cmpu(c,0,c->r[0],0x0000494Du); // 80219EC0
  if (crb(c,2)) { goto L_8021A050; } // 80219EC4
  goto L_8021A0C4; // 80219EC8
L_80219ECC:;
  c->r[0]=R8(c->r[28]+0x00000004u); // 80219ECC
  c->r[25]=0u+0x00000000u; // 80219ED0
  {uint32_t ea=c->r[22]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 80219ED4
  cmps(c,0,(int32_t)c->r[0],0); // 80219ED8
  if (!crb(c,1)) { goto L_8021A0C4; } // 80219EDC
  goto L_80219F48; // 80219EE0
L_80219EE4:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80219EE4
  c->f[1]=c->f[31]; // 80219EE8
  c->r[21]=c->r[28]+c->r[0]; // 80219EEC
  c->r[0]=R32(c->r[21]+0x00000008u); // 80219EF0
  c->r[4]=R16(c->r[21]+0x00000004u); // 80219EF4
  c->r[3]=c->r[21]+c->r[0]; // 80219EF8
  c->lr=0x80219F00u; f_80219690(c); // 80219EFC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 80219F00
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,1,5);} // 80219F04
  c->r[6]=0u+0xFFFFFC00u; // 80219F08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80219F0C
  cmps(c,0,(int32_t)c->r[0],-1024); // 80219F10
  if (crb(c,0)) { goto L_80219F1C; } // 80219F14
  c->r[6]=c->r[0]|c->r[0]; // 80219F18
L_80219F1C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 80219F1C
  c->r[4]=R8(c->r[21]+0x00000001u); // 80219F20
  cmps(c,0,(int32_t)c->r[0],1023); // 80219F24
  c->r[3]=c->r[23]|c->r[23]; // 80219F28
  c->r[5]=0u+0x000003FFu; // 80219F2C
  if (crb(c,1)) { goto L_80219F38; } // 80219F30
  c->r[5]=c->r[6]|c->r[6]; // 80219F34
L_80219F38:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 80219F38
  c->lr=0x80219F40u; f_8021E540(c); // 80219F3C
  c->r[26]=c->r[26]+0x00000004u; // 80219F40
  c->r[25]=c->r[25]+0x00000001u; // 80219F44
L_80219F48:;
  c->r[0]=R8(c->r[28]+0x00000004u); // 80219F48
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80219F4C
  if (crb(c,0)) { IRQCHK(c); goto L_80219EE4; } // 80219F50
  goto L_8021A0C4; // 80219F54
L_80219F58:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 80219F58
  c->r[30]=0u+0x00000000u; // 80219F5C
  goto L_80219FC0; // 80219F60
L_80219F64:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 80219F64
  c->r[0]=R32(c->r[23]+0x0000004Cu); // 80219F68
  c->r[21]=c->r[28]+c->r[3]; // 80219F6C
  c->r[3]=R8(c->r[28]+c->r[3]); // 80219F70
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80219F74
  cmpu(c,0,c->r[3],c->r[0]); // 80219F78
  if (!crb(c,0)) { goto L_80219FB8; } // 80219F7C
  c->r[0]=R32(c->r[21]+0x00000008u); // 80219F80
  c->f[1]=c->f[29]; // 80219F84
  c->r[4]=R16(c->r[21]+0x00000004u); // 80219F88
  c->r[3]=c->r[21]+c->r[0]; // 80219F8C
  c->lr=0x80219F94u; f_80219690(c); // 80219F90
  c->f[31]=c->f[1]; // 80219F94
  c->r[25]=R8(c->r[21]+0x00000001u); // 80219F98
  c->r[21]=R8(c->r[21]+0x00000000u); // 80219F9C
  c->r[3]=c->r[23]|c->r[23]; // 80219FA0
  c->lr=0x80219FA8u; f_8021E1C0(c); // 80219FA4
  c->r[4]=(uint32_t)((int32_t)c->r[21]*(int32_t)20); // 80219FA8
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80219FAC
  c->r[3]=c->r[3]+c->r[4]; // 80219FB0
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 80219FB4
L_80219FB8:;
  c->r[26]=c->r[26]+0x00000004u; // 80219FB8
  c->r[30]=c->r[30]+0x00000001u; // 80219FBC
L_80219FC0:;
  c->r[0]=R8(c->r[28]+0x00000004u); // 80219FC0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80219FC4
  if (crb(c,0)) { IRQCHK(c); goto L_80219F64; } // 80219FC8
  goto L_8021A0C4; // 80219FCC
L_80219FD0:;
  c->r[25]=R32(c->r[22]+0x00000014u); // 80219FD0
  cmps(c,0,(int32_t)c->r[25],0); // 80219FD4
  if (crb(c,2)) { goto L_8021A0C4; } // 80219FD8
  {uint32_t ea=c->r[22]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 80219FDC
  c->r[30]=0u+0x00000000u; // 80219FE0
  goto L_8021A040; // 80219FE4
L_80219FE8:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 80219FE8
  c->r[0]=R32(c->r[23]+0x00000050u); // 80219FEC
  c->r[21]=c->r[28]+c->r[3]; // 80219FF0
  c->r[3]=R8(c->r[28]+c->r[3]); // 80219FF4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80219FF8
  cmpu(c,0,c->r[3],c->r[0]); // 80219FFC
  if (!crb(c,0)) { goto L_8021A038; } // 8021A000
  c->r[0]=R8(c->r[21]+0x00000001u); // 8021A004
  cmps(c,0,(int32_t)c->r[0],0); // 8021A008
  if (!crb(c,2)) { goto L_8021A038; } // 8021A00C
  c->r[0]=R32(c->r[21]+0x00000008u); // 8021A010
  c->f[1]=c->f[29]; // 8021A014
  c->r[4]=R16(c->r[21]+0x00000004u); // 8021A018
  c->r[3]=c->r[21]+c->r[0]; // 8021A01C
  c->lr=0x8021A024u; f_802195A0(c); // 8021A020
  c->r[0]=rotl(c->r[3],2)&0x0003FFFCu; // 8021A024
  c->r[4]=R8(c->r[21]+0x00000000u); // 8021A028
  c->r[5]=R32(c->r[25]+c->r[0]); // 8021A02C
  c->r[3]=c->r[23]|c->r[23]; // 8021A030
  c->lr=0x8021A038u; f_8021E450(c); // 8021A034
L_8021A038:;
  c->r[26]=c->r[26]+0x00000004u; // 8021A038
  c->r[30]=c->r[30]+0x00000001u; // 8021A03C
L_8021A040:;
  c->r[0]=R8(c->r[28]+0x00000004u); // 8021A040
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8021A044
  if (crb(c,0)) { IRQCHK(c); goto L_80219FE8; } // 8021A048
  goto L_8021A0C4; // 8021A04C
L_8021A050:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 8021A050
  c->r[30]=0u+0x00000000u; // 8021A054
  goto L_8021A0B8; // 8021A058
L_8021A05C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8021A05C
  c->r[0]=R32(c->r[23]+0x0000004Cu); // 8021A060
  c->r[25]=c->r[28]+c->r[3]; // 8021A064
  c->r[3]=R8(c->r[28]+c->r[3]); // 8021A068
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 8021A06C
  cmpu(c,0,c->r[3],c->r[0]); // 8021A070
  if (!crb(c,0)) { goto L_8021A0B0; } // 8021A074
  c->r[0]=R32(c->r[25]+0x00000008u); // 8021A078
  c->f[1]=c->f[29]; // 8021A07C
  c->r[4]=R16(c->r[25]+0x00000004u); // 8021A080
  c->r[3]=c->r[25]+c->r[0]; // 8021A084
  c->lr=0x8021A08Cu; f_80219690(c); // 8021A088
  c->f[31]=c->f[1]; // 8021A08C
  c->r[21]=R8(c->r[25]+0x00000001u); // 8021A090
  c->r[25]=R8(c->r[25]+0x00000000u); // 8021A094
  c->r[3]=c->r[23]|c->r[23]; // 8021A098
  c->lr=0x8021A0A0u; f_8021E200(c); // 8021A09C
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)20); // 8021A0A0
  c->r[0]=rotl(c->r[21],2)&0xFFFFFFFCu; // 8021A0A4
  c->r[3]=c->r[3]+c->r[4]; // 8021A0A8
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 8021A0AC
L_8021A0B0:;
  c->r[26]=c->r[26]+0x00000004u; // 8021A0B0
  c->r[30]=c->r[30]+0x00000001u; // 8021A0B4
L_8021A0B8:;
  c->r[0]=R8(c->r[28]+0x00000004u); // 8021A0B8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8021A0BC
  if (crb(c,0)) { IRQCHK(c); goto L_8021A05C; } // 8021A0C0
L_8021A0C4:;
  c->r[27]=c->r[27]+0x00000004u; // 8021A0C4
  c->r[24]=c->r[24]+0x00000001u; // 8021A0C8
L_8021A0CC:;
  c->r[0]=R8(c->r[29]+0x00000014u); // 8021A0CC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8021A0D0
  if (crb(c,0)) { IRQCHK(c); goto L_80219E94; } // 8021A0D4
  c->r[11]=c->r[1]+0x00000040u; // 8021A0D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8021A0DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8021A0E0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8021A0E4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8021A0E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8021A0EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8021A0F0
  c->lr=0x8021A0F8u; f_800C2E80(c); // 8021A0F4
  c->r[0]=R32(c->r[1]+0x00000074u); // 8021A0F8
  c->lr=c->r[0]; // 8021A0FC
  c->r[1]=c->r[1]+0x00000070u; // 8021A100
  return; // 8021A104
}

// FindAnimationLink__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut40LinkList<Q36nw4hbm3lyt13AnimationLink,0>PQ36nw4hbm3lyt13AnimTransform
void f_8021A110(Ctx* __restrict c) {
  trace_call(0x8021A110u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 8021A110
  c->r[0]=c->r[3]+0x00000004u; // 8021A114
  goto L_8021A138; // 8021A118
  c->r[0]=c->r[0]|0x00000000u; // 8021A11C
L_8021A120:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8021A120
  cmpu(c,0,c->r[4],c->r[3]); // 8021A124
  if (!crb(c,2)) { goto L_8021A134; } // 8021A128
  c->r[3]=c->r[5]|c->r[5]; // 8021A12C
  return; // 8021A130
L_8021A134:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8021A134
L_8021A138:;
  cmpu(c,0,c->r[5],c->r[0]); // 8021A138
  if (!crb(c,2)) { IRQCHK(c); goto L_8021A120; } // 8021A13C
  c->r[3]=0u+0x00000000u; // 8021A140
  return; // 8021A144
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_8021A150(Ctx* __restrict c) {
  trace_call(0x8021A150u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A150
  c->r[0]=c->lr; // 8021A154
  c->r[6]=0u+0x803A0000u; // 8021A158
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021A15C
  c->r[5]=c->r[1]+0x00000018u; // 8021A160
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8021A164
  W32(c->r[1]+0x00000038u,c->r[30]); // 8021A168
  c->r[30]=0u+0xFFFFFFFFu; // 8021A16C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8021A170
  c->r[29]=c->r[4]|c->r[4]; // 8021A174
  c->r[4]=c->r[6]+0x00007680u; // 8021A178
  W32(c->r[1]+0x00000030u,c->r[28]); // 8021A17C
  c->r[28]=c->r[3]|c->r[3]; // 8021A180
  c->lr=0x8021A188u; f_801C3F90(c); // 8021A184
  c->r[31]=0u+0x803A0000u; // 8021A188
  goto L_8021A1EC; // 8021A18C
L_8021A190:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8021A190
  cmps(c,0,(int32_t)c->r[0],0); // 8021A194
  if (crb(c,2)) { goto L_8021A1D0; } // 8021A198
  c->r[4]=R32(c->r[1]+0x00000014u); // 8021A19C
  c->r[3]=c->r[28]|c->r[28]; // 8021A1A0
  c->lr=0x8021A1A8u; f_801C3F30(c); // 8021A1A4
  c->r[3]=c->r[28]|c->r[28]; // 8021A1A8
  c->r[4]=c->r[29]|c->r[29]; // 8021A1AC
  c->lr=0x8021A1B4u; f_8021A150(c); // 8021A1B0
  c->r[30]=c->r[3]|c->r[3]; // 8021A1B4
  c->r[3]=c->r[28]|c->r[28]; // 8021A1B8
  c->r[4]=c->r[31]+0x00007684u; // 8021A1BC
  c->lr=0x8021A1C4u; f_801C3F30(c); // 8021A1C0
  cmps(c,0,(int32_t)c->r[30],-1); // 8021A1C4
  if (!crb(c,2)) { goto L_8021A200; } // 8021A1C8
  goto L_8021A1EC; // 8021A1CC
L_8021A1D0:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 8021A1D0
  c->r[3]=c->r[29]|c->r[29]; // 8021A1D4
  c->lr=0x8021A1DCu; f_800D2C18(c); // 8021A1D8
  cmps(c,0,(int32_t)c->r[3],0); // 8021A1DC
  if (!crb(c,2)) { goto L_8021A1EC; } // 8021A1E0
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 8021A1E4
  goto L_8021A200; // 8021A1E8
L_8021A1EC:;
  c->r[3]=c->r[1]+0x00000018u; // 8021A1EC
  c->r[4]=c->r[1]+0x00000008u; // 8021A1F0
  c->lr=0x8021A1F8u; f_801C4010(c); // 8021A1F4
  cmps(c,0,(int32_t)c->r[3],0); // 8021A1F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8021A190; } // 8021A1FC
L_8021A200:;
  c->r[3]=c->r[1]+0x00000018u; // 8021A200
  c->lr=0x8021A208u; f_801C40D0(c); // 8021A204
  c->r[3]=c->r[30]|c->r[30]; // 8021A208
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8021A20C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8021A210
  c->r[29]=R32(c->r[1]+0x00000034u); // 8021A214
  c->r[28]=R32(c->r[1]+0x00000030u); // 8021A218
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021A21C
  c->lr=c->r[0]; // 8021A220
  c->r[1]=c->r[1]+0x00000040u; // 8021A224
  return; // 8021A228
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_8021A230(Ctx* __restrict c) {
  trace_call(0x8021A230u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A230
  c->r[0]=c->lr; // 8021A234
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021A238
  c->r[11]=c->r[1]+0x00000040u; // 8021A23C
  c->lr=0x8021A244u; f_800C2E48(c); // 8021A240
  c->r[26]=c->r[3]|c->r[3]; // 8021A244
  c->r[27]=c->r[4]|c->r[4]; // 8021A248
  c->r[28]=c->r[5]|c->r[5]; // 8021A24C
  c->r[29]=c->r[6]|c->r[6]; // 8021A250
  c->r[30]=c->r[7]|c->r[7]; // 8021A254
  c->r[31]=0u+0xFFFFFFFFu; // 8021A258
  c->lr=0x8021A260u; f_801C3AA0(c); // 8021A25C
  cmps(c,0,(int32_t)c->r[3],-1); // 8021A260
  if (crb(c,2)) { goto L_8021A314; } // 8021A264
  c->r[3]=c->r[26]|c->r[26]; // 8021A268
  c->r[4]=c->r[27]|c->r[27]; // 8021A26C
  c->lr=0x8021A274u; f_801C3F30(c); // 8021A270
  cmps(c,0,(int32_t)c->r[3],0); // 8021A274
  if (crb(c,2)) { goto L_8021A314; } // 8021A278
  cmps(c,0,(int32_t)c->r[28],0); // 8021A27C
  if (!crb(c,2)) { goto L_8021A298; } // 8021A280
  c->r[3]=c->r[26]|c->r[26]; // 8021A284
  c->r[4]=c->r[29]|c->r[29]; // 8021A288
  c->lr=0x8021A290u; f_8021A150(c); // 8021A28C
  c->r[31]=c->r[3]|c->r[3]; // 8021A290
  goto L_8021A304; // 8021A294
L_8021A298:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 8021A298
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 8021A29C
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 8021A2A0
  c->r[0]=0u+0x00000000u; // 8021A2A4
  W8(c->r[1]+0x00000008u,c->r[3]); // 8021A2A8
  c->r[3]=c->r[26]|c->r[26]; // 8021A2AC
  c->r[4]=c->r[1]+0x00000008u; // 8021A2B0
  W8(c->r[1]+0x00000009u,c->r[6]); // 8021A2B4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8021A2B8
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 8021A2BC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8021A2C0
  c->lr=0x8021A2C8u; f_801C3AA0(c); // 8021A2C4
  cmps(c,0,(int32_t)c->r[3],-1); // 8021A2C8
  if (crb(c,2)) { goto L_8021A304; } // 8021A2CC
  c->r[3]=c->r[26]|c->r[26]; // 8021A2D0
  c->r[4]=c->r[1]+0x00000008u; // 8021A2D4
  c->lr=0x8021A2DCu; f_801C3F30(c); // 8021A2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8021A2DC
  if (crb(c,2)) { goto L_8021A304; } // 8021A2E0
  c->r[3]=c->r[26]|c->r[26]; // 8021A2E4
  c->r[4]=c->r[29]|c->r[29]; // 8021A2E8
  c->lr=0x8021A2F0u; f_801C3AA0(c); // 8021A2EC
  c->r[4]=0u+0x803A0000u; // 8021A2F0
  c->r[31]=c->r[3]|c->r[3]; // 8021A2F4
  c->r[3]=c->r[26]|c->r[26]; // 8021A2F8
  c->r[4]=c->r[4]+0x00007684u; // 8021A2FC
  c->lr=0x8021A304u; f_801C3F30(c); // 8021A300
L_8021A304:;
  c->r[4]=0u+0x803A0000u; // 8021A304
  c->r[3]=c->r[26]|c->r[26]; // 8021A308
  c->r[4]=c->r[4]+0x00007684u; // 8021A30C
  c->lr=0x8021A314u; f_801C3F30(c); // 8021A310
L_8021A314:;
  cmps(c,0,(int32_t)c->r[31],-1); // 8021A314
  if (crb(c,2)) { goto L_8021A35C; } // 8021A318
  c->r[3]=c->r[26]|c->r[26]; // 8021A31C
  c->r[4]=c->r[31]|c->r[31]; // 8021A320
  c->r[5]=c->r[1]+0x00000010u; // 8021A324
  c->lr=0x8021A32Cu; f_801C3A50(c); // 8021A328
  c->r[3]=c->r[1]+0x00000010u; // 8021A32C
  c->lr=0x8021A334u; f_801C3EF0(c); // 8021A330
  cmps(c,0,(int32_t)c->r[30],0); // 8021A334
  c->r[31]=c->r[3]|c->r[3]; // 8021A338
  if (crb(c,2)) { goto L_8021A34C; } // 8021A33C
  c->r[3]=c->r[1]+0x00000010u; // 8021A340
  c->lr=0x8021A348u; f_801C3F10(c); // 8021A344
  W32(c->r[30]+0x00000000u,c->r[3]); // 8021A348
L_8021A34C:;
  c->r[3]=c->r[1]+0x00000010u; // 8021A34C
  c->lr=0x8021A354u; f_801C3F20(c); // 8021A350
  c->r[3]=c->r[31]|c->r[31]; // 8021A354
  goto L_8021A360; // 8021A358
L_8021A35C:;
  c->r[3]=0u+0x00000000u; // 8021A35C
L_8021A360:;
  c->r[11]=c->r[1]+0x00000040u; // 8021A360
  c->lr=0x8021A368u; f_800C2E94(c); // 8021A364
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021A368
  c->lr=c->r[0]; // 8021A36C
  c->r[1]=c->r[1]+0x00000040u; // 8021A370
  return; // 8021A374
}

// fn_8021A380
void f_8021A380(Ctx* __restrict c) {
  trace_call(0x8021A380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A380
  c->r[0]=c->lr; // 8021A384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A38C
  c->r[31]=c->r[3]|c->r[3]; // 8021A390
  c->lr=0x8021A398u; f_80220F00(c); // 8021A394
  c->r[4]=0u+0x803A0000u; // 8021A398
  c->r[5]=c->r[31]+0x00000028u; // 8021A39C
  c->r[0]=0u+0x00000000u; // 8021A3A0
  W32(c->r[31]+0x00000020u,c->r[0]); // 8021A3A4
  c->r[4]=c->r[4]+0x00007688u; // 8021A3A8
  c->r[3]=c->r[31]|c->r[31]; // 8021A3AC
  W32(c->r[31]+0x00000000u,c->r[4]); // 8021A3B0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8021A3B4
  W32(c->r[31]+0x00000028u,c->r[5]); // 8021A3B8
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 8021A3BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A3C4
  c->lr=c->r[0]; // 8021A3C8
  c->r[1]=c->r[1]+0x00000010u; // 8021A3CC
  return; // 8021A3D0
}

// Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc
void f_8021A3E0(Ctx* __restrict c) {
  trace_call(0x8021A3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A3E0
  c->r[0]=c->lr; // 8021A3E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021A3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021A3EC
  c->r[31]=c->r[5]|c->r[5]; // 8021A3F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021A3F4
  c->r[30]=c->r[4]|c->r[4]; // 8021A3F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021A3FC
  c->r[29]=c->r[3]|c->r[3]; // 8021A400
  c->r[3]=c->r[30]|c->r[30]; // 8021A404
  c->r[4]=c->r[29]+0x00000004u; // 8021A408
  c->lr=0x8021A410u; f_801C3700(c); // 8021A40C
  cmps(c,0,(int32_t)c->r[3],0); // 8021A410
  if (!crb(c,2)) { goto L_8021A420; } // 8021A414
  c->r[3]=0u+0x00000000u; // 8021A418
  goto L_8021A440; // 8021A41C
L_8021A420:;
  W32(c->r[29]+0x00000020u,c->r[30]); // 8021A420
  c->r[4]=c->r[31]|c->r[31]; // 8021A424
  c->r[3]=c->r[29]+0x00000030u; // 8021A428
  c->r[5]=0u+0x0000007Fu; // 8021A42C
  c->lr=0x8021A434u; f_800CA310(c); // 8021A430
  c->r[0]=0u+0x00000000u; // 8021A434
  W8(c->r[29]+0x000000AFu,c->r[0]); // 8021A438
  c->r[3]=0u+0x00000001u; // 8021A43C
L_8021A440:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021A440
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021A444
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021A448
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021A44C
  c->lr=c->r[0]; // 8021A450
  c->r[1]=c->r[1]+0x00000020u; // 8021A454
  return; // 8021A458
}

// GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl
void f_8021A460(Ctx* __restrict c) {
  trace_call(0x8021A460u);
  c->r[8]=c->r[4]|c->r[4]; // 8021A460
  c->r[0]=c->r[5]|c->r[5]; // 8021A464
  c->r[7]=c->r[6]|c->r[6]; // 8021A468
  c->r[4]=c->r[3]+0x00000030u; // 8021A46C
  c->r[5]=c->r[8]|c->r[8]; // 8021A470
  c->r[6]=c->r[0]|c->r[0]; // 8021A474
  c->r[3]=c->r[3]+0x00000004u; // 8021A478
  f_8021A230(c); return; // 8021A47C
}

// GetFont__Q36nw4hbm3lyt19ArcResourceAccessorFPCc
void f_8021A480(Ctx* __restrict c) {
  trace_call(0x8021A480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A480
  c->r[0]=c->lr; // 8021A484
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021A488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021A48C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021A490
  c->r[30]=c->r[3]+0x00000028u; // 8021A494
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021A498
  c->r[29]=c->r[4]|c->r[4]; // 8021A49C
  c->r[31]=R32(c->r[3]+0x00000028u); // 8021A4A0
  goto L_8021A4C8; // 8021A4A4
L_8021A4A8:;
  c->r[3]=c->r[29]|c->r[29]; // 8021A4A8
  c->r[4]=c->r[31]+0x00000008u; // 8021A4AC
  c->lr=0x8021A4B4u; f_800CA380(c); // 8021A4B0
  cmps(c,0,(int32_t)c->r[3],0); // 8021A4B4
  if (!crb(c,2)) { goto L_8021A4C4; } // 8021A4B8
  c->r[3]=R32(c->r[31]+0x00000088u); // 8021A4BC
  goto L_8021A4D4; // 8021A4C0
L_8021A4C4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021A4C4
L_8021A4C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021A4C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8021A4A8; } // 8021A4CC
  c->r[3]=0u+0x00000000u; // 8021A4D0
L_8021A4D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021A4D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021A4D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021A4DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021A4E0
  c->lr=c->r[0]; // 8021A4E4
  c->r[1]=c->r[1]+0x00000020u; // 8021A4E8
  return; // 8021A4EC
}

// __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet
void f_8021A4F0(Ctx* __restrict c) {
  trace_call(0x8021A4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A4F0
  c->r[0]=c->lr; // 8021A4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A4F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A4FC
  c->r[31]=c->r[3]|c->r[3]; // 8021A500
  c->lr=0x8021A508u; f_8021F810(c); // 8021A504
  c->r[4]=0u+0x803A0000u; // 8021A508
  c->r[3]=c->r[31]|c->r[31]; // 8021A50C
  c->r[4]=c->r[4]+0x00007700u; // 8021A510
  W32(c->r[31]+0x00000000u,c->r[4]); // 8021A514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A518
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A51C
  c->lr=c->r[0]; // 8021A520
  c->r[1]=c->r[1]+0x00000010u; // 8021A524
  return; // 8021A528
}

// __dt__Q36nw4hbm3lyt8BoundingFv
void f_8021A530(Ctx* __restrict c) {
  trace_call(0x8021A530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A530
  c->r[0]=c->lr; // 8021A534
  cmps(c,0,(int32_t)c->r[3],0); // 8021A538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A53C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A540
  c->r[31]=c->r[4]|c->r[4]; // 8021A544
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021A548
  c->r[30]=c->r[3]|c->r[3]; // 8021A54C
  if (crb(c,2)) { goto L_8021A56C; } // 8021A550
  c->r[4]=0u+0x00000000u; // 8021A554
  c->lr=0x8021A55Cu; f_8021F930(c); // 8021A558
  cmps(c,0,(int32_t)c->r[31],0); // 8021A55C
  if (!crb(c,1)) { goto L_8021A56C; } // 8021A560
  c->r[3]=c->r[30]|c->r[30]; // 8021A564
  c->lr=0x8021A56Cu; f_800C2AC0(c); // 8021A568
L_8021A56C:;
  c->r[3]=c->r[30]|c->r[30]; // 8021A56C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A570
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021A574
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A578
  c->lr=c->r[0]; // 8021A57C
  c->r[1]=c->r[1]+0x00000010u; // 8021A580
  return; // 8021A584
}

// DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo
void f_8021A590(Ctx* __restrict c) {
  trace_call(0x8021A590u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A590
  c->r[0]=c->lr; // 8021A594
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021A598
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021A59C
  c->r[31]=c->r[3]|c->r[3]; // 8021A5A0
  c->r[0]=R8(c->r[4]+0x00000050u); // 8021A5A4
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 8021A5A8
  if (crb(c,2)) { goto L_8021A5EC; } // 8021A5AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021A5B0
  c->r[12]=R32(c->r[12]+0x00000060u); // 8021A5B4
  c->ctr=c->r[12]; // 8021A5B8
  if (true) { c->lr=0x8021A5C0u; dispatch(c,c->ctr); } // 8021A5BC
  c->r[4]=0u+0x00FF0000u; // 8021A5C0
  c->r[3]=c->r[31]|c->r[31]; // 8021A5C4
  c->r[0]=c->r[4]+0x000000FFu; // 8021A5C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021A5CC
  c->lr=0x8021A5D4u; f_80220860(c); // 8021A5D0
  W32(c->r[1]+0x00000014u,c->r[4]); // 8021A5D4
  c->r[4]=c->r[31]+0x0000004Cu; // 8021A5D8
  c->r[5]=c->r[1]+0x00000008u; // 8021A5DC
  W32(c->r[1]+0x00000010u,c->r[3]); // 8021A5E0
  c->r[3]=c->r[1]+0x00000010u; // 8021A5E4
  c->lr=0x8021A5ECu; f_8021B210(c); // 8021A5E8
L_8021A5EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021A5EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021A5F0
  c->lr=c->r[0]; // 8021A5F4
  c->r[1]=c->r[1]+0x00000020u; // 8021A5F8
  return; // 8021A5FC
}

// __dt__Q36nw4hbm2ut5ColorFv
void f_8021A600(Ctx* __restrict c) {
  trace_call(0x8021A600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A600
  c->r[0]=c->lr; // 8021A604
  cmps(c,0,(int32_t)c->r[3],0); // 8021A608
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A60C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A610
  c->r[31]=c->r[3]|c->r[3]; // 8021A614
  if (crb(c,2)) { goto L_8021A628; } // 8021A618
  cmps(c,0,(int32_t)c->r[4],0); // 8021A61C
  if (!crb(c,1)) { goto L_8021A628; } // 8021A620
  c->lr=0x8021A628u; f_800C2AC0(c); // 8021A624
L_8021A628:;
  c->r[3]=c->r[31]|c->r[31]; // 8021A628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A62C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A630
  c->lr=c->r[0]; // 8021A634
  c->r[1]=c->r[1]+0x00000010u; // 8021A638
  return; // 8021A63C
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt8BoundingCFv
void f_8021A640(Ctx* __restrict c) {
  trace_call(0x8021A640u);
  c->r[3]=0u+0x80490000u; // 8021A640
  c->r[3]=c->r[3]+0x000019F0u; // 8021A644
  return; // 8021A648
}

// fn_8021A650
void f_8021A650(Ctx* __restrict c) {
  trace_call(0x8021A650u);
  c->r[4]=0u+0x80490000u; // 8021A650
  c->r[3]=0u+0x80490000u; // 8021A654
  c->r[4]=c->r[4]+0x00001A28u; // 8021A658
  W32(c->r[3]+0x000019F0u,c->r[4]); // 8021A65C
  return; // 8021A660
}

// EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
void f_8021A670(Ctx* __restrict c) {
  trace_call(0x8021A670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A670
  c->r[0]=c->lr; // 8021A674
  c->r[5]=0u+0x00000010u; // 8021A678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A67C
  c->lr=0x8021A684u; f_800CA49C(c); // 8021A680
  c->r[0]=cntlz(c->r[3]); // 8021A684
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021A688
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A68C
  c->lr=c->r[0]; // 8021A690
  c->r[1]=c->r[1]+0x00000010u; // 8021A694
  return; // 8021A698
}

// EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
void f_8021A6A0(Ctx* __restrict c) {
  trace_call(0x8021A6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A6A0
  c->r[0]=c->lr; // 8021A6A4
  c->r[5]=0u+0x00000014u; // 8021A6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A6AC
  c->lr=0x8021A6B4u; f_800CA49C(c); // 8021A6B0
  c->r[0]=cntlz(c->r[3]); // 8021A6B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8021A6B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A6BC
  c->lr=c->r[0]; // 8021A6C0
  c->r[1]=c->r[1]+0x00000010u; // 8021A6C4
  return; // 8021A6C8
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
void f_8021A6D0(Ctx* __restrict c) {
  trace_call(0x8021A6D0u);
  c->r[0]=R16(c->r[3]+0x00000004u); // 8021A6D0
  c->r[4]=0u+0x00000000u; // 8021A6D4
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8021A6D8
  if (!crb(c,2)) { goto L_8021A6F0; } // 8021A6DC
  c->r[0]=R16(c->r[3]+0x00000006u); // 8021A6E0
  cmpu(c,0,c->r[0],0x00000008u); // 8021A6E4
  if (!crb(c,2)) { goto L_8021A6F0; } // 8021A6E8
  c->r[4]=0u+0x00000001u; // 8021A6EC
L_8021A6F0:;
  c->r[3]=c->r[4]|c->r[4]; // 8021A6F0
  return; // 8021A6F4
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
void f_8021A700(Ctx* __restrict c) {
  trace_call(0x8021A700u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8021A700
  c->r[5]=0u+0x00000000u; // 8021A704
  cmpu(c,0,c->r[4],c->r[0]); // 8021A708
  if (!crb(c,2)) { goto L_8021A72C; } // 8021A70C
  c->r[0]=R16(c->r[3]+0x00000004u); // 8021A710
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8021A714
  if (!crb(c,2)) { goto L_8021A72C; } // 8021A718
  c->r[0]=R16(c->r[3]+0x00000006u); // 8021A71C
  cmpu(c,0,c->r[0],0x00000008u); // 8021A720
  if (!crb(c,2)) { goto L_8021A72C; } // 8021A724
  c->r[5]=0u+0x00000001u; // 8021A728
L_8021A72C:;
  c->r[3]=c->r[5]|c->r[5]; // 8021A72C
  return; // 8021A730
}

// __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_8021A740(Ctx* __restrict c) {
  trace_call(0x8021A740u);
  c->r[0]=0u+0x00000000u; // 8021A740
  W8(c->r[3]+0x00000000u,c->r[0]); // 8021A744
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021A748
  W32(c->r[3]+0x00000004u,c->r[0]); // 8021A74C
  return; // 8021A750
}

// Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_8021A760(Ctx* __restrict c) {
  trace_call(0x8021A760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A760
  c->r[0]=c->lr; // 8021A764
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A76C
  c->r[31]=c->r[3]|c->r[3]; // 8021A770
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021A774
  cmps(c,0,(int32_t)c->r[4],0); // 8021A778
  if (crb(c,2)) { goto L_8021A79C; } // 8021A77C
  c->r[3]=0u+0x80490000u; // 8021A780
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021A784
  c->lr=0x8021A78Cu; f_8023B6E0(c); // 8021A788
  c->r[0]=0u+0x00000000u; // 8021A78C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8021A790
  W8(c->r[31]+0x00000000u,c->r[0]); // 8021A794
  W8(c->r[31]+0x00000001u,c->r[0]); // 8021A798
L_8021A79C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A79C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A7A0
  c->lr=c->r[0]; // 8021A7A4
  c->r[1]=c->r[1]+0x00000010u; // 8021A7A8
  return; // 8021A7AC
}

// Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_8021A7B0(Ctx* __restrict c) {
  trace_call(0x8021A7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A7B0
  c->r[0]=c->lr; // 8021A7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A7BC
  c->r[31]=c->r[4]|c->r[4]; // 8021A7C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021A7C4
  c->r[30]=c->r[3]|c->r[3]; // 8021A7C8
  c->r[0]=R8(c->r[3]+0x00000000u); // 8021A7CC
  cmpu(c,0,c->r[0],c->r[4]); // 8021A7D0
  if (!crb(c,0)) { goto L_8021A820; } // 8021A7D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021A7D8
  cmps(c,0,(int32_t)c->r[4],0); // 8021A7DC
  if (crb(c,2)) { goto L_8021A800; } // 8021A7E0
  c->r[3]=0u+0x80490000u; // 8021A7E4
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021A7E8
  c->lr=0x8021A7F0u; f_8023B6E0(c); // 8021A7EC
  c->r[0]=0u+0x00000000u; // 8021A7F0
  W32(c->r[30]+0x00000004u,c->r[0]); // 8021A7F4
  W8(c->r[30]+0x00000000u,c->r[0]); // 8021A7F8
  W8(c->r[30]+0x00000001u,c->r[0]); // 8021A7FC
L_8021A800:;
  c->r[3]=0u+0x80490000u; // 8021A800
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 8021A804
  c->r[3]=R32(c->r[3]+0x00001A20u); // 8021A808
  c->lr=0x8021A810u; f_8023B6D0(c); // 8021A80C
  cmps(c,0,(int32_t)c->r[3],0); // 8021A810
  W32(c->r[30]+0x00000004u,c->r[3]); // 8021A814
  if (crb(c,2)) { goto L_8021A820; } // 8021A818
  W8(c->r[30]+0x00000000u,c->r[31]); // 8021A81C
L_8021A820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A824
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021A828
  c->lr=c->r[0]; // 8021A82C
  c->r[1]=c->r[1]+0x00000010u; // 8021A830
  return; // 8021A834
}

// SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_8021A840(Ctx* __restrict c) {
  trace_call(0x8021A840u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A840
  cmps(c,0,(int32_t)c->r[0],0); // 8021A844
  if (crb(c,2)) return; // 8021A848
  c->r[0]=R8(c->r[3]+0x00000000u); // 8021A84C
  cmpu(c,0,c->r[4],c->r[0]); // 8021A850
  if (crb(c,1)) return; // 8021A854
  c->r[8]=0u+0x80490000u; // 8021A858
  c->r[0]=R8(c->r[8]+0x000019F8u); // 8021A85C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8021A860
  if (!crb(c,2)) { goto L_8021A8A8; } // 8021A864
  c->r[6]=0u+0x80380000u; // 8021A868
  c->r[5]=0u+0x80380000u; // 8021A86C
  c->r[7]=0u+0x80490000u; // 8021A870
  {uint32_t ea=c->r[6]+0xFFFFF820u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A874
  c->r[6]=c->r[7]+0x00001A00u; // 8021A878
  {uint32_t ea=c->r[5]+0xFFFFF824u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A87C
  c->r[0]=0u+0x00000001u; // 8021A880
  {uint32_t ea=c->r[7]+0x00001A00u; WF32(ea,c->f[1]);} // 8021A884
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 8021A888
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8021A88C
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[1]);} // 8021A890
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[1]);} // 8021A894
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 8021A898
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[0]);} // 8021A89C
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021A8A0
  W8(c->r[8]+0x000019F8u,c->r[0]); // 8021A8A4
L_8021A8A8:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 8021A8A8
  c->r[6]=0u+0x80490000u; // 8021A8AC
  c->r[5]=c->r[6]+0x00001A00u; // 8021A8B0
  {uint32_t ea=c->r[6]+0x00001A00u; c->f[7]=c->ps1[7]=RF32(ea);} // 8021A8B4
  c->r[0]=c->r[4]-c->r[7]; // 8021A8B8
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 8021A8BC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8021A8C0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8021A8C4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8021A8C8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021A8CC
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A8D0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A8D4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A8D8
  c->ctr=c->r[0]; // 8021A8DC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 8021A8E0
  if (!crb(c,0)) { goto L_8021A930; } // 8021A8E4
L_8021A8E8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A8E8
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 8021A8EC
  c->r[5]=c->r[0]+c->r[6]; // 8021A8F0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 8021A8F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A8F8
  c->r[5]=c->r[0]+c->r[6]; // 8021A8FC
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 8021A900
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 8021A904
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A908
  c->r[5]=c->r[0]+c->r[6]; // 8021A90C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8021A910
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8021A914
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A918
  c->r[5]=c->r[0]+c->r[6]; // 8021A91C
  c->r[6]=c->r[6]+0x00000020u; // 8021A920
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8021A924
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021A928
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021A8E8; } // 8021A92C
L_8021A930:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 8021A930
  return; // 8021A934
}

// Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
void f_8021A940(Ctx* __restrict c) {
  trace_call(0x8021A940u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 8021A940
  cmpu(c,0,c->r[0],c->r[5]); // 8021A944
  if (!crb(c,0)) { goto L_8021A950; } // 8021A948
  c->r[0]=c->r[5]|c->r[5]; // 8021A94C
L_8021A950:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 8021A950
  c->r[6]=0u+0x00000000u; // 8021A954
  c->ctr=c->r[5]; // 8021A958
  cmps(c,0,(int32_t)c->r[5],0); // 8021A95C
  if (!crb(c,1)) return; // 8021A960
L_8021A964:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A964
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A968
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 8021A96C
  c->r[5]=c->r[0]+c->r[6]; // 8021A970
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A974
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 8021A978
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A97C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A980
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A984
  c->r[5]=c->r[0]+c->r[6]; // 8021A988
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021A98C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 8021A990
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A994
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 8021A998
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A99C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A9A0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A9A4
  c->r[4]=c->r[4]+0x00000020u; // 8021A9A8
  c->r[5]=c->r[0]+c->r[6]; // 8021A9AC
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 8021A9B0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 8021A9B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021A9B8
  c->r[5]=c->r[0]+c->r[6]; // 8021A9BC
  c->r[6]=c->r[6]+0x00000020u; // 8021A9C0
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8021A9C4
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021A9C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021A964; } // 8021A9CC
  return; // 8021A9D0
}

// IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
void f_8021A9E0(Ctx* __restrict c) {
  trace_call(0x8021A9E0u);
  cmpu(c,0,c->r[4],0x000000FFu); // 8021A9E0
  if (crb(c,2)) { goto L_8021A9F0; } // 8021A9E4
  c->r[3]=0u+0x00000001u; // 8021A9E8
  return; // 8021A9EC
L_8021A9F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021A9F0
  if (crb(c,2)) { goto L_8021AA40; } // 8021A9F4
  c->r[4]=R32(c->r[3]+0x00000000u); // 8021A9F8
  c->r[0]=c->r[4]+0x00010000u; // 8021A9FC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021AA00
  if (!crb(c,2)) { goto L_8021AA38; } // 8021AA04
  c->r[4]=R32(c->r[3]+0x00000004u); // 8021AA08
  c->r[0]=c->r[4]+0x00010000u; // 8021AA0C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021AA10
  if (!crb(c,2)) { goto L_8021AA38; } // 8021AA14
  c->r[4]=R32(c->r[3]+0x00000008u); // 8021AA18
  c->r[0]=c->r[4]+0x00010000u; // 8021AA1C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021AA20
  if (!crb(c,2)) { goto L_8021AA38; } // 8021AA24
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8021AA28
  c->r[0]=c->r[3]+0x00010000u; // 8021AA2C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021AA30
  if (crb(c,2)) { goto L_8021AA40; } // 8021AA34
L_8021AA38:;
  c->r[3]=0u+0x00000001u; // 8021AA38
  return; // 8021AA3C
L_8021AA40:;
  c->r[3]=0u+0x00000000u; // 8021AA40
  return; // 8021AA44
}

// MultipleAlpha__Q36nw4hbm3lyt6detailFQ36nw4hbm2ut5ColorUc
void f_8021AA50(Ctx* __restrict c) {
  trace_call(0x8021AA50u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8021AA50
  cmpu(c,0,c->r[5],0x000000FFu); // 8021AA54
  W32(c->r[3]+0x00000000u,c->r[0]); // 8021AA58
  if (crb(c,2)) return; // 8021AA5C
  c->r[0]=R8(c->r[4]+0x00000003u); // 8021AA60
  c->r[4]=0u+0x80810000u; // 8021AA64
  c->r[4]=c->r[4]+0xFFFF8081u; // 8021AA68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 8021AA6C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8021AA70
  c->r[0]=c->r[4]+c->r[0]; // 8021AA74
  c->r[0]=sraw(c,c->r[0],7); // 8021AA78
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8021AA7C
  c->r[0]=c->r[0]+c->r[4]; // 8021AA80
  W8(c->r[3]+0x00000003u,c->r[0]); // 8021AA84
  return; // 8021AA88
}

// SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
void f_8021AA90(Ctx* __restrict c) {
  trace_call(0x8021AA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AA90
  c->r[0]=c->lr; // 8021AA94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021AA98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021AA9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021AAA0
  c->r[30]=c->r[4]|c->r[4]; // 8021AAA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021AAA8
  c->r[29]=c->r[3]|c->r[3]; // 8021AAAC
  c->lr=0x8021AAB4u; f_80207AD0(c); // 8021AAB0
  c->r[3]=0u+0x00000009u; // 8021AAB4
  c->r[4]=0u+0x00000001u; // 8021AAB8
  c->lr=0x8021AAC0u; f_80207470(c); // 8021AABC
  cmps(c,0,(int32_t)c->r[29],0); // 8021AAC0
  if (crb(c,2)) { goto L_8021AAD4; } // 8021AAC4
  c->r[3]=0u+0x0000000Bu; // 8021AAC8
  c->r[4]=0u+0x00000001u; // 8021AACC
  c->lr=0x8021AAD4u; f_80207470(c); // 8021AAD0
L_8021AAD4:;
  c->r[31]=0u+0x00000000u; // 8021AAD4
  goto L_8021AAEC; // 8021AAD8
L_8021AADC:;
  c->r[3]=c->r[31]+0x0000000Du; // 8021AADC
  c->r[4]=0u+0x00000001u; // 8021AAE0
  c->lr=0x8021AAE8u; f_80207470(c); // 8021AAE4
  c->r[31]=c->r[31]+0x00000001u; // 8021AAE8
L_8021AAEC:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8021AAEC
  if (crb(c,0)) { IRQCHK(c); goto L_8021AADC; } // 8021AAF0
  c->r[3]=0u+0x00000000u; // 8021AAF4
  c->r[4]=0u+0x00000009u; // 8021AAF8
  c->r[5]=0u+0x00000000u; // 8021AAFC
  c->r[6]=0u+0x00000004u; // 8021AB00
  c->r[7]=0u+0x00000000u; // 8021AB04
  c->lr=0x8021AB0Cu; f_80207B10(c); // 8021AB08
  cmps(c,0,(int32_t)c->r[29],0); // 8021AB0C
  if (crb(c,2)) { goto L_8021AB2C; } // 8021AB10
  c->r[3]=0u+0x00000000u; // 8021AB14
  c->r[4]=0u+0x0000000Bu; // 8021AB18
  c->r[5]=0u+0x00000001u; // 8021AB1C
  c->r[6]=0u+0x00000005u; // 8021AB20
  c->r[7]=0u+0x00000000u; // 8021AB24
  c->lr=0x8021AB2Cu; f_80207B10(c); // 8021AB28
L_8021AB2C:;
  c->r[31]=0u+0x00000000u; // 8021AB2C
  goto L_8021AB50; // 8021AB30
L_8021AB34:;
  c->r[4]=c->r[31]+0x0000000Du; // 8021AB34
  c->r[3]=0u+0x00000000u; // 8021AB38
  c->r[5]=0u+0x00000001u; // 8021AB3C
  c->r[6]=0u+0x00000004u; // 8021AB40
  c->r[7]=0u+0x00000000u; // 8021AB44
  c->lr=0x8021AB4Cu; f_80207B10(c); // 8021AB48
  c->r[31]=c->r[31]+0x00000001u; // 8021AB4C
L_8021AB50:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8021AB50
  if (crb(c,0)) { IRQCHK(c); goto L_8021AB34; } // 8021AB54
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021AB58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021AB5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021AB60
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021AB64
  c->lr=c->r[0]; // 8021AB68
  c->r[1]=c->r[1]+0x00000020u; // 8021AB6C
  return; // 8021AB70
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
void f_8021AB80(Ctx* __restrict c) {
  trace_call(0x8021AB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AB80
  c->r[0]=c->lr; // 8021AB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021AB88
  c->r[11]=c->r[1]+0x00000020u; // 8021AB8C
  c->lr=0x8021AB94u; f_800C2E4C(c); // 8021AB90
  c->r[27]=c->r[3]|c->r[3]; // 8021AB94
  c->r[28]=c->r[4]|c->r[4]; // 8021AB98
  c->r[29]=c->r[5]|c->r[5]; // 8021AB9C
  c->r[30]=c->r[6]|c->r[6]; // 8021ABA0
  c->r[31]=c->r[7]|c->r[7]; // 8021ABA4
  c->r[3]=0u+0x00000080u; // 8021ABA8
  c->r[4]=0u+0x00000000u; // 8021ABAC
  c->r[5]=0u+0x00000004u; // 8021ABB0
  c->lr=0x8021ABB8u; f_80208FD0(c); // 8021ABB4
  c->r[3]=0u+0xCC010000u; // 8021ABB8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ABBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ABC0
  cmps(c,0,(int32_t)c->r[31],0); // 8021ABC4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ABC8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ABCC
  if (crb(c,2)) { goto L_8021ABDC; } // 8021ABD0
  c->r[0]=R32(c->r[31]+0x00000000u); // 8021ABD4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8021ABD8
L_8021ABDC:;
  cmps(c,1,(int32_t)c->r[29],0); // 8021ABDC
  c->r[6]=0u+0x00000000u; // 8021ABE0
  if (!crb(c,5)) { goto L_8021ACF4; } // 8021ABE4
  cmps(c,0,(int32_t)c->r[29],8); // 8021ABE8
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8021ABEC
  if (!crb(c,1)) { goto L_8021ACC0; } // 8021ABF0
  c->r[5]=0u+0x00000000u; // 8021ABF4
  if (crb(c,4)) { goto L_8021AC10; } // 8021ABF8
  c->r[3]=0u+0x80000000u; // 8021ABFC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8021AC00
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8021AC04
  if (crb(c,1)) { goto L_8021AC10; } // 8021AC08
  c->r[5]=0u+0x00000001u; // 8021AC0C
L_8021AC10:;
  cmps(c,0,(int32_t)c->r[5],0); // 8021AC10
  if (crb(c,2)) { goto L_8021ACC0; } // 8021AC14
  c->r[0]=c->r[4]+0x00000007u; // 8021AC18
  c->r[5]=c->r[30]|c->r[30]; // 8021AC1C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021AC20
  c->r[3]=0u+0xCC010000u; // 8021AC24
  c->ctr=c->r[0]; // 8021AC28
  cmps(c,0,(int32_t)c->r[4],0); // 8021AC2C
  if (!crb(c,1)) { goto L_8021ACC0; } // 8021AC30
L_8021AC34:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC34
  c->r[6]=c->r[6]+0x00000008u; // 8021AC38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC3C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC40
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC44
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC48
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC4C
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC54
  {uint32_t ea=c->r[5]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC58
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC5C
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC64
  {uint32_t ea=c->r[5]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC68
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC6C
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC70
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC74
  {uint32_t ea=c->r[5]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC78
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC7C
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC80
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC84
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC88
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC8C
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC90
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC94
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC98
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AC9C
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACA0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ACA4
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACA8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ACAC
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACB0
  c->r[5]=c->r[5]+0x00000100u; // 8021ACB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ACB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021AC34; } // 8021ACBC
L_8021ACC0:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8021ACC0
  c->r[0]=c->r[29]-c->r[6]; // 8021ACC4
  c->r[4]=c->r[30]+c->r[3]; // 8021ACC8
  c->r[3]=0u+0xCC010000u; // 8021ACCC
  c->ctr=c->r[0]; // 8021ACD0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8021ACD4
  if (!crb(c,0)) { goto L_8021ACF4; } // 8021ACD8
L_8021ACDC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ACE0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACE4
  c->r[4]=c->r[4]+0x00000020u; // 8021ACE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ACEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021ACDC; } // 8021ACF0
L_8021ACF4:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ACF4
  c->r[3]=0u+0xCC010000u; // 8021ACF8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ACFC
  cmps(c,0,(int32_t)c->r[31],0); // 8021AD00
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AD04
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8021AD08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AD0C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8021AD10
  if (crb(c,2)) { goto L_8021AD20; } // 8021AD14
  c->r[0]=R32(c->r[31]+0x00000004u); // 8021AD18
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8021AD1C
L_8021AD20:;
  cmps(c,1,(int32_t)c->r[29],0); // 8021AD20
  c->r[6]=0u+0x00000000u; // 8021AD24
  if (!crb(c,5)) { goto L_8021AE38; } // 8021AD28
  cmps(c,0,(int32_t)c->r[29],8); // 8021AD2C
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8021AD30
  if (!crb(c,1)) { goto L_8021AE04; } // 8021AD34
  c->r[5]=0u+0x00000000u; // 8021AD38
  if (crb(c,4)) { goto L_8021AD54; } // 8021AD3C
  c->r[3]=0u+0x80000000u; // 8021AD40
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8021AD44
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8021AD48
  if (crb(c,1)) { goto L_8021AD54; } // 8021AD4C
  c->r[5]=0u+0x00000001u; // 8021AD50
L_8021AD54:;
  cmps(c,0,(int32_t)c->r[5],0); // 8021AD54
  if (crb(c,2)) { goto L_8021AE04; } // 8021AD58
  c->r[0]=c->r[4]+0x00000007u; // 8021AD5C
  c->r[5]=c->r[30]|c->r[30]; // 8021AD60
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021AD64
  c->r[3]=0u+0xCC010000u; // 8021AD68
  c->ctr=c->r[0]; // 8021AD6C
  cmps(c,0,(int32_t)c->r[4],0); // 8021AD70
  if (!crb(c,1)) { goto L_8021AE04; } // 8021AD74
L_8021AD78:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AD78
  c->r[6]=c->r[6]+0x00000008u; // 8021AD7C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AD80
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AD84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AD88
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AD8C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AD90
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AD94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AD98
  {uint32_t ea=c->r[5]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AD9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADA0
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADA8
  {uint32_t ea=c->r[5]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADAC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADB0
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADB8
  {uint32_t ea=c->r[5]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADC0
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADC4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADC8
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADCC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADD0
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADD8
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADE0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADE4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADE8
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADF0
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ADF4
  c->r[5]=c->r[5]+0x00000100u; // 8021ADF8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021ADFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021AD78; } // 8021AE00
L_8021AE04:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8021AE04
  c->r[0]=c->r[29]-c->r[6]; // 8021AE08
  c->r[4]=c->r[30]+c->r[3]; // 8021AE0C
  c->r[3]=0u+0xCC010000u; // 8021AE10
  c->ctr=c->r[0]; // 8021AE14
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8021AE18
  if (!crb(c,0)) { goto L_8021AE38; } // 8021AE1C
L_8021AE20:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AE20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AE24
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AE28
  c->r[4]=c->r[4]+0x00000020u; // 8021AE2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AE30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021AE20; } // 8021AE34
L_8021AE38:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AE38
  c->r[3]=0u+0xCC010000u; // 8021AE3C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AE40
  cmps(c,0,(int32_t)c->r[31],0); // 8021AE44
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AE48
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8021AE4C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AE50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8021AE54
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8021AE58
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AE5C
  if (crb(c,2)) { goto L_8021AE6C; } // 8021AE60
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8021AE64
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8021AE68
L_8021AE6C:;
  cmps(c,1,(int32_t)c->r[29],0); // 8021AE6C
  c->r[6]=0u+0x00000000u; // 8021AE70
  if (!crb(c,5)) { goto L_8021AF84; } // 8021AE74
  cmps(c,0,(int32_t)c->r[29],8); // 8021AE78
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8021AE7C
  if (!crb(c,1)) { goto L_8021AF50; } // 8021AE80
  c->r[5]=0u+0x00000000u; // 8021AE84
  if (crb(c,4)) { goto L_8021AEA0; } // 8021AE88
  c->r[3]=0u+0x80000000u; // 8021AE8C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8021AE90
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8021AE94
  if (crb(c,1)) { goto L_8021AEA0; } // 8021AE98
  c->r[5]=0u+0x00000001u; // 8021AE9C
L_8021AEA0:;
  cmps(c,0,(int32_t)c->r[5],0); // 8021AEA0
  if (crb(c,2)) { goto L_8021AF50; } // 8021AEA4
  c->r[0]=c->r[4]+0x00000007u; // 8021AEA8
  c->r[5]=c->r[30]|c->r[30]; // 8021AEAC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021AEB0
  c->r[3]=0u+0xCC010000u; // 8021AEB4
  c->ctr=c->r[0]; // 8021AEB8
  cmps(c,0,(int32_t)c->r[4],0); // 8021AEBC
  if (!crb(c,1)) { goto L_8021AF50; } // 8021AEC0
L_8021AEC4:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AEC4
  c->r[6]=c->r[6]+0x00000008u; // 8021AEC8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AECC
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AED0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AED4
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AED8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AEDC
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AEE0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AEE4
  {uint32_t ea=c->r[5]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AEE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AEEC
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AEF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AEF4
  {uint32_t ea=c->r[5]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AEF8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AEFC
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF04
  {uint32_t ea=c->r[5]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF0C
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF14
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF1C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF24
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF28
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF2C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF30
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF34
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF3C
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF40
  c->r[5]=c->r[5]+0x00000100u; // 8021AF44
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021AEC4; } // 8021AF4C
L_8021AF50:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8021AF50
  c->r[0]=c->r[29]-c->r[6]; // 8021AF54
  c->r[4]=c->r[30]+c->r[3]; // 8021AF58
  c->r[3]=0u+0xCC010000u; // 8021AF5C
  c->ctr=c->r[0]; // 8021AF60
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8021AF64
  if (!crb(c,0)) { goto L_8021AF84; } // 8021AF68
L_8021AF6C:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF6C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF70
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF74
  c->r[4]=c->r[4]+0x00000020u; // 8021AF78
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AF7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021AF6C; } // 8021AF80
L_8021AF84:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AF84
  c->r[3]=0u+0xCC010000u; // 8021AF88
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AF8C
  cmps(c,0,(int32_t)c->r[31],0); // 8021AF90
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AF94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8021AF98
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8021AF9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021AFA0
  if (crb(c,2)) { goto L_8021AFB0; } // 8021AFA4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8021AFA8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8021AFAC
L_8021AFB0:;
  cmps(c,1,(int32_t)c->r[29],0); // 8021AFB0
  c->r[6]=0u+0x00000000u; // 8021AFB4
  if (!crb(c,5)) { goto L_8021B0C8; } // 8021AFB8
  cmps(c,0,(int32_t)c->r[29],8); // 8021AFBC
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 8021AFC0
  if (!crb(c,1)) { goto L_8021B094; } // 8021AFC4
  c->r[5]=0u+0x00000000u; // 8021AFC8
  if (crb(c,4)) { goto L_8021AFE4; } // 8021AFCC
  c->r[3]=0u+0x80000000u; // 8021AFD0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8021AFD4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8021AFD8
  if (crb(c,1)) { goto L_8021AFE4; } // 8021AFDC
  c->r[5]=0u+0x00000001u; // 8021AFE0
L_8021AFE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8021AFE4
  if (crb(c,2)) { goto L_8021B094; } // 8021AFE8
  c->r[0]=c->r[4]+0x00000007u; // 8021AFEC
  c->r[5]=c->r[30]|c->r[30]; // 8021AFF0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8021AFF4
  c->r[3]=0u+0xCC010000u; // 8021AFF8
  c->ctr=c->r[0]; // 8021AFFC
  cmps(c,0,(int32_t)c->r[4],0); // 8021B000
  if (!crb(c,1)) { goto L_8021B094; } // 8021B004
L_8021B008:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B008
  c->r[6]=c->r[6]+0x00000008u; // 8021B00C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B010
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B014
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B018
  {uint32_t ea=c->r[5]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B01C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B020
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B024
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B028
  {uint32_t ea=c->r[5]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B02C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B030
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B034
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B038
  {uint32_t ea=c->r[5]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B03C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B040
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B044
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B048
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B04C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B050
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B054
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B058
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B05C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B060
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B064
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B068
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B06C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B070
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B074
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B078
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B07C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B080
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B084
  c->r[5]=c->r[5]+0x00000100u; // 8021B088
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B08C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021B008; } // 8021B090
L_8021B094:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8021B094
  c->r[0]=c->r[29]-c->r[6]; // 8021B098
  c->r[4]=c->r[30]+c->r[3]; // 8021B09C
  c->r[3]=0u+0xCC010000u; // 8021B0A0
  c->ctr=c->r[0]; // 8021B0A4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 8021B0A8
  if (!crb(c,0)) { goto L_8021B0C8; } // 8021B0AC
L_8021B0B0:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B0B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B0B4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B0B8
  c->r[4]=c->r[4]+0x00000020u; // 8021B0BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B0C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021B0B0; } // 8021B0C4
L_8021B0C8:;
  c->r[11]=c->r[1]+0x00000020u; // 8021B0C8
  c->lr=0x8021B0D0u; f_800C2E98(c); // 8021B0CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B0D0
  c->lr=c->r[0]; // 8021B0D4
  c->r[1]=c->r[1]+0x00000020u; // 8021B0D8
  return; // 8021B0DC
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5ColorUc
void f_8021B0E0(Ctx* __restrict c) {
  trace_call(0x8021B0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B0E0
  c->r[0]=c->lr; // 8021B0E4
  cmps(c,0,(int32_t)c->r[7],0); // 8021B0E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021B0EC
  c->r[0]=0u+0xFFFFFFFFu; // 8021B0F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8021B0F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8021B0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B0FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8021B100
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021B104
  if (crb(c,2)) { goto L_8021B1E8; } // 8021B108
  c->r[0]=0u+0x00000002u; // 8021B10C
  c->r[12]=c->r[7]|c->r[7]; // 8021B110
  c->r[31]=c->r[1]+0x00000010u; // 8021B114
  c->r[11]=0u+0x00000000u; // 8021B118
  c->r[9]=0u+0x80810000u; // 8021B11C
  c->ctr=c->r[0]; // 8021B120
  c->r[0]=c->r[0]|0x00000000u; // 8021B124
L_8021B128:;
  c->r[0]=R32(c->r[12]+0x00000000u); // 8021B128
  cmpu(c,0,c->r[8],0x000000FFu); // 8021B12C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B130
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021B134
  if (crb(c,2)) { goto L_8021B160; } // 8021B138
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 8021B13C
  c->r[10]=c->r[9]+0xFFFF8081u; // 8021B140
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8021B144
  c->r[10]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 8021B148
  c->r[0]=c->r[10]+c->r[0]; // 8021B14C
  c->r[0]=sraw(c,c->r[0],7); // 8021B150
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 8021B154
  c->r[0]=c->r[0]+c->r[10]; // 8021B158
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8021B15C
L_8021B160:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8021B160
  cmpu(c,0,c->r[8],0x000000FFu); // 8021B164
  W8(c->r[31]+0x00000000u,c->r[0]); // 8021B168
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8021B16C
  W8(c->r[31]+0x00000001u,c->r[0]); // 8021B170
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 8021B174
  W8(c->r[31]+0x00000002u,c->r[0]); // 8021B178
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8021B17C
  W8(c->r[31]+0x00000003u,c->r[0]); // 8021B180
  c->r[0]=R32(c->r[12]+0x00000004u); // 8021B184
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B188
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021B18C
  if (crb(c,2)) { goto L_8021B1B8; } // 8021B190
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 8021B194
  c->r[10]=c->r[9]+0xFFFF8081u; // 8021B198
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8021B19C
  c->r[10]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 8021B1A0
  c->r[0]=c->r[10]+c->r[0]; // 8021B1A4
  c->r[0]=sraw(c,c->r[0],7); // 8021B1A8
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 8021B1AC
  c->r[0]=c->r[0]+c->r[10]; // 8021B1B0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8021B1B4
L_8021B1B8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8021B1B8
  c->r[12]=c->r[12]+0x00000008u; // 8021B1BC
  W8(c->r[31]+0x00000004u,c->r[0]); // 8021B1C0
  c->r[11]=c->r[11]+0x00000001u; // 8021B1C4
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8021B1C8
  W8(c->r[31]+0x00000005u,c->r[0]); // 8021B1CC
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 8021B1D0
  W8(c->r[31]+0x00000006u,c->r[0]); // 8021B1D4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8021B1D8
  W8(c->r[31]+0x00000007u,c->r[0]); // 8021B1DC
  c->r[31]=c->r[31]+0x00000008u; // 8021B1E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021B128; } // 8021B1E4
L_8021B1E8:;
  cmps(c,0,(int32_t)c->r[7],0); // 8021B1E8
  c->r[7]=0u+0x00000000u; // 8021B1EC
  if (crb(c,2)) { goto L_8021B1F8; } // 8021B1F0
  c->r[7]=c->r[1]+0x00000010u; // 8021B1F4
L_8021B1F8:;
  c->lr=0x8021B1FCu; f_8021AB80(c); // 8021B1F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021B1FC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8021B200
  c->lr=c->r[0]; // 8021B204
  c->r[1]=c->r[1]+0x00000030u; // 8021B208
  return; // 8021B20C
}

// DrawLine__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeQ36nw4hbm2ut5Color
void f_8021B210(Ctx* __restrict c) {
  trace_call(0x8021B210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B210
  c->r[0]=c->lr; // 8021B214
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021B21C
  c->r[31]=c->r[5]|c->r[5]; // 8021B220
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021B224
  c->r[30]=c->r[4]|c->r[4]; // 8021B228
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021B22C
  c->r[29]=c->r[3]|c->r[3]; // 8021B230
  c->lr=0x8021B238u; f_80207AD0(c); // 8021B234
  c->r[3]=0u+0x00000009u; // 8021B238
  c->r[4]=0u+0x00000001u; // 8021B23C
  c->lr=0x8021B244u; f_80207470(c); // 8021B240
  c->r[3]=0u+0x00000000u; // 8021B244
  c->r[4]=0u+0x00000009u; // 8021B248
  c->r[5]=0u+0x00000000u; // 8021B24C
  c->r[6]=0u+0x00000004u; // 8021B250
  c->r[7]=0u+0x00000000u; // 8021B254
  c->lr=0x8021B25Cu; f_80207B10(c); // 8021B258
  c->r[3]=0u+0x00000001u; // 8021B25C
  c->lr=0x8021B264u; f_8020A170(c); // 8021B260
  c->r[3]=0u+0x00000004u; // 8021B264
  c->r[4]=0u+0x00000000u; // 8021B268
  c->r[5]=0u+0x00000000u; // 8021B26C
  c->r[6]=0u+0x00000000u; // 8021B270
  c->r[7]=0u+0x00000000u; // 8021B274
  c->r[8]=0u+0x00000000u; // 8021B278
  c->r[9]=0u+0x00000002u; // 8021B27C
  c->lr=0x8021B284u; f_8020A1A0(c); // 8021B280
  c->r[0]=R32(c->r[31]+0x00000000u); // 8021B284
  c->r[4]=c->r[1]+0x00000008u; // 8021B288
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B28C
  c->r[3]=0u+0x00000004u; // 8021B290
  c->lr=0x8021B298u; f_8020A090(c); // 8021B294
  c->r[3]=0u+0x00000000u; // 8021B298
  c->lr=0x8021B2A0u; f_80208480(c); // 8021B29C
  c->r[3]=0u+0x00000001u; // 8021B2A0
  c->lr=0x8021B2A8u; f_8020BD20(c); // 8021B2A4
  c->r[3]=0u+0x00000000u; // 8021B2A8
  c->lr=0x8021B2B0u; f_8020B5A0(c); // 8021B2AC
  c->r[3]=0u+0x00000000u; // 8021B2B0
  c->r[4]=0u+0x000000FFu; // 8021B2B4
  c->r[5]=0u+0x000000FFu; // 8021B2B8
  c->r[6]=0u+0x00000004u; // 8021B2BC
  c->lr=0x8021B2C4u; f_8020BBC0(c); // 8021B2C0
  c->r[3]=0u+0x00000000u; // 8021B2C4
  c->r[4]=0u+0x00000004u; // 8021B2C8
  c->lr=0x8021B2D0u; f_8020B680(c); // 8021B2CC
  c->r[3]=0u+0x00000000u; // 8021B2D0
  c->lr=0x8021B2D8u; f_8020B5C0(c); // 8021B2D4
  c->r[3]=0u+0x00000000u; // 8021B2D8
  c->r[4]=0u+0x00000000u; // 8021B2DC
  c->r[5]=0u+0x00000000u; // 8021B2E0
  c->lr=0x8021B2E8u; f_8020BA30(c); // 8021B2E4
  c->r[3]=0u+0x00000000u; // 8021B2E8
  c->r[4]=0u+0x00000000u; // 8021B2EC
  c->r[5]=0u+0x00000001u; // 8021B2F0
  c->r[6]=0u+0x00000002u; // 8021B2F4
  c->r[7]=0u+0x00000003u; // 8021B2F8
  c->lr=0x8021B300u; f_8020BA70(c); // 8021B2FC
  c->r[3]=0u+0x00000007u; // 8021B300
  c->r[4]=0u+0x00000000u; // 8021B304
  c->r[5]=0u+0x00000000u; // 8021B308
  c->r[6]=0u+0x00000007u; // 8021B30C
  c->r[7]=0u+0x00000000u; // 8021B310
  c->lr=0x8021B318u; f_8020BAF0(c); // 8021B314
  c->r[3]=0u+0x00000001u; // 8021B318
  c->r[4]=0u+0x00000004u; // 8021B31C
  c->r[5]=0u+0x00000005u; // 8021B320
  c->r[6]=0u+0x0000000Fu; // 8021B324
  c->lr=0x8021B32Cu; f_8020C090(c); // 8021B328
  c->r[3]=0u+0x00000006u; // 8021B32C
  c->r[4]=0u+0x00000000u; // 8021B330
  c->lr=0x8021B338u; f_80209200(c); // 8021B334
  c->r[3]=0u+0x000000B0u; // 8021B338
  c->r[4]=0u+0x00000000u; // 8021B33C
  c->r[5]=0u+0x00000005u; // 8021B340
  c->lr=0x8021B348u; f_80208FD0(c); // 8021B344
  c->r[3]=0u+0xCC010000u; // 8021B348
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B34C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B350
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8021B354
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B358
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8021B35C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8021B360
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B364
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8021B368
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8021B36C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8021B370
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8021B374
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B378
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8021B37C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8021B380
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8021B384
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8021B388
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B38C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021B390
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021B394
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021B398
  c->lr=c->r[0]; // 8021B39C
  c->r[1]=c->r[1]+0x00000020u; // 8021B3A0
  return; // 8021B3A4
}

// InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
void f_8021B3B0(Ctx* __restrict c) {
  trace_call(0x8021B3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B3B0
  c->r[0]=c->lr; // 8021B3B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021B3B8
  c->r[0]=0u+0x80000000u; // 8021B3BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8021B3C0
  c->r[31]=c->r[3]|c->r[3]; // 8021B3C4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8021B3C8
  c->r[30]=c->r[5]|c->r[5]; // 8021B3CC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8021B3D0
  c->r[29]=c->r[4]|c->r[4]; // 8021B3D4
  c->r[6]=R32(c->r[4]+0x00000008u); // 8021B3D8
  cmpu(c,0,c->r[6],c->r[0]); // 8021B3DC
  if (!crb(c,0)) { goto L_8021B3EC; } // 8021B3E0
  c->r[3]=c->r[29]|c->r[29]; // 8021B3E4
  c->lr=0x8021B3ECu; f_8025A550(c); // 8021B3E8
L_8021B3EC:;
  c->r[3]=c->r[29]|c->r[29]; // 8021B3EC
  c->r[4]=c->r[30]|c->r[30]; // 8021B3F0
  c->lr=0x8021B3F8u; f_8025A670(c); // 8021B3F4
  c->r[9]=R32(c->r[3]+0x00000000u); // 8021B3F8
  c->r[30]=c->r[3]|c->r[3]; // 8021B3FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8021B400
  c->r[5]=R8(c->r[9]+0x00000021u); // 8021B404
  c->r[4]=R8(c->r[9]+0x00000022u); // 8021B408
  cmps(c,0,(int32_t)c->r[0],0); // 8021B40C
  c->r[3]=c->r[4]-c->r[5]; // 8021B410
  c->r[0]=c->r[5]-c->r[4]; // 8021B414
  c->r[0]=c->r[3]|c->r[0]; // 8021B418
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 8021B41C
  if (crb(c,2)) { goto L_8021B45C; } // 8021B420
  c->r[0]=0u+0x00000000u; // 8021B424
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B428
  c->r[3]=c->r[31]|c->r[31]; // 8021B42C
  c->r[4]=R32(c->r[9]+0x00000008u); // 8021B430
  c->r[5]=R16(c->r[9]+0x00000002u); // 8021B434
  c->r[6]=R16(c->r[9]+0x00000000u); // 8021B438
  c->r[7]=R32(c->r[9]+0x00000004u); // 8021B43C
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 8021B440
  c->r[9]=R32(c->r[9]+0x00000010u); // 8021B444
  c->lr=0x8021B44Cu; f_8020A520(c); // 8021B448
  c->r[4]=R32(c->r[30]+0x00000004u); // 8021B44C
  c->r[3]=c->r[31]|c->r[31]; // 8021B450
  c->lr=0x8021B458u; f_8020A740(c); // 8021B454
  goto L_8021B47C; // 8021B458
L_8021B45C:;
  c->r[4]=R32(c->r[9]+0x00000008u); // 8021B45C
  c->r[3]=c->r[31]|c->r[31]; // 8021B460
  c->r[5]=R16(c->r[9]+0x00000002u); // 8021B464
  c->r[6]=R16(c->r[9]+0x00000000u); // 8021B468
  c->r[7]=R32(c->r[9]+0x00000004u); // 8021B46C
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 8021B470
  c->r[9]=R32(c->r[9]+0x00000010u); // 8021B474
  c->lr=0x8021B47Cu; f_8020A310(c); // 8021B478
L_8021B47C:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 8021B47C
  c->r[5]=0u+0x43300000u; // 8021B480
  c->r[4]=0u+0x80380000u; // 8021B484
  W32(c->r[1]+0x00000010u,c->r[5]); // 8021B488
  c->r[7]=R8(c->r[9]+0x00000021u); // 8021B48C
  c->r[3]=c->r[31]|c->r[31]; // 8021B490
  W32(c->r[1]+0x00000014u,c->r[7]); // 8021B494
  c->r[6]=0u+0x00000000u; // 8021B498
  c->r[0]=R8(c->r[9]+0x00000022u); // 8021B49C
  c->r[8]=0u+0x00000000u; // 8021B4A0
  {uint32_t ea=c->r[4]+0xFFFFF828u; c->f[2]=RF64(ea);} // 8021B4A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8021B4A8
  W32(c->r[1]+0x00000018u,c->r[5]); // 8021B4AC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8021B4B0
  c->r[4]=R32(c->r[9]+0x00000014u); // 8021B4B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021B4B8
  c->r[5]=R32(c->r[9]+0x00000018u); // 8021B4BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8021B4C0
  {uint32_t ea=c->r[9]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021B4C4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 8021B4C8
  c->r[7]=R8(c->r[9]+0x00000020u); // 8021B4CC
  c->lr=0x8021B4D4u; f_8020A570(c); // 8021B4D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021B4D4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8021B4D8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8021B4DC
  c->r[29]=R32(c->r[1]+0x00000024u); // 8021B4E0
  c->lr=c->r[0]; // 8021B4E4
  c->r[1]=c->r[1]+0x00000030u; // 8021B4E8
  return; // 8021B4EC
}

// __ct__Q36nw4hbm3lyt8DrawInfoFv
void f_8021B4F0(Ctx* __restrict c) {
  trace_call(0x8021B4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B4F0
  c->r[0]=c->lr; // 8021B4F4
  c->r[5]=0u+0x80380000u; // 8021B4F8
  c->r[4]=0u+0x80380000u; // 8021B4FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B500
  {uint32_t ea=c->r[5]+0xFFFFF830u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B504
  c->r[5]=0u+0x803A0000u; // 8021B508
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B50C
  c->r[5]=c->r[5]+0x000077E8u; // 8021B510
  {uint32_t ea=c->r[4]+0xFFFFF834u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021B514
  c->r[31]=c->r[3]|c->r[3]; // 8021B518
  W32(c->r[3]+0x00000000u,c->r[5]); // 8021B51C
  c->r[4]=0u+0x00000000u; // 8021B520
  c->r[5]=0u+0x00000001u; // 8021B524
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8021B528
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8021B52C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8021B530
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8021B534
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8021B538
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8021B53C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8021B540
  c->r[3]=c->r[3]+0x00000050u; // 8021B544
  c->lr=0x8021B54Cu; f_80004350(c); // 8021B548
  c->r[3]=c->r[31]+0x00000004u; // 8021B54C
  c->lr=0x8021B554u; f_8023EF10(c); // 8021B550
  c->r[3]=c->r[31]|c->r[31]; // 8021B554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B558
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B55C
  c->lr=c->r[0]; // 8021B560
  c->r[1]=c->r[1]+0x00000010u; // 8021B564
  return; // 8021B568
}

// __dt__Q36nw4hbm3lyt8DrawInfoFv
void f_8021B570(Ctx* __restrict c) {
  trace_call(0x8021B570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B570
  c->r[0]=c->lr; // 8021B574
  cmps(c,0,(int32_t)c->r[3],0); // 8021B578
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B57C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B580
  c->r[31]=c->r[3]|c->r[3]; // 8021B584
  if (crb(c,2)) { goto L_8021B598; } // 8021B588
  cmps(c,0,(int32_t)c->r[4],0); // 8021B58C
  if (!crb(c,1)) { goto L_8021B598; } // 8021B590
  c->lr=0x8021B598u; f_800C2AC0(c); // 8021B594
L_8021B598:;
  c->r[3]=c->r[31]|c->r[31]; // 8021B598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B5A0
  c->lr=c->r[0]; // 8021B5A4
  c->r[1]=c->r[1]+0x00000010u; // 8021B5A8
  return; // 8021B5AC
}

// __ct__Q36nw4hbm3lyt5GroupFPCQ46nw4hbm3lyt3res5GroupPQ36nw4hbm3lyt4Pane
void f_8021B5B0(Ctx* __restrict c) {
  trace_call(0x8021B5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B5B0
  c->r[0]=c->lr; // 8021B5B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8021B5B8
  c->r[11]=c->r[1]+0x00000040u; // 8021B5BC
  c->lr=0x8021B5C4u; f_800C2E3C(c); // 8021B5C0
  c->r[6]=0u+0x803A0000u; // 8021B5C4
  c->r[29]=0u+0x00000000u; // 8021B5C8
  c->r[0]=c->r[3]+0x00000010u; // 8021B5CC
  W32(c->r[3]+0x00000004u,c->r[29]); // 8021B5D0
  c->r[6]=c->r[6]+0x00007818u; // 8021B5D4
  c->r[24]=c->r[4]|c->r[4]; // 8021B5D8
  c->r[25]=c->r[5]|c->r[5]; // 8021B5DC
  W32(c->r[3]+0x00000000u,c->r[6]); // 8021B5E0
  c->r[23]=c->r[3]|c->r[3]; // 8021B5E4
  c->r[5]=0u+0x00000010u; // 8021B5E8
  W32(c->r[3]+0x00000008u,c->r[29]); // 8021B5EC
  c->r[4]=c->r[4]+0x00000008u; // 8021B5F0
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8021B5F4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8021B5F8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8021B5FC
  W8(c->r[3]+0x00000028u,c->r[29]); // 8021B600
  c->r[3]=c->r[3]+0x00000018u; // 8021B604
  c->lr=0x8021B60Cu; f_80004000(c); // 8021B608
  c->r[27]=c->r[24]+0x0000001Cu; // 8021B60C
  c->r[26]=0u+0x00000000u; // 8021B610
  c->r[28]=0u+0x00000000u; // 8021B614
  c->r[31]=0u+0x80490000u; // 8021B618
  goto L_8021B68C; // 8021B61C
L_8021B620:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8021B620
  c->r[3]=c->r[25]|c->r[25]; // 8021B624
  c->r[4]=c->r[27]+c->r[28]; // 8021B628
  c->r[5]=0u+0x00000001u; // 8021B62C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021B630
  c->ctr=c->r[12]; // 8021B634
  if (true) { c->lr=0x8021B63Cu; dispatch(c,c->ctr); } // 8021B638
  cmps(c,0,(int32_t)c->r[3],0); // 8021B63C
  c->r[30]=c->r[3]|c->r[3]; // 8021B640
  if (crb(c,2)) { goto L_8021B684; } // 8021B644
  c->r[3]=R32(c->r[31]+0x00001A20u); // 8021B648
  c->r[4]=0u+0x0000000Cu; // 8021B64C
  c->lr=0x8021B654u; f_8023B6D0(c); // 8021B650
  cmps(c,0,(int32_t)c->r[3],0); // 8021B654
  if (crb(c,2)) { goto L_8021B684; } // 8021B658
  c->r[5]=c->r[3]|c->r[3]; // 8021B65C
  if (crb(c,2)) { goto L_8021B66C; } // 8021B660
  W32(c->r[3]+0x00000000u,c->r[29]); // 8021B664
  W32(c->r[3]+0x00000004u,c->r[29]); // 8021B668
L_8021B66C:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 8021B66C
  c->r[0]=c->r[23]+0x00000010u; // 8021B670
  c->r[3]=c->r[23]+0x0000000Cu; // 8021B674
  c->r[4]=c->r[1]+0x00000008u; // 8021B678
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B67C
  c->lr=0x8021B684u; f_80226980(c); // 8021B680
L_8021B684:;
  c->r[28]=c->r[28]+0x00000010u; // 8021B684
  c->r[26]=c->r[26]+0x00000001u; // 8021B688
L_8021B68C:;
  c->r[0]=R16(c->r[24]+0x00000018u); // 8021B68C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 8021B690
  if (crb(c,0)) { IRQCHK(c); goto L_8021B620; } // 8021B694
  c->r[11]=c->r[1]+0x00000040u; // 8021B698
  c->r[3]=c->r[23]|c->r[23]; // 8021B69C
  c->lr=0x8021B6A4u; f_800C2E88(c); // 8021B6A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021B6A4
  c->lr=c->r[0]; // 8021B6A8
  c->r[1]=c->r[1]+0x00000040u; // 8021B6AC
  return; // 8021B6B0
}

// __dt__Q36nw4hbm3lyt5GroupFv
void f_8021B6C0(Ctx* __restrict c) {
  trace_call(0x8021B6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B6C0
  c->r[0]=c->lr; // 8021B6C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021B6C8
  c->r[11]=c->r[1]+0x00000030u; // 8021B6CC
  c->lr=0x8021B6D4u; f_800C2E48(c); // 8021B6D0
  cmps(c,0,(int32_t)c->r[3],0); // 8021B6D4
  c->r[26]=c->r[3]|c->r[3]; // 8021B6D8
  c->r[27]=c->r[4]|c->r[4]; // 8021B6DC
  if (crb(c,2)) { goto L_8021B74C; } // 8021B6E0
  c->r[4]=0u+0x803A0000u; // 8021B6E4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8021B6E8
  c->r[4]=c->r[4]+0x00007818u; // 8021B6EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8021B6F0
  c->r[30]=c->r[3]+0x00000010u; // 8021B6F4
  c->r[29]=0u+0x80490000u; // 8021B6F8
  goto L_8021B724; // 8021B6FC
L_8021B700:;
  c->r[28]=c->r[31]|c->r[31]; // 8021B700
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021B704
  c->r[3]=c->r[26]+0x0000000Cu; // 8021B708
  c->r[4]=c->r[1]+0x00000008u; // 8021B70C
  W32(c->r[1]+0x00000008u,c->r[28]); // 8021B710
  c->lr=0x8021B718u; f_80226930(c); // 8021B714
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021B718
  c->r[4]=c->r[28]|c->r[28]; // 8021B71C
  c->lr=0x8021B724u; f_8023B6E0(c); // 8021B720
L_8021B724:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021B724
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B700; } // 8021B728
  c->r[3]=addc(c,c->r[26],0x0000000Cu,0); cr0(c,c->r[3]); // 8021B72C
  if (crb(c,2)) { goto L_8021B73C; } // 8021B730
  c->r[4]=0u+0x00000000u; // 8021B734
  c->lr=0x8021B73Cu; f_802268A0(c); // 8021B738
L_8021B73C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021B73C
  if (!crb(c,1)) { goto L_8021B74C; } // 8021B740
  c->r[3]=c->r[26]|c->r[26]; // 8021B744
  c->lr=0x8021B74Cu; f_800C2AC0(c); // 8021B748
L_8021B74C:;
  c->r[11]=c->r[1]+0x00000030u; // 8021B74C
  c->r[3]=c->r[26]|c->r[26]; // 8021B750
  c->lr=0x8021B758u; f_800C2E94(c); // 8021B754
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021B758
  c->lr=c->r[0]; // 8021B75C
  c->r[1]=c->r[1]+0x00000030u; // 8021B760
  return; // 8021B764
}

// fn_8021B770
void f_8021B770(Ctx* __restrict c) {
  trace_call(0x8021B770u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B770
  c->r[0]=c->lr; // 8021B774
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021B778
  c->r[11]=c->r[1]+0x00000030u; // 8021B77C
  c->lr=0x8021B784u; f_800C2E48(c); // 8021B780
  cmps(c,0,(int32_t)c->r[3],0); // 8021B784
  c->r[26]=c->r[3]|c->r[3]; // 8021B788
  c->r[27]=c->r[4]|c->r[4]; // 8021B78C
  if (crb(c,2)) { goto L_8021B81C; } // 8021B790
  c->r[31]=R32(c->r[3]+0x00000004u); // 8021B794
  c->r[30]=c->r[3]+0x00000004u; // 8021B798
  c->r[29]=0u+0x80490000u; // 8021B79C
  goto L_8021B7F0; // 8021B7A0
L_8021B7A4:;
  c->r[28]=c->r[31]|c->r[31]; // 8021B7A4
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021B7A8
  c->r[3]=c->r[26]|c->r[26]; // 8021B7AC
  c->r[4]=c->r[1]+0x00000008u; // 8021B7B0
  W32(c->r[1]+0x00000008u,c->r[28]); // 8021B7B4
  c->lr=0x8021B7BCu; f_80226930(c); // 8021B7B8
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8021B7BC
  c->r[0]=R8(c->r[28]+0x00000028u); // 8021B7C0
  cmps(c,0,(int32_t)c->r[0],0); // 8021B7C4
  if (!crb(c,2)) { goto L_8021B7F0; } // 8021B7C8
  c->r[12]=R32(c->r[28]+0x00000000u); // 8021B7CC
  c->r[3]=c->r[28]|c->r[28]; // 8021B7D0
  c->r[4]=0u+0xFFFFFFFFu; // 8021B7D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021B7D8
  c->ctr=c->r[12]; // 8021B7DC
  if (true) { c->lr=0x8021B7E4u; dispatch(c,c->ctr); } // 8021B7E0
  c->r[3]=R32(c->r[29]+0x00001A20u); // 8021B7E4
  c->r[4]=c->r[28]|c->r[28]; // 8021B7E8
  c->lr=0x8021B7F0u; f_8023B6E0(c); // 8021B7EC
L_8021B7F0:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021B7F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B7A4; } // 8021B7F4
  cmps(c,0,(int32_t)c->r[26],0); // 8021B7F8
  if (crb(c,2)) { goto L_8021B80C; } // 8021B7FC
  c->r[3]=c->r[26]|c->r[26]; // 8021B800
  c->r[4]=0u+0x00000000u; // 8021B804
  c->lr=0x8021B80Cu; f_802268A0(c); // 8021B808
L_8021B80C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8021B80C
  if (!crb(c,1)) { goto L_8021B81C; } // 8021B810
  c->r[3]=c->r[26]|c->r[26]; // 8021B814
  c->lr=0x8021B81Cu; f_800C2AC0(c); // 8021B818
L_8021B81C:;
  c->r[11]=c->r[1]+0x00000030u; // 8021B81C
  c->r[3]=c->r[26]|c->r[26]; // 8021B820
  c->lr=0x8021B828u; f_800C2E94(c); // 8021B824
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021B828
  c->lr=c->r[0]; // 8021B82C
  c->r[1]=c->r[1]+0x00000030u; // 8021B830
  return; // 8021B834
}

// AppendGroup__Q36nw4hbm3lyt14GroupContainerFPQ36nw4hbm3lyt5Group
void f_8021B840(Ctx* __restrict c) {
  trace_call(0x8021B840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B840
  c->r[0]=c->lr; // 8021B844
  c->r[5]=c->r[4]|c->r[4]; // 8021B848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B84C
  c->r[0]=c->r[3]+0x00000004u; // 8021B850
  c->r[4]=c->r[1]+0x00000008u; // 8021B854
  c->r[5]=c->r[5]+0x00000004u; // 8021B858
  W32(c->r[1]+0x00000008u,c->r[0]); // 8021B85C
  c->lr=0x8021B864u; f_80226980(c); // 8021B860
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B864
  c->lr=c->r[0]; // 8021B868
  c->r[1]=c->r[1]+0x00000010u; // 8021B86C
  return; // 8021B870
}

// FindGroupByName__Q36nw4hbm3lyt14GroupContainerFPCc
void f_8021B880(Ctx* __restrict c) {
  trace_call(0x8021B880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B880
  c->r[0]=c->lr; // 8021B884
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8021B88C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021B890
  c->r[30]=c->r[3]+0x00000004u; // 8021B894
  W32(c->r[1]+0x00000014u,c->r[29]); // 8021B898
  W32(c->r[1]+0x00000010u,c->r[28]); // 8021B89C
  c->r[28]=c->r[4]|c->r[4]; // 8021B8A0
  c->r[31]=R32(c->r[3]+0x00000004u); // 8021B8A4
  goto L_8021B8D0; // 8021B8A8
L_8021B8AC:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 8021B8AC
  c->r[4]=c->r[28]|c->r[28]; // 8021B8B0
  c->r[3]=c->r[29]+0x00000018u; // 8021B8B4
  c->lr=0x8021B8BCu; f_8021A670(c); // 8021B8B8
  cmps(c,0,(int32_t)c->r[3],0); // 8021B8BC
  if (crb(c,2)) { goto L_8021B8CC; } // 8021B8C0
  c->r[3]=c->r[29]|c->r[29]; // 8021B8C4
  goto L_8021B8DC; // 8021B8C8
L_8021B8CC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021B8CC
L_8021B8D0:;
  cmpu(c,0,c->r[31],c->r[30]); // 8021B8D0
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B8AC; } // 8021B8D4
  c->r[3]=0u+0x00000000u; // 8021B8D8
L_8021B8DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B8DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021B8E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8021B8E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8021B8E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8021B8EC
  c->lr=c->r[0]; // 8021B8F0
  c->r[1]=c->r[1]+0x00000020u; // 8021B8F4
  return; // 8021B8F8
}

// SetTagProcessorImpl__24@unnamed@lyt_layout_cpp@FPQ36nw4hbm3lyt4PanePQ36nw4hbm2ut19TagProcessorBase<w>
void f_8021B900(Ctx* __restrict c) {
  trace_call(0x8021B900u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B900
  c->r[0]=c->lr; // 8021B904
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021B908
  c->r[11]=c->r[1]+0x00000030u; // 8021B90C
  c->lr=0x8021B914u; f_800C2E40(c); // 8021B910
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021B914
  c->r[26]=0u+0x80490000u; // 8021B918
  c->r[27]=c->r[3]|c->r[3]; // 8021B91C
  c->r[24]=c->r[4]|c->r[4]; // 8021B920
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021B924
  c->r[26]=c->r[26]+0x00001A38u; // 8021B928
  c->ctr=c->r[12]; // 8021B92C
  if (true) { c->lr=0x8021B934u; dispatch(c,c->ctr); } // 8021B930
  goto L_8021B94C; // 8021B934
L_8021B938:;
  cmpu(c,0,c->r[3],c->r[26]); // 8021B938
  if (!crb(c,2)) { goto L_8021B948; } // 8021B93C
  c->r[0]=0u+0x00000001u; // 8021B940
  goto L_8021B958; // 8021B944
L_8021B948:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021B948
L_8021B94C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021B94C
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B938; } // 8021B950
  c->r[0]=0u+0x00000000u; // 8021B954
L_8021B958:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021B958
  if (crb(c,2)) { goto L_8021B968; } // 8021B95C
  c->r[3]=c->r[27]|c->r[27]; // 8021B960
  goto L_8021B96C; // 8021B964
L_8021B968:;
  c->r[3]=0u+0x00000000u; // 8021B968
L_8021B96C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021B96C
  if (crb(c,2)) { goto L_8021B978; } // 8021B970
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8021B974
L_8021B978:;
  c->r[25]=0u+0x80490000u; // 8021B978
  c->r[31]=R32(c->r[27]+0x00000014u); // 8021B97C
  c->r[28]=c->r[27]+0x00000014u; // 8021B980
  c->r[25]=c->r[25]+0x00001A38u; // 8021B984
  goto L_8021BA80; // 8021B988
L_8021B98C:;
  c->r[26]=c->r[31]+0xFFFFFFFCu; // 8021B98C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8021B990
  c->r[3]=c->r[26]|c->r[26]; // 8021B994
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021B998
  c->ctr=c->r[12]; // 8021B99C
  if (true) { c->lr=0x8021B9A4u; dispatch(c,c->ctr); } // 8021B9A0
  goto L_8021B9BC; // 8021B9A4
L_8021B9A8:;
  cmpu(c,0,c->r[3],c->r[25]); // 8021B9A8
  if (!crb(c,2)) { goto L_8021B9B8; } // 8021B9AC
  c->r[0]=0u+0x00000001u; // 8021B9B0
  goto L_8021B9C8; // 8021B9B4
L_8021B9B8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021B9B8
L_8021B9BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021B9BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B9A8; } // 8021B9C0
  c->r[0]=0u+0x00000000u; // 8021B9C4
L_8021B9C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021B9C8
  if (crb(c,2)) { goto L_8021B9D8; } // 8021B9CC
  c->r[3]=c->r[26]|c->r[26]; // 8021B9D0
  goto L_8021B9DC; // 8021B9D4
L_8021B9D8:;
  c->r[3]=0u+0x00000000u; // 8021B9D8
L_8021B9DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021B9DC
  if (crb(c,2)) { goto L_8021B9E8; } // 8021B9E0
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8021B9E4
L_8021B9E8:;
  c->r[30]=R32(c->r[26]+0x00000014u); // 8021B9E8
  c->r[27]=c->r[26]+0x00000014u; // 8021B9EC
  goto L_8021BA74; // 8021B9F0
L_8021B9F4:;
  c->r[26]=c->r[30]+0xFFFFFFFCu; // 8021B9F4
  c->r[12]=R32(c->r[26]+0x00000000u); // 8021B9F8
  c->r[3]=c->r[26]|c->r[26]; // 8021B9FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021BA00
  c->ctr=c->r[12]; // 8021BA04
  if (true) { c->lr=0x8021BA0Cu; dispatch(c,c->ctr); } // 8021BA08
  goto L_8021BA24; // 8021BA0C
L_8021BA10:;
  cmpu(c,0,c->r[3],c->r[25]); // 8021BA10
  if (!crb(c,2)) { goto L_8021BA20; } // 8021BA14
  c->r[0]=0u+0x00000001u; // 8021BA18
  goto L_8021BA30; // 8021BA1C
L_8021BA20:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021BA20
L_8021BA24:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021BA24
  if (!crb(c,2)) { IRQCHK(c); goto L_8021BA10; } // 8021BA28
  c->r[0]=0u+0x00000000u; // 8021BA2C
L_8021BA30:;
  cmps(c,0,(int32_t)c->r[0],0); // 8021BA30
  if (crb(c,2)) { goto L_8021BA40; } // 8021BA34
  c->r[3]=c->r[26]|c->r[26]; // 8021BA38
  goto L_8021BA44; // 8021BA3C
L_8021BA40:;
  c->r[3]=0u+0x00000000u; // 8021BA40
L_8021BA44:;
  cmps(c,0,(int32_t)c->r[3],0); // 8021BA44
  if (crb(c,2)) { goto L_8021BA50; } // 8021BA48
  W32(c->r[3]+0x000000F4u,c->r[24]); // 8021BA4C
L_8021BA50:;
  {uint32_t ea=c->r[26]+0x00000014u; c->r[29]=R32(ea); c->r[26]=ea;} // 8021BA50
  goto L_8021BA68; // 8021BA54
L_8021BA58:;
  c->r[4]=c->r[24]|c->r[24]; // 8021BA58
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 8021BA5C
  c->lr=0x8021BA64u; f_8021B900(c); // 8021BA60
  c->r[29]=R32(c->r[29]+0x00000000u); // 8021BA64
L_8021BA68:;
  cmpu(c,0,c->r[29],c->r[26]); // 8021BA68
  if (!crb(c,2)) { IRQCHK(c); goto L_8021BA58; } // 8021BA6C
  c->r[30]=R32(c->r[30]+0x00000000u); // 8021BA70
L_8021BA74:;
  cmpu(c,0,c->r[30],c->r[27]); // 8021BA74
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B9F4; } // 8021BA78
  c->r[31]=R32(c->r[31]+0x00000000u); // 8021BA7C
L_8021BA80:;
  cmpu(c,0,c->r[31],c->r[28]); // 8021BA80
  if (!crb(c,2)) { IRQCHK(c); goto L_8021B98C; } // 8021BA84
  c->r[11]=c->r[1]+0x00000030u; // 8021BA88
  c->lr=0x8021BA90u; f_800C2E8C(c); // 8021BA8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021BA90
  c->lr=c->r[0]; // 8021BA94
  c->r[1]=c->r[1]+0x00000030u; // 8021BA98
  return; // 8021BA9C
}

// __ct__Q36nw4hbm3lyt6LayoutFv
void f_8021BAA0(Ctx* __restrict c) {
  trace_call(0x8021BAA0u);
  c->r[4]=0u+0x80380000u; // 8021BAA0
  c->r[0]=0u+0x00000000u; // 8021BAA4
  {uint32_t ea=c->r[4]+0xFFFFF838u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021BAA8
  c->r[4]=0u+0x803A0000u; // 8021BAAC
  c->r[5]=c->r[3]+0x00000008u; // 8021BAB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8021BAB4
  c->r[4]=c->r[4]+0x00007840u; // 8021BAB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8021BABC
  W32(c->r[3]+0x00000008u,c->r[5]); // 8021BAC0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8021BAC4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8021BAC8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8021BACC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8021BAD0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021BAD4
  W8(c->r[3]+0x00000020u,c->r[0]); // 8021BAD8
  return; // 8021BADC
}

