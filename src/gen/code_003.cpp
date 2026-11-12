#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8003A328
void f_8003A328(Ctx* __restrict c) {
  trace_call(0x8003A328u);
  c->r[0]=0u+0x00000000u; // 8003A328
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8003A32C
  W32(c->r[3]+0x00000060u,c->r[0]); // 8003A330
  W32(c->r[3]+0x000000B0u,c->r[0]); // 8003A334
  return; // 8003A338
}

// fn_8003A33C
void f_8003A33C(Ctx* __restrict c) {
  trace_call(0x8003A33Cu);
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 8003A33C
  return; // 8003A340
}

// fn_8003A344
void f_8003A344(Ctx* __restrict c) {
  trace_call(0x8003A344u);
  W32(c->r[3]+0x000000D8u,c->r[4]); // 8003A344
  return; // 8003A348
}

// fn_8003A34C
void f_8003A34C(Ctx* __restrict c) {
  trace_call(0x8003A34Cu);
  c->r[3]=c->r[3]+0x000000CCu; // 8003A34C
  return; // 8003A350
}

// fn_8003A354
void f_8003A354(Ctx* __restrict c) {
  trace_call(0x8003A354u);
  c->r[3]=c->r[3]+0x000000D0u; // 8003A354
  return; // 8003A358
}

// fn_8003A35C
void f_8003A35C(Ctx* __restrict c) {
  trace_call(0x8003A35Cu);
  c->r[3]=c->r[3]+0x000000D4u; // 8003A35C
  return; // 8003A360
}

// fn_8003A364
void f_8003A364(Ctx* __restrict c) {
  trace_call(0x8003A364u);
  c->r[3]=c->r[3]+0x000000A8u; // 8003A364
  return; // 8003A368
}

// fn_8003A36C
void f_8003A36C(Ctx* __restrict c) {
  trace_call(0x8003A36Cu);
  W32(c->r[3]+0x00000034u,c->r[4]); // 8003A36C
  return; // 8003A370
}

// fn_8003A374
void f_8003A374(Ctx* __restrict c) {
  trace_call(0x8003A374u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A374
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8003A378
  return; // 8003A37C
}

// fn_8003A380
void f_8003A380(Ctx* __restrict c) {
  trace_call(0x8003A380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A380
  c->r[0]=c->lr; // 8003A384
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A388
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003A38C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003A390
  c->r[31]=c->r[3]|c->r[3]; // 8003A394
  {uint32_t ea=c->r[3]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A398
  fcmp(c,0,c->f[1],c->f[0]); // 8003A39C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8003A3A0
  if (!crb(c,2)) { goto L_8003A3D4; } // 8003A3A4
  {uint32_t ea=c->r[2]+0xFFFF85FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A3A8
  {uint32_t ea=c->r[3]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A3AC
  fcmp(c,0,c->f[1],c->f[0]); // 8003A3B0
  if (!crb(c,2)) { goto L_8003A3D4; } // 8003A3B4
  c->r[3]=R32(c->r[3]+0x00000148u); // 8003A3B8
  c->lr=0x8003A3C0u; f_80033BF8(c); // 8003A3BC
  cmps(c,0,(int32_t)c->r[3],0); // 8003A3C0
  if (!crb(c,2)) { goto L_8003A3D4; } // 8003A3C4
  c->r[0]=0u+0x00000004u; // 8003A3C8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8003A3CC
  goto L_8003A50C; // 8003A3D0
L_8003A3D4:;
  c->r[0]=R32(c->r[31]+0x00000150u); // 8003A3D4
  cmps(c,0,(int32_t)c->r[0],1); // 8003A3D8
  if (crb(c,2)) { goto L_8003A3F4; } // 8003A3DC
  cmps(c,0,(int32_t)c->r[0],2); // 8003A3E0
  if (crb(c,2)) { goto L_8003A430; } // 8003A3E4
  cmps(c,0,(int32_t)c->r[0],3); // 8003A3E8
  if (crb(c,2)) { goto L_8003A470; } // 8003A3EC
  goto L_8003A50C; // 8003A3F0
L_8003A3F4:;
  c->r[3]=R32(c->r[31]+0x00000148u); // 8003A3F4
  c->lr=0x8003A3FCu; f_80033BF8(c); // 8003A3F8
  cmps(c,0,(int32_t)c->r[3],0); // 8003A3FC
  if (!crb(c,2)) { goto L_8003A50C; } // 8003A400
  {uint32_t ea=c->r[31]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A404
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A408
  fcmp(c,0,c->f[1],c->f[0]); // 8003A40C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8003A410
  if (!crb(c,2)) { goto L_8003A424; } // 8003A414
  c->r[0]=0u+0x00000003u; // 8003A418
  W32(c->r[31]+0x00000150u,c->r[0]); // 8003A41C
  goto L_8003A50C; // 8003A420
L_8003A424:;
  c->r[0]=0u+0x00000002u; // 8003A424
  W32(c->r[31]+0x00000150u,c->r[0]); // 8003A428
  goto L_8003A50C; // 8003A42C
L_8003A430:;
  c->r[3]=0u+0x803D0000u; // 8003A430
  {uint32_t ea=c->r[31]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A434
  c->r[3]=c->r[3]+0x0000407Cu; // 8003A438
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A43C
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8003A440
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003A444
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8003A448
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[1]);} // 8003A44C
  fcmp(c,0,c->f[1],c->f[0]); // 8003A450
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8003A454
  if (!crb(c,2)) { goto L_8003A50C; } // 8003A458
  c->r[3]=0u+0x00000000u; // 8003A45C
  c->r[0]=0u+0x00000004u; // 8003A460
  W32(c->r[31]+0x00000150u,c->r[3]); // 8003A464
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8003A468
  goto L_8003A50C; // 8003A46C
L_8003A470:;
  c->r[3]=0u+0x803D0000u; // 8003A470
  {uint32_t ea=c->r[31]+0x00000164u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A474
  c->r[3]=c->r[3]+0x0000407Cu; // 8003A478
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A47C
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8003A480
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003A484
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8003A488
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[1]);} // 8003A48C
  fcmp(c,0,c->f[1],c->f[0]); // 8003A490
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8003A494
  if (!crb(c,2)) { goto L_8003A50C; } // 8003A498
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003A49C
  c->r[3]=0u+0x00000000u; // 8003A4A0
  {uint32_t ea=c->r[31]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4A4
  c->r[0]=0u+0x00000004u; // 8003A4A8
  c->r[4]=R32(c->r[4]+0x00000034u); // 8003A4AC
  {uint32_t ea=c->r[4]+0x000000CCu; WF32(ea,c->f[0]);} // 8003A4B0
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003A4B4
  {uint32_t ea=c->r[31]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4B8
  c->r[4]=R32(c->r[4]+0x00000034u); // 8003A4BC
  {uint32_t ea=c->r[4]+0x000000D0u; WF32(ea,c->f[0]);} // 8003A4C0
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003A4C4
  {uint32_t ea=c->r[31]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4C8
  c->r[4]=R32(c->r[4]+0x00000034u); // 8003A4CC
  {uint32_t ea=c->r[4]+0x000000D4u; WF32(ea,c->f[0]);} // 8003A4D0
  {uint32_t ea=c->r[31]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4D4
  c->r[4]=R32(c->r[31]+0x00000148u); // 8003A4D8
  c->f[0]=-c->f[0]; // 8003A4DC
  {uint32_t ea=c->r[4]+0x000000CCu; WF32(ea,c->f[0]);} // 8003A4E0
  {uint32_t ea=c->r[31]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4E4
  c->r[4]=R32(c->r[31]+0x00000148u); // 8003A4E8
  c->f[0]=-c->f[0]; // 8003A4EC
  {uint32_t ea=c->r[4]+0x000000D0u; WF32(ea,c->f[0]);} // 8003A4F0
  {uint32_t ea=c->r[31]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A4F4
  c->r[4]=R32(c->r[31]+0x00000148u); // 8003A4F8
  c->f[0]=-c->f[0]; // 8003A4FC
  {uint32_t ea=c->r[4]+0x000000D4u; WF32(ea,c->f[0]);} // 8003A500
  W32(c->r[31]+0x00000150u,c->r[3]); // 8003A504
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8003A508
L_8003A50C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003A50C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003A510
  c->lr=c->r[0]; // 8003A514
  c->r[1]=c->r[1]+0x00000010u; // 8003A518
  return; // 8003A51C
}

// fn_8003A520
void f_8003A520(Ctx* __restrict c) {
  trace_call(0x8003A520u);
  f_80041EA0(c); return; // 8003A520
}

// fn_8003A524
void f_8003A524(Ctx* __restrict c) {
  trace_call(0x8003A524u);
  return; // 8003A524
}

// fn_8003A528
void f_8003A528(Ctx* __restrict c) {
  trace_call(0x8003A528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A528
  c->r[0]=c->lr; // 8003A52C
  cmps(c,0,(int32_t)c->r[3],0); // 8003A530
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003A534
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003A538
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003A53C
  c->r[30]=c->r[4]|c->r[4]; // 8003A540
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003A544
  c->r[29]=c->r[3]|c->r[3]; // 8003A548
  if (crb(c,2)) { goto L_8003A610; } // 8003A54C
  if (crb(c,2)) { goto L_8003A55C; } // 8003A550
  c->r[4]=0u+0x00000000u; // 8003A554
  c->lr=0x8003A55Cu; f_8030BAE0(c); // 8003A558
L_8003A55C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8003A55C
  if (!crb(c,1)) { goto L_8003A610; } // 8003A560
  c->lr=0x8003A568u; f_8028B53C(c); // 8003A564
  c->r[31]=0u+0x804B0000u; // 8003A568
  c->r[31]=c->r[31]+0xFFFFC800u; // 8003A56C
  c->r[3]=c->r[31]|c->r[31]; // 8003A570
  c->lr=0x8003A578u; f_8024B0E0(c); // 8003A574
  cmps(c,0,(int32_t)c->r[29],0); // 8003A578
  if (!crb(c,2)) { goto L_8003A58C; } // 8003A57C
  c->r[3]=c->r[31]|c->r[31]; // 8003A580
  c->lr=0x8003A588u; f_8024B1C0(c); // 8003A584
  goto L_8003A610; // 8003A588
L_8003A58C:;
  c->r[0]=0u+0x80000000u; // 8003A58C
  cmpu(c,0,c->r[29],c->r[0]); // 8003A590
  if (crb(c,0)) { goto L_8003A5B0; } // 8003A594
  c->r[3]=0u+0x81800000u; // 8003A598
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003A59C
  cmpu(c,0,c->r[29],c->r[0]); // 8003A5A0
  if (!crb(c,0)) { goto L_8003A5B0; } // 8003A5A4
  c->r[30]=0u+0x00000000u; // 8003A5A8
  goto L_8003A5F0; // 8003A5AC
L_8003A5B0:;
  c->r[0]=0u+0x90000000u; // 8003A5B0
  cmpu(c,0,c->r[29],c->r[0]); // 8003A5B4
  if (crb(c,0)) { goto L_8003A5D0; } // 8003A5B8
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003A5BC
  cmpu(c,0,c->r[29],c->r[0]); // 8003A5C0
  if (!crb(c,0)) { goto L_8003A5D0; } // 8003A5C4
  c->r[30]=0u+0x00000001u; // 8003A5C8
  goto L_8003A5F0; // 8003A5CC
L_8003A5D0:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003A5D0
  cmpu(c,0,c->r[29],c->r[0]); // 8003A5D4
  if (crb(c,0)) { goto L_8003A5F0; } // 8003A5D8
  c->r[3]=0u+0x98000000u; // 8003A5DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003A5E0
  cmpu(c,0,c->r[29],c->r[0]); // 8003A5E4
  if (!crb(c,0)) { goto L_8003A5F0; } // 8003A5E8
  c->r[30]=0u+0x00000002u; // 8003A5EC
L_8003A5F0:;
  c->r[3]=0u+0x804B0000u; // 8003A5F0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8003A5F4
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8003A5F8
  c->r[4]=c->r[29]|c->r[29]; // 8003A5FC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003A600
  c->lr=0x8003A608u; f_8023B550(c); // 8003A604
  c->r[3]=c->r[31]|c->r[31]; // 8003A608
  c->lr=0x8003A610u; f_8024B1C0(c); // 8003A60C
L_8003A610:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003A610
  c->r[3]=c->r[29]|c->r[29]; // 8003A614
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003A618
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003A61C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003A620
  c->lr=c->r[0]; // 8003A624
  c->r[1]=c->r[1]+0x00000020u; // 8003A628
  return; // 8003A62C
}

// fn_8003A630
void f_8003A630(Ctx* __restrict c) {
  trace_call(0x8003A630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A630
  c->r[0]=c->lr; // 8003A634
  c->r[3]=c->r[13]+0xFFFF94D0u; // 8003A638
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003A63C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003A640
  c->r[31]=0u+0x80010000u; // 8003A644
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A648
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003A64C
  c->r[30]=0u+0x803C0000u; // 8003A650
  c->r[30]=c->r[30]+0x00002D18u; // 8003A654
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003A658
  c->r[5]=c->r[30]+0x00000000u; // 8003A65C
  c->r[29]=R32(c->r[2]+0xFFFFBF18u); // 8003A660
  W32(c->r[13]+0xFFFF94D0u,c->r[29]); // 8003A664
  c->lr=0x8003A66Cu; f_800C2A60(c); // 8003A668
  W32(c->r[13]+0xFFFF94D4u,c->r[29]); // 8003A66C
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A670
  c->r[5]=c->r[30]+0x0000000Cu; // 8003A674
  c->r[3]=c->r[13]+0xFFFF94D4u; // 8003A678
  c->lr=0x8003A680u; f_800C2A60(c); // 8003A67C
  W32(c->r[13]+0xFFFF94D8u,c->r[29]); // 8003A680
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A684
  c->r[5]=c->r[30]+0x00000018u; // 8003A688
  c->r[3]=c->r[13]+0xFFFF94D8u; // 8003A68C
  c->lr=0x8003A694u; f_800C2A60(c); // 8003A690
  W32(c->r[13]+0xFFFF94DCu,c->r[29]); // 8003A694
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A698
  c->r[5]=c->r[30]+0x00000024u; // 8003A69C
  c->r[3]=c->r[13]+0xFFFF94DCu; // 8003A6A0
  c->lr=0x8003A6A8u; f_800C2A60(c); // 8003A6A4
  W32(c->r[13]+0xFFFF94E0u,c->r[29]); // 8003A6A8
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A6AC
  c->r[5]=c->r[30]+0x00000030u; // 8003A6B0
  c->r[3]=c->r[13]+0xFFFF94E0u; // 8003A6B4
  c->lr=0x8003A6BCu; f_800C2A60(c); // 8003A6B8
  W32(c->r[13]+0xFFFF94E4u,c->r[29]); // 8003A6BC
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A6C0
  c->r[5]=c->r[30]+0x0000003Cu; // 8003A6C4
  c->r[3]=c->r[13]+0xFFFF94E4u; // 8003A6C8
  c->lr=0x8003A6D0u; f_800C2A60(c); // 8003A6CC
  W32(c->r[13]+0xFFFF94E8u,c->r[29]); // 8003A6D0
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A6D4
  c->r[5]=c->r[30]+0x00000048u; // 8003A6D8
  c->r[3]=c->r[13]+0xFFFF94E8u; // 8003A6DC
  c->lr=0x8003A6E4u; f_800C2A60(c); // 8003A6E0
  W32(c->r[13]+0xFFFF94ECu,c->r[29]); // 8003A6E4
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A6E8
  c->r[5]=c->r[30]+0x00000054u; // 8003A6EC
  c->r[3]=c->r[13]+0xFFFF94ECu; // 8003A6F0
  c->lr=0x8003A6F8u; f_800C2A60(c); // 8003A6F4
  W32(c->r[13]+0xFFFF94F0u,c->r[29]); // 8003A6F8
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A6FC
  c->r[5]=c->r[30]+0x00000060u; // 8003A700
  c->r[3]=c->r[13]+0xFFFF94F0u; // 8003A704
  c->lr=0x8003A70Cu; f_800C2A60(c); // 8003A708
  W32(c->r[13]+0xFFFF94F4u,c->r[29]); // 8003A70C
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A710
  c->r[5]=c->r[30]+0x0000006Cu; // 8003A714
  c->r[3]=c->r[13]+0xFFFF94F4u; // 8003A718
  c->lr=0x8003A720u; f_800C2A60(c); // 8003A71C
  W32(c->r[13]+0xFFFF94F8u,c->r[29]); // 8003A720
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A724
  c->r[5]=c->r[30]+0x00000078u; // 8003A728
  c->r[3]=c->r[13]+0xFFFF94F8u; // 8003A72C
  c->lr=0x8003A734u; f_800C2A60(c); // 8003A730
  W32(c->r[13]+0xFFFF94FCu,c->r[29]); // 8003A734
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A738
  c->r[5]=c->r[30]+0x00000084u; // 8003A73C
  c->r[3]=c->r[13]+0xFFFF94FCu; // 8003A740
  c->lr=0x8003A748u; f_800C2A60(c); // 8003A744
  W32(c->r[13]+0xFFFF9500u,c->r[29]); // 8003A748
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A74C
  c->r[5]=c->r[30]+0x00000090u; // 8003A750
  c->r[3]=c->r[13]+0xFFFF9500u; // 8003A754
  c->lr=0x8003A75Cu; f_800C2A60(c); // 8003A758
  W32(c->r[13]+0xFFFF9504u,c->r[29]); // 8003A75C
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A760
  c->r[5]=c->r[30]+0x0000009Cu; // 8003A764
  c->r[3]=c->r[13]+0xFFFF9504u; // 8003A768
  c->lr=0x8003A770u; f_800C2A60(c); // 8003A76C
  W32(c->r[13]+0xFFFF9508u,c->r[29]); // 8003A770
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A774
  c->r[5]=c->r[30]+0x000000A8u; // 8003A778
  c->r[3]=c->r[13]+0xFFFF9508u; // 8003A77C
  c->lr=0x8003A784u; f_800C2A60(c); // 8003A780
  W32(c->r[13]+0xFFFF950Cu,c->r[29]); // 8003A784
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 8003A788
  c->r[5]=c->r[30]+0x000000B4u; // 8003A78C
  c->r[3]=c->r[13]+0xFFFF950Cu; // 8003A790
  c->lr=0x8003A798u; f_800C2A60(c); // 8003A794
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003A798
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003A79C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003A7A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003A7A4
  c->lr=c->r[0]; // 8003A7A8
  c->r[1]=c->r[1]+0x00000020u; // 8003A7AC
  return; // 8003A7B0
}

// fn_8003A7B4
void f_8003A7B4(Ctx* __restrict c) {
  trace_call(0x8003A7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A7B4
  c->r[0]=c->lr; // 8003A7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003A7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003A7C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003A7C4
  c->r[30]=c->r[3]|c->r[3]; // 8003A7C8
  c->lr=0x8003A7D0u; f_8030B29C(c); // 8003A7CC
  c->r[3]=c->r[30]+0x000000C0u; // 8003A7D0
  c->lr=0x8003A7D8u; f_8005823C(c); // 8003A7D4
  c->r[4]=0u+0x80380000u; // 8003A7D8
  c->r[3]=c->r[30]+0x0000222Cu; // 8003A7DC
  c->r[4]=c->r[4]+0x00004810u; // 8003A7E0
  W32(c->r[30]+0x00000014u,c->r[4]); // 8003A7E4
  c->r[4]=0u+0x00000000u; // 8003A7E8
  c->r[5]=0u+0x00000024u; // 8003A7EC
  c->r[6]=0u+0x00000000u; // 8003A7F0
  c->lr=0x8003A7F8u; f_80362944(c); // 8003A7F4
  c->r[3]=c->r[30]+0x00002238u; // 8003A7F8
  c->r[4]=0u+0x00000000u; // 8003A7FC
  c->r[5]=0u+0x00000024u; // 8003A800
  c->r[6]=0u+0x00000000u; // 8003A804
  c->lr=0x8003A80Cu; f_80362944(c); // 8003A808
  c->r[3]=c->r[30]+0x00002244u; // 8003A80C
  c->r[4]=0u+0x00000000u; // 8003A810
  c->r[5]=0u+0x00000024u; // 8003A814
  c->r[6]=0u+0x00000000u; // 8003A818
  c->lr=0x8003A820u; f_80362944(c); // 8003A81C
  c->r[3]=c->r[30]|c->r[30]; // 8003A820
  c->r[4]=0u+0x00000002u; // 8003A824
  c->r[5]=0u+0x00000001u; // 8003A828
  c->lr=0x8003A830u; f_8030FFA0(c); // 8003A82C
  c->r[3]=c->r[30]|c->r[30]; // 8003A830
  c->r[4]=0u+0x00000009u; // 8003A834
  c->r[5]=0u+0x00000000u; // 8003A838
  c->lr=0x8003A840u; f_8030FFA0(c); // 8003A83C
  c->r[3]=0u+0x803C0000u; // 8003A840
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003A844
  c->r[3]=c->r[3]+0x00002300u; // 8003A848
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003A84C
  W32(c->r[3]+0x00000020u,c->r[30]); // 8003A850
  c->r[31]=0u+0x00000000u; // 8003A854
  {uint32_t ea=c->r[2]+0xFFFF8618u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003A858
  c->r[0]=0u+0x00000010u; // 8003A85C
  {uint32_t ea=c->r[2]+0xFFFF861Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A860
  c->r[3]=c->r[30]+0x00002238u; // 8003A864
  {uint32_t ea=c->r[30]+0x00002120u; WF32(ea,c->f[3]);} // 8003A868
  c->r[4]=0u+0x00000000u; // 8003A86C
  c->r[5]=0u+0x00000024u; // 8003A870
  c->r[6]=0u+0x00000000u; // 8003A874
  {uint32_t ea=c->r[30]+0x00002124u; WF32(ea,c->f[2]);} // 8003A878
  {uint32_t ea=c->r[30]+0x00002128u; WF32(ea,c->f[3]);} // 8003A87C
  {uint32_t ea=c->r[30]+0x000021D0u; WF32(ea,c->f[1]);} // 8003A880
  {uint32_t ea=c->r[30]+0x000021CCu; WF32(ea,c->f[3]);} // 8003A884
  {uint32_t ea=c->r[30]+0x000021D4u; WF32(ea,c->f[2]);} // 8003A888
  {uint32_t ea=c->r[30]+0x00002184u; WF32(ea,c->f[3]);} // 8003A88C
  {uint32_t ea=c->r[30]+0x000021E0u; WF32(ea,c->f[3]);} // 8003A890
  W32(c->r[30]+0x000021C0u,c->r[31]); // 8003A894
  W32(c->r[30]+0x0000220Cu,c->r[0]); // 8003A898
  {uint32_t ea=c->r[30]+0x00002210u; WF32(ea,c->f[2]);} // 8003A89C
  {uint32_t ea=c->r[30]+0x00002214u; WF32(ea,c->f[1]);} // 8003A8A0
  {uint32_t ea=c->r[30]+0x00002218u; WF32(ea,c->f[3]);} // 8003A8A4
  {uint32_t ea=c->r[30]+0x0000221Cu; WF32(ea,c->f[2]);} // 8003A8A8
  {uint32_t ea=c->r[30]+0x00002250u; WF32(ea,c->f[0]);} // 8003A8AC
  {uint32_t ea=c->r[30]+0x00002254u; WF32(ea,c->f[2]);} // 8003A8B0
  {uint32_t ea=c->r[30]+0x00002258u; WF32(ea,c->f[3]);} // 8003A8B4
  {uint32_t ea=c->r[30]+0x0000225Cu; WF32(ea,c->f[3]);} // 8003A8B8
  c->lr=0x8003A8C0u; f_80362944(c); // 8003A8BC
  c->r[3]=c->r[30]+0x00002244u; // 8003A8C0
  c->r[4]=0u+0x00000000u; // 8003A8C4
  c->r[5]=0u+0x00000024u; // 8003A8C8
  c->r[6]=0u+0x00000000u; // 8003A8CC
  c->lr=0x8003A8D4u; f_80362944(c); // 8003A8D0
  c->r[3]=c->r[30]+0x0000222Cu; // 8003A8D4
  c->r[4]=0u+0x00000000u; // 8003A8D8
  c->r[5]=0u+0x00000024u; // 8003A8DC
  c->r[6]=0u+0x00000000u; // 8003A8E0
  c->lr=0x8003A8E8u; f_80362944(c); // 8003A8E4
  W8(c->r[30]+0x00002260u,c->r[31]); // 8003A8E8
  c->r[5]=0u+0x804B0000u; // 8003A8EC
  c->r[4]=c->r[5]+0xFFFFC570u; // 8003A8F0
  c->r[3]=c->r[30]|c->r[30]; // 8003A8F4
  W32(c->r[30]+0x000021E8u,c->r[31]); // 8003A8F8
  W32(c->r[30]+0x000021E4u,c->r[31]); // 8003A8FC
  W32(c->r[30]+0x000021ECu,c->r[31]); // 8003A900
  {uint32_t ea=c->r[5]+0xFFFFC570u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A904
  {uint32_t ea=c->r[30]+0x00002190u; WF32(ea,c->f[0]);} // 8003A908
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A90C
  {uint32_t ea=c->r[30]+0x00002194u; WF32(ea,c->f[0]);} // 8003A910
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A914
  {uint32_t ea=c->r[30]+0x00002198u; WF32(ea,c->f[0]);} // 8003A918
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A91C
  {uint32_t ea=c->r[30]+0x000021A0u; WF32(ea,c->f[0]);} // 8003A920
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A924
  {uint32_t ea=c->r[30]+0x000021A4u; WF32(ea,c->f[0]);} // 8003A928
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A92C
  {uint32_t ea=c->r[30]+0x000021A8u; WF32(ea,c->f[0]);} // 8003A930
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A934
  {uint32_t ea=c->r[30]+0x000021ACu; WF32(ea,c->f[0]);} // 8003A938
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A93C
  {uint32_t ea=c->r[30]+0x000021B0u; WF32(ea,c->f[0]);} // 8003A940
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A944
  {uint32_t ea=c->r[30]+0x000021B4u; WF32(ea,c->f[0]);} // 8003A948
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003A94C
  {uint32_t ea=c->r[30]+0x000021B8u; WF32(ea,c->f[0]);} // 8003A950
  W32(c->r[30]+0x000021F0u,c->r[31]); // 8003A954
  W32(c->r[30]+0x000021F8u,c->r[31]); // 8003A958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003A95C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003A960
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003A964
  c->lr=c->r[0]; // 8003A968
  c->r[1]=c->r[1]+0x00000010u; // 8003A96C
  return; // 8003A970
}

// fn_8003A974
void f_8003A974(Ctx* __restrict c) {
  trace_call(0x8003A974u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8003A974
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8003A978
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 8003A97C
  return; // 8003A980
}

// fn_8003A984
void f_8003A984(Ctx* __restrict c) {
  trace_call(0x8003A984u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A984
  c->r[0]=c->lr; // 8003A988
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003A98C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003A990
  c->r[31]=c->r[5]|c->r[5]; // 8003A994
  c->r[5]=0u+0x00000010u; // 8003A998
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003A99C
  c->r[30]=c->r[4]|c->r[4]; // 8003A9A0
  c->r[4]=0u+0x00002270u; // 8003A9A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003A9A8
  c->r[29]=c->r[3]|c->r[3]; // 8003A9AC
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 8003A9B0
  c->r[3]=R32(c->r[6]+0x00000000u); // 8003A9B4
  c->lr=0x8003A9BCu; f_802A89E4(c); // 8003A9B8
  cmps(c,0,(int32_t)c->r[3],0); // 8003A9BC
  if (crb(c,2)) { goto L_8003A9D4; } // 8003A9C0
  c->r[4]=c->r[29]|c->r[29]; // 8003A9C4
  c->r[5]=c->r[30]|c->r[30]; // 8003A9C8
  c->r[6]=c->r[31]|c->r[31]; // 8003A9CC
  c->lr=0x8003A9D4u; f_8003A7B4(c); // 8003A9D0
L_8003A9D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003A9D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003A9D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003A9DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003A9E0
  c->lr=c->r[0]; // 8003A9E4
  c->r[1]=c->r[1]+0x00000020u; // 8003A9E8
  return; // 8003A9EC
}

// fn_8003A9F0
void f_8003A9F0(Ctx* __restrict c) {
  trace_call(0x8003A9F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003A9F0
  c->r[0]=c->lr; // 8003A9F4
  cmps(c,0,(int32_t)c->r[3],0); // 8003A9F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003A9FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003AA00
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003AA04
  c->r[30]=c->r[4]|c->r[4]; // 8003AA08
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003AA0C
  c->r[29]=c->r[3]|c->r[3]; // 8003AA10
  if (crb(c,2)) { goto L_8003AB38; } // 8003AA14
  c->r[0]=R32(c->r[3]+0x000021E8u); // 8003AA18
  c->r[4]=0u+0x80380000u; // 8003AA1C
  c->r[4]=c->r[4]+0x00004810u; // 8003AA20
  W32(c->r[3]+0x00000014u,c->r[4]); // 8003AA24
  cmps(c,0,(int32_t)c->r[0],0); // 8003AA28
  if (crb(c,2)) { goto L_8003AA48; } // 8003AA2C
  c->r[3]=c->r[0]|c->r[0]; // 8003AA30
  c->lr=0x8003AA38u; f_80319494(c); // 8003AA34
  c->r[4]=R32(c->r[29]+0x000021E8u); // 8003AA38
  c->r[3]=R32(c->r[29]+0x000021E4u); // 8003AA3C
  c->r[4]=c->r[4]+0x00000008u; // 8003AA40
  c->lr=0x8003AA48u; f_8031AB94(c); // 8003AA44
L_8003AA48:;
  c->r[3]=c->r[29]+0x00002238u; // 8003AA48
  c->r[4]=0u+0x00000000u; // 8003AA4C
  c->lr=0x8003AA54u; f_80362B84(c); // 8003AA50
  c->r[3]=c->r[29]+0x00002244u; // 8003AA54
  c->r[4]=0u+0x00000000u; // 8003AA58
  c->lr=0x8003AA60u; f_80362B84(c); // 8003AA5C
  c->r[3]=c->r[29]+0x0000222Cu; // 8003AA60
  c->r[4]=0u+0x00000000u; // 8003AA64
  c->lr=0x8003AA6Cu; f_80362B84(c); // 8003AA68
  c->r[3]=c->r[29]+0x000000C0u; // 8003AA6C
  c->r[4]=0u+0x00000000u; // 8003AA70
  c->lr=0x8003AA78u; f_80058278(c); // 8003AA74
  c->r[3]=c->r[29]|c->r[29]; // 8003AA78
  c->r[4]=0u+0x00000000u; // 8003AA7C
  c->lr=0x8003AA84u; f_8030BAE0(c); // 8003AA80
  cmps(c,0,(int32_t)c->r[30],0); // 8003AA84
  if (!crb(c,1)) { goto L_8003AB38; } // 8003AA88
  c->lr=0x8003AA90u; f_8028B53C(c); // 8003AA8C
  c->r[31]=0u+0x804B0000u; // 8003AA90
  c->r[31]=c->r[31]+0xFFFFC800u; // 8003AA94
  c->r[3]=c->r[31]|c->r[31]; // 8003AA98
  c->lr=0x8003AAA0u; f_8024B0E0(c); // 8003AA9C
  cmps(c,0,(int32_t)c->r[29],0); // 8003AAA0
  if (!crb(c,2)) { goto L_8003AAB4; } // 8003AAA4
  c->r[3]=c->r[31]|c->r[31]; // 8003AAA8
  c->lr=0x8003AAB0u; f_8024B1C0(c); // 8003AAAC
  goto L_8003AB38; // 8003AAB0
L_8003AAB4:;
  c->r[0]=0u+0x80000000u; // 8003AAB4
  cmpu(c,0,c->r[29],c->r[0]); // 8003AAB8
  if (crb(c,0)) { goto L_8003AAD8; } // 8003AABC
  c->r[3]=0u+0x81800000u; // 8003AAC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003AAC4
  cmpu(c,0,c->r[29],c->r[0]); // 8003AAC8
  if (!crb(c,0)) { goto L_8003AAD8; } // 8003AACC
  c->r[30]=0u+0x00000000u; // 8003AAD0
  goto L_8003AB18; // 8003AAD4
L_8003AAD8:;
  c->r[0]=0u+0x90000000u; // 8003AAD8
  cmpu(c,0,c->r[29],c->r[0]); // 8003AADC
  if (crb(c,0)) { goto L_8003AAF8; } // 8003AAE0
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003AAE4
  cmpu(c,0,c->r[29],c->r[0]); // 8003AAE8
  if (!crb(c,0)) { goto L_8003AAF8; } // 8003AAEC
  c->r[30]=0u+0x00000001u; // 8003AAF0
  goto L_8003AB18; // 8003AAF4
L_8003AAF8:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003AAF8
  cmpu(c,0,c->r[29],c->r[0]); // 8003AAFC
  if (crb(c,0)) { goto L_8003AB18; } // 8003AB00
  c->r[3]=0u+0x98000000u; // 8003AB04
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003AB08
  cmpu(c,0,c->r[29],c->r[0]); // 8003AB0C
  if (!crb(c,0)) { goto L_8003AB18; } // 8003AB10
  c->r[30]=0u+0x00000002u; // 8003AB14
L_8003AB18:;
  c->r[3]=0u+0x804B0000u; // 8003AB18
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8003AB1C
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8003AB20
  c->r[4]=c->r[29]|c->r[29]; // 8003AB24
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003AB28
  c->lr=0x8003AB30u; f_8023B550(c); // 8003AB2C
  c->r[3]=c->r[31]|c->r[31]; // 8003AB30
  c->lr=0x8003AB38u; f_8024B1C0(c); // 8003AB34
L_8003AB38:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003AB38
  c->r[3]=c->r[29]|c->r[29]; // 8003AB3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003AB40
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003AB44
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003AB48
  c->lr=c->r[0]; // 8003AB4C
  c->r[1]=c->r[1]+0x00000020u; // 8003AB50
  return; // 8003AB54
}

// fn_8003AB58
void f_8003AB58(Ctx* __restrict c) {
  trace_call(0x8003AB58u);
  c->r[4]=R32(c->r[3]+0x000021E8u); // 8003AB58
  cmps(c,0,(int32_t)c->r[4],0); // 8003AB5C
  if (crb(c,2)) return; // 8003AB60
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003AB64
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003AB68
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003AB6C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8003AB70
  c->f[3]=(c->f[3]>=0.0)?c->f[0]:c->f[1]; // 8003AB74
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 8003AB78
  c->f[0]=(c->f[0]>=0.0)?c->f[2]:c->f[3]; // 8003AB7C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 8003AB80
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 8003AB84
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003AB88
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8003AB8C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003AB90
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8003AB94
  return; // 8003AB98
}

// fn_8003AB9C
void f_8003AB9C(Ctx* __restrict c) {
  trace_call(0x8003AB9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003AB9C
  c->r[0]=c->lr; // 8003ABA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003ABA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003ABA8
  c->r[31]=c->r[3]|c->r[3]; // 8003ABAC
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003ABB0
  c->r[0]=R32(c->r[4]+0x00000224u); // 8003ABB4
  cmps(c,0,(int32_t)c->r[0],0); // 8003ABB8
  if (!crb(c,2)) { goto L_8003ABFC; } // 8003ABBC
  c->r[3]=0u+0x803C0000u; // 8003ABC0
  c->r[3]=c->r[3]+0x00002300u; // 8003ABC4
  c->lr=0x8003ABCCu; f_8003D9D0(c); // 8003ABC8
  c->r[3]=c->r[31]|c->r[31]; // 8003ABCC
  c->lr=0x8003ABD4u; f_8003BF3C(c); // 8003ABD0
  c->r[3]=c->r[31]|c->r[31]; // 8003ABD4
  c->lr=0x8003ABDCu; f_8003B7BC(c); // 8003ABD8
  c->r[3]=c->r[31]|c->r[31]; // 8003ABDC
  c->lr=0x8003ABE4u; f_8003BC94(c); // 8003ABE0
  c->r[3]=c->r[31]|c->r[31]; // 8003ABE4
  c->lr=0x8003ABECu; f_8003C028(c); // 8003ABE8
  c->r[3]=c->r[31]|c->r[31]; // 8003ABEC
  c->lr=0x8003ABF4u; f_8003C9A8(c); // 8003ABF0
  c->r[3]=c->r[31]|c->r[31]; // 8003ABF4
  c->lr=0x8003ABFCu; f_8003AB58(c); // 8003ABF8
L_8003ABFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003ABFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003AC00
  c->lr=c->r[0]; // 8003AC04
  c->r[1]=c->r[1]+0x00000010u; // 8003AC08
  return; // 8003AC0C
}

// fn_8003AC10
void f_8003AC10(Ctx* __restrict c) {
  trace_call(0x8003AC10u);
  c->r[7]=R32(c->r[13]+0xFFFF9478u); // 8003AC10
  c->r[0]=R32(c->r[7]+0x00000224u); // 8003AC14
  cmps(c,0,(int32_t)c->r[0],0); // 8003AC18
  if (crb(c,2)) { goto L_8003AC24; } // 8003AC1C
  f_8030CA7C(c); return; // 8003AC20
L_8003AC24:;
  f_8030C6C0(c); return; // 8003AC24
}

// fn_8003AC28
void f_8003AC28(Ctx* __restrict c) {
  trace_call(0x8003AC28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003AC28
  c->r[0]=c->lr; // 8003AC2C
  c->r[4]=0u+0x80370000u; // 8003AC30
  c->r[5]=0u+0x00000000u; // 8003AC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003AC38
  c->r[4]=c->r[4]+0x00003B70u; // 8003AC3C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003AC40
  c->lr=0x8003AC48u; f_8031E640(c); // 8003AC44
  W32(c->r[13]+0xFFFF9510u,c->r[3]); // 8003AC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003AC4C
  c->lr=c->r[0]; // 8003AC50
  c->r[1]=c->r[1]+0x00000010u; // 8003AC54
  return; // 8003AC58
}

// fn_8003AC5C
void f_8003AC5C(Ctx* __restrict c) {
  trace_call(0x8003AC5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003AC5C
  c->r[0]=c->lr; // 8003AC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003AC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003AC68
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003AC6C
  c->r[31]=R32(c->r[13]+0xFFFFA510u); // 8003AC70
  c->r[3]=c->r[31]|c->r[31]; // 8003AC74
  c->lr=0x8003AC7Cu; f_8024B0E0(c); // 8003AC78
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 8003AC7C
  c->r[4]=R32(c->r[13]+0xFFFF9510u); // 8003AC80
  cmpu(c,0,c->r[4],c->r[30]); // 8003AC84
  if (!crb(c,2)) { goto L_8003AC98; } // 8003AC88
  c->r[3]=c->r[31]|c->r[31]; // 8003AC8C
  c->lr=0x8003AC94u; f_8024B1C0(c); // 8003AC90
  goto L_8003ACD0; // 8003AC94
L_8003AC98:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003AC98
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003AC9C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003ACA0
  cmpu(c,0,c->r[0],0x00000001u); // 8003ACA4
  if (!crb(c,2)) { goto L_8003ACC4; } // 8003ACA8
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003ACAC
  cmpu(c,0,c->r[0],0x00000001u); // 8003ACB0
  if (!crb(c,2)) { goto L_8003ACC4; } // 8003ACB4
  c->r[3]=c->r[31]|c->r[31]; // 8003ACB8
  c->r[4]=c->r[13]+0xFFFF9510u; // 8003ACBC
  c->lr=0x8003ACC4u; f_8031EEDC(c); // 8003ACC0
L_8003ACC4:;
  W32(c->r[13]+0xFFFF9510u,c->r[30]); // 8003ACC4
  c->r[3]=c->r[31]|c->r[31]; // 8003ACC8
  c->lr=0x8003ACD0u; f_8024B1C0(c); // 8003ACCC
L_8003ACD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003ACD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003ACD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003ACD8
  c->lr=c->r[0]; // 8003ACDC
  c->r[1]=c->r[1]+0x00000010u; // 8003ACE0
  return; // 8003ACE4
}

// fn_8003ACE8
void f_8003ACE8(Ctx* __restrict c) {
  trace_call(0x8003ACE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003ACE8
  c->r[0]=c->lr; // 8003ACEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8003ACF0
  c->r[11]=c->r[1]+0x00000020u; // 8003ACF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8003ACF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8003ACFC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8003AD00
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8003AD04
  c->lr=0x8003AD0Cu; f_800C2E48(c); // 8003AD08
  c->r[0]=0u+0x00000000u; // 8003AD0C
  c->r[31]=0u+0x80380000u; // 8003AD10
  W32(c->r[3]+0x000021F0u,c->r[0]); // 8003AD14
  c->r[4]=0u+0x803D0000u; // 8003AD18
  {uint32_t ea=c->r[2]+0xFFFF8624u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003AD1C
  c->r[27]=c->r[3]|c->r[3]; // 8003AD20
  W32(c->r[3]+0x000021F8u,c->r[0]); // 8003AD24
  c->r[31]=c->r[31]+0x00004798u; // 8003AD28
  {uint32_t ea=c->r[2]+0xFFFF8628u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003AD2C
  c->r[3]=c->r[4]+0x0000407Cu; // 8003AD30
  c->lr=0x8003AD38u; f_800B7570(c); // 8003AD34
  c->r[3]=c->r[3]+0x00000018u; // 8003AD38
  c->lr=0x8003AD40u; f_8000A2D8(c); // 8003AD3C
  c->r[28]=c->r[3]|c->r[3]; // 8003AD40
  c->r[3]=c->r[27]|c->r[27]; // 8003AD44
  c->lr=0x8003AD4Cu; f_8003B00C(c); // 8003AD48
  cmps(c,0,(int32_t)c->r[28],3); // 8003AD4C
  if (!crb(c,2)) { goto L_8003AD5C; } // 8003AD50
  {uint32_t ea=c->r[2]+0xFFFF862Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8003AD54
  {uint32_t ea=c->r[2]+0xFFFF8630u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003AD58
L_8003AD5C:;
  c->r[3]=0u+0x803D0000u; // 8003AD5C
  c->r[4]=0u+0x80370000u; // 8003AD60
  c->r[3]=c->r[3]+0x0000407Cu; // 8003AD64
  c->r[29]=0u+0x00000000u; // 8003AD68
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003AD6C
  c->r[4]=c->r[4]+0x00003B70u; // 8003AD70
  c->r[30]=c->r[4]+0x00000006u; // 8003AD74
  c->r[28]=R32(c->r[3]+0x000000A4u); // 8003AD78
  c->r[4]=c->r[30]|c->r[30]; // 8003AD7C
  goto L_8003AD9C; // 8003AD80
L_8003AD84:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003AD84
  c->r[3]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8003AD88
  c->r[4]=c->r[4]+0x00000001u; // 8003AD8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8003AD90
  c->r[0]=c->r[29]+c->r[0]; // 8003AD94
  c->r[29]=c->r[3]+c->r[0]; // 8003AD98
L_8003AD9C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003AD9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8003ADA0
  if (!crb(c,2)) { IRQCHK(c); goto L_8003AD84; } // 8003ADA4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8003ADA8
  c->r[4]=R32(c->r[28]+0x00000004u); // 8003ADAC
  c->r[0]=divwu(c->r[29],c->r[3]); // 8003ADB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8003ADB4
  c->r[0]=c->r[29]-c->r[0]; // 8003ADB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003ADBC
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003ADC0
  goto L_8003AE00; // 8003ADC4
L_8003ADC8:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8003ADC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8003ADCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003ADD0
  c->r[26]=c->r[3]+c->r[0]; // 8003ADD4
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003ADD8
  cmpu(c,0,c->r[0],c->r[29]); // 8003ADDC
  if (!crb(c,2)) { goto L_8003ADFC; } // 8003ADE0
  c->r[3]=R32(c->r[26]+0x00000004u); // 8003ADE4
  c->r[4]=c->r[30]|c->r[30]; // 8003ADE8
  c->lr=0x8003ADF0u; f_800CA380(c); // 8003ADEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003ADF0
  if (!crb(c,2)) { goto L_8003ADFC; } // 8003ADF4
  goto L_8003AE0C; // 8003ADF8
L_8003ADFC:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 8003ADFC
L_8003AE00:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003AE00
  if (!crb(c,2)) { IRQCHK(c); goto L_8003ADC8; } // 8003AE04
  c->r[26]=0u+0x00000000u; // 8003AE08
L_8003AE0C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8003AE0C
  if (!crb(c,2)) { goto L_8003AE1C; } // 8003AE10
  c->r[3]=0u+0x00000000u; // 8003AE14
  goto L_8003AE20; // 8003AE18
L_8003AE1C:;
  c->r[3]=c->r[26]+0x00000008u; // 8003AE1C
L_8003AE20:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003AE20
  if (!crb(c,2)) { goto L_8003AE30; } // 8003AE24
  c->r[3]=0u+0x00000000u; // 8003AE28
  goto L_8003AE34; // 8003AE2C
L_8003AE30:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003AE30
L_8003AE34:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003AE34
  if (crb(c,2)) { goto L_8003AE70; } // 8003AE38
  c->r[3]=R32(c->r[3]+0x000000D4u); // 8003AE3C
  c->r[4]=0u+0x00000001u; // 8003AE40
  W32(c->r[27]+0x000021F0u,c->r[3]); // 8003AE44
  c->r[3]=c->r[3]+0x000000C0u; // 8003AE48
  c->lr=0x8003AE50u; f_8005838C(c); // 8003AE4C
  c->r[3]=R32(c->r[27]+0x000021F0u); // 8003AE50
  c->f[1]=-c->f[30]; // 8003AE54
  c->r[3]=c->r[3]+0x000000C0u; // 8003AE58
  c->lr=0x8003AE60u; f_800585FC(c); // 8003AE5C
  {uint32_t ea=c->r[27]+0x000021F4u; WF32(ea,c->f[31]);} // 8003AE60
  c->r[3]=R32(c->r[27]+0x000021F0u); // 8003AE64
  {uint32_t ea=c->r[2]+0xFFFF8634u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003AE68
  c->lr=0x8003AE70u; f_8005C948(c); // 8003AE6C
L_8003AE70:;
  c->r[3]=0u+0x803D0000u; // 8003AE70
  c->r[4]=0u+0x80370000u; // 8003AE74
  c->r[3]=c->r[3]+0x0000407Cu; // 8003AE78
  c->r[29]=0u+0x00000000u; // 8003AE7C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003AE80
  c->r[4]=c->r[4]+0x00003B70u; // 8003AE84
  c->r[28]=c->r[4]+0x00000019u; // 8003AE88
  c->r[30]=R32(c->r[3]+0x000000A4u); // 8003AE8C
  c->r[4]=c->r[28]|c->r[28]; // 8003AE90
  goto L_8003AEB0; // 8003AE94
L_8003AE98:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003AE98
  c->r[3]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8003AE9C
  c->r[4]=c->r[4]+0x00000001u; // 8003AEA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8003AEA4
  c->r[0]=c->r[29]+c->r[0]; // 8003AEA8
  c->r[29]=c->r[3]+c->r[0]; // 8003AEAC
L_8003AEB0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003AEB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8003AEB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8003AE98; } // 8003AEB8
  c->r[3]=R32(c->r[30]+0x00000000u); // 8003AEBC
  c->r[4]=R32(c->r[30]+0x00000004u); // 8003AEC0
  c->r[0]=divwu(c->r[29],c->r[3]); // 8003AEC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8003AEC8
  c->r[0]=c->r[29]-c->r[0]; // 8003AECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003AED0
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003AED4
  goto L_8003AF14; // 8003AED8
L_8003AEDC:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8003AEDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8003AEE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003AEE4
  c->r[26]=c->r[3]+c->r[0]; // 8003AEE8
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003AEEC
  cmpu(c,0,c->r[0],c->r[29]); // 8003AEF0
  if (!crb(c,2)) { goto L_8003AF10; } // 8003AEF4
  c->r[3]=R32(c->r[26]+0x00000004u); // 8003AEF8
  c->r[4]=c->r[28]|c->r[28]; // 8003AEFC
  c->lr=0x8003AF04u; f_800CA380(c); // 8003AF00
  cmps(c,0,(int32_t)c->r[3],0); // 8003AF04
  if (!crb(c,2)) { goto L_8003AF10; } // 8003AF08
  goto L_8003AF20; // 8003AF0C
L_8003AF10:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 8003AF10
L_8003AF14:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003AF14
  if (!crb(c,2)) { IRQCHK(c); goto L_8003AEDC; } // 8003AF18
  c->r[26]=0u+0x00000000u; // 8003AF1C
L_8003AF20:;
  cmps(c,0,(int32_t)c->r[26],0); // 8003AF20
  if (!crb(c,2)) { goto L_8003AF30; } // 8003AF24
  c->r[3]=0u+0x00000000u; // 8003AF28
  goto L_8003AF34; // 8003AF2C
L_8003AF30:;
  c->r[3]=c->r[26]+0x00000008u; // 8003AF30
L_8003AF34:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003AF34
  if (!crb(c,2)) { goto L_8003AF44; } // 8003AF38
  c->r[3]=0u+0x00000000u; // 8003AF3C
  goto L_8003AF48; // 8003AF40
L_8003AF44:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003AF44
L_8003AF48:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003AF48
  if (crb(c,2)) { goto L_8003AF78; } // 8003AF4C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 8003AF50
  c->r[4]=0u+0x00000001u; // 8003AF54
  W32(c->r[27]+0x000021F8u,c->r[3]); // 8003AF58
  c->r[3]=c->r[3]+0x000000C0u; // 8003AF5C
  c->lr=0x8003AF64u; f_8005838C(c); // 8003AF60
  c->r[3]=R32(c->r[27]+0x000021F8u); // 8003AF64
  c->f[1]=c->f[30]; // 8003AF68
  c->r[3]=c->r[3]+0x000000C0u; // 8003AF6C
  c->lr=0x8003AF74u; f_800585FC(c); // 8003AF70
  {uint32_t ea=c->r[27]+0x000021FCu; WF32(ea,c->f[31]);} // 8003AF74
L_8003AF78:;
  c->r[3]=c->r[27]|c->r[27]; // 8003AF78
  c->lr=0x8003AF80u; f_8003B328(c); // 8003AF7C
  c->r[0]=R32(c->r[27]+0x000021F0u); // 8003AF80
  c->r[5]=0u+0x00000000u; // 8003AF84
  W32(c->r[27]+0x00002208u,c->r[5]); // 8003AF88
  cmps(c,0,(int32_t)c->r[0],0); // 8003AF8C
  if (!crb(c,2)) { goto L_8003AFA0; } // 8003AF90
  c->r[0]=R32(c->r[27]+0x000021F8u); // 8003AF94
  cmps(c,0,(int32_t)c->r[0],0); // 8003AF98
  if (crb(c,2)) { goto L_8003AFC0; } // 8003AF9C
L_8003AFA0:;
  c->r[0]=0u+0x00000000u; // 8003AFA0
  c->r[4]=c->r[31]+0x00000020u; // 8003AFA4
  c->r[3]=c->r[31]+0x00000000u; // 8003AFA8
  W32(c->r[27]+0x00002220u,c->r[4]); // 8003AFAC
  W32(c->r[27]+0x00002224u,c->r[3]); // 8003AFB0
  W32(c->r[27]+0x00002228u,c->r[0]); // 8003AFB4
  W32(c->r[27]+0x00002204u,c->r[0]); // 8003AFB8
  goto L_8003AFDC; // 8003AFBC
L_8003AFC0:;
  c->r[4]=c->r[31]+0x00000040u; // 8003AFC0
  c->r[3]=c->r[31]+0x00000058u; // 8003AFC4
  c->r[0]=0u+0x00000001u; // 8003AFC8
  W32(c->r[27]+0x00002220u,c->r[5]); // 8003AFCC
  W32(c->r[27]+0x00002224u,c->r[4]); // 8003AFD0
  W32(c->r[27]+0x00002228u,c->r[3]); // 8003AFD4
  W32(c->r[27]+0x00002204u,c->r[0]); // 8003AFD8
L_8003AFDC:;
  c->r[11]=c->r[1]+0x00000020u; // 8003AFDC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8003AFE0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8003AFE4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8003AFE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8003AFEC
  c->lr=0x8003AFF4u; f_800C2E94(c); // 8003AFF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003AFF4
  c->lr=c->r[0]; // 8003AFF8
  c->r[1]=c->r[1]+0x00000040u; // 8003AFFC
  return; // 8003B000
}

// fn_8003B004
void f_8003B004(Ctx* __restrict c) {
  trace_call(0x8003B004u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003B004
  return; // 8003B008
}

// fn_8003B00C
void f_8003B00C(Ctx* __restrict c) {
  trace_call(0x8003B00Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003B00C
  c->r[0]=c->lr; // 8003B010
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8003B014
  c->r[11]=c->r[1]+0x000000D0u; // 8003B018
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 8003B01C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 8003B020
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 8003B024
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 8003B028
  c->lr=0x8003B030u; f_800C2E3C(c); // 8003B02C
  c->r[23]=0u+0x803D0000u; // 8003B030
  c->r[26]=c->r[3]|c->r[3]; // 8003B034
  c->r[3]=c->r[23]+0x0000407Cu; // 8003B038
  c->lr=0x8003B040u; f_800B7570(c); // 8003B03C
  c->r[3]=c->r[3]+0x00000018u; // 8003B040
  c->lr=0x8003B048u; f_8000A2D8(c); // 8003B044
  c->r[3]=R32(c->r[26]+0x000000B0u); // 8003B048
  cmps(c,0,(int32_t)c->r[3],0); // 8003B04C
  if (crb(c,2)) { goto L_8003B1D4; } // 8003B050
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8003B054
  c->r[4]=c->r[23]+0x0000407Cu; // 8003B058
  W32(c->r[26]+0x000021E4u,c->r[3]); // 8003B05C
  c->r[3]=R32(c->r[3]+0x00000010u); // 8003B060
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8003B064
  c->lr=0x8003B06Cu; f_8000C334(c); // 8003B068
  c->r[4]=R32(c->r[26]+0x00000030u); // 8003B06C
  c->r[3]=0u+0x80370000u; // 8003B070
  c->r[29]=c->r[3]+0x00003B70u; // 8003B074
  c->r[6]=R32(c->r[4]+0x00000018u); // 8003B078
  c->r[3]=c->r[1]+0x00000028u; // 8003B07C
  c->r[5]=c->r[29]+0x0000002Du; // 8003B080
  c->r[4]=0u+0x00000080u; // 8003B084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8003B088
  c->lr=0x8003B090u; f_8000D29C(c); // 8003B08C
  c->r[3]=R32(c->r[26]+0x000000B0u); // 8003B090
  c->r[4]=c->r[1]+0x00000028u; // 8003B094
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8003B098
  c->lr=0x8003B0A0u; f_8031A7F4(c); // 8003B09C
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003B0A0
  c->r[31]=0u+0x00000004u; // 8003B0A4
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003B0A8
  c->r[0]=0u+0x00000001u; // 8003B0AC
  W32(c->r[26]+0x000021E8u,c->r[3]); // 8003B0B0
  c->r[24]=0u+0x00000002u; // 8003B0B4
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 8003B0B8
  c->r[23]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 8003B0BC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[31]);} // 8003B0C0
  c->r[25]=((c->r[24])&0x20)?0u:(c->r[0]<<((c->r[24])&31)); // 8003B0C4
  c->r[27]=0u+0x00000000u; // 8003B0C8
  c->r[28]=0u+0x00000000u; // 8003B0CC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B0D0
  c->f[1]=(c->f[1]>=0.0)?c->f[31]:c->f[30]; // 8003B0D4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003B0D8
  c->r[30]=0u+0x00000000u; // 8003B0DC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003B0E0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 8003B0E4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8003B0E8
  c->r[3]=R32(c->r[26]+0x000021E8u); // 8003B0EC
  c->f[2]=(c->f[2]>=0.0)?c->f[31]:c->f[1]; // 8003B0F0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8003B0F4
  goto L_8003B1B0; // 8003B0F8
L_8003B0FC:;
  c->r[4]=R32(c->r[26]+0x00000030u); // 8003B0FC
  c->r[7]=c->r[27]|c->r[27]; // 8003B100
  c->r[3]=c->r[1]+0x00000028u; // 8003B104
  c->r[5]=c->r[29]+0x0000003Au; // 8003B108
  c->r[6]=R32(c->r[4]+0x00000018u); // 8003B10C
  c->r[4]=0u+0x00000080u; // 8003B110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8003B114
  c->lr=0x8003B11Cu; f_8000D29C(c); // 8003B118
  c->r[5]=R32(c->r[26]+0x000021E4u); // 8003B11C
  c->r[4]=c->r[1]+0x00000028u; // 8003B120
  c->r[3]=R32(c->r[26]+0x000021E8u); // 8003B124
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003B128
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003B12C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8003B130
  c->r[5]=R32(c->r[5]+c->r[28]); // 8003B134
  c->lr=0x8003B13Cu; f_80318F84(c); // 8003B138
  W32(c->r[3]+0x00000020u,c->r[30]); // 8003B13C
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[30]); // 8003B140
  c->r[5]=c->r[3]+0x00000014u; // 8003B144
  c->r[28]=c->r[28]+0x00000004u; // 8003B148
  W32(c->r[3]+0x00000024u,c->r[30]); // 8003B14C
  c->r[27]=c->r[27]+0x00000001u; // 8003B150
  c->f[0]=(c->f[0]>=0.0)?c->f[30]:c->f[30]; // 8003B154
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003B158
  W32(c->r[1]+0x00000018u,c->r[5]); // 8003B15C
  c->r[0]=c->r[0]&~c->r[23]; // 8003B160
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8003B164
  W32(c->r[3]+0x00000014u,c->r[0]); // 8003B168
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[30]);} // 8003B16C
  c->f[1]=(c->f[1]>=0.0)?c->f[31]:c->f[0]; // 8003B170
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B174
  c->r[4]=R32(c->r[3]+0x00000010u); // 8003B178
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8003B17C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003B180
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 8003B184
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8003B188
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003B18C
  W32(c->r[1]+0x00000010u,c->r[5]); // 8003B190
  c->r[0]=c->r[0]|c->r[25]; // 8003B194
  W32(c->r[1]+0x00000014u,c->r[31]); // 8003B198
  W32(c->r[1]+0x00000008u,c->r[5]); // 8003B19C
  W32(c->r[1]+0x0000000Cu,c->r[24]); // 8003B1A0
  W32(c->r[1]+0x00000020u,c->r[5]); // 8003B1A4
  W32(c->r[1]+0x00000024u,c->r[24]); // 8003B1A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8003B1AC
L_8003B1B0:;
  c->r[3]=R32(c->r[26]+0x000021E4u); // 8003B1B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B1B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B1B8
  c->r[0]=R32(c->r[3]+0x00000008u); // 8003B1BC
  cmpu(c,0,c->r[27],c->r[0]); // 8003B1C0
  if (crb(c,0)) { IRQCHK(c); goto L_8003B0FC; } // 8003B1C4
  c->r[3]=c->r[26]|c->r[26]; // 8003B1C8
  c->r[4]=0u+0x00000001u; // 8003B1CC
  c->lr=0x8003B1D4u; f_8003B1FC(c); // 8003B1D0
L_8003B1D4:;
  c->r[11]=c->r[1]+0x000000D0u; // 8003B1D4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 8003B1D8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 8003B1DC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 8003B1E0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 8003B1E4
  c->lr=0x8003B1ECu; f_800C2E88(c); // 8003B1E8
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8003B1EC
  c->lr=c->r[0]; // 8003B1F0
  c->r[1]=c->r[1]+0x000000F0u; // 8003B1F4
  return; // 8003B1F8
}

// fn_8003B1FC
void f_8003B1FC(Ctx* __restrict c) {
  trace_call(0x8003B1FCu);
  cmps(c,0,(int32_t)c->r[4],0); // 8003B1FC
  if (!crb(c,0)) { goto L_8003B208; } // 8003B200
  c->r[4]=0u+0x00000000u; // 8003B204
L_8003B208:;
  c->r[5]=R32(c->r[3]+0x000021E8u); // 8003B208
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B20C
  c->r[5]=R32(c->r[5]+0x00000024u); // 8003B210
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[1]); // 8003B214
  c->r[6]=R32(c->r[3]+0x000021ECu); // 8003B218
  c->r[8]=R32(c->r[5]+0x00000008u); // 8003B21C
  c->r[7]=R32(c->r[5]+0x00000000u); // 8003B220
  c->r[5]=divwu(c->r[6],c->r[8]); // 8003B224
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[1]; // 8003B228
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003B22C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8003B230
  c->f[2]=(c->f[2]>=0.0)?c->f[3]:c->f[0]; // 8003B234
  c->r[0]=divwu(c->r[4],c->r[8]); // 8003B238
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 8003B23C
  c->r[5]=c->r[6]-c->r[5]; // 8003B240
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003B244
  c->r[6]=R32(c->r[7]+c->r[5]); // 8003B248
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 8003B24C
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[1]);} // 8003B250
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B254
  c->r[0]=c->r[4]-c->r[0]; // 8003B258
  c->r[5]=R32(c->r[6]+0x00000010u); // 8003B25C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003B260
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003B264
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 8003B268
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[2]);} // 8003B26C
  c->r[5]=R32(c->r[3]+0x000021E8u); // 8003B270
  c->r[5]=R32(c->r[5]+0x00000024u); // 8003B274
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003B278
  c->r[6]=R32(c->r[5]+c->r[0]); // 8003B27C
  cmps(c,0,(int32_t)c->r[6],0); // 8003B280
  if (crb(c,2)) { goto L_8003B2B0; } // 8003B284
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[1]); // 8003B288
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[3]);} // 8003B28C
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B290
  c->f[2]=(c->f[2]>=0.0)?c->f[3]:c->f[1]; // 8003B294
  c->r[5]=R32(c->r[6]+0x00000010u); // 8003B298
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8003B29C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8003B2A0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 8003B2A4
  c->f[1]=(c->f[1]>=0.0)?c->f[3]:c->f[2]; // 8003B2A8
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[1]);} // 8003B2AC
L_8003B2B0:;
  W32(c->r[3]+0x000021ECu,c->r[4]); // 8003B2B0
  return; // 8003B2B4
}

// fn_8003B2B8
void f_8003B2B8(Ctx* __restrict c) {
  trace_call(0x8003B2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003B2B8
  c->r[0]=c->lr; // 8003B2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003B2C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003B2C4
  c->r[31]=c->r[4]|c->r[4]; // 8003B2C8
  c->r[5]=c->r[31]|c->r[31]; // 8003B2CC
  c->r[4]=0u+0x00000007u; // 8003B2D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003B2D4
  c->r[30]=c->r[3]|c->r[3]; // 8003B2D8
  c->lr=0x8003B2E0u; f_8030FFA0(c); // 8003B2DC
  c->r[3]=R32(c->r[30]+0x000021F0u); // 8003B2E0
  cmps(c,0,(int32_t)c->r[3],0); // 8003B2E4
  if (crb(c,2)) { goto L_8003B2F8; } // 8003B2E8
  c->r[5]=c->r[31]|c->r[31]; // 8003B2EC
  c->r[4]=0u+0x00000007u; // 8003B2F0
  c->lr=0x8003B2F8u; f_8030FFA0(c); // 8003B2F4
L_8003B2F8:;
  c->r[3]=R32(c->r[30]+0x000021F8u); // 8003B2F8
  cmps(c,0,(int32_t)c->r[3],0); // 8003B2FC
  if (crb(c,2)) { goto L_8003B310; } // 8003B300
  c->r[5]=c->r[31]|c->r[31]; // 8003B304
  c->r[4]=0u+0x00000007u; // 8003B308
  c->lr=0x8003B310u; f_8030FFA0(c); // 8003B30C
L_8003B310:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003B310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003B314
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003B318
  c->lr=c->r[0]; // 8003B31C
  c->r[1]=c->r[1]+0x00000010u; // 8003B320
  return; // 8003B324
}

// fn_8003B328
void f_8003B328(Ctx* __restrict c) {
  trace_call(0x8003B328u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003B328
  c->r[0]=c->lr; // 8003B32C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003B330
  c->r[11]=c->r[1]+0x00000030u; // 8003B334
  c->lr=0x8003B33Cu; f_800C2E48(c); // 8003B338
  c->r[4]=0u+0x803D0000u; // 8003B33C
  c->r[27]=c->r[3]|c->r[3]; // 8003B340
  c->r[3]=c->r[4]+0x0000407Cu; // 8003B344
  c->lr=0x8003B34Cu; f_800B7570(c); // 8003B348
  c->r[29]=R32(c->r[3]+0x00000044u); // 8003B34C
  c->r[3]=0u+0x80370000u; // 8003B350
  c->r[28]=R32(c->r[2]+0xFFFFBF18u); // 8003B354
  c->r[3]=c->r[3]+0x00003B70u; // 8003B358
  c->r[4]=c->r[3]+0x00000043u; // 8003B35C
  W32(c->r[1]+0x00000008u,c->r[28]); // 8003B360
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8003B364
  c->r[5]=0u+0x00000000u; // 8003B368
  c->lr=0x8003B370u; f_8031E640(c); // 8003B36C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8003B370
  c->r[4]=R32(c->r[29]+0x00000010u); // 8003B374
  c->r[6]=R32(c->r[4]+0x00000004u); // 8003B378
  c->r[5]=R32(c->r[6]+0x00000000u); // 8003B37C
  c->r[8]=R32(c->r[6]+0x00000004u); // 8003B380
  c->r[4]=R32(c->r[5]+0x00000000u); // 8003B384
  c->r[0]=R32(c->r[5]+0x00000004u); // 8003B388
  c->r[5]=c->r[8]|c->r[8]; // 8003B38C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003B390
  c->r[0]=c->r[0]-c->r[4]; // 8003B394
  c->r[0]=sraw(c,c->r[0],2); // 8003B398
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8003B39C
  c->r[0]=c->r[4]-c->r[8]; // 8003B3A0
  c->ctr=c->r[0]; // 8003B3A4
  cmpu(c,0,c->r[8],c->r[4]); // 8003B3A8
  if (!crb(c,0)) { goto L_8003B3EC; } // 8003B3AC
L_8003B3B0:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003B3B0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B3B4
  c->r[4]=R32(c->r[4]+c->r[7]); // 8003B3B8
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003B3BC
  cmpu(c,0,c->r[3],c->r[0]); // 8003B3C0
  if (!crb(c,2)) { goto L_8003B3E0; } // 8003B3C4
  W32(c->r[6]+0x00000004u,c->r[5]); // 8003B3C8
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003B3CC
  c->r[3]=R32(c->r[6]+0x00000000u); // 8003B3D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B3D4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003B3D8
  goto L_8003B440; // 8003B3DC
L_8003B3E0:;
  c->r[7]=c->r[7]+0x00000004u; // 8003B3E0
  c->r[5]=c->r[5]+0x00000001u; // 8003B3E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003B3B0; } // 8003B3E8
L_8003B3EC:;
  c->r[7]=0u+0x00000000u; // 8003B3EC
  c->r[5]=0u+0x00000000u; // 8003B3F0
  c->ctr=c->r[8]; // 8003B3F4
  cmpu(c,0,c->r[8],0x00000000u); // 8003B3F8
  if (!crb(c,1)) { goto L_8003B43C; } // 8003B3FC
L_8003B400:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003B400
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B404
  c->r[4]=R32(c->r[4]+c->r[5]); // 8003B408
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003B40C
  cmpu(c,0,c->r[3],c->r[0]); // 8003B410
  if (!crb(c,2)) { goto L_8003B430; } // 8003B414
  W32(c->r[6]+0x00000004u,c->r[7]); // 8003B418
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003B41C
  c->r[3]=R32(c->r[6]+0x00000000u); // 8003B420
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B424
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003B428
  goto L_8003B440; // 8003B42C
L_8003B430:;
  c->r[5]=c->r[5]+0x00000004u; // 8003B430
  c->r[7]=c->r[7]+0x00000001u; // 8003B434
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003B400; } // 8003B438
L_8003B43C:;
  c->r[3]=0u+0x00000000u; // 8003B43C
L_8003B440:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8003B440
  cmps(c,0,(int32_t)c->r[4],37); // 8003B444
  if (!crb(c,1)) { goto L_8003B460; } // 8003B448
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003B44C
  cmpu(c,0,c->r[0],0x00000001u); // 8003B450
  if (!crb(c,2)) { goto L_8003B460; } // 8003B454
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003B458
  goto L_8003B488; // 8003B45C
L_8003B460:;
  cmps(c,0,(int32_t)c->r[4],26); // 8003B460
  if (crb(c,0)) { goto L_8003B470; } // 8003B464
  cmps(c,0,(int32_t)c->r[4],36); // 8003B468
  if (!crb(c,2)) { goto L_8003B484; } // 8003B46C
L_8003B470:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003B470
  cmpu(c,0,c->r[0],0x00000001u); // 8003B474
  if (!crb(c,2)) { goto L_8003B484; } // 8003B478
  c->r[3]=c->r[3]+0x00000008u; // 8003B47C
  goto L_8003B488; // 8003B480
L_8003B484:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003B484
L_8003B488:;
  c->r[26]=R32(c->r[13]+0xFFFFA510u); // 8003B488
  c->r[31]=R32(c->r[3]+0x00000000u); // 8003B48C
  c->r[30]=R32(c->r[3]+0x00000004u); // 8003B490
  c->r[3]=c->r[26]|c->r[26]; // 8003B494
  c->lr=0x8003B49Cu; f_8024B0E0(c); // 8003B498
  c->r[4]=R32(c->r[1]+0x00000008u); // 8003B49C
  cmpu(c,0,c->r[4],c->r[28]); // 8003B4A0
  if (!crb(c,2)) { goto L_8003B4B4; } // 8003B4A4
  c->r[3]=c->r[26]|c->r[26]; // 8003B4A8
  c->lr=0x8003B4B0u; f_8024B1C0(c); // 8003B4AC
  goto L_8003B4EC; // 8003B4B0
L_8003B4B4:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003B4B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003B4B8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003B4BC
  cmpu(c,0,c->r[0],0x00000001u); // 8003B4C0
  if (!crb(c,2)) { goto L_8003B4E0; } // 8003B4C4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003B4C8
  cmpu(c,0,c->r[0],0x00000001u); // 8003B4CC
  if (!crb(c,2)) { goto L_8003B4E0; } // 8003B4D0
  c->r[3]=c->r[26]|c->r[26]; // 8003B4D4
  c->r[4]=c->r[1]+0x00000008u; // 8003B4D8
  c->lr=0x8003B4E0u; f_8031EEDC(c); // 8003B4DC
L_8003B4E0:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8003B4E0
  c->r[3]=c->r[26]|c->r[26]; // 8003B4E4
  c->lr=0x8003B4ECu; f_8024B1C0(c); // 8003B4E8
L_8003B4EC:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 8003B4EC
  c->r[6]=c->r[31]^c->r[30]; // 8003B4F0
  c->r[5]=R32(c->r[3]+0x000000A8u); // 8003B4F4
  c->r[3]=R32(c->r[5]+0x00000000u); // 8003B4F8
  c->r[4]=R32(c->r[5]+0x00000004u); // 8003B4FC
  c->r[0]=divwu(c->r[6],c->r[3]); // 8003B500
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8003B504
  c->r[0]=c->r[6]-c->r[0]; // 8003B508
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003B50C
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003B510
  goto L_8003B554; // 8003B514
L_8003B518:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8003B518
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8003B51C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B520
  c->r[4]=c->r[3]+c->r[0]; // 8003B524
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003B528
  cmpu(c,0,c->r[0],c->r[6]); // 8003B52C
  if (!crb(c,2)) { goto L_8003B550; } // 8003B530
  c->r[0]=R32(c->r[4]+0x00000008u); // 8003B534
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8003B538
  c->r[0]=c->r[0]^c->r[31]; // 8003B53C
  c->r[3]=c->r[3]^c->r[30]; // 8003B540
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 8003B544
  if (!crb(c,2)) { goto L_8003B550; } // 8003B548
  goto L_8003B560; // 8003B54C
L_8003B550:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003B550
L_8003B554:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003B554
  if (!crb(c,2)) { IRQCHK(c); goto L_8003B518; } // 8003B558
  c->r[4]=0u+0x00000000u; // 8003B55C
L_8003B560:;
  cmps(c,0,(int32_t)c->r[4],0); // 8003B560
  if (!crb(c,2)) { goto L_8003B570; } // 8003B564
  c->r[3]=0u+0x00000000u; // 8003B568
  goto L_8003B574; // 8003B56C
L_8003B570:;
  c->r[3]=c->r[4]+0x00000010u; // 8003B570
L_8003B574:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003B574
  if (!crb(c,2)) { goto L_8003B584; } // 8003B578
  c->r[4]=0u+0x00000000u; // 8003B57C
  goto L_8003B588; // 8003B580
L_8003B584:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003B584
L_8003B588:;
  W32(c->r[27]+0x00002130u,c->r[4]); // 8003B588
  c->r[3]=c->r[27]|c->r[27]; // 8003B58C
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B590
  W32(c->r[27]+0x00002134u,c->r[4]); // 8003B594
  c->r[5]=R32(c->r[4]+0x000000A0u); // 8003B598
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003B59C
  c->r[5]=R32(c->r[5]+0x00000000u); // 8003B5A0
  c->r[0]=R32(c->r[5]+0x00000014u); // 8003B5A4
  W32(c->r[27]+0x00002138u,c->r[0]); // 8003B5A8
  {uint32_t ea=c->r[27]+0x000021D8u; WF32(ea,c->f[0]);} // 8003B5AC
  c->lr=0x8003B5B4u; f_8003BD38(c); // 8003B5B0
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B5B4
  c->r[4]=0u+0x80370000u; // 8003B5B8
  {uint32_t ea=c->r[27]+0x00002180u; WF32(ea,c->f[0]);} // 8003B5BC
  c->r[4]=c->r[4]+0x00003B70u; // 8003B5C0
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 8003B5C4
  c->r[30]=c->r[4]+0x00000059u; // 8003B5C8
  c->r[4]=c->r[30]|c->r[30]; // 8003B5CC
  c->r[31]=0u+0x00000000u; // 8003B5D0
  c->r[29]=R32(c->r[3]+0x000000A4u); // 8003B5D4
  goto L_8003B5F4; // 8003B5D8
L_8003B5DC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003B5DC
  c->r[3]=rotl(c->r[31],5)&0xFFFFFFE0u; // 8003B5E0
  c->r[4]=c->r[4]+0x00000001u; // 8003B5E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8003B5E8
  c->r[0]=c->r[31]+c->r[0]; // 8003B5EC
  c->r[31]=c->r[3]+c->r[0]; // 8003B5F0
L_8003B5F4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8003B5F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8003B5F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8003B5DC; } // 8003B5FC
  c->r[3]=R32(c->r[29]+0x00000000u); // 8003B600
  c->r[4]=R32(c->r[29]+0x00000004u); // 8003B604
  c->r[0]=divwu(c->r[31],c->r[3]); // 8003B608
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8003B60C
  c->r[0]=c->r[31]-c->r[0]; // 8003B610
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003B614
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003B618
  goto L_8003B658; // 8003B61C
L_8003B620:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8003B620
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8003B624
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B628
  c->r[26]=c->r[3]+c->r[0]; // 8003B62C
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003B630
  cmpu(c,0,c->r[0],c->r[31]); // 8003B634
  if (!crb(c,2)) { goto L_8003B654; } // 8003B638
  c->r[3]=R32(c->r[26]+0x00000004u); // 8003B63C
  c->r[4]=c->r[30]|c->r[30]; // 8003B640
  c->lr=0x8003B648u; f_800CA380(c); // 8003B644
  cmps(c,0,(int32_t)c->r[3],0); // 8003B648
  if (!crb(c,2)) { goto L_8003B654; } // 8003B64C
  goto L_8003B664; // 8003B650
L_8003B654:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 8003B654
L_8003B658:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003B658
  if (!crb(c,2)) { IRQCHK(c); goto L_8003B620; } // 8003B65C
  c->r[26]=0u+0x00000000u; // 8003B660
L_8003B664:;
  cmps(c,0,(int32_t)c->r[26],0); // 8003B664
  if (!crb(c,2)) { goto L_8003B674; } // 8003B668
  c->r[3]=0u+0x00000000u; // 8003B66C
  goto L_8003B678; // 8003B670
L_8003B674:;
  c->r[3]=c->r[26]+0x00000008u; // 8003B674
L_8003B678:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003B678
  if (!crb(c,2)) { goto L_8003B688; } // 8003B67C
  c->r[3]=0u+0x00000000u; // 8003B680
  goto L_8003B68C; // 8003B684
L_8003B688:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B688
L_8003B68C:;
  W32(c->r[27]+0x000021C4u,c->r[3]); // 8003B68C
  c->r[4]=0u+0x00000007u; // 8003B690
  c->r[5]=0u+0x00000000u; // 8003B694
  c->r[3]=R32(c->r[3]+0x000000D4u); // 8003B698
  c->lr=0x8003B6A0u; f_8030FFA0(c); // 8003B69C
  c->r[3]=c->r[27]|c->r[27]; // 8003B6A0
  c->lr=0x8003B6A8u; f_8003B7BC(c); // 8003B6A4
  c->r[3]=c->r[27]|c->r[27]; // 8003B6A8
  c->lr=0x8003B6B0u; f_8003BC94(c); // 8003B6AC
  c->r[3]=c->r[27]|c->r[27]; // 8003B6B0
  c->lr=0x8003B6B8u; f_8003BF3C(c); // 8003B6B4
  c->r[3]=c->r[27]|c->r[27]; // 8003B6B8
  c->lr=0x8003B6C0u; f_8003C028(c); // 8003B6BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8003B6C0
  cmpu(c,0,c->r[0],c->r[28]); // 8003B6C4
  if (crb(c,2)) { goto L_8003B728; } // 8003B6C8
  c->r[26]=R32(c->r[13]+0xFFFFA510u); // 8003B6CC
  c->r[3]=c->r[26]|c->r[26]; // 8003B6D0
  c->lr=0x8003B6D8u; f_8024B0E0(c); // 8003B6D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8003B6D8
  cmpu(c,0,c->r[4],c->r[28]); // 8003B6DC
  if (!crb(c,2)) { goto L_8003B6F0; } // 8003B6E0
  c->r[3]=c->r[26]|c->r[26]; // 8003B6E4
  c->lr=0x8003B6ECu; f_8024B1C0(c); // 8003B6E8
  goto L_8003B728; // 8003B6EC
L_8003B6F0:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8003B6F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003B6F4
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8003B6F8
  cmpu(c,0,c->r[0],0x00000001u); // 8003B6FC
  if (!crb(c,2)) { goto L_8003B71C; } // 8003B700
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8003B704
  cmpu(c,0,c->r[0],0x00000001u); // 8003B708
  if (!crb(c,2)) { goto L_8003B71C; } // 8003B70C
  c->r[3]=c->r[26]|c->r[26]; // 8003B710
  c->r[4]=c->r[1]+0x00000008u; // 8003B714
  c->lr=0x8003B71Cu; f_8031EEDC(c); // 8003B718
L_8003B71C:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 8003B71C
  c->r[3]=c->r[26]|c->r[26]; // 8003B720
  c->lr=0x8003B728u; f_8024B1C0(c); // 8003B724
L_8003B728:;
  c->r[11]=c->r[1]+0x00000030u; // 8003B728
  c->lr=0x8003B730u; f_800C2E94(c); // 8003B72C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003B730
  c->lr=c->r[0]; // 8003B734
  c->r[1]=c->r[1]+0x00000030u; // 8003B738
  return; // 8003B73C
}

// fn_8003B740
void f_8003B740(Ctx* __restrict c) {
  trace_call(0x8003B740u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003B740
  c->r[0]=c->lr; // 8003B744
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003B748
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003B74C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8003B750
  c->f[31]=c->f[1]; // 8003B754
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003B75C
  c->r[31]=c->r[3]|c->r[3]; // 8003B760
  W32(c->r[3]+0x00002134u,c->r[4]); // 8003B764
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B768
  c->r[4]=R32(c->r[4]+0x000000A0u); // 8003B76C
  fcmp(c,0,c->f[1],c->f[0]); // 8003B770
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B774
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B778
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003B77C
  W32(c->r[3]+0x00002138u,c->r[0]); // 8003B780
  if (!crb(c,2)) { goto L_8003B790; } // 8003B784
  {uint32_t ea=c->r[2]+0xFFFF8618u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B788
  {uint32_t ea=c->r[3]+0x000021D0u; WF32(ea,c->f[0]);} // 8003B78C
L_8003B790:;
  c->r[4]=R32(c->r[31]+0x00002134u); // 8003B790
  c->r[3]=c->r[31]|c->r[31]; // 8003B794
  c->lr=0x8003B79Cu; f_8003BD38(c); // 8003B798
  {uint32_t ea=c->r[31]+0x00002180u; WF32(ea,c->f[31]);} // 8003B79C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003B7A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003B7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003B7A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003B7AC
  c->lr=c->r[0]; // 8003B7B0
  c->r[1]=c->r[1]+0x00000020u; // 8003B7B4
  return; // 8003B7B8
}

// fn_8003B7BC
void f_8003B7BC(Ctx* __restrict c) {
  trace_call(0x8003B7BCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003B7BC
  c->r[12]=c->r[1]|c->r[1]; // 8003B7C0
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 8003B7C4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003B7C8
  c->r[0]=c->lr; // 8003B7CC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003B7D0
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003B7D4
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003B7D8
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003B7DC
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003B7E0
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8003B7E4
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8003B7E8
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003B7EC
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8003B7F0
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8003B7F4
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8003B7F8
  W32(c->r[12]+0xFFFFFFACu,c->r[31]); // 8003B7FC
  c->r[31]=c->r[3]|c->r[3]; // 8003B800
  W32(c->r[12]+0xFFFFFFA8u,c->r[30]); // 8003B804
  c->r[5]=R32(c->r[3]+0x00002134u); // 8003B808
  c->r[6]=R32(c->r[5]+0x000000A0u); // 8003B80C
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003B810
  c->r[0]=R32(c->r[6]+0x00000004u); // 8003B814
  c->r[0]=c->r[0]-c->r[4]; // 8003B818
  c->r[0]=sraw(c,c->r[0],2); // 8003B81C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 8003B820
  if (crb(c,2)) { goto L_8003BBAC; } // 8003B824
  c->r[4]=0u+0x803D0000u; // 8003B828
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B82C
  c->r[4]=c->r[4]+0x0000407Cu; // 8003B830
  {uint32_t ea=c->r[3]+0x00002180u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B834
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8003B838
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003B83C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8003B840
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8003B844
  {uint32_t ea=c->r[3]+0x00002180u; WF32(ea,c->f[0]);} // 8003B848
  c->r[4]=R32(c->r[5]+0x000000A0u); // 8003B84C
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B850
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003B854
  {uint32_t ea=c->r[4]+0x00000028u; c->f[27]=c->ps1[27]=RF32(ea);} // 8003B858
  fcmp(c,1,c->f[0],c->f[27]); // 8003B85C
  if (!crb(c,5)) { goto L_8003B940; } // 8003B860
  c->r[4]=R32(c->r[3]+0x00002138u); // 8003B864
  W32(c->r[3]+0x00002134u,c->r[4]); // 8003B868
  c->r[6]=R32(c->r[4]+0x000000A0u); // 8003B86C
  c->r[5]=R32(c->r[6]+0x00000000u); // 8003B870
  c->r[0]=R32(c->r[6]+0x00000004u); // 8003B874
  c->r[0]=c->r[0]-c->r[5]; // 8003B878
  c->r[0]=sraw(c,c->r[0],2); // 8003B87C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 8003B880
  if (!crb(c,2)) { goto L_8003B91C; } // 8003B884
  c->r[5]=R32(c->r[13]+0xFFFF9488u); // 8003B888
  c->r[0]=R32(c->r[5]+0x00000000u); // 8003B88C
  cmps(c,1,(int32_t)c->r[0],0); // 8003B890
  if (crb(c,6)) { goto L_8003B8A8; } // 8003B894
  c->r[3]=c->r[5]|c->r[5]; // 8003B898
  c->lr=0x8003B8A0u; f_8008E630(c); // 8003B89C
  W32(c->r[31]+0x00002134u,c->r[3]); // 8003B8A0
  goto L_8003B8B4; // 8003B8A4
L_8003B8A8:;
  c->r[0]=0u+0x00000000u; // 8003B8A8
  W32(c->r[3]+0x00002134u,c->r[0]); // 8003B8AC
  c->r[30]=c->r[4]|c->r[4]; // 8003B8B0
L_8003B8B4:;
  c->r[0]=R32(c->r[31]+0x00002134u); // 8003B8B4
  cmps(c,1,(int32_t)c->r[0],0); // 8003B8B8
  if (!crb(c,6)) { goto L_8003B91C; } // 8003B8BC
  c->r[3]=0u+0x803D0000u; // 8003B8C0
  c->r[3]=c->r[3]+0x00000280u; // 8003B8C4
  c->lr=0x8003B8CCu; f_8009C0D0(c); // 8003B8C8
  cmps(c,1,(int32_t)c->r[3],0); // 8003B8CC
  if (!crb(c,6)) { goto L_8003B914; } // 8003B8D0
  c->r[0]=R32(c->r[31]+0x00002130u); // 8003B8D4
  c->r[3]=0u+0x803D0000u; // 8003B8D8
  W32(c->r[31]+0x00002134u,c->r[0]); // 8003B8DC
  c->r[0]=0u+0x00000000u; // 8003B8E0
  c->r[3]=c->r[3]+0x0000407Cu; // 8003B8E4
  W32(c->r[13]+0xFFFF80A4u,c->r[0]); // 8003B8E8
  c->lr=0x8003B8F0u; f_800B6C2C(c); // 8003B8EC
  c->r[0]=0u+0x00000001u; // 8003B8F0
  c->r[5]=0u+0x804B0000u; // 8003B8F4
  W32(c->r[13]+0xFFFF80A4u,c->r[0]); // 8003B8F8
  c->r[5]=c->r[5]+0xFFFFC730u; // 8003B8FC
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003B900
  c->r[4]=0u+0x00000001u; // 8003B904
  {uint32_t ea=c->r[2]+0xFFFF8638u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B908
  c->lr=0x8003B910u; f_80046DE4(c); // 8003B90C
  goto L_8003B91C; // 8003B910
L_8003B914:;
  W32(c->r[31]+0x00002134u,c->r[30]); // 8003B914
  goto L_8003BBAC; // 8003B918
L_8003B91C:;
  c->r[3]=R32(c->r[31]+0x00002134u); // 8003B91C
  {uint32_t ea=c->r[31]+0x00002180u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003B920
  c->r[3]=R32(c->r[3]+0x000000A0u); // 8003B924
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8003B928
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B92C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B930
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003B934
  W32(c->r[31]+0x00002138u,c->r[0]); // 8003B938
  {uint32_t ea=c->r[31]+0x00002180u; WF32(ea,c->f[0]);} // 8003B93C
L_8003B940:;
  c->r[3]=R32(c->r[31]+0x00002134u); // 8003B940
  c->r[4]=c->r[1]+0x00000050u; // 8003B944
  {uint32_t ea=c->r[31]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B948
  c->r[3]=R32(c->r[3]+0x000000A0u); // 8003B94C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B950
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B954
  c->lr=0x8003B95Cu; f_8034A3EC(c); // 8003B958
  c->r[3]=R32(c->r[31]+0x00002134u); // 8003B95C
  c->r[4]=c->r[31]+0x00002140u; // 8003B960
  {uint32_t ea=c->r[31]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B964
  c->r[3]=R32(c->r[3]+0x000000A0u); // 8003B968
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B96C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003B970
  c->lr=0x8003B978u; f_80349F9C(c); // 8003B974
  c->r[4]=c->r[1]+0x00000050u; // 8003B978
  c->r[3]=0u+0x804B0000u; // 8003B97C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003B980
  c->r[5]=c->r[1]+0x00000010u; // 8003B984
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003B988
  c->f[3]=c->ps1[3]=S(c->f[27]-c->f[27]); // 8003B98C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8003B990
  c->r[3]=c->r[3]+0xFFFFC5D0u; // 8003B994
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 8003B998
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003B99C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003B9A0
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,1,0);} // 8003B9A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003B9A8
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8003B9AC
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003B9B0
  fcmp(c,0,c->f[2],c->f[3]); // 8003B9B4
  if (crb(c,2)) { goto L_8003B9D8; } // 8003B9B8
  c->f[0]=frsqrte(c->f[2]); // 8003B9BC
  {uint32_t ea=c->r[2]+0xFFFF861Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 8003B9C0
  {uint32_t ea=c->r[2]+0xFFFF8638u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003B9C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8003B9C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 8003B9CC
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 8003B9D0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8003B9D4
L_8003B9D8:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003B9D8
  c->f[3]=c->ps1[3]=S(c->f[29]-c->f[29]); // 8003B9DC
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003B9E0
  c->r[4]=c->r[1]+0x00000020u; // 8003B9E4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[5]=t0; c->ps1[5]=t1;} // 8003B9E8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 8003B9EC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8003B9F0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 8003B9F4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003B9F8
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8003B9FC
  {double t0=S(c->f[5]*c->f[4]), t1=S(c->ps1[5]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA00
  {double t0=S(c->f[5]*c->f[29]), t1=S(c->ps1[5]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BA04
  {uint32_t ea=c->r[1]+0x00000018u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003BA08
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,5,ea,0,0);} // 8003BA0C
  {double t0=S(std::fma(c->f[4],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[4],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA10
  {double t0=S(std::fma(c->f[4],c->f[28],-c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[28],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 8003BA14
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA18
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BA1C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8003BA20
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,1,0);} // 8003BA24
  {uint32_t ea=c->r[4]+0x00000004u; psq_store(c,0,ea,0,0);} // 8003BA28
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003BA2C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BA30
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA34
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8003BA38
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003BA3C
  fcmp(c,0,c->f[2],c->f[3]); // 8003BA40
  if (crb(c,2)) { goto L_8003BA64; } // 8003BA44
  c->f[0]=frsqrte(c->f[2]); // 8003BA48
  {uint32_t ea=c->r[2]+0xFFFF861Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8003BA4C
  {uint32_t ea=c->r[2]+0xFFFF8638u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003BA50
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8003BA54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 8003BA58
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 8003BA5C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8003BA60
L_8003BA64:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003BA64
  c->r[3]=c->r[1]+0x00000010u; // 8003BA68
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003BA6C
  c->r[5]=c->r[1]+0x00000030u; // 8003BA70
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 8003BA74
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003BA78
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA7C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003BA80
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8003BA84
  c->r[3]=c->r[1]+0x00000040u; // 8003BA88
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003BA8C
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 8003BA90
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BA94
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003BA98
  {double t0=S(c->f[4]*c->f[31]), t1=S(c->ps1[4]*c->ps1[31]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BA9C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003BAA0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003BAA4
  {double t0=S(std::fma(c->f[3],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8003BAA8
  {double t0=S(std::fma(c->f[3],c->f[30],-c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[30],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 8003BAAC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003BAB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=c->ps1[9]=RF32(ea);} // 8003BAB4
  c->r[4]=c->r[31]+0x00002150u; // 8003BAB8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8003BABC
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BAC0
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BAC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 8003BAC8
  {uint32_t ea=c->r[31]+0x00002140u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BACC
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,1,0);} // 8003BAD0
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8003BAD4
  {uint32_t ea=c->r[31]+0x00002144u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BAD8
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,0,ea,0,0);} // 8003BADC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003BAE0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 8003BAE4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003BAE8
  {uint32_t ea=c->r[31]+0x00002148u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BAEC
  {uint32_t ea=c->r[31]+0x00002150u; WF32(ea,c->f[5]);} // 8003BAF0
  {uint32_t ea=c->r[31]+0x00002160u; WF32(ea,c->f[4]);} // 8003BAF4
  {uint32_t ea=c->r[31]+0x00002170u; WF32(ea,c->f[3]);} // 8003BAF8
  {uint32_t ea=c->r[31]+0x00002154u; WF32(ea,c->f[6]);} // 8003BAFC
  {uint32_t ea=c->r[31]+0x00002164u; WF32(ea,c->f[7]);} // 8003BB00
  {uint32_t ea=c->r[31]+0x00002174u; WF32(ea,c->f[8]);} // 8003BB04
  {uint32_t ea=c->r[31]+0x00002158u; WF32(ea,c->f[9]);} // 8003BB08
  {uint32_t ea=c->r[31]+0x00002168u; WF32(ea,c->f[10]);} // 8003BB0C
  {uint32_t ea=c->r[31]+0x00002178u; WF32(ea,c->f[11]);} // 8003BB10
  {uint32_t ea=c->r[31]+0x00002190u; WF32(ea,c->f[2]);} // 8003BB14
  {uint32_t ea=c->r[31]+0x00002194u; WF32(ea,c->f[1]);} // 8003BB18
  {uint32_t ea=c->r[31]+0x00002198u; WF32(ea,c->f[0]);} // 8003BB1C
  c->lr=0x8003BB24u; f_8028A85C(c); // 8003BB20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BB24
  c->r[3]=c->r[31]+0x000000C0u; // 8003BB28
  {uint32_t ea=c->r[31]+0x000021A0u; WF32(ea,c->f[0]);} // 8003BB2C
  c->r[5]=c->r[31]+0x00002150u; // 8003BB30
  c->r[4]=R32(c->r[31]+0x00002134u); // 8003BB34
  c->r[6]=c->r[31]+0x00002140u; // 8003BB38
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BB3C
  c->r[7]=0u+0x00000000u; // 8003BB40
  {uint32_t ea=c->r[31]+0x000021A4u; WF32(ea,c->f[0]);} // 8003BB44
  {uint32_t ea=c->r[31]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BB48
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BB4C
  {uint32_t ea=c->r[31]+0x000021A8u; WF32(ea,c->f[0]);} // 8003BB50
  {uint32_t ea=c->r[31]+0x000021D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BB54
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BB58
  {uint32_t ea=c->r[31]+0x000021ACu; WF32(ea,c->f[0]);} // 8003BB5C
  c->lr=0x8003BB64u; f_80058714(c); // 8003BB60
  c->r[3]=R32(c->r[31]+0x000021F0u); // 8003BB64
  cmps(c,1,(int32_t)c->r[3],0); // 8003BB68
  if (crb(c,6)) { goto L_8003BB88; } // 8003BB6C
  c->r[4]=R32(c->r[31]+0x00002134u); // 8003BB70
  c->r[5]=0u+0x00000000u; // 8003BB74
  {uint32_t ea=c->r[31]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BB78
  {uint32_t ea=c->r[31]+0x000021D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BB7C
  {uint32_t ea=c->r[31]+0x000021F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003BB80
  c->lr=0x8003BB88u; f_8005B794(c); // 8003BB84
L_8003BB88:;
  c->r[3]=R32(c->r[31]+0x000021F8u); // 8003BB88
  cmps(c,1,(int32_t)c->r[3],0); // 8003BB8C
  if (crb(c,6)) { goto L_8003BBAC; } // 8003BB90
  c->r[4]=R32(c->r[31]+0x00002134u); // 8003BB94
  c->r[5]=0u+0x00000000u; // 8003BB98
  {uint32_t ea=c->r[31]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BB9C
  {uint32_t ea=c->r[31]+0x000021D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BBA0
  {uint32_t ea=c->r[31]+0x000021FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003BBA4
  c->lr=0x8003BBACu; f_8005B794(c); // 8003BBA8
L_8003BBAC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003BBAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003BBB0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003BBB4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003BBB8
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003BBBC
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003BBC0
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8003BBC4
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8003BBC8
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8003BBCC
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8003BBD0
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8003BBD4
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8003BBD8
  c->r[31]=R32(c->r[10]+0xFFFFFFACu); // 8003BBDC
  c->r[30]=R32(c->r[10]+0xFFFFFFA8u); // 8003BBE0
  c->lr=c->r[0]; // 8003BBE4
  c->r[1]=c->r[10]|c->r[10]; // 8003BBE8
  return; // 8003BBEC
}

// fn_8003BBF0
void f_8003BBF0(Ctx* __restrict c) {
  trace_call(0x8003BBF0u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003BBF0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,5,ea,0,0);} // 8003BBF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BBF8
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8003BBFC
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BC00
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003BC04
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BC08
  {double t0=S(std::fma(c->f[5],c->f[2],-c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[2],-c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8003BC0C
  {double t0=S(std::fma(c->f[5],c->f[4],-c->f[1])), t1=S(std::fma(c->ps1[5],c->ps1[4],-c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 8003BC10
  {double t0=S(c->f[1]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003BC14
  {double t0=S(c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003BC18
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 8003BC1C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,0);} // 8003BC20
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 8003BC24
  return; // 8003BC28
}

// fn_8003BC2C
void f_8003BC2C(Ctx* __restrict c) {
  trace_call(0x8003BC2Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BC2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BC30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BC34
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8003BC38
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8003BC3C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 8003BC40
  return; // 8003BC44
}

// fn_8003BC48
void f_8003BC48(Ctx* __restrict c) {
  trace_call(0x8003BC48u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BC48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BC4C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BC50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8003BC54
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8003BC58
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 8003BC5C
  return; // 8003BC60
}

// fn_8003BC64
void f_8003BC64(Ctx* __restrict c) {
  trace_call(0x8003BC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003BC64
  c->r[0]=c->lr; // 8003BC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003BC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003BC70
  c->r[31]=c->r[3]|c->r[3]; // 8003BC74
  c->lr=0x8003BC7Cu; f_8028A85C(c); // 8003BC78
  c->r[3]=c->r[31]|c->r[31]; // 8003BC7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003BC80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003BC84
  c->lr=c->r[0]; // 8003BC88
  c->r[1]=c->r[1]+0x00000010u; // 8003BC8C
  return; // 8003BC90
}

// fn_8003BC94
void f_8003BC94(Ctx* __restrict c) {
  trace_call(0x8003BC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003BC94
  c->r[0]=c->lr; // 8003BC98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003BC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003BCA0
  c->r[31]=c->r[3]|c->r[3]; // 8003BCA4
  c->r[6]=R32(c->r[3]+0x00002134u); // 8003BCA8
  cmps(c,0,(int32_t)c->r[6],0); // 8003BCAC
  if (crb(c,2)) { goto L_8003BD24; } // 8003BCB0
  c->r[5]=R32(c->r[6]+0x000000A0u); // 8003BCB4
  c->r[4]=R32(c->r[5]+0x00000000u); // 8003BCB8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8003BCBC
  c->r[0]=c->r[0]-c->r[4]; // 8003BCC0
  c->r[0]=sraw(c,c->r[0],2); // 8003BCC4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 8003BCC8
  if (crb(c,2)) { goto L_8003BD24; } // 8003BCCC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8003BCD0
  c->r[4]=c->r[1]+0x00000008u; // 8003BCD4
  {uint32_t ea=c->r[2]+0xFFFF863Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BCD8
  c->r[5]=0u+0x00000001u; // 8003BCDC
  {uint32_t ea=c->r[3]+0x00002180u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BCE0
  c->r[3]=c->r[1]+0x0000000Cu; // 8003BCE4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8003BCE8
  c->lr=0x8003BCF0u; f_80056AA8(c); // 8003BCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003BCF0
  if (crb(c,2)) { goto L_8003BD24; } // 8003BCF4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8003BCF8
  c->r[0]=R32(c->r[31]+0x000021C0u); // 8003BCFC
  cmpu(c,0,c->r[4],c->r[0]); // 8003BD00
  if (crb(c,2)) { goto L_8003BD24; } // 8003BD04
  c->r[0]=R32(c->r[31]+0x00002134u); // 8003BD08
  cmpu(c,0,c->r[4],c->r[0]); // 8003BD0C
  if (crb(c,2)) { goto L_8003BD24; } // 8003BD10
  c->r[3]=c->r[31]|c->r[31]; // 8003BD14
  c->lr=0x8003BD1Cu; f_8003BD38(c); // 8003BD18
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8003BD1C
  W32(c->r[31]+0x000021C0u,c->r[0]); // 8003BD20
L_8003BD24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003BD24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003BD28
  c->lr=c->r[0]; // 8003BD2C
  c->r[1]=c->r[1]+0x00000020u; // 8003BD30
  return; // 8003BD34
}

// fn_8003BD38
void f_8003BD38(Ctx* __restrict c) {
  trace_call(0x8003BD38u);
  c->r[6]=R32(c->r[4]+0x000000A8u); // 8003BD38
  cmps(c,0,(int32_t)c->r[6],0); // 8003BD3C
  if (crb(c,2)) { goto L_8003BF34; } // 8003BD40
  c->r[7]=R32(c->r[6]+0x00000004u); // 8003BD44
  c->r[10]=R32(c->r[13]+0xFFFF9510u); // 8003BD48
  c->r[5]=R32(c->r[7]+0x00000000u); // 8003BD4C
  c->r[9]=R32(c->r[7]+0x00000004u); // 8003BD50
  c->r[4]=R32(c->r[5]+0x00000000u); // 8003BD54
  c->r[0]=R32(c->r[5]+0x00000004u); // 8003BD58
  c->r[5]=c->r[9]|c->r[9]; // 8003BD5C
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8003BD60
  c->r[0]=c->r[0]-c->r[4]; // 8003BD64
  c->r[0]=sraw(c,c->r[0],2); // 8003BD68
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8003BD6C
  c->r[0]=c->r[4]-c->r[9]; // 8003BD70
  c->ctr=c->r[0]; // 8003BD74
  cmpu(c,0,c->r[9],c->r[4]); // 8003BD78
  if (!crb(c,0)) { goto L_8003BDBC; } // 8003BD7C
L_8003BD80:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8003BD80
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BD84
  c->r[4]=R32(c->r[4]+c->r[8]); // 8003BD88
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003BD8C
  cmpu(c,0,c->r[10],c->r[0]); // 8003BD90
  if (!crb(c,2)) { goto L_8003BDB0; } // 8003BD94
  W32(c->r[7]+0x00000004u,c->r[5]); // 8003BD98
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003BD9C
  c->r[4]=R32(c->r[7]+0x00000000u); // 8003BDA0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BDA4
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003BDA8
  goto L_8003BE10; // 8003BDAC
L_8003BDB0:;
  c->r[8]=c->r[8]+0x00000004u; // 8003BDB0
  c->r[5]=c->r[5]+0x00000001u; // 8003BDB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003BD80; } // 8003BDB8
L_8003BDBC:;
  c->r[8]=0u+0x00000000u; // 8003BDBC
  c->r[5]=0u+0x00000000u; // 8003BDC0
  c->ctr=c->r[9]; // 8003BDC4
  cmpu(c,0,c->r[9],0x00000000u); // 8003BDC8
  if (!crb(c,1)) { goto L_8003BE0C; } // 8003BDCC
L_8003BDD0:;
  c->r[4]=R32(c->r[7]+0x00000000u); // 8003BDD0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BDD4
  c->r[4]=R32(c->r[4]+c->r[5]); // 8003BDD8
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003BDDC
  cmpu(c,0,c->r[10],c->r[0]); // 8003BDE0
  if (!crb(c,2)) { goto L_8003BE00; } // 8003BDE4
  W32(c->r[7]+0x00000004u,c->r[8]); // 8003BDE8
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003BDEC
  c->r[4]=R32(c->r[7]+0x00000000u); // 8003BDF0
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BDF4
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003BDF8
  goto L_8003BE10; // 8003BDFC
L_8003BE00:;
  c->r[5]=c->r[5]+0x00000004u; // 8003BE00
  c->r[8]=c->r[8]+0x00000001u; // 8003BE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003BDD0; } // 8003BE08
L_8003BE0C:;
  c->r[0]=0u+0x00000000u; // 8003BE0C
L_8003BE10:;
  cmps(c,0,(int32_t)c->r[0],0); // 8003BE10
  if (crb(c,2)) { goto L_8003BF34; } // 8003BE14
  c->r[6]=R32(c->r[6]+0x00000004u); // 8003BE18
  c->r[9]=R32(c->r[13]+0xFFFF9510u); // 8003BE1C
  c->r[5]=R32(c->r[6]+0x00000000u); // 8003BE20
  c->r[8]=R32(c->r[6]+0x00000004u); // 8003BE24
  c->r[4]=R32(c->r[5]+0x00000000u); // 8003BE28
  c->r[0]=R32(c->r[5]+0x00000004u); // 8003BE2C
  c->r[5]=c->r[8]|c->r[8]; // 8003BE30
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003BE34
  c->r[0]=c->r[0]-c->r[4]; // 8003BE38
  c->r[0]=sraw(c,c->r[0],2); // 8003BE3C
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 8003BE40
  c->r[0]=c->r[4]-c->r[8]; // 8003BE44
  c->ctr=c->r[0]; // 8003BE48
  cmpu(c,0,c->r[8],c->r[4]); // 8003BE4C
  if (!crb(c,0)) { goto L_8003BE90; } // 8003BE50
L_8003BE54:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003BE54
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BE58
  c->r[4]=R32(c->r[4]+c->r[7]); // 8003BE5C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003BE60
  cmpu(c,0,c->r[9],c->r[0]); // 8003BE64
  if (!crb(c,2)) { goto L_8003BE84; } // 8003BE68
  W32(c->r[6]+0x00000004u,c->r[5]); // 8003BE6C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003BE70
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003BE74
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BE78
  c->r[4]=R32(c->r[4]+c->r[0]); // 8003BE7C
  goto L_8003BEE4; // 8003BE80
L_8003BE84:;
  c->r[7]=c->r[7]+0x00000004u; // 8003BE84
  c->r[5]=c->r[5]+0x00000001u; // 8003BE88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003BE54; } // 8003BE8C
L_8003BE90:;
  c->r[7]=0u+0x00000000u; // 8003BE90
  c->r[5]=0u+0x00000000u; // 8003BE94
  c->ctr=c->r[8]; // 8003BE98
  cmpu(c,0,c->r[8],0x00000000u); // 8003BE9C
  if (!crb(c,1)) { goto L_8003BEE0; } // 8003BEA0
L_8003BEA4:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003BEA4
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BEA8
  c->r[4]=R32(c->r[4]+c->r[5]); // 8003BEAC
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003BEB0
  cmpu(c,0,c->r[9],c->r[0]); // 8003BEB4
  if (!crb(c,2)) { goto L_8003BED4; } // 8003BEB8
  W32(c->r[6]+0x00000004u,c->r[7]); // 8003BEBC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003BEC0
  c->r[4]=R32(c->r[6]+0x00000000u); // 8003BEC4
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003BEC8
  c->r[4]=R32(c->r[4]+c->r[0]); // 8003BECC
  goto L_8003BEE4; // 8003BED0
L_8003BED4:;
  c->r[5]=c->r[5]+0x00000004u; // 8003BED4
  c->r[7]=c->r[7]+0x00000001u; // 8003BED8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003BEA4; } // 8003BEDC
L_8003BEE0:;
  c->r[4]=0u+0x00000000u; // 8003BEE0
L_8003BEE4:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 8003BEE4
  cmps(c,0,(int32_t)c->r[5],37); // 8003BEE8
  if (!crb(c,1)) { goto L_8003BF04; } // 8003BEEC
  c->r[0]=R32(c->r[4]+0x00000010u); // 8003BEF0
  cmpu(c,0,c->r[0],0x00000001u); // 8003BEF4
  if (!crb(c,2)) { goto L_8003BF04; } // 8003BEF8
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8003BEFC
  goto L_8003BF2C; // 8003BF00
L_8003BF04:;
  cmps(c,0,(int32_t)c->r[5],26); // 8003BF04
  if (crb(c,0)) { goto L_8003BF14; } // 8003BF08
  cmps(c,0,(int32_t)c->r[5],36); // 8003BF0C
  if (!crb(c,2)) { goto L_8003BF28; } // 8003BF10
L_8003BF14:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 8003BF14
  cmpu(c,0,c->r[0],0x00000001u); // 8003BF18
  if (!crb(c,2)) { goto L_8003BF28; } // 8003BF1C
  c->r[4]=c->r[4]+0x00000008u; // 8003BF20
  goto L_8003BF2C; // 8003BF24
L_8003BF28:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 8003BF28
L_8003BF2C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BF2C
  {uint32_t ea=c->r[3]+0x000021D0u; WF32(ea,c->f[0]);} // 8003BF30
L_8003BF34:;
  {uint32_t ea=c->r[3]+0x000021D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BF34
  return; // 8003BF38
}

// fn_8003BF3C
void f_8003BF3C(Ctx* __restrict c) {
  trace_call(0x8003BF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003BF3C
  c->r[0]=c->lr; // 8003BF40
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003BF44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003BF48
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8003BF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003BF50
  c->r[31]=c->r[3]|c->r[3]; // 8003BF54
  {uint32_t ea=c->r[3]+0x000021D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BF58
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BF5C
  fcmp(c,0,c->f[2],c->f[1]); // 8003BF60
  if (crb(c,2)) { goto L_8003C00C; } // 8003BF64
  {uint32_t ea=c->r[3]+0x000021CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BF68
  fcmp(c,0,c->f[0],c->f[2]); // 8003BF6C
  if (crb(c,2)) { goto L_8003BF88; } // 8003BF70
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8003BF74
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BF78
  {uint32_t ea=c->r[3]+0x000021CCu; WF32(ea,c->f[2]);} // 8003BF7C
  {uint32_t ea=c->r[3]+0x000021DCu; WF32(ea,c->f[1]);} // 8003BF80
  {uint32_t ea=c->r[3]+0x000021C8u; WF32(ea,c->f[0]);} // 8003BF84
L_8003BF88:;
  c->r[4]=0u+0x803D0000u; // 8003BF88
  {uint32_t ea=c->r[3]+0x000021D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BF8C
  c->r[4]=c->r[4]+0x0000407Cu; // 8003BF90
  {uint32_t ea=c->r[3]+0x000021DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BF94
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 8003BF98
  {uint32_t ea=c->r[3]+0x000021C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BF9C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003BFA0
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003BFA4
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[3]); // 8003BFA8
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003BFAC
  {uint32_t ea=c->r[2]+0xFFFF8640u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BFB0
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[3]); // 8003BFB4
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[2]); // 8003BFB8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8003BFBC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 8003BFC0
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[4]; // 8003BFC4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[5]); // 8003BFC8
  c->f[0]=(c->f[0]>=0.0)?c->f[5]:c->f[2]; // 8003BFCC
  {uint32_t ea=c->r[3]+0x000021C8u; WF32(ea,c->f[0]);} // 8003BFD0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8003BFD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8003BFD8
  c->lr=0x8003BFE0u; f_800D2864(c); // 8003BFDC
  c->f[3]=c->ps1[3]=S(c->f[1]); // 8003BFE0
  {uint32_t ea=c->r[31]+0x000021D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003BFE4
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003BFE8
  {uint32_t ea=c->r[31]+0x000021C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003BFEC
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 8003BFF0
  fcmp(c,0,c->f[1],c->f[0]); // 8003BFF4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[3]); // 8003BFF8
  {uint32_t ea=c->r[31]+0x000021D8u; WF32(ea,c->f[0]);} // 8003BFFC
  if (!crb(c,2)) { goto L_8003C00C; } // 8003C000
  {uint32_t ea=c->r[31]+0x000021D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C004
  {uint32_t ea=c->r[31]+0x000021D8u; WF32(ea,c->f[0]);} // 8003C008
L_8003C00C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003C00C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003C010
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003C014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C018
  c->lr=c->r[0]; // 8003C01C
  c->r[1]=c->r[1]+0x00000020u; // 8003C020
  return; // 8003C024
}

// fn_8003C028
void f_8003C028(Ctx* __restrict c) {
  trace_call(0x8003C028u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003C028
  c->r[12]=c->r[1]|c->r[1]; // 8003C02C
  c->r[11]=addc(c,~c->r[11],0xFFFFFD30u,1); // 8003C030
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C034
  c->r[0]=c->lr; // 8003C038
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003C03C
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003C040
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003C044
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 8003C048
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 8003C04C
  c->r[30]=c->r[3]|c->r[3]; // 8003C050
  c->r[3]=c->r[1]+0x00000280u; // 8003C054
  c->lr=0x8003C05Cu; f_80013BD0(c); // 8003C058
  c->r[3]=c->r[1]+0x00000130u; // 8003C05C
  c->lr=0x8003C064u; f_8002FB7C(c); // 8003C060
  c->r[3]=c->r[1]+0x00000120u; // 8003C064
  c->lr=0x8003C06Cu; f_8002FB7C(c); // 8003C068
  c->r[3]=c->r[1]+0x00000110u; // 8003C06C
  c->lr=0x8003C074u; f_8002FB7C(c); // 8003C070
  c->r[3]=c->r[1]+0x00000250u; // 8003C074
  c->lr=0x8003C07Cu; f_8002F2EC(c); // 8003C078
  c->r[3]=c->r[1]+0x00000220u; // 8003C07C
  c->lr=0x8003C084u; f_8002F2EC(c); // 8003C080
  c->r[3]=c->r[1]+0x000001F0u; // 8003C084
  c->lr=0x8003C08Cu; f_8002F2EC(c); // 8003C088
  c->r[3]=c->r[1]+0x000001C0u; // 8003C08C
  c->lr=0x8003C094u; f_8002F2EC(c); // 8003C090
  c->r[3]=c->r[1]+0x00000190u; // 8003C094
  c->lr=0x8003C09Cu; f_8002F2EC(c); // 8003C098
  c->r[3]=c->r[1]+0x00000100u; // 8003C09C
  c->lr=0x8003C0A4u; f_80012348(c); // 8003C0A0
  c->r[3]=c->r[1]+0x000000F0u; // 8003C0A4
  c->lr=0x8003C0ACu; f_80012348(c); // 8003C0A8
  c->r[3]=c->r[1]+0x000000E0u; // 8003C0AC
  c->lr=0x8003C0B4u; f_80012348(c); // 8003C0B0
  c->r[3]=c->r[1]+0x000000D0u; // 8003C0B4
  c->lr=0x8003C0BCu; f_80012348(c); // 8003C0B8
  c->r[3]=c->r[1]+0x000000C0u; // 8003C0BC
  c->lr=0x8003C0C4u; f_80012348(c); // 8003C0C0
  c->r[3]=c->r[30]|c->r[30]; // 8003C0C4
  c->lr=0x8003C0CCu; f_80012AFC(c); // 8003C0C8
  c->lr=0x8003C0D0u; f_8003C3B8(c); // 8003C0CC
  c->r[4]=c->r[3]|c->r[3]; // 8003C0D0
  c->r[3]=c->r[1]+0x00000280u; // 8003C0D4
  c->lr=0x8003C0DCu; f_80016CFC(c); // 8003C0D8
  c->r[3]=c->r[1]+0x00000280u; // 8003C0DC
  c->lr=0x8003C0E4u; f_80016DAC(c); // 8003C0E0
  c->r[4]=c->r[30]+0x00002140u; // 8003C0E4
  c->lr=0x8003C0ECu; f_8000E6F4(c); // 8003C0E8
  c->r[3]=c->r[1]+0x00000280u; // 8003C0EC
  c->lr=0x8003C0F4u; f_8001D38C(c); // 8003C0F0
  c->r[4]=c->r[1]+0x00000250u; // 8003C0F4
  c->lr=0x8003C0FCu; f_8003C3C0(c); // 8003C0F8
  c->r[3]=c->r[1]+0x000000B0u; // 8003C0FC
  c->r[4]=c->r[1]+0x00000250u; // 8003C100
  c->lr=0x8003C108u; f_8001D088(c); // 8003C104
  c->r[3]=c->r[1]+0x00000100u; // 8003C108
  c->r[4]=c->r[1]+0x000000B0u; // 8003C10C
  c->lr=0x8003C114u; f_8000E6F4(c); // 8003C110
  {uint32_t ea=c->r[2]+0xFFFF8624u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C114
  c->r[3]=c->r[1]+0x000000A0u; // 8003C118
  c->r[4]=c->r[1]+0x00000100u; // 8003C11C
  c->lr=0x8003C124u; f_8001B5B0(c); // 8003C120
  c->r[3]=c->r[1]+0x000000F0u; // 8003C124
  c->r[4]=c->r[1]+0x000000A0u; // 8003C128
  c->lr=0x8003C130u; f_8000E6F4(c); // 8003C12C
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C130
  c->r[3]=c->r[1]+0x00000090u; // 8003C134
  c->r[4]=c->r[1]+0x00000100u; // 8003C138
  c->lr=0x8003C140u; f_8001B5B0(c); // 8003C13C
  c->r[3]=c->r[1]+0x000000E0u; // 8003C140
  c->r[4]=c->r[1]+0x00000090u; // 8003C144
  c->lr=0x8003C14Cu; f_8000E6F4(c); // 8003C148
  c->r[3]=c->r[1]+0x00000010u; // 8003C14C
  c->r[4]=0u+0xFFFFFFFFu; // 8003C150
  c->lr=0x8003C158u; f_8003C460(c); // 8003C154
  c->r[3]=c->r[1]+0x00000140u; // 8003C158
  c->r[4]=0u+0x00000000u; // 8003C15C
  c->r[5]=0u+0x0000000Au; // 8003C160
  c->r[6]=c->r[13]+0xFFFFA3B8u; // 8003C164
  c->lr=0x8003C16Cu; f_8003C8D4(c); // 8003C168
  {uint32_t ea=c->r[2]+0xFFFF8644u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003C16C
  c->r[3]=c->r[1]+0x00000010u; // 8003C170
  c->lr=0x8003C178u; f_8003CD80(c); // 8003C174
  c->r[3]=c->r[1]+0x00000010u; // 8003C178
  c->r[4]=0u+0xFFFFFFFFu; // 8003C17C
  c->lr=0x8003C184u; f_8003C468(c); // 8003C180
  c->r[3]=0u+0x803D0000u; // 8003C184
  c->r[3]=c->r[3]+0x0000407Cu; // 8003C188
  c->lr=0x8003C190u; f_8003B004(c); // 8003C18C
  c->lr=0x8003C194u; f_8003C470(c); // 8003C190
  c->r[31]=c->r[3]|c->r[3]; // 8003C194
  c->r[3]=c->r[1]+0x00000280u; // 8003C198
  c->lr=0x8003C1A0u; f_80016DAC(c); // 8003C19C
  c->r[4]=c->r[3]|c->r[3]; // 8003C1A0
  c->r[3]=c->r[1]+0x00000070u; // 8003C1A4
  c->r[5]=c->r[1]+0x000000E0u; // 8003C1A8
  c->lr=0x8003C1B0u; f_8000C9BC(c); // 8003C1AC
  c->r[3]=c->r[1]+0x00000280u; // 8003C1B0
  c->lr=0x8003C1B8u; f_80016DAC(c); // 8003C1B4
  c->r[4]=c->r[3]|c->r[3]; // 8003C1B8
  c->r[3]=c->r[1]+0x00000080u; // 8003C1BC
  c->r[5]=c->r[1]+0x000000F0u; // 8003C1C0
  c->lr=0x8003C1C8u; f_8003C478(c); // 8003C1C4
  c->f[1]=c->f[31]; // 8003C1C8
  c->r[3]=c->r[31]|c->r[31]; // 8003C1CC
  c->r[4]=c->r[1]+0x00000080u; // 8003C1D0
  c->r[5]=c->r[1]+0x00000070u; // 8003C1D4
  c->r[6]=c->r[1]+0x00000010u; // 8003C1D8
  c->r[7]=c->r[1]+0x00000140u; // 8003C1DC
  c->lr=0x8003C1E4u; f_80301E34(c); // 8003C1E0
  {uint32_t ea=c->r[30]+0x00002184u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003C1E4
  c->r[31]=c->r[3]|c->r[3]; // 8003C1E8
  c->r[3]=c->r[1]+0x00000280u; // 8003C1EC
  c->lr=0x8003C1F4u; f_80016DAC(c); // 8003C1F0
  c->lr=0x8003C1F8u; f_80010DA8(c); // 8003C1F4
  cmps(c,0,(int32_t)c->r[31],0); // 8003C1F8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 8003C1FC
  if (crb(c,2)) { goto L_8003C26C; } // 8003C200
  c->r[3]=c->r[1]+0x00000140u; // 8003C204
  c->lr=0x8003C20Cu; f_8003C958(c); // 8003C208
  c->r[4]=c->r[3]|c->r[3]; // 8003C20C
  c->r[3]=c->r[1]+0x00000140u; // 8003C210
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8003C214
  c->lr=0x8003C21Cu; f_8003C970(c); // 8003C218
  c->r[31]=c->r[3]|c->r[3]; // 8003C21C
  c->r[3]=c->r[1]+0x00000280u; // 8003C220
  c->lr=0x8003C228u; f_80016DAC(c); // 8003C224
  c->r[4]=c->r[31]+0x00000010u; // 8003C228
  c->lr=0x8003C230u; f_8000E6F4(c); // 8003C22C
  c->r[3]=c->r[1]+0x00000280u; // 8003C230
  c->lr=0x8003C238u; f_80016DAC(c); // 8003C234
  c->lr=0x8003C23Cu; f_800147E0(c); // 8003C238
  {uint32_t ea=c->r[30]+0x00002184u; WF32(ea,c->f[1]);} // 8003C23C
  c->r[3]=c->r[1]+0x00000050u; // 8003C240
  c->r[4]=c->r[31]+0x00000020u; // 8003C244
  c->r[5]=c->r[30]+0x00002120u; // 8003C248
  c->lr=0x8003C250u; f_8000C9BC(c); // 8003C24C
  {uint32_t ea=c->r[2]+0xFFFF8648u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C250
  c->r[3]=c->r[1]+0x00000060u; // 8003C254
  c->r[4]=c->r[1]+0x00000050u; // 8003C258
  c->lr=0x8003C260u; f_8001B5B0(c); // 8003C25C
  c->r[3]=c->r[30]+0x00002120u; // 8003C260
  c->r[4]=c->r[1]+0x00000060u; // 8003C264
  c->lr=0x8003C26Cu; f_8001A5B4(c); // 8003C268
L_8003C26C:;
  c->lr=0x8003C270u; f_80010F48(c); // 8003C26C
  c->r[31]=c->r[3]|c->r[3]; // 8003C270
  c->r[3]=c->r[1]+0x00000040u; // 8003C274
  c->r[4]=c->r[30]+0x00002150u; // 8003C278
  c->lr=0x8003C280u; f_800133C0(c); // 8003C27C
  c->r[5]=c->r[31]|c->r[31]; // 8003C280
  c->r[3]=c->r[1]+0x000001F0u; // 8003C284
  c->r[4]=c->r[1]+0x00000040u; // 8003C288
  c->lr=0x8003C290u; f_80010DB0(c); // 8003C28C
  c->r[3]=c->r[1]+0x00000030u; // 8003C290
  c->r[4]=c->r[1]+0x000001F0u; // 8003C294
  c->lr=0x8003C29Cu; f_800133C0(c); // 8003C298
  c->r[3]=c->r[1]+0x000000D0u; // 8003C29C
  c->r[4]=c->r[30]+0x00002120u; // 8003C2A0
  c->r[5]=c->r[1]+0x00000030u; // 8003C2A4
  c->lr=0x8003C2ACu; f_8003BBF0(c); // 8003C2A8
  c->r[3]=c->r[1]+0x000001F0u; // 8003C2AC
  c->r[4]=c->r[30]+0x00002120u; // 8003C2B0
  c->lr=0x8003C2B8u; f_8003BC48(c); // 8003C2B4
  c->r[3]=c->r[1]+0x000001F0u; // 8003C2B8
  c->r[4]=c->r[1]+0x000000D0u; // 8003C2BC
  c->lr=0x8003C2C4u; f_8003BC2C(c); // 8003C2C0
  c->r[3]=c->r[30]+0x000000C0u; // 8003C2C4
  c->lr=0x8003C2CCu; f_8003C49C(c); // 8003C2C8
  c->f[31]=c->f[1]; // 8003C2CC
  c->r[3]=c->r[30]+0x000000C0u; // 8003C2D0
  c->lr=0x8003C2D8u; f_8003C4A4(c); // 8003C2D4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003C2D8
  c->lr=0x8003C2E0u; f_8003C4AC(c); // 8003C2DC
  c->f[3]=c->f[1]; // 8003C2E0
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C2E4
  c->r[3]=c->r[1]+0x000000C0u; // 8003C2E8
  c->f[2]=c->f[1]; // 8003C2EC
  c->lr=0x8003C2F4u; f_8003A974(c); // 8003C2F0
  c->r[3]=c->r[1]+0x000001C0u; // 8003C2F4
  c->r[4]=c->r[1]+0x000000C0u; // 8003C2F8
  c->lr=0x8003C300u; f_8002FC00(c); // 8003C2FC
  c->r[3]=c->r[1]+0x00000160u; // 8003C300
  c->r[4]=c->r[1]+0x000001F0u; // 8003C304
  c->r[5]=c->r[1]+0x000001C0u; // 8003C308
  c->lr=0x8003C310u; f_8003C504(c); // 8003C30C
  c->r[3]=c->r[1]+0x00000190u; // 8003C310
  c->r[4]=c->r[1]+0x00000160u; // 8003C314
  c->lr=0x8003C31Cu; f_8003C4B8(c); // 8003C318
  c->r[3]=c->r[1]+0x00000020u; // 8003C31C
  c->r[4]=c->r[1]+0x00000190u; // 8003C320
  c->lr=0x8003C328u; f_8003BC64(c); // 8003C324
  c->r[31]=c->r[3]|c->r[3]; // 8003C328
  c->r[3]=c->r[1]+0x00000280u; // 8003C32C
  c->lr=0x8003C334u; f_80016D50(c); // 8003C330
  c->r[4]=c->r[31]|c->r[31]; // 8003C334
  c->lr=0x8003C33Cu; f_8002FBCC(c); // 8003C338
  c->r[3]=c->r[1]+0x00000280u; // 8003C33C
  c->lr=0x8003C344u; f_80016DAC(c); // 8003C340
  c->lr=0x8003C348u; f_80010DA8(c); // 8003C344
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C348
  {uint32_t ea=c->r[30]+0x000021E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C34C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003C350
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8003C354
  c->r[3]=c->r[30]|c->r[30]; // 8003C358
  c->lr=0x8003C360u; f_80012AFC(c); // 8003C35C
  c->r[4]=c->r[1]+0x00000280u; // 8003C360
  c->lr=0x8003C368u; f_8003C654(c); // 8003C364
  c->r[3]=c->r[30]|c->r[30]; // 8003C368
  c->lr=0x8003C370u; f_80012AFC(c); // 8003C36C
  c->lr=0x8003C374u; f_8034007C(c); // 8003C370
  c->r[3]=R32(c->r[30]+0x000021C4u); // 8003C374
  c->r[4]=c->r[1]+0x00000280u; // 8003C378
  c->lr=0x8003C380u; f_8003C654(c); // 8003C37C
  c->r[3]=R32(c->r[30]+0x000021C4u); // 8003C380
  c->lr=0x8003C388u; f_8034007C(c); // 8003C384
  c->r[3]=c->r[1]+0x00000140u; // 8003C388
  c->r[4]=0u+0xFFFFFFFFu; // 8003C38C
  c->lr=0x8003C394u; f_8001A5D8(c); // 8003C390
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003C394
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003C398
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003C39C
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003C3A0
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 8003C3A4
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 8003C3A8
  c->lr=c->r[0]; // 8003C3AC
  c->r[1]=c->r[10]|c->r[10]; // 8003C3B0
  return; // 8003C3B4
}

// fn_8003C3B8
void f_8003C3B8(Ctx* __restrict c) {
  trace_call(0x8003C3B8u);
  c->r[3]=c->r[3]+0x00000020u; // 8003C3B8
  return; // 8003C3BC
}

// fn_8003C3C0
void f_8003C3C0(Ctx* __restrict c) {
  trace_call(0x8003C3C0u);
  {uint32_t ea=c->r[2]+0xFFFF8624u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003C3C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 8003C3C4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C3C8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C3CC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 8003C3D0
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[1]); // 8003C3D4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8003C3D8
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[0]); // 8003C3DC
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003C3E0
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[7]); // 8003C3E4
  c->f[11]=c->ps1[11]=S(c->f[8]*c->f[1]); // 8003C3E8
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 8003C3EC
  c->f[12]=c->ps1[12]=S(c->f[9]*c->f[1]); // 8003C3F0
  c->f[10]=c->ps1[10]=S(c->f[3]*c->f[6]); // 8003C3F4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 8003C3F8
  c->f[2]=c->ps1[2]=S(c->f[11]+c->f[0]); // 8003C3FC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[11]); // 8003C400
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[1]); // 8003C404
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[2]); // 8003C408
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 8003C40C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[3]);} // 8003C410
  c->f[2]=c->ps1[2]=S(c->f[12]-c->f[10]); // 8003C414
  c->f[1]=c->ps1[1]=S(c->f[12]+c->f[10]); // 8003C418
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[4]);} // 8003C41C
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[6]); // 8003C420
  c->f[10]=c->ps1[10]=S(c->f[9]*c->f[7]); // 8003C424
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[2]);} // 8003C428
  c->f[4]=c->ps1[4]=S(c->f[9]*c->f[6]); // 8003C42C
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[1]);} // 8003C430
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[7]); // 8003C434
  c->f[2]=c->ps1[2]=S(c->f[10]+c->f[3]); // 8003C438
  c->f[1]=c->ps1[1]=S(c->f[10]-c->f[3]); // 8003C43C
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 8003C440
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 8003C444
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[4]); // 8003C448
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[2]);} // 8003C44C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[3]);} // 8003C450
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8003C454
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[1]);} // 8003C458
  return; // 8003C45C
}

// fn_8003C460
void f_8003C460(Ctx* __restrict c) {
  trace_call(0x8003C460u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 8003C460
  return; // 8003C464
}

// fn_8003C468
void f_8003C468(Ctx* __restrict c) {
  trace_call(0x8003C468u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 8003C468
  return; // 8003C46C
}

// fn_8003C470
void f_8003C470(Ctx* __restrict c) {
  trace_call(0x8003C470u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003C470
  return; // 8003C474
}

// fn_8003C478
void f_8003C478(Ctx* __restrict c) {
  trace_call(0x8003C478u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003C478
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003C47C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8003C480
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003C484
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003C488
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003C48C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003C490
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003C494
  return; // 8003C498
}

// fn_8003C49C
void f_8003C49C(Ctx* __restrict c) {
  trace_call(0x8003C49Cu);
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C49C
  return; // 8003C4A0
}

// fn_8003C4A4
void f_8003C4A4(Ctx* __restrict c) {
  trace_call(0x8003C4A4u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C4A4
  return; // 8003C4A8
}

// fn_8003C4AC
void f_8003C4AC(Ctx* __restrict c) {
  trace_call(0x8003C4ACu);
  {uint32_t ea=c->r[2]+0xFFFF864Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C4AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8003C4B0
  return; // 8003C4B4
}

// fn_8003C4B8
void f_8003C4B8(Ctx* __restrict c) {
  trace_call(0x8003C4B8u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003C4B8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8003C4BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003C4C0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003C4C4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003C4C8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003C4CC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003C4D0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C4D4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C4D8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 8003C4DC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 8003C4E0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 8003C4E4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8003C4E8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 8003C4EC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 8003C4F0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 8003C4F4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8003C4F8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8003C4FC
  return; // 8003C500
}

// fn_8003C504
void f_8003C504(Ctx* __restrict c) {
  trace_call(0x8003C504u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003C504
  c->r[12]=c->r[1]|c->r[1]; // 8003C508
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 8003C50C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C510
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003C514
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003C518
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003C51C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003C520
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C524
  c->r[6]=c->r[1]+0x00000030u; // 8003C528
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003C52C
  c->r[7]=c->r[1]+0x00000020u; // 8003C530
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,1,0);} // 8003C534
  c->r[8]=c->r[1]+0x00000010u; // 8003C538
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003C53C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 8003C540
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 8003C544
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[7]=t0; c->ps1[7]=t1;} // 8003C548
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C54C
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[10]=t0; c->ps1[10]=t1;} // 8003C550
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[11]=t0; c->ps1[11]=t1;} // 8003C554
  {double t0=S(c->f[0]*c->f[9]), t1=S(c->ps1[0]*c->f[9]); c->f[31]=t0; c->ps1[31]=t1;} // 8003C558
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,4,ea,0,0);} // 8003C55C
  {double t0=S(c->f[2]*c->f[9]), t1=S(c->ps1[2]*c->f[9]); c->f[30]=t0; c->ps1[30]=t1;} // 8003C560
  {uint32_t ea=c->r[4]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003C564
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,5,ea,1,0);} // 8003C568
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[6])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[6])); c->f[2]=t0; c->ps1[2]=t1;} // 8003C56C
  {double t0=S(std::fma(c->f[5],c->f[1],c->f[7])), t1=S(std::fma(c->ps1[5],c->f[1],c->ps1[7])); c->f[6]=t0; c->ps1[6]=t1;} // 8003C570
  {uint32_t ea=c->r[4]+0x00000024u; c->f[13]=c->ps1[13]=RF32(ea);} // 8003C574
  {double t0=S(std::fma(c->f[4],c->f[8],c->f[10])), t1=S(std::fma(c->ps1[4],c->f[8],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 8003C578
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003C57C
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,0,ea,0,0);} // 8003C580
  {double t0=S(std::fma(c->f[5],c->f[8],c->f[11])), t1=S(std::fma(c->ps1[5],c->f[8],c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 8003C584
  {double t0=S(std::fma(c->f[0],c->f[3],c->f[2])), t1=S(std::fma(c->ps1[0],c->f[3],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 8003C588
  {uint32_t ea=c->r[5]+0x00000028u; psq_load(c,1,ea,1,0);} // 8003C58C
  {double t0=S(std::fma(c->f[4],c->f[13],c->f[31])), t1=S(std::fma(c->ps1[4],c->f[13],c->ps1[31])); c->f[4]=t0; c->ps1[4]=t1;} // 8003C590
  {uint32_t ea=c->r[4]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 8003C594
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,2,ea,0,0);} // 8003C598
  {double t0=S(std::fma(c->f[1],c->f[3],c->f[6])), t1=S(std::fma(c->ps1[1],c->f[3],c->ps1[6])); c->f[2]=t0; c->ps1[2]=t1;} // 8003C59C
  {double t0=S(std::fma(c->f[0],c->f[9],c->f[10])), t1=S(std::fma(c->ps1[0],c->f[9],c->ps1[10])); c->f[3]=t0; c->ps1[3]=t1;} // 8003C5A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003C5A4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 8003C5A8
  {double t0=S(std::fma(c->f[1],c->f[9],c->f[11])), t1=S(std::fma(c->ps1[1],c->f[9],c->ps1[11])); c->f[9]=t0; c->ps1[9]=t1;} // 8003C5AC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[12]=c->ps1[12]=RF32(ea);} // 8003C5B0
  {double t0=S(std::fma(c->f[5],c->f[13],c->f[30])), t1=S(std::fma(c->ps1[5],c->f[13],c->ps1[30])); c->f[5]=t0; c->ps1[5]=t1;} // 8003C5B4
  {double t0=S(std::fma(c->f[0],c->f[12],c->f[4])), t1=S(std::fma(c->ps1[0],c->f[12],c->ps1[4])); c->f[0]=t0; c->ps1[0]=t1;} // 8003C5B8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,2,ea,1,0);} // 8003C5BC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003C5C0
  {double t0=S(std::fma(c->f[1],c->f[12],c->f[5])), t1=S(std::fma(c->ps1[1],c->f[12],c->ps1[5])); c->f[10]=t0; c->ps1[10]=t1;} // 8003C5C4
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,3,ea,0,0);} // 8003C5C8
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003C5CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003C5D0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003C5D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003C5D8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C5DC
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,9,ea,1,0);} // 8003C5E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003C5E4
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,10,ea,1,0);} // 8003C5E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C5EC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 8003C5F0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 8003C5F4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 8003C5F8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 8003C5FC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 8003C600
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 8003C604
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 8003C608
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8003C60C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8003C610
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 8003C614
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 8003C618
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[6]);} // 8003C61C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 8003C620
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 8003C624
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 8003C628
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8003C62C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8003C630
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8003C634
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003C638
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003C63C
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003C640
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003C644
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003C648
  c->r[1]=c->r[10]|c->r[10]; // 8003C64C
  return; // 8003C650
}

// fn_8003C654
void f_8003C654(Ctx* __restrict c) {
  trace_call(0x8003C654u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C654
  c->r[0]=c->lr; // 8003C658
  c->r[6]=0u+0x00000000u; // 8003C65C
  c->r[7]=0u+0x00000000u; // 8003C660
  W32(c->r[1]+0x00000044u,c->r[0]); // 8003C664
  c->r[8]=0u+0x00000000u; // 8003C668
  c->r[0]=R32(c->r[4]+0x00000000u); // 8003C66C
  c->r[9]=0u+0x00000000u; // 8003C670
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8003C674
  c->r[31]=c->r[3]|c->r[3]; // 8003C678
  c->r[5]=R32(c->r[3]+0x00000020u); // 8003C67C
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C680
  if (!crb(c,6)) { goto L_8003C69C; } // 8003C684
  c->r[5]=R32(c->r[3]+0x00000024u); // 8003C688
  c->r[0]=R32(c->r[4]+0x00000004u); // 8003C68C
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C690
  if (!crb(c,6)) { goto L_8003C69C; } // 8003C694
  c->r[9]=0u+0x00000001u; // 8003C698
L_8003C69C:;
  cmps(c,1,(int32_t)c->r[9],0); // 8003C69C
  if (crb(c,6)) { goto L_8003C6B8; } // 8003C6A0
  c->r[5]=R32(c->r[3]+0x00000028u); // 8003C6A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8003C6A8
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C6AC
  if (!crb(c,6)) { goto L_8003C6B8; } // 8003C6B0
  c->r[8]=0u+0x00000001u; // 8003C6B4
L_8003C6B8:;
  cmps(c,1,(int32_t)c->r[8],0); // 8003C6B8
  if (crb(c,6)) { goto L_8003C734; } // 8003C6BC
  c->r[5]=R32(c->r[3]+0x00000030u); // 8003C6C0
  c->r[8]=0u+0x00000000u; // 8003C6C4
  c->r[0]=R32(c->r[4]+0x00000010u); // 8003C6C8
  c->r[9]=0u+0x00000000u; // 8003C6CC
  c->r[10]=0u+0x00000000u; // 8003C6D0
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C6D4
  if (!crb(c,6)) { goto L_8003C6F0; } // 8003C6D8
  c->r[5]=R32(c->r[3]+0x00000034u); // 8003C6DC
  c->r[0]=R32(c->r[4]+0x00000014u); // 8003C6E0
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C6E4
  if (!crb(c,6)) { goto L_8003C6F0; } // 8003C6E8
  c->r[10]=0u+0x00000001u; // 8003C6EC
L_8003C6F0:;
  cmps(c,1,(int32_t)c->r[10],0); // 8003C6F0
  if (crb(c,6)) { goto L_8003C70C; } // 8003C6F4
  c->r[5]=R32(c->r[3]+0x00000038u); // 8003C6F8
  c->r[0]=R32(c->r[4]+0x00000018u); // 8003C6FC
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C700
  if (!crb(c,6)) { goto L_8003C70C; } // 8003C704
  c->r[9]=0u+0x00000001u; // 8003C708
L_8003C70C:;
  cmps(c,1,(int32_t)c->r[9],0); // 8003C70C
  if (crb(c,6)) { goto L_8003C728; } // 8003C710
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 8003C714
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8003C718
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C71C
  if (!crb(c,6)) { goto L_8003C728; } // 8003C720
  c->r[8]=0u+0x00000001u; // 8003C724
L_8003C728:;
  cmps(c,1,(int32_t)c->r[8],0); // 8003C728
  if (crb(c,6)) { goto L_8003C734; } // 8003C72C
  c->r[7]=0u+0x00000001u; // 8003C730
L_8003C734:;
  cmps(c,1,(int32_t)c->r[7],0); // 8003C734
  if (crb(c,6)) { goto L_8003C790; } // 8003C738
  c->r[5]=R32(c->r[3]+0x00000040u); // 8003C73C
  c->r[7]=0u+0x00000000u; // 8003C740
  c->r[0]=R32(c->r[4]+0x00000020u); // 8003C744
  c->r[8]=0u+0x00000000u; // 8003C748
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C74C
  if (!crb(c,6)) { goto L_8003C768; } // 8003C750
  c->r[5]=R32(c->r[3]+0x00000044u); // 8003C754
  c->r[0]=R32(c->r[4]+0x00000024u); // 8003C758
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C75C
  if (!crb(c,6)) { goto L_8003C768; } // 8003C760
  c->r[8]=0u+0x00000001u; // 8003C764
L_8003C768:;
  cmps(c,1,(int32_t)c->r[8],0); // 8003C768
  if (crb(c,6)) { goto L_8003C784; } // 8003C76C
  c->r[5]=R32(c->r[3]+0x00000048u); // 8003C770
  c->r[0]=R32(c->r[4]+0x00000028u); // 8003C774
  cmps(c,1,(int32_t)c->r[5],(int32_t)c->r[0]); // 8003C778
  if (!crb(c,6)) { goto L_8003C784; } // 8003C77C
  c->r[7]=0u+0x00000001u; // 8003C780
L_8003C784:;
  cmps(c,1,(int32_t)c->r[7],0); // 8003C784
  if (crb(c,6)) { goto L_8003C790; } // 8003C788
  c->r[6]=0u+0x00000001u; // 8003C78C
L_8003C790:;
  cmps(c,1,(int32_t)c->r[6],0); // 8003C790
  if (!crb(c,6)) { goto L_8003C8C0; } // 8003C794
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C798
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[0]); // 8003C79C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C7A0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8003C7A4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C7A8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8003C7AC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C7B0
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,2,ea,0,0);} // 8003C7B4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8003C7B8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003C7BC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003C7C0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8003C7C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003C7C8
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 8003C7CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003C7D0
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[7]=t0; c->ps1[7]=t1;} // 8003C7D4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003C7D8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C7DC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C7E0
  {double t0=S(c->f[7]+c->ps1[7]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 8003C7E4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 8003C7E8
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 8003C7EC
  fcmp(c,0,c->f[7],c->f[6]); // 8003C7F0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 8003C7F4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 8003C7F8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8003C7FC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8003C800
  if (crb(c,2)) { goto L_8003C824; } // 8003C804
  c->f[3]=frsqrte(c->f[7]); // 8003C808
  {uint32_t ea=c->r[2]+0xFFFF861Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C80C
  {uint32_t ea=c->r[2]+0xFFFF8638u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C810
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 8003C814
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8003C818
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[7],-c->f[1])); // 8003C81C
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[0]); // 8003C820
L_8003C824:;
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 8003C824
  c->r[8]=c->r[3]+0x0000001Cu; // 8003C828
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 8003C82C
  c->r[7]=0u+0x00000002u; // 8003C830
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->f[7]); c->f[1]=t0; c->ps1[1]=t1;} // 8003C834
  c->r[4]=0u+0x00000003u; // 8003C838
  {double t0=S(c->f[0]*c->f[7]), t1=S(c->ps1[0]*c->f[7]); c->f[0]=t0; c->ps1[0]=t1;} // 8003C83C
  c->r[0]=0u+0x00000001u; // 8003C840
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,1,ea,0,0);} // 8003C844
  c->r[5]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 8003C848
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 8003C84C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8003C850
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8003C854
  W32(c->r[1]+0x00000020u,c->r[8]); // 8003C858
  c->r[5]=c->r[6]|c->r[5]; // 8003C85C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8003C860
  c->r[0]=c->r[5]|c->r[0]; // 8003C864
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8003C868
  c->r[0]=R32(c->r[3]+0x00000004u); // 8003C86C
  W32(c->r[1]+0x00000024u,c->r[7]); // 8003C870
  cmps(c,1,(int32_t)c->r[0],0); // 8003C874
  W32(c->r[1]+0x00000010u,c->r[8]); // 8003C878
  W32(c->r[1]+0x00000014u,c->r[7]); // 8003C87C
  W32(c->r[1]+0x00000030u,c->r[8]); // 8003C880
  W32(c->r[1]+0x00000034u,c->r[7]); // 8003C884
  W32(c->r[1]+0x00000018u,c->r[8]); // 8003C888
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8003C88C
  W32(c->r[1]+0x00000008u,c->r[8]); // 8003C890
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8003C894
  W32(c->r[1]+0x00000028u,c->r[8]); // 8003C898
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8003C89C
  if (crb(c,6)) { goto L_8003C8AC; } // 8003C8A0
  c->r[3]=c->r[31]|c->r[31]; // 8003C8A4
  c->lr=0x8003C8ACu; f_80340A20(c); // 8003C8A8
L_8003C8AC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8003C8AC
  cmps(c,1,(int32_t)c->r[0],0); // 8003C8B0
  if (crb(c,6)) { goto L_8003C8C0; } // 8003C8B4
  c->r[3]=c->r[31]|c->r[31]; // 8003C8B8
  c->lr=0x8003C8C0u; f_80340B8C(c); // 8003C8BC
L_8003C8C0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003C8C0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8003C8C4
  c->lr=c->r[0]; // 8003C8C8
  c->r[1]=c->r[1]+0x00000040u; // 8003C8CC
  return; // 8003C8D0
}

// fn_8003C8D4
void f_8003C8D4(Ctx* __restrict c) {
  trace_call(0x8003C8D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C8D4
  c->r[0]=c->lr; // 8003C8D8
  cmps(c,0,(int32_t)c->r[4],0); // 8003C8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C8E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003C8E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003C8E8
  c->r[30]=c->r[3]|c->r[3]; // 8003C8EC
  W32(c->r[3]+0x00000010u,c->r[6]); // 8003C8F0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8003C8F4
  if (crb(c,2)) { goto L_8003C92C; } // 8003C8F8
  c->r[12]=R32(c->r[6]+0x00000000u); // 8003C8FC
  c->r[31]=rotl(c->r[4],6)&0xFFFFFFC0u; // 8003C900
  c->r[3]=c->r[6]|c->r[6]; // 8003C904
  c->r[12]=R32(c->r[12]+0x00000008u); // 8003C908
  c->r[4]=c->r[31]|c->r[31]; // 8003C90C
  c->ctr=c->r[12]; // 8003C910
  if (true) { c->lr=0x8003C918u; dispatch(c,c->ctr); } // 8003C914
  c->r[0]=c->r[3]+c->r[31]; // 8003C918
  W32(c->r[30]+0x00000000u,c->r[3]); // 8003C91C
  W32(c->r[30]+0x00000004u,c->r[3]); // 8003C920
  W32(c->r[30]+0x00000008u,c->r[0]); // 8003C924
  goto L_8003C93C; // 8003C928
L_8003C92C:;
  c->r[0]=0u+0x00000000u; // 8003C92C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003C930
  W32(c->r[3]+0x00000004u,c->r[0]); // 8003C934
  W32(c->r[3]+0x00000008u,c->r[0]); // 8003C938
L_8003C93C:;
  c->r[3]=c->r[30]|c->r[30]; // 8003C93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C940
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003C944
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C948
  c->lr=c->r[0]; // 8003C94C
  c->r[1]=c->r[1]+0x00000010u; // 8003C950
  return; // 8003C954
}

// fn_8003C958
void f_8003C958(Ctx* __restrict c) {
  trace_call(0x8003C958u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003C958
  c->r[0]=R32(c->r[3]+0x00000004u); // 8003C95C
  c->r[0]=c->r[0]-c->r[4]; // 8003C960
  c->r[0]=sraw(c,c->r[0],6); // 8003C964
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8003C968
  return; // 8003C96C
}

// fn_8003C970
void f_8003C970(Ctx* __restrict c) {
  trace_call(0x8003C970u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003C970
  c->r[0]=rotl(c->r[4],6)&0xFFFFFFC0u; // 8003C974
  c->r[3]=c->r[3]+c->r[0]; // 8003C978
  return; // 8003C97C
}

// fn_8003C980
void f_8003C980(Ctx* __restrict c) {
  trace_call(0x8003C980u);
  c->r[5]=R32(c->r[3]+0x000021F0u); // 8003C980
  W32(c->r[3]+0x00002208u,c->r[4]); // 8003C984
  cmps(c,0,(int32_t)c->r[5],0); // 8003C988
  if (crb(c,2)) { goto L_8003C994; } // 8003C98C
  W32(c->r[5]+0x00002430u,c->r[4]); // 8003C990
L_8003C994:;
  c->r[3]=R32(c->r[3]+0x000021F8u); // 8003C994
  cmps(c,0,(int32_t)c->r[3],0); // 8003C998
  if (crb(c,2)) return; // 8003C99C
  W32(c->r[3]+0x00002430u,c->r[4]); // 8003C9A0
  return; // 8003C9A4
}

// fn_8003C9A8
void f_8003C9A8(Ctx* __restrict c) {
  trace_call(0x8003C9A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003C9A8
  c->r[12]=c->r[1]|c->r[1]; // 8003C9AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 8003C9B0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C9B4
  c->r[0]=c->lr; // 8003C9B8
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003C9BC
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003C9C0
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003C9C4
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003C9C8
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003C9CC
  W32(c->r[12]+0xFFFFFFDCu,c->r[31]); // 8003C9D0
  c->r[31]=c->r[3]|c->r[3]; // 8003C9D4
  W32(c->r[12]+0xFFFFFFD8u,c->r[30]); // 8003C9D8
  c->r[0]=R32(c->r[3]+0x00002208u); // 8003C9DC
  cmps(c,0,(int32_t)c->r[0],0); // 8003C9E0
  if (crb(c,2)) { goto L_8003CA10; } // 8003C9E4
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C9E8
  c->r[3]=c->r[3]+0x00002238u; // 8003C9EC
  c->lr=0x8003C9F4u; f_80362C80(c); // 8003C9F0
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C9F4
  c->r[3]=c->r[31]+0x00002244u; // 8003C9F8
  c->lr=0x8003CA00u; f_80362C80(c); // 8003C9FC
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CA00
  c->r[3]=c->r[31]+0x0000222Cu; // 8003CA04
  c->lr=0x8003CA0Cu; f_80362C80(c); // 8003CA08
  goto L_8003CC9C; // 8003CA0C
L_8003CA10:;
  {uint32_t ea=c->r[3]+0x00002210u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CA10
  {uint32_t ea=c->r[3]+0x00002214u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CA14
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003CA18
  c->lr=0x8003CA20u; f_8005995C(c); // 8003CA1C
  {uint32_t ea=c->r[31]+0x0000221Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA20
  c->r[4]=0u+0x00000002u; // 8003CA24
  {uint32_t ea=c->r[31]+0x00002218u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CA28
  c->r[0]=0u+0x00000001u; // 8003CA2C
  c->r[30]=R32(c->r[31]+0x00000030u); // 8003CA30
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8003CA34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8003CA38
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8003CA3C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8003CA40
  c->r[5]=c->r[30]+0x0000001Cu; // 8003CA44
  c->f[31]=c->f[1]; // 8003CA48
  W32(c->r[1]+0x00000018u,c->r[5]); // 8003CA4C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003CA50
  c->r[0]=c->r[3]&c->r[0]; // 8003CA54
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8003CA58
  W32(c->r[1]+0x00000010u,c->r[5]); // 8003CA5C
  cmpu(c,0,c->r[0],0x00000001u); // 8003CA60
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 8003CA64
  W32(c->r[1]+0x00000014u,c->r[4]); // 8003CA68
  if (!crb(c,2)) { goto L_8003CA78; } // 8003CA6C
  c->r[3]=c->r[30]|c->r[30]; // 8003CA70
  c->lr=0x8003CA78u; f_8034007C(c); // 8003CA74
L_8003CA78:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA78
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8003CA7C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA80
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8003CA84
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA88
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8003CA8C
  c->r[0]=R32(c->r[31]+0x00002204u); // 8003CA90
  cmps(c,0,(int32_t)c->r[0],1); // 8003CA94
  if (!crb(c,2)) { goto L_8003CAA0; } // 8003CA98
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[30]=c->ps1[30]=RF32(ea);} // 8003CA9C
L_8003CAA0:;
  c->r[3]=R32(c->r[13]+0xFFFF9570u); // 8003CAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8003CAA4
  if (crb(c,2)) { goto L_8003CAE8; } // 8003CAA8
  c->r[4]=c->r[1]+0x00000020u; // 8003CAAC
  c->lr=0x8003CAB4u; f_800510EC(c); // 8003CAB0
  c->r[0]=R32(c->r[31]+0x0000220Cu); // 8003CAB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8003CAB8
  if (crb(c,2)) { goto L_8003CB24; } // 8003CABC
  cmps(c,0,(int32_t)c->r[3],16); // 8003CAC0
  if (crb(c,2)) { goto L_8003CB24; } // 8003CAC4
  cmps(c,0,(int32_t)c->r[0],16); // 8003CAC8
  if (!crb(c,2)) { goto L_8003CB24; } // 8003CACC
  W32(c->r[31]+0x0000220Cu,c->r[3]); // 8003CAD0
  c->r[5]=c->r[31]+0x00002238u; // 8003CAD4
  c->r[4]=R32(c->r[31]+0x00002224u); // 8003CAD8
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003CADC
  c->lr=0x8003CAE4u; f_8006F7E8(c); // 8003CAE0
  goto L_8003CB24; // 8003CAE4
L_8003CAE8:;
  c->r[0]=R32(c->r[31]+0x0000220Cu); // 8003CAE8
  cmps(c,0,(int32_t)c->r[0],16); // 8003CAEC
  if (!crb(c,2)) { goto L_8003CB24; } // 8003CAF0
  c->r[0]=0u+0x00000001u; // 8003CAF4
  W32(c->r[31]+0x0000220Cu,c->r[0]); // 8003CAF8
  c->r[4]=R32(c->r[31]+0x00002224u); // 8003CAFC
  c->r[5]=c->r[31]+0x00002238u; // 8003CB00
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003CB04
  c->lr=0x8003CB0Cu; f_8006F7E8(c); // 8003CB08
  c->r[4]=R32(c->r[31]+0x00002228u); // 8003CB0C
  cmps(c,0,(int32_t)c->r[4],0); // 8003CB10
  if (crb(c,2)) { goto L_8003CB24; } // 8003CB14
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003CB18
  c->r[5]=c->r[31]+0x0000222Cu; // 8003CB1C
  c->lr=0x8003CB24u; f_8006F7E8(c); // 8003CB20
L_8003CB24:;
  c->r[0]=R32(c->r[31]+0x0000220Cu); // 8003CB24
  cmps(c,0,(int32_t)c->r[0],16); // 8003CB28
  if (crb(c,2)) { goto L_8003CB70; } // 8003CB2C
  c->r[3]=c->r[31]+0x00002238u; // 8003CB30
  c->r[4]=c->r[1]+0x00000020u; // 8003CB34
  c->r[5]=0u+0x00000000u; // 8003CB38
  c->r[6]=0u+0x00000000u; // 8003CB3C
  c->lr=0x8003CB44u; f_80362AEC(c); // 8003CB40
  c->f[1]=c->f[31]; // 8003CB44
  c->r[3]=c->r[31]+0x00002238u; // 8003CB48
  c->lr=0x8003CB50u; f_80362C80(c); // 8003CB4C
  c->f[1]=c->f[30]; // 8003CB50
  c->r[3]=c->r[31]+0x00002238u; // 8003CB54
  c->lr=0x8003CB5Cu; f_80362D78(c); // 8003CB58
  c->r[3]=c->r[31]+0x0000222Cu; // 8003CB5C
  c->r[4]=c->r[1]+0x00000020u; // 8003CB60
  c->r[5]=0u+0x00000000u; // 8003CB64
  c->r[6]=0u+0x00000000u; // 8003CB68
  c->lr=0x8003CB70u; f_80362AEC(c); // 8003CB6C
L_8003CB70:;
  {uint32_t ea=c->r[31]+0x000021D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CB70
  {uint32_t ea=c->r[31]+0x000021D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB74
  fcmp(c,0,c->f[1],c->f[0]); // 8003CB78
  if (!crb(c,1)) { goto L_8003CB8C; } // 8003CB7C
  {uint32_t ea=c->r[2]+0xFFFF8614u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB80
  {uint32_t ea=c->r[31]+0x00002258u; WF32(ea,c->f[0]);} // 8003CB84
  goto L_8003CB94; // 8003CB88
L_8003CB8C:;
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB8C
  {uint32_t ea=c->r[31]+0x00002258u; WF32(ea,c->f[0]);} // 8003CB90
L_8003CB94:;
  {uint32_t ea=c->r[31]+0x0000225Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB94
  {uint32_t ea=c->r[31]+0x00002258u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CB98
  fcmp(c,0,c->f[0],c->f[1]); // 8003CB9C
  if (crb(c,2)) { goto L_8003CBF8; } // 8003CBA0
  fcmp(c,0,c->f[0],c->f[1]); // 8003CBA4
  if (!crb(c,1)) { goto L_8003CBD4; } // 8003CBA8
  c->r[3]=0u+0x803D0000u; // 8003CBAC
  c->r[3]=c->r[3]+0x0000407Cu; // 8003CBB0
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8003CBB4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CBB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8003CBBC
  {uint32_t ea=c->r[31]+0x0000225Cu; WF32(ea,c->f[0]);} // 8003CBC0
  fcmp(c,0,c->f[0],c->f[1]); // 8003CBC4
  if (!crb(c,0)) { goto L_8003CBF8; } // 8003CBC8
  {uint32_t ea=c->r[31]+0x0000225Cu; WF32(ea,c->f[1]);} // 8003CBCC
  goto L_8003CBF8; // 8003CBD0
L_8003CBD4:;
  c->r[3]=0u+0x803D0000u; // 8003CBD4
  c->r[3]=c->r[3]+0x0000407Cu; // 8003CBD8
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 8003CBDC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CBE0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8003CBE4
  {uint32_t ea=c->r[31]+0x0000225Cu; WF32(ea,c->f[0]);} // 8003CBE8
  fcmp(c,0,c->f[0],c->f[1]); // 8003CBEC
  if (!crb(c,1)) { goto L_8003CBF8; } // 8003CBF0
  {uint32_t ea=c->r[31]+0x0000225Cu; WF32(ea,c->f[1]);} // 8003CBF4
L_8003CBF8:;
  c->r[0]=R32(c->r[31]+0x00002220u); // 8003CBF8
  cmps(c,0,(int32_t)c->r[0],0); // 8003CBFC
  if (crb(c,2)) { goto L_8003CC9C; } // 8003CC00
  {uint32_t ea=c->r[31]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CC04
  {uint32_t ea=c->r[31]+0x00002250u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CC08
  c->f[3]=std::fabs(c->f[0]); // 8003CC0C
  {uint32_t ea=c->r[31]+0x00002254u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CC10
  c->lr=0x8003CC18u; f_8005995C(c); // 8003CC14
  {uint32_t ea=c->r[31]+0x0000225Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CC18
  {uint32_t ea=c->r[2]+0xFFFF8610u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CC1C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 8003CC20
  c->f[3]=(c->f[3]>=0.0)?c->f[1]:c->f[2]; // 8003CC24
  c->f[31]=c->ps1[31]=S(c->f[3]*c->f[31]); // 8003CC28
  fcmp(c,0,c->f[31],c->f[0]); // 8003CC2C
  if (crb(c,2)) { goto L_8003CC7C; } // 8003CC30
  c->r[0]=R8(c->r[31]+0x00002260u); // 8003CC34
  cmps(c,0,(int32_t)c->r[0],0); // 8003CC38
  if (!crb(c,2)) { goto L_8003CC58; } // 8003CC3C
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003CC40
  c->r[5]=c->r[31]+0x00002244u; // 8003CC44
  c->r[4]=R32(c->r[31]+0x00002220u); // 8003CC48
  c->lr=0x8003CC50u; f_8006F7E8(c); // 8003CC4C
  c->r[0]=0u+0x00000001u; // 8003CC50
  W8(c->r[31]+0x00002260u,c->r[0]); // 8003CC54
L_8003CC58:;
  c->r[3]=c->r[31]+0x00002244u; // 8003CC58
  c->r[4]=c->r[1]+0x00000020u; // 8003CC5C
  c->r[5]=0u+0x00000000u; // 8003CC60
  c->r[6]=0u+0x00000000u; // 8003CC64
  c->lr=0x8003CC6Cu; f_80362AEC(c); // 8003CC68
  c->f[1]=c->f[31]; // 8003CC6C
  c->r[3]=c->r[31]+0x00002244u; // 8003CC70
  c->lr=0x8003CC78u; f_80362C80(c); // 8003CC74
  goto L_8003CC9C; // 8003CC78
L_8003CC7C:;
  c->r[0]=R8(c->r[31]+0x00002260u); // 8003CC7C
  cmps(c,0,(int32_t)c->r[0],0); // 8003CC80
  if (crb(c,2)) { goto L_8003CC9C; } // 8003CC84
  c->r[3]=c->r[31]+0x00002244u; // 8003CC88
  c->r[4]=0u+0x00000001u; // 8003CC8C
  c->lr=0x8003CC94u; f_80362B84(c); // 8003CC90
  c->r[0]=0u+0x00000000u; // 8003CC94
  W8(c->r[31]+0x00002260u,c->r[0]); // 8003CC98
L_8003CC9C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003CC9C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003CCA0
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003CCA4
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003CCA8
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003CCAC
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003CCB0
  c->r[31]=R32(c->r[10]+0xFFFFFFDCu); // 8003CCB4
  c->r[30]=R32(c->r[10]+0xFFFFFFD8u); // 8003CCB8
  c->lr=c->r[0]; // 8003CCBC
  c->r[1]=c->r[10]|c->r[10]; // 8003CCC0
  return; // 8003CCC4
}

// fn_8003CCC8
void f_8003CCC8(Ctx* __restrict c) {
  trace_call(0x8003CCC8u);
  c->r[4]=R32(c->r[3]+0x000021F0u); // 8003CCC8
  {uint32_t ea=c->r[3]+0x000021E0u; WF32(ea,c->f[1]);} // 8003CCCC
  cmps(c,0,(int32_t)c->r[4],0); // 8003CCD0
  if (crb(c,2)) { goto L_8003CCDC; } // 8003CCD4
  {uint32_t ea=c->r[4]+0x00002384u; WF32(ea,c->f[1]);} // 8003CCD8
L_8003CCDC:;
  c->r[3]=R32(c->r[3]+0x000021F8u); // 8003CCDC
  cmps(c,0,(int32_t)c->r[3],0); // 8003CCE0
  if (crb(c,2)) return; // 8003CCE4
  {uint32_t ea=c->r[3]+0x00002384u; WF32(ea,c->f[1]);} // 8003CCE8
  return; // 8003CCEC
}

// fn_8003CCF0
void f_8003CCF0(Ctx* __restrict c) {
  trace_call(0x8003CCF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CCF0
  c->r[0]=c->lr; // 8003CCF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CCF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CCFC
  c->r[31]=c->r[3]|c->r[3]; // 8003CD00
  c->lr=0x8003CD08u; f_8003AC28(c); // 8003CD04
  c->r[4]=0u+0x80370000u; // 8003CD08
  c->r[6]=0u+0x80040000u; // 8003CD0C
  c->r[4]=c->r[4]+0x00003B70u; // 8003CD10
  c->r[3]=c->r[31]|c->r[31]; // 8003CD14
  c->r[5]=c->r[4]+0x0000006Fu; // 8003CD18
  c->r[6]=c->r[6]+0xFFFFA984u; // 8003CD1C
  c->r[4]=0u+0x00000004u; // 8003CD20
  c->lr=0x8003CD28u; f_80337FC8(c); // 8003CD24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CD28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CD2C
  c->lr=c->r[0]; // 8003CD30
  c->r[1]=c->r[1]+0x00000010u; // 8003CD34
  return; // 8003CD38
}

// fn_8003CD3C
void f_8003CD3C(Ctx* __restrict c) {
  trace_call(0x8003CD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CD3C
  c->r[0]=c->lr; // 8003CD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CD48
  c->r[31]=c->r[3]|c->r[3]; // 8003CD4C
  c->lr=0x8003CD54u; f_8003AC5C(c); // 8003CD50
  c->r[5]=0u+0x80370000u; // 8003CD54
  c->r[3]=c->r[31]|c->r[31]; // 8003CD58
  c->r[5]=c->r[5]+0x00003B70u; // 8003CD5C
  c->r[4]=0u+0x00000004u; // 8003CD60
  c->r[5]=c->r[5]+0x0000006Fu; // 8003CD64
  c->lr=0x8003CD6Cu; f_803386E0(c); // 8003CD68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CD6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CD70
  c->lr=c->r[0]; // 8003CD74
  c->r[1]=c->r[1]+0x00000010u; // 8003CD78
  return; // 8003CD7C
}

// fn_8003CD80
void f_8003CD80(Ctx* __restrict c) {
  trace_call(0x8003CD80u);
  c->r[0]=0u+0x00000000u; // 8003CD80
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003CD84
  return; // 8003CD88
}

// fn_8003CD8C
void f_8003CD8C(Ctx* __restrict c) {
  trace_call(0x8003CD8Cu);
  c->r[0]=R32(c->r[2]+0xFFFFBF18u); // 8003CD8C
  c->r[4]=0u+0x80010000u; // 8003CD90
  c->r[5]=0u+0x803C0000u; // 8003CD94
  W32(c->r[13]+0xFFFF9510u,c->r[0]); // 8003CD98
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 8003CD9C
  c->r[3]=c->r[13]+0xFFFF9510u; // 8003CDA0
  c->r[5]=c->r[5]+0x00002DD8u; // 8003CDA4
  f_800C2A60(c); return; // 8003CDA8
}

// fn_8003CDAC
void f_8003CDAC(Ctx* __restrict c) {
  trace_call(0x8003CDACu);
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CDAC
  c->r[0]=0u+0x00000001u; // 8003CDB0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003CDB4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8003CDB8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003CDBC
  return; // 8003CDC0
}

// fn_8003CDC4
void f_8003CDC4(Ctx* __restrict c) {
  trace_call(0x8003CDC4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003CDC4
  c->r[5]=0u+0x803D0000u; // 8003CDC8
  c->r[5]=c->r[5]+0xFFFFF3C0u; // 8003CDCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8003CDD0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003CDD4
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8003CDD8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8003CDDC
  if (!crb(c,1)) { goto L_8003CDE8; } // 8003CDE0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8003CDE4
L_8003CDE8:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CDE8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003CDEC
  return; // 8003CDF0
}

// fn_8003CDF4
void f_8003CDF4(Ctx* __restrict c) {
  trace_call(0x8003CDF4u);
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003CDF4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CDF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003CDFC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8003CE00
  fcmp(c,0,c->f[1],c->f[0]); // 8003CE04
  if (!crb(c,1)) { goto L_8003CE14; } // 8003CE08
  c->r[0]=0u+0x00000000u; // 8003CE0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003CE10
L_8003CE14:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003CE14
  return; // 8003CE18
}

// fn_8003CE1C
void f_8003CE1C(Ctx* __restrict c) {
  trace_call(0x8003CE1Cu);
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CE1C
  c->r[0]=0u+0x00000000u; // 8003CE20
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CE24
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8003CE28
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8003CE2C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8003CE30
  W32(c->r[3]+0x00000020u,c->r[0]); // 8003CE34
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8003CE38
  W32(c->r[3]+0x00000034u,c->r[0]); // 8003CE3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003CE40
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003CE44
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8003CE48
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8003CE4C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 8003CE50
  W32(c->r[3]+0x00000024u,c->r[0]); // 8003CE54
  W32(c->r[3]+0x00000028u,c->r[0]); // 8003CE58
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8003CE5C
  W32(c->r[3]+0x00000030u,c->r[0]); // 8003CE60
  return; // 8003CE64
}

// fn_8003CE68
void f_8003CE68(Ctx* __restrict c) {
  trace_call(0x8003CE68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CE68
  c->r[0]=c->lr; // 8003CE6C
  cmps(c,0,(int32_t)c->r[3],0); // 8003CE70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CE74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CE78
  c->r[31]=c->r[4]|c->r[4]; // 8003CE7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003CE80
  c->r[30]=c->r[3]|c->r[3]; // 8003CE84
  if (crb(c,2)) { goto L_8003CF44; } // 8003CE88
  c->lr=0x8003CE90u; f_8003D018(c); // 8003CE8C
  cmps(c,0,(int32_t)c->r[31],0); // 8003CE90
  if (!crb(c,1)) { goto L_8003CF44; } // 8003CE94
  c->lr=0x8003CE9Cu; f_8028B53C(c); // 8003CE98
  c->r[31]=0u+0x804B0000u; // 8003CE9C
  c->r[31]=c->r[31]+0xFFFFC800u; // 8003CEA0
  c->r[3]=c->r[31]|c->r[31]; // 8003CEA4
  c->lr=0x8003CEACu; f_8024B0E0(c); // 8003CEA8
  cmps(c,0,(int32_t)c->r[30],0); // 8003CEAC
  if (!crb(c,2)) { goto L_8003CEC0; } // 8003CEB0
  c->r[3]=c->r[31]|c->r[31]; // 8003CEB4
  c->lr=0x8003CEBCu; f_8024B1C0(c); // 8003CEB8
  goto L_8003CF44; // 8003CEBC
L_8003CEC0:;
  c->r[0]=0u+0x80000000u; // 8003CEC0
  cmpu(c,0,c->r[30],c->r[0]); // 8003CEC4
  if (crb(c,0)) { goto L_8003CEE4; } // 8003CEC8
  c->r[3]=0u+0x81800000u; // 8003CECC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003CED0
  cmpu(c,0,c->r[30],c->r[0]); // 8003CED4
  if (!crb(c,0)) { goto L_8003CEE4; } // 8003CED8
  c->r[4]=0u+0x00000000u; // 8003CEDC
  goto L_8003CF24; // 8003CEE0
L_8003CEE4:;
  c->r[0]=0u+0x90000000u; // 8003CEE4
  cmpu(c,0,c->r[30],c->r[0]); // 8003CEE8
  if (crb(c,0)) { goto L_8003CF04; } // 8003CEEC
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003CEF0
  cmpu(c,0,c->r[30],c->r[0]); // 8003CEF4
  if (!crb(c,0)) { goto L_8003CF04; } // 8003CEF8
  c->r[4]=0u+0x00000001u; // 8003CEFC
  goto L_8003CF24; // 8003CF00
L_8003CF04:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003CF04
  cmpu(c,0,c->r[30],c->r[0]); // 8003CF08
  if (crb(c,0)) { goto L_8003CF24; } // 8003CF0C
  c->r[3]=0u+0x98000000u; // 8003CF10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003CF14
  cmpu(c,0,c->r[30],c->r[0]); // 8003CF18
  if (!crb(c,0)) { goto L_8003CF24; } // 8003CF1C
  c->r[4]=0u+0x00000002u; // 8003CF20
L_8003CF24:;
  c->r[3]=0u+0x804B0000u; // 8003CF24
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003CF28
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8003CF2C
  c->r[4]=c->r[30]|c->r[30]; // 8003CF30
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003CF34
  c->lr=0x8003CF3Cu; f_8023B550(c); // 8003CF38
  c->r[3]=c->r[31]|c->r[31]; // 8003CF3C
  c->lr=0x8003CF44u; f_8024B1C0(c); // 8003CF40
L_8003CF44:;
  c->r[3]=c->r[30]|c->r[30]; // 8003CF44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CF48
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003CF4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CF50
  c->lr=c->r[0]; // 8003CF54
  c->r[1]=c->r[1]+0x00000010u; // 8003CF58
  return; // 8003CF5C
}

// fn_8003CF60
void f_8003CF60(Ctx* __restrict c) {
  trace_call(0x8003CF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CF60
  c->r[0]=c->lr; // 8003CF64
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003CF68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003CF6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003CF70
  c->r[30]=0u+0x00000000u; // 8003CF74
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003CF78
  c->r[29]=c->r[3]|c->r[3]; // 8003CF7C
  c->r[31]=c->r[29]|c->r[29]; // 8003CF80
L_8003CF84:;
  c->r[4]=R32(c->r[13]+0xFFFF9468u); // 8003CF84
  c->r[3]=0u+0x00000054u; // 8003CF88
  c->lr=0x8003CF90u; f_8036AB9C(c); // 8003CF8C
  cmps(c,0,(int32_t)c->r[3],0); // 8003CF90
  if (crb(c,2)) { goto L_8003CF9C; } // 8003CF94
  c->lr=0x8003CF9Cu; f_8003E73C(c); // 8003CF98
L_8003CF9C:;
  c->r[30]=c->r[30]+0x00000001u; // 8003CF9C
  W32(c->r[31]+0x00000024u,c->r[3]); // 8003CFA0
  cmpu(c,0,c->r[30],0x00000004u); // 8003CFA4
  c->r[31]=c->r[31]+0x00000004u; // 8003CFA8
  if (crb(c,0)) { IRQCHK(c); goto L_8003CF84; } // 8003CFAC
  c->r[3]=R32(c->r[29]+0x00000020u); // 8003CFB0
  cmps(c,0,(int32_t)c->r[3],0); // 8003CFB4
  if (crb(c,2)) { goto L_8003CFF4; } // 8003CFB8
  c->r[12]=R32(c->r[3]+0x00000014u); // 8003CFBC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8003CFC0
  c->ctr=c->r[12]; // 8003CFC4
  if (true) { c->lr=0x8003CFCCu; dispatch(c,c->ctr); } // 8003CFC8
  c->r[3]=0u+0x803D0000u; // 8003CFCC
  c->r[3]=c->r[3]+0x0000407Cu; // 8003CFD0
  c->lr=0x8003CFD8u; f_800B7578(c); // 8003CFD4
  cmps(c,0,(int32_t)c->r[3],5); // 8003CFD8
  if (!crb(c,2)) { goto L_8003CFF4; } // 8003CFDC
  c->r[4]=0u+0x803D0000u; // 8003CFE0
  c->r[3]=0u+0x803C0000u; // 8003CFE4
  {uint32_t ea=c->r[4]+0xFFFFF3C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CFE8
  c->r[3]=c->r[3]+0x00002300u; // 8003CFEC
  c->lr=0x8003CFF4u; f_8003D4C8(c); // 8003CFF0
L_8003CFF4:;
  c->r[3]=c->r[29]|c->r[29]; // 8003CFF4
  c->lr=0x8003CFFCu; f_8003D0E8(c); // 8003CFF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003CFFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003D000
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003D004
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003D008
  c->lr=c->r[0]; // 8003D00C
  c->r[1]=c->r[1]+0x00000020u; // 8003D010
  return; // 8003D014
}

// fn_8003D018
void f_8003D018(Ctx* __restrict c) {
  trace_call(0x8003D018u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D018
  c->r[0]=c->lr; // 8003D01C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D020
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003D024
  c->r[31]=0u+0x00000000u; // 8003D028
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003D02C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003D030
  c->r[29]=0u+0x00000000u; // 8003D034
  W32(c->r[1]+0x00000010u,c->r[28]); // 8003D038
  c->r[28]=c->r[3]|c->r[3]; // 8003D03C
  c->r[30]=c->r[28]|c->r[28]; // 8003D040
L_8003D044:;
  c->r[4]=R32(c->r[30]+0x00000024u); // 8003D044
  cmps(c,0,(int32_t)c->r[4],0); // 8003D048
  if (crb(c,2)) { goto L_8003D05C; } // 8003D04C
  c->r[3]=R32(c->r[13]+0xFFFF9468u); // 8003D050
  c->lr=0x8003D058u; f_8003D09C(c); // 8003D054
  W32(c->r[30]+0x00000024u,c->r[31]); // 8003D058
L_8003D05C:;
  c->r[29]=c->r[29]+0x00000001u; // 8003D05C
  c->r[30]=c->r[30]+0x00000004u; // 8003D060
  cmpu(c,0,c->r[29],0x00000004u); // 8003D064
  if (crb(c,0)) { IRQCHK(c); goto L_8003D044; } // 8003D068
  c->r[0]=0u+0x00000000u; // 8003D06C
  W32(c->r[28]+0x00000034u,c->r[0]); // 8003D070
  W32(c->r[28]+0x00000020u,c->r[0]); // 8003D074
  W32(c->r[28]+0x00000000u,c->r[0]); // 8003D078
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003D07C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003D080
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003D084
  c->r[28]=R32(c->r[1]+0x00000010u); // 8003D088
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D08C
  c->lr=c->r[0]; // 8003D090
  c->r[1]=c->r[1]+0x00000020u; // 8003D094
  return; // 8003D098
}

// fn_8003D09C
void f_8003D09C(Ctx* __restrict c) {
  trace_call(0x8003D09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D09C
  c->r[0]=c->lr; // 8003D0A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D0A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D0A8
  c->r[31]=c->r[4]|c->r[4]; // 8003D0AC
  c->r[4]=0u+0xFFFFFFFFu; // 8003D0B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003D0B4
  c->r[30]=c->r[3]|c->r[3]; // 8003D0B8
  c->r[3]=c->r[31]|c->r[31]; // 8003D0BC
  c->lr=0x8003D0C4u; f_8003E768(c); // 8003D0C0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8003D0C4
  c->r[4]=c->r[31]|c->r[31]; // 8003D0C8
  c->lr=0x8003D0D0u; f_802A8B4C(c); // 8003D0CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D0D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D0D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003D0D8
  c->lr=c->r[0]; // 8003D0DC
  c->r[1]=c->r[1]+0x00000010u; // 8003D0E0
  return; // 8003D0E4
}

// fn_8003D0E8
void f_8003D0E8(Ctx* __restrict c) {
  trace_call(0x8003D0E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D0E8
  c->r[0]=c->lr; // 8003D0EC
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D0F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D0F4
  c->r[0]=0u+0x00000000u; // 8003D0F8
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D0FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003D100
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003D104
  c->r[30]=0u+0x00000000u; // 8003D108
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003D10C
  c->r[29]=c->r[3]|c->r[3]; // 8003D110
  c->r[31]=c->r[29]|c->r[29]; // 8003D114
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8003D118
  W32(c->r[3]+0x00000034u,c->r[0]); // 8003D11C
  W32(c->r[3]+0x00000068u,c->r[0]); // 8003D120
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8003D124
  W32(c->r[3]+0x00000064u,c->r[0]); // 8003D128
  W32(c->r[3]+0x00000088u,c->r[0]); // 8003D12C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8003D130
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8003D134
L_8003D138:;
  cmps(c,0,(int32_t)c->r[30],-1); // 8003D138
  if (!crb(c,2)) { goto L_8003D148; } // 8003D13C
  c->r[3]=0u+0x00000000u; // 8003D140
  goto L_8003D14C; // 8003D144
L_8003D148:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8003D148
L_8003D14C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003D14C
  if (crb(c,2)) { goto L_8003D174; } // 8003D150
  c->r[0]=R32(c->r[3]+0x00000008u); // 8003D154
  cmps(c,0,(int32_t)c->r[0],0); // 8003D158
  if (crb(c,2)) { goto L_8003D174; } // 8003D15C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8003D160
  cmps(c,0,(int32_t)c->r[0],0); // 8003D164
  if (crb(c,2)) { goto L_8003D174; } // 8003D168
  c->r[4]=0u+0x00000000u; // 8003D16C
  c->lr=0x8003D174u; f_8003E9A4(c); // 8003D170
L_8003D174:;
  c->r[30]=c->r[30]+0x00000001u; // 8003D174
  c->r[31]=c->r[31]+0x00000004u; // 8003D178
  cmps(c,0,(int32_t)c->r[30],4); // 8003D17C
  if (crb(c,0)) { IRQCHK(c); goto L_8003D138; } // 8003D180
  c->r[3]=0u+0x803D0000u; // 8003D184
  c->r[0]=R32(c->r[3]+0x00000280u); // 8003D188
  cmps(c,0,(int32_t)c->r[0],0); // 8003D18C
  if (!crb(c,2)) { goto L_8003D1C4; } // 8003D190
  c->r[3]=R32(c->r[29]+0x00000024u); // 8003D194
  c->r[4]=0u+0x00000000u; // 8003D198
  c->lr=0x8003D1A0u; f_8003E8D8(c); // 8003D19C
  c->r[3]=R32(c->r[29]+0x00000028u); // 8003D1A0
  c->r[4]=0u+0x00000001u; // 8003D1A4
  c->lr=0x8003D1ACu; f_8003E8D8(c); // 8003D1A8
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8003D1AC
  c->r[4]=0u+0x00000002u; // 8003D1B0
  c->lr=0x8003D1B8u; f_8003E8D8(c); // 8003D1B4
  c->r[3]=R32(c->r[29]+0x00000030u); // 8003D1B8
  c->r[4]=0u+0x00000003u; // 8003D1BC
  c->lr=0x8003D1C4u; f_8003E8D8(c); // 8003D1C0
L_8003D1C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003D1C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003D1CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003D1D0
  c->lr=c->r[0]; // 8003D1D4
  c->r[1]=c->r[1]+0x00000020u; // 8003D1D8
  return; // 8003D1DC
}

// fn_8003D1E0
void f_8003D1E0(Ctx* __restrict c) {
  trace_call(0x8003D1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D1E0
  c->r[0]=c->lr; // 8003D1E4
  c->r[8]=c->r[4]|c->r[4]; // 8003D1E8
  c->r[6]=c->r[5]|c->r[5]; // 8003D1EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D1F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D1F4
  c->r[31]=c->r[3]|c->r[3]; // 8003D1F8
  c->r[7]=R32(c->r[3]+0x00000034u); // 8003D1FC
  cmps(c,0,(int32_t)c->r[7],-1); // 8003D200
  if (!crb(c,2)) { goto L_8003D210; } // 8003D204
  c->r[3]=0u+0x00000000u; // 8003D208
  goto L_8003D21C; // 8003D20C
L_8003D210:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8003D210
  c->r[3]=c->r[3]+c->r[0]; // 8003D214
  c->r[3]=R32(c->r[3]+0x00000024u); // 8003D218
L_8003D21C:;
  c->r[4]=c->r[7]|c->r[7]; // 8003D21C
  c->r[5]=c->r[8]|c->r[8]; // 8003D220
  c->lr=0x8003D228u; f_8003E858(c); // 8003D224
  c->r[3]=R32(c->r[31]+0x00000034u); // 8003D228
  c->r[0]=c->r[3]+0x00000001u; // 8003D22C
  W32(c->r[31]+0x00000034u,c->r[0]); // 8003D230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D234
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D238
  c->lr=c->r[0]; // 8003D23C
  c->r[1]=c->r[1]+0x00000010u; // 8003D240
  return; // 8003D244
}

// fn_8003D248
void f_8003D248(Ctx* __restrict c) {
  trace_call(0x8003D248u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D248
  c->r[0]=c->lr; // 8003D24C
  cmps(c,0,(int32_t)c->r[4],-1); // 8003D250
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D258
  if (!crb(c,2)) { goto L_8003D268; } // 8003D25C
  c->r[6]=0u+0x00000000u; // 8003D260
  goto L_8003D274; // 8003D264
L_8003D268:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003D268
  c->r[4]=c->r[3]+c->r[0]; // 8003D26C
  c->r[6]=R32(c->r[4]+0x00000024u); // 8003D270
L_8003D274:;
  c->r[7]=0u+0x00000000u; // 8003D274
  c->r[4]=0u+0x00000001u; // 8003D278
  goto L_8003D284; // 8003D27C
  goto L_8003D288; // 8003D280
L_8003D284:;
  c->r[5]=R32(c->r[3]+0x00000024u); // 8003D284
L_8003D288:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 8003D288
  c->r[0]=c->r[5]+0x00010000u; // 8003D28C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8003D290
  if (crb(c,2)) { goto L_8003D2A4; } // 8003D294
  c->r[7]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8003D298
  goto L_8003D2A4; // 8003D29C
  goto L_8003D2A8; // 8003D2A0
L_8003D2A4:;
  c->r[5]=R32(c->r[3]+0x00000028u); // 8003D2A4
L_8003D2A8:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 8003D2A8
  c->r[0]=c->r[5]+0x00010000u; // 8003D2AC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8003D2B0
  if (crb(c,2)) { goto L_8003D2C8; } // 8003D2B4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8003D2B8
  c->r[7]=c->r[7]|c->r[0]; // 8003D2BC
  goto L_8003D2C8; // 8003D2C0
  goto L_8003D2CC; // 8003D2C4
L_8003D2C8:;
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8003D2C8
L_8003D2CC:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 8003D2CC
  c->r[0]=c->r[5]+0x00010000u; // 8003D2D0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8003D2D4
  if (crb(c,2)) { goto L_8003D2EC; } // 8003D2D8
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8003D2DC
  c->r[7]=c->r[7]|c->r[0]; // 8003D2E0
  goto L_8003D2EC; // 8003D2E4
  goto L_8003D2F0; // 8003D2E8
L_8003D2EC:;
  c->r[5]=R32(c->r[3]+0x00000030u); // 8003D2EC
L_8003D2F0:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 8003D2F0
  c->r[0]=c->r[5]+0x00010000u; // 8003D2F4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8003D2F8
  if (crb(c,2)) { goto L_8003D308; } // 8003D2FC
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8003D300
  c->r[7]=c->r[7]|c->r[0]; // 8003D304
L_8003D308:;
  c->r[31]=0u+0x00000000u; // 8003D308
  c->r[3]=0u+0x00000001u; // 8003D30C
  goto L_8003D318; // 8003D310
L_8003D314:;
  c->r[31]=c->r[31]+0x00000001u; // 8003D314
L_8003D318:;
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[3]<<((c->r[31])&31)); // 8003D318
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 8003D31C
  if (!crb(c,2)) { IRQCHK(c); goto L_8003D314; } // 8003D320
  c->r[3]=c->r[6]|c->r[6]; // 8003D324
  c->r[4]=c->r[31]|c->r[31]; // 8003D328
  c->lr=0x8003D330u; f_8003E8D8(c); // 8003D32C
  c->r[3]=c->r[31]|c->r[31]; // 8003D330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D334
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D338
  c->lr=c->r[0]; // 8003D33C
  c->r[1]=c->r[1]+0x00000010u; // 8003D340
  return; // 8003D344
}

// fn_8003D348
void f_8003D348(Ctx* __restrict c) {
  trace_call(0x8003D348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D348
  c->r[0]=c->lr; // 8003D34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D354
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003D358
  c->r[30]=c->r[3]|c->r[3]; // 8003D35C
  c->lr=0x8003D364u; f_8003D4DC(c); // 8003D360
  c->r[31]=0u+0x00000000u; // 8003D364
L_8003D368:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 8003D368
  c->lr=0x8003D370u; f_8003EA2C(c); // 8003D36C
  c->r[31]=c->r[31]+0x00000001u; // 8003D370
  c->r[30]=c->r[30]+0x00000004u; // 8003D374
  cmpu(c,0,c->r[31],0x00000004u); // 8003D378
  if (crb(c,0)) { IRQCHK(c); goto L_8003D368; } // 8003D37C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D384
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003D388
  c->lr=c->r[0]; // 8003D38C
  c->r[1]=c->r[1]+0x00000010u; // 8003D390
  return; // 8003D394
}

// fn_8003D398
void f_8003D398(Ctx* __restrict c) {
  trace_call(0x8003D398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D398
  c->r[0]=c->lr; // 8003D39C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D3A0
  c->r[4]=R32(c->r[3]+0x00000020u); // 8003D3A4
  cmps(c,0,(int32_t)c->r[4],0); // 8003D3A8
  if (crb(c,2)) { goto L_8003D3B8; } // 8003D3AC
  c->r[3]=c->r[4]+0x00002190u; // 8003D3B0
  goto L_8003D3E4; // 8003D3B4
L_8003D3B8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003D3B8
  cmps(c,0,(int32_t)c->r[0],0); // 8003D3BC
  if (crb(c,2)) { goto L_8003D3D8; } // 8003D3C0
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003D3C4
  c->r[4]=0u+0x00000010u; // 8003D3C8
  c->lr=0x8003D3D0u; f_80030F34(c); // 8003D3CC
  c->r[3]=c->r[3]+0x00000020u; // 8003D3D0
  goto L_8003D3E4; // 8003D3D4
L_8003D3D8:;
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003D3D8
  c->lr=0x8003D3E0u; f_80031ECC(c); // 8003D3DC
  c->r[3]=c->r[3]+0x00000020u; // 8003D3E0
L_8003D3E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D3E4
  c->lr=c->r[0]; // 8003D3E8
  c->r[1]=c->r[1]+0x00000010u; // 8003D3EC
  return; // 8003D3F0
}

// fn_8003D3F4
void f_8003D3F4(Ctx* __restrict c) {
  trace_call(0x8003D3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D3F4
  c->r[0]=c->lr; // 8003D3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D3FC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003D400
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8003D404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D408
  c->r[4]=R32(c->r[3]+0x00000020u); // 8003D40C
  cmps(c,0,(int32_t)c->r[4],0); // 8003D410
  if (crb(c,2)) { goto L_8003D434; } // 8003D414
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003D418
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 8003D41C
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[1]; // 8003D420
  {uint32_t ea=c->r[4]+0x000021D0u; WF32(ea,c->f[0]);} // 8003D424
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003D428
  {uint32_t ea=c->r[3]+0x000021D4u; WF32(ea,c->f[2]);} // 8003D42C
  goto L_8003D4AC; // 8003D430
L_8003D434:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003D434
  cmps(c,0,(int32_t)c->r[4],0); // 8003D438
  if (crb(c,2)) { goto L_8003D4AC; } // 8003D43C
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D440
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003D444
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8003D448
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8003D44C
  fcmp(c,0,c->f[0],c->f[2]); // 8003D450
  c->f[4]=(c->f[4]>=0.0)?c->f[1]:c->f[0]; // 8003D454
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 8003D458
  c->f[0]=(c->f[0]>=0.0)?c->f[3]:c->f[4]; // 8003D45C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8003D460
  if (!crb(c,2)) { goto L_8003D494; } // 8003D464
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003D468
  c->f[31]=c->ps1[31]=S(c->f[0]); // 8003D46C
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003D470
  c->lr=0x8003D478u; f_800800B0(c); // 8003D474
  c->r[31]=c->r[3]|c->r[3]; // 8003D478
  c->lr=0x8003D480u; f_800825E4(c); // 8003D47C
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003D480
  cmps(c,0,(int32_t)c->r[3],0); // 8003D484
  if (crb(c,2)) { goto L_8003D4AC; } // 8003D488
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[31]);} // 8003D48C
  goto L_8003D4AC; // 8003D490
L_8003D494:;
  c->f[3]=c->ps1[3]=S(c->f[0]); // 8003D494
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D498
  c->f[0]=c->ps1[0]=S(c->f[2]); // 8003D49C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8003D4A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8003D4A4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8003D4A8
L_8003D4AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D4AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003D4B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003D4B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D4B8
  c->lr=c->r[0]; // 8003D4BC
  c->r[1]=c->r[1]+0x00000020u; // 8003D4C0
  return; // 8003D4C4
}

// fn_8003D4C8
void f_8003D4C8(Ctx* __restrict c) {
  trace_call(0x8003D4C8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003D4C8
  cmps(c,0,(int32_t)c->r[3],0); // 8003D4CC
  if (crb(c,2)) return; // 8003D4D0
  f_8003CCC8(c); return; // 8003D4D4
}

// fn_8003D4D8
void f_8003D4D8(Ctx* __restrict c) {
  trace_call(0x8003D4D8u);
  return; // 8003D4D8
}

// fn_8003D4DC
void f_8003D4DC(Ctx* __restrict c) {
  trace_call(0x8003D4DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D4DC
  c->r[0]=c->lr; // 8003D4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D4E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003D4EC
  c->r[30]=c->r[3]|c->r[3]; // 8003D4F0
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003D4F4
  cmps(c,0,(int32_t)c->r[4],0); // 8003D4F8
  if (crb(c,2)) { goto L_8003D57C; } // 8003D4FC
  c->r[3]=0u+0x803D0000u; // 8003D500
  c->r[0]=R32(c->r[3]+0x00000280u); // 8003D504
  cmps(c,0,(int32_t)c->r[0],0); // 8003D508
  if (crb(c,2)) { goto L_8003D56C; } // 8003D50C
  c->r[31]=c->r[3]+0x00000280u; // 8003D510
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003D514
  cmps(c,0,(int32_t)c->r[0],1); // 8003D518
  if (crb(c,2)) { goto L_8003D56C; } // 8003D51C
  cmps(c,0,(int32_t)c->r[0],2); // 8003D520
  if (crb(c,2)) { goto L_8003D56C; } // 8003D524
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003D528
  c->lr=0x8003D530u; f_800800B0(c); // 8003D52C
  c->r[4]=0u+0x00000000u; // 8003D530
  c->lr=0x8003D538u; f_80083040(c); // 8003D534
  cmps(c,0,(int32_t)c->r[3],0); // 8003D538
  if (crb(c,2)) { goto L_8003D56C; } // 8003D53C
  c->r[3]=c->r[31]|c->r[31]; // 8003D540
  c->lr=0x8003D548u; f_8009C0D0(c); // 8003D544
  cmps(c,0,(int32_t)c->r[3],0); // 8003D548
  if (!crb(c,2)) { goto L_8003D56C; } // 8003D54C
  c->r[0]=0u+0x00000000u; // 8003D550
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8003D554
  c->r[3]=c->r[30]|c->r[30]; // 8003D558
  c->lr=0x8003D560u; f_8003E47C(c); // 8003D55C
  c->r[3]=0u+0x803D0000u; // 8003D560
  c->r[3]=c->r[3]+0x0000407Cu; // 8003D564
  c->lr=0x8003D56Cu; f_800B6C2C(c); // 8003D568
L_8003D56C:;
  c->r[3]=c->r[30]|c->r[30]; // 8003D56C
  c->lr=0x8003D574u; f_8003D594(c); // 8003D570
  c->r[3]=c->r[30]|c->r[30]; // 8003D574
  c->lr=0x8003D57Cu; f_8003D650(c); // 8003D578
L_8003D57C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D580
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003D584
  c->lr=c->r[0]; // 8003D588
  c->r[1]=c->r[1]+0x00000010u; // 8003D58C
  return; // 8003D590
}

// fn_8003D594
void f_8003D594(Ctx* __restrict c) {
  trace_call(0x8003D594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D594
  c->r[0]=c->lr; // 8003D598
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D59C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003D5A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8003D5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D5A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003D5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8003D5B0
  if (crb(c,2)) { goto L_8003D634; } // 8003D5B4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D5B8
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D5BC
  fcmp(c,0,c->f[1],c->f[0]); // 8003D5C0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8003D5C4
  if (!crb(c,2)) { goto L_8003D5D0; } // 8003D5C8
  goto L_8003D634; // 8003D5CC
L_8003D5D0:;
  c->r[4]=0u+0x803D0000u; // 8003D5D0
  c->r[4]=c->r[4]+0x0000407Cu; // 8003D5D4
  c->r[4]=R32(c->r[4]+0x00000004u); // 8003D5D8
  c->r[4]=R32(c->r[4]+0x00000004u); // 8003D5DC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003D5E0
  fcmp(c,0,c->f[3],c->f[1]); // 8003D5E4
  if (!crb(c,1)) { goto L_8003D5F0; } // 8003D5E8
  c->f[3]=c->f[1]; // 8003D5EC
L_8003D5F0:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D5F0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D5F4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 8003D5F8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D5FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8003D600
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003D604
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[2]); // 8003D608
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8003D60C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 8003D610
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003D614
  c->lr=0x8003D61Cu; f_800800B0(c); // 8003D618
  c->r[31]=c->r[3]|c->r[3]; // 8003D61C
  c->lr=0x8003D624u; f_800825E4(c); // 8003D620
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003D624
  cmps(c,0,(int32_t)c->r[3],0); // 8003D628
  if (crb(c,2)) { goto L_8003D634; } // 8003D62C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[31]);} // 8003D630
L_8003D634:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D634
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003D638
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003D63C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D640
  c->lr=c->r[0]; // 8003D644
  c->r[1]=c->r[1]+0x00000020u; // 8003D648
  return; // 8003D64C
}

// fn_8003D650
void f_8003D650(Ctx* __restrict c) {
  trace_call(0x8003D650u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003D650
  c->r[12]=c->r[1]|c->r[1]; // 8003D654
  c->r[11]=addc(c,~c->r[11],0xFFFFFF50u,1); // 8003D658
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D65C
  c->r[0]=c->lr; // 8003D660
  c->r[4]=0u+0x00000000u; // 8003D664
  c->r[6]=0u+0x00000002u; // 8003D668
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003D66C
  c->r[5]=c->r[13]+0xFFFFA3B8u; // 8003D670
  c->r[0]=0u+0x0000000Au; // 8003D674
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003D678
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003D67C
  {uint32_t ea=c->r[2]+0xFFFF8658u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003D680
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 8003D684
  c->r[31]=c->r[3]|c->r[3]; // 8003D688
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 8003D68C
  W32(c->r[12]+0xFFFFFFE4u,c->r[29]); // 8003D690
  W32(c->r[12]+0xFFFFFFE0u,c->r[28]); // 8003D694
  W32(c->r[1]+0x00000010u,c->r[6]); // 8003D698
  W32(c->r[1]+0x00000080u,c->r[5]); // 8003D69C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8003D6A0
  W32(c->r[1]+0x00000070u,c->r[4]); // 8003D6A4
  W32(c->r[1]+0x00000074u,c->r[4]); // 8003D6A8
  W32(c->r[1]+0x00000078u,c->r[4]); // 8003D6AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003D6B0
  cmps(c,1,(int32_t)c->r[0],0); // 8003D6B4
  if (!crb(c,6)) { goto L_8003D6F8; } // 8003D6B8
  c->r[0]=addc(c,c->r[1],0x00000070u,0); cr0(c,c->r[0]); // 8003D6BC
  if (crb(c,2)) { goto L_8003D988; } // 8003D6C0
  cmps(c,1,(int32_t)c->r[4],0); // 8003D6C4
  if (crb(c,6)) { goto L_8003D6E4; } // 8003D6C8
  c->r[12]=R32(c->r[5]+0x00000000u); // 8003D6CC
  c->r[3]=c->r[5]|c->r[5]; // 8003D6D0
  c->r[4]=0u+0x00000000u; // 8003D6D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003D6D8
  c->ctr=c->r[12]; // 8003D6DC
  if (true) { c->lr=0x8003D6E4u; dispatch(c,c->ctr); } // 8003D6E0
L_8003D6E4:;
  c->r[0]=0u+0x00000000u; // 8003D6E4
  W32(c->r[1]+0x00000070u,c->r[0]); // 8003D6E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8003D6EC
  W32(c->r[1]+0x00000078u,c->r[0]); // 8003D6F0
  goto L_8003D988; // 8003D6F4
L_8003D6F8:;
  c->lr=0x8003D6FCu; f_8003D398(c); // 8003D6F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003D6FC
  c->r[4]=c->r[1]+0x00000030u; // 8003D700
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003D704
  c->r[3]=c->r[31]|c->r[31]; // 8003D708
  {uint32_t ea=c->r[31]+0x00000050u; psq_load(c,2,ea,0,0);} // 8003D70C
  {uint32_t ea=c->r[31]+0x00000058u; psq_load(c,3,ea,1,0);} // 8003D710
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8003D714
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8003D718
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003D71C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 8003D720
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003D724
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D728
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D72C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8003D730
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8003D734
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8003D738
  c->lr=0x8003D740u; f_8003D398(c); // 8003D73C
  c->r[4]=c->r[1]+0x00000060u; // 8003D740
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D744
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003D748
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8003D74C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003D750
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003D754
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D758
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8003D75C
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[5]=t0; c->ps1[5]=t1;} // 8003D760
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003D764
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D768
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[3]); // 8003D76C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8003D770
  {double t0=S(c->f[5]+c->ps1[1]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 8003D774
  fcmp(c,0,c->f[5],c->f[2]); // 8003D778
  if (crb(c,2)) { goto L_8003D79C; } // 8003D77C
  c->f[0]=frsqrte(c->f[5]); // 8003D780
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003D784
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8003D788
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8003D78C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[5],-c->f[2])); // 8003D790
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003D794
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 8003D798
L_8003D79C:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D79C
  c->r[3]=0u+0x803D0000u; // 8003D7A0
  c->r[0]=0u+0x43300000u; // 8003D7A4
  W32(c->r[1]+0x00000088u,c->r[0]); // 8003D7A8
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[5]); // 8003D7AC
  c->r[3]=c->r[3]+0x0000407Cu; // 8003D7B0
  {uint32_t ea=c->r[2]+0xFFFF8668u; c->f[3]=RF64(ea);} // 8003D7B4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[4]);} // 8003D7B8
  {uint32_t ea=c->r[13]+0xFFFF8090u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003D7BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8003D7C0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8003D7C4
  {uint32_t ea=c->r[13]+0xFFFF8098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D7C8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=RF64(ea);} // 8003D7CC
  {uint32_t ea=c->r[13]+0xFFFF8094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D7D0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8003D7D4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 8003D7D8
  c->f[3]=c->ps1[3]=S(c->f[6]-c->f[2]); // 8003D7DC
  c->f[3]=(c->f[3]>=0.0)?c->f[2]:c->f[6]; // 8003D7E0
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[6]); // 8003D7E4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003D7E8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8003D7EC
  fcmp(c,1,c->f[4],c->f[0]); // 8003D7F0
  if (!crb(c,5)) { goto L_8003D950; } // 8003D7F4
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003D7F8
  c->r[0]=0u+0xFFFFFFFFu; // 8003D7FC
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 8003D800
  c->r[4]=c->r[31]+0x00000050u; // 8003D804
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D808
  c->r[7]=c->r[1]+0x00000050u; // 8003D80C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003D810
  c->r[5]=c->r[1]+0x00000020u; // 8003D814
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003D818
  c->f[1]=c->f[31]; // 8003D81C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 8003D820
  c->r[6]=c->r[1]+0x00000010u; // 8003D824
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003D828
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8003D82C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8003D830
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8003D834
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 8003D838
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003D83C
  c->r[7]=c->r[1]+0x00000070u; // 8003D840
  {double t0=S(c->f[2]-c->f[4]), t1=S(c->ps1[2]-c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 8003D844
  {double t0=S(c->f[3]-c->f[0]), t1=S(c->ps1[3]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003D848
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,1,0);} // 8003D84C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003D850
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003D854
  c->lr=0x8003D85Cu; f_80301E34(c); // 8003D858
  cmps(c,1,(int32_t)c->r[3],0); // 8003D85C
  if (!crb(c,6)) { goto L_8003D8A0; } // 8003D860
  c->r[0]=addc(c,c->r[1],0x00000070u,0); cr0(c,c->r[0]); // 8003D864
  if (crb(c,2)) { goto L_8003D988; } // 8003D868
  c->r[4]=R32(c->r[1]+0x00000070u); // 8003D86C
  cmps(c,1,(int32_t)c->r[4],0); // 8003D870
  if (crb(c,6)) { goto L_8003D88C; } // 8003D874
  c->r[3]=R32(c->r[1]+0x00000080u); // 8003D878
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003D87C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003D880
  c->ctr=c->r[12]; // 8003D884
  if (true) { c->lr=0x8003D88Cu; dispatch(c,c->ctr); } // 8003D888
L_8003D88C:;
  c->r[0]=0u+0x00000000u; // 8003D88C
  W32(c->r[1]+0x00000070u,c->r[0]); // 8003D890
  W32(c->r[1]+0x00000074u,c->r[0]); // 8003D894
  W32(c->r[1]+0x00000078u,c->r[0]); // 8003D898
  goto L_8003D988; // 8003D89C
L_8003D8A0:;
  c->r[4]=R32(c->r[1]+0x00000070u); // 8003D8A0
  c->r[3]=0u+0xAAAB0000u; // 8003D8A4
  c->r[30]=c->r[3]+0xFFFFAAABu; // 8003D8A8
  c->r[29]=0u+0x803C0000u; // 8003D8AC
  c->r[3]=R32(c->r[4]+0x00000030u); // 8003D8B0
  c->r[3]=R32(c->r[3]+0x00000068u); // 8003D8B4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8003D8B8
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8003D8BC
  c->r[28]=c->r[0]^0x00000001u; // 8003D8C0
L_8003D8C4:;
  c->r[3]=c->r[29]+0x00002F9Cu; // 8003D8C4
  c->lr=0x8003D8CCu; f_8004F85C(c); // 8003D8C8
  c->r[4]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[3])>>32); // 8003D8CC
  c->r[0]=R32(c->r[31]+0x00000048u); // 8003D8D0
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8003D8D4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)6); // 8003D8D8
  c->r[4]=c->r[3]-c->r[4]; // 8003D8DC
  cmpu(c,1,c->r[4],c->r[0]); // 8003D8E0
  if (crb(c,6)) { IRQCHK(c); goto L_8003D8C4; } // 8003D8E4
  cmps(c,1,(int32_t)c->r[28],0); // 8003D8E8
  W32(c->r[31]+0x00000048u,c->r[4]); // 8003D8EC
  if (crb(c,6)) { goto L_8003D908; } // 8003D8F0
  c->r[3]=0u+0x80380000u; // 8003D8F4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003D8F8
  c->r[3]=c->r[3]+0x00004890u; // 8003D8FC
  c->r[28]=R32(c->r[3]+c->r[0]); // 8003D900
  goto L_8003D918; // 8003D904
L_8003D908:;
  c->r[3]=0u+0x80380000u; // 8003D908
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003D90C
  c->r[3]=c->r[3]+0x00004878u; // 8003D910
  c->r[28]=R32(c->r[3]+c->r[0]); // 8003D914
L_8003D918:;
  c->r[3]=c->r[1]+0x00000040u; // 8003D918
  c->r[4]=0u+0x00000000u; // 8003D91C
  c->r[5]=0u+0x00000024u; // 8003D920
  c->r[6]=0u+0x00000000u; // 8003D924
  c->lr=0x8003D92Cu; f_80362944(c); // 8003D928
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003D92C
  c->r[4]=c->r[28]|c->r[28]; // 8003D930
  c->r[5]=c->r[1]+0x00000040u; // 8003D934
  c->lr=0x8003D93Cu; f_8006F7E8(c); // 8003D938
  c->r[3]=c->r[1]+0x00000040u; // 8003D93C
  c->r[4]=c->r[31]+0x00000050u; // 8003D940
  c->r[5]=0u+0x00000000u; // 8003D944
  c->r[6]=0u+0x00000000u; // 8003D948
  c->lr=0x8003D950u; f_80362AEC(c); // 8003D94C
L_8003D950:;
  c->r[0]=addc(c,c->r[1],0x00000070u,0); cr0(c,c->r[0]); // 8003D950
  if (crb(c,2)) { goto L_8003D988; } // 8003D954
  c->r[4]=R32(c->r[1]+0x00000070u); // 8003D958
  cmps(c,1,(int32_t)c->r[4],0); // 8003D95C
  if (crb(c,6)) { goto L_8003D978; } // 8003D960
  c->r[3]=R32(c->r[1]+0x00000080u); // 8003D964
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003D968
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003D96C
  c->ctr=c->r[12]; // 8003D970
  if (true) { c->lr=0x8003D978u; dispatch(c,c->ctr); } // 8003D974
L_8003D978:;
  c->r[0]=0u+0x00000000u; // 8003D978
  W32(c->r[1]+0x00000070u,c->r[0]); // 8003D97C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8003D980
  W32(c->r[1]+0x00000078u,c->r[0]); // 8003D984
L_8003D988:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003D988
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003D98C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003D990
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003D994
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 8003D998
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 8003D99C
  c->r[29]=R32(c->r[10]+0xFFFFFFE4u); // 8003D9A0
  c->r[28]=R32(c->r[10]+0xFFFFFFE0u); // 8003D9A4
  c->lr=c->r[0]; // 8003D9A8
  c->r[1]=c->r[10]|c->r[10]; // 8003D9AC
  return; // 8003D9B0
}

// fn_8003D9B4
void f_8003D9B4(Ctx* __restrict c) {
  trace_call(0x8003D9B4u);
  c->r[4]=R32(c->r[3]+0x00000020u); // 8003D9B4
  cmps(c,0,(int32_t)c->r[4],0); // 8003D9B8
  if (crb(c,2)) { goto L_8003D9C8; } // 8003D9BC
  {uint32_t ea=c->r[4]+0x000021D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D9C0
  return; // 8003D9C4
L_8003D9C8:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D9C8
  return; // 8003D9CC
}

// fn_8003D9D0
void f_8003D9D0(Ctx* __restrict c) {
  trace_call(0x8003D9D0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003D9D0
  c->r[12]=c->r[1]|c->r[1]; // 8003D9D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFE30u,1); // 8003D9D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D9DC
  c->r[0]=c->lr; // 8003D9E0
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003D9E4
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003D9E8
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003D9EC
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003D9F0
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003D9F4
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8003D9F8
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8003D9FC
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003DA00
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8003DA04
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8003DA08
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8003DA0C
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003DA10
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 8003DA14
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 8003DA18
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 8003DA1C
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 8003DA20
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 8003DA24
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 8003DA28
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 8003DA2C
  {uint32_t ea=c->r[12]+0xFFFFFF60u; WF64(ea,c->f[22]);} // 8003DA30
  {uint32_t ea=c->r[12]+0xFFFFFF68u; psq_store(c,22,ea,0,0);} // 8003DA34
  W32(c->r[12]+0xFFFFFF5Cu,c->r[31]); // 8003DA38
  W32(c->r[12]+0xFFFFFF58u,c->r[30]); // 8003DA3C
  c->r[30]=c->r[3]|c->r[3]; // 8003DA40
  W32(c->r[12]+0xFFFFFF54u,c->r[29]); // 8003DA44
  c->r[0]=R32(c->r[3]+0x00000068u); // 8003DA48
  cmps(c,1,(int32_t)c->r[0],0); // 8003DA4C
  if (crb(c,6)) { goto L_8003E020; } // 8003DA50
  c->r[0]=R32(c->r[3]+0x00000020u); // 8003DA54
  cmps(c,1,(int32_t)c->r[0],0); // 8003DA58
  if (crb(c,6)) { goto L_8003E020; } // 8003DA5C
  c->r[3]=0u+0x803D0000u; // 8003DA60
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DA64
  c->r[3]=c->r[3]+0x0000407Cu; // 8003DA68
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003DA6C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003DA70
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DA74
  fcmp(c,1,c->f[0],c->f[1]); // 8003DA78
  if (crb(c,6)) { goto L_8003E020; } // 8003DA7C
  c->r[3]=c->r[1]+0x000000F0u; // 8003DA80
  c->r[0]=c->r[1]+0x00000120u; // 8003DA84
L_8003DA88:;
  c->r[3]=c->r[3]+0x00000010u; // 8003DA88
  cmpu(c,1,c->r[3],c->r[0]); // 8003DA8C
  if (crb(c,4)) { IRQCHK(c); goto L_8003DA88; } // 8003DA90
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[25]=c->ps1[25]=RF32(ea);} // 8003DA94
  c->r[3]=c->r[30]|c->r[30]; // 8003DA98
  {uint32_t ea=c->r[2]+0xFFFF8670u; c->f[24]=c->ps1[24]=RF32(ea);} // 8003DA9C
  c->lr=0x8003DAA4u; f_8003D398(c); // 8003DAA0
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DAA4
  c->r[5]=c->r[1]+0x000000A0u; // 8003DAA8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[10]=c->ps1[10]=RF32(ea);} // 8003DAAC
  c->r[4]=c->r[1]+0x000000B0u; // 8003DAB0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 8003DAB4
  c->r[6]=c->r[1]+0x000000C0u; // 8003DAB8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[10]); // 8003DABC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8003DAC0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 8003DAC4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003DAC8
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DACC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8003DAD0
  c->f[22]=c->ps1[22]=S(c->f[3]*c->f[9]); // 8003DAD4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 8003DAD8
  c->f[23]=c->ps1[23]=S(c->f[1]*c->f[9]); // 8003DADC
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[8]=c->ps1[8]=RF32(ea);} // 8003DAE0
  c->f[12]=c->ps1[12]=S(c->f[0]*c->f[10]); // 8003DAE4
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[5]); // 8003DAE8
  c->f[11]=c->ps1[11]=S(c->f[0]*c->f[5]); // 8003DAEC
  c->f[13]=c->ps1[13]=S(c->f[3]*c->f[10]); // 8003DAF0
  c->f[6]=c->ps1[6]=S(c->f[12]+c->f[23]); // 8003DAF4
  c->f[3]=c->ps1[3]=S(c->f[11]-c->f[22]); // 8003DAF8
  c->f[2]=c->ps1[2]=S(c->f[13]+c->f[7]); // 8003DAFC
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[6]);} // 8003DB00
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[4]); // 8003DB04
  c->f[4]=c->ps1[4]=S(c->f[12]-c->f[23]); // 8003DB08
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 8003DB0C
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[2]); // 8003DB10
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 8003DB14
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,12,ea,0,0);} // 8003DB18
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[6]);} // 8003DB1C
  {double t0=-c->f[12], t1=-c->ps1[12]; c->f[6]=t0; c->ps1[6]=t1;} // 8003DB20
  c->f[5]=c->ps1[5]=S(c->f[13]+c->f[5]); // 8003DB24
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 8003DB28
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 8003DB2C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,6,ea,0,0);} // 8003DB30
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[10]); // 8003DB34
  c->f[5]=c->ps1[5]=S(c->f[8]-c->f[5]); // 8003DB38
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[9]); // 8003DB3C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DB40
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8003DB44
  c->f[9]=c->ps1[9]=S(c->f[31]-c->f[31]); // 8003DB48
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,6,ea,1,0);} // 8003DB4C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,10,ea,0,0);} // 8003DB50
  {double t0=-c->f[6], t1=-c->ps1[6]; c->f[0]=t0; c->ps1[0]=t1;} // 8003DB54
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[7]);} // 8003DB58
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[8]); // 8003DB5C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DB60
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[8]); // 8003DB64
  {double t0=S(c->f[10]*c->f[10]), t1=S(c->ps1[10]*c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 8003DB68
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DB6C
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[3]);} // 8003DB70
  c->f[3]=c->ps1[3]=S(c->f[11]+c->f[22]); // 8003DB74
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[10])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[10])); c->f[7]=t0; c->ps1[7]=t1;} // 8003DB78
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[6]);} // 8003DB7C
  {double t0=S(c->f[7]+c->ps1[10]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 8003DB80
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8003DB84
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[5]);} // 8003DB88
  fcmp(c,0,c->f[7],c->f[9]); // 8003DB8C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[4]);} // 8003DB90
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[3]);} // 8003DB94
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[2]);} // 8003DB98
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8003DB9C
  if (crb(c,2)) { goto L_8003DBC0; } // 8003DBA0
  c->f[1]=frsqrte(c->f[7]); // 8003DBA4
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8003DBA8
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DBAC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8003DBB0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 8003DBB4
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[7],-c->f[0])); // 8003DBB8
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[1]); // 8003DBBC
L_8003DBC0:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003DBC0
  c->r[29]=c->r[1]+0x00000080u; // 8003DBC4
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003DBC8
  c->r[3]=c->r[30]|c->r[30]; // 8003DBCC
  {double t0=S(c->f[1]*c->f[7]), t1=S(c->ps1[1]*c->f[7]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DBD0
  c->r[4]=R32(c->r[13]+0xFFFF95B8u); // 8003DBD4
  {double t0=S(c->f[0]*c->f[7]), t1=S(c->ps1[0]*c->f[7]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DBD8
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DBDC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003DBE0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DBE4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003DBE8
  {uint32_t ea=c->r[4]+0x0000018Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003DBEC
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DBF0
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[3]);} // 8003DBF4
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003DBF8
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,2,ea,1,0);} // 8003DBFC
  c->lr=0x8003DC04u; f_8003D398(c); // 8003DC00
  c->r[4]=R32(c->r[30]+0x00000068u); // 8003DC04
  c->r[6]=0u+0x00000003u; // 8003DC08
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003DC0C
  c->r[5]=0u+0x00000001u; // 8003DC10
  c->r[31]=R32(c->r[4]+0x00000030u); // 8003DC14
  c->r[8]=c->r[1]+0x00000090u; // 8003DC18
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003DC1C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 8003DC20
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8003DC24
  c->r[7]=c->r[31]+0x0000001Cu; // 8003DC28
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DC2C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003DC30
  c->r[0]=c->r[0]&c->r[4]; // 8003DC34
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,3,ea,1,0);} // 8003DC38
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003DC3C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 8003DC40
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DC44
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DC48
  {uint32_t ea=c->r[1]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DC4C
  cmpu(c,1,c->r[0],0x00000001u); // 8003DC50
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DC54
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DC58
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[2]);} // 8003DC5C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8003DC60
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 8003DC64
  W32(c->r[1]+0x00000040u,c->r[7]); // 8003DC68
  W32(c->r[1]+0x00000044u,c->r[6]); // 8003DC6C
  W32(c->r[1]+0x00000020u,c->r[7]); // 8003DC70
  W32(c->r[1]+0x00000024u,c->r[6]); // 8003DC74
  W32(c->r[1]+0x00000028u,c->r[7]); // 8003DC78
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8003DC7C
  if (!crb(c,6)) { goto L_8003DE10; } // 8003DC80
  c->r[3]=0u+0x00000002u; // 8003DC84
  W32(c->r[1]+0x00000048u,c->r[7]); // 8003DC88
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 8003DC8C
  c->r[0]=c->r[0]&c->r[4]; // 8003DC90
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8003DC94
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 8003DC98
  cmpu(c,1,c->r[0],0x00000001u); // 8003DC9C
  W32(c->r[1]+0x00000018u,c->r[7]); // 8003DCA0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8003DCA4
  W32(c->r[1]+0x00000030u,c->r[7]); // 8003DCA8
  W32(c->r[1]+0x00000034u,c->r[3]); // 8003DCAC
  if (!crb(c,6)) { goto L_8003DCBC; } // 8003DCB0
  c->r[3]=c->r[31]|c->r[31]; // 8003DCB4
  c->lr=0x8003DCBCu; f_8034007C(c); // 8003DCB8
L_8003DCBC:;
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DCBC
  c->r[3]=0u+0x00000003u; // 8003DCC0
  {uint32_t ea=c->r[31]+0x00000064u; c->f[6]=c->ps1[6]=RF32(ea);} // 8003DCC4
  c->r[4]=c->r[31]+0x0000001Cu; // 8003DCC8
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DCCC
  c->r[0]=0u+0x00000001u; // 8003DCD0
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 8003DCD4
  {uint32_t ea=c->r[31]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DCD8
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[0]); // 8003DCDC
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8003DCE0
  c->f[22]=c->ps1[22]=S(c->f[1]*c->f[2]); // 8003DCE4
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[4]=c->ps1[4]=RF32(ea);} // 8003DCE8
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[6]); // 8003DCEC
  c->r[5]=c->r[31]+0x00000070u; // 8003DCF0
  c->f[3]=c->ps1[3]=S(c->f[13]*c->f[0]); // 8003DCF4
  c->r[6]=c->r[31]+0x00000090u; // 8003DCF8
  c->f[10]=c->ps1[10]=S(c->f[22]*c->f[2]); // 8003DCFC
  c->r[7]=c->r[31]+0x000000A0u; // 8003DD00
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[3]); // 8003DD04
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8003DD08
  c->f[11]=c->ps1[11]=S(c->f[13]*c->f[5]); // 8003DD0C
  W32(c->r[1]+0x00000054u,c->r[3]); // 8003DD10
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[2]); // 8003DD14
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 8003DD18
  c->f[12]=c->ps1[12]=S(c->f[8]*c->f[5]); // 8003DD1C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8003DD20
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[2]); // 8003DD24
  c->f[0]=c->ps1[0]=S(c->f[10]+c->f[3]); // 8003DD28
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 8003DD2C
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[11]); // 8003DD30
  c->f[2]=c->ps1[2]=S(c->f[9]+c->f[11]); // 8003DD34
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8003DD38
  c->f[9]=c->ps1[9]=S(c->f[22]*c->f[5]); // 8003DD3C
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[12]); // 8003DD40
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[3]);} // 8003DD44
  c->f[5]=c->ps1[5]=S(c->f[13]*c->f[6]); // 8003DD48
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 8003DD4C
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 8003DD50
  c->f[0]=c->ps1[0]=S(c->f[10]+c->f[7]); // 8003DD54
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[2]);} // 8003DD58
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[9]); // 8003DD5C
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[12]); // 8003DD60
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 8003DD64
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[9]); // 8003DD68
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 8003DD6C
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[3]);} // 8003DD70
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[2]);} // 8003DD74
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[1]);} // 8003DD78
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 8003DD7C
  {uint32_t ea=c->r[31]+0x00000080u; psq_load(c,3,ea,0,0);} // 8003DD80
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003DD84
  {uint32_t ea=c->r[31]+0x00000088u; psq_load(c,2,ea,1,0);} // 8003DD88
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003DD8C
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DD90
  W32(c->r[1]+0x00000050u,c->r[4]); // 8003DD94
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DD98
  {uint32_t ea=c->r[31]+0x00000080u; psq_store(c,1,ea,0,0);} // 8003DD9C
  {uint32_t ea=c->r[31]+0x00000088u; psq_store(c,0,ea,1,0);} // 8003DDA0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003DDA4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003DDA8
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,1,0);} // 8003DDAC
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003DDB0
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DDB4
  W32(c->r[1]+0x00000010u,c->r[4]); // 8003DDB8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DDBC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003DDC0
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DDC4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003DDC8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003DDCC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,2,ea,1,0);} // 8003DDD0
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003DDD4
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DDD8
  W32(c->r[1]+0x00000038u,c->r[4]); // 8003DDDC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DDE0
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003DDE4
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DDE8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DDEC
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8003DDF0
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DDF4
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8003DDF8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DDFC
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8003DE00
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8003DE04
  c->r[0]=c->r[3]&~c->r[0]; // 8003DE08
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8003DE0C
L_8003DE10:;
  c->r[4]=c->r[1]+0x000000D0u; // 8003DE10
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DE14
  {uint32_t ea=c->r[31]+0x000000B0u; psq_load(c,1,ea,0,0);} // 8003DE18
  c->r[3]=c->r[1]+0x00000070u; // 8003DE1C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 8003DE20
  c->r[5]=c->r[1]+0x000000E0u; // 8003DE24
  {uint32_t ea=c->r[31]+0x000000B8u; psq_load(c,2,ea,1,0);} // 8003DE28
  c->f[4]=c->ps1[4]=S(c->f[30]-c->f[30]); // 8003DE2C
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8003DE30
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003DE34
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8003DE38
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DE3C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 8003DE40
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DE44
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8003DE48
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003DE4C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 8003DE50
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003DE54
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DE58
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8003DE5C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 8003DE60
  {double t0=S(c->f[3]+c->ps1[2]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8003DE64
  fcmp(c,0,c->f[3],c->f[4]); // 8003DE68
  if (crb(c,2)) { goto L_8003DE8C; } // 8003DE6C
  c->f[1]=frsqrte(c->f[3]); // 8003DE70
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8003DE74
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DE78
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8003DE7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 8003DE80
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 8003DE84
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8003DE88
L_8003DE8C:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 8003DE8C
  c->r[3]=c->r[1]+0x000000C0u; // 8003DE90
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003DE94
  c->r[4]=c->r[1]+0x00000060u; // 8003DE98
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DE9C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003DEA0
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003DEA4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[27]=c->ps1[27]=RF32(ea);} // 8003DEA8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 8003DEAC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003DEB0
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[5]=t0; c->ps1[5]=t1;} // 8003DEB4
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8003DEB8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 8003DEBC
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003DEC0
  {double t0=S(c->f[1]*c->f[27]), t1=S(c->ps1[1]*c->ps1[27]); c->f[6]=t0; c->ps1[6]=t1;} // 8003DEC4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 8003DEC8
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 8003DECC
  {double t0=S(std::fma(c->f[2],c->f[28],-c->f[6])), t1=S(std::fma(c->ps1[2],c->ps1[28],-c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 8003DED0
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 8003DED4
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DED8
  {double t0=S(c->f[6]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 8003DEDC
  {double t0=S(std::fma(c->f[3],c->f[0],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[5])); c->f[2]=t0; c->ps1[2]=t1;} // 8003DEE0
  {double t0=S(c->ps1[6]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 8003DEE4
  {double t0=-c->f[7], t1=-c->ps1[7]; c->f[7]=t0; c->ps1[7]=t1;} // 8003DEE8
  {double t0=S(std::fma(c->f[3],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 8003DEEC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,6,ea,1,0);} // 8003DEF0
  {double t0=S(c->f[2]+c->ps1[5]), t1=S(c->ps1[26]); c->f[26]=t0; c->ps1[26]=t1;} // 8003DEF4
  {uint32_t ea=c->r[4]+0x00000004u; psq_store(c,7,ea,0,0);} // 8003DEF8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 8003DEFC
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[29]); c->f[29]=t0; c->ps1[29]=t1;} // 8003DF00
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003DF04
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DF08
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003DF0C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 8003DF10
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003DF14
  fcmp(c,0,c->f[1],c->f[3]); // 8003DF18
  if (crb(c,2)) { goto L_8003DF3C; } // 8003DF1C
  c->f[0]=frsqrte(c->f[1]); // 8003DF20
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003DF24
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 8003DF28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8003DF2C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[3])); // 8003DF30
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8003DF34
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8003DF38
L_8003DF3C:;
  c->f[2]=c->f[26]; // 8003DF3C
  c->lr=0x8003DF44u; f_800D29B0(c); // 8003DF40
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8003DF44
  {uint32_t ea=c->r[2]+0xFFFF8678u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DF48
  {uint32_t ea=c->r[2]+0xFFFF867Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DF4C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003DF50
  fcmp(c,1,c->f[2],c->f[1]); // 8003DF54
  if (!crb(c,5)) { goto L_8003DF64; } // 8003DF58
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8003DF5C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8003DF60
L_8003DF64:;
  {uint32_t ea=c->r[2]+0xFFFF8680u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DF64
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003DF68
  c->f[0]=std::fabs(c->f[2]); // 8003DF6C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8003DF70
  fcmp(c,1,c->f[0],c->f[25]); // 8003DF74
  if (!crb(c,5)) { goto L_8003DFE0; } // 8003DF78
  c->r[0]=R32(c->r[30]+0x00000088u); // 8003DF7C
  cmps(c,1,(int32_t)c->r[0],0); // 8003DF80
  if (!crb(c,6)) { goto L_8003DFE0; } // 8003DF84
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DF88
  fcmp(c,1,c->f[29],c->f[2]); // 8003DF8C
  if (!crb(c,4)) { goto L_8003DFB4; } // 8003DF90
  {uint32_t ea=c->r[2]+0xFFFF8684u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DF94
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DF98
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003DF9C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003DFA0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 8003DFA4
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8003DFA8
  {uint32_t ea=c->r[3]+0x000021D0u; WF32(ea,c->f[1]);} // 8003DFAC
  goto L_8003DFD0; // 8003DFB0
L_8003DFB4:;
  {uint32_t ea=c->r[30]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DFB4
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DFB8
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003DFBC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003DFC0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 8003DFC4
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[0]; // 8003DFC8
  {uint32_t ea=c->r[3]+0x000021D0u; WF32(ea,c->f[1]);} // 8003DFCC
L_8003DFD0:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003DFD0
  {uint32_t ea=c->r[2]+0xFFFF8670u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DFD4
  {uint32_t ea=c->r[3]+0x000021D4u; WF32(ea,c->f[0]);} // 8003DFD8
  goto L_8003E020; // 8003DFDC
L_8003DFE0:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003DFE0
  fcmp(c,1,c->f[0],c->f[24]); // 8003DFE4
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003DFE8
  {uint32_t ea=c->r[3]+0x000021D8u; WF32(ea,c->f[0]);} // 8003DFEC
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003DFF0
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003DFF4
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003DFF8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8003DFFC
  c->f[0]=(c->f[0]>=0.0)?c->f[1]:c->f[2]; // 8003E000
  {uint32_t ea=c->r[3]+0x000021D0u; WF32(ea,c->f[0]);} // 8003E004
  if (!crb(c,5)) { goto L_8003E018; } // 8003E008
  c->r[0]=0u+0x00000000u; // 8003E00C
  W32(c->r[30]+0x00000088u,c->r[0]); // 8003E010
  goto L_8003E020; // 8003E014
L_8003E018:;
  c->r[0]=0u+0x00000001u; // 8003E018
  W32(c->r[30]+0x00000088u,c->r[0]); // 8003E01C
L_8003E020:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003E020
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003E024
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003E028
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003E02C
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003E030
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003E034
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8003E038
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8003E03C
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8003E040
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8003E044
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8003E048
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8003E04C
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 8003E050
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 8003E054
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 8003E058
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 8003E05C
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 8003E060
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 8003E064
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 8003E068
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 8003E06C
  {uint32_t ea=c->r[10]+0xFFFFFF68u; psq_load(c,22,ea,0,0);} // 8003E070
  {uint32_t ea=c->r[10]+0xFFFFFF60u; c->f[22]=RF64(ea);} // 8003E074
  c->r[31]=R32(c->r[10]+0xFFFFFF5Cu); // 8003E078
  c->r[30]=R32(c->r[10]+0xFFFFFF58u); // 8003E07C
  c->r[29]=R32(c->r[10]+0xFFFFFF54u); // 8003E080
  c->lr=c->r[0]; // 8003E084
  c->r[1]=c->r[10]|c->r[10]; // 8003E088
  return; // 8003E08C
}

// fn_8003E090
void f_8003E090(Ctx* __restrict c) {
  trace_call(0x8003E090u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003E090
  cmps(c,0,(int32_t)c->r[3],0); // 8003E094
  if (crb(c,2)) { goto L_8003E0B4; } // 8003E098
  c->r[4]=R32(c->r[3]+0x00002134u); // 8003E09C
  cmps(c,0,(int32_t)c->r[4],0); // 8003E0A0
  if (crb(c,2)) { goto L_8003E0B4; } // 8003E0A4
  c->r[3]=R32(c->r[4]+0x00000028u); // 8003E0A8
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 8003E0AC
  return; // 8003E0B0
L_8003E0B4:;
  c->r[4]=0u+0x00000000u; // 8003E0B4
  c->r[3]=0u+0x00000000u; // 8003E0B8
  return; // 8003E0BC
}

// fn_8003E0C0
void f_8003E0C0(Ctx* __restrict c) {
  trace_call(0x8003E0C0u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003E0C0
  cmps(c,0,(int32_t)c->r[3],0); // 8003E0C4
  if (crb(c,2)) { goto L_8003E0D4; } // 8003E0C8
  {uint32_t ea=c->r[3]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E0CC
  return; // 8003E0D0
L_8003E0D4:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E0D4
  return; // 8003E0D8
}

// fn_8003E0DC
void f_8003E0DC(Ctx* __restrict c) {
  trace_call(0x8003E0DCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003E0DC
  c->r[12]=c->r[1]|c->r[1]; // 8003E0E0
  c->r[11]=addc(c,~c->r[11],0xFFFFFFC0u,1); // 8003E0E4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E0E8
  c->r[0]=c->lr; // 8003E0EC
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003E0F0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8003E0F4
  c->r[31]=c->r[5]|c->r[5]; // 8003E0F8
  c->r[5]=c->r[1]+0x00000020u; // 8003E0FC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8003E100
  c->r[30]=c->r[4]|c->r[4]; // 8003E104
  c->lr=0x8003E10Cu; f_8003E1A4(c); // 8003E108
  cmps(c,1,(int32_t)c->r[3],0); // 8003E10C
  if (crb(c,6)) { goto L_8003E184; } // 8003E110
  c->r[3]=c->r[1]+0x00000020u; // 8003E114
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8003E118
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003E11C
  c->r[4]=c->r[1]+0x00000010u; // 8003E120
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003E124
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 8003E128
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003E12C
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8003E130
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 8003E134
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003E138
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8003E13C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003E140
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003E144
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E148
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 8003E14C
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8003E150
  fcmp(c,0,c->f[0],c->f[3]); // 8003E154
  if (crb(c,2)) { goto L_8003E178; } // 8003E158
  c->f[1]=frsqrte(c->f[0]); // 8003E15C
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003E160
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8003E164
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8003E168
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[0],-c->f[3])); // 8003E16C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003E170
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8003E174
L_8003E178:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8003E178
  c->r[3]=0u+0x00000001u; // 8003E17C
  goto L_8003E188; // 8003E180
L_8003E184:;
  c->r[3]=0u+0x00000000u; // 8003E184
L_8003E188:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003E188
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003E18C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8003E190
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8003E194
  c->lr=c->r[0]; // 8003E198
  c->r[1]=c->r[10]|c->r[10]; // 8003E19C
  return; // 8003E1A0
}

// fn_8003E1A4
void f_8003E1A4(Ctx* __restrict c) {
  trace_call(0x8003E1A4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003E1A4
  c->r[12]=c->r[1]|c->r[1]; // 8003E1A8
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 8003E1AC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E1B0
  c->r[0]=c->lr; // 8003E1B4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003E1B8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8003E1BC
  c->r[31]=c->r[5]|c->r[5]; // 8003E1C0
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003E1C4
  cmps(c,0,(int32_t)c->r[3],0); // 8003E1C8
  if (crb(c,2)) { goto L_8003E210; } // 8003E1CC
  c->r[5]=R32(c->r[3]+0x00002134u); // 8003E1D0
  cmps(c,0,(int32_t)c->r[5],0); // 8003E1D4
  if (crb(c,2)) { goto L_8003E210; } // 8003E1D8
  {uint32_t ea=c->r[3]+0x00002180u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E1DC
  c->r[3]=c->r[1]+0x00000010u; // 8003E1E0
  c->r[6]=0u+0x00000000u; // 8003E1E4
  c->r[7]=0u+0x00000000u; // 8003E1E8
  c->lr=0x8003E1F0u; f_80056770(c); // 8003E1EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E1F0
  c->r[3]=0u+0x00000001u; // 8003E1F4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 8003E1F8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E1FC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 8003E200
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E204
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8003E208
  goto L_8003E214; // 8003E20C
L_8003E210:;
  c->r[3]=0u+0x00000000u; // 8003E210
L_8003E214:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003E214
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003E218
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8003E21C
  c->lr=c->r[0]; // 8003E220
  c->r[1]=c->r[10]|c->r[10]; // 8003E224
  return; // 8003E228
}

// fn_8003E22C
void f_8003E22C(Ctx* __restrict c) {
  trace_call(0x8003E22Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003E22C
  c->r[12]=c->r[1]|c->r[1]; // 8003E230
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 8003E234
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E238
  c->r[0]=c->lr; // 8003E23C
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003E240
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8003E244
  c->r[31]=c->r[4]|c->r[4]; // 8003E248
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 8003E24C
  c->r[30]=c->r[3]|c->r[3]; // 8003E250
  c->r[5]=R32(c->r[3]+0x00000020u); // 8003E254
  cmps(c,0,(int32_t)c->r[5],0); // 8003E258
  if (crb(c,2)) { goto L_8003E2B0; } // 8003E25C
  c->r[4]=R32(c->r[5]+0x00002130u); // 8003E260
  c->r[3]=c->r[31]|c->r[31]; // 8003E264
  c->lr=0x8003E26Cu; f_800565C0(c); // 8003E268
  c->r[5]=c->r[3]|c->r[3]; // 8003E26C
  c->r[4]=c->r[31]|c->r[31]; // 8003E270
  c->r[3]=c->r[1]+0x00000040u; // 8003E274
  c->r[6]=c->r[1]+0x00000014u; // 8003E278
  c->r[7]=c->r[1]+0x00000010u; // 8003E27C
  c->lr=0x8003E284u; f_800566D4(c); // 8003E280
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003E284
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E288
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E28C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8003E290
  c->r[3]=R32(c->r[30]+0x00000020u); // 8003E294
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8003E298
  c->r[4]=R32(c->r[1]+0x00000014u); // 8003E29C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8003E2A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E2A4
  c->lr=0x8003E2ACu; f_8003B740(c); // 8003E2A8
  goto L_8003E2B4; // 8003E2AC
L_8003E2B0:;
  c->lr=0x8003E2B4u; f_8003E47C(c); // 8003E2B0
L_8003E2B4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003E2B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003E2B8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8003E2BC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8003E2C0
  c->lr=c->r[0]; // 8003E2C4
  c->r[1]=c->r[10]|c->r[10]; // 8003E2C8
  return; // 8003E2CC
}

// fn_8003E2D0
void f_8003E2D0(Ctx* __restrict c) {
  trace_call(0x8003E2D0u);
  c->r[0]=R32(c->r[3]+0x00000020u); // 8003E2D0
  cmps(c,0,(int32_t)c->r[0],0); // 8003E2D4
  if (crb(c,2)) { goto L_8003E388; } // 8003E2D8
  c->r[4]=0u+0x803D0000u; // 8003E2DC
  c->r[9]=c->r[5]^c->r[6]; // 8003E2E0
  c->r[4]=c->r[4]+0x0000407Cu; // 8003E2E4
  c->r[4]=R32(c->r[4]+0x00000004u); // 8003E2E8
  c->r[8]=R32(c->r[4]+0x000000A8u); // 8003E2EC
  c->r[4]=R32(c->r[8]+0x00000000u); // 8003E2F0
  c->r[7]=R32(c->r[8]+0x00000004u); // 8003E2F4
  c->r[0]=divwu(c->r[9],c->r[4]); // 8003E2F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8003E2FC
  c->r[0]=c->r[9]-c->r[0]; // 8003E300
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8003E304
  c->r[0]=R32(c->r[7]+c->r[0]); // 8003E308
  goto L_8003E34C; // 8003E30C
L_8003E310:;
  c->r[4]=R32(c->r[8]+0x00000008u); // 8003E310
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8003E314
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003E318
  c->r[7]=c->r[4]+c->r[0]; // 8003E31C
  c->r[0]=R32(c->r[4]+c->r[0]); // 8003E320
  cmpu(c,0,c->r[0],c->r[9]); // 8003E324
  if (!crb(c,2)) { goto L_8003E348; } // 8003E328
  c->r[0]=R32(c->r[7]+0x00000008u); // 8003E32C
  c->r[4]=R32(c->r[7]+0x0000000Cu); // 8003E330
  c->r[0]=c->r[0]^c->r[5]; // 8003E334
  c->r[4]=c->r[4]^c->r[6]; // 8003E338
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 8003E33C
  if (!crb(c,2)) { goto L_8003E348; } // 8003E340
  goto L_8003E358; // 8003E344
L_8003E348:;
  c->r[0]=R32(c->r[7]+0x00000014u); // 8003E348
L_8003E34C:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8003E34C
  if (!crb(c,2)) { IRQCHK(c); goto L_8003E310; } // 8003E350
  c->r[7]=0u+0x00000000u; // 8003E354
L_8003E358:;
  cmps(c,0,(int32_t)c->r[7],0); // 8003E358
  if (!crb(c,2)) { goto L_8003E368; } // 8003E35C
  c->r[4]=0u+0x00000000u; // 8003E360
  goto L_8003E36C; // 8003E364
L_8003E368:;
  c->r[4]=c->r[7]+0x00000010u; // 8003E368
L_8003E36C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8003E36C
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003E370
  if (!crb(c,2)) { goto L_8003E380; } // 8003E374
  c->r[4]=0u+0x00000000u; // 8003E378
  goto L_8003E384; // 8003E37C
L_8003E380:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8003E380
L_8003E384:;
  f_8003B740(c); return; // 8003E384
L_8003E388:;
  f_8003E47C(c); return; // 8003E388
}

// fn_8003E38C
void f_8003E38C(Ctx* __restrict c) {
  trace_call(0x8003E38Cu);
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 8003E38C
  if (crb(c,2)) { goto L_8003E39C; } // 8003E390
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E394
  f_8003E2D0(c); return; // 8003E398
L_8003E39C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8003E39C
  if (crb(c,2)) return; // 8003E3A0
  c->r[4]=c->r[7]|c->r[7]; // 8003E3A4
  f_8003E408(c); return; // 8003E3A8
}

// fn_8003E3AC
void f_8003E3AC(Ctx* __restrict c) {
  trace_call(0x8003E3ACu);
  return; // 8003E3AC
}

// fn_8003E3B0
void f_8003E3B0(Ctx* __restrict c) {
  trace_call(0x8003E3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E3B0
  c->r[0]=c->lr; // 8003E3B4
  cmps(c,0,(int32_t)c->r[4],0); // 8003E3B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E3BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E3C0
  c->r[31]=c->r[3]|c->r[3]; // 8003E3C4
  if (crb(c,2)) { goto L_8003E3F0; } // 8003E3C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8003E3CC
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E3D0
  c->r[3]=R32(c->r[4]+0x00000000u); // 8003E3D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E3D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8003E3DC
  c->lr=0x8003E3E4u; f_800C2D24(c); // 8003E3E0
  c->r[0]=0u+0x00000000u; // 8003E3E4
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003E3E8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8003E3EC
L_8003E3F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E3F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E3F4
  c->lr=c->r[0]; // 8003E3F8
  c->r[1]=c->r[1]+0x00000010u; // 8003E3FC
  return; // 8003E400
}

// fn_8003E404
void f_8003E404(Ctx* __restrict c) {
  trace_call(0x8003E404u);
  return; // 8003E404
}

// fn_8003E408
void f_8003E408(Ctx* __restrict c) {
  trace_call(0x8003E408u);
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8003E408
  return; // 8003E40C
}

// fn_8003E410
void f_8003E410(Ctx* __restrict c) {
  trace_call(0x8003E410u);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8003E410
  return; // 8003E414
}

// fn_8003E418
void f_8003E418(Ctx* __restrict c) {
  trace_call(0x8003E418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E418
  c->r[0]=c->lr; // 8003E41C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E420
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E424
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003E428
  cmps(c,0,(int32_t)c->r[4],0); // 8003E42C
  if (crb(c,2)) { goto L_8003E458; } // 8003E430
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E434
  c->lr=0x8003E43Cu; f_800800B0(c); // 8003E438
  c->r[31]=c->r[3]|c->r[3]; // 8003E43C
  c->lr=0x8003E444u; f_800825E4(c); // 8003E440
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003E444
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E448
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E44C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8003E450
  goto L_8003E45C; // 8003E454
L_8003E458:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E458
L_8003E45C:;
  c->lr=0x8003E460u; f_800C2D24(c); // 8003E45C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E460
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E464
  c->lr=c->r[0]; // 8003E468
  c->r[1]=c->r[1]+0x00000010u; // 8003E46C
  return; // 8003E470
}

// fn_8003E474
void f_8003E474(Ctx* __restrict c) {
  trace_call(0x8003E474u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 8003E474
  return; // 8003E478
}

// fn_8003E47C
void f_8003E47C(Ctx* __restrict c) {
  trace_call(0x8003E47Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E47C
  c->r[0]=c->lr; // 8003E480
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003E484
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8003E488
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8003E48C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003E490
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003E494
  c->r[30]=c->r[3]|c->r[3]; // 8003E498
  c->r[4]=R32(c->r[3]+0x00000000u); // 8003E49C
  cmps(c,0,(int32_t)c->r[4],0); // 8003E4A0
  if (crb(c,2)) { goto L_8003E544; } // 8003E4A4
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8003E4A8
  c->r[5]=0u+0x43300000u; // 8003E4AC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8003E4B0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8003E4B4
  W32(c->r[1]+0x00000008u,c->r[5]); // 8003E4B8
  {uint32_t ea=c->r[2]+0xFFFF8668u; c->f[2]=RF64(ea);} // 8003E4BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8003E4C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E4C4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8003E4C8
  c->r[3]=R32(c->r[4]+0x00000000u); // 8003E4CC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8003E4D0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003E4D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8003E4D8
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E4DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8003E4E0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8003E4E4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[3]); // 8003E4E8
  c->lr=0x8003E4F0u; f_800800B0(c); // 8003E4EC
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E4F0
  c->r[4]=0u+0x00000001u; // 8003E4F4
  c->r[5]=0u+0x00000000u; // 8003E4F8
  c->r[6]=0u+0x00000000u; // 8003E4FC
  c->r[7]=0u+0x00000000u; // 8003E500
  c->r[8]=0u+0x00000000u; // 8003E504
  c->lr=0x8003E50Cu; f_800813B8(c); // 8003E508
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E50C
  c->r[4]=R32(c->r[30]+0x00000000u); // 8003E510
  c->lr=0x8003E518u; f_800800B0(c); // 8003E514
  c->r[31]=c->r[3]|c->r[3]; // 8003E518
  c->lr=0x8003E520u; f_800825E4(c); // 8003E51C
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003E520
  c->r[31]=0u+0x803D0000u; // 8003E524
  c->r[31]=c->r[31]+0x0000407Cu; // 8003E528
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[31]);} // 8003E52C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8003E530
  c->r[4]=R32(c->r[30]+0x00000000u); // 8003E534
  c->lr=0x8003E53Cu; f_8033E18C(c); // 8003E538
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8003E53C
  c->lr=0x8003E544u; f_8000C334(c); // 8003E540
L_8003E544:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003E544
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8003E548
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8003E54C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003E550
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003E554
  c->lr=c->r[0]; // 8003E558
  c->r[1]=c->r[1]+0x00000030u; // 8003E55C
  return; // 8003E560
}

// fn_8003E564
void f_8003E564(Ctx* __restrict c) {
  trace_call(0x8003E564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E564
  c->r[0]=c->lr; // 8003E568
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E56C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8003E570
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8003E574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E578
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003E57C
  cmps(c,0,(int32_t)c->r[0],0); // 8003E580
  if (crb(c,2)) { goto L_8003E5E4; } // 8003E584
  cmps(c,0,(int32_t)c->r[4],0); // 8003E588
  if (crb(c,2)) { goto L_8003E5BC; } // 8003E58C
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E590
  c->r[4]=c->r[0]|c->r[0]; // 8003E594
  c->lr=0x8003E59Cu; f_800800B0(c); // 8003E598
  c->r[31]=c->r[3]|c->r[3]; // 8003E59C
  c->lr=0x8003E5A4u; f_800825E4(c); // 8003E5A0
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003E5A4
  cmps(c,0,(int32_t)c->r[3],0); // 8003E5A8
  if (crb(c,2)) { goto L_8003E5E4; } // 8003E5AC
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E5B0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8003E5B4
  goto L_8003E5E4; // 8003E5B8
L_8003E5BC:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8003E5BC
  c->r[4]=c->r[0]|c->r[0]; // 8003E5C0
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E5C4
  c->lr=0x8003E5CCu; f_800800B0(c); // 8003E5C8
  c->r[31]=c->r[3]|c->r[3]; // 8003E5CC
  c->lr=0x8003E5D4u; f_800825E4(c); // 8003E5D0
  c->r[3]=R32(c->r[31]+0x00000008u); // 8003E5D4
  cmps(c,0,(int32_t)c->r[3],0); // 8003E5D8
  if (crb(c,2)) { goto L_8003E5E4; } // 8003E5DC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[31]);} // 8003E5E0
L_8003E5E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E5E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8003E5E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8003E5EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E5F0
  c->lr=c->r[0]; // 8003E5F4
  c->r[1]=c->r[1]+0x00000020u; // 8003E5F8
  return; // 8003E5FC
}

// fn_8003E600
void f_8003E600(Ctx* __restrict c) {
  trace_call(0x8003E600u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E600
  c->r[0]=c->lr; // 8003E604
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8003E60C
  c->r[31]=0u+0x803D0000u; // 8003E610
  W32(c->r[1]+0x00000018u,c->r[30]); // 8003E614
  W32(c->r[1]+0x00000014u,c->r[29]); // 8003E618
  c->r[29]=c->r[3]|c->r[3]; // 8003E61C
  c->r[3]=c->r[31]+0x0000407Cu; // 8003E620
  c->lr=0x8003E628u; f_800B7570(c); // 8003E624
  c->r[30]=R32(c->r[3]+0x00000018u); // 8003E628
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003E62C
  c->lr=0x8003E634u; f_80030AB0(c); // 8003E630
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003E634
  c->lr=0x8003E63Cu; f_80031364(c); // 8003E638
  c->r[0]=R32(c->r[29]+0x00000000u); // 8003E63C
  cmps(c,0,(int32_t)c->r[0],0); // 8003E640
  if (crb(c,2)) { goto L_8003E6D0; } // 8003E644
  c->r[3]=c->r[31]+0x0000407Cu; // 8003E648
  c->lr=0x8003E650u; f_800B7570(c); // 8003E64C
  c->r[5]=c->r[3]|c->r[3]; // 8003E650
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 8003E654
  c->r[4]=R32(c->r[29]+0x00000000u); // 8003E658
  c->r[5]=c->r[5]+0x00000028u; // 8003E65C
  c->r[6]=0u+0x0000000Eu; // 8003E660
  c->r[7]=0u+0x00000001u; // 8003E664
  c->lr=0x8003E66Cu; f_8007FF28(c); // 8003E668
  c->r[3]=c->r[29]|c->r[29]; // 8003E66C
  c->lr=0x8003E674u; f_8003E47C(c); // 8003E670
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003E674
  c->r[4]=0u+0x00000010u; // 8003E678
  c->lr=0x8003E680u; f_80030F34(c); // 8003E67C
  cmps(c,0,(int32_t)c->r[3],0); // 8003E680
  if (crb(c,2)) { goto L_8003E6AC; } // 8003E684
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E688
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8003E68C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 8003E690
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 8003E694
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8003E698
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8003E69C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8003E6A0
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003E6A4
  W32(c->r[4]+0x00000034u,c->r[3]); // 8003E6A8
L_8003E6AC:;
  c->r[3]=c->r[29]|c->r[29]; // 8003E6AC
  c->lr=0x8003E6B4u; f_8003D398(c); // 8003E6B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E6B4
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 8003E6B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E6BC
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 8003E6C0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E6C4
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 8003E6C8
  goto L_8003E720; // 8003E6CC
L_8003E6D0:;
  cmps(c,0,(int32_t)c->r[30],21); // 8003E6D0
  if (!crb(c,2)) { goto L_8003E6E8; } // 8003E6D4
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003E6D8
  c->r[4]=0u+0x00000005u; // 8003E6DC
  c->lr=0x8003E6E4u; f_80030F34(c); // 8003E6E0
  goto L_8003E6F4; // 8003E6E4
L_8003E6E8:;
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003E6E8
  c->r[4]=0u+0x00000000u; // 8003E6EC
  c->lr=0x8003E6F4u; f_80030F34(c); // 8003E6F0
L_8003E6F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8003E6F4
  if (crb(c,2)) { goto L_8003E720; } // 8003E6F8
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E6FC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8003E700
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 8003E704
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 8003E708
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8003E70C
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8003E710
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8003E714
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 8003E718
  W32(c->r[4]+0x00000034u,c->r[3]); // 8003E71C
L_8003E720:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E720
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8003E724
  c->r[30]=R32(c->r[1]+0x00000018u); // 8003E728
  c->r[29]=R32(c->r[1]+0x00000014u); // 8003E72C
  c->lr=c->r[0]; // 8003E730
  c->r[1]=c->r[1]+0x00000020u; // 8003E734
  return; // 8003E738
}

// fn_8003E73C
void f_8003E73C(Ctx* __restrict c) {
  trace_call(0x8003E73Cu);
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E73C
  c->r[4]=0u+0x00000000u; // 8003E740
  c->r[0]=0u+0xFFFFFFFFu; // 8003E744
  W32(c->r[3]+0x00000020u,c->r[4]); // 8003E748
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8003E74C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8003E750
  W32(c->r[3]+0x00000000u,c->r[0]); // 8003E754
  W32(c->r[3]+0x00000004u,c->r[0]); // 8003E758
  W32(c->r[3]+0x00000034u,c->r[4]); // 8003E75C
  W32(c->r[3]+0x00000018u,c->r[4]); // 8003E760
  return; // 8003E764
}

// fn_8003E768
void f_8003E768(Ctx* __restrict c) {
  trace_call(0x8003E768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E768
  c->r[0]=c->lr; // 8003E76C
  cmps(c,0,(int32_t)c->r[3],0); // 8003E770
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E778
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003E77C
  c->r[30]=c->r[3]|c->r[3]; // 8003E780
  if (crb(c,2)) { goto L_8003E83C; } // 8003E784
  cmps(c,0,(int32_t)c->r[4],0); // 8003E788
  if (!crb(c,1)) { goto L_8003E83C; } // 8003E78C
  c->lr=0x8003E794u; f_8028B53C(c); // 8003E790
  c->r[31]=0u+0x804B0000u; // 8003E794
  c->r[31]=c->r[31]+0xFFFFC800u; // 8003E798
  c->r[3]=c->r[31]|c->r[31]; // 8003E79C
  c->lr=0x8003E7A4u; f_8024B0E0(c); // 8003E7A0
  cmps(c,0,(int32_t)c->r[30],0); // 8003E7A4
  if (!crb(c,2)) { goto L_8003E7B8; } // 8003E7A8
  c->r[3]=c->r[31]|c->r[31]; // 8003E7AC
  c->lr=0x8003E7B4u; f_8024B1C0(c); // 8003E7B0
  goto L_8003E83C; // 8003E7B4
L_8003E7B8:;
  c->r[0]=0u+0x80000000u; // 8003E7B8
  cmpu(c,0,c->r[30],c->r[0]); // 8003E7BC
  if (crb(c,0)) { goto L_8003E7DC; } // 8003E7C0
  c->r[3]=0u+0x81800000u; // 8003E7C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003E7C8
  cmpu(c,0,c->r[30],c->r[0]); // 8003E7CC
  if (!crb(c,0)) { goto L_8003E7DC; } // 8003E7D0
  c->r[4]=0u+0x00000000u; // 8003E7D4
  goto L_8003E81C; // 8003E7D8
L_8003E7DC:;
  c->r[0]=0u+0x90000000u; // 8003E7DC
  cmpu(c,0,c->r[30],c->r[0]); // 8003E7E0
  if (crb(c,0)) { goto L_8003E7FC; } // 8003E7E4
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003E7E8
  cmpu(c,0,c->r[30],c->r[0]); // 8003E7EC
  if (!crb(c,0)) { goto L_8003E7FC; } // 8003E7F0
  c->r[4]=0u+0x00000001u; // 8003E7F4
  goto L_8003E81C; // 8003E7F8
L_8003E7FC:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8003E7FC
  cmpu(c,0,c->r[30],c->r[0]); // 8003E800
  if (crb(c,0)) { goto L_8003E81C; } // 8003E804
  c->r[3]=0u+0x98000000u; // 8003E808
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003E80C
  cmpu(c,0,c->r[30],c->r[0]); // 8003E810
  if (!crb(c,0)) { goto L_8003E81C; } // 8003E814
  c->r[4]=0u+0x00000002u; // 8003E818
L_8003E81C:;
  c->r[3]=0u+0x804B0000u; // 8003E81C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003E820
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8003E824
  c->r[4]=c->r[30]|c->r[30]; // 8003E828
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003E82C
  c->lr=0x8003E834u; f_8023B550(c); // 8003E830
  c->r[3]=c->r[31]|c->r[31]; // 8003E834
  c->lr=0x8003E83Cu; f_8024B1C0(c); // 8003E838
L_8003E83C:;
  c->r[3]=c->r[30]|c->r[30]; // 8003E83C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E840
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003E844
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E848
  c->lr=c->r[0]; // 8003E84C
  c->r[1]=c->r[1]+0x00000010u; // 8003E850
  return; // 8003E854
}

// fn_8003E858
void f_8003E858(Ctx* __restrict c) {
  trace_call(0x8003E858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E858
  c->r[0]=c->lr; // 8003E85C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E864
  c->r[31]=c->r[5]|c->r[5]; // 8003E868
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003E86C
  c->r[30]=c->r[3]|c->r[3]; // 8003E870
  W32(c->r[3]+0x00000000u,c->r[4]); // 8003E874
  W32(c->r[3]+0x00000034u,c->r[6]); // 8003E878
  c->lr=0x8003E880u; f_8003E8A4(c); // 8003E87C
  c->r[3]=c->r[30]|c->r[30]; // 8003E880
  c->r[4]=c->r[31]|c->r[31]; // 8003E884
  c->lr=0x8003E88Cu; f_8003E8D8(c); // 8003E888
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E88C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E890
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003E894
  c->lr=c->r[0]; // 8003E898
  c->r[1]=c->r[1]+0x00000010u; // 8003E89C
  return; // 8003E8A0
}

// fn_8003E8A4
void f_8003E8A4(Ctx* __restrict c) {
  trace_call(0x8003E8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E8A4
  c->r[0]=c->lr; // 8003E8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E8B0
  c->r[31]=c->r[3]|c->r[3]; // 8003E8B4
  c->lr=0x8003E8BCu; f_800407EC(c); // 8003E8B8
  c->r[3]=c->r[31]|c->r[31]; // 8003E8BC
  c->lr=0x8003E8C4u; f_8004076C(c); // 8003E8C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E8C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E8C8
  c->lr=c->r[0]; // 8003E8CC
  c->r[1]=c->r[1]+0x00000010u; // 8003E8D0
  return; // 8003E8D4
}

// fn_8003E8D8
void f_8003E8D8(Ctx* __restrict c) {
  trace_call(0x8003E8D8u);
  c->r[5]=0u+0x00000001u; // 8003E8D8
  c->r[0]=0u+0x00000000u; // 8003E8DC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8003E8E0
  W32(c->r[3]+0x00000008u,c->r[5]); // 8003E8E4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8003E8E8
  return; // 8003E8EC
}

// fn_8003E8F0
void f_8003E8F0(Ctx* __restrict c) {
  trace_call(0x8003E8F0u);
  c->r[0]=R32(c->r[4]+0x00000004u); // 8003E8F0
  c->r[4]=0u+0x803D0000u; // 8003E8F4
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 8003E8F8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8003E8FC
  c->r[4]=c->r[4]+c->r[0]; // 8003E900
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E904
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8003E908
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E90C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8003E910
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E914
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003E918
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E91C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8003E920
  return; // 8003E924
}

// fn_8003E928
void f_8003E928(Ctx* __restrict c) {
  trace_call(0x8003E928u);
  c->r[0]=R32(c->r[4]+0x00000004u); // 8003E928
  c->r[4]=0u+0x803D0000u; // 8003E92C
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 8003E930
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8003E934
  c->r[4]=c->r[4]+c->r[0]; // 8003E938
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E93C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8003E940
  {uint32_t ea=c->r[4]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E944
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8003E948
  {uint32_t ea=c->r[4]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E94C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8003E950
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E954
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8003E958
  return; // 8003E95C
}

// fn_8003E960
void f_8003E960(Ctx* __restrict c) {
  trace_call(0x8003E960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E960
  c->r[0]=c->lr; // 8003E964
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E968
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003E96C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8003E970
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003E974
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003E978
  c->r[3]=c->r[3]+c->r[0]; // 8003E97C
  c->r[3]=c->r[3]+0x0000000Cu; // 8003E980
  c->lr=0x8003E988u; f_8006159C(c); // 8003E984
  c->r[3]=0u+0x803D0000u; // 8003E988
  c->r[3]=c->r[3]+0x00000280u; // 8003E98C
  c->lr=0x8003E994u; f_8009B79C(c); // 8003E990
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E994
  c->lr=c->r[0]; // 8003E998
  c->r[1]=c->r[1]+0x00000010u; // 8003E99C
  return; // 8003E9A0
}

// fn_8003E9A4
void f_8003E9A4(Ctx* __restrict c) {
  trace_call(0x8003E9A4u);
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8003E9A4
  c->r[5]=R32(c->r[13]+0xFFFF9480u); // 8003E9A8
  c->r[6]=R32(c->r[5]+0x00000004u); // 8003E9AC
  cmps(c,0,(int32_t)c->r[6],0); // 8003E9B0
  if (crb(c,2)) { goto L_8003E9FC; } // 8003E9B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003E9B8
  c->r[4]=cntlz(c->r[4]); // 8003E9BC
  c->r[5]=rotl(c->r[4],27)&0x07FFFFFFu; // 8003E9C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8003E9C4
  c->r[4]=c->r[6]+c->r[0]; // 8003E9C8
  c->r[4]=R32(c->r[4]+0x00000430u); // 8003E9CC
  cmps(c,0,(int32_t)c->r[4],0); // 8003E9D0
  if (crb(c,2)) { goto L_8003E9FC; } // 8003E9D4
  cmps(c,0,(int32_t)c->r[5],0); // 8003E9D8
  if (crb(c,2)) { goto L_8003E9F0; } // 8003E9DC
  c->r[0]=R32(c->r[4]+0x00000020u); // 8003E9E0
  c->r[0]=c->r[0]|0x00000002u; // 8003E9E4
  W32(c->r[4]+0x00000020u,c->r[0]); // 8003E9E8
  goto L_8003E9FC; // 8003E9EC
L_8003E9F0:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 8003E9F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8003E9F4
  W32(c->r[4]+0x00000020u,c->r[0]); // 8003E9F8
L_8003E9FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003E9FC
  c->r[4]=R32(c->r[13]+0xFFFF9480u); // 8003EA00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003EA04
  c->r[4]=c->r[4]+0x0000000Cu; // 8003EA08
  c->r[4]=c->r[4]+c->r[0]; cr0(c,c->r[4]); // 8003EA0C
  if (crb(c,2)) return; // 8003EA10
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8003EA14
  c->r[3]=c->r[4]|c->r[4]; // 8003EA18
  c->r[0]=cntlz(c->r[0]); // 8003EA1C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003EA20
  f_8006159C(c); return; // 8003EA24
}

// fn_8003EA28
void f_8003EA28(Ctx* __restrict c) {
  trace_call(0x8003EA28u);
  return; // 8003EA28
}

// fn_8003EA2C
void f_8003EA2C(Ctx* __restrict c) {
  trace_call(0x8003EA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EA2C
  c->r[0]=c->lr; // 8003EA30
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003EA34
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8003EA38
  W32(c->r[1]+0x00000098u,c->r[30]); // 8003EA3C
  c->r[30]=c->r[3]|c->r[3]; // 8003EA40
  W32(c->r[1]+0x00000094u,c->r[29]); // 8003EA44
  c->r[5]=R32(c->r[3]+0x00000000u); // 8003EA48
  cmps(c,0,(int32_t)c->r[5],-1); // 8003EA4C
  if (crb(c,2)) { goto L_8003EFE4; } // 8003EA50
  c->r[0]=R32(c->r[3]+0x00000004u); // 8003EA54
  cmps(c,0,(int32_t)c->r[0],-1); // 8003EA58
  if (crb(c,2)) { goto L_8003EFE4; } // 8003EA5C
  c->r[4]=R32(c->r[3]+0x00000008u); // 8003EA60
  cmps(c,0,(int32_t)c->r[4],0); // 8003EA64
  if (crb(c,2)) { goto L_8003EFE4; } // 8003EA68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8003EA6C
  cmps(c,0,(int32_t)c->r[0],0); // 8003EA70
  if (!crb(c,2)) { goto L_8003EFE4; } // 8003EA74
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 8003EA78
  c->r[0]=R32(c->r[3]+0x00000224u); // 8003EA7C
  cmps(c,0,(int32_t)c->r[0],0); // 8003EA80
  if (crb(c,2)) { goto L_8003EA8C; } // 8003EA84
  goto L_8003EFE4; // 8003EA88
L_8003EA8C:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 8003EA8C
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003EA90
  c->r[3]=c->r[3]+c->r[0]; // 8003EA94
  c->r[3]=c->r[3]+0x0000000Cu; // 8003EA98
  c->lr=0x8003EAA0u; f_8006159C(c); // 8003EA9C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EAA0
  c->r[3]=c->r[30]+0x00000020u; // 8003EAA4
  c->lr=0x8003EAACu; f_8003CDF4(c); // 8003EAA8
  cmps(c,0,(int32_t)c->r[3],0); // 8003EAAC
  if (!crb(c,2)) { goto L_8003EABC; } // 8003EAB0
  c->r[3]=c->r[30]|c->r[30]; // 8003EAB4
  c->lr=0x8003EABCu; f_800407D8(c); // 8003EAB8
L_8003EABC:;
  c->r[3]=c->r[30]|c->r[30]; // 8003EABC
  c->lr=0x8003EAC4u; f_800408D8(c); // 8003EAC0
  c->r[0]=R32(c->r[30]+0x00000044u); // 8003EAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8003EAC8
  if (crb(c,2)) { goto L_8003EADC; } // 8003EACC
  c->r[3]=c->r[30]|c->r[30]; // 8003EAD0
  c->lr=0x8003EAD8u; f_80040984(c); // 8003EAD4
  goto L_8003EFE4; // 8003EAD8
L_8003EADC:;
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EADC
  c->r[5]=0u+0x00000002u; // 8003EAE0
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EAE4
  c->r[4]=R32(c->r[29]+0x0000035Cu); // 8003EAE8
  c->r[0]=R32(c->r[29]+0x00000360u); // 8003EAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003EAF0
  W32(c->r[1]+0x00000088u,c->r[4]); // 8003EAF4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8003EAF8
  if (crb(c,2)) { goto L_8003EB0C; } // 8003EAFC
  c->r[4]=0u+0x00000002u; // 8003EB00
  c->lr=0x8003EB08u; f_802AD614(c); // 8003EB04
  c->r[5]=c->r[3]|c->r[3]; // 8003EB08
L_8003EB0C:;
  c->r[3]=0u+0x00000001u; // 8003EB0C
  c->r[0]=R32(c->r[29]+0x00000018u); // 8003EB10
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EB14
  c->r[4]=c->r[29]+0x00000018u; // 8003EB18
  c->r[0]=c->r[3]&c->r[0]; // 8003EB1C
  W32(c->r[1]+0x00000080u,c->r[4]); // 8003EB20
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EB24
  c->r[0]=0u-c->r[3]; // 8003EB28
  W32(c->r[1]+0x00000084u,c->r[5]); // 8003EB2C
  c->r[0]=c->r[0]|c->r[3]; // 8003EB30
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 8003EB34
  W32(c->r[1]+0x00000078u,c->r[4]); // 8003EB38
  W32(c->r[1]+0x0000007Cu,c->r[5]); // 8003EB3C
  if (!crb(c,2)) { goto L_8003EB98; } // 8003EB40
  c->r[31]=R32(c->r[30]+0x00000034u); // 8003EB44
  c->r[5]=0u+0x00000004u; // 8003EB48
  c->r[3]=R32(c->r[31]+0x00000478u); // 8003EB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8003EB50
  if (crb(c,2)) { goto L_8003EB64; } // 8003EB54
  c->r[4]=0u+0x00000004u; // 8003EB58
  c->lr=0x8003EB60u; f_802AD614(c); // 8003EB5C
  c->r[5]=c->r[3]|c->r[3]; // 8003EB60
L_8003EB64:;
  c->r[3]=0u+0x00000001u; // 8003EB64
  c->r[0]=R32(c->r[31]+0x00000018u); // 8003EB68
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EB6C
  c->r[4]=c->r[31]+0x00000018u; // 8003EB70
  c->r[0]=c->r[3]&c->r[0]; // 8003EB74
  W32(c->r[1]+0x00000070u,c->r[4]); // 8003EB78
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EB7C
  c->r[0]=0u-c->r[3]; // 8003EB80
  W32(c->r[1]+0x00000074u,c->r[5]); // 8003EB84
  c->r[0]=c->r[0]|c->r[3]; // 8003EB88
  W32(c->r[1]+0x00000068u,c->r[4]); // 8003EB8C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 8003EB90
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 8003EB94
L_8003EB98:;
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EB98
  c->r[5]=0u+0x00000001u; // 8003EB9C
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EBA0
  cmps(c,0,(int32_t)c->r[3],0); // 8003EBA4
  if (crb(c,2)) { goto L_8003EBB8; } // 8003EBA8
  c->r[4]=0u+0x00000001u; // 8003EBAC
  c->lr=0x8003EBB4u; f_802AD614(c); // 8003EBB0
  c->r[5]=c->r[3]|c->r[3]; // 8003EBB4
L_8003EBB8:;
  c->r[3]=0u+0x00000001u; // 8003EBB8
  c->r[0]=R32(c->r[29]+0x00000018u); // 8003EBBC
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EBC0
  c->r[4]=c->r[29]+0x00000018u; // 8003EBC4
  c->r[0]=c->r[3]&c->r[0]; // 8003EBC8
  W32(c->r[1]+0x00000060u,c->r[4]); // 8003EBCC
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 8003EBD0
  W32(c->r[1]+0x00000064u,c->r[5]); // 8003EBD4
  W32(c->r[1]+0x00000058u,c->r[4]); // 8003EBD8
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8003EBDC
  if (!crb(c,2)) { goto L_8003EC30; } // 8003EBE0
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EBE4
  c->r[5]=0u+0x00000003u; // 8003EBE8
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EBEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003EBF0
  if (crb(c,2)) { goto L_8003EC04; } // 8003EBF4
  c->r[4]=0u+0x00000003u; // 8003EBF8
  c->lr=0x8003EC00u; f_802AD614(c); // 8003EBFC
  c->r[5]=c->r[3]|c->r[3]; // 8003EC00
L_8003EC04:;
  c->r[3]=0u+0x00000001u; // 8003EC04
  c->r[0]=R32(c->r[29]+0x00000018u); // 8003EC08
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EC0C
  c->r[4]=c->r[29]+0x00000018u; // 8003EC10
  c->r[0]=c->r[3]&c->r[0]; // 8003EC14
  W32(c->r[1]+0x00000050u,c->r[4]); // 8003EC18
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 8003EC1C
  W32(c->r[1]+0x00000054u,c->r[5]); // 8003EC20
  W32(c->r[1]+0x00000048u,c->r[4]); // 8003EC24
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 8003EC28
  if (crb(c,2)) { goto L_8003ED1C; } // 8003EC2C
L_8003EC30:;
  c->r[3]=R32(c->r[30]+0x00000034u); // 8003EC30
  c->r[4]=R32(c->r[3]+0x0000047Cu); // 8003EC34
  cmps(c,0,(int32_t)c->r[4],0); // 8003EC38
  if (crb(c,2)) { goto L_8003EC58; } // 8003EC3C
  {uint32_t ea=c->r[3]+0x00000440u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003EC40
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EC44
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EC48
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003EC4C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003EC50
  goto L_8003EC5C; // 8003EC54
L_8003EC58:;
  {uint32_t ea=c->r[3]+0x00000440u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EC58
L_8003EC5C:;
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EC5C
  fcmp(c,0,c->f[1],c->f[0]); // 8003EC60
  c->r[31]=c->cr; // 8003EC64
  c->r[31]=rotl(c->r[31],2)&0x00000001u; cr0(c,c->r[31]); // 8003EC68
  if (!crb(c,2)) { goto L_8003ECA4; } // 8003EC6C
  cmps(c,0,(int32_t)c->r[4],0); // 8003EC70
  if (crb(c,2)) { goto L_8003EC90; } // 8003EC74
  {uint32_t ea=c->r[3]+0x00000440u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003EC78
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EC7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EC80
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003EC84
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003EC88
  goto L_8003EC94; // 8003EC8C
L_8003EC90:;
  {uint32_t ea=c->r[3]+0x00000440u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EC90
L_8003EC94:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EC94
  fcmp(c,0,c->f[1],c->f[0]); // 8003EC98
  c->r[31]=c->cr; // 8003EC9C
  c->r[31]=rotl(c->r[31],1)&0x00000001u; // 8003ECA0
L_8003ECA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003ECA4
  if (!crb(c,2)) { goto L_8003ECE0; } // 8003ECA8
  cmps(c,0,(int32_t)c->r[4],0); // 8003ECAC
  if (crb(c,2)) { goto L_8003ECCC; } // 8003ECB0
  {uint32_t ea=c->r[3]+0x00000444u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ECB4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ECB8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ECBC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003ECC0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003ECC4
  goto L_8003ECD0; // 8003ECC8
L_8003ECCC:;
  {uint32_t ea=c->r[3]+0x00000444u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ECCC
L_8003ECD0:;
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ECD0
  fcmp(c,0,c->f[1],c->f[0]); // 8003ECD4
  c->r[31]=c->cr; // 8003ECD8
  c->r[31]=rotl(c->r[31],2)&0x00000001u; // 8003ECDC
L_8003ECE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003ECE0
  if (!crb(c,2)) { goto L_8003ED1C; } // 8003ECE4
  cmps(c,0,(int32_t)c->r[4],0); // 8003ECE8
  if (crb(c,2)) { goto L_8003ED08; } // 8003ECEC
  {uint32_t ea=c->r[3]+0x00000444u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ECF0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ECF4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ECF8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003ECFC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003ED00
  goto L_8003ED0C; // 8003ED04
L_8003ED08:;
  {uint32_t ea=c->r[3]+0x00000444u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ED08
L_8003ED0C:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ED0C
  fcmp(c,0,c->f[1],c->f[0]); // 8003ED10
  c->r[31]=c->cr; // 8003ED14
  c->r[31]=rotl(c->r[31],1)&0x00000001u; // 8003ED18
L_8003ED1C:;
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ED1C
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ED20
  fcmp(c,0,c->f[1],c->f[0]); // 8003ED24
  c->r[0]=c->cr; // 8003ED28
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8003ED2C
  c->r[31]=c->r[31]|c->r[0]; cr0(c,c->r[31]); // 8003ED30
  if (crb(c,2)) { goto L_8003ED6C; } // 8003ED34
  c->r[3]=R32(c->r[30]+0x00000040u); // 8003ED38
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8003ED3C
  cmpu(c,0,c->r[3],c->r[0]); // 8003ED40
  if (crb(c,2)) { goto L_8003ED6C; } // 8003ED44
  c->r[3]=c->r[30]|c->r[30]; // 8003ED48
  c->lr=0x8003ED50u; f_80040984(c); // 8003ED4C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8003ED50
  c->r[4]=0u+0x00000000u; // 8003ED54
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003ED58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003ED5C
  c->r[3]=c->r[3]+c->r[0]; // 8003ED60
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8003ED64
  goto L_8003EFE4; // 8003ED68
L_8003ED6C:;
  c->r[3]=0u+0x803D0000u; // 8003ED6C
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003ED70
  c->r[3]=c->r[3]+0x00000280u; // 8003ED74
  {uint32_t ea=c->r[3]+0x00001B20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ED78
  fcmp(c,0,c->f[1],c->f[0]); // 8003ED7C
  c->r[0]=c->cr; // 8003ED80
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 8003ED84
  c->r[0]=c->r[0]^0x00000001u; // 8003ED88
  cmps(c,0,(int32_t)c->r[0],0); // 8003ED8C
  if (crb(c,2)) { goto L_8003EE44; } // 8003ED90
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003ED94
  c->r[5]=0u+0x00000001u; // 8003ED98
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003ED9C
  cmps(c,0,(int32_t)c->r[3],0); // 8003EDA0
  if (crb(c,2)) { goto L_8003EDB4; } // 8003EDA4
  c->r[4]=0u+0x00000001u; // 8003EDA8
  c->lr=0x8003EDB0u; f_802AD614(c); // 8003EDAC
  c->r[5]=c->r[3]|c->r[3]; // 8003EDB0
L_8003EDB4:;
  c->r[3]=0u+0x00000001u; // 8003EDB4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8003EDB8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EDBC
  c->r[4]=c->r[29]+0x0000000Cu; // 8003EDC0
  c->r[0]=c->r[3]&c->r[0]; // 8003EDC4
  W32(c->r[1]+0x00000040u,c->r[4]); // 8003EDC8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EDCC
  c->r[0]=0u-c->r[3]; // 8003EDD0
  W32(c->r[1]+0x00000044u,c->r[5]); // 8003EDD4
  c->r[0]=c->r[0]|c->r[3]; // 8003EDD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8003EDDC
  W32(c->r[1]+0x00000038u,c->r[4]); // 8003EDE0
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8003EDE4
  if (!crb(c,2)) { goto L_8003EEF0; } // 8003EDE8
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EDEC
  c->r[5]=0u+0x00000003u; // 8003EDF0
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EDF4
  cmps(c,0,(int32_t)c->r[3],0); // 8003EDF8
  if (crb(c,2)) { goto L_8003EE0C; } // 8003EDFC
  c->r[4]=0u+0x00000003u; // 8003EE00
  c->lr=0x8003EE08u; f_802AD614(c); // 8003EE04
  c->r[5]=c->r[3]|c->r[3]; // 8003EE08
L_8003EE0C:;
  c->r[3]=0u+0x00000001u; // 8003EE0C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8003EE10
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EE14
  c->r[4]=c->r[29]+0x0000000Cu; // 8003EE18
  c->r[0]=c->r[3]&c->r[0]; // 8003EE1C
  W32(c->r[1]+0x00000030u,c->r[4]); // 8003EE20
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EE24
  c->r[0]=0u-c->r[3]; // 8003EE28
  W32(c->r[1]+0x00000034u,c->r[5]); // 8003EE2C
  c->r[0]=c->r[0]|c->r[3]; // 8003EE30
  W32(c->r[1]+0x00000028u,c->r[4]); // 8003EE34
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8003EE38
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8003EE3C
  goto L_8003EEF0; // 8003EE40
L_8003EE44:;
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EE44
  c->r[5]=0u+0x00000001u; // 8003EE48
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EE4C
  cmps(c,0,(int32_t)c->r[3],0); // 8003EE50
  if (crb(c,2)) { goto L_8003EE64; } // 8003EE54
  c->r[4]=0u+0x00000001u; // 8003EE58
  c->lr=0x8003EE60u; f_802AD614(c); // 8003EE5C
  c->r[5]=c->r[3]|c->r[3]; // 8003EE60
L_8003EE64:;
  c->r[3]=0u+0x00000001u; // 8003EE64
  c->r[0]=R32(c->r[29]+0x00000018u); // 8003EE68
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EE6C
  c->r[4]=c->r[29]+0x00000018u; // 8003EE70
  c->r[0]=c->r[3]&c->r[0]; // 8003EE74
  W32(c->r[1]+0x00000020u,c->r[4]); // 8003EE78
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EE7C
  c->r[0]=0u-c->r[3]; // 8003EE80
  W32(c->r[1]+0x00000024u,c->r[5]); // 8003EE84
  c->r[0]=c->r[0]|c->r[3]; // 8003EE88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8003EE8C
  W32(c->r[1]+0x00000018u,c->r[4]); // 8003EE90
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8003EE94
  if (!crb(c,2)) { goto L_8003EEF0; } // 8003EE98
  c->r[29]=R32(c->r[30]+0x00000034u); // 8003EE9C
  c->r[5]=0u+0x00000003u; // 8003EEA0
  c->r[3]=R32(c->r[29]+0x00000478u); // 8003EEA4
  cmps(c,0,(int32_t)c->r[3],0); // 8003EEA8
  if (crb(c,2)) { goto L_8003EEBC; } // 8003EEAC
  c->r[4]=0u+0x00000003u; // 8003EEB0
  c->lr=0x8003EEB8u; f_802AD614(c); // 8003EEB4
  c->r[5]=c->r[3]|c->r[3]; // 8003EEB8
L_8003EEBC:;
  c->r[3]=0u+0x00000001u; // 8003EEBC
  c->r[0]=R32(c->r[29]+0x00000018u); // 8003EEC0
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8003EEC4
  c->r[4]=c->r[29]+0x00000018u; // 8003EEC8
  c->r[0]=c->r[3]&c->r[0]; // 8003EECC
  W32(c->r[1]+0x00000010u,c->r[4]); // 8003EED0
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 8003EED4
  c->r[0]=0u-c->r[3]; // 8003EED8
  W32(c->r[1]+0x00000014u,c->r[5]); // 8003EEDC
  c->r[0]=c->r[0]|c->r[3]; // 8003EEE0
  W32(c->r[1]+0x00000008u,c->r[4]); // 8003EEE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8003EEE8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8003EEEC
L_8003EEF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8003EEF0
  if (crb(c,2)) { goto L_8003EFC4; } // 8003EEF4
  c->r[3]=c->r[30]|c->r[30]; // 8003EEF8
  c->lr=0x8003EF00u; f_80040830(c); // 8003EEFC
  c->r[31]=0u+0x803D0000u; // 8003EF00
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003EF04
  c->r[31]=c->r[31]+0x00000280u; // 8003EF08
  c->r[29]=c->r[3]|c->r[3]; // 8003EF0C
  {uint32_t ea=c->r[31]+0x00001B20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EF10
  fcmp(c,0,c->f[1],c->f[0]); // 8003EF14
  c->r[0]=c->cr; // 8003EF18
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 8003EF1C
  c->r[0]=c->r[0]^0x00000001u; // 8003EF20
  cmps(c,0,(int32_t)c->r[0],0); // 8003EF24
  if (crb(c,2)) { goto L_8003EF58; } // 8003EF28
  c->r[3]=c->r[30]|c->r[30]; // 8003EF2C
  c->lr=0x8003EF34u; f_80040AE0(c); // 8003EF30
  c->r[3]=c->r[31]+0x00001B20u; // 8003EF34
  c->lr=0x8003EF3Cu; f_8009E6BC(c); // 8003EF38
  c->r[0]=R32(c->r[30]+0x00000000u); // 8003EF3C
  c->r[29]=c->r[3]|c->r[3]; // 8003EF40
  c->r[4]=R32(c->r[13]+0xFFFF9480u); // 8003EF44
  c->r[5]=0u+0x00000000u; // 8003EF48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003EF4C
  c->r[3]=c->r[4]+c->r[0]; // 8003EF50
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 8003EF54
L_8003EF58:;
  cmps(c,0,(int32_t)c->r[29],0); // 8003EF58
  if (crb(c,2)) { goto L_8003EFB0; } // 8003EF5C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8003EF60
  c->r[5]=0u+0x803D0000u; // 8003EF64
  c->r[5]=c->r[5]+0x00000280u; // 8003EF68
  c->r[3]=c->r[30]|c->r[30]; // 8003EF6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 8003EF70
  c->r[4]=0u+0x00000000u; // 8003EF74
  c->r[6]=c->r[5]+c->r[0]; // 8003EF78
  c->r[5]=R32(c->r[6]+0x00000134u); // 8003EF7C
  c->r[0]=c->r[5]+0x00000001u; // 8003EF80
  W32(c->r[6]+0x00000134u,c->r[0]); // 8003EF84
  c->lr=0x8003EF8Cu; f_8003F568(c); // 8003EF88
  cmps(c,0,(int32_t)c->r[3],0); // 8003EF8C
  c->r[29]=c->r[3]|c->r[3]; // 8003EF90
  if (!crb(c,2)) { goto L_8003EFA8; } // 8003EF94
  c->r[3]=c->r[30]|c->r[30]; // 8003EF98
  c->r[4]=0u+0x00000001u; // 8003EF9C
  c->lr=0x8003EFA4u; f_8003F568(c); // 8003EFA0
  c->r[29]=c->r[3]|c->r[3]; // 8003EFA4
L_8003EFA8:;
  c->r[3]=c->r[30]|c->r[30]; // 8003EFA8
  c->lr=0x8003EFB0u; f_800404B8(c); // 8003EFAC
L_8003EFB0:;
  cmps(c,0,(int32_t)c->r[29],0); // 8003EFB0
  if (!crb(c,2)) { goto L_8003EFE4; } // 8003EFB4
  c->r[3]=c->r[30]|c->r[30]; // 8003EFB8
  c->lr=0x8003EFC0u; f_800407D8(c); // 8003EFBC
  goto L_8003EFE4; // 8003EFC0
L_8003EFC4:;
  c->r[3]=c->r[30]|c->r[30]; // 8003EFC4
  c->r[4]=0u+0x00000001u; // 8003EFC8
  c->lr=0x8003EFD0u; f_8003F000(c); // 8003EFCC
  cmps(c,0,(int32_t)c->r[3],0); // 8003EFD0
  if (!crb(c,2)) { goto L_8003EFE4; } // 8003EFD4
  c->r[3]=c->r[30]|c->r[30]; // 8003EFD8
  c->r[4]=0u+0x00000000u; // 8003EFDC
  c->lr=0x8003EFE4u; f_8003F000(c); // 8003EFE0
L_8003EFE4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8003EFE4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 8003EFE8
  c->r[30]=R32(c->r[1]+0x00000098u); // 8003EFEC
  c->r[29]=R32(c->r[1]+0x00000094u); // 8003EFF0
  c->lr=c->r[0]; // 8003EFF4
  c->r[1]=c->r[1]+0x000000A0u; // 8003EFF8
  return; // 8003EFFC
}

// fn_8003F000
void f_8003F000(Ctx* __restrict c) {
  trace_call(0x8003F000u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003F000
  c->r[12]=c->r[1]|c->r[1]; // 8003F004
  c->r[11]=addc(c,~c->r[11],0xFFFFFEA0u,1); // 8003F008
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F00C
  c->r[0]=c->lr; // 8003F010
  c->r[11]=c->r[12]+0xFFFFFF80u; // 8003F014
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003F018
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003F01C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003F020
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003F024
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003F028
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8003F02C
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8003F030
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003F034
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8003F038
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8003F03C
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8003F040
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003F044
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 8003F048
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 8003F04C
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 8003F050
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 8003F054
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 8003F058
  c->lr=0x8003F060u; f_800C2E44(c); // 8003F05C
  c->r[6]=R32(c->r[3]+0x00000034u); // 8003F060
  c->r[26]=c->r[3]|c->r[3]; // 8003F064
  c->r[5]=0u+0x803D0000u; // 8003F068
  c->r[27]=c->r[4]|c->r[4]; // 8003F06C
  c->r[3]=R32(c->r[6]+0x0000047Cu); // 8003F070
  c->r[5]=c->r[5]+0xFFFFF3C0u; // 8003F074
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[26]=c->ps1[26]=RF32(ea);} // 8003F078
  cmps(c,1,(int32_t)c->r[3],0); // 8003F07C
  if (crb(c,6)) { goto L_8003F09C; } // 8003F080
  {uint32_t ea=c->r[6]+0x00000444u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F084
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F088
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F08C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003F090
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8003F094
  goto L_8003F0A0; // 8003F098
L_8003F09C:;
  {uint32_t ea=c->r[6]+0x00000444u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F09C
L_8003F0A0:;
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F0A0
  cmps(c,1,(int32_t)c->r[4],0); // 8003F0A4
  c->r[5]=R32(c->r[13]+0xFFFFA8A8u); // 8003F0A8
  c->r[4]=c->r[13]+0xFFFFA3B8u; // 8003F0AC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8003F0B0
  c->r[3]=0u+0x0000000Au; // 8003F0B4
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F0B8
  c->r[0]=0u+0x00000000u; // 8003F0BC
  c->r[30]=0u+0x00000000u; // 8003F0C0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003F0C4
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8003F0C8
  c->f[24]=c->ps1[24]=S(c->f[2]+c->f[0]); // 8003F0CC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 8003F0D0
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8003F0D4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003F0D8
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8003F0DC
  if (!crb(c,6)) { goto L_8003F0EC; } // 8003F0E0
  {uint32_t ea=c->r[2]+0xFFFF8658u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003F0E4
  goto L_8003F0F8; // 8003F0E8
L_8003F0EC:;
  c->r[3]=0u+0x803D0000u; // 8003F0EC
  c->r[3]=c->r[3]+0xFFFFF3C0u; // 8003F0F0
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003F0F4
L_8003F0F8:;
  c->r[3]=0u+0x803D0000u; // 8003F0F8
  c->r[3]=c->r[3]+0x0000407Cu; // 8003F0FC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003F100
  c->r[28]=R32(c->r[3]+0x00000010u); // 8003F104
  c->r[12]=R32(c->r[28]+0x00000000u); // 8003F108
  c->r[3]=c->r[28]|c->r[28]; // 8003F10C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003F110
  c->ctr=c->r[12]; // 8003F114
  if (true) { c->lr=0x8003F11Cu; dispatch(c,c->ctr); } // 8003F118
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F11C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8003F120
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F124
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 8003F128
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F12C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8003F130
  c->r[3]=R32(c->r[26]+0x00000034u); // 8003F134
  c->r[4]=R32(c->r[3]+0x0000047Cu); // 8003F138
  cmps(c,1,(int32_t)c->r[4],0); // 8003F13C
  if (crb(c,6)) { goto L_8003F15C; } // 8003F140
  {uint32_t ea=c->r[3]+0x00000440u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F144
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F148
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F14C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003F150
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003F154
  goto L_8003F160; // 8003F158
L_8003F15C:;
  {uint32_t ea=c->r[3]+0x00000440u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F15C
L_8003F160:;
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F160
  c->r[3]=c->r[28]|c->r[28]; // 8003F164
  c->r[12]=R32(c->r[28]+0x00000000u); // 8003F168
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8003F16C
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F170
  c->f[0]=c->ps1[0]=S(c->f[24]-c->f[0]); // 8003F174
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F178
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[2]); // 8003F17C
  c->f[25]=c->ps1[25]=S(c->f[1]*c->f[0]); // 8003F180
  c->ctr=c->r[12]; // 8003F184
  if (true) { c->lr=0x8003F18Cu; dispatch(c,c->ctr); } // 8003F188
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F18C
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F190
  {uint32_t ea=c->r[2]+0xFFFF8694u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F194
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8003F198
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8003F19C
  c->lr=0x8003F1A4u; f_800D2930(c); // 8003F1A0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8003F1A4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8003F1A8
  c->r[3]=c->r[28]|c->r[28]; // 8003F1AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F1B0
  c->f[24]=-c->f[0]; // 8003F1B4
  c->ctr=c->r[12]; // 8003F1B8
  if (true) { c->lr=0x8003F1C0u; dispatch(c,c->ctr); } // 8003F1BC
  c->r[12]=R32(c->r[28]+0x00000000u); // 8003F1C0
  c->f[0]=-c->f[25]; // 8003F1C4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F1C8
  c->r[3]=c->r[28]|c->r[28]; // 8003F1CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F1D0
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[1]); // 8003F1D4
  c->ctr=c->r[12]; // 8003F1D8
  if (true) { c->lr=0x8003F1E0u; dispatch(c,c->ctr); } // 8003F1DC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F1E0
  c->r[3]=c->r[28]|c->r[28]; // 8003F1E4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8003F1E8
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 8003F1EC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[25]);} // 8003F1F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003F1F4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 8003F1F8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[24]);} // 8003F1FC
  c->ctr=c->r[12]; // 8003F200
  if (true) { c->lr=0x8003F208u; dispatch(c,c->ctr); } // 8003F204
  c->r[10]=c->r[1]+0x00000080u; // 8003F208
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003F20C
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003F210
  c->f[7]=c->ps1[7]=S(c->f[29]-c->f[29]); // 8003F214
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 8003F218
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 8003F21C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 8003F220
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F224
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,1,0);} // 8003F228
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003F22C
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,5,ea,1,0);} // 8003F230
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,1,0);} // 8003F234
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[6])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[6])); c->f[4]=t0; c->ps1[4]=t1;} // 8003F238
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,1,0);} // 8003F23C
  {double t0=S(std::fma(c->f[2],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[5],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 8003F240
  {double t0=S(c->f[4]+c->ps1[6]), t1=S(c->ps1[29]); c->f[29]=t0; c->ps1[29]=t1;} // 8003F244
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 8003F248
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[30]); c->f[30]=t0; c->ps1[30]=t1;} // 8003F24C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[29]);} // 8003F250
  c->f[2]=c->ps1[2]=S(c->f[29]); // 8003F254
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[31]); c->f[31]=t0; c->ps1[31]=t1;} // 8003F258
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 8003F25C
  c->f[1]=c->ps1[1]=S(c->f[30]); // 8003F260
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 8003F264
  c->f[0]=c->ps1[0]=S(c->f[31]); // 8003F268
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 8003F26C
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 8003F270
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8003F274
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8003F278
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8003F27C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 8003F280
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8003F284
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8003F288
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F28C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8003F290
  fcmp(c,0,c->f[3],c->f[7]); // 8003F294
  if (crb(c,2)) { goto L_8003F2B8; } // 8003F298
  c->f[1]=frsqrte(c->f[3]); // 8003F29C
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8003F2A0
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F2A4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8003F2A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 8003F2AC
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 8003F2B0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8003F2B4
L_8003F2B8:;
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003F2B8
  c->r[4]=c->r[1]+0x00000090u; // 8003F2BC
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003F2C0
  c->r[3]=0u+0x803D0000u; // 8003F2C4
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003F2C8
  c->r[3]=c->r[3]+0x0000407Cu; // 8003F2CC
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8003F2D0
  c->r[0]=0u+0xFFFFFFFFu; // 8003F2D4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003F2D8
  c->r[9]=c->r[1]+0x00000040u; // 8003F2DC
  {double t0=S(c->f[0]*c->f[26]), t1=S(c->ps1[0]*c->f[26]); c->f[5]=t0; c->ps1[5]=t1;} // 8003F2E0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 8003F2E4
  {double t0=S(c->f[4]*c->f[26]), t1=S(c->ps1[4]*c->f[26]); c->f[6]=t0; c->ps1[6]=t1;} // 8003F2E8
  c->r[8]=c->r[1]+0x00000030u; // 8003F2EC
  {uint32_t ea=c->r[10]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003F2F0
  c->f[1]=c->f[28]; // 8003F2F4
  {double t0=S(c->f[2]+c->f[5]), t1=S(c->ps1[2]+c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8003F2F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003F2FC
  {double t0=S(c->f[3]+c->f[6]), t1=S(c->ps1[3]+c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F300
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003F304
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,2,ea,0,0);} // 8003F308
  c->r[5]=c->r[1]+0x00000070u; // 8003F30C
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,3,ea,1,0);} // 8003F310
  c->r[6]=c->r[1]+0x00000010u; // 8003F314
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003F318
  c->r[7]=c->r[1]+0x000000A0u; // 8003F31C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F320
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F324
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[3]);} // 8003F328
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 8003F32C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8003F330
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,4,ea,1,0);} // 8003F334
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003F338
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,5,ea,0,0);} // 8003F33C
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,6,ea,1,0);} // 8003F340
  c->lr=0x8003F348u; f_80301E34(c); // 8003F344
  cmps(c,1,(int32_t)c->r[3],0); // 8003F348
  if (crb(c,6)) { goto L_8003F4B8; } // 8003F34C
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F350
  c->r[3]=c->r[1]+0x00000060u; // 8003F354
  c->r[29]=0u+0x00000000u; // 8003F358
  c->r[28]=0u+0x00000000u; // 8003F35C
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003F360
  c->r[31]=0u+0x00000000u; // 8003F364
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003F368
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003F36C
  goto L_8003F43C; // 8003F370
L_8003F374:;
  c->r[25]=c->r[3]+c->r[31]; // 8003F374
  c->r[3]=R32(c->r[25]+0x00000030u); // 8003F378
  c->r[3]=R32(c->r[3]+0x00000178u); // 8003F37C
  c->lr=0x8003F384u; f_800420F8(c); // 8003F380
  c->r[4]=R32(c->r[25]+0x00000030u); // 8003F384
  cmps(c,1,(int32_t)c->r[3],0); // 8003F388
  c->r[4]=R32(c->r[4]+0x00000068u); // 8003F38C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8003F390
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8003F394
  c->r[4]=c->r[0]^0x00000001u; // 8003F398
  if (crb(c,6)) { goto L_8003F428; } // 8003F39C
  cmps(c,1,(int32_t)c->r[30],0); // 8003F3A0
  if (!crb(c,6)) { goto L_8003F428; } // 8003F3A4
  c->r[0]=R32(c->r[3]+0x00000138u); // 8003F3A8
  cmps(c,1,(int32_t)c->r[0],41); // 8003F3AC
  if (!crb(c,6)) { goto L_8003F3FC; } // 8003F3B0
  cmps(c,1,(int32_t)c->r[27],1); // 8003F3B4
  if (!crb(c,6)) { goto L_8003F3FC; } // 8003F3B8
  c->r[0]=addc(c,c->r[1],0x000000A0u,0); cr0(c,c->r[0]); // 8003F3BC
  if (crb(c,2)) { goto L_8003F3F4; } // 8003F3C0
  c->r[4]=R32(c->r[1]+0x000000A0u); // 8003F3C4
  cmps(c,1,(int32_t)c->r[4],0); // 8003F3C8
  if (crb(c,6)) { goto L_8003F3E4; } // 8003F3CC
  c->r[3]=R32(c->r[1]+0x000000B0u); // 8003F3D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003F3D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F3D8
  c->ctr=c->r[12]; // 8003F3DC
  if (true) { c->lr=0x8003F3E4u; dispatch(c,c->ctr); } // 8003F3E0
L_8003F3E4:;
  c->r[0]=0u+0x00000000u; // 8003F3E4
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8003F3E8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003F3EC
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8003F3F0
L_8003F3F4:;
  c->r[3]=0u+0x00000000u; // 8003F3F4
  goto L_8003F50C; // 8003F3F8
L_8003F3FC:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 8003F3FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8003F400
  if (crb(c,2)) { goto L_8003F428; } // 8003F404
  {uint32_t ea=c->r[25]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F408
  c->r[29]=c->r[3]|c->r[3]; // 8003F40C
  {uint32_t ea=c->r[25]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F410
  {uint32_t ea=c->r[25]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F414
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 8003F418
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8003F41C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8003F420
  goto L_8003F458; // 8003F424
L_8003F428:;
  cmps(c,1,(int32_t)c->r[4],0); // 8003F428
  if (!crb(c,6)) { goto L_8003F434; } // 8003F42C
  c->r[30]=c->r[30]+0x00000001u; // 8003F430
L_8003F434:;
  c->r[31]=c->r[31]+0x00000040u; // 8003F434
  c->r[28]=c->r[28]+0x00000001u; // 8003F438
L_8003F43C:;
  c->r[3]=R32(c->r[1]+0x000000A0u); // 8003F43C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8003F440
  c->r[0]=c->r[0]-c->r[3]; // 8003F444
  c->r[0]=sraw(c,c->r[0],6); // 8003F448
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8003F44C
  cmpu(c,1,c->r[28],c->r[0]); // 8003F450
  if (crb(c,4)) { IRQCHK(c); goto L_8003F374; } // 8003F454
L_8003F458:;
  cmps(c,1,(int32_t)c->r[29],0); // 8003F458
  if (crb(c,6)) { goto L_8003F4B8; } // 8003F45C
  c->r[0]=R32(c->r[26]+0x00000000u); // 8003F460
  c->r[3]=addc(c,c->r[1],0x000000A0u,0); cr0(c,c->r[3]); // 8003F464
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003F468
  c->r[4]=0u+0x00000001u; // 8003F46C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003F470
  c->r[3]=c->r[3]+c->r[0]; // 8003F474
  W32(c->r[3]+0x00000038u,c->r[4]); // 8003F478
  if (crb(c,2)) { goto L_8003F4B0; } // 8003F47C
  c->r[4]=R32(c->r[1]+0x000000A0u); // 8003F480
  cmps(c,1,(int32_t)c->r[4],0); // 8003F484
  if (crb(c,6)) { goto L_8003F4A0; } // 8003F488
  c->r[3]=R32(c->r[1]+0x000000B0u); // 8003F48C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003F490
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F494
  c->ctr=c->r[12]; // 8003F498
  if (true) { c->lr=0x8003F4A0u; dispatch(c,c->ctr); } // 8003F49C
L_8003F4A0:;
  c->r[0]=0u+0x00000000u; // 8003F4A0
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8003F4A4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003F4A8
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8003F4AC
L_8003F4B0:;
  c->r[3]=0u+0x00000001u; // 8003F4B0
  goto L_8003F50C; // 8003F4B4
L_8003F4B8:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8003F4B8
  c->r[3]=addc(c,c->r[1],0x000000A0u,0); cr0(c,c->r[3]); // 8003F4BC
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 8003F4C0
  c->r[4]=0u+0x00000000u; // 8003F4C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8003F4C8
  c->r[3]=c->r[3]+c->r[0]; // 8003F4CC
  W32(c->r[3]+0x00000038u,c->r[4]); // 8003F4D0
  if (crb(c,2)) { goto L_8003F508; } // 8003F4D4
  c->r[4]=R32(c->r[1]+0x000000A0u); // 8003F4D8
  cmps(c,1,(int32_t)c->r[4],0); // 8003F4DC
  if (crb(c,6)) { goto L_8003F4F8; } // 8003F4E0
  c->r[3]=R32(c->r[1]+0x000000B0u); // 8003F4E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003F4E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F4EC
  c->ctr=c->r[12]; // 8003F4F0
  if (true) { c->lr=0x8003F4F8u; dispatch(c,c->ctr); } // 8003F4F4
L_8003F4F8:;
  c->r[0]=0u+0x00000000u; // 8003F4F8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8003F4FC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8003F500
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8003F504
L_8003F508:;
  c->r[3]=0u+0x00000000u; // 8003F508
L_8003F50C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003F50C
  c->r[11]=c->r[10]+0xFFFFFF80u; // 8003F510
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003F514
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003F518
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003F51C
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003F520
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8003F524
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8003F528
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8003F52C
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8003F530
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8003F534
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8003F538
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 8003F53C
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 8003F540
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 8003F544
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 8003F548
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 8003F54C
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 8003F550
  c->lr=0x8003F558u; f_800C2E90(c); // 8003F554
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003F558
  c->lr=c->r[0]; // 8003F55C
  c->r[1]=c->r[10]|c->r[10]; // 8003F560
  return; // 8003F564
}

// fn_8003F568
void f_8003F568(Ctx* __restrict c) {
  trace_call(0x8003F568u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003F568
  c->r[12]=c->r[1]|c->r[1]; // 8003F56C
  c->r[11]=addc(c,~c->r[11],0xFFFFFE90u,1); // 8003F570
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F574
  c->r[0]=c->lr; // 8003F578
  c->r[11]=c->r[12]+0xFFFFFF80u; // 8003F57C
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003F580
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003F584
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003F588
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003F58C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003F590
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8003F594
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8003F598
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003F59C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8003F5A0
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8003F5A4
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8003F5A8
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003F5AC
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 8003F5B0
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 8003F5B4
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 8003F5B8
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 8003F5BC
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 8003F5C0
  c->lr=0x8003F5C8u; f_800C2E40(c); // 8003F5C4
  c->r[5]=0u+0x803D0000u; // 8003F5C8
  c->r[24]=c->r[3]|c->r[3]; // 8003F5CC
  c->r[5]=c->r[5]+0x00000280u; // 8003F5D0
  c->r[25]=c->r[4]|c->r[4]; // 8003F5D4
  c->r[0]=R32(c->r[5]+0x00000028u); // 8003F5D8
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 8003F5DC
  if (crb(c,2)) { goto L_8003F5EC; } // 8003F5E0
  c->lr=0x8003F5E8u; f_8003FE10(c); // 8003F5E4
  goto L_8003FDB4; // 8003F5E8
L_8003F5EC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8003F5EC
  c->r[3]=0u+0x803D0000u; // 8003F5F0
  c->r[3]=c->r[3]+0xFFFFF3C0u; // 8003F5F4
  c->r[6]=R32(c->r[5]+0x0000047Cu); // 8003F5F8
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[26]=c->ps1[26]=RF32(ea);} // 8003F5FC
  cmps(c,1,(int32_t)c->r[6],0); // 8003F600
  if (crb(c,6)) { goto L_8003F620; } // 8003F604
  {uint32_t ea=c->r[5]+0x00000444u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F608
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F60C
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F610
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003F614
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8003F618
  goto L_8003F624; // 8003F61C
L_8003F620:;
  {uint32_t ea=c->r[5]+0x00000444u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F620
L_8003F624:;
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F624
  cmps(c,1,(int32_t)c->r[4],0); // 8003F628
  c->r[5]=R32(c->r[13]+0xFFFFA8A8u); // 8003F62C
  c->r[4]=c->r[13]+0xFFFFA3B8u; // 8003F630
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8003F634
  c->r[3]=0u+0x0000000Au; // 8003F638
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F63C
  c->r[0]=0u+0x00000000u; // 8003F640
  c->r[29]=0u+0x00000000u; // 8003F644
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003F648
  W32(c->r[1]+0x000000C0u,c->r[4]); // 8003F64C
  c->f[24]=c->ps1[24]=S(c->f[2]+c->f[0]); // 8003F650
  W32(c->r[1]+0x000000BCu,c->r[3]); // 8003F654
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8003F658
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8003F65C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8003F660
  if (!crb(c,6)) { goto L_8003F670; } // 8003F664
  {uint32_t ea=c->r[2]+0xFFFF8658u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003F668
  goto L_8003F67C; // 8003F66C
L_8003F670:;
  c->r[3]=0u+0x803D0000u; // 8003F670
  c->r[3]=c->r[3]+0xFFFFF3C0u; // 8003F674
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003F678
L_8003F67C:;
  c->r[3]=0u+0x803D0000u; // 8003F67C
  c->r[3]=c->r[3]+0x0000407Cu; // 8003F680
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003F684
  c->r[26]=R32(c->r[3]+0x00000010u); // 8003F688
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003F68C
  c->r[3]=c->r[26]|c->r[26]; // 8003F690
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003F694
  c->ctr=c->r[12]; // 8003F698
  if (true) { c->lr=0x8003F6A0u; dispatch(c,c->ctr); } // 8003F69C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F6A0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8003F6A4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F6A8
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8003F6AC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F6B0
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8003F6B4
  c->r[3]=R32(c->r[24]+0x00000034u); // 8003F6B8
  c->r[4]=R32(c->r[3]+0x0000047Cu); // 8003F6BC
  cmps(c,1,(int32_t)c->r[4],0); // 8003F6C0
  if (crb(c,6)) { goto L_8003F6E0; } // 8003F6C4
  {uint32_t ea=c->r[3]+0x00000440u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F6C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F6CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F6D0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003F6D4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003F6D8
  goto L_8003F6E4; // 8003F6DC
L_8003F6E0:;
  {uint32_t ea=c->r[3]+0x00000440u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F6E0
L_8003F6E4:;
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F6E4
  c->r[3]=c->r[26]|c->r[26]; // 8003F6E8
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003F6EC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8003F6F0
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F6F4
  c->f[0]=c->ps1[0]=S(c->f[24]-c->f[0]); // 8003F6F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F6FC
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[2]); // 8003F700
  c->f[25]=c->ps1[25]=S(c->f[1]*c->f[0]); // 8003F704
  c->ctr=c->r[12]; // 8003F708
  if (true) { c->lr=0x8003F710u; dispatch(c,c->ctr); } // 8003F70C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F710
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F714
  {uint32_t ea=c->r[2]+0xFFFF8694u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F718
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8003F71C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8003F720
  c->lr=0x8003F728u; f_800D2930(c); // 8003F724
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8003F728
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003F72C
  c->r[3]=c->r[26]|c->r[26]; // 8003F730
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F734
  c->f[24]=-c->f[0]; // 8003F738
  c->ctr=c->r[12]; // 8003F73C
  if (true) { c->lr=0x8003F744u; dispatch(c,c->ctr); } // 8003F740
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003F744
  c->f[0]=-c->f[25]; // 8003F748
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003F74C
  c->r[3]=c->r[26]|c->r[26]; // 8003F750
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F754
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[1]); // 8003F758
  c->ctr=c->r[12]; // 8003F75C
  if (true) { c->lr=0x8003F764u; dispatch(c,c->ctr); } // 8003F760
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F764
  c->r[3]=c->r[26]|c->r[26]; // 8003F768
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003F76C
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 8003F770
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[25]);} // 8003F774
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003F778
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8003F77C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[24]);} // 8003F780
  c->ctr=c->r[12]; // 8003F784
  if (true) { c->lr=0x8003F78Cu; dispatch(c,c->ctr); } // 8003F788
  c->r[10]=c->r[1]+0x00000090u; // 8003F78C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003F790
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003F794
  c->f[7]=c->ps1[7]=S(c->f[29]-c->f[29]); // 8003F798
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 8003F79C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 8003F7A0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 8003F7A4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F7A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,1,0);} // 8003F7AC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003F7B0
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,5,ea,1,0);} // 8003F7B4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,1,0);} // 8003F7B8
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[6])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[6])); c->f[4]=t0; c->ps1[4]=t1;} // 8003F7BC
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,1,0);} // 8003F7C0
  {double t0=S(std::fma(c->f[2],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[5],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 8003F7C4
  {double t0=S(c->f[4]+c->ps1[6]), t1=S(c->ps1[29]); c->f[29]=t0; c->ps1[29]=t1;} // 8003F7C8
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 8003F7CC
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[30]); c->f[30]=t0; c->ps1[30]=t1;} // 8003F7D0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[29]);} // 8003F7D4
  c->f[2]=c->ps1[2]=S(c->f[29]); // 8003F7D8
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[31]); c->f[31]=t0; c->ps1[31]=t1;} // 8003F7DC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 8003F7E0
  c->f[1]=c->ps1[1]=S(c->f[30]); // 8003F7E4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[2]);} // 8003F7E8
  c->f[0]=c->ps1[0]=S(c->f[31]); // 8003F7EC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 8003F7F0
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 8003F7F4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 8003F7F8
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8003F7FC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8003F800
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 8003F804
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8003F808
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8003F80C
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F810
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8003F814
  fcmp(c,0,c->f[3],c->f[7]); // 8003F818
  if (crb(c,2)) { goto L_8003F83C; } // 8003F81C
  c->f[1]=frsqrte(c->f[3]); // 8003F820
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 8003F824
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F828
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 8003F82C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 8003F830
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 8003F834
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8003F838
L_8003F83C:;
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003F83C
  c->r[4]=c->r[1]+0x000000A0u; // 8003F840
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,1,ea,1,0);} // 8003F844
  c->r[3]=0u+0x803D0000u; // 8003F848
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 8003F84C
  c->r[3]=c->r[3]+0x0000407Cu; // 8003F850
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8003F854
  c->r[0]=0u+0xFFFFFFFFu; // 8003F858
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003F85C
  c->r[9]=c->r[1]+0x00000040u; // 8003F860
  {double t0=S(c->f[0]*c->f[26]), t1=S(c->ps1[0]*c->f[26]); c->f[5]=t0; c->ps1[5]=t1;} // 8003F864
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 8003F868
  {double t0=S(c->f[4]*c->f[26]), t1=S(c->ps1[4]*c->f[26]); c->f[6]=t0; c->ps1[6]=t1;} // 8003F86C
  c->r[8]=c->r[1]+0x00000030u; // 8003F870
  {uint32_t ea=c->r[10]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003F874
  c->f[1]=c->f[28]; // 8003F878
  {double t0=S(c->f[2]+c->f[5]), t1=S(c->ps1[2]+c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8003F87C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003F880
  {double t0=S(c->f[3]+c->f[6]), t1=S(c->ps1[3]+c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 8003F884
  c->r[3]=R32(c->r[3]+0x00000004u); // 8003F888
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,2,ea,0,0);} // 8003F88C
  c->r[5]=c->r[1]+0x00000080u; // 8003F890
  {uint32_t ea=c->r[9]+0x00000008u; psq_store(c,3,ea,1,0);} // 8003F894
  c->r[6]=c->r[1]+0x00000010u; // 8003F898
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 8003F89C
  c->r[7]=c->r[1]+0x000000B0u; // 8003F8A0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003F8A4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F8A8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[3]);} // 8003F8AC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[2]);} // 8003F8B0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8003F8B4
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,4,ea,1,0);} // 8003F8B8
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003F8BC
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,5,ea,0,0);} // 8003F8C0
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,6,ea,1,0);} // 8003F8C4
  c->lr=0x8003F8CCu; f_80301E34(c); // 8003F8C8
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F8CC
  cmps(c,1,(int32_t)c->r[3],0); // 8003F8D0
  c->r[3]=c->r[1]+0x00000070u; // 8003F8D4
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8003F8D8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8003F8DC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8003F8E0
  if (crb(c,6)) { goto L_8003FD14; } // 8003F8E4
  c->r[28]=0u+0x00000000u; // 8003F8E8
  c->r[27]=0u+0x00000000u; // 8003F8EC
  c->r[26]=0u+0x00000000u; // 8003F8F0
  c->r[30]=0u+0x00000000u; // 8003F8F4
  goto L_8003FBF8; // 8003F8F8
L_8003F8FC:;
  c->r[31]=c->r[3]+c->r[30]; // 8003F8FC
  c->r[3]=R32(c->r[31]+0x00000030u); // 8003F900
  c->r[3]=R32(c->r[3]+0x00000178u); // 8003F904
  c->lr=0x8003F90Cu; f_800420F8(c); // 8003F908
  c->r[4]=R32(c->r[31]+0x00000030u); // 8003F90C
  cmps(c,1,(int32_t)c->r[3],0); // 8003F910
  c->r[4]=R32(c->r[4]+0x00000068u); // 8003F914
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8003F918
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8003F91C
  c->r[4]=c->r[0]^0x00000001u; // 8003F920
  if (crb(c,6)) { goto L_8003FBCC; } // 8003F924
  cmps(c,1,(int32_t)c->r[29],0); // 8003F928
  if (!crb(c,6)) { goto L_8003FBCC; } // 8003F92C
  c->r[0]=R32(c->r[3]+0x00000138u); // 8003F930
  cmps(c,1,(int32_t)c->r[0],41); // 8003F934
  if (!crb(c,6)) { goto L_8003F984; } // 8003F938
  cmps(c,1,(int32_t)c->r[25],1); // 8003F93C
  if (!crb(c,6)) { goto L_8003F984; } // 8003F940
  c->r[0]=addc(c,c->r[1],0x000000B0u,0); cr0(c,c->r[0]); // 8003F944
  if (crb(c,2)) { goto L_8003F97C; } // 8003F948
  c->r[4]=R32(c->r[1]+0x000000B0u); // 8003F94C
  cmps(c,1,(int32_t)c->r[4],0); // 8003F950
  if (crb(c,6)) { goto L_8003F96C; } // 8003F954
  c->r[3]=R32(c->r[1]+0x000000C0u); // 8003F958
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003F95C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003F960
  c->ctr=c->r[12]; // 8003F964
  if (true) { c->lr=0x8003F96Cu; dispatch(c,c->ctr); } // 8003F968
L_8003F96C:;
  c->r[0]=0u+0x00000000u; // 8003F96C
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8003F970
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8003F974
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8003F978
L_8003F97C:;
  c->r[3]=0u+0x00000000u; // 8003F97C
  goto L_8003FDB4; // 8003F980
L_8003F984:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 8003F984
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8003F988
  if (crb(c,2)) { goto L_8003FBCC; } // 8003F98C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F990
  c->r[27]=c->r[3]|c->r[3]; // 8003F994
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8003F998
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F99C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8003F9A0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003F9A4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8003F9A8
  c->r[3]=R32(c->r[31]+0x00000034u); // 8003F9AC
  c->r[3]=R32(c->r[3]+0x00000020u); // 8003F9B0
  cmps(c,1,(int32_t)c->r[3],0); // 8003F9B4
  if (crb(c,6)) { goto L_8003FC14; } // 8003F9B8
  c->r[6]=R32(c->r[3]+0x00000004u); // 8003F9BC
  c->r[4]=0u+0x803C0000u; // 8003F9C0
  c->r[4]=c->r[4]+0x00002724u; // 8003F9C4
  c->r[10]=R32(c->r[6]+0x00000000u); // 8003F9C8
  c->r[9]=R32(c->r[6]+0x00000004u); // 8003F9CC
  c->r[3]=R32(c->r[10]+0x00000000u); // 8003F9D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003F9D4
  c->r[5]=c->r[9]|c->r[9]; // 8003F9D8
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8003F9DC
  c->r[8]=R32(c->r[4]+0x00000050u); // 8003F9E0
  c->r[0]=c->r[0]-c->r[3]; // 8003F9E4
  c->r[0]=sraw(c,c->r[0],2); // 8003F9E8
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8003F9EC
  c->r[0]=c->r[3]-c->r[9]; // 8003F9F0
  c->ctr=c->r[0]; // 8003F9F4
  cmpu(c,1,c->r[9],c->r[3]); // 8003F9F8
  if (!crb(c,4)) { goto L_8003FA38; } // 8003F9FC
L_8003FA00:;
  c->r[3]=R32(c->r[10]+0x00000000u); // 8003FA00
  c->r[3]=R32(c->r[3]+c->r[7]); // 8003FA04
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003FA08
  cmpu(c,1,c->r[8],c->r[0]); // 8003FA0C
  if (!crb(c,6)) { goto L_8003FA2C; } // 8003FA10
  W32(c->r[6]+0x00000004u,c->r[5]); // 8003FA14
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003FA18
  c->r[3]=R32(c->r[6]+0x00000000u); // 8003FA1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003FA20
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003FA24
  goto L_8003FA88; // 8003FA28
L_8003FA2C:;
  c->r[7]=c->r[7]+0x00000004u; // 8003FA2C
  c->r[5]=c->r[5]+0x00000001u; // 8003FA30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003FA00; } // 8003FA34
L_8003FA38:;
  c->r[5]=0u+0x00000000u; // 8003FA38
  c->r[4]=0u+0x00000000u; // 8003FA3C
  c->ctr=c->r[9]; // 8003FA40
  cmpu(c,1,c->r[9],0x00000000u); // 8003FA44
  if (!crb(c,5)) { goto L_8003FA84; } // 8003FA48
L_8003FA4C:;
  c->r[3]=R32(c->r[10]+0x00000000u); // 8003FA4C
  c->r[3]=R32(c->r[3]+c->r[4]); // 8003FA50
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003FA54
  cmpu(c,1,c->r[8],c->r[0]); // 8003FA58
  if (!crb(c,6)) { goto L_8003FA78; } // 8003FA5C
  W32(c->r[6]+0x00000004u,c->r[5]); // 8003FA60
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8003FA64
  c->r[3]=R32(c->r[6]+0x00000000u); // 8003FA68
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003FA6C
  c->r[0]=R32(c->r[3]+c->r[0]); // 8003FA70
  goto L_8003FA88; // 8003FA74
L_8003FA78:;
  c->r[4]=c->r[4]+0x00000004u; // 8003FA78
  c->r[5]=c->r[5]+0x00000001u; // 8003FA7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003FA4C; } // 8003FA80
L_8003FA84:;
  c->r[0]=0u+0x00000000u; // 8003FA84
L_8003FA88:;
  cmps(c,1,(int32_t)c->r[0],0); // 8003FA88
  if (crb(c,6)) { goto L_8003FC14; } // 8003FA8C
  c->r[4]=R32(c->r[31]+0x00000034u); // 8003FA90
  c->r[3]=0u+0x803C0000u; // 8003FA94
  c->r[3]=c->r[3]+0x00002724u; // 8003FA98
  c->r[4]=R32(c->r[4]+0x00000020u); // 8003FA9C
  c->r[7]=R32(c->r[3]+0x00000050u); // 8003FAA0
  c->r[5]=R32(c->r[4]+0x00000004u); // 8003FAA4
  c->r[9]=R32(c->r[5]+0x00000000u); // 8003FAA8
  c->r[8]=R32(c->r[5]+0x00000004u); // 8003FAAC
  c->r[3]=R32(c->r[9]+0x00000000u); // 8003FAB0
  c->r[0]=R32(c->r[9]+0x00000004u); // 8003FAB4
  c->r[4]=c->r[8]|c->r[8]; // 8003FAB8
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8003FABC
  c->r[0]=c->r[0]-c->r[3]; // 8003FAC0
  c->r[0]=sraw(c,c->r[0],2); // 8003FAC4
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8003FAC8
  c->r[0]=c->r[3]-c->r[8]; // 8003FACC
  c->ctr=c->r[0]; // 8003FAD0
  cmpu(c,1,c->r[8],c->r[3]); // 8003FAD4
  if (!crb(c,4)) { goto L_8003FB14; } // 8003FAD8
L_8003FADC:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 8003FADC
  c->r[3]=R32(c->r[3]+c->r[6]); // 8003FAE0
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003FAE4
  cmpu(c,1,c->r[7],c->r[0]); // 8003FAE8
  if (!crb(c,6)) { goto L_8003FB08; } // 8003FAEC
  W32(c->r[5]+0x00000004u,c->r[4]); // 8003FAF0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8003FAF4
  c->r[3]=R32(c->r[5]+0x00000000u); // 8003FAF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003FAFC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003FB00
  goto L_8003FB64; // 8003FB04
L_8003FB08:;
  c->r[6]=c->r[6]+0x00000004u; // 8003FB08
  c->r[4]=c->r[4]+0x00000001u; // 8003FB0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003FADC; } // 8003FB10
L_8003FB14:;
  c->r[6]=0u+0x00000000u; // 8003FB14
  c->r[4]=0u+0x00000000u; // 8003FB18
  c->ctr=c->r[8]; // 8003FB1C
  cmpu(c,1,c->r[8],0x00000000u); // 8003FB20
  if (!crb(c,5)) { goto L_8003FB60; } // 8003FB24
L_8003FB28:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 8003FB28
  c->r[3]=R32(c->r[3]+c->r[4]); // 8003FB2C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8003FB30
  cmpu(c,1,c->r[7],c->r[0]); // 8003FB34
  if (!crb(c,6)) { goto L_8003FB54; } // 8003FB38
  W32(c->r[5]+0x00000004u,c->r[6]); // 8003FB3C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8003FB40
  c->r[3]=R32(c->r[5]+0x00000000u); // 8003FB44
  c->r[3]=R32(c->r[3]+0x00000000u); // 8003FB48
  c->r[3]=R32(c->r[3]+c->r[0]); // 8003FB4C
  goto L_8003FB64; // 8003FB50
L_8003FB54:;
  c->r[4]=c->r[4]+0x00000004u; // 8003FB54
  c->r[6]=c->r[6]+0x00000001u; // 8003FB58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8003FB28; } // 8003FB5C
L_8003FB60:;
  c->r[3]=0u+0x00000000u; // 8003FB60
L_8003FB64:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8003FB64
  cmps(c,1,(int32_t)c->r[4],37); // 8003FB68
  if (!crb(c,5)) { goto L_8003FB84; } // 8003FB6C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003FB70
  cmpu(c,1,c->r[0],0x00000001u); // 8003FB74
  if (!crb(c,6)) { goto L_8003FB84; } // 8003FB78
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003FB7C
  goto L_8003FBAC; // 8003FB80
L_8003FB84:;
  cmps(c,1,(int32_t)c->r[4],26); // 8003FB84
  if (crb(c,4)) { goto L_8003FB94; } // 8003FB88
  cmps(c,1,(int32_t)c->r[4],36); // 8003FB8C
  if (!crb(c,6)) { goto L_8003FBA8; } // 8003FB90
L_8003FB94:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8003FB94
  cmpu(c,1,c->r[0],0x00000001u); // 8003FB98
  if (!crb(c,6)) { goto L_8003FBA8; } // 8003FB9C
  c->r[3]=c->r[3]+0x00000008u; // 8003FBA0
  goto L_8003FBAC; // 8003FBA4
L_8003FBA8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8003FBA8
L_8003FBAC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8003FBAC
  cmps(c,1,(int32_t)c->r[25],0); // 8003FBB0
  c->r[3]=0u+0x00000001u; // 8003FBB4
  c->r[28]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8003FBB8
  if (crb(c,6)) { goto L_8003FC14; } // 8003FBBC
  c->r[28]=rotl(c->r[28],0)&0xFFFFFFFBu; // 8003FBC0
  c->r[28]=c->r[28]|0x00000001u; // 8003FBC4
  goto L_8003FC14; // 8003FBC8
L_8003FBCC:;
  cmps(c,1,(int32_t)c->r[4],0); // 8003FBCC
  if (!crb(c,6)) { goto L_8003FBDC; } // 8003FBD0
  c->r[29]=c->r[29]+0x00000001u; // 8003FBD4
  goto L_8003FBF0; // 8003FBD8
L_8003FBDC:;
  cmps(c,1,(int32_t)c->r[25],0); // 8003FBDC
  if (!crb(c,6)) { goto L_8003FBF0; } // 8003FBE0
  c->r[3]=c->r[24]|c->r[24]; // 8003FBE4
  c->r[4]=c->r[31]+0x00000010u; // 8003FBE8
  c->lr=0x8003FBF0u; f_800406E0(c); // 8003FBEC
L_8003FBF0:;
  c->r[30]=c->r[30]+0x00000040u; // 8003FBF0
  c->r[26]=c->r[26]+0x00000001u; // 8003FBF4
L_8003FBF8:;
  c->r[3]=R32(c->r[1]+0x000000B0u); // 8003FBF8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8003FBFC
  c->r[0]=c->r[0]-c->r[3]; // 8003FC00
  c->r[0]=sraw(c,c->r[0],6); // 8003FC04
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8003FC08
  cmpu(c,1,c->r[26],c->r[0]); // 8003FC0C
  if (crb(c,4)) { IRQCHK(c); goto L_8003F8FC; } // 8003FC10
L_8003FC14:;
  cmps(c,1,(int32_t)c->r[27],0); // 8003FC14
  if (crb(c,6)) { goto L_8003FCD0; } // 8003FC18
  c->r[4]=R32(c->r[24]+0x00000000u); // 8003FC1C
  c->r[6]=0u+0x803D0000u; // 8003FC20
  c->r[6]=c->r[6]+0x00000280u; // 8003FC24
  c->r[3]=c->r[27]|c->r[27]; // 8003FC28
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)72); // 8003FC2C
  c->r[5]=c->r[28]|c->r[28]; // 8003FC30
  c->r[7]=c->r[1]+0x00000070u; // 8003FC34
  c->r[8]=c->r[1]+0x000000A0u; // 8003FC38
  c->r[11]=c->r[6]+c->r[0]; // 8003FC3C
  c->r[6]=0u+0x00000001u; // 8003FC40
  c->r[10]=R32(c->r[11]+0x00000138u); // 8003FC44
  c->r[9]=0u+0x00000000u; // 8003FC48
  c->r[0]=c->r[10]+0x00000001u; // 8003FC4C
  W32(c->r[11]+0x00000138u,c->r[0]); // 8003FC50
  c->lr=0x8003FC58u; f_80042034(c); // 8003FC54
  c->r[3]=0u+0x803C0000u; // 8003FC58
  c->r[4]=R32(c->r[24]+0x00000000u); // 8003FC5C
  c->r[6]=c->r[27]|c->r[27]; // 8003FC60
  c->r[7]=c->r[28]|c->r[28]; // 8003FC64
  c->r[3]=c->r[3]+0x000023A0u; // 8003FC68
  c->r[5]=c->r[1]+0x00000080u; // 8003FC6C
  c->r[8]=0u+0x00000001u; // 8003FC70
  c->lr=0x8003FC78u; f_80070FE0(c); // 8003FC74
  cmps(c,1,(int32_t)c->r[25],0); // 8003FC78
  if (!crb(c,6)) { goto L_8003FC90; } // 8003FC7C
  c->r[5]=R32(c->r[27]+0x00000030u); // 8003FC80
  c->r[3]=c->r[24]|c->r[24]; // 8003FC84
  c->r[4]=c->r[1]+0x00000070u; // 8003FC88
  c->lr=0x8003FC90u; f_8004059C(c); // 8003FC8C
L_8003FC90:;
  c->r[0]=addc(c,c->r[1],0x000000B0u,0); cr0(c,c->r[0]); // 8003FC90
  if (crb(c,2)) { goto L_8003FCC8; } // 8003FC94
  c->r[4]=R32(c->r[1]+0x000000B0u); // 8003FC98
  cmps(c,1,(int32_t)c->r[4],0); // 8003FC9C
  if (crb(c,6)) { goto L_8003FCB8; } // 8003FCA0
  c->r[3]=R32(c->r[1]+0x000000C0u); // 8003FCA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003FCA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003FCAC
  c->ctr=c->r[12]; // 8003FCB0
  if (true) { c->lr=0x8003FCB8u; dispatch(c,c->ctr); } // 8003FCB4
L_8003FCB8:;
  c->r[0]=0u+0x00000000u; // 8003FCB8
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8003FCBC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8003FCC0
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8003FCC4
L_8003FCC8:;
  c->r[3]=0u+0x00000001u; // 8003FCC8
  goto L_8003FDB4; // 8003FCCC
L_8003FCD0:;
  c->r[4]=R32(c->r[1]+0x000000B0u); // 8003FCD0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8003FCD4
  c->r[0]=c->r[0]-c->r[4]; // 8003FCD8
  c->r[0]=sraw(c,c->r[0],6); // 8003FCDC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[0]); // 8003FCE0
  if (crb(c,2)) { goto L_8003FD14; } // 8003FCE4
  cmps(c,1,(int32_t)c->r[25],0); // 8003FCE8
  if (!crb(c,6)) { goto L_8003FD14; } // 8003FCEC
  c->r[3]=R32(c->r[4]+0x00000030u); // 8003FCF0
  c->r[5]=0u+0x00000000u; // 8003FCF4
  c->r[3]=R32(c->r[3]+0x00000178u); // 8003FCF8
  cmps(c,1,(int32_t)c->r[3],0); // 8003FCFC
  if (crb(c,6)) { goto L_8003FD08; } // 8003FD00
  c->r[5]=R32(c->r[3]+0x00000030u); // 8003FD04
L_8003FD08:;
  c->r[3]=c->r[24]|c->r[24]; // 8003FD08
  c->r[4]=c->r[4]+0x00000010u; // 8003FD0C
  c->lr=0x8003FD14u; f_8004059C(c); // 8003FD10
L_8003FD14:;
  c->r[3]=0u+0x803C0000u; // 8003FD14
  c->r[4]=0u+0x00000000u; // 8003FD18
  c->r[3]=c->r[3]+0x00002F9Cu; // 8003FD1C
  c->r[5]=0u+0x00000003u; // 8003FD20
  c->lr=0x8003FD28u; f_8004F8BC(c); // 8003FD24
  cmpu(c,1,c->r[3],0x00000001u); // 8003FD28
  if (!crb(c,5)) { goto L_8003FD78; } // 8003FD2C
  c->r[3]=c->r[1]+0x00000060u; // 8003FD30
  c->r[4]=0u+0x00000000u; // 8003FD34
  c->r[5]=0u+0x00000024u; // 8003FD38
  c->r[6]=0u+0x00000000u; // 8003FD3C
  c->lr=0x8003FD44u; f_80362944(c); // 8003FD40
  c->r[4]=0u+0x80370000u; // 8003FD44
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 8003FD48
  c->r[4]=c->r[4]+0x00003D84u; // 8003FD4C
  c->r[5]=c->r[1]+0x00000060u; // 8003FD50
  c->lr=0x8003FD58u; f_8006F7D0(c); // 8003FD54
  c->r[3]=c->r[1]+0x00000060u; // 8003FD58
  c->r[4]=c->r[1]+0x00000070u; // 8003FD5C
  c->r[5]=0u+0x00000000u; // 8003FD60
  c->r[6]=0u+0x00000000u; // 8003FD64
  c->lr=0x8003FD6Cu; f_80362AEC(c); // 8003FD68
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FD6C
  c->r[3]=c->r[1]+0x00000060u; // 8003FD70
  c->lr=0x8003FD78u; f_80362C80(c); // 8003FD74
L_8003FD78:;
  c->r[0]=addc(c,c->r[1],0x000000B0u,0); cr0(c,c->r[0]); // 8003FD78
  if (crb(c,2)) { goto L_8003FDB0; } // 8003FD7C
  c->r[4]=R32(c->r[1]+0x000000B0u); // 8003FD80
  cmps(c,1,(int32_t)c->r[4],0); // 8003FD84
  if (crb(c,6)) { goto L_8003FDA0; } // 8003FD88
  c->r[3]=R32(c->r[1]+0x000000C0u); // 8003FD8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8003FD90
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003FD94
  c->ctr=c->r[12]; // 8003FD98
  if (true) { c->lr=0x8003FDA0u; dispatch(c,c->ctr); } // 8003FD9C
L_8003FDA0:;
  c->r[0]=0u+0x00000000u; // 8003FDA0
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8003FDA4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8003FDA8
  W32(c->r[1]+0x000000B8u,c->r[0]); // 8003FDAC
L_8003FDB0:;
  c->r[3]=0u+0x00000000u; // 8003FDB0
L_8003FDB4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8003FDB4
  c->r[11]=c->r[10]+0xFFFFFF80u; // 8003FDB8
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8003FDBC
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8003FDC0
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8003FDC4
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 8003FDC8
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8003FDCC
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 8003FDD0
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8003FDD4
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 8003FDD8
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8003FDDC
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 8003FDE0
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 8003FDE4
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 8003FDE8
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 8003FDEC
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 8003FDF0
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 8003FDF4
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 8003FDF8
  c->lr=0x8003FE00u; f_800C2E8C(c); // 8003FDFC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8003FE00
  c->lr=c->r[0]; // 8003FE04
  c->r[1]=c->r[10]|c->r[10]; // 8003FE08
  return; // 8003FE0C
}

// fn_8003FE10
void f_8003FE10(Ctx* __restrict c) {
  trace_call(0x8003FE10u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8003FE10
  c->r[12]=c->r[1]|c->r[1]; // 8003FE14
  c->r[11]=addc(c,~c->r[11],0xFFFFFEA0u,1); // 8003FE18
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FE1C
  c->r[0]=c->lr; // 8003FE20
  c->r[11]=c->r[12]+0xFFFFFF80u; // 8003FE24
  W32(c->r[12]+0x00000004u,c->r[0]); // 8003FE28
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 8003FE2C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8003FE30
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8003FE34
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 8003FE38
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 8003FE3C
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 8003FE40
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8003FE44
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 8003FE48
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 8003FE4C
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 8003FE50
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8003FE54
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 8003FE58
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 8003FE5C
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 8003FE60
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 8003FE64
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 8003FE68
  c->lr=0x8003FE70u; f_800C2E48(c); // 8003FE6C
  c->r[5]=R32(c->r[3]+0x00000034u); // 8003FE70
  c->r[27]=c->r[3]|c->r[3]; // 8003FE74
  c->r[4]=0u+0x803D0000u; // 8003FE78
  c->r[3]=R32(c->r[5]+0x0000047Cu); // 8003FE7C
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 8003FE80
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[26]=c->ps1[26]=RF32(ea);} // 8003FE84
  cmps(c,1,(int32_t)c->r[3],0); // 8003FE88
  if (crb(c,6)) { goto L_8003FEA8; } // 8003FE8C
  {uint32_t ea=c->r[5]+0x00000444u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FE90
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FE94
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FE98
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003FE9C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8003FEA0
  goto L_8003FEAC; // 8003FEA4
L_8003FEA8:;
  {uint32_t ea=c->r[5]+0x00000444u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FEA8
L_8003FEAC:;
  c->r[3]=0u+0x803D0000u; // 8003FEAC
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FEB0
  c->r[3]=c->r[3]+0x0000407Cu; // 8003FEB4
  c->r[4]=R32(c->r[13]+0xFFFFA8A8u); // 8003FEB8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8003FEBC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8003FEC0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FEC4
  c->r[26]=R32(c->r[3]+0x00000010u); // 8003FEC8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8003FECC
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[28]=c->ps1[28]=RF32(ea);} // 8003FED0
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003FED4
  c->r[3]=c->r[26]|c->r[26]; // 8003FED8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003FEDC
  c->f[24]=c->ps1[24]=S(c->f[2]+c->f[0]); // 8003FEE0
  c->ctr=c->r[12]; // 8003FEE4
  if (true) { c->lr=0x8003FEECu; dispatch(c,c->ctr); } // 8003FEE8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FEEC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 8003FEF0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FEF4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 8003FEF8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FEFC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8003FF00
  c->r[3]=R32(c->r[27]+0x00000034u); // 8003FF04
  c->r[4]=R32(c->r[3]+0x0000047Cu); // 8003FF08
  cmps(c,1,(int32_t)c->r[4],0); // 8003FF0C
  if (crb(c,6)) { goto L_8003FF2C; } // 8003FF10
  {uint32_t ea=c->r[3]+0x00000440u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FF14
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FF18
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FF1C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003FF20
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8003FF24
  goto L_8003FF30; // 8003FF28
L_8003FF2C:;
  {uint32_t ea=c->r[3]+0x00000440u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FF2C
L_8003FF30:;
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FF30
  c->r[3]=c->r[26]|c->r[26]; // 8003FF34
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003FF38
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 8003FF3C
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FF40
  c->f[0]=c->ps1[0]=S(c->f[24]-c->f[0]); // 8003FF44
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003FF48
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[2]); // 8003FF4C
  c->f[25]=c->ps1[25]=S(c->f[1]*c->f[0]); // 8003FF50
  c->ctr=c->r[12]; // 8003FF54
  if (true) { c->lr=0x8003FF5Cu; dispatch(c,c->ctr); } // 8003FF58
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FF5C
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FF60
  {uint32_t ea=c->r[2]+0xFFFF8694u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FF64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8003FF68
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8003FF6C
  c->lr=0x8003FF74u; f_800D2930(c); // 8003FF70
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8003FF74
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003FF78
  c->r[3]=c->r[26]|c->r[26]; // 8003FF7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003FF80
  c->f[24]=-c->f[0]; // 8003FF84
  c->ctr=c->r[12]; // 8003FF88
  if (true) { c->lr=0x8003FF90u; dispatch(c,c->ctr); } // 8003FF8C
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003FF90
  c->f[0]=-c->f[25]; // 8003FF94
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FF98
  c->r[3]=c->r[26]|c->r[26]; // 8003FF9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8003FFA0
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[1]); // 8003FFA4
  c->ctr=c->r[12]; // 8003FFA8
  if (true) { c->lr=0x8003FFB0u; dispatch(c,c->ctr); } // 8003FFAC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FFB0
  c->r[3]=c->r[26]|c->r[26]; // 8003FFB4
  c->r[12]=R32(c->r[26]+0x00000000u); // 8003FFB8
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 8003FFBC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[25]);} // 8003FFC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8003FFC4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 8003FFC8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[24]);} // 8003FFCC
  c->ctr=c->r[12]; // 8003FFD0
  if (true) { c->lr=0x8003FFD8u; dispatch(c,c->ctr); } // 8003FFD4
  c->r[11]=c->r[1]+0x00000080u; // 8003FFD8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8003FFDC
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,2,ea,0,0);} // 8003FFE0
  c->f[7]=c->ps1[7]=S(c->f[29]-c->f[29]); // 8003FFE4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 8003FFE8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 8003FFEC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 8003FFF0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8003FFF4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,1,0);} // 8003FFF8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8003FFFC
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,5,ea,1,0);} // 80040000
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,1,0);} // 80040004
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[6])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[6])); c->f[4]=t0; c->ps1[4]=t1;} // 80040008
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,1,0);} // 8004000C
  {double t0=S(std::fma(c->f[2],c->f[5],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[5],c->ps1[3])); c->f[2]=t0; c->ps1[2]=t1;} // 80040010
  {double t0=S(c->f[4]+c->ps1[6]), t1=S(c->ps1[29]); c->f[29]=t0; c->ps1[29]=t1;} // 80040014
  {double t0=S(std::fma(c->f[0],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[5],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 80040018
  {double t0=S(c->f[2]+c->ps1[3]), t1=S(c->ps1[30]); c->f[30]=t0; c->ps1[30]=t1;} // 8004001C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[29]);} // 80040020
  c->f[2]=c->ps1[2]=S(c->f[29]); // 80040024
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[31]); c->f[31]=t0; c->ps1[31]=t1;} // 80040028
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 8004002C
  c->f[1]=c->ps1[1]=S(c->f[30]); // 80040030
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80040034
  c->f[0]=c->ps1[0]=S(c->f[31]); // 80040038
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 8004003C
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,4,ea,0,0);} // 80040040
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 80040044
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80040048
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8004004C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 80040050
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80040054
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80040058
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8004005C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80040060
  fcmp(c,0,c->f[3],c->f[7]); // 80040064
  if (crb(c,2)) { goto L_80040088; } // 80040068
  c->f[1]=frsqrte(c->f[3]); // 8004006C
  {uint32_t ea=c->r[2]+0xFFFF865Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80040070
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040074
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 80040078
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 8004007C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[3],-c->f[0])); // 80040080
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80040084
L_80040088:;
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,1,ea,0,0);} // 80040088
  c->r[8]=0u+0x00000000u; // 8004008C
  {uint32_t ea=c->r[11]+0x00000008u; psq_load(c,0,ea,1,0);} // 80040090
  c->r[3]=0u+0x803D0000u; // 80040094
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[5]=t0; c->ps1[5]=t1;} // 80040098
  c->r[4]=c->r[1]+0x00000090u; // 8004009C
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 800400A0
  c->r[3]=c->r[3]+0x0000407Cu; // 800400A4
  c->r[5]=c->r[13]+0xFFFFA3B8u; // 800400A8
  c->r[9]=0u+0x0000000Au; // 800400AC
  {double t0=S(c->f[5]*c->f[26]), t1=S(c->ps1[5]*c->f[26]); c->f[6]=t0; c->ps1[6]=t1;} // 800400B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 800400B4
  {double t0=S(c->f[4]*c->f[26]), t1=S(c->ps1[4]*c->f[26]); c->f[7]=t0; c->ps1[7]=t1;} // 800400B8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800400BC
  c->r[10]=c->r[1]+0x00000030u; // 800400C0
  c->r[0]=0u+0xFFFFFFFDu; // 800400C4
  {double t0=S(c->f[1]+c->f[7]), t1=S(c->ps1[1]+c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 800400C8
  c->r[6]=c->r[1]+0x00000040u; // 800400CC
  {double t0=S(c->f[0]+c->f[6]), t1=S(c->ps1[0]+c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 800400D0
  W32(c->r[1]+0x000000B0u,c->r[5]); // 800400D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800400D8
  c->f[1]=c->f[28]; // 800400DC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,0);} // 800400E0
  c->r[5]=c->r[1]+0x00000070u; // 800400E4
  c->r[7]=c->r[1]+0x000000A0u; // 800400E8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,2,ea,1,0);} // 800400EC
  c->r[6]=c->r[1]+0x00000010u; // 800400F0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800400F4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800400F8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800400FC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[3]);} // 80040100
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 80040104
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80040108
  W32(c->r[1]+0x000000ACu,c->r[9]); // 8004010C
  W32(c->r[1]+0x000000A0u,c->r[8]); // 80040110
  W32(c->r[1]+0x000000A4u,c->r[8]); // 80040114
  W32(c->r[1]+0x000000A8u,c->r[8]); // 80040118
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004011C
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,5,ea,0,0);} // 80040120
  c->r[3]=R32(c->r[3]+0x00000008u); // 80040124
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,4,ea,1,0);} // 80040128
  {uint32_t ea=c->r[10]+0x00000000u; psq_store(c,6,ea,0,0);} // 8004012C
  {uint32_t ea=c->r[10]+0x00000008u; psq_store(c,7,ea,1,0);} // 80040130
  c->lr=0x80040138u; f_80301E34(c); // 80040134
  cmps(c,1,(int32_t)c->r[3],0); // 80040138
  if (crb(c,6)) { goto L_80040420; } // 8004013C
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040140
  c->r[3]=0u+0x803C0000u; // 80040144
  c->r[4]=c->r[1]+0x00000060u; // 80040148
  c->r[28]=0u+0x00000000u; // 8004014C
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80040150
  c->r[31]=c->r[3]+0x00002724u; // 80040154
  c->r[29]=0u+0x00000000u; // 80040158
  c->r[26]=0u+0x00000001u; // 8004015C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80040160
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80040164
  goto L_800403C4; // 80040168
L_8004016C:;
  c->r[30]=c->r[3]+c->r[29]; // 8004016C
  c->r[3]=R32(c->r[30]+0x00000030u); // 80040170
  c->r[3]=R32(c->r[3]+0x00000178u); // 80040174
  c->lr=0x8004017Cu; f_800420F8(c); // 80040178
  cmps(c,1,(int32_t)c->r[3],0); // 8004017C
  c->r[5]=0u+0x00000000u; // 80040180
  if (crb(c,6)) { goto L_800403BC; } // 80040184
  c->r[0]=R32(c->r[3]+0x00000130u); // 80040188
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8004018C
  if (crb(c,2)) { goto L_800403BC; } // 80040190
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040194
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80040198
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004019C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800401A0
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800401A4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800401A8
  c->r[4]=R32(c->r[30]+0x00000034u); // 800401AC
  c->r[4]=R32(c->r[4]+0x00000020u); // 800401B0
  cmps(c,1,(int32_t)c->r[4],0); // 800401B4
  if (crb(c,6)) { goto L_800403A4; } // 800401B8
  c->r[7]=R32(c->r[4]+0x00000004u); // 800401BC
  c->r[9]=R32(c->r[31]+0x00000050u); // 800401C0
  c->r[11]=R32(c->r[7]+0x00000000u); // 800401C4
  c->r[10]=R32(c->r[7]+0x00000004u); // 800401C8
  c->r[4]=R32(c->r[11]+0x00000000u); // 800401CC
  c->r[0]=R32(c->r[11]+0x00000004u); // 800401D0
  c->r[6]=c->r[10]|c->r[10]; // 800401D4
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800401D8
  c->r[0]=c->r[0]-c->r[4]; // 800401DC
  c->r[0]=sraw(c,c->r[0],2); // 800401E0
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 800401E4
  c->r[0]=c->r[4]-c->r[10]; // 800401E8
  c->ctr=c->r[0]; // 800401EC
  cmpu(c,1,c->r[10],c->r[4]); // 800401F0
  if (!crb(c,4)) { goto L_80040230; } // 800401F4
L_800401F8:;
  c->r[4]=R32(c->r[11]+0x00000000u); // 800401F8
  c->r[4]=R32(c->r[4]+c->r[8]); // 800401FC
  c->r[0]=R32(c->r[4]+0x00000014u); // 80040200
  cmpu(c,1,c->r[9],c->r[0]); // 80040204
  if (!crb(c,6)) { goto L_80040224; } // 80040208
  W32(c->r[7]+0x00000004u,c->r[6]); // 8004020C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80040210
  c->r[4]=R32(c->r[7]+0x00000000u); // 80040214
  c->r[4]=R32(c->r[4]+0x00000000u); // 80040218
  c->r[0]=R32(c->r[4]+c->r[0]); // 8004021C
  goto L_80040280; // 80040220
L_80040224:;
  c->r[8]=c->r[8]+0x00000004u; // 80040224
  c->r[6]=c->r[6]+0x00000001u; // 80040228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800401F8; } // 8004022C
L_80040230:;
  c->r[8]=0u+0x00000000u; // 80040230
  c->r[6]=0u+0x00000000u; // 80040234
  c->ctr=c->r[10]; // 80040238
  cmpu(c,1,c->r[10],0x00000000u); // 8004023C
  if (!crb(c,5)) { goto L_8004027C; } // 80040240
L_80040244:;
  c->r[4]=R32(c->r[11]+0x00000000u); // 80040244
  c->r[4]=R32(c->r[4]+c->r[6]); // 80040248
  c->r[0]=R32(c->r[4]+0x00000014u); // 8004024C
  cmpu(c,1,c->r[9],c->r[0]); // 80040250
  if (!crb(c,6)) { goto L_80040270; } // 80040254
  W32(c->r[7]+0x00000004u,c->r[8]); // 80040258
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8004025C
  c->r[4]=R32(c->r[7]+0x00000000u); // 80040260
  c->r[4]=R32(c->r[4]+0x00000000u); // 80040264
  c->r[0]=R32(c->r[4]+c->r[0]); // 80040268
  goto L_80040280; // 8004026C
L_80040270:;
  c->r[6]=c->r[6]+0x00000004u; // 80040270
  c->r[8]=c->r[8]+0x00000001u; // 80040274
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040244; } // 80040278
L_8004027C:;
  c->r[0]=0u+0x00000000u; // 8004027C
L_80040280:;
  cmps(c,1,(int32_t)c->r[0],0); // 80040280
  if (crb(c,6)) { goto L_800403A4; } // 80040284
  c->r[4]=R32(c->r[30]+0x00000034u); // 80040288
  c->r[8]=R32(c->r[31]+0x00000050u); // 8004028C
  c->r[4]=R32(c->r[4]+0x00000020u); // 80040290
  c->r[6]=R32(c->r[4]+0x00000004u); // 80040294
  c->r[10]=R32(c->r[6]+0x00000000u); // 80040298
  c->r[9]=R32(c->r[6]+0x00000004u); // 8004029C
  c->r[4]=R32(c->r[10]+0x00000000u); // 800402A0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800402A4
  c->r[5]=c->r[9]|c->r[9]; // 800402A8
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800402AC
  c->r[0]=c->r[0]-c->r[4]; // 800402B0
  c->r[0]=sraw(c,c->r[0],2); // 800402B4
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 800402B8
  c->r[0]=c->r[4]-c->r[9]; // 800402BC
  c->ctr=c->r[0]; // 800402C0
  cmpu(c,1,c->r[9],c->r[4]); // 800402C4
  if (!crb(c,4)) { goto L_80040304; } // 800402C8
L_800402CC:;
  c->r[4]=R32(c->r[10]+0x00000000u); // 800402CC
  c->r[4]=R32(c->r[4]+c->r[7]); // 800402D0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800402D4
  cmpu(c,1,c->r[8],c->r[0]); // 800402D8
  if (!crb(c,6)) { goto L_800402F8; } // 800402DC
  W32(c->r[6]+0x00000004u,c->r[5]); // 800402E0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800402E4
  c->r[4]=R32(c->r[6]+0x00000000u); // 800402E8
  c->r[4]=R32(c->r[4]+0x00000000u); // 800402EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800402F0
  goto L_80040354; // 800402F4
L_800402F8:;
  c->r[7]=c->r[7]+0x00000004u; // 800402F8
  c->r[5]=c->r[5]+0x00000001u; // 800402FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800402CC; } // 80040300
L_80040304:;
  c->r[7]=0u+0x00000000u; // 80040304
  c->r[5]=0u+0x00000000u; // 80040308
  c->ctr=c->r[9]; // 8004030C
  cmpu(c,1,c->r[9],0x00000000u); // 80040310
  if (!crb(c,5)) { goto L_80040350; } // 80040314
L_80040318:;
  c->r[4]=R32(c->r[10]+0x00000000u); // 80040318
  c->r[4]=R32(c->r[4]+c->r[5]); // 8004031C
  c->r[0]=R32(c->r[4]+0x00000014u); // 80040320
  cmpu(c,1,c->r[8],c->r[0]); // 80040324
  if (!crb(c,6)) { goto L_80040344; } // 80040328
  W32(c->r[6]+0x00000004u,c->r[7]); // 8004032C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80040330
  c->r[4]=R32(c->r[6]+0x00000000u); // 80040334
  c->r[4]=R32(c->r[4]+0x00000000u); // 80040338
  c->r[4]=R32(c->r[4]+c->r[0]); // 8004033C
  goto L_80040354; // 80040340
L_80040344:;
  c->r[5]=c->r[5]+0x00000004u; // 80040344
  c->r[7]=c->r[7]+0x00000001u; // 80040348
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040318; } // 8004034C
L_80040350:;
  c->r[4]=0u+0x00000000u; // 80040350
L_80040354:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 80040354
  cmps(c,1,(int32_t)c->r[5],37); // 80040358
  if (!crb(c,5)) { goto L_80040374; } // 8004035C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80040360
  cmpu(c,1,c->r[0],0x00000001u); // 80040364
  if (!crb(c,6)) { goto L_80040374; } // 80040368
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 8004036C
  goto L_8004039C; // 80040370
L_80040374:;
  cmps(c,1,(int32_t)c->r[5],26); // 80040374
  if (crb(c,4)) { goto L_80040384; } // 80040378
  cmps(c,1,(int32_t)c->r[5],36); // 8004037C
  if (!crb(c,6)) { goto L_80040398; } // 80040380
L_80040384:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 80040384
  cmpu(c,1,c->r[0],0x00000001u); // 80040388
  if (!crb(c,6)) { goto L_80040398; } // 8004038C
  c->r[4]=c->r[4]+0x00000008u; // 80040390
  goto L_8004039C; // 80040394
L_80040398:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 80040398
L_8004039C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004039C
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[26]<<((c->r[0])&31)); // 800403A0
L_800403A4:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 800403A4
  c->r[7]=c->r[1]+0x00000060u; // 800403A8
  c->r[8]=c->r[1]+0x00000090u; // 800403AC
  c->r[6]=0u+0x00000063u; // 800403B0
  c->r[9]=0u+0x00000000u; // 800403B4
  c->lr=0x800403BCu; f_80042034(c); // 800403B8
L_800403BC:;
  c->r[29]=c->r[29]+0x00000040u; // 800403BC
  c->r[28]=c->r[28]+0x00000001u; // 800403C0
L_800403C4:;
  c->r[3]=R32(c->r[1]+0x000000A0u); // 800403C4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800403C8
  c->r[0]=c->r[0]-c->r[3]; // 800403CC
  c->r[0]=sraw(c,c->r[0],6); // 800403D0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800403D4
  cmpu(c,1,c->r[28],c->r[0]); // 800403D8
  if (crb(c,4)) { IRQCHK(c); goto L_8004016C; } // 800403DC
  c->r[0]=addc(c,c->r[1],0x000000A0u,0); cr0(c,c->r[0]); // 800403E0
  if (crb(c,2)) { goto L_80040418; } // 800403E4
  c->r[4]=R32(c->r[1]+0x000000A0u); // 800403E8
  cmps(c,1,(int32_t)c->r[4],0); // 800403EC
  if (crb(c,6)) { goto L_80040408; } // 800403F0
  c->r[3]=R32(c->r[1]+0x000000B0u); // 800403F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800403F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800403FC
  c->ctr=c->r[12]; // 80040400
  if (true) { c->lr=0x80040408u; dispatch(c,c->ctr); } // 80040404
L_80040408:;
  c->r[0]=0u+0x00000000u; // 80040408
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8004040C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80040410
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80040414
L_80040418:;
  c->r[3]=0u+0x00000001u; // 80040418
  goto L_8004045C; // 8004041C
L_80040420:;
  c->r[0]=addc(c,c->r[1],0x000000A0u,0); cr0(c,c->r[0]); // 80040420
  if (crb(c,2)) { goto L_80040458; } // 80040424
  c->r[4]=R32(c->r[1]+0x000000A0u); // 80040428
  cmps(c,1,(int32_t)c->r[4],0); // 8004042C
  if (crb(c,6)) { goto L_80040448; } // 80040430
  c->r[3]=R32(c->r[1]+0x000000B0u); // 80040434
  c->r[12]=R32(c->r[3]+0x00000000u); // 80040438
  c->r[12]=R32(c->r[12]+0x00000010u); // 8004043C
  c->ctr=c->r[12]; // 80040440
  if (true) { c->lr=0x80040448u; dispatch(c,c->ctr); } // 80040444
L_80040448:;
  c->r[0]=0u+0x00000000u; // 80040448
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8004044C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80040450
  W32(c->r[1]+0x000000A8u,c->r[0]); // 80040454
L_80040458:;
  c->r[3]=0u+0x00000000u; // 80040458
L_8004045C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004045C
  c->r[11]=c->r[10]+0xFFFFFF80u; // 80040460
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80040464
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80040468
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 8004046C
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80040470
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80040474
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80040478
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 8004047C
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80040480
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80040484
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80040488
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 8004048C
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80040490
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 80040494
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 80040498
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 8004049C
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 800404A0
  c->lr=0x800404A8u; f_800C2E94(c); // 800404A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800404A8
  c->lr=c->r[0]; // 800404AC
  c->r[1]=c->r[10]|c->r[10]; // 800404B0
  return; // 800404B4
}

// fn_800404B8
void f_800404B8(Ctx* __restrict c) {
  trace_call(0x800404B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800404B8
  c->r[0]=c->lr; // 800404BC
  c->r[4]=0u+0x00000000u; // 800404C0
  c->r[5]=0u+0x00000024u; // 800404C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800404C8
  c->r[6]=0u+0x00000000u; // 800404CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800404D0
  c->r[31]=c->r[3]|c->r[3]; // 800404D4
  c->r[3]=c->r[1]+0x00000008u; // 800404D8
  c->lr=0x800404E0u; f_80362944(c); // 800404DC
  c->r[0]=R32(c->r[31]+0x00000000u); // 800404E0
  c->r[4]=0u+0x80380000u; // 800404E4
  c->r[4]=c->r[4]+0x00004858u; // 800404E8
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 800404EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800404F0
  c->r[5]=c->r[1]+0x00000008u; // 800404F4
  c->r[4]=R32(c->r[4]+c->r[0]); // 800404F8
  c->lr=0x80040500u; f_8006F7D0(c); // 800404FC
  c->r[3]=0u+0x803D0000u; // 80040500
  c->r[3]=c->r[3]+0x00000280u; // 80040504
  c->r[0]=R32(c->r[3]+0x00001A88u); // 80040508
  cmps(c,0,(int32_t)c->r[0],1); // 8004050C
  if (crb(c,2)) { goto L_80040530; } // 80040510
  cmps(c,0,(int32_t)c->r[0],2); // 80040514
  if (crb(c,2)) { goto L_80040544; } // 80040518
  cmps(c,0,(int32_t)c->r[0],3); // 8004051C
  if (crb(c,2)) { goto L_8004055C; } // 80040520
  cmps(c,0,(int32_t)c->r[0],4); // 80040524
  if (crb(c,2)) { goto L_80040574; } // 80040528
  goto L_80040588; // 8004052C
L_80040530:;
  c->r[4]=0u+0x803D0000u; // 80040530
  c->r[3]=c->r[1]+0x00000008u; // 80040534
  {uint32_t ea=c->r[4]+0xFFFFF4A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040538
  c->lr=0x80040540u; f_80362C80(c); // 8004053C
  goto L_80040588; // 80040540
L_80040544:;
  c->r[4]=0u+0x803D0000u; // 80040544
  c->r[3]=c->r[1]+0x00000008u; // 80040548
  c->r[4]=c->r[4]+0xFFFFF4A8u; // 8004054C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040550
  c->lr=0x80040558u; f_80362C80(c); // 80040554
  goto L_80040588; // 80040558
L_8004055C:;
  c->r[4]=0u+0x803D0000u; // 8004055C
  c->r[3]=c->r[1]+0x00000008u; // 80040560
  c->r[4]=c->r[4]+0xFFFFF4A8u; // 80040564
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040568
  c->lr=0x80040570u; f_80362C80(c); // 8004056C
  goto L_80040588; // 80040570
L_80040574:;
  c->r[4]=0u+0x803D0000u; // 80040574
  c->r[3]=c->r[1]+0x00000008u; // 80040578
  c->r[4]=c->r[4]+0xFFFFF4A8u; // 8004057C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80040580
  c->lr=0x80040588u; f_80362C80(c); // 80040584
L_80040588:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040588
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004058C
  c->lr=c->r[0]; // 80040590
  c->r[1]=c->r[1]+0x00000020u; // 80040594
  return; // 80040598
}

// fn_8004059C
void f_8004059C(Ctx* __restrict c) {
  trace_call(0x8004059Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004059C
  c->r[0]=c->lr; // 800405A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800405A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800405A8
  c->r[31]=0u+0x00000000u; // 800405AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800405B0
  c->r[30]=c->r[5]|c->r[5]; // 800405B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800405B8
  cmps(c,0,(int32_t)c->r[0],0); // 800405BC
  if (crb(c,2)) { goto L_800405E0; } // 800405C0
  cmps(c,0,(int32_t)c->r[0],1); // 800405C4
  if (crb(c,2)) { goto L_80040608; } // 800405C8
  cmps(c,0,(int32_t)c->r[0],2); // 800405CC
  if (crb(c,2)) { goto L_80040630; } // 800405D0
  cmps(c,0,(int32_t)c->r[0],3); // 800405D4
  if (crb(c,2)) { goto L_80040658; } // 800405D8
  goto L_8004067C; // 800405DC
L_800405E0:;
  c->r[7]=0u+0x80370000u; // 800405E0
  c->r[3]=R32(c->r[13]+0xFFFF9484u); // 800405E4
  c->r[7]=c->r[7]+0x00003D84u; // 800405E8
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 800405EC
  c->r[5]=c->r[4]|c->r[4]; // 800405F0
  c->r[6]=0u+0x00000000u; // 800405F4
  c->r[4]=c->r[7]+0x00000020u; // 800405F8
  c->lr=0x80040600u; f_800727D0(c); // 800405FC
  c->r[31]=c->r[3]|c->r[3]; // 80040600
  goto L_8004067C; // 80040604
L_80040608:;
  c->r[7]=0u+0x80370000u; // 80040608
  c->r[3]=R32(c->r[13]+0xFFFF9484u); // 8004060C
  c->r[7]=c->r[7]+0x00003D84u; // 80040610
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040614
  c->r[5]=c->r[4]|c->r[4]; // 80040618
  c->r[6]=0u+0x00000000u; // 8004061C
  c->r[4]=c->r[7]+0x0000003Cu; // 80040620
  c->lr=0x80040628u; f_800727D0(c); // 80040624
  c->r[31]=c->r[3]|c->r[3]; // 80040628
  goto L_8004067C; // 8004062C
L_80040630:;
  c->r[7]=0u+0x80370000u; // 80040630
  c->r[3]=R32(c->r[13]+0xFFFF9484u); // 80040634
  c->r[7]=c->r[7]+0x00003D84u; // 80040638
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004063C
  c->r[5]=c->r[4]|c->r[4]; // 80040640
  c->r[6]=0u+0x00000000u; // 80040644
  c->r[4]=c->r[7]+0x00000053u; // 80040648
  c->lr=0x80040650u; f_800727D0(c); // 8004064C
  c->r[31]=c->r[3]|c->r[3]; // 80040650
  goto L_8004067C; // 80040654
L_80040658:;
  c->r[7]=0u+0x80370000u; // 80040658
  c->r[3]=R32(c->r[13]+0xFFFF9484u); // 8004065C
  c->r[7]=c->r[7]+0x00003D84u; // 80040660
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040664
  c->r[5]=c->r[4]|c->r[4]; // 80040668
  c->r[6]=0u+0x00000000u; // 8004066C
  c->r[4]=c->r[7]+0x00000069u; // 80040670
  c->lr=0x80040678u; f_800727D0(c); // 80040674
  c->r[31]=c->r[3]|c->r[3]; // 80040678
L_8004067C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004067C
  if (crb(c,2)) { goto L_800406C8; } // 80040680
  cmps(c,0,(int32_t)c->r[30],0); // 80040684
  if (crb(c,2)) { goto L_800406C8; } // 80040688
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8004068C
  cmps(c,0,(int32_t)c->r[3],0); // 80040690
  if (crb(c,2)) { goto L_800406C8; } // 80040694
  c->r[0]=R32(c->r[3]+0x00000024u); // 80040698
  cmps(c,0,(int32_t)c->r[0],4); // 8004069C
  if (!crb(c,2)) { goto L_800406C8; } // 800406A0
  c->r[3]=c->r[31]|c->r[31]; // 800406A4
  c->r[4]=c->r[30]|c->r[30]; // 800406A8
  c->lr=0x800406B0u; f_800722E0(c); // 800406AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 800406B0
  c->r[4]=0u+0x00000001u; // 800406B4
  c->r[0]=0u+0x00000000u; // 800406B8
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800406BC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800406C0
  W32(c->r[31]+0x00000014u,c->r[0]); // 800406C4
L_800406C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800406C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800406CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800406D0
  c->lr=c->r[0]; // 800406D4
  c->r[1]=c->r[1]+0x00000010u; // 800406D8
  return; // 800406DC
}

// fn_800406E0
void f_800406E0(Ctx* __restrict c) {
  trace_call(0x800406E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800406E0
  c->r[0]=c->lr; // 800406E4
  c->r[5]=0u+0x00000024u; // 800406E8
  c->r[6]=0u+0x00000000u; // 800406EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800406F0
  c->r[3]=c->r[1]+0x00000008u; // 800406F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800406F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800406FC
  c->r[30]=c->r[4]|c->r[4]; // 80040700
  c->r[4]=0u+0x00000000u; // 80040704
  c->lr=0x8004070Cu; f_80362944(c); // 80040708
  c->r[31]=0u+0x80370000u; // 8004070C
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 80040710
  c->r[31]=c->r[31]+0x00003D84u; // 80040714
  c->r[5]=c->r[1]+0x00000008u; // 80040718
  c->r[4]=c->r[31]+0x00000080u; // 8004071C
  c->lr=0x80040724u; f_8006F7E8(c); // 80040720
  c->r[4]=c->r[30]|c->r[30]; // 80040724
  c->r[3]=c->r[1]+0x00000008u; // 80040728
  c->r[5]=0u+0x00000000u; // 8004072C
  c->r[6]=0u+0x00000000u; // 80040730
  c->lr=0x80040738u; f_80362AEC(c); // 80040734
  c->r[3]=R32(c->r[13]+0xFFFF9484u); // 80040738
  c->r[5]=c->r[30]|c->r[30]; // 8004073C
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040740
  c->r[4]=c->r[31]+0x0000009Au; // 80040744
  c->r[6]=0u+0x00000000u; // 80040748
  c->lr=0x80040750u; f_800727D0(c); // 8004074C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80040754
  c->r[30]=R32(c->r[1]+0x00000018u); // 80040758
  c->lr=c->r[0]; // 8004075C
  c->r[1]=c->r[1]+0x00000020u; // 80040760
  return; // 80040764
}

// fn_80040768
void f_80040768(Ctx* __restrict c) {
  trace_call(0x80040768u);
  f_800407D8(c); return; // 80040768
}

// fn_8004076C
void f_8004076C(Ctx* __restrict c) {
  trace_call(0x8004076Cu);
  c->r[0]=0u+0x00000000u; // 8004076C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80040770
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80040774
  f_800407D8(c); return; // 80040778
}

// fn_8004077C
void f_8004077C(Ctx* __restrict c) {
  trace_call(0x8004077Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8004077C
  c->r[0]=c->r[0]+c->r[4]; cr0(c,c->r[0]); // 80040780
  W32(c->r[3]+0x00000018u,c->r[0]); // 80040784
  if (!crb(c,0)) { goto L_80040794; } // 80040788
  c->r[0]=0u+0x00000000u; // 8004078C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80040790
L_80040794:;
  c->r[4]=0u+0x000F0000u; // 80040794
  c->r[5]=R32(c->r[3]+0x00000018u); // 80040798
  c->r[0]=c->r[4]+0x0000423Fu; // 8004079C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800407A0
  if (!crb(c,1)) { goto L_800407AC; } // 800407A4
  W32(c->r[3]+0x00000018u,c->r[0]); // 800407A8
L_800407AC:;
  c->r[4]=0u+0x803D0000u; // 800407AC
  c->r[4]=c->r[4]+0x00000280u; // 800407B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800407B4
  cmps(c,0,(int32_t)c->r[0],1); // 800407B8
  if (!crb(c,2)) return; // 800407BC
  c->r[4]=R32(c->r[3]+0x00000018u); // 800407C0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800407C4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800407C8
  if (!crb(c,1)) return; // 800407CC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800407D0
  return; // 800407D4
}

// fn_800407D8
void f_800407D8(Ctx* __restrict c) {
  trace_call(0x800407D8u);
  c->r[4]=0u+0x803D0000u; // 800407D8
  c->r[3]=c->r[3]+0x00000020u; // 800407DC
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 800407E0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800407E4
  f_8003CDAC(c); return; // 800407E8
}

// fn_800407EC
void f_800407EC(Ctx* __restrict c) {
  trace_call(0x800407ECu);
  c->r[6]=0u+0x00000000u; // 800407EC
  c->r[5]=0u+0x803D0000u; // 800407F0
  W32(c->r[3]+0x00000038u,c->r[6]); // 800407F4
  c->r[5]=c->r[5]+0xFFFFF3C0u; // 800407F8
  c->r[4]=0u+0x803D0000u; // 800407FC
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040800
  c->r[0]=R32(c->r[5]+0x000000A0u); // 80040804
  c->r[4]=c->r[4]+0x00000280u; // 80040808
  W32(c->r[3]+0x00000040u,c->r[0]); // 8004080C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80040810
  W32(c->r[3]+0x00000044u,c->r[6]); // 80040814
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040818
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8004081C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80040820
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80040824
  W32(c->r[4]+0x00001A9Cu,c->r[6]); // 80040828
  return; // 8004082C
}

// fn_80040830
void f_80040830(Ctx* __restrict c) {
  trace_call(0x80040830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040830
  c->r[0]=c->lr; // 80040834
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040838
  c->r[0]=R32(c->r[3]+0x00000038u); // 8004083C
  cmps(c,0,(int32_t)c->r[0],0); // 80040840
  if (crb(c,2)) { goto L_80040850; } // 80040844
  c->r[3]=0u+0x00000001u; // 80040848
  goto L_800408C8; // 8004084C
L_80040850:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 80040850
  cmps(c,0,(int32_t)c->r[0],0); // 80040854
  if (crb(c,2)) { goto L_80040894; } // 80040858
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004085C
  W32(c->r[3]+0x00000040u,c->r[0]); // 80040860
  if (!crb(c,2)) { goto L_8004088C; } // 80040864
  c->r[0]=R32(c->r[3]+0x00000000u); // 80040868
  c->r[3]=0u+0x803D0000u; // 8004086C
  c->r[4]=R32(c->r[13]+0xFFFF9480u); // 80040870
  c->r[3]=c->r[3]+0x00000280u; // 80040874
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80040878
  c->r[5]=0u+0x00000001u; // 8004087C
  c->r[4]=c->r[4]+c->r[0]; // 80040880
  W32(c->r[4]+0x0000003Cu,c->r[5]); // 80040884
  W32(c->r[3]+0x00001A9Cu,c->r[5]); // 80040888
L_8004088C:;
  c->r[3]=0u+0x00000001u; // 8004088C
  goto L_800408C8; // 80040890
L_80040894:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80040894
  c->r[3]=0u+0x80370000u; // 80040898
  c->r[3]=c->r[3]+0x00003D84u; // 8004089C
  c->r[6]=R32(c->r[13]+0xFFFF9480u); // 800408A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800408A4
  c->r[7]=0u+0x00000001u; // 800408A8
  c->r[4]=c->r[3]+0x00000147u; // 800408AC
  c->r[5]=0u+0x00000000u; // 800408B0
  c->r[3]=c->r[6]+c->r[0]; // 800408B4
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 800408B8
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 800408BC
  c->lr=0x800408C4u; f_8006F7D0(c); // 800408C0
  c->r[3]=0u+0x00000000u; // 800408C4
L_800408C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800408C8
  c->lr=c->r[0]; // 800408CC
  c->r[1]=c->r[1]+0x00000010u; // 800408D0
  return; // 800408D4
}

// fn_800408D8
void f_800408D8(Ctx* __restrict c) {
  trace_call(0x800408D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800408D8
  c->r[0]=c->lr; // 800408DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800408E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800408E4
  c->r[31]=c->r[3]|c->r[3]; // 800408E8
  c->r[0]=R32(c->r[3]+0x00000040u); // 800408EC
  cmps(c,0,(int32_t)c->r[0],0); // 800408F0
  if (!crb(c,2)) { goto L_80040924; } // 800408F4
  c->r[4]=0u+0x803D0000u; // 800408F8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800408FC
  c->r[4]=c->r[4]+0x0000407Cu; // 80040900
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040904
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80040908
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004090C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80040910
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80040914
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 80040918
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8004091C
  goto L_80040934; // 80040920
L_80040924:;
  c->r[4]=0u+0x803D0000u; // 80040924
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 80040928
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004092C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80040930
L_80040934:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 80040934
  cmps(c,0,(int32_t)c->r[0],0); // 80040938
  if (!crb(c,2)) { goto L_80040970; } // 8004093C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040940
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040944
  fcmp(c,0,c->f[1],c->f[0]); // 80040948
  if (!crb(c,2)) { goto L_80040970; } // 8004094C
  c->r[3]=c->r[31]|c->r[31]; // 80040950
  c->lr=0x80040958u; f_80040984(c); // 80040954
  c->r[0]=R32(c->r[31]+0x00000000u); // 80040958
  c->r[4]=0u+0x00000000u; // 8004095C
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 80040960
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80040964
  c->r[3]=c->r[3]+c->r[0]; // 80040968
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8004096C
L_80040970:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040974
  c->lr=c->r[0]; // 80040978
  c->r[1]=c->r[1]+0x00000010u; // 8004097C
  return; // 80040980
}

// fn_80040984
void f_80040984(Ctx* __restrict c) {
  trace_call(0x80040984u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040984
  c->r[0]=c->lr; // 80040988
  c->r[4]=0u+0x803D0000u; // 8004098C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80040990
  c->r[4]=c->r[4]+0xFFFFF3C0u; // 80040994
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80040998
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8004099C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800409A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800409A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800409A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800409AC
  c->r[30]=c->r[3]|c->r[3]; // 800409B0
  c->r[0]=R32(c->r[3]+0x00000044u); // 800409B4
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800409B8
  cmps(c,0,(int32_t)c->r[0],0); // 800409BC
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[30]=c->ps1[30]=RF32(ea);} // 800409C0
  if (crb(c,2)) { goto L_80040A1C; } // 800409C4
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800409C8
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800409CC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800409D0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800409D4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 800409D8
  fcmp(c,0,c->f[1],c->f[0]); // 800409DC
  if (!crb(c,1)) { goto L_80040A00; } // 800409E0
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[30]=c->ps1[30]=RF32(ea);} // 800409E4
  c->r[4]=0u+0x00000000u; // 800409E8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800409EC
  c->f[31]=c->f[30]; // 800409F0
  W32(c->r[3]+0x00000044u,c->r[4]); // 800409F4
  W32(c->r[3]+0x00000040u,c->r[0]); // 800409F8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800409FC
L_80040A00:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A00
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A04
  {uint32_t ea=c->r[2]+0xFFFF86A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040A08
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80040A0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80040A10
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80040A14
  goto L_80040A50; // 80040A18
L_80040A1C:;
  {uint32_t ea=c->r[2]+0xFFFF8650u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040A1C
  c->r[0]=0u+0x00000001u; // 80040A20
  W32(c->r[3]+0x00000044u,c->r[0]); // 80040A24
  c->r[4]=0u+0x80370000u; // 80040A28
  c->r[4]=c->r[4]+0x00003D84u; // 80040A2C
  c->r[5]=0u+0x00000000u; // 80040A30
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80040A34
  c->r[4]=c->r[4]+0x0000015Du; // 80040A38
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80040A3C
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 80040A40
  c->lr=0x80040A48u; f_8006F7D0(c); // 80040A44
  c->r[3]=c->r[30]|c->r[30]; // 80040A48
  c->lr=0x80040A50u; f_800407D8(c); // 80040A4C
L_80040A50:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80040A50
  c->f[1]=c->f[31]; // 80040A54
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 80040A58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80040A5C
  c->r[3]=c->r[3]+c->r[0]; // 80040A60
  c->r[31]=c->r[3]+0x0000000Cu; // 80040A64
  c->r[3]=c->r[31]|c->r[31]; // 80040A68
  c->lr=0x80040A70u; f_80061740(c); // 80040A6C
  c->f[1]=c->f[30]; // 80040A70
  c->r[3]=c->r[31]|c->r[31]; // 80040A74
  c->lr=0x80040A7Cu; f_800616DC(c); // 80040A78
  {uint32_t ea=c->r[30]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A7C
  c->r[3]=c->r[31]|c->r[31]; // 80040A80
  c->lr=0x80040A88u; f_80061618(c); // 80040A84
  c->r[3]=0u+0x803D0000u; // 80040A88
  c->r[3]=c->r[3]+0x00004234u; // 80040A8C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80040A90
  cmps(c,0,(int32_t)c->r[0],1); // 80040A94
  if (!crb(c,2)) { goto L_80040AB8; } // 80040A98
  c->r[0]=R32(c->r[3]+0x00000018u); // 80040A9C
  cmpu(c,0,c->r[0],0x00000001u); // 80040AA0
  if (!crb(c,2)) { goto L_80040AB8; } // 80040AA4
  c->r[3]=0u+0x803D0000u; // 80040AA8
  c->r[0]=0u+0x00000001u; // 80040AAC
  c->r[3]=c->r[3]+0x00000280u; // 80040AB0
  W32(c->r[3]+0x00001A98u,c->r[0]); // 80040AB4
L_80040AB8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80040AB8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80040ABC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80040AC0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80040AC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80040AC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040ACC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80040AD0
  c->lr=c->r[0]; // 80040AD4
  c->r[1]=c->r[1]+0x00000030u; // 80040AD8
  return; // 80040ADC
}

// fn_80040AE0
void f_80040AE0(Ctx* __restrict c) {
  trace_call(0x80040AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040AE0
  c->r[0]=c->lr; // 80040AE4
  {uint32_t ea=c->r[2]+0xFFFF86A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80040AEC
  c->r[0]=0u+0x00000000u; // 80040AF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80040AF4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80040AF8
  {uint32_t ea=c->r[2]+0xFFFF8654u; c->f[31]=c->ps1[31]=RF32(ea);} // 80040AFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040B00
  c->f[1]=c->f[31]; // 80040B04
  W32(c->r[1]+0x00000008u,c->r[30]); // 80040B08
  c->r[30]=c->r[3]|c->r[3]; // 80040B0C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 80040B10
  {uint32_t ea=c->r[3]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040B14
  c->r[5]=R32(c->r[3]+0x00000000u); // 80040B18
  W32(c->r[3]+0x00000044u,c->r[0]); // 80040B1C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 80040B20
  W32(c->r[3]+0x00000040u,c->r[4]); // 80040B24
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 80040B28
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80040B2C
  c->r[3]=R32(c->r[13]+0xFFFF9480u); // 80040B30
  c->r[3]=c->r[3]+c->r[0]; // 80040B34
  c->r[31]=c->r[3]+0x0000000Cu; // 80040B38
  c->r[3]=c->r[31]|c->r[31]; // 80040B3C
  c->lr=0x80040B44u; f_80061740(c); // 80040B40
  c->f[1]=c->f[31]; // 80040B44
  c->r[3]=c->r[31]|c->r[31]; // 80040B48
  c->lr=0x80040B50u; f_800616DC(c); // 80040B4C
  {uint32_t ea=c->r[30]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040B50
  c->r[3]=c->r[31]|c->r[31]; // 80040B54
  c->lr=0x80040B5Cu; f_80061618(c); // 80040B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040B5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80040B60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80040B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040B68
  c->r[30]=R32(c->r[1]+0x00000008u); // 80040B6C
  c->lr=c->r[0]; // 80040B70
  c->r[1]=c->r[1]+0x00000020u; // 80040B74
  return; // 80040B78
}

// fn_80040B7C
void f_80040B7C(Ctx* __restrict c) {
  trace_call(0x80040B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040B7C
  c->r[0]=c->lr; // 80040B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040B88
  c->r[31]=c->r[3]|c->r[3]; // 80040B8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80040B90
  c->lr=0x80040B98u; f_8030B29C(c); // 80040B94
  c->r[3]=0u+0x80380000u; // 80040B98
  c->r[0]=0u+0x00000000u; // 80040B9C
  c->r[3]=c->r[3]+0x000048A8u; // 80040BA0
  W32(c->r[31]+0x00000014u,c->r[3]); // 80040BA4
  c->r[3]=c->r[31]|c->r[31]; // 80040BA8
  c->r[4]=c->r[13]+0xFFFF951Cu; // 80040BAC
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80040BB0
  c->lr=0x80040BB8u; f_8030BE60(c); // 80040BB4
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040BB8
  W32(c->r[31]+0x000000CCu,c->r[3]); // 80040BBC
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 80040BC0
  c->r[5]=R32(c->r[3]+0x00000018u); // 80040BC4
  c->r[7]=R32(c->r[13]+0xFFFF9518u); // 80040BC8
  c->r[9]=R32(c->r[5]+0x00000000u); // 80040BCC
  c->r[8]=R32(c->r[5]+0x00000004u); // 80040BD0
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040BD4
  c->r[0]=R32(c->r[9]+0x00000004u); // 80040BD8
  c->r[4]=c->r[8]|c->r[8]; // 80040BDC
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80040BE0
  c->r[0]=c->r[0]-c->r[3]; // 80040BE4
  c->r[0]=sraw(c,c->r[0],2); // 80040BE8
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80040BEC
  c->r[0]=c->r[3]-c->r[8]; // 80040BF0
  c->ctr=c->r[0]; // 80040BF4
  cmpu(c,0,c->r[8],c->r[3]); // 80040BF8
  if (!crb(c,0)) { goto L_80040C38; } // 80040BFC
L_80040C00:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040C00
  c->r[3]=R32(c->r[3]+c->r[6]); // 80040C04
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040C08
  cmpu(c,0,c->r[7],c->r[0]); // 80040C0C
  if (!crb(c,2)) { goto L_80040C2C; } // 80040C10
  W32(c->r[5]+0x00000004u,c->r[4]); // 80040C14
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80040C18
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040C1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040C20
  c->r[0]=R32(c->r[3]+c->r[0]); // 80040C24
  goto L_80040C88; // 80040C28
L_80040C2C:;
  c->r[6]=c->r[6]+0x00000004u; // 80040C2C
  c->r[4]=c->r[4]+0x00000001u; // 80040C30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040C00; } // 80040C34
L_80040C38:;
  c->r[6]=0u+0x00000000u; // 80040C38
  c->r[4]=0u+0x00000000u; // 80040C3C
  c->ctr=c->r[8]; // 80040C40
  cmpu(c,0,c->r[8],0x00000000u); // 80040C44
  if (!crb(c,1)) { goto L_80040C84; } // 80040C48
L_80040C4C:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040C4C
  c->r[3]=R32(c->r[3]+c->r[4]); // 80040C50
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040C54
  cmpu(c,0,c->r[7],c->r[0]); // 80040C58
  if (!crb(c,2)) { goto L_80040C78; } // 80040C5C
  W32(c->r[5]+0x00000004u,c->r[6]); // 80040C60
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80040C64
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040C68
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040C6C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80040C70
  goto L_80040C88; // 80040C74
L_80040C78:;
  c->r[4]=c->r[4]+0x00000004u; // 80040C78
  c->r[6]=c->r[6]+0x00000001u; // 80040C7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040C4C; } // 80040C80
L_80040C84:;
  c->r[0]=0u+0x00000000u; // 80040C84
L_80040C88:;
  cmps(c,0,(int32_t)c->r[0],0); // 80040C88
  if (crb(c,2)) { goto L_80040DA8; } // 80040C8C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80040C90
  c->r[7]=R32(c->r[13]+0xFFFF9518u); // 80040C94
  c->r[5]=R32(c->r[3]+0x00000018u); // 80040C98
  c->r[9]=R32(c->r[5]+0x00000000u); // 80040C9C
  c->r[8]=R32(c->r[5]+0x00000004u); // 80040CA0
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040CA4
  c->r[0]=R32(c->r[9]+0x00000004u); // 80040CA8
  c->r[4]=c->r[8]|c->r[8]; // 80040CAC
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80040CB0
  c->r[0]=c->r[0]-c->r[3]; // 80040CB4
  c->r[0]=sraw(c,c->r[0],2); // 80040CB8
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80040CBC
  c->r[0]=c->r[3]-c->r[8]; // 80040CC0
  c->ctr=c->r[0]; // 80040CC4
  cmpu(c,0,c->r[8],c->r[3]); // 80040CC8
  if (!crb(c,0)) { goto L_80040D08; } // 80040CCC
L_80040CD0:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040CD0
  c->r[3]=R32(c->r[3]+c->r[6]); // 80040CD4
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040CD8
  cmpu(c,0,c->r[7],c->r[0]); // 80040CDC
  if (!crb(c,2)) { goto L_80040CFC; } // 80040CE0
  W32(c->r[5]+0x00000004u,c->r[4]); // 80040CE4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80040CE8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040CEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040CF0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80040CF4
  goto L_80040D58; // 80040CF8
L_80040CFC:;
  c->r[6]=c->r[6]+0x00000004u; // 80040CFC
  c->r[4]=c->r[4]+0x00000001u; // 80040D00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040CD0; } // 80040D04
L_80040D08:;
  c->r[6]=0u+0x00000000u; // 80040D08
  c->r[4]=0u+0x00000000u; // 80040D0C
  c->ctr=c->r[8]; // 80040D10
  cmpu(c,0,c->r[8],0x00000000u); // 80040D14
  if (!crb(c,1)) { goto L_80040D54; } // 80040D18
L_80040D1C:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040D1C
  c->r[3]=R32(c->r[3]+c->r[4]); // 80040D20
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040D24
  cmpu(c,0,c->r[7],c->r[0]); // 80040D28
  if (!crb(c,2)) { goto L_80040D48; } // 80040D2C
  W32(c->r[5]+0x00000004u,c->r[6]); // 80040D30
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80040D34
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040D38
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040D3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80040D40
  goto L_80040D58; // 80040D44
L_80040D48:;
  c->r[4]=c->r[4]+0x00000004u; // 80040D48
  c->r[6]=c->r[6]+0x00000001u; // 80040D4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040D1C; } // 80040D50
L_80040D54:;
  c->r[3]=0u+0x00000000u; // 80040D54
L_80040D58:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80040D58
  cmps(c,0,(int32_t)c->r[4],37); // 80040D5C
  if (!crb(c,1)) { goto L_80040D78; } // 80040D60
  c->r[0]=R32(c->r[3]+0x00000010u); // 80040D64
  cmpu(c,0,c->r[0],0x00000001u); // 80040D68
  if (!crb(c,2)) { goto L_80040D78; } // 80040D6C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80040D70
  goto L_80040DA0; // 80040D74
L_80040D78:;
  cmps(c,0,(int32_t)c->r[4],26); // 80040D78
  if (crb(c,0)) { goto L_80040D88; } // 80040D7C
  cmps(c,0,(int32_t)c->r[4],36); // 80040D80
  if (!crb(c,2)) { goto L_80040D9C; } // 80040D84
L_80040D88:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80040D88
  cmpu(c,0,c->r[0],0x00000001u); // 80040D8C
  if (!crb(c,2)) { goto L_80040D9C; } // 80040D90
  c->r[3]=c->r[3]+0x00000008u; // 80040D94
  goto L_80040DA0; // 80040D98
L_80040D9C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80040D9C
L_80040DA0:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040DA0
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 80040DA4
L_80040DA8:;
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80040DA8
  c->r[4]=0u+0x00000000u; // 80040DAC
  W32(c->r[31]+0x000000C4u,c->r[4]); // 80040DB0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80040DB4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80040DB8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80040DBC
  W32(c->r[31]+0x000000C8u,c->r[4]); // 80040DC0
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 80040DC4
  c->r[5]=R32(c->r[3]+0x00000018u); // 80040DC8
  c->r[7]=R32(c->r[13]+0xFFFF9528u); // 80040DCC
  c->r[9]=R32(c->r[5]+0x00000000u); // 80040DD0
  c->r[8]=R32(c->r[5]+0x00000004u); // 80040DD4
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040DD8
  c->r[0]=R32(c->r[9]+0x00000004u); // 80040DDC
  c->r[4]=c->r[8]|c->r[8]; // 80040DE0
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80040DE4
  c->r[0]=c->r[0]-c->r[3]; // 80040DE8
  c->r[0]=sraw(c,c->r[0],2); // 80040DEC
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80040DF0
  c->r[0]=c->r[3]-c->r[8]; // 80040DF4
  c->ctr=c->r[0]; // 80040DF8
  cmpu(c,0,c->r[8],c->r[3]); // 80040DFC
  if (!crb(c,0)) { goto L_80040E3C; } // 80040E00
L_80040E04:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040E04
  c->r[3]=R32(c->r[3]+c->r[6]); // 80040E08
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040E0C
  cmpu(c,0,c->r[7],c->r[0]); // 80040E10
  if (!crb(c,2)) { goto L_80040E30; } // 80040E14
  W32(c->r[5]+0x00000004u,c->r[4]); // 80040E18
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80040E1C
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040E20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040E24
  c->r[0]=R32(c->r[3]+c->r[0]); // 80040E28
  goto L_80040E8C; // 80040E2C
L_80040E30:;
  c->r[6]=c->r[6]+0x00000004u; // 80040E30
  c->r[4]=c->r[4]+0x00000001u; // 80040E34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040E04; } // 80040E38
L_80040E3C:;
  c->r[6]=0u+0x00000000u; // 80040E3C
  c->r[4]=0u+0x00000000u; // 80040E40
  c->ctr=c->r[8]; // 80040E44
  cmpu(c,0,c->r[8],0x00000000u); // 80040E48
  if (!crb(c,1)) { goto L_80040E88; } // 80040E4C
L_80040E50:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040E50
  c->r[3]=R32(c->r[3]+c->r[4]); // 80040E54
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040E58
  cmpu(c,0,c->r[7],c->r[0]); // 80040E5C
  if (!crb(c,2)) { goto L_80040E7C; } // 80040E60
  W32(c->r[5]+0x00000004u,c->r[6]); // 80040E64
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80040E68
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040E6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040E70
  c->r[0]=R32(c->r[3]+c->r[0]); // 80040E74
  goto L_80040E8C; // 80040E78
L_80040E7C:;
  c->r[4]=c->r[4]+0x00000004u; // 80040E7C
  c->r[6]=c->r[6]+0x00000001u; // 80040E80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040E50; } // 80040E84
L_80040E88:;
  c->r[0]=0u+0x00000000u; // 80040E88
L_80040E8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80040E8C
  if (crb(c,2)) { goto L_80040FB4; } // 80040E90
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80040E94
  c->r[7]=R32(c->r[13]+0xFFFF9528u); // 80040E98
  c->r[5]=R32(c->r[3]+0x00000018u); // 80040E9C
  c->r[9]=R32(c->r[5]+0x00000000u); // 80040EA0
  c->r[8]=R32(c->r[5]+0x00000004u); // 80040EA4
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040EA8
  c->r[0]=R32(c->r[9]+0x00000004u); // 80040EAC
  c->r[4]=c->r[8]|c->r[8]; // 80040EB0
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80040EB4
  c->r[0]=c->r[0]-c->r[3]; // 80040EB8
  c->r[0]=sraw(c,c->r[0],2); // 80040EBC
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80040EC0
  c->r[0]=c->r[3]-c->r[8]; // 80040EC4
  c->ctr=c->r[0]; // 80040EC8
  cmpu(c,0,c->r[8],c->r[3]); // 80040ECC
  if (!crb(c,0)) { goto L_80040F0C; } // 80040ED0
L_80040ED4:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040ED4
  c->r[3]=R32(c->r[3]+c->r[6]); // 80040ED8
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040EDC
  cmpu(c,0,c->r[7],c->r[0]); // 80040EE0
  if (!crb(c,2)) { goto L_80040F00; } // 80040EE4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80040EE8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80040EEC
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040EF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040EF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80040EF8
  goto L_80040F5C; // 80040EFC
L_80040F00:;
  c->r[6]=c->r[6]+0x00000004u; // 80040F00
  c->r[4]=c->r[4]+0x00000001u; // 80040F04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040ED4; } // 80040F08
L_80040F0C:;
  c->r[6]=0u+0x00000000u; // 80040F0C
  c->r[4]=0u+0x00000000u; // 80040F10
  c->ctr=c->r[8]; // 80040F14
  cmpu(c,0,c->r[8],0x00000000u); // 80040F18
  if (!crb(c,1)) { goto L_80040F58; } // 80040F1C
L_80040F20:;
  c->r[3]=R32(c->r[9]+0x00000000u); // 80040F20
  c->r[3]=R32(c->r[3]+c->r[4]); // 80040F24
  c->r[0]=R32(c->r[3]+0x00000014u); // 80040F28
  cmpu(c,0,c->r[7],c->r[0]); // 80040F2C
  if (!crb(c,2)) { goto L_80040F4C; } // 80040F30
  W32(c->r[5]+0x00000004u,c->r[6]); // 80040F34
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80040F38
  c->r[3]=R32(c->r[5]+0x00000000u); // 80040F3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040F40
  c->r[3]=R32(c->r[3]+c->r[0]); // 80040F44
  goto L_80040F5C; // 80040F48
L_80040F4C:;
  c->r[4]=c->r[4]+0x00000004u; // 80040F4C
  c->r[6]=c->r[6]+0x00000001u; // 80040F50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80040F20; } // 80040F54
L_80040F58:;
  c->r[3]=0u+0x00000000u; // 80040F58
L_80040F5C:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80040F5C
  cmps(c,0,(int32_t)c->r[4],37); // 80040F60
  if (!crb(c,1)) { goto L_80040F7C; } // 80040F64
  c->r[0]=R32(c->r[3]+0x00000010u); // 80040F68
  cmpu(c,0,c->r[0],0x00000001u); // 80040F6C
  if (!crb(c,2)) { goto L_80040F7C; } // 80040F70
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80040F74
  goto L_80040FA4; // 80040F78
L_80040F7C:;
  cmps(c,0,(int32_t)c->r[4],26); // 80040F7C
  if (crb(c,0)) { goto L_80040F8C; } // 80040F80
  cmps(c,0,(int32_t)c->r[4],36); // 80040F84
  if (!crb(c,2)) { goto L_80040FA0; } // 80040F88
L_80040F8C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80040F8C
  cmpu(c,0,c->r[0],0x00000001u); // 80040F90
  if (!crb(c,2)) { goto L_80040FA0; } // 80040F94
  c->r[3]=c->r[3]+0x00000008u; // 80040F98
  goto L_80040FA4; // 80040F9C
L_80040FA0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80040FA0
L_80040FA4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80040FA4
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80040FA8
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 80040FAC
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 80040FB0
L_80040FB4:;
  c->r[0]=0u+0xFFFFFFFFu; // 80040FB4
  c->r[30]=0u+0x00000000u; // 80040FB8
  W32(c->r[31]+0x00000138u,c->r[0]); // 80040FBC
  c->r[3]=c->r[31]|c->r[31]; // 80040FC0
  c->r[4]=0u+0x00000000u; // 80040FC4
  W32(c->r[31]+0x00000078u,c->r[30]); // 80040FC8
  W32(c->r[31]+0x00000140u,c->r[0]); // 80040FCC
  c->lr=0x80040FD4u; f_80042094(c); // 80040FD0
  c->r[3]=c->r[31]|c->r[31]; // 80040FD4
  c->r[4]=0u+0x00000002u; // 80040FD8
  c->r[5]=0u+0x00000001u; // 80040FDC
  c->lr=0x80040FE4u; f_8030FFA0(c); // 80040FE0
  c->r[3]=c->r[31]|c->r[31]; // 80040FE4
  c->r[4]=0u+0x00000008u; // 80040FE8
  c->r[5]=0u+0x00000000u; // 80040FEC
  c->lr=0x80040FF4u; f_8030FFA0(c); // 80040FF0
  c->r[3]=c->r[31]|c->r[31]; // 80040FF4
  c->r[4]=0u+0x00000009u; // 80040FF8
  c->r[5]=0u+0x00000000u; // 80040FFC
  c->lr=0x80041004u; f_8030FFA0(c); // 80041000
  c->r[3]=c->r[31]|c->r[31]; // 80041004
  c->r[4]=0u+0x00000006u; // 80041008
  c->r[5]=0u+0x00000000u; // 8004100C
  c->lr=0x80041014u; f_8030FFA0(c); // 80041010
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80041014
  c->r[3]=c->r[31]|c->r[31]; // 80041018
  W32(c->r[31]+0x000000D0u,c->r[30]); // 8004101C
  c->r[0]=c->r[0]|0x00000020u; // 80041020
  W32(c->r[31]+0x000000D4u,c->r[30]); // 80041024
  W32(c->r[31]+0x000000D8u,c->r[30]); // 80041028
  W32(c->r[31]+0x000000DCu,c->r[30]); // 8004102C
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 80041030
  c->r[12]=R32(c->r[31]+0x00000014u); // 80041034
  c->r[12]=R32(c->r[12]+0x00000060u); // 80041038
  c->ctr=c->r[12]; // 8004103C
  if (true) { c->lr=0x80041044u; dispatch(c,c->ctr); } // 80041040
  c->r[3]=c->r[31]|c->r[31]; // 80041044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041048
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004104C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041050
  c->lr=c->r[0]; // 80041054
  c->r[1]=c->r[1]+0x00000010u; // 80041058
  return; // 8004105C
}

// fn_80041060
void f_80041060(Ctx* __restrict c) {
  trace_call(0x80041060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041060
  c->r[0]=c->lr; // 80041064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004106C
  c->r[31]=c->r[3]|c->r[3]; // 80041070
  c->r[0]=R32(c->r[13]+0xFFFF80A4u); // 80041074
  cmps(c,0,(int32_t)c->r[0],0); // 80041078
  if (crb(c,2)) { goto L_80041128; } // 8004107C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 80041080
  cmps(c,0,(int32_t)c->r[0],0); // 80041084
  if (crb(c,2)) { goto L_800410B0; } // 80041088
  cmps(c,0,(int32_t)c->r[0],1); // 8004108C
  if (crb(c,2)) { goto L_800410C4; } // 80041090
  cmps(c,0,(int32_t)c->r[0],2); // 80041094
  if (crb(c,2)) { goto L_800410E8; } // 80041098
  cmps(c,0,(int32_t)c->r[0],3); // 8004109C
  if (crb(c,2)) { goto L_800410FC; } // 800410A0
  cmps(c,0,(int32_t)c->r[0],4); // 800410A4
  if (crb(c,2)) { goto L_80041118; } // 800410A8
  goto L_80041128; // 800410AC
L_800410B0:;
  c->r[12]=R32(c->r[3]+0x00000014u); // 800410B0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800410B4
  c->ctr=c->r[12]; // 800410B8
  if (true) { c->lr=0x800410C0u; dispatch(c,c->ctr); } // 800410BC
  goto L_80041128; // 800410C0
L_800410C4:;
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 800410C4
  c->r[0]=R32(c->r[4]+0x00000224u); // 800410C8
  cmps(c,0,(int32_t)c->r[0],0); // 800410CC
  if (!crb(c,2)) { goto L_80041128; } // 800410D0
  c->r[12]=R32(c->r[3]+0x00000014u); // 800410D4
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800410D8
  c->ctr=c->r[12]; // 800410DC
  if (true) { c->lr=0x800410E4u; dispatch(c,c->ctr); } // 800410E0
  goto L_80041128; // 800410E4
L_800410E8:;
  c->r[12]=R32(c->r[3]+0x00000014u); // 800410E8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800410EC
  c->ctr=c->r[12]; // 800410F0
  if (true) { c->lr=0x800410F8u; dispatch(c,c->ctr); } // 800410F4
  goto L_80041128; // 800410F8
L_800410FC:;
  c->r[12]=R32(c->r[3]+0x00000014u); // 800410FC
  c->r[12]=R32(c->r[12]+0x00000054u); // 80041100
  c->ctr=c->r[12]; // 80041104
  if (true) { c->lr=0x8004110Cu; dispatch(c,c->ctr); } // 80041108
  c->r[3]=c->r[31]|c->r[31]; // 8004110C
  c->lr=0x80041114u; f_80041EA4(c); // 80041110
  goto L_80041128; // 80041114
L_80041118:;
  c->r[12]=R32(c->r[3]+0x00000014u); // 80041118
  c->r[12]=R32(c->r[12]+0x00000058u); // 8004111C
  c->ctr=c->r[12]; // 80041120
  if (true) { c->lr=0x80041128u; dispatch(c,c->ctr); } // 80041124
L_80041128:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004112C
  c->lr=c->r[0]; // 80041130
  c->r[1]=c->r[1]+0x00000010u; // 80041134
  return; // 80041138
}

// fn_8004113C
void f_8004113C(Ctx* __restrict c) {
  trace_call(0x8004113Cu);
  f_8030C6C0(c); return; // 8004113C
}

// fn_80041140
void f_80041140(Ctx* __restrict c) {
  trace_call(0x80041140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041140
  c->r[0]=c->lr; // 80041144
  c->r[5]=0u+0x00000000u; // 80041148
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004114C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041150
  W32(c->r[1]+0x00000008u,c->r[30]); // 80041154
  c->r[30]=0u+0x80370000u; // 80041158
  c->r[4]=c->r[30]+0x00003EF8u; // 8004115C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80041160
  c->lr=0x80041168u; f_8031E640(c); // 80041164
  c->r[31]=0u+0x803C0000u; // 80041168
  c->r[30]=c->r[30]+0x00003EF8u; // 8004116C
  W32(c->r[31]+0x00002DF8u,c->r[3]); // 80041170
  c->r[4]=c->r[30]+0x00000007u; // 80041174
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80041178
  c->r[5]=0u+0x00000000u; // 8004117C
  c->lr=0x80041184u; f_8031E640(c); // 80041180
  c->r[31]=c->r[31]+0x00002DF8u; // 80041184
  c->r[4]=c->r[30]+0x0000000Eu; // 80041188
  W32(c->r[31]+0x00000004u,c->r[3]); // 8004118C
  c->r[5]=0u+0x00000000u; // 80041190
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80041194
  c->lr=0x8004119Cu; f_8031E640(c); // 80041198
  W32(c->r[31]+0x00000008u,c->r[3]); // 8004119C
  c->r[4]=c->r[30]+0x00000015u; // 800411A0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800411A4
  c->r[5]=0u+0x00000000u; // 800411A8
  c->lr=0x800411B0u; f_8031E640(c); // 800411AC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800411B0
  c->r[4]=c->r[30]+0x0000001Cu; // 800411B4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800411B8
  c->r[5]=0u+0x00000000u; // 800411BC
  c->lr=0x800411C4u; f_8031E640(c); // 800411C0
  W32(c->r[13]+0xFFFF9518u,c->r[3]); // 800411C4
  c->r[4]=c->r[30]+0x0000002Au; // 800411C8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800411CC
  c->r[5]=0u+0x00000000u; // 800411D0
  c->lr=0x800411D8u; f_8031E640(c); // 800411D4
  W32(c->r[13]+0xFFFF9524u,c->r[3]); // 800411D8
  c->r[4]=c->r[30]+0x0000003Du; // 800411DC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800411E0
  c->r[5]=0u+0x00000000u; // 800411E4
  c->lr=0x800411ECu; f_8031E640(c); // 800411E8
  W32(c->r[13]+0xFFFF9528u,c->r[3]); // 800411EC
  c->r[4]=c->r[30]+0x0000004Du; // 800411F0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800411F4
  c->r[5]=0u+0x00000000u; // 800411F8
  c->lr=0x80041200u; f_8031E640(c); // 800411FC
  W32(c->r[13]+0xFFFF951Cu,c->r[3]); // 80041200
  c->r[4]=c->r[30]+0x00000061u; // 80041204
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80041208
  c->r[5]=0u+0x00000000u; // 8004120C
  c->lr=0x80041214u; f_8031E640(c); // 80041210
  W32(c->r[13]+0xFFFF9520u,c->r[3]); // 80041214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041218
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004121C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041220
  c->lr=c->r[0]; // 80041224
  c->r[1]=c->r[1]+0x00000010u; // 80041228
  return; // 8004122C
}

// fn_80041230
void f_80041230(Ctx* __restrict c) {
  trace_call(0x80041230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041230
  c->r[0]=c->lr; // 80041234
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004123C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80041240
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80041244
  c->r[3]=c->r[30]|c->r[30]; // 80041248
  c->lr=0x80041250u; f_8024B0E0(c); // 8004124C
  c->r[4]=0u+0x803C0000u; // 80041250
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80041254
  c->r[5]=R32(c->r[4]+0x00002DF8u); // 80041258
  cmpu(c,0,c->r[5],c->r[31]); // 8004125C
  if (!crb(c,2)) { goto L_80041270; } // 80041260
  c->r[3]=c->r[30]|c->r[30]; // 80041264
  c->lr=0x8004126Cu; f_8024B1C0(c); // 80041268
  goto L_800412AC; // 8004126C
L_80041270:;
  c->r[3]=R32(c->r[5]+0xFFFFFFF0u); // 80041270
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80041274
  W32(c->r[5]+0xFFFFFFF0u,c->r[0]); // 80041278
  cmpu(c,0,c->r[0],0x00000001u); // 8004127C
  if (!crb(c,2)) { goto L_8004129C; } // 80041280
  c->r[0]=R32(c->r[5]+0xFFFFFFF4u); // 80041284
  cmpu(c,0,c->r[0],0x00000001u); // 80041288
  if (!crb(c,2)) { goto L_8004129C; } // 8004128C
  c->r[3]=c->r[30]|c->r[30]; // 80041290
  c->r[4]=c->r[4]+0x00002DF8u; // 80041294
  c->lr=0x8004129Cu; f_8031EEDC(c); // 80041298
L_8004129C:;
  c->r[4]=0u+0x803C0000u; // 8004129C
  c->r[3]=c->r[30]|c->r[30]; // 800412A0
  W32(c->r[4]+0x00002DF8u,c->r[31]); // 800412A4
  c->lr=0x800412ACu; f_8024B1C0(c); // 800412A8
L_800412AC:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800412AC
  c->r[3]=c->r[30]|c->r[30]; // 800412B0
  c->lr=0x800412B8u; f_8024B0E0(c); // 800412B4
  c->r[4]=0u+0x803C0000u; // 800412B8
  c->r[4]=c->r[4]+0x00002DF8u; // 800412BC
  c->r[5]=R32(c->r[4]+0x00000004u); // 800412C0
  cmpu(c,0,c->r[5],c->r[31]); // 800412C4
  if (!crb(c,2)) { goto L_800412D8; } // 800412C8
  c->r[3]=c->r[30]|c->r[30]; // 800412CC
  c->lr=0x800412D4u; f_8024B1C0(c); // 800412D0
  goto L_80041318; // 800412D4
L_800412D8:;
  c->r[3]=R32(c->r[5]+0xFFFFFFF0u); // 800412D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800412DC
  W32(c->r[5]+0xFFFFFFF0u,c->r[0]); // 800412E0
  cmpu(c,0,c->r[0],0x00000001u); // 800412E4
  if (!crb(c,2)) { goto L_80041304; } // 800412E8
  c->r[0]=R32(c->r[5]+0xFFFFFFF4u); // 800412EC
  cmpu(c,0,c->r[0],0x00000001u); // 800412F0
  if (!crb(c,2)) { goto L_80041304; } // 800412F4
  c->r[3]=c->r[30]|c->r[30]; // 800412F8
  c->r[4]=c->r[4]+0x00000004u; // 800412FC
  c->lr=0x80041304u; f_8031EEDC(c); // 80041300
L_80041304:;
  c->r[4]=0u+0x803C0000u; // 80041304
  c->r[3]=c->r[30]|c->r[30]; // 80041308
  c->r[4]=c->r[4]+0x00002DF8u; // 8004130C
  W32(c->r[4]+0x00000004u,c->r[31]); // 80041310
  c->lr=0x80041318u; f_8024B1C0(c); // 80041314
L_80041318:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80041318
  c->r[3]=c->r[30]|c->r[30]; // 8004131C
  c->lr=0x80041324u; f_8024B0E0(c); // 80041320
  c->r[4]=0u+0x803C0000u; // 80041324
  c->r[4]=c->r[4]+0x00002DF8u; // 80041328
  c->r[5]=R32(c->r[4]+0x00000008u); // 8004132C
  cmpu(c,0,c->r[5],c->r[31]); // 80041330
  if (!crb(c,2)) { goto L_80041344; } // 80041334
  c->r[3]=c->r[30]|c->r[30]; // 80041338
  c->lr=0x80041340u; f_8024B1C0(c); // 8004133C
  goto L_80041384; // 80041340
L_80041344:;
  c->r[3]=R32(c->r[5]+0xFFFFFFF0u); // 80041344
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80041348
  W32(c->r[5]+0xFFFFFFF0u,c->r[0]); // 8004134C
  cmpu(c,0,c->r[0],0x00000001u); // 80041350
  if (!crb(c,2)) { goto L_80041370; } // 80041354
  c->r[0]=R32(c->r[5]+0xFFFFFFF4u); // 80041358
  cmpu(c,0,c->r[0],0x00000001u); // 8004135C
  if (!crb(c,2)) { goto L_80041370; } // 80041360
  c->r[3]=c->r[30]|c->r[30]; // 80041364
  c->r[4]=c->r[4]+0x00000008u; // 80041368
  c->lr=0x80041370u; f_8031EEDC(c); // 8004136C
L_80041370:;
  c->r[4]=0u+0x803C0000u; // 80041370
  c->r[3]=c->r[30]|c->r[30]; // 80041374
  c->r[4]=c->r[4]+0x00002DF8u; // 80041378
  W32(c->r[4]+0x00000008u,c->r[31]); // 8004137C
  c->lr=0x80041384u; f_8024B1C0(c); // 80041380
L_80041384:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80041384
  c->r[3]=c->r[30]|c->r[30]; // 80041388
  c->lr=0x80041390u; f_8024B0E0(c); // 8004138C
  c->r[4]=0u+0x803C0000u; // 80041390
  c->r[4]=c->r[4]+0x00002DF8u; // 80041394
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80041398
  cmpu(c,0,c->r[5],c->r[31]); // 8004139C
  if (!crb(c,2)) { goto L_800413B0; } // 800413A0
  c->r[3]=c->r[30]|c->r[30]; // 800413A4
  c->lr=0x800413ACu; f_8024B1C0(c); // 800413A8
  goto L_800413F0; // 800413AC
L_800413B0:;
  c->r[3]=R32(c->r[5]+0xFFFFFFF0u); // 800413B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800413B4
  W32(c->r[5]+0xFFFFFFF0u,c->r[0]); // 800413B8
  cmpu(c,0,c->r[0],0x00000001u); // 800413BC
  if (!crb(c,2)) { goto L_800413DC; } // 800413C0
  c->r[0]=R32(c->r[5]+0xFFFFFFF4u); // 800413C4
  cmpu(c,0,c->r[0],0x00000001u); // 800413C8
  if (!crb(c,2)) { goto L_800413DC; } // 800413CC
  c->r[3]=c->r[30]|c->r[30]; // 800413D0
  c->r[4]=c->r[4]+0x0000000Cu; // 800413D4
  c->lr=0x800413DCu; f_8031EEDC(c); // 800413D8
L_800413DC:;
  c->r[4]=0u+0x803C0000u; // 800413DC
  c->r[3]=c->r[30]|c->r[30]; // 800413E0
  c->r[4]=c->r[4]+0x00002DF8u; // 800413E4
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 800413E8
  c->lr=0x800413F0u; f_8024B1C0(c); // 800413EC
L_800413F0:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800413F0
  c->r[3]=c->r[30]|c->r[30]; // 800413F4
  c->lr=0x800413FCu; f_8024B0E0(c); // 800413F8
  c->r[4]=R32(c->r[13]+0xFFFF9518u); // 800413FC
  cmpu(c,0,c->r[4],c->r[31]); // 80041400
  if (!crb(c,2)) { goto L_80041414; } // 80041404
  c->r[3]=c->r[30]|c->r[30]; // 80041408
  c->lr=0x80041410u; f_8024B1C0(c); // 8004140C
  goto L_8004144C; // 80041410
L_80041414:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80041414
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80041418
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004141C
  cmpu(c,0,c->r[0],0x00000001u); // 80041420
  if (!crb(c,2)) { goto L_80041440; } // 80041424
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80041428
  cmpu(c,0,c->r[0],0x00000001u); // 8004142C
  if (!crb(c,2)) { goto L_80041440; } // 80041430
  c->r[3]=c->r[30]|c->r[30]; // 80041434
  c->r[4]=c->r[13]+0xFFFF9518u; // 80041438
  c->lr=0x80041440u; f_8031EEDC(c); // 8004143C
L_80041440:;
  W32(c->r[13]+0xFFFF9518u,c->r[31]); // 80041440
  c->r[3]=c->r[30]|c->r[30]; // 80041444
  c->lr=0x8004144Cu; f_8024B1C0(c); // 80041448
L_8004144C:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 8004144C
  c->r[3]=c->r[30]|c->r[30]; // 80041450
  c->lr=0x80041458u; f_8024B0E0(c); // 80041454
  c->r[4]=R32(c->r[13]+0xFFFF9524u); // 80041458
  cmpu(c,0,c->r[4],c->r[31]); // 8004145C
  if (!crb(c,2)) { goto L_80041470; } // 80041460
  c->r[3]=c->r[30]|c->r[30]; // 80041464
  c->lr=0x8004146Cu; f_8024B1C0(c); // 80041468
  goto L_800414A8; // 8004146C
L_80041470:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80041470
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80041474
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80041478
  cmpu(c,0,c->r[0],0x00000001u); // 8004147C
  if (!crb(c,2)) { goto L_8004149C; } // 80041480
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80041484
  cmpu(c,0,c->r[0],0x00000001u); // 80041488
  if (!crb(c,2)) { goto L_8004149C; } // 8004148C
  c->r[3]=c->r[30]|c->r[30]; // 80041490
  c->r[4]=c->r[13]+0xFFFF9524u; // 80041494
  c->lr=0x8004149Cu; f_8031EEDC(c); // 80041498
L_8004149C:;
  W32(c->r[13]+0xFFFF9524u,c->r[31]); // 8004149C
  c->r[3]=c->r[30]|c->r[30]; // 800414A0
  c->lr=0x800414A8u; f_8024B1C0(c); // 800414A4
L_800414A8:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800414A8
  c->r[3]=c->r[30]|c->r[30]; // 800414AC
  c->lr=0x800414B4u; f_8024B0E0(c); // 800414B0
  c->r[4]=R32(c->r[13]+0xFFFF9528u); // 800414B4
  cmpu(c,0,c->r[4],c->r[31]); // 800414B8
  if (!crb(c,2)) { goto L_800414CC; } // 800414BC
  c->r[3]=c->r[30]|c->r[30]; // 800414C0
  c->lr=0x800414C8u; f_8024B1C0(c); // 800414C4
  goto L_80041504; // 800414C8
L_800414CC:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800414CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800414D0
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800414D4
  cmpu(c,0,c->r[0],0x00000001u); // 800414D8
  if (!crb(c,2)) { goto L_800414F8; } // 800414DC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800414E0
  cmpu(c,0,c->r[0],0x00000001u); // 800414E4
  if (!crb(c,2)) { goto L_800414F8; } // 800414E8
  c->r[3]=c->r[30]|c->r[30]; // 800414EC
  c->r[4]=c->r[13]+0xFFFF9528u; // 800414F0
  c->lr=0x800414F8u; f_8031EEDC(c); // 800414F4
L_800414F8:;
  W32(c->r[13]+0xFFFF9528u,c->r[31]); // 800414F8
  c->r[3]=c->r[30]|c->r[30]; // 800414FC
  c->lr=0x80041504u; f_8024B1C0(c); // 80041500
L_80041504:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80041504
  c->r[3]=c->r[30]|c->r[30]; // 80041508
  c->lr=0x80041510u; f_8024B0E0(c); // 8004150C
  c->r[4]=R32(c->r[13]+0xFFFF951Cu); // 80041510
  cmpu(c,0,c->r[4],c->r[31]); // 80041514
  if (!crb(c,2)) { goto L_80041528; } // 80041518
  c->r[3]=c->r[30]|c->r[30]; // 8004151C
  c->lr=0x80041524u; f_8024B1C0(c); // 80041520
  goto L_80041560; // 80041524
L_80041528:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80041528
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004152C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80041530
  cmpu(c,0,c->r[0],0x00000001u); // 80041534
  if (!crb(c,2)) { goto L_80041554; } // 80041538
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8004153C
  cmpu(c,0,c->r[0],0x00000001u); // 80041540
  if (!crb(c,2)) { goto L_80041554; } // 80041544
  c->r[3]=c->r[30]|c->r[30]; // 80041548
  c->r[4]=c->r[13]+0xFFFF951Cu; // 8004154C
  c->lr=0x80041554u; f_8031EEDC(c); // 80041550
L_80041554:;
  W32(c->r[13]+0xFFFF951Cu,c->r[31]); // 80041554
  c->r[3]=c->r[30]|c->r[30]; // 80041558
  c->lr=0x80041560u; f_8024B1C0(c); // 8004155C
L_80041560:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80041560
  c->r[3]=c->r[30]|c->r[30]; // 80041564
  c->lr=0x8004156Cu; f_8024B0E0(c); // 80041568
  c->r[4]=R32(c->r[13]+0xFFFF9520u); // 8004156C
  cmpu(c,0,c->r[4],c->r[31]); // 80041570
  if (!crb(c,2)) { goto L_80041584; } // 80041574
  c->r[3]=c->r[30]|c->r[30]; // 80041578
  c->lr=0x80041580u; f_8024B1C0(c); // 8004157C
  goto L_800415BC; // 80041580
L_80041584:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80041584
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80041588
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004158C
  cmpu(c,0,c->r[0],0x00000001u); // 80041590
  if (!crb(c,2)) { goto L_800415B0; } // 80041594
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80041598
  cmpu(c,0,c->r[0],0x00000001u); // 8004159C
  if (!crb(c,2)) { goto L_800415B0; } // 800415A0
  c->r[3]=c->r[30]|c->r[30]; // 800415A4
  c->r[4]=c->r[13]+0xFFFF9520u; // 800415A8
  c->lr=0x800415B0u; f_8031EEDC(c); // 800415AC
L_800415B0:;
  W32(c->r[13]+0xFFFF9520u,c->r[31]); // 800415B0
  c->r[3]=c->r[30]|c->r[30]; // 800415B4
  c->lr=0x800415BCu; f_8024B1C0(c); // 800415B8
L_800415BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800415BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800415C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800415C4
  c->lr=c->r[0]; // 800415C8
  c->r[1]=c->r[1]+0x00000010u; // 800415CC
  return; // 800415D0
}

// fn_800415D4
void f_800415D4(Ctx* __restrict c) {
  trace_call(0x800415D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800415D4
  c->r[0]=c->lr; // 800415D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800415DC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800415E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800415E4
  {uint32_t ea=c->r[2]+0xFFFF86ACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800415E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800415EC
  c->r[31]=0u+0x803C0000u; // 800415F0
  c->r[31]=c->r[31]+0x00002DF8u; // 800415F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800415F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800415FC
  c->r[29]=0u+0x00000000u; // 80041600
  W32(c->r[1]+0x00000010u,c->r[28]); // 80041604
  c->r[28]=c->r[3]|c->r[3]; // 80041608
  c->r[30]=c->r[28]|c->r[28]; // 8004160C
L_80041610:;
  c->r[3]=R32(c->r[28]+0x000000CCu); // 80041610
  c->r[4]=R32(c->r[31]+0x00000000u); // 80041614
  c->r[6]=R32(c->r[3]+0x00000018u); // 80041618
  c->r[5]=R32(c->r[6]+0x00000000u); // 8004161C
  c->r[8]=R32(c->r[6]+0x00000004u); // 80041620
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041624
  c->r[0]=R32(c->r[5]+0x00000004u); // 80041628
  c->r[5]=c->r[8]|c->r[8]; // 8004162C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80041630
  c->r[0]=c->r[0]-c->r[3]; // 80041634
  c->r[0]=sraw(c,c->r[0],2); // 80041638
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 8004163C
  c->r[0]=c->r[3]-c->r[8]; // 80041640
  c->ctr=c->r[0]; // 80041644
  cmpu(c,0,c->r[8],c->r[3]); // 80041648
  if (!crb(c,0)) { goto L_8004168C; } // 8004164C
L_80041650:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 80041650
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041654
  c->r[3]=R32(c->r[3]+c->r[7]); // 80041658
  c->r[0]=R32(c->r[3]+0x00000014u); // 8004165C
  cmpu(c,0,c->r[4],c->r[0]); // 80041660
  if (!crb(c,2)) { goto L_80041680; } // 80041664
  W32(c->r[6]+0x00000004u,c->r[5]); // 80041668
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8004166C
  c->r[3]=R32(c->r[6]+0x00000000u); // 80041670
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041674
  c->r[3]=R32(c->r[3]+c->r[0]); // 80041678
  goto L_800416E4; // 8004167C
L_80041680:;
  c->r[7]=c->r[7]+0x00000004u; // 80041680
  c->r[5]=c->r[5]+0x00000001u; // 80041684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80041650; } // 80041688
L_8004168C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8004168C
  c->r[7]=0u+0x00000000u; // 80041690
  c->r[5]=0u+0x00000000u; // 80041694
  c->ctr=c->r[8]; // 80041698
  cmpu(c,0,c->r[8],0x00000000u); // 8004169C
  if (!crb(c,1)) { goto L_800416E0; } // 800416A0
L_800416A4:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 800416A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800416A8
  c->r[3]=R32(c->r[3]+c->r[5]); // 800416AC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800416B0
  cmpu(c,0,c->r[4],c->r[0]); // 800416B4
  if (!crb(c,2)) { goto L_800416D4; } // 800416B8
  W32(c->r[6]+0x00000004u,c->r[7]); // 800416BC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800416C0
  c->r[3]=R32(c->r[6]+0x00000000u); // 800416C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800416C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800416CC
  goto L_800416E4; // 800416D0
L_800416D4:;
  c->r[5]=c->r[5]+0x00000004u; // 800416D4
  c->r[7]=c->r[7]+0x00000001u; // 800416D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800416A4; } // 800416DC
L_800416E0:;
  c->r[3]=0u+0x00000000u; // 800416E0
L_800416E4:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 800416E4
  cmps(c,0,(int32_t)c->r[4],37); // 800416E8
  if (!crb(c,1)) { goto L_80041704; } // 800416EC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800416F0
  cmpu(c,0,c->r[0],0x00000001u); // 800416F4
  if (!crb(c,2)) { goto L_80041704; } // 800416F8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800416FC
  goto L_8004172C; // 80041700
L_80041704:;
  cmps(c,0,(int32_t)c->r[4],26); // 80041704
  if (crb(c,0)) { goto L_80041714; } // 80041708
  cmps(c,0,(int32_t)c->r[4],36); // 8004170C
  if (!crb(c,2)) { goto L_80041728; } // 80041710
L_80041714:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80041714
  cmpu(c,0,c->r[0],0x00000001u); // 80041718
  if (!crb(c,2)) { goto L_80041728; } // 8004171C
  c->r[3]=c->r[3]+0x00000008u; // 80041720
  goto L_8004172C; // 80041724
L_80041728:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80041728
L_8004172C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8004172C
  c->r[6]=R32(c->r[3]+0x00000004u); // 80041730
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80041734
  if (crb(c,2)) { goto L_800417DC; } // 80041738
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8004173C
  c->r[8]=c->r[5]^c->r[6]; // 80041740
  c->r[7]=R32(c->r[3]+0x000000A8u); // 80041744
  c->r[3]=R32(c->r[7]+0x00000000u); // 80041748
  c->r[4]=R32(c->r[7]+0x00000004u); // 8004174C
  c->r[0]=divwu(c->r[8],c->r[3]); // 80041750
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80041754
  c->r[0]=c->r[8]-c->r[0]; // 80041758
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004175C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80041760
  goto L_800417A4; // 80041764
L_80041768:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 80041768
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8004176C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041770
  c->r[4]=c->r[3]+c->r[0]; // 80041774
  c->r[0]=R32(c->r[3]+c->r[0]); // 80041778
  cmpu(c,0,c->r[0],c->r[8]); // 8004177C
  if (!crb(c,2)) { goto L_800417A0; } // 80041780
  c->r[0]=R32(c->r[4]+0x00000008u); // 80041784
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80041788
  c->r[0]=c->r[0]^c->r[5]; // 8004178C
  c->r[3]=c->r[3]^c->r[6]; // 80041790
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80041794
  if (!crb(c,2)) { goto L_800417A0; } // 80041798
  goto L_800417B0; // 8004179C
L_800417A0:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 800417A0
L_800417A4:;
  cmps(c,0,(int32_t)c->r[0],-1); // 800417A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80041768; } // 800417A8
  c->r[4]=0u+0x00000000u; // 800417AC
L_800417B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800417B0
  if (!crb(c,2)) { goto L_800417C0; } // 800417B4
  c->r[3]=0u+0x00000000u; // 800417B8
  goto L_800417C4; // 800417BC
L_800417C0:;
  c->r[3]=c->r[4]+0x00000010u; // 800417C0
L_800417C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800417C4
  if (!crb(c,2)) { goto L_800417D4; } // 800417C8
  c->r[3]=0u+0x00000000u; // 800417CC
  goto L_800417E0; // 800417D0
L_800417D4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800417D4
  goto L_800417E0; // 800417D8
L_800417DC:;
  c->r[3]=0u+0x00000000u; // 800417DC
L_800417E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800417E0
  W32(c->r[30]+0x000000D0u,c->r[3]); // 800417E4
  if (crb(c,2)) { goto L_8004180C; } // 800417E8
  W32(c->r[3]+0x000000E8u,c->r[28]); // 800417EC
  c->r[3]=R32(c->r[30]+0x000000D0u); // 800417F0
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[31]);} // 800417F4
  c->r[3]=R32(c->r[30]+0x000000D0u); // 800417F8
  c->r[12]=R32(c->r[3]+0x00000014u); // 800417FC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80041800
  c->ctr=c->r[12]; // 80041804
  if (true) { c->lr=0x8004180Cu; dispatch(c,c->ctr); } // 80041808
L_8004180C:;
  c->r[29]=c->r[29]+0x00000001u; // 8004180C
  c->r[30]=c->r[30]+0x00000004u; // 80041810
  cmps(c,0,(int32_t)c->r[29],4); // 80041814
  c->r[31]=c->r[31]+0x00000004u; // 80041818
  if (crb(c,0)) { IRQCHK(c); goto L_80041610; } // 8004181C
  c->r[0]=R8(c->r[28]+0x0000013Cu); // 80041820
  c->r[0]=c->r[0]|0x00000080u; // 80041824
  W8(c->r[28]+0x0000013Cu,c->r[0]); // 80041828
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8004182C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80041830
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80041834
  c->r[30]=R32(c->r[1]+0x00000018u); // 80041838
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004183C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80041840
  c->r[0]=R32(c->r[1]+0x00000034u); // 80041844
  c->lr=c->r[0]; // 80041848
  c->r[1]=c->r[1]+0x00000030u; // 8004184C
  return; // 80041850
}

// fn_80041854
void f_80041854(Ctx* __restrict c) {
  trace_call(0x80041854u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041854
  c->r[0]=c->lr; // 80041858
  cmps(c,0,(int32_t)c->r[5],102); // 8004185C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80041860
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80041864
  c->r[26]=c->r[3]|c->r[3]; // 80041868
  c->r[27]=c->r[4]|c->r[4]; // 8004186C
  c->r[28]=c->r[5]|c->r[5]; // 80041870
  c->r[0]=R8(c->r[3]+0x0000013Cu); // 80041874
  c->r[0]=c->r[0]|0x00000040u; // 80041878
  W8(c->r[3]+0x0000013Cu,c->r[0]); // 8004187C
  if (crb(c,2)) { goto L_80041890; } // 80041880
  cmps(c,0,(int32_t)c->r[5],103); // 80041884
  if (crb(c,2)) { goto L_80041898; } // 80041888
  goto L_800418A8; // 8004188C
L_80041890:;
  W32(c->r[3]+0x000000C4u,c->r[4]); // 80041890
  goto L_800418A8; // 80041894
L_80041898:;
  W32(c->r[3]+0x000000C8u,c->r[4]); // 80041898
  c->r[4]=c->r[26]|c->r[26]; // 8004189C
  c->r[3]=R32(c->r[13]+0xFFFF9534u); // 800418A0
  c->lr=0x800418A8u; f_800A12E8(c); // 800418A4
L_800418A8:;
  c->r[31]=0u+0x803C0000u; // 800418A8
  c->r[30]=c->r[26]|c->r[26]; // 800418AC
  c->r[31]=c->r[31]+0x00002DF8u; // 800418B0
  c->r[29]=0u+0x00000000u; // 800418B4
L_800418B8:;
  c->r[3]=R32(c->r[26]+0x000000CCu); // 800418B8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800418BC
  c->r[6]=R32(c->r[3]+0x00000018u); // 800418C0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800418C4
  c->r[8]=R32(c->r[6]+0x00000004u); // 800418C8
  c->r[3]=R32(c->r[5]+0x00000000u); // 800418CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800418D0
  c->r[5]=c->r[8]|c->r[8]; // 800418D4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800418D8
  c->r[0]=c->r[0]-c->r[3]; // 800418DC
  c->r[0]=sraw(c,c->r[0],2); // 800418E0
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 800418E4
  c->r[0]=c->r[3]-c->r[8]; // 800418E8
  c->ctr=c->r[0]; // 800418EC
  cmpu(c,0,c->r[8],c->r[3]); // 800418F0
  if (!crb(c,0)) { goto L_80041934; } // 800418F4
L_800418F8:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 800418F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800418FC
  c->r[3]=R32(c->r[3]+c->r[7]); // 80041900
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041904
  cmpu(c,0,c->r[4],c->r[0]); // 80041908
  if (!crb(c,2)) { goto L_80041928; } // 8004190C
  W32(c->r[6]+0x00000004u,c->r[5]); // 80041910
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80041914
  c->r[3]=R32(c->r[6]+0x00000000u); // 80041918
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004191C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80041920
  goto L_8004198C; // 80041924
L_80041928:;
  c->r[7]=c->r[7]+0x00000004u; // 80041928
  c->r[5]=c->r[5]+0x00000001u; // 8004192C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800418F8; } // 80041930
L_80041934:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80041934
  c->r[7]=0u+0x00000000u; // 80041938
  c->r[5]=0u+0x00000000u; // 8004193C
  c->ctr=c->r[8]; // 80041940
  cmpu(c,0,c->r[8],0x00000000u); // 80041944
  if (!crb(c,1)) { goto L_80041988; } // 80041948
L_8004194C:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 8004194C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041950
  c->r[3]=R32(c->r[3]+c->r[5]); // 80041954
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041958
  cmpu(c,0,c->r[4],c->r[0]); // 8004195C
  if (!crb(c,2)) { goto L_8004197C; } // 80041960
  W32(c->r[6]+0x00000004u,c->r[7]); // 80041964
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80041968
  c->r[3]=R32(c->r[6]+0x00000000u); // 8004196C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041970
  c->r[3]=R32(c->r[3]+c->r[0]); // 80041974
  goto L_8004198C; // 80041978
L_8004197C:;
  c->r[5]=c->r[5]+0x00000004u; // 8004197C
  c->r[7]=c->r[7]+0x00000001u; // 80041980
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004194C; } // 80041984
L_80041988:;
  c->r[3]=0u+0x00000000u; // 80041988
L_8004198C:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8004198C
  cmps(c,0,(int32_t)c->r[4],37); // 80041990
  if (!crb(c,1)) { goto L_800419AC; } // 80041994
  c->r[0]=R32(c->r[3]+0x00000010u); // 80041998
  cmpu(c,0,c->r[0],0x00000001u); // 8004199C
  if (!crb(c,2)) { goto L_800419AC; } // 800419A0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800419A4
  goto L_800419D4; // 800419A8
L_800419AC:;
  cmps(c,0,(int32_t)c->r[4],26); // 800419AC
  if (crb(c,0)) { goto L_800419BC; } // 800419B0
  cmps(c,0,(int32_t)c->r[4],36); // 800419B4
  if (!crb(c,2)) { goto L_800419D0; } // 800419B8
L_800419BC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800419BC
  cmpu(c,0,c->r[0],0x00000001u); // 800419C0
  if (!crb(c,2)) { goto L_800419D0; } // 800419C4
  c->r[3]=c->r[3]+0x00000008u; // 800419C8
  goto L_800419D4; // 800419CC
L_800419D0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800419D0
L_800419D4:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 800419D4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800419D8
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 800419DC
  if (crb(c,2)) { goto L_80041A84; } // 800419E0
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800419E4
  c->r[8]=c->r[5]^c->r[6]; // 800419E8
  c->r[7]=R32(c->r[3]+0x000000A8u); // 800419EC
  c->r[3]=R32(c->r[7]+0x00000000u); // 800419F0
  c->r[4]=R32(c->r[7]+0x00000004u); // 800419F4
  c->r[0]=divwu(c->r[8],c->r[3]); // 800419F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800419FC
  c->r[0]=c->r[8]-c->r[0]; // 80041A00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80041A04
  c->r[0]=R32(c->r[4]+c->r[0]); // 80041A08
  goto L_80041A4C; // 80041A0C
L_80041A10:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 80041A10
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80041A14
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041A18
  c->r[4]=c->r[3]+c->r[0]; // 80041A1C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80041A20
  cmpu(c,0,c->r[0],c->r[8]); // 80041A24
  if (!crb(c,2)) { goto L_80041A48; } // 80041A28
  c->r[0]=R32(c->r[4]+0x00000008u); // 80041A2C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80041A30
  c->r[0]=c->r[0]^c->r[5]; // 80041A34
  c->r[3]=c->r[3]^c->r[6]; // 80041A38
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80041A3C
  if (!crb(c,2)) { goto L_80041A48; } // 80041A40
  goto L_80041A58; // 80041A44
L_80041A48:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 80041A48
L_80041A4C:;
  cmps(c,0,(int32_t)c->r[0],-1); // 80041A4C
  if (!crb(c,2)) { IRQCHK(c); goto L_80041A10; } // 80041A50
  c->r[4]=0u+0x00000000u; // 80041A54
L_80041A58:;
  cmps(c,0,(int32_t)c->r[4],0); // 80041A58
  if (!crb(c,2)) { goto L_80041A68; } // 80041A5C
  c->r[3]=0u+0x00000000u; // 80041A60
  goto L_80041A6C; // 80041A64
L_80041A68:;
  c->r[3]=c->r[4]+0x00000010u; // 80041A68
L_80041A6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80041A6C
  if (!crb(c,2)) { goto L_80041A7C; } // 80041A70
  c->r[3]=0u+0x00000000u; // 80041A74
  goto L_80041A88; // 80041A78
L_80041A7C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041A7C
  goto L_80041A88; // 80041A80
L_80041A84:;
  c->r[3]=0u+0x00000000u; // 80041A84
L_80041A88:;
  cmps(c,0,(int32_t)c->r[3],0); // 80041A88
  W32(c->r[30]+0x000000D0u,c->r[3]); // 80041A8C
  if (crb(c,2)) { goto L_80041AAC; } // 80041A90
  c->r[0]=R32(c->r[3]+0x00000138u); // 80041A94
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80041A98
  if (crb(c,2)) { goto L_80041AAC; } // 80041A9C
  c->r[4]=c->r[27]|c->r[27]; // 80041AA0
  c->r[5]=c->r[28]|c->r[28]; // 80041AA4
  c->lr=0x80041AACu; f_80041854(c); // 80041AA8
L_80041AAC:;
  c->r[29]=c->r[29]+0x00000001u; // 80041AAC
  c->r[30]=c->r[30]+0x00000004u; // 80041AB0
  cmps(c,0,(int32_t)c->r[29],4); // 80041AB4
  c->r[31]=c->r[31]+0x00000004u; // 80041AB8
  if (crb(c,0)) { IRQCHK(c); goto L_800418B8; } // 80041ABC
  c->r[0]=R32(c->r[26]+0x00000138u); // 80041AC0
  cmps(c,0,(int32_t)c->r[0],94); // 80041AC4
  if (!crb(c,2)) { goto L_80041ADC; } // 80041AC8
  c->r[3]=c->r[26]|c->r[26]; // 80041ACC
  c->r[4]=c->r[27]|c->r[27]; // 80041AD0
  c->r[5]=c->r[28]|c->r[28]; // 80041AD4
  c->lr=0x80041ADCu; f_80043C3C(c); // 80041AD8
L_80041ADC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80041AE0
  c->lr=c->r[0]; // 80041AE4
  c->r[1]=c->r[1]+0x00000020u; // 80041AE8
  return; // 80041AEC
}

// fn_80041AF0
void f_80041AF0(Ctx* __restrict c) {
  trace_call(0x80041AF0u);
  c->r[0]=0u+0x00000001u; // 80041AF0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80041AF4
  return; // 80041AF8
}

// fn_80041AFC
void f_80041AFC(Ctx* __restrict c) {
  trace_call(0x80041AFCu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80041AFC
  c->r[12]=c->r[1]|c->r[1]; // 80041B00
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 80041B04
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80041B08
  c->r[0]=c->lr; // 80041B0C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80041B10
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80041B14
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80041B18
  c->r[30]=c->r[3]|c->r[3]; // 80041B1C
  c->r[0]=R32(c->r[13]+0xFFFF80A0u); // 80041B20
  cmps(c,1,(int32_t)c->r[0],0); // 80041B24
  if (crb(c,6)) { goto L_80041C40; } // 80041B28
  c->r[3]=0u+0x803C0000u; // 80041B2C
  c->r[3]=c->r[3]+0x00002300u; // 80041B30
  c->lr=0x80041B38u; f_8003D398(c); // 80041B34
  c->r[31]=R32(c->r[30]+0x00000030u); // 80041B38
  c->r[5]=0u+0x00000002u; // 80041B3C
  c->r[4]=0u+0x00000001u; // 80041B40
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 80041B44
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80041B48
  c->r[6]=c->r[31]+0x0000001Cu; // 80041B4C
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 80041B50
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 80041B54
  c->r[0]=c->r[4]&c->r[0]; // 80041B58
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 80041B5C
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80041B60
  {uint32_t ea=c->r[3]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80041B64
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80041B68
  cmpu(c,1,c->r[0],0x00000001u); // 80041B6C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80041B70
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80041B74
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041B78
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80041B7C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041B80
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[9]);} // 80041B84
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[8]);} // 80041B88
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[7]);} // 80041B8C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[6]);} // 80041B90
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 80041B94
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 80041B98
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 80041B9C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 80041BA0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80041BA4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80041BA8
  W32(c->r[1]+0x00000018u,c->r[6]); // 80041BAC
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 80041BB0
  W32(c->r[1]+0x00000010u,c->r[6]); // 80041BB4
  W32(c->r[1]+0x00000014u,c->r[5]); // 80041BB8
  if (!crb(c,6)) { goto L_80041BC8; } // 80041BBC
  c->r[3]=c->r[31]|c->r[31]; // 80041BC0
  c->lr=0x80041BC8u; f_8034007C(c); // 80041BC4
L_80041BC8:;
  c->r[3]=c->r[1]+0x00000030u; // 80041BC8
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80041BCC
  {uint32_t ea=c->r[31]+0x00000050u; psq_load(c,0,ea,0,0);} // 80041BD0
  c->r[4]=c->r[1]+0x00000020u; // 80041BD4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80041BD8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 80041BDC
  {uint32_t ea=c->r[31]+0x00000058u; psq_load(c,1,ea,1,0);} // 80041BE0
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80041BE4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 80041BE8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80041BEC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80041BF0
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80041BF4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80041BF8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041BFC
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 80041C00
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80041C04
  fcmp(c,0,c->f[2],c->f[3]); // 80041C08
  if (crb(c,2)) { goto L_80041C2C; } // 80041C0C
  c->f[0]=frsqrte(c->f[2]); // 80041C10
  {uint32_t ea=c->r[2]+0xFFFF86B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80041C14
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80041C18
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 80041C1C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80041C20
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80041C24
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80041C28
L_80041C2C:;
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041C2C
  fcmp(c,1,c->f[2],c->f[0]); // 80041C30
  if (!crb(c,4)) { goto L_80041C40; } // 80041C34
  c->r[0]=0u+0x00000002u; // 80041C38
  W32(c->r[30]+0x000000C0u,c->r[0]); // 80041C3C
L_80041C40:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80041C40
  c->r[0]=R32(c->r[10]+0x00000004u); // 80041C44
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80041C48
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80041C4C
  c->lr=c->r[0]; // 80041C50
  c->r[1]=c->r[10]|c->r[10]; // 80041C54
  return; // 80041C58
}

// fn_80041C5C
void f_80041C5C(Ctx* __restrict c) {
  trace_call(0x80041C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041C5C
  c->r[0]=c->lr; // 80041C60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041C64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041C68
  c->r[31]=c->r[3]|c->r[3]; // 80041C6C
  c->lr=0x80041C74u; f_800415D4(c); // 80041C70
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80041C74
  c->r[8]=R32(c->r[13]+0xFFFF9524u); // 80041C78
  c->r[5]=R32(c->r[3]+0x00000018u); // 80041C7C
  c->r[4]=R32(c->r[5]+0x00000000u); // 80041C80
  c->r[7]=R32(c->r[5]+0x00000004u); // 80041C84
  c->r[3]=R32(c->r[4]+0x00000000u); // 80041C88
  c->r[0]=R32(c->r[4]+0x00000004u); // 80041C8C
  c->r[4]=c->r[7]|c->r[7]; // 80041C90
  c->r[6]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80041C94
  c->r[0]=c->r[0]-c->r[3]; // 80041C98
  c->r[0]=sraw(c,c->r[0],2); // 80041C9C
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80041CA0
  c->r[0]=c->r[3]-c->r[7]; // 80041CA4
  c->ctr=c->r[0]; // 80041CA8
  cmpu(c,0,c->r[7],c->r[3]); // 80041CAC
  if (!crb(c,0)) { goto L_80041CF0; } // 80041CB0
L_80041CB4:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041CB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041CB8
  c->r[3]=R32(c->r[3]+c->r[6]); // 80041CBC
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041CC0
  cmpu(c,0,c->r[8],c->r[0]); // 80041CC4
  if (!crb(c,2)) { goto L_80041CE4; } // 80041CC8
  W32(c->r[5]+0x00000004u,c->r[4]); // 80041CCC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80041CD0
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041CD4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041CD8
  c->r[0]=R32(c->r[3]+c->r[0]); // 80041CDC
  goto L_80041D44; // 80041CE0
L_80041CE4:;
  c->r[6]=c->r[6]+0x00000004u; // 80041CE4
  c->r[4]=c->r[4]+0x00000001u; // 80041CE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80041CB4; } // 80041CEC
L_80041CF0:;
  c->r[6]=0u+0x00000000u; // 80041CF0
  c->r[4]=0u+0x00000000u; // 80041CF4
  c->ctr=c->r[7]; // 80041CF8
  cmpu(c,0,c->r[7],0x00000000u); // 80041CFC
  if (!crb(c,1)) { goto L_80041D40; } // 80041D00
L_80041D04:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041D04
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041D08
  c->r[3]=R32(c->r[3]+c->r[4]); // 80041D0C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041D10
  cmpu(c,0,c->r[8],c->r[0]); // 80041D14
  if (!crb(c,2)) { goto L_80041D34; } // 80041D18
  W32(c->r[5]+0x00000004u,c->r[6]); // 80041D1C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80041D20
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041D24
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041D28
  c->r[0]=R32(c->r[3]+c->r[0]); // 80041D2C
  goto L_80041D44; // 80041D30
L_80041D34:;
  c->r[4]=c->r[4]+0x00000004u; // 80041D34
  c->r[6]=c->r[6]+0x00000001u; // 80041D38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80041D04; } // 80041D3C
L_80041D40:;
  c->r[0]=0u+0x00000000u; // 80041D40
L_80041D44:;
  cmps(c,0,(int32_t)c->r[0],0); // 80041D44
  if (crb(c,2)) { goto L_80041E70; } // 80041D48
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80041D4C
  c->r[8]=R32(c->r[13]+0xFFFF9524u); // 80041D50
  c->r[5]=R32(c->r[3]+0x00000018u); // 80041D54
  c->r[4]=R32(c->r[5]+0x00000000u); // 80041D58
  c->r[7]=R32(c->r[5]+0x00000004u); // 80041D5C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80041D60
  c->r[0]=R32(c->r[4]+0x00000004u); // 80041D64
  c->r[4]=c->r[7]|c->r[7]; // 80041D68
  c->r[6]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80041D6C
  c->r[0]=c->r[0]-c->r[3]; // 80041D70
  c->r[0]=sraw(c,c->r[0],2); // 80041D74
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80041D78
  c->r[0]=c->r[3]-c->r[7]; // 80041D7C
  c->ctr=c->r[0]; // 80041D80
  cmpu(c,0,c->r[7],c->r[3]); // 80041D84
  if (!crb(c,0)) { goto L_80041DC8; } // 80041D88
L_80041D8C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041D8C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041D90
  c->r[3]=R32(c->r[3]+c->r[6]); // 80041D94
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041D98
  cmpu(c,0,c->r[8],c->r[0]); // 80041D9C
  if (!crb(c,2)) { goto L_80041DBC; } // 80041DA0
  W32(c->r[5]+0x00000004u,c->r[4]); // 80041DA4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80041DA8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041DAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041DB0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80041DB4
  goto L_80041E1C; // 80041DB8
L_80041DBC:;
  c->r[6]=c->r[6]+0x00000004u; // 80041DBC
  c->r[4]=c->r[4]+0x00000001u; // 80041DC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80041D8C; } // 80041DC4
L_80041DC8:;
  c->r[6]=0u+0x00000000u; // 80041DC8
  c->r[4]=0u+0x00000000u; // 80041DCC
  c->ctr=c->r[7]; // 80041DD0
  cmpu(c,0,c->r[7],0x00000000u); // 80041DD4
  if (!crb(c,1)) { goto L_80041E18; } // 80041DD8
L_80041DDC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041DDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041DE0
  c->r[3]=R32(c->r[3]+c->r[4]); // 80041DE4
  c->r[0]=R32(c->r[3]+0x00000014u); // 80041DE8
  cmpu(c,0,c->r[8],c->r[0]); // 80041DEC
  if (!crb(c,2)) { goto L_80041E0C; } // 80041DF0
  W32(c->r[5]+0x00000004u,c->r[6]); // 80041DF4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80041DF8
  c->r[3]=R32(c->r[5]+0x00000000u); // 80041DFC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80041E00
  c->r[3]=R32(c->r[3]+c->r[0]); // 80041E04
  goto L_80041E1C; // 80041E08
L_80041E0C:;
  c->r[4]=c->r[4]+0x00000004u; // 80041E0C
  c->r[6]=c->r[6]+0x00000001u; // 80041E10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80041DDC; } // 80041E14
L_80041E18:;
  c->r[3]=0u+0x00000000u; // 80041E18
L_80041E1C:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80041E1C
  cmps(c,0,(int32_t)c->r[4],37); // 80041E20
  if (!crb(c,1)) { goto L_80041E3C; } // 80041E24
  c->r[0]=R32(c->r[3]+0x00000010u); // 80041E28
  cmpu(c,0,c->r[0],0x00000001u); // 80041E2C
  if (!crb(c,2)) { goto L_80041E3C; } // 80041E30
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80041E34
  goto L_80041E64; // 80041E38
L_80041E3C:;
  cmps(c,0,(int32_t)c->r[4],26); // 80041E3C
  if (crb(c,0)) { goto L_80041E4C; } // 80041E40
  cmps(c,0,(int32_t)c->r[4],36); // 80041E44
  if (!crb(c,2)) { goto L_80041E60; } // 80041E48
L_80041E4C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80041E4C
  cmpu(c,0,c->r[0],0x00000001u); // 80041E50
  if (!crb(c,2)) { goto L_80041E60; } // 80041E54
  c->r[3]=c->r[3]+0x00000008u; // 80041E58
  goto L_80041E64; // 80041E5C
L_80041E60:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80041E60
L_80041E64:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041E64
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80041E68
  goto L_80041E78; // 80041E6C
L_80041E70:;
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041E70
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80041E74
L_80041E78:;
  c->r[0]=0u+0x00000003u; // 80041E78
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80041E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041E80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041E84
  c->lr=c->r[0]; // 80041E88
  c->r[1]=c->r[1]+0x00000010u; // 80041E8C
  return; // 80041E90
}

// fn_80041E94
void f_80041E94(Ctx* __restrict c) {
  trace_call(0x80041E94u);
  c->r[0]=0u+0x00000004u; // 80041E94
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80041E98
  return; // 80041E9C
}

// fn_80041EA0
void f_80041EA0(Ctx* __restrict c) {
  trace_call(0x80041EA0u);
  f_80041EA4(c); return; // 80041EA0
}

// fn_80041EA4
void f_80041EA4(Ctx* __restrict c) {
  trace_call(0x80041EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041EA4
  c->r[0]=c->lr; // 80041EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041EB0
  c->r[31]=c->r[3]|c->r[3]; // 80041EB4
  c->r[0]=R32(c->r[3]+0x000000C0u); // 80041EB8
  cmps(c,0,(int32_t)c->r[0],4); // 80041EBC
  if (!crb(c,2)) { goto L_80041F18; } // 80041EC0
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80041EC4
  {uint32_t ea=c->r[2]+0xFFFF86ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80041EC8
  fcmp(c,0,c->f[1],c->f[0]); // 80041ECC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80041ED0
  if (!crb(c,2)) { goto L_80041EF4; } // 80041ED4
  c->lr=0x80041EDCu; f_80041F90(c); // 80041ED8
  c->r[0]=R32(c->r[31]+0x00000130u); // 80041EDC
  c->r[3]=0u+0x00000005u; // 80041EE0
  W32(c->r[31]+0x000000C0u,c->r[3]); // 80041EE4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80041EE8
  W32(c->r[31]+0x00000130u,c->r[0]); // 80041EEC
  goto L_80041F60; // 80041EF0
L_80041EF4:;
  c->r[4]=0u+0x803D0000u; // 80041EF4
  c->r[4]=c->r[4]+0x0000407Cu; // 80041EF8
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80041EFC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041F00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80041F04
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80041F08
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 80041F0C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[2]);} // 80041F10
  goto L_80041F60; // 80041F14
L_80041F18:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 80041F18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80041F1C
  if (!crb(c,2)) { goto L_80041F60; } // 80041F20
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80041F24
  {uint32_t ea=c->r[2]+0xFFFF86ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80041F28
  fcmp(c,0,c->f[1],c->f[0]); // 80041F2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80041F30
  if (!crb(c,2)) { goto L_80041F40; } // 80041F34
  c->lr=0x80041F3Cu; f_80041F90(c); // 80041F38
  goto L_80041F60; // 80041F3C
L_80041F40:;
  c->r[4]=0u+0x803D0000u; // 80041F40
  c->r[4]=c->r[4]+0x0000407Cu; // 80041F44
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80041F48
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041F4C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80041F50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80041F54
  c->f[2]=(c->f[2]>=0.0)?c->f[0]:c->f[1]; // 80041F58
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[2]);} // 80041F5C
L_80041F60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041F60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041F64
  c->lr=c->r[0]; // 80041F68
  c->r[1]=c->r[1]+0x00000010u; // 80041F6C
  return; // 80041F70
}

// fn_80041F74
void f_80041F74(Ctx* __restrict c) {
  trace_call(0x80041F74u);
  c->r[0]=R32(c->r[3]+0x00000130u); // 80041F74
  c->r[4]=0u+0x00000000u; // 80041F78
  W32(c->r[3]+0x000000C0u,c->r[4]); // 80041F7C
  c->r[0]=c->r[0]|0x80000000u; // 80041F80
  W32(c->r[3]+0x00000130u,c->r[0]); // 80041F84
  W32(c->r[3]+0x00000134u,c->r[4]); // 80041F88
  return; // 80041F8C
}

// fn_80041F90
void f_80041F90(Ctx* __restrict c) {
  trace_call(0x80041F90u);
  c->r[0]=R8(c->r[3]+0x0000013Cu); // 80041F90
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80041F94
  if (crb(c,2)) return; // 80041F98
  c->r[6]=R32(c->r[3]+0x000000D0u); // 80041F9C
  c->r[0]=0u+0x00000002u; // 80041FA0
  cmps(c,0,(int32_t)c->r[6],0); // 80041FA4
  if (crb(c,2)) { goto L_80041FC0; } // 80041FA8
  c->r[5]=R32(c->r[6]+0x000000C0u); // 80041FAC
  cmpu(c,0,c->r[5],0x00000001u); // 80041FB0
  if (crb(c,1)) { goto L_80041FC0; } // 80041FB4
  W32(c->r[6]+0x000000C0u,c->r[0]); // 80041FB8
  W32(c->r[6]+0x000000E8u,c->r[3]); // 80041FBC
L_80041FC0:;
  c->r[6]=R32(c->r[3]+0x000000D4u); // 80041FC0
  cmps(c,0,(int32_t)c->r[6],0); // 80041FC4
  if (crb(c,2)) { goto L_80041FE0; } // 80041FC8
  c->r[5]=R32(c->r[6]+0x000000C0u); // 80041FCC
  cmpu(c,0,c->r[5],0x00000001u); // 80041FD0
  if (crb(c,1)) { goto L_80041FE0; } // 80041FD4
  W32(c->r[6]+0x000000C0u,c->r[0]); // 80041FD8
  W32(c->r[6]+0x000000E8u,c->r[3]); // 80041FDC
L_80041FE0:;
  c->r[6]=R32(c->r[3]+0x000000D8u); // 80041FE0
  c->r[4]=c->r[3]+0x00000008u; // 80041FE4
  cmps(c,0,(int32_t)c->r[6],0); // 80041FE8
  if (crb(c,2)) { goto L_80042004; } // 80041FEC
  c->r[5]=R32(c->r[6]+0x000000C0u); // 80041FF0
  cmpu(c,0,c->r[5],0x00000001u); // 80041FF4
  if (crb(c,1)) { goto L_80042004; } // 80041FF8
  W32(c->r[6]+0x000000C0u,c->r[0]); // 80041FFC
  W32(c->r[6]+0x000000E8u,c->r[3]); // 80042000
L_80042004:;
  c->r[6]=R32(c->r[4]+0x000000D4u); // 80042004
  cmps(c,0,(int32_t)c->r[6],0); // 80042008
  if (crb(c,2)) { goto L_80042024; } // 8004200C
  c->r[5]=R32(c->r[6]+0x000000C0u); // 80042010
  cmpu(c,0,c->r[5],0x00000001u); // 80042014
  if (crb(c,1)) { goto L_80042024; } // 80042018
  W32(c->r[6]+0x000000C0u,c->r[0]); // 8004201C
  W32(c->r[6]+0x000000E8u,c->r[3]); // 80042020
L_80042024:;
  c->r[0]=R8(c->r[3]+0x0000013Cu); // 80042024
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 80042028
  W8(c->r[3]+0x0000013Cu,c->r[0]); // 8004202C
  return; // 80042030
}

// fn_80042034
void f_80042034(Ctx* __restrict c) {
  trace_call(0x80042034u);
  c->r[0]=R32(c->r[3]+0x000000F0u); // 80042034
  c->r[9]=R32(c->r[3]+0x00000120u); // 80042038
  cmps(c,0,(int32_t)c->r[0],-1); // 8004203C
  c->r[0]=c->r[9]+c->r[6]; // 80042040
  W32(c->r[3]+0x00000120u,c->r[0]); // 80042044
  if (crb(c,2)) { goto L_80042058; } // 80042048
  c->r[0]=R32(c->r[3]+0x000000F4u); // 8004204C
  cmps(c,0,(int32_t)c->r[0],0); // 80042050
  if (!crb(c,2)) return; // 80042054
L_80042058:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80042058
  {uint32_t ea=c->r[7]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004205C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042060
  {uint32_t ea=c->r[8]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80042064
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80042068
  {uint32_t ea=c->r[8]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004206C
  W32(c->r[3]+0x000000F0u,c->r[4]); // 80042070
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[5]);} // 80042074
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[4]);} // 80042078
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[3]);} // 8004207C
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[2]);} // 80042080
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[1]);} // 80042084
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 80042088
  W32(c->r[3]+0x000000F4u,c->r[5]); // 8004208C
  return; // 80042090
}

// fn_80042094
void f_80042094(Ctx* __restrict c) {
  trace_call(0x80042094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042094
  c->r[0]=c->lr; // 80042098
  c->r[5]=0u+0x00000040u; // 8004209C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800420A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800420A4
  c->r[31]=c->r[4]|c->r[4]; // 800420A8
  c->r[4]=0u+0x00000000u; // 800420AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800420B0
  c->r[30]=c->r[3]|c->r[3]; // 800420B4
  c->r[3]=c->r[3]+0x000000F0u; // 800420B8
  c->lr=0x800420C0u; f_80004350(c); // 800420BC
  cmps(c,0,(int32_t)c->r[31],0); // 800420C0
  c->r[0]=0u+0xFFFFFFFFu; // 800420C4
  W32(c->r[30]+0x000000F0u,c->r[0]); // 800420C8
  if (crb(c,2)) { goto L_800420E0; } // 800420CC
  c->r[0]=R32(c->r[30]+0x00000130u); // 800420D0
  W32(c->r[30]+0x00000134u,c->r[31]); // 800420D4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800420D8
  W32(c->r[30]+0x00000130u,c->r[0]); // 800420DC
L_800420E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800420E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800420E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800420E8
  c->lr=c->r[0]; // 800420EC
  c->r[1]=c->r[1]+0x00000010u; // 800420F0
  return; // 800420F4
}

// fn_800420F8
void f_800420F8(Ctx* __restrict c) {
  trace_call(0x800420F8u);
  cmps(c,0,(int32_t)c->r[3],0); // 800420F8
  if (crb(c,2)) { goto L_80042118; } // 800420FC
  c->r[4]=R32(c->r[3]+0x00000078u); // 80042100
  cmps(c,0,(int32_t)c->r[4],0); // 80042104
  if (crb(c,2)) { goto L_80042118; } // 80042108
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8004210C
  cmps(c,0,(int32_t)c->r[0],115); // 80042110
  if (!crb(c,1)) return; // 80042114
L_80042118:;
  c->r[3]=0u+0x00000000u; // 80042118
  return; // 8004211C
}

// fn_80042120
void f_80042120(Ctx* __restrict c) {
  trace_call(0x80042120u);
  cmps(c,0,(int32_t)c->r[3],0); // 80042120
  if (crb(c,2)) { goto L_80042134; } // 80042124
  c->r[0]=R32(c->r[3]+0x00000078u); // 80042128
  cmps(c,0,(int32_t)c->r[0],117); // 8004212C
  if (crb(c,2)) return; // 80042130
L_80042134:;
  c->r[3]=0u+0x00000000u; // 80042134
  return; // 80042138
}

// fn_8004213C
void f_8004213C(Ctx* __restrict c) {
  trace_call(0x8004213Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004213C
  c->r[0]=c->lr; // 80042140
  c->r[3]=0u+0x803D0000u; // 80042144
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042148
  c->r[3]=c->r[3]+0x0000407Cu; // 8004214C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80042150
  W32(c->r[1]+0x00000018u,c->r[30]); // 80042154
  c->r[30]=0u+0x00000000u; // 80042158
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004215C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80042160
  c->r[28]=0u+0x00000000u; // 80042164
  c->r[29]=R32(c->r[3]+0x00000004u); // 80042168
  goto L_800421A4; // 8004216C
L_80042170:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80042170
  c->r[31]=R32(c->r[3]+c->r[30]); // 80042174
  c->r[3]=c->r[31]|c->r[31]; // 80042178
  c->lr=0x80042180u; f_800420F8(c); // 8004217C
  cmps(c,0,(int32_t)c->r[3],0); // 80042180
  if (crb(c,2)) { goto L_8004219C; } // 80042184
  c->r[12]=R32(c->r[31]+0x00000014u); // 80042188
  c->r[3]=c->r[31]|c->r[31]; // 8004218C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80042190
  c->ctr=c->r[12]; // 80042194
  if (true) { c->lr=0x8004219Cu; dispatch(c,c->ctr); } // 80042198
L_8004219C:;
  c->r[30]=c->r[30]+0x00000004u; // 8004219C
  c->r[28]=c->r[28]+0x00000001u; // 800421A0
L_800421A4:;
  c->r[4]=R32(c->r[29]+0x00000028u); // 800421A4
  c->r[3]=R32(c->r[4]+0x00000000u); // 800421A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800421AC
  c->r[0]=c->r[0]-c->r[3]; // 800421B0
  c->r[0]=sraw(c,c->r[0],2); // 800421B4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800421B8
  cmpu(c,0,c->r[28],c->r[0]); // 800421BC
  if (crb(c,0)) { IRQCHK(c); goto L_80042170; } // 800421C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800421C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800421C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800421CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800421D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800421D4
  c->lr=c->r[0]; // 800421D8
  c->r[1]=c->r[1]+0x00000020u; // 800421DC
  return; // 800421E0
}

// fn_800421E4
void f_800421E4(Ctx* __restrict c) {
  trace_call(0x800421E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800421E4
  c->r[0]=c->lr; // 800421E8
  c->r[4]=0u+0x803D0000u; // 800421EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800421F0
  c->r[4]=c->r[4]+0x0000407Cu; // 800421F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800421F8
  c->r[26]=c->r[3]|c->r[3]; // 800421FC
  c->r[29]=R32(c->r[2]+0xFFFFBF18u); // 80042200
  c->r[27]=0u+0x00000000u; // 80042204
  c->r[30]=0u+0x00000000u; // 80042208
  c->r[31]=R32(c->r[4]+0x00000004u); // 8004220C
  goto L_80042284; // 80042210
L_80042214:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80042214
  c->r[28]=R32(c->r[3]+c->r[30]); // 80042218
  c->r[3]=c->r[28]|c->r[28]; // 8004221C
  c->lr=0x80042224u; f_800420F8(c); // 80042220
  cmps(c,0,(int32_t)c->r[3],0); // 80042224
  if (crb(c,2)) { goto L_8004227C; } // 80042228
  c->r[3]=R32(c->r[28]+0x00000030u); // 8004222C
  c->r[3]=R32(c->r[3]+0x00000018u); // 80042230
  cmpu(c,0,c->r[3],c->r[26]); // 80042234
  if (!crb(c,2)) { goto L_80042244; } // 80042238
  c->r[0]=0u+0x00000001u; // 8004223C
  goto L_8004226C; // 80042240
L_80042244:;
  cmps(c,0,(int32_t)c->r[26],0); // 80042244
  if (crb(c,2)) { goto L_80042254; } // 80042248
  cmpu(c,0,c->r[3],c->r[29]); // 8004224C
  if (!crb(c,2)) { goto L_8004225C; } // 80042250
L_80042254:;
  c->r[0]=0u+0x00000000u; // 80042254
  goto L_8004226C; // 80042258
L_8004225C:;
  c->r[4]=c->r[26]|c->r[26]; // 8004225C
  c->lr=0x80042264u; f_800CA380(c); // 80042260
  c->r[0]=cntlz(c->r[3]); // 80042264
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80042268
L_8004226C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8004226C
  if (crb(c,2)) { goto L_8004227C; } // 80042270
  c->r[3]=c->r[28]|c->r[28]; // 80042274
  goto L_800422A8; // 80042278
L_8004227C:;
  c->r[30]=c->r[30]+0x00000004u; // 8004227C
  c->r[27]=c->r[27]+0x00000001u; // 80042280
L_80042284:;
  c->r[4]=R32(c->r[31]+0x00000028u); // 80042284
  c->r[3]=R32(c->r[4]+0x00000000u); // 80042288
  c->r[0]=R32(c->r[4]+0x00000004u); // 8004228C
  c->r[0]=c->r[0]-c->r[3]; // 80042290
  c->r[0]=sraw(c,c->r[0],2); // 80042294
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80042298
  cmpu(c,0,c->r[27],c->r[0]); // 8004229C
  if (crb(c,0)) { IRQCHK(c); goto L_80042214; } // 800422A0
  c->r[3]=0u+0x00000000u; // 800422A4
L_800422A8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800422A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800422AC
  c->lr=c->r[0]; // 800422B0
  c->r[1]=c->r[1]+0x00000020u; // 800422B4
  return; // 800422B8
}

// fn_800422BC
void f_800422BC(Ctx* __restrict c) {
  trace_call(0x800422BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800422BC
  c->r[0]=c->lr; // 800422C0
  c->r[3]=0u+0x803D0000u; // 800422C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800422C8
  c->r[3]=c->r[3]+0x0000407Cu; // 800422CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800422D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800422D4
  c->r[30]=0u+0x00000000u; // 800422D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800422DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800422E0
  c->r[28]=0u+0x00000000u; // 800422E4
  c->r[29]=R32(c->r[3]+0x00000004u); // 800422E8
  goto L_8004232C; // 800422EC
L_800422F0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800422F0
  c->r[31]=R32(c->r[3]+c->r[30]); // 800422F4
  c->r[3]=c->r[31]|c->r[31]; // 800422F8
  c->lr=0x80042300u; f_800420F8(c); // 800422FC
  cmps(c,0,(int32_t)c->r[3],0); // 80042300
  if (crb(c,2)) { goto L_80042324; } // 80042304
  c->r[3]=c->r[31]|c->r[31]; // 80042308
  c->lr=0x80042310u; f_800415D4(c); // 8004230C
  c->r[0]=R32(c->r[31]+0x00000138u); // 80042310
  cmps(c,0,(int32_t)c->r[0],94); // 80042314
  if (!crb(c,2)) { goto L_80042324; } // 80042318
  c->r[3]=c->r[31]|c->r[31]; // 8004231C
  c->lr=0x80042324u; f_800439A0(c); // 80042320
L_80042324:;
  c->r[30]=c->r[30]+0x00000004u; // 80042324
  c->r[28]=c->r[28]+0x00000001u; // 80042328
L_8004232C:;
  c->r[4]=R32(c->r[29]+0x00000028u); // 8004232C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80042330
  c->r[0]=R32(c->r[4]+0x00000004u); // 80042334
  c->r[0]=c->r[0]-c->r[3]; // 80042338
  c->r[0]=sraw(c,c->r[0],2); // 8004233C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80042340
  cmpu(c,0,c->r[28],c->r[0]); // 80042344
  if (crb(c,0)) { IRQCHK(c); goto L_800422F0; } // 80042348
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004234C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80042350
  c->r[30]=R32(c->r[1]+0x00000018u); // 80042354
  c->r[29]=R32(c->r[1]+0x00000014u); // 80042358
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004235C
  c->lr=c->r[0]; // 80042360
  c->r[1]=c->r[1]+0x00000020u; // 80042364
  return; // 80042368
}

// fn_8004236C
void f_8004236C(Ctx* __restrict c) {
  trace_call(0x8004236Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004236C
  c->r[0]=c->lr; // 80042370
  c->r[3]=0u+0x803D0000u; // 80042374
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042378
  c->r[3]=c->r[3]+0x0000407Cu; // 8004237C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80042380
  W32(c->r[1]+0x00000018u,c->r[30]); // 80042384
  W32(c->r[1]+0x00000014u,c->r[29]); // 80042388
  c->r[29]=0u+0x00000000u; // 8004238C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80042390
  c->r[28]=0u+0x00000000u; // 80042394
  c->r[31]=R32(c->r[3]+0x00000004u); // 80042398
  goto L_800423CC; // 8004239C
L_800423A0:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800423A0
  c->r[30]=R32(c->r[3]+c->r[29]); // 800423A4
  c->r[3]=c->r[30]|c->r[30]; // 800423A8
  c->lr=0x800423B0u; f_800420F8(c); // 800423AC
  cmps(c,0,(int32_t)c->r[3],0); // 800423B0
  if (crb(c,2)) { goto L_800423C4; } // 800423B4
  c->r[0]=R8(c->r[30]+0x0000013Cu); // 800423B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800423BC
  W8(c->r[30]+0x0000013Cu,c->r[0]); // 800423C0
L_800423C4:;
  c->r[29]=c->r[29]+0x00000004u; // 800423C4
  c->r[28]=c->r[28]+0x00000001u; // 800423C8
L_800423CC:;
  c->r[4]=R32(c->r[31]+0x00000028u); // 800423CC
  c->r[3]=R32(c->r[4]+0x00000000u); // 800423D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800423D4
  c->r[0]=c->r[0]-c->r[3]; // 800423D8
  c->r[0]=sraw(c,c->r[0],2); // 800423DC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800423E0
  cmpu(c,0,c->r[28],c->r[0]); // 800423E4
  if (crb(c,0)) { IRQCHK(c); goto L_800423A0; } // 800423E8
  c->r[28]=0u+0x00000000u; // 800423EC
  c->r[30]=0u+0x00000000u; // 800423F0
  goto L_80042458; // 800423F4
L_800423F8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800423F8
  c->r[29]=R32(c->r[3]+c->r[30]); // 800423FC
  c->r[3]=c->r[29]|c->r[29]; // 80042400
  c->lr=0x80042408u; f_800420F8(c); // 80042404
  cmps(c,0,(int32_t)c->r[3],0); // 80042408
  if (crb(c,2)) { goto L_80042450; } // 8004240C
  c->r[0]=R32(c->r[29]+0x00000138u); // 80042410
  cmps(c,0,(int32_t)c->r[0],102); // 80042414
  if (!crb(c,2)) { goto L_80042430; } // 80042418
  W32(c->r[13]+0xFFFF9530u,c->r[29]); // 8004241C
  c->r[3]=c->r[29]|c->r[29]; // 80042420
  c->r[5]=0u+0x00000066u; // 80042424
  c->r[4]=R32(c->r[29]+0x00000148u); // 80042428
  c->lr=0x80042430u; f_80041854(c); // 8004242C
L_80042430:;
  c->r[0]=R32(c->r[29]+0x00000138u); // 80042430
  cmps(c,0,(int32_t)c->r[0],103); // 80042434
  if (!crb(c,2)) { goto L_80042450; } // 80042438
  W32(c->r[13]+0xFFFF9534u,c->r[29]); // 8004243C
  c->r[3]=c->r[29]|c->r[29]; // 80042440
  c->r[5]=0u+0x00000067u; // 80042444
  c->r[4]=R32(c->r[29]+0x00000148u); // 80042448
  c->lr=0x80042450u; f_80041854(c); // 8004244C
L_80042450:;
  c->r[30]=c->r[30]+0x00000004u; // 80042450
  c->r[28]=c->r[28]+0x00000001u; // 80042454
L_80042458:;
  c->r[4]=R32(c->r[31]+0x00000028u); // 80042458
  c->r[3]=R32(c->r[4]+0x00000000u); // 8004245C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80042460
  c->r[0]=c->r[0]-c->r[3]; // 80042464
  c->r[0]=sraw(c,c->r[0],2); // 80042468
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8004246C
  cmpu(c,0,c->r[28],c->r[0]); // 80042470
  if (crb(c,0)) { IRQCHK(c); goto L_800423F8; } // 80042474
  c->r[0]=0u+0x00000000u; // 80042478
  W32(c->r[13]+0xFFFF9530u,c->r[0]); // 8004247C
  W32(c->r[13]+0xFFFF9534u,c->r[0]); // 80042480
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80042484
  c->r[30]=R32(c->r[1]+0x00000018u); // 80042488
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004248C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80042490
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042494
  c->lr=c->r[0]; // 80042498
  c->r[1]=c->r[1]+0x00000020u; // 8004249C
  return; // 800424A0
}

// fn_800424A4
void f_800424A4(Ctx* __restrict c) {
  trace_call(0x800424A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800424A4
  c->r[0]=c->lr; // 800424A8
  c->r[4]=0u+0x803D0000u; // 800424AC
  c->r[3]=0u+0x80370000u; // 800424B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800424B4
  c->r[4]=c->r[4]+0x0000407Cu; // 800424B8
  c->r[3]=c->r[3]+0x00003EF8u; // 800424BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800424C0
  c->r[25]=c->r[3]+0x00000073u; // 800424C4
  c->r[3]=c->r[25]|c->r[25]; // 800424C8
  c->r[26]=R32(c->r[4]+0x00000004u); // 800424CC
  c->lr=0x800424D4u; f_800C297C(c); // 800424D0
  c->r[30]=0u+0x803C0000u; // 800424D4
  c->r[24]=c->r[3]|c->r[3]; // 800424D8
  c->r[23]=0u+0x00000000u; // 800424DC
  c->r[27]=0u+0x00000000u; // 800424E0
  c->r[31]=c->r[30]+0x00002E50u; // 800424E4
  goto L_8004260C; // 800424E8
L_800424EC:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800424EC
  c->r[29]=R32(c->r[3]+c->r[27]); // 800424F0
  c->r[3]=c->r[29]|c->r[29]; // 800424F4
  c->lr=0x800424FCu; f_800420F8(c); // 800424F8
  cmps(c,0,(int32_t)c->r[3],0); // 800424FC
  if (crb(c,2)) { goto L_80042604; } // 80042500
  c->r[3]=R32(c->r[29]+0x00000030u); // 80042504
  c->r[28]=R32(c->r[3]+0x00000018u); // 80042508
  c->r[3]=c->r[28]|c->r[28]; // 8004250C
  c->lr=0x80042514u; f_800C297C(c); // 80042510
  cmpu(c,0,c->r[3],c->r[24]); // 80042514
  if (!crb(c,1)) { goto L_80042604; } // 80042518
  c->r[3]=c->r[28]|c->r[28]; // 8004251C
  c->r[4]=c->r[25]|c->r[25]; // 80042520
  c->r[5]=c->r[24]|c->r[24]; // 80042524
  c->lr=0x8004252Cu; f_800D2CB8(c); // 80042528
  cmps(c,0,(int32_t)c->r[3],0); // 8004252C
  if (crb(c,2)) { goto L_80042604; } // 80042530
  c->r[4]=R32(c->r[31]+0x00000004u); // 80042534
  c->r[0]=R32(c->r[31]+0x00000008u); // 80042538
  cmpu(c,0,c->r[0],c->r[4]); // 8004253C
  if (crb(c,1)) { goto L_800425F0; } // 80042540
  c->r[0]=R32(c->r[30]+0x00002E50u); // 80042544
  c->r[3]=R32(c->r[31]+0x00000010u); // 80042548
  c->r[0]=c->r[4]-c->r[0]; // 8004254C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80042550
  c->r[0]=sraw(c,c->r[0],2); // 80042554
  c->r[12]=R32(c->r[3]+0x00000000u); // 80042558
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8004255C
  c->r[0]=c->r[4]+c->r[0]; // 80042560
  c->r[12]=R32(c->r[12]+0x00000008u); // 80042564
  c->r[22]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80042568
  c->r[4]=c->r[22]|c->r[22]; // 8004256C
  c->ctr=c->r[12]; // 80042570
  if (true) { c->lr=0x80042578u; dispatch(c,c->ctr); } // 80042574
  c->r[28]=c->r[3]|c->r[3]; // 80042578
  c->r[4]=R32(c->r[31]+0x00000004u); // 8004257C
  c->r[3]=R32(c->r[30]+0x00002E50u); // 80042580
  c->r[5]=c->r[28]|c->r[28]; // 80042584
  goto L_8004259C; // 80042588
L_8004258C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8004258C
  c->r[3]=c->r[3]+0x00000004u; // 80042590
  W32(c->r[5]+0x00000000u,c->r[0]); // 80042594
  c->r[5]=c->r[5]+0x00000004u; // 80042598
L_8004259C:;
  cmpu(c,0,c->r[3],c->r[4]); // 8004259C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004258C; } // 800425A0
  c->r[4]=R32(c->r[30]+0x00002E50u); // 800425A4
  cmps(c,0,(int32_t)c->r[4],0); // 800425A8
  if (crb(c,2)) { goto L_800425C4; } // 800425AC
  c->r[3]=R32(c->r[31]+0x00000010u); // 800425B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800425B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800425B8
  c->ctr=c->r[12]; // 800425BC
  if (true) { c->lr=0x800425C4u; dispatch(c,c->ctr); } // 800425C0
L_800425C4:;
  c->r[3]=R32(c->r[30]+0x00002E50u); // 800425C4
  c->r[4]=c->r[28]+c->r[22]; // 800425C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 800425CC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800425D0
  c->r[0]=c->r[0]-c->r[3]; // 800425D4
  c->r[0]=sraw(c,c->r[0],2); // 800425D8
  W32(c->r[30]+0x00002E50u,c->r[28]); // 800425DC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800425E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800425E4
  c->r[0]=c->r[28]+c->r[0]; // 800425E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800425EC
L_800425F0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800425F0
  W32(c->r[3]+0x00000000u,c->r[29]); // 800425F4
  c->r[3]=R32(c->r[31]+0x00000004u); // 800425F8
  c->r[0]=c->r[3]+0x00000004u; // 800425FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80042600
L_80042604:;
  c->r[27]=c->r[27]+0x00000004u; // 80042604
  c->r[23]=c->r[23]+0x00000001u; // 80042608
L_8004260C:;
  c->r[4]=R32(c->r[26]+0x00000028u); // 8004260C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80042610
  c->r[0]=R32(c->r[4]+0x00000004u); // 80042614
  c->r[0]=c->r[0]-c->r[3]; // 80042618
  c->r[0]=sraw(c,c->r[0],2); // 8004261C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80042620
  cmpu(c,0,c->r[23],c->r[0]); // 80042624
  if (crb(c,0)) { IRQCHK(c); goto L_800424EC; } // 80042628
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004262C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80042630
  c->lr=c->r[0]; // 80042634
  c->r[1]=c->r[1]+0x00000030u; // 80042638
  return; // 8004263C
}

// fn_80042640
void f_80042640(Ctx* __restrict c) {
  trace_call(0x80042640u);
  c->r[4]=0u+0x803C0000u; // 80042640
  c->r[0]=0u+0x00000000u; // 80042644
  c->r[3]=c->r[4]+0x00002E50u; // 80042648
  c->r[4]=R32(c->r[4]+0x00002E50u); // 8004264C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80042650
  W32(c->r[13]+0xFFFF952Cu,c->r[0]); // 80042654
  return; // 80042658
}

// fn_8004265C
void f_8004265C(Ctx* __restrict c) {
  trace_call(0x8004265Cu);
  c->r[4]=0u+0x803C0000u; // 8004265C
  c->r[3]=c->r[4]+0x00002E50u; // 80042660
  c->r[4]=R32(c->r[4]+0x00002E50u); // 80042664
  c->r[0]=R32(c->r[3]+0x00000004u); // 80042668
  c->r[0]=c->r[0]-c->r[4]; // 8004266C
  c->r[0]=sraw(c,c->r[0],2); // 80042670
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80042674
  return; // 80042678
}

// fn_8004267C
void f_8004267C(Ctx* __restrict c) {
  trace_call(0x8004267Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004267C
  c->r[0]=c->lr; // 80042680
  c->r[3]=0u+0x803D0000u; // 80042684
  W32(c->r[1]+0x00000034u,c->r[0]); // 80042688
  c->r[3]=c->r[3]+0x0000407Cu; // 8004268C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80042690
  W32(c->r[1]+0x00000028u,c->r[30]); // 80042694
  c->r[30]=R32(c->r[3]+0x00000118u); // 80042698
  c->lr=0x800426A0u; f_8004265C(c); // 8004269C
  cmps(c,0,(int32_t)c->r[30],0); // 800426A0
  c->r[31]=c->r[3]|c->r[3]; // 800426A4
  if (!crb(c,2)) { goto L_800426B4; } // 800426A8
  cmps(c,0,(int32_t)c->r[3],0); // 800426AC
  if (!crb(c,2)) { goto L_80042778; } // 800426B0
L_800426B4:;
  c->r[3]=R32(c->r[30]+0x00000478u); // 800426B4
  c->r[5]=0u+0x00000011u; // 800426B8
  cmps(c,0,(int32_t)c->r[3],0); // 800426BC
  if (crb(c,2)) { goto L_800426D0; } // 800426C0
  c->r[4]=0u+0x00000011u; // 800426C4
  c->lr=0x800426CCu; f_802AD614(c); // 800426C8
  c->r[5]=c->r[3]|c->r[3]; // 800426CC
L_800426D0:;
  c->r[3]=0u+0x00000001u; // 800426D0
  c->r[0]=R32(c->r[30]+0x00000020u); // 800426D4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800426D8
  c->r[4]=c->r[30]+0x00000020u; // 800426DC
  c->r[0]=c->r[3]&c->r[0]; // 800426E0
  W32(c->r[1]+0x00000020u,c->r[4]); // 800426E4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 800426E8
  W32(c->r[1]+0x00000024u,c->r[5]); // 800426EC
  W32(c->r[1]+0x00000018u,c->r[4]); // 800426F0
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800426F4
  if (crb(c,2)) { goto L_80042714; } // 800426F8
  c->r[3]=R32(c->r[13]+0xFFFF952Cu); // 800426FC
  c->r[3]=c->r[3]+0x00000001u; // 80042700
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 80042704
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 80042708
  c->r[0]=c->r[3]-c->r[0]; // 8004270C
  W32(c->r[13]+0xFFFF952Cu,c->r[0]); // 80042710
L_80042714:;
  c->r[3]=R32(c->r[30]+0x00000478u); // 80042714
  c->r[5]=0u+0x00000010u; // 80042718
  cmps(c,0,(int32_t)c->r[3],0); // 8004271C
  if (crb(c,2)) { goto L_80042730; } // 80042720
  c->r[4]=0u+0x00000010u; // 80042724
  c->lr=0x8004272Cu; f_802AD614(c); // 80042728
  c->r[5]=c->r[3]|c->r[3]; // 8004272C
L_80042730:;
  c->r[3]=0u+0x00000001u; // 80042730
  c->r[0]=R32(c->r[30]+0x00000020u); // 80042734
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 80042738
  c->r[4]=c->r[30]+0x00000020u; // 8004273C
  c->r[0]=c->r[3]&c->r[0]; // 80042740
  W32(c->r[1]+0x00000010u,c->r[4]); // 80042744
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); cr0(c,c->r[0]); // 80042748
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004274C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80042750
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80042754
  if (crb(c,2)) { goto L_80042778; } // 80042758
  c->r[0]=R32(c->r[13]+0xFFFF952Cu); // 8004275C
  c->r[3]=c->r[31]+c->r[0]; // 80042760
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80042764
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 80042768
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 8004276C
  c->r[0]=c->r[3]-c->r[0]; // 80042770
  W32(c->r[13]+0xFFFF952Cu,c->r[0]); // 80042774
L_80042778:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80042778
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004277C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80042780
  c->lr=c->r[0]; // 80042784
  c->r[1]=c->r[1]+0x00000030u; // 80042788
  return; // 8004278C
}

// fn_80042790
void f_80042790(Ctx* __restrict c) {
  trace_call(0x80042790u);
  return; // 80042790
}

// fn_80042794
void f_80042794(Ctx* __restrict c) {
  trace_call(0x80042794u);
  return; // 80042794
}

// fn_80042798
void f_80042798(Ctx* __restrict c) {
  trace_call(0x80042798u);
  c->r[3]=R32(c->r[13]+0xFFFF9530u); // 80042798
  cmps(c,0,(int32_t)c->r[3],0); // 8004279C
  if (crb(c,2)) { goto L_800427AC; } // 800427A0
  c->r[3]=R32(c->r[3]+0x00000148u); // 800427A4
  return; // 800427A8
L_800427AC:;
  c->r[3]=0u+0x00000000u; // 800427AC
  return; // 800427B0
}

// fn_800427B4
void f_800427B4(Ctx* __restrict c) {
  trace_call(0x800427B4u);
  c->r[3]=R32(c->r[13]+0xFFFF9534u); // 800427B4
  cmps(c,0,(int32_t)c->r[3],0); // 800427B8
  if (crb(c,2)) { goto L_800427C8; } // 800427BC
  c->r[3]=R32(c->r[3]+0x00000148u); // 800427C0
  return; // 800427C4
L_800427C8:;
  c->r[3]=0u+0x00000000u; // 800427C8
  return; // 800427CC
}

// fn_800427D0
void f_800427D0(Ctx* __restrict c) {
  trace_call(0x800427D0u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800427D0
  c->r[12]=c->r[1]|c->r[1]; // 800427D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 800427D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800427DC
  c->r[0]=c->lr; // 800427E0
  c->r[11]=c->r[12]|c->r[12]; // 800427E4
  W32(c->r[12]+0x00000004u,c->r[0]); // 800427E8
  c->lr=0x800427F0u; f_800C2E3C(c); // 800427EC
  c->r[9]=0u+0x00000000u; // 800427F0
  c->r[7]=c->r[13]+0xFFFFA3B8u; // 800427F4
  c->r[0]=0u+0x0000000Au; // 800427F8
  W32(c->r[1]+0x00000050u,c->r[7]); // 800427FC
  c->r[7]=0u+0x803D0000u; // 80042800
  c->r[25]=c->r[4]|c->r[4]; // 80042804
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80042808
  c->r[7]=c->r[7]+0x0000407Cu; // 8004280C
  c->r[8]=R32(c->r[7]+0x00000004u); // 80042810
  c->r[26]=c->r[5]|c->r[5]; // 80042814
  W32(c->r[1]+0x00000040u,c->r[9]); // 80042818
  c->r[27]=c->r[6]|c->r[6]; // 8004281C
  c->r[0]=0u+0x00000010u; // 80042820
  c->r[24]=c->r[3]|c->r[3]; // 80042824
  W32(c->r[1]+0x00000044u,c->r[9]); // 80042828
  c->r[4]=c->r[1]+0x00000030u; // 8004282C
  c->r[5]=c->r[1]+0x00000020u; // 80042830
  c->r[6]=c->r[1]+0x00000010u; // 80042834
  W32(c->r[1]+0x00000048u,c->r[9]); // 80042838
  c->r[7]=c->r[1]+0x00000040u; // 8004283C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80042840
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80042844
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042848
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8004284C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 80042850
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042854
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80042858
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 8004285C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 80042860
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 80042864
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80042868
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8004286C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80042870
  c->r[3]=R32(c->r[8]+0x00000008u); // 80042874
  c->lr=0x8004287Cu; f_80301E34(c); // 80042878
  cmps(c,0,(int32_t)c->r[3],0); // 8004287C
  if (crb(c,2)) { goto L_80042A30; } // 80042880
  c->r[31]=0u+0x803C0000u; // 80042884
  c->r[28]=0u+0x00000000u; // 80042888
  c->r[31]=c->r[31]+0x00002724u; // 8004288C
  c->r[29]=0u+0x00000000u; // 80042890
  c->r[23]=0u+0x00000001u; // 80042894
  goto L_80042A14; // 80042898
L_8004289C:;
  c->r[30]=c->r[3]+c->r[29]; // 8004289C
  c->r[3]=R32(c->r[30]+0x00000030u); // 800428A0
  c->r[3]=R32(c->r[3]+0x00000178u); // 800428A4
  c->lr=0x800428ACu; f_800420F8(c); // 800428A8
  cmps(c,0,(int32_t)c->r[3],0); // 800428AC
  if (crb(c,2)) { goto L_80042A0C; } // 800428B0
  cmpu(c,0,c->r[3],c->r[27]); // 800428B4
  if (crb(c,2)) { goto L_80042A0C; } // 800428B8
  c->r[4]=R32(c->r[3]+0x00000078u); // 800428BC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800428C0
  cmpu(c,0,c->r[0],0x00000069u); // 800428C4
  if (crb(c,2)) { goto L_80042A0C; } // 800428C8
  c->r[4]=R32(c->r[30]+0x00000034u); // 800428CC
  c->r[5]=0u+0x00000000u; // 800428D0
  c->r[4]=R32(c->r[4]+0x00000020u); // 800428D4
  cmps(c,0,(int32_t)c->r[4],0); // 800428D8
  if (crb(c,2)) { goto L_800429F4; } // 800428DC
  c->r[7]=R32(c->r[4]+0x00000004u); // 800428E0
  c->r[9]=R32(c->r[31]+0x00000050u); // 800428E4
  c->r[4]=R32(c->r[7]+0x00000000u); // 800428E8
  c->r[10]=R32(c->r[7]+0x00000004u); // 800428EC
  c->r[5]=R32(c->r[4]+0x00000000u); // 800428F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800428F4
  c->r[6]=c->r[10]|c->r[10]; // 800428F8
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800428FC
  c->r[0]=c->r[0]-c->r[5]; // 80042900
  c->r[0]=sraw(c,c->r[0],2); // 80042904
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80042908
  c->r[0]=c->r[5]-c->r[10]; // 8004290C
  c->ctr=c->r[0]; // 80042910
  cmpu(c,0,c->r[10],c->r[5]); // 80042914
  if (!crb(c,0)) { goto L_80042954; } // 80042918
L_8004291C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 8004291C
  c->r[5]=R32(c->r[5]+c->r[8]); // 80042920
  c->r[0]=R32(c->r[5]+0x00000014u); // 80042924
  cmpu(c,0,c->r[9],c->r[0]); // 80042928
  if (!crb(c,2)) { goto L_80042948; } // 8004292C
  W32(c->r[7]+0x00000004u,c->r[6]); // 80042930
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80042934
  c->r[4]=R32(c->r[7]+0x00000000u); // 80042938
  c->r[4]=R32(c->r[4]+0x00000000u); // 8004293C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80042940
  goto L_800429A4; // 80042944
L_80042948:;
  c->r[8]=c->r[8]+0x00000004u; // 80042948
  c->r[6]=c->r[6]+0x00000001u; // 8004294C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004291C; } // 80042950
L_80042954:;
  c->r[8]=0u+0x00000000u; // 80042954
  c->r[6]=0u+0x00000000u; // 80042958
  c->ctr=c->r[10]; // 8004295C
  cmpu(c,0,c->r[10],0x00000000u); // 80042960
  if (!crb(c,1)) { goto L_800429A0; } // 80042964
L_80042968:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80042968
  c->r[5]=R32(c->r[5]+c->r[6]); // 8004296C
  c->r[0]=R32(c->r[5]+0x00000014u); // 80042970
  cmpu(c,0,c->r[9],c->r[0]); // 80042974
  if (!crb(c,2)) { goto L_80042994; } // 80042978
  W32(c->r[7]+0x00000004u,c->r[8]); // 8004297C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80042980
  c->r[4]=R32(c->r[7]+0x00000000u); // 80042984
  c->r[4]=R32(c->r[4]+0x00000000u); // 80042988
  c->r[4]=R32(c->r[4]+c->r[0]); // 8004298C
  goto L_800429A4; // 80042990
L_80042994:;
  c->r[6]=c->r[6]+0x00000004u; // 80042994
  c->r[8]=c->r[8]+0x00000001u; // 80042998
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80042968; } // 8004299C
L_800429A0:;
  c->r[4]=0u+0x00000000u; // 800429A0
L_800429A4:;
  c->r[5]=R32(c->r[4]+0x00000018u); // 800429A4
  cmps(c,0,(int32_t)c->r[5],37); // 800429A8
  if (!crb(c,1)) { goto L_800429C4; } // 800429AC
  c->r[0]=R32(c->r[4]+0x00000010u); // 800429B0
  cmpu(c,0,c->r[0],0x00000001u); // 800429B4
  if (!crb(c,2)) { goto L_800429C4; } // 800429B8
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800429BC
  goto L_800429EC; // 800429C0
L_800429C4:;
  cmps(c,0,(int32_t)c->r[5],26); // 800429C4
  if (crb(c,0)) { goto L_800429D4; } // 800429C8
  cmps(c,0,(int32_t)c->r[5],36); // 800429CC
  if (!crb(c,2)) { goto L_800429E8; } // 800429D0
L_800429D4:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 800429D4
  cmpu(c,0,c->r[0],0x00000001u); // 800429D8
  if (!crb(c,2)) { goto L_800429E8; } // 800429DC
  c->r[4]=c->r[4]+0x00000008u; // 800429E0
  goto L_800429EC; // 800429E4
L_800429E8:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 800429E8
L_800429EC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800429EC
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 800429F0
L_800429F4:;
  c->r[4]=c->r[26]|c->r[26]; // 800429F4
  c->r[6]=c->r[25]|c->r[25]; // 800429F8
  c->r[8]=c->r[24]|c->r[24]; // 800429FC
  c->r[7]=c->r[30]+0x00000010u; // 80042A00
  c->r[9]=0u+0x00000000u; // 80042A04
  c->lr=0x80042A0Cu; f_80042034(c); // 80042A08
L_80042A0C:;
  c->r[29]=c->r[29]+0x00000040u; // 80042A0C
  c->r[28]=c->r[28]+0x00000001u; // 80042A10
L_80042A14:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 80042A14
  c->r[0]=R32(c->r[1]+0x00000044u); // 80042A18
  c->r[0]=c->r[0]-c->r[3]; // 80042A1C
  c->r[0]=sraw(c,c->r[0],6); // 80042A20
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80042A24
  cmpu(c,0,c->r[28],c->r[0]); // 80042A28
  if (crb(c,0)) { IRQCHK(c); goto L_8004289C; } // 80042A2C
L_80042A30:;
  c->r[0]=addc(c,c->r[1],0x00000040u,0); cr0(c,c->r[0]); // 80042A30
  if (crb(c,2)) { goto L_80042A68; } // 80042A34
  c->r[4]=R32(c->r[1]+0x00000040u); // 80042A38
  cmps(c,0,(int32_t)c->r[4],0); // 80042A3C
  if (crb(c,2)) { goto L_80042A58; } // 80042A40
  c->r[3]=R32(c->r[1]+0x00000050u); // 80042A44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80042A48
  c->r[12]=R32(c->r[12]+0x00000010u); // 80042A4C
  c->ctr=c->r[12]; // 80042A50
  if (true) { c->lr=0x80042A58u; dispatch(c,c->ctr); } // 80042A54
L_80042A58:;
  c->r[0]=0u+0x00000000u; // 80042A58
  W32(c->r[1]+0x00000040u,c->r[0]); // 80042A5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80042A60
  W32(c->r[1]+0x00000048u,c->r[0]); // 80042A64
L_80042A68:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80042A68
  c->r[11]=c->r[10]|c->r[10]; // 80042A6C
  c->lr=0x80042A74u; f_800C2E88(c); // 80042A70
  c->r[0]=R32(c->r[10]+0x00000004u); // 80042A74
  c->lr=c->r[0]; // 80042A78
  c->r[1]=c->r[10]|c->r[10]; // 80042A7C
  return; // 80042A80
}

// fn_80042A84
void f_80042A84(Ctx* __restrict c) {
  trace_call(0x80042A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042A84
  c->r[0]=c->lr; // 80042A88
  c->r[4]=0u+0x80010000u; // 80042A8C
  c->r[6]=0u+0x00000004u; // 80042A90
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042A94
  c->r[4]=c->r[4]+0xFFFF9804u; // 80042A98
  c->r[7]=0u+0x00000004u; // 80042A9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80042AA0
  c->r[31]=0u+0x80010000u; // 80042AA4
  c->r[5]=c->r[31]+0xFFFF8BD8u; // 80042AA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80042AAC
  c->r[30]=0u+0x803C0000u; // 80042AB0
  c->r[30]=c->r[30]+0x00002DE8u; // 80042AB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80042AB8
  c->r[3]=c->r[30]+0x00000010u; // 80042ABC
  c->lr=0x80042AC4u; f_800C2B8C(c); // 80042AC0
  c->r[4]=0u+0x80040000u; // 80042AC4
  c->r[5]=c->r[30]+0x00000000u; // 80042AC8
  c->r[4]=c->r[4]+0x00002B90u; // 80042ACC
  c->r[3]=0u+0x00000000u; // 80042AD0
  c->lr=0x80042AD8u; f_800C2A60(c); // 80042AD4
  c->r[29]=R32(c->r[2]+0xFFFFBF18u); // 80042AD8
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80042ADC
  W32(c->r[13]+0xFFFF9518u,c->r[29]); // 80042AE0
  c->r[5]=c->r[30]+0x00000020u; // 80042AE4
  c->r[3]=c->r[13]+0xFFFF9518u; // 80042AE8
  c->lr=0x80042AF0u; f_800C2A60(c); // 80042AEC
  W32(c->r[13]+0xFFFF951Cu,c->r[29]); // 80042AF0
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80042AF4
  c->r[5]=c->r[30]+0x0000002Cu; // 80042AF8
  c->r[3]=c->r[13]+0xFFFF951Cu; // 80042AFC
  c->lr=0x80042B04u; f_800C2A60(c); // 80042B00
  W32(c->r[13]+0xFFFF9520u,c->r[29]); // 80042B04
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80042B08
  c->r[5]=c->r[30]+0x00000038u; // 80042B0C
  c->r[3]=c->r[13]+0xFFFF9520u; // 80042B10
  c->lr=0x80042B18u; f_800C2A60(c); // 80042B14
  W32(c->r[13]+0xFFFF9524u,c->r[29]); // 80042B18
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80042B1C
  c->r[5]=c->r[30]+0x00000044u; // 80042B20
  c->r[3]=c->r[13]+0xFFFF9524u; // 80042B24
  c->lr=0x80042B2Cu; f_800C2A60(c); // 80042B28
  W32(c->r[13]+0xFFFF9528u,c->r[29]); // 80042B2C
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80042B30
  c->r[5]=c->r[30]+0x00000050u; // 80042B34
  c->r[3]=c->r[13]+0xFFFF9528u; // 80042B38
  c->lr=0x80042B40u; f_800C2A60(c); // 80042B3C
  c->r[3]=c->r[30]+0x00000068u; // 80042B40
  c->r[0]=0u+0x00000000u; // 80042B44
  c->r[5]=c->r[13]+0xFFFFA3B8u; // 80042B48
  c->r[6]=0u+0x0000000Au; // 80042B4C
  c->r[4]=0u+0x80040000u; // 80042B50
  W32(c->r[3]+0x00000010u,c->r[5]); // 80042B54
  c->r[5]=c->r[30]+0x0000005Cu; // 80042B58
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80042B5C
  c->r[4]=c->r[4]+0x00002BACu; // 80042B60
  W32(c->r[30]+0x00000068u,c->r[0]); // 80042B64
  W32(c->r[3]+0x00000004u,c->r[0]); // 80042B68
  W32(c->r[3]+0x00000008u,c->r[0]); // 80042B6C
  c->lr=0x80042B74u; f_800C2A60(c); // 80042B70
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042B74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80042B78
  c->r[30]=R32(c->r[1]+0x00000018u); // 80042B7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80042B80
  c->lr=c->r[0]; // 80042B84
  c->r[1]=c->r[1]+0x00000020u; // 80042B88
  return; // 80042B8C
}

// fn_80042B90
void f_80042B90(Ctx* __restrict c) {
  trace_call(0x80042B90u);
  c->r[3]=0u+0x803C0000u; // 80042B90
  c->r[4]=0u+0x80010000u; // 80042B94
  c->r[3]=c->r[3]+0x00002DF8u; // 80042B98
  c->r[5]=0u+0x00000004u; // 80042B9C
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 80042BA0
  c->r[6]=0u+0x00000004u; // 80042BA4
  f_800C2C84(c); return; // 80042BA8
}

// fn_80042BAC
void f_80042BAC(Ctx* __restrict c) {
  trace_call(0x80042BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042BAC
  c->r[0]=c->lr; // 80042BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80042BB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042BB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80042BBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80042BC0
  c->r[30]=c->r[4]|c->r[4]; // 80042BC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80042BC8
  c->r[29]=c->r[3]|c->r[3]; // 80042BCC
  if (crb(c,2)) { goto L_80042CBC; } // 80042BD0
  if (crb(c,2)) { goto L_80042C08; } // 80042BD4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80042BD8
  cmps(c,0,(int32_t)c->r[4],0); // 80042BDC
  if (crb(c,2)) { goto L_80042BF8; } // 80042BE0
  c->r[3]=R32(c->r[3]+0x00000010u); // 80042BE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80042BE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80042BEC
  c->ctr=c->r[12]; // 80042BF0
  if (true) { c->lr=0x80042BF8u; dispatch(c,c->ctr); } // 80042BF4
L_80042BF8:;
  c->r[0]=0u+0x00000000u; // 80042BF8
  W32(c->r[29]+0x00000000u,c->r[0]); // 80042BFC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80042C00
  W32(c->r[29]+0x00000008u,c->r[0]); // 80042C04
L_80042C08:;
  cmps(c,0,(int32_t)c->r[30],0); // 80042C08
  if (!crb(c,1)) { goto L_80042CBC; } // 80042C0C
  c->lr=0x80042C14u; f_8028B53C(c); // 80042C10
  c->r[31]=0u+0x804B0000u; // 80042C14
  c->r[31]=c->r[31]+0xFFFFC800u; // 80042C18
  c->r[3]=c->r[31]|c->r[31]; // 80042C1C
  c->lr=0x80042C24u; f_8024B0E0(c); // 80042C20
  cmps(c,0,(int32_t)c->r[29],0); // 80042C24
  if (!crb(c,2)) { goto L_80042C38; } // 80042C28
  c->r[3]=c->r[31]|c->r[31]; // 80042C2C
  c->lr=0x80042C34u; f_8024B1C0(c); // 80042C30
  goto L_80042CBC; // 80042C34
L_80042C38:;
  c->r[0]=0u+0x80000000u; // 80042C38
  cmpu(c,0,c->r[29],c->r[0]); // 80042C3C
  if (crb(c,0)) { goto L_80042C5C; } // 80042C40
  c->r[3]=0u+0x81800000u; // 80042C44
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80042C48
  cmpu(c,0,c->r[29],c->r[0]); // 80042C4C
  if (!crb(c,0)) { goto L_80042C5C; } // 80042C50
  c->r[30]=0u+0x00000000u; // 80042C54
  goto L_80042C9C; // 80042C58
L_80042C5C:;
  c->r[0]=0u+0x90000000u; // 80042C5C
  cmpu(c,0,c->r[29],c->r[0]); // 80042C60
  if (crb(c,0)) { goto L_80042C7C; } // 80042C64
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80042C68
  cmpu(c,0,c->r[29],c->r[0]); // 80042C6C
  if (!crb(c,0)) { goto L_80042C7C; } // 80042C70
  c->r[30]=0u+0x00000001u; // 80042C74
  goto L_80042C9C; // 80042C78
L_80042C7C:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80042C7C
  cmpu(c,0,c->r[29],c->r[0]); // 80042C80
  if (crb(c,0)) { goto L_80042C9C; } // 80042C84
  c->r[3]=0u+0x98000000u; // 80042C88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80042C8C
  cmpu(c,0,c->r[29],c->r[0]); // 80042C90
  if (!crb(c,0)) { goto L_80042C9C; } // 80042C94
  c->r[30]=0u+0x00000002u; // 80042C98
L_80042C9C:;
  c->r[3]=0u+0x804B0000u; // 80042C9C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80042CA0
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80042CA4
  c->r[4]=c->r[29]|c->r[29]; // 80042CA8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80042CAC
  c->lr=0x80042CB4u; f_8023B550(c); // 80042CB0
  c->r[3]=c->r[31]|c->r[31]; // 80042CB4
  c->lr=0x80042CBCu; f_8024B1C0(c); // 80042CB8
L_80042CBC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80042CBC
  c->r[3]=c->r[29]|c->r[29]; // 80042CC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80042CC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80042CC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042CCC
  c->lr=c->r[0]; // 80042CD0
  c->r[1]=c->r[1]+0x00000020u; // 80042CD4
  return; // 80042CD8
}

// fn_80042CDC
void f_80042CDC(Ctx* __restrict c) {
  trace_call(0x80042CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042CDC
  c->r[0]=c->lr; // 80042CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042CE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042CE8
  c->r[31]=c->r[3]|c->r[3]; // 80042CEC
  c->lr=0x80042CF4u; f_80040B7C(c); // 80042CF0
  c->r[4]=0u+0x80380000u; // 80042CF4
  c->r[3]=c->r[31]|c->r[31]; // 80042CF8
  c->r[4]=c->r[4]+0x00004910u; // 80042CFC
  W32(c->r[31]+0x00000014u,c->r[4]); // 80042D00
  c->r[4]=c->r[13]+0xFFFF953Cu; // 80042D04
  c->lr=0x80042D0Cu; f_8030BE60(c); // 80042D08
  W32(c->r[31]+0x0000014Cu,c->r[3]); // 80042D0C
  c->r[3]=c->r[31]|c->r[31]; // 80042D10
  c->lr=0x80042D18u; f_80042DC4(c); // 80042D14
  c->r[0]=0u+0x00000000u; // 80042D18
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80042D1C
  c->r[3]=c->r[31]|c->r[31]; // 80042D20
  c->r[4]=0u+0x00000007u; // 80042D24
  c->r[5]=R32(c->r[13]+0xFFFF9490u); // 80042D28
  c->lr=0x80042D30u; f_8030FFA0(c); // 80042D2C
  c->r[3]=0u+0x0000005Eu; // 80042D30
  c->r[0]=0u+0x0000005Fu; // 80042D34
  W32(c->r[31]+0x00000138u,c->r[3]); // 80042D38
  c->r[3]=c->r[31]|c->r[31]; // 80042D3C
  W32(c->r[31]+0x00000078u,c->r[0]); // 80042D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042D44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042D48
  c->lr=c->r[0]; // 80042D4C
  c->r[1]=c->r[1]+0x00000010u; // 80042D50
  return; // 80042D54
}

// fn_80042D58
void f_80042D58(Ctx* __restrict c) {
  trace_call(0x80042D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042D58
  c->r[0]=c->lr; // 80042D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042D60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80042D64
  c->r[31]=c->r[5]|c->r[5]; // 80042D68
  c->r[5]=0u+0x00000010u; // 80042D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80042D70
  c->r[30]=c->r[4]|c->r[4]; // 80042D74
  c->r[4]=0u+0x000001A0u; // 80042D78
  W32(c->r[1]+0x00000014u,c->r[29]); // 80042D7C
  c->r[29]=c->r[3]|c->r[3]; // 80042D80
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 80042D84
  c->r[3]=R32(c->r[6]+0x00000000u); // 80042D88
  c->lr=0x80042D90u; f_802A89E4(c); // 80042D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80042D90
  if (crb(c,2)) { goto L_80042DA8; } // 80042D94
  c->r[4]=c->r[29]|c->r[29]; // 80042D98
  c->r[5]=c->r[30]|c->r[30]; // 80042D9C
  c->r[6]=c->r[31]|c->r[31]; // 80042DA0
  c->lr=0x80042DA8u; f_80042CDC(c); // 80042DA4
L_80042DA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042DA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80042DAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80042DB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80042DB4
  c->lr=c->r[0]; // 80042DB8
  c->r[1]=c->r[1]+0x00000020u; // 80042DBC
  return; // 80042DC0
}

// fn_80042DC4
void f_80042DC4(Ctx* __restrict c) {
  trace_call(0x80042DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042DC4
  c->r[0]=c->lr; // 80042DC8
  c->r[4]=0u+0x00000001u; // 80042DCC
  c->r[5]=0u+0x00000020u; // 80042DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042DD4
  c->r[0]=0u+0x00000000u; // 80042DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042DDC
  c->r[31]=c->r[3]|c->r[3]; // 80042DE0
  W32(c->r[3]+0x000000C0u,c->r[4]); // 80042DE4
  c->r[4]=0u+0x00000000u; // 80042DE8
  W32(c->r[3]+0x00000148u,c->r[0]); // 80042DEC
  W32(c->r[3]+0x00000174u,c->r[0]); // 80042DF0
  W32(c->r[3]+0x00000178u,c->r[0]); // 80042DF4
  W32(c->r[3]+0x00000180u,c->r[0]); // 80042DF8
  c->r[3]=c->r[3]+0x00000150u; // 80042DFC
  c->lr=0x80042E04u; f_80004350(c); // 80042E00
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 80042E04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80042E08
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 80042E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042E10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042E14
  c->lr=c->r[0]; // 80042E18
  c->r[1]=c->r[1]+0x00000010u; // 80042E1C
  return; // 80042E20
}

// fn_80042E24
void f_80042E24(Ctx* __restrict c) {
  trace_call(0x80042E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042E24
  c->r[0]=c->lr; // 80042E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042E30
  c->r[31]=c->r[3]|c->r[3]; // 80042E34
  c->lr=0x80042E3Cu; f_80041F74(c); // 80042E38
  c->r[3]=c->r[31]|c->r[31]; // 80042E3C
  c->lr=0x80042E44u; f_80042DC4(c); // 80042E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042E48
  c->lr=c->r[0]; // 80042E4C
  c->r[1]=c->r[1]+0x00000010u; // 80042E50
  return; // 80042E54
}

// fn_80042E58
void f_80042E58(Ctx* __restrict c) {
  trace_call(0x80042E58u);
  c->r[4]=R32(c->r[13]+0xFFFF9478u); // 80042E58
  c->r[0]=R32(c->r[4]+0x00000224u); // 80042E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80042E60
  if (!crb(c,2)) return; // 80042E64
  f_80041060(c); return; // 80042E68
}

// fn_80042E6C
void f_80042E6C(Ctx* __restrict c) {
  trace_call(0x80042E6Cu);
  return; // 80042E6C
}

// fn_80042E70
void f_80042E70(Ctx* __restrict c) {
  trace_call(0x80042E70u);
  f_8030C6C0(c); return; // 80042E70
}

// fn_80042E74
void f_80042E74(Ctx* __restrict c) {
  trace_call(0x80042E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042E74
  c->r[0]=c->lr; // 80042E78
  c->r[5]=0u+0x00000000u; // 80042E7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042E80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042E84
  W32(c->r[1]+0x00000008u,c->r[30]); // 80042E88
  c->r[30]=0u+0x80370000u; // 80042E8C
  c->r[4]=c->r[30]+0x00003FB0u; // 80042E90
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042E94
  c->lr=0x80042E9Cu; f_8031E640(c); // 80042E98
  c->r[31]=0u+0x803C0000u; // 80042E9C
  c->r[30]=c->r[30]+0x00003FB0u; // 80042EA0
  W32(c->r[31]+0x00002E78u,c->r[3]); // 80042EA4
  c->r[4]=c->r[30]+0x00000012u; // 80042EA8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042EAC
  c->r[5]=0u+0x00000000u; // 80042EB0
  c->lr=0x80042EB8u; f_8031E640(c); // 80042EB4
  c->r[31]=c->r[31]+0x00002E78u; // 80042EB8
  c->r[4]=c->r[30]+0x00000024u; // 80042EBC
  W32(c->r[31]+0x00000004u,c->r[3]); // 80042EC0
  c->r[5]=0u+0x00000000u; // 80042EC4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042EC8
  c->lr=0x80042ED0u; f_8031E640(c); // 80042ECC
  W32(c->r[31]+0x00000008u,c->r[3]); // 80042ED0
  c->r[4]=c->r[30]+0x00000036u; // 80042ED4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042ED8
  c->r[5]=0u+0x00000000u; // 80042EDC
  c->lr=0x80042EE4u; f_8031E640(c); // 80042EE0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80042EE4
  c->r[4]=c->r[30]+0x00000048u; // 80042EE8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042EEC
  c->r[5]=0u+0x00000000u; // 80042EF0
  c->lr=0x80042EF8u; f_8031E640(c); // 80042EF4
  W32(c->r[31]+0x00000010u,c->r[3]); // 80042EF8
  c->r[4]=c->r[30]+0x00000059u; // 80042EFC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F00
  c->r[5]=0u+0x00000000u; // 80042F04
  c->lr=0x80042F0Cu; f_8031E640(c); // 80042F08
  W32(c->r[31]+0x00000014u,c->r[3]); // 80042F0C
  c->r[4]=c->r[30]+0x0000006Au; // 80042F10
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F14
  c->r[5]=0u+0x00000000u; // 80042F18
  c->lr=0x80042F20u; f_8031E640(c); // 80042F1C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80042F20
  c->r[4]=c->r[30]+0x0000007Bu; // 80042F24
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F28
  c->r[5]=0u+0x00000000u; // 80042F2C
  c->lr=0x80042F34u; f_8031E640(c); // 80042F30
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 80042F34
  c->r[4]=c->r[30]+0x0000008Cu; // 80042F38
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F3C
  c->r[5]=0u+0x00000000u; // 80042F40
  c->lr=0x80042F48u; f_8031E640(c); // 80042F44
  W32(c->r[31]+0x00000020u,c->r[3]); // 80042F48
  c->r[4]=c->r[30]+0x0000009Eu; // 80042F4C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F50
  c->r[5]=0u+0x00000000u; // 80042F54
  c->lr=0x80042F5Cu; f_8031E640(c); // 80042F58
  W32(c->r[31]+0x00000024u,c->r[3]); // 80042F5C
  c->r[4]=c->r[30]+0x000000AFu; // 80042F60
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F64
  c->r[5]=0u+0x00000000u; // 80042F68
  c->lr=0x80042F70u; f_8031E640(c); // 80042F6C
  W32(c->r[31]+0x00000028u,c->r[3]); // 80042F70
  c->r[4]=c->r[30]+0x000000BEu; // 80042F74
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F78
  c->r[5]=0u+0x00000000u; // 80042F7C
  c->lr=0x80042F84u; f_8031E640(c); // 80042F80
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80042F84
  c->r[4]=c->r[30]+0x000000C9u; // 80042F88
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042F8C
  c->r[5]=0u+0x00000000u; // 80042F90
  c->lr=0x80042F98u; f_8031E640(c); // 80042F94
  W32(c->r[31]+0x00000030u,c->r[3]); // 80042F98
  c->r[4]=c->r[30]+0x000000D9u; // 80042F9C
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042FA0
  c->r[5]=0u+0x00000000u; // 80042FA4
  c->lr=0x80042FACu; f_8031E640(c); // 80042FA8
  W32(c->r[31]+0x00000034u,c->r[3]); // 80042FAC
  c->r[4]=c->r[30]+0x000000E5u; // 80042FB0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042FB4
  c->r[5]=0u+0x00000000u; // 80042FB8
  c->lr=0x80042FC0u; f_8031E640(c); // 80042FBC
  W32(c->r[31]+0x00000038u,c->r[3]); // 80042FC0
  c->r[4]=c->r[30]+0x000000F6u; // 80042FC4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042FC8
  c->r[5]=0u+0x00000000u; // 80042FCC
  c->lr=0x80042FD4u; f_8031E640(c); // 80042FD0
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 80042FD4
  c->r[4]=c->r[30]+0x0000010Au; // 80042FD8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042FDC
  c->r[5]=0u+0x00000000u; // 80042FE0
  c->lr=0x80042FE8u; f_8031E640(c); // 80042FE4
  W32(c->r[31]+0x00000040u,c->r[3]); // 80042FE8
  c->r[4]=c->r[30]+0x0000011Fu; // 80042FEC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80042FF0
  c->r[5]=0u+0x00000000u; // 80042FF4
  c->lr=0x80042FFCu; f_8031E640(c); // 80042FF8
  W32(c->r[31]+0x00000044u,c->r[3]); // 80042FFC
  c->r[4]=c->r[30]+0x0000012Bu; // 80043000
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80043004
  c->r[5]=0u+0x00000000u; // 80043008
  c->lr=0x80043010u; f_8031E640(c); // 8004300C
  W32(c->r[31]+0x00000048u,c->r[3]); // 80043010
  c->r[4]=c->r[30]+0x00000135u; // 80043014
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80043018
  c->r[5]=0u+0x00000000u; // 8004301C
  c->lr=0x80043024u; f_8031E640(c); // 80043020
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80043024
  c->r[4]=c->r[30]+0x0000013Du; // 80043028
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 8004302C
  c->r[5]=0u+0x00000000u; // 80043030
  c->lr=0x80043038u; f_8031E640(c); // 80043034
  W32(c->r[13]+0xFFFF953Cu,c->r[3]); // 80043038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004303C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80043040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043044
  c->lr=c->r[0]; // 80043048
  c->r[1]=c->r[1]+0x00000010u; // 8004304C
  return; // 80043050
}

// fn_80043054
void f_80043054(Ctx* __restrict c) {
  trace_call(0x80043054u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043054
  c->r[0]=c->lr; // 80043058
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004305C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80043060
  c->r[31]=0u+0x803C0000u; // 80043064
  c->r[31]=c->r[31]+0x00002E78u; // 80043068
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004306C
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 80043070
  W32(c->r[1]+0x00000014u,c->r[29]); // 80043074
  W32(c->r[1]+0x00000010u,c->r[28]); // 80043078
  c->r[28]=0u+0x00000000u; // 8004307C
L_80043080:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 80043080
  c->r[3]=c->r[29]|c->r[29]; // 80043084
  c->lr=0x8004308Cu; f_8024B0E0(c); // 80043088
  c->r[4]=R32(c->r[31]+0x00000000u); // 8004308C
  cmpu(c,0,c->r[4],c->r[30]); // 80043090
  if (!crb(c,2)) { goto L_800430A4; } // 80043094
  c->r[3]=c->r[29]|c->r[29]; // 80043098
  c->lr=0x800430A0u; f_8024B1C0(c); // 8004309C
  goto L_800430DC; // 800430A0
L_800430A4:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800430A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800430A8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800430AC
  cmpu(c,0,c->r[0],0x00000001u); // 800430B0
  if (!crb(c,2)) { goto L_800430D0; } // 800430B4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800430B8
  cmpu(c,0,c->r[0],0x00000001u); // 800430BC
  if (!crb(c,2)) { goto L_800430D0; } // 800430C0
  c->r[3]=c->r[29]|c->r[29]; // 800430C4
  c->r[4]=c->r[31]|c->r[31]; // 800430C8
  c->lr=0x800430D0u; f_8031EEDC(c); // 800430CC
L_800430D0:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 800430D0
  c->r[3]=c->r[29]|c->r[29]; // 800430D4
  c->lr=0x800430DCu; f_8024B1C0(c); // 800430D8
L_800430DC:;
  c->r[28]=c->r[28]+0x00000001u; // 800430DC
  c->r[31]=c->r[31]+0x00000004u; // 800430E0
  cmps(c,0,(int32_t)c->r[28],20); // 800430E4
  if (crb(c,0)) { IRQCHK(c); goto L_80043080; } // 800430E8
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 800430EC
  c->r[3]=c->r[29]|c->r[29]; // 800430F0
  c->lr=0x800430F8u; f_8024B0E0(c); // 800430F4
  c->r[4]=R32(c->r[13]+0xFFFF953Cu); // 800430F8
  cmpu(c,0,c->r[4],c->r[30]); // 800430FC
  if (!crb(c,2)) { goto L_80043110; } // 80043100
  c->r[3]=c->r[29]|c->r[29]; // 80043104
  c->lr=0x8004310Cu; f_8024B1C0(c); // 80043108
  goto L_80043148; // 8004310C
L_80043110:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80043110
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80043114
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80043118
  cmpu(c,0,c->r[0],0x00000001u); // 8004311C
  if (!crb(c,2)) { goto L_8004313C; } // 80043120
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80043124
  cmpu(c,0,c->r[0],0x00000001u); // 80043128
  if (!crb(c,2)) { goto L_8004313C; } // 8004312C
  c->r[3]=c->r[29]|c->r[29]; // 80043130
  c->r[4]=c->r[13]+0xFFFF953Cu; // 80043134
  c->lr=0x8004313Cu; f_8031EEDC(c); // 80043138
L_8004313C:;
  W32(c->r[13]+0xFFFF953Cu,c->r[30]); // 8004313C
  c->r[3]=c->r[29]|c->r[29]; // 80043140
  c->lr=0x80043148u; f_8024B1C0(c); // 80043144
L_80043148:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043148
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004314C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80043150
  c->r[29]=R32(c->r[1]+0x00000014u); // 80043154
  c->r[28]=R32(c->r[1]+0x00000010u); // 80043158
  c->lr=c->r[0]; // 8004315C
  c->r[1]=c->r[1]+0x00000020u; // 80043160
  return; // 80043164
}

// fn_80043168
void f_80043168(Ctx* __restrict c) {
  trace_call(0x80043168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043168
  c->r[0]=c->lr; // 8004316C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043174
  c->r[31]=c->r[3]|c->r[3]; // 80043178
  c->lr=0x80043180u; f_80042E74(c); // 8004317C
  c->r[4]=0u+0x80370000u; // 80043180
  c->r[6]=0u+0x80040000u; // 80043184
  c->r[4]=c->r[4]+0x00003FB0u; // 80043188
  c->r[3]=c->r[31]|c->r[31]; // 8004318C
  c->r[5]=c->r[4]+0x00000151u; // 80043190
  c->r[6]=c->r[6]+0x00002D58u; // 80043194
  c->r[4]=0u+0x00000004u; // 80043198
  c->lr=0x800431A0u; f_80337FC8(c); // 8004319C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800431A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800431A4
  c->lr=c->r[0]; // 800431A8
  c->r[1]=c->r[1]+0x00000010u; // 800431AC
  return; // 800431B0
}

// fn_800431B4
void f_800431B4(Ctx* __restrict c) {
  trace_call(0x800431B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800431B4
  c->r[0]=c->lr; // 800431B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800431BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800431C0
  c->r[31]=c->r[3]|c->r[3]; // 800431C4
  c->lr=0x800431CCu; f_80043054(c); // 800431C8
  c->r[5]=0u+0x80370000u; // 800431CC
  c->r[3]=c->r[31]|c->r[31]; // 800431D0
  c->r[5]=c->r[5]+0x00003FB0u; // 800431D4
  c->r[4]=0u+0x00000004u; // 800431D8
  c->r[5]=c->r[5]+0x00000151u; // 800431DC
  c->lr=0x800431E4u; f_803386E0(c); // 800431E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800431E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800431E8
  c->lr=c->r[0]; // 800431EC
  c->r[1]=c->r[1]+0x00000010u; // 800431F0
  return; // 800431F4
}

// fn_800431F8
void f_800431F8(Ctx* __restrict c) {
  trace_call(0x800431F8u);
  c->r[0]=0u+0x00000001u; // 800431F8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800431FC
  return; // 80043200
}

// fn_80043204
void f_80043204(Ctx* __restrict c) {
  trace_call(0x80043204u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043204
  c->r[0]=c->lr; // 80043208
  c->r[4]=0u+0x00000000u; // 8004320C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80043210
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043214
  c->r[31]=c->r[3]|c->r[3]; // 80043218
  c->r[0]=R8(c->r[3]+0x0000017Cu); // 8004321C
  W32(c->r[3]+0x00000190u,c->r[4]); // 80043220
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF1u; // 80043224
  W8(c->r[3]+0x0000017Cu,c->r[0]); // 80043228
  c->r[3]=R32(c->r[3]+0x0000014Cu); // 8004322C
  c->lr=0x80043234u; f_80039F18(c); // 80043230
  c->r[29]=0u+0x803C0000u; // 80043234
  c->r[29]=c->r[29]+0x00002E78u; // 80043238
  c->r[4]=c->r[29]+0x00000044u; // 8004323C
  c->lr=0x80043244u; f_8003A1EC(c); // 80043240
  cmps(c,0,(int32_t)c->r[3],0); // 80043244
  if (crb(c,2)) { goto L_80043268; } // 80043248
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8004324C
  c->lr=0x80043254u; f_80039F18(c); // 80043250
  c->r[4]=c->r[29]+0x00000044u; // 80043254
  c->lr=0x8004325Cu; f_80043638(c); // 80043258
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 8004325C
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 80043260
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 80043264
L_80043268:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043268
  c->lr=0x80043270u; f_80039F18(c); // 8004326C
  c->r[29]=0u+0x803C0000u; // 80043270
  c->r[29]=c->r[29]+0x00002E78u; // 80043274
  c->r[4]=c->r[29]+0x00000048u; // 80043278
  c->lr=0x80043280u; f_8003A1EC(c); // 8004327C
  cmps(c,0,(int32_t)c->r[3],0); // 80043280
  if (crb(c,2)) { goto L_800432A4; } // 80043284
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043288
  c->lr=0x80043290u; f_80039F18(c); // 8004328C
  c->r[4]=c->r[29]+0x00000048u; // 80043290
  c->lr=0x80043298u; f_80043638(c); // 80043294
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 80043298
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 8004329C
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 800432A0
L_800432A4:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800432A4
  c->lr=0x800432ACu; f_80039F18(c); // 800432A8
  c->r[29]=0u+0x803C0000u; // 800432AC
  c->r[29]=c->r[29]+0x00002E78u; // 800432B0
  c->r[4]=c->r[29]+0x0000004Cu; // 800432B4
  c->lr=0x800432BCu; f_8003A1EC(c); // 800432B8
  cmps(c,0,(int32_t)c->r[3],0); // 800432BC
  if (crb(c,2)) { goto L_800432E0; } // 800432C0
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800432C4
  c->lr=0x800432CCu; f_80039F18(c); // 800432C8
  c->r[4]=c->r[29]+0x0000004Cu; // 800432CC
  c->lr=0x800432D4u; f_80043638(c); // 800432D0
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 800432D4
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800432D8
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 800432DC
L_800432E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800432E0
  c->lr=0x800432E8u; f_80044610(c); // 800432E4
  cmps(c,0,(int32_t)c->r[3],0); // 800432E8
  if (!crb(c,2)) { goto L_80043624; } // 800432EC
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800432F0
  c->lr=0x800432F8u; f_80039F18(c); // 800432F4
  c->r[29]=0u+0x803C0000u; // 800432F8
  c->r[29]=c->r[29]+0x00002E78u; // 800432FC
  c->r[4]=c->r[29]+0x00000020u; // 80043300
  c->lr=0x80043308u; f_80043638(c); // 80043304
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 80043308
  c->r[0]=(rotl(c->r[3],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 8004330C
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 80043310
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043314
  c->lr=0x8004331Cu; f_80039F18(c); // 80043318
  c->r[4]=c->r[29]+0x00000024u; // 8004331C
  c->lr=0x80043324u; f_80043638(c); // 80043320
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 80043324
  c->r[0]=(rotl(c->r[3],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80043328
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 8004332C
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043330
  c->lr=0x80043338u; f_80039F18(c); // 80043334
  c->r[4]=c->r[29]+0x00000028u; // 80043338
  c->lr=0x80043340u; f_80039FC4(c); // 8004333C
  c->r[0]=0u+0x00000000u; // 80043340
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[1]);} // 80043344
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043348
  W32(c->r[31]+0x00000184u,c->r[0]); // 8004334C
  W32(c->r[31]+0x0000018Cu,c->r[0]); // 80043350
  W32(c->r[31]+0x00000188u,c->r[0]); // 80043354
  c->lr=0x8004335Cu; f_80039F18(c); // 80043358
  c->r[4]=c->r[29]+0x0000003Cu; // 8004335C
  c->lr=0x80043364u; f_8003A1EC(c); // 80043360
  cmps(c,0,(int32_t)c->r[3],0); // 80043364
  if (crb(c,2)) { goto L_80043384; } // 80043368
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8004336C
  c->lr=0x80043374u; f_80039F18(c); // 80043370
  c->r[4]=c->r[29]+0x0000003Cu; // 80043374
  c->lr=0x8004337Cu; f_80039E00(c); // 80043378
  W32(c->r[31]+0x0000018Cu,c->r[4]); // 8004337C
  W32(c->r[31]+0x00000188u,c->r[3]); // 80043380
L_80043384:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043384
  c->lr=0x8004338Cu; f_80039F18(c); // 80043388
  c->r[29]=0u+0x803C0000u; // 8004338C
  c->r[29]=c->r[29]+0x00002E78u; // 80043390
  c->r[4]=c->r[29]+0x00000040u; // 80043394
  c->lr=0x8004339Cu; f_8003A1EC(c); // 80043398
  cmps(c,0,(int32_t)c->r[3],0); // 8004339C
  if (crb(c,2)) { goto L_800433B8; } // 800433A0
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800433A4
  c->lr=0x800433ACu; f_80039F18(c); // 800433A8
  c->r[4]=c->r[29]+0x00000040u; // 800433AC
  c->lr=0x800433B4u; f_8004374C(c); // 800433B0
  W32(c->r[31]+0x00000184u,c->r[3]); // 800433B4
L_800433B8:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800433B8
  c->lr=0x800433C0u; f_80039F18(c); // 800433BC
  c->r[29]=0u+0x803C0000u; // 800433C0
  c->r[29]=c->r[29]+0x00002E78u; // 800433C4
  c->r[4]=c->r[29]+0x0000002Cu; // 800433C8
  c->lr=0x800433D0u; f_8003A1EC(c); // 800433CC
  cmps(c,0,(int32_t)c->r[3],0); // 800433D0
  if (crb(c,2)) { goto L_8004347C; } // 800433D4
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800433D8
  c->lr=0x800433E0u; f_80039F18(c); // 800433DC
  c->r[4]=c->r[29]+0x0000002Cu; // 800433E0
  c->lr=0x800433E8u; f_80043860(c); // 800433E4
  cmps(c,0,(int32_t)c->r[3],0); // 800433E8
  c->r[27]=c->r[3]|c->r[3]; // 800433EC
  if (crb(c,2)) { goto L_80043458; } // 800433F0
  c->lr=0x800433F8u; f_800C297C(c); // 800433F4
  cmps(c,0,(int32_t)c->r[3],0); // 800433F8
  if (crb(c,2)) { goto L_80043458; } // 800433FC
  c->r[29]=0u+0x803D0000u; // 80043400
  c->r[3]=c->r[29]+0x0000407Cu; // 80043404
  c->lr=0x8004340Cu; f_800B7570(c); // 80043408
  c->r[4]=c->r[27]|c->r[27]; // 8004340C
  c->lr=0x80043414u; f_80009DA0(c); // 80043410
  c->r[28]=c->r[3]|c->r[3]; // 80043414
  c->r[3]=c->r[29]+0x0000407Cu; // 80043418
  c->lr=0x80043420u; f_800B7570(c); // 8004341C
  c->lr=0x80043424u; f_80043978(c); // 80043420
  c->lr=0x80043428u; f_80043970(c); // 80043424
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80043428
  c->r[5]=c->r[27]|c->r[27]; // 8004342C
  c->r[3]=R32(c->r[13]+0xFFFFA520u); // 80043430
  c->r[4]=c->r[1]+0x0000000Cu; // 80043434
  c->lr=0x8004343Cu; f_803267E4(c); // 80043438
  W32(c->r[31]+0x00000174u,c->r[3]); // 8004343C
  c->lr=0x80043444u; f_80043980(c); // 80043440
  c->r[4]=R32(c->r[31]+0x00000174u); // 80043444
  c->r[5]=c->r[28]|c->r[28]; // 80043448
  c->r[6]=0u+0x0000000Eu; // 8004344C
  c->r[7]=0u+0x00000001u; // 80043450
  c->lr=0x80043458u; f_8007FF28(c); // 80043454
L_80043458:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043458
  c->lr=0x80043460u; f_80039F18(c); // 8004345C
  c->r[4]=0u+0x803C0000u; // 80043460
  c->r[4]=c->r[4]+0x00002E78u; // 80043464
  c->r[4]=c->r[4]+0x00000030u; // 80043468
  c->lr=0x80043470u; f_80043638(c); // 8004346C
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 80043470
  c->r[0]=(rotl(c->r[3],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80043474
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 80043478
L_8004347C:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8004347C
  c->lr=0x80043484u; f_80039F18(c); // 80043480
  c->r[29]=0u+0x803C0000u; // 80043484
  c->r[29]=c->r[29]+0x00002E78u; // 80043488
  c->r[4]=c->r[29]+0x00000034u; // 8004348C
  c->lr=0x80043494u; f_8003A1EC(c); // 80043490
  cmps(c,0,(int32_t)c->r[3],0); // 80043494
  if (crb(c,2)) { goto L_80043540; } // 80043498
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8004349C
  c->lr=0x800434A4u; f_80039F18(c); // 800434A0
  c->r[4]=c->r[29]+0x00000034u; // 800434A4
  c->lr=0x800434ACu; f_80043860(c); // 800434A8
  cmps(c,0,(int32_t)c->r[3],0); // 800434AC
  c->r[27]=c->r[3]|c->r[3]; // 800434B0
  if (crb(c,2)) { goto L_8004351C; } // 800434B4
  c->lr=0x800434BCu; f_800C297C(c); // 800434B8
  cmps(c,0,(int32_t)c->r[3],0); // 800434BC
  if (crb(c,2)) { goto L_8004351C; } // 800434C0
  c->r[29]=0u+0x803D0000u; // 800434C4
  c->r[3]=c->r[29]+0x0000407Cu; // 800434C8
  c->lr=0x800434D0u; f_800B7570(c); // 800434CC
  c->r[4]=c->r[27]|c->r[27]; // 800434D0
  c->lr=0x800434D8u; f_80009DA0(c); // 800434D4
  c->r[28]=c->r[3]|c->r[3]; // 800434D8
  c->r[3]=c->r[29]+0x0000407Cu; // 800434DC
  c->lr=0x800434E4u; f_800B7570(c); // 800434E0
  c->lr=0x800434E8u; f_80043978(c); // 800434E4
  c->lr=0x800434ECu; f_80043970(c); // 800434E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800434EC
  c->r[5]=c->r[27]|c->r[27]; // 800434F0
  c->r[3]=R32(c->r[13]+0xFFFFA520u); // 800434F4
  c->r[4]=c->r[1]+0x00000008u; // 800434F8
  c->lr=0x80043500u; f_803267E4(c); // 800434FC
  W32(c->r[31]+0x00000178u,c->r[3]); // 80043500
  c->lr=0x80043508u; f_80043980(c); // 80043504
  c->r[4]=R32(c->r[31]+0x00000178u); // 80043508
  c->r[5]=c->r[28]|c->r[28]; // 8004350C
  c->r[6]=0u+0x0000000Eu; // 80043510
  c->r[7]=0u+0x00000001u; // 80043514
  c->lr=0x8004351Cu; f_8007FF28(c); // 80043518
L_8004351C:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8004351C
  c->lr=0x80043524u; f_80039F18(c); // 80043520
  c->r[4]=0u+0x803C0000u; // 80043524
  c->r[4]=c->r[4]+0x00002E78u; // 80043528
  c->r[4]=c->r[4]+0x00000038u; // 8004352C
  c->lr=0x80043534u; f_80043638(c); // 80043530
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 80043534
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 80043538
  W8(c->r[31]+0x0000017Cu,c->r[0]); // 8004353C
L_80043540:;
  c->r[28]=0u+0x803C0000u; // 80043540
  c->r[0]=0u+0x00000001u; // 80043544
  c->r[28]=c->r[28]+0x00002E78u; // 80043548
  W32(c->r[31]+0x00000148u,c->r[0]); // 8004354C
  c->r[27]=c->r[31]|c->r[31]; // 80043550
  c->r[26]=0u+0x00000000u; // 80043554
  c->r[29]=c->r[28]|c->r[28]; // 80043558
  c->r[30]=0u+0x00000000u; // 8004355C
L_80043560:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043560
  c->lr=0x80043568u; f_80039F18(c); // 80043564
  c->r[4]=c->r[28]|c->r[28]; // 80043568
  c->lr=0x80043570u; f_80039E00(c); // 8004356C
  c->r[25]=c->r[3]|c->r[3]; // 80043570
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 80043574
  c->r[24]=c->r[4]|c->r[4]; // 80043578
  c->lr=0x80043580u; f_80039F18(c); // 8004357C
  c->r[0]=c->r[26]+0x00000004u; // 80043580
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80043584
  c->r[4]=c->r[29]+c->r[0]; // 80043588
  c->lr=0x80043590u; f_80039FC4(c); // 8004358C
  c->r[0]=c->r[24]|c->r[25]; cr0(c,c->r[0]); // 80043590
  {uint32_t ea=c->r[27]+0x00000154u; WF32(ea,c->f[1]);} // 80043594
  if (crb(c,2)) { goto L_800435E4; } // 80043598
  c->r[3]=c->r[31]|c->r[31]; // 8004359C
  c->lr=0x800435A4u; f_80039FBC(c); // 800435A0
  c->r[6]=c->r[24]|c->r[24]; // 800435A4
  c->r[5]=c->r[25]|c->r[25]; // 800435A8
  c->lr=0x800435B0u; f_80039F20(c); // 800435AC
  W32(c->r[27]+0x00000150u,c->r[3]); // 800435B0
  c->lr=0x800435B8u; f_80043988(c); // 800435B4
  cmps(c,0,(int32_t)c->r[3],5); // 800435B8
  if (!crb(c,2)) { goto L_800435D4; } // 800435BC
  c->r[3]=R32(c->r[27]+0x00000150u); // 800435C0
  c->r[12]=R32(c->r[3]+0x00000014u); // 800435C4
  c->r[12]=R32(c->r[12]+0x00000060u); // 800435C8
  c->ctr=c->r[12]; // 800435CC
  if (true) { c->lr=0x800435D4u; dispatch(c,c->ctr); } // 800435D0
L_800435D4:;
  c->r[3]=R32(c->r[27]+0x00000150u); // 800435D4
  c->r[4]=c->r[31]|c->r[31]; // 800435D8
  c->lr=0x800435E0u; f_80043990(c); // 800435DC
  goto L_800435E8; // 800435E0
L_800435E4:;
  W32(c->r[27]+0x00000150u,c->r[30]); // 800435E4
L_800435E8:;
  c->r[26]=c->r[26]+0x00000001u; // 800435E8
  c->r[27]=c->r[27]+0x00000008u; // 800435EC
  cmps(c,0,(int32_t)c->r[26],4); // 800435F0
  c->r[28]=c->r[28]+0x00000004u; // 800435F4
  if (crb(c,0)) { IRQCHK(c); goto L_80043560; } // 800435F8
  c->r[0]=R8(c->r[31]+0x0000017Cu); // 800435FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80043600
  if (crb(c,2)) { goto L_8004361C; } // 80043604
  c->lr=0x8004360Cu; f_80017844(c); // 80043608
  c->lr=0x80043610u; f_8001783C(c); // 8004360C
  c->lr=0x80043614u; f_80060AC0(c); // 80043610
  c->r[3]=0u+0x00000000u; // 80043614
  c->lr=0x8004361Cu; f_80043998(c); // 80043618
L_8004361C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004361C
  c->lr=0x80043624u; f_80041C5C(c); // 80043620
L_80043624:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043624
  c->r[0]=R32(c->r[1]+0x00000034u); // 80043628
  c->lr=c->r[0]; // 8004362C
  c->r[1]=c->r[1]+0x00000030u; // 80043630
  return; // 80043634
}

// fn_80043638
void f_80043638(Ctx* __restrict c) {
  trace_call(0x80043638u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 80043638
  c->r[10]=R32(c->r[3]+0x00000004u); // 8004363C
  c->r[5]=R32(c->r[9]+0x00000000u); // 80043640
  c->r[0]=R32(c->r[9]+0x00000004u); // 80043644
  c->r[7]=c->r[10]|c->r[10]; // 80043648
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8004364C
  c->r[0]=c->r[0]-c->r[5]; // 80043650
  c->r[0]=sraw(c,c->r[0],2); // 80043654
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80043658
  c->r[0]=c->r[5]-c->r[10]; // 8004365C
  c->ctr=c->r[0]; // 80043660
  cmpu(c,0,c->r[10],c->r[5]); // 80043664
  if (!crb(c,0)) { goto L_800436A8; } // 80043668
L_8004366C:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 8004366C
  c->r[6]=R32(c->r[4]+0x00000000u); // 80043670
  c->r[5]=R32(c->r[5]+c->r[8]); // 80043674
  c->r[0]=R32(c->r[5]+0x00000014u); // 80043678
  cmpu(c,0,c->r[6],c->r[0]); // 8004367C
  if (!crb(c,2)) { goto L_8004369C; } // 80043680
  W32(c->r[3]+0x00000004u,c->r[7]); // 80043684
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80043688
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004368C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043690
  c->r[3]=R32(c->r[3]+c->r[0]); // 80043694
  goto L_800436FC; // 80043698
L_8004369C:;
  c->r[8]=c->r[8]+0x00000004u; // 8004369C
  c->r[7]=c->r[7]+0x00000001u; // 800436A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004366C; } // 800436A4
L_800436A8:;
  c->r[8]=0u+0x00000000u; // 800436A8
  c->r[7]=0u+0x00000000u; // 800436AC
  c->ctr=c->r[10]; // 800436B0
  cmpu(c,0,c->r[10],0x00000000u); // 800436B4
  if (!crb(c,1)) { goto L_800436F8; } // 800436B8
L_800436BC:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 800436BC
  c->r[6]=R32(c->r[4]+0x00000000u); // 800436C0
  c->r[5]=R32(c->r[5]+c->r[7]); // 800436C4
  c->r[0]=R32(c->r[5]+0x00000014u); // 800436C8
  cmpu(c,0,c->r[6],c->r[0]); // 800436CC
  if (!crb(c,2)) { goto L_800436EC; } // 800436D0
  W32(c->r[3]+0x00000004u,c->r[8]); // 800436D4
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800436D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800436DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800436E0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800436E4
  goto L_800436FC; // 800436E8
L_800436EC:;
  c->r[7]=c->r[7]+0x00000004u; // 800436EC
  c->r[8]=c->r[8]+0x00000001u; // 800436F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800436BC; } // 800436F4
L_800436F8:;
  c->r[3]=0u+0x00000000u; // 800436F8
L_800436FC:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 800436FC
  cmps(c,0,(int32_t)c->r[4],37); // 80043700
  if (!crb(c,1)) { goto L_8004371C; } // 80043704
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043708
  cmpu(c,0,c->r[0],0x00000001u); // 8004370C
  if (!crb(c,2)) { goto L_8004371C; } // 80043710
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80043714
  goto L_80043744; // 80043718
L_8004371C:;
  cmps(c,0,(int32_t)c->r[4],26); // 8004371C
  if (crb(c,0)) { goto L_8004372C; } // 80043720
  cmps(c,0,(int32_t)c->r[4],36); // 80043724
  if (!crb(c,2)) { goto L_80043740; } // 80043728
L_8004372C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8004372C
  cmpu(c,0,c->r[0],0x00000001u); // 80043730
  if (!crb(c,2)) { goto L_80043740; } // 80043734
  c->r[3]=c->r[3]+0x00000008u; // 80043738
  goto L_80043744; // 8004373C
L_80043740:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80043740
L_80043744:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043744
  return; // 80043748
}

// fn_8004374C
void f_8004374C(Ctx* __restrict c) {
  trace_call(0x8004374Cu);
  c->r[9]=R32(c->r[3]+0x00000000u); // 8004374C
  c->r[10]=R32(c->r[3]+0x00000004u); // 80043750
  c->r[5]=R32(c->r[9]+0x00000000u); // 80043754
  c->r[0]=R32(c->r[9]+0x00000004u); // 80043758
  c->r[7]=c->r[10]|c->r[10]; // 8004375C
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80043760
  c->r[0]=c->r[0]-c->r[5]; // 80043764
  c->r[0]=sraw(c,c->r[0],2); // 80043768
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8004376C
  c->r[0]=c->r[5]-c->r[10]; // 80043770
  c->ctr=c->r[0]; // 80043774
  cmpu(c,0,c->r[10],c->r[5]); // 80043778
  if (!crb(c,0)) { goto L_800437BC; } // 8004377C
L_80043780:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 80043780
  c->r[6]=R32(c->r[4]+0x00000000u); // 80043784
  c->r[5]=R32(c->r[5]+c->r[8]); // 80043788
  c->r[0]=R32(c->r[5]+0x00000014u); // 8004378C
  cmpu(c,0,c->r[6],c->r[0]); // 80043790
  if (!crb(c,2)) { goto L_800437B0; } // 80043794
  W32(c->r[3]+0x00000004u,c->r[7]); // 80043798
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8004379C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800437A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800437A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800437A8
  goto L_80043810; // 800437AC
L_800437B0:;
  c->r[8]=c->r[8]+0x00000004u; // 800437B0
  c->r[7]=c->r[7]+0x00000001u; // 800437B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043780; } // 800437B8
L_800437BC:;
  c->r[8]=0u+0x00000000u; // 800437BC
  c->r[7]=0u+0x00000000u; // 800437C0
  c->ctr=c->r[10]; // 800437C4
  cmpu(c,0,c->r[10],0x00000000u); // 800437C8
  if (!crb(c,1)) { goto L_8004380C; } // 800437CC
L_800437D0:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 800437D0
  c->r[6]=R32(c->r[4]+0x00000000u); // 800437D4
  c->r[5]=R32(c->r[5]+c->r[7]); // 800437D8
  c->r[0]=R32(c->r[5]+0x00000014u); // 800437DC
  cmpu(c,0,c->r[6],c->r[0]); // 800437E0
  if (!crb(c,2)) { goto L_80043800; } // 800437E4
  W32(c->r[3]+0x00000004u,c->r[8]); // 800437E8
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800437EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800437F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800437F4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800437F8
  goto L_80043810; // 800437FC
L_80043800:;
  c->r[7]=c->r[7]+0x00000004u; // 80043800
  c->r[8]=c->r[8]+0x00000001u; // 80043804
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800437D0; } // 80043808
L_8004380C:;
  c->r[3]=0u+0x00000000u; // 8004380C
L_80043810:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80043810
  cmps(c,0,(int32_t)c->r[4],37); // 80043814
  if (!crb(c,1)) { goto L_80043830; } // 80043818
  c->r[0]=R32(c->r[3]+0x00000010u); // 8004381C
  cmpu(c,0,c->r[0],0x00000001u); // 80043820
  if (!crb(c,2)) { goto L_80043830; } // 80043824
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80043828
  goto L_80043858; // 8004382C
L_80043830:;
  cmps(c,0,(int32_t)c->r[4],26); // 80043830
  if (crb(c,0)) { goto L_80043840; } // 80043834
  cmps(c,0,(int32_t)c->r[4],36); // 80043838
  if (!crb(c,2)) { goto L_80043854; } // 8004383C
L_80043840:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043840
  cmpu(c,0,c->r[0],0x00000001u); // 80043844
  if (!crb(c,2)) { goto L_80043854; } // 80043848
  c->r[3]=c->r[3]+0x00000008u; // 8004384C
  goto L_80043858; // 80043850
L_80043854:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80043854
L_80043858:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043858
  return; // 8004385C
}

// fn_80043860
void f_80043860(Ctx* __restrict c) {
  trace_call(0x80043860u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 80043860
  c->r[10]=R32(c->r[3]+0x00000004u); // 80043864
  c->r[5]=R32(c->r[9]+0x00000000u); // 80043868
  c->r[0]=R32(c->r[9]+0x00000004u); // 8004386C
  c->r[7]=c->r[10]|c->r[10]; // 80043870
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80043874
  c->r[0]=c->r[0]-c->r[5]; // 80043878
  c->r[0]=sraw(c,c->r[0],2); // 8004387C
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 80043880
  c->r[0]=c->r[5]-c->r[10]; // 80043884
  c->ctr=c->r[0]; // 80043888
  cmpu(c,0,c->r[10],c->r[5]); // 8004388C
  if (!crb(c,0)) { goto L_800438D0; } // 80043890
L_80043894:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 80043894
  c->r[6]=R32(c->r[4]+0x00000000u); // 80043898
  c->r[5]=R32(c->r[5]+c->r[8]); // 8004389C
  c->r[0]=R32(c->r[5]+0x00000014u); // 800438A0
  cmpu(c,0,c->r[6],c->r[0]); // 800438A4
  if (!crb(c,2)) { goto L_800438C4; } // 800438A8
  W32(c->r[3]+0x00000004u,c->r[7]); // 800438AC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800438B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800438B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800438B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800438BC
  goto L_80043924; // 800438C0
L_800438C4:;
  c->r[8]=c->r[8]+0x00000004u; // 800438C4
  c->r[7]=c->r[7]+0x00000001u; // 800438C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043894; } // 800438CC
L_800438D0:;
  c->r[8]=0u+0x00000000u; // 800438D0
  c->r[7]=0u+0x00000000u; // 800438D4
  c->ctr=c->r[10]; // 800438D8
  cmpu(c,0,c->r[10],0x00000000u); // 800438DC
  if (!crb(c,1)) { goto L_80043920; } // 800438E0
L_800438E4:;
  c->r[5]=R32(c->r[9]+0x00000000u); // 800438E4
  c->r[6]=R32(c->r[4]+0x00000000u); // 800438E8
  c->r[5]=R32(c->r[5]+c->r[7]); // 800438EC
  c->r[0]=R32(c->r[5]+0x00000014u); // 800438F0
  cmpu(c,0,c->r[6],c->r[0]); // 800438F4
  if (!crb(c,2)) { goto L_80043914; } // 800438F8
  W32(c->r[3]+0x00000004u,c->r[8]); // 800438FC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80043900
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043904
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043908
  c->r[3]=R32(c->r[3]+c->r[0]); // 8004390C
  goto L_80043924; // 80043910
L_80043914:;
  c->r[7]=c->r[7]+0x00000004u; // 80043914
  c->r[8]=c->r[8]+0x00000001u; // 80043918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800438E4; } // 8004391C
L_80043920:;
  c->r[3]=0u+0x00000000u; // 80043920
L_80043924:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80043924
  cmps(c,0,(int32_t)c->r[4],37); // 80043928
  if (!crb(c,1)) { goto L_80043944; } // 8004392C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043930
  cmpu(c,0,c->r[0],0x00000001u); // 80043934
  if (!crb(c,2)) { goto L_80043944; } // 80043938
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8004393C
  return; // 80043940
L_80043944:;
  cmps(c,0,(int32_t)c->r[4],26); // 80043944
  if (crb(c,0)) { goto L_80043954; } // 80043948
  cmps(c,0,(int32_t)c->r[4],36); // 8004394C
  if (!crb(c,2)) { goto L_80043968; } // 80043950
L_80043954:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043954
  cmpu(c,0,c->r[0],0x00000001u); // 80043958
  if (!crb(c,2)) { goto L_80043968; } // 8004395C
  c->r[3]=c->r[3]+0x00000008u; // 80043960
  return; // 80043964
L_80043968:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80043968
  return; // 8004396C
}

// fn_80043970
void f_80043970(Ctx* __restrict c) {
  trace_call(0x80043970u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80043970
  return; // 80043974
}

// fn_80043978
void f_80043978(Ctx* __restrict c) {
  trace_call(0x80043978u);
  c->r[3]=c->r[3]+0x00000028u; // 80043978
  return; // 8004397C
}

// fn_80043980
void f_80043980(Ctx* __restrict c) {
  trace_call(0x80043980u);
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 80043980
  return; // 80043984
}

// fn_80043988
void f_80043988(Ctx* __restrict c) {
  trace_call(0x80043988u);
  c->r[3]=R32(c->r[3]+0x000000C0u); // 80043988
  return; // 8004398C
}

// fn_80043990
void f_80043990(Ctx* __restrict c) {
  trace_call(0x80043990u);
  W32(c->r[3]+0x000000E8u,c->r[4]); // 80043990
  return; // 80043994
}

// fn_80043998
void f_80043998(Ctx* __restrict c) {
  trace_call(0x80043998u);
  W32(c->r[13]+0xFFFF8120u,c->r[3]); // 80043998
  return; // 8004399C
}

// fn_800439A0
void f_800439A0(Ctx* __restrict c) {
  trace_call(0x800439A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800439A0
  c->r[0]=c->lr; // 800439A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800439A8
  c->r[11]=c->r[1]+0x00000020u; // 800439AC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800439B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800439B4
  c->lr=0x800439BCu; f_800C2E4C(c); // 800439B8
  c->r[27]=c->r[3]|c->r[3]; // 800439BC
  c->r[30]=0u+0x803C0000u; // 800439C0
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800439C4
  c->r[29]=c->r[27]|c->r[27]; // 800439C8
  c->r[30]=c->r[30]+0x00002E78u; // 800439CC
  c->r[28]=0u+0x00000000u; // 800439D0
  c->r[31]=0u+0x00000000u; // 800439D4
L_800439D8:;
  c->r[3]=R32(c->r[27]+0x0000014Cu); // 800439D8
  c->r[4]=R32(c->r[30]+0x00000000u); // 800439DC
  c->r[6]=R32(c->r[3]+0x00000018u); // 800439E0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800439E4
  c->r[8]=R32(c->r[6]+0x00000004u); // 800439E8
  c->r[3]=R32(c->r[5]+0x00000000u); // 800439EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800439F0
  c->r[5]=c->r[8]|c->r[8]; // 800439F4
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800439F8
  c->r[0]=c->r[0]-c->r[3]; // 800439FC
  c->r[0]=sraw(c,c->r[0],2); // 80043A00
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80043A04
  c->r[0]=c->r[3]-c->r[8]; // 80043A08
  c->ctr=c->r[0]; // 80043A0C
  cmpu(c,0,c->r[8],c->r[3]); // 80043A10
  if (!crb(c,0)) { goto L_80043A54; } // 80043A14
L_80043A18:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043A18
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043A1C
  c->r[3]=R32(c->r[3]+c->r[7]); // 80043A20
  c->r[0]=R32(c->r[3]+0x00000014u); // 80043A24
  cmpu(c,0,c->r[4],c->r[0]); // 80043A28
  if (!crb(c,2)) { goto L_80043A48; } // 80043A2C
  W32(c->r[6]+0x00000004u,c->r[5]); // 80043A30
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80043A34
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043A38
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043A3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80043A40
  goto L_80043AAC; // 80043A44
L_80043A48:;
  c->r[7]=c->r[7]+0x00000004u; // 80043A48
  c->r[5]=c->r[5]+0x00000001u; // 80043A4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043A18; } // 80043A50
L_80043A54:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80043A54
  c->r[7]=0u+0x00000000u; // 80043A58
  c->r[5]=0u+0x00000000u; // 80043A5C
  c->ctr=c->r[8]; // 80043A60
  cmpu(c,0,c->r[8],0x00000000u); // 80043A64
  if (!crb(c,1)) { goto L_80043AA8; } // 80043A68
L_80043A6C:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043A6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043A70
  c->r[3]=R32(c->r[3]+c->r[5]); // 80043A74
  c->r[0]=R32(c->r[3]+0x00000014u); // 80043A78
  cmpu(c,0,c->r[4],c->r[0]); // 80043A7C
  if (!crb(c,2)) { goto L_80043A9C; } // 80043A80
  W32(c->r[6]+0x00000004u,c->r[7]); // 80043A84
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80043A88
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043A8C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043A90
  c->r[3]=R32(c->r[3]+c->r[0]); // 80043A94
  goto L_80043AAC; // 80043A98
L_80043A9C:;
  c->r[5]=c->r[5]+0x00000004u; // 80043A9C
  c->r[7]=c->r[7]+0x00000001u; // 80043AA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043A6C; } // 80043AA4
L_80043AA8:;
  c->r[3]=0u+0x00000000u; // 80043AA8
L_80043AAC:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80043AAC
  cmps(c,0,(int32_t)c->r[4],37); // 80043AB0
  if (!crb(c,1)) { goto L_80043ACC; } // 80043AB4
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043AB8
  cmpu(c,0,c->r[0],0x00000001u); // 80043ABC
  if (!crb(c,2)) { goto L_80043ACC; } // 80043AC0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80043AC4
  goto L_80043AF4; // 80043AC8
L_80043ACC:;
  cmps(c,0,(int32_t)c->r[4],26); // 80043ACC
  if (crb(c,0)) { goto L_80043ADC; } // 80043AD0
  cmps(c,0,(int32_t)c->r[4],36); // 80043AD4
  if (!crb(c,2)) { goto L_80043AF0; } // 80043AD8
L_80043ADC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043ADC
  cmpu(c,0,c->r[0],0x00000001u); // 80043AE0
  if (!crb(c,2)) { goto L_80043AF0; } // 80043AE4
  c->r[3]=c->r[3]+0x00000008u; // 80043AE8
  goto L_80043AF4; // 80043AEC
L_80043AF0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80043AF0
L_80043AF4:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80043AF4
  c->r[6]=R32(c->r[3]+0x00000004u); // 80043AF8
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80043AFC
  W32(c->r[29]+0x00000150u,c->r[31]); // 80043B00
  if (crb(c,2)) { goto L_80043C08; } // 80043B04
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 80043B08
  c->r[8]=c->r[5]^c->r[6]; // 80043B0C
  c->r[7]=R32(c->r[3]+0x000000A8u); // 80043B10
  c->r[3]=R32(c->r[7]+0x00000000u); // 80043B14
  c->r[4]=R32(c->r[7]+0x00000004u); // 80043B18
  c->r[0]=divwu(c->r[8],c->r[3]); // 80043B1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80043B20
  c->r[0]=c->r[8]-c->r[0]; // 80043B24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80043B28
  c->r[0]=R32(c->r[4]+c->r[0]); // 80043B2C
  goto L_80043B70; // 80043B30
L_80043B34:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 80043B34
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80043B38
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043B3C
  c->r[4]=c->r[3]+c->r[0]; // 80043B40
  c->r[0]=R32(c->r[3]+c->r[0]); // 80043B44
  cmpu(c,0,c->r[0],c->r[8]); // 80043B48
  if (!crb(c,2)) { goto L_80043B6C; } // 80043B4C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80043B50
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80043B54
  c->r[0]=c->r[0]^c->r[5]; // 80043B58
  c->r[3]=c->r[3]^c->r[6]; // 80043B5C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80043B60
  if (!crb(c,2)) { goto L_80043B6C; } // 80043B64
  goto L_80043B7C; // 80043B68
L_80043B6C:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 80043B6C
L_80043B70:;
  cmps(c,0,(int32_t)c->r[0],-1); // 80043B70
  if (!crb(c,2)) { IRQCHK(c); goto L_80043B34; } // 80043B74
  c->r[4]=0u+0x00000000u; // 80043B78
L_80043B7C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80043B7C
  if (!crb(c,2)) { goto L_80043B8C; } // 80043B80
  c->r[3]=0u+0x00000000u; // 80043B84
  goto L_80043B90; // 80043B88
L_80043B8C:;
  c->r[3]=c->r[4]+0x00000010u; // 80043B8C
L_80043B90:;
  cmps(c,0,(int32_t)c->r[3],0); // 80043B90
  if (!crb(c,2)) { goto L_80043BA0; } // 80043B94
  c->r[3]=0u+0x00000000u; // 80043B98
  goto L_80043BA4; // 80043B9C
L_80043BA0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043BA0
L_80043BA4:;
  c->r[0]=0u-c->r[3]; // 80043BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80043BA8
  c->r[0]=c->r[0]|c->r[3]; // 80043BAC
  W32(c->r[29]+0x00000150u,c->r[3]); // 80043BB0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80043BB4
  c->r[4]=0u+0x00000000u; // 80043BB8
  if (crb(c,2)) { goto L_80043BE8; } // 80043BBC
  c->r[6]=R32(c->r[3]+0x000000C0u); // 80043BC0
  c->r[5]=0u+0x00000001u; // 80043BC4
  cmps(c,0,(int32_t)c->r[6],0); // 80043BC8
  if (crb(c,2)) { goto L_80043BDC; } // 80043BCC
  cmps(c,0,(int32_t)c->r[6],1); // 80043BD0
  if (crb(c,2)) { goto L_80043BDC; } // 80043BD4
  c->r[5]=0u+0x00000000u; // 80043BD8
L_80043BDC:;
  cmps(c,0,(int32_t)c->r[5],0); // 80043BDC
  if (crb(c,2)) { goto L_80043BE8; } // 80043BE0
  c->r[4]=0u+0x00000001u; // 80043BE4
L_80043BE8:;
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 80043BE8
  if (crb(c,2)) { goto L_80043C08; } // 80043BEC
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[31]);} // 80043BF0
  c->r[3]=R32(c->r[29]+0x00000150u); // 80043BF4
  c->r[12]=R32(c->r[3]+0x00000014u); // 80043BF8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80043BFC
  c->ctr=c->r[12]; // 80043C00
  if (true) { c->lr=0x80043C08u; dispatch(c,c->ctr); } // 80043C04
L_80043C08:;
  c->r[28]=c->r[28]+0x00000001u; // 80043C08
  c->r[29]=c->r[29]+0x00000008u; // 80043C0C
  cmps(c,0,(int32_t)c->r[28],4); // 80043C10
  c->r[30]=c->r[30]+0x00000004u; // 80043C14
  if (crb(c,0)) { IRQCHK(c); goto L_800439D8; } // 80043C18
  c->r[11]=c->r[1]+0x00000020u; // 80043C1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80043C20
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80043C24
  c->lr=0x80043C2Cu; f_800C2E98(c); // 80043C28
  c->r[0]=R32(c->r[1]+0x00000034u); // 80043C2C
  c->lr=c->r[0]; // 80043C30
  c->r[1]=c->r[1]+0x00000030u; // 80043C34
  return; // 80043C38
}

// fn_80043C3C
void f_80043C3C(Ctx* __restrict c) {
  trace_call(0x80043C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043C3C
  c->r[0]=c->lr; // 80043C40
  W32(c->r[1]+0x00000034u,c->r[0]); // 80043C44
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043C48
  c->r[25]=c->r[3]|c->r[3]; // 80043C4C
  c->r[30]=0u+0x803C0000u; // 80043C50
  c->r[26]=c->r[4]|c->r[4]; // 80043C54
  c->r[27]=c->r[5]|c->r[5]; // 80043C58
  c->r[29]=c->r[25]|c->r[25]; // 80043C5C
  c->r[30]=c->r[30]+0x00002E78u; // 80043C60
  c->r[28]=0u+0x00000000u; // 80043C64
  c->r[31]=0u+0x00000000u; // 80043C68
L_80043C6C:;
  c->r[3]=R32(c->r[25]+0x0000014Cu); // 80043C6C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80043C70
  c->r[6]=R32(c->r[3]+0x00000018u); // 80043C74
  c->r[5]=R32(c->r[6]+0x00000000u); // 80043C78
  c->r[8]=R32(c->r[6]+0x00000004u); // 80043C7C
  c->r[3]=R32(c->r[5]+0x00000000u); // 80043C80
  c->r[0]=R32(c->r[5]+0x00000004u); // 80043C84
  c->r[5]=c->r[8]|c->r[8]; // 80043C88
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80043C8C
  c->r[0]=c->r[0]-c->r[3]; // 80043C90
  c->r[0]=sraw(c,c->r[0],2); // 80043C94
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 80043C98
  c->r[0]=c->r[3]-c->r[8]; // 80043C9C
  c->ctr=c->r[0]; // 80043CA0
  cmpu(c,0,c->r[8],c->r[3]); // 80043CA4
  if (!crb(c,0)) { goto L_80043CE8; } // 80043CA8
L_80043CAC:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043CAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043CB0
  c->r[3]=R32(c->r[3]+c->r[7]); // 80043CB4
  c->r[0]=R32(c->r[3]+0x00000014u); // 80043CB8
  cmpu(c,0,c->r[4],c->r[0]); // 80043CBC
  if (!crb(c,2)) { goto L_80043CDC; } // 80043CC0
  W32(c->r[6]+0x00000004u,c->r[5]); // 80043CC4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80043CC8
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043CCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043CD0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80043CD4
  goto L_80043D40; // 80043CD8
L_80043CDC:;
  c->r[7]=c->r[7]+0x00000004u; // 80043CDC
  c->r[5]=c->r[5]+0x00000001u; // 80043CE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043CAC; } // 80043CE4
L_80043CE8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80043CE8
  c->r[7]=0u+0x00000000u; // 80043CEC
  c->r[5]=0u+0x00000000u; // 80043CF0
  c->ctr=c->r[8]; // 80043CF4
  cmpu(c,0,c->r[8],0x00000000u); // 80043CF8
  if (!crb(c,1)) { goto L_80043D3C; } // 80043CFC
L_80043D00:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043D00
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043D04
  c->r[3]=R32(c->r[3]+c->r[5]); // 80043D08
  c->r[0]=R32(c->r[3]+0x00000014u); // 80043D0C
  cmpu(c,0,c->r[4],c->r[0]); // 80043D10
  if (!crb(c,2)) { goto L_80043D30; } // 80043D14
  W32(c->r[6]+0x00000004u,c->r[7]); // 80043D18
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80043D1C
  c->r[3]=R32(c->r[6]+0x00000000u); // 80043D20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043D24
  c->r[3]=R32(c->r[3]+c->r[0]); // 80043D28
  goto L_80043D40; // 80043D2C
L_80043D30:;
  c->r[5]=c->r[5]+0x00000004u; // 80043D30
  c->r[7]=c->r[7]+0x00000001u; // 80043D34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043D00; } // 80043D38
L_80043D3C:;
  c->r[3]=0u+0x00000000u; // 80043D3C
L_80043D40:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80043D40
  cmps(c,0,(int32_t)c->r[4],37); // 80043D44
  if (!crb(c,1)) { goto L_80043D60; } // 80043D48
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043D4C
  cmpu(c,0,c->r[0],0x00000001u); // 80043D50
  if (!crb(c,2)) { goto L_80043D60; } // 80043D54
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80043D58
  goto L_80043D88; // 80043D5C
L_80043D60:;
  cmps(c,0,(int32_t)c->r[4],26); // 80043D60
  if (crb(c,0)) { goto L_80043D70; } // 80043D64
  cmps(c,0,(int32_t)c->r[4],36); // 80043D68
  if (!crb(c,2)) { goto L_80043D84; } // 80043D6C
L_80043D70:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80043D70
  cmpu(c,0,c->r[0],0x00000001u); // 80043D74
  if (!crb(c,2)) { goto L_80043D84; } // 80043D78
  c->r[3]=c->r[3]+0x00000008u; // 80043D7C
  goto L_80043D88; // 80043D80
L_80043D84:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80043D84
L_80043D88:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80043D88
  c->r[6]=R32(c->r[3]+0x00000004u); // 80043D8C
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80043D90
  W32(c->r[29]+0x00000150u,c->r[31]); // 80043D94
  if (crb(c,2)) { goto L_80043EC0; } // 80043D98
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 80043D9C
  c->r[8]=c->r[5]^c->r[6]; // 80043DA0
  c->r[7]=R32(c->r[3]+0x000000A8u); // 80043DA4
  c->r[3]=R32(c->r[7]+0x00000000u); // 80043DA8
  c->r[4]=R32(c->r[7]+0x00000004u); // 80043DAC
  c->r[0]=divwu(c->r[8],c->r[3]); // 80043DB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80043DB4
  c->r[0]=c->r[8]-c->r[0]; // 80043DB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80043DBC
  c->r[0]=R32(c->r[4]+c->r[0]); // 80043DC0
  goto L_80043E04; // 80043DC4
L_80043DC8:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 80043DC8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80043DCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043DD0
  c->r[4]=c->r[3]+c->r[0]; // 80043DD4
  c->r[0]=R32(c->r[3]+c->r[0]); // 80043DD8
  cmpu(c,0,c->r[0],c->r[8]); // 80043DDC
  if (!crb(c,2)) { goto L_80043E00; } // 80043DE0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80043DE4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80043DE8
  c->r[0]=c->r[0]^c->r[5]; // 80043DEC
  c->r[3]=c->r[3]^c->r[6]; // 80043DF0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80043DF4
  if (!crb(c,2)) { goto L_80043E00; } // 80043DF8
  goto L_80043E10; // 80043DFC
L_80043E00:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 80043E00
L_80043E04:;
  cmps(c,0,(int32_t)c->r[0],-1); // 80043E04
  if (!crb(c,2)) { IRQCHK(c); goto L_80043DC8; } // 80043E08
  c->r[4]=0u+0x00000000u; // 80043E0C
L_80043E10:;
  cmps(c,0,(int32_t)c->r[4],0); // 80043E10
  if (!crb(c,2)) { goto L_80043E20; } // 80043E14
  c->r[3]=0u+0x00000000u; // 80043E18
  goto L_80043E24; // 80043E1C
L_80043E20:;
  c->r[3]=c->r[4]+0x00000010u; // 80043E20
L_80043E24:;
  cmps(c,0,(int32_t)c->r[3],0); // 80043E24
  if (!crb(c,2)) { goto L_80043E34; } // 80043E28
  c->r[3]=0u+0x00000000u; // 80043E2C
  goto L_80043E38; // 80043E30
L_80043E34:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80043E34
L_80043E38:;
  c->r[0]=0u-c->r[3]; // 80043E38
  cmps(c,0,(int32_t)c->r[3],0); // 80043E3C
  c->r[0]=c->r[0]|c->r[3]; // 80043E40
  W32(c->r[29]+0x00000150u,c->r[3]); // 80043E44
  c->r[4]=0u+0x00000000u; // 80043E48
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80043E4C
  if (crb(c,2)) { goto L_80043E7C; } // 80043E50
  c->r[6]=R32(c->r[3]+0x000000C0u); // 80043E54
  c->r[5]=0u+0x00000001u; // 80043E58
  cmps(c,0,(int32_t)c->r[6],0); // 80043E5C
  if (crb(c,2)) { goto L_80043E70; } // 80043E60
  cmps(c,0,(int32_t)c->r[6],1); // 80043E64
  if (crb(c,2)) { goto L_80043E70; } // 80043E68
  c->r[5]=0u+0x00000000u; // 80043E6C
L_80043E70:;
  cmps(c,0,(int32_t)c->r[5],0); // 80043E70
  if (crb(c,2)) { goto L_80043E7C; } // 80043E74
  c->r[4]=0u+0x00000001u; // 80043E78
L_80043E7C:;
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 80043E7C
  if (crb(c,2)) { goto L_80043EC0; } // 80043E80
  c->r[0]=R32(c->r[3]+0x00000138u); // 80043E84
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80043E88
  if (crb(c,2)) { goto L_80043EC0; } // 80043E8C
  cmps(c,0,(int32_t)c->r[27],102); // 80043E90
  if (crb(c,2)) { goto L_80043EA4; } // 80043E94
  cmps(c,0,(int32_t)c->r[27],103); // 80043E98
  if (crb(c,2)) { goto L_80043EB4; } // 80043E9C
  goto L_80043EC0; // 80043EA0
L_80043EA4:;
  c->r[4]=c->r[26]|c->r[26]; // 80043EA4
  c->r[5]=c->r[27]|c->r[27]; // 80043EA8
  c->lr=0x80043EB0u; f_80041854(c); // 80043EAC
  goto L_80043EC0; // 80043EB0
L_80043EB4:;
  c->r[4]=c->r[26]|c->r[26]; // 80043EB4
  c->r[5]=c->r[27]|c->r[27]; // 80043EB8
  c->lr=0x80043EC0u; f_80041854(c); // 80043EBC
L_80043EC0:;
  c->r[28]=c->r[28]+0x00000001u; // 80043EC0
  c->r[29]=c->r[29]+0x00000008u; // 80043EC4
  cmps(c,0,(int32_t)c->r[28],4); // 80043EC8
  c->r[30]=c->r[30]+0x00000004u; // 80043ECC
  if (crb(c,0)) { IRQCHK(c); goto L_80043C6C; } // 80043ED0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043ED4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80043ED8
  c->lr=c->r[0]; // 80043EDC
  c->r[1]=c->r[1]+0x00000030u; // 80043EE0
  return; // 80043EE4
}

// fn_80043EE8
void f_80043EE8(Ctx* __restrict c) {
  trace_call(0x80043EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043EE8
  c->r[0]=c->lr; // 80043EEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80043EF0
  c->r[11]=c->r[1]+0x00000020u; // 80043EF4
  c->lr=0x80043EFCu; f_800C2E4C(c); // 80043EF8
  c->r[0]=R32(c->r[3]+0x00000148u); // 80043EFC
  c->r[30]=c->r[3]|c->r[3]; // 80043F00
  c->r[31]=0u+0x00000001u; // 80043F04
  cmps(c,0,(int32_t)c->r[0],1); // 80043F08
  if (!crb(c,2)) { goto L_800441C4; } // 80043F0C
  c->r[4]=R8(c->r[3]+0x0000017Cu); // 80043F10
  c->r[0]=rotl(c->r[4],31)&0x00000001u; cr0(c,c->r[0]); // 80043F14
  if (crb(c,2)) { goto L_80043F54; } // 80043F18
  c->r[4]=0u+0x803D0000u; // 80043F1C
  {uint32_t ea=c->r[3]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F20
  c->r[4]=c->r[4]+0x0000407Cu; // 80043F24
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80043F28
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80043F2C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80043F30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80043F34
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80043F38
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 80043F3C
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[2]);} // 80043F40
  c->f[0]=c->ps1[0]=S(c->f[2]); // 80043F44
  fcmp(c,0,c->f[1],c->f[0]); // 80043F48
  if (crb(c,2)) { goto L_80044138; } // 80043F4C
  goto L_80044260; // 80043F50
L_80043F54:;
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 80043F54
  if (crb(c,2)) { goto L_80043FB8; } // 80043F58
  c->r[5]=R32(c->r[3]+0x00000150u); // 80043F5C
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F60
  cmps(c,0,(int32_t)c->r[5],0); // 80043F64
  if (crb(c,2)) { goto L_80043F7C; } // 80043F68
  c->r[0]=R32(c->r[5]+0x000000C0u); // 80043F6C
  cmps(c,0,(int32_t)c->r[0],4); // 80043F70
  if (!crb(c,2)) { goto L_80043F7C; } // 80043F74
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[0]);} // 80043F78
L_80043F7C:;
  c->r[5]=R32(c->r[3]+0x00000158u); // 80043F7C
  cmps(c,0,(int32_t)c->r[5],0); // 80043F80
  if (crb(c,2)) { goto L_80043F98; } // 80043F84
  c->r[0]=R32(c->r[5]+0x000000C0u); // 80043F88
  cmps(c,0,(int32_t)c->r[0],4); // 80043F8C
  if (!crb(c,2)) { goto L_80043F98; } // 80043F90
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[0]);} // 80043F94
L_80043F98:;
  c->r[5]=R32(c->r[3]+0x00000160u); // 80043F98
  c->r[4]=c->r[3]+0x00000010u; // 80043F9C
  cmps(c,0,(int32_t)c->r[5],0); // 80043FA0
  if (crb(c,2)) { goto L_80043FB8; } // 80043FA4
  c->r[0]=R32(c->r[5]+0x000000C0u); // 80043FA8
  cmps(c,0,(int32_t)c->r[0],4); // 80043FAC
  if (!crb(c,2)) { goto L_80043FB8; } // 80043FB0
  {uint32_t ea=c->r[4]+0x0000015Cu; WF32(ea,c->f[0]);} // 80043FB4
L_80043FB8:;
  c->r[5]=0u+0x803D0000u; // 80043FB8
  c->r[0]=0u+0x00000002u; // 80043FBC
  c->r[6]=c->r[30]|c->r[30]; // 80043FC0
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80043FC4
  c->r[5]=c->r[5]+0x0000407Cu; // 80043FC8
  c->r[8]=0u+0x00000000u; // 80043FCC
  c->ctr=c->r[0]; // 80043FD0
L_80043FD4:;
  c->r[7]=R32(c->r[6]+0x00000150u); // 80043FD4
  cmps(c,0,(int32_t)c->r[7],0); // 80043FD8
  if (crb(c,2)) { goto L_8004401C; } // 80043FDC
  c->r[4]=R32(c->r[7]+0x000000C0u); // 80043FE0
  cmps(c,0,(int32_t)c->r[4],1); // 80043FE4
  if (!crb(c,2)) { goto L_8004401C; } // 80043FE8
  {uint32_t ea=c->r[6]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043FEC
  fcmp(c,0,c->f[1],c->f[0]); // 80043FF0
  if (!crb(c,2)) { goto L_80044000; } // 80043FF4
  W32(c->r[7]+0x000000C0u,c->r[0]); // 80043FF8
  goto L_8004401C; // 80043FFC
L_80044000:;
  c->r[4]=R32(c->r[5]+0x0000004Cu); // 80044000
  c->r[31]=0u+0x00000000u; // 80044004
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044008
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8004400C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80044010
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 80044014
  {uint32_t ea=c->r[6]+0x00000154u; WF32(ea,c->f[2]);} // 80044018
L_8004401C:;
  c->r[7]=R32(c->r[6]+0x00000158u); // 8004401C
  cmps(c,0,(int32_t)c->r[7],0); // 80044020
  if (crb(c,2)) { goto L_80044064; } // 80044024
  c->r[4]=R32(c->r[7]+0x000000C0u); // 80044028
  cmps(c,0,(int32_t)c->r[4],1); // 8004402C
  if (!crb(c,2)) { goto L_80044064; } // 80044030
  {uint32_t ea=c->r[6]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80044034
  fcmp(c,0,c->f[1],c->f[0]); // 80044038
  if (!crb(c,2)) { goto L_80044048; } // 8004403C
  W32(c->r[7]+0x000000C0u,c->r[0]); // 80044040
  goto L_80044064; // 80044044
L_80044048:;
  c->r[4]=R32(c->r[5]+0x0000004Cu); // 80044048
  c->r[31]=0u+0x00000000u; // 8004404C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044050
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80044054
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80044058
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 8004405C
  {uint32_t ea=c->r[6]+0x0000015Cu; WF32(ea,c->f[2]);} // 80044060
L_80044064:;
  c->r[6]=c->r[6]+0x00000010u; // 80044064
  c->r[8]=c->r[8]+0x00000001u; // 80044068
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80043FD4; } // 8004406C
  {uint32_t ea=c->r[3]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044070
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044074
  fcmp(c,0,c->f[0],c->f[1]); // 80044078
  if (!crb(c,1)) { goto L_800440B8; } // 8004407C
  c->r[4]=0u+0x803D0000u; // 80044080
  c->r[4]=c->r[4]+0x0000407Cu; // 80044084
  c->r[4]=R32(c->r[4]+0x0000004Cu); // 80044088
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004408C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80044090
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80044094
  c->f[2]=(c->f[2]>=0.0)?c->f[1]:c->f[0]; // 80044098
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[2]);} // 8004409C
  c->f[0]=c->ps1[0]=S(c->f[2]); // 800440A0
  fcmp(c,0,c->f[1],c->f[0]); // 800440A4
  if (!crb(c,2)) { goto L_800440B8; } // 800440A8
  c->r[0]=0u+0x00000004u; // 800440AC
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800440B0
  goto L_80044260; // 800440B4
L_800440B8:;
  c->r[28]=c->r[30]|c->r[30]; // 800440B8
  c->r[27]=0u+0x00000000u; // 800440BC
  c->r[29]=0u+0x00000000u; // 800440C0
L_800440C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800440C4
  W32(c->r[13]+0xFFFF9538u,c->r[29]); // 800440C8
  if (crb(c,2)) { goto L_800440EC; } // 800440CC
  c->r[0]=R8(c->r[30]+0x0000017Cu); // 800440D0
  c->r[3]=c->r[30]|c->r[30]; // 800440D4
  c->r[4]=R32(c->r[28]+0x00000150u); // 800440D8
  c->r[5]=rotl(c->r[0],25)&0x00000001u; // 800440DC
  c->lr=0x800440E4u; f_800442AC(c); // 800440E0
  cmpu(c,0,c->r[3],0x00000001u); // 800440E4
  if (!crb(c,2)) { goto L_800440FC; } // 800440E8
L_800440EC:;
  c->r[3]=R32(c->r[30]+0x00000190u); // 800440EC
  c->r[0]=c->r[3]+0x00000001u; // 800440F0
  W32(c->r[30]+0x00000190u,c->r[0]); // 800440F4
  goto L_80044260; // 800440F8
L_800440FC:;
  c->r[27]=c->r[27]+0x00000001u; // 800440FC
  c->r[28]=c->r[28]+0x00000008u; // 80044100
  cmps(c,0,(int32_t)c->r[27],4); // 80044104
  if (crb(c,0)) { IRQCHK(c); goto L_800440C4; } // 80044108
  c->r[3]=R8(c->r[30]+0x0000017Cu); // 8004410C
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80044110
  if (crb(c,2)) { goto L_80044138; } // 80044114
  c->r[0]=R32(c->r[30]+0x00000190u); // 80044118
  cmps(c,0,(int32_t)c->r[0],1); // 8004411C
  if (!crb(c,2)) { goto L_80044138; } // 80044120
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044124
  c->r[0]=c->r[3]|0x00000002u; // 80044128
  {uint32_t ea=c->r[30]+0x00000170u; WF32(ea,c->f[0]);} // 8004412C
  W8(c->r[30]+0x0000017Cu,c->r[0]); // 80044130
  goto L_80044260; // 80044134
L_80044138:;
  c->r[3]=c->r[30]|c->r[30]; // 80044138
  c->lr=0x80044140u; f_8004467C(c); // 8004413C
  cmps(c,0,(int32_t)c->r[3],0); // 80044140
  if (!crb(c,2)) { goto L_80044260; } // 80044144
  c->r[0]=R8(c->r[30]+0x0000017Cu); // 80044148
  c->r[3]=c->r[30]|c->r[30]; // 8004414C
  c->r[4]=R32(c->r[30]+0x00000174u); // 80044150
  c->r[6]=0u+0x00000000u; // 80044154
  c->r[5]=rotl(c->r[0],27)&0x00000001u; // 80044158
  c->r[7]=0u+0x00000001u; // 8004415C
  c->lr=0x80044164u; f_80044478(c); // 80044160
  c->r[0]=R8(c->r[30]+0x0000017Cu); // 80044164
  c->r[3]=c->r[30]|c->r[30]; // 80044168
  c->r[4]=R32(c->r[30]+0x00000178u); // 8004416C
  c->r[6]=0u+0x00000001u; // 80044170
  c->r[5]=rotl(c->r[0],28)&0x00000001u; // 80044174
  c->r[7]=0u+0x00000000u; // 80044178
  c->lr=0x80044180u; f_80044478(c); // 8004417C
  cmps(c,0,(int32_t)c->r[3],0); // 80044180
  if (crb(c,2)) { goto L_800441C4; } // 80044184
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 80044188
  c->r[4]=0u+0x00000000u; // 8004418C
  c->lr=0x80044194u; f_8006FA28(c); // 80044190
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 80044194
  c->r[4]=0u+0x00000001u; // 80044198
  c->lr=0x800441A0u; f_8006FA28(c); // 8004419C
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800441A0
  c->r[4]=0u+0x80370000u; // 800441A4
  c->r[4]=c->r[4]+0x00003FB0u; // 800441A8
  c->r[3]=R32(c->r[13]+0xFFFF948Cu); // 800441AC
  c->f[3]=c->f[1]; // 800441B0
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800441B4
  c->r[4]=c->r[4]+0x00000165u; // 800441B8
  c->r[5]=0u+0x00000000u; // 800441BC
  c->lr=0x800441C4u; f_8006FBA4(c); // 800441C0
L_800441C4:;
  c->r[0]=R32(c->r[30]+0x00000148u); // 800441C4
  cmps(c,0,(int32_t)c->r[0],2); // 800441C8
  if (!crb(c,2)) { goto L_800441E0; } // 800441CC
  c->r[3]=c->r[30]|c->r[30]; // 800441D0
  c->lr=0x800441D8u; f_80044540(c); // 800441D4
  cmps(c,0,(int32_t)c->r[3],0); // 800441D8
  if (crb(c,2)) { goto L_80044260; } // 800441DC
L_800441E0:;
  c->r[0]=R32(c->r[30]+0x00000174u); // 800441E0
  cmps(c,0,(int32_t)c->r[0],0); // 800441E4
  if (crb(c,2)) { goto L_80044208; } // 800441E8
  c->r[3]=0u+0x803D0000u; // 800441EC
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800441F0
  c->r[3]=c->r[3]+0x0000407Cu; // 800441F4
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800441F8
  c->r[3]=c->r[3]+0x0000001Cu; // 800441FC
  c->r[4]=0u+0x00000003u; // 80044200
  c->lr=0x80044208u; f_80091970(c); // 80044204
L_80044208:;
  c->r[0]=R32(c->r[30]+0x00000178u); // 80044208
  cmps(c,0,(int32_t)c->r[0],0); // 8004420C
  if (crb(c,2)) { goto L_80044220; } // 80044210
  c->r[3]=0u+0x803D0000u; // 80044214
  c->r[3]=c->r[3]+0x00000280u; // 80044218
  c->lr=0x80044220u; f_8009BCCC(c); // 8004421C
L_80044220:;
  c->r[5]=R32(c->r[30]+0x00000188u); // 80044220
  c->r[6]=R32(c->r[30]+0x0000018Cu); // 80044224
  c->r[0]=c->r[6]|c->r[5]; cr0(c,c->r[0]); // 80044228
  if (!crb(c,2)) { goto L_8004423C; } // 8004422C
  c->r[0]=R32(c->r[30]+0x00000184u); // 80044230
  cmps(c,0,(int32_t)c->r[0],0); // 80044234
  if (crb(c,2)) { goto L_8004424C; } // 80044238
L_8004423C:;
  c->r[3]=0u+0x803C0000u; // 8004423C
  c->r[7]=R32(c->r[30]+0x00000184u); // 80044240
  c->r[3]=c->r[3]+0x00002300u; // 80044244
  c->lr=0x8004424Cu; f_8003E38C(c); // 80044248
L_8004424C:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 8004424C
  cmps(c,0,(int32_t)c->r[0],3); // 80044250
  if (!crb(c,2)) { goto L_80044260; } // 80044254
  c->r[0]=0u+0x00000004u; // 80044258
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8004425C
L_80044260:;
  c->r[11]=c->r[1]+0x00000020u; // 80044260
  c->lr=0x80044268u; f_800C2E98(c); // 80044264
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044268
  c->lr=c->r[0]; // 8004426C
  c->r[1]=c->r[1]+0x00000020u; // 80044270
  return; // 80044274
}

// fn_80044278
void f_80044278(Ctx* __restrict c) {
  trace_call(0x80044278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044278
  c->r[0]=c->lr; // 8004427C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044284
  c->r[31]=c->r[3]|c->r[3]; // 80044288
  c->lr=0x80044290u; f_80041EA0(c); // 8004428C
  c->r[0]=0u+0x00000000u; // 80044290
  W32(c->r[31]+0x00000148u,c->r[0]); // 80044294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004429C
  c->lr=c->r[0]; // 800442A0
  c->r[1]=c->r[1]+0x00000010u; // 800442A4
  return; // 800442A8
}

// fn_800442AC
void f_800442AC(Ctx* __restrict c) {
  trace_call(0x800442ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800442AC
  c->r[0]=c->lr; // 800442B0
  cmps(c,0,(int32_t)c->r[4],0); // 800442B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800442B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800442BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800442C0
  c->r[30]=c->r[4]|c->r[4]; // 800442C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800442C8
  c->r[29]=c->r[3]|c->r[3]; // 800442CC
  c->r[6]=R32(c->r[13]+0xFFFF9538u); // 800442D0
  c->r[3]=c->r[6]+0x00000001u; // 800442D4
  W32(c->r[13]+0xFFFF9538u,c->r[3]); // 800442D8
  if (crb(c,2)) { goto L_8004444C; } // 800442DC
  cmps(c,0,(int32_t)c->r[3],10); // 800442E0
  if (!crb(c,0)) { goto L_8004444C; } // 800442E4
  c->r[0]=R32(c->r[4]+0x00000138u); // 800442E8
  cmps(c,0,(int32_t)c->r[0],107); // 800442EC
  if (crb(c,2)) { goto L_8004444C; } // 800442F0
  c->r[0]=R8(c->r[4]+0x0000013Cu); // 800442F4
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800442F8
  if (crb(c,2)) { goto L_80044310; } // 800442FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80044300
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 80044304
  c->r[3]=0u+0x00000000u; // 80044308
  goto L_8004445C; // 8004430C
L_80044310:;
  cmps(c,0,(int32_t)c->r[5],0); // 80044310
  if (crb(c,2)) { goto L_8004444C; } // 80044314
  c->r[3]=0u+0x803D0000u; // 80044318
  c->r[3]=c->r[3]+0x0000407Cu; // 8004431C
  c->lr=0x80044324u; f_800B7578(c); // 80044320
  cmps(c,0,(int32_t)c->r[3],5); // 80044324
  if (!crb(c,2)) { goto L_80044354; } // 80044328
  c->r[0]=R32(c->r[30]+0x00000138u); // 8004432C
  cmps(c,0,(int32_t)c->r[0],8); // 80044330
  if (crb(c,2)) { goto L_80044340; } // 80044334
  cmps(c,0,(int32_t)c->r[0],41); // 80044338
  if (!crb(c,2)) { goto L_80044354; } // 8004433C
L_80044340:;
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 80044340
  c->r[3]=0u+0x00000000u; // 80044344
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80044348
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 8004434C
  goto L_8004445C; // 80044350
L_80044354:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 80044354
  cmps(c,0,(int32_t)c->r[0],2); // 80044358
  if (!crb(c,2)) { goto L_80044374; } // 8004435C
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 80044360
  c->r[3]=0u+0x00000001u; // 80044364
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80044368
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 8004436C
  goto L_8004445C; // 80044370
L_80044374:;
  c->r[3]=c->r[30]|c->r[30]; // 80044374
  c->lr=0x8004437Cu; f_80023CA0(c); // 80044378
  cmps(c,0,(int32_t)c->r[3],0); // 8004437C
  if (crb(c,2)) { goto L_800443B4; } // 80044380
  c->r[0]=R32(c->r[30]+0x00000138u); // 80044384
  cmps(c,0,(int32_t)c->r[0],60); // 80044388
  if (crb(c,2)) { goto L_800443B4; } // 8004438C
  c->r[3]=c->r[30]|c->r[30]; // 80044390
  c->lr=0x80044398u; f_80023F18(c); // 80044394
  cmps(c,0,(int32_t)c->r[3],0); // 80044398
  if (!crb(c,2)) { goto L_800443B4; } // 8004439C
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 800443A0
  c->r[3]=0u+0x00000000u; // 800443A4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800443A8
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 800443AC
  goto L_8004445C; // 800443B0
L_800443B4:;
  {uint32_t ea=c->r[29]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800443B4
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800443B8
  fcmp(c,0,c->f[0],c->f[1]); // 800443BC
  if (!crb(c,2)) { goto L_800443E4; } // 800443C0
  c->r[0]=R32(c->r[30]+0x000000C0u); // 800443C4
  cmps(c,0,(int32_t)c->r[0],5); // 800443C8
  if (crb(c,2)) { goto L_80044404; } // 800443CC
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 800443D0
  c->r[3]=0u+0x00000001u; // 800443D4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800443D8
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 800443DC
  goto L_8004445C; // 800443E0
L_800443E4:;
  c->r[0]=R32(c->r[30]+0x00000130u); // 800443E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800443E8
  if (crb(c,2)) { goto L_80044404; } // 800443EC
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 800443F0
  c->r[3]=0u+0x00000001u; // 800443F4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800443F8
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 800443FC
  goto L_8004445C; // 80044400
L_80044404:;
  c->r[31]=0u+0x00000000u; // 80044404
L_80044408:;
  c->r[4]=R32(c->r[30]+0x000000D0u); // 80044408
  cmps(c,0,(int32_t)c->r[4],0); // 8004440C
  if (crb(c,2)) { goto L_8004443C; } // 80044410
  c->r[3]=c->r[29]|c->r[29]; // 80044414
  c->r[5]=0u+0x00000001u; // 80044418
  c->lr=0x80044420u; f_800442AC(c); // 8004441C
  cmps(c,0,(int32_t)c->r[3],0); // 80044420
  if (crb(c,2)) { goto L_8004443C; } // 80044424
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 80044428
  c->r[3]=0u+0x00000001u; // 8004442C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80044430
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 80044434
  goto L_8004445C; // 80044438
L_8004443C:;
  c->r[31]=c->r[31]+0x00000001u; // 8004443C
  c->r[30]=c->r[30]+0x00000004u; // 80044440
  cmps(c,0,(int32_t)c->r[31],4); // 80044444
  if (crb(c,0)) { IRQCHK(c); goto L_80044408; } // 80044448
L_8004444C:;
  c->r[4]=R32(c->r[13]+0xFFFF9538u); // 8004444C
  c->r[3]=0u+0x00000000u; // 80044450
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80044454
  W32(c->r[13]+0xFFFF9538u,c->r[0]); // 80044458
L_8004445C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004445C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80044460
  c->r[30]=R32(c->r[1]+0x00000018u); // 80044464
  c->r[29]=R32(c->r[1]+0x00000014u); // 80044468
  c->lr=c->r[0]; // 8004446C
  c->r[1]=c->r[1]+0x00000020u; // 80044470
  return; // 80044474
}

// fn_80044478
void f_80044478(Ctx* __restrict c) {
  trace_call(0x80044478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044478
  c->r[0]=c->lr; // 8004447C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044480
  c->r[11]=c->r[1]+0x00000020u; // 80044484
  c->lr=0x8004448Cu; f_800C2E48(c); // 80044488
  cmps(c,0,(int32_t)c->r[4],0); // 8004448C
  c->r[26]=c->r[3]|c->r[3]; // 80044490
  c->r[27]=c->r[4]|c->r[4]; // 80044494
  c->r[28]=c->r[5]|c->r[5]; // 80044498
  c->r[29]=c->r[6]|c->r[6]; // 8004449C
  c->r[30]=c->r[7]|c->r[7]; // 800444A0
  if (crb(c,2)) { goto L_80044524; } // 800444A4
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 800444A8
  c->lr=0x800444B0u; f_800800B0(c); // 800444AC
  cmps(c,0,(int32_t)c->r[3],0); // 800444B0
  c->r[31]=c->r[3]|c->r[3]; // 800444B4
  if (crb(c,2)) { goto L_80044510; } // 800444B8
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 800444BC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800444C0
  c->lr=0x800444C8u; f_80080138(c); // 800444C4
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800444C8
  c->r[3]=c->r[31]|c->r[31]; // 800444CC
  c->r[5]=c->r[28]|c->r[28]; // 800444D0
  c->r[8]=c->r[30]|c->r[30]; // 800444D4
  c->r[4]=0u+0x00000001u; // 800444D8
  c->r[6]=0u+0x00000000u; // 800444DC
  c->r[7]=0u+0x00000000u; // 800444E0
  c->lr=0x800444E8u; f_800813B8(c); // 800444E4
  c->r[0]=R32(c->r[31]+0x00000114u); // 800444E8
  c->r[3]=0u+0x803D0000u; // 800444EC
  c->r[0]=(rotl(c->r[29],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800444F0
  W32(c->r[31]+0x00000114u,c->r[0]); // 800444F4
  c->r[3]=c->r[3]+0x0000407Cu; // 800444F8
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800444FC
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044500
  c->r[3]=c->r[3]+0x0000001Cu; // 80044504
  c->r[4]=0u+0x00000003u; // 80044508
  c->lr=0x80044510u; f_80091970(c); // 8004450C
L_80044510:;
  c->r[0]=0u+0x00000002u; // 80044510
  W32(c->r[26]+0x00000148u,c->r[0]); // 80044514
  c->r[3]=0u+0x00000001u; // 80044518
  W32(c->r[26]+0x00000180u,c->r[27]); // 8004451C
  goto L_80044528; // 80044520
L_80044524:;
  c->r[3]=0u+0x00000000u; // 80044524
L_80044528:;
  c->r[11]=c->r[1]+0x00000020u; // 80044528
  c->lr=0x80044530u; f_800C2E94(c); // 8004452C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044530
  c->lr=c->r[0]; // 80044534
  c->r[1]=c->r[1]+0x00000020u; // 80044538
  return; // 8004453C
}

// fn_80044540
void f_80044540(Ctx* __restrict c) {
  trace_call(0x80044540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044540
  c->r[0]=c->lr; // 80044544
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044548
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8004454C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80044550
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044554
  c->r[4]=R32(c->r[3]+0x00000180u); // 80044558
  cmps(c,0,(int32_t)c->r[4],0); // 8004455C
  if (crb(c,2)) { goto L_800445F0; } // 80044560
  c->r[3]=R32(c->r[13]+0xFFFF947Cu); // 80044564
  c->lr=0x8004456Cu; f_800800B0(c); // 80044568
  c->r[31]=c->r[3]|c->r[3]; // 8004456C
  c->r[4]=0u+0x00000000u; // 80044570
  c->lr=0x80044578u; f_80083040(c); // 80044574
  cmps(c,0,(int32_t)c->r[3],0); // 80044578
  if (crb(c,2)) { goto L_800445E8; } // 8004457C
  c->r[3]=R32(c->r[13]+0xFFFF9478u); // 80044580
  c->r[4]=0u+0x00000000u; // 80044584
  c->lr=0x8004458Cu; f_800318A4(c); // 80044588
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004458C
  c->r[3]=c->r[31]|c->r[31]; // 80044590
  c->r[4]=0u+0x00000001u; // 80044594
  c->r[5]=0u+0x00000000u; // 80044598
  c->r[6]=0u+0x00000000u; // 8004459C
  c->r[7]=0u+0x00000000u; // 800445A0
  c->r[8]=0u+0x00000000u; // 800445A4
  c->lr=0x800445ACu; f_800813B8(c); // 800445A8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800445AC
  cmps(c,0,(int32_t)c->r[3],0); // 800445B0
  if (crb(c,2)) { goto L_800445C4; } // 800445B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800445B8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800445BC
  goto L_800445C8; // 800445C0
L_800445C4:;
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800445C4
L_800445C8:;
  {uint32_t ea=c->r[2]+0xFFFF86CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800445C8
  c->r[3]=c->r[31]|c->r[31]; // 800445CC
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 800445D0
  c->lr=0x800445D8u; f_800825E4(c); // 800445D4
  c->r[4]=R32(c->r[31]+0x00000008u); // 800445D8
  c->r[3]=0u+0x00000001u; // 800445DC
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[31]);} // 800445E0
  goto L_800445F4; // 800445E4
L_800445E8:;
  c->r[3]=0u+0x00000000u; // 800445E8
  goto L_800445F4; // 800445EC
L_800445F0:;
  c->r[3]=0u+0x00000001u; // 800445F0
L_800445F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800445F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800445F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800445FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044600
  c->lr=c->r[0]; // 80044604
  c->r[1]=c->r[1]+0x00000020u; // 80044608
  return; // 8004460C
}

// fn_80044610
void f_80044610(Ctx* __restrict c) {
  trace_call(0x80044610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044610
  c->r[0]=c->lr; // 80044614
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044618
  c->r[0]=R8(c->r[3]+0x0000017Cu); // 8004461C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 80044620
  if (crb(c,2)) { goto L_80044668; } // 80044624
  c->r[3]=0u+0x803D0000u; // 80044628
  c->r[3]=c->r[3]+0x00000280u; // 8004462C
  c->r[0]=R32(c->r[3]+0x00001B2Cu); // 80044630
  cmps(c,0,(int32_t)c->r[0],0); // 80044634
  if (!crb(c,2)) { goto L_80044644; } // 80044638
  c->r[3]=c->r[3]+0x00001B2Cu; // 8004463C
  c->lr=0x80044644u; f_8009E950(c); // 80044640
L_80044644:;
  c->r[3]=0u+0x803D0000u; // 80044644
  c->r[3]=c->r[3]+0x00000280u; // 80044648
  c->r[0]=R32(c->r[3]+0x00001B2Cu); // 8004464C
  cmps(c,0,(int32_t)c->r[0],2); // 80044650
  if (!crb(c,2)) { goto L_80044660; } // 80044654
  c->r[3]=0u+0x00000000u; // 80044658
  goto L_8004466C; // 8004465C
L_80044660:;
  c->r[3]=0u+0x00000001u; // 80044660
  goto L_8004466C; // 80044664
L_80044668:;
  c->r[3]=0u+0x00000000u; // 80044668
L_8004466C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004466C
  c->lr=c->r[0]; // 80044670
  c->r[1]=c->r[1]+0x00000010u; // 80044674
  return; // 80044678
}

// fn_8004467C
void f_8004467C(Ctx* __restrict c) {
  trace_call(0x8004467Cu);
  c->r[0]=R8(c->r[3]+0x0000017Cu); // 8004467C
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 80044680
  if (crb(c,2)) { goto L_800446B0; } // 80044684
  c->r[3]=0u+0x803D0000u; // 80044688
  c->r[4]=0u+0x00000001u; // 8004468C
  c->r[3]=c->r[3]+0x00000280u; // 80044690
  c->r[0]=R32(c->r[3]+0x00001B2Cu); // 80044694
  W32(c->r[3]+0x00001B40u,c->r[4]); // 80044698
  cmps(c,0,(int32_t)c->r[0],0); // 8004469C
  W32(c->r[3]+0x00001B38u,c->r[4]); // 800446A0
  if (crb(c,2)) { goto L_800446B0; } // 800446A4
  c->r[3]=0u+0x00000001u; // 800446A8
  return; // 800446AC
L_800446B0:;
  c->r[3]=0u+0x00000000u; // 800446B0
  return; // 800446B4
}

// fn_800446B8
void f_800446B8(Ctx* __restrict c) {
  trace_call(0x800446B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800446B8
  c->r[0]=c->lr; // 800446BC
  cmps(c,0,(int32_t)c->r[3],0); // 800446C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800446C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800446C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800446CC
  c->r[30]=c->r[4]|c->r[4]; // 800446D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800446D4
  c->r[29]=c->r[3]|c->r[3]; // 800446D8
  if (crb(c,2)) { goto L_800447A0; } // 800446DC
  if (crb(c,2)) { goto L_800446EC; } // 800446E0
  c->r[4]=0u+0x00000000u; // 800446E4
  c->lr=0x800446ECu; f_8030BAE0(c); // 800446E8
L_800446EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800446EC
  if (!crb(c,1)) { goto L_800447A0; } // 800446F0
  c->lr=0x800446F8u; f_8028B53C(c); // 800446F4
  c->r[31]=0u+0x804B0000u; // 800446F8
  c->r[31]=c->r[31]+0xFFFFC800u; // 800446FC
  c->r[3]=c->r[31]|c->r[31]; // 80044700
  c->lr=0x80044708u; f_8024B0E0(c); // 80044704
  cmps(c,0,(int32_t)c->r[29],0); // 80044708
  if (!crb(c,2)) { goto L_8004471C; } // 8004470C
  c->r[3]=c->r[31]|c->r[31]; // 80044710
  c->lr=0x80044718u; f_8024B1C0(c); // 80044714
  goto L_800447A0; // 80044718
L_8004471C:;
  c->r[0]=0u+0x80000000u; // 8004471C
  cmpu(c,0,c->r[29],c->r[0]); // 80044720
  if (crb(c,0)) { goto L_80044740; } // 80044724
  c->r[3]=0u+0x81800000u; // 80044728
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004472C
  cmpu(c,0,c->r[29],c->r[0]); // 80044730
  if (!crb(c,0)) { goto L_80044740; } // 80044734
  c->r[30]=0u+0x00000000u; // 80044738
  goto L_80044780; // 8004473C
L_80044740:;
  c->r[0]=0u+0x90000000u; // 80044740
  cmpu(c,0,c->r[29],c->r[0]); // 80044744
  if (crb(c,0)) { goto L_80044760; } // 80044748
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 8004474C
  cmpu(c,0,c->r[29],c->r[0]); // 80044750
  if (!crb(c,0)) { goto L_80044760; } // 80044754
  c->r[30]=0u+0x00000001u; // 80044758
  goto L_80044780; // 8004475C
L_80044760:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80044760
  cmpu(c,0,c->r[29],c->r[0]); // 80044764
  if (crb(c,0)) { goto L_80044780; } // 80044768
  c->r[3]=0u+0x98000000u; // 8004476C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80044770
  cmpu(c,0,c->r[29],c->r[0]); // 80044774
  if (!crb(c,0)) { goto L_80044780; } // 80044778
  c->r[30]=0u+0x00000002u; // 8004477C
L_80044780:;
  c->r[3]=0u+0x804B0000u; // 80044780
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80044784
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80044788
  c->r[4]=c->r[29]|c->r[29]; // 8004478C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80044790
  c->lr=0x80044798u; f_8023B550(c); // 80044794
  c->r[3]=c->r[31]|c->r[31]; // 80044798
  c->lr=0x800447A0u; f_8024B1C0(c); // 8004479C
L_800447A0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800447A0
  c->r[3]=c->r[29]|c->r[29]; // 800447A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800447A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800447AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800447B0
  c->lr=c->r[0]; // 800447B4
  c->r[1]=c->r[1]+0x00000020u; // 800447B8
  return; // 800447BC
}

// fn_800447C0
void f_800447C0(Ctx* __restrict c) {
  trace_call(0x800447C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800447C0
  c->r[0]=c->lr; // 800447C4
  c->r[4]=0u+0x80010000u; // 800447C8
  c->r[6]=0u+0x00000004u; // 800447CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800447D0
  c->r[4]=c->r[4]+0xFFFF9804u; // 800447D4
  c->r[7]=0u+0x00000014u; // 800447D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800447DC
  c->r[31]=0u+0x80010000u; // 800447E0
  c->r[5]=c->r[31]+0xFFFF8BD8u; // 800447E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800447E8
  c->r[30]=0u+0x803C0000u; // 800447EC
  c->r[30]=c->r[30]+0x00002E68u; // 800447F0
  c->r[3]=c->r[30]+0x00000010u; // 800447F4
  c->lr=0x800447FCu; f_800C2B8C(c); // 800447F8
  c->r[4]=0u+0x80040000u; // 800447FC
  c->r[5]=c->r[30]+0x00000000u; // 80044800
  c->r[4]=c->r[4]+0x00004840u; // 80044804
  c->r[3]=0u+0x00000000u; // 80044808
  c->lr=0x80044810u; f_800C2A60(c); // 8004480C
  c->r[0]=R32(c->r[2]+0xFFFFBF18u); // 80044810
  c->r[4]=c->r[31]+0xFFFF8BD8u; // 80044814
  W32(c->r[13]+0xFFFF953Cu,c->r[0]); // 80044818
  c->r[5]=c->r[30]+0x00000060u; // 8004481C
  c->r[3]=c->r[13]+0xFFFF953Cu; // 80044820
  c->lr=0x80044828u; f_800C2A60(c); // 80044824
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004482C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80044830
  c->lr=c->r[0]; // 80044834
  c->r[1]=c->r[1]+0x00000010u; // 80044838
  return; // 8004483C
}

// fn_80044840
void f_80044840(Ctx* __restrict c) {
  trace_call(0x80044840u);
  c->r[3]=0u+0x803C0000u; // 80044840
  c->r[4]=0u+0x80010000u; // 80044844
  c->r[3]=c->r[3]+0x00002E78u; // 80044848
  c->r[5]=0u+0x00000004u; // 8004484C
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 80044850
  c->r[6]=0u+0x00000014u; // 80044854
  f_800C2C84(c); return; // 80044858
}

// fn_8004485C
void f_8004485C(Ctx* __restrict c) {
  trace_call(0x8004485Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004485C
  c->r[0]=c->lr; // 80044860
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044868
  c->r[31]=c->r[3]|c->r[3]; // 8004486C
  c->lr=0x80044874u; f_803115B8(c); // 80044870
  c->r[4]=0u+0x80380000u; // 80044874
  c->r[3]=c->r[31]|c->r[31]; // 80044878
  c->r[4]=c->r[4]+0x00004978u; // 8004487C
  W32(c->r[31]+0x00000014u,c->r[4]); // 80044880
  c->r[4]=0u+0x00000002u; // 80044884
  c->r[5]=0u+0x00000001u; // 80044888
  c->lr=0x80044890u; f_8030FFA0(c); // 8004488C
  c->r[3]=c->r[31]|c->r[31]; // 80044890
  c->r[4]=0u+0x00000008u; // 80044894
  c->r[5]=0u+0x00000000u; // 80044898
  c->lr=0x800448A0u; f_8030FFA0(c); // 8004489C
  c->r[3]=c->r[31]|c->r[31]; // 800448A0
  c->r[4]=0u+0x00000009u; // 800448A4
  c->r[5]=0u+0x00000000u; // 800448A8
  c->lr=0x800448B0u; f_8030FFA0(c); // 800448AC
  c->r[3]=c->r[31]|c->r[31]; // 800448B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800448B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800448B8
  c->lr=c->r[0]; // 800448BC
  c->r[1]=c->r[1]+0x00000010u; // 800448C0
  return; // 800448C4
}

// fn_800448C8
void f_800448C8(Ctx* __restrict c) {
  trace_call(0x800448C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800448C8
  c->r[0]=c->lr; // 800448CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800448D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800448D4
  c->r[31]=c->r[5]|c->r[5]; // 800448D8
  c->r[5]=0u+0x00000010u; // 800448DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800448E0
  c->r[30]=c->r[4]|c->r[4]; // 800448E4
  c->r[4]=0u+0x000000F0u; // 800448E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800448EC
  c->r[29]=c->r[3]|c->r[3]; // 800448F0
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 800448F4
  c->r[3]=R32(c->r[6]+0x00000000u); // 800448F8
  c->lr=0x80044900u; f_802A89E4(c); // 800448FC
  cmps(c,0,(int32_t)c->r[3],0); // 80044900
  if (crb(c,2)) { goto L_80044918; } // 80044904
  c->r[4]=c->r[29]|c->r[29]; // 80044908
  c->r[5]=c->r[30]|c->r[30]; // 8004490C
  c->r[6]=c->r[31]|c->r[31]; // 80044910
  c->lr=0x80044918u; f_8004485C(c); // 80044914
L_80044918:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044918
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004491C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80044920
  c->r[29]=R32(c->r[1]+0x00000014u); // 80044924
  c->lr=c->r[0]; // 80044928
  c->r[1]=c->r[1]+0x00000020u; // 8004492C
  return; // 80044930
}

// fn_80044934
void f_80044934(Ctx* __restrict c) {
  trace_call(0x80044934u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044934
  c->r[0]=c->lr; // 80044938
  cmps(c,0,(int32_t)c->r[3],0); // 8004493C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044944
  c->r[31]=c->r[4]|c->r[4]; // 80044948
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004494C
  c->r[30]=c->r[3]|c->r[3]; // 80044950
  if (crb(c,2)) { goto L_80044A14; } // 80044954
  c->r[4]=0u+0x00000000u; // 80044958
  c->lr=0x80044960u; f_80311ED4(c); // 8004495C
  cmps(c,0,(int32_t)c->r[31],0); // 80044960
  if (!crb(c,1)) { goto L_80044A14; } // 80044964
  c->lr=0x8004496Cu; f_8028B53C(c); // 80044968
  c->r[31]=0u+0x804B0000u; // 8004496C
  c->r[31]=c->r[31]+0xFFFFC800u; // 80044970
  c->r[3]=c->r[31]|c->r[31]; // 80044974
  c->lr=0x8004497Cu; f_8024B0E0(c); // 80044978
  cmps(c,0,(int32_t)c->r[30],0); // 8004497C
  if (!crb(c,2)) { goto L_80044990; } // 80044980
  c->r[3]=c->r[31]|c->r[31]; // 80044984
  c->lr=0x8004498Cu; f_8024B1C0(c); // 80044988
  goto L_80044A14; // 8004498C
L_80044990:;
  c->r[0]=0u+0x80000000u; // 80044990
  cmpu(c,0,c->r[30],c->r[0]); // 80044994
  if (crb(c,0)) { goto L_800449B4; } // 80044998
  c->r[3]=0u+0x81800000u; // 8004499C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800449A0
  cmpu(c,0,c->r[30],c->r[0]); // 800449A4
  if (!crb(c,0)) { goto L_800449B4; } // 800449A8
  c->r[4]=0u+0x00000000u; // 800449AC
  goto L_800449F4; // 800449B0
L_800449B4:;
  c->r[0]=0u+0x90000000u; // 800449B4
  cmpu(c,0,c->r[30],c->r[0]); // 800449B8
  if (crb(c,0)) { goto L_800449D4; } // 800449BC
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800449C0
  cmpu(c,0,c->r[30],c->r[0]); // 800449C4
  if (!crb(c,0)) { goto L_800449D4; } // 800449C8
  c->r[4]=0u+0x00000001u; // 800449CC
  goto L_800449F4; // 800449D0
L_800449D4:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 800449D4
  cmpu(c,0,c->r[30],c->r[0]); // 800449D8
  if (crb(c,0)) { goto L_800449F4; } // 800449DC
  c->r[3]=0u+0x98000000u; // 800449E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800449E4
  cmpu(c,0,c->r[30],c->r[0]); // 800449E8
  if (!crb(c,0)) { goto L_800449F4; } // 800449EC
  c->r[4]=0u+0x00000002u; // 800449F0
L_800449F4:;
  c->r[3]=0u+0x804B0000u; // 800449F4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800449F8
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 800449FC
  c->r[4]=c->r[30]|c->r[30]; // 80044A00
  c->r[3]=R32(c->r[3]+c->r[0]); // 80044A04
  c->lr=0x80044A0Cu; f_8023B550(c); // 80044A08
  c->r[3]=c->r[31]|c->r[31]; // 80044A0C
  c->lr=0x80044A14u; f_8024B1C0(c); // 80044A10
L_80044A14:;
  c->r[3]=c->r[30]|c->r[30]; // 80044A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044A18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80044A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044A20
  c->lr=c->r[0]; // 80044A24
  c->r[1]=c->r[1]+0x00000010u; // 80044A28
  return; // 80044A2C
}

// fn_80044A30
void f_80044A30(Ctx* __restrict c) {
  trace_call(0x80044A30u);
  f_8031547C(c); return; // 80044A30
}

// fn_80044A34
void f_80044A34(Ctx* __restrict c) {
  trace_call(0x80044A34u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80044A34
  c->r[12]=c->r[1]|c->r[1]; // 80044A38
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80044A3C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80044A40
  c->r[0]=c->lr; // 80044A44
  c->r[4]=0u+0x803D0000u; // 80044A48
  W32(c->r[12]+0x00000004u,c->r[0]); // 80044A4C
  c->r[4]=c->r[4]+0x0000407Cu; // 80044A50
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80044A54
  c->r[31]=c->r[3]|c->r[3]; // 80044A58
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80044A5C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80044A60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80044A64
  c->r[12]=R32(c->r[12]+0x00000014u); // 80044A68
  c->ctr=c->r[12]; // 80044A6C
  if (true) { c->lr=0x80044A74u; dispatch(c,c->ctr); } // 80044A70
  c->r[4]=c->r[1]+0x00000070u; // 80044A74
  c->r[0]=c->r[1]+0x000000A0u; // 80044A78
L_80044A7C:;
  c->r[4]=c->r[4]+0x00000010u; // 80044A7C
  cmpu(c,1,c->r[4],c->r[0]); // 80044A80
  if (crb(c,4)) { IRQCHK(c); goto L_80044A7C; } // 80044A84
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044A88
  c->r[4]=0u+0x00000000u; // 80044A8C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80044A90
  c->r[5]=0u+0x00000000u; // 80044A94
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044A98
  c->r[6]=0u+0x00000000u; // 80044A9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AA0
  c->r[7]=0u+0x00000000u; // 80044AA4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80044AA8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AAC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80044AB0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AB4
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80044AB8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044ABC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80044AC0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AC4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 80044AC8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044ACC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80044AD0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AD4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80044AD8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044ADC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 80044AE0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AE4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 80044AE8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AEC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80044AF0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044AF4
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80044AF8
  c->r[31]=R32(c->r[31]+0x00000030u); // 80044AFC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80044B00
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044B04
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80044B08
  {uint32_t ea=c->r[31]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 80044B0C
  c->r[3]=R32(c->r[31]+0x00000020u); // 80044B10
  c->r[0]=R32(c->r[1]+0x00000040u); // 80044B14
  {uint32_t ea=c->r[31]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 80044B18
  {uint32_t ea=c->r[31]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 80044B1C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044B20
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80044B24
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044B28
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80044B2C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[6]);} // 80044B30
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[5]);} // 80044B34
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[4]);} // 80044B38
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 80044B3C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 80044B40
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80044B44
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80044B48
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80044B4C
  if (!crb(c,6)) { goto L_80044B68; } // 80044B50
  c->r[3]=R32(c->r[31]+0x00000024u); // 80044B54
  c->r[0]=R32(c->r[1]+0x00000044u); // 80044B58
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044B5C
  if (!crb(c,6)) { goto L_80044B68; } // 80044B60
  c->r[7]=0u+0x00000001u; // 80044B64
L_80044B68:;
  cmps(c,1,(int32_t)c->r[7],0); // 80044B68
  if (crb(c,6)) { goto L_80044B84; } // 80044B6C
  c->r[3]=R32(c->r[31]+0x00000028u); // 80044B70
  c->r[0]=R32(c->r[1]+0x00000048u); // 80044B74
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044B78
  if (!crb(c,6)) { goto L_80044B84; } // 80044B7C
  c->r[6]=0u+0x00000001u; // 80044B80
L_80044B84:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044B84
  if (crb(c,6)) { goto L_80044C00; } // 80044B88
  c->r[3]=R32(c->r[31]+0x00000030u); // 80044B8C
  c->r[6]=0u+0x00000000u; // 80044B90
  c->r[0]=R32(c->r[1]+0x00000050u); // 80044B94
  c->r[7]=0u+0x00000000u; // 80044B98
  c->r[8]=0u+0x00000000u; // 80044B9C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044BA0
  if (!crb(c,6)) { goto L_80044BBC; } // 80044BA4
  c->r[3]=R32(c->r[31]+0x00000034u); // 80044BA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 80044BAC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044BB0
  if (!crb(c,6)) { goto L_80044BBC; } // 80044BB4
  c->r[8]=0u+0x00000001u; // 80044BB8
L_80044BBC:;
  cmps(c,1,(int32_t)c->r[8],0); // 80044BBC
  if (crb(c,6)) { goto L_80044BD8; } // 80044BC0
  c->r[3]=R32(c->r[31]+0x00000038u); // 80044BC4
  c->r[0]=R32(c->r[1]+0x00000058u); // 80044BC8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044BCC
  if (!crb(c,6)) { goto L_80044BD8; } // 80044BD0
  c->r[7]=0u+0x00000001u; // 80044BD4
L_80044BD8:;
  cmps(c,1,(int32_t)c->r[7],0); // 80044BD8
  if (crb(c,6)) { goto L_80044BF4; } // 80044BDC
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80044BE0
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80044BE4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044BE8
  if (!crb(c,6)) { goto L_80044BF4; } // 80044BEC
  c->r[6]=0u+0x00000001u; // 80044BF0
L_80044BF4:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044BF4
  if (crb(c,6)) { goto L_80044C00; } // 80044BF8
  c->r[5]=0u+0x00000001u; // 80044BFC
L_80044C00:;
  cmps(c,1,(int32_t)c->r[5],0); // 80044C00
  if (crb(c,6)) { goto L_80044C5C; } // 80044C04
  c->r[3]=R32(c->r[31]+0x00000040u); // 80044C08
  c->r[5]=0u+0x00000000u; // 80044C0C
  c->r[0]=R32(c->r[1]+0x00000060u); // 80044C10
  c->r[6]=0u+0x00000000u; // 80044C14
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044C18
  if (!crb(c,6)) { goto L_80044C34; } // 80044C1C
  c->r[3]=R32(c->r[31]+0x00000044u); // 80044C20
  c->r[0]=R32(c->r[1]+0x00000064u); // 80044C24
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044C28
  if (!crb(c,6)) { goto L_80044C34; } // 80044C2C
  c->r[6]=0u+0x00000001u; // 80044C30
L_80044C34:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044C34
  if (crb(c,6)) { goto L_80044C50; } // 80044C38
  c->r[3]=R32(c->r[31]+0x00000048u); // 80044C3C
  c->r[0]=R32(c->r[1]+0x00000068u); // 80044C40
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044C44
  if (!crb(c,6)) { goto L_80044C50; } // 80044C48
  c->r[5]=0u+0x00000001u; // 80044C4C
L_80044C50:;
  cmps(c,1,(int32_t)c->r[5],0); // 80044C50
  if (crb(c,6)) { goto L_80044C5C; } // 80044C54
  c->r[4]=0u+0x00000001u; // 80044C58
L_80044C5C:;
  cmps(c,1,(int32_t)c->r[4],0); // 80044C5C
  if (!crb(c,6)) { goto L_80044D8C; } // 80044C60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C64
  c->f[3]=c->ps1[3]=S(c->f[7]-c->f[7]); // 80044C68
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80044C6C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C70
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80044C74
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C78
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80044C7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C80
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80044C84
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C88
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80044C8C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C90
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 80044C94
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80044C98
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80044C9C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044CA0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 80044CA4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044CA8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80044CAC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044CB0
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80044CB4
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80044CB8
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80044CBC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80044CC0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80044CC4
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80044CC8
  fcmp(c,0,c->f[2],c->f[3]); // 80044CCC
  if (crb(c,2)) { goto L_80044CF0; } // 80044CD0
  c->f[0]=frsqrte(c->f[2]); // 80044CD4
  {uint32_t ea=c->r[2]+0xFFFF86D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80044CD8
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80044CDC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80044CE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 80044CE4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80044CE8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80044CEC
L_80044CF0:;
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80044CF0
  c->r[7]=c->r[31]+0x0000001Cu; // 80044CF4
  c->r[6]=0u+0x00000002u; // 80044CF8
  c->r[3]=0u+0x00000003u; // 80044CFC
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80044D00
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80044D04
  c->r[0]=0u+0x00000001u; // 80044D08
  W32(c->r[1]+0x00000030u,c->r[7]); // 80044D0C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80044D10
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80044D14
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,0,ea,0,0);} // 80044D18
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80044D1C
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 80044D20
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80044D24
  W32(c->r[1]+0x00000034u,c->r[6]); // 80044D28
  c->r[4]=c->r[5]|c->r[4]; // 80044D2C
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80044D30
  c->r[0]=c->r[4]|c->r[0]; // 80044D34
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80044D38
  c->r[0]=R32(c->r[31]+0x00000004u); // 80044D3C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80044D40
  cmps(c,1,(int32_t)c->r[0],0); // 80044D44
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80044D48
  W32(c->r[1]+0x00000020u,c->r[7]); // 80044D4C
  W32(c->r[1]+0x00000024u,c->r[6]); // 80044D50
  W32(c->r[1]+0x00000038u,c->r[7]); // 80044D54
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 80044D58
  W32(c->r[1]+0x00000010u,c->r[7]); // 80044D5C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80044D60
  W32(c->r[1]+0x00000028u,c->r[7]); // 80044D64
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80044D68
  if (crb(c,6)) { goto L_80044D78; } // 80044D6C
  c->r[3]=c->r[31]|c->r[31]; // 80044D70
  c->lr=0x80044D78u; f_80340A20(c); // 80044D74
L_80044D78:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80044D78
  cmps(c,1,(int32_t)c->r[0],0); // 80044D7C
  if (crb(c,6)) { goto L_80044D8C; } // 80044D80
  c->r[3]=c->r[31]|c->r[31]; // 80044D84
  c->lr=0x80044D8Cu; f_80340B8C(c); // 80044D88
L_80044D8C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80044D8C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80044D90
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80044D94
  c->lr=c->r[0]; // 80044D98
  c->r[1]=c->r[10]|c->r[10]; // 80044D9C
  return; // 80044DA0
}

// fn_80044DA4
void f_80044DA4(Ctx* __restrict c) {
  trace_call(0x80044DA4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80044DA4
  c->r[12]=c->r[1]|c->r[1]; // 80044DA8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF40u,1); // 80044DAC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80044DB0
  c->r[0]=c->lr; // 80044DB4
  c->r[4]=0u+0x803D0000u; // 80044DB8
  W32(c->r[12]+0x00000004u,c->r[0]); // 80044DBC
  c->r[4]=c->r[4]+0x0000407Cu; // 80044DC0
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80044DC4
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80044DC8
  c->r[30]=c->r[3]|c->r[3]; // 80044DCC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80044DD0
  c->r[3]=R32(c->r[3]+0x00000010u); // 80044DD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80044DD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80044DDC
  c->ctr=c->r[12]; // 80044DE0
  if (true) { c->lr=0x80044DE8u; dispatch(c,c->ctr); } // 80044DE4
  c->r[4]=c->r[1]+0x00000070u; // 80044DE8
  c->r[0]=c->r[1]+0x000000A0u; // 80044DEC
L_80044DF0:;
  c->r[4]=c->r[4]+0x00000010u; // 80044DF0
  cmpu(c,1,c->r[4],c->r[0]); // 80044DF4
  if (crb(c,4)) { IRQCHK(c); goto L_80044DF0; } // 80044DF8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044DFC
  c->r[4]=0u+0x00000000u; // 80044E00
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80044E04
  c->r[5]=0u+0x00000000u; // 80044E08
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044E0C
  c->r[6]=0u+0x00000000u; // 80044E10
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044E14
  c->r[7]=0u+0x00000000u; // 80044E18
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80044E1C
  {uint32_t ea=c->r[2]+0xFFFF86DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80044E20
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E24
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 80044E28
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E2C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80044E30
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E34
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[2]);} // 80044E38
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E3C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[2]);} // 80044E40
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E44
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[2]);} // 80044E48
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E4C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 80044E50
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E54
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 80044E58
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 80044E5C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 80044E60
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E64
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 80044E68
  {uint32_t ea=c->r[3]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 80044E6C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[6]);} // 80044E70
  c->r[31]=R32(c->r[30]+0x00000030u); // 80044E74
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80044E78
  c->r[3]=R32(c->r[31]+0x00000020u); // 80044E7C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80044E80
  {uint32_t ea=c->r[31]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 80044E84
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 80044E88
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044E8C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 80044E90
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80044E94
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 80044E98
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 80044E9C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 80044EA0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 80044EA4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[6]);} // 80044EA8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 80044EAC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80044EB0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80044EB4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80044EB8
  if (!crb(c,6)) { goto L_80044ED4; } // 80044EBC
  c->r[3]=R32(c->r[31]+0x00000024u); // 80044EC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80044EC4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044EC8
  if (!crb(c,6)) { goto L_80044ED4; } // 80044ECC
  c->r[7]=0u+0x00000001u; // 80044ED0
L_80044ED4:;
  cmps(c,1,(int32_t)c->r[7],0); // 80044ED4
  if (crb(c,6)) { goto L_80044EF0; } // 80044ED8
  c->r[3]=R32(c->r[31]+0x00000028u); // 80044EDC
  c->r[0]=R32(c->r[1]+0x00000048u); // 80044EE0
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044EE4
  if (!crb(c,6)) { goto L_80044EF0; } // 80044EE8
  c->r[6]=0u+0x00000001u; // 80044EEC
L_80044EF0:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044EF0
  if (crb(c,6)) { goto L_80044F6C; } // 80044EF4
  c->r[3]=R32(c->r[31]+0x00000030u); // 80044EF8
  c->r[6]=0u+0x00000000u; // 80044EFC
  c->r[0]=R32(c->r[1]+0x00000050u); // 80044F00
  c->r[7]=0u+0x00000000u; // 80044F04
  c->r[8]=0u+0x00000000u; // 80044F08
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F0C
  if (!crb(c,6)) { goto L_80044F28; } // 80044F10
  c->r[3]=R32(c->r[31]+0x00000034u); // 80044F14
  c->r[0]=R32(c->r[1]+0x00000054u); // 80044F18
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F1C
  if (!crb(c,6)) { goto L_80044F28; } // 80044F20
  c->r[8]=0u+0x00000001u; // 80044F24
L_80044F28:;
  cmps(c,1,(int32_t)c->r[8],0); // 80044F28
  if (crb(c,6)) { goto L_80044F44; } // 80044F2C
  c->r[3]=R32(c->r[31]+0x00000038u); // 80044F30
  c->r[0]=R32(c->r[1]+0x00000058u); // 80044F34
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F38
  if (!crb(c,6)) { goto L_80044F44; } // 80044F3C
  c->r[7]=0u+0x00000001u; // 80044F40
L_80044F44:;
  cmps(c,1,(int32_t)c->r[7],0); // 80044F44
  if (crb(c,6)) { goto L_80044F60; } // 80044F48
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80044F4C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80044F50
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F54
  if (!crb(c,6)) { goto L_80044F60; } // 80044F58
  c->r[6]=0u+0x00000001u; // 80044F5C
L_80044F60:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044F60
  if (crb(c,6)) { goto L_80044F6C; } // 80044F64
  c->r[5]=0u+0x00000001u; // 80044F68
L_80044F6C:;
  cmps(c,1,(int32_t)c->r[5],0); // 80044F6C
  if (crb(c,6)) { goto L_80044FC8; } // 80044F70
  c->r[3]=R32(c->r[31]+0x00000040u); // 80044F74
  c->r[5]=0u+0x00000000u; // 80044F78
  c->r[0]=R32(c->r[1]+0x00000060u); // 80044F7C
  c->r[6]=0u+0x00000000u; // 80044F80
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F84
  if (!crb(c,6)) { goto L_80044FA0; } // 80044F88
  c->r[3]=R32(c->r[31]+0x00000044u); // 80044F8C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80044F90
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044F94
  if (!crb(c,6)) { goto L_80044FA0; } // 80044F98
  c->r[6]=0u+0x00000001u; // 80044F9C
L_80044FA0:;
  cmps(c,1,(int32_t)c->r[6],0); // 80044FA0
  if (crb(c,6)) { goto L_80044FBC; } // 80044FA4
  c->r[3]=R32(c->r[31]+0x00000048u); // 80044FA8
  c->r[0]=R32(c->r[1]+0x00000068u); // 80044FAC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80044FB0
  if (!crb(c,6)) { goto L_80044FBC; } // 80044FB4
  c->r[5]=0u+0x00000001u; // 80044FB8
L_80044FBC:;
  cmps(c,1,(int32_t)c->r[5],0); // 80044FBC
  if (crb(c,6)) { goto L_80044FC8; } // 80044FC0
  c->r[4]=0u+0x00000001u; // 80044FC4
L_80044FC8:;
  cmps(c,1,(int32_t)c->r[4],0); // 80044FC8
  if (!crb(c,6)) { goto L_800450F8; } // 80044FCC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FD0
  c->f[3]=c->ps1[3]=S(c->f[7]-c->f[7]); // 80044FD4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80044FD8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FDC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80044FE0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FE4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80044FE8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FEC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80044FF0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FF4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80044FF8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044FFC
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 80045000
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80045004
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80045008
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004500C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 80045010
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045014
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80045018
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004501C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80045020
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80045024
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80045028
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8004502C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80045030
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80045034
  fcmp(c,0,c->f[2],c->f[3]); // 80045038
  if (crb(c,2)) { goto L_8004505C; } // 8004503C
  c->f[0]=frsqrte(c->f[2]); // 80045040
  {uint32_t ea=c->r[2]+0xFFFF86D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80045044
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80045048
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8004504C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 80045050
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80045054
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80045058
L_8004505C:;
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 8004505C
  c->r[7]=c->r[31]+0x0000001Cu; // 80045060
  c->r[6]=0u+0x00000002u; // 80045064
  c->r[3]=0u+0x00000003u; // 80045068
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 8004506C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80045070
  c->r[0]=0u+0x00000001u; // 80045074
  W32(c->r[1]+0x00000030u,c->r[7]); // 80045078
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8004507C
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80045080
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,0,ea,0,0);} // 80045084
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80045088
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 8004508C
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80045090
  W32(c->r[1]+0x00000034u,c->r[6]); // 80045094
  c->r[4]=c->r[5]|c->r[4]; // 80045098
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 8004509C
  c->r[0]=c->r[4]|c->r[0]; // 800450A0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800450A4
  c->r[0]=R32(c->r[31]+0x00000004u); // 800450A8
  W32(c->r[1]+0x00000018u,c->r[7]); // 800450AC
  cmps(c,1,(int32_t)c->r[0],0); // 800450B0
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800450B4
  W32(c->r[1]+0x00000020u,c->r[7]); // 800450B8
  W32(c->r[1]+0x00000024u,c->r[6]); // 800450BC
  W32(c->r[1]+0x00000038u,c->r[7]); // 800450C0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800450C4
  W32(c->r[1]+0x00000010u,c->r[7]); // 800450C8
  W32(c->r[1]+0x00000014u,c->r[3]); // 800450CC
  W32(c->r[1]+0x00000028u,c->r[7]); // 800450D0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800450D4
  if (crb(c,6)) { goto L_800450E4; } // 800450D8
  c->r[3]=c->r[31]|c->r[31]; // 800450DC
  c->lr=0x800450E4u; f_80340A20(c); // 800450E0
L_800450E4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800450E4
  cmps(c,1,(int32_t)c->r[0],0); // 800450E8
  if (crb(c,6)) { goto L_800450F8; } // 800450EC
  c->r[3]=c->r[31]|c->r[31]; // 800450F0
  c->lr=0x800450F8u; f_80340B8C(c); // 800450F4
L_800450F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800450F8
  c->r[4]=0u+0x00000007u; // 800450FC
  c->r[5]=0u+0x00000001u; // 80045100
  c->lr=0x80045108u; f_8030FFA0(c); // 80045104
  c->r[10]=R32(c->r[1]+0x00000000u); // 80045108
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004510C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80045110
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80045114
  c->lr=c->r[0]; // 80045118
  c->r[1]=c->r[10]|c->r[10]; // 8004511C
  return; // 80045120
}

// fn_80045124
void f_80045124(Ctx* __restrict c) {
  trace_call(0x80045124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045124
  c->r[0]=c->lr; // 80045128
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004512C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045130
  c->r[31]=c->r[3]|c->r[3]; // 80045134
  c->lr=0x8004513Cu; f_803115B8(c); // 80045138
  c->r[4]=0u+0x80380000u; // 8004513C
  c->r[3]=c->r[31]|c->r[31]; // 80045140
  c->r[4]=c->r[4]+0x00004A50u; // 80045144
  W32(c->r[31]+0x00000014u,c->r[4]); // 80045148
  c->r[4]=0u+0x00000002u; // 8004514C
  c->r[5]=0u+0x00000000u; // 80045150
  c->lr=0x80045158u; f_8030FFA0(c); // 80045154
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045158
  c->r[0]=0u+0x00000000u; // 8004515C
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80045160
  c->r[3]=c->r[31]|c->r[31]; // 80045164
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80045168
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 8004516C
  c->lr=0x80045174u; f_80045770(c); // 80045170
  c->r[3]=c->r[31]|c->r[31]; // 80045174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045178
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004517C
  c->lr=c->r[0]; // 80045180
  c->r[1]=c->r[1]+0x00000010u; // 80045184
  return; // 80045188
}

// fn_8004518C
void f_8004518C(Ctx* __restrict c) {
  trace_call(0x8004518Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004518C
  c->r[0]=c->lr; // 80045190
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045194
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045198
  c->r[31]=c->r[5]|c->r[5]; // 8004519C
  c->r[5]=0u+0x00000010u; // 800451A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800451A4
  c->r[30]=c->r[4]|c->r[4]; // 800451A8
  c->r[4]=0u+0x000000F0u; // 800451AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800451B0
  c->r[29]=c->r[3]|c->r[3]; // 800451B4
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 800451B8
  c->r[3]=R32(c->r[6]+0x00000000u); // 800451BC
  c->lr=0x800451C4u; f_802A89E4(c); // 800451C0
  cmps(c,0,(int32_t)c->r[3],0); // 800451C4
  if (crb(c,2)) { goto L_800451DC; } // 800451C8
  c->r[4]=c->r[29]|c->r[29]; // 800451CC
  c->r[5]=c->r[30]|c->r[30]; // 800451D0
  c->r[6]=c->r[31]|c->r[31]; // 800451D4
  c->lr=0x800451DCu; f_80045124(c); // 800451D8
L_800451DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800451DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800451E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800451E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800451E8
  c->lr=c->r[0]; // 800451EC
  c->r[1]=c->r[1]+0x00000020u; // 800451F0
  return; // 800451F4
}

// fn_800451F8
void f_800451F8(Ctx* __restrict c) {
  trace_call(0x800451F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800451F8
  c->r[0]=c->lr; // 800451FC
  cmps(c,0,(int32_t)c->r[3],0); // 80045200
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045208
  c->r[31]=c->r[4]|c->r[4]; // 8004520C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80045210
  c->r[30]=c->r[3]|c->r[3]; // 80045214
  if (crb(c,2)) { goto L_800452D8; } // 80045218
  c->r[4]=0u+0x00000000u; // 8004521C
  c->lr=0x80045224u; f_80311ED4(c); // 80045220
  cmps(c,0,(int32_t)c->r[31],0); // 80045224
  if (!crb(c,1)) { goto L_800452D8; } // 80045228
  c->lr=0x80045230u; f_8028B53C(c); // 8004522C
  c->r[31]=0u+0x804B0000u; // 80045230
  c->r[31]=c->r[31]+0xFFFFC800u; // 80045234
  c->r[3]=c->r[31]|c->r[31]; // 80045238
  c->lr=0x80045240u; f_8024B0E0(c); // 8004523C
  cmps(c,0,(int32_t)c->r[30],0); // 80045240
  if (!crb(c,2)) { goto L_80045254; } // 80045244
  c->r[3]=c->r[31]|c->r[31]; // 80045248
  c->lr=0x80045250u; f_8024B1C0(c); // 8004524C
  goto L_800452D8; // 80045250
L_80045254:;
  c->r[0]=0u+0x80000000u; // 80045254
  cmpu(c,0,c->r[30],c->r[0]); // 80045258
  if (crb(c,0)) { goto L_80045278; } // 8004525C
  c->r[3]=0u+0x81800000u; // 80045260
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80045264
  cmpu(c,0,c->r[30],c->r[0]); // 80045268
  if (!crb(c,0)) { goto L_80045278; } // 8004526C
  c->r[4]=0u+0x00000000u; // 80045270
  goto L_800452B8; // 80045274
L_80045278:;
  c->r[0]=0u+0x90000000u; // 80045278
  cmpu(c,0,c->r[30],c->r[0]); // 8004527C
  if (crb(c,0)) { goto L_80045298; } // 80045280
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045284
  cmpu(c,0,c->r[30],c->r[0]); // 80045288
  if (!crb(c,0)) { goto L_80045298; } // 8004528C
  c->r[4]=0u+0x00000001u; // 80045290
  goto L_800452B8; // 80045294
L_80045298:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045298
  cmpu(c,0,c->r[30],c->r[0]); // 8004529C
  if (crb(c,0)) { goto L_800452B8; } // 800452A0
  c->r[3]=0u+0x98000000u; // 800452A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800452A8
  cmpu(c,0,c->r[30],c->r[0]); // 800452AC
  if (!crb(c,0)) { goto L_800452B8; } // 800452B0
  c->r[4]=0u+0x00000002u; // 800452B4
L_800452B8:;
  c->r[3]=0u+0x804B0000u; // 800452B8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800452BC
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 800452C0
  c->r[4]=c->r[30]|c->r[30]; // 800452C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800452C8
  c->lr=0x800452D0u; f_8023B550(c); // 800452CC
  c->r[3]=c->r[31]|c->r[31]; // 800452D0
  c->lr=0x800452D8u; f_8024B1C0(c); // 800452D4
L_800452D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800452D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800452DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800452E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800452E4
  c->lr=c->r[0]; // 800452E8
  c->r[1]=c->r[1]+0x00000010u; // 800452EC
  return; // 800452F0
}

// fn_800452F4
void f_800452F4(Ctx* __restrict c) {
  trace_call(0x800452F4u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800452F4
  c->r[12]=c->r[1]|c->r[1]; // 800452F8
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 800452FC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80045300
  c->r[0]=c->lr; // 80045304
  W32(c->r[12]+0x00000004u,c->r[0]); // 80045308
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8004530C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80045310
  c->r[30]=c->r[6]|c->r[6]; // 80045314
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80045318
  c->r[29]=c->r[3]|c->r[3]; // 8004531C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 80045320
  c->r[28]=c->r[4]|c->r[4]; // 80045324
  c->r[5]=R32(c->r[3]+0x000000A0u); // 80045328
  c->r[0]=R32(c->r[3]+0x000000E8u); // 8004532C
  c->r[4]=R32(c->r[5]+0x00000000u); // 80045330
  c->r[4]=R32(c->r[4]+0x00000000u); // 80045334
  c->r[4]=R32(c->r[4]+0x00000004u); // 80045338
  cmpu(c,0,c->r[0],c->r[4]); // 8004533C
  if (crb(c,0)) { goto L_8004534C; } // 80045340
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80045344
  W32(c->r[3]+0x000000E8u,c->r[0]); // 80045348
L_8004534C:;
  c->r[3]=R32(c->r[3]+0x000000A0u); // 8004534C
  c->lr=0x80045354u; f_80327408(c); // 80045350
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045354
  c->r[4]=c->r[1]+0x00000060u; // 80045358
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8004535C
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045360
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80045364
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80045368
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8004536C
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045370
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80045374
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80045378
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 8004537C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 80045380
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80045384
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80045388
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 8004538C
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80045390
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80045394
  {double t0=S((c->f[1]>=0.0)?c->f[2]:c->f[3]), t1=S((c->ps1[1]>=0.0)?c->ps1[2]:c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80045398
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 8004539C
  {double t0=S(c->f[5]-c->f[0]), t1=S(c->ps1[5]-c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 800453A0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 800453A4
  {double t0=S((c->f[4]>=0.0)?c->f[0]:c->f[5]), t1=S((c->ps1[4]>=0.0)?c->ps1[0]:c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 800453A8
  {double t0=S((c->f[1]>=0.0)?c->f[2]:c->f[3]), t1=S((c->ps1[1]>=0.0)?c->ps1[2]:c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800453AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800453B0
  {double t0=S(c->f[5]-c->f[0]), t1=S(c->ps1[5]-c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800453B4
  {double t0=S((c->f[1]>=0.0)?c->f[0]:c->f[5]), t1=S((c->ps1[1]>=0.0)?c->ps1[0]:c->ps1[5]); c->f[0]=t0; c->ps1[0]=t1;} // 800453B8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 800453BC
  c->r[3]=R32(c->r[29]+0x000000A0u); // 800453C0
  c->lr=0x800453C8u; f_80327368(c); // 800453C4
  c->r[0]=R32(c->r[29]+0x000000ACu); // 800453C8
  cmps(c,0,(int32_t)c->r[0],0); // 800453CC
  if (!crb(c,2)) { goto L_800453E4; } // 800453D0
  c->r[3]=c->r[28]|c->r[28]; // 800453D4
  c->r[4]=0u+0x00000000u; // 800453D8
  c->lr=0x800453E0u; f_802D9F34(c); // 800453DC
  W32(c->r[29]+0x000000ACu,c->r[3]); // 800453E0
L_800453E4:;
  c->r[31]=R32(c->r[29]+0x00000030u); // 800453E4
  c->r[3]=0u+0x00000003u; // 800453E8
  c->r[5]=0u+0x00000001u; // 800453EC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800453F0
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800453F4
  c->r[6]=c->r[31]+0x0000001Cu; // 800453F8
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800453FC
  W32(c->r[1]+0x00000038u,c->r[6]); // 80045400
  c->r[0]=c->r[0]&c->r[4]; // 80045404
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80045408
  W32(c->r[1]+0x00000020u,c->r[6]); // 8004540C
  cmpu(c,0,c->r[0],0x00000001u); // 80045410
  W32(c->r[1]+0x00000024u,c->r[3]); // 80045414
  if (!crb(c,2)) { goto L_8004558C; } // 80045418
  c->r[3]=0u+0x00000002u; // 8004541C
  W32(c->r[1]+0x00000040u,c->r[6]); // 80045420
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 80045424
  c->r[0]=c->r[0]&c->r[4]; // 80045428
  W32(c->r[1]+0x00000044u,c->r[3]); // 8004542C
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80045430
  cmpu(c,0,c->r[0],0x00000001u); // 80045434
  W32(c->r[1]+0x00000028u,c->r[6]); // 80045438
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8004543C
  if (!crb(c,2)) { goto L_8004544C; } // 80045440
  c->r[3]=c->r[31]|c->r[31]; // 80045444
  c->lr=0x8004544Cu; f_8034007C(c); // 80045448
L_8004544C:;
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004544C
  c->r[3]=0u+0x00000003u; // 80045450
  {uint32_t ea=c->r[31]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 80045454
  c->r[4]=c->r[31]+0x0000001Cu; // 80045458
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004545C
  c->r[0]=0u+0x00000001u; // 80045460
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[5]); // 80045464
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80045468
  c->f[12]=c->ps1[12]=S(c->f[2]*c->f[0]); // 8004546C
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80045470
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[1]); // 80045474
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80045478
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 8004547C
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80045480
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[0]); // 80045484
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80045488
  c->f[9]=c->ps1[9]=S(c->f[13]*c->f[1]); // 8004548C
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[3]); // 80045490
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[2]); // 80045494
  W32(c->r[1]+0x00000034u,c->r[3]); // 80045498
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[1]); // 8004549C
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[3]); // 800454A0
  W32(c->r[1]+0x00000048u,c->r[4]); // 800454A4
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[1]); // 800454A8
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 800454AC
  W32(c->r[1]+0x00000030u,c->r[4]); // 800454B0
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[2]); // 800454B4
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 800454B8
  c->f[2]=c->ps1[2]=S(c->f[8]-c->f[10]); // 800454BC
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[11]); // 800454C0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800454C4
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[10]); // 800454C8
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[3]); // 800454CC
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800454D0
  c->f[5]=c->ps1[5]=S(c->f[12]*c->f[5]); // 800454D4
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 800454D8
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[2]);} // 800454DC
  c->f[2]=c->ps1[2]=S(c->f[7]-c->f[11]); // 800454E0
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[6]); // 800454E4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 800454E8
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[8]); // 800454EC
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[8]); // 800454F0
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[3]);} // 800454F4
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 800454F8
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[2]);} // 800454FC
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[1]);} // 80045500
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 80045504
  {uint32_t ea=c->r[31]+0x00000080u; psq_load(c,3,ea,0,0);} // 80045508
  {uint32_t ea=c->r[31]+0x00000070u; psq_load(c,0,ea,0,0);} // 8004550C
  {uint32_t ea=c->r[31]+0x00000088u; psq_load(c,2,ea,1,0);} // 80045510
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,1,0);} // 80045514
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80045518
  {uint32_t ea=c->r[31]+0x00000080u; psq_store(c,0,ea,0,0);} // 8004551C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80045520
  {uint32_t ea=c->r[31]+0x00000088u; psq_store(c,0,ea,1,0);} // 80045524
  {uint32_t ea=c->r[31]+0x00000090u; psq_load(c,3,ea,0,0);} // 80045528
  {uint32_t ea=c->r[31]+0x00000070u; psq_load(c,0,ea,0,0);} // 8004552C
  {uint32_t ea=c->r[31]+0x00000098u; psq_load(c,2,ea,1,0);} // 80045530
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,1,0);} // 80045534
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80045538
  {uint32_t ea=c->r[31]+0x00000090u; psq_store(c,0,ea,0,0);} // 8004553C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80045540
  {uint32_t ea=c->r[31]+0x00000098u; psq_store(c,0,ea,1,0);} // 80045544
  {uint32_t ea=c->r[31]+0x000000A0u; psq_load(c,3,ea,0,0);} // 80045548
  {uint32_t ea=c->r[31]+0x00000070u; psq_load(c,0,ea,0,0);} // 8004554C
  {uint32_t ea=c->r[31]+0x000000A8u; psq_load(c,2,ea,1,0);} // 80045550
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,1,0);} // 80045554
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80045558
  {uint32_t ea=c->r[31]+0x000000A0u; psq_store(c,0,ea,0,0);} // 8004555C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80045560
  {uint32_t ea=c->r[31]+0x000000A8u; psq_store(c,0,ea,1,0);} // 80045564
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045568
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004556C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045570
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 80045574
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045578
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8004557C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80045580
  c->r[0]=c->r[3]&~c->r[0]; // 80045584
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80045588
L_8004558C:;
  c->r[3]=R32(c->r[29]+0x000000ACu); // 8004558C
  c->r[8]=c->r[29]+0x00000034u; // 80045590
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045594
  c->r[7]=0u+0x0000000Au; // 80045598
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8004559C
  c->r[5]=0u+0x00000009u; // 800455A0
  c->r[0]=0u+0x00000001u; // 800455A4
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455A8
  c->r[6]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800455AC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800455B0
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800455B4
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455B8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800455BC
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455C0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800455C4
  {uint32_t ea=c->r[31]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455C8
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800455CC
  {uint32_t ea=c->r[31]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455D0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800455D4
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455D8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800455DC
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455E0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800455E4
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455E8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800455EC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455F0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800455F4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800455F8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800455FC
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045600
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80045604
  c->r[3]=R32(c->r[29]+0x000000ACu); // 80045608
  W32(c->r[1]+0x00000018u,c->r[8]); // 8004560C
  W32(c->r[3]+0x00000098u,c->r[0]); // 80045610
  c->r[0]=R32(c->r[29]+0x00000034u); // 80045614
  c->r[3]=R32(c->r[29]+0x000000ACu); // 80045618
  c->r[0]=c->r[6]&c->r[0]; // 8004561C
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 80045620
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80045624
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 80045628
  c->r[3]=R32(c->r[29]+0x000000ACu); // 8004562C
  c->r[0]=R32(c->r[29]+0x000000A0u); // 80045630
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80045634
  c->r[3]=R32(c->r[29]+0x000000ACu); // 80045638
  c->r[0]=R32(c->r[29]+0x000000E8u); // 8004563C
  W32(c->r[3]+0x000000C8u,c->r[0]); // 80045640
  c->r[0]=R32(c->r[29]+0x00000034u); // 80045644
  c->r[3]=R32(c->r[29]+0x000000ACu); // 80045648
  c->r[0]=c->r[4]&c->r[0]; // 8004564C
  W32(c->r[1]+0x00000058u,c->r[8]); // 80045650
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 80045654
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80045658
  c->r[3]=R32(c->r[30]+0x00000008u); // 8004565C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80045660
  W32(c->r[1]+0x0000005Cu,c->r[7]); // 80045664
  cmpu(c,0,c->r[3],c->r[0]); // 80045668
  c->r[31]=R32(c->r[29]+0x000000ACu); // 8004566C
  W32(c->r[1]+0x00000010u,c->r[8]); // 80045670
  W32(c->r[1]+0x00000014u,c->r[5]); // 80045674
  W32(c->r[1]+0x00000050u,c->r[8]); // 80045678
  W32(c->r[1]+0x00000054u,c->r[5]); // 8004567C
  if (crb(c,1)) { goto L_80045734; } // 80045680
  c->r[4]=R32(c->r[30]+0x00000000u); // 80045684
  c->r[0]=R32(c->r[30]+0x00000004u); // 80045688
  c->r[3]=R32(c->r[30]+0x00000010u); // 8004568C
  c->r[0]=c->r[0]-c->r[4]; // 80045690
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80045694
  c->r[0]=sraw(c,c->r[0],2); // 80045698
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004569C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800456A0
  c->r[0]=c->r[4]+c->r[0]; // 800456A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800456A8
  c->r[28]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800456AC
  c->r[4]=c->r[28]|c->r[28]; // 800456B0
  c->ctr=c->r[12]; // 800456B4
  if (true) { c->lr=0x800456BCu; dispatch(c,c->ctr); } // 800456B8
  c->r[29]=c->r[3]|c->r[3]; // 800456BC
  c->r[4]=R32(c->r[30]+0x00000004u); // 800456C0
  c->r[3]=R32(c->r[30]+0x00000000u); // 800456C4
  c->r[5]=c->r[29]|c->r[29]; // 800456C8
  goto L_800456E0; // 800456CC
L_800456D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800456D0
  c->r[3]=c->r[3]+0x00000004u; // 800456D4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800456D8
  c->r[5]=c->r[5]+0x00000004u; // 800456DC
L_800456E0:;
  cmpu(c,0,c->r[3],c->r[4]); // 800456E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800456D0; } // 800456E4
  c->r[4]=R32(c->r[30]+0x00000000u); // 800456E8
  cmps(c,0,(int32_t)c->r[4],0); // 800456EC
  if (crb(c,2)) { goto L_80045708; } // 800456F0
  c->r[3]=R32(c->r[30]+0x00000010u); // 800456F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800456F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800456FC
  c->ctr=c->r[12]; // 80045700
  if (true) { c->lr=0x80045708u; dispatch(c,c->ctr); } // 80045704
L_80045708:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80045708
  c->r[4]=c->r[29]+c->r[28]; // 8004570C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80045710
  W32(c->r[30]+0x00000008u,c->r[4]); // 80045714
  c->r[0]=c->r[0]-c->r[3]; // 80045718
  c->r[0]=sraw(c,c->r[0],2); // 8004571C
  W32(c->r[30]+0x00000000u,c->r[29]); // 80045720
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 80045724
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80045728
  c->r[0]=c->r[29]+c->r[0]; // 8004572C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80045730
L_80045734:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80045734
  W32(c->r[3]+0x00000000u,c->r[31]); // 80045738
  c->r[3]=R32(c->r[30]+0x00000004u); // 8004573C
  c->r[0]=c->r[3]+0x00000004u; // 80045740
  W32(c->r[30]+0x00000004u,c->r[0]); // 80045744
  c->r[10]=R32(c->r[1]+0x00000000u); // 80045748
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8004574C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80045750
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80045754
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 80045758
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004575C
  c->lr=c->r[0]; // 80045760
  c->r[1]=c->r[10]|c->r[10]; // 80045764
  return; // 80045768
}

// fn_8004576C
void f_8004576C(Ctx* __restrict c) {
  trace_call(0x8004576Cu);
  return; // 8004576C
}

// fn_80045770
void f_80045770(Ctx* __restrict c) {
  trace_call(0x80045770u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80045770
  c->r[12]=c->r[1]|c->r[1]; // 80045774
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 80045778
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004577C
  c->r[0]=c->lr; // 80045780
  W32(c->r[12]+0x00000004u,c->r[0]); // 80045784
  c->r[4]=c->r[1]+0x00000010u; // 80045788
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8004578C
  c->r[31]=c->r[3]|c->r[3]; // 80045790
  c->r[12]=R32(c->r[3]+0x00000014u); // 80045794
  c->r[12]=R32(c->r[12]+0x00000030u); // 80045798
  c->ctr=c->r[12]; // 8004579C
  if (true) { c->lr=0x800457A4u; dispatch(c,c->ctr); } // 800457A0
  cmps(c,0,(int32_t)c->r[3],0); // 800457A4
  if (crb(c,2)) { goto L_800457F4; } // 800457A8
  c->r[0]=R32(c->r[13]+0xFFFF80A8u); // 800457AC
  c->r[4]=0u+0x80380000u; // 800457B0
  c->r[4]=c->r[4]+0x000049C0u; // 800457B4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800457B8
  c->r[3]=0u+0x00000000u; // 800457BC
  c->ctr=c->r[0]; // 800457C0
  cmpu(c,0,c->r[0],0x00000000u); // 800457C4
  if (!crb(c,1)) { goto L_800457E4; } // 800457C8
L_800457CC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800457CC
  fcmp(c,0,c->f[1],c->f[0]); // 800457D0
  if (crb(c,0)) { goto L_800457E4; } // 800457D4
  c->r[3]=c->r[3]+0x00000001u; // 800457D8
  c->r[4]=c->r[4]+0x00000018u; // 800457DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800457CC; } // 800457E0
L_800457E4:;
  cmpu(c,0,c->r[3],c->r[0]); // 800457E4
  if (!crb(c,2)) { goto L_800457F0; } // 800457E8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800457EC
L_800457F0:;
  W32(c->r[31]+0x000000E4u,c->r[3]); // 800457F0
L_800457F4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800457F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800457F8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800457FC
  c->lr=c->r[0]; // 80045800
  c->r[1]=c->r[10]|c->r[10]; // 80045804
  return; // 80045808
}

// fn_8004580C
void f_8004580C(Ctx* __restrict c) {
  trace_call(0x8004580Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8004580C
  c->r[12]=c->r[1]|c->r[1]; // 80045810
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 80045814
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80045818
  c->r[0]=c->lr; // 8004581C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80045820
  c->r[4]=c->r[1]+0x00000030u; // 80045824
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80045828
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8004582C
  c->f[31]=c->f[1]; // 80045830
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 80045834
  c->r[31]=c->r[5]|c->r[5]; // 80045838
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 8004583C
  c->r[30]=c->r[3]|c->r[3]; // 80045840
  c->r[12]=R32(c->r[3]+0x00000014u); // 80045844
  c->r[12]=R32(c->r[12]+0x00000030u); // 80045848
  c->ctr=c->r[12]; // 8004584C
  if (true) { c->lr=0x80045854u; dispatch(c,c->ctr); } // 80045850
  cmps(c,1,(int32_t)c->r[3],0); // 80045854
  if (crb(c,6)) { goto L_80045994; } // 80045858
  c->r[0]=R32(c->r[30]+0x000000E4u); // 8004585C
  c->r[3]=0u+0x80380000u; // 80045860
  c->r[3]=c->r[3]+0x000049C0u; // 80045864
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80045868
  c->r[6]=c->r[3]+c->r[0]; // 8004586C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045870
  fcmp(c,1,c->f[31],c->f[0]); // 80045874
  if (!crb(c,4)) { goto L_800458F8; } // 80045878
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004587C
  c->r[3]=c->r[1]+0x00000010u; // 80045880
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80045884
  c->r[4]=c->r[1]+0x00000020u; // 80045888
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004588C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80045890
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,3,ea,0,0);} // 80045894
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80045898
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,1,0);} // 8004589C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 800458A0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 800458A4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800458A8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800458AC
  {uint32_t ea=c->r[2]+0xFFFF86ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 800458B0
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 800458B4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 800458B8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[4]); // 800458BC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800458C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800458C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800458C8
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[31]=t0; c->ps1[31]=t1;} // 800458CC
  {double t0=S(c->f[31]+c->ps1[1]), t1=S(c->ps1[1]); c->f[31]=t0; c->ps1[31]=t1;} // 800458D0
  fcmp(c,0,c->f[31],c->f[3]); // 800458D4
  if (crb(c,2)) { goto L_800458F8; } // 800458D8
  c->f[0]=frsqrte(c->f[31]); // 800458DC
  {uint32_t ea=c->r[2]+0xFFFF86F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800458E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 800458E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 800458E8
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[31],-c->f[2])); // 800458EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800458F0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 800458F4
L_800458F8:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800458F8
  c->r[5]=0u+0x00000001u; // 800458FC
  fcmp(c,1,c->f[31],c->f[3]); // 80045900
  setcrb(c,6,crb(c,5)|crb(c,6)); // 80045904
  if (!crb(c,6)) { goto L_8004591C; } // 80045908
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004590C
  c->r[5]=0u+0x00000000u; // 80045910
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 80045914
  goto L_80045988; // 80045918
L_8004591C:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004591C
  fcmp(c,1,c->f[31],c->f[1]); // 80045920
  setcrb(c,6,crb(c,4)|crb(c,6)); // 80045924
  if (!crb(c,6)) { goto L_80045938; } // 80045928
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004592C
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 80045930
  goto L_80045950; // 80045934
L_80045938:;
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[1]); // 80045938
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004593C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80045940
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80045944
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80045948
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8004594C
L_80045950:;
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80045950
  fcmp(c,1,c->f[31],c->f[0]); // 80045954
  if (!crb(c,4)) { goto L_80045968; } // 80045958
  c->r[0]=0u+0x00000000u; // 8004595C
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80045960
  goto L_80045988; // 80045964
L_80045968:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80045968
  fcmp(c,1,c->f[31],c->f[0]); // 8004596C
  if (!crb(c,4)) { goto L_80045980; } // 80045970
  c->r[0]=0u+0x00000001u; // 80045974
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80045978
  goto L_80045988; // 8004597C
L_80045980:;
  c->r[0]=0u+0x00000002u; // 80045980
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80045984
L_80045988:;
  c->r[3]=c->r[30]|c->r[30]; // 80045988
  c->r[4]=0u+0x00000007u; // 8004598C
  c->lr=0x80045994u; f_8030FFA0(c); // 80045990
L_80045994:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80045994
  c->r[0]=R32(c->r[10]+0x00000004u); // 80045998
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 8004599C
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800459A0
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 800459A4
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 800459A8
  c->lr=c->r[0]; // 800459AC
  c->r[1]=c->r[10]|c->r[10]; // 800459B0
  return; // 800459B4
}

// fn_800459B8
void f_800459B8(Ctx* __restrict c) {
  trace_call(0x800459B8u);
  return; // 800459B8
}

// fn_800459BC
void f_800459BC(Ctx* __restrict c) {
  trace_call(0x800459BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800459BC
  c->r[0]=c->lr; // 800459C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800459C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800459C8
  c->r[31]=c->r[3]|c->r[3]; // 800459CC
  c->lr=0x800459D4u; f_80040B7C(c); // 800459D0
  c->r[3]=0u+0x80380000u; // 800459D4
  c->r[0]=0u+0x00000001u; // 800459D8
  c->r[3]=c->r[3]+0x00004A98u; // 800459DC
  W32(c->r[31]+0x00000014u,c->r[3]); // 800459E0
  c->r[3]=c->r[31]|c->r[31]; // 800459E4
  c->r[4]=0u+0x00000007u; // 800459E8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800459EC
  c->r[5]=R32(c->r[13]+0xFFFF9490u); // 800459F0
  c->lr=0x800459F8u; f_8030FFA0(c); // 800459F4
  c->r[0]=R8(c->r[31]+0x0000013Cu); // 800459F8
  c->r[3]=0u+0x0000005Cu; // 800459FC
  c->r[4]=0u+0x0000005Du; // 80045A00
  W32(c->r[31]+0x00000138u,c->r[3]); // 80045A04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80045A08
  c->r[3]=c->r[31]|c->r[31]; // 80045A0C
  W32(c->r[31]+0x00000078u,c->r[4]); // 80045A10
  W8(c->r[31]+0x0000013Cu,c->r[0]); // 80045A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045A1C
  c->lr=c->r[0]; // 80045A20
  c->r[1]=c->r[1]+0x00000010u; // 80045A24
  return; // 80045A28
}

// fn_80045A2C
void f_80045A2C(Ctx* __restrict c) {
  trace_call(0x80045A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045A2C
  c->r[0]=c->lr; // 80045A30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045A34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045A38
  c->r[31]=c->r[5]|c->r[5]; // 80045A3C
  c->r[5]=0u+0x00000010u; // 80045A40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80045A44
  c->r[30]=c->r[4]|c->r[4]; // 80045A48
  c->r[4]=0u+0x00000150u; // 80045A4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80045A50
  c->r[29]=c->r[3]|c->r[3]; // 80045A54
  c->r[6]=R32(c->r[13]+0xFFFFA540u); // 80045A58
  c->r[3]=R32(c->r[6]+0x00000000u); // 80045A5C
  c->lr=0x80045A64u; f_802A89E4(c); // 80045A60
  cmps(c,0,(int32_t)c->r[3],0); // 80045A64
  if (crb(c,2)) { goto L_80045A7C; } // 80045A68
  c->r[4]=c->r[29]|c->r[29]; // 80045A6C
  c->r[5]=c->r[30]|c->r[30]; // 80045A70
  c->r[6]=c->r[31]|c->r[31]; // 80045A74
  c->lr=0x80045A7Cu; f_800459BC(c); // 80045A78
L_80045A7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80045A7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80045A80
  c->r[30]=R32(c->r[1]+0x00000018u); // 80045A84
  c->r[29]=R32(c->r[1]+0x00000014u); // 80045A88
  c->lr=c->r[0]; // 80045A8C
  c->r[1]=c->r[1]+0x00000020u; // 80045A90
  return; // 80045A94
}

// fn_80045A98
void f_80045A98(Ctx* __restrict c) {
  trace_call(0x80045A98u);
  f_80041060(c); return; // 80045A98
}

// fn_80045A9C
void f_80045A9C(Ctx* __restrict c) {
  trace_call(0x80045A9Cu);
  f_8030C6C0(c); return; // 80045A9C
}

// fn_80045AA0
void f_80045AA0(Ctx* __restrict c) {
  trace_call(0x80045AA0u);
  return; // 80045AA0
}

// fn_80045AA4
void f_80045AA4(Ctx* __restrict c) {
  trace_call(0x80045AA4u);
  return; // 80045AA4
}

// fn_80045AA8
void f_80045AA8(Ctx* __restrict c) {
  trace_call(0x80045AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045AA8
  c->r[0]=c->lr; // 80045AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045AB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045AB4
  c->r[31]=c->r[3]|c->r[3]; // 80045AB8
  c->lr=0x80045AC0u; f_80045AA0(c); // 80045ABC
  c->r[5]=0u+0x80370000u; // 80045AC0
  c->r[6]=0u+0x80040000u; // 80045AC4
  c->r[3]=c->r[31]|c->r[31]; // 80045AC8
  c->r[4]=0u+0x00000004u; // 80045ACC
  c->r[5]=c->r[5]+0x00004130u; // 80045AD0
  c->r[6]=c->r[6]+0x00005A2Cu; // 80045AD4
  c->lr=0x80045ADCu; f_80337FC8(c); // 80045AD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045ADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045AE0
  c->lr=c->r[0]; // 80045AE4
  c->r[1]=c->r[1]+0x00000010u; // 80045AE8
  return; // 80045AEC
}

// fn_80045AF0
void f_80045AF0(Ctx* __restrict c) {
  trace_call(0x80045AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045AF0
  c->r[0]=c->lr; // 80045AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045AF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045AFC
  c->r[31]=c->r[3]|c->r[3]; // 80045B00
  c->lr=0x80045B08u; f_80045AA4(c); // 80045B04
  c->r[5]=0u+0x80370000u; // 80045B08
  c->r[3]=c->r[31]|c->r[31]; // 80045B0C
  c->r[5]=c->r[5]+0x00004130u; // 80045B10
  c->r[4]=0u+0x00000004u; // 80045B14
  c->lr=0x80045B1Cu; f_803386E0(c); // 80045B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045B1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045B20
  c->lr=c->r[0]; // 80045B24
  c->r[1]=c->r[1]+0x00000010u; // 80045B28
  return; // 80045B2C
}

// fn_80045B30
void f_80045B30(Ctx* __restrict c) {
  trace_call(0x80045B30u);
  return; // 80045B30
}

// fn_80045B34
void f_80045B34(Ctx* __restrict c) {
  trace_call(0x80045B34u);
  return; // 80045B34
}

// fn_80045B38
void f_80045B38(Ctx* __restrict c) {
  trace_call(0x80045B38u);
  f_80041EA0(c); return; // 80045B38
}

// fn_80045B3C
void f_80045B3C(Ctx* __restrict c) {
  trace_call(0x80045B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045B3C
  c->r[0]=c->lr; // 80045B40
  cmps(c,0,(int32_t)c->r[3],0); // 80045B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045B48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045B4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80045B50
  c->r[30]=c->r[4]|c->r[4]; // 80045B54
  W32(c->r[1]+0x00000014u,c->r[29]); // 80045B58
  c->r[29]=c->r[3]|c->r[3]; // 80045B5C
  if (crb(c,2)) { goto L_80045C24; } // 80045B60
  if (crb(c,2)) { goto L_80045B70; } // 80045B64
  c->r[4]=0u+0x00000000u; // 80045B68
  c->lr=0x80045B70u; f_8030BAE0(c); // 80045B6C
L_80045B70:;
  cmps(c,0,(int32_t)c->r[30],0); // 80045B70
  if (!crb(c,1)) { goto L_80045C24; } // 80045B74
  c->lr=0x80045B7Cu; f_8028B53C(c); // 80045B78
  c->r[31]=0u+0x804B0000u; // 80045B7C
  c->r[31]=c->r[31]+0xFFFFC800u; // 80045B80
  c->r[3]=c->r[31]|c->r[31]; // 80045B84
  c->lr=0x80045B8Cu; f_8024B0E0(c); // 80045B88
  cmps(c,0,(int32_t)c->r[29],0); // 80045B8C
  if (!crb(c,2)) { goto L_80045BA0; } // 80045B90
  c->r[3]=c->r[31]|c->r[31]; // 80045B94
  c->lr=0x80045B9Cu; f_8024B1C0(c); // 80045B98
  goto L_80045C24; // 80045B9C
L_80045BA0:;
  c->r[0]=0u+0x80000000u; // 80045BA0
  cmpu(c,0,c->r[29],c->r[0]); // 80045BA4
  if (crb(c,0)) { goto L_80045BC4; } // 80045BA8
  c->r[3]=0u+0x81800000u; // 80045BAC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80045BB0
  cmpu(c,0,c->r[29],c->r[0]); // 80045BB4
  if (!crb(c,0)) { goto L_80045BC4; } // 80045BB8
  c->r[30]=0u+0x00000000u; // 80045BBC
  goto L_80045C04; // 80045BC0
L_80045BC4:;
  c->r[0]=0u+0x90000000u; // 80045BC4
  cmpu(c,0,c->r[29],c->r[0]); // 80045BC8
  if (crb(c,0)) { goto L_80045BE4; } // 80045BCC
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045BD0
  cmpu(c,0,c->r[29],c->r[0]); // 80045BD4
  if (!crb(c,0)) { goto L_80045BE4; } // 80045BD8
  c->r[30]=0u+0x00000001u; // 80045BDC
  goto L_80045C04; // 80045BE0
L_80045BE4:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045BE4
  cmpu(c,0,c->r[29],c->r[0]); // 80045BE8
  if (crb(c,0)) { goto L_80045C04; } // 80045BEC
  c->r[3]=0u+0x98000000u; // 80045BF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80045BF4
  cmpu(c,0,c->r[29],c->r[0]); // 80045BF8
  if (!crb(c,0)) { goto L_80045C04; } // 80045BFC
  c->r[30]=0u+0x00000002u; // 80045C00
L_80045C04:;
  c->r[3]=0u+0x804B0000u; // 80045C04
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80045C08
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80045C0C
  c->r[4]=c->r[29]|c->r[29]; // 80045C10
  c->r[3]=R32(c->r[3]+c->r[0]); // 80045C14
  c->lr=0x80045C1Cu; f_8023B550(c); // 80045C18
  c->r[3]=c->r[31]|c->r[31]; // 80045C1C
  c->lr=0x80045C24u; f_8024B1C0(c); // 80045C20
L_80045C24:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80045C24
  c->r[3]=c->r[29]|c->r[29]; // 80045C28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80045C2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80045C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80045C34
  c->lr=c->r[0]; // 80045C38
  c->r[1]=c->r[1]+0x00000020u; // 80045C3C
  return; // 80045C40
}

// fn_80045C44
void f_80045C44(Ctx* __restrict c) {
  trace_call(0x80045C44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045C44
  c->r[0]=c->lr; // 80045C48
  c->r[4]=0u+0x80060000u; // 80045C4C
  c->r[5]=0u+0x80060000u; // 80045C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045C54
  c->r[4]=c->r[4]+0x00000C00u; // 80045C58
  c->r[5]=c->r[5]+0x00000C24u; // 80045C5C
  c->r[6]=0u+0x00000038u; // 80045C60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045C64
  c->r[31]=c->r[3]|c->r[3]; // 80045C68
  c->r[7]=0u+0x00000004u; // 80045C6C
  c->r[3]=c->r[3]+0x0000000Cu; // 80045C70
  c->lr=0x80045C78u; f_800C2B8C(c); // 80045C74
  c->r[4]=0u+0x00000000u; // 80045C78
  c->r[0]=0u+0x00000001u; // 80045C7C
  W32(c->r[31]+0x00000004u,c->r[4]); // 80045C80
  c->r[3]=c->r[31]|c->r[31]; // 80045C84
  W32(c->r[31]+0x00000000u,c->r[4]); // 80045C88
  W32(c->r[31]+0x00000110u,c->r[4]); // 80045C8C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80045C90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045C98
  c->lr=c->r[0]; // 80045C9C
  c->r[1]=c->r[1]+0x00000010u; // 80045CA0
  return; // 80045CA4
}

// fn_80045CA8
void f_80045CA8(Ctx* __restrict c) {
  trace_call(0x80045CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045CA8
  c->r[0]=c->lr; // 80045CAC
  cmps(c,0,(int32_t)c->r[3],0); // 80045CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80045CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045CB8
  c->r[31]=c->r[4]|c->r[4]; // 80045CBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80045CC0
  c->r[30]=c->r[3]|c->r[3]; // 80045CC4
  if (crb(c,2)) { goto L_80045D98; } // 80045CC8
  c->r[4]=0u+0x80060000u; // 80045CCC
  c->r[5]=0u+0x00000038u; // 80045CD0
  c->r[4]=c->r[4]+0x00000C24u; // 80045CD4
  c->r[6]=0u+0x00000004u; // 80045CD8
  c->r[3]=c->r[3]+0x0000000Cu; // 80045CDC
  c->lr=0x80045CE4u; f_800C2C84(c); // 80045CE0
  cmps(c,0,(int32_t)c->r[31],0); // 80045CE4
  if (!crb(c,1)) { goto L_80045D98; } // 80045CE8
  c->lr=0x80045CF0u; f_8028B53C(c); // 80045CEC
  c->r[31]=0u+0x804B0000u; // 80045CF0
  c->r[31]=c->r[31]+0xFFFFC800u; // 80045CF4
  c->r[3]=c->r[31]|c->r[31]; // 80045CF8
  c->lr=0x80045D00u; f_8024B0E0(c); // 80045CFC
  cmps(c,0,(int32_t)c->r[30],0); // 80045D00
  if (!crb(c,2)) { goto L_80045D14; } // 80045D04
  c->r[3]=c->r[31]|c->r[31]; // 80045D08
  c->lr=0x80045D10u; f_8024B1C0(c); // 80045D0C
  goto L_80045D98; // 80045D10
L_80045D14:;
  c->r[0]=0u+0x80000000u; // 80045D14
  cmpu(c,0,c->r[30],c->r[0]); // 80045D18
  if (crb(c,0)) { goto L_80045D38; } // 80045D1C
  c->r[3]=0u+0x81800000u; // 80045D20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80045D24
  cmpu(c,0,c->r[30],c->r[0]); // 80045D28
  if (!crb(c,0)) { goto L_80045D38; } // 80045D2C
  c->r[4]=0u+0x00000000u; // 80045D30
  goto L_80045D78; // 80045D34
L_80045D38:;
  c->r[0]=0u+0x90000000u; // 80045D38
  cmpu(c,0,c->r[30],c->r[0]); // 80045D3C
  if (crb(c,0)) { goto L_80045D58; } // 80045D40
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045D44
  cmpu(c,0,c->r[30],c->r[0]); // 80045D48
  if (!crb(c,0)) { goto L_80045D58; } // 80045D4C
  c->r[4]=0u+0x00000001u; // 80045D50
  goto L_80045D78; // 80045D54
L_80045D58:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80045D58
  cmpu(c,0,c->r[30],c->r[0]); // 80045D5C
  if (crb(c,0)) { goto L_80045D78; } // 80045D60
  c->r[3]=0u+0x98000000u; // 80045D64
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80045D68
  cmpu(c,0,c->r[30],c->r[0]); // 80045D6C
  if (!crb(c,0)) { goto L_80045D78; } // 80045D70
  c->r[4]=0u+0x00000002u; // 80045D74
L_80045D78:;
  c->r[3]=0u+0x804B0000u; // 80045D78
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80045D7C
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80045D80
  c->r[4]=c->r[30]|c->r[30]; // 80045D84
  c->r[3]=R32(c->r[3]+c->r[0]); // 80045D88
  c->lr=0x80045D90u; f_8023B550(c); // 80045D8C
  c->r[3]=c->r[31]|c->r[31]; // 80045D90
  c->lr=0x80045D98u; f_8024B1C0(c); // 80045D94
L_80045D98:;
  c->r[3]=c->r[30]|c->r[30]; // 80045D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80045D9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80045DA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80045DA4
  c->lr=c->r[0]; // 80045DA8
  c->r[1]=c->r[1]+0x00000010u; // 80045DAC
  return; // 80045DB0
}

// fn_80045DB4
void f_80045DB4(Ctx* __restrict c) {
  trace_call(0x80045DB4u);
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80045DB4
  f_80363F0C(c); return; // 80045DB8
}

// fn_80045DBC
void f_80045DBC(Ctx* __restrict c) {
  trace_call(0x80045DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045DBC
  c->r[0]=c->lr; // 80045DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045DC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045DC8
  c->r[31]=0u+0x803D0000u; // 80045DCC
  c->r[4]=c->r[31]+0x0000407Cu; // 80045DD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80045DD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80045DD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 80045DDC
  c->r[28]=c->r[3]|c->r[3]; // 80045DE0
  c->r[4]=R32(c->r[4]+0x000000ACu); // 80045DE4
  c->r[4]=R32(c->r[4]+0x00000000u); // 80045DE8
  c->r[4]=R32(c->r[4]+0x00000010u); // 80045DEC
  c->r[4]=R32(c->r[4]+0x00000004u); // 80045DF0
  c->lr=0x80045DF8u; f_80045F78(c); // 80045DF4
  c->r[30]=c->r[28]+0x0000000Cu; // 80045DF8
  c->r[29]=0u+0x00000000u; // 80045DFC
L_80045E00:;
  c->r[4]=c->r[29]|c->r[29]; // 80045E00
  c->r[3]=c->r[31]+0x0000407Cu; // 80045E04
  c->lr=0x80045E0Cu; f_800B8104(c); // 80045E08
  c->r[4]=c->r[3]|c->r[3]; // 80045E0C
  c->r[3]=c->r[30]|c->r[30]; // 80045E10
  c->r[5]=c->r[29]|c->r[29]; // 80045E14
  c->lr=0x80045E1Cu; f_80060D1C(c); // 80045E18
  cmps(c,0,(int32_t)c->r[29],0); // 80045E1C
  if (crb(c,2)) { goto L_80045E3C; } // 80045E20
  c->r[3]=c->r[30]|c->r[30]; // 80045E24
  c->r[4]=0u+0x00000000u; // 80045E28
  c->lr=0x80045E30u; f_8006159C(c); // 80045E2C
  c->r[3]=c->r[30]|c->r[30]; // 80045E30
  c->r[4]=0u+0x00000000u; // 80045E34
  c->lr=0x80045E3Cu; f_800615A4(c); // 80045E38
L_80045E3C:;
  c->r[3]=c->r[30]|c->r[30]; // 80045E3C
  c->r[4]=c->r[29]+0x00000004u; // 80045E40
  c->lr=0x80045E48u; f_800612AC(c); // 80045E44
  c->r[29]=c->r[29]+0x00000001u; // 80045E48
  c->r[30]=c->r[30]+0x00000038u; // 80045E4C
  cmpu(c,0,c->r[29],0x00000004u); // 80045E50
  if (crb(c,0)) { IRQCHK(c); goto L_80045E00; } // 80045E54
  c->r[4]=0u+0x803D0000u; // 80045E58
  c->r[3]=0u+0x803D0000u; // 80045E5C
  c->r[4]=c->r[4]+0x0000407Cu; // 80045E60
  c->r[4]=R32(c->r[4]+0x00000004u); // 80045E64
  c->r[3]=c->r[3]+0x0000386Cu; // 80045E68
  c->r[0]=R32(c->r[4]+0x00000004u); // 80045E6C
  W32(c->r[28]+0x00000000u,c->r[0]); // 80045E70
  c->lr=0x80045E78u; f_800A9454(c); // 80045E74
  c->r[3]=c->r[28]|c->r[28]; // 80045E78
  c->lr=0x80045E80u; f_80046E68(c); // 80045E7C
  c->r[3]=c->r[28]|c->r[28]; // 80045E80
  c->lr=0x80045E88u; f_80047054(c); // 80045E84
  c->r[3]=0u+0x803D0000u; // 80045E88
  c->r[3]=c->r[3]+0x00003F44u; // 80045E8C
  c->lr=0x80045E94u; f_800B07C0(c); // 80045E90
  c->r[0]=R32(c->r[1]+0x00000024u); // 80045E94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80045E98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80045E9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80045EA0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80045EA4
  c->lr=c->r[0]; // 80045EA8
  c->r[1]=c->r[1]+0x00000020u; // 80045EAC
  return; // 80045EB0
}

// fn_80045EB4
void f_80045EB4(Ctx* __restrict c) {
  trace_call(0x80045EB4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80045EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80045EB8
  if (crb(c,2)) return; // 80045EBC
  f_8005F48C(c); return; // 80045EC0
}

// fn_80045EC4
void f_80045EC4(Ctx* __restrict c) {
  trace_call(0x80045EC4u);
  return; // 80045EC4
}

// fn_80045EC8
void f_80045EC8(Ctx* __restrict c) {
  trace_call(0x80045EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045EC8
  c->r[0]=c->lr; // 80045ECC
  c->r[4]=0u+0x803D0000u; // 80045ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80045ED4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80045ED8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80045EDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80045EE0
  c->r[29]=c->r[3]|c->r[3]; // 80045EE4
  c->r[3]=c->r[4]+0x0000386Cu; // 80045EE8
  c->lr=0x80045EF0u; f_800A9598(c); // 80045EEC
  c->r[3]=c->r[29]|c->r[29]; // 80045EF0
  c->lr=0x80045EF8u; f_80046834(c); // 80045EF4
  c->r[0]=0u+0x00000000u; // 80045EF8
  W32(c->r[29]+0x00000000u,c->r[0]); // 80045EFC
  c->r[31]=c->r[29]+0x0000000Cu; // 80045F00
  c->r[30]=0u+0x00000000u; // 80045F04
L_80045F08:;
  c->r[3]=c->r[31]|c->r[31]; // 80045F08
  c->lr=0x80045F10u; f_80061200(c); // 80045F0C
  c->r[30]=c->r[30]+0x00000001u; // 80045F10
  c->r[31]=c->r[31]+0x00000038u; // 80045F14
  cmpu(c,0,c->r[30],0x00000004u); // 80045F18
  if (crb(c,0)) { IRQCHK(c); goto L_80045F08; } // 80045F1C
  c->r[3]=c->r[29]|c->r[29]; // 80045F20
  c->lr=0x80045F28u; f_80047010(c); // 80045F24
  c->r[3]=0u+0x803D0000u; // 80045F28
  c->r[3]=c->r[3]+0x00003F44u; // 80045F2C
  c->lr=0x80045F34u; f_800B0870(c); // 80045F30
  c->r[4]=0u+0x803D0000u; // 80045F34
  c->r[3]=c->r[29]|c->r[29]; // 80045F38
  c->r[4]=c->r[4]+0x0000407Cu; // 80045F3C
  c->r[4]=R32(c->r[4]+0x000000ACu); // 80045F40
  c->r[4]=R32(c->r[4]+0x00000000u); // 80045F44
  c->r[4]=R32(c->r[4]+0x00000010u); // 80045F48
  c->r[4]=R32(c->r[4]+0x00000004u); // 80045F4C
  c->lr=0x80045F54u; f_80046280(c); // 80045F50
  c->r[0]=R32(c->r[1]+0x00000024u); // 80045F54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80045F58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80045F5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80045F60
  c->lr=c->r[0]; // 80045F64
  c->r[1]=c->r[1]+0x00000020u; // 80045F68
  return; // 80045F6C
}

// fn_80045F70
void f_80045F70(Ctx* __restrict c) {
  trace_call(0x80045F70u);
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80045F70
  f_80363FE4(c); return; // 80045F74
}

// fn_80045F78
void f_80045F78(Ctx* __restrict c) {
  trace_call(0x80045F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80045F78
  c->r[0]=c->lr; // 80045F7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80045F80
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80045F84
  c->r[26]=0u+0x80380000u; // 80045F88
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80045F8C
  c->r[28]=c->r[4]|c->r[4]; // 80045F90
  c->r[26]=c->r[26]+0x00004B00u; // 80045F94
  c->r[27]=0u+0x00000000u; // 80045F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80045F9C
L_80045FA0:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 80045FA0
  cmps(c,0,(int32_t)c->r[0],0); // 80045FA4
  if (!crb(c,2)) { goto L_80046084; } // 80045FA8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80045FAC
  c->r[5]=0u+0x00000000u; // 80045FB0
  c->r[4]=R32(c->r[26]+0x00000000u); // 80045FB4
  c->lr=0x80045FBCu; f_8031E640(c); // 80045FB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80045FBC
  c->r[5]=0u+0x00000000u; // 80045FC0
  c->r[0]=R32(c->r[28]+0x00000000u); // 80045FC4
  c->ctr=c->r[0]; // 80045FC8
  cmpu(c,0,c->r[0],0x00000000u); // 80045FCC
  if (!crb(c,1)) { goto L_80045FF4; } // 80045FD0
L_80045FD4:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 80045FD4
  c->r[0]=R32(c->r[4]+c->r[5]); // 80045FD8
  cmpu(c,0,c->r[0],c->r[3]); // 80045FDC
  if (!crb(c,2)) { goto L_80045FEC; } // 80045FE0
  c->r[0]=0u+0x00000001u; // 80045FE4
  goto L_80045FF8; // 80045FE8
L_80045FEC:;
  c->r[5]=c->r[5]+0x00000010u; // 80045FEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80045FD4; } // 80045FF0
L_80045FF4:;
  c->r[0]=0u+0x00000000u; // 80045FF4
L_80045FF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80045FF8
  if (crb(c,2)) { goto L_80046028; } // 80045FFC
  c->r[3]=c->r[28]|c->r[28]; // 80046000
  c->r[4]=c->r[1]+0x0000000Cu; // 80046004
  c->lr=0x8004600Cu; f_8034AF6C(c); // 80046008
  c->r[4]=c->r[3]|c->r[3]; // 8004600C
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046010
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80046014
  c->r[4]=R32(c->r[26]+0x00000004u); // 80046018
  c->r[5]=R32(c->r[5]+0x00000000u); // 8004601C
  c->lr=0x80046024u; f_80364A24(c); // 80046020
  W32(c->r[26]+0x00000008u,c->r[3]); // 80046024
L_80046028:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 80046028
  c->r[3]=c->r[29]|c->r[29]; // 8004602C
  c->lr=0x80046034u; f_8024B0E0(c); // 80046030
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80046034
  cmpu(c,0,c->r[4],c->r[31]); // 80046038
  if (!crb(c,2)) { goto L_8004604C; } // 8004603C
  c->r[3]=c->r[29]|c->r[29]; // 80046040
  c->lr=0x80046048u; f_8024B1C0(c); // 80046044
  goto L_80046084; // 80046048
L_8004604C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8004604C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046050
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80046054
  cmpu(c,0,c->r[0],0x00000001u); // 80046058
  if (!crb(c,2)) { goto L_80046078; } // 8004605C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046060
  cmpu(c,0,c->r[0],0x00000001u); // 80046064
  if (!crb(c,2)) { goto L_80046078; } // 80046068
  c->r[3]=c->r[29]|c->r[29]; // 8004606C
  c->r[4]=c->r[1]+0x0000000Cu; // 80046070
  c->lr=0x80046078u; f_8031EEDC(c); // 80046074
L_80046078:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80046078
  c->r[3]=c->r[29]|c->r[29]; // 8004607C
  c->lr=0x80046084u; f_8024B1C0(c); // 80046080
L_80046084:;
  c->r[27]=c->r[27]+0x00000001u; // 80046084
  c->r[26]=c->r[26]+0x0000000Cu; // 80046088
  cmpu(c,0,c->r[27],0x00000004u); // 8004608C
  if (crb(c,0)) { IRQCHK(c); goto L_80045FA0; } // 80046090
  c->r[27]=R32(c->r[2]+0xFFFFBF18u); // 80046094
  c->r[30]=0u+0x80380000u; // 80046098
  W32(c->r[1]+0x00000008u,c->r[27]); // 8004609C
  c->r[30]=c->r[30]+0x00004B30u; // 800460A0
  c->r[29]=0u+0x00000000u; // 800460A4
L_800460A8:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800460A8
  cmps(c,0,(int32_t)c->r[0],0); // 800460AC
  if (!crb(c,2)) { goto L_8004618C; } // 800460B0
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800460B4
  c->r[5]=0u+0x00000000u; // 800460B8
  c->r[4]=R32(c->r[30]+0x00000000u); // 800460BC
  c->lr=0x800460C4u; f_8031E640(c); // 800460C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800460C4
  c->r[5]=0u+0x00000000u; // 800460C8
  c->r[0]=R32(c->r[28]+0x00000000u); // 800460CC
  c->ctr=c->r[0]; // 800460D0
  cmpu(c,0,c->r[0],0x00000000u); // 800460D4
  if (!crb(c,1)) { goto L_800460FC; } // 800460D8
L_800460DC:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 800460DC
  c->r[0]=R32(c->r[4]+c->r[5]); // 800460E0
  cmpu(c,0,c->r[0],c->r[3]); // 800460E4
  if (!crb(c,2)) { goto L_800460F4; } // 800460E8
  c->r[0]=0u+0x00000001u; // 800460EC
  goto L_80046100; // 800460F0
L_800460F4:;
  c->r[5]=c->r[5]+0x00000010u; // 800460F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800460DC; } // 800460F8
L_800460FC:;
  c->r[0]=0u+0x00000000u; // 800460FC
L_80046100:;
  cmps(c,0,(int32_t)c->r[0],0); // 80046100
  if (crb(c,2)) { goto L_80046130; } // 80046104
  c->r[3]=c->r[28]|c->r[28]; // 80046108
  c->r[4]=c->r[1]+0x00000008u; // 8004610C
  c->lr=0x80046114u; f_8034AF6C(c); // 80046110
  c->r[4]=c->r[3]|c->r[3]; // 80046114
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046118
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8004611C
  c->r[4]=R32(c->r[30]+0x00000004u); // 80046120
  c->r[5]=R32(c->r[5]+0x00000000u); // 80046124
  c->lr=0x8004612Cu; f_8036446C(c); // 80046128
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8004612C
L_80046130:;
  c->r[26]=R32(c->r[13]+0xFFFFA510u); // 80046130
  c->r[3]=c->r[26]|c->r[26]; // 80046134
  c->lr=0x8004613Cu; f_8024B0E0(c); // 80046138
  c->r[4]=R32(c->r[1]+0x00000008u); // 8004613C
  cmpu(c,0,c->r[4],c->r[27]); // 80046140
  if (!crb(c,2)) { goto L_80046154; } // 80046144
  c->r[3]=c->r[26]|c->r[26]; // 80046148
  c->lr=0x80046150u; f_8024B1C0(c); // 8004614C
  goto L_8004618C; // 80046150
L_80046154:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046154
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046158
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004615C
  cmpu(c,0,c->r[0],0x00000001u); // 80046160
  if (!crb(c,2)) { goto L_80046180; } // 80046164
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046168
  cmpu(c,0,c->r[0],0x00000001u); // 8004616C
  if (!crb(c,2)) { goto L_80046180; } // 80046170
  c->r[3]=c->r[26]|c->r[26]; // 80046174
  c->r[4]=c->r[1]+0x00000008u; // 80046178
  c->lr=0x80046180u; f_8031EEDC(c); // 8004617C
L_80046180:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 80046180
  c->r[3]=c->r[26]|c->r[26]; // 80046184
  c->lr=0x8004618Cu; f_8024B1C0(c); // 80046188
L_8004618C:;
  c->r[29]=c->r[29]+0x00000001u; // 8004618C
  c->r[30]=c->r[30]+0x00000010u; // 80046190
  cmps(c,0,(int32_t)c->r[29],5); // 80046194
  if (crb(c,0)) { IRQCHK(c); goto L_800460A8; } // 80046198
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004619C
  cmpu(c,0,c->r[0],c->r[31]); // 800461A0
  if (crb(c,2)) { goto L_80046204; } // 800461A4
  c->r[26]=R32(c->r[13]+0xFFFFA510u); // 800461A8
  c->r[3]=c->r[26]|c->r[26]; // 800461AC
  c->lr=0x800461B4u; f_8024B0E0(c); // 800461B0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800461B4
  cmpu(c,0,c->r[4],c->r[31]); // 800461B8
  if (!crb(c,2)) { goto L_800461CC; } // 800461BC
  c->r[3]=c->r[26]|c->r[26]; // 800461C0
  c->lr=0x800461C8u; f_8024B1C0(c); // 800461C4
  goto L_80046204; // 800461C8
L_800461CC:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800461CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800461D0
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800461D4
  cmpu(c,0,c->r[0],0x00000001u); // 800461D8
  if (!crb(c,2)) { goto L_800461F8; } // 800461DC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800461E0
  cmpu(c,0,c->r[0],0x00000001u); // 800461E4
  if (!crb(c,2)) { goto L_800461F8; } // 800461E8
  c->r[3]=c->r[26]|c->r[26]; // 800461EC
  c->r[4]=c->r[1]+0x00000008u; // 800461F0
  c->lr=0x800461F8u; f_8031EEDC(c); // 800461F4
L_800461F8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800461F8
  c->r[3]=c->r[26]|c->r[26]; // 800461FC
  c->lr=0x80046204u; f_8024B1C0(c); // 80046200
L_80046204:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80046204
  cmpu(c,0,c->r[0],c->r[31]); // 80046208
  if (crb(c,2)) { goto L_8004626C; } // 8004620C
  c->r[26]=R32(c->r[13]+0xFFFFA510u); // 80046210
  c->r[3]=c->r[26]|c->r[26]; // 80046214
  c->lr=0x8004621Cu; f_8024B0E0(c); // 80046218
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8004621C
  cmpu(c,0,c->r[4],c->r[31]); // 80046220
  if (!crb(c,2)) { goto L_80046234; } // 80046224
  c->r[3]=c->r[26]|c->r[26]; // 80046228
  c->lr=0x80046230u; f_8024B1C0(c); // 8004622C
  goto L_8004626C; // 80046230
L_80046234:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046234
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046238
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004623C
  cmpu(c,0,c->r[0],0x00000001u); // 80046240
  if (!crb(c,2)) { goto L_80046260; } // 80046244
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046248
  cmpu(c,0,c->r[0],0x00000001u); // 8004624C
  if (!crb(c,2)) { goto L_80046260; } // 80046250
  c->r[3]=c->r[26]|c->r[26]; // 80046254
  c->r[4]=c->r[1]+0x0000000Cu; // 80046258
  c->lr=0x80046260u; f_8031EEDC(c); // 8004625C
L_80046260:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80046260
  c->r[3]=c->r[26]|c->r[26]; // 80046264
  c->lr=0x8004626Cu; f_8024B1C0(c); // 80046268
L_8004626C:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004626C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80046270
  c->lr=c->r[0]; // 80046274
  c->r[1]=c->r[1]+0x00000030u; // 80046278
  return; // 8004627C
}

// fn_80046280
void f_80046280(Ctx* __restrict c) {
  trace_call(0x80046280u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80046280
  c->r[0]=c->lr; // 80046284
  W32(c->r[1]+0x00000034u,c->r[0]); // 80046288
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004628C
  c->r[27]=0u+0x80380000u; // 80046290
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80046294
  c->r[30]=c->r[4]|c->r[4]; // 80046298
  c->r[27]=c->r[27]+0x00004B00u; // 8004629C
  c->r[26]=0u+0x00000000u; // 800462A0
  c->r[29]=0u+0x00000000u; // 800462A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800462A8
L_800462AC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800462AC
  cmps(c,0,(int32_t)c->r[0],0); // 800462B0
  if (crb(c,2)) { goto L_80046378; } // 800462B4
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800462B8
  c->r[5]=0u+0x00000000u; // 800462BC
  c->r[4]=R32(c->r[27]+0x00000000u); // 800462C0
  c->lr=0x800462C8u; f_8031E640(c); // 800462C4
  c->r[0]=R32(c->r[30]+0x00000000u); // 800462C8
  c->r[5]=0u+0x00000000u; // 800462CC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800462D0
  c->ctr=c->r[0]; // 800462D4
  cmpu(c,0,c->r[0],0x00000000u); // 800462D8
  if (!crb(c,1)) { goto L_80046300; } // 800462DC
L_800462E0:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800462E0
  c->r[0]=R32(c->r[4]+c->r[5]); // 800462E4
  cmpu(c,0,c->r[0],c->r[3]); // 800462E8
  if (!crb(c,2)) { goto L_800462F8; } // 800462EC
  c->r[0]=0u+0x00000001u; // 800462F0
  goto L_80046304; // 800462F4
L_800462F8:;
  c->r[5]=c->r[5]+0x00000010u; // 800462F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800462E0; } // 800462FC
L_80046300:;
  c->r[0]=0u+0x00000000u; // 80046300
L_80046304:;
  cmps(c,0,(int32_t)c->r[0],0); // 80046304
  if (crb(c,2)) { goto L_8004631C; } // 80046308
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 8004630C
  c->r[4]=R32(c->r[27]+0x00000008u); // 80046310
  c->lr=0x80046318u; f_80364DA8(c); // 80046314
  W32(c->r[27]+0x00000008u,c->r[29]); // 80046318
L_8004631C:;
  c->r[28]=R32(c->r[13]+0xFFFFA510u); // 8004631C
  c->r[3]=c->r[28]|c->r[28]; // 80046320
  c->lr=0x80046328u; f_8024B0E0(c); // 80046324
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80046328
  cmpu(c,0,c->r[4],c->r[31]); // 8004632C
  if (!crb(c,2)) { goto L_80046340; } // 80046330
  c->r[3]=c->r[28]|c->r[28]; // 80046334
  c->lr=0x8004633Cu; f_8024B1C0(c); // 80046338
  goto L_80046378; // 8004633C
L_80046340:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046340
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046344
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80046348
  cmpu(c,0,c->r[0],0x00000001u); // 8004634C
  if (!crb(c,2)) { goto L_8004636C; } // 80046350
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046354
  cmpu(c,0,c->r[0],0x00000001u); // 80046358
  if (!crb(c,2)) { goto L_8004636C; } // 8004635C
  c->r[3]=c->r[28]|c->r[28]; // 80046360
  c->r[4]=c->r[1]+0x0000000Cu; // 80046364
  c->lr=0x8004636Cu; f_8031EEDC(c); // 80046368
L_8004636C:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004636C
  c->r[3]=c->r[28]|c->r[28]; // 80046370
  c->lr=0x80046378u; f_8024B1C0(c); // 80046374
L_80046378:;
  c->r[26]=c->r[26]+0x00000001u; // 80046378
  c->r[27]=c->r[27]+0x0000000Cu; // 8004637C
  cmpu(c,0,c->r[26],0x00000004u); // 80046380
  if (crb(c,0)) { IRQCHK(c); goto L_800462AC; } // 80046384
  c->r[28]=R32(c->r[2]+0xFFFFBF18u); // 80046388
  c->r[26]=0u+0x80380000u; // 8004638C
  W32(c->r[1]+0x00000008u,c->r[28]); // 80046390
  c->r[26]=c->r[26]+0x00004B30u; // 80046394
  c->r[25]=0u+0x00000000u; // 80046398
  c->r[29]=0u+0x00000000u; // 8004639C
L_800463A0:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800463A0
  cmps(c,0,(int32_t)c->r[0],0); // 800463A4
  if (crb(c,2)) { goto L_8004646C; } // 800463A8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800463AC
  c->r[5]=0u+0x00000000u; // 800463B0
  c->r[4]=R32(c->r[26]+0x00000000u); // 800463B4
  c->lr=0x800463BCu; f_8031E640(c); // 800463B8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800463BC
  c->r[5]=0u+0x00000000u; // 800463C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800463C4
  c->ctr=c->r[0]; // 800463C8
  cmpu(c,0,c->r[0],0x00000000u); // 800463CC
  if (!crb(c,1)) { goto L_800463F4; } // 800463D0
L_800463D4:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800463D4
  c->r[0]=R32(c->r[4]+c->r[5]); // 800463D8
  cmpu(c,0,c->r[0],c->r[3]); // 800463DC
  if (!crb(c,2)) { goto L_800463EC; } // 800463E0
  c->r[0]=0u+0x00000001u; // 800463E4
  goto L_800463F8; // 800463E8
L_800463EC:;
  c->r[5]=c->r[5]+0x00000010u; // 800463EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800463D4; } // 800463F0
L_800463F4:;
  c->r[0]=0u+0x00000000u; // 800463F4
L_800463F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800463F8
  if (crb(c,2)) { goto L_80046410; } // 800463FC
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046400
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 80046404
  c->lr=0x8004640Cu; f_803647F0(c); // 80046408
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 8004640C
L_80046410:;
  c->r[27]=R32(c->r[13]+0xFFFFA510u); // 80046410
  c->r[3]=c->r[27]|c->r[27]; // 80046414
  c->lr=0x8004641Cu; f_8024B0E0(c); // 80046418
  c->r[4]=R32(c->r[1]+0x00000008u); // 8004641C
  cmpu(c,0,c->r[4],c->r[28]); // 80046420
  if (!crb(c,2)) { goto L_80046434; } // 80046424
  c->r[3]=c->r[27]|c->r[27]; // 80046428
  c->lr=0x80046430u; f_8024B1C0(c); // 8004642C
  goto L_8004646C; // 80046430
L_80046434:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046434
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046438
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004643C
  cmpu(c,0,c->r[0],0x00000001u); // 80046440
  if (!crb(c,2)) { goto L_80046460; } // 80046444
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046448
  cmpu(c,0,c->r[0],0x00000001u); // 8004644C
  if (!crb(c,2)) { goto L_80046460; } // 80046450
  c->r[3]=c->r[27]|c->r[27]; // 80046454
  c->r[4]=c->r[1]+0x00000008u; // 80046458
  c->lr=0x80046460u; f_8031EEDC(c); // 8004645C
L_80046460:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 80046460
  c->r[3]=c->r[27]|c->r[27]; // 80046464
  c->lr=0x8004646Cu; f_8024B1C0(c); // 80046468
L_8004646C:;
  c->r[25]=c->r[25]+0x00000001u; // 8004646C
  c->r[26]=c->r[26]+0x00000010u; // 80046470
  cmps(c,0,(int32_t)c->r[25],5); // 80046474
  if (crb(c,0)) { IRQCHK(c); goto L_800463A0; } // 80046478
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004647C
  cmpu(c,0,c->r[0],c->r[31]); // 80046480
  if (crb(c,2)) { goto L_800464E4; } // 80046484
  c->r[27]=R32(c->r[13]+0xFFFFA510u); // 80046488
  c->r[3]=c->r[27]|c->r[27]; // 8004648C
  c->lr=0x80046494u; f_8024B0E0(c); // 80046490
  c->r[4]=R32(c->r[1]+0x00000008u); // 80046494
  cmpu(c,0,c->r[4],c->r[31]); // 80046498
  if (!crb(c,2)) { goto L_800464AC; } // 8004649C
  c->r[3]=c->r[27]|c->r[27]; // 800464A0
  c->lr=0x800464A8u; f_8024B1C0(c); // 800464A4
  goto L_800464E4; // 800464A8
L_800464AC:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800464AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800464B0
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800464B4
  cmpu(c,0,c->r[0],0x00000001u); // 800464B8
  if (!crb(c,2)) { goto L_800464D8; } // 800464BC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800464C0
  cmpu(c,0,c->r[0],0x00000001u); // 800464C4
  if (!crb(c,2)) { goto L_800464D8; } // 800464C8
  c->r[3]=c->r[27]|c->r[27]; // 800464CC
  c->r[4]=c->r[1]+0x00000008u; // 800464D0
  c->lr=0x800464D8u; f_8031EEDC(c); // 800464D4
L_800464D8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 800464D8
  c->r[3]=c->r[27]|c->r[27]; // 800464DC
  c->lr=0x800464E4u; f_8024B1C0(c); // 800464E0
L_800464E4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800464E4
  cmpu(c,0,c->r[0],c->r[31]); // 800464E8
  if (crb(c,2)) { goto L_8004654C; } // 800464EC
  c->r[27]=R32(c->r[13]+0xFFFFA510u); // 800464F0
  c->r[3]=c->r[27]|c->r[27]; // 800464F4
  c->lr=0x800464FCu; f_8024B0E0(c); // 800464F8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800464FC
  cmpu(c,0,c->r[4],c->r[31]); // 80046500
  if (!crb(c,2)) { goto L_80046514; } // 80046504
  c->r[3]=c->r[27]|c->r[27]; // 80046508
  c->lr=0x80046510u; f_8024B1C0(c); // 8004650C
  goto L_8004654C; // 80046510
L_80046514:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046514
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046518
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004651C
  cmpu(c,0,c->r[0],0x00000001u); // 80046520
  if (!crb(c,2)) { goto L_80046540; } // 80046524
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046528
  cmpu(c,0,c->r[0],0x00000001u); // 8004652C
  if (!crb(c,2)) { goto L_80046540; } // 80046530
  c->r[3]=c->r[27]|c->r[27]; // 80046534
  c->r[4]=c->r[1]+0x0000000Cu; // 80046538
  c->lr=0x80046540u; f_8031EEDC(c); // 8004653C
L_80046540:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80046540
  c->r[3]=c->r[27]|c->r[27]; // 80046544
  c->lr=0x8004654Cu; f_8024B1C0(c); // 80046548
L_8004654C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004654C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80046550
  c->lr=c->r[0]; // 80046554
  c->r[1]=c->r[1]+0x00000030u; // 80046558
  return; // 8004655C
}

// fn_80046560
void f_80046560(Ctx* __restrict c) {
  trace_call(0x80046560u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80046560
  c->r[0]=c->lr; // 80046564
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80046568
  {uint32_t ea=c->r[1]+0x00000098u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004656C
  c->r[30]=0u+0x80380000u; // 80046570
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80046574
  c->r[28]=c->r[3]|c->r[3]; // 80046578
  c->r[30]=c->r[30]+0x00004B30u; // 8004657C
  c->r[29]=0u+0x00000000u; // 80046580
  c->r[27]=0u+0x80370000u; // 80046584
  W32(c->r[1]+0x00000008u,c->r[31]); // 80046588
L_8004658C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8004658C
  cmps(c,0,(int32_t)c->r[0],0); // 80046590
  if (crb(c,2)) { goto L_80046718; } // 80046594
  c->r[5]=R32(c->r[30]+0x00000008u); // 80046598
  c->r[6]=c->r[28]|c->r[28]; // 8004659C
  c->r[3]=c->r[1]+0x00000010u; // 800465A0
  c->r[4]=c->r[27]+0x000043D8u; // 800465A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800465A8
  c->lr=0x800465B0u; f_800C8B00(c); // 800465AC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800465B0
  c->r[4]=c->r[1]+0x00000010u; // 800465B4
  c->r[5]=0u+0x00000000u; // 800465B8
  c->lr=0x800465C0u; f_8031E640(c); // 800465BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800465C0
  c->r[23]=c->r[3]|c->r[3]; // 800465C4
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800465C8
  c->r[25]=0u+0x00000000u; // 800465CC
  c->r[24]=0u+0x00000000u; // 800465D0
  c->r[26]=R32(c->r[3]+0x00000004u); // 800465D4
  c->r[22]=R32(c->r[26]+0x00000008u); // 800465D8
  goto L_80046634; // 800465DC
L_800465E0:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800465E0
  c->r[4]=R32(c->r[3]+c->r[24]); // 800465E4
  cmpu(c,0,c->r[23],c->r[4]); // 800465E8
  if (!crb(c,2)) { goto L_800465F8; } // 800465EC
  c->r[0]=0u+0x00000001u; // 800465F0
  goto L_80046620; // 800465F4
L_800465F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800465F8
  if (crb(c,2)) { goto L_80046608; } // 800465FC
  cmpu(c,0,c->r[23],c->r[31]); // 80046600
  if (!crb(c,2)) { goto L_80046610; } // 80046604
L_80046608:;
  c->r[0]=0u+0x00000000u; // 80046608
  goto L_80046620; // 8004660C
L_80046610:;
  c->r[3]=c->r[23]|c->r[23]; // 80046610
  c->lr=0x80046618u; f_800CA380(c); // 80046614
  c->r[0]=cntlz(c->r[3]); // 80046618
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004661C
L_80046620:;
  cmps(c,0,(int32_t)c->r[0],0); // 80046620
  if (crb(c,2)) { goto L_8004662C; } // 80046624
  goto L_80046640; // 80046628
L_8004662C:;
  c->r[24]=c->r[24]+0x0000001Cu; // 8004662C
  c->r[25]=c->r[25]+0x00000001u; // 80046630
L_80046634:;
  cmpu(c,0,c->r[25],c->r[22]); // 80046634
  if (crb(c,0)) { IRQCHK(c); goto L_800465E0; } // 80046638
  c->r[25]=0u+0xFFFFFFFFu; // 8004663C
L_80046640:;
  c->r[22]=R32(c->r[13]+0xFFFFA510u); // 80046640
  c->r[3]=c->r[22]|c->r[22]; // 80046644
  c->lr=0x8004664Cu; f_8024B0E0(c); // 80046648
  c->r[4]=R32(c->r[1]+0x00000008u); // 8004664C
  cmpu(c,0,c->r[4],c->r[31]); // 80046650
  if (!crb(c,2)) { goto L_80046664; } // 80046654
  c->r[3]=c->r[22]|c->r[22]; // 80046658
  c->lr=0x80046660u; f_8024B1C0(c); // 8004665C
  goto L_8004669C; // 80046660
L_80046664:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046664
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046668
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 8004666C
  cmpu(c,0,c->r[0],0x00000001u); // 80046670
  if (!crb(c,2)) { goto L_80046690; } // 80046674
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046678
  cmpu(c,0,c->r[0],0x00000001u); // 8004667C
  if (!crb(c,2)) { goto L_80046690; } // 80046680
  c->r[3]=c->r[22]|c->r[22]; // 80046684
  c->r[4]=c->r[1]+0x00000008u; // 80046688
  c->lr=0x80046690u; f_8031EEDC(c); // 8004668C
L_80046690:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 80046690
  c->r[3]=c->r[22]|c->r[22]; // 80046694
  c->lr=0x8004669Cu; f_8024B1C0(c); // 80046698
L_8004669C:;
  c->r[0]=c->r[25]+0x00010000u; // 8004669C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800466A0
  if (crb(c,2)) { goto L_80046718; } // 800466A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800466A8
  cmpu(c,0,c->r[0],c->r[31]); // 800466AC
  if (crb(c,2)) { goto L_80046710; } // 800466B0
  c->r[22]=R32(c->r[13]+0xFFFFA510u); // 800466B4
  c->r[3]=c->r[22]|c->r[22]; // 800466B8
  c->lr=0x800466C0u; f_8024B0E0(c); // 800466BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 800466C0
  cmpu(c,0,c->r[4],c->r[31]); // 800466C4
  if (!crb(c,2)) { goto L_800466D8; } // 800466C8
  c->r[3]=c->r[22]|c->r[22]; // 800466CC
  c->lr=0x800466D4u; f_8024B1C0(c); // 800466D0
  goto L_80046710; // 800466D4
L_800466D8:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800466D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800466DC
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800466E0
  cmpu(c,0,c->r[0],0x00000001u); // 800466E4
  if (!crb(c,2)) { goto L_80046704; } // 800466E8
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800466EC
  cmpu(c,0,c->r[0],0x00000001u); // 800466F0
  if (!crb(c,2)) { goto L_80046704; } // 800466F4
  c->r[3]=c->r[22]|c->r[22]; // 800466F8
  c->r[4]=c->r[1]+0x00000008u; // 800466FC
  c->lr=0x80046704u; f_8031EEDC(c); // 80046700
L_80046704:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 80046704
  c->r[3]=c->r[22]|c->r[22]; // 80046708
  c->lr=0x80046710u; f_8024B1C0(c); // 8004670C
L_80046710:;
  c->r[3]=c->r[29]|c->r[29]; // 80046710
  goto L_80046794; // 80046714
L_80046718:;
  c->r[29]=c->r[29]+0x00000001u; // 80046718
  c->r[30]=c->r[30]+0x00000010u; // 8004671C
  cmps(c,0,(int32_t)c->r[29],5); // 80046720
  if (crb(c,0)) { IRQCHK(c); goto L_8004658C; } // 80046724
  c->r[0]=R32(c->r[1]+0x00000008u); // 80046728
  cmpu(c,0,c->r[0],c->r[31]); // 8004672C
  if (crb(c,2)) { goto L_80046790; } // 80046730
  c->r[22]=R32(c->r[13]+0xFFFFA510u); // 80046734
  c->r[3]=c->r[22]|c->r[22]; // 80046738
  c->lr=0x80046740u; f_8024B0E0(c); // 8004673C
  c->r[4]=R32(c->r[1]+0x00000008u); // 80046740
  cmpu(c,0,c->r[4],c->r[31]); // 80046744
  if (!crb(c,2)) { goto L_80046758; } // 80046748
  c->r[3]=c->r[22]|c->r[22]; // 8004674C
  c->lr=0x80046754u; f_8024B1C0(c); // 80046750
  goto L_80046790; // 80046754
L_80046758:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046758
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004675C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80046760
  cmpu(c,0,c->r[0],0x00000001u); // 80046764
  if (!crb(c,2)) { goto L_80046784; } // 80046768
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8004676C
  cmpu(c,0,c->r[0],0x00000001u); // 80046770
  if (!crb(c,2)) { goto L_80046784; } // 80046774
  c->r[3]=c->r[22]|c->r[22]; // 80046778
  c->r[4]=c->r[1]+0x00000008u; // 8004677C
  c->lr=0x80046784u; f_8031EEDC(c); // 80046780
L_80046784:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 80046784
  c->r[3]=c->r[22]|c->r[22]; // 80046788
  c->lr=0x80046790u; f_8024B1C0(c); // 8004678C
L_80046790:;
  c->r[3]=0u+0xFFFFFFFFu; // 80046790
L_80046794:;
  {uint32_t ea=c->r[1]+0x00000098u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80046794
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80046798
  c->lr=c->r[0]; // 8004679C
  c->r[1]=c->r[1]+0x000000C0u; // 800467A0
  return; // 800467A4
}

// fn_800467A8
void f_800467A8(Ctx* __restrict c) {
  trace_call(0x800467A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800467A8
  c->r[0]=c->lr; // 800467AC
  c->r[4]=0u+0x00000850u; // 800467B0
  c->r[5]=0u+0x00000010u; // 800467B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800467B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800467BC
  c->r[31]=c->r[3]|c->r[3]; // 800467C0
  c->r[6]=R32(c->r[13]+0xFFFFA8A0u); // 800467C4
  c->r[3]=R32(c->r[6]+0x00000000u); // 800467C8
  c->lr=0x800467D0u; f_802A89E4(c); // 800467CC
  cmps(c,0,(int32_t)c->r[3],0); // 800467D0
  if (crb(c,2)) { goto L_800467DC; } // 800467D4
  c->lr=0x800467DCu; f_8005EE2C(c); // 800467D8
L_800467DC:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 800467DC
  c->lr=0x800467E4u; f_8005F198(c); // 800467E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 800467E4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800467E8
  W32(c->r[3]+0x00000200u,c->r[0]); // 800467EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 800467F0
  c->r[0]=R32(c->r[31]+0x00000000u); // 800467F4
  W32(c->r[3]+0x00000208u,c->r[0]); // 800467F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 800467FC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80046800
  W32(c->r[3]+0x00000204u,c->r[0]); // 80046804
  c->r[3]=R32(c->r[31]+0x00000004u); // 80046808
  c->r[0]=R32(c->r[31]+0x00000000u); // 8004680C
  W32(c->r[3]+0x0000020Cu,c->r[0]); // 80046810
  c->r[3]=R32(c->r[31]+0x00000004u); // 80046814
  c->r[0]=R32(c->r[31]+0x00000008u); // 80046818
  W32(c->r[3]+0x00000830u,c->r[0]); // 8004681C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80046820
  c->r[0]=R32(c->r[1]+0x00000014u); // 80046824
  c->lr=c->r[0]; // 80046828
  c->r[1]=c->r[1]+0x00000010u; // 8004682C
  return; // 80046830
}

// fn_80046834
void f_80046834(Ctx* __restrict c) {
  trace_call(0x80046834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80046834
  c->r[0]=c->lr; // 80046838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004683C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80046840
  c->r[31]=c->r[3]|c->r[3]; // 80046844
  c->r[0]=R32(c->r[3]+0x00000004u); // 80046848
  cmps(c,0,(int32_t)c->r[0],0); // 8004684C
  if (crb(c,2)) { goto L_80046880; } // 80046850
  c->r[3]=c->r[0]|c->r[0]; // 80046854
  c->lr=0x8004685Cu; f_8005F3BC(c); // 80046858
  c->r[3]=R32(c->r[31]+0x00000004u); // 8004685C
  c->r[4]=0u+0xFFFFFFFFu; // 80046860
  c->lr=0x80046868u; f_8005EF44(c); // 80046864
  c->r[3]=R32(c->r[13]+0xFFFFA8A0u); // 80046868
  c->r[4]=R32(c->r[31]+0x00000004u); // 8004686C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80046870
  c->lr=0x80046878u; f_802A8B4C(c); // 80046874
  c->r[0]=0u+0x00000000u; // 80046878
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004687C
L_80046880:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80046880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80046884
  c->lr=c->r[0]; // 80046888
  c->r[1]=c->r[1]+0x00000010u; // 8004688C
  return; // 80046890
}

// fn_80046894
void f_80046894(Ctx* __restrict c) {
  trace_call(0x80046894u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 80046894
  W32(c->r[3]+0x00000008u,c->r[4]); // 80046898
  cmps(c,0,(int32_t)c->r[5],0); // 8004689C
  if (crb(c,2)) return; // 800468A0
  W32(c->r[5]+0x00000830u,c->r[4]); // 800468A4
  return; // 800468A8
}

// fn_800468AC
void f_800468AC(Ctx* __restrict c) {
  trace_call(0x800468ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800468AC
  c->r[0]=c->lr; // 800468B0
  c->r[4]=0u+0x803D0000u; // 800468B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800468B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800468BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800468C0
  c->r[30]=c->r[3]|c->r[3]; // 800468C4
  c->r[3]=c->r[4]+0x00003F44u; // 800468C8
  c->lr=0x800468D0u; f_800B0928(c); // 800468CC
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800468D0
  cmps(c,0,(int32_t)c->r[0],0); // 800468D4
  if (crb(c,2)) { goto L_800468E4; } // 800468D8
  c->r[3]=c->r[30]|c->r[30]; // 800468DC
  c->lr=0x800468E4u; f_80047098(c); // 800468E0
L_800468E4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800468E4
  cmps(c,0,(int32_t)c->r[3],0); // 800468E8
  if (crb(c,2)) { goto L_800468F4; } // 800468EC
  c->lr=0x800468F4u; f_8005F4EC(c); // 800468F0
L_800468F4:;
  c->r[31]=c->r[30]+0x0000000Cu; // 800468F4
  c->r[30]=0u+0x00000000u; // 800468F8
L_800468FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800468FC
  c->lr=0x80046904u; f_800617D0(c); // 80046900
  c->r[30]=c->r[30]+0x00000001u; // 80046904
  c->r[31]=c->r[31]+0x00000038u; // 80046908
  cmpu(c,0,c->r[30],0x00000004u); // 8004690C
  if (crb(c,0)) { IRQCHK(c); goto L_800468FC; } // 80046910
  c->r[3]=0u+0x803D0000u; // 80046914
  c->r[3]=c->r[3]+0x0000386Cu; // 80046918
  c->lr=0x80046920u; f_800A96B8(c); // 8004691C
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046920
  c->r[12]=R32(c->r[3]+0x00000000u); // 80046924
  c->r[12]=R32(c->r[12]+0x00000008u); // 80046928
  c->ctr=c->r[12]; // 8004692C
  if (true) { c->lr=0x80046934u; dispatch(c,c->ctr); } // 80046930
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046934
  c->lr=0x8004693Cu; f_8036504C(c); // 80046938
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004693C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80046940
  c->r[30]=R32(c->r[1]+0x00000008u); // 80046944
  c->lr=c->r[0]; // 80046948
  c->r[1]=c->r[1]+0x00000010u; // 8004694C
  return; // 80046950
}

// fn_80046954
void f_80046954(Ctx* __restrict c) {
  trace_call(0x80046954u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80046954
  c->r[12]=c->r[1]|c->r[1]; // 80046958
  c->r[11]=addc(c,~c->r[11],0xFFFFFE00u,1); // 8004695C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80046960
  c->r[0]=c->lr; // 80046964
  c->r[3]=0u+0x803D0000u; // 80046968
  W32(c->r[12]+0x00000004u,c->r[0]); // 8004696C
  c->r[3]=c->r[3]+0x0000407Cu; // 80046970
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80046974
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80046978
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8004697C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80046980
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80046984
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80046988
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8004698C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80046990
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 80046994
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 80046998
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8004699C
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 800469A0
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 800469A4
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 800469A8
  {uint32_t ea=c->r[12]+0xFFFFFF80u; WF64(ea,c->f[24]);} // 800469AC
  {uint32_t ea=c->r[12]+0xFFFFFF88u; psq_store(c,24,ea,0,0);} // 800469B0
  {uint32_t ea=c->r[12]+0xFFFFFF70u; WF64(ea,c->f[23]);} // 800469B4
  {uint32_t ea=c->r[12]+0xFFFFFF78u; psq_store(c,23,ea,0,0);} // 800469B8
  {uint32_t ea=c->r[12]+0xFFFFFF60u; WF64(ea,c->f[22]);} // 800469BC
  {uint32_t ea=c->r[12]+0xFFFFFF68u; psq_store(c,22,ea,0,0);} // 800469C0
  {uint32_t ea=c->r[12]+0xFFFFFF50u; WF64(ea,c->f[21]);} // 800469C4
  {uint32_t ea=c->r[12]+0xFFFFFF58u; psq_store(c,21,ea,0,0);} // 800469C8
  {uint32_t ea=c->r[12]+0xFFFFFF40u; WF64(ea,c->f[20]);} // 800469CC
  {uint32_t ea=c->r[12]+0xFFFFFF48u; psq_store(c,20,ea,0,0);} // 800469D0
  {uint32_t ea=c->r[12]+0xFFFFFF30u; WF64(ea,c->f[19]);} // 800469D4
  {uint32_t ea=c->r[12]+0xFFFFFF38u; psq_store(c,19,ea,0,0);} // 800469D8
  W32(c->r[12]+0xFFFFFF2Cu,c->r[31]); // 800469DC
  W32(c->r[12]+0xFFFFFF28u,c->r[30]); // 800469E0
  c->r[30]=c->r[5]|c->r[5]; // 800469E4
  W32(c->r[12]+0xFFFFFF24u,c->r[29]); // 800469E8
  c->r[29]=c->r[4]|c->r[4]; // 800469EC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800469F0
  c->r[31]=R32(c->r[3]+0x00000010u); // 800469F4
  c->r[12]=R32(c->r[31]+0x00000000u); // 800469F8
  c->r[3]=c->r[31]|c->r[31]; // 800469FC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80046A00
  c->ctr=c->r[12]; // 80046A04
  if (true) { c->lr=0x80046A0Cu; dispatch(c,c->ctr); } // 80046A08
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,3,ea,0,0);} // 80046A0C
  c->r[5]=c->r[1]+0x00000040u; // 80046A10
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,6,ea,1,0);} // 80046A14
  c->r[7]=c->r[1]+0x00000070u; // 80046A18
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[4]=t0; c->ps1[4]=t1;} // 80046A1C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 80046A20
  {double t0=-c->f[6], t1=-c->ps1[6]; c->f[9]=t0; c->ps1[9]=t1;} // 80046A24
  {uint32_t ea=c->r[3]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 80046A28
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,4,ea,0,0);} // 80046A2C
  c->r[4]=c->r[1]+0x00000050u; // 80046A30
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[6]);} // 80046A34
  c->r[6]=c->r[1]+0x000000A0u; // 80046A38
  {uint32_t ea=c->r[1]+0x00000040u; c->f[8]=c->ps1[8]=RF32(ea);} // 80046A3C
  c->r[8]=c->r[1]+0x00000020u; // 80046A40
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[7]);} // 80046A44
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,7,ea,1,0);} // 80046A48
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,6,ea,0,0);} // 80046A4C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,9,ea,1,0);} // 80046A50
  {double t0=S(c->f[7]*c->f[8]), t1=S(c->ps1[7]*c->f[8]); c->f[10]=t0; c->ps1[10]=t1;} // 80046A54
  {double t0=S(c->f[6]*c->f[8]), t1=S(c->ps1[6]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 80046A58
  {uint32_t ea=c->r[3]+0x00000010u; c->f[11]=c->ps1[11]=RF32(ea);} // 80046A5C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[13]=c->ps1[13]=RF32(ea);} // 80046A60
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046A64
  {uint32_t ea=c->r[3]+0x00000004u; c->f[19]=c->ps1[19]=RF32(ea);} // 80046A68
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80046A6C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80046A70
  {uint32_t ea=c->r[3]+0x00000028u; c->f[12]=c->ps1[12]=RF32(ea);} // 80046A74
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[12]);} // 80046A78
  {uint32_t ea=c->r[1]+0x00000044u; c->f[8]=c->ps1[8]=RF32(ea);} // 80046A7C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 80046A80
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,1,0);} // 80046A84
  {double t0=S(std::fma(c->f[6],c->f[8],c->f[9])), t1=S(std::fma(c->ps1[6],c->f[8],c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 80046A88
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 80046A8C
  {double t0=S(std::fma(c->f[7],c->f[8],c->f[10])), t1=S(std::fma(c->ps1[7],c->f[8],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 80046A90
  {uint32_t ea=c->r[1]+0x00000048u; c->f[8]=c->ps1[8]=RF32(ea);} // 80046A94
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,6,ea,0,0);} // 80046A98
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[4]);} // 80046A9C
  {double t0=S(std::fma(c->f[6],c->f[8],c->f[9])), t1=S(std::fma(c->ps1[6],c->f[8],c->ps1[9])); c->f[6]=t0; c->ps1[6]=t1;} // 80046AA0
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,7,ea,1,0);} // 80046AA4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[13]);} // 80046AA8
  {double t0=S(std::fma(c->f[7],c->f[8],c->f[10])), t1=S(std::fma(c->ps1[7],c->f[8],c->ps1[10])); c->f[8]=t0; c->ps1[8]=t1;} // 80046AAC
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,12,ea,0,0);} // 80046AB0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[11]);} // 80046AB4
  {uint32_t ea=c->r[7]+0x00000020u; psq_load(c,4,ea,0,0);} // 80046AB8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,11,ea,0,0);} // 80046ABC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,8,ea,1,0);} // 80046AC0
  {double t0=S(c->f[4]*c->f[12]), t1=S(c->ps1[4]*c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 80046AC4
  {double t0=S(c->f[11]*c->f[12]), t1=S(c->ps1[11]*c->ps1[12]); c->f[11]=t0; c->ps1[11]=t1;} // 80046AC8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,7,ea,1,0);} // 80046ACC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,6,ea,0,0);} // 80046AD0
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,10,ea,1,0);} // 80046AD4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 80046AD8
  {double t0=S(std::fma(c->f[7],c->f[10],c->f[11])), t1=S(std::fma(c->ps1[7],c->ps1[10],c->ps1[11])); c->f[3]=t0; c->ps1[3]=t1;} // 80046ADC
  {uint32_t ea=c->r[7]+0x00000028u; psq_load(c,5,ea,1,0);} // 80046AE0
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[19]);} // 80046AE4
  {double t0=S(std::fma(c->f[5],c->f[10],c->f[4])), t1=S(std::fma(c->ps1[5],c->ps1[10],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 80046AE8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[7]=c->ps1[7]=RF32(ea);} // 80046AEC
  {double t0=S(c->f[3]+c->ps1[11]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80046AF0
  {uint32_t ea=c->r[7]+0x00000010u; psq_load(c,9,ea,0,0);} // 80046AF4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[6]=c->ps1[6]=RF32(ea);} // 80046AF8
  {double t0=S(c->f[5]+c->ps1[4]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80046AFC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046B00
  {double t0=S(c->f[9]*c->f[12]), t1=S(c->ps1[9]*c->ps1[12]); c->f[9]=t0; c->ps1[9]=t1;} // 80046B04
  {uint32_t ea=c->r[7]+0x00000018u; psq_load(c,8,ea,1,0);} // 80046B08
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[7]);} // 80046B0C
  {double t0=S(std::fma(c->f[8],c->f[10],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[10],c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 80046B10
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[6]);} // 80046B14
  {double t0=S(c->f[8]+c->ps1[9]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80046B18
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 80046B1C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80046B20
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80046B24
  c->f[3]=c->ps1[3]=S(c->f[2]); // 80046B28
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,0,0);} // 80046B2C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80046B30
  c->r[3]=c->r[1]+0x00000030u; // 80046B34
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 80046B38
  c->f[1]=c->ps1[1]=S(c->f[0]); // 80046B3C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80046B40
  c->r[4]=c->r[1]+0x00000060u; // 80046B44
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,3,ea,1,0);} // 80046B48
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[0]); // 80046B4C
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 80046B50
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80046B54
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80046B58
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,1,ea,1,0);} // 80046B5C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80046B60
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80046B64
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046B68
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80046B6C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80046B70
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046B74
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[3]);} // 80046B78
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 80046B7C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80046B80
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80046B84
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80046B88
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80046B8C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[4]=t0; c->ps1[4]=t1;} // 80046B90
  {double t0=S(c->f[4]+c->ps1[2]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80046B94
  fcmp(c,0,c->f[4],c->f[5]); // 80046B98
  if (crb(c,2)) { goto L_80046BBC; } // 80046B9C
  c->f[3]=frsqrte(c->f[4]); // 80046BA0
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046BA4
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046BA8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 80046BAC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80046BB0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[4],-c->f[1])); // 80046BB4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 80046BB8
L_80046BBC:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 80046BBC
  c->r[3]=c->r[31]|c->r[31]; // 80046BC0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 80046BC4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80046BC8
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->f[4]); c->f[1]=t0; c->ps1[1]=t1;} // 80046BCC
  {double t0=S(c->f[0]*c->f[4]), t1=S(c->ps1[0]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 80046BD0
  c->r[12]=R32(c->r[12]+0x00000010u); // 80046BD4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80046BD8
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80046BDC
  c->ctr=c->r[12]; // 80046BE0
  if (true) { c->lr=0x80046BE8u; dispatch(c,c->ctr); } // 80046BE4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[27]=c->ps1[27]=RF32(ea);} // 80046BE8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 80046BEC
  c->f[2]=c->ps1[2]=fres(c->f[27]); // 80046BF0
  {uint32_t ea=c->r[2]+0xFFFF8708u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046BF4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80046BF8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[19]=c->ps1[19]=RF32(ea);} // 80046BFC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[20]=c->ps1[20]=RF32(ea);} // 80046C00
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 80046C04
  c->f[31]=c->ps1[31]=S(-std::fma(c->f[2],c->f[27],-c->f[1])); // 80046C08
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046C0C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[22]=c->ps1[22]=RF32(ea);} // 80046C10
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[25]); // 80046C14
  {uint32_t ea=c->r[2]+0xFFFF870Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80046C18
  {uint32_t ea=c->r[3]+0x00000014u; c->f[23]=c->ps1[23]=RF32(ea);} // 80046C1C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[24]=c->ps1[24]=RF32(ea);} // 80046C20
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[31]); // 80046C24
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80046C28
  {uint32_t ea=c->r[3]+0x00000020u; c->f[26]=c->ps1[26]=RF32(ea);} // 80046C2C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80046C30
  {uint32_t ea=c->r[3]+0x00000030u; c->f[28]=c->ps1[28]=RF32(ea);} // 80046C34
  {uint32_t ea=c->r[3]+0x00000034u; c->f[29]=c->ps1[29]=RF32(ea);} // 80046C38
  {uint32_t ea=c->r[3]+0x00000038u; c->f[30]=c->ps1[30]=RF32(ea);} // 80046C3C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[13]=c->ps1[13]=RF32(ea);} // 80046C40
  {uint32_t ea=c->r[3]+0x00000040u; c->f[12]=c->ps1[12]=RF32(ea);} // 80046C44
  {uint32_t ea=c->r[3]+0x00000044u; c->f[11]=c->ps1[11]=RF32(ea);} // 80046C48
  {uint32_t ea=c->r[3]+0x00000048u; c->f[10]=c->ps1[10]=RF32(ea);} // 80046C4C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80046C50
  {uint32_t ea=c->r[3]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 80046C54
  {uint32_t ea=c->r[3]+0x00000054u; c->f[7]=c->ps1[7]=RF32(ea);} // 80046C58
  {uint32_t ea=c->r[3]+0x00000058u; c->f[6]=c->ps1[6]=RF32(ea);} // 80046C5C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80046C60
  {uint32_t ea=c->r[3]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 80046C64
  {uint32_t ea=c->r[3]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046C68
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80046C6C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80046C70
  W32(c->r[1]+0x000000B0u,c->r[4]); // 80046C74
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[19]);} // 80046C78
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[20]);} // 80046C7C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[21]);} // 80046C80
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[22]);} // 80046C84
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[23]);} // 80046C88
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[24]);} // 80046C8C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[25]);} // 80046C90
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[26]);} // 80046C94
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[27]);} // 80046C98
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80046C9C
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[28]);} // 80046CA0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[29]);} // 80046CA4
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[30]);} // 80046CA8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[13]);} // 80046CAC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[12]);} // 80046CB0
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[11]);} // 80046CB4
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[10]);} // 80046CB8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[9]);} // 80046CBC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[8]);} // 80046CC0
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[7]);} // 80046CC4
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[6]);} // 80046CC8
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[5]);} // 80046CCC
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[4]);} // 80046CD0
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[3]);} // 80046CD4
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[2]);} // 80046CD8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 80046CDC
  c->lr=0x80046CE4u; f_800D2930(c); // 80046CE0
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046CE4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80046CE8
  {uint32_t ea=c->r[2]+0xFFFF8710u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046CEC
  c->f[1]=std::fabs(c->f[3]); // 80046CF0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[31]); // 80046CF4
  fcmp(c,1,c->f[1],c->f[0]); // 80046CF8
  if (!crb(c,5)) { goto L_80046D18; } // 80046CFC
  c->f[1]=c->ps1[1]=fres(c->f[3]); // 80046D00
  {uint32_t ea=c->r[2]+0xFFFF8708u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046D04
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[3],-c->f[0])); // 80046D08
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80046D0C
  c->f[0]=-c->f[0]; // 80046D10
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80046D14
L_80046D18:;
  c->r[3]=c->r[1]+0x00000060u; // 80046D18
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046D1C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 80046D20
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 80046D24
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->f[4]); c->f[1]=t0; c->ps1[1]=t1;} // 80046D28
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[2]=c->ps1[2]=RF32(ea);} // 80046D2C
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 80046D30
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 80046D34
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046D38
  {uint32_t ea=c->r[1]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 80046D3C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80046D40
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,1,0);} // 80046D44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80046D48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80046D4C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80046D50
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 80046D54
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 80046D58
  c->r[10]=R32(c->r[1]+0x00000000u); // 80046D5C
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80046D60
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80046D64
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80046D68
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80046D6C
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80046D70
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80046D74
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80046D78
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80046D7C
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80046D80
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80046D84
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80046D88
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80046D8C
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 80046D90
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 80046D94
  {uint32_t ea=c->r[10]+0xFFFFFF88u; psq_load(c,24,ea,0,0);} // 80046D98
  {uint32_t ea=c->r[10]+0xFFFFFF80u; c->f[24]=RF64(ea);} // 80046D9C
  {uint32_t ea=c->r[10]+0xFFFFFF78u; psq_load(c,23,ea,0,0);} // 80046DA0
  {uint32_t ea=c->r[10]+0xFFFFFF70u; c->f[23]=RF64(ea);} // 80046DA4
  {uint32_t ea=c->r[10]+0xFFFFFF68u; psq_load(c,22,ea,0,0);} // 80046DA8
  {uint32_t ea=c->r[10]+0xFFFFFF60u; c->f[22]=RF64(ea);} // 80046DAC
  {uint32_t ea=c->r[10]+0xFFFFFF58u; psq_load(c,21,ea,0,0);} // 80046DB0
  {uint32_t ea=c->r[10]+0xFFFFFF50u; c->f[21]=RF64(ea);} // 80046DB4
  {uint32_t ea=c->r[10]+0xFFFFFF48u; psq_load(c,20,ea,0,0);} // 80046DB8
  {uint32_t ea=c->r[10]+0xFFFFFF40u; c->f[20]=RF64(ea);} // 80046DBC
  {uint32_t ea=c->r[10]+0xFFFFFF38u; psq_load(c,19,ea,0,0);} // 80046DC0
  {uint32_t ea=c->r[10]+0xFFFFFF30u; c->f[19]=RF64(ea);} // 80046DC4
  c->r[31]=R32(c->r[10]+0xFFFFFF2Cu); // 80046DC8
  c->r[30]=R32(c->r[10]+0xFFFFFF28u); // 80046DCC
  c->r[29]=R32(c->r[10]+0xFFFFFF24u); // 80046DD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80046DD4
  c->lr=c->r[0]; // 80046DD8
  c->r[1]=c->r[10]|c->r[10]; // 80046DDC
  return; // 80046DE0
}

// fn_80046DE4
void f_80046DE4(Ctx* __restrict c) {
  trace_call(0x80046DE4u);
  {uint32_t ea=c->r[2]+0xFFFF8718u; c->f[5]=c->ps1[5]=RF32(ea);} // 80046DE4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80046DE8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80046DEC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80046DF0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80046DF4
  W32(c->r[3]+0x000000ECu,c->r[4]); // 80046DF8
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 80046DFC
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[5]);} // 80046E00
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[4]);} // 80046E04
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[3]);} // 80046E08
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[2]);} // 80046E0C
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 80046E10
  return; // 80046E14
}

// fn_80046E18
void f_80046E18(Ctx* __restrict c) {
  trace_call(0x80046E18u);
  c->r[0]=R32(c->r[3]+0x000000ECu); // 80046E18
  cmps(c,0,(int32_t)c->r[0],1); // 80046E1C
  if (crb(c,2)) { goto L_80046E30; } // 80046E20
  cmps(c,0,(int32_t)c->r[0],2); // 80046E24
  if (crb(c,2)) { goto L_80046E4C; } // 80046E28
  return; // 80046E2C
L_80046E30:;
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046E30
  c->r[0]=0u+0x00000002u; // 80046E34
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046E38
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80046E3C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80046E40
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 80046E44
  return; // 80046E48
L_80046E4C:;
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80046E4C
  c->r[0]=0u+0x00000001u; // 80046E50
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046E54
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80046E58
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80046E5C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 80046E60
  return; // 80046E64
}

// fn_80046E68
void f_80046E68(Ctx* __restrict c) {
  trace_call(0x80046E68u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80046E68
  c->r[12]=c->r[1]|c->r[1]; // 80046E6C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 80046E70
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80046E74
  c->r[0]=c->lr; // 80046E78
  c->r[4]=0u+0x80370000u; // 80046E7C
  c->r[5]=0u+0x00000000u; // 80046E80
  W32(c->r[12]+0x00000004u,c->r[0]); // 80046E84
  c->r[4]=c->r[4]+0x000043D8u; // 80046E88
  c->r[4]=c->r[4]+0x00000005u; // 80046E8C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80046E90
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80046E94
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80046E98
  c->r[29]=R32(c->r[2]+0xFFFFBF18u); // 80046E9C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 80046EA0
  c->r[28]=c->r[3]|c->r[3]; // 80046EA4
  W32(c->r[1]+0x00000010u,c->r[29]); // 80046EA8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80046EAC
  c->lr=0x80046EB4u; f_8031E640(c); // 80046EB0
  W32(c->r[1]+0x00000010u,c->r[3]); // 80046EB4
  c->r[4]=0u+0x00000140u; // 80046EB8
  c->r[3]=R32(c->r[13]+0xFFFFA8A0u); // 80046EBC
  c->r[5]=0u+0x00000010u; // 80046EC0
  c->r[31]=R32(c->r[13]+0xFFFFA8A8u); // 80046EC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80046EC8
  c->lr=0x80046ED0u; f_802A89E4(c); // 80046ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80046ED0
  c->r[30]=c->r[3]|c->r[3]; // 80046ED4
  if (crb(c,2)) { goto L_80046EE4; } // 80046ED8
  c->lr=0x80046EE0u; f_803669F4(c); // 80046EDC
  c->r[30]=c->r[3]|c->r[3]; // 80046EE0
L_80046EE4:;
  c->r[3]=c->r[31]|c->r[31]; // 80046EE4
  c->r[4]=c->r[30]|c->r[30]; // 80046EE8
  c->r[5]=0u+0x00000000u; // 80046EEC
  c->lr=0x80046EF4u; f_80364FDC(c); // 80046EF0
  c->r[4]=0u+0x80370000u; // 80046EF4
  W32(c->r[28]+0x00000110u,c->r[30]); // 80046EF8
  c->r[4]=c->r[4]+0x000043D8u; // 80046EFC
  c->r[3]=c->r[30]|c->r[30]; // 80046F00
  c->r[4]=c->r[4]+0x0000004Cu; // 80046F04
  c->lr=0x80046F0Cu; f_80366D64(c); // 80046F08
  c->r[3]=R32(c->r[28]+0x00000110u); // 80046F0C
  c->r[4]=c->r[1]+0x00000010u; // 80046F10
  c->lr=0x80046F18u; f_80366B70(c); // 80046F14
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046F18
  c->r[4]=c->r[1]+0x00000020u; // 80046F1C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80046F20
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80046F24
  c->r[3]=R32(c->r[28]+0x00000110u); // 80046F28
  c->lr=0x80046F30u; f_80365718(c); // 80046F2C
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046F30
  c->r[4]=c->r[1]+0x00000018u; // 80046F34
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80046F38
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80046F3C
  c->r[3]=R32(c->r[28]+0x00000110u); // 80046F40
  c->r[12]=R32(c->r[3]+0x00000010u); // 80046F44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80046F48
  c->ctr=c->r[12]; // 80046F4C
  if (true) { c->lr=0x80046F54u; dispatch(c,c->ctr); } // 80046F50
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[0]=c->ps1[0]=RF32(ea);} // 80046F54
  c->r[4]=c->r[1]+0x00000030u; // 80046F58
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80046F5C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80046F60
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80046F64
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80046F68
  c->r[3]=R32(c->r[28]+0x00000110u); // 80046F6C
  c->lr=0x80046F74u; f_80365844(c); // 80046F70
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80046F74
  c->r[5]=0u+0x00000009u; // 80046F78
  c->r[4]=R32(c->r[28]+0x00000110u); // 80046F7C
  c->lr=0x80046F84u; f_80364FDC(c); // 80046F80
  c->r[0]=R32(c->r[1]+0x00000010u); // 80046F84
  cmpu(c,0,c->r[0],c->r[29]); // 80046F88
  if (crb(c,2)) { goto L_80046FEC; } // 80046F8C
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80046F90
  c->r[3]=c->r[30]|c->r[30]; // 80046F94
  c->lr=0x80046F9Cu; f_8024B0E0(c); // 80046F98
  c->r[4]=R32(c->r[1]+0x00000010u); // 80046F9C
  cmpu(c,0,c->r[4],c->r[29]); // 80046FA0
  if (!crb(c,2)) { goto L_80046FB4; } // 80046FA4
  c->r[3]=c->r[30]|c->r[30]; // 80046FA8
  c->lr=0x80046FB0u; f_8024B1C0(c); // 80046FAC
  goto L_80046FEC; // 80046FB0
L_80046FB4:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80046FB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80046FB8
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80046FBC
  cmpu(c,0,c->r[0],0x00000001u); // 80046FC0
  if (!crb(c,2)) { goto L_80046FE0; } // 80046FC4
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80046FC8
  cmpu(c,0,c->r[0],0x00000001u); // 80046FCC
  if (!crb(c,2)) { goto L_80046FE0; } // 80046FD0
  c->r[3]=c->r[30]|c->r[30]; // 80046FD4
  c->r[4]=c->r[1]+0x00000010u; // 80046FD8
  c->lr=0x80046FE0u; f_8031EEDC(c); // 80046FDC
L_80046FE0:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 80046FE0
  c->r[3]=c->r[30]|c->r[30]; // 80046FE4
  c->lr=0x80046FECu; f_8024B1C0(c); // 80046FE8
L_80046FEC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80046FEC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80046FF0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80046FF4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80046FF8
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80046FFC
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 80047000
  c->lr=c->r[0]; // 80047004
  c->r[1]=c->r[10]|c->r[10]; // 80047008
  return; // 8004700C
}

// fn_80047010
void f_80047010(Ctx* __restrict c) {
  trace_call(0x80047010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047010
  c->r[0]=c->lr; // 80047014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80047018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004701C
  c->r[31]=c->r[3]|c->r[3]; // 80047020
  c->r[4]=R32(c->r[3]+0x00000110u); // 80047024
  cmps(c,0,(int32_t)c->r[4],0); // 80047028
  if (crb(c,2)) { goto L_80047038; } // 8004702C
  c->r[3]=R32(c->r[13]+0xFFFFA8A8u); // 80047030
  c->lr=0x80047038u; f_8036412C(c); // 80047034
L_80047038:;
  c->r[0]=0u+0x00000000u; // 80047038
  W32(c->r[31]+0x00000110u,c->r[0]); // 8004703C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80047040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80047044
  c->lr=c->r[0]; // 80047048
  c->r[1]=c->r[1]+0x00000010u; // 8004704C
  return; // 80047050
}

// fn_80047054
void f_80047054(Ctx* __restrict c) {
  trace_call(0x80047054u);
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[1]=c->ps1[1]=RF32(ea);} // 80047054
  c->r[0]=0u+0x00000000u; // 80047058
  {uint32_t ea=c->r[2]+0xFFFF8718u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004705C
  c->r[5]=0u+0x804B0000u; // 80047060
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80047064
  c->r[4]=c->r[5]+0xFFFFC750u; // 80047068
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 8004706C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 80047070
  {uint32_t ea=c->r[5]+0xFFFFC750u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047074
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 80047078
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004707C
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 80047080
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047084
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 80047088
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004708C
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 80047090
  return; // 80047094
}

// fn_80047098
void f_80047098(Ctx* __restrict c) {
  trace_call(0x80047098u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80047098
  c->r[12]=c->r[1]|c->r[1]; // 8004709C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 800470A0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800470A4
  c->r[0]=c->lr; // 800470A8
  W32(c->r[12]+0x00000004u,c->r[0]); // 800470AC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800470B0
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800470B4
  c->r[30]=c->r[3]|c->r[3]; // 800470B8
  {uint32_t ea=c->r[3]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800470BC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800470C0
  {uint32_t ea=c->r[3]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800470C4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800470C8
  {uint32_t ea=c->r[3]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800470CC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800470D0
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800470D4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800470D8
  c->r[4]=R32(c->r[3]+0x00000000u); // 800470DC
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800470E0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800470E4
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800470E8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800470EC
  c->r[31]=R32(c->r[3]+0x000000ECu); // 800470F0
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[1]);} // 800470F4
  fcmp(c,0,c->f[1],c->f[0]); // 800470F8
  if (!crb(c,1)) { goto L_8004710C; } // 800470FC
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[1]=c->ps1[1]=RF32(ea);} // 80047100
  c->r[31]=0u+0x00000000u; // 80047104
  goto L_80047110; // 80047108
L_8004710C:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8004710C
L_80047110:;
  c->r[0]=R32(c->r[3]+0x000000ECu); // 80047110
  cmps(c,0,(int32_t)c->r[0],1); // 80047114
  if (!crb(c,2)) { goto L_80047124; } // 80047118
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004711C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80047120
L_80047124:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80047124
  c->r[4]=c->r[1]+0x00000010u; // 80047128
  c->r[3]=R32(c->r[3]+0x00000110u); // 8004712C
  c->lr=0x80047134u; f_80365844(c); // 80047130
  W32(c->r[30]+0x000000ECu,c->r[31]); // 80047134
  c->r[10]=R32(c->r[1]+0x00000000u); // 80047138
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8004713C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80047140
  c->r[0]=R32(c->r[10]+0x00000004u); // 80047144
  c->lr=c->r[0]; // 80047148
  c->r[1]=c->r[10]|c->r[10]; // 8004714C
  return; // 80047150
}

// fn_80047154
void f_80047154(Ctx* __restrict c) {
  trace_call(0x80047154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047154
  c->r[0]=c->lr; // 80047158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004715C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80047160
  c->r[31]=c->r[3]+0x0000000Cu; // 80047164
  W32(c->r[1]+0x00000008u,c->r[30]); // 80047168
  c->r[30]=0u+0x00000000u; // 8004716C
L_80047170:;
  c->r[3]=c->r[31]|c->r[31]; // 80047170
  c->r[4]=0u+0x00000000u; // 80047174
  c->lr=0x8004717Cu; f_800615A4(c); // 80047178
  c->r[30]=c->r[30]+0x00000001u; // 8004717C
  c->r[31]=c->r[31]+0x00000038u; // 80047180
  cmpu(c,0,c->r[30],0x00000004u); // 80047184
  if (crb(c,0)) { IRQCHK(c); goto L_80047170; } // 80047188
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004718C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80047190
  c->r[30]=R32(c->r[1]+0x00000008u); // 80047194
  c->lr=c->r[0]; // 80047198
  c->r[1]=c->r[1]+0x00000010u; // 8004719C
  return; // 800471A0
}

// fn_800471A4
void f_800471A4(Ctx* __restrict c) {
  trace_call(0x800471A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800471A4
  c->r[0]=c->lr; // 800471A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800471AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800471B0
  c->r[31]=c->r[3]+0x0000000Cu; // 800471B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800471B8
  c->r[30]=0u+0x00000000u; // 800471BC
L_800471C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800471C0
  c->r[4]=0u+0x00000001u; // 800471C4
  c->lr=0x800471CCu; f_800615A4(c); // 800471C8
  c->r[30]=c->r[30]+0x00000001u; // 800471CC
  c->r[31]=c->r[31]+0x00000038u; // 800471D0
  cmpu(c,0,c->r[30],0x00000004u); // 800471D4
  if (crb(c,0)) { IRQCHK(c); goto L_800471C0; } // 800471D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800471DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800471E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800471E4
  c->lr=c->r[0]; // 800471E8
  c->r[1]=c->r[1]+0x00000010u; // 800471EC
  return; // 800471F0
}

// fn_800471F4
void f_800471F4(Ctx* __restrict c) {
  trace_call(0x800471F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800471F4
  c->r[0]=c->lr; // 800471F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800471FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80047200
  c->r[31]=c->r[3]+0x0000000Cu; // 80047204
  W32(c->r[1]+0x00000018u,c->r[30]); // 80047208
  c->r[30]=0u+0x00000000u; // 8004720C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80047210
  c->r[29]=c->r[4]|c->r[4]; // 80047214
L_80047218:;
  c->r[3]=c->r[31]|c->r[31]; // 80047218
  c->r[4]=c->r[29]|c->r[29]; // 8004721C
  c->lr=0x80047224u; f_8006159C(c); // 80047220
  c->r[30]=c->r[30]+0x00000001u; // 80047224
  c->r[31]=c->r[31]+0x00000038u; // 80047228
  cmpu(c,0,c->r[30],0x00000004u); // 8004722C
  if (crb(c,0)) { IRQCHK(c); goto L_80047218; } // 80047230
  c->r[0]=R32(c->r[1]+0x00000024u); // 80047234
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80047238
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004723C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80047240
  c->lr=c->r[0]; // 80047244
  c->r[1]=c->r[1]+0x00000020u; // 80047248
  return; // 8004724C
}

// fn_80047250
void f_80047250(Ctx* __restrict c) {
  trace_call(0x80047250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047250
  c->r[0]=c->lr; // 80047254
  cmps(c,0,(int32_t)c->r[4],0); // 80047258
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004725C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80047260
  W32(c->r[1]+0x00000018u,c->r[30]); // 80047264
  W32(c->r[1]+0x00000014u,c->r[29]); // 80047268
  c->r[29]=c->r[3]|c->r[3]; // 8004726C
  if (!crb(c,2)) { goto L_800472A4; } // 80047270
  c->r[30]=0u+0x00000000u; // 80047274
  c->r[31]=0u+0x00000000u; // 80047278
L_8004727C:;
  c->r[0]=R32(c->r[13]+0xFFFFA8A8u); // 8004727C
  c->r[3]=c->r[29]|c->r[29]; // 80047280
  c->r[4]=c->r[0]+c->r[31]; // 80047284
  c->r[4]=R32(c->r[4]+0x00000070u); // 80047288
  c->lr=0x80047290u; f_80047250(c); // 8004728C
  c->r[30]=c->r[30]+0x00000001u; // 80047290
  c->r[31]=c->r[31]+0x00000004u; // 80047294
  cmpu(c,0,c->r[30],0x0000000Au); // 80047298
  if (crb(c,0)) { IRQCHK(c); goto L_8004727C; } // 8004729C
  goto L_800472D8; // 800472A0
L_800472A4:;
  c->r[30]=R32(c->r[4]+0x00000004u); // 800472A4
  c->r[31]=0u+0x00000000u; // 800472A8
  goto L_800472D0; // 800472AC
L_800472B0:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800472B0
  cmpu(c,0,c->r[0],0x00000003u); // 800472B4
  if (!crb(c,2)) { goto L_800472C0; } // 800472B8
  W32(c->r[30]+0x00000178u,c->r[31]); // 800472BC
L_800472C0:;
  c->r[3]=c->r[29]|c->r[29]; // 800472C0
  c->r[4]=c->r[30]|c->r[30]; // 800472C4
  c->lr=0x800472CCu; f_80047250(c); // 800472C8
  c->r[30]=R32(c->r[30]+0x00000008u); // 800472CC
L_800472D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800472D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800472B0; } // 800472D4
L_800472D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800472D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800472DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800472E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800472E4
  c->lr=c->r[0]; // 800472E8
  c->r[1]=c->r[1]+0x00000020u; // 800472EC
  return; // 800472F0
}

// fn_800472F4
void f_800472F4(Ctx* __restrict c) {
  trace_call(0x800472F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800472F4
  c->r[0]=c->lr; // 800472F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800472FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80047300
  c->r[31]=c->r[3]|c->r[3]; // 80047304
  c->lr=0x8004730Cu; f_8030B29C(c); // 80047308
  c->r[4]=0u+0x80380000u; // 8004730C
  c->r[3]=c->r[31]|c->r[31]; // 80047310
  c->r[4]=c->r[4]+0x00004CA0u; // 80047314
  W32(c->r[31]+0x00000014u,c->r[4]); // 80047318
  c->r[4]=0u+0x00000002u; // 8004731C
  c->r[5]=0u+0x00000000u; // 80047320
  c->lr=0x80047328u; f_8030FFA0(c); // 80047324
  c->r[5]=R32(c->r[13]+0xFFFF9548u); // 80047328
  c->r[3]=c->r[31]|c->r[31]; // 8004732C
  c->r[4]=0u+0x00000007u; // 80047330
  c->lr=0x80047338u; f_8030FFA0(c); // 80047334
  c->r[0]=0u+0x00000075u; // 80047338
  W32(c->r[31]+0x00000078u,c->r[0]); // 8004733C
  c->r[3]=c->r[31]|c->r[31]; // 80047340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80047344
  c->r[0]=R32(c->r[1]+0x00000014u); // 80047348
  c->lr=c->r[0]; // 8004734C
  c->r[1]=c->r[1]+0x00000010u; // 80047350
  return; // 80047354
}

// fn_80047358
void f_80047358(Ctx* __restrict c) {
  trace_call(0x80047358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047358
  c->r[0]=c->lr; // 8004735C
  c->r[6]=0u+0x80050000u; // 80047360
  c->r[4]=0u+0x00000004u; // 80047364
  W32(c->r[1]+0x00000014u,c->r[0]); // 80047368
  c->r[6]=c->r[6]+0xFFFF8050u; // 8004736C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80047370
  c->r[31]=0u+0x80370000u; // 80047374
  c->r[5]=c->r[31]+0x00004438u; // 80047378
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004737C
  c->r[30]=c->r[3]|c->r[3]; // 80047380
  c->lr=0x80047388u; f_80337FC8(c); // 80047384
  c->r[31]=c->r[31]+0x00004438u; // 80047388
  c->r[6]=0u+0x80050000u; // 8004738C
  c->r[3]=c->r[30]|c->r[30]; // 80047390
  c->r[4]=0u+0x00000004u; // 80047394
  c->r[5]=c->r[31]+0x00000016u; // 80047398
  c->r[6]=c->r[6]+0xFFFF8850u; // 8004739C
  c->lr=0x800473A4u; f_80337FC8(c); // 800473A0
  c->r[6]=0u+0x80050000u; // 800473A4
  c->r[3]=c->r[30]|c->r[30]; // 800473A8
  c->r[5]=c->r[31]+0x0000002Au; // 800473AC
  c->r[4]=0u+0x00000004u; // 800473B0
  c->r[6]=c->r[6]+0xFFFF88D0u; // 800473B4
  c->lr=0x800473BCu; f_80337FC8(c); // 800473B8
  c->r[6]=0u+0x80050000u; // 800473BC
  c->r[3]=c->r[30]|c->r[30]; // 800473C0
  c->r[5]=c->r[31]+0x00000045u; // 800473C4
  c->r[4]=0u+0x00000004u; // 800473C8
  c->r[6]=c->r[6]+0xFFFF8950u; // 800473CC
  c->lr=0x800473D4u; f_80337FC8(c); // 800473D0
  c->lr=0x800473D8u; f_800480B4(c); // 800473D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800473D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800473DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800473E0
  c->lr=c->r[0]; // 800473E4
  c->r[1]=c->r[1]+0x00000010u; // 800473E8
  return; // 800473EC
}

// fn_800473F0
void f_800473F0(Ctx* __restrict c) {
  trace_call(0x800473F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800473F0
  c->r[0]=c->lr; // 800473F4
  c->r[4]=0u+0x00000004u; // 800473F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800473FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80047400
  c->r[31]=0u+0x80370000u; // 80047404
  c->r[5]=c->r[31]+0x00004438u; // 80047408
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004740C
  c->r[30]=c->r[3]|c->r[3]; // 80047410
  c->lr=0x80047418u; f_803386E0(c); // 80047414
  c->r[31]=c->r[31]+0x00004438u; // 80047418
  c->r[3]=c->r[30]|c->r[30]; // 8004741C
  c->r[5]=c->r[31]+0x00000016u; // 80047420
  c->r[4]=0u+0x00000004u; // 80047424
  c->lr=0x8004742Cu; f_803386E0(c); // 80047428
  c->r[3]=c->r[30]|c->r[30]; // 8004742C
  c->r[5]=c->r[31]+0x0000002Au; // 80047430
  c->r[4]=0u+0x00000004u; // 80047434
  c->lr=0x8004743Cu; f_803386E0(c); // 80047438
  c->r[3]=c->r[30]|c->r[30]; // 8004743C
  c->r[5]=c->r[31]+0x00000045u; // 80047440
  c->r[4]=0u+0x00000004u; // 80047444
  c->lr=0x8004744Cu; f_803386E0(c); // 80047448
  c->lr=0x80047450u; f_800481C8(c); // 8004744C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80047450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80047454
  c->r[30]=R32(c->r[1]+0x00000008u); // 80047458
  c->lr=c->r[0]; // 8004745C
  c->r[1]=c->r[1]+0x00000010u; // 80047460
  return; // 80047464
}

// fn_80047468
void f_80047468(Ctx* __restrict c) {
  trace_call(0x80047468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80047468
  c->r[0]=c->lr; // 8004746C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80047470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80047474
  c->r[31]=c->r[3]|c->r[3]; // 80047478
  c->lr=0x80047480u; f_800472F4(c); // 8004747C
  c->r[3]=0u+0x80380000u; // 80047480
  c->r[0]=0u+0x00000000u; // 80047484
  c->r[3]=c->r[3]+0x00004C58u; // 80047488
  W32(c->r[31]+0x00000014u,c->r[3]); // 8004748C
  c->r[3]=c->r[31]|c->r[31]; // 80047490
  c->r[4]=0u+0x00000000u; // 80047494
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80047498
  c->r[5]=0u+0x00000001u; // 8004749C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800474A0
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800474A4
  c->lr=0x800474ACu; f_8030FFA0(c); // 800474A8
  c->r[3]=c->r[31]|c->r[31]; // 800474AC
  c->r[4]=0u+0x00000003u; // 800474B0
  c->r[5]=0u+0x00000000u; // 800474B4
  c->lr=0x800474BCu; f_8030FFA0(c); // 800474B8
  c->r[3]=c->r[31]|c->r[31]; // 800474BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800474C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800474C4
  c->lr=c->r[0]; // 800474C8
  c->r[1]=c->r[1]+0x00000010u; // 800474CC
  return; // 800474D0
}

// fn_800474D4
void f_800474D4(Ctx* __restrict c) {
  trace_call(0x800474D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800474D4
  c->r[0]=c->lr; // 800474D8
  cmps(c,0,(int32_t)c->r[3],0); // 800474DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800474E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800474E4
  c->r[31]=c->r[4]|c->r[4]; // 800474E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800474EC
  c->r[30]=c->r[3]|c->r[3]; // 800474F0
  if (crb(c,2)) { goto L_800475B4; } // 800474F4
  c->r[4]=0u+0x00000000u; // 800474F8
  c->lr=0x80047500u; f_8030BAE0(c); // 800474FC
  cmps(c,0,(int32_t)c->r[31],0); // 80047500
  if (!crb(c,1)) { goto L_800475B4; } // 80047504
  c->lr=0x8004750Cu; f_8028B53C(c); // 80047508
  c->r[31]=0u+0x804B0000u; // 8004750C
  c->r[31]=c->r[31]+0xFFFFC800u; // 80047510
  c->r[3]=c->r[31]|c->r[31]; // 80047514
  c->lr=0x8004751Cu; f_8024B0E0(c); // 80047518
  cmps(c,0,(int32_t)c->r[30],0); // 8004751C
  if (!crb(c,2)) { goto L_80047530; } // 80047520
  c->r[3]=c->r[31]|c->r[31]; // 80047524
  c->lr=0x8004752Cu; f_8024B1C0(c); // 80047528
  goto L_800475B4; // 8004752C
L_80047530:;
  c->r[0]=0u+0x80000000u; // 80047530
  cmpu(c,0,c->r[30],c->r[0]); // 80047534
  if (crb(c,0)) { goto L_80047554; } // 80047538
  c->r[3]=0u+0x81800000u; // 8004753C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80047540
  cmpu(c,0,c->r[30],c->r[0]); // 80047544
  if (!crb(c,0)) { goto L_80047554; } // 80047548
  c->r[4]=0u+0x00000000u; // 8004754C
  goto L_80047594; // 80047550
L_80047554:;
  c->r[0]=0u+0x90000000u; // 80047554
  cmpu(c,0,c->r[30],c->r[0]); // 80047558
  if (crb(c,0)) { goto L_80047574; } // 8004755C
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80047560
  cmpu(c,0,c->r[30],c->r[0]); // 80047564
  if (!crb(c,0)) { goto L_80047574; } // 80047568
  c->r[4]=0u+0x00000001u; // 8004756C
  goto L_80047594; // 80047570
L_80047574:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80047574
  cmpu(c,0,c->r[30],c->r[0]); // 80047578
  if (crb(c,0)) { goto L_80047594; } // 8004757C
  c->r[3]=0u+0x98000000u; // 80047580
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80047584
  cmpu(c,0,c->r[30],c->r[0]); // 80047588
  if (!crb(c,0)) { goto L_80047594; } // 8004758C
  c->r[4]=0u+0x00000002u; // 80047590
L_80047594:;
  c->r[3]=0u+0x804B0000u; // 80047594
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80047598
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 8004759C
  c->r[4]=c->r[30]|c->r[30]; // 800475A0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800475A4
  c->lr=0x800475ACu; f_8023B550(c); // 800475A8
  c->r[3]=c->r[31]|c->r[31]; // 800475AC
  c->lr=0x800475B4u; f_8024B1C0(c); // 800475B0
L_800475B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800475B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800475B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800475BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800475C0
  c->lr=c->r[0]; // 800475C4
  c->r[1]=c->r[1]+0x00000010u; // 800475C8
  return; // 800475CC
}

// fn_800475D0
void f_800475D0(Ctx* __restrict c) {
  trace_call(0x800475D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800475D0
  c->r[0]=c->lr; // 800475D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800475D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800475DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800475E0
  c->r[30]=c->r[3]|c->r[3]; // 800475E4
  c->r[4]=R32(c->r[3]+0x00000030u); // 800475E8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800475EC
  c->r[31]=R32(c->r[3]+0x000000D4u); // 800475F0
  cmps(c,0,(int32_t)c->r[31],0); // 800475F4
  if (crb(c,2)) { goto L_80047890; } // 800475F8
  c->r[0]=R32(c->r[31]+0x00000024u); // 800475FC
  cmps(c,0,(int32_t)c->r[0],4); // 80047600
  if (!crb(c,2)) { goto L_80047890; } // 80047604
  c->r[3]=R32(c->r[31]+0x000000A8u); // 80047608
  cmps(c,0,(int32_t)c->r[3],0); // 8004760C
  if (crb(c,2)) { goto L_80047890; } // 80047610
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80047614
  cmps(c,0,(int32_t)c->r[3],0); // 80047618
  if (crb(c,2)) { goto L_80047890; } // 8004761C
  c->r[5]=R32(c->r[3]+0x00000008u); // 80047620
  cmps(c,0,(int32_t)c->r[5],0); // 80047624
  if (crb(c,2)) { goto L_80047890; } // 80047628
  c->r[0]=R32(c->r[5]+0x00000004u); // 8004762C
  c->r[3]=0u+0x803C0000u; // 80047630
  c->r[7]=R32(c->r[3]+0x00002F00u); // 80047634
  c->r[4]=0u+0x00000000u; // 80047638
  c->r[6]=0u+0x00000000u; // 8004763C
  c->ctr=c->r[0]; // 80047640
  cmpu(c,0,c->r[0],0x00000000u); // 80047644
  if (!crb(c,1)) { goto L_80047670; } // 80047648
L_8004764C:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 8004764C
  c->r[3]=c->r[0]+c->r[6]; // 80047650
  c->r[0]=R32(c->r[3]+0x00000008u); // 80047654
  cmpu(c,0,c->r[0],c->r[7]); // 80047658
  if (!crb(c,2)) { goto L_80047664; } // 8004765C
  goto L_80047674; // 80047660
L_80047664:;
  c->r[6]=c->r[6]+0x000000C0u; // 80047664
  c->r[4]=c->r[4]+0x00000001u; // 80047668
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004764C; } // 8004766C
L_80047670:;
  c->r[4]=0u+0xFFFFFFFFu; // 80047670
L_80047674:;
  c->r[0]=c->r[4]+0x00010000u; // 80047674
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80047678
  if (crb(c,2)) { goto L_80047890; } // 8004767C
  c->r[3]=c->r[30]|c->r[30]; // 80047680
  c->r[4]=c->r[13]+0xFFFF9540u; // 80047684
  c->lr=0x8004768Cu; f_8030BE60(c); // 80047688
  c->r[3]=R32(c->r[3]+0x00000018u); // 8004768C
  c->r[0]=0u+0x00000000u; // 80047690
  c->r[10]=R32(c->r[13]+0xFFFF9544u); // 80047694
  c->r[4]=R32(c->r[3]+0x00000000u); // 80047698
  c->r[9]=R32(c->r[3]+0x00000004u); // 8004769C
  c->r[6]=R32(c->r[4]+0x00000000u); // 800476A0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800476A4
  c->r[7]=c->r[9]|c->r[9]; // 800476A8
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800476AC
  c->r[5]=c->r[5]-c->r[6]; // 800476B0
  c->r[5]=sraw(c,c->r[5],2); // 800476B4
  c->r[6]=addc(c,c->r[5],0,c->xer_ca); // 800476B8
  c->r[5]=c->r[6]-c->r[9]; // 800476BC
  c->ctr=c->r[5]; // 800476C0
  cmpu(c,0,c->r[9],c->r[6]); // 800476C4
  if (!crb(c,0)) { goto L_80047708; } // 800476C8
L_800476CC:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 800476CC
  c->r[5]=R32(c->r[5]+0x00000000u); // 800476D0
  c->r[5]=R32(c->r[5]+c->r[8]); // 800476D4
  c->r[5]=R32(c->r[5]+0x00000014u); // 800476D8
  cmpu(c,0,c->r[10],c->r[5]); // 800476DC
  if (!crb(c,2)) { goto L_800476FC; } // 800476E0
  W32(c->r[3]+0x00000004u,c->r[7]); // 800476E4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800476E8
  c->r[4]=R32(c->r[3]+0x00000000u); // 800476EC
  c->r[6]=R32(c->r[4]+0x00000000u); // 800476F0
  c->r[5]=R32(c->r[6]+c->r[5]); // 800476F4
  goto L_8004775C; // 800476F8
L_800476FC:;
  c->r[8]=c->r[8]+0x00000004u; // 800476FC
  c->r[7]=c->r[7]+0x00000001u; // 80047700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800476CC; } // 80047704
L_80047708:;
  c->r[7]=0u+0x00000000u; // 80047708
  c->r[6]=0u+0x00000000u; // 8004770C
  c->ctr=c->r[9]; // 80047710
  cmpu(c,0,c->r[9],0x00000000u); // 80047714
  if (!crb(c,1)) { goto L_80047758; } // 80047718
L_8004771C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8004771C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80047720
  c->r[5]=R32(c->r[5]+c->r[6]); // 80047724
  c->r[5]=R32(c->r[5]+0x00000014u); // 80047728
  cmpu(c,0,c->r[10],c->r[5]); // 8004772C
  if (!crb(c,2)) { goto L_8004774C; } // 80047730
  W32(c->r[3]+0x00000004u,c->r[7]); // 80047734
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80047738
  c->r[4]=R32(c->r[3]+0x00000000u); // 8004773C
  c->r[6]=R32(c->r[4]+0x00000000u); // 80047740
  c->r[5]=R32(c->r[6]+c->r[5]); // 80047744
  goto L_8004775C; // 80047748
L_8004774C:;
  c->r[6]=c->r[6]+0x00000004u; // 8004774C
  c->r[7]=c->r[7]+0x00000001u; // 80047750
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004771C; } // 80047754
L_80047758:;
  c->r[5]=0u+0x00000000u; // 80047758
L_8004775C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8004775C
  if (crb(c,2)) { goto L_80047874; } // 80047760
  c->r[5]=R32(c->r[4]+0x00000000u); // 80047764
  c->r[0]=R32(c->r[4]+0x00000004u); // 80047768
  c->r[7]=R32(c->r[3]+0x00000004u); // 8004776C
  c->r[0]=c->r[0]-c->r[5]; // 80047770
  c->r[8]=R32(c->r[13]+0xFFFF9544u); // 80047774
  c->r[0]=sraw(c,c->r[0],2); // 80047778
  c->r[5]=c->r[7]|c->r[7]; // 8004777C
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80047780
  c->r[6]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80047784
  c->r[0]=c->r[4]-c->r[7]; // 80047788
  c->ctr=c->r[0]; // 8004778C
  cmpu(c,0,c->r[7],c->r[4]); // 80047790
  if (!crb(c,0)) { goto L_800477D4; } // 80047794
L_80047798:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80047798
  c->r[4]=R32(c->r[4]+0x00000000u); // 8004779C
  c->r[4]=R32(c->r[4]+c->r[6]); // 800477A0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800477A4
  cmpu(c,0,c->r[8],c->r[0]); // 800477A8
  if (!crb(c,2)) { goto L_800477C8; } // 800477AC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800477B0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800477B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800477B8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800477BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800477C0
  goto L_80047828; // 800477C4
L_800477C8:;
  c->r[6]=c->r[6]+0x00000004u; // 800477C8
  c->r[5]=c->r[5]+0x00000001u; // 800477CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80047798; } // 800477D0
L_800477D4:;
  c->r[6]=0u+0x00000000u; // 800477D4
  c->r[5]=0u+0x00000000u; // 800477D8
  c->ctr=c->r[7]; // 800477DC
  cmpu(c,0,c->r[7],0x00000000u); // 800477E0
  if (!crb(c,1)) { goto L_80047824; } // 800477E4
L_800477E8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800477E8
  c->r[4]=R32(c->r[4]+0x00000000u); // 800477EC
  c->r[4]=R32(c->r[4]+c->r[5]); // 800477F0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800477F4
  cmpu(c,0,c->r[8],c->r[0]); // 800477F8
  if (!crb(c,2)) { goto L_80047818; } // 800477FC
  W32(c->r[3]+0x00000004u,c->r[6]); // 80047800
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80047804
  c->r[3]=R32(c->r[3]+0x00000000u); // 80047808
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004780C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80047810
  goto L_80047828; // 80047814
L_80047818:;
  c->r[5]=c->r[5]+0x00000004u; // 80047818
  c->r[6]=c->r[6]+0x00000001u; // 8004781C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800477E8; } // 80047820
L_80047824:;
  c->r[3]=0u+0x00000000u; // 80047824
L_80047828:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 80047828
  cmps(c,0,(int32_t)c->r[4],37); // 8004782C
  if (!crb(c,1)) { goto L_80047848; } // 80047830
  c->r[0]=R32(c->r[3]+0x00000010u); // 80047834
  cmpu(c,0,c->r[0],0x00000001u); // 80047838
  if (!crb(c,2)) { goto L_80047848; } // 8004783C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80047840
  goto L_80047870; // 80047844
L_80047848:;
  cmps(c,0,(int32_t)c->r[4],26); // 80047848
  if (crb(c,0)) { goto L_80047858; } // 8004784C
  cmps(c,0,(int32_t)c->r[4],36); // 80047850
  if (!crb(c,2)) { goto L_8004786C; } // 80047854
L_80047858:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80047858
  cmpu(c,0,c->r[0],0x00000001u); // 8004785C
  if (!crb(c,2)) { goto L_8004786C; } // 80047860
  c->r[3]=c->r[3]+0x00000008u; // 80047864
  goto L_80047870; // 80047868
L_8004786C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8004786C
L_80047870:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80047870
L_80047874:;
  c->r[5]=0u+0x803C0000u; // 80047874
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80047878
  c->r[5]=c->r[5]+0x00002F00u; // 8004787C
  c->r[3]=c->r[30]|c->r[30]; // 80047880
  c->r[4]=c->r[31]|c->r[31]; // 80047884
  c->r[5]=c->r[5]+c->r[0]; // 80047888
  c->lr=0x80047890u; f_8004840C(c); // 8004788C
L_80047890:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80047890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80047894
  c->r[30]=R32(c->r[1]+0x00000008u); // 80047898
  c->lr=c->r[0]; // 8004789C
  c->r[1]=c->r[1]+0x00000010u; // 800478A0
  return; // 800478A4
}

// fn_800478A8
void f_800478A8(Ctx* __restrict c) {
  trace_call(0x800478A8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800478A8
  c->r[12]=c->r[1]|c->r[1]; // 800478AC
  c->r[11]=addc(c,~c->r[11],0xFFFFFD50u,1); // 800478B0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800478B4
  c->r[0]=c->lr; // 800478B8
  c->r[4]=0u+0x00000000u; // 800478BC
  W32(c->r[12]+0x00000004u,c->r[0]); // 800478C0
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800478C4
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800478C8
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800478CC
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800478D0
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 800478D4
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 800478D8
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 800478DC
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 800478E0
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 800478E4
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 800478E8
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 800478EC
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 800478F0
  {uint32_t ea=c->r[12]+0xFFFFFF90u; WF64(ea,c->f[25]);} // 800478F4
  {uint32_t ea=c->r[12]+0xFFFFFF98u; psq_store(c,25,ea,0,0);} // 800478F8
  W32(c->r[12]+0xFFFFFF8Cu,c->r[31]); // 800478FC
  W32(c->r[12]+0xFFFFFF88u,c->r[30]); // 80047900
  c->r[30]=c->r[3]|c->r[3]; // 80047904
  W32(c->r[12]+0xFFFFFF84u,c->r[29]); // 80047908
  W32(c->r[12]+0xFFFFFF80u,c->r[28]); // 8004790C
  c->r[5]=R32(c->r[3]+0x000000C4u); // 80047910
  c->r[7]=R32(c->r[3]+0x000000C8u); // 80047914
  c->r[3]=R32(c->r[5]+0x000000A8u); // 80047918
  c->r[5]=0u+0x00000000u; // 8004791C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80047920
  c->r[3]=R32(c->r[3]+0x00000008u); // 80047924
  goto L_80047958; // 80047928
L_8004792C:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 8004792C
  c->r[0]=R32(c->r[7]+0x00000000u); // 80047930
  c->r[6]=c->r[6]+c->r[5]; // 80047934
  c->r[6]=R32(c->r[6]+0x00000008u); // 80047938
  c->r[0]=c->r[0]-c->r[6]; // 8004793C
  c->r[0]=cntlz(c->r[0]); // 80047940
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80047944
  if (crb(c,2)) { goto L_80047950; } // 80047948
  goto L_80047968; // 8004794C
L_80047950:;
  c->r[4]=c->r[4]+0x00000001u; // 80047950
  c->r[5]=c->r[5]+0x000000C0u; // 80047954
L_80047958:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80047958
  cmpu(c,1,c->r[4],c->r[0]); // 8004795C
  if (crb(c,4)) { IRQCHK(c); goto L_8004792C; } // 80047960
  c->r[4]=0u+0xFFFFFFFFu; // 80047964
L_80047968:;
  c->r[5]=c->r[1]+0x00000200u; // 80047968
  c->lr=0x80047970u; f_8031CDF4(c); // 8004796C
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80047970
  c->r[4]=0u+0x00000002u; // 80047974
  c->r[0]=0u+0x00000001u; // 80047978
  W32(c->r[1]+0x000000E4u,c->r[4]); // 8004797C
  c->r[29]=R32(c->r[3]+0x00000030u); // 80047980
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 80047984
  W32(c->r[1]+0x00000054u,c->r[4]); // 80047988
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8004798C
  c->r[5]=c->r[29]+0x0000001Cu; // 80047990
  W32(c->r[1]+0x000000E0u,c->r[5]); // 80047994
  c->r[0]=c->r[3]&c->r[0]; // 80047998
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8004799C
  W32(c->r[1]+0x00000050u,c->r[5]); // 800479A0
  cmpu(c,1,c->r[0],0x00000001u); // 800479A4
  W32(c->r[1]+0x000000D8u,c->r[5]); // 800479A8
  W32(c->r[1]+0x000000DCu,c->r[4]); // 800479AC
  if (!crb(c,6)) { goto L_800479BC; } // 800479B0
  c->r[3]=c->r[29]|c->r[29]; // 800479B4
  c->lr=0x800479BCu; f_8034007C(c); // 800479B8
L_800479BC:;
  c->r[10]=c->r[1]+0x00000200u; // 800479BC
  {uint32_t ea=c->r[29]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 800479C0
  {uint32_t ea=c->r[29]+0x00000070u; psq_load(c,6,ea,0,0);} // 800479C4
  c->r[6]=c->r[1]+0x00000150u; // 800479C8
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,0,ea,0,0);} // 800479CC
  c->r[3]=c->r[1]+0x000001A0u; // 800479D0
  {uint32_t ea=c->r[29]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800479D4
  c->r[5]=c->r[1]+0x00000170u; // 800479D8
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800479DC
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[1]);} // 800479E0
  {uint32_t ea=c->r[29]+0x00000078u; psq_load(c,9,ea,1,0);} // 800479E4
  c->r[7]=c->r[1]+0x00000160u; // 800479E8
  {uint32_t ea=c->r[29]+0x00000068u; c->f[7]=c->ps1[7]=RF32(ea);} // 800479EC
  c->r[4]=c->r[1]+0x000001B0u; // 800479F0
  {uint32_t ea=c->r[10]+0x00000008u; psq_load(c,0,ea,1,0);} // 800479F4
  {double t0=S(c->f[2]*c->f[7]), t1=S(c->ps1[2]*c->ps1[7]); c->f[8]=t0; c->ps1[8]=t1;} // 800479F8
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[4]);} // 800479FC
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 80047A00
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80047A04
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[1]=c->ps1[1]=RF32(ea);} // 80047A08
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 80047A0C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,1,0);} // 80047A10
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80047A14
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80047A18
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80047A1C
  c->f[11]=c->ps1[11]=S(c->f[1]*c->f[5]); // 80047A20
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[7]);} // 80047A24
  {double t0=S(std::fma(c->f[0],c->f[31],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[31],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80047A28
  {double t0=S(std::fma(c->f[0],c->f[4],-c->f[10])), t1=S(std::fma(c->ps1[0],c->ps1[4],-c->ps1[10])); c->f[4]=t0; c->ps1[4]=t1;} // 80047A2C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80047A30
  {double t0=S(c->ps1[8]), t1=S(c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 80047A34
  {double t0=S(c->f[8]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80047A38
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,10,ea,1,0);} // 80047A3C
  {double t0=-c->f[4], t1=-c->ps1[4]; c->f[4]=t0; c->ps1[4]=t1;} // 80047A40
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,4,ea,0,0);} // 80047A44
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 80047A48
  {uint32_t ea=c->r[1]+0x00000178u; c->f[30]=c->ps1[30]=RF32(ea);} // 80047A4C
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->f[11]); c->f[13]=t0; c->ps1[13]=t1;} // 80047A50
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,12,ea,1,0);} // 80047A54
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 80047A58
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 80047A5C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,13,ea,0,0);} // 80047A60
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80047A64
  {double t0=S(std::fma(c->f[0],c->f[30],-c->f[7])), t1=S(std::fma(c->ps1[0],c->ps1[30],-c->ps1[7])); c->f[4]=t0; c->ps1[4]=t1;} // 80047A68
  {double t0=S(std::fma(c->f[0],c->f[8],-c->f[10])), t1=S(std::fma(c->ps1[0],c->ps1[8],-c->ps1[10])); c->f[0]=t0; c->ps1[0]=t1;} // 80047A6C
  {double t0=S(c->f[12]*c->f[11]), t1=S(c->ps1[12]*c->f[11]); c->f[8]=t0; c->ps1[8]=t1;} // 80047A70
  {double t0=S(c->ps1[4]), t1=S(c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 80047A74
  {double t0=S(c->f[4]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80047A78
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,8,ea,1,0);} // 80047A7C
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,7,ea,1,0);} // 80047A80
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 80047A84
  {uint32_t ea=c->r[7]+0x00000004u; psq_store(c,0,ea,0,0);} // 80047A88
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 80047A8C
  {double t0=S(c->f[2]+c->f[13]), t1=S(c->ps1[2]+c->ps1[13]); c->f[11]=t0; c->ps1[11]=t1;} // 80047A90
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,2,ea,1,0);} // 80047A94
  {double t0=S(c->f[3]+c->f[8]), t1=S(c->ps1[3]+c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 80047A98
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[7]=t0; c->ps1[7]=t1;} // 80047A9C
  c->r[3]=c->r[1]+0x00000130u; // 80047AA0
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[10]=t0; c->ps1[10]=t1;} // 80047AA4
  {uint32_t ea=c->r[10]+0x00000010u; psq_load(c,1,ea,0,0);} // 80047AA8
  c->r[5]=c->r[1]+0x00000140u; // 80047AAC
  {double t0=S(c->f[11]+c->f[7]), t1=S(c->ps1[11]+c->ps1[7]); c->f[2]=t0; c->ps1[2]=t1;} // 80047AB0
  {uint32_t ea=c->r[29]+0x00000060u; psq_load(c,0,ea,0,0);} // 80047AB4
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[31]=t0; c->ps1[31]=t1;} // 80047AB8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 80047ABC
  {double t0=S(c->f[12]+c->f[10]), t1=S(c->ps1[12]+c->ps1[10]); c->f[2]=t0; c->ps1[2]=t1;} // 80047AC0
  {uint32_t ea=c->r[29]+0x00000068u; c->f[29]=c->ps1[29]=RF32(ea);} // 80047AC4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,1,0);} // 80047AC8
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80047ACC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[4]=c->ps1[4]=RF32(ea);} // 80047AD0
  {double t0=S(c->f[1]*c->f[29]), t1=S(c->ps1[1]*c->ps1[29]); c->f[30]=t0; c->ps1[30]=t1;} // 80047AD4
  {uint32_t ea=c->r[1]+0x00000144u; c->f[3]=c->ps1[3]=RF32(ea);} // 80047AD8
  c->r[5]=c->r[1]+0x000001C0u; // 80047ADC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[2]=c->ps1[2]=RF32(ea);} // 80047AE0
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[2]);} // 80047AE4
  {double t0=S(std::fma(c->f[0],c->f[31],-c->f[13])), t1=S(std::fma(c->ps1[0],c->ps1[31],-c->ps1[13])); c->f[29]=t0; c->ps1[29]=t1;} // 80047AE8
  {uint32_t ea=c->r[1]+0x00000218u; c->f[27]=c->ps1[27]=RF32(ea);} // 80047AEC
  c->r[8]=c->r[1]+0x00000120u; // 80047AF0
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[4]);} // 80047AF4
  c->r[9]=c->r[1]+0x00000110u; // 80047AF8
  {double t0=S(std::fma(c->f[0],c->f[27],-c->f[30])), t1=S(std::fma(c->ps1[0],c->ps1[27],-c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 80047AFC
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[3]);} // 80047B00
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 80047B04
  {uint32_t ea=c->r[29]+0x00000050u; psq_load(c,2,ea,0,0);} // 80047B08
  c->r[6]=c->r[1]+0x00000190u; // 80047B0C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 80047B10
  {double t0=S(c->f[30]), t1=S(c->ps1[29]); c->f[4]=t0; c->ps1[4]=t1;} // 80047B14
  {uint32_t ea=c->r[29]+0x00000068u; psq_load(c,8,ea,1,0);} // 80047B18
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80047B1C
  {uint32_t ea=c->r[29]+0x00000058u; psq_load(c,2,ea,1,0);} // 80047B20
  {double t0=S(c->ps1[30]), t1=S(c->ps1[30]); c->f[31]=t0; c->ps1[31]=t1;} // 80047B24
  {uint32_t ea=c->r[29]+0x0000006Cu; psq_load(c,29,ea,1,0);} // 80047B28
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,3,ea,0,0);} // 80047B2C
  {double t0=-c->f[8], t1=-c->ps1[8]; c->f[13]=t0; c->ps1[13]=t1;} // 80047B30
  {double t0=-c->f[4], t1=-c->ps1[4]; c->f[30]=t0; c->ps1[30]=t1;} // 80047B34
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 80047B38
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 80047B3C
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80047B40
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80047B44
  {uint32_t ea=c->r[1]+0x000001C4u; c->f[8]=c->ps1[8]=RF32(ea);} // 80047B48
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,1,0);} // 80047B4C
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,7,ea,0,0);} // 80047B50
  {uint32_t ea=c->r[1]+0x000001C8u; c->f[7]=c->ps1[7]=RF32(ea);} // 80047B54
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,10,ea,1,0);} // 80047B58
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,11,ea,0,0);} // 80047B5C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,12,ea,1,0);} // 80047B60
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[4]);} // 80047B64
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[8]);} // 80047B68
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[7]);} // 80047B6C
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,27,ea,0,0);} // 80047B70
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,13,ea,1,0);} // 80047B74
  {uint32_t ea=c->r[8]+0x0000000Cu; psq_store(c,29,ea,1,0);} // 80047B78
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,31,ea,1,0);} // 80047B7C
  {uint32_t ea=c->r[9]+0x00000004u; psq_store(c,30,ea,0,0);} // 80047B80
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[28]);} // 80047B84
  {uint32_t ea=c->r[29]+0x00000068u; psq_load(c,3,ea,0,0);} // 80047B88
  c->r[29]=0u+0x00000000u; // 80047B8C
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80047B90
  c->r[31]=0u+0x00000001u; // 80047B94
  {uint32_t ea=c->r[10]+0x00000018u; psq_load(c,12,ea,0,0);} // 80047B98
  c->r[4]=c->r[1]+0x00000100u; // 80047B9C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[10]=t0; c->ps1[10]=t1;} // 80047BA0
  c->r[5]=c->r[1]+0x000000F0u; // 80047BA4
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 80047BA8
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,13,ea,0,0);} // 80047BAC
  {double t0=S(c->f[12]*c->f[5]), t1=S(c->ps1[12]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 80047BB0
  c->r[7]=c->r[1]+0x00000180u; // 80047BB4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,3,ea,0,0);} // 80047BB8
  {double t0=S(c->f[27]*c->f[1]), t1=S(c->ps1[27]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80047BBC
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,3,ea,0,0);} // 80047BC0
  {double t0=S(c->f[1]*c->f[5]), t1=S(c->ps1[1]*c->f[5]); c->f[11]=t0; c->ps1[11]=t1;} // 80047BC4
  {double t0=S(c->f[13]+c->f[10]), t1=S(c->ps1[13]+c->ps1[10]); c->f[1]=t0; c->ps1[1]=t1;} // 80047BC8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,0,ea,0,0);} // 80047BCC
  {double t0=S(std::fma(c->f[3],c->f[12],c->f[2])), t1=S(std::fma(c->ps1[3],c->ps1[12],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 80047BD0
  {uint32_t ea=c->r[10]+0x00000028u; psq_load(c,3,ea,1,0);} // 80047BD4
  c->r[3]=((c->r[29])&0x20)?0u:(c->r[31]<<((c->r[29])&31)); // 80047BD8
  {uint32_t ea=c->r[10]+0x00000020u; psq_load(c,28,ea,0,0);} // 80047BDC
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[26]); c->f[26]=t0; c->ps1[26]=t1;} // 80047BE0
  {uint32_t ea=c->r[9]+0x00000008u; psq_load(c,13,ea,1,0);} // 80047BE4
  {double t0=S(c->f[9]*c->f[3]), t1=S(c->ps1[9]*c->ps1[3]); c->f[9]=t0; c->ps1[9]=t1;} // 80047BE8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 80047BEC
  {double t0=S(c->f[6]*c->f[28]), t1=S(c->ps1[6]*c->ps1[28]); c->f[2]=t0; c->ps1[2]=t1;} // 80047BF0
  {uint32_t ea=c->r[9]+0x0000000Cu; psq_load(c,12,ea,1,0);} // 80047BF4
  c->f[3]=c->ps1[3]=S(c->f[26]); // 80047BF8
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,9,ea,1,0);} // 80047BFC
  {double t0=S(c->f[13]+c->f[0]), t1=S(c->ps1[13]+c->ps1[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80047C00
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,13,ea,1,0);} // 80047C04
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047C08
  {double t0=S(c->f[1]+c->f[11]), t1=S(c->ps1[1]+c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 80047C0C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 80047C10
  {double t0=S(c->f[9]+c->f[13]), t1=S(c->ps1[9]+c->ps1[13]); c->f[9]=t0; c->ps1[9]=t1;} // 80047C14
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,2,ea,0,0);} // 80047C18
  {uint32_t ea=c->r[1]+0x00000190u; c->f[6]=c->ps1[6]=RF32(ea);} // 80047C1C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[2]=c->ps1[2]=RF32(ea);} // 80047C20
  {uint32_t ea=c->r[1]+0x00000194u; c->f[5]=c->ps1[5]=RF32(ea);} // 80047C24
  {uint32_t ea=c->r[1]+0x00000184u; c->f[1]=c->ps1[1]=RF32(ea);} // 80047C28
  {uint32_t ea=c->r[6]+0x0000000Cu; psq_store(c,12,ea,1,0);} // 80047C2C
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,9,ea,1,0);} // 80047C30
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[4]);} // 80047C34
  {uint32_t ea=c->r[1]+0x00000198u; c->f[4]=c->ps1[4]=RF32(ea);} // 80047C38
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[8]);} // 80047C3C
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[7]);} // 80047C40
  {uint32_t ea=c->r[1]+0x00000210u; WF32(ea,c->f[6]);} // 80047C44
  {uint32_t ea=c->r[1]+0x00000214u; WF32(ea,c->f[5]);} // 80047C48
  {uint32_t ea=c->r[1]+0x00000218u; WF32(ea,c->f[4]);} // 80047C4C
  {uint32_t ea=c->r[1]+0x0000021Cu; WF32(ea,c->f[3]);} // 80047C50
  {uint32_t ea=c->r[1]+0x00000220u; WF32(ea,c->f[2]);} // 80047C54
  {uint32_t ea=c->r[1]+0x00000224u; WF32(ea,c->f[1]);} // 80047C58
  {uint32_t ea=c->r[1]+0x00000228u; WF32(ea,c->f[0]);} // 80047C5C
  c->r[28]=R32(c->r[30]+0x00000030u); // 80047C60
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,10,ea,0,0);} // 80047C64
  c->r[4]=c->r[28]+0x0000001Cu; // 80047C68
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80047C6C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,11,ea,0,0);} // 80047C70
  c->r[0]=c->r[3]&c->r[0]; // 80047C74
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); cr0(c,c->r[0]); // 80047C78
  {uint32_t ea=c->r[1]+0x0000019Cu; WF32(ea,c->f[26]);} // 80047C7C
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[6]);} // 80047C80
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[5]);} // 80047C84
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[4]);} // 80047C88
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[3]);} // 80047C8C
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[2]);} // 80047C90
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[1]);} // 80047C94
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[0]);} // 80047C98
  W32(c->r[1]+0x000000C0u,c->r[4]); // 80047C9C
  W32(c->r[1]+0x000000C4u,c->r[29]); // 80047CA0
  W32(c->r[1]+0x00000048u,c->r[4]); // 80047CA4
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 80047CA8
  W32(c->r[1]+0x000000A8u,c->r[4]); // 80047CAC
  W32(c->r[1]+0x000000ACu,c->r[29]); // 80047CB0
  if (crb(c,2)) { goto L_80047D10; } // 80047CB4
  c->r[3]=c->r[28]|c->r[28]; // 80047CB8
  c->lr=0x80047CC0u; f_8034007C(c); // 80047CBC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80047CC0
  c->r[5]=c->r[28]+0x0000001Cu; // 80047CC4
  c->r[3]=((c->r[29])&0x20)?0u:(c->r[31]<<((c->r[29])&31)); // 80047CC8
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[31]<<((c->r[31])&31)); // 80047CCC
  c->r[3]=c->r[4]&~c->r[3]; // 80047CD0
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 80047CD4
  c->r[0]=c->r[3]|c->r[0]; // 80047CD8
  W32(c->r[1]+0x000000C8u,c->r[5]); // 80047CDC
  W32(c->r[1]+0x000000CCu,c->r[29]); // 80047CE0
  W32(c->r[1]+0x00000040u,c->r[5]); // 80047CE4
  W32(c->r[1]+0x00000044u,c->r[29]); // 80047CE8
  W32(c->r[1]+0x000000B0u,c->r[5]); // 80047CEC
  W32(c->r[1]+0x000000B4u,c->r[29]); // 80047CF0
  W32(c->r[1]+0x000000D0u,c->r[5]); // 80047CF4
  W32(c->r[1]+0x000000D4u,c->r[31]); // 80047CF8
  W32(c->r[1]+0x00000038u,c->r[5]); // 80047CFC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80047D00
  W32(c->r[1]+0x000000B8u,c->r[5]); // 80047D04
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80047D08
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 80047D0C
L_80047D10:;
  c->r[31]=R32(c->r[30]+0x00000030u); // 80047D10
  c->r[4]=0u+0x00000000u; // 80047D14
  c->r[0]=R32(c->r[1]+0x00000200u); // 80047D18
  c->r[5]=0u+0x00000000u; // 80047D1C
  c->r[3]=R32(c->r[31]+0x00000050u); // 80047D20
  c->r[6]=0u+0x00000000u; // 80047D24
  c->r[7]=0u+0x00000000u; // 80047D28
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047D2C
  if (!crb(c,6)) { goto L_80047D48; } // 80047D30
  c->r[3]=R32(c->r[31]+0x00000054u); // 80047D34
  c->r[0]=R32(c->r[1]+0x00000204u); // 80047D38
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047D3C
  if (!crb(c,6)) { goto L_80047D48; } // 80047D40
  c->r[7]=0u+0x00000001u; // 80047D44
L_80047D48:;
  cmps(c,1,(int32_t)c->r[7],0); // 80047D48
  if (crb(c,6)) { goto L_80047D64; } // 80047D4C
  c->r[3]=R32(c->r[31]+0x00000058u); // 80047D50
  c->r[0]=R32(c->r[1]+0x00000208u); // 80047D54
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047D58
  if (!crb(c,6)) { goto L_80047D64; } // 80047D5C
  c->r[6]=0u+0x00000001u; // 80047D60
L_80047D64:;
  cmps(c,1,(int32_t)c->r[6],0); // 80047D64
  if (crb(c,6)) { goto L_80047DE0; } // 80047D68
  c->r[3]=R32(c->r[31]+0x00000060u); // 80047D6C
  c->r[6]=0u+0x00000000u; // 80047D70
  c->r[0]=R32(c->r[1]+0x00000210u); // 80047D74
  c->r[7]=0u+0x00000000u; // 80047D78
  c->r[8]=0u+0x00000000u; // 80047D7C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047D80
  if (!crb(c,6)) { goto L_80047D9C; } // 80047D84
  c->r[3]=R32(c->r[31]+0x00000064u); // 80047D88
  c->r[0]=R32(c->r[1]+0x00000214u); // 80047D8C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047D90
  if (!crb(c,6)) { goto L_80047D9C; } // 80047D94
  c->r[8]=0u+0x00000001u; // 80047D98
L_80047D9C:;
  cmps(c,1,(int32_t)c->r[8],0); // 80047D9C
  if (crb(c,6)) { goto L_80047DB8; } // 80047DA0
  c->r[3]=R32(c->r[31]+0x00000068u); // 80047DA4
  c->r[0]=R32(c->r[1]+0x00000218u); // 80047DA8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047DAC
  if (!crb(c,6)) { goto L_80047DB8; } // 80047DB0
  c->r[7]=0u+0x00000001u; // 80047DB4
L_80047DB8:;
  cmps(c,1,(int32_t)c->r[7],0); // 80047DB8
  if (crb(c,6)) { goto L_80047DD4; } // 80047DBC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 80047DC0
  c->r[0]=R32(c->r[1]+0x0000021Cu); // 80047DC4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047DC8
  if (!crb(c,6)) { goto L_80047DD4; } // 80047DCC
  c->r[6]=0u+0x00000001u; // 80047DD0
L_80047DD4:;
  cmps(c,1,(int32_t)c->r[6],0); // 80047DD4
  if (crb(c,6)) { goto L_80047DE0; } // 80047DD8
  c->r[5]=0u+0x00000001u; // 80047DDC
L_80047DE0:;
  cmps(c,1,(int32_t)c->r[5],0); // 80047DE0
  if (crb(c,6)) { goto L_80047E3C; } // 80047DE4
  c->r[3]=R32(c->r[31]+0x00000070u); // 80047DE8
  c->r[5]=0u+0x00000000u; // 80047DEC
  c->r[0]=R32(c->r[1]+0x00000220u); // 80047DF0
  c->r[6]=0u+0x00000000u; // 80047DF4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047DF8
  if (!crb(c,6)) { goto L_80047E14; } // 80047DFC
  c->r[3]=R32(c->r[31]+0x00000074u); // 80047E00
  c->r[0]=R32(c->r[1]+0x00000224u); // 80047E04
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047E08
  if (!crb(c,6)) { goto L_80047E14; } // 80047E0C
  c->r[6]=0u+0x00000001u; // 80047E10
L_80047E14:;
  cmps(c,1,(int32_t)c->r[6],0); // 80047E14
  if (crb(c,6)) { goto L_80047E30; } // 80047E18
  c->r[3]=R32(c->r[31]+0x00000078u); // 80047E1C
  c->r[0]=R32(c->r[1]+0x00000228u); // 80047E20
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80047E24
  if (!crb(c,6)) { goto L_80047E30; } // 80047E28
  c->r[5]=0u+0x00000001u; // 80047E2C
L_80047E30:;
  cmps(c,1,(int32_t)c->r[5],0); // 80047E30
  if (crb(c,6)) { goto L_80047E3C; } // 80047E34
  c->r[4]=0u+0x00000001u; // 80047E38
L_80047E3C:;
  cmps(c,1,(int32_t)c->r[4],0); // 80047E3C
  if (!crb(c,6)) { goto L_80047F68; } // 80047E40
  {uint32_t ea=c->r[1]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E44
  c->f[3]=c->ps1[3]=S(c->f[25]-c->f[25]); // 80047E48
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 80047E4C
  {uint32_t ea=c->r[1]+0x00000204u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E50
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80047E54
  {uint32_t ea=c->r[1]+0x00000208u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E58
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 80047E5C
  {uint32_t ea=c->r[1]+0x00000210u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E60
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 80047E64
  {uint32_t ea=c->r[1]+0x00000214u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E68
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80047E6C
  {uint32_t ea=c->r[1]+0x00000218u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E70
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 80047E74
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E78
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 80047E7C
  {uint32_t ea=c->r[1]+0x00000220u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E80
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 80047E84
  {uint32_t ea=c->r[1]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E88
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 80047E8C
  {uint32_t ea=c->r[1]+0x00000228u; c->f[0]=c->ps1[0]=RF32(ea);} // 80047E90
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 80047E94
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 80047E98
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 80047E9C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80047EA0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80047EA4
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80047EA8
  fcmp(c,0,c->f[2],c->f[3]); // 80047EAC
  if (crb(c,2)) { goto L_80047ED0; } // 80047EB0
  c->f[0]=frsqrte(c->f[2]); // 80047EB4
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[25]=c->ps1[25]=RF32(ea);} // 80047EB8
  {uint32_t ea=c->r[2]+0xFFFF8728u; c->f[3]=c->ps1[3]=RF32(ea);} // 80047EBC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80047EC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[25]); // 80047EC4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80047EC8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80047ECC
L_80047ED0:;
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 80047ED0
  c->r[7]=c->r[31]+0x0000001Cu; // 80047ED4
  c->r[6]=0u+0x00000001u; // 80047ED8
  c->r[3]=0u+0x00000003u; // 80047EDC
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 80047EE0
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80047EE4
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 80047EE8
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 80047EEC
  {uint32_t ea=c->r[31]+0x00000060u; psq_store(c,0,ea,0,0);} // 80047EF0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80047EF4
  {uint32_t ea=c->r[31]+0x00000068u; psq_store(c,0,ea,0,0);} // 80047EF8
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80047EFC
  W32(c->r[1]+0x00000098u,c->r[7]); // 80047F00
  c->r[4]=c->r[5]|c->r[4]; // 80047F04
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80047F08
  c->r[0]=c->r[4]|c->r[0]; // 80047F0C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80047F10
  c->r[0]=R32(c->r[31]+0x00000004u); // 80047F14
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 80047F18
  cmps(c,1,(int32_t)c->r[0],0); // 80047F1C
  W32(c->r[1]+0x00000030u,c->r[7]); // 80047F20
  W32(c->r[1]+0x00000034u,c->r[6]); // 80047F24
  W32(c->r[1]+0x00000088u,c->r[7]); // 80047F28
  W32(c->r[1]+0x0000008Cu,c->r[6]); // 80047F2C
  W32(c->r[1]+0x000000A0u,c->r[7]); // 80047F30
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80047F34
  W32(c->r[1]+0x00000028u,c->r[7]); // 80047F38
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80047F3C
  W32(c->r[1]+0x00000090u,c->r[7]); // 80047F40
  W32(c->r[1]+0x00000094u,c->r[3]); // 80047F44
  if (crb(c,6)) { goto L_80047F54; } // 80047F48
  c->r[3]=c->r[31]|c->r[31]; // 80047F4C
  c->lr=0x80047F54u; f_80340A20(c); // 80047F50
L_80047F54:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80047F54
  cmps(c,1,(int32_t)c->r[0],0); // 80047F58
  if (crb(c,6)) { goto L_80047F68; } // 80047F5C
  c->r[3]=c->r[31]|c->r[31]; // 80047F60
  c->lr=0x80047F68u; f_80340B8C(c); // 80047F64
L_80047F68:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 80047F68
  c->r[7]=0u+0x00000000u; // 80047F6C
  c->r[6]=0u+0x00000001u; // 80047F70
  W32(c->r[1]+0x00000074u,c->r[7]); // 80047F74
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80047F78
  c->r[8]=c->r[3]+0x0000001Cu; // 80047F7C
  c->r[5]=((c->r[7])&0x20)?0u:(c->r[6]<<((c->r[7])&31)); // 80047F80
  W32(c->r[1]+0x00000070u,c->r[8]); // 80047F84
  c->r[0]=c->r[5]&c->r[0]; // 80047F88
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 80047F8C
  W32(c->r[1]+0x00000020u,c->r[8]); // 80047F90
  cmpu(c,1,c->r[0],0x00000001u); // 80047F94
  W32(c->r[1]+0x00000024u,c->r[7]); // 80047F98
  W32(c->r[1]+0x00000058u,c->r[8]); // 80047F9C
  W32(c->r[1]+0x0000005Cu,c->r[7]); // 80047FA0
  if (crb(c,6)) { goto L_80047FF4; } // 80047FA4
  c->r[4]=R32(c->r[8]+0x00000000u); // 80047FA8
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 80047FAC
  W32(c->r[1]+0x00000078u,c->r[8]); // 80047FB0
  c->r[4]=c->r[4]|c->r[5]; // 80047FB4
  W32(c->r[8]+0x00000000u,c->r[4]); // 80047FB8
  c->r[0]=c->r[4]|c->r[0]; // 80047FBC
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 80047FC0
  W32(c->r[1]+0x00000018u,c->r[8]); // 80047FC4
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 80047FC8
  W32(c->r[1]+0x00000060u,c->r[8]); // 80047FCC
  W32(c->r[1]+0x00000064u,c->r[7]); // 80047FD0
  W32(c->r[1]+0x00000080u,c->r[8]); // 80047FD4
  W32(c->r[1]+0x00000084u,c->r[6]); // 80047FD8
  W32(c->r[1]+0x00000010u,c->r[8]); // 80047FDC
  W32(c->r[1]+0x00000014u,c->r[6]); // 80047FE0
  W32(c->r[1]+0x00000068u,c->r[8]); // 80047FE4
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 80047FE8
  W32(c->r[8]+0x00000000u,c->r[0]); // 80047FEC
  c->lr=0x80047FF4u; f_8034007C(c); // 80047FF0
L_80047FF4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80047FF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80047FF8
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80047FFC
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80048000
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80048004
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80048008
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 8004800C
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80048010
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80048014
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80048018
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 8004801C
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80048020
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80048024
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80048028
  {uint32_t ea=c->r[10]+0xFFFFFF98u; psq_load(c,25,ea,0,0);} // 8004802C
  {uint32_t ea=c->r[10]+0xFFFFFF90u; c->f[25]=RF64(ea);} // 80048030
  c->r[31]=R32(c->r[10]+0xFFFFFF8Cu); // 80048034
  c->r[30]=R32(c->r[10]+0xFFFFFF88u); // 80048038
  c->r[29]=R32(c->r[10]+0xFFFFFF84u); // 8004803C
  c->r[28]=R32(c->r[10]+0xFFFFFF80u); // 80048040
  c->lr=c->r[0]; // 80048044
  c->r[1]=c->r[10]|c->r[10]; // 80048048
  return; // 8004804C
}

// fn_80048050
void f_80048050(Ctx* __restrict c) {
  trace_call(0x80048050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048050
  c->r[0]=c->lr; // 80048054
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004805C
  c->r[31]=c->r[5]|c->r[5]; // 80048060
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048064
  c->r[30]=c->r[4]|c->r[4]; // 80048068
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004806C
  c->r[29]=c->r[3]|c->r[3]; // 80048070
  c->r[3]=0u+0x000000D0u; // 80048074
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 80048078
  c->lr=0x80048080u; f_8036AB9C(c); // 8004807C
  cmps(c,0,(int32_t)c->r[3],0); // 80048080
  if (crb(c,2)) { goto L_80048098; } // 80048084
  c->r[4]=c->r[29]|c->r[29]; // 80048088
  c->r[5]=c->r[30]|c->r[30]; // 8004808C
  c->r[6]=c->r[31]|c->r[31]; // 80048090
  c->lr=0x80048098u; f_80047468(c); // 80048094
L_80048098:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004809C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800480A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800480A4
  c->lr=c->r[0]; // 800480A8
  c->r[1]=c->r[1]+0x00000020u; // 800480AC
  return; // 800480B0
}

// fn_800480B4
void f_800480B4(Ctx* __restrict c) {
  trace_call(0x800480B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800480B4
  c->r[0]=c->lr; // 800480B8
  c->r[4]=0u+0x80370000u; // 800480BC
  c->r[5]=0u+0x00000000u; // 800480C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800480C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800480C8
  c->r[31]=c->r[4]+0x00004438u; // 800480CC
  c->r[4]=c->r[31]+0x0000005Fu; // 800480D0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800480D4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800480D8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800480DC
  c->lr=0x800480E4u; f_8031E640(c); // 800480E0
  W32(c->r[13]+0xFFFF9540u,c->r[3]); // 800480E4
  c->r[4]=c->r[31]+0x00000075u; // 800480E8
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800480EC
  c->r[5]=0u+0x00000000u; // 800480F0
  c->lr=0x800480F8u; f_8031E640(c); // 800480F4
  W32(c->r[13]+0xFFFF9544u,c->r[3]); // 800480F8
  c->r[4]=c->r[31]+0x00000085u; // 800480FC
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80048100
  c->r[5]=0u+0x00000000u; // 80048104
  c->lr=0x8004810Cu; f_8031E640(c); // 80048108
  c->r[5]=0u+0x803C0000u; // 8004810C
  c->r[29]=0u+0x00000001u; // 80048110
  c->r[4]=c->r[5]+0x00002F00u; // 80048114
  W32(c->r[5]+0x00002F00u,c->r[3]); // 80048118
  c->r[30]=c->r[4]+0x00000004u; // 8004811C
L_80048120:;
  c->r[3]=c->r[1]+0x00000008u; // 80048120
  c->r[5]=c->r[31]+0x00000093u; // 80048124
  c->r[6]=c->r[29]+0x00000001u; // 80048128
  c->r[4]=0u+0x00000080u; // 8004812C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80048130
  c->lr=0x80048138u; f_8000D29C(c); // 80048134
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80048138
  c->r[4]=c->r[1]+0x00000008u; // 8004813C
  c->r[5]=0u+0x00000000u; // 80048140
  c->lr=0x80048148u; f_8031E640(c); // 80048144
  c->r[29]=c->r[29]+0x00000001u; // 80048148
  W32(c->r[30]+0x00000000u,c->r[3]); // 8004814C
  cmpu(c,0,c->r[29],0x00000008u); // 80048150
  c->r[30]=c->r[30]+0x00000004u; // 80048154
  if (crb(c,0)) { IRQCHK(c); goto L_80048120; } // 80048158
  c->r[30]=0u+0x803C0000u; // 8004815C
  c->r[31]=0u+0x80370000u; // 80048160
  c->r[30]=c->r[30]+0x00002F30u; // 80048164
  c->r[29]=0u+0x00000000u; // 80048168
  c->r[31]=c->r[31]+0x00004438u; // 8004816C
L_80048170:;
  c->r[3]=c->r[1]+0x00000008u; // 80048170
  c->r[5]=c->r[31]+0x000000A6u; // 80048174
  c->r[6]=c->r[29]+0x00000001u; // 80048178
  c->r[4]=0u+0x00000080u; // 8004817C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80048180
  c->lr=0x80048188u; f_8000D29C(c); // 80048184
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80048188
  c->r[4]=c->r[1]+0x00000008u; // 8004818C
  c->r[5]=0u+0x00000000u; // 80048190
  c->lr=0x80048198u; f_8031E640(c); // 80048194
  c->r[29]=c->r[29]+0x00000001u; // 80048198
  W32(c->r[30]+0x00000000u,c->r[3]); // 8004819C
  cmpu(c,0,c->r[29],0x00000008u); // 800481A0
  c->r[30]=c->r[30]+0x00000004u; // 800481A4
  if (crb(c,0)) { IRQCHK(c); goto L_80048170; } // 800481A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800481AC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800481B0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800481B4
  c->r[29]=R32(c->r[1]+0x00000034u); // 800481B8
  c->lr=c->r[0]; // 800481BC
  c->r[1]=c->r[1]+0x00000040u; // 800481C0
  return; // 800481C4
}

// fn_800481C8
void f_800481C8(Ctx* __restrict c) {
  trace_call(0x800481C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800481C8
  c->r[0]=c->lr; // 800481CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800481D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800481D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800481D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800481DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800481E0
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 800481E4
  c->r[3]=c->r[30]|c->r[30]; // 800481E8
  c->lr=0x800481F0u; f_8024B0E0(c); // 800481EC
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 800481F0
  c->r[4]=R32(c->r[13]+0xFFFF9540u); // 800481F4
  cmpu(c,0,c->r[4],c->r[31]); // 800481F8
  if (!crb(c,2)) { goto L_8004820C; } // 800481FC
  c->r[3]=c->r[30]|c->r[30]; // 80048200
  c->lr=0x80048208u; f_8024B1C0(c); // 80048204
  goto L_80048244; // 80048208
L_8004820C:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 8004820C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048210
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80048214
  cmpu(c,0,c->r[0],0x00000001u); // 80048218
  if (!crb(c,2)) { goto L_80048238; } // 8004821C
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80048220
  cmpu(c,0,c->r[0],0x00000001u); // 80048224
  if (!crb(c,2)) { goto L_80048238; } // 80048228
  c->r[3]=c->r[30]|c->r[30]; // 8004822C
  c->r[4]=c->r[13]+0xFFFF9540u; // 80048230
  c->lr=0x80048238u; f_8031EEDC(c); // 80048234
L_80048238:;
  W32(c->r[13]+0xFFFF9540u,c->r[31]); // 80048238
  c->r[3]=c->r[30]|c->r[30]; // 8004823C
  c->lr=0x80048244u; f_8024B1C0(c); // 80048240
L_80048244:;
  c->r[30]=R32(c->r[13]+0xFFFFA510u); // 80048244
  c->r[3]=c->r[30]|c->r[30]; // 80048248
  c->lr=0x80048250u; f_8024B0E0(c); // 8004824C
  c->r[4]=R32(c->r[13]+0xFFFF9544u); // 80048250
  cmpu(c,0,c->r[4],c->r[31]); // 80048254
  if (!crb(c,2)) { goto L_80048268; } // 80048258
  c->r[3]=c->r[30]|c->r[30]; // 8004825C
  c->lr=0x80048264u; f_8024B1C0(c); // 80048260
  goto L_800482A0; // 80048264
L_80048268:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80048268
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004826C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80048270
  cmpu(c,0,c->r[0],0x00000001u); // 80048274
  if (!crb(c,2)) { goto L_80048294; } // 80048278
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8004827C
  cmpu(c,0,c->r[0],0x00000001u); // 80048280
  if (!crb(c,2)) { goto L_80048294; } // 80048284
  c->r[3]=c->r[30]|c->r[30]; // 80048288
  c->r[4]=c->r[13]+0xFFFF9544u; // 8004828C
  c->lr=0x80048294u; f_8031EEDC(c); // 80048290
L_80048294:;
  W32(c->r[13]+0xFFFF9544u,c->r[31]); // 80048294
  c->r[3]=c->r[30]|c->r[30]; // 80048298
  c->lr=0x800482A0u; f_8024B1C0(c); // 8004829C
L_800482A0:;
  c->r[30]=0u+0x803C0000u; // 800482A0
  c->r[28]=0u+0x00000000u; // 800482A4
  c->r[30]=c->r[30]+0x00002F00u; // 800482A8
L_800482AC:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 800482AC
  c->r[3]=c->r[29]|c->r[29]; // 800482B0
  c->lr=0x800482B8u; f_8024B0E0(c); // 800482B4
  c->r[4]=R32(c->r[30]+0x00000000u); // 800482B8
  cmpu(c,0,c->r[4],c->r[31]); // 800482BC
  if (!crb(c,2)) { goto L_800482D0; } // 800482C0
  c->r[3]=c->r[29]|c->r[29]; // 800482C4
  c->lr=0x800482CCu; f_8024B1C0(c); // 800482C8
  goto L_80048308; // 800482CC
L_800482D0:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 800482D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800482D4
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 800482D8
  cmpu(c,0,c->r[0],0x00000001u); // 800482DC
  if (!crb(c,2)) { goto L_800482FC; } // 800482E0
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800482E4
  cmpu(c,0,c->r[0],0x00000001u); // 800482E8
  if (!crb(c,2)) { goto L_800482FC; } // 800482EC
  c->r[3]=c->r[29]|c->r[29]; // 800482F0
  c->r[4]=c->r[30]|c->r[30]; // 800482F4
  c->lr=0x800482FCu; f_8031EEDC(c); // 800482F8
L_800482FC:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 800482FC
  c->r[3]=c->r[29]|c->r[29]; // 80048300
  c->lr=0x80048308u; f_8024B1C0(c); // 80048304
L_80048308:;
  c->r[28]=c->r[28]+0x00000001u; // 80048308
  c->r[30]=c->r[30]+0x00000004u; // 8004830C
  cmpu(c,0,c->r[28],0x00000008u); // 80048310
  if (crb(c,0)) { IRQCHK(c); goto L_800482AC; } // 80048314
  c->r[30]=0u+0x803C0000u; // 80048318
  c->r[28]=0u+0x00000000u; // 8004831C
  c->r[30]=c->r[30]+0x00002F30u; // 80048320
L_80048324:;
  c->r[29]=R32(c->r[13]+0xFFFFA510u); // 80048324
  c->r[3]=c->r[29]|c->r[29]; // 80048328
  c->lr=0x80048330u; f_8024B0E0(c); // 8004832C
  c->r[4]=R32(c->r[30]+0x00000000u); // 80048330
  cmpu(c,0,c->r[4],c->r[31]); // 80048334
  if (!crb(c,2)) { goto L_80048348; } // 80048338
  c->r[3]=c->r[29]|c->r[29]; // 8004833C
  c->lr=0x80048344u; f_8024B1C0(c); // 80048340
  goto L_80048380; // 80048344
L_80048348:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80048348
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004834C
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80048350
  cmpu(c,0,c->r[0],0x00000001u); // 80048354
  if (!crb(c,2)) { goto L_80048374; } // 80048358
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 8004835C
  cmpu(c,0,c->r[0],0x00000001u); // 80048360
  if (!crb(c,2)) { goto L_80048374; } // 80048364
  c->r[3]=c->r[29]|c->r[29]; // 80048368
  c->r[4]=c->r[30]|c->r[30]; // 8004836C
  c->lr=0x80048374u; f_8031EEDC(c); // 80048370
L_80048374:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 80048374
  c->r[3]=c->r[29]|c->r[29]; // 80048378
  c->lr=0x80048380u; f_8024B1C0(c); // 8004837C
L_80048380:;
  c->r[28]=c->r[28]+0x00000001u; // 80048380
  c->r[30]=c->r[30]+0x00000004u; // 80048384
  cmpu(c,0,c->r[28],0x00000008u); // 80048388
  if (crb(c,0)) { IRQCHK(c); goto L_80048324; } // 8004838C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048390
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048394
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048398
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004839C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800483A0
  c->lr=c->r[0]; // 800483A4
  c->r[1]=c->r[1]+0x00000020u; // 800483A8
  return; // 800483AC
}

// fn_800483B0
void f_800483B0(Ctx* __restrict c) {
  trace_call(0x800483B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800483B0
  c->r[0]=c->lr; // 800483B4
  c->r[6]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800483B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800483BC
  if (crb(c,0)) { goto L_800483F8; } // 800483C0
  c->r[0]=R32(c->r[3]+0x000000C4u); // 800483C4
  cmps(c,0,(int32_t)c->r[0],0); // 800483C8
  if (!crb(c,2)) { goto L_800483F0; } // 800483CC
  c->r[4]=0u+0x803C0000u; // 800483D0
  c->r[5]=0u+0x803C0000u; // 800483D4
  c->r[4]=c->r[4]+0x00002300u; // 800483D8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800483DC
  c->r[5]=c->r[5]+0x00002F30u; // 800483E0
  c->r[4]=R32(c->r[4]+0x00000020u); // 800483E4
  c->r[5]=c->r[5]+c->r[0]; // 800483E8
  c->lr=0x800483F0u; f_8004840C(c); // 800483EC
L_800483F0:;
  c->r[3]=0u+0x00000001u; // 800483F0
  goto L_800483FC; // 800483F4
L_800483F8:;
  c->r[3]=0u+0x00000000u; // 800483F8
L_800483FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800483FC
  c->lr=c->r[0]; // 80048400
  c->r[1]=c->r[1]+0x00000010u; // 80048404
  return; // 80048408
}

// fn_8004840C
void f_8004840C(Ctx* __restrict c) {
  trace_call(0x8004840Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004840C
  c->r[0]=c->lr; // 80048410
  W32(c->r[1]+0x00000104u,c->r[0]); // 80048414
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80048418
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 8004841C
  W32(c->r[1]+0x000000ECu,c->r[31]); // 80048420
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80048424
  c->r[30]=c->r[3]|c->r[3]; // 80048428
  W32(c->r[3]+0x000000C4u,c->r[4]); // 8004842C
  c->r[31]=R32(c->r[3]+0x00000030u); // 80048430
  W32(c->r[3]+0x000000C8u,c->r[5]); // 80048434
  c->r[3]=c->r[31]|c->r[31]; // 80048438
  c->r[4]=R32(c->r[4]+0x00000030u); // 8004843C
  c->lr=0x80048444u; f_8001109C(c); // 80048440
  c->r[4]=0u+0x00000000u; // 80048444
  c->r[6]=0u+0x00000001u; // 80048448
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8004844C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[6]<<((c->r[4])&31)); // 80048450
  c->r[7]=c->r[31]+0x0000001Cu; // 80048454
  W32(c->r[1]+0x000000C0u,c->r[7]); // 80048458
  c->r[0]=c->r[3]&c->r[0]; // 8004845C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 80048460
  W32(c->r[1]+0x000000C4u,c->r[4]); // 80048464
  cmpu(c,1,c->r[0],0x00000001u); // 80048468
  W32(c->r[1]+0x00000048u,c->r[7]); // 8004846C
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80048470
  W32(c->r[1]+0x000000A0u,c->r[7]); // 80048474
  W32(c->r[1]+0x000000A4u,c->r[4]); // 80048478
  if (!crb(c,6)) { goto L_800484D8; } // 8004847C
  c->r[5]=0u+0x00000002u; // 80048480
  c->r[4]=R32(c->r[7]+0x00000000u); // 80048484
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 80048488
  c->r[3]=0u+0x00000003u; // 8004848C
  c->r[4]=c->r[4]|c->r[0]; // 80048490
  W32(c->r[7]+0x00000000u,c->r[4]); // 80048494
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 80048498
  c->r[0]=c->r[4]|c->r[0]; // 8004849C
  W32(c->r[1]+0x000000C8u,c->r[7]); // 800484A0
  W32(c->r[1]+0x000000CCu,c->r[5]); // 800484A4
  W32(c->r[1]+0x00000040u,c->r[7]); // 800484A8
  W32(c->r[1]+0x00000044u,c->r[5]); // 800484AC
  W32(c->r[1]+0x000000A8u,c->r[7]); // 800484B0
  W32(c->r[1]+0x000000ACu,c->r[5]); // 800484B4
  W32(c->r[1]+0x000000D0u,c->r[7]); // 800484B8
  W32(c->r[1]+0x000000D4u,c->r[3]); // 800484BC
  W32(c->r[1]+0x00000038u,c->r[7]); // 800484C0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800484C4
  W32(c->r[1]+0x000000B0u,c->r[7]); // 800484C8
  W32(c->r[1]+0x000000B4u,c->r[3]); // 800484CC
  W32(c->r[7]+0x00000000u,c->r[0]); // 800484D0
  goto L_80048500; // 800484D4
L_800484D8:;
  c->r[3]=R32(c->r[7]+0x00000000u); // 800484D8
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 800484DC
  W32(c->r[1]+0x000000D8u,c->r[7]); // 800484E0
  c->r[0]=c->r[3]|c->r[0]; // 800484E4
  W32(c->r[1]+0x000000DCu,c->r[6]); // 800484E8
  W32(c->r[1]+0x00000030u,c->r[7]); // 800484EC
  W32(c->r[1]+0x00000034u,c->r[6]); // 800484F0
  W32(c->r[1]+0x000000B8u,c->r[7]); // 800484F4
  W32(c->r[1]+0x000000BCu,c->r[6]); // 800484F8
  W32(c->r[7]+0x00000000u,c->r[0]); // 800484FC
L_80048500:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80048500
  cmps(c,1,(int32_t)c->r[0],0); // 80048504
  if (crb(c,6)) { goto L_80048514; } // 80048508
  c->r[3]=c->r[31]|c->r[31]; // 8004850C
  c->lr=0x80048514u; f_80340A20(c); // 80048510
L_80048514:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80048514
  cmps(c,1,(int32_t)c->r[0],0); // 80048518
  if (crb(c,6)) { goto L_80048528; } // 8004851C
  c->r[3]=c->r[31]|c->r[31]; // 80048520
  c->lr=0x80048528u; f_80340B8C(c); // 80048524
L_80048528:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 80048528
  c->r[7]=0u+0x00000000u; // 8004852C
  c->r[6]=0u+0x00000001u; // 80048530
  W32(c->r[1]+0x0000008Cu,c->r[7]); // 80048534
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80048538
  c->r[8]=c->r[3]+0x0000001Cu; // 8004853C
  c->r[5]=((c->r[7])&0x20)?0u:(c->r[6]<<((c->r[7])&31)); // 80048540
  W32(c->r[1]+0x00000088u,c->r[8]); // 80048544
  c->r[0]=c->r[5]&c->r[0]; // 80048548
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 8004854C
  W32(c->r[1]+0x00000028u,c->r[8]); // 80048550
  cmpu(c,1,c->r[0],0x00000001u); // 80048554
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 80048558
  W32(c->r[1]+0x00000070u,c->r[8]); // 8004855C
  W32(c->r[1]+0x00000074u,c->r[7]); // 80048560
  if (crb(c,6)) { goto L_800485B4; } // 80048564
  c->r[4]=R32(c->r[8]+0x00000000u); // 80048568
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 8004856C
  W32(c->r[1]+0x00000090u,c->r[8]); // 80048570
  c->r[4]=c->r[4]|c->r[5]; // 80048574
  W32(c->r[8]+0x00000000u,c->r[4]); // 80048578
  c->r[0]=c->r[4]|c->r[0]; // 8004857C
  W32(c->r[1]+0x00000094u,c->r[7]); // 80048580
  W32(c->r[1]+0x00000020u,c->r[8]); // 80048584
  W32(c->r[1]+0x00000024u,c->r[7]); // 80048588
  W32(c->r[1]+0x00000078u,c->r[8]); // 8004858C
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 80048590
  W32(c->r[1]+0x00000098u,c->r[8]); // 80048594
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 80048598
  W32(c->r[1]+0x00000018u,c->r[8]); // 8004859C
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800485A0
  W32(c->r[1]+0x00000080u,c->r[8]); // 800485A4
  W32(c->r[1]+0x00000084u,c->r[6]); // 800485A8
  W32(c->r[8]+0x00000000u,c->r[0]); // 800485AC
  c->lr=0x800485B4u; f_8034007C(c); // 800485B0
L_800485B4:;
  c->r[31]=R32(c->r[30]+0x00000030u); // 800485B4
  c->r[4]=0u+0x804B0000u; // 800485B8
  {uint32_t ea=c->r[4]+0xFFFFC570u; c->r[0]=R32(ea); c->r[4]=ea;} // 800485BC
  c->r[5]=0u+0x00000000u; // 800485C0
  c->r[3]=R32(c->r[31]+0x00000020u); // 800485C4
  c->r[6]=0u+0x00000000u; // 800485C8
  c->r[7]=0u+0x00000000u; // 800485CC
  c->r[8]=0u+0x00000000u; // 800485D0
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800485D4
  if (!crb(c,6)) { goto L_800485F0; } // 800485D8
  c->r[3]=R32(c->r[31]+0x00000024u); // 800485DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800485E0
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800485E4
  if (!crb(c,6)) { goto L_800485F0; } // 800485E8
  c->r[8]=0u+0x00000001u; // 800485EC
L_800485F0:;
  cmps(c,1,(int32_t)c->r[8],0); // 800485F0
  if (crb(c,6)) { goto L_8004860C; } // 800485F4
  c->r[3]=R32(c->r[31]+0x00000028u); // 800485F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800485FC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80048600
  if (!crb(c,6)) { goto L_8004860C; } // 80048604
  c->r[7]=0u+0x00000001u; // 80048608
L_8004860C:;
  cmps(c,1,(int32_t)c->r[7],0); // 8004860C
  if (crb(c,6)) { goto L_80048688; } // 80048610
  c->r[3]=R32(c->r[31]+0x00000030u); // 80048614
  c->r[7]=0u+0x00000000u; // 80048618
  c->r[0]=R32(c->r[4]+0x00000010u); // 8004861C
  c->r[8]=0u+0x00000000u; // 80048620
  c->r[9]=0u+0x00000000u; // 80048624
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80048628
  if (!crb(c,6)) { goto L_80048644; } // 8004862C
  c->r[3]=R32(c->r[31]+0x00000034u); // 80048630
  c->r[0]=R32(c->r[4]+0x00000014u); // 80048634
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80048638
  if (!crb(c,6)) { goto L_80048644; } // 8004863C
  c->r[9]=0u+0x00000001u; // 80048640
L_80048644:;
  cmps(c,1,(int32_t)c->r[9],0); // 80048644
  if (crb(c,6)) { goto L_80048660; } // 80048648
  c->r[3]=R32(c->r[31]+0x00000038u); // 8004864C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80048650
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80048654
  if (!crb(c,6)) { goto L_80048660; } // 80048658
  c->r[8]=0u+0x00000001u; // 8004865C
L_80048660:;
  cmps(c,1,(int32_t)c->r[8],0); // 80048660
  if (crb(c,6)) { goto L_8004867C; } // 80048664
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80048668
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8004866C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80048670
  if (!crb(c,6)) { goto L_8004867C; } // 80048674
  c->r[7]=0u+0x00000001u; // 80048678
L_8004867C:;
  cmps(c,1,(int32_t)c->r[7],0); // 8004867C
  if (crb(c,6)) { goto L_80048688; } // 80048680
  c->r[6]=0u+0x00000001u; // 80048684
L_80048688:;
  cmps(c,1,(int32_t)c->r[6],0); // 80048688
  if (crb(c,6)) { goto L_800486E4; } // 8004868C
  c->r[3]=R32(c->r[31]+0x00000040u); // 80048690
  c->r[6]=0u+0x00000000u; // 80048694
  c->r[0]=R32(c->r[4]+0x00000020u); // 80048698
  c->r[7]=0u+0x00000000u; // 8004869C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800486A0
  if (!crb(c,6)) { goto L_800486BC; } // 800486A4
  c->r[3]=R32(c->r[31]+0x00000044u); // 800486A8
  c->r[0]=R32(c->r[4]+0x00000024u); // 800486AC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800486B0
  if (!crb(c,6)) { goto L_800486BC; } // 800486B4
  c->r[7]=0u+0x00000001u; // 800486B8
L_800486BC:;
  cmps(c,1,(int32_t)c->r[7],0); // 800486BC
  if (crb(c,6)) { goto L_800486D8; } // 800486C0
  c->r[3]=R32(c->r[31]+0x00000048u); // 800486C4
  c->r[0]=R32(c->r[4]+0x00000028u); // 800486C8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800486CC
  if (!crb(c,6)) { goto L_800486D8; } // 800486D0
  c->r[6]=0u+0x00000001u; // 800486D4
L_800486D8:;
  cmps(c,1,(int32_t)c->r[6],0); // 800486D8
  if (crb(c,6)) { goto L_800486E4; } // 800486DC
  c->r[5]=0u+0x00000001u; // 800486E0
L_800486E4:;
  cmps(c,1,(int32_t)c->r[5],0); // 800486E4
  if (!crb(c,6)) { goto L_80048814; } // 800486E8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800486EC
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[31]); // 800486F0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800486F4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800486F8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800486FC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048700
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80048704
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048708
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 8004870C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048710
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80048714
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048718
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 8004871C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80048720
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80048724
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048728
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8004872C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048730
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80048734
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048738
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8004873C
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80048740
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80048744
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80048748
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8004874C
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80048750
  fcmp(c,0,c->f[2],c->f[3]); // 80048754
  if (crb(c,2)) { goto L_80048778; } // 80048758
  c->f[0]=frsqrte(c->f[2]); // 8004875C
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[31]=c->ps1[31]=RF32(ea);} // 80048760
  {uint32_t ea=c->r[2]+0xFFFF8728u; c->f[3]=c->ps1[3]=RF32(ea);} // 80048764
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80048768
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8004876C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80048770
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80048774
L_80048778:;
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80048778
  c->r[7]=c->r[31]+0x0000001Cu; // 8004877C
  c->r[6]=0u+0x00000002u; // 80048780
  c->r[3]=0u+0x00000003u; // 80048784
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80048788
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8004878C
  c->r[0]=0u+0x00000001u; // 80048790
  W32(c->r[1]+0x00000060u,c->r[7]); // 80048794
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80048798
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 8004879C
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,0,ea,0,0);} // 800487A0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800487A4
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 800487A8
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800487AC
  W32(c->r[1]+0x00000064u,c->r[6]); // 800487B0
  c->r[4]=c->r[5]|c->r[4]; // 800487B4
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 800487B8
  c->r[0]=c->r[4]|c->r[0]; // 800487BC
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800487C0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800487C4
  W32(c->r[1]+0x00000010u,c->r[7]); // 800487C8
  cmps(c,1,(int32_t)c->r[0],0); // 800487CC
  W32(c->r[1]+0x00000014u,c->r[6]); // 800487D0
  W32(c->r[1]+0x00000050u,c->r[7]); // 800487D4
  W32(c->r[1]+0x00000054u,c->r[6]); // 800487D8
  W32(c->r[1]+0x00000068u,c->r[7]); // 800487DC
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 800487E0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800487E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800487E8
  W32(c->r[1]+0x00000058u,c->r[7]); // 800487EC
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 800487F0
  if (crb(c,6)) { goto L_80048800; } // 800487F4
  c->r[3]=c->r[31]|c->r[31]; // 800487F8
  c->lr=0x80048800u; f_80340A20(c); // 800487FC
L_80048800:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80048800
  cmps(c,1,(int32_t)c->r[0],0); // 80048804
  if (crb(c,6)) { goto L_80048814; } // 80048808
  c->r[3]=c->r[31]|c->r[31]; // 8004880C
  c->lr=0x80048814u; f_80340B8C(c); // 80048810
L_80048814:;
  c->r[5]=R32(c->r[30]+0x000000C8u); // 80048814
  c->r[3]=c->r[30]|c->r[30]; // 80048818
  c->r[4]=0u+0x00000003u; // 8004881C
  c->r[0]=0u-c->r[5]; // 80048820
  c->r[0]=c->r[0]|c->r[5]; // 80048824
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80048828
  c->lr=0x80048830u; f_8030FFA0(c); // 8004882C
  c->r[0]=R32(c->r[1]+0x00000104u); // 80048830
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80048834
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80048838
  c->r[31]=R32(c->r[1]+0x000000ECu); // 8004883C
  c->r[30]=R32(c->r[1]+0x000000E8u); // 80048840
  c->lr=c->r[0]; // 80048844
  c->r[1]=c->r[1]+0x00000100u; // 80048848
  return; // 8004884C
}

// fn_80048850
void f_80048850(Ctx* __restrict c) {
  trace_call(0x80048850u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048850
  c->r[0]=c->lr; // 80048854
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048858
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004885C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048860
  c->r[30]=c->r[5]|c->r[5]; // 80048864
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048868
  c->r[29]=c->r[4]|c->r[4]; // 8004886C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80048870
  c->r[28]=c->r[3]|c->r[3]; // 80048874
  c->r[3]=0u+0x000000C0u; // 80048878
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 8004887C
  c->lr=0x80048884u; f_8036AB9C(c); // 80048880
  cmps(c,0,(int32_t)c->r[3],0); // 80048884
  c->r[31]=c->r[3]|c->r[3]; // 80048888
  if (crb(c,2)) { goto L_800488AC; } // 8004888C
  c->r[4]=c->r[28]|c->r[28]; // 80048890
  c->r[5]=c->r[29]|c->r[29]; // 80048894
  c->r[6]=c->r[30]|c->r[30]; // 80048898
  c->lr=0x800488A0u; f_800472F4(c); // 8004889C
  c->r[3]=0u+0x80380000u; // 800488A0
  c->r[3]=c->r[3]+0x00004C10u; // 800488A4
  W32(c->r[31]+0x00000014u,c->r[3]); // 800488A8
L_800488AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800488AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800488B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800488B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800488B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800488BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800488C0
  c->lr=c->r[0]; // 800488C4
  c->r[1]=c->r[1]+0x00000020u; // 800488C8
  return; // 800488CC
}

// fn_800488D0
void f_800488D0(Ctx* __restrict c) {
  trace_call(0x800488D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800488D0
  c->r[0]=c->lr; // 800488D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800488D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800488DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800488E0
  c->r[30]=c->r[5]|c->r[5]; // 800488E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800488E8
  c->r[29]=c->r[4]|c->r[4]; // 800488EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800488F0
  c->r[28]=c->r[3]|c->r[3]; // 800488F4
  c->r[3]=0u+0x000000C0u; // 800488F8
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 800488FC
  c->lr=0x80048904u; f_8036AB9C(c); // 80048900
  cmps(c,0,(int32_t)c->r[3],0); // 80048904
  c->r[31]=c->r[3]|c->r[3]; // 80048908
  if (crb(c,2)) { goto L_8004892C; } // 8004890C
  c->r[4]=c->r[28]|c->r[28]; // 80048910
  c->r[5]=c->r[29]|c->r[29]; // 80048914
  c->r[6]=c->r[30]|c->r[30]; // 80048918
  c->lr=0x80048920u; f_800472F4(c); // 8004891C
  c->r[3]=0u+0x80380000u; // 80048920
  c->r[3]=c->r[3]+0x00004BC8u; // 80048924
  W32(c->r[31]+0x00000014u,c->r[3]); // 80048928
L_8004892C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004892C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048930
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048934
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048938
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004893C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048940
  c->lr=c->r[0]; // 80048944
  c->r[1]=c->r[1]+0x00000020u; // 80048948
  return; // 8004894C
}

// fn_80048950
void f_80048950(Ctx* __restrict c) {
  trace_call(0x80048950u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048950
  c->r[0]=c->lr; // 80048954
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048958
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004895C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048960
  c->r[30]=c->r[5]|c->r[5]; // 80048964
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048968
  c->r[29]=c->r[4]|c->r[4]; // 8004896C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80048970
  c->r[28]=c->r[3]|c->r[3]; // 80048974
  c->r[3]=0u+0x000000C0u; // 80048978
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 8004897C
  c->lr=0x80048984u; f_8036AB9C(c); // 80048980
  cmps(c,0,(int32_t)c->r[3],0); // 80048984
  c->r[31]=c->r[3]|c->r[3]; // 80048988
  if (crb(c,2)) { goto L_800489AC; } // 8004898C
  c->r[4]=c->r[28]|c->r[28]; // 80048990
  c->r[5]=c->r[29]|c->r[29]; // 80048994
  c->r[6]=c->r[30]|c->r[30]; // 80048998
  c->lr=0x800489A0u; f_800472F4(c); // 8004899C
  c->r[3]=0u+0x80380000u; // 800489A0
  c->r[3]=c->r[3]+0x00004B80u; // 800489A4
  W32(c->r[31]+0x00000014u,c->r[3]); // 800489A8
L_800489AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800489AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800489B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800489B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800489B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800489BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800489C0
  c->lr=c->r[0]; // 800489C4
  c->r[1]=c->r[1]+0x00000020u; // 800489C8
  return; // 800489CC
}

// fn_800489D0
void f_800489D0(Ctx* __restrict c) {
  trace_call(0x800489D0u);
  return; // 800489D0
}

// fn_800489D4
void f_800489D4(Ctx* __restrict c) {
  trace_call(0x800489D4u);
  return; // 800489D4
}

// fn_800489D8
void f_800489D8(Ctx* __restrict c) {
  trace_call(0x800489D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800489D8
  c->r[0]=c->lr; // 800489DC
  cmps(c,0,(int32_t)c->r[3],0); // 800489E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800489E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800489E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800489EC
  c->r[30]=c->r[4]|c->r[4]; // 800489F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800489F4
  c->r[29]=c->r[3]|c->r[3]; // 800489F8
  if (crb(c,2)) { goto L_80048AC0; } // 800489FC
  if (crb(c,2)) { goto L_80048A0C; } // 80048A00
  c->r[4]=0u+0x00000000u; // 80048A04
  c->lr=0x80048A0Cu; f_8030BAE0(c); // 80048A08
L_80048A0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80048A0C
  if (!crb(c,1)) { goto L_80048AC0; } // 80048A10
  c->lr=0x80048A18u; f_8028B53C(c); // 80048A14
  c->r[31]=0u+0x804B0000u; // 80048A18
  c->r[31]=c->r[31]+0xFFFFC800u; // 80048A1C
  c->r[3]=c->r[31]|c->r[31]; // 80048A20
  c->lr=0x80048A28u; f_8024B0E0(c); // 80048A24
  cmps(c,0,(int32_t)c->r[29],0); // 80048A28
  if (!crb(c,2)) { goto L_80048A3C; } // 80048A2C
  c->r[3]=c->r[31]|c->r[31]; // 80048A30
  c->lr=0x80048A38u; f_8024B1C0(c); // 80048A34
  goto L_80048AC0; // 80048A38
L_80048A3C:;
  c->r[0]=0u+0x80000000u; // 80048A3C
  cmpu(c,0,c->r[29],c->r[0]); // 80048A40
  if (crb(c,0)) { goto L_80048A60; } // 80048A44
  c->r[3]=0u+0x81800000u; // 80048A48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048A4C
  cmpu(c,0,c->r[29],c->r[0]); // 80048A50
  if (!crb(c,0)) { goto L_80048A60; } // 80048A54
  c->r[30]=0u+0x00000000u; // 80048A58
  goto L_80048AA0; // 80048A5C
L_80048A60:;
  c->r[0]=0u+0x90000000u; // 80048A60
  cmpu(c,0,c->r[29],c->r[0]); // 80048A64
  if (crb(c,0)) { goto L_80048A80; } // 80048A68
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048A6C
  cmpu(c,0,c->r[29],c->r[0]); // 80048A70
  if (!crb(c,0)) { goto L_80048A80; } // 80048A74
  c->r[30]=0u+0x00000001u; // 80048A78
  goto L_80048AA0; // 80048A7C
L_80048A80:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048A80
  cmpu(c,0,c->r[29],c->r[0]); // 80048A84
  if (crb(c,0)) { goto L_80048AA0; } // 80048A88
  c->r[3]=0u+0x98000000u; // 80048A8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048A90
  cmpu(c,0,c->r[29],c->r[0]); // 80048A94
  if (!crb(c,0)) { goto L_80048AA0; } // 80048A98
  c->r[30]=0u+0x00000002u; // 80048A9C
L_80048AA0:;
  c->r[3]=0u+0x804B0000u; // 80048AA0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80048AA4
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80048AA8
  c->r[4]=c->r[29]|c->r[29]; // 80048AAC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80048AB0
  c->lr=0x80048AB8u; f_8023B550(c); // 80048AB4
  c->r[3]=c->r[31]|c->r[31]; // 80048AB8
  c->lr=0x80048AC0u; f_8024B1C0(c); // 80048ABC
L_80048AC0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048AC0
  c->r[3]=c->r[29]|c->r[29]; // 80048AC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048AC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048ACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048AD0
  c->lr=c->r[0]; // 80048AD4
  c->r[1]=c->r[1]+0x00000020u; // 80048AD8
  return; // 80048ADC
}

// fn_80048AE0
void f_80048AE0(Ctx* __restrict c) {
  trace_call(0x80048AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048AE0
  c->r[0]=c->lr; // 80048AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80048AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80048AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048AF4
  c->r[30]=c->r[4]|c->r[4]; // 80048AF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048AFC
  c->r[29]=c->r[3]|c->r[3]; // 80048B00
  if (crb(c,2)) { goto L_80048BC8; } // 80048B04
  if (crb(c,2)) { goto L_80048B14; } // 80048B08
  c->r[4]=0u+0x00000000u; // 80048B0C
  c->lr=0x80048B14u; f_8030BAE0(c); // 80048B10
L_80048B14:;
  cmps(c,0,(int32_t)c->r[30],0); // 80048B14
  if (!crb(c,1)) { goto L_80048BC8; } // 80048B18
  c->lr=0x80048B20u; f_8028B53C(c); // 80048B1C
  c->r[31]=0u+0x804B0000u; // 80048B20
  c->r[31]=c->r[31]+0xFFFFC800u; // 80048B24
  c->r[3]=c->r[31]|c->r[31]; // 80048B28
  c->lr=0x80048B30u; f_8024B0E0(c); // 80048B2C
  cmps(c,0,(int32_t)c->r[29],0); // 80048B30
  if (!crb(c,2)) { goto L_80048B44; } // 80048B34
  c->r[3]=c->r[31]|c->r[31]; // 80048B38
  c->lr=0x80048B40u; f_8024B1C0(c); // 80048B3C
  goto L_80048BC8; // 80048B40
L_80048B44:;
  c->r[0]=0u+0x80000000u; // 80048B44
  cmpu(c,0,c->r[29],c->r[0]); // 80048B48
  if (crb(c,0)) { goto L_80048B68; } // 80048B4C
  c->r[3]=0u+0x81800000u; // 80048B50
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048B54
  cmpu(c,0,c->r[29],c->r[0]); // 80048B58
  if (!crb(c,0)) { goto L_80048B68; } // 80048B5C
  c->r[30]=0u+0x00000000u; // 80048B60
  goto L_80048BA8; // 80048B64
L_80048B68:;
  c->r[0]=0u+0x90000000u; // 80048B68
  cmpu(c,0,c->r[29],c->r[0]); // 80048B6C
  if (crb(c,0)) { goto L_80048B88; } // 80048B70
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048B74
  cmpu(c,0,c->r[29],c->r[0]); // 80048B78
  if (!crb(c,0)) { goto L_80048B88; } // 80048B7C
  c->r[30]=0u+0x00000001u; // 80048B80
  goto L_80048BA8; // 80048B84
L_80048B88:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048B88
  cmpu(c,0,c->r[29],c->r[0]); // 80048B8C
  if (crb(c,0)) { goto L_80048BA8; } // 80048B90
  c->r[3]=0u+0x98000000u; // 80048B94
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048B98
  cmpu(c,0,c->r[29],c->r[0]); // 80048B9C
  if (!crb(c,0)) { goto L_80048BA8; } // 80048BA0
  c->r[30]=0u+0x00000002u; // 80048BA4
L_80048BA8:;
  c->r[3]=0u+0x804B0000u; // 80048BA8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80048BAC
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80048BB0
  c->r[4]=c->r[29]|c->r[29]; // 80048BB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80048BB8
  c->lr=0x80048BC0u; f_8023B550(c); // 80048BBC
  c->r[3]=c->r[31]|c->r[31]; // 80048BC0
  c->lr=0x80048BC8u; f_8024B1C0(c); // 80048BC4
L_80048BC8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048BC8
  c->r[3]=c->r[29]|c->r[29]; // 80048BCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048BD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048BD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048BD8
  c->lr=c->r[0]; // 80048BDC
  c->r[1]=c->r[1]+0x00000020u; // 80048BE0
  return; // 80048BE4
}

// fn_80048BE8
void f_80048BE8(Ctx* __restrict c) {
  trace_call(0x80048BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048BE8
  c->r[0]=c->lr; // 80048BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80048BF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048BF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80048BF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048BFC
  c->r[30]=c->r[4]|c->r[4]; // 80048C00
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048C04
  c->r[29]=c->r[3]|c->r[3]; // 80048C08
  if (crb(c,2)) { goto L_80048CD0; } // 80048C0C
  if (crb(c,2)) { goto L_80048C1C; } // 80048C10
  c->r[4]=0u+0x00000000u; // 80048C14
  c->lr=0x80048C1Cu; f_8030BAE0(c); // 80048C18
L_80048C1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80048C1C
  if (!crb(c,1)) { goto L_80048CD0; } // 80048C20
  c->lr=0x80048C28u; f_8028B53C(c); // 80048C24
  c->r[31]=0u+0x804B0000u; // 80048C28
  c->r[31]=c->r[31]+0xFFFFC800u; // 80048C2C
  c->r[3]=c->r[31]|c->r[31]; // 80048C30
  c->lr=0x80048C38u; f_8024B0E0(c); // 80048C34
  cmps(c,0,(int32_t)c->r[29],0); // 80048C38
  if (!crb(c,2)) { goto L_80048C4C; } // 80048C3C
  c->r[3]=c->r[31]|c->r[31]; // 80048C40
  c->lr=0x80048C48u; f_8024B1C0(c); // 80048C44
  goto L_80048CD0; // 80048C48
L_80048C4C:;
  c->r[0]=0u+0x80000000u; // 80048C4C
  cmpu(c,0,c->r[29],c->r[0]); // 80048C50
  if (crb(c,0)) { goto L_80048C70; } // 80048C54
  c->r[3]=0u+0x81800000u; // 80048C58
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048C5C
  cmpu(c,0,c->r[29],c->r[0]); // 80048C60
  if (!crb(c,0)) { goto L_80048C70; } // 80048C64
  c->r[30]=0u+0x00000000u; // 80048C68
  goto L_80048CB0; // 80048C6C
L_80048C70:;
  c->r[0]=0u+0x90000000u; // 80048C70
  cmpu(c,0,c->r[29],c->r[0]); // 80048C74
  if (crb(c,0)) { goto L_80048C90; } // 80048C78
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048C7C
  cmpu(c,0,c->r[29],c->r[0]); // 80048C80
  if (!crb(c,0)) { goto L_80048C90; } // 80048C84
  c->r[30]=0u+0x00000001u; // 80048C88
  goto L_80048CB0; // 80048C8C
L_80048C90:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048C90
  cmpu(c,0,c->r[29],c->r[0]); // 80048C94
  if (crb(c,0)) { goto L_80048CB0; } // 80048C98
  c->r[3]=0u+0x98000000u; // 80048C9C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048CA0
  cmpu(c,0,c->r[29],c->r[0]); // 80048CA4
  if (!crb(c,0)) { goto L_80048CB0; } // 80048CA8
  c->r[30]=0u+0x00000002u; // 80048CAC
L_80048CB0:;
  c->r[3]=0u+0x804B0000u; // 80048CB0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80048CB4
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80048CB8
  c->r[4]=c->r[29]|c->r[29]; // 80048CBC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80048CC0
  c->lr=0x80048CC8u; f_8023B550(c); // 80048CC4
  c->r[3]=c->r[31]|c->r[31]; // 80048CC8
  c->lr=0x80048CD0u; f_8024B1C0(c); // 80048CCC
L_80048CD0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048CD0
  c->r[3]=c->r[29]|c->r[29]; // 80048CD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048CD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048CDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048CE0
  c->lr=c->r[0]; // 80048CE4
  c->r[1]=c->r[1]+0x00000020u; // 80048CE8
  return; // 80048CEC
}

// fn_80048CF0
void f_80048CF0(Ctx* __restrict c) {
  trace_call(0x80048CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048CF0
  c->r[0]=c->lr; // 80048CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80048CF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048CFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80048D00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048D04
  c->r[30]=c->r[4]|c->r[4]; // 80048D08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048D0C
  c->r[29]=c->r[3]|c->r[3]; // 80048D10
  if (crb(c,2)) { goto L_80048DD8; } // 80048D14
  if (crb(c,2)) { goto L_80048D24; } // 80048D18
  c->r[4]=0u+0x00000000u; // 80048D1C
  c->lr=0x80048D24u; f_8030BAE0(c); // 80048D20
L_80048D24:;
  cmps(c,0,(int32_t)c->r[30],0); // 80048D24
  if (!crb(c,1)) { goto L_80048DD8; } // 80048D28
  c->lr=0x80048D30u; f_8028B53C(c); // 80048D2C
  c->r[31]=0u+0x804B0000u; // 80048D30
  c->r[31]=c->r[31]+0xFFFFC800u; // 80048D34
  c->r[3]=c->r[31]|c->r[31]; // 80048D38
  c->lr=0x80048D40u; f_8024B0E0(c); // 80048D3C
  cmps(c,0,(int32_t)c->r[29],0); // 80048D40
  if (!crb(c,2)) { goto L_80048D54; } // 80048D44
  c->r[3]=c->r[31]|c->r[31]; // 80048D48
  c->lr=0x80048D50u; f_8024B1C0(c); // 80048D4C
  goto L_80048DD8; // 80048D50
L_80048D54:;
  c->r[0]=0u+0x80000000u; // 80048D54
  cmpu(c,0,c->r[29],c->r[0]); // 80048D58
  if (crb(c,0)) { goto L_80048D78; } // 80048D5C
  c->r[3]=0u+0x81800000u; // 80048D60
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048D64
  cmpu(c,0,c->r[29],c->r[0]); // 80048D68
  if (!crb(c,0)) { goto L_80048D78; } // 80048D6C
  c->r[30]=0u+0x00000000u; // 80048D70
  goto L_80048DB8; // 80048D74
L_80048D78:;
  c->r[0]=0u+0x90000000u; // 80048D78
  cmpu(c,0,c->r[29],c->r[0]); // 80048D7C
  if (crb(c,0)) { goto L_80048D98; } // 80048D80
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048D84
  cmpu(c,0,c->r[29],c->r[0]); // 80048D88
  if (!crb(c,0)) { goto L_80048D98; } // 80048D8C
  c->r[30]=0u+0x00000001u; // 80048D90
  goto L_80048DB8; // 80048D94
L_80048D98:;
  c->r[0]=R32(c->r[13]+0xFFFFA3C8u); // 80048D98
  cmpu(c,0,c->r[29],c->r[0]); // 80048D9C
  if (crb(c,0)) { goto L_80048DB8; } // 80048DA0
  c->r[3]=0u+0x98000000u; // 80048DA4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80048DA8
  cmpu(c,0,c->r[29],c->r[0]); // 80048DAC
  if (!crb(c,0)) { goto L_80048DB8; } // 80048DB0
  c->r[30]=0u+0x00000002u; // 80048DB4
L_80048DB8:;
  c->r[3]=0u+0x804B0000u; // 80048DB8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80048DBC
  c->r[3]=c->r[3]+0xFFFFC7C0u; // 80048DC0
  c->r[4]=c->r[29]|c->r[29]; // 80048DC4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80048DC8
  c->lr=0x80048DD0u; f_8023B550(c); // 80048DCC
  c->r[3]=c->r[31]|c->r[31]; // 80048DD0
  c->lr=0x80048DD8u; f_8024B1C0(c); // 80048DD4
L_80048DD8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048DD8
  c->r[3]=c->r[29]|c->r[29]; // 80048DDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048DE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048DE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048DE8
  c->lr=c->r[0]; // 80048DEC
  c->r[1]=c->r[1]+0x00000020u; // 80048DF0
  return; // 80048DF4
}

// fn_80048DF8
void f_80048DF8(Ctx* __restrict c) {
  trace_call(0x80048DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048DF8
  c->r[0]=c->lr; // 80048DFC
  c->r[3]=c->r[13]+0xFFFF9540u; // 80048E00
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048E04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80048E08
  c->r[31]=R32(c->r[2]+0xFFFFBF18u); // 80048E0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048E10
  c->r[30]=0u+0x80010000u; // 80048E14
  c->r[4]=c->r[30]+0xFFFF8BD8u; // 80048E18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048E1C
  c->r[29]=0u+0x803C0000u; // 80048E20
  c->r[29]=c->r[29]+0x00002ED8u; // 80048E24
  W32(c->r[13]+0xFFFF9540u,c->r[31]); // 80048E28
  c->r[5]=c->r[29]+0x00000000u; // 80048E2C
  c->lr=0x80048E34u; f_800C2A60(c); // 80048E30
  W32(c->r[13]+0xFFFF9544u,c->r[31]); // 80048E34
  c->r[4]=c->r[30]+0xFFFF8BD8u; // 80048E38
  c->r[5]=c->r[29]+0x0000000Cu; // 80048E3C
  c->r[3]=c->r[13]+0xFFFF9544u; // 80048E40
  c->lr=0x80048E48u; f_800C2A60(c); // 80048E44
  c->r[31]=0u+0x80010000u; // 80048E48
  c->r[3]=c->r[29]+0x00000028u; // 80048E4C
  c->r[4]=c->r[31]+0xFFFF9804u; // 80048E50
  c->r[5]=c->r[30]+0xFFFF8BD8u; // 80048E54
  c->r[6]=0u+0x00000004u; // 80048E58
  c->r[7]=0u+0x00000008u; // 80048E5C
  c->lr=0x80048E64u; f_800C2B8C(c); // 80048E60
  c->r[4]=0u+0x80050000u; // 80048E64
  c->r[5]=c->r[29]+0x00000018u; // 80048E68
  c->r[4]=c->r[4]+0xFFFF8EC0u; // 80048E6C
  c->r[3]=0u+0x00000000u; // 80048E70
  c->lr=0x80048E78u; f_800C2A60(c); // 80048E74
  c->r[3]=c->r[29]+0x00000058u; // 80048E78
  c->r[4]=c->r[31]+0xFFFF9804u; // 80048E7C
  c->r[5]=c->r[30]+0xFFFF8BD8u; // 80048E80
  c->r[6]=0u+0x00000004u; // 80048E84
  c->r[7]=0u+0x00000008u; // 80048E88
  c->lr=0x80048E90u; f_800C2B8C(c); // 80048E8C
  c->r[4]=0u+0x80050000u; // 80048E90
  c->r[5]=c->r[29]+0x00000048u; // 80048E94
  c->r[4]=c->r[4]+0xFFFF8EDCu; // 80048E98
  c->r[3]=0u+0x00000000u; // 80048E9C
  c->lr=0x80048EA4u; f_800C2A60(c); // 80048EA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048EA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048EA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048EAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048EB0
  c->lr=c->r[0]; // 80048EB4
  c->r[1]=c->r[1]+0x00000020u; // 80048EB8
  return; // 80048EBC
}

// fn_80048EC0
void f_80048EC0(Ctx* __restrict c) {
  trace_call(0x80048EC0u);
  c->r[3]=0u+0x803C0000u; // 80048EC0
  c->r[4]=0u+0x80010000u; // 80048EC4
  c->r[3]=c->r[3]+0x00002F00u; // 80048EC8
  c->r[5]=0u+0x00000004u; // 80048ECC
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 80048ED0
  c->r[6]=0u+0x00000008u; // 80048ED4
  f_800C2C84(c); return; // 80048ED8
}

// fn_80048EDC
void f_80048EDC(Ctx* __restrict c) {
  trace_call(0x80048EDCu);
  c->r[3]=0u+0x803C0000u; // 80048EDC
  c->r[4]=0u+0x80010000u; // 80048EE0
  c->r[3]=c->r[3]+0x00002F30u; // 80048EE4
  c->r[5]=0u+0x00000004u; // 80048EE8
  c->r[4]=c->r[4]+0xFFFF8BD8u; // 80048EEC
  c->r[6]=0u+0x00000008u; // 80048EF0
  f_800C2C84(c); return; // 80048EF4
}

// fn_80048EF8
void f_80048EF8(Ctx* __restrict c) {
  trace_call(0x80048EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048EF8
  c->r[0]=c->lr; // 80048EFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80048F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80048F04
  c->r[31]=c->r[3]|c->r[3]; // 80048F08
  c->lr=0x80048F10u; f_80040B7C(c); // 80048F0C
  c->r[4]=0u+0x80380000u; // 80048F10
  c->r[3]=c->r[31]+0x00000150u; // 80048F14
  c->r[4]=c->r[4]+0x00004CE8u; // 80048F18
  W32(c->r[31]+0x00000014u,c->r[4]); // 80048F1C
  c->lr=0x80048F24u; f_8009AD40(c); // 80048F20
  c->r[0]=0u+0x00000000u; // 80048F24
  W32(c->r[31]+0x00000144u,c->r[0]); // 80048F28
  c->r[0]=R32(c->r[31]+0x000000ACu); // 80048F2C
  cmps(c,0,(int32_t)c->r[0],0); // 80048F30
  if (crb(c,2)) { goto L_80048F44; } // 80048F34
  c->r[0]=R32(c->r[31]+0x00000144u); // 80048F38
  c->r[0]=c->r[0]|0x00000004u; // 80048F3C
  W32(c->r[31]+0x00000144u,c->r[0]); // 80048F40
L_80048F44:;
  c->r[3]=c->r[31]|c->r[31]; // 80048F44
  c->r[4]=0u+0x00000008u; // 80048F48
  c->r[5]=0u+0x00000001u; // 80048F4C
  c->lr=0x80048F54u; f_8030FFA0(c); // 80048F50
  c->r[3]=c->r[31]|c->r[31]; // 80048F54
  c->r[4]=0u+0x00000009u; // 80048F58
  c->r[5]=0u+0x00000000u; // 80048F5C
  c->lr=0x80048F64u; f_8030FFA0(c); // 80048F60
  c->r[3]=c->r[31]|c->r[31]; // 80048F64
  c->r[4]=0u+0x00000006u; // 80048F68
  c->r[5]=0u+0x00000000u; // 80048F6C
  c->lr=0x80048F74u; f_8030FFA0(c); // 80048F70
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[0]=c->ps1[0]=RF32(ea);} // 80048F74
  c->r[3]=c->r[31]|c->r[31]; // 80048F78
  {uint32_t ea=c->r[31]+0x00000208u; WF32(ea,c->f[0]);} // 80048F7C
  c->lr=0x80048F84u; f_8004A3E8(c); // 80048F80
  c->r[3]=c->r[31]|c->r[31]; // 80048F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80048F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80048F8C
  c->lr=c->r[0]; // 80048F90
  c->r[1]=c->r[1]+0x00000010u; // 80048F94
  return; // 80048F98
}

// fn_80048F9C
void f_80048F9C(Ctx* __restrict c) {
  trace_call(0x80048F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80048F9C
  c->r[0]=c->lr; // 80048FA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80048FA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80048FA8
  c->r[31]=c->r[5]|c->r[5]; // 80048FAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80048FB0
  c->r[30]=c->r[4]|c->r[4]; // 80048FB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80048FB8
  c->r[29]=c->r[3]|c->r[3]; // 80048FBC
  c->r[3]=0u+0x00000290u; // 80048FC0
  c->r[4]=R32(c->r[13]+0xFFFFA540u); // 80048FC4
  c->lr=0x80048FCCu; f_8036AB9C(c); // 80048FC8
  cmps(c,0,(int32_t)c->r[3],0); // 80048FCC
  if (crb(c,2)) { goto L_80048FE4; } // 80048FD0
  c->r[4]=c->r[29]|c->r[29]; // 80048FD4
  c->r[5]=c->r[30]|c->r[30]; // 80048FD8
  c->r[6]=c->r[31]|c->r[31]; // 80048FDC
  c->lr=0x80048FE4u; f_80048EF8(c); // 80048FE0
L_80048FE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80048FE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80048FE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80048FEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80048FF0
  c->lr=c->r[0]; // 80048FF4
  c->r[1]=c->r[1]+0x00000020u; // 80048FF8
  return; // 80048FFC
}

// fn_80049000
void f_80049000(Ctx* __restrict c) {
  trace_call(0x80049000u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80049000
  c->r[12]=c->r[1]|c->r[1]; // 80049004
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 80049008
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8004900C
  c->r[0]=c->lr; // 80049010
  W32(c->r[12]+0x00000004u,c->r[0]); // 80049014
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80049018
  c->r[31]=c->r[3]|c->r[3]; // 8004901C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80049020
  c->r[0]=R32(c->r[3]+0x0000025Cu); // 80049024
  cmps(c,0,(int32_t)c->r[0],0); // 80049028
  if (crb(c,2)) { goto L_800490C4; } // 8004902C
  c->lr=0x80049034u; f_8004B09C(c); // 80049030
  cmps(c,0,(int32_t)c->r[3],0); // 80049034
  if (crb(c,2)) { goto L_800490C4; } // 80049038
  c->r[30]=R32(c->r[31]+0x00000030u); // 8004903C
  c->r[4]=0u+0x00000002u; // 80049040
  c->r[3]=0u+0x00000001u; // 80049044
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80049048
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8004904C
  c->r[5]=c->r[30]+0x0000001Cu; // 80049050
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80049054
  W32(c->r[1]+0x00000018u,c->r[5]); // 80049058
  c->r[0]=c->r[3]&c->r[0]; // 8004905C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 80049060
  W32(c->r[1]+0x00000010u,c->r[5]); // 80049064
  cmpu(c,0,c->r[0],0x00000001u); // 80049068
  W32(c->r[1]+0x00000014u,c->r[4]); // 8004906C
  if (!crb(c,2)) { goto L_8004907C; } // 80049070
  c->r[3]=c->r[30]|c->r[30]; // 80049074
  c->lr=0x8004907Cu; f_8034007C(c); // 80049078
L_8004907C:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004907C
  c->r[0]=0u+0x00000001u; // 80049080
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80049084
  c->r[3]=c->r[31]|c->r[31]; // 80049088
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004908C
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049090
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 80049094
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80049098
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 8004909C
  W32(c->r[31]+0x00000280u,c->r[0]); // 800490A0
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[0]);} // 800490A4
  c->lr=0x800490ACu; f_8004A1B4(c); // 800490A8
  c->r[3]=c->r[31]|c->r[31]; // 800490AC
  c->lr=0x800490B4u; f_8004A324(c); // 800490B0
  c->r[0]=R32(c->r[31]+0x00000144u); // 800490B4
  c->r[0]=c->r[0]|0x00000600u; // 800490B8
  W32(c->r[31]+0x00000144u,c->r[0]); // 800490BC
  goto L_80049150; // 800490C0
L_800490C4:;
  c->r[0]=0u+0x00000000u; // 800490C4
  c->r[3]=0u+0x803D0000u; // 800490C8
  W32(c->r[31]+0x00000280u,c->r[0]); // 800490CC
  c->r[3]=c->r[3]+0x0000407Cu; // 800490D0
  c->r[0]=R32(c->r[31]+0x00000144u); // 800490D4
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800490D8
  {uint32_t ea=c->r[31]+0x00000210u; c->f[0]=c->ps1[0]=RF32(ea);} // 800490DC
  c->r[0]=rotl(c->r[0],23)&0x00000001u; cr0(c,c->r[0]); // 800490E0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800490E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800490E8
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[0]);} // 800490EC
  if (crb(c,2)) { goto L_80049150; } // 800490F0
  {uint32_t ea=c->r[31]+0x0000020Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800490F4
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800490F8
  fcmp(c,0,c->f[0],c->f[2]); // 800490FC
  if (!crb(c,1)) { goto L_80049110; } // 80049100
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80049104
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[0]);} // 80049108
  goto L_80049150; // 8004910C
L_80049110:;
  {uint32_t ea=c->r[31]+0x00000208u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049110
  {uint32_t ea=c->r[31]+0x000001F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049114
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80049118
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004911C
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[0]);} // 80049120
  fcmp(c,0,c->f[0],c->f[2]); // 80049124
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80049128
  if (!crb(c,2)) { goto L_80049150; } // 8004912C
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[2]);} // 80049130
  c->r[3]=c->r[31]|c->r[31]; // 80049134
  c->lr=0x8004913Cu; f_8004A1B4(c); // 80049138
  c->r[3]=c->r[31]|c->r[31]; // 8004913C
  c->lr=0x80049144u; f_8004A324(c); // 80049140
  c->r[0]=R32(c->r[31]+0x00000144u); // 80049144
  c->r[0]=c->r[0]|0x00000400u; // 80049148
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004914C
L_80049150:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80049150
  c->r[0]=R32(c->r[10]+0x00000004u); // 80049154
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80049158
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 8004915C
  c->lr=c->r[0]; // 80049160
  c->r[1]=c->r[10]|c->r[10]; // 80049164
  return; // 80049168
}

// fn_8004916C
void f_8004916C(Ctx* __restrict c) {
  trace_call(0x8004916Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 8004916C
  c->r[12]=c->r[1]|c->r[1]; // 80049170
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80049174
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80049178
  c->r[0]=c->lr; // 8004917C
  c->r[4]=0u+0x00000007u; // 80049180
  W32(c->r[12]+0x00000004u,c->r[0]); // 80049184
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80049188
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 8004918C
  W32(c->r[12]+0xFFFFFFECu,c->r[31]); // 80049190
  W32(c->r[12]+0xFFFFFFE8u,c->r[30]); // 80049194
  c->r[30]=c->r[3]|c->r[3]; // 80049198
  c->r[3]=c->r[3]+0x00000144u; // 8004919C
  c->lr=0x800491A4u; f_8001F874(c); // 800491A0
  cmps(c,0,(int32_t)c->r[3],0); // 800491A4
  if (crb(c,2)) { goto L_800492F8; } // 800491A8
  c->r[3]=R32(c->r[30]+0x000001E4u); // 800491AC
  c->lr=0x800491B4u; f_80012B14(c); // 800491B0
  c->lr=0x800491B8u; f_80012B0C(c); // 800491B4
  c->lr=0x800491BCu; f_80012B04(c); // 800491B8
  c->r[31]=c->r[3]|c->r[3]; // 800491BC
  c->r[3]=c->r[1]+0x000000D0u; // 800491C0
  c->lr=0x800491C8u; f_80013BD0(c); // 800491C4
  c->r[4]=R32(c->r[30]+0x000001E8u); // 800491C8
  c->r[3]=c->r[31]|c->r[31]; // 800491CC
  c->r[5]=c->r[1]+0x000000D0u; // 800491D0
  c->lr=0x800491D8u; f_80013BD4(c); // 800491D4
  c->r[3]=R32(c->r[30]+0x000001E4u); // 800491D8
  c->lr=0x800491E0u; f_80012AFC(c); // 800491DC
  c->lr=0x800491E4u; f_80016A58(c); // 800491E0
  c->r[4]=c->r[3]|c->r[3]; // 800491E4
  c->r[3]=c->r[1]+0x00000070u; // 800491E8
  c->r[5]=c->r[1]+0x000000D0u; // 800491EC
  c->lr=0x800491F4u; f_8001D0BC(c); // 800491F0
  c->r[3]=c->r[1]+0x000000D0u; // 800491F4
  c->r[4]=c->r[1]+0x00000070u; // 800491F8
  c->lr=0x80049200u; f_80016CFC(c); // 800491FC
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049200
  {uint32_t ea=c->r[30]+0x000001F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049204
  fcmp(c,0,c->f[0],c->f[1]); // 80049208
  if (crb(c,2)) { goto L_8004925C; } // 8004920C
  c->r[3]=c->r[1]+0x00000010u; // 80049210
  c->lr=0x80049218u; f_8002F2F0(c); // 80049214
  c->r[31]=c->r[3]|c->r[3]; // 80049218
  c->lr=0x80049220u; f_80049678(c); // 8004921C
  c->r[4]=c->r[3]|c->r[3]; // 80049220
  c->r[5]=c->r[31]|c->r[31]; // 80049224
  c->r[3]=c->r[1]+0x00000050u; // 80049228
  c->lr=0x80049230u; f_80049580(c); // 8004922C
  c->r[31]=c->r[3]|c->r[3]; // 80049230
  c->r[3]=c->r[1]+0x000000D0u; // 80049234
  c->lr=0x8004923Cu; f_8001D38C(c); // 80049238
  c->r[4]=c->r[3]|c->r[3]; // 8004923C
  c->r[5]=c->r[31]|c->r[31]; // 80049240
  c->r[3]=c->r[1]+0x00000060u; // 80049244
  c->lr=0x8004924Cu; f_80049484(c); // 80049248
  c->r[3]=c->r[1]+0x000000D0u; // 8004924C
  c->lr=0x80049254u; f_80016D50(c); // 80049250
  c->r[4]=c->r[1]+0x00000060u; // 80049254
  c->lr=0x8004925Cu; f_8002FBCC(c); // 80049258
L_8004925C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004925C
  c->lr=0x80049264u; f_80012AFC(c); // 80049260
  c->r[4]=0u+0x00000000u; // 80049264
  c->lr=0x8004926Cu; f_80016ABC(c); // 80049268
  c->r[3]=c->r[30]|c->r[30]; // 8004926C
  c->lr=0x80049274u; f_80012AFC(c); // 80049270
  c->lr=0x80049278u; f_80016A58(c); // 80049274
  c->r[4]=c->r[3]|c->r[3]; // 80049278
  c->r[3]=c->r[1]+0x000000A0u; // 8004927C
  c->lr=0x80049284u; f_80016D58(c); // 80049280
  c->r[0]=R32(c->r[30]+0x000001FCu); // 80049284
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80049288
  if (crb(c,2)) { goto L_800492AC; } // 8004928C
  c->r[3]=c->r[1]+0x000000D0u; // 80049290
  c->lr=0x80049298u; f_80013CF0(c); // 80049294
  c->r[31]=c->r[3]|c->r[3]; // 80049298
  c->r[3]=c->r[1]+0x000000A0u; // 8004929C
  c->lr=0x800492A4u; f_80016DAC(c); // 800492A0
  c->r[4]=c->r[31]|c->r[31]; // 800492A4
  c->lr=0x800492ACu; f_8000E6F4(c); // 800492A8
L_800492AC:;
  c->r[0]=R32(c->r[30]+0x000001FCu); // 800492AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800492B0
  if (crb(c,2)) { goto L_800492D4; } // 800492B4
  c->r[3]=c->r[1]+0x000000D0u; // 800492B8
  c->lr=0x800492C0u; f_8001D38C(c); // 800492BC
  c->r[31]=c->r[3]|c->r[3]; // 800492C0
  c->r[3]=c->r[1]+0x000000A0u; // 800492C4
  c->lr=0x800492CCu; f_80016D50(c); // 800492C8
  c->r[4]=c->r[31]|c->r[31]; // 800492CC
  c->lr=0x800492D4u; f_8002FBCC(c); // 800492D0
L_800492D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800492D4
  c->lr=0x800492DCu; f_80012AFC(c); // 800492D8
  c->r[4]=c->r[1]+0x000000A0u; // 800492DC
  c->lr=0x800492E4u; f_8001914C(c); // 800492E0
  c->r[3]=c->r[30]|c->r[30]; // 800492E4
  c->lr=0x800492ECu; f_80012AFC(c); // 800492E8
  c->r[4]=0u+0x00000001u; // 800492EC
  c->lr=0x800492F4u; f_80016ABC(c); // 800492F0
  goto L_80049460; // 800492F4
L_800492F8:;
  c->r[3]=c->r[30]+0x00000144u; // 800492F8
  c->r[4]=0u+0x00000006u; // 800492FC
  c->lr=0x80049304u; f_8001F874(c); // 80049300
  cmps(c,0,(int32_t)c->r[3],0); // 80049304
  if (crb(c,2)) { goto L_80049328; } // 80049308
  c->lr=0x80049310u; f_80049684(c); // 8004930C
  c->r[31]=c->r[3]|c->r[3]; // 80049310
  c->r[3]=c->r[30]|c->r[30]; // 80049314
  c->lr=0x8004931Cu; f_80012AFC(c); // 80049318
  c->r[4]=c->r[31]|c->r[31]; // 8004931C
  c->lr=0x80049324u; f_8003C654(c); // 80049320
  goto L_80049460; // 80049324
L_80049328:;
  c->r[3]=c->r[30]+0x00000144u; // 80049328
  c->r[4]=0u+0x00000008u; // 8004932C
  c->lr=0x80049334u; f_8001F874(c); // 80049330
  cmps(c,0,(int32_t)c->r[3],0); // 80049334
  if (crb(c,2)) { goto L_80049450; } // 80049338
  c->r[3]=c->r[30]+0x00000144u; // 8004933C
  c->r[4]=0u+0x00000004u; // 80049340
  c->lr=0x80049348u; f_8001F874(c); // 80049344
  cmps(c,0,(int32_t)c->r[3],0); // 80049348
  if (crb(c,2)) { goto L_80049440; } // 8004934C
  c->r[3]=0u+0x803D0000u; // 80049350
  c->r[3]=c->r[3]+0x0000407Cu; // 80049354
  c->lr=0x8004935Cu; f_80011038(c); // 80049358
  c->r[4]=0u+0x00000003u; // 8004935C
  c->lr=0x80049364u; f_8001102C(c); // 80049360
  c->lr=0x80049368u; f_80011024(c); // 80049364
  c->f[31]=c->f[1]; // 80049368
  c->r[31]=R32(c->r[30]+0x000001D0u); // 8004936C
  c->r[3]=c->r[1]+0x00000040u; // 80049370
  c->r[4]=c->r[30]+0x00000220u; // 80049374
  c->lr=0x8004937Cu; f_8001B5B0(c); // 80049378
  c->r[3]=c->r[31]|c->r[31]; // 8004937C
  c->r[4]=c->r[1]+0x00000040u; // 80049380
  c->lr=0x80049388u; f_80049690(c); // 80049384
  c->f[1]=c->f[31]; // 80049388
  c->r[3]=c->r[1]+0x00000030u; // 8004938C
  c->r[4]=c->r[30]+0x00000230u; // 80049390
  c->lr=0x80049398u; f_8001B5B0(c); // 80049394
  c->r[3]=c->r[31]|c->r[31]; // 80049398
  c->r[4]=c->r[1]+0x00000030u; // 8004939C
  c->lr=0x800493A4u; f_800496C0(c); // 800493A0
  {uint32_t ea=c->r[30]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 800493A4
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[0]=c->ps1[0]=RF32(ea);} // 800493A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800493AC
  {uint32_t ea=c->r[30]+0x00000204u; WF32(ea,c->f[1]);} // 800493B0
  fcmp(c,0,c->f[1],c->f[0]); // 800493B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800493B8
  if (!crb(c,2)) { goto L_800493D0; } // 800493BC
  {uint32_t ea=c->r[30]+0x00000204u; WF32(ea,c->f[0]);} // 800493C0
  c->r[3]=c->r[30]+0x00000144u; // 800493C4
  c->r[4]=0u+0x00000008u; // 800493C8
  c->lr=0x800493D0u; f_8004B3CC(c); // 800493CC
L_800493D0:;
  c->r[0]=R32(c->r[30]+0x00000250u); // 800493D0
  cmps(c,0,(int32_t)c->r[0],0); // 800493D4
  if (crb(c,2)) { goto L_80049460; } // 800493D8
  {uint32_t ea=c->r[30]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 800493DC
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 800493E0
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[3]=c->ps1[3]=RF32(ea);} // 800493E4
  fcmp(c,0,c->f[1],c->f[2]); // 800493E8
  if (!crb(c,1)) { goto L_8004941C; } // 800493EC
  {uint32_t ea=c->r[30]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 800493F0
  fcmp(c,0,c->f[0],c->f[2]); // 800493F4
  if (!crb(c,1)) { goto L_8004941C; } // 800493F8
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 800493FC
  {uint32_t ea=c->r[2]+0xFFFF873Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80049400
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049404
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[4]); // 80049408
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 8004940C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80049410
  c->lr=0x80049418u; f_800107AC(c); // 80049414
  c->f[3]=c->f[1]; // 80049418
L_8004941C:;
  c->f[1]=c->f[3]; // 8004941C
  c->r[3]=c->r[1]+0x00000020u; // 80049420
  c->r[4]=c->r[30]+0x00000240u; // 80049424
  c->lr=0x8004942Cu; f_8001B5B0(c); // 80049428
  c->r[3]=R32(c->r[30]+0x000001D0u); // 8004942C
  c->lr=0x80049434u; f_800496F0(c); // 80049430
  c->r[4]=c->r[1]+0x00000020u; // 80049434
  c->lr=0x8004943Cu; f_8000E6F4(c); // 80049438
  goto L_80049460; // 8004943C
L_80049440:;
  c->r[3]=c->r[30]+0x00000144u; // 80049440
  c->r[4]=0u+0x00000008u; // 80049444
  c->lr=0x8004944Cu; f_8004B3CC(c); // 80049448
  goto L_80049460; // 8004944C
L_80049450:;
  c->r[3]=c->r[30]|c->r[30]; // 80049450
  c->r[4]=0u+0x00000003u; // 80049454
  c->r[5]=0u+0x00000000u; // 80049458
  c->lr=0x80049460u; f_8030FFA0(c); // 8004945C
L_80049460:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80049460
  c->r[0]=R32(c->r[10]+0x00000004u); // 80049464
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80049468
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 8004946C
  c->r[31]=R32(c->r[10]+0xFFFFFFECu); // 80049470
  c->r[30]=R32(c->r[10]+0xFFFFFFE8u); // 80049474
  c->lr=c->r[0]; // 80049478
  c->r[1]=c->r[10]|c->r[10]; // 8004947C
  return; // 80049480
}

// fn_80049484
void f_80049484(Ctx* __restrict c) {
  trace_call(0x80049484u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,11,ea,0,0);} // 80049484
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 80049488
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,6,ea,0,0);} // 8004948C
  c->r[11]=addc(c,~c->r[11],0xFFFFFFB0u,1); // 80049490
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80049494
  c->r[12]=c->r[1]|c->r[1]; // 80049498
  {double t0=S(c->ps1[6]), t1=S(c->f[6]); c->f[3]=t0; c->ps1[3]=t1;} // 8004949C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800494A0
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800494A4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800494A8
  {double t0=S(c->f[6]*c->f[11]), t1=S(c->ps1[6]*c->f[11]); c->f[4]=t0; c->ps1[4]=t1;} // 800494AC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,9,ea,1,0);} // 800494B0
  {double t0=S(std::fma(c->f[11],c->f[1],-c->f[2])), t1=S(std::fma(c->ps1[11],c->ps1[1],-c->ps1[2])); c->f[8]=t0; c->ps1[8]=t1;} // 800494B4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800494B8
  {double t0=S(std::fma(c->f[11],c->f[3],-c->f[4])), t1=S(std::fma(c->ps1[11],c->ps1[3],-c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 800494BC
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800494C0
  {double t0=-c->f[9], t1=-c->ps1[9]; c->f[13]=t0; c->ps1[13]=t1;} // 800494C4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 800494C8
  {double t0=S(c->f[8]), t1=S(c->ps1[3]); c->f[9]=t0; c->ps1[9]=t1;} // 800494CC
  c->r[7]=c->r[1]+0x00000010u; // 800494D0
  {double t0=-c->f[11], t1=-c->ps1[11]; c->f[0]=t0; c->ps1[0]=t1;} // 800494D4
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,12,ea,1,0);} // 800494D8
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 800494DC
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,0,0);} // 800494E0
  c->r[5]=c->r[1]+0x00000030u; // 800494E4
  {double t0=-c->f[9], t1=-c->ps1[9]; c->f[2]=t0; c->ps1[2]=t1;} // 800494E8
  c->r[6]=c->r[1]+0x00000020u; // 800494EC
  {double t0=S(c->ps1[8]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 800494F0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800494F4
  {double t0=S(c->f[11]*c->f[5]), t1=S(c->ps1[11]*c->f[5]); c->f[9]=t0; c->ps1[9]=t1;} // 800494F8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,3,ea,0,0);} // 800494FC
  {double t0=S(c->f[0]*c->f[6]), t1=S(c->ps1[0]*c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 80049500
  c->r[4]=c->r[1]+0x00000040u; // 80049504
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,8,ea,1,0);} // 80049508
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[5]=t0; c->ps1[5]=t1;} // 8004950C
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->f[1]); c->f[8]=t0; c->ps1[8]=t1;} // 80049510
  {uint32_t ea=c->r[6]+0x00000004u; psq_store(c,2,ea,0,0);} // 80049514
  {uint32_t ea=c->r[7]+0x00000008u; psq_store(c,13,ea,1,0);} // 80049518
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 8004951C
  {uint32_t ea=c->r[7]+0x0000000Cu; psq_store(c,12,ea,1,0);} // 80049520
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,2,ea,0,0);} // 80049524
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80049528
  {double t0=S(std::fma(c->f[2],c->f[4],c->f[3])), t1=S(std::fma(c->ps1[2],c->ps1[4],c->ps1[3])); c->f[6]=t0; c->ps1[6]=t1;} // 8004952C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,1,0);} // 80049530
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,1,0);} // 80049534
  {double t0=S(c->f[1]+c->f[9]), t1=S(c->ps1[1]+c->ps1[9]); c->f[4]=t0; c->ps1[4]=t1;} // 80049538
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[10]);} // 8004953C
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[5]=t0; c->ps1[5]=t1;} // 80049540
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 80049544
  {double t0=S(c->f[4]+c->f[8]), t1=S(c->ps1[4]+c->ps1[8]); c->f[2]=t0; c->ps1[2]=t1;} // 80049548
  {uint32_t ea=c->r[6]+0x0000000Cu; psq_load(c,3,ea,1,0);} // 8004954C
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 80049550
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,3,ea,1,0);} // 80049554
  {double t0=S(c->f[5]+c->f[1]), t1=S(c->ps1[5]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80049558
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 8004955C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 80049560
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[7]);} // 80049564
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 80049568
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,9,ea,0,0);} // 8004956C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,8,ea,0,0);} // 80049570
  c->r[10]=R32(c->r[1]+0x00000000u); // 80049574
  c->r[1]=c->r[10]|c->r[10]; // 80049578
  return; // 8004957C
}

// fn_80049580
void f_80049580(Ctx* __restrict c) {
  trace_call(0x80049580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049580
  c->r[0]=c->lr; // 80049584
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049588
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[0]); // 8004958C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80049590
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80049594
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80049598
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004959C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800495A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800495A4
  c->r[31]=c->r[3]|c->r[3]; // 800495A8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800495AC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 800495B0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800495B4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 800495B8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800495BC
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[1])); c->f[4]=t0; c->ps1[4]=t1;} // 800495C0
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 800495C4
  fcmp(c,0,c->f[4],c->f[0]); // 800495C8
  if (crb(c,2)) { goto L_800495EC; } // 800495CC
  c->f[3]=frsqrte(c->f[4]); // 800495D0
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800495D4
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[1]=c->ps1[1]=RF32(ea);} // 800495D8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800495DC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800495E0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[4],-c->f[1])); // 800495E4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 800495E8
L_800495EC:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800495EC
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800495F0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 800495F4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[2]); // 800495F8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800495FC
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80049600
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,1,0);} // 80049604
  {double t0=S(c->f[0]*c->f[4]), t1=S(c->ps1[0]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 80049608
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,1,ea,1,0);} // 8004960C
  c->f[1]=c->f[31]; // 80049610
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80049614
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80049618
  c->lr=0x80049620u; f_800D22F0(c); // 8004961C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80049620
  c->f[1]=c->f[31]; // 80049624
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80049628
  c->lr=0x80049630u; f_800D2864(c); // 8004962C
  c->f[3]=c->ps1[3]=S(c->f[1]); // 80049630
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80049634
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049638
  c->r[3]=c->r[31]|c->r[31]; // 8004963C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049640
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 80049644
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80049648
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8004964C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 80049650
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 80049654
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80049658
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8004965C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80049660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80049664
  c->r[0]=R32(c->r[1]+0x00000024u); // 80049668
  c->lr=c->r[0]; // 8004966C
  c->r[1]=c->r[1]+0x00000020u; // 80049670
  return; // 80049674
}

// fn_80049678
void f_80049678(Ctx* __restrict c) {
  trace_call(0x80049678u);
  c->r[3]=0u+0x804B0000u; // 80049678
  c->r[3]=c->r[3]+0xFFFFC5C0u; // 8004967C
  return; // 80049680
}

// fn_80049684
void f_80049684(Ctx* __restrict c) {
  trace_call(0x80049684u);
  c->r[3]=0u+0x804B0000u; // 80049684
  c->r[3]=c->r[3]+0xFFFFC570u; // 80049688
  return; // 8004968C
}

// fn_80049690
void f_80049690(Ctx* __restrict c) {
  trace_call(0x80049690u);
  {uint32_t ea=c->r[3]+0x00000290u; psq_load(c,0,ea,0,0);} // 80049690
  c->r[0]=0u+0x00000000u; // 80049694
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80049698
  {uint32_t ea=c->r[3]+0x00000298u; psq_load(c,1,ea,1,0);} // 8004969C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 800496A0
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800496A4
  W32(c->r[3]+0x00000168u,c->r[0]); // 800496A8
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 800496AC
  {uint32_t ea=c->r[3]+0x00000290u; psq_store(c,0,ea,0,0);} // 800496B0
  {uint32_t ea=c->r[3]+0x00000298u; psq_store(c,1,ea,1,0);} // 800496B4
  W32(c->r[3]+0x00000170u,c->r[0]); // 800496B8
  return; // 800496BC
}

// fn_800496C0
void f_800496C0(Ctx* __restrict c) {
  trace_call(0x800496C0u);
  {uint32_t ea=c->r[3]+0x000002A0u; psq_load(c,0,ea,0,0);} // 800496C0
  c->r[0]=0u+0x00000000u; // 800496C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 800496C8
  {uint32_t ea=c->r[3]+0x000002A8u; psq_load(c,1,ea,1,0);} // 800496CC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,1,0);} // 800496D0
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800496D4
  W32(c->r[3]+0x00000168u,c->r[0]); // 800496D8
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 800496DC
  {uint32_t ea=c->r[3]+0x000002A0u; psq_store(c,0,ea,0,0);} // 800496E0
  {uint32_t ea=c->r[3]+0x000002A8u; psq_store(c,1,ea,1,0);} // 800496E4
  W32(c->r[3]+0x00000170u,c->r[0]); // 800496E8
  return; // 800496EC
}

// fn_800496F0
void f_800496F0(Ctx* __restrict c) {
  trace_call(0x800496F0u);
  c->r[3]=c->r[3]+0x000000F0u; // 800496F0
  return; // 800496F4
}

// fn_800496F8
void f_800496F8(Ctx* __restrict c) {
  trace_call(0x800496F8u);
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800496F8
  c->r[12]=c->r[1]|c->r[1]; // 800496FC
  c->r[11]=addc(c,~c->r[11],0xFFFFFE20u,1); // 80049700
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80049704
  c->r[0]=c->lr; // 80049708
  c->r[11]=c->r[12]+0xFFFFFFA0u; // 8004970C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80049710
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 80049714
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 80049718
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 8004971C
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 80049720
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 80049724
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 80049728
  {uint32_t ea=c->r[12]+0xFFFFFFC0u; WF64(ea,c->f[28]);} // 8004972C
  {uint32_t ea=c->r[12]+0xFFFFFFC8u; psq_store(c,28,ea,0,0);} // 80049730
  {uint32_t ea=c->r[12]+0xFFFFFFB0u; WF64(ea,c->f[27]);} // 80049734
  {uint32_t ea=c->r[12]+0xFFFFFFB8u; psq_store(c,27,ea,0,0);} // 80049738
  {uint32_t ea=c->r[12]+0xFFFFFFA0u; WF64(ea,c->f[26]);} // 8004973C
  {uint32_t ea=c->r[12]+0xFFFFFFA8u; psq_store(c,26,ea,0,0);} // 80049740
  c->lr=0x80049748u; f_800C2E48(c); // 80049744
  c->r[0]=R32(c->r[3]+0x00000144u); // 80049748
  c->r[9]=0u+0x00000000u; // 8004974C
  c->r[8]=0u+0x00000001u; // 80049750
  c->r[26]=c->r[3]|c->r[3]; // 80049754
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 80049758
  c->r[27]=c->r[4]|c->r[4]; // 8004975C
  c->r[0]=c->r[7]&c->r[0]; // 80049760
  c->r[28]=c->r[5]|c->r[5]; // 80049764
  c->r[0]=((c->r[9])&0x20)?0u:(c->r[0]>>((c->r[9])&31)); cr0(c,c->r[0]); // 80049768
  c->r[29]=c->r[6]|c->r[6]; // 8004976C
  if (crb(c,2)) { goto L_80049DFC; } // 80049770
  c->r[30]=R32(c->r[3]+0x00000030u); // 80049774
  c->r[3]=0u+0x00000000u; // 80049778
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[8]<<((c->r[3])&31)); // 8004977C
  W32(c->r[1]+0x000000B4u,c->r[3]); // 80049780
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 80049784
  c->r[5]=c->r[30]+0x0000001Cu; // 80049788
  W32(c->r[1]+0x000000B0u,c->r[5]); // 8004978C
  c->r[0]=c->r[0]&c->r[4]; // 80049790
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); cr0(c,c->r[0]); // 80049794
  W32(c->r[1]+0x00000048u,c->r[5]); // 80049798
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8004979C
  W32(c->r[1]+0x00000040u,c->r[5]); // 800497A0
  W32(c->r[1]+0x00000044u,c->r[3]); // 800497A4
  W32(c->r[1]+0x000000B8u,c->r[5]); // 800497A8
  W32(c->r[1]+0x000000BCu,c->r[3]); // 800497AC
  if (!crb(c,2)) { goto L_80049AAC; } // 800497B0
  c->r[3]=0u+0x00000002u; // 800497B4
  W32(c->r[1]+0x000000A8u,c->r[5]); // 800497B8
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[8]<<((c->r[3])&31)); // 800497BC
  c->r[0]=c->r[0]&c->r[4]; // 800497C0
  W32(c->r[1]+0x000000ACu,c->r[3]); // 800497C4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 800497C8
  cmpu(c,1,c->r[0],0x00000001u); // 800497CC
  W32(c->r[1]+0x00000038u,c->r[5]); // 800497D0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800497D4
  W32(c->r[1]+0x000000A0u,c->r[5]); // 800497D8
  W32(c->r[1]+0x000000A4u,c->r[3]); // 800497DC
  if (!crb(c,6)) { goto L_800497EC; } // 800497E0
  c->r[3]=c->r[30]|c->r[30]; // 800497E4
  c->lr=0x800497ECu; f_8034007C(c); // 800497E8
L_800497EC:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800497EC
  c->r[4]=c->r[1]+0x00000150u; // 800497F0
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[0]);} // 800497F4
  c->r[5]=0u+0x00000000u; // 800497F8
  c->r[31]=R32(c->r[26]+0x00000030u); // 800497FC
  c->r[6]=0u+0x00000000u; // 80049800
  {uint32_t ea=c->r[26]+0x00000214u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049804
  c->r[7]=0u+0x00000000u; // 80049808
  {uint32_t ea=c->r[30]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004980C
  c->r[8]=0u+0x00000000u; // 80049810
  {uint32_t ea=c->r[30]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049814
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80049818
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004981C
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80049820
  {uint32_t ea=c->r[30]+0x00000054u; c->f[7]=c->ps1[7]=RF32(ea);} // 80049824
  {uint32_t ea=c->r[30]+0x00000058u; c->f[6]=c->ps1[6]=RF32(ea);} // 80049828
  {uint32_t ea=c->r[30]+0x00000060u; c->f[5]=c->ps1[5]=RF32(ea);} // 8004982C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 80049830
  {uint32_t ea=c->r[30]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80049834
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80049838
  c->r[3]=R32(c->r[31]+0x00000050u); // 8004983C
  c->r[0]=R32(c->r[1]+0x00000130u); // 80049840
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[2]);} // 80049844
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049848
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[1]);} // 8004984C
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[7]);} // 80049850
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[6]);} // 80049854
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[5]);} // 80049858
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[4]);} // 8004985C
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[3]);} // 80049860
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 80049864
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,8,ea,0,0);} // 80049868
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,8,ea,1,0);} // 8004986C
  if (!crb(c,6)) { goto L_80049888; } // 80049870
  c->r[3]=R32(c->r[31]+0x00000054u); // 80049874
  c->r[0]=R32(c->r[1]+0x00000134u); // 80049878
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004987C
  if (!crb(c,6)) { goto L_80049888; } // 80049880
  c->r[8]=0u+0x00000001u; // 80049884
L_80049888:;
  cmps(c,1,(int32_t)c->r[8],0); // 80049888
  if (crb(c,6)) { goto L_800498A4; } // 8004988C
  c->r[3]=R32(c->r[31]+0x00000058u); // 80049890
  c->r[0]=R32(c->r[1]+0x00000138u); // 80049894
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049898
  if (!crb(c,6)) { goto L_800498A4; } // 8004989C
  c->r[7]=0u+0x00000001u; // 800498A0
L_800498A4:;
  cmps(c,1,(int32_t)c->r[7],0); // 800498A4
  if (crb(c,6)) { goto L_80049920; } // 800498A8
  c->r[3]=R32(c->r[31]+0x00000060u); // 800498AC
  c->r[4]=0u+0x00000000u; // 800498B0
  c->r[0]=R32(c->r[1]+0x00000140u); // 800498B4
  c->r[7]=0u+0x00000000u; // 800498B8
  c->r[8]=0u+0x00000000u; // 800498BC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800498C0
  if (!crb(c,6)) { goto L_800498DC; } // 800498C4
  c->r[3]=R32(c->r[31]+0x00000064u); // 800498C8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800498CC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800498D0
  if (!crb(c,6)) { goto L_800498DC; } // 800498D4
  c->r[8]=0u+0x00000001u; // 800498D8
L_800498DC:;
  cmps(c,1,(int32_t)c->r[8],0); // 800498DC
  if (crb(c,6)) { goto L_800498F8; } // 800498E0
  c->r[3]=R32(c->r[31]+0x00000068u); // 800498E4
  c->r[0]=R32(c->r[1]+0x00000148u); // 800498E8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 800498EC
  if (!crb(c,6)) { goto L_800498F8; } // 800498F0
  c->r[7]=0u+0x00000001u; // 800498F4
L_800498F8:;
  cmps(c,1,(int32_t)c->r[7],0); // 800498F8
  if (crb(c,6)) { goto L_80049914; } // 800498FC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 80049900
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 80049904
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049908
  if (!crb(c,6)) { goto L_80049914; } // 8004990C
  c->r[4]=0u+0x00000001u; // 80049910
L_80049914:;
  cmps(c,1,(int32_t)c->r[4],0); // 80049914
  if (crb(c,6)) { goto L_80049920; } // 80049918
  c->r[6]=0u+0x00000001u; // 8004991C
L_80049920:;
  cmps(c,1,(int32_t)c->r[6],0); // 80049920
  if (crb(c,6)) { goto L_8004997C; } // 80049924
  c->r[3]=R32(c->r[31]+0x00000070u); // 80049928
  c->r[4]=0u+0x00000000u; // 8004992C
  c->r[0]=R32(c->r[1]+0x00000150u); // 80049930
  c->r[6]=0u+0x00000000u; // 80049934
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049938
  if (!crb(c,6)) { goto L_80049954; } // 8004993C
  c->r[3]=R32(c->r[31]+0x00000074u); // 80049940
  c->r[0]=R32(c->r[1]+0x00000154u); // 80049944
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049948
  if (!crb(c,6)) { goto L_80049954; } // 8004994C
  c->r[6]=0u+0x00000001u; // 80049950
L_80049954:;
  cmps(c,1,(int32_t)c->r[6],0); // 80049954
  if (crb(c,6)) { goto L_80049970; } // 80049958
  c->r[3]=R32(c->r[31]+0x00000078u); // 8004995C
  c->r[0]=R32(c->r[1]+0x00000158u); // 80049960
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049964
  if (!crb(c,6)) { goto L_80049970; } // 80049968
  c->r[4]=0u+0x00000001u; // 8004996C
L_80049970:;
  cmps(c,1,(int32_t)c->r[4],0); // 80049970
  if (crb(c,6)) { goto L_8004997C; } // 80049974
  c->r[5]=0u+0x00000001u; // 80049978
L_8004997C:;
  cmps(c,1,(int32_t)c->r[5],0); // 8004997C
  if (!crb(c,6)) { goto L_80049DFC; } // 80049980
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049984
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[9]); // 80049988
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8004998C
  {uint32_t ea=c->r[1]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049990
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 80049994
  {uint32_t ea=c->r[1]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049998
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8004999C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499A0
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800499A4
  {uint32_t ea=c->r[1]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499A8
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800499AC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499B0
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800499B4
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800499B8
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800499BC
  {uint32_t ea=c->r[1]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499C0
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800499C4
  {uint32_t ea=c->r[1]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499C8
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800499CC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 800499D0
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800499D4
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 800499D8
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 800499DC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800499E0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 800499E4
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800499E8
  fcmp(c,0,c->f[2],c->f[3]); // 800499EC
  if (crb(c,2)) { goto L_80049A10; } // 800499F0
  c->f[0]=frsqrte(c->f[2]); // 800499F4
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[9]=c->ps1[9]=RF32(ea);} // 800499F8
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[3]=c->ps1[3]=RF32(ea);} // 800499FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80049A00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[9]); // 80049A04
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 80049A08
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 80049A0C
L_80049A10:;
  {uint32_t ea=c->r[31]+0x00000060u; psq_load(c,0,ea,0,0);} // 80049A10
  c->r[7]=c->r[31]+0x0000001Cu; // 80049A14
  c->r[6]=0u+0x00000001u; // 80049A18
  c->r[3]=0u+0x00000003u; // 80049A1C
  {uint32_t ea=c->r[31]+0x00000068u; psq_load(c,1,ea,0,0);} // 80049A20
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80049A24
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 80049A28
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 80049A2C
  {uint32_t ea=c->r[31]+0x00000060u; psq_store(c,0,ea,0,0);} // 80049A30
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80049A34
  {uint32_t ea=c->r[31]+0x00000068u; psq_store(c,0,ea,0,0);} // 80049A38
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80049A3C
  W32(c->r[1]+0x00000090u,c->r[7]); // 80049A40
  c->r[4]=c->r[5]|c->r[4]; // 80049A44
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80049A48
  c->r[0]=c->r[4]|c->r[0]; // 80049A4C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80049A50
  c->r[0]=R32(c->r[31]+0x00000004u); // 80049A54
  W32(c->r[1]+0x00000094u,c->r[6]); // 80049A58
  cmps(c,1,(int32_t)c->r[0],0); // 80049A5C
  W32(c->r[1]+0x00000030u,c->r[7]); // 80049A60
  W32(c->r[1]+0x00000034u,c->r[6]); // 80049A64
  W32(c->r[1]+0x00000080u,c->r[7]); // 80049A68
  W32(c->r[1]+0x00000084u,c->r[6]); // 80049A6C
  W32(c->r[1]+0x00000098u,c->r[7]); // 80049A70
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80049A74
  W32(c->r[1]+0x00000028u,c->r[7]); // 80049A78
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80049A7C
  W32(c->r[1]+0x00000088u,c->r[7]); // 80049A80
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 80049A84
  if (crb(c,6)) { goto L_80049A94; } // 80049A88
  c->r[3]=c->r[31]|c->r[31]; // 80049A8C
  c->lr=0x80049A94u; f_80340A20(c); // 80049A90
L_80049A94:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80049A94
  cmps(c,1,(int32_t)c->r[0],0); // 80049A98
  if (crb(c,6)) { goto L_80049DFC; } // 80049A9C
  c->r[3]=c->r[31]|c->r[31]; // 80049AA0
  c->lr=0x80049AA8u; f_80340B8C(c); // 80049AA4
  goto L_80049DFC; // 80049AA8
L_80049AAC:;
  c->r[3]=0u+0x00000002u; // 80049AAC
  W32(c->r[1]+0x00000078u,c->r[5]); // 80049AB0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[8]<<((c->r[3])&31)); // 80049AB4
  c->r[0]=c->r[0]&c->r[4]; // 80049AB8
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 80049ABC
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 80049AC0
  cmpu(c,1,c->r[0],0x00000001u); // 80049AC4
  W32(c->r[1]+0x00000020u,c->r[5]); // 80049AC8
  W32(c->r[1]+0x00000024u,c->r[3]); // 80049ACC
  W32(c->r[1]+0x00000070u,c->r[5]); // 80049AD0
  W32(c->r[1]+0x00000074u,c->r[3]); // 80049AD4
  if (!crb(c,6)) { goto L_80049AE4; } // 80049AD8
  c->r[3]=c->r[30]|c->r[30]; // 80049ADC
  c->lr=0x80049AE4u; f_8034007C(c); // 80049AE0
L_80049AE4:;
  c->r[31]=R32(c->r[26]+0x00000030u); // 80049AE4
  c->r[4]=0u+0x00000000u; // 80049AE8
  {uint32_t ea=c->r[30]+0x00000070u; c->f[12]=c->ps1[12]=RF32(ea);} // 80049AEC
  c->r[5]=0u+0x00000000u; // 80049AF0
  {uint32_t ea=c->r[30]+0x00000074u; c->f[11]=c->ps1[11]=RF32(ea);} // 80049AF4
  c->r[6]=0u+0x00000000u; // 80049AF8
  {uint32_t ea=c->r[26]+0x00000214u; c->f[4]=c->ps1[4]=RF32(ea);} // 80049AFC
  c->r[7]=0u+0x00000000u; // 80049B00
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049B04
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 80049B08
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[12]); // 80049B0C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[10]=c->ps1[10]=RF32(ea);} // 80049B10
  {uint32_t ea=c->r[31]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 80049B14
  {uint32_t ea=c->r[30]+0x00000050u; c->f[26]=c->ps1[26]=RF32(ea);} // 80049B18
  {uint32_t ea=c->r[30]+0x00000054u; c->f[27]=c->ps1[27]=RF32(ea);} // 80049B1C
  {uint32_t ea=c->r[30]+0x00000058u; c->f[28]=c->ps1[28]=RF32(ea);} // 80049B20
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80049B24
  {uint32_t ea=c->r[31]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 80049B28
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[11]); // 80049B2C
  {uint32_t ea=c->r[30]+0x00000060u; c->f[29]=c->ps1[29]=RF32(ea);} // 80049B30
  {uint32_t ea=c->r[30]+0x00000064u; c->f[30]=c->ps1[30]=RF32(ea);} // 80049B34
  {uint32_t ea=c->r[30]+0x00000068u; c->f[31]=c->ps1[31]=RF32(ea);} // 80049B38
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[13]=c->ps1[13]=RF32(ea);} // 80049B3C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 80049B40
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 80049B44
  {uint32_t ea=c->r[31]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 80049B48
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[10]); // 80049B4C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 80049B50
  {uint32_t ea=c->r[31]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80049B54
  {uint32_t ea=c->r[31]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 80049B58
  {uint32_t ea=c->r[31]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 80049B5C
  c->r[3]=R32(c->r[31]+0x00000020u); // 80049B60
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80049B64
  c->r[0]=R32(c->r[1]+0x000000D0u); // 80049B68
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80049B6C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049B70
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[26]);} // 80049B74
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[27]);} // 80049B78
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[28]);} // 80049B7C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[29]);} // 80049B80
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[30]);} // 80049B84
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[31]);} // 80049B88
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[13]);} // 80049B8C
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[12]);} // 80049B90
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[11]);} // 80049B94
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[10]);} // 80049B98
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[9]);} // 80049B9C
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[8]);} // 80049BA0
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[7]);} // 80049BA4
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[6]);} // 80049BA8
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[5]);} // 80049BAC
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[4]);} // 80049BB0
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[3]);} // 80049BB4
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[2]);} // 80049BB8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[1]);} // 80049BBC
  if (!crb(c,6)) { goto L_80049BD8; } // 80049BC0
  c->r[3]=R32(c->r[31]+0x00000024u); // 80049BC4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80049BC8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049BCC
  if (!crb(c,6)) { goto L_80049BD8; } // 80049BD0
  c->r[7]=0u+0x00000001u; // 80049BD4
L_80049BD8:;
  cmps(c,1,(int32_t)c->r[7],0); // 80049BD8
  if (crb(c,6)) { goto L_80049BF4; } // 80049BDC
  c->r[3]=R32(c->r[31]+0x00000028u); // 80049BE0
  c->r[0]=R32(c->r[1]+0x000000D8u); // 80049BE4
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049BE8
  if (!crb(c,6)) { goto L_80049BF4; } // 80049BEC
  c->r[6]=0u+0x00000001u; // 80049BF0
L_80049BF4:;
  cmps(c,1,(int32_t)c->r[6],0); // 80049BF4
  if (crb(c,6)) { goto L_80049C70; } // 80049BF8
  c->r[3]=R32(c->r[31]+0x00000030u); // 80049BFC
  c->r[6]=0u+0x00000000u; // 80049C00
  c->r[0]=R32(c->r[1]+0x000000E0u); // 80049C04
  c->r[7]=0u+0x00000000u; // 80049C08
  c->r[8]=0u+0x00000000u; // 80049C0C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C10
  if (!crb(c,6)) { goto L_80049C2C; } // 80049C14
  c->r[3]=R32(c->r[31]+0x00000034u); // 80049C18
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80049C1C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C20
  if (!crb(c,6)) { goto L_80049C2C; } // 80049C24
  c->r[8]=0u+0x00000001u; // 80049C28
L_80049C2C:;
  cmps(c,1,(int32_t)c->r[8],0); // 80049C2C
  if (crb(c,6)) { goto L_80049C48; } // 80049C30
  c->r[3]=R32(c->r[31]+0x00000038u); // 80049C34
  c->r[0]=R32(c->r[1]+0x000000E8u); // 80049C38
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C3C
  if (!crb(c,6)) { goto L_80049C48; } // 80049C40
  c->r[7]=0u+0x00000001u; // 80049C44
L_80049C48:;
  cmps(c,1,(int32_t)c->r[7],0); // 80049C48
  if (crb(c,6)) { goto L_80049C64; } // 80049C4C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80049C50
  c->r[0]=R32(c->r[1]+0x000000ECu); // 80049C54
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C58
  if (!crb(c,6)) { goto L_80049C64; } // 80049C5C
  c->r[6]=0u+0x00000001u; // 80049C60
L_80049C64:;
  cmps(c,1,(int32_t)c->r[6],0); // 80049C64
  if (crb(c,6)) { goto L_80049C70; } // 80049C68
  c->r[5]=0u+0x00000001u; // 80049C6C
L_80049C70:;
  cmps(c,1,(int32_t)c->r[5],0); // 80049C70
  if (crb(c,6)) { goto L_80049CCC; } // 80049C74
  c->r[3]=R32(c->r[31]+0x00000040u); // 80049C78
  c->r[5]=0u+0x00000000u; // 80049C7C
  c->r[0]=R32(c->r[1]+0x000000F0u); // 80049C80
  c->r[6]=0u+0x00000000u; // 80049C84
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C88
  if (!crb(c,6)) { goto L_80049CA4; } // 80049C8C
  c->r[3]=R32(c->r[31]+0x00000044u); // 80049C90
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80049C94
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049C98
  if (!crb(c,6)) { goto L_80049CA4; } // 80049C9C
  c->r[6]=0u+0x00000001u; // 80049CA0
L_80049CA4:;
  cmps(c,1,(int32_t)c->r[6],0); // 80049CA4
  if (crb(c,6)) { goto L_80049CC0; } // 80049CA8
  c->r[3]=R32(c->r[31]+0x00000048u); // 80049CAC
  c->r[0]=R32(c->r[1]+0x000000F8u); // 80049CB0
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 80049CB4
  if (!crb(c,6)) { goto L_80049CC0; } // 80049CB8
  c->r[5]=0u+0x00000001u; // 80049CBC
L_80049CC0:;
  cmps(c,1,(int32_t)c->r[5],0); // 80049CC0
  if (crb(c,6)) { goto L_80049CCC; } // 80049CC4
  c->r[4]=0u+0x00000001u; // 80049CC8
L_80049CCC:;
  cmps(c,1,(int32_t)c->r[4],0); // 80049CCC
  if (!crb(c,6)) { goto L_80049DFC; } // 80049CD0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80049CD4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[0]); // 80049CD8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80049CDC
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049CE0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80049CE4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049CE8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80049CEC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049CF0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80049CF4
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049CF8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80049CFC
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D00
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 80049D04
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D08
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80049D0C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D10
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 80049D14
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D18
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80049D1C
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D20
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80049D24
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80049D28
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80049D2C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80049D30
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 80049D34
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80049D38
  fcmp(c,0,c->f[2],c->f[3]); // 80049D3C
  if (crb(c,2)) { goto L_80049D60; } // 80049D40
  c->f[1]=frsqrte(c->f[2]); // 80049D44
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049D48
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[4]=c->ps1[4]=RF32(ea);} // 80049D4C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[1]); // 80049D50
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80049D54
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[2],-c->f[4])); // 80049D58
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 80049D5C
L_80049D60:;
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,0,ea,0,0);} // 80049D60
  c->r[7]=c->r[31]+0x0000001Cu; // 80049D64
  c->r[6]=0u+0x00000002u; // 80049D68
  c->r[3]=0u+0x00000003u; // 80049D6C
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 80049D70
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80049D74
  c->r[0]=0u+0x00000001u; // 80049D78
  W32(c->r[1]+0x00000060u,c->r[7]); // 80049D7C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80049D80
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 80049D84
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,0,ea,0,0);} // 80049D88
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80049D8C
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 80049D90
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80049D94
  W32(c->r[1]+0x00000064u,c->r[6]); // 80049D98
  c->r[4]=c->r[5]|c->r[4]; // 80049D9C
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80049DA0
  c->r[0]=c->r[4]|c->r[0]; // 80049DA4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80049DA8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80049DAC
  W32(c->r[1]+0x00000018u,c->r[7]); // 80049DB0
  cmps(c,1,(int32_t)c->r[0],0); // 80049DB4
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80049DB8
  W32(c->r[1]+0x00000050u,c->r[7]); // 80049DBC
  W32(c->r[1]+0x00000054u,c->r[6]); // 80049DC0
  W32(c->r[1]+0x00000068u,c->r[7]); // 80049DC4
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 80049DC8
  W32(c->r[1]+0x00000010u,c->r[7]); // 80049DCC
  W32(c->r[1]+0x00000014u,c->r[3]); // 80049DD0
  W32(c->r[1]+0x00000058u,c->r[7]); // 80049DD4
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 80049DD8
  if (crb(c,6)) { goto L_80049DE8; } // 80049DDC
  c->r[3]=c->r[31]|c->r[31]; // 80049DE0
  c->lr=0x80049DE8u; f_80340A20(c); // 80049DE4
L_80049DE8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80049DE8
  cmps(c,1,(int32_t)c->r[0],0); // 80049DEC
  if (crb(c,6)) { goto L_80049DFC; } // 80049DF0
  c->r[3]=c->r[31]|c->r[31]; // 80049DF4
  c->lr=0x80049DFCu; f_80340B8C(c); // 80049DF8
L_80049DFC:;
  c->r[3]=R32(c->r[26]+0x000001E0u); // 80049DFC
  cmps(c,1,(int32_t)c->r[3],0); // 80049E00
  if (crb(c,6)) { goto L_80049E24; } // 80049E04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80049E08
  c->r[6]=c->r[26]+0x00000258u; // 80049E0C
  c->r[4]=c->r[13]+0xFFFF9550u; // 80049E10
  c->r[5]=0u+0x00000013u; // 80049E14
  c->r[12]=R32(c->r[12]+0x00000014u); // 80049E18
  c->ctr=c->r[12]; // 80049E1C
  if (true) { c->lr=0x80049E24u; dispatch(c,c->ctr); } // 80049E20
L_80049E24:;
  c->r[12]=R32(c->r[26]+0x00000014u); // 80049E24
  c->r[3]=c->r[26]|c->r[26]; // 80049E28
  c->r[12]=R32(c->r[12]+0x00000010u); // 80049E2C
  c->ctr=c->r[12]; // 80049E30
  if (true) { c->lr=0x80049E38u; dispatch(c,c->ctr); } // 80049E34
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049E38
  c->r[4]=c->r[1]+0x000000C0u; // 80049E3C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 80049E40
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049E44
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80049E48
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049E4C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80049E50
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80049E54
  c->r[3]=c->r[26]|c->r[26]; // 80049E58
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80049E5C
  {uint32_t ea=c->r[26]+0x000001F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80049E60
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80049E64
  c->r[12]=R32(c->r[26]+0x00000014u); // 80049E68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80049E6C
  c->ctr=c->r[12]; // 80049E70
  if (true) { c->lr=0x80049E78u; dispatch(c,c->ctr); } // 80049E74
  c->r[3]=c->r[26]|c->r[26]; // 80049E78
  c->r[4]=c->r[27]|c->r[27]; // 80049E7C
  c->r[5]=c->r[28]|c->r[28]; // 80049E80
  c->r[6]=c->r[29]|c->r[29]; // 80049E84
  c->lr=0x80049E8Cu; f_8030C6C0(c); // 80049E88
  c->r[10]=R32(c->r[1]+0x00000000u); // 80049E8C
  c->r[11]=c->r[10]+0xFFFFFFA0u; // 80049E90
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; psq_load(c,31,ea,0,0);} // 80049E94
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 80049E98
  {uint32_t ea=c->r[10]+0xFFFFFFE8u; psq_load(c,30,ea,0,0);} // 80049E9C
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 80049EA0
  {uint32_t ea=c->r[10]+0xFFFFFFD8u; psq_load(c,29,ea,0,0);} // 80049EA4
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 80049EA8
  {uint32_t ea=c->r[10]+0xFFFFFFC8u; psq_load(c,28,ea,0,0);} // 80049EAC
  {uint32_t ea=c->r[10]+0xFFFFFFC0u; c->f[28]=RF64(ea);} // 80049EB0
  {uint32_t ea=c->r[10]+0xFFFFFFB8u; psq_load(c,27,ea,0,0);} // 80049EB4
  {uint32_t ea=c->r[10]+0xFFFFFFB0u; c->f[27]=RF64(ea);} // 80049EB8
  {uint32_t ea=c->r[10]+0xFFFFFFA8u; psq_load(c,26,ea,0,0);} // 80049EBC
  {uint32_t ea=c->r[10]+0xFFFFFFA0u; c->f[26]=RF64(ea);} // 80049EC0
  c->lr=0x80049EC8u; f_800C2E94(c); // 80049EC4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80049EC8
  c->lr=c->r[0]; // 80049ECC
  c->r[1]=c->r[10]|c->r[10]; // 80049ED0
  return; // 80049ED4
}

// fn_80049ED8
void f_80049ED8(Ctx* __restrict c) {
  trace_call(0x80049ED8u);
  f_8030CA7C(c); return; // 80049ED8
}

// fn_80049EDC
void f_80049EDC(Ctx* __restrict c) {
  trace_call(0x80049EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049EDC
  c->r[0]=c->lr; // 80049EE0
  c->r[6]=0u+0x80050000u; // 80049EE4
  c->r[4]=0u+0x00000004u; // 80049EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80049EEC
  c->r[6]=c->r[6]+0xFFFF8F9Cu; // 80049EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80049EF4
  c->r[31]=0u+0x80370000u; // 80049EF8
  c->r[5]=c->r[31]+0x000044F0u; // 80049EFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80049F00
  c->r[30]=c->r[3]|c->r[3]; // 80049F04
  c->lr=0x80049F0Cu; f_80337FC8(c); // 80049F08
  c->r[3]=c->r[30]|c->r[30]; // 80049F0C
  c->lr=0x80049F14u; f_800B59F8(c); // 80049F10
  c->r[3]=c->r[30]|c->r[30]; // 80049F14
  c->lr=0x80049F1Cu; f_8005D764(c); // 80049F18
  c->r[3]=c->r[30]|c->r[30]; // 80049F1C
  c->lr=0x80049F24u; f_800512DC(c); // 80049F20
  c->r[4]=c->r[31]+0x000044F0u; // 80049F24
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 80049F28
  c->r[4]=c->r[4]+0x0000000Au; // 80049F2C
  c->r[5]=0u+0x00000000u; // 80049F30
  c->lr=0x80049F38u; f_8031E640(c); // 80049F34
  W32(c->r[13]+0xFFFF9550u,c->r[3]); // 80049F38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80049F3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80049F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80049F44
  c->lr=c->r[0]; // 80049F48
  c->r[1]=c->r[1]+0x00000010u; // 80049F4C
  return; // 80049F50
}

// fn_80049F54
void f_80049F54(Ctx* __restrict c) {
  trace_call(0x80049F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80049F54
  c->r[0]=c->lr; // 80049F58
  c->r[5]=0u+0x80370000u; // 80049F5C
  c->r[4]=0u+0x00000004u; // 80049F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80049F64
  c->r[5]=c->r[5]+0x000044F0u; // 80049F68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80049F6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80049F70
  c->r[30]=c->r[3]|c->r[3]; // 80049F74
  c->lr=0x80049F7Cu; f_803386E0(c); // 80049F78
  c->r[3]=c->r[30]|c->r[30]; // 80049F7C
  c->lr=0x80049F84u; f_800B5A10(c); // 80049F80
  c->r[3]=c->r[30]|c->r[30]; // 80049F84
  c->lr=0x80049F8Cu; f_8005D77C(c); // 80049F88
  c->r[3]=c->r[30]|c->r[30]; // 80049F8C
  c->lr=0x80049F94u; f_800512F4(c); // 80049F90
  c->r[31]=R32(c->r[13]+0xFFFFA510u); // 80049F94
  c->r[3]=c->r[31]|c->r[31]; // 80049F98
  c->lr=0x80049FA0u; f_8024B0E0(c); // 80049F9C
  c->r[30]=R32(c->r[2]+0xFFFFBF18u); // 80049FA0
  c->r[4]=R32(c->r[13]+0xFFFF9550u); // 80049FA4
  cmpu(c,0,c->r[4],c->r[30]); // 80049FA8
  if (!crb(c,2)) { goto L_80049FBC; } // 80049FAC
  c->r[3]=c->r[31]|c->r[31]; // 80049FB0
  c->lr=0x80049FB8u; f_8024B1C0(c); // 80049FB4
  goto L_80049FF4; // 80049FB8
L_80049FBC:;
  c->r[3]=R32(c->r[4]+0xFFFFFFF0u); // 80049FBC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80049FC0
  W32(c->r[4]+0xFFFFFFF0u,c->r[0]); // 80049FC4
  cmpu(c,0,c->r[0],0x00000001u); // 80049FC8
  if (!crb(c,2)) { goto L_80049FE8; } // 80049FCC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 80049FD0
  cmpu(c,0,c->r[0],0x00000001u); // 80049FD4
  if (!crb(c,2)) { goto L_80049FE8; } // 80049FD8
  c->r[3]=c->r[31]|c->r[31]; // 80049FDC
  c->r[4]=c->r[13]+0xFFFF9550u; // 80049FE0
  c->lr=0x80049FE8u; f_8031EEDC(c); // 80049FE4
L_80049FE8:;
  W32(c->r[13]+0xFFFF9550u,c->r[30]); // 80049FE8
  c->r[3]=c->r[31]|c->r[31]; // 80049FEC
  c->lr=0x80049FF4u; f_8024B1C0(c); // 80049FF0
L_80049FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80049FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80049FF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80049FFC
  c->lr=c->r[0]; // 8004A000
  c->r[1]=c->r[1]+0x00000010u; // 8004A004
  return; // 8004A008
}

// fn_8004A00C
void f_8004A00C(Ctx* __restrict c) {
  trace_call(0x8004A00Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A00C
  c->r[0]=c->lr; // 8004A010
  c->r[4]=0u+0x00000002u; // 8004A014
  c->r[5]=0u+0x00000001u; // 8004A018
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004A01C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004A020
  c->r[31]=c->r[3]|c->r[3]; // 8004A024
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004A028
  c->r[0]=c->r[0]|0x00000002u; // 8004A02C
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004A030
  c->lr=0x8004A038u; f_8030FFA0(c); // 8004A034
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8004A038
  c->r[31]=R32(c->r[31]+0x00000030u); // 8004A03C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8004A040
  c->r[0]=R32(c->r[31]+0x00000000u); // 8004A044
  cmpu(c,0,c->r[0],c->r[4]); // 8004A048
  if (crb(c,2)) { goto L_8004A11C; } // 8004A04C
  c->r[3]=c->r[31]|c->r[31]; // 8004A050
  c->lr=0x8004A058u; f_8001109C(c); // 8004A054
  c->r[4]=0u+0x00000000u; // 8004A058
  c->r[6]=0u+0x00000001u; // 8004A05C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8004A060
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[6]<<((c->r[4])&31)); // 8004A064
  c->r[7]=c->r[31]+0x0000001Cu; // 8004A068
  W32(c->r[1]+0x00000028u,c->r[7]); // 8004A06C
  c->r[0]=c->r[3]&c->r[0]; // 8004A070
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8004A074
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8004A078
  cmpu(c,0,c->r[0],0x00000001u); // 8004A07C
  W32(c->r[1]+0x00000008u,c->r[7]); // 8004A080
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8004A084
  if (!crb(c,2)) { goto L_8004A0D4; } // 8004A088
  c->r[5]=0u+0x00000002u; // 8004A08C
  c->r[4]=R32(c->r[7]+0x00000000u); // 8004A090
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 8004A094
  c->r[3]=0u+0x00000003u; // 8004A098
  c->r[4]=c->r[4]|c->r[0]; // 8004A09C
  W32(c->r[7]+0x00000000u,c->r[4]); // 8004A0A0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 8004A0A4
  c->r[0]=c->r[4]|c->r[0]; // 8004A0A8
  W32(c->r[1]+0x00000030u,c->r[7]); // 8004A0AC
  W32(c->r[1]+0x00000034u,c->r[5]); // 8004A0B0
  W32(c->r[1]+0x00000010u,c->r[7]); // 8004A0B4
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004A0B8
  W32(c->r[1]+0x00000038u,c->r[7]); // 8004A0BC
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8004A0C0
  W32(c->r[1]+0x00000018u,c->r[7]); // 8004A0C4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8004A0C8
  W32(c->r[7]+0x00000000u,c->r[0]); // 8004A0CC
  goto L_8004A0F4; // 8004A0D0
L_8004A0D4:;
  c->r[3]=R32(c->r[7]+0x00000000u); // 8004A0D4
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 8004A0D8
  W32(c->r[1]+0x00000040u,c->r[7]); // 8004A0DC
  c->r[0]=c->r[3]|c->r[0]; // 8004A0E0
  W32(c->r[1]+0x00000044u,c->r[6]); // 8004A0E4
  W32(c->r[1]+0x00000020u,c->r[7]); // 8004A0E8
  W32(c->r[1]+0x00000024u,c->r[6]); // 8004A0EC
  W32(c->r[7]+0x00000000u,c->r[0]); // 8004A0F0
L_8004A0F4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004A0F4
  cmps(c,0,(int32_t)c->r[0],0); // 8004A0F8
  if (crb(c,2)) { goto L_8004A108; } // 8004A0FC
  c->r[3]=c->r[31]|c->r[31]; // 8004A100
  c->lr=0x8004A108u; f_80340A20(c); // 8004A104
L_8004A108:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8004A108
  cmps(c,0,(int32_t)c->r[0],0); // 8004A10C
  if (crb(c,2)) { goto L_8004A11C; } // 8004A110
  c->r[3]=c->r[31]|c->r[31]; // 8004A114
  c->lr=0x8004A11Cu; f_80340B8C(c); // 8004A118
L_8004A11C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004A11C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004A120
  c->lr=c->r[0]; // 8004A124
  c->r[1]=c->r[1]+0x00000050u; // 8004A128
  return; // 8004A12C
}

// fn_8004A130
void f_8004A130(Ctx* __restrict c) {
  trace_call(0x8004A130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A130
  c->r[0]=c->lr; // 8004A134
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A13C
  c->r[31]=c->r[3]|c->r[3]; // 8004A140
  c->lr=0x8004A148u; f_8004A3E8(c); // 8004A144
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A148
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8004A14C
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004A150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A154
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A158
  c->lr=c->r[0]; // 8004A15C
  c->r[1]=c->r[1]+0x00000010u; // 8004A160
  return; // 8004A164
}

// fn_8004A168
void f_8004A168(Ctx* __restrict c) {
  trace_call(0x8004A168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A168
  c->r[0]=c->lr; // 8004A16C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A174
  c->r[31]=c->r[3]|c->r[3]; // 8004A178
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004A17C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 8004A180
  if (!crb(c,2)) { goto L_8004A1A0; } // 8004A184
  c->r[4]=0u+0x00000007u; // 8004A188
  c->r[5]=0u+0x00000001u; // 8004A18C
  c->lr=0x8004A194u; f_8030FFA0(c); // 8004A190
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A194
  c->r[0]=c->r[0]|0x00000008u; // 8004A198
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004A19C
L_8004A1A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A1A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A1A4
  c->lr=c->r[0]; // 8004A1A8
  c->r[1]=c->r[1]+0x00000010u; // 8004A1AC
  return; // 8004A1B0
}

// fn_8004A1B4
void f_8004A1B4(Ctx* __restrict c) {
  trace_call(0x8004A1B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A1B4
  c->r[0]=c->lr; // 8004A1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A1BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A1C0
  c->r[31]=c->r[3]|c->r[3]; // 8004A1C4
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004A1C8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 8004A1CC
  if (crb(c,2)) { goto L_8004A1EC; } // 8004A1D0
  c->r[4]=0u+0x00000007u; // 8004A1D4
  c->r[5]=0u+0x00000000u; // 8004A1D8
  c->lr=0x8004A1E0u; f_8030FFA0(c); // 8004A1DC
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A1E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8004A1E4
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004A1E8
L_8004A1EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A1EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A1F0
  c->lr=c->r[0]; // 8004A1F4
  c->r[1]=c->r[1]+0x00000010u; // 8004A1F8
  return; // 8004A1FC
}

// fn_8004A200
void f_8004A200(Ctx* __restrict c) {
  trace_call(0x8004A200u);
  c->r[4]=R32(c->r[3]+0x00000144u); // 8004A200
  c->r[0]=rotl(c->r[4],31)&0x00000001u; cr0(c,c->r[0]); // 8004A204
  if (crb(c,2)) return; // 8004A208
  c->r[0]=rotl(c->r[4],23)&0x00000001u; cr0(c,c->r[0]); // 8004A20C
  if (!crb(c,2)) return; // 8004A210
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004A214
  {uint32_t ea=c->r[3]+0x0000020Cu; WF32(ea,c->f[1]);} // 8004A218
  c->r[0]=c->r[0]|0x00000200u; // 8004A21C
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004A220
  return; // 8004A224
}

// fn_8004A228
void f_8004A228(Ctx* __restrict c) {
  trace_call(0x8004A228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A228
  c->r[0]=c->lr; // 8004A22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A234
  c->r[31]=c->r[3]|c->r[3]; // 8004A238
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004A23C
  c->r[4]=R32(c->r[3]+0x00000144u); // 8004A240
  c->r[0]=rotl(c->r[4],30)&0x00000001u; cr0(c,c->r[0]); // 8004A244
  if (crb(c,2)) { goto L_8004A30C; } // 8004A248
  c->r[0]=rotl(c->r[4],28)&0x00000001u; cr0(c,c->r[0]); // 8004A24C
  if (!crb(c,2)) { goto L_8004A30C; } // 8004A250
  c->r[3]=R32(c->r[3]+0x000000ACu); // 8004A254
  c->r[4]=0u+0x00000000u; // 8004A258
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8004A25C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8004A260
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A264
  c->r[30]=R32(c->r[3]+0x00000000u); // 8004A268
  c->r[3]=c->r[30]|c->r[30]; // 8004A26C
  c->lr=0x8004A274u; f_802FDFA4(c); // 8004A270
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A274
  c->r[0]=c->r[0]|0x00000010u; // 8004A278
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004A27C
  c->r[3]=R32(c->r[30]+0x00000014u); // 8004A280
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A284
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A288
  W32(c->r[31]+0x000001D0u,c->r[3]); // 8004A28C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8004A290
  c->r[12]=R32(c->r[12]+0x00000038u); // 8004A294
  c->ctr=c->r[12]; // 8004A298
  if (true) { c->lr=0x8004A2A0u; dispatch(c,c->ctr); } // 8004A29C
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004A2A0
  c->r[3]=R32(c->r[31]+0x000001D0u); // 8004A2A4
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8004A2A8
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8004A2AC
  {uint32_t ea=c->r[3]+0x00000270u; psq_store(c,1,ea,0,0);} // 8004A2B0
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 8004A2B4
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8004A2B8
  {uint32_t ea=c->r[3]+0x00000278u; psq_store(c,1,ea,1,0);} // 8004A2BC
  {uint32_t ea=c->r[3]+0x00000280u; psq_store(c,0,ea,0,0);} // 8004A2C0
  {uint32_t ea=c->r[3]+0x00000288u; psq_store(c,0,ea,1,0);} // 8004A2C4
  {uint32_t ea=c->r[3]+0x00000290u; psq_store(c,3,ea,0,0);} // 8004A2C8
  {uint32_t ea=c->r[3]+0x00000298u; psq_store(c,3,ea,1,0);} // 8004A2CC
  {uint32_t ea=c->r[3]+0x000002A0u; psq_store(c,2,ea,0,0);} // 8004A2D0
  {uint32_t ea=c->r[3]+0x000002A8u; psq_store(c,2,ea,1,0);} // 8004A2D4
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A2D8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 8004A2DC
  if (crb(c,2)) { goto L_8004A2F0; } // 8004A2E0
  c->r[3]=c->r[31]|c->r[31]; // 8004A2E4
  c->lr=0x8004A2ECu; f_8004A3B4(c); // 8004A2E8
  goto L_8004A2F8; // 8004A2EC
L_8004A2F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8004A2F0
  c->lr=0x8004A2F8u; f_8004A390(c); // 8004A2F4
L_8004A2F8:;
  c->r[4]=R32(c->r[31]+0x000001D0u); // 8004A2F8
  c->r[3]=c->r[31]|c->r[31]; // 8004A2FC
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 8004A300
  W32(c->r[31]+0x000001D4u,c->r[0]); // 8004A304
  c->lr=0x8004A30Cu; f_8004B074(c); // 8004A308
L_8004A30C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A30C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A310
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004A314
  c->lr=c->r[0]; // 8004A318
  c->r[1]=c->r[1]+0x00000010u; // 8004A31C
  return; // 8004A320
}

// fn_8004A324
void f_8004A324(Ctx* __restrict c) {
  trace_call(0x8004A324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A324
  c->r[0]=c->lr; // 8004A328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A32C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A330
  c->r[31]=c->r[3]|c->r[3]; // 8004A334
  c->r[4]=R32(c->r[3]+0x00000144u); // 8004A338
  c->r[0]=rotl(c->r[4],30)&0x00000001u; cr0(c,c->r[0]); // 8004A33C
  if (crb(c,2)) { goto L_8004A37C; } // 8004A340
  c->r[0]=rotl(c->r[4],28)&0x00000001u; cr0(c,c->r[0]); // 8004A344
  if (crb(c,2)) { goto L_8004A37C; } // 8004A348
  c->r[3]=R32(c->r[3]+0x000000ACu); // 8004A34C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8004A350
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8004A354
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A358
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A35C
  c->lr=0x8004A364u; f_802FE5EC(c); // 8004A360
  c->r[3]=R32(c->r[31]+0x00000144u); // 8004A364
  c->r[0]=0u+0x00000000u; // 8004A368
  W32(c->r[31]+0x000001D0u,c->r[0]); // 8004A36C
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 8004A370
  W32(c->r[31]+0x00000144u,c->r[3]); // 8004A374
  W32(c->r[31]+0x000001D4u,c->r[0]); // 8004A378
L_8004A37C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A37C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A380
  c->lr=c->r[0]; // 8004A384
  c->r[1]=c->r[1]+0x00000010u; // 8004A388
  return; // 8004A38C
}

// fn_8004A390
void f_8004A390(Ctx* __restrict c) {
  trace_call(0x8004A390u);
  c->r[4]=R32(c->r[3]+0x00000144u); // 8004A390
  c->r[0]=rotl(c->r[4],28)&0x00000001u; cr0(c,c->r[0]); // 8004A394
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 8004A398
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004A39C
  if (crb(c,2)) return; // 8004A3A0
  c->r[3]=R32(c->r[3]+0x000001D0u); // 8004A3A4
  c->r[0]=0u+0x00000000u; // 8004A3A8
  W32(c->r[3]+0x00000070u,c->r[0]); // 8004A3AC
  return; // 8004A3B0
}

// fn_8004A3B4
void f_8004A3B4(Ctx* __restrict c) {
  trace_call(0x8004A3B4u);
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004A3B4
  c->r[0]=c->r[0]|0x00000020u; // 8004A3B8
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004A3BC
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 8004A3C0
  if (crb(c,2)) return; // 8004A3C4
  c->r[4]=R32(c->r[3]+0x000001D0u); // 8004A3C8
  c->r[5]=0u+0x00000002u; // 8004A3CC
  c->r[0]=0u+0x00000000u; // 8004A3D0
  W32(c->r[4]+0x00000070u,c->r[5]); // 8004A3D4
  c->r[3]=R32(c->r[3]+0x000001D0u); // 8004A3D8
  W32(c->r[3]+0x00000168u,c->r[0]); // 8004A3DC
  W32(c->r[3]+0x00000170u,c->r[0]); // 8004A3E0
  return; // 8004A3E4
}

// fn_8004A3E8
void f_8004A3E8(Ctx* __restrict c) {
  trace_call(0x8004A3E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A3E8
  c->r[0]=c->lr; // 8004A3EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004A3F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004A3F4
  c->r[31]=c->r[3]|c->r[3]; // 8004A3F8
  W32(c->r[1]+0x00000048u,c->r[30]); // 8004A3FC
  W32(c->r[1]+0x00000044u,c->r[29]); // 8004A400
  W32(c->r[1]+0x00000040u,c->r[28]); // 8004A404
  c->lr=0x8004A40Cu; f_80041F74(c); // 8004A408
  c->r[3]=c->r[31]|c->r[31]; // 8004A40C
  c->r[4]=0u+0x00000007u; // 8004A410
  c->r[5]=0u+0x00000000u; // 8004A414
  c->lr=0x8004A41Cu; f_8030FFA0(c); // 8004A418
  c->r[3]=c->r[31]|c->r[31]; // 8004A41C
  c->r[4]=0u+0x00000002u; // 8004A420
  c->r[5]=0u+0x00000000u; // 8004A424
  c->lr=0x8004A42Cu; f_8030FFA0(c); // 8004A428
  c->r[3]=c->r[31]|c->r[31]; // 8004A42C
  c->r[4]=0u+0x00000003u; // 8004A430
  c->r[5]=0u+0x00000000u; // 8004A434
  c->lr=0x8004A43Cu; f_8030FFA0(c); // 8004A438
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004A43C
  c->r[29]=0u+0x00000000u; // 8004A440
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A444
  c->r[30]=0u+0x00000001u; // 8004A448
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A44C
  c->r[3]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 8004A450
  W32(c->r[31]+0x000001D0u,c->r[29]); // 8004A454
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8004A458
  c->r[28]=R32(c->r[31]+0x00000030u); // 8004A45C
  W32(c->r[31]+0x000001D4u,c->r[29]); // 8004A460
  c->r[0]=rotl(c->r[0],0)&0xFFFFF807u; // 8004A464
  c->r[4]=c->r[28]+0x0000001Cu; // 8004A468
  W32(c->r[31]+0x000001D8u,c->r[29]); // 8004A46C
  W32(c->r[31]+0x000001E4u,c->r[29]); // 8004A470
  W32(c->r[31]+0x000001E8u,c->r[29]); // 8004A474
  {uint32_t ea=c->r[31]+0x000001F4u; WF32(ea,c->f[1]);} // 8004A478
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[0]);} // 8004A47C
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[1]);} // 8004A480
  {uint32_t ea=c->r[13]+0xFFFF8000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A484
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[0]);} // 8004A488
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[1]);} // 8004A48C
  W32(c->r[31]+0x000001E0u,c->r[29]); // 8004A490
  {uint32_t ea=c->r[31]+0x00000254u; WF32(ea,c->f[1]);} // 8004A494
  {uint32_t ea=c->r[31]+0x00000258u; WF32(ea,c->f[1]);} // 8004A498
  {uint32_t ea=c->r[31]+0x00000200u; WF32(ea,c->f[1]);} // 8004A49C
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[1]);} // 8004A4A0
  W32(c->r[31]+0x00000144u,c->r[0]); // 8004A4A4
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8004A4A8
  W32(c->r[1]+0x00000020u,c->r[4]); // 8004A4AC
  c->r[0]=c->r[3]&c->r[0]; // 8004A4B0
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); cr0(c,c->r[0]); // 8004A4B4
  W32(c->r[1]+0x00000024u,c->r[29]); // 8004A4B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 8004A4BC
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8004A4C0
  if (crb(c,2)) { goto L_8004A510; } // 8004A4C4
  c->r[3]=c->r[28]|c->r[28]; // 8004A4C8
  c->lr=0x8004A4D0u; f_8034007C(c); // 8004A4CC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8004A4D0
  c->r[5]=c->r[28]+0x0000001Cu; // 8004A4D4
  c->r[3]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 8004A4D8
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[30]<<((c->r[30])&31)); // 8004A4DC
  c->r[3]=c->r[4]&~c->r[3]; // 8004A4E0
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 8004A4E4
  c->r[0]=c->r[3]|c->r[0]; // 8004A4E8
  W32(c->r[1]+0x00000028u,c->r[5]); // 8004A4EC
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 8004A4F0
  W32(c->r[1]+0x00000010u,c->r[5]); // 8004A4F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004A4F8
  W32(c->r[1]+0x00000030u,c->r[5]); // 8004A4FC
  W32(c->r[1]+0x00000034u,c->r[30]); // 8004A500
  W32(c->r[1]+0x00000018u,c->r[5]); // 8004A504
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 8004A508
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8004A50C
L_8004A510:;
  c->r[28]=R32(c->r[31]+0x00000030u); // 8004A510
  c->r[0]=R32(c->r[28]+0x00000004u); // 8004A514
  cmps(c,0,(int32_t)c->r[0],0); // 8004A518
  if (crb(c,2)) { goto L_8004A528; } // 8004A51C
  c->r[3]=c->r[28]|c->r[28]; // 8004A520
  c->lr=0x8004A528u; f_80340A20(c); // 8004A524
L_8004A528:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 8004A528
  cmps(c,0,(int32_t)c->r[0],0); // 8004A52C
  if (crb(c,2)) { goto L_8004A548; } // 8004A530
  c->r[3]=c->r[28]|c->r[28]; // 8004A534
  c->lr=0x8004A53Cu; f_80340B8C(c); // 8004A538
  goto L_8004A548; // 8004A53C
L_8004A540:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 8004A540
  c->lr=0x8004A548u; f_8004B33C(c); // 8004A544
L_8004A548:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8004A548
  cmps(c,0,(int32_t)c->r[3],0); // 8004A54C
  if (!crb(c,2)) { IRQCHK(c); goto L_8004A540; } // 8004A550
  c->r[3]=c->r[28]|c->r[28]; // 8004A554
  c->r[4]=0u+0x00000000u; // 8004A558
  c->lr=0x8004A560u; f_8001109C(c); // 8004A55C
  c->r[28]=R32(c->r[31]+0x000000B0u); // 8004A560
  cmps(c,0,(int32_t)c->r[28],0); // 8004A564
  if (crb(c,2)) { goto L_8004A588; } // 8004A568
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8004A56C
  cmps(c,0,(int32_t)c->r[3],0); // 8004A570
  if (crb(c,2)) { goto L_8004A57C; } // 8004A574
  c->lr=0x8004A57Cu; f_8031AE64(c); // 8004A578
L_8004A57C:;
  c->r[0]=0u+0x00000000u; // 8004A57C
  W32(c->r[28]+0x00000020u,c->r[0]); // 8004A580
  W32(c->r[28]+0x00000024u,c->r[0]); // 8004A584
L_8004A588:;
  c->r[0]=R32(c->r[31]+0x00000144u); // 8004A588
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 8004A58C
  if (crb(c,2)) { goto L_8004A5B8; } // 8004A590
  c->r[3]=R32(c->r[31]+0x000000ACu); // 8004A594
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8004A598
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8004A59C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A5A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004A5A4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8004A5A8
  cmps(c,0,(int32_t)c->r[0],0); // 8004A5AC
  if (crb(c,2)) { goto L_8004A5B8; } // 8004A5B0
  c->lr=0x8004A5B8u; f_802FE5EC(c); // 8004A5B4
L_8004A5B8:;
  c->r[3]=c->r[31]|c->r[31]; // 8004A5B8
  c->r[4]=0u+0x00000000u; // 8004A5BC
  c->r[5]=0u+0x00000000u; // 8004A5C0
  c->lr=0x8004A5C8u; f_8004A638(c); // 8004A5C4
  c->r[3]=c->r[31]+0x00000150u; // 8004A5C8
  c->lr=0x8004A5D0u; f_8009AD70(c); // 8004A5CC
  c->r[0]=0u+0x00000000u; // 8004A5D0
  W32(c->r[31]+0x000001C0u,c->r[0]); // 8004A5D4
  c->r[4]=0u+0x804B0000u; // 8004A5D8
  W32(c->r[31]+0x0000025Cu,c->r[0]); // 8004A5DC
  c->r[3]=c->r[4]+0xFFFFC5A0u; // 8004A5E0
  {uint32_t ea=c->r[4]+0xFFFFC5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A5E4
  {uint32_t ea=c->r[31]+0x00000260u; WF32(ea,c->f[0]);} // 8004A5E8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A5EC
  {uint32_t ea=c->r[31]+0x00000264u; WF32(ea,c->f[0]);} // 8004A5F0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A5F4
  {uint32_t ea=c->r[31]+0x00000268u; WF32(ea,c->f[0]);} // 8004A5F8
  {uint32_t ea=c->r[4]+0xFFFFC5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A5FC
  {uint32_t ea=c->r[31]+0x00000270u; WF32(ea,c->f[0]);} // 8004A600
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A604
  {uint32_t ea=c->r[31]+0x00000274u; WF32(ea,c->f[0]);} // 8004A608
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A60C
  {uint32_t ea=c->r[31]+0x00000278u; WF32(ea,c->f[0]);} // 8004A610
  W32(c->r[31]+0x00000280u,c->r[0]); // 8004A614
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004A618
  c->r[30]=R32(c->r[1]+0x00000048u); // 8004A61C
  c->r[29]=R32(c->r[1]+0x00000044u); // 8004A620
  c->r[28]=R32(c->r[1]+0x00000040u); // 8004A624
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004A628
  c->lr=c->r[0]; // 8004A62C
  c->r[1]=c->r[1]+0x00000050u; // 8004A630
  return; // 8004A634
}

// fn_8004A638
void f_8004A638(Ctx* __restrict c) {
  trace_call(0x8004A638u);
  W32(c->r[3]+0x000001D8u,c->r[4]); // 8004A638
  W32(c->r[3]+0x000001DCu,c->r[5]); // 8004A63C
  f_8004B074(c); return; // 8004A640
}

// fn_8004A644
void f_8004A644(Ctx* __restrict c) {
  trace_call(0x8004A644u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A644
  c->r[0]=c->lr; // 8004A648
  W32(c->r[1]+0x00000104u,c->r[0]); // 8004A64C
  c->r[0]=0u+0x00000006u; // 8004A650
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 8004A654
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 8004A658
  W32(c->r[1]+0x000000ECu,c->r[31]); // 8004A65C
  c->r[31]=0u+0x00000001u; // 8004A660
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 8004A664
  W32(c->r[1]+0x000000E8u,c->r[30]); // 8004A668
  W32(c->r[1]+0x000000E4u,c->r[29]); // 8004A66C
  c->r[29]=c->r[5]|c->r[5]; // 8004A670
  W32(c->r[1]+0x000000E0u,c->r[28]); // 8004A674
  c->r[28]=c->r[3]|c->r[3]; // 8004A678
  c->r[7]=R32(c->r[3]+0x00000144u); // 8004A67C
  W32(c->r[3]+0x000001E4u,c->r[4]); // 8004A680
  c->r[0]=c->r[7]|c->r[0]; // 8004A684
  c->r[30]=R32(c->r[3]+0x00000030u); // 8004A688
  W32(c->r[3]+0x000001E8u,c->r[5]); // 8004A68C
  W32(c->r[3]+0x000001FCu,c->r[6]); // 8004A690
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004A694
  c->r[3]=c->r[30]|c->r[30]; // 8004A698
  c->r[4]=R32(c->r[4]+0x00000030u); // 8004A69C
  c->lr=0x8004A6A4u; f_8001109C(c); // 8004A6A0
  c->r[4]=0u+0x00000000u; // 8004A6A4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8004A6A8
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[31]<<((c->r[4])&31)); // 8004A6AC
  c->r[6]=c->r[30]+0x0000001Cu; // 8004A6B0
  c->r[0]=c->r[3]&c->r[0]; // 8004A6B4
  W32(c->r[1]+0x000000C0u,c->r[6]); // 8004A6B8
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8004A6BC
  cmpu(c,1,c->r[0],0x00000001u); // 8004A6C0
  W32(c->r[1]+0x000000C4u,c->r[4]); // 8004A6C4
  W32(c->r[1]+0x00000048u,c->r[6]); // 8004A6C8
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 8004A6CC
  W32(c->r[1]+0x000000A0u,c->r[6]); // 8004A6D0
  W32(c->r[1]+0x000000A4u,c->r[4]); // 8004A6D4
  if (!crb(c,6)) { goto L_8004A734; } // 8004A6D8
  c->r[5]=0u+0x00000002u; // 8004A6DC
  c->r[4]=R32(c->r[6]+0x00000000u); // 8004A6E0
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[31]<<((c->r[5])&31)); // 8004A6E4
  c->r[3]=0u+0x00000003u; // 8004A6E8
  c->r[4]=c->r[4]|c->r[0]; // 8004A6EC
  W32(c->r[6]+0x00000000u,c->r[4]); // 8004A6F0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[31]<<((c->r[3])&31)); // 8004A6F4
  c->r[0]=c->r[4]|c->r[0]; // 8004A6F8
  W32(c->r[1]+0x000000C8u,c->r[6]); // 8004A6FC
  W32(c->r[1]+0x000000CCu,c->r[5]); // 8004A700
  W32(c->r[1]+0x00000040u,c->r[6]); // 8004A704
  W32(c->r[1]+0x00000044u,c->r[5]); // 8004A708
  W32(c->r[1]+0x000000A8u,c->r[6]); // 8004A70C
  W32(c->r[1]+0x000000ACu,c->r[5]); // 8004A710
  W32(c->r[1]+0x000000D0u,c->r[6]); // 8004A714
  W32(c->r[1]+0x000000D4u,c->r[3]); // 8004A718
  W32(c->r[1]+0x00000038u,c->r[6]); // 8004A71C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8004A720
  W32(c->r[1]+0x000000B0u,c->r[6]); // 8004A724
  W32(c->r[1]+0x000000B4u,c->r[3]); // 8004A728
  W32(c->r[6]+0x00000000u,c->r[0]); // 8004A72C
  goto L_8004A75C; // 8004A730
L_8004A734:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 8004A734
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[31]<<((c->r[31])&31)); // 8004A738
  W32(c->r[1]+0x000000D8u,c->r[6]); // 8004A73C
  c->r[0]=c->r[3]|c->r[0]; // 8004A740
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8004A744
  W32(c->r[1]+0x00000030u,c->r[6]); // 8004A748
  W32(c->r[1]+0x00000034u,c->r[31]); // 8004A74C
  W32(c->r[1]+0x000000B8u,c->r[6]); // 8004A750
  W32(c->r[1]+0x000000BCu,c->r[31]); // 8004A754
  W32(c->r[6]+0x00000000u,c->r[0]); // 8004A758
L_8004A75C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8004A75C
  cmps(c,1,(int32_t)c->r[0],0); // 8004A760
  if (crb(c,6)) { goto L_8004A770; } // 8004A764
  c->r[3]=c->r[30]|c->r[30]; // 8004A768
  c->lr=0x8004A770u; f_80340A20(c); // 8004A76C
L_8004A770:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8004A770
  cmps(c,1,(int32_t)c->r[0],0); // 8004A774
  if (crb(c,6)) { goto L_8004A784; } // 8004A778
  c->r[3]=c->r[30]|c->r[30]; // 8004A77C
  c->lr=0x8004A784u; f_80340B8C(c); // 8004A780
L_8004A784:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 8004A784
  c->r[7]=0u+0x00000000u; // 8004A788
  c->r[6]=0u+0x00000001u; // 8004A78C
  W32(c->r[1]+0x0000008Cu,c->r[7]); // 8004A790
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8004A794
  c->r[8]=c->r[3]+0x0000001Cu; // 8004A798
  c->r[5]=((c->r[7])&0x20)?0u:(c->r[6]<<((c->r[7])&31)); // 8004A79C
  W32(c->r[1]+0x00000088u,c->r[8]); // 8004A7A0
  c->r[0]=c->r[5]&c->r[0]; // 8004A7A4
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 8004A7A8
  W32(c->r[1]+0x00000028u,c->r[8]); // 8004A7AC
  cmpu(c,1,c->r[0],0x00000001u); // 8004A7B0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8004A7B4
  W32(c->r[1]+0x00000070u,c->r[8]); // 8004A7B8
  W32(c->r[1]+0x00000074u,c->r[7]); // 8004A7BC
  if (crb(c,6)) { goto L_8004A810; } // 8004A7C0
  c->r[4]=R32(c->r[8]+0x00000000u); // 8004A7C4
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 8004A7C8
  W32(c->r[1]+0x00000090u,c->r[8]); // 8004A7CC
  c->r[4]=c->r[4]|c->r[5]; // 8004A7D0
  W32(c->r[8]+0x00000000u,c->r[4]); // 8004A7D4
  c->r[0]=c->r[4]|c->r[0]; // 8004A7D8
  W32(c->r[1]+0x00000094u,c->r[7]); // 8004A7DC
  W32(c->r[1]+0x00000020u,c->r[8]); // 8004A7E0
  W32(c->r[1]+0x00000024u,c->r[7]); // 8004A7E4
  W32(c->r[1]+0x00000078u,c->r[8]); // 8004A7E8
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 8004A7EC
  W32(c->r[1]+0x00000098u,c->r[8]); // 8004A7F0
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 8004A7F4
  W32(c->r[1]+0x00000018u,c->r[8]); // 8004A7F8
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 8004A7FC
  W32(c->r[1]+0x00000080u,c->r[8]); // 8004A800
  W32(c->r[1]+0x00000084u,c->r[6]); // 8004A804
  W32(c->r[8]+0x00000000u,c->r[0]); // 8004A808
  c->lr=0x8004A810u; f_8034007C(c); // 8004A80C
L_8004A810:;
  c->r[30]=R32(c->r[28]+0x00000030u); // 8004A810
  c->r[4]=0u+0x804B0000u; // 8004A814
  {uint32_t ea=c->r[4]+0xFFFFC570u; c->r[0]=R32(ea); c->r[4]=ea;} // 8004A818
  c->r[5]=0u+0x00000000u; // 8004A81C
  c->r[3]=R32(c->r[30]+0x00000020u); // 8004A820
  c->r[6]=0u+0x00000000u; // 8004A824
  c->r[7]=0u+0x00000000u; // 8004A828
  c->r[8]=0u+0x00000000u; // 8004A82C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A830
  if (!crb(c,6)) { goto L_8004A84C; } // 8004A834
  c->r[3]=R32(c->r[30]+0x00000024u); // 8004A838
  c->r[0]=R32(c->r[4]+0x00000004u); // 8004A83C
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A840
  if (!crb(c,6)) { goto L_8004A84C; } // 8004A844
  c->r[8]=0u+0x00000001u; // 8004A848
L_8004A84C:;
  cmps(c,1,(int32_t)c->r[8],0); // 8004A84C
  if (crb(c,6)) { goto L_8004A868; } // 8004A850
  c->r[3]=R32(c->r[30]+0x00000028u); // 8004A854
  c->r[0]=R32(c->r[4]+0x00000008u); // 8004A858
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A85C
  if (!crb(c,6)) { goto L_8004A868; } // 8004A860
  c->r[7]=0u+0x00000001u; // 8004A864
L_8004A868:;
  cmps(c,1,(int32_t)c->r[7],0); // 8004A868
  if (crb(c,6)) { goto L_8004A8E4; } // 8004A86C
  c->r[3]=R32(c->r[30]+0x00000030u); // 8004A870
  c->r[7]=0u+0x00000000u; // 8004A874
  c->r[0]=R32(c->r[4]+0x00000010u); // 8004A878
  c->r[8]=0u+0x00000000u; // 8004A87C
  c->r[9]=0u+0x00000000u; // 8004A880
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A884
  if (!crb(c,6)) { goto L_8004A8A0; } // 8004A888
  c->r[3]=R32(c->r[30]+0x00000034u); // 8004A88C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8004A890
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A894
  if (!crb(c,6)) { goto L_8004A8A0; } // 8004A898
  c->r[9]=0u+0x00000001u; // 8004A89C
L_8004A8A0:;
  cmps(c,1,(int32_t)c->r[9],0); // 8004A8A0
  if (crb(c,6)) { goto L_8004A8BC; } // 8004A8A4
  c->r[3]=R32(c->r[30]+0x00000038u); // 8004A8A8
  c->r[0]=R32(c->r[4]+0x00000018u); // 8004A8AC
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A8B0
  if (!crb(c,6)) { goto L_8004A8BC; } // 8004A8B4
  c->r[8]=0u+0x00000001u; // 8004A8B8
L_8004A8BC:;
  cmps(c,1,(int32_t)c->r[8],0); // 8004A8BC
  if (crb(c,6)) { goto L_8004A8D8; } // 8004A8C0
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 8004A8C4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8004A8C8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A8CC
  if (!crb(c,6)) { goto L_8004A8D8; } // 8004A8D0
  c->r[7]=0u+0x00000001u; // 8004A8D4
L_8004A8D8:;
  cmps(c,1,(int32_t)c->r[7],0); // 8004A8D8
  if (crb(c,6)) { goto L_8004A8E4; } // 8004A8DC
  c->r[6]=0u+0x00000001u; // 8004A8E0
L_8004A8E4:;
  cmps(c,1,(int32_t)c->r[6],0); // 8004A8E4
  if (crb(c,6)) { goto L_8004A940; } // 8004A8E8
  c->r[3]=R32(c->r[30]+0x00000040u); // 8004A8EC
  c->r[6]=0u+0x00000000u; // 8004A8F0
  c->r[0]=R32(c->r[4]+0x00000020u); // 8004A8F4
  c->r[7]=0u+0x00000000u; // 8004A8F8
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A8FC
  if (!crb(c,6)) { goto L_8004A918; } // 8004A900
  c->r[3]=R32(c->r[30]+0x00000044u); // 8004A904
  c->r[0]=R32(c->r[4]+0x00000024u); // 8004A908
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A90C
  if (!crb(c,6)) { goto L_8004A918; } // 8004A910
  c->r[7]=0u+0x00000001u; // 8004A914
L_8004A918:;
  cmps(c,1,(int32_t)c->r[7],0); // 8004A918
  if (crb(c,6)) { goto L_8004A934; } // 8004A91C
  c->r[3]=R32(c->r[30]+0x00000048u); // 8004A920
  c->r[0]=R32(c->r[4]+0x00000028u); // 8004A924
  cmps(c,1,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004A928
  if (!crb(c,6)) { goto L_8004A934; } // 8004A92C
  c->r[6]=0u+0x00000001u; // 8004A930
L_8004A934:;
  cmps(c,1,(int32_t)c->r[6],0); // 8004A934
  if (crb(c,6)) { goto L_8004A940; } // 8004A938
  c->r[5]=0u+0x00000001u; // 8004A93C
L_8004A940:;
  cmps(c,1,(int32_t)c->r[5],0); // 8004A940
  if (!crb(c,6)) { goto L_8004AA70; } // 8004A944
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A948
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[31]); // 8004A94C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 8004A950
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A954
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 8004A958
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A95C
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8004A960
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A964
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8004A968
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A96C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8004A970
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A974
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8004A978
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A97C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8004A980
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A984
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 8004A988
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A98C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 8004A990
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A994
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8004A998
  {uint32_t ea=c->r[30]+0x00000030u; psq_load(c,0,ea,0,0);} // 8004A99C
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,1,ea,0,0);} // 8004A9A0
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8004A9A4
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 8004A9A8
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8004A9AC
  fcmp(c,0,c->f[2],c->f[3]); // 8004A9B0
  if (crb(c,2)) { goto L_8004A9D4; } // 8004A9B4
  c->f[0]=frsqrte(c->f[2]); // 8004A9B8
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[31]=c->ps1[31]=RF32(ea);} // 8004A9BC
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004A9C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 8004A9C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8004A9C8
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[3])); // 8004A9CC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8004A9D0
L_8004A9D4:;
  {uint32_t ea=c->r[30]+0x00000030u; psq_load(c,0,ea,0,0);} // 8004A9D4
  c->r[7]=c->r[30]+0x0000001Cu; // 8004A9D8
  c->r[6]=0u+0x00000002u; // 8004A9DC
  c->r[3]=0u+0x00000003u; // 8004A9E0
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,1,ea,0,0);} // 8004A9E4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8004A9E8
  c->r[0]=0u+0x00000001u; // 8004A9EC
  W32(c->r[1]+0x00000060u,c->r[7]); // 8004A9F0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8004A9F4
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 8004A9F8
  {uint32_t ea=c->r[30]+0x00000030u; psq_store(c,0,ea,0,0);} // 8004A9FC
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 8004AA00
  {uint32_t ea=c->r[30]+0x00000038u; psq_store(c,1,ea,0,0);} // 8004AA04
  c->r[5]=R32(c->r[30]+0x0000001Cu); // 8004AA08
  W32(c->r[1]+0x00000064u,c->r[6]); // 8004AA0C
  c->r[4]=c->r[5]|c->r[4]; // 8004AA10
  W32(c->r[30]+0x0000001Cu,c->r[4]); // 8004AA14
  c->r[0]=c->r[4]|c->r[0]; // 8004AA18
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8004AA1C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8004AA20
  W32(c->r[1]+0x00000010u,c->r[7]); // 8004AA24
  cmps(c,1,(int32_t)c->r[0],0); // 8004AA28
  W32(c->r[1]+0x00000014u,c->r[6]); // 8004AA2C
  W32(c->r[1]+0x00000050u,c->r[7]); // 8004AA30
  W32(c->r[1]+0x00000054u,c->r[6]); // 8004AA34
  W32(c->r[1]+0x00000068u,c->r[7]); // 8004AA38
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 8004AA3C
  W32(c->r[1]+0x00000008u,c->r[7]); // 8004AA40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004AA44
  W32(c->r[1]+0x00000058u,c->r[7]); // 8004AA48
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 8004AA4C
  if (crb(c,6)) { goto L_8004AA5C; } // 8004AA50
  c->r[3]=c->r[30]|c->r[30]; // 8004AA54
  c->lr=0x8004AA5Cu; f_80340A20(c); // 8004AA58
L_8004AA5C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8004AA5C
  cmps(c,1,(int32_t)c->r[0],0); // 8004AA60
  if (crb(c,6)) { goto L_8004AA70; } // 8004AA64
  c->r[3]=c->r[30]|c->r[30]; // 8004AA68
  c->lr=0x8004AA70u; f_80340B8C(c); // 8004AA6C
L_8004AA70:;
  c->r[0]=0u-c->r[29]; // 8004AA70
  c->r[0]=c->r[0]|c->r[29]; // 8004AA74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8004AA78
  if (crb(c,2)) { goto L_8004AA9C; } // 8004AA7C
  c->r[3]=R32(c->r[28]+0x00000144u); // 8004AA80
  c->r[4]=0u+0x00000007u; // 8004AA84
  c->r[0]=0u+0x00000001u; // 8004AA88
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8004AA8C
  c->r[0]=c->r[3]|c->r[0]; // 8004AA90
  W32(c->r[28]+0x00000144u,c->r[0]); // 8004AA94
  goto L_8004AAB4; // 8004AA98
L_8004AA9C:;
  c->r[3]=R32(c->r[28]+0x00000144u); // 8004AA9C
  c->r[4]=0u+0x00000007u; // 8004AAA0
  c->r[0]=0u+0x00000001u; // 8004AAA4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8004AAA8
  c->r[0]=c->r[3]&~c->r[0]; // 8004AAAC
  W32(c->r[28]+0x00000144u,c->r[0]); // 8004AAB0
L_8004AAB4:;
  c->r[3]=c->r[28]|c->r[28]; // 8004AAB4
  c->r[4]=0u+0x00000003u; // 8004AAB8
  c->r[5]=0u+0x00000001u; // 8004AABC
  c->lr=0x8004AAC4u; f_8030FFA0(c); // 8004AAC0
  c->r[0]=R32(c->r[1]+0x00000104u); // 8004AAC4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 8004AAC8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 8004AACC
  c->r[31]=R32(c->r[1]+0x000000ECu); // 8004AAD0
  c->r[30]=R32(c->r[1]+0x000000E8u); // 8004AAD4
  c->r[29]=R32(c->r[1]+0x000000E4u); // 8004AAD8
  c->r[28]=R32(c->r[1]+0x000000E0u); // 8004AADC
  c->lr=c->r[0]; // 8004AAE0
  c->r[1]=c->r[1]+0x00000100u; // 8004AAE4
  return; // 8004AAE8
}

// fn_8004AAEC
void f_8004AAEC(Ctx* __restrict c) {
  trace_call(0x8004AAECu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AAEC
  c->r[0]=c->lr; // 8004AAF0
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004AAF4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8004AAF8
  c->r[31]=c->r[3]|c->r[3]; // 8004AAFC
  W32(c->r[1]+0x00000088u,c->r[30]); // 8004AB00
  W32(c->r[1]+0x00000084u,c->r[29]); // 8004AB04
  W32(c->r[1]+0x00000080u,c->r[28]); // 8004AB08
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004AB0C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 8004AB10
  if (crb(c,2)) { goto L_8004AC80; } // 8004AB14
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004AB18
  c->r[29]=0u+0x00000000u; // 8004AB1C
  c->r[28]=R32(c->r[3]+0x00000030u); // 8004AB20
  c->r[30]=0u+0x00000001u; // 8004AB24
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF3Fu; // 8004AB28
  W32(c->r[3]+0x000001E4u,c->r[29]); // 8004AB2C
  c->r[5]=c->r[28]+0x0000001Cu; // 8004AB30
  c->r[4]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 8004AB34
  W32(c->r[3]+0x000001E8u,c->r[29]); // 8004AB38
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004AB3C
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8004AB40
  W32(c->r[1]+0x00000060u,c->r[5]); // 8004AB44
  c->r[0]=c->r[4]&c->r[0]; // 8004AB48
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]>>((c->r[29])&31)); cr0(c,c->r[0]); // 8004AB4C
  W32(c->r[1]+0x00000064u,c->r[29]); // 8004AB50
  W32(c->r[1]+0x00000048u,c->r[5]); // 8004AB54
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 8004AB58
  if (crb(c,2)) { goto L_8004ABA8; } // 8004AB5C
  c->r[3]=c->r[28]|c->r[28]; // 8004AB60
  c->lr=0x8004AB68u; f_8034007C(c); // 8004AB64
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8004AB68
  c->r[5]=c->r[28]+0x0000001Cu; // 8004AB6C
  c->r[3]=((c->r[29])&0x20)?0u:(c->r[30]<<((c->r[29])&31)); // 8004AB70
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[30]<<((c->r[30])&31)); // 8004AB74
  c->r[3]=c->r[4]&~c->r[3]; // 8004AB78
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 8004AB7C
  c->r[0]=c->r[3]|c->r[0]; // 8004AB80
  W32(c->r[1]+0x00000068u,c->r[5]); // 8004AB84
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 8004AB88
  W32(c->r[1]+0x00000050u,c->r[5]); // 8004AB8C
  W32(c->r[1]+0x00000054u,c->r[29]); // 8004AB90
  W32(c->r[1]+0x00000070u,c->r[5]); // 8004AB94
  W32(c->r[1]+0x00000074u,c->r[30]); // 8004AB98
  W32(c->r[1]+0x00000058u,c->r[5]); // 8004AB9C
  W32(c->r[1]+0x0000005Cu,c->r[30]); // 8004ABA0
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8004ABA4
L_8004ABA8:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8004ABA8
  c->r[31]=R32(c->r[31]+0x00000030u); // 8004ABAC
  c->r[4]=R32(c->r[3]+0x00000000u); // 8004ABB0
  c->r[3]=c->r[31]|c->r[31]; // 8004ABB4
  c->lr=0x8004ABBCu; f_8001109C(c); // 8004ABB8
  c->r[4]=0u+0x00000000u; // 8004ABBC
  c->r[6]=0u+0x00000001u; // 8004ABC0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8004ABC4
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[6]<<((c->r[4])&31)); // 8004ABC8
  c->r[7]=c->r[31]+0x0000001Cu; // 8004ABCC
  W32(c->r[1]+0x00000028u,c->r[7]); // 8004ABD0
  c->r[0]=c->r[3]&c->r[0]; // 8004ABD4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 8004ABD8
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8004ABDC
  cmpu(c,0,c->r[0],0x00000001u); // 8004ABE0
  W32(c->r[1]+0x00000008u,c->r[7]); // 8004ABE4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8004ABE8
  if (!crb(c,2)) { goto L_8004AC38; } // 8004ABEC
  c->r[5]=0u+0x00000002u; // 8004ABF0
  c->r[4]=R32(c->r[7]+0x00000000u); // 8004ABF4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 8004ABF8
  c->r[3]=0u+0x00000003u; // 8004ABFC
  c->r[4]=c->r[4]|c->r[0]; // 8004AC00
  W32(c->r[7]+0x00000000u,c->r[4]); // 8004AC04
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]<<((c->r[3])&31)); // 8004AC08
  c->r[0]=c->r[4]|c->r[0]; // 8004AC0C
  W32(c->r[1]+0x00000030u,c->r[7]); // 8004AC10
  W32(c->r[1]+0x00000034u,c->r[5]); // 8004AC14
  W32(c->r[1]+0x00000010u,c->r[7]); // 8004AC18
  W32(c->r[1]+0x00000014u,c->r[5]); // 8004AC1C
  W32(c->r[1]+0x00000038u,c->r[7]); // 8004AC20
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8004AC24
  W32(c->r[1]+0x00000018u,c->r[7]); // 8004AC28
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8004AC2C
  W32(c->r[7]+0x00000000u,c->r[0]); // 8004AC30
  goto L_8004AC58; // 8004AC34
L_8004AC38:;
  c->r[3]=R32(c->r[7]+0x00000000u); // 8004AC38
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[6]<<((c->r[6])&31)); // 8004AC3C
  W32(c->r[1]+0x00000040u,c->r[7]); // 8004AC40
  c->r[0]=c->r[3]|c->r[0]; // 8004AC44
  W32(c->r[1]+0x00000044u,c->r[6]); // 8004AC48
  W32(c->r[1]+0x00000020u,c->r[7]); // 8004AC4C
  W32(c->r[1]+0x00000024u,c->r[6]); // 8004AC50
  W32(c->r[7]+0x00000000u,c->r[0]); // 8004AC54
L_8004AC58:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8004AC58
  cmps(c,0,(int32_t)c->r[0],0); // 8004AC5C
  if (crb(c,2)) { goto L_8004AC6C; } // 8004AC60
  c->r[3]=c->r[31]|c->r[31]; // 8004AC64
  c->lr=0x8004AC6Cu; f_80340A20(c); // 8004AC68
L_8004AC6C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8004AC6C
  cmps(c,0,(int32_t)c->r[0],0); // 8004AC70
  if (crb(c,2)) { goto L_8004AC80; } // 8004AC74
  c->r[3]=c->r[31]|c->r[31]; // 8004AC78
  c->lr=0x8004AC80u; f_80340B8C(c); // 8004AC7C
L_8004AC80:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004AC80
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8004AC84
  c->r[30]=R32(c->r[1]+0x00000088u); // 8004AC88
  c->r[29]=R32(c->r[1]+0x00000084u); // 8004AC8C
  c->r[28]=R32(c->r[1]+0x00000080u); // 8004AC90
  c->lr=c->r[0]; // 8004AC94
  c->r[1]=c->r[1]+0x00000090u; // 8004AC98
  return; // 8004AC9C
}

// fn_8004ACA0
void f_8004ACA0(Ctx* __restrict c) {
  trace_call(0x8004ACA0u);
  c->r[7]=R32(c->r[3]+0x00000144u); // 8004ACA0
  c->r[0]=rotl(c->r[7],30)&0x00000001u; cr0(c,c->r[0]); // 8004ACA4
  if (crb(c,2)) return; // 8004ACA8
  c->r[0]=rotl(c->r[7],28)&0x00000001u; cr0(c,c->r[0]); // 8004ACAC
  if (crb(c,2)) return; // 8004ACB0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 8004ACB4
  cmps(c,0,(int32_t)c->r[6],0); // 8004ACB8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8004ACBC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004ACC0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004ACC4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004ACC8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004ACCC
  {uint32_t ea=c->r[3]+0x00000220u; WF32(ea,c->f[6]);} // 8004ACD0
  c->r[5]=R32(c->r[3]+0x000001D0u); // 8004ACD4
  {uint32_t ea=c->r[3]+0x00000224u; WF32(ea,c->f[5]);} // 8004ACD8
  {uint32_t ea=c->r[3]+0x00000228u; WF32(ea,c->f[4]);} // 8004ACDC
  {uint32_t ea=c->r[3]+0x00000230u; WF32(ea,c->f[3]);} // 8004ACE0
  {uint32_t ea=c->r[3]+0x00000234u; WF32(ea,c->f[2]);} // 8004ACE4
  {uint32_t ea=c->r[3]+0x00000238u; WF32(ea,c->f[0]);} // 8004ACE8
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[1]);} // 8004ACEC
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[1]);} // 8004ACF0
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004ACF4
  {uint32_t ea=c->r[3]+0x00000240u; WF32(ea,c->f[0]);} // 8004ACF8
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004ACFC
  {uint32_t ea=c->r[3]+0x00000244u; WF32(ea,c->f[0]);} // 8004AD00
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004AD04
  {uint32_t ea=c->r[3]+0x00000248u; WF32(ea,c->f[0]);} // 8004AD08
  W32(c->r[3]+0x00000250u,c->r[6]); // 8004AD0C
  if (crb(c,2)) { goto L_8004AD34; } // 8004AD10
  c->r[4]=0u+0x804B0000u; // 8004AD14
  {uint32_t ea=c->r[4]+0xFFFFC5A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004AD18
  c->r[4]=c->r[4]+0xFFFFC5A0u; // 8004AD1C
  {uint32_t ea=c->r[5]+0x000000F0u; WF32(ea,c->f[0]);} // 8004AD20
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004AD24
  {uint32_t ea=c->r[5]+0x000000F4u; WF32(ea,c->f[0]);} // 8004AD28
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004AD2C
  {uint32_t ea=c->r[5]+0x000000F8u; WF32(ea,c->f[0]);} // 8004AD30
L_8004AD34:;
  c->r[0]=R32(c->r[3]+0x00000144u); // 8004AD34
  c->r[4]=0u+0x00000003u; // 8004AD38
  c->r[5]=0u+0x00000001u; // 8004AD3C
  c->r[0]=c->r[0]|0x00000100u; // 8004AD40
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004AD44
  f_8030FFA0(c); return; // 8004AD48
}

// fn_8004AD4C
void f_8004AD4C(Ctx* __restrict c) {
  trace_call(0x8004AD4Cu);
  return; // 8004AD4C
}

