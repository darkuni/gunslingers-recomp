#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800FBC60
void f_800FBC60(Ctx* __restrict c) {
  trace_call(0x800FBC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBC60
  c->r[0]=c->lr; // 800FBC64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBC68
  c->r[11]=c->r[1]+0x00000020u; // 800FBC6C
  c->lr=0x800FBC74u; f_800C2E50(c); // 800FBC70
  cmps(c,0,(int32_t)c->r[5],0); // 800FBC74
  c->r[28]=c->r[3]|c->r[3]; // 800FBC78
  c->r[30]=c->r[4]|c->r[4]; // 800FBC7C
  c->r[29]=c->r[5]|c->r[5]; // 800FBC80
  if (!crb(c,2)) { goto L_800FBC90; } // 800FBC84
  c->r[3]=0u+0x00000025u; // 800FBC88
  goto L_800FBD34; // 800FBC8C
L_800FBC90:;
  c->r[0]=0u+0x00000000u; // 800FBC90
  W32(c->r[5]+0x00000000u,c->r[0]); // 800FBC94
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FBC98
  cmps(c,0,(int32_t)c->r[0],0); // 800FBC9C
  if (!crb(c,2)) { goto L_800FBCAC; } // 800FBCA0
  c->r[3]=0u+0x0000005Eu; // 800FBCA4
  goto L_800FBD34; // 800FBCA8
L_800FBCAC:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FBCAC
  c->r[5]=0u+0x80390000u; // 800FBCB0
  c->r[5]=c->r[5]+0xFFFFDF38u; // 800FBCB4
  c->r[4]=0u+0x00000018u; // 800FBCB8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FBCBC
  c->r[6]=0u+0x00000165u; // 800FBCC0
  c->r[7]=0u+0x00000000u; // 800FBCC4
  c->r[8]=0u+0x00000000u; // 800FBCC8
  c->lr=0x800FBCD0u; f_8018F230(c); // 800FBCCC
  cmps(c,0,(int32_t)c->r[3],0); // 800FBCD0
  c->r[31]=c->r[3]|c->r[3]; // 800FBCD4
  if (crb(c,2)) { goto L_800FBCE4; } // 800FBCD8
  c->lr=0x800FBCE0u; f_800FB4C0(c); // 800FBCDC
  c->r[31]=c->r[3]|c->r[3]; // 800FBCE0
L_800FBCE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FBCE4
  if (!crb(c,2)) { goto L_800FBCF4; } // 800FBCE8
  c->r[3]=0u+0x0000002Cu; // 800FBCEC
  goto L_800FBD34; // 800FBCF0
L_800FBCF4:;
  c->r[5]=R32(c->r[28]+0x00000008u); // 800FBCF4
  c->r[3]=c->r[31]|c->r[31]; // 800FBCF8
  c->r[4]=c->r[30]|c->r[30]; // 800FBCFC
  c->lr=0x800FBD04u; f_800FB550(c); // 800FBD00
  cmps(c,0,(int32_t)c->r[3],0); // 800FBD04
  c->r[30]=c->r[3]|c->r[3]; // 800FBD08
  if (crb(c,2)) { goto L_800FBD2C; } // 800FBD0C
  c->r[12]=R32(c->r[31]+0x00000000u); // 800FBD10
  c->r[3]=c->r[31]|c->r[31]; // 800FBD14
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FBD18
  c->ctr=c->r[12]; // 800FBD1C
  if (true) { c->lr=0x800FBD24u; dispatch(c,c->ctr); } // 800FBD20
  c->r[3]=c->r[30]|c->r[30]; // 800FBD24
  goto L_800FBD34; // 800FBD28
L_800FBD2C:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 800FBD2C
  c->r[3]=0u+0x00000000u; // 800FBD30
L_800FBD34:;
  c->r[11]=c->r[1]+0x00000020u; // 800FBD34
  c->lr=0x800FBD3Cu; f_800C2E9C(c); // 800FBD38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBD3C
  c->lr=c->r[0]; // 800FBD40
  c->r[1]=c->r[1]+0x00000020u; // 800FBD44
  return; // 800FBD48
}

// fn_800FBD50
void f_800FBD50(Ctx* __restrict c) {
  trace_call(0x800FBD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBD50
  c->r[0]=c->lr; // 800FBD54
  cmps(c,0,(int32_t)c->r[5],0); // 800FBD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBD5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FBD60
  c->r[31]=c->r[5]|c->r[5]; // 800FBD64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FBD68
  c->r[30]=c->r[4]|c->r[4]; // 800FBD6C
  if (!crb(c,2)) { goto L_800FBD7C; } // 800FBD70
  c->r[3]=0u+0x00000025u; // 800FBD74
  goto L_800FBDD8; // 800FBD78
L_800FBD7C:;
  {uint32_t ea=c->r[2]+0xFFFFA010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FBD7C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800FBD80
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FBD84
  cmps(c,0,(int32_t)c->r[0],0); // 800FBD88
  if (!crb(c,2)) { goto L_800FBD98; } // 800FBD8C
  c->r[3]=0u+0x0000005Eu; // 800FBD90
  goto L_800FBDD8; // 800FBD94
L_800FBD98:;
  c->lr=0x800FBD9Cu; f_800FB1B0(c); // 800FBD98
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FBD9C
  c->r[4]=c->r[30]|c->r[30]; // 800FBDA0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FBDA4
  c->ctr=c->r[12]; // 800FBDA8
  if (true) { c->lr=0x800FBDB0u; dispatch(c,c->ctr); } // 800FBDAC
  cmps(c,0,(int32_t)c->r[3],0); // 800FBDB0
  if (!crb(c,2)) { goto L_800FBDC0; } // 800FBDB4
  c->r[3]=0u+0x00000025u; // 800FBDB8
  goto L_800FBDD8; // 800FBDBC
L_800FBDC0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FBDC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FBDC4
  c->ctr=c->r[12]; // 800FBDC8
  if (true) { c->lr=0x800FBDD0u; dispatch(c,c->ctr); } // 800FBDCC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800FBDD0
  c->r[3]=0u+0x00000000u; // 800FBDD4
L_800FBDD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FBDDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FBDE0
  c->lr=c->r[0]; // 800FBDE4
  c->r[1]=c->r[1]+0x00000010u; // 800FBDE8
  return; // 800FBDEC
}

// fn_800FBDF0
void f_800FBDF0(Ctx* __restrict c) {
  trace_call(0x800FBDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBDF0
  c->r[0]=c->lr; // 800FBDF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBDF8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800FBDFC
  c->f[31]=c->f[1]; // 800FBE00
  W32(c->r[1]+0x00000014u,c->r[31]); // 800FBE04
  c->r[31]=c->r[4]|c->r[4]; // 800FBE08
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FBE0C
  cmps(c,0,(int32_t)c->r[0],0); // 800FBE10
  if (!crb(c,2)) { goto L_800FBE20; } // 800FBE14
  c->r[3]=0u+0x0000005Eu; // 800FBE18
  goto L_800FBE60; // 800FBE1C
L_800FBE20:;
  c->lr=0x800FBE24u; f_800FB1B0(c); // 800FBE20
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FBE24
  c->r[4]=c->r[31]|c->r[31]; // 800FBE28
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FBE2C
  c->ctr=c->r[12]; // 800FBE30
  if (true) { c->lr=0x800FBE38u; dispatch(c,c->ctr); } // 800FBE34
  cmps(c,0,(int32_t)c->r[3],0); // 800FBE38
  if (!crb(c,2)) { goto L_800FBE48; } // 800FBE3C
  c->r[3]=0u+0x00000025u; // 800FBE40
  goto L_800FBE60; // 800FBE44
L_800FBE48:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FBE48
  c->f[1]=c->f[31]; // 800FBE4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FBE50
  c->ctr=c->r[12]; // 800FBE54
  if (true) { c->lr=0x800FBE5Cu; dispatch(c,c->ctr); } // 800FBE58
  c->r[3]=0u+0x00000000u; // 800FBE5C
L_800FBE60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBE60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800FBE64
  c->r[31]=R32(c->r[1]+0x00000014u); // 800FBE68
  c->lr=c->r[0]; // 800FBE6C
  c->r[1]=c->r[1]+0x00000020u; // 800FBE70
  return; // 800FBE74
}

// fn_800FBE80
void f_800FBE80(Ctx* __restrict c) {
  trace_call(0x800FBE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBE80
  c->r[0]=c->lr; // 800FBE84
  cmps(c,0,(int32_t)c->r[4],0); // 800FBE88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBE8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBE90
  c->r[31]=c->r[5]|c->r[5]; // 800FBE94
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBE98
  c->r[30]=c->r[4]|c->r[4]; // 800FBE9C
  if (!crb(c,2)) { goto L_800FBEAC; } // 800FBEA0
  c->r[3]=0u+0x00000025u; // 800FBEA4
  goto L_800FBF04; // 800FBEA8
L_800FBEAC:;
  W32(c->r[4]+0x00000004u,c->r[5]); // 800FBEAC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FBEB0
  cmps(c,0,(int32_t)c->r[0],0); // 800FBEB4
  if (!crb(c,2)) { goto L_800FBECC; } // 800FBEB8
  c->r[0]=0u+0x00000000u; // 800FBEBC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FBEC0
  c->r[3]=0u+0x0000005Eu; // 800FBEC4
  goto L_800FBF04; // 800FBEC8
L_800FBECC:;
  c->lr=0x800FBED0u; f_800FB190(c); // 800FBECC
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FBED0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FBED4
  c->ctr=c->r[12]; // 800FBED8
  if (true) { c->lr=0x800FBEE0u; dispatch(c,c->ctr); } // 800FBEDC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FBEE0
  c->r[5]=c->r[31]|c->r[31]; // 800FBEE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FBEE8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FBEEC
  c->r[3]=c->r[1]+0x00000010u; // 800FBEF0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800FBEF4
  c->lr=0x800FBEFCu; f_800FB110(c); // 800FBEF8
  W32(c->r[30]+0x00000000u,c->r[3]); // 800FBEFC
  c->r[3]=0u+0x00000000u; // 800FBF00
L_800FBF04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBF04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBF08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBF0C
  c->lr=c->r[0]; // 800FBF10
  c->r[1]=c->r[1]+0x00000020u; // 800FBF14
  return; // 800FBF18
}

// fn_800FBF20
void f_800FBF20(Ctx* __restrict c) {
  trace_call(0x800FBF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBF20
  c->r[0]=c->lr; // 800FBF24
  cmps(c,0,(int32_t)c->r[4],0); // 800FBF28
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBF2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBF30
  c->r[31]=c->r[4]|c->r[4]; // 800FBF34
  if (!crb(c,2)) { goto L_800FBF44; } // 800FBF38
  c->r[3]=0u+0x00000025u; // 800FBF3C
  goto L_800FBFBC; // 800FBF40
L_800FBF44:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FBF44
  cmps(c,0,(int32_t)c->r[0],0); // 800FBF48
  if (!crb(c,2)) { goto L_800FBF60; } // 800FBF4C
  c->r[0]=0u+0x00000000u; // 800FBF50
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FBF54
  c->r[3]=0u+0x0000005Eu; // 800FBF58
  goto L_800FBFBC; // 800FBF5C
L_800FBF60:;
  c->lr=0x800FBF64u; f_800FB190(c); // 800FBF60
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FBF64
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FBF68
  c->ctr=c->r[12]; // 800FBF6C
  if (true) { c->lr=0x800FBF74u; dispatch(c,c->ctr); } // 800FBF70
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FBF74
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FBF78
  c->r[3]=c->r[1]+0x00000010u; // 800FBF7C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800FBF80
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FBF84
  c->r[4]=R32(c->r[31]+0x00000000u); // 800FBF88
  c->lr=0x800FBF90u; f_800FB0C0(c); // 800FBF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800FBF90
  if (!crb(c,2)) { goto L_800FBFA0; } // 800FBF94
  c->r[3]=0u+0x00000025u; // 800FBF98
  goto L_800FBFBC; // 800FBF9C
L_800FBFA0:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800FBFA0
  c->r[3]=c->r[1]+0x00000010u; // 800FBFA4
  c->r[5]=R32(c->r[31]+0x00000004u); // 800FBFA8
  c->r[4]=c->r[4]+0x00000008u; // 800FBFAC
  c->lr=0x800FBFB4u; f_800FB110(c); // 800FBFB0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800FBFB4
  c->r[3]=0u+0x00000000u; // 800FBFB8
L_800FBFBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBFBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBFC0
  c->lr=c->r[0]; // 800FBFC4
  c->r[1]=c->r[1]+0x00000020u; // 800FBFC8
  return; // 800FBFCC
}

// fn_800FBFD0
void f_800FBFD0(Ctx* __restrict c) {
  trace_call(0x800FBFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBFD0
  c->r[0]=c->lr; // 800FBFD4
  cmps(c,0,(int32_t)c->r[4],0); // 800FBFD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBFDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBFE0
  c->r[31]=c->r[5]|c->r[5]; // 800FBFE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBFE8
  c->r[30]=c->r[4]|c->r[4]; // 800FBFEC
  if (!crb(c,2)) { goto L_800FBFFC; } // 800FBFF0
  c->r[3]=0u+0x00000025u; // 800FBFF4
  goto L_800FC054; // 800FBFF8
L_800FBFFC:;
  W32(c->r[4]+0x00000004u,c->r[5]); // 800FBFFC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FC000
  cmps(c,0,(int32_t)c->r[0],0); // 800FC004
  if (!crb(c,2)) { goto L_800FC01C; } // 800FC008
  c->r[0]=0u+0x00000000u; // 800FC00C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FC010
  c->r[3]=0u+0x0000005Eu; // 800FC014
  goto L_800FC054; // 800FC018
L_800FC01C:;
  c->lr=0x800FC020u; f_800FB1B0(c); // 800FC01C
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FC020
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FC024
  c->ctr=c->r[12]; // 800FC028
  if (true) { c->lr=0x800FC030u; dispatch(c,c->ctr); } // 800FC02C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FC030
  c->r[5]=c->r[31]|c->r[31]; // 800FC034
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FC038
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FC03C
  c->r[3]=c->r[1]+0x00000010u; // 800FC040
  W32(c->r[1]+0x00000014u,c->r[4]); // 800FC044
  c->lr=0x800FC04Cu; f_800FB110(c); // 800FC048
  W32(c->r[30]+0x00000000u,c->r[3]); // 800FC04C
  c->r[3]=0u+0x00000000u; // 800FC050
L_800FC054:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC054
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC058
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC05C
  c->lr=c->r[0]; // 800FC060
  c->r[1]=c->r[1]+0x00000020u; // 800FC064
  return; // 800FC068
}

// fn_800FC070
void f_800FC070(Ctx* __restrict c) {
  trace_call(0x800FC070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC070
  c->r[0]=c->lr; // 800FC074
  cmps(c,0,(int32_t)c->r[4],0); // 800FC078
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC07C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC080
  c->r[31]=c->r[4]|c->r[4]; // 800FC084
  if (!crb(c,2)) { goto L_800FC094; } // 800FC088
  c->r[3]=0u+0x00000025u; // 800FC08C
  goto L_800FC10C; // 800FC090
L_800FC094:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FC094
  cmps(c,0,(int32_t)c->r[0],0); // 800FC098
  if (!crb(c,2)) { goto L_800FC0B0; } // 800FC09C
  c->r[0]=0u+0x00000000u; // 800FC0A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FC0A4
  c->r[3]=0u+0x0000005Eu; // 800FC0A8
  goto L_800FC10C; // 800FC0AC
L_800FC0B0:;
  c->lr=0x800FC0B4u; f_800FB1B0(c); // 800FC0B0
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FC0B4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FC0B8
  c->ctr=c->r[12]; // 800FC0BC
  if (true) { c->lr=0x800FC0C4u; dispatch(c,c->ctr); } // 800FC0C0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FC0C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FC0C8
  c->r[3]=c->r[1]+0x00000010u; // 800FC0CC
  W32(c->r[1]+0x00000014u,c->r[4]); // 800FC0D0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FC0D4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800FC0D8
  c->lr=0x800FC0E0u; f_800FB0C0(c); // 800FC0DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC0E0
  if (!crb(c,2)) { goto L_800FC0F0; } // 800FC0E4
  c->r[3]=0u+0x00000025u; // 800FC0E8
  goto L_800FC10C; // 800FC0EC
L_800FC0F0:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800FC0F0
  c->r[3]=c->r[1]+0x00000010u; // 800FC0F4
  c->r[5]=R32(c->r[31]+0x00000004u); // 800FC0F8
  c->r[4]=c->r[4]+0x00000008u; // 800FC0FC
  c->lr=0x800FC104u; f_800FB110(c); // 800FC100
  W32(c->r[31]+0x00000000u,c->r[3]); // 800FC104
  c->r[3]=0u+0x00000000u; // 800FC108
L_800FC10C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC110
  c->lr=c->r[0]; // 800FC114
  c->r[1]=c->r[1]+0x00000020u; // 800FC118
  return; // 800FC11C
}

// fn_800FC120
void f_800FC120(Ctx* __restrict c) {
  trace_call(0x800FC120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC120
  c->r[0]=c->lr; // 800FC124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC12C
  c->r[31]=c->r[5]|c->r[5]; // 800FC130
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC134
  c->r[30]=c->r[4]|c->r[4]; // 800FC138
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FC13C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC140
  if (!crb(c,2)) { goto L_800FC150; } // 800FC144
  c->r[3]=0u+0x0000005Eu; // 800FC148
  goto L_800FC180; // 800FC14C
L_800FC150:;
  c->lr=0x800FC154u; f_800FB210(c); // 800FC150
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FC154
  c->r[4]=c->r[30]|c->r[30]; // 800FC158
  c->r[5]=c->r[31]|c->r[31]; // 800FC15C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FC160
  c->ctr=c->r[12]; // 800FC164
  if (true) { c->lr=0x800FC16Cu; dispatch(c,c->ctr); } // 800FC168
  cmps(c,0,(int32_t)c->r[3],0); // 800FC16C
  c->r[0]=0u+0x00000000u; // 800FC170
  if (crb(c,2)) { goto L_800FC17C; } // 800FC174
  c->r[0]=c->r[3]|c->r[3]; // 800FC178
L_800FC17C:;
  c->r[3]=c->r[0]|c->r[0]; // 800FC17C
L_800FC180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC184
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FC188
  c->lr=c->r[0]; // 800FC18C
  c->r[1]=c->r[1]+0x00000010u; // 800FC190
  return; // 800FC194
}

// fn_800FC1A0
void f_800FC1A0(Ctx* __restrict c) {
  trace_call(0x800FC1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC1A0
  c->r[0]=c->lr; // 800FC1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC1A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC1AC
  c->r[31]=c->r[4]|c->r[4]; // 800FC1B0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FC1B4
  cmps(c,0,(int32_t)c->r[0],0); // 800FC1B8
  if (!crb(c,2)) { goto L_800FC1C8; } // 800FC1BC
  c->r[3]=0u+0x0000005Eu; // 800FC1C0
  goto L_800FC1F4; // 800FC1C4
L_800FC1C8:;
  c->lr=0x800FC1CCu; f_800FB210(c); // 800FC1C8
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FC1CC
  c->r[4]=c->r[31]|c->r[31]; // 800FC1D0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800FC1D4
  c->ctr=c->r[12]; // 800FC1D8
  if (true) { c->lr=0x800FC1E0u; dispatch(c,c->ctr); } // 800FC1DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC1E0
  c->r[0]=0u+0x00000000u; // 800FC1E4
  if (crb(c,2)) { goto L_800FC1F0; } // 800FC1E8
  c->r[0]=c->r[3]|c->r[3]; // 800FC1EC
L_800FC1F0:;
  c->r[3]=c->r[0]|c->r[0]; // 800FC1F0
L_800FC1F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC1F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC1F8
  c->lr=c->r[0]; // 800FC1FC
  c->r[1]=c->r[1]+0x00000010u; // 800FC200
  return; // 800FC204
}

// fn_800FC210
void f_800FC210(Ctx* __restrict c) {
  trace_call(0x800FC210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC210
  c->r[0]=c->lr; // 800FC214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC218
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FC21C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC220
  if (!crb(c,2)) { goto L_800FC230; } // 800FC224
  c->r[3]=0u+0x0000005Eu; // 800FC228
  goto L_800FC248; // 800FC22C
L_800FC230:;
  c->lr=0x800FC234u; f_80100460(c); // 800FC230
  cmps(c,0,(int32_t)c->r[3],0); // 800FC234
  c->r[0]=0u+0x00000000u; // 800FC238
  if (crb(c,2)) { goto L_800FC244; } // 800FC23C
  c->r[0]=c->r[3]|c->r[3]; // 800FC240
L_800FC244:;
  c->r[3]=c->r[0]|c->r[0]; // 800FC244
L_800FC248:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC248
  c->lr=c->r[0]; // 800FC24C
  c->r[1]=c->r[1]+0x00000010u; // 800FC250
  return; // 800FC254
}

// fn_800FC260
void f_800FC260(Ctx* __restrict c) {
  trace_call(0x800FC260u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC260
  c->r[0]=c->lr; // 800FC264
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800FC268
  c->r[11]=c->r[1]+0x000000E0u; // 800FC26C
  c->lr=0x800FC274u; f_800C2E4C(c); // 800FC270
  cmps(c,0,(int32_t)c->r[6],0); // 800FC274
  c->r[27]=c->r[3]|c->r[3]; // 800FC278
  c->r[28]=c->r[4]|c->r[4]; // 800FC27C
  c->r[29]=c->r[5]|c->r[5]; // 800FC280
  c->r[30]=c->r[6]|c->r[6]; // 800FC284
  c->r[31]=c->r[7]|c->r[7]; // 800FC288
  if (crb(c,2)) { goto L_800FC298; } // 800FC28C
  c->r[0]=0u+0x00000000u; // 800FC290
  W32(c->r[6]+0x00000000u,c->r[0]); // 800FC294
L_800FC298:;
  c->r[3]=c->r[1]+0x00000008u; // 800FC298
  c->lr=0x800FC2A0u; f_8018FC40(c); // 800FC29C
  c->r[12]=R32(c->r[27]+0x00000000u); // 800FC2A0
  c->r[3]=c->r[27]|c->r[27]; // 800FC2A4
  c->r[4]=0u+0x00000000u; // 800FC2A8
  c->r[12]=R32(c->r[12]+0x00000060u); // 800FC2AC
  c->ctr=c->r[12]; // 800FC2B0
  if (true) { c->lr=0x800FC2B8u; dispatch(c,c->ctr); } // 800FC2B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FC2B8
  if (crb(c,2)) { goto L_800FC2C4; } // 800FC2BC
  goto L_800FC320; // 800FC2C0
L_800FC2C4:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 800FC2C4
  c->r[3]=c->r[27]|c->r[27]; // 800FC2C8
  c->r[4]=c->r[1]+0x00000008u; // 800FC2CC
  c->r[12]=R32(c->r[12]+0x00000060u); // 800FC2D0
  c->ctr=c->r[12]; // 800FC2D4
  if (true) { c->lr=0x800FC2DCu; dispatch(c,c->ctr); } // 800FC2D8
  cmps(c,0,(int32_t)c->r[3],0); // 800FC2DC
  if (crb(c,2)) { goto L_800FC2E8; } // 800FC2E0
  goto L_800FC320; // 800FC2E4
L_800FC2E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC2E8
  if (crb(c,2)) { goto L_800FC300; } // 800FC2EC
  c->r[3]=c->r[31]|c->r[31]; // 800FC2F0
  c->r[4]=c->r[1]+0x00000008u; // 800FC2F4
  c->r[5]=0u+0x000000C0u; // 800FC2F8
  c->lr=0x800FC300u; f_80004000(c); // 800FC2FC
L_800FC300:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FC300
  if (crb(c,2)) { goto L_800FC31C; } // 800FC304
  c->r[4]=c->r[28]|c->r[28]; // 800FC308
  c->r[5]=c->r[29]|c->r[29]; // 800FC30C
  c->r[3]=c->r[1]+0x00000008u; // 800FC310
  c->lr=0x800FC318u; f_8018FD30(c); // 800FC314
  W32(c->r[30]+0x00000000u,c->r[3]); // 800FC318
L_800FC31C:;
  c->r[3]=0u+0x00000000u; // 800FC31C
L_800FC320:;
  c->r[11]=c->r[1]+0x000000E0u; // 800FC320
  c->lr=0x800FC328u; f_800C2E98(c); // 800FC324
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800FC328
  c->lr=c->r[0]; // 800FC32C
  c->r[1]=c->r[1]+0x000000E0u; // 800FC330
  return; // 800FC334
}

// fn_800FC340
void f_800FC340(Ctx* __restrict c) {
  trace_call(0x800FC340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC340
  c->r[0]=c->lr; // 800FC344
  c->r[5]=0u+0x00000010u; // 800FC348
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC34C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC350
  c->r[31]=c->r[4]|c->r[4]; // 800FC354
  c->r[4]=0u+0x00000017u; // 800FC358
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC35C
  c->r[30]=c->r[3]|c->r[3]; // 800FC360
  c->r[3]=c->r[31]|c->r[31]; // 800FC364
  c->lr=0x800FC36Cu; f_8018FD10(c); // 800FC368
  c->r[3]=R32(c->r[30]+0x00000008u); // 800FC36C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC370
  if (crb(c,2)) { goto L_800FC398; } // 800FC374
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FC378
  c->r[4]=c->r[31]|c->r[31]; // 800FC37C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FC380
  c->ctr=c->r[12]; // 800FC384
  if (true) { c->lr=0x800FC38Cu; dispatch(c,c->ctr); } // 800FC388
  cmps(c,0,(int32_t)c->r[3],0); // 800FC38C
  if (crb(c,2)) { goto L_800FC398; } // 800FC390
  goto L_800FC39C; // 800FC394
L_800FC398:;
  c->r[3]=0u+0x00000000u; // 800FC398
L_800FC39C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC39C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC3A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FC3A4
  c->lr=c->r[0]; // 800FC3A8
  c->r[1]=c->r[1]+0x00000010u; // 800FC3AC
  return; // 800FC3B0
}

// fn_800FC3C0
void f_800FC3C0(Ctx* __restrict c) {
  trace_call(0x800FC3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC3C0
  c->r[0]=c->lr; // 800FC3C4
  cmps(c,0,(int32_t)c->r[4],0); // 800FC3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC3D0
  c->r[31]=c->r[3]|c->r[3]; // 800FC3D4
  if (crb(c,2)) { goto L_800FC410; } // 800FC3D8
  c->r[0]=R8(c->r[3]+0x00000004u); // 800FC3DC
  cmps(c,0,(int32_t)c->r[0],0); // 800FC3E0
  if (!crb(c,2)) { goto L_800FC434; } // 800FC3E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FC3E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FC3EC
  c->ctr=c->r[12]; // 800FC3F0
  if (true) { c->lr=0x800FC3F8u; dispatch(c,c->ctr); } // 800FC3F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FC3F8
  if (crb(c,2)) { goto L_800FC404; } // 800FC3FC
  goto L_800FC438; // 800FC400
L_800FC404:;
  c->r[0]=0u+0x00000001u; // 800FC404
  W8(c->r[31]+0x00000004u,c->r[0]); // 800FC408
  goto L_800FC434; // 800FC40C
L_800FC410:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FC410
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FC414
  c->ctr=c->r[12]; // 800FC418
  if (true) { c->lr=0x800FC420u; dispatch(c,c->ctr); } // 800FC41C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC420
  if (crb(c,2)) { goto L_800FC42C; } // 800FC424
  goto L_800FC438; // 800FC428
L_800FC42C:;
  c->r[0]=0u+0x00000000u; // 800FC42C
  W8(c->r[31]+0x00000004u,c->r[0]); // 800FC430
L_800FC434:;
  c->r[3]=0u+0x00000000u; // 800FC434
L_800FC438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC43C
  c->lr=c->r[0]; // 800FC440
  c->r[1]=c->r[1]+0x00000010u; // 800FC444
  return; // 800FC448
}

// fn_800FC450
void f_800FC450(Ctx* __restrict c) {
  trace_call(0x800FC450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC450
  c->r[0]=c->lr; // 800FC454
  cmps(c,0,(int32_t)c->r[3],0); // 800FC458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC45C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC460
  c->r[31]=c->r[4]|c->r[4]; // 800FC464
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC468
  c->r[30]=c->r[3]|c->r[3]; // 800FC46C
  if (crb(c,2)) { goto L_800FC48C; } // 800FC470
  c->r[4]=0u+0x00000000u; // 800FC474
  c->lr=0x800FC47Cu; f_800FB510(c); // 800FC478
  cmps(c,0,(int32_t)c->r[31],0); // 800FC47C
  if (!crb(c,1)) { goto L_800FC48C; } // 800FC480
  c->r[3]=c->r[30]|c->r[30]; // 800FC484
  c->lr=0x800FC48Cu; f_800C2AC0(c); // 800FC488
L_800FC48C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC48C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC490
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FC494
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC498
  c->lr=c->r[0]; // 800FC49C
  c->r[1]=c->r[1]+0x00000010u; // 800FC4A0
  return; // 800FC4A4
}

// fn_800FC4B0
void f_800FC4B0(Ctx* __restrict c) {
  trace_call(0x800FC4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC4B0
  c->r[0]=c->lr; // 800FC4B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FC4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC4BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC4C0
  c->r[31]=c->r[3]|c->r[3]; // 800FC4C4
  if (crb(c,2)) { goto L_800FC4D8; } // 800FC4C8
  cmps(c,0,(int32_t)c->r[4],0); // 800FC4CC
  if (!crb(c,1)) { goto L_800FC4D8; } // 800FC4D0
  c->lr=0x800FC4D8u; f_800C2AC0(c); // 800FC4D4
L_800FC4D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FC4D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC4E0
  c->lr=c->r[0]; // 800FC4E4
  c->r[1]=c->r[1]+0x00000010u; // 800FC4E8
  return; // 800FC4EC
}

// fn_800FC4F0
void f_800FC4F0(Ctx* __restrict c) {
  trace_call(0x800FC4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC4F0
  c->r[0]=c->lr; // 800FC4F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC4F8
  c->r[11]=c->r[1]+0x00000020u; // 800FC4FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800FC500
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800FC504
  c->lr=0x800FC50Cu; f_800C2E50(c); // 800FC508
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 800FC50C
  {uint32_t ea=c->r[2]+0xFFFFA018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC510
  c->r[29]=c->r[3]|c->r[3]; // 800FC514
  c->r[28]=c->r[4]|c->r[4]; // 800FC518
  c->r[31]=c->r[5]|c->r[5]; // 800FC51C
  c->r[30]=c->r[6]|c->r[6]; // 800FC520
  if (crb(c,2)) { goto L_800FC580; } // 800FC524
  c->r[0]=addc(c,~c->r[6],c->r[4],1); // 800FC528
  c->r[0]=addc(c,~c->r[5],c->r[3],c->xer_ca); // 800FC52C
  c->r[0]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 800FC530
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 800FC534
  if (!crb(c,2)) { goto L_800FC580; } // 800FC538
  c->r[0]=c->r[8]|c->r[7]; cr0(c,c->r[0]); // 800FC53C
  if (crb(c,2)) { goto L_800FC57C; } // 800FC540
  c->r[3]=c->r[7]|c->r[7]; // 800FC544
  c->r[4]=c->r[8]|c->r[8]; // 800FC548
  c->lr=0x800FC550u; f_800C3398(c); // 800FC54C
  c->f[31]=c->f[1]; // 800FC550
  c->r[4]=addc(c,~c->r[30],c->r[28],1); // 800FC554
  c->r[3]=addc(c,~c->r[31],c->r[29],c->xer_ca); // 800FC558
  c->lr=0x800FC560u; f_800C3398(c); // 800FC55C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800FC560
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC564
  fcmp(c,0,c->f[1],c->f[0]); // 800FC568
  if (!crb(c,0)) { goto L_800FC574; } // 800FC56C
  goto L_800FC580; // 800FC570
L_800FC574:;
  c->f[1]=c->f[0]; // 800FC574
  goto L_800FC580; // 800FC578
L_800FC57C:;
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC57C
L_800FC580:;
  c->r[11]=c->r[1]+0x00000020u; // 800FC580
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800FC584
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800FC588
  c->lr=0x800FC590u; f_800C2E9C(c); // 800FC58C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC590
  c->lr=c->r[0]; // 800FC594
  c->r[1]=c->r[1]+0x00000030u; // 800FC598
  return; // 800FC59C
}

// fn_800FC5A0
void f_800FC5A0(Ctx* __restrict c) {
  trace_call(0x800FC5A0u);
  c->r[4]=0u+0x80390000u; // 800FC5A0
  c->r[0]=0u+0x00000000u; // 800FC5A4
  c->r[4]=c->r[4]+0xFFFFE1B8u; // 800FC5A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FC5AC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FC5B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FC5B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FC5B8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC5BC
  return; // 800FC5C0
}

// fn_800FC5D0
void f_800FC5D0(Ctx* __restrict c) {
  trace_call(0x800FC5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC5D0
  c->r[0]=c->lr; // 800FC5D4
  cmps(c,0,(int32_t)c->r[4],0); // 800FC5D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC5DC
  c->r[0]=0u+0x00000000u; // 800FC5E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC5E4
  c->r[31]=c->r[3]|c->r[3]; // 800FC5E8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800FC5EC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FC5F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC5F4
  if (crb(c,2)) { goto L_800FC630; } // 800FC5F8
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FC5FC
  c->r[5]=0u+0x80390000u; // 800FC600
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FC604
  c->r[6]=0u+0x0000003Fu; // 800FC608
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FC60C
  c->r[5]=c->r[5]+0xFFFFE098u; // 800FC610
  c->r[7]=0u+0x00000000u; // 800FC614
  c->lr=0x800FC61Cu; f_8018F760(c); // 800FC618
  cmps(c,0,(int32_t)c->r[3],0); // 800FC61C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800FC620
  if (!crb(c,2)) { goto L_800FC630; } // 800FC624
  c->r[3]=0u+0x0000002Cu; // 800FC628
  goto L_800FC634; // 800FC62C
L_800FC630:;
  c->r[3]=0u+0x00000000u; // 800FC630
L_800FC634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC638
  c->lr=c->r[0]; // 800FC63C
  c->r[1]=c->r[1]+0x00000010u; // 800FC640
  return; // 800FC644
}

// fn_800FC650
void f_800FC650(Ctx* __restrict c) {
  trace_call(0x800FC650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC650
  c->r[0]=c->lr; // 800FC654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC658
  c->r[4]=R32(c->r[3]+0x00000008u); // 800FC65C
  cmps(c,0,(int32_t)c->r[4],0); // 800FC660
  if (crb(c,2)) { goto L_800FC684; } // 800FC664
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FC668
  c->r[5]=0u+0x80390000u; // 800FC66C
  c->r[6]=0u+0x0000004Eu; // 800FC670
  c->r[7]=0u+0x00000000u; // 800FC674
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FC678
  c->r[5]=c->r[5]+0xFFFFE098u; // 800FC67C
  c->lr=0x800FC684u; f_8018F5F0(c); // 800FC680
L_800FC684:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC684
  c->r[3]=0u+0x00000000u; // 800FC688
  c->lr=c->r[0]; // 800FC68C
  c->r[1]=c->r[1]+0x00000010u; // 800FC690
  return; // 800FC694
}

// fn_800FC6A0
void f_800FC6A0(Ctx* __restrict c) {
  trace_call(0x800FC6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC6A0
  c->r[0]=c->lr; // 800FC6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC6AC
  c->r[31]=c->r[4]|c->r[4]; // 800FC6B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC6B4
  c->r[30]=c->r[3]|c->r[3]; // 800FC6B8
  c->r[5]=R32(c->r[3]+0x00000010u); // 800FC6BC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FC6C0
  cmpu(c,0,c->r[5],c->r[0]); // 800FC6C4
  if (crb(c,0)) { goto L_800FC6D4; } // 800FC6C8
  c->r[3]=0u+0x00000000u; // 800FC6CC
  goto L_800FC6F4; // 800FC6D0
L_800FC6D4:;
  c->lr=0x800FC6D8u; f_800FC7F0(c); // 800FC6D4
  c->r[4]=R32(c->r[30]+0x00000008u); // 800FC6D8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FC6DC
  c->r[3]=0u+0x00000001u; // 800FC6E0
  W32(c->r[4]+c->r[0],c->r[31]); // 800FC6E4
  c->r[4]=R32(c->r[30]+0x00000010u); // 800FC6E8
  c->r[0]=c->r[4]+0x00000001u; // 800FC6EC
  W32(c->r[30]+0x00000010u,c->r[0]); // 800FC6F0
L_800FC6F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FC6F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FC6FC
  c->lr=c->r[0]; // 800FC700
  c->r[1]=c->r[1]+0x00000010u; // 800FC704
  return; // 800FC708
}

// fn_800FC710
void f_800FC710(Ctx* __restrict c) {
  trace_call(0x800FC710u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 800FC710
  cmps(c,0,(int32_t)c->r[0],0); // 800FC714
  if (!crb(c,2)) { goto L_800FC730; } // 800FC718
  cmps(c,0,(int32_t)c->r[4],0); // 800FC71C
  if (crb(c,2)) return; // 800FC720
  c->r[0]=0u+0x00000000u; // 800FC724
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FC728
  return; // 800FC72C
L_800FC730:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FC730
  if (crb(c,2)) { goto L_800FC74C; } // 800FC734
  c->r[0]=R32(c->r[3]+0x00000014u); // 800FC738
  c->r[5]=R32(c->r[3]+0x00000008u); // 800FC73C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FC740
  c->r[0]=R32(c->r[5]+c->r[0]); // 800FC744
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FC748
L_800FC74C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800FC74C
  c->r[5]=0u+0x00000000u; // 800FC750
  c->r[4]=R32(c->r[3]+0x00000008u); // 800FC754
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FC758
  W32(c->r[4]+c->r[0],c->r[5]); // 800FC75C
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FC760
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FC764
  c->r[7]=c->r[4]+0x00000001u; // 800FC768
  c->r[4]=R32(c->r[3]+0x00000010u); // 800FC76C
  c->r[5]=divwu(c->r[7],c->r[6]); // 800FC770
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FC774
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FC778
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800FC77C
  c->r[0]=c->r[7]-c->r[0]; // 800FC780
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC784
  return; // 800FC788
}

// fn_800FC790
void f_800FC790(Ctx* __restrict c) {
  trace_call(0x800FC790u);
  c->r[8]=0u+0x00000000u; // 800FC790
  goto L_800FC7D0; // 800FC794
L_800FC798:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800FC798
  c->r[4]=R32(c->r[3]+0x00000008u); // 800FC79C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FC7A0
  W32(c->r[4]+c->r[0],c->r[8]); // 800FC7A4
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FC7A8
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FC7AC
  c->r[7]=c->r[4]+0x00000001u; // 800FC7B0
  c->r[4]=R32(c->r[3]+0x00000010u); // 800FC7B4
  c->r[5]=divwu(c->r[7],c->r[6]); // 800FC7B8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FC7BC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FC7C0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800FC7C4
  c->r[0]=c->r[7]-c->r[0]; // 800FC7C8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC7CC
L_800FC7D0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800FC7D0
  cmps(c,0,(int32_t)c->r[0],0); // 800FC7D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FC798; } // 800FC7D8
  c->r[0]=0u+0x00000000u; // 800FC7DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC7E0
  return; // 800FC7E4
}

// fn_800FC7F0
void f_800FC7F0(Ctx* __restrict c) {
  trace_call(0x800FC7F0u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FC7F0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800FC7F4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800FC7F8
  c->r[4]=c->r[4]+c->r[0]; // 800FC7FC
  c->r[0]=divwu(c->r[4],c->r[3]); // 800FC800
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800FC804
  c->r[3]=c->r[4]-c->r[0]; // 800FC808
  return; // 800FC80C
}

// fn_800FC810
void f_800FC810(Ctx* __restrict c) {
  trace_call(0x800FC810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC810
  c->r[0]=c->lr; // 800FC814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC818
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FC81C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC820
  if (crb(c,2)) { goto L_800FC83C; } // 800FC824
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FC828
  c->r[3]=c->r[4]|c->r[4]; // 800FC82C
  c->r[4]=0u+0x00000017u; // 800FC830
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FC834
  c->lr=0x800FC83Cu; f_8018FD10(c); // 800FC838
L_800FC83C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC83C
  c->r[3]=0u+0x00000000u; // 800FC840
  c->lr=c->r[0]; // 800FC844
  c->r[1]=c->r[1]+0x00000010u; // 800FC848
  return; // 800FC84C
}

// fn_800FC850
void f_800FC850(Ctx* __restrict c) {
  trace_call(0x800FC850u);
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC850
  c->r[4]=0u+0x80390000u; // 800FC854
  c->r[0]=0u+0x00000000u; // 800FC858
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FC85C
  c->r[4]=c->r[4]+0xFFFFE130u; // 800FC860
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FC864
  W8(c->r[3]+0x00000008u,c->r[0]); // 800FC868
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FC86C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FC870
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FC874
  W32(c->r[3]+0x00000018u,c->r[0]); // 800FC878
  W32(c->r[3]+0x00000020u,c->r[0]); // 800FC87C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800FC880
  W32(c->r[3]+0x00000028u,c->r[0]); // 800FC884
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800FC888
  W8(c->r[3]+0x00000030u,c->r[0]); // 800FC88C
  W8(c->r[3]+0x00000031u,c->r[0]); // 800FC890
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800FC894
  W32(c->r[3]+0x00000038u,c->r[0]); // 800FC898
  W32(c->r[3]+0x00000044u,c->r[0]); // 800FC89C
  W32(c->r[3]+0x00000040u,c->r[0]); // 800FC8A0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800FC8A4
  return; // 800FC8A8
}

// fn_800FC8B0
void f_800FC8B0(Ctx* __restrict c) {
  trace_call(0x800FC8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC8B0
  c->r[0]=c->lr; // 800FC8B4
  c->r[5]=0u+0x00000000u; // 800FC8B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC8BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC8C0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FC8C4
  c->r[30]=c->r[3]|c->r[3]; // 800FC8C8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FC8CC
  c->r[3]=R32(c->r[4]+0x00000008u); // 800FC8D0
  c->r[4]=c->r[30]+0x00000028u; // 800FC8D4
  c->lr=0x800FC8DCu; f_8019E4D0(c); // 800FC8D8
  cmps(c,0,(int32_t)c->r[3],0); // 800FC8DC
  if (crb(c,2)) { goto L_800FC8E8; } // 800FC8E0
  goto L_800FC9B4; // 800FC8E4
L_800FC8E8:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800FC8E8
  c->r[4]=c->r[1]+0x00000008u; // 800FC8EC
  c->r[3]=R32(c->r[30]+0x00000004u); // 800FC8F0
  c->r[5]=0u+0x00000000u; // 800FC8F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FC8F8
  W32(c->r[30]+0x00000028u,c->r[0]); // 800FC8FC
  c->r[6]=0u+0x00000000u; // 800FC900
  c->r[7]=0u+0x00000000u; // 800FC904
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FC908
  c->r[8]=0u+0x00000000u; // 800FC90C
  c->r[9]=0u+0x00000000u; // 800FC910
  c->lr=0x800FC918u; f_8019E370(c); // 800FC914
  cmps(c,0,(int32_t)c->r[3],0); // 800FC918
  if (crb(c,2)) { goto L_800FC924; } // 800FC91C
  goto L_800FC9B4; // 800FC920
L_800FC924:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FC924
  c->r[31]=0u+0x43300000u; // 800FC928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC92C
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[3]=RF64(ea);} // 800FC930
  W32(c->r[1]+0x00000010u,c->r[31]); // 800FC934
  {uint32_t ea=c->r[2]+0xFFFFA024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC938
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800FC93C
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC940
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800FC944
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800FC948
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FC94C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FC950
  c->lr=0x800FC958u; f_800C2D24(c); // 800FC954
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800FC958
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FC95C
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[3]=RF64(ea);} // 800FC960
  W32(c->r[1]+0x00000018u,c->r[31]); // 800FC964
  {uint32_t ea=c->r[2]+0xFFFFA028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FC968
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800FC96C
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC970
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800FC974
  W32(c->r[30]+0x00000024u,c->r[3]); // 800FC978
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FC97C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FC980
  c->lr=0x800FC988u; f_800C2D24(c); // 800FC984
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FC988
  c->r[0]=0u+0x00000000u; // 800FC98C
  W32(c->r[30]+0x00000020u,c->r[3]); // 800FC990
  c->r[3]=0u+0x00000000u; // 800FC994
  W8(c->r[30]+0x00000030u,c->r[0]); // 800FC998
  W8(c->r[30]+0x00000031u,c->r[0]); // 800FC99C
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800FC9A0
  W32(c->r[30]+0x00000038u,c->r[0]); // 800FC9A4
  W32(c->r[30]+0x00000044u,c->r[0]); // 800FC9A8
  W32(c->r[30]+0x00000040u,c->r[0]); // 800FC9AC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800FC9B0
L_800FC9B4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC9B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC9B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FC9BC
  c->lr=c->r[0]; // 800FC9C0
  c->r[1]=c->r[1]+0x00000030u; // 800FC9C4
  return; // 800FC9C8
}

// fn_800FC9D0
void f_800FC9D0(Ctx* __restrict c) {
  trace_call(0x800FC9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC9D0
  c->r[0]=c->lr; // 800FC9D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC9D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FC9DC
  c->r[31]=c->r[4]|c->r[4]; // 800FC9E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FC9E4
  c->r[30]=c->r[3]|c->r[3]; // 800FC9E8
  c->r[0]=R8(c->r[3]+0x00000030u); // 800FC9EC
  cmpu(c,0,c->r[4],c->r[0]); // 800FC9F0
  if (crb(c,2)) { goto L_800FCA00; } // 800FC9F4
  c->lr=0x800FC9FCu; f_800FCC90(c); // 800FC9F8
  W8(c->r[30]+0x00000030u,c->r[31]); // 800FC9FC
L_800FCA00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCA08
  c->lr=c->r[0]; // 800FCA0C
  c->r[1]=c->r[1]+0x00000010u; // 800FCA10
  return; // 800FCA14
}

// fn_800FCA20
void f_800FCA20(Ctx* __restrict c) {
  trace_call(0x800FCA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCA20
  c->r[0]=c->lr; // 800FCA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCA2C
  c->r[31]=c->r[4]|c->r[4]; // 800FCA30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FCA34
  c->r[30]=c->r[3]|c->r[3]; // 800FCA38
  c->r[0]=R8(c->r[3]+0x00000031u); // 800FCA3C
  cmpu(c,0,c->r[4],c->r[0]); // 800FCA40
  if (crb(c,2)) { goto L_800FCA50; } // 800FCA44
  c->lr=0x800FCA4Cu; f_800FCC90(c); // 800FCA48
  W8(c->r[30]+0x00000031u,c->r[31]); // 800FCA4C
L_800FCA50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCA54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCA58
  c->lr=c->r[0]; // 800FCA5C
  c->r[1]=c->r[1]+0x00000010u; // 800FCA60
  return; // 800FCA64
}

// fn_800FCA70
void f_800FCA70(Ctx* __restrict c) {
  trace_call(0x800FCA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCA70
  c->r[0]=c->lr; // 800FCA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCA78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800FCA7C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800FCA80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCA84
  c->r[31]=c->r[3]|c->r[3]; // 800FCA88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FCA8C
  c->r[4]=R32(c->r[3]+0x00000004u); // 800FCA90
  c->r[3]=c->r[4]+0x00000028u; // 800FCA94
  c->lr=0x800FCA9Cu; f_800FDFC0(c); // 800FCA98
  cmps(c,0,(int32_t)c->r[3],0); // 800FCA9C
  if (crb(c,2)) { goto L_800FCC6C; } // 800FCAA0
  c->r[0]=R8(c->r[31]+0x00000030u); // 800FCAA4
  cmps(c,0,(int32_t)c->r[0],0); // 800FCAA8
  if (crb(c,2)) { goto L_800FCB78; } // 800FCAAC
  c->r[0]=R32(c->r[31]+0x00000038u); // 800FCAB0
  c->r[4]=R32(c->r[31]+0x00000004u); // 800FCAB4
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800FCAB8
  c->r[6]=R32(c->r[4]+0x00000098u); // 800FCABC
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800FCAC0
  c->r[30]=R32(c->r[4]+0x0000000Cu); // 800FCAC4
  if (!crb(c,2)) { goto L_800FCB0C; } // 800FCAC8
  cmps(c,0,(int32_t)c->r[6],0); // 800FCACC
  if (crb(c,2)) { goto L_800FCB0C; } // 800FCAD0
  c->r[0]=R32(c->r[6]+0x00000010u); // 800FCAD4
  c->r[3]=c->r[30]|c->r[30]; // 800FCAD8
  c->r[5]=R32(c->r[6]+0x00000014u); // 800FCADC
  c->r[4]=c->r[31]+0x00000048u; // 800FCAE0
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800FCAE4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FCAE8
  c->r[0]=R32(c->r[6]+0x00000018u); // 800FCAEC
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 800FCAF0
  W32(c->r[31]+0x00000044u,c->r[5]); // 800FCAF4
  W32(c->r[31]+0x00000040u,c->r[0]); // 800FCAF8
  c->lr=0x800FCB00u; f_80186C80(c); // 800FCAFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB00
  if (crb(c,2)) { goto L_800FCB0C; } // 800FCB04
  goto L_800FCC70; // 800FCB08
L_800FCB0C:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 800FCB0C
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800FCB10
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 800FCB14
  if (crb(c,2)) { goto L_800FCC6C; } // 800FCB18
  c->r[3]=R32(c->r[31]+0x00000018u); // 800FCB1C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800FCB20
  c->r[7]=R32(c->r[31]+0x00000040u); // 800FCB24
  c->r[8]=R32(c->r[31]+0x00000044u); // 800FCB28
  c->lr=0x800FCB30u; f_800FC4F0(c); // 800FCB2C
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCB30
  c->r[3]=c->r[30]|c->r[30]; // 800FCB34
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCB38
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800FCB3C
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800FCB40
  c->f[1]=c->f[31]; // 800FCB44
  c->lr=0x800FCB4Cu; f_80186C30(c); // 800FCB48
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB4C
  if (crb(c,2)) { goto L_800FCB58; } // 800FCB50
  goto L_800FCC70; // 800FCB54
L_800FCB58:;
  {uint32_t ea=c->r[2]+0xFFFFA018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCB58
  fcmp(c,0,c->f[0],c->f[31]); // 800FCB5C
  if (!crb(c,2)) { goto L_800FCC6C; } // 800FCB60
  c->r[3]=R32(c->r[31]+0x00000004u); // 800FCB64
  c->lr=0x800FCB6Cu; f_800FE620(c); // 800FCB68
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB6C
  if (crb(c,2)) { goto L_800FCC6C; } // 800FCB70
  goto L_800FCC70; // 800FCB74
L_800FCB78:;
  c->r[0]=R8(c->r[31]+0x00000031u); // 800FCB78
  cmps(c,0,(int32_t)c->r[0],0); // 800FCB7C
  if (crb(c,2)) { goto L_800FCC6C; } // 800FCB80
  c->r[0]=R32(c->r[31]+0x00000038u); // 800FCB84
  c->r[4]=R32(c->r[31]+0x00000004u); // 800FCB88
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800FCB8C
  c->r[6]=R32(c->r[4]+0x0000009Cu); // 800FCB90
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800FCB94
  c->r[30]=R32(c->r[4]+0x0000000Cu); // 800FCB98
  if (!crb(c,2)) { goto L_800FCBE0; } // 800FCB9C
  cmps(c,0,(int32_t)c->r[6],0); // 800FCBA0
  if (crb(c,2)) { goto L_800FCBE0; } // 800FCBA4
  c->r[0]=R32(c->r[6]+0x00000010u); // 800FCBA8
  c->r[3]=c->r[30]|c->r[30]; // 800FCBAC
  c->r[5]=R32(c->r[6]+0x00000014u); // 800FCBB0
  c->r[4]=c->r[31]+0x00000048u; // 800FCBB4
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800FCBB8
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FCBBC
  c->r[0]=R32(c->r[6]+0x00000018u); // 800FCBC0
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 800FCBC4
  W32(c->r[31]+0x00000044u,c->r[5]); // 800FCBC8
  W32(c->r[31]+0x00000040u,c->r[0]); // 800FCBCC
  c->lr=0x800FCBD4u; f_80186C80(c); // 800FCBD0
  cmps(c,0,(int32_t)c->r[3],0); // 800FCBD4
  if (crb(c,2)) { goto L_800FCBE0; } // 800FCBD8
  goto L_800FCC70; // 800FCBDC
L_800FCBE0:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800FCBE0
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800FCBE4
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800FCBE8
  if (crb(c,2)) { goto L_800FCC6C; } // 800FCBEC
  c->r[12]=R32(c->r[31]+0x00000000u); // 800FCBF0
  c->r[3]=c->r[31]|c->r[31]; // 800FCBF4
  {uint32_t ea=c->r[2]+0xFFFFA038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FCBF8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FCBFC
  c->ctr=c->r[12]; // 800FCC00
  if (true) { c->lr=0x800FCC08u; dispatch(c,c->ctr); } // 800FCC04
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800FCC08
  c->r[0]=R32(c->r[31]+0x00000018u); // 800FCC0C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 800FCC10
  c->r[5]=R32(c->r[31]+0x00000038u); // 800FCC14
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800FCC18
  c->r[3]=addc(c,c->r[0],c->r[3],c->xer_ca); // 800FCC1C
  c->r[7]=R32(c->r[31]+0x00000040u); // 800FCC20
  c->r[8]=R32(c->r[31]+0x00000044u); // 800FCC24
  c->lr=0x800FCC2Cu; f_800FC4F0(c); // 800FCC28
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FCC2C
  c->r[3]=c->r[30]|c->r[30]; // 800FCC30
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCC34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800FCC38
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800FCC3C
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 800FCC40
  c->f[1]=c->f[31]; // 800FCC44
  c->lr=0x800FCC4Cu; f_80186C30(c); // 800FCC48
  cmps(c,0,(int32_t)c->r[3],0); // 800FCC4C
  if (crb(c,2)) { goto L_800FCC58; } // 800FCC50
  goto L_800FCC70; // 800FCC54
L_800FCC58:;
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCC58
  fcmp(c,0,c->f[0],c->f[31]); // 800FCC5C
  if (!crb(c,2)) { goto L_800FCC6C; } // 800FCC60
  c->r[3]=c->r[31]|c->r[31]; // 800FCC64
  c->lr=0x800FCC6Cu; f_800FCC90(c); // 800FCC68
L_800FCC6C:;
  c->r[3]=0u+0x00000000u; // 800FCC6C
L_800FCC70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCC70
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800FCC74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800FCC78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCC7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCC80
  c->lr=c->r[0]; // 800FCC84
  c->r[1]=c->r[1]+0x00000020u; // 800FCC88
  return; // 800FCC8C
}

// fn_800FCC90
void f_800FCC90(Ctx* __restrict c) {
  trace_call(0x800FCC90u);
  c->r[0]=0u+0x00000000u; // 800FCC90
  W8(c->r[3]+0x00000031u,c->r[0]); // 800FCC94
  W8(c->r[3]+0x00000030u,c->r[0]); // 800FCC98
  W32(c->r[3]+0x00000044u,c->r[0]); // 800FCC9C
  W32(c->r[3]+0x00000040u,c->r[0]); // 800FCCA0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800FCCA4
  W32(c->r[3]+0x00000038u,c->r[0]); // 800FCCA8
  return; // 800FCCAC
}

// fn_800FCCB0
void f_800FCCB0(Ctx* __restrict c) {
  trace_call(0x800FCCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCCB0
  c->r[0]=c->lr; // 800FCCB4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FCCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCCBC
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800FCCC0
  cmps(c,0,(int32_t)c->r[3],0); // 800FCCC4
  if (crb(c,2)) { goto L_800FCCE8; } // 800FCCC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FCCCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FCCD0
  c->ctr=c->r[12]; // 800FCCD4
  if (true) { c->lr=0x800FCCDCu; dispatch(c,c->ctr); } // 800FCCD8
  cmps(c,0,(int32_t)c->r[3],0); // 800FCCDC
  if (crb(c,2)) { goto L_800FCCE8; } // 800FCCE0
  goto L_800FCCEC; // 800FCCE4
L_800FCCE8:;
  c->r[3]=0u+0x00000000u; // 800FCCE8
L_800FCCEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCCEC
  c->lr=c->r[0]; // 800FCCF0
  c->r[1]=c->r[1]+0x00000010u; // 800FCCF4
  return; // 800FCCF8
}

// fn_800FCD00
void f_800FCD00(Ctx* __restrict c) {
  trace_call(0x800FCD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCD00
  c->r[0]=c->lr; // 800FCD04
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FCD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCD0C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800FCD10
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD14
  if (crb(c,2)) { goto L_800FCD38; } // 800FCD18
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FCD1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FCD20
  c->ctr=c->r[12]; // 800FCD24
  if (true) { c->lr=0x800FCD2Cu; dispatch(c,c->ctr); } // 800FCD28
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD2C
  if (crb(c,2)) { goto L_800FCD38; } // 800FCD30
  goto L_800FCD3C; // 800FCD34
L_800FCD38:;
  c->r[3]=0u+0x00000000u; // 800FCD38
L_800FCD3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCD3C
  c->lr=c->r[0]; // 800FCD40
  c->r[1]=c->r[1]+0x00000010u; // 800FCD44
  return; // 800FCD48
}

// fn_800FCD50
void f_800FCD50(Ctx* __restrict c) {
  trace_call(0x800FCD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCD50
  c->r[0]=c->lr; // 800FCD54
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FCD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCD5C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800FCD60
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD64
  if (crb(c,2)) { goto L_800FCD88; } // 800FCD68
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FCD6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FCD70
  c->ctr=c->r[12]; // 800FCD74
  if (true) { c->lr=0x800FCD7Cu; dispatch(c,c->ctr); } // 800FCD78
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD7C
  if (crb(c,2)) { goto L_800FCD88; } // 800FCD80
  goto L_800FCD8C; // 800FCD84
L_800FCD88:;
  c->r[3]=0u+0x00000000u; // 800FCD88
L_800FCD8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCD8C
  c->lr=c->r[0]; // 800FCD90
  c->r[1]=c->r[1]+0x00000010u; // 800FCD94
  return; // 800FCD98
}

// fn_800FCDA0
void f_800FCDA0(Ctx* __restrict c) {
  trace_call(0x800FCDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCDA0
  c->r[0]=c->lr; // 800FCDA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCDA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCDAC
  c->r[31]=c->r[3]|c->r[3]; // 800FCDB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FCDB4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FCDB8
  c->ctr=c->r[12]; // 800FCDBC
  if (true) { c->lr=0x800FCDC4u; dispatch(c,c->ctr); } // 800FCDC0
  c->r[0]=R32(c->r[31]+0x00000020u); // 800FCDC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCDC8
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 800FCDCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCDD0
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 800FCDD4
  c->lr=c->r[0]; // 800FCDD8
  c->r[1]=c->r[1]+0x00000010u; // 800FCDDC
  return; // 800FCDE0
}

// fn_800FCDF0
void f_800FCDF0(Ctx* __restrict c) {
  trace_call(0x800FCDF0u);
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800FCDF0
  c->r[0]=R32(c->r[3]+0x00000024u); // 800FCDF4
  c->r[3]=R32(c->r[3]+0x00000018u); // 800FCDF8
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 800FCDFC
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 800FCE00
  return; // 800FCE04
}

// fn_800FCE10
void f_800FCE10(Ctx* __restrict c) {
  trace_call(0x800FCE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCE10
  c->r[0]=c->lr; // 800FCE14
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800FCE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCE1C
  c->r[0]=0u+0x43300000u; // 800FCE20
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[3]=RF64(ea);} // 800FCE24
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FCE28
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FCE2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FCE30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800FCE34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800FCE38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FCE3C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FCE40
  c->lr=0x800FCE48u; f_800C3504(c); // 800FCE44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCE48
  c->lr=c->r[0]; // 800FCE4C
  c->r[1]=c->r[1]+0x00000010u; // 800FCE50
  return; // 800FCE54
}

// fn_800FCE60
void f_800FCE60(Ctx* __restrict c) {
  trace_call(0x800FCE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCE60
  c->r[0]=c->lr; // 800FCE64
  c->r[4]=c->r[6]|c->r[6]; // 800FCE68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCE6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FCE70
  c->r[31]=c->r[3]|c->r[3]; // 800FCE74
  c->r[3]=c->r[5]|c->r[5]; // 800FCE78
  c->lr=0x800FCE80u; f_800C3398(c); // 800FCE7C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800FCE80
  c->r[0]=0u+0x43300000u; // 800FCE84
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FCE88
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[2]=RF64(ea);} // 800FCE8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FCE90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCE94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800FCE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCE9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800FCEA0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FCEA4
  c->lr=c->r[0]; // 800FCEA8
  c->r[1]=c->r[1]+0x00000020u; // 800FCEAC
  return; // 800FCEB0
}

// fn_800FCEC0
void f_800FCEC0(Ctx* __restrict c) {
  trace_call(0x800FCEC0u);
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 800FCEC0
  c->r[4]=R32(c->r[3]+0x00000044u); // 800FCEC4
  c->r[5]=R32(c->r[3]+0x00000038u); // 800FCEC8
  c->r[0]=R32(c->r[3]+0x00000040u); // 800FCECC
  c->r[4]=addc(c,c->r[6],c->r[4],0); // 800FCED0
  c->r[3]=addc(c,c->r[5],c->r[0],c->xer_ca); // 800FCED4
  return; // 800FCED8
}

// fn_800FCEE0
void f_800FCEE0(Ctx* __restrict c) {
  trace_call(0x800FCEE0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FCEE0
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 800FCEE4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCEE8
  if (crb(c,2)) return; // 800FCEEC
  W32(c->r[3]+0x00000014u,c->r[6]); // 800FCEF0
  W32(c->r[3]+0x00000010u,c->r[5]); // 800FCEF4
  return; // 800FCEF8
}

// fn_800FCF00
void f_800FCF00(Ctx* __restrict c) {
  trace_call(0x800FCF00u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FCF00
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 800FCF04
  cmps(c,0,(int32_t)c->r[3],0); // 800FCF08
  if (crb(c,2)) return; // 800FCF0C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FCF10
  c->r[4]=R32(c->r[3]+0x00000008u); // 800FCF14
  c->r[0]=addc(c,c->r[0],c->r[6],0); // 800FCF18
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FCF1C
  c->r[0]=addc(c,c->r[4],c->r[5],c->xer_ca); // 800FCF20
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FCF24
  return; // 800FCF28
}

// fn_800FCF30
void f_800FCF30(Ctx* __restrict c) {
  trace_call(0x800FCF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCF30
  c->r[0]=c->lr; // 800FCF34
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FCF38
  c->r[11]=c->r[1]+0x00000030u; // 800FCF3C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800FCF40
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800FCF44
  c->lr=0x800FCF4Cu; f_800C2E48(c); // 800FCF48
  c->r[4]=R32(c->r[3]+0x00000004u); // 800FCF4C
  c->r[31]=c->r[3]|c->r[3]; // 800FCF50
  c->r[27]=c->r[5]|c->r[5]; // 800FCF54
  c->r[26]=c->r[6]|c->r[6]; // 800FCF58
  c->r[30]=R32(c->r[4]+0x0000009Cu); // 800FCF5C
  c->r[28]=c->r[7]|c->r[7]; // 800FCF60
  c->r[29]=c->r[8]|c->r[8]; // 800FCF64
  cmps(c,0,(int32_t)c->r[30],0); // 800FCF68
  if (crb(c,2)) { goto L_800FD05C; } // 800FCF6C
  c->r[12]=R32(c->r[28]+0x00000000u); // 800FCF70
  c->r[3]=c->r[28]|c->r[28]; // 800FCF74
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800FCF78
  c->ctr=c->r[12]; // 800FCF7C
  if (true) { c->lr=0x800FCF84u; dispatch(c,c->ctr); } // 800FCF80
  c->r[12]=R32(c->r[28]+0x00000000u); // 800FCF84
  c->f[31]=c->f[1]; // 800FCF88
  c->r[3]=c->r[28]|c->r[28]; // 800FCF8C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FCF90
  c->ctr=c->r[12]; // 800FCF94
  if (true) { c->lr=0x800FCF9Cu; dispatch(c,c->ctr); } // 800FCF98
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 800FCF9C
  W16(c->r[1]+0x00000010u,c->r[0]); // 800FCFA0
  cmps(c,0,(int32_t)c->r[29],0); // 800FCFA4
  c->r[6]=0u+0x00000001u; // 800FCFA8
  c->r[5]=R8(c->r[1]+0x00000010u); // 800FCFAC
  c->r[7]=0u+0x00000001u; // 800FCFB0
  c->r[4]=R8(c->r[1]+0x00000011u); // 800FCFB4
  W8(c->r[1]+0x00000014u,c->r[5]); // 800FCFB8
  W8(c->r[1]+0x00000015u,c->r[4]); // 800FCFBC
  if (!crb(c,2)) { goto L_800FCFF8; } // 800FCFC0
  c->r[0]=R16(c->r[30]+0x00000000u); // 800FCFC4
  c->r[3]=0u+0x00000000u; // 800FCFC8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800FCFCC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800FCFD0
  cmpu(c,0,c->r[0],c->r[5]); // 800FCFD4
  if (!crb(c,2)) { goto L_800FCFE8; } // 800FCFD8
  c->r[0]=R8(c->r[1]+0x0000000Du); // 800FCFDC
  cmpu(c,0,c->r[0],c->r[4]); // 800FCFE0
  if (crb(c,2)) { goto L_800FCFEC; } // 800FCFE4
L_800FCFE8:;
  c->r[3]=0u+0x00000001u; // 800FCFE8
L_800FCFEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800FCFEC
  if (!crb(c,2)) { goto L_800FCFF8; } // 800FCFF0
  c->r[7]=0u+0x00000000u; // 800FCFF4
L_800FCFF8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800FCFF8
  if (!crb(c,2)) { goto L_800FD010; } // 800FCFFC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FD000
  fcmp(c,0,c->f[31],c->f[0]); // 800FD004
  if (!crb(c,2)) { goto L_800FD010; } // 800FD008
  c->r[6]=0u+0x00000000u; // 800FD00C
L_800FD010:;
  cmps(c,0,(int32_t)c->r[6],0); // 800FD010
  if (crb(c,2)) { goto L_800FD03C; } // 800FD014
  W32(c->r[30]+0x0000000Cu,c->r[26]); // 800FD018
  c->r[0]=R16(c->r[1]+0x00000014u); // 800FD01C
  W16(c->r[1]+0x00000008u,c->r[0]); // 800FD020
  W32(c->r[30]+0x00000008u,c->r[27]); // 800FD024
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FD028
  W8(c->r[30]+0x00000000u,c->r[0]); // 800FD02C
  c->r[0]=R8(c->r[1]+0x00000009u); // 800FD030
  W8(c->r[30]+0x00000001u,c->r[0]); // 800FD034
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[31]);} // 800FD038
L_800FD03C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800FD03C
  c->r[3]=c->r[28]|c->r[28]; // 800FD040
  c->r[12]=R32(c->r[12]+0x00000024u); // 800FD044
  c->ctr=c->r[12]; // 800FD048
  if (true) { c->lr=0x800FD050u; dispatch(c,c->ctr); } // 800FD04C
  W32(c->r[30]+0x00000024u,c->r[3]); // 800FD050
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800FD054
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FD058
L_800FD05C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FD05C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800FD060
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800FD064
  c->lr=0x800FD06Cu; f_800C2E94(c); // 800FD068
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FD06C
  c->lr=c->r[0]; // 800FD070
  c->r[1]=c->r[1]+0x00000040u; // 800FD074
  return; // 800FD078
}

// fn_800FD080
void f_800FD080(Ctx* __restrict c) {
  trace_call(0x800FD080u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FD080
  f_800FE4E0(c); return; // 800FD084
}

// fn_800FD090
void f_800FD090(Ctx* __restrict c) {
  trace_call(0x800FD090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD090
  c->r[0]=c->lr; // 800FD094
  cmps(c,0,(int32_t)c->r[4],0); // 800FD098
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD09C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD0A0
  c->r[31]=c->r[4]|c->r[4]; // 800FD0A4
  if (!crb(c,2)) { goto L_800FD0B4; } // 800FD0A8
  c->r[3]=0u+0x00000025u; // 800FD0AC
  goto L_800FD0E8; // 800FD0B0
L_800FD0B4:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FD0B4
  c->r[4]=c->r[1]+0x00000008u; // 800FD0B8
  c->r[5]=c->r[1]+0x0000000Cu; // 800FD0BC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FD0C0
  c->lr=0x800FD0C8u; f_8019EFA0(c); // 800FD0C4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD0C8
  if (crb(c,2)) { goto L_800FD0D4; } // 800FD0CC
  goto L_800FD0E8; // 800FD0D0
L_800FD0D4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD0D4
  c->r[3]=0u+0x00000000u; // 800FD0D8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FD0DC
  W32(c->r[31]+0x00000004u,c->r[4]); // 800FD0E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800FD0E4
L_800FD0E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD0E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD0EC
  c->lr=c->r[0]; // 800FD0F0
  c->r[1]=c->r[1]+0x00000020u; // 800FD0F4
  return; // 800FD0F8
}

// fn_800FD100
void f_800FD100(Ctx* __restrict c) {
  trace_call(0x800FD100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD100
  c->r[0]=c->lr; // 800FD104
  c->r[6]=R32(c->r[3]+0x00000004u); // 800FD108
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD10C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD110
  c->r[31]=c->r[5]|c->r[5]; // 800FD114
  c->r[5]=c->r[4]|c->r[4]; // 800FD118
  c->r[4]=0u+0xFFFFFFFFu; // 800FD11C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FD120
  c->r[30]=c->r[3]|c->r[3]; // 800FD124
  c->r[7]=c->r[31]|c->r[31]; // 800FD128
  c->r[3]=R32(c->r[6]+0x00000008u); // 800FD12C
  c->r[6]=0u+0x00000001u; // 800FD130
  c->lr=0x800FD138u; f_8019ED60(c); // 800FD134
  cmps(c,0,(int32_t)c->r[3],0); // 800FD138
  if (crb(c,2)) { goto L_800FD144; } // 800FD13C
  goto L_800FD168; // 800FD140
L_800FD144:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800FD144
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FD148
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800FD14C
  c->lr=0x800FD154u; f_80175F40(c); // 800FD150
  cmps(c,0,(int32_t)c->r[3],0); // 800FD154
  c->r[0]=0u+0x00000000u; // 800FD158
  if (crb(c,2)) { goto L_800FD164; } // 800FD15C
  c->r[0]=c->r[3]|c->r[3]; // 800FD160
L_800FD164:;
  c->r[3]=c->r[0]|c->r[0]; // 800FD164
L_800FD168:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD16C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FD170
  c->lr=c->r[0]; // 800FD174
  c->r[1]=c->r[1]+0x00000010u; // 800FD178
  return; // 800FD17C
}

// fn_800FD180
void f_800FD180(Ctx* __restrict c) {
  trace_call(0x800FD180u);
  c->r[0]=c->r[3]+0x00000008u; // 800FD180
  c->r[5]=c->r[3]|c->r[3]; // 800FD184
  c->r[4]=0u+0x00000000u; // 800FD188
L_800FD18C:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800FD18C
  c->r[5]=c->r[5]+0x00000004u; // 800FD190
  cmpu(c,0,c->r[5],c->r[0]); // 800FD194
  if (crb(c,0)) { IRQCHK(c); goto L_800FD18C; } // 800FD198
  c->r[4]=0u+0x00000000u; // 800FD19C
  c->r[0]=0u+0x00000001u; // 800FD1A0
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FD1A4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FD1A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FD1AC
  W32(c->r[3]+0x00000014u,c->r[4]); // 800FD1B0
  W32(c->r[3]+0x00000018u,c->r[4]); // 800FD1B4
  return; // 800FD1B8
}

// fn_800FD1C0
void f_800FD1C0(Ctx* __restrict c) {
  trace_call(0x800FD1C0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800FD1C0
  if (!crb(c,2)) { goto L_800FD1D0; } // 800FD1C4
  c->r[3]=0u+0x00000021u; // 800FD1C8
  return; // 800FD1CC
L_800FD1D0:;
  c->r[0]=0u+0x00000002u; // 800FD1D0
  W32(c->r[3]+0x00000014u,c->r[4]); // 800FD1D4
  c->r[5]=0u+0x00000000u; // 800FD1D8
  c->r[4]=0u+0x00000000u; // 800FD1DC
  c->ctr=c->r[0]; // 800FD1E0
L_800FD1E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800FD1E4
  W32(c->r[3]+c->r[4],c->r[5]); // 800FD1E8
  if (crb(c,2)) { goto L_800FD1F8; } // 800FD1EC
  c->r[3]=0u+0x00000000u; // 800FD1F0
  return; // 800FD1F4
L_800FD1F8:;
  c->r[4]=c->r[4]+0x00000004u; // 800FD1F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FD1E4; } // 800FD1FC
  c->r[3]=0u+0x00000000u; // 800FD200
  return; // 800FD204
}

// fn_800FD210
void f_800FD210(Ctx* __restrict c) {
  trace_call(0x800FD210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD210
  c->r[0]=c->lr; // 800FD214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD218
  c->lr=0x800FD220u; f_800FD5B0(c); // 800FD21C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD220
  c->r[0]=0u+0x00000000u; // 800FD224
  if (crb(c,2)) { goto L_800FD230; } // 800FD228
  c->r[0]=c->r[3]|c->r[3]; // 800FD22C
L_800FD230:;
  c->r[3]=c->r[0]|c->r[0]; // 800FD230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD234
  c->lr=c->r[0]; // 800FD238
  c->r[1]=c->r[1]+0x00000010u; // 800FD23C
  return; // 800FD240
}

// fn_800FD250
void f_800FD250(Ctx* __restrict c) {
  trace_call(0x800FD250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD250
  c->r[0]=c->lr; // 800FD254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD25C
  c->r[31]=c->r[3]|c->r[3]; // 800FD260
  c->r[3]=c->r[4]|c->r[4]; // 800FD264
  c->r[12]=R32(c->r[4]+0x00000000u); // 800FD268
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FD26C
  c->ctr=c->r[12]; // 800FD270
  if (true) { c->lr=0x800FD278u; dispatch(c,c->ctr); } // 800FD274
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FD278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD27C
  c->r[3]=c->r[3]&c->r[0]; // 800FD280
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800FD284
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800FD288
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD28C
  c->lr=c->r[0]; // 800FD290
  c->r[1]=c->r[1]+0x00000010u; // 800FD294
  return; // 800FD298
}

// fn_800FD2A0
void f_800FD2A0(Ctx* __restrict c) {
  trace_call(0x800FD2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD2A0
  c->r[0]=c->lr; // 800FD2A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800FD2A8
  c->r[0]=0u+0x00000000u; // 800FD2AC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800FD2B0
  c->r[31]=c->r[3]|c->r[3]; // 800FD2B4
  W32(c->r[1]+0x00000048u,c->r[30]); // 800FD2B8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800FD2BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FD2C0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800FD2C4
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800FD2C8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FD2CC
  c->lr=0x800FD2D4u; f_800FE160(c); // 800FD2D0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD2D4
  c->r[3]=c->r[31]+c->r[0]; // 800FD2D8
  c->lr=0x800FD2E0u; f_800FEA10(c); // 800FD2DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FD2E0
  if (crb(c,2)) { goto L_800FD324; } // 800FD2E4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800FD2E8
  c->r[3]=c->r[31]|c->r[31]; // 800FD2EC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FD2F0
  c->lr=0x800FD2F8u; f_800FE160(c); // 800FD2F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD2F8
  c->r[3]=c->r[1]+0x00000028u; // 800FD2FC
  c->r[4]=c->r[31]+c->r[0]; // 800FD300
  c->lr=0x800FD308u; f_800FEA80(c); // 800FD304
  c->r[4]=R32(c->r[1]+0x00000028u); // 800FD308
  c->r[0]=R32(c->r[1]+0x00000030u); // 800FD30C
  c->r[3]=R32(c->r[1]+0x00000034u); // 800FD310
  W32(c->r[1]+0x00000038u,c->r[4]); // 800FD314
  W32(c->r[1]+0x00000044u,c->r[3]); // 800FD318
  W32(c->r[1]+0x00000040u,c->r[0]); // 800FD31C
  goto L_800FD370; // 800FD320
L_800FD324:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD324
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD328
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FD32C
  c->ctr=c->r[12]; // 800FD330
  if (true) { c->lr=0x800FD338u; dispatch(c,c->ctr); } // 800FD334
  c->r[5]=c->r[3]|c->r[3]; // 800FD338
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD33C
  c->r[6]=c->r[4]|c->r[4]; // 800FD340
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD344
  c->r[12]=R32(c->r[12]+0x00000054u); // 800FD348
  c->ctr=c->r[12]; // 800FD34C
  if (true) { c->lr=0x800FD354u; dispatch(c,c->ctr); } // 800FD350
  c->r[0]=R32(c->r[2]+0xFFFF9FF0u); // 800FD354
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FD358
  W32(c->r[1]+0x00000024u,c->r[4]); // 800FD35C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800FD360
  W32(c->r[1]+0x00000038u,c->r[0]); // 800FD364
  W32(c->r[1]+0x00000044u,c->r[4]); // 800FD368
  W32(c->r[1]+0x00000040u,c->r[3]); // 800FD36C
L_800FD370:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 800FD370
  cmps(c,0,(int32_t)c->r[0],0); // 800FD374
  if (!crb(c,2)) { goto L_800FD384; } // 800FD378
  c->r[3]=0u+0x00000000u; // 800FD37C
  goto L_800FD45C; // 800FD380
L_800FD384:;
  c->r[3]=0u+0x80390000u; // 800FD384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD388
  c->r[3]=c->r[3]+0xFFFFE0C0u; // 800FD38C
  c->r[4]=c->r[1]+0x00000008u; // 800FD390
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FD394
  c->r[5]=c->r[1]+0x00000010u; // 800FD398
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD39C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FD3A0
  c->lr=0x800FD3A8u; f_800FEAB0(c); // 800FD3A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD3A8
  if (crb(c,2)) { goto L_800FD3B4; } // 800FD3AC
  goto L_800FD45C; // 800FD3B0
L_800FD3B4:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800FD3B4
  cmps(c,0,(int32_t)c->r[4],0); // 800FD3B8
  if (!crb(c,2)) { goto L_800FD3D8; } // 800FD3BC
  c->r[3]=R32(c->r[1]+0x00000038u); // 800FD3C0
  c->r[0]=R32(c->r[2]+0xFFFF9FF0u); // 800FD3C4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800FD3C8
  if (!crb(c,2)) { goto L_800FD3D8; } // 800FD3CC
  c->r[3]=0u+0x00000000u; // 800FD3D0
  goto L_800FD45C; // 800FD3D4
L_800FD3D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800FD3D8
  if (crb(c,2)) { goto L_800FD42C; } // 800FD3DC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800FD3E0
  c->r[3]=c->r[31]|c->r[31]; // 800FD3E4
  c->r[30]=R32(c->r[4]+0x00000004u); // 800FD3E8
  c->lr=0x800FD3F0u; f_800FE0F0(c); // 800FD3EC
  cmpu(c,0,c->r[30],c->r[3]); // 800FD3F0
  if (!crb(c,2)) { goto L_800FD42C; } // 800FD3F4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800FD3F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD3FC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FD400
  c->ctr=c->r[12]; // 800FD404
  if (true) { c->lr=0x800FD40Cu; dispatch(c,c->ctr); } // 800FD408
  cmps(c,0,(int32_t)c->r[3],0); // 800FD40C
  if (crb(c,2)) { goto L_800FD42C; } // 800FD410
  c->r[3]=R32(c->r[1]+0x00000038u); // 800FD414
  c->r[0]=R32(c->r[2]+0xFFFF9FF0u); // 800FD418
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800FD41C
  if (!crb(c,2)) { goto L_800FD42C; } // 800FD420
  c->r[3]=0u+0x00000000u; // 800FD424
  goto L_800FD45C; // 800FD428
L_800FD42C:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800FD42C
  cmps(c,0,(int32_t)c->r[5],0); // 800FD430
  if (crb(c,2)) { goto L_800FD450; } // 800FD434
  c->r[3]=c->r[31]|c->r[31]; // 800FD438
  c->r[4]=c->r[1]+0x00000038u; // 800FD43C
  c->lr=0x800FD444u; f_800FD4C0(c); // 800FD440
  cmps(c,0,(int32_t)c->r[3],0); // 800FD444
  if (crb(c,2)) { goto L_800FD458; } // 800FD448
  goto L_800FD45C; // 800FD44C
L_800FD450:;
  c->r[0]=0u+0x00000003u; // 800FD450
  W32(c->r[31]+0x00000010u,c->r[0]); // 800FD454
L_800FD458:;
  c->r[3]=0u+0x00000000u; // 800FD458
L_800FD45C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800FD45C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800FD460
  c->r[30]=R32(c->r[1]+0x00000048u); // 800FD464
  c->lr=c->r[0]; // 800FD468
  c->r[1]=c->r[1]+0x00000050u; // 800FD46C
  return; // 800FD470
}

// fn_800FD480
void f_800FD480(Ctx* __restrict c) {
  trace_call(0x800FD480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD480
  c->r[0]=c->lr; // 800FD484
  cmps(c,0,(int32_t)c->r[3],0); // 800FD488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD48C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD490
  c->r[31]=c->r[3]|c->r[3]; // 800FD494
  if (crb(c,2)) { goto L_800FD4A8; } // 800FD498
  cmps(c,0,(int32_t)c->r[4],0); // 800FD49C
  if (!crb(c,1)) { goto L_800FD4A8; } // 800FD4A0
  c->lr=0x800FD4A8u; f_800C2AC0(c); // 800FD4A4
L_800FD4A8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD4B0
  c->lr=c->r[0]; // 800FD4B4
  c->r[1]=c->r[1]+0x00000010u; // 800FD4B8
  return; // 800FD4BC
}

// fn_800FD4C0
void f_800FD4C0(Ctx* __restrict c) {
  trace_call(0x800FD4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD4C0
  c->r[0]=c->lr; // 800FD4C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD4C8
  c->r[11]=c->r[1]+0x00000020u; // 800FD4CC
  c->lr=0x800FD4D4u; f_800C2E4C(c); // 800FD4D0
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FD4D4
  c->r[28]=c->r[4]|c->r[4]; // 800FD4D8
  c->r[27]=c->r[3]|c->r[3]; // 800FD4DC
  c->r[29]=c->r[5]|c->r[5]; // 800FD4E0
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 800FD4E4
  c->lr=0x800FD4ECu; f_800FE160(c); // 800FD4E8
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800FD4EC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD4F0
  c->r[3]=c->r[27]|c->r[27]; // 800FD4F4
  c->r[31]=c->r[27]+c->r[0]; // 800FD4F8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FD4FC
  c->lr=0x800FD504u; f_800FE160(c); // 800FD500
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD504
  c->r[3]=c->r[27]+c->r[0]; // 800FD508
  c->lr=0x800FD510u; f_800FEA10(c); // 800FD50C
  cmps(c,0,(int32_t)c->r[3],4); // 800FD510
  if (crb(c,2)) { goto L_800FD530; } // 800FD514
  c->r[3]=c->r[27]|c->r[27]; // 800FD518
  c->lr=0x800FD520u; f_800FD9E0(c); // 800FD51C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD520
  if (!crb(c,2)) { goto L_800FD530; } // 800FD524
  c->r[3]=0u+0x00000000u; // 800FD528
  goto L_800FD598; // 800FD52C
L_800FD530:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800FD530
  c->r[3]=c->r[27]|c->r[27]; // 800FD534
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FD538
  c->lr=0x800FD540u; f_800FE160(c); // 800FD53C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD540
  c->r[30]=c->r[27]+c->r[0]; // 800FD544
  c->r[3]=c->r[30]|c->r[30]; // 800FD548
  c->lr=0x800FD550u; f_800FE8A0(c); // 800FD54C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD550
  if (crb(c,2)) { goto L_800FD55C; } // 800FD554
  goto L_800FD598; // 800FD558
L_800FD55C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FD55C
  if (!crb(c,2)) { goto L_800FD56C; } // 800FD560
  c->r[3]=0u+0x00000000u; // 800FD564
  goto L_800FD598; // 800FD568
L_800FD56C:;
  c->r[4]=R32(c->r[27]+0x00000014u); // 800FD56C
  c->r[3]=c->r[30]|c->r[30]; // 800FD570
  c->r[5]=c->r[31]|c->r[31]; // 800FD574
  c->r[6]=c->r[28]|c->r[28]; // 800FD578
  c->r[7]=c->r[29]|c->r[29]; // 800FD57C
  c->lr=0x800FD584u; f_800FE770(c); // 800FD580
  cmps(c,0,(int32_t)c->r[3],0); // 800FD584
  c->r[0]=0u+0x00000000u; // 800FD588
  if (crb(c,2)) { goto L_800FD594; } // 800FD58C
  c->r[0]=c->r[3]|c->r[3]; // 800FD590
L_800FD594:;
  c->r[3]=c->r[0]|c->r[0]; // 800FD594
L_800FD598:;
  c->r[11]=c->r[1]+0x00000020u; // 800FD598
  c->lr=0x800FD5A0u; f_800C2E98(c); // 800FD59C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD5A0
  c->lr=c->r[0]; // 800FD5A4
  c->r[1]=c->r[1]+0x00000020u; // 800FD5A8
  return; // 800FD5AC
}

// fn_800FD5B0
void f_800FD5B0(Ctx* __restrict c) {
  trace_call(0x800FD5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD5B0
  c->r[0]=c->lr; // 800FD5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD5B8
  c->r[11]=c->r[1]+0x00000020u; // 800FD5BC
  c->lr=0x800FD5C4u; f_800C2E54(c); // 800FD5C0
  c->r[29]=c->r[3]|c->r[3]; // 800FD5C4
  c->r[30]=0u+0x00000000u; // 800FD5C8
  c->r[31]=0u+0x00000000u; // 800FD5CC
L_800FD5D0:;
  c->r[3]=c->r[29]+c->r[31]; // 800FD5D0
  c->lr=0x800FD5D8u; f_800FE8A0(c); // 800FD5D4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD5D8
  if (crb(c,2)) { goto L_800FD5E4; } // 800FD5DC
  goto L_800FD608; // 800FD5E0
L_800FD5E4:;
  c->r[30]=c->r[30]+0x00000001u; // 800FD5E4
  c->r[31]=c->r[31]+0x00000004u; // 800FD5E8
  cmps(c,0,(int32_t)c->r[30],2); // 800FD5EC
  if (crb(c,0)) { IRQCHK(c); goto L_800FD5D0; } // 800FD5F0
  c->r[3]=0u+0x00000000u; // 800FD5F4
  c->r[0]=0u+0x00000001u; // 800FD5F8
  W32(c->r[29]+0x00000008u,c->r[3]); // 800FD5FC
  c->r[3]=0u+0x00000000u; // 800FD600
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800FD604
L_800FD608:;
  c->r[11]=c->r[1]+0x00000020u; // 800FD608
  c->lr=0x800FD610u; f_800C2EA0(c); // 800FD60C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD610
  c->lr=c->r[0]; // 800FD614
  c->r[1]=c->r[1]+0x00000020u; // 800FD618
  return; // 800FD61C
}

// fn_800FD620
void f_800FD620(Ctx* __restrict c) {
  trace_call(0x800FD620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD620
  c->r[0]=c->lr; // 800FD624
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD628
  c->r[11]=c->r[1]+0x00000020u; // 800FD62C
  c->lr=0x800FD634u; f_800C2E54(c); // 800FD630
  c->r[31]=c->r[3]|c->r[3]; // 800FD634
  c->r[29]=0u+0x00000000u; // 800FD638
  c->r[30]=0u+0x00000000u; // 800FD63C
  goto L_800FD684; // 800FD640
L_800FD644:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD644
  c->r[4]=c->r[30]|c->r[30]; // 800FD648
  c->lr=0x800FD650u; f_800FE160(c); // 800FD64C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD650
  c->r[4]=c->r[29]|c->r[29]; // 800FD654
  c->r[3]=c->r[31]+c->r[0]; // 800FD658
  c->lr=0x800FD660u; f_800FE720(c); // 800FD65C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD660
  if (crb(c,2)) { goto L_800FD66C; } // 800FD664
  goto L_800FD92C; // 800FD668
L_800FD66C:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD66C
  c->r[4]=c->r[30]|c->r[30]; // 800FD670
  c->lr=0x800FD678u; f_800FE160(c); // 800FD674
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD678
  c->r[30]=c->r[30]+0x00000001u; // 800FD67C
  c->r[29]=c->r[31]+c->r[0]; // 800FD680
L_800FD684:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FD684
  cmpu(c,0,c->r[30],c->r[0]); // 800FD688
  if (crb(c,0)) { IRQCHK(c); goto L_800FD644; } // 800FD68C
  goto L_800FD6A8; // 800FD690
L_800FD694:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD694
  c->lr=0x800FD69Cu; f_800FD970(c); // 800FD698
  cmps(c,0,(int32_t)c->r[3],0); // 800FD69C
  if (crb(c,2)) { goto L_800FD6A8; } // 800FD6A0
  goto L_800FD92C; // 800FD6A4
L_800FD6A8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FD6A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD6AC
  c->r[3]=c->r[31]+c->r[0]; // 800FD6B0
  c->lr=0x800FD6B8u; f_800FEA10(c); // 800FD6B4
  cmps(c,0,(int32_t)c->r[3],6); // 800FD6B8
  if (crb(c,2)) { IRQCHK(c); goto L_800FD694; } // 800FD6BC
  c->r[0]=R32(c->r[31]+0x00000010u); // 800FD6C0
  cmps(c,0,(int32_t)c->r[0],2); // 800FD6C4
  if (!crb(c,2)) { goto L_800FD748; } // 800FD6C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FD6CC
  c->r[3]=0u+0x00000000u; // 800FD6D0
  W32(c->r[31]+0x00000010u,c->r[3]); // 800FD6D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD6D8
  c->r[3]=c->r[31]+c->r[0]; // 800FD6DC
  c->lr=0x800FD6E4u; f_800FEA10(c); // 800FD6E0
  c->r[0]=cntlz(c->r[3]); // 800FD6E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800FD6E8
  if (crb(c,2)) { goto L_800FD718; } // 800FD6EC
  c->r[3]=c->r[31]|c->r[31]; // 800FD6F0
  c->lr=0x800FD6F8u; f_800FD2A0(c); // 800FD6F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD6F8
  if (crb(c,2)) { goto L_800FD704; } // 800FD6FC
  goto L_800FD92C; // 800FD700
L_800FD704:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD704
  c->lr=0x800FD70Cu; f_800FD970(c); // 800FD708
  cmps(c,0,(int32_t)c->r[3],0); // 800FD70C
  if (crb(c,2)) { goto L_800FD748; } // 800FD710
  goto L_800FD92C; // 800FD714
L_800FD718:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD718
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD71C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800FD720
  c->ctr=c->r[12]; // 800FD724
  if (true) { c->lr=0x800FD72Cu; dispatch(c,c->ctr); } // 800FD728
  c->r[5]=c->r[3]|c->r[3]; // 800FD72C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD730
  c->r[6]=c->r[4]|c->r[4]; // 800FD734
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD738
  c->r[12]=R32(c->r[12]+0x00000044u); // 800FD73C
  c->ctr=c->r[12]; // 800FD740
  if (true) { c->lr=0x800FD748u; dispatch(c,c->ctr); } // 800FD744
L_800FD748:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800FD748
  cmps(c,0,(int32_t)c->r[0],0); // 800FD74C
  if (!crb(c,2)) { goto L_800FD8C8; } // 800FD750
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800FD754
  c->r[3]=c->r[31]|c->r[31]; // 800FD758
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FD75C
  c->lr=0x800FD764u; f_800FE160(c); // 800FD760
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FD764
  c->r[3]=c->r[31]+c->r[0]; // 800FD768
  c->lr=0x800FD770u; f_800FEA10(c); // 800FD76C
  cmps(c,0,(int32_t)c->r[3],4); // 800FD770
  if (!crb(c,2)) { goto L_800FD78C; } // 800FD774
  c->r[3]=c->r[31]|c->r[31]; // 800FD778
  c->lr=0x800FD780u; f_800FD2A0(c); // 800FD77C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD780
  if (crb(c,2)) { goto L_800FD78C; } // 800FD784
  goto L_800FD92C; // 800FD788
L_800FD78C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FD78C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD790
  c->r[29]=c->r[31]+c->r[0]; // 800FD794
  c->r[3]=c->r[29]|c->r[29]; // 800FD798
  c->lr=0x800FD7A0u; f_800FEA10(c); // 800FD79C
  cmps(c,0,(int32_t)c->r[3],3); // 800FD7A0
  if (!crb(c,2)) { goto L_800FD808; } // 800FD7A4
  c->r[3]=c->r[29]|c->r[29]; // 800FD7A8
  c->lr=0x800FD7B0u; f_800FEA30(c); // 800FD7AC
  c->r[30]=c->r[3]|c->r[3]; // 800FD7B0
  c->r[3]=c->r[29]|c->r[29]; // 800FD7B4
  c->lr=0x800FD7BCu; f_800FEA50(c); // 800FD7B8
  c->r[5]=c->r[3]|c->r[3]; // 800FD7BC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD7C0
  c->r[6]=c->r[4]|c->r[4]; // 800FD7C4
  c->r[7]=c->r[30]|c->r[30]; // 800FD7C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD7CC
  c->r[8]=0u+0x00000000u; // 800FD7D0
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800FD7D4
  c->ctr=c->r[12]; // 800FD7D8
  if (true) { c->lr=0x800FD7E0u; dispatch(c,c->ctr); } // 800FD7DC
  c->r[4]=R32(c->r[31]+0x00000018u); // 800FD7E0
  cmps(c,0,(int32_t)c->r[4],0); // 800FD7E4
  if (crb(c,2)) { goto L_800FD808; } // 800FD7E8
  c->r[3]=c->r[31]|c->r[31]; // 800FD7EC
  c->lr=0x800FD7F4u; f_800FDC00(c); // 800FD7F0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD7F4
  if (crb(c,2)) { goto L_800FD800; } // 800FD7F8
  goto L_800FD92C; // 800FD7FC
L_800FD800:;
  c->r[0]=0u+0x00000000u; // 800FD800
  W32(c->r[31]+0x00000018u,c->r[0]); // 800FD804
L_800FD808:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD808
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD80C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FD810
  c->ctr=c->r[12]; // 800FD814
  if (true) { c->lr=0x800FD81Cu; dispatch(c,c->ctr); } // 800FD818
  cmps(c,0,(int32_t)c->r[3],0); // 800FD81C
  if (!crb(c,2)) { goto L_800FD864; } // 800FD820
  c->r[3]=c->r[29]|c->r[29]; // 800FD824
  c->lr=0x800FD82Cu; f_800FEA10(c); // 800FD828
  cmps(c,0,(int32_t)c->r[3],1); // 800FD82C
  if (crb(c,2)) { goto L_800FD844; } // 800FD830
  c->r[3]=c->r[29]|c->r[29]; // 800FD834
  c->lr=0x800FD83Cu; f_800FEA10(c); // 800FD838
  cmps(c,0,(int32_t)c->r[3],3); // 800FD83C
  if (!crb(c,2)) { goto L_800FD864; } // 800FD840
L_800FD844:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FD844
  cmpu(c,0,c->r[0],0x00000002u); // 800FD848
  if (!crb(c,0)) { goto L_800FD864; } // 800FD84C
  c->r[3]=c->r[31]|c->r[31]; // 800FD850
  c->lr=0x800FD858u; f_800FD2A0(c); // 800FD854
  cmps(c,0,(int32_t)c->r[3],0); // 800FD858
  if (crb(c,2)) { goto L_800FD864; } // 800FD85C
  goto L_800FD92C; // 800FD860
L_800FD864:;
  c->r[30]=0u+0x00000000u; // 800FD864
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FD868
  c->r[3]=c->r[29]|c->r[29]; // 800FD86C
  c->lr=0x800FD874u; f_800FEA30(c); // 800FD870
  cmps(c,0,(int32_t)c->r[3],0); // 800FD874
  if (crb(c,2)) { goto L_800FD888; } // 800FD878
  c->r[3]=c->r[29]|c->r[29]; // 800FD87C
  c->lr=0x800FD884u; f_800FEA30(c); // 800FD880
  c->r[30]=R32(c->r[3]+0x00000004u); // 800FD884
L_800FD888:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD888
  c->r[4]=c->r[1]+0x00000008u; // 800FD88C
  c->lr=0x800FD894u; f_800FDE90(c); // 800FD890
  cmps(c,0,(int32_t)c->r[3],0); // 800FD894
  if (crb(c,2)) { goto L_800FD8A0; } // 800FD898
  goto L_800FD92C; // 800FD89C
L_800FD8A0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FD8A0
  c->r[4]=c->r[30]|c->r[30]; // 800FD8A4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800FD8A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FD8AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FD8B0
  c->ctr=c->r[12]; // 800FD8B4
  if (true) { c->lr=0x800FD8BCu; dispatch(c,c->ctr); } // 800FD8B8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD8BC
  if (crb(c,2)) { goto L_800FD8C8; } // 800FD8C0
  goto L_800FD92C; // 800FD8C4
L_800FD8C8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800FD8C8
  cmps(c,0,(int32_t)c->r[0],3); // 800FD8CC
  if (!crb(c,2)) { goto L_800FD928; } // 800FD8D0
  goto L_800FD8EC; // 800FD8D4
L_800FD8D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FD8D8
  c->lr=0x800FD8E0u; f_800FD970(c); // 800FD8DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FD8E0
  if (crb(c,2)) { goto L_800FD8EC; } // 800FD8E4
  goto L_800FD92C; // 800FD8E8
L_800FD8EC:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FD8EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD8F0
  c->r[3]=c->r[31]+c->r[0]; // 800FD8F4
  c->lr=0x800FD8FCu; f_800FEA10(c); // 800FD8F8
  cmps(c,0,(int32_t)c->r[3],4); // 800FD8FC
  if (crb(c,2)) { IRQCHK(c); goto L_800FD8D8; } // 800FD900
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FD904
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD908
  c->r[3]=c->r[31]+c->r[0]; // 800FD90C
  c->lr=0x800FD914u; f_800FEA10(c); // 800FD910
  c->r[0]=cntlz(c->r[3]); // 800FD914
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800FD918
  if (crb(c,2)) { goto L_800FD928; } // 800FD91C
  c->r[0]=0u+0x00000001u; // 800FD920
  W32(c->r[31]+0x00000010u,c->r[0]); // 800FD924
L_800FD928:;
  c->r[3]=0u+0x00000000u; // 800FD928
L_800FD92C:;
  c->r[11]=c->r[1]+0x00000020u; // 800FD92C
  c->lr=0x800FD934u; f_800C2EA0(c); // 800FD930
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD934
  c->lr=c->r[0]; // 800FD938
  c->r[1]=c->r[1]+0x00000020u; // 800FD93C
  return; // 800FD940
}

// fn_800FD950
void f_800FD950(Ctx* __restrict c) {
  trace_call(0x800FD950u);
  c->r[4]=c->r[3]|c->r[3]; // 800FD950
  c->r[3]=R32(c->r[3]+0x00000018u); // 800FD954
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 800FD958
  return; // 800FD95C
}

// fn_800FD960
void f_800FD960(Ctx* __restrict c) {
  trace_call(0x800FD960u);
  c->r[3]=R8(c->r[3]+0x00000008u); // 800FD960
  return; // 800FD964
}

// fn_800FD970
void f_800FD970(Ctx* __restrict c) {
  trace_call(0x800FD970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD970
  c->r[0]=c->lr; // 800FD974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD97C
  c->r[31]=c->r[3]|c->r[3]; // 800FD980
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FD984
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD988
  c->r[3]=c->r[3]+c->r[0]; // 800FD98C
  c->lr=0x800FD994u; f_800FE8A0(c); // 800FD990
  cmps(c,0,(int32_t)c->r[3],0); // 800FD994
  if (crb(c,2)) { goto L_800FD9A0; } // 800FD998
  goto L_800FD9C8; // 800FD99C
L_800FD9A0:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800FD9A0
  cmpu(c,0,c->r[4],0x00000001u); // 800FD9A4
  if (!crb(c,1)) { goto L_800FD9C4; } // 800FD9A8
  c->r[3]=R32(c->r[31]+0x00000008u); // 800FD9AC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FD9B0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800FD9B4
  c->r[0]=c->r[3]+0x00000001u; // 800FD9B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800FD9BC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800FD9C0
L_800FD9C4:;
  c->r[3]=0u+0x00000000u; // 800FD9C4
L_800FD9C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD9C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD9CC
  c->lr=c->r[0]; // 800FD9D0
  c->r[1]=c->r[1]+0x00000010u; // 800FD9D4
  return; // 800FD9D8
}

// fn_800FD9E0
void f_800FD9E0(Ctx* __restrict c) {
  trace_call(0x800FD9E0u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800FD9E0
  cmpu(c,0,c->r[4],0x00000002u); // 800FD9E4
  if (!crb(c,0)) { goto L_800FD9FC; } // 800FD9E8
  c->r[0]=c->r[4]+0x00000001u; // 800FD9EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FD9F0
  c->r[3]=0u+0x00000001u; // 800FD9F4
  return; // 800FD9F8
L_800FD9FC:;
  c->r[3]=0u+0x00000000u; // 800FD9FC
  return; // 800FDA00
}

// fn_800FDA10
void f_800FDA10(Ctx* __restrict c) {
  trace_call(0x800FDA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDA10
  c->r[0]=c->lr; // 800FDA14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDA18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDA1C
  c->r[31]=0u+0x00000000u; // 800FDA20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FDA24
  c->r[30]=c->r[3]|c->r[3]; // 800FDA28
  goto L_800FDA58; // 800FDA2C
L_800FDA30:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDA30
  c->r[4]=c->r[31]|c->r[31]; // 800FDA34
  c->lr=0x800FDA3Cu; f_800FE160(c); // 800FDA38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FDA3C
  c->r[3]=c->r[30]+c->r[0]; // 800FDA40
  c->lr=0x800FDA48u; f_800FE860(c); // 800FDA44
  cmps(c,0,(int32_t)c->r[3],0); // 800FDA48
  if (crb(c,2)) { goto L_800FDA54; } // 800FDA4C
  goto L_800FDA68; // 800FDA50
L_800FDA54:;
  c->r[31]=c->r[31]+0x00000001u; // 800FDA54
L_800FDA58:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800FDA58
  cmpu(c,0,c->r[31],c->r[0]); // 800FDA5C
  if (crb(c,0)) { IRQCHK(c); goto L_800FDA30; } // 800FDA60
  c->r[3]=0u+0x00000000u; // 800FDA64
L_800FDA68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDA6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FDA70
  c->lr=c->r[0]; // 800FDA74
  c->r[1]=c->r[1]+0x00000010u; // 800FDA78
  return; // 800FDA7C
}

// fn_800FDA80
void f_800FDA80(Ctx* __restrict c) {
  trace_call(0x800FDA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDA80
  c->r[0]=c->lr; // 800FDA84
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDA88
  c->r[11]=c->r[1]+0x00000030u; // 800FDA8C
  c->lr=0x800FDA94u; f_800C2E4C(c); // 800FDA90
  c->r[27]=c->r[3]|c->r[3]; // 800FDA94
  c->r[3]=R32(c->r[3]+0x00000014u); // 800FDA98
  c->r[28]=c->r[4]|c->r[4]; // 800FDA9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDAA0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FDAA4
  c->ctr=c->r[12]; // 800FDAA8
  if (true) { c->lr=0x800FDAB0u; dispatch(c,c->ctr); } // 800FDAAC
  cmpu(c,0,c->r[28],c->r[3]); // 800FDAB0
  if (crb(c,2)) { goto L_800FDBC0; } // 800FDAB4
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDAB8
  c->r[4]=c->r[1]+0x00000008u; // 800FDABC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDAC0
  c->r[12]=R32(c->r[12]+0x00000058u); // 800FDAC4
  c->ctr=c->r[12]; // 800FDAC8
  if (true) { c->lr=0x800FDAD0u; dispatch(c,c->ctr); } // 800FDACC
  cmps(c,0,(int32_t)c->r[3],0); // 800FDAD0
  if (crb(c,2)) { goto L_800FDADC; } // 800FDAD4
  goto L_800FDBC4; // 800FDAD8
L_800FDADC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800FDADC
  if (!crb(c,2)) { goto L_800FDB74; } // 800FDAE0
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDAE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDAE8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800FDAEC
  c->ctr=c->r[12]; // 800FDAF0
  if (true) { c->lr=0x800FDAF8u; dispatch(c,c->ctr); } // 800FDAF4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FDAF8
  c->r[29]=0u+0x00000000u; // 800FDAFC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB00
  c->r[30]=addc(c,c->r[4],c->r[3],0); // 800FDB04
  c->r[31]=addc(c,c->r[0],0,c->xer_ca); // 800FDB08
  goto L_800FDB34; // 800FDB0C
L_800FDB10:;
  c->r[3]=c->r[27]|c->r[27]; // 800FDB10
  c->r[4]=c->r[29]|c->r[29]; // 800FDB14
  c->lr=0x800FDB1Cu; f_800FE160(c); // 800FDB18
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FDB1C
  c->r[6]=c->r[30]|c->r[30]; // 800FDB20
  c->r[5]=c->r[31]|c->r[31]; // 800FDB24
  c->r[3]=c->r[27]+c->r[0]; // 800FDB28
  c->lr=0x800FDB30u; f_800FE980(c); // 800FDB2C
  c->r[29]=c->r[29]+0x00000001u; // 800FDB30
L_800FDB34:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800FDB34
  cmpu(c,0,c->r[29],c->r[0]); // 800FDB38
  if (crb(c,0)) { IRQCHK(c); goto L_800FDB10; } // 800FDB3C
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDB40
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDB44
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FDB48
  c->ctr=c->r[12]; // 800FDB4C
  if (true) { c->lr=0x800FDB54u; dispatch(c,c->ctr); } // 800FDB50
  c->r[6]=addc(c,~c->r[4],c->r[30],1); // 800FDB54
  c->r[5]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 800FDB58
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDB5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDB60
  c->r[12]=R32(c->r[12]+0x00000048u); // 800FDB64
  c->ctr=c->r[12]; // 800FDB68
  if (true) { c->lr=0x800FDB70u; dispatch(c,c->ctr); } // 800FDB6C
  goto L_800FDBB8; // 800FDB70
L_800FDB74:;
  c->r[29]=0u+0x00000000u; // 800FDB74
  goto L_800FDB98; // 800FDB78
L_800FDB7C:;
  c->r[3]=c->r[27]|c->r[27]; // 800FDB7C
  c->r[4]=c->r[29]|c->r[29]; // 800FDB80
  c->lr=0x800FDB88u; f_800FE160(c); // 800FDB84
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FDB88
  c->r[3]=c->r[27]+c->r[0]; // 800FDB8C
  c->lr=0x800FDB94u; f_800FE960(c); // 800FDB90
  c->r[29]=c->r[29]+0x00000001u; // 800FDB94
L_800FDB98:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800FDB98
  cmpu(c,0,c->r[29],c->r[0]); // 800FDB9C
  if (crb(c,0)) { IRQCHK(c); goto L_800FDB7C; } // 800FDBA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDBA4
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDBA8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FDBAC
  W32(c->r[3]+0x00000014u,c->r[4]); // 800FDBB0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FDBB4
L_800FDBB8:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 800FDBB8
  W8(c->r[3]+0x00000008u,c->r[28]); // 800FDBBC
L_800FDBC0:;
  c->r[3]=0u+0x00000000u; // 800FDBC0
L_800FDBC4:;
  c->r[11]=c->r[1]+0x00000030u; // 800FDBC4
  c->lr=0x800FDBCCu; f_800C2E98(c); // 800FDBC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDBCC
  c->lr=c->r[0]; // 800FDBD0
  c->r[1]=c->r[1]+0x00000030u; // 800FDBD4
  return; // 800FDBD8
}

// fn_800FDBE0
void f_800FDBE0(Ctx* __restrict c) {
  trace_call(0x800FDBE0u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 800FDBE0
  return; // 800FDBE4
}

// fn_800FDBF0
void f_800FDBF0(Ctx* __restrict c) {
  trace_call(0x800FDBF0u);
  c->r[4]=c->r[3]|c->r[3]; // 800FDBF0
  c->r[3]=R32(c->r[3]+0x00000010u); // 800FDBF4
  c->r[4]=R32(c->r[4]+0x00000014u); // 800FDBF8
  return; // 800FDBFC
}

// fn_800FDC00
void f_800FDC00(Ctx* __restrict c) {
  trace_call(0x800FDC00u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDC00
  c->r[0]=c->lr; // 800FDC04
  W32(c->r[1]+0x00000054u,c->r[0]); // 800FDC08
  c->r[11]=c->r[1]+0x00000050u; // 800FDC0C
  c->lr=0x800FDC14u; f_800C2E44(c); // 800FDC10
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FDC14
  c->r[31]=c->r[3]|c->r[3]; // 800FDC18
  c->r[25]=c->r[4]|c->r[4]; // 800FDC1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FDC20
  c->r[29]=c->r[3]+c->r[0]; // 800FDC24
  c->r[3]=c->r[29]|c->r[29]; // 800FDC28
  c->lr=0x800FDC30u; f_800FEA10(c); // 800FDC2C
  cmps(c,0,(int32_t)c->r[3],3); // 800FDC30
  if (!crb(c,2)) { goto L_800FDE68; } // 800FDC34
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDC38
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDC3C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FDC40
  c->ctr=c->r[12]; // 800FDC44
  if (true) { c->lr=0x800FDC4Cu; dispatch(c,c->ctr); } // 800FDC48
  cmps(c,0,(int32_t)c->r[3],0); // 800FDC4C
  if (crb(c,2)) { goto L_800FDC74; } // 800FDC50
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDC54
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDC58
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FDC5C
  c->ctr=c->r[12]; // 800FDC60
  if (true) { c->lr=0x800FDC68u; dispatch(c,c->ctr); } // 800FDC64
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800FDC68
  W32(c->r[1]+0x00000018u,c->r[3]); // 800FDC6C
  goto L_800FDC98; // 800FDC70
L_800FDC74:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDC74
  c->r[4]=c->r[1]+0x00000018u; // 800FDC78
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDC7C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800FDC80
  c->ctr=c->r[12]; // 800FDC84
  if (true) { c->lr=0x800FDC8Cu; dispatch(c,c->ctr); } // 800FDC88
  cmps(c,0,(int32_t)c->r[3],0); // 800FDC8C
  if (crb(c,2)) { goto L_800FDC98; } // 800FDC90
  goto L_800FDE70; // 800FDC94
L_800FDC98:;
  c->r[3]=c->r[29]|c->r[29]; // 800FDC98
  c->r[4]=c->r[1]+0x00000010u; // 800FDC9C
  c->lr=0x800FDCA4u; f_800FE930(c); // 800FDCA0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDCA4
  if (crb(c,2)) { goto L_800FDCB0; } // 800FDCA8
  goto L_800FDE70; // 800FDCAC
L_800FDCB0:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 800FDCB0
  c->r[3]=c->r[29]|c->r[29]; // 800FDCB4
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 800FDCB8
  c->r[7]=c->r[1]+0x00000008u; // 800FDCBC
  c->lr=0x800FDCC4u; f_800FE900(c); // 800FDCC0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDCC4
  if (crb(c,2)) { goto L_800FDCD0; } // 800FDCC8
  goto L_800FDE70; // 800FDCCC
L_800FDCD0:;
  c->r[0]=0u+0x43300000u; // 800FDCD0
  W32(c->r[1]+0x00000024u,c->r[25]); // 800FDCD4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDCD8
  W32(c->r[1]+0x00000020u,c->r[0]); // 800FDCDC
  {uint32_t ea=c->r[2]+0xFFFFA030u; c->f[2]=RF64(ea);} // 800FDCE0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800FDCE4
  {uint32_t ea=c->r[2]+0xFFFFA03Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDCE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800FDCEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDCF0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800FDCF4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FDCF8
  c->ctr=c->r[12]; // 800FDCFC
  if (true) { c->lr=0x800FDD04u; dispatch(c,c->ctr); } // 800FDD00
  c->r[6]=R32(c->r[1]+0x00000014u); // 800FDD04
  c->r[0]=0u+0xFFFFFFFFu; // 800FDD08
  c->r[5]=R32(c->r[1]+0x00000010u); // 800FDD0C
  c->r[7]=addc(c,c->r[6],c->r[0],0); // 800FDD10
  c->r[6]=addc(c,c->r[5],c->r[0],c->xer_ca); // 800FDD14
  c->r[0]=addc(c,~c->r[7],c->r[4],1); // 800FDD18
  c->r[0]=addc(c,~c->r[6],c->r[3],c->xer_ca); // 800FDD1C
  c->r[0]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 800FDD20
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 800FDD24
  if (crb(c,2)) { goto L_800FDD34; } // 800FDD28
  c->r[6]=c->r[3]|c->r[3]; // 800FDD2C
  goto L_800FDD38; // 800FDD30
L_800FDD34:;
  c->r[4]=c->r[7]|c->r[7]; // 800FDD34
L_800FDD38:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDD38
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800FDD3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDD40
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDD44
  c->r[26]=addc(c,~c->r[5],c->r[4],1); // 800FDD48
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FDD4C
  c->r[27]=addc(c,~c->r[0],c->r[6],c->xer_ca); // 800FDD50
  c->ctr=c->r[12]; // 800FDD54
  if (true) { c->lr=0x800FDD5Cu; dispatch(c,c->ctr); } // 800FDD58
  cmps(c,0,(int32_t)c->r[3],0); // 800FDD5C
  if (crb(c,2)) { goto L_800FDDF0; } // 800FDD60
  c->r[25]=0u+0x00000000u; // 800FDD64
  goto L_800FDDE0; // 800FDD68
L_800FDD6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800FDD6C
  c->r[4]=c->r[25]|c->r[25]; // 800FDD70
  c->lr=0x800FDD78u; f_800FE160(c); // 800FDD74
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FDD78
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDD7C
  c->r[28]=c->r[31]+c->r[0]; // 800FDD80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDD84
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FDD88
  c->ctr=c->r[12]; // 800FDD8C
  if (true) { c->lr=0x800FDD94u; dispatch(c,c->ctr); } // 800FDD90
  c->r[30]=c->r[3]|c->r[3]; // 800FDD94
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDD98
  c->r[29]=c->r[4]|c->r[4]; // 800FDD9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDDA0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FDDA4
  c->ctr=c->r[12]; // 800FDDA8
  if (true) { c->lr=0x800FDDB0u; dispatch(c,c->ctr); } // 800FDDAC
  c->r[7]=c->r[3]|c->r[3]; // 800FDDB0
  c->r[8]=c->r[4]|c->r[4]; // 800FDDB4
  c->r[3]=c->r[28]|c->r[28]; // 800FDDB8
  c->r[6]=c->r[26]|c->r[26]; // 800FDDBC
  c->r[5]=c->r[27]|c->r[27]; // 800FDDC0
  c->r[10]=c->r[29]|c->r[29]; // 800FDDC4
  c->r[9]=c->r[30]|c->r[30]; // 800FDDC8
  c->lr=0x800FDDD0u; f_800FE9A0(c); // 800FDDCC
  cmps(c,0,(int32_t)c->r[3],0); // 800FDDD0
  if (crb(c,2)) { goto L_800FDDDC; } // 800FDDD4
  goto L_800FDE70; // 800FDDD8
L_800FDDDC:;
  c->r[25]=c->r[25]+0x00000001u; // 800FDDDC
L_800FDDE0:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FDDE0
  cmpu(c,0,c->r[25],c->r[0]); // 800FDDE4
  if (crb(c,0)) { IRQCHK(c); goto L_800FDD6C; } // 800FDDE8
  goto L_800FDE6C; // 800FDDEC
L_800FDDF0:;
  c->r[25]=0u+0x00000000u; // 800FDDF0
  goto L_800FDE58; // 800FDDF4
L_800FDDF8:;
  c->r[3]=c->r[31]|c->r[31]; // 800FDDF8
  c->r[4]=c->r[25]|c->r[25]; // 800FDDFC
  c->lr=0x800FDE04u; f_800FE160(c); // 800FDE00
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FDE04
  c->r[3]=R32(c->r[31]+0x00000014u); // 800FDE08
  c->r[28]=c->r[31]+c->r[0]; // 800FDE0C
  c->r[29]=R32(c->r[1]+0x00000018u); // 800FDE10
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDE14
  c->r[30]=R32(c->r[1]+0x0000001Cu); // 800FDE18
  c->r[12]=R32(c->r[12]+0x00000024u); // 800FDE1C
  c->ctr=c->r[12]; // 800FDE20
  if (true) { c->lr=0x800FDE28u; dispatch(c,c->ctr); } // 800FDE24
  c->r[10]=addc(c,c->r[30],c->r[3],0); // 800FDE28
  c->r[3]=c->r[28]|c->r[28]; // 800FDE2C
  c->r[6]=c->r[26]|c->r[26]; // 800FDE30
  c->r[5]=c->r[27]|c->r[27]; // 800FDE34
  c->r[8]=c->r[30]|c->r[30]; // 800FDE38
  c->r[7]=c->r[29]|c->r[29]; // 800FDE3C
  c->r[9]=addc(c,c->r[29],0,c->xer_ca); // 800FDE40
  c->lr=0x800FDE48u; f_800FE9A0(c); // 800FDE44
  cmps(c,0,(int32_t)c->r[3],0); // 800FDE48
  if (crb(c,2)) { goto L_800FDE54; } // 800FDE4C
  goto L_800FDE70; // 800FDE50
L_800FDE54:;
  c->r[25]=c->r[25]+0x00000001u; // 800FDE54
L_800FDE58:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FDE58
  cmpu(c,0,c->r[25],c->r[0]); // 800FDE5C
  if (crb(c,0)) { IRQCHK(c); goto L_800FDDF8; } // 800FDE60
  goto L_800FDE6C; // 800FDE64
L_800FDE68:;
  W32(c->r[31]+0x00000018u,c->r[25]); // 800FDE68
L_800FDE6C:;
  c->r[3]=0u+0x00000000u; // 800FDE6C
L_800FDE70:;
  c->r[11]=c->r[1]+0x00000050u; // 800FDE70
  c->lr=0x800FDE78u; f_800C2E90(c); // 800FDE74
  c->r[0]=R32(c->r[1]+0x00000054u); // 800FDE78
  c->lr=c->r[0]; // 800FDE7C
  c->r[1]=c->r[1]+0x00000050u; // 800FDE80
  return; // 800FDE84
}

// fn_800FDE90
void f_800FDE90(Ctx* __restrict c) {
  trace_call(0x800FDE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDE90
  c->r[0]=c->lr; // 800FDE94
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDE98
  c->r[11]=c->r[1]+0x00000030u; // 800FDE9C
  c->lr=0x800FDEA4u; f_800C2E54(c); // 800FDEA0
  cmps(c,0,(int32_t)c->r[4],0); // 800FDEA4
  c->r[29]=c->r[3]|c->r[3]; // 800FDEA8
  c->r[30]=c->r[4]|c->r[4]; // 800FDEAC
  if (!crb(c,2)) { goto L_800FDEBC; } // 800FDEB0
  c->r[3]=0u+0x00000025u; // 800FDEB4
  goto L_800FDF9C; // 800FDEB8
L_800FDEBC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FDEBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FDEC0
  c->r[31]=c->r[3]+c->r[0]; // 800FDEC4
  c->r[3]=c->r[31]|c->r[31]; // 800FDEC8
  c->lr=0x800FDED0u; f_800FEA10(c); // 800FDECC
  cmps(c,0,(int32_t)c->r[3],3); // 800FDED0
  if (!crb(c,2)) { goto L_800FDF90; } // 800FDED4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FDED8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDEDC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FDEE0
  c->ctr=c->r[12]; // 800FDEE4
  if (true) { c->lr=0x800FDEECu; dispatch(c,c->ctr); } // 800FDEE8
  cmps(c,0,(int32_t)c->r[3],0); // 800FDEEC
  if (crb(c,2)) { goto L_800FDF14; } // 800FDEF0
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FDEF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDEF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FDEFC
  c->ctr=c->r[12]; // 800FDF00
  if (true) { c->lr=0x800FDF08u; dispatch(c,c->ctr); } // 800FDF04
  W32(c->r[1]+0x00000014u,c->r[4]); // 800FDF08
  W32(c->r[1]+0x00000010u,c->r[3]); // 800FDF0C
  goto L_800FDF38; // 800FDF10
L_800FDF14:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FDF14
  c->r[4]=c->r[1]+0x00000010u; // 800FDF18
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDF1C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800FDF20
  c->ctr=c->r[12]; // 800FDF24
  if (true) { c->lr=0x800FDF2Cu; dispatch(c,c->ctr); } // 800FDF28
  cmps(c,0,(int32_t)c->r[3],0); // 800FDF2C
  if (crb(c,2)) { goto L_800FDF38; } // 800FDF30
  goto L_800FDF9C; // 800FDF34
L_800FDF38:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800FDF38
  c->r[3]=c->r[31]|c->r[31]; // 800FDF3C
  c->r[6]=R32(c->r[1]+0x00000014u); // 800FDF40
  c->r[7]=c->r[1]+0x00000008u; // 800FDF44
  c->lr=0x800FDF4Cu; f_800FE900(c); // 800FDF48
  cmps(c,0,(int32_t)c->r[3],0); // 800FDF4C
  if (crb(c,2)) { goto L_800FDF58; } // 800FDF50
  goto L_800FDF9C; // 800FDF54
L_800FDF58:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 800FDF58
  c->r[5]=R32(c->r[1]+0x00000008u); // 800FDF5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FDF60
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800FDF64
  c->r[12]=R32(c->r[12]+0x00000030u); // 800FDF68
  c->ctr=c->r[12]; // 800FDF6C
  if (true) { c->lr=0x800FDF74u; dispatch(c,c->ctr); } // 800FDF70
  {uint32_t ea=c->r[2]+0xFFFFA03Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FDF74
  {uint32_t ea=c->r[2]+0xFFFFA020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FDF78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800FDF7C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FDF80
  c->lr=0x800FDF88u; f_800C2D24(c); // 800FDF84
  W32(c->r[30]+0x00000000u,c->r[3]); // 800FDF88
  goto L_800FDF98; // 800FDF8C
L_800FDF90:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 800FDF90
  W32(c->r[30]+0x00000000u,c->r[0]); // 800FDF94
L_800FDF98:;
  c->r[3]=0u+0x00000000u; // 800FDF98
L_800FDF9C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FDF9C
  c->lr=0x800FDFA4u; f_800C2EA0(c); // 800FDFA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDFA4
  c->lr=c->r[0]; // 800FDFA8
  c->r[1]=c->r[1]+0x00000030u; // 800FDFAC
  return; // 800FDFB0
}

// fn_800FDFC0
void f_800FDFC0(Ctx* __restrict c) {
  trace_call(0x800FDFC0u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 800FDFC0
  c->r[3]=0u+0x00000000u; // 800FDFC4
  cmpu(c,0,c->r[4],0x00000003u); // 800FDFC8
  if (crb(c,1)) return; // 800FDFCC
  c->r[0]=0u+0x00000001u; // 800FDFD0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800FDFD4
  c->r[0]=c->r[0]&0x0000000Du; cr0(c,c->r[0]); // 800FDFD8
  if (crb(c,2)) return; // 800FDFDC
  c->r[3]=0u+0x00000001u; // 800FDFE0
  return; // 800FDFE4
}

// fn_800FDFF0
void f_800FDFF0(Ctx* __restrict c) {
  trace_call(0x800FDFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDFF0
  c->r[0]=c->lr; // 800FDFF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FDFF8
  c->r[11]=c->r[1]+0x00000020u; // 800FDFFC
  c->lr=0x800FE004u; f_800C2E50(c); // 800FE000
  c->r[0]=0u+0x00000000u; // 800FE004
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FE008
  c->r[28]=c->r[3]|c->r[3]; // 800FE00C
  c->r[29]=c->r[4]|c->r[4]; // 800FE010
  c->r[30]=0u+0x00000000u; // 800FE014
  c->r[31]=0u+0x00000001u; // 800FE018
  goto L_800FE05C; // 800FE01C
L_800FE020:;
  c->r[3]=c->r[28]|c->r[28]; // 800FE020
  c->r[4]=c->r[30]|c->r[30]; // 800FE024
  c->lr=0x800FE02Cu; f_800FE160(c); // 800FE028
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FE02C
  c->r[4]=c->r[1]+0x00000008u; // 800FE030
  c->r[3]=c->r[28]+c->r[0]; // 800FE034
  c->lr=0x800FE03Cu; f_800FE9C0(c); // 800FE038
  cmps(c,0,(int32_t)c->r[3],0); // 800FE03C
  if (crb(c,2)) { goto L_800FE048; } // 800FE040
  goto L_800FE06C; // 800FE044
L_800FE048:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FE048
  cmps(c,0,(int32_t)c->r[0],0); // 800FE04C
  if (crb(c,2)) { goto L_800FE058; } // 800FE050
  W8(c->r[29]+0x00000000u,c->r[31]); // 800FE054
L_800FE058:;
  c->r[30]=c->r[30]+0x00000001u; // 800FE058
L_800FE05C:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800FE05C
  cmpu(c,0,c->r[30],c->r[0]); // 800FE060
  if (crb(c,0)) { IRQCHK(c); goto L_800FE020; } // 800FE064
  c->r[3]=0u+0x00000000u; // 800FE068
L_800FE06C:;
  c->r[11]=c->r[1]+0x00000020u; // 800FE06C
  c->lr=0x800FE074u; f_800C2E9C(c); // 800FE070
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE074
  c->lr=c->r[0]; // 800FE078
  c->r[1]=c->r[1]+0x00000020u; // 800FE07C
  return; // 800FE080
}

// fn_800FE090
void f_800FE090(Ctx* __restrict c) {
  trace_call(0x800FE090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE090
  c->r[0]=c->lr; // 800FE094
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE09C
  c->r[31]=c->r[3]|c->r[3]; // 800FE0A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FE0A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE0A8
  c->r[3]=c->r[3]+c->r[0]; // 800FE0AC
  c->lr=0x800FE0B4u; f_800FEA30(c); // 800FE0B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE0B4
  if (crb(c,2)) { goto L_800FE0D4; } // 800FE0B8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FE0BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE0C0
  c->r[3]=c->r[31]+c->r[0]; // 800FE0C4
  c->lr=0x800FE0CCu; f_800FEA30(c); // 800FE0C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FE0CC
  goto L_800FE0D8; // 800FE0D0
L_800FE0D4:;
  c->r[3]=0u+0x00000000u; // 800FE0D4
L_800FE0D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE0D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE0DC
  c->lr=c->r[0]; // 800FE0E0
  c->r[1]=c->r[1]+0x00000010u; // 800FE0E4
  return; // 800FE0E8
}

// fn_800FE0F0
void f_800FE0F0(Ctx* __restrict c) {
  trace_call(0x800FE0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE0F0
  c->r[0]=c->lr; // 800FE0F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE0F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE0FC
  c->r[31]=c->r[3]|c->r[3]; // 800FE100
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800FE104
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FE108
  c->lr=0x800FE110u; f_800FE160(c); // 800FE10C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FE110
  c->r[3]=c->r[31]+c->r[0]; // 800FE114
  c->lr=0x800FE11Cu; f_800FEA30(c); // 800FE118
  cmps(c,0,(int32_t)c->r[3],0); // 800FE11C
  if (crb(c,2)) { goto L_800FE148; } // 800FE120
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800FE124
  c->r[3]=c->r[31]|c->r[31]; // 800FE128
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800FE12C
  c->lr=0x800FE134u; f_800FE160(c); // 800FE130
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800FE134
  c->r[3]=c->r[31]+c->r[0]; // 800FE138
  c->lr=0x800FE140u; f_800FEA30(c); // 800FE13C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FE140
  goto L_800FE14C; // 800FE144
L_800FE148:;
  c->r[3]=0u+0x00000000u; // 800FE148
L_800FE14C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE14C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE150
  c->lr=c->r[0]; // 800FE154
  c->r[1]=c->r[1]+0x00000010u; // 800FE158
  return; // 800FE15C
}

// fn_800FE160
void f_800FE160(Ctx* __restrict c) {
  trace_call(0x800FE160u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FE160
  c->r[3]=c->r[0]+c->r[4]; cr0(c,c->r[3]); // 800FE164
  if (!crb(c,0)) { goto L_800FE188; } // 800FE168
  c->r[0]=0u-c->r[3]; // 800FE16C
  c->r[0]=sraw(c,c->r[0],1); // 800FE170
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 800FE174
  c->r[0]=c->r[4]+0x00000001u; // 800FE178
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE17C
  c->r[3]=c->r[3]+c->r[0]; // 800FE180
  return; // 800FE184
L_800FE188:;
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800FE188
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800FE18C
  c->r[0]=c->r[0]^c->r[4]; // 800FE190
  c->r[3]=c->r[0]-c->r[4]; // 800FE194
  return; // 800FE198
}

// fn_800FE1A0
void f_800FE1A0(Ctx* __restrict c) {
  trace_call(0x800FE1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE1A0
  c->r[0]=c->lr; // 800FE1A4
  c->r[4]=0u+0x80390000u; // 800FE1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE1AC
  c->r[4]=c->r[4]+0xFFFFE108u; // 800FE1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE1B4
  c->r[31]=0u+0x00000000u; // 800FE1B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE1BC
  c->r[30]=c->r[3]|c->r[3]; // 800FE1C0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FE1C4
  W32(c->r[3]+0x00000008u,c->r[31]); // 800FE1C8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800FE1CC
  c->r[3]=c->r[3]+0x00000010u; // 800FE1D0
  c->lr=0x800FE1D8u; f_800FC5A0(c); // 800FE1D4
  c->r[3]=c->r[30]+0x00000028u; // 800FE1D8
  c->lr=0x800FE1E0u; f_800FD180(c); // 800FE1DC
  c->r[3]=c->r[30]+0x00000048u; // 800FE1E0
  c->lr=0x800FE1E8u; f_800FC850(c); // 800FE1E4
  W32(c->r[30]+0x00000098u,c->r[31]); // 800FE1E8
  c->r[3]=c->r[30]|c->r[30]; // 800FE1EC
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 800FE1F0
  W32(c->r[30]+0x000000A0u,c->r[31]); // 800FE1F4
  W32(c->r[30]+0x000000A4u,c->r[31]); // 800FE1F8
  W32(c->r[30]+0x000000A8u,c->r[31]); // 800FE1FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE200
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE204
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE208
  c->lr=c->r[0]; // 800FE20C
  c->r[1]=c->r[1]+0x00000010u; // 800FE210
  return; // 800FE214
}

// fn_800FE220
void f_800FE220(Ctx* __restrict c) {
  trace_call(0x800FE220u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE220
  c->r[0]=c->lr; // 800FE224
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE228
  c->r[11]=c->r[1]+0x00000020u; // 800FE22C
  c->lr=0x800FE234u; f_800C2E54(c); // 800FE230
  c->r[29]=c->r[3]|c->r[3]; // 800FE234
  c->r[0]=c->r[4]|c->r[4]; // 800FE238
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FE23C
  c->r[4]=0u+0x80390000u; // 800FE240
  c->r[30]=c->r[5]|c->r[5]; // 800FE244
  c->r[31]=c->r[6]|c->r[6]; // 800FE248
  c->r[3]=c->r[0]|c->r[0]; // 800FE24C
  c->r[4]=c->r[4]+0xFFFFE0B0u; // 800FE250
  c->r[5]=c->r[29]+0x0000000Cu; // 800FE254
  c->lr=0x800FE25Cu; f_8019ECB0(c); // 800FE258
  cmps(c,0,(int32_t)c->r[3],0); // 800FE25C
  if (crb(c,2)) { goto L_800FE268; } // 800FE260
  goto L_800FE2EC; // 800FE264
L_800FE268:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FE268
  if (crb(c,2)) { goto L_800FE288; } // 800FE26C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800FE270
  c->r[3]=c->r[30]|c->r[30]; // 800FE274
  c->lr=0x800FE27Cu; f_80186F00(c); // 800FE278
  cmps(c,0,(int32_t)c->r[3],0); // 800FE27C
  if (crb(c,2)) { goto L_800FE288; } // 800FE280
  goto L_800FE2EC; // 800FE284
L_800FE288:;
  c->r[4]=c->r[31]|c->r[31]; // 800FE288
  c->r[3]=c->r[29]+0x00000010u; // 800FE28C
  c->lr=0x800FE294u; f_800FC5D0(c); // 800FE290
  cmps(c,0,(int32_t)c->r[3],0); // 800FE294
  if (crb(c,2)) { goto L_800FE2A0; } // 800FE298
  goto L_800FE2EC; // 800FE29C
L_800FE2A0:;
  c->r[4]=c->r[29]|c->r[29]; // 800FE2A0
  c->r[3]=c->r[29]+0x00000048u; // 800FE2A4
  c->lr=0x800FE2ACu; f_800FC8B0(c); // 800FE2A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE2AC
  if (crb(c,2)) { goto L_800FE2B8; } // 800FE2B0
  goto L_800FE2EC; // 800FE2B4
L_800FE2B8:;
  c->r[3]=c->r[29]+0x00000028u; // 800FE2B8
  c->r[4]=c->r[29]+0x00000048u; // 800FE2BC
  c->lr=0x800FE2C4u; f_800FD1C0(c); // 800FE2C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE2C4
  if (crb(c,2)) { goto L_800FE2D0; } // 800FE2C8
  goto L_800FE2EC; // 800FE2CC
L_800FE2D0:;
  c->r[0]=0u+0x00000000u; // 800FE2D0
  W32(c->r[29]+0x00000098u,c->r[0]); // 800FE2D4
  c->r[3]=0u+0x00000000u; // 800FE2D8
  W32(c->r[29]+0x0000009Cu,c->r[0]); // 800FE2DC
  W32(c->r[29]+0x000000A0u,c->r[0]); // 800FE2E0
  W32(c->r[29]+0x000000A4u,c->r[0]); // 800FE2E4
  W32(c->r[29]+0x000000A8u,c->r[0]); // 800FE2E8
L_800FE2EC:;
  c->r[11]=c->r[1]+0x00000020u; // 800FE2EC
  c->lr=0x800FE2F4u; f_800C2EA0(c); // 800FE2F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE2F4
  c->lr=c->r[0]; // 800FE2F8
  c->r[1]=c->r[1]+0x00000020u; // 800FE2FC
  return; // 800FE300
}

// fn_800FE310
void f_800FE310(Ctx* __restrict c) {
  trace_call(0x800FE310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE310
  c->r[0]=c->lr; // 800FE314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE31C
  c->r[31]=c->r[3]|c->r[3]; // 800FE320
  c->r[3]=c->r[3]+0x00000010u; // 800FE324
  c->lr=0x800FE32Cu; f_800FC650(c); // 800FE328
  cmps(c,0,(int32_t)c->r[3],0); // 800FE32C
  if (crb(c,2)) { goto L_800FE338; } // 800FE330
  goto L_800FE384; // 800FE334
L_800FE338:;
  c->r[3]=c->r[31]+0x00000028u; // 800FE338
  c->lr=0x800FE340u; f_800FD210(c); // 800FE33C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE340
  if (crb(c,2)) { goto L_800FE34C; } // 800FE344
  goto L_800FE384; // 800FE348
L_800FE34C:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800FE34C
  c->lr=0x800FE354u; f_80186BF0(c); // 800FE350
  cmps(c,0,(int32_t)c->r[3],0); // 800FE354
  if (crb(c,2)) { goto L_800FE360; } // 800FE358
  goto L_800FE384; // 800FE35C
L_800FE360:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FE360
  c->r[5]=0u+0x80390000u; // 800FE364
  c->r[4]=c->r[31]|c->r[31]; // 800FE368
  c->r[6]=0u+0x00000422u; // 800FE36C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FE370
  c->r[5]=c->r[5]+0xFFFFE098u; // 800FE374
  c->r[7]=0u+0x00000000u; // 800FE378
  c->lr=0x800FE380u; f_8018F5F0(c); // 800FE37C
  c->r[3]=0u+0x00000000u; // 800FE380
L_800FE384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE388
  c->lr=c->r[0]; // 800FE38C
  c->r[1]=c->r[1]+0x00000010u; // 800FE390
  return; // 800FE394
}

// fn_800FE3A0
void f_800FE3A0(Ctx* __restrict c) {
  trace_call(0x800FE3A0u);
  c->r[0]=0u+0x00000002u; // 800FE3A0
  W32(c->r[3]+0x00000038u,c->r[0]); // 800FE3A4
  c->r[3]=0u+0x00000000u; // 800FE3A8
  return; // 800FE3AC
}

// fn_800FE3B0
void f_800FE3B0(Ctx* __restrict c) {
  trace_call(0x800FE3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE3B0
  c->r[0]=c->lr; // 800FE3B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE3B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE3BC
  c->r[31]=c->r[3]|c->r[3]; // 800FE3C0
  c->lr=0x800FE3C8u; f_800FE6A0(c); // 800FE3C4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE3C8
  if (crb(c,2)) { goto L_800FE3D4; } // 800FE3CC
  goto L_800FE3E0; // 800FE3D0
L_800FE3D4:;
  c->r[0]=0u+0x00000001u; // 800FE3D4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FE3D8
  c->r[3]=0u+0x00000000u; // 800FE3DC
L_800FE3E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE3E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE3E4
  c->lr=c->r[0]; // 800FE3E8
  c->r[1]=c->r[1]+0x00000010u; // 800FE3EC
  return; // 800FE3F0
}

// fn_800FE400
void f_800FE400(Ctx* __restrict c) {
  trace_call(0x800FE400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE400
  c->r[0]=c->lr; // 800FE404
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE408
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE40C
  c->r[31]=c->r[3]|c->r[3]; // 800FE410
  c->r[3]=c->r[3]+0x00000028u; // 800FE414
  c->lr=0x800FE41Cu; f_800FDFC0(c); // 800FE418
  cmps(c,0,(int32_t)c->r[3],0); // 800FE41C
  if (!crb(c,2)) { goto L_800FE42C; } // 800FE420
  c->r[3]=0u+0x00000000u; // 800FE424
  goto L_800FE4C0; // 800FE428
L_800FE42C:;
  c->r[12]=R32(c->r[31]+0x00000048u); // 800FE42C
  c->r[3]=c->r[31]+0x00000048u; // 800FE430
  c->r[4]=c->r[1]+0x00000008u; // 800FE434
  c->r[12]=R32(c->r[12]+0x00000058u); // 800FE438
  c->ctr=c->r[12]; // 800FE43C
  if (true) { c->lr=0x800FE444u; dispatch(c,c->ctr); } // 800FE440
  cmps(c,0,(int32_t)c->r[3],0); // 800FE444
  if (crb(c,2)) { goto L_800FE450; } // 800FE448
  goto L_800FE4C0; // 800FE44C
L_800FE450:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FE450
  c->r[3]=c->r[31]+0x00000048u; // 800FE454
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FE458
  W32(c->r[31]+0x00000064u,c->r[4]); // 800FE45C
  W32(c->r[31]+0x00000060u,c->r[0]); // 800FE460
  c->lr=0x800FE468u; f_800FCA70(c); // 800FE464
  cmps(c,0,(int32_t)c->r[3],0); // 800FE468
  if (crb(c,2)) { goto L_800FE474; } // 800FE46C
  goto L_800FE4C0; // 800FE470
L_800FE474:;
  c->r[3]=c->r[31]+0x00000028u; // 800FE474
  c->lr=0x800FE47Cu; f_800FD620(c); // 800FE478
  cmps(c,0,(int32_t)c->r[3],0); // 800FE47C
  if (crb(c,2)) { goto L_800FE488; } // 800FE480
  goto L_800FE4C0; // 800FE484
L_800FE488:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 800FE488
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE48C
  c->r[3]=c->r[31]+c->r[0]; // 800FE490
  c->r[3]=c->r[3]+0x00000028u; // 800FE494
  c->lr=0x800FE49Cu; f_800FEA10(c); // 800FE498
  c->r[0]=cntlz(c->r[3]); // 800FE49C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800FE4A0
  if (crb(c,2)) { goto L_800FE4BC; } // 800FE4A4
  c->r[3]=c->r[31]|c->r[31]; // 800FE4A8
  c->lr=0x800FE4B0u; f_800FE3B0(c); // 800FE4AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FE4B0
  if (crb(c,2)) { goto L_800FE4BC; } // 800FE4B4
  goto L_800FE4C0; // 800FE4B8
L_800FE4BC:;
  c->r[3]=0u+0x00000000u; // 800FE4BC
L_800FE4C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE4C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE4C4
  c->lr=c->r[0]; // 800FE4C8
  c->r[1]=c->r[1]+0x00000020u; // 800FE4CC
  return; // 800FE4D0
}

// fn_800FE4E0
void f_800FE4E0(Ctx* __restrict c) {
  trace_call(0x800FE4E0u);
  c->r[0]=R32(c->r[3]+0x00000098u); // 800FE4E0
  cmps(c,0,(int32_t)c->r[0],0); // 800FE4E4
  if (crb(c,2)) { goto L_800FE4F8; } // 800FE4E8
  c->r[7]=R32(c->r[3]+0x000000A0u); // 800FE4EC
  c->r[3]=c->r[0]|c->r[0]; // 800FE4F0
  f_800FFD00(c); return; // 800FE4F4
L_800FE4F8:;
  c->r[4]=c->r[6]|c->r[6]; // 800FE4F8
  c->r[3]=c->r[5]|c->r[5]; // 800FE4FC
  return; // 800FE500
}

// fn_800FE510
void f_800FE510(Ctx* __restrict c) {
  trace_call(0x800FE510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE510
  c->r[0]=c->lr; // 800FE514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE51C
  c->r[31]=0u+0x00000000u; // 800FE520
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE524
  c->r[30]=c->r[3]|c->r[3]; // 800FE528
  c->r[0]=R32(c->r[3]+0x00000030u); // 800FE52C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FE530
  c->r[3]=c->r[3]+c->r[0]; // 800FE534
  c->r[3]=c->r[3]+0x00000028u; // 800FE538
  c->lr=0x800FE540u; f_800FEA10(c); // 800FE53C
  c->r[0]=cntlz(c->r[3]); // 800FE540
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800FE544
  if (crb(c,2)) { goto L_800FE55C; } // 800FE548
  c->r[0]=R32(c->r[30]+0x00000020u); // 800FE54C
  cmps(c,0,(int32_t)c->r[0],0); // 800FE550
  if (!crb(c,2)) { goto L_800FE55C; } // 800FE554
  c->r[31]=0u+0x00000001u; // 800FE558
L_800FE55C:;
  c->r[3]=c->r[31]|c->r[31]; // 800FE55C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE560
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE564
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE568
  c->lr=c->r[0]; // 800FE56C
  c->r[1]=c->r[1]+0x00000010u; // 800FE570
  return; // 800FE574
}

// fn_800FE580
void f_800FE580(Ctx* __restrict c) {
  trace_call(0x800FE580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE580
  c->r[0]=c->lr; // 800FE584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE58C
  c->r[31]=c->r[4]|c->r[4]; // 800FE590
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE594
  c->r[30]=c->r[3]|c->r[3]; // 800FE598
  c->lr=0x800FE5A0u; f_800FB210(c); // 800FE59C
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FE5A0
  c->r[4]=c->r[31]|c->r[31]; // 800FE5A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FE5A8
  c->ctr=c->r[12]; // 800FE5AC
  if (true) { c->lr=0x800FE5B4u; dispatch(c,c->ctr); } // 800FE5B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE5B4
  if (!crb(c,2)) { goto L_800FE5C4; } // 800FE5B8
  c->r[3]=0u+0x00000025u; // 800FE5BC
  goto L_800FE5D4; // 800FE5C0
L_800FE5C4:;
  c->r[4]=c->r[3]|c->r[3]; // 800FE5C4
  c->r[3]=c->r[30]+0x00000010u; // 800FE5C8
  c->lr=0x800FE5D0u; f_800FC6A0(c); // 800FE5CC
  c->r[3]=0u+0x00000000u; // 800FE5D0
L_800FE5D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE5D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE5D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE5DC
  c->lr=c->r[0]; // 800FE5E0
  c->r[1]=c->r[1]+0x00000010u; // 800FE5E4
  return; // 800FE5E8
}

// fn_800FE5F0
void f_800FE5F0(Ctx* __restrict c) {
  trace_call(0x800FE5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE5F0
  c->r[0]=c->lr; // 800FE5F4
  c->r[3]=c->r[3]+0x00000010u; // 800FE5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE5FC
  c->lr=0x800FE604u; f_800FC790(c); // 800FE600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE604
  c->r[3]=0u+0x00000000u; // 800FE608
  c->lr=c->r[0]; // 800FE60C
  c->r[1]=c->r[1]+0x00000010u; // 800FE610
  return; // 800FE614
}

// fn_800FE620
void f_800FE620(Ctx* __restrict c) {
  trace_call(0x800FE620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE620
  c->r[0]=c->lr; // 800FE624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE62C
  c->r[31]=c->r[3]|c->r[3]; // 800FE630
  c->r[3]=c->r[3]+0x00000010u; // 800FE634
  c->lr=0x800FE63Cu; f_800FC790(c); // 800FE638
  goto L_800FE644; // 800FE63C
  goto L_800FE680; // 800FE640
L_800FE644:;
  c->r[3]=c->r[31]+0x00000028u; // 800FE644
  c->lr=0x800FE64Cu; f_800FDA10(c); // 800FE648
  cmps(c,0,(int32_t)c->r[3],0); // 800FE64C
  if (crb(c,2)) { goto L_800FE658; } // 800FE650
  goto L_800FE680; // 800FE654
L_800FE658:;
  c->r[3]=c->r[31]+0x00000048u; // 800FE658
  c->lr=0x800FE660u; f_800FCC90(c); // 800FE65C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800FE660
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE664
  c->lr=0x800FE66Cu; f_80186C30(c); // 800FE668
  cmps(c,0,(int32_t)c->r[3],0); // 800FE66C
  c->r[0]=0u+0x00000000u; // 800FE670
  if (crb(c,2)) { goto L_800FE67C; } // 800FE674
  c->r[0]=c->r[3]|c->r[3]; // 800FE678
L_800FE67C:;
  c->r[3]=c->r[0]|c->r[0]; // 800FE67C
L_800FE680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE680
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE684
  c->lr=c->r[0]; // 800FE688
  c->r[1]=c->r[1]+0x00000010u; // 800FE68C
  return; // 800FE690
}

// fn_800FE6A0
void f_800FE6A0(Ctx* __restrict c) {
  trace_call(0x800FE6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE6A0
  c->r[0]=c->lr; // 800FE6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE6AC
  c->r[31]=c->r[3]|c->r[3]; // 800FE6B0
  c->r[3]=c->r[3]+0x00000010u; // 800FE6B4
  c->lr=0x800FE6BCu; f_800FC790(c); // 800FE6B8
  goto L_800FE6C4; // 800FE6BC
  goto L_800FE700; // 800FE6C0
L_800FE6C4:;
  c->r[3]=c->r[31]+0x00000028u; // 800FE6C4
  c->lr=0x800FE6CCu; f_800FD5B0(c); // 800FE6C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE6CC
  if (crb(c,2)) { goto L_800FE6D8; } // 800FE6D0
  goto L_800FE700; // 800FE6D4
L_800FE6D8:;
  c->r[3]=c->r[31]+0x00000048u; // 800FE6D8
  c->lr=0x800FE6E0u; f_800FCC90(c); // 800FE6DC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800FE6E0
  {uint32_t ea=c->r[2]+0xFFFFA01Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE6E4
  c->lr=0x800FE6ECu; f_80186C30(c); // 800FE6E8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE6EC
  c->r[0]=0u+0x00000000u; // 800FE6F0
  if (crb(c,2)) { goto L_800FE6FC; } // 800FE6F4
  c->r[0]=c->r[3]|c->r[3]; // 800FE6F8
L_800FE6FC:;
  c->r[3]=c->r[0]|c->r[0]; // 800FE6FC
L_800FE700:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE700
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE704
  c->lr=c->r[0]; // 800FE708
  c->r[1]=c->r[1]+0x00000010u; // 800FE70C
  return; // 800FE710
}

// fn_800FE720
void f_800FE720(Ctx* __restrict c) {
  trace_call(0x800FE720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE720
  c->r[0]=c->lr; // 800FE724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE728
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE72C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE730
  if (crb(c,2)) { goto L_800FE75C; } // 800FE734
  cmps(c,0,(int32_t)c->r[4],0); // 800FE738
  if (crb(c,2)) { goto L_800FE748; } // 800FE73C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800FE740
  goto L_800FE74C; // 800FE744
L_800FE748:;
  c->r[4]=0u+0x00000000u; // 800FE748
L_800FE74C:;
  c->lr=0x800FE750u; f_800FA3B0(c); // 800FE74C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE750
  if (crb(c,2)) { goto L_800FE75C; } // 800FE754
  goto L_800FE760; // 800FE758
L_800FE75C:;
  c->r[3]=0u+0x00000000u; // 800FE75C
L_800FE760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE760
  c->lr=c->r[0]; // 800FE764
  c->r[1]=c->r[1]+0x00000010u; // 800FE768
  return; // 800FE76C
}

// fn_800FE770
void f_800FE770(Ctx* __restrict c) {
  trace_call(0x800FE770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE770
  c->r[0]=c->lr; // 800FE774
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE778
  c->r[11]=c->r[1]+0x00000020u; // 800FE77C
  c->lr=0x800FE784u; f_800C2E54(c); // 800FE780
  cmps(c,0,(int32_t)c->r[7],0); // 800FE784
  c->r[29]=c->r[3]|c->r[3]; // 800FE788
  c->r[30]=c->r[6]|c->r[6]; // 800FE78C
  if (!crb(c,2)) { goto L_800FE79C; } // 800FE790
  c->r[3]=0u+0x00000021u; // 800FE794
  goto L_800FE840; // 800FE798
L_800FE79C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800FE79C
  if (crb(c,2)) { goto L_800FE7AC; } // 800FE7A0
  c->r[31]=R32(c->r[5]+0x00000000u); // 800FE7A4
  goto L_800FE7B0; // 800FE7A8
L_800FE7AC:;
  c->r[31]=0u+0x00000000u; // 800FE7AC
L_800FE7B0:;
  c->r[12]=R32(c->r[7]+0x00000000u); // 800FE7B0
  c->r[3]=c->r[7]|c->r[7]; // 800FE7B4
  c->r[5]=c->r[29]|c->r[29]; // 800FE7B8
  c->r[6]=c->r[31]|c->r[31]; // 800FE7BC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FE7C0
  c->ctr=c->r[12]; // 800FE7C4
  if (true) { c->lr=0x800FE7CCu; dispatch(c,c->ctr); } // 800FE7C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE7CC
  if (crb(c,2)) { goto L_800FE7D8; } // 800FE7D0
  goto L_800FE840; // 800FE7D4
L_800FE7D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE7D8
  if (crb(c,2)) { goto L_800FE81C; } // 800FE7DC
  c->r[4]=R32(c->r[30]+0x00000000u); // 800FE7E0
  c->r[3]=0u+0x00000001u; // 800FE7E4
  c->r[0]=R32(c->r[2]+0xFFFF9FE8u); // 800FE7E8
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800FE7EC
  if (!crb(c,2)) { goto L_800FE804; } // 800FE7F0
  c->r[0]=R32(c->r[2]+0xFFFF9FECu); // 800FE7F4
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800FE7F8
  if (!crb(c,2)) { goto L_800FE804; } // 800FE7FC
  c->r[3]=0u+0x00000000u; // 800FE800
L_800FE804:;
  cmps(c,0,(int32_t)c->r[3],0); // 800FE804
  if (crb(c,2)) { goto L_800FE81C; } // 800FE808
  c->r[5]=R32(c->r[30]+0x00000008u); // 800FE80C
  c->r[3]=c->r[31]|c->r[31]; // 800FE810
  c->r[6]=R32(c->r[30]+0x0000000Cu); // 800FE814
  c->lr=0x800FE81Cu; f_800FA930(c); // 800FE818
L_800FE81C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800FE81C
  c->r[5]=R32(c->r[30]+0x00000008u); // 800FE820
  c->r[6]=R32(c->r[30]+0x0000000Cu); // 800FE824
  c->lr=0x800FE82Cu; f_800FA1A0(c); // 800FE828
  cmps(c,0,(int32_t)c->r[3],0); // 800FE82C
  c->r[0]=0u+0x00000000u; // 800FE830
  if (crb(c,2)) { goto L_800FE83C; } // 800FE834
  c->r[0]=c->r[3]|c->r[3]; // 800FE838
L_800FE83C:;
  c->r[3]=c->r[0]|c->r[0]; // 800FE83C
L_800FE840:;
  c->r[11]=c->r[1]+0x00000020u; // 800FE840
  c->lr=0x800FE848u; f_800C2EA0(c); // 800FE844
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE848
  c->lr=c->r[0]; // 800FE84C
  c->r[1]=c->r[1]+0x00000020u; // 800FE850
  return; // 800FE854
}

// fn_800FE860
void f_800FE860(Ctx* __restrict c) {
  trace_call(0x800FE860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE860
  c->r[0]=c->lr; // 800FE864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE868
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE86C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE870
  if (crb(c,2)) { goto L_800FE888; } // 800FE874
  c->lr=0x800FE87Cu; f_800FA800(c); // 800FE878
  cmps(c,0,(int32_t)c->r[3],0); // 800FE87C
  if (crb(c,2)) { goto L_800FE888; } // 800FE880
  goto L_800FE88C; // 800FE884
L_800FE888:;
  c->r[3]=0u+0x00000000u; // 800FE888
L_800FE88C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE88C
  c->lr=c->r[0]; // 800FE890
  c->r[1]=c->r[1]+0x00000010u; // 800FE894
  return; // 800FE898
}

// fn_800FE8A0
void f_800FE8A0(Ctx* __restrict c) {
  trace_call(0x800FE8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE8A0
  c->r[0]=c->lr; // 800FE8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE8A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE8AC
  c->r[31]=c->r[3]|c->r[3]; // 800FE8B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FE8B4
  cmps(c,0,(int32_t)c->r[0],0); // 800FE8B8
  if (crb(c,2)) { goto L_800FE8E0; } // 800FE8BC
  c->r[3]=c->r[0]|c->r[0]; // 800FE8C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FE8C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FE8C8
  c->ctr=c->r[12]; // 800FE8CC
  if (true) { c->lr=0x800FE8D4u; dispatch(c,c->ctr); } // 800FE8D0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE8D4
  if (crb(c,2)) { goto L_800FE8E0; } // 800FE8D8
  goto L_800FE8EC; // 800FE8DC
L_800FE8E0:;
  c->r[0]=0u+0x00000000u; // 800FE8E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800FE8E4
  c->r[3]=0u+0x00000000u; // 800FE8E8
L_800FE8EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE8EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE8F0
  c->lr=c->r[0]; // 800FE8F4
  c->r[1]=c->r[1]+0x00000010u; // 800FE8F8
  return; // 800FE8FC
}

// fn_800FE900
void f_800FE900(Ctx* __restrict c) {
  trace_call(0x800FE900u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE900
  cmps(c,0,(int32_t)c->r[3],0); // 800FE904
  if (crb(c,2)) { goto L_800FE910; } // 800FE908
  f_800F9C10(c); return; // 800FE90C
L_800FE910:;
  c->r[0]=0u+0x00000000u; // 800FE910
  W32(c->r[7]+0x00000004u,c->r[0]); // 800FE914
  c->r[3]=0u+0x00000000u; // 800FE918
  W32(c->r[7]+0x00000000u,c->r[0]); // 800FE91C
  return; // 800FE920
}

// fn_800FE930
void f_800FE930(Ctx* __restrict c) {
  trace_call(0x800FE930u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE930
  cmps(c,0,(int32_t)c->r[3],0); // 800FE934
  if (crb(c,2)) { goto L_800FE940; } // 800FE938
  f_800F9CA0(c); return; // 800FE93C
L_800FE940:;
  c->r[0]=0u+0x00000000u; // 800FE940
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FE944
  c->r[3]=0u+0x00000000u; // 800FE948
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FE94C
  return; // 800FE950
}

// fn_800FE960
void f_800FE960(Ctx* __restrict c) {
  trace_call(0x800FE960u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE960
  cmps(c,0,(int32_t)c->r[3],0); // 800FE964
  if (crb(c,2)) { goto L_800FE970; } // 800FE968
  f_800F9D30(c); return; // 800FE96C
L_800FE970:;
  c->r[3]=0u+0x00000000u; // 800FE970
  return; // 800FE974
}

// fn_800FE980
void f_800FE980(Ctx* __restrict c) {
  trace_call(0x800FE980u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE980
  cmps(c,0,(int32_t)c->r[3],0); // 800FE984
  if (crb(c,2)) { goto L_800FE990; } // 800FE988
  f_800F9D70(c); return; // 800FE98C
L_800FE990:;
  c->r[3]=0u+0x00000000u; // 800FE990
  return; // 800FE994
}

// fn_800FE9A0
void f_800FE9A0(Ctx* __restrict c) {
  trace_call(0x800FE9A0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE9A0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE9A4
  if (crb(c,2)) { goto L_800FE9B0; } // 800FE9A8
  f_800F9E30(c); return; // 800FE9AC
L_800FE9B0:;
  c->r[3]=0u+0x00000000u; // 800FE9B0
  return; // 800FE9B4
}

// fn_800FE9C0
void f_800FE9C0(Ctx* __restrict c) {
  trace_call(0x800FE9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE9C0
  c->r[0]=c->lr; // 800FE9C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FE9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE9CC
  c->r[0]=0u+0x00000000u; // 800FE9D0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE9D4
  W8(c->r[4]+0x00000000u,c->r[0]); // 800FE9D8
  if (crb(c,2)) { goto L_800FE9F0; } // 800FE9DC
  c->lr=0x800FE9E4u; f_800F9F60(c); // 800FE9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE9E4
  if (crb(c,2)) { goto L_800FE9F0; } // 800FE9E8
  goto L_800FE9F4; // 800FE9EC
L_800FE9F0:;
  c->r[3]=0u+0x00000000u; // 800FE9F0
L_800FE9F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE9F4
  c->lr=c->r[0]; // 800FE9F8
  c->r[1]=c->r[1]+0x00000010u; // 800FE9FC
  return; // 800FEA00
}

// fn_800FEA10
void f_800FEA10(Ctx* __restrict c) {
  trace_call(0x800FEA10u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FEA10
  cmps(c,0,(int32_t)c->r[3],0); // 800FEA14
  if (crb(c,2)) { goto L_800FEA24; } // 800FEA18
  c->r[3]=R32(c->r[3]+0x00000028u); // 800FEA1C
  return; // 800FEA20
L_800FEA24:;
  c->r[3]=0u+0x00000000u; // 800FEA24
  return; // 800FEA28
}

// fn_800FEA30
void f_800FEA30(Ctx* __restrict c) {
  trace_call(0x800FEA30u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800FEA30
  cmps(c,0,(int32_t)c->r[3],0); // 800FEA34
  if (crb(c,2)) { goto L_800FEA44; } // 800FEA38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800FEA3C
  return; // 800FEA40
L_800FEA44:;
  c->r[3]=0u+0x00000000u; // 800FEA44
  return; // 800FEA48
}

// fn_800FEA50
void f_800FEA50(Ctx* __restrict c) {
  trace_call(0x800FEA50u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 800FEA50
  cmps(c,0,(int32_t)c->r[4],0); // 800FEA54
  if (crb(c,2)) { goto L_800FEA68; } // 800FEA58
  c->r[3]=R32(c->r[4]+0x00000010u); // 800FEA5C
  c->r[4]=R32(c->r[4]+0x00000014u); // 800FEA60
  return; // 800FEA64
L_800FEA68:;
  c->r[4]=0u+0x00000000u; // 800FEA68
  c->r[3]=0u+0x00000000u; // 800FEA6C
  return; // 800FEA70
}

// fn_800FEA80
void f_800FEA80(Ctx* __restrict c) {
  trace_call(0x800FEA80u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 800FEA80
  cmps(c,0,(int32_t)c->r[4],0); // 800FEA84
  if (crb(c,2)) { goto L_800FEA90; } // 800FEA88
  f_800F9FA0(c); return; // 800FEA8C
L_800FEA90:;
  c->r[0]=0u+0x00000000u; // 800FEA90
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FEA94
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FEA98
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FEA9C
  return; // 800FEAA0
}

// fn_800FEAB0
void f_800FEAB0(Ctx* __restrict c) {
  trace_call(0x800FEAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEAB0
  c->r[0]=c->lr; // 800FEAB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FEAB8
  c->r[11]=c->r[1]+0x00000030u; // 800FEABC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800FEAC0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800FEAC4
  c->lr=0x800FEACCu; f_800C2E4C(c); // 800FEAC8
  cmps(c,0,(int32_t)c->r[4],0); // 800FEACC
  c->r[27]=c->r[3]|c->r[3]; // 800FEAD0
  c->r[28]=c->r[4]|c->r[4]; // 800FEAD4
  c->r[29]=c->r[5]|c->r[5]; // 800FEAD8
  if (!crb(c,2)) { goto L_800FEAE8; } // 800FEADC
  c->r[3]=0u+0x00000021u; // 800FEAE0
  goto L_800FEC4C; // 800FEAE4
L_800FEAE8:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FEAE8
  cmps(c,0,(int32_t)c->r[0],0); // 800FEAEC
  if (!crb(c,2)) { goto L_800FEB48; } // 800FEAF0
  c->r[0]=R32(c->r[3]+0x000000A4u); // 800FEAF4
  cmps(c,0,(int32_t)c->r[0],0); // 800FEAF8
  if (crb(c,2)) { goto L_800FEB48; } // 800FEAFC
  c->r[3]=c->r[3]+0x00000028u; // 800FEB00
  c->lr=0x800FEB08u; f_800FE0F0(c); // 800FEB04
  c->r[4]=c->r[3]|c->r[3]; // 800FEB08
  c->r[3]=R32(c->r[27]+0x000000A4u); // 800FEB0C
  c->r[5]=c->r[29]|c->r[29]; // 800FEB10
  c->r[6]=c->r[1]+0x00000010u; // 800FEB14
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FEB18
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FEB1C
  c->ctr=c->r[12]; // 800FEB20
  if (true) { c->lr=0x800FEB28u; dispatch(c,c->ctr); } // 800FEB24
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB28
  if (crb(c,2)) { goto L_800FEB34; } // 800FEB2C
  goto L_800FEC4C; // 800FEB30
L_800FEB34:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 800FEB34
  cmps(c,0,(int32_t)c->r[4],0); // 800FEB38
  if (crb(c,2)) { goto L_800FEB48; } // 800FEB3C
  c->r[3]=c->r[27]|c->r[27]; // 800FEB40
  c->lr=0x800FEB48u; f_800FE580(c); // 800FEB44
L_800FEB48:;
  c->r[3]=c->r[27]+0x00000010u; // 800FEB48
  c->r[4]=c->r[1]+0x0000000Cu; // 800FEB4C
  c->lr=0x800FEB54u; f_800FC710(c); // 800FEB50
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800FEB54
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB58
  if (crb(c,2)) { goto L_800FEC40; } // 800FEB5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FEB60
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FEB64
  c->ctr=c->r[12]; // 800FEB68
  if (true) { c->lr=0x800FEB70u; dispatch(c,c->ctr); } // 800FEB6C
  {uint32_t ea=c->r[2]+0xFFFFA018u; c->f[31]=c->ps1[31]=RF32(ea);} // 800FEB70
  fcmp(c,0,c->f[1],c->f[31]); // 800FEB74
  c->r[0]=c->cr; // 800FEB78
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800FEB7C
  if (!crb(c,2)) { goto L_800FEC40; } // 800FEB80
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 800FEB84
  c->r[31]=0u+0x0000000Au; // 800FEB88
  goto L_800FEC04; // 800FEB8C
L_800FEB90:;
  c->r[0]=R32(c->r[27]+0x00000020u); // 800FEB90
  cmps(c,0,(int32_t)c->r[0],0); // 800FEB94
  if (!crb(c,2)) { goto L_800FEBF4; } // 800FEB98
  cmps(c,0,(int32_t)c->r[31],0); // 800FEB9C
  if (!crb(c,1)) { goto L_800FEBF4; } // 800FEBA0
  c->r[3]=R32(c->r[27]+0x000000A4u); // 800FEBA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FEBA8
  if (crb(c,2)) { goto L_800FEBF0; } // 800FEBAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FEBB0
  c->r[5]=c->r[29]|c->r[29]; // 800FEBB4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800FEBB8
  c->r[6]=c->r[1]+0x00000008u; // 800FEBBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FEBC0
  c->r[4]=R32(c->r[4]+0x00000004u); // 800FEBC4
  c->ctr=c->r[12]; // 800FEBC8
  if (true) { c->lr=0x800FEBD0u; dispatch(c,c->ctr); } // 800FEBCC
  cmps(c,0,(int32_t)c->r[3],0); // 800FEBD0
  if (crb(c,2)) { goto L_800FEBDC; } // 800FEBD4
  goto L_800FEC4C; // 800FEBD8
L_800FEBDC:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800FEBDC
  cmps(c,0,(int32_t)c->r[4],0); // 800FEBE0
  if (crb(c,2)) { goto L_800FEBF0; } // 800FEBE4
  c->r[3]=c->r[27]|c->r[27]; // 800FEBE8
  c->lr=0x800FEBF0u; f_800FE580(c); // 800FEBEC
L_800FEBF0:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800FEBF0
L_800FEBF4:;
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 800FEBF4
  c->r[3]=c->r[27]+0x00000010u; // 800FEBF8
  c->r[4]=c->r[1]+0x0000000Cu; // 800FEBFC
  c->lr=0x800FEC04u; f_800FC710(c); // 800FEC00
L_800FEC04:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800FEC04
  cmps(c,0,(int32_t)c->r[3],0); // 800FEC08
  if (crb(c,2)) { goto L_800FEC30; } // 800FEC0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FEC10
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FEC14
  c->ctr=c->r[12]; // 800FEC18
  if (true) { c->lr=0x800FEC20u; dispatch(c,c->ctr); } // 800FEC1C
  fcmp(c,0,c->f[1],c->f[31]); // 800FEC20
  c->r[0]=c->cr; // 800FEC24
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800FEC28
  if (crb(c,2)) { IRQCHK(c); goto L_800FEB90; } // 800FEC2C
L_800FEC30:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800FEC30
  cmps(c,0,(int32_t)c->r[0],0); // 800FEC34
  if (!crb(c,2)) { goto L_800FEC40; } // 800FEC38
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800FEC3C
L_800FEC40:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800FEC40
  c->r[3]=0u+0x00000000u; // 800FEC44
  W32(c->r[28]+0x00000000u,c->r[0]); // 800FEC48
L_800FEC4C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FEC4C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800FEC50
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800FEC54
  c->lr=0x800FEC5Cu; f_800C2E98(c); // 800FEC58
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FEC5C
  c->lr=c->r[0]; // 800FEC60
  c->r[1]=c->r[1]+0x00000040u; // 800FEC64
  return; // 800FEC68
}

// fn_800FEC70
void f_800FEC70(Ctx* __restrict c) {
  trace_call(0x800FEC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC70
  c->r[0]=c->lr; // 800FEC74
  c->r[5]=0u+0x000000B0u; // 800FEC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEC7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEC80
  c->r[31]=c->r[4]|c->r[4]; // 800FEC84
  c->r[4]=0u+0x00000017u; // 800FEC88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FEC8C
  c->r[30]=c->r[3]|c->r[3]; // 800FEC90
  c->r[3]=c->r[31]|c->r[31]; // 800FEC94
  c->lr=0x800FEC9Cu; f_8018FD10(c); // 800FEC98
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800FEC9C
  cmps(c,0,(int32_t)c->r[3],0); // 800FECA0
  if (crb(c,2)) { goto L_800FECC8; } // 800FECA4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800FECA8
  c->r[4]=c->r[31]|c->r[31]; // 800FECAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FECB0
  c->ctr=c->r[12]; // 800FECB4
  if (true) { c->lr=0x800FECBCu; dispatch(c,c->ctr); } // 800FECB8
  cmps(c,0,(int32_t)c->r[3],0); // 800FECBC
  if (crb(c,2)) { goto L_800FECC8; } // 800FECC0
  goto L_800FECF0; // 800FECC4
L_800FECC8:;
  c->r[12]=R32(c->r[30]+0x00000014u); // 800FECC8
  c->r[3]=c->r[30]+0x00000010u; // 800FECCC
  c->r[4]=c->r[31]|c->r[31]; // 800FECD0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FECD4
  c->ctr=c->r[12]; // 800FECD8
  if (true) { c->lr=0x800FECE0u; dispatch(c,c->ctr); } // 800FECDC
  cmps(c,0,(int32_t)c->r[3],0); // 800FECE0
  if (crb(c,2)) { goto L_800FECEC; } // 800FECE4
  goto L_800FECF0; // 800FECE8
L_800FECEC:;
  c->r[3]=0u+0x00000000u; // 800FECEC
L_800FECF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FECF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FECF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FECF8
  c->lr=c->r[0]; // 800FECFC
  c->r[1]=c->r[1]+0x00000010u; // 800FED00
  return; // 800FED04
}

// fn_800FED10
void f_800FED10(Ctx* __restrict c) {
  trace_call(0x800FED10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FED10
  c->r[0]=c->lr; // 800FED14
  cmps(c,0,(int32_t)c->r[4],0); // 800FED18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FED1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FED20
  c->r[31]=c->r[3]|c->r[3]; // 800FED24
  if (crb(c,2)) { goto L_800FED60; } // 800FED28
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FED2C
  cmps(c,0,(int32_t)c->r[0],0); // 800FED30
  if (!crb(c,2)) { goto L_800FED84; } // 800FED34
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FED38
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FED3C
  c->ctr=c->r[12]; // 800FED40
  if (true) { c->lr=0x800FED48u; dispatch(c,c->ctr); } // 800FED44
  cmps(c,0,(int32_t)c->r[3],0); // 800FED48
  if (crb(c,2)) { goto L_800FED54; } // 800FED4C
  goto L_800FED88; // 800FED50
L_800FED54:;
  c->r[0]=0u+0x00000001u; // 800FED54
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FED58
  goto L_800FED84; // 800FED5C
L_800FED60:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FED60
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FED64
  c->ctr=c->r[12]; // 800FED68
  if (true) { c->lr=0x800FED70u; dispatch(c,c->ctr); } // 800FED6C
  cmps(c,0,(int32_t)c->r[3],0); // 800FED70
  if (crb(c,2)) { goto L_800FED7C; } // 800FED74
  goto L_800FED88; // 800FED78
L_800FED7C:;
  c->r[0]=0u+0x00000000u; // 800FED7C
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FED80
L_800FED84:;
  c->r[3]=0u+0x00000000u; // 800FED84
L_800FED88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FED88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FED8C
  c->lr=c->r[0]; // 800FED90
  c->r[1]=c->r[1]+0x00000010u; // 800FED94
  return; // 800FED98
}

// fn_800FEDA0
void f_800FEDA0(Ctx* __restrict c) {
  trace_call(0x800FEDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEDA0
  c->r[0]=c->lr; // 800FEDA4
  cmps(c,0,(int32_t)c->r[4],0); // 800FEDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEDAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEDB0
  c->r[31]=c->r[3]|c->r[3]; // 800FEDB4
  if (crb(c,2)) { goto L_800FEDF0; } // 800FEDB8
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FEDBC
  cmps(c,0,(int32_t)c->r[0],0); // 800FEDC0
  if (!crb(c,2)) { goto L_800FEE14; } // 800FEDC4
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FEDC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FEDCC
  c->ctr=c->r[12]; // 800FEDD0
  if (true) { c->lr=0x800FEDD8u; dispatch(c,c->ctr); } // 800FEDD4
  cmps(c,0,(int32_t)c->r[3],0); // 800FEDD8
  if (crb(c,2)) { goto L_800FEDE4; } // 800FEDDC
  goto L_800FEE18; // 800FEDE0
L_800FEDE4:;
  c->r[0]=0u+0x00000001u; // 800FEDE4
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FEDE8
  goto L_800FEE14; // 800FEDEC
L_800FEDF0:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FEDF0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FEDF4
  c->ctr=c->r[12]; // 800FEDF8
  if (true) { c->lr=0x800FEE00u; dispatch(c,c->ctr); } // 800FEDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE00
  if (crb(c,2)) { goto L_800FEE0C; } // 800FEE04
  goto L_800FEE18; // 800FEE08
L_800FEE0C:;
  c->r[0]=0u+0x00000000u; // 800FEE0C
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FEE10
L_800FEE14:;
  c->r[3]=0u+0x00000000u; // 800FEE14
L_800FEE18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEE18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEE1C
  c->lr=c->r[0]; // 800FEE20
  c->r[1]=c->r[1]+0x00000010u; // 800FEE24
  return; // 800FEE28
}

// fn_800FEE30
void f_800FEE30(Ctx* __restrict c) {
  trace_call(0x800FEE30u);
  c->r[4]=c->r[3]|c->r[3]; // 800FEE30
  c->r[3]=R32(c->r[3]+0x00000038u); // 800FEE34
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 800FEE38
  return; // 800FEE3C
}

// fn_800FEE40
void f_800FEE40(Ctx* __restrict c) {
  trace_call(0x800FEE40u);
  c->r[3]=R8(c->r[3]+0x00000030u); // 800FEE40
  return; // 800FEE44
}

// fn_800FEE50
void f_800FEE50(Ctx* __restrict c) {
  trace_call(0x800FEE50u);
  c->r[3]=R8(c->r[3]+0x00000031u); // 800FEE50
  return; // 800FEE54
}

// fn_800FEE60
void f_800FEE60(Ctx* __restrict c) {
  trace_call(0x800FEE60u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800FEE60
  return; // 800FEE64
}

// fn_800FEE70
void f_800FEE70(Ctx* __restrict c) {
  trace_call(0x800FEE70u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEE70
  c->r[0]=c->lr; // 800FEE74
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800FEE78
  c->r[11]=c->r[1]+0x000000D0u; // 800FEE7C
  c->lr=0x800FEE84u; f_800C2E3C(c); // 800FEE80
  c->r[25]=c->r[3]|c->r[3]; // 800FEE84
  c->r[23]=c->r[4]|c->r[4]; // 800FEE88
  c->r[24]=c->r[5]|c->r[5]; // 800FEE8C
  c->lr=0x800FEE94u; f_800FB1F0(c); // 800FEE90
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FEE94
  c->r[4]=c->r[25]|c->r[25]; // 800FEE98
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FEE9C
  c->ctr=c->r[12]; // 800FEEA0
  if (true) { c->lr=0x800FEEA8u; dispatch(c,c->ctr); } // 800FEEA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FEEA8
  c->r[27]=c->r[3]|c->r[3]; // 800FEEAC
  if (!crb(c,2)) { goto L_800FEEBC; } // 800FEEB0
  c->r[3]=0u+0x00000025u; // 800FEEB4
  goto L_800FEFC4; // 800FEEB8
L_800FEEBC:;
  c->r[0]=0u+0x00000020u; // 800FEEBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FEEC0
  c->r[4]=c->r[1]+0x00000020u; // 800FEEC4
  c->r[5]=c->r[1]+0x0000000Cu; // 800FEEC8
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FEECC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800FEED0
  c->ctr=c->r[12]; // 800FEED4
  if (true) { c->lr=0x800FEEDCu; dispatch(c,c->ctr); } // 800FEED8
  cmps(c,0,(int32_t)c->r[3],0); // 800FEEDC
  if (crb(c,2)) { goto L_800FEEE8; } // 800FEEE0
  goto L_800FEFC4; // 800FEEE4
L_800FEEE8:;
  c->r[29]=0u+0x00000000u; // 800FEEE8
  c->r[30]=0u+0x80390000u; // 800FEEEC
  W32(c->r[24]+0x00000000u,c->r[29]); // 800FEEF0
  c->r[31]=c->r[29]|c->r[29]; // 800FEEF4
  c->r[30]=c->r[30]+0xFFFFDEB8u; // 800FEEF8
  c->r[28]=c->r[1]+0x00000020u; // 800FEEFC
  c->r[26]=0u+0x00000000u; // 800FEF00
  goto L_800FEFB4; // 800FEF04
L_800FEF08:;
  W32(c->r[1]+0x00000014u,c->r[30]); // 800FEF08
  c->r[3]=c->r[27]|c->r[27]; // 800FEF0C
  c->r[5]=c->r[1]+0x00000010u; // 800FEF10
  c->r[4]=R32(c->r[28]+c->r[31]); // 800FEF14
  W32(c->r[1]+0x00000018u,c->r[29]); // 800FEF18
  c->r[12]=R32(c->r[27]+0x00000004u); // 800FEF1C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800FEF20
  c->ctr=c->r[12]; // 800FEF24
  if (true) { c->lr=0x800FEF2Cu; dispatch(c,c->ctr); } // 800FEF28
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF2C
  c->r[25]=c->r[3]|c->r[3]; // 800FEF30
  if (crb(c,2)) { goto L_800FEF4C; } // 800FEF34
  c->r[3]=c->r[1]+0x00000010u; // 800FEF38
  c->r[4]=0u+0xFFFFFFFFu; // 800FEF3C
  c->lr=0x800FEF44u; f_800F20C0(c); // 800FEF40
  c->r[3]=c->r[25]|c->r[25]; // 800FEF44
  goto L_800FEFC4; // 800FEF48
L_800FEF4C:;
  c->r[4]=c->r[23]|c->r[23]; // 800FEF4C
  c->r[3]=c->r[1]+0x00000010u; // 800FEF50
  c->r[5]=c->r[1]+0x00000008u; // 800FEF54
  c->lr=0x800FEF5Cu; f_800FEFE0(c); // 800FEF58
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF5C
  c->r[25]=c->r[3]|c->r[3]; // 800FEF60
  if (crb(c,2)) { goto L_800FEF7C; } // 800FEF64
  c->r[3]=c->r[1]+0x00000010u; // 800FEF68
  c->r[4]=0u+0xFFFFFFFFu; // 800FEF6C
  c->lr=0x800FEF74u; f_800F20C0(c); // 800FEF70
  c->r[3]=c->r[25]|c->r[25]; // 800FEF74
  goto L_800FEFC4; // 800FEF78
L_800FEF7C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FEF7C
  cmps(c,0,(int32_t)c->r[0],0); // 800FEF80
  if (crb(c,2)) { goto L_800FEFA0; } // 800FEF84
  c->r[0]=R32(c->r[28]+c->r[31]); // 800FEF88
  c->r[3]=c->r[1]+0x00000010u; // 800FEF8C
  W32(c->r[24]+0x00000000u,c->r[0]); // 800FEF90
  c->r[4]=0u+0xFFFFFFFFu; // 800FEF94
  c->lr=0x800FEF9Cu; f_800F20C0(c); // 800FEF98
  goto L_800FEFC0; // 800FEF9C
L_800FEFA0:;
  c->r[3]=c->r[1]+0x00000010u; // 800FEFA0
  c->r[4]=0u+0xFFFFFFFFu; // 800FEFA4
  c->lr=0x800FEFACu; f_800F20C0(c); // 800FEFA8
  c->r[26]=c->r[26]+0x00000001u; // 800FEFAC
  c->r[31]=c->r[31]+0x00000004u; // 800FEFB0
L_800FEFB4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800FEFB4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800FEFB8
  if (crb(c,0)) { IRQCHK(c); goto L_800FEF08; } // 800FEFBC
L_800FEFC0:;
  c->r[3]=0u+0x00000000u; // 800FEFC0
L_800FEFC4:;
  c->r[11]=c->r[1]+0x000000D0u; // 800FEFC4
  c->lr=0x800FEFCCu; f_800C2E88(c); // 800FEFC8
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800FEFCC
  c->lr=c->r[0]; // 800FEFD0
  c->r[1]=c->r[1]+0x000000D0u; // 800FEFD4
  return; // 800FEFD8
}

// fn_800FEFE0
void f_800FEFE0(Ctx* __restrict c) {
  trace_call(0x800FEFE0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FEFE0
  cmps(c,0,(int32_t)c->r[3],0); // 800FEFE4
  if (crb(c,2)) { goto L_800FEFFC; } // 800FEFE8
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FEFEC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FEFF0
  c->ctr=c->r[12]; // 800FEFF4
  if (true) { dispatch(c,c->ctr); return; } // 800FEFF8
L_800FEFFC:;
  c->r[0]=0u+0x00000001u; // 800FEFFC
  W8(c->r[5]+0x00000000u,c->r[0]); // 800FF000
  c->r[3]=0u+0x00000000u; // 800FF004
  return; // 800FF008
}

// fn_800FF010
void f_800FF010(Ctx* __restrict c) {
  trace_call(0x800FF010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF010
  c->r[0]=c->lr; // 800FF014
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF018
  c->r[11]=c->r[1]+0x00000020u; // 800FF01C
  c->lr=0x800FF024u; f_800C2E54(c); // 800FF020
  c->r[4]=R32(c->r[3]+0x00000008u); // 800FF024
  c->r[31]=c->r[3]+0x00000008u; // 800FF028
  c->r[30]=0u+0x80390000u; // 800FF02C
  goto L_800FF054; // 800FF030
L_800FF034:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FF034
  c->r[5]=c->r[30]+0xFFFFE1F8u; // 800FF038
  c->r[29]=R32(c->r[4]+0x00000000u); // 800FF03C
  c->r[6]=0u+0x0000004Eu; // 800FF040
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FF044
  c->r[7]=0u+0x00000000u; // 800FF048
  c->lr=0x800FF050u; f_8018F5F0(c); // 800FF04C
  c->r[4]=c->r[29]|c->r[29]; // 800FF050
L_800FF054:;
  cmpu(c,0,c->r[4],c->r[31]); // 800FF054
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF034; } // 800FF058
  c->r[11]=c->r[1]+0x00000020u; // 800FF05C
  c->r[3]=0u+0x00000000u; // 800FF060
  c->lr=0x800FF068u; f_800C2EA0(c); // 800FF064
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF068
  c->lr=c->r[0]; // 800FF06C
  c->r[1]=c->r[1]+0x00000020u; // 800FF070
  return; // 800FF074
}

// fn_800FF080
void f_800FF080(Ctx* __restrict c) {
  trace_call(0x800FF080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF080
  c->r[0]=c->lr; // 800FF084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF08C
  c->r[31]=c->r[3]|c->r[3]; // 800FF090
  c->lr=0x800FF098u; f_800FF010(c); // 800FF094
  cmps(c,0,(int32_t)c->r[3],0); // 800FF098
  if (crb(c,2)) { goto L_800FF0A4; } // 800FF09C
  goto L_800FF0B0; // 800FF0A0
L_800FF0A4:;
  c->r[3]=c->r[31]+0x00000008u; // 800FF0A4
  c->lr=0x800FF0ACu; f_800D82E0(c); // 800FF0A8
  c->r[3]=0u+0x00000000u; // 800FF0AC
L_800FF0B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF0B4
  c->lr=c->r[0]; // 800FF0B8
  c->r[1]=c->r[1]+0x00000010u; // 800FF0BC
  return; // 800FF0C0
}

// fn_800FF0D0
void f_800FF0D0(Ctx* __restrict c) {
  trace_call(0x800FF0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF0D0
  c->r[0]=c->lr; // 800FF0D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF0D8
  c->r[11]=c->r[1]+0x00000020u; // 800FF0DC
  c->lr=0x800FF0E4u; f_800C2E54(c); // 800FF0E0
  c->r[29]=c->r[3]|c->r[3]; // 800FF0E4
  c->r[30]=c->r[4]|c->r[4]; // 800FF0E8
  c->lr=0x800FF0F0u; f_800FF220(c); // 800FF0EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF0F0
  c->r[31]=c->r[3]|c->r[3]; // 800FF0F4
  if (!crb(c,2)) { goto L_800FF16C; } // 800FF0F8
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FF0FC
  c->r[5]=0u+0x80390000u; // 800FF100
  c->r[5]=c->r[5]+0xFFFFE1F8u; // 800FF104
  c->r[4]=0u+0x00000014u; // 800FF108
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FF10C
  c->r[6]=0u+0x00000065u; // 800FF110
  c->r[7]=0u+0x00000000u; // 800FF114
  c->r[8]=0u+0x00000000u; // 800FF118
  c->lr=0x800FF120u; f_8018F230(c); // 800FF11C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF120
  c->r[31]=c->r[3]|c->r[3]; // 800FF124
  if (crb(c,2)) { goto L_800FF13C; } // 800FF128
  c->lr=0x800FF130u; f_800D82E0(c); // 800FF12C
  c->r[0]=0u+0x00000000u; // 800FF130
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800FF134
  W32(c->r[31]+0x00000010u,c->r[0]); // 800FF138
L_800FF13C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF13C
  if (!crb(c,2)) { goto L_800FF14C; } // 800FF140
  c->r[3]=0u+0x0000002Cu; // 800FF144
  goto L_800FF17C; // 800FF148
L_800FF14C:;
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 800FF14C
  c->r[3]=c->r[29]+0x00000008u; // 800FF150
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800FF154
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FF158
  W32(c->r[31]+0x00000000u,c->r[3]); // 800FF15C
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800FF160
  c->r[3]=R32(c->r[31]+0x00000004u); // 800FF164
  W32(c->r[3]+0x00000000u,c->r[31]); // 800FF168
L_800FF16C:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800FF16C
  c->r[3]=0u+0x00000000u; // 800FF170
  c->r[0]=c->r[4]+0x00000001u; // 800FF174
  W32(c->r[31]+0x00000010u,c->r[0]); // 800FF178
L_800FF17C:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF17C
  c->lr=0x800FF184u; f_800C2EA0(c); // 800FF180
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF184
  c->lr=c->r[0]; // 800FF188
  c->r[1]=c->r[1]+0x00000020u; // 800FF18C
  return; // 800FF190
}

// fn_800FF1A0
void f_800FF1A0(Ctx* __restrict c) {
  trace_call(0x800FF1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF1A0
  c->r[0]=c->lr; // 800FF1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF1A8
  c->lr=0x800FF1B0u; f_800FF220(c); // 800FF1AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF1B0
  if (crb(c,2)) { goto L_800FF1C4; } // 800FF1B4
  c->r[4]=R32(c->r[3]+0x00000010u); // 800FF1B8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FF1BC
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FF1C0
L_800FF1C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF1C4
  c->r[3]=0u+0x00000000u; // 800FF1C8
  c->lr=c->r[0]; // 800FF1CC
  c->r[1]=c->r[1]+0x00000010u; // 800FF1D0
  return; // 800FF1D4
}

// fn_800FF1E0
void f_800FF1E0(Ctx* __restrict c) {
  trace_call(0x800FF1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF1E0
  c->r[0]=c->lr; // 800FF1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF1E8
  c->lr=0x800FF1F0u; f_800FF220(c); // 800FF1EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF1F0
  if (crb(c,2)) { goto L_800FF200; } // 800FF1F4
  c->r[3]=R32(c->r[3]+0x00000010u); // 800FF1F8
  goto L_800FF204; // 800FF1FC
L_800FF200:;
  c->r[3]=0u+0x00000000u; // 800FF200
L_800FF204:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF204
  c->lr=c->r[0]; // 800FF208
  c->r[1]=c->r[1]+0x00000010u; // 800FF20C
  return; // 800FF210
}

// fn_800FF220
void f_800FF220(Ctx* __restrict c) {
  trace_call(0x800FF220u);
  c->r[6]=R32(c->r[3]+0x00000008u); // 800FF220
  c->r[0]=c->r[3]+0x00000008u; // 800FF224
  goto L_800FF23C; // 800FF228
L_800FF22C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800FF22C
  cmpu(c,0,c->r[5],c->r[4]); // 800FF230
  if (crb(c,2)) { goto L_800FF244; } // 800FF234
  c->r[6]=R32(c->r[6]+0x00000000u); // 800FF238
L_800FF23C:;
  cmpu(c,0,c->r[6],c->r[0]); // 800FF23C
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF22C; } // 800FF240
L_800FF244:;
  c->r[0]=c->r[3]+0x00000008u; // 800FF244
  cmpu(c,0,c->r[6],c->r[0]); // 800FF248
  if (!crb(c,2)) { goto L_800FF254; } // 800FF24C
  c->r[6]=0u+0x00000000u; // 800FF250
L_800FF254:;
  c->r[3]=c->r[6]|c->r[6]; // 800FF254
  return; // 800FF258
}

// fn_800FF260
void f_800FF260(Ctx* __restrict c) {
  trace_call(0x800FF260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF260
  c->r[0]=c->lr; // 800FF264
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF268
  c->r[11]=c->r[1]+0x00000020u; // 800FF26C
  c->lr=0x800FF274u; f_800C2E54(c); // 800FF270
  c->r[30]=R32(c->r[3]+0x00000008u); // 800FF274
  c->r[29]=c->r[4]|c->r[4]; // 800FF278
  c->r[31]=c->r[3]+0x00000008u; // 800FF27C
  goto L_800FF298; // 800FF280
L_800FF284:;
  c->r[3]=c->r[29]|c->r[29]; // 800FF284
  c->r[4]=0u+0x00000017u; // 800FF288
  c->r[5]=0u+0x00000014u; // 800FF28C
  c->lr=0x800FF294u; f_8018FD10(c); // 800FF290
  c->r[30]=R32(c->r[30]+0x00000000u); // 800FF294
L_800FF298:;
  cmpu(c,0,c->r[30],c->r[31]); // 800FF298
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF284; } // 800FF29C
  c->r[11]=c->r[1]+0x00000020u; // 800FF2A0
  c->r[3]=0u+0x00000000u; // 800FF2A4
  c->lr=0x800FF2ACu; f_800C2EA0(c); // 800FF2A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF2AC
  c->lr=c->r[0]; // 800FF2B0
  c->r[1]=c->r[1]+0x00000020u; // 800FF2B4
  return; // 800FF2B8
}

// fn_800FF2C0
void f_800FF2C0(Ctx* __restrict c) {
  trace_call(0x800FF2C0u);
  c->r[4]=0u+0x80390000u; // 800FF2C0
  c->r[0]=0u+0x00000000u; // 800FF2C4
  c->r[4]=c->r[4]+0xFFFFE340u; // 800FF2C8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FF2CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FF2D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FF2D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FF2D8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FF2DC
  return; // 800FF2E0
}

// fn_800FF2F0
void f_800FF2F0(Ctx* __restrict c) {
  trace_call(0x800FF2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF2F0
  c->r[0]=c->lr; // 800FF2F4
  cmps(c,0,(int32_t)c->r[4],0); // 800FF2F8
  c->r[5]=0u+0x00000000u; // 800FF2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF300
  c->r[0]=0u+0x00000001u; // 800FF304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF308
  c->r[31]=c->r[3]|c->r[3]; // 800FF30C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FF310
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800FF314
  W32(c->r[3]+0x00000014u,c->r[5]); // 800FF318
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FF31C
  if (crb(c,2)) { goto L_800FF358; } // 800FF320
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FF324
  c->r[5]=0u+0x80390000u; // 800FF328
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FF32C
  c->r[6]=0u+0x000000D6u; // 800FF330
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FF334
  c->r[5]=c->r[5]+0xFFFFE1F8u; // 800FF338
  c->r[7]=0u+0x00000000u; // 800FF33C
  c->lr=0x800FF344u; f_8018F760(c); // 800FF340
  cmps(c,0,(int32_t)c->r[3],0); // 800FF344
  W32(c->r[31]+0x00000014u,c->r[3]); // 800FF348
  if (!crb(c,2)) { goto L_800FF358; } // 800FF34C
  c->r[3]=0u+0x0000002Cu; // 800FF350
  goto L_800FF35C; // 800FF354
L_800FF358:;
  c->r[3]=0u+0x00000000u; // 800FF358
L_800FF35C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF35C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF360
  c->lr=c->r[0]; // 800FF364
  c->r[1]=c->r[1]+0x00000010u; // 800FF368
  return; // 800FF36C
}

// fn_800FF370
void f_800FF370(Ctx* __restrict c) {
  trace_call(0x800FF370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF370
  c->r[0]=c->lr; // 800FF374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF378
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FF37C
  cmps(c,0,(int32_t)c->r[4],0); // 800FF380
  if (crb(c,2)) { goto L_800FF3A4; } // 800FF384
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FF388
  c->r[5]=0u+0x80390000u; // 800FF38C
  c->r[6]=0u+0x000000E5u; // 800FF390
  c->r[7]=0u+0x00000000u; // 800FF394
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FF398
  c->r[5]=c->r[5]+0xFFFFE1F8u; // 800FF39C
  c->lr=0x800FF3A4u; f_8018F5F0(c); // 800FF3A0
L_800FF3A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF3A4
  c->r[3]=0u+0x00000000u; // 800FF3A8
  c->lr=c->r[0]; // 800FF3AC
  c->r[1]=c->r[1]+0x00000010u; // 800FF3B0
  return; // 800FF3B4
}

// fn_800FF3C0
void f_800FF3C0(Ctx* __restrict c) {
  trace_call(0x800FF3C0u);
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800FF3C0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FF3C4
  cmpu(c,0,c->r[6],c->r[0]); // 800FF3C8
  if (!crb(c,0)) { goto L_800FF420; } // 800FF3CC
  c->r[5]=R32(c->r[3]+0x00000014u); // 800FF3D0
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800FF3D4
  c->r[5]=c->r[5]+c->r[0]; // 800FF3D8
  W32(c->r[5]+0x00000004u,c->r[4]); // 800FF3DC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800FF3E0
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FF3E4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FF3E8
  c->r[5]=R32(c->r[3]+0x00000010u); // 800FF3EC
  W32(c->r[4]+c->r[0],c->r[5]); // 800FF3F0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800FF3F4
  c->r[6]=R32(c->r[3]+0x00000010u); // 800FF3F8
  c->r[5]=c->r[4]+0x00000001u; // 800FF3FC
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800FF400
  c->r[6]=c->r[6]+0x00000001u; // 800FF404
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FF408
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800FF40C
  W32(c->r[3]+0x00000010u,c->r[6]); // 800FF410
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FF414
  c->r[3]=R32(c->r[4]+c->r[0]); // 800FF418
  return; // 800FF41C
L_800FF420:;
  c->r[3]=0u+0x00000000u; // 800FF420
  return; // 800FF424
}

// fn_800FF430
void f_800FF430(Ctx* __restrict c) {
  trace_call(0x800FF430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF430
  c->r[0]=c->lr; // 800FF434
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF438
  c->r[11]=c->r[1]+0x00000020u; // 800FF43C
  c->lr=0x800FF444u; f_800C2E54(c); // 800FF440
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 800FF444
  c->r[29]=c->r[3]|c->r[3]; // 800FF448
  c->r[30]=0u+0x00000000u; // 800FF44C
  c->r[5]=0u+0x00000000u; // 800FF450
  c->ctr=c->r[7]; // 800FF454
  cmpu(c,0,c->r[7],0x00000000u); // 800FF458
  if (!crb(c,1)) { goto L_800FF47C; } // 800FF45C
L_800FF460:;
  c->r[6]=R32(c->r[3]+0x00000014u); // 800FF460
  c->r[0]=R32(c->r[6]+c->r[5]); // 800FF464
  cmpu(c,0,c->r[4],c->r[0]); // 800FF468
  if (crb(c,2)) { goto L_800FF47C; } // 800FF46C
  c->r[30]=c->r[30]+0x00000001u; // 800FF470
  c->r[5]=c->r[5]+0x00000008u; // 800FF474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF460; } // 800FF478
L_800FF47C:;
  cmpu(c,0,c->r[30],c->r[7]); // 800FF47C
  if (!crb(c,0)) { goto L_800FF4C4; } // 800FF480
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800FF484
  c->r[31]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800FF488
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FF48C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FF490
  goto L_800FF4B8; // 800FF494
L_800FF498:;
  c->r[0]=c->r[30]+0x00000001u; // 800FF498
  c->r[4]=R32(c->r[29]+0x00000014u); // 800FF49C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FF4A0
  c->r[3]=c->r[4]+c->r[31]; // 800FF4A4
  c->r[4]=c->r[4]+c->r[0]; // 800FF4A8
  c->lr=0x800FF4B0u; f_800FF4E0(c); // 800FF4AC
  c->r[30]=c->r[30]+0x00000001u; // 800FF4B0
  c->r[31]=c->r[31]+0x00000008u; // 800FF4B4
L_800FF4B8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800FF4B8
  cmpu(c,0,c->r[30],c->r[0]); // 800FF4BC
  if (crb(c,0)) { IRQCHK(c); goto L_800FF498; } // 800FF4C0
L_800FF4C4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF4C4
  c->lr=0x800FF4CCu; f_800C2EA0(c); // 800FF4C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF4CC
  c->lr=c->r[0]; // 800FF4D0
  c->r[1]=c->r[1]+0x00000020u; // 800FF4D4
  return; // 800FF4D8
}

// fn_800FF4E0
void f_800FF4E0(Ctx* __restrict c) {
  trace_call(0x800FF4E0u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 800FF4E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800FF4E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF4E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FF4EC
  return; // 800FF4F0
}

// fn_800FF500
void f_800FF500(Ctx* __restrict c) {
  trace_call(0x800FF500u);
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800FF500
  cmps(c,0,(int32_t)c->r[5],0); // 800FF504
  if (crb(c,2)) { goto L_800FF524; } // 800FF508
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800FF50C
  c->r[5]=R32(c->r[3]+0x00000014u); // 800FF510
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FF514
  c->r[3]=c->r[4]|c->r[4]; // 800FF518
  c->r[4]=c->r[5]+c->r[0]; // 800FF51C
  f_800FF4E0(c); return; // 800FF520
L_800FF524:;
  c->r[0]=0u+0x00000000u; // 800FF524
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF528
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF52C
  return; // 800FF530
}

// fn_800FF540
void f_800FF540(Ctx* __restrict c) {
  trace_call(0x800FF540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF540
  c->r[0]=c->lr; // 800FF544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF548
  c->r[0]=R32(c->r[3]+0x00000014u); // 800FF54C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF550
  if (crb(c,2)) { goto L_800FF56C; } // 800FF554
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FF558
  c->r[3]=c->r[4]|c->r[4]; // 800FF55C
  c->r[4]=0u+0x00000017u; // 800FF560
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FF564
  c->lr=0x800FF56Cu; f_8018FD10(c); // 800FF568
L_800FF56C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF56C
  c->r[3]=0u+0x00000000u; // 800FF570
  c->lr=c->r[0]; // 800FF574
  c->r[1]=c->r[1]+0x00000010u; // 800FF578
  return; // 800FF57C
}

// fn_800FF580
void f_800FF580(Ctx* __restrict c) {
  trace_call(0x800FF580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF580
  c->r[0]=c->lr; // 800FF584
  c->r[4]=0u+0x80390000u; // 800FF588
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF58C
  c->r[4]=c->r[4]+0xFFFFE2E0u; // 800FF590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF594
  c->r[31]=c->r[3]|c->r[3]; // 800FF598
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FF59C
  c->r[3]=c->r[3]+0x00000008u; // 800FF5A0
  c->lr=0x800FF5A8u; f_800FF2C0(c); // 800FF5A4
  c->r[4]=0u+0x80390000u; // 800FF5A8
  c->r[3]=c->r[31]+0x00000028u; // 800FF5AC
  c->r[4]=c->r[4]+0xFFFFE368u; // 800FF5B0
  W32(c->r[31]+0x00000024u,c->r[4]); // 800FF5B4
  c->lr=0x800FF5BCu; f_800D82E0(c); // 800FF5B8
  c->r[3]=c->r[31]|c->r[31]; // 800FF5BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF5C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF5C4
  c->lr=c->r[0]; // 800FF5C8
  c->r[1]=c->r[1]+0x00000010u; // 800FF5CC
  return; // 800FF5D0
}

// fn_800FF5E0
void f_800FF5E0(Ctx* __restrict c) {
  trace_call(0x800FF5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5E0
  c->r[0]=c->lr; // 800FF5E4
  c->r[3]=c->r[3]+0x00000008u; // 800FF5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF5EC
  c->lr=0x800FF5F4u; f_800FF2F0(c); // 800FF5F0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF5F4
  if (crb(c,2)) { goto L_800FF600; } // 800FF5F8
  goto L_800FF604; // 800FF5FC
L_800FF600:;
  c->r[3]=0u+0x00000000u; // 800FF600
L_800FF604:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF604
  c->lr=c->r[0]; // 800FF608
  c->r[1]=c->r[1]+0x00000010u; // 800FF60C
  return; // 800FF610
}

// fn_800FF620
void f_800FF620(Ctx* __restrict c) {
  trace_call(0x800FF620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF620
  c->r[0]=c->lr; // 800FF624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF62C
  c->r[31]=c->r[3]|c->r[3]; // 800FF630
  c->r[3]=c->r[3]+0x00000008u; // 800FF634
  c->lr=0x800FF63Cu; f_800FF370(c); // 800FF638
  cmps(c,0,(int32_t)c->r[3],0); // 800FF63C
  if (crb(c,2)) { goto L_800FF648; } // 800FF640
  goto L_800FF664; // 800FF644
L_800FF648:;
  c->r[3]=c->r[31]+0x00000020u; // 800FF648
  c->lr=0x800FF650u; f_800FF010(c); // 800FF64C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF650
  c->r[0]=0u+0x00000000u; // 800FF654
  if (crb(c,2)) { goto L_800FF660; } // 800FF658
  c->r[0]=c->r[3]|c->r[3]; // 800FF65C
L_800FF660:;
  c->r[3]=c->r[0]|c->r[0]; // 800FF660
L_800FF664:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF664
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF668
  c->lr=c->r[0]; // 800FF66C
  c->r[1]=c->r[1]+0x00000010u; // 800FF670
  return; // 800FF674
}

// fn_800FF680
void f_800FF680(Ctx* __restrict c) {
  trace_call(0x800FF680u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF680
  c->r[0]=c->lr; // 800FF684
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF68C
  c->r[31]=0u+0x00000000u; // 800FF690
  W32(c->r[3]+0x00000014u,c->r[31]); // 800FF694
  c->r[3]=c->r[3]+0x00000020u; // 800FF698
  c->lr=0x800FF6A0u; f_800FF080(c); // 800FF69C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6A0
  if (crb(c,2)) { goto L_800FF6AC; } // 800FF6A4
  c->r[31]=c->r[3]|c->r[3]; // 800FF6A8
L_800FF6AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800FF6AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF6B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF6B4
  c->lr=c->r[0]; // 800FF6B8
  c->r[1]=c->r[1]+0x00000010u; // 800FF6BC
  return; // 800FF6C0
}

// fn_800FF6D0
void f_800FF6D0(Ctx* __restrict c) {
  trace_call(0x800FF6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF6D0
  c->r[0]=c->lr; // 800FF6D4
  c->r[3]=c->r[3]+0x00000008u; // 800FF6D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF6DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF6E0
  c->r[31]=c->r[5]|c->r[5]; // 800FF6E4
  c->lr=0x800FF6ECu; f_800FF3C0(c); // 800FF6E8
  cmps(c,0,(int32_t)c->r[31],0); // 800FF6EC
  if (crb(c,2)) { goto L_800FF6F8; } // 800FF6F0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800FF6F4
L_800FF6F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF6F8
  c->r[3]=0u+0x00000000u; // 800FF6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF700
  c->lr=c->r[0]; // 800FF704
  c->r[1]=c->r[1]+0x00000010u; // 800FF708
  return; // 800FF70C
}

// fn_800FF710
void f_800FF710(Ctx* __restrict c) {
  trace_call(0x800FF710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF710
  c->r[0]=c->lr; // 800FF714
  c->r[3]=c->r[3]+0x00000008u; // 800FF718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF71C
  c->lr=0x800FF724u; f_800FF430(c); // 800FF720
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF724
  c->r[3]=0u+0x00000000u; // 800FF728
  c->lr=c->r[0]; // 800FF72C
  c->r[1]=c->r[1]+0x00000010u; // 800FF730
  return; // 800FF734
}

// fn_800FF740
void f_800FF740(Ctx* __restrict c) {
  trace_call(0x800FF740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF740
  c->r[0]=c->lr; // 800FF744
  c->r[3]=c->r[3]+0x00000020u; // 800FF748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF74C
  c->lr=0x800FF754u; f_800FF1E0(c); // 800FF750
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800FF754
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800FF758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF75C
  c->lr=c->r[0]; // 800FF760
  c->r[1]=c->r[1]+0x00000010u; // 800FF764
  return; // 800FF768
}

// fn_800FF770
void f_800FF770(Ctx* __restrict c) {
  trace_call(0x800FF770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF770
  c->r[0]=c->lr; // 800FF774
  c->r[3]=c->r[3]+0x00000008u; // 800FF778
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF77C
  c->r[4]=c->r[1]+0x00000008u; // 800FF780
  c->lr=0x800FF788u; f_800FF500(c); // 800FF784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF788
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800FF78C
  c->lr=c->r[0]; // 800FF790
  c->r[1]=c->r[1]+0x00000010u; // 800FF794
  return; // 800FF798
}

// fn_800FF7A0
void f_800FF7A0(Ctx* __restrict c) {
  trace_call(0x800FF7A0u);
  c->r[3]=0u+0x00000001u; // 800FF7A0
  return; // 800FF7A4
}

// fn_800FF7B0
void f_800FF7B0(Ctx* __restrict c) {
  trace_call(0x800FF7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF7B0
  c->r[0]=c->lr; // 800FF7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF7BC
  c->r[31]=c->r[4]|c->r[4]; // 800FF7C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF7C4
  c->r[30]=c->r[3]|c->r[3]; // 800FF7C8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800FF7CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF7D0
  c->ctr=c->r[12]; // 800FF7D4
  c->r[3]=c->r[3]+0x00000008u; // 800FF7D8
  if (true) { c->lr=0x800FF7E0u; dispatch(c,c->ctr); } // 800FF7DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF7E0
  if (crb(c,2)) { goto L_800FF7EC; } // 800FF7E4
  goto L_800FF818; // 800FF7E8
L_800FF7EC:;
  c->r[12]=R32(c->r[30]+0x00000024u); // 800FF7EC
  c->r[3]=c->r[30]+0x00000020u; // 800FF7F0
  c->r[4]=c->r[31]|c->r[31]; // 800FF7F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF7F8
  c->ctr=c->r[12]; // 800FF7FC
  if (true) { c->lr=0x800FF804u; dispatch(c,c->ctr); } // 800FF800
  cmps(c,0,(int32_t)c->r[3],0); // 800FF804
  c->r[0]=0u+0x00000000u; // 800FF808
  if (crb(c,2)) { goto L_800FF814; } // 800FF80C
  c->r[0]=c->r[3]|c->r[3]; // 800FF810
L_800FF814:;
  c->r[3]=c->r[0]|c->r[0]; // 800FF814
L_800FF818:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF81C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF820
  c->lr=c->r[0]; // 800FF824
  c->r[1]=c->r[1]+0x00000010u; // 800FF828
  return; // 800FF82C
}

// fn_800FF830
void f_800FF830(Ctx* __restrict c) {
  trace_call(0x800FF830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF830
  c->r[0]=c->lr; // 800FF834
  cmps(c,0,(int32_t)c->r[4],0); // 800FF838
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF83C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF840
  c->r[31]=c->r[3]|c->r[3]; // 800FF844
  if (crb(c,2)) { goto L_800FF880; } // 800FF848
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FF84C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF850
  if (!crb(c,2)) { goto L_800FF8A4; } // 800FF854
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FF858
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FF85C
  c->ctr=c->r[12]; // 800FF860
  if (true) { c->lr=0x800FF868u; dispatch(c,c->ctr); } // 800FF864
  cmps(c,0,(int32_t)c->r[3],0); // 800FF868
  if (crb(c,2)) { goto L_800FF874; } // 800FF86C
  goto L_800FF8A8; // 800FF870
L_800FF874:;
  c->r[0]=0u+0x00000001u; // 800FF874
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FF878
  goto L_800FF8A4; // 800FF87C
L_800FF880:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FF880
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FF884
  c->ctr=c->r[12]; // 800FF888
  if (true) { c->lr=0x800FF890u; dispatch(c,c->ctr); } // 800FF88C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF890
  if (crb(c,2)) { goto L_800FF89C; } // 800FF894
  goto L_800FF8A8; // 800FF898
L_800FF89C:;
  c->r[0]=0u+0x00000000u; // 800FF89C
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FF8A0
L_800FF8A4:;
  c->r[3]=0u+0x00000000u; // 800FF8A4
L_800FF8A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF8A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF8AC
  c->lr=c->r[0]; // 800FF8B0
  c->r[1]=c->r[1]+0x00000010u; // 800FF8B4
  return; // 800FF8B8
}

// fn_800FF8C0
void f_800FF8C0(Ctx* __restrict c) {
  trace_call(0x800FF8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF8C0
  c->r[0]=c->lr; // 800FF8C4
  cmps(c,0,(int32_t)c->r[4],0); // 800FF8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF8CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF8D0
  c->r[31]=c->r[3]|c->r[3]; // 800FF8D4
  if (crb(c,2)) { goto L_800FF910; } // 800FF8D8
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FF8DC
  cmps(c,0,(int32_t)c->r[0],0); // 800FF8E0
  if (!crb(c,2)) { goto L_800FF934; } // 800FF8E4
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FF8E8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FF8EC
  c->ctr=c->r[12]; // 800FF8F0
  if (true) { c->lr=0x800FF8F8u; dispatch(c,c->ctr); } // 800FF8F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF8F8
  if (crb(c,2)) { goto L_800FF904; } // 800FF8FC
  goto L_800FF938; // 800FF900
L_800FF904:;
  c->r[0]=0u+0x00000001u; // 800FF904
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FF908
  goto L_800FF934; // 800FF90C
L_800FF910:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 800FF910
  c->r[12]=R32(c->r[12]+0x00000008u); // 800FF914
  c->ctr=c->r[12]; // 800FF918
  if (true) { c->lr=0x800FF920u; dispatch(c,c->ctr); } // 800FF91C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF920
  if (crb(c,2)) { goto L_800FF92C; } // 800FF924
  goto L_800FF938; // 800FF928
L_800FF92C:;
  c->r[0]=0u+0x00000000u; // 800FF92C
  W8(c->r[31]+0x00000000u,c->r[0]); // 800FF930
L_800FF934:;
  c->r[3]=0u+0x00000000u; // 800FF934
L_800FF938:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF93C
  c->lr=c->r[0]; // 800FF940
  c->r[1]=c->r[1]+0x00000010u; // 800FF944
  return; // 800FF948
}

// fn_800FF950
void f_800FF950(Ctx* __restrict c) {
  trace_call(0x800FF950u);
  c->r[5]=0u+0x80390000u; // 800FF950
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800FF954
  c->r[5]=c->r[5]+0xFFFFE294u; // 800FF958
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FF95C
  return; // 800FF960
}

// fn_800FF970
void f_800FF970(Ctx* __restrict c) {
  trace_call(0x800FF970u);
  cmps(c,0,(int32_t)c->r[5],0); // 800FF970
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FF974
  if (crb(c,2)) { goto L_800FF980; } // 800FF978
  W32(c->r[5]+0x00000000u,c->r[4]); // 800FF97C
L_800FF980:;
  c->r[3]=0u+0x00000000u; // 800FF980
  return; // 800FF984
}

// fn_800FF990
void f_800FF990(Ctx* __restrict c) {
  trace_call(0x800FF990u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 800FF990
  cmpu(c,0,c->r[4],c->r[0]); // 800FF994
  if (!crb(c,2)) { goto L_800FF9A4; } // 800FF998
  c->r[0]=0u+0x00000000u; // 800FF99C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FF9A0
L_800FF9A4:;
  c->r[3]=0u+0x00000000u; // 800FF9A4
  return; // 800FF9A8
}

// fn_800FF9B0
void f_800FF9B0(Ctx* __restrict c) {
  trace_call(0x800FF9B0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800FF9B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF9B4
  if (crb(c,2)) { goto L_800FF9CC; } // 800FF9B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF9BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FF9C0
  c->ctr=c->r[12]; // 800FF9C4
  if (true) { dispatch(c,c->ctr); return; } // 800FF9C8
L_800FF9CC:;
  c->r[3]=0u+0x00000000u; // 800FF9CC
  return; // 800FF9D0
}

// fn_800FF9E0
void f_800FF9E0(Ctx* __restrict c) {
  trace_call(0x800FF9E0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FF9E0
  return; // 800FF9E4
}

// fn_800FF9F0
void f_800FF9F0(Ctx* __restrict c) {
  trace_call(0x800FF9F0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800FF9F0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF9F4
  if (crb(c,2)) { goto L_800FFA0C; } // 800FF9F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF9FC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800FFA00
  c->ctr=c->r[12]; // 800FFA04
  if (true) { dispatch(c,c->ctr); return; } // 800FFA08
L_800FFA0C:;
  c->r[3]=0u+0x00000000u; // 800FFA0C
  return; // 800FFA10
}

// fn_800FFA20
void f_800FFA20(Ctx* __restrict c) {
  trace_call(0x800FFA20u);
  c->r[3]=0u+0x00000000u; // 800FFA20
  return; // 800FFA24
}

// fn_800FFA30
void f_800FFA30(Ctx* __restrict c) {
  trace_call(0x800FFA30u);
  {uint32_t ea=c->r[2]+0xFFFFA040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFA30
  c->r[0]=0u+0x00000000u; // 800FFA34
  W8(c->r[3]+0x00000000u,c->r[0]); // 800FFA38
  W8(c->r[3]+0x00000001u,c->r[0]); // 800FFA3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800FFA40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FFA44
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FFA48
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FFA4C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FFA50
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FFA54
  W32(c->r[3]+0x00000018u,c->r[0]); // 800FFA58
  W32(c->r[3]+0x00000020u,c->r[0]); // 800FFA5C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800FFA60
  return; // 800FFA64
}

// fn_800FFA70
void f_800FFA70(Ctx* __restrict c) {
  trace_call(0x800FFA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFA70
  c->r[0]=c->lr; // 800FFA74
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FFA78
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FFA7C
  c->r[31]=c->r[3]|c->r[3]; // 800FFA80
  c->r[3]=c->r[1]+0x00000008u; // 800FFA84
  c->lr=0x800FFA8Cu; f_800FFA30(c); // 800FFA88
  c->r[0]=R16(c->r[1]+0x00000008u); // 800FFA8C
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FFA90
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFA94
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800FFA98
  c->r[0]=R32(c->r[1]+0x00000010u); // 800FFA9C
  c->r[3]=R32(c->r[1]+0x00000014u); // 800FFAA0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800FFAA4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800FFAA8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800FFAAC
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800FFAB0
  W32(c->r[31]+0x00000014u,c->r[3]); // 800FFAB4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800FFAB8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800FFABC
  c->r[3]=R32(c->r[1]+0x00000024u); // 800FFAC0
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800FFAC4
  W32(c->r[31]+0x00000018u,c->r[0]); // 800FFAC8
  c->r[0]=R32(c->r[1]+0x00000028u); // 800FFACC
  W32(c->r[31]+0x00000020u,c->r[0]); // 800FFAD0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800FFAD4
  W32(c->r[31]+0x00000024u,c->r[0]); // 800FFAD8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FFADC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FFAE0
  c->lr=c->r[0]; // 800FFAE4
  c->r[1]=c->r[1]+0x00000040u; // 800FFAE8
  return; // 800FFAEC
}

// fn_800FFAF0
void f_800FFAF0(Ctx* __restrict c) {
  trace_call(0x800FFAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFAF0
  c->r[0]=c->lr; // 800FFAF4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800FFAF8
  c->r[11]=c->r[1]+0x00000040u; // 800FFAFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800FFB00
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800FFB04
  c->lr=0x800FFB0Cu; f_800C2E3C(c); // 800FFB08
  c->r[29]=R32(c->r[3]+0x00000020u); // 800FFB0C
  c->r[0]=0u+0x43300000u; // 800FFB10
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FFB14
  c->r[26]=c->r[5]|c->r[5]; // 800FFB18
  cmps(c,0,(int32_t)c->r[29],0); // 800FFB1C
  c->r[25]=c->r[6]|c->r[6]; // 800FFB20
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FFB24
  c->r[23]=c->r[7]|c->r[7]; // 800FFB28
  c->r[24]=c->r[8]|c->r[8]; // 800FFB2C
  if (crb(c,2)) { goto L_800FFB4C; } // 800FFB30
  c->r[4]=R8(c->r[3]+0x00000001u); // 800FFB34
  cmps(c,0,(int32_t)c->r[4],0); // 800FFB38
  if (crb(c,2)) { goto L_800FFB4C; } // 800FFB3C
  c->r[9]=R8(c->r[3]+0x00000000u); // 800FFB40
  cmps(c,0,(int32_t)c->r[9],0); // 800FFB44
  if (!crb(c,2)) { goto L_800FFB5C; } // 800FFB48
L_800FFB4C:;
  c->r[0]=0u+0x00000000u; // 800FFB4C
  W32(c->r[7]+0x00000000u,c->r[0]); // 800FFB50
  W32(c->r[8]+0x00000000u,c->r[0]); // 800FFB54
  goto L_800FFC5C; // 800FFB58
L_800FFB5C:;
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 800FFB5C
  c->r[31]=R32(c->r[3]+0x00000008u); // 800FFB60
  c->r[0]=addc(c,~c->r[30],c->r[6],1); // 800FFB64
  c->r[0]=addc(c,~c->r[31],c->r[5],c->xer_ca); // 800FFB68
  c->r[0]=addc(c,~c->r[6],c->r[6],c->xer_ca); // 800FFB6C
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 800FFB70
  if (crb(c,2)) { goto L_800FFB88; } // 800FFB74
  c->r[0]=0u+0x00000000u; // 800FFB78
  W32(c->r[7]+0x00000000u,c->r[0]); // 800FFB7C
  W32(c->r[8]+0x00000000u,c->r[0]); // 800FFB80
  goto L_800FFC5C; // 800FFB84
L_800FFB88:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFB88
  {uint32_t ea=c->r[2]+0xFFFFA044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFB8C
  W32(c->r[1]+0x00000014u,c->r[9]); // 800FFB90
  c->f[6]=c->ps1[6]=S(c->f[1]/c->f[0]); // 800FFB94
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[5]=RF64(ea);} // 800FFB98
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FFB9C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800FFBA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800FFBA4
  {uint32_t ea=c->r[2]+0xFFFFA048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FFBA8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 800FFBAC
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800FFBB0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800FFBB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800FFBB8
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[4]); // 800FFBBC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 800FFBC0
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFBC4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800FFBC8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 800FFBCC
  c->f[31]=c->ps1[31]=S(c->f[3]/c->f[2]); // 800FFBD0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FFBD4
  c->lr=0x800FFBDCu; f_800C3504(c); // 800FFBD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FFBDC
  c->r[28]=c->r[4]|c->r[4]; // 800FFBE0
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[2]=RF64(ea);} // 800FFBE4
  c->r[29]=c->r[3]|c->r[3]; // 800FFBE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800FFBEC
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFBF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800FFBF4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800FFBF8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FFBFC
  c->lr=0x800FFC04u; f_800C3504(c); // 800FFC00
  c->r[25]=addc(c,~c->r[30],c->r[25],1); // 800FFC04
  c->r[27]=c->r[4]|c->r[4]; // 800FFC08
  c->r[30]=c->r[3]|c->r[3]; // 800FFC0C
  c->r[26]=addc(c,~c->r[31],c->r[26],c->xer_ca); // 800FFC10
  c->r[3]=c->r[26]|c->r[26]; // 800FFC14
  c->r[4]=c->r[25]|c->r[25]; // 800FFC18
  c->r[5]=c->r[30]|c->r[30]; // 800FFC1C
  c->r[6]=c->r[27]|c->r[27]; // 800FFC20
  c->lr=0x800FFC28u; f_800C2EB0(c); // 800FFC24
  c->r[31]=0u+0x00000001u; // 800FFC28
  c->r[3]=c->r[26]|c->r[26]; // 800FFC2C
  c->r[0]=addc(c,c->r[4],c->r[31],0); // 800FFC30
  W32(c->r[23]+0x00000000u,c->r[0]); // 800FFC34
  c->r[4]=c->r[25]|c->r[25]; // 800FFC38
  c->r[5]=c->r[30]|c->r[30]; // 800FFC3C
  c->r[6]=c->r[27]|c->r[27]; // 800FFC40
  c->lr=0x800FFC48u; f_800C30D4(c); // 800FFC44
  c->r[5]=c->r[29]|c->r[29]; // 800FFC48
  c->r[6]=c->r[28]|c->r[28]; // 800FFC4C
  c->lr=0x800FFC54u; f_800C2EB0(c); // 800FFC50
  c->r[0]=addc(c,c->r[4],c->r[31],0); // 800FFC54
  W32(c->r[24]+0x00000000u,c->r[0]); // 800FFC58
L_800FFC5C:;
  c->r[11]=c->r[1]+0x00000040u; // 800FFC5C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800FFC60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800FFC64
  c->lr=0x800FFC6Cu; f_800C2E88(c); // 800FFC68
  c->r[0]=R32(c->r[1]+0x00000054u); // 800FFC6C
  c->lr=c->r[0]; // 800FFC70
  c->r[1]=c->r[1]+0x00000050u; // 800FFC74
  return; // 800FFC78
}

// fn_800FFC80
void f_800FFC80(Ctx* __restrict c) {
  trace_call(0x800FFC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC80
  c->r[0]=c->lr; // 800FFC84
  c->r[5]=0u+0x43300000u; // 800FFC88
  {uint32_t ea=c->r[2]+0xFFFFA050u; c->f[3]=RF64(ea);} // 800FFC8C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800FFC90
  {uint32_t ea=c->r[2]+0xFFFFA058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFC94
  W32(c->r[1]+0x00000008u,c->r[5]); // 800FFC98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800FFC9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFCA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800FFCA4
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFCA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFCAC
  c->r[31]=c->r[3]|c->r[3]; // 800FFCB0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[1]); // 800FFCB4
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FFCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFCBC
  W32(c->r[1]+0x00000010u,c->r[5]); // 800FFCC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800FFCC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800FFCC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FFCCC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800FFCD0
  c->lr=0x800FFCD8u; f_800C3504(c); // 800FFCD4
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800FFCD8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800FFCDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFCE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFCE4
  c->lr=c->r[0]; // 800FFCE8
  c->r[1]=c->r[1]+0x00000020u; // 800FFCEC
  return; // 800FFCF0
}

// fn_800FFD00
void f_800FFD00(Ctx* __restrict c) {
  trace_call(0x800FFD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD00
  c->r[0]=c->lr; // 800FFD04
  c->r[8]=c->r[3]|c->r[3]; // 800FFD08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFD0C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FFD10
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD14
  if (crb(c,2)) { goto L_800FFD34; } // 800FFD18
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FFD1C
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD20
  if (crb(c,2)) { goto L_800FFD34; } // 800FFD24
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FFD28
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD2C
  if (!crb(c,2)) { goto L_800FFD40; } // 800FFD30
L_800FFD34:;
  c->r[4]=c->r[6]|c->r[6]; // 800FFD34
  c->r[3]=c->r[5]|c->r[5]; // 800FFD38
  goto L_800FFDAC; // 800FFD3C
L_800FFD40:;
  cmps(c,0,(int32_t)c->r[7],0); // 800FFD40
  c->r[0]=0u+0x00000000u; // 800FFD44
  if (crb(c,2)) { goto L_800FFD60; } // 800FFD48
  cmps(c,0,(int32_t)c->r[7],1); // 800FFD4C
  if (crb(c,2)) { goto L_800FFD68; } // 800FFD50
  cmps(c,0,(int32_t)c->r[7],2); // 800FFD54
  if (crb(c,2)) { goto L_800FFD70; } // 800FFD58
  goto L_800FFD74; // 800FFD5C
L_800FFD60:;
  c->r[0]=R32(c->r[2]+0xFFFF9FFCu); // 800FFD60
  goto L_800FFD74; // 800FFD64
L_800FFD68:;
  c->r[0]=R32(c->r[2]+0xFFFF9FF8u); // 800FFD68
  goto L_800FFD74; // 800FFD6C
L_800FFD70:;
  c->r[0]=R32(c->r[2]+0xFFFF9FF4u); // 800FFD70
L_800FFD74:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FFD74
  c->r[0]=0u+0x00000000u; // 800FFD78
  c->r[7]=c->r[1]+0x00000018u; // 800FFD7C
  c->r[4]=R32(c->r[3]+0x00000020u); // 800FFD80
  W32(c->r[1]+0x00000008u,c->r[4]); // 800FFD84
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FFD88
  c->r[4]=R32(c->r[3]+0x00000024u); // 800FFD8C
  c->r[3]=0u+0x00000001u; // 800FFD90
  W32(c->r[1]+0x00000010u,c->r[4]); // 800FFD94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD98
  c->r[9]=R32(c->r[8]+0x00000008u); // 800FFD9C
  c->r[10]=R32(c->r[8]+0x0000000Cu); // 800FFDA0
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFDA4
  c->lr=0x800FFDACu; f_800FAC80(c); // 800FFDA8
L_800FFDAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFDAC
  c->lr=c->r[0]; // 800FFDB0
  c->r[1]=c->r[1]+0x00000020u; // 800FFDB4
  return; // 800FFDB8
}

// fn_800FFDC0
void f_800FFDC0(Ctx* __restrict c) {
  trace_call(0x800FFDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFDC0
  c->r[0]=c->lr; // 800FFDC4
  c->r[4]=0u+0x80390000u; // 800FFDC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFDCC
  c->r[4]=c->r[4]+0xFFFFE220u; // 800FFDD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFDD4
  c->r[31]=0u+0x00000000u; // 800FFDD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFDDC
  c->r[30]=c->r[3]|c->r[3]; // 800FFDE0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FFDE4
  W32(c->r[3]+0x00000008u,c->r[31]); // 800FFDE8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800FFDEC
  W32(c->r[3]+0x00000010u,c->r[31]); // 800FFDF0
  W32(c->r[3]+0x00000014u,c->r[31]); // 800FFDF4
  W32(c->r[3]+0x00000018u,c->r[31]); // 800FFDF8
  W8(c->r[3]+0x0000001Cu,c->r[31]); // 800FFDFC
  W8(c->r[3]+0x0000001Du,c->r[31]); // 800FFE00
  c->r[3]=c->r[3]+0x00000020u; // 800FFE04
  c->lr=0x800FFE0Cu; f_800FF580(c); // 800FFE08
  c->r[3]=c->r[30]+0x00000058u; // 800FFE0C
  c->lr=0x800FFE14u; f_800FFA30(c); // 800FFE10
  W32(c->r[30]+0x00000080u,c->r[31]); // 800FFE14
  c->r[3]=c->r[30]|c->r[30]; // 800FFE18
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 800FFE1C
  W32(c->r[30]+0x00000088u,c->r[31]); // 800FFE20
  W32(c->r[30]+0x00000090u,c->r[31]); // 800FFE24
  W32(c->r[30]+0x00000094u,c->r[31]); // 800FFE28
  W32(c->r[30]+0x00000098u,c->r[31]); // 800FFE2C
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 800FFE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFE34
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFE38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE3C
  c->lr=c->r[0]; // 800FFE40
  c->r[1]=c->r[1]+0x00000010u; // 800FFE44
  return; // 800FFE48
}

// fn_800FFE50
void f_800FFE50(Ctx* __restrict c) {
  trace_call(0x800FFE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE50
  c->r[0]=c->lr; // 800FFE54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFE58
  c->r[11]=c->r[1]+0x00000020u; // 800FFE5C
  c->lr=0x800FFE64u; f_800C2E48(c); // 800FFE60
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800FFE64
  c->r[31]=c->r[3]|c->r[3]; // 800FFE68
  c->r[26]=c->r[4]|c->r[4]; // 800FFE6C
  c->r[5]=0u+0x80390000u; // 800FFE70
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FFE74
  c->r[4]=c->r[5]+0xFFFFE210u; // 800FFE78
  c->r[3]=c->r[26]|c->r[26]; // 800FFE7C
  c->r[5]=c->r[31]+0x00000080u; // 800FFE80
  c->lr=0x800FFE88u; f_8019ECB0(c); // 800FFE84
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE88
  if (crb(c,2)) { goto L_800FFE94; } // 800FFE8C
  goto L_800FFFC8; // 800FFE90
L_800FFE94:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FFE94
  cmps(c,0,(int32_t)c->r[0],0); // 800FFE98
  if (!crb(c,1)) { goto L_800FFFB8; } // 800FFE9C
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FFEA0
  c->r[29]=0u+0x80390000u; // 800FFEA4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800FFEA8
  c->r[6]=0u+0x00000261u; // 800FFEAC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FFEB0
  c->r[5]=c->r[29]+0xFFFFE1F8u; // 800FFEB4
  c->r[7]=0u+0x00000000u; // 800FFEB8
  c->lr=0x800FFEC0u; f_8018F760(c); // 800FFEBC
  cmps(c,0,(int32_t)c->r[3],0); // 800FFEC0
  W32(c->r[31]+0x00000010u,c->r[3]); // 800FFEC4
  if (!crb(c,2)) { goto L_800FFED4; } // 800FFEC8
  c->r[3]=0u+0x0000002Cu; // 800FFECC
  goto L_800FFFC8; // 800FFED0
L_800FFED4:;
  c->r[27]=0u+0x00000000u; // 800FFED4
  c->r[30]=0u+0x00000000u; // 800FFED8
  goto L_800FFF58; // 800FFEDC
L_800FFEE0:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800FFEE0
  c->r[5]=c->r[29]+0xFFFFE1F8u; // 800FFEE4
  c->r[4]=0u+0x000000B0u; // 800FFEE8
  c->r[6]=0u+0x0000026Au; // 800FFEEC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800FFEF0
  c->r[7]=0u+0x00000000u; // 800FFEF4
  c->r[8]=0u+0x00000000u; // 800FFEF8
  c->lr=0x800FFF00u; f_8018F230(c); // 800FFEFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FFF00
  c->r[28]=c->r[3]|c->r[3]; // 800FFF04
  if (crb(c,2)) { goto L_800FFF14; } // 800FFF08
  c->lr=0x800FFF10u; f_800FE1A0(c); // 800FFF0C
  c->r[28]=c->r[3]|c->r[3]; // 800FFF10
L_800FFF14:;
  c->r[5]=R32(c->r[31]+0x00000080u); // 800FFF14
  c->r[3]=c->r[28]|c->r[28]; // 800FFF18
  c->r[4]=c->r[26]|c->r[26]; // 800FFF1C
  c->r[6]=0u+0x0000000Au; // 800FFF20
  c->lr=0x800FFF28u; f_800FE220(c); // 800FFF24
  cmps(c,0,(int32_t)c->r[3],0); // 800FFF28
  if (crb(c,2)) { goto L_800FFF34; } // 800FFF2C
  goto L_800FFFC8; // 800FFF30
L_800FFF34:;
  W32(c->r[28]+0x000000A8u,c->r[31]); // 800FFF34
  c->r[0]=R32(c->r[31]+0x00000010u); // 800FFF38
  c->r[3]=c->r[0]+c->r[30]; cr0(c,c->r[3]); // 800FFF3C
  if (crb(c,2)) { goto L_800FFF50; } // 800FFF40
  c->r[4]=c->r[28]|c->r[28]; // 800FFF44
  c->r[5]=c->r[31]+0x00000020u; // 800FFF48
  c->lr=0x800FFF50u; f_80100E00(c); // 800FFF4C
L_800FFF50:;
  c->r[27]=c->r[27]+0x00000001u; // 800FFF50
  c->r[30]=c->r[30]+0x0000001Cu; // 800FFF54
L_800FFF58:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FFF58
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800FFF5C
  if (crb(c,0)) { IRQCHK(c); goto L_800FFEE0; } // 800FFF60
  c->r[4]=R32(c->r[31]+0x00000010u); // 800FFF64
  c->r[0]=c->r[31]+0x00000020u; // 800FFF68
  W32(c->r[31]+0x00000014u,c->r[4]); // 800FFF6C
  c->r[5]=c->r[31]+0x00000058u; // 800FFF70
  c->r[6]=0u+0x00000000u; // 800FFF74
  c->r[3]=0u+0x00000000u; // 800FFF78
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FFF7C
  c->r[4]=R32(c->r[31]+0x00000014u); // 800FFF80
  W32(c->r[31]+0x00000018u,c->r[4]); // 800FFF84
  c->r[4]=R32(c->r[4]+0x00000004u); // 800FFF88
  W32(c->r[4]+0x0000009Cu,c->r[5]); // 800FFF8C
  goto L_800FFFAC; // 800FFF90
L_800FFF94:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 800FFF94
  c->r[6]=c->r[6]+0x00000001u; // 800FFF98
  c->r[4]=c->r[0]+c->r[3]; // 800FFF9C
  c->r[3]=c->r[3]+0x0000001Cu; // 800FFFA0
  c->r[4]=R32(c->r[4]+0x00000004u); // 800FFFA4
  W32(c->r[4]+0x00000098u,c->r[5]); // 800FFFA8
L_800FFFAC:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FFFAC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800FFFB0
  if (crb(c,0)) { IRQCHK(c); goto L_800FFF94; } // 800FFFB4
L_800FFFB8:;
  c->r[3]=c->r[31]+0x00000020u; // 800FFFB8
  c->r[4]=0u+0x0000000Au; // 800FFFBC
  c->lr=0x800FFFC4u; f_800FF5E0(c); // 800FFFC0
  c->r[3]=0u+0x00000000u; // 800FFFC4
L_800FFFC8:;
  c->r[11]=c->r[1]+0x00000020u; // 800FFFC8
  c->lr=0x800FFFD0u; f_800C2E94(c); // 800FFFCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFFD0
  c->lr=c->r[0]; // 800FFFD4
  c->r[1]=c->r[1]+0x00000020u; // 800FFFD8
  return; // 800FFFDC
}

// fn_800FFFE0
void f_800FFFE0(Ctx* __restrict c) {
  trace_call(0x800FFFE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFFE0
  c->r[0]=c->lr; // 800FFFE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFFE8
  c->r[11]=c->r[1]+0x00000020u; // 800FFFEC
  c->lr=0x800FFFF4u; f_800C2E54(c); // 800FFFF0
  c->r[29]=c->r[3]|c->r[3]; // 800FFFF4
  c->r[30]=0u+0x00000000u; // 800FFFF8
  c->r[31]=0u+0x00000000u; // 800FFFFC
  goto L_80100028; // 80100000
L_80100004:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80100004
  c->r[3]=c->r[0]+c->r[31]; // 80100008
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010000C
  c->lr=0x80100014u; f_800FE310(c); // 80100010
  cmps(c,0,(int32_t)c->r[3],0); // 80100014
  if (crb(c,2)) { goto L_80100020; } // 80100018
  goto L_8010009C; // 8010001C
L_80100020:;
  c->r[30]=c->r[30]+0x00000001u; // 80100020
  c->r[31]=c->r[31]+0x0000001Cu; // 80100024
L_80100028:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80100028
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010002C
  if (crb(c,0)) { IRQCHK(c); goto L_80100004; } // 80100030
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80100034
  c->r[31]=0u+0x80390000u; // 80100038
  c->r[4]=R32(c->r[29]+0x00000010u); // 8010003C
  c->r[5]=c->r[31]+0xFFFFE1F8u; // 80100040
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100044
  c->r[6]=0u+0x0000028Au; // 80100048
  c->r[7]=0u+0x00000000u; // 8010004C
  c->lr=0x80100054u; f_8018F5F0(c); // 80100050
  c->r[3]=R32(c->r[29]+0x00000080u); // 80100054
  c->lr=0x8010005Cu; f_80186BF0(c); // 80100058
  cmps(c,0,(int32_t)c->r[3],0); // 8010005C
  if (crb(c,2)) { goto L_80100068; } // 80100060
  goto L_8010009C; // 80100064
L_80100068:;
  c->r[3]=c->r[29]+0x00000020u; // 80100068
  c->lr=0x80100070u; f_800FF620(c); // 8010006C
  cmps(c,0,(int32_t)c->r[3],0); // 80100070
  if (crb(c,2)) { goto L_8010007C; } // 80100074
  goto L_8010009C; // 80100078
L_8010007C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010007C
  c->r[4]=c->r[29]|c->r[29]; // 80100080
  c->r[5]=c->r[31]+0xFFFFE1F8u; // 80100084
  c->r[6]=0u+0x0000028Du; // 80100088
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010008C
  c->r[7]=0u+0x00000000u; // 80100090
  c->lr=0x80100098u; f_8018F5F0(c); // 80100094
  c->r[3]=0u+0x00000000u; // 80100098
L_8010009C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010009C
  c->lr=0x801000A4u; f_800C2EA0(c); // 801000A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801000A4
  c->lr=c->r[0]; // 801000A8
  c->r[1]=c->r[1]+0x00000020u; // 801000AC
  return; // 801000B0
}

// fn_801000C0
void f_801000C0(Ctx* __restrict c) {
  trace_call(0x801000C0u);
  c->r[0]=0u+0x00000001u; // 801000C0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801000C4
  c->r[3]=0u+0x00000000u; // 801000C8
  return; // 801000CC
}

// fn_801000D0
void f_801000D0(Ctx* __restrict c) {
  trace_call(0x801000D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801000D0
  c->r[0]=c->lr; // 801000D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801000D8
  c->r[11]=c->r[1]+0x00000020u; // 801000DC
  c->lr=0x801000E4u; f_800C2E54(c); // 801000E0
  c->r[29]=c->r[3]|c->r[3]; // 801000E4
  c->r[30]=0u+0x00000000u; // 801000E8
  c->r[31]=0u+0x00000000u; // 801000EC
  goto L_80100118; // 801000F0
L_801000F4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801000F4
  c->r[3]=c->r[0]+c->r[31]; // 801000F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801000FC
  c->lr=0x80100104u; f_800FE3B0(c); // 80100100
  cmps(c,0,(int32_t)c->r[3],0); // 80100104
  if (crb(c,2)) { goto L_80100110; } // 80100108
  goto L_80100130; // 8010010C
L_80100110:;
  c->r[30]=c->r[30]+0x00000001u; // 80100110
  c->r[31]=c->r[31]+0x0000001Cu; // 80100114
L_80100118:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80100118
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010011C
  if (crb(c,0)) { IRQCHK(c); goto L_801000F4; } // 80100120
  c->r[0]=0u+0x00000000u; // 80100124
  W8(c->r[29]+0x0000001Du,c->r[0]); // 80100128
  c->r[3]=0u+0x00000000u; // 8010012C
L_80100130:;
  c->r[11]=c->r[1]+0x00000020u; // 80100130
  c->lr=0x80100138u; f_800C2EA0(c); // 80100134
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100138
  c->lr=c->r[0]; // 8010013C
  c->r[1]=c->r[1]+0x00000020u; // 80100140
  return; // 80100144
}

// fn_80100150
void f_80100150(Ctx* __restrict c) {
  trace_call(0x80100150u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100150
  c->r[0]=c->lr; // 80100154
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100158
  c->r[11]=c->r[1]+0x00000020u; // 8010015C
  c->lr=0x80100164u; f_800C2E54(c); // 80100160
  c->r[29]=c->r[3]|c->r[3]; // 80100164
  c->r[30]=0u+0x00000000u; // 80100168
  c->r[31]=0u+0x00000000u; // 8010016C
  goto L_80100198; // 80100170
L_80100174:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80100174
  c->r[3]=c->r[0]+c->r[31]; // 80100178
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010017C
  c->lr=0x80100184u; f_800FE3B0(c); // 80100180
  cmps(c,0,(int32_t)c->r[3],0); // 80100184
  if (crb(c,2)) { goto L_80100190; } // 80100188
  goto L_80100200; // 8010018C
L_80100190:;
  c->r[30]=c->r[30]+0x00000001u; // 80100190
  c->r[31]=c->r[31]+0x0000001Cu; // 80100194
L_80100198:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80100198
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010019C
  if (crb(c,0)) { IRQCHK(c); goto L_80100174; } // 801001A0
  c->r[3]=c->r[29]+0x00000020u; // 801001A4
  c->lr=0x801001ACu; f_800FF680(c); // 801001A8
  cmps(c,0,(int32_t)c->r[3],0); // 801001AC
  if (crb(c,2)) { goto L_801001B8; } // 801001B0
  goto L_80100200; // 801001B4
L_801001B8:;
  c->r[3]=c->r[29]+0x00000058u; // 801001B8
  c->lr=0x801001C0u; f_800FFA70(c); // 801001BC
  c->r[12]=R32(c->r[29]+0x00000098u); // 801001C0
  c->r[0]=0u+0x00000000u; // 801001C4
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 801001C8
  cmps(c,0,(int32_t)c->r[12],0); // 801001CC
  W32(c->r[29]+0x00000088u,c->r[0]); // 801001D0
  if (crb(c,2)) { goto L_801001FC; } // 801001D4
  c->r[6]=R32(c->r[29]+0x0000009Cu); // 801001D8
  c->r[3]=0u+0x00000002u; // 801001DC
  c->r[4]=0u+0x00000000u; // 801001E0
  c->r[5]=0u+0x00000000u; // 801001E4
  c->ctr=c->r[12]; // 801001E8
  if (true) { c->lr=0x801001F0u; dispatch(c,c->ctr); } // 801001EC
  cmps(c,0,(int32_t)c->r[3],0); // 801001F0
  if (crb(c,2)) { goto L_801001FC; } // 801001F4
  goto L_80100200; // 801001F8
L_801001FC:;
  c->r[3]=0u+0x00000000u; // 801001FC
L_80100200:;
  c->r[11]=c->r[1]+0x00000020u; // 80100200
  c->lr=0x80100208u; f_800C2EA0(c); // 80100204
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100208
  c->lr=c->r[0]; // 8010020C
  c->r[1]=c->r[1]+0x00000020u; // 80100210
  return; // 80100214
}

// fn_80100220
void f_80100220(Ctx* __restrict c) {
  trace_call(0x80100220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100220
  c->r[0]=c->lr; // 80100224
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100228
  c->r[3]=R32(c->r[3]+0x00000080u); // 8010022C
  c->lr=0x80100234u; f_80186C30(c); // 80100230
  cmps(c,0,(int32_t)c->r[3],0); // 80100234
  c->r[0]=0u+0x00000000u; // 80100238
  if (crb(c,2)) { goto L_80100244; } // 8010023C
  c->r[0]=c->r[3]|c->r[3]; // 80100240
L_80100244:;
  c->r[3]=c->r[0]|c->r[0]; // 80100244
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100248
  c->lr=c->r[0]; // 8010024C
  c->r[1]=c->r[1]+0x00000010u; // 80100250
  return; // 80100254
}

// fn_80100260
void f_80100260(Ctx* __restrict c) {
  trace_call(0x80100260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100260
  c->r[0]=c->lr; // 80100264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100268
  c->r[3]=R32(c->r[3]+0x00000080u); // 8010026C
  c->lr=0x80100274u; f_80186C80(c); // 80100270
  cmps(c,0,(int32_t)c->r[3],0); // 80100274
  c->r[0]=0u+0x00000000u; // 80100278
  if (crb(c,2)) { goto L_80100284; } // 8010027C
  c->r[0]=c->r[3]|c->r[3]; // 80100280
L_80100284:;
  c->r[3]=c->r[0]|c->r[0]; // 80100284
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100288
  c->lr=c->r[0]; // 8010028C
  c->r[1]=c->r[1]+0x00000010u; // 80100290
  return; // 80100294
}

// fn_801002A0
void f_801002A0(Ctx* __restrict c) {
  trace_call(0x801002A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801002A0
  c->r[0]=c->lr; // 801002A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801002A8
  c->r[11]=c->r[1]+0x00000020u; // 801002AC
  c->lr=0x801002B4u; f_800C2E50(c); // 801002B0
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 801002B4
  c->r[28]=c->r[3]|c->r[3]; // 801002B8
  c->r[29]=c->r[4]|c->r[4]; // 801002BC
  c->r[30]=0u+0x00000000u; // 801002C0
  c->r[31]=0u+0x00000000u; // 801002C4
  goto L_801002F8; // 801002C8
L_801002CC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801002CC
  c->r[4]=c->r[29]|c->r[29]; // 801002D0
  c->r[3]=c->r[0]+c->r[31]; // 801002D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801002D8
  c->r[3]=c->r[3]+0x00000028u; // 801002DC
  c->lr=0x801002E4u; f_800FDA80(c); // 801002E0
  cmps(c,0,(int32_t)c->r[3],0); // 801002E4
  if (crb(c,2)) { goto L_801002F0; } // 801002E8
  goto L_80100308; // 801002EC
L_801002F0:;
  c->r[30]=c->r[30]+0x00000001u; // 801002F0
  c->r[31]=c->r[31]+0x0000001Cu; // 801002F4
L_801002F8:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801002F8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801002FC
  if (crb(c,0)) { IRQCHK(c); goto L_801002CC; } // 80100300
  c->r[3]=0u+0x00000000u; // 80100304
L_80100308:;
  c->r[11]=c->r[1]+0x00000020u; // 80100308
  c->lr=0x80100310u; f_800C2E9C(c); // 8010030C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100310
  c->lr=c->r[0]; // 80100314
  c->r[1]=c->r[1]+0x00000020u; // 80100318
  return; // 8010031C
}

// fn_80100320
void f_80100320(Ctx* __restrict c) {
  trace_call(0x80100320u);
  cmps(c,0,(int32_t)c->r[4],0); // 80100320
  if (!crb(c,2)) { goto L_80100330; } // 80100324
  c->r[3]=0u+0x00000025u; // 80100328
  return; // 8010032C
L_80100330:;
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80100330
  c->r[3]=0u+0x00000000u; // 80100334
  W8(c->r[4]+0x00000000u,c->r[0]); // 80100338
  return; // 8010033C
}

// fn_80100340
void f_80100340(Ctx* __restrict c) {
  trace_call(0x80100340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100340
  c->r[0]=c->lr; // 80100344
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100348
  c->r[3]=R32(c->r[3]+0x00000080u); // 8010034C
  c->lr=0x80100354u; f_80186DD0(c); // 80100350
  cmps(c,0,(int32_t)c->r[3],0); // 80100354
  c->r[0]=0u+0x00000000u; // 80100358
  if (crb(c,2)) { goto L_80100364; } // 8010035C
  c->r[0]=c->r[3]|c->r[3]; // 80100360
L_80100364:;
  c->r[3]=c->r[0]|c->r[0]; // 80100364
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100368
  c->lr=c->r[0]; // 8010036C
  c->r[1]=c->r[1]+0x00000010u; // 80100370
  return; // 80100374
}

// fn_80100380
void f_80100380(Ctx* __restrict c) {
  trace_call(0x80100380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100380
  c->r[0]=c->lr; // 80100384
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100388
  c->r[3]=R32(c->r[3]+0x00000080u); // 8010038C
  c->lr=0x80100394u; f_80186E20(c); // 80100390
  cmps(c,0,(int32_t)c->r[3],0); // 80100394
  c->r[0]=0u+0x00000000u; // 80100398
  if (crb(c,2)) { goto L_801003A4; } // 8010039C
  c->r[0]=c->r[3]|c->r[3]; // 801003A0
L_801003A4:;
  c->r[3]=c->r[0]|c->r[0]; // 801003A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801003A8
  c->lr=c->r[0]; // 801003AC
  c->r[1]=c->r[1]+0x00000010u; // 801003B0
  return; // 801003B4
}

// fn_801003C0
void f_801003C0(Ctx* __restrict c) {
  trace_call(0x801003C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801003C0
  c->r[0]=c->lr; // 801003C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801003C8
  c->r[11]=c->r[1]+0x00000030u; // 801003CC
  c->lr=0x801003D4u; f_800C2E4C(c); // 801003D0
  c->r[30]=0u+0x00000000u; // 801003D4
  W32(c->r[4]+0x00000000u,c->r[30]); // 801003D8
  c->r[27]=c->r[3]|c->r[3]; // 801003DC
  c->r[28]=c->r[4]|c->r[4]; // 801003E0
  c->r[29]=0u+0x00000000u; // 801003E4
  c->r[31]=0u+0x00000001u; // 801003E8
  goto L_8010042C; // 801003EC
L_801003F0:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801003F0
  c->r[4]=c->r[1]+0x00000008u; // 801003F4
  c->r[3]=c->r[0]+c->r[30]; // 801003F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801003FC
  c->r[3]=c->r[3]+0x00000028u; // 80100400
  c->lr=0x80100408u; f_800FDFF0(c); // 80100404
  cmps(c,0,(int32_t)c->r[3],0); // 80100408
  if (crb(c,2)) { goto L_80100414; } // 8010040C
  goto L_8010043C; // 80100410
L_80100414:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80100414
  cmps(c,0,(int32_t)c->r[0],0); // 80100418
  if (crb(c,2)) { goto L_80100424; } // 8010041C
  W32(c->r[28]+0x00000000u,c->r[31]); // 80100420
L_80100424:;
  c->r[29]=c->r[29]+0x00000001u; // 80100424
  c->r[30]=c->r[30]+0x0000001Cu; // 80100428
L_8010042C:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8010042C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80100430
  if (crb(c,0)) { IRQCHK(c); goto L_801003F0; } // 80100434
  c->r[3]=0u+0x00000000u; // 80100438
L_8010043C:;
  c->r[11]=c->r[1]+0x00000030u; // 8010043C
  c->lr=0x80100444u; f_800C2E98(c); // 80100440
  c->r[0]=R32(c->r[1]+0x00000034u); // 80100444
  c->lr=c->r[0]; // 80100448
  c->r[1]=c->r[1]+0x00000030u; // 8010044C
  return; // 80100450
}

// fn_80100460
void f_80100460(Ctx* __restrict c) {
  trace_call(0x80100460u);
  W32(c->r[3]+0x00000098u,c->r[4]); // 80100460
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 80100464
  c->r[3]=0u+0x00000000u; // 80100468
  return; // 8010046C
}

// fn_80100470
void f_80100470(Ctx* __restrict c) {
  trace_call(0x80100470u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100470
  c->r[0]=c->lr; // 80100474
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100478
  c->r[11]=c->r[1]+0x00000030u; // 8010047C
  c->lr=0x80100484u; f_800C2E54(c); // 80100480
  c->r[31]=c->r[3]|c->r[3]; // 80100484
  c->r[3]=R32(c->r[3]+0x00000008u); // 80100488
  c->r[4]=c->r[1]+0x00000010u; // 8010048C
  c->r[5]=c->r[1]+0x00000014u; // 80100490
  c->lr=0x80100498u; f_8019EFA0(c); // 80100494
  cmps(c,0,(int32_t)c->r[3],0); // 80100498
  if (crb(c,2)) { goto L_801004A4; } // 8010049C
  goto L_801006F0; // 801004A0
L_801004A4:;
  c->r[0]=R32(c->r[31]+0x00000088u); // 801004A4
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 801004A8
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801004AC
  if (crb(c,2)) { goto L_8010058C; } // 801004B0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801004B4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801004B8
  c->r[3]=c->r[3]+0x00000028u; // 801004BC
  c->lr=0x801004C4u; f_800FE090(c); // 801004C0
  cmps(c,0,(int32_t)c->r[3],0); // 801004C4
  c->r[30]=c->r[3]|c->r[3]; // 801004C8
  c->r[29]=0u+0x00000000u; // 801004CC
  if (crb(c,2)) { goto L_801004F0; } // 801004D0
  c->lr=0x801004D8u; f_800FB210(c); // 801004D4
  c->r[12]=R32(c->r[3]+0x00000004u); // 801004D8
  c->r[4]=c->r[30]|c->r[30]; // 801004DC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801004E0
  c->ctr=c->r[12]; // 801004E4
  if (true) { c->lr=0x801004ECu; dispatch(c,c->ctr); } // 801004E8
  c->r[29]=c->r[3]|c->r[3]; // 801004EC
L_801004F0:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801004F0
  c->r[3]=c->r[31]+0x00000020u; // 801004F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801004F8
  c->ctr=c->r[12]; // 801004FC
  if (true) { c->lr=0x80100504u; dispatch(c,c->ctr); } // 80100500
  cmps(c,0,(int32_t)c->r[29],0); // 80100504
  c->r[30]=c->r[3]|c->r[3]; // 80100508
  if (crb(c,2)) { goto L_8010053C; } // 8010050C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80100510
  c->r[3]=c->r[29]|c->r[29]; // 80100514
  c->r[12]=R32(c->r[12]+0x00000028u); // 80100518
  c->ctr=c->r[12]; // 8010051C
  if (true) { c->lr=0x80100524u; dispatch(c,c->ctr); } // 80100520
  cmpu(c,0,c->r[30],c->r[3]); // 80100524
  if (!crb(c,2)) { goto L_8010053C; } // 80100528
  c->r[0]=0u+0x00000000u; // 8010052C
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80100530
  W32(c->r[31]+0x00000088u,c->r[0]); // 80100534
  goto L_8010058C; // 80100538
L_8010053C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010053C
  if (crb(c,2)) { goto L_80100568; } // 80100540
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100544
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 80100548
  c->r[5]=R32(c->r[1]+0x00000010u); // 8010054C
  c->r[3]=R32(c->r[31]+0x00000088u); // 80100550
  c->r[0]=addc(c,~c->r[0],c->r[4],1); // 80100554
  c->r[0]=addc(c,~c->r[5],c->r[3],c->xer_ca); // 80100558
  c->r[0]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 8010055C
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 80100560
  if (crb(c,2)) { goto L_8010058C; } // 80100564
L_80100568:;
  c->r[3]=c->r[31]|c->r[31]; // 80100568
  c->r[4]=c->r[30]|c->r[30]; // 8010056C
  c->lr=0x80100574u; f_80100B90(c); // 80100570
  cmps(c,0,(int32_t)c->r[3],0); // 80100574
  if (crb(c,2)) { goto L_80100580; } // 80100578
  goto L_801006F0; // 8010057C
L_80100580:;
  c->r[0]=0u+0x00000000u; // 80100580
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80100584
  W32(c->r[31]+0x00000088u,c->r[0]); // 80100588
L_8010058C:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8010058C
  c->r[3]=c->r[31]+0x00000058u; // 80100590
  c->r[6]=R32(c->r[1]+0x00000014u); // 80100594
  c->r[7]=c->r[1]+0x0000000Cu; // 80100598
  c->r[8]=c->r[1]+0x00000008u; // 8010059C
  c->lr=0x801005A4u; f_800FFAF0(c); // 801005A0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801005A4
  c->r[0]=R32(c->r[31]+0x00000090u); // 801005A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801005AC
  if (!crb(c,2)) { goto L_801005C4; } // 801005B0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801005B4
  c->r[0]=R32(c->r[31]+0x00000094u); // 801005B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801005BC
  if (crb(c,2)) { goto L_80100610; } // 801005C0
L_801005C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801005C4
  if (crb(c,2)) { goto L_80100600; } // 801005C8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801005CC
  cmps(c,0,(int32_t)c->r[5],0); // 801005D0
  if (crb(c,2)) { goto L_80100600; } // 801005D4
  c->r[12]=R32(c->r[31]+0x00000098u); // 801005D8
  cmps(c,0,(int32_t)c->r[12],0); // 801005DC
  if (crb(c,2)) { goto L_80100600; } // 801005E0
  c->r[6]=R32(c->r[31]+0x0000009Cu); // 801005E4
  c->r[3]=0u+0x00000003u; // 801005E8
  c->ctr=c->r[12]; // 801005EC
  if (true) { c->lr=0x801005F4u; dispatch(c,c->ctr); } // 801005F0
  cmps(c,0,(int32_t)c->r[3],0); // 801005F4
  if (crb(c,2)) { goto L_80100600; } // 801005F8
  goto L_801006F0; // 801005FC
L_80100600:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80100600
  W32(c->r[31]+0x00000090u,c->r[0]); // 80100604
  c->r[0]=R32(c->r[1]+0x00000008u); // 80100608
  W32(c->r[31]+0x00000094u,c->r[0]); // 8010060C
L_80100610:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80100610
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100614
  c->r[3]=c->r[3]+0x00000028u; // 80100618
  c->lr=0x80100620u; f_800FDFC0(c); // 8010061C
  cmps(c,0,(int32_t)c->r[3],0); // 80100620
  if (!crb(c,2)) { goto L_80100654; } // 80100624
  c->r[3]=c->r[31]|c->r[31]; // 80100628
  c->r[4]=0u+0x00000000u; // 8010062C
  c->lr=0x80100634u; f_80100E60(c); // 80100630
  cmps(c,0,(int32_t)c->r[3],0); // 80100634
  c->r[4]=c->r[3]|c->r[3]; // 80100638
  if (crb(c,2)) { goto L_80100654; } // 8010063C
  c->r[3]=c->r[31]|c->r[31]; // 80100640
  c->lr=0x80100648u; f_80100DC0(c); // 80100644
  cmps(c,0,(int32_t)c->r[3],0); // 80100648
  if (crb(c,2)) { goto L_80100654; } // 8010064C
  goto L_801006F0; // 80100650
L_80100654:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80100654
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100658
  c->lr=0x80100660u; f_800FE400(c); // 8010065C
  cmps(c,0,(int32_t)c->r[3],0); // 80100660
  if (crb(c,2)) { goto L_8010066C; } // 80100664
  goto L_801006F0; // 80100668
L_8010066C:;
  c->r[29]=0u+0x00000000u; // 8010066C
  c->r[30]=0u+0x00000000u; // 80100670
  goto L_801006E0; // 80100674
L_80100678:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80100678
  c->r[0]=R32(c->r[31]+0x00000018u); // 8010067C
  c->r[3]=c->r[3]+c->r[30]; // 80100680
  cmpu(c,0,c->r[3],c->r[0]); // 80100684
  if (crb(c,2)) { goto L_801006A0; } // 80100688
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010068C
  c->lr=0x80100694u; f_800FE400(c); // 80100690
  cmps(c,0,(int32_t)c->r[3],0); // 80100694
  if (crb(c,2)) { goto L_801006A0; } // 80100698
  goto L_801006F0; // 8010069C
L_801006A0:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801006A0
  c->r[0]=R32(c->r[31]+0x00000014u); // 801006A4
  c->r[3]=c->r[3]+c->r[30]; // 801006A8
  cmpu(c,0,c->r[3],c->r[0]); // 801006AC
  if (crb(c,2)) { goto L_801006D8; } // 801006B0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801006B4
  c->r[3]=c->r[3]+0x00000028u; // 801006B8
  c->lr=0x801006C0u; f_800FDFC0(c); // 801006BC
  cmps(c,0,(int32_t)c->r[3],0); // 801006C0
  if (!crb(c,2)) { goto L_801006D8; } // 801006C4
  c->r[0]=R32(c->r[31]+0x00000010u); // 801006C8
  c->r[3]=c->r[0]+c->r[30]; // 801006CC
  c->r[0]=c->r[3]+0x0000000Cu; // 801006D0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801006D4
L_801006D8:;
  c->r[29]=c->r[29]+0x00000001u; // 801006D8
  c->r[30]=c->r[30]+0x0000001Cu; // 801006DC
L_801006E0:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801006E0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801006E4
  if (crb(c,0)) { IRQCHK(c); goto L_80100678; } // 801006E8
  c->r[3]=0u+0x00000000u; // 801006EC
L_801006F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801006F0
  c->lr=0x801006F8u; f_800C2EA0(c); // 801006F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801006F8
  c->lr=c->r[0]; // 801006FC
  c->r[1]=c->r[1]+0x00000030u; // 80100700
  return; // 80100704
}

// fn_80100710
void f_80100710(Ctx* __restrict c) {
  trace_call(0x80100710u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100710
  c->r[0]=c->lr; // 80100714
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100718
  c->r[11]=c->r[1]+0x00000030u; // 8010071C
  c->lr=0x80100724u; f_800C2E4C(c); // 80100720
  c->r[27]=c->r[3]|c->r[3]; // 80100724
  c->r[28]=c->r[4]|c->r[4]; // 80100728
  c->r[29]=c->r[5]|c->r[5]; // 8010072C
  c->lr=0x80100734u; f_800FB1F0(c); // 80100730
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100734
  c->r[4]=c->r[28]|c->r[28]; // 80100738
  c->r[12]=R32(c->r[12]+0x00000014u); // 8010073C
  c->ctr=c->r[12]; // 80100740
  if (true) { c->lr=0x80100748u; dispatch(c,c->ctr); } // 80100744
  cmps(c,0,(int32_t)c->r[3],0); // 80100748
  c->r[31]=c->r[3]|c->r[3]; // 8010074C
  if (!crb(c,2)) { goto L_8010075C; } // 80100750
  c->r[3]=0u+0x00000025u; // 80100754
  goto L_80100964; // 80100758
L_8010075C:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 8010075C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80100760
  c->ctr=c->r[12]; // 80100764
  if (true) { c->lr=0x8010076Cu; dispatch(c,c->ctr); } // 80100768
  cmps(c,0,(int32_t)c->r[3],0); // 8010076C
  if (!crb(c,2)) { goto L_80100884; } // 80100770
  c->r[12]=R32(c->r[27]+0x00000020u); // 80100774
  c->r[3]=c->r[27]+0x00000020u; // 80100778
  c->r[4]=c->r[28]|c->r[28]; // 8010077C
  c->r[5]=c->r[1]+0x0000000Cu; // 80100780
  c->r[12]=R32(c->r[12]+0x00000008u); // 80100784
  c->ctr=c->r[12]; // 80100788
  if (true) { c->lr=0x80100790u; dispatch(c,c->ctr); } // 8010078C
  cmps(c,0,(int32_t)c->r[3],0); // 80100790
  if (crb(c,2)) { goto L_8010079C; } // 80100794
  goto L_80100964; // 80100798
L_8010079C:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8010079C
  c->r[0]=c->r[27]+0x00000020u; // 801007A0
  W32(c->r[29]+0x00000004u,c->r[3]); // 801007A4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801007A8
  c->r[0]=R8(c->r[27]+0x0000001Du); // 801007AC
  cmps(c,0,(int32_t)c->r[0],0); // 801007B0
  if (crb(c,2)) { goto L_80100960; } // 801007B4
  c->r[3]=R32(c->r[27]+0x00000014u); // 801007B8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801007BC
  c->r[3]=c->r[3]+0x00000028u; // 801007C0
  c->lr=0x801007C8u; f_800FDFC0(c); // 801007C4
  cmps(c,0,(int32_t)c->r[3],0); // 801007C8
  if (!crb(c,2)) { goto L_80100808; } // 801007CC
  c->r[3]=c->r[27]+0x00000058u; // 801007D0
  c->lr=0x801007D8u; f_800FFA70(c); // 801007D4
  c->r[4]=R32(c->r[27]+0x00000014u); // 801007D8
  c->r[3]=c->r[27]|c->r[27]; // 801007DC
  c->lr=0x801007E4u; f_80100DC0(c); // 801007E0
  cmps(c,0,(int32_t)c->r[3],0); // 801007E4
  if (crb(c,2)) { goto L_801007F0; } // 801007E8
  goto L_80100964; // 801007EC
L_801007F0:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 801007F0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801007F4
  c->lr=0x801007FCu; f_800FE3A0(c); // 801007F8
  cmps(c,0,(int32_t)c->r[3],0); // 801007FC
  if (crb(c,2)) { goto L_80100960; } // 80100800
  goto L_80100964; // 80100804
L_80100808:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100808
  c->r[3]=c->r[31]|c->r[31]; // 8010080C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80100810
  c->ctr=c->r[12]; // 80100814
  if (true) { c->lr=0x8010081Cu; dispatch(c,c->ctr); } // 80100818
  cmps(c,0,(int32_t)c->r[3],0); // 8010081C
  if (crb(c,2)) { goto L_80100960; } // 80100820
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100824
  c->r[3]=c->r[31]|c->r[31]; // 80100828
  c->r[12]=R32(c->r[12]+0x00000030u); // 8010082C
  c->ctr=c->r[12]; // 80100830
  if (true) { c->lr=0x80100838u; dispatch(c,c->ctr); } // 80100834
  cmps(c,0,(int32_t)c->r[3],0); // 80100838
  c->r[6]=c->r[3]|c->r[3]; // 8010083C
  if (crb(c,2)) { goto L_8010085C; } // 80100840
  c->r[3]=c->r[27]|c->r[27]; // 80100844
  c->r[5]=0u+0x00000000u; // 80100848
  c->lr=0x80100850u; f_80100AB0(c); // 8010084C
  cmps(c,0,(int32_t)c->r[3],0); // 80100850
  if (crb(c,2)) { goto L_80100960; } // 80100854
  goto L_80100964; // 80100858
L_8010085C:;
  c->r[3]=c->r[27]|c->r[27]; // 8010085C
  c->r[4]=c->r[28]|c->r[28]; // 80100860
  c->lr=0x80100868u; f_80100B90(c); // 80100864
  cmps(c,0,(int32_t)c->r[3],0); // 80100868
  if (crb(c,2)) { goto L_80100874; } // 8010086C
  goto L_80100964; // 80100870
L_80100874:;
  c->r[0]=0u+0x00000000u; // 80100874
  W32(c->r[27]+0x0000008Cu,c->r[0]); // 80100878
  W32(c->r[27]+0x00000088u,c->r[0]); // 8010087C
  goto L_80100960; // 80100880
L_80100884:;
  cmps(c,0,(int32_t)c->r[3],1); // 80100884
  if (!crb(c,2)) { goto L_80100960; } // 80100888
  c->r[0]=R8(c->r[27]+0x0000001Du); // 8010088C
  cmps(c,0,(int32_t)c->r[0],0); // 80100890
  if (crb(c,2)) { goto L_80100960; } // 80100894
  c->r[3]=c->r[27]|c->r[27]; // 80100898
  c->r[4]=c->r[28]|c->r[28]; // 8010089C
  c->lr=0x801008A4u; f_80100EF0(c); // 801008A0
  cmps(c,0,(int32_t)c->r[3],0); // 801008A4
  c->r[30]=c->r[3]|c->r[3]; // 801008A8
  if (!crb(c,2)) { goto L_801008C0; } // 801008AC
  c->r[3]=c->r[27]|c->r[27]; // 801008B0
  c->r[4]=0u+0x00000001u; // 801008B4
  c->lr=0x801008BCu; f_80100E60(c); // 801008B8
  c->r[30]=c->r[3]|c->r[3]; // 801008BC
L_801008C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801008C0
  if (crb(c,2)) { goto L_80100960; } // 801008C4
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801008C8
  c->r[3]=c->r[30]+0x0000000Cu; // 801008CC
  c->r[4]=c->r[28]|c->r[28]; // 801008D0
  c->r[5]=c->r[1]+0x00000008u; // 801008D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801008D8
  c->ctr=c->r[12]; // 801008DC
  if (true) { c->lr=0x801008E4u; dispatch(c,c->ctr); } // 801008E0
  cmps(c,0,(int32_t)c->r[3],0); // 801008E4
  if (crb(c,2)) { goto L_801008F0; } // 801008E8
  goto L_80100964; // 801008EC
L_801008F0:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801008F0
  c->r[0]=c->r[30]+0x0000000Cu; // 801008F4
  W32(c->r[29]+0x00000004u,c->r[3]); // 801008F8
  c->r[3]=c->r[31]|c->r[31]; // 801008FC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80100900
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100904
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80100908
  c->ctr=c->r[12]; // 8010090C
  if (true) { c->lr=0x80100914u; dispatch(c,c->ctr); } // 80100910
  c->r[4]=R32(c->r[30]+0x00000004u); // 80100914
  W32(c->r[4]+0x000000A0u,c->r[3]); // 80100918
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010091C
  c->lr=0x80100924u; f_800FE3A0(c); // 80100920
  cmps(c,0,(int32_t)c->r[3],0); // 80100924
  if (crb(c,2)) { goto L_80100930; } // 80100928
  goto L_80100964; // 8010092C
L_80100930:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 80100930
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100934
  c->r[3]=c->r[3]+0x00000028u; // 80100938
  c->lr=0x80100940u; f_800FDFC0(c); // 8010093C
  cmps(c,0,(int32_t)c->r[3],0); // 80100940
  if (!crb(c,2)) { goto L_80100960; } // 80100944
  c->r[3]=c->r[27]|c->r[27]; // 80100948
  c->r[4]=c->r[30]|c->r[30]; // 8010094C
  c->lr=0x80100954u; f_80100DC0(c); // 80100950
  cmps(c,0,(int32_t)c->r[3],0); // 80100954
  if (crb(c,2)) { goto L_80100960; } // 80100958
  goto L_80100964; // 8010095C
L_80100960:;
  c->r[3]=0u+0x00000000u; // 80100960
L_80100964:;
  c->r[11]=c->r[1]+0x00000030u; // 80100964
  c->lr=0x8010096Cu; f_800C2E98(c); // 80100968
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010096C
  c->lr=c->r[0]; // 80100970
  c->r[1]=c->r[1]+0x00000030u; // 80100974
  return; // 80100978
}

// fn_80100980
void f_80100980(Ctx* __restrict c) {
  trace_call(0x80100980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100980
  c->r[0]=c->lr; // 80100984
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100988
  c->r[11]=c->r[1]+0x00000020u; // 8010098C
  c->lr=0x80100994u; f_800C2E54(c); // 80100990
  c->r[12]=R32(c->r[3]+0x00000020u); // 80100994
  c->r[29]=c->r[3]|c->r[3]; // 80100998
  c->r[30]=c->r[4]|c->r[4]; // 8010099C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801009A0
  c->ctr=c->r[12]; // 801009A4
  c->r[3]=c->r[3]+0x00000020u; // 801009A8
  if (true) { c->lr=0x801009B0u; dispatch(c,c->ctr); } // 801009AC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801009B0
  c->r[31]=c->r[3]|c->r[3]; // 801009B4
  cmps(c,0,(int32_t)c->r[0],0); // 801009B8
  if (crb(c,2)) { goto L_801009EC; } // 801009BC
  c->r[4]=R32(c->r[30]+0x00000004u); // 801009C0
  cmps(c,0,(int32_t)c->r[4],0); // 801009C4
  if (crb(c,2)) { goto L_801009EC; } // 801009C8
  c->r[3]=c->r[0]|c->r[0]; // 801009CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801009D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801009D4
  c->ctr=c->r[12]; // 801009D8
  if (true) { c->lr=0x801009E0u; dispatch(c,c->ctr); } // 801009DC
  cmps(c,0,(int32_t)c->r[3],0); // 801009E0
  if (crb(c,2)) { goto L_801009EC; } // 801009E4
  goto L_80100A70; // 801009E8
L_801009EC:;
  c->r[12]=R32(c->r[29]+0x00000020u); // 801009EC
  c->r[3]=c->r[29]+0x00000020u; // 801009F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801009F4
  c->ctr=c->r[12]; // 801009F8
  if (true) { c->lr=0x80100A00u; dispatch(c,c->ctr); } // 801009FC
  cmpu(c,0,c->r[3],c->r[31]); // 80100A00
  c->r[31]=c->r[3]|c->r[3]; // 80100A04
  if (crb(c,2)) { goto L_80100A6C; } // 80100A08
  cmps(c,0,(int32_t)c->r[3],0); // 80100A0C
  if (crb(c,2)) { goto L_80100A60; } // 80100A10
  c->lr=0x80100A18u; f_800FB1F0(c); // 80100A14
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100A18
  c->r[4]=c->r[31]|c->r[31]; // 80100A1C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80100A20
  c->ctr=c->r[12]; // 80100A24
  if (true) { c->lr=0x80100A2Cu; dispatch(c,c->ctr); } // 80100A28
  cmps(c,0,(int32_t)c->r[3],0); // 80100A2C
  if (!crb(c,2)) { goto L_80100A3C; } // 80100A30
  c->r[3]=0u+0x00000021u; // 80100A34
  goto L_80100A70; // 80100A38
L_80100A3C:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100A3C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80100A40
  c->ctr=c->r[12]; // 80100A44
  if (true) { c->lr=0x80100A4Cu; dispatch(c,c->ctr); } // 80100A48
  c->r[6]=c->r[3]|c->r[3]; // 80100A4C
  c->r[3]=c->r[29]|c->r[29]; // 80100A50
  c->r[5]=0u+0x00000000u; // 80100A54
  c->lr=0x80100A5Cu; f_80100AB0(c); // 80100A58
  goto L_80100A6C; // 80100A5C
L_80100A60:;
  c->r[0]=0u+0x00000000u; // 80100A60
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 80100A64
  W32(c->r[29]+0x00000088u,c->r[0]); // 80100A68
L_80100A6C:;
  c->r[3]=0u+0x00000000u; // 80100A6C
L_80100A70:;
  c->r[11]=c->r[1]+0x00000020u; // 80100A70
  c->lr=0x80100A78u; f_800C2EA0(c); // 80100A74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100A78
  c->lr=c->r[0]; // 80100A7C
  c->r[1]=c->r[1]+0x00000020u; // 80100A80
  return; // 80100A84
}

// fn_80100A90
void f_80100A90(Ctx* __restrict c) {
  trace_call(0x80100A90u);
  c->r[3]=c->r[3]+0x00000040u; // 80100A90
  f_800FF0D0(c); return; // 80100A94
}

// fn_80100AA0
void f_80100AA0(Ctx* __restrict c) {
  trace_call(0x80100AA0u);
  c->r[3]=c->r[3]+0x00000040u; // 80100AA0
  f_800FF1A0(c); return; // 80100AA4
}

// fn_80100AB0
void f_80100AB0(Ctx* __restrict c) {
  trace_call(0x80100AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100AB0
  c->r[0]=c->lr; // 80100AB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100AB8
  c->r[11]=c->r[1]+0x00000030u; // 80100ABC
  c->lr=0x80100AC4u; f_800C2E54(c); // 80100AC0
  c->r[29]=c->r[3]|c->r[3]; // 80100AC4
  c->r[3]=R32(c->r[3]+0x00000008u); // 80100AC8
  c->r[31]=c->r[5]|c->r[5]; // 80100ACC
  c->r[30]=c->r[6]|c->r[6]; // 80100AD0
  c->r[4]=c->r[1]+0x00000010u; // 80100AD4
  c->r[5]=c->r[1]+0x00000014u; // 80100AD8
  c->lr=0x80100AE0u; f_8019EFA0(c); // 80100ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80100AE0
  if (crb(c,2)) { goto L_80100AEC; } // 80100AE4
  goto L_80100B78; // 80100AE8
L_80100AEC:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80100AEC
  c->r[4]=c->r[1]+0x00000008u; // 80100AF0
  c->r[5]=0u+0x00000000u; // 80100AF4
  c->r[6]=0u+0x00000000u; // 80100AF8
  c->r[7]=0u+0x00000000u; // 80100AFC
  c->r[8]=0u+0x00000000u; // 80100B00
  c->r[9]=0u+0x00000000u; // 80100B04
  c->lr=0x80100B0Cu; f_8019E370(c); // 80100B08
  cmps(c,0,(int32_t)c->r[3],0); // 80100B0C
  if (crb(c,2)) { goto L_80100B18; } // 80100B10
  goto L_80100B78; // 80100B14
L_80100B18:;
  c->r[3]=c->r[31]|c->r[31]; // 80100B18
  c->r[4]=c->r[30]|c->r[30]; // 80100B1C
  c->lr=0x80100B24u; f_800C3398(c); // 80100B20
  {uint32_t ea=c->r[2]+0xFFFFA058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100B24
  c->r[0]=0u+0x43300000u; // 80100B28
  c->r[3]=R32(c->r[1]+0x00000008u); // 80100B2C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 80100B30
  W32(c->r[1]+0x00000018u,c->r[0]); // 80100B34
  c->r[0]=c->r[3]^0x80000000u; // 80100B38
  {uint32_t ea=c->r[2]+0xFFFFA060u; c->f[2]=RF64(ea);} // 80100B3C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80100B40
  {uint32_t ea=c->r[2]+0xFFFFA04Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80100B44
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80100B48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80100B4C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80100B50
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80100B54
  c->lr=0x80100B5Cu; f_800C3504(c); // 80100B58
  c->r[5]=R32(c->r[1]+0x00000014u); // 80100B5C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80100B60
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 80100B64
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80100B68
  W32(c->r[29]+0x0000008Cu,c->r[4]); // 80100B6C
  c->r[3]=0u+0x00000000u; // 80100B70
  W32(c->r[29]+0x00000088u,c->r[0]); // 80100B74
L_80100B78:;
  c->r[11]=c->r[1]+0x00000030u; // 80100B78
  c->lr=0x80100B80u; f_800C2EA0(c); // 80100B7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80100B80
  c->lr=c->r[0]; // 80100B84
  c->r[1]=c->r[1]+0x00000030u; // 80100B88
  return; // 80100B8C
}

// fn_80100B90
void f_80100B90(Ctx* __restrict c) {
  trace_call(0x80100B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100B90
  c->r[0]=c->lr; // 80100B94
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100B98
  c->r[11]=c->r[1]+0x00000030u; // 80100B9C
  c->lr=0x80100BA4u; f_800C2E50(c); // 80100BA0
  c->r[28]=c->r[3]|c->r[3]; // 80100BA4
  c->r[29]=c->r[4]|c->r[4]; // 80100BA8
  c->r[3]=c->r[29]|c->r[29]; // 80100BAC
  c->r[5]=c->r[1]+0x00000008u; // 80100BB0
  c->r[4]=c->r[28]+0x00000020u; // 80100BB4
  c->lr=0x80100BBCu; f_800FEE70(c); // 80100BB8
  cmps(c,0,(int32_t)c->r[3],0); // 80100BBC
  if (crb(c,2)) { goto L_80100BC8; } // 80100BC0
  goto L_80100DA4; // 80100BC4
L_80100BC8:;
  c->lr=0x80100BCCu; f_800FB1F0(c); // 80100BC8
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100BCC
  c->r[4]=c->r[29]|c->r[29]; // 80100BD0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80100BD4
  c->ctr=c->r[12]; // 80100BD8
  if (true) { c->lr=0x80100BE0u; dispatch(c,c->ctr); } // 80100BDC
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100BE0
  c->r[31]=c->r[3]|c->r[3]; // 80100BE4
  c->r[12]=R32(c->r[12]+0x00000024u); // 80100BE8
  c->ctr=c->r[12]; // 80100BEC
  if (true) { c->lr=0x80100BF4u; dispatch(c,c->ctr); } // 80100BF0
  cmps(c,0,(int32_t)c->r[3],1); // 80100BF4
  if (!crb(c,2)) { goto L_80100C38; } // 80100BF8
  c->r[3]=R32(c->r[28]+0x00000014u); // 80100BFC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100C00
  c->lr=0x80100C08u; f_800FE5F0(c); // 80100C04
  cmps(c,0,(int32_t)c->r[3],0); // 80100C08
  if (crb(c,2)) { goto L_80100C14; } // 80100C0C
  goto L_80100DA4; // 80100C10
L_80100C14:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80100C14
  cmps(c,0,(int32_t)c->r[4],0); // 80100C18
  if (crb(c,2)) { goto L_80100DA0; } // 80100C1C
  c->r[3]=R32(c->r[28]+0x00000014u); // 80100C20
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100C24
  c->lr=0x80100C2Cu; f_800FE580(c); // 80100C28
  cmps(c,0,(int32_t)c->r[3],0); // 80100C2C
  if (crb(c,2)) { goto L_80100DA0; } // 80100C30
  goto L_80100DA4; // 80100C34
L_80100C38:;
  cmps(c,0,(int32_t)c->r[3],2); // 80100C38
  if (!crb(c,2)) { goto L_80100DA0; } // 80100C3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80100C40
  c->r[30]=0u+0x00000000u; // 80100C44
  cmps(c,0,(int32_t)c->r[0],0); // 80100C48
  if (crb(c,2)) { goto L_80100C60; } // 80100C4C
  c->r[3]=c->r[28]|c->r[28]; // 80100C50
  c->r[4]=c->r[29]|c->r[29]; // 80100C54
  c->lr=0x80100C5Cu; f_80100EF0(c); // 80100C58
  c->r[30]=c->r[3]|c->r[3]; // 80100C5C
L_80100C60:;
  cmps(c,0,(int32_t)c->r[30],0); // 80100C60
  if (!crb(c,2)) { goto L_80100CA4; } // 80100C64
  c->r[3]=c->r[28]|c->r[28]; // 80100C68
  c->r[4]=0u+0x00000001u; // 80100C6C
  c->lr=0x80100C74u; f_80100E60(c); // 80100C70
  cmps(c,0,(int32_t)c->r[3],0); // 80100C74
  c->r[30]=c->r[3]|c->r[3]; // 80100C78
  if (!crb(c,2)) { goto L_80100C88; } // 80100C7C
  c->r[3]=0u+0x00000000u; // 80100C80
  goto L_80100DA4; // 80100C84
L_80100C88:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100C88
  {uint32_t ea=c->r[2]+0xFFFFA040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100C8C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80100C90
  c->lr=0x80100C98u; f_80186C30(c); // 80100C94
  cmps(c,0,(int32_t)c->r[3],0); // 80100C98
  if (crb(c,2)) { goto L_80100CA4; } // 80100C9C
  goto L_80100DA4; // 80100CA0
L_80100CA4:;
  c->r[0]=0u+0x00000000u; // 80100CA4
  W32(c->r[28]+0x0000006Cu,c->r[0]); // 80100CA8
  c->r[3]=c->r[31]|c->r[31]; // 80100CAC
  W32(c->r[28]+0x00000068u,c->r[0]); // 80100CB0
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100CB4
  c->r[12]=R32(c->r[12]+0x00000028u); // 80100CB8
  c->ctr=c->r[12]; // 80100CBC
  if (true) { c->lr=0x80100CC4u; dispatch(c,c->ctr); } // 80100CC0
  c->r[4]=c->r[3]|c->r[3]; // 80100CC4
  c->r[3]=c->r[28]+0x00000058u; // 80100CC8
  c->lr=0x80100CD0u; f_800FFC80(c); // 80100CCC
  c->r[3]=c->r[28]|c->r[28]; // 80100CD0
  c->r[4]=c->r[30]|c->r[30]; // 80100CD4
  c->lr=0x80100CDCu; f_80100DC0(c); // 80100CD8
  cmps(c,0,(int32_t)c->r[3],0); // 80100CDC
  if (crb(c,2)) { goto L_80100CE8; } // 80100CE0
  goto L_80100DA4; // 80100CE4
L_80100CE8:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80100CE8
  c->r[4]=0u+0x00000001u; // 80100CEC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100CF0
  c->r[3]=c->r[3]+0x00000048u; // 80100CF4
  c->lr=0x80100CFCu; f_800FC9D0(c); // 80100CF8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80100CFC
  cmps(c,0,(int32_t)c->r[0],0); // 80100D00
  if (crb(c,2)) { goto L_80100D40; } // 80100D04
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100D08
  c->r[3]=c->r[31]|c->r[31]; // 80100D0C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80100D10
  c->ctr=c->r[12]; // 80100D14
  if (true) { c->lr=0x80100D1Cu; dispatch(c,c->ctr); } // 80100D18
  c->r[5]=R32(c->r[30]+0x00000004u); // 80100D1C
  c->r[4]=0u+0x00000001u; // 80100D20
  W32(c->r[5]+0x000000A0u,c->r[3]); // 80100D24
  c->r[3]=R32(c->r[30]+0x00000004u); // 80100D28
  c->r[3]=c->r[3]+0x00000048u; // 80100D2C
  c->lr=0x80100D34u; f_800FCA20(c); // 80100D30
  c->r[3]=R32(c->r[30]+0x00000004u); // 80100D34
  c->lr=0x80100D3Cu; f_800FE3A0(c); // 80100D38
  goto L_80100D94; // 80100D3C
L_80100D40:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 80100D40
  c->r[4]=c->r[1]+0x00000010u; // 80100D44
  c->r[5]=c->r[1]+0x00000014u; // 80100D48
  c->lr=0x80100D50u; f_8019EFA0(c); // 80100D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80100D50
  if (crb(c,2)) { goto L_80100D5C; } // 80100D54
  goto L_80100DA4; // 80100D58
L_80100D5C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80100D5C
  c->r[3]=c->r[31]|c->r[31]; // 80100D60
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80100D64
  c->ctr=c->r[12]; // 80100D68
  if (true) { c->lr=0x80100D70u; dispatch(c,c->ctr); } // 80100D6C
  c->r[5]=R32(c->r[1]+0x00000010u); // 80100D70
  c->r[7]=c->r[3]|c->r[3]; // 80100D74
  c->r[6]=R32(c->r[1]+0x00000014u); // 80100D78
  c->r[3]=c->r[28]+0x00000058u; // 80100D7C
  c->lr=0x80100D84u; f_800FFD00(c); // 80100D80
  W32(c->r[1]+0x00000014u,c->r[4]); // 80100D84
  W32(c->r[1]+0x00000010u,c->r[3]); // 80100D88
  W32(c->r[28]+0x0000006Cu,c->r[4]); // 80100D8C
  W32(c->r[28]+0x00000068u,c->r[3]); // 80100D90
L_80100D94:;
  c->r[0]=c->r[28]+0x00000020u; // 80100D94
  W32(c->r[30]+0x00000008u,c->r[0]); // 80100D98
  W32(c->r[28]+0x00000014u,c->r[30]); // 80100D9C
L_80100DA0:;
  c->r[3]=0u+0x00000000u; // 80100DA0
L_80100DA4:;
  c->r[11]=c->r[1]+0x00000030u; // 80100DA4
  c->lr=0x80100DACu; f_800C2E9C(c); // 80100DA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80100DAC
  c->lr=c->r[0]; // 80100DB0
  c->r[1]=c->r[1]+0x00000030u; // 80100DB4
  return; // 80100DB8
}

// fn_80100DC0
void f_80100DC0(Ctx* __restrict c) {
  trace_call(0x80100DC0u);
  cmps(c,0,(int32_t)c->r[4],0); // 80100DC0
  if (!crb(c,2)) { goto L_80100DD0; } // 80100DC4
  c->r[3]=0u+0x00000021u; // 80100DC8
  return; // 80100DCC
L_80100DD0:;
  c->r[5]=R32(c->r[3]+0x00000018u); // 80100DD0
  c->r[6]=0u+0x00000000u; // 80100DD4
  c->r[0]=c->r[3]+0x00000058u; // 80100DD8
  c->r[5]=R32(c->r[5]+0x00000004u); // 80100DDC
  W32(c->r[5]+0x0000009Cu,c->r[6]); // 80100DE0
  c->r[5]=R32(c->r[4]+0x00000004u); // 80100DE4
  W32(c->r[5]+0x0000009Cu,c->r[0]); // 80100DE8
  W32(c->r[3]+0x00000018u,c->r[4]); // 80100DEC
  c->r[3]=0u+0x00000000u; // 80100DF0
  return; // 80100DF4
}

// fn_80100E00
void f_80100E00(Ctx* __restrict c) {
  trace_call(0x80100E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100E00
  c->r[0]=c->lr; // 80100E04
  c->r[6]=0u+0x80390000u; // 80100E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100E0C
  c->r[6]=c->r[6]+0xFFFFE25Cu; // 80100E10
  c->r[0]=c->r[3]+0x0000000Cu; // 80100E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100E18
  c->r[31]=c->r[4]|c->r[4]; // 80100E1C
  c->r[4]=c->r[5]|c->r[5]; // 80100E20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100E24
  c->r[30]=c->r[3]|c->r[3]; // 80100E28
  W32(c->r[3]+0x00000000u,c->r[6]); // 80100E2C
  W32(c->r[3]+0x00000004u,c->r[31]); // 80100E30
  W32(c->r[3]+0x00000008u,c->r[0]); // 80100E34
  c->r[3]=c->r[0]|c->r[0]; // 80100E38
  c->lr=0x80100E40u; f_800FF950(c); // 80100E3C
  W32(c->r[31]+0x000000A4u,c->r[30]); // 80100E40
  c->r[3]=c->r[30]|c->r[30]; // 80100E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100E48
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100E4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100E50
  c->lr=c->r[0]; // 80100E54
  c->r[1]=c->r[1]+0x00000010u; // 80100E58
  return; // 80100E5C
}

// fn_80100E60
void f_80100E60(Ctx* __restrict c) {
  trace_call(0x80100E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100E60
  c->r[0]=c->lr; // 80100E64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100E68
  c->r[11]=c->r[1]+0x00000020u; // 80100E6C
  c->lr=0x80100E74u; f_800C2E50(c); // 80100E70
  c->r[28]=c->r[3]|c->r[3]; // 80100E74
  c->r[29]=c->r[4]|c->r[4]; // 80100E78
  c->r[30]=0u+0x00000000u; // 80100E7C
  c->r[31]=0u+0x00000000u; // 80100E80
  goto L_80100EC0; // 80100E84
L_80100E88:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80100E88
  c->r[0]=R32(c->r[28]+0x00000014u); // 80100E8C
  c->r[3]=c->r[3]+c->r[31]; // 80100E90
  cmpu(c,0,c->r[3],c->r[0]); // 80100E94
  if (crb(c,2)) { goto L_80100EB8; } // 80100E98
  c->r[3]=R32(c->r[3]+0x00000004u); // 80100E9C
  c->lr=0x80100EA4u; f_800FE510(c); // 80100EA0
  cmpu(c,0,c->r[29],c->r[3]); // 80100EA4
  if (!crb(c,2)) { goto L_80100EB8; } // 80100EA8
  c->r[0]=R32(c->r[28]+0x00000010u); // 80100EAC
  c->r[3]=c->r[0]+c->r[31]; // 80100EB0
  goto L_80100ED0; // 80100EB4
L_80100EB8:;
  c->r[30]=c->r[30]+0x00000001u; // 80100EB8
  c->r[31]=c->r[31]+0x0000001Cu; // 80100EBC
L_80100EC0:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80100EC0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80100EC4
  if (crb(c,0)) { IRQCHK(c); goto L_80100E88; } // 80100EC8
  c->r[3]=0u+0x00000000u; // 80100ECC
L_80100ED0:;
  c->r[11]=c->r[1]+0x00000020u; // 80100ED0
  c->lr=0x80100ED8u; f_800C2E9C(c); // 80100ED4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100ED8
  c->lr=c->r[0]; // 80100EDC
  c->r[1]=c->r[1]+0x00000020u; // 80100EE0
  return; // 80100EE4
}

// fn_80100EF0
void f_80100EF0(Ctx* __restrict c) {
  trace_call(0x80100EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100EF0
  c->r[0]=c->lr; // 80100EF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100EF8
  c->r[11]=c->r[1]+0x00000020u; // 80100EFC
  c->lr=0x80100F04u; f_800C2E48(c); // 80100F00
  c->r[26]=c->r[3]|c->r[3]; // 80100F04
  c->r[27]=c->r[4]|c->r[4]; // 80100F08
  c->r[29]=0u+0x00000000u; // 80100F0C
  c->r[31]=0u+0x00000000u; // 80100F10
  goto L_80100FA8; // 80100F14
L_80100F18:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 80100F18
  c->r[0]=R32(c->r[26]+0x00000014u); // 80100F1C
  c->r[28]=c->r[3]+c->r[31]; // 80100F20
  cmpu(c,0,c->r[28],c->r[0]); // 80100F24
  if (crb(c,2)) { goto L_80100FA0; } // 80100F28
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80100F2C
  c->r[3]=c->r[28]+0x0000000Cu; // 80100F30
  c->r[12]=R32(c->r[12]+0x00000014u); // 80100F34
  c->ctr=c->r[12]; // 80100F38
  if (true) { c->lr=0x80100F40u; dispatch(c,c->ctr); } // 80100F3C
  cmpu(c,0,c->r[27],c->r[3]); // 80100F40
  if (!crb(c,2)) { goto L_80100F50; } // 80100F44
  c->r[3]=c->r[28]|c->r[28]; // 80100F48
  goto L_80100FB8; // 80100F4C
L_80100F50:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80100F50
  c->r[3]=c->r[3]+0x00000028u; // 80100F54
  c->lr=0x80100F5Cu; f_800FE090(c); // 80100F58
  c->r[30]=c->r[3]|c->r[3]; // 80100F5C
  c->lr=0x80100F64u; f_800FB210(c); // 80100F60
  c->r[12]=R32(c->r[3]+0x00000004u); // 80100F64
  c->r[4]=c->r[30]|c->r[30]; // 80100F68
  c->r[12]=R32(c->r[12]+0x00000014u); // 80100F6C
  c->ctr=c->r[12]; // 80100F70
  if (true) { c->lr=0x80100F78u; dispatch(c,c->ctr); } // 80100F74
  cmps(c,0,(int32_t)c->r[3],0); // 80100F78
  if (crb(c,2)) { goto L_80100FA0; } // 80100F7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80100F80
  c->r[12]=R32(c->r[12]+0x00000028u); // 80100F84
  c->ctr=c->r[12]; // 80100F88
  if (true) { c->lr=0x80100F90u; dispatch(c,c->ctr); } // 80100F8C
  cmpu(c,0,c->r[27],c->r[3]); // 80100F90
  if (!crb(c,2)) { goto L_80100FA0; } // 80100F94
  c->r[3]=c->r[28]|c->r[28]; // 80100F98
  goto L_80100FB8; // 80100F9C
L_80100FA0:;
  c->r[29]=c->r[29]+0x00000001u; // 80100FA0
  c->r[31]=c->r[31]+0x0000001Cu; // 80100FA4
L_80100FA8:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 80100FA8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80100FAC
  if (crb(c,0)) { IRQCHK(c); goto L_80100F18; } // 80100FB0
  c->r[3]=0u+0x00000000u; // 80100FB4
L_80100FB8:;
  c->r[11]=c->r[1]+0x00000020u; // 80100FB8
  c->lr=0x80100FC0u; f_800C2E94(c); // 80100FBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100FC0
  c->lr=c->r[0]; // 80100FC4
  c->r[1]=c->r[1]+0x00000020u; // 80100FC8
  return; // 80100FCC
}

// fn_80100FD0
void f_80100FD0(Ctx* __restrict c) {
  trace_call(0x80100FD0u);
  c->r[3]=0u+0x00000000u; // 80100FD0
  return; // 80100FD4
}

// fn_80100FE0
void f_80100FE0(Ctx* __restrict c) {
  trace_call(0x80100FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100FE0
  c->r[0]=c->lr; // 80100FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100FE8
  c->r[12]=R32(c->r[3]+0x00000098u); // 80100FEC
  cmps(c,0,(int32_t)c->r[12],0); // 80100FF0
  if (crb(c,2)) { goto L_80101018; } // 80100FF4
  c->r[6]=R32(c->r[3]+0x0000009Cu); // 80100FF8
  c->r[3]=0u+0x00000000u; // 80100FFC
  c->r[5]=0u+0x00000000u; // 80101000
  c->ctr=c->r[12]; // 80101004
  if (true) { c->lr=0x8010100Cu; dispatch(c,c->ctr); } // 80101008
  cmps(c,0,(int32_t)c->r[3],0); // 8010100C
  if (crb(c,2)) { goto L_80101018; } // 80101010
  goto L_8010101C; // 80101014
L_80101018:;
  c->r[3]=0u+0x00000000u; // 80101018
L_8010101C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010101C
  c->lr=c->r[0]; // 80101020
  c->r[1]=c->r[1]+0x00000010u; // 80101024
  return; // 80101028
}

// fn_80101030
void f_80101030(Ctx* __restrict c) {
  trace_call(0x80101030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101030
  c->r[0]=c->lr; // 80101034
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101038
  c->r[12]=R32(c->r[3]+0x00000098u); // 8010103C
  cmps(c,0,(int32_t)c->r[12],0); // 80101040
  if (crb(c,2)) { goto L_80101068; } // 80101044
  c->r[6]=R32(c->r[3]+0x0000009Cu); // 80101048
  c->r[3]=0u+0x00000001u; // 8010104C
  c->r[5]=0u+0x00000000u; // 80101050
  c->ctr=c->r[12]; // 80101054
  if (true) { c->lr=0x8010105Cu; dispatch(c,c->ctr); } // 80101058
  cmps(c,0,(int32_t)c->r[3],0); // 8010105C
  if (crb(c,2)) { goto L_80101068; } // 80101060
  goto L_8010106C; // 80101064
L_80101068:;
  c->r[3]=0u+0x00000000u; // 80101068
L_8010106C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010106C
  c->lr=c->r[0]; // 80101070
  c->r[1]=c->r[1]+0x00000010u; // 80101074
  return; // 80101078
}

// fn_80101080
void f_80101080(Ctx* __restrict c) {
  trace_call(0x80101080u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101080
  c->r[0]=c->lr; // 80101084
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80101088
  c->r[11]=c->r[1]+0x000000B0u; // 8010108C
  c->lr=0x80101094u; f_800C2E44(c); // 80101090
  cmps(c,0,(int32_t)c->r[4],0); // 80101094
  c->r[0]=0u+0x00000000u; // 80101098
  W32(c->r[6]+0x00000000u,c->r[0]); // 8010109C
  c->r[25]=c->r[3]|c->r[3]; // 801010A0
  c->r[28]=c->r[4]|c->r[4]; // 801010A4
  c->r[26]=c->r[5]|c->r[5]; // 801010A8
  c->r[27]=c->r[6]|c->r[6]; // 801010AC
  if (!crb(c,2)) { goto L_801010F0; } // 801010B0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801010B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801010B8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801010BC
  c->ctr=c->r[12]; // 801010C0
  if (true) { c->lr=0x801010C8u; dispatch(c,c->ctr); } // 801010C4
  cmps(c,0,(int32_t)c->r[3],0); // 801010C8
  if (crb(c,2)) { goto L_801010E8; } // 801010CC
  c->r[4]=R32(c->r[25]+0x00000008u); // 801010D0
  c->r[5]=c->r[27]|c->r[27]; // 801010D4
  c->lr=0x801010DCu; f_800FEE70(c); // 801010D8
  cmps(c,0,(int32_t)c->r[3],0); // 801010DC
  if (crb(c,2)) { goto L_801010E8; } // 801010E0
  goto L_801012A8; // 801010E4
L_801010E8:;
  c->r[3]=0u+0x00000000u; // 801010E8
  goto L_801012A8; // 801010EC
L_801010F0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801010F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801010F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801010F8
  c->ctr=c->r[12]; // 801010FC
  if (true) { c->lr=0x80101104u; dispatch(c,c->ctr); } // 80101100
  cmps(c,0,(int32_t)c->r[3],0); // 80101104
  if (!crb(c,2)) { goto L_801011A8; } // 80101108
  c->lr=0x80101110u; f_800FB210(c); // 8010110C
  c->r[12]=R32(c->r[3]+0x00000004u); // 80101110
  c->r[4]=c->r[28]|c->r[28]; // 80101114
  c->r[12]=R32(c->r[12]+0x00000014u); // 80101118
  c->ctr=c->r[12]; // 8010111C
  if (true) { c->lr=0x80101124u; dispatch(c,c->ctr); } // 80101120
  cmps(c,0,(int32_t)c->r[3],0); // 80101124
  if (!crb(c,2)) { goto L_80101134; } // 80101128
  c->r[3]=0u+0x00000021u; // 8010112C
  goto L_801012A8; // 80101130
L_80101134:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80101134
  c->r[12]=R32(c->r[12]+0x00000028u); // 80101138
  c->ctr=c->r[12]; // 8010113C
  if (true) { c->lr=0x80101144u; dispatch(c,c->ctr); } // 80101140
  c->r[30]=c->r[3]|c->r[3]; // 80101144
  c->lr=0x8010114Cu; f_800FB1F0(c); // 80101148
  c->r[12]=R32(c->r[3]+0x00000004u); // 8010114C
  c->r[4]=c->r[30]|c->r[30]; // 80101150
  c->r[12]=R32(c->r[12]+0x00000014u); // 80101154
  c->ctr=c->r[12]; // 80101158
  if (true) { c->lr=0x80101160u; dispatch(c,c->ctr); } // 8010115C
  cmps(c,0,(int32_t)c->r[3],0); // 80101160
  if (!crb(c,2)) { goto L_80101170; } // 80101164
  c->r[3]=0u+0x00000021u; // 80101168
  goto L_801012A8; // 8010116C
L_80101170:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 80101170
  c->r[4]=c->r[28]|c->r[28]; // 80101174
  c->r[5]=c->r[1]+0x00000009u; // 80101178
  c->r[12]=R32(c->r[12]+0x00000018u); // 8010117C
  c->ctr=c->r[12]; // 80101180
  if (true) { c->lr=0x80101188u; dispatch(c,c->ctr); } // 80101184
  cmps(c,0,(int32_t)c->r[3],0); // 80101188
  if (crb(c,2)) { goto L_80101194; } // 8010118C
  goto L_801012A8; // 80101190
L_80101194:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 80101194
  cmps(c,0,(int32_t)c->r[0],0); // 80101198
  if (crb(c,2)) { goto L_801011A8; } // 8010119C
  c->r[3]=0u+0x00000000u; // 801011A0
  goto L_801012A8; // 801011A4
L_801011A8:;
  c->r[0]=0u+0x00000020u; // 801011A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801011AC
  c->lr=0x801011B4u; f_800FB240(c); // 801011B0
  c->r[12]=R32(c->r[3]+0x00000004u); // 801011B4
  c->r[4]=c->r[28]|c->r[28]; // 801011B8
  c->r[5]=c->r[1]+0x00000010u; // 801011BC
  c->r[6]=c->r[1]+0x0000000Cu; // 801011C0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801011C4
  c->ctr=c->r[12]; // 801011C8
  if (true) { c->lr=0x801011D0u; dispatch(c,c->ctr); } // 801011CC
  cmps(c,0,(int32_t)c->r[3],0); // 801011D0
  if (crb(c,2)) { goto L_801011DC; } // 801011D4
  goto L_801012A8; // 801011D8
L_801011DC:;
  c->r[30]=c->r[1]+0x00000010u; // 801011DC
  c->r[29]=0u+0x00000000u; // 801011E0
  c->r[31]=0u+0x00000000u; // 801011E4
  goto L_80101298; // 801011E8
L_801011EC:;
  c->lr=0x801011F0u; f_800FB240(c); // 801011EC
  c->r[12]=R32(c->r[3]+0x00000004u); // 801011F0
  c->r[4]=R32(c->r[30]+c->r[31]); // 801011F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801011F8
  c->ctr=c->r[12]; // 801011FC
  if (true) { c->lr=0x80101204u; dispatch(c,c->ctr); } // 80101200
  cmps(c,0,(int32_t)c->r[3],0); // 80101204
  c->r[28]=c->r[3]|c->r[3]; // 80101208
  if (!crb(c,2)) { goto L_80101218; } // 8010120C
  c->r[3]=0u+0x00000021u; // 80101210
  goto L_801012A8; // 80101214
L_80101218:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80101218
  c->r[3]=c->r[26]|c->r[26]; // 8010121C
  c->r[4]=c->r[28]|c->r[28]; // 80101220
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80101224
  c->ctr=c->r[12]; // 80101228
  if (true) { c->lr=0x80101230u; dispatch(c,c->ctr); } // 8010122C
  cmps(c,0,(int32_t)c->r[3],0); // 80101230
  if (crb(c,2)) { goto L_80101290; } // 80101234
  c->r[12]=R32(c->r[28]+0x00000000u); // 80101238
  c->r[3]=c->r[28]|c->r[28]; // 8010123C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80101240
  c->ctr=c->r[12]; // 80101244
  if (true) { c->lr=0x8010124Cu; dispatch(c,c->ctr); } // 80101248
  c->r[4]=R32(c->r[25]+0x00000008u); // 8010124C
  c->r[5]=c->r[1]+0x00000008u; // 80101250
  c->lr=0x80101258u; f_800FEFE0(c); // 80101254
  cmps(c,0,(int32_t)c->r[3],0); // 80101258
  if (crb(c,2)) { goto L_80101264; } // 8010125C
  goto L_801012A8; // 80101260
L_80101264:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80101264
  cmps(c,0,(int32_t)c->r[0],0); // 80101268
  if (crb(c,2)) { goto L_80101290; } // 8010126C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80101270
  c->r[3]=c->r[28]|c->r[28]; // 80101274
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80101278
  c->ctr=c->r[12]; // 8010127C
  if (true) { c->lr=0x80101284u; dispatch(c,c->ctr); } // 80101280
  W32(c->r[27]+0x00000000u,c->r[3]); // 80101284
  c->r[3]=0u+0x00000000u; // 80101288
  goto L_801012A8; // 8010128C
L_80101290:;
  c->r[29]=c->r[29]+0x00000001u; // 80101290
  c->r[31]=c->r[31]+0x00000004u; // 80101294
L_80101298:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80101298
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8010129C
  if (crb(c,0)) { IRQCHK(c); goto L_801011EC; } // 801012A0
  c->r[3]=0u+0x00000000u; // 801012A4
L_801012A8:;
  c->r[11]=c->r[1]+0x000000B0u; // 801012A8
  c->lr=0x801012B0u; f_800C2E90(c); // 801012AC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801012B0
  c->lr=c->r[0]; // 801012B4
  c->r[1]=c->r[1]+0x000000B0u; // 801012B8
  return; // 801012BC
}

// fn_801012C0
void f_801012C0(Ctx* __restrict c) {
  trace_call(0x801012C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801012C0
  c->r[0]=c->lr; // 801012C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801012C8
  c->r[11]=c->r[1]+0x00000020u; // 801012CC
  c->lr=0x801012D4u; f_800C2E50(c); // 801012D0
  c->r[29]=c->r[4]|c->r[4]; // 801012D4
  c->r[28]=c->r[3]|c->r[3]; // 801012D8
  c->r[3]=c->r[29]|c->r[29]; // 801012DC
  c->r[4]=0u+0x00000017u; // 801012E0
  c->r[5]=0u+0x000000A0u; // 801012E4
  c->lr=0x801012ECu; f_8018FD10(c); // 801012E8
  c->r[0]=R32(c->r[28]+0x00000010u); // 801012EC
  cmps(c,0,(int32_t)c->r[0],0); // 801012F0
  if (crb(c,2)) { goto L_8010135C; } // 801012F4
  c->r[30]=0u+0x00000000u; // 801012F8
  c->r[31]=0u+0x00000000u; // 801012FC
  goto L_80101340; // 80101300
L_80101304:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80101304
  c->r[3]=c->r[0]+c->r[31]; // 80101308
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010130C
  cmps(c,0,(int32_t)c->r[3],0); // 80101310
  if (crb(c,2)) { goto L_80101338; } // 80101314
  c->r[12]=R32(c->r[3]+0x00000004u); // 80101318
  c->r[4]=c->r[29]|c->r[29]; // 8010131C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80101320
  c->ctr=c->r[12]; // 80101324
  if (true) { c->lr=0x8010132Cu; dispatch(c,c->ctr); } // 80101328
  cmps(c,0,(int32_t)c->r[3],0); // 8010132C
  if (crb(c,2)) { goto L_80101338; } // 80101330
  goto L_80101384; // 80101334
L_80101338:;
  c->r[30]=c->r[30]+0x00000001u; // 80101338
  c->r[31]=c->r[31]+0x0000001Cu; // 8010133C
L_80101340:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80101340
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80101344
  if (crb(c,0)) { IRQCHK(c); goto L_80101304; } // 80101348
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 8010134C
  c->r[3]=c->r[29]|c->r[29]; // 80101350
  c->r[4]=0u+0x00000017u; // 80101354
  c->lr=0x8010135Cu; f_8018FD10(c); // 80101358
L_8010135C:;
  c->r[12]=R32(c->r[28]+0x00000020u); // 8010135C
  c->r[3]=c->r[28]+0x00000020u; // 80101360
  c->r[4]=c->r[29]|c->r[29]; // 80101364
  c->r[12]=R32(c->r[12]+0x00000020u); // 80101368
  c->ctr=c->r[12]; // 8010136C
  if (true) { c->lr=0x80101374u; dispatch(c,c->ctr); } // 80101370
  cmps(c,0,(int32_t)c->r[3],0); // 80101374
  if (crb(c,2)) { goto L_80101380; } // 80101378
  goto L_80101384; // 8010137C
L_80101380:;
  c->r[3]=0u+0x00000000u; // 80101380
L_80101384:;
  c->r[11]=c->r[1]+0x00000020u; // 80101384
  c->lr=0x8010138Cu; f_800C2E9C(c); // 80101388
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010138C
  c->lr=c->r[0]; // 80101390
  c->r[1]=c->r[1]+0x00000020u; // 80101394
  return; // 80101398
}

// fn_801013A0
void f_801013A0(Ctx* __restrict c) {
  trace_call(0x801013A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801013A0
  c->r[0]=c->lr; // 801013A4
  cmps(c,0,(int32_t)c->r[4],0); // 801013A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801013AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801013B0
  c->r[31]=c->r[3]|c->r[3]; // 801013B4
  if (crb(c,2)) { goto L_801013F0; } // 801013B8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801013BC
  cmps(c,0,(int32_t)c->r[0],0); // 801013C0
  if (!crb(c,2)) { goto L_80101414; } // 801013C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801013C8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801013CC
  c->ctr=c->r[12]; // 801013D0
  if (true) { c->lr=0x801013D8u; dispatch(c,c->ctr); } // 801013D4
  cmps(c,0,(int32_t)c->r[3],0); // 801013D8
  if (crb(c,2)) { goto L_801013E4; } // 801013DC
  goto L_80101418; // 801013E0
L_801013E4:;
  c->r[0]=0u+0x00000001u; // 801013E4
  W8(c->r[31]+0x00000004u,c->r[0]); // 801013E8
  goto L_80101414; // 801013EC
L_801013F0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801013F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801013F4
  c->ctr=c->r[12]; // 801013F8
  if (true) { c->lr=0x80101400u; dispatch(c,c->ctr); } // 801013FC
  cmps(c,0,(int32_t)c->r[3],0); // 80101400
  if (crb(c,2)) { goto L_8010140C; } // 80101404
  goto L_80101418; // 80101408
L_8010140C:;
  c->r[0]=0u+0x00000000u; // 8010140C
  W8(c->r[31]+0x00000004u,c->r[0]); // 80101410
L_80101414:;
  c->r[3]=0u+0x00000000u; // 80101414
L_80101418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010141C
  c->lr=c->r[0]; // 80101420
  c->r[1]=c->r[1]+0x00000010u; // 80101424
  return; // 80101428
}

// fn_80101430
void f_80101430(Ctx* __restrict c) {
  trace_call(0x80101430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101430
  c->r[0]=c->lr; // 80101434
  cmps(c,0,(int32_t)c->r[4],0); // 80101438
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010143C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101440
  c->r[31]=c->r[3]|c->r[3]; // 80101444
  if (crb(c,2)) { goto L_80101480; } // 80101448
  c->r[0]=R8(c->r[3]+0x00000004u); // 8010144C
  cmps(c,0,(int32_t)c->r[0],0); // 80101450
  if (!crb(c,2)) { goto L_801014A4; } // 80101454
  c->r[12]=R32(c->r[3]+0x00000000u); // 80101458
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8010145C
  c->ctr=c->r[12]; // 80101460
  if (true) { c->lr=0x80101468u; dispatch(c,c->ctr); } // 80101464
  cmps(c,0,(int32_t)c->r[3],0); // 80101468
  if (crb(c,2)) { goto L_80101474; } // 8010146C
  goto L_801014A8; // 80101470
L_80101474:;
  c->r[0]=0u+0x00000001u; // 80101474
  W8(c->r[31]+0x00000004u,c->r[0]); // 80101478
  goto L_801014A4; // 8010147C
L_80101480:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80101480
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80101484
  c->ctr=c->r[12]; // 80101488
  if (true) { c->lr=0x80101490u; dispatch(c,c->ctr); } // 8010148C
  cmps(c,0,(int32_t)c->r[3],0); // 80101490
  if (crb(c,2)) { goto L_8010149C; } // 80101494
  goto L_801014A8; // 80101498
L_8010149C:;
  c->r[0]=0u+0x00000000u; // 8010149C
  W8(c->r[31]+0x00000004u,c->r[0]); // 801014A0
L_801014A4:;
  c->r[3]=0u+0x00000000u; // 801014A4
L_801014A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801014A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801014AC
  c->lr=c->r[0]; // 801014B0
  c->r[1]=c->r[1]+0x00000010u; // 801014B4
  return; // 801014B8
}

// fn_801014C0
void f_801014C0(Ctx* __restrict c) {
  trace_call(0x801014C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801014C0
  c->r[0]=c->lr; // 801014C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801014C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801014CC
  c->r[31]=c->r[3]|c->r[3]; // 801014D0
  c->lr=0x801014D8u; f_80101510(c); // 801014D4
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801014D8
  c->r[3]=0u+0x80390000u; // 801014DC
  c->r[3]=c->r[3]+0xFFFFE428u; // 801014E0
  c->r[0]=0u+0x00000001u; // 801014E4
  W32(c->r[31]+0x00000010u,c->r[3]); // 801014E8
  c->r[3]=c->r[31]|c->r[31]; // 801014EC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801014F0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801014F4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801014F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801014FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101500
  c->lr=c->r[0]; // 80101504
  c->r[1]=c->r[1]+0x00000010u; // 80101508
  return; // 8010150C
}

// fn_80101510
void f_80101510(Ctx* __restrict c) {
  trace_call(0x80101510u);
  c->r[0]=0u+0x00000000u; // 80101510
  W32(c->r[3]+0x00000000u,c->r[3]); // 80101514
  W32(c->r[3]+0x00000004u,c->r[3]); // 80101518
  W32(c->r[3]+0x00000008u,c->r[0]); // 8010151C
  return; // 80101520
}

// fn_80101530
void f_80101530(Ctx* __restrict c) {
  trace_call(0x80101530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101530
  c->r[0]=c->lr; // 80101534
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010153C
  c->r[31]=c->r[3]|c->r[3]; // 80101540
  c->lr=0x80101548u; f_80101510(c); // 80101544
  c->r[4]=0u+0x80390000u; // 80101548
  c->r[3]=c->r[31]|c->r[31]; // 8010154C
  c->r[4]=c->r[4]+0xFFFFE3D0u; // 80101550
  W32(c->r[31]+0x00000010u,c->r[4]); // 80101554
  c->r[4]=0u+0x00000000u; // 80101558
  c->lr=0x80101560u; f_80101580(c); // 8010155C
  c->r[3]=c->r[31]|c->r[31]; // 80101560
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101564
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101568
  c->lr=c->r[0]; // 8010156C
  c->r[1]=c->r[1]+0x00000010u; // 80101570
  return; // 80101574
}

// fn_80101580
void f_80101580(Ctx* __restrict c) {
  trace_call(0x80101580u);
  c->r[0]=0u+0x00000000u; // 80101580
  W32(c->r[3]+0x00000014u,c->r[4]); // 80101584
  W32(c->r[3]+0x00000018u,c->r[0]); // 80101588
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8010158C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80101590
  W16(c->r[3]+0x00000024u,c->r[0]); // 80101594
  c->r[3]=0u+0x00000000u; // 80101598
  return; // 8010159C
}

// fn_801015A0
void f_801015A0(Ctx* __restrict c) {
  trace_call(0x801015A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801015A0
  c->r[0]=c->lr; // 801015A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801015A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801015AC
  c->r[31]=c->r[3]|c->r[3]; // 801015B0
  c->r[4]=R32(c->r[3]+0x00000014u); // 801015B4
  cmps(c,0,(int32_t)c->r[4],0); // 801015B8
  if (crb(c,2)) { goto L_801015E4; } // 801015BC
  c->r[0]=R32(c->r[4]+0x00000018u); // 801015C0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801015C4
  W32(c->r[4]+0x00000018u,c->r[0]); // 801015C8
  if (!crb(c,2)) { goto L_801015E4; } // 801015CC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801015D0
  c->lr=0x801015D8u; f_80101880(c); // 801015D4
  cmps(c,0,(int32_t)c->r[3],0); // 801015D8
  if (crb(c,2)) { goto L_801015E4; } // 801015DC
  goto L_8010160C; // 801015E0
L_801015E4:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801015E4
  cmps(c,0,(int32_t)c->r[0],0); // 801015E8
  if (!crb(c,2)) { goto L_80101600; } // 801015EC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801015F0
  cmps(c,0,(int32_t)c->r[3],0); // 801015F4
  if (crb(c,2)) { goto L_80101600; } // 801015F8
  c->lr=0x80101600u; f_80131140(c); // 801015FC
L_80101600:;
  c->r[0]=0u+0x00000000u; // 80101600
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80101604
  c->r[3]=0u+0x00000000u; // 80101608
L_8010160C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010160C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101610
  c->lr=c->r[0]; // 80101614
  c->r[1]=c->r[1]+0x00000010u; // 80101618
  return; // 8010161C
}

// fn_80101620
void f_80101620(Ctx* __restrict c) {
  trace_call(0x80101620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101620
  c->r[0]=c->lr; // 80101624
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010162C
  c->r[31]=c->r[3]|c->r[3]; // 80101630
  W32(c->r[1]+0x00000008u,c->r[30]); // 80101634
  c->r[30]=c->r[4]|c->r[4]; // 80101638
  c->r[5]=R32(c->r[3]+0x00000020u); // 8010163C
  cmps(c,0,(int32_t)c->r[5],0); // 80101640
  if (!crb(c,2)) { goto L_80101650; } // 80101644
  c->r[3]=0u+0x00000021u; // 80101648
  goto L_80101738; // 8010164C
L_80101650:;
  c->r[3]=R32(c->r[5]+0x00000038u); // 80101650
  cmps(c,0,(int32_t)c->r[3],0); // 80101654
  if (!crb(c,2)) { goto L_80101664; } // 80101658
  c->r[3]=0u+0x00000021u; // 8010165C
  goto L_80101738; // 80101660
L_80101664:;
  c->r[3]=R32(c->r[3]+0x000000ACu); // 80101664
  cmps(c,0,(int32_t)c->r[3],0); // 80101668
  if (crb(c,2)) { goto L_80101678; } // 8010166C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80101670
  goto L_8010167C; // 80101674
L_80101678:;
  c->r[0]=0u+0x00000000u; // 80101678
L_8010167C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8010167C
  if (!crb(c,2)) { goto L_80101694; } // 80101680
  c->r[3]=c->r[30]|c->r[30]; // 80101684
  c->r[4]=0u+0x0000002Au; // 80101688
  c->r[5]=0u+0x00000028u; // 8010168C
  c->lr=0x80101694u; f_8018FD10(c); // 80101690
L_80101694:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80101694
  cmps(c,0,(int32_t)c->r[3],0); // 80101698
  if (crb(c,2)) { goto L_801016C0; } // 8010169C
  c->r[12]=R32(c->r[3]+0x00000004u); // 801016A0
  c->r[4]=c->r[30]|c->r[30]; // 801016A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801016A8
  c->ctr=c->r[12]; // 801016AC
  if (true) { c->lr=0x801016B4u; dispatch(c,c->ctr); } // 801016B0
  cmps(c,0,(int32_t)c->r[3],0); // 801016B4
  if (crb(c,2)) { goto L_801016C0; } // 801016B8
  goto L_80101738; // 801016BC
L_801016C0:;
  c->r[31]=R32(c->r[31]+0x0000001Cu); // 801016C0
  cmps(c,0,(int32_t)c->r[31],0); // 801016C4
  if (crb(c,2)) { goto L_80101734; } // 801016C8
  cmps(c,0,(int32_t)c->r[30],0); // 801016CC
  if (crb(c,2)) { goto L_80101704; } // 801016D0
  c->r[0]=R8(c->r[31]+0x00000028u); // 801016D4
  cmps(c,0,(int32_t)c->r[0],0); // 801016D8
  if (!crb(c,2)) { goto L_80101724; } // 801016DC
  c->r[3]=c->r[31]|c->r[31]; // 801016E0
  c->r[4]=c->r[30]|c->r[30]; // 801016E4
  c->lr=0x801016ECu; f_80144AF0(c); // 801016E8
  cmps(c,0,(int32_t)c->r[3],0); // 801016EC
  if (crb(c,2)) { goto L_801016F8; } // 801016F0
  goto L_80101728; // 801016F4
L_801016F8:;
  c->r[0]=0u+0x00000001u; // 801016F8
  W8(c->r[31]+0x00000028u,c->r[0]); // 801016FC
  goto L_80101724; // 80101700
L_80101704:;
  c->r[3]=c->r[31]|c->r[31]; // 80101704
  c->r[4]=c->r[30]|c->r[30]; // 80101708
  c->lr=0x80101710u; f_80144AF0(c); // 8010170C
  cmps(c,0,(int32_t)c->r[3],0); // 80101710
  if (crb(c,2)) { goto L_8010171C; } // 80101714
  goto L_80101728; // 80101718
L_8010171C:;
  c->r[0]=0u+0x00000000u; // 8010171C
  W8(c->r[31]+0x00000028u,c->r[0]); // 80101720
L_80101724:;
  c->r[3]=0u+0x00000000u; // 80101724
L_80101728:;
  cmps(c,0,(int32_t)c->r[3],0); // 80101728
  if (crb(c,2)) { goto L_80101734; } // 8010172C
  goto L_80101738; // 80101730
L_80101734:;
  c->r[3]=0u+0x00000000u; // 80101734
L_80101738:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010173C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80101740
  c->lr=c->r[0]; // 80101744
  c->r[1]=c->r[1]+0x00000010u; // 80101748
  return; // 8010174C
}

// fn_80101750
void f_80101750(Ctx* __restrict c) {
  trace_call(0x80101750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101750
  c->r[0]=c->lr; // 80101754
  cmps(c,0,(int32_t)c->r[4],0); // 80101758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010175C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101760
  c->r[31]=c->r[3]|c->r[3]; // 80101764
  if (crb(c,2)) { goto L_801017A0; } // 80101768
  c->r[0]=R8(c->r[3]+0x00000000u); // 8010176C
  cmps(c,0,(int32_t)c->r[0],0); // 80101770
  if (!crb(c,2)) { goto L_801017C4; } // 80101774
  c->r[12]=R32(c->r[3]+0x00000004u); // 80101778
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010177C
  c->ctr=c->r[12]; // 80101780
  if (true) { c->lr=0x80101788u; dispatch(c,c->ctr); } // 80101784
  cmps(c,0,(int32_t)c->r[3],0); // 80101788
  if (crb(c,2)) { goto L_80101794; } // 8010178C
  goto L_801017C8; // 80101790
L_80101794:;
  c->r[0]=0u+0x00000001u; // 80101794
  W8(c->r[31]+0x00000000u,c->r[0]); // 80101798
  goto L_801017C4; // 8010179C
L_801017A0:;
  c->r[12]=R32(c->r[3]+0x00000004u); // 801017A0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801017A4
  c->ctr=c->r[12]; // 801017A8
  if (true) { c->lr=0x801017B0u; dispatch(c,c->ctr); } // 801017AC
  cmps(c,0,(int32_t)c->r[3],0); // 801017B0
  if (crb(c,2)) { goto L_801017BC; } // 801017B4
  goto L_801017C8; // 801017B8
L_801017BC:;
  c->r[0]=0u+0x00000000u; // 801017BC
  W8(c->r[31]+0x00000000u,c->r[0]); // 801017C0
L_801017C4:;
  c->r[3]=0u+0x00000000u; // 801017C4
L_801017C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801017C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801017CC
  c->lr=c->r[0]; // 801017D0
  c->r[1]=c->r[1]+0x00000010u; // 801017D4
  return; // 801017D8
}

// fn_801017E0
void f_801017E0(Ctx* __restrict c) {
  trace_call(0x801017E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801017E0
  c->r[0]=c->lr; // 801017E4
  c->r[4]=0u+0x80390000u; // 801017E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801017EC
  c->r[4]=c->r[4]+0xFFFFE400u; // 801017F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801017F4
  c->r[31]=c->r[3]|c->r[3]; // 801017F8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801017FC
  c->r[3]=c->r[3]+0x00000030u; // 80101800
  c->lr=0x80101808u; f_80101510(c); // 80101804
  c->r[3]=c->r[31]|c->r[31]; // 80101808
  c->r[4]=0u+0x00000000u; // 8010180C
  c->lr=0x80101814u; f_80101830(c); // 80101810
  c->r[3]=c->r[31]|c->r[31]; // 80101814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101818
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010181C
  c->lr=c->r[0]; // 80101820
  c->r[1]=c->r[1]+0x00000010u; // 80101824
  return; // 80101828
}

// fn_80101830
void f_80101830(Ctx* __restrict c) {
  trace_call(0x80101830u);
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101830
  c->r[4]=0u+0x00000000u; // 80101834
  c->r[0]=0u+0xFFFFFFFFu; // 80101838
  c->r[5]=0u+0x00000004u; // 8010183C
  W32(c->r[3]+0x00000010u,c->r[5]); // 80101840
  W32(c->r[3]+0x00000014u,c->r[4]); // 80101844
  W32(c->r[3]+0x00000018u,c->r[4]); // 80101848
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8010184C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80101850
  W32(c->r[3]+0x00000024u,c->r[0]); // 80101854
  W32(c->r[3]+0x00000028u,c->r[4]); // 80101858
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8010185C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 80101860
  W32(c->r[3]+0x00000040u,c->r[4]); // 80101864
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80101868
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8010186C
  c->r[3]=0u+0x00000000u; // 80101870
  return; // 80101874
}

// fn_80101880
void f_80101880(Ctx* __restrict c) {
  trace_call(0x80101880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101880
  c->r[0]=c->lr; // 80101884
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101888
  c->r[11]=c->r[1]+0x00000020u; // 8010188C
  c->lr=0x80101894u; f_800C2E4C(c); // 80101890
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80101894
  c->r[27]=c->r[3]|c->r[3]; // 80101898
  cmps(c,0,(int32_t)c->r[4],0); // 8010189C
  if (crb(c,2)) { goto L_801018C0; } // 801018A0
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 801018A4
  c->r[5]=0u+0x80390000u; // 801018A8
  c->r[6]=0u+0x000000BBu; // 801018AC
  c->r[7]=0u+0x00000000u; // 801018B0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801018B4
  c->r[5]=c->r[5]+0xFFFFE3B8u; // 801018B8
  c->lr=0x801018C0u; f_8018F5F0(c); // 801018BC
L_801018C0:;
  c->r[4]=R32(c->r[27]+0x00000030u); // 801018C0
  c->r[31]=c->r[27]+0x00000030u; // 801018C4
  c->r[30]=0u+0x80390000u; // 801018C8
  c->r[29]=0u+0x00000000u; // 801018CC
  goto L_80101920; // 801018D0
L_801018D4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801018D4
  c->r[28]=R32(c->r[4]+0x00000000u); // 801018D8
  W32(c->r[3]+0x00000000u,c->r[28]); // 801018DC
  c->r[3]=R32(c->r[4]+0x00000000u); // 801018E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801018E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801018E8
  W32(c->r[4]+0x00000004u,c->r[4]); // 801018EC
  W32(c->r[4]+0x00000000u,c->r[4]); // 801018F0
  W32(c->r[4]+0x00000008u,c->r[29]); // 801018F4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801018F8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801018FC
  if (!crb(c,2)) { goto L_8010191C; } // 80101900
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80101904
  c->r[5]=c->r[30]+0xFFFFE3B8u; // 80101908
  c->r[6]=0u+0x000000CAu; // 8010190C
  c->r[7]=0u+0x00000000u; // 80101910
  c->r[3]=R32(c->r[3]+0x00000004u); // 80101914
  c->lr=0x8010191Cu; f_8018F5F0(c); // 80101918
L_8010191C:;
  c->r[4]=c->r[28]|c->r[28]; // 8010191C
L_80101920:;
  cmpu(c,0,c->r[4],c->r[31]); // 80101920
  if (!crb(c,2)) { IRQCHK(c); goto L_801018D4; } // 80101924
  c->r[4]=R32(c->r[27]+0x0000003Cu); // 80101928
  cmps(c,0,(int32_t)c->r[4],0); // 8010192C
  if (crb(c,2)) { goto L_80101950; } // 80101930
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80101934
  c->r[5]=0u+0x80390000u; // 80101938
  c->r[6]=0u+0x000000D0u; // 8010193C
  c->r[7]=0u+0x00000000u; // 80101940
  c->r[3]=R32(c->r[3]+0x00000004u); // 80101944
  c->r[5]=c->r[5]+0xFFFFE3B8u; // 80101948
  c->lr=0x80101950u; f_8018F5F0(c); // 8010194C
L_80101950:;
  c->r[11]=c->r[1]+0x00000020u; // 80101950
  c->r[3]=0u+0x00000000u; // 80101954
  c->lr=0x8010195Cu; f_800C2E98(c); // 80101958
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010195C
  c->lr=c->r[0]; // 80101960
  c->r[1]=c->r[1]+0x00000020u; // 80101964
  return; // 80101968
}

// fn_80101970
void f_80101970(Ctx* __restrict c) {
  trace_call(0x80101970u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101970
  c->r[0]=c->lr; // 80101974
  c->r[7]=0u+0x00000000u; // 80101978
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8010197C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80101980
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80101984
  c->f[31]=c->f[1]; // 80101988
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8010198C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 80101990
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 80101994
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 80101998
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 8010199C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801019A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 801019A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 801019A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[26]);} // 801019AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,26,ea,0,0);} // 801019B0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801019B4
  c->r[31]=c->r[4]|c->r[4]; // 801019B8
  W32(c->r[1]+0x00000038u,c->r[30]); // 801019BC
  c->r[30]=c->r[3]|c->r[3]; // 801019C0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801019C4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 801019C8
  if (crb(c,2)) { goto L_801019EC; } // 801019CC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801019D0
  fcmp(c,0,c->f[1],c->f[0]); // 801019D4
  if (!crb(c,2)) { goto L_801019EC; } // 801019D8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801019DC
  c->r[3]=0u+0x00000000u; // 801019E0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801019E4
  goto L_80101C68; // 801019E8
L_801019EC:;
  c->r[8]=R32(c->r[3]+0x00000030u); // 801019EC
  c->r[0]=c->r[3]+0x00000030u; // 801019F0
  c->r[6]=0u+0x00000000u; // 801019F4
  c->r[5]=c->r[8]|c->r[8]; // 801019F8
  goto L_80101A08; // 801019FC
L_80101A00:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 80101A00
  c->r[6]=c->r[6]+0x00000001u; // 80101A04
L_80101A08:;
  cmpu(c,0,c->r[5],c->r[0]); // 80101A08
  if (!crb(c,2)) { IRQCHK(c); goto L_80101A00; } // 80101A0C
  cmps(c,0,(int32_t)c->r[6],1); // 80101A10
  if (!crb(c,2)) { goto L_80101A28; } // 80101A14
  {uint32_t ea=c->r[8]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101A18
  c->r[3]=0u+0x00000000u; // 80101A1C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80101A20
  goto L_80101C68; // 80101A24
L_80101A28:;
  c->r[0]=c->r[3]+0x00000030u; // 80101A28
  goto L_80101C2C; // 80101A2C
L_80101A30:;
  {uint32_t ea=c->r[8]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80101A30
  fcmp(c,0,c->f[4],c->f[1]); // 80101A34
  if (!crb(c,1)) { goto L_80101C24; } // 80101A38
  cmps(c,0,(int32_t)c->r[7],0); // 80101A3C
  if (crb(c,2)) { goto L_80101C24; } // 80101A40
  c->r[3]=R32(c->r[8]+0x0000001Cu); // 80101A44
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80101A48
  if (crb(c,2)) { goto L_80101ACC; } // 80101A4C
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101A50
  c->r[3]=c->r[1]+0x00000008u; // 80101A54
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80101A58
  c->r[4]=c->r[1]+0x00000010u; // 80101A5C
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101A60
  {uint32_t ea=c->r[7]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101A64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80101A68
  {uint32_t ea=c->r[8]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101A6C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 80101A70
  {uint32_t ea=c->r[8]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101A74
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80101A78
  {uint32_t ea=c->r[8]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101A7C
  {uint32_t ea=c->r[7]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80101A80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80101A84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80101A88
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[0]); // 80101A8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 80101A90
  {uint32_t ea=c->r[7]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101A94
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80101A98
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80101A9C
  {uint32_t ea=c->r[8]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AA0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80101AA4
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101AA8
  {uint32_t ea=c->r[8]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80101AB0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80101AB4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80101AB8
  c->lr=0x80101AC0u; f_800D8160(c); // 80101ABC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AC0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80101AC4
  goto L_80101C04; // 80101AC8
L_80101ACC:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80101ACC
  if (crb(c,2)) { goto L_80101B00; } // 80101AD0
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101AD4
  {uint32_t ea=c->r[8]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101AD8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 80101ADC
  {uint32_t ea=c->r[7]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101AE0
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 80101AE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80101AE8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80101AEC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80101AF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80101AF4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80101AF8
  goto L_80101C04; // 80101AFC
L_80101B00:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80101B00
  if (crb(c,2)) { goto L_80101B8C; } // 80101B04
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101B08
  {uint32_t ea=c->r[8]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101B0C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80101B10
  {uint32_t ea=c->r[7]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101B14
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 80101B18
  fcmp(c,0,c->f[2],c->f[1]); // 80101B1C
  c->f[29]=c->ps1[29]=S(c->f[3]/c->f[0]); // 80101B20
  if (!crb(c,1)) { goto L_80101B34; } // 80101B24
  c->f[28]=c->f[1]; // 80101B28
  c->f[27]=c->ps1[27]=S(c->f[2]-c->f[1]); // 80101B2C
  goto L_80101B44; // 80101B30
L_80101B34:;
  {uint32_t ea=c->r[2]+0xFFFFA070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101B34
  c->f[28]=c->f[2]; // 80101B38
  c->f[27]=c->ps1[27]=S(c->f[1]-c->f[2]); // 80101B3C
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[29]); // 80101B40
L_80101B44:;
  {uint32_t ea=c->r[2]+0xFFFFA074u; c->f[26]=c->ps1[26]=RF32(ea);} // 80101B44
  {uint32_t ea=c->r[2]+0xFFFFA078u; c->f[1]=RF64(ea);} // 80101B48
  c->lr=0x80101B50u; f_800D29BC(c); // 80101B4C
  {uint32_t ea=c->r[2]+0xFFFFA070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101B50
  c->f[30]=c->ps1[30]=S(c->f[1]); // 80101B54
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[26]); // 80101B58
  c->lr=0x80101B60u; f_800D29BC(c); // 80101B5C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80101B60
  {uint32_t ea=c->r[2]+0xFFFFA080u; c->f[3]=c->ps1[3]=RF32(ea);} // 80101B64
  c->f[4]=c->f[29]; // 80101B68
  {uint32_t ea=c->r[2]+0xFFFFA084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101B6C
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[30]); // 80101B70
  c->lr=0x80101B78u; f_800D8250(c); // 80101B74
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[1]); // 80101B78
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 80101B7C
  c->f[0]=c->ps1[0]=S(c->f[28]+c->f[0]); // 80101B80
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80101B84
  goto L_80101C04; // 80101B88
L_80101B8C:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80101B8C
  if (crb(c,2)) { goto L_80101BFC; } // 80101B90
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101B94
  {uint32_t ea=c->r[8]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101B98
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80101B9C
  {uint32_t ea=c->r[7]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80101BA0
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 80101BA4
  fcmp(c,0,c->f[2],c->f[1]); // 80101BA8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 80101BAC
  if (!crb(c,1)) { goto L_80101BC8; } // 80101BB0
  {uint32_t ea=c->r[2]+0xFFFFA070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101BB4
  c->f[4]=c->f[1]; // 80101BB8
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[1]); // 80101BBC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80101BC0
  goto L_80101BD0; // 80101BC4
L_80101BC8:;
  c->f[4]=c->f[2]; // 80101BC8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[2]); // 80101BCC
L_80101BD0:;
  {uint32_t ea=c->r[2]+0xFFFFA06Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80101BD0
  {uint32_t ea=c->r[2]+0xFFFFA088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101BD4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 80101BD8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 80101BDC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80101BE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80101BE4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80101BE8
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80101BEC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 80101BF0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80101BF4
  goto L_80101C04; // 80101BF8
L_80101BFC:;
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101BFC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80101C00
L_80101C04:;
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[31]);} // 80101C04
  c->r[3]=0u+0x00000000u; // 80101C08
  c->r[0]=R32(c->r[30]+0x00000010u); // 80101C0C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101C10
  c->r[0]=c->r[0]|0x00004000u; // 80101C14
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 80101C18
  W32(c->r[30]+0x00000010u,c->r[0]); // 80101C1C
  goto L_80101C68; // 80101C20
L_80101C24:;
  c->r[7]=c->r[8]|c->r[8]; // 80101C24
  c->r[8]=R32(c->r[8]+0x00000000u); // 80101C28
L_80101C2C:;
  cmpu(c,0,c->r[8],c->r[0]); // 80101C2C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101A30; } // 80101C30
  cmps(c,0,(int32_t)c->r[7],0); // 80101C34
  if (crb(c,2)) { goto L_80101C44; } // 80101C38
  {uint32_t ea=c->r[7]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101C3C
  goto L_80101C48; // 80101C40
L_80101C44:;
  {uint32_t ea=c->r[2]+0xFFFFA068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101C44
L_80101C48:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80101C48
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80101C4C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80101C50
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101C54
  c->r[0]=c->r[0]|0x00004000u; // 80101C58
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80101C5C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80101C60
  c->r[3]=0u+0x00000000u; // 80101C64
L_80101C68:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80101C68
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80101C6C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80101C70
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80101C74
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80101C78
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 80101C7C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 80101C80
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 80101C84
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 80101C88
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 80101C8C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 80101C90
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,26,ea,0,0);} // 80101C94
  {uint32_t ea=c->r[1]+0x00000040u; c->f[26]=RF64(ea);} // 80101C98
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80101C9C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80101CA0
  c->lr=c->r[0]; // 80101CA4
  c->r[1]=c->r[1]+0x000000A0u; // 80101CA8
  return; // 80101CAC
}

// fn_80101CB0
void f_80101CB0(Ctx* __restrict c) {
  trace_call(0x80101CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101CB0
  c->r[0]=c->lr; // 80101CB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101CB8
  c->r[11]=c->r[1]+0x00000020u; // 80101CBC
  c->lr=0x80101CC4u; f_800C2E54(c); // 80101CC0
  c->r[29]=c->r[4]|c->r[4]; // 80101CC4
  c->r[31]=c->r[3]|c->r[3]; // 80101CC8
  c->r[3]=c->r[29]|c->r[29]; // 80101CCC
  c->r[4]=0u+0x0000002Bu; // 80101CD0
  c->r[5]=0u+0x00000044u; // 80101CD4
  c->lr=0x80101CDCu; f_8018FD10(c); // 80101CD8
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80101CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80101CE0
  if (crb(c,2)) { goto L_80101D00; } // 80101CE4
  c->lr=0x80101CECu; f_8019DC80(c); // 80101CE8
  c->r[4]=c->r[3]|c->r[3]; // 80101CEC
  c->r[3]=c->r[29]|c->r[29]; // 80101CF0
  c->r[5]=c->r[4]+0x00000001u; // 80101CF4
  c->r[4]=0u+0x00000001u; // 80101CF8
  c->lr=0x80101D00u; f_8018FD10(c); // 80101CFC
L_80101D00:;
  {uint32_t ea=c->r[31]+0x00000030u; c->r[30]=R32(ea); c->r[31]=ea;} // 80101D00
  goto L_80101D30; // 80101D04
L_80101D08:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 80101D08
  c->r[3]=c->r[30]|c->r[30]; // 80101D0C
  c->r[4]=c->r[29]|c->r[29]; // 80101D10
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101D14
  c->ctr=c->r[12]; // 80101D18
  if (true) { c->lr=0x80101D20u; dispatch(c,c->ctr); } // 80101D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80101D20
  if (crb(c,2)) { goto L_80101D2C; } // 80101D24
  goto L_80101D3C; // 80101D28
L_80101D2C:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80101D2C
L_80101D30:;
  cmpu(c,0,c->r[30],c->r[31]); // 80101D30
  if (!crb(c,2)) { IRQCHK(c); goto L_80101D08; } // 80101D34
  c->r[3]=0u+0x00000000u; // 80101D38
L_80101D3C:;
  c->r[11]=c->r[1]+0x00000020u; // 80101D3C
  c->lr=0x80101D44u; f_800C2EA0(c); // 80101D40
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101D44
  c->lr=c->r[0]; // 80101D48
  c->r[1]=c->r[1]+0x00000020u; // 80101D4C
  return; // 80101D50
}

// fn_80101D60
void f_80101D60(Ctx* __restrict c) {
  trace_call(0x80101D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101D60
  c->r[0]=c->lr; // 80101D64
  cmps(c,0,(int32_t)c->r[4],0); // 80101D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101D70
  c->r[31]=c->r[3]|c->r[3]; // 80101D74
  if (crb(c,2)) { goto L_80101DA4; } // 80101D78
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80101D7C
  cmps(c,0,(int32_t)c->r[0],0); // 80101D80
  if (!crb(c,2)) { goto L_80101DAC; } // 80101D84
  c->r[3]=c->r[4]|c->r[4]; // 80101D88
  c->r[4]=0u+0x0000002Eu; // 80101D8C
  c->r[5]=0u+0x00000020u; // 80101D90
  c->lr=0x80101D98u; f_8018FD10(c); // 80101D94
  c->r[0]=0u+0x00000001u; // 80101D98
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80101D9C
  goto L_80101DAC; // 80101DA0
L_80101DA4:;
  c->r[0]=0u+0x00000000u; // 80101DA4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80101DA8
L_80101DAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101DAC
  c->r[3]=0u+0x00000000u; // 80101DB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101DB4
  c->lr=c->r[0]; // 80101DB8
  c->r[1]=c->r[1]+0x00000010u; // 80101DBC
  return; // 80101DC0
}

// fn_80101DD0
void f_80101DD0(Ctx* __restrict c) {
  trace_call(0x80101DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101DD0
  c->r[0]=c->lr; // 80101DD4
  cmps(c,0,(int32_t)c->r[4],0); // 80101DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101DE0
  c->r[31]=c->r[3]|c->r[3]; // 80101DE4
  if (crb(c,2)) { goto L_80101E20; } // 80101DE8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80101DEC
  cmps(c,0,(int32_t)c->r[0],0); // 80101DF0
  if (!crb(c,2)) { goto L_80101E44; } // 80101DF4
  c->r[12]=R32(c->r[3]+0x00000010u); // 80101DF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101DFC
  c->ctr=c->r[12]; // 80101E00
  if (true) { c->lr=0x80101E08u; dispatch(c,c->ctr); } // 80101E04
  cmps(c,0,(int32_t)c->r[3],0); // 80101E08
  if (crb(c,2)) { goto L_80101E14; } // 80101E0C
  goto L_80101E48; // 80101E10
L_80101E14:;
  c->r[0]=0u+0x00000001u; // 80101E14
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80101E18
  goto L_80101E44; // 80101E1C
L_80101E20:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 80101E20
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101E24
  c->ctr=c->r[12]; // 80101E28
  if (true) { c->lr=0x80101E30u; dispatch(c,c->ctr); } // 80101E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80101E30
  if (crb(c,2)) { goto L_80101E3C; } // 80101E34
  goto L_80101E48; // 80101E38
L_80101E3C:;
  c->r[0]=0u+0x00000000u; // 80101E3C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80101E40
L_80101E44:;
  c->r[3]=0u+0x00000000u; // 80101E44
L_80101E48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101E48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101E4C
  c->lr=c->r[0]; // 80101E50
  c->r[1]=c->r[1]+0x00000010u; // 80101E54
  return; // 80101E58
}

// fn_80101E60
void f_80101E60(Ctx* __restrict c) {
  trace_call(0x80101E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101E60
  c->r[0]=c->lr; // 80101E64
  c->r[4]=0u+0x80390000u; // 80101E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101E6C
  c->r[0]=0u+0x00000000u; // 80101E70
  c->r[4]=c->r[4]+0xFFFFE480u; // 80101E74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101E78
  c->r[31]=c->r[3]|c->r[3]; // 80101E7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80101E80
  W32(c->r[3]+0x00000000u,c->r[4]); // 80101E84
  c->r[3]=c->r[3]+0x0000000Cu; // 80101E88
  c->lr=0x80101E90u; f_80101510(c); // 80101E8C
  c->r[3]=c->r[31]+0x00000018u; // 80101E90
  c->lr=0x80101E98u; f_80101510(c); // 80101E94
  c->r[3]=c->r[31]+0x00000024u; // 80101E98
  c->lr=0x80101EA0u; f_80101510(c); // 80101E9C
  c->r[3]=c->r[31]|c->r[31]; // 80101EA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101EA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101EA8
  c->lr=c->r[0]; // 80101EAC
  c->r[1]=c->r[1]+0x00000010u; // 80101EB0
  return; // 80101EB4
}

// fn_80101EC0
void f_80101EC0(Ctx* __restrict c) {
  trace_call(0x80101EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101EC0
  c->r[0]=c->lr; // 80101EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101ECC
  c->r[31]=c->r[3]|c->r[3]; // 80101ED0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80101ED4
  c->lr=0x80101EDCu; f_800E9D60(c); // 80101ED8
  cmps(c,0,(int32_t)c->r[3],0); // 80101EDC
  if (!crb(c,2)) { goto L_80101F04; } // 80101EE0
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80101EE4
  c->r[5]=0u+0x80390000u; // 80101EE8
  c->r[4]=c->r[31]|c->r[31]; // 80101EEC
  c->r[6]=0u+0x00000036u; // 80101EF0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80101EF4
  c->r[5]=c->r[5]+0xFFFFE460u; // 80101EF8
  c->r[7]=0u+0x00000000u; // 80101EFC
  c->lr=0x80101F04u; f_8018F5F0(c); // 80101F00
L_80101F04:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101F04
  c->r[3]=0u+0x00000000u; // 80101F08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101F0C
  c->lr=c->r[0]; // 80101F10
  c->r[1]=c->r[1]+0x00000010u; // 80101F14
  return; // 80101F18
}

// fn_80101F20
void f_80101F20(Ctx* __restrict c) {
  trace_call(0x80101F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101F20
  c->r[0]=c->lr; // 80101F24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101F28
  c->r[11]=c->r[1]+0x00000020u; // 80101F2C
  c->lr=0x80101F34u; f_800C2E50(c); // 80101F30
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80101F34
  c->r[28]=c->r[3]|c->r[3]; // 80101F38
  c->r[31]=c->r[3]+0x0000000Cu; // 80101F3C
  goto L_80101F5C; // 80101F40
L_80101F44:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 80101F44
  c->r[3]=c->r[29]|c->r[29]; // 80101F48
  c->lr=0x80101F50u; f_800D89A0(c); // 80101F4C
  c->r[3]=c->r[29]|c->r[29]; // 80101F50
  c->lr=0x80101F58u; f_8010BAD0(c); // 80101F54
  c->r[29]=c->r[30]|c->r[30]; // 80101F58
L_80101F5C:;
  cmpu(c,0,c->r[29],c->r[31]); // 80101F5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101F44; } // 80101F60
  c->r[29]=R32(c->r[28]+0x00000018u); // 80101F64
  c->r[31]=c->r[28]+0x00000018u; // 80101F68
  goto L_80101F88; // 80101F6C
L_80101F70:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 80101F70
  c->r[3]=c->r[29]|c->r[29]; // 80101F74
  c->lr=0x80101F7Cu; f_800D89A0(c); // 80101F78
  c->r[3]=c->r[29]|c->r[29]; // 80101F7C
  c->lr=0x80101F84u; f_800E9CA0(c); // 80101F80
  c->r[29]=c->r[30]|c->r[30]; // 80101F84
L_80101F88:;
  cmpu(c,0,c->r[29],c->r[31]); // 80101F88
  if (!crb(c,2)) { IRQCHK(c); goto L_80101F70; } // 80101F8C
  c->r[29]=R32(c->r[28]+0x00000024u); // 80101F90
  c->r[31]=c->r[28]+0x00000024u; // 80101F94
  goto L_80101FB4; // 80101F98
L_80101F9C:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 80101F9C
  c->r[3]=c->r[29]|c->r[29]; // 80101FA0
  c->lr=0x80101FA8u; f_800D89A0(c); // 80101FA4
  c->r[3]=c->r[29]|c->r[29]; // 80101FA8
  c->lr=0x80101FB0u; f_8010FF50(c); // 80101FAC
  c->r[29]=c->r[30]|c->r[30]; // 80101FB0
L_80101FB4:;
  cmpu(c,0,c->r[29],c->r[31]); // 80101FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_80101F9C; } // 80101FB8
  c->r[11]=c->r[1]+0x00000020u; // 80101FBC
  c->r[3]=0u+0x00000000u; // 80101FC0
  c->lr=0x80101FC8u; f_800C2E9C(c); // 80101FC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101FC8
  c->lr=c->r[0]; // 80101FCC
  c->r[1]=c->r[1]+0x00000020u; // 80101FD0
  return; // 80101FD4
}

// fn_80101FE0
void f_80101FE0(Ctx* __restrict c) {
  trace_call(0x80101FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101FE0
  c->r[0]=c->lr; // 80101FE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101FE8
  c->r[11]=c->r[1]+0x00000020u; // 80101FEC
  c->lr=0x80101FF4u; f_800C2E48(c); // 80101FF0
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80101FF4
  c->r[31]=c->r[3]+0x0000000Cu; // 80101FF8
  goto L_80102070; // 80101FFC
L_80102000:;
  c->r[27]=R32(c->r[28]+0x00000034u); // 80102000
  c->r[30]=c->r[28]+0x00000034u; // 80102004
  goto L_80102064; // 80102008
L_8010200C:;
  c->r[3]=R32(c->r[27]+0x00000024u); // 8010200C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80102010
  if (!crb(c,2)) { goto L_80102020; } // 80102014
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80102018
  if (crb(c,2)) { goto L_80102034; } // 8010201C
L_80102020:;
  c->r[3]=c->r[27]|c->r[27]; // 80102020
  c->lr=0x80102028u; f_8010E340(c); // 80102024
  cmps(c,0,(int32_t)c->r[3],0); // 80102028
  if (crb(c,2)) { goto L_80102060; } // 8010202C
  goto L_8010207C; // 80102030
L_80102034:;
  c->r[26]=R32(c->r[27]+0x00000080u); // 80102034
  c->r[29]=c->r[27]+0x00000080u; // 80102038
  goto L_80102058; // 8010203C
L_80102040:;
  c->r[3]=c->r[26]|c->r[26]; // 80102040
  c->lr=0x80102048u; f_8010E340(c); // 80102044
  cmps(c,0,(int32_t)c->r[3],0); // 80102048
  if (crb(c,2)) { goto L_80102054; } // 8010204C
  goto L_8010207C; // 80102050
L_80102054:;
  c->r[26]=R32(c->r[26]+0x00000000u); // 80102054
L_80102058:;
  cmpu(c,0,c->r[26],c->r[29]); // 80102058
  if (!crb(c,2)) { IRQCHK(c); goto L_80102040; } // 8010205C
L_80102060:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80102060
L_80102064:;
  cmpu(c,0,c->r[27],c->r[30]); // 80102064
  if (!crb(c,2)) { IRQCHK(c); goto L_8010200C; } // 80102068
  c->r[28]=R32(c->r[28]+0x00000000u); // 8010206C
L_80102070:;
  cmpu(c,0,c->r[28],c->r[31]); // 80102070
  if (!crb(c,2)) { IRQCHK(c); goto L_80102000; } // 80102074
  c->r[3]=0u+0x00000000u; // 80102078
L_8010207C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010207C
  c->lr=0x80102084u; f_800C2E94(c); // 80102080
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102084
  c->lr=c->r[0]; // 80102088
  c->r[1]=c->r[1]+0x00000020u; // 8010208C
  return; // 80102090
}

// fn_801020A0
void f_801020A0(Ctx* __restrict c) {
  trace_call(0x801020A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801020A0
  c->r[0]=c->lr; // 801020A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801020A8
  c->r[11]=c->r[1]+0x00000020u; // 801020AC
  c->lr=0x801020B4u; f_800C2E50(c); // 801020B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 801020B4
  c->r[29]=c->r[4]|c->r[4]; // 801020B8
  c->r[28]=c->r[3]|c->r[3]; // 801020BC
  c->r[4]=R32(c->r[5]+0x00000060u); // 801020C0
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 801020C4
  if (crb(c,2)) { goto L_801020D0; } // 801020C8
  c->r[29]=0u+0x00000000u; // 801020CC
L_801020D0:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 801020D0
  if (crb(c,2)) { goto L_8010211C; } // 801020D4
  c->r[30]=R32(c->r[3]+0x00000018u); // 801020D8
  c->r[31]=c->r[3]+0x00000018u; // 801020DC
  goto L_80102100; // 801020E0
L_801020E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801020E4
  c->r[4]=c->r[29]|c->r[29]; // 801020E8
  c->lr=0x801020F0u; f_800E9D80(c); // 801020EC
  cmps(c,0,(int32_t)c->r[3],0); // 801020F0
  if (crb(c,2)) { goto L_801020FC; } // 801020F4
  goto L_80102120; // 801020F8
L_801020FC:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801020FC
L_80102100:;
  cmpu(c,0,c->r[30],c->r[31]); // 80102100
  if (!crb(c,2)) { IRQCHK(c); goto L_801020E4; } // 80102104
  c->r[3]=R32(c->r[28]+0x00000004u); // 80102108
  c->lr=0x80102110u; f_800DB0E0(c); // 8010210C
  cmps(c,0,(int32_t)c->r[3],0); // 80102110
  if (crb(c,2)) { goto L_8010211C; } // 80102114
  goto L_80102120; // 80102118
L_8010211C:;
  c->r[3]=0u+0x00000000u; // 8010211C
L_80102120:;
  c->r[11]=c->r[1]+0x00000020u; // 80102120
  c->lr=0x80102128u; f_800C2E9C(c); // 80102124
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102128
  c->lr=c->r[0]; // 8010212C
  c->r[1]=c->r[1]+0x00000020u; // 80102130
  return; // 80102134
}

// fn_80102140
void f_80102140(Ctx* __restrict c) {
  trace_call(0x80102140u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102140
  c->r[0]=c->lr; // 80102144
  W32(c->r[1]+0x00000104u,c->r[0]); // 80102148
  c->r[11]=c->r[1]+0x000000B0u; // 8010214C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80102150
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80102154
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 80102158
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 8010215C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 80102160
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 80102164
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[28]);} // 80102168
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,28,ea,0,0);} // 8010216C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[27]);} // 80102170
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,27,ea,0,0);} // 80102174
  c->lr=0x8010217Cu; f_800C2E18(c); // 80102178
  c->r[0]=0u+0x43300000u; // 8010217C
  W32(c->r[1]+0x00000048u,c->r[0]); // 80102180
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 80102184
  c->r[15]=c->r[3]|c->r[3]; // 80102188
  W32(c->r[1]+0x00000050u,c->r[0]); // 8010218C
  c->r[0]=c->r[3]+0x0000000Cu; // 80102190
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80102194
  c->r[16]=c->r[4]|c->r[4]; // 80102198
  {uint32_t ea=c->r[2]+0xFFFFA0B8u; c->f[28]=RF64(ea);} // 8010219C
  c->r[17]=c->r[5]|c->r[5]; // 801021A0
  W32(c->r[1]+0x00000058u,c->r[0]); // 801021A4
  c->r[27]=0u+0x00000000u; // 801021A8
  {uint32_t ea=c->r[2]+0xFFFFA0B0u; c->f[31]=RF64(ea);} // 801021AC
  c->r[26]=0u+0x00000000u; // 801021B0
  {uint32_t ea=c->r[2]+0xFFFFA0A8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801021B4
  c->r[25]=0u+0x00000001u; // 801021B8
  c->r[31]=0u+0x00000000u; // 801021BC
  c->r[30]=0u+0x00000001u; // 801021C0
  goto L_80102E98; // 801021C4
L_801021C8:;
  W8(c->r[1]+0x00000011u,c->r[31]); // 801021C8
  c->r[0]=R32(c->r[23]+0x00000018u); // 801021CC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801021D0
  if (!crb(c,2)) { goto L_80102E94; } // 801021D4
  W32(c->r[1]+0x00000044u,c->r[31]); // 801021D8
  W32(c->r[1]+0x00000040u,c->r[31]); // 801021DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801021E0
  c->r[3]=R32(c->r[15]+0x00000004u); // 801021E4
  c->lr=0x801021ECu; f_800D9B90(c); // 801021E8
  cmps(c,0,(int32_t)c->r[3],0); // 801021EC
  if (crb(c,2)) { goto L_80102210; } // 801021F0
  c->r[3]=c->r[23]|c->r[23]; // 801021F4
  c->r[4]=c->r[1]+0x00000040u; // 801021F8
  c->r[5]=c->r[1]+0x0000001Cu; // 801021FC
  c->lr=0x80102204u; f_8010C2A0(c); // 80102200
  cmps(c,0,(int32_t)c->r[3],0); // 80102204
  if (crb(c,2)) { goto L_80102210; } // 80102208
  goto L_80103024; // 8010220C
L_80102210:;
  c->r[0]=R32(c->r[23]+0x00000018u); // 80102210
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80102214
  if (crb(c,2)) { goto L_80102230; } // 80102218
  c->r[3]=c->r[23]|c->r[23]; // 8010221C
  c->lr=0x80102224u; f_8010BCB0(c); // 80102220
  cmps(c,0,(int32_t)c->r[3],0); // 80102224
  if (crb(c,2)) { goto L_80102230; } // 80102228
  goto L_80103024; // 8010222C
L_80102230:;
  c->r[14]=R32(c->r[23]+0x00000034u); // 80102230
  c->r[18]=c->r[23]+0x00000034u; // 80102234
  goto L_801022C0; // 80102238
L_8010223C:;
  c->r[0]=R32(c->r[14]+0x00000024u); // 8010223C
  c->r[0]=rotl(c->r[0],0)&0x00000018u; // 80102240
  cmpu(c,0,c->r[0],0x00000018u); // 80102244
  if (!crb(c,2)) { goto L_801022AC; } // 80102248
  W8(c->r[1]+0x00000010u,c->r[31]); // 8010224C
  c->r[3]=R32(c->r[14]+0x00000034u); // 80102250
  cmps(c,0,(int32_t)c->r[3],0); // 80102254
  if (crb(c,2)) { goto L_80102280; } // 80102258
  c->r[4]=c->r[1]+0x00000010u; // 8010225C
  c->lr=0x80102264u; f_801762B0(c); // 80102260
  cmps(c,0,(int32_t)c->r[3],0); // 80102264
  if (crb(c,2)) { goto L_80102280; } // 80102268
  cmps(c,0,(int32_t)c->r[3],36); // 8010226C
  if (crb(c,2)) { goto L_80102280; } // 80102270
  cmps(c,0,(int32_t)c->r[3],11); // 80102274
  if (crb(c,2)) { goto L_80102280; } // 80102278
  goto L_80103024; // 8010227C
L_80102280:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 80102280
  cmps(c,0,(int32_t)c->r[0],0); // 80102284
  if (crb(c,2)) { goto L_80102294; } // 80102288
  c->r[26]=0u+0x00000001u; // 8010228C
  goto L_801022AC; // 80102290
L_80102294:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 80102294
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80102298
  W32(c->r[23]+0x00000020u,c->r[0]); // 8010229C
  c->r[0]=R32(c->r[14]+0x00000024u); // 801022A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801022A4
  W32(c->r[14]+0x00000024u,c->r[0]); // 801022A8
L_801022AC:;
  c->r[0]=R8(c->r[14]+0x0000002Cu); // 801022AC
  cmps(c,0,(int32_t)c->r[0],0); // 801022B0
  if (crb(c,2)) { goto L_801022BC; } // 801022B4
  c->r[25]=0u+0x00000000u; // 801022B8
L_801022BC:;
  c->r[14]=R32(c->r[14]+0x00000000u); // 801022BC
L_801022C0:;
  cmpu(c,0,c->r[14],c->r[18]); // 801022C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010223C; } // 801022C4
  c->r[22]=R32(c->r[23]+0x00000024u); // 801022C8
  c->r[14]=c->r[23]+0x00000034u; // 801022CC
  c->r[29]=R32(c->r[23]+0x00000034u); // 801022D0
  goto L_80102B6C; // 801022D4
L_801022D8:;
  c->r[12]=R32(c->r[15]+0x00000000u); // 801022D8
  c->r[3]=c->r[15]|c->r[15]; // 801022DC
  c->r[28]=c->r[29]|c->r[29]; // 801022E0
  c->r[4]=c->r[29]|c->r[29]; // 801022E4
  c->r[12]=R32(c->r[12]+0x00000098u); // 801022E8
  c->r[5]=c->r[1]+0x0000000Fu; // 801022EC
  c->ctr=c->r[12]; // 801022F0
  if (true) { c->lr=0x801022F8u; dispatch(c,c->ctr); } // 801022F4
  cmps(c,0,(int32_t)c->r[3],0); // 801022F8
  if (crb(c,2)) { goto L_80102304; } // 801022FC
  goto L_80103024; // 80102300
L_80102304:;
  cmps(c,0,(int32_t)c->r[22],0); // 80102304
  W8(c->r[1]+0x00000012u,c->r[31]); // 80102308
  if (crb(c,2)) { goto L_80102418; } // 8010230C
  c->r[5]=R32(c->r[29]+0x00000014u); // 80102310
  c->r[3]=c->r[22]|c->r[22]; // 80102314
  c->r[4]=c->r[1]+0x0000000Eu; // 80102318
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010231C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102320
  c->lr=0x80102328u; f_800EABB0(c); // 80102324
  cmps(c,0,(int32_t)c->r[3],0); // 80102328
  if (crb(c,2)) { goto L_80102334; } // 8010232C
  goto L_80103024; // 80102330
L_80102334:;
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 80102334
  cmps(c,0,(int32_t)c->r[0],0); // 80102338
  if (crb(c,2)) { goto L_80102348; } // 8010233C
  W8(c->r[1]+0x00000012u,c->r[30]); // 80102340
  goto L_801023AC; // 80102344
L_80102348:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 80102348
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010234C
  if (crb(c,2)) { goto L_80102378; } // 80102350
  c->r[5]=R32(c->r[29]+0x00000014u); // 80102354
  c->r[3]=c->r[22]|c->r[22]; // 80102358
  c->r[4]=c->r[1]+0x00000012u; // 8010235C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102360
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102364
  c->lr=0x8010236Cu; f_800EAC10(c); // 80102368
  cmps(c,0,(int32_t)c->r[3],0); // 8010236C
  if (crb(c,2)) { goto L_801023AC; } // 80102370
  goto L_80103024; // 80102374
L_80102378:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80102378
  if (crb(c,2)) { goto L_801023AC; } // 8010237C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80102380
  if (!crb(c,2)) { goto L_801023AC; } // 80102384
  c->r[5]=R32(c->r[29]+0x00000014u); // 80102388
  c->r[3]=c->r[22]|c->r[22]; // 8010238C
  c->r[4]=c->r[1]+0x00000012u; // 80102390
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102394
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80102398
  c->lr=0x801023A0u; f_800EAC10(c); // 8010239C
  cmps(c,0,(int32_t)c->r[3],0); // 801023A0
  if (crb(c,2)) { goto L_801023AC; } // 801023A4
  goto L_80103024; // 801023A8
L_801023AC:;
  c->r[0]=R8(c->r[1]+0x00000012u); // 801023AC
  cmps(c,0,(int32_t)c->r[0],0); // 801023B0
  if (!crb(c,2)) { goto L_8010241C; } // 801023B4
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[30]);} // 801023B8
  c->r[0]=R32(c->r[29]+0x00000024u); // 801023BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801023C0
  if (crb(c,2)) { goto L_801023E4; } // 801023C4
  c->r[3]=R32(c->r[29]+0x00000014u); // 801023C8
  c->r[4]=R32(c->r[29]+0x00000058u); // 801023CC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801023D0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801023D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801023D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801023DC
  if (!crb(c,0)) { goto L_801023F0; } // 801023E0
L_801023E4:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 801023E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFE7Fu; // 801023E8
  W32(c->r[29]+0x00000024u,c->r[0]); // 801023EC
L_801023F0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801023F0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801023F4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801023F8
  c->lr=0x80102400u; f_800E77E0(c); // 801023FC
  cmps(c,0,(int32_t)c->r[3],1); // 80102400
  if (!crb(c,2)) { goto L_8010241C; } // 80102404
  c->r[0]=R32(c->r[29]+0x00000024u); // 80102408
  c->r[0]=c->r[0]|0x00000400u; // 8010240C
  W32(c->r[29]+0x00000024u,c->r[0]); // 80102410
  goto L_8010241C; // 80102414
L_80102418:;
  W8(c->r[1]+0x00000012u,c->r[30]); // 80102418
L_8010241C:;
  c->r[0]=R8(c->r[1]+0x00000012u); // 8010241C
  c->r[3]=c->r[28]|c->r[28]; // 80102420
  c->r[0]=cntlz(c->r[0]); // 80102424
  c->r[21]=rotl(c->r[0],27)&0x07FFFFFFu; // 80102428
  c->lr=0x80102430u; f_8010E9A0(c); // 8010242C
  cmps(c,0,(int32_t)c->r[3],0); // 80102430
  if (crb(c,2)) { goto L_8010248C; } // 80102434
  c->r[3]=c->r[23]|c->r[23]; // 80102438
  c->r[4]=c->r[28]|c->r[28]; // 8010243C
  c->lr=0x80102444u; f_8010C4A0(c); // 80102440
  cmps(c,0,(int32_t)c->r[3],0); // 80102444
  if (!crb(c,2)) { goto L_80102458; } // 80102448
  W8(c->r[1]+0x00000012u,c->r[30]); // 8010244C
  c->r[21]=0u+0x00000000u; // 80102450
  goto L_80102514; // 80102454
L_80102458:;
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80102458
  cmps(c,0,(int32_t)c->r[0],0); // 8010245C
  if (crb(c,2)) { goto L_80102480; } // 80102460
  c->r[0]=R32(c->r[1]+0x00000040u); // 80102464
  c->r[3]=R32(c->r[1]+0x00000044u); // 80102468
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 8010246C
  if (crb(c,2)) { goto L_80102480; } // 80102470
  W8(c->r[1]+0x00000012u,c->r[30]); // 80102474
  c->r[21]=0u+0x00000000u; // 80102478
  goto L_80102514; // 8010247C
L_80102480:;
  W8(c->r[1]+0x00000012u,c->r[31]); // 80102480
  c->r[21]=0u+0x00000000u; // 80102484
  goto L_80102514; // 80102488
L_8010248C:;
  c->r[0]=R8(c->r[1]+0x00000012u); // 8010248C
  cmps(c,0,(int32_t)c->r[0],0); // 80102490
  if (crb(c,2)) { goto L_80102514; } // 80102494
  c->r[0]=R32(c->r[23]+0x00000018u); // 80102498
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8010249C
  if (!crb(c,2)) { goto L_80102514; } // 801024A0
  c->r[3]=c->r[28]|c->r[28]; // 801024A4
  c->lr=0x801024ACu; f_8010E890(c); // 801024A8
  cmps(c,0,(int32_t)c->r[3],0); // 801024AC
  if (crb(c,2)) { goto L_80102514; } // 801024B0
  c->r[0]=R32(c->r[23]+0x00000020u); // 801024B4
  cmps(c,0,(int32_t)c->r[0],0); // 801024B8
  if (crb(c,2)) { goto L_80102514; } // 801024BC
  c->r[3]=c->r[28]|c->r[28]; // 801024C0
  c->lr=0x801024C8u; f_8010E8A0(c); // 801024C4
  cmps(c,0,(int32_t)c->r[3],0); // 801024C8
  if (!crb(c,2)) { goto L_8010250C; } // 801024CC
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801024D0
  cmps(c,0,(int32_t)c->r[0],0); // 801024D4
  if (crb(c,2)) { goto L_801024F8; } // 801024D8
  c->r[0]=R32(c->r[1]+0x00000040u); // 801024DC
  c->r[3]=R32(c->r[1]+0x00000044u); // 801024E0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801024E4
  if (crb(c,2)) { goto L_801024F8; } // 801024E8
  W8(c->r[1]+0x00000012u,c->r[30]); // 801024EC
  c->r[21]=0u+0x00000000u; // 801024F0
  goto L_80102514; // 801024F4
L_801024F8:;
  c->r[3]=c->r[28]|c->r[28]; // 801024F8
  c->lr=0x80102500u; f_8010E9F0(c); // 801024FC
  W8(c->r[1]+0x00000012u,c->r[31]); // 80102500
  c->r[21]=0u+0x00000000u; // 80102504
  goto L_80102514; // 80102508
L_8010250C:;
  W8(c->r[1]+0x00000012u,c->r[30]); // 8010250C
  c->r[21]=0u+0x00000000u; // 80102510
L_80102514:;
  c->r[0]=R8(c->r[1]+0x00000012u); // 80102514
  cmps(c,0,(int32_t)c->r[0],0); // 80102518
  if (crb(c,2)) { goto L_80102AE0; } // 8010251C
  c->r[0]=R32(c->r[23]+0x00000018u); // 80102520
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80102524
  if (!crb(c,2)) { goto L_80102AE0; } // 80102528
  W8(c->r[1]+0x0000000Du,c->r[31]); // 8010252C
  c->r[3]=R32(c->r[29]+0x00000034u); // 80102530
  cmps(c,0,(int32_t)c->r[3],0); // 80102534
  if (crb(c,2)) { goto L_801025B0; } // 80102538
  c->r[4]=c->r[1]+0x0000000Du; // 8010253C
  c->lr=0x80102544u; f_801762B0(c); // 80102540
  cmps(c,0,(int32_t)c->r[3],11); // 80102544
  if (crb(c,2)) { goto L_80102554; } // 80102548
  cmps(c,0,(int32_t)c->r[3],36); // 8010254C
  if (!crb(c,2)) { goto L_801025A4; } // 80102550
L_80102554:;
  c->r[3]=c->r[28]|c->r[28]; // 80102554
  c->r[4]=0u+0x00000001u; // 80102558
  c->lr=0x80102560u; f_8010E470(c); // 8010255C
  cmps(c,0,(int32_t)c->r[3],0); // 80102560
  if (crb(c,2)) { goto L_8010256C; } // 80102564
  goto L_80103024; // 80102568
L_8010256C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8010256C
  c->r[0]=R32(c->r[3]+0x00000034u); // 80102570
  cmps(c,0,(int32_t)c->r[0],-1); // 80102574
  if (crb(c,2)) { goto L_801025B0; } // 80102578
  c->r[3]=R32(c->r[29]+0x00000024u); // 8010257C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80102580
  if (!crb(c,2)) { goto L_80102590; } // 80102584
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80102588
  if (crb(c,2)) { goto L_801025B0; } // 8010258C
L_80102590:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 80102590
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80102594
  c->r[0]=c->r[0]|0x00000100u; // 80102598
  W32(c->r[29]+0x00000024u,c->r[0]); // 8010259C
  goto L_801025B0; // 801025A0
L_801025A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801025A4
  if (crb(c,2)) { goto L_801025B0; } // 801025A8
  goto L_80103024; // 801025AC
L_801025B0:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 801025B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801025B4
  if (crb(c,2)) { goto L_801025C0; } // 801025B8
  W8(c->r[1]+0x0000000Du,c->r[30]); // 801025BC
L_801025C0:;
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801025C0
  cmps(c,0,(int32_t)c->r[0],0); // 801025C4
  if (!crb(c,2)) { goto L_80102970; } // 801025C8
  c->r[3]=R32(c->r[29]+0x00000024u); // 801025CC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801025D0
  if (!crb(c,2)) { goto L_801025E0; } // 801025D4
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801025D8
  if (crb(c,2)) { goto L_80102658; } // 801025DC
L_801025E0:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 801025E0
  if (!crb(c,2)) { goto L_80102980; } // 801025E4
  c->r[3]=R32(c->r[15]+0x00000004u); // 801025E8
  c->r[4]=c->r[28]|c->r[28]; // 801025EC
  c->r[5]=c->r[16]|c->r[16]; // 801025F0
  c->r[26]=0u+0x00000001u; // 801025F4
  c->r[6]=0u+0x00000000u; // 801025F8
  c->lr=0x80102600u; f_800DA300(c); // 801025FC
  cmps(c,0,(int32_t)c->r[3],56); // 80102600
  if (crb(c,2)) { goto L_80102610; } // 80102604
  cmps(c,0,(int32_t)c->r[3],21); // 80102608
  if (!crb(c,2)) { goto L_80102614; } // 8010260C
L_80102610:;
  c->r[3]=0u+0x00000000u; // 80102610
L_80102614:;
  cmps(c,0,(int32_t)c->r[3],77); // 80102614
  if (!crb(c,2)) { goto L_8010264C; } // 80102618
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 8010261C
  c->r[0]=c->r[0]+c->r[16]; // 80102620
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 80102624
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102628
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8010262C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80102630
  if (crb(c,2)) { goto L_80102980; } // 80102634
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102638
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010263C
  c->r[0]=c->r[0]|0x10000000u; // 80102640
  W32(c->r[3]+0x00000060u,c->r[0]); // 80102644
  goto L_80102980; // 80102648
L_8010264C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010264C
  if (crb(c,2)) { goto L_80102980; } // 80102650
  goto L_80103024; // 80102654
L_80102658:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80102658
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010265C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80102660
  c->r[19]=R32(c->r[3]+0x0000000Cu); // 80102664
  c->r[20]=R32(c->r[3]+0x00000008u); // 80102668
  cmps(c,0,(int32_t)c->r[19],0); // 8010266C
  if (!crb(c,1)) { goto L_801026D8; } // 80102670
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 80102674
  if (crb(c,1)) { goto L_801026D8; } // 80102678
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010267C
  fcmp(c,0,c->f[0],c->f[30]); // 80102680
  if (!crb(c,1)) { goto L_801026D8; } // 80102684
  W32(c->r[1]+0x0000004Cu,c->r[16]); // 80102688
  c->r[3]=c->r[23]|c->r[23]; // 8010268C
  c->r[4]=0u+0x00001000u; // 80102690
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 80102694
  c->f[27]=c->ps1[27]=S(c->f[0]-c->f[31]); // 80102698
  c->lr=0x801026A0u; f_8010C560(c); // 8010269C
  cmps(c,0,(int32_t)c->r[3],0); // 801026A0
  if (crb(c,2)) { goto L_801026C0; } // 801026A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801026A8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801026AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801026B0
  if (!crb(c,2)) { goto L_801026C0; } // 801026B4
  {uint32_t ea=c->r[23]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801026B8
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 801026BC
L_801026C0:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 801026C0
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801026C4
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801026C8
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[1]); // 801026CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 801026D0
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 801026D4
L_801026D8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801026D8
  c->r[4]=R32(c->r[29]+0x00000058u); // 801026DC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801026E0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801026E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801026E8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801026EC
  if (!crb(c,0)) { goto L_80102968; } // 801026F0
  cmps(c,0,(int32_t)c->r[19],0); // 801026F4
  c->r[24]=0u+0x00000000u; // 801026F8
  c->r[18]=0u+0x00000000u; // 801026FC
  if (!crb(c,1)) { goto L_8010270C; } // 80102700
  cmps(c,1,(int32_t)c->r[20],(int32_t)c->r[19]); // 80102704
  if (!crb(c,5)) { goto L_80102730; } // 80102708
L_8010270C:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 8010270C
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 80102710
  if (!crb(c,2)) { goto L_80102728; } // 80102714
  c->r[0]=c->r[3]|0x00000100u; // 80102718
  W32(c->r[29]+0x00000024u,c->r[0]); // 8010271C
  c->r[18]=0u+0x00000001u; // 80102720
  goto L_801027F4; // 80102724
L_80102728:;
  c->r[18]=0u+0x00000000u; // 80102728
  goto L_801027F4; // 8010272C
L_80102730:;
  {uint32_t ea=c->r[29]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102730
  fcmp(c,0,c->f[1],c->f[30]); // 80102734
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80102738
  if (!crb(c,2)) { goto L_801027F4; } // 8010273C
  c->r[18]=0u+0x00000001u; // 80102740
  if (crb(c,6)) { goto L_80102780; } // 80102744
  c->lr=0x8010274Cu; f_800C8D44(c); // 80102748
  c->r[4]=c->r[19]-c->r[20]; // 8010274C
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102750
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80102754
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80102758
  c->r[0]=c->r[3]-c->r[0]; // 8010275C
  c->r[0]=c->r[20]+c->r[0]; // 80102760
  c->r[0]=c->r[0]^0x80000000u; // 80102764
  W32(c->r[1]+0x00000054u,c->r[0]); // 80102768
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=RF64(ea);} // 8010276C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 80102770
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80102774
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 80102778
  goto L_80102798; // 8010277C
L_80102780:;
  c->r[0]=c->r[20]^0x80000000u; // 80102780
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80102784
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 80102788
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 8010278C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80102790
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 80102794
L_80102798:;
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102798
  fcmp(c,0,c->f[0],c->f[30]); // 8010279C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801027A0
  if (!crb(c,2)) { goto L_801027F4; } // 801027A4
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 801027A8
  if (crb(c,2)) { goto L_801027E0; } // 801027AC
  c->lr=0x801027B4u; f_800C8D44(c); // 801027B0
  c->r[4]=c->r[19]-c->r[20]; // 801027B4
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801027B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801027BC
  c->r[0]=c->r[3]-c->r[0]; // 801027C0
  c->r[0]=c->r[20]+c->r[0]; // 801027C4
  c->r[0]=c->r[0]^0x80000000u; // 801027C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801027CC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801027D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801027D4
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 801027D8
  goto L_801027F4; // 801027DC
L_801027E0:;
  c->r[0]=c->r[20]^0x80000000u; // 801027E0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801027E4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801027E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801027EC
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 801027F0
L_801027F4:;
  cmps(c,0,(int32_t)c->r[18],0); // 801027F4
  if (crb(c,2)) { goto L_80102884; } // 801027F8
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 801027FC
  c->r[4]=0u+0x00000001u; // 80102800
  cmps(c,0,(int32_t)c->r[0],-1); // 80102804
  if (!crb(c,1)) { goto L_80102850; } // 80102808
  c->r[3]=R32(c->r[29]+0x00000014u); // 8010280C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80102810
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80102814
  c->r[3]=R32(c->r[3]+0x00000024u); // 80102818
  c->r[5]=c->r[3]+c->r[0]; // 8010281C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80102820
  cmps(c,0,(int32_t)c->r[0],0); // 80102824
  if (!crb(c,2)) { goto L_80102844; } // 80102828
  c->r[3]=R32(c->r[29]+0x0000008Cu); // 8010282C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102830
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80102834
  if (crb(c,0)) { goto L_80102850; } // 80102838
  c->r[4]=0u+0x00000000u; // 8010283C
  goto L_80102850; // 80102840
L_80102844:;
  cmps(c,0,(int32_t)c->r[0],2); // 80102844
  if (!crb(c,2)) { goto L_80102850; } // 80102848
  c->r[4]=0u+0x00000000u; // 8010284C
L_80102850:;
  cmps(c,0,(int32_t)c->r[4],0); // 80102850
  if (crb(c,2)) { goto L_80102884; } // 80102854
  c->r[4]=R32(c->r[29]+0x00000080u); // 80102858
  c->r[0]=c->r[29]+0x00000080u; // 8010285C
  goto L_8010287C; // 80102860
L_80102864:;
  c->r[3]=R32(c->r[4]+0x00000024u); // 80102864
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 80102868
  if (!crb(c,2)) { goto L_80102878; } // 8010286C
  c->r[24]=c->r[4]|c->r[4]; // 80102870
  goto L_80102884; // 80102874
L_80102878:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80102878
L_8010287C:;
  cmpu(c,0,c->r[4],c->r[0]); // 8010287C
  if (!crb(c,2)) { IRQCHK(c); goto L_80102864; } // 80102880
L_80102884:;
  cmps(c,0,(int32_t)c->r[24],0); // 80102884
  if (crb(c,2)) { goto L_80102960; } // 80102888
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 8010288C
  c->r[4]=c->r[24]|c->r[24]; // 80102890
  W32(c->r[24]+0x0000008Cu,c->r[0]); // 80102894
  c->r[5]=c->r[16]|c->r[16]; // 80102898
  c->r[6]=c->r[1]+0x0000000Cu; // 8010289C
  c->r[26]=0u+0x00000001u; // 801028A0
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801028A4
  c->r[3]=R32(c->r[15]+0x00000004u); // 801028A8
  c->lr=0x801028B0u; f_800DA300(c); // 801028AC
  cmps(c,0,(int32_t)c->r[3],0); // 801028B0
  if (!crb(c,2)) { goto L_801028E8; } // 801028B4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801028B8
  cmps(c,0,(int32_t)c->r[0],0); // 801028BC
  if (!crb(c,2)) { goto L_80102980; } // 801028C0
  c->r[0]=R32(c->r[24]+0x00000024u); // 801028C4
  c->r[28]=c->r[24]|c->r[24]; // 801028C8
  c->r[0]=c->r[0]|0x00000001u; // 801028CC
  W32(c->r[24]+0x00000024u,c->r[0]); // 801028D0
  c->r[4]=R32(c->r[24]+0x0000005Cu); // 801028D4
  c->r[3]=R32(c->r[4]+0x00000058u); // 801028D8
  c->r[0]=c->r[3]+0x00000001u; // 801028DC
  W32(c->r[4]+0x00000058u,c->r[0]); // 801028E0
  goto L_80102980; // 801028E4
L_801028E8:;
  cmps(c,0,(int32_t)c->r[3],56); // 801028E8
  if (crb(c,2)) { goto L_801028F8; } // 801028EC
  cmps(c,0,(int32_t)c->r[3],21); // 801028F0
  if (!crb(c,2)) { goto L_8010290C; } // 801028F4
L_801028F8:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 801028F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801028FC
  W32(c->r[29]+0x00000024u,c->r[0]); // 80102900
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[30]);} // 80102904
  goto L_80102980; // 80102908
L_8010290C:;
  cmps(c,0,(int32_t)c->r[3],77); // 8010290C
  if (!crb(c,2)) { goto L_80103024; } // 80102910
  c->r[0]=R32(c->r[24]+0x0000003Cu); // 80102914
  W32(c->r[29]+0x0000003Cu,c->r[0]); // 80102918
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 8010291C
  c->r[0]=c->r[0]+c->r[16]; // 80102920
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 80102924
  c->r[0]=R32(c->r[29]+0x00000024u); // 80102928
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 8010292C
  W32(c->r[29]+0x00000024u,c->r[0]); // 80102930
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[30]);} // 80102934
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102938
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8010293C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80102940
  if (crb(c,2)) { goto L_80102980; } // 80102944
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102948
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010294C
  c->r[0]=c->r[0]|0x10000000u; // 80102950
  W32(c->r[3]+0x00000060u,c->r[0]); // 80102954
  goto L_80102980; // 80102958
  goto L_80103024; // 8010295C
L_80102960:;
  c->r[28]=0u+0x00000000u; // 80102960
  goto L_80102980; // 80102964
L_80102968:;
  c->r[28]=0u+0x00000000u; // 80102968
  goto L_80102980; // 8010296C
L_80102970:;
  c->r[0]=0u+0xFFFFFFFFu; // 80102970
  W32(c->r[29]+0x00000090u,c->r[0]); // 80102974
  c->r[26]=0u+0x00000001u; // 80102978
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[29]);} // 8010297C
L_80102980:;
  cmps(c,0,(int32_t)c->r[28],0); // 80102980
  if (crb(c,2)) { goto L_80102AE0; } // 80102984
  c->r[0]=R32(c->r[28]+0x00000034u); // 80102988
  cmps(c,0,(int32_t)c->r[0],0); // 8010298C
  if (crb(c,2)) { goto L_80102AE0; } // 80102990
  c->r[3]=c->r[15]|c->r[15]; // 80102994
  c->r[4]=c->r[28]|c->r[28]; // 80102998
  c->r[5]=c->r[17]|c->r[17]; // 8010299C
  c->r[6]=c->r[1]+0x00000011u; // 801029A0
  c->r[7]=0u+0x00000000u; // 801029A4
  c->lr=0x801029ACu; f_80103070(c); // 801029A8
  cmps(c,0,(int32_t)c->r[3],0); // 801029AC
  if (crb(c,2)) { goto L_801029B8; } // 801029B0
  goto L_80103024; // 801029B4
L_801029B8:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 801029B8
  c->r[4]=c->r[1]+0x0000000Bu; // 801029BC
  c->lr=0x801029C4u; f_80175A40(c); // 801029C0
  cmps(c,0,(int32_t)c->r[3],0); // 801029C4
  if (crb(c,2)) { goto L_801029D8; } // 801029C8
  cmps(c,0,(int32_t)c->r[3],36); // 801029CC
  if (crb(c,2)) { goto L_801029D8; } // 801029D0
  goto L_80103024; // 801029D4
L_801029D8:;
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801029D8
  cmps(c,0,(int32_t)c->r[0],0); // 801029DC
  if (crb(c,2)) { goto L_80102AE0; } // 801029E0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801029E4
  cmps(c,0,(int32_t)c->r[0],0); // 801029E8
  if (crb(c,2)) { goto L_80102AC0; } // 801029EC
  c->r[3]=c->r[28]|c->r[28]; // 801029F0
  c->lr=0x801029F8u; f_8010E890(c); // 801029F4
  cmps(c,0,(int32_t)c->r[3],0); // 801029F8
  if (crb(c,2)) { goto L_80102A3C; } // 801029FC
  c->r[5]=R32(c->r[1]+0x00000040u); // 80102A00
  c->r[6]=R32(c->r[1]+0x00000044u); // 80102A04
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80102A08
  if (crb(c,2)) { goto L_80102A3C; } // 80102A0C
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 80102A10
  c->r[4]=0u+0x00000001u; // 80102A14
  c->r[3]=R32(c->r[28]+0x00000034u); // 80102A18
  W32(c->r[1]+0x00000038u,c->r[5]); // 80102A1C
  c->lr=0x80102A24u; f_80175B90(c); // 80102A20
  cmps(c,0,(int32_t)c->r[3],0); // 80102A24
  if (crb(c,2)) { goto L_80102A30; } // 80102A28
  goto L_80103024; // 80102A2C
L_80102A30:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80102A30
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 80102A34
  goto L_80102AC0; // 80102A38
L_80102A3C:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102A3C
  c->lr=0x80102A44u; f_800D9B90(c); // 80102A40
  cmps(c,0,(int32_t)c->r[3],0); // 80102A44
  if (crb(c,2)) { goto L_80102AC0; } // 80102A48
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102A4C
  c->r[4]=c->r[1]+0x00000030u; // 80102A50
  c->r[5]=c->r[1]+0x00000034u; // 80102A54
  c->r[3]=R32(c->r[3]+0x00000014u); // 80102A58
  c->lr=0x80102A60u; f_8019EFA0(c); // 80102A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80102A60
  if (crb(c,2)) { goto L_80102A6C; } // 80102A64
  goto L_80103024; // 80102A68
L_80102A6C:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102A6C
  c->r[4]=c->r[1]+0x00000018u; // 80102A70
  c->r[5]=0u+0x00000000u; // 80102A74
  c->r[3]=R32(c->r[3]+0x00000014u); // 80102A78
  c->lr=0x80102A80u; f_8019E4D0(c); // 80102A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80102A80
  if (crb(c,2)) { goto L_80102A8C; } // 80102A84
  goto L_80103024; // 80102A88
L_80102A8C:;
  c->r[5]=R32(c->r[1]+0x00000034u); // 80102A8C
  c->r[4]=0u+0x00000001u; // 80102A90
  c->r[0]=R32(c->r[1]+0x00000018u); // 80102A94
  c->r[3]=R32(c->r[1]+0x00000030u); // 80102A98
  c->r[6]=addc(c,c->r[5],c->r[0],0); // 80102A9C
  W32(c->r[1]+0x00000034u,c->r[6]); // 80102AA0
  c->r[5]=addc(c,c->r[3],0,c->xer_ca); // 80102AA4
  W32(c->r[1]+0x00000030u,c->r[5]); // 80102AA8
  c->r[3]=R32(c->r[28]+0x00000034u); // 80102AAC
  c->lr=0x80102AB4u; f_80175B90(c); // 80102AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80102AB4
  if (crb(c,2)) { goto L_80102AC0; } // 80102AB8
  goto L_80103024; // 80102ABC
L_80102AC0:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 80102AC0
  c->r[4]=0u+0x00000000u; // 80102AC4
  c->lr=0x80102ACCu; f_801759F0(c); // 80102AC8
  cmps(c,0,(int32_t)c->r[3],0); // 80102ACC
  if (crb(c,2)) { goto L_80102AE0; } // 80102AD0
  cmps(c,0,(int32_t)c->r[3],36); // 80102AD4
  if (crb(c,2)) { goto L_80102AE0; } // 80102AD8
  goto L_80103024; // 80102ADC
L_80102AE0:;
  cmps(c,0,(int32_t)c->r[21],0); // 80102AE0
  if (crb(c,2)) { goto L_80102B68; } // 80102AE4
  c->r[3]=R32(c->r[28]+0x00000090u); // 80102AE8
  c->r[0]=c->r[3]+0x00010000u; // 80102AEC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80102AF0
  if (!crb(c,2)) { goto L_80102B4C; } // 80102AF4
  c->r[0]=R32(c->r[28]+0x00000034u); // 80102AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80102AFC
  if (crb(c,2)) { goto L_80102B4C; } // 80102B00
  c->r[7]=R32(c->r[15]+0x00000004u); // 80102B04
  c->r[12]=R32(c->r[7]+0x00000074u); // 80102B08
  cmps(c,0,(int32_t)c->r[12],0); // 80102B0C
  if (crb(c,2)) { goto L_80102B4C; } // 80102B10
  c->r[6]=R32(c->r[28]+0x0000005Cu); // 80102B14
  cmps(c,0,(int32_t)c->r[6],0); // 80102B18
  if (crb(c,2)) { goto L_80102B24; } // 80102B1C
  goto L_80102B28; // 80102B20
L_80102B24:;
  c->r[6]=c->r[28]|c->r[28]; // 80102B24
L_80102B28:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80102B28
  c->r[4]=0u+0x00000002u; // 80102B2C
  c->r[3]=R32(c->r[7]+0x00000018u); // 80102B30
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102B34
  c->r[6]=R32(c->r[6]+0x00000040u); // 80102B38
  c->r[5]=R32(c->r[5]+0x00000010u); // 80102B3C
  c->r[7]=R32(c->r[7]+0x00000078u); // 80102B40
  c->ctr=c->r[12]; // 80102B44
  if (true) { c->lr=0x80102B4Cu; dispatch(c,c->ctr); } // 80102B48
L_80102B4C:;
  W32(c->r[28]+0x0000008Cu,c->r[31]); // 80102B4C
  c->r[3]=c->r[28]|c->r[28]; // 80102B50
  c->r[4]=0u+0x00000000u; // 80102B54
  c->lr=0x80102B5Cu; f_8010E470(c); // 80102B58
  cmps(c,0,(int32_t)c->r[3],0); // 80102B5C
  if (crb(c,2)) { goto L_80102B68; } // 80102B60
  goto L_80103024; // 80102B64
L_80102B68:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 80102B68
L_80102B6C:;
  cmpu(c,0,c->r[29],c->r[14]); // 80102B6C
  if (!crb(c,2)) { IRQCHK(c); goto L_801022D8; } // 80102B70
  c->r[14]=R32(c->r[23]+0x00000034u); // 80102B74
  c->r[19]=c->r[23]+0x00000034u; // 80102B78
  goto L_80102E5C; // 80102B7C
L_80102B80:;
  c->r[12]=R32(c->r[15]+0x00000000u); // 80102B80
  c->r[3]=c->r[15]|c->r[15]; // 80102B84
  c->r[4]=c->r[14]|c->r[14]; // 80102B88
  c->r[5]=c->r[1]+0x0000000Au; // 80102B8C
  c->r[12]=R32(c->r[12]+0x00000098u); // 80102B90
  c->ctr=c->r[12]; // 80102B94
  if (true) { c->lr=0x80102B9Cu; dispatch(c,c->ctr); } // 80102B98
  cmps(c,0,(int32_t)c->r[3],0); // 80102B9C
  if (crb(c,2)) { goto L_80102BA8; } // 80102BA0
  goto L_80103024; // 80102BA4
L_80102BA8:;
  c->r[0]=R32(c->r[14]+0x00000024u); // 80102BA8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80102BAC
  if (crb(c,2)) { goto L_80102E58; } // 80102BB0
  c->r[18]=R32(c->r[14]+0x00000080u); // 80102BB4
  c->r[20]=c->r[14]+0x00000080u; // 80102BB8
  goto L_80102E50; // 80102BBC
L_80102BC0:;
  c->r[0]=R32(c->r[18]+0x00000024u); // 80102BC0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80102BC4
  if (crb(c,2)) { goto L_80102E4C; } // 80102BC8
  c->r[0]=R32(c->r[18]+0x00000034u); // 80102BCC
  c->r[21]=0u+0x00000000u; // 80102BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80102BD4
  if (!crb(c,2)) { goto L_80102D48; } // 80102BD8
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102BDC
  c->r[4]=c->r[18]|c->r[18]; // 80102BE0
  c->r[5]=c->r[16]|c->r[16]; // 80102BE4
  c->r[6]=0u+0x00000000u; // 80102BE8
  c->lr=0x80102BF0u; f_800DA300(c); // 80102BEC
  cmps(c,0,(int32_t)c->r[3],56); // 80102BF0
  if (crb(c,2)) { goto L_80102C00; } // 80102BF4
  cmps(c,0,(int32_t)c->r[3],21); // 80102BF8
  if (!crb(c,2)) { goto L_80102C04; } // 80102BFC
L_80102C00:;
  c->r[3]=0u+0x00000000u; // 80102C00
L_80102C04:;
  cmps(c,0,(int32_t)c->r[3],0); // 80102C04
  if (crb(c,2)) { goto L_80102C18; } // 80102C08
  cmps(c,0,(int32_t)c->r[3],77); // 80102C0C
  if (crb(c,2)) { goto L_80102C18; } // 80102C10
  goto L_80103024; // 80102C14
L_80102C18:;
  c->r[3]=R32(c->r[18]+0x00000034u); // 80102C18
  cmps(c,0,(int32_t)c->r[3],0); // 80102C1C
  if (crb(c,2)) { goto L_80102E48; } // 80102C20
  c->r[4]=c->r[1]+0x00000008u; // 80102C24
  c->lr=0x80102C2Cu; f_80175A40(c); // 80102C28
  cmps(c,0,(int32_t)c->r[3],0); // 80102C2C
  if (crb(c,2)) { goto L_80102C40; } // 80102C30
  cmps(c,0,(int32_t)c->r[3],36); // 80102C34
  if (crb(c,2)) { goto L_80102C40; } // 80102C38
  goto L_80103024; // 80102C3C
L_80102C40:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80102C40
  cmps(c,0,(int32_t)c->r[0],0); // 80102C44
  if (crb(c,2)) { goto L_80102E48; } // 80102C48
  c->r[0]=R8(c->r[1]+0x0000000Au); // 80102C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80102C50
  if (crb(c,2)) { goto L_80102D28; } // 80102C54
  c->r[3]=c->r[14]|c->r[14]; // 80102C58
  c->lr=0x80102C60u; f_8010E890(c); // 80102C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80102C60
  if (crb(c,2)) { goto L_80102CA4; } // 80102C64
  c->r[5]=R32(c->r[1]+0x00000040u); // 80102C68
  c->r[6]=R32(c->r[1]+0x00000044u); // 80102C6C
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80102C70
  if (crb(c,2)) { goto L_80102CA4; } // 80102C74
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80102C78
  c->r[4]=0u+0x00000001u; // 80102C7C
  c->r[3]=R32(c->r[14]+0x00000034u); // 80102C80
  W32(c->r[1]+0x00000028u,c->r[5]); // 80102C84
  c->lr=0x80102C8Cu; f_80175B90(c); // 80102C88
  cmps(c,0,(int32_t)c->r[3],0); // 80102C8C
  if (crb(c,2)) { goto L_80102C98; } // 80102C90
  goto L_80103024; // 80102C94
L_80102C98:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80102C98
  W32(c->r[14]+0x0000001Cu,c->r[0]); // 80102C9C
  goto L_80102D28; // 80102CA0
L_80102CA4:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102CA4
  c->lr=0x80102CACu; f_800D9B90(c); // 80102CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80102CAC
  if (crb(c,2)) { goto L_80102D28; } // 80102CB0
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102CB4
  c->r[4]=c->r[1]+0x00000020u; // 80102CB8
  c->r[5]=c->r[1]+0x00000024u; // 80102CBC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80102CC0
  c->lr=0x80102CC8u; f_8019EFA0(c); // 80102CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80102CC8
  if (crb(c,2)) { goto L_80102CD4; } // 80102CCC
  goto L_80103024; // 80102CD0
L_80102CD4:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80102CD4
  c->r[4]=c->r[1]+0x00000014u; // 80102CD8
  c->r[5]=0u+0x00000000u; // 80102CDC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80102CE0
  c->lr=0x80102CE8u; f_8019E4D0(c); // 80102CE4
  cmps(c,0,(int32_t)c->r[3],0); // 80102CE8
  if (crb(c,2)) { goto L_80102CF4; } // 80102CEC
  goto L_80103024; // 80102CF0
L_80102CF4:;
  c->r[5]=R32(c->r[1]+0x00000024u); // 80102CF4
  c->r[4]=0u+0x00000001u; // 80102CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102CFC
  c->r[3]=R32(c->r[1]+0x00000020u); // 80102D00
  c->r[6]=addc(c,c->r[5],c->r[0],0); // 80102D04
  W32(c->r[1]+0x00000024u,c->r[6]); // 80102D08
  c->r[5]=addc(c,c->r[3],0,c->xer_ca); // 80102D0C
  W32(c->r[1]+0x00000020u,c->r[5]); // 80102D10
  c->r[3]=R32(c->r[14]+0x00000034u); // 80102D14
  c->lr=0x80102D1Cu; f_80175B90(c); // 80102D18
  cmps(c,0,(int32_t)c->r[3],0); // 80102D1C
  if (crb(c,2)) { goto L_80102D28; } // 80102D20
  goto L_80103024; // 80102D24
L_80102D28:;
  c->r[3]=R32(c->r[18]+0x00000034u); // 80102D28
  c->r[4]=0u+0x00000000u; // 80102D2C
  c->lr=0x80102D34u; f_801759F0(c); // 80102D30
  cmps(c,0,(int32_t)c->r[3],0); // 80102D34
  if (crb(c,2)) { goto L_80102E48; } // 80102D38
  cmps(c,0,(int32_t)c->r[3],36); // 80102D3C
  if (crb(c,2)) { goto L_80102E48; } // 80102D40
  goto L_80103024; // 80102D44
L_80102D48:;
  c->r[3]=c->r[15]|c->r[15]; // 80102D48
  c->r[4]=c->r[18]|c->r[18]; // 80102D4C
  c->r[5]=c->r[17]|c->r[17]; // 80102D50
  c->r[6]=c->r[1]+0x00000011u; // 80102D54
  c->r[7]=0u+0x00000000u; // 80102D58
  c->lr=0x80102D60u; f_80103070(c); // 80102D5C
  cmps(c,0,(int32_t)c->r[3],36); // 80102D60
  if (crb(c,2)) { goto L_80102D78; } // 80102D64
  cmps(c,0,(int32_t)c->r[3],11); // 80102D68
  if (crb(c,2)) { goto L_80102D78; } // 80102D6C
  cmps(c,0,(int32_t)c->r[3],37); // 80102D70
  if (!crb(c,2)) { goto L_80102D80; } // 80102D74
L_80102D78:;
  c->r[21]=0u+0x00000001u; // 80102D78
  goto L_80102D8C; // 80102D7C
L_80102D80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80102D80
  if (crb(c,2)) { goto L_80102D8C; } // 80102D84
  goto L_80103024; // 80102D88
L_80102D8C:;
  cmps(c,0,(int32_t)c->r[21],0); // 80102D8C
  if (!crb(c,2)) { goto L_80102DD0; } // 80102D90
  c->r[3]=R32(c->r[18]+0x00000034u); // 80102D94
  c->r[4]=c->r[1]+0x00000009u; // 80102D98
  c->lr=0x80102DA0u; f_801762B0(c); // 80102D9C
  cmps(c,0,(int32_t)c->r[3],36); // 80102DA0
  if (crb(c,2)) { goto L_80102DB0; } // 80102DA4
  cmps(c,0,(int32_t)c->r[3],11); // 80102DA8
  if (!crb(c,2)) { goto L_80102DB8; } // 80102DAC
L_80102DB0:;
  W8(c->r[1]+0x00000009u,c->r[31]); // 80102DB0
  goto L_80102DC4; // 80102DB4
L_80102DB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80102DB8
  if (crb(c,2)) { goto L_80102DC4; } // 80102DBC
  goto L_80103024; // 80102DC0
L_80102DC4:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 80102DC4
  c->r[0]=cntlz(c->r[0]); // 80102DC8
  c->r[21]=rotl(c->r[0],27)&0x07FFFFFFu; // 80102DCC
L_80102DD0:;
  cmps(c,0,(int32_t)c->r[21],0); // 80102DD0
  if (crb(c,2)) { goto L_80102E44; } // 80102DD4
  c->r[7]=R32(c->r[15]+0x00000004u); // 80102DD8
  c->r[12]=R32(c->r[7]+0x00000074u); // 80102DDC
  cmps(c,0,(int32_t)c->r[12],0); // 80102DE0
  if (crb(c,2)) { goto L_80102E20; } // 80102DE4
  c->r[6]=R32(c->r[18]+0x0000005Cu); // 80102DE8
  cmps(c,0,(int32_t)c->r[6],0); // 80102DEC
  if (crb(c,2)) { goto L_80102DF8; } // 80102DF0
  goto L_80102DFC; // 80102DF4
L_80102DF8:;
  c->r[6]=c->r[18]|c->r[18]; // 80102DF8
L_80102DFC:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80102DFC
  c->r[4]=0u+0x00000002u; // 80102E00
  c->r[3]=R32(c->r[7]+0x00000018u); // 80102E04
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102E08
  c->r[6]=R32(c->r[6]+0x00000040u); // 80102E0C
  c->r[5]=R32(c->r[5]+0x00000010u); // 80102E10
  c->r[7]=R32(c->r[7]+0x00000078u); // 80102E14
  c->ctr=c->r[12]; // 80102E18
  if (true) { c->lr=0x80102E20u; dispatch(c,c->ctr); } // 80102E1C
L_80102E20:;
  c->r[0]=R32(c->r[18]+0x00000024u); // 80102E20
  c->r[3]=c->r[18]|c->r[18]; // 80102E24
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80102E28
  W32(c->r[18]+0x00000024u,c->r[0]); // 80102E2C
  c->lr=0x80102E34u; f_8010E340(c); // 80102E30
  c->r[3]=R32(c->r[14]+0x00000058u); // 80102E34
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80102E38
  W32(c->r[14]+0x00000058u,c->r[0]); // 80102E3C
  goto L_80102E48; // 80102E40
L_80102E44:;
  c->r[27]=0u+0x00000001u; // 80102E44
L_80102E48:;
  c->r[26]=0u+0x00000001u; // 80102E48
L_80102E4C:;
  c->r[18]=R32(c->r[18]+0x00000000u); // 80102E4C
L_80102E50:;
  cmpu(c,0,c->r[18],c->r[20]); // 80102E50
  if (!crb(c,2)) { IRQCHK(c); goto L_80102BC0; } // 80102E54
L_80102E58:;
  c->r[14]=R32(c->r[14]+0x00000000u); // 80102E58
L_80102E5C:;
  cmpu(c,0,c->r[14],c->r[19]); // 80102E5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80102B80; } // 80102E60
  c->r[0]=R8(c->r[1]+0x00000011u); // 80102E64
  cmps(c,0,(int32_t)c->r[0],0); // 80102E68
  if (crb(c,2)) { goto L_80102E94; } // 80102E6C
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102E70
  c->lr=0x80102E78u; f_800D9B90(c); // 80102E74
  cmps(c,0,(int32_t)c->r[3],0); // 80102E78
  if (crb(c,2)) { goto L_80102E94; } // 80102E7C
  c->r[3]=c->r[23]|c->r[23]; // 80102E80
  c->lr=0x80102E88u; f_8010C390(c); // 80102E84
  cmps(c,0,(int32_t)c->r[3],0); // 80102E88
  if (crb(c,2)) { goto L_80102E94; } // 80102E8C
  goto L_80103024; // 80102E90
L_80102E94:;
  c->r[23]=R32(c->r[23]+0x00000000u); // 80102E94
L_80102E98:;
  c->r[0]=R32(c->r[1]+0x00000058u); // 80102E98
  cmpu(c,0,c->r[23],c->r[0]); // 80102E9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801021C8; } // 80102EA0
  c->r[5]=R32(c->r[15]+0x00000004u); // 80102EA4
  c->r[0]=addc(c,~c->r[27],0x00000000u,1); // 80102EA8
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80102EAC
  c->r[3]=R32(c->r[5]+0x00000060u); // 80102EB0
  c->r[4]=rotl(c->r[0],0)&0x00040000u; // 80102EB4
  c->r[0]=rotl(c->r[3],0)&0xFFFBFFFFu; // 80102EB8
  W32(c->r[5]+0x00000060u,c->r[0]); // 80102EBC
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102EC0
  c->r[0]=R32(c->r[3]+0x00000060u); // 80102EC4
  c->r[0]=c->r[4]|c->r[0]; // 80102EC8
  W32(c->r[3]+0x00000060u,c->r[0]); // 80102ECC
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102ED0
  c->r[0]=R32(c->r[3]+0x00000060u); // 80102ED4
  c->r[0]=c->r[0]&~c->r[17]; // 80102ED8
  W32(c->r[3]+0x00000060u,c->r[0]); // 80102EDC
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102EE0
  c->r[4]=R32(c->r[3]+0x00000060u); // 80102EE4
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 80102EE8
  if (crb(c,2)) { goto L_80102FA4; } // 80102EEC
  cmps(c,0,(int32_t)c->r[26],0); // 80102EF0
  if (!crb(c,2)) { goto L_80102FA4; } // 80102EF4
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 80102EF8
  if (!crb(c,2)) { goto L_80102FA4; } // 80102EFC
  cmps(c,0,(int32_t)c->r[25],0); // 80102F00
  if (crb(c,2)) { goto L_80102FA4; } // 80102F04
  c->r[16]=R32(c->r[15]+0x00000018u); // 80102F08
  c->r[14]=c->r[15]+0x00000018u; // 80102F0C
  c->r[6]=0u+0x00000001u; // 80102F10
  goto L_80102F78; // 80102F14
L_80102F18:;
  c->r[5]=R32(c->r[16]+0x00000014u); // 80102F18
  c->r[0]=R32(c->r[5]+0x00000028u); // 80102F1C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80102F20
  if (crb(c,2)) { goto L_80102F74; } // 80102F24
  c->r[0]=R32(c->r[5]+0x00000024u); // 80102F28
  c->r[3]=0u+0x00000000u; // 80102F2C
  c->ctr=c->r[0]; // 80102F30
  cmps(c,0,(int32_t)c->r[0],0); // 80102F34
  if (!crb(c,1)) { goto L_80102F74; } // 80102F38
L_80102F3C:;
  c->r[4]=R32(c->r[5]+0x00000020u); // 80102F3C
  {uint32_t ea=c->r[16]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102F40
  {uint32_t ea=c->r[4]+c->r[3]; c->f[1]=c->ps1[1]=RF32(ea);} // 80102F44
  fcmp(c,0,c->f[1],c->f[0]); // 80102F48
  if (!crb(c,1)) { goto L_80102F6C; } // 80102F4C
  c->r[12]=R32(c->r[16]+0x00000010u); // 80102F50
  c->r[3]=c->r[16]|c->r[16]; // 80102F54
  c->r[12]=R32(c->r[12]+0x00000038u); // 80102F58
  c->ctr=c->r[12]; // 80102F5C
  if (true) { c->lr=0x80102F64u; dispatch(c,c->ctr); } // 80102F60
  c->r[6]=0u+0x00000000u; // 80102F64
  goto L_80102F74; // 80102F68
L_80102F6C:;
  c->r[3]=c->r[3]+0x00000004u; // 80102F6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80102F3C; } // 80102F70
L_80102F74:;
  c->r[16]=R32(c->r[16]+0x00000000u); // 80102F74
L_80102F78:;
  cmpu(c,0,c->r[16],c->r[14]); // 80102F78
  if (!crb(c,2)) { IRQCHK(c); goto L_80102F18; } // 80102F7C
  cmps(c,0,(int32_t)c->r[6],0); // 80102F80
  if (crb(c,2)) { goto L_80103020; } // 80102F84
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102F88
  c->r[4]=0u+0x00000001u; // 80102F8C
  c->r[12]=R32(c->r[3]+0x00000010u); // 80102F90
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102F94
  c->ctr=c->r[12]; // 80102F98
  if (true) { c->lr=0x80102FA0u; dispatch(c,c->ctr); } // 80102F9C
  goto L_80103020; // 80102FA0
L_80102FA4:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 80102FA4
  if (crb(c,2)) { goto L_80102FEC; } // 80102FA8
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 80102FAC
  if (!crb(c,2)) { goto L_80102FEC; } // 80102FB0
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 80102FB4
  if (!crb(c,2)) { goto L_80102FEC; } // 80102FB8
  cmps(c,0,(int32_t)c->r[26],0); // 80102FBC
  if (!crb(c,2)) { goto L_80102FEC; } // 80102FC0
  c->r[12]=R32(c->r[3]+0x00000010u); // 80102FC4
  c->r[4]=0u+0x00000000u; // 80102FC8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102FCC
  c->ctr=c->r[12]; // 80102FD0
  if (true) { c->lr=0x80102FD8u; dispatch(c,c->ctr); } // 80102FD4
  c->r[3]=R32(c->r[15]+0x00000004u); // 80102FD8
  c->r[0]=R32(c->r[3]+0x00000060u); // 80102FDC
  c->r[0]=rotl(c->r[0],0)&0xFEFFFFFFu; // 80102FE0
  W32(c->r[3]+0x00000060u,c->r[0]); // 80102FE4
  goto L_80103020; // 80102FE8
L_80102FEC:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 80102FEC
  if (crb(c,2)) { goto L_80103020; } // 80102FF0
  c->r[12]=R32(c->r[3]+0x00000010u); // 80102FF4
  c->r[4]=0u+0x00000000u; // 80102FF8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102FFC
  c->ctr=c->r[12]; // 80103000
  if (true) { c->lr=0x80103008u; dispatch(c,c->ctr); } // 80103004
  c->r[4]=R32(c->r[15]+0x00000004u); // 80103008
  c->r[3]=0u+0x00000057u; // 8010300C
  c->r[0]=R32(c->r[4]+0x00000060u); // 80103010
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80103014
  W32(c->r[4]+0x00000060u,c->r[0]); // 80103018
  goto L_80103024; // 8010301C
L_80103020:;
  c->r[3]=0u+0x00000000u; // 80103020
L_80103024:;
  c->r[11]=c->r[1]+0x000000B0u; // 80103024
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80103028
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8010302C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 80103030
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 80103034
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 80103038
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 8010303C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,28,ea,0,0);} // 80103040
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[28]=RF64(ea);} // 80103044
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,27,ea,0,0);} // 80103048
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[27]=RF64(ea);} // 8010304C
  c->lr=0x80103054u; f_800C2E64(c); // 80103050
  c->r[0]=R32(c->r[1]+0x00000104u); // 80103054
  c->lr=c->r[0]; // 80103058
  c->r[1]=c->r[1]+0x00000100u; // 8010305C
  return; // 80103060
}

// fn_80103070
void f_80103070(Ctx* __restrict c) {
  trace_call(0x80103070u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103070
  c->r[0]=c->lr; // 80103074
  W32(c->r[1]+0x00000234u,c->r[0]); // 80103078
  c->r[11]=c->r[1]+0x000001A0u; // 8010307C
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[31]);} // 80103080
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,31,ea,0,0);} // 80103084
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[30]);} // 80103088
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,30,ea,0,0);} // 8010308C
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[29]);} // 80103090
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,29,ea,0,0);} // 80103094
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[28]);} // 80103098
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,28,ea,0,0);} // 8010309C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[27]);} // 801030A0
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,27,ea,0,0);} // 801030A4
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[26]);} // 801030A8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,26,ea,0,0);} // 801030AC
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[25]);} // 801030B0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,25,ea,0,0);} // 801030B4
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[24]);} // 801030B8
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,24,ea,0,0);} // 801030BC
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[23]);} // 801030C0
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,23,ea,0,0);} // 801030C4
  c->lr=0x801030CCu; f_800C2E18(c); // 801030C8
  c->r[8]=R32(c->r[3]+0x00000004u); // 801030CC
  c->r[15]=c->r[3]|c->r[3]; // 801030D0
  c->r[16]=c->r[4]|c->r[4]; // 801030D4
  c->r[17]=c->r[5]|c->r[5]; // 801030D8
  {uint32_t ea=c->r[8]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801030DC
  c->r[18]=c->r[6]|c->r[6]; // 801030E0
  c->r[19]=c->r[7]|c->r[7]; // 801030E4
  c->lr=0x801030ECu; f_800E0CE0(c); // 801030E8
  c->r[4]=R32(c->r[15]+0x00000004u); // 801030EC
  c->r[30]=c->r[3]|c->r[3]; // 801030F0
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801030F4
  c->lr=0x801030FCu; f_800E0CE0(c); // 801030F8
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801030FC
  c->r[29]=c->r[3]|c->r[3]; // 80103100
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[27]=c->ps1[27]=RF32(ea);} // 80103104
  c->r[0]=0u+0x00000010u; // 80103108
  c->r[22]=R32(c->r[16]+0x00000014u); // 8010310C
  c->f[25]=c->f[31]; // 80103110
  c->f[30]=c->f[27]; // 80103114
  c->r[4]=c->r[1]+0x000000C0u; // 80103118
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 8010311C
  c->r[28]=0u+0x00000000u; // 80103120
  {uint32_t ea=c->r[16]+0x00000060u; c->f[26]=c->ps1[26]=RF32(ea);} // 80103124
  {uint32_t ea=c->r[16]+0x00000064u; c->f[29]=c->ps1[29]=RF32(ea);} // 80103128
  c->r[27]=0u+0x00000000u; // 8010312C
  c->r[26]=0u+0x00000000u; // 80103130
  c->r[25]=0u+0x00000000u; // 80103134
  c->r[24]=0u+0x00000000u; // 80103138
  c->r[3]=0u+0x00000000u; // 8010313C
  c->ctr=c->r[0]; // 80103140
L_80103144:;
  {uint32_t ea=c->r[4]+c->r[3]; WF32(ea,c->f[27]);} // 80103144
  c->r[3]=c->r[3]+0x00000004u; // 80103148
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103144; } // 8010314C
  c->r[0]=0u+0x00000008u; // 80103150
  c->r[4]=c->r[1]+0x000000A0u; // 80103154
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103158
  c->r[3]=0u+0x00000000u; // 8010315C
  c->ctr=c->r[0]; // 80103160
L_80103164:;
  {uint32_t ea=c->r[4]+c->r[3]; WF32(ea,c->f[0]);} // 80103164
  c->r[3]=c->r[3]+0x00000004u; // 80103168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103164; } // 8010316C
  c->r[3]=R32(c->r[16]+0x00000028u); // 80103170
  cmps(c,0,(int32_t)c->r[3],0); // 80103174
  if (crb(c,2)) { goto L_801031A4; } // 80103178
  c->r[4]=c->r[1]+0x00000028u; // 8010317C
  c->r[5]=0u+0x00000000u; // 80103180
  c->r[6]=0u+0x00000000u; // 80103184
  c->r[7]=0u+0x00000000u; // 80103188
  c->lr=0x80103190u; f_80194FC0(c); // 8010318C
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103190
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103194
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80103198
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8010319C
  goto L_801031D0; // 801031A0
L_801031A4:;
  c->r[3]=R32(c->r[16]+0x00000030u); // 801031A4
  cmps(c,0,(int32_t)c->r[3],0); // 801031A8
  if (crb(c,2)) { goto L_801031C8; } // 801031AC
  c->r[4]=c->r[1]+0x00000028u; // 801031B0
  c->r[5]=c->r[1]+0x00000024u; // 801031B4
  c->r[6]=c->r[1]+0x0000002Cu; // 801031B8
  c->r[7]=0u+0x00000000u; // 801031BC
  c->lr=0x801031C4u; f_80131510(c); // 801031C0
  goto L_801031D0; // 801031C4
L_801031C8:;
  c->r[3]=0u+0x00000000u; // 801031C8
  goto L_801040F4; // 801031CC
L_801031D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801031D0
  if (crb(c,2)) { goto L_801031DC; } // 801031D4
  goto L_801040F4; // 801031D8
L_801031DC:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801031DC
  c->r[14]=c->r[1]+0x000000A0u; // 801031E0
  {uint32_t ea=c->r[2]+0xFFFFA0C4u; c->f[23]=c->ps1[23]=RF32(ea);} // 801031E4
  c->r[31]=c->r[1]+0x000000C0u; // 801031E8
  c->r[23]=R32(c->r[3]+0x00000040u); // 801031EC
  {uint32_t ea=c->r[2]+0xFFFFA0C8u; c->f[24]=c->ps1[24]=RF32(ea);} // 801031F0
  goto L_801033C4; // 801031F4
L_801031F8:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 801031F8
  c->r[21]=R32(c->r[3]+0x00000010u); // 801031FC
  c->r[20]=R32(c->r[3]+0x00000014u); // 80103200
  c->r[0]=rotl(c->r[21],0)&0x00000008u; cr0(c,c->r[0]); // 80103204
  if (crb(c,2)) { goto L_8010323C; } // 80103208
  c->r[0]=rotl(c->r[21],0)&0x00000001u; cr0(c,c->r[0]); // 8010320C
  if (!crb(c,2)) { goto L_80103350; } // 80103210
  c->r[5]=R32(c->r[23]+0x00000020u); // 80103214
  c->r[4]=c->r[1]+0x00000030u; // 80103218
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010321C
  c->lr=0x80103224u; f_80101970(c); // 80103220
  cmps(c,0,(int32_t)c->r[3],0); // 80103224
  if (crb(c,2)) { goto L_80103230; } // 80103228
  goto L_801040F4; // 8010322C
L_80103230:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103230
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 80103234
  goto L_80103350; // 80103238
L_8010323C:;
  c->r[0]=rotl(c->r[21],0)&0x00000010u; cr0(c,c->r[0]); // 8010323C
  if (crb(c,2)) { goto L_80103288; } // 80103240
  c->r[0]=rotl(c->r[21],0)&0x00000001u; cr0(c,c->r[0]); // 80103244
  if (!crb(c,2)) { goto L_80103350; } // 80103248
  c->r[5]=R32(c->r[23]+0x00000020u); // 8010324C
  c->r[4]=c->r[1]+0x00000030u; // 80103250
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103254
  c->lr=0x8010325Cu; f_80101970(c); // 80103258
  cmps(c,0,(int32_t)c->r[3],0); // 8010325C
  if (crb(c,2)) { goto L_80103268; } // 80103260
  goto L_801040F4; // 80103264
L_80103268:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103268
  {uint32_t ea=c->r[2]+0xFFFFA0D0u; c->f[1]=RF64(ea);} // 8010326C
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[0]); // 80103270
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[24]); // 80103274
  c->lr=0x8010327Cu; f_800D29C4(c); // 80103278
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8010327C
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 80103280
  goto L_80103350; // 80103284
L_80103288:;
  c->r[0]=rotl(c->r[21],0)&0x00002000u; cr0(c,c->r[0]); // 80103288
  if (crb(c,2)) { goto L_801032E4; } // 8010328C
  c->r[0]=rotl(c->r[21],0)&0x00000001u; cr0(c,c->r[0]); // 80103290
  if (!crb(c,2)) { goto L_80103350; } // 80103294
  c->r[5]=R32(c->r[23]+0x00000020u); // 80103298
  c->r[4]=c->r[1]+0x00000020u; // 8010329C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801032A0
  c->lr=0x801032A8u; f_80101970(c); // 801032A4
  cmps(c,0,(int32_t)c->r[3],0); // 801032A8
  if (crb(c,2)) { goto L_801032B4; } // 801032AC
  goto L_801040F4; // 801032B0
L_801032B4:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 801032B4
  c->r[0]=R32(c->r[3]+0x00000020u); // 801032B8
  cmps(c,0,(int32_t)c->r[0],0); // 801032BC
  if (!crb(c,2)) { goto L_801032D0; } // 801032C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=c->ps1[31]=RF32(ea);} // 801032C4
  c->r[24]=0u+0x00000001u; // 801032C8
  goto L_80103350; // 801032CC
L_801032D0:;
  cmps(c,0,(int32_t)c->r[0],1); // 801032D0
  if (!crb(c,2)) { goto L_80103350; } // 801032D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[25]=c->ps1[25]=RF32(ea);} // 801032D8
  c->r[24]=0u+0x00000001u; // 801032DC
  goto L_80103350; // 801032E0
L_801032E4:;
  c->r[0]=rotl(c->r[21],0)&0xFFFF0000u; cr0(c,c->r[0]); // 801032E4
  if (crb(c,2)) { goto L_80103350; } // 801032E8
  c->r[0]=rotl(c->r[21],0)&0x00000001u; cr0(c,c->r[0]); // 801032EC
  if (!crb(c,2)) { goto L_80103350; } // 801032F0
  c->r[5]=R32(c->r[23]+0x00000020u); // 801032F4
  c->r[4]=c->r[1]+0x00000030u; // 801032F8
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801032FC
  c->lr=0x80103304u; f_80101970(c); // 80103300
  cmps(c,0,(int32_t)c->r[3],0); // 80103304
  if (crb(c,2)) { goto L_80103310; } // 80103308
  goto L_801040F4; // 8010330C
L_80103310:;
  c->r[0]=0u+0x00000010u; // 80103310
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103314
  c->r[4]=0u+0x00000000u; // 80103318
  c->r[3]=0u+0x00000000u; // 8010331C
  c->ctr=c->r[0]; // 80103320
L_80103324:;
  c->r[0]=0u+0x00010000u; // 80103324
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80103328
  c->r[0]=c->r[21]&c->r[0]; cr0(c,c->r[0]); // 8010332C
  if (crb(c,2)) { goto L_80103340; } // 80103330
  {uint32_t ea=c->r[31]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 80103334
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80103338
  {uint32_t ea=c->r[31]+c->r[3]; WF32(ea,c->f[0]);} // 8010333C
L_80103340:;
  c->r[4]=c->r[4]+0x00000001u; // 80103340
  c->r[3]=c->r[3]+0x00000004u; // 80103344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103324; } // 80103348
  c->r[27]=0u+0x00000001u; // 8010334C
L_80103350:;
  c->r[0]=rotl(c->r[20],0)&0x0000FF00u; cr0(c,c->r[0]); // 80103350
  if (crb(c,2)) { goto L_801033C0; } // 80103354
  c->r[0]=rotl(c->r[21],0)&0x00000001u; cr0(c,c->r[0]); // 80103358
  if (!crb(c,2)) { goto L_801033C0; } // 8010335C
  c->r[5]=R32(c->r[23]+0x00000020u); // 80103360
  c->r[4]=c->r[1]+0x00000030u; // 80103364
  c->r[3]=R32(c->r[23]+0x00000014u); // 80103368
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010336C
  c->lr=0x80103374u; f_80101970(c); // 80103370
  cmps(c,0,(int32_t)c->r[3],0); // 80103374
  if (crb(c,2)) { goto L_80103380; } // 80103378
  goto L_801040F4; // 8010337C
L_80103380:;
  c->r[0]=0u+0x00000008u; // 80103380
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103384
  c->r[4]=0u+0x00000000u; // 80103388
  c->r[3]=0u+0x00000000u; // 8010338C
  c->ctr=c->r[0]; // 80103390
L_80103394:;
  c->r[0]=0u+0x00000100u; // 80103394
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80103398
  c->r[0]=c->r[20]&c->r[0]; cr0(c,c->r[0]); // 8010339C
  if (crb(c,2)) { goto L_801033B0; } // 801033A0
  {uint32_t ea=c->r[14]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 801033A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801033A8
  {uint32_t ea=c->r[14]+c->r[3]; WF32(ea,c->f[0]);} // 801033AC
L_801033B0:;
  c->r[4]=c->r[4]+0x00000001u; // 801033B0
  c->r[3]=c->r[3]+0x00000004u; // 801033B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103394; } // 801033B8
  c->r[26]=0u+0x00000001u; // 801033BC
L_801033C0:;
  c->r[23]=R32(c->r[23]+0x00000000u); // 801033C0
L_801033C4:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801033C4
  c->r[0]=c->r[3]+0x00000040u; // 801033C8
  cmpu(c,0,c->r[23],c->r[0]); // 801033CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801031F8; } // 801033D0
  cmps(c,0,(int32_t)c->r[24],0); // 801033D4
  if (crb(c,2)) { goto L_801033F8; } // 801033D8
  c->f[1]=c->f[31]; // 801033DC
  c->r[3]=R32(c->r[16]+0x00000034u); // 801033E0
  c->f[2]=c->f[25]; // 801033E4
  c->lr=0x801033ECu; f_80176160(c); // 801033E8
  cmps(c,0,(int32_t)c->r[3],0); // 801033EC
  if (crb(c,2)) { goto L_801033F8; } // 801033F0
  goto L_801040F4; // 801033F4
L_801033F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801033F8
  if (crb(c,2)) { goto L_8010341C; } // 801033FC
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103400
  c->r[4]=c->r[1]+0x000000C0u; // 80103404
  c->r[5]=0u+0x00000010u; // 80103408
  c->lr=0x80103410u; f_80175D20(c); // 8010340C
  cmps(c,0,(int32_t)c->r[3],0); // 80103410
  if (crb(c,2)) { goto L_8010341C; } // 80103414
  goto L_801040F4; // 80103418
L_8010341C:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 8010341C
  c->r[4]=0u+0x00000100u; // 80103420
  c->lr=0x80103428u; f_8010C560(c); // 80103424
  cmps(c,0,(int32_t)c->r[3],0); // 80103428
  if (crb(c,2)) { goto L_80103470; } // 8010342C
  c->r[4]=R32(c->r[3]+0x00000014u); // 80103430
  c->r[0]=R32(c->r[4]+0x00000010u); // 80103434
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80103438
  if (!crb(c,2)) { goto L_80103470; } // 8010343C
  c->r[5]=R32(c->r[3]+0x00000020u); // 80103440
  c->r[3]=c->r[4]|c->r[4]; // 80103444
  c->r[4]=c->r[1]+0x00000030u; // 80103448
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010344C
  c->lr=0x80103454u; f_80101970(c); // 80103450
  cmps(c,0,(int32_t)c->r[3],0); // 80103454
  if (crb(c,2)) { goto L_80103460; } // 80103458
  goto L_801040F4; // 8010345C
L_80103460:;
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103460
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103464
  c->f[25]=c->ps1[25]=S(c->f[1]*c->f[0]); // 80103468
  goto L_80103478; // 8010346C
L_80103470:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103470
  {uint32_t ea=c->r[3]+0x00000110u; c->f[25]=c->ps1[25]=RF32(ea);} // 80103474
L_80103478:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 80103478
  c->r[4]=0u+0x00000800u; // 8010347C
  c->lr=0x80103484u; f_8010C560(c); // 80103480
  c->r[14]=c->r[3]|c->r[3]; // 80103484
  c->r[3]=R32(c->r[16]+0x00000018u); // 80103488
  c->r[4]=0u+0x00000200u; // 8010348C
  c->lr=0x80103494u; f_8010C560(c); // 80103490
  cmps(c,0,(int32_t)c->r[14],0); // 80103494
  if (crb(c,2)) { goto L_801035A0; } // 80103498
  c->r[4]=R32(c->r[14]+0x00000014u); // 8010349C
  c->r[0]=R32(c->r[4]+0x00000010u); // 801034A0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801034A4
  if (!crb(c,2)) { goto L_801035A0; } // 801034A8
  c->r[0]=R16(c->r[14]+0x00000024u); // 801034AC
  c->r[4]=c->r[1]+0x00000030u; // 801034B0
  c->r[0]=c->r[0]&0x0000FFF7u; cr0(c,c->r[0]); // 801034B4
  W16(c->r[14]+0x00000024u,c->r[0]); // 801034B8
  c->r[5]=R32(c->r[14]+0x00000020u); // 801034BC
  c->r[3]=R32(c->r[14]+0x00000014u); // 801034C0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801034C4
  c->lr=0x801034CCu; f_80101970(c); // 801034C8
  cmps(c,0,(int32_t)c->r[3],0); // 801034CC
  if (crb(c,2)) { goto L_801034D8; } // 801034D0
  goto L_801040F4; // 801034D4
L_801034D8:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801034D8
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801034DC
  fcmp(c,0,c->f[1],c->f[0]); // 801034E0
  if (!crb(c,1)) { goto L_80103514; } // 801034E4
  c->lr=0x801034ECu; f_800D29C0(c); // 801034E8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801034EC
  {uint32_t ea=c->r[2]+0xFFFFA0E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801034F0
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801034F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801034F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801034FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80103500
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[0]);} // 80103504
  c->r[0]=R32(c->r[1]+0x00000154u); // 80103508
  c->r[30]=c->r[30]+c->r[0]; // 8010350C
  goto L_80103518; // 80103510
L_80103514:;
  c->r[30]=c->r[30]+0xFFFFD8F0u; // 80103514
L_80103518:;
  c->r[3]=R32(c->r[14]+0x00000000u); // 80103518
  c->r[0]=R16(c->r[3]+0x00000024u); // 8010351C
  cmpu(c,1,c->r[3],c->r[14]); // 80103520
  c->r[0]=c->r[0]&0x0000FFF7u; cr0(c,c->r[0]); // 80103524
  W16(c->r[3]+0x00000024u,c->r[0]); // 80103528
  if (crb(c,6)) { goto L_80103598; } // 8010352C
  cmps(c,0,(int32_t)c->r[3],0); // 80103530
  if (crb(c,2)) { goto L_80103598; } // 80103534
  c->r[5]=R32(c->r[3]+0x00000020u); // 80103538
  c->r[4]=c->r[1]+0x00000030u; // 8010353C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103540
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103544
  c->lr=0x8010354Cu; f_80101970(c); // 80103548
  cmps(c,0,(int32_t)c->r[3],0); // 8010354C
  if (crb(c,2)) { goto L_80103558; } // 80103550
  goto L_801040F4; // 80103554
L_80103558:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103558
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010355C
  fcmp(c,0,c->f[1],c->f[0]); // 80103560
  if (!crb(c,1)) { goto L_80103594; } // 80103564
  c->lr=0x8010356Cu; f_800D29C0(c); // 80103568
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8010356C
  {uint32_t ea=c->r[2]+0xFFFFA0E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103570
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103574
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80103578
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8010357C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80103580
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[0]);} // 80103584
  c->r[0]=R32(c->r[1]+0x00000154u); // 80103588
  c->r[29]=c->r[29]+c->r[0]; // 8010358C
  goto L_80103598; // 80103590
L_80103594:;
  c->r[29]=c->r[29]+0xFFFFD8F0u; // 80103594
L_80103598:;
  c->r[19]=0u+0x00000001u; // 80103598
  goto L_80103628; // 8010359C
L_801035A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801035A0
  if (crb(c,2)) { goto L_80103628; } // 801035A4
  c->r[4]=R32(c->r[3]+0x00000014u); // 801035A8
  c->r[0]=R32(c->r[4]+0x00000010u); // 801035AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801035B0
  if (!crb(c,2)) { goto L_80103628; } // 801035B4
  c->r[0]=R16(c->r[3]+0x00000024u); // 801035B8
  c->r[4]=c->r[1]+0x00000030u; // 801035BC
  c->r[0]=c->r[0]&0x0000FFF7u; cr0(c,c->r[0]); // 801035C0
  W16(c->r[3]+0x00000024u,c->r[0]); // 801035C4
  c->r[5]=R32(c->r[3]+0x00000020u); // 801035C8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801035CC
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801035D0
  c->lr=0x801035D8u; f_80101970(c); // 801035D4
  cmps(c,0,(int32_t)c->r[3],0); // 801035D8
  if (crb(c,2)) { goto L_801035E4; } // 801035DC
  goto L_801040F4; // 801035E0
L_801035E4:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801035E4
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801035E8
  fcmp(c,0,c->f[1],c->f[0]); // 801035EC
  if (!crb(c,1)) { goto L_80103620; } // 801035F0
  c->lr=0x801035F8u; f_800D29C0(c); // 801035F4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801035F8
  {uint32_t ea=c->r[2]+0xFFFFA0E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801035FC
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103600
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80103604
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80103608
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8010360C
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[0]);} // 80103610
  c->r[0]=R32(c->r[1]+0x00000154u); // 80103614
  c->r[30]=c->r[30]+c->r[0]; // 80103618
  goto L_80103624; // 8010361C
L_80103620:;
  c->r[30]=c->r[30]+0xFFFFD8F0u; // 80103620
L_80103624:;
  c->r[19]=0u+0x00000001u; // 80103624
L_80103628:;
  c->r[5]=R32(c->r[15]+0x00000004u); // 80103628
  c->r[4]=0u+0x00000400u; // 8010362C
  c->r[3]=R32(c->r[16]+0x00000018u); // 80103630
  {uint32_t ea=c->r[5]+0x00000114u; c->f[31]=c->ps1[31]=RF32(ea);} // 80103634
  c->lr=0x8010363Cu; f_8010C560(c); // 80103638
  cmps(c,0,(int32_t)c->r[3],0); // 8010363C
  if (crb(c,2)) { goto L_8010367C; } // 80103640
  c->r[4]=R32(c->r[3]+0x00000014u); // 80103644
  c->r[0]=R32(c->r[4]+0x00000010u); // 80103648
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8010364C
  if (!crb(c,2)) { goto L_8010367C; } // 80103650
  c->r[5]=R32(c->r[3]+0x00000020u); // 80103654
  c->r[3]=c->r[4]|c->r[4]; // 80103658
  c->r[4]=c->r[1]+0x00000030u; // 8010365C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103660
  c->lr=0x80103668u; f_80101970(c); // 80103664
  cmps(c,0,(int32_t)c->r[3],0); // 80103668
  if (crb(c,2)) { goto L_80103674; } // 8010366C
  goto L_801040F4; // 80103670
L_80103674:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103674
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 80103678
L_8010367C:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 8010367C
  c->r[4]=0u+0x00000020u; // 80103680
  c->lr=0x80103688u; f_8010C560(c); // 80103684
  cmps(c,0,(int32_t)c->r[3],0); // 80103688
  if (crb(c,2)) { goto L_801036E4; } // 8010368C
  c->r[4]=R32(c->r[3]+0x00000014u); // 80103690
  c->r[0]=R32(c->r[4]+0x00000010u); // 80103694
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80103698
  if (!crb(c,2)) { goto L_801036E4; } // 8010369C
  c->r[5]=R32(c->r[3]+0x00000020u); // 801036A0
  c->r[3]=c->r[4]|c->r[4]; // 801036A4
  c->r[4]=c->r[1]+0x00000030u; // 801036A8
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801036AC
  c->lr=0x801036B4u; f_80101970(c); // 801036B0
  cmps(c,0,(int32_t)c->r[3],0); // 801036B4
  if (crb(c,2)) { goto L_801036C0; } // 801036B8
  goto L_801040F4; // 801036BC
L_801036C0:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801036C0
  c->r[28]=0u+0x00000001u; // 801036C4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801036C8
  {uint32_t ea=c->r[2]+0xFFFFA0E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801036CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801036D0
  {uint32_t ea=c->r[2]+0xFFFFA0E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801036D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801036D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801036DC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801036E0
L_801036E4:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801036E4
  c->r[4]=0u+0x00000080u; // 801036E8
  c->lr=0x801036F0u; f_8010C560(c); // 801036EC
  cmps(c,0,(int32_t)c->r[3],0); // 801036F0
  c->r[14]=c->r[3]|c->r[3]; // 801036F4
  if (crb(c,2)) { goto L_80103838; } // 801036F8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801036FC
  c->r[0]=R32(c->r[3]+0x00000010u); // 80103700
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80103704
  if (!crb(c,2)) { goto L_80103838; } // 80103708
  c->r[4]=R32(c->r[15]+0x00000004u); // 8010370C
  c->r[0]=R32(c->r[4]+0x00000060u); // 80103710
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80103714
  if (crb(c,2)) { goto L_80103838; } // 80103718
  c->r[5]=R32(c->r[14]+0x00000020u); // 8010371C
  c->r[4]=c->r[1]+0x0000001Cu; // 80103720
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103724
  c->lr=0x8010372Cu; f_80101970(c); // 80103728
  cmps(c,0,(int32_t)c->r[3],0); // 8010372C
  if (crb(c,2)) { goto L_80103738; } // 80103730
  goto L_801040F4; // 80103734
L_80103738:;
  {uint32_t ea=c->r[2]+0xFFFFA0E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103738
  c->r[4]=c->r[1]+0x00000018u; // 8010373C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80103740
  {uint32_t ea=c->r[2]+0xFFFFA0E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103744
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80103748
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8010374C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80103750
  c->r[20]=R32(c->r[14]+0x00000000u); // 80103754
  c->r[5]=R32(c->r[20]+0x00000020u); // 80103758
  c->r[3]=R32(c->r[20]+0x00000014u); // 8010375C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103760
  c->lr=0x80103768u; f_80101970(c); // 80103764
  cmps(c,0,(int32_t)c->r[3],0); // 80103768
  if (crb(c,2)) { goto L_80103774; } // 8010376C
  goto L_801040F4; // 80103770
L_80103774:;
  {uint32_t ea=c->r[2]+0xFFFFA0E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103774
  c->r[4]=c->r[1]+0x00000014u; // 80103778
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010377C
  {uint32_t ea=c->r[2]+0xFFFFA0E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103780
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80103784
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80103788
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8010378C
  c->r[3]=R32(c->r[20]+0x00000000u); // 80103790
  c->r[5]=R32(c->r[3]+0x00000020u); // 80103794
  c->r[3]=R32(c->r[3]+0x00000014u); // 80103798
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010379C
  c->lr=0x801037A4u; f_80101970(c); // 801037A0
  cmps(c,0,(int32_t)c->r[3],0); // 801037A4
  if (crb(c,2)) { goto L_801037B0; } // 801037A8
  goto L_801040F4; // 801037AC
L_801037B0:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 801037B0
  c->r[4]=c->r[1]+0x00000010u; // 801037B4
  c->r[3]=R32(c->r[3]+0x00000014u); // 801037B8
  c->lr=0x801037C0u; f_8019E640(c); // 801037BC
  cmps(c,0,(int32_t)c->r[3],0); // 801037C0
  if (crb(c,2)) { goto L_801037CC; } // 801037C4
  goto L_801040F4; // 801037C8
L_801037CC:;
  c->r[3]=R32(c->r[14]+0x00000014u); // 801037CC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801037D0
  c->r[3]=R32(c->r[3]+0x00000010u); // 801037D4
  cmps(c,0,(int32_t)c->r[0],6); // 801037D8
  c->r[0]=rotl(c->r[3],17)&0x00000001u; // 801037DC
  if (!crb(c,2)) { goto L_801037F8; } // 801037E0
  cmps(c,0,(int32_t)c->r[0],0); // 801037E4
  c->r[14]=0u+0x00000001u; // 801037E8
  if (crb(c,2)) { goto L_80103808; } // 801037EC
  c->r[14]=0u+0x00000003u; // 801037F0
  goto L_80103808; // 801037F4
L_801037F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801037F8
  c->r[14]=0u+0x00000000u; // 801037FC
  if (crb(c,2)) { goto L_80103808; } // 80103800
  c->r[14]=0u+0x00000002u; // 80103804
L_80103808:;
  c->r[4]=R32(c->r[15]+0x00000004u); // 80103808
  c->r[3]=c->r[1]+0x00000080u; // 8010380C
  c->r[5]=0u+0x00000020u; // 80103810
  c->r[4]=c->r[4]+0x00000118u; // 80103814
  c->lr=0x8010381Cu; f_80004000(c); // 80103818
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010381C
  c->r[3]=c->r[14]|c->r[14]; // 80103820
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103824
  c->r[4]=c->r[1]+0x00000080u; // 80103828
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010382C
  c->lr=0x80103834u; f_800D80A0(c); // 80103830
  c->r[25]=0u+0x00000001u; // 80103834
L_80103838:;
  cmps(c,0,(int32_t)c->r[26],0); // 80103838
  if (!crb(c,2)) { goto L_80103848; } // 8010383C
  cmps(c,0,(int32_t)c->r[25],0); // 80103840
  if (crb(c,2)) { goto L_801038DC; } // 80103844
L_80103848:;
  cmps(c,0,(int32_t)c->r[26],0); // 80103848
  if (crb(c,2)) { goto L_80103890; } // 8010384C
  cmps(c,0,(int32_t)c->r[25],0); // 80103850
  if (crb(c,2)) { goto L_80103890; } // 80103854
  c->r[0]=0u+0x00000008u; // 80103858
  c->r[6]=c->r[1]+0x000000A0u; // 8010385C
  c->r[5]=c->r[1]+0x00000080u; // 80103860
  c->r[4]=c->r[1]+0x00000060u; // 80103864
  c->r[3]=0u+0x00000000u; // 80103868
  c->ctr=c->r[0]; // 8010386C
L_80103870:;
  {uint32_t ea=c->r[6]+c->r[3]; c->f[1]=c->ps1[1]=RF32(ea);} // 80103870
  {uint32_t ea=c->r[5]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 80103874
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80103878
  {uint32_t ea=c->r[4]+c->r[3]; WF32(ea,c->f[0]);} // 8010387C
  c->r[3]=c->r[3]+0x00000004u; // 80103880
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103870; } // 80103884
  c->r[4]=c->r[1]+0x00000060u; // 80103888
  goto L_801038A0; // 8010388C
L_80103890:;
  cmps(c,0,(int32_t)c->r[26],0); // 80103890
  c->r[4]=c->r[1]+0x00000080u; // 80103894
  if (crb(c,2)) { goto L_801038A0; } // 80103898
  c->r[4]=c->r[1]+0x000000A0u; // 8010389C
L_801038A0:;
  c->r[3]=R32(c->r[16]+0x00000034u); // 801038A0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801038A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801038A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801038AC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801038B0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 801038B4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 801038B8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[7]=c->ps1[7]=RF32(ea);} // 801038BC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801038C0
  c->lr=0x801038C8u; f_80175C90(c); // 801038C4
  cmps(c,0,(int32_t)c->r[3],0); // 801038C8
  if (crb(c,2)) { goto L_801038DC; } // 801038CC
  cmps(c,0,(int32_t)c->r[3],36); // 801038D0
  if (crb(c,2)) { goto L_801038DC; } // 801038D4
  goto L_801040F4; // 801038D8
L_801038DC:;
  {uint32_t ea=c->r[22]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801038DC
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801038E0
  fcmp(c,0,c->f[0],c->f[1]); // 801038E4
  if (crb(c,1)) { goto L_801038F8; } // 801038E8
  {uint32_t ea=c->r[22]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801038EC
  fcmp(c,0,c->f[0],c->f[1]); // 801038F0
  if (!crb(c,1)) { goto L_80103CFC; } // 801038F4
L_801038F8:;
  c->r[3]=R32(c->r[16]+0x00000018u); // 801038F8
  c->r[3]=R32(c->r[3]+0x00000024u); // 801038FC
  cmps(c,0,(int32_t)c->r[3],0); // 80103900
  if (crb(c,2)) { goto L_80103B08; } // 80103904
  {uint32_t ea=c->r[22]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103908
  {uint32_t ea=c->r[22]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010390C
  {uint32_t ea=c->r[22]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103910
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80103914
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103918
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 8010391C
  fcmp(c,0,c->f[3],c->f[0]); // 80103920
  if (!crb(c,0)) { goto L_80103B08; } // 80103924
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 80103928
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010392C
  fcmp(c,0,c->f[3],c->f[0]); // 80103930
  if (!crb(c,0)) { goto L_80103940; } // 80103934
  c->f[3]=c->f[0]; // 80103938
  goto L_80103944; // 8010393C
L_80103940:;
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 80103940
L_80103944:;
  c->r[0]=R32(c->r[22]+0x00000038u); // 80103944
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80103948
  cmpu(c,0,c->r[0],0x00000001u); // 8010394C
  if (crb(c,2)) { goto L_80103988; } // 80103950
  cmpu(c,0,c->r[0],0x00000002u); // 80103954
  if (crb(c,2)) { goto L_80103994; } // 80103958
  cmpu(c,0,c->r[0],0x00000003u); // 8010395C
  if (crb(c,2)) { goto L_801039AC; } // 80103960
  cmpu(c,0,c->r[0],0x00000004u); // 80103964
  if (crb(c,2)) { goto L_801039E0; } // 80103968
  cmpu(c,0,c->r[0],0x00000005u); // 8010396C
  if (crb(c,2)) { goto L_80103A14; } // 80103970
  cmpu(c,0,c->r[0],0x00000006u); // 80103974
  if (crb(c,2)) { goto L_80103A48; } // 80103978
  cmpu(c,0,c->r[0],0x00000007u); // 8010397C
  if (crb(c,2)) { goto L_80103A7C; } // 80103980
  goto L_80103AB0; // 80103984
L_80103988:;
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103988
  c->f[28]=c->ps1[28]=S(c->f[3]*c->f[0]); // 8010398C
  goto L_80103CFC; // 80103990
L_80103994:;
  c->f[1]=c->f[3]; // 80103994
  c->lr=0x8010399Cu; f_800D2C14(c); // 80103998
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8010399C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801039A0
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 801039A4
  goto L_80103CFC; // 801039A8
L_801039AC:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801039AC
  {uint32_t ea=c->r[2]+0xFFFFA0F0u; c->f[1]=RF64(ea);} // 801039B0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801039B4
  c->lr=0x801039BCu; f_800D29C4(c); // 801039B8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801039BC
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801039C0
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801039C4
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801039C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801039CC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801039D0
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801039D4
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 801039D8
  goto L_80103CFC; // 801039DC
L_801039E0:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801039E0
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=RF64(ea);} // 801039E4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801039E8
  c->lr=0x801039F0u; f_800D29C4(c); // 801039EC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801039F0
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801039F4
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 801039F8
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801039FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103A00
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103A04
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103A08
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103A0C
  goto L_80103CFC; // 80103A10
L_80103A14:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A14
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=RF64(ea);} // 80103A18
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80103A1C
  c->lr=0x80103A24u; f_800D29C4(c); // 80103A20
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103A24
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103A28
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103A2C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A30
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103A34
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103A38
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103A3C
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103A40
  goto L_80103CFC; // 80103A44
L_80103A48:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A48
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[1]=RF64(ea);} // 80103A4C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80103A50
  c->lr=0x80103A58u; f_800D29C4(c); // 80103A54
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103A58
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103A5C
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103A60
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A64
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103A68
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103A6C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103A70
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103A74
  goto L_80103CFC; // 80103A78
L_80103A7C:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A7C
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[1]=RF64(ea);} // 80103A80
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80103A84
  c->lr=0x80103A8Cu; f_800D29C4(c); // 80103A88
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103A8C
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103A90
  {uint32_t ea=c->r[2]+0xFFFFA130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103A94
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103A98
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103A9C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103AA0
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103AA4
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103AA8
  goto L_80103CFC; // 80103AAC
L_80103AB0:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103AB0
  c->f[1]=c->f[3]; // 80103AB4
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103AB8
  c->r[3]=c->r[1]+0x00000038u; // 80103ABC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80103AC0
  c->r[4]=c->r[1]+0x00000040u; // 80103AC4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80103AC8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 80103ACC
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103AD0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80103AD4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80103AD8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80103ADC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 80103AE0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 80103AE4
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103AE8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80103AEC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80103AF0
  c->lr=0x80103AF8u; f_800D8160(c); // 80103AF4
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103AF8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103AFC
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 80103B00
  goto L_80103CFC; // 80103B04
L_80103B08:;
  {uint32_t ea=c->r[22]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103B08
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103B0C
  fcmp(c,0,c->f[1],c->f[0]); // 80103B10
  if (crb(c,2)) { goto L_80103CFC; } // 80103B14
  cmps(c,0,(int32_t)c->r[3],0); // 80103B18
  if (crb(c,2)) { goto L_80103CFC; } // 80103B1C
  {uint32_t ea=c->r[22]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103B20
  {uint32_t ea=c->r[22]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103B24
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80103B28
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103B2C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80103B30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80103B34
  fcmp(c,0,c->f[3],c->f[0]); // 80103B38
  if (!crb(c,1)) { goto L_80103CFC; } // 80103B3C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 80103B40
  fcmp(c,0,c->f[2],c->f[1]); // 80103B44
  if (!crb(c,1)) { goto L_80103B54; } // 80103B48
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103B4C
  goto L_80103B58; // 80103B50
L_80103B54:;
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[1]); // 80103B54
L_80103B58:;
  c->r[0]=R32(c->r[22]+0x00000038u); // 80103B58
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 80103B5C
  cmpu(c,0,c->r[0],0x00000001u); // 80103B60
  if (crb(c,2)) { goto L_80103B9C; } // 80103B64
  cmpu(c,0,c->r[0],0x00000002u); // 80103B68
  if (crb(c,2)) { goto L_80103BB0; } // 80103B6C
  cmpu(c,0,c->r[0],0x00000003u); // 80103B70
  if (crb(c,2)) { goto L_80103BCC; } // 80103B74
  cmpu(c,0,c->r[0],0x00000004u); // 80103B78
  if (crb(c,2)) { goto L_80103BF8; } // 80103B7C
  cmpu(c,0,c->r[0],0x00000005u); // 80103B80
  if (crb(c,2)) { goto L_80103C24; } // 80103B84
  cmpu(c,0,c->r[0],0x00000006u); // 80103B88
  if (crb(c,2)) { goto L_80103C50; } // 80103B8C
  cmpu(c,0,c->r[0],0x00000007u); // 80103B90
  if (crb(c,2)) { goto L_80103C7C; } // 80103B94
  goto L_80103CA8; // 80103B98
L_80103B9C:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103B9C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103BA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80103BA4
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[0]); // 80103BA8
  goto L_80103CFC; // 80103BAC
L_80103BB0:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103BB0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80103BB4
  c->lr=0x80103BBCu; f_800D2C14(c); // 80103BB8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80103BBC
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103BC0
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103BC4
  goto L_80103CFC; // 80103BC8
L_80103BCC:;
  {uint32_t ea=c->r[2]+0xFFFFA0F0u; c->f[1]=RF64(ea);} // 80103BCC
  c->lr=0x80103BD4u; f_800D29C4(c); // 80103BD0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103BD4
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103BD8
  {uint32_t ea=c->r[2]+0xFFFFA0D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103BDC
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103BE0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103BE4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103BE8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103BEC
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103BF0
  goto L_80103CFC; // 80103BF4
L_80103BF8:;
  {uint32_t ea=c->r[2]+0xFFFFA0F8u; c->f[1]=RF64(ea);} // 80103BF8
  c->lr=0x80103C00u; f_800D29C4(c); // 80103BFC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103C00
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103C04
  {uint32_t ea=c->r[2]+0xFFFFA100u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103C08
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103C0C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103C10
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103C14
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103C18
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103C1C
  goto L_80103CFC; // 80103C20
L_80103C24:;
  {uint32_t ea=c->r[2]+0xFFFFA108u; c->f[1]=RF64(ea);} // 80103C24
  c->lr=0x80103C2Cu; f_800D29C4(c); // 80103C28
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103C2C
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103C30
  {uint32_t ea=c->r[2]+0xFFFFA110u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103C34
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103C38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103C3C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103C40
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103C44
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103C48
  goto L_80103CFC; // 80103C4C
L_80103C50:;
  {uint32_t ea=c->r[2]+0xFFFFA128u; c->f[1]=RF64(ea);} // 80103C50
  c->lr=0x80103C58u; f_800D29C4(c); // 80103C54
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103C58
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103C5C
  {uint32_t ea=c->r[2]+0xFFFFA130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103C60
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103C64
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103C68
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103C6C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103C70
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103C74
  goto L_80103CFC; // 80103C78
L_80103C7C:;
  {uint32_t ea=c->r[2]+0xFFFFA118u; c->f[1]=RF64(ea);} // 80103C7C
  c->lr=0x80103C84u; f_800D29C4(c); // 80103C80
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80103C84
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103C88
  {uint32_t ea=c->r[2]+0xFFFFA120u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103C8C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103C90
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80103C94
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80103C98
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80103C9C
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 80103CA0
  goto L_80103CFC; // 80103CA4
L_80103CA8:;
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80103CA8
  c->f[1]=c->f[2]; // 80103CAC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80103CB0
  c->r[3]=c->r[1]+0x00000038u; // 80103CB4
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103CB8
  c->r[4]=c->r[1]+0x00000040u; // 80103CBC
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103CC0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80103CC4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 80103CC8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80103CCC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80103CD0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80103CD4
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103CD8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80103CDC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 80103CE0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80103CE4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 80103CE8
  c->lr=0x80103CF0u; f_800D8160(c); // 80103CEC
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103CF0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103CF4
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 80103CF8
L_80103CFC:;
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[27]); // 80103CFC
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80103D00
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103D04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80103D08
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 80103D0C
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80103D10
  c->f[24]=c->ps1[24]=S(c->f[0]*c->f[1]); // 80103D14
  c->ctr=c->r[12]; // 80103D18
  if (true) { c->lr=0x80103D20u; dispatch(c,c->ctr); } // 80103D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80103D20
  if (crb(c,2)) { goto L_80103D2C; } // 80103D24
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[24]=c->ps1[24]=RF32(ea);} // 80103D28
L_80103D2C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103D2C
  c->r[3]=R32(c->r[22]+0x00000038u); // 80103D30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 80103D34
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 80103D38
  c->f[23]=c->ps1[23]=S(c->f[30]*c->f[0]); // 80103D3C
  if (crb(c,2)) { goto L_80103DB4; } // 80103D40
  {uint32_t ea=c->r[22]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103D44
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 80103D48
  c->f[2]=c->f[1]; // 80103D4C
  if (!crb(c,2)) { goto L_80103D6C; } // 80103D50
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103D54
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80103D58
  cmps(c,0,(int32_t)c->r[3],0); // 80103D5C
  if (crb(c,2)) { goto L_80103D6C; } // 80103D60
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103D64
  goto L_80103D88; // 80103D68
L_80103D6C:;
  cmpu(c,0,c->r[0],0x00000200u); // 80103D6C
  if (!crb(c,2)) { goto L_80103D88; } // 80103D70
  c->r[3]=R32(c->r[16]+0x00000018u); // 80103D74
  c->r[3]=R32(c->r[3]+0x00000024u); // 80103D78
  cmps(c,0,(int32_t)c->r[3],0); // 80103D7C
  if (crb(c,2)) { goto L_80103D88; } // 80103D80
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80103D84
L_80103D88:;
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103D88
  fcmp(c,0,c->f[0],c->f[1]); // 80103D8C
  if (!crb(c,2)) { goto L_80103D98; } // 80103D90
  {uint32_t ea=c->r[2]+0xFFFFA134u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103D94
L_80103D98:;
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[1]); // 80103D98
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80103D9C
  {uint32_t ea=c->r[22]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80103DA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80103DA4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80103DA8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80103DAC
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[0]); // 80103DB0
L_80103DB4:;
  {uint32_t ea=c->r[22]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103DB4
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103DB8
  c->r[0]=R32(c->r[16]+0x00000038u); // 80103DBC
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[0]); // 80103DC0
  cmpu(c,0,c->r[3],c->r[0]); // 80103DC4
  if (crb(c,2)) { goto L_80103DE4; } // 80103DC8
  {uint32_t ea=c->r[2]+0xFFFFA138u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103DCC
  c->r[18]=0u+0x00000000u; // 80103DD0
  {uint32_t ea=c->r[16]+0x00000074u; WF32(ea,c->f[0]);} // 80103DD4
  {uint32_t ea=c->r[16]+0x00000078u; WF32(ea,c->f[0]);} // 80103DD8
  {uint32_t ea=c->r[16]+0x0000007Cu; WF32(ea,c->f[0]);} // 80103DDC
  W32(c->r[16]+0x00000038u,c->r[3]); // 80103DE0
L_80103DE4:;
  {uint32_t ea=c->r[16]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103DE4
  fcmp(c,0,c->f[24],c->f[0]); // 80103DE8
  if (crb(c,2)) { goto L_80103E14; } // 80103DEC
  c->f[1]=c->f[24]; // 80103DF0
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103DF4
  c->lr=0x80103DFCu; f_80175AA0(c); // 80103DF8
  cmps(c,0,(int32_t)c->r[3],0); // 80103DFC
  if (crb(c,2)) { goto L_80103E10; } // 80103E00
  cmps(c,0,(int32_t)c->r[3],36); // 80103E04
  if (crb(c,2)) { goto L_80103E10; } // 80103E08
  goto L_801040F4; // 80103E0C
L_80103E10:;
  {uint32_t ea=c->r[16]+0x00000074u; WF32(ea,c->f[24]);} // 80103E10
L_80103E14:;
  {uint32_t ea=c->r[16]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80103E14
  fcmp(c,0,c->f[23],c->f[0]); // 80103E18
  if (crb(c,2)) { goto L_80103E54; } // 80103E1C
  c->f[1]=c->f[23]; // 80103E20
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103E24
  c->lr=0x80103E2Cu; f_80175AF0(c); // 80103E28
  cmps(c,0,(int32_t)c->r[3],0); // 80103E2C
  if (crb(c,2)) { goto L_80103E40; } // 80103E30
  cmps(c,0,(int32_t)c->r[3],36); // 80103E34
  if (crb(c,2)) { goto L_80103E40; } // 80103E38
  goto L_801040F4; // 80103E3C
L_80103E40:;
  cmps(c,0,(int32_t)c->r[18],0); // 80103E40
  {uint32_t ea=c->r[16]+0x00000078u; WF32(ea,c->f[23]);} // 80103E44
  if (crb(c,2)) { goto L_80103E54; } // 80103E48
  c->r[0]=0u+0x00000001u; // 80103E4C
  W8(c->r[18]+0x00000000u,c->r[0]); // 80103E50
L_80103E54:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103E54
  c->r[0]=R32(c->r[3]+0x00000040u); // 80103E58
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80103E5C
  if (crb(c,2)) { goto L_80103EA4; } // 80103E60
  cmps(c,0,(int32_t)c->r[28],0); // 80103E64
  if (crb(c,2)) { goto L_80103EA4; } // 80103E68
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103E6C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80103E70
  c->lr=0x80103E78u; f_80175B40(c); // 80103E74
  cmps(c,0,(int32_t)c->r[3],0); // 80103E78
  if (crb(c,2)) { goto L_80103E9C; } // 80103E7C
  cmps(c,0,(int32_t)c->r[3],36); // 80103E80
  if (crb(c,2)) { goto L_80103E9C; } // 80103E84
  cmps(c,0,(int32_t)c->r[3],25); // 80103E88
  if (crb(c,2)) { goto L_80103E9C; } // 80103E8C
  cmps(c,0,(int32_t)c->r[3],48); // 80103E90
  if (crb(c,2)) { goto L_80103E9C; } // 80103E94
  goto L_801040F4; // 80103E98
L_80103E9C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80103E9C
  {uint32_t ea=c->r[16]+0x0000007Cu; WF32(ea,c->f[0]);} // 80103EA0
L_80103EA4:;
  cmps(c,0,(int32_t)c->r[19],0); // 80103EA4
  if (crb(c,2)) { goto L_80104034; } // 80103EA8
  cmps(c,0,(int32_t)c->r[30],-10000); // 80103EAC
  c->r[0]=0u+0x00000000u; // 80103EB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80103EB4
  c->r[18]=0u+0xFFFFD8F0u; // 80103EB8
  if (crb(c,0)) { goto L_80103EC4; } // 80103EBC
  c->r[18]=c->r[30]|c->r[30]; // 80103EC0
L_80103EC4:;
  cmps(c,0,(int32_t)c->r[29],-10000); // 80103EC4
  c->r[14]=0u+0xFFFFD8F0u; // 80103EC8
  if (crb(c,0)) { goto L_80103ED4; } // 80103ECC
  c->r[14]=c->r[29]|c->r[29]; // 80103ED0
L_80103ED4:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103ED4
  c->r[0]=R32(c->r[3]+0x00000060u); // 80103ED8
  c->r[0]=rotl(c->r[0],0)&0x00400000u; cr0(c,c->r[0]); // 80103EDC
  if (crb(c,2)) { goto L_80103F00; } // 80103EE0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 80103EE4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 80103EE8
  if (crb(c,2)) { goto L_80103F00; } // 80103EEC
  c->r[3]=R32(c->r[16]+0x00000018u); // 80103EF0
  c->r[4]=c->r[1]+0x0000000Cu; // 80103EF4
  c->r[3]=R32(c->r[3]+0x00000028u); // 80103EF8
  c->lr=0x80103F00u; f_80186F50(c); // 80103EFC
L_80103F00:;
  c->r[3]=c->r[1]+0x00000100u; // 80103F00
  c->r[4]=0u+0x00000000u; // 80103F04
  c->r[5]=0u+0x0000004Cu; // 80103F08
  c->lr=0x80103F10u; f_80004350(c); // 80103F0C
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103F10
  c->r[0]=R32(c->r[3]+0x00000044u); // 80103F14
  cmps(c,0,(int32_t)c->r[0],0); // 80103F18
  if (crb(c,2)) { goto L_80103FDC; } // 80103F1C
  c->r[19]=0u+0x00000000u; // 80103F20
  c->r[20]=0u+0x00000000u; // 80103F24
L_80103F28:;
  W32(c->r[1]+0x00000108u,c->r[18]); // 80103F28
  W32(c->r[1]+0x00000100u,c->r[14]); // 80103F2C
  c->r[4]=R32(c->r[15]+0x00000004u); // 80103F30
  c->r[0]=R32(c->r[4]+0x00000044u); // 80103F34
  c->r[3]=c->r[0]+c->r[20]; // 80103F38
  c->r[0]=R32(c->r[3]+0x00000008u); // 80103F3C
  c->r[0]=c->r[18]+c->r[0]; // 80103F40
  W32(c->r[1]+0x00000108u,c->r[0]); // 80103F44
  c->r[3]=R32(c->r[4]+0x00000044u); // 80103F48
  c->r[0]=R32(c->r[3]+c->r[20]); // 80103F4C
  c->r[0]=c->r[14]+c->r[0]; // 80103F50
  W32(c->r[1]+0x00000100u,c->r[0]); // 80103F54
  c->r[0]=R32(c->r[4]+0x00000044u); // 80103F58
  c->r[3]=c->r[0]+c->r[20]; // 80103F5C
  c->r[0]=R32(c->r[3]+0x00000044u); // 80103F60
  W32(c->r[1]+0x00000144u,c->r[0]); // 80103F64
  c->r[0]=R32(c->r[4]+0x00000044u); // 80103F68
  c->r[3]=c->r[0]+c->r[20]; // 80103F6C
  c->r[0]=R32(c->r[3]+0x00000048u); // 80103F70
  cmps(c,0,(int32_t)c->r[0],0); // 80103F74
  if (!crb(c,2)) { goto L_80103F84; } // 80103F78
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80103F7C
  W32(c->r[3]+0x00000048u,c->r[0]); // 80103F80
L_80103F84:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80103F84
  c->r[4]=c->r[1]+0x00000100u; // 80103F88
  c->r[0]=R32(c->r[3]+0x00000044u); // 80103F8C
  c->r[3]=c->r[0]+c->r[20]; // 80103F90
  c->r[0]=R32(c->r[3]+0x00000048u); // 80103F94
  W32(c->r[1]+0x00000148u,c->r[0]); // 80103F98
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103F9C
  c->lr=0x80103FA4u; f_80175EA0(c); // 80103FA0
  cmps(c,0,(int32_t)c->r[3],0); // 80103FA4
  if (crb(c,2)) { goto L_80103FC8; } // 80103FA8
  cmps(c,0,(int32_t)c->r[3],36); // 80103FAC
  if (crb(c,2)) { goto L_80103FC8; } // 80103FB0
  cmps(c,0,(int32_t)c->r[3],80); // 80103FB4
  if (crb(c,2)) { goto L_80103FC8; } // 80103FB8
  cmps(c,0,(int32_t)c->r[3],71); // 80103FBC
  if (crb(c,2)) { goto L_80103FC8; } // 80103FC0
  goto L_801040F4; // 80103FC4
L_80103FC8:;
  c->r[19]=c->r[19]+0x00000001u; // 80103FC8
  c->r[20]=c->r[20]+0x0000004Cu; // 80103FCC
  cmps(c,0,(int32_t)c->r[19],4); // 80103FD0
  if (crb(c,0)) { IRQCHK(c); goto L_80103F28; } // 80103FD4
  goto L_80104034; // 80103FD8
L_80103FDC:;
  c->r[3]=R32(c->r[16]+0x00000034u); // 80103FDC
  c->r[4]=c->r[1]+0x00000100u; // 80103FE0
  c->lr=0x80103FE8u; f_80175EF0(c); // 80103FE4
  c->r[3]=R32(c->r[1]+0x00000144u); // 80103FE8
  c->r[4]=c->r[1]+0x00000100u; // 80103FEC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80103FF0
  c->r[3]=c->r[3]|0x000000F0u; // 80103FF4
  W32(c->r[1]+0x00000108u,c->r[18]); // 80103FF8
  W32(c->r[1]+0x00000100u,c->r[14]); // 80103FFC
  W32(c->r[1]+0x00000144u,c->r[3]); // 80104000
  W32(c->r[1]+0x00000148u,c->r[0]); // 80104004
  c->r[3]=R32(c->r[16]+0x00000034u); // 80104008
  c->lr=0x80104010u; f_80175EA0(c); // 8010400C
  cmps(c,0,(int32_t)c->r[3],0); // 80104010
  if (crb(c,2)) { goto L_80104034; } // 80104014
  cmps(c,0,(int32_t)c->r[3],36); // 80104018
  if (crb(c,2)) { goto L_80104034; } // 8010401C
  cmps(c,0,(int32_t)c->r[3],80); // 80104020
  if (crb(c,2)) { goto L_80104034; } // 80104024
  cmps(c,0,(int32_t)c->r[3],71); // 80104028
  if (crb(c,2)) { goto L_80104034; } // 8010402C
  goto L_801040F4; // 80104030
L_80104034:;
  c->r[3]=R32(c->r[16]+0x00000034u); // 80104034
  c->r[4]=c->r[1]+0x00000008u; // 80104038
  c->lr=0x80104040u; f_80176420(c); // 8010403C
  cmps(c,0,(int32_t)c->r[3],0); // 80104040
  if (crb(c,2)) { goto L_80104054; } // 80104044
  cmps(c,0,(int32_t)c->r[3],36); // 80104048
  if (crb(c,2)) { goto L_80104054; } // 8010404C
  goto L_801040F4; // 80104050
L_80104054:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 80104054
  c->r[0]=R32(c->r[3]+0x00000040u); // 80104058
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8010405C
  if (crb(c,2)) { goto L_801040B0; } // 80104060
  c->r[0]=R32(c->r[1]+0x00000008u); // 80104064
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80104068
  if (crb(c,2)) { goto L_801040B0; } // 8010406C
  c->f[1]=c->f[25]; // 80104070
  c->r[3]=R32(c->r[16]+0x00000034u); // 80104074
  c->lr=0x8010407Cu; f_801761C0(c); // 80104078
  cmps(c,0,(int32_t)c->r[3],0); // 8010407C
  if (crb(c,2)) { goto L_80104090; } // 80104080
  cmps(c,0,(int32_t)c->r[3],36); // 80104084
  if (crb(c,2)) { goto L_80104090; } // 80104088
  goto L_801040F4; // 8010408C
L_80104090:;
  c->f[1]=c->f[31]; // 80104090
  c->r[3]=R32(c->r[16]+0x00000034u); // 80104094
  c->lr=0x8010409Cu; f_80176210(c); // 80104098
  cmps(c,0,(int32_t)c->r[3],0); // 8010409C
  if (crb(c,2)) { goto L_801040B0; } // 801040A0
  cmps(c,0,(int32_t)c->r[3],36); // 801040A4
  if (crb(c,2)) { goto L_801040B0; } // 801040A8
  goto L_801040F4; // 801040AC
L_801040B0:;
  c->r[3]=R32(c->r[15]+0x00000004u); // 801040B0
  c->r[0]=R32(c->r[3]+0x00000040u); // 801040B4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801040B8
  if (crb(c,2)) { goto L_801040F0; } // 801040BC
  c->r[0]=rotl(c->r[17],0)&0x00000010u; cr0(c,c->r[0]); // 801040C0
  if (crb(c,2)) { goto L_801040F0; } // 801040C4
  {uint32_t ea=c->r[3]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801040C8
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801040CC
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801040D0
  c->r[3]=R32(c->r[16]+0x00000034u); // 801040D4
  c->lr=0x801040DCu; f_801760A0(c); // 801040D8
  cmps(c,0,(int32_t)c->r[3],0); // 801040DC
  if (crb(c,2)) { goto L_801040F0; } // 801040E0
  cmps(c,0,(int32_t)c->r[3],36); // 801040E4
  if (crb(c,2)) { goto L_801040F0; } // 801040E8
  goto L_801040F4; // 801040EC
L_801040F0:;
  c->r[3]=0u+0x00000000u; // 801040F0
L_801040F4:;
  c->r[11]=c->r[1]+0x000001A0u; // 801040F4
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,31,ea,0,0);} // 801040F8
  {uint32_t ea=c->r[1]+0x00000220u; c->f[31]=RF64(ea);} // 801040FC
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,30,ea,0,0);} // 80104100
  {uint32_t ea=c->r[1]+0x00000210u; c->f[30]=RF64(ea);} // 80104104
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,29,ea,0,0);} // 80104108
  {uint32_t ea=c->r[1]+0x00000200u; c->f[29]=RF64(ea);} // 8010410C
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,28,ea,0,0);} // 80104110
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[28]=RF64(ea);} // 80104114
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,27,ea,0,0);} // 80104118
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[27]=RF64(ea);} // 8010411C
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,26,ea,0,0);} // 80104120
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[26]=RF64(ea);} // 80104124
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,25,ea,0,0);} // 80104128
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[25]=RF64(ea);} // 8010412C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,24,ea,0,0);} // 80104130
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[24]=RF64(ea);} // 80104134
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,23,ea,0,0);} // 80104138
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[23]=RF64(ea);} // 8010413C
  c->lr=0x80104144u; f_800C2E64(c); // 80104140
  c->r[0]=R32(c->r[1]+0x00000234u); // 80104144
  c->lr=c->r[0]; // 80104148
  c->r[1]=c->r[1]+0x00000230u; // 8010414C
  return; // 80104150
}

// fn_80104160
void f_80104160(Ctx* __restrict c) {
  trace_call(0x80104160u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104160
  c->r[0]=c->lr; // 80104164
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104168
  c->r[11]=c->r[1]+0x00000020u; // 8010416C
  c->lr=0x80104174u; f_800C2E54(c); // 80104170
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80104174
  c->r[29]=c->r[3]|c->r[3]; // 80104178
  c->r[31]=c->r[3]+0x0000000Cu; // 8010417C
  goto L_801041CC; // 80104180
L_80104184:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80104184
  c->lr=0x8010418Cu; f_801041F0(c); // 80104188
  c->r[4]=c->r[3]|c->r[3]; // 8010418C
  c->r[3]=c->r[30]|c->r[30]; // 80104190
  c->lr=0x80104198u; f_8010C5A0(c); // 80104194
  cmps(c,0,(int32_t)c->r[3],0); // 80104198
  if (crb(c,2)) { goto L_801041A4; } // 8010419C
  goto L_801041D8; // 801041A0
L_801041A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801041A4
  c->r[4]=0u+0x00000080u; // 801041A8
  c->lr=0x801041B0u; f_8010C560(c); // 801041AC
  cmps(c,0,(int32_t)c->r[3],0); // 801041B0
  if (crb(c,2)) { goto L_801041C8; } // 801041B4
  c->r[3]=R32(c->r[29]+0x00000004u); // 801041B8
  c->r[0]=R32(c->r[3]+0x00000060u); // 801041BC
  c->r[0]=c->r[0]|0x00000008u; // 801041C0
  W32(c->r[3]+0x00000060u,c->r[0]); // 801041C4
L_801041C8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801041C8
L_801041CC:;
  cmpu(c,0,c->r[30],c->r[31]); // 801041CC
  if (!crb(c,2)) { IRQCHK(c); goto L_80104184; } // 801041D0
  c->r[3]=0u+0x00000000u; // 801041D4
L_801041D8:;
  c->r[11]=c->r[1]+0x00000020u; // 801041D8
  c->lr=0x801041E0u; f_800C2EA0(c); // 801041DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801041E0
  c->lr=c->r[0]; // 801041E4
  c->r[1]=c->r[1]+0x00000020u; // 801041E8
  return; // 801041EC
}

// fn_801041F0
void f_801041F0(Ctx* __restrict c) {
  trace_call(0x801041F0u);
  c->r[3]=R32(c->r[3]+0x000000ACu); // 801041F0
  cmps(c,0,(int32_t)c->r[3],0); // 801041F4
  if (crb(c,2)) { goto L_80104204; } // 801041F8
  c->r[3]=R32(c->r[3]+0x00000018u); // 801041FC
  return; // 80104200
L_80104204:;
  c->r[3]=0u+0x00000000u; // 80104204
  return; // 80104208
}

// fn_80104210
void f_80104210(Ctx* __restrict c) {
  trace_call(0x80104210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104210
  c->r[0]=c->lr; // 80104214
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010421C
  c->r[31]=c->r[3]+0x0000000Cu; // 80104220
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104224
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80104228
  goto L_80104248; // 8010422C
L_80104230:;
  c->r[3]=c->r[30]|c->r[30]; // 80104230
  c->lr=0x80104238u; f_8010CCA0(c); // 80104234
  cmps(c,0,(int32_t)c->r[3],0); // 80104238
  if (crb(c,2)) { goto L_80104244; } // 8010423C
  goto L_80104254; // 80104240
L_80104244:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80104244
L_80104248:;
  cmpu(c,0,c->r[30],c->r[31]); // 80104248
  if (!crb(c,2)) { IRQCHK(c); goto L_80104230; } // 8010424C
  c->r[3]=0u+0x00000000u; // 80104250
L_80104254:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104258
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010425C
  c->lr=c->r[0]; // 80104260
  c->r[1]=c->r[1]+0x00000010u; // 80104264
  return; // 80104268
}

// fn_80104270
void f_80104270(Ctx* __restrict c) {
  trace_call(0x80104270u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104270
  c->r[0]=c->lr; // 80104274
  W32(c->r[1]+0x00000034u,c->r[0]); // 80104278
  c->r[11]=c->r[1]+0x00000030u; // 8010427C
  c->lr=0x80104284u; f_800C2E3C(c); // 80104280
  c->r[25]=c->r[3]|c->r[3]; // 80104284
  c->r[26]=c->r[4]|c->r[4]; // 80104288
  c->r[31]=rotl(c->r[4],0)&0x00000002u; // 8010428C
  c->r[30]=0u+0x00000000u; // 80104290
  c->r[24]=0u+0x00000000u; // 80104294
  goto L_801043C0; // 80104298
L_8010429C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010429C
  if (crb(c,2)) { goto L_801042AC; } // 801042A0
  c->r[4]=R32(c->r[5]+0x00000000u); // 801042A4
  goto L_801042B0; // 801042A8
L_801042AC:;
  c->r[4]=0u+0x00000000u; // 801042AC
L_801042B0:;
  c->r[4]=R32(c->r[4]+0x000000A8u); // 801042B0
  c->r[4]=R32(c->r[4]+0x00000020u); // 801042B4
  c->r[29]=R32(c->r[4]+c->r[24]); // 801042B8
  c->r[0]=R32(c->r[29]+0x00000014u); // 801042BC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801042C0
  if (crb(c,2)) { goto L_801043B8; } // 801042C4
  c->r[4]=c->r[30]|c->r[30]; // 801042C8
  c->lr=0x801042D0u; f_800D99F0(c); // 801042CC
  cmps(c,0,(int32_t)c->r[3],0); // 801042D0
  if (!crb(c,2)) { goto L_801043B8; } // 801042D4
  c->r[3]=R32(c->r[25]+0x00000004u); // 801042D8
  c->r[4]=R32(c->r[3]+0x000000ACu); // 801042DC
  cmps(c,0,(int32_t)c->r[4],0); // 801042E0
  if (crb(c,2)) { goto L_801042F0; } // 801042E4
  c->r[3]=R32(c->r[4]+0x00000000u); // 801042E8
  goto L_801042F4; // 801042EC
L_801042F0:;
  c->r[3]=0u+0x00000000u; // 801042F0
L_801042F4:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 801042F4
  cmps(c,0,(int32_t)c->r[4],0); // 801042F8
  c->r[3]=R32(c->r[3]+0x00000028u); // 801042FC
  c->r[0]=R32(c->r[3]+c->r[24]); // 80104300
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 80104304
  if (crb(c,2)) { goto L_80104314; } // 80104308
  c->r[3]=R32(c->r[4]+0x00000000u); // 8010430C
  goto L_80104318; // 80104310
L_80104314:;
  c->r[3]=0u+0x00000000u; // 80104314
L_80104318:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104318
  c->r[27]=0u+0x00000000u; // 8010431C
  c->r[3]=R32(c->r[3]+0x00000028u); // 80104320
  c->r[0]=R32(c->r[3]+c->r[24]); // 80104324
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80104328
  c->r[23]=c->r[28]+c->r[0]; // 8010432C
  goto L_801043A0; // 80104330
L_80104334:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 80104334
  c->r[4]=0u+0x00000000u; // 80104338
  if (crb(c,0)) { goto L_80104350; } // 8010433C
  c->r[3]=R32(c->r[25]+0x00000004u); // 80104340
  c->r[0]=R32(c->r[3]+0x00000060u); // 80104344
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80104348
  if (crb(c,2)) { goto L_80104354; } // 8010434C
L_80104350:;
  c->r[4]=0u+0x00000001u; // 80104350
L_80104354:;
  c->r[6]=R32(c->r[25]+0x00000004u); // 80104354
  cmps(c,0,(int32_t)c->r[4],0); // 80104358
  c->r[0]=0u+0x00000020u; // 8010435C
  c->r[3]=R32(c->r[6]+0x00000040u); // 80104360
  if (crb(c,2)) { goto L_8010436C; } // 80104364
  c->r[0]=0u+0x00000040u; // 80104368
L_8010436C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010436C
  c->r[4]=c->r[0]|c->r[3]; // 80104370
  if (crb(c,2)) { goto L_80104380; } // 80104374
  c->r[3]=0u+0x00000018u; // 80104378
  goto L_801043F0; // 8010437C
L_80104380:;
  c->r[7]=R32(c->r[6]+0x00000028u); // 80104380
  c->r[3]=c->r[29]|c->r[29]; // 80104384
  c->r[5]=c->r[26]|c->r[26]; // 80104388
  c->lr=0x80104390u; f_80112530(c); // 8010438C
  cmps(c,0,(int32_t)c->r[3],0); // 80104390
  if (crb(c,2)) { goto L_8010439C; } // 80104394
  goto L_801043F0; // 80104398
L_8010439C:;
  c->r[27]=c->r[27]+0x00000001u; // 8010439C
L_801043A0:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[23]); // 801043A0
  if (crb(c,0)) { IRQCHK(c); goto L_80104334; } // 801043A4
  c->r[3]=R32(c->r[25]+0x00000004u); // 801043A8
  c->r[4]=c->r[30]|c->r[30]; // 801043AC
  c->r[5]=0u+0x00000001u; // 801043B0
  c->lr=0x801043B8u; f_800D9A60(c); // 801043B4
L_801043B8:;
  c->r[30]=c->r[30]+0x00000001u; // 801043B8
  c->r[24]=c->r[24]+0x00000004u; // 801043BC
L_801043C0:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801043C0
  c->r[5]=R32(c->r[3]+0x000000ACu); // 801043C4
  cmps(c,0,(int32_t)c->r[5],0); // 801043C8
  if (!crb(c,2)) { goto L_801043D8; } // 801043CC
  c->r[4]=0u+0x00000000u; // 801043D0
  goto L_801043DC; // 801043D4
L_801043D8:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 801043D8
L_801043DC:;
  c->r[4]=R32(c->r[4]+0x000000A8u); // 801043DC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801043E0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801043E4
  if (crb(c,0)) { IRQCHK(c); goto L_8010429C; } // 801043E8
  c->r[3]=0u+0x00000000u; // 801043EC
L_801043F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801043F0
  c->lr=0x801043F8u; f_800C2E88(c); // 801043F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801043F8
  c->lr=c->r[0]; // 801043FC
  c->r[1]=c->r[1]+0x00000030u; // 80104400
  return; // 80104404
}

// fn_80104410
void f_80104410(Ctx* __restrict c) {
  trace_call(0x80104410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104410
  c->r[0]=c->lr; // 80104414
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104418
  c->r[11]=c->r[1]+0x00000020u; // 8010441C
  c->lr=0x80104424u; f_800C2E50(c); // 80104420
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80104424
  c->r[28]=c->r[3]|c->r[3]; // 80104428
  c->r[29]=c->r[4]|c->r[4]; // 8010442C
  c->r[31]=c->r[3]+0x0000000Cu; // 80104430
  goto L_80104454; // 80104434
L_80104438:;
  c->r[3]=c->r[30]|c->r[30]; // 80104438
  c->r[4]=c->r[29]|c->r[29]; // 8010443C
  c->lr=0x80104444u; f_8010CD60(c); // 80104440
  cmps(c,0,(int32_t)c->r[3],0); // 80104444
  if (crb(c,2)) { goto L_80104450; } // 80104448
  goto L_80104498; // 8010444C
L_80104450:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80104450
L_80104454:;
  cmpu(c,0,c->r[30],c->r[31]); // 80104454
  if (!crb(c,2)) { IRQCHK(c); goto L_80104438; } // 80104458
  cmps(c,0,(int32_t)c->r[29],0); // 8010445C
  if (!crb(c,2)) { goto L_80104494; } // 80104460
  c->r[3]=R32(c->r[28]+0x00000004u); // 80104464
  c->lr=0x8010446Cu; f_801041F0(c); // 80104468
  c->r[4]=c->r[1]+0x00000008u; // 8010446C
  c->lr=0x80104474u; f_80186F50(c); // 80104470
  cmps(c,0,(int32_t)c->r[3],0); // 80104474
  if (!crb(c,2)) { goto L_80104494; } // 80104478
  c->r[3]=R32(c->r[1]+0x00000008u); // 8010447C
  cmps(c,0,(int32_t)c->r[3],0); // 80104480
  if (crb(c,2)) { goto L_80104494; } // 80104484
  c->r[4]=0u+0x00000000u; // 80104488
  c->r[5]=0u+0x00000001u; // 8010448C
  c->lr=0x80104494u; f_801311E0(c); // 80104490
L_80104494:;
  c->r[3]=0u+0x00000000u; // 80104494
L_80104498:;
  c->r[11]=c->r[1]+0x00000020u; // 80104498
  c->lr=0x801044A0u; f_800C2E9C(c); // 8010449C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801044A0
  c->lr=c->r[0]; // 801044A4
  c->r[1]=c->r[1]+0x00000020u; // 801044A8
  return; // 801044AC
}

// fn_801044B0
void f_801044B0(Ctx* __restrict c) {
  trace_call(0x801044B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801044B0
  c->r[0]=c->lr; // 801044B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801044B8
  c->r[11]=c->r[1]+0x00000030u; // 801044BC
  c->lr=0x801044C4u; f_800C2E40(c); // 801044C0
  c->r[31]=c->r[3]|c->r[3]; // 801044C4
  c->r[4]=0u+0x00000000u; // 801044C8
  c->lr=0x801044D0u; f_80104410(c); // 801044CC
  cmps(c,0,(int32_t)c->r[3],0); // 801044D0
  if (crb(c,2)) { goto L_801044DC; } // 801044D4
  goto L_801045DC; // 801044D8
L_801044DC:;
  c->r[26]=R32(c->r[31]+0x0000000Cu); // 801044DC
  c->r[30]=c->r[31]+0x0000000Cu; // 801044E0
  c->r[28]=0u+0x00000000u; // 801044E4
  goto L_801045AC; // 801044E8
L_801044EC:;
  c->r[25]=R32(c->r[26]+0x00000034u); // 801044EC
  c->r[29]=c->r[26]+0x00000034u; // 801044F0
  goto L_801045A0; // 801044F4
L_801044F8:;
  c->r[3]=R32(c->r[25]+0x00000024u); // 801044F8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801044FC
  if (!crb(c,2)) { goto L_8010450C; } // 80104500
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80104504
  if (crb(c,2)) { goto L_80104560; } // 80104508
L_8010450C:;
  c->r[0]=R32(c->r[25]+0x00000034u); // 8010450C
  cmps(c,0,(int32_t)c->r[0],0); // 80104510
  if (crb(c,2)) { goto L_8010454C; } // 80104514
  c->r[7]=R32(c->r[31]+0x00000004u); // 80104518
  c->r[12]=R32(c->r[7]+0x00000074u); // 8010451C
  cmps(c,0,(int32_t)c->r[12],0); // 80104520
  if (crb(c,2)) { goto L_8010454C; } // 80104524
  c->r[5]=R32(c->r[25]+0x00000014u); // 80104528
  c->r[4]=0u+0x00000002u; // 8010452C
  c->r[3]=R32(c->r[7]+0x00000018u); // 80104530
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80104534
  c->r[6]=R32(c->r[25]+0x00000040u); // 80104538
  c->r[5]=R32(c->r[5]+0x00000010u); // 8010453C
  c->r[7]=R32(c->r[7]+0x00000078u); // 80104540
  c->ctr=c->r[12]; // 80104544
  if (true) { c->lr=0x8010454Cu; dispatch(c,c->ctr); } // 80104548
L_8010454C:;
  c->r[3]=c->r[25]|c->r[25]; // 8010454C
  c->lr=0x80104554u; f_8010E340(c); // 80104550
  cmps(c,0,(int32_t)c->r[3],0); // 80104554
  if (crb(c,2)) { goto L_8010459C; } // 80104558
  goto L_801045DC; // 8010455C
L_80104560:;
  c->r[24]=R32(c->r[25]+0x00000080u); // 80104560
  c->r[27]=c->r[25]+0x00000080u; // 80104564
  goto L_80104590; // 80104568
L_8010456C:;
  c->r[3]=c->r[24]|c->r[24]; // 8010456C
  c->lr=0x80104574u; f_8010E340(c); // 80104570
  cmps(c,0,(int32_t)c->r[3],0); // 80104574
  if (crb(c,2)) { goto L_80104580; } // 80104578
  goto L_801045DC; // 8010457C
L_80104580:;
  c->r[0]=R32(c->r[24]+0x00000024u); // 80104580
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80104584
  W32(c->r[24]+0x00000024u,c->r[0]); // 80104588
  c->r[24]=R32(c->r[24]+0x00000000u); // 8010458C
L_80104590:;
  cmpu(c,0,c->r[24],c->r[27]); // 80104590
  if (!crb(c,2)) { IRQCHK(c); goto L_8010456C; } // 80104594
  W32(c->r[25]+0x00000058u,c->r[28]); // 80104598
L_8010459C:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 8010459C
L_801045A0:;
  cmpu(c,0,c->r[25],c->r[29]); // 801045A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801044F8; } // 801045A4
  c->r[26]=R32(c->r[26]+0x00000000u); // 801045A8
L_801045AC:;
  cmpu(c,0,c->r[26],c->r[30]); // 801045AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801044EC; } // 801045B0
  c->r[4]=R32(c->r[31]+0x00000018u); // 801045B4
  c->r[0]=c->r[31]+0x00000018u; // 801045B8
  goto L_801045D0; // 801045BC
L_801045C0:;
  c->r[3]=R32(c->r[4]+0x00000028u); // 801045C0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801045C4
  W32(c->r[4]+0x00000028u,c->r[3]); // 801045C8
  c->r[4]=R32(c->r[4]+0x00000000u); // 801045CC
L_801045D0:;
  cmpu(c,0,c->r[4],c->r[0]); // 801045D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801045C0; } // 801045D4
  c->r[3]=0u+0x00000000u; // 801045D8
L_801045DC:;
  c->r[11]=c->r[1]+0x00000030u; // 801045DC
  c->lr=0x801045E4u; f_800C2E8C(c); // 801045E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801045E4
  c->lr=c->r[0]; // 801045E8
  c->r[1]=c->r[1]+0x00000030u; // 801045EC
  return; // 801045F0
}

// fn_80104600
void f_80104600(Ctx* __restrict c) {
  trace_call(0x80104600u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104600
  c->r[0]=c->lr; // 80104604
  W32(c->r[1]+0x00000064u,c->r[0]); // 80104608
  c->r[11]=c->r[1]+0x00000060u; // 8010460C
  c->lr=0x80104614u; f_800C2E18(c); // 80104610
  c->r[31]=c->r[1]|c->r[1]; // 80104614
  c->r[4]=R32(c->r[13]+0xFFFF9830u); // 80104618
  c->r[16]=c->r[3]|c->r[3]; // 8010461C
  c->r[27]=0u+0x00000000u; // 80104620
  c->r[26]=0u+0x00000000u; // 80104624
  c->r[3]=c->r[4]+0x00000048u; // 80104628
  c->r[14]=0u+0x00000000u; // 8010462C
  c->lr=0x80104634u; f_800E20A0(c); // 80104630
  c->r[15]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80104634
  c->r[0]=R32(c->r[1]+0x00000000u); // 80104638
  c->r[25]=0u-c->r[15]; // 8010463C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80104640
  c->r[25]=rotl(c->r[25],0)&0xFFFFFFF8u; // 80104644
  {uint32_t ea=c->r[1]+c->r[25]; W32(ea,c->r[0]); c->r[1]=ea;} // 80104648
  c->r[24]=0u-c->r[15]; // 8010464C
  c->r[24]=rotl(c->r[24],0)&0xFFFFFFF8u; // 80104650
  c->r[0]=R32(c->r[1]+0x00000000u); // 80104654
  c->r[25]=c->r[1]+0x00000008u; // 80104658
  {uint32_t ea=c->r[1]+c->r[24]; W32(ea,c->r[0]); c->r[1]=ea;} // 8010465C
  c->r[5]=c->r[15]|c->r[15]; // 80104660
  c->r[4]=0u+0x00000000u; // 80104664
  c->r[24]=c->r[1]+0x00000008u; // 80104668
  c->r[3]=c->r[24]|c->r[24]; // 8010466C
  c->lr=0x80104674u; f_80004350(c); // 80104670
  c->r[3]=c->r[25]|c->r[25]; // 80104674
  c->r[5]=c->r[15]|c->r[15]; // 80104678
  c->r[4]=0u+0x00000000u; // 8010467C
  c->lr=0x80104684u; f_80004350(c); // 80104680
  c->r[17]=R32(c->r[16]+0x0000000Cu); // 80104684
  c->r[15]=c->r[16]+0x0000000Cu; // 80104688
  goto L_801046A0; // 8010468C
L_80104690:;
  c->r[3]=c->r[17]+0x00000034u; // 80104690
  c->lr=0x80104698u; f_800E20A0(c); // 80104694
  c->r[14]=c->r[14]+c->r[3]; // 80104698
  c->r[17]=R32(c->r[17]+0x00000000u); // 8010469C
L_801046A0:;
  cmpu(c,0,c->r[17],c->r[15]); // 801046A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80104690; } // 801046A4
  c->r[15]=rotl(c->r[14],2)&0xFFFFFFFCu; // 801046A8
  c->r[0]=R32(c->r[1]+0x00000000u); // 801046AC
  c->r[23]=0u-c->r[15]; // 801046B0
  c->r[23]=rotl(c->r[23],0)&0xFFFFFFF8u; // 801046B4
  {uint32_t ea=c->r[1]+c->r[23]; W32(ea,c->r[0]); c->r[1]=ea;} // 801046B8
  c->r[5]=c->r[15]|c->r[15]; // 801046BC
  c->r[4]=0u+0x00000000u; // 801046C0
  c->r[23]=c->r[1]+0x00000008u; // 801046C4
  c->r[3]=c->r[23]|c->r[23]; // 801046C8
  c->lr=0x801046D0u; f_80004350(c); // 801046CC
  c->r[22]=0u-c->r[15]; // 801046D0
  c->r[0]=R32(c->r[1]+0x00000000u); // 801046D4
  c->r[22]=rotl(c->r[22],0)&0xFFFFFFF8u; // 801046D8
  {uint32_t ea=c->r[1]+c->r[22]; W32(ea,c->r[0]); c->r[1]=ea;} // 801046DC
  c->r[5]=c->r[15]|c->r[15]; // 801046E0
  c->r[4]=0u+0x00000000u; // 801046E4
  c->r[22]=c->r[1]+0x00000008u; // 801046E8
  c->r[3]=c->r[22]|c->r[22]; // 801046EC
  c->lr=0x801046F4u; f_80004350(c); // 801046F0
  c->r[7]=R32(c->r[16]+0x0000000Cu); // 801046F4
  c->r[0]=c->r[16]+0x0000000Cu; // 801046F8
  goto L_801047C0; // 801046FC
L_80104700:;
  c->r[8]=R32(c->r[7]+0x00000034u); // 80104700
  c->r[4]=c->r[7]+0x00000034u; // 80104704
  goto L_801047B4; // 80104708
L_8010470C:;
  c->r[5]=R32(c->r[8]+0x00000014u); // 8010470C
  c->r[3]=0u+0x00000000u; // 80104710
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80104714
  c->ctr=c->r[14]; // 80104718
  cmps(c,0,(int32_t)c->r[14],0); // 8010471C
  if (!crb(c,1)) { goto L_801047B0; } // 80104720
L_80104724:;
  c->r[5]=R32(c->r[23]+c->r[3]); // 80104724
  cmpu(c,0,c->r[5],c->r[6]); // 80104728
  if (!crb(c,2)) { goto L_80104768; } // 8010472C
  c->r[5]=R32(c->r[7]+0x00000018u); // 80104730
  c->r[6]=R32(c->r[22]+c->r[3]); // 80104734
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 80104738
  c->r[9]=rotl(c->r[6],0)&0x0000FFFFu; // 8010473C
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 80104740
  if (crb(c,2)) { goto L_8010474C; } // 80104744
  c->r[9]=c->r[9]+0x00000001u; // 80104748
L_8010474C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010474C
  if (!crb(c,2)) { goto L_80104758; } // 80104750
  c->r[6]=c->r[6]+0x00000001u; // 80104754
L_80104758:;
  c->r[5]=rotl(c->r[9],0)&0x0000FFFFu; // 80104758
  c->r[5]=(rotl(c->r[6],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 8010475C
  W32(c->r[22]+c->r[3],c->r[5]); // 80104760
  goto L_801047B0; // 80104764
L_80104768:;
  cmps(c,0,(int32_t)c->r[5],0); // 80104768
  if (!crb(c,2)) { goto L_801047A8; } // 8010476C
  W32(c->r[23]+c->r[3],c->r[6]); // 80104770
  c->r[6]=0u+0x00000000u; // 80104774
  c->r[9]=0u+0x00000000u; // 80104778
  c->r[5]=R32(c->r[7]+0x00000018u); // 8010477C
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 80104780
  if (crb(c,2)) { goto L_8010478C; } // 80104784
  c->r[6]=0u+0x00000001u; // 80104788
L_8010478C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010478C
  if (!crb(c,2)) { goto L_80104798; } // 80104790
  c->r[9]=0u+0x00000001u; // 80104794
L_80104798:;
  c->r[6]=(rotl(c->r[9],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 80104798
  W32(c->r[22]+c->r[3],c->r[6]); // 8010479C
  c->r[27]=c->r[27]+0x00000001u; // 801047A0
  goto L_801047B0; // 801047A4
L_801047A8:;
  c->r[3]=c->r[3]+0x00000004u; // 801047A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104724; } // 801047AC
L_801047B0:;
  c->r[8]=R32(c->r[8]+0x00000000u); // 801047B0
L_801047B4:;
  cmpu(c,0,c->r[8],c->r[4]); // 801047B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8010470C; } // 801047B8
  c->r[7]=R32(c->r[7]+0x00000000u); // 801047BC
L_801047C0:;
  cmpu(c,0,c->r[7],c->r[0]); // 801047C0
  if (!crb(c,2)) { IRQCHK(c); goto L_80104700; } // 801047C4
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 801047C8
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801047CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801047D0
  if (crb(c,2)) { goto L_8010497C; } // 801047D4
  c->r[21]=0u+0x00000000u; // 801047D8
  c->r[6]=0u+0x00000000u; // 801047DC
  c->r[3]=0u+0x00000000u; // 801047E0
  goto L_80104824; // 801047E4
L_801047E8:;
  c->r[7]=R32(c->r[23]+c->r[3]); // 801047E8
  c->r[4]=0u+0x00000000u; // 801047EC
  c->r[0]=R32(c->r[7]+0x00000014u); // 801047F0
  c->ctr=c->r[0]; // 801047F4
  cmps(c,0,(int32_t)c->r[0],0); // 801047F8
  if (!crb(c,1)) { goto L_8010481C; } // 801047FC
L_80104800:;
  c->r[5]=R32(c->r[7]+0x00000024u); // 80104800
  c->r[0]=R32(c->r[5]+c->r[4]); // 80104804
  cmps(c,0,(int32_t)c->r[0],0); // 80104808
  if (!crb(c,2)) { goto L_80104814; } // 8010480C
  c->r[21]=c->r[21]+0x00000001u; // 80104810
L_80104814:;
  c->r[4]=c->r[4]+0x00000018u; // 80104814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104800; } // 80104818
L_8010481C:;
  c->r[6]=c->r[6]+0x00000001u; // 8010481C
  c->r[3]=c->r[3]+0x00000004u; // 80104820
L_80104824:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[27]); // 80104824
  if (crb(c,0)) { IRQCHK(c); goto L_801047E8; } // 80104828
  c->r[5]=rotl(c->r[21],2)&0xFFFFFFFCu; // 8010482C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80104830
  c->r[19]=0u-c->r[5]; // 80104834
  c->r[20]=0u+0x00000000u; // 80104838
  c->r[19]=rotl(c->r[19],0)&0xFFFFFFF8u; // 8010483C
  {uint32_t ea=c->r[1]+c->r[19]; W32(ea,c->r[0]); c->r[1]=ea;} // 80104840
  c->r[4]=0u+0x00000000u; // 80104844
  c->r[19]=c->r[1]+0x00000008u; // 80104848
  c->r[3]=c->r[19]|c->r[19]; // 8010484C
  c->lr=0x80104854u; f_80004350(c); // 80104850
  c->r[29]=0u+0x00000000u; // 80104854
  c->r[14]=0u+0x00000000u; // 80104858
  goto L_801048F4; // 8010485C
L_80104860:;
  c->r[0]=R32(c->r[23]+c->r[14]); // 80104860
  c->r[28]=0u+0x00000000u; // 80104864
  W32(c->r[31]+0x00000008u,c->r[0]); // 80104868
  c->r[15]=0u+0x00000000u; // 8010486C
  goto L_801048DC; // 80104870
L_80104874:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80104874
  c->r[0]=R32(c->r[3]+0x00000024u); // 80104878
  c->r[18]=c->r[0]+c->r[15]; // 8010487C
  c->r[0]=R32(c->r[15]+c->r[0]); // 80104880
  cmps(c,0,(int32_t)c->r[0],0); // 80104884
  if (!crb(c,2)) { goto L_801048D4; } // 80104888
  c->r[17]=0u+0x00000000u; // 8010488C
  c->r[30]=0u+0x00000000u; // 80104890
  goto L_801048CC; // 80104894
L_80104898:;
  c->r[3]=R32(c->r[19]+c->r[30]); // 80104898
  cmps(c,0,(int32_t)c->r[3],0); // 8010489C
  if (!crb(c,2)) { goto L_801048B4; } // 801048A0
  c->r[0]=R32(c->r[18]+0x00000014u); // 801048A4
  c->r[20]=c->r[20]+0x00000001u; // 801048A8
  W32(c->r[19]+c->r[30],c->r[0]); // 801048AC
  goto L_801048D4; // 801048B0
L_801048B4:;
  c->r[4]=R32(c->r[18]+0x00000014u); // 801048B4
  c->lr=0x801048BCu; f_8019DE30(c); // 801048B8
  cmps(c,0,(int32_t)c->r[3],0); // 801048BC
  if (crb(c,2)) { goto L_801048D4; } // 801048C0
  c->r[17]=c->r[17]+0x00000001u; // 801048C4
  c->r[30]=c->r[30]+0x00000004u; // 801048C8
L_801048CC:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[21]); // 801048CC
  if (crb(c,0)) { IRQCHK(c); goto L_80104898; } // 801048D0
L_801048D4:;
  c->r[28]=c->r[28]+0x00000001u; // 801048D4
  c->r[15]=c->r[15]+0x00000018u; // 801048D8
L_801048DC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801048DC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801048E0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801048E4
  if (crb(c,0)) { IRQCHK(c); goto L_80104874; } // 801048E8
  c->r[29]=c->r[29]+0x00000001u; // 801048EC
  c->r[14]=c->r[14]+0x00000004u; // 801048F0
L_801048F4:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 801048F4
  if (crb(c,0)) { IRQCHK(c); goto L_80104860; } // 801048F8
  c->r[3]=R32(c->r[16]+0x00000004u); // 801048FC
  c->r[0]=c->r[20]+0x00000001u; // 80104900
  c->r[5]=0u+0x80390000u; // 80104904
  c->r[6]=0u+0x00000777u; // 80104908
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8010490C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80104910
  c->r[5]=c->r[5]+0xFFFFE460u; // 80104914
  c->r[7]=0u+0x00000000u; // 80104918
  W32(c->r[3]+0x00000038u,c->r[20]); // 8010491C
  c->r[8]=0u+0x00000000u; // 80104920
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80104924
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104928
  c->lr=0x80104930u; f_8018F230(c); // 8010492C
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104930
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104934
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 80104938
  c->r[3]=R32(c->r[16]+0x00000004u); // 8010493C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104940
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80104944
  cmps(c,0,(int32_t)c->r[3],0); // 80104948
  if (!crb(c,2)) { goto L_80104958; } // 8010494C
  c->r[3]=0u+0x0000002Cu; // 80104950
  goto L_80104D60; // 80104954
L_80104958:;
  c->r[4]=c->r[19]|c->r[19]; // 80104958
  c->r[5]=rotl(c->r[20],2)&0xFFFFFFFCu; // 8010495C
  c->lr=0x80104964u; f_80004000(c); // 80104960
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104964
  c->r[0]=rotl(c->r[20],2)&0xFFFFFFFCu; // 80104968
  c->r[4]=0u+0x00000000u; // 8010496C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104970
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80104974
  W32(c->r[3]+c->r[0],c->r[4]); // 80104978
L_8010497C:;
  c->r[3]=0u+0x00000000u; // 8010497C
  c->r[6]=0u+0x00000000u; // 80104980
  goto L_80104A40; // 80104984
L_80104988:;
  c->r[5]=R32(c->r[23]+c->r[6]); // 80104988
  c->r[4]=0u+0x00000000u; // 8010498C
  c->r[7]=0u+0x00000000u; // 80104990
  goto L_80104A2C; // 80104994
L_80104998:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 80104998
  c->r[10]=c->r[0]+c->r[7]; // 8010499C
  c->r[0]=R32(c->r[7]+c->r[0]); // 801049A0
  cmps(c,0,(int32_t)c->r[0],0); // 801049A4
  if (!crb(c,2)) { goto L_80104A24; } // 801049A8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801049AC
  c->r[8]=0u+0x00000000u; // 801049B0
  c->ctr=c->r[0]; // 801049B4
  cmps(c,0,(int32_t)c->r[0],0); // 801049B8
  if (!crb(c,1)) { goto L_80104A24; } // 801049BC
L_801049C0:;
  c->r[0]=R32(c->r[25]+c->r[8]); // 801049C0
  c->r[9]=R32(c->r[10]+0x00000008u); // 801049C4
  cmpu(c,0,c->r[0],c->r[9]); // 801049C8
  if (!crb(c,2)) { goto L_80104A00; } // 801049CC
  c->r[0]=R32(c->r[22]+c->r[6]); // 801049D0
  c->r[9]=R32(c->r[24]+c->r[8]); // 801049D4
  c->r[10]=rotl(c->r[0],16)&0x0000FFFFu; // 801049D8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801049DC
  c->r[11]=rotl(c->r[9],16)&0x0000FFFFu; // 801049E0
  c->r[9]=rotl(c->r[9],0)&0x0000FFFFu; // 801049E4
  c->r[0]=c->r[9]+c->r[0]; // 801049E8
  c->r[9]=c->r[11]+c->r[10]; // 801049EC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801049F0
  c->r[0]=(rotl(c->r[9],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 801049F4
  W32(c->r[24]+c->r[8],c->r[0]); // 801049F8
  goto L_80104A24; // 801049FC
L_80104A00:;
  cmps(c,0,(int32_t)c->r[0],0); // 80104A00
  if (!crb(c,2)) { goto L_80104A1C; } // 80104A04
  W32(c->r[25]+c->r[8],c->r[9]); // 80104A08
  c->r[26]=c->r[26]+0x00000001u; // 80104A0C
  c->r[0]=R32(c->r[22]+c->r[6]); // 80104A10
  W32(c->r[24]+c->r[8],c->r[0]); // 80104A14
  goto L_80104A24; // 80104A18
L_80104A1C:;
  c->r[8]=c->r[8]+0x00000004u; // 80104A1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801049C0; } // 80104A20
L_80104A24:;
  c->r[4]=c->r[4]+0x00000001u; // 80104A24
  c->r[7]=c->r[7]+0x00000018u; // 80104A28
L_80104A2C:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 80104A2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80104A30
  if (crb(c,0)) { IRQCHK(c); goto L_80104998; } // 80104A34
  c->r[3]=c->r[3]+0x00000001u; // 80104A38
  c->r[6]=c->r[6]+0x00000004u; // 80104A3C
L_80104A40:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 80104A40
  if (crb(c,0)) { IRQCHK(c); goto L_80104988; } // 80104A44
  c->r[18]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80104A48
  c->r[0]=R32(c->r[1]+0x00000000u); // 80104A4C
  c->r[15]=0u-c->r[18]; // 80104A50
  c->r[15]=rotl(c->r[15],0)&0xFFFFFFF8u; // 80104A54
  {uint32_t ea=c->r[1]+c->r[15]; W32(ea,c->r[0]); c->r[1]=ea;} // 80104A58
  c->r[5]=c->r[18]|c->r[18]; // 80104A5C
  c->r[4]=0u+0x00000000u; // 80104A60
  c->r[15]=c->r[1]+0x00000008u; // 80104A64
  c->r[3]=c->r[15]|c->r[15]; // 80104A68
  c->lr=0x80104A70u; f_80004350(c); // 80104A6C
  c->r[14]=0u+0x00000000u; // 80104A70
  c->r[19]=0u+0x00000000u; // 80104A74
  goto L_80104B5C; // 80104A78
L_80104A7C:;
  c->r[3]=R32(c->r[24]+c->r[19]); // 80104A7C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80104A80
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 80104A84
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80104A88
  c->r[17]=c->r[4]+c->r[3]; // 80104A8C
  c->r[3]=c->r[17]+0x00000001u; // 80104A90
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80104A94
  c->r[3]=0u-c->r[5]; // 80104A98
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80104A9C
  {uint32_t ea=c->r[1]+c->r[3]; W32(ea,c->r[0]); c->r[1]=ea;} // 80104AA0
  c->r[4]=0u+0xFFFFFFFFu; // 80104AA4
  c->r[3]=c->r[1]+0x00000008u; // 80104AA8
  W32(c->r[15]+c->r[19],c->r[3]); // 80104AAC
  c->lr=0x80104AB4u; f_80004350(c); // 80104AB0
  c->r[9]=R32(c->r[15]+c->r[19]); // 80104AB4
  c->r[7]=0u+0x00000000u; // 80104AB8
  c->r[3]=0u+0x00000000u; // 80104ABC
  goto L_80104B4C; // 80104AC0
L_80104AC4:;
  c->r[10]=R32(c->r[23]+c->r[3]); // 80104AC4
  c->r[8]=0u+0x00000000u; // 80104AC8
  c->r[4]=0u+0x00000000u; // 80104ACC
  goto L_80104B38; // 80104AD0
L_80104AD4:;
  c->r[0]=R32(c->r[10]+0x00000024u); // 80104AD4
  c->r[11]=c->r[0]+c->r[4]; // 80104AD8
  c->r[0]=R32(c->r[4]+c->r[0]); // 80104ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80104AE0
  if (!crb(c,2)) { goto L_80104B30; } // 80104AE4
  c->r[5]=R32(c->r[25]+c->r[19]); // 80104AE8
  c->r[0]=R32(c->r[11]+0x00000008u); // 80104AEC
  cmpu(c,0,c->r[5],c->r[0]); // 80104AF0
  if (!crb(c,2)) { goto L_80104B30; } // 80104AF4
  c->r[5]=0u+0x00000000u; // 80104AF8
  c->ctr=c->r[17]; // 80104AFC
  cmps(c,0,(int32_t)c->r[17],0); // 80104B00
  if (!crb(c,1)) { goto L_80104B30; } // 80104B04
L_80104B08:;
  c->r[0]=R32(c->r[9]+c->r[5]); // 80104B08
  c->r[6]=R32(c->r[11]+0x0000000Cu); // 80104B0C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80104B10
  if (crb(c,2)) { goto L_80104B30; } // 80104B14
  cmps(c,0,(int32_t)c->r[0],-1); // 80104B18
  if (!crb(c,2)) { goto L_80104B28; } // 80104B1C
  W32(c->r[9]+c->r[5],c->r[6]); // 80104B20
  goto L_80104B30; // 80104B24
L_80104B28:;
  c->r[5]=c->r[5]+0x00000004u; // 80104B28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104B08; } // 80104B2C
L_80104B30:;
  c->r[8]=c->r[8]+0x00000001u; // 80104B30
  c->r[4]=c->r[4]+0x00000018u; // 80104B34
L_80104B38:;
  c->r[0]=R32(c->r[10]+0x00000014u); // 80104B38
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80104B3C
  if (crb(c,0)) { IRQCHK(c); goto L_80104AD4; } // 80104B40
  c->r[7]=c->r[7]+0x00000001u; // 80104B44
  c->r[3]=c->r[3]+0x00000004u; // 80104B48
L_80104B4C:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[27]); // 80104B4C
  if (crb(c,0)) { IRQCHK(c); goto L_80104AC4; } // 80104B50
  c->r[14]=c->r[14]+0x00000001u; // 80104B54
  c->r[19]=c->r[19]+0x00000004u; // 80104B58
L_80104B5C:;
  cmps(c,0,(int32_t)c->r[14],(int32_t)c->r[26]); // 80104B5C
  if (crb(c,0)) { IRQCHK(c); goto L_80104A7C; } // 80104B60
  c->r[0]=c->r[26]+0x00000001u; // 80104B64
  c->r[3]=c->r[18]+c->r[18]; // 80104B68
  c->r[14]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80104B6C
  c->r[0]=c->r[14]+c->r[18]; // 80104B70
  c->r[17]=c->r[3]+c->r[0]; // 80104B74
  c->r[3]=0u+0x00000000u; // 80104B78
  c->ctr=c->r[26]; // 80104B7C
  cmps(c,0,(int32_t)c->r[26],0); // 80104B80
  if (!crb(c,1)) { goto L_80104BC0; } // 80104B84
L_80104B88:;
  c->r[6]=R32(c->r[15]+c->r[3]); // 80104B88
  c->r[5]=0u+0x00000000u; // 80104B8C
  c->r[4]=0u+0x00000000u; // 80104B90
  goto L_80104BA0; // 80104B94
L_80104B98:;
  c->r[5]=c->r[5]+0x00000001u; // 80104B98
  c->r[4]=c->r[4]+0x00000004u; // 80104B9C
L_80104BA0:;
  c->r[0]=R32(c->r[6]+c->r[4]); // 80104BA0
  cmps(c,0,(int32_t)c->r[0],-1); // 80104BA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80104B98; } // 80104BA8
  c->r[0]=c->r[5]+0x00000001u; // 80104BAC
  c->r[3]=c->r[3]+0x00000004u; // 80104BB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80104BB4
  c->r[17]=c->r[17]+c->r[0]; // 80104BB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104B88; } // 80104BBC
L_80104BC0:;
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104BC0
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104BC4
  c->r[4]=R32(c->r[3]+0x00000020u); // 80104BC8
  cmps(c,0,(int32_t)c->r[4],0); // 80104BCC
  if (crb(c,2)) { goto L_80104BF0; } // 80104BD0
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80104BD4
  c->r[5]=0u+0x80390000u; // 80104BD8
  c->r[6]=0u+0x000007ECu; // 80104BDC
  c->r[7]=0u+0x00000000u; // 80104BE0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104BE4
  c->r[5]=c->r[5]+0xFFFFE460u; // 80104BE8
  c->lr=0x80104BF0u; f_8018F5F0(c); // 80104BEC
L_80104BF0:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80104BF0
  c->r[5]=0u+0x80390000u; // 80104BF4
  c->r[4]=c->r[17]|c->r[17]; // 80104BF8
  c->r[6]=0u+0x000007EFu; // 80104BFC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104C00
  c->r[5]=c->r[5]+0xFFFFE460u; // 80104C04
  c->r[7]=0u+0x00000000u; // 80104C08
  c->r[8]=0u+0x00000000u; // 80104C0C
  c->lr=0x80104C14u; f_8018F230(c); // 80104C10
  cmps(c,0,(int32_t)c->r[3],0); // 80104C14
  c->r[19]=c->r[3]|c->r[3]; // 80104C18
  if (!crb(c,2)) { goto L_80104C28; } // 80104C1C
  c->r[3]=0u+0x0000002Cu; // 80104C20
  goto L_80104D60; // 80104C24
L_80104C28:;
  c->r[6]=R32(c->r[16]+0x00000004u); // 80104C28
  c->r[4]=c->r[25]|c->r[25]; // 80104C2C
  c->r[5]=c->r[18]|c->r[18]; // 80104C30
  c->r[6]=R32(c->r[6]+0x000000A8u); // 80104C34
  W32(c->r[6]+0x00000020u,c->r[3]); // 80104C38
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104C3C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104C40
  c->r[3]=R32(c->r[3]+0x00000020u); // 80104C44
  c->lr=0x80104C4Cu; f_80004000(c); // 80104C48
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104C4C
  c->r[19]=c->r[19]+c->r[18]; // 80104C50
  c->r[4]=c->r[24]|c->r[24]; // 80104C54
  c->r[5]=c->r[18]|c->r[18]; // 80104C58
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104C5C
  W32(c->r[3]+0x00000028u,c->r[19]); // 80104C60
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104C64
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104C68
  c->r[3]=R32(c->r[3]+0x00000028u); // 80104C6C
  c->lr=0x80104C74u; f_80004000(c); // 80104C70
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104C74
  c->r[19]=c->r[19]+c->r[18]; // 80104C78
  c->r[6]=0u+0x00000000u; // 80104C7C
  c->r[3]=0u+0x00000000u; // 80104C80
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104C84
  W32(c->r[4]+0x00000024u,c->r[19]); // 80104C88
  c->ctr=c->r[26]; // 80104C8C
  cmps(c,0,(int32_t)c->r[26],0); // 80104C90
  if (!crb(c,1)) { goto L_80104CC0; } // 80104C94
L_80104C98:;
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104C98
  c->r[6]=c->r[6]+0x00000001u; // 80104C9C
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104CA0
  c->r[5]=R32(c->r[4]+0x00000020u); // 80104CA4
  c->r[4]=R32(c->r[4]+0x00000024u); // 80104CA8
  c->r[5]=R32(c->r[5]+c->r[3]); // 80104CAC
  c->r[0]=R32(c->r[5]+0x00000018u); // 80104CB0
  W32(c->r[4]+c->r[3],c->r[0]); // 80104CB4
  c->r[3]=c->r[3]+0x00000004u; // 80104CB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104C98; } // 80104CBC
L_80104CC0:;
  c->r[3]=R32(c->r[16]+0x00000004u); // 80104CC0
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80104CC4
  c->r[19]=c->r[19]+c->r[14]; // 80104CC8
  c->r[6]=0u+0x00000000u; // 80104CCC
  c->r[5]=R32(c->r[3]+0x000000A8u); // 80104CD0
  c->r[7]=c->r[19]+c->r[18]; // 80104CD4
  c->r[3]=0u+0x00000000u; // 80104CD8
  c->r[0]=0u+0xFFFFFFFFu; // 80104CDC
  c->r[5]=R32(c->r[5]+0x00000024u); // 80104CE0
  W32(c->r[5]+c->r[4],c->r[6]); // 80104CE4
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104CE8
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104CEC
  W32(c->r[4]+0x0000002Cu,c->r[19]); // 80104CF0
  c->ctr=c->r[26]; // 80104CF4
  cmps(c,0,(int32_t)c->r[26],0); // 80104CF8
  if (!crb(c,1)) { goto L_80104D44; } // 80104CFC
L_80104D00:;
  c->r[5]=R32(c->r[16]+0x00000004u); // 80104D00
  c->r[4]=0u+0x00000000u; // 80104D04
  c->r[6]=R32(c->r[15]+c->r[3]); // 80104D08
  c->r[5]=R32(c->r[5]+0x000000A8u); // 80104D0C
  c->r[5]=R32(c->r[5]+0x0000002Cu); // 80104D10
  W32(c->r[5]+c->r[3],c->r[7]); // 80104D14
  goto L_80104D28; // 80104D18
L_80104D1C:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 80104D1C
  c->r[7]=c->r[7]+0x00000004u; // 80104D20
  c->r[4]=c->r[4]+0x00000004u; // 80104D24
L_80104D28:;
  c->r[5]=R32(c->r[6]+c->r[4]); // 80104D28
  cmps(c,0,(int32_t)c->r[5],-1); // 80104D2C
  if (!crb(c,2)) { IRQCHK(c); goto L_80104D1C; } // 80104D30
  W32(c->r[7]+0x00000000u,c->r[0]); // 80104D34
  c->r[7]=c->r[7]+0x00000004u; // 80104D38
  c->r[3]=c->r[3]+0x00000004u; // 80104D3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104D00; } // 80104D40
L_80104D44:;
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104D44
  c->r[3]=0u+0x00000000u; // 80104D48
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104D4C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 80104D50
  c->r[4]=R32(c->r[16]+0x00000004u); // 80104D54
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80104D58
  W32(c->r[4]+0x00000034u,c->r[17]); // 80104D5C
L_80104D60:;
  c->r[10]=c->r[31]|c->r[31]; // 80104D60
  c->r[11]=c->r[10]+0x00000060u; // 80104D64
  c->lr=0x80104D6Cu; f_800C2E64(c); // 80104D68
  c->r[10]=R32(c->r[1]+0x00000000u); // 80104D6C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80104D70
  c->r[1]=c->r[10]|c->r[10]; // 80104D74
  c->lr=c->r[0]; // 80104D78
  return; // 80104D7C
}

// fn_80104D80
void f_80104D80(Ctx* __restrict c) {
  trace_call(0x80104D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104D80
  c->r[0]=c->lr; // 80104D84
  W32(c->r[1]+0x00000044u,c->r[0]); // 80104D88
  c->r[11]=c->r[1]+0x00000040u; // 80104D8C
  c->lr=0x80104D94u; f_800C2E38(c); // 80104D90
  c->r[5]=R32(c->r[3]+0x00000004u); // 80104D94
  c->r[23]=c->r[3]|c->r[3]; // 80104D98
  c->r[25]=c->r[4]|c->r[4]; // 80104D9C
  c->r[0]=R32(c->r[5]+0x000000A8u); // 80104DA0
  cmps(c,0,(int32_t)c->r[0],0); // 80104DA4
  if (crb(c,2)) { goto L_80104E30; } // 80104DA8
  c->r[3]=R32(c->r[5]+0x000000A8u); // 80104DAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80104DB0
  cmps(c,0,(int32_t)c->r[0],0); // 80104DB4
  if (crb(c,2)) { goto L_80104E30; } // 80104DB8
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80104DC0
  if (crb(c,2)) { goto L_80104E30; } // 80104DC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 80104DC8
  cmps(c,0,(int32_t)c->r[0],0); // 80104DCC
  if (crb(c,2)) { goto L_80104E30; } // 80104DD0
  c->r[22]=0u+0x00000000u; // 80104DD4
  c->r[24]=0u+0x00000000u; // 80104DD8
  goto L_80104E1C; // 80104DDC
L_80104DE0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104DE0
  c->r[3]=R32(c->r[3]+c->r[24]); // 80104DE4
  cmps(c,0,(int32_t)c->r[3],0); // 80104DE8
  if (crb(c,2)) { goto L_80104E14; } // 80104DEC
  c->r[3]=R32(c->r[3]+0x00000138u); // 80104DF0
  c->r[4]=c->r[25]|c->r[25]; // 80104DF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80104DF8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80104DFC
  c->ctr=c->r[12]; // 80104E00
  if (true) { c->lr=0x80104E08u; dispatch(c,c->ctr); } // 80104E04
  cmps(c,0,(int32_t)c->r[3],0); // 80104E08
  if (crb(c,2)) { goto L_80104E14; } // 80104E0C
  goto L_80105054; // 80104E10
L_80104E14:;
  c->r[22]=c->r[22]+0x00000001u; // 80104E14
  c->r[24]=c->r[24]+0x00000004u; // 80104E18
L_80104E1C:;
  c->r[3]=R32(c->r[23]+0x00000004u); // 80104E1C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80104E20
  c->r[0]=R32(c->r[3]+0x00000000u); // 80104E24
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 80104E28
  if (crb(c,0)) { IRQCHK(c); goto L_80104DE0; } // 80104E2C
L_80104E30:;
  c->r[4]=R32(c->r[25]+0x00000000u); // 80104E30
  c->r[27]=c->r[25]+0x00000004u; // 80104E34
  c->r[31]=c->r[23]+0x0000000Cu; // 80104E38
  c->r[26]=0u+0x00000000u; // 80104E3C
  c->r[3]=rotl(c->r[4],24)&0x0000FF00u; // 80104E40
  c->r[0]=rotl(c->r[4],8)&0x00FF0000u; // 80104E44
  c->r[3]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80104E48
  c->r[22]=0u+0x80390000u; // 80104E4C
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80104E50
  c->r[30]=c->r[3]|c->r[0]; // 80104E54
  goto L_80105048; // 80104E58
L_80104E5C:;
  c->r[8]=R32(c->r[27]+0x00000002u); // 80104E5C
  c->r[6]=0u+0x00000000u; // 80104E60
  c->r[7]=R8(c->r[27]+0x00000000u); // 80104E64
  c->r[4]=R8(c->r[27]+0x00000001u); // 80104E68
  c->r[3]=rotl(c->r[8],24)&0x0000FF00u; // 80104E6C
  c->r[0]=rotl(c->r[8],8)&0x00FF0000u; // 80104E70
  c->r[5]=R32(c->r[23]+0x0000000Cu); // 80104E74
  c->r[3]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80104E78
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80104E7C
  c->r[0]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80104E80
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80104E84
  c->r[29]=c->r[3]|c->r[0]; // 80104E88
  c->r[27]=c->r[27]+0x00000006u; // 80104E8C
  goto L_80104E9C; // 80104E90
L_80104E94:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 80104E94
  c->r[6]=c->r[6]+0x00000001u; // 80104E98
L_80104E9C:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 80104E9C
  if (!crb(c,0)) { goto L_80104EAC; } // 80104EA0
  cmpu(c,0,c->r[5],c->r[31]); // 80104EA4
  if (!crb(c,2)) { IRQCHK(c); goto L_80104E94; } // 80104EA8
L_80104EAC:;
  cmpu(c,0,c->r[5],c->r[31]); // 80104EAC
  if (!crb(c,2)) { goto L_80104EBC; } // 80104EB0
  c->r[27]=c->r[27]+0x0000000Cu; // 80104EB4
  goto L_80105044; // 80104EB8
L_80104EBC:;
  c->r[28]=R32(c->r[5]+0x00000040u); // 80104EBC
  c->r[0]=c->r[5]+0x00000040u; // 80104EC0
  c->r[3]=0u+0x00000000u; // 80104EC4
  goto L_80104ED4; // 80104EC8
L_80104ECC:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80104ECC
  c->r[3]=c->r[3]+0x00000001u; // 80104ED0
L_80104ED4:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 80104ED4
  if (!crb(c,0)) { goto L_80104EE4; } // 80104ED8
  cmpu(c,0,c->r[28],c->r[0]); // 80104EDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80104ECC; } // 80104EE0
L_80104EE4:;
  c->r[0]=c->r[5]+0x00000040u; // 80104EE4
  cmpu(c,0,c->r[28],c->r[0]); // 80104EE8
  if (!crb(c,2)) { goto L_80104EF8; } // 80104EEC
  c->r[27]=c->r[27]+0x0000000Cu; // 80104EF0
  goto L_80105044; // 80104EF4
L_80104EF8:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80104EF8
  c->r[25]=0u+0x00000000u; // 80104EFC
  c->r[24]=R32(c->r[3]+0x00000030u); // 80104F00
  goto L_80104FE4; // 80104F04
L_80104F08:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80104F08
  c->r[0]=c->r[3]+0x00000030u; // 80104F0C
  cmpu(c,0,c->r[24],c->r[0]); // 80104F10
  if (!crb(c,2)) { goto L_80104F68; } // 80104F14
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80104F18
  c->r[5]=c->r[22]+0xFFFFE460u; // 80104F1C
  c->r[4]=0u+0x00000020u; // 80104F20
  c->r[6]=0u+0x0000088Eu; // 80104F24
  c->r[3]=R32(c->r[3]+0x00000004u); // 80104F28
  c->r[7]=0u+0x00000000u; // 80104F2C
  c->lr=0x80104F34u; f_8018F760(c); // 80104F30
  cmps(c,0,(int32_t)c->r[3],0); // 80104F34
  c->r[24]=c->r[3]|c->r[3]; // 80104F38
  if (crb(c,2)) { goto L_80104F48; } // 80104F3C
  c->lr=0x80104F44u; f_801014C0(c); // 80104F40
  c->r[24]=c->r[3]|c->r[3]; // 80104F44
L_80104F48:;
  cmps(c,0,(int32_t)c->r[24],0); // 80104F48
  if (!crb(c,2)) { goto L_80104F58; } // 80104F4C
  c->r[3]=0u+0x0000002Cu; // 80104F50
  goto L_80105054; // 80104F54
L_80104F58:;
  c->r[4]=R32(c->r[28]+0x00000014u); // 80104F58
  c->r[3]=c->r[24]|c->r[24]; // 80104F5C
  c->r[4]=c->r[4]+0x00000030u; // 80104F60
  c->lr=0x80104F68u; f_800E4710(c); // 80104F64
L_80104F68:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 80104F68
  c->r[25]=c->r[25]+0x00000001u; // 80104F6C
  c->r[5]=R32(c->r[24]+0x0000001Cu); // 80104F70
  c->r[3]=rotl(c->r[4],24)&0x0000FF00u; // 80104F74
  c->r[0]=rotl(c->r[4],8)&0x00FF0000u; // 80104F78
  c->r[3]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80104F7C
  c->r[5]=rotl(c->r[5],0)&0x00000010u; // 80104F80
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80104F84
  c->r[0]=c->r[3]|c->r[0]; // 80104F88
  W32(c->r[1]+0x00000008u,c->r[0]); // 80104F8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104F90
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 80104F94
  c->r[4]=R32(c->r[27]+0x00000004u); // 80104F98
  c->r[3]=rotl(c->r[4],24)&0x0000FF00u; // 80104F9C
  c->r[0]=rotl(c->r[4],8)&0x00FF0000u; // 80104FA0
  c->r[3]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80104FA4
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80104FA8
  c->r[0]=c->r[3]|c->r[0]; // 80104FAC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80104FB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104FB4
  {uint32_t ea=c->r[24]+0x00000018u; WF32(ea,c->f[0]);} // 80104FB8
  c->r[4]=R32(c->r[27]+0x00000008u); // 80104FBC
  c->r[27]=c->r[27]+0x0000000Cu; // 80104FC0
  c->r[3]=rotl(c->r[4],24)&0x0000FF00u; // 80104FC4
  c->r[0]=rotl(c->r[4],8)&0x00FF0000u; // 80104FC8
  c->r[3]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 80104FCC
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80104FD0
  c->r[0]=c->r[3]|c->r[0]; // 80104FD4
  c->r[0]=c->r[0]|c->r[5]; // 80104FD8
  W32(c->r[24]+0x0000001Cu,c->r[0]); // 80104FDC
  c->r[24]=R32(c->r[24]+0x00000000u); // 80104FE0
L_80104FE4:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[29]); // 80104FE4
  if (crb(c,0)) { IRQCHK(c); goto L_80104F08; } // 80104FE8
  goto L_80105028; // 80104FEC
L_80104FF0:;
  c->r[25]=R32(c->r[24]+0x00000000u); // 80104FF0
  c->r[3]=c->r[24]|c->r[24]; // 80104FF4
  c->lr=0x80104FFCu; f_800D89A0(c); // 80104FF8
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 80104FFC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80105000
  if (!crb(c,2)) { goto L_80105024; } // 80105004
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80105008
  c->r[4]=c->r[24]|c->r[24]; // 8010500C
  c->r[5]=c->r[22]+0xFFFFE460u; // 80105010
  c->r[6]=0u+0x000008CAu; // 80105014
  c->r[3]=R32(c->r[3]+0x00000004u); // 80105018
  c->r[7]=0u+0x00000000u; // 8010501C
  c->lr=0x80105024u; f_8018F5F0(c); // 80105020
L_80105024:;
  c->r[24]=c->r[25]|c->r[25]; // 80105024
L_80105028:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80105028
  c->r[0]=c->r[3]+0x00000030u; // 8010502C
  cmpu(c,0,c->r[24],c->r[0]); // 80105030
  if (!crb(c,2)) { IRQCHK(c); goto L_80104FF0; } // 80105034
  c->r[0]=R16(c->r[28]+0x00000024u); // 80105038
  c->r[0]=c->r[0]|0x00000001u; // 8010503C
  W16(c->r[28]+0x00000024u,c->r[0]); // 80105040
L_80105044:;
  c->r[26]=c->r[26]+0x00000001u; // 80105044
L_80105048:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[30]); // 80105048
  if (crb(c,0)) { IRQCHK(c); goto L_80104E5C; } // 8010504C
  c->r[3]=0u+0x00000000u; // 80105050
L_80105054:;
  c->r[11]=c->r[1]+0x00000040u; // 80105054
  c->lr=0x8010505Cu; f_800C2E84(c); // 80105058
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010505C
  c->lr=c->r[0]; // 80105060
  c->r[1]=c->r[1]+0x00000040u; // 80105064
  return; // 80105068
}

// fn_80105070
void f_80105070(Ctx* __restrict c) {
  trace_call(0x80105070u);
  cmps(c,0,(int32_t)c->r[4],0); // 80105070
  c->r[6]=0u+0x00000000u; // 80105074
  if (!crb(c,2)) { goto L_80105084; } // 80105078
  c->r[3]=0u+0x00000025u; // 8010507C
  return; // 80105080
L_80105084:;
  c->r[0]=0u+0x00000000u; // 80105084
  W32(c->r[4]+0x00000000u,c->r[0]); // 80105088
  c->r[0]=c->r[3]+0x0000000Cu; // 8010508C
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 80105090
  goto L_801050DC; // 80105094
L_80105098:;
  c->r[9]=R32(c->r[8]+0x00000034u); // 80105098
  c->r[5]=c->r[8]+0x00000034u; // 8010509C
  goto L_801050D0; // 801050A0
L_801050A4:;
  c->r[7]=R32(c->r[9]+0x00000024u); // 801050A4
  c->r[6]=rotl(c->r[7],0)&0x00000002u; cr0(c,c->r[6]); // 801050A8
  if (!crb(c,2)) { goto L_801050B8; } // 801050AC
  c->r[6]=rotl(c->r[7],0)&0x00000010u; cr0(c,c->r[6]); // 801050B0
  if (crb(c,2)) { goto L_801050C8; } // 801050B4
L_801050B8:;
  c->r[0]=0u+0xFFFFFFFFu; // 801050B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801050BC
  c->r[3]=0u+0x00000000u; // 801050C0
  return; // 801050C4
L_801050C8:;
  c->r[6]=0u+0x00000001u; // 801050C8
  c->r[9]=R32(c->r[9]+0x00000000u); // 801050CC
L_801050D0:;
  cmpu(c,0,c->r[9],c->r[5]); // 801050D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801050A4; } // 801050D4
  c->r[8]=R32(c->r[8]+0x00000000u); // 801050D8
L_801050DC:;
  cmpu(c,0,c->r[8],c->r[0]); // 801050DC
  if (!crb(c,2)) { IRQCHK(c); goto L_80105098; } // 801050E0
  cmps(c,0,(int32_t)c->r[6],0); // 801050E4
  c->r[0]=0u+0x00000000u; // 801050E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801050EC
  if (!crb(c,2)) { goto L_801050FC; } // 801050F0
  c->r[3]=0u+0x00000000u; // 801050F4
  return; // 801050F8
L_801050FC:;
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 801050FC
  c->r[0]=c->r[3]+0x0000000Cu; // 80105100
  goto L_80105194; // 80105104
L_80105108:;
  c->r[9]=R32(c->r[8]+0x00000034u); // 80105108
  c->r[5]=c->r[8]+0x00000034u; // 8010510C
  goto L_80105188; // 80105110
L_80105114:;
  c->r[6]=R32(c->r[9]+0x00000014u); // 80105114
  c->r[3]=0u+0x00000000u; // 80105118
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8010511C
  c->r[6]=R32(c->r[6]+0x00000014u); // 80105120
  c->ctr=c->r[6]; // 80105124
  cmps(c,0,(int32_t)c->r[6],0); // 80105128
  if (!crb(c,1)) { goto L_80105184; } // 8010512C
L_80105130:;
  c->r[6]=R32(c->r[9]+0x00000014u); // 80105130
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 80105134
  c->r[6]=R32(c->r[6]+0x00000024u); // 80105138
  c->r[7]=c->r[6]+c->r[3]; // 8010513C
  c->r[6]=R32(c->r[6]+c->r[3]); // 80105140
  cmps(c,0,(int32_t)c->r[6],0); // 80105144
  if (!crb(c,2)) { goto L_80105164; } // 80105148
  c->r[7]=R32(c->r[7]+0x00000010u); // 8010514C
  c->r[6]=R32(c->r[4]+0x00000000u); // 80105150
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 80105154
  if (!crb(c,1)) { goto L_8010517C; } // 80105158
  W32(c->r[4]+0x00000000u,c->r[7]); // 8010515C
  goto L_8010517C; // 80105160
L_80105164:;
  cmps(c,0,(int32_t)c->r[6],2); // 80105164
  if (crb(c,2)) { goto L_8010517C; } // 80105168
  c->r[0]=0u+0xFFFFFFFFu; // 8010516C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80105170
  c->r[3]=0u+0x00000000u; // 80105174
  return; // 80105178
L_8010517C:;
  c->r[3]=c->r[3]+0x00000018u; // 8010517C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80105130; } // 80105180
L_80105184:;
  c->r[9]=R32(c->r[9]+0x00000000u); // 80105184
L_80105188:;
  cmpu(c,0,c->r[9],c->r[5]); // 80105188
  if (!crb(c,2)) { IRQCHK(c); goto L_80105114; } // 8010518C
  c->r[8]=R32(c->r[8]+0x00000000u); // 80105190
L_80105194:;
  cmpu(c,0,c->r[8],c->r[0]); // 80105194
  if (!crb(c,2)) { IRQCHK(c); goto L_80105108; } // 80105198
  c->r[3]=0u+0x00000000u; // 8010519C
  return; // 801051A0
}

// fn_801051B0
void f_801051B0(Ctx* __restrict c) {
  trace_call(0x801051B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801051B0
  c->r[0]=c->lr; // 801051B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801051B8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801051BC
  c->r[31]=c->r[4]|c->r[4]; // 801051C0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801051C4
  c->r[30]=c->r[3]|c->r[3]; // 801051C8
  c->r[3]=c->r[1]+0x00000008u; // 801051CC
  c->lr=0x801051D4u; f_80115D90(c); // 801051D0
  cmps(c,0,(int32_t)c->r[3],0); // 801051D4
  if (crb(c,2)) { goto L_801051E0; } // 801051D8
  goto L_8010528C; // 801051DC
L_801051E0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801051E0
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801051E4
  c->r[6]=R32(c->r[3]+0x00000058u); // 801051E8
  W32(c->r[31]+0x00000000u,c->r[6]); // 801051EC
  c->r[4]=R32(c->r[30]+0x00000004u); // 801051F0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801051F4
  c->r[3]=R32(c->r[4]+0x00000060u); // 801051F8
  W32(c->r[1]+0x00000018u,c->r[6]); // 801051FC
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 80105200
  if (crb(c,2)) { goto L_80105258; } // 80105204
  c->r[0]=rotl(c->r[3],0)&0x00002000u; cr0(c,c->r[0]); // 80105208
  if (!crb(c,2)) { goto L_80105258; } // 8010520C
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80105210
  c->r[7]=R32(c->r[3]+0x00000018u); // 80105214
  cmps(c,0,(int32_t)c->r[7],0); // 80105218
  if (crb(c,2)) { goto L_80105250; } // 8010521C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80105220
  c->r[5]=R32(c->r[4]+0x00000050u); // 80105224
  c->r[3]=R32(c->r[3]+0x00000010u); // 80105228
  c->r[0]=c->r[0]-c->r[7]; // 8010522C
  c->r[4]=R32(c->r[4]+0x00000054u); // 80105230
  c->r[0]=c->r[6]+c->r[0]; // 80105234
  c->r[3]=c->r[3]-c->r[5]; // 80105238
  W32(c->r[1]+0x00000010u,c->r[5]); // 8010523C
  c->r[0]=c->r[3]+c->r[0]; // 80105240
  W32(c->r[1]+0x00000014u,c->r[4]); // 80105244
  W32(c->r[31]+0x00000000u,c->r[0]); // 80105248
  goto L_80105258; // 8010524C
L_80105250:;
  c->r[0]=0u+0x00000000u; // 80105250
  W32(c->r[31]+0x00000000u,c->r[0]); // 80105254
L_80105258:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 80105258
  c->r[3]=0u+0x00000000u; // 8010525C
  {uint32_t ea=c->r[2]+0xFFFFA13Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105260
  {uint32_t ea=c->r[4]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105264
  {uint32_t ea=c->r[2]+0xFFFFA0DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105268
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8010526C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80105270
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80105274
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80105278
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8010527C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105280
  c->r[0]=c->r[4]+c->r[0]; // 80105284
  W32(c->r[31]+0x00000000u,c->r[0]); // 80105288
L_8010528C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010528C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80105290
  c->r[30]=R32(c->r[1]+0x00000028u); // 80105294
  c->lr=c->r[0]; // 80105298
  c->r[1]=c->r[1]+0x00000030u; // 8010529C
  return; // 801052A0
}

// fn_801052B0
void f_801052B0(Ctx* __restrict c) {
  trace_call(0x801052B0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801052B0
  c->r[8]=0u+0x00000000u; // 801052B4
  if (!crb(c,2)) { goto L_801052C4; } // 801052B8
  c->r[3]=0u+0x00000025u; // 801052BC
  return; // 801052C0
L_801052C4:;
  c->r[0]=0u+0x00000000u; // 801052C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801052C8
  c->r[0]=c->r[3]+0x0000000Cu; // 801052CC
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 801052D0
  goto L_8010532C; // 801052D4
L_801052D8:;
  c->r[10]=R32(c->r[9]+0x00000034u); // 801052D8
  c->r[3]=c->r[9]+0x00000034u; // 801052DC
  goto L_80105320; // 801052E0
L_801052E4:;
  c->r[7]=R32(c->r[10]+0x00000034u); // 801052E4
  c->r[5]=c->r[10]+0x00000080u; // 801052E8
  c->r[11]=R32(c->r[10]+0x00000080u); // 801052EC
  c->r[6]=addc(c,c->r[7],0xFFFFFFFFu,0); // 801052F0
  c->r[6]=addc(c,~c->r[6],c->r[7],c->xer_ca); // 801052F4
  c->r[8]=c->r[8]+c->r[6]; // 801052F8
  goto L_80105314; // 801052FC
L_80105300:;
  c->r[7]=R32(c->r[11]+0x00000034u); // 80105300
  c->r[11]=R32(c->r[11]+0x00000000u); // 80105304
  c->r[6]=addc(c,c->r[7],0xFFFFFFFFu,0); // 80105308
  c->r[6]=addc(c,~c->r[6],c->r[7],c->xer_ca); // 8010530C
  c->r[8]=c->r[8]+c->r[6]; // 80105310
L_80105314:;
  cmpu(c,0,c->r[11],c->r[5]); // 80105314
  if (!crb(c,2)) { IRQCHK(c); goto L_80105300; } // 80105318
  c->r[10]=R32(c->r[10]+0x00000000u); // 8010531C
L_80105320:;
  cmpu(c,0,c->r[10],c->r[3]); // 80105320
  if (!crb(c,2)) { IRQCHK(c); goto L_801052E4; } // 80105324
  c->r[9]=R32(c->r[9]+0x00000000u); // 80105328
L_8010532C:;
  cmpu(c,0,c->r[9],c->r[0]); // 8010532C
  if (!crb(c,2)) { IRQCHK(c); goto L_801052D8; } // 80105330
  W32(c->r[4]+0x00000000u,c->r[8]); // 80105334
  c->r[3]=0u+0x00000000u; // 80105338
  return; // 8010533C
}

// fn_80105340
void f_80105340(Ctx* __restrict c) {
  trace_call(0x80105340u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105340
  c->r[0]=c->lr; // 80105344
  W32(c->r[1]+0x00000044u,c->r[0]); // 80105348
  c->r[11]=c->r[1]+0x00000030u; // 8010534C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80105350
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80105354
  c->lr=0x8010535Cu; f_800C2E4C(c); // 80105358
  cmps(c,0,(int32_t)c->r[4],0); // 8010535C
  c->r[27]=c->r[4]|c->r[4]; // 80105360
  if (!crb(c,2)) { goto L_80105370; } // 80105364
  c->r[3]=0u+0x00000025u; // 80105368
  goto L_80105414; // 8010536C
L_80105370:;
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80105370
  c->r[31]=c->r[3]+0x0000000Cu; // 80105374
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80105378
  goto L_801053FC; // 8010537C
L_80105380:;
  c->r[29]=R32(c->r[30]+0x00000028u); // 80105380
  cmps(c,0,(int32_t)c->r[29],0); // 80105384
  if (crb(c,2)) { goto L_801053F8; } // 80105388
  c->r[3]=c->r[29]|c->r[29]; // 8010538C
  c->r[4]=c->r[1]+0x00000010u; // 80105390
  c->lr=0x80105398u; f_80187000(c); // 80105394
  cmps(c,0,(int32_t)c->r[3],0); // 80105398
  if (crb(c,2)) { goto L_801053A4; } // 8010539C
  goto L_80105414; // 801053A0
L_801053A4:;
  c->r[28]=0u+0x00000000u; // 801053A4
  goto L_801053EC; // 801053A8
L_801053AC:;
  c->r[3]=c->r[29]|c->r[29]; // 801053AC
  c->r[4]=c->r[28]|c->r[28]; // 801053B0
  c->r[5]=c->r[1]+0x0000000Cu; // 801053B4
  c->lr=0x801053BCu; f_80187050(c); // 801053B8
  cmps(c,0,(int32_t)c->r[3],0); // 801053BC
  if (crb(c,2)) { goto L_801053C8; } // 801053C0
  goto L_80105414; // 801053C4
L_801053C8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801053C8
  c->r[4]=c->r[1]+0x00000008u; // 801053CC
  c->lr=0x801053D4u; f_80176310(c); // 801053D0
  cmps(c,0,(int32_t)c->r[3],0); // 801053D4
  if (crb(c,2)) { goto L_801053E0; } // 801053D8
  goto L_80105414; // 801053DC
L_801053E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801053E0
  c->r[28]=c->r[28]+0x00000001u; // 801053E4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801053E8
L_801053EC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801053EC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801053F0
  if (crb(c,0)) { IRQCHK(c); goto L_801053AC; } // 801053F4
L_801053F8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801053F8
L_801053FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801053FC
  if (crb(c,2)) { goto L_8010540C; } // 80105400
  cmpu(c,0,c->r[30],c->r[31]); // 80105404
  if (!crb(c,2)) { IRQCHK(c); goto L_80105380; } // 80105408
L_8010540C:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 8010540C
  c->r[3]=0u+0x00000000u; // 80105410
L_80105414:;
  c->r[11]=c->r[1]+0x00000030u; // 80105414
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80105418
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010541C
  c->lr=0x80105424u; f_800C2E98(c); // 80105420
  c->r[0]=R32(c->r[1]+0x00000044u); // 80105424
  c->lr=c->r[0]; // 80105428
  c->r[1]=c->r[1]+0x00000040u; // 8010542C
  return; // 80105430
}

// fn_80105440
void f_80105440(Ctx* __restrict c) {
  trace_call(0x80105440u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105440
  c->r[0]=c->lr; // 80105444
  W32(c->r[1]+0x00000054u,c->r[0]); // 80105448
  c->r[11]=c->r[1]+0x00000030u; // 8010544C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80105450
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80105454
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80105458
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8010545C
  c->lr=0x80105464u; f_800C2E48(c); // 80105460
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80105464
  c->r[26]=c->r[4]|c->r[4]; // 80105468
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 8010546C
  c->r[31]=c->r[3]+0x0000000Cu; // 80105470
  c->r[29]=0u+0x00000001u; // 80105474
  goto L_80105544; // 80105478
L_8010547C:;
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 8010547C
  c->r[30]=c->r[28]+0x00000034u; // 80105480
  c->r[27]=R32(c->r[28]+0x00000034u); // 80105484
  goto L_801054D8; // 80105488
L_8010548C:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8010548C
  cmps(c,0,(int32_t)c->r[3],0); // 80105490
  if (crb(c,2)) { goto L_801054B8; } // 80105494
  c->r[5]=R32(c->r[27]+0x00000014u); // 80105498
  c->r[4]=c->r[1]+0x00000008u; // 8010549C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801054A0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801054A4
  c->lr=0x801054ACu; f_800EABB0(c); // 801054A8
  cmps(c,0,(int32_t)c->r[3],0); // 801054AC
  if (crb(c,2)) { goto L_801054BC; } // 801054B0
  goto L_8010555C; // 801054B4
L_801054B8:;
  W8(c->r[1]+0x00000008u,c->r[29]); // 801054B8
L_801054BC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801054BC
  cmps(c,0,(int32_t)c->r[0],0); // 801054C0
  if (crb(c,2)) { goto L_801054D4; } // 801054C4
  c->r[3]=R32(c->r[27]+0x00000014u); // 801054C8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801054CC
  goto L_801054E8; // 801054D0
L_801054D4:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 801054D4
L_801054D8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801054D8
  if (crb(c,2)) { goto L_801054E8; } // 801054DC
  cmpu(c,0,c->r[27],c->r[30]); // 801054E0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010548C; } // 801054E4
L_801054E8:;
  c->r[27]=R32(c->r[28]+0x00000040u); // 801054E8
  c->r[30]=c->r[28]+0x00000040u; // 801054EC
  goto L_8010552C; // 801054F0
L_801054F4:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 801054F4
  c->r[0]=R32(c->r[3]+0x00000010u); // 801054F8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801054FC
  if (crb(c,2)) { goto L_80105528; } // 80105500
  c->r[5]=R32(c->r[27]+0x00000020u); // 80105504
  c->r[4]=c->r[1]+0x0000000Cu; // 80105508
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010550C
  c->lr=0x80105514u; f_80101970(c); // 80105510
  cmps(c,0,(int32_t)c->r[3],0); // 80105514
  if (crb(c,2)) { goto L_80105520; } // 80105518
  goto L_8010555C; // 8010551C
L_80105520:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105520
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 80105524
L_80105528:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80105528
L_8010552C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010552C
  if (crb(c,2)) { goto L_8010553C; } // 80105530
  cmpu(c,0,c->r[27],c->r[30]); // 80105534
  if (!crb(c,2)) { IRQCHK(c); goto L_801054F4; } // 80105538
L_8010553C:;
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[30]); // 8010553C
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105540
L_80105544:;
  cmps(c,0,(int32_t)c->r[28],0); // 80105544
  if (crb(c,2)) { goto L_80105554; } // 80105548
  cmpu(c,0,c->r[28],c->r[31]); // 8010554C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010547C; } // 80105550
L_80105554:;
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[31]);} // 80105554
  c->r[3]=0u+0x00000000u; // 80105558
L_8010555C:;
  c->r[11]=c->r[1]+0x00000030u; // 8010555C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80105560
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80105564
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80105568
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8010556C
  c->lr=0x80105574u; f_800C2E94(c); // 80105570
  c->r[0]=R32(c->r[1]+0x00000054u); // 80105574
  c->lr=c->r[0]; // 80105578
  c->r[1]=c->r[1]+0x00000050u; // 8010557C
  return; // 80105580
}

// fn_80105590
void f_80105590(Ctx* __restrict c) {
  trace_call(0x80105590u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105590
  c->r[0]=c->lr; // 80105594
  W32(c->r[1]+0x00000044u,c->r[0]); // 80105598
  c->r[11]=c->r[1]+0x00000030u; // 8010559C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801055A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801055A4
  c->lr=0x801055ACu; f_800C2E40(c); // 801055A8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801055AC
  c->r[31]=c->r[3]|c->r[3]; // 801055B0
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801055B4
  c->r[30]=c->r[3]+0x0000000Cu; // 801055B8
  c->r[0]=R32(c->r[4]+0x00000060u); // 801055BC
  c->r[26]=0u+0x00000000u; // 801055C0
  c->r[27]=0u+0xFFFFFE76u; // 801055C4
  c->r[28]=0u+0xFFFFFFFFu; // 801055C8
  c->r[0]=c->r[0]|0x04000000u; // 801055CC
  W32(c->r[4]+0x00000060u,c->r[0]); // 801055D0
  c->r[25]=R32(c->r[3]+0x0000000Cu); // 801055D4
  goto L_80105650; // 801055D8
L_801055DC:;
  c->r[24]=R32(c->r[25]+0x00000034u); // 801055DC
  c->r[29]=c->r[25]+0x00000034u; // 801055E0
  goto L_80105620; // 801055E4
L_801055E8:;
  {uint32_t ea=c->r[24]+0x00000054u; WF32(ea,c->f[31]);} // 801055E8
  W32(c->r[24]+0x0000008Cu,c->r[26]); // 801055EC
  c->r[0]=R32(c->r[24]+0x00000024u); // 801055F0
  c->r[0]=c->r[0]&c->r[27]; // 801055F4
  c->r[0]=c->r[0]|0x00000400u; // 801055F8
  W32(c->r[24]+0x00000024u,c->r[0]); // 801055FC
  c->r[3]=R32(c->r[24]+0x00000014u); // 80105600
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80105604
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80105608
  c->lr=0x80105610u; f_800E77D0(c); // 8010560C
  cmps(c,0,(int32_t)c->r[3],3); // 80105610
  if (!crb(c,2)) { goto L_8010561C; } // 80105614
  W32(c->r[24]+0x00000044u,c->r[28]); // 80105618
L_8010561C:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 8010561C
L_80105620:;
  cmpu(c,0,c->r[24],c->r[29]); // 80105620
  if (!crb(c,2)) { IRQCHK(c); goto L_801055E8; } // 80105624
  c->r[4]=R32(c->r[25]+0x00000040u); // 80105628
  c->r[0]=c->r[25]+0x00000040u; // 8010562C
  goto L_80105644; // 80105630
L_80105634:;
  c->r[3]=R16(c->r[4]+0x00000024u); // 80105634
  c->r[3]=c->r[3]|0x00000001u; // 80105638
  W16(c->r[4]+0x00000024u,c->r[3]); // 8010563C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80105640
L_80105644:;
  cmpu(c,0,c->r[4],c->r[0]); // 80105644
  if (!crb(c,2)) { IRQCHK(c); goto L_80105634; } // 80105648
  c->r[25]=R32(c->r[25]+0x00000000u); // 8010564C
L_80105650:;
  cmpu(c,0,c->r[25],c->r[30]); // 80105650
  if (!crb(c,2)) { IRQCHK(c); goto L_801055DC; } // 80105654
  c->r[3]=c->r[31]|c->r[31]; // 80105658
  c->r[4]=0u+0x00000001u; // 8010565C
  c->lr=0x80105664u; f_80104410(c); // 80105660
  cmps(c,0,(int32_t)c->r[3],0); // 80105664
  if (crb(c,2)) { goto L_80105670; } // 80105668
  goto L_80105708; // 8010566C
L_80105670:;
  {uint32_t ea=c->r[31]+0x00000018u; c->r[24]=R32(ea); c->r[31]=ea;} // 80105670
  c->r[30]=0u+0x00000000u; // 80105674
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80105678
  goto L_801056FC; // 8010567C
L_80105680:;
  W32(c->r[24]+0x00000024u,c->r[30]); // 80105680
  c->r[3]=R32(c->r[24]+0x00000014u); // 80105684
  c->r[0]=R32(c->r[3]+0x00000028u); // 80105688
  c->r[0]=rotl(c->r[0],0)&0x00000006u; cr0(c,c->r[0]); // 8010568C
  if (crb(c,2)) { goto L_801056C4; } // 80105690
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105694
  fcmp(c,0,c->f[31],c->f[0]); // 80105698
  if (crb(c,2)) { goto L_801056C4; } // 8010569C
  c->r[0]=R32(c->r[24]+0x00000028u); // 801056A0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801056A4
  if (!crb(c,2)) { goto L_801056C4; } // 801056A8
  c->r[12]=R32(c->r[24]+0x00000010u); // 801056AC
  c->r[3]=c->r[24]|c->r[24]; // 801056B0
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801056B4
  c->r[12]=R32(c->r[12]+0x00000018u); // 801056B8
  c->ctr=c->r[12]; // 801056BC
  if (true) { c->lr=0x801056C4u; dispatch(c,c->ctr); } // 801056C0
L_801056C4:;
  c->r[3]=R32(c->r[24]+0x00000014u); // 801056C4
  c->r[0]=R32(c->r[3]+0x00000028u); // 801056C8
  c->r[0]=rotl(c->r[0],0)&0x00000030u; cr0(c,c->r[0]); // 801056CC
  if (crb(c,2)) { goto L_801056EC; } // 801056D0
  c->r[3]=c->r[24]|c->r[24]; // 801056D4
  c->r[4]=0u+0x00000000u; // 801056D8
  c->lr=0x801056E0u; f_800E9D80(c); // 801056DC
  cmps(c,0,(int32_t)c->r[3],0); // 801056E0
  if (crb(c,2)) { goto L_801056EC; } // 801056E4
  goto L_80105708; // 801056E8
L_801056EC:;
  c->r[0]=R32(c->r[24]+0x00000028u); // 801056EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 801056F0
  W32(c->r[24]+0x00000028u,c->r[0]); // 801056F4
  c->r[24]=R32(c->r[24]+0x00000000u); // 801056F8
L_801056FC:;
  cmpu(c,0,c->r[24],c->r[31]); // 801056FC
  if (!crb(c,2)) { IRQCHK(c); goto L_80105680; } // 80105700
  c->r[3]=0u+0x00000000u; // 80105704
L_80105708:;
  c->r[11]=c->r[1]+0x00000030u; // 80105708
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010570C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80105710
  c->lr=0x80105718u; f_800C2E8C(c); // 80105714
  c->r[0]=R32(c->r[1]+0x00000044u); // 80105718
  c->lr=c->r[0]; // 8010571C
  c->r[1]=c->r[1]+0x00000040u; // 80105720
  return; // 80105724
}

// fn_80105730
void f_80105730(Ctx* __restrict c) {
  trace_call(0x80105730u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105730
  c->r[0]=c->lr; // 80105734
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105738
  c->r[11]=c->r[1]+0x00000020u; // 8010573C
  c->lr=0x80105744u; f_800C2E50(c); // 80105740
  c->r[30]=R32(c->r[3]+0x00000018u); // 80105744
  c->r[28]=c->r[4]|c->r[4]; // 80105748
  c->r[29]=c->r[5]|c->r[5]; // 8010574C
  c->r[31]=c->r[3]+0x00000018u; // 80105750
  goto L_801057A0; // 80105754
L_80105758:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105758
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010575C
  cmps(c,0,(int32_t)c->r[3],0); // 80105760
  if (crb(c,2)) { goto L_8010579C; } // 80105764
  c->r[4]=c->r[28]|c->r[28]; // 80105768
  c->lr=0x80105770u; f_8019DEA0(c); // 8010576C
  cmps(c,0,(int32_t)c->r[3],0); // 80105770
  if (!crb(c,2)) { goto L_8010579C; } // 80105774
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80105778
  c->r[4]=c->r[30]|c->r[30]; // 8010577C
  c->lr=0x80105784u; f_800E6560(c); // 80105780
  cmps(c,0,(int32_t)c->r[3],0); // 80105784
  W32(c->r[29]+0x00000000u,c->r[3]); // 80105788
  c->r[3]=0u+0x00000024u; // 8010578C
  if (crb(c,2)) { goto L_801057AC; } // 80105790
  c->r[3]=0u+0x00000000u; // 80105794
  goto L_801057AC; // 80105798
L_8010579C:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 8010579C
L_801057A0:;
  cmpu(c,0,c->r[30],c->r[31]); // 801057A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80105758; } // 801057A4
  c->r[3]=0u+0x0000005Au; // 801057A8
L_801057AC:;
  c->r[11]=c->r[1]+0x00000020u; // 801057AC
  c->lr=0x801057B4u; f_800C2E9C(c); // 801057B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801057B4
  c->lr=c->r[0]; // 801057B8
  c->r[1]=c->r[1]+0x00000020u; // 801057BC
  return; // 801057C0
}

// fn_801057D0
void f_801057D0(Ctx* __restrict c) {
  trace_call(0x801057D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801057D0
  c->r[0]=c->lr; // 801057D4
  cmps(c,0,(int32_t)c->r[4],0); // 801057D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801057DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801057E0
  c->r[31]=c->r[5]|c->r[5]; // 801057E4
  c->r[5]=0u+0x00000000u; // 801057E8
  if (crb(c,0)) { goto L_80105800; } // 801057EC
  c->r[3]=c->r[3]+0x00000018u; // 801057F0
  c->lr=0x801057F8u; f_800E1430(c); // 801057F4
  c->r[5]=c->r[3]|c->r[3]; // 801057F8
  goto L_80105838; // 801057FC
L_80105800:;
  cmps(c,0,(int32_t)c->r[4],-1); // 80105800
  if (!crb(c,2)) { goto L_80105838; } // 80105804
  c->r[4]=R32(c->r[3]+0x00000018u); // 80105808
  c->r[0]=c->r[3]+0x00000018u; // 8010580C
  goto L_80105830; // 80105810
L_80105814:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 80105814
  c->r[3]=R32(c->r[3]+0x00000028u); // 80105818
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 8010581C
  if (crb(c,2)) { goto L_8010582C; } // 80105820
  c->r[5]=c->r[4]|c->r[4]; // 80105824
  goto L_80105838; // 80105828
L_8010582C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8010582C
L_80105830:;
  cmpu(c,0,c->r[4],c->r[0]); // 80105830
  if (!crb(c,2)) { IRQCHK(c); goto L_80105814; } // 80105834
L_80105838:;
  cmps(c,0,(int32_t)c->r[5],0); // 80105838
  if (crb(c,2)) { goto L_80105858; } // 8010583C
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80105840
  c->r[4]=c->r[5]|c->r[5]; // 80105844
  c->lr=0x8010584Cu; f_800E6560(c); // 80105848
  W32(c->r[31]+0x00000000u,c->r[3]); // 8010584C
  c->r[3]=0u+0x00000000u; // 80105850
  goto L_8010585C; // 80105854
L_80105858:;
  c->r[3]=0u+0x00000025u; // 80105858
L_8010585C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010585C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105860
  c->lr=c->r[0]; // 80105864
  c->r[1]=c->r[1]+0x00000010u; // 80105868
  return; // 8010586C
}

// fn_80105870
void f_80105870(Ctx* __restrict c) {
  trace_call(0x80105870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105870
  c->r[0]=c->lr; // 80105874
  c->r[3]=c->r[3]+0x00000018u; // 80105878
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010587C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105880
  c->r[31]=c->r[4]|c->r[4]; // 80105884
  c->lr=0x8010588Cu; f_800E20A0(c); // 80105888
  W32(c->r[31]+0x00000000u,c->r[3]); // 8010588C
  c->r[3]=0u+0x00000000u; // 80105890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105894
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105898
  c->lr=c->r[0]; // 8010589C
  c->r[1]=c->r[1]+0x00000010u; // 801058A0
  return; // 801058A4
}

// fn_801058B0
void f_801058B0(Ctx* __restrict c) {
  trace_call(0x801058B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801058B0
  c->r[0]=c->lr; // 801058B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801058B8
  c->r[11]=c->r[1]+0x00000020u; // 801058BC
  c->lr=0x801058C4u; f_800C2E4C(c); // 801058C0
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 801058C4
  c->r[27]=c->r[3]|c->r[3]; // 801058C8
  c->r[31]=c->r[3]+0x0000000Cu; // 801058CC
  goto L_80105914; // 801058D0
L_801058D4:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 801058D4
  c->r[30]=c->r[29]+0x00000034u; // 801058D8
  goto L_80105908; // 801058DC
L_801058E0:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 801058E0
  c->r[3]=c->r[28]|c->r[28]; // 801058E4
  c->r[4]=R32(c->r[4]+0x00000040u); // 801058E8
  c->lr=0x801058F0u; f_8010F540(c); // 801058EC
  cmps(c,0,(int32_t)c->r[3],0); // 801058F0
  if (crb(c,2)) { goto L_80105904; } // 801058F4
  cmps(c,0,(int32_t)c->r[3],36); // 801058F8
  if (crb(c,2)) { goto L_80105904; } // 801058FC
  goto L_80105920; // 80105900
L_80105904:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105904
L_80105908:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105908
  if (!crb(c,2)) { IRQCHK(c); goto L_801058E0; } // 8010590C
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105910
L_80105914:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105914
  if (!crb(c,2)) { IRQCHK(c); goto L_801058D4; } // 80105918
  c->r[3]=0u+0x00000000u; // 8010591C
L_80105920:;
  c->r[11]=c->r[1]+0x00000020u; // 80105920
  c->lr=0x80105928u; f_800C2E98(c); // 80105924
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105928
  c->lr=c->r[0]; // 8010592C
  c->r[1]=c->r[1]+0x00000020u; // 80105930
  return; // 80105934
}

// fn_80105940
void f_80105940(Ctx* __restrict c) {
  trace_call(0x80105940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105940
  c->r[0]=c->lr; // 80105944
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105948
  c->r[11]=c->r[1]+0x00000020u; // 8010594C
  c->lr=0x80105954u; f_800C2E4C(c); // 80105950
  c->r[5]=R32(c->r[3]+0x00000004u); // 80105954
  c->r[31]=c->r[3]|c->r[3]; // 80105958
  c->r[4]=R32(c->r[5]+0x000000ACu); // 8010595C
  cmps(c,0,(int32_t)c->r[4],0); // 80105960
  if (crb(c,2)) { goto L_80105970; } // 80105964
  c->r[0]=R32(c->r[4]+0x00000000u); // 80105968
  goto L_80105974; // 8010596C
L_80105970:;
  c->r[0]=0u+0x00000000u; // 80105970
L_80105974:;
  cmps(c,0,(int32_t)c->r[0],0); // 80105974
  if (crb(c,2)) { goto L_80105998; } // 80105978
  cmps(c,0,(int32_t)c->r[4],0); // 8010597C
  if (crb(c,2)) { goto L_8010598C; } // 80105980
  c->r[4]=R32(c->r[4]+0x00000000u); // 80105984
  goto L_80105990; // 80105988
L_8010598C:;
  c->r[4]=0u+0x00000000u; // 8010598C
L_80105990:;
  c->r[4]=R32(c->r[4]+0x00000138u); // 80105990
  goto L_8010599C; // 80105994
L_80105998:;
  c->r[4]=R32(c->r[5]+0x00000138u); // 80105998
L_8010599C:;
  c->r[0]=R32(c->r[5]+0x00000040u); // 8010599C
  c->r[0]=rotl(c->r[0],0)&0x04000000u; cr0(c,c->r[0]); // 801059A0
  if (crb(c,2)) { goto L_801059F8; } // 801059A4
  c->r[6]=R32(c->r[4]+0x00000018u); // 801059A8
  c->r[0]=c->r[4]+0x00000018u; // 801059AC
  c->r[7]=R32(c->r[3]+0x00000018u); // 801059B0
  goto L_801059F0; // 801059B4
L_801059B8:;
  c->r[4]=R32(c->r[6]+0x00000014u); // 801059B8
  c->r[4]=R32(c->r[4]+0x00000028u); // 801059BC
  c->r[4]=rotl(c->r[4],0)&0x00000030u; // 801059C0
  cmpu(c,0,c->r[4],0x00000010u); // 801059C4
  if (!crb(c,2)) { goto L_801059E8; } // 801059C8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801059CC
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801059D0
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[0]);} // 801059D4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801059D8
  c->r[4]=R32(c->r[5]+0x00000060u); // 801059DC
  c->r[4]=c->r[4]|0x04000000u; // 801059E0
  W32(c->r[5]+0x00000060u,c->r[4]); // 801059E4
L_801059E8:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801059E8
  c->r[7]=R32(c->r[7]+0x00000000u); // 801059EC
L_801059F0:;
  cmpu(c,0,c->r[6],c->r[0]); // 801059F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801059B8; } // 801059F4
L_801059F8:;
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 801059F8
  c->r[30]=c->r[3]+0x0000000Cu; // 801059FC
  goto L_80105A48; // 80105A00
L_80105A04:;
  c->r[27]=R32(c->r[28]+0x00000034u); // 80105A04
  c->r[29]=c->r[28]+0x00000034u; // 80105A08
  goto L_80105A3C; // 80105A0C
L_80105A10:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 80105A10
  c->r[3]=c->r[27]|c->r[27]; // 80105A14
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105A18
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105A1C
  c->lr=0x80105A24u; f_8010F5C0(c); // 80105A20
  cmps(c,0,(int32_t)c->r[3],0); // 80105A24
  if (crb(c,2)) { goto L_80105A38; } // 80105A28
  cmps(c,0,(int32_t)c->r[3],36); // 80105A2C
  if (crb(c,2)) { goto L_80105A38; } // 80105A30
  goto L_80105A54; // 80105A34
L_80105A38:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80105A38
L_80105A3C:;
  cmpu(c,0,c->r[27],c->r[29]); // 80105A3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80105A10; } // 80105A40
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105A44
L_80105A48:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105A48
  if (!crb(c,2)) { IRQCHK(c); goto L_80105A04; } // 80105A4C
  c->r[3]=0u+0x00000000u; // 80105A50
L_80105A54:;
  c->r[11]=c->r[1]+0x00000020u; // 80105A54
  c->lr=0x80105A5Cu; f_800C2E98(c); // 80105A58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105A5C
  c->lr=c->r[0]; // 80105A60
  c->r[1]=c->r[1]+0x00000020u; // 80105A64
  return; // 80105A68
}

// fn_80105A70
void f_80105A70(Ctx* __restrict c) {
  trace_call(0x80105A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105A70
  c->r[0]=c->lr; // 80105A74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105A78
  c->r[11]=c->r[1]+0x00000020u; // 80105A7C
  c->lr=0x80105A84u; f_800C2E4C(c); // 80105A80
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80105A84
  c->r[27]=c->r[3]|c->r[3]; // 80105A88
  c->r[31]=c->r[3]+0x0000000Cu; // 80105A8C
  goto L_80105ADC; // 80105A90
L_80105A94:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 80105A94
  c->r[30]=c->r[29]+0x00000034u; // 80105A98
  goto L_80105AD0; // 80105A9C
L_80105AA0:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 80105AA0
  c->r[3]=c->r[28]|c->r[28]; // 80105AA4
  {uint32_t ea=c->r[4]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105AA8
  {uint32_t ea=c->r[4]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80105AAC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105AB0
  c->lr=0x80105AB8u; f_8010F660(c); // 80105AB4
  cmps(c,0,(int32_t)c->r[3],0); // 80105AB8
  if (crb(c,2)) { goto L_80105ACC; } // 80105ABC
  cmps(c,0,(int32_t)c->r[3],36); // 80105AC0
  if (crb(c,2)) { goto L_80105ACC; } // 80105AC4
  goto L_80105AE8; // 80105AC8
L_80105ACC:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105ACC
L_80105AD0:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105AD0
  if (!crb(c,2)) { IRQCHK(c); goto L_80105AA0; } // 80105AD4
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105AD8
L_80105ADC:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105ADC
  if (!crb(c,2)) { IRQCHK(c); goto L_80105A94; } // 80105AE0
  c->r[3]=0u+0x00000000u; // 80105AE4
L_80105AE8:;
  c->r[11]=c->r[1]+0x00000020u; // 80105AE8
  c->lr=0x80105AF0u; f_800C2E98(c); // 80105AEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105AF0
  c->lr=c->r[0]; // 80105AF4
  c->r[1]=c->r[1]+0x00000020u; // 80105AF8
  return; // 80105AFC
}

// fn_80105B00
void f_80105B00(Ctx* __restrict c) {
  trace_call(0x80105B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B00
  c->r[0]=c->lr; // 80105B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105B08
  c->r[11]=c->r[1]+0x00000020u; // 80105B0C
  c->lr=0x80105B14u; f_800C2E4C(c); // 80105B10
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80105B14
  c->r[27]=c->r[3]|c->r[3]; // 80105B18
  c->r[31]=c->r[3]+0x0000000Cu; // 80105B1C
  goto L_80105B6C; // 80105B20
L_80105B24:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 80105B24
  c->r[30]=c->r[29]+0x00000034u; // 80105B28
  goto L_80105B60; // 80105B2C
L_80105B30:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 80105B30
  c->r[3]=c->r[28]|c->r[28]; // 80105B34
  {uint32_t ea=c->r[4]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105B38
  c->lr=0x80105B40u; f_8010F700(c); // 80105B3C
  cmps(c,0,(int32_t)c->r[3],0); // 80105B40
  if (crb(c,2)) { goto L_80105B5C; } // 80105B44
  cmps(c,0,(int32_t)c->r[3],36); // 80105B48
  if (crb(c,2)) { goto L_80105B5C; } // 80105B4C
  cmps(c,0,(int32_t)c->r[3],80); // 80105B50
  if (crb(c,2)) { goto L_80105B5C; } // 80105B54
  goto L_80105B78; // 80105B58
L_80105B5C:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105B5C
L_80105B60:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105B60
  if (!crb(c,2)) { IRQCHK(c); goto L_80105B30; } // 80105B64
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105B68
L_80105B6C:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105B6C
  if (!crb(c,2)) { IRQCHK(c); goto L_80105B24; } // 80105B70
  c->r[3]=0u+0x00000000u; // 80105B74
L_80105B78:;
  c->r[11]=c->r[1]+0x00000020u; // 80105B78
  c->lr=0x80105B80u; f_800C2E98(c); // 80105B7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105B80
  c->lr=c->r[0]; // 80105B84
  c->r[1]=c->r[1]+0x00000020u; // 80105B88
  return; // 80105B8C
}

// fn_80105B90
void f_80105B90(Ctx* __restrict c) {
  trace_call(0x80105B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B90
  c->r[0]=c->lr; // 80105B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105B98
  c->r[11]=c->r[1]+0x00000020u; // 80105B9C
  c->lr=0x80105BA4u; f_800C2E4C(c); // 80105BA0
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80105BA4
  c->r[27]=c->r[3]|c->r[3]; // 80105BA8
  c->r[31]=c->r[3]+0x0000000Cu; // 80105BAC
  goto L_80105BFC; // 80105BB0
L_80105BB4:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 80105BB4
  c->r[30]=c->r[29]+0x00000034u; // 80105BB8
  goto L_80105BF0; // 80105BBC
L_80105BC0:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 80105BC0
  c->r[3]=c->r[28]|c->r[28]; // 80105BC4
  {uint32_t ea=c->r[4]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105BC8
  c->lr=0x80105BD0u; f_8010F790(c); // 80105BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80105BD0
  if (crb(c,2)) { goto L_80105BEC; } // 80105BD4
  cmps(c,0,(int32_t)c->r[3],36); // 80105BD8
  if (crb(c,2)) { goto L_80105BEC; } // 80105BDC
  cmps(c,0,(int32_t)c->r[3],80); // 80105BE0
  if (crb(c,2)) { goto L_80105BEC; } // 80105BE4
  goto L_80105C08; // 80105BE8
L_80105BEC:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105BEC
L_80105BF0:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105BF0
  if (!crb(c,2)) { IRQCHK(c); goto L_80105BC0; } // 80105BF4
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105BF8
L_80105BFC:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105BFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80105BB4; } // 80105C00
  c->r[3]=0u+0x00000000u; // 80105C04
L_80105C08:;
  c->r[11]=c->r[1]+0x00000020u; // 80105C08
  c->lr=0x80105C10u; f_800C2E98(c); // 80105C0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105C10
  c->lr=c->r[0]; // 80105C14
  c->r[1]=c->r[1]+0x00000020u; // 80105C18
  return; // 80105C1C
}

// fn_80105C20
void f_80105C20(Ctx* __restrict c) {
  trace_call(0x80105C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105C20
  c->r[0]=c->lr; // 80105C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105C28
  c->r[11]=c->r[1]+0x00000020u; // 80105C2C
  c->lr=0x80105C34u; f_800C2E4C(c); // 80105C30
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80105C34
  c->r[27]=c->r[3]|c->r[3]; // 80105C38
  c->r[31]=c->r[3]+0x0000000Cu; // 80105C3C
  goto L_80105C8C; // 80105C40
L_80105C44:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 80105C44
  c->r[30]=c->r[29]+0x00000034u; // 80105C48
  goto L_80105C80; // 80105C4C
L_80105C50:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 80105C50
  c->r[3]=c->r[28]|c->r[28]; // 80105C54
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105C58
  c->lr=0x80105C60u; f_8010F8E0(c); // 80105C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80105C60
  if (crb(c,2)) { goto L_80105C7C; } // 80105C64
  cmps(c,0,(int32_t)c->r[3],36); // 80105C68
  if (crb(c,2)) { goto L_80105C7C; } // 80105C6C
  cmps(c,0,(int32_t)c->r[3],80); // 80105C70
  if (crb(c,2)) { goto L_80105C7C; } // 80105C74
  goto L_80105C98; // 80105C78
L_80105C7C:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80105C7C
L_80105C80:;
  cmpu(c,0,c->r[28],c->r[30]); // 80105C80
  if (!crb(c,2)) { IRQCHK(c); goto L_80105C50; } // 80105C84
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105C88
L_80105C8C:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105C8C
  if (!crb(c,2)) { IRQCHK(c); goto L_80105C44; } // 80105C90
  c->r[3]=0u+0x00000000u; // 80105C94
L_80105C98:;
  c->r[11]=c->r[1]+0x00000020u; // 80105C98
  c->lr=0x80105CA0u; f_800C2E98(c); // 80105C9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105CA0
  c->lr=c->r[0]; // 80105CA4
  c->r[1]=c->r[1]+0x00000020u; // 80105CA8
  return; // 80105CAC
}

// fn_80105CB0
void f_80105CB0(Ctx* __restrict c) {
  trace_call(0x80105CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105CB0
  c->r[0]=c->lr; // 80105CB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105CB8
  c->r[11]=c->r[1]+0x00000020u; // 80105CBC
  c->lr=0x80105CC4u; f_800C2E50(c); // 80105CC0
  c->r[30]=R32(c->r[3]+0x00000024u); // 80105CC4
  c->r[28]=c->r[4]|c->r[4]; // 80105CC8
  c->r[29]=c->r[5]|c->r[5]; // 80105CCC
  c->r[31]=c->r[3]+0x00000024u; // 80105CD0
  goto L_80105D38; // 80105CD4
L_80105CD8:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105CD8
  c->r[4]=c->r[28]|c->r[28]; // 80105CDC
  c->lr=0x80105CE4u; f_8019DEA0(c); // 80105CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80105CE4
  if (!crb(c,2)) { goto L_80105D34; } // 80105CE8
  c->r[0]=R32(c->r[30]+0x00000018u); // 80105CEC
  cmps(c,0,(int32_t)c->r[0],0); // 80105CF0
  if (crb(c,2)) { goto L_80105D0C; } // 80105CF4
  cmps(c,0,(int32_t)c->r[0],1); // 80105CF8
  if (crb(c,2)) { goto L_80105D18; } // 80105CFC
  cmps(c,0,(int32_t)c->r[0],2); // 80105D00
  if (crb(c,2)) { goto L_80105D24; } // 80105D04
  goto L_80105D2C; // 80105D08
L_80105D0C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80105D0C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80105D10
  goto L_80105D2C; // 80105D14
L_80105D18:;
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105D18
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80105D1C
  goto L_80105D2C; // 80105D20
L_80105D24:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80105D24
  W32(c->r[29]+0x00000000u,c->r[0]); // 80105D28
L_80105D2C:;
  c->r[3]=0u+0x00000000u; // 80105D2C
  goto L_80105D44; // 80105D30
L_80105D34:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80105D34
L_80105D38:;
  cmpu(c,0,c->r[30],c->r[31]); // 80105D38
  if (!crb(c,2)) { IRQCHK(c); goto L_80105CD8; } // 80105D3C
  c->r[3]=0u+0x00000025u; // 80105D40
L_80105D44:;
  c->r[11]=c->r[1]+0x00000020u; // 80105D44
  c->lr=0x80105D4Cu; f_800C2E9C(c); // 80105D48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105D4C
  c->lr=c->r[0]; // 80105D50
  c->r[1]=c->r[1]+0x00000020u; // 80105D54
  return; // 80105D58
}

// fn_80105D60
void f_80105D60(Ctx* __restrict c) {
  trace_call(0x80105D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105D60
  c->r[0]=c->lr; // 80105D64
  c->r[3]=c->r[3]+0x00000024u; // 80105D68
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 80105D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105D74
  c->r[31]=c->r[5]|c->r[5]; // 80105D78
  c->lr=0x80105D80u; f_800E1430(c); // 80105D7C
  cmps(c,0,(int32_t)c->r[3],0); // 80105D80
  if (crb(c,2)) { goto L_80105DCC; } // 80105D84
  c->r[0]=R32(c->r[3]+0x00000018u); // 80105D88
  cmps(c,0,(int32_t)c->r[0],0); // 80105D8C
  if (crb(c,2)) { goto L_80105DA8; } // 80105D90
  cmps(c,0,(int32_t)c->r[0],1); // 80105D94
  if (crb(c,2)) { goto L_80105DB4; } // 80105D98
  cmps(c,0,(int32_t)c->r[0],2); // 80105D9C
  if (crb(c,2)) { goto L_80105DC0; } // 80105DA0
  goto L_80105DD4; // 80105DA4
L_80105DA8:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80105DA8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80105DAC
  goto L_80105DD4; // 80105DB0
L_80105DB4:;
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105DB4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80105DB8
  goto L_80105DD4; // 80105DBC
L_80105DC0:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80105DC0
  W32(c->r[31]+0x00000000u,c->r[0]); // 80105DC4
  goto L_80105DD4; // 80105DC8
L_80105DCC:;
  c->r[3]=0u+0x00000025u; // 80105DCC
  goto L_80105DD8; // 80105DD0
L_80105DD4:;
  c->r[3]=0u+0x00000000u; // 80105DD4
L_80105DD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105DDC
  c->lr=c->r[0]; // 80105DE0
  c->r[1]=c->r[1]+0x00000010u; // 80105DE4
  return; // 80105DE8
}

// fn_80105DF0
void f_80105DF0(Ctx* __restrict c) {
  trace_call(0x80105DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105DF0
  c->r[0]=c->lr; // 80105DF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105DF8
  c->r[11]=c->r[1]+0x00000020u; // 80105DFC
  c->lr=0x80105E04u; f_800C2E50(c); // 80105E00
  c->r[30]=R32(c->r[3]+0x00000024u); // 80105E04
  c->r[28]=c->r[4]|c->r[4]; // 80105E08
  c->r[29]=c->r[5]|c->r[5]; // 80105E0C
  c->r[31]=c->r[3]+0x00000024u; // 80105E10
  goto L_80105E78; // 80105E14
L_80105E18:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80105E18
  c->r[4]=c->r[28]|c->r[28]; // 80105E1C
  c->lr=0x80105E24u; f_8019DEA0(c); // 80105E20
  cmps(c,0,(int32_t)c->r[3],0); // 80105E24
  if (!crb(c,2)) { goto L_80105E74; } // 80105E28
  c->r[0]=R32(c->r[30]+0x00000018u); // 80105E2C
  cmps(c,0,(int32_t)c->r[0],0); // 80105E30
  if (crb(c,2)) { goto L_80105E4C; } // 80105E34
  cmps(c,0,(int32_t)c->r[0],1); // 80105E38
  if (crb(c,2)) { goto L_80105E58; } // 80105E3C
  cmps(c,0,(int32_t)c->r[0],2); // 80105E40
  if (crb(c,2)) { goto L_80105E64; } // 80105E44
  goto L_80105E6C; // 80105E48
L_80105E4C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80105E4C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80105E50
  goto L_80105E6C; // 80105E54
L_80105E58:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105E58
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80105E5C
  goto L_80105E6C; // 80105E60
L_80105E64:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80105E64
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80105E68
L_80105E6C:;
  c->r[3]=0u+0x00000000u; // 80105E6C
  goto L_80105E84; // 80105E70
L_80105E74:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80105E74
L_80105E78:;
  cmpu(c,0,c->r[30],c->r[31]); // 80105E78
  if (!crb(c,2)) { IRQCHK(c); goto L_80105E18; } // 80105E7C
  c->r[3]=0u+0x00000025u; // 80105E80
L_80105E84:;
  c->r[11]=c->r[1]+0x00000020u; // 80105E84
  c->lr=0x80105E8Cu; f_800C2E9C(c); // 80105E88
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105E8C
  c->lr=c->r[0]; // 80105E90
  c->r[1]=c->r[1]+0x00000020u; // 80105E94
  return; // 80105E98
}

// fn_80105EA0
void f_80105EA0(Ctx* __restrict c) {
  trace_call(0x80105EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105EA0
  c->r[0]=c->lr; // 80105EA4
  c->r[3]=c->r[3]+0x00000024u; // 80105EA8
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 80105EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105EB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105EB4
  c->r[31]=c->r[5]|c->r[5]; // 80105EB8
  c->lr=0x80105EC0u; f_800E1430(c); // 80105EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80105EC0
  if (crb(c,2)) { goto L_80105F10; } // 80105EC4
  c->r[0]=R32(c->r[3]+0x00000018u); // 80105EC8
  cmps(c,0,(int32_t)c->r[0],0); // 80105ECC
  if (crb(c,2)) { goto L_80105EE8; } // 80105ED0
  cmps(c,0,(int32_t)c->r[0],1); // 80105ED4
  if (crb(c,2)) { goto L_80105EF4; } // 80105ED8
  cmps(c,0,(int32_t)c->r[0],2); // 80105EDC
  if (crb(c,2)) { goto L_80105F00; } // 80105EE0
  goto L_80105F08; // 80105EE4
L_80105EE8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80105EE8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80105EEC
  goto L_80105F08; // 80105EF0
L_80105EF4:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105EF4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80105EF8
  goto L_80105F08; // 80105EFC
L_80105F00:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80105F00
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80105F04
L_80105F08:;
  c->r[3]=0u+0x00000000u; // 80105F08
  goto L_80105F14; // 80105F0C
L_80105F10:;
  c->r[3]=0u+0x00000025u; // 80105F10
L_80105F14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105F14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105F18
  c->lr=c->r[0]; // 80105F1C
  c->r[1]=c->r[1]+0x00000010u; // 80105F20
  return; // 80105F24
}

// fn_80105F30
void f_80105F30(Ctx* __restrict c) {
  trace_call(0x80105F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105F30
  c->r[0]=c->lr; // 80105F34
  c->r[3]=c->r[3]+0x00000024u; // 80105F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105F3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105F40
  c->r[31]=c->r[4]|c->r[4]; // 80105F44
  c->lr=0x80105F4Cu; f_800E20A0(c); // 80105F48
  W32(c->r[31]+0x00000000u,c->r[3]); // 80105F4C
  c->r[3]=0u+0x00000000u; // 80105F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105F58
  c->lr=c->r[0]; // 80105F5C
  c->r[1]=c->r[1]+0x00000010u; // 80105F60
  return; // 80105F64
}

// fn_80105F70
void f_80105F70(Ctx* __restrict c) {
  trace_call(0x80105F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105F70
  c->r[0]=c->lr; // 80105F74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105F78
  c->r[11]=c->r[1]+0x00000020u; // 80105F7C
  c->lr=0x80105F84u; f_800C2E48(c); // 80105F80
  c->r[0]=R32(c->r[5]+0x00000000u); // 80105F84
  c->r[27]=c->r[5]|c->r[5]; // 80105F88
  c->r[26]=c->r[4]|c->r[4]; // 80105F8C
  c->r[28]=c->r[6]|c->r[6]; // 80105F90
  cmps(c,0,(int32_t)c->r[0],0); // 80105F94
  c->r[5]=0u+0x00000000u; // 80105F98
  if (crb(c,2)) { goto L_80105FFC; } // 80105F9C
  c->r[29]=R32(c->r[3]+0x00000024u); // 80105FA0
  c->r[31]=c->r[3]+0x00000024u; // 80105FA4
  c->r[30]=0u+0x00000000u; // 80105FA8
  goto L_80105FEC; // 80105FAC
L_80105FB0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80105FB0
  c->r[4]=R32(c->r[27]+0x00000000u); // 80105FB4
  c->lr=0x80105FBCu; f_8019DEA0(c); // 80105FB8
  cmps(c,0,(int32_t)c->r[3],0); // 80105FBC
  if (!crb(c,2)) { goto L_80105FE4; } // 80105FC0
  cmps(c,0,(int32_t)c->r[28],0); // 80105FC4
  c->r[0]=c->r[30]+0x00000030u; // 80105FC8
  W32(c->r[26]+0x00000000u,c->r[0]); // 80105FCC
  if (crb(c,2)) { goto L_80105FDC; } // 80105FD0
  c->r[0]=R32(c->r[29]+0x00000018u); // 80105FD4
  W32(c->r[28]+0x00000000u,c->r[0]); // 80105FD8
L_80105FDC:;
  c->r[3]=0u+0x00000000u; // 80105FDC
  goto L_80106044; // 80105FE0
L_80105FE4:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 80105FE4
  c->r[30]=c->r[30]+0x00000001u; // 80105FE8
L_80105FEC:;
  cmpu(c,0,c->r[29],c->r[31]); // 80105FEC
  if (!crb(c,2)) { IRQCHK(c); goto L_80105FB0; } // 80105FF0
  c->r[3]=0u+0x00000025u; // 80105FF4
  goto L_80106044; // 80105FF8
L_80105FFC:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80105FFC
  c->r[4]=addc(c,c->r[4],0xFFFFFFD0u,0); cr0(c,c->r[4]); // 80106000
  if (crb(c,0)) { goto L_80106014; } // 80106004
  c->r[3]=c->r[3]+0x00000024u; // 80106008
  c->lr=0x80106010u; f_800E1430(c); // 8010600C
  c->r[5]=c->r[3]|c->r[3]; // 80106010
L_80106014:;
  cmps(c,0,(int32_t)c->r[5],0); // 80106014
  if (crb(c,2)) { goto L_80106038; } // 80106018
  c->r[0]=R32(c->r[5]+0x00000014u); // 8010601C
  cmps(c,0,(int32_t)c->r[28],0); // 80106020
  W32(c->r[27]+0x00000000u,c->r[0]); // 80106024
  if (crb(c,2)) { goto L_80106040; } // 80106028
  c->r[0]=R32(c->r[5]+0x00000018u); // 8010602C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80106030
  goto L_80106040; // 80106034
L_80106038:;
  c->r[3]=0u+0x00000025u; // 80106038
  goto L_80106044; // 8010603C
L_80106040:;
  c->r[3]=0u+0x00000000u; // 80106040
L_80106044:;
  c->r[11]=c->r[1]+0x00000020u; // 80106044
  c->lr=0x8010604Cu; f_800C2E94(c); // 80106048
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010604C
  c->lr=c->r[0]; // 80106050
  c->r[1]=c->r[1]+0x00000020u; // 80106054
  return; // 80106058
}

// fn_80106060
void f_80106060(Ctx* __restrict c) {
  trace_call(0x80106060u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106060
  c->r[0]=c->lr; // 80106064
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106068
  c->r[11]=c->r[1]+0x00000030u; // 8010606C
  c->lr=0x80106074u; f_800C2E4C(c); // 80106070
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80106074
  c->r[27]=c->r[3]|c->r[3]; // 80106078
  c->r[31]=c->r[3]+0x0000000Cu; // 8010607C
  goto L_801060FC; // 80106080
L_80106084:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 80106084
  c->r[30]=c->r[29]+0x00000034u; // 80106088
  goto L_801060F0; // 8010608C
L_80106090:;
  c->r[7]=R32(c->r[27]+0x00000004u); // 80106090
  c->r[3]=c->r[28]|c->r[28]; // 80106094
  {uint32_t ea=c->r[28]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106098
  c->r[4]=c->r[1]+0x00000008u; // 8010609C
  {uint32_t ea=c->r[7]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801060A0
  c->r[5]=c->r[7]+0x000000BCu; // 801060A4
  c->r[6]=c->r[7]+0x000000C8u; // 801060A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801060AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801060B0
  {uint32_t ea=c->r[28]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801060B4
  {uint32_t ea=c->r[7]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801060B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801060BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801060C0
  {uint32_t ea=c->r[28]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801060C4
  {uint32_t ea=c->r[7]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801060C8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801060CC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801060D0
  c->lr=0x801060D8u; f_8010F9C0(c); // 801060D4
  cmps(c,0,(int32_t)c->r[3],0); // 801060D8
  if (crb(c,2)) { goto L_801060EC; } // 801060DC
  cmps(c,0,(int32_t)c->r[3],36); // 801060E0
  if (crb(c,2)) { goto L_801060EC; } // 801060E4
  goto L_80106158; // 801060E8
L_801060EC:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 801060EC
L_801060F0:;
  cmpu(c,0,c->r[28],c->r[30]); // 801060F0
  if (!crb(c,2)) { IRQCHK(c); goto L_80106090; } // 801060F4
  c->r[29]=R32(c->r[29]+0x00000000u); // 801060F8
L_801060FC:;
  cmpu(c,0,c->r[29],c->r[31]); // 801060FC
  if (!crb(c,2)) { IRQCHK(c); goto L_80106084; } // 80106100
  c->r[3]=R32(c->r[27]+0x00000004u); // 80106104
  c->r[0]=R32(c->r[3]+0x00000060u); // 80106108
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 8010610C
  if (!crb(c,2)) { goto L_80106154; } // 80106110
  c->r[28]=R32(c->r[27]+0x00000018u); // 80106114
  c->r[31]=c->r[27]+0x00000018u; // 80106118
  goto L_8010614C; // 8010611C
L_80106120:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80106120
  c->r[0]=R32(c->r[3]+0x00000028u); // 80106124
  c->r[0]=rotl(c->r[0],0)&0x00000030u; cr0(c,c->r[0]); // 80106128
  if (crb(c,2)) { goto L_80106148; } // 8010612C
  c->r[3]=c->r[28]|c->r[28]; // 80106130
  c->r[4]=0u+0x00000000u; // 80106134
  c->lr=0x8010613Cu; f_800E9D80(c); // 80106138
  cmps(c,0,(int32_t)c->r[3],0); // 8010613C
  if (crb(c,2)) { goto L_80106148; } // 80106140
  goto L_80106158; // 80106144
L_80106148:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80106148
L_8010614C:;
  cmpu(c,0,c->r[28],c->r[31]); // 8010614C
  if (!crb(c,2)) { IRQCHK(c); goto L_80106120; } // 80106150
L_80106154:;
  c->r[3]=0u+0x00000000u; // 80106154
L_80106158:;
  c->r[11]=c->r[1]+0x00000030u; // 80106158
  c->lr=0x80106160u; f_800C2E98(c); // 8010615C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80106160
  c->lr=c->r[0]; // 80106164
  c->r[1]=c->r[1]+0x00000030u; // 80106168
  return; // 8010616C
}

// fn_80106170
void f_80106170(Ctx* __restrict c) {
  trace_call(0x80106170u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106170
  c->r[0]=c->lr; // 80106174
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106178
  c->r[11]=c->r[1]+0x00000030u; // 8010617C
  c->lr=0x80106184u; f_800C2E44(c); // 80106180
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80106184
  c->r[25]=c->r[3]|c->r[3]; // 80106188
  c->r[31]=c->r[3]+0x0000000Cu; // 8010618C
  goto L_8010625C; // 80106190
L_80106194:;
  c->r[27]=R32(c->r[28]+0x00000034u); // 80106194
  c->r[30]=c->r[28]+0x00000034u; // 80106198
  goto L_80106250; // 8010619C
L_801061A0:;
  c->r[3]=R32(c->r[27]+0x00000024u); // 801061A0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801061A4
  if (!crb(c,2)) { goto L_801061B4; } // 801061A8
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801061AC
  if (crb(c,2)) { goto L_801061F4; } // 801061B0
L_801061B4:;
  c->r[0]=R32(c->r[27]+0x00000034u); // 801061B4
  cmps(c,0,(int32_t)c->r[0],0); // 801061B8
  if (crb(c,2)) { goto L_8010624C; } // 801061BC
  c->r[3]=c->r[25]|c->r[25]; // 801061C0
  c->r[4]=c->r[27]|c->r[27]; // 801061C4
  c->r[5]=0u+0x00000000u; // 801061C8
  c->r[6]=0u+0x00000000u; // 801061CC
  c->r[7]=0u+0x00000001u; // 801061D0
  c->lr=0x801061D8u; f_80103070(c); // 801061D4
  cmps(c,0,(int32_t)c->r[3],0); // 801061D8
  if (crb(c,2)) { goto L_8010624C; } // 801061DC
  cmps(c,0,(int32_t)c->r[3],36); // 801061E0
  if (crb(c,2)) { goto L_8010624C; } // 801061E4
  cmps(c,0,(int32_t)c->r[3],80); // 801061E8
  if (crb(c,2)) { goto L_8010624C; } // 801061EC
  goto L_80106268; // 801061F0
L_801061F4:;
  c->r[26]=R32(c->r[27]+0x00000080u); // 801061F4
  c->r[29]=c->r[27]+0x00000080u; // 801061F8
  goto L_80106244; // 801061FC
L_80106200:;
  c->r[0]=R32(c->r[26]+0x00000034u); // 80106200
  cmps(c,0,(int32_t)c->r[0],0); // 80106204
  if (crb(c,2)) { goto L_80106240; } // 80106208
  c->r[3]=c->r[25]|c->r[25]; // 8010620C
  c->r[4]=c->r[26]|c->r[26]; // 80106210
  c->r[5]=0u+0x00000000u; // 80106214
  c->r[6]=0u+0x00000000u; // 80106218
  c->r[7]=0u+0x00000001u; // 8010621C
  c->lr=0x80106224u; f_80103070(c); // 80106220
  cmps(c,0,(int32_t)c->r[3],0); // 80106224
  if (crb(c,2)) { goto L_80106240; } // 80106228
  cmps(c,0,(int32_t)c->r[3],36); // 8010622C
  if (crb(c,2)) { goto L_80106240; } // 80106230
  cmps(c,0,(int32_t)c->r[3],80); // 80106234
  if (crb(c,2)) { goto L_80106240; } // 80106238
  goto L_80106268; // 8010623C
L_80106240:;
  c->r[26]=R32(c->r[26]+0x00000000u); // 80106240
L_80106244:;
  cmpu(c,0,c->r[26],c->r[29]); // 80106244
  if (!crb(c,2)) { IRQCHK(c); goto L_80106200; } // 80106248
L_8010624C:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 8010624C
L_80106250:;
  cmpu(c,0,c->r[27],c->r[30]); // 80106250
  if (!crb(c,2)) { IRQCHK(c); goto L_801061A0; } // 80106254
  c->r[28]=R32(c->r[28]+0x00000000u); // 80106258
L_8010625C:;
  cmpu(c,0,c->r[28],c->r[31]); // 8010625C
  if (!crb(c,2)) { IRQCHK(c); goto L_80106194; } // 80106260
  c->r[3]=0u+0x00000000u; // 80106264
L_80106268:;
  c->r[11]=c->r[1]+0x00000030u; // 80106268
  c->lr=0x80106270u; f_800C2E90(c); // 8010626C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80106270
  c->lr=c->r[0]; // 80106274
  c->r[1]=c->r[1]+0x00000030u; // 80106278
  return; // 8010627C
}

// fn_80106280
void f_80106280(Ctx* __restrict c) {
  trace_call(0x80106280u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106280
  c->r[0]=c->lr; // 80106284
  W32(c->r[1]+0x00000044u,c->r[0]); // 80106288
  c->r[11]=c->r[1]+0x00000040u; // 8010628C
  c->lr=0x80106294u; f_800C2E40(c); // 80106290
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 80106294
  c->r[29]=c->r[4]|c->r[4]; // 80106298
  c->r[28]=c->r[3]+0x0000000Cu; // 8010629C
  c->r[25]=0u+0x00000000u; // 801062A0
  goto L_80106450; // 801062A4
L_801062A8:;
  c->r[30]=R32(c->r[31]+0x00000034u); // 801062A8
  c->r[27]=c->r[31]+0x00000034u; // 801062AC
  goto L_80106444; // 801062B0
L_801062B4:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 801062B4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801062B8
  if (!crb(c,2)) { goto L_801062C8; } // 801062BC
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801062C0
  if (crb(c,2)) { goto L_80106378; } // 801062C4
L_801062C8:;
  c->r[3]=R32(c->r[30]+0x00000034u); // 801062C8
  c->r[4]=c->r[1]+0x0000000Au; // 801062CC
  c->lr=0x801062D4u; f_801762B0(c); // 801062D0
  cmps(c,0,(int32_t)c->r[3],36); // 801062D4
  if (crb(c,2)) { goto L_801062E4; } // 801062D8
  cmps(c,0,(int32_t)c->r[3],11); // 801062DC
  if (!crb(c,2)) { goto L_801062EC; } // 801062E0
L_801062E4:;
  W8(c->r[1]+0x0000000Au,c->r[25]); // 801062E4
  goto L_801062F8; // 801062E8
L_801062EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801062EC
  if (crb(c,2)) { goto L_801062F8; } // 801062F0
  goto L_8010645C; // 801062F4
L_801062F8:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 801062F8
  cmps(c,0,(int32_t)c->r[3],0); // 801062FC
  if (crb(c,2)) { goto L_8010635C; } // 80106300
  c->r[4]=c->r[1]+0x00000010u; // 80106304
  c->r[6]=c->r[1]+0x00000009u; // 80106308
  c->r[5]=0u+0x00000000u; // 8010630C
  c->lr=0x80106314u; f_801952F0(c); // 80106310
  cmps(c,0,(int32_t)c->r[3],0); // 80106314
  if (!crb(c,2)) { goto L_8010645C; } // 80106318
  c->r[0]=R8(c->r[1]+0x00000009u); // 8010631C
  cmps(c,0,(int32_t)c->r[0],0); // 80106320
  if (crb(c,2)) { goto L_80106334; } // 80106324
  c->r[0]=R32(c->r[29]+0x00000000u); // 80106328
  c->r[0]=c->r[0]|0x00000040u; // 8010632C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80106330
L_80106334:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80106334
  cmps(c,0,(int32_t)c->r[0],0); // 80106338
  if (crb(c,2)) { goto L_8010635C; } // 8010633C
  cmps(c,0,(int32_t)c->r[0],6); // 80106340
  if (crb(c,2)) { goto L_8010635C; } // 80106344
  c->r[0]=R32(c->r[29]+0x00000000u); // 80106348
  c->r[0]=c->r[0]|0x00000002u; // 8010634C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80106350
  goto L_8010635C; // 80106354
  goto L_8010645C; // 80106358
L_8010635C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8010635C
  cmps(c,0,(int32_t)c->r[0],0); // 80106360
  if (crb(c,2)) { goto L_80106440; } // 80106364
  c->r[0]=R32(c->r[29]+0x00000000u); // 80106368
  c->r[0]=c->r[0]|0x00000010u; // 8010636C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80106370
  goto L_8010644C; // 80106374
L_80106378:;
  c->r[24]=R32(c->r[30]+0x00000080u); // 80106378
  c->r[26]=c->r[30]+0x00000080u; // 8010637C
  goto L_80106438; // 80106380
L_80106384:;
  c->r[3]=R32(c->r[24]+0x00000034u); // 80106384
  c->r[4]=c->r[1]+0x0000000Au; // 80106388
  c->lr=0x80106390u; f_801762B0(c); // 8010638C
  cmps(c,0,(int32_t)c->r[3],36); // 80106390
  if (crb(c,2)) { goto L_801063A0; } // 80106394
  cmps(c,0,(int32_t)c->r[3],11); // 80106398
  if (!crb(c,2)) { goto L_801063A8; } // 8010639C
L_801063A0:;
  W8(c->r[1]+0x0000000Au,c->r[25]); // 801063A0
  goto L_801063B4; // 801063A4
L_801063A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801063A8
  if (crb(c,2)) { goto L_801063B4; } // 801063AC
  goto L_8010645C; // 801063B0
L_801063B4:;
  c->r[3]=R32(c->r[24]+0x00000028u); // 801063B4
  cmps(c,0,(int32_t)c->r[3],0); // 801063B8
  if (crb(c,2)) { goto L_80106418; } // 801063BC
  c->r[4]=c->r[1]+0x0000000Cu; // 801063C0
  c->r[6]=c->r[1]+0x00000008u; // 801063C4
  c->r[5]=0u+0x00000000u; // 801063C8
  c->lr=0x801063D0u; f_801952F0(c); // 801063CC
  cmps(c,0,(int32_t)c->r[3],0); // 801063D0
  if (!crb(c,2)) { goto L_8010645C; } // 801063D4
  c->r[0]=R8(c->r[1]+0x00000008u); // 801063D8
  cmps(c,0,(int32_t)c->r[0],0); // 801063DC
  if (crb(c,2)) { goto L_801063F0; } // 801063E0
  c->r[0]=R32(c->r[29]+0x00000000u); // 801063E4
  c->r[0]=c->r[0]|0x00000040u; // 801063E8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801063EC
L_801063F0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801063F0
  cmps(c,0,(int32_t)c->r[0],0); // 801063F4
  if (crb(c,2)) { goto L_80106418; } // 801063F8
  cmps(c,0,(int32_t)c->r[0],6); // 801063FC
  if (crb(c,2)) { goto L_80106418; } // 80106400
  c->r[0]=R32(c->r[29]+0x00000000u); // 80106404
  c->r[0]=c->r[0]|0x00000002u; // 80106408
  W32(c->r[29]+0x00000000u,c->r[0]); // 8010640C
  goto L_80106418; // 80106410
  goto L_8010645C; // 80106414
L_80106418:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 80106418
  cmps(c,0,(int32_t)c->r[0],0); // 8010641C
  if (crb(c,2)) { goto L_80106434; } // 80106420
  c->r[0]=R32(c->r[29]+0x00000000u); // 80106424
  c->r[0]=c->r[0]|0x00000010u; // 80106428
  W32(c->r[29]+0x00000000u,c->r[0]); // 8010642C
  goto L_80106440; // 80106430
L_80106434:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 80106434
L_80106438:;
  cmpu(c,0,c->r[24],c->r[26]); // 80106438
  if (!crb(c,2)) { IRQCHK(c); goto L_80106384; } // 8010643C
L_80106440:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80106440
L_80106444:;
  cmpu(c,0,c->r[30],c->r[27]); // 80106444
  if (!crb(c,2)) { IRQCHK(c); goto L_801062B4; } // 80106448
L_8010644C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8010644C
L_80106450:;
  cmpu(c,0,c->r[31],c->r[28]); // 80106450
  if (!crb(c,2)) { IRQCHK(c); goto L_801062A8; } // 80106454
  c->r[3]=0u+0x00000000u; // 80106458
L_8010645C:;
  c->r[11]=c->r[1]+0x00000040u; // 8010645C
  c->lr=0x80106464u; f_800C2E8C(c); // 80106460
  c->r[0]=R32(c->r[1]+0x00000044u); // 80106464
  c->lr=c->r[0]; // 80106468
  c->r[1]=c->r[1]+0x00000040u; // 8010646C
  return; // 80106470
}

// fn_80106480
void f_80106480(Ctx* __restrict c) {
  trace_call(0x80106480u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106480
  c->r[0]=c->lr; // 80106484
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106488
  c->r[11]=c->r[1]+0x00000020u; // 8010648C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80106490
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80106494
  c->lr=0x8010649Cu; f_800C2E48(c); // 80106498
  c->r[26]=c->r[3]|c->r[3]; // 8010649C
  c->r[27]=c->r[4]|c->r[4]; // 801064A0
  c->r[28]=c->r[5]|c->r[5]; // 801064A4
  c->r[3]=c->r[3]+0x00000004u; // 801064A8
  c->lr=0x801064B0u; f_80101510(c); // 801064AC
  c->r[3]=c->r[26]+0x00000010u; // 801064B0
  c->lr=0x801064B8u; f_80101510(c); // 801064B4
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801064B8
  c->r[29]=0u+0x00000000u; // 801064BC
  c->r[31]=0u+0x00000000u; // 801064C0
  goto L_801064F4; // 801064C4
L_801064C8:;
  c->r[30]=c->r[27]+c->r[31]; cr0(c,c->r[30]); // 801064C8
  if (crb(c,2)) { goto L_801064E0; } // 801064CC
  c->r[3]=c->r[30]|c->r[30]; // 801064D0
  c->lr=0x801064D8u; f_80101510(c); // 801064D4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[31]);} // 801064D8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[31]);} // 801064DC
L_801064E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801064E0
  c->r[4]=c->r[26]+0x00000010u; // 801064E4
  c->lr=0x801064ECu; f_800E4710(c); // 801064E8
  c->r[29]=c->r[29]+0x00000001u; // 801064EC
  c->r[31]=c->r[31]+0x00000014u; // 801064F0
L_801064F4:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 801064F4
  if (crb(c,0)) { IRQCHK(c); goto L_801064C8; } // 801064F8
  c->r[3]=c->r[27]|c->r[27]; // 801064FC
  c->lr=0x80106504u; f_800D89A0(c); // 80106500
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106504
  c->r[3]=c->r[27]|c->r[27]; // 80106508
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010650C
  c->r[4]=c->r[26]+0x00000004u; // 80106510
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 80106514
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[0]);} // 80106518
  c->lr=0x80106520u; f_800E4710(c); // 8010651C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80106520
  c->r[3]=c->r[26]|c->r[26]; // 80106524
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80106528
  c->r[11]=c->r[1]+0x00000020u; // 8010652C
  c->lr=0x80106534u; f_800C2E94(c); // 80106530
  c->r[0]=R32(c->r[1]+0x00000034u); // 80106534
  c->lr=c->r[0]; // 80106538
  c->r[1]=c->r[1]+0x00000030u; // 8010653C
  return; // 80106540
}

// fn_80106550
void f_80106550(Ctx* __restrict c) {
  trace_call(0x80106550u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106550
  c->r[0]=c->lr; // 80106554
  W32(c->r[1]+0x00000044u,c->r[0]); // 80106558
  c->r[11]=c->r[1]+0x00000020u; // 8010655C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80106560
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80106564
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80106568
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8010656C
  c->lr=0x80106574u; f_800C2E50(c); // 80106570
  c->r[29]=c->r[4]|c->r[4]; // 80106574
  c->r[28]=c->r[3]|c->r[3]; // 80106578
  c->r[3]=c->r[29]|c->r[29]; // 8010657C
  c->lr=0x80106584u; f_8010E910(c); // 80106580
  cmps(c,0,(int32_t)c->r[3],0); // 80106584
  if (!crb(c,2)) { goto L_80106698; } // 80106588
  c->r[3]=R32(c->r[29]+0x00000014u); // 8010658C
  c->r[0]=c->r[28]+0x00000004u; // 80106590
  c->r[5]=R32(c->r[28]+0x00000004u); // 80106594
  c->r[30]=0u+0x00000000u; // 80106598
  {uint32_t ea=c->r[3]+0x00000014u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010659C
  c->r[4]=0u+0x00000000u; // 801065A0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801065A4
  c->f[30]=c->ps1[30]=S(c->f[31]+c->f[0]); // 801065A8
  goto L_801065E4; // 801065AC
L_801065B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801065B0
  if (!crb(c,2)) { goto L_801065C8; } // 801065B4
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801065B8
  fcmp(c,0,c->f[0],c->f[31]); // 801065BC
  if (!crb(c,1)) { goto L_801065C8; } // 801065C0
  c->r[30]=c->r[5]|c->r[5]; // 801065C4
L_801065C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801065C8
  if (crb(c,2)) { goto L_801065E0; } // 801065CC
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801065D0
  fcmp(c,0,c->f[0],c->f[30]); // 801065D4
  if (!crb(c,0)) { goto L_801065E0; } // 801065D8
  c->r[4]=c->r[5]|c->r[5]; // 801065DC
L_801065E0:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801065E0
L_801065E4:;
  cmpu(c,0,c->r[5],c->r[0]); // 801065E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801065B0; } // 801065E8
  cmps(c,0,(int32_t)c->r[4],0); // 801065EC
  if (crb(c,2)) { goto L_80106698; } // 801065F0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801065F4
  fcmp(c,0,c->f[0],c->f[31]); // 801065F8
  if (!crb(c,0)) { goto L_80106644; } // 801065FC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106600
  fcmp(c,0,c->f[0],c->f[30]); // 80106604
  if (!crb(c,1)) { goto L_80106644; } // 80106608
  c->r[31]=R32(c->r[28]+0x00000010u); // 8010660C
  c->r[3]=c->r[31]|c->r[31]; // 80106610
  c->lr=0x80106618u; f_800D89A0(c); // 80106614
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[30]);} // 80106618
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010661C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 80106620
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[31]);} // 80106624
  c->r[3]=R32(c->r[30]+0x00000000u); // 80106628
  W32(c->r[31]+0x00000000u,c->r[3]); // 8010662C
  W32(c->r[31]+0x00000004u,c->r[30]); // 80106630
  W32(c->r[3]+0x00000004u,c->r[31]); // 80106634
  c->r[3]=R32(c->r[31]+0x00000004u); // 80106638
  W32(c->r[3]+0x00000000u,c->r[31]); // 8010663C
  goto L_80106698; // 80106640
L_80106644:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106644
  fcmp(c,0,c->f[0],c->f[31]); // 80106648
  if (!crb(c,0)) { goto L_80106658; } // 8010664C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[31]);} // 80106650
  c->r[30]=R32(c->r[30]+0x00000000u); // 80106654
L_80106658:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106658
  c->r[29]=R32(c->r[4]+0x00000000u); // 8010665C
  fcmp(c,0,c->f[0],c->f[30]); // 80106660
  if (!crb(c,1)) { goto L_80106690; } // 80106664
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[30]);} // 80106668
  c->r[29]=c->r[4]|c->r[4]; // 8010666C
  goto L_80106690; // 80106670
L_80106674:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 80106674
  c->r[3]=c->r[30]|c->r[30]; // 80106678
  c->lr=0x80106680u; f_800D89A0(c); // 8010667C
  c->r[3]=c->r[30]|c->r[30]; // 80106680
  c->r[4]=c->r[28]+0x00000010u; // 80106684
  c->lr=0x8010668Cu; f_800E4710(c); // 80106688
  c->r[30]=c->r[31]|c->r[31]; // 8010668C
L_80106690:;
  cmpu(c,0,c->r[30],c->r[29]); // 80106690
  if (!crb(c,2)) { IRQCHK(c); goto L_80106674; } // 80106694
L_80106698:;
  c->r[11]=c->r[1]+0x00000020u; // 80106698
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010669C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801066A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801066A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801066A8
  c->lr=0x801066B0u; f_800C2E9C(c); // 801066AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801066B0
  c->lr=c->r[0]; // 801066B4
  c->r[1]=c->r[1]+0x00000040u; // 801066B8
  return; // 801066BC
}

// fn_801066C0
void f_801066C0(Ctx* __restrict c) {
  trace_call(0x801066C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801066C0
  c->r[0]=c->lr; // 801066C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801066C8
  c->r[11]=c->r[1]+0x00000020u; // 801066CC
  c->lr=0x801066D4u; f_800C2E54(c); // 801066D0
  c->r[31]=R32(c->r[4]+0x00000000u); // 801066D4
  c->r[29]=c->r[3]|c->r[3]; // 801066D8
  c->r[30]=c->r[4]|c->r[4]; // 801066DC
  goto L_801066F4; // 801066E0
L_801066E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801066E4
  c->r[4]=c->r[31]|c->r[31]; // 801066E8
  c->lr=0x801066F0u; f_80106550(c); // 801066EC
  c->r[31]=R32(c->r[31]+0x00000000u); // 801066F0
L_801066F4:;
  cmpu(c,0,c->r[31],c->r[30]); // 801066F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801066E4; } // 801066F8
  c->r[11]=c->r[1]+0x00000020u; // 801066FC
  c->lr=0x80106704u; f_800C2EA0(c); // 80106700
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106704
  c->lr=c->r[0]; // 80106708
  c->r[1]=c->r[1]+0x00000020u; // 8010670C
  return; // 80106710
}

// fn_80106720
void f_80106720(Ctx* __restrict c) {
  trace_call(0x80106720u);
  fcmp(c,0,c->f[1],c->f[2]); // 80106720
  if (!crb(c,1)) { goto L_80106734; } // 80106724
  c->f[0]=c->f[1]; // 80106728
  c->f[1]=c->f[2]; // 8010672C
  c->f[2]=c->f[0]; // 80106730
L_80106734:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80106734
  c->r[0]=c->r[3]+0x00000004u; // 80106738
  goto L_80106764; // 8010673C
L_80106740:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106740
  fcmp(c,0,c->f[1],c->f[0]); // 80106744
  if (!crb(c,0)) { goto L_80106760; } // 80106748
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010674C
  fcmp(c,0,c->f[2],c->f[0]); // 80106750
  if (!crb(c,1)) { goto L_80106760; } // 80106754
  c->r[3]=0u+0x00000001u; // 80106758
  return; // 8010675C
L_80106760:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80106760
L_80106764:;
  cmpu(c,0,c->r[4],c->r[0]); // 80106764
  if (!crb(c,2)) { IRQCHK(c); goto L_80106740; } // 80106768
  c->r[3]=0u+0x00000000u; // 8010676C
  return; // 80106770
}

// fn_80106780
void f_80106780(Ctx* __restrict c) {
  trace_call(0x80106780u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106780
  c->r[0]=c->lr; // 80106784
  W32(c->r[1]+0x00000054u,c->r[0]); // 80106788
  c->r[11]=c->r[1]+0x00000050u; // 8010678C
  c->lr=0x80106794u; f_800C2E40(c); // 80106790
  c->r[31]=c->r[1]|c->r[1]; // 80106794
  c->r[30]=c->r[4]|c->r[4]; // 80106798
  c->r[29]=c->r[3]|c->r[3]; // 8010679C
  c->r[3]=c->r[30]|c->r[30]; // 801067A0
  c->r[4]=c->r[31]+0x00000010u; // 801067A4
  c->r[5]=c->r[31]+0x0000000Cu; // 801067A8
  c->r[6]=c->r[31]+0x00000008u; // 801067AC
  c->lr=0x801067B4u; f_800EAD80(c); // 801067B0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801067B4
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801067B8
  fcmp(c,0,c->f[1],c->f[0]); // 801067BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801067C0
  if (!crb(c,2)) { goto L_80106854; } // 801067C4
  c->r[25]=R32(c->r[29]+0x0000000Cu); // 801067C8
  c->r[28]=c->r[29]+0x0000000Cu; // 801067CC
  c->r[26]=0u+0x00000001u; // 801067D0
  goto L_80106834; // 801067D4
L_801067D8:;
  c->r[0]=R32(c->r[25]+0x00000024u); // 801067D8
  cmpu(c,0,c->r[0],c->r[30]); // 801067DC
  if (!crb(c,2)) { goto L_80106830; } // 801067E0
  c->r[24]=R32(c->r[25]+0x00000034u); // 801067E4
  c->r[27]=c->r[25]+0x00000034u; // 801067E8
  goto L_80106828; // 801067EC
L_801067F0:;
  c->r[3]=c->r[24]|c->r[24]; // 801067F0
  c->lr=0x801067F8u; f_8010E910(c); // 801067F4
  cmps(c,0,(int32_t)c->r[3],0); // 801067F8
  if (!crb(c,2)) { goto L_80106824; } // 801067FC
  c->r[3]=R32(c->r[24]+0x00000014u); // 80106800
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106804
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80106808
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010680C
  c->lr=0x80106814u; f_800EAB50(c); // 80106810
  cmps(c,0,(int32_t)c->r[3],0); // 80106814
  if (crb(c,2)) { goto L_80106824; } // 80106818
  c->r[26]=0u+0x00000000u; // 8010681C
  goto L_80106830; // 80106820
L_80106824:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 80106824
L_80106828:;
  cmpu(c,0,c->r[24],c->r[27]); // 80106828
  if (!crb(c,2)) { IRQCHK(c); goto L_801067F0; } // 8010682C
L_80106830:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 80106830
L_80106834:;
  cmps(c,0,(int32_t)c->r[26],0); // 80106834
  if (crb(c,2)) { goto L_80106844; } // 80106838
  cmpu(c,0,c->r[25],c->r[28]); // 8010683C
  if (!crb(c,2)) { IRQCHK(c); goto L_801067D8; } // 80106840
L_80106844:;
  cmps(c,0,(int32_t)c->r[26],0); // 80106844
  if (crb(c,2)) { goto L_80106854; } // 80106848
  c->r[3]=0u+0x00000001u; // 8010684C
  goto L_8010699C; // 80106850
L_80106854:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106854
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106858
  fcmp(c,0,c->f[1],c->f[0]); // 8010685C
  if (!crb(c,2)) { goto L_8010686C; } // 80106860
  c->r[3]=0u+0x00000000u; // 80106864
  goto L_8010699C; // 80106868
L_8010686C:;
  c->r[25]=R32(c->r[29]+0x0000000Cu); // 8010686C
  c->r[28]=c->r[29]+0x0000000Cu; // 80106870
  c->r[24]=0u+0x00000000u; // 80106874
  goto L_80106898; // 80106878
L_8010687C:;
  c->r[0]=R32(c->r[25]+0x00000024u); // 8010687C
  cmpu(c,0,c->r[0],c->r[30]); // 80106880
  if (!crb(c,2)) { goto L_80106894; } // 80106884
  c->r[3]=c->r[25]+0x00000034u; // 80106888
  c->lr=0x80106890u; f_800E20A0(c); // 8010688C
  c->r[24]=c->r[24]+c->r[3]; // 80106890
L_80106894:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 80106894
L_80106898:;
  cmpu(c,0,c->r[25],c->r[28]); // 80106898
  if (!crb(c,2)) { IRQCHK(c); goto L_8010687C; } // 8010689C
  cmps(c,0,(int32_t)c->r[24],0); // 801068A0
  if (!crb(c,2)) { goto L_801068B0; } // 801068A4
  c->r[3]=0u+0x00000001u; // 801068A8
  goto L_8010699C; // 801068AC
L_801068B0:;
  c->r[5]=c->r[24]+0x00000001u; // 801068B0
  c->r[0]=R32(c->r[1]+0x00000000u); // 801068B4
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801068B8
  c->r[3]=0u-c->r[3]; // 801068BC
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 801068C0
  {uint32_t ea=c->r[1]+c->r[3]; W32(ea,c->r[0]); c->r[1]=ea;} // 801068C4
  c->r[3]=c->r[31]+0x00000014u; // 801068C8
  c->r[4]=c->r[1]+0x00000008u; // 801068CC
  c->lr=0x801068D4u; f_80106480(c); // 801068D0
  {uint32_t ea=c->r[29]+0x0000000Cu; c->r[27]=R32(ea); c->r[29]=ea;} // 801068D4
  goto L_801068F8; // 801068D8
L_801068DC:;
  c->r[0]=R32(c->r[27]+0x00000024u); // 801068DC
  cmpu(c,0,c->r[0],c->r[30]); // 801068E0
  if (!crb(c,2)) { goto L_801068F4; } // 801068E4
  c->r[3]=c->r[31]+0x00000014u; // 801068E8
  c->r[4]=c->r[27]+0x00000034u; // 801068EC
  c->lr=0x801068F4u; f_801066C0(c); // 801068F0
L_801068F4:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 801068F4
L_801068F8:;
  cmpu(c,0,c->r[27],c->r[29]); // 801068F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801068DC; } // 801068FC
  c->r[3]=c->r[31]+0x00000018u; // 80106900
  c->lr=0x80106908u; f_800E20A0(c); // 80106904
  c->r[0]=0u-c->r[3]; // 80106908
  c->r[0]=c->r[0]&~c->r[3]; // 8010690C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80106910
  if (!crb(c,2)) { goto L_80106920; } // 80106914
  c->r[3]=0u+0x00000000u; // 80106918
  goto L_8010699C; // 8010691C
L_80106920:;
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106920
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106924
  fcmp(c,0,c->f[1],c->f[0]); // 80106928
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8010692C
  if (!crb(c,2)) { goto L_80106998; } // 80106930
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80106934
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80106938
  fcmp(c,0,c->f[1],c->f[2]); // 8010693C
  if (!crb(c,1)) { goto L_8010697C; } // 80106940
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80106944
  c->r[3]=c->r[31]+0x00000014u; // 80106948
  c->r[29]=0u+0x00000000u; // 8010694C
  c->lr=0x80106954u; f_80106720(c); // 80106950
  cmps(c,0,(int32_t)c->r[3],0); // 80106954
  if (!crb(c,2)) { goto L_80106974; } // 80106958
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010695C
  c->r[3]=c->r[31]+0x00000014u; // 80106960
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80106964
  c->lr=0x8010696Cu; f_80106720(c); // 80106968
  cmps(c,0,(int32_t)c->r[3],0); // 8010696C
  if (crb(c,2)) { goto L_80106988; } // 80106970
L_80106974:;
  c->r[29]=0u+0x00000001u; // 80106974
  goto L_80106988; // 80106978
L_8010697C:;
  c->r[3]=c->r[31]+0x00000014u; // 8010697C
  c->lr=0x80106984u; f_80106720(c); // 80106980
  c->r[29]=c->r[3]|c->r[3]; // 80106984
L_80106988:;
  cmps(c,0,(int32_t)c->r[29],0); // 80106988
  if (!crb(c,2)) { goto L_80106998; } // 8010698C
  c->r[3]=0u+0x00000000u; // 80106990
  goto L_8010699C; // 80106994
L_80106998:;
  c->r[3]=0u+0x00000002u; // 80106998
L_8010699C:;
  c->r[10]=c->r[31]|c->r[31]; // 8010699C
  c->r[11]=c->r[10]+0x00000050u; // 801069A0
  c->lr=0x801069A8u; f_800C2E8C(c); // 801069A4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801069A8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801069AC
  c->r[1]=c->r[10]|c->r[10]; // 801069B0
  c->lr=c->r[0]; // 801069B4
  return; // 801069B8
}

// fn_801069C0
void f_801069C0(Ctx* __restrict c) {
  trace_call(0x801069C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801069C0
  c->r[0]=c->lr; // 801069C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801069C8
  c->r[11]=c->r[1]+0x00000030u; // 801069CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801069D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801069D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801069D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801069DC
  c->lr=0x801069E4u; f_800C2E48(c); // 801069E0
  cmps(c,0,(int32_t)c->r[4],0); // 801069E4
  c->r[30]=c->r[3]|c->r[3]; // 801069E8
  c->r[31]=c->r[4]|c->r[4]; // 801069EC
  if (!crb(c,2)) { goto L_801069FC; } // 801069F0
  c->r[3]=0u+0x00000025u; // 801069F4
  goto L_80106B80; // 801069F8
L_801069FC:;
  c->r[0]=0u+0x00000000u; // 801069FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 80106A00
  c->r[4]=R32(c->r[3]+0x00000004u); // 80106A04
  c->r[0]=R32(c->r[4]+0x00000060u); // 80106A08
  c->r[28]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[28]); // 80106A0C
  if (!crb(c,2)) { goto L_80106A90; } // 80106A10
  c->r[27]=R32(c->r[3]+0x00000018u); // 80106A14
  c->r[29]=c->r[3]+0x00000018u; // 80106A18
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80106A1C
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80106A20
  goto L_80106A88; // 80106A24
L_80106A28:;
  c->r[26]=R32(c->r[27]+0x00000014u); // 80106A28
  c->r[0]=R32(c->r[26]+0x00000028u); // 80106A2C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80106A30
  if (crb(c,2)) { goto L_80106A84; } // 80106A34
  c->r[3]=c->r[27]|c->r[27]; // 80106A38
  c->r[4]=c->r[1]+0x00000010u; // 80106A3C
  c->r[5]=c->r[1]+0x0000000Cu; // 80106A40
  c->r[6]=c->r[1]+0x00000008u; // 80106A44
  c->lr=0x80106A4Cu; f_800EAD80(c); // 80106A48
  {uint32_t ea=c->r[26]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A4C
  fcmp(c,0,c->f[0],c->f[30]); // 80106A50
  if (!crb(c,1)) { goto L_80106A64; } // 80106A54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A58
  fcmp(c,0,c->f[31],c->f[0]); // 80106A5C
  if (crb(c,2)) { goto L_80106A7C; } // 80106A60
L_80106A64:;
  {uint32_t ea=c->r[26]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A64
  fcmp(c,0,c->f[0],c->f[30]); // 80106A68
  if (!crb(c,0)) { goto L_80106A84; } // 80106A6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A70
  fcmp(c,0,c->f[30],c->f[0]); // 80106A74
  if (!crb(c,2)) { goto L_80106A84; } // 80106A78
L_80106A7C:;
  c->r[28]=0u+0x00000001u; // 80106A7C
  goto L_80106A90; // 80106A80
L_80106A84:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80106A84
L_80106A88:;
  cmpu(c,0,c->r[27],c->r[29]); // 80106A88
  if (!crb(c,2)) { IRQCHK(c); goto L_80106A28; } // 80106A8C
L_80106A90:;
  cmps(c,0,(int32_t)c->r[28],0); // 80106A90
  if (crb(c,2)) { goto L_80106B7C; } // 80106A94
  c->r[27]=R32(c->r[30]+0x0000000Cu); // 80106A98
  c->r[29]=c->r[30]+0x0000000Cu; // 80106A9C
  c->r[26]=0u+0x00000001u; // 80106AA0
  goto L_80106AC4; // 80106AA4
L_80106AA8:;
  c->r[3]=c->r[27]|c->r[27]; // 80106AA8
  c->lr=0x80106AB0u; f_8010C4F0(c); // 80106AAC
  cmps(c,0,(int32_t)c->r[3],0); // 80106AB0
  if (!crb(c,2)) { goto L_80106AC0; } // 80106AB4
  c->r[26]=0u+0x00000000u; // 80106AB8
  goto L_80106ACC; // 80106ABC
L_80106AC0:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80106AC0
L_80106AC4:;
  cmpu(c,0,c->r[27],c->r[29]); // 80106AC4
  if (!crb(c,2)) { IRQCHK(c); goto L_80106AA8; } // 80106AC8
L_80106ACC:;
  cmps(c,0,(int32_t)c->r[26],0); // 80106ACC
  if (crb(c,2)) { goto L_80106AE4; } // 80106AD0
  c->r[0]=0u+0x00000001u; // 80106AD4
  W32(c->r[31]+0x00000000u,c->r[0]); // 80106AD8
  c->r[3]=0u+0x00000000u; // 80106ADC
  goto L_80106B80; // 80106AE0
L_80106AE4:;
  c->r[27]=R32(c->r[30]+0x00000018u); // 80106AE4
  c->r[3]=c->r[30]+0x00000018u; // 80106AE8
  cmpu(c,0,c->r[27],c->r[3]); // 80106AEC
  if (!crb(c,2)) { goto L_80106B08; } // 80106AF0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80106AF4
  cmpu(c,0,c->r[0],c->r[3]); // 80106AF8
  if (!crb(c,2)) { goto L_80106B08; } // 80106AFC
  c->r[0]=0u+0x00000001u; // 80106B00
  goto L_80106B0C; // 80106B04
L_80106B08:;
  c->r[0]=0u+0x00000000u; // 80106B08
L_80106B0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80106B0C
  if (!crb(c,2)) { goto L_80106B7C; } // 80106B10
  c->r[29]=c->r[30]+0x00000018u; // 80106B14
  c->r[26]=0u+0x00000001u; // 80106B18
  goto L_80106B5C; // 80106B1C
L_80106B20:;
  c->r[3]=c->r[30]|c->r[30]; // 80106B20
  c->r[4]=c->r[27]|c->r[27]; // 80106B24
  c->lr=0x80106B2Cu; f_80106780(c); // 80106B28
  cmps(c,0,(int32_t)c->r[3],0); // 80106B2C
  if (crb(c,2)) { goto L_80106B40; } // 80106B30
  cmps(c,0,(int32_t)c->r[3],2); // 80106B34
  if (crb(c,2)) { goto L_80106B48; } // 80106B38
  goto L_80106B58; // 80106B3C
L_80106B40:;
  c->r[26]=0u+0x00000000u; // 80106B40
  goto L_80106B58; // 80106B44
L_80106B48:;
  c->r[0]=0u+0x00000002u; // 80106B48
  W32(c->r[31]+0x00000000u,c->r[0]); // 80106B4C
  c->r[3]=0u+0x00000000u; // 80106B50
  goto L_80106B80; // 80106B54
L_80106B58:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 80106B58
L_80106B5C:;
  cmpu(c,0,c->r[27],c->r[29]); // 80106B5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80106B20; } // 80106B60
  cmps(c,0,(int32_t)c->r[26],0); // 80106B64
  if (crb(c,2)) { goto L_80106B7C; } // 80106B68
  c->r[0]=0u+0x00000001u; // 80106B6C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80106B70
  c->r[3]=0u+0x00000000u; // 80106B74
  goto L_80106B80; // 80106B78
L_80106B7C:;
  c->r[3]=0u+0x00000000u; // 80106B7C
L_80106B80:;
  c->r[11]=c->r[1]+0x00000030u; // 80106B80
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80106B84
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80106B88
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80106B8C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80106B90
  c->lr=0x80106B98u; f_800C2E94(c); // 80106B94
  c->r[0]=R32(c->r[1]+0x00000054u); // 80106B98
  c->lr=c->r[0]; // 80106B9C
  c->r[1]=c->r[1]+0x00000050u; // 80106BA0
  return; // 80106BA4
}

// fn_80106BB0
void f_80106BB0(Ctx* __restrict c) {
  trace_call(0x80106BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106BB0
  c->r[0]=c->lr; // 80106BB4
  c->r[3]=c->r[3]+0x00000018u; // 80106BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106BC0
  c->r[31]=c->r[5]|c->r[5]; // 80106BC4
  c->lr=0x80106BCCu; f_800E1430(c); // 80106BC8
  W32(c->r[31]+0x00000000u,c->r[3]); // 80106BCC
  c->r[3]=0u+0x00000000u; // 80106BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106BD8
  c->lr=c->r[0]; // 80106BDC
  c->r[1]=c->r[1]+0x00000010u; // 80106BE0
  return; // 80106BE4
}

// fn_80106BF0
void f_80106BF0(Ctx* __restrict c) {
  trace_call(0x80106BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106BF0
  c->r[0]=c->lr; // 80106BF4
  W32(c->r[1]+0x00000064u,c->r[0]); // 80106BF8
  c->r[11]=c->r[1]+0x00000050u; // 80106BFC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80106C00
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80106C04
  c->lr=0x80106C0Cu; f_800C2E24(c); // 80106C08
  c->r[21]=R32(c->r[4]+0x00000138u); // 80106C0C
  c->r[29]=c->r[3]|c->r[3]; // 80106C10
  c->r[30]=c->r[4]|c->r[4]; // 80106C14
  c->r[31]=c->r[5]|c->r[5]; // 80106C18
  c->r[3]=c->r[3]+0x0000000Cu; // 80106C1C
  c->lr=0x80106C24u; f_800E20A0(c); // 80106C20
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80106C24
  c->r[24]=c->r[3]|c->r[3]; // 80106C28
  c->r[20]=0u+0x00000000u; // 80106C2C
  c->r[17]=0u+0x80390000u; // 80106C30
  c->r[28]=0u+0x00000000u; // 80106C34
  goto L_80106E54; // 80106C38
L_80106C3C:;
  c->r[4]=c->r[20]|c->r[20]; // 80106C3C
  c->r[3]=c->r[29]+0x0000000Cu; // 80106C40
  c->lr=0x80106C48u; f_800E1430(c); // 80106C44
  c->r[25]=c->r[3]|c->r[3]; // 80106C48
  c->r[3]=c->r[31]|c->r[31]; // 80106C4C
  c->r[5]=c->r[17]+0xFFFFE460u; // 80106C50
  c->r[4]=0u+0x00000058u; // 80106C54
  c->r[6]=0u+0x00000E78u; // 80106C58
  c->lr=0x80106C60u; f_800F15E0(c); // 80106C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80106C60
  c->r[23]=c->r[3]|c->r[3]; // 80106C64
  if (crb(c,2)) { goto L_80106C74; } // 80106C68
  c->lr=0x80106C70u; f_8010BA30(c); // 80106C6C
  c->r[23]=c->r[3]|c->r[3]; // 80106C70
L_80106C74:;
  cmps(c,0,(int32_t)c->r[23],0); // 80106C74
  if (!crb(c,2)) { goto L_80106C84; } // 80106C78
  c->r[3]=0u+0x0000002Cu; // 80106C7C
  goto L_80107030; // 80106C80
L_80106C84:;
  c->r[3]=c->r[23]|c->r[23]; // 80106C84
  c->lr=0x80106C8Cu; f_8010BA90(c); // 80106C88
  W32(c->r[23]+0x00000014u,c->r[30]); // 80106C8C
  c->r[3]=c->r[25]+0x00000034u; // 80106C90
  c->r[0]=R32(c->r[25]+0x00000018u); // 80106C94
  W32(c->r[23]+0x00000018u,c->r[0]); // 80106C98
  c->r[0]=R32(c->r[25]+0x0000001Cu); // 80106C9C
  W32(c->r[23]+0x0000001Cu,c->r[0]); // 80106CA0
  {uint32_t ea=c->r[23]+0x00000054u; WF32(ea,c->f[31]);} // 80106CA4
  c->r[0]=R32(c->r[25]+0x00000024u); // 80106CA8
  W32(c->r[23]+0x00000024u,c->r[0]); // 80106CAC
  W32(c->r[23]+0x00000028u,c->r[28]); // 80106CB0
  c->r[0]=R32(c->r[25]+0x00000020u); // 80106CB4
  W32(c->r[23]+0x00000020u,c->r[0]); // 80106CB8
  c->lr=0x80106CC0u; f_800E20A0(c); // 80106CBC
  c->r[27]=c->r[3]|c->r[3]; // 80106CC0
  c->r[19]=0u+0x00000000u; // 80106CC4
  goto L_80106D98; // 80106CC8
L_80106CCC:;
  c->r[4]=c->r[19]|c->r[19]; // 80106CCC
  c->r[3]=c->r[25]+0x00000034u; // 80106CD0
  c->lr=0x80106CD8u; f_800E1430(c); // 80106CD4
  c->r[26]=c->r[3]|c->r[3]; // 80106CD8
  c->r[3]=c->r[31]|c->r[31]; // 80106CDC
  c->r[5]=c->r[17]+0xFFFFE460u; // 80106CE0
  c->r[4]=0u+0x00000094u; // 80106CE4
  c->r[6]=0u+0x00000E92u; // 80106CE8
  c->lr=0x80106CF0u; f_800F15E0(c); // 80106CEC
  cmps(c,0,(int32_t)c->r[3],0); // 80106CF0
  c->r[22]=c->r[3]|c->r[3]; // 80106CF4
  if (crb(c,2)) { goto L_80106D04; } // 80106CF8
  c->lr=0x80106D00u; f_8010D920(c); // 80106CFC
  c->r[22]=c->r[3]|c->r[3]; // 80106D00
L_80106D04:;
  cmps(c,0,(int32_t)c->r[22],0); // 80106D04
  if (!crb(c,2)) { goto L_80106D14; } // 80106D08
  c->r[3]=0u+0x0000002Cu; // 80106D0C
  goto L_80107030; // 80106D10
L_80106D14:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 80106D14
  c->r[3]=c->r[22]|c->r[22]; // 80106D18
  c->lr=0x80106D20u; f_8010D970(c); // 80106D1C
  c->r[4]=R32(c->r[22]+0x00000014u); // 80106D20
  c->r[3]=R32(c->r[4]+0x00000008u); // 80106D24
  c->r[0]=c->r[3]+0x00000001u; // 80106D28
  W32(c->r[4]+0x00000008u,c->r[0]); // 80106D2C
  c->r[3]=R32(c->r[26]+0x00000014u); // 80106D30
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80106D34
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80106D38
  c->lr=0x80106D40u; f_800E77D0(c); // 80106D3C
  cmps(c,0,(int32_t)c->r[3],0); // 80106D40
  if (!crb(c,2)) { goto L_80106D58; } // 80106D44
  c->r[3]=R32(c->r[26]+0x00000014u); // 80106D48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80106D4C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80106D50
  W32(c->r[22]+0x00000044u,c->r[0]); // 80106D54
L_80106D58:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 80106D58
  W32(c->r[22]+0x00000024u,c->r[0]); // 80106D5C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80106D60
  W32(c->r[22]+0x00000018u,c->r[23]); // 80106D64
  W32(c->r[22]+0x00000020u,c->r[30]); // 80106D68
  if (crb(c,2)) { goto L_80106D88; } // 80106D6C
  c->r[3]=c->r[22]|c->r[22]; // 80106D70
  c->r[4]=c->r[31]|c->r[31]; // 80106D74
  c->lr=0x80106D7Cu; f_8010E750(c); // 80106D78
  cmps(c,0,(int32_t)c->r[3],0); // 80106D7C
  if (crb(c,2)) { goto L_80106D88; } // 80106D80
  goto L_80107030; // 80106D84
L_80106D88:;
  c->r[3]=c->r[22]|c->r[22]; // 80106D88
  c->r[4]=c->r[23]+0x00000034u; // 80106D8C
  c->lr=0x80106D94u; f_800E4710(c); // 80106D90
  c->r[19]=c->r[19]+0x00000001u; // 80106D94
L_80106D98:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[27]); // 80106D98
  if (crb(c,0)) { IRQCHK(c); goto L_80106CCC; } // 80106D9C
  c->r[3]=c->r[25]+0x00000040u; // 80106DA0
  c->lr=0x80106DA8u; f_800E20A0(c); // 80106DA4
  c->r[19]=c->r[3]|c->r[3]; // 80106DA8
  c->r[26]=0u+0x00000000u; // 80106DAC
  goto L_80106E28; // 80106DB0
L_80106DB4:;
  c->r[4]=c->r[26]|c->r[26]; // 80106DB4
  c->r[3]=c->r[25]+0x00000040u; // 80106DB8
  c->lr=0x80106DC0u; f_800E1430(c); // 80106DBC
  c->r[18]=c->r[3]|c->r[3]; // 80106DC0
  c->r[3]=c->r[31]|c->r[31]; // 80106DC4
  c->r[5]=c->r[17]+0xFFFFE460u; // 80106DC8
  c->r[4]=0u+0x00000028u; // 80106DCC
  c->r[6]=0u+0x00000EC0u; // 80106DD0
  c->lr=0x80106DD8u; f_800F15E0(c); // 80106DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80106DD8
  c->r[22]=c->r[3]|c->r[3]; // 80106DDC
  if (crb(c,2)) { goto L_80106DEC; } // 80106DE0
  c->lr=0x80106DE8u; f_80101530(c); // 80106DE4
  c->r[22]=c->r[3]|c->r[3]; // 80106DE8
L_80106DEC:;
  cmps(c,0,(int32_t)c->r[22],0); // 80106DEC
  if (!crb(c,2)) { goto L_80106DFC; } // 80106DF0
  c->r[3]=0u+0x0000002Cu; // 80106DF4
  goto L_80107030; // 80106DF8
L_80106DFC:;
  c->r[4]=R32(c->r[18]+0x00000014u); // 80106DFC
  c->r[3]=c->r[22]|c->r[22]; // 80106E00
  c->lr=0x80106E08u; f_80101580(c); // 80106E04
  c->r[6]=R32(c->r[22]+0x00000014u); // 80106E08
  c->r[3]=c->r[22]|c->r[22]; // 80106E0C
  c->r[4]=c->r[23]+0x00000040u; // 80106E10
  c->r[5]=R32(c->r[6]+0x00000018u); // 80106E14
  c->r[0]=c->r[5]+0x00000001u; // 80106E18
  W32(c->r[6]+0x00000018u,c->r[0]); // 80106E1C
  c->lr=0x80106E24u; f_800E4710(c); // 80106E20
  c->r[26]=c->r[26]+0x00000001u; // 80106E24
L_80106E28:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[19]); // 80106E28
  if (crb(c,0)) { IRQCHK(c); goto L_80106DB4; } // 80106E2C
  c->r[3]=c->r[23]|c->r[23]; // 80106E30
  c->lr=0x80106E38u; f_8010BC10(c); // 80106E34
  cmps(c,0,(int32_t)c->r[3],0); // 80106E38
  if (crb(c,2)) { goto L_80106E44; } // 80106E3C
  goto L_80107030; // 80106E40
L_80106E44:;
  c->r[3]=c->r[23]|c->r[23]; // 80106E44
  c->r[4]=c->r[21]+0x0000000Cu; // 80106E48
  c->lr=0x80106E50u; f_800E4710(c); // 80106E4C
  c->r[20]=c->r[20]+0x00000001u; // 80106E50
L_80106E54:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[24]); // 80106E54
  if (crb(c,0)) { IRQCHK(c); goto L_80106C3C; } // 80106E58
  c->r[3]=c->r[29]+0x00000018u; // 80106E5C
  c->lr=0x80106E64u; f_800E20A0(c); // 80106E60
  c->r[26]=c->r[3]|c->r[3]; // 80106E64
  c->r[18]=c->r[21]+0x0000000Cu; // 80106E68
  c->r[19]=0u+0x00000000u; // 80106E6C
  c->r[28]=0u+0x80390000u; // 80106E70
  goto L_80106F88; // 80106E74
L_80106E78:;
  c->r[4]=c->r[19]|c->r[19]; // 80106E78
  c->r[3]=c->r[29]+0x00000018u; // 80106E7C
  c->lr=0x80106E84u; f_800E1430(c); // 80106E80
  c->r[27]=c->r[3]|c->r[3]; // 80106E84
  c->r[3]=c->r[31]|c->r[31]; // 80106E88
  c->r[5]=c->r[28]+0xFFFFE460u; // 80106E8C
  c->r[4]=0u+0x00000040u; // 80106E90
  c->r[6]=0u+0x00000EDEu; // 80106E94
  c->lr=0x80106E9Cu; f_800F15E0(c); // 80106E98
  cmps(c,0,(int32_t)c->r[3],0); // 80106E9C
  c->r[22]=c->r[3]|c->r[3]; // 80106EA0
  if (crb(c,2)) { goto L_80106EB0; } // 80106EA4
  c->lr=0x80106EACu; f_800E9B70(c); // 80106EA8
  c->r[22]=c->r[3]|c->r[3]; // 80106EAC
L_80106EB0:;
  cmps(c,0,(int32_t)c->r[22],0); // 80106EB0
  if (!crb(c,2)) { goto L_80106EC0; } // 80106EB4
  c->r[3]=0u+0x0000002Cu; // 80106EB8
  goto L_80107030; // 80106EBC
L_80106EC0:;
  c->r[4]=R32(c->r[27]+0x00000014u); // 80106EC0
  c->r[3]=c->r[22]|c->r[22]; // 80106EC4
  c->lr=0x80106ECCu; f_800E9BC0(c); // 80106EC8
  cmps(c,0,(int32_t)c->r[3],0); // 80106ECC
  if (crb(c,2)) { goto L_80106ED8; } // 80106ED0
  goto L_80107030; // 80106ED4
L_80106ED8:;
  c->r[4]=R32(c->r[22]+0x00000014u); // 80106ED8
  c->r[3]=R32(c->r[4]+0x00000008u); // 80106EDC
  c->r[0]=c->r[3]+0x00000001u; // 80106EE0
  W32(c->r[4]+0x00000008u,c->r[0]); // 80106EE4
  W32(c->r[22]+0x00000038u,c->r[30]); // 80106EE8
  c->r[3]=R32(c->r[22]+0x00000014u); // 80106EEC
  c->r[0]=R32(c->r[3]+0x00000028u); // 80106EF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80106EF4
  if (crb(c,2)) { goto L_80106F00; } // 80106EF8
  W32(c->r[30]+0x0000002Cu,c->r[22]); // 80106EFC
L_80106F00:;
  c->r[20]=R32(c->r[21]+0x0000000Cu); // 80106F00
  c->r[23]=0u+0x00000000u; // 80106F04
  goto L_80106F70; // 80106F08
L_80106F0C:;
  c->r[24]=R32(c->r[20]+0x00000040u); // 80106F0C
  c->r[17]=c->r[20]+0x00000040u; // 80106F10
  c->r[25]=rotl(c->r[23],2)&0xFFFFFFFCu; // 80106F14
  goto L_80106F54; // 80106F18
L_80106F1C:;
  c->r[4]=R32(c->r[24]+0x00000014u); // 80106F1C
  c->r[3]=R32(c->r[22]+0x00000014u); // 80106F20
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 80106F24
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80106F28
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 80106F2C
  c->lr=0x80106F34u; f_8019DE30(c); // 80106F30
  cmps(c,0,(int32_t)c->r[3],0); // 80106F34
  if (!crb(c,2)) { goto L_80106F50; } // 80106F38
  W32(c->r[24]+0x00000020u,c->r[22]); // 80106F3C
  c->r[23]=c->r[23]+0x00000001u; // 80106F40
  c->r[3]=R32(c->r[22]+0x00000034u); // 80106F44
  W32(c->r[3]+c->r[25],c->r[24]); // 80106F48
  c->r[25]=c->r[25]+0x00000004u; // 80106F4C
L_80106F50:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 80106F50
L_80106F54:;
  cmpu(c,0,c->r[24],c->r[17]); // 80106F54
  if (!crb(c,2)) { IRQCHK(c); goto L_80106F1C; } // 80106F58
  c->r[0]=R32(c->r[20]+0x00000024u); // 80106F5C
  cmpu(c,0,c->r[0],c->r[27]); // 80106F60
  if (!crb(c,2)) { goto L_80106F6C; } // 80106F64
  W32(c->r[20]+0x00000024u,c->r[22]); // 80106F68
L_80106F6C:;
  c->r[20]=R32(c->r[20]+0x00000000u); // 80106F6C
L_80106F70:;
  cmpu(c,0,c->r[20],c->r[18]); // 80106F70
  if (!crb(c,2)) { IRQCHK(c); goto L_80106F0C; } // 80106F74
  c->r[3]=c->r[22]|c->r[22]; // 80106F78
  c->r[4]=c->r[21]+0x00000018u; // 80106F7C
  c->lr=0x80106F84u; f_800E4710(c); // 80106F80
  c->r[19]=c->r[19]+0x00000001u; // 80106F84
L_80106F88:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[26]); // 80106F88
  if (crb(c,0)) { IRQCHK(c); goto L_80106E78; } // 80106F8C
  c->r[3]=c->r[29]+0x00000024u; // 80106F90
  c->lr=0x80106F98u; f_800E20A0(c); // 80106F94
  c->r[20]=c->r[3]|c->r[3]; // 80106F98
  c->r[18]=0u+0x00000000u; // 80106F9C
  c->r[19]=0u+0x80390000u; // 80106FA0
  goto L_80107024; // 80106FA4
L_80106FA8:;
  c->r[4]=c->r[18]|c->r[18]; // 80106FA8
  c->r[3]=c->r[29]+0x00000024u; // 80106FAC
  c->lr=0x80106FB4u; f_800E1430(c); // 80106FB0
  c->r[6]=R32(c->r[13]+0xFFFF8E48u); // 80106FB4
  c->r[22]=c->r[3]|c->r[3]; // 80106FB8
  c->r[5]=c->r[19]+0xFFFFE460u; // 80106FBC
  c->r[4]=0u+0x00000020u; // 80106FC0
  c->r[3]=R32(c->r[6]+0x00000004u); // 80106FC4
  c->r[6]=0u+0x00000F17u; // 80106FC8
  c->r[7]=0u+0x00000000u; // 80106FCC
  c->r[8]=0u+0x00000000u; // 80106FD0
  c->lr=0x80106FD8u; f_8018F230(c); // 80106FD4
  cmps(c,0,(int32_t)c->r[3],0); // 80106FD8
  c->r[17]=c->r[3]|c->r[3]; // 80106FDC
  if (crb(c,2)) { goto L_80106FEC; } // 80106FE0
  c->lr=0x80106FE8u; f_8010FE80(c); // 80106FE4
  c->r[17]=c->r[3]|c->r[3]; // 80106FE8
L_80106FEC:;
  cmps(c,0,(int32_t)c->r[17],0); // 80106FEC
  if (!crb(c,2)) { goto L_80106FFC; } // 80106FF0
  c->r[3]=0u+0x0000002Cu; // 80106FF4
  goto L_80107030; // 80106FF8
L_80106FFC:;
  c->r[3]=c->r[17]|c->r[17]; // 80106FFC
  c->r[4]=c->r[22]|c->r[22]; // 80107000
  c->lr=0x80107008u; f_8010FEB0(c); // 80107004
  cmps(c,0,(int32_t)c->r[3],0); // 80107008
  if (crb(c,2)) { goto L_80107014; } // 8010700C
  goto L_80107030; // 80107010
L_80107014:;
  c->r[3]=c->r[17]|c->r[17]; // 80107014
  c->r[4]=c->r[21]+0x00000024u; // 80107018
  c->lr=0x80107020u; f_800E4710(c); // 8010701C
  c->r[18]=c->r[18]+0x00000001u; // 80107020
L_80107024:;
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[20]); // 80107024
  if (crb(c,0)) { IRQCHK(c); goto L_80106FA8; } // 80107028
  c->r[3]=0u+0x00000000u; // 8010702C
L_80107030:;
  c->r[11]=c->r[1]+0x00000050u; // 80107030
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80107034
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80107038
  c->lr=0x80107040u; f_800C2E70(c); // 8010703C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80107040
  c->lr=c->r[0]; // 80107044
  c->r[1]=c->r[1]+0x00000060u; // 80107048
  return; // 8010704C
}

// fn_80107050
void f_80107050(Ctx* __restrict c) {
  trace_call(0x80107050u);
  c->r[3]=0u+0x00000000u; // 80107050
  return; // 80107054
}

// fn_80107060
void f_80107060(Ctx* __restrict c) {
  trace_call(0x80107060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107060
  c->r[0]=c->lr; // 80107064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010706C
  c->r[31]=c->r[3]+0x00000018u; // 80107070
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107074
  c->r[30]=R32(c->r[3]+0x00000018u); // 80107078
  goto L_80107098; // 8010707C
L_80107080:;
  c->r[3]=c->r[30]|c->r[30]; // 80107080
  c->lr=0x80107088u; f_800EB500(c); // 80107084
  cmps(c,0,(int32_t)c->r[3],0); // 80107088
  if (crb(c,2)) { goto L_80107094; } // 8010708C
  goto L_801070A4; // 80107090
L_80107094:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80107094
L_80107098:;
  cmpu(c,0,c->r[30],c->r[31]); // 80107098
  if (!crb(c,2)) { IRQCHK(c); goto L_80107080; } // 8010709C
  c->r[3]=0u+0x00000000u; // 801070A0
L_801070A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801070A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801070A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801070AC
  c->lr=c->r[0]; // 801070B0
  c->r[1]=c->r[1]+0x00000010u; // 801070B4
  return; // 801070B8
}

// fn_801070C0
void f_801070C0(Ctx* __restrict c) {
  trace_call(0x801070C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801070C0
  c->r[0]=c->lr; // 801070C4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801070C8
  c->r[11]=c->r[1]+0x00000080u; // 801070CC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801070D0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801070D4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801070D8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801070DC
  c->lr=0x801070E4u; f_800C2E20(c); // 801070E0
  c->r[29]=c->r[4]|c->r[4]; // 801070E4
  c->r[31]=0u+0x80380000u; // 801070E8
  c->r[28]=c->r[3]|c->r[3]; // 801070EC
  c->r[30]=c->r[5]|c->r[5]; // 801070F0
  c->r[3]=c->r[29]|c->r[29]; // 801070F4
  c->r[31]=c->r[31]+0xFFFFE2F8u; // 801070F8
  c->r[4]=c->r[1]+0x00000034u; // 801070FC
  c->r[5]=0u+0x00000004u; // 80107100
  c->r[6]=0u+0x00000001u; // 80107104
  c->r[7]=0u+0x00000000u; // 80107108
  c->lr=0x80107110u; f_8018A4E0(c); // 8010710C
  cmps(c,0,(int32_t)c->r[3],0); // 80107110
  if (crb(c,2)) { goto L_8010711C; } // 80107114
  goto L_80107C54; // 80107118
L_8010711C:;
  c->r[18]=0u+0x00000000u; // 8010711C
  c->r[20]=0u+0x80390000u; // 80107120
  c->r[25]=0u+0x00270000u; // 80107124
  c->r[24]=0u+0x001D0000u; // 80107128
  c->r[23]=0u+0x00250000u; // 8010712C
  c->r[22]=0u+0xFFFFFFFFu; // 80107130
  c->r[21]=0u+0x00000000u; // 80107134
  goto L_801075A0; // 80107138
L_8010713C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010713C
  c->r[5]=c->r[20]+0xFFFFE460u; // 80107140
  c->r[4]=0u+0x00000058u; // 80107144
  c->r[6]=0u+0x00000F48u; // 80107148
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010714C
  c->r[7]=0u+0x00000000u; // 80107150
  c->r[8]=0u+0x00000000u; // 80107154
  c->lr=0x8010715Cu; f_8018F230(c); // 80107158
  cmps(c,0,(int32_t)c->r[3],0); // 8010715C
  c->r[26]=c->r[3]|c->r[3]; // 80107160
  if (crb(c,2)) { goto L_80107170; } // 80107164
  c->lr=0x8010716Cu; f_8010BA30(c); // 80107168
  c->r[26]=c->r[3]|c->r[3]; // 8010716C
L_80107170:;
  cmps(c,0,(int32_t)c->r[26],0); // 80107170
  if (!crb(c,2)) { goto L_80107180; } // 80107174
  c->r[3]=0u+0x0000002Cu; // 80107178
  goto L_80107C54; // 8010717C
L_80107180:;
  c->r[3]=c->r[26]|c->r[26]; // 80107180
  c->lr=0x80107188u; f_8010BA90(c); // 80107184
  c->r[0]=R32(c->r[28]+0x00000004u); // 80107188
  W32(c->r[26]+0x00000014u,c->r[0]); // 8010718C
  c->r[3]=R32(c->r[28]+0x00000004u); // 80107190
  c->lr=0x80107198u; f_800EF770(c); // 80107194
  c->r[4]=R32(c->r[28]+0x00000004u); // 80107198
  c->r[0]=c->r[3]+0x00000058u; // 8010719C
  cmpu(c,0,c->r[30],c->r[25]); // 801071A0
  c->r[3]=R32(c->r[4]+0x000000A8u); // 801071A4
  W32(c->r[3]+0x00000040u,c->r[0]); // 801071A8
  if (!crb(c,0)) { goto L_801071F0; } // 801071AC
  c->r[3]=c->r[29]|c->r[29]; // 801071B0
  c->r[4]=c->r[1]+0x00000028u; // 801071B4
  c->r[5]=0u+0x00000004u; // 801071B8
  c->r[6]=0u+0x00000001u; // 801071BC
  c->r[7]=0u+0x00000000u; // 801071C0
  c->lr=0x801071C8u; f_8018A4E0(c); // 801071C4
  cmps(c,0,(int32_t)c->r[3],0); // 801071C8
  if (crb(c,2)) { goto L_801071D4; } // 801071CC
  goto L_80107C54; // 801071D0
L_801071D4:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 801071D4
  c->r[3]=c->r[29]|c->r[29]; // 801071D8
  c->r[5]=0u+0x00000001u; // 801071DC
  c->lr=0x801071E4u; f_8018AE70(c); // 801071E0
  cmps(c,0,(int32_t)c->r[3],0); // 801071E4
  if (crb(c,2)) { goto L_801071F0; } // 801071E8
  goto L_80107C54; // 801071EC
L_801071F0:;
  cmpu(c,0,c->r[30],c->r[24]); // 801071F0
  if (crb(c,0)) { goto L_80107228; } // 801071F4
  c->r[3]=c->r[29]|c->r[29]; // 801071F8
  c->r[4]=c->r[1]+0x0000000Au; // 801071FC
  c->r[5]=0u+0x00000002u; // 80107200
  c->r[6]=0u+0x00000001u; // 80107204
  c->r[7]=0u+0x00000000u; // 80107208
  c->lr=0x80107210u; f_8018A4E0(c); // 8010720C
  cmps(c,0,(int32_t)c->r[3],0); // 80107210
  if (crb(c,2)) { goto L_8010721C; } // 80107214
  goto L_80107C54; // 80107218
L_8010721C:;
  c->r[0]=R16(c->r[1]+0x0000000Au); // 8010721C
  W32(c->r[26]+0x00000018u,c->r[0]); // 80107220
  goto L_80107264; // 80107224
L_80107228:;
  c->r[3]=c->r[29]|c->r[29]; // 80107228
  c->r[4]=c->r[1]+0x0000001Cu; // 8010722C
  c->r[5]=0u+0x00000004u; // 80107230
  c->r[6]=0u+0x00000001u; // 80107234
  c->r[7]=0u+0x00000000u; // 80107238
  c->lr=0x80107240u; f_8018A4E0(c); // 8010723C
  cmps(c,0,(int32_t)c->r[3],0); // 80107240
  if (crb(c,2)) { goto L_8010724C; } // 80107244
  goto L_80107C54; // 80107248
L_8010724C:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8010724C
  cmps(c,0,(int32_t)c->r[0],0); // 80107250
  if (crb(c,2)) { goto L_80107264; } // 80107254
  c->r[0]=R32(c->r[26]+0x00000018u); // 80107258
  c->r[0]=c->r[0]|0x00000002u; // 8010725C
  W32(c->r[26]+0x00000018u,c->r[0]); // 80107260
L_80107264:;
  cmpu(c,0,c->r[30],c->r[23]); // 80107264
  if (crb(c,0)) { goto L_8010729C; } // 80107268
  c->r[3]=c->r[29]|c->r[29]; // 8010726C
  c->r[4]=c->r[1]+0x00000008u; // 80107270
  c->r[5]=0u+0x00000002u; // 80107274
  c->r[6]=0u+0x00000001u; // 80107278
  c->r[7]=0u+0x00000000u; // 8010727C
  c->lr=0x80107284u; f_8018A4E0(c); // 80107280
  cmps(c,0,(int32_t)c->r[3],0); // 80107284
  if (crb(c,2)) { goto L_80107290; } // 80107288
  goto L_80107C54; // 8010728C
L_80107290:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80107290
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 80107294
  goto L_801072A0; // 80107298
L_8010729C:;
  W32(c->r[26]+0x0000001Cu,c->r[22]); // 8010729C
L_801072A0:;
  cmpu(c,0,c->r[30],c->r[25]); // 801072A0
  if (crb(c,0)) { goto L_801072D8; } // 801072A4
  c->r[3]=c->r[29]|c->r[29]; // 801072A8
  c->r[4]=c->r[1]+0x0000000Cu; // 801072AC
  c->r[5]=0u+0x00000002u; // 801072B0
  c->r[6]=0u+0x00000001u; // 801072B4
  c->r[7]=0u+0x00000000u; // 801072B8
  c->lr=0x801072C0u; f_8018A4E0(c); // 801072BC
  cmps(c,0,(int32_t)c->r[3],0); // 801072C0
  if (crb(c,2)) { goto L_801072CC; } // 801072C4
  goto L_80107C54; // 801072C8
L_801072CC:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801072CC
  W32(c->r[26]+0x00000024u,c->r[0]); // 801072D0
  goto L_80107384; // 801072D4
L_801072D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801072D8
  c->r[4]=c->r[1]+0x00000028u; // 801072DC
  c->r[5]=0u+0x00000004u; // 801072E0
  c->r[6]=0u+0x00000001u; // 801072E4
  c->r[7]=0u+0x00000000u; // 801072E8
  c->lr=0x801072F0u; f_8018A4E0(c); // 801072EC
  cmps(c,0,(int32_t)c->r[3],0); // 801072F0
  if (crb(c,2)) { goto L_801072FC; } // 801072F4
  goto L_80107C54; // 801072F8
L_801072FC:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 801072FC
  cmpu(c,0,c->r[4],0x00000001u); // 80107300
  if (!crb(c,1)) { goto L_80107358; } // 80107304
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107308
  c->r[5]=c->r[20]+0xFFFFE460u; // 8010730C
  c->r[6]=0u+0x00000F8Cu; // 80107310
  c->r[7]=0u+0x00000000u; // 80107314
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107318
  c->lr=0x80107320u; f_8018F760(c); // 8010731C
  cmps(c,0,(int32_t)c->r[3],0); // 80107320
  W32(c->r[26]+0x00000024u,c->r[3]); // 80107324
  c->r[4]=c->r[3]|c->r[3]; // 80107328
  if (!crb(c,2)) { goto L_80107338; } // 8010732C
  c->r[3]=0u+0x0000002Cu; // 80107330
  goto L_80107C54; // 80107334
L_80107338:;
  c->r[6]=R32(c->r[1]+0x00000028u); // 80107338
  c->r[3]=c->r[29]|c->r[29]; // 8010733C
  c->r[5]=0u+0x00000001u; // 80107340
  c->r[7]=0u+0x00000000u; // 80107344
  c->lr=0x8010734Cu; f_8018A4E0(c); // 80107348
  cmps(c,0,(int32_t)c->r[3],0); // 8010734C
  if (crb(c,2)) { goto L_80107384; } // 80107350
  goto L_80107C54; // 80107354
L_80107358:;
  W32(c->r[26]+0x00000024u,c->r[21]); // 80107358
  c->r[0]=R32(c->r[1]+0x00000028u); // 8010735C
  cmpu(c,0,c->r[0],0x00000001u); // 80107360
  if (!crb(c,2)) { goto L_80107384; } // 80107364
  c->r[3]=c->r[29]|c->r[29]; // 80107368
  c->r[4]=0u+0x00000001u; // 8010736C
  c->r[5]=0u+0x00000001u; // 80107370
  c->lr=0x80107378u; f_8018AE70(c); // 80107374
  cmps(c,0,(int32_t)c->r[3],0); // 80107378
  if (crb(c,2)) { goto L_80107384; } // 8010737C
  goto L_80107C54; // 80107380
L_80107384:;
  cmpu(c,0,c->r[30],c->r[24]); // 80107384
  if (crb(c,0)) { goto L_801073E8; } // 80107388
  c->r[3]=c->r[29]|c->r[29]; // 8010738C
  c->r[4]=c->r[1]+0x0000000Cu; // 80107390
  c->r[5]=0u+0x00000002u; // 80107394
  c->r[6]=0u+0x00000001u; // 80107398
  c->r[7]=0u+0x00000000u; // 8010739C
  c->lr=0x801073A4u; f_8018A4E0(c); // 801073A0
  cmps(c,0,(int32_t)c->r[3],0); // 801073A4
  if (crb(c,2)) { goto L_801073B0; } // 801073A8
  goto L_80107C54; // 801073AC
L_801073B0:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801073B0
  c->r[3]=c->r[29]|c->r[29]; // 801073B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801073B8
  c->r[4]=c->r[1]+0x0000000Cu; // 801073BC
  c->r[5]=0u+0x00000002u; // 801073C0
  c->r[6]=0u+0x00000001u; // 801073C4
  c->r[7]=0u+0x00000000u; // 801073C8
  c->lr=0x801073D0u; f_8018A4E0(c); // 801073CC
  cmps(c,0,(int32_t)c->r[3],0); // 801073D0
  if (crb(c,2)) { goto L_801073DC; } // 801073D4
  goto L_80107C54; // 801073D8
L_801073DC:;
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801073DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801073E0
  goto L_80107430; // 801073E4
L_801073E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801073E8
  c->r[4]=c->r[1]+0x00000024u; // 801073EC
  c->r[5]=0u+0x00000004u; // 801073F0
  c->r[6]=0u+0x00000001u; // 801073F4
  c->r[7]=0u+0x00000000u; // 801073F8
  c->lr=0x80107400u; f_8018A4E0(c); // 801073FC
  cmps(c,0,(int32_t)c->r[3],0); // 80107400
  if (crb(c,2)) { goto L_8010740C; } // 80107404
  goto L_80107C54; // 80107408
L_8010740C:;
  c->r[3]=c->r[29]|c->r[29]; // 8010740C
  c->r[4]=c->r[1]+0x00000020u; // 80107410
  c->r[5]=0u+0x00000004u; // 80107414
  c->r[6]=0u+0x00000001u; // 80107418
  c->r[7]=0u+0x00000000u; // 8010741C
  c->lr=0x80107424u; f_8018A4E0(c); // 80107420
  cmps(c,0,(int32_t)c->r[3],0); // 80107424
  if (crb(c,2)) { goto L_80107430; } // 80107428
  goto L_80107C54; // 8010742C
L_80107430:;
  c->r[17]=0u+0x00000000u; // 80107430
  goto L_8010754C; // 80107434
L_80107438:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107438
  c->r[5]=c->r[20]+0xFFFFE460u; // 8010743C
  c->r[4]=0u+0x0000003Cu; // 80107440
  c->r[6]=0u+0x00000FB2u; // 80107444
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107448
  c->r[7]=0u+0x00000000u; // 8010744C
  c->r[8]=0u+0x00000000u; // 80107450
  c->lr=0x80107458u; f_8018F230(c); // 80107454
  cmps(c,0,(int32_t)c->r[3],0); // 80107458
  c->r[27]=c->r[3]|c->r[3]; // 8010745C
  if (crb(c,2)) { goto L_8010746C; } // 80107460
  c->lr=0x80107468u; f_8010FCF0(c); // 80107464
  c->r[27]=c->r[3]|c->r[3]; // 80107468
L_8010746C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010746C
  if (!crb(c,2)) { goto L_8010747C; } // 80107470
  c->r[3]=0u+0x0000002Cu; // 80107474
  goto L_80107C54; // 80107478
L_8010747C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010747C
  c->r[5]=c->r[20]+0xFFFFE460u; // 80107480
  c->r[4]=0u+0x00000094u; // 80107484
  c->r[6]=0u+0x00000FB8u; // 80107488
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010748C
  c->r[7]=0u+0x00000000u; // 80107490
  c->r[8]=0u+0x00000000u; // 80107494
  c->lr=0x8010749Cu; f_8018F230(c); // 80107498
  cmps(c,0,(int32_t)c->r[3],0); // 8010749C
  c->r[19]=c->r[3]|c->r[3]; // 801074A0
  if (crb(c,2)) { goto L_801074B0; } // 801074A4
  c->lr=0x801074ACu; f_8010D920(c); // 801074A8
  c->r[19]=c->r[3]|c->r[3]; // 801074AC
L_801074B0:;
  cmps(c,0,(int32_t)c->r[19],0); // 801074B0
  if (!crb(c,2)) { goto L_801074C0; } // 801074B4
  c->r[3]=0u+0x0000002Cu; // 801074B8
  goto L_80107C54; // 801074BC
L_801074C0:;
  c->r[3]=c->r[27]|c->r[27]; // 801074C0
  c->lr=0x801074C8u; f_8010FD30(c); // 801074C4
  c->r[3]=c->r[19]|c->r[19]; // 801074C8
  c->r[4]=c->r[27]|c->r[27]; // 801074CC
  c->lr=0x801074D4u; f_8010D970(c); // 801074D0
  c->r[3]=R32(c->r[27]+0x00000008u); // 801074D4
  c->r[0]=c->r[3]+0x00000001u; // 801074D8
  W32(c->r[27]+0x00000008u,c->r[0]); // 801074DC
  c->r[3]=R32(c->r[28]+0x00000004u); // 801074E0
  c->lr=0x801074E8u; f_800EF770(c); // 801074E4
  c->r[5]=R32(c->r[28]+0x00000004u); // 801074E8
  c->r[0]=c->r[3]+0x00000094u; // 801074EC
  c->r[3]=c->r[19]|c->r[19]; // 801074F0
  c->r[4]=c->r[29]|c->r[29]; // 801074F4
  c->r[6]=R32(c->r[5]+0x000000A8u); // 801074F8
  c->r[5]=c->r[30]|c->r[30]; // 801074FC
  W32(c->r[6]+0x00000040u,c->r[0]); // 80107500
  c->lr=0x80107508u; f_8010F0A0(c); // 80107504
  cmps(c,0,(int32_t)c->r[3],0); // 80107508
  if (crb(c,2)) { goto L_80107514; } // 8010750C
  goto L_80107C54; // 80107510
L_80107514:;
  c->r[3]=c->r[19]|c->r[19]; // 80107514
  c->lr=0x8010751Cu; f_8010E890(c); // 80107518
  cmps(c,0,(int32_t)c->r[3],0); // 8010751C
  if (crb(c,2)) { goto L_80107530; } // 80107520
  c->r[3]=R32(c->r[28]+0x00000004u); // 80107524
  c->r[4]=0u+0x00000001u; // 80107528
  c->lr=0x80107530u; f_800D9BA0(c); // 8010752C
L_80107530:;
  W32(c->r[19]+0x00000018u,c->r[26]); // 80107530
  c->r[3]=c->r[19]|c->r[19]; // 80107534
  c->r[4]=c->r[26]+0x00000034u; // 80107538
  c->r[0]=R32(c->r[28]+0x00000004u); // 8010753C
  W32(c->r[19]+0x00000020u,c->r[0]); // 80107540
  c->lr=0x80107548u; f_800E4710(c); // 80107544
  c->r[17]=c->r[17]+0x00000001u; // 80107548
L_8010754C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010754C
  cmpu(c,0,c->r[17],c->r[0]); // 80107550
  if (crb(c,0)) { IRQCHK(c); goto L_80107438; } // 80107554
  c->r[7]=R32(c->r[1]+0x00000020u); // 80107558
  c->r[3]=c->r[28]|c->r[28]; // 8010755C
  c->r[4]=c->r[29]|c->r[29]; // 80107560
  c->r[5]=c->r[30]|c->r[30]; // 80107564
  c->r[6]=c->r[26]|c->r[26]; // 80107568
  c->lr=0x80107570u; f_80107C80(c); // 8010756C
  cmps(c,0,(int32_t)c->r[3],0); // 80107570
  if (crb(c,2)) { goto L_8010757C; } // 80107574
  goto L_80107C54; // 80107578
L_8010757C:;
  c->r[3]=c->r[26]|c->r[26]; // 8010757C
  c->lr=0x80107584u; f_8010BC10(c); // 80107580
  cmps(c,0,(int32_t)c->r[3],0); // 80107584
  if (crb(c,2)) { goto L_80107590; } // 80107588
  goto L_80107C54; // 8010758C
L_80107590:;
  c->r[3]=c->r[26]|c->r[26]; // 80107590
  c->r[4]=c->r[28]+0x0000000Cu; // 80107594
  c->lr=0x8010759Cu; f_800E4710(c); // 80107598
  c->r[18]=c->r[18]+0x00000001u; // 8010759C
L_801075A0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801075A0
  cmpu(c,0,c->r[18],c->r[0]); // 801075A4
  if (crb(c,0)) { IRQCHK(c); goto L_8010713C; } // 801075A8
  c->r[3]=c->r[29]|c->r[29]; // 801075AC
  c->r[4]=c->r[1]+0x00000030u; // 801075B0
  c->r[5]=0u+0x00000004u; // 801075B4
  c->r[6]=0u+0x00000001u; // 801075B8
  c->r[7]=0u+0x00000000u; // 801075BC
  c->lr=0x801075C4u; f_8018A4E0(c); // 801075C0
  cmps(c,0,(int32_t)c->r[3],0); // 801075C4
  if (crb(c,2)) { goto L_801075D0; } // 801075C8
  goto L_80107C54; // 801075CC
L_801075D0:;
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801075D0
  c->r[27]=c->r[28]+0x0000000Cu; // 801075D4
  {uint32_t ea=c->r[2]+0xFFFFA0A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801075D8
  c->r[17]=0u+0x00000000u; // 801075DC
  c->r[25]=0u+0x00270000u; // 801075E0
  c->r[26]=0u+0x80390000u; // 801075E4
  c->r[20]=0u+0x00120000u; // 801075E8
  c->r[21]=0u+0x00100000u; // 801075EC
  c->r[22]=0u+0x000B0000u; // 801075F0
  c->r[23]=0u+0x000C0000u; // 801075F4
  c->r[24]=0u+0x00000000u; // 801075F8
  goto L_80107B6C; // 801075FC
L_80107600:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107600
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107604
  c->r[4]=0u+0x00000030u; // 80107608
  c->r[6]=0u+0x00000FE2u; // 8010760C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107610
  c->r[7]=0u+0x00000000u; // 80107614
  c->r[8]=0u+0x00000000u; // 80107618
  c->lr=0x80107620u; f_8018F230(c); // 8010761C
  cmps(c,0,(int32_t)c->r[3],0); // 80107620
  c->r[19]=c->r[3]|c->r[3]; // 80107624
  if (crb(c,2)) { goto L_80107634; } // 80107628
  c->lr=0x80107630u; f_800EB810(c); // 8010762C
  c->r[19]=c->r[3]|c->r[3]; // 80107630
L_80107634:;
  cmps(c,0,(int32_t)c->r[19],0); // 80107634
  if (!crb(c,2)) { goto L_80107644; } // 80107638
  c->r[3]=0u+0x0000002Cu; // 8010763C
  goto L_80107C54; // 80107640
L_80107644:;
  c->r[3]=c->r[19]|c->r[19]; // 80107644
  c->r[4]=0u+0x00000000u; // 80107648
  c->lr=0x80107650u; f_800EB850(c); // 8010764C
  c->r[3]=c->r[29]|c->r[29]; // 80107650
  c->r[4]=c->r[1]+0x00000028u; // 80107654
  c->r[5]=0u+0x00000004u; // 80107658
  c->r[6]=0u+0x00000001u; // 8010765C
  c->r[7]=0u+0x00000000u; // 80107660
  c->lr=0x80107668u; f_8018A4E0(c); // 80107664
  cmps(c,0,(int32_t)c->r[3],0); // 80107668
  if (crb(c,2)) { goto L_80107674; } // 8010766C
  goto L_80107C54; // 80107670
L_80107674:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107674
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107678
  c->r[4]=R32(c->r[1]+0x00000028u); // 8010767C
  c->r[6]=0u+0x00000FF2u; // 80107680
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107684
  c->r[7]=0u+0x00000000u; // 80107688
  c->lr=0x80107690u; f_8018F760(c); // 8010768C
  cmps(c,0,(int32_t)c->r[3],0); // 80107690
  W32(c->r[19]+0x0000000Cu,c->r[3]); // 80107694
  c->r[4]=c->r[3]|c->r[3]; // 80107698
  if (!crb(c,2)) { goto L_801076A8; } // 8010769C
  c->r[3]=0u+0x0000002Cu; // 801076A0
  goto L_80107C54; // 801076A4
L_801076A8:;
  c->r[6]=R32(c->r[1]+0x00000028u); // 801076A8
  c->r[3]=c->r[29]|c->r[29]; // 801076AC
  c->r[5]=0u+0x00000001u; // 801076B0
  c->r[7]=0u+0x00000000u; // 801076B4
  c->lr=0x801076BCu; f_8018A4E0(c); // 801076B8
  cmps(c,0,(int32_t)c->r[3],0); // 801076BC
  if (crb(c,2)) { goto L_801076C8; } // 801076C0
  goto L_80107C54; // 801076C4
L_801076C8:;
  cmpu(c,0,c->r[30],c->r[20]); // 801076C8
  if (!crb(c,0)) { goto L_80107718; } // 801076CC
  c->r[3]=c->r[29]|c->r[29]; // 801076D0
  c->r[4]=c->r[1]+0x00000018u; // 801076D4
  c->r[5]=0u+0x00000004u; // 801076D8
  c->r[6]=0u+0x00000001u; // 801076DC
  c->r[7]=0u+0x00000000u; // 801076E0
  c->lr=0x801076E8u; f_8018A4E0(c); // 801076E4
  cmps(c,0,(int32_t)c->r[3],0); // 801076E8
  if (crb(c,2)) { goto L_801076F4; } // 801076EC
  goto L_80107C54; // 801076F0
L_801076F4:;
  c->r[3]=c->r[29]|c->r[29]; // 801076F4
  c->r[4]=c->r[1]+0x00000018u; // 801076F8
  c->r[5]=0u+0x00000004u; // 801076FC
  c->r[6]=0u+0x00000001u; // 80107700
  c->r[7]=0u+0x00000000u; // 80107704
  c->lr=0x8010770Cu; f_8018A4E0(c); // 80107708
  cmps(c,0,(int32_t)c->r[3],0); // 8010770C
  if (crb(c,2)) { goto L_80107718; } // 80107710
  goto L_80107C54; // 80107714
L_80107718:;
  c->r[3]=c->r[29]|c->r[29]; // 80107718
  c->r[4]=c->r[19]+0x00000010u; // 8010771C
  c->r[5]=0u+0x00000004u; // 80107720
  c->r[6]=0u+0x00000001u; // 80107724
  c->r[7]=0u+0x00000000u; // 80107728
  c->lr=0x80107730u; f_8018A4E0(c); // 8010772C
  cmps(c,0,(int32_t)c->r[3],0); // 80107730
  if (crb(c,2)) { goto L_8010773C; } // 80107734
  goto L_80107C54; // 80107738
L_8010773C:;
  c->r[3]=c->r[29]|c->r[29]; // 8010773C
  c->r[4]=c->r[19]+0x00000014u; // 80107740
  c->r[5]=0u+0x00000004u; // 80107744
  c->r[6]=0u+0x00000001u; // 80107748
  c->r[7]=0u+0x00000000u; // 8010774C
  c->lr=0x80107754u; f_8018A4E0(c); // 80107750
  cmps(c,0,(int32_t)c->r[3],0); // 80107754
  if (crb(c,2)) { goto L_80107760; } // 80107758
  goto L_80107C54; // 8010775C
L_80107760:;
  c->r[3]=c->r[29]|c->r[29]; // 80107760
  c->r[4]=c->r[19]+0x00000018u; // 80107764
  c->r[5]=0u+0x00000004u; // 80107768
  c->r[6]=0u+0x00000001u; // 8010776C
  c->r[7]=0u+0x00000000u; // 80107770
  c->lr=0x80107778u; f_8018A4E0(c); // 80107774
  cmps(c,0,(int32_t)c->r[3],0); // 80107778
  if (crb(c,2)) { goto L_80107784; } // 8010777C
  goto L_80107C54; // 80107780
L_80107784:;
  cmpu(c,0,c->r[30],c->r[21]); // 80107784
  if (crb(c,0)) { goto L_801077B0; } // 80107788
  c->r[3]=c->r[29]|c->r[29]; // 8010778C
  c->r[4]=c->r[19]+0x00000028u; // 80107790
  c->r[5]=0u+0x00000004u; // 80107794
  c->r[6]=0u+0x00000001u; // 80107798
  c->r[7]=0u+0x00000000u; // 8010779C
  c->lr=0x801077A4u; f_8018A4E0(c); // 801077A0
  cmps(c,0,(int32_t)c->r[3],0); // 801077A4
  if (crb(c,2)) { goto L_80107860; } // 801077A8
  goto L_80107C54; // 801077AC
L_801077B0:;
  c->r[3]=c->r[29]|c->r[29]; // 801077B0
  c->r[4]=c->r[1]+0x00000014u; // 801077B4
  c->r[5]=0u+0x00000004u; // 801077B8
  c->r[6]=0u+0x00000001u; // 801077BC
  c->r[7]=0u+0x00000000u; // 801077C0
  c->lr=0x801077C8u; f_8018A4E0(c); // 801077C4
  cmps(c,0,(int32_t)c->r[3],0); // 801077C8
  if (crb(c,2)) { goto L_801077D4; } // 801077CC
  goto L_80107C54; // 801077D0
L_801077D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801077D4
  cmps(c,0,(int32_t)c->r[0],0); // 801077D8
  if (crb(c,2)) { goto L_801077EC; } // 801077DC
  c->r[0]=R32(c->r[19]+0x00000028u); // 801077E0
  c->r[0]=c->r[0]|0x00000001u; // 801077E4
  W32(c->r[19]+0x00000028u,c->r[0]); // 801077E8
L_801077EC:;
  cmpu(c,0,c->r[30],c->r[22]); // 801077EC
  if (crb(c,0)) { goto L_80107860; } // 801077F0
  c->r[3]=c->r[29]|c->r[29]; // 801077F4
  c->r[4]=c->r[1]+0x00000010u; // 801077F8
  c->r[5]=0u+0x00000004u; // 801077FC
  c->r[6]=0u+0x00000001u; // 80107800
  c->r[7]=0u+0x00000000u; // 80107804
  c->lr=0x8010780Cu; f_8018A4E0(c); // 80107808
  cmps(c,0,(int32_t)c->r[3],0); // 8010780C
  if (crb(c,2)) { goto L_80107818; } // 80107810
  goto L_80107C54; // 80107814
L_80107818:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80107818
  cmps(c,0,(int32_t)c->r[0],0); // 8010781C
  if (!crb(c,2)) { goto L_80107834; } // 80107820
  c->r[0]=R32(c->r[19]+0x00000028u); // 80107824
  c->r[0]=c->r[0]|0x00000002u; // 80107828
  W32(c->r[19]+0x00000028u,c->r[0]); // 8010782C
  goto L_80107860; // 80107830
L_80107834:;
  cmps(c,0,(int32_t)c->r[0],1); // 80107834
  if (!crb(c,2)) { goto L_8010784C; } // 80107838
  c->r[0]=R32(c->r[19]+0x00000028u); // 8010783C
  c->r[0]=c->r[0]|0x00000004u; // 80107840
  W32(c->r[19]+0x00000028u,c->r[0]); // 80107844
  goto L_80107860; // 80107848
L_8010784C:;
  cmps(c,0,(int32_t)c->r[0],2); // 8010784C
  if (!crb(c,2)) { goto L_80107860; } // 80107850
  c->r[0]=R32(c->r[19]+0x00000028u); // 80107854
  c->r[0]=c->r[0]|0x00000008u; // 80107858
  W32(c->r[19]+0x00000028u,c->r[0]); // 8010785C
L_80107860:;
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 80107860
  c->r[4]=c->r[31]+0x00000000u; // 80107864
  c->lr=0x8010786Cu; f_8019DE30(c); // 80107868
  cmps(c,0,(int32_t)c->r[3],0); // 8010786C
  if (!crb(c,2)) { goto L_80107884; } // 80107870
  c->r[0]=R32(c->r[19]+0x00000028u); // 80107874
  c->r[0]=c->r[0]|0x00000010u; // 80107878
  W32(c->r[19]+0x00000028u,c->r[0]); // 8010787C
  goto L_801078C8; // 80107880
L_80107884:;
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 80107884
  c->r[4]=c->r[31]+0x0000000Cu; // 80107888
  c->lr=0x80107890u; f_8019DE30(c); // 8010788C
  cmps(c,0,(int32_t)c->r[3],0); // 80107890
  if (!crb(c,2)) { goto L_801078A8; } // 80107894
  c->r[0]=R32(c->r[19]+0x00000028u); // 80107898
  c->r[0]=c->r[0]|0x00000020u; // 8010789C
  W32(c->r[19]+0x00000028u,c->r[0]); // 801078A0
  goto L_801078C8; // 801078A4
L_801078A8:;
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 801078A8
  c->r[4]=c->r[31]+0x00000020u; // 801078AC
  c->lr=0x801078B4u; f_8019DE30(c); // 801078B0
  cmps(c,0,(int32_t)c->r[3],0); // 801078B4
  if (!crb(c,2)) { goto L_801078C8; } // 801078B8
  c->r[0]=R32(c->r[19]+0x00000028u); // 801078BC
  c->r[0]=c->r[0]|0x00000030u; // 801078C0
  W32(c->r[19]+0x00000028u,c->r[0]); // 801078C4
L_801078C8:;
  cmpu(c,0,c->r[30],c->r[20]); // 801078C8
  if (crb(c,0)) { goto L_801078F4; } // 801078CC
  c->r[3]=c->r[29]|c->r[29]; // 801078D0
  c->r[4]=c->r[19]+0x0000001Cu; // 801078D4
  c->r[5]=0u+0x00000004u; // 801078D8
  c->r[6]=0u+0x00000001u; // 801078DC
  c->r[7]=0u+0x00000000u; // 801078E0
  c->lr=0x801078E8u; f_8018A4E0(c); // 801078E4
  cmps(c,0,(int32_t)c->r[3],0); // 801078E8
  if (crb(c,2)) { goto L_801078F8; } // 801078EC
  goto L_80107C54; // 801078F0
L_801078F4:;
  {uint32_t ea=c->r[19]+0x0000001Cu; WF32(ea,c->f[31]);} // 801078F4
L_801078F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801078F8
  c->r[4]=c->r[19]+0x0000002Cu; // 801078FC
  c->r[5]=0u+0x00000004u; // 80107900
  c->r[6]=0u+0x00000001u; // 80107904
  c->r[7]=0u+0x00000000u; // 80107908
  c->lr=0x80107910u; f_8018A4E0(c); // 8010790C
  cmps(c,0,(int32_t)c->r[3],0); // 80107910
  if (crb(c,2)) { goto L_8010791C; } // 80107914
  goto L_80107C54; // 80107918
L_8010791C:;
  cmpu(c,0,c->r[30],c->r[23]); // 8010791C
  if (crb(c,0)) { goto L_80107A04; } // 80107920
  c->r[3]=c->r[29]|c->r[29]; // 80107924
  c->r[4]=c->r[19]+0x00000024u; // 80107928
  c->r[5]=0u+0x00000004u; // 8010792C
  c->r[6]=0u+0x00000001u; // 80107930
  c->r[7]=0u+0x00000000u; // 80107934
  c->lr=0x8010793Cu; f_8018A4E0(c); // 80107938
  cmps(c,0,(int32_t)c->r[3],0); // 8010793C
  if (crb(c,2)) { goto L_80107948; } // 80107940
  goto L_80107C54; // 80107944
L_80107948:;
  c->r[0]=R32(c->r[19]+0x00000024u); // 80107948
  cmps(c,0,(int32_t)c->r[0],0); // 8010794C
  if (crb(c,2)) { goto L_801079FC; } // 80107950
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107954
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80107958
  c->r[5]=c->r[26]+0xFFFFE460u; // 8010795C
  c->r[6]=0u+0x0000107Bu; // 80107960
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107964
  c->r[7]=0u+0x00000000u; // 80107968
  c->r[8]=0u+0x00000000u; // 8010796C
  c->lr=0x80107974u; f_8018F230(c); // 80107970
  cmps(c,0,(int32_t)c->r[3],0); // 80107974
  W32(c->r[19]+0x00000020u,c->r[3]); // 80107978
  if (!crb(c,2)) { goto L_80107988; } // 8010797C
  c->r[3]=0u+0x0000002Cu; // 80107980
  goto L_80107C54; // 80107984
L_80107988:;
  c->r[18]=0u+0x00000000u; // 80107988
  c->r[16]=0u+0x00000000u; // 8010798C
  goto L_801079EC; // 80107990
L_80107994:;
  c->r[0]=R32(c->r[19]+0x00000020u); // 80107994
  c->r[3]=c->r[29]|c->r[29]; // 80107998
  c->r[5]=0u+0x00000004u; // 8010799C
  c->r[6]=0u+0x00000001u; // 801079A0
  c->r[4]=c->r[0]+c->r[16]; // 801079A4
  c->r[7]=0u+0x00000000u; // 801079A8
  c->lr=0x801079B0u; f_8018A4E0(c); // 801079AC
  cmps(c,0,(int32_t)c->r[3],0); // 801079B0
  if (crb(c,2)) { goto L_801079BC; } // 801079B4
  goto L_80107C54; // 801079B8
L_801079BC:;
  c->r[3]=R32(c->r[19]+0x00000020u); // 801079BC
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea);} // 801079C0
  fcmp(c,0,c->f[0],c->f[30]); // 801079C4
  if (!crb(c,1)) { goto L_801079D0; } // 801079C8
  {uint32_t ea=c->r[3]+c->r[16]; WF32(ea,c->f[30]);} // 801079CC
L_801079D0:;
  c->r[3]=R32(c->r[19]+0x00000020u); // 801079D0
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea);} // 801079D4
  fcmp(c,0,c->f[0],c->f[31]); // 801079D8
  if (!crb(c,0)) { goto L_801079E4; } // 801079DC
  {uint32_t ea=c->r[3]+c->r[16]; WF32(ea,c->f[31]);} // 801079E0
L_801079E4:;
  c->r[18]=c->r[18]+0x00000001u; // 801079E4
  c->r[16]=c->r[16]+0x00000004u; // 801079E8
L_801079EC:;
  c->r[0]=R32(c->r[19]+0x00000024u); // 801079EC
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 801079F0
  if (crb(c,0)) { IRQCHK(c); goto L_80107994; } // 801079F4
  goto L_80107A0C; // 801079F8
L_801079FC:;
  W32(c->r[19]+0x00000020u,c->r[24]); // 801079FC
  goto L_80107A0C; // 80107A00
L_80107A04:;
  W32(c->r[19]+0x00000024u,c->r[24]); // 80107A04
  W32(c->r[19]+0x00000020u,c->r[24]); // 80107A08
L_80107A0C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107A0C
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107A10
  c->r[4]=0u+0x00000040u; // 80107A14
  c->r[6]=0u+0x000010A0u; // 80107A18
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107A1C
  c->r[7]=0u+0x00000000u; // 80107A20
  c->r[8]=0u+0x00000000u; // 80107A24
  c->lr=0x80107A2Cu; f_8018F230(c); // 80107A28
  cmps(c,0,(int32_t)c->r[3],0); // 80107A2C
  c->r[18]=c->r[3]|c->r[3]; // 80107A30
  if (crb(c,2)) { goto L_80107A40; } // 80107A34
  c->lr=0x80107A3Cu; f_800E9B70(c); // 80107A38
  c->r[18]=c->r[3]|c->r[3]; // 80107A3C
L_80107A40:;
  cmps(c,0,(int32_t)c->r[18],0); // 80107A40
  if (!crb(c,2)) { goto L_80107A50; } // 80107A44
  c->r[3]=0u+0x0000002Cu; // 80107A48
  goto L_80107C54; // 80107A4C
L_80107A50:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80107A50
  c->lr=0x80107A58u; f_800EF770(c); // 80107A54
  c->r[5]=R32(c->r[28]+0x00000004u); // 80107A58
  c->r[0]=c->r[3]+0x00000040u; // 80107A5C
  c->r[3]=c->r[18]|c->r[18]; // 80107A60
  c->r[4]=c->r[19]|c->r[19]; // 80107A64
  c->r[5]=R32(c->r[5]+0x000000A8u); // 80107A68
  W32(c->r[5]+0x00000040u,c->r[0]); // 80107A6C
  c->lr=0x80107A74u; f_800E9BC0(c); // 80107A70
  c->r[5]=R32(c->r[19]+0x00000008u); // 80107A74
  c->r[3]=c->r[18]|c->r[18]; // 80107A78
  c->r[4]=c->r[28]+0x00000018u; // 80107A7C
  c->r[0]=c->r[5]+0x00000001u; // 80107A80
  W32(c->r[19]+0x00000008u,c->r[0]); // 80107A84
  c->r[0]=R32(c->r[28]+0x00000004u); // 80107A88
  W32(c->r[18]+0x00000038u,c->r[0]); // 80107A8C
  c->lr=0x80107A94u; f_800E4710(c); // 80107A90
  c->r[3]=R32(c->r[18]+0x00000014u); // 80107A94
  c->r[0]=R32(c->r[3]+0x00000028u); // 80107A98
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80107A9C
  if (crb(c,2)) { goto L_80107AAC; } // 80107AA0
  c->r[3]=R32(c->r[28]+0x00000004u); // 80107AA4
  W32(c->r[3]+0x0000002Cu,c->r[18]); // 80107AA8
L_80107AAC:;
  c->r[19]=R32(c->r[28]+0x0000000Cu); // 80107AAC
  c->r[16]=0u+0x00000000u; // 80107AB0
  goto L_80107B60; // 80107AB4
L_80107AB8:;
  c->r[6]=R32(c->r[19]+0x00000040u); // 80107AB8
  c->r[0]=c->r[19]+0x00000040u; // 80107ABC
  c->r[3]=rotl(c->r[16],2)&0xFFFFFFFCu; // 80107AC0
  goto L_80107AF8; // 80107AC4
L_80107AC8:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80107AC8
  c->r[4]=R32(c->r[5]+0x0000002Cu); // 80107ACC
  cmpu(c,0,c->r[4],c->r[17]); // 80107AD0
  if (!crb(c,2)) { goto L_80107AF4; } // 80107AD4
  c->r[4]=R32(c->r[18]+0x00000014u); // 80107AD8
  c->r[16]=c->r[16]+0x00000001u; // 80107ADC
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 80107AE0
  W32(c->r[6]+0x00000020u,c->r[18]); // 80107AE4
  c->r[4]=R32(c->r[18]+0x00000034u); // 80107AE8
  W32(c->r[4]+c->r[3],c->r[6]); // 80107AEC
  c->r[3]=c->r[3]+0x00000004u; // 80107AF0
L_80107AF4:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 80107AF4
L_80107AF8:;
  cmpu(c,0,c->r[6],c->r[0]); // 80107AF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80107AC8; } // 80107AFC
  cmpu(c,0,c->r[30],c->r[25]); // 80107B00
  if (crb(c,0)) { goto L_80107B1C; } // 80107B04
  c->r[0]=R32(c->r[19]+0x00000024u); // 80107B08
  cmpu(c,0,c->r[0],c->r[17]); // 80107B0C
  if (!crb(c,2)) { goto L_80107B5C; } // 80107B10
  W32(c->r[19]+0x00000024u,c->r[18]); // 80107B14
  goto L_80107B5C; // 80107B18
L_80107B1C:;
  c->r[3]=R32(c->r[19]+0x00000024u); // 80107B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80107B20
  if (crb(c,2)) { goto L_80107B5C; } // 80107B24
  c->r[4]=R32(c->r[18]+0x00000014u); // 80107B28
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80107B2C
  c->lr=0x80107B34u; f_8019DE30(c); // 80107B30
  cmps(c,0,(int32_t)c->r[3],0); // 80107B34
  if (!crb(c,2)) { goto L_80107B5C; } // 80107B38
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107B3C
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107B40
  c->r[4]=R32(c->r[19]+0x00000024u); // 80107B44
  c->r[6]=0u+0x000010D9u; // 80107B48
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107B4C
  c->r[7]=0u+0x00000000u; // 80107B50
  c->lr=0x80107B58u; f_8018F5F0(c); // 80107B54
  W32(c->r[19]+0x00000024u,c->r[18]); // 80107B58
L_80107B5C:;
  c->r[19]=R32(c->r[19]+0x00000000u); // 80107B5C
L_80107B60:;
  cmpu(c,0,c->r[19],c->r[27]); // 80107B60
  if (!crb(c,2)) { IRQCHK(c); goto L_80107AB8; } // 80107B64
  c->r[17]=c->r[17]+0x00000001u; // 80107B68
L_80107B6C:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 80107B6C
  cmpu(c,0,c->r[17],c->r[0]); // 80107B70
  if (crb(c,0)) { IRQCHK(c); goto L_80107600; } // 80107B74
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 80107B78
  c->r[0]=c->r[28]+0x0000000Cu; // 80107B7C
  c->r[3]=0u+0x00000000u; // 80107B80
  goto L_80107B9C; // 80107B84
L_80107B88:;
  c->r[4]=R32(c->r[5]+0x00000024u); // 80107B88
  cmpu(c,0,c->r[4],0x0000FFFFu); // 80107B8C
  if (!crb(c,2)) { goto L_80107B98; } // 80107B90
  W32(c->r[5]+0x00000024u,c->r[3]); // 80107B94
L_80107B98:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 80107B98
L_80107B9C:;
  cmpu(c,0,c->r[5],c->r[0]); // 80107B9C
  if (!crb(c,2)) { IRQCHK(c); goto L_80107B88; } // 80107BA0
  c->r[3]=c->r[29]|c->r[29]; // 80107BA4
  c->r[4]=c->r[1]+0x0000002Cu; // 80107BA8
  c->r[5]=0u+0x00000004u; // 80107BAC
  c->r[6]=0u+0x00000001u; // 80107BB0
  c->r[7]=0u+0x00000000u; // 80107BB4
  c->lr=0x80107BBCu; f_8018A4E0(c); // 80107BB8
  cmps(c,0,(int32_t)c->r[3],0); // 80107BBC
  if (crb(c,2)) { goto L_80107BC8; } // 80107BC0
  goto L_80107C54; // 80107BC4
L_80107BC8:;
  c->r[18]=0u+0x00000000u; // 80107BC8
  c->r[16]=0u+0x80390000u; // 80107BCC
  goto L_80107C44; // 80107BD0
L_80107BD4:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107BD4
  c->r[5]=c->r[16]+0xFFFFE460u; // 80107BD8
  c->r[4]=0u+0x00000020u; // 80107BDC
  c->r[6]=0u+0x000010FBu; // 80107BE0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107BE4
  c->r[7]=0u+0x00000000u; // 80107BE8
  c->r[8]=0u+0x00000000u; // 80107BEC
  c->lr=0x80107BF4u; f_8018F230(c); // 80107BF0
  cmps(c,0,(int32_t)c->r[3],0); // 80107BF4
  c->r[17]=c->r[3]|c->r[3]; // 80107BF8
  if (crb(c,2)) { goto L_80107C08; } // 80107BFC
  c->lr=0x80107C04u; f_8010FE80(c); // 80107C00
  c->r[17]=c->r[3]|c->r[3]; // 80107C04
L_80107C08:;
  cmps(c,0,(int32_t)c->r[17],0); // 80107C08
  if (!crb(c,2)) { goto L_80107C18; } // 80107C0C
  c->r[3]=0u+0x0000002Cu; // 80107C10
  goto L_80107C54; // 80107C14
L_80107C18:;
  c->r[3]=c->r[17]|c->r[17]; // 80107C18
  c->r[4]=c->r[29]|c->r[29]; // 80107C1C
  c->r[5]=c->r[30]|c->r[30]; // 80107C20
  c->lr=0x80107C28u; f_80110000(c); // 80107C24
  cmps(c,0,(int32_t)c->r[3],0); // 80107C28
  if (crb(c,2)) { goto L_80107C34; } // 80107C2C
  goto L_80107C54; // 80107C30
L_80107C34:;
  c->r[3]=c->r[17]|c->r[17]; // 80107C34
  c->r[4]=c->r[28]+0x00000024u; // 80107C38
  c->lr=0x80107C40u; f_800E4710(c); // 80107C3C
  c->r[18]=c->r[18]+0x00000001u; // 80107C40
L_80107C44:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80107C44
  cmpu(c,0,c->r[18],c->r[0]); // 80107C48
  if (crb(c,0)) { IRQCHK(c); goto L_80107BD4; } // 80107C4C
  c->r[3]=0u+0x00000000u; // 80107C50
L_80107C54:;
  c->r[11]=c->r[1]+0x00000080u; // 80107C54
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80107C58
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80107C5C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 80107C60
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 80107C64
  c->lr=0x80107C6Cu; f_800C2E6C(c); // 80107C68
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80107C6C
  c->lr=c->r[0]; // 80107C70
  c->r[1]=c->r[1]+0x000000A0u; // 80107C74
  return; // 80107C78
}

// fn_80107C80
void f_80107C80(Ctx* __restrict c) {
  trace_call(0x80107C80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107C80
  c->r[0]=c->lr; // 80107C84
  W32(c->r[1]+0x00000074u,c->r[0]); // 80107C88
  c->r[11]=c->r[1]+0x00000070u; // 80107C8C
  c->lr=0x80107C94u; f_800C2E18(c); // 80107C90
  c->r[31]=c->r[1]|c->r[1]; // 80107C94
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80107C98
  c->r[25]=0u+0x80380000u; // 80107C9C
  c->r[23]=0u-c->r[8]; // 80107CA0
  c->r[0]=R32(c->r[1]+0x00000000u); // 80107CA4
  c->r[23]=rotl(c->r[23],0)&0xFFFFFFF8u; // 80107CA8
  c->r[14]=c->r[3]|c->r[3]; // 80107CAC
  c->r[16]=c->r[4]|c->r[4]; // 80107CB0
  c->r[17]=c->r[5]|c->r[5]; // 80107CB4
  c->r[18]=c->r[6]|c->r[6]; // 80107CB8
  c->r[19]=c->r[7]|c->r[7]; // 80107CBC
  c->r[25]=c->r[25]+0xFFFFE2F8u; // 80107CC0
  {uint32_t ea=c->r[1]+c->r[23]; W32(ea,c->r[0]); c->r[1]=ea;} // 80107CC4
  c->r[5]=c->r[8]|c->r[8]; // 80107CC8
  c->r[4]=0u+0x00000000u; // 80107CCC
  c->r[23]=c->r[1]+0x00000008u; // 80107CD0
  c->r[3]=c->r[23]|c->r[23]; // 80107CD4
  c->lr=0x80107CDCu; f_80004350(c); // 80107CD8
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107CDC
  c->r[26]=0u+0x80390000u; // 80107CE0
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)40); // 80107CE4
  c->r[6]=0u+0x00001119u; // 80107CE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107CEC
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107CF0
  c->r[7]=0u+0x00000000u; // 80107CF4
  c->r[8]=0u+0x00000000u; // 80107CF8
  c->lr=0x80107D00u; f_8018F230(c); // 80107CFC
  cmps(c,0,(int32_t)c->r[3],0); // 80107D00
  W32(c->r[18]+0x0000004Cu,c->r[3]); // 80107D04
  if (!crb(c,2)) { goto L_80107D14; } // 80107D08
  c->r[3]=0u+0x0000002Cu; // 80107D0C
  goto L_801084C0; // 80107D10
L_80107D14:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107D14
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)68); // 80107D18
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107D1C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107D20
  c->r[6]=0u+0x00001120u; // 80107D24
  c->r[7]=0u+0x00000000u; // 80107D28
  c->r[8]=0u+0x00000000u; // 80107D2C
  c->lr=0x80107D34u; f_8018F230(c); // 80107D30
  cmps(c,0,(int32_t)c->r[3],0); // 80107D34
  W32(c->r[18]+0x00000050u,c->r[3]); // 80107D38
  if (!crb(c,2)) { goto L_80107D48; } // 80107D3C
  c->r[3]=0u+0x0000002Cu; // 80107D40
  goto L_801084C0; // 80107D44
L_80107D48:;
  c->r[24]=0u+0x00000000u; // 80107D48
  c->r[30]=0u+0x00000000u; // 80107D4C
  c->r[29]=0u+0x00000000u; // 80107D50
  c->r[28]=0u+0x00000000u; // 80107D54
  goto L_801084B4; // 80107D58
L_80107D5C:;
  c->r[0]=R32(c->r[18]+0x00000050u); // 80107D5C
  c->r[22]=c->r[0]+c->r[30]; cr0(c,c->r[22]); // 80107D60
  if (crb(c,2)) { goto L_80107D70; } // 80107D64
  c->r[3]=c->r[22]|c->r[22]; // 80107D68
  c->lr=0x80107D70u; f_801017E0(c); // 80107D6C
L_80107D70:;
  c->r[3]=c->r[22]|c->r[22]; // 80107D70
  c->r[4]=0u+0x00000000u; // 80107D74
  c->lr=0x80107D7Cu; f_80101830(c); // 80107D78
  c->r[0]=0u+0x00270000u; // 80107D7C
  cmpu(c,0,c->r[17],c->r[0]); // 80107D80
  if (crb(c,0)) { goto L_80107DAC; } // 80107D84
  c->r[3]=c->r[16]|c->r[16]; // 80107D88
  c->r[4]=c->r[22]+0x00000024u; // 80107D8C
  c->r[5]=0u+0x00000004u; // 80107D90
  c->r[6]=0u+0x00000001u; // 80107D94
  c->r[7]=0u+0x00000000u; // 80107D98
  c->lr=0x80107DA0u; f_8018A4E0(c); // 80107D9C
  cmps(c,0,(int32_t)c->r[3],0); // 80107DA0
  if (crb(c,2)) { goto L_80107EE8; } // 80107DA4
  goto L_801084C0; // 80107DA8
L_80107DAC:;
  c->r[3]=c->r[16]|c->r[16]; // 80107DAC
  c->r[4]=c->r[31]+0x00000018u; // 80107DB0
  c->r[5]=0u+0x00000004u; // 80107DB4
  c->r[6]=0u+0x00000001u; // 80107DB8
  c->r[7]=0u+0x00000000u; // 80107DBC
  c->lr=0x80107DC4u; f_8018A4E0(c); // 80107DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80107DC4
  if (crb(c,2)) { goto L_80107DD0; } // 80107DC8
  goto L_801084C0; // 80107DCC
L_80107DD0:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80107DD0
  c->r[0]=R32(c->r[1]+0x00000000u); // 80107DD4
  c->r[4]=0u-c->r[3]; // 80107DD8
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF8u; // 80107DDC
  {uint32_t ea=c->r[1]+c->r[4]; W32(ea,c->r[0]); c->r[1]=ea;} // 80107DE0
  c->r[4]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[4]); // 80107DE4
  W32(c->r[23]+c->r[28],c->r[4]); // 80107DE8
  if (!crb(c,2)) { goto L_80107DF8; } // 80107DEC
  c->r[3]=0u+0x0000002Cu; // 80107DF0
  goto L_801084C0; // 80107DF4
L_80107DF8:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 80107DF8
  c->r[3]=c->r[16]|c->r[16]; // 80107DFC
  c->r[5]=0u+0x00000001u; // 80107E00
  c->r[7]=0u+0x00000000u; // 80107E04
  c->lr=0x80107E0Cu; f_8018A4E0(c); // 80107E08
  cmps(c,0,(int32_t)c->r[3],0); // 80107E0C
  if (crb(c,2)) { goto L_80107E18; } // 80107E10
  goto L_801084C0; // 80107E14
L_80107E18:;
  c->r[3]=c->r[16]|c->r[16]; // 80107E18
  c->r[4]=c->r[31]+0x00000018u; // 80107E1C
  c->r[5]=0u+0x00000004u; // 80107E20
  c->r[6]=0u+0x00000001u; // 80107E24
  c->r[7]=0u+0x00000000u; // 80107E28
  c->lr=0x80107E30u; f_8018A4E0(c); // 80107E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80107E30
  if (crb(c,2)) { goto L_80107E3C; } // 80107E34
  goto L_801084C0; // 80107E38
L_80107E3C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80107E3C
  cmps(c,0,(int32_t)c->r[0],0); // 80107E40
  if (crb(c,2)) { goto L_80107EE0; } // 80107E44
  c->r[21]=0u-c->r[0]; // 80107E48
  c->r[0]=R32(c->r[1]+0x00000000u); // 80107E4C
  c->r[21]=rotl(c->r[21],0)&0xFFFFFFF8u; // 80107E50
  {uint32_t ea=c->r[1]+c->r[21]; W32(ea,c->r[0]); c->r[1]=ea;} // 80107E54
  c->r[21]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[21]); // 80107E58
  if (!crb(c,2)) { goto L_80107E68; } // 80107E5C
  c->r[3]=0u+0x0000002Cu; // 80107E60
  goto L_801084C0; // 80107E64
L_80107E68:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 80107E68
  c->r[3]=c->r[16]|c->r[16]; // 80107E6C
  c->r[4]=c->r[21]|c->r[21]; // 80107E70
  c->r[5]=0u+0x00000001u; // 80107E74
  c->r[7]=0u+0x00000000u; // 80107E78
  c->lr=0x80107E80u; f_8018A4E0(c); // 80107E7C
  cmps(c,0,(int32_t)c->r[3],0); // 80107E80
  if (crb(c,2)) { goto L_80107E8C; } // 80107E84
  goto L_801084C0; // 80107E88
L_80107E8C:;
  c->r[15]=0u+0x00000000u; // 80107E8C
  c->r[20]=0u+0x00000000u; // 80107E90
  c->r[27]=0u+0x00000000u; // 80107E94
  goto L_80107EC8; // 80107E98
L_80107E9C:;
  c->r[4]=R32(c->r[23]+c->r[27]); // 80107E9C
  c->r[3]=c->r[21]|c->r[21]; // 80107EA0
  c->lr=0x80107EA8u; f_8019DE30(c); // 80107EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80107EA8
  if (!crb(c,2)) { goto L_80107EC0; } // 80107EAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[20]; // 80107EB0
  W32(c->r[22]+0x00000024u,c->r[0]); // 80107EB4
  c->r[15]=0u+0x00000001u; // 80107EB8
  goto L_80107ED0; // 80107EBC
L_80107EC0:;
  c->r[20]=c->r[20]+0x00000001u; // 80107EC0
  c->r[27]=c->r[27]+0x00000004u; // 80107EC4
L_80107EC8:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[24]); // 80107EC8
  if (crb(c,0)) { IRQCHK(c); goto L_80107E9C; } // 80107ECC
L_80107ED0:;
  cmps(c,0,(int32_t)c->r[15],0); // 80107ED0
  if (!crb(c,2)) { goto L_80107EE8; } // 80107ED4
  c->r[3]=0u+0x00000021u; // 80107ED8
  goto L_801084C0; // 80107EDC
L_80107EE0:;
  c->r[0]=0u+0xFFFFFFFFu; // 80107EE0
  W32(c->r[22]+0x00000024u,c->r[0]); // 80107EE4
L_80107EE8:;
  c->r[3]=c->r[16]|c->r[16]; // 80107EE8
  c->r[4]=c->r[31]+0x00000018u; // 80107EEC
  c->r[5]=0u+0x00000004u; // 80107EF0
  c->r[6]=0u+0x00000001u; // 80107EF4
  c->r[7]=0u+0x00000000u; // 80107EF8
  c->lr=0x80107F00u; f_8018A4E0(c); // 80107EFC
  cmps(c,0,(int32_t)c->r[3],0); // 80107F00
  if (crb(c,2)) { goto L_80107F0C; } // 80107F04
  goto L_801084C0; // 80107F08
L_80107F0C:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 80107F0C
  cmps(c,0,(int32_t)c->r[4],0); // 80107F10
  if (crb(c,2)) { goto L_80108158; } // 80107F14
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107F18
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107F1C
  c->r[6]=0u+0x00001176u; // 80107F20
  c->r[7]=0u+0x00000000u; // 80107F24
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107F28
  c->lr=0x80107F30u; f_8018F760(c); // 80107F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80107F30
  W32(c->r[22]+0x0000001Cu,c->r[3]); // 80107F34
  c->r[4]=c->r[3]|c->r[3]; // 80107F38
  if (!crb(c,2)) { goto L_80107F48; } // 80107F3C
  c->r[3]=0u+0x0000002Cu; // 80107F40
  goto L_801084C0; // 80107F44
L_80107F48:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 80107F48
  c->r[3]=c->r[16]|c->r[16]; // 80107F4C
  c->r[5]=0u+0x00000001u; // 80107F50
  c->r[7]=0u+0x00000000u; // 80107F54
  c->lr=0x80107F5Cu; f_8018A4E0(c); // 80107F58
  cmps(c,0,(int32_t)c->r[3],0); // 80107F5C
  if (crb(c,2)) { goto L_80107F68; } // 80107F60
  goto L_801084C0; // 80107F64
L_80107F68:;
  c->r[0]=0u+0x00270000u; // 80107F68
  cmpu(c,0,c->r[17],c->r[0]); // 80107F6C
  if (!crb(c,0)) { goto L_80108158; } // 80107F70
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80107F74
  c->r[4]=c->r[25]+0x00000040u; // 80107F78
  c->lr=0x80107F80u; f_8019DE30(c); // 80107F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80107F80
  if (!crb(c,2)) { goto L_80107FC0; } // 80107F84
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80107F88
  c->r[5]=c->r[26]+0xFFFFE460u; // 80107F8C
  c->r[4]=R32(c->r[22]+0x0000001Cu); // 80107F90
  c->r[6]=0u+0x0000118Bu; // 80107F94
  c->r[3]=R32(c->r[3]+0x00000004u); // 80107F98
  c->r[7]=0u+0x00000000u; // 80107F9C
  c->lr=0x80107FA4u; f_8018F5F0(c); // 80107FA0
  c->r[3]=c->r[25]+0x00000050u; // 80107FA4
  c->lr=0x80107FACu; f_8019E0D0(c); // 80107FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80107FAC
  W32(c->r[22]+0x0000001Cu,c->r[3]); // 80107FB0
  if (!crb(c,2)) { goto L_80107FC0; } // 80107FB4
  c->r[3]=0u+0x0000002Cu; // 80107FB8
  goto L_801084C0; // 80107FBC
L_80107FC0:;
  c->r[15]=R32(c->r[22]+0x00000010u); // 80107FC0
  c->r[4]=c->r[2]+0xFFFFA090u; // 80107FC4
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80107FC8
  c->lr=0x80107FD0u; f_8019DE30(c); // 80107FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80107FD0
  if (!crb(c,2)) { goto L_80107FE8; } // 80107FD4
  c->r[0]=R32(c->r[22]+0x00000010u); // 80107FD8
  c->r[0]=c->r[0]|0x00000008u; // 80107FDC
  W32(c->r[22]+0x00000010u,c->r[0]); // 80107FE0
  goto L_80108128; // 80107FE4
L_80107FE8:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80107FE8
  c->r[4]=c->r[2]+0xFFFFA098u; // 80107FEC
  c->lr=0x80107FF4u; f_8019DE30(c); // 80107FF0
  cmps(c,0,(int32_t)c->r[3],0); // 80107FF4
  if (!crb(c,2)) { goto L_8010800C; } // 80107FF8
  c->r[0]=R32(c->r[22]+0x00000010u); // 80107FFC
  c->r[0]=c->r[0]|0x00000010u; // 80108000
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108004
  goto L_80108128; // 80108008
L_8010800C:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 8010800C
  c->r[4]=c->r[2]+0xFFFFA0A0u; // 80108010
  c->lr=0x80108018u; f_8019DE30(c); // 80108014
  cmps(c,0,(int32_t)c->r[3],0); // 80108018
  if (!crb(c,2)) { goto L_80108030; } // 8010801C
  c->r[0]=R32(c->r[22]+0x00000010u); // 80108020
  c->r[0]=c->r[0]|0x00000020u; // 80108024
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108028
  goto L_80108128; // 8010802C
L_80108030:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80108030
  c->r[4]=c->r[25]+0x000000A4u; // 80108034
  c->lr=0x8010803Cu; f_8019DE30(c); // 80108038
  cmps(c,0,(int32_t)c->r[3],0); // 8010803C
  if (!crb(c,2)) { goto L_80108054; } // 80108040
  c->r[0]=R32(c->r[22]+0x00000010u); // 80108044
  c->r[0]=c->r[0]|0x00000040u; // 80108048
  W32(c->r[22]+0x00000010u,c->r[0]); // 8010804C
  goto L_80108128; // 80108050
L_80108054:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80108054
  c->r[4]=c->r[25]+0x00000030u; // 80108058
  c->lr=0x80108060u; f_8019DE30(c); // 8010805C
  cmps(c,0,(int32_t)c->r[3],0); // 80108060
  if (!crb(c,2)) { goto L_80108078; } // 80108064
  c->r[0]=R32(c->r[22]+0x00000010u); // 80108068
  c->r[0]=c->r[0]|0x00000080u; // 8010806C
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108070
  goto L_80108128; // 80108074
L_80108078:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80108078
  c->r[4]=c->r[25]+0x00000050u; // 8010807C
  c->lr=0x80108084u; f_8019DE30(c); // 80108080
  cmps(c,0,(int32_t)c->r[3],0); // 80108084
  if (!crb(c,2)) { goto L_8010809C; } // 80108088
  c->r[0]=R32(c->r[22]+0x00000010u); // 8010808C
  c->r[0]=c->r[0]|0x00000100u; // 80108090
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108094
  goto L_80108128; // 80108098
L_8010809C:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 8010809C
  c->r[4]=c->r[25]+0x00000074u; // 801080A0
  c->lr=0x801080A8u; f_8019DE30(c); // 801080A4
  cmps(c,0,(int32_t)c->r[3],0); // 801080A8
  if (!crb(c,2)) { goto L_801080C0; } // 801080AC
  c->r[0]=R32(c->r[22]+0x00000010u); // 801080B0
  c->r[0]=c->r[0]|0x00000200u; // 801080B4
  W32(c->r[22]+0x00000010u,c->r[0]); // 801080B8
  goto L_80108128; // 801080BC
L_801080C0:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 801080C0
  c->r[4]=c->r[25]+0x00000084u; // 801080C4
  c->lr=0x801080CCu; f_8019DE30(c); // 801080C8
  cmps(c,0,(int32_t)c->r[3],0); // 801080CC
  if (!crb(c,2)) { goto L_801080E4; } // 801080D0
  c->r[0]=R32(c->r[22]+0x00000010u); // 801080D4
  c->r[0]=c->r[0]|0x00000800u; // 801080D8
  W32(c->r[22]+0x00000010u,c->r[0]); // 801080DC
  goto L_80108128; // 801080E0
L_801080E4:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 801080E4
  c->r[4]=c->r[25]+0x00000094u; // 801080E8
  c->lr=0x801080F0u; f_8019DE30(c); // 801080EC
  cmps(c,0,(int32_t)c->r[3],0); // 801080F0
  if (!crb(c,2)) { goto L_80108108; } // 801080F4
  c->r[0]=R32(c->r[22]+0x00000010u); // 801080F8
  c->r[0]=c->r[0]|0x00000400u; // 801080FC
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108100
  goto L_80108128; // 80108104
L_80108108:;
  c->r[3]=R32(c->r[22]+0x0000001Cu); // 80108108
  c->r[4]=c->r[25]+0x000000B0u; // 8010810C
  c->lr=0x80108114u; f_8019DE30(c); // 80108110
  cmps(c,0,(int32_t)c->r[3],0); // 80108114
  if (!crb(c,2)) { goto L_80108128; } // 80108118
  c->r[0]=R32(c->r[22]+0x00000010u); // 8010811C
  c->r[0]=c->r[0]|0x00001000u; // 80108120
  W32(c->r[22]+0x00000010u,c->r[0]); // 80108124
L_80108128:;
  c->r[0]=R32(c->r[22]+0x00000010u); // 80108128
  cmpu(c,0,c->r[15],c->r[0]); // 8010812C
  if (crb(c,2)) { goto L_80108158; } // 80108130
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80108134
  c->r[5]=c->r[26]+0xFFFFE460u; // 80108138
  c->r[4]=R32(c->r[22]+0x0000001Cu); // 8010813C
  c->r[6]=0u+0x000011C9u; // 80108140
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108144
  c->r[7]=0u+0x00000000u; // 80108148
  c->lr=0x80108150u; f_8018F5F0(c); // 8010814C
  c->r[0]=0u+0x00000000u; // 80108150
  W32(c->r[22]+0x0000001Cu,c->r[0]); // 80108154
L_80108158:;
  c->r[3]=c->r[16]|c->r[16]; // 80108158
  c->r[4]=c->r[22]+0x00000020u; // 8010815C
  c->r[5]=0u+0x00000004u; // 80108160
  c->r[6]=0u+0x00000001u; // 80108164
  c->r[7]=0u+0x00000000u; // 80108168
  c->lr=0x80108170u; f_8018A4E0(c); // 8010816C
  cmps(c,0,(int32_t)c->r[3],0); // 80108170
  if (crb(c,2)) { goto L_8010817C; } // 80108174
  goto L_801084C0; // 80108178
L_8010817C:;
  c->r[0]=0u+0x00260000u; // 8010817C
  cmpu(c,0,c->r[17],c->r[0]); // 80108180
  if (crb(c,0)) { goto L_801081C4; } // 80108184
  c->r[3]=c->r[16]|c->r[16]; // 80108188
  c->r[4]=c->r[31]+0x00000010u; // 8010818C
  c->r[5]=0u+0x00000004u; // 80108190
  c->r[6]=0u+0x00000001u; // 80108194
  c->r[7]=0u+0x00000000u; // 80108198
  c->lr=0x801081A0u; f_8018A4E0(c); // 8010819C
  cmps(c,0,(int32_t)c->r[3],0); // 801081A0
  if (crb(c,2)) { goto L_801081AC; } // 801081A4
  goto L_801084C0; // 801081A8
L_801081AC:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801081AC
  c->r[3]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801081B0
  W32(c->r[31]+0x00000010u,c->r[3]); // 801081B4
  c->r[0]=R32(c->r[22]+0x00000010u); // 801081B8
  c->r[0]=c->r[0]|c->r[3]; // 801081BC
  W32(c->r[22]+0x00000010u,c->r[0]); // 801081C0
L_801081C4:;
  c->r[0]=0u+0x00390000u; // 801081C4
  cmpu(c,0,c->r[17],c->r[0]); // 801081C8
  if (crb(c,0)) { goto L_8010820C; } // 801081CC
  c->r[3]=c->r[16]|c->r[16]; // 801081D0
  c->r[4]=c->r[31]+0x0000000Cu; // 801081D4
  c->r[5]=0u+0x00000004u; // 801081D8
  c->r[6]=0u+0x00000001u; // 801081DC
  c->r[7]=0u+0x00000000u; // 801081E0
  c->lr=0x801081E8u; f_8018A4E0(c); // 801081E4
  cmps(c,0,(int32_t)c->r[3],0); // 801081E8
  if (crb(c,2)) { goto L_801081F4; } // 801081EC
  goto L_801084C0; // 801081F0
L_801081F4:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801081F4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801081F8
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801081FC
  c->r[0]=R32(c->r[22]+0x00000014u); // 80108200
  c->r[0]=c->r[0]|c->r[3]; // 80108204
  W32(c->r[22]+0x00000014u,c->r[0]); // 80108208
L_8010820C:;
  c->r[3]=c->r[16]|c->r[16]; // 8010820C
  c->r[4]=c->r[31]+0x00000014u; // 80108210
  c->r[5]=0u+0x00000004u; // 80108214
  c->r[6]=0u+0x00000001u; // 80108218
  c->r[7]=0u+0x00000000u; // 8010821C
  c->lr=0x80108224u; f_8018A4E0(c); // 80108220
  cmps(c,0,(int32_t)c->r[3],0); // 80108224
  if (crb(c,2)) { goto L_80108230; } // 80108228
  goto L_801084C0; // 8010822C
L_80108230:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80108230
  c->r[5]=c->r[26]+0xFFFFE460u; // 80108234
  c->r[0]=R32(c->r[31]+0x00000014u); // 80108238
  c->r[6]=0u+0x000011E4u; // 8010823C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108240
  c->r[7]=0u+0x00000000u; // 80108244
  c->r[4]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80108248
  c->r[8]=0u+0x00000000u; // 8010824C
  c->lr=0x80108254u; f_8018F230(c); // 80108250
  cmps(c,0,(int32_t)c->r[3],0); // 80108254
  W32(c->r[22]+0x0000003Cu,c->r[3]); // 80108258
  if (!crb(c,2)) { goto L_80108268; } // 8010825C
  c->r[3]=0u+0x0000002Cu; // 80108260
  goto L_801084C0; // 80108264
L_80108268:;
  c->r[20]=0u+0x00000000u; // 80108268
  c->r[15]=0u+0x00000000u; // 8010826C
  goto L_80108328; // 80108270
L_80108274:;
  c->r[0]=R32(c->r[22]+0x0000003Cu); // 80108274
  c->r[21]=c->r[0]+c->r[15]; cr0(c,c->r[21]); // 80108278
  if (crb(c,2)) { goto L_80108288; } // 8010827C
  c->r[3]=c->r[21]|c->r[21]; // 80108280
  c->lr=0x80108288u; f_801014C0(c); // 80108284
L_80108288:;
  c->r[3]=c->r[16]|c->r[16]; // 80108288
  c->r[4]=c->r[21]+0x00000014u; // 8010828C
  c->r[5]=0u+0x00000004u; // 80108290
  c->r[6]=0u+0x00000001u; // 80108294
  c->r[7]=0u+0x00000000u; // 80108298
  c->lr=0x801082A0u; f_8018A4E0(c); // 8010829C
  cmps(c,0,(int32_t)c->r[3],0); // 801082A0
  if (crb(c,2)) { goto L_801082AC; } // 801082A4
  goto L_801084C0; // 801082A8
L_801082AC:;
  c->r[3]=c->r[16]|c->r[16]; // 801082AC
  c->r[4]=c->r[21]+0x00000018u; // 801082B0
  c->r[5]=0u+0x00000004u; // 801082B4
  c->r[6]=0u+0x00000001u; // 801082B8
  c->r[7]=0u+0x00000000u; // 801082BC
  c->lr=0x801082C4u; f_8018A4E0(c); // 801082C0
  cmps(c,0,(int32_t)c->r[3],0); // 801082C4
  if (crb(c,2)) { goto L_801082D0; } // 801082C8
  goto L_801084C0; // 801082CC
L_801082D0:;
  c->r[0]=0u+0x000D0000u; // 801082D0
  cmpu(c,0,c->r[17],c->r[0]); // 801082D4
  if (crb(c,0)) { goto L_80108300; } // 801082D8
  c->r[3]=c->r[16]|c->r[16]; // 801082DC
  c->r[4]=c->r[21]+0x0000001Cu; // 801082E0
  c->r[5]=0u+0x00000004u; // 801082E4
  c->r[6]=0u+0x00000001u; // 801082E8
  c->r[7]=0u+0x00000000u; // 801082EC
  c->lr=0x801082F4u; f_8018A4E0(c); // 801082F0
  cmps(c,0,(int32_t)c->r[3],0); // 801082F4
  if (crb(c,2)) { goto L_80108308; } // 801082F8
  goto L_801084C0; // 801082FC
L_80108300:;
  c->r[0]=0u+0x00000001u; // 80108300
  W32(c->r[21]+0x0000001Cu,c->r[0]); // 80108304
L_80108308:;
  c->r[0]=R32(c->r[21]+0x0000001Cu); // 80108308
  c->r[3]=c->r[21]|c->r[21]; // 8010830C
  c->r[4]=c->r[22]+0x00000030u; // 80108310
  c->r[0]=c->r[0]|0x00000010u; // 80108314
  W32(c->r[21]+0x0000001Cu,c->r[0]); // 80108318
  c->lr=0x80108320u; f_800E4710(c); // 8010831C
  c->r[20]=c->r[20]+0x00000001u; // 80108320
  c->r[15]=c->r[15]+0x00000020u; // 80108324
L_80108328:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80108328
  cmpu(c,0,c->r[20],c->r[0]); // 8010832C
  if (crb(c,0)) { IRQCHK(c); goto L_80108274; } // 80108330
  c->r[3]=c->r[16]|c->r[16]; // 80108334
  c->r[4]=c->r[31]+0x00000008u; // 80108338
  c->r[5]=0u+0x00000001u; // 8010833C
  c->r[6]=0u+0x00000004u; // 80108340
  c->r[7]=0u+0x00000000u; // 80108344
  c->lr=0x8010834Cu; f_8018A4E0(c); // 80108348
  cmps(c,0,(int32_t)c->r[3],0); // 8010834C
  if (crb(c,2)) { goto L_80108358; } // 80108350
  goto L_801084C0; // 80108354
L_80108358:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 80108358
  c->r[0]=0u+0x001A0000u; // 8010835C
  cmpu(c,0,c->r[17],c->r[0]); // 80108360
  c->r[3]=rotl(c->r[4],24)&0x0000FF00u; // 80108364
  c->r[0]=rotl(c->r[4],8)&0x00FF0000u; // 80108368
  c->r[3]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8010836C
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80108370
  c->r[0]=c->r[3]|c->r[0]; // 80108374
  W32(c->r[22]+0x0000002Cu,c->r[0]); // 80108378
  if (crb(c,0)) { goto L_801083B8; } // 8010837C
  c->r[3]=c->r[16]|c->r[16]; // 80108380
  c->r[4]=c->r[31]+0x00000008u; // 80108384
  c->r[5]=0u+0x00000001u; // 80108388
  c->r[6]=0u+0x00000004u; // 8010838C
  c->r[7]=0u+0x00000000u; // 80108390
  c->lr=0x80108398u; f_8018A4E0(c); // 80108394
  cmps(c,0,(int32_t)c->r[3],0); // 80108398
  if (crb(c,2)) { goto L_801083A4; } // 8010839C
  goto L_801084C0; // 801083A0
L_801083A4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801083A4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801083A8
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801083AC
  W32(c->r[22]+0x00000040u,c->r[0]); // 801083B0
  goto L_801083C0; // 801083B4
L_801083B8:;
  c->r[0]=0u+0x00000000u; // 801083B8
  W32(c->r[22]+0x00000040u,c->r[0]); // 801083BC
L_801083C0:;
  c->r[0]=R32(c->r[18]+0x0000004Cu); // 801083C0
  c->r[15]=c->r[0]+c->r[29]; cr0(c,c->r[15]); // 801083C4
  if (crb(c,2)) { goto L_801083D4; } // 801083C8
  c->r[3]=c->r[15]|c->r[15]; // 801083CC
  c->lr=0x801083D4u; f_80101530(c); // 801083D0
L_801083D4:;
  c->r[3]=R32(c->r[18]+0x00000014u); // 801083D4
  c->lr=0x801083DCu; f_800EF770(c); // 801083D8
  c->r[5]=R32(c->r[18]+0x00000014u); // 801083DC
  c->r[0]=c->r[3]+0x00000028u; // 801083E0
  c->r[3]=c->r[15]|c->r[15]; // 801083E4
  c->r[4]=c->r[22]|c->r[22]; // 801083E8
  c->r[5]=R32(c->r[5]+0x000000A8u); // 801083EC
  W32(c->r[5]+0x00000040u,c->r[0]); // 801083F0
  c->lr=0x801083F8u; f_80101580(c); // 801083F4
  c->r[3]=R32(c->r[22]+0x00000018u); // 801083F8
  c->r[0]=c->r[3]+0x00000001u; // 801083FC
  W32(c->r[22]+0x00000018u,c->r[0]); // 80108400
  c->r[0]=R32(c->r[22]+0x00000010u); // 80108404
  c->r[3]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[3]); // 80108408
  if (!crb(c,2)) { goto L_80108498; } // 8010840C
  c->r[3]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[3]); // 80108410
  if (!crb(c,2)) { goto L_80108498; } // 80108414
  c->r[3]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[3]); // 80108418
  if (!crb(c,2)) { goto L_80108498; } // 8010841C
  c->r[3]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[3]); // 80108420
  if (!crb(c,2)) { goto L_80108498; } // 80108424
  c->r[3]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[3]); // 80108428
  if (!crb(c,2)) { goto L_80108498; } // 8010842C
  c->r[3]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[3]); // 80108430
  if (!crb(c,2)) { goto L_80108498; } // 80108434
  c->r[4]=R32(c->r[22]+0x00000014u); // 80108438
  c->r[3]=rotl(c->r[4],0)&0x0000FF00u; cr0(c,c->r[3]); // 8010843C
  if (!crb(c,2)) { goto L_80108498; } // 80108440
  c->r[3]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[3]); // 80108444
  if (!crb(c,2)) { goto L_80108498; } // 80108448
  c->r[3]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[3]); // 8010844C
  if (!crb(c,2)) { goto L_80108498; } // 80108450
  c->r[3]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[3]); // 80108454
  if (!crb(c,2)) { goto L_80108498; } // 80108458
  c->r[3]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[3]); // 8010845C
  if (!crb(c,2)) { goto L_80108498; } // 80108460
  c->r[3]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[3]); // 80108464
  if (!crb(c,2)) { goto L_80108498; } // 80108468
  c->r[0]=rotl(c->r[0],0)&0xFFFF0000u; cr0(c,c->r[0]); // 8010846C
  if (!crb(c,2)) { goto L_80108498; } // 80108470
  c->r[0]=c->r[4]|0x00000001u; // 80108474
  W32(c->r[22]+0x00000014u,c->r[0]); // 80108478
  c->r[0]=R32(c->r[18]+0x00000018u); // 8010847C
  c->r[0]=c->r[0]|0x00000010u; // 80108480
  W32(c->r[18]+0x00000018u,c->r[0]); // 80108484
  c->r[3]=R32(c->r[14]+0x00000004u); // 80108488
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010848C
  c->r[0]=c->r[0]|0x00400000u; // 80108490
  W32(c->r[3]+0x00000060u,c->r[0]); // 80108494
L_80108498:;
  c->r[3]=c->r[15]|c->r[15]; // 80108498
  c->r[4]=c->r[18]+0x00000040u; // 8010849C
  c->lr=0x801084A4u; f_800E4710(c); // 801084A0
  c->r[24]=c->r[24]+0x00000001u; // 801084A4
  c->r[30]=c->r[30]+0x00000044u; // 801084A8
  c->r[29]=c->r[29]+0x00000028u; // 801084AC
  c->r[28]=c->r[28]+0x00000004u; // 801084B0
L_801084B4:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[19]); // 801084B4
  if (crb(c,0)) { IRQCHK(c); goto L_80107D5C; } // 801084B8
  c->r[3]=0u+0x00000000u; // 801084BC
L_801084C0:;
  c->r[10]=c->r[31]|c->r[31]; // 801084C0
  c->r[11]=c->r[10]+0x00000070u; // 801084C4
  c->lr=0x801084CCu; f_800C2E64(c); // 801084C8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801084CC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801084D0
  c->r[1]=c->r[10]|c->r[10]; // 801084D4
  c->lr=c->r[0]; // 801084D8
  return; // 801084DC
}

// fn_801084E0
void f_801084E0(Ctx* __restrict c) {
  trace_call(0x801084E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801084E0
  c->r[0]=c->lr; // 801084E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801084E8
  c->r[11]=c->r[1]+0x00000030u; // 801084EC
  c->lr=0x801084F4u; f_800C2E44(c); // 801084F0
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 801084F4
  c->r[25]=c->r[3]|c->r[3]; // 801084F8
  c->r[26]=c->r[4]|c->r[4]; // 801084FC
  c->r[27]=c->r[5]|c->r[5]; // 80108500
  c->r[31]=c->r[3]+0x0000000Cu; // 80108504
  goto L_8010858C; // 80108508
L_8010850C:;
  c->r[28]=R32(c->r[29]+0x00000034u); // 8010850C
  c->r[30]=c->r[29]+0x00000034u; // 80108510
  goto L_80108580; // 80108514
L_80108518:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80108518
  c->r[4]=c->r[26]|c->r[26]; // 8010851C
  c->r[5]=c->r[27]|c->r[27]; // 80108520
  c->r[6]=c->r[28]|c->r[28]; // 80108524
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108528
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8010852C
  c->ctr=c->r[12]; // 80108530
  if (true) { c->lr=0x80108538u; dispatch(c,c->ctr); } // 80108534
  cmps(c,0,(int32_t)c->r[3],0); // 80108538
  if (crb(c,2)) { goto L_80108544; } // 8010853C
  goto L_80108598; // 80108540
L_80108544:;
  c->r[0]=R32(c->r[28]+0x00000024u); // 80108544
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80108548
  if (crb(c,2)) { goto L_8010857C; } // 8010854C
  c->r[3]=R32(c->r[25]+0x00000004u); // 80108550
  c->lr=0x80108558u; f_800EF770(c); // 80108554
  c->r[5]=R32(c->r[28]+0x00000014u); // 80108558
  c->r[4]=R32(c->r[25]+0x00000004u); // 8010855C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80108560
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80108564
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80108568
  c->r[0]=R32(c->r[5]+0x00000004u); // 8010856C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)148); // 80108570
  c->r[0]=c->r[0]+c->r[3]; // 80108574
  W32(c->r[4]+0x00000040u,c->r[0]); // 80108578
L_8010857C:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 8010857C
L_80108580:;
  cmpu(c,0,c->r[28],c->r[30]); // 80108580
  if (!crb(c,2)) { IRQCHK(c); goto L_80108518; } // 80108584
  c->r[29]=R32(c->r[29]+0x00000000u); // 80108588
L_8010858C:;
  cmpu(c,0,c->r[29],c->r[31]); // 8010858C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010850C; } // 80108590
  c->r[3]=0u+0x00000000u; // 80108594
L_80108598:;
  c->r[11]=c->r[1]+0x00000030u; // 80108598
  c->lr=0x801085A0u; f_800C2E90(c); // 8010859C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801085A0
  c->lr=c->r[0]; // 801085A4
  c->r[1]=c->r[1]+0x00000030u; // 801085A8
  return; // 801085AC
}

// fn_801085B0
void f_801085B0(Ctx* __restrict c) {
  trace_call(0x801085B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801085B0
  c->r[0]=c->lr; // 801085B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801085B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801085BC
  c->r[31]=c->r[4]|c->r[4]; // 801085C0
  c->r[3]=c->r[31]|c->r[31]; // 801085C4
  c->lr=0x801085CCu; f_8010E950(c); // 801085C8
  c->r[4]=R32(c->r[31]+0x00000018u); // 801085CC
  cmps(c,0,(int32_t)c->r[4],0); // 801085D0
  if (crb(c,2)) { goto L_801085E4; } // 801085D4
  c->r[3]=R32(c->r[4]+0x00000020u); // 801085D8
  c->r[0]=c->r[3]+0x00000001u; // 801085DC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801085E0
L_801085E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801085E4
  c->r[3]=0u+0x00000000u; // 801085E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801085EC
  c->lr=c->r[0]; // 801085F0
  c->r[1]=c->r[1]+0x00000010u; // 801085F4
  return; // 801085F8
}

// fn_80108600
void f_80108600(Ctx* __restrict c) {
  trace_call(0x80108600u);
  c->r[4]=R32(c->r[4]+0x00000018u); // 80108600
  cmps(c,0,(int32_t)c->r[4],0); // 80108604
  if (crb(c,2)) { goto L_80108618; } // 80108608
  c->r[3]=R32(c->r[4]+0x00000020u); // 8010860C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80108610
  W32(c->r[4]+0x00000020u,c->r[0]); // 80108614
L_80108618:;
  c->r[3]=0u+0x00000000u; // 80108618
  return; // 8010861C
}

// fn_80108620
void f_80108620(Ctx* __restrict c) {
  trace_call(0x80108620u);
  c->r[3]=R32(c->r[4]+0x00000018u); // 80108620
  cmps(c,0,(int32_t)c->r[3],0); // 80108624
  if (crb(c,2)) { goto L_80108638; } // 80108628
  c->r[0]=R32(c->r[3]+0x00000018u); // 8010862C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 80108630
  goto L_8010863C; // 80108634
L_80108638:;
  c->r[0]=0u+0x00000000u; // 80108638
L_8010863C:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 8010863C
  c->r[3]=0u+0x00000000u; // 80108640
  return; // 80108644
}

// fn_80108650
void f_80108650(Ctx* __restrict c) {
  trace_call(0x80108650u);
  c->r[4]=R32(c->r[4]+0x00000018u); // 80108650
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80108654
  cmps(c,0,(int32_t)c->r[0],0); // 80108658
  if (crb(c,0)) { goto L_80108664; } // 8010865C
  goto L_8010866C; // 80108660
L_80108664:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108664
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80108668
L_8010866C:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 8010866C
  c->r[3]=0u+0x00000000u; // 80108670
  return; // 80108674
}

// fn_80108680
void f_80108680(Ctx* __restrict c) {
  trace_call(0x80108680u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108680
  c->r[0]=c->lr; // 80108684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010868C
  c->r[31]=c->r[5]|c->r[5]; // 80108690
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108694
  c->r[30]=c->r[3]|c->r[3]; // 80108698
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010869C
  cmps(c,0,(int32_t)c->r[0],0); // 801086A0
  if (crb(c,2)) { goto L_801086B8; } // 801086A4
  c->r[3]=c->r[0]|c->r[0]; // 801086A8
  c->r[4]=0u+0x00000040u; // 801086AC
  c->lr=0x801086B4u; f_8010C560(c); // 801086B0
  goto L_801086BC; // 801086B4
L_801086B8:;
  c->r[3]=0u+0x00000000u; // 801086B8
L_801086BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801086BC
  if (crb(c,2)) { goto L_8010872C; } // 801086C0
  c->r[4]=R32(c->r[3]+0x00000014u); // 801086C4
  c->r[0]=R32(c->r[4]+0x00000010u); // 801086C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801086CC
  if (!crb(c,2)) { goto L_8010872C; } // 801086D0
  c->r[5]=R32(c->r[3]+0x00000020u); // 801086D4
  c->r[3]=c->r[4]|c->r[4]; // 801086D8
  c->r[4]=c->r[1]+0x00000008u; // 801086DC
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801086E0
  c->lr=0x801086E8u; f_80101970(c); // 801086E4
  cmps(c,0,(int32_t)c->r[3],0); // 801086E8
  if (crb(c,2)) { goto L_801086F4; } // 801086EC
  goto L_8010873C; // 801086F0
L_801086F4:;
  {uint32_t ea=c->r[2]+0xFFFFA140u; c->f[1]=c->ps1[1]=RF32(ea);} // 801086F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801086F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801086FC
  c->lr=0x80108704u; f_800D29B4(c); // 80108700
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80108704
  {uint32_t ea=c->r[2]+0xFFFFA0C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108708
  {uint32_t ea=c->r[2]+0xFFFFA144u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010870C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80108710
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80108714
  {uint32_t ea=c->r[3]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108718
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8010871C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80108720
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80108724
  goto L_80108738; // 80108728
L_8010872C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010872C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108730
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80108734
L_80108738:;
  c->r[3]=0u+0x00000000u; // 80108738
L_8010873C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010873C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108740
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108744
  c->lr=c->r[0]; // 80108748
  c->r[1]=c->r[1]+0x00000020u; // 8010874C
  return; // 80108750
}

// fn_80108760
void f_80108760(Ctx* __restrict c) {
  trace_call(0x80108760u);
  c->r[4]=R32(c->r[4]+0x00000018u); // 80108760
  c->r[3]=0u+0x00000000u; // 80108764
  c->r[0]=R32(c->r[4]+0x00000028u); // 80108768
  W32(c->r[5]+0x00000000u,c->r[0]); // 8010876C
  return; // 80108770
}

// fn_80108780
void f_80108780(Ctx* __restrict c) {
  trace_call(0x80108780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108780
  c->r[0]=c->lr; // 80108784
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010878C
  c->r[31]=c->r[5]|c->r[5]; // 80108790
  c->r[3]=R32(c->r[4]+0x00000018u); // 80108794
  c->r[4]=0u+0x00000020u; // 80108798
  c->lr=0x801087A0u; f_8010C560(c); // 8010879C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801087A0
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801087A4
  W8(c->r[31]+0x00000000u,c->r[0]); // 801087A8
  c->r[3]=0u+0x00000000u; // 801087AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801087B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801087B4
  c->lr=c->r[0]; // 801087B8
  c->r[1]=c->r[1]+0x00000010u; // 801087BC
  return; // 801087C0
}

// fn_801087D0
void f_801087D0(Ctx* __restrict c) {
  trace_call(0x801087D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801087D0
  c->r[0]=c->lr; // 801087D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801087D8
  c->r[11]=c->r[1]+0x00000020u; // 801087DC
  c->lr=0x801087E4u; f_800C2E50(c); // 801087E0
  cmps(c,0,(int32_t)c->r[5],0); // 801087E4
  c->r[28]=c->r[4]|c->r[4]; // 801087E8
  c->r[29]=c->r[5]|c->r[5]; // 801087EC
  if (!crb(c,2)) { goto L_801087FC; } // 801087F0
  c->r[3]=0u+0x00000025u; // 801087F4
  goto L_80108858; // 801087F8
L_801087FC:;
  c->r[0]=0u+0x00000000u; // 801087FC
  W8(c->r[5]+0x00000000u,c->r[0]); // 80108800
  c->r[31]=0u+0x80380000u; // 80108804
  c->r[3]=R32(c->r[4]+0x00000018u); // 80108808
  c->r[30]=R32(c->r[3]+0x00000040u); // 8010880C
  goto L_80108844; // 80108810
L_80108814:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80108814
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80108818
  cmps(c,0,(int32_t)c->r[3],0); // 8010881C
  if (crb(c,2)) { goto L_80108840; } // 80108820
  c->r[4]=c->r[31]+0xFFFFE35Cu; // 80108824
  c->lr=0x8010882Cu; f_8019DE30(c); // 80108828
  cmps(c,0,(int32_t)c->r[3],0); // 8010882C
  if (!crb(c,2)) { goto L_80108840; } // 80108830
  c->r[0]=0u+0x00000001u; // 80108834
  W8(c->r[29]+0x00000000u,c->r[0]); // 80108838
  goto L_80108854; // 8010883C
L_80108840:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80108840
L_80108844:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 80108844
  c->r[0]=c->r[3]+0x00000040u; // 80108848
  cmpu(c,0,c->r[30],c->r[0]); // 8010884C
  if (!crb(c,2)) { IRQCHK(c); goto L_80108814; } // 80108850
L_80108854:;
  c->r[3]=0u+0x00000000u; // 80108854
L_80108858:;
  c->r[11]=c->r[1]+0x00000020u; // 80108858
  c->lr=0x80108860u; f_800C2E9C(c); // 8010885C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108860
  c->lr=c->r[0]; // 80108864
  c->r[1]=c->r[1]+0x00000020u; // 80108868
  return; // 8010886C
}

// fn_80108870
void f_80108870(Ctx* __restrict c) {
  trace_call(0x80108870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108870
  c->r[0]=c->lr; // 80108874
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108878
  c->r[11]=c->r[1]+0x00000020u; // 8010887C
  c->lr=0x80108884u; f_800C2E48(c); // 80108880
  c->r[0]=0u+0x00000000u; // 80108884
  W32(c->r[6]+0x00000000u,c->r[0]); // 80108888
  c->r[26]=c->r[5]|c->r[5]; // 8010888C
  c->r[27]=c->r[6]|c->r[6]; // 80108890
  c->r[3]=c->r[3]+0x0000000Cu; // 80108894
  c->lr=0x8010889Cu; f_800E1430(c); // 80108898
  cmps(c,0,(int32_t)c->r[3],0); // 8010889C
  c->r[29]=c->r[3]|c->r[3]; // 801088A0
  if (!crb(c,2)) { goto L_801088B0; } // 801088A4
  c->r[3]=0u+0x00000025u; // 801088A8
  goto L_80108904; // 801088AC
L_801088B0:;
  c->r[28]=R32(c->r[3]+0x00000034u); // 801088B0
  c->r[31]=c->r[3]+0x00000034u; // 801088B4
  c->r[30]=0u+0x00000000u; // 801088B8
  goto L_801088E4; // 801088BC
L_801088C0:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 801088C0
  c->r[4]=c->r[28]|c->r[28]; // 801088C4
  c->r[5]=c->r[29]|c->r[29]; // 801088C8
  c->lr=0x801088D0u; f_800E6740(c); // 801088CC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 801088D0
  if (!crb(c,2)) { goto L_801088E0; } // 801088D4
  c->r[30]=0u+0x00000001u; // 801088D8
  goto L_801088EC; // 801088DC
L_801088E0:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 801088E0
L_801088E4:;
  cmpu(c,0,c->r[28],c->r[31]); // 801088E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801088C0; } // 801088E8
L_801088EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801088EC
  if (!crb(c,2)) { goto L_801088FC; } // 801088F0
  c->r[3]=0u+0x00000025u; // 801088F4
  goto L_80108904; // 801088F8
L_801088FC:;
  W32(c->r[27]+0x00000000u,c->r[28]); // 801088FC
  c->r[3]=0u+0x00000000u; // 80108900
L_80108904:;
  c->r[11]=c->r[1]+0x00000020u; // 80108904
  c->lr=0x8010890Cu; f_800C2E94(c); // 80108908
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010890C
  c->lr=c->r[0]; // 80108910
  c->r[1]=c->r[1]+0x00000020u; // 80108914
  return; // 80108918
}

// fn_80108920
void f_80108920(Ctx* __restrict c) {
  trace_call(0x80108920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108920
  c->r[0]=c->lr; // 80108924
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010892C
  c->r[31]=c->r[3]+0x0000000Cu; // 80108930
  W32(c->r[1]+0x00000008u,c->r[30]); // 80108934
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80108938
  goto L_80108958; // 8010893C
L_80108940:;
  c->r[3]=c->r[30]|c->r[30]; // 80108940
  c->lr=0x80108948u; f_8010C390(c); // 80108944
  cmps(c,0,(int32_t)c->r[3],0); // 80108948
  if (crb(c,2)) { goto L_80108954; } // 8010894C
  goto L_80108964; // 80108950
L_80108954:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80108954
L_80108958:;
  cmpu(c,0,c->r[30],c->r[31]); // 80108958
  if (!crb(c,2)) { IRQCHK(c); goto L_80108940; } // 8010895C
  c->r[3]=0u+0x00000000u; // 80108960
L_80108964:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108968
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010896C
  c->lr=c->r[0]; // 80108970
  c->r[1]=c->r[1]+0x00000010u; // 80108974
  return; // 80108978
}

// fn_80108980
void f_80108980(Ctx* __restrict c) {
  trace_call(0x80108980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108980
  c->r[0]=c->lr; // 80108984
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108988
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010898C
  c->lr=0x80108994u; f_8010C430(c); // 80108990
  cmps(c,0,(int32_t)c->r[3],0); // 80108994
  c->r[0]=0u+0x00000000u; // 80108998
  if (crb(c,2)) { goto L_801089A4; } // 8010899C
  c->r[0]=c->r[3]|c->r[3]; // 801089A0
L_801089A4:;
  c->r[3]=c->r[0]|c->r[0]; // 801089A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801089A8
  c->lr=c->r[0]; // 801089AC
  c->r[1]=c->r[1]+0x00000010u; // 801089B0
  return; // 801089B4
}

// fn_801089C0
void f_801089C0(Ctx* __restrict c) {
  trace_call(0x801089C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801089C0
  c->r[0]=c->lr; // 801089C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801089C8
  c->r[11]=c->r[1]+0x00000020u; // 801089CC
  c->lr=0x801089D4u; f_800C2E50(c); // 801089D0
  c->r[28]=c->r[3]|c->r[3]; // 801089D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801089D8
  c->r[29]=c->r[4]|c->r[4]; // 801089DC
  c->lr=0x801089E4u; f_800E9D60(c); // 801089E0
  cmps(c,0,(int32_t)c->r[3],0); // 801089E4
  if (!crb(c,2)) { goto L_801089FC; } // 801089E8
  c->r[3]=c->r[29]|c->r[29]; // 801089EC
  c->r[4]=0u+0x00000026u; // 801089F0
  c->r[5]=0u+0x00000030u; // 801089F4
  c->lr=0x801089FCu; f_8018FD10(c); // 801089F8
L_801089FC:;
  c->r[30]=R32(c->r[28]+0x0000000Cu); // 801089FC
  c->r[31]=c->r[28]+0x0000000Cu; // 80108A00
  goto L_80108A30; // 80108A04
L_80108A08:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 80108A08
  c->r[3]=c->r[30]|c->r[30]; // 80108A0C
  c->r[4]=c->r[29]|c->r[29]; // 80108A10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108A14
  c->ctr=c->r[12]; // 80108A18
  if (true) { c->lr=0x80108A20u; dispatch(c,c->ctr); } // 80108A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80108A20
  if (crb(c,2)) { goto L_80108A2C; } // 80108A24
  goto L_80108AB4; // 80108A28
L_80108A2C:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80108A2C
L_80108A30:;
  cmpu(c,0,c->r[30],c->r[31]); // 80108A30
  if (!crb(c,2)) { IRQCHK(c); goto L_80108A08; } // 80108A34
  c->r[30]=R32(c->r[28]+0x00000018u); // 80108A38
  c->r[31]=c->r[28]+0x00000018u; // 80108A3C
  goto L_80108A6C; // 80108A40
L_80108A44:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 80108A44
  c->r[3]=c->r[30]|c->r[30]; // 80108A48
  c->r[4]=c->r[29]|c->r[29]; // 80108A4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108A50
  c->ctr=c->r[12]; // 80108A54
  if (true) { c->lr=0x80108A5Cu; dispatch(c,c->ctr); } // 80108A58
  cmps(c,0,(int32_t)c->r[3],0); // 80108A5C
  if (crb(c,2)) { goto L_80108A68; } // 80108A60
  goto L_80108AB4; // 80108A64
L_80108A68:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80108A68
L_80108A6C:;
  cmpu(c,0,c->r[30],c->r[31]); // 80108A6C
  if (!crb(c,2)) { IRQCHK(c); goto L_80108A44; } // 80108A70
  c->r[30]=R32(c->r[28]+0x00000024u); // 80108A74
  c->r[31]=c->r[28]+0x00000024u; // 80108A78
  goto L_80108AA8; // 80108A7C
L_80108A80:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 80108A80
  c->r[3]=c->r[30]|c->r[30]; // 80108A84
  c->r[4]=c->r[29]|c->r[29]; // 80108A88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108A8C
  c->ctr=c->r[12]; // 80108A90
  if (true) { c->lr=0x80108A98u; dispatch(c,c->ctr); } // 80108A94
  cmps(c,0,(int32_t)c->r[3],0); // 80108A98
  if (crb(c,2)) { goto L_80108AA4; } // 80108A9C
  goto L_80108AB4; // 80108AA0
L_80108AA4:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 80108AA4
L_80108AA8:;
  cmpu(c,0,c->r[30],c->r[31]); // 80108AA8
  if (!crb(c,2)) { IRQCHK(c); goto L_80108A80; } // 80108AAC
  c->r[3]=0u+0x00000000u; // 80108AB0
L_80108AB4:;
  c->r[11]=c->r[1]+0x00000020u; // 80108AB4
  c->lr=0x80108ABCu; f_800C2E9C(c); // 80108AB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108ABC
  c->lr=c->r[0]; // 80108AC0
  c->r[1]=c->r[1]+0x00000020u; // 80108AC4
  return; // 80108AC8
}

// fn_80108AD0
void f_80108AD0(Ctx* __restrict c) {
  trace_call(0x80108AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108AD0
  c->r[0]=c->lr; // 80108AD4
  cmps(c,0,(int32_t)c->r[4],0); // 80108AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108AE0
  c->r[31]=c->r[3]|c->r[3]; // 80108AE4
  if (crb(c,2)) { goto L_80108B20; } // 80108AE8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80108AEC
  cmps(c,0,(int32_t)c->r[0],0); // 80108AF0
  if (!crb(c,2)) { goto L_80108B44; } // 80108AF4
  c->r[12]=R32(c->r[3]+0x00000010u); // 80108AF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80108AFC
  c->ctr=c->r[12]; // 80108B00
  if (true) { c->lr=0x80108B08u; dispatch(c,c->ctr); } // 80108B04
  cmps(c,0,(int32_t)c->r[3],0); // 80108B08
  if (crb(c,2)) { goto L_80108B14; } // 80108B0C
  goto L_80108B48; // 80108B10
L_80108B14:;
  c->r[0]=0u+0x00000001u; // 80108B14
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80108B18
  goto L_80108B44; // 80108B1C
L_80108B20:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 80108B20
  c->r[12]=R32(c->r[12]+0x00000008u); // 80108B24
  c->ctr=c->r[12]; // 80108B28
  if (true) { c->lr=0x80108B30u; dispatch(c,c->ctr); } // 80108B2C
  cmps(c,0,(int32_t)c->r[3],0); // 80108B30
  if (crb(c,2)) { goto L_80108B3C; } // 80108B34
  goto L_80108B48; // 80108B38
L_80108B3C:;
  c->r[0]=0u+0x00000000u; // 80108B3C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80108B40
L_80108B44:;
  c->r[3]=0u+0x00000000u; // 80108B44
L_80108B48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108B48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108B4C
  c->lr=c->r[0]; // 80108B50
  c->r[1]=c->r[1]+0x00000010u; // 80108B54
  return; // 80108B58
}

// fn_80108B60
void f_80108B60(Ctx* __restrict c) {
  trace_call(0x80108B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108B60
  c->r[0]=c->lr; // 80108B64
  cmps(c,0,(int32_t)c->r[4],0); // 80108B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108B70
  c->r[31]=c->r[3]|c->r[3]; // 80108B74
  if (crb(c,2)) { goto L_80108BB0; } // 80108B78
  c->r[0]=R8(c->r[3]+0x00000008u); // 80108B7C
  cmps(c,0,(int32_t)c->r[0],0); // 80108B80
  if (!crb(c,2)) { goto L_80108BD4; } // 80108B84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108B88
  c->r[12]=R32(c->r[12]+0x000000E4u); // 80108B8C
  c->ctr=c->r[12]; // 80108B90
  if (true) { c->lr=0x80108B98u; dispatch(c,c->ctr); } // 80108B94
  cmps(c,0,(int32_t)c->r[3],0); // 80108B98
  if (crb(c,2)) { goto L_80108BA4; } // 80108B9C
  goto L_80108BD8; // 80108BA0
L_80108BA4:;
  c->r[0]=0u+0x00000001u; // 80108BA4
  W8(c->r[31]+0x00000008u,c->r[0]); // 80108BA8
  goto L_80108BD4; // 80108BAC
L_80108BB0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108BB0
  c->r[12]=R32(c->r[12]+0x000000E4u); // 80108BB4
  c->ctr=c->r[12]; // 80108BB8
  if (true) { c->lr=0x80108BC0u; dispatch(c,c->ctr); } // 80108BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80108BC0
  if (crb(c,2)) { goto L_80108BCC; } // 80108BC4
  goto L_80108BD8; // 80108BC8
L_80108BCC:;
  c->r[0]=0u+0x00000000u; // 80108BCC
  W8(c->r[31]+0x00000008u,c->r[0]); // 80108BD0
L_80108BD4:;
  c->r[3]=0u+0x00000000u; // 80108BD4
L_80108BD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108BDC
  c->lr=c->r[0]; // 80108BE0
  c->r[1]=c->r[1]+0x00000010u; // 80108BE4
  return; // 80108BE8
}

// fn_80108BF0
void f_80108BF0(Ctx* __restrict c) {
  trace_call(0x80108BF0u);
  c->r[4]=0u+0x80390000u; // 80108BF0
  c->r[0]=0u+0x00000000u; // 80108BF4
  c->r[4]=c->r[4]+0xFFFFE5C0u; // 80108BF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80108BFC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80108C00
  W32(c->r[3]+0x00000010u,c->r[0]); // 80108C04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80108C08
  return; // 80108C0C
}

// fn_80108C10
void f_80108C10(Ctx* __restrict c) {
  trace_call(0x80108C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108C10
  c->r[0]=c->lr; // 80108C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108C1C
  c->r[31]=c->r[3]|c->r[3]; // 80108C20
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108C24
  c->lr=0x80108C2Cu; f_800E9D60(c); // 80108C28
  cmps(c,0,(int32_t)c->r[3],0); // 80108C2C
  if (!crb(c,2)) { goto L_80108C54; } // 80108C30
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80108C34
  c->r[5]=0u+0x80390000u; // 80108C38
  c->r[4]=c->r[31]|c->r[31]; // 80108C3C
  c->r[6]=0u+0x00000030u; // 80108C40
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108C44
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 80108C48
  c->r[7]=0u+0x00000000u; // 80108C4C
  c->lr=0x80108C54u; f_8018F5F0(c); // 80108C50
L_80108C54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108C54
  c->r[3]=0u+0x00000000u; // 80108C58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108C5C
  c->lr=c->r[0]; // 80108C60
  c->r[1]=c->r[1]+0x00000010u; // 80108C64
  return; // 80108C68
}

// fn_80108C70
void f_80108C70(Ctx* __restrict c) {
  trace_call(0x80108C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108C70
  c->r[0]=c->lr; // 80108C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108C78
  c->r[0]=R32(c->r[3]+0x00000010u); // 80108C7C
  cmps(c,0,(int32_t)c->r[0],0); // 80108C80
  if (crb(c,2)) { goto L_80108CA4; } // 80108C84
  c->r[4]=R32(c->r[3]+0x00000004u); // 80108C88
  c->r[3]=c->r[0]|c->r[0]; // 80108C8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000064u); // 80108C90
  c->r[0]=rotl(c->r[0],0)&0x00000040u; // 80108C94
  c->r[0]=cntlz(c->r[0]); // 80108C98
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 80108C9C
  c->lr=0x80108CA4u; f_8010DA10(c); // 80108CA0
L_80108CA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108CA4
  c->r[3]=0u+0x00000000u; // 80108CA8
  c->lr=c->r[0]; // 80108CAC
  c->r[1]=c->r[1]+0x00000010u; // 80108CB0
  return; // 80108CB4
}

// fn_80108CC0
void f_80108CC0(Ctx* __restrict c) {
  trace_call(0x80108CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108CC0
  c->r[0]=c->lr; // 80108CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108CCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80108CD0
  c->r[30]=c->r[3]|c->r[3]; // 80108CD4
  c->r[4]=R32(c->r[3]+0x00000010u); // 80108CD8
  cmps(c,0,(int32_t)c->r[4],0); // 80108CDC
  if (crb(c,2)) { goto L_80108D3C; } // 80108CE0
  c->r[3]=R32(c->r[4]+0x00000024u); // 80108CE4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80108CE8
  if (!crb(c,2)) { goto L_80108CF8; } // 80108CEC
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80108CF0
  if (crb(c,2)) { goto L_80108D0C; } // 80108CF4
L_80108CF8:;
  c->r[3]=c->r[4]|c->r[4]; // 80108CF8
  c->lr=0x80108D00u; f_8010E340(c); // 80108CFC
  cmps(c,0,(int32_t)c->r[3],0); // 80108D00
  if (crb(c,2)) { goto L_80108D3C; } // 80108D04
  goto L_80108D40; // 80108D08
L_80108D0C:;
  c->r[31]=R32(c->r[4]+0x00000080u); // 80108D0C
  goto L_80108D2C; // 80108D10
L_80108D14:;
  c->r[3]=c->r[31]|c->r[31]; // 80108D14
  c->lr=0x80108D1Cu; f_8010E340(c); // 80108D18
  cmps(c,0,(int32_t)c->r[3],0); // 80108D1C
  if (crb(c,2)) { goto L_80108D28; } // 80108D20
  goto L_80108D40; // 80108D24
L_80108D28:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80108D28
L_80108D2C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80108D2C
  c->r[0]=c->r[3]+0x00000080u; // 80108D30
  cmpu(c,0,c->r[31],c->r[0]); // 80108D34
  if (!crb(c,2)) { IRQCHK(c); goto L_80108D14; } // 80108D38
L_80108D3C:;
  c->r[3]=0u+0x00000000u; // 80108D3C
L_80108D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 80108D48
  c->lr=c->r[0]; // 80108D4C
  c->r[1]=c->r[1]+0x00000010u; // 80108D50
  return; // 80108D54
}

// fn_80108D60
void f_80108D60(Ctx* __restrict c) {
  trace_call(0x80108D60u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108D60
  c->r[0]=R32(c->r[3]+0x00000060u); // 80108D64
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 80108D68
  if (crb(c,2)) { goto L_80108D74; } // 80108D6C
  f_800DB0E0(c); return; // 80108D70
L_80108D74:;
  c->r[3]=0u+0x00000000u; // 80108D74
  return; // 80108D78
}

// fn_80108D80
void f_80108D80(Ctx* __restrict c) {
  trace_call(0x80108D80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108D80
  c->r[0]=c->lr; // 80108D84
  W32(c->r[1]+0x00000074u,c->r[0]); // 80108D88
  c->r[11]=c->r[1]+0x00000070u; // 80108D8C
  c->lr=0x80108D94u; f_800C2E34(c); // 80108D90
  c->r[29]=0u+0x00000000u; // 80108D94
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 80108D98
  c->r[0]=0u+0x43300000u; // 80108D9C
  c->r[21]=c->r[3]|c->r[3]; // 80108DA0
  W32(c->r[1]+0x00000028u,c->r[29]); // 80108DA4
  c->r[22]=c->r[4]|c->r[4]; // 80108DA8
  c->r[23]=c->r[5]|c->r[5]; // 80108DAC
  c->r[28]=0u+0x00000000u; // 80108DB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80108DB4
  c->r[27]=0u+0x00000001u; // 80108DB8
  W32(c->r[1]+0x00000030u,c->r[0]); // 80108DBC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80108DC0
  W32(c->r[1]+0x00000038u,c->r[0]); // 80108DC4
  c->lr=0x80108DCCu; f_800D9B90(c); // 80108DC8
  cmps(c,0,(int32_t)c->r[3],0); // 80108DCC
  if (crb(c,2)) { goto L_80108DF0; } // 80108DD0
  c->r[3]=R32(c->r[21]+0x00000010u); // 80108DD4
  c->r[4]=c->r[1]+0x00000028u; // 80108DD8
  c->r[5]=c->r[1]+0x00000014u; // 80108DDC
  c->lr=0x80108DE4u; f_8010ED80(c); // 80108DE0
  cmps(c,0,(int32_t)c->r[3],0); // 80108DE4
  if (crb(c,2)) { goto L_80108DF0; } // 80108DE8
  goto L_80109710; // 80108DEC
L_80108DF0:;
  c->r[31]=R32(c->r[21]+0x00000010u); // 80108DF0
  c->r[0]=R32(c->r[31]+0x00000024u); // 80108DF4
  c->r[0]=rotl(c->r[0],0)&0x00000018u; // 80108DF8
  cmpu(c,0,c->r[0],0x00000018u); // 80108DFC
  if (!crb(c,2)) { goto L_80108E5C; } // 80108E00
  c->r[0]=0u+0x00000000u; // 80108E04
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80108E08
  c->r[3]=R32(c->r[31]+0x00000034u); // 80108E0C
  cmps(c,0,(int32_t)c->r[3],0); // 80108E10
  if (crb(c,2)) { goto L_80108E3C; } // 80108E14
  c->r[4]=c->r[1]+0x0000000Eu; // 80108E18
  c->lr=0x80108E20u; f_801762B0(c); // 80108E1C
  cmps(c,0,(int32_t)c->r[3],0); // 80108E20
  if (crb(c,2)) { goto L_80108E3C; } // 80108E24
  cmps(c,0,(int32_t)c->r[3],36); // 80108E28
  if (crb(c,2)) { goto L_80108E3C; } // 80108E2C
  cmps(c,0,(int32_t)c->r[3],11); // 80108E30
  if (crb(c,2)) { goto L_80108E3C; } // 80108E34
  goto L_80109710; // 80108E38
L_80108E3C:;
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 80108E3C
  cmps(c,0,(int32_t)c->r[0],0); // 80108E40
  if (crb(c,2)) { goto L_80108E50; } // 80108E44
  c->r[28]=0u+0x00000001u; // 80108E48
  goto L_80108E5C; // 80108E4C
L_80108E50:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 80108E50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80108E54
  W32(c->r[31]+0x00000024u,c->r[0]); // 80108E58
L_80108E5C:;
  c->r[0]=R8(c->r[31]+0x0000002Cu); // 80108E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80108E60
  if (crb(c,2)) { goto L_80108E6C; } // 80108E64
  c->r[27]=0u+0x00000000u; // 80108E68
L_80108E6C:;
  c->r[0]=0u+0x00000000u; // 80108E6C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80108E70
  c->r[3]=R32(c->r[31]+0x00000034u); // 80108E74
  cmps(c,0,(int32_t)c->r[3],0); // 80108E78
  if (crb(c,2)) { goto L_80108EF4; } // 80108E7C
  c->r[4]=c->r[1]+0x0000000Du; // 80108E80
  c->lr=0x80108E88u; f_801762B0(c); // 80108E84
  cmps(c,0,(int32_t)c->r[3],11); // 80108E88
  if (crb(c,2)) { goto L_80108E98; } // 80108E8C
  cmps(c,0,(int32_t)c->r[3],36); // 80108E90
  if (!crb(c,2)) { goto L_80108EE8; } // 80108E94
L_80108E98:;
  c->r[3]=c->r[31]|c->r[31]; // 80108E98
  c->r[4]=0u+0x00000001u; // 80108E9C
  c->lr=0x80108EA4u; f_8010E470(c); // 80108EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80108EA4
  if (crb(c,2)) { goto L_80108EB0; } // 80108EA8
  goto L_80109710; // 80108EAC
L_80108EB0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80108EB0
  c->r[0]=R32(c->r[3]+0x00000034u); // 80108EB4
  cmps(c,0,(int32_t)c->r[0],-1); // 80108EB8
  if (crb(c,2)) { goto L_80108EF4; } // 80108EBC
  c->r[3]=R32(c->r[31]+0x00000024u); // 80108EC0
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80108EC4
  if (!crb(c,2)) { goto L_80108ED4; } // 80108EC8
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80108ECC
  if (crb(c,2)) { goto L_80108EF4; } // 80108ED0
L_80108ED4:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 80108ED4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80108ED8
  c->r[0]=c->r[0]|0x00000100u; // 80108EDC
  W32(c->r[31]+0x00000024u,c->r[0]); // 80108EE0
  goto L_80108EF4; // 80108EE4
L_80108EE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80108EE8
  if (crb(c,2)) { goto L_80108EF4; } // 80108EEC
  goto L_80109710; // 80108EF0
L_80108EF4:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 80108EF4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80108EF8
  if (crb(c,2)) { goto L_80108F08; } // 80108EFC
  c->r[0]=0u+0x00000001u; // 80108F00
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80108F04
L_80108F08:;
  cmps(c,0,(int32_t)c->r[31],0); // 80108F08
  c->r[0]=0u+0x00000000u; // 80108F0C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80108F10
  if (crb(c,2)) { goto L_80108F40; } // 80108F14
  c->r[12]=R32(c->r[21]+0x00000000u); // 80108F18
  c->r[3]=c->r[21]|c->r[21]; // 80108F1C
  c->r[4]=c->r[31]|c->r[31]; // 80108F20
  c->r[5]=c->r[1]+0x0000000Cu; // 80108F24
  c->r[12]=R32(c->r[12]+0x00000098u); // 80108F28
  c->ctr=c->r[12]; // 80108F2C
  if (true) { c->lr=0x80108F34u; dispatch(c,c->ctr); } // 80108F30
  cmps(c,0,(int32_t)c->r[3],0); // 80108F34
  if (crb(c,2)) { goto L_80108F40; } // 80108F38
  goto L_80109710; // 80108F3C
L_80108F40:;
  c->r[0]=R8(c->r[1]+0x0000000Du); // 80108F40
  cmps(c,0,(int32_t)c->r[0],0); // 80108F44
  if (!crb(c,2)) { goto L_80109318; } // 80108F48
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80108F4C
  cmps(c,0,(int32_t)c->r[0],0); // 80108F50
  if (!crb(c,2)) { goto L_80108F78; } // 80108F54
  c->r[3]=c->r[31]|c->r[31]; // 80108F58
  c->lr=0x80108F60u; f_8010E890(c); // 80108F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80108F60
  if (crb(c,2)) { goto L_80108F78; } // 80108F64
  c->r[3]=c->r[31]|c->r[31]; // 80108F68
  c->lr=0x80108F70u; f_8010E8A0(c); // 80108F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80108F70
  if (!crb(c,2)) { goto L_8010932C; } // 80108F74
L_80108F78:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80108F78
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80108F7C
  if (!crb(c,2)) { goto L_80108F8C; } // 80108F80
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80108F84
  if (crb(c,2)) { goto L_80109004; } // 80108F88
L_80108F8C:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 80108F8C
  if (!crb(c,2)) { goto L_8010932C; } // 80108F90
  c->r[3]=R32(c->r[21]+0x00000004u); // 80108F94
  c->r[4]=c->r[31]|c->r[31]; // 80108F98
  c->r[5]=c->r[22]|c->r[22]; // 80108F9C
  c->r[28]=0u+0x00000001u; // 80108FA0
  c->r[6]=0u+0x00000000u; // 80108FA4
  c->lr=0x80108FACu; f_800DA300(c); // 80108FA8
  cmps(c,0,(int32_t)c->r[3],56); // 80108FAC
  if (crb(c,2)) { goto L_80108FBC; } // 80108FB0
  cmps(c,0,(int32_t)c->r[3],21); // 80108FB4
  if (!crb(c,2)) { goto L_80108FC0; } // 80108FB8
L_80108FBC:;
  c->r[3]=0u+0x00000000u; // 80108FBC
L_80108FC0:;
  cmps(c,0,(int32_t)c->r[3],77); // 80108FC0
  if (!crb(c,2)) { goto L_80108FF8; } // 80108FC4
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 80108FC8
  c->r[0]=c->r[0]+c->r[22]; // 80108FCC
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80108FD0
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80108FD4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80108FD8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80108FDC
  if (crb(c,2)) { goto L_8010932C; } // 80108FE0
  c->r[3]=R32(c->r[21]+0x00000004u); // 80108FE4
  c->r[0]=R32(c->r[3]+0x00000060u); // 80108FE8
  c->r[0]=c->r[0]|0x10000000u; // 80108FEC
  W32(c->r[3]+0x00000060u,c->r[0]); // 80108FF0
  goto L_8010932C; // 80108FF4
L_80108FF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80108FF8
  if (crb(c,2)) { goto L_8010932C; } // 80108FFC
  goto L_80109710; // 80109000
L_80109004:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80109004
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80109008
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010900C
  c->r[25]=R32(c->r[3]+0x0000000Cu); // 80109010
  c->r[26]=R32(c->r[3]+0x00000008u); // 80109014
  cmps(c,0,(int32_t)c->r[25],0); // 80109018
  if (!crb(c,1)) { goto L_8010905C; } // 8010901C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 80109020
  if (crb(c,1)) { goto L_8010905C; } // 80109024
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80109028
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010902C
  fcmp(c,0,c->f[2],c->f[0]); // 80109030
  if (!crb(c,1)) { goto L_8010905C; } // 80109034
  W32(c->r[1]+0x00000034u,c->r[22]); // 80109038
  c->r[3]=R32(c->r[21]+0x00000004u); // 8010903C
  {uint32_t ea=c->r[2]+0xFFFFA150u; c->f[1]=RF64(ea);} // 80109040
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80109044
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80109048
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8010904C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80109050
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80109054
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80109058
L_8010905C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010905C
  c->r[4]=R32(c->r[31]+0x00000058u); // 80109060
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80109064
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80109068
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010906C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80109070
  if (!crb(c,0)) { goto L_80109310; } // 80109074
  cmps(c,0,(int32_t)c->r[25],0); // 80109078
  c->r[30]=0u+0x00000000u; // 8010907C
  c->r[24]=0u+0x00000000u; // 80109080
  if (!crb(c,1)) { goto L_80109090; } // 80109084
  cmps(c,1,(int32_t)c->r[26],(int32_t)c->r[25]); // 80109088
  if (!crb(c,5)) { goto L_801090B4; } // 8010908C
L_80109090:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80109090
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 80109094
  if (!crb(c,2)) { goto L_801090AC; } // 80109098
  c->r[0]=c->r[3]|0x00000100u; // 8010909C
  W32(c->r[31]+0x00000024u,c->r[0]); // 801090A0
  c->r[24]=0u+0x00000001u; // 801090A4
  goto L_80109190; // 801090A8
L_801090AC:;
  c->r[24]=0u+0x00000000u; // 801090AC
  goto L_80109190; // 801090B0
L_801090B4:;
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801090B4
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 801090B8
  fcmp(c,0,c->f[2],c->f[0]); // 801090BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801090C0
  if (!crb(c,2)) { goto L_80109190; } // 801090C4
  c->r[24]=0u+0x00000001u; // 801090C8
  if (crb(c,6)) { goto L_8010910C; } // 801090CC
  c->lr=0x801090D4u; f_800C8D44(c); // 801090D0
  c->r[4]=c->r[25]-c->r[26]; // 801090D4
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[2]=RF64(ea);} // 801090D8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801090DC
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801090E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801090E4
  c->r[0]=c->r[3]-c->r[0]; // 801090E8
  c->r[0]=c->r[26]+c->r[0]; // 801090EC
  c->r[0]=c->r[0]^0x80000000u; // 801090F0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801090F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 801090F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801090FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80109100
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80109104
  goto L_80109128; // 80109108
L_8010910C:;
  c->r[0]=c->r[26]^0x80000000u; // 8010910C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80109110
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[1]=RF64(ea);} // 80109114
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80109118
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8010911C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80109120
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80109124
L_80109128:;
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80109128
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010912C
  fcmp(c,0,c->f[1],c->f[0]); // 80109130
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80109134
  if (!crb(c,2)) { goto L_80109190; } // 80109138
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 8010913C
  if (crb(c,2)) { goto L_80109178; } // 80109140
  c->lr=0x80109148u; f_800C8D44(c); // 80109144
  c->r[4]=c->r[25]-c->r[26]; // 80109148
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[1]=RF64(ea);} // 8010914C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80109150
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80109154
  c->r[0]=c->r[3]-c->r[0]; // 80109158
  c->r[0]=c->r[26]+c->r[0]; // 8010915C
  c->r[0]=c->r[0]^0x80000000u; // 80109160
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80109164
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80109168
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8010916C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80109170
  goto L_80109190; // 80109174
L_80109178:;
  c->r[0]=c->r[26]^0x80000000u; // 80109178
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010917C
  {uint32_t ea=c->r[2]+0xFFFFA158u; c->f[1]=RF64(ea);} // 80109180
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80109184
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80109188
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8010918C
L_80109190:;
  cmps(c,0,(int32_t)c->r[24],0); // 80109190
  if (crb(c,2)) { goto L_80109220; } // 80109194
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80109198
  c->r[4]=0u+0x00000001u; // 8010919C
  cmps(c,0,(int32_t)c->r[0],-1); // 801091A0
  if (!crb(c,1)) { goto L_801091EC; } // 801091A4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801091A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801091AC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801091B0
  c->r[3]=R32(c->r[3]+0x00000024u); // 801091B4
  c->r[5]=c->r[3]+c->r[0]; // 801091B8
  c->r[0]=R32(c->r[3]+c->r[0]); // 801091BC
  cmps(c,0,(int32_t)c->r[0],0); // 801091C0
  if (!crb(c,2)) { goto L_801091E0; } // 801091C4
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 801091C8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801091CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801091D0
  if (crb(c,0)) { goto L_801091EC; } // 801091D4
  c->r[4]=0u+0x00000000u; // 801091D8
  goto L_801091EC; // 801091DC
L_801091E0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801091E0
  if (!crb(c,2)) { goto L_801091EC; } // 801091E4
  c->r[4]=0u+0x00000000u; // 801091E8
L_801091EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801091EC
  if (crb(c,2)) { goto L_80109220; } // 801091F0
  c->r[4]=R32(c->r[31]+0x00000080u); // 801091F4
  c->r[0]=c->r[31]+0x00000080u; // 801091F8
  goto L_80109218; // 801091FC
L_80109200:;
  c->r[3]=R32(c->r[4]+0x00000024u); // 80109200
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 80109204
  if (!crb(c,2)) { goto L_80109214; } // 80109208
  c->r[30]=c->r[4]|c->r[4]; // 8010920C
  goto L_80109220; // 80109210
L_80109214:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80109214
L_80109218:;
  cmpu(c,0,c->r[4],c->r[0]); // 80109218
  if (!crb(c,2)) { IRQCHK(c); goto L_80109200; } // 8010921C
L_80109220:;
  cmps(c,0,(int32_t)c->r[30],0); // 80109220
  if (crb(c,2)) { goto L_80109308; } // 80109224
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 80109228
  c->r[0]=0u+0x00000000u; // 8010922C
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 80109230
  c->r[4]=c->r[30]|c->r[30]; // 80109234
  c->r[5]=c->r[22]|c->r[22]; // 80109238
  c->r[6]=c->r[1]+0x0000000Bu; // 8010923C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80109240
  c->r[28]=0u+0x00000001u; // 80109244
  c->r[3]=R32(c->r[21]+0x00000004u); // 80109248
  c->lr=0x80109250u; f_800DA300(c); // 8010924C
  cmps(c,0,(int32_t)c->r[3],0); // 80109250
  if (!crb(c,2)) { goto L_80109288; } // 80109254
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80109258
  cmps(c,0,(int32_t)c->r[0],0); // 8010925C
  if (!crb(c,2)) { goto L_8010932C; } // 80109260
  c->r[0]=R32(c->r[30]+0x00000024u); // 80109264
  c->r[31]=c->r[30]|c->r[30]; // 80109268
  c->r[0]=c->r[0]|0x00000001u; // 8010926C
  W32(c->r[30]+0x00000024u,c->r[0]); // 80109270
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 80109274
  c->r[3]=R32(c->r[4]+0x00000058u); // 80109278
  c->r[0]=c->r[3]+0x00000001u; // 8010927C
  W32(c->r[4]+0x00000058u,c->r[0]); // 80109280
  goto L_8010932C; // 80109284
L_80109288:;
  cmps(c,0,(int32_t)c->r[3],56); // 80109288
  if (crb(c,2)) { goto L_80109298; } // 8010928C
  cmps(c,0,(int32_t)c->r[3],21); // 80109290
  if (!crb(c,2)) { goto L_801092B0; } // 80109294
L_80109298:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 80109298
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010929C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801092A0
  W32(c->r[31]+0x00000024u,c->r[0]); // 801092A4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801092A8
  goto L_8010932C; // 801092AC
L_801092B0:;
  cmps(c,0,(int32_t)c->r[3],77); // 801092B0
  if (!crb(c,2)) { goto L_80109710; } // 801092B4
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801092B8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801092BC
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 801092C0
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801092C4
  c->r[0]=c->r[0]+c->r[22]; // 801092C8
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801092CC
  c->r[0]=R32(c->r[31]+0x00000024u); // 801092D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801092D4
  W32(c->r[31]+0x00000024u,c->r[0]); // 801092D8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801092DC
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 801092E0
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801092E4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801092E8
  if (crb(c,2)) { goto L_8010932C; } // 801092EC
  c->r[3]=R32(c->r[21]+0x00000004u); // 801092F0
  c->r[0]=R32(c->r[3]+0x00000060u); // 801092F4
  c->r[0]=c->r[0]|0x10000000u; // 801092F8
  W32(c->r[3]+0x00000060u,c->r[0]); // 801092FC
  goto L_8010932C; // 80109300
  goto L_80109710; // 80109304
L_80109308:;
  c->r[31]=0u+0x00000000u; // 80109308
  goto L_8010932C; // 8010930C
L_80109310:;
  c->r[31]=0u+0x00000000u; // 80109310
  goto L_8010932C; // 80109314
L_80109318:;
  c->r[0]=0u+0xFFFFFFFFu; // 80109318
  W32(c->r[31]+0x00000090u,c->r[0]); // 8010931C
  {uint32_t ea=c->r[2]+0xFFFFA14Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80109320
  c->r[28]=0u+0x00000001u; // 80109324
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80109328
L_8010932C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010932C
  if (crb(c,2)) { goto L_80109484; } // 80109330
  c->r[0]=R32(c->r[31]+0x00000034u); // 80109334
  cmps(c,0,(int32_t)c->r[0],0); // 80109338
  if (crb(c,2)) { goto L_80109484; } // 8010933C
  c->r[3]=c->r[21]|c->r[21]; // 80109340
  c->r[4]=c->r[31]|c->r[31]; // 80109344
  c->r[5]=c->r[23]|c->r[23]; // 80109348
  c->lr=0x80109350u; f_80109730(c); // 8010934C
  cmps(c,0,(int32_t)c->r[3],0); // 80109350
  if (crb(c,2)) { goto L_8010935C; } // 80109354
  goto L_80109710; // 80109358
L_8010935C:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 8010935C
  c->r[4]=c->r[1]+0x0000000Au; // 80109360
  c->lr=0x80109368u; f_80175A40(c); // 80109364
  cmps(c,0,(int32_t)c->r[3],0); // 80109368
  if (crb(c,2)) { goto L_8010937C; } // 8010936C
  cmps(c,0,(int32_t)c->r[3],36); // 80109370
  if (crb(c,2)) { goto L_8010937C; } // 80109374
  goto L_80109710; // 80109378
L_8010937C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8010937C
  cmps(c,0,(int32_t)c->r[0],0); // 80109380
  if (crb(c,2)) { goto L_80109484; } // 80109384
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80109388
  cmps(c,0,(int32_t)c->r[0],0); // 8010938C
  if (crb(c,2)) { goto L_80109464; } // 80109390
  c->r[3]=c->r[31]|c->r[31]; // 80109394
  c->lr=0x8010939Cu; f_8010E890(c); // 80109398
  cmps(c,0,(int32_t)c->r[3],0); // 8010939C
  if (crb(c,2)) { goto L_801093E0; } // 801093A0
  c->r[5]=R32(c->r[1]+0x00000028u); // 801093A4
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 801093A8
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 801093AC
  if (crb(c,2)) { goto L_801093E0; } // 801093B0
  W32(c->r[1]+0x00000024u,c->r[6]); // 801093B4
  c->r[4]=0u+0x00000001u; // 801093B8
  c->r[3]=R32(c->r[31]+0x00000034u); // 801093BC
  W32(c->r[1]+0x00000020u,c->r[5]); // 801093C0
  c->lr=0x801093C8u; f_80175B90(c); // 801093C4
  cmps(c,0,(int32_t)c->r[3],0); // 801093C8
  if (crb(c,2)) { goto L_801093D4; } // 801093CC
  goto L_80109710; // 801093D0
L_801093D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801093D4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801093D8
  goto L_80109464; // 801093DC
L_801093E0:;
  c->r[3]=R32(c->r[21]+0x00000004u); // 801093E0
  c->lr=0x801093E8u; f_800D9B90(c); // 801093E4
  cmps(c,0,(int32_t)c->r[3],0); // 801093E8
  if (crb(c,2)) { goto L_80109464; } // 801093EC
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 801093F0
  c->r[4]=c->r[1]+0x00000018u; // 801093F4
  c->r[5]=c->r[1]+0x0000001Cu; // 801093F8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801093FC
  c->lr=0x80109404u; f_8019EFA0(c); // 80109400
  cmps(c,0,(int32_t)c->r[3],0); // 80109404
  if (crb(c,2)) { goto L_80109410; } // 80109408
  goto L_80109710; // 8010940C
L_80109410:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80109410
  c->r[4]=c->r[1]+0x00000010u; // 80109414
  c->r[5]=0u+0x00000000u; // 80109418
  c->r[3]=R32(c->r[3]+0x00000014u); // 8010941C
  c->lr=0x80109424u; f_8019E4D0(c); // 80109420
  cmps(c,0,(int32_t)c->r[3],0); // 80109424
  if (crb(c,2)) { goto L_80109430; } // 80109428
  goto L_80109710; // 8010942C
L_80109430:;
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 80109430
  c->r[4]=0u+0x00000001u; // 80109434
  c->r[0]=R32(c->r[1]+0x00000010u); // 80109438
  c->r[3]=R32(c->r[1]+0x00000018u); // 8010943C
  c->r[6]=addc(c,c->r[5],c->r[0],0); // 80109440
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80109444
  c->r[5]=addc(c,c->r[3],0,c->xer_ca); // 80109448
  W32(c->r[1]+0x00000018u,c->r[5]); // 8010944C
  c->r[3]=R32(c->r[31]+0x00000034u); // 80109450
  c->lr=0x80109458u; f_80175B90(c); // 80109454
  cmps(c,0,(int32_t)c->r[3],0); // 80109458
  if (crb(c,2)) { goto L_80109464; } // 8010945C
  goto L_80109710; // 80109460
L_80109464:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 80109464
  c->r[4]=0u+0x00000000u; // 80109468
  c->lr=0x80109470u; f_801759F0(c); // 8010946C
  cmps(c,0,(int32_t)c->r[3],0); // 80109470
  if (crb(c,2)) { goto L_80109484; } // 80109474
  cmps(c,0,(int32_t)c->r[3],36); // 80109478
  if (crb(c,2)) { goto L_80109484; } // 8010947C
  goto L_80109710; // 80109480
L_80109484:;
  c->r[30]=R32(c->r[21]+0x00000010u); // 80109484
  c->r[0]=R32(c->r[30]+0x00000024u); // 80109488
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8010948C
  if (crb(c,2)) { goto L_8010965C; } // 80109490
  c->r[24]=R32(c->r[30]+0x00000080u); // 80109494
  c->r[25]=c->r[30]+0x00000080u; // 80109498
  c->r[31]=0u+0x00000000u; // 8010949C
  goto L_80109654; // 801094A0
L_801094A4:;
  c->r[0]=R32(c->r[24]+0x00000024u); // 801094A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801094A8
  if (crb(c,2)) { goto L_80109650; } // 801094AC
  c->r[0]=R32(c->r[24]+0x00000034u); // 801094B0
  c->r[26]=0u+0x00000000u; // 801094B4
  cmps(c,0,(int32_t)c->r[0],0); // 801094B8
  if (!crb(c,2)) { goto L_80109554; } // 801094BC
  c->r[3]=R32(c->r[21]+0x00000004u); // 801094C0
  c->r[4]=c->r[24]|c->r[24]; // 801094C4
  c->r[5]=c->r[22]|c->r[22]; // 801094C8
  c->r[6]=0u+0x00000000u; // 801094CC
  c->lr=0x801094D4u; f_800DA300(c); // 801094D0
  cmps(c,0,(int32_t)c->r[3],56); // 801094D4
  if (crb(c,2)) { goto L_801094E4; } // 801094D8
  cmps(c,0,(int32_t)c->r[3],21); // 801094DC
  if (!crb(c,2)) { goto L_801094E8; } // 801094E0
L_801094E4:;
  c->r[3]=0u+0x00000000u; // 801094E4
L_801094E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801094E8
  if (crb(c,2)) { goto L_801094FC; } // 801094EC
  cmps(c,0,(int32_t)c->r[3],77); // 801094F0
  if (crb(c,2)) { goto L_801094FC; } // 801094F4
  goto L_80109710; // 801094F8
L_801094FC:;
  c->r[0]=R32(c->r[24]+0x00000034u); // 801094FC
  cmps(c,0,(int32_t)c->r[0],0); // 80109500
  if (crb(c,2)) { goto L_8010964C; } // 80109504
  c->r[3]=R32(c->r[30]+0x00000034u); // 80109508
  c->r[4]=c->r[1]+0x00000008u; // 8010950C
  c->lr=0x80109514u; f_80175A40(c); // 80109510
  cmps(c,0,(int32_t)c->r[3],0); // 80109514
  if (crb(c,2)) { goto L_80109528; } // 80109518
  cmps(c,0,(int32_t)c->r[3],36); // 8010951C
  if (crb(c,2)) { goto L_80109528; } // 80109520
  goto L_80109710; // 80109524
L_80109528:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80109528
  cmps(c,0,(int32_t)c->r[0],0); // 8010952C
  if (crb(c,2)) { goto L_8010964C; } // 80109530
  c->r[3]=R32(c->r[24]+0x00000034u); // 80109534
  c->r[4]=0u+0x00000000u; // 80109538
  c->lr=0x80109540u; f_801759F0(c); // 8010953C
  cmps(c,0,(int32_t)c->r[3],0); // 80109540
  if (crb(c,2)) { goto L_8010964C; } // 80109544
  cmps(c,0,(int32_t)c->r[3],36); // 80109548
  if (crb(c,2)) { goto L_8010964C; } // 8010954C
  goto L_80109710; // 80109550
L_80109554:;
  c->r[3]=c->r[21]|c->r[21]; // 80109554
  c->r[4]=c->r[24]|c->r[24]; // 80109558
  c->r[5]=c->r[23]|c->r[23]; // 8010955C
  c->lr=0x80109564u; f_80109730(c); // 80109560
  cmps(c,0,(int32_t)c->r[3],36); // 80109564
  if (crb(c,2)) { goto L_8010957C; } // 80109568
  cmps(c,0,(int32_t)c->r[3],11); // 8010956C
  if (crb(c,2)) { goto L_8010957C; } // 80109570
  cmps(c,0,(int32_t)c->r[3],37); // 80109574
  if (!crb(c,2)) { goto L_80109584; } // 80109578
L_8010957C:;
  c->r[26]=0u+0x00000001u; // 8010957C
  goto L_80109590; // 80109580
L_80109584:;
  cmps(c,0,(int32_t)c->r[3],0); // 80109584
  if (crb(c,2)) { goto L_80109590; } // 80109588
  goto L_80109710; // 8010958C
L_80109590:;
  cmps(c,0,(int32_t)c->r[26],0); // 80109590
  if (!crb(c,2)) { goto L_801095D4; } // 80109594
  c->r[3]=R32(c->r[24]+0x00000034u); // 80109598
  c->r[4]=c->r[1]+0x00000009u; // 8010959C
  c->lr=0x801095A4u; f_801762B0(c); // 801095A0
  cmps(c,0,(int32_t)c->r[3],36); // 801095A4
  if (crb(c,2)) { goto L_801095B4; } // 801095A8
  cmps(c,0,(int32_t)c->r[3],11); // 801095AC
  if (!crb(c,2)) { goto L_801095BC; } // 801095B0
L_801095B4:;
  W8(c->r[1]+0x00000009u,c->r[31]); // 801095B4
  goto L_801095C8; // 801095B8
L_801095BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801095BC
  if (crb(c,2)) { goto L_801095C8; } // 801095C0
  goto L_80109710; // 801095C4
L_801095C8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801095C8
  c->r[0]=cntlz(c->r[0]); // 801095CC
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 801095D0
L_801095D4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801095D4
  if (crb(c,2)) { goto L_80109648; } // 801095D8
  c->r[7]=R32(c->r[21]+0x00000004u); // 801095DC
  c->r[12]=R32(c->r[7]+0x00000074u); // 801095E0
  cmps(c,0,(int32_t)c->r[12],0); // 801095E4
  if (crb(c,2)) { goto L_80109624; } // 801095E8
  c->r[6]=R32(c->r[24]+0x0000005Cu); // 801095EC
  cmps(c,0,(int32_t)c->r[6],0); // 801095F0
  if (crb(c,2)) { goto L_801095FC; } // 801095F4
  goto L_80109600; // 801095F8
L_801095FC:;
  c->r[6]=c->r[24]|c->r[24]; // 801095FC
L_80109600:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80109600
  c->r[4]=0u+0x00000002u; // 80109604
  c->r[3]=R32(c->r[7]+0x00000018u); // 80109608
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010960C
  c->r[6]=R32(c->r[6]+0x00000040u); // 80109610
  c->r[5]=R32(c->r[5]+0x00000010u); // 80109614
  c->r[7]=R32(c->r[7]+0x00000078u); // 80109618
  c->ctr=c->r[12]; // 8010961C
  if (true) { c->lr=0x80109624u; dispatch(c,c->ctr); } // 80109620
L_80109624:;
  c->r[0]=R32(c->r[24]+0x00000024u); // 80109624
  c->r[3]=c->r[24]|c->r[24]; // 80109628
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8010962C
  W32(c->r[24]+0x00000024u,c->r[0]); // 80109630
  c->lr=0x80109638u; f_8010E340(c); // 80109634
  c->r[3]=R32(c->r[30]+0x00000058u); // 80109638
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010963C
  W32(c->r[30]+0x00000058u,c->r[0]); // 80109640
  goto L_8010964C; // 80109644
L_80109648:;
  c->r[29]=0u+0x00000001u; // 80109648
L_8010964C:;
  c->r[28]=0u+0x00000001u; // 8010964C
L_80109650:;
  c->r[24]=R32(c->r[24]+0x00000000u); // 80109650
L_80109654:;
  cmpu(c,0,c->r[24],c->r[25]); // 80109654
  if (!crb(c,2)) { IRQCHK(c); goto L_801094A4; } // 80109658
L_8010965C:;
  c->r[5]=R32(c->r[21]+0x00000004u); // 8010965C
  c->r[0]=addc(c,~c->r[29],0x00000000u,1); // 80109660
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80109664
  c->r[3]=R32(c->r[5]+0x00000060u); // 80109668
  c->r[4]=rotl(c->r[0],0)&0x00040000u; // 8010966C
  c->r[0]=rotl(c->r[3],0)&0xFFFBFFFFu; // 80109670
  W32(c->r[5]+0x00000060u,c->r[0]); // 80109674
  c->r[3]=R32(c->r[21]+0x00000004u); // 80109678
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010967C
  c->r[0]=c->r[4]|c->r[0]; // 80109680
  W32(c->r[3]+0x00000060u,c->r[0]); // 80109684
  c->r[3]=R32(c->r[21]+0x00000004u); // 80109688
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010968C
  c->r[0]=c->r[0]&~c->r[23]; // 80109690
  W32(c->r[3]+0x00000060u,c->r[0]); // 80109694
  c->r[3]=R32(c->r[21]+0x00000004u); // 80109698
  c->r[4]=R32(c->r[3]+0x00000060u); // 8010969C
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 801096A0
  if (crb(c,2)) { goto L_801096D8; } // 801096A4
  cmps(c,0,(int32_t)c->r[28],0); // 801096A8
  if (!crb(c,2)) { goto L_801096D8; } // 801096AC
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 801096B0
  if (!crb(c,2)) { goto L_801096D8; } // 801096B4
  cmps(c,0,(int32_t)c->r[27],0); // 801096B8
  if (crb(c,2)) { goto L_801096D8; } // 801096BC
  c->r[12]=R32(c->r[3]+0x00000010u); // 801096C0
  c->r[4]=0u+0x00000001u; // 801096C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801096C8
  c->ctr=c->r[12]; // 801096CC
  if (true) { c->lr=0x801096D4u; dispatch(c,c->ctr); } // 801096D0
  goto L_8010970C; // 801096D4
L_801096D8:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 801096D8
  if (crb(c,2)) { goto L_8010970C; } // 801096DC
  c->r[12]=R32(c->r[3]+0x00000010u); // 801096E0
  c->r[4]=0u+0x00000000u; // 801096E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801096E8
  c->ctr=c->r[12]; // 801096EC
  if (true) { c->lr=0x801096F4u; dispatch(c,c->ctr); } // 801096F0
  c->r[4]=R32(c->r[21]+0x00000004u); // 801096F4
  c->r[3]=0u+0x00000057u; // 801096F8
  c->r[0]=R32(c->r[4]+0x00000060u); // 801096FC
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 80109700
  W32(c->r[4]+0x00000060u,c->r[0]); // 80109704
  goto L_80109710; // 80109708
L_8010970C:;
  c->r[3]=0u+0x00000000u; // 8010970C
L_80109710:;
  c->r[11]=c->r[1]+0x00000070u; // 80109710
  c->lr=0x80109718u; f_800C2E80(c); // 80109714
  c->r[0]=R32(c->r[1]+0x00000074u); // 80109718
  c->lr=c->r[0]; // 8010971C
  c->r[1]=c->r[1]+0x00000070u; // 80109720
  return; // 80109724
}

// fn_80109730
void f_80109730(Ctx* __restrict c) {
  trace_call(0x80109730u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109730
  c->r[0]=c->lr; // 80109734
  W32(c->r[1]+0x00000084u,c->r[0]); // 80109738
  c->r[11]=c->r[1]+0x00000030u; // 8010973C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80109740
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80109744
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 80109748
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8010974C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 80109750
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 80109754
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 80109758
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8010975C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 80109760
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 80109764
  c->lr=0x8010976Cu; f_800C2E50(c); // 80109768
  c->r[0]=R32(c->r[4]+0x00000028u); // 8010976C
  c->r[28]=c->r[3]|c->r[3]; // 80109770
  c->r[31]=R32(c->r[4]+0x00000014u); // 80109774
  c->r[29]=c->r[4]|c->r[4]; // 80109778
  cmps(c,0,(int32_t)c->r[0],0); // 8010977C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[30]=c->ps1[30]=RF32(ea);} // 80109780
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 80109784
  c->r[30]=c->r[5]|c->r[5]; // 80109788
  {uint32_t ea=c->r[2]+0xFFFFA160u; c->f[27]=c->ps1[27]=RF32(ea);} // 8010978C
  {uint32_t ea=c->r[4]+0x00000064u; c->f[29]=c->ps1[29]=RF32(ea);} // 80109790
  if (crb(c,2)) { goto L_801097C4; } // 80109794
  c->r[3]=c->r[0]|c->r[0]; // 80109798
  c->r[4]=c->r[1]+0x00000010u; // 8010979C
  c->r[5]=0u+0x00000000u; // 801097A0
  c->r[6]=0u+0x00000000u; // 801097A4
  c->r[7]=0u+0x00000000u; // 801097A8
  c->lr=0x801097B0u; f_80194FC0(c); // 801097AC
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[1]=c->ps1[1]=RF32(ea);} // 801097B0
  {uint32_t ea=c->r[2]+0xFFFFA160u; c->f[0]=c->ps1[0]=RF32(ea);} // 801097B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801097B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801097BC
  goto L_801097F0; // 801097C0
L_801097C4:;
  c->r[3]=R32(c->r[4]+0x00000030u); // 801097C4
  cmps(c,0,(int32_t)c->r[3],0); // 801097C8
  if (crb(c,2)) { goto L_801097E8; } // 801097CC
  c->r[4]=c->r[1]+0x00000010u; // 801097D0
  c->r[5]=c->r[1]+0x0000000Cu; // 801097D4
  c->r[6]=c->r[1]+0x00000014u; // 801097D8
  c->r[7]=0u+0x00000000u; // 801097DC
  c->lr=0x801097E4u; f_80131510(c); // 801097E0
  goto L_801097F0; // 801097E4
L_801097E8:;
  c->r[3]=0u+0x00000000u; // 801097E8
  goto L_80109990; // 801097EC
L_801097F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801097F0
  if (crb(c,2)) { goto L_801097FC; } // 801097F4
  goto L_80109990; // 801097F8
L_801097FC:;
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[27]); // 801097FC
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80109800
  c->r[4]=R32(c->r[28]+0x00000004u); // 80109804
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109808
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 8010980C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80109810
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80109814
  {uint32_t ea=c->r[4]+0x00000110u; c->f[31]=c->ps1[31]=RF32(ea);} // 80109818
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8010981C
  {uint32_t ea=c->r[4]+0x00000114u; c->f[30]=c->ps1[30]=RF32(ea);} // 80109820
  c->ctr=c->r[12]; // 80109824
  if (true) { c->lr=0x8010982Cu; dispatch(c,c->ctr); } // 80109828
  cmps(c,0,(int32_t)c->r[3],0); // 8010982C
  if (crb(c,2)) { goto L_80109838; } // 80109830
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[28]=c->ps1[28]=RF32(ea);} // 80109834
L_80109838:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80109838
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010983C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 80109840
  c->r[3]=R32(c->r[29]+0x00000034u); // 80109844
  c->r[0]=R32(c->r[29]+0x00000038u); // 80109848
  c->f[29]=c->ps1[29]=S(c->f[27]*c->f[1]); // 8010984C
  cmpu(c,0,c->r[3],c->r[0]); // 80109850
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 80109854
  if (crb(c,2)) { goto L_80109870; } // 80109858
  {uint32_t ea=c->r[2]+0xFFFFA164u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010985C
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[0]);} // 80109860
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 80109864
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 80109868
  W32(c->r[29]+0x00000038u,c->r[3]); // 8010986C
L_80109870:;
  {uint32_t ea=c->r[29]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80109870
  fcmp(c,0,c->f[28],c->f[0]); // 80109874
  if (crb(c,2)) { goto L_801098A0; } // 80109878
  c->f[1]=c->f[28]; // 8010987C
  c->r[3]=R32(c->r[29]+0x00000034u); // 80109880
  c->lr=0x80109888u; f_80175AA0(c); // 80109884
  cmps(c,0,(int32_t)c->r[3],0); // 80109888
  if (crb(c,2)) { goto L_8010989C; } // 8010988C
  cmps(c,0,(int32_t)c->r[3],36); // 80109890
  if (crb(c,2)) { goto L_8010989C; } // 80109894
  goto L_80109990; // 80109898
L_8010989C:;
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[28]);} // 8010989C
L_801098A0:;
  {uint32_t ea=c->r[29]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801098A0
  fcmp(c,0,c->f[29],c->f[0]); // 801098A4
  if (crb(c,2)) { goto L_801098D0; } // 801098A8
  c->f[1]=c->f[29]; // 801098AC
  c->r[3]=R32(c->r[29]+0x00000034u); // 801098B0
  c->lr=0x801098B8u; f_80175AF0(c); // 801098B4
  cmps(c,0,(int32_t)c->r[3],0); // 801098B8
  if (crb(c,2)) { goto L_801098CC; } // 801098BC
  cmps(c,0,(int32_t)c->r[3],36); // 801098C0
  if (crb(c,2)) { goto L_801098CC; } // 801098C4
  goto L_80109990; // 801098C8
L_801098CC:;
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[29]);} // 801098CC
L_801098D0:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801098D0
  c->r[4]=c->r[1]+0x00000008u; // 801098D4
  c->lr=0x801098DCu; f_80176420(c); // 801098D8
  cmps(c,0,(int32_t)c->r[3],0); // 801098DC
  if (crb(c,2)) { goto L_801098F0; } // 801098E0
  cmps(c,0,(int32_t)c->r[3],36); // 801098E4
  if (crb(c,2)) { goto L_801098F0; } // 801098E8
  goto L_80109990; // 801098EC
L_801098F0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801098F0
  c->r[0]=R32(c->r[3]+0x00000040u); // 801098F4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801098F8
  if (crb(c,2)) { goto L_8010994C; } // 801098FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80109900
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80109904
  if (crb(c,2)) { goto L_8010994C; } // 80109908
  c->f[1]=c->f[31]; // 8010990C
  c->r[3]=R32(c->r[29]+0x00000034u); // 80109910
  c->lr=0x80109918u; f_801761C0(c); // 80109914
  cmps(c,0,(int32_t)c->r[3],0); // 80109918
  if (crb(c,2)) { goto L_8010992C; } // 8010991C
  cmps(c,0,(int32_t)c->r[3],36); // 80109920
  if (crb(c,2)) { goto L_8010992C; } // 80109924
  goto L_80109990; // 80109928
L_8010992C:;
  c->f[1]=c->f[30]; // 8010992C
  c->r[3]=R32(c->r[29]+0x00000034u); // 80109930
  c->lr=0x80109938u; f_80176210(c); // 80109934
  cmps(c,0,(int32_t)c->r[3],0); // 80109938
  if (crb(c,2)) { goto L_8010994C; } // 8010993C
  cmps(c,0,(int32_t)c->r[3],36); // 80109940
  if (crb(c,2)) { goto L_8010994C; } // 80109944
  goto L_80109990; // 80109948
L_8010994C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8010994C
  c->r[0]=R32(c->r[3]+0x00000040u); // 80109950
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80109954
  if (crb(c,2)) { goto L_8010998C; } // 80109958
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 8010995C
  if (crb(c,2)) { goto L_8010998C; } // 80109960
  {uint32_t ea=c->r[3]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 80109964
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80109968
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010996C
  c->r[3]=R32(c->r[29]+0x00000034u); // 80109970
  c->lr=0x80109978u; f_801760A0(c); // 80109974
  cmps(c,0,(int32_t)c->r[3],0); // 80109978
  if (crb(c,2)) { goto L_8010998C; } // 8010997C
  cmps(c,0,(int32_t)c->r[3],36); // 80109980
  if (crb(c,2)) { goto L_8010998C; } // 80109984
  goto L_80109990; // 80109988
L_8010998C:;
  c->r[3]=0u+0x00000000u; // 8010998C
L_80109990:;
  c->r[11]=c->r[1]+0x00000030u; // 80109990
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80109994
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80109998
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8010999C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801099A0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801099A4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801099A8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801099AC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801099B0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801099B4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801099B8
  c->lr=0x801099C0u; f_800C2E9C(c); // 801099BC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801099C0
  c->lr=c->r[0]; // 801099C4
  c->r[1]=c->r[1]+0x00000080u; // 801099C8
  return; // 801099CC
}

// fn_801099D0
void f_801099D0(Ctx* __restrict c) {
  trace_call(0x801099D0u);
  c->r[3]=0u+0x00000000u; // 801099D0
  return; // 801099D4
}

// fn_801099E0
void f_801099E0(Ctx* __restrict c) {
  trace_call(0x801099E0u);
  c->r[3]=0u+0x00000000u; // 801099E0
  return; // 801099E4
}

// fn_801099F0
void f_801099F0(Ctx* __restrict c) {
  trace_call(0x801099F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801099F0
  c->r[0]=c->lr; // 801099F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801099F8
  c->r[11]=c->r[1]+0x00000030u; // 801099FC
  c->lr=0x80109A04u; f_800C2E38(c); // 80109A00
  c->r[30]=R32(c->r[3]+0x00000004u); // 80109A04
  c->r[24]=c->r[3]|c->r[3]; // 80109A08
  c->r[25]=c->r[4]|c->r[4]; // 80109A0C
  c->r[3]=R32(c->r[30]+0x000000ACu); // 80109A10
  cmps(c,0,(int32_t)c->r[3],0); // 80109A14
  if (crb(c,2)) { goto L_80109A24; } // 80109A18
  c->r[0]=R32(c->r[3]+0x00000000u); // 80109A1C
  goto L_80109A28; // 80109A20
L_80109A24:;
  c->r[0]=0u+0x00000000u; // 80109A24
L_80109A28:;
  cmps(c,0,(int32_t)c->r[0],0); // 80109A28
  if (crb(c,2)) { goto L_80109A44; } // 80109A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80109A30
  if (crb(c,2)) { goto L_80109A40; } // 80109A34
  c->r[30]=R32(c->r[3]+0x00000000u); // 80109A38
  goto L_80109A44; // 80109A3C
L_80109A40:;
  c->r[30]=0u+0x00000000u; // 80109A40
L_80109A44:;
  c->r[31]=rotl(c->r[4],0)&0x00000002u; // 80109A44
  c->r[29]=0u+0x00000000u; // 80109A48
  c->r[23]=0u+0x00000000u; // 80109A4C
  goto L_80109B28; // 80109A50
L_80109A54:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80109A54
  c->r[28]=R32(c->r[3]+c->r[23]); // 80109A58
  c->r[0]=R32(c->r[28]+0x00000014u); // 80109A5C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80109A60
  if (crb(c,2)) { goto L_80109B20; } // 80109A64
  c->r[3]=R32(c->r[24]+0x00000004u); // 80109A68
  c->r[4]=c->r[29]|c->r[29]; // 80109A6C
  c->lr=0x80109A74u; f_800D99F0(c); // 80109A70
  cmps(c,0,(int32_t)c->r[3],0); // 80109A74
  if (!crb(c,2)) { goto L_80109B20; } // 80109A78
  c->r[3]=R32(c->r[30]+0x000000A8u); // 80109A7C
  c->r[26]=0u+0x00000000u; // 80109A80
  c->r[3]=R32(c->r[3]+0x00000028u); // 80109A84
  c->r[0]=R32(c->r[3]+c->r[23]); // 80109A88
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 80109A8C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80109A90
  c->r[22]=c->r[27]+c->r[0]; // 80109A94
  goto L_80109B08; // 80109A98
L_80109A9C:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 80109A9C
  c->r[4]=0u+0x00000000u; // 80109AA0
  if (crb(c,0)) { goto L_80109AB8; } // 80109AA4
  c->r[3]=R32(c->r[24]+0x00000004u); // 80109AA8
  c->r[0]=R32(c->r[3]+0x00000060u); // 80109AAC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80109AB0
  if (crb(c,2)) { goto L_80109ABC; } // 80109AB4
L_80109AB8:;
  c->r[4]=0u+0x00000001u; // 80109AB8
L_80109ABC:;
  c->r[6]=R32(c->r[24]+0x00000004u); // 80109ABC
  cmps(c,0,(int32_t)c->r[4],0); // 80109AC0
  c->r[0]=0u+0x00000020u; // 80109AC4
  c->r[3]=R32(c->r[6]+0x00000040u); // 80109AC8
  if (crb(c,2)) { goto L_80109AD4; } // 80109ACC
  c->r[0]=0u+0x00000040u; // 80109AD0
L_80109AD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80109AD4
  c->r[4]=c->r[0]|c->r[3]; // 80109AD8
  if (crb(c,2)) { goto L_80109AE8; } // 80109ADC
  c->r[3]=0u+0x00000018u; // 80109AE0
  goto L_80109B3C; // 80109AE4
L_80109AE8:;
  c->r[7]=R32(c->r[6]+0x00000028u); // 80109AE8
  c->r[3]=c->r[28]|c->r[28]; // 80109AEC
  c->r[5]=c->r[25]|c->r[25]; // 80109AF0
  c->lr=0x80109AF8u; f_80112530(c); // 80109AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80109AF8
  if (crb(c,2)) { goto L_80109B04; } // 80109AFC
  goto L_80109B3C; // 80109B00
L_80109B04:;
  c->r[26]=c->r[26]+0x00000001u; // 80109B04
L_80109B08:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[22]); // 80109B08
  if (crb(c,0)) { IRQCHK(c); goto L_80109A9C; } // 80109B0C
  c->r[3]=R32(c->r[24]+0x00000004u); // 80109B10
  c->r[4]=c->r[29]|c->r[29]; // 80109B14
  c->r[5]=0u+0x00000001u; // 80109B18
  c->lr=0x80109B20u; f_800D9A60(c); // 80109B1C
L_80109B20:;
  c->r[29]=c->r[29]+0x00000001u; // 80109B20
  c->r[23]=c->r[23]+0x00000004u; // 80109B24
L_80109B28:;
  c->r[3]=R32(c->r[30]+0x000000A8u); // 80109B28
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80109B2C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80109B30
  if (crb(c,0)) { IRQCHK(c); goto L_80109A54; } // 80109B34
  c->r[3]=0u+0x00000000u; // 80109B38
L_80109B3C:;
  c->r[11]=c->r[1]+0x00000030u; // 80109B3C
  c->lr=0x80109B44u; f_800C2E84(c); // 80109B40
  c->r[0]=R32(c->r[1]+0x00000034u); // 80109B44
  c->lr=c->r[0]; // 80109B48
  c->r[1]=c->r[1]+0x00000030u; // 80109B4C
  return; // 80109B50
}

// fn_80109B60
void f_80109B60(Ctx* __restrict c) {
  trace_call(0x80109B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109B60
  c->r[0]=c->lr; // 80109B64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109B68
  c->r[11]=c->r[1]+0x00000020u; // 80109B6C
  c->lr=0x80109B74u; f_800C2E54(c); // 80109B70
  c->r[30]=R32(c->r[3]+0x00000010u); // 80109B74
  c->r[4]=R32(c->r[30]+0x00000024u); // 80109B78
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80109B7C
  if (!crb(c,2)) { goto L_80109B8C; } // 80109B80
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80109B84
  if (crb(c,2)) { goto L_80109BE0; } // 80109B88
L_80109B8C:;
  c->r[0]=R32(c->r[30]+0x00000034u); // 80109B8C
  cmps(c,0,(int32_t)c->r[0],0); // 80109B90
  if (crb(c,2)) { goto L_80109BCC; } // 80109B94
  c->r[7]=R32(c->r[3]+0x00000004u); // 80109B98
  c->r[12]=R32(c->r[7]+0x00000074u); // 80109B9C
  cmps(c,0,(int32_t)c->r[12],0); // 80109BA0
  if (crb(c,2)) { goto L_80109BCC; } // 80109BA4
  c->r[5]=R32(c->r[30]+0x00000014u); // 80109BA8
  c->r[4]=0u+0x00000002u; // 80109BAC
  c->r[3]=R32(c->r[7]+0x00000018u); // 80109BB0
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80109BB4
  c->r[6]=R32(c->r[30]+0x00000040u); // 80109BB8
  c->r[5]=R32(c->r[5]+0x00000010u); // 80109BBC
  c->r[7]=R32(c->r[7]+0x00000078u); // 80109BC0
  c->ctr=c->r[12]; // 80109BC4
  if (true) { c->lr=0x80109BCCu; dispatch(c,c->ctr); } // 80109BC8
L_80109BCC:;
  c->r[3]=c->r[30]|c->r[30]; // 80109BCC
  c->lr=0x80109BD4u; f_8010E340(c); // 80109BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80109BD4
  if (crb(c,2)) { goto L_80109C20; } // 80109BD8
  goto L_80109C24; // 80109BDC
L_80109BE0:;
  c->r[29]=R32(c->r[30]+0x00000080u); // 80109BE0
  c->r[31]=c->r[30]+0x00000080u; // 80109BE4
  goto L_80109C10; // 80109BE8
L_80109BEC:;
  c->r[3]=c->r[29]|c->r[29]; // 80109BEC
  c->lr=0x80109BF4u; f_8010E340(c); // 80109BF0
  cmps(c,0,(int32_t)c->r[3],0); // 80109BF4
  if (crb(c,2)) { goto L_80109C00; } // 80109BF8
  goto L_80109C24; // 80109BFC
L_80109C00:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 80109C00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80109C04
  W32(c->r[29]+0x00000024u,c->r[0]); // 80109C08
  c->r[29]=R32(c->r[29]+0x00000000u); // 80109C0C
L_80109C10:;
  cmpu(c,0,c->r[29],c->r[31]); // 80109C10
  if (!crb(c,2)) { IRQCHK(c); goto L_80109BEC; } // 80109C14
  c->r[0]=0u+0x00000000u; // 80109C18
  W32(c->r[30]+0x00000058u,c->r[0]); // 80109C1C
L_80109C20:;
  c->r[3]=0u+0x00000000u; // 80109C20
L_80109C24:;
  c->r[11]=c->r[1]+0x00000020u; // 80109C24
  c->lr=0x80109C2Cu; f_800C2EA0(c); // 80109C28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109C2C
  c->lr=c->r[0]; // 80109C30
  c->r[1]=c->r[1]+0x00000020u; // 80109C34
  return; // 80109C38
}

// fn_80109C40
void f_80109C40(Ctx* __restrict c) {
  trace_call(0x80109C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109C40
  c->r[0]=c->lr; // 80109C44
  W32(c->r[1]+0x00000054u,c->r[0]); // 80109C48
  c->r[11]=c->r[1]+0x00000050u; // 80109C4C
  c->lr=0x80109C54u; f_800C2E1C(c); // 80109C50
  c->r[31]=c->r[1]|c->r[1]; // 80109C54
  c->r[4]=R32(c->r[13]+0xFFFF9830u); // 80109C58
  c->r[30]=c->r[3]|c->r[3]; // 80109C5C
  c->r[27]=0u+0x00000000u; // 80109C60
  c->r[29]=0u+0x00000000u; // 80109C64
  c->r[3]=c->r[4]+0x00000048u; // 80109C68
  c->r[4]=R32(c->r[4]+0x00000048u); // 80109C6C
  goto L_80109C7C; // 80109C70
L_80109C74:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80109C74
  c->r[29]=c->r[29]+0x00000001u; // 80109C78
L_80109C7C:;
  cmpu(c,0,c->r[4],c->r[3]); // 80109C7C
  if (!crb(c,2)) { IRQCHK(c); goto L_80109C74; } // 80109C80
  c->r[17]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80109C84
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109C88
  c->r[26]=0u-c->r[17]; // 80109C8C
  c->r[26]=rotl(c->r[26],0)&0xFFFFFFF8u; // 80109C90
  {uint32_t ea=c->r[1]+c->r[26]; W32(ea,c->r[0]); c->r[1]=ea;} // 80109C94
  c->r[25]=0u-c->r[17]; // 80109C98
  c->r[25]=rotl(c->r[25],0)&0xFFFFFFF8u; // 80109C9C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109CA0
  c->r[26]=c->r[1]+0x00000008u; // 80109CA4
  {uint32_t ea=c->r[1]+c->r[25]; W32(ea,c->r[0]); c->r[1]=ea;} // 80109CA8
  c->r[5]=c->r[17]|c->r[17]; // 80109CAC
  c->r[4]=0u+0x00000000u; // 80109CB0
  c->r[25]=c->r[1]+0x00000008u; // 80109CB4
  c->r[3]=c->r[25]|c->r[25]; // 80109CB8
  c->lr=0x80109CC0u; f_80004350(c); // 80109CBC
  c->r[3]=c->r[26]|c->r[26]; // 80109CC0
  c->r[5]=c->r[17]|c->r[17]; // 80109CC4
  c->r[4]=0u+0x00000000u; // 80109CC8
  c->lr=0x80109CD0u; f_80004350(c); // 80109CCC
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109CD0
  c->r[4]=0u+0x00000000u; // 80109CD4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[0]); c->r[1]=ea;} // 80109CD8
  c->r[5]=0u+0x00000004u; // 80109CDC
  c->r[24]=c->r[1]+0x00000008u; // 80109CE0
  c->r[3]=c->r[24]|c->r[24]; // 80109CE4
  c->lr=0x80109CECu; f_80004350(c); // 80109CE8
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109CEC
  c->r[4]=0u+0x00000000u; // 80109CF0
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[0]); c->r[1]=ea;} // 80109CF4
  c->r[5]=0u+0x00000004u; // 80109CF8
  c->r[23]=c->r[1]+0x00000008u; // 80109CFC
  c->r[3]=c->r[23]|c->r[23]; // 80109D00
  c->lr=0x80109D08u; f_80004350(c); // 80109D04
  c->r[3]=R32(c->r[30]+0x00000010u); // 80109D08
  c->r[4]=0u+0x00000000u; // 80109D0C
  c->r[5]=0u+0x00000000u; // 80109D10
  c->r[3]=R32(c->r[3]+0x00000014u); // 80109D14
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80109D18
  W32(c->r[24]+0x00000000u,c->r[0]); // 80109D1C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80109D20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80109D24
  if (crb(c,2)) { goto L_80109D30; } // 80109D28
  c->r[4]=0u+0x00000001u; // 80109D2C
L_80109D30:;
  cmps(c,0,(int32_t)c->r[0],0); // 80109D30
  if (!crb(c,2)) { goto L_80109D3C; } // 80109D34
  c->r[5]=0u+0x00000001u; // 80109D38
L_80109D3C:;
  c->r[4]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 80109D3C
  W32(c->r[23]+0x00000000u,c->r[4]); // 80109D40
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 80109D44
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80109D48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80109D4C
  if (crb(c,2)) { goto L_80109EB4; } // 80109D50
  c->r[5]=R32(c->r[24]+0x00000000u); // 80109D54
  c->r[22]=0u+0x00000000u; // 80109D58
  c->r[3]=0u+0x00000000u; // 80109D5C
  c->r[0]=R32(c->r[5]+0x00000014u); // 80109D60
  c->ctr=c->r[0]; // 80109D64
  cmps(c,0,(int32_t)c->r[0],0); // 80109D68
  if (!crb(c,1)) { goto L_80109D8C; } // 80109D6C
L_80109D70:;
  c->r[4]=R32(c->r[5]+0x00000024u); // 80109D70
  c->r[0]=R32(c->r[4]+c->r[3]); // 80109D74
  cmps(c,0,(int32_t)c->r[0],0); // 80109D78
  if (!crb(c,2)) { goto L_80109D84; } // 80109D7C
  c->r[22]=c->r[22]+0x00000001u; // 80109D80
L_80109D84:;
  c->r[3]=c->r[3]+0x00000018u; // 80109D84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109D70; } // 80109D88
L_80109D8C:;
  c->r[5]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80109D8C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109D90
  c->r[20]=0u-c->r[5]; // 80109D94
  c->r[21]=0u+0x00000000u; // 80109D98
  c->r[20]=rotl(c->r[20],0)&0xFFFFFFF8u; // 80109D9C
  {uint32_t ea=c->r[1]+c->r[20]; W32(ea,c->r[0]); c->r[1]=ea;} // 80109DA0
  c->r[4]=0u+0x00000000u; // 80109DA4
  c->r[20]=c->r[1]+0x00000008u; // 80109DA8
  c->r[3]=c->r[20]|c->r[20]; // 80109DAC
  c->lr=0x80109DB4u; f_80004350(c); // 80109DB0
  c->r[19]=R32(c->r[24]+0x00000000u); // 80109DB4
  c->r[28]=0u+0x00000000u; // 80109DB8
  c->r[18]=0u+0x00000000u; // 80109DBC
  goto L_80109E28; // 80109DC0
L_80109DC4:;
  c->r[0]=R32(c->r[19]+0x00000024u); // 80109DC4
  c->r[16]=c->r[0]+c->r[18]; // 80109DC8
  c->r[0]=R32(c->r[18]+c->r[0]); // 80109DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80109DD0
  if (!crb(c,2)) { goto L_80109E20; } // 80109DD4
  c->r[15]=0u+0x00000000u; // 80109DD8
  c->r[17]=0u+0x00000000u; // 80109DDC
  goto L_80109E18; // 80109DE0
L_80109DE4:;
  c->r[3]=R32(c->r[20]+c->r[17]); // 80109DE4
  cmps(c,0,(int32_t)c->r[3],0); // 80109DE8
  if (!crb(c,2)) { goto L_80109E00; } // 80109DEC
  c->r[0]=R32(c->r[16]+0x00000014u); // 80109DF0
  c->r[21]=c->r[21]+0x00000001u; // 80109DF4
  W32(c->r[20]+c->r[17],c->r[0]); // 80109DF8
  goto L_80109E20; // 80109DFC
L_80109E00:;
  c->r[4]=R32(c->r[16]+0x00000014u); // 80109E00
  c->lr=0x80109E08u; f_8019DE30(c); // 80109E04
  cmps(c,0,(int32_t)c->r[3],0); // 80109E08
  if (crb(c,2)) { goto L_80109E20; } // 80109E0C
  c->r[15]=c->r[15]+0x00000001u; // 80109E10
  c->r[17]=c->r[17]+0x00000004u; // 80109E14
L_80109E18:;
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[22]); // 80109E18
  if (crb(c,0)) { IRQCHK(c); goto L_80109DE4; } // 80109E1C
L_80109E20:;
  c->r[28]=c->r[28]+0x00000001u; // 80109E20
  c->r[18]=c->r[18]+0x00000018u; // 80109E24
L_80109E28:;
  c->r[0]=R32(c->r[19]+0x00000014u); // 80109E28
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80109E2C
  if (crb(c,0)) { IRQCHK(c); goto L_80109DC4; } // 80109E30
  c->r[3]=R32(c->r[30]+0x00000004u); // 80109E34
  c->r[0]=c->r[21]+0x00000001u; // 80109E38
  c->r[5]=0u+0x80390000u; // 80109E3C
  c->r[6]=0u+0x000003DCu; // 80109E40
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80109E44
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80109E48
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 80109E4C
  c->r[7]=0u+0x00000000u; // 80109E50
  W32(c->r[3]+0x00000038u,c->r[21]); // 80109E54
  c->r[8]=0u+0x00000000u; // 80109E58
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 80109E5C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80109E60
  c->lr=0x80109E68u; f_8018F230(c); // 80109E64
  c->r[4]=R32(c->r[30]+0x00000004u); // 80109E68
  c->r[4]=R32(c->r[4]+0x000000A8u); // 80109E6C
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 80109E70
  c->r[3]=R32(c->r[30]+0x00000004u); // 80109E74
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80109E78
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80109E7C
  cmps(c,0,(int32_t)c->r[3],0); // 80109E80
  if (!crb(c,2)) { goto L_80109E90; } // 80109E84
  c->r[3]=0u+0x0000002Cu; // 80109E88
  goto L_8010A25C; // 80109E8C
L_80109E90:;
  c->r[4]=c->r[20]|c->r[20]; // 80109E90
  c->r[5]=rotl(c->r[21],2)&0xFFFFFFFCu; // 80109E94
  c->lr=0x80109E9Cu; f_80004000(c); // 80109E98
  c->r[3]=R32(c->r[30]+0x00000004u); // 80109E9C
  c->r[0]=rotl(c->r[21],2)&0xFFFFFFFCu; // 80109EA0
  c->r[4]=0u+0x00000000u; // 80109EA4
  c->r[3]=R32(c->r[3]+0x000000A8u); // 80109EA8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80109EAC
  W32(c->r[3]+c->r[0],c->r[4]); // 80109EB0
L_80109EB4:;
  c->r[9]=R32(c->r[24]+0x00000000u); // 80109EB4
  c->r[8]=0u+0x00000000u; // 80109EB8
  c->r[3]=0u+0x00000000u; // 80109EBC
  goto L_80109F54; // 80109EC0
L_80109EC4:;
  c->r[0]=R32(c->r[9]+0x00000024u); // 80109EC4
  c->r[6]=c->r[0]+c->r[3]; // 80109EC8
  c->r[0]=R32(c->r[3]+c->r[0]); // 80109ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80109ED0
  if (!crb(c,2)) { goto L_80109F4C; } // 80109ED4
  c->r[4]=0u+0x00000000u; // 80109ED8
  c->ctr=c->r[29]; // 80109EDC
  cmps(c,0,(int32_t)c->r[29],0); // 80109EE0
  if (!crb(c,1)) { goto L_80109F4C; } // 80109EE4
L_80109EE8:;
  c->r[0]=R32(c->r[26]+c->r[4]); // 80109EE8
  c->r[5]=R32(c->r[6]+0x00000008u); // 80109EEC
  cmpu(c,0,c->r[0],c->r[5]); // 80109EF0
  if (!crb(c,2)) { goto L_80109F28; } // 80109EF4
  c->r[0]=R32(c->r[23]+0x00000000u); // 80109EF8
  c->r[5]=R32(c->r[25]+c->r[4]); // 80109EFC
  c->r[6]=rotl(c->r[0],16)&0x0000FFFFu; // 80109F00
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80109F04
  c->r[7]=rotl(c->r[5],16)&0x0000FFFFu; // 80109F08
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80109F0C
  c->r[0]=c->r[5]+c->r[0]; // 80109F10
  c->r[5]=c->r[7]+c->r[6]; // 80109F14
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80109F18
  c->r[0]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 80109F1C
  W32(c->r[25]+c->r[4],c->r[0]); // 80109F20
  goto L_80109F4C; // 80109F24
L_80109F28:;
  cmps(c,0,(int32_t)c->r[0],0); // 80109F28
  if (!crb(c,2)) { goto L_80109F44; } // 80109F2C
  W32(c->r[26]+c->r[4],c->r[5]); // 80109F30
  c->r[27]=c->r[27]+0x00000001u; // 80109F34
  c->r[0]=R32(c->r[23]+0x00000000u); // 80109F38
  W32(c->r[25]+c->r[4],c->r[0]); // 80109F3C
  goto L_80109F4C; // 80109F40
L_80109F44:;
  c->r[4]=c->r[4]+0x00000004u; // 80109F44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109EE8; } // 80109F48
L_80109F4C:;
  c->r[8]=c->r[8]+0x00000001u; // 80109F4C
  c->r[3]=c->r[3]+0x00000018u; // 80109F50
L_80109F54:;
  c->r[0]=R32(c->r[9]+0x00000014u); // 80109F54
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80109F58
  if (crb(c,0)) { IRQCHK(c); goto L_80109EC4; } // 80109F5C
  c->r[20]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80109F60
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109F64
  c->r[23]=0u-c->r[20]; // 80109F68
  c->r[23]=rotl(c->r[23],0)&0xFFFFFFF8u; // 80109F6C
  {uint32_t ea=c->r[1]+c->r[23]; W32(ea,c->r[0]); c->r[1]=ea;} // 80109F70
  c->r[5]=c->r[20]|c->r[20]; // 80109F74
  c->r[4]=0u+0x00000000u; // 80109F78
  c->r[23]=c->r[1]+0x00000008u; // 80109F7C
  c->r[3]=c->r[23]|c->r[23]; // 80109F80
  c->lr=0x80109F88u; f_80004350(c); // 80109F84
  c->r[28]=0u+0x00000000u; // 80109F88
  c->r[21]=0u+0x00000000u; // 80109F8C
  goto L_8010A058; // 80109F90
L_80109F94:;
  c->r[3]=R32(c->r[25]+c->r[21]); // 80109F94
  c->r[0]=R32(c->r[1]+0x00000000u); // 80109F98
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 80109F9C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80109FA0
  c->r[19]=c->r[4]+c->r[3]; // 80109FA4
  c->r[3]=c->r[19]+0x00000001u; // 80109FA8
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80109FAC
  c->r[3]=0u-c->r[5]; // 80109FB0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 80109FB4
  {uint32_t ea=c->r[1]+c->r[3]; W32(ea,c->r[0]); c->r[1]=ea;} // 80109FB8
  c->r[4]=0u+0xFFFFFFFFu; // 80109FBC
  c->r[3]=c->r[1]+0x00000008u; // 80109FC0
  W32(c->r[23]+c->r[21],c->r[3]); // 80109FC4
  c->lr=0x80109FCCu; f_80004350(c); // 80109FC8
  c->r[7]=R32(c->r[23]+c->r[21]); // 80109FCC
  c->r[6]=0u+0x00000000u; // 80109FD0
  c->r[8]=R32(c->r[24]+0x00000000u); // 80109FD4
  c->r[3]=0u+0x00000000u; // 80109FD8
  goto L_8010A044; // 80109FDC
L_80109FE0:;
  c->r[0]=R32(c->r[8]+0x00000024u); // 80109FE0
  c->r[9]=c->r[0]+c->r[3]; // 80109FE4
  c->r[0]=R32(c->r[3]+c->r[0]); // 80109FE8
  cmps(c,0,(int32_t)c->r[0],0); // 80109FEC
  if (!crb(c,2)) { goto L_8010A03C; } // 80109FF0
  c->r[4]=R32(c->r[26]+c->r[21]); // 80109FF4
  c->r[0]=R32(c->r[9]+0x00000008u); // 80109FF8
  cmpu(c,0,c->r[4],c->r[0]); // 80109FFC
  if (!crb(c,2)) { goto L_8010A03C; } // 8010A000
  c->r[4]=0u+0x00000000u; // 8010A004
  c->ctr=c->r[19]; // 8010A008
  cmps(c,0,(int32_t)c->r[19],0); // 8010A00C
  if (!crb(c,1)) { goto L_8010A03C; } // 8010A010
L_8010A014:;
  c->r[0]=R32(c->r[7]+c->r[4]); // 8010A014
  c->r[5]=R32(c->r[9]+0x0000000Cu); // 8010A018
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8010A01C
  if (crb(c,2)) { goto L_8010A03C; } // 8010A020
  cmps(c,0,(int32_t)c->r[0],-1); // 8010A024
  if (!crb(c,2)) { goto L_8010A034; } // 8010A028
  W32(c->r[7]+c->r[4],c->r[5]); // 8010A02C
  goto L_8010A03C; // 8010A030
L_8010A034:;
  c->r[4]=c->r[4]+0x00000004u; // 8010A034
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A014; } // 8010A038
L_8010A03C:;
  c->r[6]=c->r[6]+0x00000001u; // 8010A03C
  c->r[3]=c->r[3]+0x00000018u; // 8010A040
L_8010A044:;
  c->r[0]=R32(c->r[8]+0x00000014u); // 8010A044
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8010A048
  if (crb(c,0)) { IRQCHK(c); goto L_80109FE0; } // 8010A04C
  c->r[28]=c->r[28]+0x00000001u; // 8010A050
  c->r[21]=c->r[21]+0x00000004u; // 8010A054
L_8010A058:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 8010A058
  if (crb(c,0)) { IRQCHK(c); goto L_80109F94; } // 8010A05C
  c->r[0]=c->r[27]+0x00000001u; // 8010A060
  c->r[3]=c->r[20]+c->r[20]; // 8010A064
  c->r[19]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010A068
  c->r[0]=c->r[19]+c->r[20]; // 8010A06C
  c->r[21]=c->r[3]+c->r[0]; // 8010A070
  c->r[3]=0u+0x00000000u; // 8010A074
  c->ctr=c->r[27]; // 8010A078
  cmps(c,0,(int32_t)c->r[27],0); // 8010A07C
  if (!crb(c,1)) { goto L_8010A0BC; } // 8010A080
L_8010A084:;
  c->r[6]=R32(c->r[23]+c->r[3]); // 8010A084
  c->r[5]=0u+0x00000000u; // 8010A088
  c->r[4]=0u+0x00000000u; // 8010A08C
  goto L_8010A09C; // 8010A090
L_8010A094:;
  c->r[5]=c->r[5]+0x00000001u; // 8010A094
  c->r[4]=c->r[4]+0x00000004u; // 8010A098
L_8010A09C:;
  c->r[0]=R32(c->r[6]+c->r[4]); // 8010A09C
  cmps(c,0,(int32_t)c->r[0],-1); // 8010A0A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A094; } // 8010A0A4
  c->r[0]=c->r[5]+0x00000001u; // 8010A0A8
  c->r[3]=c->r[3]+0x00000004u; // 8010A0AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010A0B0
  c->r[21]=c->r[21]+c->r[0]; // 8010A0B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A084; } // 8010A0B8
L_8010A0BC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A0BC
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8010A0C0
  c->r[4]=R32(c->r[3]+0x00000020u); // 8010A0C4
  cmps(c,0,(int32_t)c->r[4],0); // 8010A0C8
  if (crb(c,2)) { goto L_8010A0EC; } // 8010A0CC
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010A0D0
  c->r[5]=0u+0x80390000u; // 8010A0D4
  c->r[6]=0u+0x00000451u; // 8010A0D8
  c->r[7]=0u+0x00000000u; // 8010A0DC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010A0E0
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 8010A0E4
  c->lr=0x8010A0ECu; f_8018F5F0(c); // 8010A0E8
L_8010A0EC:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010A0EC
  c->r[5]=0u+0x80390000u; // 8010A0F0
  c->r[4]=c->r[21]|c->r[21]; // 8010A0F4
  c->r[6]=0u+0x00000454u; // 8010A0F8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010A0FC
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 8010A100
  c->r[7]=0u+0x00000000u; // 8010A104
  c->r[8]=0u+0x00000000u; // 8010A108
  c->lr=0x8010A110u; f_8018F230(c); // 8010A10C
  cmps(c,0,(int32_t)c->r[3],0); // 8010A110
  c->r[17]=c->r[3]|c->r[3]; // 8010A114
  if (!crb(c,2)) { goto L_8010A124; } // 8010A118
  c->r[3]=0u+0x0000002Cu; // 8010A11C
  goto L_8010A25C; // 8010A120
L_8010A124:;
  c->r[6]=R32(c->r[30]+0x00000004u); // 8010A124
  c->r[4]=c->r[26]|c->r[26]; // 8010A128
  c->r[5]=c->r[20]|c->r[20]; // 8010A12C
  c->r[6]=R32(c->r[6]+0x000000A8u); // 8010A130
  W32(c->r[6]+0x00000020u,c->r[3]); // 8010A134
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A138
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8010A13C
  c->r[3]=R32(c->r[3]+0x00000020u); // 8010A140
  c->lr=0x8010A148u; f_80004000(c); // 8010A144
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A148
  c->r[22]=c->r[17]+c->r[20]; // 8010A14C
  c->r[4]=c->r[25]|c->r[25]; // 8010A150
  c->r[5]=c->r[20]|c->r[20]; // 8010A154
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8010A158
  W32(c->r[3]+0x00000028u,c->r[22]); // 8010A15C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A160
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8010A164
  c->r[3]=R32(c->r[3]+0x00000028u); // 8010A168
  c->lr=0x8010A170u; f_80004000(c); // 8010A16C
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A170
  c->r[22]=c->r[22]+c->r[20]; // 8010A174
  c->r[6]=0u+0x00000000u; // 8010A178
  c->r[3]=0u+0x00000000u; // 8010A17C
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010A180
  W32(c->r[4]+0x00000024u,c->r[22]); // 8010A184
  c->ctr=c->r[27]; // 8010A188
  cmps(c,0,(int32_t)c->r[27],0); // 8010A18C
  if (!crb(c,1)) { goto L_8010A1BC; } // 8010A190
L_8010A194:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A194
  c->r[6]=c->r[6]+0x00000001u; // 8010A198
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010A19C
  c->r[5]=R32(c->r[4]+0x00000020u); // 8010A1A0
  c->r[4]=R32(c->r[4]+0x00000024u); // 8010A1A4
  c->r[5]=R32(c->r[5]+c->r[3]); // 8010A1A8
  c->r[0]=R32(c->r[5]+0x00000018u); // 8010A1AC
  W32(c->r[4]+c->r[3],c->r[0]); // 8010A1B0
  c->r[3]=c->r[3]+0x00000004u; // 8010A1B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A194; } // 8010A1B8
L_8010A1BC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A1BC
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8010A1C0
  c->r[22]=c->r[22]+c->r[19]; // 8010A1C4
  c->r[6]=0u+0x00000000u; // 8010A1C8
  c->r[5]=R32(c->r[3]+0x000000A8u); // 8010A1CC
  c->r[7]=c->r[22]+c->r[20]; // 8010A1D0
  c->r[3]=0u+0x00000000u; // 8010A1D4
  c->r[0]=0u+0xFFFFFFFFu; // 8010A1D8
  c->r[5]=R32(c->r[5]+0x00000024u); // 8010A1DC
  W32(c->r[5]+c->r[4],c->r[6]); // 8010A1E0
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A1E4
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010A1E8
  W32(c->r[4]+0x0000002Cu,c->r[22]); // 8010A1EC
  c->ctr=c->r[27]; // 8010A1F0
  cmps(c,0,(int32_t)c->r[27],0); // 8010A1F4
  if (!crb(c,1)) { goto L_8010A240; } // 8010A1F8
L_8010A1FC:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 8010A1FC
  c->r[4]=0u+0x00000000u; // 8010A200
  c->r[6]=R32(c->r[23]+c->r[3]); // 8010A204
  c->r[5]=R32(c->r[5]+0x000000A8u); // 8010A208
  c->r[5]=R32(c->r[5]+0x0000002Cu); // 8010A20C
  W32(c->r[5]+c->r[3],c->r[7]); // 8010A210
  goto L_8010A224; // 8010A214
L_8010A218:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 8010A218
  c->r[7]=c->r[7]+0x00000004u; // 8010A21C
  c->r[4]=c->r[4]+0x00000004u; // 8010A220
L_8010A224:;
  c->r[5]=R32(c->r[6]+c->r[4]); // 8010A224
  cmps(c,0,(int32_t)c->r[5],-1); // 8010A228
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A218; } // 8010A22C
  W32(c->r[7]+0x00000000u,c->r[0]); // 8010A230
  c->r[7]=c->r[7]+0x00000004u; // 8010A234
  c->r[3]=c->r[3]+0x00000004u; // 8010A238
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A1FC; } // 8010A23C
L_8010A240:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A240
  c->r[3]=0u+0x00000000u; // 8010A244
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010A248
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 8010A24C
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A250
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010A254
  W32(c->r[4]+0x00000034u,c->r[21]); // 8010A258
L_8010A25C:;
  c->r[10]=c->r[31]|c->r[31]; // 8010A25C
  c->r[11]=c->r[10]+0x00000050u; // 8010A260
  c->lr=0x8010A268u; f_800C2E68(c); // 8010A264
  c->r[10]=R32(c->r[1]+0x00000000u); // 8010A268
  c->r[0]=R32(c->r[10]+0x00000004u); // 8010A26C
  c->r[1]=c->r[10]|c->r[10]; // 8010A270
  c->lr=c->r[0]; // 8010A274
  return; // 8010A278
}

// fn_8010A280
void f_8010A280(Ctx* __restrict c) {
  trace_call(0x8010A280u);
  c->r[3]=0u+0x00000000u; // 8010A280
  return; // 8010A284
}

// fn_8010A290
void f_8010A290(Ctx* __restrict c) {
  trace_call(0x8010A290u);
  c->r[6]=R32(c->r[3]+0x00000010u); // 8010A290
  c->r[3]=R32(c->r[6]+0x00000014u); // 8010A294
  c->r[5]=R32(c->r[6]+0x00000024u); // 8010A298
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010A29C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8010A2A0
  c->r[7]=R32(c->r[3]+0x00000014u); // 8010A2A4
  if (!crb(c,2)) { goto L_8010A2B4; } // 8010A2A8
  c->r[0]=rotl(c->r[5],0)&0x00000010u; cr0(c,c->r[0]); // 8010A2AC
  if (crb(c,2)) { goto L_8010A2C4; } // 8010A2B0
L_8010A2B4:;
  c->r[0]=0u+0xFFFFFFFFu; // 8010A2B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010A2B8
  c->r[3]=0u+0x00000000u; // 8010A2BC
  return; // 8010A2C0
L_8010A2C4:;
  c->r[3]=0u+0x00000000u; // 8010A2C4
  c->ctr=c->r[7]; // 8010A2C8
  cmps(c,0,(int32_t)c->r[7],0); // 8010A2CC
  if (!crb(c,1)) { goto L_8010A328; } // 8010A2D0
L_8010A2D4:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 8010A2D4
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010A2D8
  c->r[0]=R32(c->r[5]+0x00000024u); // 8010A2DC
  c->r[5]=c->r[0]+c->r[3]; // 8010A2E0
  c->r[0]=R32(c->r[3]+c->r[0]); // 8010A2E4
  cmps(c,0,(int32_t)c->r[0],0); // 8010A2E8
  if (!crb(c,2)) { goto L_8010A308; } // 8010A2EC
  c->r[5]=R32(c->r[5]+0x00000010u); // 8010A2F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8010A2F4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8010A2F8
  if (!crb(c,1)) { goto L_8010A320; } // 8010A2FC
  W32(c->r[4]+0x00000000u,c->r[5]); // 8010A300
  goto L_8010A320; // 8010A304
L_8010A308:;
  cmps(c,0,(int32_t)c->r[0],2); // 8010A308
  if (crb(c,2)) { goto L_8010A320; } // 8010A30C
  c->r[0]=0u+0xFFFFFFFFu; // 8010A310
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010A314
  c->r[3]=0u+0x00000000u; // 8010A318
  return; // 8010A31C
L_8010A320:;
  c->r[3]=c->r[3]+0x00000018u; // 8010A320
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A2D4; } // 8010A324
L_8010A328:;
  c->r[3]=0u+0x00000000u; // 8010A328
  return; // 8010A32C
}

// fn_8010A330
void f_8010A330(Ctx* __restrict c) {
  trace_call(0x8010A330u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A330
  c->r[0]=c->lr; // 8010A334
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010A338
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010A33C
  c->r[31]=c->r[4]|c->r[4]; // 8010A340
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010A344
  c->r[30]=c->r[3]|c->r[3]; // 8010A348
  c->r[3]=c->r[1]+0x00000008u; // 8010A34C
  c->lr=0x8010A354u; f_80115D90(c); // 8010A350
  cmps(c,0,(int32_t)c->r[3],0); // 8010A354
  if (crb(c,2)) { goto L_8010A360; } // 8010A358
  goto L_8010A40C; // 8010A35C
L_8010A360:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8010A360
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8010A364
  c->r[6]=R32(c->r[3]+0x00000058u); // 8010A368
  W32(c->r[31]+0x00000000u,c->r[6]); // 8010A36C
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A370
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8010A374
  c->r[3]=R32(c->r[4]+0x00000060u); // 8010A378
  W32(c->r[1]+0x00000018u,c->r[6]); // 8010A37C
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 8010A380
  if (crb(c,2)) { goto L_8010A3D8; } // 8010A384
  c->r[0]=rotl(c->r[3],0)&0x00002000u; cr0(c,c->r[0]); // 8010A388
  if (!crb(c,2)) { goto L_8010A3D8; } // 8010A38C
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010A390
  c->r[7]=R32(c->r[3]+0x00000018u); // 8010A394
  cmps(c,0,(int32_t)c->r[7],0); // 8010A398
  if (crb(c,2)) { goto L_8010A3D0; } // 8010A39C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8010A3A0
  c->r[5]=R32(c->r[4]+0x00000050u); // 8010A3A4
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A3A8
  c->r[0]=c->r[0]-c->r[7]; // 8010A3AC
  c->r[4]=R32(c->r[4]+0x00000054u); // 8010A3B0
  c->r[0]=c->r[6]+c->r[0]; // 8010A3B4
  c->r[3]=c->r[3]-c->r[5]; // 8010A3B8
  W32(c->r[1]+0x00000010u,c->r[5]); // 8010A3BC
  c->r[0]=c->r[3]+c->r[0]; // 8010A3C0
  W32(c->r[1]+0x00000014u,c->r[4]); // 8010A3C4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010A3C8
  goto L_8010A3D8; // 8010A3CC
L_8010A3D0:;
  c->r[0]=0u+0x00000000u; // 8010A3D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010A3D4
L_8010A3D8:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8010A3D8
  c->r[3]=0u+0x00000000u; // 8010A3DC
  {uint32_t ea=c->r[2]+0xFFFFA16Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A3E0
  {uint32_t ea=c->r[4]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010A3E4
  {uint32_t ea=c->r[2]+0xFFFFA168u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A3E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8010A3EC
  c->r[4]=R32(c->r[31]+0x00000000u); // 8010A3F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8010A3F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8010A3F8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8010A3FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A400
  c->r[0]=c->r[4]+c->r[0]; // 8010A404
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010A408
L_8010A40C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010A40C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010A410
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010A414
  c->lr=c->r[0]; // 8010A418
  c->r[1]=c->r[1]+0x00000030u; // 8010A41C
  return; // 8010A420
}

// fn_8010A430
void f_8010A430(Ctx* __restrict c) {
  trace_call(0x8010A430u);
  cmps(c,0,(int32_t)c->r[4],0); // 8010A430
  if (!crb(c,2)) { goto L_8010A440; } // 8010A434
  c->r[3]=0u+0x00000025u; // 8010A438
  return; // 8010A43C
L_8010A440:;
  c->r[0]=0u+0x00000000u; // 8010A440
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010A444
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A448
  cmps(c,0,(int32_t)c->r[3],0); // 8010A44C
  if (crb(c,2)) { goto L_8010A48C; } // 8010A450
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010A454
  c->r[0]=c->r[3]+0x00000080u; // 8010A458
  c->r[7]=R32(c->r[3]+0x00000080u); // 8010A45C
  c->r[3]=addc(c,c->r[5],0xFFFFFFFFu,0); // 8010A460
  c->r[6]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8010A464
  goto L_8010A480; // 8010A468
L_8010A46C:;
  c->r[5]=R32(c->r[7]+0x00000034u); // 8010A46C
  c->r[7]=R32(c->r[7]+0x00000000u); // 8010A470
  c->r[3]=addc(c,c->r[5],0xFFFFFFFFu,0); // 8010A474
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8010A478
  c->r[6]=c->r[6]+c->r[3]; // 8010A47C
L_8010A480:;
  cmpu(c,0,c->r[7],c->r[0]); // 8010A480
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A46C; } // 8010A484
  W32(c->r[4]+0x00000000u,c->r[6]); // 8010A488
L_8010A48C:;
  c->r[3]=0u+0x00000000u; // 8010A48C
  return; // 8010A490
}

// fn_8010A4A0
void f_8010A4A0(Ctx* __restrict c) {
  trace_call(0x8010A4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A4A0
  c->r[0]=c->lr; // 8010A4A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010A4A8
  c->r[11]=c->r[1]+0x00000030u; // 8010A4AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8010A4B0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8010A4B4
  c->lr=0x8010A4BCu; f_800C2E54(c); // 8010A4B8
  cmps(c,0,(int32_t)c->r[4],0); // 8010A4BC
  c->r[29]=c->r[4]|c->r[4]; // 8010A4C0
  if (!crb(c,2)) { goto L_8010A4D0; } // 8010A4C4
  c->r[3]=0u+0x00000025u; // 8010A4C8
  goto L_8010A558; // 8010A4CC
L_8010A4D0:;
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010A4D0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010A4D4
  c->lr=0x8010A4DCu; f_801041F0(c); // 8010A4D8
  cmps(c,0,(int32_t)c->r[3],0); // 8010A4DC
  c->r[31]=c->r[3]|c->r[3]; // 8010A4E0
  if (crb(c,2)) { goto L_8010A550; } // 8010A4E4
  c->r[4]=c->r[1]+0x00000010u; // 8010A4E8
  c->lr=0x8010A4F0u; f_80187000(c); // 8010A4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8010A4F0
  if (crb(c,2)) { goto L_8010A4FC; } // 8010A4F4
  goto L_8010A558; // 8010A4F8
L_8010A4FC:;
  c->r[30]=0u+0x00000000u; // 8010A4FC
  goto L_8010A544; // 8010A500
L_8010A504:;
  c->r[3]=c->r[31]|c->r[31]; // 8010A504
  c->r[4]=c->r[30]|c->r[30]; // 8010A508
  c->r[5]=c->r[1]+0x0000000Cu; // 8010A50C
  c->lr=0x8010A514u; f_80187050(c); // 8010A510
  cmps(c,0,(int32_t)c->r[3],0); // 8010A514
  if (crb(c,2)) { goto L_8010A520; } // 8010A518
  goto L_8010A558; // 8010A51C
L_8010A520:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8010A520
  c->r[4]=c->r[1]+0x00000008u; // 8010A524
  c->lr=0x8010A52Cu; f_80176310(c); // 8010A528
  cmps(c,0,(int32_t)c->r[3],0); // 8010A52C
  if (crb(c,2)) { goto L_8010A538; } // 8010A530
  goto L_8010A558; // 8010A534
L_8010A538:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A538
  c->r[30]=c->r[30]+0x00000001u; // 8010A53C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8010A540
L_8010A544:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010A544
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010A548
  if (crb(c,0)) { IRQCHK(c); goto L_8010A504; } // 8010A54C
L_8010A550:;
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[31]);} // 8010A550
  c->r[3]=0u+0x00000000u; // 8010A554
L_8010A558:;
  c->r[11]=c->r[1]+0x00000030u; // 8010A558
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010A55C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010A560
  c->lr=0x8010A568u; f_800C2EA0(c); // 8010A564
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010A568
  c->lr=c->r[0]; // 8010A56C
  c->r[1]=c->r[1]+0x00000040u; // 8010A570
  return; // 8010A574
}

// fn_8010A580
void f_8010A580(Ctx* __restrict c) {
  trace_call(0x8010A580u);
  cmps(c,0,(int32_t)c->r[4],0); // 8010A580
  if (!crb(c,2)) { goto L_8010A590; } // 8010A584
  c->r[3]=0u+0x00000025u; // 8010A588
  return; // 8010A58C
L_8010A590:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 8010A590
  c->r[3]=0u+0x00000000u; // 8010A594
  c->r[5]=R32(c->r[5]+0x00000014u); // 8010A598
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A59C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8010A5A0
  return; // 8010A5A4
}

// fn_8010A5B0
void f_8010A5B0(Ctx* __restrict c) {
  trace_call(0x8010A5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A5B0
  c->r[0]=c->lr; // 8010A5B4
  {uint32_t ea=c->r[2]+0xFFFFA148u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A5BC
  c->r[0]=0u+0xFFFFFE76u; // 8010A5C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A5C4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8010A5C8
  c->r[3]=0u+0x00000000u; // 8010A5CC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8010A5D0
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 8010A5D4
  c->r[3]=R32(c->r[31]+0x00000024u); // 8010A5D8
  c->r[0]=c->r[3]&c->r[0]; // 8010A5DC
  c->r[0]=c->r[0]|0x00000400u; // 8010A5E0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8010A5E4
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010A5E8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010A5EC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010A5F0
  c->lr=0x8010A5F8u; f_800E77D0(c); // 8010A5F4
  cmps(c,0,(int32_t)c->r[3],3); // 8010A5F8
  if (!crb(c,2)) { goto L_8010A608; } // 8010A5FC
  c->r[0]=0u+0xFFFFFFFFu; // 8010A600
  W32(c->r[31]+0x00000044u,c->r[0]); // 8010A604
L_8010A608:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A608
  c->r[3]=0u+0x00000000u; // 8010A60C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A610
  c->lr=c->r[0]; // 8010A614
  c->r[1]=c->r[1]+0x00000010u; // 8010A618
  return; // 8010A61C
}

// fn_8010A620
void f_8010A620(Ctx* __restrict c) {
  trace_call(0x8010A620u);
  c->r[3]=0u+0x0000005Au; // 8010A620
  return; // 8010A624
}

// fn_8010A630
void f_8010A630(Ctx* __restrict c) {
  trace_call(0x8010A630u);
  c->r[3]=0u+0x0000005Au; // 8010A630
  return; // 8010A634
}

// fn_8010A640
void f_8010A640(Ctx* __restrict c) {
  trace_call(0x8010A640u);
  c->r[0]=0u+0x00000000u; // 8010A640
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010A644
  c->r[3]=0u+0x00000000u; // 8010A648
  return; // 8010A64C
}

// fn_8010A650
void f_8010A650(Ctx* __restrict c) {
  trace_call(0x8010A650u);
  c->r[4]=c->r[3]|c->r[3]; // 8010A650
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A654
  c->r[4]=R32(c->r[4]+0x00000004u); // 8010A658
  c->r[4]=R32(c->r[4]+0x00000040u); // 8010A65C
  f_8010F540(c); return; // 8010A660
}

// fn_8010A670
void f_8010A670(Ctx* __restrict c) {
  trace_call(0x8010A670u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A670
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A674
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010A678
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A67C
  f_8010F5C0(c); return; // 8010A680
}

// fn_8010A690
void f_8010A690(Ctx* __restrict c) {
  trace_call(0x8010A690u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A690
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A694
  {uint32_t ea=c->r[4]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010A698
  {uint32_t ea=c->r[4]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010A69C
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A6A0
  f_8010F660(c); return; // 8010A6A4
}

// fn_8010A6B0
void f_8010A6B0(Ctx* __restrict c) {
  trace_call(0x8010A6B0u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A6B0
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A6B4
  {uint32_t ea=c->r[4]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A6B8
  f_8010F700(c); return; // 8010A6BC
}

// fn_8010A6C0
void f_8010A6C0(Ctx* __restrict c) {
  trace_call(0x8010A6C0u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A6C0
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A6C4
  {uint32_t ea=c->r[4]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A6C8
  f_8010F790(c); return; // 8010A6CC
}

// fn_8010A6D0
void f_8010A6D0(Ctx* __restrict c) {
  trace_call(0x8010A6D0u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A6D0
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A6D4
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A6D8
  f_8010F8E0(c); return; // 8010A6DC
}

// fn_8010A6E0
void f_8010A6E0(Ctx* __restrict c) {
  trace_call(0x8010A6E0u);
  c->r[3]=0u+0x0000005Au; // 8010A6E0
  return; // 8010A6E4
}

// fn_8010A6F0
void f_8010A6F0(Ctx* __restrict c) {
  trace_call(0x8010A6F0u);
  c->r[3]=0u+0x0000005Au; // 8010A6F0
  return; // 8010A6F4
}

// fn_8010A700
void f_8010A700(Ctx* __restrict c) {
  trace_call(0x8010A700u);
  c->r[3]=0u+0x00000025u; // 8010A700
  return; // 8010A704
}

// fn_8010A710
void f_8010A710(Ctx* __restrict c) {
  trace_call(0x8010A710u);
  c->r[3]=0u+0x00000025u; // 8010A710
  return; // 8010A714
}

// fn_8010A720
void f_8010A720(Ctx* __restrict c) {
  trace_call(0x8010A720u);
  c->r[0]=0u+0x00000000u; // 8010A720
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010A724
  c->r[3]=0u+0x00000000u; // 8010A728
  return; // 8010A72C
}

// fn_8010A730
void f_8010A730(Ctx* __restrict c) {
  trace_call(0x8010A730u);
  c->r[3]=0u+0x00000025u; // 8010A730
  return; // 8010A734
}

// fn_8010A740
void f_8010A740(Ctx* __restrict c) {
  trace_call(0x8010A740u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A740
  c->r[0]=c->lr; // 8010A744
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A748
  c->r[4]=c->r[1]+0x00000008u; // 8010A74C
  c->r[7]=R32(c->r[3]+0x00000004u); // 8010A750
  c->r[3]=R32(c->r[3]+0x00000010u); // 8010A754
  {uint32_t ea=c->r[7]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A758
  c->r[5]=c->r[7]+0x000000BCu; // 8010A75C
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A760
  c->r[6]=c->r[7]+0x000000C8u; // 8010A764
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8010A768
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8010A76C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A770
  {uint32_t ea=c->r[7]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A774
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8010A778
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8010A77C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A780
  {uint32_t ea=c->r[7]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A784
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8010A788
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8010A78C
  c->lr=0x8010A794u; f_8010F9C0(c); // 8010A790
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A794
  c->lr=c->r[0]; // 8010A798
  c->r[1]=c->r[1]+0x00000020u; // 8010A79C
  return; // 8010A7A0
}

// fn_8010A7B0
void f_8010A7B0(Ctx* __restrict c) {
  trace_call(0x8010A7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A7B0
  c->r[0]=c->lr; // 8010A7B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 8010A7B8
  c->r[11]=c->r[1]+0x00000080u; // 8010A7BC
  c->lr=0x8010A7C4u; f_800C2E44(c); // 8010A7C0
  c->r[4]=R32(c->r[3]+0x00000004u); // 8010A7C4
  c->r[28]=c->r[3]|c->r[3]; // 8010A7C8
  {uint32_t ea=c->r[4]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A7CC
  c->lr=0x8010A7D4u; f_800E0CE0(c); // 8010A7D0
  c->r[4]=R32(c->r[28]+0x00000004u); // 8010A7D4
  c->r[31]=c->r[3]|c->r[3]; // 8010A7D8
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A7DC
  c->lr=0x8010A7E4u; f_800E0CE0(c); // 8010A7E0
  c->r[30]=c->r[3]|c->r[3]; // 8010A7E4
  c->r[3]=c->r[1]+0x00000008u; // 8010A7E8
  c->r[4]=0u+0x00000000u; // 8010A7EC
  c->r[5]=0u+0x0000004Cu; // 8010A7F0
  c->lr=0x8010A7F8u; f_80004350(c); // 8010A7F4
  c->r[3]=R32(c->r[28]+0x00000004u); // 8010A7F8
  c->r[0]=R32(c->r[3]+0x00000044u); // 8010A7FC
  cmps(c,0,(int32_t)c->r[0],0); // 8010A800
  if (crb(c,2)) { goto L_8010A8F0; } // 8010A804
  c->r[29]=0u+0x00000000u; // 8010A808
  c->r[27]=0u+0x00000000u; // 8010A80C
  c->r[26]=c->r[29]|c->r[29]; // 8010A810
L_8010A814:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010A814
  c->r[4]=c->r[1]+0x00000008u; // 8010A818
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010A81C
  c->r[5]=R32(c->r[28]+0x00000004u); // 8010A820
  c->r[0]=R32(c->r[5]+0x00000044u); // 8010A824
  c->r[3]=c->r[0]+c->r[27]; // 8010A828
  c->r[0]=R32(c->r[3]+0x00000008u); // 8010A82C
  c->r[0]=c->r[31]+c->r[0]; // 8010A830
  W32(c->r[1]+0x00000010u,c->r[0]); // 8010A834
  c->r[3]=R32(c->r[5]+0x00000044u); // 8010A838
  c->r[0]=R32(c->r[3]+c->r[27]); // 8010A83C
  c->r[0]=c->r[30]+c->r[0]; // 8010A840
  W32(c->r[1]+0x00000008u,c->r[0]); // 8010A844
  c->r[0]=R32(c->r[5]+0x00000044u); // 8010A848
  c->r[3]=c->r[0]+c->r[27]; // 8010A84C
  c->r[0]=R32(c->r[3]+0x00000044u); // 8010A850
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8010A854
  W32(c->r[1]+0x00000050u,c->r[26]); // 8010A858
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A85C
  c->r[3]=R32(c->r[3]+0x00000034u); // 8010A860
  c->lr=0x8010A868u; f_80175EA0(c); // 8010A864
  cmps(c,0,(int32_t)c->r[3],0); // 8010A868
  if (crb(c,2)) { goto L_8010A88C; } // 8010A86C
  cmps(c,0,(int32_t)c->r[3],36); // 8010A870
  if (crb(c,2)) { goto L_8010A88C; } // 8010A874
  cmps(c,0,(int32_t)c->r[3],80); // 8010A878
  if (crb(c,2)) { goto L_8010A88C; } // 8010A87C
  cmps(c,0,(int32_t)c->r[3],71); // 8010A880
  if (crb(c,2)) { goto L_8010A88C; } // 8010A884
  goto L_8010A994; // 8010A888
L_8010A88C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A88C
  c->r[25]=R32(c->r[3]+0x00000080u); // 8010A890
  goto L_8010A8CC; // 8010A894
L_8010A898:;
  c->r[3]=R32(c->r[25]+0x00000034u); // 8010A898
  c->r[4]=c->r[1]+0x00000008u; // 8010A89C
  c->lr=0x8010A8A4u; f_80175EA0(c); // 8010A8A0
  cmps(c,0,(int32_t)c->r[3],0); // 8010A8A4
  if (crb(c,2)) { goto L_8010A8C8; } // 8010A8A8
  cmps(c,0,(int32_t)c->r[3],36); // 8010A8AC
  if (crb(c,2)) { goto L_8010A8C8; } // 8010A8B0
  cmps(c,0,(int32_t)c->r[3],80); // 8010A8B4
  if (crb(c,2)) { goto L_8010A8C8; } // 8010A8B8
  cmps(c,0,(int32_t)c->r[3],71); // 8010A8BC
  if (crb(c,2)) { goto L_8010A8C8; } // 8010A8C0
  goto L_8010A994; // 8010A8C4
L_8010A8C8:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 8010A8C8
L_8010A8CC:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A8CC
  c->r[0]=c->r[3]+0x00000080u; // 8010A8D0
  cmpu(c,0,c->r[25],c->r[0]); // 8010A8D4
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A898; } // 8010A8D8
  c->r[29]=c->r[29]+0x00000001u; // 8010A8DC
  c->r[27]=c->r[27]+0x0000004Cu; // 8010A8E0
  cmps(c,0,(int32_t)c->r[29],4); // 8010A8E4
  if (crb(c,0)) { IRQCHK(c); goto L_8010A814; } // 8010A8E8
  goto L_8010A990; // 8010A8EC
L_8010A8F0:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A8F0
  c->r[4]=c->r[1]+0x00000008u; // 8010A8F4
  c->r[3]=R32(c->r[3]+0x00000034u); // 8010A8F8
  c->lr=0x8010A900u; f_80175EF0(c); // 8010A8FC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8010A900
  c->r[4]=c->r[1]+0x00000008u; // 8010A904
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010A908
  c->r[0]=c->r[0]|0x000000F0u; // 8010A90C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010A910
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8010A914
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A918
  c->r[3]=R32(c->r[3]+0x00000034u); // 8010A91C
  c->lr=0x8010A924u; f_80175EA0(c); // 8010A920
  cmps(c,0,(int32_t)c->r[3],0); // 8010A924
  if (crb(c,2)) { goto L_8010A940; } // 8010A928
  cmps(c,0,(int32_t)c->r[3],36); // 8010A92C
  if (crb(c,2)) { goto L_8010A940; } // 8010A930
  cmps(c,0,(int32_t)c->r[3],80); // 8010A934
  if (crb(c,2)) { goto L_8010A940; } // 8010A938
  goto L_8010A994; // 8010A93C
L_8010A940:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A940
  c->r[25]=R32(c->r[3]+0x00000080u); // 8010A944
  goto L_8010A980; // 8010A948
L_8010A94C:;
  c->r[3]=R32(c->r[25]+0x00000034u); // 8010A94C
  c->r[4]=c->r[1]+0x00000008u; // 8010A950
  c->lr=0x8010A958u; f_80175EA0(c); // 8010A954
  cmps(c,0,(int32_t)c->r[3],0); // 8010A958
  if (crb(c,2)) { goto L_8010A97C; } // 8010A95C
  cmps(c,0,(int32_t)c->r[3],36); // 8010A960
  if (crb(c,2)) { goto L_8010A97C; } // 8010A964
  cmps(c,0,(int32_t)c->r[3],80); // 8010A968
  if (crb(c,2)) { goto L_8010A97C; } // 8010A96C
  cmps(c,0,(int32_t)c->r[3],71); // 8010A970
  if (crb(c,2)) { goto L_8010A97C; } // 8010A974
  goto L_8010A994; // 8010A978
L_8010A97C:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 8010A97C
L_8010A980:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8010A980
  c->r[0]=c->r[3]+0x00000080u; // 8010A984
  cmpu(c,0,c->r[25],c->r[0]); // 8010A988
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A94C; } // 8010A98C
L_8010A990:;
  c->r[3]=0u+0x00000000u; // 8010A990
L_8010A994:;
  c->r[11]=c->r[1]+0x00000080u; // 8010A994
  c->lr=0x8010A99Cu; f_800C2E90(c); // 8010A998
  c->r[0]=R32(c->r[1]+0x00000084u); // 8010A99C
  c->lr=c->r[0]; // 8010A9A0
  c->r[1]=c->r[1]+0x00000080u; // 8010A9A4
  return; // 8010A9A8
}

// fn_8010A9B0
void f_8010A9B0(Ctx* __restrict c) {
  trace_call(0x8010A9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A9B0
  c->r[0]=c->lr; // 8010A9B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010A9B8
  c->r[11]=c->r[1]+0x00000030u; // 8010A9BC
  c->lr=0x8010A9C4u; f_800C2E50(c); // 8010A9C0
  c->r[29]=R32(c->r[3]+0x00000010u); // 8010A9C4
  c->r[31]=c->r[4]|c->r[4]; // 8010A9C8
  c->r[3]=R32(c->r[29]+0x00000024u); // 8010A9CC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8010A9D0
  if (!crb(c,2)) { goto L_8010A9E0; } // 8010A9D4
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8010A9D8
  if (crb(c,2)) { goto L_8010AA94; } // 8010A9DC
L_8010A9E0:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 8010A9E0
  c->r[4]=c->r[1]+0x0000000Au; // 8010A9E4
  c->lr=0x8010A9ECu; f_801762B0(c); // 8010A9E8
  cmps(c,0,(int32_t)c->r[3],36); // 8010A9EC
  if (crb(c,2)) { goto L_8010A9FC; } // 8010A9F0
  cmps(c,0,(int32_t)c->r[3],11); // 8010A9F4
  if (!crb(c,2)) { goto L_8010AA08; } // 8010A9F8
L_8010A9FC:;
  c->r[0]=0u+0x00000000u; // 8010A9FC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8010AA00
  goto L_8010AA14; // 8010AA04
L_8010AA08:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010AA08
  if (crb(c,2)) { goto L_8010AA14; } // 8010AA0C
  goto L_8010AB64; // 8010AA10
L_8010AA14:;
  c->r[3]=R32(c->r[29]+0x00000028u); // 8010AA14
  cmps(c,0,(int32_t)c->r[3],0); // 8010AA18
  if (crb(c,2)) { goto L_8010AA78; } // 8010AA1C
  c->r[4]=c->r[1]+0x00000010u; // 8010AA20
  c->r[6]=c->r[1]+0x00000009u; // 8010AA24
  c->r[5]=0u+0x00000000u; // 8010AA28
  c->lr=0x8010AA30u; f_801952F0(c); // 8010AA2C
  cmps(c,0,(int32_t)c->r[3],0); // 8010AA30
  if (!crb(c,2)) { goto L_8010AB64; } // 8010AA34
  c->r[0]=R8(c->r[1]+0x00000009u); // 8010AA38
  cmps(c,0,(int32_t)c->r[0],0); // 8010AA3C
  if (crb(c,2)) { goto L_8010AA50; } // 8010AA40
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AA44
  c->r[0]=c->r[0]|0x00000040u; // 8010AA48
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AA4C
L_8010AA50:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010AA50
  cmps(c,0,(int32_t)c->r[0],0); // 8010AA54
  if (crb(c,2)) { goto L_8010AA78; } // 8010AA58
  cmps(c,0,(int32_t)c->r[0],6); // 8010AA5C
  if (crb(c,2)) { goto L_8010AA78; } // 8010AA60
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AA64
  c->r[0]=c->r[0]|0x00000002u; // 8010AA68
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AA6C
  goto L_8010AA78; // 8010AA70
  goto L_8010AB64; // 8010AA74
L_8010AA78:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8010AA78
  cmps(c,0,(int32_t)c->r[0],0); // 8010AA7C
  if (crb(c,2)) { goto L_8010AB60; } // 8010AA80
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AA84
  c->r[0]=c->r[0]|0x00000010u; // 8010AA88
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AA8C
  goto L_8010AB60; // 8010AA90
L_8010AA94:;
  c->r[28]=R32(c->r[29]+0x00000080u); // 8010AA94
  c->r[30]=c->r[29]+0x00000080u; // 8010AA98
  c->r[29]=0u+0x00000000u; // 8010AA9C
  goto L_8010AB58; // 8010AAA0
L_8010AAA4:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 8010AAA4
  c->r[4]=c->r[1]+0x0000000Au; // 8010AAA8
  c->lr=0x8010AAB0u; f_801762B0(c); // 8010AAAC
  cmps(c,0,(int32_t)c->r[3],36); // 8010AAB0
  if (crb(c,2)) { goto L_8010AAC0; } // 8010AAB4
  cmps(c,0,(int32_t)c->r[3],11); // 8010AAB8
  if (!crb(c,2)) { goto L_8010AAC8; } // 8010AABC
L_8010AAC0:;
  W8(c->r[1]+0x0000000Au,c->r[29]); // 8010AAC0
  goto L_8010AAD4; // 8010AAC4
L_8010AAC8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010AAC8
  if (crb(c,2)) { goto L_8010AAD4; } // 8010AACC
  goto L_8010AB64; // 8010AAD0
L_8010AAD4:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 8010AAD4
  cmps(c,0,(int32_t)c->r[3],0); // 8010AAD8
  if (crb(c,2)) { goto L_8010AB38; } // 8010AADC
  c->r[4]=c->r[1]+0x0000000Cu; // 8010AAE0
  c->r[6]=c->r[1]+0x00000008u; // 8010AAE4
  c->r[5]=0u+0x00000000u; // 8010AAE8
  c->lr=0x8010AAF0u; f_801952F0(c); // 8010AAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8010AAF0
  if (!crb(c,2)) { goto L_8010AB64; } // 8010AAF4
  c->r[0]=R8(c->r[1]+0x00000008u); // 8010AAF8
  cmps(c,0,(int32_t)c->r[0],0); // 8010AAFC
  if (crb(c,2)) { goto L_8010AB10; } // 8010AB00
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AB04
  c->r[0]=c->r[0]|0x00000040u; // 8010AB08
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AB0C
L_8010AB10:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8010AB10
  cmps(c,0,(int32_t)c->r[0],0); // 8010AB14
  if (crb(c,2)) { goto L_8010AB38; } // 8010AB18
  cmps(c,0,(int32_t)c->r[0],6); // 8010AB1C
  if (crb(c,2)) { goto L_8010AB38; } // 8010AB20
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AB24
  c->r[0]=c->r[0]|0x00000002u; // 8010AB28
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AB2C
  goto L_8010AB38; // 8010AB30
  goto L_8010AB64; // 8010AB34
L_8010AB38:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8010AB38
  cmps(c,0,(int32_t)c->r[0],0); // 8010AB3C
  if (crb(c,2)) { goto L_8010AB54; } // 8010AB40
  c->r[0]=R32(c->r[31]+0x00000000u); // 8010AB44
  c->r[0]=c->r[0]|0x00000010u; // 8010AB48
  W32(c->r[31]+0x00000000u,c->r[0]); // 8010AB4C
  goto L_8010AB60; // 8010AB50
L_8010AB54:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 8010AB54
L_8010AB58:;
  cmpu(c,0,c->r[28],c->r[30]); // 8010AB58
  if (!crb(c,2)) { IRQCHK(c); goto L_8010AAA4; } // 8010AB5C
L_8010AB60:;
  c->r[3]=0u+0x00000000u; // 8010AB60
L_8010AB64:;
  c->r[11]=c->r[1]+0x00000030u; // 8010AB64
  c->lr=0x8010AB6Cu; f_800C2E9C(c); // 8010AB68
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010AB6C
  c->lr=c->r[0]; // 8010AB70
  c->r[1]=c->r[1]+0x00000030u; // 8010AB74
  return; // 8010AB78
}

// fn_8010AB80
void f_8010AB80(Ctx* __restrict c) {
  trace_call(0x8010AB80u);
  cmps(c,0,(int32_t)c->r[4],0); // 8010AB80
  if (!crb(c,2)) { goto L_8010AB90; } // 8010AB84
  c->r[3]=0u+0x00000025u; // 8010AB88
  return; // 8010AB8C
L_8010AB90:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 8010AB90
  c->r[3]=0u+0x00000000u; // 8010AB94
  c->r[0]=R32(c->r[5]+0x00000060u); // 8010AB98
  c->r[0]=rotl(c->r[0],13)&0x00000001u; // 8010AB9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010ABA0
  return; // 8010ABA4
}

// fn_8010ABB0
void f_8010ABB0(Ctx* __restrict c) {
  trace_call(0x8010ABB0u);
  c->r[0]=0u+0x00000000u; // 8010ABB0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8010ABB4
  c->r[3]=0u+0x00000025u; // 8010ABB8
  return; // 8010ABBC
}

// fn_8010ABC0
void f_8010ABC0(Ctx* __restrict c) {
  trace_call(0x8010ABC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ABC0
  c->r[0]=c->lr; // 8010ABC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010ABC8
  c->r[11]=c->r[1]+0x00000020u; // 8010ABCC
  c->lr=0x8010ABD4u; f_800C2E4C(c); // 8010ABD0
  c->r[30]=R32(c->r[4]+0x00000138u); // 8010ABD4
  c->r[28]=c->r[5]|c->r[5]; // 8010ABD8
  c->r[29]=R32(c->r[3]+0x00000010u); // 8010ABDC
  c->r[5]=0u+0x80390000u; // 8010ABE0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8010ABE4
  c->r[27]=c->r[4]|c->r[4]; // 8010ABE8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8010ABEC
  c->r[3]=c->r[28]|c->r[28]; // 8010ABF0
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 8010ABF4
  c->r[4]=0u+0x00000094u; // 8010ABF8
  c->r[6]=0u+0x000006A1u; // 8010ABFC
  c->lr=0x8010AC04u; f_800F15E0(c); // 8010AC00
  cmps(c,0,(int32_t)c->r[3],0); // 8010AC04
  c->r[31]=c->r[3]|c->r[3]; // 8010AC08
  if (crb(c,2)) { goto L_8010AC18; } // 8010AC0C
  c->lr=0x8010AC14u; f_8010D920(c); // 8010AC10
  c->r[31]=c->r[3]|c->r[3]; // 8010AC14
L_8010AC18:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010AC18
  if (!crb(c,2)) { goto L_8010AC28; } // 8010AC1C
  c->r[3]=0u+0x0000002Cu; // 8010AC20
  goto L_8010ACA8; // 8010AC24
L_8010AC28:;
  c->r[4]=R32(c->r[29]+0x00000014u); // 8010AC28
  c->r[3]=c->r[31]|c->r[31]; // 8010AC2C
  c->lr=0x8010AC34u; f_8010D970(c); // 8010AC30
  c->r[4]=R32(c->r[31]+0x00000014u); // 8010AC34
  c->r[3]=R32(c->r[4]+0x00000008u); // 8010AC38
  c->r[0]=c->r[3]+0x00000001u; // 8010AC3C
  W32(c->r[4]+0x00000008u,c->r[0]); // 8010AC40
  c->r[3]=R32(c->r[29]+0x00000014u); // 8010AC44
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AC48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AC4C
  c->lr=0x8010AC54u; f_800E77D0(c); // 8010AC50
  cmps(c,0,(int32_t)c->r[3],0); // 8010AC54
  if (!crb(c,2)) { goto L_8010AC6C; } // 8010AC58
  c->r[3]=R32(c->r[29]+0x00000014u); // 8010AC5C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AC60
  c->r[0]=R32(c->r[3]+0x00000018u); // 8010AC64
  W32(c->r[31]+0x00000044u,c->r[0]); // 8010AC68
L_8010AC6C:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 8010AC6C
  c->r[3]=0u+0x00000000u; // 8010AC70
  W32(c->r[31]+0x00000024u,c->r[0]); // 8010AC74
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8010AC78
  W32(c->r[31]+0x00000018u,c->r[3]); // 8010AC7C
  W32(c->r[31]+0x00000020u,c->r[27]); // 8010AC80
  if (crb(c,2)) { goto L_8010ACA0; } // 8010AC84
  c->r[3]=c->r[31]|c->r[31]; // 8010AC88
  c->r[4]=c->r[28]|c->r[28]; // 8010AC8C
  c->lr=0x8010AC94u; f_8010E750(c); // 8010AC90
  cmps(c,0,(int32_t)c->r[3],0); // 8010AC94
  if (crb(c,2)) { goto L_8010ACA0; } // 8010AC98
  goto L_8010ACA8; // 8010AC9C
L_8010ACA0:;
  W32(c->r[30]+0x00000010u,c->r[31]); // 8010ACA0
  c->r[3]=0u+0x00000000u; // 8010ACA4
L_8010ACA8:;
  c->r[11]=c->r[1]+0x00000020u; // 8010ACA8
  c->lr=0x8010ACB0u; f_800C2E98(c); // 8010ACAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010ACB0
  c->lr=c->r[0]; // 8010ACB4
  c->r[1]=c->r[1]+0x00000020u; // 8010ACB8
  return; // 8010ACBC
}

// fn_8010ACC0
void f_8010ACC0(Ctx* __restrict c) {
  trace_call(0x8010ACC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ACC0
  c->r[0]=c->lr; // 8010ACC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010ACC8
  c->r[11]=c->r[1]+0x00000020u; // 8010ACCC
  c->lr=0x8010ACD4u; f_800C2E54(c); // 8010ACD0
  c->r[5]=R32(c->r[4]+0x00000138u); // 8010ACD4
  c->r[29]=c->r[4]|c->r[4]; // 8010ACD8
  c->r[31]=R32(c->r[3]+0x00000010u); // 8010ACDC
  c->r[30]=R32(c->r[5]+0x00000010u); // 8010ACE0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8010ACE4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010ACE8
  c->r[0]=c->r[30]+0x00000080u; // 8010ACEC
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010ACF0
  W32(c->r[30]+0x00000014u,c->r[3]); // 8010ACF4
  c->r[4]=R32(c->r[30]+0x00000080u); // 8010ACF8
  goto L_8010AD0C; // 8010ACFC
L_8010AD00:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010AD00
  W32(c->r[4]+0x00000014u,c->r[3]); // 8010AD04
  c->r[4]=R32(c->r[4]+0x00000000u); // 8010AD08
L_8010AD0C:;
  cmpu(c,0,c->r[4],c->r[0]); // 8010AD0C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010AD00; } // 8010AD10
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010AD14
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AD18
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AD1C
  c->lr=0x8010AD24u; f_800E77D0(c); // 8010AD20
  cmps(c,0,(int32_t)c->r[3],0); // 8010AD24
  if (!crb(c,2)) { goto L_8010AD3C; } // 8010AD28
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010AD2C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8010AD30
  c->r[0]=R32(c->r[3]+0x00000018u); // 8010AD34
  W32(c->r[30]+0x00000044u,c->r[0]); // 8010AD38
L_8010AD3C:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8010AD3C
  c->r[0]=0u+0x00000000u; // 8010AD40
  W32(c->r[30]+0x00000024u,c->r[3]); // 8010AD44
  c->r[11]=c->r[1]+0x00000020u; // 8010AD48
  c->r[3]=0u+0x00000000u; // 8010AD4C
  W32(c->r[30]+0x00000018u,c->r[0]); // 8010AD50
  W32(c->r[30]+0x00000020u,c->r[29]); // 8010AD54
  c->lr=0x8010AD5Cu; f_800C2EA0(c); // 8010AD58
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010AD5C
  c->lr=c->r[0]; // 8010AD60
  c->r[1]=c->r[1]+0x00000020u; // 8010AD64
  return; // 8010AD68
}

// fn_8010AD70
void f_8010AD70(Ctx* __restrict c) {
  trace_call(0x8010AD70u);
  c->r[3]=0u+0x00000000u; // 8010AD70
  return; // 8010AD74
}

// fn_8010AD80
void f_8010AD80(Ctx* __restrict c) {
  trace_call(0x8010AD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AD80
  c->r[0]=c->lr; // 8010AD84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010AD88
  c->r[11]=c->r[1]+0x00000020u; // 8010AD8C
  c->lr=0x8010AD94u; f_800C2E4C(c); // 8010AD90
  c->r[27]=c->r[3]|c->r[3]; // 8010AD94
  c->r[28]=c->r[4]|c->r[4]; // 8010AD98
  c->r[29]=c->r[5]|c->r[5]; // 8010AD9C
  c->r[5]=0u+0x00000004u; // 8010ADA0
  c->r[3]=c->r[28]|c->r[28]; // 8010ADA4
  c->r[4]=c->r[27]+0x0000000Cu; // 8010ADA8
  c->r[6]=0u+0x00000001u; // 8010ADAC
  c->r[7]=0u+0x00000000u; // 8010ADB0
  c->lr=0x8010ADB8u; f_8018A4E0(c); // 8010ADB4
  cmps(c,0,(int32_t)c->r[3],0); // 8010ADB8
  if (crb(c,2)) { goto L_8010ADC4; } // 8010ADBC
  goto L_8010AED4; // 8010ADC0
L_8010ADC4:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010ADC4
  c->r[5]=0u+0x80390000u; // 8010ADC8
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 8010ADCC
  c->r[4]=0u+0x0000003Cu; // 8010ADD0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010ADD4
  c->r[6]=0u+0x0000070Bu; // 8010ADD8
  c->r[7]=0u+0x00000000u; // 8010ADDC
  c->r[8]=0u+0x00000000u; // 8010ADE0
  c->lr=0x8010ADE8u; f_8018F230(c); // 8010ADE4
  cmps(c,0,(int32_t)c->r[3],0); // 8010ADE8
  c->r[31]=c->r[3]|c->r[3]; // 8010ADEC
  if (crb(c,2)) { goto L_8010ADFC; } // 8010ADF0
  c->lr=0x8010ADF8u; f_8010FCF0(c); // 8010ADF4
  c->r[31]=c->r[3]|c->r[3]; // 8010ADF8
L_8010ADFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010ADFC
  if (!crb(c,2)) { goto L_8010AE0C; } // 8010AE00
  c->r[3]=0u+0x0000002Cu; // 8010AE04
  goto L_8010AED4; // 8010AE08
L_8010AE0C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 8010AE0C
  c->r[5]=0u+0x80390000u; // 8010AE10
  c->r[5]=c->r[5]+0xFFFFE5A0u; // 8010AE14
  c->r[4]=0u+0x00000094u; // 8010AE18
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010AE1C
  c->r[6]=0u+0x00000711u; // 8010AE20
  c->r[7]=0u+0x00000000u; // 8010AE24
  c->r[8]=0u+0x00000000u; // 8010AE28
  c->lr=0x8010AE30u; f_8018F230(c); // 8010AE2C
  cmps(c,0,(int32_t)c->r[3],0); // 8010AE30
  c->r[30]=c->r[3]|c->r[3]; // 8010AE34
  if (crb(c,2)) { goto L_8010AE44; } // 8010AE38
  c->lr=0x8010AE40u; f_8010D920(c); // 8010AE3C
  c->r[30]=c->r[3]|c->r[3]; // 8010AE40
L_8010AE44:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010AE44
  if (!crb(c,2)) { goto L_8010AE54; } // 8010AE48
  c->r[3]=0u+0x0000002Cu; // 8010AE4C
  goto L_8010AED4; // 8010AE50
L_8010AE54:;
  c->r[3]=c->r[31]|c->r[31]; // 8010AE54
  c->lr=0x8010AE5Cu; f_8010FD30(c); // 8010AE58
  c->r[3]=c->r[30]|c->r[30]; // 8010AE5C
  c->r[4]=c->r[31]|c->r[31]; // 8010AE60
  c->lr=0x8010AE68u; f_8010D970(c); // 8010AE64
  c->r[3]=R32(c->r[31]+0x00000008u); // 8010AE68
  c->r[0]=c->r[3]+0x00000001u; // 8010AE6C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8010AE70
  c->r[3]=R32(c->r[27]+0x00000004u); // 8010AE74
  c->lr=0x8010AE7Cu; f_800EF770(c); // 8010AE78
  c->r[5]=R32(c->r[27]+0x00000004u); // 8010AE7C
  c->r[0]=c->r[3]+0x00000094u; // 8010AE80
  c->r[3]=c->r[30]|c->r[30]; // 8010AE84
  c->r[4]=c->r[28]|c->r[28]; // 8010AE88
  c->r[6]=R32(c->r[5]+0x000000A8u); // 8010AE8C
  c->r[5]=c->r[29]|c->r[29]; // 8010AE90
  W32(c->r[6]+0x00000040u,c->r[0]); // 8010AE94
  c->lr=0x8010AE9Cu; f_8010F0A0(c); // 8010AE98
  cmps(c,0,(int32_t)c->r[3],0); // 8010AE9C
  if (crb(c,2)) { goto L_8010AEA8; } // 8010AEA0
  goto L_8010AED4; // 8010AEA4
L_8010AEA8:;
  c->r[3]=c->r[30]|c->r[30]; // 8010AEA8
  c->lr=0x8010AEB0u; f_8010E890(c); // 8010AEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8010AEB0
  if (crb(c,2)) { goto L_8010AEC4; } // 8010AEB4
  c->r[3]=R32(c->r[27]+0x00000004u); // 8010AEB8
  c->r[4]=0u+0x00000001u; // 8010AEBC
  c->lr=0x8010AEC4u; f_800D9BA0(c); // 8010AEC0
L_8010AEC4:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 8010AEC4
  c->r[3]=0u+0x00000000u; // 8010AEC8
  W32(c->r[30]+0x00000020u,c->r[0]); // 8010AECC
  W32(c->r[27]+0x00000010u,c->r[30]); // 8010AED0
L_8010AED4:;
  c->r[11]=c->r[1]+0x00000020u; // 8010AED4
  c->lr=0x8010AEDCu; f_800C2E98(c); // 8010AED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010AEDC
  c->lr=c->r[0]; // 8010AEE0
  c->r[1]=c->r[1]+0x00000020u; // 8010AEE4
  return; // 8010AEE8
}

// fn_8010AEF0
void f_8010AEF0(Ctx* __restrict c) {
  trace_call(0x8010AEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AEF0
  c->r[0]=c->lr; // 8010AEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AEF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AEFC
  c->r[31]=c->r[3]|c->r[3]; // 8010AF00
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 8010AF04
  c->r[6]=R32(c->r[31]+0x00000010u); // 8010AF08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010AF0C
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8010AF10
  c->ctr=c->r[12]; // 8010AF14
  if (true) { c->lr=0x8010AF1Cu; dispatch(c,c->ctr); } // 8010AF18
  cmps(c,0,(int32_t)c->r[3],0); // 8010AF1C
  if (crb(c,2)) { goto L_8010AF28; } // 8010AF20
  goto L_8010AFA0; // 8010AF24
L_8010AF28:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8010AF28
  c->r[0]=R32(c->r[3]+0x00000024u); // 8010AF2C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8010AF30
  if (crb(c,2)) { goto L_8010AF68; } // 8010AF34
  c->r[3]=R32(c->r[31]+0x00000004u); // 8010AF38
  c->lr=0x8010AF40u; f_800EF770(c); // 8010AF3C
  c->r[5]=R32(c->r[31]+0x00000010u); // 8010AF40
  c->r[4]=R32(c->r[31]+0x00000004u); // 8010AF44
  c->r[5]=R32(c->r[5]+0x00000014u); // 8010AF48
  c->r[4]=R32(c->r[4]+0x000000A8u); // 8010AF4C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010AF50
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010AF54
  c->r[0]=R32(c->r[5]+0x00000004u); // 8010AF58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)148); // 8010AF5C
  c->r[0]=c->r[0]+c->r[3]; // 8010AF60
  W32(c->r[4]+0x00000040u,c->r[0]); // 8010AF64
L_8010AF68:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8010AF68
  c->lr=0x8010AF70u; f_8010E910(c); // 8010AF6C
  cmps(c,0,(int32_t)c->r[3],0); // 8010AF70
  if (crb(c,2)) { goto L_8010AF8C; } // 8010AF74
  c->r[3]=R32(c->r[31]+0x00000004u); // 8010AF78
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010AF7C
  c->r[0]=c->r[0]|0x00080000u; // 8010AF80
  W32(c->r[3]+0x00000060u,c->r[0]); // 8010AF84
  goto L_8010AF9C; // 8010AF88
L_8010AF8C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8010AF8C
  c->r[0]=R32(c->r[3]+0x00000060u); // 8010AF90
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 8010AF94
  W32(c->r[3]+0x00000060u,c->r[0]); // 8010AF98
L_8010AF9C:;
  c->r[3]=0u+0x00000000u; // 8010AF9C
L_8010AFA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AFA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AFA4
  c->lr=c->r[0]; // 8010AFA8
  c->r[1]=c->r[1]+0x00000010u; // 8010AFAC
  return; // 8010AFB0
}

// fn_8010AFC0
void f_8010AFC0(Ctx* __restrict c) {
  trace_call(0x8010AFC0u);
  c->r[3]=0u+0x00000000u; // 8010AFC0
  return; // 8010AFC4
}

